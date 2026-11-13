#include "lifted.h"
#include "df_lse.h"

void fn2_9af00(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076490496));
  /* 9af00: sub sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(112)));
  /* 9af04: stp x29, x30, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 9af08: stp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 9af0c: add x29, sp, #0x50 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(80)));
  /* 9af10: ldrb w8, [x0, #0x42] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 0) + INT64_C(66))));
  /* 9af14: cbz w8, #0x9b2a4 */
  if ((ARC_W_R(c, 8)) == 0) goto L_9b2a4;
  /* 9af18: adrp x8, #0x257000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 9af1c: ldr x8, [x8, #0xf98] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3992))));
  /* 9af20: ldr x19, [x8] */
  ARC_X_W(c, 19, arc_ld64(ARC_X_R(c, 8)));
  /* 9af24: cbz x19, #0x9b2b4 */
  if ((ARC_X_R(c, 19)) == 0) goto L_9b2b4;
  /* 9af28: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 9af2c: sub x0, x29, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* 9af30: bl #0x1d9740 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(634676));
  fn2_1d9740(c);
  /* 9af34: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* 9af38: add x1, x20, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(24)));
  /* 9af3c: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(634688));
  fn2_1bc2f8(c);
  /* 9af40: adrp x1, #0x1b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(110592)));
  /* 9af44: add x1, x1, #0xf24 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3876)));
  /* 9af48: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 9af4c: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(634704));
  fn2_1b7d24(c);
  /* 9af50: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 9af54: sub x1, x29, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 9af58: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(634716));
  fn2_1bc2f8(c);
  /* 9af5c: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 9af60: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(634724));
  fn2_1ccd9c(c);
  /* 9af64: sub x0, x29, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* 9af68: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* 9af6c: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(634736));
  fn2_1bbfa0(c);
  /* 9af70: add x1, sp, #0x28 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(40)));
  /* 9af74: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(634744));
  fn2_1bcf04(c);
  /* 9af78: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 9af7c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(634752));
  fn2_1bc620(c);
  /* 9af80: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* 9af84: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(634760));
  fn2_1bc620(c);
  /* 9af88: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* 9af8c: add x1, x20, #0x20 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(32)));
  /* 9af90: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(634772));
  fn2_1bc2f8(c);
  /* 9af94: adrp x1, #0x29000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(167936)));
  /* 9af98: add x1, x1, #0x1e3 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(483)));
  /* 9af9c: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 9afa0: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(634788));
  fn2_1b7d24(c);
  /* 9afa4: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 9afa8: sub x1, x29, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 9afac: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(634800));
  fn2_1bc2f8(c);
  /* 9afb0: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 9afb4: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(634808));
  fn2_1ccd9c(c);
  /* 9afb8: sub x0, x29, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* 9afbc: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* 9afc0: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(634820));
  fn2_1bbfa0(c);
  /* 9afc4: add x1, sp, #0x28 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(40)));
  /* 9afc8: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(634828));
  fn2_1bcf04(c);
  /* 9afcc: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 9afd0: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(634836));
  fn2_1bc620(c);
  /* 9afd4: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* 9afd8: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(634844));
  fn2_1bc620(c);
  /* 9afdc: ldr x1, [x20, #0x28] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 20) + INT64_C(40))));
  /* 9afe0: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* 9afe4: bl #0x1bc290 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(634856));
  fn2_1bc290(c);
  /* 9afe8: adrp x1, #0x1c000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(114688)));
  /* 9afec: add x1, x1, #0xa6b */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2667)));
  /* 9aff0: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 9aff4: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(634872));
  fn2_1b7d24(c);
  /* 9aff8: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 9affc: sub x1, x29, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 9b000: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(634884));
  fn2_1bc2f8(c);
  /* 9b004: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 9b008: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(634892));
  fn2_1ccd9c(c);
  /* 9b00c: sub x0, x29, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* 9b010: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* 9b014: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(634904));
  fn2_1bbfa0(c);
  /* 9b018: add x1, sp, #0x28 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(40)));
  /* 9b01c: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(634912));
  fn2_1bcf04(c);
  /* 9b020: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 9b024: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(634920));
  fn2_1bc620(c);
  /* 9b028: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* 9b02c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(634928));
  fn2_1bc620(c);
  /* 9b030: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* 9b034: add x1, x20, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(48)));
  /* 9b038: bl #0x1bc530 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(634940));
  fn2_1bc530(c);
  /* 9b03c: adrp x1, #0x1a000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(106496)));
  /* 9b040: add x1, x1, #0x827 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2087)));
  /* 9b044: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 9b048: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(634956));
  fn2_1b7d24(c);
  /* 9b04c: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 9b050: sub x1, x29, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 9b054: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(634968));
  fn2_1bc2f8(c);
  /* 9b058: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 9b05c: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(634976));
  fn2_1ccd9c(c);
  /* 9b060: sub x0, x29, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* 9b064: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* 9b068: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(634988));
  fn2_1bbfa0(c);
  /* 9b06c: add x1, sp, #0x28 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(40)));
  /* 9b070: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(634996));
  fn2_1bcf04(c);
  /* 9b074: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 9b078: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(635004));
  fn2_1bc620(c);
  /* 9b07c: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* 9b080: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(635012));
  fn2_1bc620(c);
  /* 9b084: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* 9b088: add x1, x20, #0x38 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(56)));
  /* 9b08c: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(635024));
  fn2_1bc2f8(c);
  /* 9b090: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* 9b094: add x1, x1, #0xb70 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2928)));
  /* 9b098: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 9b09c: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(635040));
  fn2_1b7d24(c);
  /* 9b0a0: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 9b0a4: sub x1, x29, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 9b0a8: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(635052));
  fn2_1bc2f8(c);
  /* 9b0ac: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 9b0b0: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(635060));
  fn2_1ccd9c(c);
  /* 9b0b4: sub x0, x29, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* 9b0b8: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* 9b0bc: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(635072));
  fn2_1bbfa0(c);
  /* 9b0c0: add x1, sp, #0x28 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(40)));
  /* 9b0c4: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(635080));
  fn2_1bcf04(c);
  /* 9b0c8: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 9b0cc: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(635088));
  fn2_1bc620(c);
  /* 9b0d0: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* 9b0d4: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(635096));
  fn2_1bc620(c);
  /* 9b0d8: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* 9b0dc: add x1, x20, #0x60 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(96)));
  /* 9b0e0: bl #0x1bc544 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(635108));
  fn2_1bc544(c);
  /* 9b0e4: adrp x1, #0x20000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(131072)));
  /* 9b0e8: add x1, x1, #0x2e */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(46)));
  /* 9b0ec: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 9b0f0: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(635124));
  fn2_1b7d24(c);
  /* 9b0f4: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 9b0f8: sub x1, x29, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 9b0fc: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(635136));
  fn2_1bc2f8(c);
  /* 9b100: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 9b104: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(635144));
  fn2_1ccd9c(c);
  /* 9b108: sub x0, x29, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* 9b10c: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* 9b110: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(635156));
  fn2_1bbfa0(c);
  /* 9b114: add x1, sp, #0x28 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(40)));
  /* 9b118: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(635164));
  fn2_1bcf04(c);
  /* 9b11c: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 9b120: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(635172));
  fn2_1bc620(c);
  /* 9b124: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* 9b128: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(635180));
  fn2_1bc620(c);
  /* 9b12c: ldrb w1, [x20, #0x68] */
  ARC_W_W(c, 1, arc_ld8((ARC_X_R(c, 20) + INT64_C(104))));
  /* 9b130: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* 9b134: bl #0x1bc25c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(635192));
  fn2_1bc25c(c);
  /* 9b138: adrp x1, #0x29000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(167936)));
  /* 9b13c: add x1, x1, #0x1e5 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(485)));
  /* 9b140: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 9b144: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(635208));
  fn2_1b7d24(c);
  /* 9b148: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 9b14c: sub x1, x29, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 9b150: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(635220));
  fn2_1bc2f8(c);
  /* 9b154: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 9b158: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(635228));
  fn2_1ccd9c(c);
  /* 9b15c: sub x0, x29, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* 9b160: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* 9b164: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(635240));
  fn2_1bbfa0(c);
  /* 9b168: add x1, sp, #0x28 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(40)));
  /* 9b16c: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(635248));
  fn2_1bcf04(c);
  /* 9b170: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 9b174: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(635256));
  fn2_1bc620(c);
  /* 9b178: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* 9b17c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(635264));
  fn2_1bc620(c);
  /* 9b180: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* 9b184: add x1, x20, #0x71 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(113)));
  /* 9b188: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(635276));
  fn2_1bc2f8(c);
  /* 9b18c: adrp x1, #0x1a000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(106496)));
  /* 9b190: add x1, x1, #0x829 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2089)));
  /* 9b194: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 9b198: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(635292));
  fn2_1b7d24(c);
  /* 9b19c: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 9b1a0: sub x1, x29, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 9b1a4: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(635304));
  fn2_1bc2f8(c);
  /* 9b1a8: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 9b1ac: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(635312));
  fn2_1ccd9c(c);
  /* 9b1b0: sub x0, x29, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* 9b1b4: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* 9b1b8: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(635324));
  fn2_1bbfa0(c);
  /* 9b1bc: add x1, sp, #0x28 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(40)));
  /* 9b1c0: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(635332));
  fn2_1bcf04(c);
  /* 9b1c4: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 9b1c8: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(635340));
  fn2_1bc620(c);
  /* 9b1cc: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* 9b1d0: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(635348));
  fn2_1bc620(c);
  /* 9b1d4: ldrb w1, [x20, #0x79] */
  ARC_W_W(c, 1, arc_ld8((ARC_X_R(c, 20) + INT64_C(121))));
  /* 9b1d8: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* 9b1dc: bl #0x1bc25c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(635360));
  fn2_1bc25c(c);
  /* 9b1e0: adrp x1, #0x25000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(151552)));
  /* 9b1e4: add x1, x1, #0xc3c */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3132)));
  /* 9b1e8: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 9b1ec: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(635376));
  fn2_1b7d24(c);
  /* 9b1f0: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 9b1f4: sub x1, x29, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 9b1f8: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(635388));
  fn2_1bc2f8(c);
  /* 9b1fc: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 9b200: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(635396));
  fn2_1ccd9c(c);
  /* 9b204: sub x0, x29, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* 9b208: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* 9b20c: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(635408));
  fn2_1bbfa0(c);
  /* 9b210: add x1, sp, #0x28 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(40)));
  /* 9b214: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(635416));
  fn2_1bcf04(c);
  /* 9b218: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 9b21c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(635424));
  fn2_1bc620(c);
  /* 9b220: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* 9b224: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(635432));
  fn2_1bc620(c);
  /* 9b228: adrp x1, #0x1d000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(118784)));
  /* 9b22c: add x1, x1, #0x3e7 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(999)));
  /* 9b230: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 9b234: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(635448));
  fn2_1b7d24(c);
  /* 9b238: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* 9b23c: sub x1, x29, #0x10 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* 9b240: bl #0x1bc530 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(635460));
  fn2_1bc530(c);
  /* 9b244: adrp x1, #0x25000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(151552)));
  /* 9b248: add x1, x1, #0xc29 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3113)));
  /* 9b24c: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 9b250: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(635476));
  fn2_1b7d24(c);
  /* 9b254: adrp x1, #0x1f000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(126976)));
  /* 9b258: add x1, x1, #0x7a2 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1954)));
  /* 9b25c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 9b260: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(635492));
  fn2_1b7d24(c);
  /* 9b264: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* 9b268: add x2, sp, #0x28 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(40)));
  /* 9b26c: sub x3, x29, #8 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 9b270: add x4, sp, #8 */
  ARC_X_W(c, 4, ((c)->sp + UINT64_C(8)));
  /* 9b274: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 9b278: bl #0xcaf90 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(635516));
  fn2_caf90(c);
  /* 9b27c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 9b280: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(635524));
  fn2_1ccd9c(c);
  /* 9b284: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 9b288: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(635532));
  fn2_1ccd9c(c);
  /* 9b28c: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* 9b290: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(635540));
  fn2_1bc620(c);
  /* 9b294: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 9b298: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(635548));
  fn2_1ccd9c(c);
  /* 9b29c: sub x0, x29, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* 9b2a0: bl #0x1d97fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(635556));
  fn2_1d97fc(c);
L_9b2a4:;
  /* 9b2a4: ldp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 9b2a8: ldp x29, x30, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 9b2ac: add sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(112)));
  /* 9b2b0: ret  */
  return;
L_9b2b4:;
  /* 9b2b4: adrp x0, #0x27000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(159744)));
  /* 9b2b8: add x0, x0, #0x8dd */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2269)));
  /* 9b2bc: adrp x1, #0x20000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(131072)));
  /* 9b2c0: add x1, x1, #0xc21 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3105)));
  /* 9b2c4: adrp x3, #0x1a000 */
  ARC_X_W(c, 3, (arc_image_bases[2] + UINT64_C(106496)));
  /* 9b2c8: add x3, x3, #0x80f */
  ARC_X_W(c, 3, (ARC_X_R(c, 3) + UINT64_C(2063)));
  /* 9b2cc: mov w2, #0x7a */
  ARC_W_W(c, 2, UINT64_C(122));
  /* 9b2d0: mov w4, wzr */
  ARC_W_W(c, 4, ARC_W_R(c, 31));
  /* 9b2d4: mov w5, wzr */
  ARC_W_W(c, 5, ARC_W_R(c, 31));
  /* 9b2d8: ldp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 9b2dc: ldp x29, x30, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 9b2e0: add sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(112)));
  /* 9b2e4: b #0x1b54b0 */
  fn2_1b54b0(c); return;
}

void fn2_9e310(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076503824));
  /* 9e310: sub sp, sp, #0x90 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(144)));
  /* 9e314: stp x29, x30, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 9e318: str x21, [sp, #0x70] */
  arc_st64(((c)->sp + INT64_C(112)), ARC_X_R(c, 21));
  /* 9e31c: stp x20, x19, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 9e320: add x29, sp, #0x60 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(96)));
  /* 9e324: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 9e328: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 9e32c: bl #0x9a5a0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(647984));
  fn2_9a5a0(c);
  /* 9e330: add x0, x19, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(32)));
  /* 9e334: bl #0x1ce4a4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(647992));
  fn2_1ce4a4(c);
  /* 9e338: tbnz w0, #0, #0x9e3f8 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) != 0) goto L_9e3f8;
  /* 9e33c: ldr x21, [x19, #0x28] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 19) + INT64_C(40))));
  /* 9e340: bl #0x22eb3c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(648004));
  fn2_22eb3c(c);
  /* 9e344: bl #0x2301f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(648008));
  fn2_2301f8(c);
  /* 9e348: fcvtzs x9, d0 */
  ARC_X_W(c, 9, arc_f2i64((double)(ARC_D_R(c, 0))));
  /* 9e34c: mov w8, #0x517f */
  ARC_W_W(c, 8, UINT64_C(20863));
  /* 9e350: movk w8, #1, lsl #16 */
  ARC_W_W(c, 8, ((ARC_W_R(c, 8) & UINT64_C(18446744069414649855)) | UINT64_C(65536)));
  /* 9e354: sub x9, x21, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 21) - ARC_X_R(c, 9)));
  /* 9e358: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* 9e35c: b.gt #0x9e3f8 */
  if (ARC_COND(c, 12)) goto L_9e3f8;
  /* 9e360: sub x0, x29, #0x28 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(40)));
  /* 9e364: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 9e368: bl #0x1d788c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(648044));
  fn2_1d788c(c);
  /* 9e36c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 9e370: bl #0x220748 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(648052));
  fn2_220748(c);
  /* 9e374: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* 9e378: add x1, x1, #0xb6f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2927)));
  /* 9e37c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 9e380: mov w0, #0x20 */
  ARC_W_W(c, 0, UINT64_C(32));
  /* 9e384: mov x2, x1 */
  ARC_X_W(c, 2, ARC_X_R(c, 1));
  /* 9e388: bl #0x1b5d1c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(648076));
  fn2_1b5d1c(c);
  /* 9e38c: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 9e390: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 9e394: sub x1, x29, #0x28 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(40)));
  /* 9e398: bl #0x1d788c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(648092));
  fn2_1d788c(c);
  /* 9e39c: adrp x8, #0x24f000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2420736)));
  /* 9e3a0: add x8, x8, #0xf78 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3960)));
  /* 9e3a4: add x0, x21, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) + UINT64_C(16)));
  /* 9e3a8: sub x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 9e3ac: stp x8, x20, [x21] */
  { const uint64_t _pa = ARC_X_R(c, 21);
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 20));
  }
  /* 9e3b0: bl #0x1d788c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(648116));
  fn2_1d788c(c);
  /* 9e3b4: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 9e3b8: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 9e3bc: bl #0x1b75a4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(648128));
  fn2_1b75a4(c);
  /* 9e3c0: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 9e3c4: bl #0x1d79fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(648136));
  fn2_1d79fc(c);
  /* 9e3c8: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 9e3cc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 9e3d0: bl #0x9de0c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(648148));
  fn2_9de0c(c);
  /* 9e3d4: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 9e3d8: bl #0x1d79fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(648156));
  fn2_1d79fc(c);
  /* 9e3dc: sub x0, x29, #0x28 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(40)));
  /* 9e3e0: bl #0x1d79fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(648164));
  fn2_1d79fc(c);
  /* 9e3e4: ldp x20, x19, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 9e3e8: ldr x21, [sp, #0x70] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(112))));
  /* 9e3ec: ldp x29, x30, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 9e3f0: add sp, sp, #0x90 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(144)));
  /* 9e3f4: ret  */
  return;
L_9e3f8:;
  /* 9e3f8: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 9e3fc: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(648192));
  fn2_1bc084(c);
  /* 9e400: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 9e404: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 9e408: sub x19, x29, #0x18 */
  ARC_X_W(c, 19, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 9e40c: bl #0x1bc0b8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(648208));
  fn2_1bc0b8(c);
  /* 9e410: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 9e414: stur x19, [x29, #-0x28] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-40)), ARC_X_R(c, 19));
  /* 9e418: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(648220));
  fn2_1bc084(c);
  /* 9e41c: adrp x8, #0x257000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 9e420: sub x1, x29, #0x28 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(40)));
  /* 9e424: add x2, sp, #0x20 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(32)));
  /* 9e428: ldr x8, [x8, #0xfb8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(4024))));
  /* 9e42c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 9e430: mov w3, #1 */
  ARC_W_W(c, 3, UINT64_C(1));
  /* 9e434: ldr x8, [x8, #0xa8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(168))));
  /* 9e438: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(648252));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 9e43c: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 9e440: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(648260));
  fn2_1bc620(c);
  /* 9e444: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 9e448: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(648268));
  fn2_1bc620(c);
  /* 9e44c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 9e450: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(648276));
  fn2_1bc620(c);
  /* 9e454: ldp x20, x19, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 9e458: ldr x21, [sp, #0x70] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(112))));
  /* 9e45c: ldp x29, x30, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 9e460: add sp, sp, #0x90 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(144)));
  /* 9e464: ret  */
  return;
}

void fn2_a70a8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076540072));
  /* a70a8: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* a70ac: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* a70b0: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* a70b4: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* a70b8: ldr x0, [x0, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* a70bc: adrp x8, #0x24f000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2420736)));
  /* a70c0: add x8, x8, #0x9d8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2520)));
  /* a70c4: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* a70c8: cbz x0, #0xa70ec */
  if ((ARC_X_R(c, 0)) == 0) goto L_a70ec;
  /* a70cc: bl #0x225abc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(684240));
  fn2_225abc(c);
  /* a70d0: tbz w0, #0, #0xa70ec */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_a70ec;
  /* a70d4: adrp x9, #0x257000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2453504)));
  /* a70d8: ldr x8, [x19, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* a70dc: ldr x9, [x9, #0xfb0] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(4016))));
  /* a70e0: ldr x0, [x8, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* a70e4: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* a70e8: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(684268));
  arc_dispatch(c, ARC_X_R(c, 9));
L_a70ec:;
  /* a70ec: str xzr, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 31));
  /* a70f0: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* a70f4: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* a70f8: ret  */
  return;
}

void fn2_a79b4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076542388));
  /* a79b4: sub sp, sp, #0xd0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(208)));
  /* a79b8: stp x29, x30, [sp, #0xa0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(160));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* a79bc: stp x22, x21, [sp, #0xb0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(176));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* a79c0: stp x20, x19, [sp, #0xc0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(192));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* a79c4: add x29, sp, #0xa0 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(160)));
  /* a79c8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* a79cc: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* a79d0: mov x21, x3 */
  ARC_X_W(c, 21, ARC_X_R(c, 3));
  /* a79d4: mov w22, w2 */
  ARC_W_W(c, 22, ARC_W_R(c, 2));
  /* a79d8: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* a79dc: str wzr, [x4] */
  arc_st32(ARC_X_R(c, 4), ARC_W_R(c, 31));
  /* a79e0: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(686564));
  fn2_1bc084(c);
  /* a79e4: sub x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* a79e8: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* a79ec: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(686576));
  fn2_1bcf04(c);
  /* a79f0: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* a79f4: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(686584));
  fn2_1bc620(c);
  /* a79f8: cmp w22, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 22), UINT64_C(1));
  /* a79fc: b.lt #0xa7a10 */
  if (ARC_COND(c, 11)) goto L_a7a10;
  /* a7a00: ldr x1, [x20] */
  ARC_X_W(c, 1, arc_ld64(ARC_X_R(c, 20)));
  /* a7a04: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* a7a08: bl #0x1bc0b8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(686604));
  fn2_1bc0b8(c);
  /* a7a0c: b #0xa7a18 */
  goto L_a7a18;
L_a7a10:;
  /* a7a10: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* a7a14: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(686616));
  fn2_1bc084(c);
L_a7a18:;
  /* a7a18: sub x8, x29, #0x28 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(40)));
  /* a7a1c: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* a7a20: bl #0x1bccb8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(686628));
  fn2_1bccb8(c);
  /* a7a24: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* a7a28: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(686636));
  fn2_1bc620(c);
  /* a7a2c: adrp x1, #0x1b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(110592)));
  /* a7a30: add x1, x1, #0xf26 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3878)));
  /* a7a34: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* a7a38: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(686652));
  fn2_1b7d24(c);
  /* a7a3c: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* a7a40: sub x1, x29, #0x48 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* a7a44: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(686664));
  fn2_1bc2f8(c);
  /* a7a48: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* a7a4c: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(686672));
  fn2_1ccd9c(c);
  /* a7a50: sub x0, x29, #0x28 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(40)));
  /* a7a54: sub x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* a7a58: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(686684));
  fn2_1bbfa0(c);
  /* a7a5c: bl #0x1bc668 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(686688));
  fn2_1bc668(c);
  /* a7a60: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* a7a64: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* a7a68: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(686700));
  fn2_1bc620(c);
  /* a7a6c: cbz x20, #0xa7a88 */
  if ((ARC_X_R(c, 20)) == 0) goto L_a7a88;
  /* a7a70: adrp x8, #0x257000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2453504)));
  /* a7a74: ldr x8, [x8, #0xf98] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3992))));
  /* a7a78: ldr x0, [x8] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 8)));
  /* a7a7c: cbz x0, #0xa7a88 */
  if ((ARC_X_R(c, 0)) == 0) goto L_a7a88;
  /* a7a80: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* a7a84: bl #0xcaa70 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(686728));
  fn2_caa70(c);
L_a7a88:;
  /* a7a88: adrp x1, #0x2c000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(180224)));
  /* a7a8c: add x1, x1, #0x1db */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(475)));
  /* a7a90: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* a7a94: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(686744));
  fn2_1b7d24(c);
  /* a7a98: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* a7a9c: sub x1, x29, #0x48 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* a7aa0: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(686756));
  fn2_1bc2f8(c);
  /* a7aa4: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* a7aa8: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(686764));
  fn2_1ccd9c(c);
  /* a7aac: sub x0, x29, #0x28 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(40)));
  /* a7ab0: sub x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* a7ab4: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(686776));
  fn2_1bbfa0(c);
  /* a7ab8: bl #0x1bcc90 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(686780));
  fn2_1bcc90(c);
  /* a7abc: cmp w0, #0x1b */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(27));
  /* a7ac0: b.ne #0xa7b08 */
  if (ARC_COND(c, 1)) goto L_a7b08;
  /* a7ac4: adrp x1, #0x2c000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(180224)));
  /* a7ac8: add x1, x1, #0x1db */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(475)));
  /* a7acc: add x0, sp, #0x38 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(56)));
  /* a7ad0: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(686804));
  fn2_1b7d24(c);
  /* a7ad4: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* a7ad8: add x1, sp, #0x38 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(56)));
  /* a7adc: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(686816));
  fn2_1bc2f8(c);
  /* a7ae0: add x0, sp, #0x38 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(56)));
  /* a7ae4: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(686824));
  fn2_1ccd9c(c);
  /* a7ae8: sub x0, x29, #0x28 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(40)));
  /* a7aec: sub x1, x29, #0x48 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* a7af0: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(686836));
  fn2_1bbfa0(c);
  /* a7af4: sub x8, x29, #0x30 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* a7af8: bl #0x1bccb8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(686844));
  fn2_1bccb8(c);
  /* a7afc: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* a7b00: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(686852));
  fn2_1bc620(c);
  /* a7b04: b #0xa7b10 */
  goto L_a7b10;
L_a7b08:;
  /* a7b08: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* a7b0c: bl #0x1d9740 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(686864));
  fn2_1d9740(c);
L_a7b10:;
  /* a7b10: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* a7b14: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(686872));
  fn2_1bc620(c);
  /* a7b18: add x0, sp, #0x50 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(80)));
  /* a7b1c: bl #0x1d9740 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(686880));
  fn2_1d9740(c);
  /* a7b20: cmp x20, #0xca */
  (void)arc_sub64(c, ARC_X_R(c, 20), UINT64_C(202));
  /* a7b24: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* a7b28: cset w1, eq */
  ARC_W_W(c, 1, (ARC_COND(c, 0) ? 1 : 0));
  /* a7b2c: bl #0x1bc25c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(686896));
  fn2_1bc25c(c);
  /* a7b30: adrp x1, #0x2c000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(180224)));
  /* a7b34: add x1, x1, #0x134 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(308)));
  /* a7b38: add x0, sp, #0x38 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(56)));
  /* a7b3c: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(686912));
  fn2_1b7d24(c);
  /* a7b40: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* a7b44: add x1, sp, #0x38 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(56)));
  /* a7b48: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(686924));
  fn2_1bc2f8(c);
  /* a7b4c: add x0, sp, #0x38 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(56)));
  /* a7b50: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(686932));
  fn2_1ccd9c(c);
  /* a7b54: add x0, sp, #0x50 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(80)));
  /* a7b58: sub x1, x29, #0x48 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* a7b5c: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(686944));
  fn2_1bbfa0(c);
  /* a7b60: sub x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* a7b64: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(686952));
  fn2_1bcf04(c);
  /* a7b68: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* a7b6c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(686960));
  fn2_1bc620(c);
  /* a7b70: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* a7b74: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(686968));
  fn2_1bc620(c);
  /* a7b78: adrp x21, #0x26000 */
  ARC_X_W(c, 21, (arc_image_bases[2] + UINT64_C(155648)));
  /* a7b7c: add x21, x21, #0xf36 */
  ARC_X_W(c, 21, (ARC_X_R(c, 21) + UINT64_C(3894)));
  /* a7b80: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* a7b84: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* a7b88: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(686988));
  fn2_1b7d24(c);
  /* a7b8c: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* a7b90: sub x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* a7b94: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(687000));
  fn2_1bc2f8(c);
  /* a7b98: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* a7b9c: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(687008));
  fn2_1ccd9c(c);
  /* a7ba0: sub x0, x29, #0x28 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(40)));
  /* a7ba4: sub x1, x29, #0x48 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* a7ba8: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(687020));
  fn2_1bbfa0(c);
  /* a7bac: add x8, sp, #8 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(8)));
  /* a7bb0: bl #0x1bc84c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(687028));
  fn2_1bc84c(c);
  /* a7bb4: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* a7bb8: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* a7bbc: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(687040));
  fn2_1bc2f8(c);
  /* a7bc0: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* a7bc4: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* a7bc8: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(687052));
  fn2_1b7d24(c);
  /* a7bcc: add x0, sp, #0x38 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(56)));
  /* a7bd0: add x1, sp, #0x20 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(32)));
  /* a7bd4: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(687064));
  fn2_1bc2f8(c);
  /* a7bd8: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* a7bdc: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(687072));
  fn2_1ccd9c(c);
  /* a7be0: add x0, sp, #0x50 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(80)));
  /* a7be4: add x1, sp, #0x38 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(56)));
  /* a7be8: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(687084));
  fn2_1bbfa0(c);
  /* a7bec: sub x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* a7bf0: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(687092));
  fn2_1bcf04(c);
  /* a7bf4: add x0, sp, #0x38 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(56)));
  /* a7bf8: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(687100));
  fn2_1bc620(c);
  /* a7bfc: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* a7c00: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(687108));
  fn2_1bc620(c);
  /* a7c04: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* a7c08: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(687116));
  fn2_1ccd9c(c);
  /* a7c0c: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* a7c10: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(687124));
  fn2_1bc620(c);
  /* a7c14: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* a7c18: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* a7c1c: bl #0x1bc290 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(687136));
  fn2_1bc290(c);
  /* a7c20: adrp x1, #0x1b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(110592)));
  /* a7c24: add x1, x1, #0xf26 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3878)));
  /* a7c28: add x0, sp, #0x38 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(56)));
  /* a7c2c: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(687152));
  fn2_1b7d24(c);
  /* a7c30: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* a7c34: add x1, sp, #0x38 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(56)));
  /* a7c38: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(687164));
  fn2_1bc2f8(c);
  /* a7c3c: add x0, sp, #0x38 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(56)));
  /* a7c40: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(687172));
  fn2_1ccd9c(c);
  /* a7c44: add x0, sp, #0x50 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(80)));
  /* a7c48: sub x1, x29, #0x48 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* a7c4c: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(687184));
  fn2_1bbfa0(c);
  /* a7c50: sub x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* a7c54: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(687192));
  fn2_1bcf04(c);
  /* a7c58: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* a7c5c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(687200));
  fn2_1bc620(c);
  /* a7c60: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* a7c64: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(687208));
  fn2_1bc620(c);
  /* a7c68: adrp x20, #0x26000 */
  ARC_X_W(c, 20, (arc_image_bases[2] + UINT64_C(155648)));
  /* a7c6c: add x20, x20, #0xf9c */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) + UINT64_C(3996)));
  /* a7c70: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* a7c74: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* a7c78: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(687228));
  fn2_1b7d24(c);
  /* a7c7c: add x0, sp, #0x38 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(56)));
  /* a7c80: sub x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* a7c84: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(687240));
  fn2_1bc2f8(c);
  /* a7c88: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* a7c8c: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(687248));
  fn2_1ccd9c(c);
  /* a7c90: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* a7c94: mov w1, #0x3c */
  ARC_W_W(c, 1, UINT64_C(60));
  /* a7c98: bl #0x1bc290 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(687260));
  fn2_1bc290(c);
  /* a7c9c: sub x8, x29, #0x48 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* a7ca0: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* a7ca4: add x1, sp, #0x38 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(56)));
  /* a7ca8: add x2, sp, #0x20 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(32)));
  /* a7cac: bl #0x1d9c5c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(687280));
  fn2_1d9c5c(c);
  /* a7cb0: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* a7cb4: bl #0x1bc668 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(687288));
  fn2_1bc668(c);
  /* a7cb8: mov x1, x0 */
  ARC_X_W(c, 1, ARC_X_R(c, 0));
  /* a7cbc: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* a7cc0: bl #0x1bc290 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(687300));
  fn2_1bc290(c);
  /* a7cc4: sub x0, x29, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* a7cc8: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* a7ccc: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(687312));
  fn2_1b7d24(c);
  /* a7cd0: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* a7cd4: sub x1, x29, #0x20 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* a7cd8: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(687324));
  fn2_1bc2f8(c);
  /* a7cdc: sub x0, x29, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* a7ce0: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(687332));
  fn2_1ccd9c(c);
  /* a7ce4: add x0, sp, #0x50 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(80)));
  /* a7ce8: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* a7cec: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(687344));
  fn2_1bbfa0(c);
  /* a7cf0: sub x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* a7cf4: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(687352));
  fn2_1bcf04(c);
  /* a7cf8: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* a7cfc: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(687360));
  fn2_1bc620(c);
  /* a7d00: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* a7d04: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(687368));
  fn2_1bc620(c);
  /* a7d08: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* a7d0c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(687376));
  fn2_1bc620(c);
  /* a7d10: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* a7d14: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(687384));
  fn2_1bc620(c);
  /* a7d18: add x0, sp, #0x38 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(56)));
  /* a7d1c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(687392));
  fn2_1bc620(c);
  /* a7d20: adrp x20, #0x28000 */
  ARC_X_W(c, 20, (arc_image_bases[2] + UINT64_C(163840)));
  /* a7d24: add x20, x20, #0x5dd */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) + UINT64_C(1501)));
  /* a7d28: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* a7d2c: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* a7d30: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(687412));
  fn2_1b7d24(c);
  /* a7d34: add x0, sp, #0x38 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(56)));
  /* a7d38: sub x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* a7d3c: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(687424));
  fn2_1bc2f8(c);
  /* a7d40: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* a7d44: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(687432));
  fn2_1ccd9c(c);
  /* a7d48: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* a7d4c: mov w1, #0x384 */
  ARC_W_W(c, 1, UINT64_C(900));
  /* a7d50: bl #0x1bc290 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(687444));
  fn2_1bc290(c);
  /* a7d54: sub x8, x29, #0x48 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* a7d58: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* a7d5c: add x1, sp, #0x38 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(56)));
  /* a7d60: add x2, sp, #0x20 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(32)));
  /* a7d64: bl #0x1d9c5c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(687464));
  fn2_1d9c5c(c);
  /* a7d68: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* a7d6c: bl #0x1bc668 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(687472));
  fn2_1bc668(c);
  /* a7d70: mov x1, x0 */
  ARC_X_W(c, 1, ARC_X_R(c, 0));
  /* a7d74: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* a7d78: bl #0x1bc290 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(687484));
  fn2_1bc290(c);
  /* a7d7c: sub x0, x29, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* a7d80: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* a7d84: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(687496));
  fn2_1b7d24(c);
  /* a7d88: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* a7d8c: sub x1, x29, #0x20 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* a7d90: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(687508));
  fn2_1bc2f8(c);
  /* a7d94: sub x0, x29, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* a7d98: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(687516));
  fn2_1ccd9c(c);
  /* a7d9c: add x0, sp, #0x50 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(80)));
  /* a7da0: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* a7da4: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(687528));
  fn2_1bbfa0(c);
  /* a7da8: sub x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* a7dac: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(687536));
  fn2_1bcf04(c);
  /* a7db0: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* a7db4: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(687544));
  fn2_1bc620(c);
  /* a7db8: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* a7dbc: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(687552));
  fn2_1bc620(c);
  /* a7dc0: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* a7dc4: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(687560));
  fn2_1bc620(c);
  /* a7dc8: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* a7dcc: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(687568));
  fn2_1bc620(c);
  /* a7dd0: add x0, sp, #0x38 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(56)));
  /* a7dd4: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(687576));
  fn2_1bc620(c);
  /* a7dd8: adrp x20, #0x1f000 */
  ARC_X_W(c, 20, (arc_image_bases[2] + UINT64_C(126976)));
  /* a7ddc: add x20, x20, #0x7c7 */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) + UINT64_C(1991)));
  /* a7de0: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* a7de4: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* a7de8: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(687596));
  fn2_1b7d24(c);
  /* a7dec: add x0, sp, #0x38 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(56)));
  /* a7df0: sub x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* a7df4: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(687608));
  fn2_1bc2f8(c);
  /* a7df8: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* a7dfc: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(687616));
  fn2_1ccd9c(c);
  /* a7e00: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* a7e04: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* a7e08: bl #0x1bc25c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(687628));
  fn2_1bc25c(c);
  /* a7e0c: sub x8, x29, #0x48 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* a7e10: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* a7e14: add x1, sp, #0x38 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(56)));
  /* a7e18: add x2, sp, #0x20 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(32)));
  /* a7e1c: bl #0x1d9c5c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(687648));
  fn2_1d9c5c(c);
  /* a7e20: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* a7e24: bl #0x1bc630 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(687656));
  fn2_1bc630(c);
  /* a7e28: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* a7e2c: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* a7e30: sub x21, x29, #0x18 */
  ARC_X_W(c, 21, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* a7e34: and w1, w8, #1 */
  ARC_W_W(c, 1, (ARC_W_R(c, 8) & UINT64_C(1)));
  /* a7e38: bl #0x1bc25c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(687676));
  fn2_1bc25c(c);
  /* a7e3c: sub x0, x29, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* a7e40: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* a7e44: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(687688));
  fn2_1b7d24(c);
  /* a7e48: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* a7e4c: sub x1, x29, #0x20 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* a7e50: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(687700));
  fn2_1bc2f8(c);
  /* a7e54: sub x0, x29, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* a7e58: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(687708));
  fn2_1ccd9c(c);
  /* a7e5c: add x0, sp, #0x50 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(80)));
  /* a7e60: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* a7e64: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(687720));
  fn2_1bbfa0(c);
  /* a7e68: sub x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* a7e6c: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(687728));
  fn2_1bcf04(c);
  /* a7e70: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* a7e74: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(687736));
  fn2_1bc620(c);
  /* a7e78: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* a7e7c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(687744));
  fn2_1bc620(c);
  /* a7e80: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* a7e84: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(687752));
  fn2_1bc620(c);
  /* a7e88: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* a7e8c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(687760));
  fn2_1bc620(c);
  /* a7e90: add x0, sp, #0x38 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(56)));
  /* a7e94: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(687768));
  fn2_1bc620(c);
  /* a7e98: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* a7e9c: add x1, sp, #0x50 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(80)));
  /* a7ea0: bl #0x1bc530 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(687780));
  fn2_1bc530(c);
  /* a7ea4: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* a7ea8: str x21, [sp, #0x38] */
  arc_st64(((c)->sp + INT64_C(56)), ARC_X_R(c, 21));
  /* a7eac: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(687792));
  fn2_1bc084(c);
  /* a7eb0: adrp x8, #0x257000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2453504)));
  /* a7eb4: add x0, x19, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(16)));
  /* a7eb8: add x1, sp, #0x38 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(56)));
  /* a7ebc: ldr x8, [x8, #0xfb8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(4024))));
  /* a7ec0: sub x2, x29, #0x48 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* a7ec4: mov w3, #1 */
  ARC_W_W(c, 3, UINT64_C(1));
  /* a7ec8: ldr x8, [x8, #0xa8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(168))));
  /* a7ecc: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(687824));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* a7ed0: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* a7ed4: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(687832));
  fn2_1bc620(c);
  /* a7ed8: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* a7edc: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(687840));
  fn2_1bc620(c);
  /* a7ee0: add x0, sp, #0x50 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(80)));
  /* a7ee4: bl #0x1d97fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(687848));
  fn2_1d97fc(c);
  /* a7ee8: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* a7eec: bl #0x1d97fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(687856));
  fn2_1d97fc(c);
  /* a7ef0: sub x0, x29, #0x28 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(40)));
  /* a7ef4: bl #0x1d97fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(687864));
  fn2_1d97fc(c);
  /* a7ef8: ldp x20, x19, [sp, #0xc0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(192));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* a7efc: ldp x22, x21, [sp, #0xb0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(176));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* a7f00: ldp x29, x30, [sp, #0xa0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(160));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* a7f04: add sp, sp, #0xd0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(208)));
  /* a7f08: ret  */
  return;
}

void fn2_a8b84(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076546948));
  /* a8b84: ldr x0, [x0, #8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* a8b88: ret  */
  return;
}

void fn2_a9b58(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076551000));
  /* a9b58: sub sp, sp, #0xa0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(160)));
  /* a9b5c: stp x29, x30, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* a9b60: stp x22, x21, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* a9b64: stp x20, x19, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* a9b68: add x29, sp, #0x70 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(112)));
  /* a9b6c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* a9b70: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* a9b74: mov x21, x3 */
  ARC_X_W(c, 21, ARC_X_R(c, 3));
  /* a9b78: mov w22, w2 */
  ARC_W_W(c, 22, ARC_W_R(c, 2));
  /* a9b7c: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* a9b80: str wzr, [x4] */
  arc_st32(ARC_X_R(c, 4), ARC_W_R(c, 31));
  /* a9b84: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(695176));
  fn2_1bc084(c);
  /* a9b88: sub x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* a9b8c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* a9b90: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(695188));
  fn2_1bcf04(c);
  /* a9b94: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* a9b98: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(695196));
  fn2_1bc620(c);
  /* a9b9c: cmp w22, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 22), UINT64_C(1));
  /* a9ba0: b.lt #0xa9bb4 */
  if (ARC_COND(c, 11)) goto L_a9bb4;
  /* a9ba4: ldr x1, [x20] */
  ARC_X_W(c, 1, arc_ld64(ARC_X_R(c, 20)));
  /* a9ba8: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* a9bac: bl #0x1bc0b8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(695216));
  fn2_1bc0b8(c);
  /* a9bb0: b #0xa9bbc */
  goto L_a9bbc;
L_a9bb4:;
  /* a9bb4: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* a9bb8: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(695228));
  fn2_1bc084(c);
L_a9bbc:;
  /* a9bbc: sub x8, x29, #0x28 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(40)));
  /* a9bc0: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* a9bc4: bl #0x1bccb8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(695240));
  fn2_1bccb8(c);
  /* a9bc8: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* a9bcc: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(695248));
  fn2_1bc620(c);
  /* a9bd0: adrp x1, #0x2c000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(180224)));
  /* a9bd4: add x1, x1, #0x134 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(308)));
  /* a9bd8: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* a9bdc: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(695264));
  fn2_1b7d24(c);
  /* a9be0: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* a9be4: add x1, sp, #0x28 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(40)));
  /* a9be8: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(695276));
  fn2_1bc2f8(c);
  /* a9bec: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* a9bf0: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(695284));
  fn2_1ccd9c(c);
  /* a9bf4: sub x0, x29, #0x28 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(40)));
  /* a9bf8: sub x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* a9bfc: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(695296));
  fn2_1bbfa0(c);
  /* a9c00: bl #0x1bc630 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(695300));
  fn2_1bc630(c);
  /* a9c04: mov w20, w0 */
  ARC_W_W(c, 20, ARC_W_R(c, 0));
  /* a9c08: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* a9c0c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(695312));
  fn2_1bc620(c);
  /* a9c10: tbz w20, #0, #0xa9c9c */
  if (((ARC_W_R(c, 20)) >> 0 & 1) == 0) goto L_a9c9c;
  /* a9c14: bl #0xb8ac0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(695320));
  fn2_b8ac0(c);
  /* a9c18: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* a9c1c: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* a9c20: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(695332));
  fn2_1bc084(c);
  /* a9c24: adrp x1, #0x23000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(143360)));
  /* a9c28: add x1, x1, #0xb89 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2953)));
  /* a9c2c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* a9c30: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(695348));
  fn2_1b7d24(c);
  /* a9c34: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* a9c38: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* a9c3c: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(695360));
  fn2_1bc2f8(c);
  /* a9c40: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* a9c44: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(695368));
  fn2_1ccd9c(c);
  /* a9c48: sub x0, x29, #0x28 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(40)));
  /* a9c4c: add x1, sp, #0x28 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(40)));
  /* a9c50: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(695380));
  fn2_1bbfa0(c);
  /* a9c54: add x8, sp, #8 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(8)));
  /* a9c58: bl #0x1bcd0c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(695388));
  fn2_1bcd0c(c);
  /* a9c5c: add x1, x19, #0x10 */
  ARC_X_W(c, 1, (ARC_X_R(c, 19) + UINT64_C(16)));
  /* a9c60: add x2, x19, #0x18 */
  ARC_X_W(c, 2, (ARC_X_R(c, 19) + UINT64_C(24)));
  /* a9c64: sub x3, x29, #0x18 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* a9c68: add x5, x19, #0x20 */
  ARC_X_W(c, 5, (ARC_X_R(c, 19) + UINT64_C(32)));
  /* a9c6c: add x6, sp, #8 */
  ARC_X_W(c, 6, ((c)->sp + UINT64_C(8)));
  /* a9c70: add x7, x19, #0x30 */
  ARC_X_W(c, 7, (ARC_X_R(c, 19) + UINT64_C(48)));
  /* a9c74: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* a9c78: mov w4, wzr */
  ARC_W_W(c, 4, ARC_W_R(c, 31));
  /* a9c7c: bl #0xba0f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(695424));
  fn2_ba0f0(c);
  /* a9c80: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* a9c84: bl #0x1e46f4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(695432));
  fn2_1e46f4(c);
  /* a9c88: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* a9c8c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(695440));
  fn2_1bc620(c);
  /* a9c90: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* a9c94: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(695448));
  fn2_1bc620(c);
  /* a9c98: b #0xa9e38 */
  goto L_a9e38;
L_a9c9c:;
  /* a9c9c: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* a9ca0: bl #0x1d9740 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(695460));
  fn2_1d9740(c);
  /* a9ca4: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* a9ca8: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* a9cac: bl #0x1bc290 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(695472));
  fn2_1bc290(c);
  /* a9cb0: adrp x1, #0x1b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(110592)));
  /* a9cb4: add x1, x1, #0xf26 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3878)));
  /* a9cb8: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* a9cbc: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(695488));
  fn2_1b7d24(c);
  /* a9cc0: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* a9cc4: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* a9cc8: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(695500));
  fn2_1bc2f8(c);
  /* a9ccc: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* a9cd0: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(695508));
  fn2_1ccd9c(c);
  /* a9cd4: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* a9cd8: add x1, sp, #0x28 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(40)));
  /* a9cdc: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(695520));
  fn2_1bbfa0(c);
  /* a9ce0: sub x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* a9ce4: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(695528));
  fn2_1bcf04(c);
  /* a9ce8: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* a9cec: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(695536));
  fn2_1bc620(c);
  /* a9cf0: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* a9cf4: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(695544));
  fn2_1bc620(c);
  /* a9cf8: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* a9cfc: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(695552));
  fn2_1bc084(c);
  /* a9d00: adrp x1, #0x2c000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(180224)));
  /* a9d04: add x1, x1, #0x1db */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(475)));
  /* a9d08: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* a9d0c: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(695568));
  fn2_1b7d24(c);
  /* a9d10: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* a9d14: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* a9d18: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(695580));
  fn2_1bc2f8(c);
  /* a9d1c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* a9d20: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(695588));
  fn2_1ccd9c(c);
  /* a9d24: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* a9d28: add x1, sp, #0x28 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(40)));
  /* a9d2c: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(695600));
  fn2_1bbfa0(c);
  /* a9d30: sub x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* a9d34: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(695608));
  fn2_1bcf04(c);
  /* a9d38: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* a9d3c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(695616));
  fn2_1bc620(c);
  /* a9d40: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* a9d44: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(695624));
  fn2_1bc620(c);
  /* a9d48: adrp x20, #0x26000 */
  ARC_X_W(c, 20, (arc_image_bases[2] + UINT64_C(155648)));
  /* a9d4c: add x20, x20, #0xf36 */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) + UINT64_C(3894)));
  /* a9d50: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* a9d54: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* a9d58: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(695644));
  fn2_1b7d24(c);
  /* a9d5c: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* a9d60: sub x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* a9d64: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(695656));
  fn2_1bc2f8(c);
  /* a9d68: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* a9d6c: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(695664));
  fn2_1ccd9c(c);
  /* a9d70: sub x0, x29, #0x28 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(40)));
  /* a9d74: add x1, sp, #0x28 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(40)));
  /* a9d78: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(695676));
  fn2_1bbfa0(c);
  /* a9d7c: add x8, sp, #0x20 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(32)));
  /* a9d80: bl #0x1bc84c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(695684));
  fn2_1bc84c(c);
  /* a9d84: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* a9d88: add x1, sp, #0x20 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(32)));
  /* a9d8c: sub x21, x29, #0x18 */
  ARC_X_W(c, 21, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* a9d90: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(695700));
  fn2_1bc2f8(c);
  /* a9d94: sub x0, x29, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* a9d98: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* a9d9c: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(695712));
  fn2_1b7d24(c);
  /* a9da0: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* a9da4: sub x1, x29, #0x20 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* a9da8: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(695724));
  fn2_1bc2f8(c);
  /* a9dac: sub x0, x29, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* a9db0: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(695732));
  fn2_1ccd9c(c);
  /* a9db4: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* a9db8: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* a9dbc: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(695744));
  fn2_1bbfa0(c);
  /* a9dc0: sub x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* a9dc4: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(695752));
  fn2_1bcf04(c);
  /* a9dc8: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* a9dcc: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(695760));
  fn2_1bc620(c);
  /* a9dd0: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* a9dd4: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(695768));
  fn2_1bc620(c);
  /* a9dd8: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* a9ddc: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(695776));
  fn2_1ccd9c(c);
  /* a9de0: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* a9de4: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(695784));
  fn2_1bc620(c);
  /* a9de8: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* a9dec: sub x1, x29, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* a9df0: bl #0x1bc530 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(695796));
  fn2_1bc530(c);
  /* a9df4: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* a9df8: str x21, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 21));
  /* a9dfc: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(695808));
  fn2_1bc084(c);
  /* a9e00: adrp x8, #0x257000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2453504)));
  /* a9e04: add x0, x19, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(48)));
  /* a9e08: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* a9e0c: ldr x8, [x8, #0xfb8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(4024))));
  /* a9e10: add x2, sp, #0x28 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(40)));
  /* a9e14: mov w3, #1 */
  ARC_W_W(c, 3, UINT64_C(1));
  /* a9e18: ldr x8, [x8, #0xa8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(168))));
  /* a9e1c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(695840));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* a9e20: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* a9e24: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(695848));
  fn2_1bc620(c);
  /* a9e28: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* a9e2c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(695856));
  fn2_1bc620(c);
  /* a9e30: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* a9e34: bl #0x1d97fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(695864));
  fn2_1d97fc(c);
L_a9e38:;
  /* a9e38: sub x0, x29, #0x28 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(40)));
  /* a9e3c: bl #0x1d97fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(695872));
  fn2_1d97fc(c);
  /* a9e40: ldp x20, x19, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* a9e44: ldp x22, x21, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* a9e48: ldp x29, x30, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* a9e4c: add sp, sp, #0xa0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(160)));
  /* a9e50: ret  */
  return;
}

void fn2_aa3a4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076553124));
  /* aa3a4: cmp x0, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 1));
  /* aa3a8: cset w0, eq */
  ARC_W_W(c, 0, (ARC_COND(c, 0) ? 1 : 0));
  /* aa3ac: ret  */
  return;
}

void fn2_aae38(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076555832));
  /* aae38: ldr x0, [x0, #8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* aae3c: cbz x0, #0xaae70 */
  if ((ARC_X_R(c, 0)) == 0) goto L_aae70;
  /* aae40: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* aae44: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* aae48: adrp x8, #0x257000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2453504)));
  /* aae4c: ldr x8, [x8, #0xff8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(4088))));
  /* aae50: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* aae54: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(699992));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* aae58: cbz x0, #0xaae68 */
  if ((ARC_X_R(c, 0)) == 0) goto L_aae68;
  /* aae5c: bl #0x1b62dc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(700000));
  fn2_1b62dc(c);
  /* aae60: cmp x0, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 0), UINT64_C(0));
  /* aae64: cset w0, ne */
  ARC_W_W(c, 0, (ARC_COND(c, 1) ? 1 : 0));
L_aae68:;
  /* aae68: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* aae6c: ret  */
  return;
L_aae70:;
  /* aae70: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* aae74: ret  */
  return;
}

void fn2_abd7c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076559740));
  /* abd7c: adrp x0, #0xac000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(704512)));
  /* abd80: add x0, x0, #0x790 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1936)));
  /* abd84: ret  */
  return;
}

void fn2_acb74(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076563316));
  /* acb74: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* acb78: adrp x1, #0x1b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(110592)));
  /* acb7c: add x1, x1, #0x37b */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(891)));
  /* acb80: b #0x1b7d24 */
  fn2_1b7d24(c); return;
}

void fn2_ad62c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076566060));
  /* ad62c: lsr x8, x0, #0x20 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 0)) >> ((UINT64_C(32)) & 63)));
  /* ad630: eor w0, w8, w0 */
  ARC_W_W(c, 0, (ARC_W_R(c, 8) ^ ARC_W_R(c, 0)));
  /* ad634: ret  */
  return;
}

void fn2_ae040(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076568640));
  /* ae040: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* ae044: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* ae048: adrp x8, #0x25c000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2473984)));
  /* ae04c: add x8, x8, #0xd58 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3416)));
  /* ae050: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* ae054: tbnz w8, #0, #0xae084 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_ae084;
  /* ae058: adrp x0, #0x25c000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2473984)));
  /* ae05c: add x0, x0, #0xd58 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3416)));
  /* ae060: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(712804));
  fn2_24b710(c);
  /* ae064: cbz w0, #0xae084 */
  if ((ARC_W_R(c, 0)) == 0) goto L_ae084;
  /* ae068: nop  */
  /* nop: no architectural effect here */
  /* ae06c: adr x0, #0xb0990 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(723344)));
  /* ae070: bl #0x1aff64 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(712820));
  fn2_1aff64(c);
  /* ae074: adrp x0, #0x25c000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2473984)));
  /* ae078: add x0, x0, #0xd58 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3416)));
  /* ae07c: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ae080: b #0x24b720 */
  fn2_24b720(c); return;
L_ae084:;
  /* ae084: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ae088: ret  */
  return;
}

void fn2_ae9ac(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076571052));
  /* ae9ac: add x1, x0, #0x60 */
  ARC_X_W(c, 1, (ARC_X_R(c, 0) + UINT64_C(96)));
  /* ae9b0: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* ae9b4: b #0x1db4b8 */
  fn2_1db4b8(c); return;
}

void fn2_af83c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076574780));
  /* af83c: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* af840: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* af844: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* af848: ldr x8, [x2] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 2)));
  /* af84c: mov x0, x2 */
  ARC_X_W(c, 0, ARC_X_R(c, 2));
  /* af850: mov x19, x2 */
  ARC_X_W(c, 19, ARC_X_R(c, 2));
  /* af854: ldr x8, [x8, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(8))));
  /* af858: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(718940));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* af85c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* af860: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* af864: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* af868: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* af86c: b #0x1b5ce8 */
  fn2_1b5ce8(c); return;
}

void fn2_b013c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076577084));
  /* b013c: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b0140: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* b0144: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* b0148: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* b014c: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* b0150: add x1, x1, #0xb6f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2927)));
  /* b0154: mov w0, #0x18 */
  ARC_W_W(c, 0, UINT64_C(24));
  /* b0158: mov x2, x1 */
  ARC_X_W(c, 2, ARC_X_R(c, 1));
  /* b015c: bl #0x1b5d1c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(721248));
  fn2_1b5d1c(c);
  /* b0160: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* b0164: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* b0168: bl #0x1afdf8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(721260));
  fn2_1afdf8(c);
  /* b016c: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* b0170: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* b0174: ldr x8, [x8, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* b0178: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* b017c: str x8, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 8));
  /* b0180: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* b0184: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b0188: ret  */
  return;
}

void fn2_b0b40(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076579648));
  /* b0b40: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b0b44: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* b0b48: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* b0b4c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* b0b50: ldr x0, [x0, #8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* b0b54: adrp x8, #0x250000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2424832)));
  /* b0b58: add x8, x8, #0x5e0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1504)));
  /* b0b5c: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* b0b60: cbz x0, #0xb0b90 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b0b90;
L_b0b64:;
  /* b0b64: ldr x1, [x0] */
  ARC_X_W(c, 1, arc_ld64(ARC_X_R(c, 0)));
  /* b0b68: cbz x1, #0xb0b80 */
  if ((ARC_X_R(c, 1)) == 0) goto L_b0b80;
  /* b0b6c: bl #0xaeb74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(723824));
  fn2_aeb74(c);
  /* b0b70: ldr x0, [x19, #8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b0b74: ldr w8, [x0, #0x10] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 0) + INT64_C(16))));
  /* b0b78: cbnz w8, #0xb0b64 */
  if ((ARC_W_R(c, 8)) != 0) goto L_b0b64;
  /* b0b7c: b #0xb0b88 */
  goto L_b0b88;
L_b0b80:;
  /* b0b80: ldr w8, [x0, #0x10] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 0) + INT64_C(16))));
  /* b0b84: cbnz w8, #0xb0ba0 */
  if ((ARC_W_R(c, 8)) != 0) goto L_b0ba0;
L_b0b88:;
  /* b0b88: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* b0b8c: bl #0x1b5ce8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(723856));
  fn2_1b5ce8(c);
L_b0b90:;
  /* b0b90: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* b0b94: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* b0b98: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b0b9c: b #0x24b730 */
  fn2_24b730(c); return;
L_b0ba0:;
  /* b0ba0: adrp x0, #0x29000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(167936)));
  /* b0ba4: add x0, x0, #0x23f */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(575)));
  /* b0ba8: adrp x1, #0x1b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(110592)));
  /* b0bac: add x1, x1, #0x30a */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(778)));
  /* b0bb0: adrp x3, #0x2e000 */
  ARC_X_W(c, 3, (arc_image_bases[2] + UINT64_C(188416)));
  /* b0bb4: add x3, x3, #0xbb4 */
  ARC_X_W(c, 3, (ARC_X_R(c, 3) + UINT64_C(2996)));
  /* b0bb8: mov w2, #0x317 */
  ARC_W_W(c, 2, UINT64_C(791));
  /* b0bbc: mov w4, wzr */
  ARC_W_W(c, 4, ARC_W_R(c, 31));
  /* b0bc0: mov w5, wzr */
  ARC_W_W(c, 5, ARC_W_R(c, 31));
  /* b0bc4: bl #0x1b54b0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(723912));
  fn2_1b54b0(c);
  /* b0bc8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* b0bcc: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* b0bd0: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b0bd4: b #0x24b730 */
  fn2_24b730(c); return;
}

void fn2_b19c0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076583360));
  /* b19c0: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b19c4: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* b19c8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* b19cc: ldp x8, x9, [x0, #0x60] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(96));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* b19d0: mov x19, x3 */
  ARC_X_W(c, 19, ARC_X_R(c, 3));
  /* b19d4: add x0, x1, x9, asr #1 */
  ARC_X_W(c, 0, (ARC_X_R(c, 1) + ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> 1))));
  /* b19d8: tbz w9, #0, #0xb19e4 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_b19e4;
  /* b19dc: ldr x9, [x0] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 0)));
  /* b19e0: ldr x8, [x9, x8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + ARC_X_R(c, 8))));
L_b19e4:;
  /* b19e4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(727528));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* b19e8: and w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) & UINT64_C(1)));
  /* b19ec: strb w8, [x19] */
  arc_st8(ARC_X_R(c, 19), ARC_W_R(c, 8));
  /* b19f0: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* b19f4: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b19f8: ret  */
  return;
}

void fn2_b2a88(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076587656));
  /* b2a88: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b2a8c: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* b2a90: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* b2a94: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* b2a98: bl #0x1b6040 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(731804));
  fn2_1b6040(c);
  /* b2a9c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* b2aa0: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* b2aa4: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b2aa8: b #0x24b730 */
  fn2_24b730(c); return;
}

void fn2_b3e20(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076592672));
  /* b3e20: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* b3e24: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b3e28: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* b3e2c: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* b3e30: cmp w1, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 1), UINT64_C(2));
  /* b3e34: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* b3e38: b.hi #0xb3eac */
  if (ARC_COND(c, 8)) goto L_b3eac;
  /* b3e3c: add x0, x19, #4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(4)));
  /* b3e40: mov w20, w1 */
  ARC_W_W(c, 20, ARC_W_R(c, 1));
  /* b3e44: str wzr, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 31));
  /* b3e48: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(736844));
  fn2_1d2c2c(c);
  /* b3e4c: add x0, x19, #0xc */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(12)));
  /* b3e50: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(736852));
  fn2_1d2c2c(c);
  /* b3e54: add x0, x19, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(24)));
  /* b3e58: str wzr, [x19, #0x14] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(20)), ARC_W_R(c, 31));
  /* b3e5c: bl #0x1ccc74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(736864));
  fn2_1ccc74(c);
  /* b3e60: mov w8, #6 */
  ARC_W_W(c, 8, UINT64_C(6));
  /* b3e64: sub x1, x29, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* b3e68: mov w0, w20 */
  ARC_W_W(c, 0, ARC_W_R(c, 20));
  /* b3e6c: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* b3e70: str w8, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 8));
  /* b3e74: stur wzr, [x29, #-8] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-8)), ARC_W_R(c, 31));
  /* b3e78: bl #0xb2de4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(736892));
  fn2_b2de4(c);
  /* b3e7c: sub x1, x29, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* b3e80: mov w0, w20 */
  ARC_W_W(c, 0, ARC_W_R(c, 20));
  /* b3e84: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* b3e88: bl #0xb4020 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(736908));
  fn2_b4020(c);
  /* b3e8c: sub x1, x29, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* b3e90: mov w0, w20 */
  ARC_W_W(c, 0, ARC_W_R(c, 20));
  /* b3e94: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* b3e98: bl #0xb4168 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(736924));
  fn2_b4168(c);
  /* b3e9c: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* b3ea0: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b3ea4: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* b3ea8: ret  */
  return;
L_b3eac:;
  /* b3eac: adrp x20, #0x1e000 */
  ARC_X_W(c, 20, (arc_image_bases[2] + UINT64_C(122880)));
  /* b3eb0: add x20, x20, #0xb6f */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) + UINT64_C(2927)));
  /* b3eb4: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* b3eb8: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* b3ebc: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* b3ec0: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(736964));
  fn2_1b8fd4(c);
  /* b3ec4: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* b3ec8: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* b3ecc: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(736976));
  fn2_1b7d24(c);
  /* b3ed0: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* b3ed4: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* b3ed8: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* b3edc: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(736992));
  fn2_1b8fd4(c);
  /* b3ee0: add x0, x19, #4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(4)));
  /* b3ee4: str wzr, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 31));
  /* b3ee8: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(737004));
  fn2_1d2c2c(c);
  /* b3eec: add x0, x19, #0xc */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(12)));
  /* b3ef0: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(737012));
  fn2_1d2c2c(c);
  /* b3ef4: add x0, x19, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(24)));
  /* b3ef8: str wzr, [x19, #0x14] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(20)), ARC_W_R(c, 31));
  /* b3efc: bl #0x1ccc74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(737024));
  fn2_1ccc74(c);
  /* b3f00: mov w20, #6 */
  ARC_W_W(c, 20, UINT64_C(6));
  /* b3f04: mov w8, #0x1a */
  ARC_W_W(c, 8, UINT64_C(26));
  /* b3f08: add x0, x19, #4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(4)));
  /* b3f0c: sub x1, x29, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* b3f10: str w20, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 20));
  /* b3f14: str w8, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 8));
  /* b3f18: bl #0x1d5dc0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(737052));
  fn2_1d5dc0(c);
  /* b3f1c: add x0, x19, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(24)));
  /* b3f20: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* b3f24: str wzr, [x19, #0x14] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(20)), ARC_W_R(c, 31));
  /* b3f28: bl #0x1d06b8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(737068));
  fn2_1d06b8(c);
  /* b3f2c: add x0, x19, #0xc */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(12)));
  /* b3f30: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* b3f34: str w20, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 20));
  /* b3f38: bl #0x1d5dc0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(737084));
  fn2_1d5dc0(c);
  /* b3f3c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* b3f40: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(737092));
  fn2_1d2d24(c);
  /* b3f44: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* b3f48: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(737100));
  fn2_1ccd9c(c);
  /* b3f4c: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* b3f50: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(737108));
  fn2_1d2d24(c);
  /* b3f54: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* b3f58: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b3f5c: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* b3f60: ret  */
  return;
}

void fn2_b532c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076598060));
  /* b532c: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b5330: stp x24, x23, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* b5334: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* b5338: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* b533c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* b5340: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* b5344: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* b5348: mov x19, x4 */
  ARC_X_W(c, 19, ARC_X_R(c, 4));
  /* b534c: mov x20, x3 */
  ARC_X_W(c, 20, ARC_X_R(c, 3));
  /* b5350: mov x21, x2 */
  ARC_X_W(c, 21, ARC_X_R(c, 2));
  /* b5354: mov x22, x1 */
  ARC_X_W(c, 22, ARC_X_R(c, 1));
  /* b5358: mov x24, x8 */
  ARC_X_W(c, 24, ARC_X_R(c, 8));
  /* b535c: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(742240));
  fn2_1bc084(c);
  /* b5360: ldp x1, x2, [x23, #0x60] */
  { const uint64_t _pa = (ARC_X_R(c, 23) + INT64_C(96));
    ARC_X_W(c, 1, arc_ld64(_pa));
    ARC_X_W(c, 2, arc_ld64(_pa + 8));
  }
  /* b5364: add x7, x23, #0x48 */
  ARC_X_W(c, 7, (ARC_X_R(c, 23) + UINT64_C(72)));
  /* b5368: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* b536c: mov x3, x21 */
  ARC_X_W(c, 3, ARC_X_R(c, 21));
  /* b5370: mov w4, w20 */
  ARC_W_W(c, 4, ARC_W_R(c, 20));
  /* b5374: mov x5, x24 */
  ARC_X_W(c, 5, ARC_X_R(c, 24));
  /* b5378: mov x6, x19 */
  ARC_X_W(c, 6, ARC_X_R(c, 19));
  /* b537c: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* b5380: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* b5384: ldp x24, x23, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* b5388: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b538c: b #0xb542c */
  fn2_b542c(c); return;
}

void fn2_b6468(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076602472));
  /* b6468: sub sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(48)));
  /* b646c: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b6470: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* b6474: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* b6478: ldp x20, x8, [x0, #0x60] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(96));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* b647c: add x19, x1, x8, asr #1 */
  ARC_X_W(c, 19, (ARC_X_R(c, 1) + ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> 1))));
  /* b6480: tbz w8, #0, #0xb648c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_b648c;
  /* b6484: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* b6488: ldr x20, [x8, x20] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 8) + ARC_X_R(c, 20))));
L_b648c:;
  /* b648c: ldr x1, [x2] */
  ARC_X_W(c, 1, arc_ld64(ARC_X_R(c, 2)));
  /* b6490: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* b6494: bl #0x1ccc88 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(746648));
  fn2_1ccc88(c);
  /* b6498: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* b649c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* b64a0: blr x20 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(746660));
  arc_dispatch(c, ARC_X_R(c, 20));
  /* b64a4: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* b64a8: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(746668));
  fn2_1ccd9c(c);
  /* b64ac: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* b64b0: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b64b4: add sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(48)));
  /* b64b8: ret  */
  return;
}

void fn2_b7540(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076606784));
  /* b7540: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b7544: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* b7548: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* b754c: mov x5, x4 */
  ARC_X_W(c, 5, ARC_X_R(c, 4));
  /* b7550: mov x4, x3 */
  ARC_X_W(c, 4, ARC_X_R(c, 3));
  /* b7554: mov x3, x2 */
  ARC_X_W(c, 3, ARC_X_R(c, 2));
  /* b7558: mov x9, x1 */
  ARC_X_W(c, 9, ARC_X_R(c, 1));
  /* b755c: ldp x1, x2, [x0, #0x60] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(96));
    ARC_X_W(c, 1, arc_ld64(_pa));
    ARC_X_W(c, 2, arc_ld64(_pa + 8));
  }
  /* b7560: add x6, x0, #0x48 */
  ARC_X_W(c, 6, (ARC_X_R(c, 0) + UINT64_C(72)));
  /* b7564: mov x0, x9 */
  ARC_X_W(c, 0, ARC_X_R(c, 9));
  /* b7568: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* b756c: bl #0xb772c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(750960));
  fn2_b772c(c);
  /* b7570: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* b7574: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* b7578: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b757c: b #0x1bc084 */
  fn2_1bc084(c); return;
}

void fn2_b8d28(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076612904));
  /* b8d28: sub sp, sp, #0xc0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(192)));
  /* b8d2c: stp x29, x30, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b8d30: str x23, [sp, #0x90] */
  arc_st64(((c)->sp + INT64_C(144)), ARC_X_R(c, 23));
  /* b8d34: stp x22, x21, [sp, #0xa0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(160));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* b8d38: stp x20, x19, [sp, #0xb0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(176));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* b8d3c: add x29, sp, #0x80 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(128)));
  /* b8d40: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* b8d44: bl #0x1e98c4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(757064));
  fn2_1e98c4(c);
  /* b8d48: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* b8d4c: adrp x1, #0x20000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(131072)));
  /* b8d50: add x1, x1, #0x91 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(145)));
  /* b8d54: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* b8d58: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* b8d5c: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(757088));
  fn2_1b8fd4(c);
  /* b8d60: sub x1, x29, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* b8d64: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* b8d68: bl #0x1e9e44 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(757100));
  fn2_1e9e44(c);
  /* b8d6c: tbz w0, #0, #0xb8e64 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_b8e64;
  /* b8d70: adrp x1, #0x20000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(131072)));
  /* b8d74: add x1, x1, #0x91 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(145)));
  /* b8d78: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* b8d7c: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* b8d80: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(757124));
  fn2_1b8fd4(c);
  /* b8d84: adrp x1, #0x24000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(147456)));
  /* b8d88: add x1, x1, #0x82c */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2092)));
  /* b8d8c: add x0, sp, #0x40 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(64)));
  /* b8d90: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* b8d94: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(757144));
  fn2_1b8fd4(c);
  /* b8d98: add x1, sp, #0x28 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(40)));
  /* b8d9c: add x2, sp, #0x40 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(64)));
  /* b8da0: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* b8da4: mov w3, #1 */
  ARC_W_W(c, 3, UINT64_C(1));
  /* b8da8: bl #0x1ead58 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(757164));
  fn2_1ead58(c);
  /* b8dac: mov w21, w0 */
  ARC_W_W(c, 21, ARC_W_R(c, 0));
  /* b8db0: add x0, sp, #0x40 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(64)));
  /* b8db4: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(757176));
  fn2_1d2d24(c);
  /* b8db8: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* b8dbc: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(757184));
  fn2_1d2d24(c);
  /* b8dc0: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* b8dc4: sub x22, x29, #0x30 */
  ARC_X_W(c, 22, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* b8dc8: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(757196));
  fn2_1d2d24(c);
  /* b8dcc: tbz w21, #0, #0xb8e6c */
  if (((ARC_W_R(c, 21)) >> 0 & 1) == 0) goto L_b8e6c;
  /* b8dd0: adrp x1, #0x20000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(131072)));
  /* b8dd4: add x1, x1, #0x91 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(145)));
  /* b8dd8: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* b8ddc: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* b8de0: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(757220));
  fn2_1b8fd4(c);
  /* b8de4: adrp x1, #0x24000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(147456)));
  /* b8de8: add x1, x1, #0x82c */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2092)));
  /* b8dec: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* b8df0: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* b8df4: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(757240));
  fn2_1b8fd4(c);
  /* b8df8: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* b8dfc: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* b8e00: bl #0x1bc44c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(757252));
  fn2_1bc44c(c);
  /* b8e04: add x21, x22, #0x18 */
  ARC_X_W(c, 21, (ARC_X_R(c, 22) + UINT64_C(24)));
  /* b8e08: add x1, sp, #0x20 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(32)));
  /* b8e0c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* b8e10: bl #0x1bc44c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(757268));
  fn2_1bc44c(c);
  /* b8e14: add x8, sp, #0x28 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(40)));
  /* b8e18: add x1, sp, #0x40 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(64)));
  /* b8e1c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* b8e20: mov w2, #2 */
  ARC_W_W(c, 2, UINT64_C(2));
  /* b8e24: stp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* b8e28: bl #0x1eb0c8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(757292));
  fn2_1eb0c8(c);
  /* b8e2c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* b8e30: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(757300));
  fn2_1bc620(c);
  /* b8e34: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* b8e38: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(757308));
  fn2_1bc620(c);
  /* b8e3c: add x8, sp, #0x18 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(24)));
  /* b8e40: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* b8e44: bl #0x1bc84c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(757320));
  fn2_1bc84c(c);
  /* b8e48: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* b8e4c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(757328));
  fn2_1bc620(c);
  /* b8e50: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* b8e54: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(757336));
  fn2_1d2d24(c);
  /* b8e58: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* b8e5c: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(757344));
  fn2_1d2d24(c);
  /* b8e60: b #0xb8ec4 */
  goto L_b8ec4;
L_b8e64:;
  /* b8e64: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* b8e68: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(757356));
  fn2_1d2d24(c);
L_b8e6c:;
  /* b8e6c: adrp x1, #0x22000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(139264)));
  /* b8e70: add x1, x1, #0x341 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(833)));
  /* b8e74: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* b8e78: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(757372));
  fn2_1b7d24(c);
  /* b8e7c: adrp x1, #0x22000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(139264)));
  /* b8e80: add x1, x1, #0xeda */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3802)));
  /* b8e84: add x0, sp, #0x40 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(64)));
  /* b8e88: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* b8e8c: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(757392));
  fn2_1b8fd4(c);
  /* b8e90: sub x8, x29, #0x30 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* b8e94: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* b8e98: add x1, sp, #0x40 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(64)));
  /* b8e9c: bl #0xbf06c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(757408));
  fn2_bf06c(c);
  /* b8ea0: add x8, sp, #0x18 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(24)));
  /* b8ea4: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* b8ea8: bl #0x1bc84c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(757420));
  fn2_1bc84c(c);
  /* b8eac: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* b8eb0: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(757428));
  fn2_1bc620(c);
  /* b8eb4: add x0, sp, #0x40 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(64)));
  /* b8eb8: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(757436));
  fn2_1d2d24(c);
  /* b8ebc: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* b8ec0: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(757444));
  fn2_1ccd9c(c);
L_b8ec4:;
  /* b8ec4: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* b8ec8: add x1, x1, #0xb77 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2935)));
  /* b8ecc: add x0, sp, #0x40 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(64)));
  /* b8ed0: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(757460));
  fn2_1b7d24(c);
  /* b8ed4: add x8, sp, #0x28 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(40)));
  /* b8ed8: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* b8edc: add x1, sp, #0x40 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(64)));
  /* b8ee0: bl #0x1cef88 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(757476));
  fn2_1cef88(c);
  /* b8ee4: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* b8ee8: add x1, x1, #0xbe1 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3041)));
  /* b8eec: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* b8ef0: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(757492));
  fn2_1b7d24(c);
  /* b8ef4: sub x8, x29, #0x30 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* b8ef8: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* b8efc: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* b8f00: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* b8f04: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* b8f08: bl #0x1cdb2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(757516));
  fn2_1cdb2c(c);
  /* b8f0c: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* b8f10: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(757524));
  fn2_1ccd9c(c);
  /* b8f14: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* b8f18: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(757532));
  fn2_1ccd9c(c);
  /* b8f1c: add x0, sp, #0x40 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(64)));
  /* b8f20: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(757540));
  fn2_1ccd9c(c);
  /* b8f24: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* b8f28: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(757548));
  fn2_1ccd9c(c);
  /* b8f2c: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* b8f30: bl #0x1e479c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(757556));
  fn2_1e479c(c);
  /* b8f34: cmp x0, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 0), UINT64_C(1));
  /* b8f38: b.lt #0xb8fac */
  if (ARC_COND(c, 11)) goto L_b8fac;
  /* b8f3c: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* b8f40: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* b8f44: bl #0x1bbe28 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(757576));
  fn2_1bbe28(c);
  /* b8f48: bl #0x1cecf0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(757580));
  fn2_1cecf0(c);
  /* b8f4c: mov w8, #0x270f */
  ARC_W_W(c, 8, UINT64_C(9999));
  /* b8f50: cmp x0, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* b8f54: csel x8, x0, x8, lo */
  ARC_X_W(c, 8, (ARC_COND(c, 3) ? (ARC_X_R(c, 0)) : ARC_X_R(c, 8)));
  /* b8f58: cmp x0, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 0), UINT64_C(0));
  /* b8f5c: csel x20, xzr, x8, lt */
  ARC_X_W(c, 20, (ARC_COND(c, 11) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 8)));
  /* b8f60: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* b8f64: bl #0x1e479c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(757608));
  fn2_1e479c(c);
  /* b8f68: cmp x0, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 0), UINT64_C(1));
  /* b8f6c: b.le #0xb8fc0 */
  if (ARC_COND(c, 13)) goto L_b8fc0;
L_b8f70:;
  /* b8f70: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* b8f74: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* b8f78: bl #0x1bbe28 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(757628));
  fn2_1bbe28(c);
  /* b8f7c: bl #0x1cecf0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(757632));
  fn2_1cecf0(c);
  /* b8f80: mov w8, #0x270f */
  ARC_W_W(c, 8, UINT64_C(9999));
  /* b8f84: cmp x0, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* b8f88: csel x8, x0, x8, lo */
  ARC_X_W(c, 8, (ARC_COND(c, 3) ? (ARC_X_R(c, 0)) : ARC_X_R(c, 8)));
  /* b8f8c: cmp x0, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 0), UINT64_C(0));
  /* b8f90: csel x21, xzr, x8, lt */
  ARC_X_W(c, 21, (ARC_COND(c, 11) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 8)));
  /* b8f94: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* b8f98: bl #0x1e479c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(757660));
  fn2_1e479c(c);
  /* b8f9c: cmp x0, #3 */
  (void)arc_sub64(c, ARC_X_R(c, 0), UINT64_C(3));
  /* b8fa0: b.ge #0xb8fd4 */
  if (ARC_COND(c, 10)) goto L_b8fd4;
L_b8fa4:;
  /* b8fa4: mov x22, xzr */
  ARC_X_W(c, 22, ARC_X_R(c, 31));
  /* b8fa8: b #0xb8ff8 */
  goto L_b8ff8;
L_b8fac:;
  /* b8fac: mov x20, xzr */
  ARC_X_W(c, 20, ARC_X_R(c, 31));
  /* b8fb0: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* b8fb4: bl #0x1e479c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(757688));
  fn2_1e479c(c);
  /* b8fb8: cmp x0, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 0), UINT64_C(1));
  /* b8fbc: b.gt #0xb8f70 */
  if (ARC_COND(c, 12)) goto L_b8f70;
L_b8fc0:;
  /* b8fc0: mov x21, xzr */
  ARC_X_W(c, 21, ARC_X_R(c, 31));
  /* b8fc4: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* b8fc8: bl #0x1e479c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(757708));
  fn2_1e479c(c);
  /* b8fcc: cmp x0, #3 */
  (void)arc_sub64(c, ARC_X_R(c, 0), UINT64_C(3));
  /* b8fd0: b.lt #0xb8fa4 */
  if (ARC_COND(c, 11)) goto L_b8fa4;
L_b8fd4:;
  /* b8fd4: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* b8fd8: mov w1, #2 */
  ARC_W_W(c, 1, UINT64_C(2));
  /* b8fdc: bl #0x1bbe28 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(757728));
  fn2_1bbe28(c);
  /* b8fe0: bl #0x1cecf0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(757732));
  fn2_1cecf0(c);
  /* b8fe4: mov w8, #0x270f */
  ARC_W_W(c, 8, UINT64_C(9999));
  /* b8fe8: cmp x0, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* b8fec: csel x8, x0, x8, lo */
  ARC_X_W(c, 8, (ARC_COND(c, 3) ? (ARC_X_R(c, 0)) : ARC_X_R(c, 8)));
  /* b8ff0: cmp x0, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 0), UINT64_C(0));
  /* b8ff4: csel x22, xzr, x8, lt */
  ARC_X_W(c, 22, (ARC_COND(c, 11) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 8)));
L_b8ff8:;
  /* b8ff8: mov w8, #0x2710 */
  ARC_W_W(c, 8, UINT64_C(10000));
  /* b8ffc: mov w9, #0x64 */
  ARC_W_W(c, 9, UINT64_C(100));
  /* b9000: adrp x1, #0x1c000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(114688)));
  /* b9004: add x1, x1, #0xabf */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2751)));
  /* b9008: mul x8, x20, x8 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 20)) * (uint64_t)(ARC_X_R(c, 8))));
  /* b900c: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* b9010: madd x23, x21, x9, x8 */
  ARC_X_W(c, 23, ((uint64_t)(ARC_X_R(c, 8)) + ((uint64_t)(ARC_X_R(c, 21)) * (uint64_t)(ARC_X_R(c, 9)))));
  /* b9014: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(757784));
  fn2_1b7d24(c);
  /* b9018: add x8, sp, #0x10 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(16)));
  /* b901c: bl #0xb9098 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(757792));
  fn2_b9098(c);
  /* b9020: add x8, sp, #8 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(8)));
  /* b9024: bl #0xb9268 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(757800));
  fn2_b9268(c);
  /* b9028: mov x8, sp */
  ARC_X_W(c, 8, (c)->sp);
  /* b902c: bl #0xb94b8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(757808));
  fn2_b94b8(c);
  /* b9030: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* b9034: add x4, x23, x22 */
  ARC_X_W(c, 4, (ARC_X_R(c, 23) + ARC_X_R(c, 22)));
  /* b9038: add x5, sp, #0x10 */
  ARC_X_W(c, 5, ((c)->sp + UINT64_C(16)));
  /* b903c: add x6, sp, #8 */
  ARC_X_W(c, 6, ((c)->sp + UINT64_C(8)));
  /* b9040: mov x7, sp */
  ARC_X_W(c, 7, (c)->sp);
  /* b9044: mov x8, x19 */
  ARC_X_W(c, 8, ARC_X_R(c, 19));
  /* b9048: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* b904c: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* b9050: mov x3, x22 */
  ARC_X_W(c, 3, ARC_X_R(c, 22));
  /* b9054: bl #0xbe4f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(757848));
  fn2_be4f8(c);
  /* b9058: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* b905c: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(757856));
  fn2_1ccd9c(c);
  /* b9060: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* b9064: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(757864));
  fn2_1ccd9c(c);
  /* b9068: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* b906c: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(757872));
  fn2_1ccd9c(c);
  /* b9070: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* b9074: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(757880));
  fn2_1ccd9c(c);
  /* b9078: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* b907c: bl #0x1e46f4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(757888));
  fn2_1e46f4(c);
  /* b9080: ldp x20, x19, [sp, #0xb0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(176));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* b9084: ldr x23, [sp, #0x90] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(144))));
  /* b9088: ldp x22, x21, [sp, #0xa0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(160));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* b908c: ldp x29, x30, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b9090: add sp, sp, #0xc0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(192)));
  /* b9094: ret  */
  return;
}

void fn2_bcd60(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076629344));
  /* bcd60: adrp x0, #0xbc000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(770048)));
  /* bcd64: add x0, x0, #0xdb8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3512)));
  /* bcd68: ret  */
  return;
}

void fn2_bd778(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076631928));
  /* bd778: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* bd77c: adrp x1, #0x1b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(110592)));
  /* bd780: add x1, x1, #0x37b */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(891)));
  /* bd784: b #0x1b7d24 */
  fn2_1b7d24(c); return;
}

void fn2_be070(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076634224));
  /* be070: lsr x8, x0, #0x20 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 0)) >> ((UINT64_C(32)) & 63)));
  /* be074: eor w0, w8, w0 */
  ARC_W_W(c, 0, (ARC_W_R(c, 8) ^ ARC_W_R(c, 0)));
  /* be078: ret  */
  return;
}

void fn2_beef4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076637940));
  /* beef4: b #0xb83d0 */
  fn2_b83d0(c); return;
}

void fn2_bfae4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076640996));
  /* bfae4: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* bfae8: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* bfaec: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* bfaf0: ldr x8, [x2] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 2)));
  /* bfaf4: mov x0, x2 */
  ARC_X_W(c, 0, ARC_X_R(c, 2));
  /* bfaf8: mov x19, x2 */
  ARC_X_W(c, 19, ARC_X_R(c, 2));
  /* bfafc: ldr x8, [x8, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(8))));
  /* bfb00: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(785156));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* bfb04: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* bfb08: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* bfb0c: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* bfb10: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* bfb14: b #0x1b5ce8 */
  fn2_1b5ce8(c); return;
}

void fn2_c04f0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076643568));
  /* c04f0: mov w0, #4 */
  ARC_W_W(c, 0, UINT64_C(4));
  /* c04f4: ret  */
  return;
}

void fn2_c11f4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076646900));
  /* c11f4: sub sp, sp, #0xc0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(192)));
  /* c11f8: stp x29, x30, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* c11fc: stp x26, x25, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* c1200: stp x24, x23, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* c1204: stp x22, x21, [sp, #0xa0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(160));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* c1208: stp x20, x19, [sp, #0xb0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(176));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* c120c: add x29, sp, #0x70 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(112)));
  /* c1210: ldp x9, x8, [x5] */
  { const uint64_t _pa = ARC_X_R(c, 5);
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* c1214: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* c1218: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* c121c: mov x22, x5 */
  ARC_X_W(c, 22, ARC_X_R(c, 5));
  /* c1220: mov x21, x4 */
  ARC_X_W(c, 21, ARC_X_R(c, 4));
  /* c1224: mov x19, x3 */
  ARC_X_W(c, 19, ARC_X_R(c, 3));
  /* c1228: mov w24, w2 */
  ARC_W_W(c, 24, ARC_W_R(c, 2));
  /* c122c: mov x23, x1 */
  ARC_X_W(c, 23, ARC_X_R(c, 1));
  /* c1230: sub x8, x8, x9 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) - ARC_X_R(c, 9)));
  /* c1234: mov x9, #-0x5555555555555556 */
  ARC_X_W(c, 9, UINT64_C(12297829382473034410));
  /* c1238: add x25, sp, #8 */
  ARC_X_W(c, 25, ((c)->sp + UINT64_C(8)));
  /* c123c: asr x8, x8, #3 */
  ARC_X_W(c, 8, ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(3)) & 63))));
  /* c1240: movk x9, #0xaaab */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(18446744073709486080)) | UINT64_C(43691)));
  /* c1244: mul x26, x8, x9 */
  ARC_X_W(c, 26, ((uint64_t)(ARC_X_R(c, 8)) * (uint64_t)(ARC_X_R(c, 9))));
  /* c1248: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(791116));
  fn2_1bc084(c);
  /* c124c: add x0, x25, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 25) + UINT64_C(24)));
  /* c1250: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(791124));
  fn2_1bc084(c);
  /* c1254: cmp w24, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 24), UINT64_C(0));
  /* c1258: b.le #0xc12a8 */
  if (ARC_COND(c, 13)) goto L_c12a8;
  /* c125c: ldr x1, [x23] */
  ARC_X_W(c, 1, arc_ld64(ARC_X_R(c, 23)));
  /* c1260: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* c1264: bl #0x1bc09c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(791144));
  fn2_1bc09c(c);
  /* c1268: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* c126c: sub x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* c1270: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(791156));
  fn2_1bcf04(c);
  /* c1274: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* c1278: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(791164));
  fn2_1bc620(c);
  /* c127c: cmp w24, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 24), UINT64_C(1));
  /* c1280: b.eq #0xc12c4 */
  if (ARC_COND(c, 0)) goto L_c12c4;
  /* c1284: ldr x1, [x23, #8] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 23) + INT64_C(8))));
  /* c1288: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* c128c: bl #0x1bc09c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(791184));
  fn2_1bc09c(c);
  /* c1290: add x0, x25, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 25) + UINT64_C(24)));
  /* c1294: sub x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* c1298: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(791196));
  fn2_1bcf04(c);
  /* c129c: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* c12a0: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(791204));
  fn2_1bc620(c);
  /* c12a4: b #0xc12e0 */
  goto L_c12e0;
L_c12a8:;
  /* c12a8: sub w8, w26, #2 */
  ARC_W_W(c, 8, (ARC_W_R(c, 26) - UINT64_C(2)));
  /* c12ac: mov w9, #0x18 */
  ARC_W_W(c, 9, UINT64_C(24));
  /* c12b0: ldr x10, [x22] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 22)));
  /* c12b4: nop  */
  /* nop: no architectural effect here */
  /* c12b8: smaddl x1, w8, w9, x10 */
  ARC_X_W(c, 1, (((int64_t)(ARC_X_R(c, 10))) + (((int64_t)(int32_t)(ARC_W_R(c, 8))) * ((int64_t)(int32_t)(ARC_W_R(c, 9))))));
  /* c12bc: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* c12c0: bl #0x1bce10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(791236));
  fn2_1bce10(c);
L_c12c4:;
  /* c12c4: sub w8, w26, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 26) - UINT64_C(1)));
  /* c12c8: mov w9, #0x18 */
  ARC_W_W(c, 9, UINT64_C(24));
  /* c12cc: ldr x10, [x22] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 22)));
  /* c12d0: nop  */
  /* nop: no architectural effect here */
  /* c12d4: smaddl x1, w8, w9, x10 */
  ARC_X_W(c, 1, (((int64_t)(ARC_X_R(c, 10))) + (((int64_t)(int32_t)(ARC_W_R(c, 8))) * ((int64_t)(int32_t)(ARC_W_R(c, 9))))));
  /* c12d8: add x0, x25, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 25) + UINT64_C(24)));
  /* c12dc: bl #0x1bce10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(791264));
  fn2_1bce10(c);
L_c12e0:;
  /* c12e0: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* c12e4: str wzr, [x21] */
  arc_st32(ARC_X_R(c, 21), ARC_W_R(c, 31));
  /* c12e8: add x22, sp, #8 */
  ARC_X_W(c, 22, ((c)->sp + UINT64_C(8)));
  /* c12ec: bl #0x1bc668 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(791280));
  fn2_1bc668(c);
  /* c12f0: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* c12f4: add x0, sp, #0x38 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(56)));
  /* c12f8: add x1, x25, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 25) + UINT64_C(24)));
  /* c12fc: bl #0x1bc0b8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(791296));
  fn2_1bc0b8(c);
  /* c1300: sub x8, x29, #0x20 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* c1304: add x1, sp, #0x38 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(56)));
  /* c1308: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* c130c: blr x20 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(791312));
  arc_dispatch(c, ARC_X_R(c, 20));
  /* c1310: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* c1314: sub x1, x29, #0x20 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* c1318: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(791324));
  fn2_1bc2f8(c);
  /* c131c: sub x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* c1320: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* c1324: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(791336));
  fn2_1bcf04(c);
  /* c1328: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* c132c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(791344));
  fn2_1bc620(c);
  /* c1330: sub x0, x29, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* c1334: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(791352));
  fn2_1ccd9c(c);
  /* c1338: add x0, sp, #0x38 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(56)));
  /* c133c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(791360));
  fn2_1bc620(c);
  /* c1340: add x0, x22, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 22) + UINT64_C(24)));
  /* c1344: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(791368));
  fn2_1bc620(c);
  /* c1348: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* c134c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(791376));
  fn2_1bc620(c);
  /* c1350: ldp x20, x19, [sp, #0xb0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(176));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* c1354: ldp x22, x21, [sp, #0xa0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(160));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* c1358: ldp x24, x23, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* c135c: ldp x26, x25, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* c1360: ldp x29, x30, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* c1364: add sp, sp, #0xc0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(192)));
  /* c1368: ret  */
  return;
}

void fn2_c30b0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076654768));
  /* c30b0: sub sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(48)));
  /* c30b4: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* c30b8: str x19, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 19));
  /* c30bc: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* c30c0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* c30c4: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* c30c8: bl #0x1d7878 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(798924));
  fn2_1d7878(c);
  /* c30cc: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* c30d0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* c30d4: bl #0xc2c88 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(798936));
  fn2_c2c88(c);
  /* c30d8: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* c30dc: bl #0x1d79fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(798944));
  fn2_1d79fc(c);
  /* c30e0: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* c30e4: ldr x19, [sp, #0x20] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(32))));
  /* c30e8: add sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(48)));
  /* c30ec: ret  */
  return;
}

void fn2_c60e4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076667108));
  /* c60e4: cmp x0, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 1));
  /* c60e8: cset w0, lo */
  ARC_W_W(c, 0, (ARC_COND(c, 3) ? 1 : 0));
  /* c60ec: ret  */
  return;
}

void fn2_c7378(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076671864));
  /* c7378: ldrb w8, [x1] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 1)));
  /* c737c: strb w8, [x0, #0x31] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(49)), ARC_W_R(c, 8));
  /* c7380: ret  */
  return;
}

void fn2_c8748(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076676936));
  /* c8748: lsr w8, w1, #0x1d */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 1)) >> ((UINT64_C(29)) & 31)));
  /* c874c: and w0, w8, #4 */
  ARC_W_W(c, 0, (ARC_W_R(c, 8) & UINT64_C(4)));
  /* c8750: ret  */
  return;
}

void fn2_ca28c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076683916));
  /* ca28c: sub sp, sp, #0xc0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(192)));
  /* ca290: stp x29, x30, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* ca294: str x25, [sp, #0x80] */
  arc_st64(((c)->sp + INT64_C(128)), ARC_X_R(c, 25));
  /* ca298: stp x24, x23, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* ca29c: stp x22, x21, [sp, #0xa0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(160));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* ca2a0: stp x20, x19, [sp, #0xb0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(176));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* ca2a4: add x29, sp, #0x70 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(112)));
  /* ca2a8: mov x24, sp */
  ARC_X_W(c, 24, (c)->sp);
  /* ca2ac: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* ca2b0: str x0, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 0));
  /* ca2b4: add x0, x24, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 24) + UINT64_C(8)));
  /* ca2b8: mov x22, x3 */
  ARC_X_W(c, 22, ARC_X_R(c, 3));
  /* ca2bc: mov w19, w2 */
  ARC_W_W(c, 19, ARC_W_R(c, 2));
  /* ca2c0: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* ca2c4: bl #0x1ddca4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(828104));
  fn2_1ddca4(c);
  /* ca2c8: add x0, x24, #0x19 */
  ARC_X_W(c, 0, (ARC_X_R(c, 24) + UINT64_C(25)));
  /* ca2cc: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* ca2d0: strb w19, [sp, #0x18] */
  arc_st8(((c)->sp + INT64_C(24)), ARC_W_R(c, 19));
  /* ca2d4: bl #0x1d788c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(828120));
  fn2_1d788c(c);
  /* ca2d8: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* ca2dc: bl #0x220748 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(828128));
  fn2_220748(c);
  /* ca2e0: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* ca2e4: add x1, x1, #0xb6f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2927)));
  /* ca2e8: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* ca2ec: mov w0, #0x40 */
  ARC_W_W(c, 0, UINT64_C(64));
  /* ca2f0: mov x2, x1 */
  ARC_X_W(c, 2, ARC_X_R(c, 1));
  /* ca2f4: bl #0x1b5d1c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(828152));
  fn2_1b5d1c(c);
  /* ca2f8: ldr x8, [sp] */
  ARC_X_W(c, 8, arc_ld64((c)->sp));
  /* ca2fc: sub x25, x29, #0x30 */
  ARC_X_W(c, 25, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* ca300: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* ca304: add x0, x25, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 25) + UINT64_C(8)));
  /* ca308: add x1, x24, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 24) + UINT64_C(8)));
  /* ca30c: stur x8, [x29, #-0x30] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-48)), ARC_X_R(c, 8));
  /* ca310: bl #0x1ddca4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(828180));
  fn2_1ddca4(c);
  /* ca314: ldrb w8, [sp, #0x18] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(24))));
  /* ca318: add x0, x25, #0x19 */
  ARC_X_W(c, 0, (ARC_X_R(c, 25) + UINT64_C(25)));
  /* ca31c: add x1, x24, #0x19 */
  ARC_X_W(c, 1, (ARC_X_R(c, 24) + UINT64_C(25)));
  /* ca320: sturb w8, [x29, #-0x18] */
  arc_st8((ARC_X_R(c, 29) + INT64_C(-24)), ARC_W_R(c, 8));
  /* ca324: bl #0x1d788c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(828200));
  fn2_1d788c(c);
  /* ca328: ldur x9, [x29, #-0x30] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 29) + INT64_C(-48))));
  /* ca32c: adrp x8, #0x252000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2433024)));
  /* ca330: add x8, x8, #0x320 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(800)));
  /* ca334: add x0, x23, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 23) + UINT64_C(24)));
  /* ca338: add x1, x25, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 25) + UINT64_C(8)));
  /* ca33c: stp x8, x22, [x23] */
  { const uint64_t _pa = ARC_X_R(c, 23);
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 22));
  }
  /* ca340: str x9, [x23, #0x10] */
  arc_st64((ARC_X_R(c, 23) + INT64_C(16)), ARC_X_R(c, 9));
  /* ca344: bl #0x1ddca4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(828232));
  fn2_1ddca4(c);
  /* ca348: ldurb w8, [x29, #-0x18] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-24))));
  /* ca34c: add x0, x23, #0x29 */
  ARC_X_W(c, 0, (ARC_X_R(c, 23) + UINT64_C(41)));
  /* ca350: add x1, x25, #0x19 */
  ARC_X_W(c, 1, (ARC_X_R(c, 25) + UINT64_C(25)));
  /* ca354: strb w8, [x23, #0x28] */
  arc_st8((ARC_X_R(c, 23) + INT64_C(40)), ARC_W_R(c, 8));
  /* ca358: bl #0x1d788c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(828252));
  fn2_1d788c(c);
  /* ca35c: add x0, sp, #0x30 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(48)));
  /* ca360: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* ca364: bl #0x1b75a4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(828264));
  fn2_1b75a4(c);
  /* ca368: add x0, x25, #0x19 */
  ARC_X_W(c, 0, (ARC_X_R(c, 25) + UINT64_C(25)));
  /* ca36c: bl #0x1d79fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(828272));
  fn2_1d79fc(c);
  /* ca370: add x0, x25, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 25) + UINT64_C(8)));
  /* ca374: bl #0x1dde08 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(828280));
  fn2_1dde08(c);
  /* ca378: add x3, sp, #0x30 */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(48)));
  /* ca37c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* ca380: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* ca384: mov w2, w19 */
  ARC_W_W(c, 2, ARC_W_R(c, 19));
  /* ca388: bl #0xca3c0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(828300));
  fn2_ca3c0(c);
  /* ca38c: add x0, sp, #0x30 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(48)));
  /* ca390: bl #0x1d79fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(828308));
  fn2_1d79fc(c);
  /* ca394: add x0, x24, #0x19 */
  ARC_X_W(c, 0, (ARC_X_R(c, 24) + UINT64_C(25)));
  /* ca398: bl #0x1d79fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(828316));
  fn2_1d79fc(c);
  /* ca39c: add x0, x24, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 24) + UINT64_C(8)));
  /* ca3a0: bl #0x1dde08 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(828324));
  fn2_1dde08(c);
  /* ca3a4: ldp x20, x19, [sp, #0xb0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(176));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* ca3a8: ldr x25, [sp, #0x80] */
  ARC_X_W(c, 25, arc_ld64(((c)->sp + INT64_C(128))));
  /* ca3ac: ldp x22, x21, [sp, #0xa0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(160));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* ca3b0: ldp x24, x23, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* ca3b4: ldp x29, x30, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ca3b8: add sp, sp, #0xc0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(192)));
  /* ca3bc: ret  */
  return;
}

void fn2_cc764(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076693348));
  /* cc764: sub sp, sp, #0xc0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(192)));
  /* cc768: stp x29, x30, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* cc76c: str x23, [sp, #0x90] */
  arc_st64(((c)->sp + INT64_C(144)), ARC_X_R(c, 23));
  /* cc770: stp x22, x21, [sp, #0xa0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(160));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* cc774: stp x20, x19, [sp, #0xb0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(176));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* cc778: add x29, sp, #0x80 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(128)));
  /* cc77c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* cc780: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* cc784: mov x20, x3 */
  ARC_X_W(c, 20, ARC_X_R(c, 3));
  /* cc788: mov w22, w2 */
  ARC_W_W(c, 22, ARC_W_R(c, 2));
  /* cc78c: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* cc790: str wzr, [x4] */
  arc_st32(ARC_X_R(c, 4), ARC_W_R(c, 31));
  /* cc794: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(837528));
  fn2_1bc084(c);
  /* cc798: sub x1, x29, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* cc79c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* cc7a0: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(837540));
  fn2_1bcf04(c);
  /* cc7a4: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* cc7a8: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(837548));
  fn2_1bc620(c);
  /* cc7ac: ldr x20, [x19, #0x10] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* cc7b0: cmp w22, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 22), UINT64_C(1));
  /* cc7b4: b.lt #0xcc7fc */
  if (ARC_COND(c, 11)) goto L_cc7fc;
  /* cc7b8: ldr x1, [x21] */
  ARC_X_W(c, 1, arc_ld64(ARC_X_R(c, 21)));
  /* cc7bc: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* cc7c0: bl #0x1bc0b8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(837572));
  fn2_1bc0b8(c);
  /* cc7c4: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* cc7c8: bl #0x1bc630 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(837580));
  fn2_1bc630(c);
  /* cc7cc: mov w23, w0 */
  ARC_W_W(c, 23, ARC_W_R(c, 0));
  /* cc7d0: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* cc7d4: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(837592));
  fn2_1bc620(c);
  /* cc7d8: tbz w23, #0, #0xcc81c */
  if (((ARC_W_R(c, 23)) >> 0 & 1) == 0) goto L_cc81c;
L_cc7dc:;
  /* cc7dc: add x0, sp, #0x30 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(48)));
  /* cc7e0: bl #0x1d9740 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(837604));
  fn2_1d9740(c);
  /* cc7e4: cmp w22, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 22), UINT64_C(2));
  /* cc7e8: b.lt #0xcc844 */
  if (ARC_COND(c, 11)) goto L_cc844;
  /* cc7ec: ldr x1, [x21, #8] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 21) + INT64_C(8))));
  /* cc7f0: add x0, sp, #0x38 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(56)));
  /* cc7f4: bl #0x1bc0b8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(837624));
  fn2_1bc0b8(c);
  /* cc7f8: b #0xcc84c */
  goto L_cc84c;
L_cc7fc:;
  /* cc7fc: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* cc800: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(837636));
  fn2_1bc084(c);
  /* cc804: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* cc808: bl #0x1bc630 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(837644));
  fn2_1bc630(c);
  /* cc80c: mov w23, w0 */
  ARC_W_W(c, 23, ARC_W_R(c, 0));
  /* cc810: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* cc814: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(837656));
  fn2_1bc620(c);
  /* cc818: tbnz w23, #0, #0xcc7dc */
  if (((ARC_W_R(c, 23)) >> 0 & 1) != 0) goto L_cc7dc;
L_cc81c:;
  /* cc81c: adrp x1, #0x2e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(188416)));
  /* cc820: add x1, x1, #0xc1f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3103)));
  /* cc824: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* cc828: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(837676));
  fn2_1b7d24(c);
  /* cc82c: cmp w22, #4 */
  (void)arc_sub32(c, ARC_W_R(c, 22), UINT64_C(4));
  /* cc830: b.lt #0xcc9c0 */
  if (ARC_COND(c, 11)) goto L_cc9c0;
  /* cc834: ldr x1, [x21, #0x18] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 21) + INT64_C(24))));
  /* cc838: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* cc83c: bl #0x1bc0b8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(837696));
  fn2_1bc0b8(c);
  /* cc840: b #0xcc9c8 */
  goto L_cc9c8;
L_cc844:;
  /* cc844: add x0, sp, #0x38 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(56)));
  /* cc848: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(837708));
  fn2_1bc084(c);
L_cc84c:;
  /* cc84c: add x8, sp, #0x28 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(40)));
  /* cc850: add x0, sp, #0x38 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(56)));
  /* cc854: bl #0x1bc84c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(837720));
  fn2_1bc84c(c);
  /* cc858: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* cc85c: add x1, sp, #0x28 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(40)));
  /* cc860: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(837732));
  fn2_1bc2f8(c);
  /* cc864: adrp x1, #0x27000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(159744)));
  /* cc868: add x1, x1, #0x97f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2431)));
  /* cc86c: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* cc870: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(837748));
  fn2_1b7d24(c);
  /* cc874: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* cc878: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* cc87c: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(837760));
  fn2_1bc2f8(c);
  /* cc880: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* cc884: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(837768));
  fn2_1ccd9c(c);
  /* cc888: add x0, sp, #0x30 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(48)));
  /* cc88c: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* cc890: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(837780));
  fn2_1bbfa0(c);
  /* cc894: sub x1, x29, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* cc898: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(837788));
  fn2_1bcf04(c);
  /* cc89c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* cc8a0: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(837796));
  fn2_1bc620(c);
  /* cc8a4: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* cc8a8: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(837804));
  fn2_1bc620(c);
  /* cc8ac: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* cc8b0: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(837812));
  fn2_1ccd9c(c);
  /* cc8b4: add x0, sp, #0x38 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(56)));
  /* cc8b8: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(837820));
  fn2_1bc620(c);
  /* cc8bc: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* cc8c0: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* cc8c4: bl #0x1bc25c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(837832));
  fn2_1bc25c(c);
  /* cc8c8: adrp x1, #0x26000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(155648)));
  /* cc8cc: add x1, x1, #0xfd2 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(4050)));
  /* cc8d0: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* cc8d4: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(837848));
  fn2_1b7d24(c);
  /* cc8d8: add x0, sp, #0x38 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(56)));
  /* cc8dc: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* cc8e0: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(837860));
  fn2_1bc2f8(c);
  /* cc8e4: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* cc8e8: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(837868));
  fn2_1ccd9c(c);
  /* cc8ec: add x0, sp, #0x30 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(48)));
  /* cc8f0: add x1, sp, #0x38 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(56)));
  /* cc8f4: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(837880));
  fn2_1bbfa0(c);
  /* cc8f8: sub x1, x29, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* cc8fc: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(837888));
  fn2_1bcf04(c);
  /* cc900: add x0, sp, #0x38 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(56)));
  /* cc904: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(837896));
  fn2_1bc620(c);
  /* cc908: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* cc90c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(837904));
  fn2_1bc620(c);
  /* cc910: adrp x1, #0x2b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(176128)));
  /* cc914: add x1, x1, #0x48c */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1164)));
  /* cc918: add x0, sp, #0x38 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(56)));
  /* cc91c: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(837920));
  fn2_1b7d24(c);
  /* cc920: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* cc924: add x1, sp, #0x30 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(48)));
  /* cc928: bl #0x1bc530 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(837932));
  fn2_1bc530(c);
  /* cc92c: adrp x1, #0x2c000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(180224)));
  /* cc930: add x1, x1, #0xe3e */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3646)));
  /* cc934: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* cc938: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(837948));
  fn2_1b7d24(c);
  /* cc93c: adrp x1, #0x1a000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(106496)));
  /* cc940: add x1, x1, #0x8e6 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2278)));
  /* cc944: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* cc948: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(837964));
  fn2_1b7d24(c);
  /* cc94c: add x1, sp, #0x38 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(56)));
  /* cc950: sub x2, x29, #0x30 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* cc954: add x3, sp, #8 */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(8)));
  /* cc958: add x4, x29, #0x18 */
  ARC_X_W(c, 4, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* cc95c: bl #0xcaf90 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(837984));
  fn2_caf90(c);
  /* cc960: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* cc964: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(837992));
  fn2_1ccd9c(c);
  /* cc968: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* cc96c: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(838000));
  fn2_1ccd9c(c);
  /* cc970: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* cc974: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(838008));
  fn2_1bc620(c);
  /* cc978: add x0, sp, #0x38 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(56)));
  /* cc97c: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(838016));
  fn2_1ccd9c(c);
  /* cc980: adrp x8, #0x257000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2453504)));
  /* cc984: ldr x8, [x8, #0xff8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(4088))));
  /* cc988: ldr x0, [x19, #0x18] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(24))));
  /* cc98c: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* cc990: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(838036));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* cc994: cbz x0, #0xccaf4 */
  if ((ARC_X_R(c, 0)) == 0) goto L_ccaf4;
  /* cc998: bl #0x1b62dc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(838044));
  fn2_1b62dc(c);
  /* cc99c: cbz x0, #0xccaf4 */
  if ((ARC_X_R(c, 0)) == 0) goto L_ccaf4;
  /* cc9a0: mov x1, x0 */
  ARC_X_W(c, 1, ARC_X_R(c, 0));
  /* cc9a4: add x2, sp, #0x30 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(48)));
  /* cc9a8: add x4, x19, #0x20 */
  ARC_X_W(c, 4, (ARC_X_R(c, 19) + UINT64_C(32)));
  /* cc9ac: add x5, x19, #0x30 */
  ARC_X_W(c, 5, (ARC_X_R(c, 19) + UINT64_C(48)));
  /* cc9b0: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* cc9b4: mov w3, wzr */
  ARC_W_W(c, 3, ARC_W_R(c, 31));
  /* cc9b8: bl #0xca7b4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(838076));
  fn2_ca7b4(c);
  /* cc9bc: b #0xccb1c */
  goto L_ccb1c;
L_cc9c0:;
  /* cc9c0: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* cc9c4: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(838088));
  fn2_1bc084(c);
L_cc9c8:;
  /* cc9c8: add x8, sp, #0x20 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(32)));
  /* cc9cc: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* cc9d0: bl #0x1bc84c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(838100));
  fn2_1bc84c(c);
  /* cc9d4: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* cc9d8: add x1, sp, #0x20 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(32)));
  /* cc9dc: sub x20, x29, #0x30 */
  ARC_X_W(c, 20, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* cc9e0: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(838116));
  fn2_1bc2f8(c);
  /* cc9e4: add x0, x20, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(24)));
  /* cc9e8: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(838124));
  fn2_1bc084(c);
  /* cc9ec: add x0, sp, #0x38 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(56)));
  /* cc9f0: bl #0x1db4a4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(838132));
  fn2_1db4a4(c);
  /* cc9f4: add x0, sp, #0x38 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(56)));
  /* cc9f8: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* cc9fc: bl #0x1db9f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(838144));
  fn2_1db9f0(c);
  /* cca00: add x0, sp, #0x38 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(56)));
  /* cca04: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* cca08: bl #0x1bbf48 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(838156));
  fn2_1bbf48(c);
  /* cca0c: sub x1, x29, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* cca10: bl #0x1bce10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(838164));
  fn2_1bce10(c);
  /* cca14: add x8, sp, #0x30 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(48)));
  /* cca18: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* cca1c: add x1, sp, #0x38 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(56)));
  /* cca20: bl #0x1d0298 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(838180));
  fn2_1d0298(c);
  /* cca24: add x0, sp, #0x38 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(56)));
  /* cca28: bl #0x1db788 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(838188));
  fn2_1db788(c);
  /* cca2c: add x0, x20, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(24)));
  /* cca30: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(838196));
  fn2_1bc620(c);
  /* cca34: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* cca38: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(838204));
  fn2_1bc620(c);
  /* cca3c: add x0, sp, #0x38 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(56)));
  /* cca40: add x1, sp, #0x30 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(48)));
  /* cca44: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(838216));
  fn2_1bc2f8(c);
  /* cca48: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* cca4c: add x1, sp, #0x38 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(56)));
  /* cca50: bl #0x1bc0b8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(838228));
  fn2_1bc0b8(c);
  /* cca54: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* cca58: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* cca5c: str x20, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 20));
  /* cca60: bl #0x24a164 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(838244));
  fn2_24a164(c);
  /* cca64: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* cca68: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(838252));
  fn2_1bc620(c);
  /* cca6c: add x0, sp, #0x38 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(56)));
  /* cca70: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(838260));
  fn2_1bc620(c);
  /* cca74: add x0, sp, #0x30 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(48)));
  /* cca78: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(838268));
  fn2_1ccd9c(c);
  /* cca7c: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* cca80: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(838276));
  fn2_1ccd9c(c);
  /* cca84: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* cca88: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(838284));
  fn2_1bc620(c);
  /* cca8c: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* cca90: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(838292));
  fn2_1ccd9c(c);
  /* cca94: add x8, x29, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* cca98: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* cca9c: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* ccaa0: bl #0xc9844 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(838308));
  fn2_c9844(c);
  /* ccaa4: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* ccaa8: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* ccaac: bl #0x1bc530 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(838320));
  fn2_1bc530(c);
  /* ccab0: add x0, sp, #0x38 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(56)));
  /* ccab4: str x20, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 20));
  /* ccab8: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(838332));
  fn2_1bc084(c);
  /* ccabc: adrp x8, #0x257000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2453504)));
  /* ccac0: add x0, x19, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(48)));
  /* ccac4: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* ccac8: ldr x8, [x8, #0xfb8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(4024))));
  /* ccacc: add x2, sp, #0x38 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(56)));
  /* ccad0: mov w3, #1 */
  ARC_W_W(c, 3, UINT64_C(1));
  /* ccad4: ldr x8, [x8, #0xa8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(168))));
  /* ccad8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(838364));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* ccadc: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* ccae0: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(838372));
  fn2_1bc620(c);
  /* ccae4: add x0, sp, #0x38 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(56)));
  /* ccae8: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(838380));
  fn2_1bc620(c);
  /* ccaec: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* ccaf0: b #0xccb20 */
  goto L_ccb20;
L_ccaf4:;
  /* ccaf4: adrp x0, #0x28000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(163840)));
  /* ccaf8: add x0, x0, #0x646 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1606)));
  /* ccafc: adrp x1, #0x28000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(163840)));
  /* ccb00: add x1, x1, #0x6d2 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1746)));
  /* ccb04: adrp x3, #0x1e000 */
  ARC_X_W(c, 3, (arc_image_bases[2] + UINT64_C(122880)));
  /* ccb08: add x3, x3, #0xc2a */
  ARC_X_W(c, 3, (ARC_X_R(c, 3) + UINT64_C(3114)));
  /* ccb0c: mov w2, #0xa6 */
  ARC_W_W(c, 2, UINT64_C(166));
  /* ccb10: mov w4, wzr */
  ARC_W_W(c, 4, ARC_W_R(c, 31));
  /* ccb14: mov w5, wzr */
  ARC_W_W(c, 5, ARC_W_R(c, 31));
  /* ccb18: bl #0x1b54b0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(838428));
  fn2_1b54b0(c);
L_ccb1c:;
  /* ccb1c: add x0, sp, #0x30 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(48)));
L_ccb20:;
  /* ccb20: bl #0x1d97fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(838436));
  fn2_1d97fc(c);
  /* ccb24: ldp x20, x19, [sp, #0xb0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(176));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* ccb28: ldr x23, [sp, #0x90] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(144))));
  /* ccb2c: ldp x22, x21, [sp, #0xa0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(160));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* ccb30: ldp x29, x30, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ccb34: add sp, sp, #0xc0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(192)));
  /* ccb38: ret  */
  return;
}

void fn2_cd748(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076697416));
  /* cd748: ldr x0, [x0, #8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* cd74c: ret  */
  return;
}

void fn2_ce100(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076699904));
  /* ce100: sub sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(112)));
  /* ce104: stp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* ce108: str x23, [sp, #0x40] */
  arc_st64(((c)->sp + INT64_C(64)), ARC_X_R(c, 23));
  /* ce10c: stp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* ce110: stp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* ce114: add x29, sp, #0x30 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(48)));
  /* ce118: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* ce11c: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* ce120: mov x20, x4 */
  ARC_X_W(c, 20, ARC_X_R(c, 4));
  /* ce124: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* ce128: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* ce12c: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(844080));
  fn2_1bc084(c);
  /* ce130: ldp x23, x22, [x22, #0x60] */
  { const uint64_t _pa = (ARC_X_R(c, 22) + INT64_C(96));
    ARC_X_W(c, 23, arc_ld64(_pa));
    ARC_X_W(c, 22, arc_ld64(_pa + 8));
  }
  /* ce134: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* ce138: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(844092));
  fn2_1bc084(c);
  /* ce13c: add x0, x21, x22, asr #1 */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) + ((uint64_t)((int64_t)(ARC_X_R(c, 22)) >> 1))));
  /* ce140: str wzr, [x20] */
  arc_st32(ARC_X_R(c, 20), ARC_W_R(c, 31));
  /* ce144: tbz w22, #0, #0xce150 */
  if (((ARC_W_R(c, 22)) >> 0 & 1) == 0) goto L_ce150;
  /* ce148: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* ce14c: ldr x23, [x8, x23] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 8) + ARC_X_R(c, 23))));
L_ce150:;
  /* ce150: blr x23 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(844116));
  arc_dispatch(c, ARC_X_R(c, 23));
  /* ce154: mov x1, x0 */
  ARC_X_W(c, 1, ARC_X_R(c, 0));
  /* ce158: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* ce15c: bl #0x1bc488 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(844128));
  fn2_1bc488(c);
  /* ce160: add x1, sp, #0x18 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(24)));
  /* ce164: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ce168: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(844140));
  fn2_1bcf04(c);
  /* ce16c: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* ce170: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(844148));
  fn2_1bc620(c);
  /* ce174: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* ce178: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(844156));
  fn2_1bc620(c);
  /* ce17c: ldp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* ce180: ldr x23, [sp, #0x40] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(64))));
  /* ce184: ldp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* ce188: ldp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ce18c: add sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(112)));
  /* ce190: ret  */
  return;
}

void fn2_cf4a0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076704928));
  /* cf4a0: cmp w1, #3 */
  (void)arc_sub32(c, ARC_W_R(c, 1), UINT64_C(3));
  /* cf4a4: cset w8, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? 1 : 0));
  /* cf4a8: lsl w0, w8, #2 */
  ARC_W_W(c, 0, ((uint32_t)(ARC_W_R(c, 8)) << ((UINT64_C(2)) & 31)));
  /* cf4ac: ret  */
  return;
}

void fn2_d0db4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076711348));
  /* d0db4: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* d0db8: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* d0dbc: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* d0dc0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* d0dc4: bl #0x1bcc90 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(855496));
  fn2_1bcc90(c);
  /* d0dc8: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* d0dcc: cmp w0, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(2));
  /* d0dd0: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
  /* d0dd4: b.le #0xd0e20 */
  if (ARC_COND(c, 13)) goto L_d0e20;
  /* d0dd8: cmp w8, #3 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(3));
  /* d0ddc: b.eq #0xd0e40 */
  if (ARC_COND(c, 0)) goto L_d0e40;
  /* d0de0: cmp w8, #4 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(4));
  /* d0de4: b.eq #0xd0df0 */
  if (ARC_COND(c, 0)) goto L_d0df0;
  /* d0de8: cmp w8, #0x15 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(21));
  /* d0dec: b.ne #0xd0e14 */
  if (ARC_COND(c, 1)) goto L_d0e14;
L_d0df0:;
  /* d0df0: add x8, x29, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* d0df4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* d0df8: bl #0x1bda2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(855548));
  fn2_1bda2c(c);
  /* d0dfc: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* d0e00: bl #0x1cecf0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(855556));
  fn2_1cecf0(c);
  /* d0e04: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* d0e08: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* d0e0c: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(855568));
  fn2_1ccd9c(c);
  /* d0e10: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
L_d0e14:;
  /* d0e14: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* d0e18: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* d0e1c: ret  */
  return;
L_d0e20:;
  /* d0e20: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* d0e24: b.eq #0xd0e58 */
  if (ARC_COND(c, 0)) goto L_d0e58;
  /* d0e28: cmp w8, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(2));
  /* d0e2c: b.ne #0xd0e14 */
  if (ARC_COND(c, 1)) goto L_d0e14;
  /* d0e30: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* d0e34: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* d0e38: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* d0e3c: b #0x1bc668 */
  fn2_1bc668(c); return;
L_d0e40:;
  /* d0e40: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* d0e44: bl #0x1bc7e8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(855624));
  fn2_1bc7e8(c);
  /* d0e48: fcvtzs x0, d0 */
  ARC_X_W(c, 0, arc_f2i64((double)(ARC_D_R(c, 0))));
  /* d0e4c: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* d0e50: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* d0e54: ret  */
  return;
L_d0e58:;
  /* d0e58: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* d0e5c: bl #0x1bc630 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(855648));
  fn2_1bc630(c);
  /* d0e60: and x0, x0, #1 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) & UINT64_C(1)));
  /* d0e64: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* d0e68: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* d0e6c: ret  */
  return;
}

void fn2_d6264(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076733028));
  /* d6264: sub sp, sp, #0xb0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(176)));
  /* d6268: stp x29, x30, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* d626c: stp x24, x23, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* d6270: stp x22, x21, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* d6274: stp x20, x19, [sp, #0xa0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(160));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* d6278: add x29, sp, #0x70 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(112)));
  /* d627c: mov w21, w3 */
  ARC_W_W(c, 21, ARC_W_R(c, 3));
  /* d6280: mov x19, x2 */
  ARC_X_W(c, 19, ARC_X_R(c, 2));
  /* d6284: mov x22, x1 */
  ARC_X_W(c, 22, ARC_X_R(c, 1));
  /* d6288: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* d628c: bl #0xd57f4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(877200));
  fn2_d57f4(c);
  /* d6290: tbnz x0, #0x3f, #0xd63c0 */
  if (((ARC_X_R(c, 0)) >> 63 & 1) != 0) goto L_d63c0;
  /* d6294: tbz w21, #0, #0xd63c0 */
  if (((ARC_W_R(c, 21)) >> 0 & 1) == 0) goto L_d63c0;
  /* d6298: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* d629c: adrp x1, #0x23000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(143360)));
  /* d62a0: add x1, x1, #0xbf8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3064)));
  /* d62a4: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* d62a8: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(877228));
  fn2_1b7d24(c);
  /* d62ac: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* d62b0: add x1, sp, #0x28 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(40)));
  /* d62b4: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(877240));
  fn2_1bc2f8(c);
  /* d62b8: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* d62bc: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(877248));
  fn2_1ccd9c(c);
  /* d62c0: sub x1, x29, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* d62c4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* d62c8: bl #0x1bbf90 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(877260));
  fn2_1bbf90(c);
  /* d62cc: bl #0xd0db4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(877264));
  fn2_d0db4(c);
  /* d62d0: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* d62d4: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* d62d8: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(877276));
  fn2_1bc620(c);
  /* d62dc: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* d62e0: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* d62e4: bl #0x1bc290 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(877288));
  fn2_1bc290(c);
  /* d62e8: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* d62ec: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* d62f0: bl #0x1bc290 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(877300));
  fn2_1bc290(c);
  /* d62f4: sub x8, x29, #0x30 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* d62f8: add x0, x20, #0x40 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(64)));
  /* d62fc: add x1, sp, #0x28 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(40)));
  /* d6300: mov x2, sp */
  ARC_X_W(c, 2, (c)->sp);
  /* d6304: bl #0x1d9c5c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(877320));
  fn2_1d9c5c(c);
  /* d6308: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* d630c: bl #0xd0db4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(877328));
  fn2_d0db4(c);
  /* d6310: mov x24, x0 */
  ARC_X_W(c, 24, ARC_X_R(c, 0));
  /* d6314: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* d6318: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(877340));
  fn2_1bc620(c);
  /* d631c: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* d6320: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(877348));
  fn2_1bc620(c);
  /* d6324: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* d6328: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(877356));
  fn2_1bc620(c);
  /* d632c: cmp x23, x24 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 24));
  /* d6330: b.le #0xd6480 */
  if (ARC_COND(c, 13)) goto L_d6480;
  /* d6334: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* d6338: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* d633c: bl #0x1bc290 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(877376));
  fn2_1bc290(c);
  /* d6340: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* d6344: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* d6348: bl #0x1bc290 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(877388));
  fn2_1bc290(c);
  /* d634c: add x0, x20, #0x40 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(64)));
  /* d6350: add x1, sp, #0x28 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(40)));
  /* d6354: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(877400));
  fn2_1bbfa0(c);
  /* d6358: sub x1, x29, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* d635c: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(877408));
  fn2_1bcf04(c);
  /* d6360: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* d6364: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(877416));
  fn2_1bc620(c);
  /* d6368: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* d636c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(877424));
  fn2_1bc620(c);
  /* d6370: adrp x1, #0x2c000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(180224)));
  /* d6374: add x1, x1, #0x1db */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(475)));
  /* d6378: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* d637c: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(877440));
  fn2_1b7d24(c);
  /* d6380: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* d6384: add x1, sp, #0x28 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(40)));
  /* d6388: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(877452));
  fn2_1bc2f8(c);
  /* d638c: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* d6390: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(877460));
  fn2_1ccd9c(c);
  /* d6394: sub x1, x29, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* d6398: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* d639c: bl #0x1bbf90 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(877472));
  fn2_1bbf90(c);
  /* d63a0: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* d63a4: bl #0x1bcc90 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(877480));
  fn2_1bcc90(c);
  /* d63a8: cmp w0, #4 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(4));
  /* d63ac: b.ne #0xd6498 */
  if (ARC_COND(c, 1)) goto L_d6498;
  /* d63b0: mov x8, sp */
  ARC_X_W(c, 8, (c)->sp);
  /* d63b4: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* d63b8: bl #0x1bc84c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(877500));
  fn2_1bc84c(c);
  /* d63bc: b #0xd64d4 */
  goto L_d64d4;
L_d63c0:;
  /* d63c0: adrp x1, #0x29000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(167936)));
  /* d63c4: add x1, x1, #0x287 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(647)));
  /* d63c8: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* d63cc: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(877520));
  fn2_1b7d24(c);
  /* d63d0: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* d63d4: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* d63d8: sub x19, x29, #0x30 */
  ARC_X_W(c, 19, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* d63dc: bl #0x1bc290 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(877536));
  fn2_1bc290(c);
  /* d63e0: add x0, x19, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(24)));
  /* d63e4: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(877544));
  fn2_1bc084(c);
  /* d63e8: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* d63ec: bl #0x1db4a4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(877552));
  fn2_1db4a4(c);
  /* d63f0: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* d63f4: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* d63f8: bl #0x1db9f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(877564));
  fn2_1db9f0(c);
  /* d63fc: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* d6400: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* d6404: bl #0x1bbf48 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(877576));
  fn2_1bbf48(c);
  /* d6408: sub x1, x29, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* d640c: bl #0x1bce10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(877584));
  fn2_1bce10(c);
  /* d6410: add x8, sp, #0x20 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(32)));
  /* d6414: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* d6418: add x1, sp, #0x28 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(40)));
  /* d641c: bl #0x1d0298 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(877600));
  fn2_1d0298(c);
  /* d6420: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* d6424: bl #0x1db788 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(877608));
  fn2_1db788(c);
  /* d6428: add x0, x19, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(24)));
  /* d642c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(877616));
  fn2_1bc620(c);
  /* d6430: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* d6434: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(877624));
  fn2_1bc620(c);
  /* d6438: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* d643c: add x1, sp, #0x20 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(32)));
  /* d6440: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(877636));
  fn2_1bc2f8(c);
  /* d6444: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* d6448: add x1, sp, #0x28 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(40)));
  /* d644c: bl #0x1bc0b8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(877648));
  fn2_1bc0b8(c);
  /* d6450: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* d6454: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* d6458: str x19, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 19));
  /* d645c: bl #0x24a164 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(877664));
  fn2_24a164(c);
  /* d6460: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* d6464: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(877672));
  fn2_1bc620(c);
  /* d6468: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* d646c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(877680));
  fn2_1bc620(c);
  /* d6470: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* d6474: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(877688));
  fn2_1ccd9c(c);
  /* d6478: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* d647c: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(877696));
  fn2_1ccd9c(c);
L_d6480:;
  /* d6480: ldp x20, x19, [sp, #0xa0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(160));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* d6484: ldp x22, x21, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* d6488: ldp x24, x23, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* d648c: ldp x29, x30, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* d6490: add sp, sp, #0xb0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(176)));
  /* d6494: ret  */
  return;
L_d6498:;
  /* d6498: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* d649c: bl #0x1bcc90 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(877728));
  fn2_1bcc90(c);
  /* d64a0: cmp w0, #0x15 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(21));
  /* d64a4: b.ne #0xd64cc */
  if (ARC_COND(c, 1)) goto L_d64cc;
  /* d64a8: add x8, sp, #0x28 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(40)));
  /* d64ac: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* d64b0: bl #0x1bcb98 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(877748));
  fn2_1bcb98(c);
  /* d64b4: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* d64b8: add x1, sp, #0x28 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(40)));
  /* d64bc: bl #0x1cccb8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(877760));
  fn2_1cccb8(c);
  /* d64c0: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* d64c4: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(877768));
  fn2_1d2d24(c);
  /* d64c8: b #0xd64d4 */
  goto L_d64d4;
L_d64cc:;
  /* d64cc: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* d64d0: bl #0x1ccc74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(877780));
  fn2_1ccc74(c);
L_d64d4:;
  /* d64d4: mov x2, sp */
  ARC_X_W(c, 2, (c)->sp);
  /* d64d8: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* d64dc: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* d64e0: mov x3, x19 */
  ARC_X_W(c, 3, ARC_X_R(c, 19));
  /* d64e4: bl #0xd5990 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(877800));
  fn2_d5990(c);
  /* d64e8: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* d64ec: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(877808));
  fn2_1ccd9c(c);
  /* d64f0: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* d64f4: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(877816));
  fn2_1bc620(c);
  /* d64f8: ldp x20, x19, [sp, #0xa0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(160));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* d64fc: ldp x22, x21, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* d6500: ldp x24, x23, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* d6504: ldp x29, x30, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* d6508: add sp, sp, #0xb0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(176)));
  /* d650c: ret  */
  return;
}

void fn2_db678(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076754552));
  /* db678: ldr x9, [x0] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 0)));
  /* db67c: cbz x9, #0xdb6b4 */
  if ((ARC_X_R(c, 9)) == 0) goto L_db6b4;
  /* db680: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* db684: stp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* db688: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* db68c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* db690: sub x9, x9, #0x10 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - UINT64_C(16)));
  /* db694: mov x8, x0 */
  ARC_X_W(c, 8, ARC_X_R(c, 0));
  /* db698: ldar x0, [x9] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 9)));
  /* db69c: cmp x0, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 0), UINT64_C(2));
  /* db6a0: b.hs #0xdb6bc */
  if (ARC_COND(c, 2)) goto L_db6bc;
  /* db6a4: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* db6a8: ldp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* db6ac: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* db6b0: ret  */
  return;
L_db6b4:;
  /* db6b4: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
  /* db6b8: ret  */
  return;
L_db6bc:;
  /* db6bc: mov x20, x8 */
  ARC_X_W(c, 20, ARC_X_R(c, 8));
  /* db6c0: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* db6c4: ldur x19, [x8, #-8] */
  ARC_X_W(c, 19, arc_ld64((ARC_X_R(c, 8) + INT64_C(-8))));
  /* db6c8: add x8, x19, x19, lsl #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ((uint64_t)(ARC_X_R(c, 19)) << 1)));
  /* db6cc: lsl x8, x8, #5 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) << ((UINT64_C(5)) & 63)));
  /* db6d0: cbz x8, #0xdb6f8 */
  if ((ARC_X_R(c, 8)) == 0) goto L_db6f8;
  /* db6d4: sub x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) - UINT64_C(1)));
  /* db6d8: orr x8, x8, x8, lsr #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) | ((uint64_t)(ARC_X_R(c, 8)) >> 1)));
  /* db6dc: orr x8, x8, x8, lsr #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) | ((uint64_t)(ARC_X_R(c, 8)) >> 2)));
  /* db6e0: orr x8, x8, x8, lsr #4 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) | ((uint64_t)(ARC_X_R(c, 8)) >> 4)));
  /* db6e4: orr x8, x8, x8, lsr #8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) | ((uint64_t)(ARC_X_R(c, 8)) >> 8)));
  /* db6e8: orr x8, x8, x8, lsr #16 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) | ((uint64_t)(ARC_X_R(c, 8)) >> 16)));
  /* db6ec: orr x8, x8, x8, lsr #32 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) | ((uint64_t)(ARC_X_R(c, 8)) >> 32)));
  /* db6f0: add x0, x8, #0x11 */
  ARC_X_W(c, 0, (ARC_X_R(c, 8) + UINT64_C(17)));
  /* db6f4: b #0xdb6fc */
  goto L_db6fc;
L_db6f8:;
  /* db6f8: mov w0, #0x10 */
  ARC_W_W(c, 0, UINT64_C(16));
L_db6fc:;
  /* db6fc: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* db700: bl #0x1b5b60 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(898820));
  fn2_1b5b60(c);
  /* db704: cbz x0, #0xdb768 */
  if ((ARC_X_R(c, 0)) == 0) goto L_db768;
  /* db708: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* db70c: add x21, x0, #0x10 */
  ARC_X_W(c, 21, (ARC_X_R(c, 0) + UINT64_C(16)));
  /* db710: stlr x8, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* db714: mov x8, x20 */
  ARC_X_W(c, 8, ARC_X_R(c, 20));
  /* db718: str x19, [x0, #8] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(8)), ARC_X_R(c, 19));
  /* db71c: cbz x19, #0xdb744 */
  if ((ARC_X_R(c, 19)) == 0) goto L_db744;
  /* db720: mov x22, xzr */
  ARC_X_W(c, 22, ARC_X_R(c, 31));
L_db724:;
  /* db724: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* db728: add x0, x21, x22 */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) + ARC_X_R(c, 22)));
  /* db72c: add x1, x8, x22 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) + ARC_X_R(c, 22)));
  /* db730: bl #0xdab1c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(898868));
  fn2_dab1c(c);
  /* db734: mov x8, x20 */
  ARC_X_W(c, 8, ARC_X_R(c, 20));
  /* db738: subs x19, x19, #1 */
  ARC_X_W(c, 19, arc_sub64(c, ARC_X_R(c, 19), UINT64_C(1)));
  /* db73c: add x22, x22, #0x60 */
  ARC_X_W(c, 22, (ARC_X_R(c, 22) + UINT64_C(96)));
  /* db740: b.ne #0xdb724 */
  if (ARC_COND(c, 1)) goto L_db724;
L_db744:;
  /* db744: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* db748: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* db74c: bl #0xdb254 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(898896));
  fn2_db254(c);
  /* db750: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* db754: str x21, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 21));
  /* db758: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* db75c: ldp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* db760: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* db764: ret  */
  return;
L_db768:;
  /* db768: adrp x0, #0x1b000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(110592)));
  /* db76c: add x0, x0, #0x4ba */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1210)));
  /* db770: adrp x1, #0x1b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(110592)));
  /* db774: add x1, x1, #0x446 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1094)));
  /* db778: adrp x3, #0x2e000 */
  ARC_X_W(c, 3, (arc_image_bases[2] + UINT64_C(188416)));
  /* db77c: add x3, x3, #0xca8 */
  ARC_X_W(c, 3, (ARC_X_R(c, 3) + UINT64_C(3240)));
  /* db780: mov w2, #0x140 */
  ARC_W_W(c, 2, UINT64_C(320));
  /* db784: mov w4, wzr */
  ARC_W_W(c, 4, ARC_W_R(c, 31));
  /* db788: mov w5, wzr */
  ARC_W_W(c, 5, ARC_W_R(c, 31));
  /* db78c: bl #0x1b54b0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(898960));
  fn2_1b54b0(c);
  /* db790: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
  /* db794: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* db798: ldp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* db79c: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* db7a0: ret  */
  return;
}

void fn2_dcc68(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076760168));
  /* dcc68: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* dcc6c: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* dcc70: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* dcc74: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* dcc78: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* dcc7c: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* dcc80: add x1, x1, #0xb6f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2927)));
  /* dcc84: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* dcc88: mov w0, #0x70 */
  ARC_W_W(c, 0, UINT64_C(112));
  /* dcc8c: mov x2, x1 */
  ARC_X_W(c, 2, ARC_X_R(c, 1));
  /* dcc90: bl #0x1b5d1c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(904340));
  fn2_1b5d1c(c);
  /* dcc94: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* dcc98: mov w9, #1 */
  ARC_W_W(c, 9, UINT64_C(1));
  /* dcc9c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* dcca0: ldr x8, [x8, #0x40] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(64))));
  /* dcca4: str w9, [x0, #8] */
  arc_st32((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 9));
  /* dcca8: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* dccac: str x8, [x0], #0xc */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(12));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* dccb0: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(904372));
  fn2_1d2c2c(c);
  /* dccb4: add x0, x19, #0x14 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(20)));
  /* dccb8: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(904380));
  fn2_1d2c2c(c);
  /* dccbc: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* dccc0: adrp x8, #0x251000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2428928)));
  /* dccc4: add x8, x8, #0xe08 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3592)));
  /* dccc8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* dcccc: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* dccd0: stur xzr, [x19, #0x1c] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(28)), ARC_X_R(c, 31));
  /* dccd4: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* dccd8: stp xzr, x21, [x19, #0x58] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(88));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* dccdc: stur q0, [x19, #0x28] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(40)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(40)) + 8, (c)->q[0].u64[1]);
  /* dcce0: stur q0, [x19, #0x38] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(56)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(56)) + 8, (c)->q[0].u64[1]);
  /* dcce4: stur q0, [x19, #0x48] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(72)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(72)) + 8, (c)->q[0].u64[1]);
  /* dcce8: str x20, [x19, #0x68] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(104)), ARC_X_R(c, 20));
  /* dccec: bl #0x1b5e68 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(904432));
  fn2_1b5e68(c);
  /* dccf0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* dccf4: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* dccf8: str wzr, [x19, #0x1c] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(28)), ARC_W_R(c, 31));
  /* dccfc: bl #0x1b5d9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(904448));
  fn2_1b5d9c(c);
  /* dcd00: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* dcd04: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* dcd08: bl #0x1b5d8c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(904460));
  fn2_1b5d8c(c);
  /* dcd0c: adrp x8, #0x25d000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2478080)));
  /* dcd10: add x8, x8, #0x88 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(136)));
  /* dcd14: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* dcd18: tbz w8, #0, #0xdcd54 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_dcd54;
L_dcd1c:;
  /* dcd1c: adrp x1, #0x25d000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(2478080)));
  /* dcd20: add x1, x1, #0x80 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(128)));
  /* dcd24: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* dcd28: bl #0x1d2c40 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(904492));
  fn2_1d2c40(c);
  /* dcd2c: add x0, x19, #0x14 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(20)));
  /* dcd30: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* dcd34: bl #0x1d5dc0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(904504));
  fn2_1d5dc0(c);
  /* dcd38: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* dcd3c: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(904512));
  fn2_1d2d24(c);
  /* dcd40: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* dcd44: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* dcd48: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* dcd4c: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* dcd50: ret  */
  return;
L_dcd54:;
  /* dcd54: adrp x0, #0x25d000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478080)));
  /* dcd58: add x0, x0, #0x88 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(136)));
  /* dcd5c: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(904544));
  fn2_24b710(c);
  /* dcd60: cbz w0, #0xdcd1c */
  if ((ARC_W_R(c, 0)) == 0) goto L_dcd1c;
  /* dcd64: adrp x20, #0x25d000 */
  ARC_X_W(c, 20, (arc_image_bases[2] + UINT64_C(2478080)));
  /* dcd68: add x20, x20, #0x80 */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) + UINT64_C(128)));
  /* dcd6c: nop  */
  /* nop: no architectural effect here */
  /* dcd70: adr x1, #0x36644 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(222788)));
  /* dcd74: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* dcd78: bl #0x1b907c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(904572));
  fn2_1b907c(c);
  /* dcd7c: adrp x0, #0x257000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2453504)));
  /* dcd80: adrp x2, #0x24f000 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(2420736)));
  /* dcd84: add x2, x2, #0x980 */
  ARC_X_W(c, 2, (ARC_X_R(c, 2) + UINT64_C(2432)));
  /* dcd88: ldr x0, [x0, #0xf88] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(3976))));
  /* dcd8c: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* dcd90: bl #0x24b6f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(904596));
  fn2_24b6f0(c);
  /* dcd94: adrp x0, #0x25d000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478080)));
  /* dcd98: add x0, x0, #0x88 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(136)));
  /* dcd9c: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(904608));
  fn2_24b720(c);
  /* dcda0: b #0xdcd1c */
  goto L_dcd1c;
}

void fn2_ddf6c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076765036));
  /* ddf6c: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* ddf70: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* ddf74: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* ddf78: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* ddf7c: bl #0x1b6040 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(909184));
  fn2_1b6040(c);
  /* ddf80: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ddf84: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* ddf88: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ddf8c: b #0x24b730 */
  fn2_24b730(c); return;
}

void fn2_df3fc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076770300));
  /* df3fc: mov x8, x1 */
  ARC_X_W(c, 8, ARC_X_R(c, 1));
  /* df400: ldp x1, x9, [x0, #0x60] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(96));
    ARC_X_W(c, 1, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* df404: mov x3, x2 */
  ARC_X_W(c, 3, ARC_X_R(c, 2));
  /* df408: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* df40c: mov x2, x9 */
  ARC_X_W(c, 2, ARC_X_R(c, 9));
  /* df410: b #0xdf758 */
  fn2_df758(c); return;
}

void fn2_e2ef4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076785396));
  /* e2ef4: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e2ef8: stp x24, x23, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* e2efc: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* e2f00: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* e2f04: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* e2f08: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* e2f0c: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* e2f10: mov x19, x4 */
  ARC_X_W(c, 19, ARC_X_R(c, 4));
  /* e2f14: mov x20, x3 */
  ARC_X_W(c, 20, ARC_X_R(c, 3));
  /* e2f18: mov x21, x2 */
  ARC_X_W(c, 21, ARC_X_R(c, 2));
  /* e2f1c: mov x22, x1 */
  ARC_X_W(c, 22, ARC_X_R(c, 1));
  /* e2f20: mov x24, x8 */
  ARC_X_W(c, 24, ARC_X_R(c, 8));
  /* e2f24: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(929576));
  fn2_1bc084(c);
  /* e2f28: ldp x1, x2, [x23, #0x60] */
  { const uint64_t _pa = (ARC_X_R(c, 23) + INT64_C(96));
    ARC_X_W(c, 1, arc_ld64(_pa));
    ARC_X_W(c, 2, arc_ld64(_pa + 8));
  }
  /* e2f2c: add x7, x23, #0x48 */
  ARC_X_W(c, 7, (ARC_X_R(c, 23) + UINT64_C(72)));
  /* e2f30: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* e2f34: mov x3, x21 */
  ARC_X_W(c, 3, ARC_X_R(c, 21));
  /* e2f38: mov w4, w20 */
  ARC_W_W(c, 4, ARC_W_R(c, 20));
  /* e2f3c: mov x5, x24 */
  ARC_X_W(c, 5, ARC_X_R(c, 24));
  /* e2f40: mov x6, x19 */
  ARC_X_W(c, 6, ARC_X_R(c, 19));
  /* e2f44: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* e2f48: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* e2f4c: ldp x24, x23, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* e2f50: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e2f54: b #0xe2f98 */
  fn2_e2f98(c); return;
}

void fn2_e6300(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076798720));
  /* e6300: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e6304: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* e6308: adrp x8, #0x25d000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2478080)));
  /* e630c: add x8, x8, #0xa8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(168)));
  /* e6310: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* e6314: tbnz w8, #0, #0xe6344 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_e6344;
  /* e6318: adrp x0, #0x25d000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478080)));
  /* e631c: add x0, x0, #0xa8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(168)));
  /* e6320: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(942884));
  fn2_24b710(c);
  /* e6324: cbz w0, #0xe6344 */
  if ((ARC_W_R(c, 0)) == 0) goto L_e6344;
  /* e6328: nop  */
  /* nop: no architectural effect here */
  /* e632c: adr x0, #0xe6850 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(944208)));
  /* e6330: bl #0x1aff64 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(942900));
  fn2_1aff64(c);
  /* e6334: adrp x0, #0x25d000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478080)));
  /* e6338: add x0, x0, #0xa8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(168)));
  /* e633c: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e6340: b #0x24b720 */
  fn2_24b720(c); return;
L_e6344:;
  /* e6344: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e6348: ret  */
  return;
}

void fn2_e6fe4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076802020));
  /* e6fe4: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* e6fe8: ret  */
  return;
}

void fn2_e803c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076806204));
  /* e803c: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* e8040: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e8044: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* e8048: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* e804c: cmp w1, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 1), UINT64_C(1));
  /* e8050: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* e8054: b.hi #0xe80b8 */
  if (ARC_COND(c, 8)) goto L_e80b8;
  /* e8058: add x0, x19, #4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(4)));
  /* e805c: mov w20, w1 */
  ARC_W_W(c, 20, ARC_W_R(c, 1));
  /* e8060: str wzr, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 31));
  /* e8064: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(950376));
  fn2_1d2c2c(c);
  /* e8068: add x0, x19, #0xc */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(12)));
  /* e806c: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(950384));
  fn2_1d2c2c(c);
  /* e8070: add x0, x19, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(24)));
  /* e8074: str wzr, [x19, #0x14] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(20)), ARC_W_R(c, 31));
  /* e8078: bl #0x1ccc74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(950396));
  fn2_1ccc74(c);
  /* e807c: mov w8, #6 */
  ARC_W_W(c, 8, UINT64_C(6));
  /* e8080: sub x1, x29, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* e8084: mov w0, w20 */
  ARC_W_W(c, 0, ARC_W_R(c, 20));
  /* e8088: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* e808c: str w8, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 8));
  /* e8090: stur wzr, [x29, #-8] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-8)), ARC_W_R(c, 31));
  /* e8094: bl #0xb2de4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(950424));
  fn2_b2de4(c);
  /* e8098: sub x1, x29, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* e809c: mov w0, w20 */
  ARC_W_W(c, 0, ARC_W_R(c, 20));
  /* e80a0: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* e80a4: bl #0xde9a0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(950440));
  fn2_de9a0(c);
  /* e80a8: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* e80ac: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e80b0: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* e80b4: ret  */
  return;
L_e80b8:;
  /* e80b8: adrp x20, #0x1e000 */
  ARC_X_W(c, 20, (arc_image_bases[2] + UINT64_C(122880)));
  /* e80bc: add x20, x20, #0xb6f */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) + UINT64_C(2927)));
  /* e80c0: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* e80c4: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* e80c8: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* e80cc: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(950480));
  fn2_1b8fd4(c);
  /* e80d0: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* e80d4: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* e80d8: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(950492));
  fn2_1b7d24(c);
  /* e80dc: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* e80e0: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* e80e4: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* e80e8: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(950508));
  fn2_1b8fd4(c);
  /* e80ec: add x0, x19, #4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(4)));
  /* e80f0: str wzr, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 31));
  /* e80f4: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(950520));
  fn2_1d2c2c(c);
  /* e80f8: add x0, x19, #0xc */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(12)));
  /* e80fc: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(950528));
  fn2_1d2c2c(c);
  /* e8100: add x0, x19, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(24)));
  /* e8104: str wzr, [x19, #0x14] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(20)), ARC_W_R(c, 31));
  /* e8108: bl #0x1ccc74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(950540));
  fn2_1ccc74(c);
  /* e810c: mov w20, #6 */
  ARC_W_W(c, 20, UINT64_C(6));
  /* e8110: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* e8114: add x0, x19, #4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(4)));
  /* e8118: sub x1, x29, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* e811c: str w20, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 20));
  /* e8120: str w8, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 8));
  /* e8124: bl #0x1d5dc0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(950568));
  fn2_1d5dc0(c);
  /* e8128: add x0, x19, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(24)));
  /* e812c: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* e8130: str wzr, [x19, #0x14] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(20)), ARC_W_R(c, 31));
  /* e8134: bl #0x1d06b8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(950584));
  fn2_1d06b8(c);
  /* e8138: add x0, x19, #0xc */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(12)));
  /* e813c: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* e8140: str w20, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 20));
  /* e8144: bl #0x1d5dc0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(950600));
  fn2_1d5dc0(c);
  /* e8148: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* e814c: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(950608));
  fn2_1d2d24(c);
  /* e8150: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* e8154: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(950616));
  fn2_1ccd9c(c);
  /* e8158: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* e815c: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(950624));
  fn2_1d2d24(c);
  /* e8160: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* e8164: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e8168: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* e816c: ret  */
  return;
}

void fn2_eaf18(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076818200));
  /* eaf18: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* eaf1c: stp x24, x23, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* eaf20: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* eaf24: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* eaf28: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* eaf2c: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* eaf30: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* eaf34: mov x19, x4 */
  ARC_X_W(c, 19, ARC_X_R(c, 4));
  /* eaf38: mov x20, x3 */
  ARC_X_W(c, 20, ARC_X_R(c, 3));
  /* eaf3c: mov x21, x2 */
  ARC_X_W(c, 21, ARC_X_R(c, 2));
  /* eaf40: mov x22, x1 */
  ARC_X_W(c, 22, ARC_X_R(c, 1));
  /* eaf44: mov x24, x8 */
  ARC_X_W(c, 24, ARC_X_R(c, 8));
  /* eaf48: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(962380));
  fn2_1bc084(c);
  /* eaf4c: ldp x1, x2, [x23, #0x60] */
  { const uint64_t _pa = (ARC_X_R(c, 23) + INT64_C(96));
    ARC_X_W(c, 1, arc_ld64(_pa));
    ARC_X_W(c, 2, arc_ld64(_pa + 8));
  }
  /* eaf50: add x7, x23, #0x48 */
  ARC_X_W(c, 7, (ARC_X_R(c, 23) + UINT64_C(72)));
  /* eaf54: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* eaf58: mov x3, x21 */
  ARC_X_W(c, 3, ARC_X_R(c, 21));
  /* eaf5c: mov w4, w20 */
  ARC_W_W(c, 4, ARC_W_R(c, 20));
  /* eaf60: mov x5, x24 */
  ARC_X_W(c, 5, ARC_X_R(c, 24));
  /* eaf64: mov x6, x19 */
  ARC_X_W(c, 6, ARC_X_R(c, 19));
  /* eaf68: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* eaf6c: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* eaf70: ldp x24, x23, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* eaf74: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* eaf78: b #0xeb018 */
  fn2_eb018(c); return;
}

void fn2_ed3c0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076827584));
  /* ed3c0: sub sp, sp, #0x90 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(144)));
  /* ed3c4: stp x29, x30, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* ed3c8: stp x20, x19, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* ed3cc: add x29, sp, #0x70 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(112)));
  /* ed3d0: adrp x1, #0x19000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(102400)));
  /* ed3d4: add x1, x1, #0xd98 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3480)));
  /* ed3d8: sub x0, x29, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* ed3dc: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* ed3e0: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(971748));
  fn2_1b7d24(c);
  /* ed3e4: sub x0, x29, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* ed3e8: bl #0x20bf64 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(971756));
  fn2_20bf64(c);
  /* ed3ec: mov w20, w0 */
  ARC_W_W(c, 20, ARC_W_R(c, 0));
  /* ed3f0: sub x0, x29, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* ed3f4: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(971768));
  fn2_1ccd9c(c);
  /* ed3f8: tbz w20, #0, #0xed564 */
  if (((ARC_W_R(c, 20)) >> 0 & 1) == 0) goto L_ed564;
  /* ed3fc: adrp x1, #0x19000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(102400)));
  /* ed400: add x1, x1, #0xd98 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3480)));
  /* ed404: sub x0, x29, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* ed408: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(971788));
  fn2_1b7d24(c);
  /* ed40c: sub x8, x29, #8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* ed410: sub x0, x29, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* ed414: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* ed418: bl #0x208c38 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(971804));
  fn2_208c38(c);
  /* ed41c: sub x0, x29, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* ed420: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(971812));
  fn2_1ccd9c(c);
  /* ed424: ldur x0, [x29, #-8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-8))));
  /* ed428: cbz x0, #0xed57c */
  if ((ARC_X_R(c, 0)) == 0) goto L_ed57c;
  /* ed42c: sub x8, x29, #0x20 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* ed430: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* ed434: bl #0x20ae10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(971832));
  fn2_20ae10(c);
  /* ed438: ldur x0, [x29, #-8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-8))));
  /* ed43c: bl #0x20be8c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(971840));
  fn2_20be8c(c);
  /* ed440: sub x0, x29, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* ed444: bl #0x1bcc90 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(971848));
  fn2_1bcc90(c);
  /* ed448: cmp w0, #0x1b */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(27));
  /* ed44c: b.ne #0xed53c */
  if (ARC_COND(c, 1)) goto L_ed53c;
  /* ed450: mov x8, sp */
  ARC_X_W(c, 8, (c)->sp);
  /* ed454: sub x0, x29, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* ed458: bl #0x1bccb8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(971868));
  fn2_1bccb8(c);
  /* ed45c: adrp x1, #0x2e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(188416)));
  /* ed460: add x1, x1, #0xcc5 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3269)));
  /* ed464: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* ed468: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(971884));
  fn2_1b7d24(c);
  /* ed46c: add x0, sp, #0x38 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(56)));
  /* ed470: add x1, sp, #0x18 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(24)));
  /* ed474: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(971896));
  fn2_1bc2f8(c);
  /* ed478: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* ed47c: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(971904));
  fn2_1ccd9c(c);
  /* ed480: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* ed484: add x1, sp, #0x38 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(56)));
  /* ed488: bl #0x1d998c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(971916));
  fn2_1d998c(c);
  /* ed48c: mov w20, w0 */
  ARC_W_W(c, 20, ARC_W_R(c, 0));
  /* ed490: add x0, sp, #0x38 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(56)));
  /* ed494: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(971928));
  fn2_1bc620(c);
  /* ed498: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* ed49c: bl #0x1d97fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(971936));
  fn2_1d97fc(c);
  /* ed4a0: tbz w20, #0, #0xed53c */
  if (((ARC_W_R(c, 20)) >> 0 & 1) == 0) goto L_ed53c;
  /* ed4a4: bl #0x22eb3c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(971944));
  fn2_22eb3c(c);
  /* ed4a8: bl #0x2301f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(971948));
  fn2_2301f8(c);
  /* ed4ac: add x8, sp, #0x30 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(48)));
  /* ed4b0: sub x0, x29, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* ed4b4: fcvtzs x20, d0 */
  ARC_X_W(c, 20, arc_f2i64((double)(ARC_D_R(c, 0))));
  /* ed4b8: bl #0x1bccb8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(971964));
  fn2_1bccb8(c);
  /* ed4bc: adrp x1, #0x30000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(196608)));
  /* ed4c0: add x1, x1, #0x1f0 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(496)));
  /* ed4c4: add x0, sp, #0x38 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(56)));
  /* ed4c8: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(971980));
  fn2_1b7d24(c);
  /* ed4cc: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* ed4d0: add x1, sp, #0x38 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(56)));
  /* ed4d4: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(971992));
  fn2_1bc2f8(c);
  /* ed4d8: add x0, sp, #0x38 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(56)));
  /* ed4dc: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(972000));
  fn2_1ccd9c(c);
  /* ed4e0: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* ed4e4: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* ed4e8: bl #0x1bc290 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(972012));
  fn2_1bc290(c);
  /* ed4ec: add x8, sp, #0x38 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(56)));
  /* ed4f0: add x0, sp, #0x30 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(48)));
  /* ed4f4: add x1, sp, #0x18 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(24)));
  /* ed4f8: mov x2, sp */
  ARC_X_W(c, 2, (c)->sp);
  /* ed4fc: bl #0x1d9c5c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(972032));
  fn2_1d9c5c(c);
  /* ed500: add x0, sp, #0x38 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(56)));
  /* ed504: bl #0x1bc668 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(972040));
  fn2_1bc668(c);
  /* ed508: sub x20, x20, x0 */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) - ARC_X_R(c, 0)));
  /* ed50c: add x0, sp, #0x38 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(56)));
  /* ed510: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(972052));
  fn2_1bc620(c);
  /* ed514: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* ed518: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(972060));
  fn2_1bc620(c);
  /* ed51c: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* ed520: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(972068));
  fn2_1bc620(c);
  /* ed524: add x0, sp, #0x30 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(48)));
  /* ed528: bl #0x1d97fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(972076));
  fn2_1d97fc(c);
  /* ed52c: mov w8, #0xf481 */
  ARC_W_W(c, 8, UINT64_C(62593));
  /* ed530: movk w8, #3, lsl #16 */
  ARC_W_W(c, 8, ((ARC_W_R(c, 8) & UINT64_C(18446744069414649855)) | UINT64_C(196608)));
  /* ed534: cmp x20, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 8));
  /* ed538: b.lt #0xed5bc */
  if (ARC_COND(c, 11)) goto L_ed5bc;
L_ed53c:;
  /* ed53c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ed540: bl #0x1d9740 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(972100));
  fn2_1d9740(c);
  /* ed544: sub x0, x29, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* ed548: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(972108));
  fn2_1bc620(c);
  /* ed54c: ldur x0, [x29, #-8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-8))));
  /* ed550: cbnz x0, #0xed58c */
  if ((ARC_X_R(c, 0)) != 0) goto L_ed58c;
L_ed554:;
  /* ed554: ldp x20, x19, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* ed558: ldp x29, x30, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ed55c: add sp, sp, #0x90 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(144)));
  /* ed560: ret  */
  return;
L_ed564:;
  /* ed564: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ed568: bl #0x1d9740 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(972140));
  fn2_1d9740(c);
  /* ed56c: ldp x20, x19, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* ed570: ldp x29, x30, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ed574: add sp, sp, #0x90 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(144)));
  /* ed578: ret  */
  return;
L_ed57c:;
  /* ed57c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ed580: bl #0x1d9740 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(972164));
  fn2_1d9740(c);
  /* ed584: ldur x0, [x29, #-8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-8))));
  /* ed588: cbz x0, #0xed554 */
  if ((ARC_X_R(c, 0)) == 0) goto L_ed554;
L_ed58c:;
  /* ed58c: bl #0x225abc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(972176));
  fn2_225abc(c);
  /* ed590: tbz w0, #0, #0xed554 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_ed554;
  /* ed594: adrp x9, #0x257000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2453504)));
  /* ed598: ldur x8, [x29, #-8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(-8))));
  /* ed59c: ldr x9, [x9, #0xfb0] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(4016))));
  /* ed5a0: ldr x0, [x8, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* ed5a4: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* ed5a8: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(972204));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* ed5ac: ldp x20, x19, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* ed5b0: ldp x29, x30, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ed5b4: add sp, sp, #0x90 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(144)));
  /* ed5b8: ret  */
  return;
L_ed5bc:;
  /* ed5bc: sub x0, x29, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* ed5c0: mov x8, x19 */
  ARC_X_W(c, 8, ARC_X_R(c, 19));
  /* ed5c4: bl #0x1bccb8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(972232));
  fn2_1bccb8(c);
  /* ed5c8: sub x0, x29, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* ed5cc: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(972240));
  fn2_1bc620(c);
  /* ed5d0: ldur x0, [x29, #-8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-8))));
  /* ed5d4: cbnz x0, #0xed58c */
  if ((ARC_X_R(c, 0)) != 0) goto L_ed58c;
  /* ed5d8: b #0xed554 */
  goto L_ed554;
}

void fn2_f3a84(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076853892));
  /* f3a84: ldrb w0, [x0, #0x26] */
  ARC_W_W(c, 0, arc_ld8((ARC_X_R(c, 0) + INT64_C(38))));
  /* f3a88: ret  */
  return;
}

void fn2_f43cc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076856268));
  /* f43cc: sub sp, sp, #0xa0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(160)));
  /* f43d0: stp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* f43d4: stp x28, x27, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* f43d8: stp x26, x25, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* f43dc: stp x24, x23, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* f43e0: stp x22, x21, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* f43e4: stp x20, x19, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* f43e8: add x29, sp, #0x40 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(64)));
  /* f43ec: ldp x28, x27, [x7] */
  { const uint64_t _pa = ARC_X_R(c, 7);
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* f43f0: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* f43f4: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* f43f8: mov x24, x7 */
  ARC_X_W(c, 24, ARC_X_R(c, 7));
  /* f43fc: mov x21, x6 */
  ARC_X_W(c, 21, ARC_X_R(c, 6));
  /* f4400: mov x19, x5 */
  ARC_X_W(c, 19, ARC_X_R(c, 5));
  /* f4404: mov w26, w4 */
  ARC_W_W(c, 26, ARC_W_R(c, 4));
  /* f4408: mov x25, x3 */
  ARC_X_W(c, 25, ARC_X_R(c, 3));
  /* f440c: mov x22, x2 */
  ARC_X_W(c, 22, ARC_X_R(c, 2));
  /* f4410: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* f4414: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1000472));
  fn2_1bc084(c);
  /* f4418: cmp w26, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 26), UINT64_C(1));
  /* f441c: b.lt #0xf44c8 */
  if (ARC_COND(c, 11)) goto L_f44c8;
  /* f4420: ldr x1, [x25] */
  ARC_X_W(c, 1, arc_ld64(ARC_X_R(c, 25)));
  /* f4424: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* f4428: bl #0x1bc09c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1000492));
  fn2_1bc09c(c);
  /* f442c: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* f4430: sub x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* f4434: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1000504));
  fn2_1bcf04(c);
  /* f4438: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* f443c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1000512));
  fn2_1bc620(c);
  /* f4440: add x23, x23, x22, asr #1 */
  ARC_X_W(c, 23, (ARC_X_R(c, 23) + ((uint64_t)((int64_t)(ARC_X_R(c, 22)) >> 1))));
  /* f4444: str wzr, [x21] */
  arc_st32(ARC_X_R(c, 21), ARC_W_R(c, 31));
  /* f4448: tbz w22, #0, #0xf4454 */
  if (((ARC_W_R(c, 22)) >> 0 & 1) == 0) goto L_f4454;
L_f444c:;
  /* f444c: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* f4450: ldr x20, [x8, x20] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 8) + ARC_X_R(c, 20))));
L_f4454:;
  /* f4454: add x8, sp, #0x18 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(24)));
  /* f4458: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* f445c: bl #0x1bc84c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1000544));
  fn2_1bc84c(c);
  /* f4460: add x8, sp, #0x20 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(32)));
  /* f4464: add x1, sp, #0x18 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(24)));
  /* f4468: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* f446c: blr x20 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1000560));
  arc_dispatch(c, ARC_X_R(c, 20));
  /* f4470: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* f4474: add x1, sp, #0x20 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(32)));
  /* f4478: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1000572));
  fn2_1bc2f8(c);
  /* f447c: sub x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* f4480: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f4484: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1000584));
  fn2_1bcf04(c);
  /* f4488: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* f448c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1000592));
  fn2_1bc620(c);
  /* f4490: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* f4494: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1000600));
  fn2_1ccd9c(c);
  /* f4498: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* f449c: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1000608));
  fn2_1ccd9c(c);
  /* f44a0: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* f44a4: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1000616));
  fn2_1bc620(c);
  /* f44a8: ldp x20, x19, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* f44ac: ldp x22, x21, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* f44b0: ldp x24, x23, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* f44b4: ldp x26, x25, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* f44b8: ldp x28, x27, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* f44bc: ldp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* f44c0: add sp, sp, #0xa0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(160)));
  /* f44c4: ret  */
  return;
L_f44c8:;
  /* f44c8: sub x8, x27, x28 */
  ARC_X_W(c, 8, (ARC_X_R(c, 27) - ARC_X_R(c, 28)));
  /* f44cc: mov w9, #0xaaab */
  ARC_W_W(c, 9, UINT64_C(43691));
  /* f44d0: mov w10, #-1 */
  ARC_W_W(c, 10, UINT64_C(18446744073709551615));
  /* f44d4: lsr x8, x8, #3 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(3)) & 63)));
  /* f44d8: movk w9, #0xaaaa, lsl #16 */
  ARC_W_W(c, 9, ((ARC_W_R(c, 9) & UINT64_C(18446744069414649855)) | UINT64_C(2863267840)));
  /* f44dc: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* f44e0: madd w8, w8, w9, w10 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 10)) + ((uint32_t)(ARC_W_R(c, 8)) * (uint32_t)(ARC_W_R(c, 9)))));
  /* f44e4: mov w9, #0x18 */
  ARC_W_W(c, 9, UINT64_C(24));
  /* f44e8: ldr x10, [x24] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 24)));
  /* f44ec: nop  */
  /* nop: no architectural effect here */
  /* f44f0: smaddl x1, w8, w9, x10 */
  ARC_X_W(c, 1, (((int64_t)(ARC_X_R(c, 10))) + (((int64_t)(int32_t)(ARC_W_R(c, 8))) * ((int64_t)(int32_t)(ARC_W_R(c, 9))))));
  /* f44f4: bl #0x1bce10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1000696));
  fn2_1bce10(c);
  /* f44f8: add x23, x23, x22, asr #1 */
  ARC_X_W(c, 23, (ARC_X_R(c, 23) + ((uint64_t)((int64_t)(ARC_X_R(c, 22)) >> 1))));
  /* f44fc: str wzr, [x21] */
  arc_st32(ARC_X_R(c, 21), ARC_W_R(c, 31));
  /* f4500: tbnz w22, #0, #0xf444c */
  if (((ARC_W_R(c, 22)) >> 0 & 1) != 0) goto L_f444c;
  /* f4504: b #0xf4454 */
  goto L_f4454;
}

void fn2_f55c8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076860872));
  /* f55c8: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* f55cc: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* f55d0: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* f55d4: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f55d8: bl #0x1b6040 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1005020));
  fn2_1b6040(c);
  /* f55dc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f55e0: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* f55e4: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* f55e8: b #0x24b730 */
  fn2_24b730(c); return;
}

void fn2_fc2c4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076888772));
  /* fc2c4: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* fc2c8: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* fc2cc: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* fc2d0: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* fc2d4: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* fc2d8: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* fc2dc: bl #0x1ddec4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1032928));
  fn2_1ddec4(c);
  /* fc2e0: tbz w0, #0, #0xfc300 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_fc300;
  /* fc2e4: adrp x1, #0x2a000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(172032)));
  /* fc2e8: add x1, x1, #0x99f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2463)));
  /* fc2ec: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* fc2f0: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* fc2f4: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* fc2f8: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* fc2fc: b #0x1b7d24 */
  fn2_1b7d24(c); return;
L_fc300:;
  /* fc300: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* fc304: stur xzr, [x29, #-8] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-8)), ARC_X_R(c, 31));
  /* fc308: bl #0xb0cf0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1032972));
  fn2_b0cf0(c);
  /* fc30c: ldur x0, [x29, #-8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-8))));
  /* fc310: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* fc314: bl #0x20dff0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1032984));
  fn2_20dff0(c);
  /* fc318: ldur x0, [x29, #-8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-8))));
  /* fc31c: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* fc320: bl #0x20e0ec */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1032996));
  fn2_20e0ec(c);
  /* fc324: ldur x0, [x29, #-8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-8))));
  /* fc328: mov x8, sp */
  ARC_X_W(c, 8, (c)->sp);
  /* fc32c: bl #0x20e1e4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1033008));
  fn2_20e1e4(c);
  /* fc330: add x8, sp, #0x10 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(16)));
  /* fc334: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* fc338: bl #0x1de54c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1033020));
  fn2_1de54c(c);
  /* fc33c: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* fc340: mov x8, x19 */
  ARC_X_W(c, 8, ARC_X_R(c, 19));
  /* fc344: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* fc348: mov w2, #8 */
  ARC_W_W(c, 2, UINT64_C(8));
  /* fc34c: bl #0x1ccf2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1033040));
  fn2_1ccf2c(c);
  /* fc350: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* fc354: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1033048));
  fn2_1ccd9c(c);
  /* fc358: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* fc35c: bl #0x1dde08 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1033056));
  fn2_1dde08(c);
  /* fc360: ldur x0, [x29, #-8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-8))));
  /* fc364: cbz x0, #0xfc388 */
  if ((ARC_X_R(c, 0)) == 0) goto L_fc388;
  /* fc368: bl #0x225abc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1033068));
  fn2_225abc(c);
  /* fc36c: tbz w0, #0, #0xfc388 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_fc388;
  /* fc370: adrp x9, #0x257000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2453504)));
  /* fc374: ldur x8, [x29, #-8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(-8))));
  /* fc378: ldr x9, [x9, #0xfb0] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(4016))));
  /* fc37c: ldr x0, [x8, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* fc380: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* fc384: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1033096));
  arc_dispatch(c, ARC_X_R(c, 9));
L_fc388:;
  /* fc388: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* fc38c: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* fc390: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* fc394: ret  */
  return;
}

void fn2_fd9c8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076894664));
  /* fd9c8: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* fd9cc: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* fd9d0: str x21, [sp, #0x30] */
  arc_st64(((c)->sp + INT64_C(48)), ARC_X_R(c, 21));
  /* fd9d4: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* fd9d8: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* fd9dc: adrp x9, #0x25d000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2478080)));
  /* fd9e0: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* fd9e4: ldr x9, [x9, #0x1a8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(424))));
  /* fd9e8: cbz x9, #0xfda08 */
  if ((ARC_X_R(c, 9)) == 0) goto L_fda08;
  /* fd9ec: add x1, x9, #0x50 */
  ARC_X_W(c, 1, (ARC_X_R(c, 9) + UINT64_C(80)));
  /* fd9f0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* fd9f4: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* fd9f8: ldr x21, [sp, #0x30] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(48))));
  /* fd9fc: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* fda00: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* fda04: b #0x1db4b8 */
  fn2_1db4b8(c); return;
L_fda08:;
  /* fda08: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* fda0c: bl #0x1db4a4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1038864));
  fn2_1db4a4(c);
  /* fda10: mov x20, xzr */
  ARC_X_W(c, 20, ARC_X_R(c, 31));
  /* fda14: adrp x21, #0x253000 */
  ARC_X_W(c, 21, (arc_image_bases[2] + UINT64_C(2437120)));
  /* fda18: add x21, x21, #0xa70 */
  ARC_X_W(c, 21, (ARC_X_R(c, 21) + UINT64_C(2672)));
L_fda1c:;
  /* fda1c: ldr x1, [x21, x20] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 21) + ARC_X_R(c, 20))));
  /* fda20: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* fda24: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1038888));
  fn2_1b7d24(c);
  /* fda28: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* fda2c: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* fda30: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1038900));
  fn2_1bc2f8(c);
  /* fda34: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* fda38: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* fda3c: bl #0x1db920 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1038912));
  fn2_1db920(c);
  /* fda40: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* fda44: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1038920));
  fn2_1bc620(c);
  /* fda48: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* fda4c: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1038928));
  fn2_1ccd9c(c);
  /* fda50: add x20, x20, #8 */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* fda54: cmp x20, #0xd0 */
  (void)arc_sub64(c, ARC_X_R(c, 20), UINT64_C(208));
  /* fda58: b.ne #0xfda1c */
  if (ARC_COND(c, 1)) goto L_fda1c;
  /* fda5c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* fda60: bl #0x1dc48c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1038948));
  fn2_1dc48c(c);
  /* fda64: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* fda68: ldr x21, [sp, #0x30] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(48))));
  /* fda6c: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* fda70: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* fda74: ret  */
  return;
}

void fn2_129704(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077074180));
  /* 129704: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* 129708: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 12970c: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 129710: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 129714: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 129718: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 12971c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 129720: mov x22, x2 */
  ARC_X_W(c, 22, ARC_X_R(c, 2));
  /* 129724: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 129728: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1218348));
  fn2_1bc084(c);
  /* 12972c: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* 129730: add x1, x1, #0xb6f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2927)));
  /* 129734: mov w0, #0x68 */
  ARC_W_W(c, 0, UINT64_C(104));
  /* 129738: mov x2, x1 */
  ARC_X_W(c, 2, ARC_X_R(c, 1));
  /* 12973c: bl #0x1b5d1c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1218368));
  fn2_1b5d1c(c);
  /* 129740: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 129744: mov w9, #1 */
  ARC_W_W(c, 9, UINT64_C(1));
  /* 129748: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 12974c: ldr x8, [x8, #0x40] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(64))));
  /* 129750: str w9, [x0, #8] */
  arc_st32((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 9));
  /* 129754: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* 129758: str x8, [x0], #0xc */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(12));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* 12975c: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1218400));
  fn2_1d2c2c(c);
  /* 129760: add x0, x21, #0x14 */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) + UINT64_C(20)));
  /* 129764: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1218408));
  fn2_1d2c2c(c);
  /* 129768: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* 12976c: adrp x8, #0x254000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2441216)));
  /* 129770: add x8, x8, #0xbb8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3000)));
  /* 129774: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 129778: mov w1, #2 */
  ARC_W_W(c, 1, UINT64_C(2));
  /* 12977c: stur xzr, [x21, #0x1c] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(28)), ARC_X_R(c, 31));
  /* 129780: str x8, [x21] */
  arc_st64(ARC_X_R(c, 21), ARC_X_R(c, 8));
  /* 129784: stp xzr, x22, [x21, #0x58] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(88));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 22));
  }
  /* 129788: mov w22, #2 */
  ARC_W_W(c, 22, UINT64_C(2));
  /* 12978c: stur q0, [x21, #0x28] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(40)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 21) + INT64_C(40)) + 8, (c)->q[0].u64[1]);
  /* 129790: stur q0, [x21, #0x38] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(56)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 21) + INT64_C(56)) + 8, (c)->q[0].u64[1]);
  /* 129794: stur q0, [x21, #0x48] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(72)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 21) + INT64_C(72)) + 8, (c)->q[0].u64[1]);
  /* 129798: bl #0x1b5e68 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1218460));
  fn2_1b5e68(c);
  /* 12979c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 1297a0: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* 1297a4: str w22, [x21, #0x1c] */
  arc_st32((ARC_X_R(c, 21) + INT64_C(28)), ARC_W_R(c, 22));
  /* 1297a8: bl #0x1b5d94 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1218476));
  fn2_1b5d94(c);
  /* 1297ac: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 1297b0: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* 1297b4: bl #0x1b5d9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1218488));
  fn2_1b5d9c(c);
  /* 1297b8: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 1297bc: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 1297c0: bl #0x1d2c40 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1218500));
  fn2_1d2c40(c);
  /* 1297c4: add x0, x21, #0x14 */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) + UINT64_C(20)));
  /* 1297c8: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 1297cc: bl #0x1d5dc0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1218512));
  fn2_1d5dc0(c);
  /* 1297d0: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 1297d4: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1218520));
  fn2_1d2d24(c);
  /* 1297d8: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 1297dc: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 1297e0: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* 1297e4: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* 1297e8: mov w4, wzr */
  ARC_W_W(c, 4, ARC_W_R(c, 31));
  /* 1297ec: bl #0x1b0eac */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1218544));
  fn2_1b0eac(c);
  /* 1297f0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1297f4: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1297f8: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1218556));
  fn2_1bc620(c);
  /* 1297fc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 129800: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 129804: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 129808: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 12980c: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* 129810: ret  */
  return;
}

void fn2_1299a8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077074856));
  /* 1299a8: ldr d0, [x1] */
  arc_du_w(c, 0, arc_ld64(ARC_X_R(c, 1)));
  /* 1299ac: str d0, [x0, #0x90] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(144)), (c)->q[0].u64[0]);
  /* 1299b0: ret  */
  return;
}

void fn2_129ae8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077075176));
  /* 129ae8: ldr x8, [x1] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 1)));
  /* 129aec: str x8, [x0, #0x110] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(272)), ARC_X_R(c, 8));
  /* 129af0: ret  */
  return;
}

void fn2_129c28(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077075496));
  /* 129c28: ldrb w8, [x1] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 1)));
  /* 129c2c: strb w8, [x0, #0x190] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(400)), ARC_W_R(c, 8));
  /* 129c30: ret  */
  return;
}

void fn2_129d68(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077075816));
  /* 129d68: ldr x8, [x1] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 1)));
  /* 129d6c: str x8, [x0, #0x1e8] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(488)), ARC_X_R(c, 8));
  /* 129d70: ret  */
  return;
}

void fn2_129eac(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077076140));
  /* 129eac: add x0, x0, #0x268 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(616)));
  /* 129eb0: b #0x1dc718 */
  fn2_1dc718(c); return;
}

void fn2_129fe8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077076456));
  /* 129fe8: ldr d0, [x1] */
  arc_du_w(c, 0, arc_ld64(ARC_X_R(c, 1)));
  /* 129fec: str d0, [x0, #0x300] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(768)), (c)->q[0].u64[0]);
  /* 129ff0: ret  */
  return;
}

void fn2_12a128(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077076776));
  /* 12a128: ldrb w8, [x1] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 1)));
  /* 12a12c: strb w8, [x0, #0x380] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(896)), ARC_W_R(c, 8));
  /* 12a130: ret  */
  return;
}

void fn2_12a268(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077077096));
  /* 12a268: ldr x8, [x1] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 1)));
  /* 12a26c: str x8, [x0, #0x400] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(1024)), ARC_X_R(c, 8));
  /* 12a270: ret  */
  return;
}

void fn2_12a760(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077078368));
  /* 12a760: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 12a764: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 12a768: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 12a76c: ldr x8, [x2] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 2)));
  /* 12a770: mov x0, x2 */
  ARC_X_W(c, 0, ARC_X_R(c, 2));
  /* 12a774: mov x19, x2 */
  ARC_X_W(c, 19, ARC_X_R(c, 2));
  /* 12a778: ldr x8, [x8, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(8))));
  /* 12a77c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1222528));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 12a780: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 12a784: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* 12a788: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 12a78c: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 12a790: b #0x1b5ce8 */
  fn2_1b5ce8(c); return;
}

void fn2_12b5ac(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077082028));
  /* 12b5ac: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 12b5b0: stp x24, x23, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 12b5b4: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 12b5b8: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 12b5bc: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 12b5c0: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* 12b5c4: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 12b5c8: mov x19, x4 */
  ARC_X_W(c, 19, ARC_X_R(c, 4));
  /* 12b5cc: mov x20, x3 */
  ARC_X_W(c, 20, ARC_X_R(c, 3));
  /* 12b5d0: mov x21, x2 */
  ARC_X_W(c, 21, ARC_X_R(c, 2));
  /* 12b5d4: mov x22, x1 */
  ARC_X_W(c, 22, ARC_X_R(c, 1));
  /* 12b5d8: mov x24, x8 */
  ARC_X_W(c, 24, ARC_X_R(c, 8));
  /* 12b5dc: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1226208));
  fn2_1bc084(c);
  /* 12b5e0: ldp x1, x2, [x23, #0x60] */
  { const uint64_t _pa = (ARC_X_R(c, 23) + INT64_C(96));
    ARC_X_W(c, 1, arc_ld64(_pa));
    ARC_X_W(c, 2, arc_ld64(_pa + 8));
  }
  /* 12b5e4: add x7, x23, #0x48 */
  ARC_X_W(c, 7, (ARC_X_R(c, 23) + UINT64_C(72)));
  /* 12b5e8: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 12b5ec: mov x3, x21 */
  ARC_X_W(c, 3, ARC_X_R(c, 21));
  /* 12b5f0: mov w4, w20 */
  ARC_W_W(c, 4, ARC_W_R(c, 20));
  /* 12b5f4: mov x5, x24 */
  ARC_X_W(c, 5, ARC_X_R(c, 24));
  /* 12b5f8: mov x6, x19 */
  ARC_X_W(c, 6, ARC_X_R(c, 19));
  /* 12b5fc: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 12b600: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 12b604: ldp x24, x23, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 12b608: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 12b60c: b #0x12b838 */
  fn2_12b838(c); return;
}

void fn2_12cd08(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077088008));
  /* 12cd08: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 12cd0c: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 12cd10: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 12cd14: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 12cd18: cmp w1, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 1), UINT64_C(1));
  /* 12cd1c: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* 12cd20: b.hi #0x12cd84 */
  if (ARC_COND(c, 8)) goto L_12cd84;
  /* 12cd24: add x0, x19, #4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(4)));
  /* 12cd28: mov w20, w1 */
  ARC_W_W(c, 20, ARC_W_R(c, 1));
  /* 12cd2c: str wzr, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 31));
  /* 12cd30: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1232180));
  fn2_1d2c2c(c);
  /* 12cd34: add x0, x19, #0xc */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(12)));
  /* 12cd38: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1232188));
  fn2_1d2c2c(c);
  /* 12cd3c: add x0, x19, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(24)));
  /* 12cd40: str wzr, [x19, #0x14] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(20)), ARC_W_R(c, 31));
  /* 12cd44: bl #0x1ccc74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1232200));
  fn2_1ccc74(c);
  /* 12cd48: mov w8, #6 */
  ARC_W_W(c, 8, UINT64_C(6));
  /* 12cd4c: sub x1, x29, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 12cd50: mov w0, w20 */
  ARC_W_W(c, 0, ARC_W_R(c, 20));
  /* 12cd54: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* 12cd58: str w8, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 8));
  /* 12cd5c: stur wzr, [x29, #-8] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-8)), ARC_W_R(c, 31));
  /* 12cd60: bl #0xb2de4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1232228));
  fn2_b2de4(c);
  /* 12cd64: sub x1, x29, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 12cd68: mov w0, w20 */
  ARC_W_W(c, 0, ARC_W_R(c, 20));
  /* 12cd6c: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* 12cd70: bl #0xb4168 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1232244));
  fn2_b4168(c);
  /* 12cd74: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 12cd78: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 12cd7c: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 12cd80: ret  */
  return;
L_12cd84:;
  /* 12cd84: adrp x20, #0x1e000 */
  ARC_X_W(c, 20, (arc_image_bases[2] + UINT64_C(122880)));
  /* 12cd88: add x20, x20, #0xb6f */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) + UINT64_C(2927)));
  /* 12cd8c: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 12cd90: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 12cd94: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 12cd98: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1232284));
  fn2_1b8fd4(c);
  /* 12cd9c: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 12cda0: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 12cda4: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1232296));
  fn2_1b7d24(c);
  /* 12cda8: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 12cdac: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 12cdb0: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 12cdb4: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1232312));
  fn2_1b8fd4(c);
  /* 12cdb8: add x0, x19, #4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(4)));
  /* 12cdbc: str wzr, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 31));
  /* 12cdc0: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1232324));
  fn2_1d2c2c(c);
  /* 12cdc4: add x0, x19, #0xc */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(12)));
  /* 12cdc8: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1232332));
  fn2_1d2c2c(c);
  /* 12cdcc: add x0, x19, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(24)));
  /* 12cdd0: str wzr, [x19, #0x14] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(20)), ARC_W_R(c, 31));
  /* 12cdd4: bl #0x1ccc74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1232344));
  fn2_1ccc74(c);
  /* 12cdd8: mov w20, #6 */
  ARC_W_W(c, 20, UINT64_C(6));
  /* 12cddc: mov w8, #4 */
  ARC_W_W(c, 8, UINT64_C(4));
  /* 12cde0: add x0, x19, #4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(4)));
  /* 12cde4: sub x1, x29, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 12cde8: str w20, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 20));
  /* 12cdec: str w8, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 8));
  /* 12cdf0: bl #0x1d5dc0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1232372));
  fn2_1d5dc0(c);
  /* 12cdf4: add x0, x19, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(24)));
  /* 12cdf8: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* 12cdfc: str wzr, [x19, #0x14] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(20)), ARC_W_R(c, 31));
  /* 12ce00: bl #0x1d06b8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1232388));
  fn2_1d06b8(c);
  /* 12ce04: add x0, x19, #0xc */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(12)));
  /* 12ce08: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 12ce0c: str w20, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 20));
  /* 12ce10: bl #0x1d5dc0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1232404));
  fn2_1d5dc0(c);
  /* 12ce14: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 12ce18: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1232412));
  fn2_1d2d24(c);
  /* 12ce1c: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 12ce20: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1232420));
  fn2_1ccd9c(c);
  /* 12ce24: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 12ce28: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1232428));
  fn2_1d2d24(c);
  /* 12ce2c: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 12ce30: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 12ce34: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 12ce38: ret  */
  return;
}

void fn2_12dff4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077092852));
  /* 12dff4: sub sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(96)));
  /* 12dff8: stp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 12dffc: str x21, [sp, #0x40] */
  arc_st64(((c)->sp + INT64_C(64)), ARC_X_R(c, 21));
  /* 12e000: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 12e004: add x29, sp, #0x30 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(48)));
  /* 12e008: add x19, x0, x2, asr #1 */
  ARC_X_W(c, 19, (ARC_X_R(c, 0) + ((uint64_t)((int64_t)(ARC_X_R(c, 2)) >> 1))));
  /* 12e00c: mov x21, x3 */
  ARC_X_W(c, 21, ARC_X_R(c, 3));
  /* 12e010: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 12e014: tbz w2, #0, #0x12e020 */
  if (((ARC_W_R(c, 2)) >> 0 & 1) == 0) goto L_12e020;
  /* 12e018: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 12e01c: ldr x20, [x8, x20] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 8) + ARC_X_R(c, 20))));
L_12e020:;
  /* 12e020: ldr x1, [x21] */
  ARC_X_W(c, 1, arc_ld64(ARC_X_R(c, 21)));
  /* 12e024: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* 12e028: bl #0x1bc0b8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1237036));
  fn2_1bc0b8(c);
  /* 12e02c: ldr x1, [x21, #8] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 21) + INT64_C(8))));
  /* 12e030: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 12e034: bl #0x1ccc88 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1237048));
  fn2_1ccc88(c);
  /* 12e038: ldr x1, [x21, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 21) + INT64_C(16))));
  /* 12e03c: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 12e040: bl #0x1bc0b8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1237060));
  fn2_1bc0b8(c);
  /* 12e044: add x1, sp, #0x18 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(24)));
  /* 12e048: add x2, x29, #0x18 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 12e04c: mov x3, sp */
  ARC_X_W(c, 3, (c)->sp);
  /* 12e050: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 12e054: blr x20 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1237080));
  arc_dispatch(c, ARC_X_R(c, 20));
  /* 12e058: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 12e05c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1237088));
  fn2_1bc620(c);
  /* 12e060: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 12e064: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1237096));
  fn2_1ccd9c(c);
  /* 12e068: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* 12e06c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1237104));
  fn2_1bc620(c);
  /* 12e070: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 12e074: ldr x21, [sp, #0x40] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(64))));
  /* 12e078: ldp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 12e07c: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* 12e080: ret  */
  return;
}

void fn2_12f37c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077097852));
  /* 12f37c: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 12f380: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 12f384: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 12f388: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 12f38c: bl #0x1b6040 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1242000));
  fn2_1b6040(c);
  /* 12f390: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 12f394: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 12f398: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 12f39c: b #0x24b730 */
  fn2_24b730(c); return;
}

void fn2_130804(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077103108));
  /* 130804: cmp w1, #4 */
  (void)arc_sub32(c, ARC_W_R(c, 1), UINT64_C(4));
  /* 130808: cset w0, lo */
  ARC_W_W(c, 0, (ARC_COND(c, 3) ? 1 : 0));
  /* 13080c: ret  */
  return;
}

void fn2_13200c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077109260));
  /* 13200c: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 132010: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 132014: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 132018: mov x5, x4 */
  ARC_X_W(c, 5, ARC_X_R(c, 4));
  /* 13201c: mov x4, x3 */
  ARC_X_W(c, 4, ARC_X_R(c, 3));
  /* 132020: mov x3, x2 */
  ARC_X_W(c, 3, ARC_X_R(c, 2));
  /* 132024: mov x9, x1 */
  ARC_X_W(c, 9, ARC_X_R(c, 1));
  /* 132028: ldp x1, x2, [x0, #0x60] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(96));
    ARC_X_W(c, 1, arc_ld64(_pa));
    ARC_X_W(c, 2, arc_ld64(_pa + 8));
  }
  /* 13202c: add x6, x0, #0x48 */
  ARC_X_W(c, 6, (ARC_X_R(c, 0) + UINT64_C(72)));
  /* 132030: mov x0, x9 */
  ARC_X_W(c, 0, ARC_X_R(c, 9));
  /* 132034: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* 132038: bl #0x1320e8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1253436));
  fn2_1320e8(c);
  /* 13203c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 132040: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 132044: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 132048: b #0x1bc084 */
  fn2_1bc084(c); return;
}

void fn2_133724(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077115172));
  /* 133724: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 133728: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 13372c: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 133730: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 133734: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 133738: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* 13373c: add x1, x1, #0xb6f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2927)));
  /* 133740: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 133744: mov w0, #0x70 */
  ARC_W_W(c, 0, UINT64_C(112));
  /* 133748: mov x2, x1 */
  ARC_X_W(c, 2, ARC_X_R(c, 1));
  /* 13374c: bl #0x1b5d1c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1259344));
  fn2_1b5d1c(c);
  /* 133750: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 133754: mov w9, #1 */
  ARC_W_W(c, 9, UINT64_C(1));
  /* 133758: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 13375c: ldr x8, [x8, #0x40] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(64))));
  /* 133760: str w9, [x0, #8] */
  arc_st32((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 9));
  /* 133764: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* 133768: str x8, [x0], #0xc */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(12));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* 13376c: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1259376));
  fn2_1d2c2c(c);
  /* 133770: add x0, x19, #0x14 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(20)));
  /* 133774: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1259384));
  fn2_1d2c2c(c);
  /* 133778: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* 13377c: adrp x8, #0x250000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2424832)));
  /* 133780: add x8, x8, #0xc40 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3136)));
  /* 133784: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 133788: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* 13378c: stur xzr, [x19, #0x1c] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(28)), ARC_X_R(c, 31));
  /* 133790: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* 133794: stp xzr, x21, [x19, #0x58] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(88));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 133798: stur q0, [x19, #0x28] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(40)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(40)) + 8, (c)->q[0].u64[1]);
  /* 13379c: stur q0, [x19, #0x38] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(56)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(56)) + 8, (c)->q[0].u64[1]);
  /* 1337a0: stur q0, [x19, #0x48] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(72)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(72)) + 8, (c)->q[0].u64[1]);
  /* 1337a4: str x20, [x19, #0x68] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(104)), ARC_X_R(c, 20));
  /* 1337a8: bl #0x1b5e68 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1259436));
  fn2_1b5e68(c);
  /* 1337ac: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1337b0: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* 1337b4: str wzr, [x19, #0x1c] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(28)), ARC_W_R(c, 31));
  /* 1337b8: bl #0x1b5d9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1259452));
  fn2_1b5d9c(c);
  /* 1337bc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1337c0: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* 1337c4: bl #0x1b5d8c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1259464));
  fn2_1b5d8c(c);
  /* 1337c8: adrp x8, #0x25d000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 1337cc: add x8, x8, #0x1c8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(456)));
  /* 1337d0: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 1337d4: tbz w8, #0, #0x133810 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_133810;
L_1337d8:;
  /* 1337d8: adrp x1, #0x25d000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 1337dc: add x1, x1, #0x1bc */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(444)));
  /* 1337e0: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1337e4: bl #0x1d2c40 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1259496));
  fn2_1d2c40(c);
  /* 1337e8: add x0, x19, #0x14 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(20)));
  /* 1337ec: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1337f0: bl #0x1d5dc0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1259508));
  fn2_1d5dc0(c);
  /* 1337f4: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1337f8: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1259516));
  fn2_1d2d24(c);
  /* 1337fc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 133800: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 133804: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 133808: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 13380c: ret  */
  return;
L_133810:;
  /* 133810: adrp x0, #0x25d000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 133814: add x0, x0, #0x1c8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(456)));
  /* 133818: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1259548));
  fn2_24b710(c);
  /* 13381c: cbz w0, #0x1337d8 */
  if ((ARC_W_R(c, 0)) == 0) goto L_1337d8;
  /* 133820: adrp x20, #0x25d000 */
  ARC_X_W(c, 20, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 133824: add x20, x20, #0x1bc */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) + UINT64_C(444)));
  /* 133828: nop  */
  /* nop: no architectural effect here */
  /* 13382c: adr x1, #0x363e8 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(222184)));
  /* 133830: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 133834: bl #0x1b907c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1259576));
  fn2_1b907c(c);
  /* 133838: adrp x0, #0x257000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 13383c: adrp x2, #0x24f000 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(2420736)));
  /* 133840: add x2, x2, #0x980 */
  ARC_X_W(c, 2, (ARC_X_R(c, 2) + UINT64_C(2432)));
  /* 133844: ldr x0, [x0, #0xf88] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(3976))));
  /* 133848: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 13384c: bl #0x24b6f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1259600));
  fn2_24b6f0(c);
  /* 133850: adrp x0, #0x25d000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 133854: add x0, x0, #0x1c8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(456)));
  /* 133858: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1259612));
  fn2_24b720(c);
  /* 13385c: b #0x1337d8 */
  goto L_1337d8;
}

void fn2_134ea8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077121192));
  /* 134ea8: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* 134eac: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 134eb0: str x21, [sp, #0x30] */
  arc_st64(((c)->sp + INT64_C(48)), ARC_X_R(c, 21));
  /* 134eb4: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 134eb8: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 134ebc: add x20, x0, x2, asr #1 */
  ARC_X_W(c, 20, (ARC_X_R(c, 0) + ((uint64_t)((int64_t)(ARC_X_R(c, 2)) >> 1))));
  /* 134ec0: mov x21, x3 */
  ARC_X_W(c, 21, ARC_X_R(c, 3));
  /* 134ec4: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 134ec8: str wzr, [x4] */
  arc_st32(ARC_X_R(c, 4), ARC_W_R(c, 31));
  /* 134ecc: tbz w2, #0, #0x134ed8 */
  if (((ARC_W_R(c, 2)) >> 0 & 1) == 0) goto L_134ed8;
  /* 134ed0: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 134ed4: ldr x19, [x8, x19] */
  ARC_X_W(c, 19, arc_ld64((ARC_X_R(c, 8) + ARC_X_R(c, 19))));
L_134ed8:;
  /* 134ed8: ldr x0, [x21] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 21)));
  /* 134edc: add x8, x29, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 134ee0: bl #0x1bc84c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1265380));
  fn2_1bc84c(c);
  /* 134ee4: ldr x0, [x21, #8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 21) + INT64_C(8))));
  /* 134ee8: sub x8, x29, #8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 134eec: bl #0x1bc84c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1265392));
  fn2_1bc84c(c);
  /* 134ef0: ldr x0, [x21, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 21) + INT64_C(16))));
  /* 134ef4: add x8, sp, #0x10 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(16)));
  /* 134ef8: bl #0x1bccc4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1265404));
  fn2_1bccc4(c);
  /* 134efc: ldr x0, [x21, #0x18] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 21) + INT64_C(24))));
  /* 134f00: mov x8, sp */
  ARC_X_W(c, 8, (c)->sp);
  /* 134f04: bl #0x1bcca0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1265416));
  fn2_1bcca0(c);
  /* 134f08: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 134f0c: sub x2, x29, #8 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 134f10: add x3, sp, #0x10 */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(16)));
  /* 134f14: mov x4, sp */
  ARC_X_W(c, 4, (c)->sp);
  /* 134f18: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 134f1c: blr x19 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1265440));
  arc_dispatch(c, ARC_X_R(c, 19));
  /* 134f20: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 134f24: bl #0x1d79fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1265448));
  fn2_1d79fc(c);
  /* 134f28: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 134f2c: bl #0x1db788 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1265456));
  fn2_1db788(c);
  /* 134f30: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 134f34: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1265464));
  fn2_1ccd9c(c);
  /* 134f38: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 134f3c: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1265472));
  fn2_1ccd9c(c);
  /* 134f40: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 134f44: ldr x21, [sp, #0x30] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(48))));
  /* 134f48: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 134f4c: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* 134f50: ret  */
  return;
}

void fn2_1361a8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077126056));
  /* 1361a8: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1361ac: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 1361b0: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1361b4: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1361b8: bl #0x1b6040 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1270204));
  fn2_1b6040(c);
  /* 1361bc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1361c0: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1361c4: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1361c8: b #0x24b730 */
  fn2_24b730(c); return;
}

void fn2_1373e0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077130720));
  /* 1373e0: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1373e4: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 1373e8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1373ec: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1373f0: bl #0x1b6040 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1274868));
  fn2_1b6040(c);
  /* 1373f4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1373f8: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1373fc: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 137400: b #0x24b730 */
  fn2_24b730(c); return;
}

void fn2_138958(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077136216));
  /* 138958: cmp w1, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 1), UINT64_C(0));
  /* 13895c: cset w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? 1 : 0));
  /* 138960: lsl w8, w8, #2 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 8)) << ((UINT64_C(2)) & 31)));
  /* 138964: csel w0, wzr, w8, lt */
  ARC_W_W(c, 0, (ARC_COND(c, 11) ? (ARC_W_R(c, 31)) : ARC_W_R(c, 8)));
  /* 138968: ret  */
  return;
}

void fn2_139d90(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077141392));
  /* 139d90: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 139d94: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 139d98: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 139d9c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 139da0: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 139da4: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* 139da8: add x1, x1, #0xb6f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2927)));
  /* 139dac: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 139db0: mov w0, #0x70 */
  ARC_W_W(c, 0, UINT64_C(112));
  /* 139db4: mov x2, x1 */
  ARC_X_W(c, 2, ARC_X_R(c, 1));
  /* 139db8: bl #0x1b5d1c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1285564));
  fn2_1b5d1c(c);
  /* 139dbc: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 139dc0: mov w9, #1 */
  ARC_W_W(c, 9, UINT64_C(1));
  /* 139dc4: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 139dc8: ldr x8, [x8, #0x40] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(64))));
  /* 139dcc: str w9, [x0, #8] */
  arc_st32((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 9));
  /* 139dd0: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* 139dd4: str x8, [x0], #0xc */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(12));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* 139dd8: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1285596));
  fn2_1d2c2c(c);
  /* 139ddc: add x0, x19, #0x14 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(20)));
  /* 139de0: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1285604));
  fn2_1d2c2c(c);
  /* 139de4: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* 139de8: adrp x8, #0x254000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2441216)));
  /* 139dec: add x8, x8, #0xc78 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3192)));
  /* 139df0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 139df4: mov w1, #2 */
  ARC_W_W(c, 1, UINT64_C(2));
  /* 139df8: stur xzr, [x19, #0x1c] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(28)), ARC_X_R(c, 31));
  /* 139dfc: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* 139e00: stp xzr, x21, [x19, #0x58] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(88));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 139e04: stur q0, [x19, #0x28] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(40)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(40)) + 8, (c)->q[0].u64[1]);
  /* 139e08: stur q0, [x19, #0x38] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(56)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(56)) + 8, (c)->q[0].u64[1]);
  /* 139e0c: stur q0, [x19, #0x48] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(72)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(72)) + 8, (c)->q[0].u64[1]);
  /* 139e10: str x20, [x19, #0x68] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(104)), ARC_X_R(c, 20));
  /* 139e14: mov w20, #2 */
  ARC_W_W(c, 20, UINT64_C(2));
  /* 139e18: bl #0x1b5e68 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1285660));
  fn2_1b5e68(c);
  /* 139e1c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 139e20: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* 139e24: str w20, [x19, #0x1c] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(28)), ARC_W_R(c, 20));
  /* 139e28: bl #0x1b5d9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1285676));
  fn2_1b5d9c(c);
  /* 139e2c: adrp x8, #0x25d000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 139e30: add x8, x8, #0x1c8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(456)));
  /* 139e34: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 139e38: tbz w8, #0, #0x139e74 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_139e74;
L_139e3c:;
  /* 139e3c: adrp x1, #0x25d000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 139e40: add x1, x1, #0x1bc */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(444)));
  /* 139e44: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 139e48: bl #0x1d2c40 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1285708));
  fn2_1d2c40(c);
  /* 139e4c: add x0, x19, #0x14 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(20)));
  /* 139e50: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 139e54: bl #0x1d5dc0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1285720));
  fn2_1d5dc0(c);
  /* 139e58: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 139e5c: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1285728));
  fn2_1d2d24(c);
  /* 139e60: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 139e64: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 139e68: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 139e6c: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 139e70: ret  */
  return;
L_139e74:;
  /* 139e74: adrp x0, #0x25d000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 139e78: add x0, x0, #0x1c8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(456)));
  /* 139e7c: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1285760));
  fn2_24b710(c);
  /* 139e80: cbz w0, #0x139e3c */
  if ((ARC_W_R(c, 0)) == 0) goto L_139e3c;
  /* 139e84: adrp x20, #0x25d000 */
  ARC_X_W(c, 20, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 139e88: add x20, x20, #0x1bc */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) + UINT64_C(444)));
  /* 139e8c: adrp x1, #0x36000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(221184)));
  /* 139e90: add x1, x1, #0x3e8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1000)));
  /* 139e94: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 139e98: bl #0x1b907c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1285788));
  fn2_1b907c(c);
  /* 139e9c: adrp x0, #0x257000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 139ea0: adrp x2, #0x24f000 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(2420736)));
  /* 139ea4: add x2, x2, #0x980 */
  ARC_X_W(c, 2, (ARC_X_R(c, 2) + UINT64_C(2432)));
  /* 139ea8: ldr x0, [x0, #0xf88] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(3976))));
  /* 139eac: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 139eb0: bl #0x24b6f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1285812));
  fn2_24b6f0(c);
  /* 139eb4: adrp x0, #0x25d000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 139eb8: add x0, x0, #0x1c8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(456)));
  /* 139ebc: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1285824));
  fn2_24b720(c);
  /* 139ec0: b #0x139e3c */
  goto L_139e3c;
}

void fn2_13b20c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077146636));
  /* 13b20c: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 13b210: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 13b214: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 13b218: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 13b21c: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 13b220: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* 13b224: add x1, x1, #0xb6f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2927)));
  /* 13b228: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 13b22c: mov w0, #0x70 */
  ARC_W_W(c, 0, UINT64_C(112));
  /* 13b230: mov x2, x1 */
  ARC_X_W(c, 2, ARC_X_R(c, 1));
  /* 13b234: bl #0x1b5d1c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1290808));
  fn2_1b5d1c(c);
  /* 13b238: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 13b23c: mov w9, #1 */
  ARC_W_W(c, 9, UINT64_C(1));
  /* 13b240: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 13b244: ldr x8, [x8, #0x40] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(64))));
  /* 13b248: str w9, [x0, #8] */
  arc_st32((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 9));
  /* 13b24c: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* 13b250: str x8, [x0], #0xc */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(12));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* 13b254: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1290840));
  fn2_1d2c2c(c);
  /* 13b258: add x0, x19, #0x14 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(20)));
  /* 13b25c: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1290848));
  fn2_1d2c2c(c);
  /* 13b260: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* 13b264: adrp x8, #0x254000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2441216)));
  /* 13b268: add x8, x8, #0xdf8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3576)));
  /* 13b26c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 13b270: mov w1, #5 */
  ARC_W_W(c, 1, UINT64_C(5));
  /* 13b274: stur xzr, [x19, #0x1c] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(28)), ARC_X_R(c, 31));
  /* 13b278: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* 13b27c: stp xzr, x21, [x19, #0x58] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(88));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 13b280: stur q0, [x19, #0x28] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(40)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(40)) + 8, (c)->q[0].u64[1]);
  /* 13b284: stur q0, [x19, #0x38] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(56)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(56)) + 8, (c)->q[0].u64[1]);
  /* 13b288: stur q0, [x19, #0x48] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(72)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(72)) + 8, (c)->q[0].u64[1]);
  /* 13b28c: str x20, [x19, #0x68] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(104)), ARC_X_R(c, 20));
  /* 13b290: mov w20, #5 */
  ARC_W_W(c, 20, UINT64_C(5));
  /* 13b294: bl #0x1b5e68 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1290904));
  fn2_1b5e68(c);
  /* 13b298: str w20, [x19, #0x1c] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(28)), ARC_W_R(c, 20));
  /* 13b29c: adrp x8, #0x25d000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 13b2a0: add x8, x8, #0x1c8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(456)));
  /* 13b2a4: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 13b2a8: tbz w8, #0, #0x13b2e4 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13b2e4;
L_13b2ac:;
  /* 13b2ac: adrp x1, #0x25d000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 13b2b0: add x1, x1, #0x1bc */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(444)));
  /* 13b2b4: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 13b2b8: bl #0x1d2c40 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1290940));
  fn2_1d2c40(c);
  /* 13b2bc: add x0, x19, #0x14 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(20)));
  /* 13b2c0: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 13b2c4: bl #0x1d5dc0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1290952));
  fn2_1d5dc0(c);
  /* 13b2c8: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 13b2cc: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1290960));
  fn2_1d2d24(c);
  /* 13b2d0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 13b2d4: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 13b2d8: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 13b2dc: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 13b2e0: ret  */
  return;
L_13b2e4:;
  /* 13b2e4: adrp x0, #0x25d000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 13b2e8: add x0, x0, #0x1c8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(456)));
  /* 13b2ec: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1290992));
  fn2_24b710(c);
  /* 13b2f0: cbz w0, #0x13b2ac */
  if ((ARC_W_R(c, 0)) == 0) goto L_13b2ac;
  /* 13b2f4: adrp x20, #0x25d000 */
  ARC_X_W(c, 20, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 13b2f8: add x20, x20, #0x1bc */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) + UINT64_C(444)));
  /* 13b2fc: adrp x1, #0x36000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(221184)));
  /* 13b300: add x1, x1, #0x3e8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1000)));
  /* 13b304: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 13b308: bl #0x1b907c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1291020));
  fn2_1b907c(c);
  /* 13b30c: adrp x0, #0x257000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 13b310: adrp x2, #0x24f000 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(2420736)));
  /* 13b314: add x2, x2, #0x980 */
  ARC_X_W(c, 2, (ARC_X_R(c, 2) + UINT64_C(2432)));
  /* 13b318: ldr x0, [x0, #0xf88] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(3976))));
  /* 13b31c: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 13b320: bl #0x24b6f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1291044));
  fn2_24b6f0(c);
  /* 13b324: adrp x0, #0x25d000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 13b328: add x0, x0, #0x1c8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(456)));
  /* 13b32c: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1291056));
  fn2_24b720(c);
  /* 13b330: b #0x13b2ac */
  goto L_13b2ac;
}

void fn2_13c6d4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077151956));
  /* 13c6d4: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 13c6d8: ret  */
  return;
}

void fn2_13e940(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077160768));
  /* 13e940: sub sp, sp, #0x150 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(336)));
  /* 13e944: stp x29, x30, [sp, #0x100] */
  { const uint64_t _pa = ((c)->sp + INT64_C(256));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 13e948: str x28, [sp, #0x110] */
  arc_st64(((c)->sp + INT64_C(272)), ARC_X_R(c, 28));
  /* 13e94c: stp x24, x23, [sp, #0x120] */
  { const uint64_t _pa = ((c)->sp + INT64_C(288));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 13e950: stp x22, x21, [sp, #0x130] */
  { const uint64_t _pa = ((c)->sp + INT64_C(304));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 13e954: stp x20, x19, [sp, #0x140] */
  { const uint64_t _pa = ((c)->sp + INT64_C(320));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 13e958: add x29, sp, #0x100 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(256)));
  /* 13e95c: ldrb w8, [x0, #0x190] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 0) + INT64_C(400))));
  /* 13e960: mov x21, x2 */
  ARC_X_W(c, 21, ARC_X_R(c, 2));
  /* 13e964: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 13e968: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 13e96c: stur x1, [x29, #-0x38] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-56)), ARC_X_R(c, 1));
  /* 13e970: cbz w8, #0x13e9f0 */
  if ((ARC_W_R(c, 8)) == 0) goto L_13e9f0;
  /* 13e974: ldrb w8, [x19, #0x288] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(648))));
  /* 13e978: cbz w8, #0x13f11c */
  if ((ARC_W_R(c, 8)) == 0) goto L_13f11c;
  /* 13e97c: sub x0, x29, #0x58 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(88)));
  /* 13e980: bl #0x1db4a4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1304964));
  fn2_1db4a4(c);
  /* 13e984: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 13e988: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 13e98c: bl #0x1bc290 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1304976));
  fn2_1bc290(c);
  /* 13e990: sub x0, x29, #0x58 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(88)));
  /* 13e994: sub x1, x29, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 13e998: bl #0x1db920 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1304988));
  fn2_1db920(c);
  /* 13e99c: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 13e9a0: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1304996));
  fn2_1bc620(c);
  /* 13e9a4: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 13e9a8: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 13e9ac: bl #0x1bc290 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1305008));
  fn2_1bc290(c);
  /* 13e9b0: sub x0, x29, #0x58 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(88)));
  /* 13e9b4: sub x1, x29, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 13e9b8: bl #0x1db920 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1305020));
  fn2_1db920(c);
  /* 13e9bc: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 13e9c0: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1305028));
  fn2_1bc620(c);
  /* 13e9c4: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 13e9c8: sub x1, x29, #0x58 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(88)));
  /* 13e9cc: bl #0x1bc544 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1305040));
  fn2_1bc544(c);
  /* 13e9d0: add x0, x19, #0x3f8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(1016)));
  /* 13e9d4: sub x1, x29, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 13e9d8: bl #0x1db988 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1305052));
  fn2_1db988(c);
  /* 13e9dc: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 13e9e0: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1305060));
  fn2_1bc620(c);
  /* 13e9e4: sub x0, x29, #0x58 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(88)));
  /* 13e9e8: bl #0x1db788 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1305068));
  fn2_1db788(c);
  /* 13e9ec: b #0x13f16c */
  goto L_13f16c;
L_13e9f0:;
  /* 13e9f0: tbnz x20, #0x3f, #0x13f188 */
  if (((ARC_X_R(c, 20)) >> 63 & 1) != 0) goto L_13f188;
  /* 13e9f4: add x0, x19, #0x6a */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(106)));
  /* 13e9f8: bl #0x1db794 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1305084));
  fn2_1db794(c);
  /* 13e9fc: cmp x0, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 20));
  /* 13ea00: b.le #0x13f188 */
  if (ARC_COND(c, 13)) goto L_13f188;
  /* 13ea04: add x0, x19, #0x6a */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(106)));
  /* 13ea08: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 13ea0c: bl #0x1bbf48 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1305104));
  fn2_1bbf48(c);
  /* 13ea10: sub x8, x29, #0x40 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 13ea14: bl #0x1bccb8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1305112));
  fn2_1bccb8(c);
  /* 13ea18: adrp x23, #0x34000 */
  ARC_X_W(c, 23, (arc_image_bases[2] + UINT64_C(212992)));
  /* 13ea1c: add x23, x23, #0xfb6 */
  ARC_X_W(c, 23, (ARC_X_R(c, 23) + UINT64_C(4022)));
  /* 13ea20: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 13ea24: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* 13ea28: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1305132));
  fn2_1b7d24(c);
  /* 13ea2c: sub x0, x29, #0x58 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(88)));
  /* 13ea30: sub x1, x29, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 13ea34: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1305144));
  fn2_1bc2f8(c);
  /* 13ea38: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 13ea3c: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1305152));
  fn2_1ccd9c(c);
  /* 13ea40: sub x0, x29, #0x70 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(112)));
  /* 13ea44: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1305160));
  fn2_1bc084(c);
  /* 13ea48: sub x8, x29, #0x30 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 13ea4c: sub x0, x29, #0x40 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 13ea50: sub x1, x29, #0x58 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(88)));
  /* 13ea54: sub x2, x29, #0x70 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(112)));
  /* 13ea58: bl #0x1d9c5c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1305180));
  fn2_1d9c5c(c);
  /* 13ea5c: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 13ea60: bl #0x1bc668 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1305188));
  fn2_1bc668(c);
  /* 13ea64: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 13ea68: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 13ea6c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1305200));
  fn2_1bc620(c);
  /* 13ea70: sub x0, x29, #0x70 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(112)));
  /* 13ea74: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1305208));
  fn2_1bc620(c);
  /* 13ea78: sub x0, x29, #0x58 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(88)));
  /* 13ea7c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1305216));
  fn2_1bc620(c);
  /* 13ea80: adrp x24, #0x26000 */
  ARC_X_W(c, 24, (arc_image_bases[2] + UINT64_C(155648)));
  /* 13ea84: add x24, x24, #0x6cc */
  ARC_X_W(c, 24, (ARC_X_R(c, 24) + UINT64_C(1740)));
  /* 13ea88: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 13ea8c: mov x1, x24 */
  ARC_X_W(c, 1, ARC_X_R(c, 24));
  /* 13ea90: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1305236));
  fn2_1b7d24(c);
  /* 13ea94: sub x0, x29, #0x58 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(88)));
  /* 13ea98: sub x1, x29, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 13ea9c: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1305248));
  fn2_1bc2f8(c);
  /* 13eaa0: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 13eaa4: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1305256));
  fn2_1ccd9c(c);
  /* 13eaa8: sub x0, x29, #0x70 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(112)));
  /* 13eaac: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* 13eab0: bl #0x1bc25c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1305268));
  fn2_1bc25c(c);
  /* 13eab4: sub x8, x29, #0x30 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 13eab8: sub x0, x29, #0x40 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 13eabc: sub x1, x29, #0x58 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(88)));
  /* 13eac0: sub x2, x29, #0x70 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(112)));
  /* 13eac4: bl #0x1d9c5c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1305288));
  fn2_1d9c5c(c);
  /* 13eac8: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 13eacc: bl #0x1bc630 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1305296));
  fn2_1bc630(c);
  /* 13ead0: mov w20, w0 */
  ARC_W_W(c, 20, ARC_W_R(c, 0));
  /* 13ead4: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 13ead8: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1305308));
  fn2_1bc620(c);
  /* 13eadc: sub x0, x29, #0x70 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(112)));
  /* 13eae0: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1305316));
  fn2_1bc620(c);
  /* 13eae4: sub x0, x29, #0x58 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(88)));
  /* 13eae8: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1305324));
  fn2_1bc620(c);
  /* 13eaec: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 13eaf0: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 13eaf4: bl #0x1bc290 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1305336));
  fn2_1bc290(c);
  /* 13eaf8: sub x0, x29, #0x70 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(112)));
  /* 13eafc: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* 13eb00: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1305348));
  fn2_1b7d24(c);
  /* 13eb04: sub x0, x29, #0x58 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(88)));
  /* 13eb08: sub x1, x29, #0x70 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(112)));
  /* 13eb0c: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1305360));
  fn2_1bc2f8(c);
  /* 13eb10: sub x0, x29, #0x70 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(112)));
  /* 13eb14: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1305368));
  fn2_1ccd9c(c);
  /* 13eb18: sub x0, x29, #0x40 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 13eb1c: sub x1, x29, #0x58 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(88)));
  /* 13eb20: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1305380));
  fn2_1bbfa0(c);
  /* 13eb24: sub x1, x29, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 13eb28: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1305388));
  fn2_1bcf04(c);
  /* 13eb2c: sub x0, x29, #0x58 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(88)));
  /* 13eb30: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1305396));
  fn2_1bc620(c);
  /* 13eb34: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 13eb38: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1305404));
  fn2_1bc620(c);
  /* 13eb3c: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 13eb40: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* 13eb44: bl #0x1bc25c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1305416));
  fn2_1bc25c(c);
  /* 13eb48: sub x0, x29, #0x70 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(112)));
  /* 13eb4c: mov x1, x24 */
  ARC_X_W(c, 1, ARC_X_R(c, 24));
  /* 13eb50: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1305428));
  fn2_1b7d24(c);
  /* 13eb54: sub x0, x29, #0x58 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(88)));
  /* 13eb58: sub x1, x29, #0x70 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(112)));
  /* 13eb5c: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1305440));
  fn2_1bc2f8(c);
  /* 13eb60: sub x0, x29, #0x70 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(112)));
  /* 13eb64: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1305448));
  fn2_1ccd9c(c);
  /* 13eb68: sub x0, x29, #0x40 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 13eb6c: sub x1, x29, #0x58 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(88)));
  /* 13eb70: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1305460));
  fn2_1bbfa0(c);
  /* 13eb74: sub x1, x29, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 13eb78: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1305468));
  fn2_1bcf04(c);
  /* 13eb7c: sub x0, x29, #0x58 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(88)));
  /* 13eb80: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1305476));
  fn2_1bc620(c);
  /* 13eb84: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 13eb88: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1305484));
  fn2_1bc620(c);
  /* 13eb8c: adrp x1, #0x28000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(163840)));
  /* 13eb90: add x1, x1, #0x736 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1846)));
  /* 13eb94: sub x0, x29, #0x58 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(88)));
  /* 13eb98: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1305500));
  fn2_1b7d24(c);
  /* 13eb9c: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 13eba0: sub x1, x29, #0x58 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(88)));
  /* 13eba4: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1305512));
  fn2_1bc2f8(c);
  /* 13eba8: sub x0, x29, #0x58 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(88)));
  /* 13ebac: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1305520));
  fn2_1ccd9c(c);
  /* 13ebb0: sub x0, x29, #0x40 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 13ebb4: sub x1, x29, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 13ebb8: bl #0x1d9a68 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1305532));
  fn2_1d9a68(c);
  /* 13ebbc: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 13ebc0: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1305540));
  fn2_1bc620(c);
  /* 13ebc4: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 13ebc8: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* 13ebcc: bl #0x1bc25c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1305552));
  fn2_1bc25c(c);
  /* 13ebd0: sub x0, x29, #0x58 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(88)));
  /* 13ebd4: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 13ebd8: bl #0x1bc290 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1305564));
  fn2_1bc290(c);
  /* 13ebdc: add x0, x19, #0x289 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(649)));
  /* 13ebe0: sub x1, x29, #0x58 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(88)));
  /* 13ebe4: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1305576));
  fn2_1bbfa0(c);
  /* 13ebe8: sub x1, x29, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 13ebec: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1305584));
  fn2_1bcf04(c);
  /* 13ebf0: sub x0, x29, #0x58 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(88)));
  /* 13ebf4: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1305592));
  fn2_1bc620(c);
  /* 13ebf8: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 13ebfc: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1305600));
  fn2_1bc620(c);
  /* 13ec00: cmp x22, x21 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 21));
  /* 13ec04: b.eq #0x13ec5c */
  if (ARC_COND(c, 0)) goto L_13ec5c;
  /* 13ec08: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 13ec0c: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 13ec10: bl #0xfeb48 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1305620));
  fn2_feb48(c);
  /* 13ec14: tbz w0, #0, #0x13ec5c */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_13ec5c;
  /* 13ec18: sub x8, x29, #0x30 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 13ec1c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 13ec20: bl #0xfe890 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1305636));
  fn2_fe890(c);
  /* 13ec24: ldur x0, [x29, #-0x30] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-48))));
  /* 13ec28: mov w1, w22 */
  ARC_W_W(c, 1, ARC_W_R(c, 22));
  /* 13ec2c: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 13ec30: bl #0x211cdc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1305652));
  fn2_211cdc(c);
  /* 13ec34: ldur x0, [x29, #-0x30] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-48))));
  /* 13ec38: cbz x0, #0x13ec5c */
  if ((ARC_X_R(c, 0)) == 0) goto L_13ec5c;
  /* 13ec3c: bl #0x225abc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1305664));
  fn2_225abc(c);
  /* 13ec40: tbz w0, #0, #0x13ec5c */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_13ec5c;
  /* 13ec44: adrp x9, #0x257000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 13ec48: ldur x8, [x29, #-0x30] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(-48))));
  /* 13ec4c: ldr x9, [x9, #0xfb0] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(4016))));
  /* 13ec50: ldr x0, [x8, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 13ec54: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* 13ec58: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1305692));
  arc_dispatch(c, ARC_X_R(c, 9));
L_13ec5c:;
  /* 13ec5c: sub x8, x29, #0x78 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(120)));
  /* 13ec60: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 13ec64: bl #0xfe474 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1305704));
  fn2_fe474(c);
  /* 13ec68: adrp x1, #0x28000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(163840)));
  /* 13ec6c: add x1, x1, #0x7f7 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2039)));
  /* 13ec70: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 13ec74: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 13ec78: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1305724));
  fn2_1b8fd4(c);
  /* 13ec7c: add x8, x19, #0x2d8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + UINT64_C(728)));
  /* 13ec80: add x9, x19, #0x2e0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + UINT64_C(736)));
  /* 13ec84: add x10, x19, #0x2f0 */
  ARC_X_W(c, 10, (ARC_X_R(c, 19) + UINT64_C(752)));
  /* 13ec88: sub x2, x29, #0x30 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 13ec8c: sub x3, x29, #0x38 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) - UINT64_C(56)));
  /* 13ec90: add x4, x19, #0x6a */
  ARC_X_W(c, 4, (ARC_X_R(c, 19) + UINT64_C(106)));
  /* 13ec94: sub x5, x29, #0x78 */
  ARC_X_W(c, 5, (ARC_X_R(c, 29) - UINT64_C(120)));
  /* 13ec98: add x6, x19, #0x128 */
  ARC_X_W(c, 6, (ARC_X_R(c, 19) + UINT64_C(296)));
  /* 13ec9c: add x7, x19, #0x2d0 */
  ARC_X_W(c, 7, (ARC_X_R(c, 19) + UINT64_C(720)));
  /* 13eca0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 13eca4: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 13eca8: stp x9, x10, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 10));
  }
  /* 13ecac: str x8, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 8));
  /* 13ecb0: bl #0x14938c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1305780));
  fn2_14938c(c);
  /* 13ecb4: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 13ecb8: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1305788));
  fn2_1d2d24(c);
  /* 13ecbc: add x0, sp, #0x80 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(128)));
  /* 13ecc0: bl #0x1d9740 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1305796));
  fn2_1d9740(c);
  /* 13ecc4: adrp x1, #0x20000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(131072)));
  /* 13ecc8: add x1, x1, #0xdd2 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3538)));
  /* 13eccc: sub x0, x29, #0x58 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(88)));
  /* 13ecd0: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1305812));
  fn2_1b7d24(c);
  /* 13ecd4: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 13ecd8: sub x1, x29, #0x58 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(88)));
  /* 13ecdc: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1305824));
  fn2_1bc2f8(c);
  /* 13ece0: sub x0, x29, #0x58 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(88)));
  /* 13ece4: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1305832));
  fn2_1ccd9c(c);
  /* 13ece8: adrp x1, #0x20000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(131072)));
  /* 13ecec: add x1, x1, #0x2a5 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(677)));
  /* 13ecf0: sub x0, x29, #0x70 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(112)));
  /* 13ecf4: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1305848));
  fn2_1b7d24(c);
  /* 13ecf8: sub x0, x29, #0x58 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(88)));
  /* 13ecfc: sub x1, x29, #0x70 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(112)));
  /* 13ed00: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1305860));
  fn2_1bc2f8(c);
  /* 13ed04: sub x0, x29, #0x70 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(112)));
  /* 13ed08: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1305868));
  fn2_1ccd9c(c);
  /* 13ed0c: add x0, sp, #0x80 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(128)));
  /* 13ed10: sub x1, x29, #0x58 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(88)));
  /* 13ed14: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1305880));
  fn2_1bbfa0(c);
  /* 13ed18: sub x1, x29, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 13ed1c: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1305888));
  fn2_1bcf04(c);
  /* 13ed20: sub x0, x29, #0x58 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(88)));
  /* 13ed24: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1305896));
  fn2_1bc620(c);
  /* 13ed28: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 13ed2c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1305904));
  fn2_1bc620(c);
  /* 13ed30: ldur x8, [x29, #-0x38] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(-56))));
  /* 13ed34: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 13ed38: add x1, x8, #1 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* 13ed3c: bl #0x1bc290 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1305920));
  fn2_1bc290(c);
  /* 13ed40: adrp x1, #0x1f000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(126976)));
  /* 13ed44: add x1, x1, #0x90c */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2316)));
  /* 13ed48: sub x0, x29, #0x70 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(112)));
  /* 13ed4c: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1305936));
  fn2_1b7d24(c);
  /* 13ed50: sub x0, x29, #0x58 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(88)));
  /* 13ed54: sub x1, x29, #0x70 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(112)));
  /* 13ed58: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1305948));
  fn2_1bc2f8(c);
  /* 13ed5c: sub x0, x29, #0x70 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(112)));
  /* 13ed60: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1305956));
  fn2_1ccd9c(c);
  /* 13ed64: add x0, sp, #0x80 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(128)));
  /* 13ed68: sub x1, x29, #0x58 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(88)));
  /* 13ed6c: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1305968));
  fn2_1bbfa0(c);
  /* 13ed70: sub x1, x29, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 13ed74: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1305976));
  fn2_1bcf04(c);
  /* 13ed78: sub x0, x29, #0x58 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(88)));
  /* 13ed7c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1305984));
  fn2_1bc620(c);
  /* 13ed80: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 13ed84: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1305992));
  fn2_1bc620(c);
  /* 13ed88: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 13ed8c: mov x1, #-1 */
  ARC_X_W(c, 1, UINT64_C(18446744073709551615));
  /* 13ed90: bl #0x1bc290 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1306004));
  fn2_1bc290(c);
  /* 13ed94: adrp x1, #0x20000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(131072)));
  /* 13ed98: add x1, x1, #0x2e */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(46)));
  /* 13ed9c: sub x0, x29, #0x70 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(112)));
  /* 13eda0: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1306020));
  fn2_1b7d24(c);
  /* 13eda4: sub x0, x29, #0x58 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(88)));
  /* 13eda8: sub x1, x29, #0x70 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(112)));
  /* 13edac: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1306032));
  fn2_1bc2f8(c);
  /* 13edb0: sub x0, x29, #0x70 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(112)));
  /* 13edb4: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1306040));
  fn2_1ccd9c(c);
  /* 13edb8: add x0, sp, #0x80 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(128)));
  /* 13edbc: sub x1, x29, #0x58 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(88)));
  /* 13edc0: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1306052));
  fn2_1bbfa0(c);
  /* 13edc4: sub x1, x29, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 13edc8: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1306060));
  fn2_1bcf04(c);
  /* 13edcc: sub x0, x29, #0x58 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(88)));
  /* 13edd0: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1306068));
  fn2_1bc620(c);
  /* 13edd4: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 13edd8: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1306076));
  fn2_1bc620(c);
  /* 13eddc: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 13ede0: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 13ede4: bl #0x1bc290 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1306088));
  fn2_1bc290(c);
  /* 13ede8: adrp x1, #0x2b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(176128)));
  /* 13edec: add x1, x1, #0x75a */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1882)));
  /* 13edf0: sub x0, x29, #0x70 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(112)));
  /* 13edf4: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1306104));
  fn2_1b7d24(c);
  /* 13edf8: sub x0, x29, #0x58 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(88)));
  /* 13edfc: sub x1, x29, #0x70 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(112)));
  /* 13ee00: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1306116));
  fn2_1bc2f8(c);
  /* 13ee04: sub x0, x29, #0x70 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(112)));
  /* 13ee08: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1306124));
  fn2_1ccd9c(c);
  /* 13ee0c: add x0, sp, #0x80 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(128)));
  /* 13ee10: sub x1, x29, #0x58 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(88)));
  /* 13ee14: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1306136));
  fn2_1bbfa0(c);
  /* 13ee18: sub x1, x29, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 13ee1c: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1306144));
  fn2_1bcf04(c);
  /* 13ee20: sub x0, x29, #0x58 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(88)));
  /* 13ee24: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1306152));
  fn2_1bc620(c);
  /* 13ee28: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 13ee2c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1306160));
  fn2_1bc620(c);
  /* 13ee30: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 13ee34: and w1, w20, #1 */
  ARC_W_W(c, 1, (ARC_W_R(c, 20) & UINT64_C(1)));
  /* 13ee38: bl #0x1bc25c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1306172));
  fn2_1bc25c(c);
  /* 13ee3c: adrp x1, #0x20000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(131072)));
  /* 13ee40: add x1, x1, #0xdd8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3544)));
  /* 13ee44: sub x0, x29, #0x70 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(112)));
  /* 13ee48: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1306188));
  fn2_1b7d24(c);
  /* 13ee4c: sub x0, x29, #0x58 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(88)));
  /* 13ee50: sub x1, x29, #0x70 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(112)));
  /* 13ee54: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1306200));
  fn2_1bc2f8(c);
  /* 13ee58: sub x0, x29, #0x70 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(112)));
  /* 13ee5c: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1306208));
  fn2_1ccd9c(c);
  /* 13ee60: add x0, sp, #0x80 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(128)));
  /* 13ee64: sub x1, x29, #0x58 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(88)));
  /* 13ee68: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1306220));
  fn2_1bbfa0(c);
  /* 13ee6c: sub x1, x29, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 13ee70: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1306228));
  fn2_1bcf04(c);
  /* 13ee74: sub x0, x29, #0x58 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(88)));
  /* 13ee78: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1306236));
  fn2_1bc620(c);
  /* 13ee7c: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 13ee80: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1306244));
  fn2_1bc620(c);
  /* 13ee84: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 13ee88: add x1, sp, #0x80 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(128)));
  /* 13ee8c: sub x21, x29, #0x30 */
  ARC_X_W(c, 21, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 13ee90: bl #0x1bc530 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1306260));
  fn2_1bc530(c);
  /* 13ee94: add x0, x19, #0x220 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(544)));
  /* 13ee98: sub x1, x29, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 13ee9c: bl #0x1db988 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1306272));
  fn2_1db988(c);
  /* 13eea0: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 13eea4: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1306280));
  fn2_1bc620(c);
  /* 13eea8: tbnz w20, #0, #0x13ef68 */
  if (((ARC_W_R(c, 20)) >> 0 & 1) != 0) goto L_13ef68;
  /* 13eeac: adrp x1, #0x1c000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(114688)));
  /* 13eeb0: add x1, x1, #0xcad */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3245)));
  /* 13eeb4: add x0, sp, #0x38 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(56)));
  /* 13eeb8: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1306300));
  fn2_1b7d24(c);
  /* 13eebc: ldur x1, [x29, #-0x38] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 29) + INT64_C(-56))));
  /* 13eec0: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 13eec4: bl #0x1bc290 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1306312));
  fn2_1bc290(c);
  /* 13eec8: add x0, x21, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) + UINT64_C(24)));
  /* 13eecc: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1306320));
  fn2_1bc084(c);
  /* 13eed0: sub x0, x29, #0x58 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(88)));
  /* 13eed4: bl #0x1db4a4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1306328));
  fn2_1db4a4(c);
  /* 13eed8: sub x0, x29, #0x58 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(88)));
  /* 13eedc: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* 13eee0: bl #0x1db9f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1306340));
  fn2_1db9f0(c);
  /* 13eee4: sub x0, x29, #0x58 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(88)));
  /* 13eee8: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 13eeec: bl #0x1bbf48 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1306352));
  fn2_1bbf48(c);
  /* 13eef0: sub x1, x29, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 13eef4: bl #0x1bce10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1306360));
  fn2_1bce10(c);
  /* 13eef8: add x8, sp, #0x50 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(80)));
  /* 13eefc: add x0, sp, #0x38 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(56)));
  /* 13ef00: sub x1, x29, #0x58 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(88)));
  /* 13ef04: bl #0x1d0298 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1306376));
  fn2_1d0298(c);
  /* 13ef08: sub x0, x29, #0x58 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(88)));
  /* 13ef0c: bl #0x1db788 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1306384));
  fn2_1db788(c);
  /* 13ef10: add x0, x21, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) + UINT64_C(24)));
  /* 13ef14: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1306392));
  fn2_1bc620(c);
  /* 13ef18: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 13ef1c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1306400));
  fn2_1bc620(c);
  /* 13ef20: sub x0, x29, #0x58 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(88)));
  /* 13ef24: add x1, sp, #0x50 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(80)));
  /* 13ef28: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1306412));
  fn2_1bc2f8(c);
  /* 13ef2c: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 13ef30: sub x1, x29, #0x58 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(88)));
  /* 13ef34: bl #0x1bc0b8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1306424));
  fn2_1bc0b8(c);
  /* 13ef38: sub x0, x29, #0x70 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(112)));
  /* 13ef3c: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* 13ef40: stur x21, [x29, #-0x70] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-112)), ARC_X_R(c, 21));
  /* 13ef44: bl #0x24a164 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1306440));
  fn2_24a164(c);
  /* 13ef48: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 13ef4c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1306448));
  fn2_1bc620(c);
  /* 13ef50: sub x0, x29, #0x58 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(88)));
  /* 13ef54: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1306456));
  fn2_1bc620(c);
  /* 13ef58: add x0, sp, #0x50 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(80)));
  /* 13ef5c: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1306464));
  fn2_1ccd9c(c);
  /* 13ef60: add x0, sp, #0x38 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(56)));
  /* 13ef64: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1306472));
  fn2_1ccd9c(c);
L_13ef68:;
  /* 13ef68: adrp x1, #0x24000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(147456)));
  /* 13ef6c: add x1, x1, #0xac2 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2754)));
  /* 13ef70: add x0, sp, #0x70 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(112)));
  /* 13ef74: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1306488));
  fn2_1b7d24(c);
  /* 13ef78: adrp x1, #0x2a000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(172032)));
  /* 13ef7c: add x1, x1, #0x9cf */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2511)));
  /* 13ef80: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 13ef84: sub x20, x29, #0x30 */
  ARC_X_W(c, 20, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 13ef88: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1306508));
  fn2_1b7d24(c);
  /* 13ef8c: add x0, sp, #0x50 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(80)));
  /* 13ef90: sub x1, x29, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 13ef94: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1306520));
  fn2_1bc2f8(c);
  /* 13ef98: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 13ef9c: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1306528));
  fn2_1ccd9c(c);
  /* 13efa0: add x0, sp, #0x38 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(56)));
  /* 13efa4: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1306536));
  fn2_1bc084(c);
  /* 13efa8: sub x8, x29, #0x70 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(112)));
  /* 13efac: sub x0, x29, #0x40 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 13efb0: add x1, sp, #0x50 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(80)));
  /* 13efb4: add x2, sp, #0x38 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(56)));
  /* 13efb8: bl #0x1d9c5c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1306556));
  fn2_1d9c5c(c);
  /* 13efbc: add x8, sp, #0x68 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(104)));
  /* 13efc0: sub x0, x29, #0x70 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(112)));
  /* 13efc4: bl #0x1bc84c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1306568));
  fn2_1bc84c(c);
  /* 13efc8: ldur x2, [x29, #-0x38] */
  ARC_X_W(c, 2, arc_ld64((ARC_X_R(c, 29) + INT64_C(-56))));
  /* 13efcc: add x8, sp, #0x78 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(120)));
  /* 13efd0: add x0, sp, #0x70 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(112)));
  /* 13efd4: add x1, sp, #0x68 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(104)));
  /* 13efd8: bl #0x149508 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1306588));
  fn2_149508(c);
  /* 13efdc: sub x0, x29, #0x58 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(88)));
  /* 13efe0: add x1, sp, #0x78 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(120)));
  /* 13efe4: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1306600));
  fn2_1bc2f8(c);
  /* 13efe8: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 13efec: sub x1, x29, #0x58 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(88)));
  /* 13eff0: bl #0x1bc0b8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1306612));
  fn2_1bc0b8(c);
  /* 13eff4: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 13eff8: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* 13effc: str x20, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 20));
  /* 13f000: bl #0x24a164 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1306628));
  fn2_24a164(c);
  /* 13f004: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 13f008: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1306636));
  fn2_1bc620(c);
  /* 13f00c: sub x0, x29, #0x58 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(88)));
  /* 13f010: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1306644));
  fn2_1bc620(c);
  /* 13f014: add x0, sp, #0x78 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(120)));
  /* 13f018: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1306652));
  fn2_1ccd9c(c);
  /* 13f01c: add x0, sp, #0x68 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(104)));
  /* 13f020: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1306660));
  fn2_1ccd9c(c);
  /* 13f024: sub x0, x29, #0x70 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(112)));
  /* 13f028: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1306668));
  fn2_1bc620(c);
  /* 13f02c: add x0, sp, #0x38 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(56)));
  /* 13f030: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1306676));
  fn2_1bc620(c);
  /* 13f034: add x0, sp, #0x50 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(80)));
  /* 13f038: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1306684));
  fn2_1bc620(c);
  /* 13f03c: add x0, sp, #0x70 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(112)));
  /* 13f040: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1306692));
  fn2_1ccd9c(c);
  /* 13f044: ldr x8, [x19, #0x60] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(96))));
  /* 13f048: cmp x8, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(2));
  /* 13f04c: b.ne #0x13f154 */
  if (ARC_COND(c, 1)) goto L_13f154;
  /* 13f050: ldr x20, [x19, #0x30] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 19) + INT64_C(48))));
  /* 13f054: cbz x20, #0x13f154 */
  if ((ARC_X_R(c, 20)) == 0) goto L_13f154;
  /* 13f058: adrp x1, #0x23000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(143360)));
  /* 13f05c: add x1, x1, #0xde8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3560)));
  /* 13f060: add x0, sp, #0x50 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(80)));
  /* 13f064: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 13f068: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1306732));
  fn2_1b8fd4(c);
  /* 13f06c: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 13f070: add x1, sp, #0x50 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(80)));
  /* 13f074: bl #0x1bc44c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1306744));
  fn2_1bc44c(c);
  /* 13f078: sub x8, x29, #0x58 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(88)));
  /* 13f07c: sub x1, x29, #0x70 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(112)));
  /* 13f080: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 13f084: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* 13f088: stur x21, [x29, #-0x70] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-112)), ARC_X_R(c, 21));
  /* 13f08c: bl #0x221308 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1306768));
  fn2_221308(c);
  /* 13f090: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 13f094: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1306776));
  fn2_1bc620(c);
  /* 13f098: sub x0, x29, #0x58 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(88)));
  /* 13f09c: bl #0x1bc630 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1306784));
  fn2_1bc630(c);
  /* 13f0a0: tbz w0, #0, #0x13f144 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_13f144;
  /* 13f0a4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 13f0a8: bl #0x14cf9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1306796));
  fn2_14cf9c(c);
  /* 13f0ac: mov w20, w0 */
  ARC_W_W(c, 20, ARC_W_R(c, 0));
  /* 13f0b0: sub x0, x29, #0x58 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(88)));
  /* 13f0b4: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1306808));
  fn2_1bc620(c);
  /* 13f0b8: add x0, sp, #0x50 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(80)));
  /* 13f0bc: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1306816));
  fn2_1d2d24(c);
  /* 13f0c0: tbnz w20, #0, #0x13f154 */
  if (((ARC_W_R(c, 20)) >> 0 & 1) != 0) goto L_13f154;
  /* 13f0c4: ldr x19, [x19, #0x30] */
  ARC_X_W(c, 19, arc_ld64((ARC_X_R(c, 19) + INT64_C(48))));
  /* 13f0c8: adrp x1, #0x2b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(176128)));
  /* 13f0cc: add x1, x1, #0x419 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1049)));
  /* 13f0d0: sub x0, x29, #0x70 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(112)));
  /* 13f0d4: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 13f0d8: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1306844));
  fn2_1b8fd4(c);
  /* 13f0dc: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 13f0e0: sub x1, x29, #0x70 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(112)));
  /* 13f0e4: sub x20, x29, #0x30 */
  ARC_X_W(c, 20, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 13f0e8: bl #0x1bc44c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1306860));
  fn2_1bc44c(c);
  /* 13f0ec: add x8, sp, #0x20 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(32)));
  /* 13f0f0: sub x1, x29, #0x58 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(88)));
  /* 13f0f4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 13f0f8: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* 13f0fc: stur x20, [x29, #-0x58] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-88)), ARC_X_R(c, 20));
  /* 13f100: bl #0x221308 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1306884));
  fn2_221308(c);
  /* 13f104: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 13f108: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1306892));
  fn2_1bc620(c);
  /* 13f10c: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 13f110: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1306900));
  fn2_1bc620(c);
  /* 13f114: sub x0, x29, #0x70 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(112)));
  /* 13f118: b #0x13f150 */
  goto L_13f150;
L_13f11c:;
  /* 13f11c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 13f120: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 13f124: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* 13f128: ldp x20, x19, [sp, #0x140] */
  { const uint64_t _pa = ((c)->sp + INT64_C(320));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 13f12c: ldr x28, [sp, #0x110] */
  ARC_X_W(c, 28, arc_ld64(((c)->sp + INT64_C(272))));
  /* 13f130: ldp x22, x21, [sp, #0x130] */
  { const uint64_t _pa = ((c)->sp + INT64_C(304));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 13f134: ldp x24, x23, [sp, #0x120] */
  { const uint64_t _pa = ((c)->sp + INT64_C(288));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 13f138: ldp x29, x30, [sp, #0x100] */
  { const uint64_t _pa = ((c)->sp + INT64_C(256));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 13f13c: add sp, sp, #0x150 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(336)));
  /* 13f140: b #0x162d98 */
  fn2_162d98(c); return;
L_13f144:;
  /* 13f144: sub x0, x29, #0x58 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(88)));
  /* 13f148: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1306956));
  fn2_1bc620(c);
  /* 13f14c: add x0, sp, #0x50 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(80)));
L_13f150:;
  /* 13f150: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1306964));
  fn2_1d2d24(c);
L_13f154:;
  /* 13f154: add x0, sp, #0x80 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(128)));
  /* 13f158: bl #0x1d97fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1306972));
  fn2_1d97fc(c);
  /* 13f15c: sub x0, x29, #0x78 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(120)));
  /* 13f160: bl #0x1d97fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1306980));
  fn2_1d97fc(c);
  /* 13f164: sub x0, x29, #0x40 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 13f168: bl #0x1d97fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1306988));
  fn2_1d97fc(c);
L_13f16c:;
  /* 13f16c: ldp x20, x19, [sp, #0x140] */
  { const uint64_t _pa = ((c)->sp + INT64_C(320));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 13f170: ldr x28, [sp, #0x110] */
  ARC_X_W(c, 28, arc_ld64(((c)->sp + INT64_C(272))));
  /* 13f174: ldp x22, x21, [sp, #0x130] */
  { const uint64_t _pa = ((c)->sp + INT64_C(304));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 13f178: ldp x24, x23, [sp, #0x120] */
  { const uint64_t _pa = ((c)->sp + INT64_C(288));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 13f17c: ldp x29, x30, [sp, #0x100] */
  { const uint64_t _pa = ((c)->sp + INT64_C(256));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 13f180: add sp, sp, #0x150 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(336)));
  /* 13f184: ret  */
  return;
L_13f188:;
  /* 13f188: add x0, x19, #0x6a */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(106)));
  /* 13f18c: bl #0x1db794 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1307024));
  fn2_1db794(c);
  /* 13f190: mov x4, x0 */
  ARC_X_W(c, 4, ARC_X_R(c, 0));
  /* 13f194: adrp x0, #0x1c000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(114688)));
  /* 13f198: add x0, x0, #0x12a */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(298)));
  /* 13f19c: adrp x1, #0x1c000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(114688)));
  /* 13f1a0: add x1, x1, #0x1fd */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(509)));
  /* 13f1a4: adrp x5, #0x20000 */
  ARC_X_W(c, 5, (arc_image_bases[2] + UINT64_C(131072)));
  /* 13f1a8: add x5, x5, #0x2e */
  ARC_X_W(c, 5, (ARC_X_R(c, 5) + UINT64_C(46)));
  /* 13f1ac: adrp x6, #0x23000 */
  ARC_X_W(c, 6, (arc_image_bases[2] + UINT64_C(143360)));
  /* 13f1b0: add x6, x6, #0x1fd */
  ARC_X_W(c, 6, (ARC_X_R(c, 6) + UINT64_C(509)));
  /* 13f1b4: adrp x7, #0x1e000 */
  ARC_X_W(c, 7, (arc_image_bases[2] + UINT64_C(122880)));
  /* 13f1b8: add x7, x7, #0xb6f */
  ARC_X_W(c, 7, (ARC_X_R(c, 7) + UINT64_C(2927)));
  /* 13f1bc: mov w2, #0xc7 */
  ARC_W_W(c, 2, UINT64_C(199));
  /* 13f1c0: mov x3, x20 */
  ARC_X_W(c, 3, ARC_X_R(c, 20));
  /* 13f1c4: strb wzr, [sp, #8] */
  arc_st8(((c)->sp + INT64_C(8)), ARC_W_R(c, 31));
  /* 13f1c8: strb wzr, [sp] */
  arc_st8((c)->sp, ARC_W_R(c, 31));
  /* 13f1cc: bl #0x1b5870 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1307088));
  fn2_1b5870(c);
  /* 13f1d0: b #0x13f16c */
  goto L_13f16c;
}

void fn2_1467e8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077193192));
  /* 1467e8: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* 1467ec: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1467f0: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1467f4: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1467f8: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 1467fc: mov w20, w2 */
  ARC_W_W(c, 20, ARC_W_R(c, 2));
  /* 146800: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* 146804: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 146808: bl #0x217978 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1337356));
  fn2_217978(c);
  /* 14680c: cbz x0, #0x146888 */
  if ((ARC_X_R(c, 0)) == 0) goto L_146888;
  /* 146810: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 146814: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 146818: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 14681c: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* 146820: bl #0x1d78bc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1337380));
  fn2_1d78bc(c);
  /* 146824: adrp x1, #0x29000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(167936)));
  /* 146828: add x1, x1, #0xe0b */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3595)));
  /* 14682c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 146830: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 146834: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1337400));
  fn2_1b8fd4(c);
  /* 146838: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 14683c: add x2, sp, #0x10 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(16)));
  /* 146840: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 146844: bl #0x221ecc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1337416));
  fn2_221ecc(c);
  /* 146848: mov w21, w0 */
  ARC_W_W(c, 21, ARC_W_R(c, 0));
  /* 14684c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 146850: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1337428));
  fn2_1d2d24(c);
  /* 146854: tbnz w21, #0, #0x1468a0 */
  if (((ARC_W_R(c, 21)) >> 0 & 1) != 0) goto L_1468a0;
  /* 146858: tbz w20, #0, #0x1468a0 */
  if (((ARC_W_R(c, 20)) >> 0 & 1) == 0) goto L_1468a0;
  /* 14685c: adrp x1, #0x29000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(167936)));
  /* 146860: add x1, x1, #0xe0b */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3595)));
  /* 146864: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 146868: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 14686c: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1337456));
  fn2_1b8fd4(c);
  /* 146870: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 146874: add x2, sp, #0x10 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(16)));
  /* 146878: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 14687c: mov w3, wzr */
  ARC_W_W(c, 3, ARC_W_R(c, 31));
  /* 146880: bl #0x221ca0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1337476));
  fn2_221ca0(c);
  /* 146884: b #0x1468cc */
  goto L_1468cc;
L_146888:;
  /* 146888: tbnz w20, #0, #0x1468f0 */
  if (((ARC_W_R(c, 20)) >> 0 & 1) != 0) goto L_1468f0;
  /* 14688c: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 146890: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 146894: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 146898: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* 14689c: ret  */
  return;
L_1468a0:;
  /* 1468a0: tbz w21, #0, #0x1468d4 */
  if (((ARC_W_R(c, 21)) >> 0 & 1) == 0) goto L_1468d4;
  /* 1468a4: tbnz w20, #0, #0x1468d4 */
  if (((ARC_W_R(c, 20)) >> 0 & 1) != 0) goto L_1468d4;
  /* 1468a8: adrp x1, #0x29000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(167936)));
  /* 1468ac: add x1, x1, #0xe0b */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3595)));
  /* 1468b0: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1468b4: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1468b8: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1337532));
  fn2_1b8fd4(c);
  /* 1468bc: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 1468c0: add x2, sp, #0x10 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(16)));
  /* 1468c4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1468c8: bl #0x221dc4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1337548));
  fn2_221dc4(c);
L_1468cc:;
  /* 1468cc: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1468d0: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1337556));
  fn2_1d2d24(c);
L_1468d4:;
  /* 1468d4: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 1468d8: bl #0x1d79fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1337564));
  fn2_1d79fc(c);
  /* 1468dc: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1468e0: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1468e4: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1468e8: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* 1468ec: ret  */
  return;
L_1468f0:;
  /* 1468f0: adrp x0, #0x28000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(163840)));
  /* 1468f4: add x0, x0, #0xa0a */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2570)));
  /* 1468f8: adrp x1, #0x1c000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(114688)));
  /* 1468fc: add x1, x1, #0x1fd */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(509)));
  /* 146900: adrp x3, #0x25000 */
  ARC_X_W(c, 3, (arc_image_bases[2] + UINT64_C(151552)));
  /* 146904: add x3, x3, #0xea5 */
  ARC_X_W(c, 3, (ARC_X_R(c, 3) + UINT64_C(3749)));
  /* 146908: adrp x4, #0x20000 */
  ARC_X_W(c, 4, (arc_image_bases[2] + UINT64_C(131072)));
  /* 14690c: add x4, x4, #0x2c8 */
  ARC_X_W(c, 4, (ARC_X_R(c, 4) + UINT64_C(712)));
  /* 146910: mov w2, #0x22 */
  ARC_W_W(c, 2, UINT64_C(34));
  /* 146914: mov w5, wzr */
  ARC_W_W(c, 5, ARC_W_R(c, 31));
  /* 146918: mov w6, wzr */
  ARC_W_W(c, 6, ARC_W_R(c, 31));
  /* 14691c: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 146920: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 146924: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 146928: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* 14692c: b #0x1b5598 */
  fn2_1b5598(c); return;
}

void fn2_149e90(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077207184));
  /* 149e90: sub sp, sp, #0xb0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(176)));
  /* 149e94: stp x29, x30, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 149e98: stp x24, x23, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 149e9c: stp x22, x21, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 149ea0: stp x20, x19, [sp, #0xa0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(160));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 149ea4: add x29, sp, #0x70 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(112)));
  /* 149ea8: mov x20, x2 */
  ARC_X_W(c, 20, ARC_X_R(c, 2));
  /* 149eac: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* 149eb0: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 149eb4: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* 149eb8: bl #0x205d68 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1351356));
  fn2_205d68(c);
  /* 149ebc: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 149ec0: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* 149ec4: bl #0x2075e8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1351368));
  fn2_2075e8(c);
  /* 149ec8: tbz w0, #0, #0x149f10 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_149f10;
  /* 149ecc: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 149ed0: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 149ed4: bl #0x2076e8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1351384));
  fn2_2076e8(c);
  /* 149ed8: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 149edc: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* 149ee0: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 149ee4: add x23, sp, #0x28 */
  ARC_X_W(c, 23, ((c)->sp + UINT64_C(40)));
  /* 149ee8: bl #0x1bc44c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1351404));
  fn2_1bc44c(c);
  /* 149eec: add x21, x23, #0x18 */
  ARC_X_W(c, 21, (ARC_X_R(c, 23) + UINT64_C(24)));
  /* 149ef0: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 149ef4: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 149ef8: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1351420));
  fn2_1bc2f8(c);
  /* 149efc: stp x23, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 23));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 149f00: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* 149f04: mov x8, x19 */
  ARC_X_W(c, 8, ARC_X_R(c, 19));
  /* 149f08: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 149f0c: b #0x149fc0 */
  goto L_149fc0;
L_149f10:;
  /* 149f10: bl #0x1e98c4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1351444));
  fn2_1e98c4(c);
  /* 149f14: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 149f18: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* 149f1c: bl #0x1e9e44 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1351456));
  fn2_1e9e44(c);
  /* 149f20: tbz w0, #0, #0x149f80 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_149f80;
  /* 149f24: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* 149f28: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 149f2c: add x24, sp, #0x28 */
  ARC_X_W(c, 24, ((c)->sp + UINT64_C(40)));
  /* 149f30: bl #0x1bc44c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1351476));
  fn2_1bc44c(c);
  /* 149f34: add x22, x24, #0x18 */
  ARC_X_W(c, 22, (ARC_X_R(c, 24) + UINT64_C(24)));
  /* 149f38: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 149f3c: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 149f40: bl #0x1bc44c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1351492));
  fn2_1bc44c(c);
  /* 149f44: add x21, x24, #0x30 */
  ARC_X_W(c, 21, (ARC_X_R(c, 24) + UINT64_C(48)));
  /* 149f48: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 149f4c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 149f50: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1351508));
  fn2_1bc2f8(c);
  /* 149f54: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* 149f58: mov x8, x19 */
  ARC_X_W(c, 8, ARC_X_R(c, 19));
  /* 149f5c: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 149f60: mov w2, #3 */
  ARC_W_W(c, 2, UINT64_C(3));
  /* 149f64: stp x24, x22, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 22));
  }
  /* 149f68: str x21, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 21));
  /* 149f6c: bl #0x1eb0c8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1351536));
  fn2_1eb0c8(c);
  /* 149f70: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 149f74: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1351544));
  fn2_1bc620(c);
  /* 149f78: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 149f7c: b #0x149fcc */
  goto L_149fcc;
L_149f80:;
  /* 149f80: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 149f84: bl #0xae4cc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1351560));
  fn2_ae4cc(c);
  /* 149f88: cbz x0, #0x149ff0 */
  if ((ARC_X_R(c, 0)) == 0) goto L_149ff0;
  /* 149f8c: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* 149f90: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* 149f94: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 149f98: add x22, sp, #0x28 */
  ARC_X_W(c, 22, ((c)->sp + UINT64_C(40)));
  /* 149f9c: bl #0x1bc44c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1351584));
  fn2_1bc44c(c);
  /* 149fa0: add x21, x22, #0x18 */
  ARC_X_W(c, 21, (ARC_X_R(c, 22) + UINT64_C(24)));
  /* 149fa4: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 149fa8: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 149fac: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1351600));
  fn2_1bc2f8(c);
  /* 149fb0: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* 149fb4: mov x8, x19 */
  ARC_X_W(c, 8, ARC_X_R(c, 19));
  /* 149fb8: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 149fbc: stp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
L_149fc0:;
  /* 149fc0: mov w2, #2 */
  ARC_W_W(c, 2, UINT64_C(2));
  /* 149fc4: bl #0x221308 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1351624));
  fn2_221308(c);
  /* 149fc8: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
L_149fcc:;
  /* 149fcc: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1351632));
  fn2_1bc620(c);
  /* 149fd0: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* 149fd4: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1351640));
  fn2_1bc620(c);
  /* 149fd8: ldp x20, x19, [sp, #0xa0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(160));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 149fdc: ldp x22, x21, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 149fe0: ldp x24, x23, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 149fe4: ldp x29, x30, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 149fe8: add sp, sp, #0xb0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(176)));
  /* 149fec: ret  */
  return;
L_149ff0:;
  /* 149ff0: adrp x1, #0x1a000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(106496)));
  /* 149ff4: add x1, x1, #0xabd */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2749)));
  /* 149ff8: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 149ffc: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1351680));
  fn2_1b7d24(c);
  /* 14a000: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 14a004: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 14a008: bl #0x1cccb8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1351692));
  fn2_1cccb8(c);
  /* 14a00c: add x8, sp, #0x28 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(40)));
  /* 14a010: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 14a014: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 14a018: bl #0x1cf868 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1351708));
  fn2_1cf868(c);
  /* 14a01c: adrp x0, #0x23000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(143360)));
  /* 14a020: add x0, x0, #0xe9b */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3739)));
  /* 14a024: adrp x1, #0x29000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(167936)));
  /* 14a028: add x1, x1, #0x4e9 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1257)));
  /* 14a02c: adrp x3, #0x19000 */
  ARC_X_W(c, 3, (arc_image_bases[2] + UINT64_C(102400)));
  /* 14a030: add x3, x3, #0xf4a */
  ARC_X_W(c, 3, (ARC_X_R(c, 3) + UINT64_C(3914)));
  /* 14a034: add x4, sp, #0x28 */
  ARC_X_W(c, 4, ((c)->sp + UINT64_C(40)));
  /* 14a038: mov w2, #0x4c */
  ARC_W_W(c, 2, UINT64_C(76));
  /* 14a03c: mov w5, wzr */
  ARC_W_W(c, 5, ARC_W_R(c, 31));
  /* 14a040: mov w6, wzr */
  ARC_W_W(c, 6, ARC_W_R(c, 31));
  /* 14a044: bl #0x1b5698 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1351752));
  fn2_1b5698(c);
  /* 14a048: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* 14a04c: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1351760));
  fn2_1ccd9c(c);
  /* 14a050: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 14a054: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1351768));
  fn2_1ccd9c(c);
  /* 14a058: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 14a05c: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1351776));
  fn2_1ccd9c(c);
  /* 14a060: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 14a064: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1351784));
  fn2_1bc084(c);
  /* 14a068: ldp x20, x19, [sp, #0xa0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(160));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 14a06c: ldp x22, x21, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 14a070: ldp x24, x23, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 14a074: ldp x29, x30, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 14a078: add sp, sp, #0xb0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(176)));
  /* 14a07c: ret  */
  return;
}

void fn2_14c268(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077216360));
  /* 14c268: sub sp, sp, #0x80 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(128)));
  /* 14c26c: stp x29, x30, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 14c270: stp x22, x21, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 14c274: stp x20, x19, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 14c278: add x29, sp, #0x50 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(80)));
  /* 14c27c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 14c280: add x0, x0, #0x100 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(256)));
  /* 14c284: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 14c288: bl #0x1d06b8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1360524));
  fn2_1d06b8(c);
  /* 14c28c: adrp x1, #0x2b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(176128)));
  /* 14c290: add x1, x1, #0x628 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1576)));
  /* 14c294: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 14c298: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 14c29c: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1360544));
  fn2_1b8fd4(c);
  /* 14c2a0: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 14c2a4: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 14c2a8: add x22, sp, #0x20 */
  ARC_X_W(c, 22, ((c)->sp + UINT64_C(32)));
  /* 14c2ac: bl #0x1bc44c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1360560));
  fn2_1bc44c(c);
  /* 14c2b0: add x21, x22, #0x18 */
  ARC_X_W(c, 21, (ARC_X_R(c, 22) + UINT64_C(24)));
  /* 14c2b4: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 14c2b8: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 14c2bc: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1360576));
  fn2_1bc2f8(c);
  /* 14c2c0: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* 14c2c4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 14c2c8: mov w2, #2 */
  ARC_W_W(c, 2, UINT64_C(2));
  /* 14c2cc: stp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 14c2d0: bl #0x221204 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1360596));
  fn2_221204(c);
  /* 14c2d4: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 14c2d8: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1360604));
  fn2_1bc620(c);
  /* 14c2dc: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 14c2e0: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1360612));
  fn2_1bc620(c);
  /* 14c2e4: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 14c2e8: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1360620));
  fn2_1d2d24(c);
  /* 14c2ec: adrp x1, #0x2a000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(172032)));
  /* 14c2f0: add x1, x1, #0xa4b */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2635)));
  /* 14c2f4: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 14c2f8: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 14c2fc: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1360640));
  fn2_1b8fd4(c);
  /* 14c300: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 14c304: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 14c308: bl #0x1bc44c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1360652));
  fn2_1bc44c(c);
  /* 14c30c: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* 14c310: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 14c314: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* 14c318: str x22, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 22));
  /* 14c31c: bl #0x221204 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1360672));
  fn2_221204(c);
  /* 14c320: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 14c324: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1360680));
  fn2_1bc620(c);
  /* 14c328: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 14c32c: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1360688));
  fn2_1d2d24(c);
  /* 14c330: ldp x20, x19, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 14c334: ldp x22, x21, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 14c338: ldp x29, x30, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 14c33c: add sp, sp, #0x80 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(128)));
  /* 14c340: ret  */
  return;
}

void fn2_152690(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077242000));
  /* 152690: sub sp, sp, #0xc0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(192)));
  /* 152694: stp x29, x30, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 152698: str x23, [sp, #0x90] */
  arc_st64(((c)->sp + INT64_C(144)), ARC_X_R(c, 23));
  /* 15269c: stp x22, x21, [sp, #0xa0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(160));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1526a0: stp x20, x19, [sp, #0xb0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(176));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1526a4: add x29, sp, #0x80 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(128)));
  /* 1526a8: ldr x19, [x0, #0x30] */
  ARC_X_W(c, 19, arc_ld64((ARC_X_R(c, 0) + INT64_C(48))));
  /* 1526ac: cbz x19, #0x152758 */
  if ((ARC_X_R(c, 19)) == 0) goto L_152758;
  /* 1526b0: mov w20, w2 */
  ARC_W_W(c, 20, ARC_W_R(c, 2));
  /* 1526b4: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* 1526b8: adrp x1, #0x2c000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(180224)));
  /* 1526bc: add x1, x1, #0x479 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1145)));
  /* 1526c0: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1526c4: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1526c8: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1386188));
  fn2_1b8fd4(c);
  /* 1526cc: add x0, sp, #0x38 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(56)));
  /* 1526d0: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1526d4: add x23, sp, #0x38 */
  ARC_X_W(c, 23, ((c)->sp + UINT64_C(56)));
  /* 1526d8: bl #0x1bc44c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1386204));
  fn2_1bc44c(c);
  /* 1526dc: add x22, x23, #0x18 */
  ARC_X_W(c, 22, (ARC_X_R(c, 23) + UINT64_C(24)));
  /* 1526e0: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 1526e4: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 1526e8: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1386220));
  fn2_1bc2f8(c);
  /* 1526ec: add x21, x23, #0x30 */
  ARC_X_W(c, 21, (ARC_X_R(c, 23) + UINT64_C(48)));
  /* 1526f0: and w1, w20, #1 */
  ARC_W_W(c, 1, (ARC_W_R(c, 20) & UINT64_C(1)));
  /* 1526f4: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 1526f8: bl #0x1bc25c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1386236));
  fn2_1bc25c(c);
  /* 1526fc: add x8, sp, #8 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(8)));
  /* 152700: add x1, sp, #0x20 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(32)));
  /* 152704: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 152708: mov w2, #3 */
  ARC_W_W(c, 2, UINT64_C(3));
  /* 15270c: stp x23, x22, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 23));
    arc_st64(_pa + 8, ARC_X_R(c, 22));
  }
  /* 152710: str x21, [sp, #0x30] */
  arc_st64(((c)->sp + INT64_C(48)), ARC_X_R(c, 21));
  /* 152714: bl #0x221308 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1386264));
  fn2_221308(c);
  /* 152718: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 15271c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1386272));
  fn2_1bc620(c);
  /* 152720: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 152724: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1386280));
  fn2_1bc620(c);
  /* 152728: add x0, sp, #0x38 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(56)));
  /* 15272c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1386288));
  fn2_1bc620(c);
  /* 152730: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 152734: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1386296));
  fn2_1bc620(c);
  /* 152738: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 15273c: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1386304));
  fn2_1d2d24(c);
  /* 152740: ldp x20, x19, [sp, #0xb0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(176));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 152744: ldr x23, [sp, #0x90] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(144))));
  /* 152748: ldp x22, x21, [sp, #0xa0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(160));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 15274c: ldp x29, x30, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 152750: add sp, sp, #0xc0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(192)));
  /* 152754: ret  */
  return;
L_152758:;
  /* 152758: adrp x0, #0x26000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(155648)));
  /* 15275c: add x0, x0, #0x770 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1904)));
  /* 152760: adrp x1, #0x1a000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(106496)));
  /* 152764: add x1, x1, #0xacd */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2765)));
  /* 152768: adrp x3, #0x2e000 */
  ARC_X_W(c, 3, (arc_image_bases[2] + UINT64_C(188416)));
  /* 15276c: add x3, x3, #0x28a */
  ARC_X_W(c, 3, (ARC_X_R(c, 3) + UINT64_C(650)));
  /* 152770: mov w2, #0x21f */
  ARC_W_W(c, 2, UINT64_C(543));
  /* 152774: mov w4, wzr */
  ARC_W_W(c, 4, ARC_W_R(c, 31));
  /* 152778: mov w5, wzr */
  ARC_W_W(c, 5, ARC_W_R(c, 31));
  /* 15277c: ldp x20, x19, [sp, #0xb0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(176));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 152780: ldr x23, [sp, #0x90] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(144))));
  /* 152784: ldp x22, x21, [sp, #0xa0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(160));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 152788: ldp x29, x30, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 15278c: add sp, sp, #0xc0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(192)));
  /* 152790: b #0x1b54b0 */
  fn2_1b54b0(c); return;
}

void fn2_159398(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077269912));
  /* 159398: sub sp, sp, #0xa0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(160)));
  /* 15939c: stp x29, x30, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1593a0: stp x22, x21, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1593a4: stp x20, x19, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1593a8: add x29, sp, #0x70 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(112)));
  /* 1593ac: tbnz x1, #0x3f, #0x159520 */
  if (((ARC_X_R(c, 1)) >> 63 & 1) != 0) goto L_159520;
  /* 1593b0: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 1593b4: add x0, x0, #0x6a */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(106)));
  /* 1593b8: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 1593bc: bl #0x1db794 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1414080));
  fn2_1db794(c);
  /* 1593c0: cmp x0, x19 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 19));
  /* 1593c4: b.le #0x159520 */
  if (ARC_COND(c, 13)) goto L_159520;
  /* 1593c8: add x0, x20, #0x6a */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(106)));
  /* 1593cc: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 1593d0: bl #0x1bbf38 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1414100));
  fn2_1bbf38(c);
  /* 1593d4: add x8, sp, #0x38 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(56)));
  /* 1593d8: bl #0x1bccb8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1414108));
  fn2_1bccb8(c);
  /* 1593dc: adrp x1, #0x26000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(155648)));
  /* 1593e0: add x1, x1, #0x6cc */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1740)));
  /* 1593e4: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 1593e8: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1414124));
  fn2_1b7d24(c);
  /* 1593ec: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 1593f0: sub x1, x29, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 1593f4: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1414136));
  fn2_1bc2f8(c);
  /* 1593f8: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 1593fc: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1414144));
  fn2_1ccd9c(c);
  /* 159400: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 159404: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* 159408: bl #0x1bc25c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1414156));
  fn2_1bc25c(c);
  /* 15940c: sub x8, x29, #0x30 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 159410: add x0, sp, #0x38 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(56)));
  /* 159414: add x1, sp, #0x20 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(32)));
  /* 159418: add x2, sp, #8 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(8)));
  /* 15941c: bl #0x1d9c5c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1414176));
  fn2_1d9c5c(c);
  /* 159420: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 159424: bl #0x1bc630 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1414184));
  fn2_1bc630(c);
  /* 159428: mov w21, w0 */
  ARC_W_W(c, 21, ARC_W_R(c, 0));
  /* 15942c: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 159430: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1414196));
  fn2_1bc620(c);
  /* 159434: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 159438: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1414204));
  fn2_1bc620(c);
  /* 15943c: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 159440: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1414212));
  fn2_1bc620(c);
  /* 159444: mov w22, wzr */
  ARC_W_W(c, 22, ARC_W_R(c, 31));
  /* 159448: tbnz w21, #0, #0x159574 */
  if (((ARC_W_R(c, 21)) >> 0 & 1) != 0) goto L_159574;
  /* 15944c: ldr x20, [x20, #0x20] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 20) + INT64_C(32))));
  /* 159450: cbz x20, #0x159538 */
  if ((ARC_X_R(c, 20)) == 0) goto L_159538;
  /* 159454: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* 159458: add x1, x1, #0x5a */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(90)));
  /* 15945c: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 159460: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 159464: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1414248));
  fn2_1b8fd4(c);
  /* 159468: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 15946c: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 159470: sub x22, x29, #0x30 */
  ARC_X_W(c, 22, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 159474: bl #0x1bc44c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1414264));
  fn2_1bc44c(c);
  /* 159478: add x21, x22, #0x18 */
  ARC_X_W(c, 21, (ARC_X_R(c, 22) + UINT64_C(24)));
  /* 15947c: add x1, x19, #1 */
  ARC_X_W(c, 1, (ARC_X_R(c, 19) + UINT64_C(1)));
  /* 159480: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 159484: bl #0x1bc290 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1414280));
  fn2_1bc290(c);
  /* 159488: add x8, sp, #0x20 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(32)));
  /* 15948c: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 159490: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 159494: mov w2, #2 */
  ARC_W_W(c, 2, UINT64_C(2));
  /* 159498: stp x22, x21, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 15949c: bl #0x221308 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1414304));
  fn2_221308(c);
  /* 1594a0: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 1594a4: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1414312));
  fn2_1bc620(c);
  /* 1594a8: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 1594ac: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1414320));
  fn2_1bc620(c);
  /* 1594b0: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 1594b4: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1414328));
  fn2_1d2d24(c);
  /* 1594b8: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 1594bc: bl #0x1bcc90 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1414336));
  fn2_1bcc90(c);
  /* 1594c0: cbz w0, #0x159540 */
  if ((ARC_W_R(c, 0)) == 0) goto L_159540;
  /* 1594c4: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 1594c8: bl #0x1bcc90 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1414348));
  fn2_1bcc90(c);
  /* 1594cc: cmp w0, #0x18 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(24));
  /* 1594d0: b.ne #0x1594e0 */
  if (ARC_COND(c, 1)) goto L_1594e0;
  /* 1594d4: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 1594d8: bl #0x1bcbbc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1414364));
  fn2_1bcbbc(c);
  /* 1594dc: cbz x0, #0x159540 */
  if ((ARC_X_R(c, 0)) == 0) goto L_159540;
L_1594e0:;
  /* 1594e0: adrp x1, #0x24000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(147456)));
  /* 1594e4: add x1, x1, #0x993 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2451)));
  /* 1594e8: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1594ec: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1594f0: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1414388));
  fn2_1b8fd4(c);
  /* 1594f4: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 1594f8: bl #0x1bcc90 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1414396));
  fn2_1bcc90(c);
  /* 1594fc: cmp w0, #0x18 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(24));
  /* 159500: b.ne #0x159548 */
  if (ARC_COND(c, 1)) goto L_159548;
  /* 159504: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 159508: bl #0x1bcbbc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1414412));
  fn2_1bcbbc(c);
  /* 15950c: cbz x0, #0x159548 */
  if ((ARC_X_R(c, 0)) == 0) goto L_159548;
  /* 159510: sub x8, x29, #0x30 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 159514: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 159518: bl #0x21fe38 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1414428));
  fn2_21fe38(c);
  /* 15951c: b #0x159550 */
  goto L_159550;
L_159520:;
  /* 159520: and w0, wzr, #1 */
  ARC_W_W(c, 0, (ARC_W_R(c, 31) & UINT64_C(1)));
  /* 159524: ldp x20, x19, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 159528: ldp x22, x21, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 15952c: ldp x29, x30, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 159530: add sp, sp, #0xa0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(160)));
  /* 159534: ret  */
  return;
L_159538:;
  /* 159538: mov w22, wzr */
  ARC_W_W(c, 22, ARC_W_R(c, 31));
  /* 15953c: b #0x159574 */
  goto L_159574;
L_159540:;
  /* 159540: mov w22, wzr */
  ARC_W_W(c, 22, ARC_W_R(c, 31));
  /* 159544: b #0x15956c */
  goto L_15956c;
L_159548:;
  /* 159548: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 15954c: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1414480));
  fn2_1bc084(c);
L_159550:;
  /* 159550: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 159554: bl #0x1bc630 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1414488));
  fn2_1bc630(c);
  /* 159558: eor w22, w0, #1 */
  ARC_W_W(c, 22, (ARC_W_R(c, 0) ^ UINT64_C(1)));
  /* 15955c: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 159560: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1414500));
  fn2_1bc620(c);
  /* 159564: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 159568: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1414508));
  fn2_1d2d24(c);
L_15956c:;
  /* 15956c: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 159570: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1414516));
  fn2_1bc620(c);
L_159574:;
  /* 159574: add x0, sp, #0x38 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(56)));
  /* 159578: bl #0x1d97fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1414524));
  fn2_1d97fc(c);
  /* 15957c: and w0, w22, #1 */
  ARC_W_W(c, 0, (ARC_W_R(c, 22) & UINT64_C(1)));
  /* 159580: ldp x20, x19, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 159584: ldp x22, x21, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 159588: ldp x29, x30, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 15958c: add sp, sp, #0xa0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(160)));
  /* 159590: ret  */
  return;
}

void fn2_160a78(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077300344));
  /* 160a78: sub sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(112)));
  /* 160a7c: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 160a80: str x25, [sp, #0x30] */
  arc_st64(((c)->sp + INT64_C(48)), ARC_X_R(c, 25));
  /* 160a84: stp x24, x23, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 160a88: stp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 160a8c: stp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 160a90: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 160a94: ldrb w8, [x0, #0x68] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 0) + INT64_C(104))));
  /* 160a98: cbz w8, #0x160c5c */
  if ((ARC_W_R(c, 8)) == 0) goto L_160c5c;
  /* 160a9c: ldrb w8, [x0, #0x69] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 0) + INT64_C(105))));
  /* 160aa0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 160aa4: cbz w8, #0x160c5c */
  if ((ARC_W_R(c, 8)) == 0) goto L_160c5c;
  /* 160aa8: ldrb w8, [x19, #0x380] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(896))));
  /* 160aac: cbnz w8, #0x160abc */
  if ((ARC_W_R(c, 8)) != 0) goto L_160abc;
  /* 160ab0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 160ab4: bl #0x15005c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1444536));
  fn2_15005c(c);
  /* 160ab8: tbz w0, #0, #0x160aec */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_160aec;
L_160abc:;
  /* 160abc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 160ac0: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* 160ac4: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 160ac8: mov w3, wzr */
  ARC_W_W(c, 3, ARC_W_R(c, 31));
  /* 160acc: mov w4, wzr */
  ARC_W_W(c, 4, ARC_W_R(c, 31));
  /* 160ad0: ldp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 160ad4: ldr x25, [sp, #0x30] */
  ARC_X_W(c, 25, arc_ld64(((c)->sp + INT64_C(48))));
  /* 160ad8: ldp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 160adc: ldp x24, x23, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 160ae0: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 160ae4: add sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(112)));
  /* 160ae8: b #0x14d1a4 */
  fn2_14d1a4(c); return;
L_160aec:;
  /* 160aec: ldrb w8, [x19, #0x148] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(328))));
  /* 160af0: cbz w8, #0x160b00 */
  if ((ARC_W_R(c, 8)) == 0) goto L_160b00;
  /* 160af4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 160af8: mov x1, #-1 */
  ARC_X_W(c, 1, UINT64_C(18446744073709551615));
  /* 160afc: bl #0x15fce0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1444608));
  fn2_15fce0(c);
L_160b00:;
  /* 160b00: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 160b04: bl #0xfeaa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1444616));
  fn2_feaa0(c);
  /* 160b08: tbz w0, #0, #0x160c44 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_160c44;
  /* 160b0c: adrp x1, #0x24000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(147456)));
  /* 160b10: add x1, x1, #0x9a3 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2467)));
  /* 160b14: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 160b18: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 160b1c: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1444640));
  fn2_1b8fd4(c);
  /* 160b20: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 160b24: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 160b28: add x20, sp, #8 */
  ARC_X_W(c, 20, ((c)->sp + UINT64_C(8)));
  /* 160b2c: bl #0x1bc44c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1444656));
  fn2_1bc44c(c);
  /* 160b30: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 160b34: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 160b38: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* 160b3c: str x20, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 20));
  /* 160b40: bl #0x219104 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1444676));
  fn2_219104(c);
  /* 160b44: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 160b48: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1444684));
  fn2_1bc620(c);
  /* 160b4c: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 160b50: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1444692));
  fn2_1d2d24(c);
  /* 160b54: adrp x24, #0x257000 */
  ARC_X_W(c, 24, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 160b58: adrp x20, #0x23000 */
  ARC_X_W(c, 20, (arc_image_bases[2] + UINT64_C(143360)));
  /* 160b5c: add x20, x20, #0xfc */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) + UINT64_C(252)));
  /* 160b60: ldr x24, [x24, #0xfb0] */
  ARC_X_W(c, 24, arc_ld64((ARC_X_R(c, 24) + INT64_C(4016))));
  /* 160b64: adrp x21, #0x21000 */
  ARC_X_W(c, 21, (arc_image_bases[2] + UINT64_C(135168)));
  /* 160b68: add x21, x21, #0x978 */
  ARC_X_W(c, 21, (ARC_X_R(c, 21) + UINT64_C(2424)));
  /* 160b6c: mov w8, #7 */
  ARC_W_W(c, 8, UINT64_C(7));
  /* 160b70: adrp x22, #0x1e000 */
  ARC_X_W(c, 22, (arc_image_bases[2] + UINT64_C(122880)));
  /* 160b74: add x22, x22, #0x29c */
  ARC_X_W(c, 22, (ARC_X_R(c, 22) + UINT64_C(668)));
L_160b78:;
  /* 160b78: mov w25, w8 */
  ARC_W_W(c, 25, ARC_W_R(c, 8));
  /* 160b7c: add x8, sp, #8 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(8)));
  /* 160b80: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 160b84: bl #0xfe890 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1444744));
  fn2_fe890(c);
  /* 160b88: ldr x0, [sp, #8] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(8))));
  /* 160b8c: bl #0x1570d0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1444752));
  fn2_1570d0(c);
  /* 160b90: ldr x8, [sp, #8] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(8))));
  /* 160b94: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* 160b98: cbz x8, #0x160bb8 */
  if ((ARC_X_R(c, 8)) == 0) goto L_160bb8;
  /* 160b9c: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 160ba0: bl #0x225abc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1444772));
  fn2_225abc(c);
  /* 160ba4: tbz w0, #0, #0x160bb8 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_160bb8;
  /* 160ba8: ldr x8, [sp, #8] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(8))));
  /* 160bac: ldr x9, [x24] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 24)));
  /* 160bb0: ldr x0, [x8, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 160bb4: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1444792));
  arc_dispatch(c, ARC_X_R(c, 9));
L_160bb8:;
  /* 160bb8: cbz x23, #0x160bc4 */
  if ((ARC_X_R(c, 23)) == 0) goto L_160bc4;
  /* 160bbc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 160bc0: bl #0x16e974 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1444804));
  fn2_16e974(c);
L_160bc4:;
  /* 160bc4: add x8, sp, #8 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(8)));
  /* 160bc8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 160bcc: bl #0xfe890 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1444816));
  fn2_fe890(c);
  /* 160bd0: ldr x23, [sp, #8] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(8))));
  /* 160bd4: cbz x23, #0x160c1c */
  if ((ARC_X_R(c, 23)) == 0) goto L_160c1c;
  /* 160bd8: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 160bdc: bl #0x211b2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1444832));
  fn2_211b2c(c);
  /* 160be0: bl #0x21a330 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1444836));
  fn2_21a330(c);
  /* 160be4: mov w1, #0x28 */
  ARC_W_W(c, 1, UINT64_C(40));
  /* 160be8: bl #0x21d864 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1444844));
  fn2_21d864(c);
  /* 160bec: ldr x0, [sp, #8] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(8))));
  /* 160bf0: cbz x0, #0x160c0c */
  if ((ARC_X_R(c, 0)) == 0) goto L_160c0c;
L_160bf4:;
  /* 160bf4: bl #0x225abc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1444856));
  fn2_225abc(c);
  /* 160bf8: tbz w0, #0, #0x160c0c */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_160c0c;
  /* 160bfc: ldr x8, [sp, #8] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(8))));
  /* 160c00: ldr x9, [x24] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 24)));
  /* 160c04: ldr x0, [x8, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 160c08: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1444876));
  arc_dispatch(c, ARC_X_R(c, 9));
L_160c0c:;
  /* 160c0c: cbz x23, #0x160c44 */
  if ((ARC_X_R(c, 23)) == 0) goto L_160c44;
  /* 160c10: sub w8, w25, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 25) - UINT64_C(1)));
  /* 160c14: cbnz w25, #0x160b78 */
  if ((ARC_W_R(c, 25)) != 0) goto L_160b78;
  /* 160c18: b #0x160c44 */
  goto L_160c44;
L_160c1c:;
  /* 160c1c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 160c20: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 160c24: mov w2, #0x81 */
  ARC_W_W(c, 2, UINT64_C(129));
  /* 160c28: mov x3, x22 */
  ARC_X_W(c, 3, ARC_X_R(c, 22));
  /* 160c2c: mov w4, wzr */
  ARC_W_W(c, 4, ARC_W_R(c, 31));
  /* 160c30: mov w5, wzr */
  ARC_W_W(c, 5, ARC_W_R(c, 31));
  /* 160c34: bl #0x1b54b0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1444920));
  fn2_1b54b0(c);
  /* 160c38: ldr x0, [sp, #8] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(8))));
  /* 160c3c: cbnz x0, #0x160bf4 */
  if ((ARC_X_R(c, 0)) != 0) goto L_160bf4;
  /* 160c40: b #0x160c0c */
  goto L_160c0c;
L_160c44:;
  /* 160c44: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 160c48: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* 160c4c: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 160c50: mov w3, wzr */
  ARC_W_W(c, 3, ARC_W_R(c, 31));
  /* 160c54: mov w4, #1 */
  ARC_W_W(c, 4, UINT64_C(1));
  /* 160c58: bl #0x14d1a4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1444956));
  fn2_14d1a4(c);
L_160c5c:;
  /* 160c5c: ldp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 160c60: ldr x25, [sp, #0x30] */
  ARC_X_W(c, 25, arc_ld64(((c)->sp + INT64_C(48))));
  /* 160c64: ldp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 160c68: ldp x24, x23, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 160c6c: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 160c70: add sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(112)));
  /* 160c74: ret  */
  return;
}

void fn2_168510(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077331728));
  /* 168510: sub sp, sp, #0x120 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(288)));
  /* 168514: stp x29, x30, [sp, #0xd0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(208));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 168518: str x28, [sp, #0xe0] */
  arc_st64(((c)->sp + INT64_C(224)), ARC_X_R(c, 28));
  /* 16851c: stp x24, x23, [sp, #0xf0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(240));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 168520: stp x22, x21, [sp, #0x100] */
  { const uint64_t _pa = ((c)->sp + INT64_C(256));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 168524: stp x20, x19, [sp, #0x110] */
  { const uint64_t _pa = ((c)->sp + INT64_C(272));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 168528: add x29, sp, #0xd0 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(208)));
  /* 16852c: ldr x8, [x0, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(32))));
  /* 168530: str x1, [sp, #0x68] */
  arc_st64(((c)->sp + INT64_C(104)), ARC_X_R(c, 1));
  /* 168534: cbz x8, #0x168d04 */
  if ((ARC_X_R(c, 8)) == 0) goto L_168d04;
  /* 168538: mov x8, #-0x3333333333333334 */
  ARC_X_W(c, 8, UINT64_C(14757395258967641292));
  /* 16853c: mov w9, #0xa */
  ARC_W_W(c, 9, UINT64_C(10));
  /* 168540: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 168544: movk x8, #0xcccd */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(18446744073709486080)) | UINT64_C(52429)));
  /* 168548: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 16854c: cmp x1, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 1), UINT64_C(1));
  /* 168550: umulh x8, x1, x8 */
  ARC_X_W(c, 8, arc_umulh(ARC_X_R(c, 1), ARC_X_R(c, 8)));
  /* 168554: lsr x8, x8, #3 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(3)) & 63)));
  /* 168558: msub x23, x8, x9, x1 */
  ARC_X_W(c, 23, ((uint64_t)(ARC_X_R(c, 1)) - ((uint64_t)(ARC_X_R(c, 8)) * (uint64_t)(ARC_X_R(c, 9)))));
  /* 16855c: b.lt #0x168698 */
  if (ARC_COND(c, 11)) goto L_168698;
  /* 168560: cbnz x23, #0x168698 */
  if ((ARC_X_R(c, 23)) != 0) goto L_168698;
  /* 168564: ldr x8, [x19, #0x310] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(784))));
  /* 168568: mov w9, #0x3fffffff */
  ARC_W_W(c, 9, UINT64_C(1073741823));
  /* 16856c: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 168570: b.gt #0x168698 */
  if (ARC_COND(c, 12)) goto L_168698;
  /* 168574: ldrb w8, [x19, #0x68] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(104))));
  /* 168578: cbz w8, #0x168614 */
  if ((ARC_W_R(c, 8)) == 0) goto L_168614;
  /* 16857c: add x0, sp, #0x30 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(48)));
  /* 168580: bl #0x1db4a4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1475972));
  fn2_1db4a4(c);
  /* 168584: ldr x1, [x19, #0x310] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 19) + INT64_C(784))));
  /* 168588: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 16858c: bl #0x1bc290 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1475984));
  fn2_1bc290(c);
  /* 168590: add x0, sp, #0x30 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(48)));
  /* 168594: sub x1, x29, #0x48 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 168598: bl #0x1db920 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1475996));
  fn2_1db920(c);
  /* 16859c: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 1685a0: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1476004));
  fn2_1bc620(c);
  /* 1685a4: bl #0x22eb3c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1476008));
  fn2_22eb3c(c);
  /* 1685a8: bl #0x2302d4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1476012));
  fn2_2302d4(c);
  /* 1685ac: mov x1, x0 */
  ARC_X_W(c, 1, ARC_X_R(c, 0));
  /* 1685b0: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 1685b4: bl #0x1bc290 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1476024));
  fn2_1bc290(c);
  /* 1685b8: add x0, sp, #0x30 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(48)));
  /* 1685bc: sub x1, x29, #0x48 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 1685c0: bl #0x1db920 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1476036));
  fn2_1db920(c);
  /* 1685c4: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 1685c8: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1476044));
  fn2_1bc620(c);
  /* 1685cc: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 1685d0: add x1, sp, #0x30 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(48)));
  /* 1685d4: bl #0x1bc544 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1476056));
  fn2_1bc544(c);
  /* 1685d8: ldr x1, [x19, #0x78] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 19) + INT64_C(120))));
  /* 1685dc: sub x0, x29, #0x60 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(96)));
  /* 1685e0: bl #0x1bc290 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1476068));
  fn2_1bc290(c);
  /* 1685e4: add x0, x19, #0x308 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(776)));
  /* 1685e8: sub x1, x29, #0x60 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(96)));
  /* 1685ec: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1476080));
  fn2_1bbfa0(c);
  /* 1685f0: sub x1, x29, #0x48 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 1685f4: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1476088));
  fn2_1bcf04(c);
  /* 1685f8: sub x0, x29, #0x60 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(96)));
  /* 1685fc: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1476096));
  fn2_1bc620(c);
  /* 168600: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 168604: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1476104));
  fn2_1bc620(c);
  /* 168608: add x0, sp, #0x30 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(48)));
  /* 16860c: bl #0x1db788 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1476112));
  fn2_1db788(c);
  /* 168610: b #0x168690 */
  goto L_168690;
L_168614:;
  /* 168614: adrp x1, #0x34000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(212992)));
  /* 168618: add x1, x1, #0xf9f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3999)));
  /* 16861c: add x0, sp, #0x30 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(48)));
  /* 168620: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 168624: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1476136));
  fn2_1b8fd4(c);
  /* 168628: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 16862c: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* 168630: sub x24, x29, #0x48 */
  ARC_X_W(c, 24, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 168634: bl #0x1bc290 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1476152));
  fn2_1bc290(c);
  /* 168638: add x21, x24, #0x18 */
  ARC_X_W(c, 21, (ARC_X_R(c, 24) + UINT64_C(24)));
  /* 16863c: add x1, sp, #0x30 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(48)));
  /* 168640: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 168644: bl #0x1bc44c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1476168));
  fn2_1bc44c(c);
  /* 168648: ldr x1, [x19, #0x310] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 19) + INT64_C(784))));
  /* 16864c: add x22, x24, #0x30 */
  ARC_X_W(c, 22, (ARC_X_R(c, 24) + UINT64_C(48)));
  /* 168650: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 168654: bl #0x1bc290 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1476184));
  fn2_1bc290(c);
  /* 168658: sub x1, x29, #0x60 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(96)));
  /* 16865c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 168660: mov w2, #3 */
  ARC_W_W(c, 2, UINT64_C(3));
  /* 168664: stp x24, x21, [x29, #-0x60] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-96));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 168668: stur x22, [x29, #-0x50] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-80)), ARC_X_R(c, 22));
  /* 16866c: bl #0x219208 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1476208));
  fn2_219208(c);
  /* 168670: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 168674: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1476216));
  fn2_1bc620(c);
  /* 168678: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 16867c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1476224));
  fn2_1bc620(c);
  /* 168680: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 168684: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1476232));
  fn2_1bc620(c);
  /* 168688: add x0, sp, #0x30 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(48)));
  /* 16868c: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1476240));
  fn2_1d2d24(c);
L_168690:;
  /* 168690: mov w8, #0x40000000 */
  ARC_W_W(c, 8, UINT64_C(1073741824));
  /* 168694: str x8, [x19, #0x310] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(784)), ARC_X_R(c, 8));
L_168698:;
  /* 168698: nop  */
  /* nop: no architectural effect here */
  /* 16869c: adr x8, #0x25d138 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2478392)));
  /* 1686a0: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 1686a4: cbz x8, #0x1686b0 */
  if ((ARC_X_R(c, 8)) == 0) goto L_1686b0;
  /* 1686a8: ldrb w24, [x8, #0x26] */
  ARC_W_W(c, 24, arc_ld8((ARC_X_R(c, 8) + INT64_C(38))));
  /* 1686ac: b #0x1686b4 */
  goto L_1686b4;
L_1686b0:;
  /* 1686b0: mov w24, wzr */
  ARC_W_W(c, 24, ARC_W_R(c, 31));
L_1686b4:;
  /* 1686b4: mov x9, #0xd70b */
  ARC_X_W(c, 9, UINT64_C(55051));
  /* 1686b8: lsr x8, x20, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 20)) >> ((UINT64_C(1)) & 63)));
  /* 1686bc: cmp x20, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 20), UINT64_C(1));
  /* 1686c0: movk x9, #0x70a3, lsl #16 */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(18446744069414649855)) | UINT64_C(1889730560)));
  /* 1686c4: movk x9, #0xa3d, lsl #32 */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(18446462603027808255)) | UINT64_C(11257109282816)));
  /* 1686c8: movk x9, #0xa3d7, lsl #48 */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(281474976710655)) | UINT64_C(11805904948175044608)));
  /* 1686cc: umulh x8, x8, x9 */
  ARC_X_W(c, 8, arc_umulh(ARC_X_R(c, 8), ARC_X_R(c, 9)));
  /* 1686d0: mov w9, #0x32 */
  ARC_W_W(c, 9, UINT64_C(50));
  /* 1686d4: lsr x8, x8, #4 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(4)) & 63)));
  /* 1686d8: msub x8, x8, x9, x20 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 20)) - ((uint64_t)(ARC_X_R(c, 8)) * (uint64_t)(ARC_X_R(c, 9)))));
  /* 1686dc: b.lt #0x168818 */
  if (ARC_COND(c, 11)) goto L_168818;
  /* 1686e0: cbz w24, #0x168818 */
  if ((ARC_W_R(c, 24)) == 0) goto L_168818;
  /* 1686e4: cmp x23, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 23), UINT64_C(0));
  /* 1686e8: ccmp x8, #0, #4, eq */
  if (ARC_COND(c, 0)) { (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(0)); }
  else { (c)->nf = 0; (c)->zf = 1;
          (c)->cf = 0; (c)->vf = 0; }
  /* 1686ec: b.eq #0x168818 */
  if (ARC_COND(c, 0)) goto L_168818;
  /* 1686f0: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* 1686f4: add x1, x1, #0x2c7 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(711)));
  /* 1686f8: add x0, sp, #0x58 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(88)));
  /* 1686fc: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1476352));
  fn2_1b7d24(c);
  /* 168700: nop  */
  /* nop: no architectural effect here */
  /* 168704: adr x22, #0x25d160 */
  ARC_X_W(c, 22, (arc_image_bases[2] + UINT64_C(2478432)));
  /* 168708: ldr x21, [x22] */
  ARC_X_W(c, 21, arc_ld64(ARC_X_R(c, 22)));
  /* 16870c: cbz x21, #0x168d44 */
  if ((ARC_X_R(c, 21)) == 0) goto L_168d44;
  /* 168710: ldr x1, [x19, #0x20] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 19) + INT64_C(32))));
  /* 168714: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 168718: bl #0x1bc488 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1476380));
  fn2_1bc488(c);
  /* 16871c: add x8, sp, #0x50 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(80)));
  /* 168720: sub x1, x29, #0x48 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 168724: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 168728: bl #0xf7064 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1476396));
  fn2_f7064(c);
  /* 16872c: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 168730: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1476404));
  fn2_1bc620(c);
  /* 168734: ldr x21, [x22] */
  ARC_X_W(c, 21, arc_ld64(ARC_X_R(c, 22)));
  /* 168738: cbz x21, #0x168d7c */
  if ((ARC_X_R(c, 21)) == 0) goto L_168d7c;
L_16873c:;
  /* 16873c: ldr x1, [x19, #0x20] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 19) + INT64_C(32))));
  /* 168740: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 168744: bl #0x1bc488 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1476424));
  fn2_1bc488(c);
  /* 168748: add x8, sp, #0x28 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(40)));
  /* 16874c: sub x1, x29, #0x48 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 168750: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 168754: bl #0xf8aac */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1476440));
  fn2_f8aac(c);
  /* 168758: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 16875c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1476448));
  fn2_1bc620(c);
L_168760:;
  /* 168760: add x0, sp, #0x30 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(48)));
  /* 168764: add x1, sp, #0x28 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(40)));
  /* 168768: bl #0x1bc530 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1476460));
  fn2_1bc530(c);
  /* 16876c: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 168770: bl #0x1ccc74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1476468));
  fn2_1ccc74(c);
  /* 168774: add x8, sp, #0x48 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(72)));
  /* 168778: add x0, sp, #0x30 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(48)));
  /* 16877c: add x1, sp, #0x20 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(32)));
  /* 168780: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* 168784: mov w3, wzr */
  ARC_W_W(c, 3, ARC_W_R(c, 31));
  /* 168788: bl #0x20f0e8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1476492));
  fn2_20f0e8(c);
  /* 16878c: add x8, sp, #0x60 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(96)));
  /* 168790: add x0, sp, #0x58 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(88)));
  /* 168794: add x2, sp, #0x50 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(80)));
  /* 168798: add x3, sp, #0x48 */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(72)));
  /* 16879c: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 1687a0: bl #0x16ea68 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1476516));
  fn2_16ea68(c);
  /* 1687a4: sub x0, x29, #0x60 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(96)));
  /* 1687a8: add x1, sp, #0x60 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(96)));
  /* 1687ac: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1476528));
  fn2_1bc2f8(c);
  /* 1687b0: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 1687b4: sub x1, x29, #0x60 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(96)));
  /* 1687b8: sub x20, x29, #0x48 */
  ARC_X_W(c, 20, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 1687bc: bl #0x1bc0b8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1476544));
  fn2_1bc0b8(c);
  /* 1687c0: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1687c4: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* 1687c8: str x20, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 20));
  /* 1687cc: bl #0x24a164 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1476560));
  fn2_24a164(c);
  /* 1687d0: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 1687d4: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1476568));
  fn2_1bc620(c);
  /* 1687d8: sub x0, x29, #0x60 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(96)));
  /* 1687dc: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1476576));
  fn2_1bc620(c);
  /* 1687e0: add x0, sp, #0x60 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(96)));
  /* 1687e4: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1476584));
  fn2_1ccd9c(c);
  /* 1687e8: add x0, sp, #0x48 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(72)));
  /* 1687ec: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1476592));
  fn2_1ccd9c(c);
  /* 1687f0: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 1687f4: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1476600));
  fn2_1ccd9c(c);
  /* 1687f8: add x0, sp, #0x30 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(48)));
  /* 1687fc: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1476608));
  fn2_1bc620(c);
  /* 168800: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* 168804: bl #0x1d97fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1476616));
  fn2_1d97fc(c);
  /* 168808: add x0, sp, #0x50 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(80)));
  /* 16880c: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1476624));
  fn2_1ccd9c(c);
  /* 168810: add x0, sp, #0x58 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(88)));
  /* 168814: b #0x168c78 */
  goto L_168c78;
L_168818:;
  /* 168818: cmp x20, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 20), UINT64_C(1));
  /* 16881c: b.lt #0x168c7c */
  if (ARC_COND(c, 11)) goto L_168c7c;
  /* 168820: cbnz x8, #0x168c7c */
  if ((ARC_X_R(c, 8)) != 0) goto L_168c7c;
  /* 168824: nop  */
  /* nop: no architectural effect here */
  /* 168828: adr x22, #0x25d160 */
  ARC_X_W(c, 22, (arc_image_bases[2] + UINT64_C(2478432)));
  /* 16882c: ldr x21, [x22] */
  ARC_X_W(c, 21, arc_ld64(ARC_X_R(c, 22)));
  /* 168830: cbz x21, #0x168db0 */
  if ((ARC_X_R(c, 21)) == 0) goto L_168db0;
  /* 168834: ldr x1, [x19, #0x20] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 19) + INT64_C(32))));
  /* 168838: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 16883c: bl #0x1bc488 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1476672));
  fn2_1bc488(c);
  /* 168840: add x8, sp, #0x60 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(96)));
  /* 168844: sub x1, x29, #0x48 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 168848: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 16884c: bl #0xf7064 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1476688));
  fn2_f7064(c);
  /* 168850: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 168854: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1476696));
  fn2_1bc620(c);
  /* 168858: cbz w24, #0x16895c */
  if ((ARC_W_R(c, 24)) == 0) goto L_16895c;
L_16885c:;
  /* 16885c: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* 168860: add x1, x1, #0x2c7 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(711)));
  /* 168864: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* 168868: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1476716));
  fn2_1b7d24(c);
  /* 16886c: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* 168870: add x1, sp, #0x60 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(96)));
  /* 168874: bl #0x1ccc88 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1476728));
  fn2_1ccc88(c);
  /* 168878: ldr x21, [x22] */
  ARC_X_W(c, 21, arc_ld64(ARC_X_R(c, 22)));
  /* 16887c: cbz x21, #0x168e1c */
  if ((ARC_X_R(c, 21)) == 0) goto L_168e1c;
  /* 168880: ldr x1, [x19, #0x20] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 19) + INT64_C(32))));
  /* 168884: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 168888: bl #0x1bc488 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1476748));
  fn2_1bc488(c);
  /* 16888c: add x8, sp, #0x20 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(32)));
  /* 168890: sub x1, x29, #0x48 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 168894: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 168898: bl #0xf8aac */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1476764));
  fn2_f8aac(c);
  /* 16889c: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 1688a0: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1476772));
  fn2_1bc620(c);
L_1688a4:;
  /* 1688a4: add x0, sp, #0x30 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(48)));
  /* 1688a8: add x1, sp, #0x20 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(32)));
  /* 1688ac: bl #0x1bc530 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1476784));
  fn2_1bc530(c);
  /* 1688b0: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1688b4: bl #0x1ccc74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1476792));
  fn2_1ccc74(c);
  /* 1688b8: add x8, sp, #0x10 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(16)));
  /* 1688bc: add x0, sp, #0x30 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(48)));
  /* 1688c0: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 1688c4: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* 1688c8: mov w3, wzr */
  ARC_W_W(c, 3, ARC_W_R(c, 31));
  /* 1688cc: bl #0x20f0e8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1476816));
  fn2_20f0e8(c);
  /* 1688d0: add x8, sp, #0x58 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(88)));
  /* 1688d4: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* 1688d8: add x2, sp, #0x18 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(24)));
  /* 1688dc: add x3, sp, #0x10 */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(16)));
  /* 1688e0: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 1688e4: bl #0x16ea68 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1476840));
  fn2_16ea68(c);
  /* 1688e8: sub x0, x29, #0x60 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(96)));
  /* 1688ec: add x1, sp, #0x58 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(88)));
  /* 1688f0: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1476852));
  fn2_1bc2f8(c);
  /* 1688f4: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 1688f8: sub x1, x29, #0x60 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(96)));
  /* 1688fc: sub x21, x29, #0x48 */
  ARC_X_W(c, 21, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 168900: bl #0x1bc0b8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1476868));
  fn2_1bc0b8(c);
  /* 168904: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 168908: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* 16890c: str x21, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 21));
  /* 168910: bl #0x24a164 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1476884));
  fn2_24a164(c);
  /* 168914: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 168918: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1476892));
  fn2_1bc620(c);
  /* 16891c: sub x0, x29, #0x60 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(96)));
  /* 168920: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1476900));
  fn2_1bc620(c);
  /* 168924: add x0, sp, #0x58 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(88)));
  /* 168928: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1476908));
  fn2_1ccd9c(c);
  /* 16892c: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 168930: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1476916));
  fn2_1ccd9c(c);
  /* 168934: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 168938: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1476924));
  fn2_1ccd9c(c);
  /* 16893c: add x0, sp, #0x30 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(48)));
  /* 168940: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1476932));
  fn2_1bc620(c);
  /* 168944: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 168948: bl #0x1d97fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1476940));
  fn2_1d97fc(c);
  /* 16894c: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* 168950: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1476948));
  fn2_1ccd9c(c);
  /* 168954: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* 168958: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1476956));
  fn2_1ccd9c(c);
L_16895c:;
  /* 16895c: ldrb w8, [x19, #0x68] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(104))));
  /* 168960: cbz w8, #0x168bc0 */
  if ((ARC_W_R(c, 8)) == 0) goto L_168bc0;
  /* 168964: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 168968: add x1, sp, #0x60 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(96)));
  /* 16896c: sub x21, x20, #0x3e8 */
  ARC_X_W(c, 21, (ARC_X_R(c, 20) - UINT64_C(1000)));
  /* 168970: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1476980));
  fn2_1bc2f8(c);
  /* 168974: sub x0, x29, #0x60 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(96)));
  /* 168978: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 16897c: bl #0x1bc290 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1476992));
  fn2_1bc290(c);
  /* 168980: add x0, x19, #0x240 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(576)));
  /* 168984: sub x1, x29, #0x60 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(96)));
  /* 168988: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1477004));
  fn2_1bbfa0(c);
  /* 16898c: sub x1, x29, #0x48 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 168990: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1477012));
  fn2_1bcf04(c);
  /* 168994: sub x0, x29, #0x60 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(96)));
  /* 168998: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1477020));
  fn2_1bc620(c);
  /* 16899c: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 1689a0: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1477028));
  fn2_1bc620(c);
  /* 1689a4: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 1689a8: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 1689ac: bl #0x1bc290 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1477040));
  fn2_1bc290(c);
  /* 1689b0: add x0, x19, #0x240 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(576)));
  /* 1689b4: sub x1, x29, #0x48 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 1689b8: bl #0x1d9a68 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1477052));
  fn2_1d9a68(c);
  /* 1689bc: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 1689c0: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1477060));
  fn2_1bc620(c);
  /* 1689c4: ldr x22, [x22] */
  ARC_X_W(c, 22, arc_ld64(ARC_X_R(c, 22)));
  /* 1689c8: cbz x22, #0x168de8 */
  if ((ARC_X_R(c, 22)) == 0) goto L_168de8;
  /* 1689cc: ldr x1, [x19, #0x20] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 19) + INT64_C(32))));
  /* 1689d0: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 1689d4: bl #0x1bc488 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1477080));
  fn2_1bc488(c);
  /* 1689d8: add x8, sp, #0x30 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(48)));
  /* 1689dc: sub x1, x29, #0x48 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 1689e0: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 1689e4: bl #0xf8aac */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1477096));
  fn2_f8aac(c);
  /* 1689e8: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 1689ec: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1477104));
  fn2_1bc620(c);
L_1689f0:;
  /* 1689f0: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 1689f4: add x1, sp, #0x30 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(48)));
  /* 1689f8: bl #0x1bc530 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1477116));
  fn2_1bc530(c);
  /* 1689fc: sub x0, x29, #0x60 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(96)));
  /* 168a00: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 168a04: bl #0x1bc290 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1477128));
  fn2_1bc290(c);
  /* 168a08: add x0, x19, #0x250 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(592)));
  /* 168a0c: sub x1, x29, #0x60 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(96)));
  /* 168a10: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1477140));
  fn2_1bbfa0(c);
  /* 168a14: sub x1, x29, #0x48 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 168a18: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1477148));
  fn2_1bcf04(c);
  /* 168a1c: sub x0, x29, #0x60 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(96)));
  /* 168a20: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1477156));
  fn2_1bc620(c);
  /* 168a24: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 168a28: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1477164));
  fn2_1bc620(c);
  /* 168a2c: add x0, sp, #0x30 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(48)));
  /* 168a30: bl #0x1d97fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1477172));
  fn2_1d97fc(c);
  /* 168a34: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 168a38: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 168a3c: bl #0x1bc290 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1477184));
  fn2_1bc290(c);
  /* 168a40: add x0, x19, #0x250 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(592)));
  /* 168a44: sub x1, x29, #0x48 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 168a48: bl #0x1d9a68 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1477196));
  fn2_1d9a68(c);
  /* 168a4c: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 168a50: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1477204));
  fn2_1bc620(c);
  /* 168a54: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 168a58: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 168a5c: bl #0x1bc290 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1477216));
  fn2_1bc290(c);
  /* 168a60: add x0, x19, #0x258 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(600)));
  /* 168a64: sub x1, x29, #0x48 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 168a68: bl #0x1d9a68 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1477228));
  fn2_1d9a68(c);
  /* 168a6c: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 168a70: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1477236));
  fn2_1bc620(c);
  /* 168a74: sub x0, x29, #0x60 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(96)));
  /* 168a78: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 168a7c: bl #0x1bc290 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1477248));
  fn2_1bc290(c);
  /* 168a80: add x0, sp, #0x58 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(88)));
  /* 168a84: bl #0x1d9740 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1477256));
  fn2_1d9740(c);
  /* 168a88: add x0, sp, #0x30 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(48)));
  /* 168a8c: add x1, sp, #0x58 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(88)));
  /* 168a90: bl #0x1bc530 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1477268));
  fn2_1bc530(c);
  /* 168a94: sub x8, x29, #0x48 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 168a98: add x0, x19, #0x248 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(584)));
  /* 168a9c: sub x1, x29, #0x60 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(96)));
  /* 168aa0: add x2, sp, #0x30 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(48)));
  /* 168aa4: bl #0x1d9c5c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1477288));
  fn2_1d9c5c(c);
  /* 168aa8: add x8, x29, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 168aac: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 168ab0: bl #0x1bccb8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1477300));
  fn2_1bccb8(c);
  /* 168ab4: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 168ab8: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1477308));
  fn2_1bc620(c);
  /* 168abc: add x0, sp, #0x30 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(48)));
  /* 168ac0: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1477316));
  fn2_1bc620(c);
  /* 168ac4: add x0, sp, #0x58 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(88)));
  /* 168ac8: bl #0x1d97fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1477324));
  fn2_1d97fc(c);
  /* 168acc: sub x0, x29, #0x60 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(96)));
  /* 168ad0: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1477332));
  fn2_1bc620(c);
  /* 168ad4: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 168ad8: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 168adc: bl #0x1bc290 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1477344));
  fn2_1bc290(c);
  /* 168ae0: add x0, x19, #0x248 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(584)));
  /* 168ae4: sub x1, x29, #0x48 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 168ae8: bl #0x1d9a68 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1477356));
  fn2_1d9a68(c);
  /* 168aec: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 168af0: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1477364));
  fn2_1bc620(c);
  /* 168af4: sub x8, x29, #0x60 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(96)));
  /* 168af8: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 168afc: bl #0x1d9adc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1477376));
  fn2_1d9adc(c);
  /* 168b00: sub x0, x29, #0x60 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(96)));
  /* 168b04: bl #0x1db794 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1477384));
  fn2_1db794(c);
  /* 168b08: cmp x0, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 0), UINT64_C(1));
  /* 168b0c: b.lt #0x168b8c */
  if (ARC_COND(c, 11)) goto L_168b8c;
  /* 168b10: mov x21, xzr */
  ARC_X_W(c, 21, ARC_X_R(c, 31));
  /* 168b14: b #0x168b2c */
  goto L_168b2c;
L_168b18:;
  /* 168b18: sub x0, x29, #0x60 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(96)));
  /* 168b1c: add x21, x21, #1 */
  ARC_X_W(c, 21, (ARC_X_R(c, 21) + UINT64_C(1)));
  /* 168b20: bl #0x1db794 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1477412));
  fn2_1db794(c);
  /* 168b24: cmp x21, x0 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 0));
  /* 168b28: b.ge #0x168b8c */
  if (ARC_COND(c, 10)) goto L_168b8c;
L_168b2c:;
  /* 168b2c: sub x0, x29, #0x60 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(96)));
  /* 168b30: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 168b34: bl #0x1bbf48 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1477432));
  fn2_1bbf48(c);
  /* 168b38: mov x1, x0 */
  ARC_X_W(c, 1, ARC_X_R(c, 0));
  /* 168b3c: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 168b40: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1477444));
  fn2_1bbfa0(c);
  /* 168b44: sub x8, x29, #0x48 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 168b48: bl #0x1bc84c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1477452));
  fn2_1bc84c(c);
  /* 168b4c: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 168b50: add x1, sp, #0x60 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(96)));
  /* 168b54: bl #0x1cf764 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1477464));
  fn2_1cf764(c);
  /* 168b58: mov w22, w0 */
  ARC_W_W(c, 22, ARC_W_R(c, 0));
  /* 168b5c: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 168b60: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1477476));
  fn2_1ccd9c(c);
  /* 168b64: tbz w22, #0, #0x168b18 */
  if (((ARC_W_R(c, 22)) >> 0 & 1) == 0) goto L_168b18;
  /* 168b68: sub x0, x29, #0x60 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(96)));
  /* 168b6c: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 168b70: bl #0x1bbf48 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1477492));
  fn2_1bbf48(c);
  /* 168b74: bl #0x1bc668 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1477496));
  fn2_1bc668(c);
  /* 168b78: mov x1, x0 */
  ARC_X_W(c, 1, ARC_X_R(c, 0));
  /* 168b7c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 168b80: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* 168b84: bl #0x168e84 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1477512));
  fn2_168e84(c);
  /* 168b88: b #0x168b18 */
  goto L_168b18;
L_168b8c:;
  /* 168b8c: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 168b90: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 168b94: bl #0x1bc290 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1477528));
  fn2_1bc290(c);
  /* 168b98: add x0, x19, #0x258 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(600)));
  /* 168b9c: sub x1, x29, #0x48 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 168ba0: bl #0x1d9a68 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1477540));
  fn2_1d9a68(c);
  /* 168ba4: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 168ba8: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1477548));
  fn2_1bc620(c);
  /* 168bac: sub x0, x29, #0x60 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(96)));
  /* 168bb0: bl #0x1db788 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1477556));
  fn2_1db788(c);
  /* 168bb4: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 168bb8: bl #0x1d97fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1477564));
  fn2_1d97fc(c);
  /* 168bbc: b #0x168c74 */
  goto L_168c74;
L_168bc0:;
  /* 168bc0: adrp x1, #0x29000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(167936)));
  /* 168bc4: add x1, x1, #0x36b */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(875)));
  /* 168bc8: sub x0, x29, #0x60 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(96)));
  /* 168bcc: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 168bd0: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1477588));
  fn2_1b8fd4(c);
  /* 168bd4: ldr x20, [x22] */
  ARC_X_W(c, 20, arc_ld64(ARC_X_R(c, 22)));
  /* 168bd8: cbz x20, #0x168e50 */
  if ((ARC_X_R(c, 20)) == 0) goto L_168e50;
  /* 168bdc: ldr x1, [x19, #0x20] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 19) + INT64_C(32))));
  /* 168be0: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 168be4: bl #0x1bc488 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1477608));
  fn2_1bc488(c);
  /* 168be8: add x8, x29, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 168bec: sub x1, x29, #0x48 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 168bf0: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 168bf4: bl #0xf8aac */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1477624));
  fn2_f8aac(c);
  /* 168bf8: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 168bfc: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1477632));
  fn2_1bc620(c);
L_168c00:;
  /* 168c00: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 168c04: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 168c08: bl #0x1bc530 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1477644));
  fn2_1bc530(c);
  /* 168c0c: add x0, sp, #0x58 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(88)));
  /* 168c10: bl #0x1ccc74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1477652));
  fn2_1ccc74(c);
  /* 168c14: add x8, sp, #0x30 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(48)));
  /* 168c18: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 168c1c: add x1, sp, #0x58 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(88)));
  /* 168c20: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* 168c24: mov w3, wzr */
  ARC_W_W(c, 3, ARC_W_R(c, 31));
  /* 168c28: bl #0x20f0e8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1477676));
  fn2_20f0e8(c);
  /* 168c2c: sub x2, x29, #0x60 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(96)));
  /* 168c30: add x3, sp, #0x68 */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(104)));
  /* 168c34: add x4, sp, #0x60 */
  ARC_X_W(c, 4, ((c)->sp + UINT64_C(96)));
  /* 168c38: add x5, sp, #0x30 */
  ARC_X_W(c, 5, ((c)->sp + UINT64_C(48)));
  /* 168c3c: add x6, x19, #0x2b8 */
  ARC_X_W(c, 6, (ARC_X_R(c, 19) + UINT64_C(696)));
  /* 168c40: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 168c44: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* 168c48: bl #0x16eb5c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1477708));
  fn2_16eb5c(c);
  /* 168c4c: add x0, sp, #0x30 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(48)));
  /* 168c50: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1477716));
  fn2_1ccd9c(c);
  /* 168c54: add x0, sp, #0x58 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(88)));
  /* 168c58: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1477724));
  fn2_1ccd9c(c);
  /* 168c5c: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 168c60: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1477732));
  fn2_1bc620(c);
  /* 168c64: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 168c68: bl #0x1d97fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1477740));
  fn2_1d97fc(c);
  /* 168c6c: sub x0, x29, #0x60 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(96)));
  /* 168c70: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1477748));
  fn2_1d2d24(c);
L_168c74:;
  /* 168c74: add x0, sp, #0x60 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(96)));
L_168c78:;
  /* 168c78: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1477756));
  fn2_1ccd9c(c);
L_168c7c:;
  /* 168c7c: ldrb w8, [x19, #0x68] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(104))));
  /* 168c80: cbz w8, #0x168ce8 */
  if ((ARC_W_R(c, 8)) == 0) goto L_168ce8;
  /* 168c84: add x0, x19, #0x268 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(616)));
  /* 168c88: bl #0x1db7c8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1477772));
  fn2_1db7c8(c);
  /* 168c8c: tbz w0, #0, #0x168cdc */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_168cdc;
  /* 168c90: ldrb w8, [x19, #0x68] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(104))));
  /* 168c94: cbz w8, #0x168ce8 */
  if ((ARC_W_R(c, 8)) == 0) goto L_168ce8;
  /* 168c98: ldrb w8, [x19, #0x148] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(328))));
  /* 168c9c: cbz w8, #0x168ce8 */
  if ((ARC_W_R(c, 8)) == 0) goto L_168ce8;
  /* 168ca0: ldr x1, [sp, #0x68] */
  ARC_X_W(c, 1, arc_ld64(((c)->sp + INT64_C(104))));
  /* 168ca4: cmp x1, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 1), UINT64_C(1));
  /* 168ca8: b.lt #0x168ce8 */
  if (ARC_COND(c, 11)) goto L_168ce8;
  /* 168cac: mov x8, #0x3a07 */
  ARC_X_W(c, 8, UINT64_C(14855));
  /* 168cb0: mov w9, #0x258 */
  ARC_W_W(c, 9, UINT64_C(600));
  /* 168cb4: movk x8, #0xa06d, lsl #16 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(18446744069414649855)) | UINT64_C(2691497984)));
  /* 168cb8: movk x8, #0x6d3, lsl #32 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(18446462603027808255)) | UINT64_C(7503307866112)));
  /* 168cbc: movk x8, #0x6d3a, lsl #48 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(281474976710655)) | UINT64_C(7870603298783363072)));
  /* 168cc0: umulh x8, x1, x8 */
  ARC_X_W(c, 8, arc_umulh(ARC_X_R(c, 1), ARC_X_R(c, 8)));
  /* 168cc4: lsr x8, x8, #8 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(8)) & 63)));
  /* 168cc8: msub x8, x8, x9, x1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 1)) - ((uint64_t)(ARC_X_R(c, 8)) * (uint64_t)(ARC_X_R(c, 9)))));
  /* 168ccc: cbnz x8, #0x168ce8 */
  if ((ARC_X_R(c, 8)) != 0) goto L_168ce8;
  /* 168cd0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 168cd4: bl #0x15fce0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1477848));
  fn2_15fce0(c);
  /* 168cd8: b #0x168ce8 */
  goto L_168ce8;
L_168cdc:;
  /* 168cdc: ldr x1, [sp, #0x68] */
  ARC_X_W(c, 1, arc_ld64(((c)->sp + INT64_C(104))));
  /* 168ce0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 168ce4: bl #0x169040 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1477864));
  fn2_169040(c);
L_168ce8:;
  /* 168ce8: ldp x20, x19, [sp, #0x110] */
  { const uint64_t _pa = ((c)->sp + INT64_C(272));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 168cec: ldr x28, [sp, #0xe0] */
  ARC_X_W(c, 28, arc_ld64(((c)->sp + INT64_C(224))));
  /* 168cf0: ldp x22, x21, [sp, #0x100] */
  { const uint64_t _pa = ((c)->sp + INT64_C(256));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 168cf4: ldp x24, x23, [sp, #0xf0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(240));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 168cf8: ldp x29, x30, [sp, #0xd0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(208));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 168cfc: add sp, sp, #0x120 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(288)));
  /* 168d00: ret  */
  return;
L_168d04:;
  /* 168d04: adrp x0, #0x1c000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(114688)));
  /* 168d08: add x0, x0, #0xba0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2976)));
  /* 168d0c: adrp x1, #0x2e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(188416)));
  /* 168d10: add x1, x1, #0x430 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1072)));
  /* 168d14: adrp x3, #0x1a000 */
  ARC_X_W(c, 3, (arc_image_bases[2] + UINT64_C(106496)));
  /* 168d18: add x3, x3, #0xa84 */
  ARC_X_W(c, 3, (ARC_X_R(c, 3) + UINT64_C(2692)));
  /* 168d1c: mov w2, #0x3e */
  ARC_W_W(c, 2, UINT64_C(62));
  /* 168d20: mov w4, wzr */
  ARC_W_W(c, 4, ARC_W_R(c, 31));
  /* 168d24: mov w5, wzr */
  ARC_W_W(c, 5, ARC_W_R(c, 31));
  /* 168d28: ldp x20, x19, [sp, #0x110] */
  { const uint64_t _pa = ((c)->sp + INT64_C(272));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 168d2c: ldr x28, [sp, #0xe0] */
  ARC_X_W(c, 28, arc_ld64(((c)->sp + INT64_C(224))));
  /* 168d30: ldp x22, x21, [sp, #0x100] */
  { const uint64_t _pa = ((c)->sp + INT64_C(256));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 168d34: ldp x24, x23, [sp, #0xf0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(240));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 168d38: ldp x29, x30, [sp, #0xd0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(208));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 168d3c: add sp, sp, #0x120 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(288)));
  /* 168d40: b #0x1b54b0 */
  fn2_1b54b0(c); return;
L_168d44:;
  /* 168d44: adrp x0, #0x20000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(131072)));
  /* 168d48: add x0, x0, #0xf41 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3905)));
  /* 168d4c: adrp x1, #0x2e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(188416)));
  /* 168d50: add x1, x1, #0x430 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1072)));
  /* 168d54: adrp x3, #0x21000 */
  ARC_X_W(c, 3, (arc_image_bases[2] + UINT64_C(135168)));
  /* 168d58: add x3, x3, #0x921 */
  ARC_X_W(c, 3, (ARC_X_R(c, 3) + UINT64_C(2337)));
  /* 168d5c: mov w2, #0x27 */
  ARC_W_W(c, 2, UINT64_C(39));
  /* 168d60: mov w4, wzr */
  ARC_W_W(c, 4, ARC_W_R(c, 31));
  /* 168d64: mov w5, wzr */
  ARC_W_W(c, 5, ARC_W_R(c, 31));
  /* 168d68: bl #0x1b54b0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1477996));
  fn2_1b54b0(c);
  /* 168d6c: add x0, sp, #0x50 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(80)));
  /* 168d70: bl #0x1ccc74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1478004));
  fn2_1ccc74(c);
  /* 168d74: ldr x21, [x22] */
  ARC_X_W(c, 21, arc_ld64(ARC_X_R(c, 22)));
  /* 168d78: cbnz x21, #0x16873c */
  if ((ARC_X_R(c, 21)) != 0) goto L_16873c;
L_168d7c:;
  /* 168d7c: adrp x0, #0x27000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(159744)));
  /* 168d80: add x0, x0, #0xd1e */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3358)));
  /* 168d84: adrp x1, #0x2e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(188416)));
  /* 168d88: add x1, x1, #0x430 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1072)));
  /* 168d8c: adrp x3, #0x21000 */
  ARC_X_W(c, 3, (arc_image_bases[2] + UINT64_C(135168)));
  /* 168d90: add x3, x3, #0x921 */
  ARC_X_W(c, 3, (ARC_X_R(c, 3) + UINT64_C(2337)));
  /* 168d94: mov w2, #0x2c */
  ARC_W_W(c, 2, UINT64_C(44));
  /* 168d98: mov w4, wzr */
  ARC_W_W(c, 4, ARC_W_R(c, 31));
  /* 168d9c: mov w5, wzr */
  ARC_W_W(c, 5, ARC_W_R(c, 31));
  /* 168da0: bl #0x1b54b0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1478052));
  fn2_1b54b0(c);
  /* 168da4: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* 168da8: bl #0x1d9740 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1478060));
  fn2_1d9740(c);
  /* 168dac: b #0x168760 */
  goto L_168760;
L_168db0:;
  /* 168db0: adrp x0, #0x20000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(131072)));
  /* 168db4: add x0, x0, #0xf41 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3905)));
  /* 168db8: adrp x1, #0x2e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(188416)));
  /* 168dbc: add x1, x1, #0x430 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1072)));
  /* 168dc0: adrp x3, #0x21000 */
  ARC_X_W(c, 3, (arc_image_bases[2] + UINT64_C(135168)));
  /* 168dc4: add x3, x3, #0x921 */
  ARC_X_W(c, 3, (ARC_X_R(c, 3) + UINT64_C(2337)));
  /* 168dc8: mov w2, #0x27 */
  ARC_W_W(c, 2, UINT64_C(39));
  /* 168dcc: mov w4, wzr */
  ARC_W_W(c, 4, ARC_W_R(c, 31));
  /* 168dd0: mov w5, wzr */
  ARC_W_W(c, 5, ARC_W_R(c, 31));
  /* 168dd4: bl #0x1b54b0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1478104));
  fn2_1b54b0(c);
  /* 168dd8: add x0, sp, #0x60 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(96)));
  /* 168ddc: bl #0x1ccc74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1478112));
  fn2_1ccc74(c);
  /* 168de0: cbnz w24, #0x16885c */
  if ((ARC_W_R(c, 24)) != 0) goto L_16885c;
  /* 168de4: b #0x16895c */
  goto L_16895c;
L_168de8:;
  /* 168de8: adrp x0, #0x27000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(159744)));
  /* 168dec: add x0, x0, #0xd1e */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3358)));
  /* 168df0: adrp x1, #0x2e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(188416)));
  /* 168df4: add x1, x1, #0x430 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1072)));
  /* 168df8: adrp x3, #0x21000 */
  ARC_X_W(c, 3, (arc_image_bases[2] + UINT64_C(135168)));
  /* 168dfc: add x3, x3, #0x921 */
  ARC_X_W(c, 3, (ARC_X_R(c, 3) + UINT64_C(2337)));
  /* 168e00: mov w2, #0x2c */
  ARC_W_W(c, 2, UINT64_C(44));
  /* 168e04: mov w4, wzr */
  ARC_W_W(c, 4, ARC_W_R(c, 31));
  /* 168e08: mov w5, wzr */
  ARC_W_W(c, 5, ARC_W_R(c, 31));
  /* 168e0c: bl #0x1b54b0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1478160));
  fn2_1b54b0(c);
  /* 168e10: add x0, sp, #0x30 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(48)));
  /* 168e14: bl #0x1d9740 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1478168));
  fn2_1d9740(c);
  /* 168e18: b #0x1689f0 */
  goto L_1689f0;
L_168e1c:;
  /* 168e1c: adrp x0, #0x27000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(159744)));
  /* 168e20: add x0, x0, #0xd1e */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3358)));
  /* 168e24: adrp x1, #0x2e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(188416)));
  /* 168e28: add x1, x1, #0x430 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1072)));
  /* 168e2c: adrp x3, #0x21000 */
  ARC_X_W(c, 3, (arc_image_bases[2] + UINT64_C(135168)));
  /* 168e30: add x3, x3, #0x921 */
  ARC_X_W(c, 3, (ARC_X_R(c, 3) + UINT64_C(2337)));
  /* 168e34: mov w2, #0x2c */
  ARC_W_W(c, 2, UINT64_C(44));
  /* 168e38: mov w4, wzr */
  ARC_W_W(c, 4, ARC_W_R(c, 31));
  /* 168e3c: mov w5, wzr */
  ARC_W_W(c, 5, ARC_W_R(c, 31));
  /* 168e40: bl #0x1b54b0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1478212));
  fn2_1b54b0(c);
  /* 168e44: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 168e48: bl #0x1d9740 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1478220));
  fn2_1d9740(c);
  /* 168e4c: b #0x1688a4 */
  goto L_1688a4;
L_168e50:;
  /* 168e50: adrp x0, #0x27000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(159744)));
  /* 168e54: add x0, x0, #0xd1e */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3358)));
  /* 168e58: adrp x1, #0x2e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(188416)));
  /* 168e5c: add x1, x1, #0x430 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1072)));
  /* 168e60: adrp x3, #0x21000 */
  ARC_X_W(c, 3, (arc_image_bases[2] + UINT64_C(135168)));
  /* 168e64: add x3, x3, #0x921 */
  ARC_X_W(c, 3, (ARC_X_R(c, 3) + UINT64_C(2337)));
  /* 168e68: mov w2, #0x2c */
  ARC_W_W(c, 2, UINT64_C(44));
  /* 168e6c: mov w4, wzr */
  ARC_W_W(c, 4, ARC_W_R(c, 31));
  /* 168e70: mov w5, wzr */
  ARC_W_W(c, 5, ARC_W_R(c, 31));
  /* 168e74: bl #0x1b54b0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1478264));
  fn2_1b54b0(c);
  /* 168e78: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 168e7c: bl #0x1d9740 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1478272));
  fn2_1d9740(c);
  /* 168e80: b #0x168c00 */
  goto L_168c00;
}

void fn2_16f700(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077360896));
  /* 16f700: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 16f704: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 16f708: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 16f70c: nop  */
  /* nop: no architectural effect here */
  /* 16f710: adr x8, #0x25d298 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2478744)));
  /* 16f714: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 16f718: tbz w8, #0, #0x16f738 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_16f738;
L_16f71c:;
  /* 16f71c: nop  */
  /* nop: no architectural effect here */
  /* 16f720: adr x0, #0x25d290 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478736)));
  /* 16f724: nop  */
  /* nop: no architectural effect here */
  /* 16f728: adr x1, #0x255168 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(2445672)));
  /* 16f72c: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 16f730: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 16f734: b #0x1b00bc */
  fn2_1b00bc(c); return;
L_16f738:;
  /* 16f738: nop  */
  /* nop: no architectural effect here */
  /* 16f73c: adr x0, #0x25d298 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478744)));
  /* 16f740: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1505092));
  fn2_24b710(c);
  /* 16f744: cbz w0, #0x16f71c */
  if ((ARC_W_R(c, 0)) == 0) goto L_16f71c;
  /* 16f748: nop  */
  /* nop: no architectural effect here */
  /* 16f74c: adr x19, #0x25d290 */
  ARC_X_W(c, 19, (arc_image_bases[2] + UINT64_C(2478736)));
  /* 16f750: adrp x1, #0x1b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(110592)));
  /* 16f754: add x1, x1, #0x79a */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1946)));
  /* 16f758: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 16f75c: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 16f760: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1505124));
  fn2_1b8fd4(c);
  /* 16f764: adrp x0, #0x257000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 16f768: nop  */
  /* nop: no architectural effect here */
  /* 16f76c: adr x2, #0x24f980 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(2423168)));
  /* 16f770: ldr x0, [x0, #0xf88] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(3976))));
  /* 16f774: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 16f778: bl #0x24b6f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1505148));
  fn2_24b6f0(c);
  /* 16f77c: nop  */
  /* nop: no architectural effect here */
  /* 16f780: adr x0, #0x25d298 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478744)));
  /* 16f784: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1505160));
  fn2_24b720(c);
  /* 16f788: b #0x16f71c */
  goto L_16f71c;
}

void fn2_17155c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077368668));
  /* 17155c: sub sp, sp, #0xe0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(224)));
  /* 171560: str d8, [sp, #0x90] */
  arc_st64(((c)->sp + INT64_C(144)), (c)->q[8].u64[0]);
  /* 171564: stp x29, x30, [sp, #0x98] */
  { const uint64_t _pa = ((c)->sp + INT64_C(152));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 171568: str x25, [sp, #0xa8] */
  arc_st64(((c)->sp + INT64_C(168)), ARC_X_R(c, 25));
  /* 17156c: stp x24, x23, [sp, #0xb0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(176));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 171570: stp x22, x21, [sp, #0xc0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(192));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 171574: stp x20, x19, [sp, #0xd0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(208));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 171578: add x29, sp, #0x98 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(152)));
  /* 17157c: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* 171580: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 171584: adrp x1, #0x2a000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(172032)));
  /* 171588: add x1, x1, #0xcde */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3294)));
  /* 17158c: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 171590: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* 171594: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1512856));
  fn2_1b7d24(c);
  /* 171598: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 17159c: sub x1, x29, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 1715a0: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1512868));
  fn2_1bc2f8(c);
  /* 1715a4: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 1715a8: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1512876));
  fn2_1ccd9c(c);
  /* 1715ac: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 1715b0: bl #0x1db4a4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1512884));
  fn2_1db4a4(c);
  /* 1715b4: add x0, sp, #0x38 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(56)));
  /* 1715b8: add x1, sp, #0x20 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(32)));
  /* 1715bc: bl #0x1bc544 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1512896));
  fn2_1bc544(c);
  /* 1715c0: sub x8, x29, #0x30 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 1715c4: add x0, x20, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(48)));
  /* 1715c8: sub x1, x29, #0x48 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 1715cc: add x2, sp, #0x38 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(56)));
  /* 1715d0: bl #0x1d9c5c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1512916));
  fn2_1d9c5c(c);
  /* 1715d4: sub x8, x29, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 1715d8: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 1715dc: bl #0x1bccc4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1512928));
  fn2_1bccc4(c);
  /* 1715e0: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 1715e4: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1512936));
  fn2_1bc620(c);
  /* 1715e8: add x0, sp, #0x38 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(56)));
  /* 1715ec: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1512944));
  fn2_1bc620(c);
  /* 1715f0: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 1715f4: bl #0x1db788 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1512952));
  fn2_1db788(c);
  /* 1715f8: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 1715fc: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1512960));
  fn2_1bc620(c);
  /* 171600: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 171604: bl #0x1db794 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1512968));
  fn2_1db794(c);
  /* 171608: cmp x0, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 0), UINT64_C(1));
  /* 17160c: b.lt #0x1716e8 */
  if (ARC_COND(c, 11)) goto L_1716e8;
  /* 171610: mov x22, xzr */
  ARC_X_W(c, 22, ARC_X_R(c, 31));
  /* 171614: adrp x23, #0x2f000 */
  ARC_X_W(c, 23, (arc_image_bases[2] + UINT64_C(192512)));
  /* 171618: add x23, x23, #0x62e */
  ARC_X_W(c, 23, (ARC_X_R(c, 23) + UINT64_C(1582)));
  /* 17161c: adrp x24, #0x1e000 */
  ARC_X_W(c, 24, (arc_image_bases[2] + UINT64_C(122880)));
  /* 171620: add x24, x24, #0xb6f */
  ARC_X_W(c, 24, (ARC_X_R(c, 24) + UINT64_C(2927)));
L_171624:;
  /* 171624: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 171628: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 17162c: bl #0x1bbf48 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1513008));
  fn2_1bbf48(c);
  /* 171630: mov x8, x19 */
  ARC_X_W(c, 8, ARC_X_R(c, 19));
  /* 171634: bl #0x1bccb8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1513016));
  fn2_1bccb8(c);
  /* 171638: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 17163c: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* 171640: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1513028));
  fn2_1b7d24(c);
  /* 171644: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 171648: sub x1, x29, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 17164c: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1513040));
  fn2_1bc2f8(c);
  /* 171650: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 171654: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1513048));
  fn2_1ccd9c(c);
  /* 171658: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 17165c: mov x1, x24 */
  ARC_X_W(c, 1, ARC_X_R(c, 24));
  /* 171660: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1513060));
  fn2_1b7d24(c);
  /* 171664: add x0, sp, #0x38 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(56)));
  /* 171668: sub x1, x29, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 17166c: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1513072));
  fn2_1bc2f8(c);
  /* 171670: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 171674: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1513080));
  fn2_1ccd9c(c);
  /* 171678: sub x8, x29, #0x30 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 17167c: sub x1, x29, #0x48 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 171680: add x2, sp, #0x38 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(56)));
  /* 171684: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 171688: bl #0x1d9c5c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1513100));
  fn2_1d9c5c(c);
  /* 17168c: add x8, sp, #0x20 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(32)));
  /* 171690: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 171694: bl #0x1bc84c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1513112));
  fn2_1bc84c(c);
  /* 171698: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 17169c: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 1716a0: bl #0x1cf730 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1513124));
  fn2_1cf730(c);
  /* 1716a4: mov w25, w0 */
  ARC_W_W(c, 25, ARC_W_R(c, 0));
  /* 1716a8: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 1716ac: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1513136));
  fn2_1ccd9c(c);
  /* 1716b0: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 1716b4: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1513144));
  fn2_1bc620(c);
  /* 1716b8: add x0, sp, #0x38 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(56)));
  /* 1716bc: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1513152));
  fn2_1bc620(c);
  /* 1716c0: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 1716c4: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1513160));
  fn2_1bc620(c);
  /* 1716c8: tbnz w25, #0, #0x171a58 */
  if (((ARC_W_R(c, 25)) >> 0 & 1) != 0) goto L_171a58;
  /* 1716cc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1716d0: bl #0x1d97fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1513172));
  fn2_1d97fc(c);
  /* 1716d4: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 1716d8: add x22, x22, #1 */
  ARC_X_W(c, 22, (ARC_X_R(c, 22) + UINT64_C(1)));
  /* 1716dc: bl #0x1db794 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1513184));
  fn2_1db794(c);
  /* 1716e0: cmp x22, x0 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 0));
  /* 1716e4: b.lt #0x171624 */
  if (ARC_COND(c, 11)) goto L_171624;
L_1716e8:;
  /* 1716e8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1716ec: bl #0x1d9740 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1513200));
  fn2_1d9740(c);
  /* 1716f0: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 1716f4: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 1716f8: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1513212));
  fn2_1bc2f8(c);
  /* 1716fc: adrp x1, #0x2f000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(192512)));
  /* 171700: add x1, x1, #0x62e */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1582)));
  /* 171704: add x0, sp, #0x38 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(56)));
  /* 171708: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1513228));
  fn2_1b7d24(c);
  /* 17170c: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 171710: add x1, sp, #0x38 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(56)));
  /* 171714: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1513240));
  fn2_1bc2f8(c);
  /* 171718: add x0, sp, #0x38 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(56)));
  /* 17171c: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1513248));
  fn2_1ccd9c(c);
  /* 171720: sub x1, x29, #0x48 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 171724: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 171728: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1513260));
  fn2_1bbfa0(c);
  /* 17172c: sub x1, x29, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 171730: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1513268));
  fn2_1bcf04(c);
  /* 171734: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 171738: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1513276));
  fn2_1bc620(c);
  /* 17173c: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 171740: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1513284));
  fn2_1bc620(c);
  /* 171744: adrp x21, #0x21000 */
  ARC_X_W(c, 21, (arc_image_bases[2] + UINT64_C(135168)));
  /* 171748: add x21, x21, #0xa23 */
  ARC_X_W(c, 21, (ARC_X_R(c, 21) + UINT64_C(2595)));
  /* 17174c: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 171750: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 171754: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1513304));
  fn2_1b7d24(c);
  /* 171758: add x0, sp, #0x38 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(56)));
  /* 17175c: sub x1, x29, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 171760: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1513316));
  fn2_1bc2f8(c);
  /* 171764: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 171768: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1513324));
  fn2_1ccd9c(c);
  /* 17176c: mov x8, #0x400000000000 */
  ARC_X_W(c, 8, UINT64_C(70368744177664));
  /* 171770: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 171774: movk x8, #0x408f, lsl #48 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(281474976710655)) | UINT64_C(4651936940097011712)));
  /* 171778: fmov d8, x8 */
  arc_du_w(c, 8, (uint64_t)(ARC_X_R(c, 8)));
  /* 17177c: fmov d0, d8 */
  arc_du_w(c, 0, (uint64_t)(ARC_DU_R(c, 8)));
  /* 171780: bl #0x1bc2c4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1513348));
  fn2_1bc2c4(c);
  /* 171784: sub x8, x29, #0x48 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 171788: add x0, x20, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(48)));
  /* 17178c: add x1, sp, #0x38 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(56)));
  /* 171790: add x2, sp, #0x20 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(32)));
  /* 171794: bl #0x1d9c5c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1513368));
  fn2_1d9c5c(c);
  /* 171798: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 17179c: bl #0x1bc7e8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1513376));
  fn2_1bc7e8(c);
  /* 1717a0: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 1717a4: bl #0x1bc2c4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1513384));
  fn2_1bc2c4(c);
  /* 1717a8: adrp x1, #0x29000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(167936)));
  /* 1717ac: add x1, x1, #0x66a */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1642)));
  /* 1717b0: sub x0, x29, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* 1717b4: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1513400));
  fn2_1b7d24(c);
  /* 1717b8: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1717bc: sub x1, x29, #0x10 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* 1717c0: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1513412));
  fn2_1bc2f8(c);
  /* 1717c4: sub x0, x29, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* 1717c8: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1513420));
  fn2_1ccd9c(c);
  /* 1717cc: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 1717d0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1717d4: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1513432));
  fn2_1bbfa0(c);
  /* 1717d8: sub x1, x29, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 1717dc: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1513440));
  fn2_1bcf04(c);
  /* 1717e0: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1717e4: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1513448));
  fn2_1bc620(c);
  /* 1717e8: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 1717ec: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1513456));
  fn2_1bc620(c);
  /* 1717f0: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 1717f4: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1513464));
  fn2_1bc620(c);
  /* 1717f8: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 1717fc: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1513472));
  fn2_1bc620(c);
  /* 171800: add x0, sp, #0x38 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(56)));
  /* 171804: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1513480));
  fn2_1bc620(c);
  /* 171808: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 17180c: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 171810: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1513492));
  fn2_1b7d24(c);
  /* 171814: add x0, sp, #0x38 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(56)));
  /* 171818: sub x1, x29, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 17181c: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1513504));
  fn2_1bc2f8(c);
  /* 171820: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 171824: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1513512));
  fn2_1ccd9c(c);
  /* 171828: fmov d0, d8 */
  arc_du_w(c, 0, (uint64_t)(ARC_DU_R(c, 8)));
  /* 17182c: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 171830: bl #0x1bc2c4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1513524));
  fn2_1bc2c4(c);
  /* 171834: sub x8, x29, #0x48 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 171838: add x0, x20, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(48)));
  /* 17183c: add x1, sp, #0x38 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(56)));
  /* 171840: add x2, sp, #0x20 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(32)));
  /* 171844: bl #0x1d9c5c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1513544));
  fn2_1d9c5c(c);
  /* 171848: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 17184c: bl #0x1bc7e8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1513552));
  fn2_1bc7e8(c);
  /* 171850: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 171854: bl #0x1bc2c4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1513560));
  fn2_1bc2c4(c);
  /* 171858: adrp x1, #0x27000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(159744)));
  /* 17185c: add x1, x1, #0xd33 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3379)));
  /* 171860: sub x0, x29, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* 171864: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1513576));
  fn2_1b7d24(c);
  /* 171868: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 17186c: sub x1, x29, #0x10 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* 171870: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1513588));
  fn2_1bc2f8(c);
  /* 171874: sub x0, x29, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* 171878: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1513596));
  fn2_1ccd9c(c);
  /* 17187c: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 171880: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 171884: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1513608));
  fn2_1bbfa0(c);
  /* 171888: sub x1, x29, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 17188c: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1513616));
  fn2_1bcf04(c);
  /* 171890: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 171894: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1513624));
  fn2_1bc620(c);
  /* 171898: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 17189c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1513632));
  fn2_1bc620(c);
  /* 1718a0: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 1718a4: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1513640));
  fn2_1bc620(c);
  /* 1718a8: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 1718ac: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1513648));
  fn2_1bc620(c);
  /* 1718b0: add x0, sp, #0x38 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(56)));
  /* 1718b4: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1513656));
  fn2_1bc620(c);
  /* 1718b8: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 1718bc: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 1718c0: bl #0x1bc290 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1513668));
  fn2_1bc290(c);
  /* 1718c4: adrp x1, #0x23000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(143360)));
  /* 1718c8: add x1, x1, #0x393 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(915)));
  /* 1718cc: add x0, sp, #0x38 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(56)));
  /* 1718d0: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1513684));
  fn2_1b7d24(c);
  /* 1718d4: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 1718d8: add x1, sp, #0x38 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(56)));
  /* 1718dc: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1513696));
  fn2_1bc2f8(c);
  /* 1718e0: add x0, sp, #0x38 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(56)));
  /* 1718e4: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1513704));
  fn2_1ccd9c(c);
  /* 1718e8: sub x1, x29, #0x48 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 1718ec: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1718f0: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1513716));
  fn2_1bbfa0(c);
  /* 1718f4: sub x1, x29, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 1718f8: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1513724));
  fn2_1bcf04(c);
  /* 1718fc: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 171900: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1513732));
  fn2_1bc620(c);
  /* 171904: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 171908: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1513740));
  fn2_1bc620(c);
  /* 17190c: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 171910: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 171914: bl #0x1bc290 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1513752));
  fn2_1bc290(c);
  /* 171918: adrp x1, #0x20000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(131072)));
  /* 17191c: add x1, x1, #0x451 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1105)));
  /* 171920: add x0, sp, #0x38 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(56)));
  /* 171924: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1513768));
  fn2_1b7d24(c);
  /* 171928: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 17192c: add x1, sp, #0x38 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(56)));
  /* 171930: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1513780));
  fn2_1bc2f8(c);
  /* 171934: add x0, sp, #0x38 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(56)));
  /* 171938: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1513788));
  fn2_1ccd9c(c);
  /* 17193c: sub x1, x29, #0x48 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 171940: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 171944: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1513800));
  fn2_1bbfa0(c);
  /* 171948: sub x1, x29, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 17194c: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1513808));
  fn2_1bcf04(c);
  /* 171950: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 171954: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1513816));
  fn2_1bc620(c);
  /* 171958: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 17195c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1513824));
  fn2_1bc620(c);
  /* 171960: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 171964: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 171968: bl #0x1bc290 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1513836));
  fn2_1bc290(c);
  /* 17196c: adrp x1, #0x19000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(102400)));
  /* 171970: add x1, x1, #0xfc6 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(4038)));
  /* 171974: add x0, sp, #0x38 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(56)));
  /* 171978: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1513852));
  fn2_1b7d24(c);
  /* 17197c: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 171980: add x1, sp, #0x38 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(56)));
  /* 171984: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1513864));
  fn2_1bc2f8(c);
  /* 171988: add x0, sp, #0x38 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(56)));
  /* 17198c: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1513872));
  fn2_1ccd9c(c);
  /* 171990: sub x1, x29, #0x48 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 171994: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 171998: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1513884));
  fn2_1bbfa0(c);
  /* 17199c: sub x1, x29, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 1719a0: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1513892));
  fn2_1bcf04(c);
  /* 1719a4: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 1719a8: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1513900));
  fn2_1bc620(c);
  /* 1719ac: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 1719b0: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1513908));
  fn2_1bc620(c);
  /* 1719b4: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 1719b8: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* 1719bc: bl #0x1bc25c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1513920));
  fn2_1bc25c(c);
  /* 1719c0: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* 1719c4: add x1, x1, #0xf44 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3908)));
  /* 1719c8: add x0, sp, #0x38 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(56)));
  /* 1719cc: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1513936));
  fn2_1b7d24(c);
  /* 1719d0: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 1719d4: add x1, sp, #0x38 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(56)));
  /* 1719d8: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1513948));
  fn2_1bc2f8(c);
  /* 1719dc: add x0, sp, #0x38 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(56)));
  /* 1719e0: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1513956));
  fn2_1ccd9c(c);
  /* 1719e4: sub x1, x29, #0x48 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 1719e8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1719ec: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1513968));
  fn2_1bbfa0(c);
  /* 1719f0: sub x1, x29, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 1719f4: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1513976));
  fn2_1bcf04(c);
  /* 1719f8: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 1719fc: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1513984));
  fn2_1bc620(c);
  /* 171a00: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 171a04: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1513992));
  fn2_1bc620(c);
  /* 171a08: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 171a0c: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1514000));
  fn2_1bc084(c);
  /* 171a10: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* 171a14: add x1, x1, #0xf50 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3920)));
  /* 171a18: add x0, sp, #0x38 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(56)));
  /* 171a1c: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1514016));
  fn2_1b7d24(c);
  /* 171a20: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 171a24: add x1, sp, #0x38 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(56)));
  /* 171a28: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1514028));
  fn2_1bc2f8(c);
  /* 171a2c: add x0, sp, #0x38 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(56)));
  /* 171a30: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1514036));
  fn2_1ccd9c(c);
  /* 171a34: sub x1, x29, #0x48 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 171a38: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 171a3c: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1514048));
  fn2_1bbfa0(c);
  /* 171a40: sub x1, x29, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 171a44: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1514056));
  fn2_1bcf04(c);
  /* 171a48: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 171a4c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1514064));
  fn2_1bc620(c);
  /* 171a50: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 171a54: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1514072));
  fn2_1bc620(c);
L_171a58:;
  /* 171a58: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 171a5c: bl #0x1db788 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1514080));
  fn2_1db788(c);
  /* 171a60: ldp x20, x19, [sp, #0xd0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(208));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 171a64: ldr x25, [sp, #0xa8] */
  ARC_X_W(c, 25, arc_ld64(((c)->sp + INT64_C(168))));
  /* 171a68: ldp x22, x21, [sp, #0xc0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(192));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 171a6c: ldr d8, [sp, #0x90] */
  arc_du_w(c, 8, arc_ld64(((c)->sp + INT64_C(144))));
  /* 171a70: ldp x24, x23, [sp, #0xb0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(176));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 171a74: ldp x29, x30, [sp, #0x98] */
  { const uint64_t _pa = ((c)->sp + INT64_C(152));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 171a78: add sp, sp, #0xe0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(224)));
  /* 171a7c: ret  */
  return;
}

void fn2_1757c0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077385664));
  /* 1757c0: b #0x24b730 */
  fn2_24b730(c); return;
}

void fn2_1768cc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077390028));
  /* 1768cc: cmp w1, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 1), UINT64_C(0));
  /* 1768d0: mov w8, #0x1c */
  ARC_W_W(c, 8, UINT64_C(28));
  /* 1768d4: cset w9, eq */
  ARC_W_W(c, 9, (ARC_COND(c, 0) ? 1 : 0));
  /* 1768d8: cmp w1, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 1), UINT64_C(2));
  /* 1768dc: lsl w9, w9, #2 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 9)) << ((UINT64_C(2)) & 31)));
  /* 1768e0: csel w8, w8, w9, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* 1768e4: cmp w1, #3 */
  (void)arc_sub32(c, ARC_W_R(c, 1), UINT64_C(3));
  /* 1768e8: mov w9, #0x1a */
  ARC_W_W(c, 9, UINT64_C(26));
  /* 1768ec: csel w0, w8, w9, lo */
  ARC_W_W(c, 0, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* 1768f0: ret  */
  return;
}

void fn2_1794e8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077401320));
  /* 1794e8: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1794ec: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1794f0: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1794f4: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 1794f8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1794fc: bl #0x1d5dc0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1545472));
  fn2_1d5dc0(c);
  /* 179500: add x0, x19, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(8)));
  /* 179504: add x1, x20, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* 179508: bl #0x1d5dc0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1545484));
  fn2_1d5dc0(c);
  /* 17950c: ldr w8, [x20, #0x10] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 20) + INT64_C(16))));
  /* 179510: cmp x19, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 20));
  /* 179514: str w8, [x19, #0x10] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(16)), ARC_W_R(c, 8));
  /* 179518: b.eq #0x17957c */
  if (ARC_COND(c, 0)) goto L_17957c;
  /* 17951c: ldr s0, [x20, #0x38] */
  arc_su_w(c, 0, arc_ld32((ARC_X_R(c, 20) + INT64_C(56))));
  /* 179520: ldr x1, [x20, #0x28] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 20) + INT64_C(40))));
  /* 179524: add x0, x19, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(24)));
  /* 179528: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 17952c: str s0, [x19, #0x38] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(56)), (c)->q[0].u32[0]);
  /* 179530: bl #0x17a578 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1545524));
  fn2_17a578(c);
  /* 179534: ldr x1, [x20, #0x40] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 20) + INT64_C(64))));
  /* 179538: add x0, x19, #0x40 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(64)));
  /* 17953c: add x2, x20, #0x48 */
  ARC_X_W(c, 2, (ARC_X_R(c, 20) + UINT64_C(72)));
  /* 179540: bl #0x17ac80 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1545540));
  fn2_17ac80(c);
  /* 179544: ldr s0, [x20, #0x78] */
  arc_su_w(c, 0, arc_ld32((ARC_X_R(c, 20) + INT64_C(120))));
  /* 179548: ldr x1, [x20, #0x68] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 20) + INT64_C(104))));
  /* 17954c: add x0, x19, #0x58 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(88)));
  /* 179550: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 179554: str s0, [x19, #0x78] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(120)), (c)->q[0].u32[0]);
  /* 179558: bl #0x17b1c4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1545564));
  fn2_17b1c4(c);
  /* 17955c: ldr x1, [x20, #0x80] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 20) + INT64_C(128))));
  /* 179560: add x0, x19, #0x80 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(128)));
  /* 179564: add x2, x20, #0x88 */
  ARC_X_W(c, 2, (ARC_X_R(c, 20) + UINT64_C(136)));
  /* 179568: bl #0x17ac80 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1545580));
  fn2_17ac80(c);
  /* 17956c: ldr x1, [x20, #0x98] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 20) + INT64_C(152))));
  /* 179570: add x0, x19, #0x98 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(152)));
  /* 179574: add x2, x20, #0xa0 */
  ARC_X_W(c, 2, (ARC_X_R(c, 20) + UINT64_C(160)));
  /* 179578: bl #0x17ac80 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1545596));
  fn2_17ac80(c);
L_17957c:;
  /* 17957c: ldr x8, [x20, #0xb0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(176))));
  /* 179580: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 179584: str x8, [x19, #0xb0] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(176)), ARC_X_R(c, 8));
  /* 179588: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 17958c: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 179590: ret  */
  return;
}

void fn2_17b9e8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077410792));
  /* 17b9e8: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 17b9ec: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 17b9f0: adrp x0, #0x29000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(167936)));
  /* 17b9f4: add x0, x0, #0xeb6 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3766)));
  /* 17b9f8: bl #0xdb23c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1554940));
  fn2_db23c(c);
}

void fn2_17d09c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077416604));
  /* 17d09c: cbz x0, #0x17d124 */
  if ((ARC_X_R(c, 0)) == 0) goto L_17d124;
  /* 17d0a0: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* 17d0a4: stp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 17d0a8: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 17d0ac: add x29, sp, #0x30 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(48)));
  /* 17d0b0: add x0, sp, #0xc */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(12)));
  /* 17d0b4: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 17d0b8: add x20, sp, #0xc */
  ARC_X_W(c, 20, ((c)->sp + UINT64_C(12)));
  /* 17d0bc: bl #0x17b9fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1560768));
  fn2_17b9fc(c);
  /* 17d0c0: ldr w8, [sp, #0xc] */
  ARC_W_W(c, 8, arc_ld32(((c)->sp + INT64_C(12))));
  /* 17d0c4: ldr x0, [x19, #8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* 17d0c8: add x1, x20, #4 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(4)));
  /* 17d0cc: str w8, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 8));
  /* 17d0d0: bl #0x1d5dc0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1560788));
  fn2_1d5dc0(c);
  /* 17d0d4: ldr w8, [sp, #0x20] */
  ARC_W_W(c, 8, arc_ld32(((c)->sp + INT64_C(32))));
  /* 17d0d8: ldr x0, [x19, #0x20] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(32))));
  /* 17d0dc: add x1, x20, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(24)));
  /* 17d0e0: str w8, [x19, #0x18] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(24)), ARC_W_R(c, 8));
  /* 17d0e4: bl #0x1d06b8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1560808));
  fn2_1d06b8(c);
  /* 17d0e8: ldr w8, [sp, #0x2c] */
  ARC_W_W(c, 8, arc_ld32(((c)->sp + INT64_C(44))));
  /* 17d0ec: ldr x0, [x19, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* 17d0f0: add x1, x20, #0xc */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(12)));
  /* 17d0f4: str w8, [x19, #0x28] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(40)), ARC_W_R(c, 8));
  /* 17d0f8: bl #0x1d5dc0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1560828));
  fn2_1d5dc0(c);
  /* 17d0fc: add x0, x20, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(24)));
  /* 17d100: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1560836));
  fn2_1ccd9c(c);
  /* 17d104: add x0, x20, #0xc */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(12)));
  /* 17d108: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1560844));
  fn2_1d2d24(c);
  /* 17d10c: add x0, x20, #4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(4)));
  /* 17d110: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1560852));
  fn2_1d2d24(c);
  /* 17d114: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 17d118: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 17d11c: ldp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 17d120: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
L_17d124:;
  /* 17d124: ret  */
  return;
}

void fn2_17e02c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077420588));
  /* 17e02c: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 17e030: ret  */
  return;
}

void fn2_17eef4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077424372));
  /* 17eef4: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 17eef8: ret  */
  return;
}

void fn2_17fdbc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077428156));
  /* 17fdbc: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 17fdc0: ret  */
  return;
}

void fn2_180c84(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077431940));
  /* 180c84: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 180c88: ret  */
  return;
}

void fn2_181b4c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077435724));
  /* 181b4c: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 181b50: ret  */
  return;
}

void fn2_18349c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077442204));
  /* 18349c: ldr x8, [x1] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 1)));
  /* 1834a0: ldr x9, [x0] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 0)));
  /* 1834a4: ldr w1, [x8] */
  ARC_W_W(c, 1, arc_ld32(ARC_X_R(c, 8)));
  /* 1834a8: ldr x2, [x9, #0x58] */
  ARC_X_W(c, 2, arc_ld64((ARC_X_R(c, 9) + INT64_C(88))));
  /* 1834ac: br x2 */
  arc_dispatch(c, ARC_X_R(c, 2)); return;
}

void fn2_184268(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077445736));
  /* 184268: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 18426c: ret  */
  return;
}

void fn2_184f1c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077448988));
  /* 184f1c: ret  */
  return;
}

void fn2_185ea0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077452960));
  /* 185ea0: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
  /* 185ea4: ret  */
  return;
}

void fn2_1877a4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077459364));
  /* 1877a4: sub sp, sp, #0x110 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(272)));
  /* 1877a8: stp x29, x30, [sp, #0xc0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(192));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1877ac: stp x28, x25, [sp, #0xd0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(208));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* 1877b0: stp x24, x23, [sp, #0xe0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(224));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 1877b4: stp x22, x21, [sp, #0xf0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(240));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1877b8: stp x20, x19, [sp, #0x100] */
  { const uint64_t _pa = ((c)->sp + INT64_C(256));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1877bc: add x29, sp, #0xc0 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(192)));
  /* 1877c0: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 1877c4: add x0, sp, #0x40 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(64)));
  /* 1877c8: mov x22, x3 */
  ARC_X_W(c, 22, ARC_X_R(c, 3));
  /* 1877cc: mov x23, x2 */
  ARC_X_W(c, 23, ARC_X_R(c, 2));
  /* 1877d0: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* 1877d4: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* 1877d8: str xzr, [sp, #0x40] */
  arc_st64(((c)->sp + INT64_C(64)), ARC_X_R(c, 31));
  /* 1877dc: bl #0xaec88 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1603552));
  fn2_aec88(c);
  /* 1877e0: ldr x24, [sp, #0x40] */
  ARC_X_W(c, 24, arc_ld64(((c)->sp + INT64_C(64))));
  /* 1877e4: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 1877e8: bl #0x2258f4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1603564));
  fn2_2258f4(c);
  /* 1877ec: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 1877f0: ldr x0, [x24, #0x18] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 24) + INT64_C(24))));
  /* 1877f4: tbz w8, #0, #0x187814 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_187814;
  /* 1877f8: cmp x0, x24 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 24));
  /* 1877fc: b.eq #0x187850 */
  if (ARC_COND(c, 0)) goto L_187850;
  /* 187800: mov x25, x24 */
  ARC_X_W(c, 25, ARC_X_R(c, 24));
  /* 187804: cbnz x0, #0x18781c */
  if ((ARC_X_R(c, 0)) != 0) goto L_18781c;
  /* 187808: str x24, [x24, #0x18] */
  arc_st64((ARC_X_R(c, 24) + INT64_C(24)), ARC_X_R(c, 24));
  /* 18780c: mov x25, x24 */
  ARC_X_W(c, 25, ARC_X_R(c, 24));
  /* 187810: b #0x187844 */
  goto L_187844;
L_187814:;
  /* 187814: cbz x0, #0x187870 */
  if ((ARC_X_R(c, 0)) == 0) goto L_187870;
  /* 187818: mov x25, xzr */
  ARC_X_W(c, 25, ARC_X_R(c, 31));
L_18781c:;
  /* 18781c: bl #0x225abc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1603616));
  fn2_225abc(c);
  /* 187820: tbz w0, #0, #0x18783c */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_18783c;
  /* 187824: adrp x9, #0x257000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 187828: ldr x8, [x24, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 24) + INT64_C(24))));
  /* 18782c: ldr x9, [x9, #0xfb0] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(4016))));
  /* 187830: ldr x0, [x8, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 187834: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* 187838: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1603644));
  arc_dispatch(c, ARC_X_R(c, 9));
L_18783c:;
  /* 18783c: str x25, [x24, #0x18] */
  arc_st64((ARC_X_R(c, 24) + INT64_C(24)), ARC_X_R(c, 25));
  /* 187840: cbz x25, #0x187870 */
  if ((ARC_X_R(c, 25)) == 0) goto L_187870;
L_187844:;
  /* 187844: mov x0, x25 */
  ARC_X_W(c, 0, ARC_X_R(c, 25));
  /* 187848: bl #0x2259d8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1603660));
  fn2_2259d8(c);
  /* 18784c: mov x24, x25 */
  ARC_X_W(c, 24, ARC_X_R(c, 25));
L_187850:;
  /* 187850: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 187854: bl #0x225abc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1603672));
  fn2_225abc(c);
  /* 187858: tbz w0, #0, #0x187870 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_187870;
  /* 18785c: adrp x8, #0x257000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 187860: ldr x8, [x8, #0xfb0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(4016))));
  /* 187864: ldr x0, [x24, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 24) + INT64_C(16))));
  /* 187868: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 18786c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1603696));
  arc_dispatch(c, ARC_X_R(c, 8));
L_187870:;
  /* 187870: cbz x21, #0x1878e0 */
  if ((ARC_X_R(c, 21)) == 0) goto L_1878e0;
  /* 187874: adrp x1, #0x25000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(151552)));
  /* 187878: add x1, x1, #0xcaf */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3247)));
  /* 18787c: add x0, sp, #0x60 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(96)));
  /* 187880: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 187884: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1603720));
  fn2_1b8fd4(c);
  /* 187888: sub x8, x29, #0x48 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 18788c: add x1, sp, #0x60 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(96)));
  /* 187890: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 187894: bl #0x21fe38 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1603736));
  fn2_21fe38(c);
  /* 187898: add x8, sp, #0x50 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(80)));
  /* 18789c: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 1878a0: bl #0x1bc84c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1603748));
  fn2_1bc84c(c);
  /* 1878a4: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 1878a8: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1603756));
  fn2_1bc620(c);
  /* 1878ac: add x0, sp, #0x60 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(96)));
  /* 1878b0: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1603764));
  fn2_1d2d24(c);
  /* 1878b4: add x0, sp, #0x48 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(72)));
  /* 1878b8: bl #0x1d9740 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1603772));
  fn2_1d9740(c);
  /* 1878bc: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* 1878c0: add x1, x1, #0xb6f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2927)));
  /* 1878c4: add x0, sp, #0x50 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(80)));
  /* 1878c8: bl #0x1b879c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1603788));
  fn2_1b879c(c);
  /* 1878cc: tbz w0, #0, #0x1879f0 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_1879f0;
  /* 1878d0: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 1878d4: add x1, sp, #0x50 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(80)));
  /* 1878d8: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1603804));
  fn2_1bc2f8(c);
  /* 1878dc: b #0x1879f8 */
  goto L_1879f8;
L_1878e0:;
  /* 1878e0: adrp x0, #0x35000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(217088)));
  /* 1878e4: add x0, x0, #0x2a5 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(677)));
  /* 1878e8: adrp x1, #0x34000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(212992)));
  /* 1878ec: add x1, x1, #0x74f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1871)));
  /* 1878f0: adrp x3, #0x22000 */
  ARC_X_W(c, 3, (arc_image_bases[2] + UINT64_C(139264)));
  /* 1878f4: add x3, x3, #0x77e */
  ARC_X_W(c, 3, (ARC_X_R(c, 3) + UINT64_C(1918)));
  /* 1878f8: mov w2, #0x7b */
  ARC_W_W(c, 2, UINT64_C(123));
  /* 1878fc: mov w4, wzr */
  ARC_W_W(c, 4, ARC_W_R(c, 31));
  /* 187900: mov w5, wzr */
  ARC_W_W(c, 5, ARC_W_R(c, 31));
  /* 187904: bl #0x1b54b0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1603848));
  fn2_1b54b0(c);
  /* 187908: ldr x20, [sp, #0x40] */
  ARC_X_W(c, 20, arc_ld64(((c)->sp + INT64_C(64))));
  /* 18790c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 187910: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1603860));
  fn2_1bc084(c);
  /* 187914: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 187918: add x2, sp, #8 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(8)));
  /* 18791c: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 187920: bl #0x186f9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1603876));
  fn2_186f9c(c);
  /* 187924: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* 187928: add x1, sp, #0x20 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(32)));
  /* 18792c: bl #0x1bc530 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1603888));
  fn2_1bc530(c);
  /* 187930: adrp x1, #0x30000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(196608)));
  /* 187934: add x1, x1, #0x23a */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(570)));
  /* 187938: add x0, sp, #0x48 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(72)));
  /* 18793c: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 187940: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1603908));
  fn2_1b8fd4(c);
  /* 187944: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 187948: add x1, sp, #0x48 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(72)));
  /* 18794c: sub x22, x29, #0x48 */
  ARC_X_W(c, 22, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 187950: bl #0x1bc44c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1603924));
  fn2_1bc44c(c);
  /* 187954: add x21, x22, #0x18 */
  ARC_X_W(c, 21, (ARC_X_R(c, 22) + UINT64_C(24)));
  /* 187958: add x1, sp, #0x28 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(40)));
  /* 18795c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 187960: bl #0x1bc0b8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1603940));
  fn2_1bc0b8(c);
  /* 187964: add x8, sp, #0x60 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(96)));
  /* 187968: add x1, sp, #0x50 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(80)));
  /* 18796c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 187970: mov w2, #2 */
  ARC_W_W(c, 2, UINT64_C(2));
  /* 187974: stp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 187978: bl #0x2213f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1603964));
  fn2_2213f8(c);
  /* 18797c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 187980: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1603972));
  fn2_1bc620(c);
  /* 187984: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 187988: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1603980));
  fn2_1bc620(c);
  /* 18798c: add x0, sp, #0x60 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(96)));
  /* 187990: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1603988));
  fn2_1bc620(c);
  /* 187994: add x0, sp, #0x48 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(72)));
  /* 187998: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1603996));
  fn2_1d2d24(c);
  /* 18799c: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* 1879a0: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1604004));
  fn2_1bc620(c);
  /* 1879a4: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 1879a8: bl #0x1d97fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1604012));
  fn2_1d97fc(c);
  /* 1879ac: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1879b0: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1604020));
  fn2_1bc620(c);
  /* 1879b4: ldr x20, [sp, #0x40] */
  ARC_X_W(c, 20, arc_ld64(((c)->sp + INT64_C(64))));
  /* 1879b8: adrp x1, #0x2b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(176128)));
  /* 1879bc: add x1, x1, #0x419 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1049)));
  /* 1879c0: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 1879c4: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1879c8: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1604044));
  fn2_1b8fd4(c);
  /* 1879cc: sub x2, x29, #0x48 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 1879d0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1879d4: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 1879d8: bl #0x1d85d0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1604060));
  fn2_1d85d0(c);
  /* 1879dc: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 1879e0: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1604068));
  fn2_1d2d24(c);
  /* 1879e4: ldr x0, [sp, #0x40] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(64))));
  /* 1879e8: cbnz x0, #0x187d34 */
  if ((ARC_X_R(c, 0)) != 0) goto L_187d34;
  /* 1879ec: b #0x187d54 */
  goto L_187d54;
L_1879f0:;
  /* 1879f0: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 1879f4: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1604088));
  fn2_1bc084(c);
L_1879f8:;
  /* 1879f8: adrp x1, #0x24000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(147456)));
  /* 1879fc: add x1, x1, #0x88b */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2187)));
  /* 187a00: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* 187a04: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1604104));
  fn2_1b7d24(c);
  /* 187a08: add x0, sp, #0x60 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(96)));
  /* 187a0c: add x1, sp, #0x28 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(40)));
  /* 187a10: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1604116));
  fn2_1bc2f8(c);
  /* 187a14: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* 187a18: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1604124));
  fn2_1ccd9c(c);
  /* 187a1c: add x0, sp, #0x48 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(72)));
  /* 187a20: add x1, sp, #0x60 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(96)));
  /* 187a24: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1604136));
  fn2_1bbfa0(c);
  /* 187a28: sub x1, x29, #0x48 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 187a2c: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1604144));
  fn2_1bcf04(c);
  /* 187a30: add x0, sp, #0x60 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(96)));
  /* 187a34: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1604152));
  fn2_1bc620(c);
  /* 187a38: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 187a3c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1604160));
  fn2_1bc620(c);
  /* 187a40: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 187a44: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* 187a48: bl #0x1bc544 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1604172));
  fn2_1bc544(c);
  /* 187a4c: adrp x1, #0x26000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(155648)));
  /* 187a50: add x1, x1, #0x9eb */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2539)));
  /* 187a54: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* 187a58: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1604188));
  fn2_1b7d24(c);
  /* 187a5c: add x0, sp, #0x60 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(96)));
  /* 187a60: add x1, sp, #0x28 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(40)));
  /* 187a64: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1604200));
  fn2_1bc2f8(c);
  /* 187a68: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* 187a6c: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1604208));
  fn2_1ccd9c(c);
  /* 187a70: add x0, sp, #0x48 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(72)));
  /* 187a74: add x1, sp, #0x60 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(96)));
  /* 187a78: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1604220));
  fn2_1bbfa0(c);
  /* 187a7c: sub x1, x29, #0x48 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 187a80: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1604228));
  fn2_1bcf04(c);
  /* 187a84: add x0, sp, #0x60 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(96)));
  /* 187a88: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1604236));
  fn2_1bc620(c);
  /* 187a8c: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 187a90: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1604244));
  fn2_1bc620(c);
  /* 187a94: add x8, sp, #0x20 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(32)));
  /* 187a98: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 187a9c: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* 187aa0: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* 187aa4: bl #0x1cde7c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1604264));
  fn2_1cde7c(c);
  /* 187aa8: add x8, sp, #8 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(8)));
  /* 187aac: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 187ab0: mov w1, #0x12c */
  ARC_W_W(c, 1, UINT64_C(300));
  /* 187ab4: bl #0x1cdd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1604280));
  fn2_1cdd9c(c);
  /* 187ab8: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 187abc: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 187ac0: sub x22, x29, #0x48 */
  ARC_X_W(c, 22, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 187ac4: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1604296));
  fn2_1bc2f8(c);
  /* 187ac8: adrp x1, #0x22000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(139264)));
  /* 187acc: add x1, x1, #0x776 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1910)));
  /* 187ad0: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* 187ad4: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1604312));
  fn2_1b7d24(c);
  /* 187ad8: add x0, sp, #0x60 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(96)));
  /* 187adc: add x1, sp, #0x28 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(40)));
  /* 187ae0: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1604324));
  fn2_1bc2f8(c);
  /* 187ae4: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* 187ae8: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1604332));
  fn2_1ccd9c(c);
  /* 187aec: add x0, sp, #0x48 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(72)));
  /* 187af0: add x1, sp, #0x60 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(96)));
  /* 187af4: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1604344));
  fn2_1bbfa0(c);
  /* 187af8: sub x1, x29, #0x48 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 187afc: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1604352));
  fn2_1bcf04(c);
  /* 187b00: add x0, sp, #0x60 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(96)));
  /* 187b04: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1604360));
  fn2_1bc620(c);
  /* 187b08: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 187b0c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1604368));
  fn2_1bc620(c);
  /* 187b10: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 187b14: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1604376));
  fn2_1ccd9c(c);
  /* 187b18: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 187b1c: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1604384));
  fn2_1ccd9c(c);
  /* 187b20: adrp x1, #0x25000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(151552)));
  /* 187b24: add x1, x1, #0xd68 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3432)));
  /* 187b28: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 187b2c: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 187b30: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1604404));
  fn2_1b8fd4(c);
  /* 187b34: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 187b38: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 187b3c: bl #0x1bc44c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1604416));
  fn2_1bc44c(c);
  /* 187b40: add x8, sp, #0x60 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(96)));
  /* 187b44: add x1, sp, #0x28 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(40)));
  /* 187b48: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 187b4c: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* 187b50: str x22, [sp, #0x28] */
  arc_st64(((c)->sp + INT64_C(40)), ARC_X_R(c, 22));
  /* 187b54: bl #0x221308 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1604440));
  fn2_221308(c);
  /* 187b58: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 187b5c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1604448));
  fn2_1bc620(c);
  /* 187b60: adrp x1, #0x2f000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(192512)));
  /* 187b64: add x1, x1, #0xa16 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2582)));
  /* 187b68: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* 187b6c: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1604464));
  fn2_1b7d24(c);
  /* 187b70: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 187b74: add x1, sp, #0x28 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(40)));
  /* 187b78: sub x23, x29, #0x48 */
  ARC_X_W(c, 23, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 187b7c: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1604480));
  fn2_1bc2f8(c);
  /* 187b80: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* 187b84: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1604488));
  fn2_1ccd9c(c);
  /* 187b88: add x0, sp, #0x48 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(72)));
  /* 187b8c: sub x1, x29, #0x48 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 187b90: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1604500));
  fn2_1bbfa0(c);
  /* 187b94: add x1, sp, #0x60 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(96)));
  /* 187b98: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1604508));
  fn2_1bcf04(c);
  /* 187b9c: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 187ba0: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1604516));
  fn2_1bc620(c);
  /* 187ba4: add x0, sp, #0x60 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(96)));
  /* 187ba8: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1604524));
  fn2_1bc620(c);
  /* 187bac: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 187bb0: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1604532));
  fn2_1d2d24(c);
  /* 187bb4: bl #0x22eb3c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1604536));
  fn2_22eb3c(c);
  /* 187bb8: bl #0x2302d4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1604540));
  fn2_2302d4(c);
  /* 187bbc: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* 187bc0: add x1, x1, #0xb6f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2927)));
  /* 187bc4: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 187bc8: mov w0, #0x30 */
  ARC_W_W(c, 0, UINT64_C(48));
  /* 187bcc: mov x2, x1 */
  ARC_X_W(c, 2, ARC_X_R(c, 1));
  /* 187bd0: bl #0x1b5d1c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1604564));
  fn2_1b5d1c(c);
  /* 187bd4: adrp x8, #0x255000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2445312)));
  /* 187bd8: add x8, x8, #0xb30 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2864)));
  /* 187bdc: mov x1, x0 */
  ARC_X_W(c, 1, ARC_X_R(c, 0));
  /* 187be0: stp x8, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 187be4: nop  */
  /* nop: no architectural effect here */
  /* 187be8: adr x8, #0x187d70 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(1604976)));
  /* 187bec: mov w2, #0x18 */
  ARC_W_W(c, 2, UINT64_C(24));
  /* 187bf0: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 187bf4: stp x8, xzr, [x0, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 187bf8: str x20, [x1, #0x18]! */
  { const uint64_t _a = (ARC_X_R(c, 1) + INT64_C(24));
    ARC_X_W(c, 1, ARC_X_R(c, 1) + INT64_C(24));
    arc_st64(_a, ARC_X_R(c, 20));
  }
  /* 187bfc: bl #0x1b7894 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1604608));
  fn2_1b7894(c);
  /* 187c00: add x8, sp, #8 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(8)));
  /* 187c04: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 187c08: bl #0x1b793c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1604620));
  fn2_1b793c(c);
  /* 187c0c: ldr x1, [sp, #0x40] */
  ARC_X_W(c, 1, arc_ld64(((c)->sp + INT64_C(64))));
  /* 187c10: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 187c14: bl #0x1bc488 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1604632));
  fn2_1bc488(c);
  /* 187c18: add x20, x23, #0x18 */
  ARC_X_W(c, 20, (ARC_X_R(c, 23) + UINT64_C(24)));
  /* 187c1c: add x1, sp, #0x48 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(72)));
  /* 187c20: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 187c24: bl #0x1bc530 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1604648));
  fn2_1bc530(c);
  /* 187c28: add x22, x23, #0x30 */
  ARC_X_W(c, 22, (ARC_X_R(c, 23) + UINT64_C(48)));
  /* 187c2c: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 187c30: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 187c34: bl #0x1bc290 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1604664));
  fn2_1bc290(c);
  /* 187c38: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* 187c3c: stp x23, x20, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 23));
    arc_st64(_pa + 8, ARC_X_R(c, 20));
  }
  /* 187c40: str x22, [sp, #0x70] */
  arc_st64(((c)->sp + INT64_C(112)), ARC_X_R(c, 22));
  /* 187c44: bl #0x1d7878 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1604680));
  fn2_1d7878(c);
  /* 187c48: adrp x8, #0x257000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 187c4c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 187c50: add x1, sp, #0x60 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(96)));
  /* 187c54: ldr x8, [x8, #0xfb8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(4024))));
  /* 187c58: add x2, sp, #0x28 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(40)));
  /* 187c5c: mov w3, #3 */
  ARC_W_W(c, 3, UINT64_C(3));
  /* 187c60: ldr x8, [x8, #0xc8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(200))));
  /* 187c64: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1604712));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 187c68: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 187c6c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1604720));
  fn2_1bc620(c);
  /* 187c70: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 187c74: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1604728));
  fn2_1bc620(c);
  /* 187c78: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 187c7c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1604736));
  fn2_1bc620(c);
  /* 187c80: adrp x1, #0x2f000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(192512)));
  /* 187c84: add x1, x1, #0x5a0 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1440)));
  /* 187c88: add x0, sp, #0x60 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(96)));
  /* 187c8c: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1604752));
  fn2_1b7d24(c);
  /* 187c90: adrp x1, #0x20000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(131072)));
  /* 187c94: add x1, x1, #0x499 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1177)));
  /* 187c98: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 187c9c: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1604768));
  fn2_1b7d24(c);
  /* 187ca0: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 187ca4: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1604776));
  fn2_1bc084(c);
  /* 187ca8: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* 187cac: add x1, sp, #0x60 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(96)));
  /* 187cb0: add x2, sp, #0x20 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(32)));
  /* 187cb4: sub x4, x29, #0x48 */
  ARC_X_W(c, 4, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 187cb8: mov w3, #4 */
  ARC_W_W(c, 3, UINT64_C(4));
  /* 187cbc: mov w5, wzr */
  ARC_W_W(c, 5, ARC_W_R(c, 31));
  /* 187cc0: bl #0x1870ec */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1604804));
  fn2_1870ec(c);
  /* 187cc4: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 187cc8: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1604812));
  fn2_1bc620(c);
  /* 187ccc: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 187cd0: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1604820));
  fn2_1ccd9c(c);
  /* 187cd4: add x0, sp, #0x60 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(96)));
  /* 187cd8: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1604828));
  fn2_1ccd9c(c);
  /* 187cdc: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* 187ce0: bl #0x1d79fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1604836));
  fn2_1d79fc(c);
  /* 187ce4: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 187ce8: bl #0x1d79fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1604844));
  fn2_1d79fc(c);
  /* 187cec: ldr x20, [sp, #0x40] */
  ARC_X_W(c, 20, arc_ld64(((c)->sp + INT64_C(64))));
  /* 187cf0: adrp x1, #0x2b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(176128)));
  /* 187cf4: add x1, x1, #0x419 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1049)));
  /* 187cf8: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 187cfc: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 187d00: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1604868));
  fn2_1b8fd4(c);
  /* 187d04: sub x2, x29, #0x48 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 187d08: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 187d0c: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 187d10: bl #0x1d85d0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1604884));
  fn2_1d85d0(c);
  /* 187d14: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 187d18: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1604892));
  fn2_1d2d24(c);
  /* 187d1c: add x0, sp, #0x48 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(72)));
  /* 187d20: bl #0x1d97fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1604900));
  fn2_1d97fc(c);
  /* 187d24: add x0, sp, #0x50 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(80)));
  /* 187d28: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1604908));
  fn2_1ccd9c(c);
  /* 187d2c: ldr x0, [sp, #0x40] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(64))));
  /* 187d30: cbz x0, #0x187d54 */
  if ((ARC_X_R(c, 0)) == 0) goto L_187d54;
L_187d34:;
  /* 187d34: bl #0x225abc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1604920));
  fn2_225abc(c);
  /* 187d38: tbz w0, #0, #0x187d54 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_187d54;
  /* 187d3c: adrp x9, #0x257000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 187d40: ldr x8, [sp, #0x40] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(64))));
  /* 187d44: ldr x9, [x9, #0xfb0] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(4016))));
  /* 187d48: ldr x0, [x8, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 187d4c: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* 187d50: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1604948));
  arc_dispatch(c, ARC_X_R(c, 9));
L_187d54:;
  /* 187d54: ldp x20, x19, [sp, #0x100] */
  { const uint64_t _pa = ((c)->sp + INT64_C(256));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 187d58: ldp x22, x21, [sp, #0xf0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(240));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 187d5c: ldp x24, x23, [sp, #0xe0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(224));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 187d60: ldp x28, x25, [sp, #0xd0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(208));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* 187d64: ldp x29, x30, [sp, #0xc0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(192));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 187d68: add sp, sp, #0x110 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(272)));
  /* 187d6c: ret  */
  return;
}

void fn2_18bfbc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077477820));
  /* 18bfbc: ldr x0, [x0, #0x18] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(24))));
  /* 18bfc0: b #0x220748 */
  fn2_220748(c); return;
}

void fn2_18ce34(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077481524));
  /* 18ce34: mov w8, #0x18 */
  ARC_W_W(c, 8, UINT64_C(24));
  /* 18ce38: cmp w1, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 1), UINT64_C(0));
  /* 18ce3c: mov w9, #0x1c */
  ARC_W_W(c, 9, UINT64_C(28));
  /* 18ce40: csel w8, w8, wzr, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 31)));
  /* 18ce44: cmp w1, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 1), UINT64_C(1));
  /* 18ce48: mov w10, #0x1a */
  ARC_W_W(c, 10, UINT64_C(26));
  /* 18ce4c: csel w8, w9, w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 8)));
  /* 18ce50: cmp w1, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 1), UINT64_C(2));
  /* 18ce54: mov w9, #4 */
  ARC_W_W(c, 9, UINT64_C(4));
  /* 18ce58: csel w8, w9, w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 8)));
  /* 18ce5c: csel w0, w10, w8, hi */
  ARC_W_W(c, 0, (ARC_COND(c, 8) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 8)));
  /* 18ce60: ret  */
  return;
}

void fn2_18e5b8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077487544));
  /* 18e5b8: sub sp, sp, #0x80 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(128)));
  /* 18e5bc: stp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 18e5c0: str x23, [sp, #0x50] */
  arc_st64(((c)->sp + INT64_C(80)), ARC_X_R(c, 23));
  /* 18e5c4: stp x22, x21, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 18e5c8: stp x20, x19, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 18e5cc: add x29, sp, #0x40 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(64)));
  /* 18e5d0: adrp x8, #0x257000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 18e5d4: ldr x8, [x8, #0xfa8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(4008))));
  /* 18e5d8: ldr x21, [x8] */
  ARC_X_W(c, 21, arc_ld64(ARC_X_R(c, 8)));
  /* 18e5dc: cbz x21, #0x18e7f4 */
  if ((ARC_X_R(c, 21)) == 0) goto L_18e7f4;
  /* 18e5e0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 18e5e4: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 18e5e8: bl #0xebbd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1631724));
  fn2_ebbd4(c);
  /* 18e5ec: mov x20, x19 */
  ARC_X_W(c, 20, ARC_X_R(c, 19));
  /* 18e5f0: ldr x8, [x20, #0x18]! */
  { const uint64_t _a = (ARC_X_R(c, 20) + INT64_C(24));
    ARC_X_W(c, 20, ARC_X_R(c, 20) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_a));
  }
  /* 18e5f4: cbz x8, #0x18e634 */
  if ((ARC_X_R(c, 8)) == 0) goto L_18e634;
  /* 18e5f8: add x0, x19, #0x38 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(56)));
  /* 18e5fc: add x1, x21, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(48)));
  /* 18e600: bl #0x1cf764 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1631748));
  fn2_1cf764(c);
  /* 18e604: tbz w0, #0, #0x18e610 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_18e610;
  /* 18e608: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 18e60c: bl #0x18e830 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1631760));
  fn2_18e830(c);
L_18e610:;
  /* 18e610: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 18e614: cbz x8, #0x18e634 */
  if ((ARC_X_R(c, 8)) == 0) goto L_18e634;
  /* 18e618: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 18e61c: ldp x20, x19, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 18e620: ldr x23, [sp, #0x50] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(80))));
  /* 18e624: ldp x22, x21, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 18e628: ldp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 18e62c: add sp, sp, #0x80 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(128)));
  /* 18e630: b #0x18e93c */
  fn2_18e93c(c); return;
L_18e634:;
  /* 18e634: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* 18e638: add x1, x1, #0xb6f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2927)));
  /* 18e63c: add x0, x21, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) + UINT64_C(48)));
  /* 18e640: bl #0x1b865c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1631812));
  fn2_1b865c(c);
  /* 18e644: tbnz w0, #0, #0x18e750 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) != 0) goto L_18e750;
  /* 18e648: bl #0x192c58 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1631820));
  fn2_192c58(c);
  /* 18e64c: tbz w0, #0, #0x18e750 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_18e750;
  /* 18e650: adrp x1, #0x22000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(139264)));
  /* 18e654: add x1, x1, #0xf29 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3881)));
  /* 18e658: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 18e65c: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 18e660: sub x23, x29, #0x18 */
  ARC_X_W(c, 23, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 18e664: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1631848));
  fn2_1b8fd4(c);
  /* 18e668: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 18e66c: bl #0xae4cc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1631856));
  fn2_ae4cc(c);
  /* 18e670: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 18e674: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 18e678: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1631868));
  fn2_1d2d24(c);
  /* 18e67c: cbz x22, #0x18e750 */
  if ((ARC_X_R(c, 22)) == 0) goto L_18e750;
  /* 18e680: adrp x1, #0x20000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(131072)));
  /* 18e684: add x1, x1, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(48)));
  /* 18e688: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 18e68c: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 18e690: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1631892));
  fn2_1b8fd4(c);
  /* 18e694: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 18e698: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 18e69c: bl #0x1bc44c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1631904));
  fn2_1bc44c(c);
  /* 18e6a0: add x8, sp, #0x10 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(16)));
  /* 18e6a4: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 18e6a8: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 18e6ac: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* 18e6b0: str x23, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 23));
  /* 18e6b4: bl #0x221308 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1631928));
  fn2_221308(c);
  /* 18e6b8: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 18e6bc: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1631936));
  fn2_1bc620(c);
  /* 18e6c0: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 18e6c4: bl #0x1bc630 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1631944));
  fn2_1bc630(c);
  /* 18e6c8: mov w22, w0 */
  ARC_W_W(c, 22, ARC_W_R(c, 0));
  /* 18e6cc: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 18e6d0: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1631956));
  fn2_1bc620(c);
  /* 18e6d4: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 18e6d8: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1631964));
  fn2_1d2d24(c);
  /* 18e6dc: tbz w22, #0, #0x18e750 */
  if (((ARC_W_R(c, 22)) >> 0 & 1) == 0) goto L_18e750;
  /* 18e6e0: adrp x22, #0x1e000 */
  ARC_X_W(c, 22, (arc_image_bases[2] + UINT64_C(122880)));
  /* 18e6e4: add x22, x22, #0xb6f */
  ARC_X_W(c, 22, (ARC_X_R(c, 22) + UINT64_C(2927)));
  /* 18e6e8: add x0, x19, #0x79 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(121)));
  /* 18e6ec: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 18e6f0: bl #0x1b852c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1631988));
  fn2_1b852c(c);
  /* 18e6f4: add x0, x19, #0x58 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(88)));
  /* 18e6f8: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 18e6fc: bl #0x1b852c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1632000));
  fn2_1b852c(c);
  /* 18e700: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 18e704: bl #0x190fb8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1632008));
  fn2_190fb8(c);
  /* 18e708: add x0, x19, #0x38 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(56)));
  /* 18e70c: add x1, x21, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(48)));
  /* 18e710: bl #0x1d06b8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1632020));
  fn2_1d06b8(c);
  /* 18e714: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 18e718: str xzr, [x19, #0x30] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(48)), ARC_X_R(c, 31));
  /* 18e71c: bl #0x192d1c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1632032));
  fn2_192d1c(c);
  /* 18e720: cbz w0, #0x18e7b8 */
  if ((ARC_W_R(c, 0)) == 0) goto L_18e7b8;
  /* 18e724: ldr x0, [x20] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 20)));
  /* 18e728: cbz x0, #0x18e74c */
  if ((ARC_X_R(c, 0)) == 0) goto L_18e74c;
  /* 18e72c: bl #0x225abc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1632048));
  fn2_225abc(c);
  /* 18e730: tbz w0, #0, #0x18e74c */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_18e74c;
  /* 18e734: adrp x9, #0x257000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 18e738: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 18e73c: ldr x9, [x9, #0xfb0] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(4016))));
  /* 18e740: ldr x0, [x8, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 18e744: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* 18e748: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1632076));
  arc_dispatch(c, ARC_X_R(c, 9));
L_18e74c:;
  /* 18e74c: str xzr, [x19, #0x18] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(24)), ARC_X_R(c, 31));
L_18e750:;
  /* 18e750: mov w8, #3 */
  ARC_W_W(c, 8, UINT64_C(3));
  /* 18e754: adrp x1, #0x29000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(167936)));
  /* 18e758: add x1, x1, #0xec6 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3782)));
  /* 18e75c: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 18e760: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 18e764: str x8, [x19, #0x70] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(112)), ARC_X_R(c, 8));
  /* 18e768: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1632108));
  fn2_1b8fd4(c);
  /* 18e76c: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 18e770: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 18e774: sub x20, x29, #0x18 */
  ARC_X_W(c, 20, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 18e778: bl #0x1bc44c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1632124));
  fn2_1bc44c(c);
  /* 18e77c: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* 18e780: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 18e784: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* 18e788: str x20, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 20));
  /* 18e78c: bl #0x221204 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1632144));
  fn2_221204(c);
  /* 18e790: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 18e794: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1632152));
  fn2_1bc620(c);
  /* 18e798: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 18e79c: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1632160));
  fn2_1d2d24(c);
L_18e7a0:;
  /* 18e7a0: ldp x20, x19, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 18e7a4: ldr x23, [sp, #0x50] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(80))));
  /* 18e7a8: ldp x22, x21, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 18e7ac: ldp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 18e7b0: add sp, sp, #0x80 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(128)));
  /* 18e7b4: ret  */
  return;
L_18e7b8:;
  /* 18e7b8: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 18e7bc: add x0, x19, #0x68 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(104)));
  /* 18e7c0: strb wzr, [x19, #0x20] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 31));
  /* 18e7c4: strb w8, [x19, #0x78] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(120)), ARC_W_R(c, 8));
  /* 18e7c8: bl #0x1db7c8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1632204));
  fn2_1db7c8(c);
  /* 18e7cc: tbz w0, #0, #0x18e7a0 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_18e7a0;
  /* 18e7d0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 18e7d4: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* 18e7d8: bl #0x18eabc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1632220));
  fn2_18eabc(c);
  /* 18e7dc: ldp x20, x19, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 18e7e0: ldr x23, [sp, #0x50] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(80))));
  /* 18e7e4: ldp x22, x21, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 18e7e8: ldp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 18e7ec: add sp, sp, #0x80 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(128)));
  /* 18e7f0: ret  */
  return;
L_18e7f4:;
  /* 18e7f4: adrp x0, #0x19000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(102400)));
  /* 18e7f8: add x0, x0, #0xe03 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3587)));
  /* 18e7fc: adrp x1, #0x28000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(163840)));
  /* 18e800: add x1, x1, #0xb02 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2818)));
  /* 18e804: adrp x3, #0x2e000 */
  ARC_X_W(c, 3, (arc_image_bases[2] + UINT64_C(188416)));
  /* 18e808: add x3, x3, #0x3ce */
  ARC_X_W(c, 3, (ARC_X_R(c, 3) + UINT64_C(974)));
  /* 18e80c: mov w2, #0x1a */
  ARC_W_W(c, 2, UINT64_C(26));
  /* 18e810: mov w4, wzr */
  ARC_W_W(c, 4, ARC_W_R(c, 31));
  /* 18e814: mov w5, wzr */
  ARC_W_W(c, 5, ARC_W_R(c, 31));
  /* 18e818: ldp x20, x19, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 18e81c: ldr x23, [sp, #0x50] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(80))));
  /* 18e820: ldp x22, x21, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 18e824: ldp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 18e828: add sp, sp, #0x80 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(128)));
  /* 18e82c: b #0x1b54b0 */
  fn2_1b54b0(c); return;
}

void fn2_191d78(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077501816));
  /* 191d78: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 191d7c: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 191d80: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 191d84: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 191d88: ldp x20, x8, [x0, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* 191d8c: ldr x9, [x0, #0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(24))));
  /* 191d90: str wzr, [x4] */
  arc_st32(ARC_X_R(c, 4), ARC_W_R(c, 31));
  /* 191d94: add x19, x9, x8, asr #1 */
  ARC_X_W(c, 19, (ARC_X_R(c, 9) + ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> 1))));
  /* 191d98: tbz w8, #0, #0x191da4 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_191da4;
  /* 191d9c: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 191da0: ldr x20, [x8, x20] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 8) + ARC_X_R(c, 20))));
L_191da4:;
  /* 191da4: ldr x1, [x1] */
  ARC_X_W(c, 1, arc_ld64(ARC_X_R(c, 1)));
  /* 191da8: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 191dac: bl #0x1bc0b8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1646000));
  fn2_1bc0b8(c);
  /* 191db0: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 191db4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 191db8: blr x20 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1646012));
  arc_dispatch(c, ARC_X_R(c, 20));
  /* 191dbc: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 191dc0: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1646020));
  fn2_1bc620(c);
  /* 191dc4: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 191dc8: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 191dcc: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 191dd0: ret  */
  return;
}

void fn2_194530(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077511984));
  /* 194530: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 194534: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 194538: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 19453c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 194540: bl #0x194468 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1656132));
  fn2_194468(c);
  /* 194544: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 194548: bl #0x194604 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1656140));
  fn2_194604(c);
  /* 19454c: ldr x0, [x19, #0xc8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(200))));
  /* 194550: cbz x0, #0x194574 */
  if ((ARC_X_R(c, 0)) == 0) goto L_194574;
  /* 194554: bl #0x225abc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1656152));
  fn2_225abc(c);
  /* 194558: tbz w0, #0, #0x194574 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_194574;
  /* 19455c: adrp x9, #0x257000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 194560: ldr x8, [x19, #0xc8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(200))));
  /* 194564: ldr x9, [x9, #0xfb0] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(4016))));
  /* 194568: ldr x0, [x8, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 19456c: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* 194570: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1656180));
  arc_dispatch(c, ARC_X_R(c, 9));
L_194574:;
  /* 194574: ldr x0, [x19, #0xb8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(184))));
  /* 194578: str xzr, [x19, #0xc8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(200)), ARC_X_R(c, 31));
  /* 19457c: cbz x0, #0x1945a0 */
  if ((ARC_X_R(c, 0)) == 0) goto L_1945a0;
  /* 194580: bl #0x225abc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1656196));
  fn2_225abc(c);
  /* 194584: tbz w0, #0, #0x1945a0 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_1945a0;
  /* 194588: adrp x9, #0x257000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 19458c: ldr x8, [x19, #0xb8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(184))));
  /* 194590: ldr x9, [x9, #0xfb0] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(4016))));
  /* 194594: ldr x0, [x8, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 194598: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* 19459c: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1656224));
  arc_dispatch(c, ARC_X_R(c, 9));
L_1945a0:;
  /* 1945a0: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1945a4: str xzr, [x19, #0xb8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(184)), ARC_X_R(c, 31));
  /* 1945a8: strh wzr, [x19, #0x18] */
  arc_st16((ARC_X_R(c, 19) + INT64_C(24)), ARC_W_R(c, 31));
  /* 1945ac: bl #0x1d9740 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1656240));
  fn2_1d9740(c);
  /* 1945b0: add x0, x19, #0xc0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(192)));
  /* 1945b4: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1945b8: bl #0x1da27c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1656252));
  fn2_1da27c(c);
  /* 1945bc: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1945c0: bl #0x1d97fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1656260));
  fn2_1d97fc(c);
  /* 1945c4: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1945c8: bl #0x1d9740 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1656268));
  fn2_1d9740(c);
  /* 1945cc: add x0, x19, #0xb0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(176)));
  /* 1945d0: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1945d4: bl #0x1da27c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1656280));
  fn2_1da27c(c);
  /* 1945d8: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1945dc: bl #0x1d97fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1656288));
  fn2_1d97fc(c);
  /* 1945e0: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* 1945e4: add x1, x1, #0xb6f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2927)));
  /* 1945e8: add x0, x19, #0xe0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(224)));
  /* 1945ec: str xzr, [x19, #0xd8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(216)), ARC_X_R(c, 31));
  /* 1945f0: bl #0x1b852c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1656308));
  fn2_1b852c(c);
  /* 1945f4: strb wzr, [x19, #0x78] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(120)), ARC_W_R(c, 31));
  /* 1945f8: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1945fc: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 194600: ret  */
  return;
}

void fn2_19e130(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077551920));
  /* 19e130: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 19e134: str x23, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 23));
  /* 19e138: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 19e13c: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 19e140: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 19e144: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 19e148: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* 19e14c: add x1, x1, #0xb6f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2927)));
  /* 19e150: mov x19, x2 */
  ARC_X_W(c, 19, ARC_X_R(c, 2));
  /* 19e154: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 19e158: mov w0, #0x30 */
  ARC_W_W(c, 0, UINT64_C(48));
  /* 19e15c: mov x2, x1 */
  ARC_X_W(c, 2, ARC_X_R(c, 1));
  /* 19e160: mov x22, x8 */
  ARC_X_W(c, 22, ARC_X_R(c, 8));
  /* 19e164: bl #0x1b5d1c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1696104));
  fn2_1b5d1c(c);
  /* 19e168: adrp x8, #0x256000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2449408)));
  /* 19e16c: add x8, x8, #0x30 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(48)));
  /* 19e170: mov x1, x0 */
  ARC_X_W(c, 1, ARC_X_R(c, 0));
  /* 19e174: mov w2, #0x18 */
  ARC_W_W(c, 2, UINT64_C(24));
  /* 19e178: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* 19e17c: stp x8, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 19e180: str x21, [x1, #0x18]! */
  { const uint64_t _a = (ARC_X_R(c, 1) + INT64_C(24));
    ARC_X_W(c, 1, ARC_X_R(c, 1) + INT64_C(24));
    arc_st64(_a, ARC_X_R(c, 21));
  }
  /* 19e184: stp x20, x19, [x0, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 19e188: bl #0x1b7894 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1696140));
  fn2_1b7894(c);
  /* 19e18c: mov x8, x22 */
  ARC_X_W(c, 8, ARC_X_R(c, 22));
  /* 19e190: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 19e194: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 19e198: ldr x23, [sp, #0x10] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(16))));
  /* 19e19c: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 19e1a0: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 19e1a4: b #0x1b793c */
  fn2_1b793c(c); return;
}

void fn2_19ed94(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077555092));
  /* 19ed94: mov x8, #0x800000000000 */
  ARC_X_W(c, 8, UINT64_C(140737488355328));
  /* 19ed98: movk x8, #0x4046, lsl #48 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(281474976710655)) | UINT64_C(4631389266797133824)));
  /* 19ed9c: fmov d0, x8 */
  arc_du_w(c, 0, (uint64_t)(ARC_X_R(c, 8)));
  /* 19eda0: ret  */
  return;
}

void fn2_1a00e8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077560040));
  /* 1a00e8: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 1a00ec: mov w0, #4 */
  ARC_W_W(c, 0, UINT64_C(4));
  /* 1a00f0: strb w8, [x1] */
  arc_st8(ARC_X_R(c, 1), ARC_W_R(c, 8));
  /* 1a00f4: ret  */
  return;
}

void fn2_1a12bc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077564604));
  /* 1a12bc: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1a12c0: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 1a12c4: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1a12c8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1a12cc: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 1a12d0: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* 1a12d4: add x1, x1, #0xb6f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2927)));
  /* 1a12d8: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 1a12dc: mov w0, #0x70 */
  ARC_W_W(c, 0, UINT64_C(112));
  /* 1a12e0: mov x2, x1 */
  ARC_X_W(c, 2, ARC_X_R(c, 1));
  /* 1a12e4: bl #0x1b5d1c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1708776));
  fn2_1b5d1c(c);
  /* 1a12e8: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1a12ec: mov w9, #1 */
  ARC_W_W(c, 9, UINT64_C(1));
  /* 1a12f0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1a12f4: ldr x8, [x8, #0x40] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(64))));
  /* 1a12f8: str w9, [x0, #8] */
  arc_st32((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 9));
  /* 1a12fc: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* 1a1300: str x8, [x0], #0xc */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(12));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* 1a1304: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1708808));
  fn2_1d2c2c(c);
  /* 1a1308: add x0, x19, #0x14 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(20)));
  /* 1a130c: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1708816));
  fn2_1d2c2c(c);
  /* 1a1310: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* 1a1314: adrp x8, #0x256000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2449408)));
  /* 1a1318: add x8, x8, #0x230 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(560)));
  /* 1a131c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1a1320: mov w1, #2 */
  ARC_W_W(c, 1, UINT64_C(2));
  /* 1a1324: stur xzr, [x19, #0x1c] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(28)), ARC_X_R(c, 31));
  /* 1a1328: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* 1a132c: stp xzr, x21, [x19, #0x58] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(88));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1a1330: stur q0, [x19, #0x28] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(40)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(40)) + 8, (c)->q[0].u64[1]);
  /* 1a1334: stur q0, [x19, #0x38] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(56)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(56)) + 8, (c)->q[0].u64[1]);
  /* 1a1338: stur q0, [x19, #0x48] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(72)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(72)) + 8, (c)->q[0].u64[1]);
  /* 1a133c: str x20, [x19, #0x68] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(104)), ARC_X_R(c, 20));
  /* 1a1340: mov w20, #2 */
  ARC_W_W(c, 20, UINT64_C(2));
  /* 1a1344: bl #0x1b5e68 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1708872));
  fn2_1b5e68(c);
  /* 1a1348: str w20, [x19, #0x1c] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(28)), ARC_W_R(c, 20));
  /* 1a134c: nop  */
  /* nop: no architectural effect here */
  /* 1a1350: adr x8, #0x25d368 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2478952)));
  /* 1a1354: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 1a1358: tbz w8, #0, #0x1a1394 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1a1394;
L_1a135c:;
  /* 1a135c: nop  */
  /* nop: no architectural effect here */
  /* 1a1360: adr x1, #0x25d35a */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(2478938)));
  /* 1a1364: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1a1368: bl #0x1d2c40 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1708908));
  fn2_1d2c40(c);
  /* 1a136c: add x0, x19, #0x14 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(20)));
  /* 1a1370: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1a1374: bl #0x1d5dc0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1708920));
  fn2_1d5dc0(c);
  /* 1a1378: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1a137c: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1708928));
  fn2_1d2d24(c);
  /* 1a1380: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1a1384: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1a1388: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1a138c: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1a1390: ret  */
  return;
L_1a1394:;
  /* 1a1394: nop  */
  /* nop: no architectural effect here */
  /* 1a1398: adr x0, #0x25d368 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478952)));
  /* 1a139c: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1708960));
  fn2_24b710(c);
  /* 1a13a0: cbz w0, #0x1a135c */
  if ((ARC_W_R(c, 0)) == 0) goto L_1a135c;
  /* 1a13a4: nop  */
  /* nop: no architectural effect here */
  /* 1a13a8: adr x20, #0x25d35a */
  ARC_X_W(c, 20, (arc_image_bases[2] + UINT64_C(2478938)));
  /* 1a13ac: adrp x1, #0x36000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(221184)));
  /* 1a13b0: add x1, x1, #0x53c */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1340)));
  /* 1a13b4: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1a13b8: bl #0x1b907c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1708988));
  fn2_1b907c(c);
  /* 1a13bc: adrp x0, #0x257000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 1a13c0: nop  */
  /* nop: no architectural effect here */
  /* 1a13c4: adr x2, #0x24f980 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(2423168)));
  /* 1a13c8: ldr x0, [x0, #0xf88] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(3976))));
  /* 1a13cc: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 1a13d0: bl #0x24b6f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1709012));
  fn2_24b6f0(c);
  /* 1a13d4: nop  */
  /* nop: no architectural effect here */
  /* 1a13d8: adr x0, #0x25d368 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478952)));
  /* 1a13dc: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1709024));
  fn2_24b720(c);
  /* 1a13e0: b #0x1a135c */
  goto L_1a135c;
}

void fn2_1a24c0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077569216));
  /* 1a24c0: sub sp, sp, #0xb0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(176)));
  /* 1a24c4: stp x29, x30, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1a24c8: str x27, [sp, #0x60] */
  arc_st64(((c)->sp + INT64_C(96)), ARC_X_R(c, 27));
  /* 1a24cc: stp x26, x25, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* 1a24d0: stp x24, x23, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 1a24d4: stp x22, x21, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1a24d8: stp x20, x19, [sp, #0xa0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(160));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1a24dc: add x29, sp, #0x50 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(80)));
  /* 1a24e0: ldp x9, x8, [x6] */
  { const uint64_t _pa = ARC_X_R(c, 6);
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* 1a24e4: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 1a24e8: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 1a24ec: mov x23, x6 */
  ARC_X_W(c, 23, ARC_X_R(c, 6));
  /* 1a24f0: mov x20, x5 */
  ARC_X_W(c, 20, ARC_X_R(c, 5));
  /* 1a24f4: mov w25, w4 */
  ARC_W_W(c, 25, ARC_W_R(c, 4));
  /* 1a24f8: mov x24, x3 */
  ARC_X_W(c, 24, ARC_X_R(c, 3));
  /* 1a24fc: mov x21, x2 */
  ARC_X_W(c, 21, ARC_X_R(c, 2));
  /* 1a2500: sub x8, x8, x9 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) - ARC_X_R(c, 9)));
  /* 1a2504: mov x9, #-0x5555555555555556 */
  ARC_X_W(c, 9, UINT64_C(12297829382473034410));
  /* 1a2508: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 1a250c: asr x8, x8, #3 */
  ARC_X_W(c, 8, ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(3)) & 63))));
  /* 1a2510: movk x9, #0xaaab */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(18446744073709486080)) | UINT64_C(43691)));
  /* 1a2514: add x26, sp, #0x20 */
  ARC_X_W(c, 26, ((c)->sp + UINT64_C(32)));
  /* 1a2518: mul x27, x8, x9 */
  ARC_X_W(c, 27, ((uint64_t)(ARC_X_R(c, 8)) * (uint64_t)(ARC_X_R(c, 9))));
  /* 1a251c: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1713440));
  fn2_1bc084(c);
  /* 1a2520: add x0, x26, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 26) + UINT64_C(24)));
  /* 1a2524: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1713448));
  fn2_1bc084(c);
  /* 1a2528: cmp w25, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 25), UINT64_C(0));
  /* 1a252c: b.le #0x1a2588 */
  if (ARC_COND(c, 13)) goto L_1a2588;
  /* 1a2530: ldr x1, [x24] */
  ARC_X_W(c, 1, arc_ld64(ARC_X_R(c, 24)));
  /* 1a2534: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1a2538: bl #0x1bc09c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1713468));
  fn2_1bc09c(c);
  /* 1a253c: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 1a2540: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 1a2544: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1713480));
  fn2_1bcf04(c);
  /* 1a2548: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1a254c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1713488));
  fn2_1bc620(c);
  /* 1a2550: cmp w25, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 25), UINT64_C(1));
  /* 1a2554: b.eq #0x1a25a4 */
  if (ARC_COND(c, 0)) goto L_1a25a4;
  /* 1a2558: ldr x1, [x24, #8] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 24) + INT64_C(8))));
  /* 1a255c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1a2560: bl #0x1bc09c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1713508));
  fn2_1bc09c(c);
  /* 1a2564: add x0, x26, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 26) + UINT64_C(24)));
  /* 1a2568: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 1a256c: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1713520));
  fn2_1bcf04(c);
  /* 1a2570: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1a2574: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1713528));
  fn2_1bc620(c);
  /* 1a2578: add x22, x22, x21, asr #1 */
  ARC_X_W(c, 22, (ARC_X_R(c, 22) + ((uint64_t)((int64_t)(ARC_X_R(c, 21)) >> 1))));
  /* 1a257c: str wzr, [x20] */
  arc_st32(ARC_X_R(c, 20), ARC_W_R(c, 31));
  /* 1a2580: tbnz w21, #0, #0x1a25cc */
  if (((ARC_W_R(c, 21)) >> 0 & 1) != 0) goto L_1a25cc;
  /* 1a2584: b #0x1a25d4 */
  goto L_1a25d4;
L_1a2588:;
  /* 1a2588: sub w8, w27, #2 */
  ARC_W_W(c, 8, (ARC_W_R(c, 27) - UINT64_C(2)));
  /* 1a258c: mov w9, #0x18 */
  ARC_W_W(c, 9, UINT64_C(24));
  /* 1a2590: ldr x10, [x23] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 23)));
  /* 1a2594: nop  */
  /* nop: no architectural effect here */
  /* 1a2598: smaddl x1, w8, w9, x10 */
  ARC_X_W(c, 1, (((int64_t)(ARC_X_R(c, 10))) + (((int64_t)(int32_t)(ARC_W_R(c, 8))) * ((int64_t)(int32_t)(ARC_W_R(c, 9))))));
  /* 1a259c: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 1a25a0: bl #0x1bce10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1713572));
  fn2_1bce10(c);
L_1a25a4:;
  /* 1a25a4: sub w8, w27, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 27) - UINT64_C(1)));
  /* 1a25a8: mov w9, #0x18 */
  ARC_W_W(c, 9, UINT64_C(24));
  /* 1a25ac: ldr x10, [x23] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 23)));
  /* 1a25b0: nop  */
  /* nop: no architectural effect here */
  /* 1a25b4: smaddl x1, w8, w9, x10 */
  ARC_X_W(c, 1, (((int64_t)(ARC_X_R(c, 10))) + (((int64_t)(int32_t)(ARC_W_R(c, 8))) * ((int64_t)(int32_t)(ARC_W_R(c, 9))))));
  /* 1a25b8: add x0, x26, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 26) + UINT64_C(24)));
  /* 1a25bc: bl #0x1bce10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1713600));
  fn2_1bce10(c);
  /* 1a25c0: add x22, x22, x21, asr #1 */
  ARC_X_W(c, 22, (ARC_X_R(c, 22) + ((uint64_t)((int64_t)(ARC_X_R(c, 21)) >> 1))));
  /* 1a25c4: str wzr, [x20] */
  arc_st32(ARC_X_R(c, 20), ARC_W_R(c, 31));
  /* 1a25c8: tbz w21, #0, #0x1a25d4 */
  if (((ARC_W_R(c, 21)) >> 0 & 1) == 0) goto L_1a25d4;
L_1a25cc:;
  /* 1a25cc: ldr x8, [x22] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 22)));
  /* 1a25d0: ldr x19, [x8, x19] */
  ARC_X_W(c, 19, arc_ld64((ARC_X_R(c, 8) + ARC_X_R(c, 19))));
L_1a25d4:;
  /* 1a25d4: add x8, sp, #8 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(8)));
  /* 1a25d8: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 1a25dc: add x20, sp, #0x20 */
  ARC_X_W(c, 20, ((c)->sp + UINT64_C(32)));
  /* 1a25e0: bl #0x1bc84c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1713636));
  fn2_1bc84c(c);
  /* 1a25e4: add x8, x29, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1a25e8: add x0, x26, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 26) + UINT64_C(24)));
  /* 1a25ec: bl #0x1bccb8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1713648));
  fn2_1bccb8(c);
  /* 1a25f0: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 1a25f4: add x2, x29, #0x18 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1a25f8: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 1a25fc: blr x19 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1713664));
  arc_dispatch(c, ARC_X_R(c, 19));
  /* 1a2600: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1a2604: bl #0x1d97fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1713672));
  fn2_1d97fc(c);
  /* 1a2608: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1a260c: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1713680));
  fn2_1ccd9c(c);
  /* 1a2610: add x0, x20, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(24)));
  /* 1a2614: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1713688));
  fn2_1bc620(c);
  /* 1a2618: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 1a261c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1713696));
  fn2_1bc620(c);
  /* 1a2620: ldp x20, x19, [sp, #0xa0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(160));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1a2624: ldr x27, [sp, #0x60] */
  ARC_X_W(c, 27, arc_ld64(((c)->sp + INT64_C(96))));
  /* 1a2628: ldp x22, x21, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1a262c: ldp x24, x23, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 1a2630: ldp x26, x25, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* 1a2634: ldp x29, x30, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1a2638: add sp, sp, #0xb0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(176)));
  /* 1a263c: ret  */
  return;
}

void fn2_1a3f14(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077575956));
  /* 1a3f14: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1a3f18: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 1a3f1c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1a3f20: adrp x8, #0x256000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2449408)));
  /* 1a3f24: add x8, x8, #0x470 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1136)));
  /* 1a3f28: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1a3f2c: str x8, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* 1a3f30: bl #0x1a4034 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1720116));
  fn2_1a4034(c);
  /* 1a3f34: adrp x8, #0x25d000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 1a3f38: ldr x9, [x8, #0x3c8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(968))));
  /* 1a3f3c: cmp x9, x19 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 19));
  /* 1a3f40: b.ne #0x1a3f48 */
  if (ARC_COND(c, 1)) goto L_1a3f48;
  /* 1a3f44: str xzr, [x8, #0x3c8] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(968)), ARC_X_R(c, 31));
L_1a3f48:;
  /* 1a3f48: ldr x8, [x19, #0x68] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(104))));
  /* 1a3f4c: cbz x8, #0x1a3f74 */
  if ((ARC_X_R(c, 8)) == 0) goto L_1a3f74;
  /* 1a3f50: add x0, x19, #0x60 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(96)));
  /* 1a3f54: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* 1a3f58: bl #0x1a6e28 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1720156));
  fn2_1a6e28(c);
  /* 1a3f5c: ldr x0, [x19, #0x68] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(104))));
  /* 1a3f60: cbz x0, #0x1a3f74 */
  if ((ARC_X_R(c, 0)) == 0) goto L_1a3f74;
  /* 1a3f64: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* 1a3f68: bl #0x1b5ce8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1720172));
  fn2_1b5ce8(c);
  /* 1a3f6c: str xzr, [x19, #0x68] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(104)), ARC_X_R(c, 31));
  /* 1a3f70: str wzr, [x19, #0x64] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(100)), ARC_W_R(c, 31));
L_1a3f74:;
  /* 1a3f74: ldr x0, [x19, #0x58] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(88))));
  /* 1a3f78: cbz x0, #0x1a3f98 */
  if ((ARC_X_R(c, 0)) == 0) goto L_1a3f98;
  /* 1a3f7c: ldr w8, [x19, #0x50] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 19) + INT64_C(80))));
  /* 1a3f80: cbz w8, #0x1a3f88 */
  if ((ARC_W_R(c, 8)) == 0) goto L_1a3f88;
  /* 1a3f84: str wzr, [x19, #0x50] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(80)), ARC_W_R(c, 31));
L_1a3f88:;
  /* 1a3f88: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* 1a3f8c: bl #0x1b5ce8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1720208));
  fn2_1b5ce8(c);
  /* 1a3f90: str xzr, [x19, #0x58] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(88)), ARC_X_R(c, 31));
  /* 1a3f94: str wzr, [x19, #0x54] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(84)), ARC_W_R(c, 31));
L_1a3f98:;
  /* 1a3f98: add x0, x19, #0x2b */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(43)));
  /* 1a3f9c: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1720224));
  fn2_1ccd9c(c);
  /* 1a3fa0: add x0, x19, #0x23 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(35)));
  /* 1a3fa4: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1720232));
  fn2_1ccd9c(c);
  /* 1a3fa8: ldr x0, [x19, #8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* 1a3fac: adrp x8, #0x250000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2424832)));
  /* 1a3fb0: add x8, x8, #0x5e0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1504)));
  /* 1a3fb4: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* 1a3fb8: cbz x0, #0x1a3fe0 */
  if ((ARC_X_R(c, 0)) == 0) goto L_1a3fe0;
L_1a3fbc:;
  /* 1a3fbc: ldr x1, [x0] */
  ARC_X_W(c, 1, arc_ld64(ARC_X_R(c, 0)));
  /* 1a3fc0: cbz x1, #0x1a3fec */
  if ((ARC_X_R(c, 1)) == 0) goto L_1a3fec;
  /* 1a3fc4: bl #0xaeb74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1720264));
  fn2_aeb74(c);
  /* 1a3fc8: ldr x0, [x19, #8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* 1a3fcc: ldr w8, [x0, #0x10] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 0) + INT64_C(16))));
  /* 1a3fd0: cbnz w8, #0x1a3fbc */
  if ((ARC_W_R(c, 8)) != 0) goto L_1a3fbc;
  /* 1a3fd4: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* 1a3fd8: bl #0x1b5ce8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1720284));
  fn2_1b5ce8(c);
  /* 1a3fdc: str xzr, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 31));
L_1a3fe0:;
  /* 1a3fe0: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1a3fe4: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1a3fe8: ret  */
  return;
L_1a3fec:;
  /* 1a3fec: ldr w8, [x0, #0x10] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 0) + INT64_C(16))));
  /* 1a3ff0: cbnz w8, #0x1a4004 */
  if ((ARC_W_R(c, 8)) != 0) goto L_1a4004;
  /* 1a3ff4: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* 1a3ff8: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1a3ffc: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1a4000: b #0x1b5ce8 */
  fn2_1b5ce8(c); return;
L_1a4004:;
  /* 1a4004: adrp x0, #0x29000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(167936)));
  /* 1a4008: add x0, x0, #0x23f */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(575)));
  /* 1a400c: adrp x1, #0x1b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(110592)));
  /* 1a4010: add x1, x1, #0x30a */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(778)));
  /* 1a4014: adrp x3, #0x2e000 */
  ARC_X_W(c, 3, (arc_image_bases[2] + UINT64_C(188416)));
  /* 1a4018: add x3, x3, #0xbb4 */
  ARC_X_W(c, 3, (ARC_X_R(c, 3) + UINT64_C(2996)));
  /* 1a401c: mov w2, #0x317 */
  ARC_W_W(c, 2, UINT64_C(791));
  /* 1a4020: mov w4, wzr */
  ARC_W_W(c, 4, ARC_W_R(c, 31));
  /* 1a4024: mov w5, wzr */
  ARC_W_W(c, 5, ARC_W_R(c, 31));
  /* 1a4028: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1a402c: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1a4030: b #0x1b54b0 */
  fn2_1b54b0(c); return;
}

void fn2_1a6cec(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077587692));
  /* 1a6cec: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
  /* 1a6cf0: ret  */
  return;
}

void fn2_1a8b7c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077595516));
  /* 1a8b7c: b #0x1a7e5c */
  fn2_1a7e5c(c); return;
}

void fn2_1aac84(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077603972));
  /* 1aac84: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1aac88: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 1aac8c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1aac90: mov x5, x4 */
  ARC_X_W(c, 5, ARC_X_R(c, 4));
  /* 1aac94: mov x4, x3 */
  ARC_X_W(c, 4, ARC_X_R(c, 3));
  /* 1aac98: mov x3, x2 */
  ARC_X_W(c, 3, ARC_X_R(c, 2));
  /* 1aac9c: mov x9, x1 */
  ARC_X_W(c, 9, ARC_X_R(c, 1));
  /* 1aaca0: ldp x1, x2, [x0, #0x60] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(96));
    ARC_X_W(c, 1, arc_ld64(_pa));
    ARC_X_W(c, 2, arc_ld64(_pa + 8));
  }
  /* 1aaca4: add x6, x0, #0x48 */
  ARC_X_W(c, 6, (ARC_X_R(c, 0) + UINT64_C(72)));
  /* 1aaca8: mov x0, x9 */
  ARC_X_W(c, 0, ARC_X_R(c, 9));
  /* 1aacac: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* 1aacb0: bl #0x1aad08 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1748148));
  fn2_1aad08(c);
  /* 1aacb4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1aacb8: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1aacbc: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1aacc0: b #0x1bc084 */
  fn2_1bc084(c); return;
}

void fn2_1af070(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077621360));
  /* 1af070: ldr x8, [x0, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(24))));
  /* 1af074: str x1, [x8, #0x10] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(16)), ARC_X_R(c, 1));
  /* 1af078: ret  */
  return;
}

void fn2_1b01ec(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077625836));
  /* 1b01ec: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1b01f0: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1b01f4: nop  */
  /* nop: no architectural effect here */
  /* 1b01f8: adr x0, #0x25cc30 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2477104)));
  /* 1b01fc: bl #0x24b770 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1769984));
  fn2_24b770(c);
  /* 1b0200: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1b0204: ret  */
  return;
}

void fn2_1b391c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077639964));
  /* 1b391c: stp x29, x30, [sp, #-0x50]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-80));
    (c)->sp = (c)->sp + INT64_C(-80);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1b3920: str x25, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 25));
  /* 1b3924: stp x24, x23, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 1b3928: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1b392c: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1b3930: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1b3934: ldp x22, x21, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1b3938: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 1b393c: ldr x8, [x1, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 1) + INT64_C(8))));
  /* 1b3940: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 1b3944: sub x9, x22, x21 */
  ARC_X_W(c, 9, (ARC_X_R(c, 22) - ARC_X_R(c, 21)));
  /* 1b3948: cmp x21, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 22));
  /* 1b394c: add x23, x8, x9 */
  ARC_X_W(c, 23, (ARC_X_R(c, 8) + ARC_X_R(c, 9)));
  /* 1b3950: b.eq #0x1b39cc */
  if (ARC_COND(c, 0)) goto L_1b39cc;
  /* 1b3954: mov x24, x22 */
  ARC_X_W(c, 24, ARC_X_R(c, 22));
  /* 1b3958: mov x25, x23 */
  ARC_X_W(c, 25, ARC_X_R(c, 23));
L_1b395c:;
  /* 1b395c: ldr w8, [x24] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 24)));
  /* 1b3960: add x0, x25, #4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 25) + UINT64_C(4)));
  /* 1b3964: add x1, x24, #4 */
  ARC_X_W(c, 1, (ARC_X_R(c, 24) + UINT64_C(4)));
  /* 1b3968: str w8, [x25] */
  arc_st32(ARC_X_R(c, 25), ARC_W_R(c, 8));
  /* 1b396c: bl #0x1d2ca0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1784176));
  fn2_1d2ca0(c);
  /* 1b3970: add x0, x25, #0xc */
  ARC_X_W(c, 0, (ARC_X_R(c, 25) + UINT64_C(12)));
  /* 1b3974: add x1, x24, #0xc */
  ARC_X_W(c, 1, (ARC_X_R(c, 24) + UINT64_C(12)));
  /* 1b3978: bl #0x1d2ca0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1784188));
  fn2_1d2ca0(c);
  /* 1b397c: ldr w8, [x24, #0x14] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 24) + INT64_C(20))));
  /* 1b3980: add x0, x25, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 25) + UINT64_C(24)));
  /* 1b3984: add x1, x24, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 24) + UINT64_C(24)));
  /* 1b3988: str w8, [x25, #0x14] */
  arc_st32((ARC_X_R(c, 25) + INT64_C(20)), ARC_W_R(c, 8));
  /* 1b398c: bl #0x1ccd18 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1784208));
  fn2_1ccd18(c);
  /* 1b3990: ldr w8, [x24, #0x20] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 24) + INT64_C(32))));
  /* 1b3994: add x24, x24, #0x24 */
  ARC_X_W(c, 24, (ARC_X_R(c, 24) + UINT64_C(36)));
  /* 1b3998: cmp x24, x21 */
  (void)arc_sub64(c, ARC_X_R(c, 24), ARC_X_R(c, 21));
  /* 1b399c: str w8, [x25, #0x20] */
  arc_st32((ARC_X_R(c, 25) + INT64_C(32)), ARC_W_R(c, 8));
  /* 1b39a0: add x25, x25, #0x24 */
  ARC_X_W(c, 25, (ARC_X_R(c, 25) + UINT64_C(36)));
  /* 1b39a4: b.ne #0x1b395c */
  if (ARC_COND(c, 1)) goto L_1b395c;
L_1b39a8:;
  /* 1b39a8: add x0, x22, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 22) + UINT64_C(24)));
  /* 1b39ac: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1784240));
  fn2_1ccd9c(c);
  /* 1b39b0: add x0, x22, #0xc */
  ARC_X_W(c, 0, (ARC_X_R(c, 22) + UINT64_C(12)));
  /* 1b39b4: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1784248));
  fn2_1d2d24(c);
  /* 1b39b8: add x0, x22, #4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 22) + UINT64_C(4)));
  /* 1b39bc: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1784256));
  fn2_1d2d24(c);
  /* 1b39c0: add x22, x22, #0x24 */
  ARC_X_W(c, 22, (ARC_X_R(c, 22) + UINT64_C(36)));
  /* 1b39c4: cmp x22, x21 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 21));
  /* 1b39c8: b.ne #0x1b39a8 */
  if (ARC_COND(c, 1)) goto L_1b39a8;
L_1b39cc:;
  /* 1b39cc: str x23, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 23));
  /* 1b39d0: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 1b39d4: stp x23, x8, [x20] */
  { const uint64_t _pa = ARC_X_R(c, 20);
    arc_st64(_pa, ARC_X_R(c, 23));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* 1b39d8: ldr x9, [x19, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* 1b39dc: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
  /* 1b39e0: ldr x8, [x20, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(8))));
  /* 1b39e4: str x9, [x20, #8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(8)), ARC_X_R(c, 9));
  /* 1b39e8: ldr x9, [x19, #0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(24))));
  /* 1b39ec: str x8, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 8));
  /* 1b39f0: ldr x8, [x20, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(16))));
  /* 1b39f4: str x9, [x20, #0x10] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(16)), ARC_X_R(c, 9));
  /* 1b39f8: ldr x9, [x19, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* 1b39fc: str x8, [x19, #0x18] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(24)), ARC_X_R(c, 8));
  /* 1b3a00: str x9, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 9));
  /* 1b3a04: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1b3a08: ldr x25, [sp, #0x10] */
  ARC_X_W(c, 25, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1b3a0c: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1b3a10: ldp x24, x23, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 1b3a14: ldp x29, x30, [sp], #0x50 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(80);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1b3a18: ret  */
  return;
}

void fn2_1b5b60(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077648736));
  /* 1b5b60: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1b5b64: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 1b5b68: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1b5b6c: adrp x9, #0x258000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1b5b70: mov w8, #0x10 */
  ARC_W_W(c, 8, UINT64_C(16));
  /* 1b5b74: tst w1, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 1) & UINT64_C(1)));
  /* 1b5b78: ldr x9, [x9, #0x678] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(1656))));
  /* 1b5b7c: csel x19, x8, xzr, ne */
  ARC_X_W(c, 19, (ARC_COND(c, 1) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 31)));
  /* 1b5b80: add x0, x19, x0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + ARC_X_R(c, 0)));
  /* 1b5b84: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* 1b5b88: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1792908));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 1b5b8c: cbz x0, #0x1b5ba0 */
  if ((ARC_X_R(c, 0)) == 0) goto L_1b5ba0;
  /* 1b5b90: add x0, x0, x19 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + ARC_X_R(c, 19)));
  /* 1b5b94: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1b5b98: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1b5b9c: ret  */
  return;
L_1b5ba0:;
  /* 1b5ba0: adrp x0, #0x1c000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(114688)));
  /* 1b5ba4: add x0, x0, #0x7a1 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1953)));
  /* 1b5ba8: adrp x1, #0x1b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(110592)));
  /* 1b5bac: add x1, x1, #0xa52 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2642)));
  /* 1b5bb0: adrp x3, #0x28000 */
  ARC_X_W(c, 3, (arc_image_bases[2] + UINT64_C(163840)));
  /* 1b5bb4: add x3, x3, #0x88 */
  ARC_X_W(c, 3, (ARC_X_R(c, 3) + UINT64_C(136)));
  /* 1b5bb8: mov w2, #0x2d */
  ARC_W_W(c, 2, UINT64_C(45));
  /* 1b5bbc: mov w4, wzr */
  ARC_W_W(c, 4, ARC_W_R(c, 31));
  /* 1b5bc0: mov w5, wzr */
  ARC_W_W(c, 5, ARC_W_R(c, 31));
  /* 1b5bc4: bl #0x1b54b0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1792968));
  fn2_1b54b0(c);
  /* 1b5bc8: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
  /* 1b5bcc: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1b5bd0: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1b5bd4: ret  */
  return;
}

void fn2_1b741c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077655068));
  /* 1b741c: stp x29, x30, [sp, #-0x50]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-80));
    (c)->sp = (c)->sp + INT64_C(-80);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1b7420: stp x26, x25, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* 1b7424: stp x24, x23, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 1b7428: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1b742c: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1b7430: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1b7434: ldp x10, x8, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    ARC_X_W(c, 10, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* 1b7438: mov x11, #-0x5555555555555556 */
  ARC_X_W(c, 11, UINT64_C(12297829382473034410));
  /* 1b743c: movk x11, #0xaaab */
  ARC_X_W(c, 11, ((ARC_X_R(c, 11) & UINT64_C(18446744073709486080)) | UINT64_C(43691)));
  /* 1b7440: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1b7444: sub x8, x8, x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) - ARC_X_R(c, 10)));
  /* 1b7448: asr x8, x8, #3 */
  ARC_X_W(c, 8, ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(3)) & 63))));
  /* 1b744c: mul x20, x8, x11 */
  ARC_X_W(c, 20, ((uint64_t)(ARC_X_R(c, 8)) * (uint64_t)(ARC_X_R(c, 11))));
  /* 1b7450: mov x8, #-0x5555555555555556 */
  ARC_X_W(c, 8, UINT64_C(12297829382473034410));
  /* 1b7454: movk x8, #0xaaa, lsl #48 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(281474976710655)) | UINT64_C(768426686420090880)));
  /* 1b7458: add x9, x20, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 20) + UINT64_C(1)));
  /* 1b745c: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* 1b7460: b.hi #0x1b7550 */
  if (ARC_COND(c, 8)) goto L_1b7550;
  /* 1b7464: ldr x12, [x19, #0x10] */
  ARC_X_W(c, 12, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* 1b7468: sub x10, x12, x10 */
  ARC_X_W(c, 10, (ARC_X_R(c, 12) - ARC_X_R(c, 10)));
  /* 1b746c: mov x12, #0x5555555555555555 */
  ARC_X_W(c, 12, UINT64_C(6148914691236517205));
  /* 1b7470: asr x10, x10, #3 */
  ARC_X_W(c, 10, ((uint64_t)((int64_t)(ARC_X_R(c, 10)) >> ((UINT64_C(3)) & 63))));
  /* 1b7474: movk x12, #0x555, lsl #48 */
  ARC_X_W(c, 12, ((ARC_X_R(c, 12) & UINT64_C(281474976710655)) | UINT64_C(384213343210045440)));
  /* 1b7478: mul x10, x10, x11 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 10)) * (uint64_t)(ARC_X_R(c, 11))));
  /* 1b747c: lsl x11, x10, #1 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* 1b7480: cmp x11, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 9));
  /* 1b7484: csel x9, x11, x9, hi */
  ARC_X_W(c, 9, (ARC_COND(c, 8) ? (ARC_X_R(c, 11)) : ARC_X_R(c, 9)));
  /* 1b7488: cmp x10, x12 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 12));
  /* 1b748c: csel x21, x9, x8, lo */
  ARC_X_W(c, 21, (ARC_COND(c, 3) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* 1b7490: cbz x21, #0x1b74b4 */
  if ((ARC_X_R(c, 21)) == 0) goto L_1b74b4;
  /* 1b7494: cmp x21, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 8));
  /* 1b7498: b.hi #0x1b7558 */
  if (ARC_COND(c, 8)) goto L_1b7558;
  /* 1b749c: add x8, x21, x21, lsl #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 21) + ((uint64_t)(ARC_X_R(c, 21)) << 1)));
  /* 1b74a0: mov x22, x1 */
  ARC_X_W(c, 22, ARC_X_R(c, 1));
  /* 1b74a4: lsl x0, x8, #3 */
  ARC_X_W(c, 0, ((uint64_t)(ARC_X_R(c, 8)) << ((UINT64_C(3)) & 63)));
  /* 1b74a8: bl #0x24b750 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1799340));
  fn2_24b750(c);
  /* 1b74ac: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 1b74b0: b #0x1b74b8 */
  goto L_1b74b8;
L_1b74b4:;
  /* 1b74b4: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
L_1b74b8:;
  /* 1b74b8: mov w8, #0x18 */
  ARC_W_W(c, 8, UINT64_C(24));
  /* 1b74bc: madd x23, x20, x8, x0 */
  ARC_X_W(c, 23, ((uint64_t)(ARC_X_R(c, 0)) + ((uint64_t)(ARC_X_R(c, 20)) * (uint64_t)(ARC_X_R(c, 8)))));
  /* 1b74c0: madd x25, x21, x8, x0 */
  ARC_X_W(c, 25, ((uint64_t)(ARC_X_R(c, 0)) + ((uint64_t)(ARC_X_R(c, 21)) * (uint64_t)(ARC_X_R(c, 8)))));
  /* 1b74c4: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 1b74c8: bl #0x1bc0b8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1799372));
  fn2_1bc0b8(c);
  /* 1b74cc: ldp x22, x21, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1b74d0: add x20, x23, #0x18 */
  ARC_X_W(c, 20, (ARC_X_R(c, 23) + UINT64_C(24)));
  /* 1b74d4: sub x8, x22, x21 */
  ARC_X_W(c, 8, (ARC_X_R(c, 22) - ARC_X_R(c, 21)));
  /* 1b74d8: cmp x21, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 22));
  /* 1b74dc: add x26, x23, x8 */
  ARC_X_W(c, 26, (ARC_X_R(c, 23) + ARC_X_R(c, 8)));
  /* 1b74e0: b.eq #0x1b7520 */
  if (ARC_COND(c, 0)) goto L_1b7520;
  /* 1b74e4: mov x23, x22 */
  ARC_X_W(c, 23, ARC_X_R(c, 22));
  /* 1b74e8: mov x24, x26 */
  ARC_X_W(c, 24, ARC_X_R(c, 26));
L_1b74ec:;
  /* 1b74ec: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 1b74f0: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* 1b74f4: bl #0x1bc0d4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1799416));
  fn2_1bc0d4(c);
  /* 1b74f8: add x23, x23, #0x18 */
  ARC_X_W(c, 23, (ARC_X_R(c, 23) + UINT64_C(24)));
  /* 1b74fc: add x24, x24, #0x18 */
  ARC_X_W(c, 24, (ARC_X_R(c, 24) + UINT64_C(24)));
  /* 1b7500: cmp x23, x21 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 21));
  /* 1b7504: b.ne #0x1b74ec */
  if (ARC_COND(c, 1)) goto L_1b74ec;
L_1b7508:;
  /* 1b7508: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 1b750c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1799440));
  fn2_1bc620(c);
  /* 1b7510: add x22, x22, #0x18 */
  ARC_X_W(c, 22, (ARC_X_R(c, 22) + UINT64_C(24)));
  /* 1b7514: cmp x22, x21 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 21));
  /* 1b7518: b.ne #0x1b7508 */
  if (ARC_COND(c, 1)) goto L_1b7508;
  /* 1b751c: ldr x21, [x19] */
  ARC_X_W(c, 21, arc_ld64(ARC_X_R(c, 19)));
L_1b7520:;
  /* 1b7520: stp x26, x20, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 20));
  }
  /* 1b7524: str x25, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 25));
  /* 1b7528: cbz x21, #0x1b7534 */
  if ((ARC_X_R(c, 21)) == 0) goto L_1b7534;
  /* 1b752c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 1b7530: bl #0x24b730 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1799476));
  fn2_24b730(c);
L_1b7534:;
  /* 1b7534: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1b7538: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1b753c: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1b7540: ldp x24, x23, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 1b7544: ldp x26, x25, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* 1b7548: ldp x29, x30, [sp], #0x50 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(80);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1b754c: ret  */
  return;
L_1b7550:;
  /* 1b7550: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1b7554: bl #0x1b3814 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1799512));
  fn2_1b3814(c);
L_1b7558:;
  /* 1b7558: bl #0x179cc0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1799516));
  fn2_179cc0(c);
}

void fn2_1b7d74(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077657460));
  /* 1b7d74: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1b7d78: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 1b7d7c: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1b7d80: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1b7d84: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 1b7d88: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1b7d8c: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 1b7d90: mov x21, x8 */
  ARC_X_W(c, 21, ARC_X_R(c, 8));
  /* 1b7d94: bl #0x1ccc74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1801624));
  fn2_1ccc74(c);
  /* 1b7d98: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1b7d9c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 1b7da0: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 1b7da4: ldr x8, [x8, #0x828] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2088))));
  /* 1b7da8: ldr x3, [x8] */
  ARC_X_W(c, 3, arc_ld64(ARC_X_R(c, 8)));
  /* 1b7dac: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* 1b7db0: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1b7db4: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1b7db8: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1b7dbc: br x3 */
  arc_dispatch(c, ARC_X_R(c, 3)); return;
}

void fn2_1b8a30(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077660720));
  /* 1b8a30: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1b8a34: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 1b8a38: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1b8a3c: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1b8a40: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1b8a44: ldr x8, [x8, #0x870] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2160))));
  /* 1b8a48: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 1b8a4c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1804880));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1b8a50: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1b8a54: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1b8a58: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1b8a5c: ret  */
  return;
}

void fn2_1b9210(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077662736));
  /* 1b9210: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 1b9214: cbz x8, #0x1b9220 */
  if ((ARC_X_R(c, 8)) == 0) goto L_1b9220;
  /* 1b9218: ldur x0, [x8, #-8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(-8))));
  /* 1b921c: ret  */
  return;
L_1b9220:;
  /* 1b9220: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
  /* 1b9224: ret  */
  return;
}

void fn2_1ba244(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077666884));
  /* 1ba244: sub sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(32)));
  /* 1ba248: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1ba24c: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1ba250: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 1ba254: cbz x8, #0x1ba264 */
  if ((ARC_X_R(c, 8)) == 0) goto L_1ba264;
  /* 1ba258: ldur x4, [x8, #-8] */
  ARC_X_W(c, 4, arc_ld64((ARC_X_R(c, 8) + INT64_C(-8))));
  /* 1ba25c: cmp x4, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 4), UINT64_C(1));
  /* 1ba260: b.hi #0x1ba284 */
  if (ARC_COND(c, 8)) goto L_1ba284;
L_1ba264:;
  /* 1ba264: ldr x8, [x1] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 1)));
  /* 1ba268: cbz x8, #0x1ba2ec */
  if ((ARC_X_R(c, 8)) == 0) goto L_1ba2ec;
  /* 1ba26c: ldur x8, [x8, #-8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-8))));
  /* 1ba270: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 1ba274: cset w0, hi */
  ARC_W_W(c, 0, (ARC_COND(c, 8) ? 1 : 0));
  /* 1ba278: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1ba27c: add sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(32)));
  /* 1ba280: ret  */
  return;
L_1ba284:;
  /* 1ba284: cmp x4, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 4), UINT64_C(0));
  /* 1ba288: b.le #0x1ba2a4 */
  if (ARC_COND(c, 13)) goto L_1ba2a4;
  /* 1ba28c: ldr x12, [x1] */
  ARC_X_W(c, 12, arc_ld64(ARC_X_R(c, 1)));
  /* 1ba290: cbz x12, #0x1ba2fc */
  if ((ARC_X_R(c, 12)) == 0) goto L_1ba2fc;
  /* 1ba294: ldur x4, [x12, #-8] */
  ARC_X_W(c, 4, arc_ld64((ARC_X_R(c, 12) + INT64_C(-8))));
  /* 1ba298: cbz x4, #0x1ba2fc */
  if ((ARC_X_R(c, 4)) == 0) goto L_1ba2fc;
  /* 1ba29c: cmp x4, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 4), UINT64_C(0));
  /* 1ba2a0: b.gt #0x1ba304 */
  if (ARC_COND(c, 12)) goto L_1ba304;
L_1ba2a4:;
  /* 1ba2a4: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* 1ba2a8: adrp x0, #0x20000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(131072)));
  /* 1ba2ac: add x0, x0, #0xf9e */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3998)));
  /* 1ba2b0: adrp x1, #0x1b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(110592)));
  /* 1ba2b4: add x1, x1, #0x446 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1094)));
  /* 1ba2b8: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 1ba2bc: adrp x5, #0x25000 */
  ARC_X_W(c, 5, (arc_image_bases[2] + UINT64_C(151552)));
  /* 1ba2c0: add x5, x5, #0x33c */
  ARC_X_W(c, 5, (ARC_X_R(c, 5) + UINT64_C(828)));
  /* 1ba2c4: adrp x6, #0x20000 */
  ARC_X_W(c, 6, (arc_image_bases[2] + UINT64_C(131072)));
  /* 1ba2c8: add x6, x6, #0xcfc */
  ARC_X_W(c, 6, (ARC_X_R(c, 6) + UINT64_C(3324)));
  /* 1ba2cc: adrp x7, #0x1e000 */
  ARC_X_W(c, 7, (arc_image_bases[2] + UINT64_C(122880)));
  /* 1ba2d0: add x7, x7, #0xb6f */
  ARC_X_W(c, 7, (ARC_X_R(c, 7) + UINT64_C(2927)));
  /* 1ba2d4: mov w2, #0xe1 */
  ARC_W_W(c, 2, UINT64_C(225));
  /* 1ba2d8: strb w8, [sp, #8] */
  arc_st8(((c)->sp + INT64_C(8)), ARC_W_R(c, 8));
  /* 1ba2dc: strb wzr, [sp] */
  arc_st8((c)->sp, ARC_W_R(c, 31));
  /* 1ba2e0: bl #0x1b5870 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1811172));
  fn2_1b5870(c);
  /* 1ba2e4: bl #0x1b5b50 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1811176));
  fn2_1b5b50(c);
  /* 1ba2e8: brk #1 */
  arc_trap(c, "brk");
L_1ba2ec:;
  /* 1ba2ec: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 1ba2f0: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1ba2f4: add sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(32)));
  /* 1ba2f8: ret  */
  return;
L_1ba2fc:;
  /* 1ba2fc: adrp x12, #0x39000 */
  ARC_X_W(c, 12, (arc_image_bases[2] + UINT64_C(233472)));
  /* 1ba300: add x12, x12, #0xb78 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) + UINT64_C(2936)));
L_1ba304:;
  /* 1ba304: ldrh w9, [x8] */
  ARC_W_W(c, 9, arc_ld16(ARC_X_R(c, 8)));
  /* 1ba308: ldrh w10, [x12] */
  ARC_W_W(c, 10, arc_ld16(ARC_X_R(c, 12)));
  /* 1ba30c: cmp w9, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(0));
  /* 1ba310: cset w11, eq */
  ARC_W_W(c, 11, (ARC_COND(c, 0) ? 1 : 0));
  /* 1ba314: cmp w10, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(0));
  /* 1ba318: cset w13, eq */
  ARC_W_W(c, 13, (ARC_COND(c, 0) ? 1 : 0));
  /* 1ba31c: cbz w9, #0x1ba354 */
  if ((ARC_W_R(c, 9)) == 0) goto L_1ba354;
  /* 1ba320: cbz w10, #0x1ba354 */
  if ((ARC_W_R(c, 10)) == 0) goto L_1ba354;
  /* 1ba324: add x8, x8, #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2)));
  /* 1ba328: add x12, x12, #2 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) + UINT64_C(2)));
L_1ba32c:;
  /* 1ba32c: cmp w9, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 9), ARC_W_R(c, 10));
  /* 1ba330: b.ne #0x1ba368 */
  if (ARC_COND(c, 1)) goto L_1ba368;
  /* 1ba334: ldrh w9, [x8], #2 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(2));
    ARC_W_W(c, 9, arc_ld16(_a));
  }
  /* 1ba338: ldrh w10, [x12], #2 */
  { const uint64_t _a = ARC_X_R(c, 12);
    ARC_X_W(c, 12, ARC_X_R(c, 12) + INT64_C(2));
    ARC_W_W(c, 10, arc_ld16(_a));
  }
  /* 1ba33c: cmp w9, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(0));
  /* 1ba340: cset w11, eq */
  ARC_W_W(c, 11, (ARC_COND(c, 0) ? 1 : 0));
  /* 1ba344: cmp w10, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(0));
  /* 1ba348: cset w13, eq */
  ARC_W_W(c, 13, (ARC_COND(c, 0) ? 1 : 0));
  /* 1ba34c: cbz w9, #0x1ba354 */
  if ((ARC_W_R(c, 9)) == 0) goto L_1ba354;
  /* 1ba350: cbnz w10, #0x1ba32c */
  if ((ARC_W_R(c, 10)) != 0) goto L_1ba32c;
L_1ba354:;
  /* 1ba354: eor w8, w13, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 13) ^ UINT64_C(1)));
  /* 1ba358: and w0, w11, w8 */
  ARC_W_W(c, 0, (ARC_W_R(c, 11) & ARC_W_R(c, 8)));
  /* 1ba35c: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1ba360: add sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(32)));
  /* 1ba364: ret  */
  return;
L_1ba368:;
  /* 1ba368: cset w0, lo */
  ARC_W_W(c, 0, (ARC_COND(c, 3) ? 1 : 0));
  /* 1ba36c: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1ba370: add sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(32)));
  /* 1ba374: ret  */
  return;
}

void fn2_1bb318(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077671192));
  /* 1bb318: str xzr, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 31));
  /* 1bb31c: ret  */
  return;
}

void fn2_1bbd60(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077673824));
  /* 1bbd60: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1bbd64: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 1bbd68: ldr x8, [x8, #0x8e0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2272))));
  /* 1bbd6c: ldr x2, [x8] */
  ARC_X_W(c, 2, arc_ld64(ARC_X_R(c, 8)));
  /* 1bbd70: br x2 */
  arc_dispatch(c, ARC_X_R(c, 2)); return;
}

void fn2_1bbfa0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077674400));
  /* 1bbfa0: nop  */
  /* nop: no architectural effect here */
  /* 1bbfa4: adr x8, #0x25d7a8 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2480040)));
  /* 1bbfa8: ldr x2, [x8] */
  ARC_X_W(c, 2, arc_ld64(ARC_X_R(c, 8)));
  /* 1bbfac: br x2 */
  arc_dispatch(c, ARC_X_R(c, 2)); return;
}

void fn2_1bc508(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077675784));
  /* 1bc508: adrp x8, #0x25d000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 1bc50c: stp xzr, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 1bc510: str xzr, [x0, #0x10] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(16)), ARC_X_R(c, 31));
  /* 1bc514: ldr x2, [x8, #0xb28] */
  ARC_X_W(c, 2, arc_ld64((ARC_X_R(c, 8) + INT64_C(2856))));
  /* 1bc518: br x2 */
  arc_dispatch(c, ARC_X_R(c, 2)); return;
}

void fn2_1bc968(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077676904));
  /* 1bc968: sub sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(32)));
  /* 1bc96c: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1bc970: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1bc974: adrp x8, #0x25d000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 1bc978: mov x1, x0 */
  ARC_X_W(c, 1, ARC_X_R(c, 0));
  /* 1bc97c: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 1bc980: ldr x8, [x8, #0xbe8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3048))));
  /* 1bc984: str wzr, [sp] */
  arc_st32((c)->sp, ARC_W_R(c, 31));
  /* 1bc988: stur xzr, [sp, #4] */
  arc_st64(((c)->sp + INT64_C(4)), ARC_X_R(c, 31));
  /* 1bc98c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1821072));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1bc990: ldr x0, [sp] */
  ARC_X_W(c, 0, arc_ld64((c)->sp));
  /* 1bc994: ldr w1, [sp, #8] */
  ARC_W_W(c, 1, arc_ld32(((c)->sp + INT64_C(8))));
  /* 1bc998: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1bc99c: add sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(32)));
  /* 1bc9a0: ret  */
  return;
}

void fn2_1bce10(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077678096));
  /* 1bce10: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1bce14: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1bce18: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1bce1c: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1bce20: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 1bce24: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 1bce28: ldr x8, [x8, #0x760] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(1888))));
  /* 1bce2c: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 1bce30: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1822260));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1bce34: mov x8, #0xf7ef */
  ARC_X_W(c, 8, UINT64_C(63471));
  /* 1bce38: movk x8, #0x90, lsl #16 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(18446744069414649855)) | UINT64_C(9437184)));
  /* 1bce3c: movk x8, #0x40, lsl #32 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(18446462603027808255)) | UINT64_C(274877906944)));
  /* 1bce40: lsr x8, x8, x0 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) >> ((ARC_X_R(c, 0)) & 63)));
  /* 1bce44: tbz w8, #0, #0x1bce84 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1bce84;
L_1bce48:;
  /* 1bce48: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1bce4c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1bce50: ldr x8, [x8, #0x6b0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(1712))));
  /* 1bce54: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 1bce58: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1822300));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1bce5c: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1bce60: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1bce64: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 1bce68: ldr x8, [x8, #0x6a8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(1704))));
  /* 1bce6c: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 1bce70: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1822324));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1bce74: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1bce78: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1bce7c: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1bce80: ret  */
  return;
L_1bce84:;
  /* 1bce84: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1bce88: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1bce8c: ldr x8, [x8, #0x6b8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(1720))));
  /* 1bce90: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 1bce94: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1822360));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1bce98: b #0x1bce48 */
  goto L_1bce48;
}

void fn2_1bdb2c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077681452));
  /* 1bdb2c: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1bdb30: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1bdb34: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1bdb38: ldr x8, [x8, #0x798] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(1944))));
  /* 1bdb3c: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 1bdb40: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1825604));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1bdb44: tst w0, #0xff */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 0) & UINT64_C(255)));
  /* 1bdb48: cset w0, ne */
  ARC_W_W(c, 0, (ARC_COND(c, 1) ? 1 : 0));
  /* 1bdb4c: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1bdb50: ret  */
  return;
}

void fn2_1bee08(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077686280));
  /* 1bee08: ldr q0, [x0, #0x10] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))), arc_ld64((ARC_X_R(c, 0) + INT64_C(16)) + 8));
  /* 1bee0c: fneg v0.4s, v0.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.f32[0] = -((c)->q[0].f32[0]);
    _t.f32[1] = -((c)->q[0].f32[1]);
    _t.f32[2] = -((c)->q[0].f32[2]);
    _t.f32[3] = -((c)->q[0].f32[3]);
    (c)->q[0] = _t; }
  /* 1bee10: str q0, [x0, #0x10] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(16)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 0) + INT64_C(16)) + 8, (c)->q[0].u64[1]);
  /* 1bee14: ret  */
  return;
}

void fn2_1c18c8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077697224));
  /* 1c18c8: ldur d0, [x0, #4] */
  arc_du_w(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(4))));
  /* 1c18cc: ldur d1, [x1, #4] */
  arc_du_w(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(4))));
  /* 1c18d0: ldr s4, [x0] */
  arc_su_w(c, 4, arc_ld32(ARC_X_R(c, 0)));
  /* 1c18d4: ldr s5, [x1] */
  arc_su_w(c, 5, arc_ld32(ARC_X_R(c, 1)));
  /* 1c18d8: ldr d17, [x2] */
  arc_du_w(c, 17, arc_ld64(ARC_X_R(c, 2)));
  /* 1c18dc: dup v16.2s, v0.s[1] */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[0].u32[1]);
    _t.u32[1] = ((c)->q[0].u32[1]);
    (c)->q[16] = _t; }
  /* 1c18e0: dup v18.2s, v1.s[1] */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[1].u32[1]);
    _t.u32[1] = ((c)->q[1].u32[1]);
    (c)->q[18] = _t; }
  /* 1c18e4: fmul s6, s5, s0 */
  arc_s_w(c, 6, (float)(arc_fmul32(ARC_S_R(c, 5), ARC_S_R(c, 0))));
  /* 1c18e8: mov v16.s[1], v4.s[0] */
  (c)->q[16].u32[1] = ((c)->q[4].u32[0]);
  /* 1c18ec: mov v18.s[1], v5.s[0] */
  (c)->q[18].u32[1] = ((c)->q[5].u32[0]);
  /* 1c18f0: fmul v2.2s, v16.2s, v1.2s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.f32[0] = arc_fmul32((c)->q[16].f32[0], (c)->q[1].f32[0]);
    _t.f32[1] = arc_fmul32((c)->q[16].f32[1], (c)->q[1].f32[1]);
    (c)->q[2] = _t; }
  /* 1c18f4: fmul v3.2s, v0.2s, v18.2s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.f32[0] = arc_fmul32((c)->q[0].f32[0], (c)->q[18].f32[0]);
    _t.f32[1] = arc_fmul32((c)->q[0].f32[1], (c)->q[18].f32[1]);
    (c)->q[3] = _t; }
  /* 1c18f8: fsub v7.2s, v3.2s, v2.2s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.f32[0] = arc_fsub32((c)->q[3].f32[0], (c)->q[2].f32[0]);
    _t.f32[1] = arc_fsub32((c)->q[3].f32[1], (c)->q[2].f32[1]);
    (c)->q[7] = _t; }
  /* 1c18fc: fmul s2, s4, s1 */
  arc_s_w(c, 2, (float)(arc_fmul32(ARC_S_R(c, 4), ARC_S_R(c, 1))));
  /* 1c1900: fsub s3, s2, s6 */
  arc_s_w(c, 3, (float)(arc_fsub32(ARC_S_R(c, 2), ARC_S_R(c, 6))));
  /* 1c1904: fmul v2.2s, v17.2s, v7.2s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.f32[0] = arc_fmul32((c)->q[17].f32[0], (c)->q[7].f32[0]);
    _t.f32[1] = arc_fmul32((c)->q[17].f32[1], (c)->q[7].f32[1]);
    (c)->q[2] = _t; }
  /* 1c1908: ldur d17, [x2, #4] */
  arc_du_w(c, 17, arc_ld64((ARC_X_R(c, 2) + INT64_C(4))));
  /* 1c190c: faddp s2, v2.2s */
  arc_s_w(c, 2, (float)(arc_fadd32((c)->q[2].f32[0], (c)->q[2].f32[1])));
  /* 1c1910: fmul s6, s3, v17.s[1] */
  arc_s_w(c, 6, (float)(arc_fmul32(ARC_S_R(c, 3), (c)->q[17].f32[1])));
  /* 1c1914: fadd s6, s2, s6 */
  arc_s_w(c, 6, (float)(arc_fadd32(ARC_S_R(c, 2), ARC_S_R(c, 6))));
  /* 1c1918: fabs s2, s6 */
  arc_s_w(c, 2, (float)(fabsf(ARC_S_R(c, 6))));
  /* 1c191c: cbz x3, #0x1c19b8 */
  if ((ARC_X_R(c, 3)) == 0) goto L_1c19b8;
  /* 1c1920: mov w8, #0xc5ac */
  ARC_W_W(c, 8, UINT64_C(50604));
  /* 1c1924: movk w8, #0x3727, lsl #16 */
  ARC_W_W(c, 8, ((ARC_W_R(c, 8) & UINT64_C(18446744069414649855)) | UINT64_C(925302784)));
  /* 1c1928: fmov s19, w8 */
  arc_su_w(c, 19, (uint32_t)(ARC_W_R(c, 8)));
  /* 1c192c: fcmp s2, s19 */
  arc_fcmp(c, (double)(ARC_S_R(c, 2)), (double)(ARC_S_R(c, 19)));
  /* 1c1930: b.mi #0x1c19b8 */
  if (ARC_COND(c, 4)) goto L_1c19b8;
  /* 1c1934: dup v19.2s, v17.s[1] */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[17].u32[1]);
    _t.u32[1] = ((c)->q[17].u32[1]);
    (c)->q[19] = _t; }
  /* 1c1938: ldr s20, [x2] */
  arc_su_w(c, 20, arc_ld32(ARC_X_R(c, 2)));
  /* 1c193c: fmul v18.2s, v18.2s, v17.2s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.f32[0] = arc_fmul32((c)->q[18].f32[0], (c)->q[17].f32[0]);
    _t.f32[1] = arc_fmul32((c)->q[18].f32[1], (c)->q[17].f32[1]);
    (c)->q[18] = _t; }
  /* 1c1940: fmul v16.2s, v16.2s, v17.2s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.f32[0] = arc_fmul32((c)->q[16].f32[0], (c)->q[17].f32[0]);
    _t.f32[1] = arc_fmul32((c)->q[16].f32[1], (c)->q[17].f32[1]);
    (c)->q[16] = _t; }
  /* 1c1944: fmul s5, s5, s17 */
  arc_s_w(c, 5, (float)(arc_fmul32(ARC_S_R(c, 5), ARC_S_R(c, 17))));
  /* 1c1948: fmul s4, s4, s17 */
  arc_s_w(c, 4, (float)(arc_fmul32(ARC_S_R(c, 4), ARC_S_R(c, 17))));
  /* 1c194c: ldr s17, [x2, #0xc] */
  arc_su_w(c, 17, arc_ld32((ARC_X_R(c, 2) + INT64_C(12))));
  /* 1c1950: mov v19.s[1], v20.s[0] */
  (c)->q[19].u32[1] = ((c)->q[20].u32[0]);
  /* 1c1954: fmul v7.2s, v7.2s, v17.s[0] */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.f32[0] = arc_fmul32((c)->q[7].f32[0], (c)->q[17].f32[0]);
    _t.f32[1] = arc_fmul32((c)->q[7].f32[1], (c)->q[17].f32[0]);
    (c)->q[7] = _t; }
  /* 1c1958: fmul s3, s3, s17 */
  arc_s_w(c, 3, (float)(arc_fmul32(ARC_S_R(c, 3), ARC_S_R(c, 17))));
  /* 1c195c: fmul v21.2s, v1.2s, v19.2s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.f32[0] = arc_fmul32((c)->q[1].f32[0], (c)->q[19].f32[0]);
    _t.f32[1] = arc_fmul32((c)->q[1].f32[1], (c)->q[19].f32[1]);
    (c)->q[21] = _t; }
  /* 1c1960: fmul v19.2s, v0.2s, v19.2s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.f32[0] = arc_fmul32((c)->q[0].f32[0], (c)->q[19].f32[0]);
    _t.f32[1] = arc_fmul32((c)->q[0].f32[1], (c)->q[19].f32[1]);
    (c)->q[19] = _t; }
  /* 1c1964: fmul s1, s1, s20 */
  arc_s_w(c, 1, (float)(arc_fmul32(ARC_S_R(c, 1), ARC_S_R(c, 20))));
  /* 1c1968: fmul s0, s0, s20 */
  arc_s_w(c, 0, (float)(arc_fmul32(ARC_S_R(c, 0), ARC_S_R(c, 20))));
  /* 1c196c: fsub v18.2s, v21.2s, v18.2s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.f32[0] = arc_fsub32((c)->q[21].f32[0], (c)->q[18].f32[0]);
    _t.f32[1] = arc_fsub32((c)->q[21].f32[1], (c)->q[18].f32[1]);
    (c)->q[18] = _t; }
  /* 1c1970: fsub v16.2s, v16.2s, v19.2s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.f32[0] = arc_fsub32((c)->q[16].f32[0], (c)->q[19].f32[0]);
    _t.f32[1] = arc_fsub32((c)->q[16].f32[1], (c)->q[19].f32[1]);
    (c)->q[16] = _t; }
  /* 1c1974: fsub s1, s5, s1 */
  arc_s_w(c, 1, (float)(arc_fsub32(ARC_S_R(c, 5), ARC_S_R(c, 1))));
  /* 1c1978: fsub s0, s0, s4 */
  arc_s_w(c, 0, (float)(arc_fsub32(ARC_S_R(c, 0), ARC_S_R(c, 4))));
  /* 1c197c: ldr s19, [x0, #0xc] */
  arc_su_w(c, 19, arc_ld32((ARC_X_R(c, 0) + INT64_C(12))));
  /* 1c1980: ldr s21, [x1, #0xc] */
  arc_su_w(c, 21, arc_ld32((ARC_X_R(c, 1) + INT64_C(12))));
  /* 1c1984: dup v4.2s, v6.s[0] */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[6].u32[0]);
    _t.u32[1] = ((c)->q[6].u32[0]);
    (c)->q[4] = _t; }
  /* 1c1988: fmul v18.2s, v18.2s, v19.s[0] */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.f32[0] = arc_fmul32((c)->q[18].f32[0], (c)->q[19].f32[0]);
    _t.f32[1] = arc_fmul32((c)->q[18].f32[1], (c)->q[19].f32[0]);
    (c)->q[18] = _t; }
  /* 1c198c: fmul v16.2s, v16.2s, v21.s[0] */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.f32[0] = arc_fmul32((c)->q[16].f32[0], (c)->q[21].f32[0]);
    _t.f32[1] = arc_fmul32((c)->q[16].f32[1], (c)->q[21].f32[0]);
    (c)->q[16] = _t; }
  /* 1c1990: fmul s1, s1, s19 */
  arc_s_w(c, 1, (float)(arc_fmul32(ARC_S_R(c, 1), ARC_S_R(c, 19))));
  /* 1c1994: fmul s0, s0, s21 */
  arc_s_w(c, 0, (float)(arc_fmul32(ARC_S_R(c, 0), ARC_S_R(c, 21))));
  /* 1c1998: fadd v16.2s, v18.2s, v16.2s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.f32[0] = arc_fadd32((c)->q[18].f32[0], (c)->q[16].f32[0]);
    _t.f32[1] = arc_fadd32((c)->q[18].f32[1], (c)->q[16].f32[1]);
    (c)->q[16] = _t; }
  /* 1c199c: fadd s0, s1, s0 */
  arc_s_w(c, 0, (float)(arc_fadd32(ARC_S_R(c, 1), ARC_S_R(c, 0))));
  /* 1c19a0: fadd v5.2s, v16.2s, v7.2s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.f32[0] = arc_fadd32((c)->q[16].f32[0], (c)->q[7].f32[0]);
    _t.f32[1] = arc_fadd32((c)->q[16].f32[1], (c)->q[7].f32[1]);
    (c)->q[5] = _t; }
  /* 1c19a4: fadd s0, s0, s3 */
  arc_s_w(c, 0, (float)(arc_fadd32(ARC_S_R(c, 0), ARC_S_R(c, 3))));
  /* 1c19a8: fdiv v4.2s, v5.2s, v4.2s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.f32[0] = arc_fdiv32((c)->q[5].f32[0], (c)->q[4].f32[0]);
    _t.f32[1] = arc_fdiv32((c)->q[5].f32[1], (c)->q[4].f32[1]);
    (c)->q[4] = _t; }
  /* 1c19ac: fdiv s0, s0, s6 */
  arc_s_w(c, 0, (float)(arc_fdiv32(ARC_S_R(c, 0), ARC_S_R(c, 6))));
  /* 1c19b0: str d4, [x3] */
  arc_st64(ARC_X_R(c, 3), (c)->q[4].u64[0]);
  /* 1c19b4: str s0, [x3, #8] */
  arc_st32((ARC_X_R(c, 3) + INT64_C(8)), (c)->q[0].u32[0]);
L_1c19b8:;
  /* 1c19b8: mov w8, #0xc5ac */
  ARC_W_W(c, 8, UINT64_C(50604));
  /* 1c19bc: movk w8, #0x3727, lsl #16 */
  ARC_W_W(c, 8, ((ARC_W_R(c, 8) & UINT64_C(18446744069414649855)) | UINT64_C(925302784)));
  /* 1c19c0: fmov s0, w8 */
  arc_su_w(c, 0, (uint32_t)(ARC_W_R(c, 8)));
  /* 1c19c4: fcmp s2, s0 */
  arc_fcmp(c, (double)(ARC_S_R(c, 2)), (double)(ARC_S_R(c, 0)));
  /* 1c19c8: cset w0, pl */
  ARC_W_W(c, 0, (ARC_COND(c, 5) ? 1 : 0));
  /* 1c19cc: ret  */
  return;
}

void fn2_1c3568(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077704552));
  /* 1c3568: ldr s0, [x0] */
  arc_su_w(c, 0, arc_ld32(ARC_X_R(c, 0)));
  /* 1c356c: ldur d1, [x0, #4] */
  arc_du_w(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(4))));
  /* 1c3570: ldr d2, [x0, #0x10] */
  arc_du_w(c, 2, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 1c3574: ldur d3, [x0, #0x1c] */
  arc_du_w(c, 3, arc_ld64((ARC_X_R(c, 0) + INT64_C(28))));
  /* 1c3578: fmul s0, s0, s0 */
  arc_s_w(c, 0, (float)(arc_fmul32(ARC_S_R(c, 0), ARC_S_R(c, 0))));
  /* 1c357c: fmul v1.2s, v1.2s, v1.2s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.f32[0] = arc_fmul32((c)->q[1].f32[0], (c)->q[1].f32[0]);
    _t.f32[1] = arc_fmul32((c)->q[1].f32[1], (c)->q[1].f32[1]);
    (c)->q[1] = _t; }
  /* 1c3580: fmul v2.2s, v2.2s, v2.2s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.f32[0] = arc_fmul32((c)->q[2].f32[0], (c)->q[2].f32[0]);
    _t.f32[1] = arc_fmul32((c)->q[2].f32[1], (c)->q[2].f32[1]);
    (c)->q[2] = _t; }
  /* 1c3584: fmul v3.2s, v3.2s, v3.2s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.f32[0] = arc_fmul32((c)->q[3].f32[0], (c)->q[3].f32[0]);
    _t.f32[1] = arc_fmul32((c)->q[3].f32[1], (c)->q[3].f32[1]);
    (c)->q[3] = _t; }
  /* 1c3588: fadd s0, s0, s1 */
  arc_s_w(c, 0, (float)(arc_fadd32(ARC_S_R(c, 0), ARC_S_R(c, 1))));
  /* 1c358c: mov s1, v1.s[1] */
  arc_su_w(c, 1, (c)->q[1].u32[1]);
  /* 1c3590: fadd s0, s0, s1 */
  arc_s_w(c, 0, (float)(arc_fadd32(ARC_S_R(c, 0), ARC_S_R(c, 1))));
  /* 1c3594: ldr s1, [x0, #0xc] */
  arc_su_w(c, 1, arc_ld32((ARC_X_R(c, 0) + INT64_C(12))));
  /* 1c3598: fmul s1, s1, s1 */
  arc_s_w(c, 1, (float)(arc_fmul32(ARC_S_R(c, 1), ARC_S_R(c, 1))));
  /* 1c359c: fsqrt s0, s0 */
  arc_s_w(c, 0, (float)(arc_fsqrt32(ARC_S_R(c, 0))));
  /* 1c35a0: fadd s1, s1, s2 */
  arc_s_w(c, 1, (float)(arc_fadd32(ARC_S_R(c, 1), ARC_S_R(c, 2))));
  /* 1c35a4: mov s2, v2.s[1] */
  arc_su_w(c, 2, (c)->q[2].u32[1]);
  /* 1c35a8: fadd s1, s1, s2 */
  arc_s_w(c, 1, (float)(arc_fadd32(ARC_S_R(c, 1), ARC_S_R(c, 2))));
  /* 1c35ac: ldr s2, [x0, #0x18] */
  arc_su_w(c, 2, arc_ld32((ARC_X_R(c, 0) + INT64_C(24))));
  /* 1c35b0: fmul s2, s2, s2 */
  arc_s_w(c, 2, (float)(arc_fmul32(ARC_S_R(c, 2), ARC_S_R(c, 2))));
  /* 1c35b4: fadd s2, s2, s3 */
  arc_s_w(c, 2, (float)(arc_fadd32(ARC_S_R(c, 2), ARC_S_R(c, 3))));
  /* 1c35b8: mov s3, v3.s[1] */
  arc_su_w(c, 3, (c)->q[3].u32[1]);
  /* 1c35bc: fadd s2, s2, s3 */
  arc_s_w(c, 2, (float)(arc_fadd32(ARC_S_R(c, 2), ARC_S_R(c, 3))));
  /* 1c35c0: fsqrt s1, s1 */
  arc_s_w(c, 1, (float)(arc_fsqrt32(ARC_S_R(c, 1))));
  /* 1c35c4: fadd s0, s0, s1 */
  arc_s_w(c, 0, (float)(arc_fadd32(ARC_S_R(c, 0), ARC_S_R(c, 1))));
  /* 1c35c8: fmov s1, #3.00000000 */
  arc_s_w(c, 1, (float)(3.0));
  /* 1c35cc: fsqrt s2, s2 */
  arc_s_w(c, 2, (float)(arc_fsqrt32(ARC_S_R(c, 2))));
  /* 1c35d0: fadd s0, s0, s2 */
  arc_s_w(c, 0, (float)(arc_fadd32(ARC_S_R(c, 0), ARC_S_R(c, 2))));
  /* 1c35d4: fdiv s0, s0, s1 */
  arc_s_w(c, 0, (float)(arc_fdiv32(ARC_S_R(c, 0), ARC_S_R(c, 1))));
  /* 1c35d8: ret  */
  return;
}

void fn2_1c5df8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077714936));
  /* 1c5df8: ldp q1, q4, [x1] */
  { const uint64_t _pa = ARC_X_R(c, 1);
    arc_q_w(c, 1, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 4, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* 1c5dfc: ldr s5, [x0, #0x20] */
  arc_su_w(c, 5, arc_ld32((ARC_X_R(c, 0) + INT64_C(32))));
  /* 1c5e00: ldp q2, q3, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_q_w(c, 2, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 3, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* 1c5e04: ldr s6, [x1, #0x20] */
  arc_su_w(c, 6, arc_ld32((ARC_X_R(c, 1) + INT64_C(32))));
  /* 1c5e08: fsub s6, s6, s5 */
  arc_s_w(c, 6, (float)(arc_fsub32(ARC_S_R(c, 6), ARC_S_R(c, 5))));
  /* 1c5e0c: fsub v1.4s, v1.4s, v2.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.f32[0] = arc_fsub32((c)->q[1].f32[0], (c)->q[2].f32[0]);
    _t.f32[1] = arc_fsub32((c)->q[1].f32[1], (c)->q[2].f32[1]);
    _t.f32[2] = arc_fsub32((c)->q[1].f32[2], (c)->q[2].f32[2]);
    _t.f32[3] = arc_fsub32((c)->q[1].f32[3], (c)->q[2].f32[3]);
    (c)->q[1] = _t; }
  /* 1c5e10: fsub v4.4s, v4.4s, v3.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.f32[0] = arc_fsub32((c)->q[4].f32[0], (c)->q[3].f32[0]);
    _t.f32[1] = arc_fsub32((c)->q[4].f32[1], (c)->q[3].f32[1]);
    _t.f32[2] = arc_fsub32((c)->q[4].f32[2], (c)->q[3].f32[2]);
    _t.f32[3] = arc_fsub32((c)->q[4].f32[3], (c)->q[3].f32[3]);
    (c)->q[4] = _t; }
  /* 1c5e14: fmul v1.4s, v1.4s, v0.s[0] */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.f32[0] = arc_fmul32((c)->q[1].f32[0], (c)->q[0].f32[0]);
    _t.f32[1] = arc_fmul32((c)->q[1].f32[1], (c)->q[0].f32[0]);
    _t.f32[2] = arc_fmul32((c)->q[1].f32[2], (c)->q[0].f32[0]);
    _t.f32[3] = arc_fmul32((c)->q[1].f32[3], (c)->q[0].f32[0]);
    (c)->q[1] = _t; }
  /* 1c5e18: fmul v4.4s, v4.4s, v0.s[0] */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.f32[0] = arc_fmul32((c)->q[4].f32[0], (c)->q[0].f32[0]);
    _t.f32[1] = arc_fmul32((c)->q[4].f32[1], (c)->q[0].f32[0]);
    _t.f32[2] = arc_fmul32((c)->q[4].f32[2], (c)->q[0].f32[0]);
    _t.f32[3] = arc_fmul32((c)->q[4].f32[3], (c)->q[0].f32[0]);
    (c)->q[4] = _t; }
  /* 1c5e1c: fmul s0, s6, s0 */
  arc_s_w(c, 0, (float)(arc_fmul32(ARC_S_R(c, 6), ARC_S_R(c, 0))));
  /* 1c5e20: fadd v1.4s, v2.4s, v1.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.f32[0] = arc_fadd32((c)->q[2].f32[0], (c)->q[1].f32[0]);
    _t.f32[1] = arc_fadd32((c)->q[2].f32[1], (c)->q[1].f32[1]);
    _t.f32[2] = arc_fadd32((c)->q[2].f32[2], (c)->q[1].f32[2]);
    _t.f32[3] = arc_fadd32((c)->q[2].f32[3], (c)->q[1].f32[3]);
    (c)->q[1] = _t; }
  /* 1c5e24: fadd v2.4s, v3.4s, v4.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.f32[0] = arc_fadd32((c)->q[3].f32[0], (c)->q[4].f32[0]);
    _t.f32[1] = arc_fadd32((c)->q[3].f32[1], (c)->q[4].f32[1]);
    _t.f32[2] = arc_fadd32((c)->q[3].f32[2], (c)->q[4].f32[2]);
    _t.f32[3] = arc_fadd32((c)->q[3].f32[3], (c)->q[4].f32[3]);
    (c)->q[2] = _t; }
  /* 1c5e28: fadd s0, s5, s0 */
  arc_s_w(c, 0, (float)(arc_fadd32(ARC_S_R(c, 5), ARC_S_R(c, 0))));
  /* 1c5e2c: stp q1, q2, [x8] */
  { const uint64_t _pa = ARC_X_R(c, 8);
    arc_st64(_pa, (c)->q[1].u64[0]);
    arc_st64(_pa + 8, (c)->q[1].u64[1]);
    arc_st64((_pa + 16), (c)->q[2].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[2].u64[1]);
  }
  /* 1c5e30: str s0, [x8, #0x20] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(32)), (c)->q[0].u32[0]);
  /* 1c5e34: ret  */
  return;
}

void fn2_1c900c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077727756));
  /* 1c900c: ldr s1, [x1] */
  arc_su_w(c, 1, arc_ld32(ARC_X_R(c, 1)));
  /* 1c9010: ldr s0, [x0] */
  arc_su_w(c, 0, arc_ld32(ARC_X_R(c, 0)));
  /* 1c9014: fcmp s1, #0.0 */
  arc_fcmp(c, (double)(ARC_S_R(c, 1)), (double)(0.0));
  /* 1c9018: b.eq #0x1c903c */
  if (ARC_COND(c, 0)) goto L_1c903c;
  /* 1c901c: fcvt d0, s0 */
  arc_d_w(c, 0, (double)(ARC_S_R(c, 0)));
  /* 1c9020: fcvt d1, s1 */
  arc_d_w(c, 1, (double)(ARC_S_R(c, 1)));
  /* 1c9024: fmov d2, #0.50000000 */
  arc_d_w(c, 2, (double)(0.5));
  /* 1c9028: fdiv d0, d0, d1 */
  arc_d_w(c, 0, (double)(arc_fdiv64(ARC_D_R(c, 0), ARC_D_R(c, 1))));
  /* 1c902c: fadd d0, d0, d2 */
  arc_d_w(c, 0, (double)(arc_fadd64(ARC_D_R(c, 0), ARC_D_R(c, 2))));
  /* 1c9030: frintm d0, d0 */
  arc_d_w(c, 0, (double)(floor(ARC_D_R(c, 0))));
  /* 1c9034: fmul d0, d0, d1 */
  arc_d_w(c, 0, (double)(arc_fmul64(ARC_D_R(c, 0), ARC_D_R(c, 1))));
  /* 1c9038: fcvt s0, d0 */
  arc_s_w(c, 0, (float)(ARC_D_R(c, 0)));
L_1c903c:;
  /* 1c903c: ldr s2, [x1, #4] */
  arc_su_w(c, 2, arc_ld32((ARC_X_R(c, 1) + INT64_C(4))));
  /* 1c9040: ldr s1, [x0, #4] */
  arc_su_w(c, 1, arc_ld32((ARC_X_R(c, 0) + INT64_C(4))));
  /* 1c9044: fcmp s2, #0.0 */
  arc_fcmp(c, (double)(ARC_S_R(c, 2)), (double)(0.0));
  /* 1c9048: b.eq #0x1c906c */
  if (ARC_COND(c, 0)) goto L_1c906c;
  /* 1c904c: fcvt d1, s1 */
  arc_d_w(c, 1, (double)(ARC_S_R(c, 1)));
  /* 1c9050: fcvt d2, s2 */
  arc_d_w(c, 2, (double)(ARC_S_R(c, 2)));
  /* 1c9054: fmov d3, #0.50000000 */
  arc_d_w(c, 3, (double)(0.5));
  /* 1c9058: fdiv d1, d1, d2 */
  arc_d_w(c, 1, (double)(arc_fdiv64(ARC_D_R(c, 1), ARC_D_R(c, 2))));
  /* 1c905c: fadd d1, d1, d3 */
  arc_d_w(c, 1, (double)(arc_fadd64(ARC_D_R(c, 1), ARC_D_R(c, 3))));
  /* 1c9060: frintm d1, d1 */
  arc_d_w(c, 1, (double)(floor(ARC_D_R(c, 1))));
  /* 1c9064: fmul d1, d1, d2 */
  arc_d_w(c, 1, (double)(arc_fmul64(ARC_D_R(c, 1), ARC_D_R(c, 2))));
  /* 1c9068: fcvt s1, d1 */
  arc_s_w(c, 1, (float)(ARC_D_R(c, 1)));
L_1c906c:;
  /* 1c906c: ldr s3, [x1, #8] */
  arc_su_w(c, 3, arc_ld32((ARC_X_R(c, 1) + INT64_C(8))));
  /* 1c9070: ldr s2, [x0, #8] */
  arc_su_w(c, 2, arc_ld32((ARC_X_R(c, 0) + INT64_C(8))));
  /* 1c9074: fcmp s3, #0.0 */
  arc_fcmp(c, (double)(ARC_S_R(c, 3)), (double)(0.0));
  /* 1c9078: b.eq #0x1c909c */
  if (ARC_COND(c, 0)) goto L_1c909c;
  /* 1c907c: fcvt d2, s2 */
  arc_d_w(c, 2, (double)(ARC_S_R(c, 2)));
  /* 1c9080: fcvt d3, s3 */
  arc_d_w(c, 3, (double)(ARC_S_R(c, 3)));
  /* 1c9084: fmov d4, #0.50000000 */
  arc_d_w(c, 4, (double)(0.5));
  /* 1c9088: fdiv d2, d2, d3 */
  arc_d_w(c, 2, (double)(arc_fdiv64(ARC_D_R(c, 2), ARC_D_R(c, 3))));
  /* 1c908c: fadd d2, d2, d4 */
  arc_d_w(c, 2, (double)(arc_fadd64(ARC_D_R(c, 2), ARC_D_R(c, 4))));
  /* 1c9090: frintm d2, d2 */
  arc_d_w(c, 2, (double)(floor(ARC_D_R(c, 2))));
  /* 1c9094: fmul d2, d2, d3 */
  arc_d_w(c, 2, (double)(arc_fmul64(ARC_D_R(c, 2), ARC_D_R(c, 3))));
  /* 1c9098: fcvt s2, d2 */
  arc_s_w(c, 2, (float)(ARC_D_R(c, 2)));
L_1c909c:;
  /* 1c909c: ret  */
  return;
}

void fn2_1c9c90(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077730960));
  /* 1c9c90: ldr q1, [x0] */
  arc_q_w(c, 1, arc_ld64(ARC_X_R(c, 0)), arc_ld64(ARC_X_R(c, 0) + 8));
  /* 1c9c94: ldr q2, [x1] */
  arc_q_w(c, 2, arc_ld64(ARC_X_R(c, 1)), arc_ld64(ARC_X_R(c, 1) + 8));
  /* 1c9c98: fsub v2.4s, v2.4s, v1.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.f32[0] = arc_fsub32((c)->q[2].f32[0], (c)->q[1].f32[0]);
    _t.f32[1] = arc_fsub32((c)->q[2].f32[1], (c)->q[1].f32[1]);
    _t.f32[2] = arc_fsub32((c)->q[2].f32[2], (c)->q[1].f32[2]);
    _t.f32[3] = arc_fsub32((c)->q[2].f32[3], (c)->q[1].f32[3]);
    (c)->q[2] = _t; }
  /* 1c9c9c: fmul v0.4s, v2.4s, v0.s[0] */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.f32[0] = arc_fmul32((c)->q[2].f32[0], (c)->q[0].f32[0]);
    _t.f32[1] = arc_fmul32((c)->q[2].f32[1], (c)->q[0].f32[0]);
    _t.f32[2] = arc_fmul32((c)->q[2].f32[2], (c)->q[0].f32[0]);
    _t.f32[3] = arc_fmul32((c)->q[2].f32[3], (c)->q[0].f32[0]);
    (c)->q[0] = _t; }
  /* 1c9ca0: fadd v0.4s, v1.4s, v0.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.f32[0] = arc_fadd32((c)->q[1].f32[0], (c)->q[0].f32[0]);
    _t.f32[1] = arc_fadd32((c)->q[1].f32[1], (c)->q[0].f32[1]);
    _t.f32[2] = arc_fadd32((c)->q[1].f32[2], (c)->q[0].f32[2]);
    _t.f32[3] = arc_fadd32((c)->q[1].f32[3], (c)->q[0].f32[3]);
    (c)->q[0] = _t; }
  /* 1c9ca4: mov s1, v0.s[1] */
  arc_su_w(c, 1, (c)->q[0].u32[1]);
  /* 1c9ca8: mov s2, v0.s[2] */
  arc_su_w(c, 2, (c)->q[0].u32[2]);
  /* 1c9cac: mov s3, v0.s[3] */
  arc_su_w(c, 3, (c)->q[0].u32[3]);
  /* 1c9cb0: ret  */
  return;
}

void fn2_1cd018(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077744152));
  /* 1cd018: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* 1cd01c: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1cd020: str x21, [sp, #0x30] */
  arc_st64(((c)->sp + INT64_C(48)), ARC_X_R(c, 21));
  /* 1cd024: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1cd028: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 1cd02c: mov x20, x8 */
  ARC_X_W(c, 20, ARC_X_R(c, 8));
  /* 1cd030: adrp x8, #0x25d000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 1cd034: add x8, x8, #0xe40 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3648)));
  /* 1cd038: ldr x21, [x8, #0x70] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 8) + INT64_C(112))));
  /* 1cd03c: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 1cd040: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1cd044: str x1, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 1));
  /* 1cd048: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1cd04c: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 1cd050: str x2, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 2));
  /* 1cd054: str xzr, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 31));
  /* 1cd058: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1888348));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1cd05c: add x8, x29, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1cd060: add x9, sp, #8 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(8)));
  /* 1cd064: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* 1cd068: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1cd06c: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* 1cd070: mov w3, #2 */
  ARC_W_W(c, 3, UINT64_C(2));
  /* 1cd074: stp x8, x9, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 1cd078: blr x21 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1888380));
  arc_dispatch(c, ARC_X_R(c, 21));
  /* 1cd07c: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1cd080: ldr x21, [sp, #0x30] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(48))));
  /* 1cd084: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1cd088: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* 1cd08c: ret  */
  return;
}

void fn2_1cdb2c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077746988));
  /* 1cdb2c: sub sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(96)));
  /* 1cdb30: stp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1cdb34: stp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1cdb38: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1cdb3c: add x29, sp, #0x30 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(48)));
  /* 1cdb40: mov x21, x8 */
  ARC_X_W(c, 21, ARC_X_R(c, 8));
  /* 1cdb44: adrp x8, #0x25d000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 1cdb48: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 1cdb4c: ldr x22, [x8, #0xfb0] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 8) + INT64_C(4016))));
  /* 1cdb50: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 1cdb54: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 1cdb58: strb w2, [sp, #0x14] */
  arc_st8(((c)->sp + INT64_C(20)), ARC_W_R(c, 2));
  /* 1cdb5c: str x3, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 3));
  /* 1cdb60: bl #0x1e457c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1891172));
  fn2_1e457c(c);
  /* 1cdb64: add x8, sp, #0x14 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(20)));
  /* 1cdb68: add x9, sp, #8 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(8)));
  /* 1cdb6c: add x1, sp, #0x18 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(24)));
  /* 1cdb70: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1cdb74: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* 1cdb78: mov w3, #3 */
  ARC_W_W(c, 3, UINT64_C(3));
  /* 1cdb7c: stp x19, x8, [sp, #0x18] */
  { const uint64_t _pa = ((c)->sp + INT64_C(24));
    arc_st64(_pa, ARC_X_R(c, 19));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* 1cdb80: str x9, [sp, #0x28] */
  arc_st64(((c)->sp + INT64_C(40)), ARC_X_R(c, 9));
  /* 1cdb84: blr x22 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1891208));
  arc_dispatch(c, ARC_X_R(c, 22));
  /* 1cdb88: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1cdb8c: ldp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1cdb90: ldp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1cdb94: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* 1cdb98: ret  */
  return;
}

void fn2_1ce698(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077749912));
  /* 1ce698: sub sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(48)));
  /* 1ce69c: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1ce6a0: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1ce6a4: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1ce6a8: mov x20, x8 */
  ARC_X_W(c, 20, ARC_X_R(c, 8));
  /* 1ce6ac: adrp x8, #0x25d000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 1ce6b0: add x8, x8, #0xe40 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3648)));
  /* 1ce6b4: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1ce6b8: ldr x0, [x8, #0x270] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(624))));
  /* 1ce6bc: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 1ce6c0: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 1ce6c4: str xzr, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 31));
  /* 1ce6c8: str x0, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 0));
  /* 1ce6cc: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1ce6d0: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1894100));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1ce6d4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1ce6d8: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 1ce6dc: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* 1ce6e0: mov w3, wzr */
  ARC_W_W(c, 3, ARC_W_R(c, 31));
  /* 1ce6e4: ldr x4, [sp, #8] */
  ARC_X_W(c, 4, arc_ld64(((c)->sp + INT64_C(8))));
  /* 1ce6e8: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1ce6ec: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1ce6f0: add sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(48)));
  /* 1ce6f4: br x4 */
  arc_dispatch(c, ARC_X_R(c, 4)); return;
}

void fn2_1cf100(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077752576));
  /* 1cf100: sub sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(48)));
  /* 1cf104: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1cf108: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1cf10c: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1cf110: adrp x9, #0x25e000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2482176)));
  /* 1cf114: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1cf118: mov x20, x8 */
  ARC_X_W(c, 20, ARC_X_R(c, 8));
  /* 1cf11c: ldr x0, [x9, #0x1b0] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 9) + INT64_C(432))));
  /* 1cf120: str x0, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 0));
  /* 1cf124: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1cf128: bl #0x1ddc90 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1896748));
  fn2_1ddc90(c);
  /* 1cf12c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1cf130: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 1cf134: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* 1cf138: mov w3, wzr */
  ARC_W_W(c, 3, ARC_W_R(c, 31));
  /* 1cf13c: ldr x4, [sp, #8] */
  ARC_X_W(c, 4, arc_ld64(((c)->sp + INT64_C(8))));
  /* 1cf140: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1cf144: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1cf148: add sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(48)));
  /* 1cf14c: br x4 */
  arc_dispatch(c, ARC_X_R(c, 4)); return;
}

void fn2_1cfb68(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077755240));
  /* 1cfb68: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1cfb6c: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 1cfb70: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1cfb74: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1cfb78: mov x21, x8 */
  ARC_X_W(c, 21, ARC_X_R(c, 8));
  /* 1cfb7c: adrp x8, #0x25d000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 1cfb80: add x8, x8, #0xe40 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3648)));
  /* 1cfb84: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 1cfb88: ldr x0, [x8, #0x488] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(1160))));
  /* 1cfb8c: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 1cfb90: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 1cfb94: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 1cfb98: str xzr, [x21] */
  arc_st64(ARC_X_R(c, 21), ARC_X_R(c, 31));
  /* 1cfb9c: str x0, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 0));
  /* 1cfba0: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 1cfba4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1899432));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1cfba8: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1cfbac: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 1cfbb0: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* 1cfbb4: ldr x3, [x29, #0x18] */
  ARC_X_W(c, 3, arc_ld64((ARC_X_R(c, 29) + INT64_C(24))));
  /* 1cfbb8: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1cfbbc: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1cfbc0: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1cfbc4: br x3 */
  arc_dispatch(c, ARC_X_R(c, 3)); return;
}

void fn2_1d0708(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077758216));
  /* 1d0708: ldrb w8, [x1] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 1)));
  /* 1d070c: ldrb w9, [x0] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 0)));
  /* 1d0710: strb w8, [x0] */
  arc_st8(ARC_X_R(c, 0), ARC_W_R(c, 8));
  /* 1d0714: strb w9, [x1] */
  arc_st8(ARC_X_R(c, 1), ARC_W_R(c, 9));
  /* 1d0718: ldrb w8, [x1, #1] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 1) + INT64_C(1))));
  /* 1d071c: ldrb w9, [x0, #1] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(1))));
  /* 1d0720: strb w8, [x0, #1] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(1)), ARC_W_R(c, 8));
  /* 1d0724: strb w9, [x1, #1] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(1)), ARC_W_R(c, 9));
  /* 1d0728: ldrb w8, [x1, #2] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 1) + INT64_C(2))));
  /* 1d072c: ldrb w9, [x0, #2] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(2))));
  /* 1d0730: strb w8, [x0, #2] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(2)), ARC_W_R(c, 8));
  /* 1d0734: strb w9, [x1, #2] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(2)), ARC_W_R(c, 9));
  /* 1d0738: ldrb w8, [x1, #3] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 1) + INT64_C(3))));
  /* 1d073c: ldrb w9, [x0, #3] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(3))));
  /* 1d0740: strb w8, [x0, #3] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(3)), ARC_W_R(c, 8));
  /* 1d0744: strb w9, [x1, #3] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(3)), ARC_W_R(c, 9));
  /* 1d0748: ldrb w8, [x1, #4] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 1) + INT64_C(4))));
  /* 1d074c: ldrb w9, [x0, #4] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(4))));
  /* 1d0750: strb w8, [x0, #4] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(4)), ARC_W_R(c, 8));
  /* 1d0754: strb w9, [x1, #4] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(4)), ARC_W_R(c, 9));
  /* 1d0758: ldrb w8, [x1, #5] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 1) + INT64_C(5))));
  /* 1d075c: ldrb w9, [x0, #5] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(5))));
  /* 1d0760: strb w8, [x0, #5] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(5)), ARC_W_R(c, 8));
  /* 1d0764: strb w9, [x1, #5] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(5)), ARC_W_R(c, 9));
  /* 1d0768: ldrb w8, [x1, #6] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 1) + INT64_C(6))));
  /* 1d076c: ldrb w9, [x0, #6] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(6))));
  /* 1d0770: strb w8, [x0, #6] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(6)), ARC_W_R(c, 8));
  /* 1d0774: strb w9, [x1, #6] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(6)), ARC_W_R(c, 9));
  /* 1d0778: ldrb w8, [x1, #7] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 1) + INT64_C(7))));
  /* 1d077c: ldrb w9, [x0, #7] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(7))));
  /* 1d0780: strb w8, [x0, #7] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(7)), ARC_W_R(c, 8));
  /* 1d0784: strb w9, [x1, #7] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(7)), ARC_W_R(c, 9));
  /* 1d0788: ret  */
  return;
}

void fn2_1d32f0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077769456));
  /* 1d32f0: sub sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(32)));
  /* 1d32f4: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1d32f8: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1d32fc: adrp x8, #0x25e000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2482176)));
  /* 1d3300: str x1, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 1));
  /* 1d3304: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 1d3308: ldr x8, [x8, #0x4c0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(1216))));
  /* 1d330c: sub x2, x29, #4 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(4)));
  /* 1d3310: mov w3, #1 */
  ARC_W_W(c, 3, UINT64_C(1));
  /* 1d3314: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1913624));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1d3318: ldurb w8, [x29, #-4] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-4))));
  /* 1d331c: cmp w8, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(0));
  /* 1d3320: cset w0, ne */
  ARC_W_W(c, 0, (ARC_COND(c, 1) ? 1 : 0));
  /* 1d3324: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1d3328: add sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(32)));
  /* 1d332c: ret  */
  return;
}

void fn2_1d3e44(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077772356));
  /* 1d3e44: sub sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(48)));
  /* 1d3e48: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1d3e4c: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1d3e50: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1d3e54: adrp x9, #0x25e000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2482176)));
  /* 1d3e58: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1d3e5c: mov x20, x8 */
  ARC_X_W(c, 20, ARC_X_R(c, 8));
  /* 1d3e60: ldr x0, [x9, #0x5c0] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 9) + INT64_C(1472))));
  /* 1d3e64: str x0, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 0));
  /* 1d3e68: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1d3e6c: bl #0x1ccc74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1916528));
  fn2_1ccc74(c);
  /* 1d3e70: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1d3e74: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 1d3e78: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* 1d3e7c: mov w3, wzr */
  ARC_W_W(c, 3, ARC_W_R(c, 31));
  /* 1d3e80: ldr x4, [sp, #8] */
  ARC_X_W(c, 4, arc_ld64(((c)->sp + INT64_C(8))));
  /* 1d3e84: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1d3e88: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1d3e8c: add sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(48)));
  /* 1d3e90: br x4 */
  arc_dispatch(c, ARC_X_R(c, 4)); return;
}

void fn2_1d47c0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077774784));
  /* 1d47c0: sub sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(32)));
  /* 1d47c4: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1d47c8: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1d47cc: adrp x8, #0x25e000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2482176)));
  /* 1d47d0: sub x2, x29, #4 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(4)));
  /* 1d47d4: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 1d47d8: ldr x8, [x8, #0x6c0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(1728))));
  /* 1d47dc: mov w3, wzr */
  ARC_W_W(c, 3, ARC_W_R(c, 31));
  /* 1d47e0: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1918948));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1d47e4: ldurb w8, [x29, #-4] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-4))));
  /* 1d47e8: cmp w8, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(0));
  /* 1d47ec: cset w0, ne */
  ARC_W_W(c, 0, (ARC_COND(c, 1) ? 1 : 0));
  /* 1d47f0: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1d47f4: add sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(32)));
  /* 1d47f8: ret  */
  return;
}

void fn2_1d50bc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077777084));
  /* 1d50bc: sub sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(32)));
  /* 1d50c0: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1d50c4: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1d50c8: adrp x8, #0x25e000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2482176)));
  /* 1d50cc: sub x2, x29, #4 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(4)));
  /* 1d50d0: ldr x8, [x8, #0x7c0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(1984))));
  /* 1d50d4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1921240));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1d50d8: ldurb w8, [x29, #-4] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-4))));
  /* 1d50dc: cmp w8, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(0));
  /* 1d50e0: cset w0, ne */
  ARC_W_W(c, 0, (ARC_COND(c, 1) ? 1 : 0));
  /* 1d50e4: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1d50e8: add sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(32)));
  /* 1d50ec: ret  */
  return;
}

void fn2_1d5a00(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077779456));
  /* 1d5a00: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1d5a04: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 1d5a08: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1d5a0c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1d5a10: adrp x9, #0x25e000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2482176)));
  /* 1d5a14: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 1d5a18: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 1d5a1c: ldr x0, [x9, #0x8d8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 9) + INT64_C(2264))));
  /* 1d5a20: mov x21, x8 */
  ARC_X_W(c, 21, ARC_X_R(c, 8));
  /* 1d5a24: str x0, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 0));
  /* 1d5a28: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1d5a2c: bl #0x1ccc74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1923632));
  fn2_1ccc74(c);
  /* 1d5a30: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1d5a34: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 1d5a38: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* 1d5a3c: ldr x3, [x29, #0x18] */
  ARC_X_W(c, 3, arc_ld64((ARC_X_R(c, 29) + INT64_C(24))));
  /* 1d5a40: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1d5a44: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1d5a48: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1d5a4c: br x3 */
  arc_dispatch(c, ARC_X_R(c, 3)); return;
}

void fn2_1d6864(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077783140));
  /* 1d6864: sub sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(32)));
  /* 1d6868: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1d686c: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1d6870: adrp x8, #0x25e000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2482176)));
  /* 1d6874: sub x2, x29, #4 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(4)));
  /* 1d6878: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 1d687c: ldr x8, [x8, #0x9c8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2504))));
  /* 1d6880: mov w3, wzr */
  ARC_W_W(c, 3, ARC_W_R(c, 31));
  /* 1d6884: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1927304));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1d6888: ldurb w8, [x29, #-4] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-4))));
  /* 1d688c: cmp w8, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(0));
  /* 1d6890: cset w0, ne */
  ARC_W_W(c, 0, (ARC_COND(c, 1) ? 1 : 0));
  /* 1d6894: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1d6898: add sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(32)));
  /* 1d689c: ret  */
  return;
}

void fn2_1d78bc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077787324));
  /* 1d78bc: sub sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(32)));
  /* 1d78c0: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1d78c4: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1d78c8: stp xzr, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 1d78cc: adrp x9, #0x25e000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2482176)));
  /* 1d78d0: add x8, x1, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 1) + UINT64_C(16)));
  /* 1d78d4: cmp x1, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 1), UINT64_C(0));
  /* 1d78d8: ldr x9, [x9, #0xaa0] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(2720))));
  /* 1d78dc: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 1d78e0: csel x8, xzr, x8, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 8)));
  /* 1d78e4: stp x8, x2, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 2));
  }
  /* 1d78e8: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1931500));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 1d78ec: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1d78f0: add sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(32)));
  /* 1d78f4: ret  */
  return;
}

void fn2_1d860c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077790732));
  /* 1d860c: stp xzr, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 1d8610: ldrb w8, [x1] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 1)));
  /* 1d8614: strb w8, [x0] */
  arc_st8(ARC_X_R(c, 0), ARC_W_R(c, 8));
  /* 1d8618: strb wzr, [x1] */
  arc_st8(ARC_X_R(c, 1), ARC_W_R(c, 31));
  /* 1d861c: ldrb w8, [x1, #1] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 1) + INT64_C(1))));
  /* 1d8620: ldrb w9, [x0, #1] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(1))));
  /* 1d8624: strb w8, [x0, #1] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(1)), ARC_W_R(c, 8));
  /* 1d8628: strb w9, [x1, #1] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(1)), ARC_W_R(c, 9));
  /* 1d862c: ldrb w8, [x1, #2] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 1) + INT64_C(2))));
  /* 1d8630: ldrb w9, [x0, #2] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(2))));
  /* 1d8634: strb w8, [x0, #2] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(2)), ARC_W_R(c, 8));
  /* 1d8638: strb w9, [x1, #2] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(2)), ARC_W_R(c, 9));
  /* 1d863c: ldrb w8, [x1, #3] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 1) + INT64_C(3))));
  /* 1d8640: ldrb w9, [x0, #3] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(3))));
  /* 1d8644: strb w8, [x0, #3] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(3)), ARC_W_R(c, 8));
  /* 1d8648: strb w9, [x1, #3] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(3)), ARC_W_R(c, 9));
  /* 1d864c: ldrb w8, [x1, #4] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 1) + INT64_C(4))));
  /* 1d8650: ldrb w9, [x0, #4] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(4))));
  /* 1d8654: strb w8, [x0, #4] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(4)), ARC_W_R(c, 8));
  /* 1d8658: strb w9, [x1, #4] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(4)), ARC_W_R(c, 9));
  /* 1d865c: ldrb w8, [x1, #5] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 1) + INT64_C(5))));
  /* 1d8660: ldrb w9, [x0, #5] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(5))));
  /* 1d8664: strb w8, [x0, #5] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(5)), ARC_W_R(c, 8));
  /* 1d8668: strb w9, [x1, #5] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(5)), ARC_W_R(c, 9));
  /* 1d866c: ldrb w8, [x1, #6] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 1) + INT64_C(6))));
  /* 1d8670: ldrb w9, [x0, #6] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(6))));
  /* 1d8674: strb w8, [x0, #6] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(6)), ARC_W_R(c, 8));
  /* 1d8678: strb w9, [x1, #6] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(6)), ARC_W_R(c, 9));
  /* 1d867c: ldrb w8, [x1, #7] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 1) + INT64_C(7))));
  /* 1d8680: ldrb w9, [x0, #7] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(7))));
  /* 1d8684: strb w8, [x0, #7] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(7)), ARC_W_R(c, 8));
  /* 1d8688: strb w9, [x1, #7] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(7)), ARC_W_R(c, 9));
  /* 1d868c: ldrb w8, [x1, #8] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 1) + INT64_C(8))));
  /* 1d8690: ldrb w9, [x0, #8] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(8))));
  /* 1d8694: strb w8, [x0, #8] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 8));
  /* 1d8698: strb w9, [x1, #8] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(8)), ARC_W_R(c, 9));
  /* 1d869c: ldrb w8, [x1, #9] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 1) + INT64_C(9))));
  /* 1d86a0: ldrb w9, [x0, #9] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(9))));
  /* 1d86a4: strb w8, [x0, #9] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(9)), ARC_W_R(c, 8));
  /* 1d86a8: strb w9, [x1, #9] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(9)), ARC_W_R(c, 9));
  /* 1d86ac: ldrb w8, [x1, #0xa] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 1) + INT64_C(10))));
  /* 1d86b0: ldrb w9, [x0, #0xa] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(10))));
  /* 1d86b4: strb w8, [x0, #0xa] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(10)), ARC_W_R(c, 8));
  /* 1d86b8: strb w9, [x1, #0xa] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(10)), ARC_W_R(c, 9));
  /* 1d86bc: ldrb w8, [x1, #0xb] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 1) + INT64_C(11))));
  /* 1d86c0: ldrb w9, [x0, #0xb] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(11))));
  /* 1d86c4: strb w8, [x0, #0xb] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(11)), ARC_W_R(c, 8));
  /* 1d86c8: strb w9, [x1, #0xb] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(11)), ARC_W_R(c, 9));
  /* 1d86cc: ldrb w8, [x1, #0xc] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 1) + INT64_C(12))));
  /* 1d86d0: ldrb w9, [x0, #0xc] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(12))));
  /* 1d86d4: strb w8, [x0, #0xc] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(12)), ARC_W_R(c, 8));
  /* 1d86d8: strb w9, [x1, #0xc] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(12)), ARC_W_R(c, 9));
  /* 1d86dc: ldrb w8, [x1, #0xd] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 1) + INT64_C(13))));
  /* 1d86e0: ldrb w9, [x0, #0xd] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(13))));
  /* 1d86e4: strb w8, [x0, #0xd] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(13)), ARC_W_R(c, 8));
  /* 1d86e8: strb w9, [x1, #0xd] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(13)), ARC_W_R(c, 9));
  /* 1d86ec: ldrb w8, [x1, #0xe] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 1) + INT64_C(14))));
  /* 1d86f0: ldrb w9, [x0, #0xe] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(14))));
  /* 1d86f4: strb w8, [x0, #0xe] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(14)), ARC_W_R(c, 8));
  /* 1d86f8: strb w9, [x1, #0xe] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(14)), ARC_W_R(c, 9));
  /* 1d86fc: ldrb w8, [x1, #0xf] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 1) + INT64_C(15))));
  /* 1d8700: ldrb w9, [x0, #0xf] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(15))));
  /* 1d8704: strb w8, [x0, #0xf] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(15)), ARC_W_R(c, 8));
  /* 1d8708: strb w9, [x1, #0xf] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(15)), ARC_W_R(c, 9));
  /* 1d870c: ret  */
  return;
}

void fn2_1d9918(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077795608));
  /* 1d9918: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* 1d991c: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1d9920: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1d9924: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1d9928: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 1d992c: mov x21, x8 */
  ARC_X_W(c, 21, ARC_X_R(c, 8));
  /* 1d9930: adrp x8, #0x25e000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2482176)));
  /* 1d9934: add x8, x8, #0xc48 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3144)));
  /* 1d9938: ldr x22, [x8, #0x50] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 8) + INT64_C(80))));
  /* 1d993c: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 1d9940: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 1d9944: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 1d9948: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 1d994c: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 1d9950: strb w2, [sp, #0xc] */
  arc_st8(((c)->sp + INT64_C(12)), ARC_W_R(c, 2));
  /* 1d9954: str xzr, [x21] */
  arc_st64(ARC_X_R(c, 21), ARC_X_R(c, 31));
  /* 1d9958: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1939804));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1d995c: add x8, sp, #0xc */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(12)));
  /* 1d9960: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* 1d9964: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1d9968: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* 1d996c: mov w3, #2 */
  ARC_W_W(c, 3, UINT64_C(2));
  /* 1d9970: stp x19, x8, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 19));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* 1d9974: blr x22 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1939832));
  arc_dispatch(c, ARC_X_R(c, 22));
  /* 1d9978: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1d997c: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1d9980: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1d9984: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* 1d9988: ret  */
  return;
}

void fn2_1da1f8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077797880));
  /* 1da1f8: sub sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(32)));
  /* 1da1fc: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1da200: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1da204: adrp x8, #0x25e000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2482176)));
  /* 1da208: sub x2, x29, #4 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(4)));
  /* 1da20c: ldr x8, [x8, #0xdc0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3520))));
  /* 1da210: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1942036));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1da214: ldurb w8, [x29, #-4] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-4))));
  /* 1da218: cmp w8, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(0));
  /* 1da21c: cset w0, ne */
  ARC_W_W(c, 0, (ARC_COND(c, 1) ? 1 : 0));
  /* 1da220: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1da224: add sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(32)));
  /* 1da228: ret  */
  return;
}

void fn2_1db9f0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077804016));
  /* 1db9f0: sub sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(48)));
  /* 1db9f4: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1db9f8: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 1db9fc: adrp x8, #0x25e000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2482176)));
  /* 1dba00: add x9, sp, #8 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(8)));
  /* 1dba04: sub x2, x29, #8 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 1dba08: ldr x8, [x8, #0xea8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3752))));
  /* 1dba0c: stp x1, x9, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 1));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 1dba10: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* 1dba14: mov w3, #1 */
  ARC_W_W(c, 3, UINT64_C(1));
  /* 1dba18: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1948188));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1dba1c: ldur x0, [x29, #-8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-8))));
  /* 1dba20: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1dba24: add sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(48)));
  /* 1dba28: ret  */
  return;
}

void fn2_1dc2ec(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077806316));
  /* 1dc2ec: sub sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(48)));
  /* 1dc2f0: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1dc2f4: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1dc2f8: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1dc2fc: adrp x9, #0x25e000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2482176)));
  /* 1dc300: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1dc304: mov x20, x8 */
  ARC_X_W(c, 20, ARC_X_R(c, 8));
  /* 1dc308: ldr x0, [x9, #0xfa8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 9) + INT64_C(4008))));
  /* 1dc30c: str x0, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 0));
  /* 1dc310: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1dc314: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1950488));
  fn2_1bc084(c);
  /* 1dc318: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1dc31c: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 1dc320: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* 1dc324: mov w3, wzr */
  ARC_W_W(c, 3, ARC_W_R(c, 31));
  /* 1dc328: ldr x4, [sp, #8] */
  ARC_X_W(c, 4, arc_ld64(((c)->sp + INT64_C(8))));
  /* 1dc32c: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1dc330: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1dc334: add sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(48)));
  /* 1dc338: br x4 */
  arc_dispatch(c, ARC_X_R(c, 4)); return;
}

void fn2_1ddf00(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077813504));
  /* 1ddf00: sub sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(48)));
  /* 1ddf04: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1ddf08: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 1ddf0c: adrp x8, #0x25f000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2486272)));
  /* 1ddf10: add x9, sp, #8 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(8)));
  /* 1ddf14: sub x2, x29, #4 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(4)));
  /* 1ddf18: ldr x8, [x8, #0xa0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(160))));
  /* 1ddf1c: stp x1, x9, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 1));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 1ddf20: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* 1ddf24: mov w3, #1 */
  ARC_W_W(c, 3, UINT64_C(1));
  /* 1ddf28: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1957676));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1ddf2c: ldurb w8, [x29, #-4] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-4))));
  /* 1ddf30: cmp w8, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(0));
  /* 1ddf34: cset w0, ne */
  ARC_W_W(c, 0, (ARC_COND(c, 1) ? 1 : 0));
  /* 1ddf38: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1ddf3c: add sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(48)));
  /* 1ddf40: ret  */
  return;
}

void fn2_1de7ec(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077815788));
  /* 1de7ec: sub sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(48)));
  /* 1de7f0: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1de7f4: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 1de7f8: adrp x8, #0x25f000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2486272)));
  /* 1de7fc: add x9, sp, #8 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(8)));
  /* 1de800: sub x2, x29, #8 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 1de804: ldr x8, [x8, #0x1a0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(416))));
  /* 1de808: stp x1, x9, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 1));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 1de80c: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* 1de810: mov w3, #1 */
  ARC_W_W(c, 3, UINT64_C(1));
  /* 1de814: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1959960));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1de818: ldur x0, [x29, #-8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-8))));
  /* 1de81c: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1de820: add sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(48)));
  /* 1de824: ret  */
  return;
}

void fn2_1df09c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077818012));
  /* 1df09c: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 1df0a0: stp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1df0a4: add x29, sp, #0x30 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(48)));
  /* 1df0a8: add x8, sp, #8 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(8)));
  /* 1df0ac: adrp x9, #0x25f000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2486272)));
  /* 1df0b0: strb w3, [sp, #4] */
  arc_st8(((c)->sp + INT64_C(4)), ARC_W_R(c, 3));
  /* 1df0b4: stp x1, x8, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 1));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* 1df0b8: ldr x8, [x9, #0x2a0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(672))));
  /* 1df0bc: add x9, sp, #4 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(4)));
  /* 1df0c0: stp x2, x9, [sp, #0x18] */
  { const uint64_t _pa = ((c)->sp + INT64_C(24));
    arc_st64(_pa, ARC_X_R(c, 2));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 1df0c4: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* 1df0c8: sub x2, x29, #8 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 1df0cc: mov w3, #3 */
  ARC_W_W(c, 3, UINT64_C(3));
  /* 1df0d0: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1962196));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1df0d4: ldur x0, [x29, #-8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-8))));
  /* 1df0d8: ldp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1df0dc: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 1df0e0: ret  */
  return;
}

void fn2_1e0114(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077822228));
  /* 1e0114: sub sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(48)));
  /* 1e0118: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1e011c: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1e0120: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1e0124: adrp x9, #0x25f000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2486272)));
  /* 1e0128: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1e012c: mov x20, x8 */
  ARC_X_W(c, 20, ARC_X_R(c, 8));
  /* 1e0130: ldr x0, [x9, #0x398] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 9) + INT64_C(920))));
  /* 1e0134: str x0, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 0));
  /* 1e0138: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1e013c: bl #0x1ddc90 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1966400));
  fn2_1ddc90(c);
  /* 1e0140: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1e0144: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 1e0148: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* 1e014c: mov w3, wzr */
  ARC_W_W(c, 3, ARC_W_R(c, 31));
  /* 1e0150: ldr x4, [sp, #8] */
  ARC_X_W(c, 4, arc_ld64(((c)->sp + INT64_C(8))));
  /* 1e0154: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1e0158: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1e015c: add sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(48)));
  /* 1e0160: br x4 */
  arc_dispatch(c, ARC_X_R(c, 4)); return;
}

void fn2_1e11b8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077826488));
  /* 1e11b8: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 1e11bc: stp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1e11c0: add x29, sp, #0x30 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(48)));
  /* 1e11c4: adrp x8, #0x25f000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2486272)));
  /* 1e11c8: stp x2, x1, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 2));
    arc_st64(_pa + 8, ARC_X_R(c, 1));
  }
  /* 1e11cc: add x9, sp, #0x10 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(16)));
  /* 1e11d0: ldr x8, [x8, #0x490] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(1168))));
  /* 1e11d4: add x10, sp, #8 */
  ARC_X_W(c, 10, ((c)->sp + UINT64_C(8)));
  /* 1e11d8: add x1, sp, #0x18 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(24)));
  /* 1e11dc: sub x2, x29, #8 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 1e11e0: mov w3, #2 */
  ARC_W_W(c, 3, UINT64_C(2));
  /* 1e11e4: stp x9, x10, [sp, #0x18] */
  { const uint64_t _pa = ((c)->sp + INT64_C(24));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 10));
  }
  /* 1e11e8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1970668));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1e11ec: ldur x0, [x29, #-8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-8))));
  /* 1e11f0: ldp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1e11f4: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 1e11f8: ret  */
  return;
}

void fn2_1e225c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077830748));
  /* 1e225c: sub sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(48)));
  /* 1e2260: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1e2264: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 1e2268: adrp x8, #0x25f000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2486272)));
  /* 1e226c: add x9, sp, #8 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(8)));
  /* 1e2270: mov x10, sp */
  ARC_X_W(c, 10, (c)->sp);
  /* 1e2274: ldr x8, [x8, #0x588] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(1416))));
  /* 1e2278: stp x1, x9, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 1));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 1e227c: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* 1e2280: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 1e2284: mov w3, #2 */
  ARC_W_W(c, 3, UINT64_C(2));
  /* 1e2288: str d0, [sp] */
  arc_st64((c)->sp, (c)->q[0].u64[0]);
  /* 1e228c: str x10, [sp, #0x18] */
  arc_st64(((c)->sp + INT64_C(24)), ARC_X_R(c, 10));
  /* 1e2290: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1974932));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1e2294: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1e2298: add sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(48)));
  /* 1e229c: ret  */
  return;
}

void fn2_1e32fc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077835004));
  /* 1e32fc: adrp x8, #0x25f000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2486272)));
  /* 1e3300: stp xzr, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 1e3304: ldr x2, [x8, #0x688] */
  ARC_X_W(c, 2, arc_ld64((ARC_X_R(c, 8) + INT64_C(1672))));
  /* 1e3308: br x2 */
  arc_dispatch(c, ARC_X_R(c, 2)); return;
}

void fn2_1e3af4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077837044));
  /* 1e3af4: sub sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(32)));
  /* 1e3af8: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1e3afc: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1e3b00: adrp x8, #0x25f000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2486272)));
  /* 1e3b04: sub x2, x29, #4 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(4)));
  /* 1e3b08: ldr x8, [x8, #0x7a0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(1952))));
  /* 1e3b0c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1981200));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1e3b10: ldurb w8, [x29, #-4] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-4))));
  /* 1e3b14: cmp w8, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(0));
  /* 1e3b18: cset w0, ne */
  ARC_W_W(c, 0, (ARC_COND(c, 1) ? 1 : 0));
  /* 1e3b1c: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1e3b20: add sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(32)));
  /* 1e3b24: ret  */
  return;
}

void fn2_1e4b98(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077841304));
  /* 1e4b98: sub sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(48)));
  /* 1e4b9c: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1e4ba0: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 1e4ba4: adrp x8, #0x25f000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2486272)));
  /* 1e4ba8: stp x2, x1, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 2));
    arc_st64(_pa + 8, ARC_X_R(c, 1));
  }
  /* 1e4bac: mov x9, sp */
  ARC_X_W(c, 9, (c)->sp);
  /* 1e4bb0: ldr x8, [x8, #0x878] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2168))));
  /* 1e4bb4: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 1e4bb8: sub x2, x29, #8 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 1e4bbc: mov w3, #2 */
  ARC_W_W(c, 3, UINT64_C(2));
  /* 1e4bc0: str x9, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 9));
  /* 1e4bc4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1985480));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1e4bc8: ldur x0, [x29, #-8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-8))));
  /* 1e4bcc: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1e4bd0: add sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(48)));
  /* 1e4bd4: ret  */
  return;
}

void fn2_1e5bf4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077845492));
  /* 1e5bf4: sub sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(32)));
  /* 1e5bf8: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1e5bfc: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1e5c00: adrp x8, #0x25f000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2486272)));
  /* 1e5c04: str x1, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 1));
  /* 1e5c08: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 1e5c0c: ldr x8, [x8, #0x970] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2416))));
  /* 1e5c10: sub x2, x29, #4 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(4)));
  /* 1e5c14: mov w3, #1 */
  ARC_W_W(c, 3, UINT64_C(1));
  /* 1e5c18: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1989660));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1e5c1c: ldurb w8, [x29, #-4] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-4))));
  /* 1e5c20: cmp w8, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(0));
  /* 1e5c24: cset w0, ne */
  ARC_W_W(c, 0, (ARC_COND(c, 1) ? 1 : 0));
  /* 1e5c28: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1e5c2c: add sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(32)));
  /* 1e5c30: ret  */
  return;
}

void fn2_1e6cdc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077849820));
  /* 1e6cdc: sub sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(32)));
  /* 1e6ce0: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1e6ce4: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1e6ce8: adrp x8, #0x25f000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2486272)));
  /* 1e6cec: str x1, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 1));
  /* 1e6cf0: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 1e6cf4: ldr x8, [x8, #0xa68] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2664))));
  /* 1e6cf8: sub x2, x29, #4 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(4)));
  /* 1e6cfc: mov w3, #1 */
  ARC_W_W(c, 3, UINT64_C(1));
  /* 1e6d00: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1993988));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1e6d04: ldurb w8, [x29, #-4] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-4))));
  /* 1e6d08: cmp w8, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(0));
  /* 1e6d0c: cset w0, ne */
  ARC_W_W(c, 0, (ARC_COND(c, 1) ? 1 : 0));
  /* 1e6d10: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1e6d14: add sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(32)));
  /* 1e6d18: ret  */
  return;
}

void fn2_1e7cfc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077853948));
  /* 1e7cfc: sub sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(32)));
  /* 1e7d00: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1e7d04: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1e7d08: adrp x8, #0x25f000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2486272)));
  /* 1e7d0c: stp xzr, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 1e7d10: ldr x8, [x8, #0xb68] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2920))));
  /* 1e7d14: str x1, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 1));
  /* 1e7d18: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 1e7d1c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1998112));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1e7d20: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1e7d24: add sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(32)));
  /* 1e7d28: ret  */
  return;
}

void fn2_1e84f0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077855984));
  /* 1e84f0: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1e84f4: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 1e84f8: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1e84fc: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1e8500: mov x21, x8 */
  ARC_X_W(c, 21, ARC_X_R(c, 8));
  /* 1e8504: adrp x8, #0x25f000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2486272)));
  /* 1e8508: add x8, x8, #0xb60 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2912)));
  /* 1e850c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 1e8510: ldr x0, [x8, #0x120] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(288))));
  /* 1e8514: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 1e8518: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 1e851c: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 1e8520: stp xzr, xzr, [x21] */
  { const uint64_t _pa = ARC_X_R(c, 21);
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 1e8524: str x0, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 0));
  /* 1e8528: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 1e852c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2000176));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1e8530: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1e8534: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 1e8538: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* 1e853c: ldr x3, [x29, #0x18] */
  ARC_X_W(c, 3, arc_ld64((ARC_X_R(c, 29) + INT64_C(24))));
  /* 1e8540: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1e8544: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1e8548: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1e854c: br x3 */
  arc_dispatch(c, ARC_X_R(c, 3)); return;
}

void fn2_1e9590(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077860240));
  /* 1e9590: sub sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(32)));
  /* 1e9594: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1e9598: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1e959c: adrp x8, #0x25f000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2486272)));
  /* 1e95a0: str x1, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 1));
  /* 1e95a4: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 1e95a8: ldr x8, [x8, #0xd58] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3416))));
  /* 1e95ac: add x2, sp, #8 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(8)));
  /* 1e95b0: mov w3, #1 */
  ARC_W_W(c, 3, UINT64_C(1));
  /* 1e95b4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2004408));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1e95b8: ldr x0, [sp, #8] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(8))));
  /* 1e95bc: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1e95c0: add sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(32)));
  /* 1e95c4: ret  */
  return;
}

void fn2_1eafb0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077866928));
  /* 1eafb0: sub sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(96)));
  /* 1eafb4: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1eafb8: stp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 1eafbc: stp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1eafc0: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1eafc4: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 1eafc8: adrp x9, #0x25f000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2486272)));
  /* 1eafcc: add x9, x9, #0xef8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(3832)));
  /* 1eafd0: ldarb w9, [x9] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 9)));
  /* 1eafd4: tbz w9, #0, #0x1eb024 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_1eb024;
L_1eafd8:;
  /* 1eafd8: and w9, w2, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 2) & UINT64_C(1)));
  /* 1eafdc: adrp x10, #0x25f000 */
  ARC_X_W(c, 10, (arc_image_bases[2] + UINT64_C(2486272)));
  /* 1eafe0: stur x1, [x29, #-8] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-8)), ARC_X_R(c, 1));
  /* 1eafe4: sturb w9, [x29, #-0xc] */
  arc_st8((ARC_X_R(c, 29) + INT64_C(-12)), ARC_W_R(c, 9));
  /* 1eafe8: ldr x9, [x10, #0xef0] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 10) + INT64_C(3824))));
  /* 1eafec: ldr x10, [x0, #0x10] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 1eaff0: sub x11, x29, #0xc */
  ARC_X_W(c, 11, (ARC_X_R(c, 29) - UINT64_C(12)));
  /* 1eaff4: sub x2, x29, #8 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 1eaff8: add x3, sp, #8 */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(8)));
  /* 1eaffc: mov x0, x9 */
  ARC_X_W(c, 0, ARC_X_R(c, 9));
  /* 1eb000: mov x1, x10 */
  ARC_X_W(c, 1, ARC_X_R(c, 10));
  /* 1eb004: str x11, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 11));
  /* 1eb008: bl #0x1ebd50 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2011148));
  fn2_1ebd50(c);
  /* 1eb00c: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1eb010: ldp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1eb014: ldp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 1eb018: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1eb01c: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* 1eb020: ret  */
  return;
L_1eb024:;
  /* 1eb024: adrp x9, #0x25f000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2486272)));
  /* 1eb028: add x9, x9, #0xef8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(3832)));
  /* 1eb02c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1eb030: mov x0, x9 */
  ARC_X_W(c, 0, ARC_X_R(c, 9));
  /* 1eb034: mov x20, x8 */
  ARC_X_W(c, 20, ARC_X_R(c, 8));
  /* 1eb038: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* 1eb03c: mov w22, w2 */
  ARC_W_W(c, 22, ARC_W_R(c, 2));
  /* 1eb040: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2011204));
  fn2_24b710(c);
  /* 1eb044: mov w2, w22 */
  ARC_W_W(c, 2, ARC_W_R(c, 22));
  /* 1eb048: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 1eb04c: mov x8, x20 */
  ARC_X_W(c, 8, ARC_X_R(c, 20));
  /* 1eb050: mov w9, w0 */
  ARC_W_W(c, 9, ARC_W_R(c, 0));
  /* 1eb054: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1eb058: cbz w9, #0x1eafd8 */
  if ((ARC_W_R(c, 9)) == 0) goto L_1eafd8;
  /* 1eb05c: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1eb060: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 1eb064: ldr x24, [x8] */
  ARC_X_W(c, 24, arc_ld64(ARC_X_R(c, 8)));
  /* 1eb068: bl #0x1ebc08 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2011244));
  fn2_1ebc08(c);
  /* 1eb06c: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* 1eb070: adrp x1, #0x28000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(163840)));
  /* 1eb074: add x1, x1, #0xef9 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3833)));
  /* 1eb078: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 1eb07c: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1eb080: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2011268));
  fn2_1b8fd4(c);
  /* 1eb084: mov w2, #0xc2b4 */
  ARC_W_W(c, 2, UINT64_C(49844));
  /* 1eb088: sub x1, x29, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 1eb08c: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 1eb090: movk w2, #0xd0e9, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(3504930816)));
  /* 1eb094: blr x24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2011288));
  arc_dispatch(c, ARC_X_R(c, 24));
  /* 1eb098: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* 1eb09c: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 1eb0a0: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2011300));
  fn2_1d2d24(c);
  /* 1eb0a4: adrp x0, #0x25f000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2486272)));
  /* 1eb0a8: add x0, x0, #0xef0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3824)));
  /* 1eb0ac: str x23, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 23));
  }
  /* 1eb0b0: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2011316));
  fn2_24b720(c);
  /* 1eb0b4: mov w2, w22 */
  ARC_W_W(c, 2, ARC_W_R(c, 22));
  /* 1eb0b8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1eb0bc: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 1eb0c0: mov x8, x20 */
  ARC_X_W(c, 8, ARC_X_R(c, 20));
  /* 1eb0c4: b #0x1eafd8 */
  goto L_1eafd8;
}

void fn2_1ed410(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077876240));
  /* 1ed410: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* 1ed414: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1ed418: str x23, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 23));
  /* 1ed41c: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1ed420: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1ed424: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1ed428: adrp x8, #0x260000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1ed42c: add x8, x8, #0x88 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(136)));
  /* 1ed430: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 1ed434: tbz w8, #0, #0x1ed484 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1ed484;
L_1ed438:;
  /* 1ed438: adrp x10, #0x258000 */
  ARC_X_W(c, 10, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1ed43c: adrp x8, #0x260000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1ed440: add x3, x29, #0x18 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1ed444: ldr x10, [x10, #0x980] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 10) + INT64_C(2432))));
  /* 1ed448: ldr x8, [x8, #0x80] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(128))));
  /* 1ed44c: ldr x9, [x0, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 1ed450: stp x1, x2, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 1));
    arc_st64(_pa + 8, ARC_X_R(c, 2));
  }
  /* 1ed454: mov x2, sp */
  ARC_X_W(c, 2, (c)->sp);
  /* 1ed458: ldr x10, [x10] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 10)));
  /* 1ed45c: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1ed460: mov x1, x9 */
  ARC_X_W(c, 1, ARC_X_R(c, 9));
  /* 1ed464: blr x10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2020456));
  arc_dispatch(c, ARC_X_R(c, 10));
  /* 1ed468: ldr w0, [x29, #0x18] */
  ARC_W_W(c, 0, arc_ld32((ARC_X_R(c, 29) + INT64_C(24))));
  /* 1ed46c: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1ed470: ldr x23, [sp, #0x20] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(32))));
  /* 1ed474: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1ed478: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1ed47c: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* 1ed480: ret  */
  return;
L_1ed484:;
  /* 1ed484: adrp x8, #0x260000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1ed488: add x8, x8, #0x88 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(136)));
  /* 1ed48c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1ed490: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1ed494: mov x20, x2 */
  ARC_X_W(c, 20, ARC_X_R(c, 2));
  /* 1ed498: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* 1ed49c: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2020512));
  fn2_24b710(c);
  /* 1ed4a0: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 1ed4a4: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* 1ed4a8: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 1ed4ac: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1ed4b0: cbz w8, #0x1ed438 */
  if ((ARC_W_R(c, 8)) == 0) goto L_1ed438;
  /* 1ed4b4: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1ed4b8: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 1ed4bc: ldr x23, [x8] */
  ARC_X_W(c, 23, arc_ld64(ARC_X_R(c, 8)));
  /* 1ed4c0: bl #0x1ed700 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2020548));
  fn2_1ed700(c);
  /* 1ed4c4: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 1ed4c8: adrp x1, #0x26000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(155648)));
  /* 1ed4cc: add x1, x1, #0xcd7 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3287)));
  /* 1ed4d0: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 1ed4d4: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1ed4d8: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2020572));
  fn2_1b8fd4(c);
  /* 1ed4dc: mov w2, #0x1f0f */
  ARC_W_W(c, 2, UINT64_C(7951));
  /* 1ed4e0: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 1ed4e4: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 1ed4e8: movk w2, #0x34df, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(887029760)));
  /* 1ed4ec: blr x23 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2020592));
  arc_dispatch(c, ARC_X_R(c, 23));
  /* 1ed4f0: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 1ed4f4: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 1ed4f8: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2020604));
  fn2_1d2d24(c);
  /* 1ed4fc: adrp x0, #0x260000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1ed500: add x0, x0, #0x80 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(128)));
  /* 1ed504: str x22, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 22));
  }
  /* 1ed508: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2020620));
  fn2_24b720(c);
  /* 1ed50c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1ed510: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 1ed514: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* 1ed518: b #0x1ed438 */
  goto L_1ed438;
}

void fn2_1ef020(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077883424));
  /* 1ef020: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* 1ef024: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1ef028: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1ef02c: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1ef030: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 1ef034: adrp x9, #0x260000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1ef038: add x9, x9, #0x228 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(552)));
  /* 1ef03c: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* 1ef040: ldarb w9, [x9] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 9)));
  /* 1ef044: tbz w9, #0, #0x1ef0b0 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_1ef0b0;
L_1ef048:;
  /* 1ef048: sxtw x8, w0 */
  ARC_X_W(c, 8, ((int64_t)(int32_t)(ARC_W_R(c, 0))));
  /* 1ef04c: adrp x9, #0x260000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1ef050: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 1ef054: ldr x20, [x9, #0x220] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 9) + INT64_C(544))));
  /* 1ef058: str x8, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 8));
  /* 1ef05c: bl #0x1ccc74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2027616));
  fn2_1ccc74(c);
  /* 1ef060: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1ef064: add x9, sp, #8 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(8)));
  /* 1ef068: add x2, sp, #0x10 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(16)));
  /* 1ef06c: ldr x8, [x8, #0x980] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2432))));
  /* 1ef070: sub x3, x29, #8 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 1ef074: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1ef078: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 1ef07c: str x9, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 9));
  /* 1ef080: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 1ef084: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2027656));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1ef088: sub x1, x29, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 1ef08c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1ef090: bl #0x1ccc88 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2027668));
  fn2_1ccc88(c);
  /* 1ef094: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 1ef098: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2027676));
  fn2_1ccd9c(c);
  /* 1ef09c: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1ef0a0: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1ef0a4: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1ef0a8: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* 1ef0ac: ret  */
  return;
L_1ef0b0:;
  /* 1ef0b0: adrp x8, #0x260000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1ef0b4: add x8, x8, #0x228 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(552)));
  /* 1ef0b8: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 1ef0bc: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1ef0c0: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2027716));
  fn2_24b710(c);
  /* 1ef0c4: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 1ef0c8: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1ef0cc: cbz w8, #0x1ef048 */
  if ((ARC_W_R(c, 8)) == 0) goto L_1ef048;
  /* 1ef0d0: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1ef0d4: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 1ef0d8: ldr x22, [x8] */
  ARC_X_W(c, 22, arc_ld64(ARC_X_R(c, 8)));
  /* 1ef0dc: bl #0x1f0cc4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2027744));
  fn2_1f0cc4(c);
  /* 1ef0e0: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 1ef0e4: adrp x1, #0x27000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(159744)));
  /* 1ef0e8: add x1, x1, #0x656 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1622)));
  /* 1ef0ec: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 1ef0f0: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1ef0f4: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2027768));
  fn2_1b8fd4(c);
  /* 1ef0f8: mov w2, #0xb153 */
  ARC_W_W(c, 2, UINT64_C(45395));
  /* 1ef0fc: sub x1, x29, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 1ef100: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 1ef104: movk w2, #0x3b04, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(990117888)));
  /* 1ef108: blr x22 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2027788));
  arc_dispatch(c, ARC_X_R(c, 22));
  /* 1ef10c: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 1ef110: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 1ef114: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2027800));
  fn2_1d2d24(c);
  /* 1ef118: adrp x0, #0x260000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1ef11c: add x0, x0, #0x220 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(544)));
  /* 1ef120: str x21, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 21));
  }
  /* 1ef124: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2027816));
  fn2_24b720(c);
  /* 1ef128: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1ef12c: b #0x1ef048 */
  goto L_1ef048;
}

void fn2_1f0f88(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077891464));
  /* 1f0f88: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1f0f8c: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 1f0f90: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1f0f94: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1f0f98: bl #0x1f0dd8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2035612));
  fn2_1f0dd8(c);
  /* 1f0f9c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1f0fa0: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1f0fa4: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1f0fa8: b #0x24b730 */
  fn2_24b730(c); return;
}

void fn2_1f34ec(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077901036));
  /* 1f34ec: sub sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(112)));
  /* 1f34f0: stp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1f34f4: stp x24, x23, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 1f34f8: stp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1f34fc: stp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1f3500: add x29, sp, #0x30 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(48)));
  /* 1f3504: adrp x8, #0x260000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1f3508: add x8, x8, #0x620 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1568)));
  /* 1f350c: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 1f3510: tbz w8, #0, #0x1f3574 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1f3574;
L_1f3514:;
  /* 1f3514: and w10, w3, #1 */
  ARC_W_W(c, 10, (ARC_W_R(c, 3) & UINT64_C(1)));
  /* 1f3518: sxtw x9, w2 */
  ARC_X_W(c, 9, ((int64_t)(int32_t)(ARC_W_R(c, 2))));
  /* 1f351c: ldr x8, [x0, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 1f3520: strb w10, [sp, #0xc] */
  arc_st8(((c)->sp + INT64_C(12)), ARC_W_R(c, 10));
  /* 1f3524: adrp x10, #0x258000 */
  ARC_X_W(c, 10, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1f3528: adrp x11, #0x260000 */
  ARC_X_W(c, 11, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1f352c: ldr x10, [x10, #0x980] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 10) + INT64_C(2432))));
  /* 1f3530: stp x9, x1, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 1));
  }
  /* 1f3534: ldr x0, [x11, #0x618] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 11) + INT64_C(1560))));
  /* 1f3538: add x9, sp, #0x10 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(16)));
  /* 1f353c: add x2, sp, #0x18 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(24)));
  /* 1f3540: mov x1, x8 */
  ARC_X_W(c, 1, ARC_X_R(c, 8));
  /* 1f3544: ldr x10, [x10] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 10)));
  /* 1f3548: str x9, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 9));
  /* 1f354c: add x9, sp, #0xc */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(12)));
  /* 1f3550: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* 1f3554: str x9, [sp, #0x28] */
  arc_st64(((c)->sp + INT64_C(40)), ARC_X_R(c, 9));
  /* 1f3558: blr x10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2045276));
  arc_dispatch(c, ARC_X_R(c, 10));
  /* 1f355c: ldp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1f3560: ldp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1f3564: ldp x24, x23, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 1f3568: ldp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1f356c: add sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(112)));
  /* 1f3570: ret  */
  return;
L_1f3574:;
  /* 1f3574: adrp x8, #0x260000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1f3578: add x8, x8, #0x620 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1568)));
  /* 1f357c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1f3580: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1f3584: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 1f3588: mov w21, w3 */
  ARC_W_W(c, 21, ARC_W_R(c, 3));
  /* 1f358c: mov x22, x2 */
  ARC_X_W(c, 22, ARC_X_R(c, 2));
  /* 1f3590: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2045332));
  fn2_24b710(c);
  /* 1f3594: mov x2, x22 */
  ARC_X_W(c, 2, ARC_X_R(c, 22));
  /* 1f3598: mov w3, w21 */
  ARC_W_W(c, 3, ARC_W_R(c, 21));
  /* 1f359c: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 1f35a0: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 1f35a4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1f35a8: cbz w8, #0x1f3514 */
  if ((ARC_W_R(c, 8)) == 0) goto L_1f3514;
  /* 1f35ac: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1f35b0: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 1f35b4: ldr x24, [x8] */
  ARC_X_W(c, 24, arc_ld64(ARC_X_R(c, 8)));
  /* 1f35b8: bl #0x20293c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2045372));
  fn2_20293c(c);
  /* 1f35bc: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* 1f35c0: adrp x1, #0x1a000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(106496)));
  /* 1f35c4: add x1, x1, #0xf41 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3905)));
  /* 1f35c8: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* 1f35cc: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1f35d0: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2045396));
  fn2_1b8fd4(c);
  /* 1f35d4: mov w2, #0x5dd9 */
  ARC_W_W(c, 2, UINT64_C(24025));
  /* 1f35d8: add x1, sp, #0x18 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(24)));
  /* 1f35dc: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 1f35e0: movk w2, #0xf4e0, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(4108320768)));
  /* 1f35e4: blr x24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2045416));
  arc_dispatch(c, ARC_X_R(c, 24));
  /* 1f35e8: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* 1f35ec: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* 1f35f0: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2045428));
  fn2_1d2d24(c);
  /* 1f35f4: adrp x0, #0x260000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1f35f8: add x0, x0, #0x618 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1560)));
  /* 1f35fc: str x23, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 23));
  }
  /* 1f3600: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2045444));
  fn2_24b720(c);
  /* 1f3604: mov x2, x22 */
  ARC_X_W(c, 2, ARC_X_R(c, 22));
  /* 1f3608: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1f360c: mov w3, w21 */
  ARC_W_W(c, 3, ARC_W_R(c, 21));
  /* 1f3610: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 1f3614: b #0x1f3514 */
  goto L_1f3514;
}

void fn2_1f56fc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077909756));
  /* 1f56fc: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 1f5700: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1f5704: str x21, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 21));
  /* 1f5708: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1f570c: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1f5710: adrp x8, #0x260000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1f5714: add x8, x8, #0x820 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2080)));
  /* 1f5718: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 1f571c: tbz w8, #0, #0x1f5770 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1f5770;
L_1f5720:;
  /* 1f5720: adrp x9, #0x258000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1f5724: adrp x8, #0x37000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(225280)));
  /* 1f5728: adrp x10, #0x260000 */
  ARC_X_W(c, 10, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1f572c: ldr x9, [x9, #0x980] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(2432))));
  /* 1f5730: ldr q0, [x8, #0xa20] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(2592))), arc_ld64((ARC_X_R(c, 8) + INT64_C(2592)) + 8));
  /* 1f5734: ldr x8, [x10, #0x818] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 10) + INT64_C(2072))));
  /* 1f5738: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 1f573c: mov x3, sp */
  ARC_X_W(c, 3, (c)->sp);
  /* 1f5740: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 1f5744: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* 1f5748: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1f574c: str q0, [sp] */
  arc_st64((c)->sp, (c)->q[0].u64[0]);
  arc_st64((c)->sp + 8, (c)->q[0].u64[1]);
  /* 1f5750: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2053972));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 1f5754: ldp s0, s1, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_su_w(c, 0, arc_ld32(_pa));
    arc_su_w(c, 1, arc_ld32((_pa + 4)));
  }
  /* 1f5758: ldp s2, s3, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    arc_su_w(c, 2, arc_ld32(_pa));
    arc_su_w(c, 3, arc_ld32((_pa + 4)));
  }
  /* 1f575c: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1f5760: ldr x21, [sp, #0x20] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(32))));
  /* 1f5764: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1f5768: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 1f576c: ret  */
  return;
L_1f5770:;
  /* 1f5770: adrp x8, #0x260000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1f5774: add x8, x8, #0x820 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2080)));
  /* 1f5778: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1f577c: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1f5780: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2054020));
  fn2_24b710(c);
  /* 1f5784: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 1f5788: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1f578c: cbz w8, #0x1f5720 */
  if ((ARC_W_R(c, 8)) == 0) goto L_1f5720;
  /* 1f5790: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1f5794: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 1f5798: ldr x21, [x8] */
  ARC_X_W(c, 21, arc_ld64(ARC_X_R(c, 8)));
  /* 1f579c: bl #0x20293c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2054048));
  fn2_20293c(c);
  /* 1f57a0: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 1f57a4: adrp x1, #0x1d000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(118784)));
  /* 1f57a8: add x1, x1, #0x16a */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(362)));
  /* 1f57ac: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 1f57b0: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1f57b4: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2054072));
  fn2_1b8fd4(c);
  /* 1f57b8: mov w2, #0xf074 */
  ARC_W_W(c, 2, UINT64_C(61556));
  /* 1f57bc: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 1f57c0: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1f57c4: movk w2, #0xcd4a, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(3444178944)));
  /* 1f57c8: blr x21 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2054092));
  arc_dispatch(c, ARC_X_R(c, 21));
  /* 1f57cc: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 1f57d0: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 1f57d4: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2054104));
  fn2_1d2d24(c);
  /* 1f57d8: adrp x0, #0x260000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1f57dc: add x0, x0, #0x818 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2072)));
  /* 1f57e0: str x20, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 20));
  }
  /* 1f57e4: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2054120));
  fn2_24b720(c);
  /* 1f57e8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1f57ec: b #0x1f5720 */
  goto L_1f5720;
}

void fn2_1f7538(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077917496));
  /* 1f7538: sub sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(96)));
  /* 1f753c: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1f7540: str x23, [sp, #0x30] */
  arc_st64(((c)->sp + INT64_C(48)), ARC_X_R(c, 23));
  /* 1f7544: stp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1f7548: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1f754c: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 1f7550: adrp x8, #0x260000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1f7554: add x8, x8, #0xa20 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2592)));
  /* 1f7558: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 1f755c: tbz w8, #0, #0x1f75b8 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1f75b8;
L_1f7560:;
  /* 1f7560: mov w8, w1 */
  ARC_W_W(c, 8, ARC_W_R(c, 1));
  /* 1f7564: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 1f7568: adrp x10, #0x260000 */
  ARC_X_W(c, 10, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1f756c: str x8, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 8));
  /* 1f7570: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1f7574: sxtw x11, w2 */
  ARC_X_W(c, 11, ((int64_t)(int32_t)(ARC_W_R(c, 2))));
  /* 1f7578: ldr x8, [x8, #0x980] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2432))));
  /* 1f757c: ldr x0, [x10, #0xa18] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 10) + INT64_C(2584))));
  /* 1f7580: add x9, x29, #0x18 */
  ARC_X_W(c, 9, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1f7584: add x10, sp, #8 */
  ARC_X_W(c, 10, ((c)->sp + UINT64_C(8)));
  /* 1f7588: add x2, sp, #0x10 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(16)));
  /* 1f758c: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* 1f7590: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 1f7594: stp x11, x9, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 11));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 1f7598: str x10, [sp, #0x18] */
  arc_st64(((c)->sp + INT64_C(24)), ARC_X_R(c, 10));
  /* 1f759c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2061728));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1f75a0: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1f75a4: ldr x23, [sp, #0x30] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(48))));
  /* 1f75a8: ldp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1f75ac: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1f75b0: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* 1f75b4: ret  */
  return;
L_1f75b8:;
  /* 1f75b8: adrp x8, #0x260000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1f75bc: add x8, x8, #0xa20 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2592)));
  /* 1f75c0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1f75c4: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1f75c8: mov x20, x2 */
  ARC_X_W(c, 20, ARC_X_R(c, 2));
  /* 1f75cc: mov w21, w1 */
  ARC_W_W(c, 21, ARC_W_R(c, 1));
  /* 1f75d0: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2061780));
  fn2_24b710(c);
  /* 1f75d4: mov w1, w21 */
  ARC_W_W(c, 1, ARC_W_R(c, 21));
  /* 1f75d8: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* 1f75dc: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 1f75e0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1f75e4: cbz w8, #0x1f7560 */
  if ((ARC_W_R(c, 8)) == 0) goto L_1f7560;
  /* 1f75e8: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1f75ec: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 1f75f0: ldr x23, [x8] */
  ARC_X_W(c, 23, arc_ld64(ARC_X_R(c, 8)));
  /* 1f75f4: bl #0x20293c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2061816));
  fn2_20293c(c);
  /* 1f75f8: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 1f75fc: adrp x1, #0x2e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(188416)));
  /* 1f7600: add x1, x1, #0x852 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2130)));
  /* 1f7604: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 1f7608: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1f760c: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2061840));
  fn2_1b8fd4(c);
  /* 1f7610: mov w2, #0xfd4f */
  ARC_W_W(c, 2, UINT64_C(64847));
  /* 1f7614: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* 1f7618: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 1f761c: movk w2, #0x83d0, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(2211446784)));
  /* 1f7620: blr x23 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2061860));
  arc_dispatch(c, ARC_X_R(c, 23));
  /* 1f7624: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 1f7628: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 1f762c: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2061872));
  fn2_1d2d24(c);
  /* 1f7630: adrp x0, #0x260000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1f7634: add x0, x0, #0xa18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2584)));
  /* 1f7638: str x22, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 22));
  }
  /* 1f763c: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2061888));
  fn2_24b720(c);
  /* 1f7640: mov w1, w21 */
  ARC_W_W(c, 1, ARC_W_R(c, 21));
  /* 1f7644: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1f7648: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* 1f764c: b #0x1f7560 */
  goto L_1f7560;
}

void fn2_1f95e8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077925864));
  /* 1f95e8: sub sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(96)));
  /* 1f95ec: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1f95f0: str x23, [sp, #0x30] */
  arc_st64(((c)->sp + INT64_C(48)), ARC_X_R(c, 23));
  /* 1f95f4: stp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1f95f8: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1f95fc: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 1f9600: adrp x8, #0x260000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1f9604: add x8, x8, #0xc20 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3104)));
  /* 1f9608: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 1f960c: tbz w8, #0, #0x1f9668 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1f9668;
L_1f9610:;
  /* 1f9610: mov w8, w1 */
  ARC_W_W(c, 8, ARC_W_R(c, 1));
  /* 1f9614: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 1f9618: adrp x10, #0x260000 */
  ARC_X_W(c, 10, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1f961c: str x8, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 8));
  /* 1f9620: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1f9624: sxtw x11, w2 */
  ARC_X_W(c, 11, ((int64_t)(int32_t)(ARC_W_R(c, 2))));
  /* 1f9628: ldr x8, [x8, #0x980] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2432))));
  /* 1f962c: ldr x0, [x10, #0xc18] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 10) + INT64_C(3096))));
  /* 1f9630: add x9, x29, #0x18 */
  ARC_X_W(c, 9, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1f9634: add x10, sp, #8 */
  ARC_X_W(c, 10, ((c)->sp + UINT64_C(8)));
  /* 1f9638: add x2, sp, #0x10 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(16)));
  /* 1f963c: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* 1f9640: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 1f9644: stp x11, x9, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 11));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 1f9648: str x10, [sp, #0x18] */
  arc_st64(((c)->sp + INT64_C(24)), ARC_X_R(c, 10));
  /* 1f964c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2070096));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1f9650: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1f9654: ldr x23, [sp, #0x30] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(48))));
  /* 1f9658: ldp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1f965c: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1f9660: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* 1f9664: ret  */
  return;
L_1f9668:;
  /* 1f9668: adrp x8, #0x260000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1f966c: add x8, x8, #0xc20 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3104)));
  /* 1f9670: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1f9674: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1f9678: mov x20, x2 */
  ARC_X_W(c, 20, ARC_X_R(c, 2));
  /* 1f967c: mov w21, w1 */
  ARC_W_W(c, 21, ARC_W_R(c, 1));
  /* 1f9680: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2070148));
  fn2_24b710(c);
  /* 1f9684: mov w1, w21 */
  ARC_W_W(c, 1, ARC_W_R(c, 21));
  /* 1f9688: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* 1f968c: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 1f9690: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1f9694: cbz w8, #0x1f9610 */
  if ((ARC_W_R(c, 8)) == 0) goto L_1f9610;
  /* 1f9698: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1f969c: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 1f96a0: ldr x23, [x8] */
  ARC_X_W(c, 23, arc_ld64(ARC_X_R(c, 8)));
  /* 1f96a4: bl #0x20293c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2070184));
  fn2_20293c(c);
  /* 1f96a8: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 1f96ac: adrp x1, #0x2c000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(180224)));
  /* 1f96b0: add x1, x1, #0xb13 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2835)));
  /* 1f96b4: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 1f96b8: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1f96bc: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2070208));
  fn2_1b8fd4(c);
  /* 1f96c0: mov w2, #0x12d9 */
  ARC_W_W(c, 2, UINT64_C(4825));
  /* 1f96c4: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* 1f96c8: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 1f96cc: movk w2, #0x4ead, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(1319960576)));
  /* 1f96d0: blr x23 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2070228));
  arc_dispatch(c, ARC_X_R(c, 23));
  /* 1f96d4: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 1f96d8: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 1f96dc: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2070240));
  fn2_1d2d24(c);
  /* 1f96e0: adrp x0, #0x260000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1f96e4: add x0, x0, #0xc18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3096)));
  /* 1f96e8: str x22, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 22));
  }
  /* 1f96ec: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2070256));
  fn2_24b720(c);
  /* 1f96f0: mov w1, w21 */
  ARC_W_W(c, 1, ARC_W_R(c, 21));
  /* 1f96f4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1f96f8: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* 1f96fc: b #0x1f9610 */
  goto L_1f9610;
}

void fn2_1fb710(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077934352));
  /* 1fb710: sub sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(96)));
  /* 1fb714: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1fb718: str x23, [sp, #0x30] */
  arc_st64(((c)->sp + INT64_C(48)), ARC_X_R(c, 23));
  /* 1fb71c: stp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1fb720: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1fb724: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 1fb728: adrp x8, #0x260000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1fb72c: add x8, x8, #0xe20 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3616)));
  /* 1fb730: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 1fb734: tbz w8, #0, #0x1fb790 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1fb790;
L_1fb738:;
  /* 1fb738: and w9, w2, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 2) & UINT64_C(1)));
  /* 1fb73c: sxtw x8, w1 */
  ARC_X_W(c, 8, ((int64_t)(int32_t)(ARC_W_R(c, 1))));
  /* 1fb740: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 1fb744: strb w9, [sp, #0xc] */
  arc_st8(((c)->sp + INT64_C(12)), ARC_W_R(c, 9));
  /* 1fb748: adrp x9, #0x258000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1fb74c: adrp x10, #0x260000 */
  ARC_X_W(c, 10, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1fb750: ldr x9, [x9, #0x980] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(2432))));
  /* 1fb754: ldr x0, [x10, #0xe18] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 10) + INT64_C(3608))));
  /* 1fb758: str x8, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 8));
  /* 1fb75c: add x8, x29, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1fb760: add x10, sp, #0xc */
  ARC_X_W(c, 10, ((c)->sp + UINT64_C(12)));
  /* 1fb764: add x2, sp, #0x10 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(16)));
  /* 1fb768: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* 1fb76c: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* 1fb770: stp x8, x10, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 10));
  }
  /* 1fb774: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2078584));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 1fb778: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1fb77c: ldr x23, [sp, #0x30] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(48))));
  /* 1fb780: ldp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1fb784: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1fb788: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* 1fb78c: ret  */
  return;
L_1fb790:;
  /* 1fb790: adrp x8, #0x260000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1fb794: add x8, x8, #0xe20 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3616)));
  /* 1fb798: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1fb79c: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1fb7a0: mov w20, w2 */
  ARC_W_W(c, 20, ARC_W_R(c, 2));
  /* 1fb7a4: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* 1fb7a8: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2078636));
  fn2_24b710(c);
  /* 1fb7ac: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 1fb7b0: mov w2, w20 */
  ARC_W_W(c, 2, ARC_W_R(c, 20));
  /* 1fb7b4: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 1fb7b8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1fb7bc: cbz w8, #0x1fb738 */
  if ((ARC_W_R(c, 8)) == 0) goto L_1fb738;
  /* 1fb7c0: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1fb7c4: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 1fb7c8: ldr x23, [x8] */
  ARC_X_W(c, 23, arc_ld64(ARC_X_R(c, 8)));
  /* 1fb7cc: bl #0x20293c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2078672));
  fn2_20293c(c);
  /* 1fb7d0: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 1fb7d4: adrp x1, #0x1f000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(126976)));
  /* 1fb7d8: add x1, x1, #0xdf4 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3572)));
  /* 1fb7dc: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 1fb7e0: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1fb7e4: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2078696));
  fn2_1b8fd4(c);
  /* 1fb7e8: mov w2, #0xcf4b */
  ARC_W_W(c, 2, UINT64_C(53067));
  /* 1fb7ec: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* 1fb7f0: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 1fb7f4: movk w2, #0x11ef, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(300875776)));
  /* 1fb7f8: blr x23 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2078716));
  arc_dispatch(c, ARC_X_R(c, 23));
  /* 1fb7fc: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 1fb800: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 1fb804: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2078728));
  fn2_1d2d24(c);
  /* 1fb808: adrp x0, #0x260000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1fb80c: add x0, x0, #0xe18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3608)));
  /* 1fb810: str x22, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 22));
  }
  /* 1fb814: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2078744));
  fn2_24b720(c);
  /* 1fb818: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 1fb81c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1fb820: mov w2, w20 */
  ARC_W_W(c, 2, ARC_W_R(c, 20));
  /* 1fb824: b #0x1fb738 */
  goto L_1fb738;
}

void fn2_1fd8a8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077942952));
  /* 1fd8a8: sub sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(112)));
  /* 1fd8ac: stp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1fd8b0: stp x24, x23, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 1fd8b4: stp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1fd8b8: stp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1fd8bc: add x29, sp, #0x30 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(48)));
  /* 1fd8c0: adrp x8, #0x261000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 1fd8c4: add x8, x8, #0x20 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(32)));
  /* 1fd8c8: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 1fd8cc: tbz w8, #0, #0x1fd930 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1fd930;
L_1fd8d0:;
  /* 1fd8d0: sxtw x9, w2 */
  ARC_X_W(c, 9, ((int64_t)(int32_t)(ARC_W_R(c, 2))));
  /* 1fd8d4: sxtw x10, w3 */
  ARC_X_W(c, 10, ((int64_t)(int32_t)(ARC_W_R(c, 3))));
  /* 1fd8d8: ldr x8, [x0, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 1fd8dc: adrp x11, #0x261000 */
  ARC_X_W(c, 11, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 1fd8e0: add x2, sp, #0x18 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(24)));
  /* 1fd8e4: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* 1fd8e8: str x9, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 9));
  /* 1fd8ec: adrp x9, #0x258000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1fd8f0: ldr x9, [x9, #0x980] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(2432))));
  /* 1fd8f4: str x10, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 10));
  /* 1fd8f8: ldr x0, [x11, #0x18] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 11) + INT64_C(24))));
  /* 1fd8fc: add x10, sp, #0x10 */
  ARC_X_W(c, 10, ((c)->sp + UINT64_C(16)));
  /* 1fd900: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* 1fd904: stp x1, x10, [sp, #0x18] */
  { const uint64_t _pa = ((c)->sp + INT64_C(24));
    arc_st64(_pa, ARC_X_R(c, 1));
    arc_st64(_pa + 8, ARC_X_R(c, 10));
  }
  /* 1fd908: add x10, sp, #8 */
  ARC_X_W(c, 10, ((c)->sp + UINT64_C(8)));
  /* 1fd90c: mov x1, x8 */
  ARC_X_W(c, 1, ARC_X_R(c, 8));
  /* 1fd910: str x10, [sp, #0x28] */
  arc_st64(((c)->sp + INT64_C(40)), ARC_X_R(c, 10));
  /* 1fd914: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2087192));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 1fd918: ldp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1fd91c: ldp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1fd920: ldp x24, x23, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 1fd924: ldp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1fd928: add sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(112)));
  /* 1fd92c: ret  */
  return;
L_1fd930:;
  /* 1fd930: adrp x8, #0x261000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 1fd934: add x8, x8, #0x20 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(32)));
  /* 1fd938: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1fd93c: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1fd940: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 1fd944: mov x21, x3 */
  ARC_X_W(c, 21, ARC_X_R(c, 3));
  /* 1fd948: mov x22, x2 */
  ARC_X_W(c, 22, ARC_X_R(c, 2));
  /* 1fd94c: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2087248));
  fn2_24b710(c);
  /* 1fd950: mov x2, x22 */
  ARC_X_W(c, 2, ARC_X_R(c, 22));
  /* 1fd954: mov x3, x21 */
  ARC_X_W(c, 3, ARC_X_R(c, 21));
  /* 1fd958: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 1fd95c: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 1fd960: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1fd964: cbz w8, #0x1fd8d0 */
  if ((ARC_W_R(c, 8)) == 0) goto L_1fd8d0;
  /* 1fd968: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1fd96c: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 1fd970: ldr x24, [x8] */
  ARC_X_W(c, 24, arc_ld64(ARC_X_R(c, 8)));
  /* 1fd974: bl #0x20293c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2087288));
  fn2_20293c(c);
  /* 1fd978: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* 1fd97c: adrp x1, #0x34000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(212992)));
  /* 1fd980: add x1, x1, #0xc02 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3074)));
  /* 1fd984: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* 1fd988: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1fd98c: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2087312));
  fn2_1b8fd4(c);
  /* 1fd990: mov w2, #0x7f69 */
  ARC_W_W(c, 2, UINT64_C(32617));
  /* 1fd994: add x1, sp, #0x18 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(24)));
  /* 1fd998: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 1fd99c: movk w2, #0xff9c, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(4288413696)));
  /* 1fd9a0: blr x24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2087332));
  arc_dispatch(c, ARC_X_R(c, 24));
  /* 1fd9a4: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* 1fd9a8: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* 1fd9ac: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2087344));
  fn2_1d2d24(c);
  /* 1fd9b0: adrp x0, #0x261000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 1fd9b4: add x0, x0, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(24)));
  /* 1fd9b8: str x23, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 23));
  }
  /* 1fd9bc: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2087360));
  fn2_24b720(c);
  /* 1fd9c0: mov x2, x22 */
  ARC_X_W(c, 2, ARC_X_R(c, 22));
  /* 1fd9c4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1fd9c8: mov x3, x21 */
  ARC_X_W(c, 3, ARC_X_R(c, 21));
  /* 1fd9cc: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 1fd9d0: b #0x1fd8d0 */
  goto L_1fd8d0;
}

void fn2_1ffb00(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077951744));
  /* 1ffb00: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1ffb04: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 1ffb08: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1ffb0c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1ffb10: adrp x8, #0x261000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 1ffb14: add x8, x8, #0x220 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(544)));
  /* 1ffb18: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 1ffb1c: tbz w8, #0, #0x1ffb60 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1ffb60;
L_1ffb20:;
  /* 1ffb20: adrp x9, #0x258000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1ffb24: adrp x8, #0x261000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 1ffb28: add x3, x29, #0x18 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1ffb2c: ldr x9, [x9, #0x980] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(2432))));
  /* 1ffb30: ldr x8, [x8, #0x218] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(536))));
  /* 1ffb34: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 1ffb38: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 1ffb3c: str xzr, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 31));
  /* 1ffb40: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* 1ffb44: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1ffb48: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2095948));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 1ffb4c: ldr x0, [x29, #0x18] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(24))));
  /* 1ffb50: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1ffb54: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1ffb58: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1ffb5c: ret  */
  return;
L_1ffb60:;
  /* 1ffb60: adrp x8, #0x261000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 1ffb64: add x8, x8, #0x220 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(544)));
  /* 1ffb68: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1ffb6c: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1ffb70: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2095988));
  fn2_24b710(c);
  /* 1ffb74: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 1ffb78: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1ffb7c: cbz w8, #0x1ffb20 */
  if ((ARC_W_R(c, 8)) == 0) goto L_1ffb20;
  /* 1ffb80: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1ffb84: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 1ffb88: ldr x21, [x8] */
  ARC_X_W(c, 21, arc_ld64(ARC_X_R(c, 8)));
  /* 1ffb8c: bl #0x20293c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2096016));
  fn2_20293c(c);
  /* 1ffb90: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 1ffb94: adrp x1, #0x24000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(147456)));
  /* 1ffb98: add x1, x1, #0xfac */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(4012)));
  /* 1ffb9c: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1ffba0: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1ffba4: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2096040));
  fn2_1b8fd4(c);
  /* 1ffba8: mov w2, #0xeaf0 */
  ARC_W_W(c, 2, UINT64_C(60144));
  /* 1ffbac: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1ffbb0: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1ffbb4: movk w2, #0xdbff, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(3690921984)));
  /* 1ffbb8: blr x21 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2096060));
  arc_dispatch(c, ARC_X_R(c, 21));
  /* 1ffbbc: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 1ffbc0: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1ffbc4: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2096072));
  fn2_1d2d24(c);
  /* 1ffbc8: adrp x0, #0x261000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 1ffbcc: add x0, x0, #0x218 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(536)));
  /* 1ffbd0: str x20, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 20));
  }
  /* 1ffbd4: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2096088));
  fn2_24b720(c);
  /* 1ffbd8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1ffbdc: b #0x1ffb20 */
  goto L_1ffb20;
}

void fn2_201b88(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077960072));
  /* 201b88: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* 201b8c: stp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 201b90: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 201b94: add x29, sp, #0x30 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(48)));
  /* 201b98: adrp x8, #0x261000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 201b9c: add x8, x8, #0x420 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1056)));
  /* 201ba0: adrp x19, #0x261000 */
  ARC_X_W(c, 19, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 201ba4: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 201ba8: tbz w8, #0, #0x201bf0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_201bf0;
L_201bac:;
  /* 201bac: adrp x10, #0x258000 */
  ARC_X_W(c, 10, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 201bb0: sxtw x9, w1 */
  ARC_X_W(c, 9, ((int64_t)(int32_t)(ARC_W_R(c, 1))));
  /* 201bb4: add x11, sp, #0x18 */
  ARC_X_W(c, 11, ((c)->sp + UINT64_C(24)));
  /* 201bb8: ldr x10, [x10, #0x980] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 10) + INT64_C(2432))));
  /* 201bbc: ldr x8, [x19, #0x418] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(1048))));
  /* 201bc0: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 201bc4: str x9, [sp, #0x18] */
  arc_st64(((c)->sp + INT64_C(24)), ARC_X_R(c, 9));
  /* 201bc8: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* 201bcc: ldr x9, [x10] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 10)));
  /* 201bd0: stp x11, x2, [x29, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-16));
    arc_st64(_pa, ARC_X_R(c, 11));
    arc_st64(_pa + 8, ARC_X_R(c, 2));
  }
  /* 201bd4: sub x2, x29, #0x10 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* 201bd8: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 201bdc: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2104288));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 201be0: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 201be4: ldp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 201be8: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* 201bec: ret  */
  return;
L_201bf0:;
  /* 201bf0: adrp x8, #0x261000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 201bf4: add x8, x8, #0x420 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1056)));
  /* 201bf8: stp x2, x0, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 2));
    arc_st64(_pa + 8, ARC_X_R(c, 0));
  }
  /* 201bfc: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 201c00: str x1, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 1));
  /* 201c04: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2104328));
  fn2_24b710(c);
  /* 201c08: ldp x1, x2, [sp] */
  { const uint64_t _pa = (c)->sp;
    ARC_X_W(c, 1, arc_ld64(_pa));
    ARC_X_W(c, 2, arc_ld64(_pa + 8));
  }
  /* 201c0c: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 201c10: ldr x0, [sp, #0x10] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(16))));
  /* 201c14: cbz w8, #0x201bac */
  if ((ARC_W_R(c, 8)) == 0) goto L_201bac;
  /* 201c18: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 201c1c: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 201c20: ldr x20, [x8] */
  ARC_X_W(c, 20, arc_ld64(ARC_X_R(c, 8)));
  /* 201c24: bl #0x20293c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2104360));
  fn2_20293c(c);
  /* 201c28: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 201c2c: adrp x1, #0x2b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(176128)));
  /* 201c30: add x1, x1, #0xde7 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3559)));
  /* 201c34: sub x0, x29, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* 201c38: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 201c3c: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2104384));
  fn2_1b8fd4(c);
  /* 201c40: mov w2, #0x4c9d */
  ARC_W_W(c, 2, UINT64_C(19613));
  /* 201c44: sub x1, x29, #0x10 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* 201c48: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 201c4c: movk w2, #0x1dea, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(501874688)));
  /* 201c50: blr x20 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2104404));
  arc_dispatch(c, ARC_X_R(c, 20));
  /* 201c54: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 201c58: sub x0, x29, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* 201c5c: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2104416));
  fn2_1d2d24(c);
  /* 201c60: adrp x8, #0x261000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 201c64: adrp x0, #0x261000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 201c68: add x0, x0, #0x420 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1056)));
  /* 201c6c: str x19, [x8, #0x418] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(1048)), ARC_X_R(c, 19));
  /* 201c70: adrp x19, #0x261000 */
  ARC_X_W(c, 19, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 201c74: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2104440));
  fn2_24b720(c);
  /* 201c78: ldp x1, x2, [sp] */
  { const uint64_t _pa = (c)->sp;
    ARC_X_W(c, 1, arc_ld64(_pa));
    ARC_X_W(c, 2, arc_ld64(_pa + 8));
  }
  /* 201c7c: ldr x0, [sp, #0x10] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(16))));
  /* 201c80: b #0x201bac */
  goto L_201bac;
}

void fn2_202fc8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077965256));
  /* 202fc8: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 202fcc: ret  */
  return;
}

void fn2_205040(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077973568));
  /* 205040: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 205044: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 205048: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 20504c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 205050: adrp x8, #0x261000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 205054: add x8, x8, #0x6e0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1760)));
  /* 205058: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 20505c: tbz w8, #0, #0x205098 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_205098;
L_205060:;
  /* 205060: adrp x9, #0x258000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 205064: adrp x8, #0x261000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 205068: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 20506c: ldr x9, [x9, #0x980] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(2432))));
  /* 205070: ldr x8, [x8, #0x6d8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(1752))));
  /* 205074: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 205078: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* 20507c: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* 205080: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 205084: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2117768));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 205088: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 20508c: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 205090: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 205094: ret  */
  return;
L_205098:;
  /* 205098: adrp x8, #0x261000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 20509c: add x8, x8, #0x6e0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1760)));
  /* 2050a0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 2050a4: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 2050a8: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2117804));
  fn2_24b710(c);
  /* 2050ac: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 2050b0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 2050b4: cbz w8, #0x205060 */
  if ((ARC_W_R(c, 8)) == 0) goto L_205060;
  /* 2050b8: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 2050bc: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 2050c0: ldr x21, [x8] */
  ARC_X_W(c, 21, arc_ld64(ARC_X_R(c, 8)));
  /* 2050c4: bl #0x205cd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2117832));
  fn2_205cd4(c);
  /* 2050c8: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 2050cc: adrp x1, #0x21000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(135168)));
  /* 2050d0: add x1, x1, #0xb17 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2839)));
  /* 2050d4: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 2050d8: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 2050dc: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2117856));
  fn2_1b8fd4(c);
  /* 2050e0: mov w2, #0x6d64 */
  ARC_W_W(c, 2, UINT64_C(28004));
  /* 2050e4: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 2050e8: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 2050ec: movk w2, #0xbfdd, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(3218931712)));
  /* 2050f0: blr x21 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2117876));
  arc_dispatch(c, ARC_X_R(c, 21));
  /* 2050f4: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 2050f8: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 2050fc: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2117888));
  fn2_1d2d24(c);
  /* 205100: adrp x0, #0x261000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 205104: add x0, x0, #0x6d8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1752)));
  /* 205108: str x20, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 20));
  }
  /* 20510c: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2117904));
  fn2_24b720(c);
  /* 205110: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 205114: b #0x205060 */
  goto L_205060;
}

void fn2_206d2c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077980972));
  /* 206d2c: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 206d30: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 206d34: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 206d38: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 206d3c: adrp x8, #0x261000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 206d40: add x8, x8, #0x8c8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2248)));
  /* 206d44: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 206d48: tbz w8, #0, #0x206d94 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_206d94;
L_206d4c:;
  /* 206d4c: adrp x9, #0x258000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 206d50: adrp x8, #0x261000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 206d54: add x3, x29, #0x18 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 206d58: ldr x9, [x9, #0x980] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(2432))));
  /* 206d5c: ldr x8, [x8, #0x8c0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2240))));
  /* 206d60: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 206d64: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 206d68: str xzr, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 31));
  /* 206d6c: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* 206d70: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 206d74: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2125176));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 206d78: ldr x0, [x29, #0x18] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(24))));
  /* 206d7c: cbz x0, #0x206d84 */
  if ((ARC_X_R(c, 0)) == 0) goto L_206d84;
  /* 206d80: bl #0x1b62dc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2125188));
  fn2_1b62dc(c);
L_206d84:;
  /* 206d84: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 206d88: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 206d8c: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 206d90: ret  */
  return;
L_206d94:;
  /* 206d94: adrp x8, #0x261000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 206d98: add x8, x8, #0x8c8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2248)));
  /* 206d9c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 206da0: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 206da4: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2125224));
  fn2_24b710(c);
  /* 206da8: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 206dac: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 206db0: cbz w8, #0x206d4c */
  if ((ARC_W_R(c, 8)) == 0) goto L_206d4c;
  /* 206db4: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 206db8: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 206dbc: ldr x21, [x8] */
  ARC_X_W(c, 21, arc_ld64(ARC_X_R(c, 8)));
  /* 206dc0: bl #0x2086f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2125252));
  fn2_2086f8(c);
  /* 206dc4: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 206dc8: adrp x1, #0x28000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(163840)));
  /* 206dcc: add x1, x1, #0xff7 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(4087)));
  /* 206dd0: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 206dd4: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 206dd8: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2125276));
  fn2_1b8fd4(c);
  /* 206ddc: mov w2, #0x7b1f */
  ARC_W_W(c, 2, UINT64_C(31519));
  /* 206de0: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 206de4: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 206de8: movk w2, #0x3c9c, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(1016856576)));
  /* 206dec: blr x21 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2125296));
  arc_dispatch(c, ARC_X_R(c, 21));
  /* 206df0: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 206df4: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 206df8: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2125308));
  fn2_1d2d24(c);
  /* 206dfc: adrp x0, #0x261000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 206e00: add x0, x0, #0x8c0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2240)));
  /* 206e04: str x20, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 20));
  }
  /* 206e08: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2125324));
  fn2_24b720(c);
  /* 206e0c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 206e10: b #0x206d4c */
  goto L_206d4c;
}

void fn2_2089b8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077988280));
  /* 2089b8: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 2089bc: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 2089c0: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 2089c4: ldr x8, [x2] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 2)));
  /* 2089c8: mov x0, x2 */
  ARC_X_W(c, 0, ARC_X_R(c, 2));
  /* 2089cc: mov x19, x2 */
  ARC_X_W(c, 19, ARC_X_R(c, 2));
  /* 2089d0: ldr x8, [x8, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(8))));
  /* 2089d4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2132440));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 2089d8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 2089dc: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* 2089e0: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 2089e4: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 2089e8: b #0x1b5ce8 */
  fn2_1b5ce8(c); return;
}

void fn2_20a34c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077994828));
  /* 20a34c: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 20a350: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 20a354: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 20a358: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 20a35c: adrp x8, #0x261000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 20a360: add x8, x8, #0xc08 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3080)));
  /* 20a364: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 20a368: tbz w8, #0, #0x20a3a8 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_20a3a8;
L_20a36c:;
  /* 20a36c: adrp x9, #0x258000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 20a370: adrp x8, #0x261000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 20a374: add x3, x29, #0x18 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 20a378: ldr x9, [x9, #0x980] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(2432))));
  /* 20a37c: ldr x8, [x8, #0xc00] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3072))));
  /* 20a380: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 20a384: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 20a388: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* 20a38c: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 20a390: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2139028));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 20a394: ldr d0, [x29, #0x18] */
  arc_du_w(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(24))));
  /* 20a398: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 20a39c: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 20a3a0: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 20a3a4: ret  */
  return;
L_20a3a8:;
  /* 20a3a8: adrp x8, #0x261000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 20a3ac: add x8, x8, #0xc08 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3080)));
  /* 20a3b0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 20a3b4: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 20a3b8: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2139068));
  fn2_24b710(c);
  /* 20a3bc: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 20a3c0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 20a3c4: cbz w8, #0x20a36c */
  if ((ARC_W_R(c, 8)) == 0) goto L_20a36c;
  /* 20a3c8: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 20a3cc: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 20a3d0: ldr x21, [x8] */
  ARC_X_W(c, 21, arc_ld64(ARC_X_R(c, 8)));
  /* 20a3d4: bl #0x20c8c4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2139096));
  fn2_20c8c4(c);
  /* 20a3d8: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 20a3dc: adrp x1, #0x1f000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(126976)));
  /* 20a3e0: add x1, x1, #0xeba */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3770)));
  /* 20a3e4: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 20a3e8: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 20a3ec: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2139120));
  fn2_1b8fd4(c);
  /* 20a3f0: mov w2, #0xe66e */
  ARC_W_W(c, 2, UINT64_C(58990));
  /* 20a3f4: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 20a3f8: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 20a3fc: movk w2, #0x67c0, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(1740636160)));
  /* 20a400: blr x21 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2139140));
  arc_dispatch(c, ARC_X_R(c, 21));
  /* 20a404: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 20a408: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 20a40c: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2139152));
  fn2_1d2d24(c);
  /* 20a410: adrp x0, #0x261000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 20a414: add x0, x0, #0xc00 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3072)));
  /* 20a418: str x20, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 20));
  }
  /* 20a41c: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2139168));
  fn2_24b720(c);
  /* 20a420: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 20a424: b #0x20a36c */
  goto L_20a36c;
}

void fn2_20c30c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078002956));
  /* 20c30c: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 20c310: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 20c314: str x21, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 21));
  /* 20c318: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 20c31c: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 20c320: adrp x8, #0x261000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 20c324: add x8, x8, #0xe08 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3592)));
  /* 20c328: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 20c32c: tbz w8, #0, #0x20c374 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_20c374;
L_20c330:;
  /* 20c330: adrp x9, #0x258000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 20c334: adrp x8, #0x261000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 20c338: add x2, sp, #8 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(8)));
  /* 20c33c: ldr x9, [x9, #0x980] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(2432))));
  /* 20c340: ldr x8, [x8, #0xe00] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3584))));
  /* 20c344: str x0, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 0));
  /* 20c348: add x3, x29, #0x18 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 20c34c: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 20c350: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* 20c354: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 20c358: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2147164));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 20c35c: ldr x0, [x29, #0x18] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(24))));
  /* 20c360: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 20c364: ldr x21, [sp, #0x20] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(32))));
  /* 20c368: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 20c36c: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 20c370: ret  */
  return;
L_20c374:;
  /* 20c374: adrp x8, #0x261000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 20c378: add x8, x8, #0xe08 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3592)));
  /* 20c37c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 20c380: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 20c384: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2147208));
  fn2_24b710(c);
  /* 20c388: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 20c38c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 20c390: cbz w8, #0x20c330 */
  if ((ARC_W_R(c, 8)) == 0) goto L_20c330;
  /* 20c394: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 20c398: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 20c39c: ldr x21, [x8] */
  ARC_X_W(c, 21, arc_ld64(ARC_X_R(c, 8)));
  /* 20c3a0: bl #0x20c8c4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2147236));
  fn2_20c8c4(c);
  /* 20c3a4: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 20c3a8: adrp x1, #0x22000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(139264)));
  /* 20c3ac: add x1, x1, #0xbf3 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3059)));
  /* 20c3b0: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 20c3b4: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 20c3b8: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2147260));
  fn2_1b8fd4(c);
  /* 20c3bc: mov w2, #0xd24d */
  ARC_W_W(c, 2, UINT64_C(53837));
  /* 20c3c0: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 20c3c4: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 20c3c8: movk w2, #0x1f40, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(524288000)));
  /* 20c3cc: blr x21 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2147280));
  arc_dispatch(c, ARC_X_R(c, 21));
  /* 20c3d0: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 20c3d4: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 20c3d8: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2147292));
  fn2_1d2d24(c);
  /* 20c3dc: adrp x0, #0x261000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 20c3e0: add x0, x0, #0xe00 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3584)));
  /* 20c3e4: str x20, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 20));
  }
  /* 20c3e8: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2147308));
  fn2_24b720(c);
  /* 20c3ec: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 20c3f0: b #0x20c330 */
  goto L_20c330;
}

void fn2_20e0ec(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078010604));
  /* 20e0ec: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 20e0f0: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 20e0f4: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 20e0f8: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 20e0fc: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 20e100: adrp x8, #0x261000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 20e104: add x8, x8, #0xfe8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(4072)));
  /* 20e108: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 20e10c: tbz w8, #0, #0x20e158 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_20e158;
L_20e110:;
  /* 20e110: adrp x10, #0x258000 */
  ARC_X_W(c, 10, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 20e114: adrp x8, #0x261000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 20e118: mov x2, sp */
  ARC_X_W(c, 2, (c)->sp);
  /* 20e11c: ldr x10, [x10, #0x980] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 10) + INT64_C(2432))));
  /* 20e120: ldr x8, [x8, #0xfe0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(4064))));
  /* 20e124: ldr x9, [x0, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 20e128: str x1, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 1));
  /* 20e12c: add x3, sp, #8 */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(8)));
  /* 20e130: ldr x10, [x10] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 10)));
  /* 20e134: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 20e138: mov x1, x9 */
  ARC_X_W(c, 1, ARC_X_R(c, 9));
  /* 20e13c: blr x10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2154816));
  arc_dispatch(c, ARC_X_R(c, 10));
  /* 20e140: ldr w0, [sp, #8] */
  ARC_W_W(c, 0, arc_ld32(((c)->sp + INT64_C(8))));
  /* 20e144: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 20e148: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 20e14c: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 20e150: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 20e154: ret  */
  return;
L_20e158:;
  /* 20e158: adrp x8, #0x261000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 20e15c: add x8, x8, #0xfe8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(4072)));
  /* 20e160: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 20e164: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 20e168: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 20e16c: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2154864));
  fn2_24b710(c);
  /* 20e170: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 20e174: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 20e178: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 20e17c: cbz w8, #0x20e110 */
  if ((ARC_W_R(c, 8)) == 0) goto L_20e110;
  /* 20e180: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 20e184: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 20e188: ldr x22, [x8] */
  ARC_X_W(c, 22, arc_ld64(ARC_X_R(c, 8)));
  /* 20e18c: bl #0x20e2e8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2154896));
  fn2_20e2e8(c);
  /* 20e190: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 20e194: adrp x1, #0x27000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(159744)));
  /* 20e198: add x1, x1, #0x69f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1695)));
  /* 20e19c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 20e1a0: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 20e1a4: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2154920));
  fn2_1b8fd4(c);
  /* 20e1a8: mov w2, #0x4f93 */
  ARC_W_W(c, 2, UINT64_C(20371));
  /* 20e1ac: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 20e1b0: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 20e1b4: movk w2, #0x2892, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(680656896)));
  /* 20e1b8: blr x22 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2154940));
  arc_dispatch(c, ARC_X_R(c, 22));
  /* 20e1bc: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 20e1c0: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 20e1c4: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2154952));
  fn2_1d2d24(c);
  /* 20e1c8: adrp x0, #0x261000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 20e1cc: add x0, x0, #0xfe0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(4064)));
  /* 20e1d0: str x21, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 21));
  }
  /* 20e1d4: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2154968));
  fn2_24b720(c);
  /* 20e1d8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 20e1dc: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 20e1e0: b #0x20e110 */
  goto L_20e110;
}

void fn2_20fbe0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078017504));
  /* 20fbe0: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 20fbe4: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 20fbe8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 20fbec: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 20fbf0: ldr x0, [x0, #8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* 20fbf4: adrp x8, #0x250000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2424832)));
  /* 20fbf8: add x8, x8, #0x5e0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1504)));
  /* 20fbfc: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* 20fc00: cbz x0, #0x20fc30 */
  if ((ARC_X_R(c, 0)) == 0) goto L_20fc30;
L_20fc04:;
  /* 20fc04: ldr x1, [x0] */
  ARC_X_W(c, 1, arc_ld64(ARC_X_R(c, 0)));
  /* 20fc08: cbz x1, #0x20fc20 */
  if ((ARC_X_R(c, 1)) == 0) goto L_20fc20;
  /* 20fc0c: bl #0xaeb74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2161680));
  fn2_aeb74(c);
  /* 20fc10: ldr x0, [x19, #8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* 20fc14: ldr w8, [x0, #0x10] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 0) + INT64_C(16))));
  /* 20fc18: cbnz w8, #0x20fc04 */
  if ((ARC_W_R(c, 8)) != 0) goto L_20fc04;
  /* 20fc1c: b #0x20fc28 */
  goto L_20fc28;
L_20fc20:;
  /* 20fc20: ldr w8, [x0, #0x10] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 0) + INT64_C(16))));
  /* 20fc24: cbnz w8, #0x20fc40 */
  if ((ARC_W_R(c, 8)) != 0) goto L_20fc40;
L_20fc28:;
  /* 20fc28: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* 20fc2c: bl #0x1b5ce8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2161712));
  fn2_1b5ce8(c);
L_20fc30:;
  /* 20fc30: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 20fc34: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 20fc38: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 20fc3c: b #0x24b730 */
  fn2_24b730(c); return;
L_20fc40:;
  /* 20fc40: adrp x0, #0x29000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(167936)));
  /* 20fc44: add x0, x0, #0x23f */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(575)));
  /* 20fc48: adrp x1, #0x1b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(110592)));
  /* 20fc4c: add x1, x1, #0x30a */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(778)));
  /* 20fc50: adrp x3, #0x2e000 */
  ARC_X_W(c, 3, (arc_image_bases[2] + UINT64_C(188416)));
  /* 20fc54: add x3, x3, #0xbb4 */
  ARC_X_W(c, 3, (ARC_X_R(c, 3) + UINT64_C(2996)));
  /* 20fc58: mov w2, #0x317 */
  ARC_W_W(c, 2, UINT64_C(791));
  /* 20fc5c: mov w4, wzr */
  ARC_W_W(c, 4, ARC_W_R(c, 31));
  /* 20fc60: mov w5, wzr */
  ARC_W_W(c, 5, ARC_W_R(c, 31));
  /* 20fc64: bl #0x1b54b0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2161768));
  fn2_1b54b0(c);
  /* 20fc68: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 20fc6c: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 20fc70: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 20fc74: b #0x24b730 */
  fn2_24b730(c); return;
}

void fn2_211974(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078025076));
  /* 211974: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 211978: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 21197c: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 211980: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 211984: adrp x8, #0x262000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 211988: add x8, x8, #0x2f8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(760)));
  /* 21198c: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 211990: tbz w8, #0, #0x2119d0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_2119d0;
L_211994:;
  /* 211994: adrp x9, #0x258000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 211998: adrp x8, #0x262000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 21199c: add x3, x29, #0x18 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 2119a0: ldr x9, [x9, #0x980] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(2432))));
  /* 2119a4: ldr x8, [x8, #0x2f0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(752))));
  /* 2119a8: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 2119ac: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 2119b0: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* 2119b4: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 2119b8: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2169276));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 2119bc: ldr w0, [x29, #0x18] */
  ARC_W_W(c, 0, arc_ld32((ARC_X_R(c, 29) + INT64_C(24))));
  /* 2119c0: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 2119c4: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 2119c8: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 2119cc: ret  */
  return;
L_2119d0:;
  /* 2119d0: adrp x8, #0x262000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 2119d4: add x8, x8, #0x2f8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(760)));
  /* 2119d8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 2119dc: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 2119e0: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2169316));
  fn2_24b710(c);
  /* 2119e4: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 2119e8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 2119ec: cbz w8, #0x211994 */
  if ((ARC_W_R(c, 8)) == 0) goto L_211994;
  /* 2119f0: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 2119f4: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 2119f8: ldr x21, [x8] */
  ARC_X_W(c, 21, arc_ld64(ARC_X_R(c, 8)));
  /* 2119fc: bl #0x21234c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2169344));
  fn2_21234c(c);
  /* 211a00: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 211a04: adrp x1, #0x22000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(139264)));
  /* 211a08: add x1, x1, #0xc08 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3080)));
  /* 211a0c: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 211a10: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 211a14: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2169368));
  fn2_1b8fd4(c);
  /* 211a18: mov w2, #0x525a */
  ARC_W_W(c, 2, UINT64_C(21082));
  /* 211a1c: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 211a20: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 211a24: movk w2, #0xe8c5, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(3905224704)));
  /* 211a28: blr x21 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2169388));
  arc_dispatch(c, ARC_X_R(c, 21));
  /* 211a2c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 211a30: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 211a34: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2169400));
  fn2_1d2d24(c);
  /* 211a38: adrp x0, #0x262000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 211a3c: add x0, x0, #0x2f0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(752)));
  /* 211a40: str x20, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 20));
  }
  /* 211a44: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2169416));
  fn2_24b720(c);
  /* 211a48: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 211a4c: b #0x211994 */
  goto L_211994;
}

void fn2_212464(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078027876));
  /* 212464: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 212468: ret  */
  return;
}

void fn2_2141c4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078035396));
  /* 2141c4: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 2141c8: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 2141cc: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 2141d0: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 2141d4: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 2141d8: adrp x8, #0x262000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 2141dc: add x8, x8, #0x5a8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1448)));
  /* 2141e0: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 2141e4: tbz w8, #0, #0x214238 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_214238;
L_2141e8:;
  /* 2141e8: adrp x10, #0x258000 */
  ARC_X_W(c, 10, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 2141ec: adrp x8, #0x262000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 2141f0: mov x2, sp */
  ARC_X_W(c, 2, (c)->sp);
  /* 2141f4: ldr x10, [x10, #0x980] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 10) + INT64_C(2432))));
  /* 2141f8: ldr x8, [x8, #0x5a0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(1440))));
  /* 2141fc: ldr x9, [x0, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 214200: str x1, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 1));
  /* 214204: add x3, sp, #8 */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(8)));
  /* 214208: ldr x10, [x10] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 10)));
  /* 21420c: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 214210: mov x1, x9 */
  ARC_X_W(c, 1, ARC_X_R(c, 9));
  /* 214214: blr x10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2179608));
  arc_dispatch(c, ARC_X_R(c, 10));
  /* 214218: ldrb w8, [sp, #8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(8))));
  /* 21421c: cmp x8, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(0));
  /* 214220: cset w0, ne */
  ARC_W_W(c, 0, (ARC_COND(c, 1) ? 1 : 0));
  /* 214224: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 214228: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 21422c: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 214230: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 214234: ret  */
  return;
L_214238:;
  /* 214238: adrp x8, #0x262000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 21423c: add x8, x8, #0x5a8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1448)));
  /* 214240: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 214244: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 214248: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 21424c: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2179664));
  fn2_24b710(c);
  /* 214250: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 214254: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 214258: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 21425c: cbz w8, #0x2141e8 */
  if ((ARC_W_R(c, 8)) == 0) goto L_2141e8;
  /* 214260: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 214264: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 214268: ldr x22, [x8] */
  ARC_X_W(c, 22, arc_ld64(ARC_X_R(c, 8)));
  /* 21426c: bl #0x219a98 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2179696));
  fn2_219a98(c);
  /* 214270: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 214274: adrp x1, #0x2e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(188416)));
  /* 214278: add x1, x1, #0x9ee */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2542)));
  /* 21427c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 214280: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 214284: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2179720));
  fn2_1b8fd4(c);
  /* 214288: mov w2, #0xecb5 */
  ARC_W_W(c, 2, UINT64_C(60597));
  /* 21428c: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 214290: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 214294: movk w2, #0x9c26, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(2619736064)));
  /* 214298: blr x22 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2179740));
  arc_dispatch(c, ARC_X_R(c, 22));
  /* 21429c: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 2142a0: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 2142a4: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2179752));
  fn2_1d2d24(c);
  /* 2142a8: adrp x0, #0x262000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 2142ac: add x0, x0, #0x5a0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1440)));
  /* 2142b0: str x21, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 21));
  }
  /* 2142b4: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2179768));
  fn2_24b720(c);
  /* 2142b8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 2142bc: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 2142c0: b #0x2141e8 */
  goto L_2141e8;
}

void fn2_216008(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078043144));
  /* 216008: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 21600c: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 216010: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 216014: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 216018: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 21601c: adrp x8, #0x262000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 216020: add x8, x8, #0x7a8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1960)));
  /* 216024: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 216028: tbz w8, #0, #0x216074 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_216074;
L_21602c:;
  /* 21602c: adrp x10, #0x258000 */
  ARC_X_W(c, 10, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 216030: adrp x9, #0x262000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 216034: mov w11, w1 */
  ARC_W_W(c, 11, ARC_W_R(c, 1));
  /* 216038: ldr x10, [x10, #0x980] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 10) + INT64_C(2432))));
  /* 21603c: ldr x8, [x9, #0x7a0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(1952))));
  /* 216040: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 216044: mov x9, sp */
  ARC_X_W(c, 9, (c)->sp);
  /* 216048: add x2, sp, #8 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(8)));
  /* 21604c: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* 216050: ldr x10, [x10] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 10)));
  /* 216054: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 216058: stp x11, x9, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 11));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 21605c: blr x10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2187360));
  arc_dispatch(c, ARC_X_R(c, 10));
  /* 216060: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 216064: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 216068: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 21606c: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 216070: ret  */
  return;
L_216074:;
  /* 216074: adrp x8, #0x262000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 216078: add x8, x8, #0x7a8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1960)));
  /* 21607c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 216080: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 216084: mov w20, w1 */
  ARC_W_W(c, 20, ARC_W_R(c, 1));
  /* 216088: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2187404));
  fn2_24b710(c);
  /* 21608c: mov w1, w20 */
  ARC_W_W(c, 1, ARC_W_R(c, 20));
  /* 216090: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 216094: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 216098: cbz w8, #0x21602c */
  if ((ARC_W_R(c, 8)) == 0) goto L_21602c;
  /* 21609c: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 2160a0: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 2160a4: ldr x22, [x8] */
  ARC_X_W(c, 22, arc_ld64(ARC_X_R(c, 8)));
  /* 2160a8: bl #0x219a98 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2187436));
  fn2_219a98(c);
  /* 2160ac: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 2160b0: adrp x1, #0x2b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(176128)));
  /* 2160b4: add x1, x1, #0x1ed */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(493)));
  /* 2160b8: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 2160bc: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 2160c0: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2187460));
  fn2_1b8fd4(c);
  /* 2160c4: mov w2, #0xdcf6 */
  ARC_W_W(c, 2, UINT64_C(56566));
  /* 2160c8: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 2160cc: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 2160d0: movk w2, #0x6dbf, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(1841233920)));
  /* 2160d4: blr x22 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2187480));
  arc_dispatch(c, ARC_X_R(c, 22));
  /* 2160d8: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 2160dc: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 2160e0: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2187492));
  fn2_1d2d24(c);
  /* 2160e4: adrp x0, #0x262000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 2160e8: add x0, x0, #0x7a0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1952)));
  /* 2160ec: str x21, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 21));
  }
  /* 2160f0: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2187508));
  fn2_24b720(c);
  /* 2160f4: mov w1, w20 */
  ARC_W_W(c, 1, ARC_W_R(c, 20));
  /* 2160f8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 2160fc: b #0x21602c */
  goto L_21602c;
}

void fn2_217d78(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078050680));
  /* 217d78: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 217d7c: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 217d80: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 217d84: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 217d88: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 217d8c: adrp x8, #0x262000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 217d90: add x8, x8, #0x9a8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2472)));
  /* 217d94: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 217d98: tbz w8, #0, #0x217de8 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_217de8;
L_217d9c:;
  /* 217d9c: adrp x10, #0x258000 */
  ARC_X_W(c, 10, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 217da0: and w8, w1, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 1) & UINT64_C(1)));
  /* 217da4: adrp x9, #0x262000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 217da8: ldr x10, [x10, #0x980] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 10) + INT64_C(2432))));
  /* 217dac: strb w8, [sp, #4] */
  arc_st8(((c)->sp + INT64_C(4)), ARC_W_R(c, 8));
  /* 217db0: ldr x8, [x9, #0x9a0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(2464))));
  /* 217db4: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 217db8: add x9, sp, #4 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(4)));
  /* 217dbc: add x2, sp, #8 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(8)));
  /* 217dc0: ldr x10, [x10] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 10)));
  /* 217dc4: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 217dc8: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* 217dcc: str x9, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 9));
  /* 217dd0: blr x10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2194900));
  arc_dispatch(c, ARC_X_R(c, 10));
  /* 217dd4: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 217dd8: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 217ddc: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 217de0: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 217de4: ret  */
  return;
L_217de8:;
  /* 217de8: adrp x8, #0x262000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 217dec: add x8, x8, #0x9a8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2472)));
  /* 217df0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 217df4: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 217df8: mov w20, w1 */
  ARC_W_W(c, 20, ARC_W_R(c, 1));
  /* 217dfc: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2194944));
  fn2_24b710(c);
  /* 217e00: mov w1, w20 */
  ARC_W_W(c, 1, ARC_W_R(c, 20));
  /* 217e04: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 217e08: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 217e0c: cbz w8, #0x217d9c */
  if ((ARC_W_R(c, 8)) == 0) goto L_217d9c;
  /* 217e10: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 217e14: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 217e18: ldr x22, [x8] */
  ARC_X_W(c, 22, arc_ld64(ARC_X_R(c, 8)));
  /* 217e1c: bl #0x219a98 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2194976));
  fn2_219a98(c);
  /* 217e20: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 217e24: adrp x1, #0x2f000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(192512)));
  /* 217e28: add x1, x1, #0x385 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(901)));
  /* 217e2c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 217e30: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 217e34: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2195000));
  fn2_1b8fd4(c);
  /* 217e38: mov w2, #0x76c2 */
  ARC_W_W(c, 2, UINT64_C(30402));
  /* 217e3c: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 217e40: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 217e44: movk w2, #0x9a29, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(2586378240)));
  /* 217e48: blr x22 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2195020));
  arc_dispatch(c, ARC_X_R(c, 22));
  /* 217e4c: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 217e50: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 217e54: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2195032));
  fn2_1d2d24(c);
  /* 217e58: adrp x0, #0x262000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 217e5c: add x0, x0, #0x9a0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2464)));
  /* 217e60: str x21, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 21));
  }
  /* 217e64: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2195048));
  fn2_24b720(c);
  /* 217e68: mov w1, w20 */
  ARC_W_W(c, 1, ARC_W_R(c, 20));
  /* 217e6c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 217e70: b #0x217d9c */
  goto L_217d9c;
}

void fn2_2199d0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078057936));
  /* 2199d0: ret  */
  return;
}

void fn2_21a7b0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078061488));
  /* 21a7b0: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 21a7b4: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 21a7b8: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 21a7bc: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 21a7c0: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 21a7c4: adrp x9, #0x262000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 21a7c8: add x9, x9, #0xbb0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(2992)));
  /* 21a7cc: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* 21a7d0: ldarb w9, [x9] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 9)));
  /* 21a7d4: tbz w9, #0, #0x21a834 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_21a834;
L_21a7d8:;
  /* 21a7d8: adrp x8, #0x262000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 21a7dc: ldr x21, [x0, #0x10] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 21a7e0: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 21a7e4: ldr x20, [x8, #0xba8] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 8) + INT64_C(2984))));
  /* 21a7e8: bl #0x1e457c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2205676));
  fn2_1e457c(c);
  /* 21a7ec: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 21a7f0: mov x3, sp */
  ARC_X_W(c, 3, (c)->sp);
  /* 21a7f4: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 21a7f8: ldr x8, [x8, #0x980] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2432))));
  /* 21a7fc: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 21a800: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 21a804: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 21a808: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2205708));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 21a80c: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 21a810: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 21a814: bl #0x1e4590 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2205720));
  fn2_1e4590(c);
  /* 21a818: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 21a81c: bl #0x1e46f4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2205728));
  fn2_1e46f4(c);
  /* 21a820: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 21a824: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 21a828: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 21a82c: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 21a830: ret  */
  return;
L_21a834:;
  /* 21a834: adrp x8, #0x262000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 21a838: add x8, x8, #0xbb0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2992)));
  /* 21a83c: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 21a840: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 21a844: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2205768));
  fn2_24b710(c);
  /* 21a848: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 21a84c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 21a850: cbz w8, #0x21a7d8 */
  if ((ARC_W_R(c, 8)) == 0) goto L_21a7d8;
  /* 21a854: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 21a858: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 21a85c: ldr x22, [x8] */
  ARC_X_W(c, 22, arc_ld64(ARC_X_R(c, 8)));
  /* 21a860: bl #0x21f8e0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2205796));
  fn2_21f8e0(c);
  /* 21a864: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 21a868: adrp x1, #0x26000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(155648)));
  /* 21a86c: add x1, x1, #0x4f9 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1273)));
  /* 21a870: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 21a874: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 21a878: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2205820));
  fn2_1b8fd4(c);
  /* 21a87c: mov w2, #0xb40f */
  ARC_W_W(c, 2, UINT64_C(46095));
  /* 21a880: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 21a884: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 21a888: movk w2, #0xb1bc, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(2981888000)));
  /* 21a88c: blr x22 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2205840));
  arc_dispatch(c, ARC_X_R(c, 22));
  /* 21a890: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 21a894: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 21a898: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2205852));
  fn2_1d2d24(c);
  /* 21a89c: adrp x0, #0x262000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 21a8a0: add x0, x0, #0xba8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2984)));
  /* 21a8a4: str x20, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 20));
  }
  /* 21a8a8: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2205868));
  fn2_24b720(c);
  /* 21a8ac: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 21a8b0: b #0x21a7d8 */
  goto L_21a7d8;
}

void fn2_21c86c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078069868));
  /* 21c86c: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 21c870: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 21c874: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 21c878: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 21c87c: adrp x8, #0x262000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 21c880: add x8, x8, #0xdb0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3504)));
  /* 21c884: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 21c888: tbz w8, #0, #0x21c8c8 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_21c8c8;
L_21c88c:;
  /* 21c88c: adrp x9, #0x258000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 21c890: adrp x8, #0x262000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 21c894: add x3, x29, #0x18 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 21c898: ldr x9, [x9, #0x980] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(2432))));
  /* 21c89c: ldr x8, [x8, #0xda8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3496))));
  /* 21c8a0: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 21c8a4: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 21c8a8: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* 21c8ac: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 21c8b0: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2214068));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 21c8b4: ldr w0, [x29, #0x18] */
  ARC_W_W(c, 0, arc_ld32((ARC_X_R(c, 29) + INT64_C(24))));
  /* 21c8b8: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 21c8bc: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 21c8c0: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 21c8c4: ret  */
  return;
L_21c8c8:;
  /* 21c8c8: adrp x8, #0x262000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 21c8cc: add x8, x8, #0xdb0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3504)));
  /* 21c8d0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 21c8d4: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 21c8d8: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2214108));
  fn2_24b710(c);
  /* 21c8dc: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 21c8e0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 21c8e4: cbz w8, #0x21c88c */
  if ((ARC_W_R(c, 8)) == 0) goto L_21c88c;
  /* 21c8e8: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 21c8ec: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 21c8f0: ldr x21, [x8] */
  ARC_X_W(c, 21, arc_ld64(ARC_X_R(c, 8)));
  /* 21c8f4: bl #0x21f8e0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2214136));
  fn2_21f8e0(c);
  /* 21c8f8: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 21c8fc: adrp x1, #0x26000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(155648)));
  /* 21c900: add x1, x1, #0xe4a */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3658)));
  /* 21c904: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 21c908: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 21c90c: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2214160));
  fn2_1b8fd4(c);
  /* 21c910: mov w2, #0x525a */
  ARC_W_W(c, 2, UINT64_C(21082));
  /* 21c914: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 21c918: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 21c91c: movk w2, #0xe8c5, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(3905224704)));
  /* 21c920: blr x21 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2214180));
  arc_dispatch(c, ARC_X_R(c, 21));
  /* 21c924: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 21c928: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 21c92c: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2214192));
  fn2_1d2d24(c);
  /* 21c930: adrp x0, #0x262000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 21c934: add x0, x0, #0xda8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3496)));
  /* 21c938: str x20, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 20));
  }
  /* 21c93c: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2214208));
  fn2_24b720(c);
  /* 21c940: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 21c944: b #0x21c88c */
  goto L_21c88c;
}

void fn2_21e818(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078077976));
  /* 21e818: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 21e81c: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 21e820: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 21e824: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 21e828: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 21e82c: adrp x9, #0x262000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 21e830: add x9, x9, #0xfb0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(4016)));
  /* 21e834: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* 21e838: ldarb w9, [x9] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 9)));
  /* 21e83c: tbz w9, #0, #0x21e89c */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_21e89c;
L_21e840:;
  /* 21e840: adrp x8, #0x262000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 21e844: ldr x21, [x0, #0x10] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 21e848: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 21e84c: ldr x20, [x8, #0xfa8] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 8) + INT64_C(4008))));
  /* 21e850: bl #0x1ccc74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2222164));
  fn2_1ccc74(c);
  /* 21e854: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 21e858: add x3, sp, #8 */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(8)));
  /* 21e85c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 21e860: ldr x8, [x8, #0x980] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2432))));
  /* 21e864: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 21e868: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 21e86c: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 21e870: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2222196));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 21e874: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 21e878: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 21e87c: bl #0x1ccc88 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2222208));
  fn2_1ccc88(c);
  /* 21e880: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 21e884: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2222216));
  fn2_1ccd9c(c);
  /* 21e888: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 21e88c: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 21e890: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 21e894: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 21e898: ret  */
  return;
L_21e89c:;
  /* 21e89c: adrp x8, #0x262000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 21e8a0: add x8, x8, #0xfb0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(4016)));
  /* 21e8a4: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 21e8a8: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 21e8ac: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2222256));
  fn2_24b710(c);
  /* 21e8b0: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 21e8b4: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 21e8b8: cbz w8, #0x21e840 */
  if ((ARC_W_R(c, 8)) == 0) goto L_21e840;
  /* 21e8bc: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 21e8c0: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 21e8c4: ldr x22, [x8] */
  ARC_X_W(c, 22, arc_ld64(ARC_X_R(c, 8)));
  /* 21e8c8: bl #0x21f8e0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2222284));
  fn2_21f8e0(c);
  /* 21e8cc: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 21e8d0: adrp x1, #0x25000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(151552)));
  /* 21e8d4: add x1, x1, #0xae0 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2784)));
  /* 21e8d8: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 21e8dc: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 21e8e0: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2222308));
  fn2_1b8fd4(c);
  /* 21e8e4: mov w2, #0x3dd0 */
  ARC_W_W(c, 2, UINT64_C(15824));
  /* 21e8e8: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 21e8ec: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 21e8f0: movk w2, #0xc05, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(201654272)));
  /* 21e8f4: blr x22 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2222328));
  arc_dispatch(c, ARC_X_R(c, 22));
  /* 21e8f8: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 21e8fc: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 21e900: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2222340));
  fn2_1d2d24(c);
  /* 21e904: adrp x0, #0x262000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 21e908: add x0, x0, #0xfa8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(4008)));
  /* 21e90c: str x20, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 20));
  }
  /* 21e910: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2222356));
  fn2_24b720(c);
  /* 21e914: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 21e918: b #0x21e840 */
  goto L_21e840;
}

void fn2_220168(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078084456));
  /* 220168: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 22016c: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 220170: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 220174: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 220178: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 22017c: adrp x9, #0x263000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 220180: add x9, x9, #0x130 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(304)));
  /* 220184: ldarb w9, [x9] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 9)));
  /* 220188: tbz w9, #0, #0x2201b4 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_2201b4;
L_22018c:;
  /* 22018c: adrp x9, #0x263000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 220190: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 220194: ldr x9, [x9, #0x128] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(296))));
  /* 220198: mov x0, x9 */
  ARC_X_W(c, 0, ARC_X_R(c, 9));
  /* 22019c: bl #0x2029d0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2228640));
  fn2_2029d0(c);
  /* 2201a0: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 2201a4: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 2201a8: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 2201ac: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 2201b0: ret  */
  return;
L_2201b4:;
  /* 2201b4: adrp x9, #0x263000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 2201b8: add x9, x9, #0x130 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(304)));
  /* 2201bc: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 2201c0: mov x0, x9 */
  ARC_X_W(c, 0, ARC_X_R(c, 9));
  /* 2201c4: mov x20, x8 */
  ARC_X_W(c, 20, ARC_X_R(c, 8));
  /* 2201c8: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2228684));
  fn2_24b710(c);
  /* 2201cc: mov x8, x20 */
  ARC_X_W(c, 8, ARC_X_R(c, 20));
  /* 2201d0: mov w9, w0 */
  ARC_W_W(c, 9, ARC_W_R(c, 0));
  /* 2201d4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 2201d8: cbz w9, #0x22018c */
  if ((ARC_W_R(c, 9)) == 0) goto L_22018c;
  /* 2201dc: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 2201e0: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 2201e4: ldr x22, [x8] */
  ARC_X_W(c, 22, arc_ld64(ARC_X_R(c, 8)));
  /* 2201e8: bl #0x222b84 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2228716));
  fn2_222b84(c);
  /* 2201ec: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 2201f0: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* 2201f4: add x1, x1, #0xa29 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2601)));
  /* 2201f8: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 2201fc: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 220200: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2228740));
  fn2_1b8fd4(c);
  /* 220204: mov w2, #0x1d98 */
  ARC_W_W(c, 2, UINT64_C(7576));
  /* 220208: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 22020c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 220210: movk w2, #0xee2d, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(3995926528)));
  /* 220214: blr x22 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2228760));
  arc_dispatch(c, ARC_X_R(c, 22));
  /* 220218: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 22021c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 220220: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2228772));
  fn2_1d2d24(c);
  /* 220224: adrp x0, #0x263000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 220228: add x0, x0, #0x128 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(296)));
  /* 22022c: str x21, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 21));
  }
  /* 220230: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2228788));
  fn2_24b720(c);
  /* 220234: mov x8, x20 */
  ARC_X_W(c, 8, ARC_X_R(c, 20));
  /* 220238: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 22023c: b #0x22018c */
  goto L_22018c;
}

void fn2_2220e0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078092512));
  /* 2220e0: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 2220e4: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 2220e8: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 2220ec: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 2220f0: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 2220f4: adrp x8, #0x263000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 2220f8: add x8, x8, #0x330 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(816)));
  /* 2220fc: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 222100: tbz w8, #0, #0x222150 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_222150;
L_222104:;
  /* 222104: adrp x10, #0x258000 */
  ARC_X_W(c, 10, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 222108: and w8, w1, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 1) & UINT64_C(1)));
  /* 22210c: adrp x9, #0x263000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 222110: ldr x10, [x10, #0x980] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 10) + INT64_C(2432))));
  /* 222114: strb w8, [sp, #4] */
  arc_st8(((c)->sp + INT64_C(4)), ARC_W_R(c, 8));
  /* 222118: ldr x8, [x9, #0x328] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(808))));
  /* 22211c: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 222120: add x9, sp, #4 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(4)));
  /* 222124: add x2, sp, #8 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(8)));
  /* 222128: ldr x10, [x10] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 10)));
  /* 22212c: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 222130: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* 222134: str x9, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 9));
  /* 222138: blr x10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2236732));
  arc_dispatch(c, ARC_X_R(c, 10));
  /* 22213c: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 222140: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 222144: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 222148: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 22214c: ret  */
  return;
L_222150:;
  /* 222150: adrp x8, #0x263000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 222154: add x8, x8, #0x330 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(816)));
  /* 222158: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 22215c: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 222160: mov w20, w1 */
  ARC_W_W(c, 20, ARC_W_R(c, 1));
  /* 222164: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2236776));
  fn2_24b710(c);
  /* 222168: mov w1, w20 */
  ARC_W_W(c, 1, ARC_W_R(c, 20));
  /* 22216c: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 222170: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 222174: cbz w8, #0x222104 */
  if ((ARC_W_R(c, 8)) == 0) goto L_222104;
  /* 222178: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 22217c: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 222180: ldr x22, [x8] */
  ARC_X_W(c, 22, arc_ld64(ARC_X_R(c, 8)));
  /* 222184: bl #0x222b84 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2236808));
  fn2_222b84(c);
  /* 222188: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 22218c: adrp x1, #0x1a000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(106496)));
  /* 222190: add x1, x1, #0x6cc */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1740)));
  /* 222194: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 222198: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 22219c: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2236832));
  fn2_1b8fd4(c);
  /* 2221a0: mov w2, #0x76c2 */
  ARC_W_W(c, 2, UINT64_C(30402));
  /* 2221a4: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 2221a8: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 2221ac: movk w2, #0x9a29, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(2586378240)));
  /* 2221b0: blr x22 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2236852));
  arc_dispatch(c, ARC_X_R(c, 22));
  /* 2221b4: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 2221b8: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 2221bc: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2236864));
  fn2_1d2d24(c);
  /* 2221c0: adrp x0, #0x263000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 2221c4: add x0, x0, #0x328 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(808)));
  /* 2221c8: str x21, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 21));
  }
  /* 2221cc: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2236880));
  fn2_24b720(c);
  /* 2221d0: mov w1, w20 */
  ARC_W_W(c, 1, ARC_W_R(c, 20));
  /* 2221d4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 2221d8: b #0x222104 */
  goto L_222104;
}

void fn2_223ed8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078100184));
  /* 223ed8: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 223edc: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 223ee0: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 223ee4: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 223ee8: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 223eec: adrp x8, #0x263000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 223ef0: add x8, x8, #0x500 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1280)));
  /* 223ef4: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 223ef8: tbz w8, #0, #0x223f48 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_223f48;
L_223efc:;
  /* 223efc: adrp x10, #0x258000 */
  ARC_X_W(c, 10, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 223f00: and w8, w1, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 1) & UINT64_C(1)));
  /* 223f04: adrp x9, #0x263000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 223f08: ldr x10, [x10, #0x980] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 10) + INT64_C(2432))));
  /* 223f0c: strb w8, [sp, #4] */
  arc_st8(((c)->sp + INT64_C(4)), ARC_W_R(c, 8));
  /* 223f10: ldr x8, [x9, #0x4f8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(1272))));
  /* 223f14: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 223f18: add x9, sp, #4 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(4)));
  /* 223f1c: add x2, sp, #8 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(8)));
  /* 223f20: ldr x10, [x10] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 10)));
  /* 223f24: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 223f28: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* 223f2c: str x9, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 9));
  /* 223f30: blr x10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2244404));
  arc_dispatch(c, ARC_X_R(c, 10));
  /* 223f34: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 223f38: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 223f3c: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 223f40: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 223f44: ret  */
  return;
L_223f48:;
  /* 223f48: adrp x8, #0x263000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 223f4c: add x8, x8, #0x500 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1280)));
  /* 223f50: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 223f54: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 223f58: mov w20, w1 */
  ARC_W_W(c, 20, ARC_W_R(c, 1));
  /* 223f5c: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2244448));
  fn2_24b710(c);
  /* 223f60: mov w1, w20 */
  ARC_W_W(c, 1, ARC_W_R(c, 20));
  /* 223f64: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 223f68: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 223f6c: cbz w8, #0x223efc */
  if ((ARC_W_R(c, 8)) == 0) goto L_223efc;
  /* 223f70: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 223f74: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 223f78: ldr x22, [x8] */
  ARC_X_W(c, 22, arc_ld64(ARC_X_R(c, 8)));
  /* 223f7c: bl #0x2241ec */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2244480));
  fn2_2241ec(c);
  /* 223f80: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 223f84: adrp x1, #0x22000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(139264)));
  /* 223f88: add x1, x1, #0x96 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(150)));
  /* 223f8c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 223f90: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 223f94: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2244504));
  fn2_1b8fd4(c);
  /* 223f98: mov w2, #0x76c2 */
  ARC_W_W(c, 2, UINT64_C(30402));
  /* 223f9c: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 223fa0: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 223fa4: movk w2, #0x9a29, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(2586378240)));
  /* 223fa8: blr x22 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2244524));
  arc_dispatch(c, ARC_X_R(c, 22));
  /* 223fac: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 223fb0: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 223fb4: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2244536));
  fn2_1d2d24(c);
  /* 223fb8: adrp x0, #0x263000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 223fbc: add x0, x0, #0x4f8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1272)));
  /* 223fc0: str x21, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 21));
  }
  /* 223fc4: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2244552));
  fn2_24b720(c);
  /* 223fc8: mov w1, w20 */
  ARC_W_W(c, 1, ARC_W_R(c, 20));
  /* 223fcc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 223fd0: b #0x223efc */
  goto L_223efc;
}

void fn2_225d10(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078107920));
  /* 225d10: sub sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(96)));
  /* 225d14: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 225d18: str x23, [sp, #0x30] */
  arc_st64(((c)->sp + INT64_C(48)), ARC_X_R(c, 23));
  /* 225d1c: stp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 225d20: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 225d24: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 225d28: adrp x9, #0x263000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 225d2c: add x9, x9, #0x6a8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(1704)));
  /* 225d30: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* 225d34: ldarb w9, [x9] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 9)));
  /* 225d38: tbz w9, #0, #0x225da0 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_225da0;
L_225d3c:;
  /* 225d3c: adrp x10, #0x258000 */
  ARC_X_W(c, 10, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 225d40: and w8, w1, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 1) & UINT64_C(1)));
  /* 225d44: adrp x9, #0x263000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 225d48: ldr x10, [x10, #0x980] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 10) + INT64_C(2432))));
  /* 225d4c: strb w8, [sp, #0xc] */
  arc_st8(((c)->sp + INT64_C(12)), ARC_W_R(c, 8));
  /* 225d50: ldr x8, [x9, #0x6a0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(1696))));
  /* 225d54: add x9, sp, #0xc */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(12)));
  /* 225d58: add x2, sp, #0x10 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(16)));
  /* 225d5c: add x3, x29, #0x18 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 225d60: ldr x10, [x10] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 10)));
  /* 225d64: stp x0, x9, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 0));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 225d68: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 225d6c: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 225d70: str xzr, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 31));
  /* 225d74: blr x10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2252152));
  arc_dispatch(c, ARC_X_R(c, 10));
  /* 225d78: ldr x0, [x29, #0x18] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(24))));
  /* 225d7c: cbz x0, #0x225d84 */
  if ((ARC_X_R(c, 0)) == 0) goto L_225d84;
  /* 225d80: bl #0x1b62dc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2252164));
  fn2_1b62dc(c);
L_225d84:;
  /* 225d84: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* 225d88: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 225d8c: ldr x23, [sp, #0x30] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(48))));
  /* 225d90: ldp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 225d94: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 225d98: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* 225d9c: ret  */
  return;
L_225da0:;
  /* 225da0: adrp x8, #0x263000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 225da4: add x8, x8, #0x6a8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1704)));
  /* 225da8: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 225dac: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 225db0: mov w21, w1 */
  ARC_W_W(c, 21, ARC_W_R(c, 1));
  /* 225db4: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2252216));
  fn2_24b710(c);
  /* 225db8: mov w1, w21 */
  ARC_W_W(c, 1, ARC_W_R(c, 21));
  /* 225dbc: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 225dc0: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 225dc4: cbz w8, #0x225d3c */
  if ((ARC_W_R(c, 8)) == 0) goto L_225d3c;
  /* 225dc8: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 225dcc: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 225dd0: ldr x23, [x8] */
  ARC_X_W(c, 23, arc_ld64(ARC_X_R(c, 8)));
  /* 225dd4: bl #0x2267e0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2252248));
  fn2_2267e0(c);
  /* 225dd8: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 225ddc: adrp x1, #0x2c000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(180224)));
  /* 225de0: add x1, x1, #0xca5 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3237)));
  /* 225de4: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 225de8: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 225dec: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2252272));
  fn2_1b8fd4(c);
  /* 225df0: mov w2, #0x4bda */
  ARC_W_W(c, 2, UINT64_C(19418));
  /* 225df4: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* 225df8: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 225dfc: movk w2, #0xfd44, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(4249092096)));
  /* 225e00: blr x23 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2252292));
  arc_dispatch(c, ARC_X_R(c, 23));
  /* 225e04: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 225e08: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 225e0c: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2252304));
  fn2_1d2d24(c);
  /* 225e10: nop  */
  /* nop: no architectural effect here */
  /* 225e14: adr x0, #0x2636a0 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2504352)));
  /* 225e18: str x22, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 22));
  }
  /* 225e1c: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2252320));
  fn2_24b720(c);
  /* 225e20: mov w1, w21 */
  ARC_W_W(c, 1, ARC_W_R(c, 21));
  /* 225e24: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 225e28: b #0x225d3c */
  goto L_225d3c;
}

void fn2_227d00(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078116096));
  /* 227d00: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* 227d04: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 227d08: str x23, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 23));
  /* 227d0c: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 227d10: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 227d14: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 227d18: adrp x9, #0x263000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 227d1c: add x9, x9, #0x888 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(2184)));
  /* 227d20: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* 227d24: ldarb w9, [x9] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 9)));
  /* 227d28: tbz w9, #0, #0x227d8c */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_227d8c;
L_227d2c:;
  /* 227d2c: adrp x10, #0x258000 */
  ARC_X_W(c, 10, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 227d30: adrp x9, #0x263000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 227d34: mov w11, w1 */
  ARC_W_W(c, 11, ARC_W_R(c, 1));
  /* 227d38: ldr x10, [x10, #0x980] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 10) + INT64_C(2432))));
  /* 227d3c: ldr x8, [x9, #0x880] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(2176))));
  /* 227d40: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 227d44: mov x9, sp */
  ARC_X_W(c, 9, (c)->sp);
  /* 227d48: add x2, sp, #8 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(8)));
  /* 227d4c: add x3, x29, #0x18 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 227d50: ldr x10, [x10] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 10)));
  /* 227d54: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 227d58: str xzr, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 31));
  /* 227d5c: stp x11, x9, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 11));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 227d60: blr x10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2260324));
  arc_dispatch(c, ARC_X_R(c, 10));
  /* 227d64: ldr x0, [x29, #0x18] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(24))));
  /* 227d68: cbz x0, #0x227d70 */
  if ((ARC_X_R(c, 0)) == 0) goto L_227d70;
  /* 227d6c: bl #0x1b62dc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2260336));
  fn2_1b62dc(c);
L_227d70:;
  /* 227d70: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* 227d74: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 227d78: ldr x23, [sp, #0x20] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(32))));
  /* 227d7c: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 227d80: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 227d84: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* 227d88: ret  */
  return;
L_227d8c:;
  /* 227d8c: adrp x8, #0x263000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 227d90: add x8, x8, #0x888 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2184)));
  /* 227d94: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 227d98: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 227d9c: mov w21, w1 */
  ARC_W_W(c, 21, ARC_W_R(c, 1));
  /* 227da0: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2260388));
  fn2_24b710(c);
  /* 227da4: mov w1, w21 */
  ARC_W_W(c, 1, ARC_W_R(c, 21));
  /* 227da8: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 227dac: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 227db0: cbz w8, #0x227d2c */
  if ((ARC_W_R(c, 8)) == 0) goto L_227d2c;
  /* 227db4: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 227db8: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 227dbc: ldr x23, [x8] */
  ARC_X_W(c, 23, arc_ld64(ARC_X_R(c, 8)));
  /* 227dc0: bl #0x227e2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2260420));
  fn2_227e2c(c);
  /* 227dc4: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 227dc8: adrp x1, #0x2e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(188416)));
  /* 227dcc: add x1, x1, #0x772 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1906)));
  /* 227dd0: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 227dd4: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 227dd8: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2260444));
  fn2_1b8fd4(c);
  /* 227ddc: mov w2, #0x17a5 */
  ARC_W_W(c, 2, UINT64_C(6053));
  /* 227de0: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 227de4: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 227de8: movk w2, #0x35fd, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(905773056)));
  /* 227dec: blr x23 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2260464));
  arc_dispatch(c, ARC_X_R(c, 23));
  /* 227df0: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 227df4: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 227df8: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2260476));
  fn2_1d2d24(c);
  /* 227dfc: adrp x0, #0x263000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 227e00: add x0, x0, #0x880 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2176)));
  /* 227e04: str x22, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 22));
  }
  /* 227e08: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2260492));
  fn2_24b720(c);
  /* 227e0c: mov w1, w21 */
  ARC_W_W(c, 1, ARC_W_R(c, 21));
  /* 227e10: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 227e14: b #0x227d2c */
  goto L_227d2c;
}

void fn2_2292cc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078121676));
  /* 2292cc: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 2292d0: ret  */
  return;
}

void fn2_22a898(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078127256));
  /* 22a898: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 22a89c: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 22a8a0: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 22a8a4: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 22a8a8: adrp x8, #0x263000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 22a8ac: add x8, x8, #0xb20 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2848)));
  /* 22a8b0: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 22a8b4: tbz w8, #0, #0x22a8f4 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_22a8f4;
L_22a8b8:;
  /* 22a8b8: adrp x9, #0x258000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 22a8bc: adrp x8, #0x263000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 22a8c0: add x3, x29, #0x18 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 22a8c4: ldr x9, [x9, #0x980] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(2432))));
  /* 22a8c8: ldr x8, [x8, #0xb18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2840))));
  /* 22a8cc: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 22a8d0: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 22a8d4: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* 22a8d8: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 22a8dc: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2271456));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 22a8e0: ldr x0, [x29, #0x18] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(24))));
  /* 22a8e4: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 22a8e8: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 22a8ec: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 22a8f0: ret  */
  return;
L_22a8f4:;
  /* 22a8f4: adrp x8, #0x263000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 22a8f8: add x8, x8, #0xb20 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2848)));
  /* 22a8fc: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 22a900: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 22a904: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2271496));
  fn2_24b710(c);
  /* 22a908: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 22a90c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 22a910: cbz w8, #0x22a8b8 */
  if ((ARC_W_R(c, 8)) == 0) goto L_22a8b8;
  /* 22a914: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 22a918: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 22a91c: ldr x21, [x8] */
  ARC_X_W(c, 21, arc_ld64(ARC_X_R(c, 8)));
  /* 22a920: bl #0x22c080 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2271524));
  fn2_22c080(c);
  /* 22a924: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 22a928: adrp x1, #0x2e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(188416)));
  /* 22a92c: add x1, x1, #0xb02 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2818)));
  /* 22a930: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 22a934: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 22a938: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2271548));
  fn2_1b8fd4(c);
  /* 22a93c: mov w2, #0x525a */
  ARC_W_W(c, 2, UINT64_C(21082));
  /* 22a940: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 22a944: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 22a948: movk w2, #0xe8c5, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(3905224704)));
  /* 22a94c: blr x21 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2271568));
  arc_dispatch(c, ARC_X_R(c, 21));
  /* 22a950: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 22a954: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 22a958: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2271580));
  fn2_1d2d24(c);
  /* 22a95c: adrp x0, #0x263000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 22a960: add x0, x0, #0xb18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2840)));
  /* 22a964: str x20, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 20));
  }
  /* 22a968: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2271596));
  fn2_24b720(c);
  /* 22a96c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 22a970: b #0x22a8b8 */
  goto L_22a8b8;
}

void fn2_22c49c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078134428));
  /* 22c49c: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 22c4a0: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 22c4a4: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 22c4a8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 22c4ac: ldr x0, [x0, #8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* 22c4b0: adrp x8, #0x250000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2424832)));
  /* 22c4b4: add x8, x8, #0x5e0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1504)));
  /* 22c4b8: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* 22c4bc: cbz x0, #0x22c4ec */
  if ((ARC_X_R(c, 0)) == 0) goto L_22c4ec;
L_22c4c0:;
  /* 22c4c0: ldr x1, [x0] */
  ARC_X_W(c, 1, arc_ld64(ARC_X_R(c, 0)));
  /* 22c4c4: cbz x1, #0x22c4dc */
  if ((ARC_X_R(c, 1)) == 0) goto L_22c4dc;
  /* 22c4c8: bl #0xaeb74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2278604));
  fn2_aeb74(c);
  /* 22c4cc: ldr x0, [x19, #8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* 22c4d0: ldr w8, [x0, #0x10] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 0) + INT64_C(16))));
  /* 22c4d4: cbnz w8, #0x22c4c0 */
  if ((ARC_W_R(c, 8)) != 0) goto L_22c4c0;
  /* 22c4d8: b #0x22c4e4 */
  goto L_22c4e4;
L_22c4dc:;
  /* 22c4dc: ldr w8, [x0, #0x10] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 0) + INT64_C(16))));
  /* 22c4e0: cbnz w8, #0x22c4fc */
  if ((ARC_W_R(c, 8)) != 0) goto L_22c4fc;
L_22c4e4:;
  /* 22c4e4: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* 22c4e8: bl #0x1b5ce8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2278636));
  fn2_1b5ce8(c);
L_22c4ec:;
  /* 22c4ec: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 22c4f0: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 22c4f4: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 22c4f8: b #0x24b730 */
  fn2_24b730(c); return;
L_22c4fc:;
  /* 22c4fc: adrp x0, #0x29000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(167936)));
  /* 22c500: add x0, x0, #0x23f */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(575)));
  /* 22c504: adrp x1, #0x1b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(110592)));
  /* 22c508: add x1, x1, #0x30a */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(778)));
  /* 22c50c: adrp x3, #0x2e000 */
  ARC_X_W(c, 3, (arc_image_bases[2] + UINT64_C(188416)));
  /* 22c510: add x3, x3, #0xbb4 */
  ARC_X_W(c, 3, (ARC_X_R(c, 3) + UINT64_C(2996)));
  /* 22c514: mov w2, #0x317 */
  ARC_W_W(c, 2, UINT64_C(791));
  /* 22c518: mov w4, wzr */
  ARC_W_W(c, 4, ARC_W_R(c, 31));
  /* 22c51c: mov w5, wzr */
  ARC_W_W(c, 5, ARC_W_R(c, 31));
  /* 22c520: bl #0x1b54b0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2278692));
  fn2_1b54b0(c);
  /* 22c524: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 22c528: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 22c52c: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 22c530: b #0x24b730 */
  fn2_24b730(c); return;
}

void fn2_22e248(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078142024));
  /* 22e248: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 22e24c: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 22e250: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 22e254: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 22e258: adrp x8, #0x263000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 22e25c: add x8, x8, #0xe70 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3696)));
  /* 22e260: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 22e264: tbz w8, #0, #0x22e2a8 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_22e2a8;
L_22e268:;
  /* 22e268: adrp x9, #0x258000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 22e26c: adrp x8, #0x263000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 22e270: add x3, x29, #0x18 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 22e274: ldr x9, [x9, #0x980] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(2432))));
  /* 22e278: ldr x8, [x8, #0xe68] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3688))));
  /* 22e27c: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 22e280: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 22e284: str xzr, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 31));
  /* 22e288: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* 22e28c: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 22e290: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2286228));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 22e294: ldp s0, s1, [x29, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(24));
    arc_su_w(c, 0, arc_ld32(_pa));
    arc_su_w(c, 1, arc_ld32((_pa + 4)));
  }
  /* 22e298: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 22e29c: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 22e2a0: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 22e2a4: ret  */
  return;
L_22e2a8:;
  /* 22e2a8: adrp x8, #0x263000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 22e2ac: add x8, x8, #0xe70 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3696)));
  /* 22e2b0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 22e2b4: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 22e2b8: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2286268));
  fn2_24b710(c);
  /* 22e2bc: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 22e2c0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 22e2c4: cbz w8, #0x22e268 */
  if ((ARC_W_R(c, 8)) == 0) goto L_22e268;
  /* 22e2c8: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 22e2cc: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 22e2d0: ldr x21, [x8] */
  ARC_X_W(c, 21, arc_ld64(ARC_X_R(c, 8)));
  /* 22e2d4: bl #0x22ea10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2286296));
  fn2_22ea10(c);
  /* 22e2d8: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 22e2dc: adrp x1, #0x22000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(139264)));
  /* 22e2e0: add x1, x1, #0xbea */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3050)));
  /* 22e2e4: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 22e2e8: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 22e2ec: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2286320));
  fn2_1b8fd4(c);
  /* 22e2f0: mov w2, #0xc647 */
  ARC_W_W(c, 2, UINT64_C(50759));
  /* 22e2f4: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 22e2f8: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 22e2fc: movk w2, #0xc72c, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(3341549568)));
  /* 22e300: blr x21 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2286340));
  arc_dispatch(c, ARC_X_R(c, 21));
  /* 22e304: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 22e308: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 22e30c: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2286352));
  fn2_1d2d24(c);
  /* 22e310: adrp x0, #0x263000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 22e314: add x0, x0, #0xe68 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3688)));
  /* 22e318: str x20, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 20));
  }
  /* 22e31c: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2286368));
  fn2_24b720(c);
  /* 22e320: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 22e324: b #0x22e268 */
  goto L_22e268;
}

void fn2_22fc3c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078148668));
  /* 22fc3c: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* 22fc40: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 22fc44: str x23, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 23));
  /* 22fc48: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 22fc4c: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 22fc50: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 22fc54: adrp x9, #0x263000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 22fc58: add x9, x9, #0xfb8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(4024)));
  /* 22fc5c: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* 22fc60: ldarb w9, [x9] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 9)));
  /* 22fc64: tbz w9, #0, #0x22fcd8 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_22fcd8;
L_22fc68:;
  /* 22fc68: adrp x8, #0x263000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 22fc6c: and w9, w1, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 1) & UINT64_C(1)));
  /* 22fc70: ldr x21, [x0, #0x10] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 22fc74: ldr x20, [x8, #0xfb0] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 8) + INT64_C(4016))));
  /* 22fc78: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 22fc7c: strb w9, [sp, #4] */
  arc_st8(((c)->sp + INT64_C(4)), ARC_W_R(c, 9));
  /* 22fc80: bl #0x1d9740 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2292868));
  fn2_1d9740(c);
  /* 22fc84: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 22fc88: add x9, sp, #4 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(4)));
  /* 22fc8c: add x2, sp, #8 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(8)));
  /* 22fc90: ldr x8, [x8, #0x980] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2432))));
  /* 22fc94: add x3, x29, #0x18 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 22fc98: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 22fc9c: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 22fca0: str x9, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 9));
  /* 22fca4: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 22fca8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2292908));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 22fcac: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 22fcb0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 22fcb4: bl #0x1d9754 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2292920));
  fn2_1d9754(c);
  /* 22fcb8: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 22fcbc: bl #0x1d97fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2292928));
  fn2_1d97fc(c);
  /* 22fcc0: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 22fcc4: ldr x23, [sp, #0x20] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(32))));
  /* 22fcc8: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 22fccc: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 22fcd0: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* 22fcd4: ret  */
  return;
L_22fcd8:;
  /* 22fcd8: adrp x8, #0x263000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 22fcdc: add x8, x8, #0xfb8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(4024)));
  /* 22fce0: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 22fce4: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 22fce8: mov w20, w1 */
  ARC_W_W(c, 20, ARC_W_R(c, 1));
  /* 22fcec: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2292976));
  fn2_24b710(c);
  /* 22fcf0: mov w1, w20 */
  ARC_W_W(c, 1, ARC_W_R(c, 20));
  /* 22fcf4: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 22fcf8: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 22fcfc: cbz w8, #0x22fc68 */
  if ((ARC_W_R(c, 8)) == 0) goto L_22fc68;
  /* 22fd00: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 22fd04: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 22fd08: ldr x23, [x8] */
  ARC_X_W(c, 23, arc_ld64(ARC_X_R(c, 8)));
  /* 22fd0c: bl #0x23048c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2293008));
  fn2_23048c(c);
  /* 22fd10: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 22fd14: adrp x1, #0x21000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(135168)));
  /* 22fd18: add x1, x1, #0x55b */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1371)));
  /* 22fd1c: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 22fd20: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 22fd24: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2293032));
  fn2_1b8fd4(c);
  /* 22fd28: mov w2, #0xccf8 */
  ARC_W_W(c, 2, UINT64_C(52472));
  /* 22fd2c: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 22fd30: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 22fd34: movk w2, #0xc43, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(205717504)));
  /* 22fd38: blr x23 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2293052));
  arc_dispatch(c, ARC_X_R(c, 23));
  /* 22fd3c: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 22fd40: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 22fd44: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2293064));
  fn2_1d2d24(c);
  /* 22fd48: adrp x0, #0x263000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 22fd4c: add x0, x0, #0xfb0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(4016)));
  /* 22fd50: str x22, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 22));
  }
  /* 22fd54: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2293080));
  fn2_24b720(c);
  /* 22fd58: mov w1, w20 */
  ARC_W_W(c, 1, ARC_W_R(c, 20));
  /* 22fd5c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 22fd60: b #0x22fc68 */
  goto L_22fc68;
}

void fn2_231a64(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078156388));
  /* 231a64: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 231a68: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 231a6c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 231a70: nop  */
  /* nop: no architectural effect here */
  /* 231a74: adr x8, #0x2640c8 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2506952)));
  /* 231a78: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 231a7c: tbz w8, #0, #0x231a9c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_231a9c;
L_231a80:;
  /* 231a80: nop  */
  /* nop: no architectural effect here */
  /* 231a84: adr x0, #0x2640c0 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2506944)));
  /* 231a88: nop  */
  /* nop: no architectural effect here */
  /* 231a8c: adr x1, #0x257208 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(2454024)));
  /* 231a90: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 231a94: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 231a98: b #0x1b00bc */
  fn2_1b00bc(c); return;
L_231a9c:;
  /* 231a9c: nop  */
  /* nop: no architectural effect here */
  /* 231aa0: adr x0, #0x2640c8 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2506952)));
  /* 231aa4: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2300584));
  fn2_24b710(c);
  /* 231aa8: cbz w0, #0x231a80 */
  if ((ARC_W_R(c, 0)) == 0) goto L_231a80;
  /* 231aac: nop  */
  /* nop: no architectural effect here */
  /* 231ab0: adr x19, #0x2640c0 */
  ARC_X_W(c, 19, (arc_image_bases[2] + UINT64_C(2506944)));
  /* 231ab4: adrp x1, #0x26000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(155648)));
  /* 231ab8: add x1, x1, #0x589 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1417)));
  /* 231abc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 231ac0: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 231ac4: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2300616));
  fn2_1b8fd4(c);
  /* 231ac8: adrp x0, #0x257000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 231acc: nop  */
  /* nop: no architectural effect here */
  /* 231ad0: adr x2, #0x24f980 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(2423168)));
  /* 231ad4: ldr x0, [x0, #0xf88] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(3976))));
  /* 231ad8: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 231adc: bl #0x24b6f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2300640));
  fn2_24b6f0(c);
  /* 231ae0: nop  */
  /* nop: no architectural effect here */
  /* 231ae4: adr x0, #0x2640c8 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2506952)));
  /* 231ae8: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2300652));
  fn2_24b720(c);
  /* 231aec: b #0x231a80 */
  goto L_231a80;
}

void fn2_2335ec(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078163436));
  /* 2335ec: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 2335f0: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 2335f4: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 2335f8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 2335fc: adrp x8, #0x264000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 233600: add x8, x8, #0x368 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(872)));
  /* 233604: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 233608: tbz w8, #0, #0x233648 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_233648;
L_23360c:;
  /* 23360c: adrp x9, #0x258000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 233610: adrp x8, #0x264000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 233614: add x3, x29, #0x18 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 233618: ldr x9, [x9, #0x980] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(2432))));
  /* 23361c: ldr x8, [x8, #0x360] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(864))));
  /* 233620: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 233624: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 233628: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* 23362c: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 233630: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2307636));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 233634: ldr d0, [x29, #0x18] */
  arc_du_w(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(24))));
  /* 233638: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 23363c: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 233640: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 233644: ret  */
  return;
L_233648:;
  /* 233648: adrp x8, #0x264000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 23364c: add x8, x8, #0x368 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(872)));
  /* 233650: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 233654: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 233658: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2307676));
  fn2_24b710(c);
  /* 23365c: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 233660: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 233664: cbz w8, #0x23360c */
  if ((ARC_W_R(c, 8)) == 0) goto L_23360c;
  /* 233668: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 23366c: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 233670: ldr x21, [x8] */
  ARC_X_W(c, 21, arc_ld64(ARC_X_R(c, 8)));
  /* 233674: bl #0x233714 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2307704));
  fn2_233714(c);
  /* 233678: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 23367c: adrp x1, #0x1c000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(114688)));
  /* 233680: add x1, x1, #0x9bc */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2492)));
  /* 233684: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 233688: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 23368c: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2307728));
  fn2_1b8fd4(c);
  /* 233690: mov w2, #0xe66e */
  ARC_W_W(c, 2, UINT64_C(58990));
  /* 233694: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 233698: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 23369c: movk w2, #0x67c0, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(1740636160)));
  /* 2336a0: blr x21 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2307748));
  arc_dispatch(c, ARC_X_R(c, 21));
  /* 2336a4: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 2336a8: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 2336ac: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2307760));
  fn2_1d2d24(c);
  /* 2336b0: adrp x0, #0x264000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 2336b4: add x0, x0, #0x360 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(864)));
  /* 2336b8: str x20, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 20));
  }
  /* 2336bc: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2307776));
  fn2_24b720(c);
  /* 2336c0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 2336c4: b #0x23360c */
  goto L_23360c;
}

void fn2_234f64(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078169956));
  /* 234f64: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 234f68: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 234f6c: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 234f70: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 234f74: adrp x8, #0x264000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 234f78: add x8, x8, #0x578 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1400)));
  /* 234f7c: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 234f80: tbz w8, #0, #0x234fbc */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_234fbc;
L_234f84:;
  /* 234f84: adrp x9, #0x258000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 234f88: adrp x8, #0x264000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 234f8c: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 234f90: ldr x9, [x9, #0x980] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(2432))));
  /* 234f94: ldr x8, [x8, #0x570] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(1392))));
  /* 234f98: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 234f9c: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* 234fa0: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* 234fa4: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 234fa8: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2314156));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 234fac: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 234fb0: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 234fb4: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 234fb8: ret  */
  return;
L_234fbc:;
  /* 234fbc: adrp x8, #0x264000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 234fc0: add x8, x8, #0x578 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1400)));
  /* 234fc4: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 234fc8: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 234fcc: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2314192));
  fn2_24b710(c);
  /* 234fd0: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 234fd4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 234fd8: cbz w8, #0x234f84 */
  if ((ARC_W_R(c, 8)) == 0) goto L_234f84;
  /* 234fdc: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 234fe0: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 234fe4: ldr x21, [x8] */
  ARC_X_W(c, 21, arc_ld64(ARC_X_R(c, 8)));
  /* 234fe8: bl #0x23b340 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2314220));
  fn2_23b340(c);
  /* 234fec: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 234ff0: adrp x1, #0x35000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(217088)));
  /* 234ff4: add x1, x1, #0xa8c */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2700)));
  /* 234ff8: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 234ffc: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 235000: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2314244));
  fn2_1b8fd4(c);
  /* 235004: mov w2, #0x6d64 */
  ARC_W_W(c, 2, UINT64_C(28004));
  /* 235008: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 23500c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 235010: movk w2, #0xbfdd, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(3218931712)));
  /* 235014: blr x21 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2314264));
  arc_dispatch(c, ARC_X_R(c, 21));
  /* 235018: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 23501c: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 235020: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2314276));
  fn2_1d2d24(c);
  /* 235024: adrp x0, #0x264000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 235028: add x0, x0, #0x570 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1392)));
  /* 23502c: str x20, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 20));
  }
  /* 235030: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2314292));
  fn2_24b720(c);
  /* 235034: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 235038: b #0x234f84 */
  goto L_234f84;
}

void fn2_236cb8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078177464));
  /* 236cb8: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 236cbc: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 236cc0: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 236cc4: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 236cc8: adrp x8, #0x264000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 236ccc: add x8, x8, #0x778 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1912)));
  /* 236cd0: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 236cd4: tbz w8, #0, #0x236d1c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_236d1c;
L_236cd8:;
  /* 236cd8: adrp x9, #0x258000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 236cdc: adrp x8, #0x264000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 236ce0: add x3, x29, #0x18 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 236ce4: ldr x9, [x9, #0x980] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(2432))));
  /* 236ce8: ldr x8, [x8, #0x770] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(1904))));
  /* 236cec: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 236cf0: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 236cf4: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* 236cf8: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 236cfc: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2321664));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 236d00: ldrb w8, [x29, #0x18] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(24))));
  /* 236d04: cmp x8, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(0));
  /* 236d08: cset w0, ne */
  ARC_W_W(c, 0, (ARC_COND(c, 1) ? 1 : 0));
  /* 236d0c: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 236d10: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 236d14: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 236d18: ret  */
  return;
L_236d1c:;
  /* 236d1c: adrp x8, #0x264000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 236d20: add x8, x8, #0x778 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1912)));
  /* 236d24: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 236d28: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 236d2c: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2321712));
  fn2_24b710(c);
  /* 236d30: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 236d34: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 236d38: cbz w8, #0x236cd8 */
  if ((ARC_W_R(c, 8)) == 0) goto L_236cd8;
  /* 236d3c: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 236d40: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 236d44: ldr x21, [x8] */
  ARC_X_W(c, 21, arc_ld64(ARC_X_R(c, 8)));
  /* 236d48: bl #0x23b340 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2321740));
  fn2_23b340(c);
  /* 236d4c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 236d50: adrp x1, #0x34000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(212992)));
  /* 236d54: add x1, x1, #0xe2c */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3628)));
  /* 236d58: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 236d5c: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 236d60: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2321764));
  fn2_1b8fd4(c);
  /* 236d64: mov w2, #0xa5e1 */
  ARC_W_W(c, 2, UINT64_C(42465));
  /* 236d68: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 236d6c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 236d70: movk w2, #0x232, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(36831232)));
  /* 236d74: blr x21 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2321784));
  arc_dispatch(c, ARC_X_R(c, 21));
  /* 236d78: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 236d7c: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 236d80: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2321796));
  fn2_1d2d24(c);
  /* 236d84: adrp x0, #0x264000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 236d88: add x0, x0, #0x770 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1904)));
  /* 236d8c: str x20, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 20));
  }
  /* 236d90: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2321812));
  fn2_24b720(c);
  /* 236d94: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 236d98: b #0x236cd8 */
  goto L_236cd8;
}

void fn2_238c7c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078185596));
  /* 238c7c: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 238c80: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 238c84: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 238c88: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 238c8c: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 238c90: adrp x8, #0x264000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 238c94: add x8, x8, #0x978 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2424)));
  /* 238c98: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 238c9c: tbz w8, #0, #0x238cf0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_238cf0;
L_238ca0:;
  /* 238ca0: adrp x10, #0x258000 */
  ARC_X_W(c, 10, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 238ca4: adrp x8, #0x264000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 238ca8: mov x2, sp */
  ARC_X_W(c, 2, (c)->sp);
  /* 238cac: ldr x10, [x10, #0x980] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 10) + INT64_C(2432))));
  /* 238cb0: ldr x8, [x8, #0x970] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2416))));
  /* 238cb4: ldr x9, [x0, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 238cb8: str x1, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 1));
  /* 238cbc: add x3, sp, #8 */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(8)));
  /* 238cc0: ldr x10, [x10] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 10)));
  /* 238cc4: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 238cc8: mov x1, x9 */
  ARC_X_W(c, 1, ARC_X_R(c, 9));
  /* 238ccc: blr x10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2329808));
  arc_dispatch(c, ARC_X_R(c, 10));
  /* 238cd0: ldrb w8, [sp, #8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(8))));
  /* 238cd4: cmp x8, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(0));
  /* 238cd8: cset w0, ne */
  ARC_W_W(c, 0, (ARC_COND(c, 1) ? 1 : 0));
  /* 238cdc: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 238ce0: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 238ce4: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 238ce8: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 238cec: ret  */
  return;
L_238cf0:;
  /* 238cf0: adrp x8, #0x264000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 238cf4: add x8, x8, #0x978 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2424)));
  /* 238cf8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 238cfc: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 238d00: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 238d04: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2329864));
  fn2_24b710(c);
  /* 238d08: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 238d0c: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 238d10: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 238d14: cbz w8, #0x238ca0 */
  if ((ARC_W_R(c, 8)) == 0) goto L_238ca0;
  /* 238d18: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 238d1c: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 238d20: ldr x22, [x8] */
  ARC_X_W(c, 22, arc_ld64(ARC_X_R(c, 8)));
  /* 238d24: bl #0x23b340 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2329896));
  fn2_23b340(c);
  /* 238d28: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 238d2c: adrp x1, #0x24000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(147456)));
  /* 238d30: add x1, x1, #0x5e2 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1506)));
  /* 238d34: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 238d38: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 238d3c: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2329920));
  fn2_1b8fd4(c);
  /* 238d40: mov w2, #0xecb5 */
  ARC_W_W(c, 2, UINT64_C(60597));
  /* 238d44: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 238d48: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 238d4c: movk w2, #0x9c26, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(2619736064)));
  /* 238d50: blr x22 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2329940));
  arc_dispatch(c, ARC_X_R(c, 22));
  /* 238d54: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 238d58: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 238d5c: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2329952));
  fn2_1d2d24(c);
  /* 238d60: adrp x0, #0x264000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 238d64: add x0, x0, #0x970 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2416)));
  /* 238d68: str x21, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 21));
  }
  /* 238d6c: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2329968));
  fn2_24b720(c);
  /* 238d70: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 238d74: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 238d78: b #0x238ca0 */
  goto L_238ca0;
}

void fn2_23ab90(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078193552));
  /* 23ab90: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* 23ab94: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 23ab98: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 23ab9c: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 23aba0: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 23aba4: adrp x8, #0x264000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 23aba8: add x8, x8, #0xb78 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2936)));
  /* 23abac: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 23abb0: tbz w8, #0, #0x23ac00 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_23ac00;
L_23abb4:;
  /* 23abb4: adrp x10, #0x258000 */
  ARC_X_W(c, 10, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 23abb8: fcvt d0, s0 */
  arc_d_w(c, 0, (double)(ARC_S_R(c, 0)));
  /* 23abbc: adrp x9, #0x264000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 23abc0: ldr x10, [x10, #0x980] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 10) + INT64_C(2432))));
  /* 23abc4: ldr x8, [x0, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 23abc8: add x11, sp, #8 */
  ARC_X_W(c, 11, ((c)->sp + UINT64_C(8)));
  /* 23abcc: ldr x0, [x9, #0xb70] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 9) + INT64_C(2928))));
  /* 23abd0: stp x1, x11, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 1));
    arc_st64(_pa + 8, ARC_X_R(c, 11));
  }
  /* 23abd4: add x2, sp, #0x10 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(16)));
  /* 23abd8: ldr x9, [x10] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 10)));
  /* 23abdc: mov x1, x8 */
  ARC_X_W(c, 1, ARC_X_R(c, 8));
  /* 23abe0: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* 23abe4: str d0, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), (c)->q[0].u64[0]);
  /* 23abe8: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2337772));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 23abec: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 23abf0: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 23abf4: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 23abf8: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* 23abfc: ret  */
  return;
L_23ac00:;
  /* 23ac00: adrp x8, #0x264000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 23ac04: add x8, x8, #0xb78 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2936)));
  /* 23ac08: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 23ac0c: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 23ac10: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 23ac14: str s0, [sp, #4] */
  arc_st32(((c)->sp + INT64_C(4)), (c)->q[0].u32[0]);
  /* 23ac18: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2337820));
  fn2_24b710(c);
  /* 23ac1c: ldr s0, [sp, #4] */
  arc_su_w(c, 0, arc_ld32(((c)->sp + INT64_C(4))));
  /* 23ac20: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 23ac24: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 23ac28: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 23ac2c: cbz w8, #0x23abb4 */
  if ((ARC_W_R(c, 8)) == 0) goto L_23abb4;
  /* 23ac30: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 23ac34: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 23ac38: ldr x22, [x8] */
  ARC_X_W(c, 22, arc_ld64(ARC_X_R(c, 8)));
  /* 23ac3c: bl #0x23b340 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2337856));
  fn2_23b340(c);
  /* 23ac40: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 23ac44: adrp x1, #0x27000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(159744)));
  /* 23ac48: add x1, x1, #0x85c */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2140)));
  /* 23ac4c: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 23ac50: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 23ac54: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2337880));
  fn2_1b8fd4(c);
  /* 23ac58: mov w2, #0xb29d */
  ARC_W_W(c, 2, UINT64_C(45725));
  /* 23ac5c: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* 23ac60: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 23ac64: movk w2, #0x9bca, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(2613706752)));
  /* 23ac68: blr x22 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2337900));
  arc_dispatch(c, ARC_X_R(c, 22));
  /* 23ac6c: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 23ac70: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 23ac74: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2337912));
  fn2_1d2d24(c);
  /* 23ac78: adrp x0, #0x264000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 23ac7c: add x0, x0, #0xb70 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2928)));
  /* 23ac80: str x21, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 21));
  }
  /* 23ac84: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2337928));
  fn2_24b720(c);
  /* 23ac88: ldr s0, [sp, #4] */
  arc_su_w(c, 0, arc_ld32(((c)->sp + INT64_C(4))));
  /* 23ac8c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 23ac90: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 23ac94: b #0x23abb4 */
  goto L_23abb4;
}

void fn2_23ba88(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078197384));
  /* 23ba88: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 23ba8c: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 23ba90: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 23ba94: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 23ba98: adrp x8, #0x264000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 23ba9c: add x8, x8, #0xbf8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3064)));
  /* 23baa0: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 23baa4: tbz w8, #0, #0x23bae8 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_23bae8;
L_23baa8:;
  /* 23baa8: adrp x9, #0x258000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 23baac: adrp x8, #0x264000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 23bab0: add x3, x29, #0x18 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 23bab4: ldr x9, [x9, #0x980] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(2432))));
  /* 23bab8: ldr x8, [x8, #0xbf0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3056))));
  /* 23babc: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 23bac0: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 23bac4: str xzr, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 31));
  /* 23bac8: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* 23bacc: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 23bad0: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2341588));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 23bad4: ldp s0, s1, [x29, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(24));
    arc_su_w(c, 0, arc_ld32(_pa));
    arc_su_w(c, 1, arc_ld32((_pa + 4)));
  }
  /* 23bad8: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 23badc: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 23bae0: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 23bae4: ret  */
  return;
L_23bae8:;
  /* 23bae8: adrp x8, #0x264000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 23baec: add x8, x8, #0xbf8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3064)));
  /* 23baf0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 23baf4: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 23baf8: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2341628));
  fn2_24b710(c);
  /* 23bafc: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 23bb00: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 23bb04: cbz w8, #0x23baa8 */
  if ((ARC_W_R(c, 8)) == 0) goto L_23baa8;
  /* 23bb08: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 23bb0c: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 23bb10: ldr x21, [x8] */
  ARC_X_W(c, 21, arc_ld64(ARC_X_R(c, 8)));
  /* 23bb14: bl #0x23c3cc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2341656));
  fn2_23c3cc(c);
  /* 23bb18: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 23bb1c: adrp x1, #0x1b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(110592)));
  /* 23bb20: add x1, x1, #0xe49 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3657)));
  /* 23bb24: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 23bb28: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 23bb2c: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2341680));
  fn2_1b8fd4(c);
  /* 23bb30: mov w2, #0xc647 */
  ARC_W_W(c, 2, UINT64_C(50759));
  /* 23bb34: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 23bb38: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 23bb3c: movk w2, #0xc72c, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(3341549568)));
  /* 23bb40: blr x21 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2341700));
  arc_dispatch(c, ARC_X_R(c, 21));
  /* 23bb44: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 23bb48: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 23bb4c: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2341712));
  fn2_1d2d24(c);
  /* 23bb50: nop  */
  /* nop: no architectural effect here */
  /* 23bb54: adr x0, #0x264bf0 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2509808)));
  /* 23bb58: str x20, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 20));
  }
  /* 23bb5c: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2341728));
  fn2_24b720(c);
  /* 23bb60: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 23bb64: b #0x23baa8 */
  goto L_23baa8;
}

void fn2_23d0e4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078203108));
  /* 23d0e4: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 23d0e8: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 23d0ec: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 23d0f0: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 23d0f4: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 23d0f8: adrp x8, #0x264000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 23d0fc: add x8, x8, #0xe08 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3592)));
  /* 23d100: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 23d104: tbz w8, #0, #0x23d14c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_23d14c;
L_23d108:;
  /* 23d108: adrp x10, #0x258000 */
  ARC_X_W(c, 10, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 23d10c: adrp x8, #0x264000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 23d110: add x2, sp, #8 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(8)));
  /* 23d114: ldr x10, [x10, #0x980] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 10) + INT64_C(2432))));
  /* 23d118: ldr x8, [x8, #0xe00] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3584))));
  /* 23d11c: ldr x9, [x0, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 23d120: str x1, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 1));
  /* 23d124: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* 23d128: ldr x10, [x10] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 10)));
  /* 23d12c: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 23d130: mov x1, x9 */
  ARC_X_W(c, 1, ARC_X_R(c, 9));
  /* 23d134: blr x10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2347320));
  arc_dispatch(c, ARC_X_R(c, 10));
  /* 23d138: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 23d13c: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 23d140: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 23d144: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 23d148: ret  */
  return;
L_23d14c:;
  /* 23d14c: adrp x8, #0x264000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 23d150: add x8, x8, #0xe08 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3592)));
  /* 23d154: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 23d158: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 23d15c: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 23d160: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2347364));
  fn2_24b710(c);
  /* 23d164: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 23d168: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 23d16c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 23d170: cbz w8, #0x23d108 */
  if ((ARC_W_R(c, 8)) == 0) goto L_23d108;
  /* 23d174: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 23d178: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 23d17c: ldr x22, [x8] */
  ARC_X_W(c, 22, arc_ld64(ARC_X_R(c, 8)));
  /* 23d180: bl #0x242738 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2347396));
  fn2_242738(c);
  /* 23d184: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 23d188: adrp x1, #0x2c000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(180224)));
  /* 23d18c: add x1, x1, #0xd24 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3364)));
  /* 23d190: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 23d194: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 23d198: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2347420));
  fn2_1b8fd4(c);
  /* 23d19c: mov w2, #0x25fa */
  ARC_W_W(c, 2, UINT64_C(9722));
  /* 23d1a0: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 23d1a4: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 23d1a8: movk w2, #0xae13, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(2920480768)));
  /* 23d1ac: blr x22 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2347440));
  arc_dispatch(c, ARC_X_R(c, 22));
  /* 23d1b0: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 23d1b4: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 23d1b8: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2347452));
  fn2_1d2d24(c);
  /* 23d1bc: adrp x0, #0x264000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 23d1c0: add x0, x0, #0xe00 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3584)));
  /* 23d1c4: str x21, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 21));
  }
  /* 23d1c8: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2347468));
  fn2_24b720(c);
  /* 23d1cc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 23d1d0: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 23d1d4: b #0x23d108 */
  goto L_23d108;
}

void fn2_23f6a0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078212768));
  /* 23f6a0: sub sp, sp, #0x120 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(288)));
  /* 23f6a4: stp x29, x30, [sp, #0xf0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(240));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 23f6a8: stp x28, x21, [sp, #0x100] */
  { const uint64_t _pa = ((c)->sp + INT64_C(256));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 23f6ac: stp x20, x19, [sp, #0x110] */
  { const uint64_t _pa = ((c)->sp + INT64_C(272));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 23f6b0: add x29, sp, #0xf0 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(240)));
  /* 23f6b4: adrp x8, #0x265000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2510848)));
  /* 23f6b8: add x8, x8, #8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(8)));
  /* 23f6bc: ldr w19, [x29, #0x40] */
  ARC_W_W(c, 19, arc_ld32((ARC_X_R(c, 29) + INT64_C(64))));
  /* 23f6c0: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 23f6c4: ldr w20, [x29, #0x38] */
  ARC_W_W(c, 20, arc_ld32((ARC_X_R(c, 29) + INT64_C(56))));
  /* 23f6c8: tbz w8, #0, #0x23f77c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_23f77c;
L_23f6cc:;
  /* 23f6cc: sxtw x9, w5 */
  ARC_X_W(c, 9, ((int64_t)(int32_t)(ARC_W_R(c, 5))));
  /* 23f6d0: ldr x8, [x1] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 1)));
  /* 23f6d4: mov w11, w4 */
  ARC_W_W(c, 11, ARC_W_R(c, 4));
  /* 23f6d8: fcvt d0, s0 */
  arc_d_w(c, 0, (double)(ARC_S_R(c, 0)));
  /* 23f6dc: fcvt d1, s1 */
  arc_d_w(c, 1, (double)(ARC_S_R(c, 1)));
  /* 23f6e0: sxtw x10, w6 */
  ARC_X_W(c, 10, ((int64_t)(int32_t)(ARC_W_R(c, 6))));
  /* 23f6e4: str x9, [sp, #0x78] */
  arc_st64(((c)->sp + INT64_C(120)), ARC_X_R(c, 9));
  /* 23f6e8: add x9, x8, #0x10 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* 23f6ec: cmp x8, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(0));
  /* 23f6f0: csel x8, xzr, x9, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 9)));
  /* 23f6f4: add x9, sp, #0x78 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(120)));
  /* 23f6f8: stp x20, x10, [sp, #0x68] */
  { const uint64_t _pa = ((c)->sp + INT64_C(104));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 10));
  }
  /* 23f6fc: stp x11, x8, [x29, #-0x68] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-104));
    arc_st64(_pa, ARC_X_R(c, 11));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* 23f700: sub x8, x29, #0x68 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(104)));
  /* 23f704: adrp x11, #0x258000 */
  ARC_X_W(c, 11, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 23f708: stur x8, [x29, #-0x48] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-72)), ARC_X_R(c, 8));
  /* 23f70c: sub x8, x29, #0x70 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(112)));
  /* 23f710: add x10, sp, #0x68 */
  ARC_X_W(c, 10, ((c)->sp + UINT64_C(104)));
  /* 23f714: stp x8, x9, [x29, #-0x40] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-64));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 23f718: add x9, sp, #0x70 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(112)));
  /* 23f71c: adrp x8, #0x265000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2510848)));
  /* 23f720: stur d0, [x29, #-0x70] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-112)), (c)->q[0].u64[0]);
  /* 23f724: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 23f728: str x19, [sp, #0x60] */
  arc_st64(((c)->sp + INT64_C(96)), ARC_X_R(c, 19));
  /* 23f72c: str d1, [sp, #0x58] */
  arc_st64(((c)->sp + INT64_C(88)), (c)->q[1].u64[0]);
  /* 23f730: stp x2, x3, [x29, #-0x58] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-88));
    arc_st64(_pa, ARC_X_R(c, 2));
    arc_st64(_pa + 8, ARC_X_R(c, 3));
  }
  /* 23f734: sub x2, x29, #0x60 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(96)));
  /* 23f738: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* 23f73c: stp x9, x7, [x29, #-0x30] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-48));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 7));
  }
  /* 23f740: add x9, x29, #0x30 */
  ARC_X_W(c, 9, (ARC_X_R(c, 29) + UINT64_C(48)));
  /* 23f744: ldr x11, [x11, #0x980] */
  ARC_X_W(c, 11, arc_ld64((ARC_X_R(c, 11) + INT64_C(2432))));
  /* 23f748: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 23f74c: stp x9, x10, [x29, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-32));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 10));
  }
  /* 23f750: add x9, sp, #0x60 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(96)));
  /* 23f754: add x10, sp, #0x58 */
  ARC_X_W(c, 10, ((c)->sp + UINT64_C(88)));
  /* 23f758: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 23f75c: ldr x11, [x11] */
  ARC_X_W(c, 11, arc_ld64(ARC_X_R(c, 11)));
  /* 23f760: stp x9, x10, [x29, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-16));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 10));
  }
  /* 23f764: blr x11 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2357096));
  arc_dispatch(c, ARC_X_R(c, 11));
  /* 23f768: ldp x20, x19, [sp, #0x110] */
  { const uint64_t _pa = ((c)->sp + INT64_C(272));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 23f76c: ldp x28, x21, [sp, #0x100] */
  { const uint64_t _pa = ((c)->sp + INT64_C(256));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 23f770: ldp x29, x30, [sp, #0xf0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(240));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 23f774: add sp, sp, #0x120 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(288)));
  /* 23f778: ret  */
  return;
L_23f77c:;
  /* 23f77c: adrp x8, #0x265000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2510848)));
  /* 23f780: add x8, x8, #8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(8)));
  /* 23f784: stp x7, x0, [sp, #0x48] */
  { const uint64_t _pa = ((c)->sp + INT64_C(72));
    arc_st64(_pa, ARC_X_R(c, 7));
    arc_st64(_pa + 8, ARC_X_R(c, 0));
  }
  /* 23f788: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 23f78c: stp x2, x3, [sp, #0x38] */
  { const uint64_t _pa = ((c)->sp + INT64_C(56));
    arc_st64(_pa, ARC_X_R(c, 2));
    arc_st64(_pa + 8, ARC_X_R(c, 3));
  }
  /* 23f790: str s1, [sp, #0x34] */
  arc_st32(((c)->sp + INT64_C(52)), (c)->q[1].u32[0]);
  /* 23f794: stp x6, x1, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 6));
    arc_st64(_pa + 8, ARC_X_R(c, 1));
  }
  /* 23f798: str x5, [sp, #0x18] */
  arc_st64(((c)->sp + INT64_C(24)), ARC_X_R(c, 5));
  /* 23f79c: str s0, [sp, #0x14] */
  arc_st32(((c)->sp + INT64_C(20)), (c)->q[0].u32[0]);
  /* 23f7a0: str w4, [sp, #0x10] */
  arc_st32(((c)->sp + INT64_C(16)), ARC_W_R(c, 4));
  /* 23f7a4: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2357160));
  fn2_24b710(c);
  /* 23f7a8: ldp x5, x6, [sp, #0x18] */
  { const uint64_t _pa = ((c)->sp + INT64_C(24));
    ARC_X_W(c, 5, arc_ld64(_pa));
    ARC_X_W(c, 6, arc_ld64(_pa + 8));
  }
  /* 23f7ac: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 23f7b0: ldp x2, x3, [sp, #0x38] */
  { const uint64_t _pa = ((c)->sp + INT64_C(56));
    ARC_X_W(c, 2, arc_ld64(_pa));
    ARC_X_W(c, 3, arc_ld64(_pa + 8));
  }
  /* 23f7b4: ldr w4, [sp, #0x10] */
  ARC_W_W(c, 4, arc_ld32(((c)->sp + INT64_C(16))));
  /* 23f7b8: ldp x7, x0, [sp, #0x48] */
  { const uint64_t _pa = ((c)->sp + INT64_C(72));
    ARC_X_W(c, 7, arc_ld64(_pa));
    ARC_X_W(c, 0, arc_ld64(_pa + 8));
  }
  /* 23f7bc: ldr s0, [sp, #0x14] */
  arc_su_w(c, 0, arc_ld32(((c)->sp + INT64_C(20))));
  /* 23f7c0: ldr x1, [sp, #0x28] */
  ARC_X_W(c, 1, arc_ld64(((c)->sp + INT64_C(40))));
  /* 23f7c4: ldr s1, [sp, #0x34] */
  arc_su_w(c, 1, arc_ld32(((c)->sp + INT64_C(52))));
  /* 23f7c8: cbz w8, #0x23f6cc */
  if ((ARC_W_R(c, 8)) == 0) goto L_23f6cc;
  /* 23f7cc: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 23f7d0: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 23f7d4: ldr x21, [x8] */
  ARC_X_W(c, 21, arc_ld64(ARC_X_R(c, 8)));
  /* 23f7d8: bl #0x242738 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2357212));
  fn2_242738(c);
  /* 23f7dc: str x19, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 19));
  /* 23f7e0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 23f7e4: adrp x1, #0x26000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(155648)));
  /* 23f7e8: add x1, x1, #0x5c9 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1481)));
  /* 23f7ec: sub x0, x29, #0x60 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(96)));
  /* 23f7f0: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 23f7f4: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2357240));
  fn2_1b8fd4(c);
  /* 23f7f8: mov w2, #0x1eb9 */
  ARC_W_W(c, 2, UINT64_C(7865));
  /* 23f7fc: sub x1, x29, #0x60 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(96)));
  /* 23f800: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 23f804: movk w2, #0x2a2a, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(707395584)));
  /* 23f808: blr x21 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2357260));
  arc_dispatch(c, ARC_X_R(c, 21));
  /* 23f80c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 23f810: sub x0, x29, #0x60 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(96)));
  /* 23f814: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2357272));
  fn2_1d2d24(c);
  /* 23f818: adrp x0, #0x265000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2510848)));
  /* 23f81c: add x0, x0, #0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(0)));
  /* 23f820: str x19, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 19));
  }
  /* 23f824: ldr x19, [sp, #8] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(8))));
  /* 23f828: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2357292));
  fn2_24b720(c);
  /* 23f82c: ldp x5, x6, [sp, #0x18] */
  { const uint64_t _pa = ((c)->sp + INT64_C(24));
    ARC_X_W(c, 5, arc_ld64(_pa));
    ARC_X_W(c, 6, arc_ld64(_pa + 8));
  }
  /* 23f830: ldr w4, [sp, #0x10] */
  ARC_W_W(c, 4, arc_ld32(((c)->sp + INT64_C(16))));
  /* 23f834: ldp x2, x3, [sp, #0x38] */
  { const uint64_t _pa = ((c)->sp + INT64_C(56));
    ARC_X_W(c, 2, arc_ld64(_pa));
    ARC_X_W(c, 3, arc_ld64(_pa + 8));
  }
  /* 23f838: ldr s0, [sp, #0x14] */
  arc_su_w(c, 0, arc_ld32(((c)->sp + INT64_C(20))));
  /* 23f83c: ldr x1, [sp, #0x28] */
  ARC_X_W(c, 1, arc_ld64(((c)->sp + INT64_C(40))));
  /* 23f840: ldr s1, [sp, #0x34] */
  arc_su_w(c, 1, arc_ld32(((c)->sp + INT64_C(52))));
  /* 23f844: ldp x7, x0, [sp, #0x48] */
  { const uint64_t _pa = ((c)->sp + INT64_C(72));
    ARC_X_W(c, 7, arc_ld64(_pa));
    ARC_X_W(c, 0, arc_ld64(_pa + 8));
  }
  /* 23f848: b #0x23f6cc */
  goto L_23f6cc;
}

void fn2_24190c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078221580));
  /* 24190c: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 241910: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 241914: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 241918: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 24191c: adrp x8, #0x265000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2510848)));
  /* 241920: add x8, x8, #0x208 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(520)));
  /* 241924: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 241928: tbz w8, #0, #0x241964 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_241964;
L_24192c:;
  /* 24192c: adrp x9, #0x258000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 241930: adrp x8, #0x265000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2510848)));
  /* 241934: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 241938: ldr x9, [x9, #0x980] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(2432))));
  /* 24193c: ldr x8, [x8, #0x200] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(512))));
  /* 241940: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 241944: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* 241948: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* 24194c: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 241950: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2365780));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 241954: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 241958: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 24195c: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 241960: ret  */
  return;
L_241964:;
  /* 241964: adrp x8, #0x265000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2510848)));
  /* 241968: add x8, x8, #0x208 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(520)));
  /* 24196c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 241970: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 241974: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2365816));
  fn2_24b710(c);
  /* 241978: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 24197c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 241980: cbz w8, #0x24192c */
  if ((ARC_W_R(c, 8)) == 0) goto L_24192c;
  /* 241984: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 241988: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 24198c: ldr x21, [x8] */
  ARC_X_W(c, 21, arc_ld64(ARC_X_R(c, 8)));
  /* 241990: bl #0x242738 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2365844));
  fn2_242738(c);
  /* 241994: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 241998: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* 24199c: add x1, x1, #0xb08 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2824)));
  /* 2419a0: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 2419a4: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 2419a8: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2365868));
  fn2_1b8fd4(c);
  /* 2419ac: mov w2, #0x6d64 */
  ARC_W_W(c, 2, UINT64_C(28004));
  /* 2419b0: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 2419b4: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 2419b8: movk w2, #0xbfdd, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(3218931712)));
  /* 2419bc: blr x21 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2365888));
  arc_dispatch(c, ARC_X_R(c, 21));
  /* 2419c0: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 2419c4: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 2419c8: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2365900));
  fn2_1d2d24(c);
  /* 2419cc: adrp x0, #0x265000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2510848)));
  /* 2419d0: add x0, x0, #0x200 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(512)));
  /* 2419d4: str x20, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 20));
  }
  /* 2419d8: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2365916));
  fn2_24b720(c);
  /* 2419dc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 2419e0: b #0x24192c */
  goto L_24192c;
}

void fn2_242bbc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078226364));
  /* 242bbc: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 242bc0: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 242bc4: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 242bc8: nop  */
  /* nop: no architectural effect here */
  /* 242bcc: adr x8, #0x264d08 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2510088)));
  /* 242bd0: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 242bd4: tbz w8, #0, #0x242bf4 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_242bf4;
L_242bd8:;
  /* 242bd8: nop  */
  /* nop: no architectural effect here */
  /* 242bdc: adr x0, #0x264d00 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2510080)));
  /* 242be0: nop  */
  /* nop: no architectural effect here */
  /* 242be4: adr x1, #0x257730 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(2455344)));
  /* 242be8: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 242bec: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 242bf0: b #0x1b00bc */
  fn2_1b00bc(c); return;
L_242bf4:;
  /* 242bf4: nop  */
  /* nop: no architectural effect here */
  /* 242bf8: adr x0, #0x264d08 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2510088)));
  /* 242bfc: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2370560));
  fn2_24b710(c);
  /* 242c00: cbz w0, #0x242bd8 */
  if ((ARC_W_R(c, 0)) == 0) goto L_242bd8;
  /* 242c04: nop  */
  /* nop: no architectural effect here */
  /* 242c08: adr x19, #0x264d00 */
  ARC_X_W(c, 19, (arc_image_bases[2] + UINT64_C(2510080)));
  /* 242c0c: adrp x1, #0x1a000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(106496)));
  /* 242c10: add x1, x1, #0x7f3 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2035)));
  /* 242c14: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 242c18: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 242c1c: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2370592));
  fn2_1b8fd4(c);
  /* 242c20: adrp x0, #0x257000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 242c24: nop  */
  /* nop: no architectural effect here */
  /* 242c28: adr x2, #0x24f980 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(2423168)));
  /* 242c2c: ldr x0, [x0, #0xf88] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(3976))));
  /* 242c30: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 242c34: bl #0x24b6f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2370616));
  fn2_24b6f0(c);
  /* 242c38: nop  */
  /* nop: no architectural effect here */
  /* 242c3c: adr x0, #0x264d08 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2510088)));
  /* 242c40: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2370628));
  fn2_24b720(c);
  /* 242c44: b #0x242bd8 */
  goto L_242bd8;
}

void fn2_243a00(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078230016));
  /* 243a00: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* 243a04: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 243a08: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 243a0c: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 243a10: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 243a14: adrp x9, #0x265000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2510848)));
  /* 243a18: add x9, x9, #0x3d8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(984)));
  /* 243a1c: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* 243a20: ldarb w9, [x9] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 9)));
  /* 243a24: tbz w9, #0, #0x243a7c */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_243a7c;
L_243a28:;
  /* 243a28: adrp x9, #0x258000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 243a2c: adrp x8, #0x265000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2510848)));
  /* 243a30: add x3, sp, #8 */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(8)));
  /* 243a34: ldr x9, [x9, #0x980] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(2432))));
  /* 243a38: ldr x8, [x8, #0x3d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(976))));
  /* 243a3c: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 243a40: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 243a44: stp xzr, xzr, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 243a48: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* 243a4c: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 243a50: str xzr, [sp, #0x18] */
  arc_st64(((c)->sp + INT64_C(24)), ARC_X_R(c, 31));
  /* 243a54: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2374232));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 243a58: ldur q0, [sp, #8] */
  arc_q_w(c, 0, arc_ld64(((c)->sp + INT64_C(8))), arc_ld64(((c)->sp + INT64_C(8)) + 8));
  /* 243a5c: ldr x8, [sp, #0x18] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(24))));
  /* 243a60: str q0, [x19] */
  arc_st64(ARC_X_R(c, 19), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 19) + 8, (c)->q[0].u64[1]);
  /* 243a64: str x8, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 8));
  /* 243a68: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 243a6c: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 243a70: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 243a74: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* 243a78: ret  */
  return;
L_243a7c:;
  /* 243a7c: adrp x8, #0x265000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2510848)));
  /* 243a80: add x8, x8, #0x3d8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(984)));
  /* 243a84: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 243a88: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 243a8c: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2374288));
  fn2_24b710(c);
  /* 243a90: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 243a94: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 243a98: cbz w8, #0x243a28 */
  if ((ARC_W_R(c, 8)) == 0) goto L_243a28;
  /* 243a9c: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 243aa0: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 243aa4: ldr x22, [x8] */
  ARC_X_W(c, 22, arc_ld64(ARC_X_R(c, 8)));
  /* 243aa8: bl #0x244850 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2374316));
  fn2_244850(c);
  /* 243aac: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 243ab0: adrp x1, #0x35000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(217088)));
  /* 243ab4: add x1, x1, #0xb0c */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2828)));
  /* 243ab8: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 243abc: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 243ac0: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2374340));
  fn2_1b8fd4(c);
  /* 243ac4: mov w2, #0xd6ff */
  ARC_W_W(c, 2, UINT64_C(55039));
  /* 243ac8: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 243acc: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 243ad0: movk w2, #0x3fb2, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(1068630016)));
  /* 243ad4: blr x22 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2374360));
  arc_dispatch(c, ARC_X_R(c, 22));
  /* 243ad8: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 243adc: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 243ae0: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2374372));
  fn2_1d2d24(c);
  /* 243ae4: adrp x0, #0x265000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2510848)));
  /* 243ae8: add x0, x0, #0x3d0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(976)));
  /* 243aec: str x21, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 21));
  }
  /* 243af0: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2374388));
  fn2_24b720(c);
  /* 243af4: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 243af8: b #0x243a28 */
  goto L_243a28;
}

void fn2_2449b8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078234040));
  /* 2449b8: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 2449bc: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 2449c0: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 2449c4: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 2449c8: ldr x0, [x0, #8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* 2449cc: adrp x8, #0x250000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2424832)));
  /* 2449d0: add x8, x8, #0x5e0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1504)));
  /* 2449d4: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* 2449d8: cbz x0, #0x244a08 */
  if ((ARC_X_R(c, 0)) == 0) goto L_244a08;
L_2449dc:;
  /* 2449dc: ldr x1, [x0] */
  ARC_X_W(c, 1, arc_ld64(ARC_X_R(c, 0)));
  /* 2449e0: cbz x1, #0x2449f8 */
  if ((ARC_X_R(c, 1)) == 0) goto L_2449f8;
  /* 2449e4: bl #0xaeb74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2378216));
  fn2_aeb74(c);
  /* 2449e8: ldr x0, [x19, #8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* 2449ec: ldr w8, [x0, #0x10] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 0) + INT64_C(16))));
  /* 2449f0: cbnz w8, #0x2449dc */
  if ((ARC_W_R(c, 8)) != 0) goto L_2449dc;
  /* 2449f4: b #0x244a00 */
  goto L_244a00;
L_2449f8:;
  /* 2449f8: ldr w8, [x0, #0x10] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 0) + INT64_C(16))));
  /* 2449fc: cbnz w8, #0x244a18 */
  if ((ARC_W_R(c, 8)) != 0) goto L_244a18;
L_244a00:;
  /* 244a00: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* 244a04: bl #0x1b5ce8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2378248));
  fn2_1b5ce8(c);
L_244a08:;
  /* 244a08: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 244a0c: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 244a10: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 244a14: b #0x24b730 */
  fn2_24b730(c); return;
L_244a18:;
  /* 244a18: adrp x0, #0x29000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(167936)));
  /* 244a1c: add x0, x0, #0x23f */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(575)));
  /* 244a20: adrp x1, #0x1b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(110592)));
  /* 244a24: add x1, x1, #0x30a */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(778)));
  /* 244a28: adrp x3, #0x2e000 */
  ARC_X_W(c, 3, (arc_image_bases[2] + UINT64_C(188416)));
  /* 244a2c: add x3, x3, #0xbb4 */
  ARC_X_W(c, 3, (ARC_X_R(c, 3) + UINT64_C(2996)));
  /* 244a30: mov w2, #0x317 */
  ARC_W_W(c, 2, UINT64_C(791));
  /* 244a34: mov w4, wzr */
  ARC_W_W(c, 4, ARC_W_R(c, 31));
  /* 244a38: mov w5, wzr */
  ARC_W_W(c, 5, ARC_W_R(c, 31));
  /* 244a3c: bl #0x1b54b0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2378304));
  fn2_1b54b0(c);
  /* 244a40: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 244a44: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 244a48: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 244a4c: b #0x24b730 */
  fn2_24b730(c); return;
}

void fn2_245a18(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078238232));
  /* 245a18: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 245a1c: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 245a20: str x19, [sp, #0x30] */
  arc_st64(((c)->sp + INT64_C(48)), ARC_X_R(c, 19));
  /* 245a24: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 245a28: adrp x8, #0x265000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2510848)));
  /* 245a2c: add x8, x8, #0x538 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1336)));
  /* 245a30: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 245a34: tbz w8, #0, #0x245a70 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_245a70;
L_245a38:;
  /* 245a38: adrp x8, #0x265000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2510848)));
  /* 245a3c: add x9, sp, #0x10 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(16)));
  /* 245a40: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 245a44: ldr x8, [x8, #0x530] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(1328))));
  /* 245a48: sub x1, x29, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 245a4c: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* 245a50: str d0, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), (c)->q[0].u64[0]);
  /* 245a54: stur x9, [x29, #-8] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-8)), ARC_X_R(c, 9));
  /* 245a58: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2382428));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 245a5c: ldr d0, [x29, #0x18] */
  arc_du_w(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(24))));
  /* 245a60: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 245a64: ldr x19, [sp, #0x30] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(48))));
  /* 245a68: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 245a6c: ret  */
  return;
L_245a70:;
  /* 245a70: adrp x0, #0x265000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2510848)));
  /* 245a74: add x0, x0, #0x538 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1336)));
  /* 245a78: str d0, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), (c)->q[0].u64[0]);
  /* 245a7c: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2382464));
  fn2_24b710(c);
  /* 245a80: ldr d0, [sp, #8] */
  arc_du_w(c, 0, arc_ld64(((c)->sp + INT64_C(8))));
  /* 245a84: cbz w0, #0x245a38 */
  if ((ARC_W_R(c, 0)) == 0) goto L_245a38;
  /* 245a88: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 245a8c: adrp x1, #0x1a000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(106496)));
  /* 245a90: add x1, x1, #0x804 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2052)));
  /* 245a94: ldr x8, [x8, #0x800] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2048))));
  /* 245a98: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 245a9c: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 245aa0: ldr x19, [x8] */
  ARC_X_W(c, 19, arc_ld64(ARC_X_R(c, 8)));
  /* 245aa4: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2382504));
  fn2_1b8fd4(c);
  /* 245aa8: mov w1, #0x90b3 */
  ARC_W_W(c, 1, UINT64_C(37043));
  /* 245aac: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 245ab0: movk w1, #0x7f8e, lsl #16 */
  ARC_W_W(c, 1, ((ARC_W_R(c, 1) & UINT64_C(18446744069414649855)) | UINT64_C(2140012544)));
  /* 245ab4: blr x19 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2382520));
  arc_dispatch(c, ARC_X_R(c, 19));
  /* 245ab8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 245abc: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 245ac0: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2382532));
  fn2_1d2d24(c);
  /* 245ac4: adrp x0, #0x265000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2510848)));
  /* 245ac8: add x0, x0, #0x530 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1328)));
  /* 245acc: str x19, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 19));
  }
  /* 245ad0: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2382548));
  fn2_24b720(c);
  /* 245ad4: ldr d0, [sp, #8] */
  arc_du_w(c, 0, arc_ld64(((c)->sp + INT64_C(8))));
  /* 245ad8: b #0x245a38 */
  goto L_245a38;
}

void fn2_24736c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078244716));
  /* 24736c: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 247370: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 247374: str x19, [sp, #0x30] */
  arc_st64(((c)->sp + INT64_C(48)), ARC_X_R(c, 19));
  /* 247378: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 24737c: adrp x8, #0x265000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2510848)));
  /* 247380: add x8, x8, #0x738 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1848)));
  /* 247384: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 247388: tbz w8, #0, #0x2473cc */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_2473cc;
L_24738c:;
  /* 24738c: adrp x8, #0x265000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2510848)));
  /* 247390: add x9, sp, #0x10 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(16)));
  /* 247394: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 247398: ldr x8, [x8, #0x730] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(1840))));
  /* 24739c: sub x1, x29, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 2473a0: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* 2473a4: str d0, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), (c)->q[0].u64[0]);
  /* 2473a8: stur x9, [x29, #-8] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-8)), ARC_X_R(c, 9));
  /* 2473ac: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2388912));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 2473b0: ldrb w8, [x29, #0x18] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(24))));
  /* 2473b4: cmp x8, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(0));
  /* 2473b8: cset w0, ne */
  ARC_W_W(c, 0, (ARC_COND(c, 1) ? 1 : 0));
  /* 2473bc: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 2473c0: ldr x19, [sp, #0x30] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(48))));
  /* 2473c4: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 2473c8: ret  */
  return;
L_2473cc:;
  /* 2473cc: adrp x0, #0x265000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2510848)));
  /* 2473d0: add x0, x0, #0x738 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1848)));
  /* 2473d4: str d0, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), (c)->q[0].u64[0]);
  /* 2473d8: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2388956));
  fn2_24b710(c);
  /* 2473dc: ldr d0, [sp, #8] */
  arc_du_w(c, 0, arc_ld64(((c)->sp + INT64_C(8))));
  /* 2473e0: cbz w0, #0x24738c */
  if ((ARC_W_R(c, 0)) == 0) goto L_24738c;
  /* 2473e4: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 2473e8: adrp x1, #0x34000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(212992)));
  /* 2473ec: add x1, x1, #0xe66 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3686)));
  /* 2473f0: ldr x8, [x8, #0x800] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2048))));
  /* 2473f4: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 2473f8: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 2473fc: ldr x19, [x8] */
  ARC_X_W(c, 19, arc_ld64(ARC_X_R(c, 8)));
  /* 247400: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2388996));
  fn2_1b8fd4(c);
  /* 247404: mov w1, #0xe6ed */
  ARC_W_W(c, 1, UINT64_C(59117));
  /* 247408: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 24740c: movk w1, #0xd4bd, lsl #16 */
  ARC_W_W(c, 1, ((ARC_W_R(c, 1) & UINT64_C(18446744069414649855)) | UINT64_C(3569156096)));
  /* 247410: blr x19 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2389012));
  arc_dispatch(c, ARC_X_R(c, 19));
  /* 247414: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 247418: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 24741c: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2389024));
  fn2_1d2d24(c);
  /* 247420: adrp x0, #0x265000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2510848)));
  /* 247424: add x0, x0, #0x730 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1840)));
  /* 247428: str x19, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 19));
  }
  /* 24742c: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2389040));
  fn2_24b720(c);
  /* 247430: ldr d0, [sp, #8] */
  arc_du_w(c, 0, arc_ld64(((c)->sp + INT64_C(8))));
  /* 247434: b #0x24738c */
  goto L_24738c;
}

void fn2_248f60(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078251872));
  /* 248f60: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 248f64: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 248f68: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 248f6c: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 248f70: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 248f74: adrp x9, #0x265000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2510848)));
  /* 248f78: add x9, x9, #0x938 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(2360)));
  /* 248f7c: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 248f80: ldarb w9, [x9] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 9)));
  /* 248f84: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 248f88: mov x21, x8 */
  ARC_X_W(c, 21, ARC_X_R(c, 8));
  /* 248f8c: tbz w9, #0, #0x248fc4 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_248fc4;
L_248f90:;
  /* 248f90: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 248f94: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2396056));
  fn2_1bc084(c);
  /* 248f98: adrp x8, #0x265000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2510848)));
  /* 248f9c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 248fa0: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 248fa4: ldr x8, [x8, #0x930] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2352))));
  /* 248fa8: mov w2, w19 */
  ARC_W_W(c, 2, ARC_W_R(c, 19));
  /* 248fac: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2396080));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 248fb0: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 248fb4: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 248fb8: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 248fbc: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 248fc0: ret  */
  return;
L_248fc4:;
  /* 248fc4: adrp x0, #0x265000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2510848)));
  /* 248fc8: add x0, x0, #0x938 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2360)));
  /* 248fcc: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2396112));
  fn2_24b710(c);
  /* 248fd0: cbz w0, #0x248f90 */
  if ((ARC_W_R(c, 0)) == 0) goto L_248f90;
  /* 248fd4: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 248fd8: adrp x1, #0x1c000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(114688)));
  /* 248fdc: add x1, x1, #0x7dd */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2013)));
  /* 248fe0: ldr x8, [x8, #0x800] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2048))));
  /* 248fe4: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 248fe8: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 248fec: ldr x22, [x8] */
  ARC_X_W(c, 22, arc_ld64(ARC_X_R(c, 8)));
  /* 248ff0: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2396148));
  fn2_1b8fd4(c);
  /* 248ff4: mov w1, #0x2a0 */
  ARC_W_W(c, 1, UINT64_C(672));
  /* 248ff8: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 248ffc: movk w1, #0xe839, lsl #16 */
  ARC_W_W(c, 1, ((ARC_W_R(c, 1) & UINT64_C(18446744069414649855)) | UINT64_C(3896049664)));
  /* 249000: blr x22 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2396164));
  arc_dispatch(c, ARC_X_R(c, 22));
  /* 249004: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 249008: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 24900c: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2396176));
  fn2_1d2d24(c);
  /* 249010: adrp x0, #0x265000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2510848)));
  /* 249014: add x0, x0, #0x930 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2352)));
  /* 249018: str x22, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 22));
  }
  /* 24901c: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2396192));
  fn2_24b720(c);
  /* 249020: b #0x248f90 */
  goto L_248f90;
}

void fn2_24a944(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078258500));
  /* 24a944: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* 24a948: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 24a94c: str x21, [sp, #0x30] */
  arc_st64(((c)->sp + INT64_C(48)), ARC_X_R(c, 21));
  /* 24a950: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 24a954: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 24a958: adrp x9, #0x265000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2510848)));
  /* 24a95c: add x9, x9, #0xb38 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(2872)));
  /* 24a960: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 24a964: ldarb w9, [x9] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 9)));
  /* 24a968: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* 24a96c: tbz w9, #0, #0x24a9bc */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_24a9bc;
L_24a970:;
  /* 24a970: adrp x8, #0x265000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2510848)));
  /* 24a974: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 24a978: ldr x21, [x8, #0xb30] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 8) + INT64_C(2864))));
  /* 24a97c: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2402688));
  fn2_1bc084(c);
  /* 24a980: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 24a984: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 24a988: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* 24a98c: str x20, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 20));
  /* 24a990: blr x21 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2402708));
  arc_dispatch(c, ARC_X_R(c, 21));
  /* 24a994: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 24a998: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 24a99c: bl #0x1bc0b8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2402720));
  fn2_1bc0b8(c);
  /* 24a9a0: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 24a9a4: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2402728));
  fn2_1bc620(c);
  /* 24a9a8: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 24a9ac: ldr x21, [sp, #0x30] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(48))));
  /* 24a9b0: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 24a9b4: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* 24a9b8: ret  */
  return;
L_24a9bc:;
  /* 24a9bc: adrp x0, #0x265000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2510848)));
  /* 24a9c0: add x0, x0, #0xb38 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2872)));
  /* 24a9c4: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2402760));
  fn2_24b710(c);
  /* 24a9c8: cbz w0, #0x24a970 */
  if ((ARC_W_R(c, 0)) == 0) goto L_24a970;
  /* 24a9cc: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 24a9d0: adrp x1, #0x2b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(176128)));
  /* 24a9d4: add x1, x1, #0x3bd */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(957)));
  /* 24a9d8: ldr x8, [x8, #0x800] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2048))));
  /* 24a9dc: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 24a9e0: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 24a9e4: ldr x21, [x8] */
  ARC_X_W(c, 21, arc_ld64(ARC_X_R(c, 8)));
  /* 24a9e8: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2402796));
  fn2_1b8fd4(c);
  /* 24a9ec: mov w1, #0xf9fb */
  ARC_W_W(c, 1, UINT64_C(63995));
  /* 24a9f0: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 24a9f4: movk w1, #0x70bd, lsl #16 */
  ARC_W_W(c, 1, ((ARC_W_R(c, 1) & UINT64_C(18446744069414649855)) | UINT64_C(1891434496)));
  /* 24a9f8: blr x21 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2402812));
  arc_dispatch(c, ARC_X_R(c, 21));
  /* 24a9fc: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 24aa00: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 24aa04: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2402824));
  fn2_1d2d24(c);
  /* 24aa08: adrp x0, #0x265000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2510848)));
  /* 24aa0c: add x0, x0, #0xb30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2864)));
  /* 24aa10: str x21, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 21));
  }
  /* 24aa14: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2402840));
  fn2_24b720(c);
  /* 24aa18: b #0x24a970 */
  goto L_24a970;
}

void fn2_24b7c0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078262208));
  /* 24b7c0: adrp x16, #0x258000 */
  ARC_X_W(c, 16, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 24b7c4: ldr x17, [x16, #0xb28] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(2856))));
  /* 24b7c8: add x16, x16, #0xb28 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(2856)));
  /* 24b7cc: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
}

void fn2_22cff8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078137336));
L_22cff8:;
  /* 22cff8: adrp x9, #0x263000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 22cffc: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 22d000: b #0x24b6b0 */
  fn2_24b6b0(c); return;
  /* 22d004: mov x0, x9 */
  ARC_X_W(c, 0, ARC_X_R(c, 9));
  /* 22d008: bl #0x2029d0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2281484));
  fn2_2029d0(c);
  /* 22d00c: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 22d010: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 22d014: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 22d018: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 22d01c: ret  */
  return;
  /* 22d020: adrp x9, #0x263000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 22d024: add x9, x9, #0xd50 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(3408)));
  /* 22d028: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 22d02c: mov x0, x9 */
  ARC_X_W(c, 0, ARC_X_R(c, 9));
  /* 22d030: mov x20, x8 */
  ARC_X_W(c, 20, ARC_X_R(c, 8));
  /* 22d034: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2281528));
  fn2_24b710(c);
  /* 22d038: mov x8, x20 */
  ARC_X_W(c, 8, ARC_X_R(c, 20));
  /* 22d03c: mov w9, w0 */
  ARC_W_W(c, 9, ARC_W_R(c, 0));
  /* 22d040: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 22d044: cbz w9, #0x22cff8 */
  if ((ARC_W_R(c, 9)) == 0) goto L_22cff8;
  /* 22d048: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 22d04c: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 22d050: ldr x22, [x8] */
  ARC_X_W(c, 22, arc_ld64(ARC_X_R(c, 8)));
  /* 22d054: bl #0x22d668 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2281560));
  fn2_22d668(c);
  /* 22d058: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 22d05c: adrp x1, #0x25000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(151552)));
  /* 22d060: add x1, x1, #0xb6f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2927)));
  /* 22d064: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 22d068: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 22d06c: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2281584));
  fn2_1b8fd4(c);
  /* 22d070: mov w2, #0xd799 */
  ARC_W_W(c, 2, UINT64_C(55193));
  /* 22d074: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 22d078: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 22d07c: movk w2, #0xadc8, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(2915565568)));
  /* 22d080: blr x22 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2281604));
  arc_dispatch(c, ARC_X_R(c, 22));
  /* 22d084: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 22d088: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 22d08c: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2281616));
  fn2_1d2d24(c);
  /* 22d090: adrp x0, #0x263000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 22d094: add x0, x0, #0xd48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3400)));
  /* 22d098: str x21, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 21));
  }
  /* 22d09c: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2281632));
  fn2_24b720(c);
  /* 22d0a0: mov x8, x20 */
  ARC_X_W(c, 8, ARC_X_R(c, 20));
  /* 22d0a4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 22d0a8: b #0x22cff8 */
  goto L_22cff8;
}

