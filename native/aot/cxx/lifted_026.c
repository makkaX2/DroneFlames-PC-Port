#include "lifted.h"

void fn1_9d2f4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038571764));
  /* 9d2f4: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 9d2f8: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* 9d2fc: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 9d300: stp x24, x23, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 9d304: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 9d308: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 9d30c: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 9d310: movi d0, #0x00ff000000ff00 */
  arc_du_w(c, 0, UINT64_C(280375465148160));
  /* 9d314: sturh wzr, [x2, #0x33] */
  arc_st16((ARC_X_R(c, 2) + INT64_C(51)), ARC_W_R(c, 31));
  /* 9d318: mov x8, x1 */
  ARC_X_W(c, 8, ARC_X_R(c, 1));
  /* 9d31c: stp xzr, xzr, [x2, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 2) + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 9d320: mov x19, x2 */
  ARC_X_W(c, 19, ARC_X_R(c, 2));
  /* 9d324: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 9d328: strh wzr, [x2, #0x30] */
  arc_st16((ARC_X_R(c, 2) + INT64_C(48)), ARC_W_R(c, 31));
  /* 9d32c: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 9d330: str x1, [x2] */
  arc_st64(ARC_X_R(c, 2), ARC_X_R(c, 1));
  /* 9d334: str s0, [x2, #0x18] */
  arc_st32((ARC_X_R(c, 2) + INT64_C(24)), (c)->q[0].u32[0]);
  /* 9d338: ldr w9, [x8], #4 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(4));
    ARC_W_W(c, 9, arc_ld32(_a));
  }
  /* 9d33c: cmn w9, #1 */
  (void)arc_add32(c, ARC_W_R(c, 9), UINT64_C(1), 0);
  /* 9d340: b.eq #0x9d360 */
  if (ARC_COND(c, 0)) goto L_9d360;
  /* 9d344: add x22, x8, x9 */
  ARC_X_W(c, 22, (ARC_X_R(c, 8) + ARC_X_R(c, 9)));
  /* 9d348: cbz x9, #0x9d370 */
  if ((ARC_X_R(c, 9)) == 0) goto L_9d370;
L_9d34c:;
  /* 9d34c: ldr w9, [x8] */
  ARC_W_W(c, 9, arc_ld32(ARC_X_R(c, 8)));
  /* 9d350: cbz w9, #0x9d378 */
  if ((ARC_W_R(c, 9)) == 0) goto L_9d378;
  /* 9d354: adrp x0, #0x51000 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(331776)));
  /* 9d358: add x0, x0, #0xda3 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3491)));
  /* 9d35c: b #0x9d56c */
  goto L_9d56c;
L_9d360:;
  /* 9d360: ldur x9, [x20, #4] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 20) + INT64_C(4))));
  /* 9d364: add x8, x20, #0xc */
  ARC_X_W(c, 8, (ARC_X_R(c, 20) + UINT64_C(12)));
  /* 9d368: add x22, x9, x8 */
  ARC_X_W(c, 22, (ARC_X_R(c, 9) + ARC_X_R(c, 8)));
  /* 9d36c: cbnz x9, #0x9d34c */
  if ((ARC_X_R(c, 9)) != 0) goto L_9d34c;
L_9d370:;
  /* 9d370: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
  /* 9d374: b #0x9d56c */
  goto L_9d56c;
L_9d378:;
  /* 9d378: ldrb w24, [x8, #4] */
  ARC_W_W(c, 24, arc_ld8((ARC_X_R(c, 8) + INT64_C(4))));
  /* 9d37c: and w9, w24, #0xfffffffd */
  ARC_W_W(c, 9, (ARC_W_R(c, 24) & UINT64_C(4294967293)));
  /* 9d380: cmp w9, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(1));
  /* 9d384: b.ne #0x9d430 */
  if (ARC_COND(c, 1)) goto L_9d430;
  /* 9d388: add x23, x8, #5 */
  ARC_X_W(c, 23, (ARC_X_R(c, 8) + UINT64_C(5)));
  /* 9d38c: mov x8, x23 */
  ARC_X_W(c, 8, ARC_X_R(c, 23));
L_9d390:;
  /* 9d390: ldrb w9, [x8], #1 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(1));
    ARC_W_W(c, 9, arc_ld8(_a));
  }
  /* 9d394: cbnz w9, #0x9d390 */
  if ((ARC_W_R(c, 9)) != 0) goto L_9d390;
  /* 9d398: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 9d39c: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 9d3a0: str x8, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 8));
  /* 9d3a4: bl #0x9f258 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(644008));
  fn1_9f258(c);
  /* 9d3a8: ldr x8, [sp, #8] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(8))));
  /* 9d3ac: mov x9, xzr */
  ARC_X_W(c, 9, ARC_X_R(c, 31));
  /* 9d3b0: mov x11, #-7 */
  ARC_X_W(c, 11, UINT64_C(18446744073709551609));
  /* 9d3b4: str w0, [x19, #0x28] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(40)), ARC_W_R(c, 0));
  /* 9d3b8: mov x10, x8 */
  ARC_X_W(c, 10, ARC_X_R(c, 8));
L_9d3bc:;
  /* 9d3bc: cmp x10, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 22));
  /* 9d3c0: b.eq #0x9d588 */
  if (ARC_COND(c, 0)) goto L_9d588;
  /* 9d3c4: ldrb w12, [x10], #1 */
  { const uint64_t _a = ARC_X_R(c, 10);
    ARC_X_W(c, 10, ARC_X_R(c, 10) + INT64_C(1));
    ARC_W_W(c, 12, arc_ld8(_a));
  }
  /* 9d3c8: add x11, x11, #7 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) + UINT64_C(7)));
  /* 9d3cc: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* 9d3d0: and x13, x12, #0x7f */
  ARC_X_W(c, 13, (ARC_X_R(c, 12) & UINT64_C(127)));
  /* 9d3d4: lsl x13, x13, x11 */
  ARC_X_W(c, 13, ((uint64_t)(ARC_X_R(c, 13)) << ((ARC_X_R(c, 11)) & 63)));
  /* 9d3d8: orr x9, x13, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 13) | ARC_X_R(c, 9)));
  /* 9d3dc: tbnz w12, #7, #0x9d3bc */
  if (((ARC_W_R(c, 12)) >> 7 & 1) != 0) goto L_9d3bc;
  /* 9d3e0: add w13, w11, #7 */
  ARC_W_W(c, 13, (ARC_W_R(c, 11) + UINT64_C(7)));
  /* 9d3e4: mov x14, #-1 */
  ARC_X_W(c, 14, UINT64_C(18446744073709551615));
  /* 9d3e8: cmp x11, #0x39 */
  (void)arc_sub64(c, ARC_X_R(c, 11), UINT64_C(57));
  /* 9d3ec: mov w11, #0x3f */
  ARC_W_W(c, 11, UINT64_C(63));
  /* 9d3f0: lsl x13, x14, x13 */
  ARC_X_W(c, 13, ((uint64_t)(ARC_X_R(c, 14)) << ((ARC_X_R(c, 13)) & 63)));
  /* 9d3f4: str x8, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 8));
  /* 9d3f8: ccmp w12, w11, #0, lo */
  if (ARC_COND(c, 3)) { (void)arc_sub32(c, ARC_W_R(c, 12), ARC_W_R(c, 11)); }
  else { (c)->nf = 0; (c)->zf = 0;
          (c)->cf = 0; (c)->vf = 0; }
  /* 9d3fc: csel w11, w13, wzr, hi */
  ARC_W_W(c, 11, (ARC_COND(c, 8) ? (ARC_W_R(c, 13)) : ARC_W_R(c, 31)));
  /* 9d400: cmp w24, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 24), UINT64_C(1));
  /* 9d404: orr w9, w9, w11 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | ARC_W_R(c, 11)));
  /* 9d408: str w9, [x19, #0x2c] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(44)), ARC_W_R(c, 9));
  /* 9d40c: b.ne #0x9d43c */
  if (ARC_COND(c, 1)) goto L_9d43c;
  /* 9d410: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* 9d414: str x8, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 8));
  /* 9d418: ldrb w0, [x10] */
  ARC_W_W(c, 0, arc_ld8(ARC_X_R(c, 10)));
  /* 9d41c: strb w0, [x19, #0x32] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(50)), ARC_W_R(c, 0));
  /* 9d420: ldrb w8, [x23] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 23)));
  /* 9d424: cmp w8, #0x7a */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(122));
  /* 9d428: b.eq #0x9d458 */
  if (ARC_COND(c, 0)) goto L_9d458;
  /* 9d42c: b #0x9d558 */
  goto L_9d558;
L_9d430:;
  /* 9d430: adrp x0, #0x4f000 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(323584)));
  /* 9d434: add x0, x0, #0xbe1 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3041)));
  /* 9d438: b #0x9d56c */
  goto L_9d56c;
L_9d43c:;
  /* 9d43c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 9d440: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 9d444: bl #0x9f258 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(644168));
  fn1_9f258(c);
  /* 9d448: strb w0, [x19, #0x32] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(50)), ARC_W_R(c, 0));
  /* 9d44c: ldrb w8, [x23] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 23)));
  /* 9d450: cmp w8, #0x7a */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(122));
  /* 9d454: b.ne #0x9d558 */
  if (ARC_COND(c, 1)) goto L_9d558;
L_9d458:;
  /* 9d458: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 9d45c: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 9d460: bl #0x9f258 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(644196));
  fn1_9f258(c);
  /* 9d464: mov w24, #1 */
  ARC_W_W(c, 24, UINT64_C(1));
  /* 9d468: b #0x9d474 */
  goto L_9d474;
L_9d46c:;
  /* 9d46c: strb w24, [x19, #0x30] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(48)), ARC_W_R(c, 24));
  /* 9d470: add x23, x23, #1 */
  ARC_X_W(c, 23, (ARC_X_R(c, 23) + UINT64_C(1)));
L_9d474:;
  /* 9d474: ldrb w8, [x23] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 23)));
  /* 9d478: cmp w8, #0x4f */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(79));
  /* 9d47c: b.le #0x9d4b0 */
  if (ARC_COND(c, 13)) goto L_9d4b0;
  /* 9d480: cmp w8, #0x52 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(82));
  /* 9d484: b.gt #0x9d4e0 */
  if (ARC_COND(c, 12)) goto L_9d4e0;
  /* 9d488: cmp w8, #0x50 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(80));
  /* 9d48c: b.eq #0x9d51c */
  if (ARC_COND(c, 0)) goto L_9d51c;
  /* 9d490: cmp w8, #0x52 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(82));
  /* 9d494: b.ne #0x9d514 */
  if (ARC_COND(c, 1)) goto L_9d514;
  /* 9d498: ldr x8, [sp, #8] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(8))));
  /* 9d49c: add x23, x23, #1 */
  ARC_X_W(c, 23, (ARC_X_R(c, 23) + UINT64_C(1)));
  /* 9d4a0: ldrb w9, [x8], #1 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(1));
    ARC_W_W(c, 9, arc_ld8(_a));
  }
  /* 9d4a4: str x8, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 8));
  /* 9d4a8: strb w9, [x19, #0x18] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(24)), ARC_W_R(c, 9));
  /* 9d4ac: b #0x9d474 */
  goto L_9d474;
L_9d4b0:;
  /* 9d4b0: cmp w8, #0x46 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(70));
  /* 9d4b4: b.le #0x9d4fc */
  if (ARC_COND(c, 13)) goto L_9d4fc;
  /* 9d4b8: cmp w8, #0x47 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(71));
  /* 9d4bc: b.eq #0x9d510 */
  if (ARC_COND(c, 0)) goto L_9d510;
  /* 9d4c0: cmp w8, #0x4c */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(76));
  /* 9d4c4: b.ne #0x9d514 */
  if (ARC_COND(c, 1)) goto L_9d514;
  /* 9d4c8: ldr x8, [sp, #8] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(8))));
  /* 9d4cc: add x23, x23, #1 */
  ARC_X_W(c, 23, (ARC_X_R(c, 23) + UINT64_C(1)));
  /* 9d4d0: ldrb w9, [x8], #1 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(1));
    ARC_W_W(c, 9, arc_ld8(_a));
  }
  /* 9d4d4: str x8, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 8));
  /* 9d4d8: strb w9, [x19, #0x19] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(25)), ARC_W_R(c, 9));
  /* 9d4dc: b #0x9d474 */
  goto L_9d474;
L_9d4e0:;
  /* 9d4e0: cmp w8, #0x53 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(83));
  /* 9d4e4: b.eq #0x9d46c */
  if (ARC_COND(c, 0)) goto L_9d46c;
  /* 9d4e8: cmp w8, #0x7a */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(122));
  /* 9d4ec: b.ne #0x9d514 */
  if (ARC_COND(c, 1)) goto L_9d514;
  /* 9d4f0: strb w24, [x19, #0x31] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(49)), ARC_W_R(c, 24));
  /* 9d4f4: add x23, x23, #1 */
  ARC_X_W(c, 23, (ARC_X_R(c, 23) + UINT64_C(1)));
  /* 9d4f8: b #0x9d474 */
  goto L_9d474;
L_9d4fc:;
  /* 9d4fc: cmp w8, #0x42 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(66));
  /* 9d500: b.ne #0x9d554 */
  if (ARC_COND(c, 1)) goto L_9d554;
  /* 9d504: strb w24, [x19, #0x33] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(51)), ARC_W_R(c, 24));
  /* 9d508: add x23, x23, #1 */
  ARC_X_W(c, 23, (ARC_X_R(c, 23) + UINT64_C(1)));
  /* 9d50c: b #0x9d474 */
  goto L_9d474;
L_9d510:;
  /* 9d510: strb w24, [x19, #0x34] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(52)), ARC_W_R(c, 24));
L_9d514:;
  /* 9d514: add x23, x23, #1 */
  ARC_X_W(c, 23, (ARC_X_R(c, 23) + UINT64_C(1)));
  /* 9d518: b #0x9d474 */
  goto L_9d474;
L_9d51c:;
  /* 9d51c: ldr x8, [sp, #8] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(8))));
  /* 9d520: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 9d524: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 9d528: mov x2, x22 */
  ARC_X_W(c, 2, ARC_X_R(c, 22));
  /* 9d52c: mov x4, xzr */
  ARC_X_W(c, 4, ARC_X_R(c, 31));
  /* 9d530: ldrb w3, [x8], #1 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(1));
    ARC_W_W(c, 3, arc_ld8(_a));
  }
  /* 9d534: str x8, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 8));
  /* 9d538: sub w8, w8, w20 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) - ARC_W_R(c, 20)));
  /* 9d53c: strb w3, [x19, #0x1a] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(26)), ARC_W_R(c, 3));
  /* 9d540: strb w8, [x19, #0x1b] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(27)), ARC_W_R(c, 8));
  /* 9d544: bl #0x9eecc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(644424));
  fn1_9eecc(c);
  /* 9d548: str x0, [x19, #0x20] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(32)), ARC_X_R(c, 0));
  /* 9d54c: add x23, x23, #1 */
  ARC_X_W(c, 23, (ARC_X_R(c, 23) + UINT64_C(1)));
  /* 9d550: b #0x9d474 */
  goto L_9d474;
L_9d554:;
  /* 9d554: cbnz w8, #0x9d514 */
  if ((ARC_W_R(c, 8)) != 0) goto L_9d514;
L_9d558:;
  /* 9d558: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 9d55c: ldr x9, [sp, #8] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(8))));
  /* 9d560: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
  /* 9d564: sub x8, x22, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 22) - ARC_X_R(c, 8)));
  /* 9d568: stp x8, x9, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
L_9d56c:;
  /* 9d56c: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 9d570: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 9d574: ldp x24, x23, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 9d578: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 9d57c: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* 9d580: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 9d584: ret  */
  return;
L_9d588:;
  /* 9d588: adrp x19, #0x151000 */
  ARC_X_W(c, 19, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 9d58c: nop  */
  /* nop: no architectural effect here */
  /* 9d590: adr x1, #0x4f83f */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(325695)));
  /* 9d594: ldr x19, [x19, #0x998] */
  ARC_X_W(c, 19, arc_ld64((ARC_X_R(c, 19) + INT64_C(2456))));
  /* 9d598: adrp x2, #0x51000 */
  ARC_X_W(c, 2, (arc_image_bases[1] + UINT64_C(331776)));
  /* 9d59c: add x2, x2, #0x223 */
  ARC_X_W(c, 2, (ARC_X_R(c, 2) + UINT64_C(547)));
  /* 9d5a0: adrp x3, #0x50000 */
  ARC_X_W(c, 3, (arc_image_bases[1] + UINT64_C(327680)));
  /* 9d5a4: add x3, x3, #0x5e0 */
  ARC_X_W(c, 3, (ARC_X_R(c, 3) + UINT64_C(1504)));
  /* 9d5a8: add x0, x19, #0x130 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(304)));
  /* 9d5ac: bl #0x144a38 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(644528));
  fn1_144a38(c);
  /* 9d5b0: add x0, x19, #0x130 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(304)));
  /* 9d5b4: bl #0x143730 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(644536));
  fn1_143730(c);
  /* 9d5b8: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(644540));
  fn1_1427b8(c);
}

void fn1_a1a0c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038589964));
  /* a1a0c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* a1a10: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* a1a14: stp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* a1a18: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* a1a1c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* a1a20: ldrb w8, [x0, #0x20] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 0) + INT64_C(32))));
  /* a1a24: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* a1a28: b.ne #0xa1a68 */
  if (ARC_COND(c, 1)) goto L_a1a68;
  /* a1a2c: ldr x19, [x0, #0x18] */
  ARC_X_W(c, 19, arc_ld64((ARC_X_R(c, 0) + INT64_C(24))));
  /* a1a30: cbz x19, #0xa1a68 */
  if ((ARC_X_R(c, 19)) == 0) goto L_a1a68;
  /* a1a34: ldp x9, x8, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* a1a38: ldr x10, [x0, #0x10] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* a1a3c: neg x20, x10 */
  ARC_X_W(c, 20, ((uint64_t)0 - (uint64_t)(ARC_X_R(c, 10))));
  /* a1a40: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* a1a44: sub x11, x8, #1 */
  ARC_X_W(c, 11, (ARC_X_R(c, 8) - UINT64_C(1)));
  /* a1a48: add x21, x8, #1 */
  ARC_X_W(c, 21, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* a1a4c: madd x0, x10, x11, x9 */
  ARC_X_W(c, 0, ((uint64_t)(ARC_X_R(c, 9)) + ((uint64_t)(ARC_X_R(c, 10)) * (uint64_t)(ARC_X_R(c, 11)))));
L_a1a50:;
  /* a1a50: subs x21, x21, #1 */
  ARC_X_W(c, 21, arc_sub64(c, ARC_X_R(c, 21), UINT64_C(1)));
  /* a1a54: b.eq #0xa1a68 */
  if (ARC_COND(c, 0)) goto L_a1a68;
  /* a1a58: add x22, x0, x20 */
  ARC_X_W(c, 22, (ARC_X_R(c, 0) + ARC_X_R(c, 20)));
  /* a1a5c: blr x19 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(662112));
  arc_dispatch(c, ARC_X_R(c, 19));
  /* a1a60: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* a1a64: b #0xa1a50 */
  goto L_a1a50;
L_a1a68:;
  /* a1a68: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* a1a6c: ldp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* a1a70: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* a1a74: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* a1a78: ret  */
  return;
  /* a1a7c: bl #0x142488 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(662144));
  fn1_142488(c);
}

void fn1_a2848(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038593608));
  /* a2848: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* a284c: sub sp, sp, #0x80 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(128)));
  /* a2850: stp x29, x30, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* a2854: stp x20, x19, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* a2858: add x29, sp, #0x60 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(96)));
  /* a285c: ldr x8, [x0, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* a2860: ldr x9, [x1, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 1) + INT64_C(8))));
  /* a2864: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* a2868: b.eq #0xa28fc */
  if (ARC_COND(c, 0)) goto L_a28fc;
  /* a286c: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* a2870: mov x19, x2 */
  ARC_X_W(c, 19, ARC_X_R(c, 2));
  /* a2874: adrp x2, #0x151000 */
  ARC_X_W(c, 2, (arc_image_bases[1] + UINT64_C(1380352)));
  /* a2878: ldr x8, [x8, #0x9a8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2472))));
  /* a287c: ldr x2, [x2, #0x9b0] */
  ARC_X_W(c, 2, arc_ld64((ARC_X_R(c, 2) + INT64_C(2480))));
  /* a2880: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* a2884: mov x0, x1 */
  ARC_X_W(c, 0, ARC_X_R(c, 1));
  /* a2888: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* a288c: mov x1, x8 */
  ARC_X_W(c, 1, ARC_X_R(c, 8));
  /* a2890: bl #0x142830 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(665748));
  fn1_142830(c);
  /* a2894: cbz x0, #0xa2900 */
  if ((ARC_X_R(c, 0)) == 0) goto L_a2900;
  /* a2898: ldr x2, [x19] */
  ARC_X_W(c, 2, arc_ld64(ARC_X_R(c, 19)));
  /* a289c: cbz x2, #0xa2914 */
  if ((ARC_X_R(c, 2)) == 0) goto L_a2914;
  /* a28a0: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* a28a4: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* a28a8: str xzr, [sp, #0x58] */
  arc_st64(((c)->sp + INT64_C(88)), ARC_X_R(c, 31));
  /* a28ac: stp x20, x8, [sp, #0x18] */
  { const uint64_t _pa = ((c)->sp + INT64_C(24));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* a28b0: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* a28b4: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* a28b8: strb w8, [sp, #0x57] */
  arc_st8(((c)->sp + INT64_C(87)), ARC_W_R(c, 8));
  /* a28bc: mov w3, #1 */
  ARC_W_W(c, 3, UINT64_C(1));
  /* a28c0: stp x0, xzr, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 0));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* a28c4: stur q0, [sp, #0x47] */
  arc_st64(((c)->sp + INT64_C(71)), (c)->q[0].u64[0]);
  arc_st64(((c)->sp + INT64_C(71)) + 8, (c)->q[0].u64[1]);
  /* a28c8: stur q0, [sp, #0x28] */
  arc_st64(((c)->sp + INT64_C(40)), (c)->q[0].u64[0]);
  arc_st64(((c)->sp + INT64_C(40)) + 8, (c)->q[0].u64[1]);
  /* a28cc: stur q0, [sp, #0x38] */
  arc_st64(((c)->sp + INT64_C(56)), (c)->q[0].u64[0]);
  arc_st64(((c)->sp + INT64_C(56)) + 8, (c)->q[0].u64[1]);
  /* a28d0: str w8, [sp, #0x50] */
  arc_st32(((c)->sp + INT64_C(80)), ARC_W_R(c, 8));
  /* a28d4: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* a28d8: ldr x8, [x8, #0x38] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(56))));
  /* a28dc: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(665824));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* a28e0: ldr w8, [sp, #0x38] */
  ARC_W_W(c, 8, arc_ld32(((c)->sp + INT64_C(56))));
  /* a28e4: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* a28e8: cset w0, eq */
  ARC_W_W(c, 0, (ARC_COND(c, 0) ? 1 : 0));
  /* a28ec: b.ne #0xa2900 */
  if (ARC_COND(c, 1)) goto L_a2900;
  /* a28f0: ldr x8, [sp, #0x28] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(40))));
  /* a28f4: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* a28f8: b #0xa2900 */
  goto L_a2900;
L_a28fc:;
  /* a28fc: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
L_a2900:;
  /* a2900: ldp x20, x19, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* a2904: ldp x29, x30, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* a2908: add sp, sp, #0x80 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(128)));
  /* a290c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* a2910: ret  */
  return;
L_a2914:;
  /* a2914: adrp x0, #0x4f000 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(323584)));
  /* a2918: add x0, x0, #0x8a6 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2214)));
  /* a291c: adrp x1, #0x4f000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(323584)));
  /* a2920: add x1, x1, #0xe37 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3639)));
  /* a2924: nop  */
  /* nop: no architectural effect here */
  /* a2928: adr x3, #0x502f1 */
  ARC_X_W(c, 3, (arc_image_bases[1] + UINT64_C(328433)));
  /* a292c: mov w2, #0x1e7 */
  ARC_W_W(c, 2, UINT64_C(487));
  /* a2930: bl #0xa23d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(665908));
  fn1_a23d8(c);
}

void fn1_a9454(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038621268));
  /* a9454: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* a9458: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* a945c: stp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* a9460: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* a9464: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* a9468: ldr x22, [x0, #0x1330] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 0) + INT64_C(4912))));
  /* a946c: mov x19, x2 */
  ARC_X_W(c, 19, ARC_X_R(c, 2));
  /* a9470: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* a9474: ldr x8, [x22, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 22) + INT64_C(8))));
  /* a9478: sub x9, x8, #0xfd0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4048)));
  /* a947c: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* a9480: b.hi #0xa94a4 */
  if (ARC_COND(c, 8)) goto L_a94a4;
  /* a9484: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* a9488: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* a948c: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(693392));
  fn1_1428a8(c);
  /* a9490: cbz x0, #0xa94f8 */
  if ((ARC_X_R(c, 0)) == 0) goto L_a94f8;
  /* a9494: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* a9498: stp x22, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* a949c: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* a94a0: str x0, [x21, #0x1330] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(4912)), ARC_X_R(c, 0));
L_a94a4:;
  /* a94a4: add x9, x8, #0x20 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(32)));
  /* a94a8: add x0, x22, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 22) + ARC_X_R(c, 8)));
  /* a94ac: adrp x8, #0x14b000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1355776)));
  /* a94b0: add x8, x8, #0xd10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3344)));
  /* a94b4: str x9, [x22, #8] */
  arc_st64((ARC_X_R(c, 22) + INT64_C(8)), ARC_X_R(c, 9));
  /* a94b8: mov w9, #0x2d */
  ARC_W_W(c, 9, UINT64_C(45));
  /* a94bc: str x8, [x0, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* a94c0: ldurh w8, [x0, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 0) + INT64_C(9))));
  /* a94c4: mov w10, #0x540 */
  ARC_W_W(c, 10, UINT64_C(1344));
  /* a94c8: strb w9, [x0, #8] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 9));
  /* a94cc: ldr x9, [x20] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 20)));
  /* a94d0: and w8, w8, #0xf000 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(61440)));
  /* a94d4: orr w8, w8, w10 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | ARC_W_R(c, 10)));
  /* a94d8: ldr x10, [x19] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 19)));
  /* a94dc: sturh w8, [x0, #9] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(9)), ARC_W_R(c, 8));
  /* a94e0: stp x9, x10, [x0, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 10));
  }
  /* a94e4: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* a94e8: ldp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* a94ec: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* a94f0: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* a94f4: ret  */
  return;
L_a94f8:;
  /* a94f8: bl #0x142488 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(693500));
  fn1_142488(c);
}

void fn1_b0a28(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038651432));
  /* b0a28: bti c */
  /* bti: no architectural effect here */
  /* b0a2c: mov w1, #0x30 */
  ARC_W_W(c, 1, UINT64_C(48));
  /* b0a30: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_b517c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038669692));
  /* b517c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* b5180: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b5184: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* b5188: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* b518c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* b5190: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* b5194: ldr x0, [x0, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* b5198: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* b519c: cbz x0, #0xb51f4 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b51f4;
  /* b51a0: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* b51a4: add x2, x20, #0x18 */
  ARC_X_W(c, 2, (ARC_X_R(c, 20) + UINT64_C(24)));
  /* b51a8: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* b51ac: ldr x8, [x8, #0x30] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(48))));
  /* b51b0: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(741812));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* b51b4: tbnz w0, #0, #0xb5290 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) != 0) goto L_b5290;
  /* b51b8: ldr x21, [x20, #0x10] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 20) + INT64_C(16))));
  /* b51bc: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* b51c0: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* b51c4: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* b51c8: ldr x8, [x8, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* b51cc: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(741840));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* b51d0: ldurh w8, [x21, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 21) + INT64_C(9))));
  /* b51d4: and w8, w8, #0xc0 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(192)));
  /* b51d8: cmp w8, #0x40 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(64));
  /* b51dc: b.eq #0xb51f4 */
  if (ARC_COND(c, 0)) goto L_b51f4;
  /* b51e0: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* b51e4: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* b51e8: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* b51ec: ldr x8, [x8, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* b51f0: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(741876));
  arc_dispatch(c, ARC_X_R(c, 8));
L_b51f4:;
  /* b51f4: ldp x8, x10, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* b51f8: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* b51fc: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* b5200: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* b5204: b.ls #0xb5230 */
  if (ARC_COND(c, 9)) goto L_b5230;
  /* b5208: lsl x9, x10, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* b520c: add x8, x8, #0x3e1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(993)));
  /* b5210: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* b5214: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* b5218: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b521c: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(741920));
  fn1_142878(c);
  /* b5220: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b5224: cbz x0, #0xb52a4 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b52a4;
  /* b5228: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b522c: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
L_b5230:;
  /* b5230: str x9, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 9));
  /* b5234: mov w9, #0x7b */
  ARC_W_W(c, 9, UINT64_C(123));
  /* b5238: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* b523c: strb w9, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
  /* b5240: add x0, x20, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(24)));
  /* b5244: bl #0xafa48 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(741960));
  fn1_afa48(c);
  /* b5248: ldp x8, x10, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* b524c: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* b5250: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* b5254: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* b5258: b.ls #0xb5284 */
  if (ARC_COND(c, 9)) goto L_b5284;
  /* b525c: lsl x9, x10, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* b5260: add x8, x8, #0x3e1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(993)));
  /* b5264: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* b5268: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* b526c: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b5270: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(742004));
  fn1_142878(c);
  /* b5274: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b5278: cbz x0, #0xb52a8 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b52a8;
  /* b527c: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b5280: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
L_b5284:;
  /* b5284: str x9, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 9));
  /* b5288: mov w9, #0x7d */
  ARC_W_W(c, 9, UINT64_C(125));
  /* b528c: strb w9, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
L_b5290:;
  /* b5290: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* b5294: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* b5298: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b529c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* b52a0: ret  */
  return;
L_b52a4:;
  /* b52a4: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(742056));
  fn1_1427b8(c);
L_b52a8:;
  /* b52a8: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(742060));
  fn1_1427b8(c);
}

void fn1_b80e0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038681824));
  /* b80e0: bti c */
  /* bti: no architectural effect here */
  /* b80e4: mov w1, #0x20 */
  ARC_W_W(c, 1, UINT64_C(32));
  /* b80e8: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_bb350(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038694736));
  /* bb350: bti c */
  /* bti: no architectural effect here */
  /* bb354: ldr x0, [x0, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* bb358: ldurh w8, [x0, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 0) + INT64_C(9))));
  /* bb35c: sxtb w9, w8 */
  ARC_W_W(c, 9, ((int32_t)(int8_t)(ARC_W_R(c, 8))));
  /* bb360: cmn w9, #0x40 */
  (void)arc_add32(c, ARC_W_R(c, 9), UINT64_C(64), 0);
  /* bb364: b.ge #0xbb374 */
  if (ARC_COND(c, 10)) goto L_bb374;
  /* bb368: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* bb36c: ldr x16, [x8] */
  ARC_X_W(c, 16, arc_ld64(ARC_X_R(c, 8)));
  /* bb370: br x16 */
  arc_dispatch(c, ARC_X_R(c, 16)); return;
L_bb374:;
  /* bb374: tst w8, #0xc0 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(192)));
  /* bb378: cset w0, eq */
  ARC_W_W(c, 0, (ARC_COND(c, 0) ? 1 : 0));
  /* bb37c: ret  */
  return;
}

void fn1_bdb38(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038704952));
  /* bdb38: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* bdb3c: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* bdb40: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* bdb44: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* bdb48: cmp w0, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(1));
  /* bdb4c: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* bdb50: b.ne #0xbdbc0 */
  if (ARC_COND(c, 1)) goto L_bdbc0;
  /* bdb54: sub x1, x19, #0x58 */
  ARC_X_W(c, 1, (ARC_X_R(c, 19) - UINT64_C(88)));
  /* bdb58: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* bdb5c: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(777056));
  fn1_bd950(c);
  /* bdb60: cmp x0, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 0), UINT64_C(1));
  /* bdb64: b.ne #0xbdba0 */
  if (ARC_COND(c, 1)) goto L_bdba0;
  /* bdb68: ldur x8, [x19, #-0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(-72))));
  /* bdb6c: cbz x8, #0xbdb78 */
  if ((ARC_X_R(c, 8)) == 0) goto L_bdb78;
  /* bdb70: add x0, x19, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(32)));
  /* bdb74: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(777080));
  arc_dispatch(c, ARC_X_R(c, 8));
L_bdb78:;
  /* bdb78: sub x0, x19, #0x60 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) - UINT64_C(96)));
  /* bdb7c: nop  */
  /* nop: no architectural effect here */
  /* bdb80: adr x8, #0x1576e0 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1406688)));
  /* bdb84: cmp x0, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* bdb88: b.lo #0xbdbb0 */
  if (ARC_COND(c, 3)) goto L_bdbb0;
  /* bdb8c: adrp x8, #0x157000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1404928)));
  /* bdb90: add x8, x8, #0x8e0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2272)));
  /* bdb94: cmp x0, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* bdb98: b.hs #0xbdbb0 */
  if (ARC_COND(c, 2)) goto L_bdbb0;
  /* bdb9c: bl #0xa2664 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(777120));
  fn1_a2664(c);
L_bdba0:;
  /* bdba0: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* bdba4: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* bdba8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* bdbac: ret  */
  return;
L_bdbb0:;
  /* bdbb0: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* bdbb4: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* bdbb8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* bdbbc: b #0x142800 */
  fn1_142800(c); return;
L_bdbc0:;
  /* bdbc0: ldur x0, [x19, #-0x38] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(-56))));
  /* bdbc4: bl #0xa1518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(777160));
  fn1_a1518(c);
  /* bdbc8: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(777164));
  fn1_a1454(c);
  /* bdbcc: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(777168));
  fn1_a1454(c);
}

void fn1_d1120(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038784288));
  /* d1120: bti c */
  /* bti: no architectural effect here */
  /* d1124: sub x8, x1, x0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 1) - ARC_X_R(c, 0)));
  /* d1128: asr x8, x8, #2 */
  ARC_X_W(c, 8, ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(2)) & 63))));
  /* d112c: cmp x8, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(2));
  /* d1130: b.gt #0xd1140 */
  if (ARC_COND(c, 12)) goto L_d1140;
  /* d1134: b.hs #0xd1214 */
  if (ARC_COND(c, 2)) goto L_d1214;
