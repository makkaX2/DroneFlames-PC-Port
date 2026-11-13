#include "lifted.h"
#include "df_lse.h"

void fn2_9a010(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076486672));
  /* 9a010: bti c */
  /* bti: no architectural effect here */
  /* 9a014: adrp x0, #0x24f000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2420736)));
  /* 9a018: add x0, x0, #0x980 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2432)));
  /* 9a01c: b #0x24b6e0 */
  fn2_24b6e0(c); return;
}

void fn2_9c7e0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076496864));
  /* 9c7e0: sub sp, sp, #0x80 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(128)));
  /* 9c7e4: stp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 9c7e8: str x23, [sp, #0x50] */
  arc_st64(((c)->sp + INT64_C(80)), ARC_X_R(c, 23));
  /* 9c7ec: stp x22, x21, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 9c7f0: stp x20, x19, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 9c7f4: add x29, sp, #0x40 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(64)));
  /* 9c7f8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 9c7fc: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 9c800: mov x21, x3 */
  ARC_X_W(c, 21, ARC_X_R(c, 3));
  /* 9c804: mov x22, x2 */
  ARC_X_W(c, 22, ARC_X_R(c, 2));
  /* 9c808: mov x23, x1 */
  ARC_X_W(c, 23, ARC_X_R(c, 1));
  /* 9c80c: mov x20, x8 */
  ARC_X_W(c, 20, ARC_X_R(c, 8));
  /* 9c810: bl #0x1d9740 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(641044));
  fn2_1d9740(c);
  /* 9c814: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 9c818: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* 9c81c: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(641056));
  fn2_1bc2f8(c);
  /* 9c820: adrp x1, #0x29000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(167936)));
  /* 9c824: add x1, x1, #0xdb0 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3504)));
  /* 9c828: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 9c82c: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(641072));
  fn2_1b7d24(c);
  /* 9c830: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 9c834: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 9c838: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(641084));
  fn2_1bc2f8(c);
  /* 9c83c: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 9c840: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(641092));
  fn2_1ccd9c(c);
  /* 9c844: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 9c848: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 9c84c: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(641104));
  fn2_1bbfa0(c);
  /* 9c850: add x1, sp, #0x20 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(32)));
  /* 9c854: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(641112));
  fn2_1bcf04(c);
  /* 9c858: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 9c85c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(641120));
  fn2_1bc620(c);
  /* 9c860: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 9c864: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(641128));
  fn2_1bc620(c);
  /* 9c868: mov x8, sp */
  ARC_X_W(c, 8, (c)->sp);
  /* 9c86c: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 9c870: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* 9c874: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* 9c878: bl #0x1cde7c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(641148));
  fn2_1cde7c(c);
  /* 9c87c: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 9c880: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 9c884: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(641160));
  fn2_1bc2f8(c);
  /* 9c888: adrp x1, #0x2c000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(180224)));
  /* 9c88c: add x1, x1, #0x137 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(311)));
  /* 9c890: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 9c894: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(641176));
  fn2_1b7d24(c);
  /* 9c898: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 9c89c: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 9c8a0: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(641188));
  fn2_1bc2f8(c);
  /* 9c8a4: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 9c8a8: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(641196));
  fn2_1ccd9c(c);
  /* 9c8ac: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 9c8b0: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 9c8b4: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(641208));
  fn2_1bbfa0(c);
  /* 9c8b8: add x1, sp, #0x20 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(32)));
  /* 9c8bc: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(641216));
  fn2_1bcf04(c);
  /* 9c8c0: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 9c8c4: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(641224));
  fn2_1bc620(c);
  /* 9c8c8: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 9c8cc: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(641232));
  fn2_1bc620(c);
  /* 9c8d0: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 9c8d4: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(641240));
  fn2_1ccd9c(c);
  /* 9c8d8: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 9c8dc: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 9c8e0: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(641252));
  fn2_1bc2f8(c);
  /* 9c8e4: adrp x1, #0x2e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(188416)));
  /* 9c8e8: add x1, x1, #0xb9a */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2970)));
  /* 9c8ec: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 9c8f0: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(641268));
  fn2_1b7d24(c);
  /* 9c8f4: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 9c8f8: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 9c8fc: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(641280));
  fn2_1bc2f8(c);
  /* 9c900: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 9c904: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(641288));
  fn2_1ccd9c(c);
  /* 9c908: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 9c90c: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 9c910: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(641300));
  fn2_1bbfa0(c);
  /* 9c914: add x1, sp, #0x20 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(32)));
  /* 9c918: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(641308));
  fn2_1bcf04(c);
  /* 9c91c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 9c920: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(641316));
  fn2_1bc620(c);
  /* 9c924: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 9c928: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(641324));
  fn2_1bc620(c);
  /* 9c92c: adrp x1, #0x24000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(147456)));
  /* 9c930: add x1, x1, #0x749 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1865)));
  /* 9c934: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 9c938: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(641340));
  fn2_1b7d24(c);
  /* 9c93c: add x1, sp, #0x20 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(32)));
  /* 9c940: sub x2, x29, #8 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 9c944: mov x8, x20 */
  ARC_X_W(c, 8, ARC_X_R(c, 20));
  /* 9c948: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 9c94c: mov w3, #0xc9 */
  ARC_W_W(c, 3, UINT64_C(201));
  /* 9c950: bl #0x9c97c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(641364));
  fn2_9c97c(c);
  /* 9c954: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 9c958: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(641372));
  fn2_1ccd9c(c);
  /* 9c95c: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 9c960: bl #0x1d97fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(641380));
  fn2_1d97fc(c);
  /* 9c964: ldp x20, x19, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 9c968: ldr x23, [sp, #0x50] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(80))));
  /* 9c96c: ldp x22, x21, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 9c970: ldp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 9c974: add sp, sp, #0x80 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(128)));
  /* 9c978: ret  */
  return;
}

void fn2_9fba8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076510120));
  /* 9fba8: sub sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(96)));
  /* 9fbac: stp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 9fbb0: stp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 9fbb4: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 9fbb8: add x29, sp, #0x30 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(48)));
  /* 9fbbc: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 9fbc0: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 9fbc4: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* 9fbc8: bl #0x1ccc74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(654284));
  fn2_1ccc74(c);
  /* 9fbcc: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 9fbd0: bl #0x1ccef8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(654292));
  fn2_1ccef8(c);
  /* 9fbd4: cmp x0, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 0), UINT64_C(1));
  /* 9fbd8: b.lt #0x9fc3c */
  if (ARC_COND(c, 11)) goto L_9fc3c;
  /* 9fbdc: mov w22, wzr */
  ARC_W_W(c, 22, ARC_W_R(c, 31));
  /* 9fbe0: mov x21, xzr */
  ARC_X_W(c, 21, ARC_X_R(c, 31));
  /* 9fbe4: b #0x9fc10 */
  goto L_9fc10;
L_9fbe8:;
  /* 9fbe8: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 9fbec: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* 9fbf0: bl #0x1b8a30 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(654324));
  fn2_1b8a30(c);
L_9fbf4:;
  /* 9fbf4: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 9fbf8: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(654332));
  fn2_1ccd9c(c);
  /* 9fbfc: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 9fc00: add x21, x21, #1 */
  ARC_X_W(c, 21, (ARC_X_R(c, 21) + UINT64_C(1)));
  /* 9fc04: bl #0x1ccef8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(654344));
  fn2_1ccef8(c);
  /* 9fc08: cmp x21, x0 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 0));
  /* 9fc0c: b.ge #0x9fc40 */
  if (ARC_COND(c, 10)) goto L_9fc40;
L_9fc10:;
  /* 9fc10: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 9fc14: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 9fc18: bl #0x1b8b20 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(654364));
  fn2_1b8b20(c);
  /* 9fc1c: ldr w0, [x0] */
  ARC_W_W(c, 0, arc_ld32(ARC_X_R(c, 0)));
  /* 9fc20: add x8, sp, #0x10 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(16)));
  /* 9fc24: bl #0x1cf454 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(654376));
  fn2_1cf454(c);
  /* 9fc28: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* 9fc2c: bl #0x9f87c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(654384));
  fn2_9f87c(c);
  /* 9fc30: tbnz w0, #0, #0x9fbe8 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) != 0) goto L_9fbe8;
  /* 9fc34: mov w22, #1 */
  ARC_W_W(c, 22, UINT64_C(1));
  /* 9fc38: b #0x9fbf4 */
  goto L_9fbf4;
L_9fc3c:;
  /* 9fc3c: mov w22, wzr */
  ARC_W_W(c, 22, ARC_W_R(c, 31));
L_9fc40:;
  /* 9fc40: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 9fc44: bl #0x1db4a4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(654408));
  fn2_1db4a4(c);
  /* 9fc48: add x8, sp, #8 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(8)));
  /* 9fc4c: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 9fc50: mov w1, #0x20 */
  ARC_W_W(c, 1, UINT64_C(32));
  /* 9fc54: bl #0x1cdd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(654424));
  fn2_1cdd9c(c);
  /* 9fc58: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 9fc5c: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 9fc60: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(654436));
  fn2_1bc2f8(c);
  /* 9fc64: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* 9fc68: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 9fc6c: bl #0x1db920 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(654448));
  fn2_1db920(c);
  /* 9fc70: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 9fc74: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(654456));
  fn2_1bc620(c);
  /* 9fc78: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 9fc7c: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(654464));
  fn2_1ccd9c(c);
  /* 9fc80: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 9fc84: and w1, w22, #1 */
  ARC_W_W(c, 1, (ARC_W_R(c, 22) & UINT64_C(1)));
  /* 9fc88: bl #0x1bc25c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(654476));
  fn2_1bc25c(c);
  /* 9fc8c: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* 9fc90: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 9fc94: bl #0x1db920 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(654488));
  fn2_1db920(c);
  /* 9fc98: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 9fc9c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(654496));
  fn2_1bc620(c);
  /* 9fca0: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 9fca4: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(654504));
  fn2_1ccd9c(c);
  /* 9fca8: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 9fcac: ldp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 9fcb0: ldp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 9fcb4: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* 9fcb8: ret  */
  return;
}

void fn2_a76ac(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076541612));
  /* a76ac: ldr x0, [x0, #8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* a76b0: ret  */
  return;
}

void fn2_a8834(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076546100));
  /* a8834: ldr x0, [x0, #8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* a8838: cbz x0, #0xa886c */
  if ((ARC_X_R(c, 0)) == 0) goto L_a886c;
  /* a883c: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* a8840: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* a8844: adrp x8, #0x257000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2453504)));
  /* a8848: ldr x8, [x8, #0xff8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(4088))));
  /* a884c: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* a8850: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(690260));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* a8854: cbz x0, #0xa8864 */
  if ((ARC_X_R(c, 0)) == 0) goto L_a8864;
  /* a8858: bl #0x1b62dc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(690268));
  fn2_1b62dc(c);
  /* a885c: cmp x0, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 0), UINT64_C(0));
  /* a8860: cset w0, ne */
  ARC_W_W(c, 0, (ARC_COND(c, 1) ? 1 : 0));
L_a8864:;
  /* a8864: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* a8868: ret  */
  return;
L_a886c:;
  /* a886c: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* a8870: ret  */
  return;
}

void fn2_a9514(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076549396));
  /* a9514: cmp x0, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 1));
  /* a9518: cset w0, eq */
  ARC_W_W(c, 0, (ARC_COND(c, 0) ? 1 : 0));
  /* a951c: ret  */
  return;
}

void fn2_aa0d8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076552408));
  /* aa0d8: adrp x0, #0xaa000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(696320)));
  /* aa0dc: add x0, x0, #0x130 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(304)));
  /* aa0e0: ret  */
  return;
}

void fn2_aa844(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076554308));
  /* aa844: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* aa848: adrp x1, #0x1b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(110592)));
  /* aa84c: add x1, x1, #0x37b */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(891)));
  /* aa850: b #0x1b7d24 */
  fn2_1b7d24(c); return;
}

void fn2_abb5c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076559196));
  /* abb5c: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* abb60: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* abb64: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* abb68: adrp x8, #0x250000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2424832)));
  /* abb6c: add x8, x8, #0x158 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(344)));
  /* abb70: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* abb74: str x8, [x0], #0x18 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(24));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* abb78: bl #0x1d79fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(703356));
  fn2_1d79fc(c);
  /* abb7c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* abb80: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* abb84: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* abb88: b #0x24b730 */
  fn2_24b730(c); return;
}

void fn2_ac708(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076562184));
  /* ac708: adrp x0, #0xac000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(704512)));
  /* ac70c: add x0, x0, #0x760 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1888)));
  /* ac710: ret  */
  return;
}

void fn2_ad1f0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076564976));
  /* ad1f0: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* ad1f4: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* ad1f8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* ad1fc: adrp x8, #0x250000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2424832)));
  /* ad200: add x8, x8, #0x428 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1064)));
  /* ad204: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* ad208: str x8, [x0], #0x18 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(24));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* ad20c: bl #0x1d79fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(709136));
  fn2_1d79fc(c);
  /* ad210: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ad214: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* ad218: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ad21c: b #0x24b730 */
  fn2_24b730(c); return;
}

void fn2_adc18(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076567576));
  /* adc18: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* adc1c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* adc20: adrp x8, #0x25c000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2473984)));
  /* adc24: add x8, x8, #0xc78 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3192)));
  /* adc28: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* adc2c: tbnz w8, #0, #0xadc5c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_adc5c;
  /* adc30: adrp x0, #0x25c000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2473984)));
  /* adc34: add x0, x0, #0xc78 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3192)));
  /* adc38: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(711740));
  fn2_24b710(c);
  /* adc3c: cbz w0, #0xadc5c */
  if ((ARC_W_R(c, 0)) == 0) goto L_adc5c;
  /* adc40: nop  */
  /* nop: no architectural effect here */
  /* adc44: adr x0, #0xaf764 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(718692)));
  /* adc48: bl #0x1aff64 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(711756));
  fn2_1aff64(c);
  /* adc4c: adrp x0, #0x25c000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2473984)));
  /* adc50: add x0, x0, #0xc78 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3192)));
  /* adc54: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* adc58: b #0x24b720 */
  fn2_24b720(c); return;
L_adc5c:;
  /* adc5c: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* adc60: ret  */
  return;
}

void fn2_ae920(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076570912));
  /* ae920: ldrb w0, [x0, #0x40] */
  ARC_W_W(c, 0, arc_ld8((ARC_X_R(c, 0) + INT64_C(64))));
  /* ae924: ret  */
  return;
}

void fn2_aec88(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076571784));
  /* aec88: sub sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(48)));
  /* aec8c: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* aec90: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* aec94: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* aec98: adrp x8, #0x25c000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2473984)));
  /* aec9c: add x8, x8, #0xd80 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3456)));
  /* aeca0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* aeca4: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* aeca8: tbz w8, #0, #0xaedec */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_aedec;
L_aecac:;
  /* aecac: adrp x8, #0x257000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2453504)));
  /* aecb0: ldr x8, [x8, #0xfd8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(4056))));
  /* aecb4: cbz x8, #0xaecbc */
  if ((ARC_X_R(c, 8)) == 0) goto L_aecbc;
  /* aecb8: bl #0x24b760 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(715964));
  fn2_24b760(c);
L_aecbc:;
  /* aecbc: adrp x0, #0x257000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2453504)));
  /* aecc0: ldr x0, [x0, #0xfe0] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(4064))));
  /* aecc4: bl #0x24b770 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(715976));
  fn2_24b770(c);
  /* aecc8: adrp x8, #0x257000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2453504)));
  /* aeccc: adrp x9, #0x25c000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2473984)));
  /* aecd0: add x9, x9, #0xd78 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(3448)));
  /* aecd4: ldr x8, [x8, #0xfe8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(4072))));
  /* aecd8: str x9, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 9));
  /* aecdc: cbz x8, #0xaece4 */
  if ((ARC_X_R(c, 8)) == 0) goto L_aece4;
  /* aece0: bl #0x24b780 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(716004));
  fn2_24b780(c);
L_aece4:;
  /* aece4: adrp x0, #0x257000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2453504)));
  /* aece8: ldr x0, [x0, #0xff0] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(4080))));
  /* aecec: bl #0x24b770 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(716016));
  fn2_24b770(c);
  /* aecf0: adrp x8, #0x250000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2424832)));
  /* aecf4: add x8, x8, #0x5f8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1528)));
  /* aecf8: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* aecfc: add x1, x1, #0xb6f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2927)));
  /* aed00: str x8, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* aed04: mov w0, #0x20 */
  ARC_W_W(c, 0, UINT64_C(32));
  /* aed08: mov x2, x1 */
  ARC_X_W(c, 2, ARC_X_R(c, 1));
  /* aed0c: bl #0x1b5d1c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(716048));
  fn2_1b5d1c(c);
  /* aed10: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* aed14: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* aed18: adrp x1, #0x25000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(151552)));
  /* aed1c: add x1, x1, #0x293 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(659)));
  /* aed20: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* aed24: stp q0, q0, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* aed28: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* aed2c: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(716080));
  fn2_1b8fd4(c);
  /* aed30: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* aed34: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* aed38: bl #0x1afcfc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(716092));
  fn2_1afcfc(c);
  /* aed3c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* aed40: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(716100));
  fn2_1d2d24(c);
  /* aed44: adrp x8, #0x250000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2424832)));
  /* aed48: add x8, x8, #0x620 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1568)));
  /* aed4c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* aed50: str x8, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 8));
  /* aed54: str xzr, [x20, #0x18] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(24)), ARC_X_R(c, 31));
  /* aed58: bl #0x1afe0c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(716124));
  fn2_1afe0c(c);
  /* aed5c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* aed60: bl #0x2258f4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(716132));
  fn2_2258f4(c);
  /* aed64: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* aed68: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* aed6c: tbz w8, #0, #0xaed84 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_aed84;
  /* aed70: cmp x20, x0 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 0));
  /* aed74: b.eq #0xaedbc */
  if (ARC_COND(c, 0)) goto L_aedbc;
  /* aed78: cbnz x0, #0xaed8c */
  if ((ARC_X_R(c, 0)) != 0) goto L_aed8c;
  /* aed7c: str x20, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 20));
  /* aed80: b #0xaedb4 */
  goto L_aedb4;
L_aed84:;
  /* aed84: cbz x0, #0xaeddc */
  if ((ARC_X_R(c, 0)) == 0) goto L_aeddc;
  /* aed88: mov x20, xzr */
  ARC_X_W(c, 20, ARC_X_R(c, 31));
L_aed8c:;
  /* aed8c: bl #0x225abc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(716176));
  fn2_225abc(c);
  /* aed90: tbz w0, #0, #0xaedac */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_aedac;
  /* aed94: adrp x9, #0x257000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2453504)));
  /* aed98: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* aed9c: ldr x9, [x9, #0xfb0] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(4016))));
  /* aeda0: ldr x0, [x8, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* aeda4: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* aeda8: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(716204));
  arc_dispatch(c, ARC_X_R(c, 9));
L_aedac:;
  /* aedac: str x20, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 20));
  /* aedb0: cbz x20, #0xaeddc */
  if ((ARC_X_R(c, 20)) == 0) goto L_aeddc;
L_aedb4:;
  /* aedb4: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* aedb8: bl #0x2259d8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(716220));
  fn2_2259d8(c);
L_aedbc:;
  /* aedbc: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* aedc0: bl #0x225abc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(716228));
  fn2_225abc(c);
  /* aedc4: tbz w0, #0, #0xaeddc */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_aeddc;
  /* aedc8: adrp x8, #0x257000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2453504)));
  /* aedcc: ldr x8, [x8, #0xfb0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(4016))));
  /* aedd0: ldr x0, [x20, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 20) + INT64_C(16))));
  /* aedd4: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* aedd8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(716252));
  arc_dispatch(c, ARC_X_R(c, 8));
L_aeddc:;
  /* aeddc: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* aede0: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* aede4: add sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(48)));
  /* aede8: ret  */
  return;
L_aedec:;
  /* aedec: adrp x0, #0x25c000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2473984)));
  /* aedf0: add x0, x0, #0xd80 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3456)));
  /* aedf4: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(716280));
  fn2_24b710(c);
  /* aedf8: cbz w0, #0xaecac */
  if ((ARC_W_R(c, 0)) == 0) goto L_aecac;
  /* aedfc: adrp x20, #0x25c000 */
  ARC_X_W(c, 20, (arc_image_bases[2] + UINT64_C(2473984)));
  /* aee00: add x20, x20, #0xd78 */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) + UINT64_C(3448)));
  /* aee04: nop  */
  /* nop: no architectural effect here */
  /* aee08: adr x1, #0x36600 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(222720)));
  /* aee0c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* aee10: bl #0x1b907c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(716308));
  fn2_1b907c(c);
  /* aee14: adrp x0, #0x257000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2453504)));
  /* aee18: adrp x2, #0x24f000 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(2420736)));
  /* aee1c: add x2, x2, #0x980 */
  ARC_X_W(c, 2, (ARC_X_R(c, 2) + UINT64_C(2432)));
  /* aee20: ldr x0, [x0, #0xf88] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(3976))));
  /* aee24: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* aee28: bl #0x24b6f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(716332));
  fn2_24b6f0(c);
  /* aee2c: adrp x0, #0x25c000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2473984)));
  /* aee30: add x0, x0, #0xd80 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3456)));
  /* aee34: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(716344));
  fn2_24b720(c);
  /* aee38: b #0xaecac */
  goto L_aecac;
}

void fn2_afcd4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076575956));
  /* afcd4: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* afcd8: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* afcdc: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* afce0: adrp x8, #0x25c000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2473984)));
  /* afce4: add x8, x8, #0xe10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3600)));
  /* afce8: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* afcec: tbz w8, #0, #0xafd0c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_afd0c;
L_afcf0:;
  /* afcf0: adrp x0, #0x25c000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2473984)));
  /* afcf4: add x0, x0, #0xe08 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3592)));
  /* afcf8: adrp x1, #0x250000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(2424832)));
  /* afcfc: add x1, x1, #0x720 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1824)));
  /* afd00: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* afd04: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* afd08: b #0x1b00bc */
  fn2_1b00bc(c); return;
L_afd0c:;
  /* afd0c: adrp x0, #0x25c000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2473984)));
  /* afd10: add x0, x0, #0xe10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3600)));
  /* afd14: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(720152));
  fn2_24b710(c);
  /* afd18: cbz w0, #0xafcf0 */
  if ((ARC_W_R(c, 0)) == 0) goto L_afcf0;
  /* afd1c: adrp x19, #0x25c000 */
  ARC_X_W(c, 19, (arc_image_bases[2] + UINT64_C(2473984)));
  /* afd20: add x19, x19, #0xe08 */
  ARC_X_W(c, 19, (ARC_X_R(c, 19) + UINT64_C(3592)));
  /* afd24: adrp x1, #0x1b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(110592)));
  /* afd28: add x1, x1, #0xf89 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3977)));
  /* afd2c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* afd30: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* afd34: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(720184));
  fn2_1b8fd4(c);
  /* afd38: adrp x0, #0x257000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2453504)));
  /* afd3c: adrp x2, #0x24f000 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(2420736)));
  /* afd40: add x2, x2, #0x980 */
  ARC_X_W(c, 2, (ARC_X_R(c, 2) + UINT64_C(2432)));
  /* afd44: ldr x0, [x0, #0xf88] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(3976))));
  /* afd48: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* afd4c: bl #0x24b6f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(720208));
  fn2_24b6f0(c);
  /* afd50: adrp x0, #0x25c000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2473984)));
  /* afd54: add x0, x0, #0xe10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3600)));
  /* afd58: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(720220));
  fn2_24b720(c);
  /* afd5c: b #0xafcf0 */
  goto L_afcf0;
}

void fn2_b06cc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076578508));
  /* b06cc: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b06d0: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* b06d4: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* b06d8: adrp x8, #0x25c000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2473984)));
  /* b06dc: add x8, x8, #0xe70 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3696)));
  /* b06e0: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* b06e4: tbz w8, #0, #0xb0704 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_b0704;
L_b06e8:;
  /* b06e8: adrp x0, #0x25c000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2473984)));
  /* b06ec: add x0, x0, #0xe68 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3688)));
  /* b06f0: adrp x1, #0x250000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(2424832)));
  /* b06f4: add x1, x1, #0x8f0 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2288)));
  /* b06f8: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* b06fc: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b0700: b #0x1b00bc */
  fn2_1b00bc(c); return;
L_b0704:;
  /* b0704: adrp x0, #0x25c000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2473984)));
  /* b0708: add x0, x0, #0xe70 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3696)));
  /* b070c: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(722704));
  fn2_24b710(c);
  /* b0710: cbz w0, #0xb06e8 */
  if ((ARC_W_R(c, 0)) == 0) goto L_b06e8;
  /* b0714: adrp x19, #0x25c000 */
  ARC_X_W(c, 19, (arc_image_bases[2] + UINT64_C(2473984)));
  /* b0718: add x19, x19, #0xe68 */
  ARC_X_W(c, 19, (ARC_X_R(c, 19) + UINT64_C(3688)));
  /* b071c: adrp x1, #0x19000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(102400)));
  /* b0720: add x1, x1, #0xcef */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3311)));
  /* b0724: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* b0728: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* b072c: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(722736));
  fn2_1b8fd4(c);
  /* b0730: adrp x0, #0x257000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2453504)));
  /* b0734: adrp x2, #0x24f000 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(2420736)));
  /* b0738: add x2, x2, #0x980 */
  ARC_X_W(c, 2, (ARC_X_R(c, 2) + UINT64_C(2432)));
  /* b073c: ldr x0, [x0, #0xf88] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(3976))));
  /* b0740: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* b0744: bl #0x24b6f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(722760));
  fn2_24b6f0(c);
  /* b0748: adrp x0, #0x25c000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2473984)));
  /* b074c: add x0, x0, #0xe70 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3696)));
  /* b0750: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(722772));
  fn2_24b720(c);
  /* b0754: b #0xb06e8 */
  goto L_b06e8;
}

void fn2_b1394(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076581780));
  /* b1394: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b1398: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* b139c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* b13a0: ldp x8, x9, [x0, #0x60] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(96));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* b13a4: mov x19, x3 */
  ARC_X_W(c, 19, ARC_X_R(c, 3));
  /* b13a8: add x0, x1, x9, asr #1 */
  ARC_X_W(c, 0, (ARC_X_R(c, 1) + ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> 1))));
  /* b13ac: tbz w9, #0, #0xb13b8 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_b13b8;
  /* b13b0: ldr x9, [x0] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 0)));
  /* b13b4: ldr x8, [x9, x8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + ARC_X_R(c, 8))));
L_b13b8:;
  /* b13b8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(725948));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* b13bc: and w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) & UINT64_C(1)));
  /* b13c0: strb w8, [x19] */
  arc_st8(ARC_X_R(c, 19), ARC_W_R(c, 8));
  /* b13c4: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* b13c8: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b13cc: ret  */
  return;
}

void fn2_b243c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076586044));
  /* b243c: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b2440: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* b2444: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* b2448: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* b244c: bl #0x1b6040 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(730192));
  fn2_1b6040(c);
  /* b2450: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* b2454: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* b2458: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b245c: b #0x24b730 */
  fn2_24b730(c); return;
}

void fn2_b3550(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076590416));
  /* b3550: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b3554: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* b3558: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* b355c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* b3560: bl #0x1b6040 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(734564));
  fn2_1b6040(c);
  /* b3564: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* b3568: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* b356c: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b3570: b #0x24b730 */
  fn2_24b730(c); return;
}

void fn2_b4b28(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076596008));
  /* b4b28: sub sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(112)));
  /* b4b2c: stp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b4b30: stp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* b4b34: stp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* b4b38: add x29, sp, #0x40 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(64)));
  /* b4b3c: add x21, x0, x2, asr #1 */
  ARC_X_W(c, 21, (ARC_X_R(c, 0) + ((uint64_t)((int64_t)(ARC_X_R(c, 2)) >> 1))));
  /* b4b40: mov x19, x4 */
  ARC_X_W(c, 19, ARC_X_R(c, 4));
  /* b4b44: mov x22, x3 */
  ARC_X_W(c, 22, ARC_X_R(c, 3));
  /* b4b48: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* b4b4c: str wzr, [x5] */
  arc_st32(ARC_X_R(c, 5), ARC_W_R(c, 31));
  /* b4b50: tbz w2, #0, #0xb4b5c */
  if (((ARC_W_R(c, 2)) >> 0 & 1) == 0) goto L_b4b5c;
  /* b4b54: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* b4b58: ldr x20, [x8, x20] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 8) + ARC_X_R(c, 20))));
L_b4b5c:;
  /* b4b5c: ldr x0, [x22] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 22)));
  /* b4b60: add x8, sp, #0x10 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(16)));
  /* b4b64: bl #0x1bc84c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(740200));
  fn2_1bc84c(c);
  /* b4b68: ldr x0, [x22, #8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 22) + INT64_C(8))));
  /* b4b6c: add x8, sp, #8 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(8)));
  /* b4b70: bl #0x1bc84c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(740212));
  fn2_1bc84c(c);
  /* b4b74: ldr x0, [x22, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 22) + INT64_C(16))));
  /* b4b78: mov x8, sp */
  ARC_X_W(c, 8, (c)->sp);
  /* b4b7c: bl #0x1bccb8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(740224));
  fn2_1bccb8(c);
  /* b4b80: ldr x0, [x22, #0x18] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 22) + INT64_C(24))));
  /* b4b84: bl #0x1bc630 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(740232));
  fn2_1bc630(c);
  /* b4b88: add x8, sp, #0x18 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(24)));
  /* b4b8c: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* b4b90: add x2, sp, #8 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(8)));
  /* b4b94: mov x3, sp */
  ARC_X_W(c, 3, (c)->sp);
  /* b4b98: and w4, w0, #1 */
  ARC_W_W(c, 4, (ARC_W_R(c, 0) & UINT64_C(1)));
  /* b4b9c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* b4ba0: blr x20 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(740260));
  arc_dispatch(c, ARC_X_R(c, 20));
  /* b4ba4: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* b4ba8: add x1, sp, #0x18 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(24)));
  /* b4bac: bl #0x1bc51c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(740272));
  fn2_1bc51c(c);
  /* b4bb0: sub x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* b4bb4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* b4bb8: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(740284));
  fn2_1bcf04(c);
  /* b4bbc: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* b4bc0: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(740292));
  fn2_1bc620(c);
  /* b4bc4: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* b4bc8: bl #0x1d8710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(740300));
  fn2_1d8710(c);
  /* b4bcc: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* b4bd0: bl #0x1d97fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(740308));
  fn2_1d97fc(c);
  /* b4bd4: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* b4bd8: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(740316));
  fn2_1ccd9c(c);
  /* b4bdc: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* b4be0: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(740324));
  fn2_1ccd9c(c);
  /* b4be4: ldp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* b4be8: ldp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* b4bec: ldp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b4bf0: add sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(112)));
  /* b4bf4: ret  */
  return;
}

void fn2_b5d54(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076600660));
  /* b5d54: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b5d58: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* b5d5c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* b5d60: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* b5d64: bl #0x1b6040 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(744808));
  fn2_1b6040(c);
  /* b5d68: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* b5d6c: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* b5d70: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b5d74: b #0x24b730 */
  fn2_24b730(c); return;
}

void fn2_b6d9c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076604828));
  /* b6d9c: sub sp, sp, #0x80 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(128)));
  /* b6da0: stp x29, x30, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b6da4: stp x22, x21, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* b6da8: stp x20, x19, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* b6dac: add x29, sp, #0x50 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(80)));
  /* b6db0: add x21, x0, x2, asr #1 */
  ARC_X_W(c, 21, (ARC_X_R(c, 0) + ((uint64_t)((int64_t)(ARC_X_R(c, 2)) >> 1))));
  /* b6db4: mov x19, x4 */
  ARC_X_W(c, 19, ARC_X_R(c, 4));
  /* b6db8: mov x22, x3 */
  ARC_X_W(c, 22, ARC_X_R(c, 3));
  /* b6dbc: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* b6dc0: str wzr, [x5] */
  arc_st32(ARC_X_R(c, 5), ARC_W_R(c, 31));
  /* b6dc4: tbz w2, #0, #0xb6dd0 */
  if (((ARC_W_R(c, 2)) >> 0 & 1) == 0) goto L_b6dd0;
  /* b6dc8: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* b6dcc: ldr x20, [x8, x20] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 8) + ARC_X_R(c, 20))));
L_b6dd0:;
  /* b6dd0: ldr x0, [x22] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 22)));
  /* b6dd4: add x8, sp, #0x20 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(32)));
  /* b6dd8: bl #0x1bc84c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(749020));
  fn2_1bc84c(c);
  /* b6ddc: ldr x1, [x22, #8] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 22) + INT64_C(8))));
  /* b6de0: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* b6de4: bl #0x1bc0b8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(749032));
  fn2_1bc0b8(c);
  /* b6de8: add x8, sp, #0x28 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(40)));
  /* b6dec: add x1, sp, #0x20 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(32)));
  /* b6df0: add x2, sp, #8 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(8)));
  /* b6df4: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* b6df8: blr x20 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(749052));
  arc_dispatch(c, ARC_X_R(c, 20));
  /* b6dfc: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* b6e00: add x1, sp, #0x28 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(40)));
  /* b6e04: bl #0x1bc51c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(749064));
  fn2_1bc51c(c);
  /* b6e08: sub x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* b6e0c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* b6e10: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(749076));
  fn2_1bcf04(c);
  /* b6e14: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* b6e18: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(749084));
  fn2_1bc620(c);
  /* b6e1c: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* b6e20: bl #0x1d8710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(749092));
  fn2_1d8710(c);
  /* b6e24: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* b6e28: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(749100));
  fn2_1bc620(c);
  /* b6e2c: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* b6e30: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(749108));
  fn2_1ccd9c(c);
  /* b6e34: ldp x20, x19, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* b6e38: ldp x22, x21, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* b6e3c: ldp x29, x30, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b6e40: add sp, sp, #0x80 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(128)));
  /* b6e44: ret  */
  return;
}

void fn2_b7fc0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076609472));
  /* b7fc0: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b7fc4: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* b7fc8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* b7fcc: mov x5, x4 */
  ARC_X_W(c, 5, ARC_X_R(c, 4));
  /* b7fd0: mov x4, x3 */
  ARC_X_W(c, 4, ARC_X_R(c, 3));
  /* b7fd4: mov x3, x2 */
  ARC_X_W(c, 3, ARC_X_R(c, 2));
  /* b7fd8: mov x9, x1 */
  ARC_X_W(c, 9, ARC_X_R(c, 1));
  /* b7fdc: ldp x1, x2, [x0, #0x60] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(96));
    ARC_X_W(c, 1, arc_ld64(_pa));
    ARC_X_W(c, 2, arc_ld64(_pa + 8));
  }
  /* b7fe0: add x6, x0, #0x48 */
  ARC_X_W(c, 6, (ARC_X_R(c, 0) + UINT64_C(72)));
  /* b7fe4: mov x0, x9 */
  ARC_X_W(c, 0, ARC_X_R(c, 9));
  /* b7fe8: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* b7fec: bl #0xb81c0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(753648));
  fn2_b81c0(c);
  /* b7ff0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* b7ff4: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* b7ff8: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b7ffc: b #0x1bc084 */
  fn2_1bc084(c); return;
}

void fn2_bcb04(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076628740));
  /* bcb04: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* bcb08: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* bcb0c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* bcb10: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* bcb14: ldr x0, [x0, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* bcb18: adrp x8, #0x251000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2428928)));
  /* bcb1c: add x8, x8, #0x7a8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1960)));
  /* bcb20: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* bcb24: cbz x0, #0xbcb48 */
  if ((ARC_X_R(c, 0)) == 0) goto L_bcb48;
  /* bcb28: bl #0x225abc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(772908));
  fn2_225abc(c);
  /* bcb2c: tbz w0, #0, #0xbcb48 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_bcb48;
  /* bcb30: adrp x9, #0x257000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2453504)));
  /* bcb34: ldr x8, [x19, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* bcb38: ldr x9, [x9, #0xfb0] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(4016))));
  /* bcb3c: ldr x0, [x8, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* bcb40: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* bcb44: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(772936));
  arc_dispatch(c, ARC_X_R(c, 9));
L_bcb48:;
  /* bcb48: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* bcb4c: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* bcb50: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* bcb54: b #0x24b730 */
  fn2_24b730(c); return;
}

void fn2_bd2dc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076630748));
  /* bd2dc: lsr x8, x0, #0x20 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 0)) >> ((UINT64_C(32)) & 63)));
  /* bd2e0: eor w0, w8, w0 */
  ARC_W_W(c, 0, (ARC_W_R(c, 8) ^ ARC_W_R(c, 0)));
  /* bd2e4: ret  */
  return;
}

void fn2_bda88(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076632712));
  /* bda88: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* bda8c: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* bda90: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* bda94: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* bda98: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* bda9c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* bdaa0: mov x20, x3 */
  ARC_X_W(c, 20, ARC_X_R(c, 3));
  /* bdaa4: str wzr, [x4] */
  arc_st32(ARC_X_R(c, 4), ARC_W_R(c, 31));
  /* bdaa8: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(776876));
  fn2_1bc084(c);
  /* bdaac: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* bdab0: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* bdab4: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(776888));
  fn2_1bcf04(c);
  /* bdab8: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* bdabc: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(776896));
  fn2_1bc620(c);
  /* bdac0: adrp x8, #0x257000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2453504)));
  /* bdac4: ldr x8, [x8, #0xff8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(4088))));
  /* bdac8: ldr x0, [x19, #0x70] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(112))));
  /* bdacc: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* bdad0: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(776916));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* bdad4: cbz x0, #0xbdadc */
  if ((ARC_X_R(c, 0)) == 0) goto L_bdadc;
  /* bdad8: bl #0x1b62dc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(776924));
  fn2_1b62dc(c);
L_bdadc:;
  /* bdadc: bl #0xbe3f4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(776928));
  fn2_be3f4(c);
  /* bdae0: cbz x0, #0xbdb00 */
  if ((ARC_X_R(c, 0)) == 0) goto L_bdb00;
  /* bdae4: add x1, x19, #0x10 */
  ARC_X_W(c, 1, (ARC_X_R(c, 19) + UINT64_C(16)));
  /* bdae8: add x2, x19, #0x78 */
  ARC_X_W(c, 2, (ARC_X_R(c, 19) + UINT64_C(120)));
  /* bdaec: bl #0xba3d0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(776944));
  fn2_ba3d0(c);
  /* bdaf0: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* bdaf4: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* bdaf8: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* bdafc: ret  */
  return;
L_bdb00:;
  /* bdb00: adrp x0, #0x28000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(163840)));
  /* bdb04: add x0, x0, #0x646 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1606)));
  /* bdb08: adrp x1, #0x20000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(131072)));
  /* bdb0c: add x1, x1, #0xc83 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3203)));
  /* bdb10: adrp x3, #0x26000 */
  ARC_X_W(c, 3, (arc_image_bases[2] + UINT64_C(155648)));
  /* bdb14: add x3, x3, #0x68e */
  ARC_X_W(c, 3, (ARC_X_R(c, 3) + UINT64_C(1678)));
  /* bdb18: mov w2, #0x14d */
  ARC_W_W(c, 2, UINT64_C(333));
  /* bdb1c: mov w4, wzr */
  ARC_W_W(c, 4, ARC_W_R(c, 31));
  /* bdb20: mov w5, wzr */
  ARC_W_W(c, 5, ARC_W_R(c, 31));
  /* bdb24: bl #0x1b54b0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(777000));
  fn2_1b54b0(c);
  /* bdb28: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* bdb2c: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* bdb30: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* bdb34: ret  */
  return;
}

void fn2_be4f8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076635384));
  /* be4f8: sub sp, sp, #0x130 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(304)));
  /* be4fc: stp x29, x30, [sp, #0xd0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(208));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* be500: stp x28, x27, [sp, #0xe0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(224));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* be504: stp x26, x25, [sp, #0xf0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(240));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* be508: stp x24, x23, [sp, #0x100] */
  { const uint64_t _pa = ((c)->sp + INT64_C(256));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* be50c: stp x22, x21, [sp, #0x110] */
  { const uint64_t _pa = ((c)->sp + INT64_C(272));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* be510: stp x20, x19, [sp, #0x120] */
  { const uint64_t _pa = ((c)->sp + INT64_C(288));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* be514: add x29, sp, #0xd0 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(208)));
  /* be518: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* be51c: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* be520: mov x21, x7 */
  ARC_X_W(c, 21, ARC_X_R(c, 7));
  /* be524: mov x22, x6 */
  ARC_X_W(c, 22, ARC_X_R(c, 6));
  /* be528: mov x23, x5 */
  ARC_X_W(c, 23, ARC_X_R(c, 5));
  /* be52c: mov x24, x4 */
  ARC_X_W(c, 24, ARC_X_R(c, 4));
  /* be530: mov x25, x3 */
  ARC_X_W(c, 25, ARC_X_R(c, 3));
  /* be534: mov x26, x2 */
  ARC_X_W(c, 26, ARC_X_R(c, 2));
  /* be538: mov x20, x8 */
  ARC_X_W(c, 20, ARC_X_R(c, 8));
  /* be53c: add x27, sp, #0x10 */
  ARC_X_W(c, 27, ((c)->sp + UINT64_C(16)));
  /* be540: bl #0x1bc290 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(779588));
  fn2_1bc290(c);
  /* be544: add x0, x27, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 27) + UINT64_C(24)));
  /* be548: mov x1, x26 */
  ARC_X_W(c, 1, ARC_X_R(c, 26));
  /* be54c: bl #0x1bc290 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(779600));
  fn2_1bc290(c);
  /* be550: add x0, x27, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 27) + UINT64_C(48)));
  /* be554: mov x1, x25 */
  ARC_X_W(c, 1, ARC_X_R(c, 25));
  /* be558: bl #0x1bc290 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(779612));
  fn2_1bc290(c);
  /* be55c: add x0, x27, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 27) + UINT64_C(72)));
  /* be560: mov x1, x24 */
  ARC_X_W(c, 1, ARC_X_R(c, 24));
  /* be564: bl #0x1bc290 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(779624));
  fn2_1bc290(c);
  /* be568: add x0, x27, #0x60 */
  ARC_X_W(c, 0, (ARC_X_R(c, 27) + UINT64_C(96)));
  /* be56c: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* be570: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(779636));
  fn2_1bc2f8(c);
  /* be574: add x0, x27, #0x78 */
  ARC_X_W(c, 0, (ARC_X_R(c, 27) + UINT64_C(120)));
  /* be578: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* be57c: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(779648));
  fn2_1bc2f8(c);
  /* be580: add x0, x27, #0x90 */
  ARC_X_W(c, 0, (ARC_X_R(c, 27) + UINT64_C(144)));
  /* be584: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* be588: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(779660));
  fn2_1bc2f8(c);
  /* be58c: add x0, x27, #0xa8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 27) + UINT64_C(168)));
  /* be590: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(779668));
  fn2_1bc084(c);
  /* be594: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* be598: bl #0x1db4a4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(779676));
  fn2_1db4a4(c);
  /* be59c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* be5a0: mov w1, #7 */
  ARC_W_W(c, 1, UINT64_C(7));
  /* be5a4: bl #0x1db9f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(779688));
  fn2_1db9f0(c);
  /* be5a8: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* be5ac: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* be5b0: bl #0x1bbf48 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(779700));
  fn2_1bbf48(c);
  /* be5b4: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* be5b8: bl #0x1bce10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(779708));
  fn2_1bce10(c);
  /* be5bc: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* be5c0: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* be5c4: bl #0x1bbf48 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(779720));
  fn2_1bbf48(c);
  /* be5c8: add x1, x27, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 27) + UINT64_C(24)));
  /* be5cc: bl #0x1bce10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(779728));
  fn2_1bce10(c);
  /* be5d0: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* be5d4: mov w1, #2 */
  ARC_W_W(c, 1, UINT64_C(2));
  /* be5d8: bl #0x1bbf48 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(779740));
  fn2_1bbf48(c);
  /* be5dc: add x1, x27, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 27) + UINT64_C(48)));
  /* be5e0: bl #0x1bce10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(779748));
  fn2_1bce10(c);
  /* be5e4: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* be5e8: mov w1, #3 */
  ARC_W_W(c, 1, UINT64_C(3));
  /* be5ec: bl #0x1bbf48 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(779760));
  fn2_1bbf48(c);
  /* be5f0: add x1, x27, #0x48 */
  ARC_X_W(c, 1, (ARC_X_R(c, 27) + UINT64_C(72)));
  /* be5f4: bl #0x1bce10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(779768));
  fn2_1bce10(c);
  /* be5f8: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* be5fc: mov w1, #4 */
  ARC_W_W(c, 1, UINT64_C(4));
  /* be600: bl #0x1bbf48 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(779780));
  fn2_1bbf48(c);
  /* be604: add x1, x27, #0x60 */
  ARC_X_W(c, 1, (ARC_X_R(c, 27) + UINT64_C(96)));
  /* be608: bl #0x1bce10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(779788));
  fn2_1bce10(c);
  /* be60c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* be610: mov w1, #5 */
  ARC_W_W(c, 1, UINT64_C(5));
  /* be614: bl #0x1bbf48 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(779800));
  fn2_1bbf48(c);
  /* be618: add x1, x27, #0x78 */
  ARC_X_W(c, 1, (ARC_X_R(c, 27) + UINT64_C(120)));
  /* be61c: bl #0x1bce10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(779808));
  fn2_1bce10(c);
  /* be620: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* be624: mov w1, #6 */
  ARC_W_W(c, 1, UINT64_C(6));
  /* be628: bl #0x1bbf48 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(779820));
  fn2_1bbf48(c);
  /* be62c: add x1, x27, #0x90 */
  ARC_X_W(c, 1, (ARC_X_R(c, 27) + UINT64_C(144)));
  /* be630: bl #0x1bce10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(779828));
  fn2_1bce10(c);
  /* be634: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* be638: mov x8, x20 */
  ARC_X_W(c, 8, ARC_X_R(c, 20));
  /* be63c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* be640: bl #0x1d0298 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(779844));
  fn2_1d0298(c);
  /* be644: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* be648: bl #0x1db788 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(779852));
  fn2_1db788(c);
  /* be64c: add x0, x27, #0xa8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 27) + UINT64_C(168)));
  /* be650: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(779860));
  fn2_1bc620(c);
  /* be654: add x0, x27, #0x90 */
  ARC_X_W(c, 0, (ARC_X_R(c, 27) + UINT64_C(144)));
  /* be658: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(779868));
  fn2_1bc620(c);
  /* be65c: add x0, x27, #0x78 */
  ARC_X_W(c, 0, (ARC_X_R(c, 27) + UINT64_C(120)));
  /* be660: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(779876));
  fn2_1bc620(c);
  /* be664: add x0, x27, #0x60 */
  ARC_X_W(c, 0, (ARC_X_R(c, 27) + UINT64_C(96)));
  /* be668: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(779884));
  fn2_1bc620(c);
  /* be66c: add x0, x27, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 27) + UINT64_C(72)));
  /* be670: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(779892));
  fn2_1bc620(c);
  /* be674: add x0, x27, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 27) + UINT64_C(48)));
  /* be678: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(779900));
  fn2_1bc620(c);
  /* be67c: add x0, x27, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 27) + UINT64_C(24)));
  /* be680: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(779908));
  fn2_1bc620(c);
  /* be684: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* be688: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(779916));
  fn2_1bc620(c);
  /* be68c: ldp x20, x19, [sp, #0x120] */
  { const uint64_t _pa = ((c)->sp + INT64_C(288));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* be690: ldp x22, x21, [sp, #0x110] */
  { const uint64_t _pa = ((c)->sp + INT64_C(272));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* be694: ldp x24, x23, [sp, #0x100] */
  { const uint64_t _pa = ((c)->sp + INT64_C(256));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* be698: ldp x26, x25, [sp, #0xf0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(240));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* be69c: ldp x28, x27, [sp, #0xe0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(224));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* be6a0: ldp x29, x30, [sp, #0xd0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(208));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* be6a4: add sp, sp, #0x130 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(304)));
  /* be6a8: ret  */
  return;
}

void fn2_bf674(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076639860));
  /* bf674: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* bf678: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* bf67c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* bf680: ldr x8, [x2] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 2)));
  /* bf684: mov x0, x2 */
  ARC_X_W(c, 0, ARC_X_R(c, 2));
  /* bf688: mov x19, x2 */
  ARC_X_W(c, 19, ARC_X_R(c, 2));
  /* bf68c: ldr x8, [x8, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(8))));
  /* bf690: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(784020));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* bf694: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* bf698: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* bf69c: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* bf6a0: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* bf6a4: b #0x1b5ce8 */
  fn2_1b5ce8(c); return;
}

void fn2_c006c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076642412));
  /* c006c: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* c0070: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* c0074: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* c0078: ldr x8, [x2] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 2)));
  /* c007c: mov x0, x2 */
  ARC_X_W(c, 0, ARC_X_R(c, 2));
  /* c0080: mov x19, x2 */
  ARC_X_W(c, 19, ARC_X_R(c, 2));
  /* c0084: ldr x8, [x8, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(8))));
  /* c0088: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(786572));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* c008c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* c0090: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* c0094: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* c0098: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* c009c: b #0x1b5ce8 */
  fn2_1b5ce8(c); return;
}

void fn2_c0b38(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076645176));
  /* c0b38: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* c0b3c: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* c0b40: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* c0b44: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* c0b48: bl #0x1b6040 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(789324));
  fn2_1b6040(c);
  /* c0b4c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* c0b50: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* c0b54: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* c0b58: b #0x24b730 */
  fn2_24b730(c); return;
}

void fn2_c218c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076650892));
  /* c218c: sub sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(112)));
  /* c2190: stp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* c2194: str x23, [sp, #0x40] */
  arc_st64(((c)->sp + INT64_C(64)), ARC_X_R(c, 23));
  /* c2198: stp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* c219c: stp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* c21a0: add x29, sp, #0x30 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(48)));
  /* c21a4: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* c21a8: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* c21ac: mov x20, x4 */
  ARC_X_W(c, 20, ARC_X_R(c, 4));
  /* c21b0: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* c21b4: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* c21b8: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(795068));
  fn2_1bc084(c);
  /* c21bc: ldp x23, x22, [x22, #0x60] */
  { const uint64_t _pa = (ARC_X_R(c, 22) + INT64_C(96));
    ARC_X_W(c, 23, arc_ld64(_pa));
    ARC_X_W(c, 22, arc_ld64(_pa + 8));
  }
  /* c21c0: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* c21c4: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(795080));
  fn2_1bc084(c);
  /* c21c8: add x0, x21, x22, asr #1 */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) + ((uint64_t)((int64_t)(ARC_X_R(c, 22)) >> 1))));
  /* c21cc: str wzr, [x20] */
  arc_st32(ARC_X_R(c, 20), ARC_W_R(c, 31));
  /* c21d0: tbz w22, #0, #0xc21dc */
  if (((ARC_W_R(c, 22)) >> 0 & 1) == 0) goto L_c21dc;
  /* c21d4: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* c21d8: ldr x23, [x8, x23] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 8) + ARC_X_R(c, 23))));
L_c21dc:;
  /* c21dc: blr x23 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(795104));
  arc_dispatch(c, ARC_X_R(c, 23));
  /* c21e0: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* c21e4: bl #0x1bc2c4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(795112));
  fn2_1bc2c4(c);
  /* c21e8: add x1, sp, #0x18 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(24)));
  /* c21ec: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* c21f0: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(795124));
  fn2_1bcf04(c);
  /* c21f4: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* c21f8: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(795132));
  fn2_1bc620(c);
  /* c21fc: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* c2200: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(795140));
  fn2_1bc620(c);
  /* c2204: ldp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* c2208: ldr x23, [sp, #0x40] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(64))));
  /* c220c: ldp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* c2210: ldp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* c2214: add sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(112)));
  /* c2218: ret  */
  return;
}

void fn2_c57cc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076664780));
  /* c57cc: adrp x0, #0xc5000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(806912)));
  /* c57d0: add x0, x0, #0x824 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2084)));
  /* c57d4: ret  */
  return;
}

void fn2_c71a0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076671392));
  /* c71a0: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* c71a4: adrp x1, #0x1b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(110592)));
  /* c71a8: add x1, x1, #0x37b */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(891)));
  /* c71ac: b #0x1b7d24 */
  fn2_1b7d24(c); return;
}

void fn2_c7cc4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076674244));
  /* c7cc4: sub sp, sp, #0xa0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(160)));
  /* c7cc8: stp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* c7ccc: stp x28, x27, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* c7cd0: stp x26, x25, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* c7cd4: stp x24, x23, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* c7cd8: stp x22, x21, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* c7cdc: stp x20, x19, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* c7ce0: add x29, sp, #0x40 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(64)));
  /* c7ce4: ldp x28, x27, [x7] */
  { const uint64_t _pa = ARC_X_R(c, 7);
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* c7ce8: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* c7cec: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* c7cf0: mov x24, x7 */
  ARC_X_W(c, 24, ARC_X_R(c, 7));
  /* c7cf4: mov x21, x6 */
  ARC_X_W(c, 21, ARC_X_R(c, 6));
  /* c7cf8: mov x19, x5 */
  ARC_X_W(c, 19, ARC_X_R(c, 5));
  /* c7cfc: mov w26, w4 */
  ARC_W_W(c, 26, ARC_W_R(c, 4));
  /* c7d00: mov x25, x3 */
  ARC_X_W(c, 25, ARC_X_R(c, 3));
  /* c7d04: mov x22, x2 */
  ARC_X_W(c, 22, ARC_X_R(c, 2));
  /* c7d08: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* c7d0c: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(818448));
  fn2_1bc084(c);
  /* c7d10: cmp w26, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 26), UINT64_C(1));
  /* c7d14: b.lt #0xc7db4 */
  if (ARC_COND(c, 11)) goto L_c7db4;
  /* c7d18: ldr x1, [x25] */
  ARC_X_W(c, 1, arc_ld64(ARC_X_R(c, 25)));
  /* c7d1c: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* c7d20: bl #0x1bc09c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(818468));
  fn2_1bc09c(c);
  /* c7d24: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* c7d28: sub x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* c7d2c: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(818480));
  fn2_1bcf04(c);
  /* c7d30: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* c7d34: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(818488));
  fn2_1bc620(c);
  /* c7d38: add x23, x23, x22, asr #1 */
  ARC_X_W(c, 23, (ARC_X_R(c, 23) + ((uint64_t)((int64_t)(ARC_X_R(c, 22)) >> 1))));
  /* c7d3c: str wzr, [x21] */
  arc_st32(ARC_X_R(c, 21), ARC_W_R(c, 31));
  /* c7d40: tbz w22, #0, #0xc7d4c */
  if (((ARC_W_R(c, 22)) >> 0 & 1) == 0) goto L_c7d4c;
L_c7d44:;
  /* c7d44: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* c7d48: ldr x20, [x8, x20] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 8) + ARC_X_R(c, 20))));
L_c7d4c:;
  /* c7d4c: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* c7d50: bl #0x1bc668 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(818516));
  fn2_1bc668(c);
  /* c7d54: mov x1, x0 */
  ARC_X_W(c, 1, ARC_X_R(c, 0));
  /* c7d58: add x8, sp, #0x18 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(24)));
  /* c7d5c: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* c7d60: blr x20 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(818532));
  arc_dispatch(c, ARC_X_R(c, 20));
  /* c7d64: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* c7d68: add x1, sp, #0x18 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(24)));
  /* c7d6c: bl #0x1bc51c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(818544));
  fn2_1bc51c(c);
  /* c7d70: sub x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* c7d74: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* c7d78: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(818556));
  fn2_1bcf04(c);
  /* c7d7c: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* c7d80: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(818564));
  fn2_1bc620(c);
  /* c7d84: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* c7d88: bl #0x1d8710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(818572));
  fn2_1d8710(c);
  /* c7d8c: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* c7d90: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(818580));
  fn2_1bc620(c);
  /* c7d94: ldp x20, x19, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* c7d98: ldp x22, x21, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* c7d9c: ldp x24, x23, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* c7da0: ldp x26, x25, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* c7da4: ldp x28, x27, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* c7da8: ldp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* c7dac: add sp, sp, #0xa0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(160)));
  /* c7db0: ret  */
  return;
L_c7db4:;
  /* c7db4: sub x8, x27, x28 */
  ARC_X_W(c, 8, (ARC_X_R(c, 27) - ARC_X_R(c, 28)));
  /* c7db8: mov w9, #0xaaab */
  ARC_W_W(c, 9, UINT64_C(43691));
  /* c7dbc: mov w10, #-1 */
  ARC_W_W(c, 10, UINT64_C(18446744073709551615));
  /* c7dc0: lsr x8, x8, #3 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(3)) & 63)));
  /* c7dc4: movk w9, #0xaaaa, lsl #16 */
  ARC_W_W(c, 9, ((ARC_W_R(c, 9) & UINT64_C(18446744069414649855)) | UINT64_C(2863267840)));
  /* c7dc8: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* c7dcc: madd w8, w8, w9, w10 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 10)) + ((uint32_t)(ARC_W_R(c, 8)) * (uint32_t)(ARC_W_R(c, 9)))));
  /* c7dd0: mov w9, #0x18 */
  ARC_W_W(c, 9, UINT64_C(24));
  /* c7dd4: ldr x10, [x24] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 24)));
  /* c7dd8: nop  */
  /* nop: no architectural effect here */
  /* c7ddc: smaddl x1, w8, w9, x10 */
  ARC_X_W(c, 1, (((int64_t)(ARC_X_R(c, 10))) + (((int64_t)(int32_t)(ARC_W_R(c, 8))) * ((int64_t)(int32_t)(ARC_W_R(c, 9))))));
  /* c7de0: bl #0x1bce10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(818660));
  fn2_1bce10(c);
  /* c7de4: add x23, x23, x22, asr #1 */
  ARC_X_W(c, 23, (ARC_X_R(c, 23) + ((uint64_t)((int64_t)(ARC_X_R(c, 22)) >> 1))));
  /* c7de8: str wzr, [x21] */
  arc_st32(ARC_X_R(c, 21), ARC_W_R(c, 31));
  /* c7dec: tbnz w22, #0, #0xc7d44 */
  if (((ARC_W_R(c, 22)) >> 0 & 1) != 0) goto L_c7d44;
  /* c7df0: b #0xc7d4c */
  goto L_c7d4c;
}

void fn2_c93b4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076680116));
  /* c93b4: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* c93b8: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* c93bc: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* c93c0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* c93c4: adrp x1, #0x2a000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(172032)));
  /* c93c8: add x1, x1, #0x966 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2406)));
  /* c93cc: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* c93d0: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* c93d4: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(824280));
  fn2_1b8fd4(c);
  /* c93d8: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* c93dc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* c93e0: bl #0x1afcfc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(824292));
  fn2_1afcfc(c);
  /* c93e4: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* c93e8: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(824300));
  fn2_1d2d24(c);
  /* c93ec: adrp x8, #0x252000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2433024)));
  /* c93f0: add x8, x8, #0x268 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(616)));
  /* c93f4: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* c93f8: adrp x8, #0x25d000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2478080)));
  /* c93fc: str x19, [x8, #0x48] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(72)), ARC_X_R(c, 19));
  /* c9400: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* c9404: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* c9408: ret  */
  return;
}

void fn2_cc484(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076692612));
  /* cc484: cmp x0, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 1));
  /* cc488: cset w0, eq */
  ARC_W_W(c, 0, (ARC_COND(c, 0) ? 1 : 0));
  /* cc48c: ret  */
  return;
}

void fn2_cd180(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076695936));
  /* cd180: ldr x0, [x0, #8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* cd184: cbz x0, #0xcd1b8 */
  if ((ARC_X_R(c, 0)) == 0) goto L_cd1b8;
  /* cd188: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* cd18c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* cd190: adrp x8, #0x257000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2453504)));
  /* cd194: ldr x8, [x8, #0xff8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(4088))));
  /* cd198: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* cd19c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(840096));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* cd1a0: cbz x0, #0xcd1b0 */
  if ((ARC_X_R(c, 0)) == 0) goto L_cd1b0;
  /* cd1a4: bl #0x1b62dc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(840104));
  fn2_1b62dc(c);
  /* cd1a8: cmp x0, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 0), UINT64_C(0));
  /* cd1ac: cset w0, ne */
  ARC_W_W(c, 0, (ARC_COND(c, 1) ? 1 : 0));
L_cd1b0:;
  /* cd1b0: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* cd1b4: ret  */
  return;
L_cd1b8:;
  /* cd1b8: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* cd1bc: ret  */
  return;
}

void fn2_cdc18(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076698648));
  /* cdc18: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* cdc1c: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* cdc20: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* cdc24: adrp x8, #0x25d000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2478080)));
  /* cdc28: add x8, x8, #0x68 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(104)));
  /* cdc2c: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* cdc30: tbz w8, #0, #0xcdc50 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_cdc50;
L_cdc34:;
  /* cdc34: adrp x0, #0x25d000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478080)));
  /* cdc38: add x0, x0, #0x60 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(96)));
  /* cdc3c: adrp x1, #0x252000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(2433024)));
  /* cdc40: add x1, x1, #0x568 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1384)));
  /* cdc44: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* cdc48: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* cdc4c: b #0x1b00bc */
  fn2_1b00bc(c); return;
L_cdc50:;
  /* cdc50: adrp x0, #0x25d000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478080)));
  /* cdc54: add x0, x0, #0x68 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(104)));
  /* cdc58: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(842844));
  fn2_24b710(c);
  /* cdc5c: cbz w0, #0xcdc34 */
  if ((ARC_W_R(c, 0)) == 0) goto L_cdc34;
  /* cdc60: adrp x19, #0x25d000 */
  ARC_X_W(c, 19, (arc_image_bases[2] + UINT64_C(2478080)));
  /* cdc64: add x19, x19, #0x60 */
  ARC_X_W(c, 19, (ARC_X_R(c, 19) + UINT64_C(96)));
  /* cdc68: adrp x1, #0x2e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(188416)));
  /* cdc6c: add x1, x1, #0xc15 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3093)));
  /* cdc70: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* cdc74: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* cdc78: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(842876));
  fn2_1b8fd4(c);
  /* cdc7c: adrp x0, #0x257000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2453504)));
  /* cdc80: adrp x2, #0x24f000 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(2420736)));
  /* cdc84: add x2, x2, #0x980 */
  ARC_X_W(c, 2, (ARC_X_R(c, 2) + UINT64_C(2432)));
  /* cdc88: ldr x0, [x0, #0xf88] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(3976))));
  /* cdc8c: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* cdc90: bl #0x24b6f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(842900));
  fn2_24b6f0(c);
  /* cdc94: adrp x0, #0x25d000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478080)));
  /* cdc98: add x0, x0, #0x68 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(104)));
  /* cdc9c: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(842912));
  fn2_24b720(c);
  /* cdca0: b #0xcdc34 */
  goto L_cdc34;
}

void fn2_cec84(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076702852));
  /* cec84: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* cec88: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* cec8c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* cec90: mov x5, x4 */
  ARC_X_W(c, 5, ARC_X_R(c, 4));
  /* cec94: mov x4, x3 */
  ARC_X_W(c, 4, ARC_X_R(c, 3));
  /* cec98: mov x3, x2 */
  ARC_X_W(c, 3, ARC_X_R(c, 2));
  /* cec9c: mov x9, x1 */
  ARC_X_W(c, 9, ARC_X_R(c, 1));
  /* ceca0: ldp x1, x2, [x0, #0x60] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(96));
    ARC_X_W(c, 1, arc_ld64(_pa));
    ARC_X_W(c, 2, arc_ld64(_pa + 8));
  }
  /* ceca4: add x6, x0, #0x48 */
  ARC_X_W(c, 6, (ARC_X_R(c, 0) + UINT64_C(72)));
  /* ceca8: mov x0, x9 */
  ARC_X_W(c, 0, ARC_X_R(c, 9));
  /* cecac: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* cecb0: bl #0xced08 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(847028));
  fn2_ced08(c);
  /* cecb4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* cecb8: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* cecbc: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* cecc0: b #0x1bc084 */
  fn2_1bc084(c); return;
}

void fn2_cff74(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076707700));
  /* cff74: sub sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(96)));
  /* cff78: stp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* cff7c: str x21, [sp, #0x40] */
  arc_st64(((c)->sp + INT64_C(64)), ARC_X_R(c, 21));
  /* cff80: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* cff84: add x29, sp, #0x30 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(48)));
  /* cff88: add x19, x0, x2, asr #1 */
  ARC_X_W(c, 19, (ARC_X_R(c, 0) + ((uint64_t)((int64_t)(ARC_X_R(c, 2)) >> 1))));
  /* cff8c: mov x21, x3 */
  ARC_X_W(c, 21, ARC_X_R(c, 3));
  /* cff90: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* cff94: tbz w2, #0, #0xcffa0 */
  if (((ARC_W_R(c, 2)) >> 0 & 1) == 0) goto L_cffa0;
  /* cff98: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* cff9c: ldr x20, [x8, x20] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 8) + ARC_X_R(c, 20))));
L_cffa0:;
  /* cffa0: ldr x1, [x21] */
  ARC_X_W(c, 1, arc_ld64(ARC_X_R(c, 21)));
  /* cffa4: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* cffa8: bl #0x1ccc88 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(851884));
  fn2_1ccc88(c);
  /* cffac: ldr x1, [x21, #8] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 21) + INT64_C(8))));
  /* cffb0: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* cffb4: bl #0x1bc0b8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(851896));
  fn2_1bc0b8(c);
  /* cffb8: ldr x1, [x21, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 21) + INT64_C(16))));
  /* cffbc: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* cffc0: bl #0x1ccc88 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(851908));
  fn2_1ccc88(c);
  /* cffc4: ldr x1, [x21, #0x18] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 21) + INT64_C(24))));
  /* cffc8: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* cffcc: bl #0x1ccc88 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(851920));
  fn2_1ccc88(c);
  /* cffd0: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* cffd4: add x2, sp, #0x18 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(24)));
  /* cffd8: add x3, sp, #0x10 */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(16)));
  /* cffdc: add x4, sp, #8 */
  ARC_X_W(c, 4, ((c)->sp + UINT64_C(8)));
  /* cffe0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* cffe4: blr x20 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(851944));
  arc_dispatch(c, ARC_X_R(c, 20));
  /* cffe8: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* cffec: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(851952));
  fn2_1ccd9c(c);
  /* cfff0: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* cfff4: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(851960));
  fn2_1ccd9c(c);
  /* cfff8: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* cfffc: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(851968));
  fn2_1bc620(c);
  /* d0000: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* d0004: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(851976));
  fn2_1ccd9c(c);
  /* d0008: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* d000c: ldr x21, [sp, #0x40] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(64))));
  /* d0010: ldp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* d0014: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* d0018: ret  */
  return;
}

void fn2_d2fd4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076720084));
  /* d2fd4: sub sp, sp, #0xb0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(176)));
  /* d2fd8: stp x29, x30, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* d2fdc: stp x22, x21, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* d2fe0: stp x20, x19, [sp, #0xa0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(160));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* d2fe4: add x29, sp, #0x80 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(128)));
  /* d2fe8: ldr x0, [x0, #0x18] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(24))));
  /* d2fec: cbz x0, #0xd30a4 */
  if ((ARC_X_R(c, 0)) == 0) goto L_d30a4;
  /* d2ff0: adrp x8, #0x257000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2453504)));
  /* d2ff4: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* d2ff8: ldr x8, [x8, #0xff8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(4088))));
  /* d2ffc: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* d3000: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(864260));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* d3004: cbz x0, #0xd30a4 */
  if ((ARC_X_R(c, 0)) == 0) goto L_d30a4;
  /* d3008: bl #0x1b62dc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(864268));
  fn2_1b62dc(c);
  /* d300c: cbz x0, #0xd30a4 */
  if ((ARC_X_R(c, 0)) == 0) goto L_d30a4;
  /* d3010: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* d3014: bl #0xd50e0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(864280));
  fn2_d50e0(c);
  /* d3018: tbz w0, #0, #0xd30e4 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_d30e4;
  /* d301c: adrp x1, #0x28000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(163840)));
  /* d3020: add x1, x1, #0x742 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1858)));
  /* d3024: add x0, sp, #0x40 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(64)));
  /* d3028: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* d302c: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(864304));
  fn2_1b8fd4(c);
  /* d3030: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* d3034: add x1, sp, #0x40 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(64)));
  /* d3038: sub x22, x29, #0x30 */
  ARC_X_W(c, 22, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* d303c: bl #0x1bc44c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(864320));
  fn2_1bc44c(c);
  /* d3040: add x21, x22, #0x18 */
  ARC_X_W(c, 21, (ARC_X_R(c, 22) + UINT64_C(24)));
  /* d3044: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* d3048: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* d304c: bl #0x1bc530 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(864336));
  fn2_1bc530(c);
  /* d3050: add x8, sp, #0x28 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(40)));
  /* d3054: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* d3058: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* d305c: mov w2, #2 */
  ARC_W_W(c, 2, UINT64_C(2));
  /* d3060: stp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* d3064: bl #0x221308 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(864360));
  fn2_221308(c);
  /* d3068: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* d306c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(864368));
  fn2_1bc620(c);
  /* d3070: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* d3074: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(864376));
  fn2_1bc620(c);
  /* d3078: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* d307c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(864384));
  fn2_1bc620(c);
  /* d3080: add x0, sp, #0x40 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(64)));
  /* d3084: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(864392));
  fn2_1d2d24(c);
  /* d3088: mov w19, #1 */
  ARC_W_W(c, 19, UINT64_C(1));
  /* d308c: and w0, w19, #1 */
  ARC_W_W(c, 0, (ARC_W_R(c, 19) & UINT64_C(1)));
  /* d3090: ldp x20, x19, [sp, #0xa0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(160));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* d3094: ldp x22, x21, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* d3098: ldp x29, x30, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* d309c: add sp, sp, #0xb0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(176)));
  /* d30a0: ret  */
  return;
L_d30a4:;
  /* d30a4: adrp x0, #0x20000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(131072)));
  /* d30a8: add x0, x0, #0xae */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(174)));
  /* d30ac: adrp x1, #0x26000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(155648)));
  /* d30b0: add x1, x1, #0xfe3 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(4067)));
  /* d30b4: adrp x3, #0x2b000 */
  ARC_X_W(c, 3, (arc_image_bases[2] + UINT64_C(176128)));
  /* d30b8: add x3, x3, #0x54f */
  ARC_X_W(c, 3, (ARC_X_R(c, 3) + UINT64_C(1359)));
  /* d30bc: mov w2, #0x1d0 */
  ARC_W_W(c, 2, UINT64_C(464));
  /* d30c0: mov w4, wzr */
  ARC_W_W(c, 4, ARC_W_R(c, 31));
  /* d30c4: mov w5, wzr */
  ARC_W_W(c, 5, ARC_W_R(c, 31));
  /* d30c8: bl #0x1b54b0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(864460));
  fn2_1b54b0(c);
  /* d30cc: and w0, wzr, #1 */
  ARC_W_W(c, 0, (ARC_W_R(c, 31) & UINT64_C(1)));
  /* d30d0: ldp x20, x19, [sp, #0xa0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(160));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* d30d4: ldp x22, x21, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* d30d8: ldp x29, x30, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* d30dc: add sp, sp, #0xb0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(176)));
  /* d30e0: ret  */
  return;
L_d30e4:;
  /* d30e4: adrp x1, #0x22000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(139264)));
  /* d30e8: add x1, x1, #0xf31 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3889)));
  /* d30ec: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* d30f0: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* d30f4: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(864504));
  fn2_1b8fd4(c);
  /* d30f8: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* d30fc: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* d3100: sub x22, x29, #0x30 */
  ARC_X_W(c, 22, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* d3104: bl #0x1bc44c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(864520));
  fn2_1bc44c(c);
  /* d3108: add x21, x22, #0x18 */
  ARC_X_W(c, 21, (ARC_X_R(c, 22) + UINT64_C(24)));
  /* d310c: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* d3110: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* d3114: bl #0x1bc530 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(864536));
  fn2_1bc530(c);
  /* d3118: add x8, sp, #0x10 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(16)));
  /* d311c: add x1, sp, #0x40 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(64)));
  /* d3120: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* d3124: mov w2, #2 */
  ARC_W_W(c, 2, UINT64_C(2));
  /* d3128: stp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* d312c: bl #0x221308 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(864560));
  fn2_221308(c);
  /* d3130: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* d3134: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(864568));
  fn2_1bc620(c);
  /* d3138: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* d313c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(864576));
  fn2_1bc620(c);
  /* d3140: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* d3144: bl #0x1bcc90 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(864584));
  fn2_1bcc90(c);
  /* d3148: cmp w0, #3 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(3));
  /* d314c: b.eq #0xd3180 */
  if (ARC_COND(c, 0)) goto L_d3180;
  /* d3150: cmp w0, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(2));
  /* d3154: b.eq #0xd316c */
  if (ARC_COND(c, 0)) goto L_d316c;
  /* d3158: cmp w0, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(1));
  /* d315c: b.ne #0xd3194 */
  if (ARC_COND(c, 1)) goto L_d3194;
  /* d3160: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* d3164: bl #0x1bc630 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(864616));
  fn2_1bc630(c);
  /* d3168: b #0xd319c */
  goto L_d319c;
L_d316c:;
  /* d316c: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* d3170: bl #0x1bc668 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(864628));
  fn2_1bc668(c);
  /* d3174: cmp x0, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 0), UINT64_C(0));
  /* d3178: cset w19, ne */
  ARC_W_W(c, 19, (ARC_COND(c, 1) ? 1 : 0));
  /* d317c: b #0xd31a0 */
  goto L_d31a0;
L_d3180:;
  /* d3180: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* d3184: bl #0x1bc7e8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(864648));
  fn2_1bc7e8(c);
  /* d3188: fcmp d0, #0.0 */
  arc_fcmp(c, (double)(ARC_D_R(c, 0)), (double)(0.0));
  /* d318c: cset w19, ne */
  ARC_W_W(c, 19, (ARC_COND(c, 1) ? 1 : 0));
  /* d3190: b #0xd31a0 */
  goto L_d31a0;
L_d3194:;
  /* d3194: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* d3198: bl #0x1bda04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(864668));
  fn2_1bda04(c);
L_d319c:;
  /* d319c: mov w19, w0 */
  ARC_W_W(c, 19, ARC_W_R(c, 0));
L_d31a0:;
  /* d31a0: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* d31a4: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(864680));
  fn2_1bc620(c);
  /* d31a8: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* d31ac: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(864688));
  fn2_1d2d24(c);
  /* d31b0: and w0, w19, #1 */
  ARC_W_W(c, 0, (ARC_W_R(c, 19) & UINT64_C(1)));
  /* d31b4: ldp x20, x19, [sp, #0xa0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(160));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* d31b8: ldp x22, x21, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* d31bc: ldp x29, x30, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* d31c0: add sp, sp, #0xb0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(176)));
  /* d31c4: ret  */
  return;
}

void fn2_dadcc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076752332));
  /* dadcc: ldr x0, [x0, #0x38] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(56))));
  /* dadd0: ret  */
  return;
}

void fn2_dc368(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076757864));
  /* dc368: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* dc36c: stp x24, x23, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* dc370: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* dc374: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* dc378: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* dc37c: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* dc380: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* dc384: mov x19, x4 */
  ARC_X_W(c, 19, ARC_X_R(c, 4));
  /* dc388: mov x20, x3 */
  ARC_X_W(c, 20, ARC_X_R(c, 3));
  /* dc38c: mov x21, x2 */
  ARC_X_W(c, 21, ARC_X_R(c, 2));
  /* dc390: mov x22, x1 */
  ARC_X_W(c, 22, ARC_X_R(c, 1));
  /* dc394: mov x24, x8 */
  ARC_X_W(c, 24, ARC_X_R(c, 8));
  /* dc398: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(902044));
  fn2_1bc084(c);
  /* dc39c: ldp x1, x2, [x23, #0x60] */
  { const uint64_t _pa = (ARC_X_R(c, 23) + INT64_C(96));
    ARC_X_W(c, 1, arc_ld64(_pa));
    ARC_X_W(c, 2, arc_ld64(_pa + 8));
  }
  /* dc3a0: add x7, x23, #0x48 */
  ARC_X_W(c, 7, (ARC_X_R(c, 23) + UINT64_C(72)));
  /* dc3a4: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* dc3a8: mov x3, x21 */
  ARC_X_W(c, 3, ARC_X_R(c, 21));
  /* dc3ac: mov w4, w20 */
  ARC_W_W(c, 4, ARC_W_R(c, 20));
  /* dc3b0: mov x5, x24 */
  ARC_X_W(c, 5, ARC_X_R(c, 24));
  /* dc3b4: mov x6, x19 */
  ARC_X_W(c, 6, ARC_X_R(c, 19));
  /* dc3b8: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* dc3bc: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* dc3c0: ldp x24, x23, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* dc3c4: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* dc3c8: b #0xdc430 */
  fn2_dc430(c); return;
}

void fn2_dd7d8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076763096));
  /* dd7d8: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* dd7dc: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* dd7e0: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* dd7e4: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* dd7e8: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* dd7ec: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* dd7f0: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* dd7f4: add x1, x1, #0xb6f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2927)));
  /* dd7f8: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* dd7fc: mov w0, #0x70 */
  ARC_W_W(c, 0, UINT64_C(112));
  /* dd800: mov x2, x1 */
  ARC_X_W(c, 2, ARC_X_R(c, 1));
  /* dd804: bl #0x1b5d1c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(907272));
  fn2_1b5d1c(c);
  /* dd808: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* dd80c: mov w22, #1 */
  ARC_W_W(c, 22, UINT64_C(1));
  /* dd810: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* dd814: ldr x8, [x8, #0x40] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(64))));
  /* dd818: str w22, [x0, #8] */
  arc_st32((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 22));
  /* dd81c: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* dd820: str x8, [x0], #0xc */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(12));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* dd824: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(907304));
  fn2_1d2c2c(c);
  /* dd828: add x0, x19, #0x14 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(20)));
  /* dd82c: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(907312));
  fn2_1d2c2c(c);
  /* dd830: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* dd834: adrp x8, #0x252000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2433024)));
  /* dd838: add x8, x8, #0xa48 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2632)));
  /* dd83c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* dd840: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* dd844: stur xzr, [x19, #0x1c] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(28)), ARC_X_R(c, 31));
  /* dd848: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* dd84c: stp xzr, x21, [x19, #0x58] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(88));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* dd850: stur q0, [x19, #0x28] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(40)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(40)) + 8, (c)->q[0].u64[1]);
  /* dd854: stur q0, [x19, #0x38] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(56)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(56)) + 8, (c)->q[0].u64[1]);
  /* dd858: stur q0, [x19, #0x48] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(72)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(72)) + 8, (c)->q[0].u64[1]);
  /* dd85c: str x20, [x19, #0x68] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(104)), ARC_X_R(c, 20));
  /* dd860: bl #0x1b5e68 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(907364));
  fn2_1b5e68(c);
  /* dd864: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* dd868: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* dd86c: str w22, [x19, #0x1c] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(28)), ARC_W_R(c, 22));
  /* dd870: bl #0x1b5d9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(907380));
  fn2_1b5d9c(c);
  /* dd874: adrp x8, #0x25d000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2478080)));
  /* dd878: add x8, x8, #0x88 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(136)));
  /* dd87c: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* dd880: tbz w8, #0, #0xdd8c0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_dd8c0;
L_dd884:;
  /* dd884: adrp x1, #0x25d000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(2478080)));
  /* dd888: add x1, x1, #0x80 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(128)));
  /* dd88c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* dd890: bl #0x1d2c40 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(907412));
  fn2_1d2c40(c);
  /* dd894: add x0, x19, #0x14 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(20)));
  /* dd898: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* dd89c: bl #0x1d5dc0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(907424));
  fn2_1d5dc0(c);
  /* dd8a0: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* dd8a4: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(907432));
  fn2_1d2d24(c);
  /* dd8a8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* dd8ac: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* dd8b0: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* dd8b4: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* dd8b8: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* dd8bc: ret  */
  return;
L_dd8c0:;
  /* dd8c0: adrp x0, #0x25d000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478080)));
  /* dd8c4: add x0, x0, #0x88 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(136)));
  /* dd8c8: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(907468));
  fn2_24b710(c);
  /* dd8cc: cbz w0, #0xdd884 */
  if ((ARC_W_R(c, 0)) == 0) goto L_dd884;
  /* dd8d0: adrp x20, #0x25d000 */
  ARC_X_W(c, 20, (arc_image_bases[2] + UINT64_C(2478080)));
  /* dd8d4: add x20, x20, #0x80 */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) + UINT64_C(128)));
  /* dd8d8: nop  */
  /* nop: no architectural effect here */
  /* dd8dc: adr x1, #0x36644 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(222788)));
  /* dd8e0: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* dd8e4: bl #0x1b907c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(907496));
  fn2_1b907c(c);
  /* dd8e8: adrp x0, #0x257000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2453504)));
  /* dd8ec: adrp x2, #0x24f000 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(2420736)));
  /* dd8f0: add x2, x2, #0x980 */
  ARC_X_W(c, 2, (ARC_X_R(c, 2) + UINT64_C(2432)));
  /* dd8f4: ldr x0, [x0, #0xf88] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(3976))));
  /* dd8f8: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* dd8fc: bl #0x24b6f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(907520));
  fn2_24b6f0(c);
  /* dd900: adrp x0, #0x25d000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478080)));
  /* dd904: add x0, x0, #0x88 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(136)));
  /* dd908: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(907532));
  fn2_24b720(c);
  /* dd90c: b #0xdd884 */
  goto L_dd884;
}

void fn2_deae8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076767976));
  /* deae8: sub sp, sp, #0xb0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(176)));
  /* deaec: stp x29, x30, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* deaf0: str x27, [sp, #0x60] */
  arc_st64(((c)->sp + INT64_C(96)), ARC_X_R(c, 27));
  /* deaf4: stp x26, x25, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* deaf8: stp x24, x23, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* deafc: stp x22, x21, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* deb00: stp x20, x19, [sp, #0xa0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(160));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* deb04: add x29, sp, #0x50 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(80)));
  /* deb08: ldp x9, x8, [x6] */
  { const uint64_t _pa = ARC_X_R(c, 6);
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* deb0c: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* deb10: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* deb14: mov x23, x6 */
  ARC_X_W(c, 23, ARC_X_R(c, 6));
  /* deb18: mov x20, x5 */
  ARC_X_W(c, 20, ARC_X_R(c, 5));
  /* deb1c: mov w25, w4 */
  ARC_W_W(c, 25, ARC_W_R(c, 4));
  /* deb20: mov x24, x3 */
  ARC_X_W(c, 24, ARC_X_R(c, 3));
  /* deb24: mov x21, x2 */
  ARC_X_W(c, 21, ARC_X_R(c, 2));
  /* deb28: sub x8, x8, x9 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) - ARC_X_R(c, 9)));
  /* deb2c: mov x9, #-0x5555555555555556 */
  ARC_X_W(c, 9, UINT64_C(12297829382473034410));
  /* deb30: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* deb34: asr x8, x8, #3 */
  ARC_X_W(c, 8, ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(3)) & 63))));
  /* deb38: movk x9, #0xaaab */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(18446744073709486080)) | UINT64_C(43691)));
  /* deb3c: add x26, sp, #0x20 */
  ARC_X_W(c, 26, ((c)->sp + UINT64_C(32)));
  /* deb40: mul x27, x8, x9 */
  ARC_X_W(c, 27, ((uint64_t)(ARC_X_R(c, 8)) * (uint64_t)(ARC_X_R(c, 9))));
  /* deb44: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(912200));
  fn2_1bc084(c);
  /* deb48: add x0, x26, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 26) + UINT64_C(24)));
  /* deb4c: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(912208));
  fn2_1bc084(c);
  /* deb50: cmp w25, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 25), UINT64_C(0));
  /* deb54: b.le #0xdebb0 */
  if (ARC_COND(c, 13)) goto L_debb0;
  /* deb58: ldr x1, [x24] */
  ARC_X_W(c, 1, arc_ld64(ARC_X_R(c, 24)));
  /* deb5c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* deb60: bl #0x1bc09c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(912228));
  fn2_1bc09c(c);
  /* deb64: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* deb68: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* deb6c: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(912240));
  fn2_1bcf04(c);
  /* deb70: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* deb74: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(912248));
  fn2_1bc620(c);
  /* deb78: cmp w25, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 25), UINT64_C(1));
  /* deb7c: b.eq #0xdebcc */
  if (ARC_COND(c, 0)) goto L_debcc;
  /* deb80: ldr x1, [x24, #8] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 24) + INT64_C(8))));
  /* deb84: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* deb88: bl #0x1bc09c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(912268));
  fn2_1bc09c(c);
  /* deb8c: add x0, x26, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 26) + UINT64_C(24)));
  /* deb90: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* deb94: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(912280));
  fn2_1bcf04(c);
  /* deb98: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* deb9c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(912288));
  fn2_1bc620(c);
  /* deba0: add x22, x22, x21, asr #1 */
  ARC_X_W(c, 22, (ARC_X_R(c, 22) + ((uint64_t)((int64_t)(ARC_X_R(c, 21)) >> 1))));
  /* deba4: str wzr, [x20] */
  arc_st32(ARC_X_R(c, 20), ARC_W_R(c, 31));
  /* deba8: tbnz w21, #0, #0xdebf4 */
  if (((ARC_W_R(c, 21)) >> 0 & 1) != 0) goto L_debf4;
  /* debac: b #0xdebfc */
  goto L_debfc;
L_debb0:;
  /* debb0: sub w8, w27, #2 */
  ARC_W_W(c, 8, (ARC_W_R(c, 27) - UINT64_C(2)));
  /* debb4: mov w9, #0x18 */
  ARC_W_W(c, 9, UINT64_C(24));
  /* debb8: ldr x10, [x23] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 23)));
  /* debbc: nop  */
  /* nop: no architectural effect here */
  /* debc0: smaddl x1, w8, w9, x10 */
  ARC_X_W(c, 1, (((int64_t)(ARC_X_R(c, 10))) + (((int64_t)(int32_t)(ARC_W_R(c, 8))) * ((int64_t)(int32_t)(ARC_W_R(c, 9))))));
  /* debc4: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* debc8: bl #0x1bce10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(912332));
  fn2_1bce10(c);
L_debcc:;
  /* debcc: sub w8, w27, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 27) - UINT64_C(1)));
  /* debd0: mov w9, #0x18 */
  ARC_W_W(c, 9, UINT64_C(24));
  /* debd4: ldr x10, [x23] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 23)));
  /* debd8: nop  */
  /* nop: no architectural effect here */
  /* debdc: smaddl x1, w8, w9, x10 */
  ARC_X_W(c, 1, (((int64_t)(ARC_X_R(c, 10))) + (((int64_t)(int32_t)(ARC_W_R(c, 8))) * ((int64_t)(int32_t)(ARC_W_R(c, 9))))));
  /* debe0: add x0, x26, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 26) + UINT64_C(24)));
  /* debe4: bl #0x1bce10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(912360));
  fn2_1bce10(c);
  /* debe8: add x22, x22, x21, asr #1 */
  ARC_X_W(c, 22, (ARC_X_R(c, 22) + ((uint64_t)((int64_t)(ARC_X_R(c, 21)) >> 1))));
  /* debec: str wzr, [x20] */
  arc_st32(ARC_X_R(c, 20), ARC_W_R(c, 31));
  /* debf0: tbz w21, #0, #0xdebfc */
  if (((ARC_W_R(c, 21)) >> 0 & 1) == 0) goto L_debfc;
L_debf4:;
  /* debf4: ldr x8, [x22] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 22)));
  /* debf8: ldr x19, [x8, x19] */
  ARC_X_W(c, 19, arc_ld64((ARC_X_R(c, 8) + ARC_X_R(c, 19))));
L_debfc:;
  /* debfc: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* dec00: add x21, sp, #0x20 */
  ARC_X_W(c, 21, ((c)->sp + UINT64_C(32)));
  /* dec04: bl #0x1bc668 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(912392));
  fn2_1bc668(c);
  /* dec08: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* dec0c: add x8, sp, #8 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(8)));
  /* dec10: add x0, x26, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 26) + UINT64_C(24)));
  /* dec14: bl #0x1bccb8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(912408));
  fn2_1bccb8(c);
  /* dec18: add x2, sp, #8 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(8)));
  /* dec1c: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* dec20: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* dec24: blr x19 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(912424));
  arc_dispatch(c, ARC_X_R(c, 19));
  /* dec28: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* dec2c: bl #0x1d97fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(912432));
  fn2_1d97fc(c);
  /* dec30: add x0, x21, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) + UINT64_C(24)));
  /* dec34: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(912440));
  fn2_1bc620(c);
  /* dec38: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* dec3c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(912448));
  fn2_1bc620(c);
  /* dec40: ldp x20, x19, [sp, #0xa0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(160));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* dec44: ldr x27, [sp, #0x60] */
  ARC_X_W(c, 27, arc_ld64(((c)->sp + INT64_C(96))));
  /* dec48: ldp x22, x21, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* dec4c: ldp x24, x23, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* dec50: ldp x26, x25, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* dec54: ldp x29, x30, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* dec58: add sp, sp, #0xb0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(176)));
  /* dec5c: ret  */
  return;
}

void fn2_e274c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076783436));
  /* e274c: neg w9, w2 */
  ARC_W_W(c, 9, ((uint32_t)0 - (uint32_t)(ARC_W_R(c, 2))));
  /* e2750: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* e2754: add x10, x0, #0x78 */
  ARC_X_W(c, 10, (ARC_X_R(c, 0) + UINT64_C(120)));
  /* e2758: sxtw x9, w9 */
  ARC_X_W(c, 9, ((int64_t)(int32_t)(ARC_W_R(c, 9))));
  /* e275c: add x11, x1, #0x40 */
  ARC_X_W(c, 11, (ARC_X_R(c, 1) + UINT64_C(64)));
L_e2760:;
  /* e2760: add x13, x10, x8 */
  ARC_X_W(c, 13, (ARC_X_R(c, 10) + ARC_X_R(c, 8)));
  /* e2764: add x12, x11, x8 */
  ARC_X_W(c, 12, (ARC_X_R(c, 11) + ARC_X_R(c, 8)));
  /* e2768: add x8, x8, #0x80 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(128)));
  /* e276c: ldur x14, [x13, #-0x78] */
  ARC_X_W(c, 14, arc_ld64((ARC_X_R(c, 13) + INT64_C(-120))));
  /* e2770: ldur x15, [x12, #-0x40] */
  ARC_X_W(c, 15, arc_ld64((ARC_X_R(c, 12) + INT64_C(-64))));
  /* e2774: cmp x8, #0x200 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(512));
  /* e2778: eor x15, x15, x14 */
  ARC_X_W(c, 15, (ARC_X_R(c, 15) ^ ARC_X_R(c, 14)));
  /* e277c: and x15, x15, x9 */
  ARC_X_W(c, 15, (ARC_X_R(c, 15) & ARC_X_R(c, 9)));
  /* e2780: eor x14, x15, x14 */
  ARC_X_W(c, 14, (ARC_X_R(c, 15) ^ ARC_X_R(c, 14)));
  /* e2784: stur x14, [x13, #-0x78] */
  arc_st64((ARC_X_R(c, 13) + INT64_C(-120)), ARC_X_R(c, 14));
  /* e2788: ldp x14, x16, [x12, #-0x40] */
  { const uint64_t _pa = (ARC_X_R(c, 12) + INT64_C(-64));
    ARC_X_W(c, 14, arc_ld64(_pa));
    ARC_X_W(c, 16, arc_ld64(_pa + 8));
  }
  /* e278c: eor x14, x14, x15 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) ^ ARC_X_R(c, 15)));
  /* e2790: stur x14, [x12, #-0x40] */
  arc_st64((ARC_X_R(c, 12) + INT64_C(-64)), ARC_X_R(c, 14));
  /* e2794: ldur x14, [x13, #-0x70] */
  ARC_X_W(c, 14, arc_ld64((ARC_X_R(c, 13) + INT64_C(-112))));
  /* e2798: eor x15, x16, x14 */
  ARC_X_W(c, 15, (ARC_X_R(c, 16) ^ ARC_X_R(c, 14)));
  /* e279c: and x15, x15, x9 */
  ARC_X_W(c, 15, (ARC_X_R(c, 15) & ARC_X_R(c, 9)));
  /* e27a0: eor x14, x15, x14 */
  ARC_X_W(c, 14, (ARC_X_R(c, 15) ^ ARC_X_R(c, 14)));
  /* e27a4: stur x14, [x13, #-0x70] */
  arc_st64((ARC_X_R(c, 13) + INT64_C(-112)), ARC_X_R(c, 14));
  /* e27a8: ldp x14, x16, [x12, #-0x38] */
  { const uint64_t _pa = (ARC_X_R(c, 12) + INT64_C(-56));
    ARC_X_W(c, 14, arc_ld64(_pa));
    ARC_X_W(c, 16, arc_ld64(_pa + 8));
  }
  /* e27ac: eor x14, x14, x15 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) ^ ARC_X_R(c, 15)));
  /* e27b0: stur x14, [x12, #-0x38] */
  arc_st64((ARC_X_R(c, 12) + INT64_C(-56)), ARC_X_R(c, 14));
  /* e27b4: ldur x14, [x13, #-0x68] */
  ARC_X_W(c, 14, arc_ld64((ARC_X_R(c, 13) + INT64_C(-104))));
  /* e27b8: eor x15, x16, x14 */
  ARC_X_W(c, 15, (ARC_X_R(c, 16) ^ ARC_X_R(c, 14)));
  /* e27bc: and x15, x15, x9 */
  ARC_X_W(c, 15, (ARC_X_R(c, 15) & ARC_X_R(c, 9)));
  /* e27c0: eor x14, x15, x14 */
  ARC_X_W(c, 14, (ARC_X_R(c, 15) ^ ARC_X_R(c, 14)));
  /* e27c4: stur x14, [x13, #-0x68] */
  arc_st64((ARC_X_R(c, 13) + INT64_C(-104)), ARC_X_R(c, 14));
  /* e27c8: ldp x14, x16, [x12, #-0x30] */
  { const uint64_t _pa = (ARC_X_R(c, 12) + INT64_C(-48));
    ARC_X_W(c, 14, arc_ld64(_pa));
    ARC_X_W(c, 16, arc_ld64(_pa + 8));
  }
  /* e27cc: eor x14, x14, x15 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) ^ ARC_X_R(c, 15)));
  /* e27d0: stur x14, [x12, #-0x30] */
  arc_st64((ARC_X_R(c, 12) + INT64_C(-48)), ARC_X_R(c, 14));
  /* e27d4: ldur x14, [x13, #-0x60] */
  ARC_X_W(c, 14, arc_ld64((ARC_X_R(c, 13) + INT64_C(-96))));
  /* e27d8: eor x15, x16, x14 */
  ARC_X_W(c, 15, (ARC_X_R(c, 16) ^ ARC_X_R(c, 14)));
  /* e27dc: and x15, x15, x9 */
  ARC_X_W(c, 15, (ARC_X_R(c, 15) & ARC_X_R(c, 9)));
  /* e27e0: eor x14, x15, x14 */
  ARC_X_W(c, 14, (ARC_X_R(c, 15) ^ ARC_X_R(c, 14)));
  /* e27e4: stur x14, [x13, #-0x60] */
  arc_st64((ARC_X_R(c, 13) + INT64_C(-96)), ARC_X_R(c, 14));
  /* e27e8: ldp x14, x16, [x12, #-0x28] */
  { const uint64_t _pa = (ARC_X_R(c, 12) + INT64_C(-40));
    ARC_X_W(c, 14, arc_ld64(_pa));
    ARC_X_W(c, 16, arc_ld64(_pa + 8));
  }
  /* e27ec: eor x14, x14, x15 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) ^ ARC_X_R(c, 15)));
  /* e27f0: stur x14, [x12, #-0x28] */
  arc_st64((ARC_X_R(c, 12) + INT64_C(-40)), ARC_X_R(c, 14));
  /* e27f4: ldur x14, [x13, #-0x58] */
  ARC_X_W(c, 14, arc_ld64((ARC_X_R(c, 13) + INT64_C(-88))));
  /* e27f8: eor x15, x16, x14 */
  ARC_X_W(c, 15, (ARC_X_R(c, 16) ^ ARC_X_R(c, 14)));
  /* e27fc: and x15, x15, x9 */
  ARC_X_W(c, 15, (ARC_X_R(c, 15) & ARC_X_R(c, 9)));
  /* e2800: eor x14, x15, x14 */
  ARC_X_W(c, 14, (ARC_X_R(c, 15) ^ ARC_X_R(c, 14)));
  /* e2804: stur x14, [x13, #-0x58] */
  arc_st64((ARC_X_R(c, 13) + INT64_C(-88)), ARC_X_R(c, 14));
  /* e2808: ldp x14, x16, [x12, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 12) + INT64_C(-32));
    ARC_X_W(c, 14, arc_ld64(_pa));
    ARC_X_W(c, 16, arc_ld64(_pa + 8));
  }
  /* e280c: eor x14, x14, x15 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) ^ ARC_X_R(c, 15)));
  /* e2810: stur x14, [x12, #-0x20] */
  arc_st64((ARC_X_R(c, 12) + INT64_C(-32)), ARC_X_R(c, 14));
  /* e2814: ldur x14, [x13, #-0x50] */
  ARC_X_W(c, 14, arc_ld64((ARC_X_R(c, 13) + INT64_C(-80))));
  /* e2818: eor x15, x16, x14 */
  ARC_X_W(c, 15, (ARC_X_R(c, 16) ^ ARC_X_R(c, 14)));
  /* e281c: and x15, x15, x9 */
  ARC_X_W(c, 15, (ARC_X_R(c, 15) & ARC_X_R(c, 9)));
  /* e2820: eor x14, x15, x14 */
  ARC_X_W(c, 14, (ARC_X_R(c, 15) ^ ARC_X_R(c, 14)));
  /* e2824: stur x14, [x13, #-0x50] */
  arc_st64((ARC_X_R(c, 13) + INT64_C(-80)), ARC_X_R(c, 14));
  /* e2828: ldp x14, x16, [x12, #-0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 12) + INT64_C(-24));
    ARC_X_W(c, 14, arc_ld64(_pa));
    ARC_X_W(c, 16, arc_ld64(_pa + 8));
  }
  /* e282c: eor x14, x14, x15 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) ^ ARC_X_R(c, 15)));
  /* e2830: stur x14, [x12, #-0x18] */
  arc_st64((ARC_X_R(c, 12) + INT64_C(-24)), ARC_X_R(c, 14));
  /* e2834: ldur x14, [x13, #-0x48] */
  ARC_X_W(c, 14, arc_ld64((ARC_X_R(c, 13) + INT64_C(-72))));
  /* e2838: eor x15, x16, x14 */
  ARC_X_W(c, 15, (ARC_X_R(c, 16) ^ ARC_X_R(c, 14)));
  /* e283c: and x15, x15, x9 */
  ARC_X_W(c, 15, (ARC_X_R(c, 15) & ARC_X_R(c, 9)));
  /* e2840: eor x14, x15, x14 */
  ARC_X_W(c, 14, (ARC_X_R(c, 15) ^ ARC_X_R(c, 14)));
  /* e2844: stur x14, [x13, #-0x48] */
  arc_st64((ARC_X_R(c, 13) + INT64_C(-72)), ARC_X_R(c, 14));
  /* e2848: ldp x14, x16, [x12, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 12) + INT64_C(-16));
    ARC_X_W(c, 14, arc_ld64(_pa));
    ARC_X_W(c, 16, arc_ld64(_pa + 8));
  }
  /* e284c: eor x14, x14, x15 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) ^ ARC_X_R(c, 15)));
  /* e2850: stur x14, [x12, #-0x10] */
  arc_st64((ARC_X_R(c, 12) + INT64_C(-16)), ARC_X_R(c, 14));
  /* e2854: ldur x14, [x13, #-0x40] */
  ARC_X_W(c, 14, arc_ld64((ARC_X_R(c, 13) + INT64_C(-64))));
  /* e2858: eor x15, x16, x14 */
  ARC_X_W(c, 15, (ARC_X_R(c, 16) ^ ARC_X_R(c, 14)));
  /* e285c: and x15, x15, x9 */
  ARC_X_W(c, 15, (ARC_X_R(c, 15) & ARC_X_R(c, 9)));
  /* e2860: eor x14, x15, x14 */
  ARC_X_W(c, 14, (ARC_X_R(c, 15) ^ ARC_X_R(c, 14)));
  /* e2864: stur x14, [x13, #-0x40] */
  arc_st64((ARC_X_R(c, 13) + INT64_C(-64)), ARC_X_R(c, 14));
  /* e2868: ldp x14, x16, [x12, #-8] */
  { const uint64_t _pa = (ARC_X_R(c, 12) + INT64_C(-8));
    ARC_X_W(c, 14, arc_ld64(_pa));
    ARC_X_W(c, 16, arc_ld64(_pa + 8));
  }
  /* e286c: eor x14, x14, x15 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) ^ ARC_X_R(c, 15)));
  /* e2870: stur x14, [x12, #-8] */
  arc_st64((ARC_X_R(c, 12) + INT64_C(-8)), ARC_X_R(c, 14));
  /* e2874: ldur x14, [x13, #-0x38] */
  ARC_X_W(c, 14, arc_ld64((ARC_X_R(c, 13) + INT64_C(-56))));
  /* e2878: eor x15, x16, x14 */
  ARC_X_W(c, 15, (ARC_X_R(c, 16) ^ ARC_X_R(c, 14)));
  /* e287c: and x15, x15, x9 */
  ARC_X_W(c, 15, (ARC_X_R(c, 15) & ARC_X_R(c, 9)));
  /* e2880: eor x14, x15, x14 */
  ARC_X_W(c, 14, (ARC_X_R(c, 15) ^ ARC_X_R(c, 14)));
  /* e2884: stur x14, [x13, #-0x38] */
  arc_st64((ARC_X_R(c, 13) + INT64_C(-56)), ARC_X_R(c, 14));
  /* e2888: ldp x14, x16, [x12] */
  { const uint64_t _pa = ARC_X_R(c, 12);
    ARC_X_W(c, 14, arc_ld64(_pa));
    ARC_X_W(c, 16, arc_ld64(_pa + 8));
  }
  /* e288c: eor x14, x14, x15 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) ^ ARC_X_R(c, 15)));
  /* e2890: str x14, [x12] */
  arc_st64(ARC_X_R(c, 12), ARC_X_R(c, 14));
  /* e2894: ldur x14, [x13, #-0x30] */
  ARC_X_W(c, 14, arc_ld64((ARC_X_R(c, 13) + INT64_C(-48))));
  /* e2898: eor x15, x16, x14 */
  ARC_X_W(c, 15, (ARC_X_R(c, 16) ^ ARC_X_R(c, 14)));
  /* e289c: and x15, x15, x9 */
  ARC_X_W(c, 15, (ARC_X_R(c, 15) & ARC_X_R(c, 9)));
  /* e28a0: eor x14, x15, x14 */
  ARC_X_W(c, 14, (ARC_X_R(c, 15) ^ ARC_X_R(c, 14)));
  /* e28a4: stur x14, [x13, #-0x30] */
  arc_st64((ARC_X_R(c, 13) + INT64_C(-48)), ARC_X_R(c, 14));
  /* e28a8: ldp x14, x16, [x12, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 12) + INT64_C(8));
    ARC_X_W(c, 14, arc_ld64(_pa));
    ARC_X_W(c, 16, arc_ld64(_pa + 8));
  }
  /* e28ac: eor x14, x14, x15 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) ^ ARC_X_R(c, 15)));
  /* e28b0: str x14, [x12, #8] */
  arc_st64((ARC_X_R(c, 12) + INT64_C(8)), ARC_X_R(c, 14));
  /* e28b4: ldur x14, [x13, #-0x28] */
  ARC_X_W(c, 14, arc_ld64((ARC_X_R(c, 13) + INT64_C(-40))));
  /* e28b8: eor x15, x16, x14 */
  ARC_X_W(c, 15, (ARC_X_R(c, 16) ^ ARC_X_R(c, 14)));
  /* e28bc: and x15, x15, x9 */
  ARC_X_W(c, 15, (ARC_X_R(c, 15) & ARC_X_R(c, 9)));
  /* e28c0: eor x14, x15, x14 */
  ARC_X_W(c, 14, (ARC_X_R(c, 15) ^ ARC_X_R(c, 14)));
  /* e28c4: stur x14, [x13, #-0x28] */
  arc_st64((ARC_X_R(c, 13) + INT64_C(-40)), ARC_X_R(c, 14));
  /* e28c8: ldp x14, x16, [x12, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 12) + INT64_C(16));
    ARC_X_W(c, 14, arc_ld64(_pa));
    ARC_X_W(c, 16, arc_ld64(_pa + 8));
  }
  /* e28cc: eor x14, x14, x15 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) ^ ARC_X_R(c, 15)));
  /* e28d0: str x14, [x12, #0x10] */
  arc_st64((ARC_X_R(c, 12) + INT64_C(16)), ARC_X_R(c, 14));
  /* e28d4: ldur x14, [x13, #-0x20] */
  ARC_X_W(c, 14, arc_ld64((ARC_X_R(c, 13) + INT64_C(-32))));
  /* e28d8: eor x15, x16, x14 */
  ARC_X_W(c, 15, (ARC_X_R(c, 16) ^ ARC_X_R(c, 14)));
  /* e28dc: and x15, x15, x9 */
  ARC_X_W(c, 15, (ARC_X_R(c, 15) & ARC_X_R(c, 9)));
  /* e28e0: eor x14, x15, x14 */
  ARC_X_W(c, 14, (ARC_X_R(c, 15) ^ ARC_X_R(c, 14)));
  /* e28e4: stur x14, [x13, #-0x20] */
  arc_st64((ARC_X_R(c, 13) + INT64_C(-32)), ARC_X_R(c, 14));
  /* e28e8: ldp x14, x16, [x12, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 12) + INT64_C(24));
    ARC_X_W(c, 14, arc_ld64(_pa));
    ARC_X_W(c, 16, arc_ld64(_pa + 8));
  }
  /* e28ec: eor x14, x14, x15 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) ^ ARC_X_R(c, 15)));
  /* e28f0: str x14, [x12, #0x18] */
  arc_st64((ARC_X_R(c, 12) + INT64_C(24)), ARC_X_R(c, 14));
  /* e28f4: ldur x14, [x13, #-0x18] */
  ARC_X_W(c, 14, arc_ld64((ARC_X_R(c, 13) + INT64_C(-24))));
  /* e28f8: eor x15, x16, x14 */
  ARC_X_W(c, 15, (ARC_X_R(c, 16) ^ ARC_X_R(c, 14)));
  /* e28fc: and x15, x15, x9 */
  ARC_X_W(c, 15, (ARC_X_R(c, 15) & ARC_X_R(c, 9)));
  /* e2900: eor x14, x15, x14 */
  ARC_X_W(c, 14, (ARC_X_R(c, 15) ^ ARC_X_R(c, 14)));
  /* e2904: stur x14, [x13, #-0x18] */
  arc_st64((ARC_X_R(c, 13) + INT64_C(-24)), ARC_X_R(c, 14));
  /* e2908: ldp x14, x16, [x12, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 12) + INT64_C(32));
    ARC_X_W(c, 14, arc_ld64(_pa));
    ARC_X_W(c, 16, arc_ld64(_pa + 8));
  }
  /* e290c: eor x14, x14, x15 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) ^ ARC_X_R(c, 15)));
  /* e2910: str x14, [x12, #0x20] */
  arc_st64((ARC_X_R(c, 12) + INT64_C(32)), ARC_X_R(c, 14));
  /* e2914: ldur x14, [x13, #-0x10] */
  ARC_X_W(c, 14, arc_ld64((ARC_X_R(c, 13) + INT64_C(-16))));
  /* e2918: eor x15, x16, x14 */
  ARC_X_W(c, 15, (ARC_X_R(c, 16) ^ ARC_X_R(c, 14)));
  /* e291c: and x15, x15, x9 */
  ARC_X_W(c, 15, (ARC_X_R(c, 15) & ARC_X_R(c, 9)));
  /* e2920: eor x14, x15, x14 */
  ARC_X_W(c, 14, (ARC_X_R(c, 15) ^ ARC_X_R(c, 14)));
  /* e2924: stur x14, [x13, #-0x10] */
  arc_st64((ARC_X_R(c, 13) + INT64_C(-16)), ARC_X_R(c, 14));
  /* e2928: ldp x14, x16, [x12, #0x28] */
  { const uint64_t _pa = (ARC_X_R(c, 12) + INT64_C(40));
    ARC_X_W(c, 14, arc_ld64(_pa));
    ARC_X_W(c, 16, arc_ld64(_pa + 8));
  }
  /* e292c: eor x14, x14, x15 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) ^ ARC_X_R(c, 15)));
  /* e2930: str x14, [x12, #0x28] */
  arc_st64((ARC_X_R(c, 12) + INT64_C(40)), ARC_X_R(c, 14));
  /* e2934: ldur x14, [x13, #-8] */
  ARC_X_W(c, 14, arc_ld64((ARC_X_R(c, 13) + INT64_C(-8))));
  /* e2938: eor x15, x16, x14 */
  ARC_X_W(c, 15, (ARC_X_R(c, 16) ^ ARC_X_R(c, 14)));
  /* e293c: and x15, x15, x9 */
  ARC_X_W(c, 15, (ARC_X_R(c, 15) & ARC_X_R(c, 9)));
  /* e2940: eor x14, x15, x14 */
  ARC_X_W(c, 14, (ARC_X_R(c, 15) ^ ARC_X_R(c, 14)));
  /* e2944: stur x14, [x13, #-8] */
  arc_st64((ARC_X_R(c, 13) + INT64_C(-8)), ARC_X_R(c, 14));
  /* e2948: ldp x14, x16, [x12, #0x30] */
  { const uint64_t _pa = (ARC_X_R(c, 12) + INT64_C(48));
    ARC_X_W(c, 14, arc_ld64(_pa));
    ARC_X_W(c, 16, arc_ld64(_pa + 8));
  }
  /* e294c: eor x14, x14, x15 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) ^ ARC_X_R(c, 15)));
  /* e2950: str x14, [x12, #0x30] */
  arc_st64((ARC_X_R(c, 12) + INT64_C(48)), ARC_X_R(c, 14));
  /* e2954: ldr x14, [x13] */
  ARC_X_W(c, 14, arc_ld64(ARC_X_R(c, 13)));
  /* e2958: eor x15, x16, x14 */
  ARC_X_W(c, 15, (ARC_X_R(c, 16) ^ ARC_X_R(c, 14)));
  /* e295c: and x15, x15, x9 */
  ARC_X_W(c, 15, (ARC_X_R(c, 15) & ARC_X_R(c, 9)));
  /* e2960: eor x14, x15, x14 */
  ARC_X_W(c, 14, (ARC_X_R(c, 15) ^ ARC_X_R(c, 14)));
  /* e2964: str x14, [x13] */
  arc_st64(ARC_X_R(c, 13), ARC_X_R(c, 14));
  /* e2968: ldr x13, [x12, #0x38] */
  ARC_X_W(c, 13, arc_ld64((ARC_X_R(c, 12) + INT64_C(56))));
  /* e296c: eor x13, x13, x15 */
  ARC_X_W(c, 13, (ARC_X_R(c, 13) ^ ARC_X_R(c, 15)));
  /* e2970: str x13, [x12, #0x38] */
  arc_st64((ARC_X_R(c, 12) + INT64_C(56)), ARC_X_R(c, 13));
  /* e2974: b.ne #0xe2760 */
  if (ARC_COND(c, 1)) goto L_e2760;
  /* e2978: ret  */
  return;
}

void fn2_e39e8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076788200));
  /* e39e8: str d8, [sp, #-0x20]! */
  arc_st64(((c)->sp + INT64_C(-32)), (c)->q[8].u64[0]);
  (c)->sp = (c)->sp + INT64_C(-32);
  /* e39ec: stp x29, x30, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e39f0: str x19, [sp, #0x18] */
  arc_st64(((c)->sp + INT64_C(24)), ARC_X_R(c, 19));
  /* e39f4: add x29, sp, #8 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(8)));
  /* e39f8: ldr d1, [x0, #0x38] */
  arc_du_w(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(56))));
  /* e39fc: fmov d8, d0 */
  arc_du_w(c, 8, (uint64_t)(ARC_DU_R(c, 0)));
  /* e3a00: ldr x8, [x0, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(32))));
  /* e3a04: fadd d0, d1, d0 */
  arc_d_w(c, 0, (double)(arc_fadd64(ARC_D_R(c, 1), ARC_D_R(c, 0))));
  /* e3a08: str d0, [x0, #0x38] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(56)), (c)->q[0].u64[0]);
  /* e3a0c: cbz x8, #0xe3a38 */
  if ((ARC_X_R(c, 8)) == 0) goto L_e3a38;
  /* e3a10: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* e3a14: add x0, x0, #0x28 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(40)));
  /* e3a18: bl #0x1d983c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(932380));
  fn2_1d983c(c);
  /* e3a1c: tbz w0, #0, #0xe3a48 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_e3a48;
  /* e3a20: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* e3a24: fmov d0, d8 */
  arc_du_w(c, 0, (uint64_t)(ARC_DU_R(c, 8)));
  /* e3a28: ldp x29, x30, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e3a2c: ldr x19, [sp, #0x18] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(24))));
  /* e3a30: ldr d8, [sp], #0x20 */
  arc_du_w(c, 8, arc_ld64((c)->sp));
  (c)->sp = (c)->sp + INT64_C(32);
  /* e3a34: b #0xe4234 */
  fn2_e4234(c); return;
L_e3a38:;
  /* e3a38: ldp x29, x30, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e3a3c: ldr x19, [sp, #0x18] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(24))));
  /* e3a40: ldr d8, [sp], #0x20 */
  arc_du_w(c, 8, arc_ld64((c)->sp));
  (c)->sp = (c)->sp + INT64_C(32);
  /* e3a44: ret  */
  return;
L_e3a48:;
  /* e3a48: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* e3a4c: fmov d0, d8 */
  arc_du_w(c, 0, (uint64_t)(ARC_DU_R(c, 8)));
  /* e3a50: ldp x29, x30, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e3a54: ldr x19, [sp, #0x18] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(24))));
  /* e3a58: ldr d8, [sp], #0x20 */
  arc_du_w(c, 8, arc_ld64((c)->sp));
  (c)->sp = (c)->sp + INT64_C(32);
  /* e3a5c: b #0xe4084 */
  fn2_e4084(c); return;
}

void fn2_e6964(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076800356));
  /* e6964: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e6968: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* e696c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* e6970: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* e6974: ldr x0, [x0, #8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* e6978: adrp x8, #0x250000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2424832)));
  /* e697c: add x8, x8, #0x5e0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1504)));
  /* e6980: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* e6984: cbz x0, #0xe69b4 */
  if ((ARC_X_R(c, 0)) == 0) goto L_e69b4;
L_e6988:;
  /* e6988: ldr x1, [x0] */
  ARC_X_W(c, 1, arc_ld64(ARC_X_R(c, 0)));
  /* e698c: cbz x1, #0xe69a4 */
  if ((ARC_X_R(c, 1)) == 0) goto L_e69a4;
  /* e6990: bl #0xaeb74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(944532));
  fn2_aeb74(c);
  /* e6994: ldr x0, [x19, #8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* e6998: ldr w8, [x0, #0x10] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 0) + INT64_C(16))));
  /* e699c: cbnz w8, #0xe6988 */
  if ((ARC_W_R(c, 8)) != 0) goto L_e6988;
  /* e69a0: b #0xe69ac */
  goto L_e69ac;
L_e69a4:;
  /* e69a4: ldr w8, [x0, #0x10] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 0) + INT64_C(16))));
  /* e69a8: cbnz w8, #0xe69c4 */
  if ((ARC_W_R(c, 8)) != 0) goto L_e69c4;
L_e69ac:;
  /* e69ac: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* e69b0: bl #0x1b5ce8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(944564));
  fn2_1b5ce8(c);
L_e69b4:;
  /* e69b4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* e69b8: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* e69bc: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e69c0: b #0x24b730 */
  fn2_24b730(c); return;
L_e69c4:;
  /* e69c4: adrp x0, #0x29000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(167936)));
  /* e69c8: add x0, x0, #0x23f */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(575)));
  /* e69cc: adrp x1, #0x1b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(110592)));
  /* e69d0: add x1, x1, #0x30a */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(778)));
  /* e69d4: adrp x3, #0x2e000 */
  ARC_X_W(c, 3, (arc_image_bases[2] + UINT64_C(188416)));
  /* e69d8: add x3, x3, #0xbb4 */
  ARC_X_W(c, 3, (ARC_X_R(c, 3) + UINT64_C(2996)));
  /* e69dc: mov w2, #0x317 */
  ARC_W_W(c, 2, UINT64_C(791));
  /* e69e0: mov w4, wzr */
  ARC_W_W(c, 4, ARC_W_R(c, 31));
  /* e69e4: mov w5, wzr */
  ARC_W_W(c, 5, ARC_W_R(c, 31));
  /* e69e8: bl #0x1b54b0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(944620));
  fn2_1b54b0(c);
  /* e69ec: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* e69f0: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* e69f4: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e69f8: b #0x24b730 */
  fn2_24b730(c); return;
}

void fn2_e76c4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076803780));
  /* e76c4: sub sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(112)));
  /* e76c8: stp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e76cc: stp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* e76d0: stp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* e76d4: add x29, sp, #0x40 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(64)));
  /* e76d8: ldr w8, [x1] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 1)));
  /* e76dc: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* e76e0: cmp w8, w0 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 0));
  /* e76e4: b.ne #0xe77f0 */
  if (ARC_COND(c, 1)) goto L_e77f0;
  /* e76e8: adrp x21, #0x1e000 */
  ARC_X_W(c, 21, (arc_image_bases[2] + UINT64_C(122880)));
  /* e76ec: add x21, x21, #0xb6f */
  ARC_X_W(c, 21, (ARC_X_R(c, 21) + UINT64_C(2927)));
  /* e76f0: mov x20, x2 */
  ARC_X_W(c, 20, ARC_X_R(c, 2));
  /* e76f4: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* e76f8: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* e76fc: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* e7700: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(947972));
  fn2_1b8fd4(c);
  /* e7704: sub x0, x29, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* e7708: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* e770c: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(947984));
  fn2_1b7d24(c);
  /* e7710: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* e7714: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* e7718: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* e771c: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(948000));
  fn2_1b8fd4(c);
  /* e7720: add x21, sp, #4 */
  ARC_X_W(c, 21, ((c)->sp + UINT64_C(4)));
  /* e7724: str wzr, [sp, #4] */
  arc_st32(((c)->sp + INT64_C(4)), ARC_W_R(c, 31));
  /* e7728: add x0, x21, #4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) + UINT64_C(4)));
  /* e772c: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(948016));
  fn2_1d2c2c(c);
  /* e7730: add x0, x21, #0xc */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) + UINT64_C(12)));
  /* e7734: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(948024));
  fn2_1d2c2c(c);
  /* e7738: add x0, x21, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) + UINT64_C(24)));
  /* e773c: str wzr, [sp, #0x18] */
  arc_st32(((c)->sp + INT64_C(24)), ARC_W_R(c, 31));
  /* e7740: bl #0x1ccc74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(948036));
  fn2_1ccc74(c);
  /* e7744: mov w22, #6 */
  ARC_W_W(c, 22, UINT64_C(6));
  /* e7748: mov w8, #3 */
  ARC_W_W(c, 8, UINT64_C(3));
  /* e774c: add x0, x21, #4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) + UINT64_C(4)));
  /* e7750: sub x1, x29, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* e7754: str w22, [sp, #0x24] */
  arc_st32(((c)->sp + INT64_C(36)), ARC_W_R(c, 22));
  /* e7758: str w8, [sp, #4] */
  arc_st32(((c)->sp + INT64_C(4)), ARC_W_R(c, 8));
  /* e775c: bl #0x1d5dc0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(948064));
  fn2_1d5dc0(c);
  /* e7760: add x0, x21, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) + UINT64_C(24)));
  /* e7764: sub x1, x29, #0x10 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* e7768: str wzr, [sp, #0x18] */
  arc_st32(((c)->sp + INT64_C(24)), ARC_W_R(c, 31));
  /* e776c: bl #0x1d06b8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(948080));
  fn2_1d06b8(c);
  /* e7770: add x0, x21, #0xc */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) + UINT64_C(12)));
  /* e7774: sub x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* e7778: str w22, [sp, #0x24] */
  arc_st32(((c)->sp + INT64_C(36)), ARC_W_R(c, 22));
  /* e777c: bl #0x1d5dc0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(948096));
  fn2_1d5dc0(c);
  /* e7780: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* e7784: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(948104));
  fn2_1d2d24(c);
  /* e7788: sub x0, x29, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* e778c: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(948112));
  fn2_1ccd9c(c);
  /* e7790: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* e7794: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(948120));
  fn2_1d2d24(c);
  /* e7798: ldr w8, [sp, #4] */
  ARC_W_W(c, 8, arc_ld32(((c)->sp + INT64_C(4))));
  /* e779c: add x0, x20, #4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(4)));
  /* e77a0: add x1, x21, #4 */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(4)));
  /* e77a4: str w8, [x20] */
  arc_st32(ARC_X_R(c, 20), ARC_W_R(c, 8));
  /* e77a8: bl #0x1d2b98 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(948140));
  fn2_1d2b98(c);
  /* e77ac: add x0, x20, #0xc */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(12)));
  /* e77b0: add x1, x21, #0xc */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(12)));
  /* e77b4: bl #0x1d2b98 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(948152));
  fn2_1d2b98(c);
  /* e77b8: ldr w8, [sp, #0x18] */
  ARC_W_W(c, 8, arc_ld32(((c)->sp + INT64_C(24))));
  /* e77bc: add x0, x20, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(24)));
  /* e77c0: add x1, x21, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(24)));
  /* e77c4: str w8, [x20, #0x14] */
  arc_st32((ARC_X_R(c, 20) + INT64_C(20)), ARC_W_R(c, 8));
  /* e77c8: bl #0x1d0708 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(948172));
  fn2_1d0708(c);
  /* e77cc: ldr w8, [sp, #0x24] */
  ARC_W_W(c, 8, arc_ld32(((c)->sp + INT64_C(36))));
  /* e77d0: add x0, x21, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) + UINT64_C(24)));
  /* e77d4: str w8, [x20, #0x20] */
  arc_st32((ARC_X_R(c, 20) + INT64_C(32)), ARC_W_R(c, 8));
  /* e77d8: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(948188));
  fn2_1ccd9c(c);
  /* e77dc: add x0, x21, #0xc */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) + UINT64_C(12)));
  /* e77e0: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(948196));
  fn2_1d2d24(c);
  /* e77e4: add x0, x21, #4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) + UINT64_C(4)));
  /* e77e8: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(948204));
  fn2_1d2d24(c);
  /* e77ec: ldr w8, [x19] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 19)));
L_e77f0:;
  /* e77f0: add w8, w8, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) + UINT64_C(1)));
  /* e77f4: str w8, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 8));
  /* e77f8: ldp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* e77fc: ldp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* e7800: ldp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e7804: add sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(112)));
  /* e7808: ret  */
  return;
}

void fn2_e9e7c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076813948));
  /* e9e7c: add x1, x0, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 0) + UINT64_C(24)));
  /* e9e80: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* e9e84: b #0x1d9754 */
  fn2_1d9754(c); return;
}

void fn2_ebbd4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076821460));
  /* ebbd4: ldrb w8, [x0, #0x58] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 0) + INT64_C(88))));
  /* ebbd8: tbz w8, #0, #0xebbe0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_ebbe0;
  /* ebbdc: ret  */
  return;
L_ebbe0:;
  /* ebbe0: sub sp, sp, #0x90 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(144)));
  /* ebbe4: stp x29, x30, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* ebbe8: stp x22, x21, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* ebbec: stp x20, x19, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* ebbf0: add x29, sp, #0x60 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(96)));
  /* ebbf4: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* ebbf8: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* ebbfc: stur xzr, [x29, #-8] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-8)), ARC_X_R(c, 31));
  /* ebc00: strb w8, [x0, #0x58] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(88)), ARC_W_R(c, 8));
  /* ebc04: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* ebc08: bl #0xf3730 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(965644));
  fn2_f3730(c);
  /* ebc0c: ldur x19, [x29, #-8] */
  ARC_X_W(c, 19, arc_ld64((ARC_X_R(c, 29) + INT64_C(-8))));
  /* ebc10: adrp x1, #0x2c000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(180224)));
  /* ebc14: add x1, x1, #0xe8c */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3724)));
  /* ebc18: sub x0, x29, #0x28 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(40)));
  /* ebc1c: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(965664));
  fn2_1b7d24(c);
  /* ebc20: sub x1, x29, #0x28 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(40)));
  /* ebc24: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ebc28: bl #0x1ece0c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(965676));
  fn2_1ece0c(c);
  /* ebc2c: mov w19, w0 */
  ARC_W_W(c, 19, ARC_W_R(c, 0));
  /* ebc30: sub x0, x29, #0x28 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(40)));
  /* ebc34: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(965688));
  fn2_1ccd9c(c);
  /* ebc38: cbnz w19, #0xebf4c */
  if ((ARC_W_R(c, 19)) != 0) goto L_ebf4c;
  /* ebc3c: bl #0x21a330 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(965696));
  fn2_21a330(c);
  /* ebc40: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* ebc44: adrp x1, #0x26000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(155648)));
  /* ebc48: add x1, x1, #0xfa6 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(4006)));
  /* ebc4c: sub x0, x29, #0x28 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(40)));
  /* ebc50: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(965716));
  fn2_1b7d24(c);
  /* ebc54: sub x1, x29, #0x28 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(40)));
  /* ebc58: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ebc5c: bl #0x21f0f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(965728));
  fn2_21f0f0(c);
  /* ebc60: mov w19, w0 */
  ARC_W_W(c, 19, ARC_W_R(c, 0));
  /* ebc64: sub x0, x29, #0x28 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(40)));
  /* ebc68: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(965740));
  fn2_1ccd9c(c);
  /* ebc6c: tbz w19, #0, #0xebe98 */
  if (((ARC_W_R(c, 19)) >> 0 & 1) == 0) goto L_ebe98;
  /* ebc70: adrp x19, #0x21000 */
  ARC_X_W(c, 19, (arc_image_bases[2] + UINT64_C(135168)));
  /* ebc74: add x19, x19, #0x708 */
  ARC_X_W(c, 19, (ARC_X_R(c, 19) + UINT64_C(1800)));
  /* ebc78: ldur x20, [x29, #-8] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 29) + INT64_C(-8))));
  /* ebc7c: add x0, sp, #0x30 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(48)));
  /* ebc80: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* ebc84: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(965768));
  fn2_1b7d24(c);
  /* ebc88: adrp x1, #0x2c000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(180224)));
  /* ebc8c: add x1, x1, #0xe9b */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3739)));
  /* ebc90: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* ebc94: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(965784));
  fn2_1b7d24(c);
  /* ebc98: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* ebc9c: add x1, x21, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(48)));
  /* ebca0: mov x22, x21 */
  ARC_X_W(c, 22, ARC_X_R(c, 21));
  /* ebca4: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(965800));
  fn2_1bc2f8(c);
  /* ebca8: sub x8, x29, #0x28 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(40)));
  /* ebcac: add x1, sp, #0x30 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(48)));
  /* ebcb0: add x2, sp, #0x28 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(40)));
  /* ebcb4: add x3, sp, #0x10 */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(16)));
  /* ebcb8: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* ebcbc: bl #0x1ec6bc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(965824));
  fn2_1ec6bc(c);
  /* ebcc0: sub x8, x29, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* ebcc4: sub x0, x29, #0x28 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(40)));
  /* ebcc8: bl #0x1bc84c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(965836));
  fn2_1bc84c(c);
  /* ebccc: add x0, x21, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) + UINT64_C(48)));
  /* ebcd0: sub x1, x29, #0x10 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* ebcd4: bl #0x1d0708 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(965848));
  fn2_1d0708(c);
  /* ebcd8: sub x0, x29, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* ebcdc: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(965856));
  fn2_1ccd9c(c);
  /* ebce0: sub x0, x29, #0x28 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(40)));
  /* ebce4: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(965864));
  fn2_1bc620(c);
  /* ebce8: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* ebcec: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(965872));
  fn2_1bc620(c);
  /* ebcf0: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* ebcf4: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(965880));
  fn2_1ccd9c(c);
  /* ebcf8: add x0, sp, #0x30 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(48)));
  /* ebcfc: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(965888));
  fn2_1ccd9c(c);
  /* ebd00: ldur x20, [x29, #-8] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 29) + INT64_C(-8))));
  /* ebd04: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* ebd08: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* ebd0c: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(965904));
  fn2_1b7d24(c);
  /* ebd10: adrp x1, #0x22000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(139264)));
  /* ebd14: add x1, x1, #0x43a */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1082)));
  /* ebd18: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* ebd1c: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(965920));
  fn2_1b7d24(c);
  /* ebd20: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* ebd24: add x1, x21, #0x38 */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(56)));
  /* ebd28: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(965932));
  fn2_1bc2f8(c);
  /* ebd2c: sub x8, x29, #0x28 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(40)));
  /* ebd30: add x1, sp, #0x28 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(40)));
  /* ebd34: add x2, sp, #8 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(8)));
  /* ebd38: add x3, sp, #0x10 */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(16)));
  /* ebd3c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* ebd40: bl #0x1ec6bc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(965956));
  fn2_1ec6bc(c);
  /* ebd44: add x8, sp, #0x30 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(48)));
  /* ebd48: sub x0, x29, #0x28 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(40)));
  /* ebd4c: bl #0x1bc84c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(965968));
  fn2_1bc84c(c);
  /* ebd50: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* ebd54: add x1, x1, #0x24 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(36)));
  /* ebd58: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* ebd5c: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(965984));
  fn2_1b7d24(c);
  /* ebd60: sub x8, x29, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* ebd64: add x0, sp, #0x30 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(48)));
  /* ebd68: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* ebd6c: bl #0x1ceff4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(966000));
  fn2_1ceff4(c);
  /* ebd70: add x0, x21, #0x38 */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) + UINT64_C(56)));
  /* ebd74: sub x1, x29, #0x10 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* ebd78: bl #0x1d0708 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(966012));
  fn2_1d0708(c);
  /* ebd7c: sub x0, x29, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* ebd80: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(966020));
  fn2_1ccd9c(c);
  /* ebd84: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* ebd88: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(966028));
  fn2_1ccd9c(c);
  /* ebd8c: add x0, sp, #0x30 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(48)));
  /* ebd90: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(966036));
  fn2_1ccd9c(c);
  /* ebd94: sub x0, x29, #0x28 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(40)));
  /* ebd98: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(966044));
  fn2_1bc620(c);
  /* ebd9c: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* ebda0: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(966052));
  fn2_1bc620(c);
  /* ebda4: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* ebda8: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(966060));
  fn2_1ccd9c(c);
  /* ebdac: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* ebdb0: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(966068));
  fn2_1ccd9c(c);
  /* ebdb4: ldur x20, [x29, #-8] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 29) + INT64_C(-8))));
  /* ebdb8: sub x0, x29, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* ebdbc: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* ebdc0: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(966084));
  fn2_1b7d24(c);
  /* ebdc4: adrp x1, #0x1f000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(126976)));
  /* ebdc8: add x1, x1, #0x90e */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2318)));
  /* ebdcc: add x0, sp, #0x30 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(48)));
  /* ebdd0: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(966100));
  fn2_1b7d24(c);
  /* ebdd4: ldrb w1, [x21, #0x40] */
  ARC_W_W(c, 1, arc_ld8((ARC_X_R(c, 21) + INT64_C(64))));
  /* ebdd8: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* ebddc: bl #0x1bc25c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(966112));
  fn2_1bc25c(c);
  /* ebde0: sub x8, x29, #0x28 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(40)));
  /* ebde4: sub x1, x29, #0x10 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* ebde8: add x2, sp, #0x30 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(48)));
  /* ebdec: add x3, sp, #0x10 */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(16)));
  /* ebdf0: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* ebdf4: bl #0x1ec6bc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(966136));
  fn2_1ec6bc(c);
  /* ebdf8: sub x0, x29, #0x28 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(40)));
  /* ebdfc: bl #0x1bc630 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(966144));
  fn2_1bc630(c);
  /* ebe00: and w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) & UINT64_C(1)));
  /* ebe04: sub x0, x29, #0x28 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(40)));
  /* ebe08: strb w8, [x21, #0x40] */
  arc_st8((ARC_X_R(c, 21) + INT64_C(64)), ARC_W_R(c, 8));
  /* ebe0c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(966160));
  fn2_1bc620(c);
  /* ebe10: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* ebe14: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(966168));
  fn2_1bc620(c);
  /* ebe18: add x0, sp, #0x30 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(48)));
  /* ebe1c: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(966176));
  fn2_1ccd9c(c);
  /* ebe20: sub x0, x29, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* ebe24: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(966184));
  fn2_1ccd9c(c);
  /* ebe28: ldur x20, [x29, #-8] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 29) + INT64_C(-8))));
  /* ebe2c: sub x0, x29, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* ebe30: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* ebe34: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(966200));
  fn2_1b7d24(c);
  /* ebe38: adrp x1, #0x2c000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(180224)));
  /* ebe3c: add x1, x1, #0x257 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(599)));
  /* ebe40: add x0, sp, #0x30 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(48)));
  /* ebe44: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(966216));
  fn2_1b7d24(c);
  /* ebe48: ldr x1, [x21, #0x48] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 21) + INT64_C(72))));
  /* ebe4c: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* ebe50: bl #0x1bc290 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(966228));
  fn2_1bc290(c);
  /* ebe54: sub x8, x29, #0x28 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(40)));
  /* ebe58: sub x1, x29, #0x10 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* ebe5c: add x2, sp, #0x30 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(48)));
  /* ebe60: add x3, sp, #0x10 */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(16)));
  /* ebe64: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* ebe68: bl #0x1ec6bc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(966252));
  fn2_1ec6bc(c);
  /* ebe6c: sub x0, x29, #0x28 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(40)));
  /* ebe70: bl #0x1bc668 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(966260));
  fn2_1bc668(c);
  /* ebe74: str x0, [x21, #0x48] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(72)), ARC_X_R(c, 0));
  /* ebe78: sub x0, x29, #0x28 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(40)));
  /* ebe7c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(966272));
  fn2_1bc620(c);
  /* ebe80: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* ebe84: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(966280));
  fn2_1bc620(c);
  /* ebe88: add x0, sp, #0x30 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(48)));
  /* ebe8c: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(966288));
  fn2_1ccd9c(c);
  /* ebe90: sub x0, x29, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* ebe94: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(966296));
  fn2_1ccd9c(c);
L_ebe98:;
  /* ebe98: ldur x19, [x29, #-8] */
  ARC_X_W(c, 19, arc_ld64((ARC_X_R(c, 29) + INT64_C(-8))));
  /* ebe9c: adrp x1, #0x21000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(135168)));
  /* ebea0: add x1, x1, #0x708 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1800)));
  /* ebea4: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* ebea8: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(966316));
  fn2_1b7d24(c);
  /* ebeac: adrp x1, #0x20000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(131072)));
  /* ebeb0: add x1, x1, #0x3a */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(58)));
  /* ebeb4: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* ebeb8: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(966332));
  fn2_1b7d24(c);
  /* ebebc: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* ebec0: add x1, x1, #0xb6f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2927)));
  /* ebec4: sub x0, x29, #0x28 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(40)));
  /* ebec8: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(966348));
  fn2_1b7d24(c);
  /* ebecc: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* ebed0: sub x1, x29, #0x28 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(40)));
  /* ebed4: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(966360));
  fn2_1bc2f8(c);
  /* ebed8: sub x0, x29, #0x28 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(40)));
  /* ebedc: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(966368));
  fn2_1ccd9c(c);
  /* ebee0: sub x8, x29, #0x28 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(40)));
  /* ebee4: add x1, sp, #0x28 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(40)));
  /* ebee8: add x2, sp, #8 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(8)));
  /* ebeec: add x3, sp, #0x10 */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(16)));
  /* ebef0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ebef4: bl #0x1ec6bc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(966392));
  fn2_1ec6bc(c);
  /* ebef8: add x8, sp, #0x30 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(48)));
  /* ebefc: sub x0, x29, #0x28 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(40)));
  /* ebf00: bl #0x1bc84c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(966404));
  fn2_1bc84c(c);
  /* ebf04: sub x8, x29, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* ebf08: add x0, sp, #0x30 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(48)));
  /* ebf0c: bl #0xebf88 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(966416));
  fn2_ebf88(c);
  /* ebf10: add x0, x21, #0x50 */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) + UINT64_C(80)));
  /* ebf14: sub x1, x29, #0x10 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* ebf18: bl #0x1d0708 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(966428));
  fn2_1d0708(c);
  /* ebf1c: sub x0, x29, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* ebf20: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(966436));
  fn2_1ccd9c(c);
  /* ebf24: add x0, sp, #0x30 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(48)));
  /* ebf28: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(966444));
  fn2_1ccd9c(c);
  /* ebf2c: sub x0, x29, #0x28 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(40)));
  /* ebf30: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(966452));
  fn2_1bc620(c);
  /* ebf34: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* ebf38: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(966460));
  fn2_1bc620(c);
  /* ebf3c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* ebf40: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(966468));
  fn2_1ccd9c(c);
  /* ebf44: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* ebf48: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(966476));
  fn2_1ccd9c(c);
L_ebf4c:;
  /* ebf4c: ldur x0, [x29, #-8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-8))));
  /* ebf50: cbz x0, #0xebf74 */
  if ((ARC_X_R(c, 0)) == 0) goto L_ebf74;
  /* ebf54: bl #0x225abc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(966488));
  fn2_225abc(c);
  /* ebf58: tbz w0, #0, #0xebf74 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_ebf74;
  /* ebf5c: adrp x9, #0x257000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2453504)));
  /* ebf60: ldur x8, [x29, #-8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(-8))));
  /* ebf64: ldr x9, [x9, #0xfb0] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(4016))));
  /* ebf68: ldr x0, [x8, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* ebf6c: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* ebf70: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(966516));
  arc_dispatch(c, ARC_X_R(c, 9));
L_ebf74:;
  /* ebf74: ldp x20, x19, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* ebf78: ldp x22, x21, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* ebf7c: ldp x29, x30, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ebf80: add sp, sp, #0x90 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(144)));
  /* ebf84: ret  */
  return;
}

void fn2_f39e0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076853728));
  /* f39e0: mov x8, #0x6666666666666666 */
  ARC_X_W(c, 8, UINT64_C(7378697629483820646));
  /* f39e4: movk x8, #0x3fd6, lsl #48 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(281474976710655)) | UINT64_C(4599864069405540352)));
  /* f39e8: fmov d0, x8 */
  arc_du_w(c, 0, (uint64_t)(ARC_X_R(c, 8)));
  /* f39ec: ret  */
  return;
}

void fn2_f3bb8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076854200));
  /* f3bb8: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* f3bbc: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* f3bc0: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* f3bc4: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* f3bc8: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* f3bcc: add x1, x1, #0xb6f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2927)));
  /* f3bd0: mov w0, #0x18 */
  ARC_W_W(c, 0, UINT64_C(24));
  /* f3bd4: mov x2, x1 */
  ARC_X_W(c, 2, ARC_X_R(c, 1));
  /* f3bd8: bl #0x1b5d1c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(998364));
  fn2_1b5d1c(c);
  /* f3bdc: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* f3be0: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* f3be4: bl #0x1afdf8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(998376));
  fn2_1afdf8(c);
  /* f3be8: adrp x8, #0x253000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2437120)));
  /* f3bec: add x8, x8, #0x248 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(584)));
  /* f3bf0: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* f3bf4: str x8, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 8));
  /* f3bf8: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* f3bfc: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* f3c00: ret  */
  return;
}

void fn2_f4d74(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076858740));
  /* f4d74: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* f4d78: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* f4d7c: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* f4d80: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* f4d84: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* f4d88: cbz w1, #0xf4e44 */
  if ((ARC_W_R(c, 1)) == 0) goto L_f4e44;
  /* f4d8c: adrp x20, #0x1e000 */
  ARC_X_W(c, 20, (arc_image_bases[2] + UINT64_C(122880)));
  /* f4d90: add x20, x20, #0xb6f */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) + UINT64_C(2927)));
  /* f4d94: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* f4d98: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* f4d9c: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* f4da0: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1002916));
  fn2_1b8fd4(c);
  /* f4da4: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* f4da8: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* f4dac: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1002928));
  fn2_1b7d24(c);
  /* f4db0: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* f4db4: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* f4db8: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* f4dbc: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1002944));
  fn2_1b8fd4(c);
  /* f4dc0: add x0, x19, #4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(4)));
  /* f4dc4: str wzr, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 31));
  /* f4dc8: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1002956));
  fn2_1d2c2c(c);
  /* f4dcc: add x0, x19, #0xc */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(12)));
  /* f4dd0: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1002964));
  fn2_1d2c2c(c);
  /* f4dd4: add x0, x19, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(24)));
  /* f4dd8: str wzr, [x19, #0x14] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(20)), ARC_W_R(c, 31));
  /* f4ddc: bl #0x1ccc74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1002976));
  fn2_1ccc74(c);
  /* f4de0: mov w20, #6 */
  ARC_W_W(c, 20, UINT64_C(6));
  /* f4de4: mov w8, #4 */
  ARC_W_W(c, 8, UINT64_C(4));
  /* f4de8: add x0, x19, #4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(4)));
  /* f4dec: sub x1, x29, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* f4df0: str w20, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 20));
  /* f4df4: str w8, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 8));
  /* f4df8: bl #0x1d5dc0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1003004));
  fn2_1d5dc0(c);
  /* f4dfc: add x0, x19, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(24)));
  /* f4e00: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* f4e04: str wzr, [x19, #0x14] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(20)), ARC_W_R(c, 31));
  /* f4e08: bl #0x1d06b8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1003020));
  fn2_1d06b8(c);
  /* f4e0c: add x0, x19, #0xc */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(12)));
  /* f4e10: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* f4e14: str w20, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 20));
  /* f4e18: bl #0x1d5dc0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1003036));
  fn2_1d5dc0(c);
  /* f4e1c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* f4e20: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1003044));
  fn2_1d2d24(c);
  /* f4e24: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* f4e28: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1003052));
  fn2_1ccd9c(c);
  /* f4e2c: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* f4e30: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1003060));
  fn2_1d2d24(c);
  /* f4e34: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* f4e38: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* f4e3c: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* f4e40: ret  */
  return;
L_f4e44:;
  /* f4e44: add x0, x19, #4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(4)));
  /* f4e48: str wzr, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 31));
  /* f4e4c: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1003088));
  fn2_1d2c2c(c);
  /* f4e50: add x0, x19, #0xc */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(12)));
  /* f4e54: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1003096));
  fn2_1d2c2c(c);
  /* f4e58: add x0, x19, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(24)));
  /* f4e5c: str wzr, [x19, #0x14] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(20)), ARC_W_R(c, 31));
  /* f4e60: bl #0x1ccc74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1003108));
  fn2_1ccc74(c);
  /* f4e64: mov w8, #6 */
  ARC_W_W(c, 8, UINT64_C(6));
  /* f4e68: sub x1, x29, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* f4e6c: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* f4e70: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* f4e74: str w8, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 8));
  /* f4e78: stur wzr, [x29, #-8] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-8)), ARC_W_R(c, 31));
  /* f4e7c: bl #0xb4168 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1003136));
  fn2_b4168(c);
  /* f4e80: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* f4e84: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* f4e88: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* f4e8c: ret  */
  return;
}

void fn2_f606c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076863596));
  /* f606c: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* f6070: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* f6074: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* f6078: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f607c: bl #0x1b6040 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1007744));
  fn2_1b6040(c);
  /* f6080: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f6084: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* f6088: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* f608c: b #0x24b730 */
  fn2_24b730(c); return;
}

void fn2_fcee8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076891880));
  /* fcee8: sub sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(96)));
  /* fceec: stp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* fcef0: str x21, [sp, #0x40] */
  arc_st64(((c)->sp + INT64_C(64)), ARC_X_R(c, 21));
  /* fcef4: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* fcef8: add x29, sp, #0x30 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(48)));
  /* fcefc: ldp x21, x8, [x0, #0x60] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(96));
    ARC_X_W(c, 21, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* fcf00: mov x19, x3 */
  ARC_X_W(c, 19, ARC_X_R(c, 3));
  /* fcf04: add x20, x1, x8, asr #1 */
  ARC_X_W(c, 20, (ARC_X_R(c, 1) + ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> 1))));
  /* fcf08: tbz w8, #0, #0xfcf14 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_fcf14;
  /* fcf0c: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* fcf10: ldr x21, [x8, x21] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 8) + ARC_X_R(c, 21))));
L_fcf14:;
  /* fcf14: ldr x1, [x2] */
  ARC_X_W(c, 1, arc_ld64(ARC_X_R(c, 2)));
  /* fcf18: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* fcf1c: bl #0x1bc0b8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1036064));
  fn2_1bc0b8(c);
  /* fcf20: sub x8, x29, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* fcf24: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* fcf28: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* fcf2c: blr x21 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1036080));
  arc_dispatch(c, ARC_X_R(c, 21));
  /* fcf30: sub x1, x29, #0x10 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* fcf34: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* fcf38: bl #0x1e3bbc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1036092));
  fn2_1e3bbc(c);
  /* fcf3c: sub x0, x29, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* fcf40: bl #0x1e3484 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1036100));
  fn2_1e3484(c);
  /* fcf44: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* fcf48: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1036108));
  fn2_1bc620(c);
  /* fcf4c: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* fcf50: ldr x21, [sp, #0x40] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(64))));
  /* fcf54: ldp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* fcf58: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* fcf5c: ret  */
  return;
}

void fn2_1288d8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077070552));
  /* 1288d8: sub sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(48)));
  /* 1288dc: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1288e0: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1288e4: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1288e8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1288ec: bl #0x1afcb8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1214704));
  fn2_1afcb8(c);
  /* 1288f0: adrp x8, #0x257000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 1288f4: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 1288f8: ldr x8, [x8, #0xfd8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(4056))));
  /* 1288fc: cbz x8, #0x128904 */
  if ((ARC_X_R(c, 8)) == 0) goto L_128904;
  /* 128900: bl #0x24b760 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1214724));
  fn2_24b760(c);
L_128904:;
  /* 128904: adrp x0, #0x25c000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2473984)));
  /* 128908: add x0, x0, #0xc10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3088)));
  /* 12890c: bl #0x24b770 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1214736));
  fn2_24b770(c);
  /* 128910: adrp x8, #0x257000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 128914: ldr x8, [x8, #0xfe8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(4072))));
  /* 128918: str x20, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 20));
  /* 12891c: cbz x8, #0x128924 */
  if ((ARC_X_R(c, 8)) == 0) goto L_128924;
  /* 128920: bl #0x24b780 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1214756));
  fn2_24b780(c);
L_128924:;
  /* 128924: adrp x0, #0x25c000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2473984)));
  /* 128928: add x0, x0, #0xc30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3120)));
  /* 12892c: bl #0x24b770 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1214768));
  fn2_24b770(c);
  /* 128930: adrp x8, #0x253000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2437120)));
  /* 128934: add x8, x8, #0xbf0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3056)));
  /* 128938: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* 12893c: add x1, x1, #0xb6f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2927)));
  /* 128940: str x8, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* 128944: mov w0, #0x18 */
  ARC_W_W(c, 0, UINT64_C(24));
  /* 128948: mov x2, x1 */
  ARC_X_W(c, 2, ARC_X_R(c, 1));
  /* 12894c: bl #0x1b5d1c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1214800));
  fn2_1b5d1c(c);
  /* 128950: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 128954: adrp x1, #0x23000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(143360)));
  /* 128958: add x1, x1, #0x1e6 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(486)));
  /* 12895c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 128960: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 128964: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1214824));
  fn2_1b8fd4(c);
  /* 128968: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 12896c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 128970: bl #0x1afcfc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1214836));
  fn2_1afcfc(c);
  /* 128974: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 128978: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1214844));
  fn2_1d2d24(c);
  /* 12897c: adrp x8, #0x253000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2437120)));
  /* 128980: add x8, x8, #0xc18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3096)));
  /* 128984: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 128988: str x8, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 8));
  /* 12898c: bl #0x1afe0c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1214864));
  fn2_1afe0c(c);
  /* 128990: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 128994: bl #0x2258f4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1214872));
  fn2_2258f4(c);
  /* 128998: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 12899c: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* 1289a0: tbz w8, #0, #0x1289b8 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1289b8;
  /* 1289a4: cmp x20, x0 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 0));
  /* 1289a8: b.eq #0x1289f0 */
  if (ARC_COND(c, 0)) goto L_1289f0;
  /* 1289ac: cbnz x0, #0x1289c0 */
  if ((ARC_X_R(c, 0)) != 0) goto L_1289c0;
  /* 1289b0: str x20, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 20));
  /* 1289b4: b #0x1289e8 */
  goto L_1289e8;
L_1289b8:;
  /* 1289b8: cbz x0, #0x128a10 */
  if ((ARC_X_R(c, 0)) == 0) goto L_128a10;
  /* 1289bc: mov x20, xzr */
  ARC_X_W(c, 20, ARC_X_R(c, 31));
L_1289c0:;
  /* 1289c0: bl #0x225abc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1214916));
  fn2_225abc(c);
  /* 1289c4: tbz w0, #0, #0x1289e0 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_1289e0;
  /* 1289c8: adrp x9, #0x257000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 1289cc: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 1289d0: ldr x9, [x9, #0xfb0] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(4016))));
  /* 1289d4: ldr x0, [x8, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 1289d8: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* 1289dc: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1214944));
  arc_dispatch(c, ARC_X_R(c, 9));
L_1289e0:;
  /* 1289e0: str x20, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 20));
  /* 1289e4: cbz x20, #0x128a10 */
  if ((ARC_X_R(c, 20)) == 0) goto L_128a10;
L_1289e8:;
  /* 1289e8: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1289ec: bl #0x2259d8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1214960));
  fn2_2259d8(c);
L_1289f0:;
  /* 1289f0: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1289f4: bl #0x225abc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1214968));
  fn2_225abc(c);
  /* 1289f8: tbz w0, #0, #0x128a10 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_128a10;
  /* 1289fc: adrp x8, #0x25d000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 128a00: add x8, x8, #0x7d0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2000)));
  /* 128a04: ldr x0, [x20, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 20) + INT64_C(16))));
  /* 128a08: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 128a0c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1214992));
  arc_dispatch(c, ARC_X_R(c, 8));
L_128a10:;
  /* 128a10: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 128a14: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 128a18: add sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(48)));
  /* 128a1c: ret  */
  return;
}

void fn2_12991c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077074716));
  /* 12991c: ldrb w8, [x1] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 1)));
  /* 129920: strb w8, [x0, #0x69] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(105)), ARC_W_R(c, 8));
  /* 129924: ret  */
  return;
}

void fn2_129a60(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077075040));
  /* 129a60: add x0, x0, #0xd8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(216)));
  /* 129a64: b #0x1d06b8 */
  fn2_1d06b8(c); return;
}

void fn2_129b9c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077075356));
  /* 129b9c: ldr d0, [x1] */
  arc_du_w(c, 0, arc_ld64(ARC_X_R(c, 1)));
  /* 129ba0: str d0, [x0, #0x158] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(344)), (c)->q[0].u64[0]);
  /* 129ba4: ret  */
  return;
}

void fn2_129ce0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077075680));
  /* 129ce0: add x0, x0, #0x1ca */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(458)));
  /* 129ce4: b #0x1d06b8 */
  fn2_1d06b8(c); return;
}

void fn2_129e20(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077076000));
  /* 129e20: add x0, x0, #0x230 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(560)));
  /* 129e24: b #0x1da22c */
  fn2_1da22c(c); return;
}

void fn2_129f5c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077076316));
  /* 129f5c: ldr x8, [x1] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 1)));
  /* 129f60: str x8, [x0, #0x2b8] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(696)), ARC_X_R(c, 8));
  /* 129f64: ret  */
  return;
}

void fn2_12a0a0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077076640));
  /* 12a0a0: add x0, x0, #0x348 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(840)));
  /* 12a0a4: b #0x1da22c */
  fn2_1da22c(c); return;
}

void fn2_12a1dc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077076956));
  /* 12a1dc: ldr x8, [x1] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 1)));
  /* 12a1e0: str x8, [x0, #0x3c8] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(968)), ARC_X_R(c, 8));
  /* 12a1e4: ret  */
  return;
}

void fn2_12a31c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077077276));
  /* 12a31c: ldr x8, [x1] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 1)));
  /* 12a320: str x8, [x0, #0x458] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(1112)), ARC_X_R(c, 8));
  /* 12a324: ret  */
  return;
}

void fn2_12adcc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077080012));
  /* 12adcc: mov w0, #0x1c */
  ARC_W_W(c, 0, UINT64_C(28));
  /* 12add0: ret  */
  return;
}

void fn2_12c338(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077085496));
  /* 12c338: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 12c33c: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 12c340: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 12c344: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 12c348: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 12c34c: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* 12c350: add x1, x1, #0xb6f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2927)));
  /* 12c354: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 12c358: mov w0, #0x70 */
  ARC_W_W(c, 0, UINT64_C(112));
  /* 12c35c: mov x2, x1 */
  ARC_X_W(c, 2, ARC_X_R(c, 1));
  /* 12c360: bl #0x1b5d1c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1229668));
  fn2_1b5d1c(c);
  /* 12c364: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 12c368: mov w9, #1 */
  ARC_W_W(c, 9, UINT64_C(1));
  /* 12c36c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 12c370: ldr x8, [x8, #0x40] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(64))));
  /* 12c374: str w9, [x0, #8] */
  arc_st32((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 9));
  /* 12c378: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* 12c37c: str x8, [x0], #0xc */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(12));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* 12c380: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1229700));
  fn2_1d2c2c(c);
  /* 12c384: add x0, x19, #0x14 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(20)));
  /* 12c388: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1229708));
  fn2_1d2c2c(c);
  /* 12c38c: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* 12c390: adrp x8, #0x250000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2424832)));
  /* 12c394: add x8, x8, #0xbe0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3040)));
  /* 12c398: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 12c39c: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* 12c3a0: stur xzr, [x19, #0x1c] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(28)), ARC_X_R(c, 31));
  /* 12c3a4: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* 12c3a8: stp xzr, x21, [x19, #0x58] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(88));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 12c3ac: stur q0, [x19, #0x28] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(40)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(40)) + 8, (c)->q[0].u64[1]);
  /* 12c3b0: stur q0, [x19, #0x38] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(56)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(56)) + 8, (c)->q[0].u64[1]);
  /* 12c3b4: stur q0, [x19, #0x48] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(72)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(72)) + 8, (c)->q[0].u64[1]);
  /* 12c3b8: str x20, [x19, #0x68] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(104)), ARC_X_R(c, 20));
  /* 12c3bc: bl #0x1b5e68 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1229760));
  fn2_1b5e68(c);
  /* 12c3c0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 12c3c4: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* 12c3c8: str wzr, [x19, #0x1c] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(28)), ARC_W_R(c, 31));
  /* 12c3cc: bl #0x1b5d9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1229776));
  fn2_1b5d9c(c);
  /* 12c3d0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 12c3d4: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* 12c3d8: bl #0x1b5d8c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1229788));
  fn2_1b5d8c(c);
  /* 12c3dc: adrp x8, #0x25d000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 12c3e0: add x8, x8, #0x1c8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(456)));
  /* 12c3e4: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 12c3e8: tbz w8, #0, #0x12c424 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_12c424;
L_12c3ec:;
  /* 12c3ec: adrp x1, #0x25d000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 12c3f0: add x1, x1, #0x1bc */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(444)));
  /* 12c3f4: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 12c3f8: bl #0x1d2c40 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1229820));
  fn2_1d2c40(c);
  /* 12c3fc: add x0, x19, #0x14 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(20)));
  /* 12c400: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 12c404: bl #0x1d5dc0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1229832));
  fn2_1d5dc0(c);
  /* 12c408: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 12c40c: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1229840));
  fn2_1d2d24(c);
  /* 12c410: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 12c414: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 12c418: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 12c41c: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 12c420: ret  */
  return;
L_12c424:;
  /* 12c424: adrp x0, #0x25d000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 12c428: add x0, x0, #0x1c8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(456)));
  /* 12c42c: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1229872));
  fn2_24b710(c);
  /* 12c430: cbz w0, #0x12c3ec */
  if ((ARC_W_R(c, 0)) == 0) goto L_12c3ec;
  /* 12c434: adrp x20, #0x25d000 */
  ARC_X_W(c, 20, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 12c438: add x20, x20, #0x1bc */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) + UINT64_C(444)));
  /* 12c43c: nop  */
  /* nop: no architectural effect here */
  /* 12c440: adr x1, #0x363e8 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(222184)));
  /* 12c444: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 12c448: bl #0x1b907c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1229900));
  fn2_1b907c(c);
  /* 12c44c: adrp x0, #0x257000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 12c450: adrp x2, #0x24f000 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(2420736)));
  /* 12c454: add x2, x2, #0x980 */
  ARC_X_W(c, 2, (ARC_X_R(c, 2) + UINT64_C(2432)));
  /* 12c458: ldr x0, [x0, #0xf88] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(3976))));
  /* 12c45c: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 12c460: bl #0x24b6f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1229924));
  fn2_24b6f0(c);
  /* 12c464: adrp x0, #0x25d000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 12c468: add x0, x0, #0x1c8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(456)));
  /* 12c46c: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1229936));
  fn2_24b720(c);
  /* 12c470: b #0x12c3ec */
  goto L_12c3ec;
}

void fn2_12d6d8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077090520));
  /* 12d6d8: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 12d6dc: str x23, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 23));
  /* 12d6e0: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 12d6e4: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 12d6e8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 12d6ec: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 12d6f0: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 12d6f4: mov x19, x4 */
  ARC_X_W(c, 19, ARC_X_R(c, 4));
  /* 12d6f8: mov x20, x3 */
  ARC_X_W(c, 20, ARC_X_R(c, 3));
  /* 12d6fc: mov x21, x2 */
  ARC_X_W(c, 21, ARC_X_R(c, 2));
  /* 12d700: mov x23, x8 */
  ARC_X_W(c, 23, ARC_X_R(c, 8));
  /* 12d704: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1234696));
  fn2_1bc084(c);
  /* 12d708: ldr x0, [x22, #0x60] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 22) + INT64_C(96))));
  /* 12d70c: add x5, x22, #0x48 */
  ARC_X_W(c, 5, (ARC_X_R(c, 22) + UINT64_C(72)));
  /* 12d710: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 12d714: mov w2, w20 */
  ARC_W_W(c, 2, ARC_W_R(c, 20));
  /* 12d718: mov x3, x23 */
  ARC_X_W(c, 3, ARC_X_R(c, 23));
  /* 12d71c: mov x4, x19 */
  ARC_X_W(c, 4, ARC_X_R(c, 19));
  /* 12d720: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 12d724: ldr x23, [sp, #0x10] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(16))));
  /* 12d728: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 12d72c: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 12d730: b #0x12d7b4 */
  fn2_12d7b4(c); return;
}

void fn2_12eb10(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077095696));
  /* 12eb10: cmp w1, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 1), UINT64_C(1));
  /* 12eb14: mov w8, #3 */
  ARC_W_W(c, 8, UINT64_C(3));
  /* 12eb18: cset w9, eq */
  ARC_W_W(c, 9, (ARC_COND(c, 0) ? 1 : 0));
  /* 12eb1c: cmp w1, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 1), UINT64_C(2));
  /* 12eb20: lsl w9, w9, #2 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 9)) << ((UINT64_C(2)) & 31)));
  /* 12eb24: csel w8, w8, w9, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* 12eb28: cmp w1, #3 */
  (void)arc_sub32(c, ARC_W_R(c, 1), UINT64_C(3));
  /* 12eb2c: csel w0, w8, wzr, lo */
  ARC_W_W(c, 0, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 31)));
  /* 12eb30: ret  */
  return;
}

void fn2_12fee8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077100776));
  /* 12fee8: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 12feec: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 12fef0: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 12fef4: ldp x9, x8, [x0, #0x60] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(96));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* 12fef8: mov x19, x3 */
  ARC_X_W(c, 19, ARC_X_R(c, 3));
  /* 12fefc: add x0, x1, x8, asr #1 */
  ARC_X_W(c, 0, (ARC_X_R(c, 1) + ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> 1))));
  /* 12ff00: tbz w8, #0, #0x12ff0c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_12ff0c;
  /* 12ff04: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 12ff08: ldr x9, [x8, x9] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + ARC_X_R(c, 9))));
L_12ff0c:;
  /* 12ff0c: ldr x8, [x2] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 2)));
  /* 12ff10: ldrb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 12ff14: cmp w8, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(0));
  /* 12ff18: add x8, x29, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 12ff1c: cset w1, ne */
  ARC_W_W(c, 1, (ARC_COND(c, 1) ? 1 : 0));
  /* 12ff20: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1244964));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 12ff24: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 12ff28: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 12ff2c: bl #0x1d06b8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1244976));
  fn2_1d06b8(c);
  /* 12ff30: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 12ff34: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1244984));
  fn2_1ccd9c(c);
  /* 12ff38: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 12ff3c: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 12ff40: ret  */
  return;
}

void fn2_1316d8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077106904));
  /* 1316d8: sub sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(112)));
  /* 1316dc: stp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1316e0: stp x24, x23, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 1316e4: stp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1316e8: stp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1316ec: add x29, sp, #0x30 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(48)));
  /* 1316f0: add x20, x0, x2, asr #1 */
  ARC_X_W(c, 20, (ARC_X_R(c, 0) + ((uint64_t)((int64_t)(ARC_X_R(c, 2)) >> 1))));
  /* 1316f4: mov x21, x3 */
  ARC_X_W(c, 21, ARC_X_R(c, 3));
  /* 1316f8: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 1316fc: tbz w2, #0, #0x131708 */
  if (((ARC_W_R(c, 2)) >> 0 & 1) == 0) goto L_131708;
  /* 131700: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 131704: ldr x19, [x8, x19] */
  ARC_X_W(c, 19, arc_ld64((ARC_X_R(c, 8) + ARC_X_R(c, 19))));
L_131708:;
  /* 131708: ldp x8, x1, [x21] */
  { const uint64_t _pa = ARC_X_R(c, 21);
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 1, arc_ld64(_pa + 8));
  }
  /* 13170c: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 131710: ldr x22, [x8] */
  ARC_X_W(c, 22, arc_ld64(ARC_X_R(c, 8)));
  /* 131714: bl #0x1db4b8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1251096));
  fn2_1db4b8(c);
  /* 131718: ldr x1, [x21, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 21) + INT64_C(16))));
  /* 13171c: sub x0, x29, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* 131720: bl #0x1d9754 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1251108));
  fn2_1d9754(c);
  /* 131724: ldp x8, x9, [x21, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 131728: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* 13172c: ldr x1, [x21, #0x28] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 21) + INT64_C(40))));
  /* 131730: ldrb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 131734: ldr x23, [x9] */
  ARC_X_W(c, 23, arc_ld64(ARC_X_R(c, 9)));
  /* 131738: cmp w8, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(0));
  /* 13173c: cset w24, ne */
  ARC_W_W(c, 24, (ARC_COND(c, 1) ? 1 : 0));
  /* 131740: bl #0x1ccc88 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1251140));
  fn2_1ccc88(c);
  /* 131744: ldr x1, [x21, #0x30] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 21) + INT64_C(48))));
  /* 131748: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 13174c: bl #0x1ccc88 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1251152));
  fn2_1ccc88(c);
  /* 131750: ldr x1, [x21, #0x38] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 21) + INT64_C(56))));
  /* 131754: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 131758: add x21, sp, #8 */
  ARC_X_W(c, 21, ((c)->sp + UINT64_C(8)));
  /* 13175c: bl #0x1db4b8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1251168));
  fn2_1db4b8(c);
  /* 131760: sub x2, x29, #8 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 131764: sub x3, x29, #0x10 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* 131768: add x6, sp, #0x18 */
  ARC_X_W(c, 6, ((c)->sp + UINT64_C(24)));
  /* 13176c: add x7, sp, #0x10 */
  ARC_X_W(c, 7, ((c)->sp + UINT64_C(16)));
  /* 131770: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 131774: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 131778: mov w4, w24 */
  ARC_W_W(c, 4, ARC_W_R(c, 24));
  /* 13177c: mov x5, x23 */
  ARC_X_W(c, 5, ARC_X_R(c, 23));
  /* 131780: str x21, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 21));
  /* 131784: blr x19 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1251208));
  arc_dispatch(c, ARC_X_R(c, 19));
  /* 131788: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 13178c: bl #0x1db788 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1251216));
  fn2_1db788(c);
  /* 131790: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 131794: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1251224));
  fn2_1ccd9c(c);
  /* 131798: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* 13179c: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1251232));
  fn2_1ccd9c(c);
  /* 1317a0: sub x0, x29, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* 1317a4: bl #0x1d97fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1251240));
  fn2_1d97fc(c);
  /* 1317a8: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 1317ac: bl #0x1db788 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1251248));
  fn2_1db788(c);
  /* 1317b0: ldp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1317b4: ldp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1317b8: ldp x24, x23, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 1317bc: ldp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1317c0: add sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(112)));
  /* 1317c4: ret  */
  return;
}

void fn2_132e5c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077112924));
  /* 132e5c: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 132e60: ret  */
  return;
}

void fn2_1344c4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077118660));
  /* 1344c4: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 1344c8: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1344cc: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1344d0: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 1344d4: cmp w1, #3 */
  (void)arc_sub32(c, ARC_W_R(c, 1), UINT64_C(3));
  /* 1344d8: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* 1344dc: b.hi #0x134560 */
  if (ARC_COND(c, 8)) goto L_134560;
  /* 1344e0: add x0, x19, #4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(4)));
  /* 1344e4: mov w20, w1 */
  ARC_W_W(c, 20, ARC_W_R(c, 1));
  /* 1344e8: str wzr, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 31));
  /* 1344ec: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1262832));
  fn2_1d2c2c(c);
  /* 1344f0: add x0, x19, #0xc */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(12)));
  /* 1344f4: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1262840));
  fn2_1d2c2c(c);
  /* 1344f8: add x0, x19, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(24)));
  /* 1344fc: str wzr, [x19, #0x14] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(20)), ARC_W_R(c, 31));
  /* 134500: bl #0x1ccc74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1262852));
  fn2_1ccc74(c);
  /* 134504: mov w8, #6 */
  ARC_W_W(c, 8, UINT64_C(6));
  /* 134508: sub x1, x29, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 13450c: mov w0, w20 */
  ARC_W_W(c, 0, ARC_W_R(c, 20));
  /* 134510: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* 134514: str w8, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 8));
  /* 134518: stur wzr, [x29, #-8] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-8)), ARC_W_R(c, 31));
  /* 13451c: bl #0xb4168 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1262880));
  fn2_b4168(c);
  /* 134520: sub x1, x29, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 134524: mov w0, w20 */
  ARC_W_W(c, 0, ARC_W_R(c, 20));
  /* 134528: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* 13452c: bl #0xb2de4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1262896));
  fn2_b2de4(c);
  /* 134530: sub x1, x29, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 134534: mov w0, w20 */
  ARC_W_W(c, 0, ARC_W_R(c, 20));
  /* 134538: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* 13453c: bl #0xb2de4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1262912));
  fn2_b2de4(c);
  /* 134540: sub x1, x29, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 134544: mov w0, w20 */
  ARC_W_W(c, 0, ARC_W_R(c, 20));
  /* 134548: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* 13454c: bl #0xb1d4c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1262928));
  fn2_b1d4c(c);
  /* 134550: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 134554: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 134558: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 13455c: ret  */
  return;
L_134560:;
  /* 134560: adrp x20, #0x1e000 */
  ARC_X_W(c, 20, (arc_image_bases[2] + UINT64_C(122880)));
  /* 134564: add x20, x20, #0xb6f */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) + UINT64_C(2927)));
  /* 134568: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 13456c: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 134570: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 134574: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1262968));
  fn2_1b8fd4(c);
  /* 134578: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 13457c: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 134580: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1262980));
  fn2_1b7d24(c);
  /* 134584: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 134588: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 13458c: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 134590: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1262996));
  fn2_1b8fd4(c);
  /* 134594: add x0, x19, #4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(4)));
  /* 134598: str wzr, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 31));
  /* 13459c: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1263008));
  fn2_1d2c2c(c);
  /* 1345a0: add x0, x19, #0xc */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(12)));
  /* 1345a4: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1263016));
  fn2_1d2c2c(c);
  /* 1345a8: add x0, x19, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(24)));
  /* 1345ac: str wzr, [x19, #0x14] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(20)), ARC_W_R(c, 31));
  /* 1345b0: bl #0x1ccc74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1263028));
  fn2_1ccc74(c);
  /* 1345b4: mov w20, #6 */
  ARC_W_W(c, 20, UINT64_C(6));
  /* 1345b8: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 1345bc: add x0, x19, #4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(4)));
  /* 1345c0: sub x1, x29, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 1345c4: str w20, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 20));
  /* 1345c8: str w8, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 8));
  /* 1345cc: bl #0x1d5dc0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1263056));
  fn2_1d5dc0(c);
  /* 1345d0: add x0, x19, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(24)));
  /* 1345d4: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* 1345d8: str wzr, [x19, #0x14] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(20)), ARC_W_R(c, 31));
  /* 1345dc: bl #0x1d06b8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1263072));
  fn2_1d06b8(c);
  /* 1345e0: add x0, x19, #0xc */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(12)));
  /* 1345e4: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 1345e8: str w20, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 20));
  /* 1345ec: bl #0x1d5dc0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1263088));
  fn2_1d5dc0(c);
  /* 1345f0: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1345f4: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1263096));
  fn2_1d2d24(c);
  /* 1345f8: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 1345fc: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1263104));
  fn2_1ccd9c(c);
  /* 134600: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 134604: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1263112));
  fn2_1d2d24(c);
  /* 134608: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 13460c: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 134610: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 134614: ret  */
  return;
}

void fn2_1358ac(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077123756));
  /* 1358ac: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1358b0: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 1358b4: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1358b8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1358bc: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 1358c0: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* 1358c4: add x1, x1, #0xb6f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2927)));
  /* 1358c8: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 1358cc: mov w0, #0x70 */
  ARC_W_W(c, 0, UINT64_C(112));
  /* 1358d0: mov x2, x1 */
  ARC_X_W(c, 2, ARC_X_R(c, 1));
  /* 1358d4: bl #0x1b5d1c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1267928));
  fn2_1b5d1c(c);
  /* 1358d8: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1358dc: mov w9, #1 */
  ARC_W_W(c, 9, UINT64_C(1));
  /* 1358e0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1358e4: ldr x8, [x8, #0x40] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(64))));
  /* 1358e8: str w9, [x0, #8] */
  arc_st32((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 9));
  /* 1358ec: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* 1358f0: str x8, [x0], #0xc */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(12));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* 1358f4: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1267960));
  fn2_1d2c2c(c);
  /* 1358f8: add x0, x19, #0x14 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(20)));
  /* 1358fc: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1267968));
  fn2_1d2c2c(c);
  /* 135900: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* 135904: adrp x8, #0x254000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2441216)));
  /* 135908: add x8, x8, #0x798 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1944)));
  /* 13590c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 135910: mov w1, #2 */
  ARC_W_W(c, 1, UINT64_C(2));
  /* 135914: stur xzr, [x19, #0x1c] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(28)), ARC_X_R(c, 31));
  /* 135918: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* 13591c: stp xzr, x21, [x19, #0x58] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(88));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 135920: stur q0, [x19, #0x28] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(40)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(40)) + 8, (c)->q[0].u64[1]);
  /* 135924: stur q0, [x19, #0x38] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(56)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(56)) + 8, (c)->q[0].u64[1]);
  /* 135928: stur q0, [x19, #0x48] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(72)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(72)) + 8, (c)->q[0].u64[1]);
  /* 13592c: str x20, [x19, #0x68] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(104)), ARC_X_R(c, 20));
  /* 135930: mov w20, #2 */
  ARC_W_W(c, 20, UINT64_C(2));
  /* 135934: bl #0x1b5e68 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1268024));
  fn2_1b5e68(c);
  /* 135938: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 13593c: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* 135940: str w20, [x19, #0x1c] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(28)), ARC_W_R(c, 20));
  /* 135944: bl #0x1b5d9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1268040));
  fn2_1b5d9c(c);
  /* 135948: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 13594c: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* 135950: bl #0x1b5d8c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1268052));
  fn2_1b5d8c(c);
  /* 135954: adrp x8, #0x25d000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 135958: add x8, x8, #0x1c8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(456)));
  /* 13595c: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 135960: tbz w8, #0, #0x13599c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13599c;
L_135964:;
  /* 135964: adrp x1, #0x25d000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 135968: add x1, x1, #0x1bc */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(444)));
  /* 13596c: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 135970: bl #0x1d2c40 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1268084));
  fn2_1d2c40(c);
  /* 135974: add x0, x19, #0x14 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(20)));
  /* 135978: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 13597c: bl #0x1d5dc0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1268096));
  fn2_1d5dc0(c);
  /* 135980: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 135984: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1268104));
  fn2_1d2d24(c);
  /* 135988: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 13598c: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 135990: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 135994: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 135998: ret  */
  return;
L_13599c:;
  /* 13599c: adrp x0, #0x25d000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 1359a0: add x0, x0, #0x1c8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(456)));
  /* 1359a4: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1268136));
  fn2_24b710(c);
  /* 1359a8: cbz w0, #0x135964 */
  if ((ARC_W_R(c, 0)) == 0) goto L_135964;
  /* 1359ac: adrp x20, #0x25d000 */
  ARC_X_W(c, 20, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 1359b0: add x20, x20, #0x1bc */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) + UINT64_C(444)));
  /* 1359b4: nop  */
  /* nop: no architectural effect here */
  /* 1359b8: adr x1, #0x363e8 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(222184)));
  /* 1359bc: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1359c0: bl #0x1b907c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1268164));
  fn2_1b907c(c);
  /* 1359c4: adrp x0, #0x257000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 1359c8: adrp x2, #0x24f000 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(2420736)));
  /* 1359cc: add x2, x2, #0x980 */
  ARC_X_W(c, 2, (ARC_X_R(c, 2) + UINT64_C(2432)));
  /* 1359d0: ldr x0, [x0, #0xf88] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(3976))));
  /* 1359d4: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 1359d8: bl #0x24b6f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1268188));
  fn2_24b6f0(c);
  /* 1359dc: adrp x0, #0x25d000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 1359e0: add x0, x0, #0x1c8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(456)));
  /* 1359e4: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1268200));
  fn2_24b720(c);
  /* 1359e8: b #0x135964 */
  goto L_135964;
}

void fn2_136c64(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077128804));
  /* 136c64: sub sp, sp, #0xb0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(176)));
  /* 136c68: str d8, [sp, #0x50] */
  arc_st64(((c)->sp + INT64_C(80)), (c)->q[8].u64[0]);
  /* 136c6c: stp x29, x30, [sp, #0x58] */
  { const uint64_t _pa = ((c)->sp + INT64_C(88));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 136c70: str x27, [sp, #0x68] */
  arc_st64(((c)->sp + INT64_C(104)), ARC_X_R(c, 27));
  /* 136c74: stp x26, x25, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* 136c78: stp x24, x23, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 136c7c: stp x22, x21, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 136c80: stp x20, x19, [sp, #0xa0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(160));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 136c84: add x29, sp, #0x58 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(88)));
  /* 136c88: ldp x9, x8, [x6] */
  { const uint64_t _pa = ARC_X_R(c, 6);
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* 136c8c: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 136c90: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 136c94: mov x23, x6 */
  ARC_X_W(c, 23, ARC_X_R(c, 6));
  /* 136c98: mov x20, x5 */
  ARC_X_W(c, 20, ARC_X_R(c, 5));
  /* 136c9c: mov w25, w4 */
  ARC_W_W(c, 25, ARC_W_R(c, 4));
  /* 136ca0: mov x24, x3 */
  ARC_X_W(c, 24, ARC_X_R(c, 3));
  /* 136ca4: mov x21, x2 */
  ARC_X_W(c, 21, ARC_X_R(c, 2));
  /* 136ca8: sub x8, x8, x9 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) - ARC_X_R(c, 9)));
  /* 136cac: mov x9, #-0x5555555555555556 */
  ARC_X_W(c, 9, UINT64_C(12297829382473034410));
  /* 136cb0: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 136cb4: asr x8, x8, #3 */
  ARC_X_W(c, 8, ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(3)) & 63))));
  /* 136cb8: movk x9, #0xaaab */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(18446744073709486080)) | UINT64_C(43691)));
  /* 136cbc: add x26, sp, #0x20 */
  ARC_X_W(c, 26, ((c)->sp + UINT64_C(32)));
  /* 136cc0: mul x27, x8, x9 */
  ARC_X_W(c, 27, ((uint64_t)(ARC_X_R(c, 8)) * (uint64_t)(ARC_X_R(c, 9))));
  /* 136cc4: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1273032));
  fn2_1bc084(c);
  /* 136cc8: add x0, x26, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 26) + UINT64_C(24)));
  /* 136ccc: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1273040));
  fn2_1bc084(c);
  /* 136cd0: cmp w25, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 25), UINT64_C(0));
  /* 136cd4: b.le #0x136d30 */
  if (ARC_COND(c, 13)) goto L_136d30;
  /* 136cd8: ldr x1, [x24] */
  ARC_X_W(c, 1, arc_ld64(ARC_X_R(c, 24)));
  /* 136cdc: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 136ce0: bl #0x1bc09c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1273060));
  fn2_1bc09c(c);
  /* 136ce4: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 136ce8: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 136cec: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1273072));
  fn2_1bcf04(c);
  /* 136cf0: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 136cf4: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1273080));
  fn2_1bc620(c);
  /* 136cf8: cmp w25, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 25), UINT64_C(1));
  /* 136cfc: b.eq #0x136d4c */
  if (ARC_COND(c, 0)) goto L_136d4c;
  /* 136d00: ldr x1, [x24, #8] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 24) + INT64_C(8))));
  /* 136d04: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 136d08: bl #0x1bc09c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1273100));
  fn2_1bc09c(c);
  /* 136d0c: add x0, x26, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 26) + UINT64_C(24)));
  /* 136d10: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 136d14: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1273112));
  fn2_1bcf04(c);
  /* 136d18: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 136d1c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1273120));
  fn2_1bc620(c);
  /* 136d20: add x22, x22, x21, asr #1 */
  ARC_X_W(c, 22, (ARC_X_R(c, 22) + ((uint64_t)((int64_t)(ARC_X_R(c, 21)) >> 1))));
  /* 136d24: str wzr, [x20] */
  arc_st32(ARC_X_R(c, 20), ARC_W_R(c, 31));
  /* 136d28: tbnz w21, #0, #0x136d74 */
  if (((ARC_W_R(c, 21)) >> 0 & 1) != 0) goto L_136d74;
  /* 136d2c: b #0x136d7c */
  goto L_136d7c;
L_136d30:;
  /* 136d30: sub w8, w27, #2 */
  ARC_W_W(c, 8, (ARC_W_R(c, 27) - UINT64_C(2)));
  /* 136d34: mov w9, #0x18 */
  ARC_W_W(c, 9, UINT64_C(24));
  /* 136d38: ldr x10, [x23] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 23)));
  /* 136d3c: nop  */
  /* nop: no architectural effect here */
  /* 136d40: smaddl x1, w8, w9, x10 */
  ARC_X_W(c, 1, (((int64_t)(ARC_X_R(c, 10))) + (((int64_t)(int32_t)(ARC_W_R(c, 8))) * ((int64_t)(int32_t)(ARC_W_R(c, 9))))));
  /* 136d44: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 136d48: bl #0x1bce10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1273164));
  fn2_1bce10(c);
L_136d4c:;
  /* 136d4c: sub w8, w27, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 27) - UINT64_C(1)));
  /* 136d50: mov w9, #0x18 */
  ARC_W_W(c, 9, UINT64_C(24));
  /* 136d54: ldr x10, [x23] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 23)));
  /* 136d58: nop  */
  /* nop: no architectural effect here */
  /* 136d5c: smaddl x1, w8, w9, x10 */
  ARC_X_W(c, 1, (((int64_t)(ARC_X_R(c, 10))) + (((int64_t)(int32_t)(ARC_W_R(c, 8))) * ((int64_t)(int32_t)(ARC_W_R(c, 9))))));
  /* 136d60: add x0, x26, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 26) + UINT64_C(24)));
  /* 136d64: bl #0x1bce10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1273192));
  fn2_1bce10(c);
  /* 136d68: add x22, x22, x21, asr #1 */
  ARC_X_W(c, 22, (ARC_X_R(c, 22) + ((uint64_t)((int64_t)(ARC_X_R(c, 21)) >> 1))));
  /* 136d6c: str wzr, [x20] */
  arc_st32(ARC_X_R(c, 20), ARC_W_R(c, 31));
  /* 136d70: tbz w21, #0, #0x136d7c */
  if (((ARC_W_R(c, 21)) >> 0 & 1) == 0) goto L_136d7c;
L_136d74:;
  /* 136d74: ldr x8, [x22] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 22)));
  /* 136d78: ldr x19, [x8, x19] */
  ARC_X_W(c, 19, arc_ld64((ARC_X_R(c, 8) + ARC_X_R(c, 19))));
L_136d7c:;
  /* 136d7c: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 136d80: add x20, sp, #0x20 */
  ARC_X_W(c, 20, ((c)->sp + UINT64_C(32)));
  /* 136d84: bl #0x1bc7e8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1273224));
  fn2_1bc7e8(c);
  /* 136d88: add x0, x26, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 26) + UINT64_C(24)));
  /* 136d8c: fmov d8, d0 */
  arc_du_w(c, 8, (uint64_t)(ARC_DU_R(c, 0)));
  /* 136d90: bl #0x1bc7e8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1273236));
  fn2_1bc7e8(c);
  /* 136d94: fmov d1, d0 */
  arc_du_w(c, 1, (uint64_t)(ARC_DU_R(c, 0)));
  /* 136d98: fmov d0, d8 */
  arc_du_w(c, 0, (uint64_t)(ARC_DU_R(c, 8)));
  /* 136d9c: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 136da0: blr x19 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1273252));
  arc_dispatch(c, ARC_X_R(c, 19));
  /* 136da4: add x0, x20, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(24)));
  /* 136da8: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1273260));
  fn2_1bc620(c);
  /* 136dac: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 136db0: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1273268));
  fn2_1bc620(c);
  /* 136db4: ldp x20, x19, [sp, #0xa0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(160));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 136db8: ldr x27, [sp, #0x68] */
  ARC_X_W(c, 27, arc_ld64(((c)->sp + INT64_C(104))));
  /* 136dbc: ldp x22, x21, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 136dc0: ldr d8, [sp, #0x50] */
  arc_du_w(c, 8, arc_ld64(((c)->sp + INT64_C(80))));
  /* 136dc4: ldp x24, x23, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 136dc8: ldp x26, x25, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* 136dcc: ldp x29, x30, [sp, #0x58] */
  { const uint64_t _pa = ((c)->sp + INT64_C(88));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 136dd0: add sp, sp, #0xb0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(176)));
  /* 136dd4: ret  */
  return;
}

void fn2_137f98(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077133720));
  /* 137f98: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 137f9c: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 137fa0: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 137fa4: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 137fa8: bl #0x1b6040 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1277868));
  fn2_1b6040(c);
  /* 137fac: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 137fb0: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 137fb4: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 137fb8: b #0x24b730 */
  fn2_24b730(c); return;
}

void fn2_139548(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077139272));
  /* 139548: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 13954c: str x23, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 23));
  /* 139550: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 139554: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 139558: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 13955c: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 139560: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 139564: mov x19, x4 */
  ARC_X_W(c, 19, ARC_X_R(c, 4));
  /* 139568: mov x20, x3 */
  ARC_X_W(c, 20, ARC_X_R(c, 3));
  /* 13956c: mov x21, x2 */
  ARC_X_W(c, 21, ARC_X_R(c, 2));
  /* 139570: mov x23, x8 */
  ARC_X_W(c, 23, ARC_X_R(c, 8));
  /* 139574: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1283448));
  fn2_1bc084(c);
  /* 139578: ldr x0, [x22, #0x60] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 22) + INT64_C(96))));
  /* 13957c: add x5, x22, #0x48 */
  ARC_X_W(c, 5, (ARC_X_R(c, 22) + UINT64_C(72)));
  /* 139580: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 139584: mov w2, w20 */
  ARC_W_W(c, 2, ARC_W_R(c, 20));
  /* 139588: mov x3, x23 */
  ARC_X_W(c, 3, ARC_X_R(c, 23));
  /* 13958c: mov x4, x19 */
  ARC_X_W(c, 4, ARC_X_R(c, 19));
  /* 139590: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 139594: ldr x23, [sp, #0x10] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(16))));
  /* 139598: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 13959c: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1395a0: b #0x139648 */
  fn2_139648(c); return;
}

void fn2_13a948(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077144392));
  /* 13a948: sub sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(96)));
  /* 13a94c: stp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 13a950: str x21, [sp, #0x40] */
  arc_st64(((c)->sp + INT64_C(64)), ARC_X_R(c, 21));
  /* 13a954: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 13a958: add x29, sp, #0x30 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(48)));
  /* 13a95c: add x0, x8, #4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 8) + UINT64_C(4)));
  /* 13a960: mov w20, w1 */
  ARC_W_W(c, 20, ARC_W_R(c, 1));
  /* 13a964: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* 13a968: str wzr, [x8] */
  arc_st32(ARC_X_R(c, 8), ARC_W_R(c, 31));
  /* 13a96c: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1288560));
  fn2_1d2c2c(c);
  /* 13a970: add x0, x19, #0xc */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(12)));
  /* 13a974: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1288568));
  fn2_1d2c2c(c);
  /* 13a978: add x0, x19, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(24)));
  /* 13a97c: str wzr, [x19, #0x14] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(20)), ARC_W_R(c, 31));
  /* 13a980: bl #0x1ccc74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1288580));
  fn2_1ccc74(c);
  /* 13a984: mov w21, #6 */
  ARC_W_W(c, 21, UINT64_C(6));
  /* 13a988: cmp w20, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 20), UINT64_C(1));
  /* 13a98c: str w21, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 21));
  /* 13a990: b.hi #0x13a9cc */
  if (ARC_COND(c, 8)) goto L_13a9cc;
  /* 13a994: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 13a998: mov w0, w20 */
  ARC_W_W(c, 0, ARC_W_R(c, 20));
  /* 13a99c: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* 13a9a0: str wzr, [sp] */
  arc_st32((c)->sp, ARC_W_R(c, 31));
  /* 13a9a4: bl #0xb4168 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1288616));
  fn2_b4168(c);
  /* 13a9a8: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 13a9ac: mov w0, w20 */
  ARC_W_W(c, 0, ARC_W_R(c, 20));
  /* 13a9b0: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* 13a9b4: bl #0xc1814 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1288632));
  fn2_c1814(c);
  /* 13a9b8: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 13a9bc: ldr x21, [sp, #0x40] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(64))));
  /* 13a9c0: ldp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 13a9c4: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* 13a9c8: ret  */
  return;
L_13a9cc:;
  /* 13a9cc: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* 13a9d0: mov x20, sp */
  ARC_X_W(c, 20, (c)->sp);
  /* 13a9d4: str wzr, [sp, #0x20] */
  arc_st32(((c)->sp + INT64_C(32)), ARC_W_R(c, 31));
  /* 13a9d8: orr x0, x20, #4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) | UINT64_C(4)));
  /* 13a9dc: stp q0, q0, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* 13a9e0: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1288676));
  fn2_1d2c2c(c);
  /* 13a9e4: orr x0, x20, #0xc */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) | UINT64_C(12)));
  /* 13a9e8: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1288684));
  fn2_1d2c2c(c);
  /* 13a9ec: add x0, x20, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(24)));
  /* 13a9f0: str wzr, [sp, #0x14] */
  arc_st32(((c)->sp + INT64_C(20)), ARC_W_R(c, 31));
  /* 13a9f4: bl #0x1ccc74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1288696));
  fn2_1ccc74(c);
  /* 13a9f8: ldr w8, [sp] */
  ARC_W_W(c, 8, arc_ld32((c)->sp));
  /* 13a9fc: add x0, x19, #4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(4)));
  /* 13aa00: orr x1, x20, #4 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) | UINT64_C(4)));
  /* 13aa04: str w21, [sp, #0x20] */
  arc_st32(((c)->sp + INT64_C(32)), ARC_W_R(c, 21));
  /* 13aa08: str w8, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 8));
  /* 13aa0c: bl #0x1d2b98 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1288720));
  fn2_1d2b98(c);
  /* 13aa10: add x0, x19, #0xc */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(12)));
  /* 13aa14: orr x1, x20, #0xc */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) | UINT64_C(12)));
  /* 13aa18: bl #0x1d2b98 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1288732));
  fn2_1d2b98(c);
  /* 13aa1c: ldr w8, [sp, #0x14] */
  ARC_W_W(c, 8, arc_ld32(((c)->sp + INT64_C(20))));
  /* 13aa20: add x0, x19, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(24)));
  /* 13aa24: add x1, x20, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(24)));
  /* 13aa28: str w8, [x19, #0x14] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(20)), ARC_W_R(c, 8));
  /* 13aa2c: bl #0x1d0708 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1288752));
  fn2_1d0708(c);
  /* 13aa30: ldr w8, [sp, #0x20] */
  ARC_W_W(c, 8, arc_ld32(((c)->sp + INT64_C(32))));
  /* 13aa34: add x0, x20, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(24)));
  /* 13aa38: str w8, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 8));
  /* 13aa3c: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1288768));
  fn2_1ccd9c(c);
  /* 13aa40: orr x0, x20, #0xc */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) | UINT64_C(12)));
  /* 13aa44: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1288776));
  fn2_1d2d24(c);
  /* 13aa48: orr x0, x20, #4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) | UINT64_C(4)));
  /* 13aa4c: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1288784));
  fn2_1d2d24(c);
  /* 13aa50: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 13aa54: ldr x21, [sp, #0x40] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(64))));
  /* 13aa58: ldp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 13aa5c: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* 13aa60: ret  */
  return;
}

void fn2_13bf40(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077150016));
  /* 13bf40: sub sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(112)));
  /* 13bf44: stp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 13bf48: stp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 13bf4c: stp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 13bf50: add x29, sp, #0x40 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(64)));
  /* 13bf54: add x20, x0, x2, asr #1 */
  ARC_X_W(c, 20, (ARC_X_R(c, 0) + ((uint64_t)((int64_t)(ARC_X_R(c, 2)) >> 1))));
  /* 13bf58: mov x21, x3 */
  ARC_X_W(c, 21, ARC_X_R(c, 3));
  /* 13bf5c: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 13bf60: str wzr, [x4] */
  arc_st32(ARC_X_R(c, 4), ARC_W_R(c, 31));
  /* 13bf64: tbz w2, #0, #0x13bf70 */
  if (((ARC_W_R(c, 2)) >> 0 & 1) == 0) goto L_13bf70;
  /* 13bf68: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 13bf6c: ldr x19, [x8, x19] */
  ARC_X_W(c, 19, arc_ld64((ARC_X_R(c, 8) + ARC_X_R(c, 19))));
L_13bf70:;
  /* 13bf70: ldr x1, [x21] */
  ARC_X_W(c, 1, arc_ld64(ARC_X_R(c, 21)));
  /* 13bf74: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 13bf78: bl #0x1bc0b8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1294204));
  fn2_1bc0b8(c);
  /* 13bf7c: ldr x0, [x21, #8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 21) + INT64_C(8))));
  /* 13bf80: add x8, sp, #0x18 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(24)));
  /* 13bf84: bl #0x1bccd0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1294216));
  fn2_1bccd0(c);
  /* 13bf88: ldr x0, [x21, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 21) + INT64_C(16))));
  /* 13bf8c: bl #0x1bc668 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1294224));
  fn2_1bc668(c);
  /* 13bf90: ldr x9, [x21, #0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 21) + INT64_C(24))));
  /* 13bf94: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 13bf98: add x8, sp, #0x10 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(16)));
  /* 13bf9c: mov x0, x9 */
  ARC_X_W(c, 0, ARC_X_R(c, 9));
  /* 13bfa0: bl #0x1bccb8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1294244));
  fn2_1bccb8(c);
  /* 13bfa4: ldr x0, [x21, #0x20] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 21) + INT64_C(32))));
  /* 13bfa8: bl #0x1bc668 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1294252));
  fn2_1bc668(c);
  /* 13bfac: ldr x9, [x21, #0x28] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 21) + INT64_C(40))));
  /* 13bfb0: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 13bfb4: mov x8, sp */
  ARC_X_W(c, 8, (c)->sp);
  /* 13bfb8: mov x0, x9 */
  ARC_X_W(c, 0, ARC_X_R(c, 9));
  /* 13bfbc: bl #0x1bcca0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1294272));
  fn2_1bcca0(c);
  /* 13bfc0: sub x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 13bfc4: add x2, sp, #0x18 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(24)));
  /* 13bfc8: add x4, sp, #0x10 */
  ARC_X_W(c, 4, ((c)->sp + UINT64_C(16)));
  /* 13bfcc: mov x6, sp */
  ARC_X_W(c, 6, (c)->sp);
  /* 13bfd0: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 13bfd4: mov x3, x22 */
  ARC_X_W(c, 3, ARC_X_R(c, 22));
  /* 13bfd8: mov x5, x21 */
  ARC_X_W(c, 5, ARC_X_R(c, 21));
  /* 13bfdc: blr x19 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1294304));
  arc_dispatch(c, ARC_X_R(c, 19));
  /* 13bfe0: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 13bfe4: bl #0x1d79fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1294312));
  fn2_1d79fc(c);
  /* 13bfe8: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 13bfec: bl #0x1d97fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1294320));
  fn2_1d97fc(c);
  /* 13bff0: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* 13bff4: bl #0x1dde08 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1294328));
  fn2_1dde08(c);
  /* 13bff8: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 13bffc: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1294336));
  fn2_1bc620(c);
  /* 13c000: ldp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 13c004: ldp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 13c008: ldp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 13c00c: add sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(112)));
  /* 13c010: ret  */
  return;
}

void fn2_13d2f8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077155064));
  /* 13d2f8: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 13d2fc: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 13d300: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 13d304: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 13d308: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 13d30c: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 13d310: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* 13d314: add x1, x1, #0xb6f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2927)));
  /* 13d318: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 13d31c: mov w0, #0x70 */
  ARC_W_W(c, 0, UINT64_C(112));
  /* 13d320: mov x2, x1 */
  ARC_X_W(c, 2, ARC_X_R(c, 1));
  /* 13d324: bl #0x1b5d1c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1299240));
  fn2_1b5d1c(c);
  /* 13d328: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 13d32c: mov w22, #1 */
  ARC_W_W(c, 22, UINT64_C(1));
  /* 13d330: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 13d334: ldr x8, [x8, #0x40] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(64))));
  /* 13d338: str w22, [x0, #8] */
  arc_st32((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 22));
  /* 13d33c: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* 13d340: str x8, [x0], #0xc */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(12));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* 13d344: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1299272));
  fn2_1d2c2c(c);
  /* 13d348: add x0, x19, #0x14 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(20)));
  /* 13d34c: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1299280));
  fn2_1d2c2c(c);
  /* 13d350: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* 13d354: adrp x8, #0x251000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2428928)));
  /* 13d358: add x8, x8, #0x2a0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(672)));
  /* 13d35c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 13d360: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* 13d364: stur xzr, [x19, #0x1c] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(28)), ARC_X_R(c, 31));
  /* 13d368: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* 13d36c: stp xzr, x21, [x19, #0x58] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(88));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 13d370: stur q0, [x19, #0x28] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(40)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(40)) + 8, (c)->q[0].u64[1]);
  /* 13d374: stur q0, [x19, #0x38] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(56)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(56)) + 8, (c)->q[0].u64[1]);
  /* 13d378: stur q0, [x19, #0x48] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(72)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(72)) + 8, (c)->q[0].u64[1]);
  /* 13d37c: str x20, [x19, #0x68] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(104)), ARC_X_R(c, 20));
  /* 13d380: bl #0x1b5e68 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1299332));
  fn2_1b5e68(c);
  /* 13d384: str w22, [x19, #0x1c] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(28)), ARC_W_R(c, 22));
  /* 13d388: adrp x8, #0x25d000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 13d38c: add x8, x8, #0x1c8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(456)));
  /* 13d390: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 13d394: tbz w8, #0, #0x13d3d4 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13d3d4;
L_13d398:;
  /* 13d398: adrp x1, #0x25d000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 13d39c: add x1, x1, #0x1bc */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(444)));
  /* 13d3a0: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 13d3a4: bl #0x1d2c40 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1299368));
  fn2_1d2c40(c);
  /* 13d3a8: add x0, x19, #0x14 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(20)));
  /* 13d3ac: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 13d3b0: bl #0x1d5dc0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1299380));
  fn2_1d5dc0(c);
  /* 13d3b4: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 13d3b8: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1299388));
  fn2_1d2d24(c);
  /* 13d3bc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 13d3c0: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 13d3c4: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 13d3c8: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 13d3cc: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 13d3d0: ret  */
  return;
L_13d3d4:;
  /* 13d3d4: adrp x0, #0x25d000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 13d3d8: add x0, x0, #0x1c8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(456)));
  /* 13d3dc: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1299424));
  fn2_24b710(c);
  /* 13d3e0: cbz w0, #0x13d398 */
  if ((ARC_W_R(c, 0)) == 0) goto L_13d398;
  /* 13d3e4: adrp x20, #0x25d000 */
  ARC_X_W(c, 20, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 13d3e8: add x20, x20, #0x1bc */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) + UINT64_C(444)));
  /* 13d3ec: adrp x1, #0x36000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(221184)));
  /* 13d3f0: add x1, x1, #0x3e8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1000)));
  /* 13d3f4: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 13d3f8: bl #0x1b907c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1299452));
  fn2_1b907c(c);
  /* 13d3fc: adrp x0, #0x257000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 13d400: adrp x2, #0x24f000 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(2420736)));
  /* 13d404: add x2, x2, #0x980 */
  ARC_X_W(c, 2, (ARC_X_R(c, 2) + UINT64_C(2432)));
  /* 13d408: ldr x0, [x0, #0xf88] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(3976))));
  /* 13d40c: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 13d410: bl #0x24b6f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1299476));
  fn2_24b6f0(c);
  /* 13d414: adrp x0, #0x25d000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 13d418: add x0, x0, #0x1c8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(456)));
  /* 13d41c: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1299488));
  fn2_24b720(c);
  /* 13d420: b #0x13d398 */
  goto L_13d398;
}

void fn2_14202c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077174828));
  /* 14202c: sub sp, sp, #0xa0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(160)));
  /* 142030: stp x29, x30, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 142034: str x23, [sp, #0x70] */
  arc_st64(((c)->sp + INT64_C(112)), ARC_X_R(c, 23));
  /* 142038: stp x22, x21, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 14203c: stp x20, x19, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 142040: add x29, sp, #0x60 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(96)));
  /* 142044: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 142048: add x8, sp, #0x30 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(48)));
  /* 14204c: mov x0, x1 */
  ARC_X_W(c, 0, ARC_X_R(c, 1));
  /* 142050: bl #0xebf88 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1318996));
  fn2_ebf88(c);
  /* 142054: add x8, x29, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 142058: add x0, sp, #0x30 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(48)));
  /* 14205c: bl #0x1cdd3c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1319008));
  fn2_1cdd3c(c);
  /* 142060: add x0, sp, #0x30 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(48)));
  /* 142064: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1319016));
  fn2_1ccd9c(c);
  /* 142068: add x0, x19, #0x6a */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(106)));
  /* 14206c: bl #0x1db794 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1319024));
  fn2_1db794(c);
  /* 142070: cmp x0, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 0), UINT64_C(1));
  /* 142074: b.lt #0x142164 */
  if (ARC_COND(c, 11)) goto L_142164;
  /* 142078: mov x20, xzr */
  ARC_X_W(c, 20, ARC_X_R(c, 31));
  /* 14207c: adrp x21, #0x2a000 */
  ARC_X_W(c, 21, (arc_image_bases[2] + UINT64_C(172032)));
  /* 142080: add x21, x21, #0x9cf */
  ARC_X_W(c, 21, (ARC_X_R(c, 21) + UINT64_C(2511)));
  /* 142084: adrp x22, #0x1e000 */
  ARC_X_W(c, 22, (arc_image_bases[2] + UINT64_C(122880)));
  /* 142088: add x22, x22, #0xb6f */
  ARC_X_W(c, 22, (ARC_X_R(c, 22) + UINT64_C(2927)));
L_14208c:;
  /* 14208c: add x0, x19, #0x6a */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(106)));
  /* 142090: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 142094: bl #0x1bbf38 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1319064));
  fn2_1bbf38(c);
  /* 142098: sub x8, x29, #8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 14209c: bl #0x1bccb8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1319072));
  fn2_1bccb8(c);
  /* 1420a0: add x0, sp, #0x30 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(48)));
  /* 1420a4: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 1420a8: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1319084));
  fn2_1b7d24(c);
  /* 1420ac: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* 1420b0: add x1, sp, #0x30 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(48)));
  /* 1420b4: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1319096));
  fn2_1bc2f8(c);
  /* 1420b8: add x0, sp, #0x30 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(48)));
  /* 1420bc: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1319104));
  fn2_1ccd9c(c);
  /* 1420c0: add x0, sp, #0x30 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(48)));
  /* 1420c4: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 1420c8: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1319116));
  fn2_1b7d24(c);
  /* 1420cc: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 1420d0: add x1, sp, #0x30 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(48)));
  /* 1420d4: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1319128));
  fn2_1bc2f8(c);
  /* 1420d8: add x0, sp, #0x30 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(48)));
  /* 1420dc: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1319136));
  fn2_1ccd9c(c);
  /* 1420e0: add x8, sp, #0x30 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(48)));
  /* 1420e4: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 1420e8: add x1, sp, #0x18 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(24)));
  /* 1420ec: mov x2, sp */
  ARC_X_W(c, 2, (c)->sp);
  /* 1420f0: bl #0x1d9c5c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1319156));
  fn2_1d9c5c(c);
  /* 1420f4: sub x8, x29, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 1420f8: add x0, sp, #0x30 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(48)));
  /* 1420fc: bl #0x1bc84c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1319168));
  fn2_1bc84c(c);
  /* 142100: sub x8, x29, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* 142104: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 142108: bl #0x1cdd3c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1319180));
  fn2_1cdd3c(c);
  /* 14210c: sub x0, x29, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* 142110: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 142114: bl #0x1cf730 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1319192));
  fn2_1cf730(c);
  /* 142118: mov w23, w0 */
  ARC_W_W(c, 23, ARC_W_R(c, 0));
  /* 14211c: sub x0, x29, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* 142120: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1319204));
  fn2_1ccd9c(c);
  /* 142124: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 142128: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1319212));
  fn2_1ccd9c(c);
  /* 14212c: add x0, sp, #0x30 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(48)));
  /* 142130: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1319220));
  fn2_1bc620(c);
  /* 142134: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 142138: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1319228));
  fn2_1bc620(c);
  /* 14213c: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* 142140: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1319236));
  fn2_1bc620(c);
  /* 142144: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 142148: bl #0x1d97fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1319244));
  fn2_1d97fc(c);
  /* 14214c: tbnz w23, #0, #0x142168 */
  if (((ARC_W_R(c, 23)) >> 0 & 1) != 0) goto L_142168;
  /* 142150: add x0, x19, #0x6a */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(106)));
  /* 142154: add x20, x20, #1 */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) + UINT64_C(1)));
  /* 142158: bl #0x1db794 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1319260));
  fn2_1db794(c);
  /* 14215c: cmp x20, x0 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 0));
  /* 142160: b.lt #0x14208c */
  if (ARC_COND(c, 11)) goto L_14208c;
L_142164:;
  /* 142164: mov x20, #-1 */
  ARC_X_W(c, 20, UINT64_C(18446744073709551615));
L_142168:;
  /* 142168: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 14216c: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1319280));
  fn2_1ccd9c(c);
  /* 142170: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 142174: ldp x20, x19, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 142178: ldr x23, [sp, #0x70] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(112))));
  /* 14217c: ldp x22, x21, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 142180: ldp x29, x30, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 142184: add sp, sp, #0xa0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(160)));
  /* 142188: ret  */
  return;
}

void fn2_149144(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077203780));
  /* 149144: sub sp, sp, #0x80 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(128)));
  /* 149148: stp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 14914c: str x23, [sp, #0x50] */
  arc_st64(((c)->sp + INT64_C(80)), ARC_X_R(c, 23));
  /* 149150: stp x22, x21, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 149154: stp x20, x19, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 149158: add x29, sp, #0x40 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(64)));
  /* 14915c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 149160: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 149164: mov x19, x2 */
  ARC_X_W(c, 19, ARC_X_R(c, 2));
  /* 149168: mov x21, x8 */
  ARC_X_W(c, 21, ARC_X_R(c, 8));
  /* 14916c: add x23, sp, #0x10 */
  ARC_X_W(c, 23, ((c)->sp + UINT64_C(16)));
  /* 149170: bl #0x1bc44c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1347956));
  fn2_1bc44c(c);
  /* 149174: add x22, x23, #0x18 */
  ARC_X_W(c, 22, (ARC_X_R(c, 23) + UINT64_C(24)));
  /* 149178: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 14917c: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 149180: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1347972));
  fn2_1bc2f8(c);
  /* 149184: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 149188: mov x8, x21 */
  ARC_X_W(c, 8, ARC_X_R(c, 21));
  /* 14918c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 149190: mov w2, #2 */
  ARC_W_W(c, 2, UINT64_C(2));
  /* 149194: stp x23, x22, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 23));
    arc_st64(_pa + 8, ARC_X_R(c, 22));
  }
  /* 149198: bl #0x221308 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1347996));
  fn2_221308(c);
  /* 14919c: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 1491a0: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1348004));
  fn2_1bc620(c);
  /* 1491a4: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 1491a8: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1348012));
  fn2_1bc620(c);
  /* 1491ac: ldp x20, x19, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1491b0: ldr x23, [sp, #0x50] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(80))));
  /* 1491b4: ldp x22, x21, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1491b8: ldp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1491bc: add sp, sp, #0x80 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(128)));
  /* 1491c0: ret  */
  return;
}

void fn2_14b2c4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077212356));
  /* 14b2c4: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 14b2c8: ret  */
  return;
}

void fn2_14f914(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077230356));
  /* 14f914: sub sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(112)));
  /* 14f918: stp x29, x30, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 14f91c: stp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 14f920: add x29, sp, #0x50 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(80)));
  /* 14f924: ldrb w8, [x0, #0x190] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 0) + INT64_C(400))));
  /* 14f928: cbz w8, #0x14fab8 */
  if ((ARC_W_R(c, 8)) == 0) goto L_14fab8;
  /* 14f92c: ldr x20, [x0, #0x30] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 0) + INT64_C(48))));
  /* 14f930: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 14f934: cbz x20, #0x14fac8 */
  if ((ARC_X_R(c, 20)) == 0) goto L_14fac8;
  /* 14f938: adrp x1, #0x34000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(212992)));
  /* 14f93c: add x1, x1, #0xfb6 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(4022)));
  /* 14f940: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 14f944: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 14f948: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1374540));
  fn2_1b8fd4(c);
  /* 14f94c: sub x8, x29, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 14f950: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 14f954: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 14f958: bl #0x21fe38 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1374556));
  fn2_21fe38(c);
  /* 14f95c: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 14f960: str xzr, [sp, #0x18] */
  arc_st64(((c)->sp + INT64_C(24)), ARC_X_R(c, 31));
  /* 14f964: bl #0x1bcbbc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1374568));
  fn2_1bcbbc(c);
  /* 14f968: cbz x0, #0x14f984 */
  if ((ARC_X_R(c, 0)) == 0) goto L_14f984;
  /* 14f96c: bl #0x12a834 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1374576));
  fn2_12a834(c);
  /* 14f970: cbz x0, #0x14f984 */
  if ((ARC_X_R(c, 0)) == 0) goto L_14f984;
  /* 14f974: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 14f978: bl #0x2259d8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1374588));
  fn2_2259d8(c);
  /* 14f97c: tbz w0, #0, #0x14f984 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_14f984;
  /* 14f980: str x20, [sp, #0x18] */
  arc_st64(((c)->sp + INT64_C(24)), ARC_X_R(c, 20));
L_14f984:;
  /* 14f984: add x1, sp, #0x18 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(24)));
  /* 14f988: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 14f98c: bl #0xfe8fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1374608));
  fn2_fe8fc(c);
  /* 14f990: ldr x0, [sp, #0x18] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(24))));
  /* 14f994: cbz x0, #0x14f9b8 */
  if ((ARC_X_R(c, 0)) == 0) goto L_14f9b8;
  /* 14f998: bl #0x225abc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1374620));
  fn2_225abc(c);
  /* 14f99c: tbz w0, #0, #0x14f9b8 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_14f9b8;
  /* 14f9a0: adrp x9, #0x257000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 14f9a4: ldr x8, [sp, #0x18] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(24))));
  /* 14f9a8: ldr x9, [x9, #0xfb0] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(4016))));
  /* 14f9ac: ldr x0, [x8, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 14f9b0: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* 14f9b4: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1374648));
  arc_dispatch(c, ARC_X_R(c, 9));
L_14f9b8:;
  /* 14f9b8: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 14f9bc: str xzr, [sp, #0x18] */
  arc_st64(((c)->sp + INT64_C(24)), ARC_X_R(c, 31));
  /* 14f9c0: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1374660));
  fn2_1bc620(c);
  /* 14f9c4: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 14f9c8: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1374668));
  fn2_1d2d24(c);
  /* 14f9cc: adrp x1, #0x1b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(110592)));
  /* 14f9d0: add x1, x1, #0xf26 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3878)));
  /* 14f9d4: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 14f9d8: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1374684));
  fn2_1b7d24(c);
  /* 14f9dc: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* 14f9e0: sub x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 14f9e4: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1374696));
  fn2_1bc2f8(c);
  /* 14f9e8: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 14f9ec: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1374704));
  fn2_1ccd9c(c);
  /* 14f9f0: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 14f9f4: add x1, x19, #0x80 */
  ARC_X_W(c, 1, (ARC_X_R(c, 19) + UINT64_C(128)));
  /* 14f9f8: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1374716));
  fn2_1bc2f8(c);
  /* 14f9fc: sub x8, x29, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 14fa00: add x0, x19, #0x3f0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(1008)));
  /* 14fa04: add x1, sp, #0x18 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(24)));
  /* 14fa08: mov x2, sp */
  ARC_X_W(c, 2, (c)->sp);
  /* 14fa0c: bl #0x1d9c5c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1374736));
  fn2_1d9c5c(c);
  /* 14fa10: sub x8, x29, #0x20 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* 14fa14: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 14fa18: bl #0x1bc84c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1374748));
  fn2_1bc84c(c);
  /* 14fa1c: add x0, x19, #0x80 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(128)));
  /* 14fa20: sub x1, x29, #0x20 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* 14fa24: bl #0x1d0708 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1374760));
  fn2_1d0708(c);
  /* 14fa28: sub x0, x29, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* 14fa2c: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1374768));
  fn2_1ccd9c(c);
  /* 14fa30: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 14fa34: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1374776));
  fn2_1bc620(c);
  /* 14fa38: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 14fa3c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1374784));
  fn2_1bc620(c);
  /* 14fa40: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* 14fa44: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1374792));
  fn2_1bc620(c);
  /* 14fa48: adrp x0, #0x1d000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(118784)));
  /* 14fa4c: add x0, x0, #0x5fc */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1532)));
  /* 14fa50: sub x8, x29, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 14fa54: mov x1, #-1 */
  ARC_X_W(c, 1, UINT64_C(18446744073709551615));
  /* 14fa58: sub x20, x29, #0x18 */
  ARC_X_W(c, 20, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 14fa5c: bl #0x1b7d74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1374816));
  fn2_1b7d74(c);
  /* 14fa60: sub x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 14fa64: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 14fa68: bl #0x14c268 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1374828));
  fn2_14c268(c);
  /* 14fa6c: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 14fa70: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1374836));
  fn2_1ccd9c(c);
  /* 14fa74: adrp x1, #0x2a000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(172032)));
  /* 14fa78: add x1, x1, #0xa4b */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2635)));
  /* 14fa7c: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 14fa80: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 14fa84: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1374856));
  fn2_1b8fd4(c);
  /* 14fa88: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 14fa8c: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 14fa90: bl #0x1bc44c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1374868));
  fn2_1bc44c(c);
  /* 14fa94: add x1, sp, #0x18 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(24)));
  /* 14fa98: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 14fa9c: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* 14faa0: str x20, [sp, #0x18] */
  arc_st64(((c)->sp + INT64_C(24)), ARC_X_R(c, 20));
  /* 14faa4: bl #0x221204 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1374888));
  fn2_221204(c);
  /* 14faa8: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 14faac: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1374896));
  fn2_1bc620(c);
  /* 14fab0: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 14fab4: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1374904));
  fn2_1d2d24(c);
L_14fab8:;
  /* 14fab8: ldp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 14fabc: ldp x29, x30, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 14fac0: add sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(112)));
  /* 14fac4: ret  */
  return;
L_14fac8:;
  /* 14fac8: adrp x0, #0x27000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(159744)));
  /* 14facc: add x0, x0, #0xa9 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(169)));
  /* 14fad0: adrp x1, #0x1a000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(106496)));
  /* 14fad4: add x1, x1, #0xacd */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2765)));
  /* 14fad8: adrp x3, #0x2e000 */
  ARC_X_W(c, 3, (arc_image_bases[2] + UINT64_C(188416)));
  /* 14fadc: add x3, x3, #0x28a */
  ARC_X_W(c, 3, (ARC_X_R(c, 3) + UINT64_C(650)));
  /* 14fae0: mov w2, #0x14d */
  ARC_W_W(c, 2, UINT64_C(333));
  /* 14fae4: mov w4, wzr */
  ARC_W_W(c, 4, ARC_W_R(c, 31));
  /* 14fae8: mov w5, wzr */
  ARC_W_W(c, 5, ARC_W_R(c, 31));
  /* 14faec: ldp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 14faf0: ldp x29, x30, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 14faf4: add sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(112)));
  /* 14faf8: b #0x1b54b0 */
  fn2_1b54b0(c); return;
}

void fn2_15655c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077258076));
  /* 15655c: ldrb w8, [x0, #0x68] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 0) + INT64_C(104))));
  /* 156560: cbz w8, #0x156628 */
  if ((ARC_W_R(c, 8)) == 0) goto L_156628;
  /* 156564: ldr x8, [x0, #0x60] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(96))));
  /* 156568: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 15656c: b.ne #0x156628 */
  if (ARC_COND(c, 1)) goto L_156628;
  /* 156570: sub sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(48)));
  /* 156574: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 156578: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 15657c: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 156580: add x8, sp, #8 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(8)));
  /* 156584: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 156588: bl #0xfe890 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1402252));
  fn2_fe890(c);
  /* 15658c: ldr x0, [sp, #8] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(8))));
  /* 156590: bl #0x1570d0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1402260));
  fn2_1570d0(c);
  /* 156594: ldr x8, [sp, #8] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(8))));
  /* 156598: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 15659c: cbz x8, #0x1565c4 */
  if ((ARC_X_R(c, 8)) == 0) goto L_1565c4;
  /* 1565a0: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1565a4: bl #0x225abc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1402280));
  fn2_225abc(c);
  /* 1565a8: tbz w0, #0, #0x1565c4 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_1565c4;
  /* 1565ac: adrp x9, #0x257000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 1565b0: ldr x8, [sp, #8] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(8))));
  /* 1565b4: ldr x9, [x9, #0xfb0] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(4016))));
  /* 1565b8: ldr x0, [x8, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 1565bc: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* 1565c0: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1402308));
  arc_dispatch(c, ARC_X_R(c, 9));
L_1565c4:;
  /* 1565c4: cbz x20, #0x15661c */
  if ((ARC_X_R(c, 20)) == 0) goto L_15661c;
  /* 1565c8: add x8, sp, #8 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(8)));
  /* 1565cc: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1565d0: mov w1, w19 */
  ARC_W_W(c, 1, ARC_W_R(c, 19));
  /* 1565d4: bl #0x204bb0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1402328));
  fn2_204bb0(c);
  /* 1565d8: ldr x0, [sp, #8] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(8))));
  /* 1565dc: cbz x0, #0x15661c */
  if ((ARC_X_R(c, 0)) == 0) goto L_15661c;
  /* 1565e0: mov w3, #0x5f90 */
  ARC_W_W(c, 3, UINT64_C(24464));
  /* 1565e4: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* 1565e8: mov w2, #0x7530 */
  ARC_W_W(c, 2, UINT64_C(30000));
  /* 1565ec: movk w3, #1, lsl #16 */
  ARC_W_W(c, 3, ((ARC_W_R(c, 3) & UINT64_C(18446744069414649855)) | UINT64_C(65536)));
  /* 1565f0: bl #0x20554c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1402356));
  fn2_20554c(c);
  /* 1565f4: ldr x0, [sp, #8] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(8))));
  /* 1565f8: cbz x0, #0x15661c */
  if ((ARC_X_R(c, 0)) == 0) goto L_15661c;
  /* 1565fc: bl #0x225abc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1402368));
  fn2_225abc(c);
  /* 156600: tbz w0, #0, #0x15661c */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_15661c;
  /* 156604: adrp x9, #0x257000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 156608: ldr x8, [sp, #8] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(8))));
  /* 15660c: ldr x9, [x9, #0xfb0] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(4016))));
  /* 156610: ldr x0, [x8, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 156614: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* 156618: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1402396));
  arc_dispatch(c, ARC_X_R(c, 9));
L_15661c:;
  /* 15661c: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 156620: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 156624: add sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(48)));
L_156628:;
  /* 156628: ret  */
  return;
}

void fn2_15c738(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077283128));
  /* 15c738: sub sp, sp, #0xb0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(176)));
  /* 15c73c: stp x29, x30, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 15c740: stp x24, x23, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 15c744: stp x22, x21, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 15c748: stp x20, x19, [sp, #0xa0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(160));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 15c74c: add x29, sp, #0x70 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(112)));
  /* 15c750: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 15c754: mov x23, x1 */
  ARC_X_W(c, 23, ARC_X_R(c, 1));
  /* 15c758: ldr x24, [x0, #0x2d0] */
  ARC_X_W(c, 24, arc_ld64((ARC_X_R(c, 0) + INT64_C(720))));
  /* 15c75c: str x1, [x0, #0x2d0] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(720)), ARC_X_R(c, 1));
  /* 15c760: add x0, x0, #0x2e8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(744)));
  /* 15c764: add x1, x19, #0x2d8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 19) + UINT64_C(728)));
  /* 15c768: mov x20, x4 */
  ARC_X_W(c, 20, ARC_X_R(c, 4));
  /* 15c76c: mov x21, x3 */
  ARC_X_W(c, 21, ARC_X_R(c, 3));
  /* 15c770: mov x22, x2 */
  ARC_X_W(c, 22, ARC_X_R(c, 2));
  /* 15c774: bl #0x1d06b8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1427320));
  fn2_1d06b8(c);
  /* 15c778: add x0, x19, #0x2d8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(728)));
  /* 15c77c: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 15c780: bl #0x1d06b8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1427332));
  fn2_1d06b8(c);
  /* 15c784: add x0, x19, #0x2e0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(736)));
  /* 15c788: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 15c78c: bl #0x1d06b8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1427344));
  fn2_1d06b8(c);
  /* 15c790: add x0, x19, #0x2f0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(752)));
  /* 15c794: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 15c798: bl #0x1dc718 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1427356));
  fn2_1dc718(c);
  /* 15c79c: adrp x1, #0x20000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(131072)));
  /* 15c7a0: add x1, x1, #0xd3e */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3390)));
  /* 15c7a4: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 15c7a8: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 15c7ac: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1427376));
  fn2_1b8fd4(c);
  /* 15c7b0: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* 15c7b4: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 15c7b8: add x22, sp, #0x28 */
  ARC_X_W(c, 22, ((c)->sp + UINT64_C(40)));
  /* 15c7bc: bl #0x1bc44c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1427392));
  fn2_1bc44c(c);
  /* 15c7c0: add x20, x22, #0x18 */
  ARC_X_W(c, 20, (ARC_X_R(c, 22) + UINT64_C(24)));
  /* 15c7c4: mov x1, x24 */
  ARC_X_W(c, 1, ARC_X_R(c, 24));
  /* 15c7c8: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 15c7cc: bl #0x1bc290 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1427408));
  fn2_1bc290(c);
  /* 15c7d0: add x21, x22, #0x30 */
  ARC_X_W(c, 21, (ARC_X_R(c, 22) + UINT64_C(48)));
  /* 15c7d4: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* 15c7d8: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 15c7dc: bl #0x1bc290 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1427424));
  fn2_1bc290(c);
  /* 15c7e0: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* 15c7e4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 15c7e8: mov w2, #3 */
  ARC_W_W(c, 2, UINT64_C(3));
  /* 15c7ec: stp x22, x20, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 20));
  }
  /* 15c7f0: str x21, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 21));
  /* 15c7f4: bl #0x221204 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1427448));
  fn2_221204(c);
  /* 15c7f8: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 15c7fc: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1427456));
  fn2_1bc620(c);
  /* 15c800: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 15c804: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1427464));
  fn2_1bc620(c);
  /* 15c808: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* 15c80c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1427472));
  fn2_1bc620(c);
  /* 15c810: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 15c814: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1427480));
  fn2_1d2d24(c);
  /* 15c818: ldp x20, x19, [sp, #0xa0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(160));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 15c81c: ldp x22, x21, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 15c820: ldp x24, x23, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 15c824: ldp x29, x30, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 15c828: add sp, sp, #0xb0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(176)));
  /* 15c82c: ret  */
  return;
}

void fn2_165674(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077319796));
  /* 165674: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 165678: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 16567c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 165680: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 165684: bl #0x1bcc90 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1463944));
  fn2_1bcc90(c);
  /* 165688: cmp w0, #0x18 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(24));
  /* 16568c: b.ne #0x1656a0 */
  if (ARC_COND(c, 1)) goto L_1656a0;
  /* 165690: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 165694: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 165698: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 16569c: b #0x1bcbbc */
  fn2_1bcbbc(c); return;
L_1656a0:;
  /* 1656a0: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
  /* 1656a4: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1656a8: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1656ac: ret  */
  return;
}

void fn2_16e2f8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077355768));
  /* 16e2f8: sub sp, sp, #0x150 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(336)));
  /* 16e2fc: stp x29, x30, [sp, #0xf0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(240));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 16e300: stp x28, x27, [sp, #0x100] */
  { const uint64_t _pa = ((c)->sp + INT64_C(256));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* 16e304: stp x26, x25, [sp, #0x110] */
  { const uint64_t _pa = ((c)->sp + INT64_C(272));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* 16e308: stp x24, x23, [sp, #0x120] */
  { const uint64_t _pa = ((c)->sp + INT64_C(288));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 16e30c: stp x22, x21, [sp, #0x130] */
  { const uint64_t _pa = ((c)->sp + INT64_C(304));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 16e310: stp x20, x19, [sp, #0x140] */
  { const uint64_t _pa = ((c)->sp + INT64_C(320));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 16e314: add x29, sp, #0xf0 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(240)));
  /* 16e318: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 16e31c: mov x0, x1 */
  ARC_X_W(c, 0, ARC_X_R(c, 1));
  /* 16e320: mov x19, x6 */
  ARC_X_W(c, 19, ARC_X_R(c, 6));
  /* 16e324: mov x22, x5 */
  ARC_X_W(c, 22, ARC_X_R(c, 5));
  /* 16e328: mov x24, x4 */
  ARC_X_W(c, 24, ARC_X_R(c, 4));
  /* 16e32c: mov x21, x3 */
  ARC_X_W(c, 21, ARC_X_R(c, 3));
  /* 16e330: bl #0x1bda04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1499956));
  fn2_1bda04(c);
  /* 16e334: ldr x25, [x20, #0x20] */
  ARC_X_W(c, 25, arc_ld64((ARC_X_R(c, 20) + INT64_C(32))));
  /* 16e338: cbz x25, #0x16e904 */
  if ((ARC_X_R(c, 25)) == 0) goto L_16e904;
  /* 16e33c: ldrb w8, [x20, #0x69] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 20) + INT64_C(105))));
  /* 16e340: tbz w8, #0, #0x16e4f4 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_16e4f4;
  /* 16e344: mov w23, w0 */
  ARC_W_W(c, 23, ARC_W_R(c, 0));
  /* 16e348: adrp x1, #0x26000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(155648)));
  /* 16e34c: add x1, x1, #0x843 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2115)));
  /* 16e350: sub x0, x29, #0x70 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(112)));
  /* 16e354: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 16e358: str x19, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 19));
  /* 16e35c: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1500000));
  fn2_1b8fd4(c);
  /* 16e360: sub x0, x29, #0x40 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 16e364: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* 16e368: sub x28, x29, #0x40 */
  ARC_X_W(c, 28, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 16e36c: bl #0x1bc25c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1500016));
  fn2_1bc25c(c);
  /* 16e370: sub x1, x29, #0x70 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(112)));
  /* 16e374: sub x2, x29, #0x40 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 16e378: mov x0, x25 */
  ARC_X_W(c, 0, ARC_X_R(c, 25));
  /* 16e37c: bl #0x21fd30 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1500032));
  fn2_21fd30(c);
  /* 16e380: sub x0, x29, #0x40 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 16e384: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1500040));
  fn2_1bc620(c);
  /* 16e388: sub x0, x29, #0x70 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(112)));
  /* 16e38c: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1500048));
  fn2_1d2d24(c);
  /* 16e390: ldr x25, [x20, #0x20] */
  ARC_X_W(c, 25, arc_ld64((ARC_X_R(c, 20) + INT64_C(32))));
  /* 16e394: adrp x1, #0x23000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(143360)));
  /* 16e398: add x1, x1, #0xf64 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3940)));
  /* 16e39c: sub x0, x29, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* 16e3a0: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 16e3a4: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1500072));
  fn2_1b8fd4(c);
  /* 16e3a8: ldr x26, [x20, #0x20] */
  ARC_X_W(c, 26, arc_ld64((ARC_X_R(c, 20) + INT64_C(32))));
  /* 16e3ac: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* 16e3b0: add x1, x1, #0x5a */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(90)));
  /* 16e3b4: add x0, sp, #0x78 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(120)));
  /* 16e3b8: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 16e3bc: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1500096));
  fn2_1b8fd4(c);
  /* 16e3c0: ldr x19, [x20, #0x78] */
  ARC_X_W(c, 19, arc_ld64((ARC_X_R(c, 20) + INT64_C(120))));
  /* 16e3c4: sub x0, x29, #0x40 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 16e3c8: add x1, sp, #0x78 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(120)));
  /* 16e3cc: bl #0x1bc44c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1500112));
  fn2_1bc44c(c);
  /* 16e3d0: add x27, x28, #0x18 */
  ARC_X_W(c, 27, (ARC_X_R(c, 28) + UINT64_C(24)));
  /* 16e3d4: add x1, x19, #1 */
  ARC_X_W(c, 1, (ARC_X_R(c, 19) + UINT64_C(1)));
  /* 16e3d8: mov x0, x27 */
  ARC_X_W(c, 0, ARC_X_R(c, 27));
  /* 16e3dc: bl #0x1bc290 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1500128));
  fn2_1bc290(c);
  /* 16e3e0: sub x8, x29, #0x70 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(112)));
  /* 16e3e4: add x1, sp, #0x40 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(64)));
  /* 16e3e8: mov x0, x26 */
  ARC_X_W(c, 0, ARC_X_R(c, 26));
  /* 16e3ec: mov w2, #2 */
  ARC_W_W(c, 2, UINT64_C(2));
  /* 16e3f0: stp x28, x27, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* 16e3f4: bl #0x221308 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1500152));
  fn2_221308(c);
  /* 16e3f8: mov x0, x27 */
  ARC_X_W(c, 0, ARC_X_R(c, 27));
  /* 16e3fc: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1500160));
  fn2_1bc620(c);
  /* 16e400: sub x0, x29, #0x40 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 16e404: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1500168));
  fn2_1bc620(c);
  /* 16e408: sub x1, x29, #0x10 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* 16e40c: sub x2, x29, #0x70 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(112)));
  /* 16e410: mov x0, x25 */
  ARC_X_W(c, 0, ARC_X_R(c, 25));
  /* 16e414: bl #0x21fd30 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1500184));
  fn2_21fd30(c);
  /* 16e418: sub x0, x29, #0x70 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(112)));
  /* 16e41c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1500192));
  fn2_1bc620(c);
  /* 16e420: add x0, sp, #0x78 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(120)));
  /* 16e424: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1500200));
  fn2_1d2d24(c);
  /* 16e428: sub x0, x29, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* 16e42c: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1500208));
  fn2_1d2d24(c);
  /* 16e430: ldr x25, [x20, #0x20] */
  ARC_X_W(c, 25, arc_ld64((ARC_X_R(c, 20) + INT64_C(32))));
  /* 16e434: adrp x1, #0x2c000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(180224)));
  /* 16e438: add x1, x1, #0x51c */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1308)));
  /* 16e43c: sub x0, x29, #0x70 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(112)));
  /* 16e440: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 16e444: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1500232));
  fn2_1b8fd4(c);
  /* 16e448: sub x8, x29, #0x40 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 16e44c: sub x1, x29, #0x70 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(112)));
  /* 16e450: mov x0, x25 */
  ARC_X_W(c, 0, ARC_X_R(c, 25));
  /* 16e454: bl #0x21fe38 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1500248));
  fn2_21fe38(c);
  /* 16e458: sub x0, x29, #0x40 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 16e45c: bl #0x1bcbbc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1500256));
  fn2_1bcbbc(c);
  /* 16e460: mov x25, x0 */
  ARC_X_W(c, 25, ARC_X_R(c, 0));
  /* 16e464: sub x0, x29, #0x40 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 16e468: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1500268));
  fn2_1bc620(c);
  /* 16e46c: sub x0, x29, #0x70 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(112)));
  /* 16e470: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1500276));
  fn2_1d2d24(c);
  /* 16e474: cmp x25, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 25), UINT64_C(0));
  /* 16e478: cset w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? 1 : 0));
  /* 16e47c: orn w8, w8, w23 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | (~ARC_W_R(c, 23))));
  /* 16e480: tbnz w8, #0, #0x16e5f4 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_16e5f4;
  /* 16e484: adrp x1, #0x1c000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(114688)));
  /* 16e488: add x1, x1, #0xdb2 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3506)));
  /* 16e48c: sub x0, x29, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* 16e490: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 16e494: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1500312));
  fn2_1b8fd4(c);
  /* 16e498: ldrb w26, [x20, #0x1b8] */
  ARC_W_W(c, 26, arc_ld8((ARC_X_R(c, 20) + INT64_C(440))));
  /* 16e49c: cbz w26, #0x16e574 */
  if ((ARC_W_R(c, 26)) == 0) goto L_16e574;
  /* 16e4a0: adrp x1, #0x27000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(159744)));
  /* 16e4a4: add x1, x1, #0x219 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(537)));
  /* 16e4a8: add x0, sp, #0x58 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(88)));
  /* 16e4ac: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 16e4b0: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1500340));
  fn2_1b8fd4(c);
  /* 16e4b4: sub x0, x29, #0x40 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 16e4b8: add x1, sp, #0x58 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(88)));
  /* 16e4bc: sub x19, x29, #0x40 */
  ARC_X_W(c, 19, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 16e4c0: bl #0x1bc44c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1500356));
  fn2_1bc44c(c);
  /* 16e4c4: sub x8, x29, #0x70 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(112)));
  /* 16e4c8: add x1, sp, #0x40 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(64)));
  /* 16e4cc: mov x0, x25 */
  ARC_X_W(c, 0, ARC_X_R(c, 25));
  /* 16e4d0: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* 16e4d4: str x19, [sp, #0x40] */
  arc_st64(((c)->sp + INT64_C(64)), ARC_X_R(c, 19));
  /* 16e4d8: bl #0x221308 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1500380));
  fn2_221308(c);
  /* 16e4dc: sub x0, x29, #0x40 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 16e4e0: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1500388));
  fn2_1bc620(c);
  /* 16e4e4: add x8, sp, #0x78 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(120)));
  /* 16e4e8: sub x0, x29, #0x70 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(112)));
  /* 16e4ec: bl #0x1bccb8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1500400));
  fn2_1bccb8(c);
  /* 16e4f0: b #0x16e580 */
  goto L_16e580;
L_16e4f4:;
  /* 16e4f4: adrp x1, #0x26000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(155648)));
  /* 16e4f8: add x1, x1, #0x843 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2115)));
  /* 16e4fc: sub x0, x29, #0x70 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(112)));
  /* 16e500: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 16e504: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1500424));
  fn2_1b8fd4(c);
  /* 16e508: sub x0, x29, #0x40 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 16e50c: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* 16e510: bl #0x1bc25c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1500436));
  fn2_1bc25c(c);
  /* 16e514: sub x1, x29, #0x70 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(112)));
  /* 16e518: sub x2, x29, #0x40 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 16e51c: mov x0, x25 */
  ARC_X_W(c, 0, ARC_X_R(c, 25));
  /* 16e520: bl #0x21fd30 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1500452));
  fn2_21fd30(c);
  /* 16e524: sub x0, x29, #0x40 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 16e528: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1500460));
  fn2_1bc620(c);
  /* 16e52c: sub x0, x29, #0x70 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(112)));
  /* 16e530: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1500468));
  fn2_1d2d24(c);
  /* 16e534: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 16e538: strb wzr, [x20, #0x288] */
  arc_st8((ARC_X_R(c, 20) + INT64_C(648)), ARC_W_R(c, 31));
  /* 16e53c: bl #0x1d7b84 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1500480));
  fn2_1d7b84(c);
  /* 16e540: tbz w0, #0, #0x16e8e4 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_16e8e4;
  /* 16e544: sub x0, x29, #0x58 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(88)));
  /* 16e548: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1500492));
  fn2_1bc084(c);
  /* 16e54c: adrp x8, #0x257000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 16e550: sub x2, x29, #0x58 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(88)));
  /* 16e554: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 16e558: ldr x8, [x8, #0xfb8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(4024))));
  /* 16e55c: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 16e560: mov w3, wzr */
  ARC_W_W(c, 3, ARC_W_R(c, 31));
  /* 16e564: ldr x8, [x8, #0xa8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(168))));
  /* 16e568: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1500524));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 16e56c: sub x0, x29, #0x58 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(88)));
  /* 16e570: b #0x16e8e0 */
  goto L_16e8e0;
L_16e574:;
  /* 16e574: add x0, sp, #0x78 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(120)));
  /* 16e578: mov x1, x24 */
  ARC_X_W(c, 1, ARC_X_R(c, 24));
  /* 16e57c: bl #0x1d9754 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1500544));
  fn2_1d9754(c);
L_16e580:;
  /* 16e580: sub x0, x29, #0x40 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 16e584: sub x1, x29, #0x10 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* 16e588: sub x19, x29, #0x40 */
  ARC_X_W(c, 19, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 16e58c: bl #0x1bc44c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1500560));
  fn2_1bc44c(c);
  /* 16e590: add x24, x19, #0x18 */
  ARC_X_W(c, 24, (ARC_X_R(c, 19) + UINT64_C(24)));
  /* 16e594: add x1, sp, #0x78 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(120)));
  /* 16e598: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 16e59c: bl #0x1bc530 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1500576));
  fn2_1bc530(c);
  /* 16e5a0: add x8, sp, #0x60 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(96)));
  /* 16e5a4: add x1, sp, #0x40 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(64)));
  /* 16e5a8: mov x0, x25 */
  ARC_X_W(c, 0, ARC_X_R(c, 25));
  /* 16e5ac: mov w2, #2 */
  ARC_W_W(c, 2, UINT64_C(2));
  /* 16e5b0: stp x19, x24, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 19));
    arc_st64(_pa + 8, ARC_X_R(c, 24));
  }
  /* 16e5b4: bl #0x221308 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1500600));
  fn2_221308(c);
  /* 16e5b8: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 16e5bc: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1500608));
  fn2_1bc620(c);
  /* 16e5c0: sub x0, x29, #0x40 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 16e5c4: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1500616));
  fn2_1bc620(c);
  /* 16e5c8: add x0, sp, #0x60 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(96)));
  /* 16e5cc: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1500624));
  fn2_1bc620(c);
  /* 16e5d0: add x0, sp, #0x78 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(120)));
  /* 16e5d4: bl #0x1d97fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1500632));
  fn2_1d97fc(c);
  /* 16e5d8: cbz w26, #0x16e5ec */
  if ((ARC_W_R(c, 26)) == 0) goto L_16e5ec;
  /* 16e5dc: sub x0, x29, #0x70 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(112)));
  /* 16e5e0: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1500644));
  fn2_1bc620(c);
  /* 16e5e4: add x0, sp, #0x58 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(88)));
  /* 16e5e8: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1500652));
  fn2_1d2d24(c);
L_16e5ec:;
  /* 16e5ec: sub x0, x29, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* 16e5f0: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1500660));
  fn2_1d2d24(c);
L_16e5f4:;
  /* 16e5f4: ldr x24, [x20, #0x20] */
  ARC_X_W(c, 24, arc_ld64((ARC_X_R(c, 20) + INT64_C(32))));
  /* 16e5f8: adrp x1, #0x29000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(167936)));
  /* 16e5fc: add x1, x1, #0x32b */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(811)));
  /* 16e600: add x0, sp, #0x40 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(64)));
  /* 16e604: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 16e608: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1500684));
  fn2_1b8fd4(c);
  /* 16e60c: add x19, x21, #1 */
  ARC_X_W(c, 19, (ARC_X_R(c, 21) + UINT64_C(1)));
  /* 16e610: sub x0, x29, #0x40 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 16e614: sub x25, x29, #0x40 */
  ARC_X_W(c, 25, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 16e618: add x1, x19, x19, lsl #1 */
  ARC_X_W(c, 1, (ARC_X_R(c, 19) + ((uint64_t)(ARC_X_R(c, 19)) << 1)));
  /* 16e61c: bl #0x1bc290 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1500704));
  fn2_1bc290(c);
  /* 16e620: add x1, sp, #0x40 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(64)));
  /* 16e624: sub x2, x29, #0x40 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 16e628: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 16e62c: bl #0x21fd30 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1500720));
  fn2_21fd30(c);
  /* 16e630: sub x0, x29, #0x40 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 16e634: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1500728));
  fn2_1bc620(c);
  /* 16e638: add x0, sp, #0x40 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(64)));
  /* 16e63c: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1500736));
  fn2_1d2d24(c);
  /* 16e640: ldr x8, [x20, #0x138] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(312))));
  /* 16e644: adrp x1, #0x2f000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(192512)));
  /* 16e648: add x1, x1, #0x98c */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2444)));
  /* 16e64c: add x0, sp, #0x38 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(56)));
  /* 16e650: stp x19, xzr, [x20, #0x118] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(280));
    arc_st64(_pa, ARC_X_R(c, 19));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 16e654: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* 16e658: str xzr, [x20, #0x208] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(520)), ARC_X_R(c, 31));
  /* 16e65c: stp xzr, x8, [x20, #0x130] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(304));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* 16e660: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1500772));
  fn2_1b7d24(c);
  /* 16e664: adrp x8, #0x1a000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(106496)));
  /* 16e668: add x8, x8, #0xbd8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3032)));
  /* 16e66c: tst w23, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 23) & UINT64_C(1)));
  /* 16e670: adrp x9, #0x2c000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(180224)));
  /* 16e674: add x9, x9, #0x134 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(308)));
  /* 16e678: csel x23, x9, x8, ne */
  ARC_X_W(c, 23, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* 16e67c: bl #0x22eb3c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1500800));
  fn2_22eb3c(c);
  /* 16e680: bl #0x2302d4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1500804));
  fn2_2302d4(c);
  /* 16e684: sub x3, x0, x22 */
  ARC_X_W(c, 3, (ARC_X_R(c, 0) - ARC_X_R(c, 22)));
  /* 16e688: add x8, sp, #0x78 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(120)));
  /* 16e68c: add x0, sp, #0x38 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(56)));
  /* 16e690: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 16e694: mov x2, x23 */
  ARC_X_W(c, 2, ARC_X_R(c, 23));
  /* 16e698: bl #0x16f5f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1500828));
  fn2_16f5f8(c);
  /* 16e69c: add x0, sp, #0x40 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(64)));
  /* 16e6a0: add x1, sp, #0x78 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(120)));
  /* 16e6a4: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1500840));
  fn2_1bc2f8(c);
  /* 16e6a8: sub x0, x29, #0x40 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 16e6ac: add x1, sp, #0x40 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(64)));
  /* 16e6b0: bl #0x1bc0b8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1500852));
  fn2_1bc0b8(c);
  /* 16e6b4: sub x0, x29, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* 16e6b8: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* 16e6bc: stur x25, [x29, #-0x10] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-16)), ARC_X_R(c, 25));
  /* 16e6c0: bl #0x24a164 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1500868));
  fn2_24a164(c);
  /* 16e6c4: sub x0, x29, #0x40 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 16e6c8: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1500876));
  fn2_1bc620(c);
  /* 16e6cc: add x0, sp, #0x40 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(64)));
  /* 16e6d0: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1500884));
  fn2_1bc620(c);
  /* 16e6d4: add x0, sp, #0x78 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(120)));
  /* 16e6d8: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1500892));
  fn2_1ccd9c(c);
  /* 16e6dc: add x0, sp, #0x38 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(56)));
  /* 16e6e0: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1500900));
  fn2_1ccd9c(c);
  /* 16e6e4: ldr x22, [x20, #0x18] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 20) + INT64_C(24))));
  /* 16e6e8: cbz x22, #0x16e948 */
  if ((ARC_X_R(c, 22)) == 0) goto L_16e948;
  /* 16e6ec: adrp x1, #0x1b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(110592)));
  /* 16e6f0: add x1, x1, #0x788 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1928)));
  /* 16e6f4: sub x0, x29, #0x40 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 16e6f8: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 16e6fc: sub x23, x29, #0x40 */
  ARC_X_W(c, 23, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 16e700: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1500932));
  fn2_1b8fd4(c);
  /* 16e704: sub x1, x29, #0x40 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 16e708: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 16e70c: bl #0x221708 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1500944));
  fn2_221708(c);
  /* 16e710: mov w22, w0 */
  ARC_W_W(c, 22, ARC_W_R(c, 0));
  /* 16e714: sub x0, x29, #0x40 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 16e718: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1500956));
  fn2_1d2d24(c);
  /* 16e71c: tbz w22, #0, #0x16e774 */
  if (((ARC_W_R(c, 22)) >> 0 & 1) == 0) goto L_16e774;
  /* 16e720: ldr x22, [x20, #0x18] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 20) + INT64_C(24))));
  /* 16e724: adrp x1, #0x1b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(110592)));
  /* 16e728: add x1, x1, #0x788 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1928)));
  /* 16e72c: sub x0, x29, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* 16e730: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 16e734: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1500984));
  fn2_1b8fd4(c);
  /* 16e738: sub x0, x29, #0x40 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 16e73c: sub x1, x29, #0x10 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* 16e740: bl #0x1bc44c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1500996));
  fn2_1bc44c(c);
  /* 16e744: add x8, sp, #0x20 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(32)));
  /* 16e748: add x1, sp, #0x40 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(64)));
  /* 16e74c: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 16e750: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* 16e754: str x23, [sp, #0x40] */
  arc_st64(((c)->sp + INT64_C(64)), ARC_X_R(c, 23));
  /* 16e758: bl #0x221308 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1501020));
  fn2_221308(c);
  /* 16e75c: sub x0, x29, #0x40 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 16e760: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1501028));
  fn2_1bc620(c);
  /* 16e764: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 16e768: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1501036));
  fn2_1bc620(c);
  /* 16e76c: sub x0, x29, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* 16e770: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1501044));
  fn2_1d2d24(c);
L_16e774:;
  /* 16e774: ldrb w8, [x20, #0x68] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 20) + INT64_C(104))));
  /* 16e778: ldr x19, [sp] */
  ARC_X_W(c, 19, arc_ld64((c)->sp));
  /* 16e77c: strb wzr, [x20, #0x288] */
  arc_st8((ARC_X_R(c, 20) + INT64_C(648)), ARC_W_R(c, 31));
  /* 16e780: tbnz w8, #0, #0x16e790 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_16e790;
  /* 16e784: ldr x8, [x20, #0x2c0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(704))));
  /* 16e788: tbnz x8, #0x3f, #0x16e790 */
  if (((ARC_X_R(c, 8)) >> 63 & 1) != 0) goto L_16e790;
  /* 16e78c: str x8, [x20, #0x2b8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(696)), ARC_X_R(c, 8));
L_16e790:;
  /* 16e790: ldrb w8, [x20, #0x8a] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 20) + INT64_C(138))));
  /* 16e794: mov x9, #-1 */
  ARC_X_W(c, 9, UINT64_C(18446744073709551615));
  /* 16e798: str x9, [x20, #0x2c0] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(704)), ARC_X_R(c, 9));
  /* 16e79c: cbz w8, #0x16e7d4 */
  if ((ARC_W_R(c, 8)) == 0) goto L_16e7d4;
  /* 16e7a0: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 16e7a4: adrp x0, #0x35000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(217088)));
  /* 16e7a8: add x0, x0, #0x207 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(519)));
  /* 16e7ac: strb w8, [x20, #0x148] */
  arc_st8((ARC_X_R(c, 20) + INT64_C(328)), ARC_W_R(c, 8));
  /* 16e7b0: sub x8, x29, #0x40 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 16e7b4: mov x1, #-1 */
  ARC_X_W(c, 1, UINT64_C(18446744073709551615));
  /* 16e7b8: strb wzr, [x20, #0x8a] */
  arc_st8((ARC_X_R(c, 20) + INT64_C(138)), ARC_W_R(c, 31));
  /* 16e7bc: bl #0x1b7d74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1501120));
  fn2_1b7d74(c);
  /* 16e7c0: sub x1, x29, #0x40 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 16e7c4: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 16e7c8: bl #0xfe7b8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1501132));
  fn2_fe7b8(c);
  /* 16e7cc: sub x0, x29, #0x40 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 16e7d0: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1501140));
  fn2_1ccd9c(c);
L_16e7d4:;
  /* 16e7d4: add x0, x20, #0x278 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(632)));
  /* 16e7d8: bl #0x1db7c8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1501148));
  fn2_1db7c8(c);
  /* 16e7dc: tbnz w0, #0, #0x16e8a8 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) != 0) goto L_16e8a8;
  /* 16e7e0: sub x0, x29, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* 16e7e4: add x1, x20, #0x278 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(632)));
  /* 16e7e8: bl #0x1db4b8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1501164));
  fn2_1db4b8(c);
  /* 16e7ec: sub x0, x29, #0x40 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 16e7f0: bl #0x1db4a4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1501172));
  fn2_1db4a4(c);
  /* 16e7f4: add x0, x20, #0x278 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(632)));
  /* 16e7f8: sub x1, x29, #0x40 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 16e7fc: bl #0x1dc768 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1501184));
  fn2_1dc768(c);
  /* 16e800: sub x0, x29, #0x40 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 16e804: bl #0x1db788 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1501192));
  fn2_1db788(c);
  /* 16e808: sub x0, x29, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* 16e80c: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* 16e810: bl #0x1bbf48 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1501204));
  fn2_1bbf48(c);
  /* 16e814: bl #0x1bc668 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1501208));
  fn2_1bc668(c);
  /* 16e818: cmp x0, x21 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 21));
  /* 16e81c: b.le #0x16e8a0 */
  if (ARC_COND(c, 13)) goto L_16e8a0;
  /* 16e820: sub x0, x29, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* 16e824: bl #0x1db794 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1501224));
  fn2_1db794(c);
  /* 16e828: cmp x0, #3 */
  (void)arc_sub64(c, ARC_X_R(c, 0), UINT64_C(3));
  /* 16e82c: b.lt #0x16e844 */
  if (ARC_COND(c, 11)) goto L_16e844;
  /* 16e830: sub x0, x29, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* 16e834: mov w1, #2 */
  ARC_W_W(c, 1, UINT64_C(2));
  /* 16e838: bl #0x1bbf48 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1501244));
  fn2_1bbf48(c);
  /* 16e83c: bl #0x1bc668 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1501248));
  fn2_1bc668(c);
  /* 16e840: b #0x16e848 */
  goto L_16e848;
L_16e844:;
  /* 16e844: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
L_16e848:;
  /* 16e848: str x0, [x20, #0x2c0] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(704)), ARC_X_R(c, 0));
  /* 16e84c: sub x0, x29, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* 16e850: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 16e854: bl #0x1bbf48 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1501272));
  fn2_1bbf48(c);
  /* 16e858: sub x8, x29, #0x40 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 16e85c: bl #0x1bccd0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1501280));
  fn2_1bccd0(c);
  /* 16e860: sub x0, x29, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* 16e864: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* 16e868: bl #0x1bbf48 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1501292));
  fn2_1bbf48(c);
  /* 16e86c: bl #0x1bc668 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1501296));
  fn2_1bc668(c);
  /* 16e870: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 16e874: add x0, sp, #0x40 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(64)));
  /* 16e878: bl #0x1d7878 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1501308));
  fn2_1d7878(c);
  /* 16e87c: sub x1, x29, #0x40 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 16e880: add x3, sp, #0x40 */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(64)));
  /* 16e884: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 16e888: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* 16e88c: bl #0x16d85c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1501328));
  fn2_16d85c(c);
  /* 16e890: add x0, sp, #0x40 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(64)));
  /* 16e894: bl #0x1d79fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1501336));
  fn2_1d79fc(c);
  /* 16e898: sub x0, x29, #0x40 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 16e89c: bl #0x1dde08 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1501344));
  fn2_1dde08(c);
L_16e8a0:;
  /* 16e8a0: sub x0, x29, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* 16e8a4: bl #0x1db788 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1501352));
  fn2_1db788(c);
L_16e8a8:;
  /* 16e8a8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 16e8ac: bl #0x1d7b84 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1501360));
  fn2_1d7b84(c);
  /* 16e8b0: tbz w0, #0, #0x16e8e4 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_16e8e4;
  /* 16e8b4: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 16e8b8: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1501372));
  fn2_1bc084(c);
  /* 16e8bc: adrp x8, #0x257000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 16e8c0: add x2, sp, #8 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(8)));
  /* 16e8c4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 16e8c8: ldr x8, [x8, #0xfb8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(4024))));
  /* 16e8cc: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 16e8d0: mov w3, wzr */
  ARC_W_W(c, 3, ARC_W_R(c, 31));
  /* 16e8d4: ldr x8, [x8, #0xa8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(168))));
  /* 16e8d8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1501404));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 16e8dc: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
L_16e8e0:;
  /* 16e8e0: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1501412));
  fn2_1bc620(c);
L_16e8e4:;
  /* 16e8e4: ldp x20, x19, [sp, #0x140] */
  { const uint64_t _pa = ((c)->sp + INT64_C(320));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 16e8e8: ldp x22, x21, [sp, #0x130] */
  { const uint64_t _pa = ((c)->sp + INT64_C(304));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 16e8ec: ldp x24, x23, [sp, #0x120] */
  { const uint64_t _pa = ((c)->sp + INT64_C(288));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 16e8f0: ldp x26, x25, [sp, #0x110] */
  { const uint64_t _pa = ((c)->sp + INT64_C(272));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* 16e8f4: ldp x28, x27, [sp, #0x100] */
  { const uint64_t _pa = ((c)->sp + INT64_C(256));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* 16e8f8: ldp x29, x30, [sp, #0xf0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(240));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 16e8fc: add sp, sp, #0x150 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(336)));
  /* 16e900: ret  */
  return;
L_16e904:;
  /* 16e904: adrp x0, #0x20000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(131072)));
  /* 16e908: add x0, x0, #0xd66 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3430)));
  /* 16e90c: adrp x1, #0x2e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(188416)));
  /* 16e910: add x1, x1, #0x430 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1072)));
  /* 16e914: adrp x3, #0x1a000 */
  ARC_X_W(c, 3, (arc_image_bases[2] + UINT64_C(106496)));
  /* 16e918: add x3, x3, #0xa84 */
  ARC_X_W(c, 3, (ARC_X_R(c, 3) + UINT64_C(2692)));
  /* 16e91c: mov w2, #0x24d */
  ARC_W_W(c, 2, UINT64_C(589));
  /* 16e920: mov w4, wzr */
  ARC_W_W(c, 4, ARC_W_R(c, 31));
  /* 16e924: mov w5, wzr */
  ARC_W_W(c, 5, ARC_W_R(c, 31));
  /* 16e928: ldp x20, x19, [sp, #0x140] */
  { const uint64_t _pa = ((c)->sp + INT64_C(320));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 16e92c: ldp x22, x21, [sp, #0x130] */
  { const uint64_t _pa = ((c)->sp + INT64_C(304));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 16e930: ldp x24, x23, [sp, #0x120] */
  { const uint64_t _pa = ((c)->sp + INT64_C(288));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 16e934: ldp x26, x25, [sp, #0x110] */
  { const uint64_t _pa = ((c)->sp + INT64_C(272));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* 16e938: ldp x28, x27, [sp, #0x100] */
  { const uint64_t _pa = ((c)->sp + INT64_C(256));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* 16e93c: ldp x29, x30, [sp, #0xf0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(240));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 16e940: add sp, sp, #0x150 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(336)));
  /* 16e944: b #0x1b54b0 */
  fn2_1b54b0(c); return;
L_16e948:;
  /* 16e948: adrp x0, #0x20000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(131072)));
  /* 16e94c: add x0, x0, #0xd66 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3430)));
  /* 16e950: adrp x1, #0x2e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(188416)));
  /* 16e954: add x1, x1, #0x430 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1072)));
  /* 16e958: adrp x3, #0x25000 */
  ARC_X_W(c, 3, (arc_image_bases[2] + UINT64_C(151552)));
  /* 16e95c: add x3, x3, #0xe8b */
  ARC_X_W(c, 3, (ARC_X_R(c, 3) + UINT64_C(3723)));
  /* 16e960: mov w2, #0x263 */
  ARC_W_W(c, 2, UINT64_C(611));
  /* 16e964: mov w4, wzr */
  ARC_W_W(c, 4, ARC_W_R(c, 31));
  /* 16e968: mov w5, wzr */
  ARC_W_W(c, 5, ARC_W_R(c, 31));
  /* 16e96c: bl #0x1b54b0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1501552));
  fn2_1b54b0(c);
  /* 16e970: b #0x16e8e4 */
  goto L_16e8e4;
}

void fn2_17040c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077364236));
  /* 17040c: mov x8, x1 */
  ARC_X_W(c, 8, ARC_X_R(c, 1));
  /* 170410: ldp x1, x9, [x0, #0x60] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(96));
    ARC_X_W(c, 1, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 170414: mov x4, x3 */
  ARC_X_W(c, 4, ARC_X_R(c, 3));
  /* 170418: mov x3, x2 */
  ARC_X_W(c, 3, ARC_X_R(c, 2));
  /* 17041c: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 170420: mov x2, x9 */
  ARC_X_W(c, 2, ARC_X_R(c, 9));
  /* 170424: b #0x170740 */
  fn2_170740(c); return;
}

void fn2_173a88(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077378184));
  /* 173a88: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* 173a8c: stp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 173a90: str x19, [sp, #0x40] */
  arc_st64(((c)->sp + INT64_C(64)), ARC_X_R(c, 19));
  /* 173a94: add x29, sp, #0x30 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(48)));
  /* 173a98: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 173a9c: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* 173aa0: bl #0x1d9740 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1522340));
  fn2_1d9740(c);
  /* 173aa4: adrp x1, #0x1d000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(118784)));
  /* 173aa8: add x1, x1, #0x6ea */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1770)));
  /* 173aac: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 173ab0: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1522356));
  fn2_1b7d24(c);
  /* 173ab4: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* 173ab8: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 173abc: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1522368));
  fn2_1bc2f8(c);
  /* 173ac0: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 173ac4: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1522376));
  fn2_1ccd9c(c);
  /* 173ac8: adrp x1, #0x1b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(110592)));
  /* 173acc: add x1, x1, #0x7b0 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1968)));
  /* 173ad0: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 173ad4: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1522392));
  fn2_1b7d24(c);
  /* 173ad8: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 173adc: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 173ae0: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1522404));
  fn2_1bc2f8(c);
  /* 173ae4: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 173ae8: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1522412));
  fn2_1ccd9c(c);
  /* 173aec: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 173af0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 173af4: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1522424));
  fn2_1bbfa0(c);
  /* 173af8: add x1, sp, #0x18 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(24)));
  /* 173afc: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1522432));
  fn2_1bcf04(c);
  /* 173b00: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 173b04: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1522440));
  fn2_1bc620(c);
  /* 173b08: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* 173b0c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1522448));
  fn2_1bc620(c);
  /* 173b10: adrp x1, #0x24000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(147456)));
  /* 173b14: add x1, x1, #0xbb6 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2998)));
  /* 173b18: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 173b1c: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1522464));
  fn2_1b7d24(c);
  /* 173b20: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* 173b24: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 173b28: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1522476));
  fn2_1bc2f8(c);
  /* 173b2c: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 173b30: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1522484));
  fn2_1ccd9c(c);
  /* 173b34: adrp x1, #0x1a000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(106496)));
  /* 173b38: add x1, x1, #0x53 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(83)));
  /* 173b3c: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 173b40: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1522500));
  fn2_1b7d24(c);
  /* 173b44: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 173b48: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 173b4c: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1522512));
  fn2_1bc2f8(c);
  /* 173b50: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 173b54: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1522520));
  fn2_1ccd9c(c);
  /* 173b58: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 173b5c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 173b60: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1522532));
  fn2_1bbfa0(c);
  /* 173b64: add x1, sp, #0x18 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(24)));
  /* 173b68: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1522540));
  fn2_1bcf04(c);
  /* 173b6c: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 173b70: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1522548));
  fn2_1bc620(c);
  /* 173b74: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* 173b78: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1522556));
  fn2_1bc620(c);
  /* 173b7c: adrp x1, #0x1b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(110592)));
  /* 173b80: add x1, x1, #0x7b4 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1972)));
  /* 173b84: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 173b88: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1522572));
  fn2_1b7d24(c);
  /* 173b8c: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* 173b90: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 173b94: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1522584));
  fn2_1bc2f8(c);
  /* 173b98: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 173b9c: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1522592));
  fn2_1ccd9c(c);
  /* 173ba0: adrp x1, #0x21000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(135168)));
  /* 173ba4: add x1, x1, #0xabe */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2750)));
  /* 173ba8: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 173bac: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1522608));
  fn2_1b7d24(c);
  /* 173bb0: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 173bb4: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 173bb8: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1522620));
  fn2_1bc2f8(c);
  /* 173bbc: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 173bc0: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1522628));
  fn2_1ccd9c(c);
  /* 173bc4: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 173bc8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 173bcc: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1522640));
  fn2_1bbfa0(c);
  /* 173bd0: add x1, sp, #0x18 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(24)));
  /* 173bd4: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1522648));
  fn2_1bcf04(c);
  /* 173bd8: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 173bdc: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1522656));
  fn2_1bc620(c);
  /* 173be0: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* 173be4: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1522664));
  fn2_1bc620(c);
  /* 173be8: ldp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 173bec: ldr x19, [sp, #0x40] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(64))));
  /* 173bf0: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* 173bf4: ret  */
  return;
}

void fn2_175d90(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077387152));
  /* 175d90: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 175d94: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 175d98: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 175d9c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 175da0: bl #0x1b6040 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1531300));
  fn2_1b6040(c);
  /* 175da4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 175da8: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 175dac: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 175db0: b #0x24b730 */
  fn2_24b730(c); return;
}

void fn2_1773f4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077392884));
  /* 1773f4: sub sp, sp, #0xa0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(160)));
  /* 1773f8: stp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1773fc: stp x28, x27, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* 177400: stp x26, x25, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* 177404: stp x24, x23, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 177408: stp x22, x21, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 17740c: stp x20, x19, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 177410: add x29, sp, #0x40 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(64)));
  /* 177414: ldp x28, x27, [x7] */
  { const uint64_t _pa = ARC_X_R(c, 7);
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* 177418: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* 17741c: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 177420: mov x24, x7 */
  ARC_X_W(c, 24, ARC_X_R(c, 7));
  /* 177424: mov x21, x6 */
  ARC_X_W(c, 21, ARC_X_R(c, 6));
  /* 177428: mov x19, x5 */
  ARC_X_W(c, 19, ARC_X_R(c, 5));
  /* 17742c: mov w26, w4 */
  ARC_W_W(c, 26, ARC_W_R(c, 4));
  /* 177430: mov x25, x3 */
  ARC_X_W(c, 25, ARC_X_R(c, 3));
  /* 177434: mov x22, x2 */
  ARC_X_W(c, 22, ARC_X_R(c, 2));
  /* 177438: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 17743c: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1537088));
  fn2_1bc084(c);
  /* 177440: cmp w26, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 26), UINT64_C(1));
  /* 177444: b.lt #0x1774f0 */
  if (ARC_COND(c, 11)) goto L_1774f0;
  /* 177448: ldr x1, [x25] */
  ARC_X_W(c, 1, arc_ld64(ARC_X_R(c, 25)));
  /* 17744c: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 177450: bl #0x1bc09c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1537108));
  fn2_1bc09c(c);
  /* 177454: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 177458: sub x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 17745c: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1537120));
  fn2_1bcf04(c);
  /* 177460: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 177464: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1537128));
  fn2_1bc620(c);
  /* 177468: add x23, x23, x22, asr #1 */
  ARC_X_W(c, 23, (ARC_X_R(c, 23) + ((uint64_t)((int64_t)(ARC_X_R(c, 22)) >> 1))));
  /* 17746c: str wzr, [x21] */
  arc_st32(ARC_X_R(c, 21), ARC_W_R(c, 31));
  /* 177470: tbz w22, #0, #0x17747c */
  if (((ARC_W_R(c, 22)) >> 0 & 1) == 0) goto L_17747c;
L_177474:;
  /* 177474: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 177478: ldr x20, [x8, x20] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 8) + ARC_X_R(c, 20))));
L_17747c:;
  /* 17747c: add x8, sp, #0x18 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(24)));
  /* 177480: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 177484: bl #0x1bccb8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1537160));
  fn2_1bccb8(c);
  /* 177488: add x8, sp, #0x20 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(32)));
  /* 17748c: add x1, sp, #0x18 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(24)));
  /* 177490: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 177494: blr x20 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1537176));
  arc_dispatch(c, ARC_X_R(c, 20));
  /* 177498: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 17749c: add x1, sp, #0x20 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(32)));
  /* 1774a0: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1537188));
  fn2_1bc2f8(c);
  /* 1774a4: sub x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 1774a8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1774ac: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1537200));
  fn2_1bcf04(c);
  /* 1774b0: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 1774b4: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1537208));
  fn2_1bc620(c);
  /* 1774b8: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 1774bc: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1537216));
  fn2_1ccd9c(c);
  /* 1774c0: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* 1774c4: bl #0x1d97fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1537224));
  fn2_1d97fc(c);
  /* 1774c8: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 1774cc: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1537232));
  fn2_1bc620(c);
  /* 1774d0: ldp x20, x19, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1774d4: ldp x22, x21, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1774d8: ldp x24, x23, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 1774dc: ldp x26, x25, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* 1774e0: ldp x28, x27, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* 1774e4: ldp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1774e8: add sp, sp, #0xa0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(160)));
  /* 1774ec: ret  */
  return;
L_1774f0:;
  /* 1774f0: sub x8, x27, x28 */
  ARC_X_W(c, 8, (ARC_X_R(c, 27) - ARC_X_R(c, 28)));
  /* 1774f4: mov w9, #0xaaab */
  ARC_W_W(c, 9, UINT64_C(43691));
  /* 1774f8: mov w10, #-1 */
  ARC_W_W(c, 10, UINT64_C(18446744073709551615));
  /* 1774fc: lsr x8, x8, #3 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(3)) & 63)));
  /* 177500: movk w9, #0xaaaa, lsl #16 */
  ARC_W_W(c, 9, ((ARC_W_R(c, 9) & UINT64_C(18446744069414649855)) | UINT64_C(2863267840)));
  /* 177504: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 177508: madd w8, w8, w9, w10 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 10)) + ((uint32_t)(ARC_W_R(c, 8)) * (uint32_t)(ARC_W_R(c, 9)))));
  /* 17750c: mov w9, #0x18 */
  ARC_W_W(c, 9, UINT64_C(24));
  /* 177510: ldr x10, [x24] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 24)));
  /* 177514: nop  */
  /* nop: no architectural effect here */
  /* 177518: smaddl x1, w8, w9, x10 */
  ARC_X_W(c, 1, (((int64_t)(ARC_X_R(c, 10))) + (((int64_t)(int32_t)(ARC_W_R(c, 8))) * ((int64_t)(int32_t)(ARC_W_R(c, 9))))));
  /* 17751c: bl #0x1bce10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1537312));
  fn2_1bce10(c);
  /* 177520: add x23, x23, x22, asr #1 */
  ARC_X_W(c, 23, (ARC_X_R(c, 23) + ((uint64_t)((int64_t)(ARC_X_R(c, 22)) >> 1))));
  /* 177524: str wzr, [x21] */
  arc_st32(ARC_X_R(c, 21), ARC_W_R(c, 31));
  /* 177528: tbnz w22, #0, #0x177474 */
  if (((ARC_W_R(c, 22)) >> 0 & 1) != 0) goto L_177474;
  /* 17752c: b #0x17747c */
  goto L_17747c;
}

void fn2_179fe4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077404132));
  /* 179fe4: stp x29, x30, [sp, #-0x50]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-80));
    (c)->sp = (c)->sp + INT64_C(-80);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 179fe8: stp x26, x25, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* 179fec: stp x24, x23, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 179ff0: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 179ff4: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 179ff8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 179ffc: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 17a000: mov x0, x1 */
  ARC_X_W(c, 0, ARC_X_R(c, 1));
  /* 17a004: mov x22, x3 */
  ARC_X_W(c, 22, ARC_X_R(c, 3));
  /* 17a008: mov x23, x1 */
  ARC_X_W(c, 23, ARC_X_R(c, 1));
  /* 17a00c: bl #0x1d4e80 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1548304));
  fn2_1d4e80(c);
  /* 17a010: ldr x24, [x19, #8] */
  ARC_X_W(c, 24, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* 17a014: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 17a018: cbz x24, #0x17a040 */
  if ((ARC_X_R(c, 24)) == 0) goto L_17a040;
  /* 17a01c: fmov d0, x24 */
  arc_du_w(c, 0, (uint64_t)(ARC_X_R(c, 24)));
  /* 17a020: cnt v0.8b, v0.8b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = arc_popcount8((c)->q[0].u8[0]);
    _t.u8[1] = arc_popcount8((c)->q[0].u8[1]);
    _t.u8[2] = arc_popcount8((c)->q[0].u8[2]);
    _t.u8[3] = arc_popcount8((c)->q[0].u8[3]);
    _t.u8[4] = arc_popcount8((c)->q[0].u8[4]);
    _t.u8[5] = arc_popcount8((c)->q[0].u8[5]);
    _t.u8[6] = arc_popcount8((c)->q[0].u8[6]);
    _t.u8[7] = arc_popcount8((c)->q[0].u8[7]);
    (c)->q[0] = _t; }
  /* 17a024: uaddlv h0, v0.8b */
  { uint64_t _r = (uint64_t)((c)->q[0].u8[0]);
    _r = (uint64_t)(_r + (uint64_t)((c)->q[0].u8[1]));
    _r = (uint64_t)(_r + (uint64_t)((c)->q[0].u8[2]));
    _r = (uint64_t)(_r + (uint64_t)((c)->q[0].u8[3]));
    _r = (uint64_t)(_r + (uint64_t)((c)->q[0].u8[4]));
    _r = (uint64_t)(_r + (uint64_t)((c)->q[0].u8[5]));
    _r = (uint64_t)(_r + (uint64_t)((c)->q[0].u8[6]));
    _r = (uint64_t)(_r + (uint64_t)((c)->q[0].u8[7]));
    arc_su_w(c, 0, ((uint64_t)_r & UINT64_C(65535))); }
  /* 17a028: fmov w8, s0 */
  ARC_W_W(c, 8, ARC_SU_R(c, 0));
  /* 17a02c: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 17a030: b.hi #0x17a044 */
  if (ARC_COND(c, 8)) goto L_17a044;
  /* 17a034: sub x9, x24, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 24) - UINT64_C(1)));
  /* 17a038: and x25, x9, x21 */
  ARC_X_W(c, 25, (ARC_X_R(c, 9) & ARC_X_R(c, 21)));
  /* 17a03c: b #0x17a058 */
  goto L_17a058;
L_17a040:;
  /* 17a040: b #0x17a0f8 */
  goto L_17a0f8;
L_17a044:;
  /* 17a044: cmp x21, x24 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 24));
  /* 17a048: mov x25, x21 */
  ARC_X_W(c, 25, ARC_X_R(c, 21));
  /* 17a04c: b.lo #0x17a058 */
  if (ARC_COND(c, 3)) goto L_17a058;
  /* 17a050: udiv x9, x21, x24 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 24)) == 0 ? 0 : ((uint64_t)(ARC_X_R(c, 21)) / (uint64_t)(ARC_X_R(c, 24)))));
  /* 17a054: msub x25, x9, x24, x21 */
  ARC_X_W(c, 25, ((uint64_t)(ARC_X_R(c, 21)) - ((uint64_t)(ARC_X_R(c, 9)) * (uint64_t)(ARC_X_R(c, 24)))));
L_17a058:;
  /* 17a058: ldr x9, [x19] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 19)));
  /* 17a05c: ldr x9, [x9, x25, lsl #3] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + ((uint64_t)(ARC_X_R(c, 25)) << 3))));
  /* 17a060: cbz x9, #0x17a0f8 */
  if ((ARC_X_R(c, 9)) == 0) goto L_17a0f8;
  /* 17a064: ldr x20, [x9] */
  ARC_X_W(c, 20, arc_ld64(ARC_X_R(c, 9)));
  /* 17a068: cbz x20, #0x17a0f8 */
  if ((ARC_X_R(c, 20)) == 0) goto L_17a0f8;
  /* 17a06c: cmp x8, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(2));
  /* 17a070: b.hs #0x17a08c */
  if (ARC_COND(c, 2)) goto L_17a08c;
  /* 17a074: sub x26, x24, #1 */
  ARC_X_W(c, 26, (ARC_X_R(c, 24) - UINT64_C(1)));
  /* 17a078: b #0x17a0d4 */
  goto L_17a0d4;
L_17a07c:;
  /* 17a07c: cmp x8, x25 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 25));
  /* 17a080: b.ne #0x17a0f8 */
  if (ARC_COND(c, 1)) goto L_17a0f8;
L_17a084:;
  /* 17a084: ldr x20, [x20] */
  ARC_X_W(c, 20, arc_ld64(ARC_X_R(c, 20)));
  /* 17a088: cbz x20, #0x17a0f8 */
  if ((ARC_X_R(c, 20)) == 0) goto L_17a0f8;
L_17a08c:;
  /* 17a08c: ldr x8, [x20, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(8))));
  /* 17a090: cmp x8, x21 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 21));
  /* 17a094: b.ne #0x17a0ac */
  if (ARC_COND(c, 1)) goto L_17a0ac;
  /* 17a098: add x0, x20, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(16)));
  /* 17a09c: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* 17a0a0: bl #0x1d5690 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1548452));
  fn2_1d5690(c);
  /* 17a0a4: tbz w0, #0, #0x17a084 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_17a084;
  /* 17a0a8: b #0x17a0f0 */
  goto L_17a0f0;
L_17a0ac:;
  /* 17a0ac: cmp x8, x24 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 24));
  /* 17a0b0: b.lo #0x17a07c */
  if (ARC_COND(c, 3)) goto L_17a07c;
  /* 17a0b4: udiv x9, x8, x24 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 24)) == 0 ? 0 : ((uint64_t)(ARC_X_R(c, 8)) / (uint64_t)(ARC_X_R(c, 24)))));
  /* 17a0b8: msub x8, x9, x24, x8 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) - ((uint64_t)(ARC_X_R(c, 9)) * (uint64_t)(ARC_X_R(c, 24)))));
  /* 17a0bc: b #0x17a07c */
  goto L_17a07c;
L_17a0c0:;
  /* 17a0c0: and x8, x8, x26 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) & ARC_X_R(c, 26)));
  /* 17a0c4: cmp x8, x25 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 25));
  /* 17a0c8: b.ne #0x17a0f8 */
  if (ARC_COND(c, 1)) goto L_17a0f8;
L_17a0cc:;
  /* 17a0cc: ldr x20, [x20] */
  ARC_X_W(c, 20, arc_ld64(ARC_X_R(c, 20)));
  /* 17a0d0: cbz x20, #0x17a0f8 */
  if ((ARC_X_R(c, 20)) == 0) goto L_17a0f8;
L_17a0d4:;
  /* 17a0d4: ldr x8, [x20, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(8))));
  /* 17a0d8: cmp x8, x21 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 21));
  /* 17a0dc: b.ne #0x17a0c0 */
  if (ARC_COND(c, 1)) goto L_17a0c0;
  /* 17a0e0: add x0, x20, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(16)));
  /* 17a0e4: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* 17a0e8: bl #0x1d5690 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1548524));
  fn2_1d5690(c);
  /* 17a0ec: tbz w0, #0, #0x17a0cc */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_17a0cc;
L_17a0f0:;
  /* 17a0f0: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 17a0f4: b #0x17a384 */
  goto L_17a384;
L_17a0f8:;
  /* 17a0f8: mov w0, #0xd0 */
  ARC_W_W(c, 0, UINT64_C(208));
  /* 17a0fc: bl #0x24b750 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1548544));
  fn2_24b750(c);
  /* 17a100: ldr x1, [x22] */
  ARC_X_W(c, 1, arc_ld64(ARC_X_R(c, 22)));
  /* 17a104: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 17a108: stp xzr, x21, [x0], #0x10 */
  { const uint64_t _pa = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 17a10c: bl #0x1d2c40 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1548560));
  fn2_1d2c40(c);
  /* 17a110: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* 17a114: mov x22, x20 */
  ARC_X_W(c, 22, ARC_X_R(c, 20));
  /* 17a118: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 17a11c: str xzr, [x20, #0xc8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(200)), ARC_X_R(c, 31));
  /* 17a120: stur q0, [x20, #0xa8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(168)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 20) + INT64_C(168)) + 8, (c)->q[0].u64[1]);
  /* 17a124: stur q0, [x20, #0x98] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(152)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 20) + INT64_C(152)) + 8, (c)->q[0].u64[1]);
  /* 17a128: stur q0, [x20, #0x88] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(136)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 20) + INT64_C(136)) + 8, (c)->q[0].u64[1]);
  /* 17a12c: stur q0, [x20, #0x78] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(120)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 20) + INT64_C(120)) + 8, (c)->q[0].u64[1]);
  /* 17a130: stur q0, [x20, #0x68] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(104)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 20) + INT64_C(104)) + 8, (c)->q[0].u64[1]);
  /* 17a134: stur q0, [x20, #0x58] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(88)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 20) + INT64_C(88)) + 8, (c)->q[0].u64[1]);
  /* 17a138: stur q0, [x20, #0x48] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(72)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 20) + INT64_C(72)) + 8, (c)->q[0].u64[1]);
  /* 17a13c: stur q0, [x20, #0x38] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(56)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 20) + INT64_C(56)) + 8, (c)->q[0].u64[1]);
  /* 17a140: stur q0, [x20, #0x28] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(40)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 20) + INT64_C(40)) + 8, (c)->q[0].u64[1]);
  /* 17a144: str q0, [x22, #0xb8]! */
  arc_st64((ARC_X_R(c, 22) + INT64_C(184)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 22) + INT64_C(184)) + 8, (c)->q[0].u64[1]);
  ARC_X_W(c, 22, ARC_X_R(c, 22) + INT64_C(184));
  /* 17a148: str q0, [x0, #0x18]! */
  arc_st64((ARC_X_R(c, 0) + INT64_C(24)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 0) + INT64_C(24)) + 8, (c)->q[0].u64[1]);
  ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(24));
  /* 17a14c: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1548624));
  fn2_1d2c2c(c);
  /* 17a150: add x0, x20, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(32)));
  /* 17a154: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1548632));
  fn2_1d2c2c(c);
  /* 17a158: mov w8, #2 */
  ARC_W_W(c, 8, UINT64_C(2));
  /* 17a15c: mov x9, x20 */
  ARC_X_W(c, 9, ARC_X_R(c, 20));
  /* 17a160: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* 17a164: str w8, [x20, #0x28] */
  arc_st32((ARC_X_R(c, 20) + INT64_C(40)), ARC_W_R(c, 8));
  /* 17a168: mov w8, #0x3f800000 */
  ARC_W_W(c, 8, UINT64_C(1065353216));
  /* 17a16c: ldr s1, [x19, #0x20] */
  arc_su_w(c, 1, arc_ld32((ARC_X_R(c, 19) + INT64_C(32))));
  /* 17a170: str xzr, [x9, #0x60]! */
  { const uint64_t _a = (ARC_X_R(c, 9) + INT64_C(96));
    ARC_X_W(c, 9, ARC_X_R(c, 9) + INT64_C(96));
    arc_st64(_a, ARC_X_R(c, 31));
  }
  /* 17a174: str w8, [x20, #0x50] */
  arc_st32((ARC_X_R(c, 20) + INT64_C(80)), ARC_W_R(c, 8));
  /* 17a178: str x9, [x20, #0x58] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(88)), ARC_X_R(c, 9));
  /* 17a17c: ldr x9, [x19, #0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(24))));
  /* 17a180: str w8, [x20, #0x90] */
  arc_st32((ARC_X_R(c, 20) + INT64_C(144)), ARC_W_R(c, 8));
  /* 17a184: mov x8, x20 */
  ARC_X_W(c, 8, ARC_X_R(c, 20));
  /* 17a188: str xzr, [x8, #0xa0]! */
  { const uint64_t _a = (ARC_X_R(c, 8) + INT64_C(160));
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(160));
    arc_st64(_a, ARC_X_R(c, 31));
  }
  /* 17a18c: str x8, [x20, #0x98] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(152)), ARC_X_R(c, 8));
  /* 17a190: add x8, x9, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) + UINT64_C(1)));
  /* 17a194: stp q0, q0, [x20, #0x30] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(48));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* 17a198: stp q0, q0, [x20, #0x70] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(112));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* 17a19c: ucvtf s0, x8 */
  arc_s_w(c, 0, (float)(((uint64_t)(ARC_X_R(c, 8)))));
  /* 17a1a0: str xzr, [x20, #0x68] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(104)), ARC_X_R(c, 31));
  /* 17a1a4: str xzr, [x22] */
  arc_st64(ARC_X_R(c, 22), ARC_X_R(c, 31));
  /* 17a1a8: stp xzr, x22, [x20, #0xa8] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(168));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 22));
  }
  /* 17a1ac: stp xzr, xzr, [x20, #0xc0] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(192));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 17a1b0: cbz x24, #0x17a1dc */
  if ((ARC_X_R(c, 24)) == 0) goto L_17a1dc;
  /* 17a1b4: ucvtf s2, x24 */
  arc_s_w(c, 2, (float)(((uint64_t)(ARC_X_R(c, 24)))));
  /* 17a1b8: fmul s2, s1, s2 */
  arc_s_w(c, 2, (float)(arc_fmul32(ARC_S_R(c, 1), ARC_S_R(c, 2))));
  /* 17a1bc: fcmp s2, s0 */
  arc_fcmp(c, (double)(ARC_S_R(c, 2)), (double)(ARC_S_R(c, 0)));
  /* 17a1c0: b.mi #0x17a1dc */
  if (ARC_COND(c, 4)) goto L_17a1dc;
  /* 17a1c4: ldr x9, [x19] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 19)));
  /* 17a1c8: ldr x8, [x9, x25, lsl #3] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + ((uint64_t)(ARC_X_R(c, 25)) << 3))));
  /* 17a1cc: cbz x8, #0x17a2f0 */
  if ((ARC_X_R(c, 8)) == 0) goto L_17a2f0;
L_17a1d0:;
  /* 17a1d0: ldr x9, [x8] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 8)));
  /* 17a1d4: str x9, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 9));
  /* 17a1d8: b #0x17a370 */
  goto L_17a370;
L_17a1dc:;
  /* 17a1dc: lsl x8, x24, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 24)) << ((UINT64_C(1)) & 63)));
  /* 17a1e0: cmp x24, #3 */
  (void)arc_sub64(c, ARC_X_R(c, 24), UINT64_C(3));
  /* 17a1e4: b.lo #0x17a1f8 */
  if (ARC_COND(c, 3)) goto L_17a1f8;
  /* 17a1e8: sub x9, x24, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 24) - UINT64_C(1)));
  /* 17a1ec: tst x24, x9 */
  arc_flags_logical64(c, (uint64_t)(ARC_X_R(c, 24) & ARC_X_R(c, 9)));
  /* 17a1f0: cset w9, ne */
  ARC_W_W(c, 9, (ARC_COND(c, 1) ? 1 : 0));
  /* 17a1f4: b #0x17a1fc */
  goto L_17a1fc;
L_17a1f8:;
  /* 17a1f8: mov w9, #1 */
  ARC_W_W(c, 9, UINT64_C(1));
L_17a1fc:;
  /* 17a1fc: fdiv s0, s0, s1 */
  arc_s_w(c, 0, (float)(arc_fdiv32(ARC_S_R(c, 0), ARC_S_R(c, 1))));
  /* 17a200: orr x8, x9, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) | ARC_X_R(c, 8)));
  /* 17a204: fcvtpu x10, s0 */
  ARC_X_W(c, 10, arc_f2u64((double)(ceil((double)(ARC_S_R(c, 0))))));
  /* 17a208: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* 17a20c: csel x1, x8, x10, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 10)));
  /* 17a210: subs x8, x1, #1 */
  ARC_X_W(c, 8, arc_sub64(c, ARC_X_R(c, 1), UINT64_C(1)));
  /* 17a214: b.ne #0x17a220 */
  if (ARC_COND(c, 1)) goto L_17a220;
  /* 17a218: mov w1, #2 */
  ARC_W_W(c, 1, UINT64_C(2));
  /* 17a21c: b #0x17a234 */
  goto L_17a234;
L_17a220:;
  /* 17a220: tst x1, x8 */
  arc_flags_logical64(c, (uint64_t)(ARC_X_R(c, 1) & ARC_X_R(c, 8)));
  /* 17a224: b.eq #0x17a234 */
  if (ARC_COND(c, 0)) goto L_17a234;
  /* 17a228: mov x0, x1 */
  ARC_X_W(c, 0, ARC_X_R(c, 1));
  /* 17a22c: bl #0x24b7c0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1548848));
  fn2_24b7c0(c);
  /* 17a230: mov x1, x0 */
  ARC_X_W(c, 1, ARC_X_R(c, 0));
L_17a234:;
  /* 17a234: ldr x22, [x19, #8] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* 17a238: cmp x1, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 1), ARC_X_R(c, 22));
  /* 17a23c: b.ls #0x17a24c */
  if (ARC_COND(c, 9)) goto L_17a24c;
L_17a240:;
  /* 17a240: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 17a244: bl #0x17a3a0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1548872));
  fn2_17a3a0(c);
  /* 17a248: b #0x17a2d0 */
  goto L_17a2d0;
L_17a24c:;
  /* 17a24c: b.hs #0x17a2d0 */
  if (ARC_COND(c, 2)) goto L_17a2d0;
  /* 17a250: ldr x8, [x19, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(24))));
  /* 17a254: ldr s1, [x19, #0x20] */
  arc_su_w(c, 1, arc_ld32((ARC_X_R(c, 19) + INT64_C(32))));
  /* 17a258: cmp x22, #3 */
  (void)arc_sub64(c, ARC_X_R(c, 22), UINT64_C(3));
  /* 17a25c: ucvtf s0, x8 */
  arc_s_w(c, 0, (float)(((uint64_t)(ARC_X_R(c, 8)))));
  /* 17a260: fdiv s0, s0, s1 */
  arc_s_w(c, 0, (float)(arc_fdiv32(ARC_S_R(c, 0), ARC_S_R(c, 1))));
  /* 17a264: fcvtpu x0, s0 */
  ARC_X_W(c, 0, arc_f2u64((double)(ceil((double)(ARC_S_R(c, 0))))));
  /* 17a268: b.lo #0x17a2b4 */
  if (ARC_COND(c, 3)) goto L_17a2b4;
  /* 17a26c: fmov d0, x22 */
  arc_du_w(c, 0, (uint64_t)(ARC_X_R(c, 22)));
  /* 17a270: cnt v0.8b, v0.8b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = arc_popcount8((c)->q[0].u8[0]);
    _t.u8[1] = arc_popcount8((c)->q[0].u8[1]);
    _t.u8[2] = arc_popcount8((c)->q[0].u8[2]);
    _t.u8[3] = arc_popcount8((c)->q[0].u8[3]);
    _t.u8[4] = arc_popcount8((c)->q[0].u8[4]);
    _t.u8[5] = arc_popcount8((c)->q[0].u8[5]);
    _t.u8[6] = arc_popcount8((c)->q[0].u8[6]);
    _t.u8[7] = arc_popcount8((c)->q[0].u8[7]);
    (c)->q[0] = _t; }
  /* 17a274: uaddlv h0, v0.8b */
  { uint64_t _r = (uint64_t)((c)->q[0].u8[0]);
    _r = (uint64_t)(_r + (uint64_t)((c)->q[0].u8[1]));
    _r = (uint64_t)(_r + (uint64_t)((c)->q[0].u8[2]));
    _r = (uint64_t)(_r + (uint64_t)((c)->q[0].u8[3]));
    _r = (uint64_t)(_r + (uint64_t)((c)->q[0].u8[4]));
    _r = (uint64_t)(_r + (uint64_t)((c)->q[0].u8[5]));
    _r = (uint64_t)(_r + (uint64_t)((c)->q[0].u8[6]));
    _r = (uint64_t)(_r + (uint64_t)((c)->q[0].u8[7]));
    arc_su_w(c, 0, ((uint64_t)_r & UINT64_C(65535))); }
  /* 17a278: fmov w8, s0 */
  ARC_W_W(c, 8, ARC_SU_R(c, 0));
  /* 17a27c: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 17a280: b.hi #0x17a2b4 */
  if (ARC_COND(c, 8)) goto L_17a2b4;
  /* 17a284: sub x8, x0, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) - UINT64_C(1)));
  /* 17a288: mov w9, #1 */
  ARC_W_W(c, 9, UINT64_C(1));
  /* 17a28c: cmp x0, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 0), UINT64_C(2));
  /* 17a290: clz x8, x8 */
  ARC_X_W(c, 8, arc_clz64(ARC_X_R(c, 8)));
  /* 17a294: neg x8, x8 */
  ARC_X_W(c, 8, ((uint64_t)0 - (uint64_t)(ARC_X_R(c, 8))));
  /* 17a298: lsl x8, x9, x8 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 9)) << ((ARC_X_R(c, 8)) & 63)));
  /* 17a29c: csel x0, x0, x8, lo */
  ARC_X_W(c, 0, (ARC_COND(c, 3) ? (ARC_X_R(c, 0)) : ARC_X_R(c, 8)));
  /* 17a2a0: cmp x1, x0 */
  (void)arc_sub64(c, ARC_X_R(c, 1), ARC_X_R(c, 0));
  /* 17a2a4: csel x1, x1, x0, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 1)) : ARC_X_R(c, 0)));
  /* 17a2a8: cmp x1, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 1), ARC_X_R(c, 22));
  /* 17a2ac: b.lo #0x17a240 */
  if (ARC_COND(c, 3)) goto L_17a240;
  /* 17a2b0: b #0x17a2d0 */
  goto L_17a2d0;
L_17a2b4:;
  /* 17a2b4: mov x23, x1 */
  ARC_X_W(c, 23, ARC_X_R(c, 1));
  /* 17a2b8: bl #0x24b7c0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1548988));
  fn2_24b7c0(c);
  /* 17a2bc: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* 17a2c0: cmp x23, x0 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 0));
  /* 17a2c4: csel x1, x23, x0, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 23)) : ARC_X_R(c, 0)));
  /* 17a2c8: cmp x1, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 1), ARC_X_R(c, 22));
  /* 17a2cc: b.lo #0x17a240 */
  if (ARC_COND(c, 3)) goto L_17a240;
L_17a2d0:;
  /* 17a2d0: ldr x24, [x19, #8] */
  ARC_X_W(c, 24, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* 17a2d4: sub x8, x24, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 24) - UINT64_C(1)));
  /* 17a2d8: tst x24, x8 */
  arc_flags_logical64(c, (uint64_t)(ARC_X_R(c, 24) & ARC_X_R(c, 8)));
  /* 17a2dc: b.ne #0x17a324 */
  if (ARC_COND(c, 1)) goto L_17a324;
  /* 17a2e0: and x25, x8, x21 */
  ARC_X_W(c, 25, (ARC_X_R(c, 8) & ARC_X_R(c, 21)));
  /* 17a2e4: ldr x9, [x19] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 19)));
  /* 17a2e8: ldr x8, [x9, x25, lsl #3] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + ((uint64_t)(ARC_X_R(c, 25)) << 3))));
  /* 17a2ec: cbnz x8, #0x17a1d0 */
  if ((ARC_X_R(c, 8)) != 0) goto L_17a1d0;
L_17a2f0:;
  /* 17a2f0: mov x8, x19 */
  ARC_X_W(c, 8, ARC_X_R(c, 19));
  /* 17a2f4: ldr x10, [x8, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 8) + INT64_C(16));
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(16));
    ARC_X_W(c, 10, arc_ld64(_a));
  }
  /* 17a2f8: str x20, [x8] */
  arc_st64(ARC_X_R(c, 8), ARC_X_R(c, 20));
  /* 17a2fc: str x10, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 10));
  /* 17a300: str x8, [x9, x25, lsl #3] */
  arc_st64((ARC_X_R(c, 9) + ((uint64_t)(ARC_X_R(c, 25)) << 3)), ARC_X_R(c, 8));
  /* 17a304: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 17a308: cbz x8, #0x17a374 */
  if ((ARC_X_R(c, 8)) == 0) goto L_17a374;
  /* 17a30c: sub x9, x24, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 24) - UINT64_C(1)));
  /* 17a310: ldr x8, [x8, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(8))));
  /* 17a314: tst x24, x9 */
  arc_flags_logical64(c, (uint64_t)(ARC_X_R(c, 24) & ARC_X_R(c, 9)));
  /* 17a318: b.ne #0x17a358 */
  if (ARC_COND(c, 1)) goto L_17a358;
  /* 17a31c: and x8, x8, x9 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) & ARC_X_R(c, 9)));
  /* 17a320: b #0x17a368 */
  goto L_17a368;
L_17a324:;
  /* 17a324: cmp x21, x24 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 24));
  /* 17a328: b.hs #0x17a340 */
  if (ARC_COND(c, 2)) goto L_17a340;
  /* 17a32c: mov x25, x21 */
  ARC_X_W(c, 25, ARC_X_R(c, 21));
  /* 17a330: ldr x9, [x19] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 19)));
  /* 17a334: ldr x8, [x9, x21, lsl #3] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + ((uint64_t)(ARC_X_R(c, 21)) << 3))));
  /* 17a338: cbnz x8, #0x17a1d0 */
  if ((ARC_X_R(c, 8)) != 0) goto L_17a1d0;
  /* 17a33c: b #0x17a2f0 */
  goto L_17a2f0;
L_17a340:;
  /* 17a340: udiv x8, x21, x24 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 24)) == 0 ? 0 : ((uint64_t)(ARC_X_R(c, 21)) / (uint64_t)(ARC_X_R(c, 24)))));
  /* 17a344: msub x25, x8, x24, x21 */
  ARC_X_W(c, 25, ((uint64_t)(ARC_X_R(c, 21)) - ((uint64_t)(ARC_X_R(c, 8)) * (uint64_t)(ARC_X_R(c, 24)))));
  /* 17a348: ldr x9, [x19] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 19)));
  /* 17a34c: ldr x8, [x9, x25, lsl #3] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + ((uint64_t)(ARC_X_R(c, 25)) << 3))));
  /* 17a350: cbnz x8, #0x17a1d0 */
  if ((ARC_X_R(c, 8)) != 0) goto L_17a1d0;
  /* 17a354: b #0x17a2f0 */
  goto L_17a2f0;
L_17a358:;
  /* 17a358: cmp x8, x24 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 24));
  /* 17a35c: b.lo #0x17a368 */
  if (ARC_COND(c, 3)) goto L_17a368;
  /* 17a360: udiv x9, x8, x24 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 24)) == 0 ? 0 : ((uint64_t)(ARC_X_R(c, 8)) / (uint64_t)(ARC_X_R(c, 24)))));
  /* 17a364: msub x8, x9, x24, x8 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) - ((uint64_t)(ARC_X_R(c, 9)) * (uint64_t)(ARC_X_R(c, 24)))));
L_17a368:;
  /* 17a368: ldr x9, [x19] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 19)));
  /* 17a36c: add x8, x9, x8, lsl #3 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) + ((uint64_t)(ARC_X_R(c, 8)) << 3)));
L_17a370:;
  /* 17a370: str x20, [x8] */
  arc_st64(ARC_X_R(c, 8), ARC_X_R(c, 20));
L_17a374:;
  /* 17a374: ldr x8, [x19, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(24))));
  /* 17a378: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* 17a37c: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* 17a380: str x8, [x19, #0x18] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(24)), ARC_X_R(c, 8));
L_17a384:;
  /* 17a384: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 17a388: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 17a38c: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 17a390: ldp x24, x23, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 17a394: ldp x26, x25, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* 17a398: ldp x29, x30, [sp], #0x50 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(80);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 17a39c: ret  */
  return;
}

void fn2_17c9c8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077414856));
  /* 17c9c8: cbz x0, #0x17ca14 */
  if ((ARC_X_R(c, 0)) == 0) goto L_17ca14;
  /* 17c9cc: sub sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(48)));
  /* 17c9d0: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 17c9d4: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 17c9d8: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 17c9dc: add x8, sp, #8 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(8)));
  /* 17c9e0: mov x20, x2 */
  ARC_X_W(c, 20, ARC_X_R(c, 2));
  /* 17c9e4: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 17c9e8: bl #0x17baac */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1559020));
  fn2_17baac(c);
  /* 17c9ec: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 17c9f0: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 17c9f4: bl #0x1d0708 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1559032));
  fn2_1d0708(c);
  /* 17c9f8: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 17c9fc: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1559040));
  fn2_1ccd9c(c);
  /* 17ca00: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 17ca04: strb w8, [x19] */
  arc_st8(ARC_X_R(c, 19), ARC_W_R(c, 8));
  /* 17ca08: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 17ca0c: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 17ca10: add sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(48)));
L_17ca14:;
  /* 17ca14: ret  */
  return;
}

void fn2_17d890(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077418640));
  /* 17d890: cbz x0, #0x17d8dc */
  if ((ARC_X_R(c, 0)) == 0) goto L_17d8dc;
  /* 17d894: sub sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(48)));
  /* 17d898: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 17d89c: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 17d8a0: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 17d8a4: add x8, sp, #8 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(8)));
  /* 17d8a8: mov x20, x2 */
  ARC_X_W(c, 20, ARC_X_R(c, 2));
  /* 17d8ac: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 17d8b0: bl #0x17baac */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1562804));
  fn2_17baac(c);
  /* 17d8b4: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 17d8b8: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 17d8bc: bl #0x1d0708 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1562816));
  fn2_1d0708(c);
  /* 17d8c0: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 17d8c4: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1562824));
  fn2_1ccd9c(c);
  /* 17d8c8: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 17d8cc: strb w8, [x19] */
  arc_st8(ARC_X_R(c, 19), ARC_W_R(c, 8));
  /* 17d8d0: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 17d8d4: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 17d8d8: add sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(48)));
L_17d8dc:;
  /* 17d8dc: ret  */
  return;
}

void fn2_17e7a0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077422496));
  /* 17e7a0: cbz x0, #0x17e828 */
  if ((ARC_X_R(c, 0)) == 0) goto L_17e828;
  /* 17e7a4: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* 17e7a8: stp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 17e7ac: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 17e7b0: add x29, sp, #0x30 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(48)));
  /* 17e7b4: add x0, sp, #0xc */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(12)));
  /* 17e7b8: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 17e7bc: add x20, sp, #0xc */
  ARC_X_W(c, 20, ((c)->sp + UINT64_C(12)));
  /* 17e7c0: bl #0x17b9fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1566660));
  fn2_17b9fc(c);
  /* 17e7c4: ldr w8, [sp, #0xc] */
  ARC_W_W(c, 8, arc_ld32(((c)->sp + INT64_C(12))));
  /* 17e7c8: ldr x0, [x19, #8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* 17e7cc: add x1, x20, #4 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(4)));
  /* 17e7d0: str w8, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 8));
  /* 17e7d4: bl #0x1d5dc0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1566680));
  fn2_1d5dc0(c);
  /* 17e7d8: ldr w8, [sp, #0x20] */
  ARC_W_W(c, 8, arc_ld32(((c)->sp + INT64_C(32))));
  /* 17e7dc: ldr x0, [x19, #0x20] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(32))));
  /* 17e7e0: add x1, x20, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(24)));
  /* 17e7e4: str w8, [x19, #0x18] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(24)), ARC_W_R(c, 8));
  /* 17e7e8: bl #0x1d06b8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1566700));
  fn2_1d06b8(c);
  /* 17e7ec: ldr w8, [sp, #0x2c] */
  ARC_W_W(c, 8, arc_ld32(((c)->sp + INT64_C(44))));
  /* 17e7f0: ldr x0, [x19, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* 17e7f4: add x1, x20, #0xc */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(12)));
  /* 17e7f8: str w8, [x19, #0x28] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(40)), ARC_W_R(c, 8));
  /* 17e7fc: bl #0x1d5dc0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1566720));
  fn2_1d5dc0(c);
  /* 17e800: add x0, x20, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(24)));
  /* 17e804: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1566728));
  fn2_1ccd9c(c);
  /* 17e808: add x0, x20, #0xc */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(12)));
  /* 17e80c: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1566736));
  fn2_1d2d24(c);
  /* 17e810: add x0, x20, #4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(4)));
  /* 17e814: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1566744));
  fn2_1d2d24(c);
  /* 17e818: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 17e81c: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 17e820: ldp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 17e824: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
L_17e828:;
  /* 17e828: ret  */
  return;
}

void fn2_17f668(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077426280));
  /* 17f668: cbz x0, #0x17f6f0 */
  if ((ARC_X_R(c, 0)) == 0) goto L_17f6f0;
  /* 17f66c: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* 17f670: stp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 17f674: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 17f678: add x29, sp, #0x30 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(48)));
  /* 17f67c: add x0, sp, #0xc */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(12)));
  /* 17f680: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 17f684: add x20, sp, #0xc */
  ARC_X_W(c, 20, ((c)->sp + UINT64_C(12)));
  /* 17f688: bl #0x17b9fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1570444));
  fn2_17b9fc(c);
  /* 17f68c: ldr w8, [sp, #0xc] */
  ARC_W_W(c, 8, arc_ld32(((c)->sp + INT64_C(12))));
  /* 17f690: ldr x0, [x19, #8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* 17f694: add x1, x20, #4 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(4)));
  /* 17f698: str w8, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 8));
  /* 17f69c: bl #0x1d5dc0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1570464));
  fn2_1d5dc0(c);
  /* 17f6a0: ldr w8, [sp, #0x20] */
  ARC_W_W(c, 8, arc_ld32(((c)->sp + INT64_C(32))));
  /* 17f6a4: ldr x0, [x19, #0x20] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(32))));
  /* 17f6a8: add x1, x20, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(24)));
  /* 17f6ac: str w8, [x19, #0x18] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(24)), ARC_W_R(c, 8));
  /* 17f6b0: bl #0x1d06b8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1570484));
  fn2_1d06b8(c);
  /* 17f6b4: ldr w8, [sp, #0x2c] */
  ARC_W_W(c, 8, arc_ld32(((c)->sp + INT64_C(44))));
  /* 17f6b8: ldr x0, [x19, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* 17f6bc: add x1, x20, #0xc */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(12)));
  /* 17f6c0: str w8, [x19, #0x28] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(40)), ARC_W_R(c, 8));
  /* 17f6c4: bl #0x1d5dc0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1570504));
  fn2_1d5dc0(c);
  /* 17f6c8: add x0, x20, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(24)));
  /* 17f6cc: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1570512));
  fn2_1ccd9c(c);
  /* 17f6d0: add x0, x20, #0xc */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(12)));
  /* 17f6d4: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1570520));
  fn2_1d2d24(c);
  /* 17f6d8: add x0, x20, #4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(4)));
  /* 17f6dc: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1570528));
  fn2_1d2d24(c);
  /* 17f6e0: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 17f6e4: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 17f6e8: ldp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 17f6ec: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
L_17f6f0:;
  /* 17f6f0: ret  */
  return;
}

void fn2_180530(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077430064));
  /* 180530: cbz x0, #0x1805b8 */
  if ((ARC_X_R(c, 0)) == 0) goto L_1805b8;
  /* 180534: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* 180538: stp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 18053c: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 180540: add x29, sp, #0x30 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(48)));
  /* 180544: add x0, sp, #0xc */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(12)));
  /* 180548: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 18054c: add x20, sp, #0xc */
  ARC_X_W(c, 20, ((c)->sp + UINT64_C(12)));
  /* 180550: bl #0x17b9fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1574228));
  fn2_17b9fc(c);
  /* 180554: ldr w8, [sp, #0xc] */
  ARC_W_W(c, 8, arc_ld32(((c)->sp + INT64_C(12))));
  /* 180558: ldr x0, [x19, #8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* 18055c: add x1, x20, #4 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(4)));
  /* 180560: str w8, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 8));
  /* 180564: bl #0x1d5dc0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1574248));
  fn2_1d5dc0(c);
  /* 180568: ldr w8, [sp, #0x20] */
  ARC_W_W(c, 8, arc_ld32(((c)->sp + INT64_C(32))));
  /* 18056c: ldr x0, [x19, #0x20] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(32))));
  /* 180570: add x1, x20, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(24)));
  /* 180574: str w8, [x19, #0x18] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(24)), ARC_W_R(c, 8));
  /* 180578: bl #0x1d06b8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1574268));
  fn2_1d06b8(c);
  /* 18057c: ldr w8, [sp, #0x2c] */
  ARC_W_W(c, 8, arc_ld32(((c)->sp + INT64_C(44))));
  /* 180580: ldr x0, [x19, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* 180584: add x1, x20, #0xc */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(12)));
  /* 180588: str w8, [x19, #0x28] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(40)), ARC_W_R(c, 8));
  /* 18058c: bl #0x1d5dc0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1574288));
  fn2_1d5dc0(c);
  /* 180590: add x0, x20, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(24)));
  /* 180594: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1574296));
  fn2_1ccd9c(c);
  /* 180598: add x0, x20, #0xc */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(12)));
  /* 18059c: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1574304));
  fn2_1d2d24(c);
  /* 1805a0: add x0, x20, #4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(4)));
  /* 1805a4: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1574312));
  fn2_1d2d24(c);
  /* 1805a8: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 1805ac: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1805b0: ldp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1805b4: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
L_1805b8:;
  /* 1805b8: ret  */
  return;
}

void fn2_1813f8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077433848));
  /* 1813f8: cbz x0, #0x181480 */
  if ((ARC_X_R(c, 0)) == 0) goto L_181480;
  /* 1813fc: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* 181400: stp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 181404: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 181408: add x29, sp, #0x30 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(48)));
  /* 18140c: add x0, sp, #0xc */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(12)));
  /* 181410: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 181414: add x20, sp, #0xc */
  ARC_X_W(c, 20, ((c)->sp + UINT64_C(12)));
  /* 181418: bl #0x17b9fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1578012));
  fn2_17b9fc(c);
  /* 18141c: ldr w8, [sp, #0xc] */
  ARC_W_W(c, 8, arc_ld32(((c)->sp + INT64_C(12))));
  /* 181420: ldr x0, [x19, #8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* 181424: add x1, x20, #4 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(4)));
  /* 181428: str w8, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 8));
  /* 18142c: bl #0x1d5dc0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1578032));
  fn2_1d5dc0(c);
  /* 181430: ldr w8, [sp, #0x20] */
  ARC_W_W(c, 8, arc_ld32(((c)->sp + INT64_C(32))));
  /* 181434: ldr x0, [x19, #0x20] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(32))));
  /* 181438: add x1, x20, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(24)));
  /* 18143c: str w8, [x19, #0x18] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(24)), ARC_W_R(c, 8));
  /* 181440: bl #0x1d06b8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1578052));
  fn2_1d06b8(c);
  /* 181444: ldr w8, [sp, #0x2c] */
  ARC_W_W(c, 8, arc_ld32(((c)->sp + INT64_C(44))));
  /* 181448: ldr x0, [x19, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* 18144c: add x1, x20, #0xc */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(12)));
  /* 181450: str w8, [x19, #0x28] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(40)), ARC_W_R(c, 8));
  /* 181454: bl #0x1d5dc0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1578072));
  fn2_1d5dc0(c);
  /* 181458: add x0, x20, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(24)));
  /* 18145c: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1578080));
  fn2_1ccd9c(c);
  /* 181460: add x0, x20, #0xc */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(12)));
  /* 181464: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1578088));
  fn2_1d2d24(c);
  /* 181468: add x0, x20, #4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(4)));
  /* 18146c: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1578096));
  fn2_1d2d24(c);
  /* 181470: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 181474: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 181478: ldp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 18147c: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
L_181480:;
  /* 181480: ret  */
  return;
}

void fn2_182448(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077438024));
  /* 182448: cbz x0, #0x182494 */
  if ((ARC_X_R(c, 0)) == 0) goto L_182494;
  /* 18244c: sub sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(48)));
  /* 182450: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 182454: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 182458: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 18245c: add x8, sp, #8 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(8)));
  /* 182460: mov x20, x2 */
  ARC_X_W(c, 20, ARC_X_R(c, 2));
  /* 182464: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 182468: bl #0x17baac */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1582188));
  fn2_17baac(c);
  /* 18246c: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 182470: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 182474: bl #0x1d0708 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1582200));
  fn2_1d0708(c);
  /* 182478: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 18247c: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1582208));
  fn2_1ccd9c(c);
  /* 182480: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 182484: strb w8, [x19] */
  arc_st8(ARC_X_R(c, 19), ARC_W_R(c, 8));
  /* 182488: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 18248c: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 182490: add sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(48)));
L_182494:;
  /* 182494: ret  */
  return;
}

void fn2_183b08(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077443848));
  /* 183b08: cbz x0, #0x183b20 */
  if ((ARC_X_R(c, 0)) == 0) goto L_183b20;
  /* 183b0c: ldr x8, [x0, #8]! */
  { const uint64_t _a = (ARC_X_R(c, 0) + INT64_C(8));
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_a));
  }
  /* 183b10: cbz x8, #0x183b1c */
  if ((ARC_X_R(c, 8)) == 0) goto L_183b1c;
  /* 183b14: ldr w8, [x8, #0x10] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 8) + INT64_C(16))));
  /* 183b18: cbnz w8, #0x183b30 */
  if ((ARC_W_R(c, 8)) != 0) goto L_183b30;
L_183b1c:;
  /* 183b1c: b #0x1afec8 */
  fn2_1afec8(c); return;
L_183b20:;
  /* 183b20: cbz x1, #0x183b6c */
  if ((ARC_X_R(c, 1)) == 0) goto L_183b6c;
  /* 183b24: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
  /* 183b28: str wzr, [x1] */
  arc_st32(ARC_X_R(c, 1), ARC_W_R(c, 31));
  /* 183b2c: ret  */
  return;
L_183b30:;
  /* 183b30: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 183b34: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 183b38: adrp x0, #0x24000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(147456)));
  /* 183b3c: add x0, x0, #0xbba */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3002)));
  /* 183b40: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* 183b44: add x1, x1, #0x2f6 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(758)));
  /* 183b48: adrp x3, #0x29000 */
  ARC_X_W(c, 3, (arc_image_bases[2] + UINT64_C(167936)));
  /* 183b4c: add x3, x3, #0x73a */
  ARC_X_W(c, 3, (ARC_X_R(c, 3) + UINT64_C(1850)));
  /* 183b50: adrp x4, #0x2f000 */
  ARC_X_W(c, 4, (arc_image_bases[2] + UINT64_C(192512)));
  /* 183b54: add x4, x4, #0x9be */
  ARC_X_W(c, 4, (ARC_X_R(c, 4) + UINT64_C(2494)));
  /* 183b58: mov w2, #0x1c */
  ARC_W_W(c, 2, UINT64_C(28));
  /* 183b5c: mov w5, wzr */
  ARC_W_W(c, 5, ARC_W_R(c, 31));
  /* 183b60: mov w6, wzr */
  ARC_W_W(c, 6, ARC_W_R(c, 31));
  /* 183b64: bl #0x1b5598 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1588072));
  fn2_1b5598(c);
  /* 183b68: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
L_183b6c:;
  /* 183b6c: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
  /* 183b70: ret  */
  return;
}

void fn2_184738(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077446968));
  /* 184738: sub sp, sp, #0x1d0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(464)));
  /* 18473c: stp x29, x30, [sp, #0x170] */
  { const uint64_t _pa = ((c)->sp + INT64_C(368));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 184740: str x28, [sp, #0x180] */
  arc_st64(((c)->sp + INT64_C(384)), ARC_X_R(c, 28));
  /* 184744: stp x26, x25, [sp, #0x190] */
  { const uint64_t _pa = ((c)->sp + INT64_C(400));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* 184748: stp x24, x23, [sp, #0x1a0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(416));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 18474c: stp x22, x21, [sp, #0x1b0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(432));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 184750: stp x20, x19, [sp, #0x1c0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(448));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 184754: add x29, sp, #0x170 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(368)));
  /* 184758: nop  */
  /* nop: no architectural effect here */
  /* 18475c: adr x23, #0x25d380 */
  ARC_X_W(c, 23, (arc_image_bases[2] + UINT64_C(2478976)));
  /* 184760: mov w22, w2 */
  ARC_W_W(c, 22, ARC_W_R(c, 2));
  /* 184764: ldarb w8, [x23] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 23)));
  /* 184768: mov w21, w1 */
  ARC_W_W(c, 21, ARC_W_R(c, 1));
  /* 18476c: mov w20, w0 */
  ARC_W_W(c, 20, ARC_W_R(c, 0));
  /* 184770: add x19, sp, #0xa8 */
  ARC_X_W(c, 19, ((c)->sp + UINT64_C(168)));
  /* 184774: tbz w8, #0, #0x184a34 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_184a34;
L_184778:;
  /* 184778: nop  */
  /* nop: no architectural effect here */
  /* 18477c: adr x1, #0x25d371 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(2478961)));
  /* 184780: adrp x0, #0x258000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 184784: str x1, [sp, #0xa8] */
  arc_st64(((c)->sp + INT64_C(168)), ARC_X_R(c, 1));
  /* 184788: adrp x2, #0x39000 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(233472)));
  /* 18478c: add x2, x2, #0x317 */
  ARC_X_W(c, 2, (ARC_X_R(c, 2) + UINT64_C(791)));
  /* 184790: ldr x0, [x0, #0x618] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(1560))));
  /* 184794: add x3, sp, #0xa8 */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(168)));
  /* 184798: add x4, sp, #8 */
  ARC_X_W(c, 4, ((c)->sp + UINT64_C(8)));
  /* 18479c: add x24, sp, #0xa8 */
  ARC_X_W(c, 24, ((c)->sp + UINT64_C(168)));
  /* 1847a0: bl #0x179990 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1591204));
  fn2_179990(c);
  /* 1847a4: nop  */
  /* nop: no architectural effect here */
  /* 1847a8: adr x8, #0x255760 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2447200)));
  /* 1847ac: str x8, [x0, #0x18] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(24)), ARC_X_R(c, 8));
  /* 1847b0: add x0, sp, #0xa8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(168)));
  /* 1847b4: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1591224));
  fn2_1d2c2c(c);
  /* 1847b8: add x0, x24, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 24) + UINT64_C(8)));
  /* 1847bc: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1591232));
  fn2_1d2c2c(c);
  /* 1847c0: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* 1847c4: mov w8, #2 */
  ARC_W_W(c, 8, UINT64_C(2));
  /* 1847c8: mov w9, #0x3f800000 */
  ARC_W_W(c, 9, UINT64_C(1065353216));
  /* 1847cc: str w8, [sp, #0xb8] */
  arc_st32(((c)->sp + INT64_C(184)), ARC_W_R(c, 8));
  /* 1847d0: add x8, x24, #0x48 */
  ARC_X_W(c, 8, (ARC_X_R(c, 24) + UINT64_C(72)));
  /* 1847d4: str x8, [sp, #0xe8] */
  arc_st64(((c)->sp + INT64_C(232)), ARC_X_R(c, 8));
  /* 1847d8: add x8, x24, #0x88 */
  ARC_X_W(c, 8, (ARC_X_R(c, 24) + UINT64_C(136)));
  /* 1847dc: stp x8, xzr, [sp, #0x128] */
  { const uint64_t _pa = ((c)->sp + INT64_C(296));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 1847e0: add x8, x24, #0xa0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 24) + UINT64_C(160)));
  /* 1847e4: stp xzr, xzr, [sp, #0xf0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(240));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 1847e8: str w9, [sp, #0xe0] */
  arc_st32(((c)->sp + INT64_C(224)), ARC_W_R(c, 9));
  /* 1847ec: stur q0, [x19, #0x18] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(24)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(24)) + 8, (c)->q[0].u64[1]);
  /* 1847f0: stur q0, [x19, #0x28] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(40)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(40)) + 8, (c)->q[0].u64[1]);
  /* 1847f4: stur q0, [x19, #0x58] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(88)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(88)) + 8, (c)->q[0].u64[1]);
  /* 1847f8: stur q0, [x19, #0x68] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(104)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(104)) + 8, (c)->q[0].u64[1]);
  /* 1847fc: str w9, [sp, #0x120] */
  arc_st32(((c)->sp + INT64_C(288)), ARC_W_R(c, 9));
  /* 184800: stp xzr, xzr, [sp, #0x148] */
  { const uint64_t _pa = ((c)->sp + INT64_C(328));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 184804: stp xzr, x8, [sp, #0x138] */
  { const uint64_t _pa = ((c)->sp + INT64_C(312));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* 184808: str xzr, [sp, #0x158] */
  arc_st64(((c)->sp + INT64_C(344)), ARC_X_R(c, 31));
  /* 18480c: ldarb w8, [x23] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 23)));
  /* 184810: tbz w8, #0, #0x184a88 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_184a88;
L_184814:;
  /* 184814: nop  */
  /* nop: no architectural effect here */
  /* 184818: adr x19, #0x25d371 */
  ARC_X_W(c, 19, (arc_image_bases[2] + UINT64_C(2478961)));
  /* 18481c: add x0, sp, #0xa8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(168)));
  /* 184820: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 184824: bl #0x1d5dc0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1591336));
  fn2_1d5dc0(c);
  /* 184828: nop  */
  /* nop: no architectural effect here */
  /* 18482c: adr x8, #0x25ce30 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2477616)));
  /* 184830: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 184834: tbz w8, #0, #0x184ad8 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_184ad8;
L_184838:;
  /* 184838: nop  */
  /* nop: no architectural effect here */
  /* 18483c: adr x1, #0x25ce28 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(2477608)));
  /* 184840: add x0, x24, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 24) + UINT64_C(8)));
  /* 184844: bl #0x1d5dc0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1591368));
  fn2_1d5dc0(c);
  /* 184848: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 18484c: adrp x0, #0x258000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 184850: add x1, x24, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 24) + UINT64_C(8)));
  /* 184854: ldr x8, [x8, #0x620] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(1568))));
  /* 184858: ldr w8, [x8] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 8)));
  /* 18485c: str w8, [sp, #0xb8] */
  arc_st32(((c)->sp + INT64_C(184)), ARC_W_R(c, 8));
  /* 184860: ldr x0, [x0, #0x628] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(1576))));
  /* 184864: bl #0x179eac */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1591400));
  fn2_179eac(c);
  /* 184868: cbz x0, #0x184874 */
  if ((ARC_X_R(c, 0)) == 0) goto L_184874;
  /* 18486c: add x8, x0, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + UINT64_C(24)));
  /* 184870: str x8, [sp, #0x158] */
  arc_st64(((c)->sp + INT64_C(344)), ARC_X_R(c, 8));
L_184874:;
  /* 184874: add x8, sp, #0xa8 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(168)));
  /* 184878: adrp x0, #0x258000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 18487c: adrp x2, #0x39000 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(233472)));
  /* 184880: add x2, x2, #0x317 */
  ARC_X_W(c, 2, (ARC_X_R(c, 2) + UINT64_C(791)));
  /* 184884: str x8, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 8));
  /* 184888: add x1, sp, #0xa8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(168)));
  /* 18488c: ldr x0, [x0, #0x628] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(1576))));
  /* 184890: add x3, sp, #8 */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(8)));
  /* 184894: sub x4, x29, #8 */
  ARC_X_W(c, 4, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 184898: and w22, w22, #1 */
  ARC_W_W(c, 22, (ARC_W_R(c, 22) & UINT64_C(1)));
  /* 18489c: and w21, w21, #1 */
  ARC_W_W(c, 21, (ARC_W_R(c, 21) & UINT64_C(1)));
  /* 1848a0: and w25, w20, #1 */
  ARC_W_W(c, 25, (ARC_W_R(c, 20) & UINT64_C(1)));
  /* 1848a4: bl #0x179fe4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1591464));
  fn2_179fe4(c);
  /* 1848a8: add x0, x0, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(24)));
  /* 1848ac: add x1, sp, #0xa8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(168)));
  /* 1848b0: bl #0x1794e8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1591476));
  fn2_1794e8(c);
  /* 1848b4: adrp x26, #0x258000 */
  ARC_X_W(c, 26, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1848b8: ldr x26, [x26, #0x630] */
  ARC_X_W(c, 26, arc_ld64((ARC_X_R(c, 26) + INT64_C(1584))));
  /* 1848bc: ldp x20, x8, [x26, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 26) + INT64_C(8));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* 1848c0: cmp x20, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 8));
  /* 1848c4: b.hs #0x1848dc */
  if (ARC_COND(c, 2)) goto L_1848dc;
  /* 1848c8: add x1, sp, #0xa8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(168)));
  /* 1848cc: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1848d0: bl #0x1d2c40 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1591508));
  fn2_1d2c40(c);
  /* 1848d4: add x0, x20, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* 1848d8: b #0x1848ec */
  goto L_1848ec;
L_1848dc:;
  /* 1848dc: adrp x0, #0x258000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1848e0: add x1, sp, #0xa8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(168)));
  /* 1848e4: ldr x0, [x0, #0x630] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(1584))));
  /* 1848e8: bl #0x17b8cc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1591532));
  fn2_17b8cc(c);
L_1848ec:;
  /* 1848ec: nop  */
  /* nop: no architectural effect here */
  /* 1848f0: adr x8, #0x184b88 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(1592200)));
  /* 1848f4: nop  */
  /* nop: no architectural effect here */
  /* 1848f8: adr x9, #0x184b98 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(1592216)));
  /* 1848fc: stp xzr, x8, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* 184900: nop  */
  /* nop: no architectural effect here */
  /* 184904: adr x8, #0x184b90 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(1592208)));
  /* 184908: str x0, [x26, #8] */
  arc_st64((ARC_X_R(c, 26) + INT64_C(8)), ARC_X_R(c, 0));
  /* 18490c: stp x8, x9, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 184910: nop  */
  /* nop: no architectural effect here */
  /* 184914: adr x8, #0x184c04 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(1592324)));
  /* 184918: nop  */
  /* nop: no architectural effect here */
  /* 18491c: adr x9, #0x184c5c */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(1592412)));
  /* 184920: strb w25, [sp, #8] */
  arc_st8(((c)->sp + INT64_C(8)), ARC_W_R(c, 25));
  /* 184924: stp x8, x9, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 184928: nop  */
  /* nop: no architectural effect here */
  /* 18492c: adr x8, #0x184c64 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(1592420)));
  /* 184930: nop  */
  /* nop: no architectural effect here */
  /* 184934: adr x9, #0x184c6c */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(1592428)));
  /* 184938: strb wzr, [sp, #9] */
  arc_st8(((c)->sp + INT64_C(9)), ARC_W_R(c, 31));
  /* 18493c: stp x8, x9, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 184940: nop  */
  /* nop: no architectural effect here */
  /* 184944: adr x8, #0x184cf8 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(1592568)));
  /* 184948: nop  */
  /* nop: no architectural effect here */
  /* 18494c: adr x9, #0x184d04 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(1592580)));
  /* 184950: strb w21, [sp, #0xa] */
  arc_st8(((c)->sp + INT64_C(10)), ARC_W_R(c, 21));
  /* 184954: stp x8, x9, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 184958: nop  */
  /* nop: no architectural effect here */
  /* 18495c: adr x8, #0x184d54 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(1592660)));
  /* 184960: nop  */
  /* nop: no architectural effect here */
  /* 184964: adr x9, #0x184ed0 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(1593040)));
  /* 184968: strb w22, [sp, #0xb] */
  arc_st8(((c)->sp + INT64_C(11)), ARC_W_R(c, 22));
  /* 18496c: stp xzr, xzr, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 184970: stp x8, x9, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 184974: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 184978: nop  */
  /* nop: no architectural effect here */
  /* 18497c: adr x9, #0x184f0c */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(1593100)));
  /* 184980: ldr x8, [x8, #0x638] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(1592))));
  /* 184984: stp xzr, xzr, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 184988: stp x9, x8, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* 18498c: ldarb w8, [x23] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 23)));
  /* 184990: tbz w8, #0, #0x184b38 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_184b38;
L_184994:;
  /* 184994: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 184998: adrp x9, #0x258000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 18499c: add x1, sp, #0xa8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(168)));
  /* 1849a0: ldr x8, [x8, #0x640] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(1600))));
  /* 1849a4: ldr x9, [x9, #0x648] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(1608))));
  /* 1849a8: add x2, x24, #8 */
  ARC_X_W(c, 2, (ARC_X_R(c, 24) + UINT64_C(8)));
  /* 1849ac: add x3, sp, #8 */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(8)));
  /* 1849b0: str x19, [sp, #0xa0] */
  arc_st64(((c)->sp + INT64_C(160)), ARC_X_R(c, 19));
  /* 1849b4: add x19, sp, #0xa8 */
  ARC_X_W(c, 19, ((c)->sp + UINT64_C(168)));
  /* 1849b8: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 1849bc: ldr x0, [x9] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 9)));
  /* 1849c0: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1591748));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1849c4: adrp x20, #0x25d000 */
  ARC_X_W(c, 20, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 1849c8: ldrb w8, [x20, #0x388] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 20) + INT64_C(904))));
  /* 1849cc: tbnz w8, #0, #0x1849e0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_1849e0;
  /* 1849d0: bl #0x18f600 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1591764));
  fn2_18f600(c);
  /* 1849d4: bl #0x184f28 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1591768));
  fn2_184f28(c);
  /* 1849d8: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 1849dc: strb w8, [x20, #0x388] */
  arc_st8((ARC_X_R(c, 20) + INT64_C(904)), ARC_W_R(c, 8));
L_1849e0:;
  /* 1849e0: stur x19, [x29, #-8] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-8)), ARC_X_R(c, 19));
  /* 1849e4: adrp x0, #0x258000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1849e8: adrp x2, #0x39000 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(233472)));
  /* 1849ec: add x2, x2, #0x317 */
  ARC_X_W(c, 2, (ARC_X_R(c, 2) + UINT64_C(791)));
  /* 1849f0: ldr x0, [x0, #0x628] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(1576))));
  /* 1849f4: add x1, sp, #0xa8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(168)));
  /* 1849f8: sub x3, x29, #8 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 1849fc: sub x4, x29, #9 */
  ARC_X_W(c, 4, (ARC_X_R(c, 29) - UINT64_C(9)));
  /* 184a00: bl #0x179fe4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1591812));
  fn2_179fe4(c);
  /* 184a04: add x0, x0, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(24)));
  /* 184a08: bl #0x1b2b24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1591820));
  fn2_1b2b24(c);
  /* 184a0c: add x0, sp, #0xa8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(168)));
  /* 184a10: bl #0x1798d4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1591828));
  fn2_1798d4(c);
  /* 184a14: ldp x20, x19, [sp, #0x1c0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(448));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 184a18: ldr x28, [sp, #0x180] */
  ARC_X_W(c, 28, arc_ld64(((c)->sp + INT64_C(384))));
  /* 184a1c: ldp x22, x21, [sp, #0x1b0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(432));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 184a20: ldp x24, x23, [sp, #0x1a0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(416));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 184a24: ldp x26, x25, [sp, #0x190] */
  { const uint64_t _pa = ((c)->sp + INT64_C(400));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* 184a28: ldp x29, x30, [sp, #0x170] */
  { const uint64_t _pa = ((c)->sp + INT64_C(368));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 184a2c: add sp, sp, #0x1d0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(464)));
  /* 184a30: ret  */
  return;
L_184a34:;
  /* 184a34: nop  */
  /* nop: no architectural effect here */
  /* 184a38: adr x0, #0x25d380 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478976)));
  /* 184a3c: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1591872));
  fn2_24b710(c);
  /* 184a40: cbz w0, #0x184778 */
  if ((ARC_W_R(c, 0)) == 0) goto L_184778;
  /* 184a44: nop  */
  /* nop: no architectural effect here */
  /* 184a48: adr x19, #0x25d371 */
  ARC_X_W(c, 19, (arc_image_bases[2] + UINT64_C(2478961)));
  /* 184a4c: adrp x1, #0x36000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(221184)));
  /* 184a50: add x1, x1, #0x478 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1144)));
  /* 184a54: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 184a58: bl #0x1b907c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1591900));
  fn2_1b907c(c);
  /* 184a5c: adrp x0, #0x257000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 184a60: nop  */
  /* nop: no architectural effect here */
  /* 184a64: adr x2, #0x24f980 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(2423168)));
  /* 184a68: ldr x0, [x0, #0xf88] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(3976))));
  /* 184a6c: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 184a70: add x19, sp, #0xa8 */
  ARC_X_W(c, 19, ((c)->sp + UINT64_C(168)));
  /* 184a74: bl #0x24b6f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1591928));
  fn2_24b6f0(c);
  /* 184a78: nop  */
  /* nop: no architectural effect here */
  /* 184a7c: adr x0, #0x25d380 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478976)));
  /* 184a80: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1591940));
  fn2_24b720(c);
  /* 184a84: b #0x184778 */
  goto L_184778;
L_184a88:;
  /* 184a88: nop  */
  /* nop: no architectural effect here */
  /* 184a8c: adr x0, #0x25d380 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478976)));
  /* 184a90: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1591956));
  fn2_24b710(c);
  /* 184a94: cbz w0, #0x184814 */
  if ((ARC_W_R(c, 0)) == 0) goto L_184814;
  /* 184a98: nop  */
  /* nop: no architectural effect here */
  /* 184a9c: adr x19, #0x25d371 */
  ARC_X_W(c, 19, (arc_image_bases[2] + UINT64_C(2478961)));
  /* 184aa0: adrp x1, #0x36000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(221184)));
  /* 184aa4: add x1, x1, #0x478 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1144)));
  /* 184aa8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 184aac: bl #0x1b907c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1591984));
  fn2_1b907c(c);
  /* 184ab0: adrp x0, #0x257000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 184ab4: nop  */
  /* nop: no architectural effect here */
  /* 184ab8: adr x2, #0x24f980 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(2423168)));
  /* 184abc: ldr x0, [x0, #0xf88] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(3976))));
  /* 184ac0: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 184ac4: bl #0x24b6f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1592008));
  fn2_24b6f0(c);
  /* 184ac8: nop  */
  /* nop: no architectural effect here */
  /* 184acc: adr x0, #0x25d380 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478976)));
  /* 184ad0: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1592020));
  fn2_24b720(c);
  /* 184ad4: b #0x184814 */
  goto L_184814;
L_184ad8:;
  /* 184ad8: nop  */
  /* nop: no architectural effect here */
  /* 184adc: adr x0, #0x25ce30 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2477616)));
  /* 184ae0: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1592036));
  fn2_24b710(c);
  /* 184ae4: cbz w0, #0x184838 */
  if ((ARC_W_R(c, 0)) == 0) goto L_184838;
  /* 184ae8: mov x25, x23 */
  ARC_X_W(c, 25, ARC_X_R(c, 23));
  /* 184aec: nop  */
  /* nop: no architectural effect here */
  /* 184af0: adr x23, #0x25ce28 */
  ARC_X_W(c, 23, (arc_image_bases[2] + UINT64_C(2477608)));
  /* 184af4: adrp x1, #0x27000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(159744)));
  /* 184af8: add x1, x1, #0x946 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2374)));
  /* 184afc: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 184b00: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 184b04: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1592072));
  fn2_1b8fd4(c);
  /* 184b08: adrp x0, #0x257000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 184b0c: nop  */
  /* nop: no architectural effect here */
  /* 184b10: adr x2, #0x24f980 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(2423168)));
  /* 184b14: ldr x0, [x0, #0xf88] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(3976))));
  /* 184b18: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* 184b1c: add x24, sp, #0xa8 */
  ARC_X_W(c, 24, ((c)->sp + UINT64_C(168)));
  /* 184b20: mov x23, x25 */
  ARC_X_W(c, 23, ARC_X_R(c, 25));
  /* 184b24: bl #0x24b6f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1592104));
  fn2_24b6f0(c);
  /* 184b28: nop  */
  /* nop: no architectural effect here */
  /* 184b2c: adr x0, #0x25ce30 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2477616)));
  /* 184b30: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1592116));
  fn2_24b720(c);
  /* 184b34: b #0x184838 */
  goto L_184838;
L_184b38:;
  /* 184b38: nop  */
  /* nop: no architectural effect here */
  /* 184b3c: adr x0, #0x25d380 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478976)));
  /* 184b40: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1592132));
  fn2_24b710(c);
  /* 184b44: cbz w0, #0x184994 */
  if ((ARC_W_R(c, 0)) == 0) goto L_184994;
  /* 184b48: nop  */
  /* nop: no architectural effect here */
  /* 184b4c: adr x20, #0x25d371 */
  ARC_X_W(c, 20, (arc_image_bases[2] + UINT64_C(2478961)));
  /* 184b50: adrp x1, #0x36000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(221184)));
  /* 184b54: add x1, x1, #0x478 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1144)));
  /* 184b58: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 184b5c: bl #0x1b907c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1592160));
  fn2_1b907c(c);
  /* 184b60: adrp x0, #0x257000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 184b64: nop  */
  /* nop: no architectural effect here */
  /* 184b68: adr x2, #0x24f980 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(2423168)));
  /* 184b6c: ldr x0, [x0, #0xf88] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(3976))));
  /* 184b70: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 184b74: bl #0x24b6f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1592184));
  fn2_24b6f0(c);
  /* 184b78: nop  */
  /* nop: no architectural effect here */
  /* 184b7c: adr x0, #0x25d380 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478976)));
  /* 184b80: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1592196));
  fn2_24b720(c);
  /* 184b84: b #0x184994 */
  goto L_184994;
}

void fn2_185748(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077451080));
  /* 185748: ret  */
  return;
}

void fn2_18642c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077454380));
  /* 18642c: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 186430: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 186434: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 186438: nop  */
  /* nop: no architectural effect here */
  /* 18643c: adr x8, #0x25d3b8 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2479032)));
  /* 186440: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 186444: tbz w8, #0, #0x186464 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_186464;
L_186448:;
  /* 186448: nop  */
  /* nop: no architectural effect here */
  /* 18644c: adr x0, #0x25d3b0 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2479024)));
  /* 186450: nop  */
  /* nop: no architectural effect here */
  /* 186454: adr x1, #0x255858 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(2447448)));
  /* 186458: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 18645c: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 186460: b #0x1b00bc */
  fn2_1b00bc(c); return;
L_186464:;
  /* 186464: nop  */
  /* nop: no architectural effect here */
  /* 186468: adr x0, #0x25d3b8 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2479032)));
  /* 18646c: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1598576));
  fn2_24b710(c);
  /* 186470: cbz w0, #0x186448 */
  if ((ARC_W_R(c, 0)) == 0) goto L_186448;
  /* 186474: nop  */
  /* nop: no architectural effect here */
  /* 186478: adr x19, #0x25d3b0 */
  ARC_X_W(c, 19, (arc_image_bases[2] + UINT64_C(2479024)));
  /* 18647c: adrp x1, #0x2b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(176128)));
  /* 186480: add x1, x1, #0x945 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2373)));
  /* 186484: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 186488: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 18648c: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1598608));
  fn2_1b8fd4(c);
  /* 186490: adrp x0, #0x257000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 186494: nop  */
  /* nop: no architectural effect here */
  /* 186498: adr x2, #0x24f980 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(2423168)));
  /* 18649c: ldr x0, [x0, #0xf88] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(3976))));
  /* 1864a0: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 1864a4: bl #0x24b6f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1598632));
  fn2_24b6f0(c);
  /* 1864a8: nop  */
  /* nop: no architectural effect here */
  /* 1864ac: adr x0, #0x25d3b8 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2479032)));
  /* 1864b0: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1598644));
  fn2_24b720(c);
  /* 1864b4: b #0x186448 */
  goto L_186448;
}

void fn2_18ba5c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077476444));
  /* 18ba5c: sub sp, sp, #0xc0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(192)));
  /* 18ba60: stp x29, x30, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 18ba64: stp x24, x23, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 18ba68: stp x22, x21, [sp, #0xa0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(160));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 18ba6c: stp x20, x19, [sp, #0xb0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(176));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 18ba70: add x29, sp, #0x80 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(128)));
  /* 18ba74: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 18ba78: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 18ba7c: mov x21, x4 */
  ARC_X_W(c, 21, ARC_X_R(c, 4));
  /* 18ba80: mov x22, x3 */
  ARC_X_W(c, 22, ARC_X_R(c, 3));
  /* 18ba84: mov x23, x2 */
  ARC_X_W(c, 23, ARC_X_R(c, 2));
  /* 18ba88: mov x20, x8 */
  ARC_X_W(c, 20, ARC_X_R(c, 8));
  /* 18ba8c: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1620624));
  fn2_1b7d24(c);
  /* 18ba90: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 18ba94: sub x1, x29, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 18ba98: mov x24, sp */
  ARC_X_W(c, 24, (c)->sp);
  /* 18ba9c: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1620640));
  fn2_1bc2f8(c);
  /* 18baa0: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 18baa4: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1620648));
  fn2_1ccd9c(c);
  /* 18baa8: add x0, x24, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 24) + UINT64_C(24)));
  /* 18baac: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* 18bab0: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1620660));
  fn2_1bc2f8(c);
  /* 18bab4: add x0, x24, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 24) + UINT64_C(48)));
  /* 18bab8: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 18babc: bl #0x1bc290 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1620672));
  fn2_1bc290(c);
  /* 18bac0: add x0, x24, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 24) + UINT64_C(72)));
  /* 18bac4: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 18bac8: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1620684));
  fn2_1bc2f8(c);
  /* 18bacc: add x0, x24, #0x60 */
  ARC_X_W(c, 0, (ARC_X_R(c, 24) + UINT64_C(96)));
  /* 18bad0: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1620692));
  fn2_1bc084(c);
  /* 18bad4: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 18bad8: bl #0x1db4a4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1620700));
  fn2_1db4a4(c);
  /* 18badc: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 18bae0: mov w1, #4 */
  ARC_W_W(c, 1, UINT64_C(4));
  /* 18bae4: bl #0x1db9f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1620712));
  fn2_1db9f0(c);
  /* 18bae8: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 18baec: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 18baf0: bl #0x1bbf48 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1620724));
  fn2_1bbf48(c);
  /* 18baf4: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 18baf8: bl #0x1bce10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1620732));
  fn2_1bce10(c);
  /* 18bafc: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 18bb00: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* 18bb04: bl #0x1bbf48 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1620744));
  fn2_1bbf48(c);
  /* 18bb08: add x1, x24, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 24) + UINT64_C(24)));
  /* 18bb0c: bl #0x1bce10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1620752));
  fn2_1bce10(c);
  /* 18bb10: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 18bb14: mov w1, #2 */
  ARC_W_W(c, 1, UINT64_C(2));
  /* 18bb18: bl #0x1bbf48 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1620764));
  fn2_1bbf48(c);
  /* 18bb1c: add x1, x24, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 24) + UINT64_C(48)));
  /* 18bb20: bl #0x1bce10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1620772));
  fn2_1bce10(c);
  /* 18bb24: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 18bb28: mov w1, #3 */
  ARC_W_W(c, 1, UINT64_C(3));
  /* 18bb2c: bl #0x1bbf48 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1620784));
  fn2_1bbf48(c);
  /* 18bb30: add x1, x24, #0x48 */
  ARC_X_W(c, 1, (ARC_X_R(c, 24) + UINT64_C(72)));
  /* 18bb34: bl #0x1bce10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1620792));
  fn2_1bce10(c);
  /* 18bb38: sub x1, x29, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 18bb3c: mov x8, x20 */
  ARC_X_W(c, 8, ARC_X_R(c, 20));
  /* 18bb40: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 18bb44: bl #0x1d0298 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1620808));
  fn2_1d0298(c);
  /* 18bb48: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 18bb4c: bl #0x1db788 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1620816));
  fn2_1db788(c);
  /* 18bb50: add x0, x24, #0x60 */
  ARC_X_W(c, 0, (ARC_X_R(c, 24) + UINT64_C(96)));
  /* 18bb54: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1620824));
  fn2_1bc620(c);
  /* 18bb58: add x0, x24, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 24) + UINT64_C(72)));
  /* 18bb5c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1620832));
  fn2_1bc620(c);
  /* 18bb60: add x0, x24, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 24) + UINT64_C(48)));
  /* 18bb64: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1620840));
  fn2_1bc620(c);
  /* 18bb68: add x0, x24, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 24) + UINT64_C(24)));
  /* 18bb6c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1620848));
  fn2_1bc620(c);
  /* 18bb70: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 18bb74: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1620856));
  fn2_1bc620(c);
  /* 18bb78: ldp x20, x19, [sp, #0xb0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(176));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 18bb7c: ldp x22, x21, [sp, #0xa0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(160));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 18bb80: ldp x24, x23, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 18bb84: ldp x29, x30, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 18bb88: add sp, sp, #0xc0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(192)));
  /* 18bb8c: ret  */
  return;
}

void fn2_18c3d0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077478864));
  /* 18c3d0: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 18c3d4: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 18c3d8: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 18c3dc: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 18c3e0: ldr x8, [x2] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 2)));
  /* 18c3e4: ldr x21, [x0, #0x60] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 0) + INT64_C(96))));
  /* 18c3e8: mov x20, x2 */
  ARC_X_W(c, 20, ARC_X_R(c, 2));
  /* 18c3ec: mov x19, x3 */
  ARC_X_W(c, 19, ARC_X_R(c, 3));
  /* 18c3f0: cbz x8, #0x18c430 */
  if ((ARC_X_R(c, 8)) == 0) goto L_18c430;
  /* 18c3f4: ldr x0, [x8] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 8)));
  /* 18c3f8: bl #0x1b62dc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1623036));
  fn2_1b62dc(c);
L_18c3fc:;
  /* 18c3fc: ldr x8, [x20, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(8))));
  /* 18c400: ldr x1, [x8] */
  ARC_X_W(c, 1, arc_ld64(ARC_X_R(c, 8)));
  /* 18c404: add x8, x29, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 18c408: blr x21 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1623052));
  arc_dispatch(c, ARC_X_R(c, 21));
  /* 18c40c: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 18c410: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 18c414: bl #0x1d06b8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1623064));
  fn2_1d06b8(c);
  /* 18c418: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 18c41c: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1623072));
  fn2_1ccd9c(c);
  /* 18c420: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 18c424: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 18c428: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 18c42c: ret  */
  return;
L_18c430:;
  /* 18c430: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
  /* 18c434: b #0x18c3fc */
  goto L_18c3fc;
}

void fn2_18db80(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077484928));
  /* 18db80: mov x8, x1 */
  ARC_X_W(c, 8, ARC_X_R(c, 1));
  /* 18db84: ldp x1, x9, [x0, #0x60] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(96));
    ARC_X_W(c, 1, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 18db88: mov x4, x3 */
  ARC_X_W(c, 4, ARC_X_R(c, 3));
  /* 18db8c: mov x3, x2 */
  ARC_X_W(c, 3, ARC_X_R(c, 2));
  /* 18db90: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 18db94: mov x2, x9 */
  ARC_X_W(c, 2, ARC_X_R(c, 9));
  /* 18db98: b #0x18df1c */
  fn2_18df1c(c); return;
}

void fn2_1915dc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077499868));
  /* 1915dc: ldrb w0, [x0, #0x78] */
  ARC_W_W(c, 0, arc_ld8((ARC_X_R(c, 0) + INT64_C(120))));
  /* 1915e0: ret  */
  return;
}

void fn2_1931f0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077507056));
  /* 1931f0: sub sp, sp, #0x80 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(128)));
  /* 1931f4: stp x29, x30, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1931f8: str x21, [sp, #0x60] */
  arc_st64(((c)->sp + INT64_C(96)), ARC_X_R(c, 21));
  /* 1931fc: stp x20, x19, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 193200: add x29, sp, #0x50 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(80)));
  /* 193204: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 193208: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 19320c: tbz w2, #0, #0x193218 */
  if (((ARC_W_R(c, 2)) >> 0 & 1) == 0) goto L_193218;
  /* 193210: bl #0x194604 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1651220));
  fn2_194604(c);
  /* 193214: b #0x19321c */
  goto L_19321c;
L_193218:;
  /* 193218: bl #0x194530 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1651228));
  fn2_194530(c);
L_19321c:;
  /* 19321c: adrp x21, #0x257000 */
  ARC_X_W(c, 21, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 193220: ldr x21, [x21, #0xfa8] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 21) + INT64_C(4008))));
  /* 193224: strb wzr, [x19, #0x78] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(120)), ARC_W_R(c, 31));
  /* 193228: ldr x0, [x21] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 21)));
  /* 19322c: bl #0xebbd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1651248));
  fn2_ebbd4(c);
  /* 193230: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 193234: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* 193238: add x1, x1, #0xb6f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2927)));
  /* 19323c: add x0, x8, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 8) + UINT64_C(48)));
  /* 193240: bl #0x1b865c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1651268));
  fn2_1b865c(c);
  /* 193244: tbz w0, #0, #0x193268 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_193268;
  /* 193248: adrp x1, #0x1c000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(114688)));
  /* 19324c: add x1, x1, #0xd2e */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3374)));
  /* 193250: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 193254: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 193258: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1651292));
  fn2_1b8fd4(c);
  /* 19325c: adrp x0, #0x2a000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(172032)));
  /* 193260: add x0, x0, #0x250 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(592)));
  /* 193264: b #0x1932b0 */
  goto L_1932b0;
L_193268:;
  /* 193268: bl #0x19473c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1651308));
  fn2_19473c(c);
  /* 19326c: tbz w0, #0, #0x193294 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_193294;
  /* 193270: add x0, x19, #0x38 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(56)));
  /* 193274: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 193278: bl #0x1da22c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1651324));
  fn2_1da22c(c);
  /* 19327c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 193280: ldp x20, x19, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 193284: ldr x21, [sp, #0x60] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(96))));
  /* 193288: ldp x29, x30, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 19328c: add sp, sp, #0x80 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(128)));
  /* 193290: b #0x1947ec */
  fn2_1947ec(c); return;
L_193294:;
  /* 193294: adrp x1, #0x1c000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(114688)));
  /* 193298: add x1, x1, #0xd2e */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3374)));
  /* 19329c: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1932a0: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1932a4: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1651368));
  fn2_1b8fd4(c);
  /* 1932a8: adrp x0, #0x26000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(155648)));
  /* 1932ac: add x0, x0, #0x65f */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1631)));
L_1932b0:;
  /* 1932b0: add x8, sp, #8 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(8)));
  /* 1932b4: mov x1, #-1 */
  ARC_X_W(c, 1, UINT64_C(18446744073709551615));
  /* 1932b8: bl #0x1b7d74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1651388));
  fn2_1b7d74(c);
  /* 1932bc: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 1932c0: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1932c4: add x21, sp, #0x20 */
  ARC_X_W(c, 21, ((c)->sp + UINT64_C(32)));
  /* 1932c8: bl #0x1bc44c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1651404));
  fn2_1bc44c(c);
  /* 1932cc: add x20, x21, #0x18 */
  ARC_X_W(c, 20, (ARC_X_R(c, 21) + UINT64_C(24)));
  /* 1932d0: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 1932d4: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1932d8: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1651420));
  fn2_1bc2f8(c);
  /* 1932dc: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* 1932e0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1932e4: mov w2, #2 */
  ARC_W_W(c, 2, UINT64_C(2));
  /* 1932e8: stp x21, x20, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 21));
    arc_st64(_pa + 8, ARC_X_R(c, 20));
  }
  /* 1932ec: bl #0x221204 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1651440));
  fn2_221204(c);
  /* 1932f0: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1932f4: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1651448));
  fn2_1bc620(c);
  /* 1932f8: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 1932fc: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1651456));
  fn2_1bc620(c);
  /* 193300: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 193304: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1651464));
  fn2_1ccd9c(c);
  /* 193308: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 19330c: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1651472));
  fn2_1d2d24(c);
  /* 193310: ldp x20, x19, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 193314: ldr x21, [sp, #0x60] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(96))));
  /* 193318: ldp x29, x30, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 19331c: add sp, sp, #0x80 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(128)));
  /* 193320: ret  */
  return;
}

void fn2_198970(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077529456));
  /* 198970: sub sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(96)));
  /* 198974: stp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 198978: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 19897c: add x29, sp, #0x40 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(64)));
  /* 198980: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 198984: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* 198988: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 19898c: bl #0x1d9740 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1673616));
  fn2_1d9740(c);
  /* 198990: adrp x1, #0x2e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(188416)));
  /* 198994: add x1, x1, #0x2c9 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(713)));
  /* 198998: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 19899c: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1673632));
  fn2_1b7d24(c);
  /* 1989a0: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 1989a4: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 1989a8: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1673644));
  fn2_1bc2f8(c);
  /* 1989ac: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 1989b0: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1673652));
  fn2_1ccd9c(c);
  /* 1989b4: adrp x1, #0x30000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(196608)));
  /* 1989b8: add x1, x1, #0x1f0 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(496)));
  /* 1989bc: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 1989c0: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1673668));
  fn2_1b7d24(c);
  /* 1989c4: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 1989c8: add x1, sp, #0x20 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(32)));
  /* 1989cc: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1673680));
  fn2_1bc2f8(c);
  /* 1989d0: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 1989d4: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1673688));
  fn2_1ccd9c(c);
  /* 1989d8: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* 1989dc: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 1989e0: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1673700));
  fn2_1bbfa0(c);
  /* 1989e4: sub x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 1989e8: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1673708));
  fn2_1bcf04(c);
  /* 1989ec: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 1989f0: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1673716));
  fn2_1bc620(c);
  /* 1989f4: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 1989f8: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1673724));
  fn2_1bc620(c);
  /* 1989fc: ldr x8, [x19, #0xd8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(216))));
  /* 198a00: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 198a04: b.ne #0x198a5c */
  if (ARC_COND(c, 1)) goto L_198a5c;
  /* 198a08: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 198a0c: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 198a10: bl #0x1bc544 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1673748));
  fn2_1bc544(c);
  /* 198a14: adrp x1, #0x24000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(147456)));
  /* 198a18: add x1, x1, #0xc3f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3135)));
  /* 198a1c: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 198a20: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1673764));
  fn2_1b7d24(c);
  /* 198a24: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 198a28: add x1, sp, #0x20 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(32)));
  /* 198a2c: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1673776));
  fn2_1bc2f8(c);
  /* 198a30: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 198a34: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1673784));
  fn2_1ccd9c(c);
  /* 198a38: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* 198a3c: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 198a40: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1673796));
  fn2_1bbfa0(c);
  /* 198a44: sub x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 198a48: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1673804));
  fn2_1bcf04(c);
  /* 198a4c: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 198a50: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1673812));
  fn2_1bc620(c);
  /* 198a54: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 198a58: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1673820));
  fn2_1bc620(c);
L_198a5c:;
  /* 198a5c: ldr x8, [x19, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(32))));
  /* 198a60: cbnz x8, #0x198a88 */
  if ((ARC_X_R(c, 8)) != 0) goto L_198a88;
  /* 198a64: ldr d0, [x19, #0x68] */
  arc_du_w(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(104))));
  /* 198a68: fcmp d0, #0.0 */
  arc_fcmp(c, (double)(ARC_D_R(c, 0)), (double)(0.0));
  /* 198a6c: b.ge #0x198a88 */
  if (ARC_COND(c, 10)) goto L_198a88;
  /* 198a70: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* 198a74: bl #0x1d97fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1673848));
  fn2_1d97fc(c);
  /* 198a78: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 198a7c: ldp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 198a80: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* 198a84: ret  */
  return;
L_198a88:;
  /* 198a88: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 198a8c: add x1, sp, #0x18 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(24)));
  /* 198a90: bl #0x1bc530 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1673876));
  fn2_1bc530(c);
  /* 198a94: add x0, x19, #0x50 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(80)));
  /* 198a98: sub x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 198a9c: bl #0x1db920 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1673888));
  fn2_1db920(c);
  /* 198aa0: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 198aa4: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1673896));
  fn2_1bc620(c);
  /* 198aa8: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* 198aac: bl #0x1d97fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1673904));
  fn2_1d97fc(c);
  /* 198ab0: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 198ab4: ldp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 198ab8: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* 198abc: ret  */
  return;
}

void fn2_19ec24(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077554724));
  /* 19ec24: add x0, x0, #0xd0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(208)));
  /* 19ec28: b #0x1d06b8 */
  fn2_1d06b8(c); return;
}

void fn2_19fa60(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077558368));
  /* 19fa60: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* 19fa64: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 19fa68: str x21, [sp, #0x30] */
  arc_st64(((c)->sp + INT64_C(48)), ARC_X_R(c, 21));
  /* 19fa6c: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 19fa70: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 19fa74: ldp x21, x8, [x0, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(32));
    ARC_X_W(c, 21, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* 19fa78: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 19fa7c: ldr x9, [x0, #0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(24))));
  /* 19fa80: str wzr, [x4] */
  arc_st32(ARC_X_R(c, 4), ARC_W_R(c, 31));
  /* 19fa84: add x19, x9, x8, asr #1 */
  ARC_X_W(c, 19, (ARC_X_R(c, 9) + ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> 1))));
  /* 19fa88: tbz w8, #0, #0x19fa94 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_19fa94;
  /* 19fa8c: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 19fa90: ldr x21, [x8, x21] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 8) + ARC_X_R(c, 21))));
L_19fa94:;
  /* 19fa94: ldr x1, [x20] */
  ARC_X_W(c, 1, arc_ld64(ARC_X_R(c, 20)));
  /* 19fa98: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 19fa9c: bl #0x1bc0b8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1702560));
  fn2_1bc0b8(c);
  /* 19faa0: ldr x0, [x20, #8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 20) + INT64_C(8))));
  /* 19faa4: add x8, x29, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 19faa8: bl #0x1bccc4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1702572));
  fn2_1bccc4(c);
  /* 19faac: ldr x0, [x20, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 20) + INT64_C(16))));
  /* 19fab0: bl #0x1bc668 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1702580));
  fn2_1bc668(c);
  /* 19fab4: mov x3, x0 */
  ARC_X_W(c, 3, ARC_X_R(c, 0));
  /* 19fab8: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 19fabc: add x2, x29, #0x18 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 19fac0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 19fac4: blr x21 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1702600));
  arc_dispatch(c, ARC_X_R(c, 21));
  /* 19fac8: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 19facc: bl #0x1db788 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1702608));
  fn2_1db788(c);
  /* 19fad0: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 19fad4: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1702616));
  fn2_1bc620(c);
  /* 19fad8: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 19fadc: ldr x21, [sp, #0x30] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(48))));
  /* 19fae0: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 19fae4: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* 19fae8: ret  */
  return;
}

void fn2_1a07b0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077561776));
  /* 1a07b0: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* 1a07b4: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1a07b8: str x21, [sp, #0x30] */
  arc_st64(((c)->sp + INT64_C(48)), ARC_X_R(c, 21));
  /* 1a07bc: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1a07c0: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 1a07c4: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 1a07c8: ldr x0, [x1] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 1)));
  /* 1a07cc: mov x19, x2 */
  ARC_X_W(c, 19, ARC_X_R(c, 2));
  /* 1a07d0: str wzr, [x3] */
  arc_st32(ARC_X_R(c, 3), ARC_W_R(c, 31));
  /* 1a07d4: str xzr, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 31));
  /* 1a07d8: bl #0x1bcbbc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1705948));
  fn2_1bcbbc(c);
  /* 1a07dc: cbz x0, #0x1a07f8 */
  if ((ARC_X_R(c, 0)) == 0) goto L_1a07f8;
  /* 1a07e0: bl #0x1a085c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1705956));
  fn2_1a085c(c);
  /* 1a07e4: cbz x0, #0x1a07f8 */
  if ((ARC_X_R(c, 0)) == 0) goto L_1a07f8;
  /* 1a07e8: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 1a07ec: bl #0x2259d8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1705968));
  fn2_2259d8(c);
  /* 1a07f0: tbz w0, #0, #0x1a07f8 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_1a07f8;
  /* 1a07f4: str x21, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 21));
L_1a07f8:;
  /* 1a07f8: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1a07fc: blr x20 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1705984));
  arc_dispatch(c, ARC_X_R(c, 20));
  /* 1a0800: sxtw x1, w0 */
  ARC_X_W(c, 1, ((int64_t)(int32_t)(ARC_W_R(c, 0))));
  /* 1a0804: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1a0808: bl #0x1bc290 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1705996));
  fn2_1bc290(c);
  /* 1a080c: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 1a0810: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1a0814: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1706008));
  fn2_1bcf04(c);
  /* 1a0818: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1a081c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1706016));
  fn2_1bc620(c);
  /* 1a0820: ldr x0, [x29, #0x18] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(24))));
  /* 1a0824: cbz x0, #0x1a0848 */
  if ((ARC_X_R(c, 0)) == 0) goto L_1a0848;
  /* 1a0828: bl #0x225abc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1706028));
  fn2_225abc(c);
  /* 1a082c: tbz w0, #0, #0x1a0848 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_1a0848;
  /* 1a0830: adrp x9, #0x257000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 1a0834: ldr x8, [x29, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(24))));
  /* 1a0838: ldr x9, [x9, #0xfb0] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(4016))));
  /* 1a083c: ldr x0, [x8, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 1a0840: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* 1a0844: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1706056));
  arc_dispatch(c, ARC_X_R(c, 9));
L_1a0848:;
  /* 1a0848: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1a084c: ldr x21, [sp, #0x30] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(48))));
  /* 1a0850: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1a0854: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* 1a0858: ret  */
  return;
}

void fn2_1a1e20(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077567520));
  /* 1a1e20: mov w8, #0x1a */
  ARC_W_W(c, 8, UINT64_C(26));
  /* 1a1e24: cmp w1, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 1), UINT64_C(0));
  /* 1a1e28: mov w9, #3 */
  ARC_W_W(c, 9, UINT64_C(3));
  /* 1a1e2c: csel w0, w9, w8, eq */
  ARC_W_W(c, 0, (ARC_COND(c, 0) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 8)));
  /* 1a1e30: ret  */
  return;
}

void fn2_1a3470(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077573232));
  /* 1a3470: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 1a3474: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1a3478: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1a347c: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1a3480: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1a3484: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 1a3488: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* 1a348c: add x1, x1, #0xb6f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2927)));
  /* 1a3490: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 1a3494: mov w0, #0x70 */
  ARC_W_W(c, 0, UINT64_C(112));
  /* 1a3498: mov x2, x1 */
  ARC_X_W(c, 2, ARC_X_R(c, 1));
  /* 1a349c: bl #0x1b5d1c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1717408));
  fn2_1b5d1c(c);
  /* 1a34a0: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1a34a4: mov w22, #1 */
  ARC_W_W(c, 22, UINT64_C(1));
  /* 1a34a8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1a34ac: ldr x8, [x8, #0x40] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(64))));
  /* 1a34b0: str w22, [x0, #8] */
  arc_st32((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 22));
  /* 1a34b4: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* 1a34b8: str x8, [x0], #0xc */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(12));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* 1a34bc: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1717440));
  fn2_1d2c2c(c);
  /* 1a34c0: add x0, x19, #0x14 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(20)));
  /* 1a34c4: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1717448));
  fn2_1d2c2c(c);
  /* 1a34c8: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* 1a34cc: adrp x8, #0x256000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2449408)));
  /* 1a34d0: add x8, x8, #0x410 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1040)));
  /* 1a34d4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1a34d8: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* 1a34dc: stur xzr, [x19, #0x1c] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(28)), ARC_X_R(c, 31));
  /* 1a34e0: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* 1a34e4: stp xzr, x21, [x19, #0x58] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(88));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1a34e8: stur q0, [x19, #0x28] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(40)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(40)) + 8, (c)->q[0].u64[1]);
  /* 1a34ec: stur q0, [x19, #0x38] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(56)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(56)) + 8, (c)->q[0].u64[1]);
  /* 1a34f0: stur q0, [x19, #0x48] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(72)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(72)) + 8, (c)->q[0].u64[1]);
  /* 1a34f4: str x20, [x19, #0x68] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(104)), ARC_X_R(c, 20));
  /* 1a34f8: bl #0x1b5e68 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1717500));
  fn2_1b5e68(c);
  /* 1a34fc: str w22, [x19, #0x1c] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(28)), ARC_W_R(c, 22));
  /* 1a3500: nop  */
  /* nop: no architectural effect here */
  /* 1a3504: adr x8, #0x25d368 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2478952)));
  /* 1a3508: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 1a350c: tbz w8, #0, #0x1a354c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1a354c;
L_1a3510:;
  /* 1a3510: nop  */
  /* nop: no architectural effect here */
  /* 1a3514: adr x1, #0x25d35a */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(2478938)));
  /* 1a3518: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1a351c: bl #0x1d2c40 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1717536));
  fn2_1d2c40(c);
  /* 1a3520: add x0, x19, #0x14 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(20)));
  /* 1a3524: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 1a3528: bl #0x1d5dc0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1717548));
  fn2_1d5dc0(c);
  /* 1a352c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1a3530: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1717556));
  fn2_1d2d24(c);
  /* 1a3534: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1a3538: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1a353c: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1a3540: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1a3544: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 1a3548: ret  */
  return;
L_1a354c:;
  /* 1a354c: nop  */
  /* nop: no architectural effect here */
  /* 1a3550: adr x0, #0x25d368 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478952)));
  /* 1a3554: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1717592));
  fn2_24b710(c);
  /* 1a3558: cbz w0, #0x1a3510 */
  if ((ARC_W_R(c, 0)) == 0) goto L_1a3510;
  /* 1a355c: nop  */
  /* nop: no architectural effect here */
  /* 1a3560: adr x20, #0x25d35a */
  ARC_X_W(c, 20, (arc_image_bases[2] + UINT64_C(2478938)));
  /* 1a3564: adrp x1, #0x36000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(221184)));
  /* 1a3568: add x1, x1, #0x53c */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1340)));
  /* 1a356c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1a3570: bl #0x1b907c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1717620));
  fn2_1b907c(c);
  /* 1a3574: adrp x0, #0x257000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 1a3578: nop  */
  /* nop: no architectural effect here */
  /* 1a357c: adr x2, #0x24f980 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(2423168)));
  /* 1a3580: ldr x0, [x0, #0xf88] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(3976))));
  /* 1a3584: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 1a3588: bl #0x24b6f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1717644));
  fn2_24b6f0(c);
  /* 1a358c: nop  */
  /* nop: no architectural effect here */
  /* 1a3590: adr x0, #0x25d368 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478952)));
  /* 1a3594: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1717656));
  fn2_24b720(c);
  /* 1a3598: b #0x1a3510 */
  goto L_1a3510;
}

void fn2_1a6a60(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077587040));
  /* 1a6a60: ldr x0, [x0, #8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* 1a6a64: ret  */
  return;
}

void fn2_1a8658(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077594200));
  /* 1a8658: sub sp, sp, #0x110 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(272)));
  /* 1a865c: stp x29, x30, [sp, #0xb0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(176));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1a8660: stp x28, x27, [sp, #0xc0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(192));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* 1a8664: stp x26, x25, [sp, #0xd0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(208));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* 1a8668: stp x24, x23, [sp, #0xe0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(224));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 1a866c: stp x22, x21, [sp, #0xf0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(240));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1a8670: stp x20, x19, [sp, #0x100] */
  { const uint64_t _pa = ((c)->sp + INT64_C(256));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1a8674: add x29, sp, #0xb0 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(176)));
  /* 1a8678: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1a867c: sub x0, x29, #0x50 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(80)));
  /* 1a8680: mov w21, w2 */
  ARC_W_W(c, 21, ARC_W_R(c, 2));
  /* 1a8684: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 1a8688: bl #0x1ddc90 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1738380));
  fn2_1ddc90(c);
  /* 1a868c: cmp w21, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 21), UINT64_C(1));
  /* 1a8690: b.lt #0x1a86b8 */
  if (ARC_COND(c, 11)) goto L_1a86b8;
  /* 1a8694: mov w21, w21 */
  ARC_W_W(c, 21, ARC_W_R(c, 21));
  /* 1a8698: sub x0, x29, #0x50 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(80)));
  /* 1a869c: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 1a86a0: bl #0x1de070 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1738404));
  fn2_1de070(c);
  /* 1a86a4: sub x0, x29, #0x50 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(80)));
  /* 1a86a8: bl #0x1bbc9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1738412));
  fn2_1bbc9c(c);
  /* 1a86ac: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 1a86b0: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* 1a86b4: bl #0x24b7a0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1738424));
  fn2_24b7a0(c);
L_1a86b8:;
  /* 1a86b8: add x0, sp, #0x50 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(80)));
  /* 1a86bc: bl #0x1dfc0c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1738432));
  fn2_1dfc0c(c);
  /* 1a86c0: ldr w1, [x19, #0x7c] */
  ARC_W_W(c, 1, arc_ld32((ARC_X_R(c, 19) + INT64_C(124))));
  /* 1a86c4: cmp w1, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 1), UINT64_C(1));
  /* 1a86c8: b.lt #0x1a89e4 */
  if (ARC_COND(c, 11)) goto L_1a89e4;
L_1a86cc:;
  /* 1a86cc: add x0, sp, #0x50 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(80)));
  /* 1a86d0: bl #0x1dfe7c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1738452));
  fn2_1dfe7c(c);
L_1a86d4:;
  /* 1a86d4: bl #0x20fc78 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1738456));
  fn2_20fc78(c);
  /* 1a86d8: add x8, sp, #0x48 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(72)));
  /* 1a86dc: sub x1, x29, #0x50 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(80)));
  /* 1a86e0: bl #0x210124 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1738468));
  fn2_210124(c);
  /* 1a86e4: ldr x8, [x19, #0xb8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(184))));
  /* 1a86e8: add x0, sp, #0x48 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(72)));
  /* 1a86ec: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* 1a86f0: str x8, [x19, #0xb8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(184)), ARC_X_R(c, 8));
  /* 1a86f4: bl #0x1ccef8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1738488));
  fn2_1ccef8(c);
  /* 1a86f8: mov x9, #0x29a5 */
  ARC_X_W(c, 9, UINT64_C(10661));
  /* 1a86fc: mov w8, #0x176f */
  ARC_W_W(c, 8, UINT64_C(5999));
  /* 1a8700: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 1a8704: movk x9, #0x6715, lsl #16 */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(18446744069414649855)) | UINT64_C(1729429504)));
  /* 1a8708: add x8, x0, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* 1a870c: add x0, x19, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(24)));
  /* 1a8710: movk x9, #0x3e1f, lsl #32 */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(18446462603027808255)) | UINT64_C(68302864908288)));
  /* 1a8714: movk x9, #0xaec3, lsl #48 */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(281474976710655)) | UINT64_C(12592908983058038784)));
  /* 1a8718: smulh x9, x8, x9 */
  ARC_X_W(c, 9, arc_smulh(ARC_X_R(c, 8), ARC_X_R(c, 9)));
  /* 1a871c: add x8, x9, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) + ARC_X_R(c, 8)));
  /* 1a8720: asr x9, x8, #0xc */
  ARC_X_W(c, 9, ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(12)) & 63))));
  /* 1a8724: add x8, x9, x8, lsr #63 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) + ((uint64_t)(ARC_X_R(c, 8)) >> 63)));
  /* 1a8728: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 1a872c: csinc x21, x8, xzr, gt */
  ARC_X_W(c, 21, (ARC_COND(c, 12) ? (ARC_X_R(c, 8)) : ((ARC_X_R(c, 31)) + 1)));
  /* 1a8730: bl #0x1d7b84 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1738548));
  fn2_1d7b84(c);
  /* 1a8734: tbz w0, #0, #0x1a8a24 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_1a8a24;
  /* 1a8738: add x0, sp, #0x50 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(80)));
  /* 1a873c: bl #0x1dfe0c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1738560));
  fn2_1dfe0c(c);
  /* 1a8740: cmp x0, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 0), UINT64_C(1));
  /* 1a8744: b.lt #0x1a89a4 */
  if (ARC_COND(c, 11)) goto L_1a89a4;
  /* 1a8748: adrp x27, #0x257000 */
  ARC_X_W(c, 27, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 1a874c: sub x8, x29, #0x38 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(56)));
  /* 1a8750: mov x24, xzr */
  ARC_X_W(c, 24, ARC_X_R(c, 31));
  /* 1a8754: ldr x27, [x27, #0xfb8] */
  ARC_X_W(c, 27, arc_ld64((ARC_X_R(c, 27) + INT64_C(4024))));
  /* 1a8758: add x25, x8, #0x18 */
  ARC_X_W(c, 25, (ARC_X_R(c, 8) + UINT64_C(24)));
  /* 1a875c: mov w22, #0x1770 */
  ARC_W_W(c, 22, UINT64_C(6000));
  /* 1a8760: mov w23, #0x1771 */
  ARC_W_W(c, 23, UINT64_C(6001));
  /* 1a8764: b #0x1a8780 */
  goto L_1a8780;
L_1a8768:;
  /* 1a8768: ldr x24, [sp] */
  ARC_X_W(c, 24, arc_ld64((c)->sp));
  /* 1a876c: add x0, sp, #0x50 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(80)));
  /* 1a8770: add x24, x24, #1 */
  ARC_X_W(c, 24, (ARC_X_R(c, 24) + UINT64_C(1)));
  /* 1a8774: bl #0x1dfe0c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1738616));
  fn2_1dfe0c(c);
  /* 1a8778: cmp x24, x0 */
  (void)arc_sub64(c, ARC_X_R(c, 24), ARC_X_R(c, 0));
  /* 1a877c: b.ge #0x1a89a4 */
  if (ARC_COND(c, 10)) goto L_1a89a4;
L_1a8780:;
  /* 1a8780: add x0, sp, #0x50 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(80)));
  /* 1a8784: mov x1, x24 */
  ARC_X_W(c, 1, ARC_X_R(c, 24));
  /* 1a8788: str x24, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 24));
  /* 1a878c: bl #0x1bbd98 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1738640));
  fn2_1bbd98(c);
  /* 1a8790: ldrb w9, [x19, #0x2c] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 19) + INT64_C(44))));
  /* 1a8794: ldr w8, [x0] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 0)));
  /* 1a8798: tbnz w9, #0, #0x1a87a4 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) != 0) goto L_1a87a4;
  /* 1a879c: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* 1a87a0: b.ne #0x1a8768 */
  if (ARC_COND(c, 1)) goto L_1a8768;
L_1a87a4:;
  /* 1a87a4: sxtw x24, w8 */
  ARC_X_W(c, 24, ((int64_t)(int32_t)(ARC_W_R(c, 8))));
  /* 1a87a8: mov x28, xzr */
  ARC_X_W(c, 28, ARC_X_R(c, 31));
  /* 1a87ac: mov x26, xzr */
  ARC_X_W(c, 26, ARC_X_R(c, 31));
  /* 1a87b0: b #0x1a8824 */
  goto L_1a8824;
L_1a87b4:;
  /* 1a87b4: sub x0, x29, #0x38 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(56)));
  /* 1a87b8: mov x1, x24 */
  ARC_X_W(c, 1, ARC_X_R(c, 24));
  /* 1a87bc: bl #0x1bc290 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1738688));
  fn2_1bc290(c);
  /* 1a87c0: add x1, sp, #0x40 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(64)));
  /* 1a87c4: mov x0, x25 */
  ARC_X_W(c, 0, ARC_X_R(c, 25));
  /* 1a87c8: bl #0x1bc530 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1738700));
  fn2_1bc530(c);
  /* 1a87cc: sub x8, x29, #0x38 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(56)));
  /* 1a87d0: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1a87d4: stp x8, x25, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* 1a87d8: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1738716));
  fn2_1bc084(c);
  /* 1a87dc: ldr x8, [x27, #0xa8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 27) + INT64_C(168))));
  /* 1a87e0: add x0, x19, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(24)));
  /* 1a87e4: add x1, sp, #0x20 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(32)));
  /* 1a87e8: add x2, sp, #8 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(8)));
  /* 1a87ec: mov w3, #2 */
  ARC_W_W(c, 3, UINT64_C(2));
  /* 1a87f0: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1738740));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1a87f4: mov x0, x25 */
  ARC_X_W(c, 0, ARC_X_R(c, 25));
  /* 1a87f8: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1738748));
  fn2_1bc620(c);
  /* 1a87fc: sub x0, x29, #0x38 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(56)));
  /* 1a8800: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1738756));
  fn2_1bc620(c);
  /* 1a8804: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1a8808: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1738764));
  fn2_1bc620(c);
  /* 1a880c: add x0, sp, #0x40 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(64)));
  /* 1a8810: bl #0x1d97fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1738772));
  fn2_1d97fc(c);
  /* 1a8814: add x26, x26, #1 */
  ARC_X_W(c, 26, (ARC_X_R(c, 26) + UINT64_C(1)));
  /* 1a8818: add x28, x28, x22 */
  ARC_X_W(c, 28, (ARC_X_R(c, 28) + ARC_X_R(c, 22)));
  /* 1a881c: cmp x21, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 26));
  /* 1a8820: b.eq #0x1a8768 */
  if (ARC_COND(c, 0)) goto L_1a8768;
L_1a8824:;
  /* 1a8824: add x0, sp, #0x40 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(64)));
  /* 1a8828: bl #0x1d9740 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1738796));
  fn2_1d9740(c);
  /* 1a882c: add x8, sp, #0x38 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(56)));
  /* 1a8830: add x0, sp, #0x48 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(72)));
  /* 1a8834: mov x1, x28 */
  ARC_X_W(c, 1, ARC_X_R(c, 28));
  /* 1a8838: mov w2, #0x1770 */
  ARC_W_W(c, 2, UINT64_C(6000));
  /* 1a883c: bl #0x1ccf2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1738816));
  fn2_1ccf2c(c);
  /* 1a8840: sub x0, x29, #0x38 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(56)));
  /* 1a8844: add x1, sp, #0x38 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(56)));
  /* 1a8848: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1738828));
  fn2_1bc2f8(c);
  /* 1a884c: sub x0, x29, #0x40 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 1a8850: adrp x1, #0x1b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(110592)));
  /* 1a8854: add x1, x1, #0xf56 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3926)));
  /* 1a8858: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1738844));
  fn2_1b7d24(c);
  /* 1a885c: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 1a8860: sub x1, x29, #0x40 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 1a8864: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1738856));
  fn2_1bc2f8(c);
  /* 1a8868: sub x0, x29, #0x40 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 1a886c: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1738864));
  fn2_1ccd9c(c);
  /* 1a8870: add x0, sp, #0x40 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(64)));
  /* 1a8874: add x1, sp, #0x20 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(32)));
  /* 1a8878: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1738876));
  fn2_1bbfa0(c);
  /* 1a887c: sub x1, x29, #0x38 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(56)));
  /* 1a8880: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1738884));
  fn2_1bcf04(c);
  /* 1a8884: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 1a8888: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1738892));
  fn2_1bc620(c);
  /* 1a888c: sub x0, x29, #0x38 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(56)));
  /* 1a8890: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1738900));
  fn2_1bc620(c);
  /* 1a8894: add x0, sp, #0x38 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(56)));
  /* 1a8898: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1738908));
  fn2_1ccd9c(c);
  /* 1a889c: cmp x20, x23 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 23));
  /* 1a88a0: b.lt #0x1a87b4 */
  if (ARC_COND(c, 11)) goto L_1a87b4;
  /* 1a88a4: sub x0, x29, #0x38 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(56)));
  /* 1a88a8: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 1a88ac: bl #0x1bc290 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1738928));
  fn2_1bc290(c);
  /* 1a88b0: sub x0, x29, #0x40 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 1a88b4: adrp x1, #0x1c000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(114688)));
  /* 1a88b8: add x1, x1, #0xaa2 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2722)));
  /* 1a88bc: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1738944));
  fn2_1b7d24(c);
  /* 1a88c0: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 1a88c4: sub x1, x29, #0x40 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 1a88c8: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1738956));
  fn2_1bc2f8(c);
  /* 1a88cc: sub x0, x29, #0x40 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 1a88d0: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1738964));
  fn2_1ccd9c(c);
  /* 1a88d4: add x0, sp, #0x40 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(64)));
  /* 1a88d8: add x1, sp, #0x20 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(32)));
  /* 1a88dc: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1738976));
  fn2_1bbfa0(c);
  /* 1a88e0: sub x1, x29, #0x38 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(56)));
  /* 1a88e4: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1738984));
  fn2_1bcf04(c);
  /* 1a88e8: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 1a88ec: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1738992));
  fn2_1bc620(c);
  /* 1a88f0: sub x0, x29, #0x38 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(56)));
  /* 1a88f4: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1739000));
  fn2_1bc620(c);
  /* 1a88f8: sub x0, x29, #0x38 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(56)));
  /* 1a88fc: mov x1, x26 */
  ARC_X_W(c, 1, ARC_X_R(c, 26));
  /* 1a8900: bl #0x1bc290 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1739012));
  fn2_1bc290(c);
  /* 1a8904: sub x0, x29, #0x40 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 1a8908: adrp x1, #0x1a000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(106496)));
  /* 1a890c: add x1, x1, #0x827 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2087)));
  /* 1a8910: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1739028));
  fn2_1b7d24(c);
  /* 1a8914: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 1a8918: sub x1, x29, #0x40 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 1a891c: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1739040));
  fn2_1bc2f8(c);
  /* 1a8920: sub x0, x29, #0x40 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 1a8924: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1739048));
  fn2_1ccd9c(c);
  /* 1a8928: add x0, sp, #0x40 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(64)));
  /* 1a892c: add x1, sp, #0x20 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(32)));
  /* 1a8930: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1739060));
  fn2_1bbfa0(c);
  /* 1a8934: sub x1, x29, #0x38 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(56)));
  /* 1a8938: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1739068));
  fn2_1bcf04(c);
  /* 1a893c: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 1a8940: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1739076));
  fn2_1bc620(c);
  /* 1a8944: sub x0, x29, #0x38 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(56)));
  /* 1a8948: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1739084));
  fn2_1bc620(c);
  /* 1a894c: ldr x1, [x19, #0xb8] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 19) + INT64_C(184))));
  /* 1a8950: sub x0, x29, #0x38 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(56)));
  /* 1a8954: bl #0x1bc290 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1739096));
  fn2_1bc290(c);
  /* 1a8958: sub x0, x29, #0x40 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 1a895c: adrp x1, #0x20000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(131072)));
  /* 1a8960: add x1, x1, #0x2a5 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(677)));
  /* 1a8964: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1739112));
  fn2_1b7d24(c);
  /* 1a8968: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 1a896c: sub x1, x29, #0x40 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 1a8970: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1739124));
  fn2_1bc2f8(c);
  /* 1a8974: sub x0, x29, #0x40 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 1a8978: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1739132));
  fn2_1ccd9c(c);
  /* 1a897c: add x0, sp, #0x40 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(64)));
  /* 1a8980: add x1, sp, #0x20 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(32)));
  /* 1a8984: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1739144));
  fn2_1bbfa0(c);
  /* 1a8988: sub x1, x29, #0x38 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(56)));
  /* 1a898c: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1739152));
  fn2_1bcf04(c);
  /* 1a8990: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 1a8994: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1739160));
  fn2_1bc620(c);
  /* 1a8998: sub x0, x29, #0x38 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(56)));
  /* 1a899c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1739168));
  fn2_1bc620(c);
  /* 1a89a0: b #0x1a87b4 */
  goto L_1a87b4;
L_1a89a4:;
  /* 1a89a4: mov w19, wzr */
  ARC_W_W(c, 19, ARC_W_R(c, 31));
L_1a89a8:;
  /* 1a89a8: add x0, sp, #0x48 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(72)));
  /* 1a89ac: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1739184));
  fn2_1ccd9c(c);
  /* 1a89b0: add x0, sp, #0x50 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(80)));
  /* 1a89b4: bl #0x1dfd84 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1739192));
  fn2_1dfd84(c);
  /* 1a89b8: sub x0, x29, #0x50 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(80)));
  /* 1a89bc: bl #0x1dde08 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1739200));
  fn2_1dde08(c);
  /* 1a89c0: mov w0, w19 */
  ARC_W_W(c, 0, ARC_W_R(c, 19));
  /* 1a89c4: ldp x20, x19, [sp, #0x100] */
  { const uint64_t _pa = ((c)->sp + INT64_C(256));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1a89c8: ldp x22, x21, [sp, #0xf0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(240));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1a89cc: ldp x24, x23, [sp, #0xe0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(224));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 1a89d0: ldp x26, x25, [sp, #0xd0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(208));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* 1a89d4: ldp x28, x27, [sp, #0xc0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(192));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* 1a89d8: ldp x29, x30, [sp, #0xb0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(176));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1a89dc: add sp, sp, #0x110 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(272)));
  /* 1a89e0: ret  */
  return;
L_1a89e4:;
  /* 1a89e4: cbz w1, #0x1a8a18 */
  if ((ARC_W_R(c, 1)) == 0) goto L_1a8a18;
  /* 1a89e8: ldr x20, [x19, #0x48] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 19) + INT64_C(72))));
  /* 1a89ec: cbnz x20, #0x1a89fc */
  if ((ARC_X_R(c, 20)) != 0) goto L_1a89fc;
  /* 1a89f0: b #0x1a86d4 */
  goto L_1a86d4;
L_1a89f4:;
  /* 1a89f4: ldr x20, [x20] */
  ARC_X_W(c, 20, arc_ld64(ARC_X_R(c, 20)));
  /* 1a89f8: cbz x20, #0x1a86d4 */
  if ((ARC_X_R(c, 20)) == 0) goto L_1a86d4;
L_1a89fc:;
  /* 1a89fc: ldrsw x1, [x20, #0x10] */
  ARC_X_W(c, 1, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 20) + INT64_C(16)))));
  /* 1a8a00: ldr w8, [x19, #0x7c] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 19) + INT64_C(124))));
  /* 1a8a04: cmn w1, w8 */
  (void)arc_add32(c, ARC_W_R(c, 1), ARC_W_R(c, 8), 0);
  /* 1a8a08: b.eq #0x1a89f4 */
  if (ARC_COND(c, 0)) goto L_1a89f4;
  /* 1a8a0c: add x0, sp, #0x50 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(80)));
  /* 1a8a10: bl #0x1dfe7c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1739284));
  fn2_1dfe7c(c);
  /* 1a8a14: b #0x1a89f4 */
  goto L_1a89f4;
L_1a8a18:;
  /* 1a8a18: ldrb w8, [x19, #0x2c] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(44))));
  /* 1a8a1c: eor x1, x8, #1 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) ^ UINT64_C(1)));
  /* 1a8a20: b #0x1a86cc */
  goto L_1a86cc;
L_1a8a24:;
  /* 1a8a24: adrp x0, #0x1f000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(126976)));
  /* 1a8a28: add x0, x0, #0xb6e */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2926)));
  /* 1a8a2c: adrp x1, #0x2f000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(192512)));
  /* 1a8a30: add x1, x1, #0xa77 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2679)));
  /* 1a8a34: adrp x3, #0x21000 */
  ARC_X_W(c, 3, (arc_image_bases[2] + UINT64_C(135168)));
  /* 1a8a38: add x3, x3, #0x26 */
  ARC_X_W(c, 3, (ARC_X_R(c, 3) + UINT64_C(38)));
  /* 1a8a3c: adrp x4, #0x1b000 */
  ARC_X_W(c, 4, (arc_image_bases[2] + UINT64_C(110592)));
  /* 1a8a40: add x4, x4, #0x8b4 */
  ARC_X_W(c, 4, (ARC_X_R(c, 4) + UINT64_C(2228)));
  /* 1a8a44: mov w2, #0x86 */
  ARC_W_W(c, 2, UINT64_C(134));
  /* 1a8a48: mov w5, wzr */
  ARC_W_W(c, 5, ARC_W_R(c, 31));
  /* 1a8a4c: mov w6, wzr */
  ARC_W_W(c, 6, ARC_W_R(c, 31));
  /* 1a8a50: bl #0x1b5598 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1739348));
  fn2_1b5598(c);
  /* 1a8a54: mov w19, #3 */
  ARC_W_W(c, 19, UINT64_C(3));
  /* 1a8a58: b #0x1a89a8 */
  goto L_1a89a8;
}

void fn2_1aa2cc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077601484));
  /* 1aa2cc: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1aa2d0: str x23, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 23));
  /* 1aa2d4: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1aa2d8: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1aa2dc: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1aa2e0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1aa2e4: ldr x0, [x0, #8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* 1aa2e8: cbz x0, #0x1aa398 */
  if ((ARC_X_R(c, 0)) == 0) goto L_1aa398;
  /* 1aa2ec: ldr w8, [x19, #0x2c] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 19) + INT64_C(44))));
  /* 1aa2f0: cbz w8, #0x1aa374 */
  if ((ARC_W_R(c, 8)) == 0) goto L_1aa374;
  /* 1aa2f4: ldr w8, [x19, #0x28] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 19) + INT64_C(40))));
  /* 1aa2f8: adrp x9, #0x36000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(221184)));
  /* 1aa2fc: add x9, x9, #0x68c */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(1676)));
  /* 1aa300: mov x21, xzr */
  ARC_X_W(c, 21, ARC_X_R(c, 31));
  /* 1aa304: ldr w8, [x9, x8, lsl #2] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 9) + ((uint64_t)(ARC_X_R(c, 8)) << 2))));
  /* 1aa308: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* 1aa30c: csinc w22, w8, wzr, hi */
  ARC_W_W(c, 22, (ARC_COND(c, 8) ? (ARC_W_R(c, 8)) : ((ARC_W_R(c, 31)) + 1)));
  /* 1aa310: b #0x1aa320 */
  goto L_1aa320;
L_1aa314:;
  /* 1aa314: add x21, x21, #1 */
  ARC_X_W(c, 21, (ARC_X_R(c, 21) + UINT64_C(1)));
  /* 1aa318: cmp x22, x21 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 21));
  /* 1aa31c: b.eq #0x1aa364 */
  if (ARC_COND(c, 0)) goto L_1aa364;
L_1aa320:;
  /* 1aa320: ldr x8, [x19, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* 1aa324: ldr w9, [x8, x21, lsl #2] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 21)) << 2))));
  /* 1aa328: cbz w9, #0x1aa314 */
  if ((ARC_W_R(c, 9)) == 0) goto L_1aa314;
  /* 1aa32c: ldr x9, [x19, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* 1aa330: lsl x23, x21, #3 */
  ARC_X_W(c, 23, ((uint64_t)(ARC_X_R(c, 21)) << ((UINT64_C(3)) & 63)));
  /* 1aa334: str wzr, [x8, x21, lsl #2] */
  arc_st32((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 21)) << 2)), ARC_W_R(c, 31));
  /* 1aa338: ldr x20, [x9, x23] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 9) + ARC_X_R(c, 23))));
  /* 1aa33c: add x0, x20, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(32)));
  /* 1aa340: bl #0x1aa1f4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1745732));
  fn2_1aa1f4(c);
  /* 1aa344: add x0, x20, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(16)));
  /* 1aa348: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1745740));
  fn2_1ccd9c(c);
  /* 1aa34c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1aa350: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* 1aa354: bl #0x1b5ce8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1745752));
  fn2_1b5ce8(c);
  /* 1aa358: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* 1aa35c: str xzr, [x8, x23] */
  arc_st64((ARC_X_R(c, 8) + ARC_X_R(c, 23)), ARC_X_R(c, 31));
  /* 1aa360: b #0x1aa314 */
  goto L_1aa314;
L_1aa364:;
  /* 1aa364: ldr x0, [x19, #8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* 1aa368: str wzr, [x19, #0x2c] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(44)), ARC_W_R(c, 31));
  /* 1aa36c: stp xzr, xzr, [x19, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(24));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 1aa370: cbz x0, #0x1aa398 */
  if ((ARC_X_R(c, 0)) == 0) goto L_1aa398;
L_1aa374:;
  /* 1aa374: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* 1aa378: bl #0x1b5ce8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1745788));
  fn2_1b5ce8(c);
  /* 1aa37c: ldr x0, [x19, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* 1aa380: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* 1aa384: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1aa388: ldr x23, [sp, #0x10] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1aa38c: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1aa390: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1aa394: b #0x1b5ce8 */
  fn2_1b5ce8(c); return;
L_1aa398:;
  /* 1aa398: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1aa39c: ldr x23, [sp, #0x10] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1aa3a0: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1aa3a4: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1aa3a8: ret  */
  return;
}

void fn2_1abaf8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077607672));
  /* 1abaf8: sub sp, sp, #0x80 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(128)));
  /* 1abafc: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1abb00: stp x28, x27, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* 1abb04: stp x26, x25, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* 1abb08: stp x24, x23, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 1abb0c: stp x22, x21, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1abb10: stp x20, x19, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1abb14: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 1abb18: ldr w10, [x0, #0x28] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 0) + INT64_C(40))));
  /* 1abb1c: adrp x24, #0x36000 */
  ARC_X_W(c, 24, (arc_image_bases[2] + UINT64_C(221184)));
  /* 1abb20: add x24, x24, #0x68c */
  ARC_X_W(c, 24, (ARC_X_R(c, 24) + UINT64_C(1676)));
  /* 1abb24: ldr x9, [x0, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* 1abb28: mov w22, w3 */
  ARC_W_W(c, 22, ARC_W_R(c, 3));
  /* 1abb2c: mov x23, x2 */
  ARC_X_W(c, 23, ARC_X_R(c, 2));
  /* 1abb30: ldr w28, [x24, x10, lsl #2] */
  ARC_W_W(c, 28, arc_ld32((ARC_X_R(c, 24) + ((uint64_t)(ARC_X_R(c, 10)) << 2))));
  /* 1abb34: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* 1abb38: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 1abb3c: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* 1abb40: cbz x9, #0x1abdec */
  if ((ARC_X_R(c, 9)) == 0) goto L_1abdec;
L_1abb44:;
  /* 1abb44: mov w26, #0xae35 */
  ARC_W_W(c, 26, UINT64_C(44597));
  /* 1abb48: ldr w8, [x20, #0x2c] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 20) + INT64_C(44))));
  /* 1abb4c: mov w27, #0xca6b */
  ARC_W_W(c, 27, UINT64_C(51819));
  /* 1abb50: movk w26, #0xc2b2, lsl #16 */
  ARC_W_W(c, 26, ((ARC_W_R(c, 26) & UINT64_C(18446744069414649855)) | UINT64_C(3266445312)));
  /* 1abb54: movk w27, #0x85eb, lsl #16 */
  ARC_W_W(c, 27, ((ARC_W_R(c, 27) & UINT64_C(18446744069414649855)) | UINT64_C(2246770688)));
  /* 1abb58: adrp x25, #0x36000 */
  ARC_X_W(c, 25, (arc_image_bases[2] + UINT64_C(221184)));
  /* 1abb5c: add x25, x25, #0x700 */
  ARC_X_W(c, 25, (ARC_X_R(c, 25) + UINT64_C(1792)));
  /* 1abb60: cbz x9, #0x1abc28 */
  if ((ARC_X_R(c, 9)) == 0) goto L_1abc28;
  /* 1abb64: cbz w8, #0x1abc28 */
  if ((ARC_W_R(c, 8)) == 0) goto L_1abc28;
  /* 1abb68: ldr w10, [x21] */
  ARC_W_W(c, 10, arc_ld32(ARC_X_R(c, 21)));
  /* 1abb6c: ldr w13, [x20, #0x28] */
  ARC_W_W(c, 13, arc_ld32((ARC_X_R(c, 20) + INT64_C(40))));
  /* 1abb70: mov w14, #1 */
  ARC_W_W(c, 14, UINT64_C(1));
  /* 1abb74: eor w11, w10, w10, lsr #16 */
  ARC_W_W(c, 11, (ARC_W_R(c, 10) ^ ((uint32_t)(ARC_W_R(c, 10)) >> 16)));
  /* 1abb78: mul w11, w11, w27 */
  ARC_W_W(c, 11, ((uint32_t)(ARC_W_R(c, 11)) * (uint32_t)(ARC_W_R(c, 27))));
  /* 1abb7c: eor w11, w11, w11, lsr #13 */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) ^ ((uint32_t)(ARC_W_R(c, 11)) >> 13)));
  /* 1abb80: mul w11, w11, w26 */
  ARC_W_W(c, 11, ((uint32_t)(ARC_W_R(c, 11)) * (uint32_t)(ARC_W_R(c, 26))));
  /* 1abb84: eor w12, w11, w11, lsr #16 */
  ARC_W_W(c, 12, (ARC_W_R(c, 11) ^ ((uint32_t)(ARC_W_R(c, 11)) >> 16)));
  /* 1abb88: ldr x11, [x25, x13, lsl #3] */
  ARC_X_W(c, 11, arc_ld64((ARC_X_R(c, 25) + ((uint64_t)(ARC_X_R(c, 13)) << 3))));
  /* 1abb8c: ldr w13, [x24, x13, lsl #2] */
  ARC_W_W(c, 13, arc_ld32((ARC_X_R(c, 24) + ((uint64_t)(ARC_X_R(c, 13)) << 2))));
  /* 1abb90: cmp w12, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 12), UINT64_C(0));
  /* 1abb94: csel w12, w12, w14, ne */
  ARC_W_W(c, 12, (ARC_COND(c, 1) ? (ARC_W_R(c, 12)) : ARC_W_R(c, 14)));
  /* 1abb98: mul x14, x11, x12 */
  ARC_X_W(c, 14, ((uint64_t)(ARC_X_R(c, 11)) * (uint64_t)(ARC_X_R(c, 12))));
  /* 1abb9c: umulh x15, x14, x13 */
  ARC_X_W(c, 15, arc_umulh(ARC_X_R(c, 14), ARC_X_R(c, 13)));
  /* 1abba0: ldr x14, [x20, #0x10] */
  ARC_X_W(c, 14, arc_ld64((ARC_X_R(c, 20) + INT64_C(16))));
  /* 1abba4: ldr w17, [x14, x15, lsl #2] */
  ARC_W_W(c, 17, arc_ld32((ARC_X_R(c, 14) + ((uint64_t)(ARC_X_R(c, 15)) << 2))));
  /* 1abba8: cbz w17, #0x1abc28 */
  if ((ARC_W_R(c, 17)) == 0) goto L_1abc28;
  /* 1abbac: mov w16, #-1 */
  ARC_W_W(c, 16, UINT64_C(18446744073709551615));
  /* 1abbb0: b #0x1abbc8 */
  goto L_1abbc8;
L_1abbb4:;
  /* 1abbb4: add w15, w15, #1 */
  ARC_W_W(c, 15, (ARC_W_R(c, 15) + UINT64_C(1)));
  /* 1abbb8: mul x15, x11, x15 */
  ARC_X_W(c, 15, ((uint64_t)(ARC_X_R(c, 11)) * (uint64_t)(ARC_X_R(c, 15))));
  /* 1abbbc: umulh x15, x15, x13 */
  ARC_X_W(c, 15, arc_umulh(ARC_X_R(c, 15), ARC_X_R(c, 13)));
  /* 1abbc0: ldr w17, [x14, x15, lsl #2] */
  ARC_W_W(c, 17, arc_ld32((ARC_X_R(c, 14) + ((uint64_t)(ARC_X_R(c, 15)) << 2))));
  /* 1abbc4: cbz w17, #0x1abc28 */
  if ((ARC_W_R(c, 17)) == 0) goto L_1abc28;
L_1abbc8:;
  /* 1abbc8: mov w0, w17 */
  ARC_W_W(c, 0, ARC_W_R(c, 17));
  /* 1abbcc: add w1, w15, w13 */
  ARC_W_W(c, 1, (ARC_W_R(c, 15) + ARC_W_R(c, 13)));
  /* 1abbd0: add w16, w16, #1 */
  ARC_W_W(c, 16, (ARC_W_R(c, 16) + UINT64_C(1)));
  /* 1abbd4: mul x0, x11, x0 */
  ARC_X_W(c, 0, ((uint64_t)(ARC_X_R(c, 11)) * (uint64_t)(ARC_X_R(c, 0))));
  /* 1abbd8: umulh x0, x0, x13 */
  ARC_X_W(c, 0, arc_umulh(ARC_X_R(c, 0), ARC_X_R(c, 13)));
  /* 1abbdc: sub w0, w1, w0 */
  ARC_W_W(c, 0, (ARC_W_R(c, 1) - ARC_W_R(c, 0)));
  /* 1abbe0: mul x0, x11, x0 */
  ARC_X_W(c, 0, ((uint64_t)(ARC_X_R(c, 11)) * (uint64_t)(ARC_X_R(c, 0))));
  /* 1abbe4: umulh x0, x0, x13 */
  ARC_X_W(c, 0, arc_umulh(ARC_X_R(c, 0), ARC_X_R(c, 13)));
  /* 1abbe8: cmp w16, w0 */
  (void)arc_sub32(c, ARC_W_R(c, 16), ARC_W_R(c, 0));
  /* 1abbec: b.hi #0x1abc28 */
  if (ARC_COND(c, 8)) goto L_1abc28;
  /* 1abbf0: cmp w17, w12 */
  (void)arc_sub32(c, ARC_W_R(c, 17), ARC_W_R(c, 12));
  /* 1abbf4: b.ne #0x1abbb4 */
  if (ARC_COND(c, 1)) goto L_1abbb4;
  /* 1abbf8: ldr x17, [x9, x15, lsl #3] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 9) + ((uint64_t)(ARC_X_R(c, 15)) << 3))));
  /* 1abbfc: ldr w17, [x17, #0x10] */
  ARC_W_W(c, 17, arc_ld32((ARC_X_R(c, 17) + INT64_C(16))));
  /* 1abc00: cmp w17, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 17), ARC_W_R(c, 10));
  /* 1abc04: b.ne #0x1abbb4 */
  if (ARC_COND(c, 1)) goto L_1abbb4;
  /* 1abc08: ubfiz x21, x15, #3, #0x20 */
  ARC_X_W(c, 21, ((uint64_t)((((uint64_t)(ARC_X_R(c, 15))) & UINT64_C(4294967295))) << 3));
  /* 1abc0c: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* 1abc10: ldr x8, [x9, x21] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + ARC_X_R(c, 21))));
  /* 1abc14: add x0, x8, #0x14 */
  ARC_X_W(c, 0, (ARC_X_R(c, 8) + UINT64_C(20)));
  /* 1abc18: bl #0x1d06b8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1752092));
  fn2_1d06b8(c);
  /* 1abc1c: ldr x8, [x20, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(8))));
  /* 1abc20: ldr x23, [x8, x21] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 8) + ARC_X_R(c, 21))));
  /* 1abc24: b #0x1abdc8 */
  goto L_1abdc8;
L_1abc28:;
  /* 1abc28: ucvtf s0, w28 */
  arc_s_w(c, 0, (float)(((uint32_t)(ARC_W_R(c, 28)))));
  /* 1abc2c: fmov s1, #0.75000000 */
  arc_s_w(c, 1, (float)(0.75));
  /* 1abc30: add w8, w8, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) + UINT64_C(1)));
  /* 1abc34: ucvtf s2, w8 */
  arc_s_w(c, 2, (float)(((uint32_t)(ARC_W_R(c, 8)))));
  /* 1abc38: fmul s0, s0, s1 */
  arc_s_w(c, 0, (float)(arc_fmul32(ARC_S_R(c, 0), ARC_S_R(c, 1))));
  /* 1abc3c: fcmp s0, s2 */
  arc_fcmp(c, (double)(ARC_S_R(c, 0)), (double)(ARC_S_R(c, 2)));
  /* 1abc40: b.pl #0x1abc5c */
  if (ARC_COND(c, 5)) goto L_1abc5c;
  /* 1abc44: ldr w8, [x20, #0x28] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 20) + INT64_C(40))));
  /* 1abc48: add w1, w8, #1 */
  ARC_W_W(c, 1, (ARC_W_R(c, 8) + UINT64_C(1)));
  /* 1abc4c: cmp w1, #0x1d */
  (void)arc_sub32(c, ARC_W_R(c, 1), UINT64_C(29));
  /* 1abc50: b.eq #0x1abe44 */
  if (ARC_COND(c, 0)) goto L_1abe44;
  /* 1abc54: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1abc58: bl #0x1abe7c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1752156));
  fn2_1abe7c(c);
L_1abc5c:;
  /* 1abc5c: ldr w8, [x21] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 21)));
  /* 1abc60: mov x28, sp */
  ARC_X_W(c, 28, (c)->sp);
  /* 1abc64: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* 1abc68: add x0, x28, #0x14 */
  ARC_X_W(c, 0, (ARC_X_R(c, 28) + UINT64_C(20)));
  /* 1abc6c: stp xzr, xzr, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 1abc70: str w8, [sp, #0x10] */
  arc_st32(((c)->sp + INT64_C(16)), ARC_W_R(c, 8));
  /* 1abc74: bl #0x1ccc88 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1752184));
  fn2_1ccc88(c);
  /* 1abc78: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* 1abc7c: add x1, x1, #0xb6f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2927)));
  /* 1abc80: mov w0, #0x20 */
  ARC_W_W(c, 0, UINT64_C(32));
  /* 1abc84: mov x2, x1 */
  ARC_X_W(c, 2, ARC_X_R(c, 1));
  /* 1abc88: bl #0x1b5d1c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1752204));
  fn2_1b5d1c(c);
  /* 1abc8c: ldr q0, [sp] */
  arc_q_w(c, 0, arc_ld64((c)->sp), arc_ld64((c)->sp + 8));
  /* 1abc90: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* 1abc94: add x1, x28, #0x14 */
  ARC_X_W(c, 1, (ARC_X_R(c, 28) + UINT64_C(20)));
  /* 1abc98: str q0, [x0] */
  arc_st64(ARC_X_R(c, 0), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 0) + 8, (c)->q[0].u64[1]);
  /* 1abc9c: ldr w8, [sp, #0x10] */
  ARC_W_W(c, 8, arc_ld32(((c)->sp + INT64_C(16))));
  /* 1abca0: str w8, [x0, #0x10] */
  arc_st32((ARC_X_R(c, 0) + INT64_C(16)), ARC_W_R(c, 8));
  /* 1abca4: add x0, x0, #0x14 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(20)));
  /* 1abca8: bl #0x1ccc88 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1752236));
  fn2_1ccc88(c);
  /* 1abcac: add x0, x28, #0x14 */
  ARC_X_W(c, 0, (ARC_X_R(c, 28) + UINT64_C(20)));
  /* 1abcb0: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1752244));
  fn2_1ccd9c(c);
  /* 1abcb4: mov x9, x20 */
  ARC_X_W(c, 9, ARC_X_R(c, 20));
  /* 1abcb8: ldr x8, [x9, #0x20]! */
  { const uint64_t _a = (ARC_X_R(c, 9) + INT64_C(32));
    ARC_X_W(c, 9, ARC_X_R(c, 9) + INT64_C(32));
    ARC_X_W(c, 8, arc_ld64(_a));
  }
  /* 1abcbc: cbz x8, #0x1abcd8 */
  if ((ARC_X_R(c, 8)) == 0) goto L_1abcd8;
  /* 1abcc0: tbz w22, #0, #0x1abce0 */
  if (((ARC_W_R(c, 22)) >> 0 & 1) == 0) goto L_1abce0;
  /* 1abcc4: mov x9, x20 */
  ARC_X_W(c, 9, ARC_X_R(c, 20));
  /* 1abcc8: ldr x8, [x9, #0x18]! */
  { const uint64_t _a = (ARC_X_R(c, 9) + INT64_C(24));
    ARC_X_W(c, 9, ARC_X_R(c, 9) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_a));
  }
  /* 1abccc: str x23, [x8, #8] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(8)), ARC_X_R(c, 23));
  /* 1abcd0: str x8, [x23] */
  arc_st64(ARC_X_R(c, 23), ARC_X_R(c, 8));
  /* 1abcd4: b #0x1abce8 */
  goto L_1abce8;
L_1abcd8:;
  /* 1abcd8: str x23, [x20, #0x18] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(24)), ARC_X_R(c, 23));
  /* 1abcdc: b #0x1abce8 */
  goto L_1abce8;
L_1abce0:;
  /* 1abce0: str x23, [x8] */
  arc_st64(ARC_X_R(c, 8), ARC_X_R(c, 23));
  /* 1abce4: str x8, [x23, #8] */
  arc_st64((ARC_X_R(c, 23) + INT64_C(8)), ARC_X_R(c, 8));
L_1abce8:;
  /* 1abce8: ldr w8, [x21] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 21)));
  /* 1abcec: str x23, [x9] */
  arc_st64(ARC_X_R(c, 9), ARC_X_R(c, 23));
  /* 1abcf0: eor w8, w8, w8, lsr #16 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) ^ ((uint32_t)(ARC_W_R(c, 8)) >> 16)));
  /* 1abcf4: mul w8, w8, w27 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 8)) * (uint32_t)(ARC_W_R(c, 27))));
  /* 1abcf8: eor w8, w8, w8, lsr #13 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) ^ ((uint32_t)(ARC_W_R(c, 8)) >> 13)));
  /* 1abcfc: mul w8, w8, w26 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 8)) * (uint32_t)(ARC_W_R(c, 26))));
  /* 1abd00: eor w8, w8, w8, lsr #16 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) ^ ((uint32_t)(ARC_W_R(c, 8)) >> 16)));
  /* 1abd04: cbz w8, #0x1abe3c */
  if ((ARC_W_R(c, 8)) == 0) goto L_1abe3c;
L_1abd08:;
  /* 1abd08: ldr w9, [x20, #0x28] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 20) + INT64_C(40))));
  /* 1abd0c: mov w11, w8 */
  ARC_W_W(c, 11, ARC_W_R(c, 8));
  /* 1abd10: ldr x10, [x25, x9, lsl #3] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 25) + ((uint64_t)(ARC_X_R(c, 9)) << 3))));
  /* 1abd14: mul x12, x10, x11 */
  ARC_X_W(c, 12, ((uint64_t)(ARC_X_R(c, 10)) * (uint64_t)(ARC_X_R(c, 11))));
  /* 1abd18: ldr w11, [x24, x9, lsl #2] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 24) + ((uint64_t)(ARC_X_R(c, 9)) << 2))));
  /* 1abd1c: umulh x9, x12, x11 */
  ARC_X_W(c, 9, arc_umulh(ARC_X_R(c, 12), ARC_X_R(c, 11)));
  /* 1abd20: ldr x12, [x20, #0x10] */
  ARC_X_W(c, 12, arc_ld64((ARC_X_R(c, 20) + INT64_C(16))));
  /* 1abd24: add x16, x12, x9, lsl #2 */
  ARC_X_W(c, 16, (ARC_X_R(c, 12) + ((uint64_t)(ARC_X_R(c, 9)) << 2)));
  /* 1abd28: ldr w15, [x16] */
  ARC_W_W(c, 15, arc_ld32(ARC_X_R(c, 16)));
  /* 1abd2c: cbz w15, #0x1abda8 */
  if ((ARC_W_R(c, 15)) == 0) goto L_1abda8;
  /* 1abd30: mov w17, wzr */
  ARC_W_W(c, 17, ARC_W_R(c, 31));
  /* 1abd34: mov w13, w11 */
  ARC_W_W(c, 13, ARC_W_R(c, 11));
  /* 1abd38: mov x14, x23 */
  ARC_X_W(c, 14, ARC_X_R(c, 23));
  /* 1abd3c: b #0x1abd7c */
  goto L_1abd7c;
L_1abd40:;
  /* 1abd40: ldr x12, [x20, #8] */
  ARC_X_W(c, 12, arc_ld64((ARC_X_R(c, 20) + INT64_C(8))));
  /* 1abd44: lsl x17, x9, #3 */
  ARC_X_W(c, 17, ((uint64_t)(ARC_X_R(c, 9)) << ((UINT64_C(3)) & 63)));
  /* 1abd48: str w8, [x16] */
  arc_st32(ARC_X_R(c, 16), ARC_W_R(c, 8));
  /* 1abd4c: mov w8, w15 */
  ARC_W_W(c, 8, ARC_W_R(c, 15));
  /* 1abd50: ldr x1, [x12, x17] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 12) + ARC_X_R(c, 17))));
  /* 1abd54: str x14, [x12, x17] */
  arc_st64((ARC_X_R(c, 12) + ARC_X_R(c, 17)), ARC_X_R(c, 14));
  /* 1abd58: ldr x12, [x20, #0x10] */
  ARC_X_W(c, 12, arc_ld64((ARC_X_R(c, 20) + INT64_C(16))));
  /* 1abd5c: mov x14, x1 */
  ARC_X_W(c, 14, ARC_X_R(c, 1));
L_1abd60:;
  /* 1abd60: add w9, w9, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) + UINT64_C(1)));
  /* 1abd64: add w17, w0, #1 */
  ARC_W_W(c, 17, (ARC_W_R(c, 0) + UINT64_C(1)));
  /* 1abd68: mul x9, x10, x9 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 10)) * (uint64_t)(ARC_X_R(c, 9))));
  /* 1abd6c: umulh x9, x9, x13 */
  ARC_X_W(c, 9, arc_umulh(ARC_X_R(c, 9), ARC_X_R(c, 13)));
  /* 1abd70: add x16, x12, x9, lsl #2 */
  ARC_X_W(c, 16, (ARC_X_R(c, 12) + ((uint64_t)(ARC_X_R(c, 9)) << 2)));
  /* 1abd74: ldr w15, [x16] */
  ARC_W_W(c, 15, arc_ld32(ARC_X_R(c, 16)));
  /* 1abd78: cbz w15, #0x1abdac */
  if ((ARC_W_R(c, 15)) == 0) goto L_1abdac;
L_1abd7c:;
  /* 1abd7c: mov w0, w15 */
  ARC_W_W(c, 0, ARC_W_R(c, 15));
  /* 1abd80: add w1, w9, w11 */
  ARC_W_W(c, 1, (ARC_W_R(c, 9) + ARC_W_R(c, 11)));
  /* 1abd84: mul x0, x10, x0 */
  ARC_X_W(c, 0, ((uint64_t)(ARC_X_R(c, 10)) * (uint64_t)(ARC_X_R(c, 0))));
  /* 1abd88: umulh x0, x0, x13 */
  ARC_X_W(c, 0, arc_umulh(ARC_X_R(c, 0), ARC_X_R(c, 13)));
  /* 1abd8c: sub w0, w1, w0 */
  ARC_W_W(c, 0, (ARC_W_R(c, 1) - ARC_W_R(c, 0)));
  /* 1abd90: mul x0, x10, x0 */
  ARC_X_W(c, 0, ((uint64_t)(ARC_X_R(c, 10)) * (uint64_t)(ARC_X_R(c, 0))));
  /* 1abd94: umulh x0, x0, x13 */
  ARC_X_W(c, 0, arc_umulh(ARC_X_R(c, 0), ARC_X_R(c, 13)));
  /* 1abd98: cmp w17, w0 */
  (void)arc_sub32(c, ARC_W_R(c, 17), ARC_W_R(c, 0));
  /* 1abd9c: b.hi #0x1abd40 */
  if (ARC_COND(c, 8)) goto L_1abd40;
  /* 1abda0: mov w0, w17 */
  ARC_W_W(c, 0, ARC_W_R(c, 17));
  /* 1abda4: b #0x1abd60 */
  goto L_1abd60;
L_1abda8:;
  /* 1abda8: mov x14, x23 */
  ARC_X_W(c, 14, ARC_X_R(c, 23));
L_1abdac:;
  /* 1abdac: ldr x10, [x20, #8] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 20) + INT64_C(8))));
  /* 1abdb0: str x14, [x10, x9, lsl #3] */
  arc_st64((ARC_X_R(c, 10) + ((uint64_t)(ARC_X_R(c, 9)) << 3)), ARC_X_R(c, 14));
  /* 1abdb4: ldr x10, [x20, #0x10] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 20) + INT64_C(16))));
  /* 1abdb8: str w8, [x10, x9, lsl #2] */
  arc_st32((ARC_X_R(c, 10) + ((uint64_t)(ARC_X_R(c, 9)) << 2)), ARC_W_R(c, 8));
  /* 1abdbc: ldr w8, [x20, #0x2c] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 20) + INT64_C(44))));
  /* 1abdc0: add w8, w8, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) + UINT64_C(1)));
  /* 1abdc4: str w8, [x20, #0x2c] */
  arc_st32((ARC_X_R(c, 20) + INT64_C(44)), ARC_W_R(c, 8));
L_1abdc8:;
  /* 1abdc8: str x23, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 23));
  /* 1abdcc: ldp x20, x19, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1abdd0: ldp x22, x21, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1abdd4: ldp x24, x23, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 1abdd8: ldp x26, x25, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* 1abddc: ldp x28, x27, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* 1abde0: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1abde4: add sp, sp, #0x80 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(128)));
  /* 1abde8: ret  */
  return;
L_1abdec:;
  /* 1abdec: lsl x0, x28, #2 */
  ARC_X_W(c, 0, ((uint64_t)(ARC_X_R(c, 28)) << ((UINT64_C(2)) & 63)));
  /* 1abdf0: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* 1abdf4: bl #0x1b5b60 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1752568));
  fn2_1b5b60(c);
  /* 1abdf8: lsl x8, x28, #3 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 28)) << ((UINT64_C(3)) & 63)));
  /* 1abdfc: str x0, [x20, #0x10] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(16)), ARC_X_R(c, 0));
  /* 1abe00: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* 1abe04: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1abe08: bl #0x1b5b60 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1752588));
  fn2_1b5b60(c);
  /* 1abe0c: cmp w28, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 28), UINT64_C(1));
  /* 1abe10: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* 1abe14: str x0, [x20, #8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(8)), ARC_X_R(c, 0));
  /* 1abe18: csinc w9, w28, wzr, hi */
  ARC_W_W(c, 9, (ARC_COND(c, 8) ? (ARC_W_R(c, 28)) : ((ARC_W_R(c, 31)) + 1)));
L_1abe1c:;
  /* 1abe1c: ldp x11, x10, [x20, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(8));
    ARC_X_W(c, 11, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* 1abe20: str wzr, [x10, x8, lsl #2] */
  arc_st32((ARC_X_R(c, 10) + ((uint64_t)(ARC_X_R(c, 8)) << 2)), ARC_W_R(c, 31));
  /* 1abe24: str xzr, [x11, x8, lsl #3] */
  arc_st64((ARC_X_R(c, 11) + ((uint64_t)(ARC_X_R(c, 8)) << 3)), ARC_X_R(c, 31));
  /* 1abe28: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* 1abe2c: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* 1abe30: b.ne #0x1abe1c */
  if (ARC_COND(c, 1)) goto L_1abe1c;
  /* 1abe34: ldr x9, [x20, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 20) + INT64_C(8))));
  /* 1abe38: b #0x1abb44 */
  goto L_1abb44;
L_1abe3c:;
  /* 1abe3c: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 1abe40: b #0x1abd08 */
  goto L_1abd08;
L_1abe44:;
  /* 1abe44: adrp x0, #0x2a000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(172032)));
  /* 1abe48: add x0, x0, #0x96d */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2413)));
  /* 1abe4c: adrp x1, #0x2c000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(180224)));
  /* 1abe50: add x1, x1, #0x166 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(358)));
  /* 1abe54: adrp x3, #0x21000 */
  ARC_X_W(c, 3, (arc_image_bases[2] + UINT64_C(135168)));
  /* 1abe58: add x3, x3, #0x67b */
  ARC_X_W(c, 3, (ARC_X_R(c, 3) + UINT64_C(1659)));
  /* 1abe5c: adrp x4, #0x26000 */
  ARC_X_W(c, 4, (arc_image_bases[2] + UINT64_C(155648)));
  /* 1abe60: add x4, x4, #0xf63 */
  ARC_X_W(c, 4, (ARC_X_R(c, 4) + UINT64_C(3939)));
  /* 1abe64: mov w2, #0xdd */
  ARC_W_W(c, 2, UINT64_C(221));
  /* 1abe68: mov w5, wzr */
  ARC_W_W(c, 5, ARC_W_R(c, 31));
  /* 1abe6c: mov w6, wzr */
  ARC_W_W(c, 6, ARC_W_R(c, 31));
  /* 1abe70: bl #0x1b5598 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1752692));
  fn2_1b5598(c);
  /* 1abe74: mov x23, xzr */
  ARC_X_W(c, 23, ARC_X_R(c, 31));
  /* 1abe78: b #0x1abdc8 */
  goto L_1abdc8;
}

void fn2_1afcb8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077624504));
  /* 1afcb8: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
  /* 1afcbc: ret  */
  return;
}

void fn2_1b2b2c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077636396));
  /* 1b2b2c: sub sp, sp, #0xa0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(160)));
  /* 1b2b30: stp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1b2b34: stp x28, x27, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* 1b2b38: stp x26, x25, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* 1b2b3c: stp x24, x23, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 1b2b40: stp x22, x21, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1b2b44: stp x20, x19, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1b2b48: add x29, sp, #0x40 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(64)));
  /* 1b2b4c: nop  */
  /* nop: no architectural effect here */
  /* 1b2b50: adr x8, #0x25d9f0 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2480624)));
  /* 1b2b54: add x9, sp, #8 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(8)));
  /* 1b2b58: ldp x8, x20, [x8] */
  { const uint64_t _pa = ARC_X_R(c, 8);
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 20, arc_ld64(_pa + 8));
  }
  /* 1b2b5c: mov w19, w0 */
  ARC_W_W(c, 19, ARC_W_R(c, 0));
  /* 1b2b60: add x9, x9, #8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(8)));
  /* 1b2b64: adrp x24, #0x25d000 */
  ARC_X_W(c, 24, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 1b2b68: stp xzr, xzr, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 1b2b6c: str x9, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 9));
  /* 1b2b70: cmp x20, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 8));
  /* 1b2b74: b.eq #0x1b2cdc */
  if (ARC_COND(c, 0)) goto L_1b2cdc;
  /* 1b2b78: adrp x25, #0x258000 */
  ARC_X_W(c, 25, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1b2b7c: adrp x26, #0x258000 */
  ARC_X_W(c, 26, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1b2b80: nop  */
  /* nop: no architectural effect here */
  /* 1b2b84: adr x21, #0x25d9a0 */
  ARC_X_W(c, 21, (arc_image_bases[2] + UINT64_C(2480544)));
  /* 1b2b88: ldr x25, [x25, #0xa10] */
  ARC_X_W(c, 25, arc_ld64((ARC_X_R(c, 25) + INT64_C(2576))));
  /* 1b2b8c: ldr x26, [x26, #0x648] */
  ARC_X_W(c, 26, arc_ld64((ARC_X_R(c, 26) + INT64_C(1608))));
  /* 1b2b90: adrp x22, #0x39000 */
  ARC_X_W(c, 22, (arc_image_bases[2] + UINT64_C(233472)));
  /* 1b2b94: add x22, x22, #0x317 */
  ARC_X_W(c, 22, (ARC_X_R(c, 22) + UINT64_C(791)));
  /* 1b2b98: adrp x27, #0x25d000 */
  ARC_X_W(c, 27, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 1b2b9c: b #0x1b2bc4 */
  goto L_1b2bc4;
L_1b2ba0:;
  /* 1b2ba0: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 1b2ba4: bl #0x24b730 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1780648));
  fn2_24b730(c);
L_1b2ba8:;
  /* 1b2ba8: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1b2bac: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 1b2bb0: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* 1b2bb4: bl #0x1b3e1c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1780664));
  fn2_1b3e1c(c);
L_1b2bb8:;
  /* 1b2bb8: ldr x8, [x27, #0x9f0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 27) + INT64_C(2544))));
  /* 1b2bbc: cmp x20, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 8));
  /* 1b2bc0: b.eq #0x1b2c7c */
  if (ARC_COND(c, 0)) goto L_1b2c7c;
L_1b2bc4:;
  /* 1b2bc4: sub x20, x20, #8 */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) - UINT64_C(8)));
  /* 1b2bc8: sub x3, x29, #0x18 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 1b2bcc: sub x4, x29, #0x19 */
  ARC_X_W(c, 4, (ARC_X_R(c, 29) - UINT64_C(25)));
  /* 1b2bd0: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 1b2bd4: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 1b2bd8: mov x2, x22 */
  ARC_X_W(c, 2, ARC_X_R(c, 22));
  /* 1b2bdc: stur x20, [x29, #-0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-24)), ARC_X_R(c, 20));
  /* 1b2be0: bl #0x179fe4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1780708));
  fn2_179fe4(c);
  /* 1b2be4: ldr w8, [x0, #0x28] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 0) + INT64_C(40))));
  /* 1b2be8: cmp w8, w19 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 19));
  /* 1b2bec: b.ne #0x1b2bb8 */
  if (ARC_COND(c, 1)) goto L_1b2bb8;
  /* 1b2bf0: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* 1b2bf4: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 1b2bf8: ldr x0, [x26] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 26)));
  /* 1b2bfc: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 1b2c00: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1780740));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1b2c04: ldr x28, [x23, #0x40] */
  ARC_X_W(c, 28, arc_ld64((ARC_X_R(c, 23) + INT64_C(64))));
  /* 1b2c08: cbz x28, #0x1b2c34 */
  if ((ARC_X_R(c, 28)) == 0) goto L_1b2c34;
L_1b2c0c:;
  /* 1b2c0c: ldr x23, [x28, #0x18] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 28) + INT64_C(24))));
  /* 1b2c10: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 1b2c14: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 1b2c18: ldr x8, [x8, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* 1b2c1c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1780768));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1b2c20: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 1b2c24: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* 1b2c28: bl #0x1b5ce8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1780780));
  fn2_1b5ce8(c);
  /* 1b2c2c: ldr x28, [x28] */
  ARC_X_W(c, 28, arc_ld64(ARC_X_R(c, 28)));
  /* 1b2c30: cbnz x28, #0x1b2c0c */
  if ((ARC_X_R(c, 28)) != 0) goto L_1b2c0c;
L_1b2c34:;
  /* 1b2c34: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 1b2c38: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 1b2c3c: bl #0x179eac */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1780800));
  fn2_179eac(c);
  /* 1b2c40: cbz x0, #0x1b2ba8 */
  if ((ARC_X_R(c, 0)) == 0) goto L_1b2ba8;
  /* 1b2c44: mov x1, x0 */
  ARC_X_W(c, 1, ARC_X_R(c, 0));
  /* 1b2c48: sub x8, x29, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 1b2c4c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 1b2c50: bl #0x1b52a4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1780820));
  fn2_1b52a4(c);
  /* 1b2c54: ldur x23, [x29, #-0x18] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 29) + INT64_C(-24))));
  /* 1b2c58: stur xzr, [x29, #-0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-24)), ARC_X_R(c, 31));
  /* 1b2c5c: cbz x23, #0x1b2ba8 */
  if ((ARC_X_R(c, 23)) == 0) goto L_1b2ba8;
  /* 1b2c60: ldurb w8, [x29, #-8] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-8))));
  /* 1b2c64: cbz w8, #0x1b2ba0 */
  if ((ARC_W_R(c, 8)) == 0) goto L_1b2ba0;
  /* 1b2c68: add x0, x23, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 23) + UINT64_C(24)));
  /* 1b2c6c: bl #0x1798d4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1780848));
  fn2_1798d4(c);
  /* 1b2c70: add x0, x23, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 23) + UINT64_C(16)));
  /* 1b2c74: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1780856));
  fn2_1d2d24(c);
  /* 1b2c78: b #0x1b2ba0 */
  goto L_1b2ba0;
L_1b2c7c:;
  /* 1b2c7c: ldr x23, [x24, #0x9f8] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 24) + INT64_C(2552))));
  /* 1b2c80: cmp x20, x23 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 23));
  /* 1b2c84: b.eq #0x1b2ce4 */
  if (ARC_COND(c, 0)) goto L_1b2ce4;
  /* 1b2c88: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1b2c8c: cbz x21, #0x1b2d94 */
  if ((ARC_X_R(c, 21)) == 0) goto L_1b2d94;
  /* 1b2c90: cbnz x21, #0x1b2cb8 */
  if ((ARC_X_R(c, 21)) != 0) goto L_1b2cb8;
L_1b2c94:;
  /* 1b2c94: add x20, x20, #8 */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* 1b2c98: cmp x20, x23 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 23));
  /* 1b2c9c: b.eq #0x1b2ce4 */
  if (ARC_COND(c, 0)) goto L_1b2ce4;
  /* 1b2ca0: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1b2ca4: cbnz x21, #0x1b2cb8 */
  if ((ARC_X_R(c, 21)) != 0) goto L_1b2cb8;
  /* 1b2ca8: b #0x1b2c94 */
  goto L_1b2c94;
L_1b2cac:;
  /* 1b2cac: add x21, x21, #8 */
  ARC_X_W(c, 21, (ARC_X_R(c, 21) + UINT64_C(8)));
L_1b2cb0:;
  /* 1b2cb0: ldr x21, [x21] */
  ARC_X_W(c, 21, arc_ld64(ARC_X_R(c, 21)));
  /* 1b2cb4: cbz x21, #0x1b2c94 */
  if ((ARC_X_R(c, 21)) == 0) goto L_1b2c94;
L_1b2cb8:;
  /* 1b2cb8: add x1, x21, #0x19 */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(25)));
  /* 1b2cbc: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1b2cc0: bl #0x1d56f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1780932));
  fn2_1d56f8(c);
  /* 1b2cc4: tbnz w0, #0, #0x1b2cb0 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) != 0) goto L_1b2cb0;
  /* 1b2cc8: add x0, x21, #0x19 */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) + UINT64_C(25)));
  /* 1b2ccc: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 1b2cd0: bl #0x1d56f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1780948));
  fn2_1d56f8(c);
  /* 1b2cd4: tbnz w0, #0, #0x1b2cac */
  if (((ARC_W_R(c, 0)) >> 0 & 1) != 0) goto L_1b2cac;
  /* 1b2cd8: b #0x1b2dac */
  goto L_1b2dac;
L_1b2cdc:;
  /* 1b2cdc: mov x21, x20 */
  ARC_X_W(c, 21, ARC_X_R(c, 20));
  /* 1b2ce0: b #0x1b2ce8 */
  goto L_1b2ce8;
L_1b2ce4:;
  /* 1b2ce4: mov x21, x23 */
  ARC_X_W(c, 21, ARC_X_R(c, 23));
L_1b2ce8:;
  /* 1b2ce8: ldr x20, [x24, #0x9f8] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 24) + INT64_C(2552))));
  /* 1b2cec: cmp x21, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 20));
  /* 1b2cf0: b.eq #0x1b2d3c */
  if (ARC_COND(c, 0)) goto L_1b2d3c;
  /* 1b2cf4: cmp x20, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 20));
  /* 1b2cf8: b.eq #0x1b2d30 */
  if (ARC_COND(c, 0)) goto L_1b2d30;
  /* 1b2cfc: mov x22, x20 */
  ARC_X_W(c, 22, ARC_X_R(c, 20));
L_1b2d00:;
  /* 1b2d00: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 1b2d04: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 1b2d08: bl #0x1d2b98 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1781004));
  fn2_1d2b98(c);
  /* 1b2d0c: add x22, x22, #8 */
  ARC_X_W(c, 22, (ARC_X_R(c, 22) + UINT64_C(8)));
  /* 1b2d10: add x21, x21, #8 */
  ARC_X_W(c, 21, (ARC_X_R(c, 21) + UINT64_C(8)));
  /* 1b2d14: cmp x22, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 20));
  /* 1b2d18: b.ne #0x1b2d00 */
  if (ARC_COND(c, 1)) goto L_1b2d00;
  /* 1b2d1c: ldr x20, [x24, #0x9f8] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 24) + INT64_C(2552))));
  /* 1b2d20: b #0x1b2d30 */
  goto L_1b2d30;
L_1b2d24:;
  /* 1b2d24: sub x20, x20, #8 */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) - UINT64_C(8)));
  /* 1b2d28: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1b2d2c: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1781040));
  fn2_1d2d24(c);
L_1b2d30:;
  /* 1b2d30: cmp x20, x21 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 21));
  /* 1b2d34: b.ne #0x1b2d24 */
  if (ARC_COND(c, 1)) goto L_1b2d24;
  /* 1b2d38: str x21, [x24, #0x9f8] */
  arc_st64((ARC_X_R(c, 24) + INT64_C(2552)), ARC_X_R(c, 21));
L_1b2d3c:;
  /* 1b2d3c: cbnz w19, #0x1b2f30 */
  if ((ARC_W_R(c, 19)) != 0) goto L_1b2f30;
  /* 1b2d40: nop  */
  /* nop: no architectural effect here */
  /* 1b2d44: adr x0, #0x25da30 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2480688)));
  /* 1b2d48: stp xzr, xzr, [x29, #-0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-24));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 1b2d4c: stur xzr, [x29, #-8] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-8)), ARC_X_R(c, 31));
  /* 1b2d50: bl #0x24b830 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1781076));
  fn2_24b830(c);
  /* 1b2d54: adrp x8, #0x25d000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 1b2d58: ldr x8, [x8, #0xa20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2592))));
  /* 1b2d5c: cbz x8, #0x1b2e10 */
  if ((ARC_X_R(c, 8)) == 0) goto L_1b2e10;
  /* 1b2d60: lsr x9, x8, #0x3d */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(61)) & 63)));
  /* 1b2d64: cbnz x9, #0x1b2f5c */
  if ((ARC_X_R(c, 9)) != 0) goto L_1b2f5c;
  /* 1b2d68: lsl x20, x8, #3 */
  ARC_X_W(c, 20, ((uint64_t)(ARC_X_R(c, 8)) << ((UINT64_C(3)) & 63)));
  /* 1b2d6c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1b2d70: bl #0x24b750 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1781108));
  fn2_24b750(c);
  /* 1b2d74: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1b2d78: add x8, x0, x20 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + ARC_X_R(c, 20)));
  /* 1b2d7c: stp x0, x0, [x29, #-0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-24));
    arc_st64(_pa, ARC_X_R(c, 0));
    arc_st64(_pa + 8, ARC_X_R(c, 0));
  }
  /* 1b2d80: stur x8, [x29, #-8] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-8)), ARC_X_R(c, 8));
  /* 1b2d84: adrp x8, #0x25d000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 1b2d88: ldr x23, [x8, #0xa18] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 8) + INT64_C(2584))));
  /* 1b2d8c: cbnz x23, #0x1b2e20 */
  if ((ARC_X_R(c, 23)) != 0) goto L_1b2e20;
  /* 1b2d90: b #0x1b2ed4 */
  goto L_1b2ed4;
L_1b2d94:;
  /* 1b2d94: sub x8, x23, x20 */
  ARC_X_W(c, 8, (ARC_X_R(c, 23) - ARC_X_R(c, 20)));
  /* 1b2d98: mov x21, x23 */
  ARC_X_W(c, 21, ARC_X_R(c, 23));
  /* 1b2d9c: and x8, x8, #0xfffffffffffffff8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) & UINT64_C(18446744073709551608)));
  /* 1b2da0: add x20, x20, x8 */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) + ARC_X_R(c, 8)));
  /* 1b2da4: cmp x20, x23 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 23));
  /* 1b2da8: b.eq #0x1b2ce8 */
  if (ARC_COND(c, 0)) goto L_1b2ce8;
L_1b2dac:;
  /* 1b2dac: add x22, x20, #8 */
  ARC_X_W(c, 22, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* 1b2db0: mov x21, x20 */
  ARC_X_W(c, 21, ARC_X_R(c, 20));
  /* 1b2db4: b #0x1b2dcc */
  goto L_1b2dcc;
L_1b2db8:;
  /* 1b2db8: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 1b2dbc: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 1b2dc0: bl #0x1d2b98 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1781188));
  fn2_1d2b98(c);
  /* 1b2dc4: add x21, x21, #8 */
  ARC_X_W(c, 21, (ARC_X_R(c, 21) + UINT64_C(8)));
L_1b2dc8:;
  /* 1b2dc8: add x22, x22, #8 */
  ARC_X_W(c, 22, (ARC_X_R(c, 22) + UINT64_C(8)));
L_1b2dcc:;
  /* 1b2dcc: cmp x22, x23 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 23));
  /* 1b2dd0: b.eq #0x1b2ce8 */
  if (ARC_COND(c, 0)) goto L_1b2ce8;
  /* 1b2dd4: ldr x20, [sp, #0x10] */
  ARC_X_W(c, 20, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1b2dd8: cbnz x20, #0x1b2de8 */
  if ((ARC_X_R(c, 20)) != 0) goto L_1b2de8;
  /* 1b2ddc: b #0x1b2db8 */
  goto L_1b2db8;
L_1b2de0:;
  /* 1b2de0: ldr x20, [x20] */
  ARC_X_W(c, 20, arc_ld64(ARC_X_R(c, 20)));
  /* 1b2de4: cbz x20, #0x1b2db8 */
  if ((ARC_X_R(c, 20)) == 0) goto L_1b2db8;
L_1b2de8:;
  /* 1b2de8: add x1, x20, #0x19 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(25)));
  /* 1b2dec: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 1b2df0: bl #0x1d56f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1781236));
  fn2_1d56f8(c);
  /* 1b2df4: tbnz w0, #0, #0x1b2de0 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) != 0) goto L_1b2de0;
  /* 1b2df8: add x0, x20, #0x19 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(25)));
  /* 1b2dfc: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 1b2e00: bl #0x1d56f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1781252));
  fn2_1d56f8(c);
  /* 1b2e04: tbz w0, #0, #0x1b2dc8 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_1b2dc8;
  /* 1b2e08: add x20, x20, #8 */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* 1b2e0c: b #0x1b2de0 */
  goto L_1b2de0;
L_1b2e10:;
  /* 1b2e10: mov x19, xzr */
  ARC_X_W(c, 19, ARC_X_R(c, 31));
  /* 1b2e14: adrp x8, #0x25d000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 1b2e18: ldr x23, [x8, #0xa18] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 8) + INT64_C(2584))));
  /* 1b2e1c: cbz x23, #0x1b2ed4 */
  if ((ARC_X_R(c, 23)) == 0) goto L_1b2ed4;
L_1b2e20:;
  /* 1b2e20: mov x24, #0x7ffffffffffffff8 */
  ARC_X_W(c, 24, UINT64_C(9223372036854775800));
  /* 1b2e24: mov x25, #0x1fffffffffffffff */
  ARC_X_W(c, 25, UINT64_C(2305843009213693951));
  /* 1b2e28: b #0x1b2e40 */
  goto L_1b2e40;
L_1b2e2c:;
  /* 1b2e2c: ldr x8, [x23, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 23) + INT64_C(24))));
  /* 1b2e30: str x8, [x19], #8 */
  { const uint64_t _a = ARC_X_R(c, 19);
    ARC_X_W(c, 19, ARC_X_R(c, 19) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 8));
  }
L_1b2e34:;
  /* 1b2e34: stur x19, [x29, #-0x10] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-16)), ARC_X_R(c, 19));
  /* 1b2e38: ldr x23, [x23] */
  ARC_X_W(c, 23, arc_ld64(ARC_X_R(c, 23)));
  /* 1b2e3c: cbz x23, #0x1b2ed4 */
  if ((ARC_X_R(c, 23)) == 0) goto L_1b2ed4;
L_1b2e40:;
  /* 1b2e40: ldur x8, [x29, #-8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(-8))));
  /* 1b2e44: cmp x19, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* 1b2e48: b.lo #0x1b2e2c */
  if (ARC_COND(c, 3)) goto L_1b2e2c;
  /* 1b2e4c: ldur x20, [x29, #-0x18] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 29) + INT64_C(-24))));
  /* 1b2e50: sub x21, x19, x20 */
  ARC_X_W(c, 21, (ARC_X_R(c, 19) - ARC_X_R(c, 20)));
  /* 1b2e54: asr x19, x21, #3 */
  ARC_X_W(c, 19, ((uint64_t)((int64_t)(ARC_X_R(c, 21)) >> ((UINT64_C(3)) & 63))));
  /* 1b2e58: add x9, x19, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + UINT64_C(1)));
  /* 1b2e5c: lsr x10, x9, #0x3d */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(61)) & 63)));
  /* 1b2e60: cbnz x10, #0x1b2f5c */
  if ((ARC_X_R(c, 10)) != 0) goto L_1b2f5c;
  /* 1b2e64: sub x8, x8, x20 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) - ARC_X_R(c, 20)));
  /* 1b2e68: asr x10, x8, #2 */
  ARC_X_W(c, 10, ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(2)) & 63))));
  /* 1b2e6c: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* 1b2e70: csel x9, x10, x9, hi */
  ARC_X_W(c, 9, (ARC_COND(c, 8) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* 1b2e74: cmp x8, x24 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 24));
  /* 1b2e78: csel x26, x9, x25, lo */
  ARC_X_W(c, 26, (ARC_COND(c, 3) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 25)));
  /* 1b2e7c: cbz x26, #0x1b2e98 */
  if ((ARC_X_R(c, 26)) == 0) goto L_1b2e98;
  /* 1b2e80: lsr x8, x26, #0x3d */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 26)) >> ((UINT64_C(61)) & 63)));
  /* 1b2e84: cbnz x8, #0x1b2f64 */
  if ((ARC_X_R(c, 8)) != 0) goto L_1b2f64;
  /* 1b2e88: lsl x0, x26, #3 */
  ARC_X_W(c, 0, ((uint64_t)(ARC_X_R(c, 26)) << ((UINT64_C(3)) & 63)));
  /* 1b2e8c: bl #0x24b750 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1781392));
  fn2_24b750(c);
  /* 1b2e90: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 1b2e94: b #0x1b2e9c */
  goto L_1b2e9c;
L_1b2e98:;
  /* 1b2e98: mov x22, xzr */
  ARC_X_W(c, 22, ARC_X_R(c, 31));
L_1b2e9c:;
  /* 1b2e9c: add x19, x22, x19, lsl #3 */
  ARC_X_W(c, 19, (ARC_X_R(c, 22) + ((uint64_t)(ARC_X_R(c, 19)) << 3)));
  /* 1b2ea0: ldr x8, [x23, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 23) + INT64_C(24))));
  /* 1b2ea4: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 1b2ea8: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 1b2eac: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* 1b2eb0: add x26, x22, x26, lsl #3 */
  ARC_X_W(c, 26, (ARC_X_R(c, 22) + ((uint64_t)(ARC_X_R(c, 26)) << 3)));
  /* 1b2eb4: str x8, [x19], #8 */
  { const uint64_t _a = ARC_X_R(c, 19);
    ARC_X_W(c, 19, ARC_X_R(c, 19) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* 1b2eb8: bl #0x24b7a0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1781436));
  fn2_24b7a0(c);
  /* 1b2ebc: stp x22, x19, [x29, #-0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-24));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1b2ec0: stur x26, [x29, #-8] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-8)), ARC_X_R(c, 26));
  /* 1b2ec4: cbz x20, #0x1b2e34 */
  if ((ARC_X_R(c, 20)) == 0) goto L_1b2e34;
  /* 1b2ec8: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1b2ecc: bl #0x24b730 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1781456));
  fn2_24b730(c);
  /* 1b2ed0: b #0x1b2e34 */
  goto L_1b2e34;
L_1b2ed4:;
  /* 1b2ed4: nop  */
  /* nop: no architectural effect here */
  /* 1b2ed8: adr x0, #0x25da30 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2480688)));
  /* 1b2edc: bl #0x24b840 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1781472));
  fn2_24b840(c);
  /* 1b2ee0: ldp x19, x8, [x29, #-0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-24));
    ARC_X_W(c, 19, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* 1b2ee4: cmp x19, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* 1b2ee8: b.eq #0x1b2f20 */
  if (ARC_COND(c, 0)) goto L_1b2f20;
  /* 1b2eec: adrp x20, #0x258000 */
  ARC_X_W(c, 20, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1b2ef0: adrp x21, #0x258000 */
  ARC_X_W(c, 21, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1b2ef4: ldr x20, [x20, #0x9a0] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 20) + INT64_C(2464))));
  /* 1b2ef8: ldr x21, [x21, #0x670] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 21) + INT64_C(1648))));
L_1b2efc:;
  /* 1b2efc: ldr x8, [x19], #8 */
  { const uint64_t _a = ARC_X_R(c, 19);
    ARC_X_W(c, 19, ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_a));
  }
  /* 1b2f00: ldr x9, [x20] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 20)));
  /* 1b2f04: ldr x1, [x21] */
  ARC_X_W(c, 1, arc_ld64(ARC_X_R(c, 21)));
  /* 1b2f08: ldr x0, [x8, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 1b2f0c: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1781520));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 1b2f10: ldur x8, [x29, #-0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(-16))));
  /* 1b2f14: cmp x19, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* 1b2f18: b.ne #0x1b2efc */
  if (ARC_COND(c, 1)) goto L_1b2efc;
  /* 1b2f1c: ldur x19, [x29, #-0x18] */
  ARC_X_W(c, 19, arc_ld64((ARC_X_R(c, 29) + INT64_C(-24))));
L_1b2f20:;
  /* 1b2f20: cbz x19, #0x1b2f30 */
  if ((ARC_X_R(c, 19)) == 0) goto L_1b2f30;
  /* 1b2f24: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1b2f28: stur x19, [x29, #-0x10] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-16)), ARC_X_R(c, 19));
  /* 1b2f2c: bl #0x24b730 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1781552));
  fn2_24b730(c);
L_1b2f30:;
  /* 1b2f30: ldr x1, [sp, #0x10] */
  ARC_X_W(c, 1, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1b2f34: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1b2f38: bl #0x17b178 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1781564));
  fn2_17b178(c);
  /* 1b2f3c: ldp x20, x19, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1b2f40: ldp x22, x21, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1b2f44: ldp x24, x23, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 1b2f48: ldp x26, x25, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* 1b2f4c: ldp x28, x27, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* 1b2f50: ldp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1b2f54: add sp, sp, #0xa0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(160)));
  /* 1b2f58: ret  */
  return;
L_1b2f5c:;
  /* 1b2f5c: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 1b2f60: bl #0x1b53d8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1781604));
  fn2_1b53d8(c);
L_1b2f64:;
  /* 1b2f64: bl #0x179cc0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1781608));
  fn2_179cc0(c);
}

void fn2_1b4d9c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077645212));
  /* 1b4d9c: stp x29, x30, [sp, #-0x50]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-80));
    (c)->sp = (c)->sp + INT64_C(-80);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1b4da0: stp x26, x25, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* 1b4da4: stp x24, x23, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 1b4da8: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1b4dac: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1b4db0: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1b4db4: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1b4db8: mov x0, x1 */
  ARC_X_W(c, 0, ARC_X_R(c, 1));
  /* 1b4dbc: mov x22, x3 */
  ARC_X_W(c, 22, ARC_X_R(c, 3));
  /* 1b4dc0: mov x23, x1 */
  ARC_X_W(c, 23, ARC_X_R(c, 1));
  /* 1b4dc4: bl #0x1d4e80 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1789384));
  fn2_1d4e80(c);
  /* 1b4dc8: ldr x24, [x19, #8] */
  ARC_X_W(c, 24, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* 1b4dcc: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 1b4dd0: cbz x24, #0x1b4df8 */
  if ((ARC_X_R(c, 24)) == 0) goto L_1b4df8;
  /* 1b4dd4: fmov d0, x24 */
  arc_du_w(c, 0, (uint64_t)(ARC_X_R(c, 24)));
  /* 1b4dd8: cnt v0.8b, v0.8b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = arc_popcount8((c)->q[0].u8[0]);
    _t.u8[1] = arc_popcount8((c)->q[0].u8[1]);
    _t.u8[2] = arc_popcount8((c)->q[0].u8[2]);
    _t.u8[3] = arc_popcount8((c)->q[0].u8[3]);
    _t.u8[4] = arc_popcount8((c)->q[0].u8[4]);
    _t.u8[5] = arc_popcount8((c)->q[0].u8[5]);
    _t.u8[6] = arc_popcount8((c)->q[0].u8[6]);
    _t.u8[7] = arc_popcount8((c)->q[0].u8[7]);
    (c)->q[0] = _t; }
  /* 1b4ddc: uaddlv h0, v0.8b */
  { uint64_t _r = (uint64_t)((c)->q[0].u8[0]);
    _r = (uint64_t)(_r + (uint64_t)((c)->q[0].u8[1]));
    _r = (uint64_t)(_r + (uint64_t)((c)->q[0].u8[2]));
    _r = (uint64_t)(_r + (uint64_t)((c)->q[0].u8[3]));
    _r = (uint64_t)(_r + (uint64_t)((c)->q[0].u8[4]));
    _r = (uint64_t)(_r + (uint64_t)((c)->q[0].u8[5]));
    _r = (uint64_t)(_r + (uint64_t)((c)->q[0].u8[6]));
    _r = (uint64_t)(_r + (uint64_t)((c)->q[0].u8[7]));
    arc_su_w(c, 0, ((uint64_t)_r & UINT64_C(65535))); }
  /* 1b4de0: fmov w8, s0 */
  ARC_W_W(c, 8, ARC_SU_R(c, 0));
  /* 1b4de4: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 1b4de8: b.hi #0x1b4dfc */
  if (ARC_COND(c, 8)) goto L_1b4dfc;
  /* 1b4dec: sub x9, x24, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 24) - UINT64_C(1)));
  /* 1b4df0: and x25, x9, x21 */
  ARC_X_W(c, 25, (ARC_X_R(c, 9) & ARC_X_R(c, 21)));
  /* 1b4df4: b #0x1b4e10 */
  goto L_1b4e10;
L_1b4df8:;
  /* 1b4df8: b #0x1b4eb0 */
  goto L_1b4eb0;
L_1b4dfc:;
  /* 1b4dfc: cmp x21, x24 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 24));
  /* 1b4e00: mov x25, x21 */
  ARC_X_W(c, 25, ARC_X_R(c, 21));
  /* 1b4e04: b.lo #0x1b4e10 */
  if (ARC_COND(c, 3)) goto L_1b4e10;
  /* 1b4e08: udiv x9, x21, x24 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 24)) == 0 ? 0 : ((uint64_t)(ARC_X_R(c, 21)) / (uint64_t)(ARC_X_R(c, 24)))));
  /* 1b4e0c: msub x25, x9, x24, x21 */
  ARC_X_W(c, 25, ((uint64_t)(ARC_X_R(c, 21)) - ((uint64_t)(ARC_X_R(c, 9)) * (uint64_t)(ARC_X_R(c, 24)))));
L_1b4e10:;
  /* 1b4e10: ldr x9, [x19] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 19)));
  /* 1b4e14: ldr x9, [x9, x25, lsl #3] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + ((uint64_t)(ARC_X_R(c, 25)) << 3))));
  /* 1b4e18: cbz x9, #0x1b4eb0 */
  if ((ARC_X_R(c, 9)) == 0) goto L_1b4eb0;
  /* 1b4e1c: ldr x20, [x9] */
  ARC_X_W(c, 20, arc_ld64(ARC_X_R(c, 9)));
  /* 1b4e20: cbz x20, #0x1b4eb0 */
  if ((ARC_X_R(c, 20)) == 0) goto L_1b4eb0;
  /* 1b4e24: cmp x8, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(2));
  /* 1b4e28: b.hs #0x1b4e44 */
  if (ARC_COND(c, 2)) goto L_1b4e44;
  /* 1b4e2c: sub x26, x24, #1 */
  ARC_X_W(c, 26, (ARC_X_R(c, 24) - UINT64_C(1)));
  /* 1b4e30: b #0x1b4e8c */
  goto L_1b4e8c;
L_1b4e34:;
  /* 1b4e34: cmp x8, x25 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 25));
  /* 1b4e38: b.ne #0x1b4eb0 */
  if (ARC_COND(c, 1)) goto L_1b4eb0;
L_1b4e3c:;
  /* 1b4e3c: ldr x20, [x20] */
  ARC_X_W(c, 20, arc_ld64(ARC_X_R(c, 20)));
  /* 1b4e40: cbz x20, #0x1b4eb0 */
  if ((ARC_X_R(c, 20)) == 0) goto L_1b4eb0;
L_1b4e44:;
  /* 1b4e44: ldr x8, [x20, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(8))));
  /* 1b4e48: cmp x8, x21 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 21));
  /* 1b4e4c: b.ne #0x1b4e64 */
  if (ARC_COND(c, 1)) goto L_1b4e64;
  /* 1b4e50: add x0, x20, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(16)));
  /* 1b4e54: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* 1b4e58: bl #0x1d5690 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1789532));
  fn2_1d5690(c);
  /* 1b4e5c: tbz w0, #0, #0x1b4e3c */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_1b4e3c;
  /* 1b4e60: b #0x1b4ea8 */
  goto L_1b4ea8;
L_1b4e64:;
  /* 1b4e64: cmp x8, x24 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 24));
  /* 1b4e68: b.lo #0x1b4e34 */
  if (ARC_COND(c, 3)) goto L_1b4e34;
  /* 1b4e6c: udiv x9, x8, x24 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 24)) == 0 ? 0 : ((uint64_t)(ARC_X_R(c, 8)) / (uint64_t)(ARC_X_R(c, 24)))));
  /* 1b4e70: msub x8, x9, x24, x8 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) - ((uint64_t)(ARC_X_R(c, 9)) * (uint64_t)(ARC_X_R(c, 24)))));
  /* 1b4e74: b #0x1b4e34 */
  goto L_1b4e34;
L_1b4e78:;
  /* 1b4e78: and x8, x8, x26 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) & ARC_X_R(c, 26)));
  /* 1b4e7c: cmp x8, x25 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 25));
  /* 1b4e80: b.ne #0x1b4eb0 */
  if (ARC_COND(c, 1)) goto L_1b4eb0;
L_1b4e84:;
  /* 1b4e84: ldr x20, [x20] */
  ARC_X_W(c, 20, arc_ld64(ARC_X_R(c, 20)));
  /* 1b4e88: cbz x20, #0x1b4eb0 */
  if ((ARC_X_R(c, 20)) == 0) goto L_1b4eb0;
L_1b4e8c:;
  /* 1b4e8c: ldr x8, [x20, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(8))));
  /* 1b4e90: cmp x8, x21 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 21));
  /* 1b4e94: b.ne #0x1b4e78 */
  if (ARC_COND(c, 1)) goto L_1b4e78;
  /* 1b4e98: add x0, x20, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(16)));
  /* 1b4e9c: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* 1b4ea0: bl #0x1d5690 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1789604));
  fn2_1d5690(c);
  /* 1b4ea4: tbz w0, #0, #0x1b4e84 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_1b4e84;
L_1b4ea8:;
  /* 1b4ea8: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 1b4eac: b #0x1b50b0 */
  goto L_1b50b0;
L_1b4eb0:;
  /* 1b4eb0: mov w0, #0x28 */
  ARC_W_W(c, 0, UINT64_C(40));
  /* 1b4eb4: bl #0x24b750 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1789624));
  fn2_24b750(c);
  /* 1b4eb8: ldr x1, [x22] */
  ARC_X_W(c, 1, arc_ld64(ARC_X_R(c, 22)));
  /* 1b4ebc: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 1b4ec0: stp xzr, x21, [x0], #0x10 */
  { const uint64_t _pa = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1b4ec4: bl #0x1d2c40 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1789640));
  fn2_1d2c40(c);
  /* 1b4ec8: ldr x8, [x19, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(24))));
  /* 1b4ecc: ldr s1, [x19, #0x20] */
  arc_su_w(c, 1, arc_ld32((ARC_X_R(c, 19) + INT64_C(32))));
  /* 1b4ed0: stp xzr, xzr, [x20, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(24));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 1b4ed4: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* 1b4ed8: ucvtf s0, x8 */
  arc_s_w(c, 0, (float)(((uint64_t)(ARC_X_R(c, 8)))));
  /* 1b4edc: cbz x24, #0x1b4f08 */
  if ((ARC_X_R(c, 24)) == 0) goto L_1b4f08;
  /* 1b4ee0: ucvtf s2, x24 */
  arc_s_w(c, 2, (float)(((uint64_t)(ARC_X_R(c, 24)))));
  /* 1b4ee4: fmul s2, s1, s2 */
  arc_s_w(c, 2, (float)(arc_fmul32(ARC_S_R(c, 1), ARC_S_R(c, 2))));
  /* 1b4ee8: fcmp s2, s0 */
  arc_fcmp(c, (double)(ARC_S_R(c, 2)), (double)(ARC_S_R(c, 0)));
  /* 1b4eec: b.mi #0x1b4f08 */
  if (ARC_COND(c, 4)) goto L_1b4f08;
  /* 1b4ef0: ldr x9, [x19] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 19)));
  /* 1b4ef4: ldr x8, [x9, x25, lsl #3] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + ((uint64_t)(ARC_X_R(c, 25)) << 3))));
  /* 1b4ef8: cbz x8, #0x1b501c */
  if ((ARC_X_R(c, 8)) == 0) goto L_1b501c;
L_1b4efc:;
  /* 1b4efc: ldr x9, [x8] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 8)));
  /* 1b4f00: str x9, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 9));
  /* 1b4f04: b #0x1b509c */
  goto L_1b509c;
L_1b4f08:;
  /* 1b4f08: lsl x8, x24, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 24)) << ((UINT64_C(1)) & 63)));
  /* 1b4f0c: cmp x24, #3 */
  (void)arc_sub64(c, ARC_X_R(c, 24), UINT64_C(3));
  /* 1b4f10: b.lo #0x1b4f24 */
  if (ARC_COND(c, 3)) goto L_1b4f24;
  /* 1b4f14: sub x9, x24, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 24) - UINT64_C(1)));
  /* 1b4f18: tst x24, x9 */
  arc_flags_logical64(c, (uint64_t)(ARC_X_R(c, 24) & ARC_X_R(c, 9)));
  /* 1b4f1c: cset w9, ne */
  ARC_W_W(c, 9, (ARC_COND(c, 1) ? 1 : 0));
  /* 1b4f20: b #0x1b4f28 */
  goto L_1b4f28;
L_1b4f24:;
  /* 1b4f24: mov w9, #1 */
  ARC_W_W(c, 9, UINT64_C(1));
L_1b4f28:;
  /* 1b4f28: fdiv s0, s0, s1 */
  arc_s_w(c, 0, (float)(arc_fdiv32(ARC_S_R(c, 0), ARC_S_R(c, 1))));
  /* 1b4f2c: orr x8, x9, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) | ARC_X_R(c, 8)));
  /* 1b4f30: fcvtpu x10, s0 */
  ARC_X_W(c, 10, arc_f2u64((double)(ceil((double)(ARC_S_R(c, 0))))));
  /* 1b4f34: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* 1b4f38: csel x1, x8, x10, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 10)));
  /* 1b4f3c: subs x8, x1, #1 */
  ARC_X_W(c, 8, arc_sub64(c, ARC_X_R(c, 1), UINT64_C(1)));
  /* 1b4f40: b.ne #0x1b4f4c */
  if (ARC_COND(c, 1)) goto L_1b4f4c;
  /* 1b4f44: mov w1, #2 */
  ARC_W_W(c, 1, UINT64_C(2));
  /* 1b4f48: b #0x1b4f60 */
  goto L_1b4f60;
L_1b4f4c:;
  /* 1b4f4c: tst x1, x8 */
  arc_flags_logical64(c, (uint64_t)(ARC_X_R(c, 1) & ARC_X_R(c, 8)));
  /* 1b4f50: b.eq #0x1b4f60 */
  if (ARC_COND(c, 0)) goto L_1b4f60;
  /* 1b4f54: mov x0, x1 */
  ARC_X_W(c, 0, ARC_X_R(c, 1));
  /* 1b4f58: bl #0x24b7c0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1789788));
  fn2_24b7c0(c);
  /* 1b4f5c: mov x1, x0 */
  ARC_X_W(c, 1, ARC_X_R(c, 0));
L_1b4f60:;
  /* 1b4f60: ldr x22, [x19, #8] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* 1b4f64: cmp x1, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 1), ARC_X_R(c, 22));
  /* 1b4f68: b.ls #0x1b4f78 */
  if (ARC_COND(c, 9)) goto L_1b4f78;
L_1b4f6c:;
  /* 1b4f6c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1b4f70: bl #0x1b50cc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1789812));
  fn2_1b50cc(c);
  /* 1b4f74: b #0x1b4ffc */
  goto L_1b4ffc;
L_1b4f78:;
  /* 1b4f78: b.hs #0x1b4ffc */
  if (ARC_COND(c, 2)) goto L_1b4ffc;
  /* 1b4f7c: ldr x8, [x19, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(24))));
  /* 1b4f80: ldr s1, [x19, #0x20] */
  arc_su_w(c, 1, arc_ld32((ARC_X_R(c, 19) + INT64_C(32))));
  /* 1b4f84: cmp x22, #3 */
  (void)arc_sub64(c, ARC_X_R(c, 22), UINT64_C(3));
  /* 1b4f88: ucvtf s0, x8 */
  arc_s_w(c, 0, (float)(((uint64_t)(ARC_X_R(c, 8)))));
  /* 1b4f8c: fdiv s0, s0, s1 */
  arc_s_w(c, 0, (float)(arc_fdiv32(ARC_S_R(c, 0), ARC_S_R(c, 1))));
  /* 1b4f90: fcvtpu x0, s0 */
  ARC_X_W(c, 0, arc_f2u64((double)(ceil((double)(ARC_S_R(c, 0))))));
  /* 1b4f94: b.lo #0x1b4fe0 */
  if (ARC_COND(c, 3)) goto L_1b4fe0;
  /* 1b4f98: fmov d0, x22 */
  arc_du_w(c, 0, (uint64_t)(ARC_X_R(c, 22)));
  /* 1b4f9c: cnt v0.8b, v0.8b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = arc_popcount8((c)->q[0].u8[0]);
    _t.u8[1] = arc_popcount8((c)->q[0].u8[1]);
    _t.u8[2] = arc_popcount8((c)->q[0].u8[2]);
    _t.u8[3] = arc_popcount8((c)->q[0].u8[3]);
    _t.u8[4] = arc_popcount8((c)->q[0].u8[4]);
    _t.u8[5] = arc_popcount8((c)->q[0].u8[5]);
    _t.u8[6] = arc_popcount8((c)->q[0].u8[6]);
    _t.u8[7] = arc_popcount8((c)->q[0].u8[7]);
    (c)->q[0] = _t; }
  /* 1b4fa0: uaddlv h0, v0.8b */
  { uint64_t _r = (uint64_t)((c)->q[0].u8[0]);
    _r = (uint64_t)(_r + (uint64_t)((c)->q[0].u8[1]));
    _r = (uint64_t)(_r + (uint64_t)((c)->q[0].u8[2]));
    _r = (uint64_t)(_r + (uint64_t)((c)->q[0].u8[3]));
    _r = (uint64_t)(_r + (uint64_t)((c)->q[0].u8[4]));
    _r = (uint64_t)(_r + (uint64_t)((c)->q[0].u8[5]));
    _r = (uint64_t)(_r + (uint64_t)((c)->q[0].u8[6]));
    _r = (uint64_t)(_r + (uint64_t)((c)->q[0].u8[7]));
    arc_su_w(c, 0, ((uint64_t)_r & UINT64_C(65535))); }
  /* 1b4fa4: fmov w8, s0 */
  ARC_W_W(c, 8, ARC_SU_R(c, 0));
  /* 1b4fa8: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 1b4fac: b.hi #0x1b4fe0 */
  if (ARC_COND(c, 8)) goto L_1b4fe0;
  /* 1b4fb0: sub x8, x0, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) - UINT64_C(1)));
  /* 1b4fb4: mov w9, #1 */
  ARC_W_W(c, 9, UINT64_C(1));
  /* 1b4fb8: cmp x0, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 0), UINT64_C(2));
  /* 1b4fbc: clz x8, x8 */
  ARC_X_W(c, 8, arc_clz64(ARC_X_R(c, 8)));
  /* 1b4fc0: neg x8, x8 */
  ARC_X_W(c, 8, ((uint64_t)0 - (uint64_t)(ARC_X_R(c, 8))));
  /* 1b4fc4: lsl x8, x9, x8 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 9)) << ((ARC_X_R(c, 8)) & 63)));
  /* 1b4fc8: csel x0, x0, x8, lo */
  ARC_X_W(c, 0, (ARC_COND(c, 3) ? (ARC_X_R(c, 0)) : ARC_X_R(c, 8)));
  /* 1b4fcc: cmp x1, x0 */
  (void)arc_sub64(c, ARC_X_R(c, 1), ARC_X_R(c, 0));
  /* 1b4fd0: csel x1, x1, x0, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 1)) : ARC_X_R(c, 0)));
  /* 1b4fd4: cmp x1, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 1), ARC_X_R(c, 22));
  /* 1b4fd8: b.lo #0x1b4f6c */
  if (ARC_COND(c, 3)) goto L_1b4f6c;
  /* 1b4fdc: b #0x1b4ffc */
  goto L_1b4ffc;
L_1b4fe0:;
  /* 1b4fe0: mov x23, x1 */
  ARC_X_W(c, 23, ARC_X_R(c, 1));
  /* 1b4fe4: bl #0x24b7c0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1789928));
  fn2_24b7c0(c);
  /* 1b4fe8: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* 1b4fec: cmp x23, x0 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 0));
  /* 1b4ff0: csel x1, x23, x0, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 23)) : ARC_X_R(c, 0)));
  /* 1b4ff4: cmp x1, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 1), ARC_X_R(c, 22));
  /* 1b4ff8: b.lo #0x1b4f6c */
  if (ARC_COND(c, 3)) goto L_1b4f6c;
L_1b4ffc:;
  /* 1b4ffc: ldr x24, [x19, #8] */
  ARC_X_W(c, 24, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* 1b5000: sub x8, x24, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 24) - UINT64_C(1)));
  /* 1b5004: tst x24, x8 */
  arc_flags_logical64(c, (uint64_t)(ARC_X_R(c, 24) & ARC_X_R(c, 8)));
  /* 1b5008: b.ne #0x1b5050 */
  if (ARC_COND(c, 1)) goto L_1b5050;
  /* 1b500c: and x25, x8, x21 */
  ARC_X_W(c, 25, (ARC_X_R(c, 8) & ARC_X_R(c, 21)));
  /* 1b5010: ldr x9, [x19] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 19)));
  /* 1b5014: ldr x8, [x9, x25, lsl #3] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + ((uint64_t)(ARC_X_R(c, 25)) << 3))));
  /* 1b5018: cbnz x8, #0x1b4efc */
  if ((ARC_X_R(c, 8)) != 0) goto L_1b4efc;
L_1b501c:;
  /* 1b501c: mov x8, x19 */
  ARC_X_W(c, 8, ARC_X_R(c, 19));
  /* 1b5020: ldr x10, [x8, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 8) + INT64_C(16));
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(16));
    ARC_X_W(c, 10, arc_ld64(_a));
  }
  /* 1b5024: str x20, [x8] */
  arc_st64(ARC_X_R(c, 8), ARC_X_R(c, 20));
  /* 1b5028: str x10, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 10));
  /* 1b502c: str x8, [x9, x25, lsl #3] */
  arc_st64((ARC_X_R(c, 9) + ((uint64_t)(ARC_X_R(c, 25)) << 3)), ARC_X_R(c, 8));
  /* 1b5030: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 1b5034: cbz x8, #0x1b50a0 */
  if ((ARC_X_R(c, 8)) == 0) goto L_1b50a0;
  /* 1b5038: sub x9, x24, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 24) - UINT64_C(1)));
  /* 1b503c: ldr x8, [x8, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(8))));
  /* 1b5040: tst x24, x9 */
  arc_flags_logical64(c, (uint64_t)(ARC_X_R(c, 24) & ARC_X_R(c, 9)));
  /* 1b5044: b.ne #0x1b5084 */
  if (ARC_COND(c, 1)) goto L_1b5084;
  /* 1b5048: and x8, x8, x9 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) & ARC_X_R(c, 9)));
  /* 1b504c: b #0x1b5094 */
  goto L_1b5094;
L_1b5050:;
  /* 1b5050: cmp x21, x24 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 24));
  /* 1b5054: b.hs #0x1b506c */
  if (ARC_COND(c, 2)) goto L_1b506c;
  /* 1b5058: mov x25, x21 */
  ARC_X_W(c, 25, ARC_X_R(c, 21));
  /* 1b505c: ldr x9, [x19] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 19)));
  /* 1b5060: ldr x8, [x9, x21, lsl #3] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + ((uint64_t)(ARC_X_R(c, 21)) << 3))));
  /* 1b5064: cbnz x8, #0x1b4efc */
  if ((ARC_X_R(c, 8)) != 0) goto L_1b4efc;
  /* 1b5068: b #0x1b501c */
  goto L_1b501c;
L_1b506c:;
  /* 1b506c: udiv x8, x21, x24 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 24)) == 0 ? 0 : ((uint64_t)(ARC_X_R(c, 21)) / (uint64_t)(ARC_X_R(c, 24)))));
  /* 1b5070: msub x25, x8, x24, x21 */
  ARC_X_W(c, 25, ((uint64_t)(ARC_X_R(c, 21)) - ((uint64_t)(ARC_X_R(c, 8)) * (uint64_t)(ARC_X_R(c, 24)))));
  /* 1b5074: ldr x9, [x19] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 19)));
  /* 1b5078: ldr x8, [x9, x25, lsl #3] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + ((uint64_t)(ARC_X_R(c, 25)) << 3))));
  /* 1b507c: cbnz x8, #0x1b4efc */
  if ((ARC_X_R(c, 8)) != 0) goto L_1b4efc;
  /* 1b5080: b #0x1b501c */
  goto L_1b501c;
L_1b5084:;
  /* 1b5084: cmp x8, x24 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 24));
  /* 1b5088: b.lo #0x1b5094 */
  if (ARC_COND(c, 3)) goto L_1b5094;
  /* 1b508c: udiv x9, x8, x24 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 24)) == 0 ? 0 : ((uint64_t)(ARC_X_R(c, 8)) / (uint64_t)(ARC_X_R(c, 24)))));
  /* 1b5090: msub x8, x9, x24, x8 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) - ((uint64_t)(ARC_X_R(c, 9)) * (uint64_t)(ARC_X_R(c, 24)))));
L_1b5094:;
  /* 1b5094: ldr x9, [x19] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 19)));
  /* 1b5098: add x8, x9, x8, lsl #3 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) + ((uint64_t)(ARC_X_R(c, 8)) << 3)));
L_1b509c:;
  /* 1b509c: str x20, [x8] */
  arc_st64(ARC_X_R(c, 8), ARC_X_R(c, 20));
L_1b50a0:;
  /* 1b50a0: ldr x8, [x19, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(24))));
  /* 1b50a4: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* 1b50a8: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* 1b50ac: str x8, [x19, #0x18] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(24)), ARC_X_R(c, 8));
L_1b50b0:;
  /* 1b50b0: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1b50b4: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1b50b8: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1b50bc: ldp x24, x23, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 1b50c0: ldp x26, x25, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* 1b50c4: ldp x29, x30, [sp], #0x50 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(80);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1b50c8: ret  */
  return;
}

void fn2_1b6040(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077649984));
  /* 1b6040: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1b6044: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 1b6048: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1b604c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1b6050: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1b6054: ldr x0, [x0, #0x40] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(64))));
  /* 1b6058: adrp x8, #0x256000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2449408)));
  /* 1b605c: add x8, x8, #0x740 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1856)));
  /* 1b6060: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* 1b6064: cbz x0, #0x1b6070 */
  if ((ARC_X_R(c, 0)) == 0) goto L_1b6070;
  /* 1b6068: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* 1b606c: bl #0x1b5ce8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1794160));
  fn2_1b5ce8(c);
L_1b6070:;
  /* 1b6070: ldr x21, [x19, #0x48] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 19) + INT64_C(72))));
  /* 1b6074: cbz x21, #0x1b60a8 */
  if ((ARC_X_R(c, 21)) == 0) goto L_1b60a8;
  /* 1b6078: ldr x20, [x19, #0x50] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 19) + INT64_C(80))));
  /* 1b607c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 1b6080: cmp x20, x21 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 21));
  /* 1b6084: b.eq #0x1b60a0 */
  if (ARC_COND(c, 0)) goto L_1b60a0;
L_1b6088:;
  /* 1b6088: sub x20, x20, #0x18 */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) - UINT64_C(24)));
  /* 1b608c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1b6090: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1794196));
  fn2_1bc620(c);
  /* 1b6094: cmp x20, x21 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 21));
  /* 1b6098: b.ne #0x1b6088 */
  if (ARC_COND(c, 1)) goto L_1b6088;
  /* 1b609c: ldr x0, [x19, #0x48] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(72))));
L_1b60a0:;
  /* 1b60a0: str x21, [x19, #0x50] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(80)), ARC_X_R(c, 21));
  /* 1b60a4: bl #0x24b730 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1794216));
  fn2_24b730(c);
L_1b60a8:;
  /* 1b60a8: ldr x21, [x19, #0x28] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 19) + INT64_C(40))));
  /* 1b60ac: cbz x21, #0x1b60e0 */
  if ((ARC_X_R(c, 21)) == 0) goto L_1b60e0;
  /* 1b60b0: ldr x20, [x19, #0x30] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 19) + INT64_C(48))));
  /* 1b60b4: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 1b60b8: cmp x20, x21 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 21));
  /* 1b60bc: b.eq #0x1b60d8 */
  if (ARC_COND(c, 0)) goto L_1b60d8;
L_1b60c0:;
  /* 1b60c0: sub x20, x20, #8 */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) - UINT64_C(8)));
  /* 1b60c4: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1b60c8: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1794252));
  fn2_1d2d24(c);
  /* 1b60cc: cmp x20, x21 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 21));
  /* 1b60d0: b.ne #0x1b60c0 */
  if (ARC_COND(c, 1)) goto L_1b60c0;
  /* 1b60d4: ldr x0, [x19, #0x28] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(40))));
L_1b60d8:;
  /* 1b60d8: str x21, [x19, #0x30] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(48)), ARC_X_R(c, 21));
  /* 1b60dc: bl #0x24b730 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1794272));
  fn2_24b730(c);
L_1b60e0:;
  /* 1b60e0: add x0, x19, #0x14 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(20)));
  /* 1b60e4: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1794280));
  fn2_1d2d24(c);
  /* 1b60e8: add x0, x19, #0xc */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(12)));
  /* 1b60ec: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1b60f0: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1b60f4: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1b60f8: b #0x1d2d24 */
  fn2_1d2d24(c); return;
}

void fn2_1b79f8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077656568));
  /* 1b79f8: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1b79fc: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1b7a00: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 1b7a04: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 1b7a08: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1800716));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1b7a0c: cbz x0, #0x1b7a38 */
  if ((ARC_X_R(c, 0)) == 0) goto L_1b7a38;
  /* 1b7a10: nop  */
  /* nop: no architectural effect here */
  /* 1b7a14: adr x8, #0x25d810 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2480144)));
  /* 1b7a18: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 1b7a1c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1800736));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1b7a20: cbz x0, #0x1b7a30 */
  if ((ARC_X_R(c, 0)) == 0) goto L_1b7a30;
  /* 1b7a24: bl #0x1b62dc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1800744));
  fn2_1b62dc(c);
  /* 1b7a28: cmp x0, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 0), UINT64_C(0));
  /* 1b7a2c: cset w0, ne */
  ARC_W_W(c, 0, (ARC_COND(c, 1) ? 1 : 0));
L_1b7a30:;
  /* 1b7a30: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1b7a34: ret  */
  return;
L_1b7a38:;
  /* 1b7a38: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 1b7a3c: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1b7a40: ret  */
  return;
}

void fn2_1b85c4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077659588));
  /* 1b85c4: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1b85c8: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 1b85cc: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1b85d0: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1b85d4: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1b85d8: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1b85dc: ldr x8, [x8, #0x810] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2064))));
  /* 1b85e0: str xzr, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 31));
  /* 1b85e4: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 1b85e8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1803756));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1b85ec: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1b85f0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1b85f4: bl #0x1d0708 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1803768));
  fn2_1d0708(c);
  /* 1b85f8: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1b85fc: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1803776));
  fn2_1ccd9c(c);
  /* 1b8600: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1b8604: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1b8608: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1b860c: ret  */
  return;
}

void fn2_1b8e74(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077661812));
  /* 1b8e74: sub sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(48)));
  /* 1b8e78: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1b8e7c: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1b8e80: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1b8e84: mov x20, x8 */
  ARC_X_W(c, 20, ARC_X_R(c, 8));
  /* 1b8e88: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1b8e8c: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 1b8e90: ldr x8, [x8, #0x820] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2080))));
  /* 1b8e94: mov x1, x0 */
  ARC_X_W(c, 1, ARC_X_R(c, 0));
  /* 1b8e98: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1b8e9c: str xzr, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 31));
  /* 1b8ea0: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 1b8ea4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1805992));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1b8ea8: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1b8eac: mov x8, x20 */
  ARC_X_W(c, 8, ARC_X_R(c, 20));
  /* 1b8eb0: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 1b8eb4: bl #0x1cf868 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1806008));
  fn2_1cf868(c);
  /* 1b8eb8: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1b8ebc: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1806016));
  fn2_1ccd9c(c);
  /* 1b8ec0: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1b8ec4: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1b8ec8: add sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(48)));
  /* 1b8ecc: ret  */
  return;
}

void fn2_1b9b38(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077665080));
  /* 1b9b38: ldr x0, [x0] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 0)));
  /* 1b9b3c: ret  */
  return;
}

void fn2_1babc0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077669312));
  /* 1babc0: b #0x1baabc */
  fn2_1baabc(c); return;
}

void fn2_1bbc68(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077673576));
  /* 1bbc68: nop  */
  /* nop: no architectural effect here */
  /* 1bbc6c: adr x8, #0x25d6f8 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2479864)));
  /* 1bbc70: ldr x2, [x8] */
  ARC_X_W(c, 2, arc_ld64(ARC_X_R(c, 8)));
  /* 1bbc74: br x2 */
  arc_dispatch(c, ARC_X_R(c, 2)); return;
}

void fn2_1bbea8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077674152));
  /* 1bbea8: nop  */
  /* nop: no architectural effect here */
  /* 1bbeac: adr x8, #0x25d778 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2479992)));
  /* 1bbeb0: ldr x2, [x8] */
  ARC_X_W(c, 2, arc_ld64(ARC_X_R(c, 8)));
  /* 1bbeb4: br x2 */
  arc_dispatch(c, ARC_X_R(c, 2)); return;
}

void fn2_1bc398(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077675416));
  /* 1bc398: adrp x8, #0x25d000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 1bc39c: stp xzr, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 1bc3a0: str xzr, [x0, #0x10] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(16)), ARC_X_R(c, 31));
  /* 1bc3a4: ldr x2, [x8, #0xac0] */
  ARC_X_W(c, 2, arc_ld64((ARC_X_R(c, 8) + INT64_C(2752))));
  /* 1bc3a8: br x2 */
  arc_dispatch(c, ARC_X_R(c, 2)); return;
}

void fn2_1bc6c8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077676232));
  /* 1bc6c8: sub sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(32)));
  /* 1bc6cc: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1bc6d0: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1bc6d4: adrp x8, #0x25d000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 1bc6d8: mov x1, x0 */
  ARC_X_W(c, 1, ARC_X_R(c, 0));
  /* 1bc6dc: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1bc6e0: ldr x8, [x8, #0xba8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2984))));
  /* 1bc6e4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1820392));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1bc6e8: ldrh w0, [sp, #8] */
  ARC_W_W(c, 0, arc_ld16(((c)->sp + INT64_C(8))));
  /* 1bc6ec: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1bc6f0: add sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(32)));
  /* 1bc6f4: ret  */
  return;
}

void fn2_1bccac(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077677740));
  /* 1bccac: mov x1, x0 */
  ARC_X_W(c, 1, ARC_X_R(c, 0));
  /* 1bccb0: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1bccb4: b #0x1d857c */
  fn2_1d857c(c); return;
}

void fn2_1bd7e8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077680616));
  /* 1bd7e8: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1bd7ec: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 1bd7f0: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1bd7f4: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1bd7f8: mov x19, x2 */
  ARC_X_W(c, 19, ARC_X_R(c, 2));
  /* 1bd7fc: add x2, x29, #0x1c */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) + UINT64_C(28)));
  /* 1bd800: ldr x8, [x8, #0x718] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(1816))));
  /* 1bd804: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 1bd808: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1824780));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1bd80c: ldrb w8, [x29, #0x1c] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(28))));
  /* 1bd810: cmp w8, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(0));
  /* 1bd814: cset w8, ne */
  ARC_W_W(c, 8, (ARC_COND(c, 1) ? 1 : 0));
  /* 1bd818: tst w0, #0xff */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 0) & UINT64_C(255)));
  /* 1bd81c: cset w0, ne */
  ARC_W_W(c, 0, (ARC_COND(c, 1) ? 1 : 0));
  /* 1bd820: strb w8, [x19] */
  arc_st8(ARC_X_R(c, 19), ARC_W_R(c, 8));
  /* 1bd824: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1bd828: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1bd82c: ret  */
  return;
}

void fn2_1be630(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077684272));
  /* 1be630: fsub s7, s2, s1 */
  arc_s_w(c, 7, (float)(arc_fsub32(ARC_S_R(c, 2), ARC_S_R(c, 1))));
  /* 1be634: fmov v16.2d, #0.50000000 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.f64[0] = 0.5;
    _t.f64[1] = 0.5;
    (c)->q[16] = _t; }
  /* 1be638: cmp w1, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 1), UINT64_C(1));
  /* 1be63c: fmov d17, #-1.00000000 */
  arc_d_w(c, 17, (double)(-1.0));
  /* 1be640: mov v1.s[1], v7.s[0] */
  (c)->q[1].u32[1] = ((c)->q[7].u32[0]);
  /* 1be644: fcvtl v7.2d, v1.2s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.f64[0] = (double)(c)->q[1].f32[0];
    _t.f64[1] = (double)(c)->q[1].f32[1];
    (c)->q[7] = _t; }
  /* 1be648: fcvt d1, s3 */
  arc_d_w(c, 1, (double)(ARC_S_R(c, 3)));
  /* 1be64c: fmul v3.2d, v7.2d, v16.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.f64[0] = arc_fmul64((c)->q[7].f64[0], (c)->q[16].f64[0]);
    _t.f64[1] = arc_fmul64((c)->q[7].f64[1], (c)->q[16].f64[1]);
    (c)->q[3] = _t; }
  /* 1be650: dup v7.2d, v1.d[0] */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = ((c)->q[1].u64[0]);
    _t.u64[1] = ((c)->q[1].u64[0]);
    (c)->q[7] = _t; }
  /* 1be654: fcvt d16, s4 */
  arc_d_w(c, 16, (double)(ARC_S_R(c, 4)));
  /* 1be658: fdiv v3.2d, v3.2d, v7.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.f64[0] = arc_fdiv64((c)->q[3].f64[0], (c)->q[7].f64[0]);
    _t.f64[1] = arc_fdiv64((c)->q[3].f64[1], (c)->q[7].f64[1]);
    (c)->q[3] = _t; }
  /* 1be65c: fadd d16, d16, d17 */
  arc_d_w(c, 16, (double)(arc_fadd64(ARC_D_R(c, 16), ARC_D_R(c, 17))));
  /* 1be660: fcvtn v3.2s, v3.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.f32[0] = (float)(c)->q[3].f64[0];
    _t.f32[1] = (float)(c)->q[3].f64[1];
    (c)->q[3] = _t; }
  /* 1be664: faddp s7, v3.2s */
  arc_s_w(c, 7, (float)(arc_fadd32((c)->q[3].f32[0], (c)->q[3].f32[1])));
  /* 1be668: mov s17, v3.s[1] */
  arc_su_w(c, 17, (c)->q[3].u32[1]);
  /* 1be66c: fcvt d7, s7 */
  arc_d_w(c, 7, (double)(ARC_S_R(c, 7)));
  /* 1be670: fmul d7, d16, d7 */
  arc_d_w(c, 7, (double)(arc_fmul64(ARC_D_R(c, 16), ARC_D_R(c, 7))));
  /* 1be674: fmov d16, #0.50000000 */
  arc_d_w(c, 16, (double)(0.5));
  /* 1be678: fmul d7, d7, d16 */
  arc_d_w(c, 7, (double)(arc_fmul64(ARC_D_R(c, 7), ARC_D_R(c, 16))));
  /* 1be67c: fcvt s7, d7 */
  arc_s_w(c, 7, (float)(ARC_D_R(c, 7)));
  /* 1be680: fadd s16, s3, s7 */
  arc_s_w(c, 16, (float)(arc_fadd32(ARC_S_R(c, 3), ARC_S_R(c, 7))));
  /* 1be684: fadd s3, s17, s7 */
  arc_s_w(c, 3, (float)(arc_fadd32(ARC_S_R(c, 17), ARC_S_R(c, 7))));
  /* 1be688: b.eq #0x1be69c */
  if (ARC_COND(c, 0)) goto L_1be69c;
  /* 1be68c: cmp w1, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 1), UINT64_C(2));
  /* 1be690: b.ne #0x1be6dc */
  if (ARC_COND(c, 1)) goto L_1be6dc;
  /* 1be694: fmov s7, s16 */
  arc_su_w(c, 7, (uint32_t)(ARC_SU_R(c, 16)));
  /* 1be698: b #0x1be6a4 */
  goto L_1be6a4;
L_1be69c:;
  /* 1be69c: fmov s7, s3 */
  arc_su_w(c, 7, (uint32_t)(ARC_SU_R(c, 3)));
  /* 1be6a0: fmov s3, s16 */
  arc_su_w(c, 3, (uint32_t)(ARC_SU_R(c, 16)));
L_1be6a4:;
  /* 1be6a4: fcvt d2, s2 */
  arc_d_w(c, 2, (double)(ARC_S_R(c, 2)));
  /* 1be6a8: fmov d16, #0.25000000 */
  arc_d_w(c, 16, (double)(0.25));
  /* 1be6ac: fmul d2, d2, d16 */
  arc_d_w(c, 2, (double)(arc_fmul64(ARC_D_R(c, 2), ARC_D_R(c, 16))));
  /* 1be6b0: fdiv d1, d2, d1 */
  arc_d_w(c, 1, (double)(arc_fdiv64(ARC_D_R(c, 2), ARC_D_R(c, 1))));
  /* 1be6b4: fcvt s1, d1 */
  arc_s_w(c, 1, (float)(ARC_D_R(c, 1)));
  /* 1be6b8: fmul s1, s1, s4 */
  arc_s_w(c, 1, (float)(arc_fmul32(ARC_S_R(c, 1), ARC_S_R(c, 4))));
  /* 1be6bc: fdiv s4, s1, s0 */
  arc_s_w(c, 4, (float)(arc_fdiv32(ARC_S_R(c, 1), ARC_S_R(c, 0))));
  /* 1be6c0: fnmul s0, s7, s5 */
  arc_s_w(c, 0, (float)((-arc_fmul32(ARC_S_R(c, 7), ARC_S_R(c, 5)))));
  /* 1be6c4: fmul s1, s3, s5 */
  arc_s_w(c, 1, (float)(arc_fmul32(ARC_S_R(c, 3), ARC_S_R(c, 5))));
  /* 1be6c8: fnmul s2, s4, s5 */
  arc_s_w(c, 2, (float)((-arc_fmul32(ARC_S_R(c, 4), ARC_S_R(c, 5)))));
  /* 1be6cc: fmul s3, s4, s5 */
  arc_s_w(c, 3, (float)(arc_fmul32(ARC_S_R(c, 4), ARC_S_R(c, 5))));
  /* 1be6d0: fmov s4, s5 */
  arc_su_w(c, 4, (uint32_t)(ARC_SU_R(c, 5)));
  /* 1be6d4: fmov s5, s6 */
  arc_su_w(c, 5, (uint32_t)(ARC_SU_R(c, 6)));
  /* 1be6d8: b #0x1be938 */
  fn2_1be938(c); return;
L_1be6dc:;
  /* 1be6dc: ret  */
  return;
}

void fn2_1c1034(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077695028));
  /* 1c1034: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 1c1038: stp d9, d8, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, (c)->q[9].u64[0]);
    arc_st64((_pa + 8), (c)->q[8].u64[0]);
  }
  /* 1c103c: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1c1040: str x19, [sp, #0x30] */
  arc_st64(((c)->sp + INT64_C(48)), ARC_X_R(c, 19));
  /* 1c1044: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 1c1048: fmov s8, #1.00000000 */
  arc_s_w(c, 8, (float)(1.0));
  /* 1c104c: ldr s0, [x0, #0x3c] */
  arc_su_w(c, 0, arc_ld32((ARC_X_R(c, 0) + INT64_C(60))));
  /* 1c1050: fcmp s0, s8 */
  arc_fcmp(c, (double)(ARC_S_R(c, 0)), (double)(ARC_S_R(c, 8)));
  /* 1c1054: b.ne #0x1c1070 */
  if (ARC_COND(c, 1)) goto L_1c1070;
  /* 1c1058: bl #0x1bef7c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1839196));
  fn2_1bef7c(c);
  /* 1c105c: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1c1060: ldr x19, [sp, #0x30] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(48))));
  /* 1c1064: ldp d9, d8, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_du_w(c, 9, arc_ld64(_pa));
    arc_du_w(c, 8, arc_ld64((_pa + 8)));
  }
  /* 1c1068: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 1c106c: ret  */
  return;
L_1c1070:;
  /* 1c1070: ldp s2, s1, [x0, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(8));
    arc_su_w(c, 2, arc_ld32(_pa));
    arc_su_w(c, 1, arc_ld32((_pa + 4)));
  }
  /* 1c1074: fneg s0, s0 */
  arc_s_w(c, 0, (float)((-(ARC_S_R(c, 0)))));
  /* 1c1078: ldp s4, s3, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    arc_su_w(c, 4, arc_ld32(_pa));
    arc_su_w(c, 3, arc_ld32((_pa + 4)));
  }
  /* 1c107c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1c1080: ldp s6, s5, [x0, #0x28] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(40));
    arc_su_w(c, 6, arc_ld32(_pa));
    arc_su_w(c, 5, arc_ld32((_pa + 4)));
  }
  /* 1c1084: fadd s1, s1, s2 */
  arc_s_w(c, 1, (float)(arc_fadd32(ARC_S_R(c, 1), ARC_S_R(c, 2))));
  /* 1c1088: ldr s2, [x0, #0x38] */
  arc_su_w(c, 2, arc_ld32((ARC_X_R(c, 0) + INT64_C(56))));
  /* 1c108c: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 1c1090: fadd s3, s3, s4 */
  arc_s_w(c, 3, (float)(arc_fadd32(ARC_S_R(c, 3), ARC_S_R(c, 4))));
  /* 1c1094: fadd s4, s5, s6 */
  arc_s_w(c, 4, (float)(arc_fadd32(ARC_S_R(c, 5), ARC_S_R(c, 6))));
  /* 1c1098: fsub s0, s0, s2 */
  arc_s_w(c, 0, (float)(arc_fsub32(ARC_S_R(c, 0), ARC_S_R(c, 2))));
  /* 1c109c: stp s1, s3, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st32(_pa, (c)->q[1].u32[0]);
    arc_st32((_pa + 4), (c)->q[3].u32[0]);
  }
  /* 1c10a0: stp s4, s0, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    arc_st32(_pa, (c)->q[4].u32[0]);
    arc_st32((_pa + 4), (c)->q[0].u32[0]);
  }
  /* 1c10a4: bl #0x1c16b0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1839272));
  fn2_1c16b0(c);
  /* 1c10a8: ldr s9, [sp, #0xc] */
  arc_su_w(c, 9, arc_ld32(((c)->sp + INT64_C(12))));
  /* 1c10ac: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1c10b0: bl #0x1bef7c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1839284));
  fn2_1bef7c(c);
  /* 1c10b4: fadd s0, s0, s0 */
  arc_s_w(c, 0, (float)(arc_fadd32(ARC_S_R(c, 0), ARC_S_R(c, 0))));
  /* 1c10b8: fdiv s0, s9, s0 */
  arc_s_w(c, 0, (float)(arc_fdiv32(ARC_S_R(c, 9), ARC_S_R(c, 0))));
  /* 1c10bc: fdiv s0, s8, s0 */
  arc_s_w(c, 0, (float)(arc_fdiv32(ARC_S_R(c, 8), ARC_S_R(c, 0))));
  /* 1c10c0: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1c10c4: ldr x19, [sp, #0x30] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(48))));
  /* 1c10c8: ldp d9, d8, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_du_w(c, 9, arc_ld64(_pa));
    arc_du_w(c, 8, arc_ld64((_pa + 8)));
  }
  /* 1c10cc: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 1c10d0: ret  */
  return;
}

void fn2_1c2598(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077700504));
  /* 1c2598: ldp s1, s3, [x0, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(8));
    arc_su_w(c, 1, arc_ld32(_pa));
    arc_su_w(c, 3, arc_ld32((_pa + 4)));
  }
  /* 1c259c: fmov s17, #1.00000000 */
  arc_s_w(c, 17, (float)(1.0));
  /* 1c25a0: ldp s4, s0, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_su_w(c, 4, arc_ld32(_pa));
    arc_su_w(c, 0, arc_ld32((_pa + 4)));
  }
  /* 1c25a4: ldp s16, s2, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    arc_su_w(c, 16, arc_ld32(_pa));
    arc_su_w(c, 2, arc_ld32((_pa + 4)));
  }
  /* 1c25a8: fmul s6, s3, s3 */
  arc_s_w(c, 6, (float)(arc_fmul32(ARC_S_R(c, 3), ARC_S_R(c, 3))));
  /* 1c25ac: fmul s5, s4, s4 */
  arc_s_w(c, 5, (float)(arc_fmul32(ARC_S_R(c, 4), ARC_S_R(c, 4))));
  /* 1c25b0: fmul s7, s16, s16 */
  arc_s_w(c, 7, (float)(arc_fmul32(ARC_S_R(c, 16), ARC_S_R(c, 16))));
  /* 1c25b4: fadd s5, s5, s6 */
  arc_s_w(c, 5, (float)(arc_fadd32(ARC_S_R(c, 5), ARC_S_R(c, 6))));
  /* 1c25b8: ldr s6, [x0, #0x20] */
  arc_su_w(c, 6, arc_ld32((ARC_X_R(c, 0) + INT64_C(32))));
  /* 1c25bc: fadd s18, s5, s7 */
  arc_s_w(c, 18, (float)(arc_fadd32(ARC_S_R(c, 5), ARC_S_R(c, 7))));
  /* 1c25c0: ldp s5, s7, [x0, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(16));
    arc_su_w(c, 5, arc_ld32(_pa));
    arc_su_w(c, 7, arc_ld32((_pa + 4)));
  }
  /* 1c25c4: fcmp s18, s17 */
  arc_fcmp(c, (double)(ARC_S_R(c, 18)), (double)(ARC_S_R(c, 17)));
  /* 1c25c8: b.eq #0x1c25fc */
  if (ARC_COND(c, 0)) goto L_1c25fc;
  /* 1c25cc: mov w8, #0xc5ac */
  ARC_W_W(c, 8, UINT64_C(50604));
  /* 1c25d0: fabs s19, s18 */
  arc_s_w(c, 19, (float)(fabsf(ARC_S_R(c, 18))));
  /* 1c25d4: fmov s21, #-1.00000000 */
  arc_s_w(c, 21, (float)(-1.0));
  /* 1c25d8: movk w8, #0x3727, lsl #16 */
  ARC_W_W(c, 8, ((ARC_W_R(c, 8) & UINT64_C(18446744069414649855)) | UINT64_C(925302784)));
  /* 1c25dc: fmov s20, w8 */
  arc_su_w(c, 20, (uint32_t)(ARC_W_R(c, 8)));
  /* 1c25e0: fadd s18, s18, s21 */
  arc_s_w(c, 18, (float)(arc_fadd32(ARC_S_R(c, 18), ARC_S_R(c, 21))));
  /* 1c25e4: fmul s19, s19, s20 */
  arc_s_w(c, 19, (float)(arc_fmul32(ARC_S_R(c, 19), ARC_S_R(c, 20))));
  /* 1c25e8: fabs s18, s18 */
  arc_s_w(c, 18, (float)(fabsf(ARC_S_R(c, 18))));
  /* 1c25ec: fcmp s19, s20 */
  arc_fcmp(c, (double)(ARC_S_R(c, 19)), (double)(ARC_S_R(c, 20)));
  /* 1c25f0: fcsel s19, s20, s19, mi */
  arc_s_w(c, 19, (float)((ARC_COND(c, 4) ? ARC_S_R(c, 20) : ARC_S_R(c, 19))));
  /* 1c25f4: fcmp s18, s19 */
  arc_fcmp(c, (double)(ARC_S_R(c, 18)), (double)(ARC_S_R(c, 19)));
  /* 1c25f8: b.pl #0x1c2710 */
  if (ARC_COND(c, 5)) goto L_1c2710;
L_1c25fc:;
  /* 1c25fc: fmul s18, s0, s0 */
  arc_s_w(c, 18, (float)(arc_fmul32(ARC_S_R(c, 0), ARC_S_R(c, 0))));
  /* 1c2600: fmul s19, s5, s5 */
  arc_s_w(c, 19, (float)(arc_fmul32(ARC_S_R(c, 5), ARC_S_R(c, 5))));
  /* 1c2604: fmul s20, s2, s2 */
  arc_s_w(c, 20, (float)(arc_fmul32(ARC_S_R(c, 2), ARC_S_R(c, 2))));
  /* 1c2608: fadd s18, s18, s19 */
  arc_s_w(c, 18, (float)(arc_fadd32(ARC_S_R(c, 18), ARC_S_R(c, 19))));
  /* 1c260c: fadd s18, s18, s20 */
  arc_s_w(c, 18, (float)(arc_fadd32(ARC_S_R(c, 18), ARC_S_R(c, 20))));
  /* 1c2610: fcmp s18, s17 */
  arc_fcmp(c, (double)(ARC_S_R(c, 18)), (double)(ARC_S_R(c, 17)));
  /* 1c2614: b.eq #0x1c2648 */
  if (ARC_COND(c, 0)) goto L_1c2648;
  /* 1c2618: mov w8, #0xc5ac */
  ARC_W_W(c, 8, UINT64_C(50604));
  /* 1c261c: fabs s17, s18 */
  arc_s_w(c, 17, (float)(fabsf(ARC_S_R(c, 18))));
  /* 1c2620: fmov s20, #-1.00000000 */
  arc_s_w(c, 20, (float)(-1.0));
  /* 1c2624: movk w8, #0x3727, lsl #16 */
  ARC_W_W(c, 8, ((ARC_W_R(c, 8) & UINT64_C(18446744069414649855)) | UINT64_C(925302784)));
  /* 1c2628: fmov s19, w8 */
  arc_su_w(c, 19, (uint32_t)(ARC_W_R(c, 8)));
  /* 1c262c: fadd s18, s18, s20 */
  arc_s_w(c, 18, (float)(arc_fadd32(ARC_S_R(c, 18), ARC_S_R(c, 20))));
  /* 1c2630: fmul s17, s17, s19 */
  arc_s_w(c, 17, (float)(arc_fmul32(ARC_S_R(c, 17), ARC_S_R(c, 19))));
  /* 1c2634: fabs s18, s18 */
  arc_s_w(c, 18, (float)(fabsf(ARC_S_R(c, 18))));
  /* 1c2638: fcmp s17, s19 */
  arc_fcmp(c, (double)(ARC_S_R(c, 17)), (double)(ARC_S_R(c, 19)));
  /* 1c263c: fcsel s17, s19, s17, mi */
  arc_s_w(c, 17, (float)((ARC_COND(c, 4) ? ARC_S_R(c, 19) : ARC_S_R(c, 17))));
  /* 1c2640: fcmp s18, s17 */
  arc_fcmp(c, (double)(ARC_S_R(c, 18)), (double)(ARC_S_R(c, 17)));
  /* 1c2644: b.pl #0x1c2710 */
  if (ARC_COND(c, 5)) goto L_1c2710;
L_1c2648:;
  /* 1c2648: fmul s17, s1, s1 */
  arc_s_w(c, 17, (float)(arc_fmul32(ARC_S_R(c, 1), ARC_S_R(c, 1))));
  /* 1c264c: fmul s18, s7, s7 */
  arc_s_w(c, 18, (float)(arc_fmul32(ARC_S_R(c, 7), ARC_S_R(c, 7))));
  /* 1c2650: fmul s19, s6, s6 */
  arc_s_w(c, 19, (float)(arc_fmul32(ARC_S_R(c, 6), ARC_S_R(c, 6))));
  /* 1c2654: fadd s17, s17, s18 */
  arc_s_w(c, 17, (float)(arc_fadd32(ARC_S_R(c, 17), ARC_S_R(c, 18))));
  /* 1c2658: fmov s18, #1.00000000 */
  arc_s_w(c, 18, (float)(1.0));
  /* 1c265c: fadd s17, s17, s19 */
  arc_s_w(c, 17, (float)(arc_fadd32(ARC_S_R(c, 17), ARC_S_R(c, 19))));
  /* 1c2660: fcmp s17, s18 */
  arc_fcmp(c, (double)(ARC_S_R(c, 17)), (double)(ARC_S_R(c, 18)));
  /* 1c2664: b.eq #0x1c2698 */
  if (ARC_COND(c, 0)) goto L_1c2698;
  /* 1c2668: mov w8, #0xc5ac */
  ARC_W_W(c, 8, UINT64_C(50604));
  /* 1c266c: fabs s18, s17 */
  arc_s_w(c, 18, (float)(fabsf(ARC_S_R(c, 17))));
  /* 1c2670: fmov s20, #-1.00000000 */
  arc_s_w(c, 20, (float)(-1.0));
  /* 1c2674: movk w8, #0x3727, lsl #16 */
  ARC_W_W(c, 8, ((ARC_W_R(c, 8) & UINT64_C(18446744069414649855)) | UINT64_C(925302784)));
  /* 1c2678: fmov s19, w8 */
  arc_su_w(c, 19, (uint32_t)(ARC_W_R(c, 8)));
  /* 1c267c: fadd s17, s17, s20 */
  arc_s_w(c, 17, (float)(arc_fadd32(ARC_S_R(c, 17), ARC_S_R(c, 20))));
  /* 1c2680: fmul s18, s18, s19 */
  arc_s_w(c, 18, (float)(arc_fmul32(ARC_S_R(c, 18), ARC_S_R(c, 19))));
  /* 1c2684: fabs s17, s17 */
  arc_s_w(c, 17, (float)(fabsf(ARC_S_R(c, 17))));
  /* 1c2688: fcmp s18, s19 */
  arc_fcmp(c, (double)(ARC_S_R(c, 18)), (double)(ARC_S_R(c, 19)));
  /* 1c268c: fcsel s18, s19, s18, mi */
  arc_s_w(c, 18, (float)((ARC_COND(c, 4) ? ARC_S_R(c, 19) : ARC_S_R(c, 18))));
  /* 1c2690: fcmp s17, s18 */
  arc_fcmp(c, (double)(ARC_S_R(c, 17)), (double)(ARC_S_R(c, 18)));
  /* 1c2694: b.pl #0x1c2710 */
  if (ARC_COND(c, 5)) goto L_1c2710;
L_1c2698:;
  /* 1c2698: fmul s17, s4, s0 */
  arc_s_w(c, 17, (float)(arc_fmul32(ARC_S_R(c, 4), ARC_S_R(c, 0))));
  /* 1c269c: fmul s18, s3, s5 */
  arc_s_w(c, 18, (float)(arc_fmul32(ARC_S_R(c, 3), ARC_S_R(c, 5))));
  /* 1c26a0: mov w8, #0xc5ac */
  ARC_W_W(c, 8, UINT64_C(50604));
  /* 1c26a4: movk w8, #0x3727, lsl #16 */
  ARC_W_W(c, 8, ((ARC_W_R(c, 8) & UINT64_C(18446744069414649855)) | UINT64_C(925302784)));
  /* 1c26a8: fadd s17, s17, s18 */
  arc_s_w(c, 17, (float)(arc_fadd32(ARC_S_R(c, 17), ARC_S_R(c, 18))));
  /* 1c26ac: fmul s18, s16, s2 */
  arc_s_w(c, 18, (float)(arc_fmul32(ARC_S_R(c, 16), ARC_S_R(c, 2))));
  /* 1c26b0: fadd s17, s17, s18 */
  arc_s_w(c, 17, (float)(arc_fadd32(ARC_S_R(c, 17), ARC_S_R(c, 18))));
  /* 1c26b4: fmov s18, w8 */
  arc_su_w(c, 18, (uint32_t)(ARC_W_R(c, 8)));
  /* 1c26b8: fabs s17, s17 */
  arc_s_w(c, 17, (float)(fabsf(ARC_S_R(c, 17))));
  /* 1c26bc: fcmp s17, s18 */
  arc_fcmp(c, (double)(ARC_S_R(c, 17)), (double)(ARC_S_R(c, 18)));
  /* 1c26c0: b.pl #0x1c2710 */
  if (ARC_COND(c, 5)) goto L_1c2710;
  /* 1c26c4: fmul s4, s4, s1 */
  arc_s_w(c, 4, (float)(arc_fmul32(ARC_S_R(c, 4), ARC_S_R(c, 1))));
  /* 1c26c8: fmul s3, s3, s7 */
  arc_s_w(c, 3, (float)(arc_fmul32(ARC_S_R(c, 3), ARC_S_R(c, 7))));
  /* 1c26cc: fadd s3, s4, s3 */
  arc_s_w(c, 3, (float)(arc_fadd32(ARC_S_R(c, 4), ARC_S_R(c, 3))));
  /* 1c26d0: fmul s4, s16, s6 */
  arc_s_w(c, 4, (float)(arc_fmul32(ARC_S_R(c, 16), ARC_S_R(c, 6))));
  /* 1c26d4: fadd s3, s3, s4 */
  arc_s_w(c, 3, (float)(arc_fadd32(ARC_S_R(c, 3), ARC_S_R(c, 4))));
  /* 1c26d8: fmov s4, w8 */
  arc_su_w(c, 4, (uint32_t)(ARC_W_R(c, 8)));
  /* 1c26dc: fabs s3, s3 */
  arc_s_w(c, 3, (float)(fabsf(ARC_S_R(c, 3))));
  /* 1c26e0: fcmp s3, s4 */
  arc_fcmp(c, (double)(ARC_S_R(c, 3)), (double)(ARC_S_R(c, 4)));
  /* 1c26e4: b.pl #0x1c2710 */
  if (ARC_COND(c, 5)) goto L_1c2710;
  /* 1c26e8: fmul s0, s0, s1 */
  arc_s_w(c, 0, (float)(arc_fmul32(ARC_S_R(c, 0), ARC_S_R(c, 1))));
  /* 1c26ec: fmul s1, s5, s7 */
  arc_s_w(c, 1, (float)(arc_fmul32(ARC_S_R(c, 5), ARC_S_R(c, 7))));
  /* 1c26f0: fadd s0, s0, s1 */
  arc_s_w(c, 0, (float)(arc_fadd32(ARC_S_R(c, 0), ARC_S_R(c, 1))));
  /* 1c26f4: fmul s1, s2, s6 */
  arc_s_w(c, 1, (float)(arc_fmul32(ARC_S_R(c, 2), ARC_S_R(c, 6))));
  /* 1c26f8: fadd s0, s0, s1 */
  arc_s_w(c, 0, (float)(arc_fadd32(ARC_S_R(c, 0), ARC_S_R(c, 1))));
  /* 1c26fc: fmov s1, w8 */
  arc_su_w(c, 1, (uint32_t)(ARC_W_R(c, 8)));
  /* 1c2700: fabs s0, s0 */
  arc_s_w(c, 0, (float)(fabsf(ARC_S_R(c, 0))));
  /* 1c2704: fcmp s0, s1 */
  arc_fcmp(c, (double)(ARC_S_R(c, 0)), (double)(ARC_S_R(c, 1)));
  /* 1c2708: cset w0, mi */
  ARC_W_W(c, 0, (ARC_COND(c, 4) ? 1 : 0));
  /* 1c270c: ret  */
  return;
L_1c2710:;
  /* 1c2710: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 1c2714: ret  */
  return;
}

void fn2_1c4be8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077710312));
  /* 1c4be8: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1c4bec: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 1c4bf0: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1c4bf4: ldp s2, s0, [x0, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(8));
    arc_su_w(c, 2, arc_ld32(_pa));
    arc_su_w(c, 0, arc_ld32((_pa + 4)));
  }
  /* 1c4bf8: mov w8, #0xc5ac */
  ARC_W_W(c, 8, UINT64_C(50604));
  /* 1c4bfc: ldr s1, [x0, #4] */
  arc_su_w(c, 1, arc_ld32((ARC_X_R(c, 0) + INT64_C(4))));
  /* 1c4c00: movk w8, #0x3727, lsl #16 */
  ARC_W_W(c, 8, ((ARC_W_R(c, 8) & UINT64_C(18446744069414649855)) | UINT64_C(925302784)));
  /* 1c4c04: ldr s3, [x0, #0x18] */
  arc_su_w(c, 3, arc_ld32((ARC_X_R(c, 0) + INT64_C(24))));
  /* 1c4c08: fmov s6, w8 */
  arc_su_w(c, 6, (uint32_t)(ARC_W_R(c, 8)));
  /* 1c4c0c: mov x19, x2 */
  ARC_X_W(c, 19, ARC_X_R(c, 2));
  /* 1c4c10: fabd s4, s1, s0 */
  arc_s_w(c, 4, (float)(fabsf(arc_fsub32(ARC_S_R(c, 1), ARC_S_R(c, 0)))));
  /* 1c4c14: fabd s5, s2, s3 */
  arc_s_w(c, 5, (float)(fabsf(arc_fsub32(ARC_S_R(c, 2), ARC_S_R(c, 3)))));
  /* 1c4c18: fcmp s4, s6 */
  arc_fcmp(c, (double)(ARC_S_R(c, 4)), (double)(ARC_S_R(c, 6)));
  /* 1c4c1c: fmov s4, w8 */
  arc_su_w(c, 4, (uint32_t)(ARC_W_R(c, 8)));
  /* 1c4c20: fccmp s5, s4, #0, mi */
  if (ARC_COND(c, 4)) { arc_fcmp(c, (double)(ARC_S_R(c, 5)), (double)(ARC_S_R(c, 4))); }
  else { (c)->nf = 0; (c)->zf = 0;
          (c)->cf = 0; (c)->vf = 0; }
  /* 1c4c24: b.pl #0x1c4cf8 */
  if (ARC_COND(c, 5)) goto L_1c4cf8;
  /* 1c4c28: ldr s4, [x0, #0x14] */
  arc_su_w(c, 4, arc_ld32((ARC_X_R(c, 0) + INT64_C(20))));
  /* 1c4c2c: ldr s5, [x0, #0x1c] */
  arc_su_w(c, 5, arc_ld32((ARC_X_R(c, 0) + INT64_C(28))));
  /* 1c4c30: fmov s7, w8 */
  arc_su_w(c, 7, (uint32_t)(ARC_W_R(c, 8)));
  /* 1c4c34: fabd s6, s4, s5 */
  arc_s_w(c, 6, (float)(fabsf(arc_fsub32(ARC_S_R(c, 4), ARC_S_R(c, 5)))));
  /* 1c4c38: fcmp s6, s7 */
  arc_fcmp(c, (double)(ARC_S_R(c, 6)), (double)(ARC_S_R(c, 7)));
  /* 1c4c3c: b.pl #0x1c4cf8 */
  if (ARC_COND(c, 5)) goto L_1c4cf8;
  /* 1c4c40: fabs s6, s1 */
  arc_s_w(c, 6, (float)(fabsf(ARC_S_R(c, 1))));
  /* 1c4c44: fmov s7, w8 */
  arc_su_w(c, 7, (uint32_t)(ARC_W_R(c, 8)));
  /* 1c4c48: fcmp s6, s7 */
  arc_fcmp(c, (double)(ARC_S_R(c, 6)), (double)(ARC_S_R(c, 7)));
  /* 1c4c4c: b.pl #0x1c4da0 */
  if (ARC_COND(c, 5)) goto L_1c4da0;
  /* 1c4c50: fabs s6, s2 */
  arc_s_w(c, 6, (float)(fabsf(ARC_S_R(c, 2))));
  /* 1c4c54: fmov s7, w8 */
  arc_su_w(c, 7, (uint32_t)(ARC_W_R(c, 8)));
  /* 1c4c58: fcmp s6, s7 */
  arc_fcmp(c, (double)(ARC_S_R(c, 6)), (double)(ARC_S_R(c, 7)));
  /* 1c4c5c: b.pl #0x1c4da0 */
  if (ARC_COND(c, 5)) goto L_1c4da0;
  /* 1c4c60: fabs s6, s0 */
  arc_s_w(c, 6, (float)(fabsf(ARC_S_R(c, 0))));
  /* 1c4c64: fmov s7, w8 */
  arc_su_w(c, 7, (uint32_t)(ARC_W_R(c, 8)));
  /* 1c4c68: fcmp s6, s7 */
  arc_fcmp(c, (double)(ARC_S_R(c, 6)), (double)(ARC_S_R(c, 7)));
  /* 1c4c6c: b.pl #0x1c4da0 */
  if (ARC_COND(c, 5)) goto L_1c4da0;
  /* 1c4c70: fabs s6, s4 */
  arc_s_w(c, 6, (float)(fabsf(ARC_S_R(c, 4))));
  /* 1c4c74: fmov s7, w8 */
  arc_su_w(c, 7, (uint32_t)(ARC_W_R(c, 8)));
  /* 1c4c78: fcmp s6, s7 */
  arc_fcmp(c, (double)(ARC_S_R(c, 6)), (double)(ARC_S_R(c, 7)));
  /* 1c4c7c: b.pl #0x1c4da0 */
  if (ARC_COND(c, 5)) goto L_1c4da0;
  /* 1c4c80: fabs s6, s3 */
  arc_s_w(c, 6, (float)(fabsf(ARC_S_R(c, 3))));
  /* 1c4c84: fmov s7, w8 */
  arc_su_w(c, 7, (uint32_t)(ARC_W_R(c, 8)));
  /* 1c4c88: fcmp s6, s7 */
  arc_fcmp(c, (double)(ARC_S_R(c, 6)), (double)(ARC_S_R(c, 7)));
  /* 1c4c8c: b.pl #0x1c4da0 */
  if (ARC_COND(c, 5)) goto L_1c4da0;
  /* 1c4c90: fabs s6, s5 */
  arc_s_w(c, 6, (float)(fabsf(ARC_S_R(c, 5))));
  /* 1c4c94: fmov s7, w8 */
  arc_su_w(c, 7, (uint32_t)(ARC_W_R(c, 8)));
  /* 1c4c98: fcmp s6, s7 */
  arc_fcmp(c, (double)(ARC_S_R(c, 6)), (double)(ARC_S_R(c, 7)));
  /* 1c4c9c: b.pl #0x1c4da0 */
  if (ARC_COND(c, 5)) goto L_1c4da0;
  /* 1c4ca0: ldr s6, [x0] */
  arc_su_w(c, 6, arc_ld32(ARC_X_R(c, 0)));
  /* 1c4ca4: ldr s7, [x0, #0x10] */
  arc_su_w(c, 7, arc_ld32((ARC_X_R(c, 0) + INT64_C(16))));
  /* 1c4ca8: adrp x8, #0x37000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(225280)));
  /* 1c4cac: fadd s6, s6, s7 */
  arc_s_w(c, 6, (float)(arc_fadd32(ARC_S_R(c, 6), ARC_S_R(c, 7))));
  /* 1c4cb0: ldr s7, [x0, #0x20] */
  arc_su_w(c, 7, arc_ld32((ARC_X_R(c, 0) + INT64_C(32))));
  /* 1c4cb4: fadd s6, s6, s7 */
  arc_s_w(c, 6, (float)(arc_fadd32(ARC_S_R(c, 6), ARC_S_R(c, 7))));
  /* 1c4cb8: fmov s7, #-3.00000000 */
  arc_s_w(c, 7, (float)(-3.0));
  /* 1c4cbc: fadd s6, s6, s7 */
  arc_s_w(c, 6, (float)(arc_fadd32(ARC_S_R(c, 6), ARC_S_R(c, 7))));
  /* 1c4cc0: ldr d7, [x8, #0x700] */
  arc_du_w(c, 7, arc_ld64((ARC_X_R(c, 8) + INT64_C(1792))));
  /* 1c4cc4: fabs s6, s6 */
  arc_s_w(c, 6, (float)(fabsf(ARC_S_R(c, 6))));
  /* 1c4cc8: fcvt d6, s6 */
  arc_d_w(c, 6, (double)(ARC_S_R(c, 6)));
  /* 1c4ccc: fcmp d6, d7 */
  arc_fcmp(c, (double)(ARC_D_R(c, 6)), (double)(ARC_D_R(c, 7)));
  /* 1c4cd0: b.pl #0x1c4da0 */
  if (ARC_COND(c, 5)) goto L_1c4da0;
  /* 1c4cd4: adrp x8, #0x37000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(225280)));
  /* 1c4cd8: movi d0, #0000000000000000 */
  arc_v_clear(c, 0);
  /* 1c4cdc: str wzr, [x1, #8] */
  arc_st32((ARC_X_R(c, 1) + INT64_C(8)), ARC_W_R(c, 31));
  /* 1c4ce0: ldr d1, [x8, #0x6f0] */
  arc_du_w(c, 1, arc_ld64((ARC_X_R(c, 8) + INT64_C(1776))));
  /* 1c4ce4: str d1, [x1] */
  arc_st64(ARC_X_R(c, 1), (c)->q[1].u64[0]);
  /* 1c4ce8: str s0, [x19] */
  arc_st32(ARC_X_R(c, 19), (c)->q[0].u32[0]);
  /* 1c4cec: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1c4cf0: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1c4cf4: ret  */
  return;
L_1c4cf8:;
  /* 1c4cf8: ldr s4, [x0, #0x1c] */
  arc_su_w(c, 4, arc_ld32((ARC_X_R(c, 0) + INT64_C(28))));
  /* 1c4cfc: ldr s5, [x0, #0x14] */
  arc_su_w(c, 5, arc_ld32((ARC_X_R(c, 0) + INT64_C(20))));
  /* 1c4d00: fsub s2, s2, s3 */
  arc_s_w(c, 2, (float)(arc_fsub32(ARC_S_R(c, 2), ARC_S_R(c, 3))));
  /* 1c4d04: fsub s0, s0, s1 */
  arc_s_w(c, 0, (float)(arc_fsub32(ARC_S_R(c, 0), ARC_S_R(c, 1))));
  /* 1c4d08: adrp x8, #0x37000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(225280)));
  /* 1c4d0c: fsub s3, s4, s5 */
  arc_s_w(c, 3, (float)(arc_fsub32(ARC_S_R(c, 4), ARC_S_R(c, 5))));
  /* 1c4d10: fmul s1, s2, s2 */
  arc_s_w(c, 1, (float)(arc_fmul32(ARC_S_R(c, 2), ARC_S_R(c, 2))));
  /* 1c4d14: fmul s5, s0, s0 */
  arc_s_w(c, 5, (float)(arc_fmul32(ARC_S_R(c, 0), ARC_S_R(c, 0))));
  /* 1c4d18: fcvt d0, s0 */
  arc_d_w(c, 0, (double)(ARC_S_R(c, 0)));
  /* 1c4d1c: fmul s4, s3, s3 */
  arc_s_w(c, 4, (float)(arc_fmul32(ARC_S_R(c, 3), ARC_S_R(c, 3))));
  /* 1c4d20: mov v3.s[1], v2.s[0] */
  (c)->q[3].u32[1] = ((c)->q[2].u32[0]);
  /* 1c4d24: fadd s1, s4, s1 */
  arc_s_w(c, 1, (float)(arc_fadd32(ARC_S_R(c, 4), ARC_S_R(c, 1))));
  /* 1c4d28: fcvtl v2.2d, v3.2s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.f64[0] = (double)(c)->q[3].f32[0];
    _t.f64[1] = (double)(c)->q[3].f32[1];
    (c)->q[2] = _t; }
  /* 1c4d2c: fadd s1, s5, s1 */
  arc_s_w(c, 1, (float)(arc_fadd32(ARC_S_R(c, 5), ARC_S_R(c, 1))));
  /* 1c4d30: ldr d5, [x8, #0x748] */
  arc_du_w(c, 5, arc_ld64((ARC_X_R(c, 8) + INT64_C(1864))));
  /* 1c4d34: fsqrt s1, s1 */
  arc_s_w(c, 1, (float)(arc_fsqrt32(ARC_S_R(c, 1))));
  /* 1c4d38: fcvt d1, s1 */
  arc_d_w(c, 1, (double)(ARC_S_R(c, 1)));
  /* 1c4d3c: fabs d4, d1 */
  arc_d_w(c, 4, (double)(fabs(ARC_D_R(c, 1))));
  /* 1c4d40: fcmp d4, d5 */
  arc_fcmp(c, (double)(ARC_D_R(c, 4)), (double)(ARC_D_R(c, 5)));
  /* 1c4d44: fmov d4, #1.00000000 */
  arc_d_w(c, 4, (double)(1.0));
  /* 1c4d48: fcsel d1, d4, d1, mi */
  arc_d_w(c, 1, (double)((ARC_COND(c, 4) ? ARC_D_R(c, 4) : ARC_D_R(c, 1))));
  /* 1c4d4c: dup v3.2d, v1.d[0] */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = ((c)->q[1].u64[0]);
    _t.u64[1] = ((c)->q[1].u64[0]);
    (c)->q[3] = _t; }
  /* 1c4d50: fdiv d0, d0, d1 */
  arc_d_w(c, 0, (double)(arc_fdiv64(ARC_D_R(c, 0), ARC_D_R(c, 1))));
  /* 1c4d54: fdiv v2.2d, v2.2d, v3.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.f64[0] = arc_fdiv64((c)->q[2].f64[0], (c)->q[3].f64[0]);
    _t.f64[1] = arc_fdiv64((c)->q[2].f64[1], (c)->q[3].f64[1]);
    (c)->q[2] = _t; }
  /* 1c4d58: fcvt s0, d0 */
  arc_s_w(c, 0, (float)(ARC_D_R(c, 0)));
  /* 1c4d5c: str s0, [x1, #8] */
  arc_st32((ARC_X_R(c, 1) + INT64_C(8)), (c)->q[0].u32[0]);
  /* 1c4d60: fcvtn v1.2s, v2.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.f32[0] = (float)(c)->q[2].f64[0];
    _t.f32[1] = (float)(c)->q[2].f64[1];
    (c)->q[1] = _t; }
  /* 1c4d64: str d1, [x1] */
  arc_st64(ARC_X_R(c, 1), (c)->q[1].u64[0]);
  /* 1c4d68: ldr s0, [x0] */
  arc_su_w(c, 0, arc_ld32(ARC_X_R(c, 0)));
  /* 1c4d6c: ldr s1, [x0, #0x10] */
  arc_su_w(c, 1, arc_ld32((ARC_X_R(c, 0) + INT64_C(16))));
  /* 1c4d70: fadd s0, s0, s1 */
  arc_s_w(c, 0, (float)(arc_fadd32(ARC_S_R(c, 0), ARC_S_R(c, 1))));
  /* 1c4d74: ldr s1, [x0, #0x20] */
  arc_su_w(c, 1, arc_ld32((ARC_X_R(c, 0) + INT64_C(32))));
  /* 1c4d78: fadd s0, s0, s1 */
  arc_s_w(c, 0, (float)(arc_fadd32(ARC_S_R(c, 0), ARC_S_R(c, 1))));
  /* 1c4d7c: fmov s1, #-1.00000000 */
  arc_s_w(c, 1, (float)(-1.0));
  /* 1c4d80: fadd s0, s0, s1 */
  arc_s_w(c, 0, (float)(arc_fadd32(ARC_S_R(c, 0), ARC_S_R(c, 1))));
  /* 1c4d84: fmov s1, #0.50000000 */
  arc_s_w(c, 1, (float)(0.5));
  /* 1c4d88: fmul s0, s0, s1 */
  arc_s_w(c, 0, (float)(arc_fmul32(ARC_S_R(c, 0), ARC_S_R(c, 1))));
  /* 1c4d8c: bl #0x24b8e0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1854864));
  fn2_24b8e0(c);
  /* 1c4d90: str s0, [x19] */
  arc_st32(ARC_X_R(c, 19), (c)->q[0].u32[0]);
  /* 1c4d94: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1c4d98: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1c4d9c: ret  */
  return;
L_1c4da0:;
  /* 1c4da0: fmov s6, #1.00000000 */
  arc_s_w(c, 6, (float)(1.0));
  /* 1c4da4: ldr s7, [x0] */
  arc_su_w(c, 7, arc_ld32(ARC_X_R(c, 0)));
  /* 1c4da8: ldr s16, [x0, #0x10] */
  arc_su_w(c, 16, arc_ld32((ARC_X_R(c, 0) + INT64_C(16))));
  /* 1c4dac: fmov s17, #0.50000000 */
  arc_s_w(c, 17, (float)(0.5));
  /* 1c4db0: ldr s18, [x0, #0x20] */
  arc_su_w(c, 18, arc_ld32((ARC_X_R(c, 0) + INT64_C(32))));
  /* 1c4db4: fadd s1, s1, s0 */
  arc_s_w(c, 1, (float)(arc_fadd32(ARC_S_R(c, 1), ARC_S_R(c, 0))));
  /* 1c4db8: fadd s3, s2, s3 */
  arc_s_w(c, 3, (float)(arc_fadd32(ARC_S_R(c, 2), ARC_S_R(c, 3))));
  /* 1c4dbc: fmov s2, #0.25000000 */
  arc_s_w(c, 2, (float)(0.25));
  /* 1c4dc0: fadd s7, s7, s6 */
  arc_s_w(c, 7, (float)(arc_fadd32(ARC_S_R(c, 7), ARC_S_R(c, 6))));
  /* 1c4dc4: fadd s16, s16, s6 */
  arc_s_w(c, 16, (float)(arc_fadd32(ARC_S_R(c, 16), ARC_S_R(c, 6))));
  /* 1c4dc8: fadd s18, s18, s6 */
  arc_s_w(c, 18, (float)(arc_fadd32(ARC_S_R(c, 18), ARC_S_R(c, 6))));
  /* 1c4dcc: fmul s1, s1, s2 */
  arc_s_w(c, 1, (float)(arc_fmul32(ARC_S_R(c, 1), ARC_S_R(c, 2))));
  /* 1c4dd0: fmul s3, s3, s2 */
  arc_s_w(c, 3, (float)(arc_fmul32(ARC_S_R(c, 3), ARC_S_R(c, 2))));
  /* 1c4dd4: fmul s7, s7, s17 */
  arc_s_w(c, 7, (float)(arc_fmul32(ARC_S_R(c, 7), ARC_S_R(c, 17))));
  /* 1c4dd8: fmul s6, s16, s17 */
  arc_s_w(c, 6, (float)(arc_fmul32(ARC_S_R(c, 16), ARC_S_R(c, 17))));
  /* 1c4ddc: fmul s0, s18, s17 */
  arc_s_w(c, 0, (float)(arc_fmul32(ARC_S_R(c, 18), ARC_S_R(c, 17))));
  /* 1c4de0: fcmp s7, s6 */
  arc_fcmp(c, (double)(ARC_S_R(c, 7)), (double)(ARC_S_R(c, 6)));
  /* 1c4de4: b.le #0x1c4e1c */
  if (ARC_COND(c, 13)) goto L_1c4e1c;
  /* 1c4de8: fcmp s7, s0 */
  arc_fcmp(c, (double)(ARC_S_R(c, 7)), (double)(ARC_S_R(c, 0)));
  /* 1c4dec: b.le #0x1c4e1c */
  if (ARC_COND(c, 13)) goto L_1c4e1c;
  /* 1c4df0: fcvt d0, s7 */
  arc_d_w(c, 0, (double)(ARC_S_R(c, 7)));
  /* 1c4df4: adrp x8, #0x37000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(225280)));
  /* 1c4df8: ldr d2, [x8, #0x748] */
  arc_du_w(c, 2, arc_ld64((ARC_X_R(c, 8) + INT64_C(1864))));
  /* 1c4dfc: fcmp d0, d2 */
  arc_fcmp(c, (double)(ARC_D_R(c, 0)), (double)(ARC_D_R(c, 2)));
  /* 1c4e00: b.pl #0x1c4e84 */
  if (ARC_COND(c, 5)) goto L_1c4e84;
  /* 1c4e04: mov w8, #0x4f3 */
  ARC_W_W(c, 8, UINT64_C(1267));
  /* 1c4e08: movi d2, #0000000000000000 */
  arc_v_clear(c, 2);
  /* 1c4e0c: movk w8, #0x3f35, lsl #16 */
  ARC_W_W(c, 8, ((ARC_W_R(c, 8) & UINT64_C(18446744069414649855)) | UINT64_C(1060438016)));
  /* 1c4e10: fmov s1, w8 */
  arc_su_w(c, 1, (uint32_t)(ARC_W_R(c, 8)));
  /* 1c4e14: fmov s0, s1 */
  arc_su_w(c, 0, (uint32_t)(ARC_SU_R(c, 1)));
  /* 1c4e18: b #0x1c4eb0 */
  goto L_1c4eb0;
L_1c4e1c:;
  /* 1c4e1c: fadd s4, s4, s5 */
  arc_s_w(c, 4, (float)(arc_fadd32(ARC_S_R(c, 4), ARC_S_R(c, 5))));
  /* 1c4e20: fcmp s6, s0 */
  arc_fcmp(c, (double)(ARC_S_R(c, 6)), (double)(ARC_S_R(c, 0)));
  /* 1c4e24: fmul s4, s4, s2 */
  arc_s_w(c, 4, (float)(arc_fmul32(ARC_S_R(c, 4), ARC_S_R(c, 2))));
  /* 1c4e28: b.le #0x1c4e58 */
  if (ARC_COND(c, 13)) goto L_1c4e58;
  /* 1c4e2c: fcvt d0, s6 */
  arc_d_w(c, 0, (double)(ARC_S_R(c, 6)));
  /* 1c4e30: adrp x8, #0x37000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(225280)));
  /* 1c4e34: ldr d2, [x8, #0x748] */
  arc_du_w(c, 2, arc_ld64((ARC_X_R(c, 8) + INT64_C(1864))));
  /* 1c4e38: fcmp d0, d2 */
  arc_fcmp(c, (double)(ARC_D_R(c, 0)), (double)(ARC_D_R(c, 2)));
  /* 1c4e3c: b.pl #0x1c4e94 */
  if (ARC_COND(c, 5)) goto L_1c4e94;
  /* 1c4e40: mov w8, #0x4f3 */
  ARC_W_W(c, 8, UINT64_C(1267));
  /* 1c4e44: movi d0, #0000000000000000 */
  arc_v_clear(c, 0);
  /* 1c4e48: movk w8, #0x3f35, lsl #16 */
  ARC_W_W(c, 8, ((ARC_W_R(c, 8) & UINT64_C(18446744069414649855)) | UINT64_C(1060438016)));
  /* 1c4e4c: fmov s1, w8 */
  arc_su_w(c, 1, (uint32_t)(ARC_W_R(c, 8)));
  /* 1c4e50: fmov s2, s1 */
  arc_su_w(c, 2, (uint32_t)(ARC_SU_R(c, 1)));
  /* 1c4e54: b #0x1c4eb0 */
  goto L_1c4eb0;
L_1c4e58:;
  /* 1c4e58: fcvt d1, s0 */
  arc_d_w(c, 1, (double)(ARC_S_R(c, 0)));
  /* 1c4e5c: adrp x8, #0x37000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(225280)));
  /* 1c4e60: ldr d2, [x8, #0x748] */
  arc_du_w(c, 2, arc_ld64((ARC_X_R(c, 8) + INT64_C(1864))));
  /* 1c4e64: fcmp d1, d2 */
  arc_fcmp(c, (double)(ARC_D_R(c, 1)), (double)(ARC_D_R(c, 2)));
  /* 1c4e68: b.pl #0x1c4ea4 */
  if (ARC_COND(c, 5)) goto L_1c4ea4;
  /* 1c4e6c: mov w8, #0x4f3 */
  ARC_W_W(c, 8, UINT64_C(1267));
  /* 1c4e70: movi d1, #0000000000000000 */
  arc_v_clear(c, 1);
  /* 1c4e74: movk w8, #0x3f35, lsl #16 */
  ARC_W_W(c, 8, ((ARC_W_R(c, 8) & UINT64_C(18446744069414649855)) | UINT64_C(1060438016)));
  /* 1c4e78: fmov s0, w8 */
  arc_su_w(c, 0, (uint32_t)(ARC_W_R(c, 8)));
  /* 1c4e7c: fmov s2, s0 */
  arc_su_w(c, 2, (uint32_t)(ARC_SU_R(c, 0)));
  /* 1c4e80: b #0x1c4eb0 */
  goto L_1c4eb0;
L_1c4e84:;
  /* 1c4e84: fsqrt s2, s7 */
  arc_s_w(c, 2, (float)(arc_fsqrt32(ARC_S_R(c, 7))));
  /* 1c4e88: fdiv s0, s1, s2 */
  arc_s_w(c, 0, (float)(arc_fdiv32(ARC_S_R(c, 1), ARC_S_R(c, 2))));
  /* 1c4e8c: fdiv s1, s3, s2 */
  arc_s_w(c, 1, (float)(arc_fdiv32(ARC_S_R(c, 3), ARC_S_R(c, 2))));
  /* 1c4e90: b #0x1c4eb0 */
  goto L_1c4eb0;
L_1c4e94:;
  /* 1c4e94: fsqrt s0, s6 */
  arc_s_w(c, 0, (float)(arc_fsqrt32(ARC_S_R(c, 6))));
  /* 1c4e98: fdiv s2, s1, s0 */
  arc_s_w(c, 2, (float)(arc_fdiv32(ARC_S_R(c, 1), ARC_S_R(c, 0))));
  /* 1c4e9c: fdiv s1, s4, s0 */
  arc_s_w(c, 1, (float)(arc_fdiv32(ARC_S_R(c, 4), ARC_S_R(c, 0))));
  /* 1c4ea0: b #0x1c4eb0 */
  goto L_1c4eb0;
L_1c4ea4:;
  /* 1c4ea4: fsqrt s1, s0 */
  arc_s_w(c, 1, (float)(arc_fsqrt32(ARC_S_R(c, 0))));
  /* 1c4ea8: fdiv s2, s3, s1 */
  arc_s_w(c, 2, (float)(arc_fdiv32(ARC_S_R(c, 3), ARC_S_R(c, 1))));
  /* 1c4eac: fdiv s0, s4, s1 */
  arc_s_w(c, 0, (float)(arc_fdiv32(ARC_S_R(c, 4), ARC_S_R(c, 1))));
L_1c4eb0:;
  /* 1c4eb0: mov w8, #0xfdb */
  ARC_W_W(c, 8, UINT64_C(4059));
  /* 1c4eb4: stp s2, s0, [x1] */
  { const uint64_t _pa = ARC_X_R(c, 1);
    arc_st32(_pa, (c)->q[2].u32[0]);
    arc_st32((_pa + 4), (c)->q[0].u32[0]);
  }
  /* 1c4eb8: movk w8, #0x4049, lsl #16 */
  ARC_W_W(c, 8, ((ARC_W_R(c, 8) & UINT64_C(18446744069414649855)) | UINT64_C(1078525952)));
  /* 1c4ebc: str s1, [x1, #8] */
  arc_st32((ARC_X_R(c, 1) + INT64_C(8)), (c)->q[1].u32[0]);
  /* 1c4ec0: fmov s0, w8 */
  arc_su_w(c, 0, (uint32_t)(ARC_W_R(c, 8)));
  /* 1c4ec4: str s0, [x19] */
  arc_st32(ARC_X_R(c, 19), (c)->q[0].u32[0]);
  /* 1c4ec8: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1c4ecc: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1c4ed0: ret  */
  return;
}

void fn2_1c6a50(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077718096));
  /* 1c6a50: stp d11, d10, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, (c)->q[11].u64[0]);
    arc_st64((_pa + 8), (c)->q[10].u64[0]);
  }
  /* 1c6a54: stp d9, d8, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, (c)->q[9].u64[0]);
    arc_st64((_pa + 8), (c)->q[8].u64[0]);
  }
  /* 1c6a58: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1c6a5c: str x19, [sp, #0x30] */
  arc_st64(((c)->sp + INT64_C(48)), ARC_X_R(c, 19));
  /* 1c6a60: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 1c6a64: ldp s1, s2, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_su_w(c, 1, arc_ld32(_pa));
    arc_su_w(c, 2, arc_ld32((_pa + 4)));
  }
  /* 1c6a68: movi d8, #0000000000000000 */
  arc_v_clear(c, 8);
  /* 1c6a6c: ldr s3, [x0, #8] */
  arc_su_w(c, 3, arc_ld32((ARC_X_R(c, 0) + INT64_C(8))));
  /* 1c6a70: movi d9, #0000000000000000 */
  arc_v_clear(c, 9);
  /* 1c6a74: movi d10, #0000000000000000 */
  arc_v_clear(c, 10);
  /* 1c6a78: fmul s0, s1, s1 */
  arc_s_w(c, 0, (float)(arc_fmul32(ARC_S_R(c, 1), ARC_S_R(c, 1))));
  /* 1c6a7c: fmul s4, s2, s2 */
  arc_s_w(c, 4, (float)(arc_fmul32(ARC_S_R(c, 2), ARC_S_R(c, 2))));
  /* 1c6a80: fmul s5, s3, s3 */
  arc_s_w(c, 5, (float)(arc_fmul32(ARC_S_R(c, 3), ARC_S_R(c, 3))));
  /* 1c6a84: fadd s0, s0, s4 */
  arc_s_w(c, 0, (float)(arc_fadd32(ARC_S_R(c, 0), ARC_S_R(c, 4))));
  /* 1c6a88: fadd s4, s0, s5 */
  arc_s_w(c, 4, (float)(arc_fadd32(ARC_S_R(c, 0), ARC_S_R(c, 5))));
  /* 1c6a8c: fsqrt s0, s4 */
  arc_s_w(c, 0, (float)(arc_fsqrt32(ARC_S_R(c, 4))));
  /* 1c6a90: fcmp s4, #0.0 */
  arc_fcmp(c, (double)(ARC_S_R(c, 4)), (double)(0.0));
  /* 1c6a94: b.ne #0x1c6ab0 */
  if (ARC_COND(c, 1)) goto L_1c6ab0;
  /* 1c6a98: fcvt d1, s0 */
  arc_d_w(c, 1, (double)(ARC_S_R(c, 0)));
  /* 1c6a9c: adrp x9, #0x37000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(225280)));
  /* 1c6aa0: ldr d2, [x9, #0x748] */
  arc_du_w(c, 2, arc_ld64((ARC_X_R(c, 9) + INT64_C(1864))));
  /* 1c6aa4: fcmp d1, d2 */
  arc_fcmp(c, (double)(ARC_D_R(c, 1)), (double)(ARC_D_R(c, 2)));
  /* 1c6aa8: b.pl #0x1c6ad0 */
  if (ARC_COND(c, 5)) goto L_1c6ad0;
  /* 1c6aac: b #0x1c6b10 */
  goto L_1c6b10;
L_1c6ab0:;
  /* 1c6ab0: fdiv s8, s1, s0 */
  arc_s_w(c, 8, (float)(arc_fdiv32(ARC_S_R(c, 1), ARC_S_R(c, 0))));
  /* 1c6ab4: fdiv s9, s2, s0 */
  arc_s_w(c, 9, (float)(arc_fdiv32(ARC_S_R(c, 2), ARC_S_R(c, 0))));
  /* 1c6ab8: fdiv s10, s3, s0 */
  arc_s_w(c, 10, (float)(arc_fdiv32(ARC_S_R(c, 3), ARC_S_R(c, 0))));
  /* 1c6abc: fcvt d1, s0 */
  arc_d_w(c, 1, (double)(ARC_S_R(c, 0)));
  /* 1c6ac0: adrp x9, #0x37000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(225280)));
  /* 1c6ac4: ldr d2, [x9, #0x748] */
  arc_du_w(c, 2, arc_ld64((ARC_X_R(c, 9) + INT64_C(1864))));
  /* 1c6ac8: fcmp d1, d2 */
  arc_fcmp(c, (double)(ARC_D_R(c, 1)), (double)(ARC_D_R(c, 2)));
  /* 1c6acc: b.mi #0x1c6b10 */
  if (ARC_COND(c, 4)) goto L_1c6b10;
L_1c6ad0:;
  /* 1c6ad0: fmul s1, s8, s8 */
  arc_s_w(c, 1, (float)(arc_fmul32(ARC_S_R(c, 8), ARC_S_R(c, 8))));
  /* 1c6ad4: fmul s2, s9, s9 */
  arc_s_w(c, 2, (float)(arc_fmul32(ARC_S_R(c, 9), ARC_S_R(c, 9))));
  /* 1c6ad8: fmul s3, s10, s10 */
  arc_s_w(c, 3, (float)(arc_fmul32(ARC_S_R(c, 10), ARC_S_R(c, 10))));
  /* 1c6adc: fadd s1, s1, s2 */
  arc_s_w(c, 1, (float)(arc_fadd32(ARC_S_R(c, 1), ARC_S_R(c, 2))));
  /* 1c6ae0: fmov s2, #1.00000000 */
  arc_s_w(c, 2, (float)(1.0));
  /* 1c6ae4: fadd s1, s1, s3 */
  arc_s_w(c, 1, (float)(arc_fadd32(ARC_S_R(c, 1), ARC_S_R(c, 3))));
  /* 1c6ae8: fcmp s1, s2 */
  arc_fcmp(c, (double)(ARC_S_R(c, 1)), (double)(ARC_S_R(c, 2)));
  /* 1c6aec: b.eq #0x1c6b30 */
  if (ARC_COND(c, 0)) goto L_1c6b30;
  /* 1c6af0: fmov s2, #-1.00000000 */
  arc_s_w(c, 2, (float)(-1.0));
  /* 1c6af4: mov w9, #0x126f */
  ARC_W_W(c, 9, UINT64_C(4719));
  /* 1c6af8: movk w9, #0x3a83, lsl #16 */
  ARC_W_W(c, 9, ((ARC_W_R(c, 9) & UINT64_C(18446744069414649855)) | UINT64_C(981663744)));
  /* 1c6afc: fmov s3, w9 */
  arc_su_w(c, 3, (uint32_t)(ARC_W_R(c, 9)));
  /* 1c6b00: fadd s2, s1, s2 */
  arc_s_w(c, 2, (float)(arc_fadd32(ARC_S_R(c, 1), ARC_S_R(c, 2))));
  /* 1c6b04: fabs s2, s2 */
  arc_s_w(c, 2, (float)(fabsf(ARC_S_R(c, 2))));
  /* 1c6b08: fcmp s2, s3 */
  arc_fcmp(c, (double)(ARC_S_R(c, 2)), (double)(ARC_S_R(c, 3)));
  /* 1c6b0c: b.mi #0x1c6b30 */
  if (ARC_COND(c, 4)) goto L_1c6b30;
L_1c6b10:;
  /* 1c6b10: adrp x9, #0x37000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(225280)));
  /* 1c6b14: ldr q0, [x9, #0xa20] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 9) + INT64_C(2592))), arc_ld64((ARC_X_R(c, 9) + INT64_C(2592)) + 8));
  /* 1c6b18: str q0, [x8] */
  arc_st64(ARC_X_R(c, 8), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 8) + 8, (c)->q[0].u64[1]);
  /* 1c6b1c: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1c6b20: ldr x19, [sp, #0x30] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(48))));
  /* 1c6b24: ldp d9, d8, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_du_w(c, 9, arc_ld64(_pa));
    arc_du_w(c, 8, arc_ld64((_pa + 8)));
  }
  /* 1c6b28: ldp d11, d10, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    arc_du_w(c, 11, arc_ld64(_pa));
    arc_du_w(c, 10, arc_ld64((_pa + 8)));
  }
  /* 1c6b2c: ret  */
  return;
L_1c6b30:;
  /* 1c6b30: fsqrt s11, s1 */
  arc_s_w(c, 11, (float)(arc_fsqrt32(ARC_S_R(c, 1))));
  /* 1c6b34: movi d1, #0000000000000000 */
  arc_v_clear(c, 1);
  /* 1c6b38: movi d2, #0000000000000000 */
  arc_v_clear(c, 2);
  /* 1c6b3c: movi d3, #0000000000000000 */
  arc_v_clear(c, 3);
  /* 1c6b40: str wzr, [x8] */
  arc_st32(ARC_X_R(c, 8), ARC_W_R(c, 31));
  /* 1c6b44: fcmp s11, #0.0 */
  arc_fcmp(c, (double)(ARC_S_R(c, 11)), (double)(0.0));
  /* 1c6b48: b.eq #0x1c6b80 */
  if (ARC_COND(c, 0)) goto L_1c6b80;
  /* 1c6b4c: fmov s1, #0.50000000 */
  arc_s_w(c, 1, (float)(0.5));
  /* 1c6b50: add x0, x29, #0x1c */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(28)));
  /* 1c6b54: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1c6b58: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* 1c6b5c: fmul s0, s0, s1 */
  arc_s_w(c, 0, (float)(arc_fmul32(ARC_S_R(c, 0), ARC_S_R(c, 1))));
  /* 1c6b60: bl #0x24b8f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1862500));
  fn2_24b8f0(c);
  /* 1c6b64: ldp s3, s0, [x29, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(24));
    arc_su_w(c, 3, arc_ld32(_pa));
    arc_su_w(c, 0, arc_ld32((_pa + 4)));
  }
  /* 1c6b68: mov x8, x19 */
  ARC_X_W(c, 8, ARC_X_R(c, 19));
  /* 1c6b6c: fdiv s0, s0, s11 */
  arc_s_w(c, 0, (float)(arc_fdiv32(ARC_S_R(c, 0), ARC_S_R(c, 11))));
  /* 1c6b70: fmul s4, s8, s0 */
  arc_s_w(c, 4, (float)(arc_fmul32(ARC_S_R(c, 8), ARC_S_R(c, 0))));
  /* 1c6b74: fmul s1, s9, s0 */
  arc_s_w(c, 1, (float)(arc_fmul32(ARC_S_R(c, 9), ARC_S_R(c, 0))));
  /* 1c6b78: fmul s2, s10, s0 */
  arc_s_w(c, 2, (float)(arc_fmul32(ARC_S_R(c, 10), ARC_S_R(c, 0))));
  /* 1c6b7c: str s4, [x19] */
  arc_st32(ARC_X_R(c, 19), (c)->q[4].u32[0]);
L_1c6b80:;
  /* 1c6b80: stp s1, s2, [x8, #4] */
  { const uint64_t _pa = (ARC_X_R(c, 8) + INT64_C(4));
    arc_st32(_pa, (c)->q[1].u32[0]);
    arc_st32((_pa + 4), (c)->q[2].u32[0]);
  }
  /* 1c6b84: str s3, [x8, #0xc] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(12)), (c)->q[3].u32[0]);
  /* 1c6b88: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1c6b8c: ldr x19, [sp, #0x30] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(48))));
  /* 1c6b90: ldp d9, d8, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_du_w(c, 9, arc_ld64(_pa));
    arc_du_w(c, 8, arc_ld64((_pa + 8)));
  }
  /* 1c6b94: ldp d11, d10, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    arc_du_w(c, 11, arc_ld64(_pa));
    arc_du_w(c, 10, arc_ld64((_pa + 8)));
  }
  /* 1c6b98: ret  */
  return;
}

void fn2_1c98c4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077729988));
  /* 1c98c4: ldr s0, [x0] */
  arc_su_w(c, 0, arc_ld32(ARC_X_R(c, 0)));
  /* 1c98c8: mov w8, #0xc5ac */
  ARC_W_W(c, 8, UINT64_C(50604));
  /* 1c98cc: movk w8, #0x3727, lsl #16 */
  ARC_W_W(c, 8, ((ARC_W_R(c, 8) & UINT64_C(18446744069414649855)) | UINT64_C(925302784)));
  /* 1c98d0: fabs s0, s0 */
  arc_s_w(c, 0, (float)(fabsf(ARC_S_R(c, 0))));
  /* 1c98d4: fmov s1, w8 */
  arc_su_w(c, 1, (uint32_t)(ARC_W_R(c, 8)));
  /* 1c98d8: fcmp s0, s1 */
  arc_fcmp(c, (double)(ARC_S_R(c, 0)), (double)(ARC_S_R(c, 1)));
  /* 1c98dc: b.pl #0x1c9920 */
  if (ARC_COND(c, 5)) goto L_1c9920;
  /* 1c98e0: ldr s0, [x0, #4] */
  arc_su_w(c, 0, arc_ld32((ARC_X_R(c, 0) + INT64_C(4))));
  /* 1c98e4: fmov s1, w8 */
  arc_su_w(c, 1, (uint32_t)(ARC_W_R(c, 8)));
  /* 1c98e8: fabs s0, s0 */
  arc_s_w(c, 0, (float)(fabsf(ARC_S_R(c, 0))));
  /* 1c98ec: fcmp s0, s1 */
  arc_fcmp(c, (double)(ARC_S_R(c, 0)), (double)(ARC_S_R(c, 1)));
  /* 1c98f0: b.pl #0x1c9920 */
  if (ARC_COND(c, 5)) goto L_1c9920;
  /* 1c98f4: ldr s0, [x0, #8] */
  arc_su_w(c, 0, arc_ld32((ARC_X_R(c, 0) + INT64_C(8))));
  /* 1c98f8: fmov s1, w8 */
  arc_su_w(c, 1, (uint32_t)(ARC_W_R(c, 8)));
  /* 1c98fc: fabs s0, s0 */
  arc_s_w(c, 0, (float)(fabsf(ARC_S_R(c, 0))));
  /* 1c9900: fcmp s0, s1 */
  arc_fcmp(c, (double)(ARC_S_R(c, 0)), (double)(ARC_S_R(c, 1)));
  /* 1c9904: b.pl #0x1c9920 */
  if (ARC_COND(c, 5)) goto L_1c9920;
  /* 1c9908: ldr s0, [x0, #0xc] */
  arc_su_w(c, 0, arc_ld32((ARC_X_R(c, 0) + INT64_C(12))));
  /* 1c990c: fmov s1, w8 */
  arc_su_w(c, 1, (uint32_t)(ARC_W_R(c, 8)));
  /* 1c9910: fabs s0, s0 */
  arc_s_w(c, 0, (float)(fabsf(ARC_S_R(c, 0))));
  /* 1c9914: fcmp s0, s1 */
  arc_fcmp(c, (double)(ARC_S_R(c, 0)), (double)(ARC_S_R(c, 1)));
  /* 1c9918: cset w0, mi */
  ARC_W_W(c, 0, (ARC_COND(c, 4) ? 1 : 0));
  /* 1c991c: ret  */
  return;
L_1c9920:;
  /* 1c9920: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 1c9924: ret  */
  return;
}

void fn2_1ccc88(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077743240));
  /* 1ccc88: sub sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(32)));
  /* 1ccc8c: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1ccc90: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1ccc94: adrp x8, #0x25d000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 1ccc98: str xzr, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 31));
  /* 1ccc9c: ldr x8, [x8, #0xe48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3656))));
  /* 1ccca0: str x1, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 1));
  /* 1ccca4: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 1ccca8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1887404));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1cccac: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1cccb0: add sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(32)));
  /* 1cccb4: ret  */
  return;
}

void fn2_1cd550(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077745488));
  /* 1cd550: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* 1cd554: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1cd558: str x23, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 23));
  /* 1cd55c: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1cd560: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1cd564: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1cd568: mov x22, x8 */
  ARC_X_W(c, 22, ARC_X_R(c, 8));
  /* 1cd56c: adrp x8, #0x25d000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 1cd570: add x8, x8, #0xe40 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3648)));
  /* 1cd574: ldr x23, [x8, #0x100] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 8) + INT64_C(256))));
  /* 1cd578: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 1cd57c: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 1cd580: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 1cd584: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 1cd588: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 1cd58c: mov x19, x2 */
  ARC_X_W(c, 19, ARC_X_R(c, 2));
  /* 1cd590: str xzr, [x22] */
  arc_st64(ARC_X_R(c, 22), ARC_X_R(c, 31));
  /* 1cd594: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1889688));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1cd598: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 1cd59c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 1cd5a0: mov x2, x22 */
  ARC_X_W(c, 2, ARC_X_R(c, 22));
  /* 1cd5a4: mov w3, #2 */
  ARC_W_W(c, 3, UINT64_C(2));
  /* 1cd5a8: stp x20, x19, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1cd5ac: blr x23 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1889712));
  arc_dispatch(c, ARC_X_R(c, 23));
  /* 1cd5b0: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1cd5b4: ldr x23, [sp, #0x20] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(32))));
  /* 1cd5b8: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1cd5bc: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1cd5c0: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* 1cd5c4: ret  */
  return;
}

void fn2_1ce260(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077748832));
  /* 1ce260: sub sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(32)));
  /* 1ce264: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1ce268: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1ce26c: adrp x8, #0x25e000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2482176)));
  /* 1ce270: add x2, sp, #8 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(8)));
  /* 1ce274: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 1ce278: ldr x8, [x8, #0x40] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(64))));
  /* 1ce27c: mov w3, wzr */
  ARC_W_W(c, 3, ARC_W_R(c, 31));
  /* 1ce280: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1892996));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1ce284: ldr x0, [sp, #8] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(8))));
  /* 1ce288: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1ce28c: add sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(32)));
  /* 1ce290: ret  */
  return;
}

void fn2_1cec78(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077751416));
  /* 1cec78: sub sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(32)));
  /* 1cec7c: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1cec80: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1cec84: adrp x8, #0x25e000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2482176)));
  /* 1cec88: sub x2, x29, #4 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(4)));
  /* 1cec8c: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 1cec90: ldr x8, [x8, #0x140] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(320))));
  /* 1cec94: mov w3, wzr */
  ARC_W_W(c, 3, ARC_W_R(c, 31));
  /* 1cec98: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1895580));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1cec9c: ldurb w8, [x29, #-4] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-4))));
  /* 1ceca0: cmp w8, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(0));
  /* 1ceca4: cset w0, ne */
  ARC_W_W(c, 0, (ARC_COND(c, 1) ? 1 : 0));
  /* 1ceca8: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1cecac: add sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(32)));
  /* 1cecb0: ret  */
  return;
}

void fn2_1cf730(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077754160));
  /* 1cf730: sub sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(32)));
  /* 1cf734: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1cf738: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1cf73c: adrp x8, #0x25e000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2482176)));
  /* 1cf740: sub x2, x29, #4 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(4)));
  /* 1cf744: ldr x8, [x8, #0x250] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(592))));
  /* 1cf748: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1898316));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1cf74c: ldurb w8, [x29, #-4] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-4))));
  /* 1cf750: cmp w8, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(0));
  /* 1cf754: cset w0, ne */
  ARC_W_W(c, 0, (ARC_COND(c, 1) ? 1 : 0));
  /* 1cf758: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1cf75c: add sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(32)));
  /* 1cf760: ret  */
  return;
}

void fn2_1d01d8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077756888));
  /* 1d01d8: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1d01dc: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 1d01e0: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1d01e4: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1d01e8: mov x21, x8 */
  ARC_X_W(c, 21, ARC_X_R(c, 8));
  /* 1d01ec: adrp x8, #0x25d000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 1d01f0: add x8, x8, #0xe40 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3648)));
  /* 1d01f4: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 1d01f8: ldr x0, [x8, #0x528] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(1320))));
  /* 1d01fc: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 1d0200: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 1d0204: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 1d0208: str xzr, [x21] */
  arc_st64(ARC_X_R(c, 21), ARC_X_R(c, 31));
  /* 1d020c: str x0, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 0));
  /* 1d0210: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 1d0214: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1901080));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1d0218: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1d021c: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 1d0220: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* 1d0224: ldr x3, [x29, #0x18] */
  ARC_X_W(c, 3, arc_ld64((ARC_X_R(c, 29) + INT64_C(24))));
  /* 1d0228: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1d022c: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1d0230: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1d0234: br x3 */
  arc_dispatch(c, ARC_X_R(c, 3)); return;
}

void fn2_1d2f1c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077768476));
  /* 1d2f1c: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* 1d2f20: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1d2f24: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1d2f28: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1d2f2c: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 1d2f30: mov x21, x8 */
  ARC_X_W(c, 21, ARC_X_R(c, 8));
  /* 1d2f34: adrp x8, #0x25e000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2482176)));
  /* 1d2f38: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 1d2f3c: ldr x22, [x8, #0x450] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 8) + INT64_C(1104))));
  /* 1d2f40: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 1d2f44: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 1d2f48: str x2, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 2));
  /* 1d2f4c: bl #0x1ccc74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1912656));
  fn2_1ccc74(c);
  /* 1d2f50: add x8, sp, #8 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(8)));
  /* 1d2f54: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* 1d2f58: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1d2f5c: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* 1d2f60: mov w3, #2 */
  ARC_W_W(c, 3, UINT64_C(2));
  /* 1d2f64: stp x19, x8, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 19));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* 1d2f68: blr x22 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1912684));
  arc_dispatch(c, ARC_X_R(c, 22));
  /* 1d2f6c: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1d2f70: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1d2f74: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1d2f78: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* 1d2f7c: ret  */
  return;
}

void fn2_1d3934(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077771060));
  /* 1d3934: sub sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(48)));
  /* 1d3938: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1d393c: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1d3940: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1d3944: adrp x9, #0x25e000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2482176)));
  /* 1d3948: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1d394c: mov x20, x8 */
  ARC_X_W(c, 20, ARC_X_R(c, 8));
  /* 1d3950: ldr x0, [x9, #0x550] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 9) + INT64_C(1360))));
  /* 1d3954: str x0, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 0));
  /* 1d3958: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1d395c: bl #0x1ccc74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1915232));
  fn2_1ccc74(c);
  /* 1d3960: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1d3964: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 1d3968: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* 1d396c: mov w3, wzr */
  ARC_W_W(c, 3, ARC_W_R(c, 31));
  /* 1d3970: ldr x4, [sp, #8] */
  ARC_X_W(c, 4, arc_ld64(((c)->sp + INT64_C(8))));
  /* 1d3974: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1d3978: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1d397c: add sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(48)));
  /* 1d3980: br x4 */
  arc_dispatch(c, ARC_X_R(c, 4)); return;
}

void fn2_1d438c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077773708));
  /* 1d438c: sub sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(48)));
  /* 1d4390: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1d4394: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1d4398: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1d439c: adrp x9, #0x25e000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2482176)));
  /* 1d43a0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1d43a4: mov x20, x8 */
  ARC_X_W(c, 20, ARC_X_R(c, 8));
  /* 1d43a8: ldr x0, [x9, #0x650] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 9) + INT64_C(1616))));
  /* 1d43ac: str x0, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 0));
  /* 1d43b0: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1d43b4: bl #0x1ccc74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1917880));
  fn2_1ccc74(c);
  /* 1d43b8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1d43bc: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 1d43c0: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* 1d43c4: mov w3, wzr */
  ARC_W_W(c, 3, ARC_W_R(c, 31));
  /* 1d43c8: ldr x4, [sp, #8] */
  ARC_X_W(c, 4, arc_ld64(((c)->sp + INT64_C(8))));
  /* 1d43cc: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1d43d0: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1d43d4: add sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(48)));
  /* 1d43d8: br x4 */
  arc_dispatch(c, ARC_X_R(c, 4)); return;
}

void fn2_1d4ce4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077776100));
  /* 1d4ce4: sub sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(48)));
  /* 1d4ce8: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1d4cec: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1d4cf0: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1d4cf4: adrp x9, #0x25e000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2482176)));
  /* 1d4cf8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1d4cfc: mov x20, x8 */
  ARC_X_W(c, 20, ARC_X_R(c, 8));
  /* 1d4d00: ldr x0, [x9, #0x750] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 9) + INT64_C(1872))));
  /* 1d4d04: str x0, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 0));
  /* 1d4d08: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1d4d0c: bl #0x1ddc90 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1920272));
  fn2_1ddc90(c);
  /* 1d4d10: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1d4d14: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 1d4d18: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* 1d4d1c: mov w3, wzr */
  ARC_W_W(c, 3, ARC_W_R(c, 31));
  /* 1d4d20: ldr x4, [sp, #8] */
  ARC_X_W(c, 4, arc_ld64(((c)->sp + INT64_C(8))));
  /* 1d4d24: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1d4d28: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1d4d2c: add sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(48)));
  /* 1d4d30: br x4 */
  arc_dispatch(c, ARC_X_R(c, 4)); return;
}

void fn2_1d5640(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077778496));
  /* 1d5640: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1d5644: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 1d5648: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1d564c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1d5650: adrp x9, #0x25e000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2482176)));
  /* 1d5654: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 1d5658: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 1d565c: ldr x0, [x9, #0x858] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 9) + INT64_C(2136))));
  /* 1d5660: mov x21, x8 */
  ARC_X_W(c, 21, ARC_X_R(c, 8));
  /* 1d5664: str x0, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 0));
  /* 1d5668: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1d566c: bl #0x1ccc74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1922672));
  fn2_1ccc74(c);
  /* 1d5670: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1d5674: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 1d5678: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* 1d567c: ldr x3, [x29, #0x18] */
  ARC_X_W(c, 3, arc_ld64((ARC_X_R(c, 29) + INT64_C(24))));
  /* 1d5680: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1d5684: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1d5688: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1d568c: br x3 */
  arc_dispatch(c, ARC_X_R(c, 3)); return;
}

void fn2_1d6464(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077782116));
  /* 1d6464: sub sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(32)));
  /* 1d6468: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1d646c: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1d6470: adrp x8, #0x25e000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2482176)));
  /* 1d6474: str xzr, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 31));
  /* 1d6478: ldr x8, [x8, #0x960] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2400))));
  /* 1d647c: str x1, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 1));
  /* 1d6480: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 1d6484: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1926280));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1d6488: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1d648c: add sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(32)));
  /* 1d6490: ret  */
  return;
}

void fn2_1d6eb4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077784756));
  /* 1d6eb4: sub sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(32)));
  /* 1d6eb8: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1d6ebc: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1d6ec0: adrp x8, #0x25e000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2482176)));
  /* 1d6ec4: sub x2, x29, #4 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(4)));
  /* 1d6ec8: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 1d6ecc: ldr x8, [x8, #0xa40] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2624))));
  /* 1d6ed0: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1928916));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1d6ed4: ldurb w8, [x29, #-4] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-4))));
  /* 1d6ed8: cmp w8, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(0));
  /* 1d6edc: cset w0, ne */
  ARC_W_W(c, 0, (ARC_COND(c, 1) ? 1 : 0));
  /* 1d6ee0: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1d6ee4: add sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(32)));
  /* 1d6ee8: ret  */
  return;
}

void fn2_1d7e10(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077788688));
  /* 1d7e10: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 1d7e14: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1d7e18: str x21, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 21));
  /* 1d7e1c: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1d7e20: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1d7e24: mov x20, x8 */
  ARC_X_W(c, 20, ARC_X_R(c, 8));
  /* 1d7e28: adrp x8, #0x25e000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2482176)));
  /* 1d7e2c: add x8, x8, #0xa90 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2704)));
  /* 1d7e30: ldr x21, [x8, #0x98] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 8) + INT64_C(152))));
  /* 1d7e34: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 1d7e38: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1d7e3c: str x1, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 1));
  /* 1d7e40: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1d7e44: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 1d7e48: stp xzr, xzr, [x20] */
  { const uint64_t _pa = ARC_X_R(c, 20);
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 1d7e4c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1932880));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1d7e50: add x8, sp, #8 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(8)));
  /* 1d7e54: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1d7e58: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1d7e5c: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* 1d7e60: mov w3, #1 */
  ARC_W_W(c, 3, UINT64_C(1));
  /* 1d7e64: str x8, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 8));
  /* 1d7e68: blr x21 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1932908));
  arc_dispatch(c, ARC_X_R(c, 21));
  /* 1d7e6c: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1d7e70: ldr x21, [sp, #0x20] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(32))));
  /* 1d7e74: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1d7e78: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 1d7e7c: ret  */
  return;
}

void fn2_1d8bb8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077792184));
  /* 1d8bb8: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1d8bbc: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1d8bc0: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1d8bc4: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1d8bc8: mov w0, #0x1b */
  ARC_W_W(c, 0, UINT64_C(27));
  /* 1d8bcc: ldr x8, [x8, #0x7a8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(1960))));
  /* 1d8bd0: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 1d8bd4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1936344));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1d8bd8: adrp x19, #0x258000 */
  ARC_X_W(c, 19, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1d8bdc: nop  */
  /* nop: no architectural effect here */
  /* 1d8be0: adr x20, #0x25ec40 */
  ARC_X_W(c, 20, (arc_image_bases[2] + UINT64_C(2485312)));
  /* 1d8be4: ldr x19, [x19, #0x7c8] */
  ARC_X_W(c, 19, arc_ld64((ARC_X_R(c, 19) + INT64_C(1992))));
  /* 1d8be8: str x0, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 0));
  /* 1d8bec: mov w0, #0x1b */
  ARC_W_W(c, 0, UINT64_C(27));
  /* 1d8bf0: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* 1d8bf4: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 1d8bf8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1936380));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1d8bfc: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 1d8c00: str x0, [x20, #8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(8)), ARC_X_R(c, 0));
  /* 1d8c04: mov w0, #0x1b */
  ARC_W_W(c, 0, UINT64_C(27));
  /* 1d8c08: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* 1d8c0c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1936400));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1d8c10: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 1d8c14: str x0, [x20, #0x10] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(16)), ARC_X_R(c, 0));
  /* 1d8c18: mov w0, #0x1b */
  ARC_W_W(c, 0, UINT64_C(27));
  /* 1d8c1c: mov w1, #2 */
  ARC_W_W(c, 1, UINT64_C(2));
  /* 1d8c20: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1936420));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1d8c24: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1d8c28: ldr x8, [x8, #0x7d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2000))));
  /* 1d8c2c: str x0, [x20, #0x18] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(24)), ARC_X_R(c, 0));
  /* 1d8c30: mov w0, #0x1b */
  ARC_W_W(c, 0, UINT64_C(27));
  /* 1d8c34: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 1d8c38: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1936444));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1d8c3c: str x0, [x20, #0x20] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(32)), ARC_X_R(c, 0));
  /* 1d8c40: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1d8c44: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1d8c48: ret  */
  return;
}

void fn2_1d9ea0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077797024));
  /* 1d9ea0: sub sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(32)));
  /* 1d9ea4: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1d9ea8: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1d9eac: adrp x8, #0x25e000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2482176)));
  /* 1d9eb0: str x1, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 1));
  /* 1d9eb4: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 1d9eb8: ldr x8, [x8, #0xd28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3368))));
  /* 1d9ebc: sub x2, x29, #4 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(4)));
  /* 1d9ec0: mov w3, #1 */
  ARC_W_W(c, 3, UINT64_C(1));
  /* 1d9ec4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1941192));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1d9ec8: ldurb w8, [x29, #-4] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-4))));
  /* 1d9ecc: cmp w8, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(0));
  /* 1d9ed0: cset w0, ne */
  ARC_W_W(c, 0, (ARC_COND(c, 1) ? 1 : 0));
  /* 1d9ed4: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1d9ed8: add sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(32)));
  /* 1d9edc: ret  */
  return;
}

void fn2_1db6d4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077803220));
  /* 1db6d4: sub sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(32)));
  /* 1db6d8: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1db6dc: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1db6e0: adrp x8, #0x25e000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2482176)));
  /* 1db6e4: str xzr, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 31));
  /* 1db6e8: ldr x8, [x8, #0xe40] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3648))));
  /* 1db6ec: str x1, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 1));
  /* 1db6f0: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 1db6f4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1947384));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1db6f8: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1db6fc: add sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(32)));
  /* 1db700: ret  */
  return;
}

void fn2_1dbe8c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077805196));
  /* 1dbe8c: sub sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(32)));
  /* 1dbe90: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1dbe94: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1dbe98: adrp x8, #0x25e000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2482176)));
  /* 1dbe9c: str x1, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 1));
  /* 1dbea0: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 1dbea4: ldr x8, [x8, #0xf38] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3896))));
  /* 1dbea8: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 1dbeac: mov w3, #1 */
  ARC_W_W(c, 3, UINT64_C(1));
  /* 1dbeb0: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1949364));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1dbeb4: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1dbeb8: add sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(32)));
  /* 1dbebc: ret  */
  return;
}

void fn2_1dc718(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077807384));
  /* 1dc718: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1dc71c: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 1dc720: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1dc724: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1dc728: adrp x21, #0x25e000 */
  ARC_X_W(c, 21, (arc_image_bases[2] + UINT64_C(2482176)));
  /* 1dc72c: add x21, x21, #0xde8 */
  ARC_X_W(c, 21, (ARC_X_R(c, 21) + UINT64_C(3560)));
  /* 1dc730: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 1dc734: ldr x8, [x21, #0x60] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 21) + INT64_C(96))));
  /* 1dc738: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 1dc73c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1951552));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1dc740: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 1dc744: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1dc748: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1dc74c: str x19, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 19));
  /* 1dc750: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1951572));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1dc754: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1dc758: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1dc75c: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1dc760: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1dc764: ret  */
  return;
}

void fn2_1de360(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077814624));
  /* 1de360: sub sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(48)));
  /* 1de364: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1de368: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1de36c: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1de370: adrp x9, #0x25f000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2486272)));
  /* 1de374: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1de378: mov x20, x8 */
  ARC_X_W(c, 20, ARC_X_R(c, 8));
  /* 1de37c: ldr x0, [x9, #0x130] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 9) + INT64_C(304))));
  /* 1de380: str x0, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 0));
  /* 1de384: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1de388: bl #0x1ccc74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1958796));
  fn2_1ccc74(c);
  /* 1de38c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1de390: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 1de394: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* 1de398: mov w3, wzr */
  ARC_W_W(c, 3, ARC_W_R(c, 31));
  /* 1de39c: ldr x4, [sp, #8] */
  ARC_X_W(c, 4, arc_ld64(((c)->sp + INT64_C(8))));
  /* 1de3a0: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1de3a4: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1de3a8: add sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(48)));
  /* 1de3ac: br x4 */
  arc_dispatch(c, ARC_X_R(c, 4)); return;
}

void fn2_1ded10(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077817104));
  /* 1ded10: sub sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(48)));
  /* 1ded14: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1ded18: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 1ded1c: adrp x8, #0x25f000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2486272)));
  /* 1ded20: stp x2, x1, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 2));
    arc_st64(_pa + 8, ARC_X_R(c, 1));
  }
  /* 1ded24: add x9, sp, #8 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(8)));
  /* 1ded28: ldr x8, [x8, #0x230] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(560))));
  /* 1ded2c: mov x10, sp */
  ARC_X_W(c, 10, (c)->sp);
  /* 1ded30: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* 1ded34: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 1ded38: mov w3, #2 */
  ARC_W_W(c, 3, UINT64_C(2));
  /* 1ded3c: stp x9, x10, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 10));
  }
  /* 1ded40: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1961284));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1ded44: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1ded48: add sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(48)));
  /* 1ded4c: ret  */
  return;
}

void fn2_1dfdcc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077821388));
  /* 1dfdcc: sub sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(48)));
  /* 1dfdd0: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1dfdd4: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 1dfdd8: adrp x8, #0x25f000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2486272)));
  /* 1dfddc: stp x2, x1, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 2));
    arc_st64(_pa + 8, ARC_X_R(c, 1));
  }
  /* 1dfde0: add x9, sp, #8 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(8)));
  /* 1dfde4: ldr x8, [x8, #0x328] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(808))));
  /* 1dfde8: mov x10, sp */
  ARC_X_W(c, 10, (c)->sp);
  /* 1dfdec: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* 1dfdf0: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 1dfdf4: mov w3, #2 */
  ARC_W_W(c, 3, UINT64_C(2));
  /* 1dfdf8: stp x9, x10, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 10));
  }
  /* 1dfdfc: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1965568));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1dfe00: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1dfe04: add sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(48)));
  /* 1dfe08: ret  */
  return;
}

void fn2_1e0e44(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077825604));
  /* 1e0e44: adrp x8, #0x25f000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2486272)));
  /* 1e0e48: stp xzr, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 1e0e4c: ldr x2, [x8, #0x428] */
  ARC_X_W(c, 2, arc_ld64((ARC_X_R(c, 8) + INT64_C(1064))));
  /* 1e0e50: br x2 */
  arc_dispatch(c, ARC_X_R(c, 2)); return;
}

void fn2_1e1614(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077827604));
  /* 1e1614: sub sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(32)));
  /* 1e1618: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1e161c: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1e1620: adrp x8, #0x25f000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2486272)));
  /* 1e1624: sub x2, x29, #4 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(4)));
  /* 1e1628: ldr x8, [x8, #0x540] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(1344))));
  /* 1e162c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1971760));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1e1630: ldurb w8, [x29, #-4] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-4))));
  /* 1e1634: cmp w8, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(0));
  /* 1e1638: cset w0, ne */
  ARC_W_W(c, 0, (ARC_COND(c, 1) ? 1 : 0));
  /* 1e163c: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1e1640: add sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(32)));
  /* 1e1644: ret  */
  return;
}

void fn2_1e26cc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077831884));
  /* 1e26cc: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 1e26d0: stp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1e26d4: add x29, sp, #0x30 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(48)));
  /* 1e26d8: adrp x8, #0x25f000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2486272)));
  /* 1e26dc: str x1, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 1));
  /* 1e26e0: add x9, sp, #0x10 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(16)));
  /* 1e26e4: ldr x8, [x8, #0x618] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(1560))));
  /* 1e26e8: add x10, sp, #8 */
  ARC_X_W(c, 10, ((c)->sp + UINT64_C(8)));
  /* 1e26ec: add x1, sp, #0x18 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(24)));
  /* 1e26f0: sub x2, x29, #8 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 1e26f4: mov w3, #2 */
  ARC_W_W(c, 3, UINT64_C(2));
  /* 1e26f8: str d0, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), (c)->q[0].u64[0]);
  /* 1e26fc: stp x9, x10, [sp, #0x18] */
  { const uint64_t _pa = ((c)->sp + INT64_C(24));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 10));
  }
  /* 1e2700: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1976068));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1e2704: ldur x0, [x29, #-8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-8))));
  /* 1e2708: ldp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1e270c: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 1e2710: ret  */
  return;
}

void fn2_1e3754(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077836116));
  /* 1e3754: sub sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(48)));
  /* 1e3758: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1e375c: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 1e3760: adrp x8, #0x25f000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2486272)));
  /* 1e3764: add x9, sp, #8 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(8)));
  /* 1e3768: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* 1e376c: ldr x8, [x8, #0x710] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(1808))));
  /* 1e3770: sub x2, x29, #4 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(4)));
  /* 1e3774: mov w3, #1 */
  ARC_W_W(c, 3, UINT64_C(1));
  /* 1e3778: str d0, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), (c)->q[0].u64[0]);
  /* 1e377c: str x9, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 9));
  /* 1e3780: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1980292));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1e3784: ldurb w8, [x29, #-4] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-4))));
  /* 1e3788: cmp w8, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(0));
  /* 1e378c: cset w0, ne */
  ARC_W_W(c, 0, (ARC_COND(c, 1) ? 1 : 0));
  /* 1e3790: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1e3794: add sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(48)));
  /* 1e3798: ret  */
  return;
}

void fn2_1e484c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077840460));
  /* 1e484c: sub sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(32)));
  /* 1e4850: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1e4854: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1e4858: adrp x8, #0x25f000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2486272)));
  /* 1e485c: str x1, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 1));
  /* 1e4860: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 1e4864: ldr x8, [x8, #0x808] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2056))));
  /* 1e4868: sub x2, x29, #4 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(4)));
  /* 1e486c: mov w3, #1 */
  ARC_W_W(c, 3, UINT64_C(1));
  /* 1e4870: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1984628));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1e4874: ldurb w8, [x29, #-4] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-4))));
  /* 1e4878: cmp w8, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(0));
  /* 1e487c: cset w0, ne */
  ARC_W_W(c, 0, (ARC_COND(c, 1) ? 1 : 0));
  /* 1e4880: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1e4884: add sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(32)));
  /* 1e4888: ret  */
  return;
}

void fn2_1e5844(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077844548));
  /* 1e5844: stp xzr, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 1e5848: ldrb w8, [x1] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 1)));
  /* 1e584c: strb w8, [x0] */
  arc_st8(ARC_X_R(c, 0), ARC_W_R(c, 8));
  /* 1e5850: strb wzr, [x1] */
  arc_st8(ARC_X_R(c, 1), ARC_W_R(c, 31));
  /* 1e5854: ldrb w8, [x1, #1] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 1) + INT64_C(1))));
  /* 1e5858: ldrb w9, [x0, #1] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(1))));
  /* 1e585c: strb w8, [x0, #1] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(1)), ARC_W_R(c, 8));
  /* 1e5860: strb w9, [x1, #1] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(1)), ARC_W_R(c, 9));
  /* 1e5864: ldrb w8, [x1, #2] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 1) + INT64_C(2))));
  /* 1e5868: ldrb w9, [x0, #2] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(2))));
  /* 1e586c: strb w8, [x0, #2] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(2)), ARC_W_R(c, 8));
  /* 1e5870: strb w9, [x1, #2] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(2)), ARC_W_R(c, 9));
  /* 1e5874: ldrb w8, [x1, #3] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 1) + INT64_C(3))));
  /* 1e5878: ldrb w9, [x0, #3] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(3))));
  /* 1e587c: strb w8, [x0, #3] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(3)), ARC_W_R(c, 8));
  /* 1e5880: strb w9, [x1, #3] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(3)), ARC_W_R(c, 9));
  /* 1e5884: ldrb w8, [x1, #4] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 1) + INT64_C(4))));
  /* 1e5888: ldrb w9, [x0, #4] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(4))));
  /* 1e588c: strb w8, [x0, #4] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(4)), ARC_W_R(c, 8));
  /* 1e5890: strb w9, [x1, #4] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(4)), ARC_W_R(c, 9));
  /* 1e5894: ldrb w8, [x1, #5] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 1) + INT64_C(5))));
  /* 1e5898: ldrb w9, [x0, #5] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(5))));
  /* 1e589c: strb w8, [x0, #5] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(5)), ARC_W_R(c, 8));
  /* 1e58a0: strb w9, [x1, #5] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(5)), ARC_W_R(c, 9));
  /* 1e58a4: ldrb w8, [x1, #6] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 1) + INT64_C(6))));
  /* 1e58a8: ldrb w9, [x0, #6] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(6))));
  /* 1e58ac: strb w8, [x0, #6] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(6)), ARC_W_R(c, 8));
  /* 1e58b0: strb w9, [x1, #6] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(6)), ARC_W_R(c, 9));
  /* 1e58b4: ldrb w8, [x1, #7] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 1) + INT64_C(7))));
  /* 1e58b8: ldrb w9, [x0, #7] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(7))));
  /* 1e58bc: strb w8, [x0, #7] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(7)), ARC_W_R(c, 8));
  /* 1e58c0: strb w9, [x1, #7] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(7)), ARC_W_R(c, 9));
  /* 1e58c4: ldrb w8, [x1, #8] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 1) + INT64_C(8))));
  /* 1e58c8: ldrb w9, [x0, #8] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(8))));
  /* 1e58cc: strb w8, [x0, #8] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 8));
  /* 1e58d0: strb w9, [x1, #8] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(8)), ARC_W_R(c, 9));
  /* 1e58d4: ldrb w8, [x1, #9] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 1) + INT64_C(9))));
  /* 1e58d8: ldrb w9, [x0, #9] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(9))));
  /* 1e58dc: strb w8, [x0, #9] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(9)), ARC_W_R(c, 8));
  /* 1e58e0: strb w9, [x1, #9] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(9)), ARC_W_R(c, 9));
  /* 1e58e4: ldrb w8, [x1, #0xa] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 1) + INT64_C(10))));
  /* 1e58e8: ldrb w9, [x0, #0xa] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(10))));
  /* 1e58ec: strb w8, [x0, #0xa] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(10)), ARC_W_R(c, 8));
  /* 1e58f0: strb w9, [x1, #0xa] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(10)), ARC_W_R(c, 9));
  /* 1e58f4: ldrb w8, [x1, #0xb] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 1) + INT64_C(11))));
  /* 1e58f8: ldrb w9, [x0, #0xb] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(11))));
  /* 1e58fc: strb w8, [x0, #0xb] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(11)), ARC_W_R(c, 8));
  /* 1e5900: strb w9, [x1, #0xb] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(11)), ARC_W_R(c, 9));
  /* 1e5904: ldrb w8, [x1, #0xc] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 1) + INT64_C(12))));
  /* 1e5908: ldrb w9, [x0, #0xc] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(12))));
  /* 1e590c: strb w8, [x0, #0xc] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(12)), ARC_W_R(c, 8));
  /* 1e5910: strb w9, [x1, #0xc] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(12)), ARC_W_R(c, 9));
  /* 1e5914: ldrb w8, [x1, #0xd] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 1) + INT64_C(13))));
  /* 1e5918: ldrb w9, [x0, #0xd] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(13))));
  /* 1e591c: strb w8, [x0, #0xd] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(13)), ARC_W_R(c, 8));
  /* 1e5920: strb w9, [x1, #0xd] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(13)), ARC_W_R(c, 9));
  /* 1e5924: ldrb w8, [x1, #0xe] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 1) + INT64_C(14))));
  /* 1e5928: ldrb w9, [x0, #0xe] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(14))));
  /* 1e592c: strb w8, [x0, #0xe] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(14)), ARC_W_R(c, 8));
  /* 1e5930: strb w9, [x1, #0xe] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(14)), ARC_W_R(c, 9));
  /* 1e5934: ldrb w8, [x1, #0xf] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 1) + INT64_C(15))));
  /* 1e5938: ldrb w9, [x0, #0xf] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(15))));
  /* 1e593c: strb w8, [x0, #0xf] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(15)), ARC_W_R(c, 8));
  /* 1e5940: strb w9, [x1, #0xf] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(15)), ARC_W_R(c, 9));
  /* 1e5944: ret  */
  return;
}

void fn2_1e608c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077846668));
  /* 1e608c: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1e6090: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 1e6094: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1e6098: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1e609c: adrp x21, #0x25f000 */
  ARC_X_W(c, 21, (arc_image_bases[2] + UINT64_C(2486272)));
  /* 1e60a0: add x21, x21, #0x8f8 */
  ARC_X_W(c, 21, (ARC_X_R(c, 21) + UINT64_C(2296)));
  /* 1e60a4: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 1e60a8: ldr x8, [x21, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 21) + INT64_C(16))));
  /* 1e60ac: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 1e60b0: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1990836));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1e60b4: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 1e60b8: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1e60bc: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1e60c0: str x19, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 19));
  /* 1e60c4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1990856));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1e60c8: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1e60cc: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1e60d0: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1e60d4: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1e60d8: ret  */
  return;
}

void fn2_1e7120(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077850912));
  /* 1e7120: sub sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(32)));
  /* 1e7124: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1e7128: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1e712c: adrp x8, #0x25f000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2486272)));
  /* 1e7130: str x1, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 1));
  /* 1e7134: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 1e7138: ldr x8, [x8, #0xaf8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2808))));
  /* 1e713c: sub x2, x29, #4 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(4)));
  /* 1e7140: mov w3, #1 */
  ARC_W_W(c, 3, UINT64_C(1));
  /* 1e7144: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1995080));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1e7148: ldurb w8, [x29, #-4] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-4))));
  /* 1e714c: cmp w8, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(0));
  /* 1e7150: cset w0, ne */
  ARC_W_W(c, 0, (ARC_COND(c, 1) ? 1 : 0));
  /* 1e7154: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1e7158: add sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(32)));
  /* 1e715c: ret  */
  return;
}

void fn2_1e8170(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077855088));
  /* 1e8170: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* 1e8174: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1e8178: str x21, [sp, #0x30] */
  arc_st64(((c)->sp + INT64_C(48)), ARC_X_R(c, 21));
  /* 1e817c: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1e8180: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 1e8184: mov x20, x8 */
  ARC_X_W(c, 20, ARC_X_R(c, 8));
  /* 1e8188: adrp x8, #0x25f000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2486272)));
  /* 1e818c: add x8, x8, #0xb60 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2912)));
  /* 1e8190: ldr x21, [x8, #0x90] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 8) + INT64_C(144))));
  /* 1e8194: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 1e8198: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1e819c: str x1, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 1));
  /* 1e81a0: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1e81a4: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 1e81a8: str x2, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 2));
  /* 1e81ac: stp xzr, xzr, [x20] */
  { const uint64_t _pa = ARC_X_R(c, 20);
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 1e81b0: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1999284));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1e81b4: add x8, x29, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1e81b8: add x9, sp, #8 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(8)));
  /* 1e81bc: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* 1e81c0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1e81c4: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* 1e81c8: mov w3, #2 */
  ARC_W_W(c, 3, UINT64_C(2));
  /* 1e81cc: stp x8, x9, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 1e81d0: blr x21 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1999316));
  arc_dispatch(c, ARC_X_R(c, 21));
  /* 1e81d4: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1e81d8: ldr x21, [sp, #0x30] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(48))));
  /* 1e81dc: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1e81e0: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* 1e81e4: ret  */
  return;
}

void fn2_1e9238(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077859384));
  /* 1e9238: sub sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(32)));
  /* 1e923c: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1e9240: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1e9244: adrp x8, #0x25f000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2486272)));
  /* 1e9248: mov x9, sp */
  ARC_X_W(c, 9, (c)->sp);
  /* 1e924c: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 1e9250: ldr x8, [x8, #0xce8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3304))));
  /* 1e9254: stp x1, x9, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 1));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 1e9258: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 1e925c: mov w3, #1 */
  ARC_W_W(c, 3, UINT64_C(1));
  /* 1e9260: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2003556));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1e9264: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1e9268: add sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(32)));
  /* 1e926c: ret  */
  return;
}

void fn2_1ea058(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077863000));
  /* 1ea058: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 1ea05c: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1ea060: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1ea064: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1ea068: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1ea06c: adrp x8, #0x25f000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2486272)));
  /* 1ea070: add x8, x8, #0xe18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3608)));
  /* 1ea074: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 1ea078: tbz w8, #0, #0x1ea0cc */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1ea0cc;
L_1ea07c:;
  /* 1ea07c: adrp x10, #0x258000 */
  ARC_X_W(c, 10, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1ea080: adrp x8, #0x25f000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2486272)));
  /* 1ea084: mov x2, sp */
  ARC_X_W(c, 2, (c)->sp);
  /* 1ea088: ldr x10, [x10, #0x980] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 10) + INT64_C(2432))));
  /* 1ea08c: ldr x8, [x8, #0xe10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3600))));
  /* 1ea090: ldr x9, [x0, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 1ea094: str x1, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 1));
  /* 1ea098: add x3, sp, #8 */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(8)));
  /* 1ea09c: ldr x10, [x10] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 10)));
  /* 1ea0a0: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1ea0a4: mov x1, x9 */
  ARC_X_W(c, 1, ARC_X_R(c, 9));
  /* 1ea0a8: blr x10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2007212));
  arc_dispatch(c, ARC_X_R(c, 10));
  /* 1ea0ac: ldrb w8, [sp, #8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(8))));
  /* 1ea0b0: cmp x8, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(0));
  /* 1ea0b4: cset w0, ne */
  ARC_W_W(c, 0, (ARC_COND(c, 1) ? 1 : 0));
  /* 1ea0b8: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1ea0bc: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1ea0c0: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1ea0c4: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 1ea0c8: ret  */
  return;
L_1ea0cc:;
  /* 1ea0cc: adrp x8, #0x25f000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2486272)));
  /* 1ea0d0: add x8, x8, #0xe18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3608)));
  /* 1ea0d4: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1ea0d8: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1ea0dc: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 1ea0e0: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2007268));
  fn2_24b710(c);
  /* 1ea0e4: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 1ea0e8: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 1ea0ec: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1ea0f0: cbz w8, #0x1ea07c */
  if ((ARC_W_R(c, 8)) == 0) goto L_1ea07c;
  /* 1ea0f4: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1ea0f8: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 1ea0fc: ldr x22, [x8] */
  ARC_X_W(c, 22, arc_ld64(ARC_X_R(c, 8)));
  /* 1ea100: bl #0x1ebc08 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2007300));
  fn2_1ebc08(c);
  /* 1ea104: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 1ea108: adrp x1, #0x2a000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(172032)));
  /* 1ea10c: add x1, x1, #0x588 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1416)));
  /* 1ea110: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1ea114: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1ea118: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2007324));
  fn2_1b8fd4(c);
  /* 1ea11c: mov w2, #0xecb5 */
  ARC_W_W(c, 2, UINT64_C(60597));
  /* 1ea120: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 1ea124: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 1ea128: movk w2, #0x9c26, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(2619736064)));
  /* 1ea12c: blr x22 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2007344));
  arc_dispatch(c, ARC_X_R(c, 22));
  /* 1ea130: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 1ea134: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1ea138: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2007356));
  fn2_1d2d24(c);
  /* 1ea13c: adrp x0, #0x25f000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2486272)));
  /* 1ea140: add x0, x0, #0xe10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3600)));
  /* 1ea144: str x21, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 21));
  }
  /* 1ea148: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2007372));
  fn2_24b720(c);
  /* 1ea14c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1ea150: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 1ea154: b #0x1ea07c */
  goto L_1ea07c;
}

void fn2_1ec5a8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077872552));
  /* 1ec5a8: sub sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(96)));
  /* 1ec5ac: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1ec5b0: stp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 1ec5b4: stp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1ec5b8: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1ec5bc: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 1ec5c0: adrp x8, #0x25f000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2486272)));
  /* 1ec5c4: add x8, x8, #0xfa8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(4008)));
  /* 1ec5c8: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 1ec5cc: tbz w8, #0, #0x1ec618 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1ec618;
L_1ec5d0:;
  /* 1ec5d0: adrp x9, #0x258000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1ec5d4: adrp x8, #0x25f000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2486272)));
  /* 1ec5d8: ldr x9, [x9, #0x980] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(2432))));
  /* 1ec5dc: ldr x8, [x8, #0xfa0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(4000))));
  /* 1ec5e0: stp x1, x2, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 1));
    arc_st64(_pa + 8, ARC_X_R(c, 2));
  }
  /* 1ec5e4: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 1ec5e8: str x3, [sp, #0x18] */
  arc_st64(((c)->sp + INT64_C(24)), ARC_X_R(c, 3));
  /* 1ec5ec: add x2, sp, #8 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(8)));
  /* 1ec5f0: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* 1ec5f4: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1ec5f8: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* 1ec5fc: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2016768));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 1ec600: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1ec604: ldp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1ec608: ldp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 1ec60c: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1ec610: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* 1ec614: ret  */
  return;
L_1ec618:;
  /* 1ec618: adrp x8, #0x25f000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2486272)));
  /* 1ec61c: add x8, x8, #0xfa8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(4008)));
  /* 1ec620: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1ec624: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1ec628: mov x20, x3 */
  ARC_X_W(c, 20, ARC_X_R(c, 3));
  /* 1ec62c: mov x21, x2 */
  ARC_X_W(c, 21, ARC_X_R(c, 2));
  /* 1ec630: mov x22, x1 */
  ARC_X_W(c, 22, ARC_X_R(c, 1));
  /* 1ec634: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2016824));
  fn2_24b710(c);
  /* 1ec638: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 1ec63c: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* 1ec640: mov x3, x20 */
  ARC_X_W(c, 3, ARC_X_R(c, 20));
  /* 1ec644: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 1ec648: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1ec64c: cbz w8, #0x1ec5d0 */
  if ((ARC_W_R(c, 8)) == 0) goto L_1ec5d0;
  /* 1ec650: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1ec654: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 1ec658: ldr x24, [x8] */
  ARC_X_W(c, 24, arc_ld64(ARC_X_R(c, 8)));
  /* 1ec65c: bl #0x1ed700 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2016864));
  fn2_1ed700(c);
  /* 1ec660: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* 1ec664: adrp x1, #0x1a000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(106496)));
  /* 1ec668: add x1, x1, #0xf05 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3845)));
  /* 1ec66c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1ec670: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1ec674: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2016888));
  fn2_1b8fd4(c);
  /* 1ec678: mov w2, #0x858e */
  ARC_W_W(c, 2, UINT64_C(34190));
  /* 1ec67c: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 1ec680: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 1ec684: movk w2, #0x9547, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(2504458240)));
  /* 1ec688: blr x24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2016908));
  arc_dispatch(c, ARC_X_R(c, 24));
  /* 1ec68c: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* 1ec690: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1ec694: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2016920));
  fn2_1d2d24(c);
  /* 1ec698: nop  */
  /* nop: no architectural effect here */
  /* 1ec69c: adr x0, #0x25ffa0 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2490272)));
  /* 1ec6a0: str x23, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 23));
  }
  /* 1ec6a4: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2016936));
  fn2_24b720(c);
  /* 1ec6a8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1ec6ac: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 1ec6b0: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* 1ec6b4: mov x3, x20 */
  ARC_X_W(c, 3, ARC_X_R(c, 20));
  /* 1ec6b8: b #0x1ec5d0 */
  goto L_1ec5d0;
}

void fn2_1ee458(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077880408));
  /* 1ee458: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 1ee45c: ret  */
  return;
}

void fn2_1f01cc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077887948));
  /* 1f01cc: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 1f01d0: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1f01d4: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1f01d8: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1f01dc: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1f01e0: adrp x8, #0x260000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1f01e4: add x8, x8, #0x348 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(840)));
  /* 1f01e8: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 1f01ec: tbz w8, #0, #0x1f0240 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1f0240;
L_1f01f0:;
  /* 1f01f0: adrp x10, #0x258000 */
  ARC_X_W(c, 10, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1f01f4: adrp x8, #0x260000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1f01f8: mov x2, sp */
  ARC_X_W(c, 2, (c)->sp);
  /* 1f01fc: ldr x10, [x10, #0x980] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 10) + INT64_C(2432))));
  /* 1f0200: ldr x8, [x8, #0x340] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(832))));
  /* 1f0204: ldr x9, [x0, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 1f0208: str x1, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 1));
  /* 1f020c: add x3, sp, #8 */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(8)));
  /* 1f0210: ldr x10, [x10] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 10)));
  /* 1f0214: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1f0218: mov x1, x9 */
  ARC_X_W(c, 1, ARC_X_R(c, 9));
  /* 1f021c: blr x10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2032160));
  arc_dispatch(c, ARC_X_R(c, 10));
  /* 1f0220: ldrb w8, [sp, #8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(8))));
  /* 1f0224: cmp x8, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(0));
  /* 1f0228: cset w0, ne */
  ARC_W_W(c, 0, (ARC_COND(c, 1) ? 1 : 0));
  /* 1f022c: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1f0230: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1f0234: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1f0238: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 1f023c: ret  */
  return;
L_1f0240:;
  /* 1f0240: adrp x8, #0x260000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1f0244: add x8, x8, #0x348 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(840)));
  /* 1f0248: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1f024c: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1f0250: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 1f0254: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2032216));
  fn2_24b710(c);
  /* 1f0258: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 1f025c: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 1f0260: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1f0264: cbz w8, #0x1f01f0 */
  if ((ARC_W_R(c, 8)) == 0) goto L_1f01f0;
  /* 1f0268: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1f026c: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 1f0270: ldr x22, [x8] */
  ARC_X_W(c, 22, arc_ld64(ARC_X_R(c, 8)));
  /* 1f0274: bl #0x1f0cc4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2032248));
  fn2_1f0cc4(c);
  /* 1f0278: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 1f027c: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* 1f0280: add x1, x1, #0x7e0 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2016)));
  /* 1f0284: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1f0288: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1f028c: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2032272));
  fn2_1b8fd4(c);
  /* 1f0290: mov w2, #0x4628 */
  ARC_W_W(c, 2, UINT64_C(17960));
  /* 1f0294: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 1f0298: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 1f029c: movk w2, #0x8a85, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(2323972096)));
  /* 1f02a0: blr x22 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2032292));
  arc_dispatch(c, ARC_X_R(c, 22));
  /* 1f02a4: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 1f02a8: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1f02ac: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2032304));
  fn2_1d2d24(c);
  /* 1f02b0: adrp x0, #0x260000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1f02b4: add x0, x0, #0x340 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(832)));
  /* 1f02b8: str x21, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 21));
  }
  /* 1f02bc: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2032320));
  fn2_24b720(c);
  /* 1f02c0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1f02c4: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 1f02c8: b #0x1f01f0 */
  goto L_1f01f0;
}

void fn2_1f2518(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077896984));
  /* 1f2518: sub sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(96)));
  /* 1f251c: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1f2520: str x23, [sp, #0x30] */
  arc_st64(((c)->sp + INT64_C(48)), ARC_X_R(c, 23));
  /* 1f2524: stp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1f2528: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1f252c: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 1f2530: adrp x8, #0x260000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1f2534: add x8, x8, #0x540 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1344)));
  /* 1f2538: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 1f253c: tbz w8, #0, #0x1f259c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1f259c;
L_1f2540:;
  /* 1f2540: adrp x11, #0x258000 */
  ARC_X_W(c, 11, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1f2544: sxtw x9, w2 */
  ARC_X_W(c, 9, ((int64_t)(int32_t)(ARC_W_R(c, 2))));
  /* 1f2548: adrp x10, #0x260000 */
  ARC_X_W(c, 10, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1f254c: ldr x11, [x11, #0x980] */
  ARC_X_W(c, 11, arc_ld64((ARC_X_R(c, 11) + INT64_C(2432))));
  /* 1f2550: ldr x8, [x0, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 1f2554: ldr x0, [x10, #0x538] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 10) + INT64_C(1336))));
  /* 1f2558: stp x9, x1, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 1));
  }
  /* 1f255c: add x9, sp, #8 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(8)));
  /* 1f2560: add x2, sp, #0x10 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(16)));
  /* 1f2564: ldr x10, [x11] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 11)));
  /* 1f2568: add x3, x29, #0x18 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1f256c: mov x1, x8 */
  ARC_X_W(c, 1, ARC_X_R(c, 8));
  /* 1f2570: str x9, [sp, #0x18] */
  arc_st64(((c)->sp + INT64_C(24)), ARC_X_R(c, 9));
  /* 1f2574: blr x10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2041208));
  arc_dispatch(c, ARC_X_R(c, 10));
  /* 1f2578: ldrb w8, [x29, #0x18] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(24))));
  /* 1f257c: cmp x8, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(0));
  /* 1f2580: cset w0, ne */
  ARC_W_W(c, 0, (ARC_COND(c, 1) ? 1 : 0));
  /* 1f2584: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1f2588: ldr x23, [sp, #0x30] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(48))));
  /* 1f258c: ldp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1f2590: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1f2594: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* 1f2598: ret  */
  return;
L_1f259c:;
  /* 1f259c: adrp x8, #0x260000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1f25a0: add x8, x8, #0x540 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1344)));
  /* 1f25a4: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1f25a8: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1f25ac: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 1f25b0: mov x21, x2 */
  ARC_X_W(c, 21, ARC_X_R(c, 2));
  /* 1f25b4: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2041272));
  fn2_24b710(c);
  /* 1f25b8: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* 1f25bc: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 1f25c0: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 1f25c4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1f25c8: cbz w8, #0x1f2540 */
  if ((ARC_W_R(c, 8)) == 0) goto L_1f2540;
  /* 1f25cc: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1f25d0: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 1f25d4: ldr x23, [x8] */
  ARC_X_W(c, 23, arc_ld64(ARC_X_R(c, 8)));
  /* 1f25d8: bl #0x20293c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2041308));
  fn2_20293c(c);
  /* 1f25dc: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 1f25e0: adrp x1, #0x2e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(188416)));
  /* 1f25e4: add x1, x1, #0x7f0 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2032)));
  /* 1f25e8: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 1f25ec: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1f25f0: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2041332));
  fn2_1b8fd4(c);
  /* 1f25f4: mov w2, #0xc232 */
  ARC_W_W(c, 2, UINT64_C(49714));
  /* 1f25f8: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* 1f25fc: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 1f2600: movk w2, #0xd14c, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(3511418880)));
  /* 1f2604: blr x23 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2041352));
  arc_dispatch(c, ARC_X_R(c, 23));
  /* 1f2608: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 1f260c: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 1f2610: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2041364));
  fn2_1d2d24(c);
  /* 1f2614: adrp x0, #0x260000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1f2618: add x0, x0, #0x538 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1336)));
  /* 1f261c: str x22, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 22));
  }
  /* 1f2620: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2041380));
  fn2_24b720(c);
  /* 1f2624: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* 1f2628: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1f262c: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 1f2630: b #0x1f2540 */
  goto L_1f2540;
}

void fn2_1f4960(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077906272));
  /* 1f4960: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* 1f4964: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1f4968: str x23, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 23));
  /* 1f496c: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1f4970: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1f4974: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1f4978: adrp x8, #0x260000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1f497c: add x8, x8, #0x740 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1856)));
  /* 1f4980: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 1f4984: tbz w8, #0, #0x1f49d8 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1f49d8;
L_1f4988:;
  /* 1f4988: adrp x11, #0x258000 */
  ARC_X_W(c, 11, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1f498c: sxtw x9, w2 */
  ARC_X_W(c, 9, ((int64_t)(int32_t)(ARC_W_R(c, 2))));
  /* 1f4990: adrp x10, #0x260000 */
  ARC_X_W(c, 10, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1f4994: ldr x11, [x11, #0x980] */
  ARC_X_W(c, 11, arc_ld64((ARC_X_R(c, 11) + INT64_C(2432))));
  /* 1f4998: ldr x8, [x0, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 1f499c: ldr x0, [x10, #0x738] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 10) + INT64_C(1848))));
  /* 1f49a0: str x9, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 9));
  /* 1f49a4: add x9, x29, #0x18 */
  ARC_X_W(c, 9, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1f49a8: mov x2, sp */
  ARC_X_W(c, 2, (c)->sp);
  /* 1f49ac: ldr x10, [x11] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 11)));
  /* 1f49b0: stp x1, x9, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 1));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 1f49b4: mov x1, x8 */
  ARC_X_W(c, 1, ARC_X_R(c, 8));
  /* 1f49b8: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* 1f49bc: blr x10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2050496));
  arc_dispatch(c, ARC_X_R(c, 10));
  /* 1f49c0: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1f49c4: ldr x23, [sp, #0x20] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(32))));
  /* 1f49c8: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1f49cc: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1f49d0: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* 1f49d4: ret  */
  return;
L_1f49d8:;
  /* 1f49d8: adrp x8, #0x260000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1f49dc: add x8, x8, #0x740 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1856)));
  /* 1f49e0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1f49e4: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1f49e8: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 1f49ec: mov x21, x2 */
  ARC_X_W(c, 21, ARC_X_R(c, 2));
  /* 1f49f0: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2050548));
  fn2_24b710(c);
  /* 1f49f4: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* 1f49f8: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 1f49fc: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 1f4a00: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1f4a04: cbz w8, #0x1f4988 */
  if ((ARC_W_R(c, 8)) == 0) goto L_1f4988;
  /* 1f4a08: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1f4a0c: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 1f4a10: ldr x23, [x8] */
  ARC_X_W(c, 23, arc_ld64(ARC_X_R(c, 8)));
  /* 1f4a14: bl #0x20293c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2050584));
  fn2_20293c(c);
  /* 1f4a18: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 1f4a1c: adrp x1, #0x1b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(110592)));
  /* 1f4a20: add x1, x1, #0xb4a */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2890)));
  /* 1f4a24: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 1f4a28: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1f4a2c: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2050608));
  fn2_1b8fd4(c);
  /* 1f4a30: mov w2, #0x43db */
  ARC_W_W(c, 2, UINT64_C(17371));
  /* 1f4a34: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 1f4a38: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 1f4a3c: movk w2, #0xb03d, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(2956787712)));
  /* 1f4a40: blr x23 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2050628));
  arc_dispatch(c, ARC_X_R(c, 23));
  /* 1f4a44: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 1f4a48: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 1f4a4c: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2050640));
  fn2_1d2d24(c);
  /* 1f4a50: adrp x0, #0x260000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1f4a54: add x0, x0, #0x738 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1848)));
  /* 1f4a58: str x22, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 22));
  }
  /* 1f4a5c: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2050656));
  fn2_24b720(c);
  /* 1f4a60: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* 1f4a64: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1f4a68: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 1f4a6c: b #0x1f4988 */
  goto L_1f4988;
}

void fn2_1f67a8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077914024));
  /* 1f67a8: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1f67ac: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 1f67b0: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1f67b4: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1f67b8: adrp x8, #0x260000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1f67bc: add x8, x8, #0x940 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2368)));
  /* 1f67c0: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 1f67c4: tbz w8, #0, #0x1f6804 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1f6804;
L_1f67c8:;
  /* 1f67c8: adrp x9, #0x258000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1f67cc: adrp x8, #0x260000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1f67d0: add x3, x29, #0x18 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1f67d4: ldr x9, [x9, #0x980] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(2432))));
  /* 1f67d8: ldr x8, [x8, #0x938] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2360))));
  /* 1f67dc: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 1f67e0: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 1f67e4: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* 1f67e8: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1f67ec: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2058224));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 1f67f0: ldr w0, [x29, #0x18] */
  ARC_W_W(c, 0, arc_ld32((ARC_X_R(c, 29) + INT64_C(24))));
  /* 1f67f4: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1f67f8: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1f67fc: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1f6800: ret  */
  return;
L_1f6804:;
  /* 1f6804: adrp x8, #0x260000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1f6808: add x8, x8, #0x940 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2368)));
  /* 1f680c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1f6810: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1f6814: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2058264));
  fn2_24b710(c);
  /* 1f6818: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 1f681c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1f6820: cbz w8, #0x1f67c8 */
  if ((ARC_W_R(c, 8)) == 0) goto L_1f67c8;
  /* 1f6824: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1f6828: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 1f682c: ldr x21, [x8] */
  ARC_X_W(c, 21, arc_ld64(ARC_X_R(c, 8)));
  /* 1f6830: bl #0x20293c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2058292));
  fn2_20293c(c);
  /* 1f6834: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 1f6838: adrp x1, #0x2c000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(180224)));
  /* 1f683c: add x1, x1, #0xadb */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2779)));
  /* 1f6840: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1f6844: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1f6848: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2058316));
  fn2_1b8fd4(c);
  /* 1f684c: mov w2, #0x525a */
  ARC_W_W(c, 2, UINT64_C(21082));
  /* 1f6850: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1f6854: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1f6858: movk w2, #0xe8c5, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(3905224704)));
  /* 1f685c: blr x21 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2058336));
  arc_dispatch(c, ARC_X_R(c, 21));
  /* 1f6860: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 1f6864: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1f6868: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2058348));
  fn2_1d2d24(c);
  /* 1f686c: adrp x0, #0x260000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1f6870: add x0, x0, #0x938 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2360)));
  /* 1f6874: str x20, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 20));
  }
  /* 1f6878: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2058364));
  fn2_24b720(c);
  /* 1f687c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1f6880: b #0x1f67c8 */
  goto L_1f67c8;
}

void fn2_1f8780(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077922176));
  /* 1f8780: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* 1f8784: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1f8788: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1f878c: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1f8790: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 1f8794: adrp x8, #0x260000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1f8798: add x8, x8, #0xb40 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2880)));
  /* 1f879c: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 1f87a0: tbz w8, #0, #0x1f87f0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1f87f0;
L_1f87a4:;
  /* 1f87a4: adrp x10, #0x258000 */
  ARC_X_W(c, 10, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1f87a8: adrp x9, #0x260000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1f87ac: sxtw x11, w1 */
  ARC_X_W(c, 11, ((int64_t)(int32_t)(ARC_W_R(c, 1))));
  /* 1f87b0: ldr x10, [x10, #0x980] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 10) + INT64_C(2432))));
  /* 1f87b4: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 1f87b8: ldr x0, [x9, #0xb38] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 9) + INT64_C(2872))));
  /* 1f87bc: add x8, sp, #8 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(8)));
  /* 1f87c0: add x2, sp, #0x10 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(16)));
  /* 1f87c4: sub x3, x29, #8 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 1f87c8: ldr x9, [x10] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 10)));
  /* 1f87cc: stur xzr, [x29, #-8] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-8)), ARC_X_R(c, 31));
  /* 1f87d0: stp x11, x8, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 11));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* 1f87d4: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2066392));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 1f87d8: ldur x0, [x29, #-8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-8))));
  /* 1f87dc: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1f87e0: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1f87e4: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1f87e8: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* 1f87ec: ret  */
  return;
L_1f87f0:;
  /* 1f87f0: adrp x8, #0x260000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1f87f4: add x8, x8, #0xb40 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2880)));
  /* 1f87f8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1f87fc: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1f8800: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 1f8804: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2066440));
  fn2_24b710(c);
  /* 1f8808: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 1f880c: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 1f8810: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1f8814: cbz w8, #0x1f87a4 */
  if ((ARC_W_R(c, 8)) == 0) goto L_1f87a4;
  /* 1f8818: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1f881c: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 1f8820: ldr x22, [x8] */
  ARC_X_W(c, 22, arc_ld64(ARC_X_R(c, 8)));
  /* 1f8824: bl #0x20293c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2066472));
  fn2_20293c(c);
  /* 1f8828: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 1f882c: adrp x1, #0x1f000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(126976)));
  /* 1f8830: add x1, x1, #0xde4 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3556)));
  /* 1f8834: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 1f8838: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1f883c: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2066496));
  fn2_1b8fd4(c);
  /* 1f8840: mov w2, #0x89c6 */
  ARC_W_W(c, 2, UINT64_C(35270));
  /* 1f8844: sub x1, x29, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 1f8848: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 1f884c: movk w2, #0x2d88, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(763887616)));
  /* 1f8850: blr x22 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2066516));
  arc_dispatch(c, ARC_X_R(c, 22));
  /* 1f8854: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 1f8858: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 1f885c: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2066528));
  fn2_1d2d24(c);
  /* 1f8860: adrp x0, #0x260000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1f8864: add x0, x0, #0xb38 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2872)));
  /* 1f8868: str x21, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 21));
  }
  /* 1f886c: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2066544));
  fn2_24b720(c);
  /* 1f8870: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 1f8874: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1f8878: b #0x1f87a4 */
  goto L_1f87a4;
}

void fn2_1fa8a0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077930656));
  /* 1fa8a0: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 1fa8a4: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1fa8a8: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1fa8ac: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1fa8b0: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1fa8b4: adrp x8, #0x260000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1fa8b8: add x8, x8, #0xd40 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3392)));
  /* 1fa8bc: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 1fa8c0: tbz w8, #0, #0x1fa90c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1fa90c;
L_1fa8c4:;
  /* 1fa8c4: adrp x10, #0x258000 */
  ARC_X_W(c, 10, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1fa8c8: adrp x8, #0x260000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1fa8cc: sxtw x11, w1 */
  ARC_X_W(c, 11, ((int64_t)(int32_t)(ARC_W_R(c, 1))));
  /* 1fa8d0: ldr x10, [x10, #0x980] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 10) + INT64_C(2432))));
  /* 1fa8d4: ldr x8, [x8, #0xd38] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3384))));
  /* 1fa8d8: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 1fa8dc: mov x9, sp */
  ARC_X_W(c, 9, (c)->sp);
  /* 1fa8e0: add x2, sp, #8 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(8)));
  /* 1fa8e4: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* 1fa8e8: ldr x10, [x10] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 10)));
  /* 1fa8ec: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1fa8f0: stp x11, x9, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 11));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 1fa8f4: blr x10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2074872));
  arc_dispatch(c, ARC_X_R(c, 10));
  /* 1fa8f8: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1fa8fc: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1fa900: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1fa904: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 1fa908: ret  */
  return;
L_1fa90c:;
  /* 1fa90c: adrp x8, #0x260000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1fa910: add x8, x8, #0xd40 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3392)));
  /* 1fa914: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1fa918: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1fa91c: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 1fa920: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2074916));
  fn2_24b710(c);
  /* 1fa924: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 1fa928: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 1fa92c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1fa930: cbz w8, #0x1fa8c4 */
  if ((ARC_W_R(c, 8)) == 0) goto L_1fa8c4;
  /* 1fa934: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1fa938: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 1fa93c: ldr x22, [x8] */
  ARC_X_W(c, 22, arc_ld64(ARC_X_R(c, 8)));
  /* 1fa940: bl #0x20293c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2074948));
  fn2_20293c(c);
  /* 1fa944: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 1fa948: adrp x1, #0x1d000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(118784)));
  /* 1fa94c: add x1, x1, #0x1d3 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(467)));
  /* 1fa950: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1fa954: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1fa958: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2074972));
  fn2_1b8fd4(c);
  /* 1fa95c: mov w2, #0xe753 */
  ARC_W_W(c, 2, UINT64_C(59219));
  /* 1fa960: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 1fa964: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 1fa968: movk w2, #0x76f3, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(1995636736)));
  /* 1fa96c: blr x22 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2074992));
  arc_dispatch(c, ARC_X_R(c, 22));
  /* 1fa970: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 1fa974: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1fa978: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2075004));
  fn2_1d2d24(c);
  /* 1fa97c: adrp x0, #0x260000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1fa980: add x0, x0, #0xd38 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3384)));
  /* 1fa984: str x21, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 21));
  }
  /* 1fa988: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2075020));
  fn2_24b720(c);
  /* 1fa98c: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 1fa990: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1fa994: b #0x1fa8c4 */
  goto L_1fa8c4;
}

void fn2_1fc9c0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077939136));
  /* 1fc9c0: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* 1fc9c4: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1fc9c8: str x23, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 23));
  /* 1fc9cc: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1fc9d0: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1fc9d4: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1fc9d8: adrp x8, #0x260000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1fc9dc: add x8, x8, #0xf40 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3904)));
  /* 1fc9e0: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 1fc9e4: tbz w8, #0, #0x1fca30 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1fca30;
L_1fc9e8:;
  /* 1fc9e8: adrp x10, #0x258000 */
  ARC_X_W(c, 10, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1fc9ec: adrp x8, #0x260000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1fc9f0: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* 1fc9f4: ldr x10, [x10, #0x980] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 10) + INT64_C(2432))));
  /* 1fc9f8: ldr x8, [x8, #0xf38] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3896))));
  /* 1fc9fc: ldr x9, [x0, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 1fca00: stp x1, x2, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 1));
    arc_st64(_pa + 8, ARC_X_R(c, 2));
  }
  /* 1fca04: mov x2, sp */
  ARC_X_W(c, 2, (c)->sp);
  /* 1fca08: ldr x10, [x10] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 10)));
  /* 1fca0c: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1fca10: mov x1, x9 */
  ARC_X_W(c, 1, ARC_X_R(c, 9));
  /* 1fca14: blr x10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2083352));
  arc_dispatch(c, ARC_X_R(c, 10));
  /* 1fca18: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1fca1c: ldr x23, [sp, #0x20] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(32))));
  /* 1fca20: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1fca24: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1fca28: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* 1fca2c: ret  */
  return;
L_1fca30:;
  /* 1fca30: adrp x8, #0x260000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1fca34: add x8, x8, #0xf40 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3904)));
  /* 1fca38: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1fca3c: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1fca40: mov x20, x2 */
  ARC_X_W(c, 20, ARC_X_R(c, 2));
  /* 1fca44: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* 1fca48: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2083404));
  fn2_24b710(c);
  /* 1fca4c: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 1fca50: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* 1fca54: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 1fca58: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1fca5c: cbz w8, #0x1fc9e8 */
  if ((ARC_W_R(c, 8)) == 0) goto L_1fc9e8;
  /* 1fca60: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1fca64: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 1fca68: ldr x23, [x8] */
  ARC_X_W(c, 23, arc_ld64(ARC_X_R(c, 8)));
  /* 1fca6c: bl #0x20293c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2083440));
  fn2_20293c(c);
  /* 1fca70: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 1fca74: adrp x1, #0x1f000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(126976)));
  /* 1fca78: add x1, x1, #0x557 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1367)));
  /* 1fca7c: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 1fca80: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1fca84: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2083464));
  fn2_1b8fd4(c);
  /* 1fca88: mov w2, #0xa7a4 */
  ARC_W_W(c, 2, UINT64_C(42916));
  /* 1fca8c: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 1fca90: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 1fca94: movk w2, #0x1799, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(395902976)));
  /* 1fca98: blr x23 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2083484));
  arc_dispatch(c, ARC_X_R(c, 23));
  /* 1fca9c: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 1fcaa0: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 1fcaa4: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2083496));
  fn2_1d2d24(c);
  /* 1fcaa8: adrp x0, #0x260000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1fcaac: add x0, x0, #0xf38 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3896)));
  /* 1fcab0: str x22, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 22));
  }
  /* 1fcab4: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2083512));
  fn2_24b720(c);
  /* 1fcab8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1fcabc: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 1fcac0: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* 1fcac4: b #0x1fc9e8 */
  goto L_1fc9e8;
}

void fn2_1fec0c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077947916));
  /* 1fec0c: sub sp, sp, #0x90 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(144)));
  /* 1fec10: stp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1fec14: stp x26, x25, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* 1fec18: stp x24, x23, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 1fec1c: stp x22, x21, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1fec20: stp x20, x19, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1fec24: add x29, sp, #0x40 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(64)));
  /* 1fec28: adrp x8, #0x261000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 1fec2c: add x8, x8, #0x140 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(320)));
  /* 1fec30: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 1fec34: tbz w8, #0, #0x1fec9c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1fec9c;
L_1fec38:;
  /* 1fec38: sxtw x8, w3 */
  ARC_X_W(c, 8, ((int64_t)(int32_t)(ARC_W_R(c, 3))));
  /* 1fec3c: sxtw x9, w5 */
  ARC_X_W(c, 9, ((int64_t)(int32_t)(ARC_W_R(c, 5))));
  /* 1fec40: stp x1, x2, [sp, #0x18] */
  { const uint64_t _pa = ((c)->sp + INT64_C(24));
    arc_st64(_pa, ARC_X_R(c, 1));
    arc_st64(_pa + 8, ARC_X_R(c, 2));
  }
  /* 1fec44: adrp x10, #0x258000 */
  ARC_X_W(c, 10, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1fec48: add x2, sp, #0x18 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(24)));
  /* 1fec4c: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* 1fec50: stp x9, x8, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* 1fec54: adrp x8, #0x261000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 1fec58: add x9, sp, #0x10 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(16)));
  /* 1fec5c: ldr x10, [x10, #0x980] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 10) + INT64_C(2432))));
  /* 1fec60: ldr x8, [x8, #0x138] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(312))));
  /* 1fec64: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 1fec68: stp x9, x4, [sp, #0x28] */
  { const uint64_t _pa = ((c)->sp + INT64_C(40));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 4));
  }
  /* 1fec6c: add x9, sp, #8 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(8)));
  /* 1fec70: ldr x10, [x10] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 10)));
  /* 1fec74: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1fec78: str x9, [sp, #0x38] */
  arc_st64(((c)->sp + INT64_C(56)), ARC_X_R(c, 9));
  /* 1fec7c: blr x10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2092160));
  arc_dispatch(c, ARC_X_R(c, 10));
  /* 1fec80: ldp x20, x19, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1fec84: ldp x22, x21, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1fec88: ldp x24, x23, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 1fec8c: ldp x26, x25, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* 1fec90: ldp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1fec94: add sp, sp, #0x90 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(144)));
  /* 1fec98: ret  */
  return;
L_1fec9c:;
  /* 1fec9c: adrp x8, #0x261000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 1feca0: add x8, x8, #0x140 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(320)));
  /* 1feca4: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1feca8: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1fecac: mov x20, x4 */
  ARC_X_W(c, 20, ARC_X_R(c, 4));
  /* 1fecb0: mov x21, x2 */
  ARC_X_W(c, 21, ARC_X_R(c, 2));
  /* 1fecb4: mov x22, x1 */
  ARC_X_W(c, 22, ARC_X_R(c, 1));
  /* 1fecb8: mov x23, x5 */
  ARC_X_W(c, 23, ARC_X_R(c, 5));
  /* 1fecbc: mov x24, x3 */
  ARC_X_W(c, 24, ARC_X_R(c, 3));
  /* 1fecc0: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2092228));
  fn2_24b710(c);
  /* 1fecc4: mov x3, x24 */
  ARC_X_W(c, 3, ARC_X_R(c, 24));
  /* 1fecc8: mov x5, x23 */
  ARC_X_W(c, 5, ARC_X_R(c, 23));
  /* 1feccc: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 1fecd0: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* 1fecd4: mov x4, x20 */
  ARC_X_W(c, 4, ARC_X_R(c, 20));
  /* 1fecd8: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 1fecdc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1fece0: cbz w8, #0x1fec38 */
  if ((ARC_W_R(c, 8)) == 0) goto L_1fec38;
  /* 1fece4: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1fece8: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 1fecec: ldr x26, [x8] */
  ARC_X_W(c, 26, arc_ld64(ARC_X_R(c, 8)));
  /* 1fecf0: bl #0x20293c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2092276));
  fn2_20293c(c);
  /* 1fecf4: mov x25, x0 */
  ARC_X_W(c, 25, ARC_X_R(c, 0));
  /* 1fecf8: adrp x1, #0x26000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(155648)));
  /* 1fecfc: add x1, x1, #0xd8b */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3467)));
  /* 1fed00: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* 1fed04: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1fed08: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2092300));
  fn2_1b8fd4(c);
  /* 1fed0c: mov w2, #0x5c5d */
  ARC_W_W(c, 2, UINT64_C(23645));
  /* 1fed10: add x1, sp, #0x18 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(24)));
  /* 1fed14: mov x0, x25 */
  ARC_X_W(c, 0, ARC_X_R(c, 25));
  /* 1fed18: movk w2, #0xb9ea, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(3119120384)));
  /* 1fed1c: blr x26 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2092320));
  arc_dispatch(c, ARC_X_R(c, 26));
  /* 1fed20: mov x25, x0 */
  ARC_X_W(c, 25, ARC_X_R(c, 0));
  /* 1fed24: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* 1fed28: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2092332));
  fn2_1d2d24(c);
  /* 1fed2c: adrp x0, #0x261000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 1fed30: add x0, x0, #0x138 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(312)));
  /* 1fed34: str x25, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 25));
  }
  /* 1fed38: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2092348));
  fn2_24b720(c);
  /* 1fed3c: mov x3, x24 */
  ARC_X_W(c, 3, ARC_X_R(c, 24));
  /* 1fed40: mov x5, x23 */
  ARC_X_W(c, 5, ARC_X_R(c, 23));
  /* 1fed44: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 1fed48: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* 1fed4c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1fed50: mov x4, x20 */
  ARC_X_W(c, 4, ARC_X_R(c, 20));
  /* 1fed54: b #0x1fec38 */
  goto L_1fec38;
}

void fn2_200db0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077956528));
  /* 200db0: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 200db4: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 200db8: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 200dbc: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 200dc0: adrp x8, #0x261000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 200dc4: add x8, x8, #0x340 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(832)));
  /* 200dc8: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 200dcc: tbz w8, #0, #0x200e0c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_200e0c;
L_200dd0:;
  /* 200dd0: adrp x9, #0x258000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 200dd4: adrp x8, #0x261000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 200dd8: add x3, x29, #0x18 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 200ddc: ldr x9, [x9, #0x980] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(2432))));
  /* 200de0: ldr x8, [x8, #0x338] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(824))));
  /* 200de4: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 200de8: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 200dec: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* 200df0: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 200df4: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2100728));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 200df8: ldr w0, [x29, #0x18] */
  ARC_W_W(c, 0, arc_ld32((ARC_X_R(c, 29) + INT64_C(24))));
  /* 200dfc: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 200e00: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 200e04: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 200e08: ret  */
  return;
L_200e0c:;
  /* 200e0c: adrp x8, #0x261000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 200e10: add x8, x8, #0x340 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(832)));
  /* 200e14: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 200e18: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 200e1c: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2100768));
  fn2_24b710(c);
  /* 200e20: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 200e24: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 200e28: cbz w8, #0x200dd0 */
  if ((ARC_W_R(c, 8)) == 0) goto L_200dd0;
  /* 200e2c: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 200e30: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 200e34: ldr x21, [x8] */
  ARC_X_W(c, 21, arc_ld64(ARC_X_R(c, 8)));
  /* 200e38: bl #0x20293c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2100796));
  fn2_20293c(c);
  /* 200e3c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 200e40: adrp x1, #0x2e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(188416)));
  /* 200e44: add x1, x1, #0x918 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2328)));
  /* 200e48: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 200e4c: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 200e50: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2100820));
  fn2_1b8fd4(c);
  /* 200e54: mov w2, #0x525a */
  ARC_W_W(c, 2, UINT64_C(21082));
  /* 200e58: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 200e5c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 200e60: movk w2, #0xe8c5, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(3905224704)));
  /* 200e64: blr x21 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2100840));
  arc_dispatch(c, ARC_X_R(c, 21));
  /* 200e68: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 200e6c: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 200e70: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2100852));
  fn2_1d2d24(c);
  /* 200e74: adrp x0, #0x261000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 200e78: add x0, x0, #0x338 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(824)));
  /* 200e7c: str x20, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 20));
  }
  /* 200e80: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2100868));
  fn2_24b720(c);
  /* 200e84: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 200e88: b #0x200dd0 */
  goto L_200dd0;
}

void fn2_202a98(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077963928));
  /* 202a98: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* 202a9c: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 202aa0: str x21, [sp, #0x30] */
  arc_st64(((c)->sp + INT64_C(48)), ARC_X_R(c, 21));
  /* 202aa4: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 202aa8: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 202aac: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 202ab0: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 202ab4: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 202ab8: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* 202abc: bl #0x1db4a4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2108096));
  fn2_1db4a4(c);
  /* 202ac0: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 202ac4: mov x3, sp */
  ARC_X_W(c, 3, (c)->sp);
  /* 202ac8: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 202acc: ldr x8, [x8, #0x980] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2432))));
  /* 202ad0: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 202ad4: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 202ad8: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 202adc: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2108128));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 202ae0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 202ae4: bl #0x1db4a4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2108136));
  fn2_1db4a4(c);
  /* 202ae8: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 202aec: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2108144));
  fn2_1d2c2c(c);
  /* 202af0: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 202af4: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2108152));
  fn2_1bc084(c);
  /* 202af8: add x2, x29, #0x18 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 202afc: add x3, sp, #8 */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(8)));
  /* 202b00: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 202b04: mov w1, #7 */
  ARC_W_W(c, 1, UINT64_C(7));
  /* 202b08: bl #0x1bbf58 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2108172));
  fn2_1bbf58(c);
  /* 202b0c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 202b10: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2108180));
  fn2_1bc620(c);
  /* 202b14: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 202b18: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2108188));
  fn2_1d2d24(c);
  /* 202b1c: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 202b20: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 202b24: bl #0x1dc378 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2108200));
  fn2_1dc378(c);
  /* 202b28: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 202b2c: tbz w0, #0, #0x202b3c */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_202b3c;
  /* 202b30: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 202b34: bl #0x1dc718 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2108216));
  fn2_1dc718(c);
  /* 202b38: b #0x202b44 */
  goto L_202b44;
L_202b3c:;
  /* 202b3c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 202b40: bl #0x1db850 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2108228));
  fn2_1db850(c);
L_202b44:;
  /* 202b44: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 202b48: bl #0x1db788 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2108236));
  fn2_1db788(c);
  /* 202b4c: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 202b50: ldr x21, [sp, #0x30] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(48))));
  /* 202b54: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 202b58: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* 202b5c: ret  */
  return;
}

void fn2_2041bc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077969852));
  /* 2041bc: sub sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(96)));
  /* 2041c0: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 2041c4: stp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 2041c8: stp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 2041cc: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 2041d0: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 2041d4: adrp x8, #0x261000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 2041d8: add x8, x8, #0x630 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1584)));
  /* 2041dc: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 2041e0: tbz w8, #0, #0x204234 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_204234;
L_2041e4:;
  /* 2041e4: sxtw x8, w2 */
  ARC_X_W(c, 8, ((int64_t)(int32_t)(ARC_W_R(c, 2))));
  /* 2041e8: adrp x10, #0x258000 */
  ARC_X_W(c, 10, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 2041ec: adrp x9, #0x261000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 2041f0: ldr x10, [x10, #0x980] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 10) + INT64_C(2432))));
  /* 2041f4: mov x11, sp */
  ARC_X_W(c, 11, (c)->sp);
  /* 2041f8: add x2, sp, #8 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(8)));
  /* 2041fc: stp x8, x1, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 1));
  }
  /* 204200: ldr x8, [x9, #0x628] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(1576))));
  /* 204204: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 204208: ldr x9, [x10] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 10)));
  /* 20420c: stp x11, x3, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 11));
    arc_st64(_pa + 8, ARC_X_R(c, 3));
  }
  /* 204210: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* 204214: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 204218: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2114076));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 20421c: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 204220: ldp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 204224: ldp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 204228: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 20422c: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* 204230: ret  */
  return;
L_204234:;
  /* 204234: adrp x8, #0x261000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 204238: add x8, x8, #0x630 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1584)));
  /* 20423c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 204240: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 204244: mov x20, x3 */
  ARC_X_W(c, 20, ARC_X_R(c, 3));
  /* 204248: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* 20424c: mov x22, x2 */
  ARC_X_W(c, 22, ARC_X_R(c, 2));
  /* 204250: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2114132));
  fn2_24b710(c);
  /* 204254: mov x2, x22 */
  ARC_X_W(c, 2, ARC_X_R(c, 22));
  /* 204258: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 20425c: mov x3, x20 */
  ARC_X_W(c, 3, ARC_X_R(c, 20));
  /* 204260: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 204264: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 204268: cbz w8, #0x2041e4 */
  if ((ARC_W_R(c, 8)) == 0) goto L_2041e4;
  /* 20426c: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 204270: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 204274: ldr x24, [x8] */
  ARC_X_W(c, 24, arc_ld64(ARC_X_R(c, 8)));
  /* 204278: bl #0x2042d8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2114172));
  fn2_2042d8(c);
  /* 20427c: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* 204280: adrp x1, #0x2c000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(180224)));
  /* 204284: add x1, x1, #0xbcf */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3023)));
  /* 204288: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 20428c: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 204290: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2114196));
  fn2_1b8fd4(c);
  /* 204294: mov w2, #0x899c */
  ARC_W_W(c, 2, UINT64_C(35228));
  /* 204298: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 20429c: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 2042a0: movk w2, #0x419a, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(1100611584)));
  /* 2042a4: blr x24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2114216));
  arc_dispatch(c, ARC_X_R(c, 24));
  /* 2042a8: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* 2042ac: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 2042b0: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2114228));
  fn2_1d2d24(c);
  /* 2042b4: adrp x0, #0x261000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 2042b8: add x0, x0, #0x628 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1576)));
  /* 2042bc: str x23, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 23));
  }
  /* 2042c0: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2114244));
  fn2_24b720(c);
  /* 2042c4: mov x2, x22 */
  ARC_X_W(c, 2, ARC_X_R(c, 22));
  /* 2042c8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 2042cc: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 2042d0: mov x3, x20 */
  ARC_X_W(c, 3, ARC_X_R(c, 20));
  /* 2042d4: b #0x2041e4 */
  goto L_2041e4;
}

void fn2_2060b4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077977780));
  /* 2060b4: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 2060b8: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 2060bc: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 2060c0: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 2060c4: adrp x8, #0x261000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 2060c8: add x8, x8, #0x7e8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2024)));
  /* 2060cc: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 2060d0: tbz w8, #0, #0x206110 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_206110;
L_2060d4:;
  /* 2060d4: adrp x9, #0x258000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 2060d8: adrp x8, #0x261000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 2060dc: add x3, x29, #0x18 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 2060e0: ldr x9, [x9, #0x980] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(2432))));
  /* 2060e4: ldr x8, [x8, #0x7e0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2016))));
  /* 2060e8: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 2060ec: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 2060f0: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* 2060f4: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 2060f8: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2121980));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 2060fc: ldr w0, [x29, #0x18] */
  ARC_W_W(c, 0, arc_ld32((ARC_X_R(c, 29) + INT64_C(24))));
  /* 206100: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 206104: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 206108: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 20610c: ret  */
  return;
L_206110:;
  /* 206110: adrp x8, #0x261000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 206114: add x8, x8, #0x7e8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2024)));
  /* 206118: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 20611c: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 206120: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2122020));
  fn2_24b710(c);
  /* 206124: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 206128: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 20612c: cbz w8, #0x2060d4 */
  if ((ARC_W_R(c, 8)) == 0) goto L_2060d4;
  /* 206130: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 206134: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 206138: ldr x21, [x8] */
  ARC_X_W(c, 21, arc_ld64(ARC_X_R(c, 8)));
  /* 20613c: bl #0x2086f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2122048));
  fn2_2086f8(c);
  /* 206140: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 206144: adrp x1, #0x35000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(217088)));
  /* 206148: add x1, x1, #0x908 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2312)));
  /* 20614c: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 206150: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 206154: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2122072));
  fn2_1b8fd4(c);
  /* 206158: mov w2, #0x525a */
  ARC_W_W(c, 2, UINT64_C(21082));
  /* 20615c: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 206160: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 206164: movk w2, #0xe8c5, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(3905224704)));
  /* 206168: blr x21 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2122092));
  arc_dispatch(c, ARC_X_R(c, 21));
  /* 20616c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 206170: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 206174: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2122104));
  fn2_1d2d24(c);
  /* 206178: adrp x0, #0x261000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 20617c: add x0, x0, #0x7e0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2016)));
  /* 206180: str x20, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 20));
  }
  /* 206184: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2122120));
  fn2_24b720(c);
  /* 206188: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 20618c: b #0x2060d4 */
  goto L_2060d4;
}

void fn2_207ed4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077985492));
  /* 207ed4: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* 207ed8: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 207edc: str x23, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 23));
  /* 207ee0: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 207ee4: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 207ee8: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 207eec: adrp x9, #0x261000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 207ef0: add x9, x9, #0x9e8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(2536)));
  /* 207ef4: ldarb w9, [x9] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 9)));
  /* 207ef8: tbz w9, #0, #0x207f3c */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_207f3c;
L_207efc:;
  /* 207efc: and w9, w1, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 1) & UINT64_C(1)));
  /* 207f00: adrp x10, #0x261000 */
  ARC_X_W(c, 10, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 207f04: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 207f08: sturb w9, [x29, #-4] */
  arc_st8((ARC_X_R(c, 29) + INT64_C(-4)), ARC_W_R(c, 9));
  /* 207f0c: ldr x9, [x10, #0x9e0] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 10) + INT64_C(2528))));
  /* 207f10: sub x10, x29, #4 */
  ARC_X_W(c, 10, (ARC_X_R(c, 29) - UINT64_C(4)));
  /* 207f14: add x2, x29, #0x18 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 207f18: str x10, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 10));
  /* 207f1c: mov x0, x9 */
  ARC_X_W(c, 0, ARC_X_R(c, 9));
  /* 207f20: bl #0x20878c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2129700));
  fn2_20878c(c);
  /* 207f24: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 207f28: ldr x23, [sp, #0x20] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(32))));
  /* 207f2c: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 207f30: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 207f34: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* 207f38: ret  */
  return;
L_207f3c:;
  /* 207f3c: adrp x9, #0x261000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 207f40: add x9, x9, #0x9e8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(2536)));
  /* 207f44: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 207f48: mov x0, x9 */
  ARC_X_W(c, 0, ARC_X_R(c, 9));
  /* 207f4c: mov x20, x8 */
  ARC_X_W(c, 20, ARC_X_R(c, 8));
  /* 207f50: mov w21, w1 */
  ARC_W_W(c, 21, ARC_W_R(c, 1));
  /* 207f54: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2129752));
  fn2_24b710(c);
  /* 207f58: mov w1, w21 */
  ARC_W_W(c, 1, ARC_W_R(c, 21));
  /* 207f5c: mov x8, x20 */
  ARC_X_W(c, 8, ARC_X_R(c, 20));
  /* 207f60: mov w9, w0 */
  ARC_W_W(c, 9, ARC_W_R(c, 0));
  /* 207f64: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 207f68: cbz w9, #0x207efc */
  if ((ARC_W_R(c, 9)) == 0) goto L_207efc;
  /* 207f6c: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 207f70: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 207f74: ldr x23, [x8] */
  ARC_X_W(c, 23, arc_ld64(ARC_X_R(c, 8)));
  /* 207f78: bl #0x2086f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2129788));
  fn2_2086f8(c);
  /* 207f7c: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 207f80: adrp x1, #0x21000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(135168)));
  /* 207f84: add x1, x1, #0x438 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1080)));
  /* 207f88: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 207f8c: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 207f90: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2129812));
  fn2_1b8fd4(c);
  /* 207f94: mov w2, #0x43a5 */
  ARC_W_W(c, 2, UINT64_C(17317));
  /* 207f98: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 207f9c: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 207fa0: movk w2, #0x340d, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(873267200)));
  /* 207fa4: blr x23 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2129832));
  arc_dispatch(c, ARC_X_R(c, 23));
  /* 207fa8: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 207fac: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 207fb0: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2129844));
  fn2_1d2d24(c);
  /* 207fb4: adrp x0, #0x261000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 207fb8: add x0, x0, #0x9e0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2528)));
  /* 207fbc: str x22, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 22));
  }
  /* 207fc0: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2129860));
  fn2_24b720(c);
  /* 207fc4: mov w1, w21 */
  ARC_W_W(c, 1, ARC_W_R(c, 21));
  /* 207fc8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 207fcc: mov x8, x20 */
  ARC_X_W(c, 8, ARC_X_R(c, 20));
  /* 207fd0: b #0x207efc */
  goto L_207efc;
}

void fn2_2096ac(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077991596));
  /* 2096ac: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 2096b0: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 2096b4: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 2096b8: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 2096bc: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 2096c0: adrp x9, #0x261000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 2096c4: add x9, x9, #0xb28 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(2856)));
  /* 2096c8: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* 2096cc: ldarb w9, [x9] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 9)));
  /* 2096d0: tbz w9, #0, #0x209730 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_209730;
L_2096d4:;
  /* 2096d4: adrp x8, #0x261000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 2096d8: ldr x21, [x0, #0x10] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 2096dc: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 2096e0: ldr x20, [x8, #0xb20] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 8) + INT64_C(2848))));
  /* 2096e4: bl #0x1ccc74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2135784));
  fn2_1ccc74(c);
  /* 2096e8: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 2096ec: add x3, sp, #8 */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(8)));
  /* 2096f0: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 2096f4: ldr x8, [x8, #0x980] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2432))));
  /* 2096f8: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 2096fc: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 209700: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 209704: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2135816));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 209708: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 20970c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 209710: bl #0x1ccc88 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2135828));
  fn2_1ccc88(c);
  /* 209714: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 209718: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2135836));
  fn2_1ccd9c(c);
  /* 20971c: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 209720: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 209724: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 209728: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 20972c: ret  */
  return;
L_209730:;
  /* 209730: adrp x8, #0x261000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 209734: add x8, x8, #0xb28 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2856)));
  /* 209738: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 20973c: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 209740: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2135876));
  fn2_24b710(c);
  /* 209744: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 209748: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 20974c: cbz w8, #0x2096d4 */
  if ((ARC_W_R(c, 8)) == 0) goto L_2096d4;
  /* 209750: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 209754: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 209758: ldr x22, [x8] */
  ARC_X_W(c, 22, arc_ld64(ARC_X_R(c, 8)));
  /* 20975c: bl #0x20c8c4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2135904));
  fn2_20c8c4(c);
  /* 209760: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 209764: adrp x1, #0x29000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(167936)));
  /* 209768: add x1, x1, #5 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(5)));
  /* 20976c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 209770: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 209774: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2135928));
  fn2_1b8fd4(c);
  /* 209778: mov w2, #0x3dd0 */
  ARC_W_W(c, 2, UINT64_C(15824));
  /* 20977c: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 209780: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 209784: movk w2, #0xc05, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(201654272)));
  /* 209788: blr x22 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2135948));
  arc_dispatch(c, ARC_X_R(c, 22));
  /* 20978c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 209790: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 209794: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2135960));
  fn2_1d2d24(c);
  /* 209798: adrp x0, #0x261000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 20979c: add x0, x0, #0xb20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2848)));
  /* 2097a0: str x20, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 20));
  }
  /* 2097a4: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2135976));
  fn2_24b720(c);
  /* 2097a8: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 2097ac: b #0x2096d4 */
  goto L_2096d4;
}

void fn2_20b54c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077999436));
  /* 20b54c: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* 20b550: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 20b554: str x21, [sp, #0x30] */
  arc_st64(((c)->sp + INT64_C(48)), ARC_X_R(c, 21));
  /* 20b558: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 20b55c: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 20b560: adrp x8, #0x261000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 20b564: add x8, x8, #0xd28 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3368)));
  /* 20b568: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 20b56c: tbz w8, #0, #0x20b5c4 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_20b5c4;
L_20b570:;
  /* 20b570: adrp x9, #0x258000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 20b574: adrp x8, #0x261000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 20b578: add x10, sp, #0x10 */
  ARC_X_W(c, 10, ((c)->sp + UINT64_C(16)));
  /* 20b57c: ldr x9, [x9, #0x980] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(2432))));
  /* 20b580: ldr x8, [x8, #0xd20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3360))));
  /* 20b584: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 20b588: sub x2, x29, #8 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 20b58c: add x3, x29, #0x18 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 20b590: str d0, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), (c)->q[0].u64[0]);
  /* 20b594: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* 20b598: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 20b59c: stur x10, [x29, #-8] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-8)), ARC_X_R(c, 10));
  /* 20b5a0: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2143652));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 20b5a4: ldrb w8, [x29, #0x18] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(24))));
  /* 20b5a8: cmp x8, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(0));
  /* 20b5ac: cset w0, ne */
  ARC_W_W(c, 0, (ARC_COND(c, 1) ? 1 : 0));
  /* 20b5b0: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 20b5b4: ldr x21, [sp, #0x30] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(48))));
  /* 20b5b8: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 20b5bc: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* 20b5c0: ret  */
  return;
L_20b5c4:;
  /* 20b5c4: adrp x8, #0x261000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 20b5c8: add x8, x8, #0xd28 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3368)));
  /* 20b5cc: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 20b5d0: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 20b5d4: str d0, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), (c)->q[0].u64[0]);
  /* 20b5d8: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2143708));
  fn2_24b710(c);
  /* 20b5dc: ldr d0, [sp, #8] */
  arc_du_w(c, 0, arc_ld64(((c)->sp + INT64_C(8))));
  /* 20b5e0: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 20b5e4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 20b5e8: cbz w8, #0x20b570 */
  if ((ARC_W_R(c, 8)) == 0) goto L_20b570;
  /* 20b5ec: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 20b5f0: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 20b5f4: ldr x21, [x8] */
  ARC_X_W(c, 21, arc_ld64(ARC_X_R(c, 8)));
  /* 20b5f8: bl #0x20c8c4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2143740));
  fn2_20c8c4(c);
  /* 20b5fc: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 20b600: adrp x1, #0x28000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(163840)));
  /* 20b604: add x1, x1, #0x33c */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(828)));
  /* 20b608: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 20b60c: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 20b610: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2143764));
  fn2_1b8fd4(c);
  /* 20b614: mov w2, #0xfaa6 */
  ARC_W_W(c, 2, UINT64_C(64166));
  /* 20b618: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 20b61c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 20b620: movk w2, #0x13b5, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(330629120)));
  /* 20b624: blr x21 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2143784));
  arc_dispatch(c, ARC_X_R(c, 21));
  /* 20b628: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 20b62c: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 20b630: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2143796));
  fn2_1d2d24(c);
  /* 20b634: adrp x0, #0x261000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 20b638: add x0, x0, #0xd20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3360)));
  /* 20b63c: str x20, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 20));
  }
  /* 20b640: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2143812));
  fn2_24b720(c);
  /* 20b644: ldr d0, [sp, #8] */
  arc_du_w(c, 0, arc_ld64(((c)->sp + INT64_C(8))));
  /* 20b648: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 20b64c: b #0x20b570 */
  goto L_20b570;
}

void fn2_20d410(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078007312));
  /* 20d410: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 20d414: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 20d418: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 20d41c: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 20d420: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 20d424: adrp x8, #0x261000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 20d428: add x8, x8, #0xf18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3864)));
  /* 20d42c: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 20d430: tbz w8, #0, #0x20d47c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_20d47c;
L_20d434:;
  /* 20d434: adrp x10, #0x258000 */
  ARC_X_W(c, 10, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 20d438: adrp x8, #0x261000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 20d43c: sxtw x11, w1 */
  ARC_X_W(c, 11, ((int64_t)(int32_t)(ARC_W_R(c, 1))));
  /* 20d440: ldr x10, [x10, #0x980] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 10) + INT64_C(2432))));
  /* 20d444: ldr x8, [x8, #0xf10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3856))));
  /* 20d448: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 20d44c: mov x9, sp */
  ARC_X_W(c, 9, (c)->sp);
  /* 20d450: add x2, sp, #8 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(8)));
  /* 20d454: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* 20d458: ldr x10, [x10] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 10)));
  /* 20d45c: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 20d460: stp x11, x9, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 11));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 20d464: blr x10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2151528));
  arc_dispatch(c, ARC_X_R(c, 10));
  /* 20d468: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 20d46c: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 20d470: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 20d474: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 20d478: ret  */
  return;
L_20d47c:;
  /* 20d47c: adrp x8, #0x261000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 20d480: add x8, x8, #0xf18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3864)));
  /* 20d484: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 20d488: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 20d48c: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 20d490: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2151572));
  fn2_24b710(c);
  /* 20d494: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 20d498: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 20d49c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 20d4a0: cbz w8, #0x20d434 */
  if ((ARC_W_R(c, 8)) == 0) goto L_20d434;
  /* 20d4a4: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 20d4a8: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 20d4ac: ldr x22, [x8] */
  ARC_X_W(c, 22, arc_ld64(ARC_X_R(c, 8)));
  /* 20d4b0: bl #0x20df5c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2151604));
  fn2_20df5c(c);
  /* 20d4b4: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 20d4b8: adrp x1, #0x1c000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(114688)));
  /* 20d4bc: add x1, x1, #0x8bf */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2239)));
  /* 20d4c0: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 20d4c4: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 20d4c8: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2151628));
  fn2_1b8fd4(c);
  /* 20d4cc: mov w2, #0x1009 */
  ARC_W_W(c, 2, UINT64_C(4105));
  /* 20d4d0: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 20d4d4: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 20d4d8: movk w2, #0x4cad, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(1286406144)));
  /* 20d4dc: blr x22 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2151648));
  arc_dispatch(c, ARC_X_R(c, 22));
  /* 20d4e0: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 20d4e4: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 20d4e8: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2151660));
  fn2_1d2d24(c);
  /* 20d4ec: adrp x0, #0x261000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 20d4f0: add x0, x0, #0xf10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3856)));
  /* 20d4f4: str x21, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 21));
  }
  /* 20d4f8: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2151676));
  fn2_24b720(c);
  /* 20d4fc: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 20d500: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 20d504: b #0x20d434 */
  goto L_20d434;
}

void fn2_20f224(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078015012));
  /* 20f224: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* 20f228: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 20f22c: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 20f230: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 20f234: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 20f238: adrp x9, #0x262000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 20f23c: add x9, x9, #0xc0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(192)));
  /* 20f240: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 20f244: ldarb w9, [x9] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 9)));
  /* 20f248: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* 20f24c: tbz w9, #0, #0x20f2ac */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_20f2ac;
L_20f250:;
  /* 20f250: adrp x8, #0x262000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 20f254: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 20f258: ldr x21, [x8, #0xb8] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 8) + INT64_C(184))));
  /* 20f25c: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2159200));
  fn2_1bc084(c);
  /* 20f260: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 20f264: mov x2, sp */
  ARC_X_W(c, 2, (c)->sp);
  /* 20f268: add x3, sp, #8 */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(8)));
  /* 20f26c: ldr x8, [x8, #0x980] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2432))));
  /* 20f270: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 20f274: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 20f278: str x20, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 20));
  /* 20f27c: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 20f280: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2159236));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 20f284: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 20f288: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 20f28c: bl #0x1bc0b8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2159248));
  fn2_1bc0b8(c);
  /* 20f290: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 20f294: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2159256));
  fn2_1bc620(c);
  /* 20f298: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 20f29c: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 20f2a0: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 20f2a4: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* 20f2a8: ret  */
  return;
L_20f2ac:;
  /* 20f2ac: adrp x0, #0x262000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 20f2b0: add x0, x0, #0xc0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(192)));
  /* 20f2b4: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2159288));
  fn2_24b710(c);
  /* 20f2b8: cbz w0, #0x20f250 */
  if ((ARC_W_R(c, 0)) == 0) goto L_20f250;
  /* 20f2bc: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 20f2c0: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 20f2c4: ldr x22, [x8] */
  ARC_X_W(c, 22, arc_ld64(ARC_X_R(c, 8)));
  /* 20f2c8: bl #0x20fb34 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2159308));
  fn2_20fb34(c);
  /* 20f2cc: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 20f2d0: adrp x1, #0x1f000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(126976)));
  /* 20f2d4: add x1, x1, #0x5ff */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1535)));
  /* 20f2d8: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 20f2dc: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 20f2e0: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2159332));
  fn2_1b8fd4(c);
  /* 20f2e4: mov w2, #0xb1ba */
  ARC_W_W(c, 2, UINT64_C(45498));
  /* 20f2e8: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 20f2ec: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 20f2f0: movk w2, #0x126b, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(309002240)));
  /* 20f2f4: blr x22 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2159352));
  arc_dispatch(c, ARC_X_R(c, 22));
  /* 20f2f8: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 20f2fc: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 20f300: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2159364));
  fn2_1d2d24(c);
  /* 20f304: adrp x0, #0x262000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 20f308: add x0, x0, #0xb8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(184)));
  /* 20f30c: str x21, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 21));
  }
  /* 20f310: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2159380));
  fn2_24b720(c);
  /* 20f314: b #0x20f250 */
  goto L_20f250;
}

void fn2_210c5c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078021724));
  /* 210c5c: sub sp, sp, #0x80 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(128)));
  /* 210c60: stp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 210c64: str x25, [sp, #0x40] */
  arc_st64(((c)->sp + INT64_C(64)), ARC_X_R(c, 25));
  /* 210c68: stp x24, x23, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 210c6c: stp x22, x21, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 210c70: stp x20, x19, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 210c74: add x29, sp, #0x30 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(48)));
  /* 210c78: adrp x8, #0x262000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 210c7c: add x8, x8, #0x228 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(552)));
  /* 210c80: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 210c84: tbz w8, #0, #0x210cf0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_210cf0;
L_210c88:;
  /* 210c88: sxtw x8, w1 */
  ARC_X_W(c, 8, ((int64_t)(int32_t)(ARC_W_R(c, 1))));
  /* 210c8c: add x10, sp, #8 */
  ARC_X_W(c, 10, ((c)->sp + UINT64_C(8)));
  /* 210c90: adrp x11, #0x258000 */
  ARC_X_W(c, 11, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 210c94: add x9, x2, #0x10 */
  ARC_X_W(c, 9, (ARC_X_R(c, 2) + UINT64_C(16)));
  /* 210c98: cmp x2, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 2), UINT64_C(0));
  /* 210c9c: ldr x11, [x11, #0x980] */
  ARC_X_W(c, 11, arc_ld64((ARC_X_R(c, 11) + INT64_C(2432))));
  /* 210ca0: stp x8, x10, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 10));
  }
  /* 210ca4: adrp x8, #0x262000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 210ca8: csel x9, xzr, x9, eq */
  ARC_X_W(c, 9, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 9)));
  /* 210cac: ldr x8, [x8, #0x220] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(544))));
  /* 210cb0: stp x9, x3, [sp, #0x18] */
  { const uint64_t _pa = ((c)->sp + INT64_C(24));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 3));
  }
  /* 210cb4: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 210cb8: ldr x9, [x11] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 11)));
  /* 210cbc: add x2, sp, #0x10 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(16)));
  /* 210cc0: add x3, x29, #0x18 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 210cc4: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 210cc8: str x4, [sp, #0x28] */
  arc_st64(((c)->sp + INT64_C(40)), ARC_X_R(c, 4));
  /* 210ccc: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2165968));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 210cd0: ldr w0, [x29, #0x18] */
  ARC_W_W(c, 0, arc_ld32((ARC_X_R(c, 29) + INT64_C(24))));
  /* 210cd4: ldp x20, x19, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 210cd8: ldr x25, [sp, #0x40] */
  ARC_X_W(c, 25, arc_ld64(((c)->sp + INT64_C(64))));
  /* 210cdc: ldp x22, x21, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 210ce0: ldp x24, x23, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 210ce4: ldp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 210ce8: add sp, sp, #0x80 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(128)));
  /* 210cec: ret  */
  return;
L_210cf0:;
  /* 210cf0: adrp x8, #0x262000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 210cf4: add x8, x8, #0x228 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(552)));
  /* 210cf8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 210cfc: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 210d00: mov x20, x4 */
  ARC_X_W(c, 20, ARC_X_R(c, 4));
  /* 210d04: mov x21, x3 */
  ARC_X_W(c, 21, ARC_X_R(c, 3));
  /* 210d08: mov x22, x2 */
  ARC_X_W(c, 22, ARC_X_R(c, 2));
  /* 210d0c: mov x23, x1 */
  ARC_X_W(c, 23, ARC_X_R(c, 1));
  /* 210d10: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2166036));
  fn2_24b710(c);
  /* 210d14: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* 210d18: mov x2, x22 */
  ARC_X_W(c, 2, ARC_X_R(c, 22));
  /* 210d1c: mov x3, x21 */
  ARC_X_W(c, 3, ARC_X_R(c, 21));
  /* 210d20: mov x4, x20 */
  ARC_X_W(c, 4, ARC_X_R(c, 20));
  /* 210d24: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 210d28: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 210d2c: cbz w8, #0x210c88 */
  if ((ARC_W_R(c, 8)) == 0) goto L_210c88;
  /* 210d30: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 210d34: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 210d38: ldr x25, [x8] */
  ARC_X_W(c, 25, arc_ld64(ARC_X_R(c, 8)));
  /* 210d3c: bl #0x211364 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2166080));
  fn2_211364(c);
  /* 210d40: mov x24, x0 */
  ARC_X_W(c, 24, ARC_X_R(c, 0));
  /* 210d44: adrp x1, #0x2c000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(180224)));
  /* 210d48: add x1, x1, #0x5bf */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1471)));
  /* 210d4c: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 210d50: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 210d54: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2166104));
  fn2_1b8fd4(c);
  /* 210d58: mov w2, #0xed13 */
  ARC_W_W(c, 2, UINT64_C(60691));
  /* 210d5c: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* 210d60: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 210d64: movk w2, #0x7bd3, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(2077425664)));
  /* 210d68: blr x25 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2166124));
  arc_dispatch(c, ARC_X_R(c, 25));
  /* 210d6c: mov x24, x0 */
  ARC_X_W(c, 24, ARC_X_R(c, 0));
  /* 210d70: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 210d74: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2166136));
  fn2_1d2d24(c);
  /* 210d78: adrp x0, #0x262000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 210d7c: add x0, x0, #0x220 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(544)));
  /* 210d80: str x24, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 24));
  }
  /* 210d84: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2166152));
  fn2_24b720(c);
  /* 210d88: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* 210d8c: mov x2, x22 */
  ARC_X_W(c, 2, ARC_X_R(c, 22));
  /* 210d90: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 210d94: mov x3, x21 */
  ARC_X_W(c, 3, ARC_X_R(c, 21));
  /* 210d98: mov x4, x20 */
  ARC_X_W(c, 4, ARC_X_R(c, 20));
  /* 210d9c: b #0x210c88 */
  goto L_210c88;
}

void fn2_212410(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078027792));
  /* 212410: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 212414: ret  */
  return;
}

void fn2_213318(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078031640));
  /* 213318: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 21331c: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 213320: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 213324: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 213328: adrp x8, #0x262000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 21332c: add x8, x8, #0x4c8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1224)));
  /* 213330: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 213334: tbz w8, #0, #0x213380 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_213380;
L_213338:;
  /* 213338: adrp x9, #0x258000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 21333c: adrp x8, #0x262000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 213340: add x3, x29, #0x18 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 213344: ldr x9, [x9, #0x980] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(2432))));
  /* 213348: ldr x8, [x8, #0x4c0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(1216))));
  /* 21334c: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 213350: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 213354: str xzr, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 31));
  /* 213358: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* 21335c: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 213360: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2175844));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 213364: ldr x0, [x29, #0x18] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(24))));
  /* 213368: cbz x0, #0x213370 */
  if ((ARC_X_R(c, 0)) == 0) goto L_213370;
  /* 21336c: bl #0x1b62dc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2175856));
  fn2_1b62dc(c);
L_213370:;
  /* 213370: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 213374: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 213378: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 21337c: ret  */
  return;
L_213380:;
  /* 213380: adrp x8, #0x262000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 213384: add x8, x8, #0x4c8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1224)));
  /* 213388: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 21338c: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 213390: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2175892));
  fn2_24b710(c);
  /* 213394: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 213398: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 21339c: cbz w8, #0x213338 */
  if ((ARC_W_R(c, 8)) == 0) goto L_213338;
  /* 2133a0: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 2133a4: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 2133a8: ldr x21, [x8] */
  ARC_X_W(c, 21, arc_ld64(ARC_X_R(c, 8)));
  /* 2133ac: bl #0x219a98 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2175920));
  fn2_219a98(c);
  /* 2133b0: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 2133b4: adrp x1, #0x22000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(139264)));
  /* 2133b8: add x1, x1, #0x21 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(33)));
  /* 2133bc: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 2133c0: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 2133c4: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2175944));
  fn2_1b8fd4(c);
  /* 2133c8: mov w2, #0xcff4 */
  ARC_W_W(c, 2, UINT64_C(53236));
  /* 2133cc: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 2133d0: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 2133d4: movk w2, #0xbc5d, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(3160211456)));
  /* 2133d8: blr x21 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2175964));
  arc_dispatch(c, ARC_X_R(c, 21));
  /* 2133dc: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 2133e0: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 2133e4: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2175976));
  fn2_1d2d24(c);
  /* 2133e8: adrp x0, #0x262000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 2133ec: add x0, x0, #0x4c0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1216)));
  /* 2133f0: str x20, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 20));
  }
  /* 2133f4: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2175992));
  fn2_24b720(c);
  /* 2133f8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 2133fc: b #0x213338 */
  goto L_213338;
}

void fn2_215300(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078039808));
  /* 215300: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 215304: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 215308: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 21530c: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 215310: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 215314: adrp x8, #0x262000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 215318: add x8, x8, #0x6c8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1736)));
  /* 21531c: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 215320: tbz w8, #0, #0x215370 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_215370;
L_215324:;
  /* 215324: adrp x10, #0x258000 */
  ARC_X_W(c, 10, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 215328: and w8, w1, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 1) & UINT64_C(1)));
  /* 21532c: adrp x9, #0x262000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 215330: ldr x10, [x10, #0x980] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 10) + INT64_C(2432))));
  /* 215334: strb w8, [sp, #4] */
  arc_st8(((c)->sp + INT64_C(4)), ARC_W_R(c, 8));
  /* 215338: ldr x8, [x9, #0x6c0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(1728))));
  /* 21533c: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 215340: add x9, sp, #4 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(4)));
  /* 215344: add x2, sp, #8 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(8)));
  /* 215348: ldr x10, [x10] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 10)));
  /* 21534c: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 215350: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* 215354: str x9, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 9));
  /* 215358: blr x10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2184028));
  arc_dispatch(c, ARC_X_R(c, 10));
  /* 21535c: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 215360: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 215364: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 215368: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 21536c: ret  */
  return;
L_215370:;
  /* 215370: adrp x8, #0x262000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 215374: add x8, x8, #0x6c8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1736)));
  /* 215378: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 21537c: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 215380: mov w20, w1 */
  ARC_W_W(c, 20, ARC_W_R(c, 1));
  /* 215384: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2184072));
  fn2_24b710(c);
  /* 215388: mov w1, w20 */
  ARC_W_W(c, 1, ARC_W_R(c, 20));
  /* 21538c: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 215390: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 215394: cbz w8, #0x215324 */
  if ((ARC_W_R(c, 8)) == 0) goto L_215324;
  /* 215398: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 21539c: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 2153a0: ldr x22, [x8] */
  ARC_X_W(c, 22, arc_ld64(ARC_X_R(c, 8)));
  /* 2153a4: bl #0x219a98 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2184104));
  fn2_219a98(c);
  /* 2153a8: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 2153ac: adrp x1, #0x34000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(212992)));
  /* 2153b0: add x1, x1, #0xcec */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3308)));
  /* 2153b4: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 2153b8: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 2153bc: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2184128));
  fn2_1b8fd4(c);
  /* 2153c0: mov w2, #0x76c2 */
  ARC_W_W(c, 2, UINT64_C(30402));
  /* 2153c4: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 2153c8: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 2153cc: movk w2, #0x9a29, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(2586378240)));
  /* 2153d0: blr x22 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2184148));
  arc_dispatch(c, ARC_X_R(c, 22));
  /* 2153d4: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 2153d8: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 2153dc: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2184160));
  fn2_1d2d24(c);
  /* 2153e0: adrp x0, #0x262000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 2153e4: add x0, x0, #0x6c0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1728)));
  /* 2153e8: str x21, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 21));
  }
  /* 2153ec: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2184176));
  fn2_24b720(c);
  /* 2153f0: mov w1, w20 */
  ARC_W_W(c, 1, ARC_W_R(c, 20));
  /* 2153f4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 2153f8: b #0x215324 */
  goto L_215324;
}

void fn2_21709c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078047388));
  /* 21709c: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 2170a0: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 2170a4: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 2170a8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 2170ac: adrp x8, #0x262000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 2170b0: add x8, x8, #0x8c8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2248)));
  /* 2170b4: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 2170b8: tbz w8, #0, #0x2170f8 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_2170f8;
L_2170bc:;
  /* 2170bc: adrp x9, #0x258000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 2170c0: adrp x8, #0x262000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 2170c4: add x3, x29, #0x18 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 2170c8: ldr x9, [x9, #0x980] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(2432))));
  /* 2170cc: ldr x8, [x8, #0x8c0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2240))));
  /* 2170d0: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 2170d4: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 2170d8: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* 2170dc: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 2170e0: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2191588));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 2170e4: ldr w0, [x29, #0x18] */
  ARC_W_W(c, 0, arc_ld32((ARC_X_R(c, 29) + INT64_C(24))));
  /* 2170e8: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 2170ec: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 2170f0: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 2170f4: ret  */
  return;
L_2170f8:;
  /* 2170f8: adrp x8, #0x262000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 2170fc: add x8, x8, #0x8c8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2248)));
  /* 217100: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 217104: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 217108: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2191628));
  fn2_24b710(c);
  /* 21710c: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 217110: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 217114: cbz w8, #0x2170bc */
  if ((ARC_W_R(c, 8)) == 0) goto L_2170bc;
  /* 217118: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 21711c: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 217120: ldr x21, [x8] */
  ARC_X_W(c, 21, arc_ld64(ARC_X_R(c, 8)));
  /* 217124: bl #0x219a98 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2191656));
  fn2_219a98(c);
  /* 217128: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 21712c: adrp x1, #0x2c000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(180224)));
  /* 217130: add x1, x1, #0xc57 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3159)));
  /* 217134: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 217138: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 21713c: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2191680));
  fn2_1b8fd4(c);
  /* 217140: mov w2, #0x8ac0 */
  ARC_W_W(c, 2, UINT64_C(35520));
  /* 217144: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 217148: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 21714c: movk w2, #0xae11, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(2920349696)));
  /* 217150: blr x21 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2191700));
  arc_dispatch(c, ARC_X_R(c, 21));
  /* 217154: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 217158: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 21715c: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2191712));
  fn2_1d2d24(c);
  /* 217160: adrp x0, #0x262000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 217164: add x0, x0, #0x8c0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2240)));
  /* 217168: str x20, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 20));
  }
  /* 21716c: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2191728));
  fn2_24b720(c);
  /* 217170: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 217174: b #0x2170bc */
  goto L_2170bc;
}

void fn2_218eac(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078055084));
  /* 218eac: sub sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(96)));
  /* 218eb0: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 218eb4: stp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 218eb8: stp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 218ebc: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 218ec0: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 218ec4: adrp x9, #0x262000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 218ec8: add x9, x9, #0xac8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(2760)));
  /* 218ecc: mov x20, x2 */
  ARC_X_W(c, 20, ARC_X_R(c, 2));
  /* 218ed0: ldarb w9, [x9] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 9)));
  /* 218ed4: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* 218ed8: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* 218edc: tbz w9, #0, #0x218f44 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_218f44;
L_218ee0:;
  /* 218ee0: adrp x8, #0x262000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 218ee4: ldr x23, [x0, #0x10] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 218ee8: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 218eec: ldr x22, [x8, #0xac0] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 8) + INT64_C(2752))));
  /* 218ef0: bl #0x1ccc74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2199284));
  fn2_1ccc74(c);
  /* 218ef4: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 218ef8: add x2, sp, #8 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(8)));
  /* 218efc: sub x3, x29, #8 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 218f00: ldr x8, [x8, #0x980] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2432))));
  /* 218f04: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 218f08: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* 218f0c: stp x21, x20, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 21));
    arc_st64(_pa + 8, ARC_X_R(c, 20));
  }
  /* 218f10: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 218f14: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2199320));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 218f18: sub x1, x29, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 218f1c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 218f20: bl #0x1ccc88 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2199332));
  fn2_1ccc88(c);
  /* 218f24: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 218f28: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2199340));
  fn2_1ccd9c(c);
  /* 218f2c: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 218f30: ldp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 218f34: ldp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 218f38: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 218f3c: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* 218f40: ret  */
  return;
L_218f44:;
  /* 218f44: adrp x8, #0x262000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 218f48: add x8, x8, #0xac8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2760)));
  /* 218f4c: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* 218f50: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 218f54: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2199384));
  fn2_24b710(c);
  /* 218f58: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 218f5c: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 218f60: cbz w8, #0x218ee0 */
  if ((ARC_W_R(c, 8)) == 0) goto L_218ee0;
  /* 218f64: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 218f68: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 218f6c: ldr x24, [x8] */
  ARC_X_W(c, 24, arc_ld64(ARC_X_R(c, 8)));
  /* 218f70: bl #0x219a98 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2199412));
  fn2_219a98(c);
  /* 218f74: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 218f78: adrp x1, #0x22000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(139264)));
  /* 218f7c: add x1, x1, #0x63 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(99)));
  /* 218f80: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 218f84: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 218f88: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2199436));
  fn2_1b8fd4(c);
  /* 218f8c: mov w2, #0xaf7b */
  ARC_W_W(c, 2, UINT64_C(44923));
  /* 218f90: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 218f94: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 218f98: movk w2, #0xc758, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(3344433152)));
  /* 218f9c: blr x24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2199456));
  arc_dispatch(c, ARC_X_R(c, 24));
  /* 218fa0: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 218fa4: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 218fa8: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2199468));
  fn2_1d2d24(c);
  /* 218fac: adrp x0, #0x262000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 218fb0: add x0, x0, #0xac0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2752)));
  /* 218fb4: str x22, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 22));
  }
  /* 218fb8: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2199484));
  fn2_24b720(c);
  /* 218fbc: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 218fc0: b #0x218ee0 */
  goto L_218ee0;
}

void fn2_21a064(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078059620));
  /* 21a064: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 21a068: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 21a06c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 21a070: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 21a074: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* 21a078: add x1, x1, #0xb6f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2927)));
  /* 21a07c: mov w0, #0x18 */
  ARC_W_W(c, 0, UINT64_C(24));
  /* 21a080: mov x2, x1 */
  ARC_X_W(c, 2, ARC_X_R(c, 1));
  /* 21a084: bl #0x1b5d1c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2203784));
  fn2_1b5d1c(c);
  /* 21a088: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 21a08c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 21a090: bl #0x1afdf8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2203796));
  fn2_1afdf8(c);
  /* 21a094: adrp x8, #0x256000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2449408)));
  /* 21a098: add x8, x8, #0xdd8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3544)));
  /* 21a09c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 21a0a0: str x8, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 8));
  /* 21a0a4: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 21a0a8: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 21a0ac: ret  */
  return;
}

void fn2_21b9ec(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078066156));
  /* 21b9ec: sub sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(96)));
  /* 21b9f0: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 21b9f4: str x23, [sp, #0x30] */
  arc_st64(((c)->sp + INT64_C(48)), ARC_X_R(c, 23));
  /* 21b9f8: stp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 21b9fc: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 21ba00: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 21ba04: adrp x9, #0x262000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 21ba08: add x9, x9, #0xcd0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(3280)));
  /* 21ba0c: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* 21ba10: ldarb w9, [x9] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 9)));
  /* 21ba14: tbz w9, #0, #0x21ba84 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_21ba84;
L_21ba18:;
  /* 21ba18: adrp x8, #0x262000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 21ba1c: ldr x21, [x0, #0x10] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 21ba20: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 21ba24: ldr x20, [x8, #0xcc8] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 8) + INT64_C(3272))));
  /* 21ba28: str x1, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 1));
  /* 21ba2c: bl #0x1ddc90 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2210352));
  fn2_1ddc90(c);
  /* 21ba30: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 21ba34: add x9, sp, #8 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(8)));
  /* 21ba38: add x2, x29, #0x18 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 21ba3c: ldr x8, [x8, #0x980] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2432))));
  /* 21ba40: add x3, sp, #0x10 */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(16)));
  /* 21ba44: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 21ba48: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 21ba4c: str x9, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 9));
  /* 21ba50: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 21ba54: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2210392));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 21ba58: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* 21ba5c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 21ba60: bl #0x1ddca4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2210404));
  fn2_1ddca4(c);
  /* 21ba64: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 21ba68: bl #0x1dde08 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2210412));
  fn2_1dde08(c);
  /* 21ba6c: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 21ba70: ldr x23, [sp, #0x30] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(48))));
  /* 21ba74: ldp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 21ba78: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 21ba7c: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* 21ba80: ret  */
  return;
L_21ba84:;
  /* 21ba84: adrp x8, #0x262000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 21ba88: add x8, x8, #0xcd0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3280)));
  /* 21ba8c: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 21ba90: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 21ba94: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 21ba98: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2210460));
  fn2_24b710(c);
  /* 21ba9c: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 21baa0: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 21baa4: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 21baa8: cbz w8, #0x21ba18 */
  if ((ARC_W_R(c, 8)) == 0) goto L_21ba18;
  /* 21baac: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 21bab0: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 21bab4: ldr x23, [x8] */
  ARC_X_W(c, 23, arc_ld64(ARC_X_R(c, 8)));
  /* 21bab8: bl #0x21f8e0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2210492));
  fn2_21f8e0(c);
  /* 21babc: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 21bac0: adrp x1, #0x1f000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(126976)));
  /* 21bac4: add x1, x1, #0xf1e */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3870)));
  /* 21bac8: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 21bacc: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 21bad0: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2210516));
  fn2_1b8fd4(c);
  /* 21bad4: mov w2, #0xc288 */
  ARC_W_W(c, 2, UINT64_C(49800));
  /* 21bad8: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* 21badc: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 21bae0: movk w2, #0xc1ae, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(3249405952)));
  /* 21bae4: blr x23 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2210536));
  arc_dispatch(c, ARC_X_R(c, 23));
  /* 21bae8: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 21baec: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 21baf0: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2210548));
  fn2_1d2d24(c);
  /* 21baf4: adrp x0, #0x262000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 21baf8: add x0, x0, #0xcc8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3272)));
  /* 21bafc: str x22, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 22));
  }
  /* 21bb00: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2210564));
  fn2_24b720(c);
  /* 21bb04: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 21bb08: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 21bb0c: b #0x21ba18 */
  goto L_21ba18;
}

void fn2_21da60(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078074464));
  /* 21da60: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 21da64: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 21da68: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 21da6c: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 21da70: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 21da74: adrp x9, #0x262000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 21da78: add x9, x9, #0xed0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(3792)));
  /* 21da7c: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* 21da80: ldarb w9, [x9] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 9)));
  /* 21da84: tbz w9, #0, #0x21dae4 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_21dae4;
L_21da88:;
  /* 21da88: adrp x8, #0x262000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 21da8c: ldr x21, [x0, #0x10] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 21da90: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 21da94: ldr x20, [x8, #0xec8] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 8) + INT64_C(3784))));
  /* 21da98: bl #0x1ccc74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2218652));
  fn2_1ccc74(c);
  /* 21da9c: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 21daa0: add x3, sp, #8 */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(8)));
  /* 21daa4: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 21daa8: ldr x8, [x8, #0x980] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2432))));
  /* 21daac: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 21dab0: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 21dab4: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 21dab8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2218684));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 21dabc: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 21dac0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 21dac4: bl #0x1ccc88 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2218696));
  fn2_1ccc88(c);
  /* 21dac8: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 21dacc: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2218704));
  fn2_1ccd9c(c);
  /* 21dad0: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 21dad4: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 21dad8: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 21dadc: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 21dae0: ret  */
  return;
L_21dae4:;
  /* 21dae4: adrp x8, #0x262000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 21dae8: add x8, x8, #0xed0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3792)));
  /* 21daec: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 21daf0: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 21daf4: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2218744));
  fn2_24b710(c);
  /* 21daf8: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 21dafc: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 21db00: cbz w8, #0x21da88 */
  if ((ARC_W_R(c, 8)) == 0) goto L_21da88;
  /* 21db04: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 21db08: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 21db0c: ldr x22, [x8] */
  ARC_X_W(c, 22, arc_ld64(ARC_X_R(c, 8)));
  /* 21db10: bl #0x21f8e0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2218772));
  fn2_21f8e0(c);
  /* 21db14: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 21db18: adrp x1, #0x2b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(176128)));
  /* 21db1c: add x1, x1, #0x263 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(611)));
  /* 21db20: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 21db24: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 21db28: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2218796));
  fn2_1b8fd4(c);
  /* 21db2c: mov w2, #0x3dd0 */
  ARC_W_W(c, 2, UINT64_C(15824));
  /* 21db30: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 21db34: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 21db38: movk w2, #0xc05, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(201654272)));
  /* 21db3c: blr x22 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2218816));
  arc_dispatch(c, ARC_X_R(c, 22));
  /* 21db40: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 21db44: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 21db48: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2218828));
  fn2_1d2d24(c);
  /* 21db4c: adrp x0, #0x262000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 21db50: add x0, x0, #0xec8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3784)));
  /* 21db54: str x20, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 20));
  }
  /* 21db58: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2218844));
  fn2_24b720(c);
  /* 21db5c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 21db60: b #0x21da88 */
  goto L_21da88;
}

void fn2_21f8e0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078082272));
  /* 21f8e0: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 21f8e4: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 21f8e8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 21f8ec: nop  */
  /* nop: no architectural effect here */
  /* 21f8f0: adr x8, #0x25cfc8 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2478024)));
  /* 21f8f4: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 21f8f8: tbz w8, #0, #0x21f910 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_21f910;
L_21f8fc:;
  /* 21f8fc: nop  */
  /* nop: no architectural effect here */
  /* 21f900: adr x0, #0x25cfc0 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478016)));
  /* 21f904: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 21f908: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 21f90c: ret  */
  return;
L_21f910:;
  /* 21f910: nop  */
  /* nop: no architectural effect here */
  /* 21f914: adr x0, #0x25cfc8 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478024)));
  /* 21f918: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2226460));
  fn2_24b710(c);
  /* 21f91c: cbz w0, #0x21f8fc */
  if ((ARC_W_R(c, 0)) == 0) goto L_21f8fc;
  /* 21f920: nop  */
  /* nop: no architectural effect here */
  /* 21f924: adr x19, #0x25cfc0 */
  ARC_X_W(c, 19, (arc_image_bases[2] + UINT64_C(2478016)));
  /* 21f928: adrp x1, #0x21000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(135168)));
  /* 21f92c: add x1, x1, #0x705 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1797)));
  /* 21f930: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 21f934: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 21f938: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2226492));
  fn2_1b8fd4(c);
  /* 21f93c: adrp x0, #0x257000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 21f940: nop  */
  /* nop: no architectural effect here */
  /* 21f944: adr x2, #0x24f980 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(2423168)));
  /* 21f948: ldr x0, [x0, #0xf88] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(3976))));
  /* 21f94c: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 21f950: bl #0x24b6f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2226516));
  fn2_24b6f0(c);
  /* 21f954: nop  */
  /* nop: no architectural effect here */
  /* 21f958: adr x0, #0x25cfc8 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478024)));
  /* 21f95c: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2226528));
  fn2_24b720(c);
  /* 21f960: nop  */
  /* nop: no architectural effect here */
  /* 21f964: adr x0, #0x25cfc0 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478016)));
  /* 21f968: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 21f96c: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 21f970: ret  */
  return;
}

void fn2_221308(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078088968));
  /* 221308: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* 22130c: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 221310: stp x24, x23, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 221314: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 221318: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 22131c: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 221320: adrp x9, #0x263000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 221324: add x9, x9, #0x250 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(592)));
  /* 221328: mov x19, x2 */
  ARC_X_W(c, 19, ARC_X_R(c, 2));
  /* 22132c: ldarb w9, [x9] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 9)));
  /* 221330: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 221334: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 221338: mov x21, x8 */
  ARC_X_W(c, 21, ARC_X_R(c, 8));
  /* 22133c: tbz w9, #0, #0x22138c */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_22138c;
L_221340:;
  /* 221340: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 221344: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2233160));
  fn2_1bc084(c);
  /* 221348: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 22134c: adrp x9, #0x263000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 221350: add x5, sp, #4 */
  ARC_X_W(c, 5, ((c)->sp + UINT64_C(4)));
  /* 221354: ldr x8, [x8, #0x978] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2424))));
  /* 221358: ldr x0, [x9, #0x248] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 9) + INT64_C(584))));
  /* 22135c: ldr x1, [x22, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 22) + INT64_C(16))));
  /* 221360: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* 221364: mov x3, x19 */
  ARC_X_W(c, 3, ARC_X_R(c, 19));
  /* 221368: mov x4, x21 */
  ARC_X_W(c, 4, ARC_X_R(c, 21));
  /* 22136c: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 221370: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2233204));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 221374: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 221378: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 22137c: ldp x24, x23, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 221380: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 221384: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* 221388: ret  */
  return;
L_22138c:;
  /* 22138c: adrp x0, #0x263000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 221390: add x0, x0, #0x250 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(592)));
  /* 221394: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2233240));
  fn2_24b710(c);
  /* 221398: cbz w0, #0x221340 */
  if ((ARC_W_R(c, 0)) == 0) goto L_221340;
  /* 22139c: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 2213a0: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 2213a4: ldr x24, [x8] */
  ARC_X_W(c, 24, arc_ld64(ARC_X_R(c, 8)));
  /* 2213a8: bl #0x222b84 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2233260));
  fn2_222b84(c);
  /* 2213ac: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* 2213b0: adrp x1, #0x29000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(167936)));
  /* 2213b4: add x1, x1, #0x658 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1624)));
  /* 2213b8: add x0, sp, #4 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(4)));
  /* 2213bc: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 2213c0: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2233284));
  fn2_1b8fd4(c);
  /* 2213c4: mov w2, #0x5af5 */
  ARC_W_W(c, 2, UINT64_C(23285));
  /* 2213c8: add x1, sp, #4 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(4)));
  /* 2213cc: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 2213d0: movk w2, #0xcaae, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(3400400896)));
  /* 2213d4: blr x24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2233304));
  arc_dispatch(c, ARC_X_R(c, 24));
  /* 2213d8: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* 2213dc: add x0, sp, #4 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(4)));
  /* 2213e0: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2233316));
  fn2_1d2d24(c);
  /* 2213e4: adrp x0, #0x263000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 2213e8: add x0, x0, #0x248 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(584)));
  /* 2213ec: str x23, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 23));
  }
  /* 2213f0: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2233332));
  fn2_24b720(c);
  /* 2213f4: b #0x221340 */
  goto L_221340;
}

void fn2_223204(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078096900));
  /* 223204: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 223208: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 22320c: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 223210: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 223214: adrp x8, #0x263000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 223218: add x8, x8, #0x430 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1072)));
  /* 22321c: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 223220: tbz w8, #0, #0x223260 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_223260;
L_223224:;
  /* 223224: adrp x9, #0x258000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 223228: adrp x8, #0x263000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 22322c: add x3, x29, #0x18 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 223230: ldr x9, [x9, #0x980] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(2432))));
  /* 223234: ldr x8, [x8, #0x428] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(1064))));
  /* 223238: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 22323c: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 223240: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* 223244: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 223248: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2241100));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 22324c: ldr w0, [x29, #0x18] */
  ARC_W_W(c, 0, arc_ld32((ARC_X_R(c, 29) + INT64_C(24))));
  /* 223250: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 223254: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 223258: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 22325c: ret  */
  return;
L_223260:;
  /* 223260: adrp x8, #0x263000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 223264: add x8, x8, #0x430 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1072)));
  /* 223268: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 22326c: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 223270: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2241140));
  fn2_24b710(c);
  /* 223274: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 223278: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 22327c: cbz w8, #0x223224 */
  if ((ARC_W_R(c, 8)) == 0) goto L_223224;
  /* 223280: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 223284: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 223288: ldr x21, [x8] */
  ARC_X_W(c, 21, arc_ld64(ARC_X_R(c, 8)));
  /* 22328c: bl #0x2234b4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2241168));
  fn2_2234b4(c);
  /* 223290: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 223294: adrp x1, #0x25000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(151552)));
  /* 223298: add x1, x1, #0x87 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(135)));
  /* 22329c: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 2232a0: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 2232a4: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2241192));
  fn2_1b8fd4(c);
  /* 2232a8: mov w2, #0x525a */
  ARC_W_W(c, 2, UINT64_C(21082));
  /* 2232ac: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 2232b0: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 2232b4: movk w2, #0xe8c5, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(3905224704)));
  /* 2232b8: blr x21 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2241212));
  arc_dispatch(c, ARC_X_R(c, 21));
  /* 2232bc: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 2232c0: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 2232c4: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2241224));
  fn2_1d2d24(c);
  /* 2232c8: adrp x0, #0x263000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 2232cc: add x0, x0, #0x428 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1064)));
  /* 2232d0: str x20, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 20));
  }
  /* 2232d4: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2241240));
  fn2_24b720(c);
  /* 2232d8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 2232dc: b #0x223224 */
  goto L_223224;
}

void fn2_225030(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078104624));
  /* 225030: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 225034: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 225038: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 22503c: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 225040: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 225044: adrp x8, #0x263000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 225048: add x8, x8, #0x5e8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1512)));
  /* 22504c: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 225050: tbz w8, #0, #0x225098 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_225098;
L_225054:;
  /* 225054: adrp x10, #0x258000 */
  ARC_X_W(c, 10, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 225058: adrp x8, #0x263000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 22505c: add x2, sp, #8 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(8)));
  /* 225060: ldr x10, [x10, #0x980] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 10) + INT64_C(2432))));
  /* 225064: ldr x8, [x8, #0x5e0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(1504))));
  /* 225068: ldr x9, [x0, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 22506c: str x1, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 1));
  /* 225070: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* 225074: ldr x10, [x10] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 10)));
  /* 225078: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 22507c: mov x1, x9 */
  ARC_X_W(c, 1, ARC_X_R(c, 9));
  /* 225080: blr x10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2248836));
  arc_dispatch(c, ARC_X_R(c, 10));
  /* 225084: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 225088: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 22508c: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 225090: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 225094: ret  */
  return;
L_225098:;
  /* 225098: adrp x8, #0x263000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 22509c: add x8, x8, #0x5e8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1512)));
  /* 2250a0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 2250a4: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 2250a8: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 2250ac: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2248880));
  fn2_24b710(c);
  /* 2250b0: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 2250b4: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 2250b8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 2250bc: cbz w8, #0x225054 */
  if ((ARC_W_R(c, 8)) == 0) goto L_225054;
  /* 2250c0: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 2250c4: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 2250c8: ldr x22, [x8] */
  ARC_X_W(c, 22, arc_ld64(ARC_X_R(c, 8)));
  /* 2250cc: bl #0x225860 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2248912));
  fn2_225860(c);
  /* 2250d0: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 2250d4: adrp x1, #0x1d000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(118784)));
  /* 2250d8: add x1, x1, #0xe50 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3664)));
  /* 2250dc: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 2250e0: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 2250e4: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2248936));
  fn2_1b8fd4(c);
  /* 2250e8: mov w2, #0x4ae9 */
  ARC_W_W(c, 2, UINT64_C(19177));
  /* 2250ec: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 2250f0: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 2250f4: movk w2, #0xf7ad, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(4155310080)));
  /* 2250f8: blr x22 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2248956));
  arc_dispatch(c, ARC_X_R(c, 22));
  /* 2250fc: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 225100: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 225104: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2248968));
  fn2_1d2d24(c);
  /* 225108: adrp x0, #0x263000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 22510c: add x0, x0, #0x5e0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1504)));
  /* 225110: str x21, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 21));
  }
  /* 225114: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2248984));
  fn2_24b720(c);
  /* 225118: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 22511c: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 225120: b #0x225054 */
  goto L_225054;
}

void fn2_226fbc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078112700));
  /* 226fbc: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 226fc0: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 226fc4: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 226fc8: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 226fcc: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 226fd0: adrp x9, #0x263000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 226fd4: add x9, x9, #0x7a8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(1960)));
  /* 226fd8: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* 226fdc: ldarb w9, [x9] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 9)));
  /* 226fe0: tbz w9, #0, #0x227038 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_227038;
L_226fe4:;
  /* 226fe4: adrp x8, #0x263000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 226fe8: ldr x21, [x0, #0x10] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 226fec: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 226ff0: ldr x20, [x8, #0x7a0] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 8) + INT64_C(1952))));
  /* 226ff4: bl #0x1d6d14 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2256888));
  fn2_1d6d14(c);
  /* 226ff8: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 226ffc: add x3, sp, #8 */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(8)));
  /* 227000: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 227004: ldr x8, [x8, #0x980] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2432))));
  /* 227008: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 22700c: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 227010: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 227014: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2256920));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 227018: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 22701c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 227020: bl #0x1d6d28 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2256932));
  fn2_1d6d28(c);
  /* 227024: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 227028: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 22702c: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 227030: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 227034: ret  */
  return;
L_227038:;
  /* 227038: adrp x8, #0x263000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 22703c: add x8, x8, #0x7a8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1960)));
  /* 227040: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 227044: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 227048: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2256972));
  fn2_24b710(c);
  /* 22704c: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 227050: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 227054: cbz w8, #0x226fe4 */
  if ((ARC_W_R(c, 8)) == 0) goto L_226fe4;
  /* 227058: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 22705c: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 227060: ldr x22, [x8] */
  ARC_X_W(c, 22, arc_ld64(ARC_X_R(c, 8)));
  /* 227064: bl #0x227e2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2257000));
  fn2_227e2c(c);
  /* 227068: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 22706c: adrp x1, #0x25000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(151552)));
  /* 227070: add x1, x1, #0xaf8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2808)));
  /* 227074: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 227078: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 22707c: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2257024));
  fn2_1b8fd4(c);
  /* 227080: mov w2, #0x43bc */
  ARC_W_W(c, 2, UINT64_C(17340));
  /* 227084: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 227088: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 22708c: movk w2, #0xaf87, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(2944860160)));
  /* 227090: blr x22 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2257044));
  arc_dispatch(c, ARC_X_R(c, 22));
  /* 227094: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 227098: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 22709c: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2257056));
  fn2_1d2d24(c);
  /* 2270a0: adrp x0, #0x263000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 2270a4: add x0, x0, #0x7a0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1952)));
  /* 2270a8: str x20, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 20));
  }
  /* 2270ac: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2257072));
  fn2_24b720(c);
  /* 2270b0: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 2270b4: b #0x226fe4 */
  goto L_226fe4;
}

void fn2_228a7c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078119548));
  /* 228a7c: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* 228a80: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 228a84: str x23, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 23));
  /* 228a88: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 228a8c: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 228a90: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 228a94: adrp x9, #0x263000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 228a98: add x9, x9, #0x930 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(2352)));
  /* 228a9c: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 228aa0: ldarb w9, [x9] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 9)));
  /* 228aa4: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* 228aa8: tbz w9, #0, #0x228b10 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_228b10;
L_228aac:;
  /* 228aac: adrp x8, #0x263000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 228ab0: ldr x22, [x0, #0x10] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 228ab4: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 228ab8: ldr x21, [x8, #0x928] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 8) + INT64_C(2344))));
  /* 228abc: bl #0x1e457c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2263744));
  fn2_1e457c(c);
  /* 228ac0: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 228ac4: add x2, x29, #0x18 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 228ac8: mov x3, sp */
  ARC_X_W(c, 3, (c)->sp);
  /* 228acc: ldr x8, [x8, #0x980] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2432))));
  /* 228ad0: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 228ad4: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 228ad8: str x20, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 20));
  /* 228adc: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 228ae0: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2263780));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 228ae4: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 228ae8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 228aec: bl #0x1e4590 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2263792));
  fn2_1e4590(c);
  /* 228af0: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 228af4: bl #0x1e46f4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2263800));
  fn2_1e46f4(c);
  /* 228af8: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 228afc: ldr x23, [sp, #0x20] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(32))));
  /* 228b00: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 228b04: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 228b08: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* 228b0c: ret  */
  return;
L_228b10:;
  /* 228b10: adrp x8, #0x263000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 228b14: add x8, x8, #0x930 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2352)));
  /* 228b18: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 228b1c: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 228b20: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2263844));
  fn2_24b710(c);
  /* 228b24: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 228b28: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 228b2c: cbz w8, #0x228aac */
  if ((ARC_W_R(c, 8)) == 0) goto L_228aac;
  /* 228b30: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 228b34: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 228b38: ldr x23, [x8] */
  ARC_X_W(c, 23, arc_ld64(ARC_X_R(c, 8)));
  /* 228b3c: bl #0x229110 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2263872));
  fn2_229110(c);
  /* 228b40: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 228b44: adrp x1, #0x22000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(139264)));
  /* 228b48: add x1, x1, #0xd8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(216)));
  /* 228b4c: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 228b50: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 228b54: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2263896));
  fn2_1b8fd4(c);
  /* 228b58: mov w2, #0xf5c6 */
  ARC_W_W(c, 2, UINT64_C(62918));
  /* 228b5c: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 228b60: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 228b64: movk w2, #0xd2ec, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(3538681856)));
  /* 228b68: blr x23 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2263916));
  arc_dispatch(c, ARC_X_R(c, 23));
  /* 228b6c: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 228b70: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 228b74: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2263928));
  fn2_1d2d24(c);
  /* 228b78: adrp x0, #0x263000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 228b7c: add x0, x0, #0x928 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2344)));
  /* 228b80: str x21, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 21));
  }
  /* 228b84: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2263944));
  fn2_24b720(c);
  /* 228b88: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 228b8c: b #0x228aac */
  goto L_228aac;
}

void fn2_229b1c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078123804));
  /* 229b1c: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 229b20: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 229b24: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 229b28: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 229b2c: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 229b30: adrp x8, #0x263000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 229b34: add x8, x8, #0xa40 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2624)));
  /* 229b38: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 229b3c: tbz w8, #0, #0x229b8c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_229b8c;
L_229b40:;
  /* 229b40: adrp x10, #0x258000 */
  ARC_X_W(c, 10, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 229b44: and w8, w1, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 1) & UINT64_C(1)));
  /* 229b48: adrp x9, #0x263000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 229b4c: ldr x10, [x10, #0x980] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 10) + INT64_C(2432))));
  /* 229b50: strb w8, [sp, #4] */
  arc_st8(((c)->sp + INT64_C(4)), ARC_W_R(c, 8));
  /* 229b54: ldr x8, [x9, #0xa38] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(2616))));
  /* 229b58: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 229b5c: add x9, sp, #4 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(4)));
  /* 229b60: add x2, sp, #8 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(8)));
  /* 229b64: ldr x10, [x10] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 10)));
  /* 229b68: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 229b6c: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* 229b70: str x9, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 9));
  /* 229b74: blr x10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2268024));
  arc_dispatch(c, ARC_X_R(c, 10));
  /* 229b78: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 229b7c: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 229b80: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 229b84: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 229b88: ret  */
  return;
L_229b8c:;
  /* 229b8c: adrp x8, #0x263000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 229b90: add x8, x8, #0xa40 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2624)));
  /* 229b94: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 229b98: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 229b9c: mov w20, w1 */
  ARC_W_W(c, 20, ARC_W_R(c, 1));
  /* 229ba0: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2268068));
  fn2_24b710(c);
  /* 229ba4: mov w1, w20 */
  ARC_W_W(c, 1, ARC_W_R(c, 20));
  /* 229ba8: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 229bac: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 229bb0: cbz w8, #0x229b40 */
  if ((ARC_W_R(c, 8)) == 0) goto L_229b40;
  /* 229bb4: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 229bb8: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 229bbc: ldr x22, [x8] */
  ARC_X_W(c, 22, arc_ld64(ARC_X_R(c, 8)));
  /* 229bc0: bl #0x22c080 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2268100));
  fn2_22c080(c);
  /* 229bc4: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 229bc8: adrp x1, #0x25000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(151552)));
  /* 229bcc: add x1, x1, #0xb38 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2872)));
  /* 229bd0: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 229bd4: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 229bd8: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2268124));
  fn2_1b8fd4(c);
  /* 229bdc: mov w2, #0x76c2 */
  ARC_W_W(c, 2, UINT64_C(30402));
  /* 229be0: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 229be4: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 229be8: movk w2, #0x9a29, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(2586378240)));
  /* 229bec: blr x22 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2268144));
  arc_dispatch(c, ARC_X_R(c, 22));
  /* 229bf0: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 229bf4: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 229bf8: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2268156));
  fn2_1d2d24(c);
  /* 229bfc: adrp x0, #0x263000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 229c00: add x0, x0, #0xa38 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2616)));
  /* 229c04: str x21, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 21));
  }
  /* 229c08: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2268172));
  fn2_24b720(c);
  /* 229c0c: mov w1, w20 */
  ARC_W_W(c, 1, ARC_W_R(c, 20));
  /* 229c10: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 229c14: b #0x229b40 */
  goto L_229b40;
}

void fn2_22ba7c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078131836));
  /* 22ba7c: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 22ba80: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 22ba84: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 22ba88: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 22ba8c: adrp x8, #0x263000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 22ba90: add x8, x8, #0xc40 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3136)));
  /* 22ba94: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 22ba98: tbz w8, #0, #0x22bad8 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_22bad8;
L_22ba9c:;
  /* 22ba9c: adrp x9, #0x258000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 22baa0: adrp x8, #0x263000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 22baa4: add x3, x29, #0x18 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 22baa8: ldr x9, [x9, #0x980] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(2432))));
  /* 22baac: ldr x8, [x8, #0xc38] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3128))));
  /* 22bab0: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 22bab4: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 22bab8: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* 22babc: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 22bac0: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2276036));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 22bac4: ldr w0, [x29, #0x18] */
  ARC_W_W(c, 0, arc_ld32((ARC_X_R(c, 29) + INT64_C(24))));
  /* 22bac8: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 22bacc: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 22bad0: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 22bad4: ret  */
  return;
L_22bad8:;
  /* 22bad8: adrp x8, #0x263000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 22badc: add x8, x8, #0xc40 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3136)));
  /* 22bae0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 22bae4: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 22bae8: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2276076));
  fn2_24b710(c);
  /* 22baec: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 22baf0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 22baf4: cbz w8, #0x22ba9c */
  if ((ARC_W_R(c, 8)) == 0) goto L_22ba9c;
  /* 22baf8: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 22bafc: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 22bb00: ldr x21, [x8] */
  ARC_X_W(c, 21, arc_ld64(ARC_X_R(c, 8)));
  /* 22bb04: bl #0x22c080 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2276104));
  fn2_22c080(c);
  /* 22bb08: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 22bb0c: adrp x1, #0x22000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(139264)));
  /* 22bb10: add x1, x1, #0x117 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(279)));
  /* 22bb14: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 22bb18: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 22bb1c: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2276128));
  fn2_1b8fd4(c);
  /* 22bb20: mov w2, #0x3e29 */
  ARC_W_W(c, 2, UINT64_C(15913));
  /* 22bb24: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 22bb28: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 22bb2c: movk w2, #0x9e9, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(166264832)));
  /* 22bb30: blr x21 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2276148));
  arc_dispatch(c, ARC_X_R(c, 21));
  /* 22bb34: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 22bb38: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 22bb3c: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2276160));
  fn2_1d2d24(c);
  /* 22bb40: adrp x0, #0x263000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 22bb44: add x0, x0, #0xc38 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3128)));
  /* 22bb48: str x20, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 20));
  }
  /* 22bb4c: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2276176));
  fn2_24b720(c);
  /* 22bb50: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 22bb54: b #0x22ba9c */
  goto L_22ba9c;
}

void fn2_22d564(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078138724));
  /* 22d564: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* 22d568: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 22d56c: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 22d570: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 22d574: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 22d578: adrp x9, #0x263000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 22d57c: add x9, x9, #0xdb0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(3504)));
  /* 22d580: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* 22d584: ldarb w9, [x9] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 9)));
  /* 22d588: tbz w9, #0, #0x22d5e8 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_22d5e8;
L_22d58c:;
  /* 22d58c: adrp x8, #0x263000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 22d590: ldr x21, [x0, #0x10] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 22d594: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 22d598: ldr x20, [x8, #0xda8] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 8) + INT64_C(3496))));
  /* 22d59c: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2282912));
  fn2_1bc084(c);
  /* 22d5a0: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 22d5a4: add x3, sp, #8 */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(8)));
  /* 22d5a8: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 22d5ac: ldr x8, [x8, #0x980] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2432))));
  /* 22d5b0: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 22d5b4: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 22d5b8: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 22d5bc: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2282944));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 22d5c0: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 22d5c4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 22d5c8: bl #0x1bc0b8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2282956));
  fn2_1bc0b8(c);
  /* 22d5cc: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 22d5d0: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2282964));
  fn2_1bc620(c);
  /* 22d5d4: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 22d5d8: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 22d5dc: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 22d5e0: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* 22d5e4: ret  */
  return;
L_22d5e8:;
  /* 22d5e8: adrp x8, #0x263000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 22d5ec: add x8, x8, #0xdb0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3504)));
  /* 22d5f0: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 22d5f4: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 22d5f8: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2283004));
  fn2_24b710(c);
  /* 22d5fc: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 22d600: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 22d604: cbz w8, #0x22d58c */
  if ((ARC_W_R(c, 8)) == 0) goto L_22d58c;
  /* 22d608: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 22d60c: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 22d610: ldr x22, [x8] */
  ARC_X_W(c, 22, arc_ld64(ARC_X_R(c, 8)));
  /* 22d614: bl #0x22d668 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2283032));
  fn2_22d668(c);
  /* 22d618: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 22d61c: adrp x1, #0x26000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(155648)));
  /* 22d620: add x1, x1, #0x553 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1363)));
  /* 22d624: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 22d628: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 22d62c: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2283056));
  fn2_1b8fd4(c);
  /* 22d630: mov w2, #0xb703 */
  ARC_W_W(c, 2, UINT64_C(46851));
  /* 22d634: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 22d638: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 22d63c: movk w2, #0x485d, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(1214054400)));
  /* 22d640: blr x22 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2283076));
  arc_dispatch(c, ARC_X_R(c, 22));
  /* 22d644: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 22d648: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 22d64c: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2283088));
  fn2_1d2d24(c);
  /* 22d650: adrp x0, #0x263000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 22d654: add x0, x0, #0xda8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3496)));
  /* 22d658: str x20, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 20));
  }
  /* 22d65c: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2283104));
  fn2_24b720(c);
  /* 22d660: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 22d664: b #0x22d58c */
  goto L_22d58c;
}

void fn2_22ed6c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078144876));
  /* 22ed6c: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 22ed70: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 22ed74: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 22ed78: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 22ed7c: bl #0x22ebbc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2289024));
  fn2_22ebbc(c);
  /* 22ed80: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 22ed84: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 22ed88: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 22ed8c: b #0x24b730 */
  fn2_24b730(c); return;
}

void fn2_230e34(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078153268));
  /* 230e34: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 230e38: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 230e3c: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 230e40: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 230e44: adrp x8, #0x264000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 230e48: add x8, x8, #0xd8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(216)));
  /* 230e4c: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 230e50: tbz w8, #0, #0x230e90 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_230e90;
L_230e54:;
  /* 230e54: adrp x9, #0x258000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 230e58: adrp x8, #0x264000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 230e5c: add x2, x29, #0x18 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 230e60: ldr x9, [x9, #0x980] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(2432))));
  /* 230e64: ldr x8, [x8, #0xd0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(208))));
  /* 230e68: str x0, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 0));
  /* 230e6c: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 230e70: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* 230e74: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* 230e78: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 230e7c: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2297472));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 230e80: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 230e84: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 230e88: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 230e8c: ret  */
  return;
L_230e90:;
  /* 230e90: adrp x8, #0x264000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 230e94: add x8, x8, #0xd8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(216)));
  /* 230e98: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 230e9c: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 230ea0: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2297508));
  fn2_24b710(c);
  /* 230ea4: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 230ea8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 230eac: cbz w8, #0x230e54 */
  if ((ARC_W_R(c, 8)) == 0) goto L_230e54;
  /* 230eb0: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 230eb4: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 230eb8: ldr x21, [x8] */
  ARC_X_W(c, 21, arc_ld64(ARC_X_R(c, 8)));
  /* 230ebc: bl #0x2319d0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2297536));
  fn2_2319d0(c);
  /* 230ec0: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 230ec4: adrp x1, #0x1f000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(126976)));
  /* 230ec8: add x1, x1, #0x6c3 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1731)));
  /* 230ecc: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 230ed0: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 230ed4: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2297560));
  fn2_1b8fd4(c);
  /* 230ed8: mov w2, #0x126e */
  ARC_W_W(c, 2, UINT64_C(4718));
  /* 230edc: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 230ee0: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 230ee4: movk w2, #0xc4fb, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(3304783872)));
  /* 230ee8: blr x21 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2297580));
  arc_dispatch(c, ARC_X_R(c, 21));
  /* 230eec: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 230ef0: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 230ef4: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2297592));
  fn2_1d2d24(c);
  /* 230ef8: nop  */
  /* nop: no architectural effect here */
  /* 230efc: adr x0, #0x2640d0 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2506960)));
  /* 230f00: str x20, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 20));
  }
  /* 230f04: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2297608));
  fn2_24b720(c);
  /* 230f08: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 230f0c: b #0x230e54 */
  goto L_230e54;
}

void fn2_2328cc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078160076));
  /* 2328cc: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 2328d0: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 2328d4: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 2328d8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 2328dc: adrp x8, #0x264000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 2328e0: add x8, x8, #0x288 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(648)));
  /* 2328e4: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 2328e8: tbz w8, #0, #0x232928 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_232928;
L_2328ec:;
  /* 2328ec: adrp x9, #0x258000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 2328f0: adrp x8, #0x264000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 2328f4: add x3, x29, #0x18 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 2328f8: ldr x9, [x9, #0x980] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(2432))));
  /* 2328fc: ldr x8, [x8, #0x280] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(640))));
  /* 232900: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 232904: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 232908: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* 23290c: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 232910: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2304276));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 232914: ldr w0, [x29, #0x18] */
  ARC_W_W(c, 0, arc_ld32((ARC_X_R(c, 29) + INT64_C(24))));
  /* 232918: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 23291c: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 232920: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 232924: ret  */
  return;
L_232928:;
  /* 232928: adrp x8, #0x264000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 23292c: add x8, x8, #0x288 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(648)));
  /* 232930: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 232934: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 232938: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2304316));
  fn2_24b710(c);
  /* 23293c: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 232940: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 232944: cbz w8, #0x2328ec */
  if ((ARC_W_R(c, 8)) == 0) goto L_2328ec;
  /* 232948: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 23294c: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 232950: ldr x21, [x8] */
  ARC_X_W(c, 21, arc_ld64(ARC_X_R(c, 8)));
  /* 232954: bl #0x233714 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2304344));
  fn2_233714(c);
  /* 232958: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 23295c: adrp x1, #0x29000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(167936)));
  /* 232960: add x1, x1, #0xd29 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3369)));
  /* 232964: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 232968: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 23296c: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2304368));
  fn2_1b8fd4(c);
  /* 232970: mov w2, #0xe929 */
  ARC_W_W(c, 2, UINT64_C(59689));
  /* 232974: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 232978: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 23297c: movk w2, #0x14a6, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(346423296)));
  /* 232980: blr x21 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2304388));
  arc_dispatch(c, ARC_X_R(c, 21));
  /* 232984: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 232988: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 23298c: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2304400));
  fn2_1d2d24(c);
  /* 232990: adrp x0, #0x264000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 232994: add x0, x0, #0x280 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(640)));
  /* 232998: str x20, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 20));
  }
  /* 23299c: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2304416));
  fn2_24b720(c);
  /* 2329a0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 2329a4: b #0x2328ec */
  goto L_2328ec;
}

void fn2_234294(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078166676));
  /* 234294: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 234298: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 23429c: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 2342a0: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 2342a4: adrp x8, #0x264000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 2342a8: add x8, x8, #0x498 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1176)));
  /* 2342ac: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 2342b0: tbz w8, #0, #0x2342f4 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_2342f4;
L_2342b4:;
  /* 2342b4: adrp x9, #0x258000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 2342b8: adrp x8, #0x264000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 2342bc: add x3, x29, #0x18 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 2342c0: ldr x9, [x9, #0x980] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(2432))));
  /* 2342c4: ldr x8, [x8, #0x490] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(1168))));
  /* 2342c8: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 2342cc: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 2342d0: str xzr, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 31));
  /* 2342d4: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* 2342d8: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 2342dc: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2310880));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 2342e0: ldr x0, [x29, #0x18] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(24))));
  /* 2342e4: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 2342e8: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 2342ec: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 2342f0: ret  */
  return;
L_2342f4:;
  /* 2342f4: adrp x8, #0x264000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 2342f8: add x8, x8, #0x498 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1176)));
  /* 2342fc: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 234300: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 234304: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2310920));
  fn2_24b710(c);
  /* 234308: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 23430c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 234310: cbz w8, #0x2342b4 */
  if ((ARC_W_R(c, 8)) == 0) goto L_2342b4;
  /* 234314: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 234318: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 23431c: ldr x21, [x8] */
  ARC_X_W(c, 21, arc_ld64(ARC_X_R(c, 8)));
  /* 234320: bl #0x23b340 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2310948));
  fn2_23b340(c);
  /* 234324: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 234328: adrp x1, #0x22000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(139264)));
  /* 23432c: add x1, x1, #0xbea */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3050)));
  /* 234330: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 234334: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 234338: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2310972));
  fn2_1b8fd4(c);
  /* 23433c: mov w2, #0xeaf0 */
  ARC_W_W(c, 2, UINT64_C(60144));
  /* 234340: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 234344: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 234348: movk w2, #0xdbff, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(3690921984)));
  /* 23434c: blr x21 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2310992));
  arc_dispatch(c, ARC_X_R(c, 21));
  /* 234350: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 234354: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 234358: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2311004));
  fn2_1d2d24(c);
  /* 23435c: adrp x0, #0x264000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 234360: add x0, x0, #0x490 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1168)));
  /* 234364: str x20, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 20));
  }
  /* 234368: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2311020));
  fn2_24b720(c);
  /* 23436c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 234370: b #0x2342b4 */
  goto L_2342b4;
}

void fn2_235fd4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078174164));
  /* 235fd4: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 235fd8: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 235fdc: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 235fe0: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 235fe4: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 235fe8: adrp x8, #0x264000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 235fec: add x8, x8, #0x698 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1688)));
  /* 235ff0: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 235ff4: tbz w8, #0, #0x23603c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_23603c;
L_235ff8:;
  /* 235ff8: adrp x10, #0x258000 */
  ARC_X_W(c, 10, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 235ffc: adrp x8, #0x264000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 236000: add x2, sp, #8 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(8)));
  /* 236004: ldr x10, [x10, #0x980] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 10) + INT64_C(2432))));
  /* 236008: ldr x8, [x8, #0x690] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(1680))));
  /* 23600c: ldr x9, [x0, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 236010: str x1, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 1));
  /* 236014: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* 236018: ldr x10, [x10] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 10)));
  /* 23601c: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 236020: mov x1, x9 */
  ARC_X_W(c, 1, ARC_X_R(c, 9));
  /* 236024: blr x10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2318376));
  arc_dispatch(c, ARC_X_R(c, 10));
  /* 236028: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 23602c: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 236030: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 236034: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 236038: ret  */
  return;
L_23603c:;
  /* 23603c: adrp x8, #0x264000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 236040: add x8, x8, #0x698 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1688)));
  /* 236044: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 236048: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 23604c: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 236050: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2318420));
  fn2_24b710(c);
  /* 236054: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 236058: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 23605c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 236060: cbz w8, #0x235ff8 */
  if ((ARC_W_R(c, 8)) == 0) goto L_235ff8;
  /* 236064: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 236068: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 23606c: ldr x22, [x8] */
  ARC_X_W(c, 22, arc_ld64(ARC_X_R(c, 8)));
  /* 236070: bl #0x23b340 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2318452));
  fn2_23b340(c);
  /* 236074: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 236078: adrp x1, #0x25000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(151552)));
  /* 23607c: add x1, x1, #0xb86 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2950)));
  /* 236080: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 236084: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 236088: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2318476));
  fn2_1b8fd4(c);
  /* 23608c: mov w2, #0x6c97 */
  ARC_W_W(c, 2, UINT64_C(27799));
  /* 236090: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 236094: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 236098: movk w2, #0x4366, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(1130758144)));
  /* 23609c: blr x22 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2318496));
  arc_dispatch(c, ARC_X_R(c, 22));
  /* 2360a0: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 2360a4: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 2360a8: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2318508));
  fn2_1d2d24(c);
  /* 2360ac: adrp x0, #0x264000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 2360b0: add x0, x0, #0x690 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1680)));
  /* 2360b4: str x21, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 21));
  }
  /* 2360b8: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2318524));
  fn2_24b720(c);
  /* 2360bc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 2360c0: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 2360c4: b #0x235ff8 */
  goto L_235ff8;
}

void fn2_237e1c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078181916));
  /* 237e1c: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* 237e20: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 237e24: str x23, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 23));
  /* 237e28: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 237e2c: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 237e30: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 237e34: adrp x8, #0x264000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 237e38: add x8, x8, #0x898 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2200)));
  /* 237e3c: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 237e40: tbz w8, #0, #0x237e8c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_237e8c;
L_237e44:;
  /* 237e44: adrp x10, #0x258000 */
  ARC_X_W(c, 10, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 237e48: adrp x8, #0x264000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 237e4c: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* 237e50: ldr x10, [x10, #0x980] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 10) + INT64_C(2432))));
  /* 237e54: ldr x8, [x8, #0x890] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2192))));
  /* 237e58: ldr x9, [x0, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 237e5c: stp x1, x2, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 1));
    arc_st64(_pa + 8, ARC_X_R(c, 2));
  }
  /* 237e60: mov x2, sp */
  ARC_X_W(c, 2, (c)->sp);
  /* 237e64: ldr x10, [x10] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 10)));
  /* 237e68: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 237e6c: mov x1, x9 */
  ARC_X_W(c, 1, ARC_X_R(c, 9));
  /* 237e70: blr x10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2326132));
  arc_dispatch(c, ARC_X_R(c, 10));
  /* 237e74: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 237e78: ldr x23, [sp, #0x20] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(32))));
  /* 237e7c: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 237e80: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 237e84: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* 237e88: ret  */
  return;
L_237e8c:;
  /* 237e8c: adrp x8, #0x264000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 237e90: add x8, x8, #0x898 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2200)));
  /* 237e94: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 237e98: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 237e9c: mov x20, x2 */
  ARC_X_W(c, 20, ARC_X_R(c, 2));
  /* 237ea0: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* 237ea4: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2326184));
  fn2_24b710(c);
  /* 237ea8: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 237eac: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* 237eb0: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 237eb4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 237eb8: cbz w8, #0x237e44 */
  if ((ARC_W_R(c, 8)) == 0) goto L_237e44;
  /* 237ebc: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 237ec0: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 237ec4: ldr x23, [x8] */
  ARC_X_W(c, 23, arc_ld64(ARC_X_R(c, 8)));
  /* 237ec8: bl #0x23b340 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2326220));
  fn2_23b340(c);
  /* 237ecc: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 237ed0: adrp x1, #0x1a000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(106496)));
  /* 237ed4: add x1, x1, #0x79b */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1947)));
  /* 237ed8: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 237edc: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 237ee0: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2326244));
  fn2_1b8fd4(c);
  /* 237ee4: mov w2, #0x2aa3 */
  ARC_W_W(c, 2, UINT64_C(10915));
  /* 237ee8: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 237eec: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 237ef0: movk w2, #0xfded, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(4260167680)));
  /* 237ef4: blr x23 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2326264));
  arc_dispatch(c, ARC_X_R(c, 23));
  /* 237ef8: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 237efc: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 237f00: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2326276));
  fn2_1d2d24(c);
  /* 237f04: adrp x0, #0x264000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 237f08: add x0, x0, #0x890 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2192)));
  /* 237f0c: str x22, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 22));
  }
  /* 237f10: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2326292));
  fn2_24b720(c);
  /* 237f14: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 237f18: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 237f1c: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* 237f20: b #0x237e44 */
  goto L_237e44;
}

void fn2_239e7c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078190204));
  /* 239e7c: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 239e80: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 239e84: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 239e88: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 239e8c: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 239e90: adrp x8, #0x264000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 239e94: add x8, x8, #0xa98 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2712)));
  /* 239e98: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 239e9c: tbz w8, #0, #0x239ee4 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_239ee4;
L_239ea0:;
  /* 239ea0: adrp x10, #0x258000 */
  ARC_X_W(c, 10, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 239ea4: adrp x8, #0x264000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 239ea8: add x2, sp, #8 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(8)));
  /* 239eac: ldr x10, [x10, #0x980] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 10) + INT64_C(2432))));
  /* 239eb0: ldr x8, [x8, #0xa90] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2704))));
  /* 239eb4: ldr x9, [x0, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 239eb8: str x1, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 1));
  /* 239ebc: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* 239ec0: ldr x10, [x10] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 10)));
  /* 239ec4: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 239ec8: mov x1, x9 */
  ARC_X_W(c, 1, ARC_X_R(c, 9));
  /* 239ecc: blr x10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2334416));
  arc_dispatch(c, ARC_X_R(c, 10));
  /* 239ed0: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 239ed4: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 239ed8: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 239edc: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 239ee0: ret  */
  return;
L_239ee4:;
  /* 239ee4: adrp x8, #0x264000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 239ee8: add x8, x8, #0xa98 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2712)));
  /* 239eec: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 239ef0: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 239ef4: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 239ef8: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2334460));
  fn2_24b710(c);
  /* 239efc: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 239f00: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 239f04: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 239f08: cbz w8, #0x239ea0 */
  if ((ARC_W_R(c, 8)) == 0) goto L_239ea0;
  /* 239f0c: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 239f10: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 239f14: ldr x22, [x8] */
  ARC_X_W(c, 22, arc_ld64(ARC_X_R(c, 8)));
  /* 239f18: bl #0x23b340 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2334492));
  fn2_23b340(c);
  /* 239f1c: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 239f20: adrp x1, #0x1b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(110592)));
  /* 239f24: add x1, x1, #0x22e */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(558)));
  /* 239f28: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 239f2c: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 239f30: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2334516));
  fn2_1b8fd4(c);
  /* 239f34: mov w2, #0x3184 */
  ARC_W_W(c, 2, UINT64_C(12676));
  /* 239f38: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 239f3c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 239f40: movk w2, #0x4fd, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(83689472)));
  /* 239f44: blr x22 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2334536));
  arc_dispatch(c, ARC_X_R(c, 22));
  /* 239f48: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 239f4c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 239f50: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2334548));
  fn2_1d2d24(c);
  /* 239f54: adrp x0, #0x264000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 239f58: add x0, x0, #0xa90 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2704)));
  /* 239f5c: str x21, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 21));
  }
  /* 239f60: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2334564));
  fn2_24b720(c);
  /* 239f64: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 239f68: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 239f6c: b #0x239ea0 */
  goto L_239ea0;
}

void fn2_23b618(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078196248));
  /* 23b618: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 23b61c: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 23b620: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 23b624: nop  */
  /* nop: no architectural effect here */
  /* 23b628: adr x8, #0x2643c8 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2507720)));
  /* 23b62c: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 23b630: tbz w8, #0, #0x23b650 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_23b650;
L_23b634:;
  /* 23b634: nop  */
  /* nop: no architectural effect here */
  /* 23b638: adr x0, #0x2643c0 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2507712)));
  /* 23b63c: nop  */
  /* nop: no architectural effect here */
  /* 23b640: adr x1, #0x2573b8 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(2454456)));
  /* 23b644: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 23b648: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 23b64c: b #0x1b00bc */
  fn2_1b00bc(c); return;
L_23b650:;
  /* 23b650: nop  */
  /* nop: no architectural effect here */
  /* 23b654: adr x0, #0x2643c8 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2507720)));
  /* 23b658: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2340444));
  fn2_24b710(c);
  /* 23b65c: cbz w0, #0x23b634 */
  if ((ARC_W_R(c, 0)) == 0) goto L_23b634;
  /* 23b660: nop  */
  /* nop: no architectural effect here */
  /* 23b664: adr x19, #0x2643c0 */
  ARC_X_W(c, 19, (arc_image_bases[2] + UINT64_C(2507712)));
  /* 23b668: adrp x1, #0x1b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(110592)));
  /* 23b66c: add x1, x1, #0xe44 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3652)));
  /* 23b670: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 23b674: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 23b678: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2340476));
  fn2_1b8fd4(c);
  /* 23b67c: adrp x0, #0x257000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 23b680: nop  */
  /* nop: no architectural effect here */
  /* 23b684: adr x2, #0x24f980 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(2423168)));
  /* 23b688: ldr x0, [x0, #0xf88] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(3976))));
  /* 23b68c: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 23b690: bl #0x24b6f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2340500));
  fn2_24b6f0(c);
  /* 23b694: nop  */
  /* nop: no architectural effect here */
  /* 23b698: adr x0, #0x2643c8 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2507720)));
  /* 23b69c: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2340512));
  fn2_24b720(c);
  /* 23b6a0: b #0x23b634 */
  goto L_23b634;
}

void fn2_23c5d4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078200276));
  /* 23c5d4: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 23c5d8: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 23c5dc: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 23c5e0: ldr x8, [x2] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 2)));
  /* 23c5e4: mov x0, x2 */
  ARC_X_W(c, 0, ARC_X_R(c, 2));
  /* 23c5e8: mov x19, x2 */
  ARC_X_W(c, 19, ARC_X_R(c, 2));
  /* 23c5ec: ldr x8, [x8, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(8))));
  /* 23c5f0: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2344436));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 23c5f4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 23c5f8: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* 23c5fc: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 23c600: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 23c604: b #0x1b5ce8 */
  fn2_1b5ce8(c); return;
}

void fn2_23e410(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078208016));
  /* 23e410: sub sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(112)));
  /* 23e414: stp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 23e418: stp x24, x23, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 23e41c: stp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 23e420: stp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 23e424: add x29, sp, #0x30 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(48)));
  /* 23e428: adrp x8, #0x264000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 23e42c: add x8, x8, #0xf28 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3880)));
  /* 23e430: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 23e434: tbz w8, #0, #0x23e494 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_23e494;
L_23e438:;
  /* 23e438: stp x1, x2, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 1));
    arc_st64(_pa + 8, ARC_X_R(c, 2));
  }
  /* 23e43c: adrp x10, #0x258000 */
  ARC_X_W(c, 10, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 23e440: fcvt d0, s0 */
  arc_d_w(c, 0, (double)(ARC_S_R(c, 0)));
  /* 23e444: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 23e448: ldr x10, [x10, #0x980] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 10) + INT64_C(2432))));
  /* 23e44c: adrp x9, #0x264000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 23e450: and w8, w3, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 3) & UINT64_C(1)));
  /* 23e454: ldr x0, [x9, #0xf20] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 9) + INT64_C(3872))));
  /* 23e458: add x11, sp, #4 */
  ARC_X_W(c, 11, ((c)->sp + UINT64_C(4)));
  /* 23e45c: ldr x9, [x10] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 10)));
  /* 23e460: strb w8, [sp, #4] */
  arc_st8(((c)->sp + INT64_C(4)), ARC_W_R(c, 8));
  /* 23e464: add x8, sp, #8 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(8)));
  /* 23e468: add x2, sp, #0x10 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(16)));
  /* 23e46c: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* 23e470: str d0, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), (c)->q[0].u64[0]);
  /* 23e474: stp x8, x11, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 11));
  }
  /* 23e478: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2352252));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 23e47c: ldp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 23e480: ldp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 23e484: ldp x24, x23, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 23e488: ldp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 23e48c: add sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(112)));
  /* 23e490: ret  */
  return;
L_23e494:;
  /* 23e494: adrp x8, #0x264000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 23e498: add x8, x8, #0xf28 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3880)));
  /* 23e49c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 23e4a0: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 23e4a4: mov x20, x2 */
  ARC_X_W(c, 20, ARC_X_R(c, 2));
  /* 23e4a8: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* 23e4ac: mov w22, w3 */
  ARC_W_W(c, 22, ARC_W_R(c, 3));
  /* 23e4b0: str s0, [sp] */
  arc_st32((c)->sp, (c)->q[0].u32[0]);
  /* 23e4b4: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2352312));
  fn2_24b710(c);
  /* 23e4b8: ldr s0, [sp] */
  arc_su_w(c, 0, arc_ld32((c)->sp));
  /* 23e4bc: mov w3, w22 */
  ARC_W_W(c, 3, ARC_W_R(c, 22));
  /* 23e4c0: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 23e4c4: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* 23e4c8: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 23e4cc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 23e4d0: cbz w8, #0x23e438 */
  if ((ARC_W_R(c, 8)) == 0) goto L_23e438;
  /* 23e4d4: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 23e4d8: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 23e4dc: ldr x24, [x8] */
  ARC_X_W(c, 24, arc_ld64(ARC_X_R(c, 8)));
  /* 23e4e0: bl #0x242738 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2352356));
  fn2_242738(c);
  /* 23e4e4: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* 23e4e8: adrp x1, #0x2a000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(172032)));
  /* 23e4ec: add x1, x1, #0x8d4 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2260)));
  /* 23e4f0: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 23e4f4: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 23e4f8: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2352380));
  fn2_1b8fd4(c);
  /* 23e4fc: mov w2, #0x22a */
  ARC_W_W(c, 2, UINT64_C(554));
  /* 23e500: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* 23e504: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 23e508: movk w2, #0x89ce, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(2311979008)));
  /* 23e50c: blr x24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2352400));
  arc_dispatch(c, ARC_X_R(c, 24));
  /* 23e510: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* 23e514: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 23e518: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2352412));
  fn2_1d2d24(c);
  /* 23e51c: adrp x0, #0x264000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 23e520: add x0, x0, #0xf20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3872)));
  /* 23e524: str x23, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 23));
  }
  /* 23e528: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2352428));
  fn2_24b720(c);
  /* 23e52c: ldr s0, [sp] */
  arc_su_w(c, 0, arc_ld32((c)->sp));
  /* 23e530: mov w3, w22 */
  ARC_W_W(c, 3, ARC_W_R(c, 22));
  /* 23e534: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 23e538: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 23e53c: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* 23e540: b #0x23e438 */
  goto L_23e438;
}

void fn2_240b9c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078218140));
  /* 240b9c: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 240ba0: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 240ba4: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 240ba8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 240bac: adrp x8, #0x265000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2510848)));
  /* 240bb0: add x8, x8, #0x128 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(296)));
  /* 240bb4: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 240bb8: tbz w8, #0, #0x240bfc */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_240bfc;
L_240bbc:;
  /* 240bbc: adrp x9, #0x258000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 240bc0: adrp x8, #0x265000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2510848)));
  /* 240bc4: add x3, x29, #0x18 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 240bc8: ldr x9, [x9, #0x980] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(2432))));
  /* 240bcc: ldr x8, [x8, #0x120] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(288))));
  /* 240bd0: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 240bd4: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 240bd8: str xzr, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 31));
  /* 240bdc: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* 240be0: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 240be4: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2362344));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 240be8: ldp s0, s1, [x29, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(24));
    arc_su_w(c, 0, arc_ld32(_pa));
    arc_su_w(c, 1, arc_ld32((_pa + 4)));
  }
  /* 240bec: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 240bf0: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 240bf4: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 240bf8: ret  */
  return;
L_240bfc:;
  /* 240bfc: adrp x8, #0x265000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2510848)));
  /* 240c00: add x8, x8, #0x128 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(296)));
  /* 240c04: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 240c08: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 240c0c: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2362384));
  fn2_24b710(c);
  /* 240c10: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 240c14: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 240c18: cbz w8, #0x240bbc */
  if ((ARC_W_R(c, 8)) == 0) goto L_240bbc;
  /* 240c1c: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 240c20: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 240c24: ldr x21, [x8] */
  ARC_X_W(c, 21, arc_ld64(ARC_X_R(c, 8)));
  /* 240c28: bl #0x242738 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2362412));
  fn2_242738(c);
  /* 240c2c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 240c30: adrp x1, #0x1b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(110592)));
  /* 240c34: add x1, x1, #0x265 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(613)));
  /* 240c38: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 240c3c: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 240c40: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2362436));
  fn2_1b8fd4(c);
  /* 240c44: mov w2, #0xc647 */
  ARC_W_W(c, 2, UINT64_C(50759));
  /* 240c48: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 240c4c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 240c50: movk w2, #0xc72c, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(3341549568)));
  /* 240c54: blr x21 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2362456));
  arc_dispatch(c, ARC_X_R(c, 21));
  /* 240c58: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 240c5c: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 240c60: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2362468));
  fn2_1d2d24(c);
  /* 240c64: adrp x0, #0x265000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2510848)));
  /* 240c68: add x0, x0, #0x120 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(288)));
  /* 240c6c: str x20, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 20));
  }
  /* 240c70: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2362484));
  fn2_24b720(c);
  /* 240c74: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 240c78: b #0x240bbc */
  goto L_240bbc;
}

void fn2_2426a0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078225056));
  /* 2426a0: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 2426a4: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 2426a8: nop  */
  /* nop: no architectural effect here */
  /* 2426ac: adr x8, #0x264cc8 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2510024)));
  /* 2426b0: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 2426b4: tbnz w8, #0, #0x2426e4 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_2426e4;
  /* 2426b8: nop  */
  /* nop: no architectural effect here */
  /* 2426bc: adr x0, #0x264cc8 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2510024)));
  /* 2426c0: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2369220));
  fn2_24b710(c);
  /* 2426c4: cbz w0, #0x2426e4 */
  if ((ARC_W_R(c, 0)) == 0) goto L_2426e4;
  /* 2426c8: nop  */
  /* nop: no architectural effect here */
  /* 2426cc: adr x0, #0x242dec */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2371052)));
  /* 2426d0: bl #0x1aff64 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2369236));
  fn2_1aff64(c);
  /* 2426d4: nop  */
  /* nop: no architectural effect here */
  /* 2426d8: adr x0, #0x264cc8 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2510024)));
  /* 2426dc: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 2426e0: b #0x24b720 */
  fn2_24b720(c); return;
L_2426e4:;
  /* 2426e4: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 2426e8: ret  */
  return;
}

void fn2_243144(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078227780));
  /* 243144: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 243148: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 24314c: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 243150: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 243154: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 243158: adrp x8, #0x265000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2510848)));
  /* 24315c: add x8, x8, #0x2d8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(728)));
  /* 243160: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 243164: tbz w8, #0, #0x2431b8 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_2431b8;
L_243168:;
  /* 243168: adrp x10, #0x258000 */
  ARC_X_W(c, 10, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 24316c: ldr x9, [x1] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 1)));
  /* 243170: adrp x8, #0x265000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2510848)));
  /* 243174: ldr x10, [x10, #0x980] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 10) + INT64_C(2432))));
  /* 243178: ldr x8, [x8, #0x2d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(720))));
  /* 24317c: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 243180: add x11, x9, #0x10 */
  ARC_X_W(c, 11, (ARC_X_R(c, 9) + UINT64_C(16)));
  /* 243184: cmp x9, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(0));
  /* 243188: add x2, sp, #8 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(8)));
  /* 24318c: ldr x10, [x10] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 10)));
  /* 243190: csel x9, xzr, x11, eq */
  ARC_X_W(c, 9, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 11)));
  /* 243194: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 243198: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* 24319c: str x9, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 9));
  /* 2431a0: blr x10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2372004));
  arc_dispatch(c, ARC_X_R(c, 10));
  /* 2431a4: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 2431a8: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 2431ac: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 2431b0: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 2431b4: ret  */
  return;
L_2431b8:;
  /* 2431b8: adrp x8, #0x265000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2510848)));
  /* 2431bc: add x8, x8, #0x2d8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(728)));
  /* 2431c0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 2431c4: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 2431c8: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 2431cc: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2372048));
  fn2_24b710(c);
  /* 2431d0: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 2431d4: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 2431d8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 2431dc: cbz w8, #0x243168 */
  if ((ARC_W_R(c, 8)) == 0) goto L_243168;
  /* 2431e0: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 2431e4: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 2431e8: ldr x22, [x8] */
  ARC_X_W(c, 22, arc_ld64(ARC_X_R(c, 8)));
  /* 2431ec: bl #0x243700 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2372080));
  fn2_243700(c);
  /* 2431f0: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 2431f4: adrp x1, #0x22000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(139264)));
  /* 2431f8: add x1, x1, #0xde1 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3553)));
  /* 2431fc: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 243200: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 243204: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2372104));
  fn2_1b8fd4(c);
  /* 243208: mov w2, #0x7ea3 */
  ARC_W_W(c, 2, UINT64_C(32419));
  /* 24320c: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 243210: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 243214: movk w2, #0xa45b, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(2757427200)));
  /* 243218: blr x22 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2372124));
  arc_dispatch(c, ARC_X_R(c, 22));
  /* 24321c: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 243220: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 243224: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2372136));
  fn2_1d2d24(c);
  /* 243228: nop  */
  /* nop: no architectural effect here */
  /* 24322c: adr x0, #0x2652d0 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2511568)));
  /* 243230: str x21, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 21));
  }
  /* 243234: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2372152));
  fn2_24b720(c);
  /* 243238: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 24323c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 243240: b #0x243168 */
  goto L_243168;
}

void fn2_2446e4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078233316));
  /* 2446e4: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 2446e8: ret  */
  return;
}

void fn2_24502c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078235692));
  /* 24502c: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 245030: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 245034: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 245038: ldr x8, [x2] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 2)));
  /* 24503c: mov x0, x2 */
  ARC_X_W(c, 0, ARC_X_R(c, 2));
  /* 245040: mov x19, x2 */
  ARC_X_W(c, 19, ARC_X_R(c, 2));
  /* 245044: ldr x8, [x8, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(8))));
  /* 245048: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2379852));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 24504c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 245050: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* 245054: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 245058: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 24505c: b #0x1b5ce8 */
  fn2_1b5ce8(c); return;
}

void fn2_246848(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078241864));
  /* 246848: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 24684c: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 246850: str x19, [sp, #0x30] */
  arc_st64(((c)->sp + INT64_C(48)), ARC_X_R(c, 19));
  /* 246854: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 246858: adrp x8, #0x265000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2510848)));
  /* 24685c: add x8, x8, #0x658 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1624)));
  /* 246860: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 246864: tbz w8, #0, #0x2468a0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_2468a0;
L_246868:;
  /* 246868: adrp x8, #0x265000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2510848)));
  /* 24686c: add x9, sp, #0x10 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(16)));
  /* 246870: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 246874: ldr x8, [x8, #0x650] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(1616))));
  /* 246878: sub x1, x29, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 24687c: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* 246880: str d0, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), (c)->q[0].u64[0]);
  /* 246884: stur x9, [x29, #-8] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-8)), ARC_X_R(c, 9));
  /* 246888: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2386060));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 24688c: ldr d0, [x29, #0x18] */
  arc_du_w(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(24))));
  /* 246890: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 246894: ldr x19, [sp, #0x30] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(48))));
  /* 246898: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 24689c: ret  */
  return;
L_2468a0:;
  /* 2468a0: adrp x0, #0x265000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2510848)));
  /* 2468a4: add x0, x0, #0x658 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1624)));
  /* 2468a8: str d0, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), (c)->q[0].u64[0]);
  /* 2468ac: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2386096));
  fn2_24b710(c);
  /* 2468b0: ldr d0, [sp, #8] */
  arc_du_w(c, 0, arc_ld64(((c)->sp + INT64_C(8))));
  /* 2468b4: cbz w0, #0x246868 */
  if ((ARC_W_R(c, 0)) == 0) goto L_246868;
  /* 2468b8: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 2468bc: adrp x1, #0x1f000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(126976)));
  /* 2468c0: add x1, x1, #0x76a */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1898)));
  /* 2468c4: ldr x8, [x8, #0x800] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2048))));
  /* 2468c8: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 2468cc: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 2468d0: ldr x19, [x8] */
  ARC_X_W(c, 19, arc_ld64(ARC_X_R(c, 8)));
  /* 2468d4: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2386136));
  fn2_1b8fd4(c);
  /* 2468d8: mov w1, #0x90b3 */
  ARC_W_W(c, 1, UINT64_C(37043));
  /* 2468dc: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 2468e0: movk w1, #0x7f8e, lsl #16 */
  ARC_W_W(c, 1, ((ARC_W_R(c, 1) & UINT64_C(18446744069414649855)) | UINT64_C(2140012544)));
  /* 2468e4: blr x19 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2386152));
  arc_dispatch(c, ARC_X_R(c, 19));
  /* 2468e8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 2468ec: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 2468f0: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2386164));
  fn2_1d2d24(c);
  /* 2468f4: adrp x0, #0x265000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2510848)));
  /* 2468f8: add x0, x0, #0x650 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1616)));
  /* 2468fc: str x19, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 19));
  }
  /* 246900: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2386180));
  fn2_24b720(c);
  /* 246904: ldr d0, [sp, #8] */
  arc_du_w(c, 0, arc_ld64(((c)->sp + INT64_C(8))));
  /* 246908: b #0x246868 */
  goto L_246868;
}

void fn2_24837c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078248828));
  /* 24837c: sub sp, sp, #0xa0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(160)));
  /* 248380: stp x29, x30, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 248384: str x19, [sp, #0x90] */
  arc_st64(((c)->sp + INT64_C(144)), ARC_X_R(c, 19));
  /* 248388: add x29, sp, #0x80 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(128)));
  /* 24838c: adrp x8, #0x265000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2510848)));
  /* 248390: add x8, x8, #0x858 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2136)));
  /* 248394: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 248398: tbz w8, #0, #0x2483f4 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_2483f4;
L_24839c:;
  /* 24839c: sub x8, x29, #0x30 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 2483a0: sub x9, x29, #0x38 */
  ARC_X_W(c, 9, (ARC_X_R(c, 29) - UINT64_C(56)));
  /* 2483a4: add x10, sp, #0x38 */
  ARC_X_W(c, 10, ((c)->sp + UINT64_C(56)));
  /* 2483a8: stp x8, x9, [x29, #-0x28] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-40));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 2483ac: add x8, sp, #0x40 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(64)));
  /* 2483b0: adrp x9, #0x265000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2510848)));
  /* 2483b4: stp x8, x10, [x29, #-0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-24));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 10));
  }
  /* 2483b8: ldr x8, [x9, #0x850] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(2128))));
  /* 2483bc: add x9, sp, #0x30 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(48)));
  /* 2483c0: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 2483c4: sub x1, x29, #0x28 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(40)));
  /* 2483c8: mov w2, #5 */
  ARC_W_W(c, 2, UINT64_C(5));
  /* 2483cc: stp d1, d0, [x29, #-0x38] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-56));
    arc_st64(_pa, (c)->q[1].u64[0]);
    arc_st64((_pa + 8), (c)->q[0].u64[0]);
  }
  /* 2483d0: stp d3, d2, [sp, #0x38] */
  { const uint64_t _pa = ((c)->sp + INT64_C(56));
    arc_st64(_pa, (c)->q[3].u64[0]);
    arc_st64((_pa + 8), (c)->q[2].u64[0]);
  }
  /* 2483d4: str d4, [sp, #0x30] */
  arc_st64(((c)->sp + INT64_C(48)), (c)->q[4].u64[0]);
  /* 2483d8: stur x9, [x29, #-8] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-8)), ARC_X_R(c, 9));
  /* 2483dc: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2393056));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 2483e0: ldr d0, [x29, #0x18] */
  arc_du_w(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(24))));
  /* 2483e4: ldp x29, x30, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 2483e8: ldr x19, [sp, #0x90] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(144))));
  /* 2483ec: add sp, sp, #0xa0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(160)));
  /* 2483f0: ret  */
  return;
L_2483f4:;
  /* 2483f4: adrp x0, #0x265000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2510848)));
  /* 2483f8: add x0, x0, #0x858 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2136)));
  /* 2483fc: stp d3, d4, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, (c)->q[3].u64[0]);
    arc_st64((_pa + 8), (c)->q[4].u64[0]);
  }
  /* 248400: stp d1, d2, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, (c)->q[1].u64[0]);
    arc_st64((_pa + 8), (c)->q[2].u64[0]);
  }
  /* 248404: str d0, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), (c)->q[0].u64[0]);
  /* 248408: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2393100));
  fn2_24b710(c);
  /* 24840c: ldp d0, d1, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    arc_du_w(c, 0, arc_ld64(_pa));
    arc_du_w(c, 1, arc_ld64((_pa + 8)));
  }
  /* 248410: ldr d4, [sp, #0x28] */
  arc_du_w(c, 4, arc_ld64(((c)->sp + INT64_C(40))));
  /* 248414: ldp d2, d3, [sp, #0x18] */
  { const uint64_t _pa = ((c)->sp + INT64_C(24));
    arc_du_w(c, 2, arc_ld64(_pa));
    arc_du_w(c, 3, arc_ld64((_pa + 8)));
  }
  /* 248418: cbz w0, #0x24839c */
  if ((ARC_W_R(c, 0)) == 0) goto L_24839c;
  /* 24841c: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 248420: adrp x1, #0x2c000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(180224)));
  /* 248424: add x1, x1, #0x114 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(276)));
  /* 248428: ldr x8, [x8, #0x800] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2048))));
  /* 24842c: sub x0, x29, #0x28 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(40)));
  /* 248430: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 248434: ldr x19, [x8] */
  ARC_X_W(c, 19, arc_ld64(ARC_X_R(c, 8)));
  /* 248438: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2393148));
  fn2_1b8fd4(c);
  /* 24843c: mov w1, #0xd11f */
  ARC_W_W(c, 1, UINT64_C(53535));
  /* 248440: sub x0, x29, #0x28 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(40)));
  /* 248444: movk w1, #0x4106, lsl #16 */
  ARC_W_W(c, 1, ((ARC_W_R(c, 1) & UINT64_C(18446744069414649855)) | UINT64_C(1090912256)));
  /* 248448: blr x19 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2393164));
  arc_dispatch(c, ARC_X_R(c, 19));
  /* 24844c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 248450: sub x0, x29, #0x28 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(40)));
  /* 248454: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2393176));
  fn2_1d2d24(c);
  /* 248458: adrp x0, #0x265000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2510848)));
  /* 24845c: add x0, x0, #0x850 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2128)));
  /* 248460: str x19, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 19));
  }
  /* 248464: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2393192));
  fn2_24b720(c);
  /* 248468: ldp d0, d1, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    arc_du_w(c, 0, arc_ld64(_pa));
    arc_du_w(c, 1, arc_ld64((_pa + 8)));
  }
  /* 24846c: ldr d4, [sp, #0x28] */
  arc_du_w(c, 4, arc_ld64(((c)->sp + INT64_C(40))));
  /* 248470: ldp d2, d3, [sp, #0x18] */
  { const uint64_t _pa = ((c)->sp + INT64_C(24));
    arc_du_w(c, 2, arc_ld64(_pa));
    arc_du_w(c, 3, arc_ld64((_pa + 8)));
  }
  /* 248474: b #0x24839c */
  goto L_24839c;
}

void fn2_249dd4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078255572));
  /* 249dd4: sub sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(96)));
  /* 249dd8: stp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 249ddc: stp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 249de0: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 249de4: add x29, sp, #0x30 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(48)));
  /* 249de8: adrp x9, #0x265000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2510848)));
  /* 249dec: add x9, x9, #0xa58 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(2648)));
  /* 249df0: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 249df4: ldarb w9, [x9] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 9)));
  /* 249df8: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* 249dfc: tbz w9, #0, #0x249e54 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_249e54;
L_249e00:;
  /* 249e00: adrp x8, #0x265000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2510848)));
  /* 249e04: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* 249e08: str x1, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 1));
  /* 249e0c: ldr x21, [x8, #0xa50] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 8) + INT64_C(2640))));
  /* 249e10: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2399764));
  fn2_1bc084(c);
  /* 249e14: mov x8, sp */
  ARC_X_W(c, 8, (c)->sp);
  /* 249e18: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* 249e1c: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 249e20: mov w2, #2 */
  ARC_W_W(c, 2, UINT64_C(2));
  /* 249e24: stp x20, x8, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* 249e28: blr x21 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2399788));
  arc_dispatch(c, ARC_X_R(c, 21));
  /* 249e2c: add x1, sp, #0x18 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(24)));
  /* 249e30: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 249e34: bl #0x1bc0b8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2399800));
  fn2_1bc0b8(c);
  /* 249e38: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* 249e3c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2399808));
  fn2_1bc620(c);
  /* 249e40: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 249e44: ldp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 249e48: ldp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 249e4c: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* 249e50: ret  */
  return;
L_249e54:;
  /* 249e54: adrp x0, #0x265000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2510848)));
  /* 249e58: add x0, x0, #0xa58 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2648)));
  /* 249e5c: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* 249e60: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2399844));
  fn2_24b710(c);
  /* 249e64: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 249e68: cbz w0, #0x249e00 */
  if ((ARC_W_R(c, 0)) == 0) goto L_249e00;
  /* 249e6c: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 249e70: adrp x1, #0x2c000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(180224)));
  /* 249e74: add x1, x1, #0x127 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(295)));
  /* 249e78: ldr x8, [x8, #0x800] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2048))));
  /* 249e7c: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* 249e80: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 249e84: ldr x22, [x8] */
  ARC_X_W(c, 22, arc_ld64(ARC_X_R(c, 8)));
  /* 249e88: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2399884));
  fn2_1b8fd4(c);
  /* 249e8c: mov w1, #0xc45a */
  ARC_W_W(c, 1, UINT64_C(50266));
  /* 249e90: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* 249e94: movk w1, #0x9236, lsl #16 */
  ARC_W_W(c, 1, ((ARC_W_R(c, 1) & UINT64_C(18446744069414649855)) | UINT64_C(2453012480)));
  /* 249e98: blr x22 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2399900));
  arc_dispatch(c, ARC_X_R(c, 22));
  /* 249e9c: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 249ea0: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* 249ea4: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2399912));
  fn2_1d2d24(c);
  /* 249ea8: adrp x0, #0x265000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2510848)));
  /* 249eac: add x0, x0, #0xa50 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2640)));
  /* 249eb0: str x22, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 22));
  }
  /* 249eb4: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2399928));
  fn2_24b720(c);
  /* 249eb8: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 249ebc: b #0x249e00 */
  goto L_249e00;
}

void fn2_24b6e0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078261984));
  /* 24b6e0: adrp x16, #0x258000 */
  ARC_X_W(c, 16, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 24b6e4: ldr x17, [x16, #0xab8] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(2744))));
  /* 24b6e8: add x16, x16, #0xab8 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(2744)));
  /* 24b6ec: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
}

void fn2_24b8e0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078262496));
  /* 24b8e0: adrp x16, #0x258000 */
  ARC_X_W(c, 16, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 24b8e4: ldr x17, [x16, #0xbb8] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(3000))));
  /* 24b8e8: add x16, x16, #0xbb8 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(3000)));
  /* 24b8ec: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
}

