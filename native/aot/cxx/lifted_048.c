#include "lifted.h"

void fn1_9f420(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038580256));
  /* 9f420: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 9f424: stp x29, x30, [sp, #-0x60]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-96));
    (c)->sp = (c)->sp + INT64_C(-96);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 9f428: stp x28, x27, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* 9f42c: stp x26, x25, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* 9f430: stp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 9f434: stp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 9f438: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 9f43c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 9f440: sub sp, sp, #0x330 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(816)));
  /* 9f444: mov x8, x0 */
  ARC_X_W(c, 8, ARC_X_R(c, 0));
  /* 9f448: stur x0, [x29, #-8] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-8)), ARC_X_R(c, 0));
  /* 9f44c: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 9f450: add x1, x8, #0x14 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) + UINT64_C(20)));
  /* 9f454: mov x21, x3 */
  ARC_X_W(c, 21, ARC_X_R(c, 3));
  /* 9f458: mov x19, x2 */
  ARC_X_W(c, 19, ARC_X_R(c, 2));
  /* 9f45c: bl #0x9f258 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(652384));
  fn1_9f258(c);
  /* 9f460: ldur x10, [x29, #-8] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 29) + INT64_C(-8))));
  /* 9f464: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 9f468: add x20, x10, x0 */
  ARC_X_W(c, 20, (ARC_X_R(c, 10) + ARC_X_R(c, 0)));
  /* 9f46c: cmp x10, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 20));
  /* 9f470: b.hs #0x9fba8 */
  if (ARC_COND(c, 2)) goto L_9fba8;
  /* 9f474: add x8, sp, #8 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(8)));
  /* 9f478: add x21, x19, #0xf0 */
  ARC_X_W(c, 21, (ARC_X_R(c, 19) + UINT64_C(240)));
  /* 9f47c: add x22, x19, #0xe8 */
  ARC_X_W(c, 22, (ARC_X_R(c, 19) + UINT64_C(232)));
  /* 9f480: add x23, x19, #0x108 */
  ARC_X_W(c, 23, (ARC_X_R(c, 19) + UINT64_C(264)));
  /* 9f484: add x24, x19, #0xf8 */
  ARC_X_W(c, 24, (ARC_X_R(c, 19) + UINT64_C(248)));
  /* 9f488: add x27, x8, #8 */
  ARC_X_W(c, 27, (ARC_X_R(c, 8) + UINT64_C(8)));
  /* 9f48c: add x25, x19, #0x100 */
  ARC_X_W(c, 25, (ARC_X_R(c, 19) + UINT64_C(256)));
  /* 9f490: nop  */
  /* nop: no architectural effect here */
  /* 9f494: adr x26, #0x52654 */
  ARC_X_W(c, 26, (arc_image_bases[1] + UINT64_C(337492)));
  /* 9f498: b #0x9f4b0 */
  goto L_9f4b0;
L_9f49c:;
  /* 9f49c: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
L_9f4a0:;
  /* 9f4a0: str x8, [x27, #8]! */
  { const uint64_t _a = (ARC_X_R(c, 27) + INT64_C(8));
    ARC_X_W(c, 27, ARC_X_R(c, 27) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 8));
  }
L_9f4a4:;
  /* 9f4a4: ldur x10, [x29, #-8] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 29) + INT64_C(-8))));
  /* 9f4a8: cmp x10, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 20));
  /* 9f4ac: b.hs #0x9fba4 */
  if (ARC_COND(c, 2)) goto L_9fba4;
L_9f4b0:;
  /* 9f4b0: add x8, x10, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 10) + UINT64_C(1)));
  /* 9f4b4: stur x8, [x29, #-8] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-8)), ARC_X_R(c, 8));
  /* 9f4b8: ldrb w9, [x10] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 10)));
  /* 9f4bc: sub w11, w9, #3 */
  ARC_W_W(c, 11, (ARC_W_R(c, 9) - UINT64_C(3)));
  /* 9f4c0: cmp w11, #0x91 */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(145));
  /* 9f4c4: b.hi #0x9fca0 */
  if (ARC_COND(c, 8)) goto L_9fca0;
  /* 9f4c8: adr x12, #0x9f4d8 */
  ARC_X_W(c, 12, (arc_image_bases[1] + UINT64_C(652504)));
  /* 9f4cc: ldrh w13, [x26, x11, lsl #1] */
  ARC_W_W(c, 13, arc_ld16((ARC_X_R(c, 26) + ((uint64_t)(ARC_X_R(c, 11)) << 1))));
  /* 9f4d0: add x12, x12, x13, lsl #2 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) + ((uint64_t)(ARC_X_R(c, 13)) << 2)));
  /* 9f4d4: br x12 */
  switch (ARC_X_R(c, 12) - arc_image_bases[1]) {
    case UINT64_C(652792): goto L_9f5f8;
    case UINT64_C(654496): goto L_9fca0;
    case UINT64_C(653456): goto L_9f890;
    case UINT64_C(653412): goto L_9f864;
    case UINT64_C(653348): goto L_9f824;
    case UINT64_C(653440): goto L_9f880;
    case UINT64_C(653064): goto L_9f708;
    case UINT64_C(653396): goto L_9f854;
    case UINT64_C(653292): goto L_9f7ec;
    case UINT64_C(653372): goto L_9f83c;
    case UINT64_C(653144): goto L_9f758;
    case UINT64_C(653360): goto L_9f830;
    case UINT64_C(653428): goto L_9f874;
    case UINT64_C(653524): goto L_9f8d4;
    case UINT64_C(653556): goto L_9f8f4;
    case UINT64_C(653536): goto L_9f8e0;
    case UINT64_C(653476): goto L_9f8a4;
    case UINT64_C(653788): goto L_9f9dc;
    case UINT64_C(653332): goto L_9f814;
    case UINT64_C(653240): goto L_9f7b8;
    case UINT64_C(653500): goto L_9f8bc;
    case UINT64_C(653832): goto L_9fa08;
    case UINT64_C(653008): goto L_9f6d0;
    case UINT64_C(653808): goto L_9f9f0;
    case UINT64_C(653880): goto L_9fa38;
    case UINT64_C(653584): goto L_9f910;
    case UINT64_C(653856): goto L_9fa20;
    case UINT64_C(653652): goto L_9f954;
    case UINT64_C(653732): goto L_9f9a4;
    case UINT64_C(653604): goto L_9f924;
    case UINT64_C(653628): goto L_9f93c;
    case UINT64_C(653764): goto L_9f9c4;
    case UINT64_C(653308): goto L_9f7fc;
    case UINT64_C(653080): goto L_9f718;
    case UINT64_C(653036): goto L_9f6ec;
    case UINT64_C(653116): goto L_9f73c;
    case UINT64_C(653264): goto L_9f7d0;
    case UINT64_C(652980): goto L_9f6b4;
    case UINT64_C(652952): goto L_9f698;
    case UINT64_C(653900): goto L_9fa4c;
    case UINT64_C(653936): goto L_9fa70;
    case UINT64_C(652504): goto L_9f4d8;
    case UINT64_C(652648): goto L_9f568;
    case UINT64_C(652516): goto L_9f4e4;
    case UINT64_C(653960): goto L_9fa88;
    case UINT64_C(654608): goto L_9fd10;
    case UINT64_C(652808): goto L_9f608;
    case UINT64_C(654552): goto L_9fcd8;
    case UINT64_C(653676): goto L_9f96c;
    default: break;
  }
  arc_dispatch(c, ARC_X_R(c, 12)); return;
L_9f4d8:;
  /* 9f4d8: bti j */
  /* bti: no architectural effect here */
  /* 9f4dc: sub w8, w9, #0x30 */
  ARC_W_W(c, 8, (ARC_W_R(c, 9) - UINT64_C(48)));
  /* 9f4e0: b #0x9f4a0 */
  goto L_9f4a0;
L_9f4e4:;
  /* 9f4e4: bti j */
  /* bti: no architectural effect here */
  /* 9f4e8: mov x10, xzr */
  ARC_X_W(c, 10, ARC_X_R(c, 31));
  /* 9f4ec: sub w11, w9, #0x70 */
  ARC_W_W(c, 11, (ARC_W_R(c, 9) - UINT64_C(112)));
  /* 9f4f0: mov x12, #-7 */
  ARC_X_W(c, 12, UINT64_C(18446744073709551609));
  /* 9f4f4: mov x13, x8 */
  ARC_X_W(c, 13, ARC_X_R(c, 8));
L_9f4f8:;
  /* 9f4f8: cmp x13, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 13), ARC_X_R(c, 20));
  /* 9f4fc: b.eq #0x9fbd0 */
  if (ARC_COND(c, 0)) goto L_9fbd0;
  /* 9f500: ldrb w14, [x13], #1 */
  { const uint64_t _a = ARC_X_R(c, 13);
    ARC_X_W(c, 13, ARC_X_R(c, 13) + INT64_C(1));
    ARC_W_W(c, 14, arc_ld8(_a));
  }
  /* 9f504: add x12, x12, #7 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) + UINT64_C(7)));
  /* 9f508: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* 9f50c: and x15, x14, #0x7f */
  ARC_X_W(c, 15, (ARC_X_R(c, 14) & UINT64_C(127)));
  /* 9f510: lsl x15, x15, x12 */
  ARC_X_W(c, 15, ((uint64_t)(ARC_X_R(c, 15)) << ((ARC_X_R(c, 12)) & 63)));
  /* 9f514: orr x10, x15, x10 */
  ARC_X_W(c, 10, (ARC_X_R(c, 15) | ARC_X_R(c, 10)));
  /* 9f518: tbnz w14, #7, #0x9f4f8 */
  if (((ARC_W_R(c, 14)) >> 7 & 1) != 0) goto L_9f4f8;
  /* 9f51c: add w13, w12, #7 */
  ARC_W_W(c, 13, (ARC_W_R(c, 12) + UINT64_C(7)));
  /* 9f520: mov x15, #-1 */
  ARC_X_W(c, 15, UINT64_C(18446744073709551615));
  /* 9f524: cmp x12, #0x39 */
  (void)arc_sub64(c, ARC_X_R(c, 12), UINT64_C(57));
  /* 9f528: mov w12, #0x3f */
  ARC_W_W(c, 12, UINT64_C(63));
  /* 9f52c: lsl x13, x15, x13 */
  ARC_X_W(c, 13, ((uint64_t)(ARC_X_R(c, 15)) << ((ARC_X_R(c, 13)) & 63)));
  /* 9f530: stur x8, [x29, #-8] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-8)), ARC_X_R(c, 8));
  /* 9f534: ccmp w14, w12, #0, lo */
  if (ARC_COND(c, 3)) { (void)arc_sub32(c, ARC_W_R(c, 14), ARC_W_R(c, 12)); }
  else { (c)->nf = 0; (c)->zf = 0;
          (c)->cf = 0; (c)->vf = 0; }
  /* 9f538: csel x12, x13, xzr, hi */
  ARC_X_W(c, 12, (ARC_COND(c, 8) ? (ARC_X_R(c, 13)) : ARC_X_R(c, 31)));
  /* 9f53c: cmp w9, #0x8d */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(141));
  /* 9f540: b.le #0x9f59c */
  if (ARC_COND(c, 13)) goto L_9f59c;
  /* 9f544: cmp w9, #0x8f */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(143));
  /* 9f548: b.gt #0x9f5c4 */
  if (ARC_COND(c, 12)) goto L_9f5c4;
  /* 9f54c: cmp w9, #0x8e */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(142));
  /* 9f550: mov x8, x21 */
  ARC_X_W(c, 8, ARC_X_R(c, 21));
  /* 9f554: b.eq #0x9f5e8 */
  if (ARC_COND(c, 0)) goto L_9f5e8;
  /* 9f558: cmp w9, #0x8f */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(143));
  /* 9f55c: mov x8, x24 */
  ARC_X_W(c, 8, ARC_X_R(c, 24));
  /* 9f560: b.eq #0x9f5e8 */
  if (ARC_COND(c, 0)) goto L_9f5e8;
  /* 9f564: b #0x9f5dc */
  goto L_9f5dc;
L_9f568:;
  /* 9f568: bti j */
  /* bti: no architectural effect here */
  /* 9f56c: cmp w9, #0x6f */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(111));
  /* 9f570: mov x8, x24 */
  ARC_X_W(c, 8, ARC_X_R(c, 24));
  /* 9f574: b.eq #0x9f49c */
  if (ARC_COND(c, 0)) goto L_9f49c;
  /* 9f578: cmp w9, #0x6e */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(110));
  /* 9f57c: mov x8, x21 */
  ARC_X_W(c, 8, ARC_X_R(c, 21));
  /* 9f580: b.eq #0x9f49c */
  if (ARC_COND(c, 0)) goto L_9f49c;
  /* 9f584: cmp w9, #0x6d */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(109));
  /* 9f588: mov x8, x22 */
  ARC_X_W(c, 8, ARC_X_R(c, 22));
  /* 9f58c: b.eq #0x9f49c */
  if (ARC_COND(c, 0)) goto L_9f49c;
  /* 9f590: sub w8, w9, #0x50 */
  ARC_W_W(c, 8, (ARC_W_R(c, 9) - UINT64_C(80)));
  /* 9f594: add x8, x19, w8, uxtw #3 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ((uint64_t)(((uint64_t)(uint32_t)(ARC_W_R(c, 8)))) << 3)));
  /* 9f598: b #0x9f49c */
  goto L_9f49c;
L_9f59c:;
  /* 9f59c: cmp w9, #0x6e */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(110));
  /* 9f5a0: mov x8, x24 */
  ARC_X_W(c, 8, ARC_X_R(c, 24));
  /* 9f5a4: b.eq #0x9f5e8 */
  if (ARC_COND(c, 0)) goto L_9f5e8;
  /* 9f5a8: cmp w9, #0x6f */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(111));
  /* 9f5ac: mov x8, x25 */
  ARC_X_W(c, 8, ARC_X_R(c, 25));
  /* 9f5b0: b.eq #0x9f5e8 */
  if (ARC_COND(c, 0)) goto L_9f5e8;
  /* 9f5b4: cmp w9, #0x8d */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(141));
  /* 9f5b8: mov x8, x22 */
  ARC_X_W(c, 8, ARC_X_R(c, 22));
  /* 9f5bc: b.eq #0x9f5e8 */
  if (ARC_COND(c, 0)) goto L_9f5e8;
  /* 9f5c0: b #0x9f5dc */
  goto L_9f5dc;
L_9f5c4:;
  /* 9f5c4: cmp w9, #0x90 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(144));
  /* 9f5c8: mov x8, x25 */
  ARC_X_W(c, 8, ARC_X_R(c, 25));
  /* 9f5cc: b.eq #0x9f5e8 */
  if (ARC_COND(c, 0)) goto L_9f5e8;
  /* 9f5d0: cmp w9, #0x92 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(146));
  /* 9f5d4: mov x8, x23 */
  ARC_X_W(c, 8, ARC_X_R(c, 23));
  /* 9f5d8: b.eq #0x9f5e8 */
  if (ARC_COND(c, 0)) goto L_9f5e8;
L_9f5dc:;
  /* 9f5dc: cmp w11, #0x1c */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(28));
  /* 9f5e0: b.hi #0x9fc6c */
  if (ARC_COND(c, 8)) goto L_9fc6c;
  /* 9f5e4: add x8, x19, w11, uxtw #3 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ((uint64_t)(((uint64_t)(uint32_t)(ARC_W_R(c, 11)))) << 3)));
L_9f5e8:;
  /* 9f5e8: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 9f5ec: orr x9, x10, x12 */
  ARC_X_W(c, 9, (ARC_X_R(c, 10) | ARC_X_R(c, 12)));
  /* 9f5f0: add x8, x8, x9 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + ARC_X_R(c, 9)));
  /* 9f5f4: b #0x9f4a0 */
  goto L_9f4a0;
L_9f5f8:;
  /* 9f5f8: bti j */
  /* bti: no architectural effect here */
  /* 9f5fc: ldur x8, [x10, #1] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 10) + INT64_C(1))));
  /* 9f600: add x9, x10, #9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 10) + UINT64_C(9)));
  /* 9f604: b #0x9f908 */
  goto L_9f908;
L_9f608:;
  /* 9f608: bti j */
  /* bti: no architectural effect here */
  /* 9f60c: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 9f610: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 9f614: bl #0x9f258 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(652824));
  fn1_9f258(c);
  /* 9f618: ldur x10, [x29, #-8] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 29) + INT64_C(-8))));
  /* 9f61c: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* 9f620: mov x9, #-7 */
  ARC_X_W(c, 9, UINT64_C(18446744073709551609));
  /* 9f624: mov x11, x10 */
  ARC_X_W(c, 11, ARC_X_R(c, 10));
L_9f628:;
  /* 9f628: cmp x11, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 20));
  /* 9f62c: b.eq #0x9fc04 */
  if (ARC_COND(c, 0)) goto L_9fc04;
  /* 9f630: ldrb w12, [x11], #1 */
  { const uint64_t _a = ARC_X_R(c, 11);
    ARC_X_W(c, 11, ARC_X_R(c, 11) + INT64_C(1));
    ARC_W_W(c, 12, arc_ld8(_a));
  }
  /* 9f634: add x9, x9, #7 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(7)));
  /* 9f638: add x10, x10, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(1)));
  /* 9f63c: and x13, x12, #0x7f */
  ARC_X_W(c, 13, (ARC_X_R(c, 12) & UINT64_C(127)));
  /* 9f640: lsl x13, x13, x9 */
  ARC_X_W(c, 13, ((uint64_t)(ARC_X_R(c, 13)) << ((ARC_X_R(c, 9)) & 63)));
  /* 9f644: orr x8, x13, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 13) | ARC_X_R(c, 8)));
  /* 9f648: tbnz w12, #7, #0x9f628 */
  if (((ARC_W_R(c, 12)) >> 7 & 1) != 0) goto L_9f628;
  /* 9f64c: add w11, w9, #7 */
  ARC_W_W(c, 11, (ARC_W_R(c, 9) + UINT64_C(7)));
  /* 9f650: mov x13, #-1 */
  ARC_X_W(c, 13, UINT64_C(18446744073709551615));
  /* 9f654: cmp x9, #0x39 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(57));
  /* 9f658: mov w9, #0x3f */
  ARC_W_W(c, 9, UINT64_C(63));
  /* 9f65c: lsl x11, x13, x11 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 13)) << ((ARC_X_R(c, 11)) & 63)));
  /* 9f660: stur x10, [x29, #-8] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-8)), ARC_X_R(c, 10));
  /* 9f664: ccmp w12, w9, #0, lo */
  if (ARC_COND(c, 3)) { (void)arc_sub32(c, ARC_W_R(c, 12), ARC_W_R(c, 9)); }
  else { (c)->nf = 0; (c)->zf = 0;
          (c)->cf = 0; (c)->vf = 0; }
  /* 9f668: csel x9, x11, xzr, hi */
  ARC_X_W(c, 9, (ARC_COND(c, 8) ? (ARC_X_R(c, 11)) : ARC_X_R(c, 31)));
  /* 9f66c: cmp w0, #0x1d */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(29));
  /* 9f670: b.le #0x9fb00 */
  if (ARC_COND(c, 13)) goto L_9fb00;
  /* 9f674: cmp w0, #0x1f */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(31));
  /* 9f678: b.gt #0x9fb54 */
  if (ARC_COND(c, 12)) goto L_9fb54;
  /* 9f67c: cmp w0, #0x1e */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(30));
  /* 9f680: mov x10, x21 */
  ARC_X_W(c, 10, ARC_X_R(c, 21));
  /* 9f684: b.eq #0x9fb7c */
  if (ARC_COND(c, 0)) goto L_9fb7c;
  /* 9f688: cmp w0, #0x1f */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(31));
  /* 9f68c: mov x10, x24 */
  ARC_X_W(c, 10, ARC_X_R(c, 24));
  /* 9f690: b.eq #0x9fb7c */
  if (ARC_COND(c, 0)) goto L_9fb7c;
  /* 9f694: b #0x9fb6c */
  goto L_9fb6c;
L_9f698:;
  /* 9f698: bti j */
  /* bti: no architectural effect here */
  /* 9f69c: mov x8, x27 */
  ARC_X_W(c, 8, ARC_X_R(c, 27));
  /* 9f6a0: ldr x9, [x27] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 27)));
  /* 9f6a4: ldr x10, [x8, #-8]! */
  { const uint64_t _a = (ARC_X_R(c, 8) + INT64_C(-8));
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(-8));
    ARC_X_W(c, 10, arc_ld64(_a));
  }
  /* 9f6a8: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* 9f6ac: cset w9, lo */
  ARC_W_W(c, 9, (ARC_COND(c, 3) ? 1 : 0));
  /* 9f6b0: b #0x9fa64 */
  goto L_9fa64;
L_9f6b4:;
  /* 9f6b4: bti j */
  /* bti: no architectural effect here */
  /* 9f6b8: mov x8, x27 */
  ARC_X_W(c, 8, ARC_X_R(c, 27));
  /* 9f6bc: ldr x9, [x27] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 27)));
  /* 9f6c0: ldr x10, [x8, #-8]! */
  { const uint64_t _a = (ARC_X_R(c, 8) + INT64_C(-8));
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(-8));
    ARC_X_W(c, 10, arc_ld64(_a));
  }
  /* 9f6c4: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* 9f6c8: cset w9, ls */
  ARC_W_W(c, 9, (ARC_COND(c, 9) ? 1 : 0));
  /* 9f6cc: b #0x9fa64 */
  goto L_9fa64;
L_9f6d0:;
  /* 9f6d0: bti j */
  /* bti: no architectural effect here */
  /* 9f6d4: mov x8, x27 */
  ARC_X_W(c, 8, ARC_X_R(c, 27));
  /* 9f6d8: ldr x9, [x27] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 27)));
  /* 9f6dc: ldr x10, [x8, #-8]! */
  { const uint64_t _a = (ARC_X_R(c, 8) + INT64_C(-8));
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(-8));
    ARC_X_W(c, 10, arc_ld64(_a));
  }
  /* 9f6e0: sdiv x11, x10, x9 */
  ARC_X_W(c, 11, ((int64_t)(ARC_X_R(c, 9)) == 0 ? 0 : ((int64_t)(ARC_X_R(c, 10)) / (int64_t)(ARC_X_R(c, 9)))));
  /* 9f6e4: msub x9, x11, x9, x10 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 10)) - ((uint64_t)(ARC_X_R(c, 11)) * (uint64_t)(ARC_X_R(c, 9)))));
  /* 9f6e8: b #0x9fa64 */
  goto L_9fa64;
L_9f6ec:;
  /* 9f6ec: bti j */
  /* bti: no architectural effect here */
  /* 9f6f0: mov x8, x27 */
  ARC_X_W(c, 8, ARC_X_R(c, 27));
  /* 9f6f4: ldr x9, [x27] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 27)));
  /* 9f6f8: ldr x10, [x8, #-8]! */
  { const uint64_t _a = (ARC_X_R(c, 8) + INT64_C(-8));
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(-8));
    ARC_X_W(c, 10, arc_ld64(_a));
  }
  /* 9f6fc: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* 9f700: cset w9, eq */
  ARC_W_W(c, 9, (ARC_COND(c, 0) ? 1 : 0));
  /* 9f704: b #0x9fa64 */
  goto L_9fa64;
L_9f708:;
  /* 9f708: bti j */
  /* bti: no architectural effect here */
  /* 9f70c: ldursh x8, [x10, #1] */
  ARC_X_W(c, 8, ((int64_t)(int16_t)arc_ld16((ARC_X_R(c, 10) + INT64_C(1)))));
  /* 9f710: add x9, x10, #3 */
  ARC_X_W(c, 9, (ARC_X_R(c, 10) + UINT64_C(3)));
  /* 9f714: b #0x9f908 */
  goto L_9f908;
L_9f718:;
  /* 9f718: bti j */
  /* bti: no architectural effect here */
  /* 9f71c: ldr x11, [x27], #0xfffffffffffffff8 */
  { const uint64_t _a = ARC_X_R(c, 27);
    ARC_X_W(c, 27, ARC_X_R(c, 27) + INT64_C(-8));
    ARC_X_W(c, 11, arc_ld64(_a));
  }
  /* 9f720: ldursh x8, [x10, #1] */
  ARC_X_W(c, 8, ((int64_t)(int16_t)arc_ld16((ARC_X_R(c, 10) + INT64_C(1)))));
  /* 9f724: add x9, x10, #3 */
  ARC_X_W(c, 9, (ARC_X_R(c, 10) + UINT64_C(3)));
  /* 9f728: stur x9, [x29, #-8] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-8)), ARC_X_R(c, 9));
  /* 9f72c: cbz x11, #0x9f4a4 */
  if ((ARC_X_R(c, 11)) == 0) goto L_9f4a4;
  /* 9f730: add x8, x9, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) + ARC_X_R(c, 8)));
  /* 9f734: stur x8, [x29, #-8] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-8)), ARC_X_R(c, 8));
  /* 9f738: b #0x9f4a4 */
  goto L_9f4a4;
L_9f73c:;
  /* 9f73c: bti j */
  /* bti: no architectural effect here */
  /* 9f740: mov x8, x27 */
  ARC_X_W(c, 8, ARC_X_R(c, 27));
  /* 9f744: ldr x9, [x27] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 27)));
  /* 9f748: ldr x10, [x8, #-8]! */
  { const uint64_t _a = (ARC_X_R(c, 8) + INT64_C(-8));
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(-8));
    ARC_X_W(c, 10, arc_ld64(_a));
  }
  /* 9f74c: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* 9f750: cset w9, hs */
  ARC_W_W(c, 9, (ARC_COND(c, 2) ? 1 : 0));
  /* 9f754: b #0x9fa64 */
  goto L_9fa64;
L_9f758:;
  /* 9f758: bti j */
  /* bti: no architectural effect here */
  /* 9f75c: mov x9, xzr */
  ARC_X_W(c, 9, ARC_X_R(c, 31));
  /* 9f760: mov x10, #-7 */
  ARC_X_W(c, 10, UINT64_C(18446744073709551609));
  /* 9f764: mov x11, x8 */
  ARC_X_W(c, 11, ARC_X_R(c, 8));
L_9f768:;
  /* 9f768: cmp x11, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 20));
  /* 9f76c: b.eq #0x9fc38 */
  if (ARC_COND(c, 0)) goto L_9fc38;
  /* 9f770: ldrb w12, [x11], #1 */
  { const uint64_t _a = ARC_X_R(c, 11);
    ARC_X_W(c, 11, ARC_X_R(c, 11) + INT64_C(1));
    ARC_W_W(c, 12, arc_ld8(_a));
  }
  /* 9f774: add x10, x10, #7 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(7)));
  /* 9f778: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* 9f77c: and x13, x12, #0x7f */
  ARC_X_W(c, 13, (ARC_X_R(c, 12) & UINT64_C(127)));
  /* 9f780: lsl x13, x13, x10 */
  ARC_X_W(c, 13, ((uint64_t)(ARC_X_R(c, 13)) << ((ARC_X_R(c, 10)) & 63)));
  /* 9f784: orr x9, x13, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 13) | ARC_X_R(c, 9)));
  /* 9f788: tbnz w12, #7, #0x9f768 */
  if (((ARC_W_R(c, 12)) >> 7 & 1) != 0) goto L_9f768;
  /* 9f78c: add w11, w10, #7 */
  ARC_W_W(c, 11, (ARC_W_R(c, 10) + UINT64_C(7)));
  /* 9f790: mov x13, #-1 */
  ARC_X_W(c, 13, UINT64_C(18446744073709551615));
  /* 9f794: cmp x10, #0x39 */
  (void)arc_sub64(c, ARC_X_R(c, 10), UINT64_C(57));
  /* 9f798: mov w10, #0x3f */
  ARC_W_W(c, 10, UINT64_C(63));
  /* 9f79c: lsl x11, x13, x11 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 13)) << ((ARC_X_R(c, 11)) & 63)));
  /* 9f7a0: stur x8, [x29, #-8] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-8)), ARC_X_R(c, 8));
  /* 9f7a4: ccmp w12, w10, #0, lo */
  if (ARC_COND(c, 3)) { (void)arc_sub32(c, ARC_W_R(c, 12), ARC_W_R(c, 10)); }
  else { (c)->nf = 0; (c)->zf = 0;
          (c)->cf = 0; (c)->vf = 0; }
  /* 9f7a8: csel x10, x11, xzr, hi */
  ARC_X_W(c, 10, (ARC_COND(c, 8) ? (ARC_X_R(c, 11)) : ARC_X_R(c, 31)));
  /* 9f7ac: orr x9, x9, x10 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) | ARC_X_R(c, 10)));
  /* 9f7b0: str x9, [x27, #8]! */
  { const uint64_t _a = (ARC_X_R(c, 27) + INT64_C(8));
    ARC_X_W(c, 27, ARC_X_R(c, 27) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 9));
  }
  /* 9f7b4: b #0x9f4a4 */
  goto L_9f4a4;
L_9f7b8:;
  /* 9f7b8: bti j */
  /* bti: no architectural effect here */
  /* 9f7bc: mov x8, x27 */
  ARC_X_W(c, 8, ARC_X_R(c, 27));
  /* 9f7c0: ldr x9, [x27] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 27)));
  /* 9f7c4: ldr x10, [x8, #-8]! */
  { const uint64_t _a = (ARC_X_R(c, 8) + INT64_C(-8));
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(-8));
    ARC_X_W(c, 10, arc_ld64(_a));
  }
  /* 9f7c8: and x9, x10, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 10) & ARC_X_R(c, 9)));
  /* 9f7cc: b #0x9fa64 */
  goto L_9fa64;
L_9f7d0:;
  /* 9f7d0: bti j */
  /* bti: no architectural effect here */
  /* 9f7d4: mov x8, x27 */
  ARC_X_W(c, 8, ARC_X_R(c, 27));
  /* 9f7d8: ldr x9, [x27] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 27)));
  /* 9f7dc: ldr x10, [x8, #-8]! */
  { const uint64_t _a = (ARC_X_R(c, 8) + INT64_C(-8));
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(-8));
    ARC_X_W(c, 10, arc_ld64(_a));
  }
  /* 9f7e0: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* 9f7e4: cset w9, hi */
  ARC_W_W(c, 9, (ARC_COND(c, 8) ? 1 : 0));
  /* 9f7e8: b #0x9fa64 */
  goto L_9fa64;
L_9f7ec:;
  /* 9f7ec: bti j */
  /* bti: no architectural effect here */
  /* 9f7f0: ldursw x8, [x10, #1] */
  ARC_X_W(c, 8, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 10) + INT64_C(1)))));
  /* 9f7f4: add x9, x10, #5 */
  ARC_X_W(c, 9, (ARC_X_R(c, 10) + UINT64_C(5)));
  /* 9f7f8: b #0x9f908 */
  goto L_9f908;
L_9f7fc:;
  /* 9f7fc: bti j */
  /* bti: no architectural effect here */
  /* 9f800: mov x8, x27 */
  ARC_X_W(c, 8, ARC_X_R(c, 27));
  /* 9f804: ldr x9, [x27] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 27)));
  /* 9f808: ldr x10, [x8, #-8]! */
  { const uint64_t _a = (ARC_X_R(c, 8) + INT64_C(-8));
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(-8));
    ARC_X_W(c, 10, arc_ld64(_a));
  }
  /* 9f80c: eor x9, x10, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 10) ^ ARC_X_R(c, 9)));
  /* 9f810: b #0x9fa64 */
  goto L_9fa64;
L_9f814:;
  /* 9f814: bti j */
  /* bti: no architectural effect here */
  /* 9f818: ldr x8, [x27] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 27)));
  /* 9f81c: tbz x8, #0x3f, #0x9f4a4 */
  if (((ARC_X_R(c, 8)) >> 63 & 1) == 0) goto L_9f4a4;
  /* 9f820: b #0x9fa40 */
  goto L_9fa40;
L_9f824:;
  /* 9f824: bti j */
  /* bti: no architectural effect here */
  /* 9f828: ldrsb x8, [x10, #1] */
  ARC_X_W(c, 8, ((int64_t)(int8_t)arc_ld8((ARC_X_R(c, 10) + INT64_C(1)))));
  /* 9f82c: b #0x9f86c */
  goto L_9f86c;
L_9f830:;
  /* 9f830: bti j */
  /* bti: no architectural effect here */
  /* 9f834: ldr x8, [x27] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 27)));
  /* 9f838: b #0x9f4a0 */
  goto L_9f4a0;
L_9f83c:;
  /* 9f83c: bti j */
  /* bti: no architectural effect here */
  /* 9f840: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 9f844: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 9f848: bl #0x9f258 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(653388));
  fn1_9f258(c);
  /* 9f84c: str x0, [x27, #8]! */
  { const uint64_t _a = (ARC_X_R(c, 27) + INT64_C(8));
    ARC_X_W(c, 27, ARC_X_R(c, 27) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 0));
  }
  /* 9f850: b #0x9f4a4 */
  goto L_9f4a4;
L_9f854:;
  /* 9f854: bti j */
  /* bti: no architectural effect here */
  /* 9f858: ldur w8, [x10, #1] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 10) + INT64_C(1))));
  /* 9f85c: add x9, x10, #5 */
  ARC_X_W(c, 9, (ARC_X_R(c, 10) + UINT64_C(5)));
  /* 9f860: b #0x9f908 */
  goto L_9f908;
L_9f864:;
  /* 9f864: bti j */
  /* bti: no architectural effect here */
  /* 9f868: ldrb w8, [x10, #1] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 10) + INT64_C(1))));
L_9f86c:;
  /* 9f86c: add x9, x10, #2 */
  ARC_X_W(c, 9, (ARC_X_R(c, 10) + UINT64_C(2)));
  /* 9f870: b #0x9f908 */
  goto L_9f908;
L_9f874:;
  /* 9f874: bti j */
  /* bti: no architectural effect here */
  /* 9f878: sub x27, x27, #8 */
  ARC_X_W(c, 27, (ARC_X_R(c, 27) - UINT64_C(8)));
  /* 9f87c: b #0x9f4a4 */
  goto L_9f4a4;
L_9f880:;
  /* 9f880: bti j */
  /* bti: no architectural effect here */
  /* 9f884: ldurh w8, [x10, #1] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 10) + INT64_C(1))));
  /* 9f888: add x9, x10, #3 */
  ARC_X_W(c, 9, (ARC_X_R(c, 10) + UINT64_C(3)));
  /* 9f88c: b #0x9f908 */
  goto L_9f908;
L_9f890:;
  /* 9f890: bti j */
  /* bti: no architectural effect here */
  /* 9f894: ldr x8, [x27] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 27)));
L_9f898:;
  /* 9f898: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 9f89c: str x8, [x27] */
  arc_st64(ARC_X_R(c, 27), ARC_X_R(c, 8));
  /* 9f8a0: b #0x9f4a4 */
  goto L_9f4a4;
L_9f8a4:;
  /* 9f8a4: bti j */
  /* bti: no architectural effect here */
  /* 9f8a8: ldur q0, [x27, #-0x10] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 27) + INT64_C(-16))), arc_ld64((ARC_X_R(c, 27) + INT64_C(-16)) + 8));
  /* 9f8ac: ldr x8, [x27] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 27)));
  /* 9f8b0: stur q0, [x27, #-8] */
  arc_st64((ARC_X_R(c, 27) + INT64_C(-8)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 27) + INT64_C(-8)) + 8, (c)->q[0].u64[1]);
  /* 9f8b4: stur x8, [x27, #-0x10] */
  arc_st64((ARC_X_R(c, 27) + INT64_C(-16)), ARC_X_R(c, 8));
  /* 9f8b8: b #0x9f4a4 */
  goto L_9f4a4;
L_9f8bc:;
  /* 9f8bc: bti j */
  /* bti: no architectural effect here */
  /* 9f8c0: mov x8, x27 */
  ARC_X_W(c, 8, ARC_X_R(c, 27));
  /* 9f8c4: ldr x9, [x27] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 27)));
  /* 9f8c8: ldr x10, [x8, #-8]! */
  { const uint64_t _a = (ARC_X_R(c, 8) + INT64_C(-8));
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(-8));
    ARC_X_W(c, 10, arc_ld64(_a));
  }
  /* 9f8cc: sdiv x9, x10, x9 */
  ARC_X_W(c, 9, ((int64_t)(ARC_X_R(c, 9)) == 0 ? 0 : ((int64_t)(ARC_X_R(c, 10)) / (int64_t)(ARC_X_R(c, 9)))));
  /* 9f8d0: b #0x9fa64 */
  goto L_9fa64;
L_9f8d4:;
  /* 9f8d4: bti j */
  /* bti: no architectural effect here */
  /* 9f8d8: ldur x8, [x27, #-8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 27) + INT64_C(-8))));
  /* 9f8dc: b #0x9f4a0 */
  goto L_9f4a0;
L_9f8e0:;
  /* 9f8e0: bti j */
  /* bti: no architectural effect here */
  /* 9f8e4: ldur q0, [x27, #-8] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 27) + INT64_C(-8))), arc_ld64((ARC_X_R(c, 27) + INT64_C(-8)) + 8));
  /* 9f8e8: ext v0.16b, v0.16b, v0.16b, #8 */
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
  /* 9f8ec: stur q0, [x27, #-8] */
  arc_st64((ARC_X_R(c, 27) + INT64_C(-8)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 27) + INT64_C(-8)) + 8, (c)->q[0].u64[1]);
  /* 9f8f0: b #0x9f4a4 */
  goto L_9f4a4;
L_9f8f4:;
  /* 9f8f4: bti j */
  /* bti: no architectural effect here */
  /* 9f8f8: ldrb w8, [x10, #1] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 10) + INT64_C(1))));
  /* 9f8fc: add x9, x10, #2 */
  ARC_X_W(c, 9, (ARC_X_R(c, 10) + UINT64_C(2)));
  /* 9f900: sub x8, x27, x8, lsl #3 */
  ARC_X_W(c, 8, (ARC_X_R(c, 27) - ((uint64_t)(ARC_X_R(c, 8)) << 3)));
  /* 9f904: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
L_9f908:;
  /* 9f908: stur x9, [x29, #-8] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-8)), ARC_X_R(c, 9));
  /* 9f90c: b #0x9f4a0 */
  goto L_9f4a0;
L_9f910:;
  /* 9f910: bti j */
  /* bti: no architectural effect here */
  /* 9f914: ldr x8, [x27] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 27)));
  /* 9f918: mvn x8, x8 */
  ARC_X_W(c, 8, (~(uint64_t)(ARC_X_R(c, 8))));
  /* 9f91c: str x8, [x27] */
  arc_st64(ARC_X_R(c, 27), ARC_X_R(c, 8));
  /* 9f920: b #0x9f4a4 */
  goto L_9f4a4;
L_9f924:;
  /* 9f924: bti j */
  /* bti: no architectural effect here */
  /* 9f928: mov x8, x27 */
  ARC_X_W(c, 8, ARC_X_R(c, 27));
  /* 9f92c: ldr x9, [x27] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 27)));
  /* 9f930: ldr x10, [x8, #-8]! */
  { const uint64_t _a = (ARC_X_R(c, 8) + INT64_C(-8));
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(-8));
    ARC_X_W(c, 10, arc_ld64(_a));
  }
  /* 9f934: lsl x9, x10, x9 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 10)) << ((ARC_X_R(c, 9)) & 63)));
  /* 9f938: b #0x9fa64 */
  goto L_9fa64;
L_9f93c:;
  /* 9f93c: bti j */
  /* bti: no architectural effect here */
  /* 9f940: mov x8, x27 */
  ARC_X_W(c, 8, ARC_X_R(c, 27));
  /* 9f944: ldr x9, [x27] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 27)));
  /* 9f948: ldr x10, [x8, #-8]! */
  { const uint64_t _a = (ARC_X_R(c, 8) + INT64_C(-8));
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(-8));
    ARC_X_W(c, 10, arc_ld64(_a));
  }
  /* 9f94c: lsr x9, x10, x9 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 10)) >> ((ARC_X_R(c, 9)) & 63)));
  /* 9f950: b #0x9fa64 */
  goto L_9fa64;
L_9f954:;
  /* 9f954: bti j */
  /* bti: no architectural effect here */
  /* 9f958: mov x8, x27 */
  ARC_X_W(c, 8, ARC_X_R(c, 27));
  /* 9f95c: ldr x9, [x27] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 27)));
  /* 9f960: ldr x10, [x8, #-8]! */
  { const uint64_t _a = (ARC_X_R(c, 8) + INT64_C(-8));
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(-8));
    ARC_X_W(c, 10, arc_ld64(_a));
  }
  /* 9f964: add x9, x10, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 10) + ARC_X_R(c, 9)));
  /* 9f968: b #0x9fa64 */
  goto L_9fa64;
L_9f96c:;
  /* 9f96c: bti j */
  /* bti: no architectural effect here */
  /* 9f970: add x8, x10, #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 10) + UINT64_C(2)));
  /* 9f974: stur x8, [x29, #-8] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-8)), ARC_X_R(c, 8));
  /* 9f978: ldr x8, [x27] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 27)));
  /* 9f97c: ldrb w9, [x10, #1] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 10) + INT64_C(1))));
  /* 9f980: cmp w9, #3 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(3));
  /* 9f984: b.gt #0x9fac4 */
  if (ARC_COND(c, 12)) goto L_9fac4;
  /* 9f988: cmp w9, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(1));
  /* 9f98c: b.eq #0x9fb8c */
  if (ARC_COND(c, 0)) goto L_9fb8c;
  /* 9f990: cmp w9, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(2));
  /* 9f994: b.ne #0x9fd48 */
  if (ARC_COND(c, 1)) goto L_9fd48;
  /* 9f998: ldrh w8, [x8] */
  ARC_W_W(c, 8, arc_ld16(ARC_X_R(c, 8)));
  /* 9f99c: str x8, [x27] */
  arc_st64(ARC_X_R(c, 27), ARC_X_R(c, 8));
  /* 9f9a0: b #0x9f4a4 */
  goto L_9f4a4;
L_9f9a4:;
  /* 9f9a4: bti j */
  /* bti: no architectural effect here */
  /* 9f9a8: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 9f9ac: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 9f9b0: bl #0x9f258 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(653748));
  fn1_9f258(c);
  /* 9f9b4: ldr x8, [x27] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 27)));
  /* 9f9b8: add x8, x8, x0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + ARC_X_R(c, 0)));
  /* 9f9bc: str x8, [x27] */
  arc_st64(ARC_X_R(c, 27), ARC_X_R(c, 8));
  /* 9f9c0: b #0x9f4a4 */
  goto L_9f4a4;
L_9f9c4:;
  /* 9f9c4: bti j */
  /* bti: no architectural effect here */
  /* 9f9c8: mov x8, x27 */
  ARC_X_W(c, 8, ARC_X_R(c, 27));
  /* 9f9cc: ldr x9, [x27] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 27)));
  /* 9f9d0: ldr x10, [x8, #-8]! */
  { const uint64_t _a = (ARC_X_R(c, 8) + INT64_C(-8));
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(-8));
    ARC_X_W(c, 10, arc_ld64(_a));
  }
  /* 9f9d4: asr x9, x10, x9 */
  ARC_X_W(c, 9, ((uint64_t)((int64_t)(ARC_X_R(c, 10)) >> ((ARC_X_R(c, 9)) & 63))));
  /* 9f9d8: b #0x9fa64 */
  goto L_9fa64;
L_9f9dc:;
  /* 9f9dc: bti j */
  /* bti: no architectural effect here */
  /* 9f9e0: ldr x8, [x27] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 27)));
  /* 9f9e4: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 9f9e8: str x8, [x27, #-8]! */
  { const uint64_t _a = (ARC_X_R(c, 27) + INT64_C(-8));
    ARC_X_W(c, 27, ARC_X_R(c, 27) + INT64_C(-8));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* 9f9ec: b #0x9f4a4 */
  goto L_9f4a4;
L_9f9f0:;
  /* 9f9f0: bti j */
  /* bti: no architectural effect here */
  /* 9f9f4: mov x8, x27 */
  ARC_X_W(c, 8, ARC_X_R(c, 27));
  /* 9f9f8: ldr x9, [x27] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 27)));
  /* 9f9fc: ldr x10, [x8, #-8]! */
  { const uint64_t _a = (ARC_X_R(c, 8) + INT64_C(-8));
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(-8));
    ARC_X_W(c, 10, arc_ld64(_a));
  }
  /* 9fa00: mul x9, x10, x9 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 10)) * (uint64_t)(ARC_X_R(c, 9))));
  /* 9fa04: b #0x9fa64 */
  goto L_9fa64;
L_9fa08:;
  /* 9fa08: bti j */
  /* bti: no architectural effect here */
  /* 9fa0c: mov x8, x27 */
  ARC_X_W(c, 8, ARC_X_R(c, 27));
  /* 9fa10: ldr x9, [x27] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 27)));
  /* 9fa14: ldr x10, [x8, #-8]! */
  { const uint64_t _a = (ARC_X_R(c, 8) + INT64_C(-8));
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(-8));
    ARC_X_W(c, 10, arc_ld64(_a));
  }
  /* 9fa18: sub x9, x10, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 10) - ARC_X_R(c, 9)));
  /* 9fa1c: b #0x9fa64 */
  goto L_9fa64;
L_9fa20:;
  /* 9fa20: bti j */
  /* bti: no architectural effect here */
  /* 9fa24: mov x8, x27 */
  ARC_X_W(c, 8, ARC_X_R(c, 27));
  /* 9fa28: ldr x9, [x27] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 27)));
  /* 9fa2c: ldr x10, [x8, #-8]! */
  { const uint64_t _a = (ARC_X_R(c, 8) + INT64_C(-8));
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(-8));
    ARC_X_W(c, 10, arc_ld64(_a));
  }
  /* 9fa30: orr x9, x10, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 10) | ARC_X_R(c, 9)));
  /* 9fa34: b #0x9fa64 */
  goto L_9fa64;
L_9fa38:;
  /* 9fa38: bti j */
  /* bti: no architectural effect here */
  /* 9fa3c: ldr x8, [x27] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 27)));
L_9fa40:;
  /* 9fa40: neg x8, x8 */
  ARC_X_W(c, 8, ((uint64_t)0 - (uint64_t)(ARC_X_R(c, 8))));
  /* 9fa44: str x8, [x27] */
  arc_st64(ARC_X_R(c, 27), ARC_X_R(c, 8));
  /* 9fa48: b #0x9f4a4 */
  goto L_9f4a4;
L_9fa4c:;
  /* 9fa4c: bti j */
  /* bti: no architectural effect here */
  /* 9fa50: mov x8, x27 */
  ARC_X_W(c, 8, ARC_X_R(c, 27));
  /* 9fa54: ldr x9, [x27] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 27)));
  /* 9fa58: ldr x10, [x8, #-8]! */
  { const uint64_t _a = (ARC_X_R(c, 8) + INT64_C(-8));
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(-8));
    ARC_X_W(c, 10, arc_ld64(_a));
  }
  /* 9fa5c: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* 9fa60: cset w9, ne */
  ARC_W_W(c, 9, (ARC_COND(c, 1) ? 1 : 0));
L_9fa64:;
  /* 9fa64: str x9, [x8] */
  arc_st64(ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 9fa68: mov x27, x8 */
  ARC_X_W(c, 27, ARC_X_R(c, 8));
  /* 9fa6c: b #0x9f4a4 */
  goto L_9f4a4;
L_9fa70:;
  /* 9fa70: bti j */
  /* bti: no architectural effect here */
  /* 9fa74: ldursh x8, [x10, #1] */
  ARC_X_W(c, 8, ((int64_t)(int16_t)arc_ld16((ARC_X_R(c, 10) + INT64_C(1)))));
  /* 9fa78: add x8, x10, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 10) + ARC_X_R(c, 8)));
  /* 9fa7c: add x8, x8, #3 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3)));
  /* 9fa80: stur x8, [x29, #-8] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-8)), ARC_X_R(c, 8));
  /* 9fa84: b #0x9f4a4 */
  goto L_9f4a4;
L_9fa88:;
  /* 9fa88: bti j */
  /* bti: no architectural effect here */
  /* 9fa8c: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 9fa90: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 9fa94: bl #0x9f258 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(653976));
  fn1_9f258(c);
  /* 9fa98: cmp w0, #0x1d */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(29));
  /* 9fa9c: b.le #0x9fad8 */
  if (ARC_COND(c, 13)) goto L_9fad8;
  /* 9faa0: cmp w0, #0x1f */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(31));
  /* 9faa4: b.gt #0x9fb28 */
  if (ARC_COND(c, 12)) goto L_9fb28;
  /* 9faa8: cmp w0, #0x1e */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(30));
  /* 9faac: mov x8, x21 */
  ARC_X_W(c, 8, ARC_X_R(c, 21));
  /* 9fab0: b.eq #0x9f49c */
  if (ARC_COND(c, 0)) goto L_9f49c;
  /* 9fab4: cmp w0, #0x1f */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(31));
  /* 9fab8: mov x8, x24 */
  ARC_X_W(c, 8, ARC_X_R(c, 24));
  /* 9fabc: b.eq #0x9f49c */
  if (ARC_COND(c, 0)) goto L_9f49c;
  /* 9fac0: b #0x9fb40 */
  goto L_9fb40;
L_9fac4:;
  /* 9fac4: cmp w9, #4 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(4));
  /* 9fac8: b.eq #0x9fb98 */
  if (ARC_COND(c, 0)) goto L_9fb98;
  /* 9facc: cmp w9, #8 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(8));
  /* 9fad0: b.eq #0x9f898 */
  if (ARC_COND(c, 0)) goto L_9f898;
  /* 9fad4: b #0x9fd48 */
  goto L_9fd48;
L_9fad8:;
  /* 9fad8: cmn w0, #2 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(2), 0);
  /* 9fadc: mov x8, x24 */
  ARC_X_W(c, 8, ARC_X_R(c, 24));
  /* 9fae0: b.eq #0x9f49c */
  if (ARC_COND(c, 0)) goto L_9f49c;
  /* 9fae4: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 9fae8: mov x8, x25 */
  ARC_X_W(c, 8, ARC_X_R(c, 25));
  /* 9faec: b.eq #0x9f49c */
  if (ARC_COND(c, 0)) goto L_9f49c;
  /* 9faf0: cmp w0, #0x1d */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(29));
  /* 9faf4: mov x8, x22 */
  ARC_X_W(c, 8, ARC_X_R(c, 22));
  /* 9faf8: b.eq #0x9f49c */
  if (ARC_COND(c, 0)) goto L_9f49c;
  /* 9fafc: b #0x9fb40 */
  goto L_9fb40;
L_9fb00:;
  /* 9fb00: cmn w0, #2 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(2), 0);
  /* 9fb04: mov x10, x24 */
  ARC_X_W(c, 10, ARC_X_R(c, 24));
  /* 9fb08: b.eq #0x9fb7c */
  if (ARC_COND(c, 0)) goto L_9fb7c;
  /* 9fb0c: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 9fb10: mov x10, x25 */
  ARC_X_W(c, 10, ARC_X_R(c, 25));
  /* 9fb14: b.eq #0x9fb7c */
  if (ARC_COND(c, 0)) goto L_9fb7c;
  /* 9fb18: cmp w0, #0x1d */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(29));
  /* 9fb1c: mov x10, x22 */
  ARC_X_W(c, 10, ARC_X_R(c, 22));
  /* 9fb20: b.eq #0x9fb7c */
  if (ARC_COND(c, 0)) goto L_9fb7c;
  /* 9fb24: b #0x9fb6c */
  goto L_9fb6c;
L_9fb28:;
  /* 9fb28: cmp w0, #0x20 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(32));
  /* 9fb2c: mov x8, x25 */
  ARC_X_W(c, 8, ARC_X_R(c, 25));
  /* 9fb30: b.eq #0x9f49c */
  if (ARC_COND(c, 0)) goto L_9f49c;
  /* 9fb34: cmp w0, #0x22 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(34));
  /* 9fb38: mov x8, x23 */
  ARC_X_W(c, 8, ARC_X_R(c, 23));
  /* 9fb3c: b.eq #0x9f49c */
  if (ARC_COND(c, 0)) goto L_9f49c;
L_9fb40:;
  /* 9fb40: cmp w0, #0x1c */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(28));
  /* 9fb44: b.hi #0x9fdb0 */
  if (ARC_COND(c, 8)) goto L_9fdb0;
  /* 9fb48: and x8, x0, #0x1f */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) & UINT64_C(31)));
  /* 9fb4c: add x8, x19, x8, lsl #3 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ((uint64_t)(ARC_X_R(c, 8)) << 3)));
  /* 9fb50: b #0x9f49c */
  goto L_9f49c;
L_9fb54:;
  /* 9fb54: cmp w0, #0x20 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(32));
  /* 9fb58: mov x10, x25 */
  ARC_X_W(c, 10, ARC_X_R(c, 25));
  /* 9fb5c: b.eq #0x9fb7c */
  if (ARC_COND(c, 0)) goto L_9fb7c;
  /* 9fb60: cmp w0, #0x22 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(34));
  /* 9fb64: mov x10, x23 */
  ARC_X_W(c, 10, ARC_X_R(c, 23));
  /* 9fb68: b.eq #0x9fb7c */
  if (ARC_COND(c, 0)) goto L_9fb7c;
L_9fb6c:;
  /* 9fb6c: cmp w0, #0x1c */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(28));
  /* 9fb70: b.hi #0x9fd7c */
  if (ARC_COND(c, 8)) goto L_9fd7c;
  /* 9fb74: and x10, x0, #0x1f */
  ARC_X_W(c, 10, (ARC_X_R(c, 0) & UINT64_C(31)));
  /* 9fb78: add x10, x19, x10, lsl #3 */
  ARC_X_W(c, 10, (ARC_X_R(c, 19) + ((uint64_t)(ARC_X_R(c, 10)) << 3)));
L_9fb7c:;
  /* 9fb7c: ldr x10, [x10] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 10)));
  /* 9fb80: orr x8, x8, x9 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) | ARC_X_R(c, 9)));
  /* 9fb84: add x8, x10, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 10) + ARC_X_R(c, 8)));
  /* 9fb88: b #0x9f4a0 */
  goto L_9f4a0;
L_9fb8c:;
  /* 9fb8c: ldrb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 9fb90: str x8, [x27] */
  arc_st64(ARC_X_R(c, 27), ARC_X_R(c, 8));
  /* 9fb94: b #0x9f4a4 */
  goto L_9f4a4;
L_9fb98:;
  /* 9fb98: ldr w8, [x8] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 8)));
  /* 9fb9c: str x8, [x27] */
  arc_st64(ARC_X_R(c, 27), ARC_X_R(c, 8));
  /* 9fba0: b #0x9f4a4 */
  goto L_9f4a4;
L_9fba4:;
  /* 9fba4: ldr x21, [x27] */
  ARC_X_W(c, 21, arc_ld64(ARC_X_R(c, 27)));
L_9fba8:;
  /* 9fba8: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 9fbac: add sp, sp, #0x330 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(816)));
  /* 9fbb0: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 9fbb4: ldp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 9fbb8: ldp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 9fbbc: ldp x26, x25, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* 9fbc0: ldp x28, x27, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* 9fbc4: ldp x29, x30, [sp], #0x60 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(96);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 9fbc8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 9fbcc: ret  */
  return;
L_9fbd0:;
  /* 9fbd0: adrp x19, #0x151000 */
  ARC_X_W(c, 19, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 9fbd4: nop  */
  /* nop: no architectural effect here */
  /* 9fbd8: adr x1, #0x4f83f */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(325695)));
  /* 9fbdc: ldr x19, [x19, #0x998] */
  ARC_X_W(c, 19, arc_ld64((ARC_X_R(c, 19) + INT64_C(2456))));
  /* 9fbe0: adrp x2, #0x51000 */
  ARC_X_W(c, 2, (arc_image_bases[1] + UINT64_C(331776)));
  /* 9fbe4: add x2, x2, #0x223 */
  ARC_X_W(c, 2, (ARC_X_R(c, 2) + UINT64_C(547)));
  /* 9fbe8: adrp x3, #0x50000 */
  ARC_X_W(c, 3, (arc_image_bases[1] + UINT64_C(327680)));
  /* 9fbec: add x3, x3, #0x5e0 */
  ARC_X_W(c, 3, (ARC_X_R(c, 3) + UINT64_C(1504)));
  /* 9fbf0: add x0, x19, #0x130 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(304)));
  /* 9fbf4: bl #0x144a38 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(654328));
  fn1_144a38(c);
  /* 9fbf8: add x0, x19, #0x130 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(304)));
  /* 9fbfc: bl #0x143730 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(654336));
  fn1_143730(c);
  /* 9fc00: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(654340));
  fn1_1427b8(c);
L_9fc04:;
  /* 9fc04: adrp x19, #0x151000 */
  ARC_X_W(c, 19, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 9fc08: nop  */
  /* nop: no architectural effect here */
  /* 9fc0c: adr x1, #0x4f83f */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(325695)));
  /* 9fc10: ldr x19, [x19, #0x998] */
  ARC_X_W(c, 19, arc_ld64((ARC_X_R(c, 19) + INT64_C(2456))));
  /* 9fc14: adrp x2, #0x51000 */
  ARC_X_W(c, 2, (arc_image_bases[1] + UINT64_C(331776)));
  /* 9fc18: add x2, x2, #0x223 */
  ARC_X_W(c, 2, (ARC_X_R(c, 2) + UINT64_C(547)));
  /* 9fc1c: adrp x3, #0x50000 */
  ARC_X_W(c, 3, (arc_image_bases[1] + UINT64_C(327680)));
  /* 9fc20: add x3, x3, #0x5e0 */
  ARC_X_W(c, 3, (ARC_X_R(c, 3) + UINT64_C(1504)));
  /* 9fc24: add x0, x19, #0x130 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(304)));
  /* 9fc28: bl #0x144a38 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(654380));
  fn1_144a38(c);
  /* 9fc2c: add x0, x19, #0x130 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(304)));
  /* 9fc30: bl #0x143730 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(654388));
  fn1_143730(c);
  /* 9fc34: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(654392));
  fn1_1427b8(c);
L_9fc38:;
  /* 9fc38: adrp x19, #0x151000 */
  ARC_X_W(c, 19, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 9fc3c: nop  */
  /* nop: no architectural effect here */
  /* 9fc40: adr x1, #0x4f83f */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(325695)));
  /* 9fc44: ldr x19, [x19, #0x998] */
  ARC_X_W(c, 19, arc_ld64((ARC_X_R(c, 19) + INT64_C(2456))));
  /* 9fc48: adrp x2, #0x51000 */
  ARC_X_W(c, 2, (arc_image_bases[1] + UINT64_C(331776)));
  /* 9fc4c: add x2, x2, #0x223 */
  ARC_X_W(c, 2, (ARC_X_R(c, 2) + UINT64_C(547)));
  /* 9fc50: adrp x3, #0x50000 */
  ARC_X_W(c, 3, (arc_image_bases[1] + UINT64_C(327680)));
  /* 9fc54: add x3, x3, #0x5e0 */
  ARC_X_W(c, 3, (ARC_X_R(c, 3) + UINT64_C(1504)));
  /* 9fc58: add x0, x19, #0x130 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(304)));
  /* 9fc5c: bl #0x144a38 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(654432));
  fn1_144a38(c);
  /* 9fc60: add x0, x19, #0x130 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(304)));
  /* 9fc64: bl #0x143730 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(654440));
  fn1_143730(c);
  /* 9fc68: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(654444));
  fn1_1427b8(c);
L_9fc6c:;
  /* 9fc6c: adrp x19, #0x151000 */
  ARC_X_W(c, 19, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 9fc70: nop  */
  /* nop: no architectural effect here */
  /* 9fc74: adr x1, #0x4f83f */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(325695)));
  /* 9fc78: ldr x19, [x19, #0x998] */
  ARC_X_W(c, 19, arc_ld64((ARC_X_R(c, 19) + INT64_C(2456))));
  /* 9fc7c: adrp x2, #0x50000 */
  ARC_X_W(c, 2, (arc_image_bases[1] + UINT64_C(327680)));
  /* 9fc80: add x2, x2, #0xbee */
  ARC_X_W(c, 2, (ARC_X_R(c, 2) + UINT64_C(3054)));
  /* 9fc84: adrp x3, #0x50000 */
  ARC_X_W(c, 3, (arc_image_bases[1] + UINT64_C(327680)));
  /* 9fc88: add x3, x3, #0x412 */
  ARC_X_W(c, 3, (ARC_X_R(c, 3) + UINT64_C(1042)));
  /* 9fc8c: add x0, x19, #0x130 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(304)));
  /* 9fc90: bl #0x144a38 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(654484));
  fn1_144a38(c);
  /* 9fc94: add x0, x19, #0x130 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(304)));
  /* 9fc98: bl #0x143730 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(654492));
  fn1_143730(c);
  /* 9fc9c: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(654496));
  fn1_1427b8(c);
L_9fca0:;
  /* 9fca0: bti j */
  /* bti: no architectural effect here */
  /* 9fca4: adrp x19, #0x151000 */
  ARC_X_W(c, 19, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 9fca8: nop  */
  /* nop: no architectural effect here */
  /* 9fcac: adr x1, #0x4f83f */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(325695)));
  /* 9fcb0: ldr x19, [x19, #0x998] */
  ARC_X_W(c, 19, arc_ld64((ARC_X_R(c, 19) + INT64_C(2456))));
  /* 9fcb4: adrp x2, #0x50000 */
  ARC_X_W(c, 2, (arc_image_bases[1] + UINT64_C(327680)));
  /* 9fcb8: add x2, x2, #0x776 */
  ARC_X_W(c, 2, (ARC_X_R(c, 2) + UINT64_C(1910)));
  /* 9fcbc: adrp x3, #0x51000 */
  ARC_X_W(c, 3, (arc_image_bases[1] + UINT64_C(331776)));
  /* 9fcc0: add x3, x3, #0x63b */
  ARC_X_W(c, 3, (ARC_X_R(c, 3) + UINT64_C(1595)));
  /* 9fcc4: add x0, x19, #0x130 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(304)));
  /* 9fcc8: bl #0x144a38 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(654540));
  fn1_144a38(c);
  /* 9fccc: add x0, x19, #0x130 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(304)));
  /* 9fcd0: bl #0x143730 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(654548));
  fn1_143730(c);
  /* 9fcd4: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(654552));
  fn1_1427b8(c);
L_9fcd8:;
  /* 9fcd8: bti j */
  /* bti: no architectural effect here */
  /* 9fcdc: adrp x19, #0x151000 */
  ARC_X_W(c, 19, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 9fce0: nop  */
  /* nop: no architectural effect here */
  /* 9fce4: adr x1, #0x4f83f */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(325695)));
  /* 9fce8: ldr x19, [x19, #0x998] */
  ARC_X_W(c, 19, arc_ld64((ARC_X_R(c, 19) + INT64_C(2456))));
  /* 9fcec: adrp x2, #0x50000 */
  ARC_X_W(c, 2, (arc_image_bases[1] + UINT64_C(327680)));
  /* 9fcf0: add x2, x2, #0x776 */
  ARC_X_W(c, 2, (ARC_X_R(c, 2) + UINT64_C(1910)));
  /* 9fcf4: adrp x3, #0x50000 */
  ARC_X_W(c, 3, (arc_image_bases[1] + UINT64_C(327680)));
  /* 9fcf8: add x3, x3, #0x5fd */
  ARC_X_W(c, 3, (ARC_X_R(c, 3) + UINT64_C(1533)));
  /* 9fcfc: add x0, x19, #0x130 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(304)));
  /* 9fd00: bl #0x144a38 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(654596));
  fn1_144a38(c);
  /* 9fd04: add x0, x19, #0x130 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(304)));
  /* 9fd08: bl #0x143730 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(654604));
  fn1_143730(c);
  /* 9fd0c: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(654608));
  fn1_1427b8(c);
L_9fd10:;
  /* 9fd10: bti j */
  /* bti: no architectural effect here */
  /* 9fd14: adrp x19, #0x151000 */
  ARC_X_W(c, 19, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 9fd18: nop  */
  /* nop: no architectural effect here */
  /* 9fd1c: adr x1, #0x4f83f */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(325695)));
  /* 9fd20: ldr x19, [x19, #0x998] */
  ARC_X_W(c, 19, arc_ld64((ARC_X_R(c, 19) + INT64_C(2456))));
  /* 9fd24: adrp x2, #0x50000 */
  ARC_X_W(c, 2, (arc_image_bases[1] + UINT64_C(327680)));
  /* 9fd28: add x2, x2, #0x776 */
  ARC_X_W(c, 2, (ARC_X_R(c, 2) + UINT64_C(1910)));
  /* 9fd2c: adrp x3, #0x52000 */
  ARC_X_W(c, 3, (arc_image_bases[1] + UINT64_C(335872)));
  /* 9fd30: add x3, x3, #0x299 */
  ARC_X_W(c, 3, (ARC_X_R(c, 3) + UINT64_C(665)));
  /* 9fd34: add x0, x19, #0x130 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(304)));
  /* 9fd38: bl #0x144a38 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(654652));
  fn1_144a38(c);
  /* 9fd3c: add x0, x19, #0x130 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(304)));
  /* 9fd40: bl #0x143730 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(654660));
  fn1_143730(c);
  /* 9fd44: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(654664));
  fn1_1427b8(c);
L_9fd48:;
  /* 9fd48: adrp x19, #0x151000 */
  ARC_X_W(c, 19, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 9fd4c: nop  */
  /* nop: no architectural effect here */
  /* 9fd50: adr x1, #0x4f83f */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(325695)));
  /* 9fd54: ldr x19, [x19, #0x998] */
  ARC_X_W(c, 19, arc_ld64((ARC_X_R(c, 19) + INT64_C(2456))));
  /* 9fd58: adrp x2, #0x50000 */
  ARC_X_W(c, 2, (arc_image_bases[1] + UINT64_C(327680)));
  /* 9fd5c: add x2, x2, #0x776 */
  ARC_X_W(c, 2, (ARC_X_R(c, 2) + UINT64_C(1910)));
  /* 9fd60: adrp x3, #0x51000 */
  ARC_X_W(c, 3, (arc_image_bases[1] + UINT64_C(331776)));
  /* 9fd64: add x3, x3, #0x22e */
  ARC_X_W(c, 3, (ARC_X_R(c, 3) + UINT64_C(558)));
  /* 9fd68: add x0, x19, #0x130 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(304)));
  /* 9fd6c: bl #0x144a38 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(654704));
  fn1_144a38(c);
  /* 9fd70: add x0, x19, #0x130 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(304)));
  /* 9fd74: bl #0x143730 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(654712));
  fn1_143730(c);
  /* 9fd78: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(654716));
  fn1_1427b8(c);
L_9fd7c:;
  /* 9fd7c: adrp x19, #0x151000 */
  ARC_X_W(c, 19, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 9fd80: nop  */
  /* nop: no architectural effect here */
  /* 9fd84: adr x1, #0x4f83f */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(325695)));
  /* 9fd88: ldr x19, [x19, #0x998] */
  ARC_X_W(c, 19, arc_ld64((ARC_X_R(c, 19) + INT64_C(2456))));
  /* 9fd8c: adrp x2, #0x50000 */
  ARC_X_W(c, 2, (arc_image_bases[1] + UINT64_C(327680)));
  /* 9fd90: add x2, x2, #0xbee */
  ARC_X_W(c, 2, (ARC_X_R(c, 2) + UINT64_C(3054)));
  /* 9fd94: adrp x3, #0x50000 */
  ARC_X_W(c, 3, (arc_image_bases[1] + UINT64_C(327680)));
  /* 9fd98: add x3, x3, #0x412 */
  ARC_X_W(c, 3, (ARC_X_R(c, 3) + UINT64_C(1042)));
  /* 9fd9c: add x0, x19, #0x130 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(304)));
  /* 9fda0: bl #0x144a38 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(654756));
  fn1_144a38(c);
  /* 9fda4: add x0, x19, #0x130 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(304)));
  /* 9fda8: bl #0x143730 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(654764));
  fn1_143730(c);
  /* 9fdac: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(654768));
  fn1_1427b8(c);
L_9fdb0:;
  /* 9fdb0: adrp x19, #0x151000 */
  ARC_X_W(c, 19, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 9fdb4: nop  */
  /* nop: no architectural effect here */
  /* 9fdb8: adr x1, #0x4f83f */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(325695)));
  /* 9fdbc: ldr x19, [x19, #0x998] */
  ARC_X_W(c, 19, arc_ld64((ARC_X_R(c, 19) + INT64_C(2456))));
  /* 9fdc0: adrp x2, #0x50000 */
  ARC_X_W(c, 2, (arc_image_bases[1] + UINT64_C(327680)));
  /* 9fdc4: add x2, x2, #0xbee */
  ARC_X_W(c, 2, (ARC_X_R(c, 2) + UINT64_C(3054)));
  /* 9fdc8: adrp x3, #0x50000 */
  ARC_X_W(c, 3, (arc_image_bases[1] + UINT64_C(327680)));
  /* 9fdcc: add x3, x3, #0x412 */
  ARC_X_W(c, 3, (ARC_X_R(c, 3) + UINT64_C(1042)));
  /* 9fdd0: add x0, x19, #0x130 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(304)));
  /* 9fdd4: bl #0x144a38 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(654808));
  fn1_144a38(c);
  /* 9fdd8: add x0, x19, #0x130 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(304)));
  /* 9fddc: bl #0x143730 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(654816));
  fn1_143730(c);
  /* 9fde0: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(654820));
  fn1_1427b8(c);
}

void fn1_a20ec(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038591724));
  /* a20ec: bti c */
  /* bti: no architectural effect here */
  /* a20f0: ldr x0, [x0, #8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* a20f4: ret  */
  return;
}

void fn1_a52b0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038604464));
L_a52b0:;
  /* a52b0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* a52b4: sub sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(96)));
  /* a52b8: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* a52bc: str x23, [sp, #0x30] */
  arc_st64(((c)->sp + INT64_C(48)), ARC_X_R(c, 23));
  /* a52c0: stp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* a52c4: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* a52c8: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* a52cc: ldp x8, x10, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* a52d0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* a52d4: str xzr, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 31));
  /* a52d8: subs x9, x10, x8 */
  ARC_X_W(c, 9, arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 8)));
  /* a52dc: b.eq #0xa5cec */
  if (ARC_COND(c, 0)) goto L_a5cec;
  /* a52e0: ldrb w11, [x8] */
  ARC_W_W(c, 11, arc_ld8(ARC_X_R(c, 8)));
  /* a52e4: sub w12, w11, #0x41 */
  ARC_W_W(c, 12, (ARC_W_R(c, 11) - UINT64_C(65)));
  /* a52e8: cmp w12, #0x39 */
  (void)arc_sub32(c, ARC_W_R(c, 12), UINT64_C(57));
  /* a52ec: b.hi #0xa5cec */
  if (ARC_COND(c, 8)) goto L_a5cec;
  /* a52f0: nop  */
  /* nop: no architectural effect here */
  /* a52f4: adr x13, #0x5314e */
  ARC_X_W(c, 13, (arc_image_bases[1] + UINT64_C(340302)));
  /* a52f8: adr x14, #0xa5308 */
  ARC_X_W(c, 14, (arc_image_bases[1] + UINT64_C(676616)));
  /* a52fc: ldrh w15, [x13, x12, lsl #1] */
  ARC_W_W(c, 15, arc_ld16((ARC_X_R(c, 13) + ((uint64_t)(ARC_X_R(c, 12)) << 1))));
  /* a5300: add x14, x14, x15, lsl #2 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) + ((uint64_t)(ARC_X_R(c, 15)) << 2)));
  /* a5304: br x14 */
  switch (ARC_X_R(c, 14) - arc_image_bases[1]) {
    case UINT64_C(678140): goto L_a58fc;
    case UINT64_C(679148): goto L_a5cec;
    case UINT64_C(678564): goto L_a5aa4;
    case UINT64_C(679300): goto L_a5d84;
    case UINT64_C(679356): goto L_a5dbc;
    case UINT64_C(678608): goto L_a5ad0;
    case UINT64_C(676616): goto L_a5308;
    case UINT64_C(678652): goto L_a5afc;
    case UINT64_C(679504): goto L_a5e50;
    case UINT64_C(679964): goto L_a601c;
    case UINT64_C(679912): goto L_a5fe8;
    case UINT64_C(679124): goto L_a5cd4;
    case UINT64_C(677504): goto L_a5680;
    case UINT64_C(676780): goto L_a53ac;
    case UINT64_C(680136): goto L_a60c8;
    case UINT64_C(677644): goto L_a570c;
    case UINT64_C(680264): goto L_a6148;
    case UINT64_C(677884): goto L_a57fc;
    case UINT64_C(679544): goto L_a5e78;
    case UINT64_C(677392): goto L_a5610;
    case UINT64_C(678012): goto L_a587c;
    case UINT64_C(679376): goto L_a5dd0;
    case UINT64_C(678436): goto L_a5a24;
    case UINT64_C(679656): goto L_a5ee8;
    case UINT64_C(678196): goto L_a5934;
    case UINT64_C(677280): goto L_a55a0;
    case UINT64_C(677152): goto L_a5520;
    case UINT64_C(678308): goto L_a59a4;
    case UINT64_C(678720): goto L_a5b40;
    case UINT64_C(679784): goto L_a5f68;
    case UINT64_C(678848): goto L_a5bc0;
    case UINT64_C(676928): goto L_a5440;
    case UINT64_C(677756): goto L_a577c;
    case UINT64_C(680008): goto L_a6048;
    case UINT64_C(676800): goto L_a53c0;
    case UINT64_C(677040): goto L_a54b0;
    case UINT64_C(678492): goto L_a5a5c;
    case UINT64_C(678112): goto L_a58e0;
    case UINT64_C(677652): goto L_a5714;
    case UINT64_C(678568): goto L_a5aa8;
    case UINT64_C(678020): goto L_a5884;
    case UINT64_C(678792): goto L_a5b88;
    case UINT64_C(678292): goto L_a5994;
    case UINT64_C(678000): goto L_a5870;
    case UINT64_C(678644): goto L_a5af4;
    case UINT64_C(678696): goto L_a5b28;
    case UINT64_C(678820): goto L_a5ba4;
    case UINT64_C(678748): goto L_a5b5c;
    case UINT64_C(678180): goto L_a5924;
    case UINT64_C(678424): goto L_a5a18;
    case UINT64_C(678872): goto L_a5bd8;
    case UINT64_C(678248): goto L_a5968;
    case UINT64_C(678232): goto L_a5958;
    case UINT64_C(678440): goto L_a5a28;
    case UINT64_C(678212): goto L_a5944;
    case UINT64_C(677304): goto L_a55b8;
    case UINT64_C(678408): goto L_a5a08;
    case UINT64_C(678496): goto L_a5a60;
    case UINT64_C(678228): goto L_a5954;
    case UINT64_C(678728): goto L_a5b48;
    case UINT64_C(678804): goto L_a5b94;
    case UINT64_C(678576): goto L_a5ab0;
    case UINT64_C(679084): goto L_a5cac;
    case UINT64_C(678324): goto L_a59b4;
    case UINT64_C(678992): goto L_a5c50;
    case UINT64_C(678152): goto L_a5908;
    case UINT64_C(678300): goto L_a599c;
    case UINT64_C(676684): goto L_a534c;
    case UINT64_C(676776): goto L_a53a8;
    case UINT64_C(677724): goto L_a575c;
    case UINT64_C(677516): goto L_a568c;
    case UINT64_C(677676): goto L_a572c;
    case UINT64_C(677816): goto L_a57b8;
    case UINT64_C(677900): goto L_a580c;
    case UINT64_C(678188): goto L_a592c;
    case UINT64_C(677972): goto L_a5854;
    case UINT64_C(676984): goto L_a5478;
    case UINT64_C(677700): goto L_a5744;
    case UINT64_C(677628): goto L_a56fc;
    case UINT64_C(676964): goto L_a5464;
    case UINT64_C(677924): goto L_a5824;
    case UINT64_C(677948): goto L_a583c;
    case UINT64_C(678844): goto L_a5bbc;
    case UINT64_C(676916): goto L_a5434;
    case UINT64_C(678868): goto L_a5bd4;
    case UINT64_C(676940): goto L_a544c;
    case UINT64_C(677604): goto L_a56e4;
    case UINT64_C(678676): goto L_a5b14;
    case UINT64_C(680712): goto L_a6308;
    case UINT64_C(676680): goto L_a5348;
    case UINT64_C(676648): goto L_a5328;
    case UINT64_C(677448): goto L_a5648;
    case UINT64_C(679696): goto L_a5f10;
    case UINT64_C(676652): goto L_a532c;
    case UINT64_C(677292): goto L_a55ac;
    case UINT64_C(676796): goto L_a53bc;
    case UINT64_C(676792): goto L_a53b8;
    case UINT64_C(680724): goto L_a6314;
    case UINT64_C(678664): goto L_a5b08;
    default: break;
  }
  arc_dispatch(c, ARC_X_R(c, 14)); return;
L_a5308:;
  /* a5308: bti j */
  /* bti: no architectural effect here */
  /* a530c: cmp w11, #0x72 */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(114));
  /* a5310: cset w10, eq */
  ARC_W_W(c, 10, (ARC_COND(c, 0) ? 1 : 0));
  /* a5314: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* a5318: b.ls #0xa5338 */
  if (ARC_COND(c, 9)) goto L_a5338;
  /* a531c: ldrb w12, [x8, x10] */
  ARC_W_W(c, 12, arc_ld8((ARC_X_R(c, 8) + ARC_X_R(c, 10))));
  /* a5320: cmp w11, #0x72 */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(114));
  /* a5324: mov w11, #1 */
  ARC_W_W(c, 11, UINT64_C(1));
L_a5328:;
  /* a5328: cinc w11, w11, eq */
  ARC_W_W(c, 11, (ARC_COND(c, 0) ? (ARC_W_R(c, 11)) + 1 : (ARC_W_R(c, 11))));
L_a532c:;
  /* a532c: and w12, w12, #0xff */
  ARC_W_W(c, 12, (ARC_W_R(c, 12) & UINT64_C(255)));
  /* a5330: cmp w12, #0x56 */
  (void)arc_sub32(c, ARC_W_R(c, 12), UINT64_C(86));
  /* a5334: csel w10, w11, w10, eq */
  ARC_W_W(c, 10, (ARC_COND(c, 0) ? (ARC_W_R(c, 11)) : ARC_W_R(c, 10)));
L_a5338:;
  /* a5338: mov w11, w10 */
  ARC_W_W(c, 11, ARC_W_R(c, 10));
  /* a533c: cmp x9, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 11));
  /* a5340: b.ls #0xa5358 */
  if (ARC_COND(c, 9)) goto L_a5358;
  /* a5344: ldrb w11, [x8, x11] */
  ARC_W_W(c, 11, arc_ld8((ARC_X_R(c, 8) + ARC_X_R(c, 11))));
L_a5348:;
  /* a5348: and w11, w11, #0xff */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) & UINT64_C(255)));
L_a534c:;
  /* a534c: cmp w11, #0x4b */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(75));
  /* a5350: cinc w11, w10, eq */
  ARC_W_W(c, 11, (ARC_COND(c, 0) ? (ARC_W_R(c, 10)) + 1 : (ARC_W_R(c, 10))));
  /* a5354: mov w10, w11 */
  ARC_W_W(c, 10, ARC_W_R(c, 11));
L_a5358:;
  /* a5358: cmp x9, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 11));
  /* a535c: b.ls #0xa53ac */
  if (ARC_COND(c, 9)) goto L_a53ac;
  /* a5360: ldrb w11, [x8, x11] */
  ARC_W_W(c, 11, arc_ld8((ARC_X_R(c, 8) + ARC_X_R(c, 11))));
  /* a5364: cmp w11, #0x46 */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(70));
  /* a5368: b.eq #0xa5dbc */
  if (ARC_COND(c, 0)) goto L_a5dbc;
  /* a536c: cmp w11, #0x44 */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(68));
  /* a5370: b.ne #0xa53ac */
  if (ARC_COND(c, 1)) goto L_a53ac;
  /* a5374: mov w10, w10 */
  ARC_W_W(c, 10, ARC_W_R(c, 10));
  /* a5378: add x10, x10, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(1)));
  /* a537c: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* a5380: b.ls #0xa53ac */
  if (ARC_COND(c, 9)) goto L_a53ac;
  /* a5384: ldrb w8, [x8, x10] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 8) + ARC_X_R(c, 10))));
  /* a5388: sub w8, w8, #0x4f */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) - UINT64_C(79)));
  /* a538c: cmp w8, #0x29 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(41));
  /* a5390: b.hi #0xa53ac */
  if (ARC_COND(c, 8)) goto L_a53ac;
  /* a5394: mov w9, #1 */
  ARC_W_W(c, 9, UINT64_C(1));
  /* a5398: lsl x8, x9, x8 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 9)) << ((ARC_X_R(c, 8)) & 63)));
  /* a539c: mov x9, #1 */
  ARC_X_W(c, 9, UINT64_C(1));
  /* a53a0: movk x9, #0x301, lsl #32 */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(18446462603027808255)) | UINT64_C(3302829850624)));
  /* a53a4: tst x8, x9 */
  arc_flags_logical64(c, (uint64_t)(ARC_X_R(c, 8) & ARC_X_R(c, 9)));
L_a53a8:;
  /* a53a8: b.ne #0xa5dbc */
  if (ARC_COND(c, 1)) goto L_a5dbc;
L_a53ac:;
  /* a53ac: bti j */
  /* bti: no architectural effect here */
  /* a53b0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a53b4: bl #0xb93a0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(676792));
  fn1_b93a0(c);
L_a53b8:;
  /* a53b8: cbnz x0, #0xa5cfc */
  if ((ARC_X_R(c, 0)) != 0) goto L_a5cfc;
L_a53bc:;
  /* a53bc: b #0xa61c8 */
  goto L_a61c8;
L_a53c0:;
  /* a53c0: bti j */
  /* bti: no architectural effect here */
  /* a53c4: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* a53c8: ldr x20, [x19, #0x1330] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 19) + INT64_C(4912))));
  /* a53cc: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* a53d0: ldr x8, [x20, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(8))));
  /* a53d4: sub x9, x8, #0xfd0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4048)));
  /* a53d8: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* a53dc: b.hi #0xa53fc */
  if (ARC_COND(c, 8)) goto L_a53fc;
  /* a53e0: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* a53e4: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(676840));
  fn1_1428a8(c);
  /* a53e8: cbz x0, #0xa6a4c */
  if ((ARC_X_R(c, 0)) == 0) goto L_a6a4c;
  /* a53ec: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* a53f0: stp x20, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* a53f4: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* a53f8: str x0, [x19, #0x1330] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(4912)), ARC_X_R(c, 0));
L_a53fc:;
  /* a53fc: add x9, x8, #0x20 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(32)));
  /* a5400: add x0, x20, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + ARC_X_R(c, 8)));
  /* a5404: adrp x8, #0x149000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1347584)));
  /* a5408: add x8, x8, #0xc10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3088)));
  /* a540c: str x9, [x20, #8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(8)), ARC_X_R(c, 9));
  /* a5410: mov w10, #0x540 */
  ARC_W_W(c, 10, UINT64_C(1344));
  /* a5414: str x8, [x0, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* a5418: ldurh w8, [x0, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 0) + INT64_C(9))));
  /* a541c: mov w9, #8 */
  ARC_W_W(c, 9, UINT64_C(8));
  /* a5420: and w8, w8, #0xf000 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(61440)));
  /* a5424: strb w9, [x0, #8] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 9));
  /* a5428: adrp x9, #0x4f000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(323584)));
  /* a542c: add x9, x9, #0x6c3 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(1731)));
  /* a5430: orr w8, w8, w10 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | ARC_W_R(c, 10)));
L_a5434:;
  /* a5434: sturh w8, [x0, #9] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(9)), ARC_W_R(c, 8));
  /* a5438: mov w8, #0x12 */
  ARC_W_W(c, 8, UINT64_C(18));
  /* a543c: b #0xa61c4 */
  goto L_a61c4;
L_a5440:;
  /* a5440: bti j */
  /* bti: no architectural effect here */
  /* a5444: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* a5448: ldr x20, [x19, #0x1330] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 19) + INT64_C(4912))));
L_a544c:;
  /* a544c: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* a5450: ldr x8, [x20, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(8))));
  /* a5454: sub x9, x8, #0xfd0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4048)));
  /* a5458: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* a545c: b.hi #0xa547c */
  if (ARC_COND(c, 8)) goto L_a547c;
  /* a5460: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
L_a5464:;
  /* a5464: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(676968));
  fn1_1428a8(c);
  /* a5468: cbz x0, #0xa6a4c */
  if ((ARC_X_R(c, 0)) == 0) goto L_a6a4c;
  /* a546c: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* a5470: stp x20, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* a5474: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
L_a5478:;
  /* a5478: str x0, [x19, #0x1330] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(4912)), ARC_X_R(c, 0));
L_a547c:;
  /* a547c: add x9, x8, #0x20 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(32)));
  /* a5480: add x0, x20, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + ARC_X_R(c, 8)));
  /* a5484: adrp x8, #0x149000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1347584)));
  /* a5488: add x8, x8, #0xc10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3088)));
  /* a548c: str x9, [x20, #8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(8)), ARC_X_R(c, 9));
  /* a5490: mov w9, #8 */
  ARC_W_W(c, 9, UINT64_C(8));
  /* a5494: str x8, [x0, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* a5498: ldurh w8, [x0, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 0) + INT64_C(9))));
  /* a549c: mov w10, #0x540 */
  ARC_W_W(c, 10, UINT64_C(1344));
  /* a54a0: strb w9, [x0, #8] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 9));
  /* a54a4: adrp x9, #0x51000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(331776)));
  /* a54a8: add x9, x9, #0xf9b */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(3995)));
  /* a54ac: b #0xa61b4 */
  goto L_a61b4;
L_a54b0:;
  /* a54b0: bti j */
  /* bti: no architectural effect here */
  /* a54b4: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* a54b8: ldr x20, [x19, #0x1330] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 19) + INT64_C(4912))));
  /* a54bc: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* a54c0: ldr x8, [x20, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(8))));
  /* a54c4: sub x9, x8, #0xfd0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4048)));
  /* a54c8: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* a54cc: b.hi #0xa54ec */
  if (ARC_COND(c, 8)) goto L_a54ec;
  /* a54d0: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* a54d4: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(677080));
  fn1_1428a8(c);
  /* a54d8: cbz x0, #0xa6a4c */
  if ((ARC_X_R(c, 0)) == 0) goto L_a6a4c;
  /* a54dc: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* a54e0: stp x20, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* a54e4: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* a54e8: str x0, [x19, #0x1330] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(4912)), ARC_X_R(c, 0));
L_a54ec:;
  /* a54ec: add x9, x8, #0x20 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(32)));
  /* a54f0: add x0, x20, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + ARC_X_R(c, 8)));
  /* a54f4: adrp x8, #0x149000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1347584)));
  /* a54f8: add x8, x8, #0xc10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3088)));
  /* a54fc: str x9, [x20, #8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(8)), ARC_X_R(c, 9));
  /* a5500: mov w9, #8 */
  ARC_W_W(c, 9, UINT64_C(8));
  /* a5504: str x8, [x0, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* a5508: ldurh w8, [x0, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 0) + INT64_C(9))));
  /* a550c: mov w10, #0x540 */
  ARC_W_W(c, 10, UINT64_C(1344));
  /* a5510: strb w9, [x0, #8] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 9));
  /* a5514: adrp x9, #0x50000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(327680)));
  /* a5518: add x9, x9, #0x66c */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(1644)));
  /* a551c: b #0xa5a90 */
  goto L_a5a90;
L_a5520:;
  /* a5520: bti j */
  /* bti: no architectural effect here */
  /* a5524: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* a5528: ldr x20, [x19, #0x1330] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 19) + INT64_C(4912))));
  /* a552c: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* a5530: ldr x8, [x20, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(8))));
  /* a5534: sub x9, x8, #0xfd0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4048)));
  /* a5538: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* a553c: b.hi #0xa555c */
  if (ARC_COND(c, 8)) goto L_a555c;
  /* a5540: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* a5544: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(677192));
  fn1_1428a8(c);
  /* a5548: cbz x0, #0xa6a4c */
  if ((ARC_X_R(c, 0)) == 0) goto L_a6a4c;
  /* a554c: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* a5550: stp x20, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* a5554: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* a5558: str x0, [x19, #0x1330] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(4912)), ARC_X_R(c, 0));
L_a555c:;
  /* a555c: add x9, x8, #0x20 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(32)));
  /* a5560: add x0, x20, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + ARC_X_R(c, 8)));
  /* a5564: adrp x8, #0x149000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1347584)));
  /* a5568: add x8, x8, #0xc10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3088)));
  /* a556c: str x9, [x20, #8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(8)), ARC_X_R(c, 9));
  /* a5570: mov w10, #0x540 */
  ARC_W_W(c, 10, UINT64_C(1344));
  /* a5574: str x8, [x0, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* a5578: ldurh w8, [x0, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 0) + INT64_C(9))));
  /* a557c: mov w9, #8 */
  ARC_W_W(c, 9, UINT64_C(8));
  /* a5580: and w8, w8, #0xf000 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(61440)));
  /* a5584: strb w9, [x0, #8] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 9));
  /* a5588: orr w8, w8, w10 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | ARC_W_R(c, 10)));
  /* a558c: sturh w8, [x0, #9] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(9)), ARC_W_R(c, 8));
  /* a5590: adrp x8, #0x4f000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(323584)));
  /* a5594: add x8, x8, #0xa62 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2658)));
  /* a5598: stp x8, x9, [x0, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* a559c: b #0xa61c8 */
  goto L_a61c8;
L_a55a0:;
  /* a55a0: bti j */
  /* bti: no architectural effect here */
  /* a55a4: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* a55a8: ldr x20, [x19, #0x1330] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 19) + INT64_C(4912))));
L_a55ac:;
  /* a55ac: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* a55b0: ldr x8, [x20, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(8))));
  /* a55b4: sub x9, x8, #0xfd0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4048)));
L_a55b8:;
  /* a55b8: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* a55bc: b.hi #0xa55dc */
  if (ARC_COND(c, 8)) goto L_a55dc;
  /* a55c0: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* a55c4: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(677320));
  fn1_1428a8(c);
  /* a55c8: cbz x0, #0xa6a4c */
  if ((ARC_X_R(c, 0)) == 0) goto L_a6a4c;
  /* a55cc: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* a55d0: stp x20, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* a55d4: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* a55d8: str x0, [x19, #0x1330] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(4912)), ARC_X_R(c, 0));
L_a55dc:;
  /* a55dc: add x9, x8, #0x20 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(32)));
  /* a55e0: add x0, x20, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + ARC_X_R(c, 8)));
  /* a55e4: adrp x8, #0x149000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1347584)));
  /* a55e8: add x8, x8, #0xc10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3088)));
  /* a55ec: str x9, [x20, #8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(8)), ARC_X_R(c, 9));
  /* a55f0: mov w9, #8 */
  ARC_W_W(c, 9, UINT64_C(8));
  /* a55f4: str x8, [x0, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* a55f8: ldurh w8, [x0, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 0) + INT64_C(9))));
  /* a55fc: mov w10, #0x540 */
  ARC_W_W(c, 10, UINT64_C(1344));
  /* a5600: strb w9, [x0, #8] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 9));
  /* a5604: adrp x9, #0x51000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(331776)));
  /* a5608: add x9, x9, #0xfa0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(4000)));
  /* a560c: b #0xa5e3c */
  goto L_a5e3c;
L_a5610:;
  /* a5610: bti j */
  /* bti: no architectural effect here */
  /* a5614: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* a5618: ldr x20, [x19, #0x1330] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 19) + INT64_C(4912))));
  /* a561c: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* a5620: ldr x8, [x20, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(8))));
  /* a5624: sub x9, x8, #0xfd0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4048)));
  /* a5628: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* a562c: b.hi #0xa564c */
  if (ARC_COND(c, 8)) goto L_a564c;
  /* a5630: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* a5634: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(677432));
  fn1_1428a8(c);
  /* a5638: cbz x0, #0xa6a4c */
  if ((ARC_X_R(c, 0)) == 0) goto L_a6a4c;
  /* a563c: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* a5640: stp x20, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* a5644: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
L_a5648:;
  /* a5648: str x0, [x19, #0x1330] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(4912)), ARC_X_R(c, 0));
L_a564c:;
  /* a564c: add x9, x8, #0x20 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(32)));
  /* a5650: add x0, x20, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + ARC_X_R(c, 8)));
  /* a5654: adrp x8, #0x149000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1347584)));
  /* a5658: add x8, x8, #0xc10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3088)));
  /* a565c: str x9, [x20, #8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(8)), ARC_X_R(c, 9));
  /* a5660: mov w9, #8 */
  ARC_W_W(c, 9, UINT64_C(8));
  /* a5664: str x8, [x0, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* a5668: ldurh w8, [x0, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 0) + INT64_C(9))));
  /* a566c: mov w10, #0x540 */
  ARC_W_W(c, 10, UINT64_C(1344));
  /* a5670: strb w9, [x0, #8] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 9));
  /* a5674: adrp x9, #0x51000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(331776)));
  /* a5678: add x9, x9, #0xd04 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(3332)));
  /* a567c: b #0xa5bac */
  goto L_a5bac;
L_a5680:;
  /* a5680: bti j */
  /* bti: no architectural effect here */
  /* a5684: cmp x9, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(2));
  /* a5688: b.lo #0xa56b4 */
  if (ARC_COND(c, 3)) goto L_a56b4;
L_a568c:;
  /* a568c: ldrb w8, [x8, #1] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 8) + INT64_C(1))));
  /* a5690: sub w8, w8, #0x65 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) - UINT64_C(101)));
  /* a5694: cmp w8, #0x10 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(16));
  /* a5698: b.hi #0xa56b4 */
  if (ARC_COND(c, 8)) goto L_a56b4;
  /* a569c: mov w9, #1 */
  ARC_W_W(c, 9, UINT64_C(1));
  /* a56a0: lsl w8, w9, w8 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 9)) << ((ARC_W_R(c, 8)) & 31)));
  /* a56a4: mov w9, #0x4001 */
  ARC_W_W(c, 9, UINT64_C(16385));
  /* a56a8: movk w9, #1, lsl #16 */
  ARC_W_W(c, 9, ((ARC_W_R(c, 9) & UINT64_C(18446744069414649855)) | UINT64_C(65536)));
  /* a56ac: tst w8, w9 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & ARC_W_R(c, 9)));
  /* a56b0: b.ne #0xa5cec */
  if (ARC_COND(c, 1)) goto L_a5cec;
L_a56b4:;
  /* a56b4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a56b8: bl #0xa94fc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(677564));
  fn1_a94fc(c);
  /* a56bc: str x0, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 0));
  /* a56c0: cbz x0, #0xa61c8 */
  if ((ARC_X_R(c, 0)) == 0) goto L_a61c8;
  /* a56c4: ldrb w8, [x19, #0x308] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(776))));
  /* a56c8: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* a56cc: b.ne #0xa5cfc */
  if (ARC_COND(c, 1)) goto L_a5cfc;
  /* a56d0: ldp x8, x9, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* a56d4: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* a56d8: b.eq #0xa5cfc */
  if (ARC_COND(c, 0)) goto L_a5cfc;
  /* a56dc: ldrb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* a56e0: cmp w8, #0x49 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(73));
L_a56e4:;
  /* a56e4: b.ne #0xa5cfc */
  if (ARC_COND(c, 1)) goto L_a5cfc;
  /* a56e8: add x0, x19, #0x128 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(296)));
  /* a56ec: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* a56f0: bl #0xa7670 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(677620));
  fn1_a7670(c);
  /* a56f4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a56f8: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
L_a56fc:;
  /* a56fc: bl #0xa8f88 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(677632));
  fn1_a8f88(c);
  /* a5700: str x0, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 0));
  /* a5704: cbnz x0, #0xa6300 */
  if ((ARC_X_R(c, 0)) != 0) goto L_a6300;
  /* a5708: b #0xa61c8 */
  goto L_a61c8;
L_a570c:;
  /* a570c: bti j */
  /* bti: no architectural effect here */
  /* a5710: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
L_a5714:;
  /* a5714: ldr x20, [x19, #0x1330] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 19) + INT64_C(4912))));
  /* a5718: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* a571c: ldr x8, [x20, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(8))));
  /* a5720: sub x9, x8, #0xfd0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4048)));
  /* a5724: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* a5728: b.hi #0xa5748 */
  if (ARC_COND(c, 8)) goto L_a5748;
L_a572c:;
  /* a572c: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* a5730: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(677684));
  fn1_1428a8(c);
  /* a5734: cbz x0, #0xa6a4c */
  if ((ARC_X_R(c, 0)) == 0) goto L_a6a4c;
  /* a5738: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* a573c: stp x20, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* a5740: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
L_a5744:;
  /* a5744: str x0, [x19, #0x1330] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(4912)), ARC_X_R(c, 0));
L_a5748:;
  /* a5748: add x9, x8, #0x20 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(32)));
  /* a574c: add x0, x20, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + ARC_X_R(c, 8)));
  /* a5750: adrp x8, #0x149000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1347584)));
  /* a5754: add x8, x8, #0xc10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3088)));
  /* a5758: str x9, [x20, #8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(8)), ARC_X_R(c, 9));
L_a575c:;
  /* a575c: mov w9, #8 */
  ARC_W_W(c, 9, UINT64_C(8));
  /* a5760: str x8, [x0, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* a5764: ldurh w8, [x0, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 0) + INT64_C(9))));
  /* a5768: mov w10, #0x540 */
  ARC_W_W(c, 10, UINT64_C(1344));
  /* a576c: strb w9, [x0, #8] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 9));
  /* a5770: adrp x9, #0x4f000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(323584)));
  /* a5774: add x9, x9, #0xfd8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(4056)));
  /* a5778: b #0xa61b4 */
  goto L_a61b4;
L_a577c:;
  /* a577c: bti j */
  /* bti: no architectural effect here */
  /* a5780: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* a5784: ldr x20, [x19, #0x1330] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 19) + INT64_C(4912))));
  /* a5788: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* a578c: ldr x8, [x20, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(8))));
  /* a5790: sub x9, x8, #0xfd0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4048)));
  /* a5794: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* a5798: b.hi #0xa57b8 */
  if (ARC_COND(c, 8)) goto L_a57b8;
  /* a579c: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* a57a0: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(677796));
  fn1_1428a8(c);
  /* a57a4: cbz x0, #0xa6a4c */
  if ((ARC_X_R(c, 0)) == 0) goto L_a6a4c;
  /* a57a8: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* a57ac: stp x20, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* a57b0: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* a57b4: str x0, [x19, #0x1330] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(4912)), ARC_X_R(c, 0));
L_a57b8:;
  /* a57b8: add x9, x8, #0x20 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(32)));
  /* a57bc: add x0, x20, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + ARC_X_R(c, 8)));
  /* a57c0: adrp x8, #0x149000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1347584)));
  /* a57c4: add x8, x8, #0xc10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3088)));
  /* a57c8: str x9, [x20, #8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(8)), ARC_X_R(c, 9));
  /* a57cc: mov w10, #0x540 */
  ARC_W_W(c, 10, UINT64_C(1344));
  /* a57d0: str x8, [x0, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* a57d4: ldurh w8, [x0, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 0) + INT64_C(9))));
  /* a57d8: mov w9, #8 */
  ARC_W_W(c, 9, UINT64_C(8));
  /* a57dc: and w8, w8, #0xf000 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(61440)));
  /* a57e0: strb w9, [x0, #8] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 9));
  /* a57e4: adrp x9, #0x4f000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(323584)));
  /* a57e8: add x9, x9, #0x6a6 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(1702)));
  /* a57ec: orr w8, w8, w10 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | ARC_W_R(c, 10)));
  /* a57f0: sturh w8, [x0, #9] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(9)), ARC_W_R(c, 8));
  /* a57f4: mov w8, #7 */
  ARC_W_W(c, 8, UINT64_C(7));
  /* a57f8: b #0xa61c4 */
  goto L_a61c4;
L_a57fc:;
  /* a57fc: bti j */
  /* bti: no architectural effect here */
  /* a5800: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* a5804: ldr x20, [x19, #0x1330] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 19) + INT64_C(4912))));
  /* a5808: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
L_a580c:;
  /* a580c: ldr x8, [x20, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(8))));
  /* a5810: sub x9, x8, #0xfd0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4048)));
  /* a5814: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* a5818: b.hi #0xa5838 */
  if (ARC_COND(c, 8)) goto L_a5838;
  /* a581c: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* a5820: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(677924));
  fn1_1428a8(c);
L_a5824:;
  /* a5824: cbz x0, #0xa6a4c */
  if ((ARC_X_R(c, 0)) == 0) goto L_a6a4c;
  /* a5828: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* a582c: stp x20, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* a5830: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* a5834: str x0, [x19, #0x1330] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(4912)), ARC_X_R(c, 0));
L_a5838:;
  /* a5838: add x9, x8, #0x20 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(32)));
L_a583c:;
  /* a583c: add x0, x20, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + ARC_X_R(c, 8)));
  /* a5840: adrp x8, #0x149000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1347584)));
  /* a5844: add x8, x8, #0xc10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3088)));
  /* a5848: str x9, [x20, #8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(8)), ARC_X_R(c, 9));
  /* a584c: mov w10, #0x540 */
  ARC_W_W(c, 10, UINT64_C(1344));
  /* a5850: str x8, [x0, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 8));
  }
L_a5854:;
  /* a5854: ldurh w8, [x0, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 0) + INT64_C(9))));
  /* a5858: mov w9, #8 */
  ARC_W_W(c, 9, UINT64_C(8));
  /* a585c: and w8, w8, #0xf000 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(61440)));
  /* a5860: strb w9, [x0, #8] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 9));
  /* a5864: adrp x9, #0x50000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(327680)));
  /* a5868: add x9, x9, #0xb4b */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(2891)));
  /* a586c: orr w8, w8, w10 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | ARC_W_R(c, 10)));
L_a5870:;
  /* a5870: sturh w8, [x0, #9] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(9)), ARC_W_R(c, 8));
  /* a5874: mov w8, #6 */
  ARC_W_W(c, 8, UINT64_C(6));
  /* a5878: b #0xa61c4 */
  goto L_a61c4;
L_a587c:;
  /* a587c: bti j */
  /* bti: no architectural effect here */
  /* a5880: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
L_a5884:;
  /* a5884: ldr x20, [x19, #0x1330] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 19) + INT64_C(4912))));
  /* a5888: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* a588c: ldr x8, [x20, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(8))));
  /* a5890: sub x9, x8, #0xfd0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4048)));
  /* a5894: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* a5898: b.hi #0xa58b8 */
  if (ARC_COND(c, 8)) goto L_a58b8;
  /* a589c: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* a58a0: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(678052));
  fn1_1428a8(c);
  /* a58a4: cbz x0, #0xa6a4c */
  if ((ARC_X_R(c, 0)) == 0) goto L_a6a4c;
  /* a58a8: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* a58ac: stp x20, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* a58b0: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* a58b4: str x0, [x19, #0x1330] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(4912)), ARC_X_R(c, 0));
L_a58b8:;
  /* a58b8: add x9, x8, #0x20 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(32)));
  /* a58bc: add x0, x20, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + ARC_X_R(c, 8)));
  /* a58c0: adrp x8, #0x149000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1347584)));
  /* a58c4: add x8, x8, #0xc10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3088)));
  /* a58c8: str x9, [x20, #8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(8)), ARC_X_R(c, 9));
  /* a58cc: mov w10, #0x540 */
  ARC_W_W(c, 10, UINT64_C(1344));
  /* a58d0: str x8, [x0, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* a58d4: ldurh w8, [x0, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 0) + INT64_C(9))));
  /* a58d8: mov w9, #8 */
  ARC_W_W(c, 9, UINT64_C(8));
  /* a58dc: and w8, w8, #0xf000 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(61440)));
L_a58e0:;
  /* a58e0: strb w9, [x0, #8] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 9));
  /* a58e4: adrp x9, #0x4f000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(323584)));
  /* a58e8: add x9, x9, #0x8b5 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(2229)));
  /* a58ec: orr w8, w8, w10 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | ARC_W_R(c, 10)));
  /* a58f0: sturh w8, [x0, #9] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(9)), ARC_W_R(c, 8));
  /* a58f4: mov w8, #0xa */
  ARC_W_W(c, 8, UINT64_C(10));
  /* a58f8: b #0xa61c4 */
  goto L_a61c4;
L_a58fc:;
  /* a58fc: bti j */
  /* bti: no architectural effect here */
  /* a5900: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* a5904: str xzr, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 31));
L_a5908:;
  /* a5908: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* a590c: str x9, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 9));
  /* a5910: b.eq #0xa6230 */
  if (ARC_COND(c, 0)) goto L_a6230;
  /* a5914: ldrb w9, [x9] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 9)));
  /* a5918: sub w10, w9, #0x3a */
  ARC_W_W(c, 10, (ARC_W_R(c, 9) - UINT64_C(58)));
  /* a591c: cmn w10, #0xa */
  (void)arc_add32(c, ARC_W_R(c, 10), UINT64_C(10), 0);
  /* a5920: b.hs #0xa6260 */
  if (ARC_COND(c, 2)) goto L_a6260;
L_a5924:;
  /* a5924: cmp w9, #0x5f */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(95));
  /* a5928: b.ne #0xa6230 */
  if (ARC_COND(c, 1)) goto L_a6230;
L_a592c:;
  /* a592c: add x8, x8, #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2)));
  /* a5930: b #0xa629c */
  goto L_a629c;
L_a5934:;
  /* a5934: bti j */
  /* bti: no architectural effect here */
  /* a5938: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* a593c: ldr x20, [x19, #0x1330] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 19) + INT64_C(4912))));
  /* a5940: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
L_a5944:;
  /* a5944: ldr x8, [x20, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(8))));
  /* a5948: sub x9, x8, #0xfd0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4048)));
  /* a594c: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* a5950: b.hi #0xa5970 */
  if (ARC_COND(c, 8)) goto L_a5970;
L_a5954:;
  /* a5954: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
L_a5958:;
  /* a5958: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(678236));
  fn1_1428a8(c);
  /* a595c: cbz x0, #0xa6a4c */
  if ((ARC_X_R(c, 0)) == 0) goto L_a6a4c;
  /* a5960: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* a5964: stp x20, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
L_a5968:;
  /* a5968: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* a596c: str x0, [x19, #0x1330] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(4912)), ARC_X_R(c, 0));
L_a5970:;
  /* a5970: add x9, x8, #0x20 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(32)));
  /* a5974: add x0, x20, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + ARC_X_R(c, 8)));
  /* a5978: adrp x8, #0x149000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1347584)));
  /* a597c: add x8, x8, #0xc10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3088)));
  /* a5980: str x9, [x20, #8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(8)), ARC_X_R(c, 9));
  /* a5984: mov w9, #8 */
  ARC_W_W(c, 9, UINT64_C(8));
  /* a5988: str x8, [x0, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* a598c: ldurh w8, [x0, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 0) + INT64_C(9))));
  /* a5990: mov w10, #0x540 */
  ARC_W_W(c, 10, UINT64_C(1344));
L_a5994:;
  /* a5994: strb w9, [x0, #8] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 9));
  /* a5998: adrp x9, #0x4f000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(323584)));
L_a599c:;
  /* a599c: add x9, x9, #0x8b0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(2224)));
  /* a59a0: b #0xa61b4 */
  goto L_a61b4;
L_a59a4:;
  /* a59a4: bti j */
  /* bti: no architectural effect here */
  /* a59a8: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* a59ac: ldr x20, [x19, #0x1330] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 19) + INT64_C(4912))));
  /* a59b0: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
L_a59b4:;
  /* a59b4: ldr x8, [x20, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(8))));
  /* a59b8: sub x9, x8, #0xfd0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4048)));
  /* a59bc: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* a59c0: b.hi #0xa59e0 */
  if (ARC_COND(c, 8)) goto L_a59e0;
  /* a59c4: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* a59c8: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(678348));
  fn1_1428a8(c);
  /* a59cc: cbz x0, #0xa6a4c */
  if ((ARC_X_R(c, 0)) == 0) goto L_a6a4c;
  /* a59d0: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* a59d4: stp x20, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* a59d8: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* a59dc: str x0, [x19, #0x1330] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(4912)), ARC_X_R(c, 0));
L_a59e0:;
  /* a59e0: add x9, x8, #0x20 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(32)));
  /* a59e4: add x0, x20, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + ARC_X_R(c, 8)));
  /* a59e8: adrp x8, #0x149000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1347584)));
  /* a59ec: add x8, x8, #0xc10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3088)));
  /* a59f0: str x9, [x20, #8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(8)), ARC_X_R(c, 9));
  /* a59f4: mov w10, #0x540 */
  ARC_W_W(c, 10, UINT64_C(1344));
  /* a59f8: str x8, [x0, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* a59fc: ldurh w8, [x0, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 0) + INT64_C(9))));
  /* a5a00: mov w9, #8 */
  ARC_W_W(c, 9, UINT64_C(8));
  /* a5a04: and w8, w8, #0xf000 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(61440)));
L_a5a08:;
  /* a5a08: strb w9, [x0, #8] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 9));
  /* a5a0c: adrp x9, #0x50000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(327680)));
  /* a5a10: add x9, x9, #0x980 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(2432)));
  /* a5a14: orr w8, w8, w10 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | ARC_W_R(c, 10)));
L_a5a18:;
  /* a5a18: sturh w8, [x0, #9] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(9)), ARC_W_R(c, 8));
  /* a5a1c: mov w8, #0x11 */
  ARC_W_W(c, 8, UINT64_C(17));
  /* a5a20: b #0xa61c4 */
  goto L_a61c4;
L_a5a24:;
  /* a5a24: bti j */
  /* bti: no architectural effect here */
L_a5a28:;
  /* a5a28: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* a5a2c: ldr x20, [x19, #0x1330] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 19) + INT64_C(4912))));
  /* a5a30: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* a5a34: ldr x8, [x20, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(8))));
  /* a5a38: sub x9, x8, #0xfd0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4048)));
  /* a5a3c: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* a5a40: b.hi #0xa5a60 */
  if (ARC_COND(c, 8)) goto L_a5a60;
  /* a5a44: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* a5a48: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(678476));
  fn1_1428a8(c);
  /* a5a4c: cbz x0, #0xa6a4c */
  if ((ARC_X_R(c, 0)) == 0) goto L_a6a4c;
  /* a5a50: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* a5a54: stp x20, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* a5a58: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
L_a5a5c:;
  /* a5a5c: str x0, [x19, #0x1330] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(4912)), ARC_X_R(c, 0));
L_a5a60:;
  /* a5a60: add x9, x8, #0x20 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(32)));
  /* a5a64: add x0, x20, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + ARC_X_R(c, 8)));
  /* a5a68: adrp x8, #0x149000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1347584)));
  /* a5a6c: add x8, x8, #0xc10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3088)));
  /* a5a70: str x9, [x20, #8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(8)), ARC_X_R(c, 9));
  /* a5a74: mov w9, #8 */
  ARC_W_W(c, 9, UINT64_C(8));
  /* a5a78: str x8, [x0, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* a5a7c: ldurh w8, [x0, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 0) + INT64_C(9))));
  /* a5a80: mov w10, #0x540 */
  ARC_W_W(c, 10, UINT64_C(1344));
  /* a5a84: strb w9, [x0, #8] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 9));
  /* a5a88: adrp x9, #0x50000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(327680)));
  /* a5a8c: add x9, x9, #0xedf */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(3807)));
L_a5a90:;
  /* a5a90: and w8, w8, #0xf000 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(61440)));
  /* a5a94: orr w8, w8, w10 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | ARC_W_R(c, 10)));
  /* a5a98: sturh w8, [x0, #9] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(9)), ARC_W_R(c, 8));
  /* a5a9c: mov w8, #3 */
  ARC_W_W(c, 8, UINT64_C(3));
  /* a5aa0: b #0xa61c4 */
  goto L_a61c4;
L_a5aa4:;
  /* a5aa4: bti j */
  /* bti: no architectural effect here */
L_a5aa8:;
  /* a5aa8: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* a5aac: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
L_a5ab0:;
  /* a5ab0: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* a5ab4: bl #0xa52b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(678584));
  fn1_a52b0(c);
  /* a5ab8: str x0, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 0));
  /* a5abc: cbz x0, #0xa61c8 */
  if ((ARC_X_R(c, 0)) == 0) goto L_a61c8;
  /* a5ac0: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* a5ac4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a5ac8: bl #0xba6f4 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(678604));
  fn1_ba6f4(c);
  /* a5acc: b #0xa5cfc */
  goto L_a5cfc;
L_a5ad0:;
  /* a5ad0: bti j */
  /* bti: no architectural effect here */
  /* a5ad4: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* a5ad8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a5adc: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* a5ae0: bl #0xa52b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(678628));
  fn1_a52b0(c);
  /* a5ae4: str x0, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 0));
  /* a5ae8: cbz x0, #0xa61c8 */
  if ((ARC_X_R(c, 0)) == 0) goto L_a61c8;
  /* a5aec: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* a5af0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
L_a5af4:;
  /* a5af4: bl #0xba7a4 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(678648));
  fn1_ba7a4(c);
  /* a5af8: b #0xa5cfc */
  goto L_a5cfc;
L_a5afc:;
  /* a5afc: bti j */
  /* bti: no architectural effect here */
  /* a5b00: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* a5b04: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
L_a5b08:;
  /* a5b08: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* a5b0c: bl #0xa52b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(678672));
  fn1_a52b0(c);
  /* a5b10: str x0, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 0));
L_a5b14:;
  /* a5b14: cbz x0, #0xa5cf8 */
  if ((ARC_X_R(c, 0)) == 0) goto L_a5cf8;
  /* a5b18: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a5b1c: bl #0xa52b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(678688));
  fn1_a52b0(c);
  /* a5b20: str x0, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 0));
  /* a5b24: cbz x0, #0xa5cf8 */
  if ((ARC_X_R(c, 0)) == 0) goto L_a5cf8;
L_a5b28:;
  /* a5b28: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* a5b2c: add x2, x29, #0x18 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* a5b30: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a5b34: bl #0xbc97c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(678712));
  fn1_bc97c(c);
  /* a5b38: cbnz x0, #0xa5cfc */
  if ((ARC_X_R(c, 0)) != 0) goto L_a5cfc;
  /* a5b3c: b #0xa61c8 */
  goto L_a61c8;
L_a5b40:;
  /* a5b40: bti j */
  /* bti: no architectural effect here */
  /* a5b44: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
L_a5b48:;
  /* a5b48: ldr x20, [x19, #0x1330] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 19) + INT64_C(4912))));
  /* a5b4c: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* a5b50: ldr x8, [x20, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(8))));
  /* a5b54: sub x9, x8, #0xfd0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4048)));
  /* a5b58: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
L_a5b5c:;
  /* a5b5c: b.hi #0xa5b7c */
  if (ARC_COND(c, 8)) goto L_a5b7c;
  /* a5b60: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* a5b64: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(678760));
  fn1_1428a8(c);
  /* a5b68: cbz x0, #0xa6a4c */
  if ((ARC_X_R(c, 0)) == 0) goto L_a6a4c;
  /* a5b6c: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* a5b70: stp x20, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* a5b74: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* a5b78: str x0, [x19, #0x1330] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(4912)), ARC_X_R(c, 0));
L_a5b7c:;
  /* a5b7c: add x9, x8, #0x20 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(32)));
  /* a5b80: add x0, x20, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + ARC_X_R(c, 8)));
  /* a5b84: adrp x8, #0x149000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1347584)));
L_a5b88:;
  /* a5b88: add x8, x8, #0xc10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3088)));
  /* a5b8c: str x9, [x20, #8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(8)), ARC_X_R(c, 9));
  /* a5b90: mov w9, #8 */
  ARC_W_W(c, 9, UINT64_C(8));
L_a5b94:;
  /* a5b94: str x8, [x0, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* a5b98: ldurh w8, [x0, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 0) + INT64_C(9))));
  /* a5b9c: mov w10, #0x540 */
  ARC_W_W(c, 10, UINT64_C(1344));
  /* a5ba0: strb w9, [x0, #8] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 9));
L_a5ba4:;
  /* a5ba4: adrp x9, #0x50000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(327680)));
  /* a5ba8: add x9, x9, #0x97a */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(2426)));
L_a5bac:;
  /* a5bac: and w8, w8, #0xf000 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(61440)));
  /* a5bb0: orr w8, w8, w10 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | ARC_W_R(c, 10)));
  /* a5bb4: sturh w8, [x0, #9] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(9)), ARC_W_R(c, 8));
  /* a5bb8: mov w8, #5 */
  ARC_W_W(c, 8, UINT64_C(5));
L_a5bbc:;
  /* a5bbc: b #0xa61c4 */
  goto L_a61c4;
L_a5bc0:;
  /* a5bc0: bti j */
  /* bti: no architectural effect here */
  /* a5bc4: add x11, x8, #1 */
  ARC_X_W(c, 11, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* a5bc8: cmp x10, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 11));
  /* a5bcc: str x11, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 11));
  /* a5bd0: b.eq #0xa6764 */
  if (ARC_COND(c, 0)) goto L_a6764;
L_a5bd4:;
  /* a5bd4: ldrb w11, [x11] */
  ARC_W_W(c, 11, arc_ld8(ARC_X_R(c, 11)));
L_a5bd8:;
  /* a5bd8: sub w11, w11, #0x3a */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) - UINT64_C(58)));
  /* a5bdc: cmn w11, #0xa */
  (void)arc_add32(c, ARC_W_R(c, 11), UINT64_C(10), 0);
  /* a5be0: b.lo #0xa6764 */
  if (ARC_COND(c, 3)) goto L_a6764;
  /* a5be4: mov x17, xzr */
  ARC_X_W(c, 17, ARC_X_R(c, 31));
  /* a5be8: mov x14, xzr */
  ARC_X_W(c, 14, ARC_X_R(c, 31));
  /* a5bec: mov w16, #0xa */
  ARC_W_W(c, 16, UINT64_C(10));
L_a5bf0:;
  /* a5bf0: add x13, x8, x17 */
  ARC_X_W(c, 13, (ARC_X_R(c, 8) + ARC_X_R(c, 17)));
  /* a5bf4: mov x12, x14 */
  ARC_X_W(c, 12, ARC_X_R(c, 14));
  /* a5bf8: mov x11, x17 */
  ARC_X_W(c, 11, ARC_X_R(c, 17));
  /* a5bfc: add x15, x13, #2 */
  ARC_X_W(c, 15, (ARC_X_R(c, 13) + UINT64_C(2)));
  /* a5c00: str x15, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 15));
  /* a5c04: cmp x15, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 15), ARC_X_R(c, 10));
  /* a5c08: ldrb w13, [x13, #1] */
  ARC_W_W(c, 13, arc_ld8((ARC_X_R(c, 13) + INT64_C(1))));
  /* a5c0c: nop  */
  /* nop: no architectural effect here */
  /* a5c10: madd x14, x14, x16, x13 */
  ARC_X_W(c, 14, ((uint64_t)(ARC_X_R(c, 13)) + ((uint64_t)(ARC_X_R(c, 14)) * (uint64_t)(ARC_X_R(c, 16)))));
  /* a5c14: sub x14, x14, #0x30 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) - UINT64_C(48)));
  /* a5c18: b.eq #0xa5c30 */
  if (ARC_COND(c, 0)) goto L_a5c30;
  /* a5c1c: ldrb w17, [x15] */
  ARC_W_W(c, 17, arc_ld8(ARC_X_R(c, 15)));
  /* a5c20: sub w17, w17, #0x30 */
  ARC_W_W(c, 17, (ARC_W_R(c, 17) - UINT64_C(48)));
  /* a5c24: cmp w17, #9 */
  (void)arc_sub32(c, ARC_W_R(c, 17), UINT64_C(9));
  /* a5c28: add x17, x11, #1 */
  ARC_X_W(c, 17, (ARC_X_R(c, 11) + UINT64_C(1)));
  /* a5c2c: b.ls #0xa5bf0 */
  if (ARC_COND(c, 9)) goto L_a5bf0;
L_a5c30:;
  /* a5c30: sub x9, x9, x11 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - ARC_X_R(c, 11)));
  /* a5c34: sub x9, x9, #2 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - UINT64_C(2)));
  /* a5c38: cmp x9, x14 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 14));
  /* a5c3c: b.lo #0xa6764 */
  if (ARC_COND(c, 3)) goto L_a6764;
  /* a5c40: mov w9, #0xa */
  ARC_W_W(c, 9, UINT64_C(10));
  /* a5c44: add x16, x8, x11 */
  ARC_X_W(c, 16, (ARC_X_R(c, 8) + ARC_X_R(c, 11)));
  /* a5c48: stp x15, x14, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 15));
    arc_st64(_pa + 8, ARC_X_R(c, 14));
  }
  /* a5c4c: nop  */
  /* nop: no architectural effect here */
L_a5c50:;
  /* a5c50: madd x9, x12, x9, x13 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 13)) + ((uint64_t)(ARC_X_R(c, 12)) * (uint64_t)(ARC_X_R(c, 9)))));
  /* a5c54: add x9, x16, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 16) + ARC_X_R(c, 9)));
  /* a5c58: sub x9, x9, #0x2e */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - UINT64_C(46)));
  /* a5c5c: str x9, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 9));
  /* a5c60: cbz x14, #0xa6764 */
  if ((ARC_X_R(c, 14)) == 0) goto L_a6764;
  /* a5c64: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* a5c68: b.eq #0xa6314 */
  if (ARC_COND(c, 0)) goto L_a6314;
  /* a5c6c: ldrb w9, [x9] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 9)));
  /* a5c70: cmp w9, #0x49 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(73));
  /* a5c74: b.ne #0xa6314 */
  if (ARC_COND(c, 1)) goto L_a6314;
  /* a5c78: mov w9, #0xa */
  ARC_W_W(c, 9, UINT64_C(10));
  /* a5c7c: add x8, x8, x11 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + ARC_X_R(c, 11)));
  /* a5c80: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a5c84: madd x9, x12, x9, x13 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 13)) + ((uint64_t)(ARC_X_R(c, 12)) * (uint64_t)(ARC_X_R(c, 9)))));
  /* a5c88: add x8, x8, x9 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + ARC_X_R(c, 9)));
  /* a5c8c: sub x8, x8, #0x2d */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) - UINT64_C(45)));
  /* a5c90: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* a5c94: bl #0xa52b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(679064));
  fn1_a52b0(c);
  /* a5c98: str x0, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 0));
  /* a5c9c: cbz x0, #0xa6764 */
  if ((ARC_X_R(c, 0)) == 0) goto L_a6764;
  /* a5ca0: ldp x8, x9, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* a5ca4: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* a5ca8: b.eq #0xa6764 */
  if (ARC_COND(c, 0)) goto L_a6764;
L_a5cac:;
  /* a5cac: ldrb w9, [x8] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 8)));
  /* a5cb0: cmp w9, #0x45 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(69));
  /* a5cb4: b.ne #0xa6764 */
  if (ARC_COND(c, 1)) goto L_a6764;
  /* a5cb8: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* a5cbc: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* a5cc0: add x2, x29, #0x18 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* a5cc4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a5cc8: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* a5ccc: bl #0xb9c38 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(679120));
  fn1_b9c38(c);
  /* a5cd0: b #0xa5cfc */
  goto L_a5cfc;
L_a5cd4:;
  /* a5cd4: bti j */
  /* bti: no architectural effect here */
  /* a5cd8: cmp x9, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(2));
  /* a5cdc: b.lo #0xa61e8 */
  if (ARC_COND(c, 3)) goto L_a61e8;
  /* a5ce0: ldrb w8, [x8, #1] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 8) + INT64_C(1))));
  /* a5ce4: cmp w8, #0x74 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(116));
  /* a5ce8: b.ne #0xa61e8 */
  if (ARC_COND(c, 1)) goto L_a61e8;
L_a5cec:;
  /* a5cec: bti j */
  /* bti: no architectural effect here */
  /* a5cf0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a5cf4: bl #0xba440 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(679160));
  fn1_ba440(c);
L_a5cf8:;
  /* a5cf8: cbz x0, #0xa61c8 */
  if ((ARC_X_R(c, 0)) == 0) goto L_a61c8;
L_a5cfc:;
  /* a5cfc: ldp x22, x8, [x19, #0x130] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(304));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* a5d00: cmp x22, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 8));
  /* a5d04: b.ne #0xa5d78 */
  if (ARC_COND(c, 1)) goto L_a5d78;
  /* a5d08: ldr x21, [x19, #0x128] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 19) + INT64_C(296))));
  /* a5d0c: add x8, x19, #0x140 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + UINT64_C(320)));
  /* a5d10: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* a5d14: sub x20, x22, x21 */
  ARC_X_W(c, 20, (ARC_X_R(c, 22) - ARC_X_R(c, 21)));
  /* a5d18: cmp x21, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 8));
  /* a5d1c: lsl x1, x20, #1 */
  ARC_X_W(c, 1, ((uint64_t)(ARC_X_R(c, 20)) << ((UINT64_C(1)) & 63)));
  /* a5d20: b.eq #0xa5d38 */
  if (ARC_COND(c, 0)) goto L_a5d38;
  /* a5d24: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* a5d28: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(679212));
  fn1_142878(c);
  /* a5d2c: str x0, [x19, #0x128] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(296)), ARC_X_R(c, 0));
  /* a5d30: cbnz x0, #0xa5d64 */
  if ((ARC_X_R(c, 0)) != 0) goto L_a5d64;
  /* a5d34: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(679224));
  fn1_1427b8(c);
L_a5d38:;
  /* a5d38: mov x0, x1 */
  ARC_X_W(c, 0, ARC_X_R(c, 1));
  /* a5d3c: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(679232));
  fn1_1428a8(c);
  /* a5d40: cbz x0, #0xa6a50 */
  if ((ARC_X_R(c, 0)) == 0) goto L_a6a50;
  /* a5d44: cmp x22, x21 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 21));
  /* a5d48: b.eq #0xa5d60 */
  if (ARC_COND(c, 0)) goto L_a5d60;
  /* a5d4c: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* a5d50: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* a5d54: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* a5d58: bl #0x1449f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(679260));
  fn1_1449f0(c);
  /* a5d5c: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
L_a5d60:;
  /* a5d60: str x0, [x19, #0x128] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(296)), ARC_X_R(c, 0));
L_a5d64:;
  /* a5d64: asr x8, x20, #2 */
  ARC_X_W(c, 8, ((uint64_t)((int64_t)(ARC_X_R(c, 20)) >> ((UINT64_C(2)) & 63))));
  /* a5d68: add x22, x0, x20 */
  ARC_X_W(c, 22, (ARC_X_R(c, 0) + ARC_X_R(c, 20)));
  /* a5d6c: add x8, x0, x8, lsl #3 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + ((uint64_t)(ARC_X_R(c, 8)) << 3)));
  /* a5d70: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* a5d74: str x8, [x19, #0x138] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(312)), ARC_X_R(c, 8));
L_a5d78:;
  /* a5d78: str x0, [x22], #8 */
  { const uint64_t _a = ARC_X_R(c, 22);
    ARC_X_W(c, 22, ARC_X_R(c, 22) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 0));
  }
  /* a5d7c: str x22, [x19, #0x130] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(304)), ARC_X_R(c, 22));
  /* a5d80: b #0xa61c8 */
  goto L_a61c8;
L_a5d84:;
  /* a5d84: bti j */
  /* bti: no architectural effect here */
  /* a5d88: cmp x9, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(2));
  /* a5d8c: b.lo #0xa6764 */
  if (ARC_COND(c, 3)) goto L_a6764;
  /* a5d90: ldrb w11, [x8, #1] */
  ARC_W_W(c, 11, arc_ld8((ARC_X_R(c, 8) + INT64_C(1))));
  /* a5d94: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
  /* a5d98: sub w12, w11, #0x41 */
  ARC_W_W(c, 12, (ARC_W_R(c, 11) - UINT64_C(65)));
  /* a5d9c: cmp w12, #0x37 */
  (void)arc_sub32(c, ARC_W_R(c, 12), UINT64_C(55));
  /* a5da0: b.hi #0xa61c8 */
  if (ARC_COND(c, 8)) goto L_a61c8;
  /* a5da4: adrp x13, #0x53000 */
  ARC_X_W(c, 13, (arc_image_bases[1] + UINT64_C(339968)));
  /* a5da8: add x13, x13, #0x1c2 */
  ARC_X_W(c, 13, (ARC_X_R(c, 13) + UINT64_C(450)));
  /* a5dac: adr x14, #0xa5dbc */
  ARC_X_W(c, 14, (arc_image_bases[1] + UINT64_C(679356)));
  /* a5db0: ldrh w15, [x13, x12, lsl #1] */
  ARC_W_W(c, 15, arc_ld16((ARC_X_R(c, 13) + ((uint64_t)(ARC_X_R(c, 12)) << 1))));
  /* a5db4: add x14, x14, x15, lsl #2 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) + ((uint64_t)(ARC_X_R(c, 15)) << 2)));
  /* a5db8: br x14 */
  switch (ARC_X_R(c, 14) - arc_image_bases[1]) {
    case UINT64_C(681232): goto L_a6510;
    case UINT64_C(680852): goto L_a6394;
    case UINT64_C(680392): goto L_a61c8;
    case UINT64_C(681308): goto L_a655c;
    case UINT64_C(680760): goto L_a6338;
    case UINT64_C(679356): goto L_a5dbc;
    case UINT64_C(681532): goto L_a663c;
    case UINT64_C(681032): goto L_a6448;
    case UINT64_C(680740): goto L_a6324;
    case UINT64_C(681384): goto L_a65a8;
    case UINT64_C(681436): goto L_a65dc;
    case UINT64_C(681560): goto L_a6658;
    case UINT64_C(681488): goto L_a6610;
    case UINT64_C(680920): goto L_a63d8;
    case UINT64_C(681164): goto L_a64cc;
    case UINT64_C(681612): goto L_a668c;
    case UINT64_C(680936): goto L_a63e8;
    case UINT64_C(680988): goto L_a641c;
    case UINT64_C(680972): goto L_a640c;
    case UINT64_C(681180): goto L_a64dc;
    case UINT64_C(680952): goto L_a63f8;
    case UINT64_C(680044): goto L_a606c;
    case UINT64_C(681148): goto L_a64bc;
    case UINT64_C(681236): goto L_a6514;
    case UINT64_C(680968): goto L_a6408;
    case UINT64_C(681468): goto L_a65fc;
    case UINT64_C(681544): goto L_a6648;
    case UINT64_C(681316): goto L_a6564;
    case UINT64_C(681824): goto L_a6760;
    case UINT64_C(681064): goto L_a6468;
    case UINT64_C(681732): goto L_a6704;
    case UINT64_C(680892): goto L_a63bc;
    case UINT64_C(681040): goto L_a6450;
    case UINT64_C(679424): goto L_a5e00;
    case UINT64_C(680132): goto L_a60c4;
    case UINT64_C(679516): goto L_a5e5c;
    case UINT64_C(680464): goto L_a6210;
    case UINT64_C(680256): goto L_a6140;
    case UINT64_C(680416): goto L_a61e0;
    case UINT64_C(680556): goto L_a626c;
    case UINT64_C(680640): goto L_a62c0;
    case UINT64_C(680928): goto L_a63e0;
    case UINT64_C(680712): goto L_a6308;
    case UINT64_C(679724): goto L_a5f2c;
    case UINT64_C(680440): goto L_a61f8;
    case UINT64_C(680368): goto L_a61b0;
    case UINT64_C(679704): goto L_a5f18;
    case UINT64_C(680664): goto L_a62d8;
    case UINT64_C(680688): goto L_a62f0;
    case UINT64_C(681584): goto L_a6670;
    case UINT64_C(679656): goto L_a5ee8;
    case UINT64_C(681608): goto L_a6688;
    case UINT64_C(679680): goto L_a5f00;
    case UINT64_C(680344): goto L_a6198;
    case UINT64_C(681416): goto L_a65c8;
    default: break;
  }
  arc_dispatch(c, ARC_X_R(c, 14)); return;
L_a5dbc:;
  /* a5dbc: bti j */
  /* bti: no architectural effect here */
  /* a5dc0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a5dc4: bl #0xb8e04 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(679368));
  fn1_b8e04(c);
  /* a5dc8: cbnz x0, #0xa5cfc */
  if ((ARC_X_R(c, 0)) != 0) goto L_a5cfc;
  /* a5dcc: b #0xa61c8 */
  goto L_a61c8;
L_a5dd0:;
  /* a5dd0: bti j */
  /* bti: no architectural effect here */
  /* a5dd4: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* a5dd8: ldr x20, [x19, #0x1330] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 19) + INT64_C(4912))));
  /* a5ddc: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* a5de0: ldr x8, [x20, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(8))));
  /* a5de4: sub x9, x8, #0xfd0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4048)));
  /* a5de8: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* a5dec: b.hi #0xa5e0c */
  if (ARC_COND(c, 8)) goto L_a5e0c;
  /* a5df0: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* a5df4: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(679416));
  fn1_1428a8(c);
  /* a5df8: cbz x0, #0xa6a4c */
  if ((ARC_X_R(c, 0)) == 0) goto L_a6a4c;
  /* a5dfc: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
L_a5e00:;
  /* a5e00: stp x20, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* a5e04: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* a5e08: str x0, [x19, #0x1330] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(4912)), ARC_X_R(c, 0));
L_a5e0c:;
  /* a5e0c: add x9, x8, #0x20 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(32)));
  /* a5e10: add x0, x20, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + ARC_X_R(c, 8)));
  /* a5e14: adrp x8, #0x149000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1347584)));
  /* a5e18: add x8, x8, #0xc10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3088)));
  /* a5e1c: str x9, [x20, #8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(8)), ARC_X_R(c, 9));
  /* a5e20: mov w9, #8 */
  ARC_W_W(c, 9, UINT64_C(8));
  /* a5e24: str x8, [x0, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* a5e28: ldurh w8, [x0, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 0) + INT64_C(9))));
  /* a5e2c: mov w10, #0x540 */
  ARC_W_W(c, 10, UINT64_C(1344));
  /* a5e30: strb w9, [x0, #8] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 9));
  /* a5e34: adrp x9, #0x50000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(327680)));
  /* a5e38: add x9, x9, #0xd75 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(3445)));
L_a5e3c:;
  /* a5e3c: and w8, w8, #0xf000 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(61440)));
  /* a5e40: orr w8, w8, w10 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | ARC_W_R(c, 10)));
  /* a5e44: sturh w8, [x0, #9] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(9)), ARC_W_R(c, 8));
  /* a5e48: mov w8, #0xd */
  ARC_W_W(c, 8, UINT64_C(13));
  /* a5e4c: b #0xa61c4 */
  goto L_a61c4;
L_a5e50:;
  /* a5e50: bti j */
  /* bti: no architectural effect here */
  /* a5e54: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* a5e58: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
L_a5e5c:;
  /* a5e5c: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* a5e60: bl #0xa52b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(679524));
  fn1_a52b0(c);
  /* a5e64: str x0, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 0));
  /* a5e68: cbz x0, #0xa61c8 */
  if ((ARC_X_R(c, 0)) == 0) goto L_a61c8;
  /* a5e6c: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* a5e70: str w8, [x29, #0x18] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(24)), ARC_W_R(c, 8));
  /* a5e74: b #0xa6008 */
  goto L_a6008;
L_a5e78:;
  /* a5e78: bti j */
  /* bti: no architectural effect here */
  /* a5e7c: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* a5e80: ldr x20, [x19, #0x1330] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 19) + INT64_C(4912))));
  /* a5e84: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* a5e88: ldr x8, [x20, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(8))));
  /* a5e8c: sub x9, x8, #0xfd0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4048)));
  /* a5e90: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* a5e94: b.hi #0xa5eb4 */
  if (ARC_COND(c, 8)) goto L_a5eb4;
  /* a5e98: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* a5e9c: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(679584));
  fn1_1428a8(c);
  /* a5ea0: cbz x0, #0xa6a4c */
  if ((ARC_X_R(c, 0)) == 0) goto L_a6a4c;
  /* a5ea4: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* a5ea8: stp x20, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* a5eac: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* a5eb0: str x0, [x19, #0x1330] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(4912)), ARC_X_R(c, 0));
L_a5eb4:;
  /* a5eb4: add x9, x8, #0x20 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(32)));
  /* a5eb8: add x0, x20, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + ARC_X_R(c, 8)));
  /* a5ebc: adrp x8, #0x149000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1347584)));
  /* a5ec0: add x8, x8, #0xc10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3088)));
  /* a5ec4: str x9, [x20, #8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(8)), ARC_X_R(c, 9));
  /* a5ec8: mov w9, #8 */
  ARC_W_W(c, 9, UINT64_C(8));
  /* a5ecc: str x8, [x0, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* a5ed0: ldurh w8, [x0, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 0) + INT64_C(9))));
  /* a5ed4: mov w10, #0x540 */
  ARC_W_W(c, 10, UINT64_C(1344));
  /* a5ed8: strb w9, [x0, #8] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 9));
  /* a5edc: adrp x9, #0x50000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(327680)));
  /* a5ee0: add x9, x9, #0x192 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(402)));
  /* a5ee4: b #0xa6134 */
  goto L_a6134;
L_a5ee8:;
  /* a5ee8: bti j */
  /* bti: no architectural effect here */
  /* a5eec: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* a5ef0: ldr x20, [x19, #0x1330] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 19) + INT64_C(4912))));
  /* a5ef4: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* a5ef8: ldr x8, [x20, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(8))));
  /* a5efc: sub x9, x8, #0xfd0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4048)));
L_a5f00:;
  /* a5f00: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* a5f04: b.hi #0xa5f24 */
  if (ARC_COND(c, 8)) goto L_a5f24;
  /* a5f08: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* a5f0c: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(679696));
  fn1_1428a8(c);
L_a5f10:;
  /* a5f10: cbz x0, #0xa6a4c */
  if ((ARC_X_R(c, 0)) == 0) goto L_a6a4c;
  /* a5f14: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
L_a5f18:;
  /* a5f18: stp x20, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* a5f1c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* a5f20: str x0, [x19, #0x1330] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(4912)), ARC_X_R(c, 0));
L_a5f24:;
  /* a5f24: add x9, x8, #0x20 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(32)));
  /* a5f28: add x0, x20, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + ARC_X_R(c, 8)));
L_a5f2c:;
  /* a5f2c: adrp x8, #0x149000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1347584)));
  /* a5f30: add x8, x8, #0xc10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3088)));
  /* a5f34: str x9, [x20, #8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(8)), ARC_X_R(c, 9));
  /* a5f38: mov w10, #0x540 */
  ARC_W_W(c, 10, UINT64_C(1344));
  /* a5f3c: str x8, [x0, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* a5f40: ldurh w8, [x0, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 0) + INT64_C(9))));
  /* a5f44: mov w9, #8 */
  ARC_W_W(c, 9, UINT64_C(8));
  /* a5f48: and w8, w8, #0xf000 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(61440)));
  /* a5f4c: strb w9, [x0, #8] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 9));
  /* a5f50: adrp x9, #0x51000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(331776)));
  /* a5f54: add x9, x9, #0x7e9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(2025)));
  /* a5f58: orr w8, w8, w10 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | ARC_W_R(c, 10)));
  /* a5f5c: sturh w8, [x0, #9] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(9)), ARC_W_R(c, 8));
  /* a5f60: mov w8, #0xc */
  ARC_W_W(c, 8, UINT64_C(12));
  /* a5f64: b #0xa61c4 */
  goto L_a61c4;
L_a5f68:;
  /* a5f68: bti j */
  /* bti: no architectural effect here */
  /* a5f6c: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* a5f70: ldr x20, [x19, #0x1330] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 19) + INT64_C(4912))));
  /* a5f74: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* a5f78: ldr x8, [x20, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(8))));
  /* a5f7c: sub x9, x8, #0xfd0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4048)));
  /* a5f80: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* a5f84: b.hi #0xa5fa4 */
  if (ARC_COND(c, 8)) goto L_a5fa4;
  /* a5f88: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* a5f8c: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(679824));
  fn1_1428a8(c);
  /* a5f90: cbz x0, #0xa6a4c */
  if ((ARC_X_R(c, 0)) == 0) goto L_a6a4c;
  /* a5f94: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* a5f98: stp x20, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* a5f9c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* a5fa0: str x0, [x19, #0x1330] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(4912)), ARC_X_R(c, 0));
L_a5fa4:;
  /* a5fa4: add x9, x8, #0x20 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(32)));
  /* a5fa8: add x0, x20, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + ARC_X_R(c, 8)));
  /* a5fac: adrp x8, #0x149000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1347584)));
  /* a5fb0: add x8, x8, #0xc10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3088)));
  /* a5fb4: str x9, [x20, #8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(8)), ARC_X_R(c, 9));
  /* a5fb8: mov w10, #0x540 */
  ARC_W_W(c, 10, UINT64_C(1344));
  /* a5fbc: str x8, [x0, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* a5fc0: ldurh w8, [x0, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 0) + INT64_C(9))));
  /* a5fc4: mov w9, #8 */
  ARC_W_W(c, 9, UINT64_C(8));
  /* a5fc8: and w8, w8, #0xf000 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(61440)));
  /* a5fcc: strb w9, [x0, #8] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 9));
  /* a5fd0: adrp x9, #0x4f000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(323584)));
  /* a5fd4: add x9, x9, #0x6ae */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(1710)));
  /* a5fd8: orr w8, w8, w10 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | ARC_W_R(c, 10)));
  /* a5fdc: sturh w8, [x0, #9] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(9)), ARC_W_R(c, 8));
  /* a5fe0: mov w8, #0xe */
  ARC_W_W(c, 8, UINT64_C(14));
  /* a5fe4: b #0xa61c4 */
  goto L_a61c4;
L_a5fe8:;
  /* a5fe8: bti j */
  /* bti: no architectural effect here */
  /* a5fec: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* a5ff0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a5ff4: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* a5ff8: bl #0xa52b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(679932));
  fn1_a52b0(c);
  /* a5ffc: str x0, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 0));
  /* a6000: cbz x0, #0xa61c8 */
  if ((ARC_X_R(c, 0)) == 0) goto L_a61c8;
  /* a6004: str wzr, [x29, #0x18] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(24)), ARC_W_R(c, 31));
L_a6008:;
  /* a6008: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* a600c: add x2, x29, #0x18 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* a6010: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a6014: bl #0xba638 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(679960));
  fn1_ba638(c);
  /* a6018: b #0xa5cfc */
  goto L_a5cfc;
L_a601c:;
  /* a601c: bti j */
  /* bti: no architectural effect here */
  /* a6020: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* a6024: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a6028: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* a602c: bl #0xa52b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(679984));
  fn1_a52b0(c);
  /* a6030: str x0, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 0));
  /* a6034: cbz x0, #0xa61c8 */
  if ((ARC_X_R(c, 0)) == 0) goto L_a61c8;
  /* a6038: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* a603c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a6040: bl #0xba58c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(680004));
  fn1_ba58c(c);
  /* a6044: b #0xa5cfc */
  goto L_a5cfc;
L_a6048:;
  /* a6048: bti j */
  /* bti: no architectural effect here */
  /* a604c: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* a6050: ldr x20, [x19, #0x1330] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 19) + INT64_C(4912))));
  /* a6054: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* a6058: ldr x8, [x20, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(8))));
  /* a605c: sub x9, x8, #0xfd0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4048)));
  /* a6060: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* a6064: b.hi #0xa6084 */
  if (ARC_COND(c, 8)) goto L_a6084;
  /* a6068: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
L_a606c:;
  /* a606c: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(680048));
  fn1_1428a8(c);
  /* a6070: cbz x0, #0xa6a4c */
  if ((ARC_X_R(c, 0)) == 0) goto L_a6a4c;
  /* a6074: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* a6078: stp x20, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* a607c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* a6080: str x0, [x19, #0x1330] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(4912)), ARC_X_R(c, 0));
L_a6084:;
  /* a6084: add x9, x8, #0x20 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(32)));
  /* a6088: add x0, x20, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + ARC_X_R(c, 8)));
  /* a608c: adrp x8, #0x149000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1347584)));
  /* a6090: add x8, x8, #0xc10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3088)));
  /* a6094: str x9, [x20, #8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(8)), ARC_X_R(c, 9));
  /* a6098: mov w10, #0x540 */
  ARC_W_W(c, 10, UINT64_C(1344));
  /* a609c: str x8, [x0, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* a60a0: ldurh w8, [x0, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 0) + INT64_C(9))));
  /* a60a4: mov w9, #8 */
  ARC_W_W(c, 9, UINT64_C(8));
  /* a60a8: and w8, w8, #0xf000 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(61440)));
  /* a60ac: strb w9, [x0, #8] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 9));
  /* a60b0: adrp x9, #0x51000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(331776)));
  /* a60b4: add x9, x9, #0xa17 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(2583)));
  /* a60b8: orr w8, w8, w10 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | ARC_W_R(c, 10)));
  /* a60bc: sturh w8, [x0, #9] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(9)), ARC_W_R(c, 8));
  /* a60c0: mov w8, #9 */
  ARC_W_W(c, 8, UINT64_C(9));
L_a60c4:;
  /* a60c4: b #0xa61c4 */
  goto L_a61c4;
L_a60c8:;
  /* a60c8: bti j */
  /* bti: no architectural effect here */
  /* a60cc: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* a60d0: ldr x20, [x19, #0x1330] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 19) + INT64_C(4912))));
  /* a60d4: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* a60d8: ldr x8, [x20, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(8))));
  /* a60dc: sub x9, x8, #0xfd0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4048)));
  /* a60e0: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* a60e4: b.hi #0xa6104 */
  if (ARC_COND(c, 8)) goto L_a6104;
  /* a60e8: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* a60ec: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(680176));
  fn1_1428a8(c);
  /* a60f0: cbz x0, #0xa6a4c */
  if ((ARC_X_R(c, 0)) == 0) goto L_a6a4c;
  /* a60f4: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* a60f8: stp x20, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* a60fc: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* a6100: str x0, [x19, #0x1330] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(4912)), ARC_X_R(c, 0));
L_a6104:;
  /* a6104: add x9, x8, #0x20 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(32)));
  /* a6108: add x0, x20, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + ARC_X_R(c, 8)));
  /* a610c: adrp x8, #0x149000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1347584)));
  /* a6110: add x8, x8, #0xc10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3088)));
  /* a6114: str x9, [x20, #8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(8)), ARC_X_R(c, 9));
  /* a6118: mov w9, #8 */
  ARC_W_W(c, 9, UINT64_C(8));
  /* a611c: str x8, [x0, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* a6120: ldurh w8, [x0, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 0) + INT64_C(9))));
  /* a6124: mov w10, #0x540 */
  ARC_W_W(c, 10, UINT64_C(1344));
  /* a6128: strb w9, [x0, #8] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 9));
  /* a612c: adrp x9, #0x51000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(331776)));
  /* a6130: add x9, x9, #0xa06 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(2566)));
L_a6134:;
  /* a6134: and w8, w8, #0xf000 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(61440)));
  /* a6138: orr w8, w8, w10 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | ARC_W_R(c, 10)));
  /* a613c: sturh w8, [x0, #9] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(9)), ARC_W_R(c, 8));
L_a6140:;
  /* a6140: mov w8, #0xb */
  ARC_W_W(c, 8, UINT64_C(11));
  /* a6144: b #0xa61c4 */
  goto L_a61c4;
L_a6148:;
  /* a6148: bti j */
  /* bti: no architectural effect here */
  /* a614c: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* a6150: ldr x20, [x19, #0x1330] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 19) + INT64_C(4912))));
  /* a6154: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* a6158: ldr x8, [x20, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(8))));
  /* a615c: sub x9, x8, #0xfd0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4048)));
  /* a6160: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* a6164: b.hi #0xa6184 */
  if (ARC_COND(c, 8)) goto L_a6184;
  /* a6168: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* a616c: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(680304));
  fn1_1428a8(c);
  /* a6170: cbz x0, #0xa6a4c */
  if ((ARC_X_R(c, 0)) == 0) goto L_a6a4c;
  /* a6174: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* a6178: stp x20, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* a617c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* a6180: str x0, [x19, #0x1330] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(4912)), ARC_X_R(c, 0));
L_a6184:;
  /* a6184: add x9, x8, #0x20 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(32)));
  /* a6188: add x0, x20, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + ARC_X_R(c, 8)));
  /* a618c: adrp x8, #0x149000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1347584)));
  /* a6190: add x8, x8, #0xc10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3088)));
  /* a6194: str x9, [x20, #8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(8)), ARC_X_R(c, 9));
L_a6198:;
  /* a6198: mov w9, #8 */
  ARC_W_W(c, 9, UINT64_C(8));
  /* a619c: str x8, [x0, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* a61a0: ldurh w8, [x0, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 0) + INT64_C(9))));
  /* a61a4: mov w10, #0x540 */
  ARC_W_W(c, 10, UINT64_C(1344));
  /* a61a8: strb w9, [x0, #8] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 9));
  /* a61ac: adrp x9, #0x50000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(327680)));
L_a61b0:;
  /* a61b0: add x9, x9, #0xec1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(3777)));
L_a61b4:;
  /* a61b4: and w8, w8, #0xf000 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(61440)));
  /* a61b8: orr w8, w8, w10 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | ARC_W_R(c, 10)));
  /* a61bc: sturh w8, [x0, #9] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(9)), ARC_W_R(c, 8));
  /* a61c0: mov w8, #4 */
  ARC_W_W(c, 8, UINT64_C(4));
L_a61c4:;
  /* a61c4: stp x9, x8, [x0, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
L_a61c8:;
  /* a61c8: bti j */
  /* bti: no architectural effect here */
  /* a61cc: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* a61d0: ldr x23, [sp, #0x30] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(48))));
  /* a61d4: ldp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* a61d8: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* a61dc: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
L_a61e0:;
  /* a61e0: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* a61e4: ret  */
  return;
L_a61e8:;
  /* a61e8: add x2, x29, #0x18 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* a61ec: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a61f0: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* a61f4: strb wzr, [x29, #0x18] */
  arc_st8((ARC_X_R(c, 29) + INT64_C(24)), ARC_W_R(c, 31));
L_a61f8:;
  /* a61f8: bl #0xa8e18 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(680444));
  fn1_a8e18(c);
  /* a61fc: str x0, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 0));
  /* a6200: cbz x0, #0xa6764 */
  if ((ARC_X_R(c, 0)) == 0) goto L_a6764;
  /* a6204: ldp x8, x9, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* a6208: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* a620c: b.eq #0xa62d4 */
  if (ARC_COND(c, 0)) goto L_a62d4;
L_a6210:;
  /* a6210: ldrb w9, [x8] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 8)));
  /* a6214: ldrb w8, [x29, #0x18] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(24))));
  /* a6218: cmp w9, #0x49 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(73));
  /* a621c: b.ne #0xa62d8 */
  if (ARC_COND(c, 1)) goto L_a62d8;
  /* a6220: tbz w8, #0, #0xa62e0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_a62e0;
  /* a6224: ldrb w8, [x19, #0x308] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(776))));
  /* a6228: tbz w8, #0, #0xa61c8 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_a61c8;
  /* a622c: b #0xa62ec */
  goto L_a62ec;
L_a6230:;
  /* a6230: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a6234: bl #0xaa69c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(680504));
  fn1_aa69c(c);
  /* a6238: cbz x0, #0xa5cf8 */
  if ((ARC_X_R(c, 0)) == 0) goto L_a5cf8;
  /* a623c: ldp x8, x9, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* a6240: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* a6244: b.eq #0xa62c8 */
  if (ARC_COND(c, 0)) goto L_a62c8;
  /* a6248: ldrb w9, [x8] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 8)));
  /* a624c: cmp w9, #0x5f */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(95));
  /* a6250: b.ne #0xa62c8 */
  if (ARC_COND(c, 1)) goto L_a62c8;
  /* a6254: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* a6258: str x0, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 0));
  /* a625c: b #0xa629c */
  goto L_a629c;
L_a6260:;
  /* a6260: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a6264: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* a6268: bl #0xa5170 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(680556));
  fn1_a5170(c);
L_a626c:;
  /* a626c: stp x0, x1, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 0));
    arc_st64(_pa + 8, ARC_X_R(c, 1));
  }
  /* a6270: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* a6274: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a6278: bl #0xaa1f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(680572));
  fn1_aa1f0(c);
  /* a627c: ldp x8, x9, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* a6280: str x0, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 0));
  /* a6284: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* a6288: b.eq #0xa62c8 */
  if (ARC_COND(c, 0)) goto L_a62c8;
  /* a628c: ldrb w9, [x8] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 8)));
  /* a6290: cmp w9, #0x5f */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(95));
  /* a6294: b.ne #0xa62c8 */
  if (ARC_COND(c, 1)) goto L_a62c8;
  /* a6298: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
L_a629c:;
  /* a629c: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* a62a0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a62a4: bl #0xa52b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(680616));
  fn1_a52b0(c);
  /* a62a8: str x0, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 0));
  /* a62ac: cbz x0, #0xa5cf8 */
  if ((ARC_X_R(c, 0)) == 0) goto L_a5cf8;
  /* a62b0: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* a62b4: add x2, x29, #0x18 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* a62b8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a62bc: bl #0xbbf44 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(680640));
  fn1_bbf44(c);
L_a62c0:;
  /* a62c0: cbnz x0, #0xa5cfc */
  if ((ARC_X_R(c, 0)) != 0) goto L_a5cfc;
  /* a62c4: b #0xa61c8 */
  goto L_a61c8;
L_a62c8:;
  /* a62c8: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
  /* a62cc: cbnz xzr, #0xa5cfc */
  if ((ARC_X_R(c, 31)) != 0) goto L_a5cfc;
  /* a62d0: b #0xa61c8 */
  goto L_a61c8;
L_a62d4:;
  /* a62d4: ldrb w8, [x29, #0x18] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(24))));
L_a62d8:;
  /* a62d8: tbz w8, #0, #0xa5cfc */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_a5cfc;
  /* a62dc: b #0xa61c8 */
  goto L_a61c8;
L_a62e0:;
  /* a62e0: add x0, x19, #0x128 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(296)));
  /* a62e4: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* a62e8: bl #0xa7670 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(680684));
  fn1_a7670(c);
L_a62ec:;
  /* a62ec: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
L_a62f0:;
  /* a62f0: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* a62f4: bl #0xa8f88 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(680696));
  fn1_a8f88(c);
  /* a62f8: str x0, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 0));
  /* a62fc: cbz x0, #0xa6764 */
  if ((ARC_X_R(c, 0)) == 0) goto L_a6764;
L_a6300:;
  /* a6300: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* a6304: add x2, sp, #0x10 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(16)));
L_a6308:;
  /* a6308: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a630c: bl #0xa9454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(680720));
  fn1_a9454(c);
  /* a6310: b #0xa5cfc */
  goto L_a5cfc;
L_a6314:;
  /* a6314: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* a6318: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a631c: bl #0xa8b88 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(680736));
  fn1_a8b88(c);
  /* a6320: b #0xa5cfc */
  goto L_a5cfc;
L_a6324:;
  /* a6324: bti j */
  /* bti: no architectural effect here */
  /* a6328: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a632c: bl #0xa9898 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(680752));
  fn1_a9898(c);
  /* a6330: cbnz x0, #0xa5cfc */
  if ((ARC_X_R(c, 0)) != 0) goto L_a5cfc;
  /* a6334: b #0xa61c8 */
  goto L_a61c8;
L_a6338:;
  /* a6338: bti j */
  /* bti: no architectural effect here */
  /* a633c: adrp x9, #0x4f000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(323584)));
  /* a6340: add x9, x9, #0x6d6 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(1750)));
  /* a6344: adrp x10, #0x51000 */
  ARC_X_W(c, 10, (arc_image_bases[1] + UINT64_C(331776)));
  /* a6348: add x10, x10, #0xe9d */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(3741)));
  /* a634c: cmp w11, #0x6b */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(107));
  /* a6350: mov w11, #5 */
  ARC_W_W(c, 11, UINT64_C(5));
  /* a6354: csel x9, x10, x9, eq */
  ARC_X_W(c, 9, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* a6358: mov w10, #0xf */
  ARC_W_W(c, 10, UINT64_C(15));
  /* a635c: add x8, x8, #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2)));
  /* a6360: csel x10, x11, x10, eq */
  ARC_X_W(c, 10, (ARC_COND(c, 0) ? (ARC_X_R(c, 11)) : ARC_X_R(c, 10)));
  /* a6364: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a6368: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* a636c: stp x9, x10, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 10));
  }
  /* a6370: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* a6374: bl #0xa6c18 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(680824));
  fn1_a6c18(c);
  /* a6378: str x0, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 0));
  /* a637c: cbz x0, #0xa61c8 */
  if ((ARC_X_R(c, 0)) == 0) goto L_a61c8;
  /* a6380: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* a6384: add x2, sp, #0x10 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(16)));
  /* a6388: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a638c: bl #0xba0e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(680848));
  fn1_ba0e0(c);
  /* a6390: b #0xa61c8 */
  goto L_a61c8;
L_a6394:;
  /* a6394: bti j */
  /* bti: no architectural effect here */
  /* a6398: cmp w11, #0x42 */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(66));
  /* a639c: add x8, x8, #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2)));
  /* a63a0: cset w9, eq */
  ARC_W_W(c, 9, (ARC_COND(c, 0) ? 1 : 0));
  /* a63a4: cmp x10, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 8));
  /* a63a8: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* a63ac: strb w9, [x29, #0x18] */
  arc_st8((ARC_X_R(c, 29) + INT64_C(24)), ARC_W_R(c, 9));
  /* a63b0: b.eq #0xa63c4 */
  if (ARC_COND(c, 0)) goto L_a63c4;
  /* a63b4: ldrb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* a63b8: sub w8, w8, #0x3a */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) - UINT64_C(58)));
L_a63bc:;
  /* a63bc: cmn w8, #0xa */
  (void)arc_add32(c, ARC_W_R(c, 8), UINT64_C(10), 0);
  /* a63c0: b.hs #0xa66c0 */
  if (ARC_COND(c, 2)) goto L_a66c0;
L_a63c4:;
  /* a63c4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a63c8: bl #0xaa69c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(680908));
  fn1_aa69c(c);
  /* a63cc: str x0, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 0));
  /* a63d0: cbnz x0, #0xa66e0 */
  if ((ARC_X_R(c, 0)) != 0) goto L_a66e0;
  /* a63d4: b #0xa61c8 */
  goto L_a61c8;
L_a63d8:;
  /* a63d8: bti j */
  /* bti: no architectural effect here */
  /* a63dc: adrp x1, #0x51000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(331776)));
L_a63e0:;
  /* a63e0: add x1, x1, #0x50d */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1293)));
  /* a63e4: b #0xa6664 */
  goto L_a6664;
L_a63e8:;
  /* a63e8: bti j */
  /* bti: no architectural effect here */
  /* a63ec: adrp x1, #0x4f000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(323584)));
  /* a63f0: add x1, x1, #0xec9 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3785)));
  /* a63f4: b #0xa65e8 */
  goto L_a65e8;
L_a63f8:;
  /* a63f8: bti j */
  /* bti: no architectural effect here */
  /* a63fc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a6400: bl #0xba18c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(680964));
  fn1_ba18c(c);
  /* a6404: cbnz x0, #0xa5cfc */
  if ((ARC_X_R(c, 0)) != 0) goto L_a5cfc;
L_a6408:;
  /* a6408: b #0xa61c8 */
  goto L_a61c8;
L_a640c:;
  /* a640c: bti j */
  /* bti: no architectural effect here */
  /* a6410: adrp x1, #0x52000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(335872)));
  /* a6414: add x1, x1, #0x331 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(817)));
  /* a6418: b #0xa6698 */
  goto L_a6698;
L_a641c:;
  /* a641c: bti j */
  /* bti: no architectural effect here */
  /* a6420: add x8, x8, #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2)));
  /* a6424: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a6428: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* a642c: bl #0xa52b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(681008));
  fn1_a52b0(c);
  /* a6430: str x0, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 0));
  /* a6434: cbz x0, #0xa61c8 */
  if ((ARC_X_R(c, 0)) == 0) goto L_a61c8;
  /* a6438: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* a643c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a6440: bl #0xadb28 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(681028));
  fn1_adb28(c);
  /* a6444: b #0xa5cfc */
  goto L_a5cfc;
L_a6448:;
  /* a6448: bti j */
  /* bti: no architectural effect here */
  /* a644c: add x11, x8, #2 */
  ARC_X_W(c, 11, (ARC_X_R(c, 8) + UINT64_C(2)));
L_a6450:;
  /* a6450: subs x9, x10, x11 */
  ARC_X_W(c, 9, arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 11)));
  /* a6454: str x11, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 11));
  /* a6458: b.eq #0xa6764 */
  if (ARC_COND(c, 0)) goto L_a6764;
  /* a645c: cmp x9, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(2));
  /* a6460: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
  /* a6464: b.lo #0xa61c8 */
  if (ARC_COND(c, 3)) goto L_a61c8;
L_a6468:;
  /* a6468: ldrb w10, [x11] */
  ARC_W_W(c, 10, arc_ld8(ARC_X_R(c, 11)));
  /* a646c: cmp w10, #0x44 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(68));
  /* a6470: b.ne #0xa61c8 */
  if (ARC_COND(c, 1)) goto L_a61c8;
  /* a6474: ldrb w10, [x8, #3] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 8) + INT64_C(3))));
  /* a6478: cmp w10, #0x52 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(82));
  /* a647c: b.eq #0xa6834 */
  if (ARC_COND(c, 0)) goto L_a6834;
  /* a6480: cmp w10, #0x41 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(65));
  /* a6484: b.ne #0xa6764 */
  if (ARC_COND(c, 1)) goto L_a6764;
  /* a6488: cmp x9, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(2));
  /* a648c: b.ls #0xa6894 */
  if (ARC_COND(c, 9)) goto L_a6894;
  /* a6490: ldrb w9, [x8, #4] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 8) + INT64_C(4))));
  /* a6494: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
  /* a6498: add x8, x8, #5 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(5)));
  /* a649c: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* a64a0: cmp w9, #0x6c */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(108));
  /* a64a4: b.gt #0xa6950 */
  if (ARC_COND(c, 12)) goto L_a6950;
  /* a64a8: cmp w9, #0x69 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(105));
  /* a64ac: b.eq #0xa69b4 */
  if (ARC_COND(c, 0)) goto L_a69b4;
  /* a64b0: cmp w9, #0x6a */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(106));
  /* a64b4: b.eq #0xa6a00 */
  if (ARC_COND(c, 0)) goto L_a6a00;
  /* a64b8: cmp w9, #0x6c */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(108));
L_a64bc:;
  /* a64bc: b.ne #0xa61c8 */
  if (ARC_COND(c, 1)) goto L_a61c8;
  /* a64c0: adrp x1, #0x50000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(327680)));
  /* a64c4: add x1, x1, #0x4c7 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1223)));
  /* a64c8: b #0xa6874 */
  goto L_a6874;
L_a64cc:;
  /* a64cc: bti j */
  /* bti: no architectural effect here */
  /* a64d0: adrp x1, #0x51000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(331776)));
  /* a64d4: add x1, x1, #0xa2b */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2603)));
  /* a64d8: b #0xa65b4 */
  goto L_a65b4;
L_a64dc:;
  /* a64dc: bti j */
  /* bti: no architectural effect here */
  /* a64e0: add x8, x8, #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2)));
  /* a64e4: adrp x1, #0x4f000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(323584)));
  /* a64e8: add x1, x1, #0xec1 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3777)));
  /* a64ec: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a64f0: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* a64f4: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* a64f8: ldr x23, [sp, #0x30] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(48))));
  /* a64fc: ldp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* a6500: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* a6504: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* a6508: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* a650c: b #0xb0ec4 */
  fn1_b0ec4(c); return;
L_a6510:;
  /* a6510: bti j */
  /* bti: no architectural effect here */
L_a6514:;
  /* a6514: cmp x9, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(2));
  /* a6518: b.eq #0xa6648 */
  if (ARC_COND(c, 0)) goto L_a6648;
  /* a651c: ldrb w9, [x8, #2] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 8) + INT64_C(2))));
  /* a6520: mov x10, xzr */
  ARC_X_W(c, 10, ARC_X_R(c, 31));
  /* a6524: add x8, x8, #3 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3)));
  /* a6528: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* a652c: cmp w9, #0x6c */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(108));
  /* a6530: b.gt #0xa67c8 */
  if (ARC_COND(c, 12)) goto L_a67c8;
  /* a6534: cmp w9, #0x69 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(105));
  /* a6538: b.eq #0xa689c */
  if (ARC_COND(c, 0)) goto L_a689c;
  /* a653c: cmp w9, #0x6a */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(106));
  /* a6540: b.eq #0xa68b4 */
  if (ARC_COND(c, 0)) goto L_a68b4;
  /* a6544: cmp w9, #0x6c */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(108));
  /* a6548: mov x0, x10 */
  ARC_X_W(c, 0, ARC_X_R(c, 10));
  /* a654c: b.ne #0xa61c8 */
  if (ARC_COND(c, 1)) goto L_a61c8;
  /* a6550: adrp x1, #0x51000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(331776)));
  /* a6554: add x1, x1, #0x292 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(658)));
  /* a6558: b #0xa67a8 */
  goto L_a67a8;
L_a655c:;
  /* a655c: bti j */
  /* bti: no architectural effect here */
  /* a6560: add x8, x8, #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2)));
L_a6564:;
  /* a6564: adrp x1, #0x50000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(327680)));
  /* a6568: add x1, x1, #0x67b */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1659)));
  /* a656c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a6570: mov w2, #3 */
  ARC_W_W(c, 2, UINT64_C(3));
  /* a6574: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* a6578: bl #0xa468c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(681340));
  fn1_a468c(c);
  /* a657c: tbz w0, #0, #0xa6714 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_a6714;
  /* a6580: adrp x1, #0x51000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(331776)));
  /* a6584: add x1, x1, #0x87e */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2174)));
L_a6588:;
  /* a6588: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a658c: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* a6590: ldr x23, [sp, #0x30] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(48))));
  /* a6594: ldp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* a6598: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* a659c: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* a65a0: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* a65a4: b #0xb2eac */
  fn1_b2eac(c); return;
L_a65a8:;
  /* a65a8: bti j */
  /* bti: no architectural effect here */
  /* a65ac: adrp x1, #0x4f000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(323584)));
  /* a65b0: add x1, x1, #0x988 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2440)));
L_a65b4:;
  /* a65b4: add x8, x8, #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2)));
  /* a65b8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a65bc: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* a65c0: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* a65c4: ldr x23, [sp, #0x30] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(48))));
L_a65c8:;
  /* a65c8: ldp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* a65cc: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* a65d0: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* a65d4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* a65d8: b #0xaa364 */
  fn1_aa364(c); return;
L_a65dc:;
  /* a65dc: bti j */
  /* bti: no architectural effect here */
  /* a65e0: adrp x1, #0x4f000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(323584)));
  /* a65e4: add x1, x1, #0x8c0 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2240)));
L_a65e8:;
  /* a65e8: add x8, x8, #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2)));
  /* a65ec: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a65f0: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* a65f4: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* a65f8: ldr x23, [sp, #0x30] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(48))));
L_a65fc:;
  /* a65fc: ldp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* a6600: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* a6604: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* a6608: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* a660c: b #0xb7e88 */
  fn1_b7e88(c); return;
L_a6610:;
  /* a6610: bti j */
  /* bti: no architectural effect here */
  /* a6614: add x8, x8, #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2)));
  /* a6618: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a661c: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* a6620: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* a6624: ldr x23, [sp, #0x30] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(48))));
  /* a6628: ldp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* a662c: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* a6630: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* a6634: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* a6638: b #0xb9b9c */
  fn1_b9b9c(c); return;
L_a663c:;
  /* a663c: bti j */
  /* bti: no architectural effect here */
  /* a6640: cmp x9, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(2));
  /* a6644: b.ne #0xa676c */
  if (ARC_COND(c, 1)) goto L_a676c;
L_a6648:;
  /* a6648: add x8, x8, #3 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3)));
L_a664c:;
  /* a664c: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
  /* a6650: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* a6654: b #0xa61c8 */
  goto L_a61c8;
L_a6658:;
  /* a6658: bti j */
  /* bti: no architectural effect here */
  /* a665c: adrp x1, #0x51000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(331776)));
  /* a6660: add x1, x1, #0xa21 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2593)));
L_a6664:;
  /* a6664: add x8, x8, #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2)));
  /* a6668: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a666c: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
L_a6670:;
  /* a6670: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* a6674: ldr x23, [sp, #0x30] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(48))));
  /* a6678: ldp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* a667c: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* a6680: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* a6684: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
L_a6688:;
  /* a6688: b #0xb98ec */
  fn1_b98ec(c); return;
L_a668c:;
  /* a668c: bti j */
  /* bti: no architectural effect here */
  /* a6690: adrp x1, #0x50000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(327680)));
  /* a6694: add x1, x1, #0xf04 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3844)));
L_a6698:;
  /* a6698: add x8, x8, #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2)));
  /* a669c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a66a0: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* a66a4: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* a66a8: ldr x23, [sp, #0x30] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(48))));
  /* a66ac: ldp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* a66b0: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* a66b4: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* a66b8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* a66bc: b #0xb9998 */
  fn1_b9998(c); return;
L_a66c0:;
  /* a66c0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a66c4: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* a66c8: bl #0xa5170 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(681676));
  fn1_a5170(c);
  /* a66cc: stp x0, x1, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 0));
    arc_st64(_pa + 8, ARC_X_R(c, 1));
  }
  /* a66d0: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* a66d4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a66d8: bl #0xaa1f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(681692));
  fn1_aa1f0(c);
  /* a66dc: str x0, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 0));
L_a66e0:;
  /* a66e0: ldp x8, x9, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* a66e4: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* a66e8: b.eq #0xa6764 */
  if (ARC_COND(c, 0)) goto L_a6764;
  /* a66ec: ldrb w9, [x8] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 8)));
  /* a66f0: cmp w9, #0x5f */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(95));
  /* a66f4: b.ne #0xa6764 */
  if (ARC_COND(c, 1)) goto L_a6764;
  /* a66f8: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* a66fc: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* a6700: add x2, x29, #0x18 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) + UINT64_C(24)));
L_a6704:;
  /* a6704: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a6708: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* a670c: bl #0xba034 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(681744));
  fn1_ba034(c);
  /* a6710: b #0xa61c8 */
  goto L_a61c8;
L_a6714:;
  /* a6714: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a6718: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* a671c: bl #0xa5170 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(681760));
  fn1_a5170(c);
  /* a6720: stp x0, x1, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 0));
    arc_st64(_pa + 8, ARC_X_R(c, 1));
  }
  /* a6724: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* a6728: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a672c: bl #0xaa1f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(681776));
  fn1_aa1f0(c);
  /* a6730: ldp x8, x9, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* a6734: str x0, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 0));
  /* a6738: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* a673c: b.eq #0xa6764 */
  if (ARC_COND(c, 0)) goto L_a6764;
  /* a6740: ldrb w9, [x8] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 8)));
  /* a6744: cmp w9, #0x5f */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(95));
  /* a6748: b.ne #0xa6764 */
  if (ARC_COND(c, 1)) goto L_a6764;
  /* a674c: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* a6750: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* a6754: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a6758: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* a675c: bl #0xb9ce4 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(681824));
  fn1_b9ce4(c);
L_a6760:;
  /* a6760: b #0xa61c8 */
  goto L_a61c8;
L_a6764:;
  /* a6764: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
  /* a6768: b #0xa61c8 */
  goto L_a61c8;
L_a676c:;
  /* a676c: ldrb w9, [x8, #2] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 8) + INT64_C(2))));
  /* a6770: mov x10, xzr */
  ARC_X_W(c, 10, ARC_X_R(c, 31));
  /* a6774: add x8, x8, #3 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3)));
  /* a6778: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* a677c: cmp w9, #0x6c */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(108));
  /* a6780: b.gt #0xa67f0 */
  if (ARC_COND(c, 12)) goto L_a67f0;
  /* a6784: cmp w9, #0x69 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(105));
  /* a6788: b.eq #0xa68cc */
  if (ARC_COND(c, 0)) goto L_a68cc;
  /* a678c: cmp w9, #0x6a */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(106));
  /* a6790: b.eq #0xa691c */
  if (ARC_COND(c, 0)) goto L_a691c;
  /* a6794: cmp w9, #0x6c */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(108));
  /* a6798: mov x0, x10 */
  ARC_X_W(c, 0, ARC_X_R(c, 10));
  /* a679c: b.ne #0xa61c8 */
  if (ARC_COND(c, 1)) goto L_a61c8;
  /* a67a0: adrp x1, #0x50000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(327680)));
  /* a67a4: add x1, x1, #0xee3 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3811)));
L_a67a8:;
  /* a67a8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a67ac: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* a67b0: ldr x23, [sp, #0x30] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(48))));
  /* a67b4: ldp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* a67b8: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* a67bc: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* a67c0: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* a67c4: b #0xb9794 */
  fn1_b9794(c); return;
L_a67c8:;
  /* a67c8: cmp w9, #0x6d */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(109));
  /* a67cc: b.eq #0xa68a8 */
  if (ARC_COND(c, 0)) goto L_a68a8;
  /* a67d0: cmp w9, #0x74 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(116));
  /* a67d4: b.eq #0xa68c0 */
  if (ARC_COND(c, 0)) goto L_a68c0;
  /* a67d8: cmp w9, #0x73 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(115));
  /* a67dc: mov x0, x10 */
  ARC_X_W(c, 0, ARC_X_R(c, 10));
  /* a67e0: b.ne #0xa61c8 */
  if (ARC_COND(c, 1)) goto L_a61c8;
  /* a67e4: adrp x1, #0x52000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(335872)));
  /* a67e8: add x1, x1, #0x14d */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(333)));
  /* a67ec: b #0xa6814 */
  goto L_a6814;
L_a67f0:;
  /* a67f0: cmp w9, #0x6d */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(109));
  /* a67f4: b.eq #0xa68f4 */
  if (ARC_COND(c, 0)) goto L_a68f4;
  /* a67f8: cmp w9, #0x74 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(116));
  /* a67fc: b.eq #0xa6928 */
  if (ARC_COND(c, 0)) goto L_a6928;
  /* a6800: cmp w9, #0x73 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(115));
  /* a6804: mov x0, x10 */
  ARC_X_W(c, 0, ARC_X_R(c, 10));
  /* a6808: b.ne #0xa61c8 */
  if (ARC_COND(c, 1)) goto L_a61c8;
  /* a680c: adrp x1, #0x4f000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(323584)));
  /* a6810: add x1, x1, #0xfdd */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(4061)));
L_a6814:;
  /* a6814: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a6818: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* a681c: ldr x23, [sp, #0x30] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(48))));
  /* a6820: ldp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* a6824: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* a6828: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* a682c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* a6830: b #0xb9840 */
  fn1_b9840(c); return;
L_a6834:;
  /* a6834: cmp x9, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(2));
  /* a6838: b.ls #0xa6894 */
  if (ARC_COND(c, 9)) goto L_a6894;
  /* a683c: ldrb w9, [x8, #4] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 8) + INT64_C(4))));
  /* a6840: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
  /* a6844: add x8, x8, #5 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(5)));
  /* a6848: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* a684c: cmp w9, #0x6c */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(108));
  /* a6850: b.gt #0xa6974 */
  if (ARC_COND(c, 12)) goto L_a6974;
  /* a6854: cmp w9, #0x69 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(105));
  /* a6858: b.eq #0xa69cc */
  if (ARC_COND(c, 0)) goto L_a69cc;
  /* a685c: cmp w9, #0x6a */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(106));
  /* a6860: b.eq #0xa6a18 */
  if (ARC_COND(c, 0)) goto L_a6a18;
  /* a6864: cmp w9, #0x6c */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(108));
  /* a6868: b.ne #0xa61c8 */
  if (ARC_COND(c, 1)) goto L_a61c8;
  /* a686c: adrp x1, #0x50000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(327680)));
  /* a6870: add x1, x1, #0xb6c */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2924)));
L_a6874:;
  /* a6874: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a6878: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* a687c: ldr x23, [sp, #0x30] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(48))));
  /* a6880: ldp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* a6884: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* a6888: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* a688c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* a6890: b #0xb9edc */
  fn1_b9edc(c); return;
L_a6894:;
  /* a6894: add x8, x8, #5 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(5)));
  /* a6898: b #0xa664c */
  goto L_a664c;
L_a689c:;
  /* a689c: adrp x1, #0x51000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(331776)));
  /* a68a0: add x1, x1, #0xfae */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(4014)));
  /* a68a4: b #0xa68d4 */
  goto L_a68d4;
L_a68a8:;
  /* a68a8: adrp x1, #0x4f000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(323584)));
  /* a68ac: add x1, x1, #0xa6b */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2667)));
  /* a68b0: b #0xa68fc */
  goto L_a68fc;
L_a68b4:;
  /* a68b4: adrp x1, #0x50000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(327680)));
  /* a68b8: add x1, x1, #0x19e */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(414)));
  /* a68bc: b #0xa6588 */
  goto L_a6588;
L_a68c0:;
  /* a68c0: adrp x1, #0x52000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(335872)));
  /* a68c4: add x1, x1, #0x31b */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(795)));
  /* a68c8: b #0xa6930 */
  goto L_a6930;
L_a68cc:;
  /* a68cc: adrp x1, #0x4f000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(323584)));
  /* a68d0: add x1, x1, #0xea5 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3749)));
L_a68d4:;
  /* a68d4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a68d8: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* a68dc: ldr x23, [sp, #0x30] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(48))));
  /* a68e0: ldp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* a68e4: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* a68e8: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* a68ec: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* a68f0: b #0xb9af0 */
  fn1_b9af0(c); return;
L_a68f4:;
  /* a68f4: adrp x1, #0x4f000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(323584)));
  /* a68f8: add x1, x1, #0xeac */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3756)));
L_a68fc:;
  /* a68fc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a6900: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* a6904: ldr x23, [sp, #0x30] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(48))));
  /* a6908: ldp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* a690c: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* a6910: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* a6914: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* a6918: b #0xb9d84 */
  fn1_b9d84(c); return;
L_a691c:;
  /* a691c: adrp x1, #0x50000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(327680)));
  /* a6920: add x1, x1, #0xc59 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3161)));
  /* a6924: b #0xa6588 */
  goto L_a6588;
L_a6928:;
  /* a6928: adrp x1, #0x51000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(331776)));
  /* a692c: add x1, x1, #0xbb7 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2999)));
L_a6930:;
  /* a6930: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a6934: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* a6938: ldr x23, [sp, #0x30] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(48))));
  /* a693c: ldp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* a6940: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* a6944: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* a6948: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* a694c: b #0xa8adc */
  fn1_a8adc(c); return;
L_a6950:;
  /* a6950: cmp w9, #0x6d */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(109));
  /* a6954: b.eq #0xa69c0 */
  if (ARC_COND(c, 0)) goto L_a69c0;
  /* a6958: cmp w9, #0x74 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(116));
  /* a695c: b.eq #0xa6a0c */
  if (ARC_COND(c, 0)) goto L_a6a0c;
  /* a6960: cmp w9, #0x73 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(115));
  /* a6964: b.ne #0xa61c8 */
  if (ARC_COND(c, 1)) goto L_a61c8;
  /* a6968: adrp x1, #0x51000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(331776)));
  /* a696c: add x1, x1, #0x517 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1303)));
  /* a6970: b #0xa6994 */
  goto L_a6994;
L_a6974:;
  /* a6974: cmp w9, #0x6d */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(109));
  /* a6978: b.eq #0xa69d8 */
  if (ARC_COND(c, 0)) goto L_a69d8;
  /* a697c: cmp w9, #0x74 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(116));
  /* a6980: b.eq #0xa6a24 */
  if (ARC_COND(c, 0)) goto L_a6a24;
  /* a6984: cmp w9, #0x73 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(115));
  /* a6988: b.ne #0xa61c8 */
  if (ARC_COND(c, 1)) goto L_a61c8;
  /* a698c: adrp x1, #0x51000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(331776)));
  /* a6990: add x1, x1, #0x88e */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2190)));
L_a6994:;
  /* a6994: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a6998: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* a699c: ldr x23, [sp, #0x30] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(48))));
  /* a69a0: ldp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* a69a4: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* a69a8: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* a69ac: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* a69b0: b #0xb9a44 */
  fn1_b9a44(c); return;
L_a69b4:;
  /* a69b4: adrp x1, #0x50000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(327680)));
  /* a69b8: add x1, x1, #0xc69 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3177)));
  /* a69bc: b #0xa67a8 */
  goto L_a67a8;
L_a69c0:;
  /* a69c0: adrp x1, #0x50000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(327680)));
  /* a69c4: add x1, x1, #0xb52 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2898)));
  /* a69c8: b #0xa69e0 */
  goto L_a69e0;
L_a69cc:;
  /* a69cc: adrp x1, #0x52000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(335872)));
  /* a69d0: add x1, x1, #0x509 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1289)));
  /* a69d4: b #0xa67a8 */
  goto L_a67a8;
L_a69d8:;
  /* a69d8: adrp x1, #0x50000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(327680)));
  /* a69dc: add x1, x1, #0x67f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1663)));
L_a69e0:;
  /* a69e0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a69e4: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* a69e8: ldr x23, [sp, #0x30] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(48))));
  /* a69ec: ldp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* a69f0: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* a69f4: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* a69f8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* a69fc: b #0xb9f88 */
  fn1_b9f88(c); return;
L_a6a00:;
  /* a6a00: adrp x1, #0x51000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(331776)));
  /* a6a04: add x1, x1, #0xfb5 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(4021)));
  /* a6a08: b #0xa68fc */
  goto L_a68fc;
L_a6a0c:;
  /* a6a0c: adrp x1, #0x51000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(331776)));
  /* a6a10: add x1, x1, #0xe82 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3714)));
  /* a6a14: b #0xa6a2c */
  goto L_a6a2c;
L_a6a18:;
  /* a6a18: adrp x1, #0x50000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(327680)));
  /* a6a1c: add x1, x1, #0xeef */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3823)));
  /* a6a20: b #0xa68fc */
  goto L_a68fc;
L_a6a24:;
  /* a6a24: adrp x1, #0x52000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(335872)));
  /* a6a28: add x1, x1, #0x4ee */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1262)));
L_a6a2c:;
  /* a6a2c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a6a30: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* a6a34: ldr x23, [sp, #0x30] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(48))));
  /* a6a38: ldp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* a6a3c: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* a6a40: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* a6a44: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* a6a48: b #0xb9e30 */
  fn1_b9e30(c); return;
L_a6a4c:;
  /* a6a4c: bl #0x142488 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(682576));
  fn1_142488(c);
L_a6a50:;
  /* a6a50: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(682580));
  fn1_1427b8(c);
}

void fn1_abefc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038632188));
  /* abefc: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* abf00: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* abf04: stp x24, x23, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* abf08: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* abf0c: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* abf10: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* abf14: ldr x24, [x0, #0x1330] */
  ARC_X_W(c, 24, arc_ld64((ARC_X_R(c, 0) + INT64_C(4912))));
  /* abf18: mov x21, x4 */
  ARC_X_W(c, 21, ARC_X_R(c, 4));
  /* abf1c: mov x19, x3 */
  ARC_X_W(c, 19, ARC_X_R(c, 3));
  /* abf20: mov x20, x2 */
  ARC_X_W(c, 20, ARC_X_R(c, 2));
  /* abf24: mov x22, x1 */
  ARC_X_W(c, 22, ARC_X_R(c, 1));
  /* abf28: ldr x8, [x24, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 24) + INT64_C(8))));
  /* abf2c: sub x9, x8, #0xfc0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4032)));
  /* abf30: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* abf34: b.hi #0xabf58 */
  if (ARC_COND(c, 8)) goto L_abf58;
  /* abf38: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* abf3c: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* abf40: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(704324));
  fn1_1428a8(c);
  /* abf44: cbz x0, #0xabfc0 */
  if ((ARC_X_R(c, 0)) == 0) goto L_abfc0;
  /* abf48: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* abf4c: stp x24, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* abf50: mov x24, x0 */
  ARC_X_W(c, 24, ARC_X_R(c, 0));
  /* abf54: str x0, [x23, #0x1330] */
  arc_st64((ARC_X_R(c, 23) + INT64_C(4912)), ARC_X_R(c, 0));
L_abf58:;
  /* abf58: add x9, x8, #0x30 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(48)));
  /* abf5c: add x0, x24, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 24) + ARC_X_R(c, 8)));
  /* abf60: adrp x8, #0x14a000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1351680)));
  /* abf64: add x8, x8, #0x5a0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1440)));
  /* abf68: str x9, [x24, #8] */
  arc_st64((ARC_X_R(c, 24) + INT64_C(8)), ARC_X_R(c, 9));
  /* abf6c: mov w11, #0x39 */
  ARC_W_W(c, 11, UINT64_C(57));
  /* abf70: str x8, [x0, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* abf74: ldurh w8, [x0, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 0) + INT64_C(9))));
  /* abf78: ldrh w9, [x21] */
  ARC_W_W(c, 9, arc_ld16(ARC_X_R(c, 21)));
  /* abf7c: ldr x10, [x22] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 22)));
  /* abf80: ldr x12, [x20] */
  ARC_X_W(c, 12, arc_ld64(ARC_X_R(c, 20)));
  /* abf84: and w8, w8, #0xf000 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(61440)));
  /* abf88: strb w11, [x0, #8] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 11));
  /* abf8c: mov w11, #0x540 */
  ARC_W_W(c, 11, UINT64_C(1344));
  /* abf90: bfxil w8, w9, #0, #6 */
  ARC_W_W(c, 8, (((uint32_t)(ARC_W_R(c, 8)) & UINT64_C(4294967232)) | ((((uint32_t)(ARC_W_R(c, 9))) >> 0) & UINT64_C(63))));
  /* abf94: ldr x9, [x19] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 19)));
  /* abf98: stp x10, x12, [x0, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 10));
    arc_st64(_pa + 8, ARC_X_R(c, 12));
  }
  /* abf9c: orr w8, w8, w11 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | ARC_W_R(c, 11)));
  /* abfa0: sturh w8, [x0, #9] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(9)), ARC_W_R(c, 8));
  /* abfa4: str x9, [x0, #0x20] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(32)), ARC_X_R(c, 9));
  /* abfa8: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* abfac: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* abfb0: ldp x24, x23, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* abfb4: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* abfb8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* abfbc: ret  */
  return;
L_abfc0:;
  /* abfc0: bl #0x142488 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(704452));
  fn1_142488(c);
}

void fn1_b2404(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038658052));
L_b2404:;
  /* b2404: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* b2408: sub sp, sp, #0xd0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(208)));
  /* b240c: stp x29, x30, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b2410: stp x28, x27, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* b2414: stp x26, x25, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* b2418: stp x24, x23, [sp, #0xa0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(160));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* b241c: stp x22, x21, [sp, #0xb0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(176));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* b2420: stp x20, x19, [sp, #0xc0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(192));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* b2424: add x29, sp, #0x70 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(112)));
  /* b2428: ldp x8, x9, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* b242c: sub x9, x9, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - ARC_X_R(c, 8)));
  /* b2430: cmp x9, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(2));
  /* b2434: b.hs #0xb2440 */
  if (ARC_COND(c, 2)) goto L_b2440;
L_b2438:;
  /* b2438: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
  /* b243c: b #0xb2cbc */
  goto L_b2cbc;
L_b2440:;
  /* b2440: ldrh w9, [x8] */
  ARC_W_W(c, 9, arc_ld16(ARC_X_R(c, 8)));
  /* b2444: mov w10, #0x7954 */
  ARC_W_W(c, 10, UINT64_C(31060));
  /* b2448: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* b244c: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* b2450: cmp w9, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 9), ARC_W_R(c, 10));
  /* b2454: b.eq #0xb24c4 */
  if (ARC_COND(c, 0)) goto L_b24c4;
  /* b2458: ldrh w9, [x8] */
  ARC_W_W(c, 9, arc_ld16(ARC_X_R(c, 8)));
  /* b245c: mov w10, #0x6b54 */
  ARC_W_W(c, 10, UINT64_C(27476));
  /* b2460: cmp w9, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 9), ARC_W_R(c, 10));
  /* b2464: b.eq #0xb257c */
  if (ARC_COND(c, 0)) goto L_b257c;
  /* b2468: ldrh w9, [x8] */
  ARC_W_W(c, 9, arc_ld16(ARC_X_R(c, 8)));
  /* b246c: mov w10, #0x6e54 */
  ARC_W_W(c, 10, UINT64_C(28244));
  /* b2470: cmp w9, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 9), ARC_W_R(c, 10));
  /* b2474: b.eq #0xb2654 */
  if (ARC_COND(c, 0)) goto L_b2654;
  /* b2478: ldrh w9, [x8] */
  ARC_W_W(c, 9, arc_ld16(ARC_X_R(c, 8)));
  /* b247c: mov w10, #0x7454 */
  ARC_W_W(c, 10, UINT64_C(29780));
  /* b2480: cmp w9, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 9), ARC_W_R(c, 10));
  /* b2484: b.eq #0xb2710 */
  if (ARC_COND(c, 0)) goto L_b2710;
  /* b2488: ldrh w9, [x8] */
  ARC_W_W(c, 9, arc_ld16(ARC_X_R(c, 8)));
  /* b248c: mov w10, #0x7054 */
  ARC_W_W(c, 10, UINT64_C(28756));
  /* b2490: cmp w9, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 9), ARC_W_R(c, 10));
  /* b2494: b.ne #0xb2438 */
  if (ARC_COND(c, 1)) goto L_b2438;
  /* b2498: add x8, x8, #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2)));
  /* b249c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* b24a0: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* b24a4: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* b24a8: bl #0xb2404 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(730284));
  fn1_b2404(c);
  /* b24ac: str x0, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 0));
  /* b24b0: cbz x0, #0xb2cbc */
  if ((ARC_X_R(c, 0)) == 0) goto L_b2cbc;
  /* b24b4: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* b24b8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* b24bc: bl #0xb30ac */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(730304));
  fn1_b30ac(c);
  /* b24c0: b #0xb2cbc */
  goto L_b2cbc;
L_b24c4:;
  /* b24c4: ldr w21, [x19, #0x318] */
  ARC_W_W(c, 21, arc_ld32((ARC_X_R(c, 19) + INT64_C(792))));
  /* b24c8: add x8, x8, #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2)));
  /* b24cc: ldr x22, [x19, #0x1330] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 19) + INT64_C(4912))));
  /* b24d0: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* b24d4: add w8, w21, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 21) + UINT64_C(1)));
  /* b24d8: str w8, [x19, #0x318] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(792)), ARC_W_R(c, 8));
  /* b24dc: ldr x8, [x22, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 22) + INT64_C(8))));
  /* b24e0: sub x9, x8, #0xfd0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4048)));
  /* b24e4: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* b24e8: b.hi #0xb2508 */
  if (ARC_COND(c, 8)) goto L_b2508;
  /* b24ec: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* b24f0: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(730356));
  fn1_1428a8(c);
  /* b24f4: cbz x0, #0xb2ce0 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b2ce0;
  /* b24f8: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* b24fc: stp x22, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* b2500: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* b2504: str x0, [x19, #0x1330] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(4912)), ARC_X_R(c, 0));
L_b2508:;
  /* b2508: add x9, x8, #0x20 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(32)));
  /* b250c: add x24, x22, x8 */
  ARC_X_W(c, 24, (ARC_X_R(c, 22) + ARC_X_R(c, 8)));
  /* b2510: adrp x8, #0x14a000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1351680)));
  /* b2514: add x8, x8, #0xa50 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2640)));
  /* b2518: str x9, [x22, #8] */
  arc_st64((ARC_X_R(c, 22) + INT64_C(8)), ARC_X_R(c, 9));
  /* b251c: mov w10, #0x540 */
  ARC_W_W(c, 10, UINT64_C(1344));
  /* b2520: str x8, [x24, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 24) + INT64_C(16));
    ARC_X_W(c, 24, ARC_X_R(c, 24) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* b2524: ldurh w8, [x24, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 24) + INT64_C(9))));
  /* b2528: mov w9, #0x21 */
  ARC_W_W(c, 9, UINT64_C(33));
  /* b252c: stp wzr, w21, [x24, #0xc] */
  { const uint64_t _pa = (ARC_X_R(c, 24) + INT64_C(12));
    arc_st32(_pa, ARC_W_R(c, 31));
    arc_st32(_pa + 4, ARC_W_R(c, 21));
  }
  /* b2530: and w8, w8, #0xf000 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(61440)));
  /* b2534: strb w9, [x24, #8] */
  arc_st8((ARC_X_R(c, 24) + INT64_C(8)), ARC_W_R(c, 9));
  /* b2538: orr w8, w8, w10 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | ARC_W_R(c, 10)));
  /* b253c: sturh w8, [x24, #9] */
  arc_st16((ARC_X_R(c, 24) + INT64_C(9)), ARC_W_R(c, 8));
  /* b2540: cbz x20, #0xb281c */
  if ((ARC_X_R(c, 20)) == 0) goto L_b281c;
  /* b2544: ldp x23, x8, [x20, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(8));
    ARC_X_W(c, 23, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* b2548: cmp x23, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 8));
  /* b254c: b.ne #0xb2814 */
  if (ARC_COND(c, 1)) goto L_b2814;
  /* b2550: mov x25, x20 */
  ARC_X_W(c, 25, ARC_X_R(c, 20));
  /* b2554: ldr x22, [x25], #0x18 */
  { const uint64_t _a = ARC_X_R(c, 25);
    ARC_X_W(c, 25, ARC_X_R(c, 25) + INT64_C(24));
    ARC_X_W(c, 22, arc_ld64(_a));
  }
  /* b2558: sub x21, x23, x22 */
  ARC_X_W(c, 21, (ARC_X_R(c, 23) - ARC_X_R(c, 22)));
  /* b255c: cmp x22, x25 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 25));
  /* b2560: lsl x1, x21, #1 */
  ARC_X_W(c, 1, ((uint64_t)(ARC_X_R(c, 21)) << ((UINT64_C(1)) & 63)));
  /* b2564: b.eq #0xb27d8 */
  if (ARC_COND(c, 0)) goto L_b27d8;
  /* b2568: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* b256c: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(730480));
  fn1_142878(c);
  /* b2570: str x0, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 0));
  /* b2574: cbnz x0, #0xb2804 */
  if ((ARC_X_R(c, 0)) != 0) goto L_b2804;
  /* b2578: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(730492));
  fn1_1427b8(c);
L_b257c:;
  /* b257c: ldrb w25, [x19, #0x30a] */
  ARC_W_W(c, 25, arc_ld8((ARC_X_R(c, 19) + INT64_C(778))));
  /* b2580: add x8, x8, #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2)));
  /* b2584: mov w9, #1 */
  ARC_W_W(c, 9, UINT64_C(1));
  /* b2588: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* b258c: strb w9, [x19, #0x30a] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(778)), ARC_W_R(c, 9));
  /* b2590: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* b2594: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* b2598: bl #0xa6c18 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(730524));
  fn1_a6c18(c);
  /* b259c: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* b25a0: cbz x0, #0xb27cc */
  if ((ARC_X_R(c, 0)) == 0) goto L_b27cc;
  /* b25a4: ldr w22, [x19, #0x318] */
  ARC_W_W(c, 22, arc_ld32((ARC_X_R(c, 19) + INT64_C(792))));
  /* b25a8: ldr x23, [x19, #0x1330] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 19) + INT64_C(4912))));
  /* b25ac: add w8, w22, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 22) + UINT64_C(1)));
  /* b25b0: str w8, [x19, #0x318] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(792)), ARC_W_R(c, 8));
  /* b25b4: ldr x8, [x23, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 23) + INT64_C(8))));
  /* b25b8: sub x9, x8, #0xfd0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4048)));
  /* b25bc: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* b25c0: b.hi #0xb25e0 */
  if (ARC_COND(c, 8)) goto L_b25e0;
  /* b25c4: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* b25c8: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(730572));
  fn1_1428a8(c);
  /* b25cc: cbz x0, #0xb2ce0 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b2ce0;
  /* b25d0: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* b25d4: stp x23, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 23));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* b25d8: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* b25dc: str x0, [x19, #0x1330] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(4912)), ARC_X_R(c, 0));
L_b25e0:;
  /* b25e0: add x9, x8, #0x20 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(32)));
  /* b25e4: add x26, x23, x8 */
  ARC_X_W(c, 26, (ARC_X_R(c, 23) + ARC_X_R(c, 8)));
  /* b25e8: adrp x8, #0x14a000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1351680)));
  /* b25ec: add x8, x8, #0xa50 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2640)));
  /* b25f0: str x9, [x23, #8] */
  arc_st64((ARC_X_R(c, 23) + INT64_C(8)), ARC_X_R(c, 9));
  /* b25f4: mov w10, #0x540 */
  ARC_W_W(c, 10, UINT64_C(1344));
  /* b25f8: str x8, [x26, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 26) + INT64_C(16));
    ARC_X_W(c, 26, ARC_X_R(c, 26) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* b25fc: ldurh w8, [x26, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 26) + INT64_C(9))));
  /* b2600: mov w9, #0x21 */
  ARC_W_W(c, 9, UINT64_C(33));
  /* b2604: stp wzr, w22, [x26, #0xc] */
  { const uint64_t _pa = (ARC_X_R(c, 26) + INT64_C(12));
    arc_st32(_pa, ARC_W_R(c, 31));
    arc_st32(_pa + 4, ARC_W_R(c, 22));
  }
  /* b2608: and w8, w8, #0xf000 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(61440)));
  /* b260c: strb w9, [x26, #8] */
  arc_st8((ARC_X_R(c, 26) + INT64_C(8)), ARC_W_R(c, 9));
  /* b2610: orr w8, w8, w10 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | ARC_W_R(c, 10)));
  /* b2614: sturh w8, [x26, #9] */
  arc_st16((ARC_X_R(c, 26) + INT64_C(9)), ARC_W_R(c, 8));
  /* b2618: cbz x20, #0xb297c */
  if ((ARC_X_R(c, 20)) == 0) goto L_b297c;
  /* b261c: ldp x24, x8, [x20, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(8));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* b2620: cmp x24, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 24), ARC_X_R(c, 8));
  /* b2624: b.ne #0xb2974 */
  if (ARC_COND(c, 1)) goto L_b2974;
  /* b2628: mov x27, x20 */
  ARC_X_W(c, 27, ARC_X_R(c, 20));
  /* b262c: ldr x23, [x27], #0x18 */
  { const uint64_t _a = ARC_X_R(c, 27);
    ARC_X_W(c, 27, ARC_X_R(c, 27) + INT64_C(24));
    ARC_X_W(c, 23, arc_ld64(_a));
  }
  /* b2630: sub x22, x24, x23 */
  ARC_X_W(c, 22, (ARC_X_R(c, 24) - ARC_X_R(c, 23)));
  /* b2634: cmp x23, x27 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 27));
  /* b2638: lsl x1, x22, #1 */
  ARC_X_W(c, 1, ((uint64_t)(ARC_X_R(c, 22)) << ((UINT64_C(1)) & 63)));
  /* b263c: b.eq #0xb2938 */
  if (ARC_COND(c, 0)) goto L_b2938;
  /* b2640: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* b2644: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(730696));
  fn1_142878(c);
  /* b2648: str x0, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 0));
  /* b264c: cbnz x0, #0xb2964 */
  if ((ARC_X_R(c, 0)) != 0) goto L_b2964;
  /* b2650: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(730708));
  fn1_1427b8(c);
L_b2654:;
  /* b2654: ldr w21, [x19, #0x31c] */
  ARC_W_W(c, 21, arc_ld32((ARC_X_R(c, 19) + INT64_C(796))));
  /* b2658: add x8, x8, #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2)));
  /* b265c: ldr x22, [x19, #0x1330] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 19) + INT64_C(4912))));
  /* b2660: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* b2664: add w8, w21, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 21) + UINT64_C(1)));
  /* b2668: str w8, [x19, #0x31c] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(796)), ARC_W_R(c, 8));
  /* b266c: ldr x8, [x22, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 22) + INT64_C(8))));
  /* b2670: sub x9, x8, #0xfd0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4048)));
  /* b2674: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* b2678: b.hi #0xb2698 */
  if (ARC_COND(c, 8)) goto L_b2698;
  /* b267c: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* b2680: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(730756));
  fn1_1428a8(c);
  /* b2684: cbz x0, #0xb2ce0 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b2ce0;
  /* b2688: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* b268c: stp x22, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* b2690: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* b2694: str x0, [x19, #0x1330] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(4912)), ARC_X_R(c, 0));
L_b2698:;
  /* b2698: add x9, x8, #0x20 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(32)));
  /* b269c: add x24, x22, x8 */
  ARC_X_W(c, 24, (ARC_X_R(c, 22) + ARC_X_R(c, 8)));
  /* b26a0: adrp x8, #0x14a000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1351680)));
  /* b26a4: add x8, x8, #0xa50 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2640)));
  /* b26a8: str x9, [x22, #8] */
  arc_st64((ARC_X_R(c, 22) + INT64_C(8)), ARC_X_R(c, 9));
  /* b26ac: mov w9, #0x21 */
  ARC_W_W(c, 9, UINT64_C(33));
  /* b26b0: str x8, [x24, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 24) + INT64_C(16));
    ARC_X_W(c, 24, ARC_X_R(c, 24) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* b26b4: ldurh w8, [x24, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 24) + INT64_C(9))));
  /* b26b8: mov w10, #0x540 */
  ARC_W_W(c, 10, UINT64_C(1344));
  /* b26bc: strb w9, [x24, #8] */
  arc_st8((ARC_X_R(c, 24) + INT64_C(8)), ARC_W_R(c, 9));
  /* b26c0: mov w9, #1 */
  ARC_W_W(c, 9, UINT64_C(1));
  /* b26c4: and w8, w8, #0xf000 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(61440)));
  /* b26c8: stp w9, w21, [x24, #0xc] */
  { const uint64_t _pa = (ARC_X_R(c, 24) + INT64_C(12));
    arc_st32(_pa, ARC_W_R(c, 9));
    arc_st32(_pa + 4, ARC_W_R(c, 21));
  }
  /* b26cc: orr w8, w8, w10 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | ARC_W_R(c, 10)));
  /* b26d0: sturh w8, [x24, #9] */
  arc_st16((ARC_X_R(c, 24) + INT64_C(9)), ARC_W_R(c, 8));
  /* b26d4: cbz x20, #0xb28cc */
  if ((ARC_X_R(c, 20)) == 0) goto L_b28cc;
  /* b26d8: ldp x23, x8, [x20, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(8));
    ARC_X_W(c, 23, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* b26dc: cmp x23, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 8));
  /* b26e0: b.ne #0xb28c4 */
  if (ARC_COND(c, 1)) goto L_b28c4;
  /* b26e4: mov x25, x20 */
  ARC_X_W(c, 25, ARC_X_R(c, 20));
  /* b26e8: ldr x22, [x25], #0x18 */
  { const uint64_t _a = ARC_X_R(c, 25);
    ARC_X_W(c, 25, ARC_X_R(c, 25) + INT64_C(24));
    ARC_X_W(c, 22, arc_ld64(_a));
  }
  /* b26ec: sub x21, x23, x22 */
  ARC_X_W(c, 21, (ARC_X_R(c, 23) - ARC_X_R(c, 22)));
  /* b26f0: cmp x22, x25 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 25));
  /* b26f4: lsl x1, x21, #1 */
  ARC_X_W(c, 1, ((uint64_t)(ARC_X_R(c, 21)) << ((UINT64_C(1)) & 63)));
  /* b26f8: b.eq #0xb2888 */
  if (ARC_COND(c, 0)) goto L_b2888;
  /* b26fc: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* b2700: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(730884));
  fn1_142878(c);
  /* b2704: str x0, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 0));
  /* b2708: cbnz x0, #0xb28b4 */
  if ((ARC_X_R(c, 0)) != 0) goto L_b28b4;
  /* b270c: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(730896));
  fn1_1427b8(c);
L_b2710:;
  /* b2710: ldr w21, [x19, #0x320] */
  ARC_W_W(c, 21, arc_ld32((ARC_X_R(c, 19) + INT64_C(800))));
  /* b2714: add x8, x8, #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2)));
  /* b2718: ldr x22, [x19, #0x1330] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 19) + INT64_C(4912))));
  /* b271c: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* b2720: add w8, w21, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 21) + UINT64_C(1)));
  /* b2724: str w8, [x19, #0x320] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(800)), ARC_W_R(c, 8));
  /* b2728: ldr x8, [x22, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 22) + INT64_C(8))));
  /* b272c: sub x9, x8, #0xfd0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4048)));
  /* b2730: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* b2734: b.hi #0xb2754 */
  if (ARC_COND(c, 8)) goto L_b2754;
  /* b2738: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* b273c: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(730944));
  fn1_1428a8(c);
  /* b2740: cbz x0, #0xb2ce0 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b2ce0;
  /* b2744: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* b2748: stp x22, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* b274c: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* b2750: str x0, [x19, #0x1330] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(4912)), ARC_X_R(c, 0));
L_b2754:;
  /* b2754: add x9, x8, #0x20 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(32)));
  /* b2758: add x25, x22, x8 */
  ARC_X_W(c, 25, (ARC_X_R(c, 22) + ARC_X_R(c, 8)));
  /* b275c: adrp x8, #0x14a000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1351680)));
  /* b2760: add x8, x8, #0xa50 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2640)));
  /* b2764: str x9, [x22, #8] */
  arc_st64((ARC_X_R(c, 22) + INT64_C(8)), ARC_X_R(c, 9));
  /* b2768: mov w9, #0x21 */
  ARC_W_W(c, 9, UINT64_C(33));
  /* b276c: str x8, [x25, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 25) + INT64_C(16));
    ARC_X_W(c, 25, ARC_X_R(c, 25) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* b2770: ldurh w8, [x25, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 25) + INT64_C(9))));
  /* b2774: mov w10, #0x540 */
  ARC_W_W(c, 10, UINT64_C(1344));
  /* b2778: strb w9, [x25, #8] */
  arc_st8((ARC_X_R(c, 25) + INT64_C(8)), ARC_W_R(c, 9));
  /* b277c: mov w9, #2 */
  ARC_W_W(c, 9, UINT64_C(2));
  /* b2780: and w8, w8, #0xf000 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(61440)));
  /* b2784: stp w9, w21, [x25, #0xc] */
  { const uint64_t _pa = (ARC_X_R(c, 25) + INT64_C(12));
    arc_st32(_pa, ARC_W_R(c, 9));
    arc_st32(_pa + 4, ARC_W_R(c, 21));
  }
  /* b2788: orr w8, w8, w10 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | ARC_W_R(c, 10)));
  /* b278c: sturh w8, [x25, #9] */
  arc_st16((ARC_X_R(c, 25) + INT64_C(9)), ARC_W_R(c, 8));
  /* b2790: cbz x20, #0xb2a30 */
  if ((ARC_X_R(c, 20)) == 0) goto L_b2a30;
  /* b2794: ldp x23, x8, [x20, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(8));
    ARC_X_W(c, 23, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* b2798: cmp x23, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 8));
  /* b279c: b.ne #0xb2a28 */
  if (ARC_COND(c, 1)) goto L_b2a28;
  /* b27a0: mov x8, x20 */
  ARC_X_W(c, 8, ARC_X_R(c, 20));
  /* b27a4: ldr x22, [x8], #0x18 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(24));
    ARC_X_W(c, 22, arc_ld64(_a));
  }
  /* b27a8: sub x21, x23, x22 */
  ARC_X_W(c, 21, (ARC_X_R(c, 23) - ARC_X_R(c, 22)));
  /* b27ac: cmp x22, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 8));
  /* b27b0: lsl x1, x21, #1 */
  ARC_X_W(c, 1, ((uint64_t)(ARC_X_R(c, 21)) << ((UINT64_C(1)) & 63)));
  /* b27b4: b.eq #0xb29ec */
  if (ARC_COND(c, 0)) goto L_b29ec;
  /* b27b8: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* b27bc: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(731072));
  fn1_142878(c);
  /* b27c0: str x0, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 0));
  /* b27c4: cbnz x0, #0xb2a18 */
  if ((ARC_X_R(c, 0)) != 0) goto L_b2a18;
  /* b27c8: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(731084));
  fn1_1427b8(c);
L_b27cc:;
  /* b27cc: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
  /* b27d0: strb w25, [x19, #0x30a] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(778)), ARC_W_R(c, 25));
  /* b27d4: b #0xb2cbc */
  goto L_b2cbc;
L_b27d8:;
  /* b27d8: mov x0, x1 */
  ARC_X_W(c, 0, ARC_X_R(c, 1));
  /* b27dc: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(731104));
  fn1_1428a8(c);
  /* b27e0: cbz x0, #0xb2d0c */
  if ((ARC_X_R(c, 0)) == 0) goto L_b2d0c;
  /* b27e4: cmp x23, x25 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 25));
  /* b27e8: b.eq #0xb2800 */
  if (ARC_COND(c, 0)) goto L_b2800;
  /* b27ec: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* b27f0: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* b27f4: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* b27f8: bl #0x1449f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(731132));
  fn1_1449f0(c);
  /* b27fc: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
L_b2800:;
  /* b2800: str x0, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 0));
L_b2804:;
  /* b2804: asr x8, x21, #2 */
  ARC_X_W(c, 8, ((uint64_t)((int64_t)(ARC_X_R(c, 21)) >> ((UINT64_C(2)) & 63))));
  /* b2808: add x23, x0, x21 */
  ARC_X_W(c, 23, (ARC_X_R(c, 0) + ARC_X_R(c, 21)));
  /* b280c: add x8, x0, x8, lsl #3 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + ((uint64_t)(ARC_X_R(c, 8)) << 3)));
  /* b2810: str x8, [x20, #0x10] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(16)), ARC_X_R(c, 8));
L_b2814:;
  /* b2814: str x24, [x23], #8 */
  { const uint64_t _a = ARC_X_R(c, 23);
    ARC_X_W(c, 23, ARC_X_R(c, 23) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 24));
  }
  /* b2818: str x23, [x20, #8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(8)), ARC_X_R(c, 23));
L_b281c:;
  /* b281c: ldr x20, [x19, #0x1330] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 19) + INT64_C(4912))));
  /* b2820: ldr x8, [x20, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(8))));
  /* b2824: sub x9, x8, #0xfd0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4048)));
  /* b2828: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* b282c: b.hi #0xb284c */
  if (ARC_COND(c, 8)) goto L_b284c;
  /* b2830: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* b2834: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(731192));
  fn1_1428a8(c);
  /* b2838: cbz x0, #0xb2ce0 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b2ce0;
  /* b283c: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* b2840: stp x20, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* b2844: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* b2848: str x0, [x19, #0x1330] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(4912)), ARC_X_R(c, 0));
L_b284c:;
  /* b284c: add x9, x8, #0x20 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(32)));
  /* b2850: add x0, x20, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + ARC_X_R(c, 8)));
  /* b2854: adrp x8, #0x14a000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1351680)));
  /* b2858: add x8, x8, #0xac8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2760)));
  /* b285c: str x9, [x20, #8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(8)), ARC_X_R(c, 9));
  /* b2860: mov w10, #0x500 */
  ARC_W_W(c, 10, UINT64_C(1280));
  /* b2864: str x8, [x0, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* b2868: ldurh w8, [x0, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 0) + INT64_C(9))));
  /* b286c: mov w9, #0x23 */
  ARC_W_W(c, 9, UINT64_C(35));
  /* b2870: str x24, [x0, #0x10] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(16)), ARC_X_R(c, 24));
L_b2874:;
  /* b2874: and w8, w8, #0xf000 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(61440)));
  /* b2878: strb w9, [x0, #8] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 9));
  /* b287c: orr w8, w8, w10 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | ARC_W_R(c, 10)));
  /* b2880: sturh w8, [x0, #9] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(9)), ARC_W_R(c, 8));
  /* b2884: b #0xb2cbc */
  goto L_b2cbc;
L_b2888:;
  /* b2888: mov x0, x1 */
  ARC_X_W(c, 0, ARC_X_R(c, 1));
  /* b288c: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(731280));
  fn1_1428a8(c);
  /* b2890: cbz x0, #0xb2d10 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b2d10;
  /* b2894: cmp x23, x25 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 25));
  /* b2898: b.eq #0xb28b0 */
  if (ARC_COND(c, 0)) goto L_b28b0;
  /* b289c: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* b28a0: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* b28a4: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* b28a8: bl #0x1449f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(731308));
  fn1_1449f0(c);
  /* b28ac: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
L_b28b0:;
  /* b28b0: str x0, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 0));
L_b28b4:;
  /* b28b4: asr x8, x21, #2 */
  ARC_X_W(c, 8, ((uint64_t)((int64_t)(ARC_X_R(c, 21)) >> ((UINT64_C(2)) & 63))));
  /* b28b8: add x23, x0, x21 */
  ARC_X_W(c, 23, (ARC_X_R(c, 0) + ARC_X_R(c, 21)));
  /* b28bc: add x8, x0, x8, lsl #3 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + ((uint64_t)(ARC_X_R(c, 8)) << 3)));
  /* b28c0: str x8, [x20, #0x10] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(16)), ARC_X_R(c, 8));
L_b28c4:;
  /* b28c4: str x24, [x23], #8 */
  { const uint64_t _a = ARC_X_R(c, 23);
    ARC_X_W(c, 23, ARC_X_R(c, 23) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 24));
  }
  /* b28c8: str x23, [x20, #8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(8)), ARC_X_R(c, 23));
L_b28cc:;
  /* b28cc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* b28d0: bl #0xa52b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(731348));
  fn1_a52b0(c);
  /* b28d4: cbz x0, #0xb2cbc */
  if ((ARC_X_R(c, 0)) == 0) goto L_b2cbc;
  /* b28d8: ldr x21, [x19, #0x1330] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 19) + INT64_C(4912))));
  /* b28dc: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* b28e0: ldr x8, [x21, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 21) + INT64_C(8))));
  /* b28e4: sub x9, x8, #0xfd0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4048)));
  /* b28e8: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* b28ec: b.hi #0xb290c */
  if (ARC_COND(c, 8)) goto L_b290c;
  /* b28f0: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* b28f4: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(731384));
  fn1_1428a8(c);
  /* b28f8: cbz x0, #0xb2ce0 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b2ce0;
  /* b28fc: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* b2900: stp x21, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 21));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* b2904: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* b2908: str x0, [x19, #0x1330] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(4912)), ARC_X_R(c, 0));
L_b290c:;
  /* b290c: add x9, x8, #0x20 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(32)));
  /* b2910: add x0, x21, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) + ARC_X_R(c, 8)));
  /* b2914: adrp x8, #0x14a000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1351680)));
  /* b2918: add x8, x8, #0xbb8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3000)));
  /* b291c: str x9, [x21, #8] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(8)), ARC_X_R(c, 9));
  /* b2920: mov w10, #0x500 */
  ARC_W_W(c, 10, UINT64_C(1280));
  /* b2924: str x8, [x0, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* b2928: ldurh w8, [x0, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 0) + INT64_C(9))));
  /* b292c: mov w9, #0x25 */
  ARC_W_W(c, 9, UINT64_C(37));
  /* b2930: stp x24, x20, [x0, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 20));
  }
  /* b2934: b #0xb2874 */
  goto L_b2874;
L_b2938:;
  /* b2938: mov x0, x1 */
  ARC_X_W(c, 0, ARC_X_R(c, 1));
  /* b293c: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(731456));
  fn1_1428a8(c);
  /* b2940: cbz x0, #0xb2d18 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b2d18;
  /* b2944: cmp x24, x27 */
  (void)arc_sub64(c, ARC_X_R(c, 24), ARC_X_R(c, 27));
  /* b2948: b.eq #0xb2960 */
  if (ARC_COND(c, 0)) goto L_b2960;
  /* b294c: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* b2950: mov x2, x22 */
  ARC_X_W(c, 2, ARC_X_R(c, 22));
  /* b2954: mov x24, x0 */
  ARC_X_W(c, 24, ARC_X_R(c, 0));
  /* b2958: bl #0x1449f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(731484));
  fn1_1449f0(c);
  /* b295c: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
L_b2960:;
  /* b2960: str x0, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 0));
L_b2964:;
  /* b2964: asr x8, x22, #2 */
  ARC_X_W(c, 8, ((uint64_t)((int64_t)(ARC_X_R(c, 22)) >> ((UINT64_C(2)) & 63))));
  /* b2968: add x24, x0, x22 */
  ARC_X_W(c, 24, (ARC_X_R(c, 0) + ARC_X_R(c, 22)));
  /* b296c: add x8, x0, x8, lsl #3 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + ((uint64_t)(ARC_X_R(c, 8)) << 3)));
  /* b2970: str x8, [x20, #0x10] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(16)), ARC_X_R(c, 8));
L_b2974:;
  /* b2974: str x26, [x24], #8 */
  { const uint64_t _a = ARC_X_R(c, 24);
    ARC_X_W(c, 24, ARC_X_R(c, 24) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 26));
  }
  /* b2978: str x24, [x20, #8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(8)), ARC_X_R(c, 24));
L_b297c:;
  /* b297c: ldr x20, [x19, #0x1330] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 19) + INT64_C(4912))));
  /* b2980: ldr x8, [x20, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(8))));
  /* b2984: sub x9, x8, #0xfd0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4048)));
  /* b2988: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* b298c: b.hi #0xb29ac */
  if (ARC_COND(c, 8)) goto L_b29ac;
  /* b2990: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* b2994: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(731544));
  fn1_1428a8(c);
  /* b2998: cbz x0, #0xb2ce0 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b2ce0;
  /* b299c: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* b29a0: stp x20, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* b29a4: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* b29a8: str x0, [x19, #0x1330] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(4912)), ARC_X_R(c, 0));
L_b29ac:;
  /* b29ac: add x9, x8, #0x20 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(32)));
  /* b29b0: add x0, x20, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + ARC_X_R(c, 8)));
  /* b29b4: adrp x8, #0x14a000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1351680)));
  /* b29b8: add x8, x8, #0xb40 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2880)));
  /* b29bc: str x9, [x20, #8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(8)), ARC_X_R(c, 9));
  /* b29c0: mov w10, #0x500 */
  ARC_W_W(c, 10, UINT64_C(1280));
  /* b29c4: str x8, [x0, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* b29c8: ldurh w8, [x0, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 0) + INT64_C(9))));
  /* b29cc: mov w9, #0x24 */
  ARC_W_W(c, 9, UINT64_C(36));
  /* b29d0: stp x21, x26, [x0, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 21));
    arc_st64(_pa + 8, ARC_X_R(c, 26));
  }
  /* b29d4: and w8, w8, #0xf000 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(61440)));
  /* b29d8: strb w9, [x0, #8] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 9));
  /* b29dc: orr w8, w8, w10 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | ARC_W_R(c, 10)));
  /* b29e0: sturh w8, [x0, #9] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(9)), ARC_W_R(c, 8));
  /* b29e4: strb w25, [x19, #0x30a] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(778)), ARC_W_R(c, 25));
  /* b29e8: b #0xb2cbc */
  goto L_b2cbc;
L_b29ec:;
  /* b29ec: mov x0, x1 */
  ARC_X_W(c, 0, ARC_X_R(c, 1));
  /* b29f0: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(731636));
  fn1_1428a8(c);
  /* b29f4: cbz x0, #0xb2d1c */
  if ((ARC_X_R(c, 0)) == 0) goto L_b2d1c;
  /* b29f8: cmp x23, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 22));
  /* b29fc: b.eq #0xb2a14 */
  if (ARC_COND(c, 0)) goto L_b2a14;
  /* b2a00: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* b2a04: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* b2a08: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* b2a0c: bl #0x1449f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(731664));
  fn1_1449f0(c);
  /* b2a10: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
L_b2a14:;
  /* b2a14: str x0, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 0));
L_b2a18:;
  /* b2a18: asr x8, x21, #2 */
  ARC_X_W(c, 8, ((uint64_t)((int64_t)(ARC_X_R(c, 21)) >> ((UINT64_C(2)) & 63))));
  /* b2a1c: add x23, x0, x21 */
  ARC_X_W(c, 23, (ARC_X_R(c, 0) + ARC_X_R(c, 21)));
  /* b2a20: add x8, x0, x8, lsl #3 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + ((uint64_t)(ARC_X_R(c, 8)) << 3)));
  /* b2a24: str x8, [x20, #0x10] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(16)), ARC_X_R(c, 8));
L_b2a28:;
  /* b2a28: str x25, [x23], #8 */
  { const uint64_t _a = ARC_X_R(c, 23);
    ARC_X_W(c, 23, ARC_X_R(c, 23) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 25));
  }
  /* b2a2c: str x23, [x20, #8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(8)), ARC_X_R(c, 23));
L_b2a30:;
  /* b2a30: ldr x22, [x19, #0x2a0] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 19) + INT64_C(672))));
  /* b2a34: ldr x21, [x19, #0x298] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 19) + INT64_C(664))));
  /* b2a38: add x23, sp, #8 */
  ARC_X_W(c, 23, ((c)->sp + UINT64_C(8)));
  /* b2a3c: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* b2a40: add x8, x23, #0x68 */
  ARC_X_W(c, 8, (ARC_X_R(c, 23) + UINT64_C(104)));
  /* b2a44: ldr x9, [x19, #0x2a8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(680))));
  /* b2a48: sub x20, x22, x21 */
  ARC_X_W(c, 20, (ARC_X_R(c, 22) - ARC_X_R(c, 21)));
  /* b2a4c: ldp x27, x24, [x19, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(16));
    ARC_X_W(c, 27, arc_ld64(_pa));
    ARC_X_W(c, 24, arc_ld64(_pa + 8));
  }
  /* b2a50: str x8, [sp, #0x28] */
  arc_st64(((c)->sp + INT64_C(40)), ARC_X_R(c, 8));
  /* b2a54: asr x8, x20, #3 */
  ARC_X_W(c, 8, ((uint64_t)((int64_t)(ARC_X_R(c, 20)) >> ((UINT64_C(3)) & 63))));
  /* b2a58: add x26, x23, #0x28 */
  ARC_X_W(c, 26, (ARC_X_R(c, 23) + UINT64_C(40)));
  /* b2a5c: cmp x22, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 9));
  /* b2a60: stp x26, x26, [sp, #0x18] */
  { const uint64_t _pa = ((c)->sp + INT64_C(24));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 26));
  }
  /* b2a64: stp q0, q0, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* b2a68: stp x19, x8, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 19));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* b2a6c: stp q0, q0, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* b2a70: b.ne #0xb2ad4 */
  if (ARC_COND(c, 1)) goto L_b2ad4;
  /* b2a74: add x8, x19, #0x2b0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + UINT64_C(688)));
  /* b2a78: lsl x1, x20, #1 */
  ARC_X_W(c, 1, ((uint64_t)(ARC_X_R(c, 20)) << ((UINT64_C(1)) & 63)));
  /* b2a7c: cmp x21, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 8));
  /* b2a80: b.eq #0xb2a98 */
  if (ARC_COND(c, 0)) goto L_b2a98;
  /* b2a84: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* b2a88: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(731788));
  fn1_142878(c);
  /* b2a8c: str x0, [x19, #0x298] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(664)), ARC_X_R(c, 0));
  /* b2a90: cbnz x0, #0xb2ac4 */
  if ((ARC_X_R(c, 0)) != 0) goto L_b2ac4;
  /* b2a94: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(731800));
  fn1_1427b8(c);
L_b2a98:;
  /* b2a98: mov x0, x1 */
  ARC_X_W(c, 0, ARC_X_R(c, 1));
  /* b2a9c: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(731808));
  fn1_1428a8(c);
  /* b2aa0: cbz x0, #0xb2d14 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b2d14;
  /* b2aa4: cmp x22, x21 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 21));
  /* b2aa8: b.eq #0xb2ac0 */
  if (ARC_COND(c, 0)) goto L_b2ac0;
  /* b2aac: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* b2ab0: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* b2ab4: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* b2ab8: bl #0x1449f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(731836));
  fn1_1449f0(c);
  /* b2abc: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
L_b2ac0:;
  /* b2ac0: str x0, [x19, #0x298] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(664)), ARC_X_R(c, 0));
L_b2ac4:;
  /* b2ac4: asr x8, x20, #2 */
  ARC_X_W(c, 8, ((uint64_t)((int64_t)(ARC_X_R(c, 20)) >> ((UINT64_C(2)) & 63))));
  /* b2ac8: add x22, x0, x20 */
  ARC_X_W(c, 22, (ARC_X_R(c, 0) + ARC_X_R(c, 20)));
  /* b2acc: add x8, x0, x8, lsl #3 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + ((uint64_t)(ARC_X_R(c, 8)) << 3)));
  /* b2ad0: str x8, [x19, #0x2a8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(680)), ARC_X_R(c, 8));
L_b2ad4:;
  /* b2ad4: add x21, x23, #0x10 */
  ARC_X_W(c, 21, (ARC_X_R(c, 23) + UINT64_C(16)));
  /* b2ad8: sub x8, x24, x27 */
  ARC_X_W(c, 8, (ARC_X_R(c, 24) - ARC_X_R(c, 27)));
  /* b2adc: add x27, x19, #0x28 */
  ARC_X_W(c, 27, (ARC_X_R(c, 19) + UINT64_C(40)));
  /* b2ae0: str x21, [x22], #8 */
  { const uint64_t _a = ARC_X_R(c, 22);
    ARC_X_W(c, 22, ARC_X_R(c, 22) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 21));
  }
  /* b2ae4: asr x20, x8, #3 */
  ARC_X_W(c, 20, ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(3)) & 63))));
  /* b2ae8: ldp x8, x9, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* b2aec: str x22, [x19, #0x2a0] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(672)), ARC_X_R(c, 22));
L_b2af0:;
  /* b2af0: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* b2af4: b.eq #0xb2b04 */
  if (ARC_COND(c, 0)) goto L_b2b04;
  /* b2af8: ldrb w9, [x8] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 8)));
  /* b2afc: cmp w9, #0x45 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(69));
  /* b2b00: b.eq #0xb2bf4 */
  if (ARC_COND(c, 0)) goto L_b2bf4;
L_b2b04:;
  /* b2b04: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* b2b08: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* b2b0c: bl #0xb2404 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(731920));
  fn1_b2404(c);
  /* b2b10: cbz x0, #0xb2c80 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b2c80;
  /* b2b14: ldp x24, x8, [x19, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(24));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* b2b18: cmp x24, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 24), ARC_X_R(c, 8));
  /* b2b1c: b.ne #0xb2b8c */
  if (ARC_COND(c, 1)) goto L_b2b8c;
  /* b2b20: ldr x23, [x19, #0x10] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* b2b24: mov x28, x0 */
  ARC_X_W(c, 28, ARC_X_R(c, 0));
  /* b2b28: sub x22, x24, x23 */
  ARC_X_W(c, 22, (ARC_X_R(c, 24) - ARC_X_R(c, 23)));
  /* b2b2c: cmp x23, x27 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 27));
  /* b2b30: lsl x1, x22, #1 */
  ARC_X_W(c, 1, ((uint64_t)(ARC_X_R(c, 22)) << ((UINT64_C(1)) & 63)));
  /* b2b34: b.eq #0xb2b4c */
  if (ARC_COND(c, 0)) goto L_b2b4c;
  /* b2b38: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* b2b3c: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(731968));
  fn1_142878(c);
  /* b2b40: str x0, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 0));
  /* b2b44: cbnz x0, #0xb2b78 */
  if ((ARC_X_R(c, 0)) != 0) goto L_b2b78;
  /* b2b48: b #0xb2ce4 */
  goto L_b2ce4;
L_b2b4c:;
  /* b2b4c: mov x0, x1 */
  ARC_X_W(c, 0, ARC_X_R(c, 1));
  /* b2b50: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(731988));
  fn1_1428a8(c);
  /* b2b54: cbz x0, #0xb2ce8 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b2ce8;
  /* b2b58: cmp x24, x27 */
  (void)arc_sub64(c, ARC_X_R(c, 24), ARC_X_R(c, 27));
  /* b2b5c: b.eq #0xb2b74 */
  if (ARC_COND(c, 0)) goto L_b2b74;
  /* b2b60: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* b2b64: mov x2, x22 */
  ARC_X_W(c, 2, ARC_X_R(c, 22));
  /* b2b68: mov x24, x0 */
  ARC_X_W(c, 24, ARC_X_R(c, 0));
  /* b2b6c: bl #0x1449f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(732016));
  fn1_1449f0(c);
  /* b2b70: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
L_b2b74:;
  /* b2b74: str x0, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 0));
L_b2b78:;
  /* b2b78: asr x8, x22, #2 */
  ARC_X_W(c, 8, ((uint64_t)((int64_t)(ARC_X_R(c, 22)) >> ((UINT64_C(2)) & 63))));
  /* b2b7c: add x24, x0, x22 */
  ARC_X_W(c, 24, (ARC_X_R(c, 0) + ARC_X_R(c, 22)));
  /* b2b80: add x8, x0, x8, lsl #3 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + ((uint64_t)(ARC_X_R(c, 8)) << 3)));
  /* b2b84: mov x0, x28 */
  ARC_X_W(c, 0, ARC_X_R(c, 28));
  /* b2b88: str x8, [x19, #0x20] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(32)), ARC_X_R(c, 8));
L_b2b8c:;
  /* b2b8c: str x0, [x24], #8 */
  { const uint64_t _a = ARC_X_R(c, 24);
    ARC_X_W(c, 24, ARC_X_R(c, 24) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 0));
  }
  /* b2b90: ldp x8, x9, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* b2b94: str x24, [x19, #0x18] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(24)), ARC_X_R(c, 24));
  /* b2b98: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* b2b9c: b.eq #0xb2af0 */
  if (ARC_COND(c, 0)) goto L_b2af0;
  /* b2ba0: ldrb w10, [x8] */
  ARC_W_W(c, 10, arc_ld8(ARC_X_R(c, 8)));
  /* b2ba4: cmp w10, #0x51 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(81));
  /* b2ba8: b.ne #0xb2af0 */
  if (ARC_COND(c, 1)) goto L_b2af0;
  /* b2bac: ldrb w22, [x19, #0x30a] */
  ARC_W_W(c, 22, arc_ld8((ARC_X_R(c, 19) + INT64_C(778))));
  /* b2bb0: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* b2bb4: mov w9, #1 */
  ARC_W_W(c, 9, UINT64_C(1));
  /* b2bb8: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* b2bbc: strb w9, [x19, #0x30a] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(778)), ARC_W_R(c, 9));
  /* b2bc0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* b2bc4: bl #0xaa69c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(732104));
  fn1_aa69c(c);
  /* b2bc8: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* b2bcc: strb w22, [x19, #0x30a] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(778)), ARC_W_R(c, 22));
  /* b2bd0: cbz x0, #0xb2bec */
  if ((ARC_X_R(c, 0)) == 0) goto L_b2bec;
  /* b2bd4: ldp x8, x9, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* b2bd8: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* b2bdc: b.eq #0xb2bec */
  if (ARC_COND(c, 0)) goto L_b2bec;
  /* b2be0: ldrb w9, [x8] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 8)));
  /* b2be4: cmp w9, #0x45 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(69));
  /* b2be8: b.eq #0xb2bf8 */
  if (ARC_COND(c, 0)) goto L_b2bf8;
L_b2bec:;
  /* b2bec: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
  /* b2bf0: b #0xb2c80 */
  goto L_b2c80;
L_b2bf4:;
  /* b2bf4: mov x21, xzr */
  ARC_X_W(c, 21, ARC_X_R(c, 31));
L_b2bf8:;
  /* b2bf8: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* b2bfc: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* b2c00: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* b2c04: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* b2c08: bl #0xa77e4 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(732172));
  fn1_a77e4(c);
  /* b2c0c: ldr x23, [x19, #0x1330] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 19) + INT64_C(4912))));
  /* b2c10: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* b2c14: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* b2c18: ldr x8, [x23, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 23) + INT64_C(8))));
  /* b2c1c: sub x9, x8, #0xfc0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4032)));
  /* b2c20: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* b2c24: b.hi #0xb2c44 */
  if (ARC_COND(c, 8)) goto L_b2c44;
  /* b2c28: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* b2c2c: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(732208));
  fn1_1428a8(c);
  /* b2c30: cbz x0, #0xb2ce0 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b2ce0;
  /* b2c34: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* b2c38: stp x23, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 23));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* b2c3c: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* b2c40: str x0, [x19, #0x1330] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(4912)), ARC_X_R(c, 0));
L_b2c44:;
  /* b2c44: add x9, x8, #0x30 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(48)));
  /* b2c48: add x0, x23, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 23) + ARC_X_R(c, 8)));
  /* b2c4c: adrp x8, #0x14a000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1351680)));
  /* b2c50: add x8, x8, #0xc30 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3120)));
  /* b2c54: str x9, [x23, #8] */
  arc_st64((ARC_X_R(c, 23) + INT64_C(8)), ARC_X_R(c, 9));
  /* b2c58: mov w9, #0x26 */
  ARC_W_W(c, 9, UINT64_C(38));
  /* b2c5c: str x8, [x0, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* b2c60: ldurh w8, [x0, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 0) + INT64_C(9))));
  /* b2c64: strb w9, [x0, #8] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 9));
  /* b2c68: mov w9, #0x500 */
  ARC_W_W(c, 9, UINT64_C(1280));
  /* b2c6c: and w8, w8, #0xf000 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(61440)));
  /* b2c70: stp x25, x22, [x0, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 25));
    arc_st64(_pa + 8, ARC_X_R(c, 22));
  }
  /* b2c74: orr w8, w8, w9 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | ARC_W_R(c, 9)));
  /* b2c78: stp x20, x21, [x0, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* b2c7c: sturh w8, [x0, #9] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(9)), ARC_W_R(c, 8));
L_b2c80:;
  /* b2c80: ldp x9, x10, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* b2c84: ldr x8, [x9, #0x2a0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(672))));
  /* b2c88: ldr x11, [x9, #0x298] */
  ARC_X_W(c, 11, arc_ld64((ARC_X_R(c, 9) + INT64_C(664))));
  /* b2c8c: sub x8, x8, x11 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) - ARC_X_R(c, 11)));
  /* b2c90: cmp x10, x8, asr #3 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> 3)));
  /* b2c94: b.hi #0xb2cec */
  if (ARC_COND(c, 8)) goto L_b2cec;
  /* b2c98: ldr x8, [sp, #0x18] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(24))));
  /* b2c9c: add x10, x11, x10, lsl #3 */
  ARC_X_W(c, 10, (ARC_X_R(c, 11) + ((uint64_t)(ARC_X_R(c, 10)) << 3)));
  /* b2ca0: cmp x8, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 26));
  /* b2ca4: str x10, [x9, #0x2a0] */
  arc_st64((ARC_X_R(c, 9) + INT64_C(672)), ARC_X_R(c, 10));
  /* b2ca8: b.eq #0xb2cbc */
  if (ARC_COND(c, 0)) goto L_b2cbc;
  /* b2cac: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* b2cb0: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* b2cb4: bl #0x142800 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(732344));
  fn1_142800(c);
  /* b2cb8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
L_b2cbc:;
  /* b2cbc: ldp x20, x19, [sp, #0xc0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(192));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* b2cc0: ldp x22, x21, [sp, #0xb0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(176));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* b2cc4: ldp x24, x23, [sp, #0xa0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(160));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* b2cc8: ldp x26, x25, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* b2ccc: ldp x28, x27, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* b2cd0: ldp x29, x30, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b2cd4: add sp, sp, #0xd0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(208)));
  /* b2cd8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* b2cdc: ret  */
  return;
L_b2ce0:;
  /* b2ce0: bl #0x142488 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(732388));
  fn1_142488(c);
L_b2ce4:;
  /* b2ce4: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(732392));
  fn1_1427b8(c);
L_b2ce8:;
  /* b2ce8: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(732396));
  fn1_1427b8(c);
L_b2cec:;
  /* b2cec: adrp x0, #0x4f000 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(323584)));
  /* b2cf0: add x0, x0, #0x8a6 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2214)));
  /* b2cf4: adrp x1, #0x51000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(331776)));
  /* b2cf8: add x1, x1, #0x10b */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(267)));
  /* b2cfc: nop  */
  /* nop: no architectural effect here */
  /* b2d00: adr x3, #0x5018e */
  ARC_X_W(c, 3, (arc_image_bases[1] + UINT64_C(328078)));
  /* b2d04: mov w2, #0xac7 */
  ARC_W_W(c, 2, UINT64_C(2759));
  /* b2d08: bl #0xa23d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(732428));
  fn1_a23d8(c);
L_b2d0c:;
  /* b2d0c: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(732432));
  fn1_1427b8(c);
L_b2d10:;
  /* b2d10: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(732436));
  fn1_1427b8(c);
L_b2d14:;
  /* b2d14: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(732440));
  fn1_1427b8(c);
L_b2d18:;
  /* b2d18: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(732444));
  fn1_1427b8(c);
L_b2d1c:;
  /* b2d1c: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(732448));
  fn1_1427b8(c);
  /* b2d20: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* b2d24: strb w22, [x19, #0x30a] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(778)), ARC_W_R(c, 22));
  /* b2d28: b #0xb2d40 */
  goto L_b2d40;
  /* b2d2c: b #0xb2d3c */
  goto L_b2d3c;
  /* b2d30: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(732468));
  fn1_a1454(c);
  /* b2d34: strb w25, [x19, #0x30a] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(778)), ARC_W_R(c, 25));
  /* b2d38: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(732476));
  fn1_9cc20(c);
L_b2d3c:;
  /* b2d3c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
L_b2d40:;
  /* b2d40: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* b2d44: bl #0xb2e30 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(732488));
  fn1_b2e30(c);
  /* b2d48: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* b2d4c: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(732496));
  fn1_9cc20(c);
}

void fn1_b6700(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038675200));
  /* b6700: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* b6704: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b6708: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* b670c: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* b6710: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* b6714: ldr x21, [x0, #0x10] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* b6718: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* b671c: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* b6720: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* b6724: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* b6728: ldr x8, [x8, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* b672c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(747312));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* b6730: ldurh w8, [x21, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 21) + INT64_C(9))));
  /* b6734: and w8, w8, #0xc0 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(192)));
  /* b6738: cmp w8, #0x40 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(64));
  /* b673c: b.eq #0xb6754 */
  if (ARC_COND(c, 0)) goto L_b6754;
  /* b6740: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* b6744: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* b6748: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* b674c: ldr x8, [x8, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* b6750: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(747348));
  arc_dispatch(c, ARC_X_R(c, 8));
L_b6754:;
  /* b6754: ldp x8, x9, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* b6758: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* b675c: add x10, x8, #2 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(2)));
  /* b6760: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* b6764: b.ls #0xb678c */
  if (ARC_COND(c, 9)) goto L_b678c;
  /* b6768: lsl x9, x9, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) << ((UINT64_C(1)) & 63)));
  /* b676c: add x8, x8, #0x3e2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(994)));
  /* b6770: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* b6774: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* b6778: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b677c: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(747392));
  fn1_142878(c);
  /* b6780: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b6784: cbz x0, #0xb6800 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b6800;
  /* b6788: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
L_b678c:;
  /* b678c: mov w9, #0x3a3a */
  ARC_W_W(c, 9, UINT64_C(14906));
  /* b6790: strh w9, [x0, x8] */
  arc_st16((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
  /* b6794: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* b6798: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b679c: ldr x20, [x20, #0x18] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 20) + INT64_C(24))));
  /* b67a0: add x8, x8, #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2)));
  /* b67a4: ldr x9, [x20] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 20)));
  /* b67a8: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* b67ac: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
  /* b67b0: ldr x8, [x9, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(32))));
  /* b67b4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(747448));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* b67b8: ldurh w8, [x20, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 20) + INT64_C(9))));
  /* b67bc: and w8, w8, #0xc0 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(192)));
  /* b67c0: cmp w8, #0x40 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(64));
  /* b67c4: b.ne #0xb67dc */
  if (ARC_COND(c, 1)) goto L_b67dc;
  /* b67c8: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* b67cc: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* b67d0: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b67d4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* b67d8: ret  */
  return;
L_b67dc:;
  /* b67dc: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* b67e0: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* b67e4: ldr x16, [x8, #0x28] */
  ARC_X_W(c, 16, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* b67e8: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* b67ec: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* b67f0: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* b67f4: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b67f8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* b67fc: br x16 */
  arc_dispatch(c, ARC_X_R(c, 16)); return;
L_b6800:;
  /* b6800: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(747524));
  fn1_1427b8(c);
}

void fn1_b8768(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038683496));
  /* b8768: bti c */
  /* bti: no architectural effect here */
  /* b876c: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* b8770: ret  */
  return;
}

void fn1_bbff4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038697972));
  /* bbff4: bti c */
  /* bti: no architectural effect here */
  /* bbff8: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* bbffc: ret  */
  return;
}

void fn1_bf02c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038710316));
  /* bf02c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* bf030: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* bf034: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* bf038: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* bf03c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* bf040: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* bf044: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* bf048: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* bf04c: ldr x8, [x8, #0x9e8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2536))));
  /* bf050: cbz x8, #0xbf064 */
  if ((ARC_X_R(c, 8)) == 0) goto L_bf064;
  /* bf054: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* bf058: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* bf05c: bl #0x1429e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(782432));
  fn1_1429e0(c);
  /* bf060: b #0xbf0e8 */
  goto L_bf0e8;
L_bf064:;
  /* bf064: nop  */
  /* nop: no architectural effect here */
  /* bf068: adr x8, #0x1578e8 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1407208)));
  /* bf06c: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* bf070: tbz w8, #0, #0xbf0fc */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_bf0fc;
L_bf074:;
  /* bf074: nop  */
  /* nop: no architectural effect here */
  /* bf078: adr x0, #0x156be0 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1403872)));
  /* bf07c: bl #0x144ac8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(782464));
  fn1_144ac8(c);
  /* bf080: ldrb w8, [x0] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 0)));
  /* bf084: tbnz w8, #0, #0xbf0a8 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_bf0a8;
  /* bf088: nop  */
  /* nop: no architectural effect here */
  /* bf08c: adr x1, #0x1578f0 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1407216)));
  /* bf090: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* bf094: ldr w0, [x1] */
  ARC_W_W(c, 0, arc_ld32(ARC_X_R(c, 1)));
  /* bf098: bl #0x142a10 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(782492));
  fn1_142a10(c);
  /* bf09c: cbnz w0, #0xbf0e4 */
  if ((ARC_W_R(c, 0)) != 0) goto L_bf0e4;
  /* bf0a0: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* bf0a4: strb w8, [x21] */
  arc_st8(ARC_X_R(c, 21), ARC_W_R(c, 8));
L_bf0a8:;
  /* bf0a8: mov w0, #0x18 */
  ARC_W_W(c, 0, UINT64_C(24));
  /* bf0ac: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(782512));
  fn1_1428a8(c);
  /* bf0b0: cbz x0, #0xbf0e4 */
  if ((ARC_X_R(c, 0)) == 0) goto L_bf0e4;
  /* bf0b4: nop  */
  /* nop: no architectural effect here */
  /* bf0b8: adr x8, #0x156c00 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1403904)));
  /* bf0bc: stp x20, x19, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* bf0c0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* bf0c4: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* bf0c8: bl #0x144ac8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(782540));
  fn1_144ac8(c);
  /* bf0cc: mov x8, x0 */
  ARC_X_W(c, 8, ARC_X_R(c, 0));
  /* bf0d0: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* bf0d4: ldr x9, [x8] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 8)));
  /* bf0d8: str x19, [x8] */
  arc_st64(ARC_X_R(c, 8), ARC_X_R(c, 19));
  /* bf0dc: str x9, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 9));
  /* bf0e0: b #0xbf0e8 */
  goto L_bf0e8;
L_bf0e4:;
  /* bf0e4: mov w0, #-1 */
  ARC_W_W(c, 0, UINT64_C(18446744073709551615));
L_bf0e8:;
  /* bf0e8: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* bf0ec: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* bf0f0: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* bf0f4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* bf0f8: ret  */
  return;
L_bf0fc:;
  /* bf0fc: nop  */
  /* nop: no architectural effect here */
  /* bf100: adr x0, #0x1578e8 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407208)));
  /* bf104: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(782600));
  fn1_1424b8(c);
  /* bf108: cbz w0, #0xbf074 */
  if ((ARC_W_R(c, 0)) == 0) goto L_bf074;
  /* bf10c: bl #0xbf140 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(782608));
  fn1_bf140(c);
  /* bf110: nop  */
  /* nop: no architectural effect here */
  /* bf114: adr x0, #0xbf17c */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(782716)));
  /* bf118: nop  */
  /* nop: no architectural effect here */
  /* bf11c: adr x1, #0x1578e0 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1407200)));
  /* bf120: nop  */
  /* nop: no architectural effect here */
  /* bf124: adr x2, #0x148af8 */
  ARC_X_W(c, 2, (arc_image_bases[1] + UINT64_C(1346296)));
  /* bf128: bl #0x1423f8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(782636));
  fn1_1423f8(c);
  /* bf12c: nop  */
  /* nop: no architectural effect here */
  /* bf130: adr x0, #0x1578e8 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407208)));
  /* bf134: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(782648));
  fn1_1424d0(c);
  /* bf138: b #0xbf074 */
  goto L_bf074;
  /* bf13c: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(782656));
  fn1_a1454(c);
}

void fn1_d5514(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038801684));
  /* d5514: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* d5518: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* d551c: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* d5520: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* d5524: fmov x8, d0 */
  ARC_X_W(c, 8, ARC_DU_R(c, 0));
  /* d5528: tbnz x8, #0x3f, #0xd5534 */
  if (((ARC_X_R(c, 8)) >> 63 & 1) != 0) goto L_d5534;
  /* d552c: mov x9, x8 */
  ARC_X_W(c, 9, ARC_X_R(c, 8));
  /* d5530: b #0xd554c */
  goto L_d554c;
L_d5534:;
  /* d5534: cmp x0, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 1));
  /* d5538: b.eq #0xd55a4 */
  if (ARC_COND(c, 0)) goto L_d55a4;
  /* d553c: fabs d0, d0 */
  arc_d_w(c, 0, (double)(fabs(ARC_D_R(c, 0))));
  /* d5540: mov w9, #0x2d */
  ARC_W_W(c, 9, UINT64_C(45));
  /* d5544: strb w9, [x0], #1 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(1));
    arc_st8(_a, ARC_W_R(c, 9));
  }
  /* d5548: fmov x9, d0 */
  ARC_X_W(c, 9, ARC_DU_R(c, 0));
L_d554c:;
  /* d554c: mov x10, #0x7ff0000000000000 */
  ARC_X_W(c, 10, UINT64_C(9218868437227405312));
  /* d5550: bics xzr, x10, x9 */
  { uint64_t _r = (uint64_t)(ARC_X_R(c, 10) & (~ARC_X_R(c, 9)));
    arc_flags_logical64(c, _r);
    ARC_X_W(c, 31, _r); }
  /* d5554: b.ne #0xd5580 */
  if (ARC_COND(c, 1)) goto L_d5580;
  /* d5558: ands x10, x9, #0xfffffffffffff */
  { uint64_t _r = (uint64_t)(ARC_X_R(c, 9) & UINT64_C(4503599627370495));
    arc_flags_logical64(c, _r);
    ARC_X_W(c, 10, _r); }
  /* d555c: b.eq #0xd5594 */
  if (ARC_COND(c, 0)) goto L_d5594;
  /* d5560: tbz x8, #0x3f, #0xd55b0 */
  if (((ARC_X_R(c, 8)) >> 63 & 1) == 0) goto L_d55b0;
  /* d5564: mov x8, #0x8000000000000 */
  ARC_X_W(c, 8, UINT64_C(2251799813685248));
  /* d5568: cmp x10, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 8));
  /* d556c: b.ne #0xd55b0 */
  if (ARC_COND(c, 1)) goto L_d55b0;
  /* d5570: adrp x8, #0x4f000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(323584)));
  /* d5574: add x8, x8, #0xa91 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2705)));
  /* d5578: mov w19, #8 */
  ARC_W_W(c, 19, UINT64_C(8));
  /* d557c: b #0xd55d4 */
  goto L_d55d4;
L_d5580:;
  /* d5580: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* d5584: bl #0xddc14 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(873864));
  fn1_ddc14(c);
  /* d5588: and x8, x1, #0xffffffff00000000 */
  ARC_X_W(c, 8, (ARC_X_R(c, 1) & UINT64_C(18446744069414584320)));
  /* d558c: mov w9, w1 */
  ARC_W_W(c, 9, ARC_W_R(c, 1));
  /* d5590: b #0xd560c */
  goto L_d560c;
L_d5594:;
  /* d5594: nop  */
  /* nop: no architectural effect here */
  /* d5598: adr x8, #0x50992 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(330130)));
  /* d559c: mov w19, #3 */
  ARC_W_W(c, 19, UINT64_C(3));
  /* d55a0: b #0xd55d4 */
  goto L_d55d4;
L_d55a4:;
  /* d55a4: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* d55a8: mov w9, #0x4b */
  ARC_W_W(c, 9, UINT64_C(75));
  /* d55ac: b #0xd560c */
  goto L_d560c;
L_d55b0:;
  /* d55b0: adrp x8, #0x51000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(331776)));
  /* d55b4: add x8, x8, #0xea3 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3747)));
  /* d55b8: adrp x10, #0x50000 */
  ARC_X_W(c, 10, (arc_image_bases[1] + UINT64_C(327680)));
  /* d55bc: add x10, x10, #0xf0d */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(3853)));
  /* d55c0: tst x9, #0x8000000000000 */
  arc_flags_logical64(c, (uint64_t)(ARC_X_R(c, 9) & UINT64_C(2251799813685248)));
  /* d55c4: mov w9, #3 */
  ARC_W_W(c, 9, UINT64_C(3));
  /* d55c8: mov w11, #9 */
  ARC_W_W(c, 11, UINT64_C(9));
  /* d55cc: csel x8, x10, x8, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 8)));
  /* d55d0: csel x19, x11, x9, eq */
  ARC_X_W(c, 19, (ARC_COND(c, 0) ? (ARC_X_R(c, 11)) : ARC_X_R(c, 9)));
L_d55d4:;
  /* d55d4: sub x9, x1, x0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 1) - ARC_X_R(c, 0)));
  /* d55d8: cmp x9, x19 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 19));
  /* d55dc: b.ge #0xd55f0 */
  if (ARC_COND(c, 10)) goto L_d55f0;
  /* d55e0: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* d55e4: mov w9, #0x4b */
  ARC_W_W(c, 9, UINT64_C(75));
  /* d55e8: mov x0, x1 */
  ARC_X_W(c, 0, ARC_X_R(c, 1));
  /* d55ec: b #0xd560c */
  goto L_d560c;
L_d55f0:;
  /* d55f0: mov x1, x8 */
  ARC_X_W(c, 1, ARC_X_R(c, 8));
  /* d55f4: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* d55f8: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* d55fc: bl #0x1449d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(873984));
  fn1_1449d8(c);
  /* d5600: mov x9, xzr */
  ARC_X_W(c, 9, ARC_X_R(c, 31));
  /* d5604: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* d5608: add x0, x20, x19 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + ARC_X_R(c, 19)));
L_d560c:;
  /* d560c: orr x1, x8, x9 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) | ARC_X_R(c, 9)));
  /* d5610: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* d5614: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* d5618: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* d561c: ret  */
  return;
  /* d5620: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(874020));
  fn1_a1454(c);
}

void fn1_d96e8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038818536));
  /* d96e8: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* d96ec: sub sp, sp, #0x80 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(128)));
  /* d96f0: stp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* d96f4: str x25, [sp, #0x40] */
  arc_st64(((c)->sp + INT64_C(64)), ARC_X_R(c, 25));
  /* d96f8: stp x24, x23, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* d96fc: stp x22, x21, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* d9700: stp x20, x19, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* d9704: add x29, sp, #0x30 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(48)));
  /* d9708: ldrb w8, [x0] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 0)));
  /* d970c: ldp x10, x9, [x0, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(8));
    ARC_X_W(c, 10, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* d9710: mov x20, #0x6557 */
  ARC_X_W(c, 20, UINT64_C(25943));
  /* d9714: mov x21, #0x3127 */
  ARC_X_W(c, 21, UINT64_C(12583));
  /* d9718: mov x22, #0xf273 */
  ARC_X_W(c, 22, UINT64_C(62067));
  /* d971c: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* d9720: lsr x8, x8, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* d9724: mov x23, #0x2d69 */
  ARC_X_W(c, 23, UINT64_C(11625));
  /* d9728: mov x24, #0x404f */
  ARC_X_W(c, 24, UINT64_C(16463));
  /* d972c: movk x20, #0x509e, lsl #16 */
  ARC_X_W(c, 20, ((ARC_X_R(c, 20) & UINT64_C(18446744069414649855)) | UINT64_C(1352531968)));
  /* d9730: csinc x9, x9, x0, ne */
  ARC_X_W(c, 9, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 0)) + 1)));
  /* d9734: movk x21, #0x97cb, lsl #16 */
  ARC_X_W(c, 21, ((ARC_X_R(c, 21) & UINT64_C(18446744069414649855)) | UINT64_C(2546663424)));
  /* d9738: csel x8, x8, x10, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 10)));
  /* d973c: movk x22, #0xbe98, lsl #16 */
  ARC_X_W(c, 22, ((ARC_X_R(c, 22) & UINT64_C(18446744069414649855)) | UINT64_C(3197632512)));
  /* d9740: movk x23, #0xeb38, lsl #16 */
  ARC_X_W(c, 23, ((ARC_X_R(c, 23) & UINT64_C(18446744069414649855)) | UINT64_C(3946315776)));
  /* d9744: movk x24, #0x2f90, lsl #16 */
  ARC_X_W(c, 24, ((ARC_X_R(c, 24) & UINT64_C(18446744069414649855)) | UINT64_C(797966336)));
  /* d9748: movk x20, #0xd7c7, lsl #32 */
  ARC_X_W(c, 20, ((ARC_X_R(c, 20) & UINT64_C(18446462603027808255)) | UINT64_C(237249698463744)));
  /* d974c: movk x21, #0xc85c, lsl #32 */
  ARC_X_W(c, 21, ((ARC_X_R(c, 21) & UINT64_C(18446462603027808255)) | UINT64_C(220297462546432)));
  /* d9750: stp x9, x8, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* d9754: movk x22, #0xb66f, lsl #32 */
  ARC_X_W(c, 22, ((ARC_X_R(c, 22) & UINT64_C(18446462603027808255)) | UINT64_C(200587857625088)));
  /* d9758: mov w9, #1 */
  ARC_W_W(c, 9, UINT64_C(1));
  /* d975c: movk x23, #0xea08, lsl #32 */
  ARC_X_W(c, 23, ((ARC_X_R(c, 23) & UINT64_C(18446462603027808255)) | UINT64_C(257320080637952)));
  /* d9760: movk x24, #0x6a3b, lsl #32 */
  ARC_X_W(c, 24, ((ARC_X_R(c, 24) & UINT64_C(18446462603027808255)) | UINT64_C(116801635614720)));
  /* d9764: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* d9768: stp xzr, xzr, [sp, #0x18] */
  { const uint64_t _pa = ((c)->sp + INT64_C(24));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* d976c: movk x20, #0xc949, lsl #48 */
  ARC_X_W(c, 20, ((ARC_X_R(c, 20) & UINT64_C(281474976710655)) | UINT64_C(14504124074923393024)));
  /* d9770: movk x21, #0xc3a5, lsl #48 */
  ARC_X_W(c, 21, ((ARC_X_R(c, 21) & UINT64_C(281474976710655)) | UINT64_C(14097674208553205760)));
  /* d9774: movk x22, #0xb492, lsl #48 */
  ARC_X_W(c, 22, ((ARC_X_R(c, 22) & UINT64_C(281474976710655)) | UINT64_C(13011462273426784256)));
  /* d9778: movk x23, #0x9ddf, lsl #48 */
  ARC_X_W(c, 23, ((ARC_X_R(c, 23) & UINT64_C(281474976710655)) | UINT64_C(11375811183761162240)));
  /* d977c: movk x24, #0x9ae1, lsl #48 */
  ARC_X_W(c, 24, ((ARC_X_R(c, 24) & UINT64_C(281474976710655)) | UINT64_C(11160201351600799744)));
  /* d9780: strb w9, [sp, #0x28] */
  arc_st8(((c)->sp + INT64_C(40)), ARC_W_R(c, 9));
  /* d9784: bl #0xda18c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(890760));
  fn1_da18c(c);
  /* d9788: mov x19, xzr */
  ARC_X_W(c, 19, ARC_X_R(c, 31));
  /* d978c: nop  */
  /* nop: no architectural effect here */
  /* d9790: adr x25, #0x5004e */
  ARC_X_W(c, 25, (arc_image_bases[1] + UINT64_C(327758)));
  /* d9794: b #0xd97dc */
  goto L_d97dc;
L_d9798:;
  /* d9798: cmp w8, #4 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(4));
  /* d979c: b.eq #0xd982c */
  if (ARC_COND(c, 0)) goto L_d982c;
  /* d97a0: cmp w8, #5 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(5));
  /* d97a4: mov x10, x24 */
  ARC_X_W(c, 10, ARC_X_R(c, 24));
  /* d97a8: b.ne #0xd9b5c */
  if (ARC_COND(c, 1)) goto L_d9b5c;
L_d97ac:;
  /* d97ac: add x8, x10, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 10) + UINT64_C(16)));
  /* d97b0: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* d97b4: ror x8, x8, #0x10 */
  ARC_X_W(c, 8, arc_ror64(ARC_X_R(c, 8), ((UINT64_C(16)) & 63)));
  /* d97b8: eor x9, x8, x19 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) ^ ARC_X_R(c, 19)));
  /* d97bc: mul x9, x9, x23 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) * (uint64_t)(ARC_X_R(c, 23))));
  /* d97c0: eor x8, x8, x9, lsr #47 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) ^ ((uint64_t)(ARC_X_R(c, 9)) >> 47)));
  /* d97c4: eor x8, x8, x9 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) ^ ARC_X_R(c, 9)));
  /* d97c8: mul x8, x8, x23 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) * (uint64_t)(ARC_X_R(c, 23))));
  /* d97cc: eor x8, x8, x8, lsr #47 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) ^ ((uint64_t)(ARC_X_R(c, 8)) >> 47)));
  /* d97d0: mul x8, x8, x23 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) * (uint64_t)(ARC_X_R(c, 23))));
  /* d97d4: eor x19, x8, x10 */
  ARC_X_W(c, 19, (ARC_X_R(c, 8) ^ ARC_X_R(c, 10)));
  /* d97d8: bl #0xda18c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(890844));
  fn1_da18c(c);
L_d97dc:;
  /* d97dc: ldrb w8, [sp, #0x28] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(40))));
  /* d97e0: cmp w8, #3 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(3));
  /* d97e4: b.gt #0xd9798 */
  if (ARC_COND(c, 12)) goto L_d9798;
  /* d97e8: cmp w8, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(2));
  /* d97ec: b.eq #0xd982c */
  if (ARC_COND(c, 0)) goto L_d982c;
  /* d97f0: cmp w8, #3 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(3));
  /* d97f4: b.ne #0xd9b5c */
  if (ARC_COND(c, 1)) goto L_d9b5c;
  /* d97f8: mov x8, x25 */
  ARC_X_W(c, 8, ARC_X_R(c, 25));
  /* d97fc: mov w9, #1 */
  ARC_W_W(c, 9, UINT64_C(1));
L_d9800:;
  /* d9800: lsr x10, x9, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(1)) & 63)));
  /* d9804: ldrb w11, [x8] */
  ARC_W_W(c, 11, arc_ld8(ARC_X_R(c, 8)));
  /* d9808: ldrb w10, [x8, x10] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 8) + ARC_X_R(c, 10))));
  /* d980c: add x8, x8, x9 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + ARC_X_R(c, 9)));
  /* d9810: ldurb w8, [x8, #-1] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 8) + INT64_C(-1))));
  /* d9814: orr x10, x11, x10, lsl #8 */
  ARC_X_W(c, 10, (ARC_X_R(c, 11) | ((uint64_t)(ARC_X_R(c, 10)) << 8)));
  /* d9818: orr x8, x9, x8, lsl #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) | ((uint64_t)(ARC_X_R(c, 8)) << 2)));
  /* d981c: mul x9, x10, x24 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 10)) * (uint64_t)(ARC_X_R(c, 24))));
  /* d9820: mul x8, x8, x20 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) * (uint64_t)(ARC_X_R(c, 20))));
  /* d9824: eor x8, x8, x9 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) ^ ARC_X_R(c, 9)));
  /* d9828: b #0xd991c */
  goto L_d991c;
L_d982c:;
  /* d982c: ldp x8, x9, [sp, #0x18] */
  { const uint64_t _pa = ((c)->sp + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* d9830: cmp x9, #0x20 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(32));
  /* d9834: b.hi #0xd9880 */
  if (ARC_COND(c, 8)) goto L_d9880;
  /* d9838: cmp x9, #0x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(16));
  /* d983c: b.hi #0xd9928 */
  if (ARC_COND(c, 8)) goto L_d9928;
  /* d9840: cmp x9, #9 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(9));
  /* d9844: b.lo #0xd9b2c */
  if (ARC_COND(c, 3)) goto L_d9b2c;
  /* d9848: add x10, x8, x9 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + ARC_X_R(c, 9)));
  /* d984c: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* d9850: ldur x10, [x10, #-8] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 10) + INT64_C(-8))));
  /* d9854: add x11, x10, x9 */
  ARC_X_W(c, 11, (ARC_X_R(c, 10) + ARC_X_R(c, 9)));
  /* d9858: ror x9, x11, x9 */
  ARC_X_W(c, 9, arc_ror64(ARC_X_R(c, 11), ((ARC_X_R(c, 9)) & 63)));
  /* d985c: eor x8, x9, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) ^ ARC_X_R(c, 8)));
  /* d9860: mul x8, x8, x23 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) * (uint64_t)(ARC_X_R(c, 23))));
  /* d9864: eor x9, x9, x8, lsr #47 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) ^ ((uint64_t)(ARC_X_R(c, 8)) >> 47)));
  /* d9868: eor x8, x9, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) ^ ARC_X_R(c, 8)));
  /* d986c: mul x8, x8, x23 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) * (uint64_t)(ARC_X_R(c, 23))));
  /* d9870: eor x8, x8, x8, lsr #47 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) ^ ((uint64_t)(ARC_X_R(c, 8)) >> 47)));
  /* d9874: mul x8, x8, x23 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) * (uint64_t)(ARC_X_R(c, 23))));
  /* d9878: eor x10, x8, x10 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) ^ ARC_X_R(c, 10)));
  /* d987c: b #0xd97ac */
  goto L_d97ac;
L_d9880:;
  /* d9880: add x10, x8, x9 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + ARC_X_R(c, 9)));
  /* d9884: cmp x9, #0x40 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(64));
  /* d9888: b.hi #0xd9978 */
  if (ARC_COND(c, 8)) goto L_d9978;
  /* d988c: ldp x11, x12, [x10, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 10) + INT64_C(-16));
    ARC_X_W(c, 11, arc_ld64(_pa));
    ARC_X_W(c, 12, arc_ld64(_pa + 8));
  }
  /* d9890: ldp x13, x14, [x8] */
  { const uint64_t _pa = ARC_X_R(c, 8);
    ARC_X_W(c, 13, arc_ld64(_pa));
    ARC_X_W(c, 14, arc_ld64(_pa + 8));
  }
  /* d9894: ldp x17, x10, [x10, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 10) + INT64_C(-32));
    ARC_X_W(c, 17, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* d9898: add x9, x11, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 11) + ARC_X_R(c, 9)));
  /* d989c: madd x9, x9, x21, x13 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 13)) + ((uint64_t)(ARC_X_R(c, 9)) * (uint64_t)(ARC_X_R(c, 21)))));
  /* d98a0: ldp x8, x13, [x8, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 8) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 13, arc_ld64(_pa + 8));
  }
  /* d98a4: add x17, x17, x8 */
  ARC_X_W(c, 17, (ARC_X_R(c, 17) + ARC_X_R(c, 8)));
  /* d98a8: add x12, x12, x13 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) + ARC_X_R(c, 13)));
  /* d98ac: add x10, x10, x17 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + ARC_X_R(c, 17)));
  /* d98b0: add x14, x9, x14 */
  ARC_X_W(c, 14, (ARC_X_R(c, 9) + ARC_X_R(c, 14)));
  /* d98b4: add x15, x9, x13 */
  ARC_X_W(c, 15, (ARC_X_R(c, 9) + ARC_X_R(c, 13)));
  /* d98b8: ror x9, x9, #0x25 */
  ARC_X_W(c, 9, arc_ror64(ARC_X_R(c, 9), ((UINT64_C(37)) & 63)));
  /* d98bc: ror x16, x14, #7 */
  ARC_X_W(c, 16, arc_ror64(ARC_X_R(c, 14), ((UINT64_C(7)) & 63)));
  /* d98c0: ror x15, x15, #0x34 */
  ARC_X_W(c, 15, arc_ror64(ARC_X_R(c, 15), ((UINT64_C(52)) & 63)));
  /* d98c4: add x8, x14, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 14) + ARC_X_R(c, 8)));
  /* d98c8: ror x14, x8, #0x1f */
  ARC_X_W(c, 14, arc_ror64(ARC_X_R(c, 8), ((UINT64_C(31)) & 63)));
  /* d98cc: add x11, x10, x11 */
  ARC_X_W(c, 11, (ARC_X_R(c, 10) + ARC_X_R(c, 11)));
  /* d98d0: ror x10, x10, #7 */
  ARC_X_W(c, 10, arc_ror64(ARC_X_R(c, 10), ((UINT64_C(7)) & 63)));
  /* d98d4: add x9, x16, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 16) + ARC_X_R(c, 9)));
  /* d98d8: ror x16, x17, #0x25 */
  ARC_X_W(c, 16, arc_ror64(ARC_X_R(c, 17), ((UINT64_C(37)) & 63)));
  /* d98dc: add x9, x9, x15 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + ARC_X_R(c, 15)));
  /* d98e0: add x15, x12, x17 */
  ARC_X_W(c, 15, (ARC_X_R(c, 12) + ARC_X_R(c, 17)));
  /* d98e4: add x12, x11, x12 */
  ARC_X_W(c, 12, (ARC_X_R(c, 11) + ARC_X_R(c, 12)));
  /* d98e8: add x9, x9, x14 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + ARC_X_R(c, 14)));
  /* d98ec: ror x14, x15, #0x34 */
  ARC_X_W(c, 14, arc_ror64(ARC_X_R(c, 15), ((UINT64_C(52)) & 63)));
  /* d98f0: add x13, x13, x16 */
  ARC_X_W(c, 13, (ARC_X_R(c, 13) + ARC_X_R(c, 16)));
  /* d98f4: ror x11, x11, #0x1f */
  ARC_X_W(c, 11, arc_ror64(ARC_X_R(c, 11), ((UINT64_C(31)) & 63)));
  /* d98f8: add x10, x13, x10 */
  ARC_X_W(c, 10, (ARC_X_R(c, 13) + ARC_X_R(c, 10)));
  /* d98fc: add x12, x12, x9 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) + ARC_X_R(c, 9)));
  /* d9900: add x10, x10, x14 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + ARC_X_R(c, 14)));
  /* d9904: mul x12, x12, x21 */
  ARC_X_W(c, 12, ((uint64_t)(ARC_X_R(c, 12)) * (uint64_t)(ARC_X_R(c, 21))));
  /* d9908: add x10, x10, x11 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + ARC_X_R(c, 11)));
  /* d990c: add x8, x8, x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + ARC_X_R(c, 10)));
  /* d9910: madd x8, x8, x24, x12 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 12)) + ((uint64_t)(ARC_X_R(c, 8)) * (uint64_t)(ARC_X_R(c, 24)))));
  /* d9914: eor x8, x8, x8, lsr #47 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) ^ ((uint64_t)(ARC_X_R(c, 8)) >> 47)));
  /* d9918: madd x8, x8, x21, x9 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 9)) + ((uint64_t)(ARC_X_R(c, 8)) * (uint64_t)(ARC_X_R(c, 21)))));
L_d991c:;
  /* d991c: eor x8, x8, x8, lsr #47 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) ^ ((uint64_t)(ARC_X_R(c, 8)) >> 47)));
  /* d9920: mul x10, x8, x24 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 8)) * (uint64_t)(ARC_X_R(c, 24))));
  /* d9924: b #0xd97ac */
  goto L_d97ac;
L_d9928:;
  /* d9928: add x11, x8, x9 */
  ARC_X_W(c, 11, (ARC_X_R(c, 8) + ARC_X_R(c, 9)));
  /* d992c: ldp x10, x8, [x8] */
  { const uint64_t _pa = ARC_X_R(c, 8);
    ARC_X_W(c, 10, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* d9930: ldp x11, x12, [x11, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 11) + INT64_C(-16));
    ARC_X_W(c, 11, arc_ld64(_pa));
    ARC_X_W(c, 12, arc_ld64(_pa + 8));
  }
  /* d9934: mul x10, x10, x22 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 10)) * (uint64_t)(ARC_X_R(c, 22))));
  /* d9938: mul x12, x12, x24 */
  ARC_X_W(c, 12, ((uint64_t)(ARC_X_R(c, 12)) * (uint64_t)(ARC_X_R(c, 24))));
  /* d993c: sub x13, x10, x8 */
  ARC_X_W(c, 13, (ARC_X_R(c, 10) - ARC_X_R(c, 8)));
  /* d9940: eor x8, x8, x20 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) ^ ARC_X_R(c, 20)));
  /* d9944: ror x13, x13, #0x2b */
  ARC_X_W(c, 13, arc_ror64(ARC_X_R(c, 13), ((UINT64_C(43)) & 63)));
  /* d9948: ror x8, x8, #0x14 */
  ARC_X_W(c, 8, arc_ror64(ARC_X_R(c, 8), ((UINT64_C(20)) & 63)));
  /* d994c: ror x14, x12, #0x1e */
  ARC_X_W(c, 14, arc_ror64(ARC_X_R(c, 12), ((UINT64_C(30)) & 63)));
  /* d9950: add x8, x9, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) + ARC_X_R(c, 8)));
  /* d9954: add x13, x14, x13 */
  ARC_X_W(c, 13, (ARC_X_R(c, 14) + ARC_X_R(c, 13)));
  /* d9958: madd x11, x11, x21, x13 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 13)) + ((uint64_t)(ARC_X_R(c, 11)) * (uint64_t)(ARC_X_R(c, 21)))));
  /* d995c: add x8, x10, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 10) + ARC_X_R(c, 8)));
  /* d9960: sub x8, x8, x12 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) - ARC_X_R(c, 12)));
  /* d9964: eor x9, x11, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 11) ^ ARC_X_R(c, 8)));
L_d9968:;
  /* d9968: mul x9, x9, x23 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) * (uint64_t)(ARC_X_R(c, 23))));
  /* d996c: eor x8, x8, x9, lsr #47 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) ^ ((uint64_t)(ARC_X_R(c, 9)) >> 47)));
  /* d9970: eor x8, x8, x9 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) ^ ARC_X_R(c, 9)));
  /* d9974: b #0xd9b1c */
  goto L_d9b1c;
L_d9978:;
  /* d9978: ldp x17, x12, [x10, #-0x38] */
  { const uint64_t _pa = (ARC_X_R(c, 10) + INT64_C(-56));
    ARC_X_W(c, 17, arc_ld64(_pa));
    ARC_X_W(c, 12, arc_ld64(_pa + 8));
  }
  /* d997c: ldur x0, [x10, #-0x40] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 10) + INT64_C(-64))));
  /* d9980: ldp x16, x13, [x10, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 10) + INT64_C(-32));
    ARC_X_W(c, 16, arc_ld64(_pa));
    ARC_X_W(c, 13, arc_ld64(_pa + 8));
  }
  /* d9984: ldur x2, [x10, #-0x28] */
  ARC_X_W(c, 2, arc_ld64((ARC_X_R(c, 10) + INT64_C(-40))));
  /* d9988: ldr x11, [x8], #0x20 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(32));
    ARC_X_W(c, 11, arc_ld64(_a));
  }
  /* d998c: add x14, x12, x9 */
  ARC_X_W(c, 14, (ARC_X_R(c, 12) + ARC_X_R(c, 9)));
  /* d9990: ldp x1, x3, [x10, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 10) + INT64_C(-16));
    ARC_X_W(c, 1, arc_ld64(_pa));
    ARC_X_W(c, 3, arc_ld64(_pa + 8));
  }
  /* d9994: eor x14, x13, x14 */
  ARC_X_W(c, 14, (ARC_X_R(c, 13) ^ ARC_X_R(c, 14)));
  /* d9998: add x16, x22, x16 */
  ARC_X_W(c, 16, (ARC_X_R(c, 22) + ARC_X_R(c, 16)));
  /* d999c: add x12, x12, x17 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) + ARC_X_R(c, 17)));
  /* d99a0: mul x14, x14, x23 */
  ARC_X_W(c, 14, ((uint64_t)(ARC_X_R(c, 14)) * (uint64_t)(ARC_X_R(c, 23))));
  /* d99a4: add x10, x17, x1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 17) + ARC_X_R(c, 1)));
  /* d99a8: add x17, x2, x3 */
  ARC_X_W(c, 17, (ARC_X_R(c, 2) + ARC_X_R(c, 3)));
  /* d99ac: add x16, x10, x16 */
  ARC_X_W(c, 16, (ARC_X_R(c, 10) + ARC_X_R(c, 16)));
  /* d99b0: madd x11, x2, x22, x11 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 11)) + ((uint64_t)(ARC_X_R(c, 2)) * (uint64_t)(ARC_X_R(c, 22)))));
  /* d99b4: add x17, x16, x17 */
  ARC_X_W(c, 17, (ARC_X_R(c, 16) + ARC_X_R(c, 17)));
  /* d99b8: ror x17, x17, #0x15 */
  ARC_X_W(c, 17, arc_ror64(ARC_X_R(c, 17), ((UINT64_C(21)) & 63)));
  /* d99bc: eor x15, x13, x14, lsr #47 */
  ARC_X_W(c, 15, (ARC_X_R(c, 13) ^ ((uint64_t)(ARC_X_R(c, 14)) >> 47)));
  /* d99c0: add x13, x13, x1 */
  ARC_X_W(c, 13, (ARC_X_R(c, 13) + ARC_X_R(c, 1)));
  /* d99c4: add x13, x13, x16 */
  ARC_X_W(c, 13, (ARC_X_R(c, 13) + ARC_X_R(c, 16)));
  /* d99c8: eor x14, x15, x14 */
  ARC_X_W(c, 14, (ARC_X_R(c, 15) ^ ARC_X_R(c, 14)));
  /* d99cc: mul x14, x14, x23 */
  ARC_X_W(c, 14, ((uint64_t)(ARC_X_R(c, 14)) * (uint64_t)(ARC_X_R(c, 23))));
  /* d99d0: eor x14, x14, x14, lsr #47 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) ^ ((uint64_t)(ARC_X_R(c, 14)) >> 47)));
  /* d99d4: mul x15, x14, x23 */
  ARC_X_W(c, 15, ((uint64_t)(ARC_X_R(c, 14)) * (uint64_t)(ARC_X_R(c, 23))));
  /* d99d8: add x14, x0, x9 */
  ARC_X_W(c, 14, (ARC_X_R(c, 0) + ARC_X_R(c, 9)));
  /* d99dc: sub x9, x9, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - UINT64_C(1)));
  /* d99e0: add x12, x12, x14 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) + ARC_X_R(c, 14)));
  /* d99e4: add x0, x14, x2 */
  ARC_X_W(c, 0, (ARC_X_R(c, 14) + ARC_X_R(c, 2)));
  /* d99e8: and x9, x9, #0xffffffffffffffc0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) & UINT64_C(18446744073709551552)));
  /* d99ec: ror x1, x12, #0x2c */
  ARC_X_W(c, 1, arc_ror64(ARC_X_R(c, 12), ((UINT64_C(44)) & 63)));
  /* d99f0: add x12, x12, x2 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) + ARC_X_R(c, 2)));
  /* d99f4: ror x2, x13, #0x2c */
  ARC_X_W(c, 2, arc_ror64(ARC_X_R(c, 13), ((UINT64_C(44)) & 63)));
  /* d99f8: neg x9, x9 */
  ARC_X_W(c, 9, ((uint64_t)0 - (uint64_t)(ARC_X_R(c, 9))));
  /* d99fc: add x14, x1, x14 */
  ARC_X_W(c, 14, (ARC_X_R(c, 1) + ARC_X_R(c, 14)));
  /* d9a00: add x1, x2, x16 */
  ARC_X_W(c, 1, (ARC_X_R(c, 2) + ARC_X_R(c, 16)));
  /* d9a04: add x0, x0, x15 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + ARC_X_R(c, 15)));
  /* d9a08: ror x0, x0, #0x15 */
  ARC_X_W(c, 0, arc_ror64(ARC_X_R(c, 0), ((UINT64_C(21)) & 63)));
  /* d9a0c: add x16, x14, x0 */
  ARC_X_W(c, 16, (ARC_X_R(c, 14) + ARC_X_R(c, 0)));
  /* d9a10: add x14, x13, x3 */
  ARC_X_W(c, 14, (ARC_X_R(c, 13) + ARC_X_R(c, 3)));
  /* d9a14: add x13, x1, x17 */
  ARC_X_W(c, 13, (ARC_X_R(c, 1) + ARC_X_R(c, 17)));
L_d9a18:;
  /* d9a18: ldp x0, x17, [x8, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 8) + INT64_C(-32));
    ARC_X_W(c, 0, arc_ld64(_pa));
    ARC_X_W(c, 17, arc_ld64(_pa + 8));
  }
  /* d9a1c: add x11, x11, x12 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) + ARC_X_R(c, 12)));
  /* d9a20: add x15, x15, x14 */
  ARC_X_W(c, 15, (ARC_X_R(c, 15) + ARC_X_R(c, 14)));
  /* d9a24: add x11, x11, x10 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) + ARC_X_R(c, 10)));
  /* d9a28: madd x0, x16, x22, x0 */
  ARC_X_W(c, 0, ((uint64_t)(ARC_X_R(c, 0)) + ((uint64_t)(ARC_X_R(c, 16)) * (uint64_t)(ARC_X_R(c, 22)))));
  /* d9a2c: ror x15, x15, #0x21 */
  ARC_X_W(c, 15, arc_ror64(ARC_X_R(c, 15), ((UINT64_C(33)) & 63)));
  /* d9a30: add x10, x10, x16 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + ARC_X_R(c, 16)));
  /* d9a34: adds x9, x9, #0x40 */
  ARC_X_W(c, 9, arc_add64(c, ARC_X_R(c, 9), UINT64_C(64), 0));
  /* d9a38: add x11, x11, x17 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) + ARC_X_R(c, 17)));
  /* d9a3c: ldp x4, x2, [x8] */
  { const uint64_t _pa = ARC_X_R(c, 8);
    ARC_X_W(c, 4, arc_ld64(_pa));
    ARC_X_W(c, 2, arc_ld64(_pa + 8));
  }
  /* d9a40: ror x16, x11, #0x25 */
  ARC_X_W(c, 16, arc_ror64(ARC_X_R(c, 11), ((UINT64_C(37)) & 63)));
  /* d9a44: mul x11, x15, x22 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 15)) * (uint64_t)(ARC_X_R(c, 22))));
  /* d9a48: ldp x1, x15, [x8, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 8) + INT64_C(16));
    ARC_X_W(c, 1, arc_ld64(_pa));
    ARC_X_W(c, 15, arc_ld64(_pa + 8));
  }
  /* d9a4c: add x12, x2, x12 */
  ARC_X_W(c, 12, (ARC_X_R(c, 2) + ARC_X_R(c, 12)));
  /* d9a50: mul x16, x16, x22 */
  ARC_X_W(c, 16, ((uint64_t)(ARC_X_R(c, 16)) * (uint64_t)(ARC_X_R(c, 22))));
  /* d9a54: add x14, x0, x14 */
  ARC_X_W(c, 14, (ARC_X_R(c, 0) + ARC_X_R(c, 14)));
  /* d9a58: add x10, x10, x1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + ARC_X_R(c, 1)));
  /* d9a5c: add x1, x2, x1 */
  ARC_X_W(c, 1, (ARC_X_R(c, 2) + ARC_X_R(c, 1)));
  /* d9a60: add x2, x13, x4 */
  ARC_X_W(c, 2, (ARC_X_R(c, 13) + ARC_X_R(c, 4)));
  /* d9a64: ror x10, x10, #0x2a */
  ARC_X_W(c, 10, arc_ror64(ARC_X_R(c, 10), ((UINT64_C(42)) & 63)));
  /* d9a68: add x2, x11, x2 */
  ARC_X_W(c, 2, (ARC_X_R(c, 11) + ARC_X_R(c, 2)));
  /* d9a6c: madd x10, x10, x22, x12 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 12)) + ((uint64_t)(ARC_X_R(c, 10)) * (uint64_t)(ARC_X_R(c, 22)))));
  /* d9a70: ldp x3, x12, [x8, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 8) + INT64_C(-16));
    ARC_X_W(c, 3, arc_ld64(_pa));
    ARC_X_W(c, 12, arc_ld64(_pa + 8));
  }
  /* d9a74: add x8, x8, #0x40 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(64)));
  /* d9a78: add x17, x17, x3 */
  ARC_X_W(c, 17, (ARC_X_R(c, 17) + ARC_X_R(c, 3)));
  /* d9a7c: add x3, x3, x2 */
  ARC_X_W(c, 3, (ARC_X_R(c, 3) + ARC_X_R(c, 2)));
  /* d9a80: add x14, x14, x12 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) + ARC_X_R(c, 12)));
  /* d9a84: add x17, x0, x17 */
  ARC_X_W(c, 17, (ARC_X_R(c, 0) + ARC_X_R(c, 17)));
  /* d9a88: add x12, x17, x12 */
  ARC_X_W(c, 12, (ARC_X_R(c, 17) + ARC_X_R(c, 12)));
  /* d9a8c: ror x4, x17, #0x2c */
  ARC_X_W(c, 4, arc_ror64(ARC_X_R(c, 17), ((UINT64_C(44)) & 63)));
  /* d9a90: eor x17, x16, x13 */
  ARC_X_W(c, 17, (ARC_X_R(c, 16) ^ ARC_X_R(c, 13)));
  /* d9a94: add x13, x1, x2 */
  ARC_X_W(c, 13, (ARC_X_R(c, 1) + ARC_X_R(c, 2)));
  /* d9a98: add x16, x10, x3 */
  ARC_X_W(c, 16, (ARC_X_R(c, 10) + ARC_X_R(c, 3)));
  /* d9a9c: add x14, x14, x17 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) + ARC_X_R(c, 17)));
  /* d9aa0: ror x1, x13, #0x2c */
  ARC_X_W(c, 1, arc_ror64(ARC_X_R(c, 13), ((UINT64_C(44)) & 63)));
  /* d9aa4: add x16, x16, x15 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + ARC_X_R(c, 15)));
  /* d9aa8: ror x3, x14, #0x15 */
  ARC_X_W(c, 3, arc_ror64(ARC_X_R(c, 14), ((UINT64_C(21)) & 63)));
  /* d9aac: add x0, x4, x0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 4) + ARC_X_R(c, 0)));
  /* d9ab0: ror x4, x16, #0x15 */
  ARC_X_W(c, 4, arc_ror64(ARC_X_R(c, 16), ((UINT64_C(21)) & 63)));
  /* d9ab4: add x14, x13, x15 */
  ARC_X_W(c, 14, (ARC_X_R(c, 13) + ARC_X_R(c, 15)));
  /* d9ab8: add x13, x1, x2 */
  ARC_X_W(c, 13, (ARC_X_R(c, 1) + ARC_X_R(c, 2)));
  /* d9abc: add x16, x0, x3 */
  ARC_X_W(c, 16, (ARC_X_R(c, 0) + ARC_X_R(c, 3)));
  /* d9ac0: mov x15, x17 */
  ARC_X_W(c, 15, ARC_X_R(c, 17));
  /* d9ac4: add x13, x13, x4 */
  ARC_X_W(c, 13, (ARC_X_R(c, 13) + ARC_X_R(c, 4)));
  /* d9ac8: b.ne #0xd9a18 */
  if (ARC_COND(c, 1)) goto L_d9a18;
  /* d9acc: eor x8, x14, x12 */
  ARC_X_W(c, 8, (ARC_X_R(c, 14) ^ ARC_X_R(c, 12)));
  /* d9ad0: eor x9, x13, x16 */
  ARC_X_W(c, 9, (ARC_X_R(c, 13) ^ ARC_X_R(c, 16)));
  /* d9ad4: eor x10, x10, x10, lsr #47 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) ^ ((uint64_t)(ARC_X_R(c, 10)) >> 47)));
  /* d9ad8: mul x8, x8, x23 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) * (uint64_t)(ARC_X_R(c, 23))));
  /* d9adc: mul x9, x9, x23 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) * (uint64_t)(ARC_X_R(c, 23))));
  /* d9ae0: madd x10, x10, x22, x17 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 17)) + ((uint64_t)(ARC_X_R(c, 10)) * (uint64_t)(ARC_X_R(c, 22)))));
  /* d9ae4: eor x12, x14, x8, lsr #47 */
  ARC_X_W(c, 12, (ARC_X_R(c, 14) ^ ((uint64_t)(ARC_X_R(c, 8)) >> 47)));
  /* d9ae8: eor x13, x13, x9, lsr #47 */
  ARC_X_W(c, 13, (ARC_X_R(c, 13) ^ ((uint64_t)(ARC_X_R(c, 9)) >> 47)));
  /* d9aec: eor x8, x12, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 12) ^ ARC_X_R(c, 8)));
  /* d9af0: mul x8, x8, x23 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) * (uint64_t)(ARC_X_R(c, 23))));
  /* d9af4: eor x9, x13, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 13) ^ ARC_X_R(c, 9)));
  /* d9af8: mul x9, x9, x23 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) * (uint64_t)(ARC_X_R(c, 23))));
  /* d9afc: eor x8, x8, x8, lsr #47 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) ^ ((uint64_t)(ARC_X_R(c, 8)) >> 47)));
  /* d9b00: eor x9, x9, x9, lsr #47 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) ^ ((uint64_t)(ARC_X_R(c, 9)) >> 47)));
  /* d9b04: madd x8, x8, x23, x10 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 10)) + ((uint64_t)(ARC_X_R(c, 8)) * (uint64_t)(ARC_X_R(c, 23)))));
  /* d9b08: madd x9, x9, x23, x11 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 11)) + ((uint64_t)(ARC_X_R(c, 9)) * (uint64_t)(ARC_X_R(c, 23)))));
  /* d9b0c: eor x8, x9, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) ^ ARC_X_R(c, 8)));
  /* d9b10: mul x8, x8, x23 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) * (uint64_t)(ARC_X_R(c, 23))));
  /* d9b14: eor x9, x9, x8, lsr #47 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) ^ ((uint64_t)(ARC_X_R(c, 8)) >> 47)));
  /* d9b18: eor x8, x9, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) ^ ARC_X_R(c, 8)));
L_d9b1c:;
  /* d9b1c: mul x8, x8, x23 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) * (uint64_t)(ARC_X_R(c, 23))));
  /* d9b20: eor x8, x8, x8, lsr #47 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) ^ ((uint64_t)(ARC_X_R(c, 8)) >> 47)));
  /* d9b24: mul x10, x8, x23 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 8)) * (uint64_t)(ARC_X_R(c, 23))));
  /* d9b28: b #0xd97ac */
  goto L_d97ac;
L_d9b2c:;
  /* d9b2c: cmp x9, #4 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(4));
  /* d9b30: b.lo #0xd9b50 */
  if (ARC_COND(c, 3)) goto L_d9b50;
  /* d9b34: ldr w10, [x8] */
  ARC_W_W(c, 10, arc_ld32(ARC_X_R(c, 8)));
  /* d9b38: add x8, x8, x9 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + ARC_X_R(c, 9)));
  /* d9b3c: ldur w8, [x8, #-4] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 8) + INT64_C(-4))));
  /* d9b40: lsl w10, w10, #3 */
  ARC_W_W(c, 10, ((uint32_t)(ARC_W_R(c, 10)) << ((UINT64_C(3)) & 31)));
  /* d9b44: add x9, x9, x10 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + ARC_X_R(c, 10)));
  /* d9b48: eor x9, x9, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) ^ ARC_X_R(c, 8)));
  /* d9b4c: b #0xd9968 */
  goto L_d9968;
L_d9b50:;
  /* d9b50: mov x10, x24 */
  ARC_X_W(c, 10, ARC_X_R(c, 24));
  /* d9b54: cbnz x9, #0xd9800 */
  if ((ARC_X_R(c, 9)) != 0) goto L_d9800;
  /* d9b58: b #0xd97ac */
  goto L_d97ac;
L_d9b5c:;
  /* d9b5c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* d9b60: ldp x20, x19, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* d9b64: ldr x25, [sp, #0x40] */
  ARC_X_W(c, 25, arc_ld64(((c)->sp + INT64_C(64))));
  /* d9b68: ldp x22, x21, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* d9b6c: ldp x24, x23, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* d9b70: ldp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* d9b74: add sp, sp, #0x80 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(128)));
  /* d9b78: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* d9b7c: ret  */
  return;
}

void fn1_dc0e0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038829280));
  /* dc0e0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* dc0e4: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* dc0e8: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* dc0ec: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* dc0f0: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* dc0f4: adrp x9, #0x151000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1380352)));
  /* dc0f8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* dc0fc: ldr x8, [x8, #0xa30] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2608))));
  /* dc100: ldr x9, [x9, #0xa20] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(2592))));
  /* dc104: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* dc108: add x9, x9, #0x10 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(16)));
  /* dc10c: str x8, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* dc110: str x9, [x0, #0x30]! */
  { const uint64_t _a = (ARC_X_R(c, 0) + INT64_C(48));
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(48));
    arc_st64(_a, ARC_X_R(c, 9));
  }
  /* dc114: bl #0x142bf0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(901400));
  fn1_142bf0(c);
  /* dc118: add x0, x19, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(8)));
  /* dc11c: bl #0x143220 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(901408));
  fn1_143220(c);
  /* dc120: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* dc124: mov w1, #0x58 */
  ARC_W_W(c, 1, UINT64_C(88));
  /* dc128: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* dc12c: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* dc130: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* dc134: b #0x142608 */
  fn1_142608(c); return;
  /* dc138: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(901436));
  fn1_a1454(c);
  /* dc13c: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(901440));
  fn1_a1454(c);
}

void fn1_e0b30(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038848304));
  /* e0b30: bti c */
  /* bti: no architectural effect here */
  /* e0b34: ldrb w9, [x0] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 0)));
  /* e0b38: ldr x8, [x0, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* e0b3c: lsr x10, x9, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(1)) & 63)));
  /* e0b40: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* e0b44: csel x8, x10, x8, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 8)));
  /* e0b48: subs x8, x8, x2 */
  ARC_X_W(c, 8, arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 2)));
  /* e0b4c: b.ls #0xe0b98 */
  if (ARC_COND(c, 9)) goto L_e0b98;
  /* e0b50: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e0b54: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e0b58: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* e0b5c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* e0b60: ldr x10, [x0, #0x10] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* e0b64: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* e0b68: and w1, w1, #0xff */
  ARC_W_W(c, 1, (ARC_W_R(c, 1) & UINT64_C(255)));
  /* e0b6c: csinc x19, x10, x0, ne */
  ARC_X_W(c, 19, (ARC_COND(c, 1) ? (ARC_X_R(c, 10)) : ((ARC_X_R(c, 0)) + 1)));
  /* e0b70: add x0, x19, x2 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + ARC_X_R(c, 2)));
  /* e0b74: mov x2, x8 */
  ARC_X_W(c, 2, ARC_X_R(c, 8));
  /* e0b78: bl #0x1428d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(920444));
  fn1_1428d8(c);
  /* e0b7c: sub x8, x0, x19 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) - ARC_X_R(c, 19)));
  /* e0b80: cmp x0, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 0), UINT64_C(0));
  /* e0b84: csinv x0, x8, xzr, ne */
  ARC_X_W(c, 0, (ARC_COND(c, 1) ? (ARC_X_R(c, 8)) : (~(uint64_t)(ARC_X_R(c, 31)))));
  /* e0b88: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* e0b8c: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e0b90: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* e0b94: ret  */
  return;
L_e0b98:;
  /* e0b98: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* e0b9c: ret  */
  return;
}

void fn1_e3608(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038859272));
  /* e3608: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e360c: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e3610: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* e3614: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* e3618: ldrb w8, [x0] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 0)));
  /* e361c: ldr x9, [x0, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* e3620: lsr x10, x8, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* e3624: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* e3628: csel x9, x10, x9, eq */
  ARC_X_W(c, 9, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* e362c: cmp x1, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 1), ARC_X_R(c, 9));
  /* e3630: b.hi #0xe367c */
  if (ARC_COND(c, 8)) goto L_e367c;
  /* e3634: cmn x2, #1 */
  (void)arc_add64(c, ARC_X_R(c, 2), UINT64_C(1), 0);
  /* e3638: b.eq #0xe364c */
  if (ARC_COND(c, 0)) goto L_e364c;
  /* e363c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* e3640: bl #0xe3680 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(931396));
  fn1_e3680(c);
  /* e3644: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* e3648: b #0xe366c */
  goto L_e366c;
L_e364c:;
  /* e364c: tbnz w8, #0, #0xe3660 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_e3660;
  /* e3650: lsl w9, w1, #1 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 1)) << ((UINT64_C(1)) & 31)));
  /* e3654: mov x8, x0 */
  ARC_X_W(c, 8, ARC_X_R(c, 0));
  /* e3658: strb w9, [x8], #4 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(4));
    arc_st8(_a, ARC_W_R(c, 9));
  }
  /* e365c: b #0xe3668 */
  goto L_e3668;
L_e3660:;
  /* e3660: ldr x8, [x0, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* e3664: str x1, [x0, #8] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(8)), ARC_X_R(c, 1));
L_e3668:;
  /* e3668: str wzr, [x8, x1, lsl #2] */
  arc_st32((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 1)) << 2)), ARC_W_R(c, 31));
L_e366c:;
  /* e366c: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* e3670: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e3674: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* e3678: ret  */
  return;
L_e367c:;
  /* e367c: bl #0xe1f80 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(931456));
  fn1_e1f80(c);
}

void fn1_e7cd0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038877392));
  /* e7cd0: bti c */
  /* bti: no architectural effect here */
  /* e7cd4: adrp x0, #0x51000 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(331776)));
  /* e7cd8: add x0, x0, #0xec8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3784)));
  /* e7cdc: ret  */
  return;
}

void fn1_ea4bc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038887612));
  /* ea4bc: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* ea4c0: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* ea4c4: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* ea4c8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* ea4cc: ldr x19, [x0] */
  ARC_X_W(c, 19, arc_ld64(ARC_X_R(c, 0)));
  /* ea4d0: str xzr, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 31));
  /* ea4d4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ea4d8: bl #0x1431c0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(959708));
  fn1_1431c0(c);
  /* ea4dc: add x1, x19, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 19) + UINT64_C(8)));
  /* ea4e0: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* ea4e4: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(959720));
  fn1_bd950(c);
  /* ea4e8: cbz x0, #0xea4fc */
  if ((ARC_X_R(c, 0)) == 0) goto L_ea4fc;
  /* ea4ec: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* ea4f0: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ea4f4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* ea4f8: ret  */
  return;
L_ea4fc:;
  /* ea4fc: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* ea500: ldr x16, [x8, #0x10] */
  ARC_X_W(c, 16, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* ea504: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ea508: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* ea50c: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ea510: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* ea514: br x16 */
  arc_dispatch(c, ARC_X_R(c, 16)); return;
  /* ea518: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* ea51c: cbz x19, #0xea540 */
  if ((ARC_X_R(c, 19)) == 0) goto L_ea540;
  /* ea520: add x1, x19, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 19) + UINT64_C(8)));
  /* ea524: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* ea528: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(959788));
  fn1_bd950(c);
  /* ea52c: cbnz x0, #0xea540 */
  if ((ARC_X_R(c, 0)) != 0) goto L_ea540;
  /* ea530: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* ea534: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ea538: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* ea53c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(959808));
  arc_dispatch(c, ARC_X_R(c, 8));
L_ea540:;
  /* ea540: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* ea544: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(959816));
  fn1_9cc20(c);
}

void fn1_ebe2c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038894124));
  /* ebe2c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* ebe30: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* ebe34: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* ebe38: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* ebe3c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* ebe40: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* ebe44: add x20, x29, #0x1c */
  ARC_X_W(c, 20, (ARC_X_R(c, 29) + UINT64_C(28)));
  /* ebe48: mov w21, #4 */
  ARC_W_W(c, 21, UINT64_C(4));
  /* ebe4c: b #0xebe64 */
  goto L_ebe64;
L_ebe50:;
  /* ebe50: bl #0x142a58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(966228));
  fn1_142a58(c);
  /* ebe54: ldr w0, [x0] */
  ARC_W_W(c, 0, arc_ld32(ARC_X_R(c, 0)));
  /* ebe58: cmp w0, #4 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(4));
  /* ebe5c: b.ne #0xebea4 */
  if (ARC_COND(c, 1)) goto L_ebea4;
  /* ebe60: cbz x21, #0xebe8c */
  if ((ARC_X_R(c, 21)) == 0) goto L_ebe8c;
L_ebe64:;
  /* ebe64: ldr w0, [x19] */
  ARC_W_W(c, 0, arc_ld32(ARC_X_R(c, 19)));
  /* ebe68: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* ebe6c: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* ebe70: bl #0x143388 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(966260));
  fn1_143388(c);
  /* ebe74: cmn x0, #1 */
  (void)arc_add64(c, ARC_X_R(c, 0), UINT64_C(1), 0);
  /* ebe78: b.eq #0xebe50 */
  if (ARC_COND(c, 0)) goto L_ebe50;
  /* ebe7c: cbz x0, #0xebeb0 */
  if ((ARC_X_R(c, 0)) == 0) goto L_ebeb0;
  /* ebe80: sub x21, x21, x0 */
  ARC_X_W(c, 21, (ARC_X_R(c, 21) - ARC_X_R(c, 0)));
  /* ebe84: add x20, x20, x0 */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) + ARC_X_R(c, 0)));
  /* ebe88: cbnz x21, #0xebe64 */
  if ((ARC_X_R(c, 21)) != 0) goto L_ebe64;
L_ebe8c:;
  /* ebe8c: ldr w0, [x29, #0x1c] */
  ARC_W_W(c, 0, arc_ld32((ARC_X_R(c, 29) + INT64_C(28))));
  /* ebe90: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* ebe94: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* ebe98: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ebe9c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* ebea0: ret  */
  return;
L_ebea4:;
  /* ebea4: adrp x1, #0x51000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(331776)));
  /* ebea8: add x1, x1, #0x8e4 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2276)));
  /* ebeac: bl #0x142a40 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(966320));
  fn1_142a40(c);
L_ebeb0:;
  /* ebeb0: adrp x1, #0x50000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(327680)));
  /* ebeb4: add x1, x1, #0x83e */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2110)));
  /* ebeb8: mov w0, #0x2a */
  ARC_W_W(c, 0, UINT64_C(42));
  /* ebebc: bl #0x142a40 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(966336));
  fn1_142a40(c);
}

void fn1_ed8b4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038900916));
  /* ed8b4: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* ed8b8: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* ed8bc: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* ed8c0: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* ed8c4: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* ed8c8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* ed8cc: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* ed8d0: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(973012));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* ed8d4: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* ed8d8: b.eq #0xed8ec */
  if (ARC_COND(c, 0)) goto L_ed8ec;
  /* ed8dc: ldr x8, [x19, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(24))));
  /* ed8e0: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* ed8e4: str x9, [x19, #0x18] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(24)), ARC_X_R(c, 9));
  /* ed8e8: ldrb w0, [x8] */
  ARC_W_W(c, 0, arc_ld8(ARC_X_R(c, 8)));
L_ed8ec:;
  /* ed8ec: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* ed8f0: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ed8f4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* ed8f8: ret  */
  return;
}

void fn1_f17f0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038917104));
  /* f17f0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* f17f4: sub sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(112)));
  /* f17f8: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* f17fc: stp x26, x25, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* f1800: stp x24, x23, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* f1804: stp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* f1808: stp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* f180c: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* f1810: mov w20, w1 */
  ARC_W_W(c, 20, ARC_W_R(c, 1));
  /* f1814: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f1818: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* f181c: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* f1820: bl #0x143610 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(989220));
  fn1_143610(c);
  /* f1824: ldrb w8, [sp, #8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(8))));
  /* f1828: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* f182c: b.ne #0xf196c */
  if (ARC_COND(c, 1)) goto L_f196c;
  /* f1830: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f1834: nop  */
  /* nop: no architectural effect here */
  /* f1838: adr x26, #0x15dc40 */
  ARC_X_W(c, 26, (arc_image_bases[1] + UINT64_C(1432640)));
  /* f183c: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f1840: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f1844: ldr x22, [x8, #0x30] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 8) + INT64_C(48))));
  /* f1848: cmp x22, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 26));
  /* f184c: stur x22, [x29, #-8] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-8)), ARC_X_R(c, 22));
  /* f1850: b.eq #0xf1860 */
  if (ARC_COND(c, 0)) goto L_f1860;
  /* f1854: add x1, x22, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 22) + UINT64_C(8)));
  /* f1858: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* f185c: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(989280));
  fn1_db2e0(c);
L_f1860:;
  /* f1860: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* f1864: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* f1868: ldr x1, [x1, #0xb50] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(2896))));
  /* f186c: bl #0x143748 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(989296));
  fn1_143748(c);
  /* f1870: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* f1874: cmp x22, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 26));
  /* f1878: b.eq #0xf189c */
  if (ARC_COND(c, 0)) goto L_f189c;
  /* f187c: add x1, x22, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 22) + UINT64_C(8)));
  /* f1880: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* f1884: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(989320));
  fn1_bd950(c);
  /* f1888: cbnz x0, #0xf189c */
  if ((ARC_X_R(c, 0)) != 0) goto L_f189c;
  /* f188c: ldr x8, [x22] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 22)));
  /* f1890: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* f1894: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* f1898: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(989340));
  arc_dispatch(c, ARC_X_R(c, 8));
L_f189c:;
  /* f189c: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f18a0: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f18a4: add x22, x19, x8 */
  ARC_X_W(c, 22, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f18a8: ldr w3, [x22, #0x90] */
  ARC_W_W(c, 3, arc_ld32((ARC_X_R(c, 22) + INT64_C(144))));
  /* f18ac: ldr x23, [x22, #0x28] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 22) + INT64_C(40))));
  /* f18b0: cmn w3, #1 */
  (void)arc_add32(c, ARC_W_R(c, 3), UINT64_C(1), 0);
  /* f18b4: b.ne #0xf1928 */
  if (ARC_COND(c, 1)) goto L_f1928;
  /* f18b8: ldr x24, [x22, #0x30] */
  ARC_X_W(c, 24, arc_ld64((ARC_X_R(c, 22) + INT64_C(48))));
  /* f18bc: cmp x24, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 24), ARC_X_R(c, 26));
  /* f18c0: stur x24, [x29, #-8] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-8)), ARC_X_R(c, 24));
  /* f18c4: b.eq #0xf18d4 */
  if (ARC_COND(c, 0)) goto L_f18d4;
  /* f18c8: add x1, x24, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 24) + UINT64_C(8)));
  /* f18cc: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* f18d0: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(989396));
  fn1_db2e0(c);
L_f18d4:;
  /* f18d4: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* f18d8: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* f18dc: ldr x1, [x1, #0xb40] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(2880))));
  /* f18e0: bl #0x143748 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(989412));
  fn1_143748(c);
  /* f18e4: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* f18e8: ldr x8, [x8, #0x38] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(56))));
  /* f18ec: mov w1, #0x20 */
  ARC_W_W(c, 1, UINT64_C(32));
  /* f18f0: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(989428));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* f18f4: mov w25, w0 */
  ARC_W_W(c, 25, ARC_W_R(c, 0));
  /* f18f8: cmp x24, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 24), ARC_X_R(c, 26));
  /* f18fc: b.eq #0xf1920 */
  if (ARC_COND(c, 0)) goto L_f1920;
  /* f1900: add x1, x24, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 24) + UINT64_C(8)));
  /* f1904: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* f1908: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(989452));
  fn1_bd950(c);
  /* f190c: cbnz x0, #0xf1920 */
  if ((ARC_X_R(c, 0)) != 0) goto L_f1920;
  /* f1910: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* f1914: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* f1918: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* f191c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(989472));
  arc_dispatch(c, ARC_X_R(c, 8));
L_f1920:;
  /* f1920: and w3, w25, #0xff */
  ARC_W_W(c, 3, (ARC_W_R(c, 25) & UINT64_C(255)));
  /* f1924: str w3, [x22, #0x90] */
  arc_st32((ARC_X_R(c, 22) + INT64_C(144)), ARC_W_R(c, 3));
L_f1928:;
  /* f1928: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* f192c: ldr x8, [x8, #0x30] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(48))));
  /* f1930: and x4, x20, #0xffff */
  ARC_X_W(c, 4, (ARC_X_R(c, 20) & UINT64_C(65535)));
  /* f1934: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* f1938: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* f193c: mov x2, x22 */
  ARC_X_W(c, 2, ARC_X_R(c, 22));
  /* f1940: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(989508));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* f1944: cbnz x0, #0xf196c */
  if ((ARC_X_R(c, 0)) != 0) goto L_f196c;
  /* f1948: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f194c: mov w10, #5 */
  ARC_W_W(c, 10, UINT64_C(5));
  /* f1950: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f1954: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f1958: ldp w9, w11, [x8, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 8) + INT64_C(32));
    ARC_W_W(c, 9, arc_ld32(_pa));
    ARC_W_W(c, 11, arc_ld32(_pa + 4));
  }
  /* f195c: orr w9, w9, w10 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | ARC_W_R(c, 10)));
  /* f1960: tst w11, w9 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 11) & ARC_W_R(c, 9)));
  /* f1964: str w9, [x8, #0x20] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(32)), ARC_W_R(c, 9));
  /* f1968: b.ne #0xf1998 */
  if (ARC_COND(c, 1)) goto L_f1998;
L_f196c:;
  /* f196c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* f1970: bl #0x143628 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(989556));
  fn1_143628(c);
L_f1974:;
  /* f1974: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f1978: ldp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* f197c: ldp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* f1980: ldp x24, x23, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* f1984: ldp x26, x25, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* f1988: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* f198c: add sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(112)));
  /* f1990: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* f1994: ret  */
  return;
L_f1998:;
  /* f1998: nop  */
  /* nop: no architectural effect here */
  /* f199c: adr x0, #0x50210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(328208)));
  /* f19a0: bl #0xec720 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(989604));
  fn1_ec720(c);
  /* f19a4: b #0xf19d0 */
  goto L_f19d0;
  /* f19a8: cmp x24, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 24), ARC_X_R(c, 26));
  /* f19ac: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* f19b0: b.eq #0xf1a04 */
  if (ARC_COND(c, 0)) goto L_f1a04;
  /* f19b4: add x1, x24, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 24) + UINT64_C(8)));
  /* f19b8: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* f19bc: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(989632));
  fn1_bd950(c);
  /* f19c0: cbnz x0, #0xf1a04 */
  if ((ARC_X_R(c, 0)) != 0) goto L_f1a04;
  /* f19c4: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* f19c8: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* f19cc: b #0xf19fc */
  goto L_f19fc;
L_f19d0:;
  /* f19d0: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* f19d4: b #0xf1a04 */
  goto L_f1a04;
  /* f19d8: cmp x22, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 26));
  /* f19dc: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* f19e0: b.eq #0xf1a04 */
  if (ARC_COND(c, 0)) goto L_f1a04;
  /* f19e4: add x1, x22, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 22) + UINT64_C(8)));
  /* f19e8: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* f19ec: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(989680));
  fn1_bd950(c);
  /* f19f0: cbnz x0, #0xf1a04 */
  if ((ARC_X_R(c, 0)) != 0) goto L_f1a04;
  /* f19f4: ldr x8, [x22] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 22)));
  /* f19f8: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
L_f19fc:;
  /* f19fc: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* f1a00: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(989700));
  arc_dispatch(c, ARC_X_R(c, 8));
L_f1a04:;
  /* f1a04: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* f1a08: bl #0x143628 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(989708));
  fn1_143628(c);
  /* f1a0c: b #0xf1a14 */
  goto L_f1a14;
  /* f1a10: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
L_f1a14:;
  /* f1a14: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* f1a18: bl #0x142548 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(989724));
  fn1_142548(c);
  /* f1a1c: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f1a20: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f1a24: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f1a28: ldr w9, [x8, #0x20] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 8) + INT64_C(32))));
  /* f1a2c: ldrb w10, [x8, #0x24] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 8) + INT64_C(36))));
  /* f1a30: orr w9, w9, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | UINT64_C(1)));
  /* f1a34: str w9, [x8, #0x20] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(32)), ARC_W_R(c, 9));
  /* f1a38: tbnz w10, #0, #0xf1a44 */
  if (((ARC_W_R(c, 10)) >> 0 & 1) != 0) goto L_f1a44;
  /* f1a3c: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(989760));
  fn1_142980(c);
  /* f1a40: b #0xf1974 */
  goto L_f1974;
L_f1a44:;
  /* f1a44: bl #0x1429b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(989768));
  fn1_1429b0(c);
  /* f1a48: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f1a4c: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(989776));
  fn1_142980(c);
  /* f1a50: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f1a54: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(989784));
  fn1_9cc20(c);
  /* f1a58: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(989788));
  fn1_a1454(c);
}

void fn1_f42ec(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038928108));
  /* f42ec: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* f42f0: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* f42f4: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* f42f8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* f42fc: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* f4300: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f4304: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* f4308: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1000204));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* f430c: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* f4310: b.eq #0xf4320 */
  if (ARC_COND(c, 0)) goto L_f4320;
  /* f4314: ldr x8, [x19, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(24))));
  /* f4318: ldr w0, [x8], #4 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(4));
    ARC_W_W(c, 0, arc_ld32(_a));
  }
  /* f431c: str x8, [x19, #0x18] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(24)), ARC_X_R(c, 8));
L_f4320:;
  /* f4320: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* f4324: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* f4328: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* f432c: ret  */
  return;
}

void fn1_f8230(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038944304));
  /* f8230: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* f8234: sub sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(96)));
  /* f8238: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* f823c: str x25, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 25));
  /* f8240: stp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* f8244: stp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* f8248: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* f824c: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* f8250: mov w20, w1 */
  ARC_W_W(c, 20, ARC_W_R(c, 1));
  /* f8254: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f8258: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* f825c: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* f8260: bl #0x143688 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1016420));
  fn1_143688(c);
  /* f8264: ldrb w8, [sp] */
  ARC_W_W(c, 8, arc_ld8((c)->sp));
  /* f8268: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* f826c: b.ne #0xf83b4 */
  if (ARC_COND(c, 1)) goto L_f83b4;
  /* f8270: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f8274: nop  */
  /* nop: no architectural effect here */
  /* f8278: adr x25, #0x15dc40 */
  ARC_X_W(c, 25, (arc_image_bases[1] + UINT64_C(1432640)));
  /* f827c: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f8280: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f8284: ldr x22, [x8, #0x30] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 8) + INT64_C(48))));
  /* f8288: cmp x22, x25 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 25));
  /* f828c: str x22, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 22));
  /* f8290: b.eq #0xf82a0 */
  if (ARC_COND(c, 0)) goto L_f82a0;
  /* f8294: add x1, x22, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 22) + UINT64_C(8)));
  /* f8298: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* f829c: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1016480));
  fn1_db2e0(c);
L_f82a0:;
  /* f82a0: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* f82a4: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* f82a8: ldr x1, [x1, #0xb68] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(2920))));
  /* f82ac: bl #0x143748 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1016496));
  fn1_143748(c);
  /* f82b0: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* f82b4: cmp x22, x25 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 25));
  /* f82b8: b.eq #0xf82dc */
  if (ARC_COND(c, 0)) goto L_f82dc;
  /* f82bc: add x1, x22, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 22) + UINT64_C(8)));
  /* f82c0: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* f82c4: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1016520));
  fn1_bd950(c);
  /* f82c8: cbnz x0, #0xf82dc */
  if ((ARC_X_R(c, 0)) != 0) goto L_f82dc;
  /* f82cc: ldr x8, [x22] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 22)));
  /* f82d0: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* f82d4: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* f82d8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1016540));
  arc_dispatch(c, ARC_X_R(c, 8));
L_f82dc:;
  /* f82dc: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f82e0: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f82e4: add x22, x19, x8 */
  ARC_X_W(c, 22, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f82e8: ldr w3, [x22, #0x90] */
  ARC_W_W(c, 3, arc_ld32((ARC_X_R(c, 22) + INT64_C(144))));
  /* f82ec: ldr x23, [x22, #0x28] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 22) + INT64_C(40))));
  /* f82f0: cmn w3, #1 */
  (void)arc_add32(c, ARC_W_R(c, 3), UINT64_C(1), 0);
  /* f82f4: b.ne #0xf8370 */
  if (ARC_COND(c, 1)) goto L_f8370;
  /* f82f8: ldr x24, [x22, #0x30] */
  ARC_X_W(c, 24, arc_ld64((ARC_X_R(c, 22) + INT64_C(48))));
  /* f82fc: cmp x24, x25 */
  (void)arc_sub64(c, ARC_X_R(c, 24), ARC_X_R(c, 25));
  /* f8300: str x24, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 24));
  /* f8304: b.eq #0xf8314 */
  if (ARC_COND(c, 0)) goto L_f8314;
  /* f8308: add x1, x24, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 24) + UINT64_C(8)));
  /* f830c: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* f8310: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1016596));
  fn1_db2e0(c);
L_f8314:;
  /* f8314: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* f8318: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* f831c: ldr x1, [x1, #0xb58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(2904))));
  /* f8320: bl #0x143748 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1016612));
  fn1_143748(c);
  /* f8324: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* f8328: ldr x8, [x8, #0x58] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(88))));
  /* f832c: mov w1, #0x20 */
  ARC_W_W(c, 1, UINT64_C(32));
  /* f8330: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1016628));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* f8334: mov w3, w0 */
  ARC_W_W(c, 3, ARC_W_R(c, 0));
  /* f8338: cmp x24, x25 */
  (void)arc_sub64(c, ARC_X_R(c, 24), ARC_X_R(c, 25));
  /* f833c: b.eq #0xf836c */
  if (ARC_COND(c, 0)) goto L_f836c;
  /* f8340: add x1, x24, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 24) + UINT64_C(8)));
  /* f8344: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* f8348: mov w25, w3 */
  ARC_W_W(c, 25, ARC_W_R(c, 3));
  /* f834c: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1016656));
  fn1_bd950(c);
  /* f8350: mov w3, w25 */
  ARC_W_W(c, 3, ARC_W_R(c, 25));
  /* f8354: cbnz x0, #0xf836c */
  if ((ARC_X_R(c, 0)) != 0) goto L_f836c;
  /* f8358: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* f835c: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* f8360: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* f8364: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1016680));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* f8368: mov w3, w25 */
  ARC_W_W(c, 3, ARC_W_R(c, 25));
L_f836c:;
  /* f836c: str w3, [x22, #0x90] */
  arc_st32((ARC_X_R(c, 22) + INT64_C(144)), ARC_W_R(c, 3));
L_f8370:;
  /* f8370: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* f8374: ldr x8, [x8, #0x30] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(48))));
  /* f8378: and x4, x20, #0xffff */
  ARC_X_W(c, 4, (ARC_X_R(c, 20) & UINT64_C(65535)));
  /* f837c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* f8380: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* f8384: mov x2, x22 */
  ARC_X_W(c, 2, ARC_X_R(c, 22));
  /* f8388: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1016716));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* f838c: cbnz x0, #0xf83b4 */
  if ((ARC_X_R(c, 0)) != 0) goto L_f83b4;
  /* f8390: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f8394: mov w10, #5 */
  ARC_W_W(c, 10, UINT64_C(5));
  /* f8398: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f839c: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f83a0: ldp w9, w11, [x8, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 8) + INT64_C(32));
    ARC_W_W(c, 9, arc_ld32(_pa));
    ARC_W_W(c, 11, arc_ld32(_pa + 4));
  }
  /* f83a4: orr w9, w9, w10 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | ARC_W_R(c, 10)));
  /* f83a8: tst w11, w9 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 11) & ARC_W_R(c, 9)));
  /* f83ac: str w9, [x8, #0x20] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(32)), ARC_W_R(c, 9));
  /* f83b0: b.ne #0xf83e0 */
  if (ARC_COND(c, 1)) goto L_f83e0;
L_f83b4:;
  /* f83b4: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* f83b8: bl #0x1436a0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1016764));
  fn1_1436a0(c);
L_f83bc:;
  /* f83bc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f83c0: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* f83c4: ldr x25, [sp, #0x20] */
  ARC_X_W(c, 25, arc_ld64(((c)->sp + INT64_C(32))));
  /* f83c8: ldp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* f83cc: ldp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* f83d0: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* f83d4: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* f83d8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* f83dc: ret  */
  return;
L_f83e0:;
  /* f83e0: nop  */
  /* nop: no architectural effect here */
  /* f83e4: adr x0, #0x50210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(328208)));
  /* f83e8: bl #0xec720 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1016812));
  fn1_ec720(c);
  /* f83ec: b #0xf8418 */
  goto L_f8418;
  /* f83f0: cmp x24, x25 */
  (void)arc_sub64(c, ARC_X_R(c, 24), ARC_X_R(c, 25));
  /* f83f4: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* f83f8: b.eq #0xf844c */
  if (ARC_COND(c, 0)) goto L_f844c;
  /* f83fc: add x1, x24, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 24) + UINT64_C(8)));
  /* f8400: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* f8404: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1016840));
  fn1_bd950(c);
  /* f8408: cbnz x0, #0xf844c */
  if ((ARC_X_R(c, 0)) != 0) goto L_f844c;
  /* f840c: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* f8410: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* f8414: b #0xf8444 */
  goto L_f8444;
L_f8418:;
  /* f8418: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* f841c: b #0xf844c */
  goto L_f844c;
  /* f8420: cmp x22, x25 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 25));
  /* f8424: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* f8428: b.eq #0xf844c */
  if (ARC_COND(c, 0)) goto L_f844c;
  /* f842c: add x1, x22, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 22) + UINT64_C(8)));
  /* f8430: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* f8434: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1016888));
  fn1_bd950(c);
  /* f8438: cbnz x0, #0xf844c */
  if ((ARC_X_R(c, 0)) != 0) goto L_f844c;
  /* f843c: ldr x8, [x22] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 22)));
  /* f8440: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
L_f8444:;
  /* f8444: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* f8448: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1016908));
  arc_dispatch(c, ARC_X_R(c, 8));
L_f844c:;
  /* f844c: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* f8450: bl #0x1436a0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1016916));
  fn1_1436a0(c);
  /* f8454: b #0xf845c */
  goto L_f845c;
  /* f8458: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
L_f845c:;
  /* f845c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* f8460: bl #0x142548 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1016932));
  fn1_142548(c);
  /* f8464: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f8468: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f846c: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f8470: ldr w9, [x8, #0x20] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 8) + INT64_C(32))));
  /* f8474: ldrb w10, [x8, #0x24] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 8) + INT64_C(36))));
  /* f8478: orr w9, w9, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | UINT64_C(1)));
  /* f847c: str w9, [x8, #0x20] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(32)), ARC_W_R(c, 9));
  /* f8480: tbnz w10, #0, #0xf848c */
  if (((ARC_W_R(c, 10)) >> 0 & 1) != 0) goto L_f848c;
  /* f8484: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1016968));
  fn1_142980(c);
  /* f8488: b #0xf83bc */
  goto L_f83bc;
L_f848c:;
  /* f848c: bl #0x1429b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1016976));
  fn1_1429b0(c);
  /* f8490: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f8494: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1016984));
  fn1_142980(c);
  /* f8498: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f849c: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1016992));
  fn1_9cc20(c);
  /* f84a0: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1016996));
  fn1_a1454(c);
}

void fn1_fd428(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038965288));
  /* fd428: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* fd42c: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* fd430: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* fd434: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* fd438: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* fd43c: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* fd440: adrp x9, #0x151000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1380352)));
  /* fd444: adrp x10, #0x151000 */
  ARC_X_W(c, 10, (arc_image_bases[1] + UINT64_C(1380352)));
  /* fd448: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* fd44c: ldr x9, [x9, #0xb08] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(2824))));
  /* fd450: ldr x10, [x10, #0xae0] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 10) + INT64_C(2784))));
  /* fd454: add x19, x0, x8 */
  ARC_X_W(c, 19, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* fd458: add x8, x9, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) + UINT64_C(24)));
  /* fd45c: add x9, x9, #0x40 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(64)));
  /* fd460: mov x20, x19 */
  ARC_X_W(c, 20, ARC_X_R(c, 19));
  /* fd464: ldrb w11, [x19, #0x48] */
  ARC_W_W(c, 11, arc_ld8((ARC_X_R(c, 19) + INT64_C(72))));
  /* fd468: str x9, [x20, #0x70]! */
  { const uint64_t _a = (ARC_X_R(c, 20) + INT64_C(112));
    ARC_X_W(c, 20, ARC_X_R(c, 20) + INT64_C(112));
    arc_st64(_a, ARC_X_R(c, 9));
  }
  /* fd46c: add x9, x10, #0x10 */
  ARC_X_W(c, 9, (ARC_X_R(c, 10) + UINT64_C(16)));
  /* fd470: stp x8, x9, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* fd474: tbz w11, #0, #0xfd488 */
  if (((ARC_W_R(c, 11)) >> 0 & 1) == 0) goto L_fd488;
  /* fd478: ldr x8, [x19, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(72))));
  /* fd47c: ldr x0, [x19, #0x58] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(88))));
  /* fd480: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* fd484: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1037448));
  fn1_142608(c);
L_fd488:;
  /* fd488: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* fd48c: nop  */
  /* nop: no architectural effect here */
  /* fd490: adr x9, #0x15dc40 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1432640)));
  /* fd494: ldr x8, [x8, #0xaa8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2728))));
  /* fd498: ldr x21, [x19, #0x10] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* fd49c: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* fd4a0: cmp x21, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 9));
  /* fd4a4: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
  /* fd4a8: b.eq #0xfd4cc */
  if (ARC_COND(c, 0)) goto L_fd4cc;
  /* fd4ac: add x1, x21, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(8)));
  /* fd4b0: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* fd4b4: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1037496));
  fn1_bd950(c);
  /* fd4b8: cbnz x0, #0xfd4cc */
  if ((ARC_X_R(c, 0)) != 0) goto L_fd4cc;
  /* fd4bc: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* fd4c0: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* fd4c4: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* fd4c8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1037516));
  arc_dispatch(c, ARC_X_R(c, 8));
L_fd4cc:;
  /* fd4cc: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* fd4d0: bl #0x1433b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1037524));
  fn1_1433b8(c);
  /* fd4d4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* fd4d8: mov w1, #0x108 */
  ARC_W_W(c, 1, UINT64_C(264));
  /* fd4dc: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* fd4e0: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* fd4e4: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* fd4e8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* fd4ec: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_104230(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038993456));
  /* 104230: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 104234: stp x29, x30, [sp, #-0x50]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-80));
    (c)->sp = (c)->sp + INT64_C(-80);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 104238: str x25, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 25));
  /* 10423c: stp x24, x23, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 104240: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 104244: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 104248: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 10424c: ldr x20, [x3] */
  ARC_X_W(c, 20, arc_ld64(ARC_X_R(c, 3)));
  /* 104250: ldr x19, [x29, #0x58] */
  ARC_X_W(c, 19, arc_ld64((ARC_X_R(c, 29) + INT64_C(88))));
  /* 104254: and w8, w0, #0xff */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) & UINT64_C(255)));
  /* 104258: cmp x20, x2 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 2));
  /* 10425c: b.eq #0x1042b0 */
  if (ARC_COND(c, 0)) goto L_1042b0;
L_104260:;
  /* 104260: ldrb w9, [x6] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 6)));
  /* 104264: ldr x10, [x6, #8] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 6) + INT64_C(8))));
  /* 104268: and w12, w5, #0xff */
  ARC_W_W(c, 12, (ARC_W_R(c, 5) & UINT64_C(255)));
  /* 10426c: lsr x11, x9, #1 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(1)) & 63)));
  /* 104270: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* 104274: csel x9, x11, x10, eq */
  ARC_X_W(c, 9, (ARC_COND(c, 0) ? (ARC_X_R(c, 11)) : ARC_X_R(c, 10)));
  /* 104278: cmp w8, w12 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 12));
  /* 10427c: b.ne #0x1042c4 */
  if (ARC_COND(c, 1)) goto L_1042c4;
  /* 104280: cbz x9, #0x1042c4 */
  if ((ARC_X_R(c, 9)) == 0) goto L_1042c4;
  /* 104284: ldr x8, [x29, #0x50] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(80))));
  /* 104288: ldr x9, [x8] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 8)));
  /* 10428c: sub x10, x9, x7 */
  ARC_X_W(c, 10, (ARC_X_R(c, 9) - ARC_X_R(c, 7)));
  /* 104290: cmp x10, #0x9f */
  (void)arc_sub64(c, ARC_X_R(c, 10), UINT64_C(159));
  /* 104294: b.gt #0x104358 */
  if (ARC_COND(c, 12)) goto L_104358;
  /* 104298: ldr w10, [x4] */
  ARC_W_W(c, 10, arc_ld32(ARC_X_R(c, 4)));
  /* 10429c: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 1042a0: str w10, [x9], #4 */
  { const uint64_t _a = ARC_X_R(c, 9);
    ARC_X_W(c, 9, ARC_X_R(c, 9) + INT64_C(4));
    arc_st32(_a, ARC_W_R(c, 10));
  }
  /* 1042a4: str x9, [x8] */
  arc_st64(ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 1042a8: str wzr, [x4] */
  arc_st32(ARC_X_R(c, 4), ARC_W_R(c, 31));
  /* 1042ac: b #0x104390 */
  goto L_104390;
L_1042b0:;
  /* 1042b0: ldrb w9, [x19, #0x18] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 19) + INT64_C(24))));
  /* 1042b4: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* 1042b8: b.ne #0x104304 */
  if (ARC_COND(c, 1)) goto L_104304;
  /* 1042bc: mov w8, #0x2b */
  ARC_W_W(c, 8, UINT64_C(43));
  /* 1042c0: b #0x104314 */
  goto L_104314;
L_1042c4:;
  /* 1042c4: mov w24, w1 */
  ARC_W_W(c, 24, ARC_W_R(c, 1));
  /* 1042c8: mov x21, x2 */
  ARC_X_W(c, 21, ARC_X_R(c, 2));
  /* 1042cc: and w1, w0, #0xff */
  ARC_W_W(c, 1, (ARC_W_R(c, 0) & UINT64_C(255)));
  /* 1042d0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1042d4: mov w2, #0x1a */
  ARC_W_W(c, 2, UINT64_C(26));
  /* 1042d8: mov x22, x3 */
  ARC_X_W(c, 22, ARC_X_R(c, 3));
  /* 1042dc: mov x23, x4 */
  ARC_X_W(c, 23, ARC_X_R(c, 4));
  /* 1042e0: add x25, x19, #0x1a */
  ARC_X_W(c, 25, (ARC_X_R(c, 19) + UINT64_C(26)));
  /* 1042e4: bl #0x1428d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1065704));
  fn1_1428d8(c);
  /* 1042e8: cmp x0, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 0), UINT64_C(0));
  /* 1042ec: csel x8, x25, x0, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 25)) : ARC_X_R(c, 0)));
  /* 1042f0: sub x8, x8, x19 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) - ARC_X_R(c, 19)));
  /* 1042f4: cmp x8, #0x17 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(23));
  /* 1042f8: b.le #0x10432c */
  if (ARC_COND(c, 13)) goto L_10432c;
L_1042fc:;
  /* 1042fc: mov w0, #-1 */
  ARC_W_W(c, 0, UINT64_C(18446744073709551615));
  /* 104300: b #0x104390 */
  goto L_104390;
L_104304:;
  /* 104304: ldrb w9, [x19, #0x19] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 19) + INT64_C(25))));
  /* 104308: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* 10430c: b.ne #0x104260 */
  if (ARC_COND(c, 1)) goto L_104260;
  /* 104310: mov w8, #0x2d */
  ARC_W_W(c, 8, UINT64_C(45));
L_104314:;
  /* 104314: add x9, x20, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 20) + UINT64_C(1)));
  /* 104318: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 10431c: str x9, [x3] */
  arc_st64(ARC_X_R(c, 3), ARC_X_R(c, 9));
  /* 104320: strb w8, [x20] */
  arc_st8(ARC_X_R(c, 20), ARC_W_R(c, 8));
  /* 104324: str wzr, [x4] */
  arc_st32(ARC_X_R(c, 4), ARC_W_R(c, 31));
  /* 104328: b #0x104390 */
  goto L_104390;
L_10432c:;
  /* 10432c: cmp w24, #8 */
  (void)arc_sub32(c, ARC_W_R(c, 24), UINT64_C(8));
  /* 104330: mov x9, x23 */
  ARC_X_W(c, 9, ARC_X_R(c, 23));
  /* 104334: mov x10, x22 */
  ARC_X_W(c, 10, ARC_X_R(c, 22));
  /* 104338: b.eq #0x10434c */
  if (ARC_COND(c, 0)) goto L_10434c;
  /* 10433c: cmp w24, #0x10 */
  (void)arc_sub32(c, ARC_W_R(c, 24), UINT64_C(16));
  /* 104340: b.eq #0x104360 */
  if (ARC_COND(c, 0)) goto L_104360;
  /* 104344: cmp w24, #0xa */
  (void)arc_sub32(c, ARC_W_R(c, 24), UINT64_C(10));
  /* 104348: b.ne #0x104368 */
  if (ARC_COND(c, 1)) goto L_104368;
L_10434c:;
  /* 10434c: cmp x8, w24, uxtw */
  (void)arc_sub64(c, ARC_X_R(c, 8), ((uint64_t)(uint32_t)(ARC_W_R(c, 24))));
  /* 104350: b.ge #0x1042fc */
  if (ARC_COND(c, 10)) goto L_1042fc;
  /* 104354: b #0x104368 */
  goto L_104368;
L_104358:;
  /* 104358: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 10435c: b #0x104390 */
  goto L_104390;
L_104360:;
  /* 104360: cmp x8, #0x16 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(22));
  /* 104364: b.ge #0x1043ac */
  if (ARC_COND(c, 10)) goto L_1043ac;
L_104368:;
  /* 104368: adrp x11, #0x151000 */
  ARC_X_W(c, 11, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 10436c: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 104370: ldr x11, [x11, #0xbe0] */
  ARC_X_W(c, 11, arc_ld64((ARC_X_R(c, 11) + INT64_C(3040))));
  /* 104374: ldrb w8, [x11, x8] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 11) + ARC_X_R(c, 8))));
  /* 104378: add x11, x20, #1 */
  ARC_X_W(c, 11, (ARC_X_R(c, 20) + UINT64_C(1)));
  /* 10437c: str x11, [x10] */
  arc_st64(ARC_X_R(c, 10), ARC_X_R(c, 11));
  /* 104380: strb w8, [x20] */
  arc_st8(ARC_X_R(c, 20), ARC_W_R(c, 8));
  /* 104384: ldr w8, [x9] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 9)));
  /* 104388: add w8, w8, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) + UINT64_C(1)));
  /* 10438c: str w8, [x9] */
  arc_st32(ARC_X_R(c, 9), ARC_W_R(c, 8));
L_104390:;
  /* 104390: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 104394: ldr x25, [sp, #0x10] */
  ARC_X_W(c, 25, arc_ld64(((c)->sp + INT64_C(16))));
  /* 104398: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 10439c: ldp x24, x23, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 1043a0: ldp x29, x30, [sp], #0x50 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(80);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1043a4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 1043a8: ret  */
  return;
L_1043ac:;
  /* 1043ac: subs x11, x20, x21 */
  ARC_X_W(c, 11, arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 21)));
  /* 1043b0: mov w0, #-1 */
  ARC_W_W(c, 0, UINT64_C(18446744073709551615));
  /* 1043b4: b.eq #0x104390 */
  if (ARC_COND(c, 0)) goto L_104390;
  /* 1043b8: cmp x11, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 11), UINT64_C(2));
  /* 1043bc: b.gt #0x104390 */
  if (ARC_COND(c, 12)) goto L_104390;
  /* 1043c0: ldurb w11, [x20, #-1] */
  ARC_W_W(c, 11, arc_ld8((ARC_X_R(c, 20) + INT64_C(-1))));
  /* 1043c4: cmp w11, #0x30 */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(48));
  /* 1043c8: b.ne #0x104390 */
  if (ARC_COND(c, 1)) goto L_104390;
  /* 1043cc: adrp x11, #0x151000 */
  ARC_X_W(c, 11, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 1043d0: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 1043d4: ldr x11, [x11, #0xbe0] */
  ARC_X_W(c, 11, arc_ld64((ARC_X_R(c, 11) + INT64_C(3040))));
  /* 1043d8: str wzr, [x9] */
  arc_st32(ARC_X_R(c, 9), ARC_W_R(c, 31));
  /* 1043dc: add x9, x20, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 20) + UINT64_C(1)));
  /* 1043e0: ldrb w8, [x11, x8] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 11) + ARC_X_R(c, 8))));
  /* 1043e4: str x9, [x10] */
  arc_st64(ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* 1043e8: strb w8, [x20] */
  arc_st8(ARC_X_R(c, 20), ARC_W_R(c, 8));
  /* 1043ec: b #0x104390 */
  goto L_104390;
}

void fn1_110aec(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039044844));
  /* 110aec: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 110af0: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 110af4: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 110af8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 110afc: mov x19, x4 */
  ARC_X_W(c, 19, ARC_X_R(c, 4));
  /* 110b00: mov x0, x2 */
  ARC_X_W(c, 0, ARC_X_R(c, 2));
  /* 110b04: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 110b08: mov x1, x3 */
  ARC_X_W(c, 1, ARC_X_R(c, 3));
  /* 110b0c: mov x2, x4 */
  ARC_X_W(c, 2, ARC_X_R(c, 4));
  /* 110b10: mov x3, x5 */
  ARC_X_W(c, 3, ARC_X_R(c, 5));
  /* 110b14: mov w4, #1 */
  ARC_W_W(c, 4, UINT64_C(1));
  /* 110b18: bl #0x110db0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1116956));
  fn1_110db0(c);
  /* 110b1c: ldr w8, [x19] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 19)));
  /* 110b20: cmp w0, #6 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(6));
  /* 110b24: b.gt #0x110b34 */
  if (ARC_COND(c, 12)) goto L_110b34;
  /* 110b28: tbnz w8, #2, #0x110b34 */
  if (((ARC_W_R(c, 8)) >> 2 & 1) != 0) goto L_110b34;
  /* 110b2c: str w0, [x20] */
  arc_st32(ARC_X_R(c, 20), ARC_W_R(c, 0));
  /* 110b30: b #0x110b3c */
  goto L_110b3c;
L_110b34:;
  /* 110b34: orr w8, w8, #4 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | UINT64_C(4)));
  /* 110b38: str w8, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 8));
L_110b3c:;
  /* 110b3c: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 110b40: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 110b44: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 110b48: ret  */
  return;
}

void fn1_113d70(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039057776));
  /* 113d70: bti c */
  /* bti: no architectural effect here */
  /* 113d74: stp xzr, xzr, [x8] */
  { const uint64_t _pa = ARC_X_R(c, 8);
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 113d78: str xzr, [x8, #0x10] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(16)), ARC_X_R(c, 31));
  /* 113d7c: ret  */
  return;
}

void fn1_11ad10(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039086352));
  /* 11ad10: bti c */
  /* bti: no architectural effect here */
  /* 11ad14: ldrb w9, [x4] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 4)));
  /* 11ad18: tbnz w9, #0, #0x11ad30 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) != 0) goto L_11ad30;
  /* 11ad1c: ldr q0, [x4] */
  arc_q_w(c, 0, arc_ld64(ARC_X_R(c, 4)), arc_ld64(ARC_X_R(c, 4) + 8));
  /* 11ad20: ldr x9, [x4, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 4) + INT64_C(16))));
  /* 11ad24: str q0, [x8] */
  arc_st64(ARC_X_R(c, 8), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 8) + 8, (c)->q[0].u64[1]);
  /* 11ad28: str x9, [x8, #0x10] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(16)), ARC_X_R(c, 9));
  /* 11ad2c: ret  */
  return;
L_11ad30:;
  /* 11ad30: ldp x2, x1, [x4, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 4) + INT64_C(8));
    ARC_X_W(c, 2, arc_ld64(_pa));
    ARC_X_W(c, 1, arc_ld64(_pa + 8));
  }
  /* 11ad34: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 11ad38: b #0xe22b8 */
  fn1_e22b8(c); return;
}

void fn1_12555c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039129436));
  /* 12555c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 125560: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 125564: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 125568: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 12556c: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 125570: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 125574: ldr x22, [x0] */
  ARC_X_W(c, 22, arc_ld64(ARC_X_R(c, 0)));
  /* 125578: ldar x8, [x1] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 1)));
  /* 12557c: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 125580: cmn x8, #1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0);
  /* 125584: b.eq #0x125640 */
  if (ARC_COND(c, 0)) goto L_125640;
  /* 125588: nop  */
  /* nop: no architectural effect here */
  /* 12558c: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 125590: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1201556));
  fn1_142518(c);
  /* 125594: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 125598: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 12559c: b.ne #0x1255c8 */
  if (ARC_COND(c, 1)) goto L_1255c8;
  /* 1255a0: nop  */
  /* nop: no architectural effect here */
  /* 1255a4: adr x20, #0x15791c */
  ARC_X_W(c, 20, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 1255a8: nop  */
  /* nop: no architectural effect here */
  /* 1255ac: adr x21, #0x1578f4 */
  ARC_X_W(c, 21, (arc_image_bases[1] + UINT64_C(1407220)));
L_1255b0:;
  /* 1255b0: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1255b4: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 1255b8: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1201596));
  fn1_142530(c);
  /* 1255bc: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 1255c0: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 1255c4: b.eq #0x1255b0 */
  if (ARC_COND(c, 0)) goto L_1255b0;
L_1255c8:;
  /* 1255c8: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 1255cc: cbz x8, #0x1255e0 */
  if ((ARC_X_R(c, 8)) == 0) goto L_1255e0;
  /* 1255d0: nop  */
  /* nop: no architectural effect here */
  /* 1255d4: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 1255d8: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1201628));
  fn1_142560(c);
  /* 1255dc: b #0x125640 */
  goto L_125640;
L_1255e0:;
  /* 1255e0: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 1255e4: str x19, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 19));
  /* 1255e8: strb wzr, [sp, #8] */
  arc_st8(((c)->sp + INT64_C(8)), ARC_W_R(c, 31));
  /* 1255ec: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* 1255f0: nop  */
  /* nop: no architectural effect here */
  /* 1255f4: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 1255f8: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1201660));
  fn1_142560(c);
  /* 1255fc: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 125600: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 125604: ldr x1, [x1, #0xc58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3160))));
  /* 125608: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1201676));
  fn1_a2030(c);
  /* 12560c: add w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + UINT64_C(1)));
  /* 125610: str w8, [x19, #8] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(8)), ARC_W_R(c, 8));
  /* 125614: nop  */
  /* nop: no architectural effect here */
  /* 125618: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 12561c: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1201696));
  fn1_142518(c);
  /* 125620: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 125624: stlr x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* 125628: nop  */
  /* nop: no architectural effect here */
  /* 12562c: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 125630: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1201716));
  fn1_142560(c);
  /* 125634: nop  */
  /* nop: no architectural effect here */
  /* 125638: adr x0, #0x15791c */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 12563c: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1201728));
  fn1_142578(c);
L_125640:;
  /* 125640: ldp x8, x10, [x22, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 22) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* 125644: ldrsw x9, [x19, #8] */
  ARC_X_W(c, 9, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 19) + INT64_C(8)))));
  /* 125648: sub x9, x9, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - UINT64_C(1)));
  /* 12564c: sub x10, x10, x8 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) - ARC_X_R(c, 8)));
  /* 125650: cmp x9, x10, asr #3 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ((uint64_t)((int64_t)(ARC_X_R(c, 10)) >> 3)));
  /* 125654: b.hs #0x125678 */
  if (ARC_COND(c, 2)) goto L_125678;
  /* 125658: ldr x0, [x8, x9, lsl #3] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3))));
  /* 12565c: cbz x0, #0x125678 */
  if ((ARC_X_R(c, 0)) == 0) goto L_125678;
  /* 125660: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 125664: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 125668: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 12566c: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 125670: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 125674: ret  */
  return;
L_125678:;
  /* 125678: bl #0xfc3b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1201788));
  fn1_fc3b8(c);
  /* 12567c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 125680: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 125684: bl #0xd2a78 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1201800));
  fn1_d2a78(c);
  /* 125688: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 12568c: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1201808));
  fn1_9cc20(c);
}

void fn1_127dd8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039139800));
  /* 127dd8: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 127ddc: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 127de0: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 127de4: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 127de8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 127dec: bl #0x143fa0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1211888));
  fn1_143fa0(c);
  /* 127df0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 127df4: mov w1, #0x10 */
  ARC_W_W(c, 1, UINT64_C(16));
  /* 127df8: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 127dfc: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 127e00: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 127e04: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_129e1c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039148060));
  /* 129e1c: bti c */
  /* bti: no architectural effect here */
  /* 129e20: sub x8, x3, x2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 3) - ARC_X_R(c, 2)));
  /* 129e24: cmp x8, #3 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(3));
  /* 129e28: b.lt #0x129e60 */
  if (ARC_COND(c, 11)) goto L_129e60;
  /* 129e2c: ldr w8, [x0, #0x18] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 0) + INT64_C(24))));
  /* 129e30: tbz w8, #2, #0x129e60 */
  if (((ARC_W_R(c, 8)) >> 2 & 1) == 0) goto L_129e60;
  /* 129e34: ldrb w8, [x2] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 2)));
  /* 129e38: cmp w8, #0xef */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(239));
  /* 129e3c: b.ne #0x129e60 */
  if (ARC_COND(c, 1)) goto L_129e60;
  /* 129e40: ldrb w8, [x2, #1] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 2) + INT64_C(1))));
  /* 129e44: cmp w8, #0xbb */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(187));
  /* 129e48: b.ne #0x129e60 */
  if (ARC_COND(c, 1)) goto L_129e60;
  /* 129e4c: ldrb w8, [x2, #2] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 2) + INT64_C(2))));
  /* 129e50: cmp w8, #0xbf */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(191));
  /* 129e54: mov w8, #3 */
  ARC_W_W(c, 8, UINT64_C(3));
  /* 129e58: csel x8, x8, xzr, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 31)));
  /* 129e5c: add x2, x2, x8 */
  ARC_X_W(c, 2, (ARC_X_R(c, 2) + ARC_X_R(c, 8)));
L_129e60:;
  /* 129e60: cmp x2, x3 */
  (void)arc_sub64(c, ARC_X_R(c, 2), ARC_X_R(c, 3));
  /* 129e64: b.hs #0x129f90 */
  if (ARC_COND(c, 2)) goto L_129f90;
  /* 129e68: cmp x5, x6 */
  (void)arc_sub64(c, ARC_X_R(c, 5), ARC_X_R(c, 6));
  /* 129e6c: b.hs #0x129f98 */
  if (ARC_COND(c, 2)) goto L_129f98;
  /* 129e70: ldr x9, [x0, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
L_129e74:;
  /* 129e74: ldrsb w11, [x2] */
  ARC_W_W(c, 11, ((int32_t)(int8_t)arc_ld8(ARC_X_R(c, 2))));
  /* 129e78: mov x8, x5 */
  ARC_X_W(c, 8, ARC_X_R(c, 5));
  /* 129e7c: and w10, w11, #0xff */
  ARC_W_W(c, 10, (ARC_W_R(c, 11) & UINT64_C(255)));
  /* 129e80: tbnz w11, #0x1f, #0x129e98 */
  if (((ARC_W_R(c, 11)) >> 31 & 1) != 0) goto L_129e98;
  /* 129e84: and x11, x11, #0xff */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) & UINT64_C(255)));
  /* 129e88: cmp x9, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 11));
  /* 129e8c: b.lo #0x129fa0 */
  if (ARC_COND(c, 3)) goto L_129fa0;
  /* 129e90: mov w11, #1 */
  ARC_W_W(c, 11, UINT64_C(1));
  /* 129e94: b #0x129f68 */
  goto L_129f68;
L_129e98:;
  /* 129e98: cmp w10, #0xc2 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(194));
  /* 129e9c: b.lo #0x129fa0 */
  if (ARC_COND(c, 3)) goto L_129fa0;
  /* 129ea0: cmp w10, #0xdf */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(223));
  /* 129ea4: b.hi #0x129ee0 */
  if (ARC_COND(c, 8)) goto L_129ee0;
  /* 129ea8: sub x11, x3, x2 */
  ARC_X_W(c, 11, (ARC_X_R(c, 3) - ARC_X_R(c, 2)));
  /* 129eac: cmp x11, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 11), UINT64_C(2));
  /* 129eb0: b.lt #0x129fa8 */
  if (ARC_COND(c, 11)) goto L_129fa8;
  /* 129eb4: ldrb w11, [x2, #1] */
  ARC_W_W(c, 11, arc_ld8((ARC_X_R(c, 2) + INT64_C(1))));
  /* 129eb8: and w12, w11, #0xc0 */
  ARC_W_W(c, 12, (ARC_W_R(c, 11) & UINT64_C(192)));
  /* 129ebc: cmp w12, #0x80 */
  (void)arc_sub32(c, ARC_W_R(c, 12), UINT64_C(128));
  /* 129ec0: b.ne #0x129fa0 */
  if (ARC_COND(c, 1)) goto L_129fa0;
  /* 129ec4: and w11, w11, #0x3f */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) & UINT64_C(63)));
  /* 129ec8: bfi w11, w10, #6, #5 */
  ARC_W_W(c, 11, (((uint32_t)(ARC_W_R(c, 11)) & UINT64_C(4294965311)) | ((((uint32_t)(ARC_W_R(c, 10))) & UINT64_C(31)) << 6)));
  /* 129ecc: cmp x9, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 11));
  /* 129ed0: b.lo #0x129fa0 */
  if (ARC_COND(c, 3)) goto L_129fa0;
  /* 129ed4: mov w10, w11 */
  ARC_W_W(c, 10, ARC_W_R(c, 11));
  /* 129ed8: mov w11, #2 */
  ARC_W_W(c, 11, UINT64_C(2));
  /* 129edc: b #0x129f68 */
  goto L_129f68;
L_129ee0:;
  /* 129ee0: cmp w10, #0xef */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(239));
  /* 129ee4: b.hi #0x129fa0 */
  if (ARC_COND(c, 8)) goto L_129fa0;
  /* 129ee8: sub x12, x3, x2 */
  ARC_X_W(c, 12, (ARC_X_R(c, 3) - ARC_X_R(c, 2)));
  /* 129eec: cmp x12, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 12), UINT64_C(2));
  /* 129ef0: b.lt #0x129fa8 */
  if (ARC_COND(c, 11)) goto L_129fa8;
  /* 129ef4: ldrb w11, [x2, #1] */
  ARC_W_W(c, 11, arc_ld8((ARC_X_R(c, 2) + INT64_C(1))));
  /* 129ef8: cmp w10, #0xed */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(237));
  /* 129efc: b.eq #0x129f18 */
  if (ARC_COND(c, 0)) goto L_129f18;
  /* 129f00: cmp w10, #0xe0 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(224));
  /* 129f04: b.ne #0x129f28 */
  if (ARC_COND(c, 1)) goto L_129f28;
  /* 129f08: and w13, w11, #0xe0 */
  ARC_W_W(c, 13, (ARC_W_R(c, 11) & UINT64_C(224)));
  /* 129f0c: cmp w13, #0xa0 */
  (void)arc_sub32(c, ARC_W_R(c, 13), UINT64_C(160));
  /* 129f10: b.eq #0x129f34 */
  if (ARC_COND(c, 0)) goto L_129f34;
  /* 129f14: b #0x129fa0 */
  goto L_129fa0;
L_129f18:;
  /* 129f18: sxtb w13, w11 */
  ARC_W_W(c, 13, ((int32_t)(int8_t)(ARC_W_R(c, 11))));
  /* 129f1c: cmn w13, #0x60 */
  (void)arc_add32(c, ARC_W_R(c, 13), UINT64_C(96), 0);
  /* 129f20: b.lt #0x129f34 */
  if (ARC_COND(c, 11)) goto L_129f34;
  /* 129f24: b #0x129fa0 */
  goto L_129fa0;
L_129f28:;
  /* 129f28: sxtb w13, w11 */
  ARC_W_W(c, 13, ((int32_t)(int8_t)(ARC_W_R(c, 11))));
  /* 129f2c: cmn w13, #0x41 */
  (void)arc_add32(c, ARC_W_R(c, 13), UINT64_C(65), 0);
  /* 129f30: b.gt #0x129fa0 */
  if (ARC_COND(c, 12)) goto L_129fa0;
L_129f34:;
  /* 129f34: cmp x12, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 12), UINT64_C(2));
  /* 129f38: b.eq #0x129fa8 */
  if (ARC_COND(c, 0)) goto L_129fa8;
  /* 129f3c: ldrb w12, [x2, #2] */
  ARC_W_W(c, 12, arc_ld8((ARC_X_R(c, 2) + INT64_C(2))));
  /* 129f40: and w13, w12, #0xc0 */
  ARC_W_W(c, 13, (ARC_W_R(c, 12) & UINT64_C(192)));
  /* 129f44: cmp w13, #0x80 */
  (void)arc_sub32(c, ARC_W_R(c, 13), UINT64_C(128));
  /* 129f48: b.ne #0x129fa0 */
  if (ARC_COND(c, 1)) goto L_129fa0;
  /* 129f4c: lsl w10, w10, #0xc */
  ARC_W_W(c, 10, ((uint32_t)(ARC_W_R(c, 10)) << ((UINT64_C(12)) & 31)));
  /* 129f50: bfi w10, w11, #6, #6 */
  ARC_W_W(c, 10, (((uint32_t)(ARC_W_R(c, 10)) & UINT64_C(4294963263)) | ((((uint32_t)(ARC_W_R(c, 11))) & UINT64_C(63)) << 6)));
  /* 129f54: bfxil w10, w12, #0, #6 */
  ARC_W_W(c, 10, (((uint32_t)(ARC_W_R(c, 10)) & UINT64_C(4294967232)) | ((((uint32_t)(ARC_W_R(c, 12))) >> 0) & UINT64_C(63))));
  /* 129f58: and w11, w10, #0xffff */
  ARC_W_W(c, 11, (ARC_W_R(c, 10) & UINT64_C(65535)));
  /* 129f5c: cmp x9, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 11));
  /* 129f60: b.lo #0x129fa0 */
  if (ARC_COND(c, 3)) goto L_129fa0;
  /* 129f64: mov w11, #3 */
  ARC_W_W(c, 11, UINT64_C(3));
L_129f68:;
  /* 129f68: add x2, x2, x11 */
  ARC_X_W(c, 2, (ARC_X_R(c, 2) + ARC_X_R(c, 11)));
  /* 129f6c: mov x5, x8 */
  ARC_X_W(c, 5, ARC_X_R(c, 8));
  /* 129f70: cmp x2, x3 */
  (void)arc_sub64(c, ARC_X_R(c, 2), ARC_X_R(c, 3));
  /* 129f74: strh w10, [x5], #2 */
  { const uint64_t _a = ARC_X_R(c, 5);
    ARC_X_W(c, 5, ARC_X_R(c, 5) + INT64_C(2));
    arc_st16(_a, ARC_W_R(c, 10));
  }
  /* 129f78: b.hs #0x129f90 */
  if (ARC_COND(c, 2)) goto L_129f90;
  /* 129f7c: cmp x5, x6 */
  (void)arc_sub64(c, ARC_X_R(c, 5), ARC_X_R(c, 6));
  /* 129f80: b.lo #0x129e74 */
  if (ARC_COND(c, 3)) goto L_129e74;
  /* 129f84: add x5, x8, #2 */
  ARC_X_W(c, 5, (ARC_X_R(c, 8) + UINT64_C(2)));
  /* 129f88: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 129f8c: b #0x129fb0 */
  goto L_129fb0;
L_129f90:;
  /* 129f90: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 129f94: b #0x129fb0 */
  goto L_129fb0;
L_129f98:;
  /* 129f98: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 129f9c: b #0x129fb0 */
  goto L_129fb0;
L_129fa0:;
  /* 129fa0: mov w0, #2 */
  ARC_W_W(c, 0, UINT64_C(2));
  /* 129fa4: b #0x129fac */
  goto L_129fac;
L_129fa8:;
  /* 129fa8: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
L_129fac:;
  /* 129fac: mov x5, x8 */
  ARC_X_W(c, 5, ARC_X_R(c, 8));
L_129fb0:;
  /* 129fb0: str x2, [x4] */
  arc_st64(ARC_X_R(c, 4), ARC_X_R(c, 2));
  /* 129fb4: str x5, [x7] */
  arc_st64(ARC_X_R(c, 7), ARC_X_R(c, 5));
  /* 129fb8: ret  */
  return;
}

void fn1_12b8a4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039154852));
  /* 12b8a4: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 12b8a8: sub sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(48)));
  /* 12b8ac: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 12b8b0: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 12b8b4: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 12b8b8: mov x19, x7 */
  ARC_X_W(c, 19, ARC_X_R(c, 7));
  /* 12b8bc: mov x9, x6 */
  ARC_X_W(c, 9, ARC_X_R(c, 6));
  /* 12b8c0: mov x8, x5 */
  ARC_X_W(c, 8, ARC_X_R(c, 5));
  /* 12b8c4: ldr x6, [x0, #0x10] */
  ARC_X_W(c, 6, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 12b8c8: ldr w7, [x0, #0x18] */
  ARC_W_W(c, 7, arc_ld32((ARC_X_R(c, 0) + INT64_C(24))));
  /* 12b8cc: mov x20, x4 */
  ARC_X_W(c, 20, ARC_X_R(c, 4));
  /* 12b8d0: mov x1, x3 */
  ARC_X_W(c, 1, ARC_X_R(c, 3));
  /* 12b8d4: mov x0, x2 */
  ARC_X_W(c, 0, ARC_X_R(c, 2));
  /* 12b8d8: add x2, sp, #8 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(8)));
  /* 12b8dc: mov x5, sp */
  ARC_X_W(c, 5, (c)->sp);
  /* 12b8e0: mov x3, x8 */
  ARC_X_W(c, 3, ARC_X_R(c, 8));
  /* 12b8e4: mov x4, x9 */
  ARC_X_W(c, 4, ARC_X_R(c, 9));
  /* 12b8e8: bl #0x128950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1226988));
  fn1_128950(c);
  /* 12b8ec: ldp x9, x8, [sp] */
  { const uint64_t _pa = (c)->sp;
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* 12b8f0: str x8, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 8));
  /* 12b8f4: str x9, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 9));
  /* 12b8f8: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 12b8fc: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 12b900: add sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(48)));
  /* 12b904: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 12b908: ret  */
  return;
}

void fn1_12e1ac(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039165356));
  /* 12e1ac: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 12e1b0: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 12e1b4: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 12e1b8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 12e1bc: nop  */
  /* nop: no architectural effect here */
  /* 12e1c0: adr x8, #0x15df10 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1433360)));
  /* 12e1c4: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 12e1c8: tbz w8, #0, #0x12e1e4 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_12e1e4;
L_12e1cc:;
  /* 12e1cc: nop  */
  /* nop: no architectural effect here */
  /* 12e1d0: adr x0, #0x15def8 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1433336)));
  /* 12e1d4: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 12e1d8: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 12e1dc: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 12e1e0: ret  */
  return;
L_12e1e4:;
  /* 12e1e4: nop  */
  /* nop: no architectural effect here */
  /* 12e1e8: adr x0, #0x15df10 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1433360)));
  /* 12e1ec: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1237488));
  fn1_1424b8(c);
  /* 12e1f0: cbz w0, #0x12e1cc */
  if ((ARC_W_R(c, 0)) == 0) goto L_12e1cc;
  /* 12e1f4: nop  */
  /* nop: no architectural effect here */
  /* 12e1f8: adr x0, #0x15def8 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1433336)));
  /* 12e1fc: adrp x1, #0x75000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(479232)));
  /* 12e200: add x1, x1, #0xf8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(248)));
  /* 12e204: bl #0x12bdc4 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1237512));
  fn1_12bdc4(c);
  /* 12e208: adrp x0, #0x151000 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 12e20c: nop  */
  /* nop: no architectural effect here */
  /* 12e210: adr x1, #0x15def8 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1433336)));
  /* 12e214: ldr x0, [x0, #0xa48] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(2632))));
  /* 12e218: nop  */
  /* nop: no architectural effect here */
  /* 12e21c: adr x2, #0x148af8 */
  ARC_X_W(c, 2, (arc_image_bases[1] + UINT64_C(1346296)));
  /* 12e220: bl #0x1423f8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1237540));
  fn1_1423f8(c);
  /* 12e224: nop  */
  /* nop: no architectural effect here */
  /* 12e228: adr x0, #0x15df10 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1433360)));
  /* 12e22c: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1237552));
  fn1_1424d0(c);
  /* 12e230: b #0x12e1cc */
  goto L_12e1cc;
  /* 12e234: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 12e238: nop  */
  /* nop: no architectural effect here */
  /* 12e23c: adr x0, #0x15df10 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1433360)));
  /* 12e240: bl #0x1424e8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1237572));
  fn1_1424e8(c);
  /* 12e244: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 12e248: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1237580));
  fn1_9cc20(c);
}

void fn1_134ab4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039192244));
  /* 134ab4: bti c */
  /* bti: no architectural effect here */
  /* 134ab8: add x0, x0, #0x3e8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1000)));
  /* 134abc: ret  */
  return;
}

void fn1_135ac4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039196356));
  /* 135ac4: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 135ac8: stp x29, x30, [sp, #-0x50]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-80));
    (c)->sp = (c)->sp + INT64_C(-80);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 135acc: str x25, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 25));
  /* 135ad0: stp x24, x23, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 135ad4: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 135ad8: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 135adc: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 135ae0: cmp x0, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 1));
  /* 135ae4: mov x19, x2 */
  ARC_X_W(c, 19, ARC_X_R(c, 2));
  /* 135ae8: b.eq #0x135b74 */
  if (ARC_COND(c, 0)) goto L_135b74;
  /* 135aec: mov w22, w3 */
  ARC_W_W(c, 22, ARC_W_R(c, 3));
  /* 135af0: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 135af4: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* 135af8: bl #0x142a58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1268476));
  fn1_142a58(c);
  /* 135afc: ldr w24, [x0] */
  ARC_W_W(c, 24, arc_ld32(ARC_X_R(c, 0)));
  /* 135b00: str wzr, [x0] */
  arc_st32(ARC_X_R(c, 0), ARC_W_R(c, 31));
  /* 135b04: nop  */
  /* nop: no architectural effect here */
  /* 135b08: adr x8, #0x15dc38 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 135b0c: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 135b10: adrp x25, #0x15d000 */
  ARC_X_W(c, 25, (arc_image_bases[1] + UINT64_C(1429504)));
  /* 135b14: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 135b18: tbz w8, #0, #0x135b9c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_135b9c;
L_135b1c:;
  /* 135b1c: ldr x3, [x25, #0xc30] */
  ARC_X_W(c, 3, arc_ld64((ARC_X_R(c, 25) + INT64_C(3120))));
  /* 135b20: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 135b24: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 135b28: mov w2, w22 */
  ARC_W_W(c, 2, ARC_W_R(c, 22));
  /* 135b2c: bl #0x1444e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1268528));
  fn1_1444e0(c);
  /* 135b30: ldr w8, [x21] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 21)));
  /* 135b34: cbz w8, #0x135b64 */
  if ((ARC_W_R(c, 8)) == 0) goto L_135b64;
  /* 135b38: ldr x9, [x29, #0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 29) + INT64_C(24))));
  /* 135b3c: cmp x9, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 20));
  /* 135b40: b.ne #0x135b74 */
  if (ARC_COND(c, 1)) goto L_135b74;
  /* 135b44: cmp w8, #0x22 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(34));
  /* 135b48: b.ne #0x135b80 */
  if (ARC_COND(c, 1)) goto L_135b80;
  /* 135b4c: mov w8, #4 */
  ARC_W_W(c, 8, UINT64_C(4));
  /* 135b50: cmp x0, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 0), UINT64_C(0));
  /* 135b54: mov x9, #0x7fffffffffffffff */
  ARC_X_W(c, 9, UINT64_C(9223372036854775807));
  /* 135b58: str w8, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 8));
  /* 135b5c: cinv x0, x9, le */
  ARC_X_W(c, 0, (ARC_COND(c, 13) ? (~(uint64_t)(ARC_X_R(c, 9))) : (ARC_X_R(c, 9))));
  /* 135b60: b #0x135b80 */
  goto L_135b80;
L_135b64:;
  /* 135b64: ldr x8, [x29, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(24))));
  /* 135b68: str w24, [x21] */
  arc_st32(ARC_X_R(c, 21), ARC_W_R(c, 24));
  /* 135b6c: cmp x8, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 20));
  /* 135b70: b.eq #0x135b80 */
  if (ARC_COND(c, 0)) goto L_135b80;
L_135b74:;
  /* 135b74: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
  /* 135b78: mov w8, #4 */
  ARC_W_W(c, 8, UINT64_C(4));
  /* 135b7c: str w8, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 8));
L_135b80:;
  /* 135b80: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 135b84: ldr x25, [sp, #0x10] */
  ARC_X_W(c, 25, arc_ld64(((c)->sp + INT64_C(16))));
  /* 135b88: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 135b8c: ldp x24, x23, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 135b90: ldp x29, x30, [sp], #0x50 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(80);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 135b94: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 135b98: ret  */
  return;
L_135b9c:;
  /* 135b9c: nop  */
  /* nop: no architectural effect here */
  /* 135ba0: adr x0, #0x15dc38 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 135ba4: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1268648));
  fn1_1424b8(c);
  /* 135ba8: cbz w0, #0x135b1c */
  if ((ARC_W_R(c, 0)) == 0) goto L_135b1c;
  /* 135bac: adrp x1, #0x51000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(331776)));
  /* 135bb0: add x1, x1, #0x6e4 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1764)));
  /* 135bb4: mov w0, #0x1fbf */
  ARC_W_W(c, 0, UINT64_C(8127));
  /* 135bb8: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 135bbc: bl #0x1441e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1268672));
  fn1_1441e0(c);
  /* 135bc0: str x0, [x25, #0xc30] */
  arc_st64((ARC_X_R(c, 25) + INT64_C(3120)), ARC_X_R(c, 0));
  /* 135bc4: nop  */
  /* nop: no architectural effect here */
  /* 135bc8: adr x0, #0x15dc38 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 135bcc: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1268688));
  fn1_1424d0(c);
  /* 135bd0: b #0x135b1c */
  goto L_135b1c;
  /* 135bd4: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 135bd8: nop  */
  /* nop: no architectural effect here */
  /* 135bdc: adr x0, #0x15dc38 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 135be0: bl #0x1424e8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1268708));
  fn1_1424e8(c);
  /* 135be4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 135be8: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1268716));
  fn1_9cc20(c);
}

void fn1_138db4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039209396));
  /* 138db4: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 138db8: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 138dbc: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 138dc0: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 138dc4: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 138dc8: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 138dcc: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* 138dd0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 138dd4: str xzr, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 31));
  /* 138dd8: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 138ddc: mov w1, #0x10 */
  ARC_W_W(c, 1, UINT64_C(16));
  /* 138de0: mov w2, #0xb0 */
  ARC_W_W(c, 2, UINT64_C(176));
  /* 138de4: bl #0x142818 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1281512));
  fn1_142818(c);
  /* 138de8: ldr x20, [sp, #8] */
  ARC_X_W(c, 20, arc_ld64(((c)->sp + INT64_C(8))));
  /* 138dec: cbnz x20, #0x138e04 */
  if ((ARC_X_R(c, 20)) != 0) goto L_138e04;
  /* 138df0: mov w0, #0xb0 */
  ARC_W_W(c, 0, UINT64_C(176));
  /* 138df4: bl #0xa24dc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1281528));
  fn1_a24dc(c);
  /* 138df8: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 138dfc: cbnz x0, #0x138e04 */
  if ((ARC_X_R(c, 0)) != 0) goto L_138e04;
  /* 138e00: bl #0x142488 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1281540));
  fn1_142488(c);
L_138e04:;
  /* 138e04: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* 138e08: mov x22, x20 */
  ARC_X_W(c, 22, ARC_X_R(c, 20));
  /* 138e0c: stp q0, q0, [x20] */
  { const uint64_t _pa = ARC_X_R(c, 20);
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* 138e10: stp q0, q0, [x20, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(32));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* 138e14: stp q0, q0, [x20, #0x40] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(64));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* 138e18: stp q0, q0, [x20, #0x60] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(96));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* 138e1c: stp q0, q0, [x20, #0x90] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(144));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* 138e20: str q0, [x22, #0x80]! */
  arc_st64((ARC_X_R(c, 22) + INT64_C(128)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 22) + INT64_C(128)) + 8, (c)->q[0].u64[1]);
  ARC_X_W(c, 22, ARC_X_R(c, 22) + INT64_C(128));
  /* 138e24: ldp x2, x3, [x21] */
  { const uint64_t _pa = ARC_X_R(c, 21);
    ARC_X_W(c, 2, arc_ld64(_pa));
    ARC_X_W(c, 3, arc_ld64(_pa + 8));
  }
  /* 138e28: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 138e2c: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 138e30: bl #0x13907c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1281588));
  fn1_13907c(c);
  /* 138e34: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 138e38: adrp x2, #0x151000 */
  ARC_X_W(c, 2, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 138e3c: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 138e40: ldr x1, [x1, #0xa08] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(2568))));
  /* 138e44: ldr x2, [x2, #0xa10] */
  ARC_X_W(c, 2, arc_ld64((ARC_X_R(c, 2) + INT64_C(2576))));
  /* 138e48: bl #0x142440 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1281612));
  fn1_142440(c);
  /* 138e4c: nop  */
  /* nop: no architectural effect here */
  /* 138e50: adr x8, #0x1576e0 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1406688)));
  /* 138e54: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 138e58: cmp x20, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 8));
  /* 138e5c: b.lo #0x138e80 */
  if (ARC_COND(c, 3)) goto L_138e80;
  /* 138e60: adrp x8, #0x157000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1404928)));
  /* 138e64: add x8, x8, #0x8e0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2272)));
  /* 138e68: cmp x20, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 8));
  /* 138e6c: b.hs #0x138e80 */
  if (ARC_COND(c, 2)) goto L_138e80;
  /* 138e70: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 138e74: bl #0xa2664 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1281656));
  fn1_a2664(c);
  /* 138e78: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 138e7c: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1281664));
  fn1_9cc20(c);
L_138e80:;
  /* 138e80: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 138e84: bl #0x142800 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1281672));
  fn1_142800(c);
  /* 138e88: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 138e8c: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1281680));
  fn1_9cc20(c);
  /* 138e90: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1281684));
  fn1_a1454(c);
  /* 138e94: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1281688));
  fn1_a1454(c);
}

void fn1_13e410(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039231504));
  /* 13e410: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 13e414: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 13e418: str x28, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 28));
  /* 13e41c: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 13e420: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 13e424: sub sp, sp, #1, lsl #12 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(4096)));
  /* 13e428: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 13e42c: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* 13e430: sub x20, x29, #0x30 */
  ARC_X_W(c, 20, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 13e434: adrp x8, #0x51000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(331776)));
  /* 13e438: add x8, x8, #0x1fd */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(509)));
  /* 13e43c: stp x0, xzr, [x20, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 0));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 13e440: stp x8, x1, [x20] */
  { const uint64_t _pa = ARC_X_R(c, 20);
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 1));
  }
  /* 13e444: cbz x1, #0x13e468 */
  if ((ARC_X_R(c, 1)) == 0) goto L_13e468;
  /* 13e448: str wzr, [x1] */
  arc_st32(ARC_X_R(c, 1), ARC_W_R(c, 31));
  /* 13e44c: nop  */
  /* nop: no architectural effect here */
  /* 13e450: adr x8, #0x159210 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 13e454: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 13e458: tbz w8, #0, #0x13e528 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13e528;
L_13e45c:;
  /* 13e45c: nop  */
  /* nop: no architectural effect here */
  /* 13e460: adr x8, #0x156d40 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1404224)));
  /* 13e464: str x8, [x1, #8] */
  arc_st64((ARC_X_R(c, 1) + INT64_C(8)), ARC_X_R(c, 8));
L_13e468:;
  /* 13e468: ldrb w8, [x0] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 0)));
  /* 13e46c: ldr x9, [x0, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 13e470: add x1, sp, #0xf */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(15)));
  /* 13e474: mov w2, #0x1001 */
  ARC_W_W(c, 2, UINT64_C(4097));
  /* 13e478: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 13e47c: csinc x0, x9, x0, ne */
  ARC_X_W(c, 0, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 0)) + 1)));
  /* 13e480: bl #0x144828 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1303684));
  fn1_144828(c);
  /* 13e484: cmn x0, #1 */
  (void)arc_add64(c, ARC_X_R(c, 0), UINT64_C(1), 0);
  /* 13e488: b.eq #0x13e4ac */
  if (ARC_COND(c, 0)) goto L_13e4ac;
  /* 13e48c: cmp x0, #1, lsl #12 */
  (void)arc_sub64(c, ARC_X_R(c, 0), UINT64_C(4096));
  /* 13e490: b.ls #0x13e4e4 */
  if (ARC_COND(c, 9)) goto L_13e4e4;
  /* 13e494: nop  */
  /* nop: no architectural effect here */
  /* 13e498: adr x8, #0x159208 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 13e49c: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 13e4a0: tbz w8, #0, #0x13e594 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13e594;
L_13e4a4:;
  /* 13e4a4: mov w8, #0x4b */
  ARC_W_W(c, 8, UINT64_C(75));
  /* 13e4a8: b #0x13e4c4 */
  goto L_13e4c4;
L_13e4ac:;
  /* 13e4ac: bl #0x142a58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1303728));
  fn1_142a58(c);
  /* 13e4b0: nop  */
  /* nop: no architectural effect here */
  /* 13e4b4: adr x9, #0x159208 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 13e4b8: ldr w8, [x0] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 0)));
  /* 13e4bc: ldarb w9, [x9] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 9)));
  /* 13e4c0: tbz w9, #0, #0x13e568 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_13e568;
L_13e4c4:;
  /* 13e4c4: nop  */
  /* nop: no architectural effect here */
  /* 13e4c8: adr x9, #0x156d38 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1404216)));
  /* 13e4cc: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 13e4d0: stp x8, x9, [x20, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 13e4d4: sub x1, x29, #0x10 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* 13e4d8: mov x8, x19 */
  ARC_X_W(c, 8, ARC_X_R(c, 19));
  /* 13e4dc: bl #0x13c27c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1303776));
  fn1_13c27c(c);
  /* 13e4e0: b #0x13e50c */
  goto L_13e50c;
L_13e4e4:;
  /* 13e4e4: add x8, sp, #0xf */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(15)));
  /* 13e4e8: stp xzr, xzr, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 13e4ec: sub x2, x8, #1 */
  ARC_X_W(c, 2, (ARC_X_R(c, 8) - UINT64_C(1)));
  /* 13e4f0: strb wzr, [x8, x0] */
  arc_st8((ARC_X_R(c, 8) + ARC_X_R(c, 0)), ARC_W_R(c, 31));
  /* 13e4f4: str xzr, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 31));
L_13e4f8:;
  /* 13e4f8: ldrb w8, [x2, #1]! */
  { const uint64_t _a = (ARC_X_R(c, 2) + INT64_C(1));
    ARC_X_W(c, 2, ARC_X_R(c, 2) + INT64_C(1));
    ARC_W_W(c, 8, arc_ld8(_a));
  }
  /* 13e4fc: cbnz w8, #0x13e4f8 */
  if ((ARC_W_R(c, 8)) != 0) goto L_13e4f8;
  /* 13e500: add x1, sp, #0xf */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(15)));
  /* 13e504: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 13e508: bl #0xda784 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1303820));
  fn1_da784(c);
L_13e50c:;
  /* 13e50c: add sp, sp, #1, lsl #12 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(4096)));
  /* 13e510: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 13e514: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 13e518: ldr x28, [sp, #0x10] */
  ARC_X_W(c, 28, arc_ld64(((c)->sp + INT64_C(16))));
  /* 13e51c: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 13e520: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 13e524: ret  */
  return;
L_13e528:;
  /* 13e528: nop  */
  /* nop: no architectural effect here */
  /* 13e52c: adr x8, #0x159210 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 13e530: str x0, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 0));
  /* 13e534: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 13e538: str x1, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 1));
  /* 13e53c: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1303872));
  fn1_1424b8(c);
  /* 13e540: ldr x1, [sp] */
  ARC_X_W(c, 1, arc_ld64((c)->sp));
  /* 13e544: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 13e548: ldr x0, [x29, #0x18] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(24))));
  /* 13e54c: cbz w8, #0x13e45c */
  if ((ARC_W_R(c, 8)) == 0) goto L_13e45c;
  /* 13e550: nop  */
  /* nop: no architectural effect here */
  /* 13e554: adr x0, #0x159210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 13e558: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1303900));
  fn1_1424d0(c);
  /* 13e55c: ldr x1, [sp] */
  ARC_X_W(c, 1, arc_ld64((c)->sp));
  /* 13e560: ldr x0, [x29, #0x18] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(24))));
  /* 13e564: b #0x13e45c */
  goto L_13e45c;
L_13e568:;
  /* 13e568: nop  */
  /* nop: no architectural effect here */
  /* 13e56c: adr x0, #0x159208 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 13e570: str x8, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 8));
  /* 13e574: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1303928));
  fn1_1424b8(c);
  /* 13e578: ldr x8, [x29, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(24))));
  /* 13e57c: cbz w0, #0x13e4c4 */
  if ((ARC_W_R(c, 0)) == 0) goto L_13e4c4;
  /* 13e580: nop  */
  /* nop: no architectural effect here */
  /* 13e584: adr x0, #0x159208 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 13e588: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1303948));
  fn1_1424d0(c);
  /* 13e58c: ldr x8, [x29, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(24))));
  /* 13e590: b #0x13e4c4 */
  goto L_13e4c4;
L_13e594:;
  /* 13e594: nop  */
  /* nop: no architectural effect here */
  /* 13e598: adr x0, #0x159208 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 13e59c: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1303968));
  fn1_1424b8(c);
  /* 13e5a0: cbz w0, #0x13e4a4 */
  if ((ARC_W_R(c, 0)) == 0) goto L_13e4a4;
  /* 13e5a4: nop  */
  /* nop: no architectural effect here */
  /* 13e5a8: adr x0, #0x159208 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 13e5ac: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1303984));
  fn1_1424d0(c);
  /* 13e5b0: b #0x13e4a4 */
  goto L_13e4a4;
  /* 13e5b4: ldrb w8, [x19] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 19)));
  /* 13e5b8: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 13e5bc: tbz w8, #0, #0x13e5d0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13e5d0;
  /* 13e5c0: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 13e5c4: ldr x0, [x19, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* 13e5c8: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 13e5cc: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1304016));
  fn1_142608(c);
L_13e5d0:;
  /* 13e5d0: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 13e5d4: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1304024));
  fn1_9cc20(c);
}

void fn1_142680(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039248512));
  /* 142680: adrp x16, #0x151000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 142684: ldr x17, [x16, #0xf60] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(3936))));
  /* 142688: add x16, x16, #0xf60 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(3936)));
  /* 14268c: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 142690: nop  */
  /* nop: no architectural effect here */
  /* 142694: nop  */
  /* nop: no architectural effect here */
}

void fn1_142c80(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039250048));
  /* 142c80: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 142c84: ldr x17, [x16, #0x160] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(352))));
  /* 142c88: add x16, x16, #0x160 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(352)));
  /* 142c8c: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 142c90: nop  */
  /* nop: no architectural effect here */
  /* 142c94: nop  */
  /* nop: no architectural effect here */
}

void fn1_143280(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039251584));
  /* 143280: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 143284: ldr x17, [x16, #0x360] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(864))));
  /* 143288: add x16, x16, #0x360 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(864)));
  /* 14328c: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 143290: nop  */
  /* nop: no architectural effect here */
  /* 143294: nop  */
  /* nop: no architectural effect here */
}

void fn1_143880(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039253120));
  /* 143880: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 143884: ldr x17, [x16, #0x560] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(1376))));
  /* 143888: add x16, x16, #0x560 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(1376)));
  /* 14388c: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 143890: nop  */
  /* nop: no architectural effect here */
  /* 143894: nop  */
  /* nop: no architectural effect here */
}

void fn1_143e80(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039254656));
  /* 143e80: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 143e84: ldr x17, [x16, #0x760] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(1888))));
  /* 143e88: add x16, x16, #0x760 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(1888)));
  /* 143e8c: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 143e90: nop  */
  /* nop: no architectural effect here */
  /* 143e94: nop  */
  /* nop: no architectural effect here */
}

void fn1_144480(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039256192));
  /* 144480: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 144484: ldr x17, [x16, #0x960] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(2400))));
  /* 144488: add x16, x16, #0x960 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(2400)));
  /* 14448c: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 144490: nop  */
  /* nop: no architectural effect here */
  /* 144494: nop  */
  /* nop: no architectural effect here */
}

void fn1_144a80(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039257728));
  /* 144a80: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 144a84: ldr x17, [x16, #0xb60] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(2912))));
  /* 144a88: add x16, x16, #0xb60 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(2912)));
  /* 144a8c: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 144a90: nop  */
  /* nop: no architectural effect here */
  /* 144a94: nop  */
  /* nop: no architectural effect here */
}