L_d1138:;
  /* d1138: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* d113c: ret  */
  return;
L_d1140:;
  /* d1140: cmp x8, #3 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(3));
  /* d1144: b.eq #0xd123c */
  if (ARC_COND(c, 0)) goto L_d123c;
  /* d1148: cmp x8, #4 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(4));
  /* d114c: b.eq #0xd1340 */
  if (ARC_COND(c, 0)) goto L_d1340;
  /* d1150: cmp x8, #5 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(5));
  /* d1154: b.ne #0xd1288 */
  if (ARC_COND(c, 1)) goto L_d1288;
  /* d1158: ldp w8, w9, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    ARC_W_W(c, 8, arc_ld32(_pa));
    ARC_W_W(c, 9, arc_ld32(_pa + 4));
  }
  /* d115c: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* d1160: csel w10, w8, w9, hi */
  ARC_W_W(c, 10, (ARC_COND(c, 8) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* d1164: csel w8, w8, w9, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* d1168: stp w8, w10, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st32(_pa, ARC_W_R(c, 8));
    arc_st32(_pa + 4, ARC_W_R(c, 10));
  }
  /* d116c: ldr w8, [x0, #0xc] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 0) + INT64_C(12))));
  /* d1170: ldur w9, [x1, #-4] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 1) + INT64_C(-4))));
  /* d1174: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* d1178: csel w10, w8, w9, hi */
  ARC_W_W(c, 10, (ARC_COND(c, 8) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* d117c: csel w8, w8, w9, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* d1180: stur w10, [x1, #-4] */
  arc_st32((ARC_X_R(c, 1) + INT64_C(-4)), ARC_W_R(c, 10));
  /* d1184: str w8, [x0, #0xc] */
  arc_st32((ARC_X_R(c, 0) + INT64_C(12)), ARC_W_R(c, 8));
  /* d1188: ldr w9, [x0, #8] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 0) + INT64_C(8))));
  /* d118c: ldur w8, [x1, #-4] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 1) + INT64_C(-4))));
  /* d1190: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* d1194: csel w10, w8, w9, hi */
  ARC_W_W(c, 10, (ARC_COND(c, 8) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* d1198: csel w8, w8, w9, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* d119c: stur w10, [x1, #-4] */
  arc_st32((ARC_X_R(c, 1) + INT64_C(-4)), ARC_W_R(c, 10));
  /* d11a0: ldp w9, w10, [x0, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(8));
    ARC_W_W(c, 9, arc_ld32(_pa));
    ARC_W_W(c, 10, arc_ld32(_pa + 4));
  }
  /* d11a4: ldr w11, [x0, #4] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 0) + INT64_C(4))));
  /* d11a8: cmp w8, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 10));
  /* d11ac: csel w9, w9, w10, lo */
  ARC_W_W(c, 9, (ARC_COND(c, 3) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 10)));
  /* d11b0: csel w8, w8, w10, hi */
  ARC_W_W(c, 8, (ARC_COND(c, 8) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 10)));
  /* d11b4: stp w9, w8, [x0, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(8));
    arc_st32(_pa, ARC_W_R(c, 9));
    arc_st32(_pa + 4, ARC_W_R(c, 8));
  }
  /* d11b8: ldur w8, [x1, #-4] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 1) + INT64_C(-4))));
  /* d11bc: cmp w11, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 11), ARC_W_R(c, 8));
  /* d11c0: csel w9, w11, w8, hi */
  ARC_W_W(c, 9, (ARC_COND(c, 8) ? (ARC_W_R(c, 11)) : ARC_W_R(c, 8)));
  /* d11c4: csel w8, w11, w8, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 11)) : ARC_W_R(c, 8)));
  /* d11c8: stur w9, [x1, #-4] */
  arc_st32((ARC_X_R(c, 1) + INT64_C(-4)), ARC_W_R(c, 9));
  /* d11cc: ldp w11, w10, [x0, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(8));
    ARC_W_W(c, 11, arc_ld32(_pa));
    ARC_W_W(c, 10, arc_ld32(_pa + 4));
  }
  /* d11d0: ldr w9, [x0] */
  ARC_W_W(c, 9, arc_ld32(ARC_X_R(c, 0)));
  /* d11d4: cmp w10, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 10), ARC_W_R(c, 9));
  /* d11d8: csel w12, w10, w9, lo */
  ARC_W_W(c, 12, (ARC_COND(c, 3) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 9)));
  /* d11dc: csel w10, w10, w9, hi */
  ARC_W_W(c, 10, (ARC_COND(c, 8) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 9)));
  /* d11e0: cmp w12, w11 */
  (void)arc_sub32(c, ARC_W_R(c, 12), ARC_W_R(c, 11));
  /* d11e4: csel w9, w9, w11, lo */
  ARC_W_W(c, 9, (ARC_COND(c, 3) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 11)));
  /* d11e8: csel w11, w12, w11, hi */
  ARC_W_W(c, 11, (ARC_COND(c, 8) ? (ARC_W_R(c, 12)) : ARC_W_R(c, 11)));
  /* d11ec: cmp w10, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 10), ARC_W_R(c, 8));
  /* d11f0: csel w12, w10, w8, lo */
  ARC_W_W(c, 12, (ARC_COND(c, 3) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 8)));
  /* d11f4: csel w10, w10, w8, hi */
  ARC_W_W(c, 10, (ARC_COND(c, 8) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 8)));
  /* d11f8: cmp w12, w11 */
  (void)arc_sub32(c, ARC_W_R(c, 12), ARC_W_R(c, 11));
  /* d11fc: csel w8, w8, w11, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 11)));
  /* d1200: stp w9, w8, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st32(_pa, ARC_W_R(c, 9));
    arc_st32(_pa + 4, ARC_W_R(c, 8));
  }
  /* d1204: csel w8, w12, w11, hi */
  ARC_W_W(c, 8, (ARC_COND(c, 8) ? (ARC_W_R(c, 12)) : ARC_W_R(c, 11)));
  /* d1208: stp w8, w10, [x0, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(8));
    arc_st32(_pa, ARC_W_R(c, 8));
    arc_st32(_pa + 4, ARC_W_R(c, 10));
  }
  /* d120c: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* d1210: ret  */
  return;
L_d1214:;
  /* d1214: cmp x8, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(2));
  /* d1218: b.ne #0xd1288 */
  if (ARC_COND(c, 1)) goto L_d1288;
  /* d121c: ldur w9, [x1, #-4] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 1) + INT64_C(-4))));
  /* d1220: ldr w8, [x0] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 0)));
  /* d1224: cmp w9, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 9), ARC_W_R(c, 8));
  /* d1228: b.hs #0xd1138 */
  if (ARC_COND(c, 2)) goto L_d1138;
  /* d122c: str w9, [x0] */
  arc_st32(ARC_X_R(c, 0), ARC_W_R(c, 9));
  /* d1230: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* d1234: stur w8, [x1, #-4] */
  arc_st32((ARC_X_R(c, 1) + INT64_C(-4)), ARC_W_R(c, 8));
  /* d1238: ret  */
  return;
L_d123c:;
  /* d123c: ldr w8, [x0, #4] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 0) + INT64_C(4))));
  /* d1240: ldur w9, [x1, #-4] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 1) + INT64_C(-4))));
  /* d1244: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* d1248: csel w10, w8, w9, hi */
  ARC_W_W(c, 10, (ARC_COND(c, 8) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* d124c: csel w8, w8, w9, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* d1250: stur w10, [x1, #-4] */
  arc_st32((ARC_X_R(c, 1) + INT64_C(-4)), ARC_W_R(c, 10));
  /* d1254: str w8, [x0, #4] */
  arc_st32((ARC_X_R(c, 0) + INT64_C(4)), ARC_W_R(c, 8));
  /* d1258: ldr w9, [x0] */
  ARC_W_W(c, 9, arc_ld32(ARC_X_R(c, 0)));
  /* d125c: ldur w8, [x1, #-4] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 1) + INT64_C(-4))));
  /* d1260: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* d1264: csel w10, w8, w9, hi */
  ARC_W_W(c, 10, (ARC_COND(c, 8) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* d1268: csel w8, w8, w9, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* d126c: stur w10, [x1, #-4] */
  arc_st32((ARC_X_R(c, 1) + INT64_C(-4)), ARC_W_R(c, 10));
  /* d1270: ldp w9, w10, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    ARC_W_W(c, 9, arc_ld32(_pa));
    ARC_W_W(c, 10, arc_ld32(_pa + 4));
  }
  /* d1274: cmp w8, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 10));
  /* d1278: csel w9, w9, w10, lo */
  ARC_W_W(c, 9, (ARC_COND(c, 3) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 10)));
  /* d127c: csel w8, w8, w10, hi */
  ARC_W_W(c, 8, (ARC_COND(c, 8) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 10)));
  /* d1280: str w9, [x0] */
  arc_st32(ARC_X_R(c, 0), ARC_W_R(c, 9));
  /* d1284: b #0xd13b0 */
  goto L_d13b0;
L_d1288:;
  /* d1288: mov x11, x0 */
  ARC_X_W(c, 11, ARC_X_R(c, 0));
  /* d128c: ldp w10, w9, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    ARC_W_W(c, 10, arc_ld32(_pa));
    ARC_W_W(c, 9, arc_ld32(_pa + 4));
  }
  /* d1290: ldr w8, [x11, #8]! */
  { const uint64_t _a = (ARC_X_R(c, 11) + INT64_C(8));
    ARC_X_W(c, 11, ARC_X_R(c, 11) + INT64_C(8));
    ARC_W_W(c, 8, arc_ld32(_a));
  }
  /* d1294: cmp w9, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 9), ARC_W_R(c, 8));
  /* d1298: csel w12, w9, w8, hi */
  ARC_W_W(c, 12, (ARC_COND(c, 8) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 8)));
  /* d129c: csel w9, w9, w8, lo */
  ARC_W_W(c, 9, (ARC_COND(c, 3) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 8)));
  /* d12a0: cmp w12, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 12), ARC_W_R(c, 10));
  /* d12a4: csel w8, w12, w10, hi */
  ARC_W_W(c, 8, (ARC_COND(c, 8) ? (ARC_W_R(c, 12)) : ARC_W_R(c, 10)));
  /* d12a8: csel w13, w12, w10, lo */
  ARC_W_W(c, 13, (ARC_COND(c, 3) ? (ARC_W_R(c, 12)) : ARC_W_R(c, 10)));
  /* d12ac: cmp w10, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 10), ARC_W_R(c, 9));
  /* d12b0: str w8, [x11] */
  arc_st32(ARC_X_R(c, 11), ARC_W_R(c, 8));
  /* d12b4: add x8, x0, #0xc */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + UINT64_C(12)));
  /* d12b8: csel w10, w10, w9, lo */
  ARC_W_W(c, 10, (ARC_COND(c, 3) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 9)));
  /* d12bc: csel w9, w9, w13, lo */
  ARC_W_W(c, 9, (ARC_COND(c, 3) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 13)));
  /* d12c0: cmp x8, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 1));
  /* d12c4: stp w10, w9, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st32(_pa, ARC_W_R(c, 10));
    arc_st32(_pa + 4, ARC_W_R(c, 9));
  }
  /* d12c8: b.eq #0xd1138 */
  if (ARC_COND(c, 0)) goto L_d1138;
  /* d12cc: mov w9, wzr */
  ARC_W_W(c, 9, ARC_W_R(c, 31));
  /* d12d0: mov w10, #0xc */
  ARC_W_W(c, 10, UINT64_C(12));
  /* d12d4: b #0xd1304 */
  goto L_d1304;
L_d12d8:;
  /* d12d8: mov x11, x0 */
  ARC_X_W(c, 11, ARC_X_R(c, 0));
L_d12dc:;
  /* d12dc: add w9, w9, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) + UINT64_C(1)));
  /* d12e0: str w12, [x11] */
  arc_st32(ARC_X_R(c, 11), ARC_W_R(c, 12));
  /* d12e4: cmp w9, #8 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(8));
  /* d12e8: b.eq #0xd13bc */
  if (ARC_COND(c, 0)) goto L_d13bc;
L_d12ec:;
  /* d12ec: add x12, x8, #4 */
  ARC_X_W(c, 12, (ARC_X_R(c, 8) + UINT64_C(4)));
  /* d12f0: mov x11, x8 */
  ARC_X_W(c, 11, ARC_X_R(c, 8));
  /* d12f4: add x10, x10, #4 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(4)));
  /* d12f8: cmp x12, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 12), ARC_X_R(c, 1));
  /* d12fc: mov x8, x12 */
  ARC_X_W(c, 8, ARC_X_R(c, 12));
  /* d1300: b.eq #0xd1138 */
  if (ARC_COND(c, 0)) goto L_d1138;
L_d1304:;
  /* d1304: ldr w12, [x8] */
  ARC_W_W(c, 12, arc_ld32(ARC_X_R(c, 8)));
  /* d1308: ldr w11, [x11] */
  ARC_W_W(c, 11, arc_ld32(ARC_X_R(c, 11)));
  /* d130c: cmp w12, w11 */
  (void)arc_sub32(c, ARC_W_R(c, 12), ARC_W_R(c, 11));
  /* d1310: b.hs #0xd12ec */
  if (ARC_COND(c, 2)) goto L_d12ec;
  /* d1314: mov x14, x10 */
  ARC_X_W(c, 14, ARC_X_R(c, 10));
L_d1318:;
  /* d1318: subs x13, x14, #4 */
  ARC_X_W(c, 13, arc_sub64(c, ARC_X_R(c, 14), UINT64_C(4)));
  /* d131c: str w11, [x0, x14] */
  arc_st32((ARC_X_R(c, 0) + ARC_X_R(c, 14)), ARC_W_R(c, 11));
  /* d1320: b.eq #0xd12d8 */
  if (ARC_COND(c, 0)) goto L_d12d8;
  /* d1324: add x11, x0, x14 */
  ARC_X_W(c, 11, (ARC_X_R(c, 0) + ARC_X_R(c, 14)));
  /* d1328: mov x14, x13 */
  ARC_X_W(c, 14, ARC_X_R(c, 13));
  /* d132c: ldur w11, [x11, #-8] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 11) + INT64_C(-8))));
  /* d1330: cmp w12, w11 */
  (void)arc_sub32(c, ARC_W_R(c, 12), ARC_W_R(c, 11));
  /* d1334: b.lo #0xd1318 */
  if (ARC_COND(c, 3)) goto L_d1318;
  /* d1338: add x11, x0, x13 */
  ARC_X_W(c, 11, (ARC_X_R(c, 0) + ARC_X_R(c, 13)));
  /* d133c: b #0xd12dc */
  goto L_d12dc;
L_d1340:;
  /* d1340: ldp w10, w8, [x0, #4] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(4));
    ARC_W_W(c, 10, arc_ld32(_pa));
    ARC_W_W(c, 8, arc_ld32(_pa + 4));
  }
  /* d1344: ldr w9, [x0] */
  ARC_W_W(c, 9, arc_ld32(ARC_X_R(c, 0)));
  /* d1348: cmp w9, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 9), ARC_W_R(c, 8));
  /* d134c: csel w11, w9, w8, hi */
  ARC_W_W(c, 11, (ARC_COND(c, 8) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 8)));
  /* d1350: csel w8, w9, w8, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 8)));
  /* d1354: str w11, [x0, #8] */
  arc_st32((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 11));
  /* d1358: str w8, [x0] */
  arc_st32(ARC_X_R(c, 0), ARC_W_R(c, 8));
  /* d135c: ldur w8, [x1, #-4] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 1) + INT64_C(-4))));
  /* d1360: cmp w10, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 10), ARC_W_R(c, 8));
  /* d1364: csel w9, w10, w8, hi */
  ARC_W_W(c, 9, (ARC_COND(c, 8) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 8)));
  /* d1368: csel w8, w10, w8, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 8)));
  /* d136c: stur w9, [x1, #-4] */
  arc_st32((ARC_X_R(c, 1) + INT64_C(-4)), ARC_W_R(c, 9));
  /* d1370: ldr w9, [x0] */
  ARC_W_W(c, 9, arc_ld32(ARC_X_R(c, 0)));
  /* d1374: cmp w9, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 9), ARC_W_R(c, 8));
  /* d1378: csel w10, w9, w8, hi */
  ARC_W_W(c, 10, (ARC_COND(c, 8) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 8)));
  /* d137c: csel w8, w9, w8, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 8)));
  /* d1380: stp w8, w10, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st32(_pa, ARC_W_R(c, 8));
    arc_st32(_pa + 4, ARC_W_R(c, 10));
  }
  /* d1384: ldr w8, [x0, #8] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 0) + INT64_C(8))));
  /* d1388: ldur w9, [x1, #-4] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 1) + INT64_C(-4))));
  /* d138c: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* d1390: csel w10, w8, w9, hi */
  ARC_W_W(c, 10, (ARC_COND(c, 8) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* d1394: csel w8, w8, w9, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* d1398: stur w10, [x1, #-4] */
  arc_st32((ARC_X_R(c, 1) + INT64_C(-4)), ARC_W_R(c, 10));
  /* d139c: ldr w10, [x0, #4] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 0) + INT64_C(4))));
  /* d13a0: cmp w10, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 10), ARC_W_R(c, 8));
  /* d13a4: csel w9, w10, w8, hi */
  ARC_W_W(c, 9, (ARC_COND(c, 8) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 8)));
  /* d13a8: csel w8, w10, w8, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 8)));
  /* d13ac: str w9, [x0, #8] */
  arc_st32((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 9));
L_d13b0:;
  /* d13b0: str w8, [x0, #4] */
  arc_st32((ARC_X_R(c, 0) + INT64_C(4)), ARC_W_R(c, 8));
  /* d13b4: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* d13b8: ret  */
  return;
L_d13bc:;
  /* d13bc: add x8, x8, #4 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(4)));
  /* d13c0: cmp x8, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 1));
  /* d13c4: cset w0, eq */
  ARC_W_W(c, 0, (ARC_COND(c, 0) ? 1 : 0));
  /* d13c8: ret  */
  return;
}

void fn1_d794c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038810956));
  /* d794c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* d7950: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* d7954: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* d7958: str x19, [sp, #0x30] */
  arc_st64(((c)->sp + INT64_C(48)), ARC_X_R(c, 19));
  /* d795c: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* d7960: mov w8, w1 */
  ARC_W_W(c, 8, ARC_W_R(c, 1));
  /* d7964: ldr x1, [x0, #8] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* d7968: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* d796c: cmp w8, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(2));
  /* d7970: b.eq #0xd79a4 */
  if (ARC_COND(c, 0)) goto L_d79a4;
  /* d7974: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* d7978: b.ne #0xd79e0 */
  if (ARC_COND(c, 1)) goto L_d79e0;
  /* d797c: ldr x8, [x19, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(32))));
  /* d7980: nop  */
  /* nop: no architectural effect here */
  /* d7984: adr x0, #0x509ba */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(330170)));
  /* d7988: ldrb w9, [x8] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 8)));
  /* d798c: ldr x10, [x8, #0x10] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* d7990: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* d7994: csinc x2, x10, x8, ne */
  ARC_X_W(c, 2, (ARC_COND(c, 1) ? (ARC_X_R(c, 10)) : ((ARC_X_R(c, 8)) + 1)));
  /* d7998: add x8, sp, #8 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(8)));
  /* d799c: bl #0xd7a54 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(883104));
  fn1_d7a54(c);
  /* d79a0: b #0xd79f0 */
  goto L_d79f0;
L_d79a4:;
  /* d79a4: ldr x8, [x19, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(32))));
  /* d79a8: nop  */
  /* nop: no architectural effect here */
  /* d79ac: adr x0, #0x5002b */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(327723)));
  /* d79b0: ldrb w9, [x8] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 8)));
  /* d79b4: ldr x10, [x8, #0x10] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* d79b8: ldrb w11, [x8, #0x18] */
  ARC_W_W(c, 11, arc_ld8((ARC_X_R(c, 8) + INT64_C(24))));
  /* d79bc: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* d79c0: ldr x9, [x8, #0x28] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* d79c4: csinc x2, x10, x8, ne */
  ARC_X_W(c, 2, (ARC_COND(c, 1) ? (ARC_X_R(c, 10)) : ((ARC_X_R(c, 8)) + 1)));
  /* d79c8: add x8, x8, #0x19 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(25)));
  /* d79cc: tst w11, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 11) & UINT64_C(1)));
  /* d79d0: csel x3, x8, x9, eq */
  ARC_X_W(c, 3, (ARC_COND(c, 0) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* d79d4: add x8, sp, #8 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(8)));
  /* d79d8: bl #0xd7a54 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(883164));
  fn1_d7a54(c);
  /* d79dc: b #0xd79f0 */
  goto L_d79f0;
L_d79e0:;
  /* d79e0: nop  */
  /* nop: no architectural effect here */
  /* d79e4: adr x0, #0x50de1 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(331233)));
  /* d79e8: add x8, sp, #8 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(8)));
  /* d79ec: bl #0xd7a54 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(883184));
  fn1_d7a54(c);
L_d79f0:;
  /* d79f0: ldr x8, [x19, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(32))));
  /* d79f4: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* d79f8: ldrb w9, [x19, #0x30]! */
  { const uint64_t _a = (ARC_X_R(c, 19) + INT64_C(48));
    ARC_X_W(c, 19, ARC_X_R(c, 19) + INT64_C(48));
    ARC_W_W(c, 9, arc_ld8(_a));
  }
  /* d79fc: tbz w9, #0, #0xd7a10 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_d7a10;
  /* d7a00: ldr x0, [x8, #0x40] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(64))));
  /* d7a04: ldr x8, [x8, #0x30] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(48))));
  /* d7a08: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* d7a0c: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(883216));
  fn1_142608(c);
L_d7a10:;
  /* d7a10: ldur q0, [sp, #8] */
  arc_q_w(c, 0, arc_ld64(((c)->sp + INT64_C(8))), arc_ld64(((c)->sp + INT64_C(8)) + 8));
  /* d7a14: ldr x8, [sp, #0x18] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(24))));
  /* d7a18: str q0, [x19] */
  arc_st64(ARC_X_R(c, 19), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 19) + 8, (c)->q[0].u64[1]);
  /* d7a1c: str x8, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 8));
  /* d7a20: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* d7a24: ldr x19, [sp, #0x30] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(48))));
  /* d7a28: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* d7a2c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* d7a30: ret  */
  return;
}

void fn1_db6c8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038826696));
  /* db6c8: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* db6cc: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* db6d0: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* db6d4: cmp x0, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 0), UINT64_C(0));
  /* db6d8: nop  */
  /* nop: no architectural effect here */
  /* db6dc: adr x8, #0x156d20 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1404192)));
  /* db6e0: csel x0, x8, x0, eq */
  ARC_X_W(c, 0, (ARC_COND(c, 0) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 0)));
  /* db6e4: nop  */
  /* nop: no architectural effect here */
  /* db6e8: adr x1, #0x156d30 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1404208)));
  /* db6ec: bl #0xa0c40 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(898800));
  fn1_a0c40(c);
  /* db6f0: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* db6f4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* db6f8: ret  */
  return;
}

void fn1_dfd8c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038844812));
  /* dfd8c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* dfd90: stp x29, x30, [sp, #-0x60]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-96));
    (c)->sp = (c)->sp + INT64_C(-96);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* dfd94: stp x28, x27, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* dfd98: stp x26, x25, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* dfd9c: stp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* dfda0: stp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* dfda4: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* dfda8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* dfdac: mov x8, #-0xa */
  ARC_X_W(c, 8, UINT64_C(18446744073709551606));
  /* dfdb0: sub x8, x8, x1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) - ARC_X_R(c, 1)));
  /* dfdb4: cmp x2, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 2), ARC_X_R(c, 8));
  /* dfdb8: b.hi #0xdfed0 */
  if (ARC_COND(c, 8)) goto L_dfed0;
  /* dfdbc: ldrb w8, [x0] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 0)));
  /* dfdc0: ldr x9, [x0, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* dfdc4: mov x26, x7 */
  ARC_X_W(c, 26, ARC_X_R(c, 7));
  /* dfdc8: mov x19, x6 */
  ARC_X_W(c, 19, ARC_X_R(c, 6));
  /* dfdcc: mov x23, x5 */
  ARC_X_W(c, 23, ARC_X_R(c, 5));
  /* dfdd0: mov x22, x1 */
  ARC_X_W(c, 22, ARC_X_R(c, 1));
  /* dfdd4: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* dfdd8: mov x8, #-0xe */
  ARC_X_W(c, 8, UINT64_C(18446744073709551602));
  /* dfddc: mov x20, x4 */
  ARC_X_W(c, 20, ARC_X_R(c, 4));
  /* dfde0: movk x8, #0x7fff, lsl #48 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(281474976710655)) | UINT64_C(9223090561878065152)));
  /* dfde4: mov x25, x3 */
  ARC_X_W(c, 25, ARC_X_R(c, 3));
  /* dfde8: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* dfdec: csinc x24, x9, x0, ne */
  ARC_X_W(c, 24, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 0)) + 1)));
  /* dfdf0: cmp x1, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 1), ARC_X_R(c, 8));
  /* dfdf4: b.hi #0xdfe28 */
  if (ARC_COND(c, 8)) goto L_dfe28;
  /* dfdf8: lsl x8, x22, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 22)) << ((UINT64_C(1)) & 63)));
  /* dfdfc: add x9, x2, x22 */
  ARC_X_W(c, 9, (ARC_X_R(c, 2) + ARC_X_R(c, 22)));
  /* dfe00: mov w10, #0x1a */
  ARC_W_W(c, 10, UINT64_C(26));
  /* dfe04: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* dfe08: csel x8, x9, x8, hi */
  ARC_X_W(c, 8, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* dfe0c: orr x9, x8, #7 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) | UINT64_C(7)));
  /* dfe10: cmp x9, #0x17 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(23));
  /* dfe14: csinc x9, x10, x9, eq */
  ARC_X_W(c, 9, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ((ARC_X_R(c, 9)) + 1)));
  /* dfe18: cmp x8, #0x17 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(23));
  /* dfe1c: mov w8, #0x17 */
  ARC_W_W(c, 8, UINT64_C(23));
  /* dfe20: csel x27, x8, x9, lo */
  ARC_X_W(c, 27, (ARC_COND(c, 3) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* dfe24: b #0xdfe2c */
  goto L_dfe2c;
L_dfe28:;
  /* dfe28: mov x27, #-9 */
  ARC_X_W(c, 27, UINT64_C(18446744073709551607));
L_dfe2c:;
  /* dfe2c: mov x0, x27 */
  ARC_X_W(c, 0, ARC_X_R(c, 27));
  /* dfe30: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(917044));
  fn1_1428f0(c);
  /* dfe34: mov x28, x0 */
  ARC_X_W(c, 28, ARC_X_R(c, 0));
  /* dfe38: cbz x20, #0xdfe4c */
  if ((ARC_X_R(c, 20)) == 0) goto L_dfe4c;
  /* dfe3c: mov x0, x28 */
  ARC_X_W(c, 0, ARC_X_R(c, 28));
  /* dfe40: mov x1, x24 */
  ARC_X_W(c, 1, ARC_X_R(c, 24));
  /* dfe44: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* dfe48: bl #0x1449f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(917068));
  fn1_1449f0(c);
L_dfe4c:;
  /* dfe4c: cbz x19, #0xdfe60 */
  if ((ARC_X_R(c, 19)) == 0) goto L_dfe60;
  /* dfe50: add x0, x28, x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 28) + ARC_X_R(c, 20)));
  /* dfe54: mov x1, x26 */
  ARC_X_W(c, 1, ARC_X_R(c, 26));
  /* dfe58: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* dfe5c: bl #0x1449d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(917088));
  fn1_1449d8(c);
L_dfe60:;
  /* dfe60: add x8, x23, x20 */
  ARC_X_W(c, 8, (ARC_X_R(c, 23) + ARC_X_R(c, 20)));
  /* dfe64: subs x25, x25, x8 */
  ARC_X_W(c, 25, arc_sub64(c, ARC_X_R(c, 25), ARC_X_R(c, 8)));
  /* dfe68: b.eq #0xdfe84 */
  if (ARC_COND(c, 0)) goto L_dfe84;
  /* dfe6c: add x8, x28, x20 */
  ARC_X_W(c, 8, (ARC_X_R(c, 28) + ARC_X_R(c, 20)));
  /* dfe70: add x9, x24, x20 */
  ARC_X_W(c, 9, (ARC_X_R(c, 24) + ARC_X_R(c, 20)));
  /* dfe74: mov x2, x25 */
  ARC_X_W(c, 2, ARC_X_R(c, 25));
  /* dfe78: add x0, x8, x19 */
  ARC_X_W(c, 0, (ARC_X_R(c, 8) + ARC_X_R(c, 19)));
  /* dfe7c: add x1, x9, x23 */
  ARC_X_W(c, 1, (ARC_X_R(c, 9) + ARC_X_R(c, 23)));
  /* dfe80: bl #0x1449f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(917124));
  fn1_1449f0(c);
L_dfe84:;
  /* dfe84: add x1, x22, #1 */
  ARC_X_W(c, 1, (ARC_X_R(c, 22) + UINT64_C(1)));
  /* dfe88: cmp x1, #0x17 */
  (void)arc_sub64(c, ARC_X_R(c, 1), UINT64_C(23));
  /* dfe8c: b.eq #0xdfe98 */
  if (ARC_COND(c, 0)) goto L_dfe98;
  /* dfe90: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* dfe94: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(917144));
  fn1_142608(c);
L_dfe98:;
  /* dfe98: add x9, x19, x20 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + ARC_X_R(c, 20)));
  /* dfe9c: orr x8, x27, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 27) | UINT64_C(1)));
  /* dfea0: add x9, x9, x25 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + ARC_X_R(c, 25)));
  /* dfea4: str x8, [x21] */
  arc_st64(ARC_X_R(c, 21), ARC_X_R(c, 8));
  /* dfea8: stp x9, x28, [x21, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 28));
  }
  /* dfeac: strb wzr, [x28, x9] */
  arc_st8((ARC_X_R(c, 28) + ARC_X_R(c, 9)), ARC_W_R(c, 31));
  /* dfeb0: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* dfeb4: ldp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* dfeb8: ldp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* dfebc: ldp x26, x25, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* dfec0: ldp x28, x27, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* dfec4: ldp x29, x30, [sp], #0x60 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(96);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* dfec8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* dfecc: ret  */
  return;
L_dfed0:;
  /* dfed0: bl #0xd7d54 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(917204));
  fn1_d7d54(c);
}

void fn1_e2668(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038855272));
  /* e2668: bti c */
  /* bti: no architectural effect here */
  /* e266c: ldrb w8, [x0] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 0)));
  /* e2670: tbnz w8, #0, #0xe2688 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_e2688;
  /* e2674: mov w9, #2 */
  ARC_W_W(c, 9, UINT64_C(2));
  /* e2678: mov x8, x0 */
  ARC_X_W(c, 8, ARC_X_R(c, 0));
  /* e267c: strb w9, [x8], #4 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(4));
    arc_st8(_a, ARC_W_R(c, 9));
  }
  /* e2680: stp w1, wzr, [x8] */
  { const uint64_t _pa = ARC_X_R(c, 8);
    arc_st32(_pa, ARC_W_R(c, 1));
    arc_st32(_pa + 4, ARC_W_R(c, 31));
  }
  /* e2684: ret  */
  return;
L_e2688:;
  /* e2688: ldr x8, [x0, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* e268c: mov w9, #1 */
  ARC_W_W(c, 9, UINT64_C(1));
  /* e2690: str x9, [x0, #8] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(8)), ARC_X_R(c, 9));
  /* e2694: stp w1, wzr, [x8] */
  { const uint64_t _pa = ARC_X_R(c, 8);
    arc_st32(_pa, ARC_W_R(c, 1));
    arc_st32(_pa + 4, ARC_W_R(c, 31));
  }
  /* e2698: ret  */
  return;
}

void fn1_e5e74(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038869620));
  /* e5e74: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e5e78: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* e5e7c: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e5e80: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* e5e84: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* e5e88: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* e5e8c: lsr x9, x0, #0x20 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 0)) >> ((UINT64_C(32)) & 63)));
  /* e5e90: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* e5e94: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* e5e98: cbnz x9, #0xe5eb0 */
  if ((ARC_X_R(c, 9)) != 0) goto L_e5eb0;
  /* e5e9c: add x0, sp, #0xb */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(11)));
  /* e5ea0: mov w1, w20 */
  ARC_W_W(c, 1, ARC_W_R(c, 20));
  /* e5ea4: bl #0xd4eb8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(941736));
  fn1_d4eb8(c);
  /* e5ea8: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* e5eac: b #0xe5fa4 */
  goto L_e5fa4;
L_e5eb0:;
  /* e5eb0: mov x22, #0xe3ff */
  ARC_X_W(c, 22, UINT64_C(58367));
  /* e5eb4: movk x22, #0x540b, lsl #16 */
  ARC_X_W(c, 22, ((ARC_X_R(c, 22) & UINT64_C(18446744069414649855)) | UINT64_C(1410007040)));
  /* e5eb8: movk x22, #2, lsl #32 */
  ARC_X_W(c, 22, ((ARC_X_R(c, 22) & UINT64_C(18446462603027808255)) | UINT64_C(8589934592)));
  /* e5ebc: cmp x20, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 22));
  /* e5ec0: b.ls #0xe5ef4 */
  if (ARC_COND(c, 9)) goto L_e5ef4;
  /* e5ec4: mov x8, #0xd5bf */
  ARC_X_W(c, 8, UINT64_C(54719));
  /* e5ec8: add x0, sp, #0xb */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(11)));
  /* e5ecc: movk x8, #0xbded, lsl #16 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(18446744069414649855)) | UINT64_C(3186425856)));
  /* e5ed0: movk x8, #0xfece, lsl #32 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(18446462603027808255)) | UINT64_C(280160716718080)));
  /* e5ed4: movk x8, #0xdbe6, lsl #48 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(281474976710655)) | UINT64_C(15845352338949668864)));
  /* e5ed8: umulh x8, x20, x8 */
  ARC_X_W(c, 8, arc_umulh(ARC_X_R(c, 20), ARC_X_R(c, 8)));
  /* e5edc: lsr x21, x8, #0x21 */
  ARC_X_W(c, 21, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(33)) & 63)));
  /* e5ee0: mov w1, w21 */
  ARC_W_W(c, 1, ARC_W_R(c, 21));
  /* e5ee4: bl #0xd4eb8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(941800));
  fn1_d4eb8(c);
  /* e5ee8: madd x8, x21, x22, x21 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 21)) + ((uint64_t)(ARC_X_R(c, 21)) * (uint64_t)(ARC_X_R(c, 22)))));
  /* e5eec: sub x20, x20, x8 */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) - ARC_X_R(c, 8)));
  /* e5ef0: b #0xe5ef8 */
  goto L_e5ef8;
L_e5ef4:;
  /* e5ef4: add x0, sp, #0xb */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(11)));
L_e5ef8:;
  /* e5ef8: mov x8, #0xcefd */
  ARC_X_W(c, 8, UINT64_C(52989));
  /* e5efc: mov w9, #0xe100 */
  ARC_W_W(c, 9, UINT64_C(57600));
  /* e5f00: mov w11, #0xde83 */
  ARC_W_W(c, 11, UINT64_C(56963));
  /* e5f04: movk x8, #0x8461, lsl #16 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(18446744069414649855)) | UINT64_C(2220949504)));
  /* e5f08: movk w9, #0x5f5, lsl #16 */
  ARC_W_W(c, 9, ((ARC_W_R(c, 9) & UINT64_C(18446744069414649855)) | UINT64_C(99942400)));
  /* e5f0c: movk w11, #0x431b, lsl #16 */
  ARC_W_W(c, 11, ((ARC_W_R(c, 11) & UINT64_C(18446744069414649855)) | UINT64_C(1125842944)));
  /* e5f10: movk x8, #0x7711, lsl #32 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(18446462603027808255)) | UINT64_C(130914898149376)));
  /* e5f14: mov w12, #0x2710 */
  ARC_W_W(c, 12, UINT64_C(10000));
  /* e5f18: add x21, x0, #0xa */
  ARC_X_W(c, 21, (ARC_X_R(c, 0) + UINT64_C(10)));
  /* e5f1c: movk x8, #0xabcc, lsl #48 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(281474976710655)) | UINT64_C(12379269475734650880)));
  /* e5f20: umulh x8, x20, x8 */
  ARC_X_W(c, 8, arc_umulh(ARC_X_R(c, 20), ARC_X_R(c, 8)));
  /* e5f24: lsr x8, x8, #0x1a */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(26)) & 63)));
  /* e5f28: msub x9, x8, x9, x20 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 20)) - ((uint64_t)(ARC_X_R(c, 8)) * (uint64_t)(ARC_X_R(c, 9)))));
  /* e5f2c: mov w10, w9 */
  ARC_W_W(c, 10, ARC_W_R(c, 9));
  /* e5f30: umull x10, w10, w11 */
  ARC_X_W(c, 10, (((uint64_t)(uint32_t)(ARC_W_R(c, 10))) * ((uint64_t)(uint32_t)(ARC_W_R(c, 11)))));
  /* e5f34: mov w11, #0x4240 */
  ARC_W_W(c, 11, UINT64_C(16960));
  /* e5f38: movk w11, #0xf, lsl #16 */
  ARC_W_W(c, 11, ((ARC_W_R(c, 11) & UINT64_C(18446744069414649855)) | UINT64_C(983040)));
  /* e5f3c: lsr x10, x10, #0x32 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 10)) >> ((UINT64_C(50)) & 63)));
  /* e5f40: msub w9, w10, w11, w9 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 9)) - ((uint32_t)(ARC_W_R(c, 10)) * (uint32_t)(ARC_W_R(c, 11)))));
  /* e5f44: mov w11, #0x1759 */
  ARC_W_W(c, 11, UINT64_C(5977));
  /* e5f48: movk w11, #0xd1b7, lsl #16 */
  ARC_W_W(c, 11, ((ARC_W_R(c, 11) & UINT64_C(18446744069414649855)) | UINT64_C(3518431232)));
  /* e5f4c: umull x11, w9, w11 */
  ARC_X_W(c, 11, (((uint64_t)(uint32_t)(ARC_W_R(c, 9))) * ((uint64_t)(uint32_t)(ARC_W_R(c, 11)))));
  /* e5f50: lsr x11, x11, #0x2d */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 11)) >> ((UINT64_C(45)) & 63)));
  /* e5f54: msub w9, w11, w12, w9 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 9)) - ((uint32_t)(ARC_W_R(c, 11)) * (uint32_t)(ARC_W_R(c, 12)))));
  /* e5f58: nop  */
  /* nop: no architectural effect here */
  /* e5f5c: adr x12, #0x58470 */
  ARC_X_W(c, 12, (arc_image_bases[1] + UINT64_C(361584)));
  /* e5f60: ldrh w8, [x12, x8, lsl #1] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 12) + ((uint64_t)(ARC_X_R(c, 8)) << 1))));
  /* e5f64: ubfx w13, w9, #2, #0xe */
  ARC_W_W(c, 13, (((uint32_t)(ARC_W_R(c, 9)) >> 2) & UINT64_C(16383)));
  /* e5f68: strh w8, [x0] */
  arc_st16(ARC_X_R(c, 0), ARC_W_R(c, 8));
  /* e5f6c: mov w8, #0x147b */
  ARC_W_W(c, 8, UINT64_C(5243));
  /* e5f70: ldrh w10, [x12, x10, lsl #1] */
  ARC_W_W(c, 10, arc_ld16((ARC_X_R(c, 12) + ((uint64_t)(ARC_X_R(c, 10)) << 1))));
  /* e5f74: mul w8, w13, w8 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 13)) * (uint32_t)(ARC_W_R(c, 8))));
  /* e5f78: strh w10, [x0, #2] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(2)), ARC_W_R(c, 10));
  /* e5f7c: ldrh w10, [x12, x11, lsl #1] */
  ARC_W_W(c, 10, arc_ld16((ARC_X_R(c, 12) + ((uint64_t)(ARC_X_R(c, 11)) << 1))));
  /* e5f80: mov w11, #0x64 */
  ARC_W_W(c, 11, UINT64_C(100));
  /* e5f84: lsr w8, w8, #0x11 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 8)) >> ((UINT64_C(17)) & 31)));
  /* e5f88: strh w10, [x0, #4] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(4)), ARC_W_R(c, 10));
  /* e5f8c: msub w9, w8, w11, w9 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 9)) - ((uint32_t)(ARC_W_R(c, 8)) * (uint32_t)(ARC_W_R(c, 11)))));
  /* e5f90: ldrh w8, [x12, w8, uxtw #1] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 12) + ((uint64_t)(((uint64_t)(uint32_t)(ARC_W_R(c, 8)))) << 1))));
  /* e5f94: strh w8, [x0, #6] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(6)), ARC_W_R(c, 8));
  /* e5f98: and x8, x9, #0xffff */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) & UINT64_C(65535)));
  /* e5f9c: ldrh w8, [x12, x8, lsl #1] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 12) + ((uint64_t)(ARC_X_R(c, 8)) << 1))));
  /* e5fa0: strh w8, [x0, #8] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 8));
L_e5fa4:;
  /* e5fa4: add x8, sp, #0xb */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(11)));
  /* e5fa8: sub x20, x21, x8 */
  ARC_X_W(c, 20, (ARC_X_R(c, 21) - ARC_X_R(c, 8)));
  /* e5fac: cmn x20, #8 */
  (void)arc_add64(c, ARC_X_R(c, 20), UINT64_C(8), 0);
  /* e5fb0: b.hs #0xe6028 */
  if (ARC_COND(c, 2)) goto L_e6028;
  /* e5fb4: cmp x20, #0x16 */
  (void)arc_sub64(c, ARC_X_R(c, 20), UINT64_C(22));
  /* e5fb8: b.hi #0xe5fc8 */
  if (ARC_COND(c, 8)) goto L_e5fc8;
  /* e5fbc: lsl w8, w20, #1 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 20)) << ((UINT64_C(1)) & 31)));
  /* e5fc0: strb w8, [x19], #1 */
  { const uint64_t _a = ARC_X_R(c, 19);
    ARC_X_W(c, 19, ARC_X_R(c, 19) + INT64_C(1));
    arc_st8(_a, ARC_W_R(c, 8));
  }
  /* e5fc4: b #0xe5ff0 */
  goto L_e5ff0;
L_e5fc8:;
  /* e5fc8: orr x8, x20, #7 */
  ARC_X_W(c, 8, (ARC_X_R(c, 20) | UINT64_C(7)));
  /* e5fcc: mov w9, #0x1a */
  ARC_W_W(c, 9, UINT64_C(26));
  /* e5fd0: cmp x8, #0x17 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(23));
  /* e5fd4: csinc x22, x9, x8, eq */
  ARC_X_W(c, 22, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 8)) + 1)));
  /* e5fd8: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* e5fdc: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(942048));
  fn1_1428f0(c);
  /* e5fe0: orr x8, x22, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 22) | UINT64_C(1)));
  /* e5fe4: stp x20, x0, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 0));
  }
  /* e5fe8: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* e5fec: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
L_e5ff0:;
  /* e5ff0: add x8, sp, #0xb */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(11)));
  /* e5ff4: cmp x21, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 8));
  /* e5ff8: b.eq #0xe600c */
  if (ARC_COND(c, 0)) goto L_e600c;
  /* e5ffc: add x1, sp, #0xb */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(11)));
  /* e6000: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* e6004: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* e6008: bl #0x1449d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(942092));
  fn1_1449d8(c);
L_e600c:;
  /* e600c: strb wzr, [x19, x20] */
  arc_st8((ARC_X_R(c, 19) + ARC_X_R(c, 20)), ARC_W_R(c, 31));
  /* e6010: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* e6014: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* e6018: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e601c: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* e6020: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* e6024: ret  */
  return;
L_e6028:;
  /* e6028: bl #0xd7d54 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(942124));
  fn1_d7d54(c);
}

void fn1_e958c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038883724));
  /* e958c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e9590: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e9594: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* e9598: ldrb w8, [x1, #8] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 1) + INT64_C(8))));
  /* e959c: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* e95a0: b.ne #0xe95bc */
  if (ARC_COND(c, 1)) goto L_e95bc;
  /* e95a4: ldr x1, [x1] */
  ARC_X_W(c, 1, arc_ld64(ARC_X_R(c, 1)));
  /* e95a8: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(955820));
  fn1_142530(c);
  /* e95ac: cbnz w0, #0xe95cc */
  if ((ARC_W_R(c, 0)) != 0) goto L_e95cc;
  /* e95b0: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e95b4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* e95b8: ret  */
  return;
L_e95bc:;
  /* e95bc: nop  */
  /* nop: no architectural effect here */
  /* e95c0: adr x1, #0x52033 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(335923)));
  /* e95c4: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* e95c8: b #0xe95d4 */
  goto L_e95d4;
L_e95cc:;
  /* e95cc: nop  */
  /* nop: no architectural effect here */
  /* e95d0: adr x1, #0x50514 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(328980)));
L_e95d4:;
  /* e95d4: bl #0x142a40 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(955864));
  fn1_142a40(c);
  /* e95d8: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(955868));
  fn1_a1454(c);
}

void fn1_eb568(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038891880));
  /* eb568: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* eb56c: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* eb570: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* eb574: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* eb578: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* eb57c: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(963968));
  fn1_142518(c);
  /* eb580: cbnz w0, #0xeb5f4 */
  if ((ARC_W_R(c, 0)) != 0) goto L_eb5f4;
L_eb584:;
  /* eb584: ldr w8, [x19, #0x88] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 19) + INT64_C(136))));
  /* eb588: tbz w8, #0x1f, #0xeb5a8 */
  if (((ARC_W_R(c, 8)) >> 31 & 1) == 0) goto L_eb5a8;
  /* eb58c: add x0, x19, #0x28 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(40)));
  /* eb590: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* eb594: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(963992));
  fn1_142530(c);
  /* eb598: cbz w0, #0xeb584 */
  if ((ARC_W_R(c, 0)) == 0) goto L_eb584;
  /* eb59c: nop  */
  /* nop: no architectural effect here */
  /* eb5a0: adr x1, #0x50514 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(328980)));
  /* eb5a4: bl #0x142a40 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(964008));
  fn1_142a40(c);
L_eb5a8:;
  /* eb5a8: orr w9, w8, #0x80000000 */
  ARC_W_W(c, 9, (ARC_W_R(c, 8) | UINT64_C(2147483648)));
  /* eb5ac: str w9, [x19, #0x88] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(136)), ARC_W_R(c, 9));
  /* eb5b0: cbz w8, #0xeb5d0 */
  if ((ARC_W_R(c, 8)) == 0) goto L_eb5d0;
L_eb5b4:;
  /* eb5b4: add x0, x19, #0x58 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(88)));
  /* eb5b8: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* eb5bc: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(964032));
  fn1_142530(c);
  /* eb5c0: cbnz w0, #0xeb5e8 */
  if ((ARC_W_R(c, 0)) != 0) goto L_eb5e8;
  /* eb5c4: ldr w8, [x19, #0x88] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 19) + INT64_C(136))));
  /* eb5c8: tst w8, #0x7fffffff */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(2147483647)));
  /* eb5cc: b.ne #0xeb5b4 */
  if (ARC_COND(c, 1)) goto L_eb5b4;
L_eb5d0:;
  /* eb5d0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* eb5d4: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(964056));
  fn1_142560(c);
  /* eb5d8: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* eb5dc: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* eb5e0: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* eb5e4: ret  */
  return;
L_eb5e8:;
  /* eb5e8: nop  */
  /* nop: no architectural effect here */
  /* eb5ec: adr x1, #0x50514 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(328980)));
  /* eb5f0: bl #0x142a40 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(964084));
  fn1_142a40(c);
L_eb5f4:;
  /* eb5f4: nop  */
  /* nop: no architectural effect here */
  /* eb5f8: adr x1, #0x50f67 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(331623)));
  /* eb5fc: bl #0x142a40 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(964096));
  fn1_142a40(c);
  /* eb600: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(964100));
  fn1_a1454(c);
  /* eb604: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(964104));
  fn1_a1454(c);
  /* eb608: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(964108));
  fn1_a1454(c);
  /* eb60c: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(964112));
  fn1_a1454(c);
  /* eb610: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(964116));
  fn1_a1454(c);
}

void fn1_ed308(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038899464));
  /* ed308: bti c */
  /* bti: no architectural effect here */
  /* ed30c: ldp x8, x9, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* ed310: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* ed314: b.eq #0xed320 */
  if (ARC_COND(c, 0)) goto L_ed320;
  /* ed318: ldrb w0, [x8] */
  ARC_W_W(c, 0, arc_ld8(ARC_X_R(c, 8)));
  /* ed31c: ret  */
  return;
L_ed320:;
  /* ed320: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* ed324: ldr x16, [x8, #0x48] */
  ARC_X_W(c, 16, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* ed328: br x16 */
  arc_dispatch(c, ARC_X_R(c, 16)); return;
}

void fn1_f06a4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038912676));
  /* f06a4: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* f06a8: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* f06ac: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* f06b0: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* f06b4: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* f06b8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f06bc: mov x21, x2 */
  ARC_X_W(c, 21, ARC_X_R(c, 2));
  /* f06c0: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* f06c4: str xzr, [x0, #8] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(8)), ARC_X_R(c, 31));
  /* f06c8: add x0, x29, #0x1c */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(28)));
  /* f06cc: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* f06d0: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* f06d4: bl #0x1435f8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(984792));
  fn1_1435f8(c);
  /* f06d8: ldrb w8, [x29, #0x1c] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(28))));
  /* f06dc: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* f06e0: b.ne #0xf0708 */
  if (ARC_COND(c, 1)) goto L_f0708;
  /* f06e4: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f06e8: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f06ec: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f06f0: ldr x0, [x8, #0x28] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* f06f4: ldp x8, x9, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* f06f8: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* f06fc: b.hs #0xf0710 */
  if (ARC_COND(c, 2)) goto L_f0710;
  /* f0700: sub x0, x9, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 9) - ARC_X_R(c, 8)));
  /* f0704: b #0xf071c */
  goto L_f071c;
L_f0708:;
  /* f0708: mov w8, #4 */
  ARC_W_W(c, 8, UINT64_C(4));
  /* f070c: b #0xf0778 */
  goto L_f0778;
L_f0710:;
  /* f0710: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* f0714: ldr x8, [x8, #0x38] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(56))));
  /* f0718: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(984860));
  arc_dispatch(c, ARC_X_R(c, 8));
L_f071c:;
  /* f071c: cmn x0, #1 */
  (void)arc_add64(c, ARC_X_R(c, 0), UINT64_C(1), 0);
  /* f0720: b.eq #0xf0730 */
  if (ARC_COND(c, 0)) goto L_f0730;
  /* f0724: cbnz x0, #0xf0738 */
  if ((ARC_X_R(c, 0)) != 0) goto L_f0738;
  /* f0728: mov w8, wzr */
  ARC_W_W(c, 8, ARC_W_R(c, 31));
  /* f072c: b #0xf0778 */
  goto L_f0778;
L_f0730:;
  /* f0730: mov w8, #2 */
  ARC_W_W(c, 8, UINT64_C(2));
  /* f0734: b #0xf0778 */
  goto L_f0778;
L_f0738:;
  /* f0738: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f073c: cmp x21, x0 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 0));
  /* f0740: csel x21, x21, x0, lt */
  ARC_X_W(c, 21, (ARC_COND(c, 11) ? (ARC_X_R(c, 21)) : ARC_X_R(c, 0)));
  /* f0744: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f0748: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f074c: ldr x8, [x8, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* f0750: ldr x9, [x8] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 8)));
  /* f0754: ldr x9, [x9, #0x40] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(64))));
  /* f0758: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* f075c: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* f0760: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* f0764: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(984936));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* f0768: cmp x0, x21 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 21));
  /* f076c: mov w8, #6 */
  ARC_W_W(c, 8, UINT64_C(6));
  /* f0770: str x0, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 0));
  /* f0774: csel w8, wzr, w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? (ARC_W_R(c, 31)) : ARC_W_R(c, 8)));
L_f0778:;
  /* f0778: ldr x9, [x19] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 19)));
  /* f077c: ldur x9, [x9, #-0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(-24))));
  /* f0780: add x9, x19, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + ARC_X_R(c, 9)));
  /* f0784: ldr x10, [x9, #0x28] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 9) + INT64_C(40))));
  /* f0788: cmp x10, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 10), UINT64_C(0));
  /* f078c: ldp w11, w10, [x9, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 9) + INT64_C(32));
    ARC_W_W(c, 11, arc_ld32(_pa));
    ARC_W_W(c, 10, arc_ld32(_pa + 4));
  }
  /* f0790: orr w8, w11, w8 */
  ARC_W_W(c, 8, (ARC_W_R(c, 11) | ARC_W_R(c, 8)));
  /* f0794: cset w11, eq */
  ARC_W_W(c, 11, (ARC_COND(c, 0) ? 1 : 0));
  /* f0798: orr w8, w8, w11 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | ARC_W_R(c, 11)));
  /* f079c: tst w8, w10 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & ARC_W_R(c, 10)));
  /* f07a0: str w8, [x9, #0x20] */
  arc_st32((ARC_X_R(c, 9) + INT64_C(32)), ARC_W_R(c, 8));
  /* f07a4: b.ne #0xf07c0 */
  if (ARC_COND(c, 1)) goto L_f07c0;
  /* f07a8: ldr x0, [x19, #8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* f07ac: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* f07b0: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* f07b4: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* f07b8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* f07bc: ret  */
  return;
L_f07c0:;
  /* f07c0: nop  */
  /* nop: no architectural effect here */
  /* f07c4: adr x0, #0x50210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(328208)));
  /* f07c8: bl #0xec720 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(985036));
  fn1_ec720(c);
  /* f07cc: bl #0x142548 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(985040));
  fn1_142548(c);
  /* f07d0: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f07d4: ldur x9, [x8, #-0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f07d8: add x9, x19, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + ARC_X_R(c, 9)));
  /* f07dc: ldr w10, [x9, #0x20] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 9) + INT64_C(32))));
  /* f07e0: orr w10, w10, #1 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) | UINT64_C(1)));
  /* f07e4: str w10, [x9, #0x20] */
  arc_st32((ARC_X_R(c, 9) + INT64_C(32)), ARC_W_R(c, 10));
  /* f07e8: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f07ec: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f07f0: ldrb w8, [x8, #0x24] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 8) + INT64_C(36))));
  /* f07f4: tbnz w8, #0, #0xf0804 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_f0804;
  /* f07f8: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(985084));
  fn1_142980(c);
  /* f07fc: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* f0800: b #0xf0778 */
  goto L_f0778;
L_f0804:;
  /* f0804: bl #0x1429b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(985096));
  fn1_1429b0(c);
  /* f0808: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f080c: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(985104));
  fn1_142980(c);
  /* f0810: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f0814: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(985112));
  fn1_9cc20(c);
  /* f0818: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(985116));
  fn1_a1454(c);
}

void fn1_f3d3c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038926652));
  /* f3d3c: bti c */
  /* bti: no architectural effect here */
  /* f3d40: ldp x8, x9, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* f3d44: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* f3d48: b.eq #0xf3d54 */
  if (ARC_COND(c, 0)) goto L_f3d54;
  /* f3d4c: ldr w0, [x8] */
  ARC_W_W(c, 0, arc_ld32(ARC_X_R(c, 8)));
  /* f3d50: ret  */
  return;
L_f3d54:;
  /* f3d54: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* f3d58: ldr x16, [x8, #0x48] */
  ARC_X_W(c, 16, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* f3d5c: br x16 */
  arc_dispatch(c, ARC_X_R(c, 16)); return;
}

void fn1_f70c0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038939840));
  /* f70c0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* f70c4: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* f70c8: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* f70cc: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* f70d0: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* f70d4: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f70d8: mov x21, x2 */
  ARC_X_W(c, 21, ARC_X_R(c, 2));
  /* f70dc: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* f70e0: str xzr, [x0, #8] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(8)), ARC_X_R(c, 31));
  /* f70e4: add x0, x29, #0x1c */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(28)));
  /* f70e8: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* f70ec: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* f70f0: bl #0x143670 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1011956));
  fn1_143670(c);
  /* f70f4: ldrb w8, [x29, #0x1c] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(28))));
  /* f70f8: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* f70fc: b.ne #0xf7128 */
  if (ARC_COND(c, 1)) goto L_f7128;
  /* f7100: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f7104: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f7108: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f710c: ldr x0, [x8, #0x28] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* f7110: ldp x8, x9, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* f7114: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* f7118: b.hs #0xf7130 */
  if (ARC_COND(c, 2)) goto L_f7130;
  /* f711c: sub x8, x9, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) - ARC_X_R(c, 8)));
  /* f7120: asr x0, x8, #2 */
  ARC_X_W(c, 0, ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(2)) & 63))));
  /* f7124: b #0xf713c */
  goto L_f713c;
L_f7128:;
  /* f7128: mov w8, #4 */
  ARC_W_W(c, 8, UINT64_C(4));
  /* f712c: b #0xf7198 */
  goto L_f7198;
L_f7130:;
  /* f7130: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* f7134: ldr x8, [x8, #0x38] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(56))));
  /* f7138: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1012028));
  arc_dispatch(c, ARC_X_R(c, 8));
L_f713c:;
  /* f713c: cmn x0, #1 */
  (void)arc_add64(c, ARC_X_R(c, 0), UINT64_C(1), 0);
  /* f7140: b.eq #0xf7150 */
  if (ARC_COND(c, 0)) goto L_f7150;
  /* f7144: cbnz x0, #0xf7158 */
  if ((ARC_X_R(c, 0)) != 0) goto L_f7158;
  /* f7148: mov w8, wzr */
  ARC_W_W(c, 8, ARC_W_R(c, 31));
  /* f714c: b #0xf7198 */
  goto L_f7198;
L_f7150:;
  /* f7150: mov w8, #2 */
  ARC_W_W(c, 8, UINT64_C(2));
  /* f7154: b #0xf7198 */
  goto L_f7198;
L_f7158:;
  /* f7158: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f715c: cmp x21, x0 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 0));
  /* f7160: csel x21, x21, x0, lt */
  ARC_X_W(c, 21, (ARC_COND(c, 11) ? (ARC_X_R(c, 21)) : ARC_X_R(c, 0)));
  /* f7164: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f7168: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f716c: ldr x8, [x8, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* f7170: ldr x9, [x8] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 8)));
  /* f7174: ldr x9, [x9, #0x40] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(64))));
  /* f7178: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* f717c: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* f7180: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* f7184: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1012104));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* f7188: cmp x0, x21 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 21));
  /* f718c: mov w8, #6 */
  ARC_W_W(c, 8, UINT64_C(6));
  /* f7190: str x0, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 0));
  /* f7194: csel w8, wzr, w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? (ARC_W_R(c, 31)) : ARC_W_R(c, 8)));
L_f7198:;
  /* f7198: ldr x9, [x19] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 19)));
  /* f719c: ldur x9, [x9, #-0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(-24))));
  /* f71a0: add x9, x19, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + ARC_X_R(c, 9)));
  /* f71a4: ldr x10, [x9, #0x28] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 9) + INT64_C(40))));
  /* f71a8: cmp x10, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 10), UINT64_C(0));
  /* f71ac: ldp w11, w10, [x9, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 9) + INT64_C(32));
    ARC_W_W(c, 11, arc_ld32(_pa));
    ARC_W_W(c, 10, arc_ld32(_pa + 4));
  }
  /* f71b0: orr w8, w11, w8 */
  ARC_W_W(c, 8, (ARC_W_R(c, 11) | ARC_W_R(c, 8)));
  /* f71b4: cset w11, eq */
  ARC_W_W(c, 11, (ARC_COND(c, 0) ? 1 : 0));
  /* f71b8: orr w8, w8, w11 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | ARC_W_R(c, 11)));
  /* f71bc: tst w8, w10 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & ARC_W_R(c, 10)));
  /* f71c0: str w8, [x9, #0x20] */
  arc_st32((ARC_X_R(c, 9) + INT64_C(32)), ARC_W_R(c, 8));
  /* f71c4: b.ne #0xf71e0 */
  if (ARC_COND(c, 1)) goto L_f71e0;
  /* f71c8: ldr x0, [x19, #8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* f71cc: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* f71d0: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* f71d4: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* f71d8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* f71dc: ret  */
  return;
L_f71e0:;
  /* f71e0: nop  */
  /* nop: no architectural effect here */
  /* f71e4: adr x0, #0x50210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(328208)));
  /* f71e8: bl #0xec720 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1012204));
  fn1_ec720(c);
  /* f71ec: bl #0x142548 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1012208));
  fn1_142548(c);
  /* f71f0: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f71f4: ldur x9, [x8, #-0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f71f8: add x9, x19, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + ARC_X_R(c, 9)));
  /* f71fc: ldr w10, [x9, #0x20] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 9) + INT64_C(32))));
  /* f7200: orr w10, w10, #1 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) | UINT64_C(1)));
  /* f7204: str w10, [x9, #0x20] */
  arc_st32((ARC_X_R(c, 9) + INT64_C(32)), ARC_W_R(c, 10));
  /* f7208: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f720c: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f7210: ldrb w8, [x8, #0x24] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 8) + INT64_C(36))));
  /* f7214: tbnz w8, #0, #0xf7224 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_f7224;
  /* f7218: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1012252));
  fn1_142980(c);
  /* f721c: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* f7220: b #0xf7198 */
  goto L_f7198;
L_f7224:;
  /* f7224: bl #0x1429b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1012264));
  fn1_1429b0(c);
  /* f7228: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f722c: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1012272));
  fn1_142980(c);
  /* f7230: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f7234: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1012280));
  fn1_9cc20(c);
  /* f7238: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1012284));
  fn1_a1454(c);
}

void fn1_fc360(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038960992));
  /* fc360: bti c */
  /* bti: no architectural effect here */
  /* fc364: ldr w8, [x0, #0x9c] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 0) + INT64_C(156))));
  /* fc368: tbnz w8, #3, #0xfc3ac */
  if (((ARC_W_R(c, 8)) >> 3 & 1) != 0) goto L_fc3ac;
  /* fc36c: ldrb w9, [x0, #0xa2] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(162))));
  /* fc370: mov w10, #0x68 */
  ARC_W_W(c, 10, UINT64_C(104));
  /* fc374: mov w11, #0x40 */
  ARC_W_W(c, 11, UINT64_C(64));
  /* fc378: mov w12, #0x70 */
  ARC_W_W(c, 12, UINT64_C(112));
  /* fc37c: stp xzr, xzr, [x0, #0x30] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* fc380: cmp w9, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(0));
  /* fc384: mov w9, #0x60 */
  ARC_W_W(c, 9, UINT64_C(96));
  /* fc388: csel x10, x11, x10, ne */
  ARC_X_W(c, 10, (ARC_COND(c, 1) ? (ARC_X_R(c, 11)) : ARC_X_R(c, 10)));
  /* fc38c: csel x9, x9, x12, ne */
  ARC_X_W(c, 9, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 12)));
  /* fc390: ldr x10, [x0, x10] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 0) + ARC_X_R(c, 10))));
  /* fc394: ldr x9, [x0, x9] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + ARC_X_R(c, 9))));
  /* fc398: add x9, x10, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 10) + ARC_X_R(c, 9)));
  /* fc39c: stp x10, x9, [x0, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 10));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* fc3a0: mov w10, #8 */
  ARC_W_W(c, 10, UINT64_C(8));
  /* fc3a4: stp x9, xzr, [x0, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* fc3a8: str w10, [x0, #0x9c] */
  arc_st32((ARC_X_R(c, 0) + INT64_C(156)), ARC_W_R(c, 10));
L_fc3ac:;
  /* fc3ac: tst w8, #8 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(8)));
  /* fc3b0: cset w0, eq */
  ARC_W_W(c, 0, (ARC_COND(c, 0) ? 1 : 0));
  /* fc3b4: ret  */
  return;
}

void fn1_ff3b0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038973360));
  /* ff3b0: bti c */
  /* bti: no architectural effect here */
  /* ff3b4: ret  */
  return;
}

void fn1_10e00c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039033868));
  /* 10e00c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 10e010: sub sp, sp, #0xa0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(160)));
  /* 10e014: stp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 10e018: stp x28, x27, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* 10e01c: stp x26, x25, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* 10e020: stp x24, x23, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 10e024: stp x22, x21, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 10e028: stp x20, x19, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 10e02c: add x29, sp, #0x40 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(64)));
  /* 10e030: adrp x22, #0x151000 */
  ARC_X_W(c, 22, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 10e034: mov x26, x6 */
  ARC_X_W(c, 26, ARC_X_R(c, 6));
  /* 10e038: mov x20, x5 */
  ARC_X_W(c, 20, ARC_X_R(c, 5));
  /* 10e03c: ldr x22, [x22, #0xb58] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 22) + INT64_C(2904))));
  /* 10e040: ldr x19, [x6] */
  ARC_X_W(c, 19, arc_ld64(ARC_X_R(c, 6)));
  /* 10e044: mov x23, x4 */
  ARC_X_W(c, 23, ARC_X_R(c, 4));
  /* 10e048: mov x28, x3 */
  ARC_X_W(c, 28, ARC_X_R(c, 3));
  /* 10e04c: mov x21, x2 */
  ARC_X_W(c, 21, ARC_X_R(c, 2));
  /* 10e050: mov x24, x1 */
  ARC_X_W(c, 24, ARC_X_R(c, 1));
  /* 10e054: ldar x8, [x22] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 22)));
  /* 10e058: str x0, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 0));
  /* 10e05c: cmn x8, #1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0);
  /* 10e060: b.eq #0x10e11c */
  if (ARC_COND(c, 0)) goto L_10e11c;
  /* 10e064: nop  */
  /* nop: no architectural effect here */
  /* 10e068: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 10e06c: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1106032));
  fn1_142518(c);
  /* 10e070: ldr x8, [x22] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 22)));
  /* 10e074: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 10e078: b.ne #0x10e0a4 */
  if (ARC_COND(c, 1)) goto L_10e0a4;
  /* 10e07c: nop  */
  /* nop: no architectural effect here */
  /* 10e080: adr x25, #0x15791c */
  ARC_X_W(c, 25, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 10e084: nop  */
  /* nop: no architectural effect here */
  /* 10e088: adr x27, #0x1578f4 */
  ARC_X_W(c, 27, (arc_image_bases[1] + UINT64_C(1407220)));
L_10e08c:;
  /* 10e08c: mov x0, x25 */
  ARC_X_W(c, 0, ARC_X_R(c, 25));
  /* 10e090: mov x1, x27 */
  ARC_X_W(c, 1, ARC_X_R(c, 27));
  /* 10e094: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1106072));
  fn1_142530(c);
  /* 10e098: ldr x8, [x22] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 22)));
  /* 10e09c: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 10e0a0: b.eq #0x10e08c */
  if (ARC_COND(c, 0)) goto L_10e08c;
L_10e0a4:;
  /* 10e0a4: ldr x8, [x22] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 22)));
  /* 10e0a8: cbz x8, #0x10e0bc */
  if ((ARC_X_R(c, 8)) == 0) goto L_10e0bc;
  /* 10e0ac: nop  */
  /* nop: no architectural effect here */
  /* 10e0b0: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 10e0b4: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1106104));
  fn1_142560(c);
  /* 10e0b8: b #0x10e11c */
  goto L_10e11c;
L_10e0bc:;
  /* 10e0bc: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 10e0c0: stur x22, [x29, #-0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-24)), ARC_X_R(c, 22));
  /* 10e0c4: sturb wzr, [x29, #-0x10] */
  arc_st8((ARC_X_R(c, 29) + INT64_C(-16)), ARC_W_R(c, 31));
  /* 10e0c8: str x8, [x22] */
  arc_st64(ARC_X_R(c, 22), ARC_X_R(c, 8));
  /* 10e0cc: nop  */
  /* nop: no architectural effect here */
  /* 10e0d0: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 10e0d4: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1106136));
  fn1_142560(c);
  /* 10e0d8: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 10e0dc: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 10e0e0: ldr x1, [x1, #0xc58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3160))));
  /* 10e0e4: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1106152));
  fn1_a2030(c);
  /* 10e0e8: add w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + UINT64_C(1)));
  /* 10e0ec: str w8, [x22, #8] */
  arc_st32((ARC_X_R(c, 22) + INT64_C(8)), ARC_W_R(c, 8));
  /* 10e0f0: nop  */
  /* nop: no architectural effect here */
  /* 10e0f4: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 10e0f8: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1106172));
  fn1_142518(c);
  /* 10e0fc: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 10e100: stlr x8, [x22] */
  arc_st64(ARC_X_R(c, 22), ARC_X_R(c, 8));
  /* 10e104: nop  */
  /* nop: no architectural effect here */
  /* 10e108: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 10e10c: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1106192));
  fn1_142560(c);
  /* 10e110: nop  */
  /* nop: no architectural effect here */
  /* 10e114: adr x0, #0x15791c */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 10e118: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1106204));
  fn1_142578(c);
L_10e11c:;
  /* 10e11c: ldp x8, x10, [x19, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* 10e120: ldrsw x9, [x22, #8] */
  ARC_X_W(c, 9, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 22) + INT64_C(8)))));
  /* 10e124: sub x9, x9, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - UINT64_C(1)));
  /* 10e128: sub x10, x10, x8 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) - ARC_X_R(c, 8)));
  /* 10e12c: cmp x9, x10, asr #3 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ((uint64_t)((int64_t)(ARC_X_R(c, 10)) >> 3)));
  /* 10e130: b.hs #0x10e744 */
  if (ARC_COND(c, 2)) goto L_10e744;
  /* 10e134: ldr x25, [x8, x9, lsl #3] */
  ARC_X_W(c, 25, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3))));
  /* 10e138: cbz x25, #0x10e744 */
  if ((ARC_X_R(c, 25)) == 0) goto L_10e744;
  /* 10e13c: adrp x22, #0x151000 */
  ARC_X_W(c, 22, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 10e140: ldr x22, [x22, #0xcb8] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 22) + INT64_C(3256))));
  /* 10e144: ldr x19, [x26] */
  ARC_X_W(c, 19, arc_ld64(ARC_X_R(c, 26)));
  /* 10e148: ldar x8, [x22] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 22)));
  /* 10e14c: cmn x8, #1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0);
  /* 10e150: b.eq #0x10e20c */
  if (ARC_COND(c, 0)) goto L_10e20c;
  /* 10e154: nop  */
  /* nop: no architectural effect here */
  /* 10e158: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 10e15c: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1106272));
  fn1_142518(c);
  /* 10e160: ldr x8, [x22] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 22)));
  /* 10e164: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 10e168: b.ne #0x10e194 */
  if (ARC_COND(c, 1)) goto L_10e194;
  /* 10e16c: nop  */
  /* nop: no architectural effect here */
  /* 10e170: adr x26, #0x15791c */
  ARC_X_W(c, 26, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 10e174: nop  */
  /* nop: no architectural effect here */
  /* 10e178: adr x27, #0x1578f4 */
  ARC_X_W(c, 27, (arc_image_bases[1] + UINT64_C(1407220)));
L_10e17c:;
  /* 10e17c: mov x0, x26 */
  ARC_X_W(c, 0, ARC_X_R(c, 26));
  /* 10e180: mov x1, x27 */
  ARC_X_W(c, 1, ARC_X_R(c, 27));
  /* 10e184: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1106312));
  fn1_142530(c);
  /* 10e188: ldr x8, [x22] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 22)));
  /* 10e18c: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 10e190: b.eq #0x10e17c */
  if (ARC_COND(c, 0)) goto L_10e17c;
L_10e194:;
  /* 10e194: ldr x8, [x22] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 22)));
  /* 10e198: cbz x8, #0x10e1ac */
  if ((ARC_X_R(c, 8)) == 0) goto L_10e1ac;
  /* 10e19c: nop  */
  /* nop: no architectural effect here */
  /* 10e1a0: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 10e1a4: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1106344));
  fn1_142560(c);
  /* 10e1a8: b #0x10e20c */
  goto L_10e20c;
L_10e1ac:;
  /* 10e1ac: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 10e1b0: stur x22, [x29, #-0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-24)), ARC_X_R(c, 22));
  /* 10e1b4: sturb wzr, [x29, #-0x10] */
  arc_st8((ARC_X_R(c, 29) + INT64_C(-16)), ARC_W_R(c, 31));
  /* 10e1b8: str x8, [x22] */
  arc_st64(ARC_X_R(c, 22), ARC_X_R(c, 8));
  /* 10e1bc: nop  */
  /* nop: no architectural effect here */
  /* 10e1c0: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 10e1c4: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1106376));
  fn1_142560(c);
  /* 10e1c8: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 10e1cc: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 10e1d0: ldr x1, [x1, #0xc58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3160))));
  /* 10e1d4: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1106392));
  fn1_a2030(c);
  /* 10e1d8: add w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + UINT64_C(1)));
  /* 10e1dc: str w8, [x22, #8] */
  arc_st32((ARC_X_R(c, 22) + INT64_C(8)), ARC_W_R(c, 8));
  /* 10e1e0: nop  */
  /* nop: no architectural effect here */
  /* 10e1e4: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 10e1e8: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1106412));
  fn1_142518(c);
  /* 10e1ec: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 10e1f0: stlr x8, [x22] */
  arc_st64(ARC_X_R(c, 22), ARC_X_R(c, 8));
  /* 10e1f4: nop  */
  /* nop: no architectural effect here */
  /* 10e1f8: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 10e1fc: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1106432));
  fn1_142560(c);
  /* 10e200: nop  */
  /* nop: no architectural effect here */
  /* 10e204: adr x0, #0x15791c */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 10e208: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1106444));
  fn1_142578(c);
L_10e20c:;
  /* 10e20c: ldp x8, x10, [x19, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* 10e210: ldrsw x9, [x22, #8] */
  ARC_X_W(c, 9, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 22) + INT64_C(8)))));
  /* 10e214: sub x9, x9, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - UINT64_C(1)));
  /* 10e218: sub x10, x10, x8 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) - ARC_X_R(c, 8)));
  /* 10e21c: cmp x9, x10, asr #3 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ((uint64_t)((int64_t)(ARC_X_R(c, 10)) >> 3)));
  /* 10e220: b.hs #0x10e744 */
  if (ARC_COND(c, 2)) goto L_10e744;
  /* 10e224: ldr x26, [x8, x9, lsl #3] */
  ARC_X_W(c, 26, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3))));
  /* 10e228: cbz x26, #0x10e744 */
  if ((ARC_X_R(c, 26)) == 0) goto L_10e744;
  /* 10e22c: ldr x8, [x26] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 26)));
  /* 10e230: mov x0, x26 */
  ARC_X_W(c, 0, ARC_X_R(c, 26));
  /* 10e234: ldr x9, [x8, #0x28] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* 10e238: sub x8, x29, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 10e23c: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1106496));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 10e240: ldurb w8, [x29, #-0x18] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-24))));
  /* 10e244: ldur x9, [x29, #-0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 29) + INT64_C(-16))));
  /* 10e248: ldr x19, [sp, #0x20] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(32))));
  /* 10e24c: lsr x10, x8, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* 10e250: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 10e254: csel x8, x10, x9, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* 10e258: cbz x8, #0x10e36c */
  if ((ARC_X_R(c, 8)) == 0) goto L_10e36c;
  /* 10e25c: str x28, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 28));
  /* 10e260: ldrb w1, [x19] */
  ARC_W_W(c, 1, arc_ld8(ARC_X_R(c, 19)));
  /* 10e264: str x28, [sp, #0x18] */
  arc_st64(((c)->sp + INT64_C(24)), ARC_X_R(c, 28));
  /* 10e268: cmp w1, #0x2d */
  (void)arc_sub32(c, ARC_W_R(c, 1), UINT64_C(45));
  /* 10e26c: b.eq #0x10e27c */
  if (ARC_COND(c, 0)) goto L_10e27c;
  /* 10e270: cmp w1, #0x2b */
  (void)arc_sub32(c, ARC_W_R(c, 1), UINT64_C(43));
  /* 10e274: mov x28, x19 */
  ARC_X_W(c, 28, ARC_X_R(c, 19));
  /* 10e278: b.ne #0x10e29c */
  if (ARC_COND(c, 1)) goto L_10e29c;
L_10e27c:;
  /* 10e27c: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 10e280: ldr x8, [x8, #0x58] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(88))));
  /* 10e284: mov x0, x25 */
  ARC_X_W(c, 0, ARC_X_R(c, 25));
  /* 10e288: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1106572));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 10e28c: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 10e290: add x28, x19, #1 */
  ARC_X_W(c, 28, (ARC_X_R(c, 19) + UINT64_C(1)));
  /* 10e294: str w0, [x8], #4 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(4));
    arc_st32(_a, ARC_W_R(c, 0));
  }
  /* 10e298: str x8, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 8));
L_10e29c:;
  /* 10e29c: sub x8, x21, x28 */
  ARC_X_W(c, 8, (ARC_X_R(c, 21) - ARC_X_R(c, 28)));
  /* 10e2a0: cmp x8, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(2));
  /* 10e2a4: b.lt #0x10e318 */
  if (ARC_COND(c, 11)) goto L_10e318;
  /* 10e2a8: ldrb w8, [x28] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 28)));
  /* 10e2ac: cmp w8, #0x30 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(48));
  /* 10e2b0: b.ne #0x10e318 */
  if (ARC_COND(c, 1)) goto L_10e318;
  /* 10e2b4: ldrb w8, [x28, #1] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 28) + INT64_C(1))));
  /* 10e2b8: orr w8, w8, #0x20 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | UINT64_C(32)));
  /* 10e2bc: cmp w8, #0x78 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(120));
  /* 10e2c0: b.ne #0x10e318 */
  if (ARC_COND(c, 1)) goto L_10e318;
  /* 10e2c4: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 10e2c8: ldr x8, [x8, #0x58] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(88))));
  /* 10e2cc: mov x0, x25 */
  ARC_X_W(c, 0, ARC_X_R(c, 25));
  /* 10e2d0: mov w1, #0x30 */
  ARC_W_W(c, 1, UINT64_C(48));
  /* 10e2d4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1106648));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 10e2d8: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 10e2dc: str w0, [x8], #4 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(4));
    arc_st32(_a, ARC_W_R(c, 0));
  }
  /* 10e2e0: str x8, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 8));
  /* 10e2e4: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 10e2e8: ldrb w1, [x28, #1] */
  ARC_W_W(c, 1, arc_ld8((ARC_X_R(c, 28) + INT64_C(1))));
  /* 10e2ec: ldr x8, [x8, #0x58] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(88))));
  /* 10e2f0: mov x0, x25 */
  ARC_X_W(c, 0, ARC_X_R(c, 25));
  /* 10e2f4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1106680));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 10e2f8: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 10e2fc: add x27, x28, #2 */
  ARC_X_W(c, 27, (ARC_X_R(c, 28) + UINT64_C(2)));
  /* 10e300: mov x28, x27 */
  ARC_X_W(c, 28, ARC_X_R(c, 27));
  /* 10e304: str w0, [x8], #4 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(4));
    arc_st32(_a, ARC_W_R(c, 0));
  }
  /* 10e308: str x8, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 8));
  /* 10e30c: cmp x28, x21 */
  (void)arc_sub64(c, ARC_X_R(c, 28), ARC_X_R(c, 21));
  /* 10e310: b.ne #0x10e324 */
  if (ARC_COND(c, 1)) goto L_10e324;
  /* 10e314: b #0x10e4b4 */
  goto L_10e4b4;
L_10e318:;
  /* 10e318: mov x27, x28 */
  ARC_X_W(c, 27, ARC_X_R(c, 28));
  /* 10e31c: cmp x28, x21 */
  (void)arc_sub64(c, ARC_X_R(c, 28), ARC_X_R(c, 21));
  /* 10e320: b.eq #0x10e4b4 */
  if (ARC_COND(c, 0)) goto L_10e4b4;
L_10e324:;
  /* 10e324: sub x8, x21, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 21) - UINT64_C(1)));
  /* 10e328: cmp x28, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 28), ARC_X_R(c, 8));
  /* 10e32c: b.hs #0x10e4b4 */
  if (ARC_COND(c, 2)) goto L_10e4b4;
  /* 10e330: sub x11, x21, #2 */
  ARC_X_W(c, 11, (ARC_X_R(c, 21) - UINT64_C(2)));
  /* 10e334: add x10, x28, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 28) + UINT64_C(1)));
  /* 10e338: mvn x12, x28 */
  ARC_X_W(c, 12, (~(uint64_t)(ARC_X_R(c, 28))));
  /* 10e33c: cmp x11, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 10));
  /* 10e340: csinc x9, x11, x28, hi */
  ARC_X_W(c, 9, (ARC_COND(c, 8) ? (ARC_X_R(c, 11)) : ((ARC_X_R(c, 28)) + 1)));
  /* 10e344: adds x9, x9, x12 */
  ARC_X_W(c, 9, arc_add64(c, ARC_X_R(c, 9), ARC_X_R(c, 12), 0));
  /* 10e348: cset w13, ne */
  ARC_W_W(c, 13, (ARC_COND(c, 1) ? 1 : 0));
  /* 10e34c: sub x9, x9, x13 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - ARC_X_R(c, 13)));
  /* 10e350: lsr x9, x9, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(1)) & 63)));
  /* 10e354: cinc x9, x9, ne */
  ARC_X_W(c, 9, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) + 1 : (ARC_X_R(c, 9))));
  /* 10e358: add x9, x9, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(1)));
  /* 10e35c: cmp x9, #8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(8));
  /* 10e360: b.hs #0x10e398 */
  if (ARC_COND(c, 2)) goto L_10e398;
  /* 10e364: mov x11, x28 */
  ARC_X_W(c, 11, ARC_X_R(c, 28));
  /* 10e368: b #0x10e494 */
  goto L_10e494;
L_10e36c:;
  /* 10e36c: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 10e370: ldr x8, [x8, #0x60] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(96))));
  /* 10e374: mov x0, x25 */
  ARC_X_W(c, 0, ARC_X_R(c, 25));
  /* 10e378: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 10e37c: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* 10e380: mov x3, x28 */
  ARC_X_W(c, 3, ARC_X_R(c, 28));
  /* 10e384: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1106824));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 10e388: sub x8, x21, x19 */
  ARC_X_W(c, 8, (ARC_X_R(c, 21) - ARC_X_R(c, 19)));
  /* 10e38c: add x8, x28, x8, lsl #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 28) + ((uint64_t)(ARC_X_R(c, 8)) << 2)));
  /* 10e390: str x8, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 8));
  /* 10e394: b #0x10e6f0 */
  goto L_10e6f0;
L_10e398:;
  /* 10e398: cmp x11, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 10));
  /* 10e39c: csinc x11, x11, x28, hi */
  ARC_X_W(c, 11, (ARC_COND(c, 8) ? (ARC_X_R(c, 11)) : ((ARC_X_R(c, 28)) + 1)));
  /* 10e3a0: adds x11, x11, x12 */
  ARC_X_W(c, 11, arc_add64(c, ARC_X_R(c, 11), ARC_X_R(c, 12), 0));
  /* 10e3a4: cset w12, ne */
  ARC_W_W(c, 12, (ARC_COND(c, 1) ? 1 : 0));
  /* 10e3a8: sub x11, x11, x12 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) - ARC_X_R(c, 12)));
  /* 10e3ac: lsr x11, x11, #1 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 11)) >> ((UINT64_C(1)) & 63)));
  /* 10e3b0: cinc x11, x11, ne */
  ARC_X_W(c, 11, (ARC_COND(c, 1) ? (ARC_X_R(c, 11)) + 1 : (ARC_X_R(c, 11))));
  /* 10e3b4: cmp x28, x21 */
  (void)arc_sub64(c, ARC_X_R(c, 28), ARC_X_R(c, 21));
  /* 10e3b8: b.hs #0x10e3d4 */
  if (ARC_COND(c, 2)) goto L_10e3d4;
  /* 10e3bc: mvn x12, x11 */
  ARC_X_W(c, 12, (~(uint64_t)(ARC_X_R(c, 11))));
  /* 10e3c0: add x10, x10, x11 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + ARC_X_R(c, 11)));
  /* 10e3c4: add x11, x21, x12 */
  ARC_X_W(c, 11, (ARC_X_R(c, 21) + ARC_X_R(c, 12)));
  /* 10e3c8: cmp x11, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 10));
  /* 10e3cc: mov x11, x28 */
  ARC_X_W(c, 11, ARC_X_R(c, 28));
  /* 10e3d0: b.lo #0x10e494 */
  if (ARC_COND(c, 3)) goto L_10e494;
L_10e3d4:;
  /* 10e3d4: cmp x9, #0x20 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(32));
  /* 10e3d8: b.hs #0x10e3e4 */
  if (ARC_COND(c, 2)) goto L_10e3e4;
  /* 10e3dc: mov x10, xzr */
  ARC_X_W(c, 10, ARC_X_R(c, 31));
  /* 10e3e0: b #0x10e444 */
  goto L_10e444;
L_10e3e4:;
  /* 10e3e4: and x10, x9, #0xffffffffffffffe0 */
  ARC_X_W(c, 10, (ARC_X_R(c, 9) & UINT64_C(18446744073709551584)));
  /* 10e3e8: add x11, x28, #0x10 */
  ARC_X_W(c, 11, (ARC_X_R(c, 28) + UINT64_C(16)));
  /* 10e3ec: sub x12, x21, #0x10 */
  ARC_X_W(c, 12, (ARC_X_R(c, 21) - UINT64_C(16)));
  /* 10e3f0: mov x13, x10 */
  ARC_X_W(c, 13, ARC_X_R(c, 10));
L_10e3f4:;
  /* 10e3f4: ldp q1, q0, [x12, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 12) + INT64_C(-16));
    arc_q_w(c, 1, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 0, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* 10e3f8: sub x13, x13, #0x20 */
  ARC_X_W(c, 13, (ARC_X_R(c, 13) - UINT64_C(32)));
  /* 10e3fc: ldp q2, q3, [x11, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 11) + INT64_C(-16));
    arc_q_w(c, 2, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 3, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* 10e400: rev64 v0.16b, v0.16b */
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
  /* 10e404: rev64 v1.16b, v1.16b */
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
  /* 10e408: rev64 v2.16b, v2.16b */
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
  /* 10e40c: rev64 v3.16b, v3.16b */
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
  /* 10e410: ext v0.16b, v0.16b, v0.16b, #8 */
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
  /* 10e414: ext v1.16b, v1.16b, v1.16b, #8 */
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
  /* 10e418: ext v2.16b, v2.16b, v2.16b, #8 */
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
  /* 10e41c: ext v3.16b, v3.16b, v3.16b, #8 */
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
  /* 10e420: stp q0, q1, [x11, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 11) + INT64_C(-16));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[1].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[1].u64[1]);
  }
  /* 10e424: add x11, x11, #0x20 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) + UINT64_C(32)));
  /* 10e428: stp q3, q2, [x12, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 12) + INT64_C(-16));
    arc_st64(_pa, (c)->q[3].u64[0]);
    arc_st64(_pa + 8, (c)->q[3].u64[1]);
    arc_st64((_pa + 16), (c)->q[2].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[2].u64[1]);
  }
  /* 10e42c: sub x12, x12, #0x20 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) - UINT64_C(32)));
  /* 10e430: cbnz x13, #0x10e3f4 */
  if ((ARC_X_R(c, 13)) != 0) goto L_10e3f4;
  /* 10e434: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* 10e438: b.eq #0x10e4b4 */
  if (ARC_COND(c, 0)) goto L_10e4b4;
  /* 10e43c: tst x9, #0x18 */
  arc_flags_logical64(c, (uint64_t)(ARC_X_R(c, 9) & UINT64_C(24)));
  /* 10e440: b.eq #0x10e48c */
  if (ARC_COND(c, 0)) goto L_10e48c;
L_10e444:;
  /* 10e444: and x12, x9, #0xfffffffffffffff8 */
  ARC_X_W(c, 12, (ARC_X_R(c, 9) & UINT64_C(18446744073709551608)));
  /* 10e448: sub x14, x21, x10 */
  ARC_X_W(c, 14, (ARC_X_R(c, 21) - ARC_X_R(c, 10)));
  /* 10e44c: add x13, x28, x10 */
  ARC_X_W(c, 13, (ARC_X_R(c, 28) + ARC_X_R(c, 10)));
  /* 10e450: sub x8, x8, x12 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) - ARC_X_R(c, 12)));
  /* 10e454: add x11, x28, x12 */
  ARC_X_W(c, 11, (ARC_X_R(c, 28) + ARC_X_R(c, 12)));
  /* 10e458: sub x10, x10, x12 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) - ARC_X_R(c, 12)));
  /* 10e45c: sub x14, x14, #8 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) - UINT64_C(8)));
L_10e460:;
  /* 10e460: ldr d0, [x14] */
  arc_du_w(c, 0, arc_ld64(ARC_X_R(c, 14)));
  /* 10e464: ldr d1, [x13] */
  arc_du_w(c, 1, arc_ld64(ARC_X_R(c, 13)));
  /* 10e468: adds x10, x10, #8 */
  ARC_X_W(c, 10, arc_add64(c, ARC_X_R(c, 10), UINT64_C(8), 0));
  /* 10e46c: rev64 v0.8b, v0.8b */
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
  /* 10e470: rev64 v1.8b, v1.8b */
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
  /* 10e474: str d0, [x13], #8 */
  arc_st64(ARC_X_R(c, 13), (c)->q[0].u64[0]);
  ARC_X_W(c, 13, ARC_X_R(c, 13) + INT64_C(8));
  /* 10e478: str d1, [x14], #0xfffffffffffffff8 */
  arc_st64(ARC_X_R(c, 14), (c)->q[1].u64[0]);
  ARC_X_W(c, 14, ARC_X_R(c, 14) + INT64_C(-8));
  /* 10e47c: b.ne #0x10e460 */
  if (ARC_COND(c, 1)) goto L_10e460;
  /* 10e480: cmp x9, x12 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 12));
  /* 10e484: b.ne #0x10e494 */
  if (ARC_COND(c, 1)) goto L_10e494;
  /* 10e488: b #0x10e4b4 */
  goto L_10e4b4;
L_10e48c:;
  /* 10e48c: sub x8, x8, x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) - ARC_X_R(c, 10)));
  /* 10e490: add x11, x28, x10 */
  ARC_X_W(c, 11, (ARC_X_R(c, 28) + ARC_X_R(c, 10)));
L_10e494:;
  /* 10e494: add x9, x11, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 11) + UINT64_C(1)));
L_10e498:;
  /* 10e498: ldrb w10, [x8] */
  ARC_W_W(c, 10, arc_ld8(ARC_X_R(c, 8)));
  /* 10e49c: ldurb w11, [x9, #-1] */
  ARC_W_W(c, 11, arc_ld8((ARC_X_R(c, 9) + INT64_C(-1))));
  /* 10e4a0: sturb w10, [x9, #-1] */
  arc_st8((ARC_X_R(c, 9) + INT64_C(-1)), ARC_W_R(c, 10));
  /* 10e4a4: strb w11, [x8], #0xffffffffffffffff */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(-1));
    arc_st8(_a, ARC_W_R(c, 11));
  }
  /* 10e4a8: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* 10e4ac: add x9, x9, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(1)));
  /* 10e4b0: b.lo #0x10e498 */
  if (ARC_COND(c, 3)) goto L_10e498;
L_10e4b4:;
  /* 10e4b4: ldr x8, [x26] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 26)));
  /* 10e4b8: ldr x8, [x8, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* 10e4bc: mov x0, x26 */
  ARC_X_W(c, 0, ARC_X_R(c, 26));
  /* 10e4c0: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1107140));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 10e4c4: cmp x28, x21 */
  (void)arc_sub64(c, ARC_X_R(c, 28), ARC_X_R(c, 21));
  /* 10e4c8: b.hs #0x10e590 */
  if (ARC_COND(c, 2)) goto L_10e590;
  /* 10e4cc: sub x8, x29, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 10e4d0: mov w26, w0 */
  ARC_W_W(c, 26, ARC_W_R(c, 0));
  /* 10e4d4: stp x24, x23, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 10e4d8: mov w19, wzr */
  ARC_W_W(c, 19, ARC_W_R(c, 31));
  /* 10e4dc: mov w22, wzr */
  ARC_W_W(c, 22, ARC_W_R(c, 31));
  /* 10e4e0: orr x23, x8, #1 */
  ARC_X_W(c, 23, (ARC_X_R(c, 8) | UINT64_C(1)));
  /* 10e4e4: sub x24, x21, x27 */
  ARC_X_W(c, 24, (ARC_X_R(c, 21) - ARC_X_R(c, 27)));
L_10e4e8:;
  /* 10e4e8: ldurb w8, [x29, #-0x18] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-24))));
  /* 10e4ec: ldur x9, [x29, #-8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 29) + INT64_C(-8))));
  /* 10e4f0: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 10e4f4: mov w8, w19 */
  ARC_W_W(c, 8, ARC_W_R(c, 19));
  /* 10e4f8: csel x10, x23, x9, eq */
  ARC_X_W(c, 10, (ARC_COND(c, 0) ? (ARC_X_R(c, 23)) : ARC_X_R(c, 9)));
  /* 10e4fc: ldrb w10, [x10, x8] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 10) + ARC_X_R(c, 8))));
  /* 10e500: cbz w10, #0x10e54c */
  if ((ARC_W_R(c, 10)) == 0) goto L_10e54c;
  /* 10e504: ldurb w10, [x29, #-0x18] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 29) + INT64_C(-24))));
  /* 10e508: tst w10, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 10) & UINT64_C(1)));
  /* 10e50c: csel x9, x23, x9, eq */
  ARC_X_W(c, 9, (ARC_COND(c, 0) ? (ARC_X_R(c, 23)) : ARC_X_R(c, 9)));
  /* 10e510: ldrb w9, [x9, x8] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 9) + ARC_X_R(c, 8))));
  /* 10e514: cmp w22, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 22), ARC_W_R(c, 9));
  /* 10e518: b.ne #0x10e54c */
  if (ARC_COND(c, 1)) goto L_10e54c;
  /* 10e51c: ldr x9, [x20] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 20)));
  /* 10e520: mov w22, wzr */
  ARC_W_W(c, 22, ARC_W_R(c, 31));
  /* 10e524: str w26, [x9], #4 */
  { const uint64_t _a = ARC_X_R(c, 9);
    ARC_X_W(c, 9, ARC_X_R(c, 9) + INT64_C(4));
    arc_st32(_a, ARC_W_R(c, 26));
  }
  /* 10e528: ldurb w10, [x29, #-0x18] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 29) + INT64_C(-24))));
  /* 10e52c: ldur x11, [x29, #-0x10] */
  ARC_X_W(c, 11, arc_ld64((ARC_X_R(c, 29) + INT64_C(-16))));
  /* 10e530: str x9, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 9));
  /* 10e534: lsr x12, x10, #1 */
  ARC_X_W(c, 12, ((uint64_t)(ARC_X_R(c, 10)) >> ((UINT64_C(1)) & 63)));
  /* 10e538: tst w10, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 10) & UINT64_C(1)));
  /* 10e53c: csel x10, x12, x11, eq */
  ARC_X_W(c, 10, (ARC_COND(c, 0) ? (ARC_X_R(c, 12)) : ARC_X_R(c, 11)));
  /* 10e540: sub x10, x10, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) - UINT64_C(1)));
  /* 10e544: cmp x10, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 8));
  /* 10e548: cinc w19, w19, hi */
  ARC_W_W(c, 19, (ARC_COND(c, 8) ? (ARC_W_R(c, 19)) + 1 : (ARC_W_R(c, 19))));
L_10e54c:;
  /* 10e54c: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 10e550: ldrb w1, [x28] */
  ARC_W_W(c, 1, arc_ld8(ARC_X_R(c, 28)));
  /* 10e554: ldr x8, [x8, #0x58] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(88))));
  /* 10e558: mov x0, x25 */
  ARC_X_W(c, 0, ARC_X_R(c, 25));
  /* 10e55c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1107296));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 10e560: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 10e564: subs x24, x24, #1 */
  ARC_X_W(c, 24, arc_sub64(c, ARC_X_R(c, 24), UINT64_C(1)));
  /* 10e568: add w22, w22, #1 */
  ARC_W_W(c, 22, (ARC_W_R(c, 22) + UINT64_C(1)));
  /* 10e56c: add x28, x28, #1 */
  ARC_X_W(c, 28, (ARC_X_R(c, 28) + UINT64_C(1)));
  /* 10e570: mov x9, x8 */
  ARC_X_W(c, 9, ARC_X_R(c, 8));
  /* 10e574: str w0, [x9], #4 */
  { const uint64_t _a = ARC_X_R(c, 9);
    ARC_X_W(c, 9, ARC_X_R(c, 9) + INT64_C(4));
    arc_st32(_a, ARC_W_R(c, 0));
  }
  /* 10e578: str x9, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 9));
  /* 10e57c: b.ne #0x10e4e8 */
  if (ARC_COND(c, 1)) goto L_10e4e8;
  /* 10e580: ldp x24, x23, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 10e584: add x10, x8, #4 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(4)));
  /* 10e588: ldr x19, [sp, #0x20] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(32))));
  /* 10e58c: b #0x10e594 */
  goto L_10e594;
L_10e590:;
  /* 10e590: ldr x10, [x20] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 20)));
L_10e594:;
  /* 10e594: ldr x28, [sp, #0x18] */
  ARC_X_W(c, 28, arc_ld64(((c)->sp + INT64_C(24))));
  /* 10e598: sub x8, x27, x19 */
  ARC_X_W(c, 8, (ARC_X_R(c, 27) - ARC_X_R(c, 19)));
  /* 10e59c: add x9, x28, x8, lsl #2 */
  ARC_X_W(c, 9, (ARC_X_R(c, 28) + ((uint64_t)(ARC_X_R(c, 8)) << 2)));
  /* 10e5a0: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* 10e5a4: b.eq #0x10e6f0 */
  if (ARC_COND(c, 0)) goto L_10e6f0;
  /* 10e5a8: sub x8, x10, #4 */
  ARC_X_W(c, 8, (ARC_X_R(c, 10) - UINT64_C(4)));
  /* 10e5ac: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* 10e5b0: b.hs #0x10e6f0 */
  if (ARC_COND(c, 2)) goto L_10e6f0;
  /* 10e5b4: lsl x11, x27, #2 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 27)) << ((UINT64_C(2)) & 63)));
  /* 10e5b8: lsl x12, x19, #2 */
  ARC_X_W(c, 12, ((uint64_t)(ARC_X_R(c, 19)) << ((UINT64_C(2)) & 63)));
  /* 10e5bc: sub x15, x10, #8 */
  ARC_X_W(c, 15, (ARC_X_R(c, 10) - UINT64_C(8)));
  /* 10e5c0: add x13, x11, x28 */
  ARC_X_W(c, 13, (ARC_X_R(c, 11) + ARC_X_R(c, 28)));
  /* 10e5c4: sub x13, x13, x12 */
  ARC_X_W(c, 13, (ARC_X_R(c, 13) - ARC_X_R(c, 12)));
  /* 10e5c8: add x14, x13, #4 */
  ARC_X_W(c, 14, (ARC_X_R(c, 13) + UINT64_C(4)));
  /* 10e5cc: cmp x14, x15 */
  (void)arc_sub64(c, ARC_X_R(c, 14), ARC_X_R(c, 15));
  /* 10e5d0: csel x13, x14, x15, hi */
  ARC_X_W(c, 13, (ARC_COND(c, 8) ? (ARC_X_R(c, 14)) : ARC_X_R(c, 15)));
  /* 10e5d4: add x13, x13, x12 */
  ARC_X_W(c, 13, (ARC_X_R(c, 13) + ARC_X_R(c, 12)));
  /* 10e5d8: sub x13, x13, x28 */
  ARC_X_W(c, 13, (ARC_X_R(c, 13) - ARC_X_R(c, 28)));
  /* 10e5dc: sub x13, x13, #4 */
  ARC_X_W(c, 13, (ARC_X_R(c, 13) - UINT64_C(4)));
  /* 10e5e0: cmp x13, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 13), ARC_X_R(c, 11));
  /* 10e5e4: cset w16, ne */
  ARC_W_W(c, 16, (ARC_COND(c, 1) ? 1 : 0));
  /* 10e5e8: cmp x13, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 13), ARC_X_R(c, 11));
  /* 10e5ec: bfi x16, x27, #2, #0x3e */
  ARC_X_W(c, 16, (((uint64_t)(ARC_X_R(c, 16)) & UINT64_C(3)) | ((((uint64_t)(ARC_X_R(c, 27))) & UINT64_C(4611686018427387903)) << 2)));
  /* 10e5f0: sub x16, x13, x16 */
  ARC_X_W(c, 16, (ARC_X_R(c, 13) - ARC_X_R(c, 16)));
  /* 10e5f4: lsr x16, x16, #3 */
  ARC_X_W(c, 16, ((uint64_t)(ARC_X_R(c, 16)) >> ((UINT64_C(3)) & 63)));
  /* 10e5f8: cinc x13, x16, ne */
  ARC_X_W(c, 13, (ARC_COND(c, 1) ? (ARC_X_R(c, 16)) + 1 : (ARC_X_R(c, 16))));
  /* 10e5fc: cmp x13, #0x1f */
  (void)arc_sub64(c, ARC_X_R(c, 13), UINT64_C(31));
  /* 10e600: b.lo #0x10e6d0 */
  if (ARC_COND(c, 3)) goto L_10e6d0;
  /* 10e604: cmp x14, x15 */
  (void)arc_sub64(c, ARC_X_R(c, 14), ARC_X_R(c, 15));
  /* 10e608: csel x14, x14, x15, hi */
  ARC_X_W(c, 14, (ARC_COND(c, 8) ? (ARC_X_R(c, 14)) : ARC_X_R(c, 15)));
  /* 10e60c: add x14, x14, x12 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) + ARC_X_R(c, 12)));
  /* 10e610: sub x14, x14, x28 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) - ARC_X_R(c, 28)));
  /* 10e614: sub x14, x14, #4 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) - UINT64_C(4)));
  /* 10e618: cmp x14, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 14), ARC_X_R(c, 11));
  /* 10e61c: cset w15, ne */
  ARC_W_W(c, 15, (ARC_COND(c, 1) ? 1 : 0));
  /* 10e620: cmp x14, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 14), ARC_X_R(c, 11));
  /* 10e624: bfi x15, x27, #2, #0x3e */
  ARC_X_W(c, 15, (((uint64_t)(ARC_X_R(c, 15)) & UINT64_C(3)) | ((((uint64_t)(ARC_X_R(c, 27))) & UINT64_C(4611686018427387903)) << 2)));
  /* 10e628: sub x15, x14, x15 */
  ARC_X_W(c, 15, (ARC_X_R(c, 14) - ARC_X_R(c, 15)));
  /* 10e62c: lsr x15, x15, #3 */
  ARC_X_W(c, 15, ((uint64_t)(ARC_X_R(c, 15)) >> ((UINT64_C(3)) & 63)));
  /* 10e630: cinc x14, x15, ne */
  ARC_X_W(c, 14, (ARC_COND(c, 1) ? (ARC_X_R(c, 15)) + 1 : (ARC_X_R(c, 15))));
  /* 10e634: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* 10e638: b.hs #0x10e660 */
  if (ARC_COND(c, 2)) goto L_10e660;
  /* 10e63c: lsl x14, x14, #2 */
  ARC_X_W(c, 14, ((uint64_t)(ARC_X_R(c, 14)) << ((UINT64_C(2)) & 63)));
  /* 10e640: add x15, x11, x14 */
  ARC_X_W(c, 15, (ARC_X_R(c, 11) + ARC_X_R(c, 14)));
  /* 10e644: sub x14, x10, x14 */
  ARC_X_W(c, 14, (ARC_X_R(c, 10) - ARC_X_R(c, 14)));
  /* 10e648: sub x15, x15, x12 */
  ARC_X_W(c, 15, (ARC_X_R(c, 15) - ARC_X_R(c, 12)));
  /* 10e64c: sub x14, x14, #4 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) - UINT64_C(4)));
  /* 10e650: add x15, x15, x28 */
  ARC_X_W(c, 15, (ARC_X_R(c, 15) + ARC_X_R(c, 28)));
  /* 10e654: add x15, x15, #4 */
  ARC_X_W(c, 15, (ARC_X_R(c, 15) + UINT64_C(4)));
  /* 10e658: cmp x14, x15 */
  (void)arc_sub64(c, ARC_X_R(c, 14), ARC_X_R(c, 15));
  /* 10e65c: b.lo #0x10e6d0 */
  if (ARC_COND(c, 3)) goto L_10e6d0;
L_10e660:;
  /* 10e660: add x13, x13, #1 */
  ARC_X_W(c, 13, (ARC_X_R(c, 13) + UINT64_C(1)));
  /* 10e664: sub x11, x11, x12 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) - ARC_X_R(c, 12)));
  /* 10e668: sub x10, x10, #0x10 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) - UINT64_C(16)));
  /* 10e66c: and x14, x13, #0x7ffffffffffffff8 */
  ARC_X_W(c, 14, (ARC_X_R(c, 13) & UINT64_C(9223372036854775800)));
  /* 10e670: add x11, x11, x28 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) + ARC_X_R(c, 28)));
  /* 10e674: lsl x15, x14, #2 */
  ARC_X_W(c, 15, ((uint64_t)(ARC_X_R(c, 14)) << ((UINT64_C(2)) & 63)));
  /* 10e678: add x11, x11, #0x10 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) + UINT64_C(16)));
  /* 10e67c: mov x12, x14 */
  ARC_X_W(c, 12, ARC_X_R(c, 14));
  /* 10e680: sub x8, x8, x15 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) - ARC_X_R(c, 15)));
  /* 10e684: add x9, x9, x15 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + ARC_X_R(c, 15)));
L_10e688:;
  /* 10e688: ldp q1, q0, [x10, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 10) + INT64_C(-16));
    arc_q_w(c, 1, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 0, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* 10e68c: sub x12, x12, #8 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) - UINT64_C(8)));
  /* 10e690: ldp q2, q3, [x11, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 11) + INT64_C(-16));
    arc_q_w(c, 2, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 3, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* 10e694: rev64 v0.4s, v0.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[0].u32[1];
    _t.u32[1] = (c)->q[0].u32[0];
    _t.u32[2] = (c)->q[0].u32[3];
    _t.u32[3] = (c)->q[0].u32[2];
    (c)->q[0] = _t; }
  /* 10e698: rev64 v1.4s, v1.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[1].u32[1];
    _t.u32[1] = (c)->q[1].u32[0];
    _t.u32[2] = (c)->q[1].u32[3];
    _t.u32[3] = (c)->q[1].u32[2];
    (c)->q[1] = _t; }
  /* 10e69c: rev64 v2.4s, v2.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[2].u32[1];
    _t.u32[1] = (c)->q[2].u32[0];
    _t.u32[2] = (c)->q[2].u32[3];
    _t.u32[3] = (c)->q[2].u32[2];
    (c)->q[2] = _t; }
  /* 10e6a0: rev64 v3.4s, v3.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[3].u32[1];
    _t.u32[1] = (c)->q[3].u32[0];
    _t.u32[2] = (c)->q[3].u32[3];
    _t.u32[3] = (c)->q[3].u32[2];
    (c)->q[3] = _t; }
  /* 10e6a4: ext v0.16b, v0.16b, v0.16b, #8 */
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
  /* 10e6a8: ext v1.16b, v1.16b, v1.16b, #8 */
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
  /* 10e6ac: ext v2.16b, v2.16b, v2.16b, #8 */
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
  /* 10e6b0: ext v3.16b, v3.16b, v3.16b, #8 */
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
  /* 10e6b4: stp q0, q1, [x11, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 11) + INT64_C(-16));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[1].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[1].u64[1]);
  }
  /* 10e6b8: add x11, x11, #0x20 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) + UINT64_C(32)));
  /* 10e6bc: stp q3, q2, [x10, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 10) + INT64_C(-16));
    arc_st64(_pa, (c)->q[3].u64[0]);
    arc_st64(_pa + 8, (c)->q[3].u64[1]);
    arc_st64((_pa + 16), (c)->q[2].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[2].u64[1]);
  }
  /* 10e6c0: sub x10, x10, #0x20 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) - UINT64_C(32)));
  /* 10e6c4: cbnz x12, #0x10e688 */
  if ((ARC_X_R(c, 12)) != 0) goto L_10e688;
  /* 10e6c8: cmp x13, x14 */
  (void)arc_sub64(c, ARC_X_R(c, 13), ARC_X_R(c, 14));
  /* 10e6cc: b.eq #0x10e6f0 */
  if (ARC_COND(c, 0)) goto L_10e6f0;
L_10e6d0:;
  /* 10e6d0: add x9, x9, #4 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(4)));
L_10e6d4:;
  /* 10e6d4: ldr w10, [x8] */
  ARC_W_W(c, 10, arc_ld32(ARC_X_R(c, 8)));
  /* 10e6d8: ldur w11, [x9, #-4] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 9) + INT64_C(-4))));
  /* 10e6dc: stur w10, [x9, #-4] */
  arc_st32((ARC_X_R(c, 9) + INT64_C(-4)), ARC_W_R(c, 10));
  /* 10e6e0: str w11, [x8], #0xfffffffffffffffc */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(-4));
    arc_st32(_a, ARC_W_R(c, 11));
  }
  /* 10e6e4: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* 10e6e8: add x9, x9, #4 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(4)));
  /* 10e6ec: b.lo #0x10e6d4 */
  if (ARC_COND(c, 3)) goto L_10e6d4;
L_10e6f0:;
  /* 10e6f0: sub x8, x24, x19 */
  ARC_X_W(c, 8, (ARC_X_R(c, 24) - ARC_X_R(c, 19)));
  /* 10e6f4: ldr x9, [x20] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 20)));
  /* 10e6f8: cmp x24, x21 */
  (void)arc_sub64(c, ARC_X_R(c, 24), ARC_X_R(c, 21));
  /* 10e6fc: add x8, x28, x8, lsl #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 28) + ((uint64_t)(ARC_X_R(c, 8)) << 2)));
  /* 10e700: ldurb w10, [x29, #-0x18] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 29) + INT64_C(-24))));
  /* 10e704: csel x8, x9, x8, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* 10e708: str x8, [x23] */
  arc_st64(ARC_X_R(c, 23), ARC_X_R(c, 8));
  /* 10e70c: tbz w10, #0, #0x10e720 */
  if (((ARC_W_R(c, 10)) >> 0 & 1) == 0) goto L_10e720;
  /* 10e710: ldur x8, [x29, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(-24))));
  /* 10e714: ldur x0, [x29, #-8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-8))));
  /* 10e718: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 10e71c: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1107744));
  fn1_142608(c);
L_10e720:;
  /* 10e720: ldp x20, x19, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 10e724: ldp x22, x21, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 10e728: ldp x24, x23, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 10e72c: ldp x26, x25, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* 10e730: ldp x28, x27, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* 10e734: ldp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 10e738: add sp, sp, #0xa0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(160)));
  /* 10e73c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 10e740: ret  */
  return;
L_10e744:;
  /* 10e744: bl #0xfc3b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1107784));
  fn1_fc3b8(c);
  /* 10e748: b #0x10e76c */
  goto L_10e76c;
  /* 10e74c: b #0x10e76c */
  goto L_10e76c;
  /* 10e750: b #0x10e76c */
  goto L_10e76c;
  /* 10e754: b #0x10e758 */
  goto L_10e758;
L_10e758:;
  /* 10e758: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 10e75c: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 10e760: bl #0xd2a78 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1107812));
  fn1_d2a78(c);
  /* 10e764: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 10e768: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1107820));
  fn1_9cc20(c);
L_10e76c:;
  /* 10e76c: ldurb w8, [x29, #-0x18] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-24))));
  /* 10e770: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 10e774: tbz w8, #0, #0x10e788 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_10e788;
  /* 10e778: ldur x8, [x29, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(-24))));
  /* 10e77c: ldur x0, [x29, #-8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-8))));
  /* 10e780: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 10e784: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1107848));
  fn1_142608(c);
L_10e788:;
  /* 10e788: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 10e78c: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1107856));
  fn1_9cc20(c);
}

void fn1_113c20(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039057440));
  /* 113c20: bti c */
  /* bti: no architectural effect here */
  /* 113c24: mov w0, #0x302 */
  ARC_W_W(c, 0, UINT64_C(770));
  /* 113c28: movk w0, #0x400, lsl #16 */
  ARC_W_W(c, 0, ((ARC_W_R(c, 0) & UINT64_C(18446744069414649855)) | UINT64_C(67108864)));
  /* 113c2c: ret  */
  return;
}

void fn1_1141c8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039058888));
  /* 1141c8: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 1141cc: sub sp, sp, #0x190 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(400)));
  /* 1141d0: stp x29, x30, [sp, #0x130] */
  { const uint64_t _pa = ((c)->sp + INT64_C(304));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1141d4: stp x28, x27, [sp, #0x140] */
  { const uint64_t _pa = ((c)->sp + INT64_C(320));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* 1141d8: stp x26, x25, [sp, #0x150] */
  { const uint64_t _pa = ((c)->sp + INT64_C(336));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* 1141dc: stp x24, x23, [sp, #0x160] */
  { const uint64_t _pa = ((c)->sp + INT64_C(352));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 1141e0: stp x22, x21, [sp, #0x170] */
  { const uint64_t _pa = ((c)->sp + INT64_C(368));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1141e4: stp x20, x19, [sp, #0x180] */
  { const uint64_t _pa = ((c)->sp + INT64_C(384));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1141e8: add x29, sp, #0x130 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(304)));
  /* 1141ec: stur x1, [x29, #-0x10] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-16)), ARC_X_R(c, 1));
  /* 1141f0: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 1141f4: sub x26, x29, #0x74 */
  ARC_X_W(c, 26, (ARC_X_R(c, 29) - UINT64_C(116)));
  /* 1141f8: ldr x8, [x8, #0xbc8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3016))));
  /* 1141fc: add x0, sp, #0x98 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(152)));
  /* 114200: add x1, x4, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 4) + UINT64_C(48)));
  /* 114204: mov x21, x6 */
  ARC_X_W(c, 21, ARC_X_R(c, 6));
  /* 114208: mov x19, x5 */
  ARC_X_W(c, 19, ARC_X_R(c, 5));
  /* 11420c: mov x23, x4 */
  ARC_X_W(c, 23, ARC_X_R(c, 4));
  /* 114210: mov w22, w3 */
  ARC_W_W(c, 22, ARC_W_R(c, 3));
  /* 114214: mov x20, x2 */
  ARC_X_W(c, 20, ARC_X_R(c, 2));
  /* 114218: stp x26, x8, [x29, #-0x88] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-136));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* 11421c: bl #0x143460 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1131040));
  fn1_143460(c);
  /* 114220: adrp x28, #0x151000 */
  ARC_X_W(c, 28, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 114224: ldr x28, [x28, #0xb40] */
  ARC_X_W(c, 28, arc_ld64((ARC_X_R(c, 28) + INT64_C(2880))));
  /* 114228: ldr x27, [sp, #0x98] */
  ARC_X_W(c, 27, arc_ld64(((c)->sp + INT64_C(152))));
  /* 11422c: ldar x8, [x28] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 28)));
  /* 114230: cmn x8, #1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0);
  /* 114234: b.eq #0x1142f0 */
  if (ARC_COND(c, 0)) goto L_1142f0;
  /* 114238: nop  */
  /* nop: no architectural effect here */
  /* 11423c: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 114240: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1131076));
  fn1_142518(c);
  /* 114244: ldr x8, [x28] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 28)));
  /* 114248: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 11424c: b.ne #0x114278 */
  if (ARC_COND(c, 1)) goto L_114278;
  /* 114250: nop  */
  /* nop: no architectural effect here */
  /* 114254: adr x24, #0x15791c */
  ARC_X_W(c, 24, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 114258: nop  */
  /* nop: no architectural effect here */
  /* 11425c: adr x25, #0x1578f4 */
  ARC_X_W(c, 25, (arc_image_bases[1] + UINT64_C(1407220)));
L_114260:;
  /* 114260: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 114264: mov x1, x25 */
  ARC_X_W(c, 1, ARC_X_R(c, 25));
  /* 114268: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1131116));
  fn1_142530(c);
  /* 11426c: ldr x8, [x28] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 28)));
  /* 114270: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 114274: b.eq #0x114260 */
  if (ARC_COND(c, 0)) goto L_114260;
L_114278:;
  /* 114278: ldr x8, [x28] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 28)));
  /* 11427c: cbz x8, #0x114290 */
  if ((ARC_X_R(c, 8)) == 0) goto L_114290;
  /* 114280: nop  */
  /* nop: no architectural effect here */
  /* 114284: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 114288: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1131148));
  fn1_142560(c);
  /* 11428c: b #0x1142f0 */
  goto L_1142f0;
L_114290:;
  /* 114290: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 114294: str x28, [sp, #0x18] */
  arc_st64(((c)->sp + INT64_C(24)), ARC_X_R(c, 28));
  /* 114298: strb wzr, [sp, #0x20] */
  arc_st8(((c)->sp + INT64_C(32)), ARC_W_R(c, 31));
  /* 11429c: str x8, [x28] */
  arc_st64(ARC_X_R(c, 28), ARC_X_R(c, 8));
  /* 1142a0: nop  */
  /* nop: no architectural effect here */
  /* 1142a4: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 1142a8: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1131180));
  fn1_142560(c);
  /* 1142ac: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 1142b0: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 1142b4: ldr x1, [x1, #0xc58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3160))));
  /* 1142b8: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1131196));
  fn1_a2030(c);
  /* 1142bc: add w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + UINT64_C(1)));
  /* 1142c0: str w8, [x28, #8] */
  arc_st32((ARC_X_R(c, 28) + INT64_C(8)), ARC_W_R(c, 8));
  /* 1142c4: nop  */
  /* nop: no architectural effect here */
  /* 1142c8: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 1142cc: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1131216));
  fn1_142518(c);
  /* 1142d0: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 1142d4: stlr x8, [x28] */
  arc_st64(ARC_X_R(c, 28), ARC_X_R(c, 8));
  /* 1142d8: nop  */
  /* nop: no architectural effect here */
  /* 1142dc: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 1142e0: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1131236));
  fn1_142560(c);
  /* 1142e4: nop  */
  /* nop: no architectural effect here */
  /* 1142e8: adr x0, #0x15791c */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 1142ec: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1131248));
  fn1_142578(c);
L_1142f0:;
  /* 1142f0: ldp x8, x10, [x27, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 27) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* 1142f4: ldrsw x9, [x28, #8] */
  ARC_X_W(c, 9, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 28) + INT64_C(8)))));
  /* 1142f8: sub x9, x9, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - UINT64_C(1)));
  /* 1142fc: sub x10, x10, x8 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) - ARC_X_R(c, 8)));
  /* 114300: cmp x9, x10, asr #3 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ((uint64_t)((int64_t)(ARC_X_R(c, 10)) >> 3)));
  /* 114304: b.hs #0x11452c */
  if (ARC_COND(c, 2)) goto L_11452c;
  /* 114308: ldr x24, [x8, x9, lsl #3] */
  ARC_X_W(c, 24, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3))));
  /* 11430c: cbz x24, #0x11452c */
  if ((ARC_X_R(c, 24)) == 0) goto L_11452c;
  /* 114310: ldr w4, [x23, #8] */
  ARC_W_W(c, 4, arc_ld32((ARC_X_R(c, 23) + INT64_C(8))));
  /* 114314: add x10, x26, #0x64 */
  ARC_X_W(c, 10, (ARC_X_R(c, 26) + UINT64_C(100)));
  /* 114318: strb wzr, [sp, #0x94] */
  arc_st8(((c)->sp + INT64_C(148)), ARC_W_R(c, 31));
  /* 11431c: sub x8, x29, #0x90 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(144)));
  /* 114320: sub x9, x29, #0x88 */
  ARC_X_W(c, 9, (ARC_X_R(c, 29) - UINT64_C(136)));
  /* 114324: sub x0, x29, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* 114328: and w2, w22, #1 */
  ARC_W_W(c, 2, (ARC_W_R(c, 22) & UINT64_C(1)));
  /* 11432c: add x3, sp, #0x98 */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(152)));
  /* 114330: add x6, sp, #0x94 */
  ARC_X_W(c, 6, ((c)->sp + UINT64_C(148)));
  /* 114334: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 114338: mov x5, x19 */
  ARC_X_W(c, 5, ARC_X_R(c, 19));
  /* 11433c: mov x7, x24 */
  ARC_X_W(c, 7, ARC_X_R(c, 24));
  /* 114340: stp x8, x10, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 10));
  }
  /* 114344: str x9, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 9));
  /* 114348: bl #0x143a00 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1131340));
  fn1_143a00(c);
  /* 11434c: tbz w0, #0, #0x114440 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_114440;
  /* 114350: adrp x9, #0x4f000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(323584)));
  /* 114354: add x9, x9, #0x748 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(1864)));
  /* 114358: mov w8, #0x3837 */
  ARC_W_W(c, 8, UINT64_C(14391));
  /* 11435c: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* 114360: movk w8, #0x39, lsl #16 */
  ARC_W_W(c, 8, ((ARC_W_R(c, 8) & UINT64_C(18446744069414649855)) | UINT64_C(3735552)));
  /* 114364: stur w8, [sp, #0x8f] */
  arc_st32(((c)->sp + INT64_C(143)), ARC_W_R(c, 8));
  /* 114368: str x9, [sp, #0x88] */
  arc_st64(((c)->sp + INT64_C(136)), ARC_X_R(c, 9));
  /* 11436c: add x9, sp, #0x88 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(136)));
  /* 114370: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 114374: ldr x8, [x8, #0x40] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(64))));
  /* 114378: add x1, sp, #0x88 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(136)));
  /* 11437c: add x2, x9, #0xa */
  ARC_X_W(c, 2, (ARC_X_R(c, 9) + UINT64_C(10)));
  /* 114380: add x3, sp, #0x7e */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(126)));
  /* 114384: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 114388: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1131404));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 11438c: ldp x25, x23, [x29, #-0x90] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-144));
    ARC_X_W(c, 25, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 114390: sub x8, x25, x23 */
  ARC_X_W(c, 8, (ARC_X_R(c, 25) - ARC_X_R(c, 23)));
  /* 114394: cmp x8, #0x63 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(99));
  /* 114398: b.lt #0x1143b4 */
  if (ARC_COND(c, 11)) goto L_1143b4;
  /* 11439c: add x0, x8, #2 */
  ARC_X_W(c, 0, (ARC_X_R(c, 8) + UINT64_C(2)));
  /* 1143a0: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1131428));
  fn1_1428a8(c);
  /* 1143a4: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 1143a8: mov x24, x0 */
  ARC_X_W(c, 24, ARC_X_R(c, 0));
  /* 1143ac: cbnz x0, #0x1143bc */
  if ((ARC_X_R(c, 0)) != 0) goto L_1143bc;
  /* 1143b0: bl #0x142c08 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1131444));
  fn1_142c08(c);
L_1143b4:;
  /* 1143b4: mov x22, xzr */
  ARC_X_W(c, 22, ARC_X_R(c, 31));
  /* 1143b8: add x24, sp, #0x18 */
  ARC_X_W(c, 24, ((c)->sp + UINT64_C(24)));
L_1143bc:;
  /* 1143bc: ldrb w8, [sp, #0x94] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(148))));
  /* 1143c0: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* 1143c4: b.ne #0x1143d0 */
  if (ARC_COND(c, 1)) goto L_1143d0;
  /* 1143c8: mov w8, #0x2d */
  ARC_W_W(c, 8, UINT64_C(45));
  /* 1143cc: strb w8, [x24], #1 */
  { const uint64_t _a = ARC_X_R(c, 24);
    ARC_X_W(c, 24, ARC_X_R(c, 24) + INT64_C(1));
    arc_st8(_a, ARC_W_R(c, 8));
  }
L_1143d0:;
  /* 1143d0: cmp x23, x25 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 25));
  /* 1143d4: b.hs #0x114414 */
  if (ARC_COND(c, 2)) goto L_114414;
  /* 1143d8: add x25, sp, #0x7e */
  ARC_X_W(c, 25, ((c)->sp + UINT64_C(126)));
  /* 1143dc: add x27, sp, #0x88 */
  ARC_X_W(c, 27, ((c)->sp + UINT64_C(136)));
  /* 1143e0: add x26, x25, #0xa */
  ARC_X_W(c, 26, (ARC_X_R(c, 25) + UINT64_C(10)));
L_1143e4:;
  /* 1143e4: ldrb w1, [x23], #1 */
  { const uint64_t _a = ARC_X_R(c, 23);
    ARC_X_W(c, 23, ARC_X_R(c, 23) + INT64_C(1));
    ARC_W_W(c, 1, arc_ld8(_a));
  }
  /* 1143e8: add x0, sp, #0x7e */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(126)));
  /* 1143ec: mov w2, #0xa */
  ARC_W_W(c, 2, UINT64_C(10));
  /* 1143f0: bl #0x1428d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1131508));
  fn1_1428d8(c);
  /* 1143f4: cmp x0, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 0), UINT64_C(0));
  /* 1143f8: ldur x8, [x29, #-0x90] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(-144))));
  /* 1143fc: csel x9, x26, x0, eq */
  ARC_X_W(c, 9, (ARC_COND(c, 0) ? (ARC_X_R(c, 26)) : ARC_X_R(c, 0)));
  /* 114400: sub x9, x9, x25 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - ARC_X_R(c, 25)));
  /* 114404: cmp x23, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 8));
  /* 114408: ldrb w9, [x27, x9] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 27) + ARC_X_R(c, 9))));
  /* 11440c: strb w9, [x24], #1 */
  { const uint64_t _a = ARC_X_R(c, 24);
    ARC_X_W(c, 24, ARC_X_R(c, 24) + INT64_C(1));
    arc_st8(_a, ARC_W_R(c, 9));
  }
  /* 114410: b.lo #0x1143e4 */
  if (ARC_COND(c, 3)) goto L_1143e4;
L_114414:;
  /* 114414: adrp x1, #0x50000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(327680)));
  /* 114418: add x1, x1, #0xcab */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3243)));
  /* 11441c: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* 114420: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* 114424: strb wzr, [x24] */
  arc_st8(ARC_X_R(c, 24), ARC_W_R(c, 31));
  /* 114428: bl #0x1441c8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1131564));
  fn1_1441c8(c);
  /* 11442c: cmp w0, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(1));
  /* 114430: b.ne #0x114530 */
  if (ARC_COND(c, 1)) goto L_114530;
  /* 114434: cbz x22, #0x114440 */
  if ((ARC_X_R(c, 22)) == 0) goto L_114440;
  /* 114438: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 11443c: bl #0x142800 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1131584));
  fn1_142800(c);
L_114440:;
  /* 114440: ldur x0, [x29, #-0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-16))));
  /* 114444: cbz x0, #0x11449c */
  if ((ARC_X_R(c, 0)) == 0) goto L_11449c;
  /* 114448: ldp x8, x9, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 11444c: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 114450: b.eq #0x11446c */
  if (ARC_COND(c, 0)) goto L_11446c;
  /* 114454: cbz x20, #0x1144c0 */
  if ((ARC_X_R(c, 20)) == 0) goto L_1144c0;
  /* 114458: ldp x8, x9, [x20, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 11445c: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 114460: b.ne #0x1144b4 */
  if (ARC_COND(c, 1)) goto L_1144b4;
  /* 114464: mov w21, wzr */
  ARC_W_W(c, 21, ARC_W_R(c, 31));
  /* 114468: b #0x114508 */
  goto L_114508;
L_11446c:;
  /* 11446c: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 114470: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 114474: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1131640));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 114478: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 11447c: b.eq #0x114498 */
  if (ARC_COND(c, 0)) goto L_114498;
  /* 114480: ldur x8, [x29, #-0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(-16))));
  /* 114484: cmp x8, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(0));
  /* 114488: cset w21, eq */
  ARC_W_W(c, 21, (ARC_COND(c, 0) ? 1 : 0));
  /* 11448c: cbnz x20, #0x1144a4 */
  if ((ARC_X_R(c, 20)) != 0) goto L_1144a4;
L_114490:;
  /* 114490: tbnz w21, #0, #0x1144b4 */
  if (((ARC_W_R(c, 21)) >> 0 & 1) != 0) goto L_1144b4;
  /* 114494: b #0x1144c0 */
  goto L_1144c0;
L_114498:;
  /* 114498: stur xzr, [x29, #-0x10] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-16)), ARC_X_R(c, 31));
L_11449c:;
  /* 11449c: mov w21, #1 */
  ARC_W_W(c, 21, UINT64_C(1));
  /* 1144a0: cbz x20, #0x114490 */
  if ((ARC_X_R(c, 20)) == 0) goto L_114490;
L_1144a4:;
  /* 1144a4: ldp x8, x9, [x20, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 1144a8: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 1144ac: b.eq #0x114508 */
  if (ARC_COND(c, 0)) goto L_114508;
  /* 1144b0: tbnz w21, #0, #0x1144c0 */
  if (((ARC_W_R(c, 21)) >> 0 & 1) != 0) goto L_1144c0;
L_1144b4:;
  /* 1144b4: ldr w8, [x19] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 19)));
  /* 1144b8: orr w8, w8, #2 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | UINT64_C(2)));
  /* 1144bc: str w8, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 8));
L_1144c0:;
  /* 1144c0: ldur x19, [x29, #-0x10] */
  ARC_X_W(c, 19, arc_ld64((ARC_X_R(c, 29) + INT64_C(-16))));
  /* 1144c4: add x0, sp, #0x98 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(152)));
  /* 1144c8: bl #0x143478 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1131724));
  fn1_143478(c);
  /* 1144cc: ldur x0, [x29, #-0x88] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-136))));
  /* 1144d0: stur xzr, [x29, #-0x88] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-136)), ARC_X_R(c, 31));
  /* 1144d4: cbz x0, #0x1144e0 */
  if ((ARC_X_R(c, 0)) == 0) goto L_1144e0;
  /* 1144d8: ldur x8, [x29, #-0x80] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(-128))));
  /* 1144dc: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1131744));
  arc_dispatch(c, ARC_X_R(c, 8));
L_1144e0:;
  /* 1144e0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1144e4: ldp x20, x19, [sp, #0x180] */
  { const uint64_t _pa = ((c)->sp + INT64_C(384));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1144e8: ldp x22, x21, [sp, #0x170] */
  { const uint64_t _pa = ((c)->sp + INT64_C(368));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1144ec: ldp x24, x23, [sp, #0x160] */
  { const uint64_t _pa = ((c)->sp + INT64_C(352));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 1144f0: ldp x26, x25, [sp, #0x150] */
  { const uint64_t _pa = ((c)->sp + INT64_C(336));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* 1144f4: ldp x28, x27, [sp, #0x140] */
  { const uint64_t _pa = ((c)->sp + INT64_C(320));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* 1144f8: ldp x29, x30, [sp, #0x130] */
  { const uint64_t _pa = ((c)->sp + INT64_C(304));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1144fc: add sp, sp, #0x190 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(400)));
  /* 114500: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 114504: ret  */
  return;
L_114508:;
  /* 114508: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 11450c: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 114510: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 114514: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1131800));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 114518: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 11451c: cset w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? 1 : 0));
  /* 114520: eor w8, w21, w8 */
  ARC_W_W(c, 8, (ARC_W_R(c, 21) ^ ARC_W_R(c, 8)));
  /* 114524: tbz w8, #0, #0x1144b4 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1144b4;
  /* 114528: b #0x1144c0 */
  goto L_1144c0;
L_11452c:;
  /* 11452c: bl #0xfc3b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1131824));
  fn1_fc3b8(c);
L_114530:;
  /* 114530: adrp x0, #0x52000 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(335872)));
  /* 114534: add x0, x0, #0x54a */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1354)));
  /* 114538: bl #0x142c98 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1131836));
  fn1_142c98(c);
  /* 11453c: b #0x114574 */
  goto L_114574;
  /* 114540: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 114544: cbz x22, #0x114578 */
  if ((ARC_X_R(c, 22)) == 0) goto L_114578;
  /* 114548: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 11454c: bl #0x142800 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1131856));
  fn1_142800(c);
  /* 114550: b #0x114578 */
  goto L_114578;
  /* 114554: b #0x114574 */
  goto L_114574;
  /* 114558: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1131868));
  fn1_a1454(c);
  /* 11455c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 114560: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* 114564: bl #0xd2a78 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1131880));
  fn1_d2a78(c);
  /* 114568: b #0x114578 */
  goto L_114578;
  /* 11456c: b #0x114574 */
  goto L_114574;
  /* 114570: b #0x114574 */
  goto L_114574;
L_114574:;
  /* 114574: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
L_114578:;
  /* 114578: add x0, sp, #0x98 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(152)));
  /* 11457c: bl #0x143478 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1131904));
  fn1_143478(c);
  /* 114580: ldur x0, [x29, #-0x88] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-136))));
  /* 114584: stur xzr, [x29, #-0x88] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-136)), ARC_X_R(c, 31));
  /* 114588: cbz x0, #0x114594 */
  if ((ARC_X_R(c, 0)) == 0) goto L_114594;
  /* 11458c: ldur x8, [x29, #-0x80] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(-128))));
  /* 114590: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1131924));
  arc_dispatch(c, ARC_X_R(c, 8));
L_114594:;
  /* 114594: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 114598: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1131932));
  fn1_9cc20(c);
  /* 11459c: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1131936));
  fn1_a1454(c);
}

void fn1_120b74(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039110516));
  /* 120b74: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 120b78: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* 120b7c: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 120b80: str x23, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 23));
  /* 120b84: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 120b88: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 120b8c: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 120b90: adrp x23, #0x151000 */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 120b94: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 120b98: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 120b9c: ldr x23, [x23, #0xc00] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 23) + INT64_C(3072))));
  /* 120ba0: ldar x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 120ba4: cmn x8, #1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0);
  /* 120ba8: b.eq #0x120c64 */
  if (ARC_COND(c, 0)) goto L_120c64;
  /* 120bac: nop  */
  /* nop: no architectural effect here */
  /* 120bb0: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 120bb4: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1182648));
  fn1_142518(c);
  /* 120bb8: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 120bbc: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 120bc0: b.ne #0x120bec */
  if (ARC_COND(c, 1)) goto L_120bec;
  /* 120bc4: nop  */
  /* nop: no architectural effect here */
  /* 120bc8: adr x21, #0x15791c */
  ARC_X_W(c, 21, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 120bcc: nop  */
  /* nop: no architectural effect here */
  /* 120bd0: adr x22, #0x1578f4 */
  ARC_X_W(c, 22, (arc_image_bases[1] + UINT64_C(1407220)));
L_120bd4:;
  /* 120bd4: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 120bd8: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 120bdc: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1182688));
  fn1_142530(c);
  /* 120be0: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 120be4: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 120be8: b.eq #0x120bd4 */
  if (ARC_COND(c, 0)) goto L_120bd4;
L_120bec:;
  /* 120bec: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 120bf0: cbz x8, #0x120c04 */
  if ((ARC_X_R(c, 8)) == 0) goto L_120c04;
  /* 120bf4: nop  */
  /* nop: no architectural effect here */
  /* 120bf8: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 120bfc: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1182720));
  fn1_142560(c);
  /* 120c00: b #0x120c64 */
  goto L_120c64;
L_120c04:;
  /* 120c04: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 120c08: str x23, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 23));
  /* 120c0c: strb wzr, [sp, #8] */
  arc_st8(((c)->sp + INT64_C(8)), ARC_W_R(c, 31));
  /* 120c10: str x8, [x23] */
  arc_st64(ARC_X_R(c, 23), ARC_X_R(c, 8));
  /* 120c14: nop  */
  /* nop: no architectural effect here */
  /* 120c18: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 120c1c: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1182752));
  fn1_142560(c);
  /* 120c20: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 120c24: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 120c28: ldr x1, [x1, #0xc58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3160))));
  /* 120c2c: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1182768));
  fn1_a2030(c);
  /* 120c30: add w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + UINT64_C(1)));
  /* 120c34: str w8, [x23, #8] */
  arc_st32((ARC_X_R(c, 23) + INT64_C(8)), ARC_W_R(c, 8));
  /* 120c38: nop  */
  /* nop: no architectural effect here */
  /* 120c3c: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 120c40: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1182788));
  fn1_142518(c);
  /* 120c44: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 120c48: stlr x8, [x23] */
  arc_st64(ARC_X_R(c, 23), ARC_X_R(c, 8));
  /* 120c4c: nop  */
  /* nop: no architectural effect here */
  /* 120c50: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 120c54: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1182808));
  fn1_142560(c);
  /* 120c58: nop  */
  /* nop: no architectural effect here */
  /* 120c5c: adr x0, #0x15791c */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 120c60: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1182820));
  fn1_142578(c);
L_120c64:;
  /* 120c64: ldrsw x8, [x23, #8] */
  ARC_X_W(c, 8, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 23) + INT64_C(8)))));
  /* 120c68: add x1, x19, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 19) + UINT64_C(8)));
  /* 120c6c: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 120c70: sub x22, x8, #1 */
  ARC_X_W(c, 22, (ARC_X_R(c, 8) - UINT64_C(1)));
  /* 120c74: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1182840));
  fn1_db2e0(c);
  /* 120c78: mov x21, x20 */
  ARC_X_W(c, 21, ARC_X_R(c, 20));
  /* 120c7c: ldp x8, x9, [x21, #0x10]! */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(16));
    ARC_X_W(c, 21, ARC_X_R(c, 21) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 120c80: sub x9, x9, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - ARC_X_R(c, 8)));
  /* 120c84: asr x10, x9, #3 */
  ARC_X_W(c, 10, ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(3)) & 63))));
  /* 120c88: cmp x10, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 22));
  /* 120c8c: b.hi #0x120cb8 */
  if (ARC_COND(c, 8)) goto L_120cb8;
  /* 120c90: add x9, x22, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 22) + UINT64_C(1)));
  /* 120c94: subs x1, x9, x10 */
  ARC_X_W(c, 1, arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10)));
  /* 120c98: b.ls #0x120cac */
  if (ARC_COND(c, 9)) goto L_120cac;
  /* 120c9c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 120ca0: bl #0x1352bc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1182884));
  fn1_1352bc(c);
  /* 120ca4: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 120ca8: b #0x120cb8 */
  goto L_120cb8;
L_120cac:;
  /* 120cac: b.hs #0x120cb8 */
  if (ARC_COND(c, 2)) goto L_120cb8;
  /* 120cb0: add x9, x8, x9, lsl #3 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3)));
  /* 120cb4: str x9, [x20, #0x18] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(24)), ARC_X_R(c, 9));
L_120cb8:;
  /* 120cb8: ldr x20, [x8, x22, lsl #3] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 22)) << 3))));
  /* 120cbc: cbz x20, #0x120ce0 */
  if ((ARC_X_R(c, 20)) == 0) goto L_120ce0;
  /* 120cc0: add x1, x20, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* 120cc4: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 120cc8: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1182924));
  fn1_bd950(c);
  /* 120ccc: cbnz x0, #0x120ce0 */
  if ((ARC_X_R(c, 0)) != 0) goto L_120ce0;
  /* 120cd0: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 120cd4: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 120cd8: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 120cdc: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1182944));
  arc_dispatch(c, ARC_X_R(c, 8));
L_120ce0:;
  /* 120ce0: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 120ce4: str x19, [x8, x22, lsl #3] */
  arc_st64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 22)) << 3)), ARC_X_R(c, 19));
  /* 120ce8: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 120cec: ldr x23, [sp, #0x20] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(32))));
  /* 120cf0: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 120cf4: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 120cf8: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* 120cfc: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 120d00: ret  */
  return;
  /* 120d04: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 120d08: add x1, x19, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 19) + UINT64_C(8)));
  /* 120d0c: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 120d10: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1182996));
  fn1_bd950(c);
  /* 120d14: cbnz x0, #0x120d3c */
  if ((ARC_X_R(c, 0)) != 0) goto L_120d3c;
  /* 120d18: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 120d1c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 120d20: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 120d24: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1183016));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 120d28: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 120d2c: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1183024));
  fn1_9cc20(c);
  /* 120d30: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 120d34: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 120d38: bl #0xd2a78 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1183036));
  fn1_d2a78(c);
L_120d3c:;
  /* 120d3c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 120d40: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1183044));
  fn1_9cc20(c);
}

void fn1_126eb8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039135928));
  /* 126eb8: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 126ebc: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* 126ec0: stp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 126ec4: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 126ec8: add x29, sp, #0x30 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(48)));
  /* 126ecc: strb wzr, [x0, #0x18] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(24)), ARC_W_R(c, 31));
  /* 126ed0: adrp x9, #0x151000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 126ed4: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 126ed8: ldr x9, [x9, #0xc78] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(3192))));
  /* 126edc: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 126ee0: sub x8, x2, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 2) - UINT64_C(1)));
  /* 126ee4: nop  */
  /* nop: no architectural effect here */
  /* 126ee8: adr x10, #0x75c10 */
  ARC_X_W(c, 10, (arc_image_bases[1] + UINT64_C(482320)));
  /* 126eec: add x9, x9, #0x10 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(16)));
  /* 126ef0: stp x8, x10, [x0, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 10));
  }
  /* 126ef4: str x9, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 9));
  /* 126ef8: mov w0, #0x1fbf */
  ARC_W_W(c, 0, UINT64_C(8127));
  /* 126efc: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 126f00: bl #0x1441e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1208068));
  fn1_1441e0(c);
  /* 126f04: str x0, [x19, #0x20] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(32)), ARC_X_R(c, 0));
  /* 126f08: cbz x0, #0x126f20 */
  if ((ARC_X_R(c, 0)) == 0) goto L_126f20;
  /* 126f0c: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 126f10: ldp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 126f14: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* 126f18: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 126f1c: ret  */
  return;
L_126f20:;
  /* 126f20: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 126f24: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 126f28: bl #0x11dda8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1208108));
  fn1_11dda8(c);
  /* 126f2c: adrp x0, #0x51000 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(331776)));
  /* 126f30: add x0, x0, #0x435 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1077)));
  /* 126f34: add x8, sp, #0x18 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(24)));
  /* 126f38: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 126f3c: add x20, sp, #0x18 */
  ARC_X_W(c, 20, ((c)->sp + UINT64_C(24)));
  /* 126f40: bl #0x125878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1208132));
  fn1_125878(c);
  /* 126f44: ldrb w8, [sp, #0x18] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(24))));
  /* 126f48: ldr x9, [sp, #0x28] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(40))));
  /* 126f4c: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 126f50: csinc x0, x9, x20, ne */
  ARC_X_W(c, 0, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 20)) + 1)));
  /* 126f54: bl #0x142c98 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1208152));
  fn1_142c98(c);
  /* 126f58: ldrb w8, [sp, #0x18] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(24))));
  /* 126f5c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 126f60: tbz w8, #0, #0x126f7c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_126f7c;
  /* 126f64: ldr x8, [sp, #0x18] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(24))));
  /* 126f68: ldr x0, [sp, #0x28] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(40))));
  /* 126f6c: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 126f70: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1208180));
  fn1_142608(c);
  /* 126f74: b #0x126f7c */
  goto L_126f7c;
  /* 126f78: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
L_126f7c:;
  /* 126f7c: ldrb w8, [sp] */
  ARC_W_W(c, 8, arc_ld8((c)->sp));
  /* 126f80: tbz w8, #0, #0x126fa0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_126fa0;
  /* 126f84: ldr x8, [sp] */
  ARC_X_W(c, 8, arc_ld64((c)->sp));
  /* 126f88: ldr x0, [sp, #0x10] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(16))));
  /* 126f8c: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 126f90: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1208212));
  fn1_142608(c);
  /* 126f94: b #0x126fa0 */
  goto L_126fa0;
  /* 126f98: b #0x126f9c */
  goto L_126f9c;
L_126f9c:;
  /* 126f9c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
L_126fa0:;
  /* 126fa0: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 126fa4: ldr x8, [x8, #0xc70] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3184))));
  /* 126fa8: ldr x0, [x19, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* 126fac: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* 126fb0: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* 126fb4: cbz x0, #0x126fc8 */
  if ((ARC_X_R(c, 0)) == 0) goto L_126fc8;
  /* 126fb8: ldrb w8, [x19, #0x18] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(24))));
  /* 126fbc: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* 126fc0: b.ne #0x126fc8 */
  if (ARC_COND(c, 1)) goto L_126fc8;
  /* 126fc4: bl #0x1425a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1208264));
  fn1_1425a8(c);
L_126fc8:;
  /* 126fc8: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 126fcc: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1208272));
  fn1_9cc20(c);
}

void fn1_12978c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039146380));
  /* 12978c: bti c */
  /* bti: no architectural effect here */
  /* 129790: mov w0, #3 */
  ARC_W_W(c, 0, UINT64_C(3));
  /* 129794: str x2, [x4] */
  arc_st64(ARC_X_R(c, 4), ARC_X_R(c, 2));
  /* 129798: ret  */
  return;
}

void fn1_12ada8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039152040));
  /* 12ada8: bti c */
  /* bti: no architectural effect here */
  /* 12adac: sub x8, x3, x2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 3) - ARC_X_R(c, 2)));
  /* 12adb0: cmp x8, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(2));
  /* 12adb4: b.lt #0x12addc */
  if (ARC_COND(c, 11)) goto L_12addc;
  /* 12adb8: ldr w8, [x0, #0x18] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 0) + INT64_C(24))));
  /* 12adbc: tbz w8, #2, #0x12addc */
  if (((ARC_W_R(c, 8)) >> 2 & 1) == 0) goto L_12addc;
  /* 12adc0: ldrb w8, [x2] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 2)));
  /* 12adc4: cmp w8, #0xfe */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(254));
  /* 12adc8: b.ne #0x12addc */
  if (ARC_COND(c, 1)) goto L_12addc;
  /* 12adcc: ldrb w8, [x2, #1] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 2) + INT64_C(1))));
  /* 12add0: cmp w8, #0xff */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(255));
  /* 12add4: cset w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? 1 : 0));
  /* 12add8: add x2, x2, w8, uxtw #1 */
  ARC_X_W(c, 2, (ARC_X_R(c, 2) + ((uint64_t)(((uint64_t)(uint32_t)(ARC_W_R(c, 8)))) << 1)));
L_12addc:;
  /* 12addc: sub x8, x3, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 3) - UINT64_C(1)));
  /* 12ade0: cmp x2, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 2), ARC_X_R(c, 8));
  /* 12ade4: b.hs #0x12ae80 */
  if (ARC_COND(c, 2)) goto L_12ae80;
  /* 12ade8: ldr x9, [x0, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 12adec: mov w10, #0xd800 */
  ARC_W_W(c, 10, UINT64_C(55296));
  /* 12adf0: mov w11, #0xdc00 */
  ARC_W_W(c, 11, UINT64_C(56320));
  /* 12adf4: b #0x12ae08 */
  goto L_12ae08;
L_12adf8:;
  /* 12adf8: add x2, x2, x0 */
  ARC_X_W(c, 2, (ARC_X_R(c, 2) + ARC_X_R(c, 0)));
  /* 12adfc: str w12, [x5], #4 */
  { const uint64_t _a = ARC_X_R(c, 5);
    ARC_X_W(c, 5, ARC_X_R(c, 5) + INT64_C(4));
    arc_st32(_a, ARC_W_R(c, 12));
  }
  /* 12ae00: cmp x2, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 2), ARC_X_R(c, 8));
  /* 12ae04: b.hs #0x12ae80 */
  if (ARC_COND(c, 2)) goto L_12ae80;
L_12ae08:;
  /* 12ae08: cmp x5, x6 */
  (void)arc_sub64(c, ARC_X_R(c, 5), ARC_X_R(c, 6));
  /* 12ae0c: b.hs #0x12ae80 */
  if (ARC_COND(c, 2)) goto L_12ae80;
  /* 12ae10: ldrb w14, [x2] */
  ARC_W_W(c, 14, arc_ld8(ARC_X_R(c, 2)));
  /* 12ae14: ldrb w12, [x2, #1] */
  ARC_W_W(c, 12, arc_ld8((ARC_X_R(c, 2) + INT64_C(1))));
  /* 12ae18: lsl w13, w14, #8 */
  ARC_W_W(c, 13, ((uint32_t)(ARC_W_R(c, 14)) << ((UINT64_C(8)) & 31)));
  /* 12ae1c: bfi w12, w14, #8, #8 */
  ARC_W_W(c, 12, (((uint32_t)(ARC_W_R(c, 12)) & UINT64_C(4294902015)) | ((((uint32_t)(ARC_W_R(c, 14))) & UINT64_C(255)) << 8)));
  /* 12ae20: and w13, w13, #0xfc00 */
  ARC_W_W(c, 13, (ARC_W_R(c, 13) & UINT64_C(64512)));
  /* 12ae24: cmp w13, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 13), ARC_W_R(c, 10));
  /* 12ae28: b.eq #0x12ae44 */
  if (ARC_COND(c, 0)) goto L_12ae44;
  /* 12ae2c: cmp w13, w11 */
  (void)arc_sub32(c, ARC_W_R(c, 13), ARC_W_R(c, 11));
  /* 12ae30: b.eq #0x12ae94 */
  if (ARC_COND(c, 0)) goto L_12ae94;
  /* 12ae34: cmp x9, w12, uxtw */
  (void)arc_sub64(c, ARC_X_R(c, 9), ((uint64_t)(uint32_t)(ARC_W_R(c, 12))));
  /* 12ae38: mov w0, #2 */
  ARC_W_W(c, 0, UINT64_C(2));
  /* 12ae3c: b.hs #0x12adf8 */
  if (ARC_COND(c, 2)) goto L_12adf8;
  /* 12ae40: b #0x12ae88 */
  goto L_12ae88;
L_12ae44:;
  /* 12ae44: sub x13, x3, x2 */
  ARC_X_W(c, 13, (ARC_X_R(c, 3) - ARC_X_R(c, 2)));
  /* 12ae48: cmp x13, #4 */
  (void)arc_sub64(c, ARC_X_R(c, 13), UINT64_C(4));
  /* 12ae4c: b.lt #0x12ae9c */
  if (ARC_COND(c, 11)) goto L_12ae9c;
  /* 12ae50: ldrb w13, [x2, #2] */
  ARC_W_W(c, 13, arc_ld8((ARC_X_R(c, 2) + INT64_C(2))));
  /* 12ae54: and w14, w13, #0xfc */
  ARC_W_W(c, 14, (ARC_W_R(c, 13) & UINT64_C(252)));
  /* 12ae58: cmp w14, #0xdc */
  (void)arc_sub32(c, ARC_W_R(c, 14), UINT64_C(220));
  /* 12ae5c: b.ne #0x12ae94 */
  if (ARC_COND(c, 1)) goto L_12ae94;
  /* 12ae60: ldrb w14, [x2, #3] */
  ARC_W_W(c, 14, arc_ld8((ARC_X_R(c, 2) + INT64_C(3))));
  /* 12ae64: bfi w14, w13, #8, #2 */
  ARC_W_W(c, 14, (((uint32_t)(ARC_W_R(c, 14)) & UINT64_C(4294966527)) | ((((uint32_t)(ARC_W_R(c, 13))) & UINT64_C(3)) << 8)));
  /* 12ae68: bfi w14, w12, #0xa, #0xa */
  ARC_W_W(c, 14, (((uint32_t)(ARC_W_R(c, 14)) & UINT64_C(4293919743)) | ((((uint32_t)(ARC_W_R(c, 12))) & UINT64_C(1023)) << 10)));
  /* 12ae6c: add w12, w14, #0x10, lsl #12 */
  ARC_W_W(c, 12, (ARC_W_R(c, 14) + UINT64_C(65536)));
  /* 12ae70: cmp x9, x12 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 12));
  /* 12ae74: b.lo #0x12ae94 */
  if (ARC_COND(c, 3)) goto L_12ae94;
  /* 12ae78: mov w0, #4 */
  ARC_W_W(c, 0, UINT64_C(4));
  /* 12ae7c: b #0x12adf8 */
  goto L_12adf8;
L_12ae80:;
  /* 12ae80: cmp x2, x3 */
  (void)arc_sub64(c, ARC_X_R(c, 2), ARC_X_R(c, 3));
  /* 12ae84: cset w0, lo */
  ARC_W_W(c, 0, (ARC_COND(c, 3) ? 1 : 0));
L_12ae88:;
  /* 12ae88: str x2, [x4] */
  arc_st64(ARC_X_R(c, 4), ARC_X_R(c, 2));
  /* 12ae8c: str x5, [x7] */
  arc_st64(ARC_X_R(c, 7), ARC_X_R(c, 5));
  /* 12ae90: ret  */
  return;
L_12ae94:;
  /* 12ae94: mov w0, #2 */
  ARC_W_W(c, 0, UINT64_C(2));
  /* 12ae98: b #0x12ae88 */
  goto L_12ae88;
L_12ae9c:;
  /* 12ae9c: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 12aea0: b #0x12ae88 */
  goto L_12ae88;
}

void fn1_12c568(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039158120));
  /* 12c568: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 12c56c: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 12c570: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 12c574: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 12c578: adrp x8, #0x53000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(339968)));
  /* 12c57c: stp xzr, xzr, [x0, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 12c580: sub x9, x2, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 2) - UINT64_C(1)));
  /* 12c584: ldr d0, [x8, #0x2f0] */
  arc_du_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(752))));
  /* 12c588: str xzr, [x0, #0x18] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(24)), ARC_X_R(c, 31));
  /* 12c58c: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 12c590: ldr x8, [x8, #0xcd8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3288))));
  /* 12c594: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 12c598: str d0, [x0, #0x10] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(16)), (c)->q[0].u64[0]);
  /* 12c59c: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* 12c5a0: stp x8, x9, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 12c5a4: ldrb w8, [x1] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 1)));
  /* 12c5a8: ldr x9, [x1, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 1) + INT64_C(16))));
  /* 12c5ac: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 12c5b0: csinc x1, x9, x1, ne */
  ARC_X_W(c, 1, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 1)) + 1)));
  /* 12c5b4: bl #0x143b98 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1230264));
  fn1_143b98(c);
  /* 12c5b8: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 12c5bc: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 12c5c0: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 12c5c4: ret  */
  return;
  /* 12c5c8: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 12c5cc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 12c5d0: bl #0x143b68 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1230292));
  fn1_143b68(c);
  /* 12c5d4: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 12c5d8: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1230300));
  fn1_9cc20(c);
}

void fn1_13498c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039191948));
  /* 13498c: bti c */
  /* bti: no architectural effect here */
  /* 134990: mov w1, #0x10 */
  ARC_W_W(c, 1, UINT64_C(16));
  /* 134994: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_1350cc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039193804));
  /* 1350cc: bti c */
  /* bti: no architectural effect here */
  /* 1350d0: mov w1, #0x10 */
  ARC_W_W(c, 1, UINT64_C(16));
  /* 1350d4: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_138054(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039205972));
  /* 138054: bti c */
  /* bti: no architectural effect here */
  /* 138058: tst w3, #0x18 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 3) & UINT64_C(24)));
  /* 13805c: b.eq #0x13806c */
  if (ARC_COND(c, 0)) goto L_13806c;
  /* 138060: tbz w3, #3, #0x138078 */
  if (((ARC_W_R(c, 3)) >> 3 & 1) == 0) goto L_138078;
  /* 138064: ldr x8, [x0, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(24))));
  /* 138068: cbnz x8, #0x138078 */
  if ((ARC_X_R(c, 8)) != 0) goto L_138078;
L_13806c:;
  /* 13806c: mov x1, #-1 */
  ARC_X_W(c, 1, UINT64_C(18446744073709551615));
  /* 138070: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
  /* 138074: ret  */
  return;
L_138078:;
  /* 138078: ldr x8, [x0, #0x30] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(48))));
  /* 13807c: mov x1, #-1 */
  ARC_X_W(c, 1, UINT64_C(18446744073709551615));
  /* 138080: cmp x8, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(0));
  /* 138084: cset w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? 1 : 0));
  /* 138088: and w8, w8, w3, lsr #4 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & ((uint32_t)(ARC_W_R(c, 3)) >> 4)));
  /* 13808c: tbnz w8, #0, #0x1380e0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_1380e0;
  /* 138090: tbnz x2, #0x3f, #0x1380e0 */
  if (((ARC_X_R(c, 2)) >> 63 & 1) != 0) goto L_1380e0;
  /* 138094: ldr x10, [x0, #0x38] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 0) + INT64_C(56))));
  /* 138098: ldr x9, [x0, #0x20] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(32))));
  /* 13809c: ldr x8, [x0, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 1380a0: cmp x10, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 10), UINT64_C(0));
  /* 1380a4: csel x10, x9, x10, eq */
  ARC_X_W(c, 10, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 10)));
  /* 1380a8: sub x10, x10, x8 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) - ARC_X_R(c, 8)));
  /* 1380ac: cmp x2, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 2), ARC_X_R(c, 10));
  /* 1380b0: b.gt #0x1380e0 */
  if (ARC_COND(c, 12)) goto L_1380e0;
  /* 1380b4: add x8, x8, x2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + ARC_X_R(c, 2)));
  /* 1380b8: tbz w3, #3, #0x1380c8 */
  if (((ARC_W_R(c, 3)) >> 3 & 1) == 0) goto L_1380c8;
  /* 1380bc: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 1380c0: csel x9, x9, x8, lo */
  ARC_X_W(c, 9, (ARC_COND(c, 3) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* 1380c4: stp x8, x9, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
L_1380c8:;
  /* 1380c8: tbz w3, #4, #0x1380dc */
  if (((ARC_W_R(c, 3)) >> 4 & 1) == 0) goto L_1380dc;
  /* 1380cc: ldr x9, [x0, #0x28] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(40))));
  /* 1380d0: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 1380d4: csel x9, x8, x9, lo */
  ARC_X_W(c, 9, (ARC_COND(c, 3) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* 1380d8: stp x9, x8, [x0, #0x28] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(40));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
L_1380dc:;
  /* 1380dc: mov x1, x2 */
  ARC_X_W(c, 1, ARC_X_R(c, 2));
L_1380e0:;
  /* 1380e0: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
  /* 1380e4: ret  */
  return;
}

void fn1_13ba8c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039220876));
  /* 13ba8c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 13ba90: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 13ba94: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 13ba98: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 13ba9c: ldp x10, x9, [x0, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(32));
    ARC_X_W(c, 10, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 13baa0: mov x8, #0xe38f */
  ARC_X_W(c, 8, UINT64_C(58255));
  /* 13baa4: movk x8, #0x8e38, lsl #16 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(18446744069414649855)) | UINT64_C(2386034688)));
  /* 13baa8: mov w11, #0x70 */
  ARC_W_W(c, 11, UINT64_C(112));
  /* 13baac: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 13bab0: movk x8, #0x38e3, lsl #32 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(18446462603027808255)) | UINT64_C(62547608731648)));
  /* 13bab4: add x9, x9, x10 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + ARC_X_R(c, 10)));
  /* 13bab8: movk x8, #0xe38e, lsl #48 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(281474976710655)) | UINT64_C(16397043293302554624)));
  /* 13babc: mov w10, #0x24 */
  ARC_W_W(c, 10, UINT64_C(36));
  /* 13bac0: sub x9, x9, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - UINT64_C(1)));
  /* 13bac4: umulh x8, x9, x8 */
  ARC_X_W(c, 8, arc_umulh(ARC_X_R(c, 9), ARC_X_R(c, 8)));
  /* 13bac8: lsr x8, x8, #5 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(5)) & 63)));
  /* 13bacc: msub x9, x8, x10, x9 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) - ((uint64_t)(ARC_X_R(c, 8)) * (uint64_t)(ARC_X_R(c, 10)))));
  /* 13bad0: ldr x10, [x0, #8] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* 13bad4: ldr x8, [x10, x8, lsl #3] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 10) + ((uint64_t)(ARC_X_R(c, 8)) << 3))));
  /* 13bad8: nop  */
  /* nop: no architectural effect here */
  /* 13badc: madd x20, x9, x11, x8 */
  ARC_X_W(c, 20, ((uint64_t)(ARC_X_R(c, 8)) + ((uint64_t)(ARC_X_R(c, 9)) * (uint64_t)(ARC_X_R(c, 11)))));
  /* 13bae0: ldr x0, [x20] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 20)));
  /* 13bae4: cbz x0, #0x13baf0 */
  if ((ARC_X_R(c, 0)) == 0) goto L_13baf0;
  /* 13bae8: bl #0x144618 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1293036));
  fn1_144618(c);
  /* 13baec: str xzr, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 31));
L_13baf0:;
  /* 13baf0: ldrb w8, [x20, #0x20] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 20) + INT64_C(32))));
  /* 13baf4: tbz w8, #0, #0x13bb08 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13bb08;
  /* 13baf8: ldr x8, [x20, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(32))));
  /* 13bafc: ldr x0, [x20, #0x30] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 20) + INT64_C(48))));
  /* 13bb00: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 13bb04: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1293064));
  fn1_142608(c);
L_13bb08:;
  /* 13bb08: ldrb w8, [x20, #8] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 20) + INT64_C(8))));
  /* 13bb0c: tbz w8, #0, #0x13bb20 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13bb20;
  /* 13bb10: ldr x8, [x20, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(8))));
  /* 13bb14: ldr x0, [x20, #0x18] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 20) + INT64_C(24))));
  /* 13bb18: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 13bb1c: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1293088));
  fn1_142608(c);
L_13bb20:;
  /* 13bb20: ldp x9, x8, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* 13bb24: mov w11, #0x24 */
  ARC_W_W(c, 11, UINT64_C(36));
  /* 13bb28: mov x12, #-1 */
  ARC_X_W(c, 12, UINT64_C(18446744073709551615));
  /* 13bb2c: subs x10, x8, x9 */
  ARC_X_W(c, 10, arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9)));
  /* 13bb30: asr x10, x10, #3 */
  ARC_X_W(c, 10, ((uint64_t)((int64_t)(ARC_X_R(c, 10)) >> ((UINT64_C(3)) & 63))));
  /* 13bb34: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 13bb38: madd x10, x10, x11, x12 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 12)) + ((uint64_t)(ARC_X_R(c, 10)) * (uint64_t)(ARC_X_R(c, 11)))));
  /* 13bb3c: ldp x12, x11, [x19, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(32));
    ARC_X_W(c, 12, arc_ld64(_pa));
    ARC_X_W(c, 11, arc_ld64(_pa + 8));
  }
  /* 13bb40: csel x9, xzr, x10, eq */
  ARC_X_W(c, 9, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 10)));
  /* 13bb44: add x10, x11, x12 */
  ARC_X_W(c, 10, (ARC_X_R(c, 11) + ARC_X_R(c, 12)));
  /* 13bb48: sub x9, x9, x10 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - ARC_X_R(c, 10)));
  /* 13bb4c: sub x10, x11, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 11) - UINT64_C(1)));
  /* 13bb50: add x9, x9, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(1)));
  /* 13bb54: str x10, [x19, #0x28] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(40)), ARC_X_R(c, 10));
  /* 13bb58: cmp x9, #0x48 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(72));
  /* 13bb5c: b.lo #0x13bb78 */
  if (ARC_COND(c, 3)) goto L_13bb78;
  /* 13bb60: ldur x0, [x8, #-8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(-8))));
  /* 13bb64: mov w1, #0xfc0 */
  ARC_W_W(c, 1, UINT64_C(4032));
  /* 13bb68: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1293164));
  fn1_142608(c);
  /* 13bb6c: ldr x8, [x19, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* 13bb70: sub x8, x8, #8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) - UINT64_C(8)));
  /* 13bb74: str x8, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 8));
L_13bb78:;
  /* 13bb78: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 13bb7c: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 13bb80: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 13bb84: ret  */
  return;
}

void fn1_142470(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039247984));
  /* 142470: adrp x16, #0x151000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 142474: ldr x17, [x16, #0xeb0] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(3760))));
  /* 142478: add x16, x16, #0xeb0 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(3760)));
  /* 14247c: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 142480: nop  */
  /* nop: no architectural effect here */
  /* 142484: nop  */
  /* nop: no architectural effect here */
}

void fn1_142a70(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039249520));
  /* 142a70: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 142a74: ldr x17, [x16, #0xb0] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(176))));
  /* 142a78: add x16, x16, #0xb0 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(176)));
  /* 142a7c: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 142a80: nop  */
  /* nop: no architectural effect here */
  /* 142a84: nop  */
  /* nop: no architectural effect here */
}

void fn1_143070(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039251056));
  /* 143070: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 143074: ldr x17, [x16, #0x2b0] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(688))));
  /* 143078: add x16, x16, #0x2b0 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(688)));
  /* 14307c: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 143080: nop  */
  /* nop: no architectural effect here */
  /* 143084: nop  */
  /* nop: no architectural effect here */
}

void fn1_143670(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039252592));
  /* 143670: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 143674: ldr x17, [x16, #0x4b0] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(1200))));
  /* 143678: add x16, x16, #0x4b0 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(1200)));
  /* 14367c: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 143680: nop  */
  /* nop: no architectural effect here */
  /* 143684: nop  */
  /* nop: no architectural effect here */
}

void fn1_143c70(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039254128));
  /* 143c70: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 143c74: ldr x17, [x16, #0x6b0] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(1712))));
  /* 143c78: add x16, x16, #0x6b0 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(1712)));
  /* 143c7c: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 143c80: nop  */
  /* nop: no architectural effect here */
  /* 143c84: nop  */
  /* nop: no architectural effect here */
}

void fn1_144270(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039255664));
  /* 144270: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 144274: ldr x17, [x16, #0x8b0] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(2224))));
  /* 144278: add x16, x16, #0x8b0 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(2224)));
  /* 14427c: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 144280: nop  */
  /* nop: no architectural effect here */
  /* 144284: nop  */
  /* nop: no architectural effect here */
}

void fn1_144870(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039257200));
  /* 144870: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 144874: ldr x17, [x16, #0xab0] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(2736))));
  /* 144878: add x16, x16, #0xab0 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(2736)));
  /* 14487c: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 144880: nop  */
  /* nop: no architectural effect here */
  /* 144884: nop  */
  /* nop: no architectural effect here */
}

