#include "lifted.h"

void fn1_9eecc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038578892));
  /* 9eecc: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 9eed0: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 9eed4: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 9eed8: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 9eedc: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 9eee0: and w8, w3, #0xf */
  ARC_W_W(c, 8, (ARC_W_R(c, 3) & UINT64_C(15)));
  /* 9eee4: ldr x19, [x1] */
  ARC_X_W(c, 19, arc_ld64(ARC_X_R(c, 1)));
  /* 9eee8: cmp w8, #3 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(3));
  /* 9eeec: b.le #0x9ef14 */
  if (ARC_COND(c, 13)) goto L_9ef14;
  /* 9eef0: cmp w8, #9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(9));
  /* 9eef4: b.le #0x9ef88 */
  if (ARC_COND(c, 13)) goto L_9ef88;
  /* 9eef8: cmp w8, #0xa */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(10));
  /* 9eefc: b.eq #0x9f058 */
  if (ARC_COND(c, 0)) goto L_9f058;
  /* 9ef00: cmp w8, #0xb */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(11));
  /* 9ef04: b.eq #0x9f078 */
  if (ARC_COND(c, 0)) goto L_9f078;
  /* 9ef08: cmp w8, #0xc */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(12));
  /* 9ef0c: b.eq #0x9f018 */
  if (ARC_COND(c, 0)) goto L_9f018;
  /* 9ef10: b #0x9f224 */
  goto L_9f224;
L_9ef14:;
  /* 9ef14: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* 9ef18: b.gt #0x9ef58 */
  if (ARC_COND(c, 12)) goto L_9ef58;
  /* 9ef1c: cbz w8, #0x9f018 */
  if ((ARC_W_R(c, 8)) == 0) goto L_9f018;
  /* 9ef20: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* 9ef24: b.ne #0x9f224 */
  if (ARC_COND(c, 1)) goto L_9f224;
  /* 9ef28: mov x0, x1 */
  ARC_X_W(c, 0, ARC_X_R(c, 1));
  /* 9ef2c: mov x1, x2 */
  ARC_X_W(c, 1, ARC_X_R(c, 2));
  /* 9ef30: mov w20, w3 */
  ARC_W_W(c, 20, ARC_W_R(c, 3));
  /* 9ef34: mov x21, x4 */
  ARC_X_W(c, 21, ARC_X_R(c, 4));
  /* 9ef38: bl #0x9f258 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(651068));
  fn1_9f258(c);
  /* 9ef3c: mov x4, x21 */
  ARC_X_W(c, 4, ARC_X_R(c, 21));
  /* 9ef40: mov w3, w20 */
  ARC_W_W(c, 3, ARC_W_R(c, 20));
  /* 9ef44: and w8, w20, #0xff */
  ARC_W_W(c, 8, (ARC_W_R(c, 20) & UINT64_C(255)));
  /* 9ef48: ubfx w8, w8, #4, #3 */
  ARC_W_W(c, 8, (((uint32_t)(ARC_W_R(c, 8)) >> 4) & UINT64_C(7)));
  /* 9ef4c: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* 9ef50: b.le #0x9f094 */
  if (ARC_COND(c, 13)) goto L_9f094;
  /* 9ef54: b #0x9f000 */
  goto L_9f000;
L_9ef58:;
  /* 9ef58: cmp w8, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(2));
  /* 9ef5c: b.eq #0x9f038 */
  if (ARC_COND(c, 0)) goto L_9f038;
  /* 9ef60: cmp w8, #3 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(3));
  /* 9ef64: b.ne #0x9f224 */
  if (ARC_COND(c, 1)) goto L_9f224;
  /* 9ef68: mov x8, x19 */
  ARC_X_W(c, 8, ARC_X_R(c, 19));
  /* 9ef6c: ldr w0, [x8], #4 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(4));
    ARC_W_W(c, 0, arc_ld32(_a));
  }
  /* 9ef70: str x8, [x1] */
  arc_st64(ARC_X_R(c, 1), ARC_X_R(c, 8));
  /* 9ef74: and w8, w3, #0xff */
  ARC_W_W(c, 8, (ARC_W_R(c, 3) & UINT64_C(255)));
  /* 9ef78: ubfx w8, w8, #4, #3 */
  ARC_W_W(c, 8, (((uint32_t)(ARC_W_R(c, 8)) >> 4) & UINT64_C(7)));
  /* 9ef7c: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* 9ef80: b.le #0x9f094 */
  if (ARC_COND(c, 13)) goto L_9f094;
  /* 9ef84: b #0x9f000 */
  goto L_9f000;
L_9ef88:;
  /* 9ef88: cmp w8, #4 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(4));
  /* 9ef8c: b.eq #0x9f018 */
  if (ARC_COND(c, 0)) goto L_9f018;
  /* 9ef90: cmp w8, #9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(9));
  /* 9ef94: b.ne #0x9f224 */
  if (ARC_COND(c, 1)) goto L_9f224;
  /* 9ef98: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* 9ef9c: mov x10, #-7 */
  ARC_X_W(c, 10, UINT64_C(18446744073709551609));
  /* 9efa0: mov x9, x19 */
  ARC_X_W(c, 9, ARC_X_R(c, 19));
  /* 9efa4: mov x11, x19 */
  ARC_X_W(c, 11, ARC_X_R(c, 19));
L_9efa8:;
  /* 9efa8: cmp x11, x2 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 2));
  /* 9efac: b.eq #0x9f0d4 */
  if (ARC_COND(c, 0)) goto L_9f0d4;
  /* 9efb0: ldrb w12, [x11], #1 */
  { const uint64_t _a = ARC_X_R(c, 11);
    ARC_X_W(c, 11, ARC_X_R(c, 11) + INT64_C(1));
    ARC_W_W(c, 12, arc_ld8(_a));
  }
  /* 9efb4: add x10, x10, #7 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(7)));
  /* 9efb8: add x9, x9, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(1)));
  /* 9efbc: and x13, x12, #0x7f */
  ARC_X_W(c, 13, (ARC_X_R(c, 12) & UINT64_C(127)));
  /* 9efc0: lsl x13, x13, x10 */
  ARC_X_W(c, 13, ((uint64_t)(ARC_X_R(c, 13)) << ((ARC_X_R(c, 10)) & 63)));
  /* 9efc4: orr x8, x13, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 13) | ARC_X_R(c, 8)));
  /* 9efc8: tbnz w12, #7, #0x9efa8 */
  if (((ARC_W_R(c, 12)) >> 7 & 1) != 0) goto L_9efa8;
  /* 9efcc: add w11, w10, #7 */
  ARC_W_W(c, 11, (ARC_W_R(c, 10) + UINT64_C(7)));
  /* 9efd0: mov x13, #-1 */
  ARC_X_W(c, 13, UINT64_C(18446744073709551615));
  /* 9efd4: cmp x10, #0x39 */
  (void)arc_sub64(c, ARC_X_R(c, 10), UINT64_C(57));
  /* 9efd8: mov w10, #0x3f */
  ARC_W_W(c, 10, UINT64_C(63));
  /* 9efdc: lsl x11, x13, x11 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 13)) << ((ARC_X_R(c, 11)) & 63)));
  /* 9efe0: str x9, [x1] */
  arc_st64(ARC_X_R(c, 1), ARC_X_R(c, 9));
  /* 9efe4: ccmp w12, w10, #0, lo */
  if (ARC_COND(c, 3)) { (void)arc_sub32(c, ARC_W_R(c, 12), ARC_W_R(c, 10)); }
  else { (c)->nf = 0; (c)->zf = 0;
          (c)->cf = 0; (c)->vf = 0; }
  /* 9efe8: csel x10, x11, xzr, hi */
  ARC_X_W(c, 10, (ARC_COND(c, 8) ? (ARC_X_R(c, 11)) : ARC_X_R(c, 31)));
  /* 9efec: orr x0, x8, x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 8) | ARC_X_R(c, 10)));
  /* 9eff0: and w8, w3, #0xff */
  ARC_W_W(c, 8, (ARC_W_R(c, 3) & UINT64_C(255)));
  /* 9eff4: ubfx w8, w8, #4, #3 */
  ARC_W_W(c, 8, (((uint32_t)(ARC_W_R(c, 8)) >> 4) & UINT64_C(7)));
  /* 9eff8: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* 9effc: b.le #0x9f094 */
  if (ARC_COND(c, 13)) goto L_9f094;
L_9f000:;
  /* 9f000: cmp w8, #3 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(3));
  /* 9f004: b.gt #0x9f108 */
  if (ARC_COND(c, 12)) goto L_9f108;
  /* 9f008: b.ne #0x9f14c */
  if (ARC_COND(c, 1)) goto L_9f14c;
  /* 9f00c: cbz x4, #0x9f1bc */
  if ((ARC_X_R(c, 4)) == 0) goto L_9f1bc;
  /* 9f010: add x0, x0, x4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + ARC_X_R(c, 4)));
  /* 9f014: b #0x9f0a4 */
  goto L_9f0a4;
L_9f018:;
  /* 9f018: mov x8, x19 */
  ARC_X_W(c, 8, ARC_X_R(c, 19));
  /* 9f01c: ldr x0, [x8], #8 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(8));
    ARC_X_W(c, 0, arc_ld64(_a));
  }
  /* 9f020: str x8, [x1] */
  arc_st64(ARC_X_R(c, 1), ARC_X_R(c, 8));
  /* 9f024: and w8, w3, #0xff */
  ARC_W_W(c, 8, (ARC_W_R(c, 3) & UINT64_C(255)));
  /* 9f028: ubfx w8, w8, #4, #3 */
  ARC_W_W(c, 8, (((uint32_t)(ARC_W_R(c, 8)) >> 4) & UINT64_C(7)));
  /* 9f02c: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* 9f030: b.le #0x9f094 */
  if (ARC_COND(c, 13)) goto L_9f094;
  /* 9f034: b #0x9f000 */
  goto L_9f000;
L_9f038:;
  /* 9f038: mov x8, x19 */
  ARC_X_W(c, 8, ARC_X_R(c, 19));
  /* 9f03c: ldrh w0, [x8], #2 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(2));
    ARC_W_W(c, 0, arc_ld16(_a));
  }
  /* 9f040: str x8, [x1] */
  arc_st64(ARC_X_R(c, 1), ARC_X_R(c, 8));
  /* 9f044: and w8, w3, #0xff */
  ARC_W_W(c, 8, (ARC_W_R(c, 3) & UINT64_C(255)));
  /* 9f048: ubfx w8, w8, #4, #3 */
  ARC_W_W(c, 8, (((uint32_t)(ARC_W_R(c, 8)) >> 4) & UINT64_C(7)));
  /* 9f04c: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* 9f050: b.le #0x9f094 */
  if (ARC_COND(c, 13)) goto L_9f094;
  /* 9f054: b #0x9f000 */
  goto L_9f000;
L_9f058:;
  /* 9f058: mov x8, x19 */
  ARC_X_W(c, 8, ARC_X_R(c, 19));
  /* 9f05c: ldrsh x0, [x8], #2 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(2));
    ARC_X_W(c, 0, ((int64_t)(int16_t)arc_ld16(_a)));
  }
  /* 9f060: str x8, [x1] */
  arc_st64(ARC_X_R(c, 1), ARC_X_R(c, 8));
  /* 9f064: and w8, w3, #0xff */
  ARC_W_W(c, 8, (ARC_W_R(c, 3) & UINT64_C(255)));
  /* 9f068: ubfx w8, w8, #4, #3 */
  ARC_W_W(c, 8, (((uint32_t)(ARC_W_R(c, 8)) >> 4) & UINT64_C(7)));
  /* 9f06c: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* 9f070: b.le #0x9f094 */
  if (ARC_COND(c, 13)) goto L_9f094;
  /* 9f074: b #0x9f000 */
  goto L_9f000;
L_9f078:;
  /* 9f078: mov x8, x19 */
  ARC_X_W(c, 8, ARC_X_R(c, 19));
  /* 9f07c: ldrsw x0, [x8], #4 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(4));
    ARC_X_W(c, 0, ((int64_t)(int32_t)arc_ld32(_a)));
  }
  /* 9f080: str x8, [x1] */
  arc_st64(ARC_X_R(c, 1), ARC_X_R(c, 8));
  /* 9f084: and w8, w3, #0xff */
  ARC_W_W(c, 8, (ARC_W_R(c, 3) & UINT64_C(255)));
  /* 9f088: ubfx w8, w8, #4, #3 */
  ARC_W_W(c, 8, (((uint32_t)(ARC_W_R(c, 8)) >> 4) & UINT64_C(7)));
  /* 9f08c: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* 9f090: b.gt #0x9f000 */
  if (ARC_COND(c, 12)) goto L_9f000;
L_9f094:;
  /* 9f094: cbz w8, #0x9f0a4 */
  if ((ARC_W_R(c, 8)) == 0) goto L_9f0a4;
  /* 9f098: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* 9f09c: b.ne #0x9f1f0 */
  if (ARC_COND(c, 1)) goto L_9f1f0;
  /* 9f0a0: add x0, x0, x19 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + ARC_X_R(c, 19)));
L_9f0a4:;
  /* 9f0a4: tbnz w3, #7, #0x9f0bc */
  if (((ARC_W_R(c, 3)) >> 7 & 1) != 0) goto L_9f0bc;
  /* 9f0a8: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 9f0ac: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 9f0b0: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 9f0b4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 9f0b8: ret  */
  return;
L_9f0bc:;
  /* 9f0bc: ldr x0, [x0] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 0)));
  /* 9f0c0: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 9f0c4: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 9f0c8: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 9f0cc: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 9f0d0: ret  */
  return;
L_9f0d4:;
  /* 9f0d4: adrp x19, #0x151000 */
  ARC_X_W(c, 19, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 9f0d8: nop  */
  /* nop: no architectural effect here */
  /* 9f0dc: adr x1, #0x4f83f */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(325695)));
  /* 9f0e0: ldr x19, [x19, #0x998] */
  ARC_X_W(c, 19, arc_ld64((ARC_X_R(c, 19) + INT64_C(2456))));
  /* 9f0e4: adrp x2, #0x51000 */
  ARC_X_W(c, 2, (arc_image_bases[1] + UINT64_C(331776)));
  /* 9f0e8: add x2, x2, #0x223 */
  ARC_X_W(c, 2, (ARC_X_R(c, 2) + UINT64_C(547)));
  /* 9f0ec: adrp x3, #0x50000 */
  ARC_X_W(c, 3, (arc_image_bases[1] + UINT64_C(327680)));
  /* 9f0f0: add x3, x3, #0x5e0 */
  ARC_X_W(c, 3, (ARC_X_R(c, 3) + UINT64_C(1504)));
  /* 9f0f4: add x0, x19, #0x130 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(304)));
  /* 9f0f8: bl #0x144a38 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(651516));
  fn1_144a38(c);
  /* 9f0fc: add x0, x19, #0x130 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(304)));
  /* 9f100: bl #0x143730 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(651524));
  fn1_143730(c);
  /* 9f104: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(651528));
  fn1_1427b8(c);
L_9f108:;
  /* 9f108: cmp w8, #4 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(4));
  /* 9f10c: b.eq #0x9f188 */
  if (ARC_COND(c, 0)) goto L_9f188;
  /* 9f110: cmp w8, #5 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(5));
  /* 9f114: b.ne #0x9f1f0 */
  if (ARC_COND(c, 1)) goto L_9f1f0;
  /* 9f118: adrp x19, #0x151000 */
  ARC_X_W(c, 19, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 9f11c: nop  */
  /* nop: no architectural effect here */
  /* 9f120: adr x1, #0x4f83f */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(325695)));
  /* 9f124: ldr x19, [x19, #0x998] */
  ARC_X_W(c, 19, arc_ld64((ARC_X_R(c, 19) + INT64_C(2456))));
  /* 9f128: adrp x2, #0x52000 */
  ARC_X_W(c, 2, (arc_image_bases[1] + UINT64_C(335872)));
  /* 9f12c: add x2, x2, #0x28d */
  ARC_X_W(c, 2, (ARC_X_R(c, 2) + UINT64_C(653)));
  /* 9f130: adrp x3, #0x50000 */
  ARC_X_W(c, 3, (arc_image_bases[1] + UINT64_C(327680)));
  /* 9f134: add x3, x3, #0xaa6 */
  ARC_X_W(c, 3, (ARC_X_R(c, 3) + UINT64_C(2726)));
  /* 9f138: add x0, x19, #0x130 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(304)));
  /* 9f13c: bl #0x144a38 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(651584));
  fn1_144a38(c);
  /* 9f140: add x0, x19, #0x130 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(304)));
  /* 9f144: bl #0x143730 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(651592));
  fn1_143730(c);
  /* 9f148: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(651596));
  fn1_1427b8(c);
L_9f14c:;
  /* 9f14c: cmp w8, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(2));
  /* 9f150: b.ne #0x9f1f0 */
  if (ARC_COND(c, 1)) goto L_9f1f0;
  /* 9f154: adrp x19, #0x151000 */
  ARC_X_W(c, 19, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 9f158: nop  */
  /* nop: no architectural effect here */
  /* 9f15c: adr x1, #0x4f83f */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(325695)));
  /* 9f160: ldr x19, [x19, #0x998] */
  ARC_X_W(c, 19, arc_ld64((ARC_X_R(c, 19) + INT64_C(2456))));
  /* 9f164: adrp x2, #0x52000 */
  ARC_X_W(c, 2, (arc_image_bases[1] + UINT64_C(335872)));
  /* 9f168: add x2, x2, #0x28d */
  ARC_X_W(c, 2, (ARC_X_R(c, 2) + UINT64_C(653)));
  /* 9f16c: adrp x3, #0x51000 */
  ARC_X_W(c, 3, (arc_image_bases[1] + UINT64_C(331776)));
  /* 9f170: add x3, x3, #0x60b */
  ARC_X_W(c, 3, (ARC_X_R(c, 3) + UINT64_C(1547)));
  /* 9f174: add x0, x19, #0x130 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(304)));
  /* 9f178: bl #0x144a38 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(651644));
  fn1_144a38(c);
  /* 9f17c: add x0, x19, #0x130 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(304)));
  /* 9f180: bl #0x143730 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(651652));
  fn1_143730(c);
  /* 9f184: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(651656));
  fn1_1427b8(c);
L_9f188:;
  /* 9f188: adrp x19, #0x151000 */
  ARC_X_W(c, 19, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 9f18c: nop  */
  /* nop: no architectural effect here */
  /* 9f190: adr x1, #0x4f83f */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(325695)));
  /* 9f194: ldr x19, [x19, #0x998] */
  ARC_X_W(c, 19, arc_ld64((ARC_X_R(c, 19) + INT64_C(2456))));
  /* 9f198: adrp x2, #0x52000 */
  ARC_X_W(c, 2, (arc_image_bases[1] + UINT64_C(335872)));
  /* 9f19c: add x2, x2, #0x28d */
  ARC_X_W(c, 2, (ARC_X_R(c, 2) + UINT64_C(653)));
  /* 9f1a0: adrp x3, #0x4f000 */
  ARC_X_W(c, 3, (arc_image_bases[1] + UINT64_C(323584)));
  /* 9f1a4: add x3, x3, #0x853 */
  ARC_X_W(c, 3, (ARC_X_R(c, 3) + UINT64_C(2131)));
  /* 9f1a8: add x0, x19, #0x130 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(304)));
  /* 9f1ac: bl #0x144a38 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(651696));
  fn1_144a38(c);
  /* 9f1b0: add x0, x19, #0x130 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(304)));
  /* 9f1b4: bl #0x143730 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(651704));
  fn1_143730(c);
  /* 9f1b8: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(651708));
  fn1_1427b8(c);
L_9f1bc:;
  /* 9f1bc: adrp x19, #0x151000 */
  ARC_X_W(c, 19, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 9f1c0: nop  */
  /* nop: no architectural effect here */
  /* 9f1c4: adr x1, #0x4f83f */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(325695)));
  /* 9f1c8: ldr x19, [x19, #0x998] */
  ARC_X_W(c, 19, arc_ld64((ARC_X_R(c, 19) + INT64_C(2456))));
  /* 9f1cc: adrp x2, #0x52000 */
  ARC_X_W(c, 2, (arc_image_bases[1] + UINT64_C(335872)));
  /* 9f1d0: add x2, x2, #0x28d */
  ARC_X_W(c, 2, (ARC_X_R(c, 2) + UINT64_C(653)));
  /* 9f1d4: adrp x3, #0x51000 */
  ARC_X_W(c, 3, (arc_image_bases[1] + UINT64_C(331776)));
  /* 9f1d8: add x3, x3, #0x92c */
  ARC_X_W(c, 3, (ARC_X_R(c, 3) + UINT64_C(2348)));
  /* 9f1dc: add x0, x19, #0x130 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(304)));
  /* 9f1e0: bl #0x144a38 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(651748));
  fn1_144a38(c);
  /* 9f1e4: add x0, x19, #0x130 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(304)));
  /* 9f1e8: bl #0x143730 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(651756));
  fn1_143730(c);
  /* 9f1ec: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(651760));
  fn1_1427b8(c);
L_9f1f0:;
  /* 9f1f0: adrp x19, #0x151000 */
  ARC_X_W(c, 19, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 9f1f4: nop  */
  /* nop: no architectural effect here */
  /* 9f1f8: adr x1, #0x4f83f */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(325695)));
  /* 9f1fc: ldr x19, [x19, #0x998] */
  ARC_X_W(c, 19, arc_ld64((ARC_X_R(c, 19) + INT64_C(2456))));
  /* 9f200: adrp x2, #0x52000 */
  ARC_X_W(c, 2, (arc_image_bases[1] + UINT64_C(335872)));
  /* 9f204: add x2, x2, #0x28d */
  ARC_X_W(c, 2, (ARC_X_R(c, 2) + UINT64_C(653)));
  /* 9f208: adrp x3, #0x51000 */
  ARC_X_W(c, 3, (arc_image_bases[1] + UINT64_C(331776)));
  /* 9f20c: add x3, x3, #0x20a */
  ARC_X_W(c, 3, (ARC_X_R(c, 3) + UINT64_C(522)));
  /* 9f210: add x0, x19, #0x130 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(304)));
  /* 9f214: bl #0x144a38 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(651800));
  fn1_144a38(c);
  /* 9f218: add x0, x19, #0x130 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(304)));
  /* 9f21c: bl #0x143730 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(651808));
  fn1_143730(c);
  /* 9f220: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(651812));
  fn1_1427b8(c);
L_9f224:;
  /* 9f224: adrp x19, #0x151000 */
  ARC_X_W(c, 19, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 9f228: nop  */
  /* nop: no architectural effect here */
  /* 9f22c: adr x1, #0x4f83f */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(325695)));
  /* 9f230: ldr x19, [x19, #0x998] */
  ARC_X_W(c, 19, arc_ld64((ARC_X_R(c, 19) + INT64_C(2456))));
  /* 9f234: adrp x2, #0x52000 */
  ARC_X_W(c, 2, (arc_image_bases[1] + UINT64_C(335872)));
  /* 9f238: add x2, x2, #0x28d */
  ARC_X_W(c, 2, (ARC_X_R(c, 2) + UINT64_C(653)));
  /* 9f23c: adrp x3, #0x51000 */
  ARC_X_W(c, 3, (arc_image_bases[1] + UINT64_C(331776)));
  /* 9f240: add x3, x3, #0x20a */
  ARC_X_W(c, 3, (ARC_X_R(c, 3) + UINT64_C(522)));
  /* 9f244: add x0, x19, #0x130 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(304)));
  /* 9f248: bl #0x144a38 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(651852));
  fn1_144a38(c);
  /* 9f24c: add x0, x19, #0x130 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(304)));
  /* 9f250: bl #0x143730 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(651860));
  fn1_143730(c);
  /* 9f254: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(651864));
  fn1_1427b8(c);
}

void fn1_a2060(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038591584));
  /* a2060: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* a2064: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* a2068: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* a206c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* a2070: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* a2074: ldr x8, [x8, #0x908] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2312))));
  /* a2078: ldr x19, [x0, #8] */
  ARC_X_W(c, 19, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* a207c: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* a2080: sub x1, x19, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 19) - UINT64_C(8)));
  /* a2084: str x8, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* a2088: mov w0, #-1 */
  ARC_W_W(c, 0, UINT64_C(18446744073709551615));
  /* a208c: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(663696));
  fn1_a2030(c);
  /* a2090: cmp w0, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(1));
  /* a2094: b.mi #0xa20a8 */
  if (ARC_COND(c, 4)) goto L_a20a8;
  /* a2098: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* a209c: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* a20a0: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* a20a4: ret  */
  return;
L_a20a8:;
  /* a20a8: sub x0, x19, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) - UINT64_C(24)));
  /* a20ac: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* a20b0: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* a20b4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* a20b8: b #0x1426f8 */
  fn1_1426f8(c); return;
}

void fn1_a5170(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038604144));
  /* a5170: bti c */
  /* bti: no architectural effect here */
  /* a5174: mov x8, x0 */
  ARC_X_W(c, 8, ARC_X_R(c, 0));
  /* a5178: ldr x0, [x0] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 0)));
  /* a517c: ldr x9, [x8, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(8))));
  /* a5180: mov x10, x0 */
  ARC_X_W(c, 10, ARC_X_R(c, 0));
  /* a5184: tbz w1, #0, #0xa51ac */
  if (((ARC_W_R(c, 1)) >> 0 & 1) == 0) goto L_a51ac;
  /* a5188: cmp x0, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 9));
  /* a518c: mov x10, x0 */
  ARC_X_W(c, 10, ARC_X_R(c, 0));
  /* a5190: b.eq #0xa51ac */
  if (ARC_COND(c, 0)) goto L_a51ac;
  /* a5194: ldrb w10, [x0] */
  ARC_W_W(c, 10, arc_ld8(ARC_X_R(c, 0)));
  /* a5198: cmp w10, #0x6e */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(110));
  /* a519c: mov x10, x0 */
  ARC_X_W(c, 10, ARC_X_R(c, 0));
  /* a51a0: b.ne #0xa51ac */
  if (ARC_COND(c, 1)) goto L_a51ac;
  /* a51a4: add x10, x0, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 0) + UINT64_C(1)));
  /* a51a8: str x10, [x8] */
  arc_st64(ARC_X_R(c, 8), ARC_X_R(c, 10));
L_a51ac:;
  /* a51ac: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* a51b0: b.eq #0xa51c4 */
  if (ARC_COND(c, 0)) goto L_a51c4;
  /* a51b4: ldrb w11, [x10] */
  ARC_W_W(c, 11, arc_ld8(ARC_X_R(c, 10)));
  /* a51b8: sub w11, w11, #0x3a */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) - UINT64_C(58)));
  /* a51bc: cmn w11, #0xa */
  (void)arc_add32(c, ARC_W_R(c, 11), UINT64_C(10), 0);
  /* a51c0: b.hs #0xa51d0 */
  if (ARC_COND(c, 2)) goto L_a51d0;
L_a51c4:;
  /* a51c4: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
  /* a51c8: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* a51cc: ret  */
  return;
L_a51d0:;
  /* a51d0: ldrb w11, [x10] */
  ARC_W_W(c, 11, arc_ld8(ARC_X_R(c, 10)));
  /* a51d4: sub w11, w11, #0x3a */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) - UINT64_C(58)));
  /* a51d8: cmn w11, #0xa */
  (void)arc_add32(c, ARC_W_R(c, 11), UINT64_C(10), 0);
  /* a51dc: b.lo #0xa51f4 */
  if (ARC_COND(c, 3)) goto L_a51f4;
  /* a51e0: add x10, x10, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(1)));
  /* a51e4: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* a51e8: str x10, [x8] */
  arc_st64(ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* a51ec: b.ne #0xa51d0 */
  if (ARC_COND(c, 1)) goto L_a51d0;
  /* a51f0: mov x10, x9 */
  ARC_X_W(c, 10, ARC_X_R(c, 9));
L_a51f4:;
  /* a51f4: sub x1, x10, x0 */
  ARC_X_W(c, 1, (ARC_X_R(c, 10) - ARC_X_R(c, 0)));
  /* a51f8: ret  */
  return;
}

void fn1_abd70(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038631792));
  /* abd70: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* abd74: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* abd78: stp x24, x23, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* abd7c: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* abd80: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* abd84: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* abd88: ldr x24, [x0, #0x1330] */
  ARC_X_W(c, 24, arc_ld64((ARC_X_R(c, 0) + INT64_C(4912))));
  /* abd8c: mov x21, x4 */
  ARC_X_W(c, 21, ARC_X_R(c, 4));
  /* abd90: mov x19, x3 */
  ARC_X_W(c, 19, ARC_X_R(c, 3));
  /* abd94: mov x20, x2 */
  ARC_X_W(c, 20, ARC_X_R(c, 2));
  /* abd98: mov x22, x1 */
  ARC_X_W(c, 22, ARC_X_R(c, 1));
  /* abd9c: ldr x8, [x24, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 24) + INT64_C(8))));
  /* abda0: sub x9, x8, #0xfc0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4032)));
  /* abda4: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* abda8: b.hi #0xabdcc */
  if (ARC_COND(c, 8)) goto L_abdcc;
  /* abdac: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* abdb0: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* abdb4: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(703928));
  fn1_1428a8(c);
  /* abdb8: cbz x0, #0xabe38 */
  if ((ARC_X_R(c, 0)) == 0) goto L_abe38;
  /* abdbc: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* abdc0: stp x24, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* abdc4: mov x24, x0 */
  ARC_X_W(c, 24, ARC_X_R(c, 0));
  /* abdc8: str x0, [x23, #0x1330] */
  arc_st64((ARC_X_R(c, 23) + INT64_C(4912)), ARC_X_R(c, 0));
L_abdcc:;
  /* abdcc: add x9, x8, #0x30 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(48)));
  /* abdd0: add x0, x24, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 24) + ARC_X_R(c, 8)));
  /* abdd4: ldr x8, [x22] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 22)));
  /* abdd8: str x9, [x24, #8] */
  arc_st64((ARC_X_R(c, 24) + INT64_C(8)), ARC_X_R(c, 9));
  /* abddc: adrp x9, #0x14a000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1351680)));
  /* abde0: add x9, x9, #0x4b0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(1200)));
  /* abde4: str x9, [x0, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 9));
  }
  /* abde8: ldurh w9, [x0, #9] */
  ARC_W_W(c, 9, arc_ld16((ARC_X_R(c, 0) + INT64_C(9))));
  /* abdec: ldrh w11, [x21] */
  ARC_W_W(c, 11, arc_ld16(ARC_X_R(c, 21)));
  /* abdf0: mov w10, #0x3f */
  ARC_W_W(c, 10, UINT64_C(63));
  /* abdf4: str x8, [x0, #0x10] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(16)), ARC_X_R(c, 8));
  /* abdf8: and w8, w9, #0xf000 */
  ARC_W_W(c, 8, (ARC_W_R(c, 9) & UINT64_C(61440)));
  /* abdfc: strb w10, [x0, #8] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 10));
  /* abe00: mov w9, #0x540 */
  ARC_W_W(c, 9, UINT64_C(1344));
  /* abe04: bfxil w8, w11, #0, #6 */
  ARC_W_W(c, 8, (((uint32_t)(ARC_W_R(c, 8)) & UINT64_C(4294967232)) | ((((uint32_t)(ARC_W_R(c, 11))) >> 0) & UINT64_C(63))));
  /* abe08: ldr q0, [x20] */
  arc_q_w(c, 0, arc_ld64(ARC_X_R(c, 20)), arc_ld64(ARC_X_R(c, 20) + 8));
  /* abe0c: ldrb w10, [x19] */
  ARC_W_W(c, 10, arc_ld8(ARC_X_R(c, 19)));
  /* abe10: orr w8, w8, w9 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | ARC_W_R(c, 9)));
  /* abe14: stur q0, [x0, #0x18] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(24)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 0) + INT64_C(24)) + 8, (c)->q[0].u64[1]);
  /* abe18: sturh w8, [x0, #9] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(9)), ARC_W_R(c, 8));
  /* abe1c: strb w10, [x0, #0x28] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(40)), ARC_W_R(c, 10));
  /* abe20: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* abe24: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* abe28: ldp x24, x23, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* abe2c: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* abe30: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* abe34: ret  */
  return;
L_abe38:;
  /* abe38: bl #0x142488 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(704060));
  fn1_142488(c);
}

void fn1_b22ec(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038657772));
  /* b22ec: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* b22f0: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b22f4: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* b22f8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* b22fc: ldp x9, x10, [x1, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 1) + INT64_C(8));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* b2300: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* b2304: ldr x8, [x1] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 1)));
  /* b2308: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* b230c: add x11, x9, #2 */
  ARC_X_W(c, 11, (ARC_X_R(c, 9) + UINT64_C(2)));
  /* b2310: cmp x11, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 10));
  /* b2314: b.ls #0xb2344 */
  if (ARC_COND(c, 9)) goto L_b2344;
  /* b2318: lsl x10, x10, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* b231c: add x9, x9, #0x3e2 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(994)));
  /* b2320: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* b2324: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* b2328: csel x1, x10, x9, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* b232c: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b2330: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(729908));
  fn1_142878(c);
  /* b2334: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b2338: cbz x0, #0xb23f0 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b23f0;
  /* b233c: ldr x9, [x19, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b2340: mov x8, x0 */
  ARC_X_W(c, 8, ARC_X_R(c, 0));
L_b2344:;
  /* b2344: mov w10, #0x3c22 */
  ARC_W_W(c, 10, UINT64_C(15394));
  /* b2348: strh w10, [x8, x9] */
  arc_st16((ARC_X_R(c, 8) + ARC_X_R(c, 9)), ARC_W_R(c, 10));
  /* b234c: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* b2350: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b2354: ldr x20, [x20, #0x10] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 20) + INT64_C(16))));
  /* b2358: add x8, x8, #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2)));
  /* b235c: ldr x9, [x20] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 20)));
  /* b2360: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* b2364: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
  /* b2368: ldr x8, [x9, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(32))));
  /* b236c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(729968));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* b2370: ldurh w8, [x20, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 20) + INT64_C(9))));
  /* b2374: and w8, w8, #0xc0 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(192)));
  /* b2378: cmp w8, #0x40 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(64));
  /* b237c: b.eq #0xb2394 */
  if (ARC_COND(c, 0)) goto L_b2394;
  /* b2380: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* b2384: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* b2388: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* b238c: ldr x8, [x8, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* b2390: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(730004));
  arc_dispatch(c, ARC_X_R(c, 8));
L_b2394:;
  /* b2394: ldp x8, x9, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* b2398: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* b239c: add x10, x8, #2 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(2)));
  /* b23a0: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* b23a4: b.ls #0xb23cc */
  if (ARC_COND(c, 9)) goto L_b23cc;
  /* b23a8: lsl x9, x9, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) << ((UINT64_C(1)) & 63)));
  /* b23ac: add x8, x8, #0x3e2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(994)));
  /* b23b0: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* b23b4: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* b23b8: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b23bc: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(730048));
  fn1_142878(c);
  /* b23c0: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b23c4: cbz x0, #0xb23f4 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b23f4;
  /* b23c8: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
L_b23cc:;
  /* b23cc: mov w9, #0x223e */
  ARC_W_W(c, 9, UINT64_C(8766));
  /* b23d0: strh w9, [x0, x8] */
  arc_st16((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
  /* b23d4: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b23d8: add x8, x8, #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2)));
  /* b23dc: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
  /* b23e0: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* b23e4: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b23e8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* b23ec: ret  */
  return;
L_b23f0:;
  /* b23f0: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(730100));
  fn1_1427b8(c);
L_b23f4:;
  /* b23f4: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(730104));
  fn1_1427b8(c);
}

void fn1_b62fc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038674172));
  /* b62fc: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* b6300: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b6304: stp x24, x23, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* b6308: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* b630c: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* b6310: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* b6314: ldp x8, x9, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* b6318: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* b631c: b.eq #0xb6384 */
  if (ARC_COND(c, 0)) goto L_b6384;
  /* b6320: ldrb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* b6324: cmp w8, #0x44 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(68));
  /* b6328: b.eq #0xb639c */
  if (ARC_COND(c, 0)) goto L_b639c;
  /* b632c: cmp w8, #0x54 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(84));
  /* b6330: b.ne #0xb6384 */
  if (ARC_COND(c, 1)) goto L_b6384;
  /* b6334: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* b6338: bl #0xa94fc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(746300));
  fn1_a94fc(c);
  /* b633c: cbz x0, #0xb6438 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b6438;
  /* b6340: ldp x21, x9, [x23, #0x130] */
  { const uint64_t _pa = (ARC_X_R(c, 23) + INT64_C(304));
    ARC_X_W(c, 21, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* b6344: mov x8, x23 */
  ARC_X_W(c, 8, ARC_X_R(c, 23));
  /* b6348: cmp x21, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 9));
  /* b634c: b.ne #0xb6430 */
  if (ARC_COND(c, 1)) goto L_b6430;
  /* b6350: ldr x20, [x8, #0x128] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 8) + INT64_C(296))));
  /* b6354: add x24, x8, #0x140 */
  ARC_X_W(c, 24, (ARC_X_R(c, 8) + UINT64_C(320)));
  /* b6358: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* b635c: sub x19, x21, x20 */
  ARC_X_W(c, 19, (ARC_X_R(c, 21) - ARC_X_R(c, 20)));
  /* b6360: cmp x20, x24 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 24));
  /* b6364: lsl x1, x19, #1 */
  ARC_X_W(c, 1, ((uint64_t)(ARC_X_R(c, 19)) << ((UINT64_C(1)) & 63)));
  /* b6368: b.eq #0xb63ec */
  if (ARC_COND(c, 0)) goto L_b63ec;
  /* b636c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* b6370: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(746356));
  fn1_142878(c);
  /* b6374: mov x8, x23 */
  ARC_X_W(c, 8, ARC_X_R(c, 23));
  /* b6378: str x0, [x23, #0x128] */
  arc_st64((ARC_X_R(c, 23) + INT64_C(296)), ARC_X_R(c, 0));
  /* b637c: cbnz x0, #0xb641c */
  if ((ARC_X_R(c, 0)) != 0) goto L_b641c;
  /* b6380: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(746372));
  fn1_1427b8(c);
L_b6384:;
  /* b6384: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* b6388: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* b638c: ldp x24, x23, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* b6390: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b6394: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* b6398: b #0xa99c0 */
  fn1_a99c0(c); return;
L_b639c:;
  /* b639c: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* b63a0: bl #0xa9898 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(746404));
  fn1_a9898(c);
  /* b63a4: cbz x0, #0xb6438 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b6438;
  /* b63a8: ldp x21, x9, [x23, #0x130] */
  { const uint64_t _pa = (ARC_X_R(c, 23) + INT64_C(304));
    ARC_X_W(c, 21, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* b63ac: mov x8, x23 */
  ARC_X_W(c, 8, ARC_X_R(c, 23));
  /* b63b0: cmp x21, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 9));
  /* b63b4: b.ne #0xb6430 */
  if (ARC_COND(c, 1)) goto L_b6430;
  /* b63b8: ldr x20, [x8, #0x128] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 8) + INT64_C(296))));
  /* b63bc: add x8, x8, #0x140 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(320)));
  /* b63c0: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* b63c4: sub x19, x21, x20 */
  ARC_X_W(c, 19, (ARC_X_R(c, 21) - ARC_X_R(c, 20)));
  /* b63c8: cmp x20, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 8));
  /* b63cc: lsl x1, x19, #1 */
  ARC_X_W(c, 1, ((uint64_t)(ARC_X_R(c, 19)) << ((UINT64_C(1)) & 63)));
  /* b63d0: b.eq #0xb6450 */
  if (ARC_COND(c, 0)) goto L_b6450;
  /* b63d4: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* b63d8: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(746460));
  fn1_142878(c);
  /* b63dc: mov x8, x23 */
  ARC_X_W(c, 8, ARC_X_R(c, 23));
  /* b63e0: str x0, [x23, #0x128] */
  arc_st64((ARC_X_R(c, 23) + INT64_C(296)), ARC_X_R(c, 0));
  /* b63e4: cbnz x0, #0xb641c */
  if ((ARC_X_R(c, 0)) != 0) goto L_b641c;
  /* b63e8: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(746476));
  fn1_1427b8(c);
L_b63ec:;
  /* b63ec: mov x0, x1 */
  ARC_X_W(c, 0, ARC_X_R(c, 1));
  /* b63f0: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(746484));
  fn1_1428a8(c);
  /* b63f4: cbz x0, #0xb6468 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b6468;
  /* b63f8: cmp x21, x24 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 24));
  /* b63fc: b.eq #0xb6414 */
  if (ARC_COND(c, 0)) goto L_b6414;
L_b6400:;
  /* b6400: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* b6404: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* b6408: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* b640c: bl #0x1449f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(746512));
  fn1_1449f0(c);
  /* b6410: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
L_b6414:;
  /* b6414: mov x8, x23 */
  ARC_X_W(c, 8, ARC_X_R(c, 23));
  /* b6418: str x0, [x23, #0x128] */
  arc_st64((ARC_X_R(c, 23) + INT64_C(296)), ARC_X_R(c, 0));
L_b641c:;
  /* b641c: asr x9, x19, #2 */
  ARC_X_W(c, 9, ((uint64_t)((int64_t)(ARC_X_R(c, 19)) >> ((UINT64_C(2)) & 63))));
  /* b6420: add x21, x0, x19 */
  ARC_X_W(c, 21, (ARC_X_R(c, 0) + ARC_X_R(c, 19)));
  /* b6424: add x9, x0, x9, lsl #3 */
  ARC_X_W(c, 9, (ARC_X_R(c, 0) + ((uint64_t)(ARC_X_R(c, 9)) << 3)));
  /* b6428: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* b642c: str x9, [x8, #0x138] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(312)), ARC_X_R(c, 9));
L_b6430:;
  /* b6430: str x0, [x21], #8 */
  { const uint64_t _a = ARC_X_R(c, 21);
    ARC_X_W(c, 21, ARC_X_R(c, 21) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 0));
  }
  /* b6434: str x21, [x8, #0x130] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(304)), ARC_X_R(c, 21));
L_b6438:;
  /* b6438: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* b643c: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* b6440: ldp x24, x23, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* b6444: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b6448: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* b644c: ret  */
  return;
L_b6450:;
  /* b6450: mov x0, x1 */
  ARC_X_W(c, 0, ARC_X_R(c, 1));
  /* b6454: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(746584));
  fn1_1428a8(c);
  /* b6458: cbz x0, #0xb646c */
  if ((ARC_X_R(c, 0)) == 0) goto L_b646c;
  /* b645c: cmp x21, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 20));
  /* b6460: b.ne #0xb6400 */
  if (ARC_COND(c, 1)) goto L_b6400;
  /* b6464: b #0xb6414 */
  goto L_b6414;
L_b6468:;
  /* b6468: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(746604));
  fn1_1427b8(c);
L_b646c:;
  /* b646c: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(746608));
  fn1_1427b8(c);
}

void fn1_b8750(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038683472));
  /* b8750: bti c */
  /* bti: no architectural effect here */
  /* b8754: mov w1, #0x18 */
  ARC_W_W(c, 1, UINT64_C(24));
  /* b8758: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_bbf44(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038697796));
  /* bbf44: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* bbf48: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* bbf4c: stp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* bbf50: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* bbf54: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* bbf58: ldr x22, [x0, #0x1330] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 0) + INT64_C(4912))));
  /* bbf5c: mov x19, x2 */
  ARC_X_W(c, 19, ARC_X_R(c, 2));
  /* bbf60: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* bbf64: ldr x8, [x22, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 22) + INT64_C(8))));
  /* bbf68: sub x9, x8, #0xfd0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4048)));
  /* bbf6c: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* bbf70: b.hi #0xbbf94 */
  if (ARC_COND(c, 8)) goto L_bbf94;
  /* bbf74: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* bbf78: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* bbf7c: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(769920));
  fn1_1428a8(c);
  /* bbf80: cbz x0, #0xbbfe4 */
  if ((ARC_X_R(c, 0)) == 0) goto L_bbfe4;
  /* bbf84: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* bbf88: stp x22, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* bbf8c: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* bbf90: str x0, [x21, #0x1330] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(4912)), ARC_X_R(c, 0));
L_bbf94:;
  /* bbf94: add x9, x8, #0x20 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(32)));
  /* bbf98: add x0, x22, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 22) + ARC_X_R(c, 8)));
  /* bbf9c: adrp x8, #0x14c000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1359872)));
  /* bbfa0: add x8, x8, #0x5f8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1528)));
  /* bbfa4: str x9, [x22, #8] */
  arc_st64((ARC_X_R(c, 22) + INT64_C(8)), ARC_X_R(c, 9));
  /* bbfa8: mov w9, #0xf */
  ARC_W_W(c, 9, UINT64_C(15));
  /* bbfac: str x8, [x0, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* bbfb0: ldurh w8, [x0, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 0) + INT64_C(9))));
  /* bbfb4: ldr x10, [x20] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 20)));
  /* bbfb8: strb w9, [x0, #8] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 9));
  /* bbfbc: ldr x9, [x19] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 19)));
  /* bbfc0: and w8, w8, #0xf000 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(61440)));
  /* bbfc4: orr w8, w8, #0x400 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | UINT64_C(1024)));
  /* bbfc8: sturh w8, [x0, #9] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(9)), ARC_W_R(c, 8));
  /* bbfcc: stp x10, x9, [x0, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 10));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* bbfd0: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* bbfd4: ldp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* bbfd8: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* bbfdc: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* bbfe0: ret  */
  return;
L_bbfe4:;
  /* bbfe4: bl #0x142488 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(770024));
  fn1_142488(c);
}

void fn1_bed70(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038709616));
  /* bed70: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* bed74: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* bed78: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* bed7c: and w10, w1, #0xff */
  ARC_W_W(c, 10, (ARC_W_R(c, 1) & UINT64_C(255)));
  /* bed80: cmp w10, #0xff */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(255));
  /* bed84: b.eq #0xbedbc */
  if (ARC_COND(c, 0)) goto L_bedbc;
  /* bed88: and w8, w10, #0xf */
  ARC_W_W(c, 8, (ARC_W_R(c, 10) & UINT64_C(15)));
  /* bed8c: ldr x9, [x0] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 0)));
  /* bed90: cmp w8, #3 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(3));
  /* bed94: b.le #0xbedc4 */
  if (ARC_COND(c, 13)) goto L_bedc4;
  /* bed98: cmp w8, #9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(9));
  /* bed9c: b.le #0xbee24 */
  if (ARC_COND(c, 13)) goto L_bee24;
  /* beda0: cmp w8, #0xa */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(10));
  /* beda4: b.eq #0xbeea8 */
  if (ARC_COND(c, 0)) goto L_beea8;
  /* beda8: cmp w8, #0xb */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(11));
  /* bedac: b.eq #0xbeefc */
  if (ARC_COND(c, 0)) goto L_beefc;
  /* bedb0: cmp w8, #0xc */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(12));
  /* bedb4: b.eq #0xbee80 */
  if (ARC_COND(c, 0)) goto L_bee80;
  /* bedb8: b #0xbef14 */
  goto L_bef14;
L_bedbc:;
  /* bedbc: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* bedc0: b #0xbeeec */
  goto L_beeec;
L_bedc4:;
  /* bedc4: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* bedc8: b.gt #0xbee00 */
  if (ARC_COND(c, 12)) goto L_bee00;
  /* bedcc: cbz w8, #0xbee80 */
  if ((ARC_W_R(c, 8)) == 0) goto L_bee80;
  /* bedd0: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* bedd4: b.ne #0xbef14 */
  if (ARC_COND(c, 1)) goto L_bef14;
  /* bedd8: mov x12, xzr */
  ARC_X_W(c, 12, ARC_X_R(c, 31));
  /* beddc: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* bede0: mov x11, x9 */
  ARC_X_W(c, 11, ARC_X_R(c, 9));
L_bede4:;
  /* bede4: ldrb w13, [x11], #1 */
  { const uint64_t _a = ARC_X_R(c, 11);
    ARC_X_W(c, 11, ARC_X_R(c, 11) + INT64_C(1));
    ARC_W_W(c, 13, arc_ld8(_a));
  }
  /* bede8: and x14, x13, #0x7f */
  ARC_X_W(c, 14, (ARC_X_R(c, 13) & UINT64_C(127)));
  /* bedec: lsl x14, x14, x12 */
  ARC_X_W(c, 14, ((uint64_t)(ARC_X_R(c, 14)) << ((ARC_X_R(c, 12)) & 63)));
  /* bedf0: add x12, x12, #7 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) + UINT64_C(7)));
  /* bedf4: orr x8, x14, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 14) | ARC_X_R(c, 8)));
  /* bedf8: tbnz w13, #7, #0xbede4 */
  if (((ARC_W_R(c, 13)) >> 7 & 1) != 0) goto L_bede4;
  /* bedfc: b #0xbeeb0 */
  goto L_beeb0;
L_bee00:;
  /* bee00: cmp w8, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(2));
  /* bee04: b.eq #0xbee94 */
  if (ARC_COND(c, 0)) goto L_bee94;
  /* bee08: cmp w8, #3 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(3));
  /* bee0c: b.ne #0xbef14 */
  if (ARC_COND(c, 1)) goto L_bef14;
  /* bee10: mov x11, x9 */
  ARC_X_W(c, 11, ARC_X_R(c, 9));
  /* bee14: ldr w8, [x11], #4 */
  { const uint64_t _a = ARC_X_R(c, 11);
    ARC_X_W(c, 11, ARC_X_R(c, 11) + INT64_C(4));
    ARC_W_W(c, 8, arc_ld32(_a));
  }
  /* bee18: ubfx w10, w10, #4, #3 */
  ARC_W_W(c, 10, (((uint32_t)(ARC_W_R(c, 10)) >> 4) & UINT64_C(7)));
  /* bee1c: cbnz w10, #0xbeeb8 */
  if ((ARC_W_R(c, 10)) != 0) goto L_beeb8;
  /* bee20: b #0xbeedc */
  goto L_beedc;
L_bee24:;
  /* bee24: cmp w8, #4 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(4));
  /* bee28: b.eq #0xbee80 */
  if (ARC_COND(c, 0)) goto L_bee80;
  /* bee2c: cmp w8, #9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(9));
  /* bee30: b.ne #0xbef14 */
  if (ARC_COND(c, 1)) goto L_bef14;
  /* bee34: mov x12, xzr */
  ARC_X_W(c, 12, ARC_X_R(c, 31));
  /* bee38: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* bee3c: mov x11, x9 */
  ARC_X_W(c, 11, ARC_X_R(c, 9));
L_bee40:;
  /* bee40: ldrb w13, [x11], #1 */
  { const uint64_t _a = ARC_X_R(c, 11);
    ARC_X_W(c, 11, ARC_X_R(c, 11) + INT64_C(1));
    ARC_W_W(c, 13, arc_ld8(_a));
  }
  /* bee44: and x14, x13, #0x7f */
  ARC_X_W(c, 14, (ARC_X_R(c, 13) & UINT64_C(127)));
  /* bee48: lsl x14, x14, x12 */
  ARC_X_W(c, 14, ((uint64_t)(ARC_X_R(c, 14)) << ((ARC_X_R(c, 12)) & 63)));
  /* bee4c: add x12, x12, #7 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) + UINT64_C(7)));
  /* bee50: orr x8, x14, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 14) | ARC_X_R(c, 8)));
  /* bee54: tbnz w13, #7, #0xbee40 */
  if (((ARC_W_R(c, 13)) >> 7 & 1) != 0) goto L_bee40;
  /* bee58: mov x14, #-1 */
  ARC_X_W(c, 14, UINT64_C(18446744073709551615));
  /* bee5c: cmp x12, #0x40 */
  (void)arc_sub64(c, ARC_X_R(c, 12), UINT64_C(64));
  /* bee60: mov w15, #0x3f */
  ARC_W_W(c, 15, UINT64_C(63));
  /* bee64: lsl x12, x14, x12 */
  ARC_X_W(c, 12, ((uint64_t)(ARC_X_R(c, 14)) << ((ARC_X_R(c, 12)) & 63)));
  /* bee68: ccmp w13, w15, #0, lo */
  if (ARC_COND(c, 3)) { (void)arc_sub32(c, ARC_W_R(c, 13), ARC_W_R(c, 15)); }
  else { (c)->nf = 0; (c)->zf = 0;
          (c)->cf = 0; (c)->vf = 0; }
  /* bee6c: csel x12, x12, xzr, hi */
  ARC_X_W(c, 12, (ARC_COND(c, 8) ? (ARC_X_R(c, 12)) : ARC_X_R(c, 31)));
  /* bee70: orr x8, x8, x12 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) | ARC_X_R(c, 12)));
  /* bee74: ubfx w10, w10, #4, #3 */
  ARC_W_W(c, 10, (((uint32_t)(ARC_W_R(c, 10)) >> 4) & UINT64_C(7)));
  /* bee78: cbnz w10, #0xbeeb8 */
  if ((ARC_W_R(c, 10)) != 0) goto L_beeb8;
  /* bee7c: b #0xbeedc */
  goto L_beedc;
L_bee80:;
  /* bee80: mov x11, x9 */
  ARC_X_W(c, 11, ARC_X_R(c, 9));
  /* bee84: ldr x8, [x11], #8 */
  { const uint64_t _a = ARC_X_R(c, 11);
    ARC_X_W(c, 11, ARC_X_R(c, 11) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_a));
  }
  /* bee88: ubfx w10, w10, #4, #3 */
  ARC_W_W(c, 10, (((uint32_t)(ARC_W_R(c, 10)) >> 4) & UINT64_C(7)));
  /* bee8c: cbnz w10, #0xbeeb8 */
  if ((ARC_W_R(c, 10)) != 0) goto L_beeb8;
  /* bee90: b #0xbeedc */
  goto L_beedc;
L_bee94:;
  /* bee94: mov x11, x9 */
  ARC_X_W(c, 11, ARC_X_R(c, 9));
  /* bee98: ldrh w8, [x11], #2 */
  { const uint64_t _a = ARC_X_R(c, 11);
    ARC_X_W(c, 11, ARC_X_R(c, 11) + INT64_C(2));
    ARC_W_W(c, 8, arc_ld16(_a));
  }
  /* bee9c: ubfx w10, w10, #4, #3 */
  ARC_W_W(c, 10, (((uint32_t)(ARC_W_R(c, 10)) >> 4) & UINT64_C(7)));
  /* beea0: cbnz w10, #0xbeeb8 */
  if ((ARC_W_R(c, 10)) != 0) goto L_beeb8;
  /* beea4: b #0xbeedc */
  goto L_beedc;
L_beea8:;
  /* beea8: mov x11, x9 */
  ARC_X_W(c, 11, ARC_X_R(c, 9));
  /* beeac: ldrsh x8, [x11], #2 */
  { const uint64_t _a = ARC_X_R(c, 11);
    ARC_X_W(c, 11, ARC_X_R(c, 11) + INT64_C(2));
    ARC_X_W(c, 8, ((int64_t)(int16_t)arc_ld16(_a)));
  }
L_beeb0:;
  /* beeb0: ubfx w10, w10, #4, #3 */
  ARC_W_W(c, 10, (((uint32_t)(ARC_W_R(c, 10)) >> 4) & UINT64_C(7)));
  /* beeb4: cbz w10, #0xbeedc */
  if ((ARC_W_R(c, 10)) == 0) goto L_beedc;
L_beeb8:;
  /* beeb8: cmp w10, #3 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(3));
  /* beebc: b.eq #0xbeed4 */
  if (ARC_COND(c, 0)) goto L_beed4;
  /* beec0: cmp w10, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(1));
  /* beec4: b.ne #0xbef10 */
  if (ARC_COND(c, 1)) goto L_bef10;
  /* beec8: cbz x8, #0xbeee8 */
  if ((ARC_X_R(c, 8)) == 0) goto L_beee8;
  /* beecc: add x8, x8, x9 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + ARC_X_R(c, 9)));
  /* beed0: b #0xbeedc */
  goto L_beedc;
L_beed4:;
  /* beed4: cbz x8, #0xbeee8 */
  if ((ARC_X_R(c, 8)) == 0) goto L_beee8;
  /* beed8: add x8, x8, x2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + ARC_X_R(c, 2)));
L_beedc:;
  /* beedc: cbz x8, #0xbeee8 */
  if ((ARC_X_R(c, 8)) == 0) goto L_beee8;
  /* beee0: tbz w1, #7, #0xbeee8 */
  if (((ARC_W_R(c, 1)) >> 7 & 1) == 0) goto L_beee8;
  /* beee4: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
L_beee8:;
  /* beee8: str x11, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 11));
L_beeec:;
  /* beeec: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* beef0: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* beef4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* beef8: ret  */
  return;
L_beefc:;
  /* beefc: mov x11, x9 */
  ARC_X_W(c, 11, ARC_X_R(c, 9));
  /* bef00: ldrsw x8, [x11], #4 */
  { const uint64_t _a = ARC_X_R(c, 11);
    ARC_X_W(c, 11, ARC_X_R(c, 11) + INT64_C(4));
    ARC_X_W(c, 8, ((int64_t)(int32_t)arc_ld32(_a)));
  }
  /* bef04: ubfx w10, w10, #4, #3 */
  ARC_W_W(c, 10, (((uint32_t)(ARC_W_R(c, 10)) >> 4) & UINT64_C(7)));
  /* bef08: cbnz w10, #0xbeeb8 */
  if ((ARC_W_R(c, 10)) != 0) goto L_beeb8;
  /* bef0c: b #0xbeedc */
  goto L_beedc;
L_bef10:;
  /* bef10: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(782100));
  fn1_1427b8(c);
L_bef14:;
  /* bef14: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(782104));
  fn1_1427b8(c);
}

void fn1_d5270(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038801008));
  /* d5270: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* d5274: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* d5278: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* d527c: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* d5280: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* d5284: lsr x8, x0, #0x20 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 0)) >> ((UINT64_C(32)) & 63)));
  /* d5288: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* d528c: cbnz x8, #0xd52ac */
  if ((ARC_X_R(c, 8)) != 0) goto L_d52ac;
  /* d5290: mov x0, x1 */
  ARC_X_W(c, 0, ARC_X_R(c, 1));
  /* d5294: mov w1, w19 */
  ARC_W_W(c, 1, ARC_W_R(c, 19));
  /* d5298: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* d529c: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* d52a0: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* d52a4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* d52a8: b #0xd4eb8 */
  fn1_d4eb8(c); return;
L_d52ac:;
  /* d52ac: mov x21, #0xe3ff */
  ARC_X_W(c, 21, UINT64_C(58367));
  /* d52b0: movk x21, #0x540b, lsl #16 */
  ARC_X_W(c, 21, ((ARC_X_R(c, 21) & UINT64_C(18446744069414649855)) | UINT64_C(1410007040)));
  /* d52b4: movk x21, #2, lsl #32 */
  ARC_X_W(c, 21, ((ARC_X_R(c, 21) & UINT64_C(18446462603027808255)) | UINT64_C(8589934592)));
  /* d52b8: cmp x19, x21 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 21));
  /* d52bc: b.ls #0xd52f0 */
  if (ARC_COND(c, 9)) goto L_d52f0;
  /* d52c0: mov x8, #0xd5bf */
  ARC_X_W(c, 8, UINT64_C(54719));
  /* d52c4: mov x0, x1 */
  ARC_X_W(c, 0, ARC_X_R(c, 1));
  /* d52c8: movk x8, #0xbded, lsl #16 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(18446744069414649855)) | UINT64_C(3186425856)));
  /* d52cc: movk x8, #0xfece, lsl #32 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(18446462603027808255)) | UINT64_C(280160716718080)));
  /* d52d0: movk x8, #0xdbe6, lsl #48 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(281474976710655)) | UINT64_C(15845352338949668864)));
  /* d52d4: umulh x8, x19, x8 */
  ARC_X_W(c, 8, arc_umulh(ARC_X_R(c, 19), ARC_X_R(c, 8)));
  /* d52d8: lsr x20, x8, #0x21 */
  ARC_X_W(c, 20, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(33)) & 63)));
  /* d52dc: mov w1, w20 */
  ARC_W_W(c, 1, ARC_W_R(c, 20));
  /* d52e0: bl #0xd4eb8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(873188));
  fn1_d4eb8(c);
  /* d52e4: madd x8, x20, x21, x20 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 20)) + ((uint64_t)(ARC_X_R(c, 20)) * (uint64_t)(ARC_X_R(c, 21)))));
  /* d52e8: mov x1, x0 */
  ARC_X_W(c, 1, ARC_X_R(c, 0));
  /* d52ec: sub x19, x19, x8 */
  ARC_X_W(c, 19, (ARC_X_R(c, 19) - ARC_X_R(c, 8)));
L_d52f0:;
  /* d52f0: mov x8, #0xcefd */
  ARC_X_W(c, 8, UINT64_C(52989));
  /* d52f4: mov w9, #0xe100 */
  ARC_W_W(c, 9, UINT64_C(57600));
  /* d52f8: mov w11, #0xde83 */
  ARC_W_W(c, 11, UINT64_C(56963));
  /* d52fc: movk x8, #0x8461, lsl #16 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(18446744069414649855)) | UINT64_C(2220949504)));
  /* d5300: movk w9, #0x5f5, lsl #16 */
  ARC_W_W(c, 9, ((ARC_W_R(c, 9) & UINT64_C(18446744069414649855)) | UINT64_C(99942400)));
  /* d5304: movk w11, #0x431b, lsl #16 */
  ARC_W_W(c, 11, ((ARC_W_R(c, 11) & UINT64_C(18446744069414649855)) | UINT64_C(1125842944)));
  /* d5308: movk x8, #0x7711, lsl #32 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(18446462603027808255)) | UINT64_C(130914898149376)));
  /* d530c: mov w12, #0x2710 */
  ARC_W_W(c, 12, UINT64_C(10000));
  /* d5310: add x0, x1, #0xa */
  ARC_X_W(c, 0, (ARC_X_R(c, 1) + UINT64_C(10)));
  /* d5314: movk x8, #0xabcc, lsl #48 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(281474976710655)) | UINT64_C(12379269475734650880)));
  /* d5318: umulh x8, x19, x8 */
  ARC_X_W(c, 8, arc_umulh(ARC_X_R(c, 19), ARC_X_R(c, 8)));
  /* d531c: lsr x8, x8, #0x1a */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(26)) & 63)));
  /* d5320: msub x9, x8, x9, x19 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 19)) - ((uint64_t)(ARC_X_R(c, 8)) * (uint64_t)(ARC_X_R(c, 9)))));
  /* d5324: mov w10, w9 */
  ARC_W_W(c, 10, ARC_W_R(c, 9));
  /* d5328: umull x10, w10, w11 */
  ARC_X_W(c, 10, (((uint64_t)(uint32_t)(ARC_W_R(c, 10))) * ((uint64_t)(uint32_t)(ARC_W_R(c, 11)))));
  /* d532c: mov w11, #0x4240 */
  ARC_W_W(c, 11, UINT64_C(16960));
  /* d5330: movk w11, #0xf, lsl #16 */
  ARC_W_W(c, 11, ((ARC_W_R(c, 11) & UINT64_C(18446744069414649855)) | UINT64_C(983040)));
  /* d5334: lsr x10, x10, #0x32 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 10)) >> ((UINT64_C(50)) & 63)));
  /* d5338: msub w9, w10, w11, w9 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 9)) - ((uint32_t)(ARC_W_R(c, 10)) * (uint32_t)(ARC_W_R(c, 11)))));
  /* d533c: mov w11, #0x1759 */
  ARC_W_W(c, 11, UINT64_C(5977));
  /* d5340: movk w11, #0xd1b7, lsl #16 */
  ARC_W_W(c, 11, ((ARC_W_R(c, 11) & UINT64_C(18446744069414649855)) | UINT64_C(3518431232)));
  /* d5344: umull x11, w9, w11 */
  ARC_X_W(c, 11, (((uint64_t)(uint32_t)(ARC_W_R(c, 9))) * ((uint64_t)(uint32_t)(ARC_W_R(c, 11)))));
  /* d5348: lsr x11, x11, #0x2d */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 11)) >> ((UINT64_C(45)) & 63)));
  /* d534c: msub w9, w11, w12, w9 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 9)) - ((uint32_t)(ARC_W_R(c, 11)) * (uint32_t)(ARC_W_R(c, 12)))));
  /* d5350: nop  */
  /* nop: no architectural effect here */
  /* d5354: adr x12, #0x58470 */
  ARC_X_W(c, 12, (arc_image_bases[1] + UINT64_C(361584)));
  /* d5358: ldrh w8, [x12, x8, lsl #1] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 12) + ((uint64_t)(ARC_X_R(c, 8)) << 1))));
  /* d535c: ubfx w13, w9, #2, #0xe */
  ARC_W_W(c, 13, (((uint32_t)(ARC_W_R(c, 9)) >> 2) & UINT64_C(16383)));
  /* d5360: strh w8, [x1] */
  arc_st16(ARC_X_R(c, 1), ARC_W_R(c, 8));
  /* d5364: mov w8, #0x147b */
  ARC_W_W(c, 8, UINT64_C(5243));
  /* d5368: ldrh w10, [x12, x10, lsl #1] */
  ARC_W_W(c, 10, arc_ld16((ARC_X_R(c, 12) + ((uint64_t)(ARC_X_R(c, 10)) << 1))));
  /* d536c: mul w8, w13, w8 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 13)) * (uint32_t)(ARC_W_R(c, 8))));
  /* d5370: strh w10, [x1, #2] */
  arc_st16((ARC_X_R(c, 1) + INT64_C(2)), ARC_W_R(c, 10));
  /* d5374: ldrh w10, [x12, x11, lsl #1] */
  ARC_W_W(c, 10, arc_ld16((ARC_X_R(c, 12) + ((uint64_t)(ARC_X_R(c, 11)) << 1))));
  /* d5378: mov w11, #0x64 */
  ARC_W_W(c, 11, UINT64_C(100));
  /* d537c: lsr w8, w8, #0x11 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 8)) >> ((UINT64_C(17)) & 31)));
  /* d5380: strh w10, [x1, #4] */
  arc_st16((ARC_X_R(c, 1) + INT64_C(4)), ARC_W_R(c, 10));
  /* d5384: msub w9, w8, w11, w9 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 9)) - ((uint32_t)(ARC_W_R(c, 8)) * (uint32_t)(ARC_W_R(c, 11)))));
  /* d5388: ldrh w8, [x12, w8, uxtw #1] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 12) + ((uint64_t)(((uint64_t)(uint32_t)(ARC_W_R(c, 8)))) << 1))));
  /* d538c: strh w8, [x1, #6] */
  arc_st16((ARC_X_R(c, 1) + INT64_C(6)), ARC_W_R(c, 8));
  /* d5390: and x8, x9, #0xffff */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) & UINT64_C(65535)));
  /* d5394: ldrh w8, [x12, x8, lsl #1] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 12) + ((uint64_t)(ARC_X_R(c, 8)) << 1))));
  /* d5398: strh w8, [x1, #8] */
  arc_st16((ARC_X_R(c, 1) + INT64_C(8)), ARC_W_R(c, 8));
  /* d539c: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* d53a0: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* d53a4: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* d53a8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* d53ac: ret  */
  return;
}

void fn1_d8ecc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038816460));
  /* d8ecc: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* d8ed0: sub sp, sp, #0xc0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(192)));
  /* d8ed4: stp x29, x30, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* d8ed8: stp x24, x23, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* d8edc: stp x22, x21, [sp, #0xa0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(160));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* d8ee0: stp x20, x19, [sp, #0xb0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(176));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* d8ee4: add x29, sp, #0x80 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(128)));
  /* d8ee8: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* d8eec: ldrb w8, [x0] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 0)));
  /* d8ef0: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* d8ef4: ldp x10, x9, [x0, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(8));
    ARC_X_W(c, 10, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* d8ef8: mov w22, #1 */
  ARC_W_W(c, 22, UINT64_C(1));
  /* d8efc: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* d8f00: lsr x8, x8, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* d8f04: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* d8f08: stp xzr, xzr, [x29, #-0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-24));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* d8f0c: csinc x9, x9, x0, ne */
  ARC_X_W(c, 9, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 0)) + 1)));
  /* d8f10: csel x8, x8, x10, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 10)));
  /* d8f14: sub x0, x29, #0x28 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(40)));
  /* d8f18: stp x9, x8, [x29, #-0x28] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-40));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* d8f1c: sturb w22, [x29, #-8] */
  arc_st8((ARC_X_R(c, 29) + INT64_C(-8)), ARC_W_R(c, 22));
  /* d8f20: bl #0xda18c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(888612));
  fn1_da18c(c);
  /* d8f24: ldrb w8, [x20] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 20)));
  /* d8f28: ldp x10, x9, [x20, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(8));
    ARC_X_W(c, 10, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* d8f2c: add x0, sp, #0x30 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(48)));
  /* d8f30: stp xzr, xzr, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* d8f34: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* d8f38: lsr x8, x8, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* d8f3c: strb w22, [sp, #0x50] */
  arc_st8(((c)->sp + INT64_C(80)), ARC_W_R(c, 22));
  /* d8f40: csinc x9, x9, x20, ne */
  ARC_X_W(c, 9, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 20)) + 1)));
  /* d8f44: csel x8, x8, x10, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 10)));
  /* d8f48: stp x9, x8, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* d8f4c: bl #0xda18c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(888656));
  fn1_da18c(c);
  /* d8f50: ldurb w9, [x29, #-8] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 29) + INT64_C(-8))));
  /* d8f54: ldrb w8, [sp, #0x50] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(80))));
  /* d8f58: cmp w9, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(2));
  /* d8f5c: b.ne #0xd8f8c */
  if (ARC_COND(c, 1)) goto L_d8f8c;
  /* d8f60: cmp w8, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(2));
  /* d8f64: b.ne #0xd8f8c */
  if (ARC_COND(c, 1)) goto L_d8f8c;
  /* d8f68: ldur x2, [x29, #-0x10] */
  ARC_X_W(c, 2, arc_ld64((ARC_X_R(c, 29) + INT64_C(-16))));
  /* d8f6c: ldr x8, [sp, #0x48] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(72))));
  /* d8f70: cmp x2, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 2), ARC_X_R(c, 8));
  /* d8f74: b.ne #0xd928c */
  if (ARC_COND(c, 1)) goto L_d928c;
  /* d8f78: ldr x1, [sp, #0x40] */
  ARC_X_W(c, 1, arc_ld64(((c)->sp + INT64_C(64))));
  /* d8f7c: ldur x0, [x29, #-0x18] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-24))));
  /* d8f80: bl #0x142890 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(888708));
  fn1_142890(c);
  /* d8f84: cbnz w0, #0xd928c */
  if ((ARC_W_R(c, 0)) != 0) goto L_d928c;
  /* d8f88: b #0xd8fa4 */
  goto L_d8fa4;
L_d8f8c:;
  /* d8f8c: cmp w9, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 9), ARC_W_R(c, 8));
  /* d8f90: and w10, w9, #0xfe */
  ARC_W_W(c, 10, (ARC_W_R(c, 9) & UINT64_C(254)));
  /* d8f94: b.ne #0xd8fb4 */
  if (ARC_COND(c, 1)) goto L_d8fb4;
  /* d8f98: cmp w10, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(2));
  /* d8f9c: mov w8, w9 */
  ARC_W_W(c, 8, ARC_W_R(c, 9));
  /* d8fa0: b.ne #0xd8fc8 */
  if (ARC_COND(c, 1)) goto L_d8fc8;
L_d8fa4:;
  /* d8fa4: sub x0, x29, #0x28 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(40)));
  /* d8fa8: bl #0xda18c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(888748));
  fn1_da18c(c);
  /* d8fac: ldrb w8, [sp, #0x50] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(80))));
  /* d8fb0: b #0xd8fc8 */
  goto L_d8fc8;
L_d8fb4:;
  /* d8fb4: cmp w10, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(2));
  /* d8fb8: b.eq #0xd928c */
  if (ARC_COND(c, 0)) goto L_d928c;
  /* d8fbc: and w9, w8, #0xfe */
  ARC_W_W(c, 9, (ARC_W_R(c, 8) & UINT64_C(254)));
  /* d8fc0: cmp w9, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(2));
  /* d8fc4: b.eq #0xd928c */
  if (ARC_COND(c, 0)) goto L_d928c;
L_d8fc8:;
  /* d8fc8: and w9, w8, #0xfe */
  ARC_W_W(c, 9, (ARC_W_R(c, 8) & UINT64_C(254)));
  /* d8fcc: cmp w9, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(2));
  /* d8fd0: b.ne #0xd8fe0 */
  if (ARC_COND(c, 1)) goto L_d8fe0;
  /* d8fd4: add x0, sp, #0x30 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(48)));
  /* d8fd8: bl #0xda18c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(888796));
  fn1_da18c(c);
  /* d8fdc: ldrb w8, [sp, #0x50] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(80))));
L_d8fe0:;
  /* d8fe0: ldurb w9, [x29, #-8] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 29) + INT64_C(-8))));
  /* d8fe4: cmp w9, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 9), ARC_W_R(c, 8));
  /* d8fe8: b.eq #0xd9004 */
  if (ARC_COND(c, 0)) goto L_d9004;
  /* d8fec: and w8, w8, #0xfe */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(254)));
  /* d8ff0: cmp w8, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(2));
  /* d8ff4: b.eq #0xd928c */
  if (ARC_COND(c, 0)) goto L_d928c;
  /* d8ff8: and w8, w9, #0xfe */
  ARC_W_W(c, 8, (ARC_W_R(c, 9) & UINT64_C(254)));
  /* d8ffc: cmp w8, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(2));
  /* d9000: b.eq #0xd928c */
  if (ARC_COND(c, 0)) goto L_d928c;
L_d9004:;
  /* d9004: ldrb w8, [x21] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 21)));
  /* d9008: ldp x11, x10, [x21, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(8));
    ARC_X_W(c, 11, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* d900c: add x9, x21, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 21) + UINT64_C(1)));
  /* d9010: mov w21, #1 */
  ARC_W_W(c, 21, UINT64_C(1));
  /* d9014: sub x0, x29, #0x28 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(40)));
  /* d9018: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* d901c: lsr x8, x8, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* d9020: stp xzr, xzr, [x29, #-0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-24));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* d9024: csel x9, x9, x10, eq */
  ARC_X_W(c, 9, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 10)));
  /* d9028: add x22, x20, #1 */
  ARC_X_W(c, 22, (ARC_X_R(c, 20) + UINT64_C(1)));
  /* d902c: sturb w21, [x29, #-8] */
  arc_st8((ARC_X_R(c, 29) + INT64_C(-8)), ARC_W_R(c, 21));
  /* d9030: csel x8, x8, x11, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 11)));
  /* d9034: stp x9, x8, [x29, #-0x28] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-40));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* d9038: bl #0xda18c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(888892));
  fn1_da18c(c);
  /* d903c: ldrb w8, [x20] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 20)));
  /* d9040: ldp x10, x9, [x20, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(8));
    ARC_X_W(c, 10, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* d9044: add x0, sp, #0x30 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(48)));
  /* d9048: stp xzr, xzr, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* d904c: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* d9050: lsr x8, x8, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* d9054: strb w21, [sp, #0x50] */
  arc_st8(((c)->sp + INT64_C(80)), ARC_W_R(c, 21));
  /* d9058: csel x9, x22, x9, eq */
  ARC_X_W(c, 9, (ARC_COND(c, 0) ? (ARC_X_R(c, 22)) : ARC_X_R(c, 9)));
  /* d905c: csel x8, x8, x10, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 10)));
  /* d9060: stp x9, x8, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* d9064: bl #0xda18c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(888936));
  fn1_da18c(c);
  /* d9068: nop  */
  /* nop: no architectural effect here */
  /* d906c: adr x20, #0x5018e */
  ARC_X_W(c, 20, (arc_image_bases[1] + UINT64_C(328078)));
  /* d9070: nop  */
  /* nop: no architectural effect here */
  /* d9074: adr x21, #0x5004e */
  ARC_X_W(c, 21, (arc_image_bases[1] + UINT64_C(327758)));
  /* d9078: nop  */
  /* nop: no architectural effect here */
  /* d907c: adr x22, #0x501db */
  ARC_X_W(c, 22, (arc_image_bases[1] + UINT64_C(328155)));
  /* d9080: b #0xd9094 */
  goto L_d9094;
L_d9084:;
  /* d9084: sub x0, x29, #0x28 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(40)));
  /* d9088: bl #0xda18c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(888972));
  fn1_da18c(c);
  /* d908c: add x0, sp, #0x30 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(48)));
  /* d9090: bl #0xda18c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(888980));
  fn1_da18c(c);
L_d9094:;
  /* d9094: ldurb w23, [x29, #-8] */
  ARC_W_W(c, 23, arc_ld8((ARC_X_R(c, 29) + INT64_C(-8))));
  /* d9098: cmp w23, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 23), UINT64_C(1));
  /* d909c: b.eq #0xd915c */
  if (ARC_COND(c, 0)) goto L_d915c;
  /* d90a0: cmp w23, #6 */
  (void)arc_sub32(c, ARC_W_R(c, 23), UINT64_C(6));
  /* d90a4: b.eq #0xd915c */
  if (ARC_COND(c, 0)) goto L_d915c;
  /* d90a8: ldrb w8, [sp, #0x50] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(80))));
  /* d90ac: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* d90b0: b.eq #0xd9190 */
  if (ARC_COND(c, 0)) goto L_d9190;
  /* d90b4: cmp w8, #6 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(6));
  /* d90b8: b.eq #0xd9190 */
  if (ARC_COND(c, 0)) goto L_d9190;
  /* d90bc: cmp w23, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 23), ARC_W_R(c, 8));
  /* d90c0: b.ne #0xd9190 */
  if (ARC_COND(c, 1)) goto L_d9190;
  /* d90c4: cmp w23, #3 */
  (void)arc_sub32(c, ARC_W_R(c, 23), UINT64_C(3));
  /* d90c8: b.gt #0xd90fc */
  if (ARC_COND(c, 12)) goto L_d90fc;
  /* d90cc: cmp w23, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 23), UINT64_C(2));
  /* d90d0: b.eq #0xd9104 */
  if (ARC_COND(c, 0)) goto L_d9104;
  /* d90d4: ldur x8, [x29, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(-24))));
  /* d90d8: ldr x9, [sp, #0x40] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(64))));
  /* d90dc: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* d90e0: ldrb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* d90e4: ldrb w9, [x9] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 9)));
  /* d90e8: cmp w8, #0x5c */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(92));
  /* d90ec: csel x0, x22, x21, eq */
  ARC_X_W(c, 0, (ARC_COND(c, 0) ? (ARC_X_R(c, 22)) : ARC_X_R(c, 21)));
  /* d90f0: cmp w9, #0x5c */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(92));
  /* d90f4: csel x1, x22, x21, eq */
  ARC_X_W(c, 1, (ARC_COND(c, 0) ? (ARC_X_R(c, 22)) : ARC_X_R(c, 21)));
  /* d90f8: b #0xd9148 */
  goto L_d9148;
L_d90fc:;
  /* d90fc: cmp w23, #4 */
  (void)arc_sub32(c, ARC_W_R(c, 23), UINT64_C(4));
  /* d9100: b.ne #0xd912c */
  if (ARC_COND(c, 1)) goto L_d912c;
L_d9104:;
  /* d9104: ldp x0, x2, [x29, #-0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-24));
    ARC_X_W(c, 0, arc_ld64(_pa));
    ARC_X_W(c, 2, arc_ld64(_pa + 8));
  }
  /* d9108: cmp w23, #3 */
  (void)arc_sub32(c, ARC_W_R(c, 23), UINT64_C(3));
  /* d910c: ldr x1, [sp, #0x40] */
  ARC_X_W(c, 1, arc_ld64(((c)->sp + INT64_C(64))));
  /* d9110: b.ne #0xd913c */
  if (ARC_COND(c, 1)) goto L_d913c;
  /* d9114: ldrb w8, [x1] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 1)));
  /* d9118: cmp w8, #0x5c */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(92));
  /* d911c: csel x1, x22, x21, eq */
  ARC_X_W(c, 1, (ARC_COND(c, 0) ? (ARC_X_R(c, 22)) : ARC_X_R(c, 21)));
  /* d9120: cmp x2, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 2), UINT64_C(1));
  /* d9124: b.ne #0xd9084 */
  if (ARC_COND(c, 1)) goto L_d9084;
  /* d9128: b #0xd9148 */
  goto L_d9148;
L_d912c:;
  /* d912c: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* d9130: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* d9134: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* d9138: b #0xd9148 */
  goto L_d9148;
L_d913c:;
  /* d913c: ldr x8, [sp, #0x48] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(72))));
  /* d9140: cmp x2, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 2), ARC_X_R(c, 8));
  /* d9144: b.ne #0xd9190 */
  if (ARC_COND(c, 1)) goto L_d9190;
L_d9148:;
  /* d9148: bl #0x142890 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(889164));
  fn1_142890(c);
  /* d914c: cmp w23, #3 */
  (void)arc_sub32(c, ARC_W_R(c, 23), UINT64_C(3));
  /* d9150: b.eq #0xd9084 */
  if (ARC_COND(c, 0)) goto L_d9084;
  /* d9154: cbz w0, #0xd9084 */
  if ((ARC_W_R(c, 0)) == 0) goto L_d9084;
  /* d9158: b #0xd9190 */
  goto L_d9190;
L_d915c:;
  /* d915c: ldrb w8, [sp, #0x50] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(80))));
  /* d9160: cmp w8, #6 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(6));
  /* d9164: b.eq #0xd9170 */
  if (ARC_COND(c, 0)) goto L_d9170;
  /* d9168: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* d916c: b.ne #0xd9190 */
  if (ARC_COND(c, 1)) goto L_d9190;
L_d9170:;
  /* d9170: stp xzr, xzr, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* d9174: str xzr, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 31));
  /* d9178: nop  */
  /* nop: no architectural effect here */
  /* d917c: adr x1, #0x501d9 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(328153)));
  /* d9180: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* d9184: add x2, x1, #1 */
  ARC_X_W(c, 2, (ARC_X_R(c, 1) + UINT64_C(1)));
  /* d9188: bl #0xda784 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(889228));
  fn1_da784(c);
  /* d918c: b #0xd9294 */
  goto L_d9294;
L_d9190:;
  /* d9190: ldp q0, q1, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_q_w(c, 0, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 1, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* d9194: mov w20, wzr */
  ARC_W_W(c, 20, ARC_W_R(c, 31));
  /* d9198: ldr x8, [sp, #0x50] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(80))));
  /* d919c: mov w23, #0x2e2e */
  ARC_W_W(c, 23, UINT64_C(11822));
  /* d91a0: stp q0, q1, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[1].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[1].u64[1]);
  }
  /* d91a4: str x8, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 8));
  /* d91a8: b #0xd91c4 */
  goto L_d91c4;
L_d91ac:;
  /* d91ac: cmp w8, #4 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(4));
  /* d91b0: b.eq #0xd91f4 */
  if (ARC_COND(c, 0)) goto L_d91f4;
  /* d91b4: cmp w8, #5 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(5));
  /* d91b8: b.ne #0xd9238 */
  if (ARC_COND(c, 1)) goto L_d9238;
L_d91bc:;
  /* d91bc: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* d91c0: bl #0xda18c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(889284));
  fn1_da18c(c);
L_d91c4:;
  /* d91c4: ldrb w8, [sp, #0x20] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(32))));
  /* d91c8: cmp w8, #3 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(3));
  /* d91cc: b.gt #0xd91ac */
  if (ARC_COND(c, 12)) goto L_d91ac;
  /* d91d0: cmp w8, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(2));
  /* d91d4: b.eq #0xd91f4 */
  if (ARC_COND(c, 0)) goto L_d91f4;
  /* d91d8: cmp w8, #3 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(3));
  /* d91dc: b.ne #0xd9238 */
  if (ARC_COND(c, 1)) goto L_d9238;
  /* d91e0: ldr x8, [sp, #0x10] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(16))));
  /* d91e4: ldrb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* d91e8: cmp w8, #0x5c */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(92));
  /* d91ec: csel x8, x22, x21, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 22)) : ARC_X_R(c, 21)));
  /* d91f0: b #0xd9224 */
  goto L_d9224;
L_d91f4:;
  /* d91f4: ldr x9, [sp, #0x18] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(24))));
  /* d91f8: cbz x9, #0xd91bc */
  if ((ARC_X_R(c, 9)) == 0) goto L_d91bc;
  /* d91fc: ldr x8, [sp, #0x10] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(16))));
  /* d9200: cmp x9, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(1));
  /* d9204: b.eq #0xd9224 */
  if (ARC_COND(c, 0)) goto L_d9224;
  /* d9208: cmp x9, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(2));
  /* d920c: b.ne #0xd9230 */
  if (ARC_COND(c, 1)) goto L_d9230;
  /* d9210: ldrh w8, [x8] */
  ARC_W_W(c, 8, arc_ld16(ARC_X_R(c, 8)));
  /* d9214: cmp w8, w23 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 23));
  /* d9218: b.ne #0xd9230 */
  if (ARC_COND(c, 1)) goto L_d9230;
  /* d921c: sub w20, w20, #1 */
  ARC_W_W(c, 20, (ARC_W_R(c, 20) - UINT64_C(1)));
  /* d9220: b #0xd91bc */
  goto L_d91bc;
L_d9224:;
  /* d9224: ldrb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* d9228: cmp w8, #0x2e */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(46));
  /* d922c: b.eq #0xd91bc */
  if (ARC_COND(c, 0)) goto L_d91bc;
L_d9230:;
  /* d9230: add w20, w20, #1 */
  ARC_W_W(c, 20, (ARC_W_R(c, 20) + UINT64_C(1)));
  /* d9234: b #0xd91bc */
  goto L_d91bc;
L_d9238:;
  /* d9238: tbnz w20, #0x1f, #0xd928c */
  if (((ARC_W_R(c, 20)) >> 31 & 1) != 0) goto L_d928c;
  /* d923c: cbz w20, #0xd9370 */
  if ((ARC_W_R(c, 20)) == 0) goto L_d9370;
L_d9240:;
  /* d9240: add w23, w20, #1 */
  ARC_W_W(c, 23, (ARC_W_R(c, 20) + UINT64_C(1)));
  /* d9244: adrp x20, #0x50000 */
  ARC_X_W(c, 20, (arc_image_bases[1] + UINT64_C(327680)));
  /* d9248: add x20, x20, #0xc94 */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) + UINT64_C(3220)));
  /* d924c: stp xzr, xzr, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* d9250: str xzr, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 31));
  /* d9254: b #0xd9268 */
  goto L_d9268;
L_d9258:;
  /* d9258: add x2, x20, #2 */
  ARC_X_W(c, 2, (ARC_X_R(c, 20) + UINT64_C(2)));
  /* d925c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* d9260: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* d9264: bl #0xda784 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(889448));
  fn1_da784(c);
L_d9268:;
  /* d9268: subs w23, w23, #1 */
  ARC_W_W(c, 23, arc_sub32(c, ARC_W_R(c, 23), UINT64_C(1)));
  /* d926c: b.eq #0xd92b0 */
  if (ARC_COND(c, 0)) goto L_d92b0;
  /* d9270: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* d9274: bl #0x142b30 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(889464));
  fn1_142b30(c);
  /* d9278: cbz x1, #0xd9258 */
  if ((ARC_X_R(c, 1)) == 0) goto L_d9258;
  /* d927c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* d9280: mov w1, #0x2f */
  ARC_W_W(c, 1, UINT64_C(47));
  /* d9284: bl #0x142ba8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(889480));
  fn1_142ba8(c);
  /* d9288: b #0xd9258 */
  goto L_d9258;
L_d928c:;
  /* d928c: stp xzr, xzr, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* d9290: str xzr, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 31));
L_d9294:;
  /* d9294: ldp x20, x19, [sp, #0xb0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(176));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* d9298: ldp x22, x21, [sp, #0xa0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(160));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* d929c: ldp x24, x23, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* d92a0: ldp x29, x30, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* d92a4: add sp, sp, #0xc0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(192)));
  /* d92a8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* d92ac: ret  */
  return;
L_d92b0:;
  /* d92b0: nop  */
  /* nop: no architectural effect here */
  /* d92b4: adr x23, #0x5018e */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(328078)));
L_d92b8:;
  /* d92b8: ldurb w8, [x29, #-8] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-8))));
  /* d92bc: cmp w8, #3 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(3));
  /* d92c0: b.gt #0xd92ec */
  if (ARC_COND(c, 12)) goto L_d92ec;
  /* d92c4: cmp w8, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(2));
  /* d92c8: b.eq #0xd9308 */
  if (ARC_COND(c, 0)) goto L_d9308;
  /* d92cc: cmp w8, #3 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(3));
  /* d92d0: b.ne #0xd9294 */
  if (ARC_COND(c, 1)) goto L_d9294;
  /* d92d4: ldur x8, [x29, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(-24))));
  /* d92d8: mov w24, #1 */
  ARC_W_W(c, 24, UINT64_C(1));
  /* d92dc: ldrb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* d92e0: cmp w8, #0x5c */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(92));
  /* d92e4: csel x20, x22, x21, eq */
  ARC_X_W(c, 20, (ARC_COND(c, 0) ? (ARC_X_R(c, 22)) : ARC_X_R(c, 21)));
  /* d92e8: b #0xd9310 */
  goto L_d9310;
L_d92ec:;
  /* d92ec: cmp w8, #4 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(4));
  /* d92f0: b.eq #0xd9308 */
  if (ARC_COND(c, 0)) goto L_d9308;
  /* d92f4: cmp w8, #5 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(5));
  /* d92f8: b.ne #0xd9294 */
  if (ARC_COND(c, 1)) goto L_d9294;
  /* d92fc: mov x24, xzr */
  ARC_X_W(c, 24, ARC_X_R(c, 31));
  /* d9300: mov x20, x23 */
  ARC_X_W(c, 20, ARC_X_R(c, 23));
  /* d9304: b #0xd932c */
  goto L_d932c;
L_d9308:;
  /* d9308: ldp x20, x24, [x29, #-0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-24));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 24, arc_ld64(_pa + 8));
  }
  /* d930c: cbz x24, #0xd932c */
  if ((ARC_X_R(c, 24)) == 0) goto L_d932c;
L_d9310:;
  /* d9310: ldrb w8, [x20] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 20)));
  /* d9314: cmp w8, #0x2f */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(47));
  /* d9318: b.ne #0xd932c */
  if (ARC_COND(c, 1)) goto L_d932c;
  /* d931c: ldrb w8, [x19] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 19)));
  /* d9320: tbnz w8, #0, #0xd9348 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_d9348;
  /* d9324: strh wzr, [x19] */
  arc_st16(ARC_X_R(c, 19), ARC_W_R(c, 31));
  /* d9328: b #0xd9354 */
  goto L_d9354;
L_d932c:;
  /* d932c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* d9330: bl #0x142b30 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(889652));
  fn1_142b30(c);
  /* d9334: cbz x1, #0xd9354 */
  if ((ARC_X_R(c, 1)) == 0) goto L_d9354;
  /* d9338: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* d933c: mov w1, #0x2f */
  ARC_W_W(c, 1, UINT64_C(47));
  /* d9340: bl #0x142ba8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(889668));
  fn1_142ba8(c);
  /* d9344: b #0xd9354 */
  goto L_d9354;
L_d9348:;
  /* d9348: ldr x8, [x19, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* d934c: strb wzr, [x8] */
  arc_st8(ARC_X_R(c, 8), ARC_W_R(c, 31));
  /* d9350: str xzr, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 31));
L_d9354:;
  /* d9354: add x2, x20, x24 */
  ARC_X_W(c, 2, (ARC_X_R(c, 20) + ARC_X_R(c, 24)));
  /* d9358: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* d935c: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* d9360: bl #0xda784 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(889700));
  fn1_da784(c);
  /* d9364: sub x0, x29, #0x28 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(40)));
  /* d9368: bl #0xda18c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(889708));
  fn1_da18c(c);
  /* d936c: b #0xd92b8 */
  goto L_d92b8;
L_d9370:;
  /* d9370: ldurb w8, [x29, #-8] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-8))));
  /* d9374: mov w9, #1 */
  ARC_W_W(c, 9, UINT64_C(1));
  /* d9378: lsl w8, w9, w8 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 9)) << ((ARC_W_R(c, 8)) & 31)));
  /* d937c: mov w9, #0x62 */
  ARC_W_W(c, 9, UINT64_C(98));
  /* d9380: tst w8, w9 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & ARC_W_R(c, 9)));
  /* d9384: b.eq #0xd93a8 */
  if (ARC_COND(c, 0)) goto L_d93a8;
L_d9388:;
  /* d9388: stp xzr, xzr, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* d938c: str xzr, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 31));
  /* d9390: nop  */
  /* nop: no architectural effect here */
  /* d9394: adr x1, #0x501d9 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(328153)));
  /* d9398: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* d939c: add x2, x1, #1 */
  ARC_X_W(c, 2, (ARC_X_R(c, 1) + UINT64_C(1)));
  /* d93a0: bl #0xda784 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(889764));
  fn1_da784(c);
  /* d93a4: b #0xd9294 */
  goto L_d9294;
L_d93a8:;
  /* d93a8: mov w9, #0x14 */
  ARC_W_W(c, 9, UINT64_C(20));
  /* d93ac: tst w8, w9 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & ARC_W_R(c, 9)));
  /* d93b0: b.eq #0xd9240 */
  if (ARC_COND(c, 0)) goto L_d9240;
  /* d93b4: ldur x8, [x29, #-0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(-16))));
  /* d93b8: cbnz x8, #0xd9240 */
  if ((ARC_X_R(c, 8)) != 0) goto L_d9240;
  /* d93bc: b #0xd9388 */
  goto L_d9388;
  /* d93c0: b #0xd93cc */
  goto L_d93cc;
  /* d93c4: b #0xd93cc */
  goto L_d93cc;
  /* d93c8: b #0xd93cc */
  goto L_d93cc;
L_d93cc:;
  /* d93cc: ldrb w8, [x19] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 19)));
  /* d93d0: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* d93d4: tbz w8, #0, #0xd93e8 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_d93e8;
  /* d93d8: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* d93dc: ldr x0, [x19, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* d93e0: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* d93e4: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(889832));
  fn1_142608(c);
L_d93e8:;
  /* d93e8: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* d93ec: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(889840));
  fn1_9cc20(c);
}

void fn1_dc078(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038829176));
  /* dc078: bti c */
  /* bti: no architectural effect here */
  /* dc07c: cmp x1, x0 */
  (void)arc_sub64(c, ARC_X_R(c, 1), ARC_X_R(c, 0));
  /* dc080: cset w0, eq */
  ARC_W_W(c, 0, (ARC_COND(c, 0) ? 1 : 0));
  /* dc084: ret  */
  return;
}

void fn1_e09f4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038847988));
  /* e09f4: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e09f8: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e09fc: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* e0a00: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* e0a04: ldrb w9, [x0] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 0)));
  /* e0a08: ldr x8, [x0, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* e0a0c: lsr x10, x9, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(1)) & 63)));
  /* e0a10: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* e0a14: csel x8, x10, x8, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 8)));
  /* e0a18: subs x10, x8, x3 */
  ARC_X_W(c, 10, arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 3)));
  /* e0a1c: b.lo #0xe0a60 */
  if (ARC_COND(c, 3)) goto L_e0a60;
  /* e0a20: cmp x10, x2 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 2));
  /* e0a24: csel x19, x10, x2, lo */
  ARC_X_W(c, 19, (ARC_COND(c, 3) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 2)));
  /* e0a28: cbz x19, #0xe0a4c */
  if ((ARC_X_R(c, 19)) == 0) goto L_e0a4c;
  /* e0a2c: ldr x10, [x0, #0x10] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* e0a30: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* e0a34: mov x8, x1 */
  ARC_X_W(c, 8, ARC_X_R(c, 1));
  /* e0a38: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* e0a3c: csinc x9, x10, x0, ne */
  ARC_X_W(c, 9, (ARC_COND(c, 1) ? (ARC_X_R(c, 10)) : ((ARC_X_R(c, 0)) + 1)));
  /* e0a40: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* e0a44: add x1, x9, x3 */
  ARC_X_W(c, 1, (ARC_X_R(c, 9) + ARC_X_R(c, 3)));
  /* e0a48: bl #0x1449f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(920140));
  fn1_1449f0(c);
L_e0a4c:;
  /* e0a4c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* e0a50: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* e0a54: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e0a58: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* e0a5c: ret  */
  return;
L_e0a60:;
  /* e0a60: bl #0xda020 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(920164));
  fn1_da020(c);
}

void fn1_e3498(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038858904));
  /* e3498: bti c */
  /* bti: no architectural effect here */
  /* e349c: ldrb w8, [x0] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 0)));
  /* e34a0: ldp x9, x11, [x0, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(8));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 11, arc_ld64(_pa + 8));
  }
  /* e34a4: add x12, x0, #4 */
  ARC_X_W(c, 12, (ARC_X_R(c, 0) + UINT64_C(4)));
  /* e34a8: lsr x10, x8, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* e34ac: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* e34b0: csel x8, x10, x9, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* e34b4: csel x9, x12, x11, eq */
  ARC_X_W(c, 9, (ARC_COND(c, 0) ? (ARC_X_R(c, 12)) : ARC_X_R(c, 11)));
  /* e34b8: cbz x8, #0xe34e8 */
  if ((ARC_X_R(c, 8)) == 0) goto L_e34e8;
  /* e34bc: cmp x2, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 2), ARC_X_R(c, 8));
  /* e34c0: sub x9, x9, #4 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - UINT64_C(4)));
  /* e34c4: csinc x8, x8, x2, hs */
  ARC_X_W(c, 8, (ARC_COND(c, 2) ? (ARC_X_R(c, 8)) : ((ARC_X_R(c, 2)) + 1)));
  /* e34c8: lsl x8, x8, #2 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) << ((UINT64_C(2)) & 63)));
L_e34cc:;
  /* e34cc: cbz x8, #0xe34e8 */
  if ((ARC_X_R(c, 8)) == 0) goto L_e34e8;
  /* e34d0: ldr w10, [x9, x8] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 9) + ARC_X_R(c, 8))));
  /* e34d4: sub x8, x8, #4 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) - UINT64_C(4)));
  /* e34d8: cmp w10, w1 */
  (void)arc_sub32(c, ARC_W_R(c, 10), ARC_W_R(c, 1));
  /* e34dc: b.ne #0xe34cc */
  if (ARC_COND(c, 1)) goto L_e34cc;
  /* e34e0: asr x0, x8, #2 */
  ARC_X_W(c, 0, ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(2)) & 63))));
  /* e34e4: ret  */
  return;
L_e34e8:;
  /* e34e8: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* e34ec: ret  */
  return;
}

void fn1_e7c18(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038877208));
  /* e7c18: bti c */
  /* bti: no architectural effect here */
  /* e7c1c: cmp w1, #1, lsl #12 */
  (void)arc_sub32(c, ARC_W_R(c, 1), UINT64_C(4096));
  /* e7c20: b.lt #0xe7c7c */
  if (ARC_COND(c, 11)) goto L_e7c7c;
  /* e7c24: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e7c28: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e7c2c: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* e7c30: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* e7c34: mov w0, #0x28 */
  ARC_W_W(c, 0, UINT64_C(40));
  /* e7c38: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* e7c3c: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(949312));
  fn1_1428f0(c);
  /* e7c40: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* e7c44: mov w9, #0x726f */
  ARC_W_W(c, 9, UINT64_C(29295));
  /* e7c48: str x0, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 0));
  /* e7c4c: ldr q0, [x8, #0xd90] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(3472))), arc_ld64((ARC_X_R(c, 8) + INT64_C(3472)) + 8));
  /* e7c50: adrp x8, #0x50000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(327680)));
  /* e7c54: add x8, x8, #0x50 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(80)));
  /* e7c58: ldp q1, q2, [x8] */
  { const uint64_t _pa = ARC_X_R(c, 8);
    arc_q_w(c, 1, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 2, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* e7c5c: strh w9, [x0, #0x20] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(32)), ARC_W_R(c, 9));
  /* e7c60: str q0, [x19] */
  arc_st64(ARC_X_R(c, 19), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 19) + 8, (c)->q[0].u64[1]);
  /* e7c64: stp q1, q2, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, (c)->q[1].u64[0]);
    arc_st64(_pa + 8, (c)->q[1].u64[1]);
    arc_st64((_pa + 16), (c)->q[2].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[2].u64[1]);
  }
  /* e7c68: strb wzr, [x0, #0x22] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(34)), ARC_W_R(c, 31));
  /* e7c6c: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* e7c70: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e7c74: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* e7c78: ret  */
  return;
L_e7c7c:;
  /* e7c7c: b #0xe7af0 */
  fn1_e7af0(c); return;
}

void fn1_ea3e0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038887392));
  /* ea3e0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* ea3e4: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* ea3e8: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* ea3ec: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* ea3f0: str x1, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 1));
  /* ea3f4: add x0, x1, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 1) + UINT64_C(24)));
  /* ea3f8: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* ea3fc: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(959488));
  fn1_142518(c);
  /* ea400: cbnz w0, #0xea438 */
  if ((ARC_W_R(c, 0)) != 0) goto L_ea438;
  /* ea404: ldr w20, [x19, #0x70] */
  ARC_W_W(c, 20, arc_ld32((ARC_X_R(c, 19) + INT64_C(112))));
  /* ea408: tbnz w20, #1, #0xea444 */
  if (((ARC_W_R(c, 20)) >> 1 & 1) != 0) goto L_ea444;
  /* ea40c: add x1, x19, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 19) + UINT64_C(8)));
  /* ea410: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* ea414: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(959512));
  fn1_db2e0(c);
  /* ea418: orr w8, w20, #2 */
  ARC_W_W(c, 8, (ARC_W_R(c, 20) | UINT64_C(2)));
  /* ea41c: str w8, [x19, #0x70] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(112)), ARC_W_R(c, 8));
  /* ea420: add x0, x19, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(24)));
  /* ea424: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(959528));
  fn1_142560(c);
  /* ea428: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* ea42c: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ea430: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* ea434: ret  */
  return;
L_ea438:;
  /* ea438: nop  */
  /* nop: no architectural effect here */
  /* ea43c: adr x1, #0x50f67 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(331623)));
  /* ea440: bl #0x142a40 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(959556));
  fn1_142a40(c);
L_ea444:;
  /* ea444: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* ea448: bl #0xe9be0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(959564));
  fn1_e9be0(c);
  /* ea44c: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(959568));
  fn1_a1454(c);
  /* ea450: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* ea454: add x0, x19, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(24)));
  /* ea458: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(959580));
  fn1_142560(c);
  /* ea45c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* ea460: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(959588));
  fn1_9cc20(c);
  /* ea464: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(959592));
  fn1_a1454(c);
}

void fn1_ebd5c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038893916));
  /* ebd5c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* ebd60: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* ebd64: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* ebd68: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* ebd6c: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* ebd70: ldrb w8, [x1] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 1)));
  /* ebd74: ldr x9, [x1, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 1) + INT64_C(16))));
  /* ebd78: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* ebd7c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* ebd80: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* ebd84: csinc x0, x9, x1, ne */
  ARC_X_W(c, 0, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 1)) + 1)));
  /* ebd88: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* ebd8c: bl #0x143358 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(966032));
  fn1_143358(c);
  /* ebd90: str w0, [x20] */
  arc_st32(ARC_X_R(c, 20), ARC_W_R(c, 0));
  /* ebd94: tbnz w0, #0x1f, #0xebdac */
  if (((ARC_W_R(c, 0)) >> 31 & 1) != 0) goto L_ebdac;
  /* ebd98: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* ebd9c: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ebda0: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* ebda4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* ebda8: ret  */
  return;
L_ebdac:;
  /* ebdac: bl #0x142a58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(966064));
  fn1_142a58(c);
  /* ebdb0: ldr w20, [x0] */
  ARC_W_W(c, 20, arc_ld32(ARC_X_R(c, 0)));
  /* ebdb4: nop  */
  /* nop: no architectural effect here */
  /* ebdb8: adr x0, #0x51417 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(332823)));
  /* ebdbc: add x8, sp, #8 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(8)));
  /* ebdc0: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* ebdc4: add x19, sp, #8 */
  ARC_X_W(c, 19, ((c)->sp + UINT64_C(8)));
  /* ebdc8: bl #0x142de8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(966092));
  fn1_142de8(c);
  /* ebdcc: ldrb w8, [sp, #8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(8))));
  /* ebdd0: ldr x9, [sp, #0x18] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(24))));
  /* ebdd4: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* ebdd8: csinc x1, x9, x19, ne */
  ARC_X_W(c, 1, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 19)) + 1)));
  /* ebddc: mov w0, w20 */
  ARC_W_W(c, 0, ARC_W_R(c, 20));
  /* ebde0: bl #0x142a40 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(966116));
  fn1_142a40(c);
  /* ebde4: ldrb w8, [sp, #8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(8))));
  /* ebde8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* ebdec: tbz w8, #0, #0xebe00 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_ebe00;
  /* ebdf0: ldr x8, [sp, #8] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(8))));
  /* ebdf4: ldr x0, [sp, #0x18] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(24))));
  /* ebdf8: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* ebdfc: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(966144));
  fn1_142608(c);
L_ebe00:;
  /* ebe00: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ebe04: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(966152));
  fn1_9cc20(c);
}

void fn1_ed7d8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038900696));
  /* ed7d8: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* ed7dc: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* ed7e0: stp x24, x23, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* ed7e4: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* ed7e8: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* ed7ec: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* ed7f0: cmp x2, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 2), UINT64_C(1));
  /* ed7f4: b.lt #0xed888 */
  if (ARC_COND(c, 11)) goto L_ed888;
  /* ed7f8: mov x19, x2 */
  ARC_X_W(c, 19, ARC_X_R(c, 2));
  /* ed7fc: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* ed800: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* ed804: mov x20, xzr */
  ARC_X_W(c, 20, ARC_X_R(c, 31));
  /* ed808: mov w24, #0x7fffffff */
  ARC_W_W(c, 24, UINT64_C(2147483647));
  /* ed80c: b #0xed828 */
  goto L_ed828;
L_ed810:;
  /* ed810: add x8, x1, w23, sxtw */
  ARC_X_W(c, 8, (ARC_X_R(c, 1) + ((uint64_t)(int64_t)(int32_t)(ARC_W_R(c, 23)))));
  /* ed814: add x21, x21, x23 */
  ARC_X_W(c, 21, (ARC_X_R(c, 21) + ARC_X_R(c, 23)));
  /* ed818: str x8, [x22, #0x18] */
  arc_st64((ARC_X_R(c, 22) + INT64_C(24)), ARC_X_R(c, 8));
L_ed81c:;
  /* ed81c: add x20, x23, x20 */
  ARC_X_W(c, 20, (ARC_X_R(c, 23) + ARC_X_R(c, 20)));
  /* ed820: cmp x20, x19 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 19));
  /* ed824: b.ge #0xed88c */
  if (ARC_COND(c, 10)) goto L_ed88c;
L_ed828:;
  /* ed828: ldp x1, x8, [x22, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 22) + INT64_C(24));
    ARC_X_W(c, 1, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* ed82c: cmp x1, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 1), ARC_X_R(c, 8));
  /* ed830: b.hs #0xed864 */
  if (ARC_COND(c, 2)) goto L_ed864;
  /* ed834: sub x8, x8, x1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) - ARC_X_R(c, 1)));
  /* ed838: sub x9, x19, x20 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) - ARC_X_R(c, 20)));
  /* ed83c: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* ed840: csel x8, x9, x8, lt */
  ARC_X_W(c, 8, (ARC_COND(c, 11) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* ed844: cmp x8, x24 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 24));
  /* ed848: csel x23, x8, x24, lt */
  ARC_X_W(c, 23, (ARC_COND(c, 11) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 24)));
  /* ed84c: cbz x8, #0xed810 */
  if ((ARC_X_R(c, 8)) == 0) goto L_ed810;
  /* ed850: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* ed854: mov x2, x23 */
  ARC_X_W(c, 2, ARC_X_R(c, 23));
  /* ed858: bl #0x1449f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(972892));
  fn1_1449f0(c);
  /* ed85c: ldr x1, [x22, #0x18] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 22) + INT64_C(24))));
  /* ed860: b #0xed810 */
  goto L_ed810;
L_ed864:;
  /* ed864: ldr x8, [x22] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 22)));
  /* ed868: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* ed86c: ldr x8, [x8, #0x50] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(80))));
  /* ed870: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(972916));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* ed874: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* ed878: b.eq #0xed88c */
  if (ARC_COND(c, 0)) goto L_ed88c;
  /* ed87c: mov w23, #1 */
  ARC_W_W(c, 23, UINT64_C(1));
  /* ed880: strb w0, [x21], #1 */
  { const uint64_t _a = ARC_X_R(c, 21);
    ARC_X_W(c, 21, ARC_X_R(c, 21) + INT64_C(1));
    arc_st8(_a, ARC_W_R(c, 0));
  }
  /* ed884: b #0xed81c */
  goto L_ed81c;
L_ed888:;
  /* ed888: mov x20, xzr */
  ARC_X_W(c, 20, ARC_X_R(c, 31));
L_ed88c:;
  /* ed88c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* ed890: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* ed894: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* ed898: ldp x24, x23, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* ed89c: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ed8a0: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* ed8a4: ret  */
  return;
}

void fn1_f12ec(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038915820));
  /* f12ec: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* f12f0: sub sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(112)));
  /* f12f4: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* f12f8: stp x26, x25, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* f12fc: stp x24, x23, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* f1300: stp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* f1304: stp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* f1308: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* f130c: mov w20, w1 */
  ARC_W_W(c, 20, ARC_W_R(c, 1));
  /* f1310: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f1314: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* f1318: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* f131c: bl #0x143610 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(987936));
  fn1_143610(c);
  /* f1320: ldrb w8, [sp, #8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(8))));
  /* f1324: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* f1328: b.ne #0xf1468 */
  if (ARC_COND(c, 1)) goto L_f1468;
  /* f132c: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f1330: nop  */
  /* nop: no architectural effect here */
  /* f1334: adr x26, #0x15dc40 */
  ARC_X_W(c, 26, (arc_image_bases[1] + UINT64_C(1432640)));
  /* f1338: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f133c: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f1340: ldr x22, [x8, #0x30] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 8) + INT64_C(48))));
  /* f1344: cmp x22, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 26));
  /* f1348: stur x22, [x29, #-8] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-8)), ARC_X_R(c, 22));
  /* f134c: b.eq #0xf135c */
  if (ARC_COND(c, 0)) goto L_f135c;
  /* f1350: add x1, x22, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 22) + UINT64_C(8)));
  /* f1354: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* f1358: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(987996));
  fn1_db2e0(c);
L_f135c:;
  /* f135c: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* f1360: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* f1364: ldr x1, [x1, #0xb50] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(2896))));
  /* f1368: bl #0x143748 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(988012));
  fn1_143748(c);
  /* f136c: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* f1370: cmp x22, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 26));
  /* f1374: b.eq #0xf1398 */
  if (ARC_COND(c, 0)) goto L_f1398;
  /* f1378: add x1, x22, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 22) + UINT64_C(8)));
  /* f137c: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* f1380: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(988036));
  fn1_bd950(c);
  /* f1384: cbnz x0, #0xf1398 */
  if ((ARC_X_R(c, 0)) != 0) goto L_f1398;
  /* f1388: ldr x8, [x22] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 22)));
  /* f138c: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* f1390: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* f1394: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(988056));
  arc_dispatch(c, ARC_X_R(c, 8));
L_f1398:;
  /* f1398: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f139c: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f13a0: add x22, x19, x8 */
  ARC_X_W(c, 22, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f13a4: ldr w3, [x22, #0x90] */
  ARC_W_W(c, 3, arc_ld32((ARC_X_R(c, 22) + INT64_C(144))));
  /* f13a8: ldr x23, [x22, #0x28] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 22) + INT64_C(40))));
  /* f13ac: cmn w3, #1 */
  (void)arc_add32(c, ARC_W_R(c, 3), UINT64_C(1), 0);
  /* f13b0: b.ne #0xf1424 */
  if (ARC_COND(c, 1)) goto L_f1424;
  /* f13b4: ldr x24, [x22, #0x30] */
  ARC_X_W(c, 24, arc_ld64((ARC_X_R(c, 22) + INT64_C(48))));
  /* f13b8: cmp x24, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 24), ARC_X_R(c, 26));
  /* f13bc: stur x24, [x29, #-8] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-8)), ARC_X_R(c, 24));
  /* f13c0: b.eq #0xf13d0 */
  if (ARC_COND(c, 0)) goto L_f13d0;
  /* f13c4: add x1, x24, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 24) + UINT64_C(8)));
  /* f13c8: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* f13cc: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(988112));
  fn1_db2e0(c);
L_f13d0:;
  /* f13d0: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* f13d4: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* f13d8: ldr x1, [x1, #0xb40] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(2880))));
  /* f13dc: bl #0x143748 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(988128));
  fn1_143748(c);
  /* f13e0: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* f13e4: ldr x8, [x8, #0x38] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(56))));
  /* f13e8: mov w1, #0x20 */
  ARC_W_W(c, 1, UINT64_C(32));
  /* f13ec: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(988144));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* f13f0: mov w25, w0 */
  ARC_W_W(c, 25, ARC_W_R(c, 0));
  /* f13f4: cmp x24, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 24), ARC_X_R(c, 26));
  /* f13f8: b.eq #0xf141c */
  if (ARC_COND(c, 0)) goto L_f141c;
  /* f13fc: add x1, x24, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 24) + UINT64_C(8)));
  /* f1400: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* f1404: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(988168));
  fn1_bd950(c);
  /* f1408: cbnz x0, #0xf141c */
  if ((ARC_X_R(c, 0)) != 0) goto L_f141c;
  /* f140c: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* f1410: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* f1414: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* f1418: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(988188));
  arc_dispatch(c, ARC_X_R(c, 8));
L_f141c:;
  /* f141c: and w3, w25, #0xff */
  ARC_W_W(c, 3, (ARC_W_R(c, 25) & UINT64_C(255)));
  /* f1420: str w3, [x22, #0x90] */
  arc_st32((ARC_X_R(c, 22) + INT64_C(144)), ARC_W_R(c, 3));
L_f1424:;
  /* f1424: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* f1428: ldr x8, [x8, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(24))));
  /* f142c: and w4, w20, #1 */
  ARC_W_W(c, 4, (ARC_W_R(c, 20) & UINT64_C(1)));
  /* f1430: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* f1434: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* f1438: mov x2, x22 */
  ARC_X_W(c, 2, ARC_X_R(c, 22));
  /* f143c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(988224));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* f1440: cbnz x0, #0xf1468 */
  if ((ARC_X_R(c, 0)) != 0) goto L_f1468;
  /* f1444: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f1448: mov w10, #5 */
  ARC_W_W(c, 10, UINT64_C(5));
  /* f144c: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f1450: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f1454: ldp w9, w11, [x8, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 8) + INT64_C(32));
    ARC_W_W(c, 9, arc_ld32(_pa));
    ARC_W_W(c, 11, arc_ld32(_pa + 4));
  }
  /* f1458: orr w9, w9, w10 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | ARC_W_R(c, 10)));
  /* f145c: tst w11, w9 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 11) & ARC_W_R(c, 9)));
  /* f1460: str w9, [x8, #0x20] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(32)), ARC_W_R(c, 9));
  /* f1464: b.ne #0xf1494 */
  if (ARC_COND(c, 1)) goto L_f1494;
L_f1468:;
  /* f1468: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* f146c: bl #0x143628 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(988272));
  fn1_143628(c);
L_f1470:;
  /* f1470: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f1474: ldp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* f1478: ldp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* f147c: ldp x24, x23, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* f1480: ldp x26, x25, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* f1484: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* f1488: add sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(112)));
  /* f148c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* f1490: ret  */
  return;
L_f1494:;
  /* f1494: nop  */
  /* nop: no architectural effect here */
  /* f1498: adr x0, #0x50210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(328208)));
  /* f149c: bl #0xec720 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(988320));
  fn1_ec720(c);
  /* f14a0: b #0xf14cc */
  goto L_f14cc;
  /* f14a4: cmp x24, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 24), ARC_X_R(c, 26));
  /* f14a8: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* f14ac: b.eq #0xf1500 */
  if (ARC_COND(c, 0)) goto L_f1500;
  /* f14b0: add x1, x24, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 24) + UINT64_C(8)));
  /* f14b4: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* f14b8: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(988348));
  fn1_bd950(c);
  /* f14bc: cbnz x0, #0xf1500 */
  if ((ARC_X_R(c, 0)) != 0) goto L_f1500;
  /* f14c0: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* f14c4: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* f14c8: b #0xf14f8 */
  goto L_f14f8;
L_f14cc:;
  /* f14cc: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* f14d0: b #0xf1500 */
  goto L_f1500;
  /* f14d4: cmp x22, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 26));
  /* f14d8: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* f14dc: b.eq #0xf1500 */
  if (ARC_COND(c, 0)) goto L_f1500;
  /* f14e0: add x1, x22, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 22) + UINT64_C(8)));
  /* f14e4: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* f14e8: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(988396));
  fn1_bd950(c);
  /* f14ec: cbnz x0, #0xf1500 */
  if ((ARC_X_R(c, 0)) != 0) goto L_f1500;
  /* f14f0: ldr x8, [x22] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 22)));
  /* f14f4: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
L_f14f8:;
  /* f14f8: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* f14fc: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(988416));
  arc_dispatch(c, ARC_X_R(c, 8));
L_f1500:;
  /* f1500: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* f1504: bl #0x143628 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(988424));
  fn1_143628(c);
  /* f1508: b #0xf1510 */
  goto L_f1510;
  /* f150c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
L_f1510:;
  /* f1510: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* f1514: bl #0x142548 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(988440));
  fn1_142548(c);
  /* f1518: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f151c: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f1520: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f1524: ldr w9, [x8, #0x20] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 8) + INT64_C(32))));
  /* f1528: ldrb w10, [x8, #0x24] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 8) + INT64_C(36))));
  /* f152c: orr w9, w9, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | UINT64_C(1)));
  /* f1530: str w9, [x8, #0x20] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(32)), ARC_W_R(c, 9));
  /* f1534: tbnz w10, #0, #0xf1540 */
  if (((ARC_W_R(c, 10)) >> 0 & 1) != 0) goto L_f1540;
  /* f1538: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(988476));
  fn1_142980(c);
  /* f153c: b #0xf1470 */
  goto L_f1470;
L_f1540:;
  /* f1540: bl #0x1429b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(988484));
  fn1_1429b0(c);
  /* f1544: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f1548: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(988492));
  fn1_142980(c);
  /* f154c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f1550: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(988500));
  fn1_9cc20(c);
  /* f1554: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(988504));
  fn1_a1454(c);
}

void fn1_f4208(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038927880));
  /* f4208: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* f420c: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* f4210: stp x24, x23, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* f4214: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* f4218: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* f421c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* f4220: cmp x2, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 2), UINT64_C(1));
  /* f4224: b.lt #0xf42c0 */
  if (ARC_COND(c, 11)) goto L_f42c0;
  /* f4228: mov x19, x2 */
  ARC_X_W(c, 19, ARC_X_R(c, 2));
  /* f422c: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* f4230: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* f4234: mov x20, xzr */
  ARC_X_W(c, 20, ARC_X_R(c, 31));
  /* f4238: mov w23, #0x7fffffff */
  ARC_W_W(c, 23, UINT64_C(2147483647));
  /* f423c: b #0xf425c */
  goto L_f425c;
L_f4240:;
  /* f4240: lsl x8, x24, #0x20 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 24)) << ((UINT64_C(32)) & 63)));
  /* f4244: add x21, x21, x24, lsl #2 */
  ARC_X_W(c, 21, (ARC_X_R(c, 21) + ((uint64_t)(ARC_X_R(c, 24)) << 2)));
  /* f4248: add x8, x1, x8, asr #30 */
  ARC_X_W(c, 8, (ARC_X_R(c, 1) + ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> 30))));
  /* f424c: str x8, [x22, #0x18] */
  arc_st64((ARC_X_R(c, 22) + INT64_C(24)), ARC_X_R(c, 8));
L_f4250:;
  /* f4250: add x20, x24, x20 */
  ARC_X_W(c, 20, (ARC_X_R(c, 24) + ARC_X_R(c, 20)));
  /* f4254: cmp x20, x19 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 19));
  /* f4258: b.ge #0xf42c4 */
  if (ARC_COND(c, 10)) goto L_f42c4;
L_f425c:;
  /* f425c: ldp x1, x8, [x22, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 22) + INT64_C(24));
    ARC_X_W(c, 1, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* f4260: cmp x1, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 1), ARC_X_R(c, 8));
  /* f4264: b.hs #0xf429c */
  if (ARC_COND(c, 2)) goto L_f429c;
  /* f4268: sub x8, x8, x1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) - ARC_X_R(c, 1)));
  /* f426c: sub x9, x19, x20 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) - ARC_X_R(c, 20)));
  /* f4270: asr x8, x8, #2 */
  ARC_X_W(c, 8, ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(2)) & 63))));
  /* f4274: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* f4278: csel x8, x9, x8, lt */
  ARC_X_W(c, 8, (ARC_COND(c, 11) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* f427c: cmp x8, x23 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 23));
  /* f4280: csel x24, x8, x23, lt */
  ARC_X_W(c, 24, (ARC_COND(c, 11) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 23)));
  /* f4284: cbz x8, #0xf4240 */
  if ((ARC_X_R(c, 8)) == 0) goto L_f4240;
  /* f4288: lsl x2, x24, #2 */
  ARC_X_W(c, 2, ((uint64_t)(ARC_X_R(c, 24)) << ((UINT64_C(2)) & 63)));
  /* f428c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* f4290: bl #0x1449f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1000084));
  fn1_1449f0(c);
  /* f4294: ldr x1, [x22, #0x18] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 22) + INT64_C(24))));
  /* f4298: b #0xf4240 */
  goto L_f4240;
L_f429c:;
  /* f429c: ldr x8, [x22] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 22)));
  /* f42a0: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* f42a4: ldr x8, [x8, #0x50] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(80))));
  /* f42a8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1000108));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* f42ac: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* f42b0: b.eq #0xf42c4 */
  if (ARC_COND(c, 0)) goto L_f42c4;
  /* f42b4: mov w24, #1 */
  ARC_W_W(c, 24, UINT64_C(1));
  /* f42b8: str w0, [x21], #4 */
  { const uint64_t _a = ARC_X_R(c, 21);
    ARC_X_W(c, 21, ARC_X_R(c, 21) + INT64_C(4));
    arc_st32(_a, ARC_W_R(c, 0));
  }
  /* f42bc: b #0xf4250 */
  goto L_f4250;
L_f42c0:;
  /* f42c0: mov x20, xzr */
  ARC_X_W(c, 20, ARC_X_R(c, 31));
L_f42c4:;
  /* f42c4: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* f42c8: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* f42cc: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* f42d0: ldp x24, x23, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* f42d4: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* f42d8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* f42dc: ret  */
  return;
}

void fn1_f7d24(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038943012));
  /* f7d24: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* f7d28: sub sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(96)));
  /* f7d2c: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* f7d30: str x25, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 25));
  /* f7d34: stp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* f7d38: stp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* f7d3c: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* f7d40: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* f7d44: mov w20, w1 */
  ARC_W_W(c, 20, ARC_W_R(c, 1));
  /* f7d48: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f7d4c: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* f7d50: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* f7d54: bl #0x143688 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1015128));
  fn1_143688(c);
  /* f7d58: ldrb w8, [sp] */
  ARC_W_W(c, 8, arc_ld8((c)->sp));
  /* f7d5c: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* f7d60: b.ne #0xf7ea8 */
  if (ARC_COND(c, 1)) goto L_f7ea8;
  /* f7d64: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f7d68: nop  */
  /* nop: no architectural effect here */
  /* f7d6c: adr x25, #0x15dc40 */
  ARC_X_W(c, 25, (arc_image_bases[1] + UINT64_C(1432640)));
  /* f7d70: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f7d74: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f7d78: ldr x22, [x8, #0x30] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 8) + INT64_C(48))));
  /* f7d7c: cmp x22, x25 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 25));
  /* f7d80: str x22, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 22));
  /* f7d84: b.eq #0xf7d94 */
  if (ARC_COND(c, 0)) goto L_f7d94;
  /* f7d88: add x1, x22, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 22) + UINT64_C(8)));
  /* f7d8c: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* f7d90: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1015188));
  fn1_db2e0(c);
L_f7d94:;
  /* f7d94: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* f7d98: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* f7d9c: ldr x1, [x1, #0xb68] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(2920))));
  /* f7da0: bl #0x143748 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1015204));
  fn1_143748(c);
  /* f7da4: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* f7da8: cmp x22, x25 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 25));
  /* f7dac: b.eq #0xf7dd0 */
  if (ARC_COND(c, 0)) goto L_f7dd0;
  /* f7db0: add x1, x22, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 22) + UINT64_C(8)));
  /* f7db4: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* f7db8: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1015228));
  fn1_bd950(c);
  /* f7dbc: cbnz x0, #0xf7dd0 */
  if ((ARC_X_R(c, 0)) != 0) goto L_f7dd0;
  /* f7dc0: ldr x8, [x22] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 22)));
  /* f7dc4: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* f7dc8: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* f7dcc: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1015248));
  arc_dispatch(c, ARC_X_R(c, 8));
L_f7dd0:;
  /* f7dd0: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f7dd4: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f7dd8: add x22, x19, x8 */
  ARC_X_W(c, 22, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f7ddc: ldr w3, [x22, #0x90] */
  ARC_W_W(c, 3, arc_ld32((ARC_X_R(c, 22) + INT64_C(144))));
  /* f7de0: ldr x23, [x22, #0x28] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 22) + INT64_C(40))));
  /* f7de4: cmn w3, #1 */
  (void)arc_add32(c, ARC_W_R(c, 3), UINT64_C(1), 0);
  /* f7de8: b.ne #0xf7e64 */
  if (ARC_COND(c, 1)) goto L_f7e64;
  /* f7dec: ldr x24, [x22, #0x30] */
  ARC_X_W(c, 24, arc_ld64((ARC_X_R(c, 22) + INT64_C(48))));
  /* f7df0: cmp x24, x25 */
  (void)arc_sub64(c, ARC_X_R(c, 24), ARC_X_R(c, 25));
  /* f7df4: str x24, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 24));
  /* f7df8: b.eq #0xf7e08 */
  if (ARC_COND(c, 0)) goto L_f7e08;
  /* f7dfc: add x1, x24, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 24) + UINT64_C(8)));
  /* f7e00: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* f7e04: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1015304));
  fn1_db2e0(c);
L_f7e08:;
  /* f7e08: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* f7e0c: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* f7e10: ldr x1, [x1, #0xb58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(2904))));
  /* f7e14: bl #0x143748 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1015320));
  fn1_143748(c);
  /* f7e18: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* f7e1c: ldr x8, [x8, #0x58] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(88))));
  /* f7e20: mov w1, #0x20 */
  ARC_W_W(c, 1, UINT64_C(32));
  /* f7e24: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1015336));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* f7e28: mov w3, w0 */
  ARC_W_W(c, 3, ARC_W_R(c, 0));
  /* f7e2c: cmp x24, x25 */
  (void)arc_sub64(c, ARC_X_R(c, 24), ARC_X_R(c, 25));
  /* f7e30: b.eq #0xf7e60 */
  if (ARC_COND(c, 0)) goto L_f7e60;
  /* f7e34: add x1, x24, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 24) + UINT64_C(8)));
  /* f7e38: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* f7e3c: mov w25, w3 */
  ARC_W_W(c, 25, ARC_W_R(c, 3));
  /* f7e40: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1015364));
  fn1_bd950(c);
  /* f7e44: mov w3, w25 */
  ARC_W_W(c, 3, ARC_W_R(c, 25));
  /* f7e48: cbnz x0, #0xf7e60 */
  if ((ARC_X_R(c, 0)) != 0) goto L_f7e60;
  /* f7e4c: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* f7e50: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* f7e54: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* f7e58: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1015388));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* f7e5c: mov w3, w25 */
  ARC_W_W(c, 3, ARC_W_R(c, 25));
L_f7e60:;
  /* f7e60: str w3, [x22, #0x90] */
  arc_st32((ARC_X_R(c, 22) + INT64_C(144)), ARC_W_R(c, 3));
L_f7e64:;
  /* f7e64: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* f7e68: ldr x8, [x8, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(24))));
  /* f7e6c: and w4, w20, #1 */
  ARC_W_W(c, 4, (ARC_W_R(c, 20) & UINT64_C(1)));
  /* f7e70: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* f7e74: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* f7e78: mov x2, x22 */
  ARC_X_W(c, 2, ARC_X_R(c, 22));
  /* f7e7c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1015424));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* f7e80: cbnz x0, #0xf7ea8 */
  if ((ARC_X_R(c, 0)) != 0) goto L_f7ea8;
  /* f7e84: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f7e88: mov w10, #5 */
  ARC_W_W(c, 10, UINT64_C(5));
  /* f7e8c: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f7e90: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f7e94: ldp w9, w11, [x8, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 8) + INT64_C(32));
    ARC_W_W(c, 9, arc_ld32(_pa));
    ARC_W_W(c, 11, arc_ld32(_pa + 4));
  }
  /* f7e98: orr w9, w9, w10 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | ARC_W_R(c, 10)));
  /* f7e9c: tst w11, w9 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 11) & ARC_W_R(c, 9)));
  /* f7ea0: str w9, [x8, #0x20] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(32)), ARC_W_R(c, 9));
  /* f7ea4: b.ne #0xf7ed4 */
  if (ARC_COND(c, 1)) goto L_f7ed4;
L_f7ea8:;
  /* f7ea8: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* f7eac: bl #0x1436a0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1015472));
  fn1_1436a0(c);
L_f7eb0:;
  /* f7eb0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f7eb4: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* f7eb8: ldr x25, [sp, #0x20] */
  ARC_X_W(c, 25, arc_ld64(((c)->sp + INT64_C(32))));
  /* f7ebc: ldp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* f7ec0: ldp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* f7ec4: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* f7ec8: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* f7ecc: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* f7ed0: ret  */
  return;
L_f7ed4:;
  /* f7ed4: nop  */
  /* nop: no architectural effect here */
  /* f7ed8: adr x0, #0x50210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(328208)));
  /* f7edc: bl #0xec720 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1015520));
  fn1_ec720(c);
  /* f7ee0: b #0xf7f0c */
  goto L_f7f0c;
  /* f7ee4: cmp x24, x25 */
  (void)arc_sub64(c, ARC_X_R(c, 24), ARC_X_R(c, 25));
  /* f7ee8: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* f7eec: b.eq #0xf7f40 */
  if (ARC_COND(c, 0)) goto L_f7f40;
  /* f7ef0: add x1, x24, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 24) + UINT64_C(8)));
  /* f7ef4: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* f7ef8: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1015548));
  fn1_bd950(c);
  /* f7efc: cbnz x0, #0xf7f40 */
  if ((ARC_X_R(c, 0)) != 0) goto L_f7f40;
  /* f7f00: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* f7f04: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* f7f08: b #0xf7f38 */
  goto L_f7f38;
L_f7f0c:;
  /* f7f0c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* f7f10: b #0xf7f40 */
  goto L_f7f40;
  /* f7f14: cmp x22, x25 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 25));
  /* f7f18: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* f7f1c: b.eq #0xf7f40 */
  if (ARC_COND(c, 0)) goto L_f7f40;
  /* f7f20: add x1, x22, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 22) + UINT64_C(8)));
  /* f7f24: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* f7f28: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1015596));
  fn1_bd950(c);
  /* f7f2c: cbnz x0, #0xf7f40 */
  if ((ARC_X_R(c, 0)) != 0) goto L_f7f40;
  /* f7f30: ldr x8, [x22] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 22)));
  /* f7f34: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
L_f7f38:;
  /* f7f38: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* f7f3c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1015616));
  arc_dispatch(c, ARC_X_R(c, 8));
L_f7f40:;
  /* f7f40: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* f7f44: bl #0x1436a0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1015624));
  fn1_1436a0(c);
  /* f7f48: b #0xf7f50 */
  goto L_f7f50;
  /* f7f4c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
L_f7f50:;
  /* f7f50: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* f7f54: bl #0x142548 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1015640));
  fn1_142548(c);
  /* f7f58: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f7f5c: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f7f60: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f7f64: ldr w9, [x8, #0x20] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 8) + INT64_C(32))));
  /* f7f68: ldrb w10, [x8, #0x24] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 8) + INT64_C(36))));
  /* f7f6c: orr w9, w9, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | UINT64_C(1)));
  /* f7f70: str w9, [x8, #0x20] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(32)), ARC_W_R(c, 9));
  /* f7f74: tbnz w10, #0, #0xf7f80 */
  if (((ARC_W_R(c, 10)) >> 0 & 1) != 0) goto L_f7f80;
  /* f7f78: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1015676));
  fn1_142980(c);
  /* f7f7c: b #0xf7eb0 */
  goto L_f7eb0;
L_f7f80:;
  /* f7f80: bl #0x1429b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1015684));
  fn1_1429b0(c);
  /* f7f84: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f7f88: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1015692));
  fn1_142980(c);
  /* f7f8c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f7f90: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1015700));
  fn1_9cc20(c);
  /* f7f94: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1015704));
  fn1_a1454(c);
}

void fn1_fd2ac(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038964908));
  /* fd2ac: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* fd2b0: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* fd2b4: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* fd2b8: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* fd2bc: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* fd2c0: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* fd2c4: adrp x9, #0x151000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1380352)));
  /* fd2c8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* fd2cc: ldr x8, [x8, #0xb08] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2824))));
  /* fd2d0: ldr x9, [x9, #0xae0] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(2784))));
  /* fd2d4: ldrb w10, [x0, #0x48] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 0) + INT64_C(72))));
  /* fd2d8: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* fd2dc: add x11, x8, #0x40 */
  ARC_X_W(c, 11, (ARC_X_R(c, 8) + UINT64_C(64)));
  /* fd2e0: add x8, x8, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(24)));
  /* fd2e4: add x9, x9, #0x10 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(16)));
  /* fd2e8: str x11, [x20, #0x70]! */
  { const uint64_t _a = (ARC_X_R(c, 20) + INT64_C(112));
    ARC_X_W(c, 20, ARC_X_R(c, 20) + INT64_C(112));
    arc_st64(_a, ARC_X_R(c, 11));
  }
  /* fd2ec: stp x8, x9, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* fd2f0: tbz w10, #0, #0xfd304 */
  if (((ARC_W_R(c, 10)) >> 0 & 1) == 0) goto L_fd304;
  /* fd2f4: ldr x8, [x19, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(72))));
  /* fd2f8: ldr x0, [x19, #0x58] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(88))));
  /* fd2fc: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* fd300: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1037060));
  fn1_142608(c);
L_fd304:;
  /* fd304: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* fd308: nop  */
  /* nop: no architectural effect here */
  /* fd30c: adr x9, #0x15dc40 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1432640)));
  /* fd310: ldr x8, [x8, #0xaa8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2728))));
  /* fd314: ldr x21, [x19, #0x10] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* fd318: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* fd31c: cmp x21, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 9));
  /* fd320: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
  /* fd324: b.eq #0xfd348 */
  if (ARC_COND(c, 0)) goto L_fd348;
  /* fd328: add x1, x21, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(8)));
  /* fd32c: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* fd330: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1037108));
  fn1_bd950(c);
  /* fd334: cbnz x0, #0xfd348 */
  if ((ARC_X_R(c, 0)) != 0) goto L_fd348;
  /* fd338: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* fd33c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* fd340: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* fd344: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1037128));
  arc_dispatch(c, ARC_X_R(c, 8));
L_fd348:;
  /* fd348: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* fd34c: bl #0x1433b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1037136));
  fn1_1433b8(c);
  /* fd350: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* fd354: mov w1, #0x108 */
  ARC_W_W(c, 1, UINT64_C(264));
  /* fd358: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* fd35c: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* fd360: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* fd364: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* fd368: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_1034e8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038990056));
  /* 1034e8: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 1034ec: sub sp, sp, #0x1b0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(432)));
  /* 1034f0: stp x29, x30, [sp, #0x150] */
  { const uint64_t _pa = ((c)->sp + INT64_C(336));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1034f4: stp x28, x27, [sp, #0x160] */
  { const uint64_t _pa = ((c)->sp + INT64_C(352));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* 1034f8: stp x26, x25, [sp, #0x170] */
  { const uint64_t _pa = ((c)->sp + INT64_C(368));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* 1034fc: stp x24, x23, [sp, #0x180] */
  { const uint64_t _pa = ((c)->sp + INT64_C(384));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 103500: stp x22, x21, [sp, #0x190] */
  { const uint64_t _pa = ((c)->sp + INT64_C(400));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 103504: stp x20, x19, [sp, #0x1a0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(416));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 103508: add x29, sp, #0x150 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(336)));
  /* 10350c: mov x0, x3 */
  ARC_X_W(c, 0, ARC_X_R(c, 3));
  /* 103510: mov x21, x2 */
  ARC_X_W(c, 21, ARC_X_R(c, 2));
  /* 103514: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 103518: sub x8, x29, #0x48 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 10351c: sub x1, x29, #0x24 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(36)));
  /* 103520: sub x2, x29, #0x28 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(40)));
  /* 103524: sub x3, x29, #0x2c */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) - UINT64_C(44)));
  /* 103528: stp x5, x4, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 5));
    arc_st64(_pa + 8, ARC_X_R(c, 4));
  }
  /* 10352c: sub x25, x29, #0x68 */
  ARC_X_W(c, 25, (ARC_X_R(c, 29) - UINT64_C(104)));
  /* 103530: bl #0x143898 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1062196));
  fn1_143898(c);
  /* 103534: stp xzr, xzr, [x25, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 25) + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 103538: str xzr, [x25, #0x18] */
  arc_st64((ARC_X_R(c, 25) + INT64_C(24)), ARC_X_R(c, 31));
  /* 10353c: sub x0, x29, #0x60 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(96)));
  /* 103540: mov w1, #0x16 */
  ARC_W_W(c, 1, UINT64_C(22));
  /* 103544: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 103548: sub x19, x29, #0x60 */
  ARC_X_W(c, 19, (ARC_X_R(c, 29) - UINT64_C(96)));
  /* 10354c: bl #0x142d10 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1062224));
  fn1_142d10(c);
  /* 103550: ldurb w8, [x29, #-0x60] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-96))));
  /* 103554: ldr x9, [x25, #0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 25) + INT64_C(24))));
  /* 103558: mov w26, wzr */
  ARC_W_W(c, 26, ARC_W_R(c, 31));
  /* 10355c: add x27, sp, #0x48 */
  ARC_X_W(c, 27, ((c)->sp + UINT64_C(72)));
  /* 103560: mov w10, #1 */
  ARC_W_W(c, 10, UINT64_C(1));
  /* 103564: orr x28, x19, #1 */
  ARC_X_W(c, 28, (ARC_X_R(c, 19) | UINT64_C(1)));
  /* 103568: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 10356c: mov w8, #0x45 */
  ARC_W_W(c, 8, UINT64_C(69));
  /* 103570: add x22, sp, #0x3c */
  ARC_X_W(c, 22, ((c)->sp + UINT64_C(60)));
  /* 103574: csinc x23, x9, x19, ne */
  ARC_X_W(c, 23, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 19)) + 1)));
  /* 103578: add x19, sp, #0x40 */
  ARC_X_W(c, 19, ((c)->sp + UINT64_C(64)));
  /* 10357c: str wzr, [sp, #0x3c] */
  arc_st32(((c)->sp + INT64_C(60)), ARC_W_R(c, 31));
  /* 103580: str x27, [sp, #0x40] */
  arc_st64(((c)->sp + INT64_C(64)), ARC_X_R(c, 27));
  /* 103584: strb w10, [sp, #0x38] */
  arc_st8(((c)->sp + INT64_C(56)), ARC_W_R(c, 10));
  /* 103588: strb w8, [sp, #0x34] */
  arc_st8(((c)->sp + INT64_C(52)), ARC_W_R(c, 8));
  /* 10358c: str x23, [x25] */
  arc_st64(ARC_X_R(c, 25), ARC_X_R(c, 23));
  /* 103590: b #0x10359c */
  goto L_10359c;
L_103594:;
  /* 103594: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* 103598: str x8, [x20, #0x18] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(24)), ARC_X_R(c, 8));
L_10359c:;
  /* 10359c: cbz x20, #0x1035c4 */
  if ((ARC_X_R(c, 20)) == 0) goto L_1035c4;
  /* 1035a0: ldp x8, x9, [x20, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 1035a4: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 1035a8: b.eq #0x1035e0 */
  if (ARC_COND(c, 0)) goto L_1035e0;
  /* 1035ac: cbz x21, #0x103650 */
  if ((ARC_X_R(c, 21)) == 0) goto L_103650;
  /* 1035b0: ldp x8, x9, [x21, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 1035b4: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 1035b8: b.ne #0x10382c */
  if (ARC_COND(c, 1)) goto L_10382c;
  /* 1035bc: mov w24, wzr */
  ARC_W_W(c, 24, ARC_W_R(c, 31));
  /* 1035c0: b #0x10362c */
  goto L_10362c;
L_1035c4:;
  /* 1035c4: cbz x21, #0x103828 */
  if ((ARC_X_R(c, 21)) == 0) goto L_103828;
  /* 1035c8: ldp x8, x9, [x21, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 1035cc: mov x20, xzr */
  ARC_X_W(c, 20, ARC_X_R(c, 31));
  /* 1035d0: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 1035d4: b.ne #0x103650 */
  if (ARC_COND(c, 1)) goto L_103650;
  /* 1035d8: mov w24, #1 */
  ARC_W_W(c, 24, UINT64_C(1));
  /* 1035dc: b #0x10362c */
  goto L_10362c;
L_1035e0:;
  /* 1035e0: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 1035e4: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 1035e8: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1035ec: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1062384));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1035f0: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 1035f4: cset w24, eq */
  ARC_W_W(c, 24, (ARC_COND(c, 0) ? 1 : 0));
  /* 1035f8: cbz x21, #0x10361c */
  if ((ARC_X_R(c, 21)) == 0) goto L_10361c;
  /* 1035fc: ldp x9, x10, [x21, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(24));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* 103600: csel x8, xzr, x20, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 20)));
  /* 103604: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* 103608: b.eq #0x103628 */
  if (ARC_COND(c, 0)) goto L_103628;
  /* 10360c: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 103610: b.ne #0x10382c */
  if (ARC_COND(c, 1)) goto L_10382c;
  /* 103614: mov x20, xzr */
  ARC_X_W(c, 20, ARC_X_R(c, 31));
  /* 103618: b #0x103650 */
  goto L_103650;
L_10361c:;
  /* 10361c: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 103620: b.ne #0x103650 */
  if (ARC_COND(c, 1)) goto L_103650;
  /* 103624: b #0x103b98 */
  goto L_103b98;
L_103628:;
  /* 103628: mov x20, x8 */
  ARC_X_W(c, 20, ARC_X_R(c, 8));
L_10362c:;
  /* 10362c: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 103630: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 103634: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 103638: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1062460));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 10363c: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 103640: cset w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? 1 : 0));
  /* 103644: csel x21, xzr, x21, eq */
  ARC_X_W(c, 21, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 21)));
  /* 103648: cmp w24, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 24), ARC_W_R(c, 8));
  /* 10364c: b.eq #0x10382c */
  if (ARC_COND(c, 0)) goto L_10382c;
L_103650:;
  /* 103650: ldurb w8, [x29, #-0x60] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-96))));
  /* 103654: ldr x9, [x25, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 25) + INT64_C(16))));
  /* 103658: ldr x11, [x25] */
  ARC_X_W(c, 11, arc_ld64(ARC_X_R(c, 25)));
  /* 10365c: lsr x10, x8, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* 103660: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 103664: csel x24, x10, x9, eq */
  ARC_X_W(c, 24, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* 103668: add x9, x23, x24 */
  ARC_X_W(c, 9, (ARC_X_R(c, 23) + ARC_X_R(c, 24)));
  /* 10366c: cmp x11, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 9));
  /* 103670: b.ne #0x10372c */
  if (ARC_COND(c, 1)) goto L_10372c;
  /* 103674: cmp x24, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 24), UINT64_C(1));
  /* 103678: b.lt #0x103690 */
  if (ARC_COND(c, 11)) goto L_103690;
  /* 10367c: sub x0, x29, #0x60 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(96)));
  /* 103680: mov x1, x24 */
  ARC_X_W(c, 1, ARC_X_R(c, 24));
  /* 103684: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 103688: bl #0x142d10 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1062540));
  fn1_142d10(c);
  /* 10368c: b #0x1036b4 */
  goto L_1036b4;
L_103690:;
  /* 103690: lsl x9, x24, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 24)) << ((UINT64_C(1)) & 63)));
  /* 103694: tbnz w8, #0, #0x1036a8 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_1036a8;
  /* 103698: lsl w8, w9, #1 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 9)) << ((UINT64_C(1)) & 31)));
  /* 10369c: sturb w8, [x29, #-0x60] */
  arc_st8((ARC_X_R(c, 29) + INT64_C(-96)), ARC_W_R(c, 8));
  /* 1036a0: mov x8, x28 */
  ARC_X_W(c, 8, ARC_X_R(c, 28));
  /* 1036a4: b #0x1036b0 */
  goto L_1036b0;
L_1036a8:;
  /* 1036a8: ldr x8, [x25, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 25) + INT64_C(24))));
  /* 1036ac: str x9, [x25, #0x10] */
  arc_st64((ARC_X_R(c, 25) + INT64_C(16)), ARC_X_R(c, 9));
L_1036b0:;
  /* 1036b0: strb wzr, [x8, x9] */
  arc_st8((ARC_X_R(c, 8) + ARC_X_R(c, 9)), ARC_W_R(c, 31));
L_1036b4:;
  /* 1036b4: ldp x9, x10, [x25, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 25) + INT64_C(8));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* 1036b8: ldurb w8, [x29, #-0x60] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-96))));
  /* 1036bc: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 1036c0: mov w8, #0x16 */
  ARC_W_W(c, 8, UINT64_C(22));
  /* 1036c4: and x11, x9, #0xfffffffffffffffe */
  ARC_X_W(c, 11, (ARC_X_R(c, 9) & UINT64_C(18446744073709551614)));
  /* 1036c8: ubfx x12, x9, #1, #7 */
  ARC_X_W(c, 12, (((uint64_t)(ARC_X_R(c, 9)) >> 1) & UINT64_C(127)));
  /* 1036cc: sub x11, x11, #1 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) - UINT64_C(1)));
  /* 1036d0: csel x8, x8, x11, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 11)));
  /* 1036d4: tst x9, #1 */
  arc_flags_logical64(c, (uint64_t)(ARC_X_R(c, 9) & UINT64_C(1)));
  /* 1036d8: csel x10, x12, x10, eq */
  ARC_X_W(c, 10, (ARC_COND(c, 0) ? (ARC_X_R(c, 12)) : ARC_X_R(c, 10)));
  /* 1036dc: subs x1, x8, x10 */
  ARC_X_W(c, 1, arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10)));
  /* 1036e0: b.ls #0x1036f4 */
  if (ARC_COND(c, 9)) goto L_1036f4;
  /* 1036e4: sub x0, x29, #0x60 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(96)));
  /* 1036e8: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1036ec: bl #0x142d10 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1062640));
  fn1_142d10(c);
  /* 1036f0: b #0x103714 */
  goto L_103714;
L_1036f4:;
  /* 1036f4: tbnz w9, #0, #0x103708 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) != 0) goto L_103708;
  /* 1036f8: lsl w9, w8, #1 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 8)) << ((UINT64_C(1)) & 31)));
  /* 1036fc: sturb w9, [x29, #-0x60] */
  arc_st8((ARC_X_R(c, 29) + INT64_C(-96)), ARC_W_R(c, 9));
  /* 103700: mov x9, x28 */
  ARC_X_W(c, 9, ARC_X_R(c, 28));
  /* 103704: b #0x103710 */
  goto L_103710;
L_103708:;
  /* 103708: ldr x9, [x25, #0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 25) + INT64_C(24))));
  /* 10370c: str x8, [x25, #0x10] */
  arc_st64((ARC_X_R(c, 25) + INT64_C(16)), ARC_X_R(c, 8));
L_103710:;
  /* 103710: strb wzr, [x9, x8] */
  arc_st8((ARC_X_R(c, 9) + ARC_X_R(c, 8)), ARC_W_R(c, 31));
L_103714:;
  /* 103714: ldurb w8, [x29, #-0x60] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-96))));
  /* 103718: ldr x9, [x25, #0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 25) + INT64_C(24))));
  /* 10371c: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 103720: csel x23, x28, x9, eq */
  ARC_X_W(c, 23, (ARC_COND(c, 0) ? (ARC_X_R(c, 28)) : ARC_X_R(c, 9)));
  /* 103724: add x8, x23, x24 */
  ARC_X_W(c, 8, (ARC_X_R(c, 23) + ARC_X_R(c, 24)));
  /* 103728: str x8, [x25] */
  arc_st64(ARC_X_R(c, 25), ARC_X_R(c, 8));
L_10372c:;
  /* 10372c: ldp x8, x9, [x20, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 103730: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 103734: b.eq #0x103740 */
  if (ARC_COND(c, 0)) goto L_103740;
  /* 103738: ldrb w0, [x8] */
  ARC_W_W(c, 0, arc_ld8(ARC_X_R(c, 8)));
  /* 10373c: b #0x103750 */
  goto L_103750;
L_103740:;
  /* 103740: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 103744: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 103748: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 10374c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1062736));
  arc_dispatch(c, ARC_X_R(c, 8));
L_103750:;
  /* 103750: ldurb w6, [x29, #-0x2c] */
  ARC_W_W(c, 6, arc_ld8((ARC_X_R(c, 29) + INT64_C(-44))));
  /* 103754: ldurb w5, [x29, #-0x28] */
  ARC_W_W(c, 5, arc_ld8((ARC_X_R(c, 29) + INT64_C(-40))));
  /* 103758: add x1, sp, #0x38 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(56)));
  /* 10375c: sub x8, x29, #0x24 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(36)));
  /* 103760: add x2, sp, #0x34 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(52)));
  /* 103764: sub x4, x29, #0x68 */
  ARC_X_W(c, 4, (ARC_X_R(c, 29) - UINT64_C(104)));
  /* 103768: sub x7, x29, #0x48 */
  ARC_X_W(c, 7, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 10376c: mov x3, x23 */
  ARC_X_W(c, 3, ARC_X_R(c, 23));
  /* 103770: stp x22, x8, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* 103774: stp x27, x19, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 27));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 103778: bl #0x1438b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1062780));
  fn1_1438b0(c);
  /* 10377c: cbnz w0, #0x10382c */
  if ((ARC_W_R(c, 0)) != 0) goto L_10382c;
  /* 103780: tbz w26, #0, #0x10378c */
  if (((ARC_W_R(c, 26)) >> 0 & 1) == 0) goto L_10378c;
  /* 103784: mov w26, #1 */
  ARC_W_W(c, 26, UINT64_C(1));
  /* 103788: b #0x1037ec */
  goto L_1037ec;
L_10378c:;
  /* 10378c: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 103790: sub x9, x8, x23 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - ARC_X_R(c, 23)));
  /* 103794: cmp x9, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(1));
  /* 103798: b.lt #0x1037e8 */
  if (ARC_COND(c, 11)) goto L_1037e8;
  /* 10379c: ldrb w8, [x23] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 23)));
  /* 1037a0: cmp w8, #0x2b */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(43));
  /* 1037a4: b.eq #0x1037b0 */
  if (ARC_COND(c, 0)) goto L_1037b0;
  /* 1037a8: cmp w8, #0x2d */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(45));
  /* 1037ac: b.ne #0x10380c */
  if (ARC_COND(c, 1)) goto L_10380c;
L_1037b0:;
  /* 1037b0: cmp x9, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(1));
  /* 1037b4: b.eq #0x1037e8 */
  if (ARC_COND(c, 0)) goto L_1037e8;
  /* 1037b8: cmp w8, #0x2d */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(45));
  /* 1037bc: b.eq #0x1037c8 */
  if (ARC_COND(c, 0)) goto L_1037c8;
  /* 1037c0: cmp w8, #0x2b */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(43));
  /* 1037c4: b.ne #0x1037e8 */
  if (ARC_COND(c, 1)) goto L_1037e8;
L_1037c8:;
  /* 1037c8: ldrb w8, [x23, #1] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 23) + INT64_C(1))));
  /* 1037cc: mov w26, #1 */
  ARC_W_W(c, 26, UINT64_C(1));
  /* 1037d0: cmp w8, #0x2e */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(46));
  /* 1037d4: b.eq #0x1037ec */
  if (ARC_COND(c, 0)) goto L_1037ec;
  /* 1037d8: sub w8, w8, #0x30 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) - UINT64_C(48)));
  /* 1037dc: cmp w8, #9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(9));
  /* 1037e0: b.ls #0x1037ec */
  if (ARC_COND(c, 9)) goto L_1037ec;
  /* 1037e4: b #0x10382c */
  goto L_10382c;
L_1037e8:;
  /* 1037e8: mov w26, wzr */
  ARC_W_W(c, 26, ARC_W_R(c, 31));
L_1037ec:;
  /* 1037ec: ldp x8, x9, [x20, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 1037f0: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 1037f4: b.ne #0x103594 */
  if (ARC_COND(c, 1)) goto L_103594;
  /* 1037f8: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 1037fc: ldr x8, [x8, #0x50] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(80))));
  /* 103800: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 103804: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1062920));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 103808: b #0x10359c */
  goto L_10359c;
L_10380c:;
  /* 10380c: cmp w8, #0x2e */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(46));
  /* 103810: mov w26, #1 */
  ARC_W_W(c, 26, UINT64_C(1));
  /* 103814: b.eq #0x1037ec */
  if (ARC_COND(c, 0)) goto L_1037ec;
  /* 103818: sub w8, w8, #0x30 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) - UINT64_C(48)));
  /* 10381c: cmp w8, #0xa */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(10));
  /* 103820: b.lo #0x1037ec */
  if (ARC_COND(c, 3)) goto L_1037ec;
  /* 103824: b #0x10382c */
  goto L_10382c;
L_103828:;
  /* 103828: mov x20, xzr */
  ARC_X_W(c, 20, ARC_X_R(c, 31));
L_10382c:;
  /* 10382c: ldurb w8, [x29, #-0x48] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-72))));
  /* 103830: ldr x9, [x25, #0x28] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 25) + INT64_C(40))));
  /* 103834: ldr x22, [sp, #0x28] */
  ARC_X_W(c, 22, arc_ld64(((c)->sp + INT64_C(40))));
  /* 103838: lsr x10, x8, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* 10383c: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 103840: csel x8, x10, x9, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* 103844: cbz x8, #0x103874 */
  if ((ARC_X_R(c, 8)) == 0) goto L_103874;
  /* 103848: ldrb w8, [sp, #0x38] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(56))));
  /* 10384c: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* 103850: b.ne #0x103874 */
  if (ARC_COND(c, 1)) goto L_103874;
  /* 103854: ldr x8, [sp, #0x40] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(64))));
  /* 103858: add x9, sp, #0x48 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(72)));
  /* 10385c: sub x9, x8, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - ARC_X_R(c, 9)));
  /* 103860: cmp x9, #0x9f */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(159));
  /* 103864: b.gt #0x103874 */
  if (ARC_COND(c, 12)) goto L_103874;
  /* 103868: ldr w9, [sp, #0x3c] */
  ARC_W_W(c, 9, arc_ld32(((c)->sp + INT64_C(60))));
  /* 10386c: str w9, [x8], #4 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(4));
    arc_st32(_a, ARC_W_R(c, 9));
  }
  /* 103870: str x8, [sp, #0x40] */
  arc_st64(((c)->sp + INT64_C(64)), ARC_X_R(c, 8));
L_103874:;
  /* 103874: ldr x1, [x25] */
  ARC_X_W(c, 1, arc_ld64(ARC_X_R(c, 25)));
  /* 103878: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 10387c: mov x2, x22 */
  ARC_X_W(c, 2, ARC_X_R(c, 22));
  /* 103880: bl #0x13635c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1063044));
  fn1_13635c(c);
  /* 103884: ldurb w10, [x29, #-0x48] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 29) + INT64_C(-72))));
  /* 103888: ldr x12, [sp, #0x40] */
  ARC_X_W(c, 12, arc_ld64(((c)->sp + INT64_C(64))));
  /* 10388c: add x11, sp, #0x48 */
  ARC_X_W(c, 11, ((c)->sp + UINT64_C(72)));
  /* 103890: ldr x8, [x25, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 25) + INT64_C(40))));
  /* 103894: lsr x9, x10, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 10)) >> ((UINT64_C(1)) & 63)));
  /* 103898: ands w13, w10, #1 */
  { uint32_t _r = (uint32_t)(ARC_W_R(c, 10) & UINT64_C(1));
    arc_flags_logical32(c, _r);
    ARC_W_W(c, 13, _r); }
  /* 10389c: sub x11, x12, x11 */
  ARC_X_W(c, 11, (ARC_X_R(c, 12) - ARC_X_R(c, 11)));
  /* 1038a0: csel x8, x9, x8, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* 1038a4: ldr x9, [sp, #0x20] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(32))));
  /* 1038a8: cmp x11, #5 */
  (void)arc_sub64(c, ARC_X_R(c, 11), UINT64_C(5));
  /* 1038ac: str q0, [x9] */
  arc_st64(ARC_X_R(c, 9), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 9) + 8, (c)->q[0].u64[1]);
  /* 1038b0: b.lt #0x103a10 */
  if (ARC_COND(c, 11)) goto L_103a10;
  /* 1038b4: cbz x8, #0x103a10 */
  if ((ARC_X_R(c, 8)) == 0) goto L_103a10;
  /* 1038b8: sub x8, x12, #4 */
  ARC_X_W(c, 8, (ARC_X_R(c, 12) - UINT64_C(4)));
  /* 1038bc: add x9, sp, #0x48 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(72)));
  /* 1038c0: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* 1038c4: cset w11, lo */
  ARC_W_W(c, 11, (ARC_COND(c, 3) ? 1 : 0));
  /* 1038c8: cmp x9, x12 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 12));
  /* 1038cc: b.eq #0x10397c */
  if (ARC_COND(c, 0)) goto L_10397c;
  /* 1038d0: cbz w11, #0x10397c */
  if ((ARC_W_R(c, 11)) == 0) goto L_10397c;
  /* 1038d4: add x10, sp, #0x48 */
  ARC_X_W(c, 10, ((c)->sp + UINT64_C(72)));
  /* 1038d8: sub x14, x12, #8 */
  ARC_X_W(c, 14, (ARC_X_R(c, 12) - UINT64_C(8)));
  /* 1038dc: add x11, x10, #4 */
  ARC_X_W(c, 11, (ARC_X_R(c, 10) + UINT64_C(4)));
  /* 1038e0: cmp x14, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 14), ARC_X_R(c, 11));
  /* 1038e4: csel x13, x14, x11, hi */
  ARC_X_W(c, 13, (ARC_COND(c, 8) ? (ARC_X_R(c, 14)) : ARC_X_R(c, 11)));
  /* 1038e8: sub x13, x13, #4 */
  ARC_X_W(c, 13, (ARC_X_R(c, 13) - UINT64_C(4)));
  /* 1038ec: cmp x13, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 13), ARC_X_R(c, 10));
  /* 1038f0: cinc x15, x10, ne */
  ARC_X_W(c, 15, (ARC_COND(c, 1) ? (ARC_X_R(c, 10)) + 1 : (ARC_X_R(c, 10))));
  /* 1038f4: cmp x13, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 13), ARC_X_R(c, 10));
  /* 1038f8: sub x15, x13, x15 */
  ARC_X_W(c, 15, (ARC_X_R(c, 13) - ARC_X_R(c, 15)));
  /* 1038fc: lsr x15, x15, #3 */
  ARC_X_W(c, 15, ((uint64_t)(ARC_X_R(c, 15)) >> ((UINT64_C(3)) & 63)));
  /* 103900: cinc x13, x15, ne */
  ARC_X_W(c, 13, (ARC_COND(c, 1) ? (ARC_X_R(c, 15)) + 1 : (ARC_X_R(c, 15))));
  /* 103904: cmp x13, #0x13 */
  (void)arc_sub64(c, ARC_X_R(c, 13), UINT64_C(19));
  /* 103908: b.lo #0x103950 */
  if (ARC_COND(c, 3)) goto L_103950;
  /* 10390c: cmp x14, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 14), ARC_X_R(c, 11));
  /* 103910: csel x14, x14, x11, hi */
  ARC_X_W(c, 14, (ARC_COND(c, 8) ? (ARC_X_R(c, 14)) : ARC_X_R(c, 11)));
  /* 103914: sub x14, x14, #4 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) - UINT64_C(4)));
  /* 103918: cmp x14, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 14), ARC_X_R(c, 10));
  /* 10391c: cinc x15, x10, ne */
  ARC_X_W(c, 15, (ARC_COND(c, 1) ? (ARC_X_R(c, 10)) + 1 : (ARC_X_R(c, 10))));
  /* 103920: cmp x14, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 14), ARC_X_R(c, 10));
  /* 103924: sub x15, x14, x15 */
  ARC_X_W(c, 15, (ARC_X_R(c, 14) - ARC_X_R(c, 15)));
  /* 103928: lsr x15, x15, #3 */
  ARC_X_W(c, 15, ((uint64_t)(ARC_X_R(c, 15)) >> ((UINT64_C(3)) & 63)));
  /* 10392c: cinc x14, x15, ne */
  ARC_X_W(c, 14, (ARC_COND(c, 1) ? (ARC_X_R(c, 15)) + 1 : (ARC_X_R(c, 15))));
  /* 103930: cmp x10, x12 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 12));
  /* 103934: b.hs #0x103aa0 */
  if (ARC_COND(c, 2)) goto L_103aa0;
  /* 103938: lsl x14, x14, #2 */
  ARC_X_W(c, 14, ((uint64_t)(ARC_X_R(c, 14)) << ((UINT64_C(2)) & 63)));
  /* 10393c: sub x15, x12, x14 */
  ARC_X_W(c, 15, (ARC_X_R(c, 12) - ARC_X_R(c, 14)));
  /* 103940: add x11, x11, x14 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) + ARC_X_R(c, 14)));
  /* 103944: sub x14, x15, #4 */
  ARC_X_W(c, 14, (ARC_X_R(c, 15) - UINT64_C(4)));
  /* 103948: cmp x14, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 14), ARC_X_R(c, 11));
  /* 10394c: b.hs #0x103aa0 */
  if (ARC_COND(c, 2)) goto L_103aa0;
L_103950:;
  /* 103950: mov x11, x8 */
  ARC_X_W(c, 11, ARC_X_R(c, 8));
L_103954:;
  /* 103954: add x10, x10, #4 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(4)));
L_103958:;
  /* 103958: ldr w12, [x11] */
  ARC_W_W(c, 12, arc_ld32(ARC_X_R(c, 11)));
  /* 10395c: ldur w13, [x10, #-4] */
  ARC_W_W(c, 13, arc_ld32((ARC_X_R(c, 10) + INT64_C(-4))));
  /* 103960: stur w12, [x10, #-4] */
  arc_st32((ARC_X_R(c, 10) + INT64_C(-4)), ARC_W_R(c, 12));
  /* 103964: str w13, [x11], #0xfffffffffffffffc */
  { const uint64_t _a = ARC_X_R(c, 11);
    ARC_X_W(c, 11, ARC_X_R(c, 11) + INT64_C(-4));
    arc_st32(_a, ARC_W_R(c, 13));
  }
  /* 103968: cmp x10, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 11));
  /* 10396c: add x10, x10, #4 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(4)));
  /* 103970: b.lo #0x103958 */
  if (ARC_COND(c, 3)) goto L_103958;
L_103974:;
  /* 103974: ldurb w10, [x29, #-0x48] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 29) + INT64_C(-72))));
  /* 103978: and w13, w10, #1 */
  ARC_W_W(c, 13, (ARC_W_R(c, 10) & UINT64_C(1)));
L_10397c:;
  /* 10397c: ldr x11, [x25, #0x30] */
  ARC_X_W(c, 11, arc_ld64((ARC_X_R(c, 25) + INT64_C(48))));
  /* 103980: cmp w13, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 13), UINT64_C(0));
  /* 103984: sub x12, x29, #0x48 */
  ARC_X_W(c, 12, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 103988: csinc x11, x11, x12, ne */
  ARC_X_W(c, 11, (ARC_COND(c, 1) ? (ARC_X_R(c, 11)) : ((ARC_X_R(c, 12)) + 1)));
  /* 10398c: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* 103990: b.hs #0x1039e8 */
  if (ARC_COND(c, 2)) goto L_1039e8;
  /* 103994: lsr w9, w10, #1 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 10)) >> ((UINT64_C(1)) & 31)));
  /* 103998: ldr x10, [x25, #0x28] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 25) + INT64_C(40))));
  /* 10399c: cmp w13, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 13), UINT64_C(0));
  /* 1039a0: csel x9, x9, x10, eq */
  ARC_X_W(c, 9, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 10)));
  /* 1039a4: add x10, sp, #0x48 */
  ARC_X_W(c, 10, ((c)->sp + UINT64_C(72)));
  /* 1039a8: add x9, x11, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 11) + ARC_X_R(c, 9)));
  /* 1039ac: b #0x1039c8 */
  goto L_1039c8;
L_1039b0:;
  /* 1039b0: sub x12, x9, x11 */
  ARC_X_W(c, 12, (ARC_X_R(c, 9) - ARC_X_R(c, 11)));
  /* 1039b4: add x10, x10, #4 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(4)));
  /* 1039b8: cmp x12, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 12), UINT64_C(1));
  /* 1039bc: cinc x11, x11, gt */
  ARC_X_W(c, 11, (ARC_COND(c, 12) ? (ARC_X_R(c, 11)) + 1 : (ARC_X_R(c, 11))));
  /* 1039c0: cmp x10, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 8));
  /* 1039c4: b.hs #0x1039e8 */
  if (ARC_COND(c, 2)) goto L_1039e8;
L_1039c8:;
  /* 1039c8: ldrb w12, [x11] */
  ARC_W_W(c, 12, arc_ld8(ARC_X_R(c, 11)));
  /* 1039cc: cbz w12, #0x1039b0 */
  if ((ARC_W_R(c, 12)) == 0) goto L_1039b0;
  /* 1039d0: cmp w12, #0xff */
  (void)arc_sub32(c, ARC_W_R(c, 12), UINT64_C(255));
  /* 1039d4: b.eq #0x1039b0 */
  if (ARC_COND(c, 0)) goto L_1039b0;
  /* 1039d8: ldr w13, [x10] */
  ARC_W_W(c, 13, arc_ld32(ARC_X_R(c, 10)));
  /* 1039dc: cmp w13, w12 */
  (void)arc_sub32(c, ARC_W_R(c, 13), ARC_W_R(c, 12));
  /* 1039e0: b.eq #0x1039b0 */
  if (ARC_COND(c, 0)) goto L_1039b0;
  /* 1039e4: b #0x103a08 */
  goto L_103a08;
L_1039e8:;
  /* 1039e8: ldrb w9, [x11] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 11)));
  /* 1039ec: cbz w9, #0x103a10 */
  if ((ARC_W_R(c, 9)) == 0) goto L_103a10;
  /* 1039f0: cmp w9, #0xff */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(255));
  /* 1039f4: b.eq #0x103a10 */
  if (ARC_COND(c, 0)) goto L_103a10;
  /* 1039f8: ldr w8, [x8] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 8)));
  /* 1039fc: sub w8, w8, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) - UINT64_C(1)));
  /* 103a00: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* 103a04: b.lo #0x103a10 */
  if (ARC_COND(c, 3)) goto L_103a10;
L_103a08:;
  /* 103a08: mov w8, #4 */
  ARC_W_W(c, 8, UINT64_C(4));
  /* 103a0c: str w8, [x22] */
  arc_st32(ARC_X_R(c, 22), ARC_W_R(c, 8));
L_103a10:;
  /* 103a10: cbz x20, #0x103a38 */
  if ((ARC_X_R(c, 20)) == 0) goto L_103a38;
  /* 103a14: ldp x8, x9, [x20, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 103a18: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 103a1c: b.eq #0x103a54 */
  if (ARC_COND(c, 0)) goto L_103a54;
  /* 103a20: cbz x21, #0x103b40 */
  if ((ARC_X_R(c, 21)) == 0) goto L_103b40;
  /* 103a24: ldp x8, x9, [x21, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 103a28: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 103a2c: b.ne #0x103b34 */
  if (ARC_COND(c, 1)) goto L_103b34;
  /* 103a30: mov w19, wzr */
  ARC_W_W(c, 19, ARC_W_R(c, 31));
  /* 103a34: b #0x103b14 */
  goto L_103b14;
L_103a38:;
  /* 103a38: cbz x21, #0x103a98 */
  if ((ARC_X_R(c, 21)) == 0) goto L_103a98;
  /* 103a3c: ldp x8, x9, [x21, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 103a40: mov x20, xzr */
  ARC_X_W(c, 20, ARC_X_R(c, 31));
  /* 103a44: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 103a48: b.ne #0x103b40 */
  if (ARC_COND(c, 1)) goto L_103b40;
  /* 103a4c: mov w19, #1 */
  ARC_W_W(c, 19, UINT64_C(1));
  /* 103a50: b #0x103b14 */
  goto L_103b14;
L_103a54:;
  /* 103a54: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 103a58: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 103a5c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 103a60: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1063524));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 103a64: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 103a68: cset w19, eq */
  ARC_W_W(c, 19, (ARC_COND(c, 0) ? 1 : 0));
  /* 103a6c: cbz x21, #0x103a90 */
  if ((ARC_X_R(c, 21)) == 0) goto L_103a90;
  /* 103a70: ldp x9, x10, [x21, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(24));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* 103a74: csel x8, xzr, x20, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 20)));
  /* 103a78: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* 103a7c: b.eq #0x103b10 */
  if (ARC_COND(c, 0)) goto L_103b10;
  /* 103a80: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 103a84: b.ne #0x103b34 */
  if (ARC_COND(c, 1)) goto L_103b34;
  /* 103a88: mov x20, xzr */
  ARC_X_W(c, 20, ARC_X_R(c, 31));
  /* 103a8c: b #0x103b40 */
  goto L_103b40;
L_103a90:;
  /* 103a90: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 103a94: b.ne #0x103b40 */
  if (ARC_COND(c, 1)) goto L_103b40;
L_103a98:;
  /* 103a98: mov x20, xzr */
  ARC_X_W(c, 20, ARC_X_R(c, 31));
  /* 103a9c: b #0x103b34 */
  goto L_103b34;
L_103aa0:;
  /* 103aa0: add x13, x13, #1 */
  ARC_X_W(c, 13, (ARC_X_R(c, 13) + UINT64_C(1)));
  /* 103aa4: add x15, sp, #0x48 */
  ARC_X_W(c, 15, ((c)->sp + UINT64_C(72)));
  /* 103aa8: sub x12, x12, #0x10 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) - UINT64_C(16)));
  /* 103aac: and x14, x13, #0x7ffffffffffffff8 */
  ARC_X_W(c, 14, (ARC_X_R(c, 13) & UINT64_C(9223372036854775800)));
  /* 103ab0: lsl x10, x14, #2 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 14)) << ((UINT64_C(2)) & 63)));
  /* 103ab4: mov x16, x14 */
  ARC_X_W(c, 16, ARC_X_R(c, 14));
  /* 103ab8: sub x11, x8, x10 */
  ARC_X_W(c, 11, (ARC_X_R(c, 8) - ARC_X_R(c, 10)));
  /* 103abc: add x10, x15, x10 */
  ARC_X_W(c, 10, (ARC_X_R(c, 15) + ARC_X_R(c, 10)));
  /* 103ac0: add x15, x15, #0x10 */
  ARC_X_W(c, 15, (ARC_X_R(c, 15) + UINT64_C(16)));
L_103ac4:;
  /* 103ac4: ldp q1, q0, [x12, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 12) + INT64_C(-16));
    arc_q_w(c, 1, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 0, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* 103ac8: sub x16, x16, #8 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) - UINT64_C(8)));
  /* 103acc: ldp q2, q3, [x15, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 15) + INT64_C(-16));
    arc_q_w(c, 2, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 3, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* 103ad0: rev64 v0.4s, v0.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[0].u32[1];
    _t.u32[1] = (c)->q[0].u32[0];
    _t.u32[2] = (c)->q[0].u32[3];
    _t.u32[3] = (c)->q[0].u32[2];
    (c)->q[0] = _t; }
  /* 103ad4: rev64 v1.4s, v1.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[1].u32[1];
    _t.u32[1] = (c)->q[1].u32[0];
    _t.u32[2] = (c)->q[1].u32[3];
    _t.u32[3] = (c)->q[1].u32[2];
    (c)->q[1] = _t; }
  /* 103ad8: rev64 v2.4s, v2.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[2].u32[1];
    _t.u32[1] = (c)->q[2].u32[0];
    _t.u32[2] = (c)->q[2].u32[3];
    _t.u32[3] = (c)->q[2].u32[2];
    (c)->q[2] = _t; }
  /* 103adc: rev64 v3.4s, v3.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[3].u32[1];
    _t.u32[1] = (c)->q[3].u32[0];
    _t.u32[2] = (c)->q[3].u32[3];
    _t.u32[3] = (c)->q[3].u32[2];
    (c)->q[3] = _t; }
  /* 103ae0: ext v0.16b, v0.16b, v0.16b, #8 */
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
  /* 103ae4: ext v1.16b, v1.16b, v1.16b, #8 */
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
  /* 103ae8: ext v2.16b, v2.16b, v2.16b, #8 */
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
  /* 103aec: ext v3.16b, v3.16b, v3.16b, #8 */
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
  /* 103af0: stp q0, q1, [x15, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 15) + INT64_C(-16));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[1].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[1].u64[1]);
  }
  /* 103af4: add x15, x15, #0x20 */
  ARC_X_W(c, 15, (ARC_X_R(c, 15) + UINT64_C(32)));
  /* 103af8: stp q3, q2, [x12, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 12) + INT64_C(-16));
    arc_st64(_pa, (c)->q[3].u64[0]);
    arc_st64(_pa + 8, (c)->q[3].u64[1]);
    arc_st64((_pa + 16), (c)->q[2].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[2].u64[1]);
  }
  /* 103afc: sub x12, x12, #0x20 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) - UINT64_C(32)));
  /* 103b00: cbnz x16, #0x103ac4 */
  if ((ARC_X_R(c, 16)) != 0) goto L_103ac4;
  /* 103b04: cmp x13, x14 */
  (void)arc_sub64(c, ARC_X_R(c, 13), ARC_X_R(c, 14));
  /* 103b08: b.eq #0x103974 */
  if (ARC_COND(c, 0)) goto L_103974;
  /* 103b0c: b #0x103954 */
  goto L_103954;
L_103b10:;
  /* 103b10: mov x20, x8 */
  ARC_X_W(c, 20, ARC_X_R(c, 8));
L_103b14:;
  /* 103b14: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 103b18: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 103b1c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 103b20: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1063716));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 103b24: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 103b28: cset w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? 1 : 0));
  /* 103b2c: eor w8, w19, w8 */
  ARC_W_W(c, 8, (ARC_W_R(c, 19) ^ ARC_W_R(c, 8)));
  /* 103b30: tbnz w8, #0, #0x103b40 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_103b40;
L_103b34:;
  /* 103b34: ldr w8, [x22] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 22)));
  /* 103b38: orr w8, w8, #2 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | UINT64_C(2)));
  /* 103b3c: str w8, [x22] */
  arc_st32(ARC_X_R(c, 22), ARC_W_R(c, 8));
L_103b40:;
  /* 103b40: ldurb w8, [x29, #-0x60] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-96))));
  /* 103b44: tbz w8, #0, #0x103b58 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_103b58;
  /* 103b48: ldr x8, [x25, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 25) + INT64_C(8))));
  /* 103b4c: ldr x0, [x25, #0x18] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 25) + INT64_C(24))));
  /* 103b50: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 103b54: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1063768));
  fn1_142608(c);
L_103b58:;
  /* 103b58: ldurb w8, [x29, #-0x48] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-72))));
  /* 103b5c: tbz w8, #0, #0x103b70 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_103b70;
  /* 103b60: ldr x8, [x25, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 25) + INT64_C(32))));
  /* 103b64: ldr x0, [x25, #0x30] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 25) + INT64_C(48))));
  /* 103b68: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 103b6c: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1063792));
  fn1_142608(c);
L_103b70:;
  /* 103b70: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 103b74: ldp x20, x19, [sp, #0x1a0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(416));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 103b78: ldp x22, x21, [sp, #0x190] */
  { const uint64_t _pa = ((c)->sp + INT64_C(400));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 103b7c: ldp x24, x23, [sp, #0x180] */
  { const uint64_t _pa = ((c)->sp + INT64_C(384));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 103b80: ldp x26, x25, [sp, #0x170] */
  { const uint64_t _pa = ((c)->sp + INT64_C(368));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* 103b84: ldp x28, x27, [sp, #0x160] */
  { const uint64_t _pa = ((c)->sp + INT64_C(352));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* 103b88: ldp x29, x30, [sp, #0x150] */
  { const uint64_t _pa = ((c)->sp + INT64_C(336));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 103b8c: add sp, sp, #0x1b0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(432)));
  /* 103b90: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 103b94: ret  */
  return;
L_103b98:;
  /* 103b98: mov x20, x21 */
  ARC_X_W(c, 20, ARC_X_R(c, 21));
  /* 103b9c: b #0x10382c */
  goto L_10382c;
  /* 103ba0: b #0x103bac */
  goto L_103bac;
  /* 103ba4: b #0x103bac */
  goto L_103bac;
  /* 103ba8: b #0x103bac */
  goto L_103bac;
L_103bac:;
  /* 103bac: ldurb w8, [x29, #-0x60] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-96))));
  /* 103bb0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 103bb4: tbnz w8, #0, #0x103bc8 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_103bc8;
  /* 103bb8: ldurb w8, [x29, #-0x48] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-72))));
  /* 103bbc: tbnz w8, #0, #0x103be0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_103be0;
L_103bc0:;
  /* 103bc0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 103bc4: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1063880));
  fn1_9cc20(c);
L_103bc8:;
  /* 103bc8: ldr x8, [x25, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 25) + INT64_C(8))));
  /* 103bcc: ldr x0, [x25, #0x18] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 25) + INT64_C(24))));
  /* 103bd0: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 103bd4: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1063896));
  fn1_142608(c);
  /* 103bd8: ldurb w8, [x29, #-0x48] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-72))));
  /* 103bdc: tbz w8, #0, #0x103bc0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_103bc0;
L_103be0:;
  /* 103be0: ldr x8, [x25, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 25) + INT64_C(32))));
  /* 103be4: ldr x0, [x25, #0x30] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 25) + INT64_C(48))));
  /* 103be8: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 103bec: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1063920));
  fn1_142608(c);
  /* 103bf0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 103bf4: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1063928));
  fn1_9cc20(c);
}

void fn1_1109a4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039044516));
  /* 1109a4: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 1109a8: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1109ac: stp x24, x23, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 1109b0: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1109b4: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1109b8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1109bc: ldr x8, [x0, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_a));
  }
  /* 1109c0: mov x21, x5 */
  ARC_X_W(c, 21, ARC_X_R(c, 5));
  /* 1109c4: mov x20, x4 */
  ARC_X_W(c, 20, ARC_X_R(c, 4));
  /* 1109c8: mov x22, x3 */
  ARC_X_W(c, 22, ARC_X_R(c, 3));
  /* 1109cc: mov x23, x2 */
  ARC_X_W(c, 23, ARC_X_R(c, 2));
  /* 1109d0: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 1109d4: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 1109d8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1116636));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1109dc: ldrb w8, [x0] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 0)));
  /* 1109e0: ldrb w9, [x0, #0x18] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(24))));
  /* 1109e4: ldr x10, [x0, #8] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* 1109e8: lsr x11, x8, #1 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* 1109ec: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 1109f0: ldr x8, [x0, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(32))));
  /* 1109f4: lsr x12, x9, #1 */
  ARC_X_W(c, 12, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(1)) & 63)));
  /* 1109f8: csel x10, x11, x10, eq */
  ARC_X_W(c, 10, (ARC_COND(c, 0) ? (ARC_X_R(c, 11)) : ARC_X_R(c, 10)));
  /* 1109fc: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* 110a00: csel x8, x12, x8, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 12)) : ARC_X_R(c, 8)));
  /* 110a04: cmn x10, x8 */
  (void)arc_add64(c, ARC_X_R(c, 10), ARC_X_R(c, 8), 0);
  /* 110a08: b.ne #0x110a1c */
  if (ARC_COND(c, 1)) goto L_110a1c;
  /* 110a0c: ldr w8, [x20] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 20)));
  /* 110a10: orr w8, w8, #4 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | UINT64_C(4)));
  /* 110a14: str w8, [x20] */
  arc_st32(ARC_X_R(c, 20), ARC_W_R(c, 8));
  /* 110a18: b #0x110a74 */
  goto L_110a74;
L_110a1c:;
  /* 110a1c: mov x24, x0 */
  ARC_X_W(c, 24, ARC_X_R(c, 0));
  /* 110a20: add x3, x0, #0x30 */
  ARC_X_W(c, 3, (ARC_X_R(c, 0) + UINT64_C(48)));
  /* 110a24: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 110a28: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 110a2c: mov x2, x24 */
  ARC_X_W(c, 2, ARC_X_R(c, 24));
  /* 110a30: mov x4, x21 */
  ARC_X_W(c, 4, ARC_X_R(c, 21));
  /* 110a34: mov x5, x20 */
  ARC_X_W(c, 5, ARC_X_R(c, 20));
  /* 110a38: mov w6, wzr */
  ARC_W_W(c, 6, ARC_W_R(c, 31));
  /* 110a3c: bl #0xffa98 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1116736));
  fn1_ffa98(c);
  /* 110a40: ldr w8, [x19] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 19)));
  /* 110a44: subs x9, x0, x24 */
  ARC_X_W(c, 9, arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 24)));
  /* 110a48: b.ne #0x110a5c */
  if (ARC_COND(c, 1)) goto L_110a5c;
  /* 110a4c: cmp w8, #0xc */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(12));
  /* 110a50: b.ne #0x110a5c */
  if (ARC_COND(c, 1)) goto L_110a5c;
  /* 110a54: str wzr, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 31));
  /* 110a58: b #0x110a74 */
  goto L_110a74;
L_110a5c:;
  /* 110a5c: cmp x9, #0x18 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(24));
  /* 110a60: b.ne #0x110a74 */
  if (ARC_COND(c, 1)) goto L_110a74;
  /* 110a64: cmp w8, #0xb */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(11));
  /* 110a68: b.gt #0x110a74 */
  if (ARC_COND(c, 12)) goto L_110a74;
  /* 110a6c: add w8, w8, #0xc */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) + UINT64_C(12)));
  /* 110a70: str w8, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 8));
L_110a74:;
  /* 110a74: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 110a78: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 110a7c: ldp x24, x23, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 110a80: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 110a84: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 110a88: ret  */
  return;
}

void fn1_113d54(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039057748));
  /* 113d54: bti c */
  /* bti: no architectural effect here */
  /* 113d58: mov w0, #-1 */
  ARC_W_W(c, 0, UINT64_C(18446744073709551615));
  /* 113d5c: ret  */
  return;
}

void fn1_11acfc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039086332));
  /* 11acfc: bti c */
  /* bti: no architectural effect here */
  /* 11ad00: ret  */
  return;
}

void fn1_12530c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039128844));
  /* 12530c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 125310: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 125314: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 125318: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 12531c: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 125320: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 125324: ldr x22, [x0] */
  ARC_X_W(c, 22, arc_ld64(ARC_X_R(c, 0)));
  /* 125328: ldar x8, [x1] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 1)));
  /* 12532c: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 125330: cmn x8, #1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0);
  /* 125334: b.eq #0x1253f0 */
  if (ARC_COND(c, 0)) goto L_1253f0;
  /* 125338: nop  */
  /* nop: no architectural effect here */
  /* 12533c: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 125340: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1200964));
  fn1_142518(c);
  /* 125344: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 125348: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 12534c: b.ne #0x125378 */
  if (ARC_COND(c, 1)) goto L_125378;
  /* 125350: nop  */
  /* nop: no architectural effect here */
  /* 125354: adr x20, #0x15791c */
  ARC_X_W(c, 20, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 125358: nop  */
  /* nop: no architectural effect here */
  /* 12535c: adr x21, #0x1578f4 */
  ARC_X_W(c, 21, (arc_image_bases[1] + UINT64_C(1407220)));
L_125360:;
  /* 125360: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 125364: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 125368: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1201004));
  fn1_142530(c);
  /* 12536c: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 125370: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 125374: b.eq #0x125360 */
  if (ARC_COND(c, 0)) goto L_125360;
L_125378:;
  /* 125378: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 12537c: cbz x8, #0x125390 */
  if ((ARC_X_R(c, 8)) == 0) goto L_125390;
  /* 125380: nop  */
  /* nop: no architectural effect here */
  /* 125384: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 125388: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1201036));
  fn1_142560(c);
  /* 12538c: b #0x1253f0 */
  goto L_1253f0;
L_125390:;
  /* 125390: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 125394: str x19, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 19));
  /* 125398: strb wzr, [sp, #8] */
  arc_st8(((c)->sp + INT64_C(8)), ARC_W_R(c, 31));
  /* 12539c: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* 1253a0: nop  */
  /* nop: no architectural effect here */
  /* 1253a4: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 1253a8: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1201068));
  fn1_142560(c);
  /* 1253ac: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 1253b0: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 1253b4: ldr x1, [x1, #0xc58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3160))));
  /* 1253b8: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1201084));
  fn1_a2030(c);
  /* 1253bc: add w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + UINT64_C(1)));
  /* 1253c0: str w8, [x19, #8] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(8)), ARC_W_R(c, 8));
  /* 1253c4: nop  */
  /* nop: no architectural effect here */
  /* 1253c8: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 1253cc: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1201104));
  fn1_142518(c);
  /* 1253d0: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 1253d4: stlr x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* 1253d8: nop  */
  /* nop: no architectural effect here */
  /* 1253dc: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 1253e0: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1201124));
  fn1_142560(c);
  /* 1253e4: nop  */
  /* nop: no architectural effect here */
  /* 1253e8: adr x0, #0x15791c */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 1253ec: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1201136));
  fn1_142578(c);
L_1253f0:;
  /* 1253f0: ldp x8, x10, [x22, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 22) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* 1253f4: ldrsw x9, [x19, #8] */
  ARC_X_W(c, 9, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 19) + INT64_C(8)))));
  /* 1253f8: sub x9, x9, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - UINT64_C(1)));
  /* 1253fc: sub x10, x10, x8 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) - ARC_X_R(c, 8)));
  /* 125400: cmp x9, x10, asr #3 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ((uint64_t)((int64_t)(ARC_X_R(c, 10)) >> 3)));
  /* 125404: b.hs #0x125418 */
  if (ARC_COND(c, 2)) goto L_125418;
  /* 125408: ldr x8, [x8, x9, lsl #3] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3))));
  /* 12540c: cmp x8, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(0));
  /* 125410: cset w0, ne */
  ARC_W_W(c, 0, (ARC_COND(c, 1) ? 1 : 0));
  /* 125414: b #0x12541c */
  goto L_12541c;
L_125418:;
  /* 125418: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
L_12541c:;
  /* 12541c: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 125420: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 125424: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 125428: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 12542c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 125430: ret  */
  return;
  /* 125434: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 125438: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 12543c: bl #0xd2a78 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1201216));
  fn1_d2a78(c);
  /* 125440: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 125444: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1201224));
  fn1_9cc20(c);
}

void fn1_127ca4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039139492));
  /* 127ca4: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 127ca8: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 127cac: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 127cb0: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 127cb4: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 127cb8: ldr x0, [x0, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 127cbc: mov w19, w2 */
  ARC_W_W(c, 19, ARC_W_R(c, 2));
  /* 127cc0: mov w21, w1 */
  ARC_W_W(c, 21, ARC_W_R(c, 1));
  /* 127cc4: bl #0x1443c0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1211592));
  fn1_1443c0(c);
  /* 127cc8: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 127ccc: str x0, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 0));
  /* 127cd0: mov w0, w21 */
  ARC_W_W(c, 0, ARC_W_R(c, 21));
  /* 127cd4: bl #0x1443d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1211608));
  fn1_1443d8(c);
  /* 127cd8: mov w21, w0 */
  ARC_W_W(c, 21, ARC_W_R(c, 0));
  /* 127cdc: cbz x20, #0x127ce8 */
  if ((ARC_X_R(c, 20)) == 0) goto L_127ce8;
  /* 127ce0: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 127ce4: bl #0x1443c0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1211624));
  fn1_1443c0(c);
L_127ce8:;
  /* 127ce8: cmn w21, #1 */
  (void)arc_add32(c, ARC_W_R(c, 21), UINT64_C(1), 0);
  /* 127cec: csel w0, w19, w21, eq */
  ARC_W_W(c, 0, (ARC_COND(c, 0) ? (ARC_W_R(c, 19)) : ARC_W_R(c, 21)));
  /* 127cf0: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 127cf4: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 127cf8: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 127cfc: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 127d00: ret  */
  return;
  /* 127d04: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1211656));
  fn1_a1454(c);
  /* 127d08: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 127d0c: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 127d10: bl #0x135428 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1211668));
  fn1_135428(c);
  /* 127d14: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 127d18: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1211676));
  fn1_9cc20(c);
}

void fn1_129cf4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039147764));
  /* 129cf4: bti c */
  /* bti: no architectural effect here */
  /* 129cf8: ldrb w9, [x0, #0x20] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(32))));
  /* 129cfc: mov w8, #7 */
  ARC_W_W(c, 8, UINT64_C(7));
  /* 129d00: tst w9, #4 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(4)));
  /* 129d04: mov w9, #4 */
  ARC_W_W(c, 9, UINT64_C(4));
  /* 129d08: csel w0, w9, w8, eq */
  ARC_W_W(c, 0, (ARC_COND(c, 0) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 8)));
  /* 129d0c: ret  */
  return;
}

void fn1_12b868(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039154792));
  /* 12b868: bti c */
  /* bti: no architectural effect here */
  /* 12b86c: ldr w8, [x0, #0x20] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 0) + INT64_C(32))));
  /* 12b870: mov x1, x3 */
  ARC_X_W(c, 1, ARC_X_R(c, 3));
  /* 12b874: ldr x3, [x0, #0x18] */
  ARC_X_W(c, 3, arc_ld64((ARC_X_R(c, 0) + INT64_C(24))));
  /* 12b878: mov x0, x2 */
  ARC_X_W(c, 0, ARC_X_R(c, 2));
  /* 12b87c: mov x2, x4 */
  ARC_X_W(c, 2, ARC_X_R(c, 4));
  /* 12b880: mov w4, w8 */
  ARC_W_W(c, 4, ARC_W_R(c, 8));
  /* 12b884: b #0x128eb8 */
  fn1_128eb8(c); return;
}

void fn1_12e0a0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039165088));
  /* 12e0a0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 12e0a4: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 12e0a8: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 12e0ac: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 12e0b0: nop  */
  /* nop: no architectural effect here */
  /* 12e0b4: adr x8, #0x15dee8 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1433320)));
  /* 12e0b8: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 12e0bc: tbz w8, #0, #0x12e0d8 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_12e0d8;
L_12e0c0:;
  /* 12e0c0: nop  */
  /* nop: no architectural effect here */
  /* 12e0c4: adr x0, #0x15ded0 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1433296)));
  /* 12e0c8: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 12e0cc: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 12e0d0: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 12e0d4: ret  */
  return;
L_12e0d8:;
  /* 12e0d8: nop  */
  /* nop: no architectural effect here */
  /* 12e0dc: adr x0, #0x15dee8 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1433320)));
  /* 12e0e0: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1237220));
  fn1_1424b8(c);
  /* 12e0e4: cbz w0, #0x12e0c0 */
  if ((ARC_W_R(c, 0)) == 0) goto L_12e0c0;
  /* 12e0e8: nop  */
  /* nop: no architectural effect here */
  /* 12e0ec: adr x0, #0x15ded0 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1433296)));
  /* 12e0f0: adrp x1, #0x75000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(479232)));
  /* 12e0f4: add x1, x1, #0x78 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(120)));
  /* 12e0f8: bl #0x12bdc4 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1237244));
  fn1_12bdc4(c);
  /* 12e0fc: adrp x0, #0x151000 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 12e100: nop  */
  /* nop: no architectural effect here */
  /* 12e104: adr x1, #0x15ded0 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1433296)));
  /* 12e108: ldr x0, [x0, #0xa48] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(2632))));
  /* 12e10c: nop  */
  /* nop: no architectural effect here */
  /* 12e110: adr x2, #0x148af8 */
  ARC_X_W(c, 2, (arc_image_bases[1] + UINT64_C(1346296)));
  /* 12e114: bl #0x1423f8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1237272));
  fn1_1423f8(c);
  /* 12e118: nop  */
  /* nop: no architectural effect here */
  /* 12e11c: adr x0, #0x15dee8 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1433320)));
  /* 12e120: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1237284));
  fn1_1424d0(c);
  /* 12e124: b #0x12e0c0 */
  goto L_12e0c0;
  /* 12e128: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 12e12c: nop  */
  /* nop: no architectural effect here */
  /* 12e130: adr x0, #0x15dee8 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1433320)));
  /* 12e134: bl #0x1424e8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1237304));
  fn1_1424e8(c);
  /* 12e138: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 12e13c: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1237312));
  fn1_9cc20(c);
}

void fn1_134a9c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039192220));
  /* 134a9c: bti c */
  /* bti: no architectural effect here */
  /* 134aa0: add x0, x0, #0x3a0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(928)));
  /* 134aa4: ret  */
  return;
}

void fn1_135800(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039195648));
  /* 135800: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 135804: sub sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(96)));
  /* 135808: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 13580c: stp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 135810: stp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 135814: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 135818: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 13581c: mov x9, x0 */
  ARC_X_W(c, 9, ARC_X_R(c, 0));
  /* 135820: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 135824: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 135828: add x1, x9, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 9) + UINT64_C(48)));
  /* 13582c: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* 135830: bl #0x143460 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1267764));
  fn1_143460(c);
  /* 135834: adrp x24, #0x151000 */
  ARC_X_W(c, 24, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 135838: ldr x24, [x24, #0xcb0] */
  ARC_X_W(c, 24, arc_ld64((ARC_X_R(c, 24) + INT64_C(3248))));
  /* 13583c: ldr x23, [sp, #8] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(8))));
  /* 135840: ldar x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 135844: cmn x8, #1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0);
  /* 135848: b.eq #0x135904 */
  if (ARC_COND(c, 0)) goto L_135904;
  /* 13584c: nop  */
  /* nop: no architectural effect here */
  /* 135850: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 135854: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1267800));
  fn1_142518(c);
  /* 135858: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 13585c: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 135860: b.ne #0x13588c */
  if (ARC_COND(c, 1)) goto L_13588c;
  /* 135864: nop  */
  /* nop: no architectural effect here */
  /* 135868: adr x21, #0x15791c */
  ARC_X_W(c, 21, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 13586c: nop  */
  /* nop: no architectural effect here */
  /* 135870: adr x22, #0x1578f4 */
  ARC_X_W(c, 22, (arc_image_bases[1] + UINT64_C(1407220)));
L_135874:;
  /* 135874: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 135878: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 13587c: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1267840));
  fn1_142530(c);
  /* 135880: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 135884: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 135888: b.eq #0x135874 */
  if (ARC_COND(c, 0)) goto L_135874;
L_13588c:;
  /* 13588c: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 135890: cbz x8, #0x1358a4 */
  if ((ARC_X_R(c, 8)) == 0) goto L_1358a4;
  /* 135894: nop  */
  /* nop: no architectural effect here */
  /* 135898: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 13589c: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1267872));
  fn1_142560(c);
  /* 1358a0: b #0x135904 */
  goto L_135904;
L_1358a4:;
  /* 1358a4: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 1358a8: str x24, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 24));
  /* 1358ac: strb wzr, [sp, #0x18] */
  arc_st8(((c)->sp + INT64_C(24)), ARC_W_R(c, 31));
  /* 1358b0: str x8, [x24] */
  arc_st64(ARC_X_R(c, 24), ARC_X_R(c, 8));
  /* 1358b4: nop  */
  /* nop: no architectural effect here */
  /* 1358b8: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 1358bc: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1267904));
  fn1_142560(c);
  /* 1358c0: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 1358c4: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 1358c8: ldr x1, [x1, #0xc58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3160))));
  /* 1358cc: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1267920));
  fn1_a2030(c);
  /* 1358d0: add w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + UINT64_C(1)));
  /* 1358d4: str w8, [x24, #8] */
  arc_st32((ARC_X_R(c, 24) + INT64_C(8)), ARC_W_R(c, 8));
  /* 1358d8: nop  */
  /* nop: no architectural effect here */
  /* 1358dc: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 1358e0: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1267940));
  fn1_142518(c);
  /* 1358e4: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 1358e8: stlr x8, [x24] */
  arc_st64(ARC_X_R(c, 24), ARC_X_R(c, 8));
  /* 1358ec: nop  */
  /* nop: no architectural effect here */
  /* 1358f0: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 1358f4: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1267960));
  fn1_142560(c);
  /* 1358f8: nop  */
  /* nop: no architectural effect here */
  /* 1358fc: adr x0, #0x15791c */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 135900: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1267972));
  fn1_142578(c);
L_135904:;
  /* 135904: ldp x8, x10, [x23, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 23) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* 135908: ldrsw x9, [x24, #8] */
  ARC_X_W(c, 9, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 24) + INT64_C(8)))));
  /* 13590c: sub x9, x9, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - UINT64_C(1)));
  /* 135910: sub x10, x10, x8 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) - ARC_X_R(c, 8)));
  /* 135914: cmp x9, x10, asr #3 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ((uint64_t)((int64_t)(ARC_X_R(c, 10)) >> 3)));
  /* 135918: b.hs #0x135970 */
  if (ARC_COND(c, 2)) goto L_135970;
  /* 13591c: ldr x21, [x8, x9, lsl #3] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3))));
  /* 135920: cbz x21, #0x135970 */
  if ((ARC_X_R(c, 21)) == 0) goto L_135970;
  /* 135924: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 135928: ldr x8, [x8, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* 13592c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 135930: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1268020));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 135934: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 135938: strb w0, [x20] */
  arc_st8(ARC_X_R(c, 20), ARC_W_R(c, 0));
  /* 13593c: ldr x9, [x8, #0x28] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* 135940: mov x8, x19 */
  ARC_X_W(c, 8, ARC_X_R(c, 19));
  /* 135944: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 135948: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1268044));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 13594c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 135950: bl #0x143478 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1268052));
  fn1_143478(c);
  /* 135954: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 135958: ldp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 13595c: ldp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 135960: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 135964: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* 135968: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 13596c: ret  */
  return;
L_135970:;
  /* 135970: bl #0xfc3b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1268084));
  fn1_fc3b8(c);
  /* 135974: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 135978: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 13597c: bl #0xd2a78 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1268096));
  fn1_d2a78(c);
  /* 135980: b #0x13598c */
  goto L_13598c;
  /* 135984: b #0x135988 */
  goto L_135988;
L_135988:;
  /* 135988: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
L_13598c:;
  /* 13598c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 135990: bl #0x143478 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1268116));
  fn1_143478(c);
  /* 135994: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 135998: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1268124));
  fn1_9cc20(c);
}

void fn1_138aa8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039208616));
  /* 138aa8: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 138aac: sub sp, sp, #0x110 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(272)));
  /* 138ab0: stp x29, x30, [sp, #0xf0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(240));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 138ab4: stp x28, x19, [sp, #0x100] */
  { const uint64_t _pa = ((c)->sp + INT64_C(256));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 138ab8: add x29, sp, #0xf0 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(240)));
  /* 138abc: mov x8, #-0x28 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551576));
  /* 138ac0: mov x9, sp */
  ARC_X_W(c, 9, (c)->sp);
  /* 138ac4: sub x10, x29, #0x68 */
  ARC_X_W(c, 10, (ARC_X_R(c, 29) - UINT64_C(104)));
  /* 138ac8: movk x8, #0xff80, lsl #32 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(18446462603027808255)) | UINT64_C(280925220896768)));
  /* 138acc: add x9, x9, #0x80 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(128)));
  /* 138ad0: stp x3, x4, [x29, #-0x68] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-104));
    arc_st64(_pa, ARC_X_R(c, 3));
    arc_st64(_pa + 8, ARC_X_R(c, 4));
  }
  /* 138ad4: stp x9, x8, [x29, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-16));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* 138ad8: add x8, x10, #0x28 */
  ARC_X_W(c, 8, (ARC_X_R(c, 10) + UINT64_C(40)));
  /* 138adc: add x9, x29, #0x20 */
  ARC_X_W(c, 9, (ARC_X_R(c, 29) + UINT64_C(32)));
  /* 138ae0: stp x9, x8, [x29, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-32));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* 138ae4: stp q0, q1, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[1].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[1].u64[1]);
  }
  /* 138ae8: ldur q0, [x29, #-0x10] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-16))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-16)) + 8));
  /* 138aec: ldur q1, [x29, #-0x20] */
  arc_q_w(c, 1, arc_ld64((ARC_X_R(c, 29) + INT64_C(-32))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-32)) + 8));
  /* 138af0: stp x5, x6, [x29, #-0x58] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-88));
    arc_st64(_pa, ARC_X_R(c, 5));
    arc_st64(_pa + 8, ARC_X_R(c, 6));
  }
  /* 138af4: stur x7, [x29, #-0x48] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-72)), ARC_X_R(c, 7));
  /* 138af8: stp q2, q3, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, (c)->q[2].u64[0]);
    arc_st64(_pa + 8, (c)->q[2].u64[1]);
    arc_st64((_pa + 16), (c)->q[3].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[3].u64[1]);
  }
  /* 138afc: stp q4, q5, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, (c)->q[4].u64[0]);
    arc_st64(_pa + 8, (c)->q[4].u64[1]);
    arc_st64((_pa + 16), (c)->q[5].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[5].u64[1]);
  }
  /* 138b00: stp q6, q7, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, (c)->q[6].u64[0]);
    arc_st64(_pa + 8, (c)->q[6].u64[1]);
    arc_st64((_pa + 16), (c)->q[7].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[7].u64[1]);
  }
  /* 138b04: stp q1, q0, [x29, #-0x40] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-64));
    arc_st64(_pa, (c)->q[1].u64[0]);
    arc_st64(_pa + 8, (c)->q[1].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* 138b08: sub x3, x29, #0x40 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 138b0c: bl #0x138b40 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1280784));
  fn1_138b40(c);
  /* 138b10: ldp x28, x19, [sp, #0x100] */
  { const uint64_t _pa = ((c)->sp + INT64_C(256));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 138b14: ldp x29, x30, [sp, #0xf0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(240));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 138b18: add sp, sp, #0x110 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(272)));
  /* 138b1c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 138b20: ret  */
  return;
  /* 138b24: bl #0x142548 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1280808));
  fn1_142548(c);
  /* 138b28: bl #0x1429b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1280812));
  fn1_1429b0(c);
  /* 138b2c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 138b30: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1280820));
  fn1_142980(c);
  /* 138b34: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 138b38: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1280828));
  fn1_9cc20(c);
  /* 138b3c: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1280832));
  fn1_a1454(c);
}

void fn1_13dc08(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039229448));
  /* 13dc08: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 13dc0c: stp x29, x30, [sp, #-0x60]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-96));
    (c)->sp = (c)->sp + INT64_C(-96);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 13dc10: stp x28, x27, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* 13dc14: stp x26, x25, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* 13dc18: stp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 13dc1c: stp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 13dc20: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 13dc24: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 13dc28: sub sp, sp, #0x2b0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(688)));
  /* 13dc2c: ldr x20, [x0, #0x40] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 0) + INT64_C(64))));
  /* 13dc30: mov x19, x2 */
  ARC_X_W(c, 19, ARC_X_R(c, 2));
  /* 13dc34: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 13dc38: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* 13dc3c: cbz x20, #0x13dc8c */
  if ((ARC_X_R(c, 20)) == 0) goto L_13dc8c;
L_13dc40:;
  /* 13dc40: ldr w0, [x21, #8] */
  ARC_W_W(c, 0, arc_ld32((ARC_X_R(c, 21) + INT64_C(8))));
  /* 13dc44: ldr w1, [x22, #8] */
  ARC_W_W(c, 1, arc_ld32((ARC_X_R(c, 22) + INT64_C(8))));
  /* 13dc48: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 13dc4c: mov x3, x20 */
  ARC_X_W(c, 3, ARC_X_R(c, 20));
  /* 13dc50: bl #0x1448e8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1301588));
  fn1_1448e8(c);
  /* 13dc54: cmn x0, #1 */
  (void)arc_add64(c, ARC_X_R(c, 0), UINT64_C(1), 0);
  /* 13dc58: b.eq #0x13dcb4 */
  if (ARC_COND(c, 0)) goto L_13dcb4;
  /* 13dc5c: subs x20, x20, x0 */
  ARC_X_W(c, 20, arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 0)));
  /* 13dc60: b.ne #0x13dc40 */
  if (ARC_COND(c, 1)) goto L_13dc40;
  /* 13dc64: str wzr, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 31));
  /* 13dc68: nop  */
  /* nop: no architectural effect here */
  /* 13dc6c: adr x8, #0x159210 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 13dc70: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 13dc74: tbz w8, #0, #0x13e2cc */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13e2cc;
L_13dc78:;
  /* 13dc78: nop  */
  /* nop: no architectural effect here */
  /* 13dc7c: adr x8, #0x156d40 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1404224)));
  /* 13dc80: mov w21, #1 */
  ARC_W_W(c, 21, UINT64_C(1));
  /* 13dc84: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
  /* 13dc88: b #0x13e198 */
  goto L_13e198;
L_13dc8c:;
  /* 13dc8c: nop  */
  /* nop: no architectural effect here */
  /* 13dc90: adr x8, #0x159208 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 13dc94: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 13dc98: tbz w8, #0, #0x13e240 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13e240;
L_13dc9c:;
  /* 13dc9c: mov w8, #0x16 */
  ARC_W_W(c, 8, UINT64_C(22));
  /* 13dca0: str w8, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 8));
  /* 13dca4: nop  */
  /* nop: no architectural effect here */
  /* 13dca8: adr x8, #0x156d38 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1404216)));
  /* 13dcac: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
  /* 13dcb0: b #0x13dce0 */
  goto L_13dce0;
L_13dcb4:;
  /* 13dcb4: bl #0x142a58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1301688));
  fn1_142a58(c);
  /* 13dcb8: nop  */
  /* nop: no architectural effect here */
  /* 13dcbc: adr x8, #0x159208 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 13dcc0: ldr w20, [x0] */
  ARC_W_W(c, 20, arc_ld32(ARC_X_R(c, 0)));
  /* 13dcc4: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 13dcc8: tbz w8, #0, #0x13e2ac */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13e2ac;
L_13dccc:;
  /* 13dccc: nop  */
  /* nop: no architectural effect here */
  /* 13dcd0: adr x8, #0x156d38 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1404216)));
  /* 13dcd4: cmp w20, #0x16 */
  (void)arc_sub32(c, ARC_W_R(c, 20), UINT64_C(22));
  /* 13dcd8: stp x20, x8, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* 13dcdc: b.ne #0x13df50 */
  if (ARC_COND(c, 1)) goto L_13df50;
L_13dce0:;
  /* 13dce0: str wzr, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 31));
  /* 13dce4: nop  */
  /* nop: no architectural effect here */
  /* 13dce8: adr x8, #0x159210 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 13dcec: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 13dcf0: add x23, sp, #0x158 */
  ARC_X_W(c, 23, ((c)->sp + UINT64_C(344)));
  /* 13dcf4: tbz w8, #0, #0x13e1d4 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13e1d4;
L_13dcf8:;
  /* 13dcf8: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 13dcfc: nop  */
  /* nop: no architectural effect here */
  /* 13dd00: adr x9, #0x156d40 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1404224)));
  /* 13dd04: ldr x8, [x8, #0xb20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2848))));
  /* 13dd08: str x9, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 9));
  /* 13dd0c: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* 13dd10: add x24, sp, #0x158 */
  ARC_X_W(c, 24, ((c)->sp + UINT64_C(344)));
  /* 13dd14: str xzr, [sp, #0x240] */
  arc_st64(((c)->sp + INT64_C(576)), ARC_X_R(c, 31));
  /* 13dd18: nop  */
  /* nop: no architectural effect here */
  /* 13dd1c: adr x26, #0x15dd90 */
  ARC_X_W(c, 26, (arc_image_bases[1] + UINT64_C(1432976)));
  /* 13dd20: add x9, x8, #0x40 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(64)));
  /* 13dd24: add x8, x8, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(24)));
  /* 13dd28: stp x8, xzr, [sp, #0x158] */
  { const uint64_t _pa = ((c)->sp + INT64_C(344));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 13dd2c: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* 13dd30: add x20, x24, #0x10 */
  ARC_X_W(c, 20, (ARC_X_R(c, 24) + UINT64_C(16)));
  /* 13dd34: ldr q1, [x8, #0xcd0] */
  arc_q_w(c, 1, arc_ld64((ARC_X_R(c, 8) + INT64_C(3280))), arc_ld64((ARC_X_R(c, 8) + INT64_C(3280)) + 8));
  /* 13dd38: str x9, [sp, #0x210] */
  arc_st64(((c)->sp + INT64_C(528)), ARC_X_R(c, 9));
  /* 13dd3c: mov w9, #0x1002 */
  ARC_W_W(c, 9, UINT64_C(4098));
  /* 13dd40: str x20, [sp, #0x238] */
  arc_st64(((c)->sp + INT64_C(568)), ARC_X_R(c, 20));
  /* 13dd44: adrp x28, #0x15d000 */
  ARC_X_W(c, 28, (arc_image_bases[1] + UINT64_C(1429504)));
  /* 13dd48: str xzr, [sp, #0x230] */
  arc_st64(((c)->sp + INT64_C(560)), ARC_X_R(c, 31));
  /* 13dd4c: str w9, [sp, #0x218] */
  arc_st32(((c)->sp + INT64_C(536)), ARC_W_R(c, 9));
  /* 13dd50: str q1, [sp] */
  arc_st64((c)->sp, (c)->q[1].u64[0]);
  arc_st64((c)->sp + 8, (c)->q[1].u64[1]);
  /* 13dd54: stur q1, [x23, #0xc8] */
  arc_st64((ARC_X_R(c, 23) + INT64_C(200)), (c)->q[1].u64[0]);
  arc_st64((ARC_X_R(c, 23) + INT64_C(200)) + 8, (c)->q[1].u64[1]);
  /* 13dd58: stp q0, q0, [x23, #0xf0] */
  { const uint64_t _pa = (ARC_X_R(c, 23) + INT64_C(240));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* 13dd5c: stp q0, q0, [x23, #0x110] */
  { const uint64_t _pa = (ARC_X_R(c, 23) + INT64_C(272));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* 13dd60: str q0, [x23, #0x130] */
  arc_st64((ARC_X_R(c, 23) + INT64_C(304)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 23) + INT64_C(304)) + 8, (c)->q[0].u64[1]);
  /* 13dd64: nop  */
  /* nop: no architectural effect here */
  /* 13dd68: adr x23, #0x15dc40 */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1432640)));
  /* 13dd6c: ldarb w8, [x26] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 26)));
  /* 13dd70: tbz w8, #0, #0x13e1f4 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13e1f4;
L_13dd74:;
  /* 13dd74: ldr x8, [x28, #0xd88] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 28) + INT64_C(3464))));
  /* 13dd78: cmp x8, x23 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 23));
  /* 13dd7c: str x8, [sp, #0x240] */
  arc_st64(((c)->sp + INT64_C(576)), ARC_X_R(c, 8));
  /* 13dd80: b.eq #0x13dd90 */
  if (ARC_COND(c, 0)) goto L_13dd90;
  /* 13dd84: add x1, x8, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) + UINT64_C(8)));
  /* 13dd88: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 13dd8c: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1301904));
  fn1_db2e0(c);
L_13dd90:;
  /* 13dd90: adrp x25, #0x151000 */
  ARC_X_W(c, 25, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 13dd94: mov w8, #-1 */
  ARC_W_W(c, 8, UINT64_C(18446744073709551615));
  /* 13dd98: ldr x25, [x25, #0xb18] */
  ARC_X_W(c, 25, arc_ld64((ARC_X_R(c, 25) + INT64_C(2840))));
  /* 13dd9c: str w8, [sp, #0x2a0] */
  arc_st32(((c)->sp + INT64_C(672)), ARC_W_R(c, 8));
  /* 13dda0: str xzr, [sp, #0x298] */
  arc_st64(((c)->sp + INT64_C(664)), ARC_X_R(c, 31));
  /* 13dda4: add x8, x25, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 25) + UINT64_C(24)));
  /* 13dda8: add x9, x25, #0x40 */
  ARC_X_W(c, 9, (ARC_X_R(c, 25) + UINT64_C(64)));
  /* 13ddac: str x8, [sp, #0x158] */
  arc_st64(((c)->sp + INT64_C(344)), ARC_X_R(c, 8));
  /* 13ddb0: str x9, [sp, #0x210] */
  arc_st64(((c)->sp + INT64_C(528)), ARC_X_R(c, 9));
  /* 13ddb4: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 13ddb8: bl #0x1436b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1301948));
  fn1_1436b8(c);
  /* 13ddbc: ldr x8, [sp, #0x1e0] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(480))));
  /* 13ddc0: cbz x8, #0x13dde0 */
  if ((ARC_X_R(c, 8)) == 0) goto L_13dde0;
L_13ddc4:;
  /* 13ddc4: ldr x8, [sp, #0x158] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(344))));
  /* 13ddc8: add x9, sp, #0x158 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(344)));
  /* 13ddcc: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* 13ddd0: add x8, x9, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) + ARC_X_R(c, 8)));
  /* 13ddd4: ldr w9, [x8, #0x20] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 8) + INT64_C(32))));
  /* 13ddd8: orr w9, w9, #4 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | UINT64_C(4)));
  /* 13dddc: b #0x13de2c */
  goto L_13de2c;
L_13dde0:;
  /* 13dde0: ldr w0, [x22, #8] */
  ARC_W_W(c, 0, arc_ld32((ARC_X_R(c, 22) + INT64_C(8))));
  /* 13dde4: adrp x1, #0x50000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(327680)));
  /* 13dde8: add x1, x1, #0x223 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(547)));
  /* 13ddec: bl #0x144900 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1302000));
  fn1_144900(c);
  /* 13ddf0: str x0, [sp, #0x1e0] */
  arc_st64(((c)->sp + INT64_C(480)), ARC_X_R(c, 0));
  /* 13ddf4: cbz x0, #0x13ddc4 */
  if ((ARC_X_R(c, 0)) == 0) goto L_13ddc4;
  /* 13ddf8: ldr w8, [sp, #0x204] */
  ARC_W_W(c, 8, arc_ld32(((c)->sp + INT64_C(516))));
  /* 13ddfc: mov w9, #0xc */
  ARC_W_W(c, 9, UINT64_C(12));
  /* 13de00: str w9, [sp, #0x200] */
  arc_st32(((c)->sp + INT64_C(512)), ARC_W_R(c, 9));
  /* 13de04: cmp w8, #0x22 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(34));
  /* 13de08: b.ne #0x13de18 */
  if (ARC_COND(c, 1)) goto L_13de18;
  /* 13de0c: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 13de10: bl #0x143778 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1302036));
  fn1_143778(c);
  /* 13de14: str wzr, [sp, #0x204] */
  arc_st32(((c)->sp + INT64_C(516)), ARC_W_R(c, 31));
L_13de18:;
  /* 13de18: ldr x8, [sp, #0x158] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(344))));
  /* 13de1c: add x10, sp, #0x158 */
  ARC_X_W(c, 10, ((c)->sp + UINT64_C(344)));
  /* 13de20: mov w9, wzr */
  ARC_W_W(c, 9, ARC_W_R(c, 31));
  /* 13de24: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* 13de28: add x8, x10, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 10) + ARC_X_R(c, 8)));
L_13de2c:;
  /* 13de2c: ldr x10, [x8, #0x28] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* 13de30: ldr w11, [x8, #0x24] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 8) + INT64_C(36))));
  /* 13de34: cmp x10, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 10), UINT64_C(0));
  /* 13de38: cset w10, eq */
  ARC_W_W(c, 10, (ARC_COND(c, 0) ? 1 : 0));
  /* 13de3c: orr w9, w9, w10 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | ARC_W_R(c, 10)));
  /* 13de40: tst w9, w11 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & ARC_W_R(c, 11)));
  /* 13de44: str w9, [x8, #0x20] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(32)), ARC_W_R(c, 9));
  /* 13de48: b.ne #0x13e234 */
  if (ARC_COND(c, 1)) goto L_13e234;
  /* 13de4c: ldr x8, [sp, #0x1e0] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(480))));
  /* 13de50: cbz x8, #0x13df24 */
  if ((ARC_X_R(c, 8)) == 0) goto L_13df24;
  /* 13de54: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 13de58: mov w9, #-1 */
  ARC_W_W(c, 9, UINT64_C(18446744073709551615));
  /* 13de5c: add x27, sp, #0x10 */
  ARC_X_W(c, 27, ((c)->sp + UINT64_C(16)));
  /* 13de60: ldr x8, [x8, #0xb30] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2864))));
  /* 13de64: ldr q0, [sp] */
  arc_q_w(c, 0, arc_ld64((c)->sp), arc_ld64((c)->sp + 8));
  /* 13de68: str w9, [x22, #8] */
  arc_st32((ARC_X_R(c, 22) + INT64_C(8)), ARC_W_R(c, 9));
  /* 13de6c: add x22, x27, #8 */
  ARC_X_W(c, 22, (ARC_X_R(c, 27) + UINT64_C(8)));
  /* 13de70: str xzr, [sp, #0xe0] */
  arc_st64(((c)->sp + INT64_C(224)), ARC_X_R(c, 31));
  /* 13de74: str q0, [sp, #0xd0] */
  arc_st64(((c)->sp + INT64_C(208)), (c)->q[0].u64[0]);
  arc_st64(((c)->sp + INT64_C(208)) + 8, (c)->q[0].u64[1]);
  /* 13de78: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* 13de7c: add x9, x8, #0x18 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(24)));
  /* 13de80: add x8, x8, #0x40 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(64)));
  /* 13de84: str x9, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 9));
  /* 13de88: add x9, sp, #0x10 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(16)));
  /* 13de8c: str x8, [sp, #0xc0] */
  arc_st64(((c)->sp + INT64_C(192)), ARC_X_R(c, 8));
  /* 13de90: mov w8, #0x1002 */
  ARC_W_W(c, 8, UINT64_C(4098));
  /* 13de94: str w8, [sp, #0xc8] */
  arc_st32(((c)->sp + INT64_C(200)), ARC_W_R(c, 8));
  /* 13de98: add x8, x27, #0xe8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 27) + UINT64_C(232)));
  /* 13de9c: stp x22, xzr, [sp, #0xe8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(232));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 13dea0: stp q0, q0, [x8, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 8) + INT64_C(32));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* 13dea4: str q0, [x8, #0x40] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(64)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 8) + INT64_C(64)) + 8, (c)->q[0].u64[1]);
  /* 13dea8: stur q0, [x9, #0xe8] */
  arc_st64((ARC_X_R(c, 9) + INT64_C(232)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 9) + INT64_C(232)) + 8, (c)->q[0].u64[1]);
  /* 13deac: stur q0, [x9, #0xf8] */
  arc_st64((ARC_X_R(c, 9) + INT64_C(248)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 9) + INT64_C(248)) + 8, (c)->q[0].u64[1]);
  /* 13deb0: ldarb w8, [x26] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 26)));
  /* 13deb4: tbz w8, #0, #0x13e260 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13e260;
L_13deb8:;
  /* 13deb8: ldr x8, [x28, #0xd88] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 28) + INT64_C(3464))));
  /* 13debc: cmp x8, x23 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 23));
  /* 13dec0: str x8, [sp, #0xf0] */
  arc_st64(((c)->sp + INT64_C(240)), ARC_X_R(c, 8));
  /* 13dec4: b.eq #0x13ded4 */
  if (ARC_COND(c, 0)) goto L_13ded4;
  /* 13dec8: add x1, x8, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) + UINT64_C(8)));
  /* 13decc: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 13ded0: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1302228));
  fn1_db2e0(c);
L_13ded4:;
  /* 13ded4: adrp x28, #0x151000 */
  ARC_X_W(c, 28, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 13ded8: mov w8, #-1 */
  ARC_W_W(c, 8, UINT64_C(18446744073709551615));
  /* 13dedc: ldr x28, [x28, #0xb28] */
  ARC_X_W(c, 28, arc_ld64((ARC_X_R(c, 28) + INT64_C(2856))));
  /* 13dee0: str w8, [sp, #0x150] */
  arc_st32(((c)->sp + INT64_C(336)), ARC_W_R(c, 8));
  /* 13dee4: str xzr, [sp, #0x148] */
  arc_st64(((c)->sp + INT64_C(328)), ARC_X_R(c, 31));
  /* 13dee8: add x8, x28, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 28) + UINT64_C(24)));
  /* 13deec: add x9, x28, #0x40 */
  ARC_X_W(c, 9, (ARC_X_R(c, 28) + UINT64_C(64)));
  /* 13def0: str x8, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 8));
  /* 13def4: str x9, [sp, #0xc0] */
  arc_st64(((c)->sp + INT64_C(192)), ARC_X_R(c, 9));
  /* 13def8: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 13defc: bl #0x1436b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1302272));
  fn1_1436b8(c);
  /* 13df00: ldr x8, [sp, #0x90] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(144))));
  /* 13df04: cbz x8, #0x13df58 */
  if ((ARC_X_R(c, 8)) == 0) goto L_13df58;
L_13df08:;
  /* 13df08: ldr x8, [sp, #0x10] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(16))));
  /* 13df0c: add x10, sp, #0x10 */
  ARC_X_W(c, 10, ((c)->sp + UINT64_C(16)));
  /* 13df10: ldur x9, [x8, #-0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* 13df14: add x9, x10, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 10) + ARC_X_R(c, 9)));
  /* 13df18: ldr w10, [x9, #0x20] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 9) + INT64_C(32))));
  /* 13df1c: orr w10, w10, #4 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) | UINT64_C(4)));
  /* 13df20: b #0x13dfa4 */
  goto L_13dfa4;
L_13df24:;
  /* 13df24: bl #0x142a58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1302312));
  fn1_142a58(c);
  /* 13df28: nop  */
  /* nop: no architectural effect here */
  /* 13df2c: adr x8, #0x159208 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 13df30: ldr w22, [x0] */
  ARC_W_W(c, 22, arc_ld32(ARC_X_R(c, 0)));
  /* 13df34: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 13df38: tbz w8, #0, #0x13e2ec */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13e2ec;
L_13df3c:;
  /* 13df3c: nop  */
  /* nop: no architectural effect here */
  /* 13df40: adr x8, #0x156d38 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1404216)));
  /* 13df44: mov w21, wzr */
  ARC_W_W(c, 21, ARC_W_R(c, 31));
  /* 13df48: stp x22, x8, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* 13df4c: b #0x13e178 */
  goto L_13e178;
L_13df50:;
  /* 13df50: mov w21, wzr */
  ARC_W_W(c, 21, ARC_W_R(c, 31));
  /* 13df54: b #0x13e198 */
  goto L_13e198;
L_13df58:;
  /* 13df58: ldr w0, [x21, #8] */
  ARC_W_W(c, 0, arc_ld32((ARC_X_R(c, 21) + INT64_C(8))));
  /* 13df5c: adrp x1, #0x4f000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(323584)));
  /* 13df60: add x1, x1, #0x744 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1860)));
  /* 13df64: bl #0x144900 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1302376));
  fn1_144900(c);
  /* 13df68: str x0, [sp, #0x90] */
  arc_st64(((c)->sp + INT64_C(144)), ARC_X_R(c, 0));
  /* 13df6c: cbz x0, #0x13df08 */
  if ((ARC_X_R(c, 0)) == 0) goto L_13df08;
  /* 13df70: ldr w8, [sp, #0xb4] */
  ARC_W_W(c, 8, arc_ld32(((c)->sp + INT64_C(180))));
  /* 13df74: mov w9, #0x14 */
  ARC_W_W(c, 9, UINT64_C(20));
  /* 13df78: str w9, [sp, #0xb0] */
  arc_st32(((c)->sp + INT64_C(176)), ARC_W_R(c, 9));
  /* 13df7c: cmp w8, #0x22 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(34));
  /* 13df80: b.ne #0x13df90 */
  if (ARC_COND(c, 1)) goto L_13df90;
  /* 13df84: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 13df88: bl #0x143778 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1302412));
  fn1_143778(c);
  /* 13df8c: str wzr, [sp, #0xb4] */
  arc_st32(((c)->sp + INT64_C(180)), ARC_W_R(c, 31));
L_13df90:;
  /* 13df90: ldr x8, [sp, #0x10] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(16))));
  /* 13df94: add x11, sp, #0x10 */
  ARC_X_W(c, 11, ((c)->sp + UINT64_C(16)));
  /* 13df98: mov w10, wzr */
  ARC_W_W(c, 10, ARC_W_R(c, 31));
  /* 13df9c: ldur x9, [x8, #-0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* 13dfa0: add x9, x11, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 11) + ARC_X_R(c, 9)));
L_13dfa4:;
  /* 13dfa4: ldr x11, [x9, #0x28] */
  ARC_X_W(c, 11, arc_ld64((ARC_X_R(c, 9) + INT64_C(40))));
  /* 13dfa8: ldr w12, [x9, #0x24] */
  ARC_W_W(c, 12, arc_ld32((ARC_X_R(c, 9) + INT64_C(36))));
  /* 13dfac: cmp x11, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 11), UINT64_C(0));
  /* 13dfb0: cset w11, eq */
  ARC_W_W(c, 11, (ARC_COND(c, 0) ? 1 : 0));
  /* 13dfb4: orr w10, w10, w11 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) | ARC_W_R(c, 11)));
  /* 13dfb8: tst w10, w12 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 10) & ARC_W_R(c, 12)));
  /* 13dfbc: str w10, [x9, #0x20] */
  arc_st32((ARC_X_R(c, 9) + INT64_C(32)), ARC_W_R(c, 10));
  /* 13dfc0: b.ne #0x13e2a0 */
  if (ARC_COND(c, 1)) goto L_13e2a0;
  /* 13dfc4: ldr x9, [sp, #0x90] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(144))));
  /* 13dfc8: cbz x9, #0x13e0c8 */
  if ((ARC_X_R(c, 9)) == 0) goto L_13e0c8;
  /* 13dfcc: mov w9, #-1 */
  ARC_W_W(c, 9, UINT64_C(18446744073709551615));
  /* 13dfd0: ldr x10, [sp, #0x158] */
  ARC_X_W(c, 10, arc_ld64(((c)->sp + INT64_C(344))));
  /* 13dfd4: str w9, [x21, #8] */
  arc_st32((ARC_X_R(c, 21) + INT64_C(8)), ARC_W_R(c, 9));
  /* 13dfd8: ldur x9, [x10, #-0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 10) + INT64_C(-24))));
  /* 13dfdc: add x10, sp, #0x158 */
  ARC_X_W(c, 10, ((c)->sp + UINT64_C(344)));
  /* 13dfe0: add x10, x10, x9 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + ARC_X_R(c, 9)));
  /* 13dfe4: ldr w9, [x10, #0x20] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 10) + INT64_C(32))));
  /* 13dfe8: cbnz w9, #0x13e0fc */
  if ((ARC_W_R(c, 9)) != 0) goto L_13e0fc;
  /* 13dfec: ldur x9, [x8, #-0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* 13dff0: add x11, sp, #0x10 */
  ARC_X_W(c, 11, ((c)->sp + UINT64_C(16)));
  /* 13dff4: add x9, x11, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 11) + ARC_X_R(c, 9)));
  /* 13dff8: ldr w11, [x9, #0x20] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 9) + INT64_C(32))));
  /* 13dffc: cbnz w11, #0x13e0fc */
  if ((ARC_W_R(c, 11)) != 0) goto L_13e0fc;
  /* 13e000: ldr x21, [x10, #0x28] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 10) + INT64_C(40))));
  /* 13e004: cbz x21, #0x13e0fc */
  if ((ARC_X_R(c, 21)) == 0) goto L_13e0fc;
  /* 13e008: ldr x23, [x9, #0x28] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 9) + INT64_C(40))));
  /* 13e00c: b #0x13e018 */
  goto L_13e018;
L_13e010:;
  /* 13e010: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* 13e014: str x8, [x21, #0x18] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(24)), ARC_X_R(c, 8));
L_13e018:;
  /* 13e018: ldp x8, x9, [x21, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 13e01c: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 13e020: b.eq #0x13e038 */
  if (ARC_COND(c, 0)) goto L_13e038;
  /* 13e024: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 13e028: b.eq #0x13e05c */
  if (ARC_COND(c, 0)) goto L_13e05c;
L_13e02c:;
  /* 13e02c: ldrb w1, [x8] */
  ARC_W_W(c, 1, arc_ld8(ARC_X_R(c, 8)));
  /* 13e030: cbnz x23, #0x13e074 */
  if ((ARC_X_R(c, 23)) != 0) goto L_13e074;
  /* 13e034: b #0x13e0a8 */
  goto L_13e0a8;
L_13e038:;
  /* 13e038: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 13e03c: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 13e040: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 13e044: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1302600));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 13e048: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 13e04c: b.eq #0x13e0f8 */
  if (ARC_COND(c, 0)) goto L_13e0f8;
  /* 13e050: ldp x8, x9, [x21, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 13e054: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 13e058: b.ne #0x13e02c */
  if (ARC_COND(c, 1)) goto L_13e02c;
L_13e05c:;
  /* 13e05c: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 13e060: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 13e064: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 13e068: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1302636));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 13e06c: and w1, w0, #0xff */
  ARC_W_W(c, 1, (ARC_W_R(c, 0) & UINT64_C(255)));
  /* 13e070: cbz x23, #0x13e0a8 */
  if ((ARC_X_R(c, 23)) == 0) goto L_13e0a8;
L_13e074:;
  /* 13e074: ldp x8, x9, [x23, #0x30] */
  { const uint64_t _pa = (ARC_X_R(c, 23) + INT64_C(48));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 13e078: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 13e07c: b.eq #0x13e090 */
  if (ARC_COND(c, 0)) goto L_13e090;
  /* 13e080: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* 13e084: str x9, [x23, #0x30] */
  arc_st64((ARC_X_R(c, 23) + INT64_C(48)), ARC_X_R(c, 9));
  /* 13e088: strb w1, [x8] */
  arc_st8(ARC_X_R(c, 8), ARC_W_R(c, 1));
  /* 13e08c: b #0x13e0a8 */
  goto L_13e0a8;
L_13e090:;
  /* 13e090: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 13e094: ldr x8, [x8, #0x68] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(104))));
  /* 13e098: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 13e09c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1302688));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 13e0a0: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 13e0a4: csel x23, xzr, x23, eq */
  ARC_X_W(c, 23, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 23)));
L_13e0a8:;
  /* 13e0a8: ldp x8, x9, [x21, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 13e0ac: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 13e0b0: b.ne #0x13e010 */
  if (ARC_COND(c, 1)) goto L_13e010;
  /* 13e0b4: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 13e0b8: ldr x8, [x8, #0x50] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(80))));
  /* 13e0bc: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 13e0c0: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1302724));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 13e0c4: b #0x13e018 */
  goto L_13e018;
L_13e0c8:;
  /* 13e0c8: bl #0x142a58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1302732));
  fn1_142a58(c);
  /* 13e0cc: nop  */
  /* nop: no architectural effect here */
  /* 13e0d0: adr x8, #0x159208 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 13e0d4: ldr w23, [x0] */
  ARC_W_W(c, 23, arc_ld32(ARC_X_R(c, 0)));
  /* 13e0d8: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 13e0dc: tbz w8, #0, #0x13e32c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13e32c;
L_13e0e0:;
  /* 13e0e0: mov w21, wzr */
  ARC_W_W(c, 21, ARC_W_R(c, 31));
  /* 13e0e4: nop  */
  /* nop: no architectural effect here */
  /* 13e0e8: adr x8, #0x156d38 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1404216)));
  /* 13e0ec: str x23, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 23));
L_13e0f0:;
  /* 13e0f0: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
  /* 13e0f4: b #0x13e158 */
  goto L_13e158;
L_13e0f8:;
  /* 13e0f8: ldr x8, [sp, #0x10] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(16))));
L_13e0fc:;
  /* 13e0fc: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* 13e100: add x9, sp, #0x10 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(16)));
  /* 13e104: add x8, x9, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) + ARC_X_R(c, 8)));
  /* 13e108: ldrb w9, [x8, #0x20] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 8) + INT64_C(32))));
  /* 13e10c: mov w8, #5 */
  ARC_W_W(c, 8, UINT64_C(5));
  /* 13e110: tst w9, w8 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & ARC_W_R(c, 8)));
  /* 13e114: b.ne #0x13e134 */
  if (ARC_COND(c, 1)) goto L_13e134;
  /* 13e118: ldr x9, [sp, #0x158] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(344))));
  /* 13e11c: add x10, sp, #0x158 */
  ARC_X_W(c, 10, ((c)->sp + UINT64_C(344)));
  /* 13e120: ldur x9, [x9, #-0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(-24))));
  /* 13e124: add x9, x10, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 10) + ARC_X_R(c, 9)));
  /* 13e128: ldrb w9, [x9, #0x20] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 9) + INT64_C(32))));
  /* 13e12c: tst w9, w8 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & ARC_W_R(c, 8)));
  /* 13e130: b.eq #0x13e1c0 */
  if (ARC_COND(c, 0)) goto L_13e1c0;
L_13e134:;
  /* 13e134: nop  */
  /* nop: no architectural effect here */
  /* 13e138: adr x8, #0x159208 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 13e13c: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 13e140: tbz w8, #0, #0x13e30c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13e30c;
L_13e144:;
  /* 13e144: mov w8, #5 */
  ARC_W_W(c, 8, UINT64_C(5));
  /* 13e148: nop  */
  /* nop: no architectural effect here */
  /* 13e14c: adr x9, #0x156d38 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1404216)));
  /* 13e150: mov w21, wzr */
  ARC_W_W(c, 21, ARC_W_R(c, 31));
  /* 13e154: stp x8, x9, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
L_13e158:;
  /* 13e158: add x8, x28, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 28) + UINT64_C(24)));
  /* 13e15c: add x9, x28, #0x40 */
  ARC_X_W(c, 9, (ARC_X_R(c, 28) + UINT64_C(64)));
  /* 13e160: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 13e164: str x8, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 8));
  /* 13e168: str x9, [sp, #0xc0] */
  arc_st64(((c)->sp + INT64_C(192)), ARC_X_R(c, 9));
  /* 13e16c: bl #0x1436d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1302896));
  fn1_1436d0(c);
  /* 13e170: add x0, x27, #0xb0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 27) + UINT64_C(176)));
  /* 13e174: bl #0x1433b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1302904));
  fn1_1433b8(c);
L_13e178:;
  /* 13e178: add x8, x25, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 25) + UINT64_C(24)));
  /* 13e17c: add x9, x25, #0x40 */
  ARC_X_W(c, 9, (ARC_X_R(c, 25) + UINT64_C(64)));
  /* 13e180: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 13e184: str x8, [sp, #0x158] */
  arc_st64(((c)->sp + INT64_C(344)), ARC_X_R(c, 8));
  /* 13e188: str x9, [sp, #0x210] */
  arc_st64(((c)->sp + INT64_C(528)), ARC_X_R(c, 9));
  /* 13e18c: bl #0x1436d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1302928));
  fn1_1436d0(c);
  /* 13e190: add x0, x24, #0xb8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 24) + UINT64_C(184)));
  /* 13e194: bl #0x1433b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1302936));
  fn1_1433b8(c);
L_13e198:;
  /* 13e198: mov w0, w21 */
  ARC_W_W(c, 0, ARC_W_R(c, 21));
  /* 13e19c: add sp, sp, #0x2b0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(688)));
  /* 13e1a0: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 13e1a4: ldp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 13e1a8: ldp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 13e1ac: ldp x26, x25, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* 13e1b0: ldp x28, x27, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* 13e1b4: ldp x29, x30, [sp], #0x60 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(96);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 13e1b8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 13e1bc: ret  */
  return;
L_13e1c0:;
  /* 13e1c0: mov w21, #1 */
  ARC_W_W(c, 21, UINT64_C(1));
  /* 13e1c4: nop  */
  /* nop: no architectural effect here */
  /* 13e1c8: adr x8, #0x156d40 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1404224)));
  /* 13e1cc: str wzr, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 31));
  /* 13e1d0: b #0x13e0f0 */
  goto L_13e0f0;
L_13e1d4:;
  /* 13e1d4: nop  */
  /* nop: no architectural effect here */
  /* 13e1d8: adr x0, #0x159210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 13e1dc: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1303008));
  fn1_1424b8(c);
  /* 13e1e0: cbz w0, #0x13dcf8 */
  if ((ARC_W_R(c, 0)) == 0) goto L_13dcf8;
  /* 13e1e4: nop  */
  /* nop: no architectural effect here */
  /* 13e1e8: adr x0, #0x159210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 13e1ec: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1303024));
  fn1_1424d0(c);
  /* 13e1f0: b #0x13dcf8 */
  goto L_13dcf8;
L_13e1f4:;
  /* 13e1f4: nop  */
  /* nop: no architectural effect here */
  /* 13e1f8: adr x0, #0x15dd90 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432976)));
  /* 13e1fc: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1303040));
  fn1_1424b8(c);
  /* 13e200: cbz w0, #0x13dd74 */
  if ((ARC_W_R(c, 0)) == 0) goto L_13dd74;
  /* 13e204: bl #0x143ac0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1303048));
  fn1_143ac0(c);
  /* 13e208: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 13e20c: cmp x8, x23 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 23));
  /* 13e210: str x8, [x28, #0xd88] */
  arc_st64((ARC_X_R(c, 28) + INT64_C(3464)), ARC_X_R(c, 8));
  /* 13e214: b.eq #0x13e224 */
  if (ARC_COND(c, 0)) goto L_13e224;
  /* 13e218: add x1, x8, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) + UINT64_C(8)));
  /* 13e21c: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 13e220: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1303076));
  fn1_db2e0(c);
L_13e224:;
  /* 13e224: nop  */
  /* nop: no architectural effect here */
  /* 13e228: adr x0, #0x15dd90 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432976)));
  /* 13e22c: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1303088));
  fn1_1424d0(c);
  /* 13e230: b #0x13dd74 */
  goto L_13dd74;
L_13e234:;
  /* 13e234: nop  */
  /* nop: no architectural effect here */
  /* 13e238: adr x0, #0x50210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(328208)));
  /* 13e23c: bl #0xec720 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1303104));
  fn1_ec720(c);
L_13e240:;
  /* 13e240: nop  */
  /* nop: no architectural effect here */
  /* 13e244: adr x0, #0x159208 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 13e248: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1303116));
  fn1_1424b8(c);
  /* 13e24c: cbz w0, #0x13dc9c */
  if ((ARC_W_R(c, 0)) == 0) goto L_13dc9c;
  /* 13e250: nop  */
  /* nop: no architectural effect here */
  /* 13e254: adr x0, #0x159208 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 13e258: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1303132));
  fn1_1424d0(c);
  /* 13e25c: b #0x13dc9c */
  goto L_13dc9c;
L_13e260:;
  /* 13e260: nop  */
  /* nop: no architectural effect here */
  /* 13e264: adr x0, #0x15dd90 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432976)));
  /* 13e268: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1303148));
  fn1_1424b8(c);
  /* 13e26c: cbz w0, #0x13deb8 */
  if ((ARC_W_R(c, 0)) == 0) goto L_13deb8;
  /* 13e270: bl #0x143ac0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1303156));
  fn1_143ac0(c);
  /* 13e274: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 13e278: cmp x8, x23 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 23));
  /* 13e27c: str x8, [x28, #0xd88] */
  arc_st64((ARC_X_R(c, 28) + INT64_C(3464)), ARC_X_R(c, 8));
  /* 13e280: b.eq #0x13e290 */
  if (ARC_COND(c, 0)) goto L_13e290;
  /* 13e284: add x1, x8, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) + UINT64_C(8)));
  /* 13e288: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 13e28c: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1303184));
  fn1_db2e0(c);
L_13e290:;
  /* 13e290: nop  */
  /* nop: no architectural effect here */
  /* 13e294: adr x0, #0x15dd90 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432976)));
  /* 13e298: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1303196));
  fn1_1424d0(c);
  /* 13e29c: b #0x13deb8 */
  goto L_13deb8;
L_13e2a0:;
  /* 13e2a0: nop  */
  /* nop: no architectural effect here */
  /* 13e2a4: adr x0, #0x50210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(328208)));
  /* 13e2a8: bl #0xec720 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1303212));
  fn1_ec720(c);
L_13e2ac:;
  /* 13e2ac: nop  */
  /* nop: no architectural effect here */
  /* 13e2b0: adr x0, #0x159208 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 13e2b4: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1303224));
  fn1_1424b8(c);
  /* 13e2b8: cbz w0, #0x13dccc */
  if ((ARC_W_R(c, 0)) == 0) goto L_13dccc;
  /* 13e2bc: nop  */
  /* nop: no architectural effect here */
  /* 13e2c0: adr x0, #0x159208 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 13e2c4: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1303240));
  fn1_1424d0(c);
  /* 13e2c8: b #0x13dccc */
  goto L_13dccc;
L_13e2cc:;
  /* 13e2cc: nop  */
  /* nop: no architectural effect here */
  /* 13e2d0: adr x0, #0x159210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 13e2d4: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1303256));
  fn1_1424b8(c);
  /* 13e2d8: cbz w0, #0x13dc78 */
  if ((ARC_W_R(c, 0)) == 0) goto L_13dc78;
  /* 13e2dc: nop  */
  /* nop: no architectural effect here */
  /* 13e2e0: adr x0, #0x159210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 13e2e4: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1303272));
  fn1_1424d0(c);
  /* 13e2e8: b #0x13dc78 */
  goto L_13dc78;
L_13e2ec:;
  /* 13e2ec: nop  */
  /* nop: no architectural effect here */
  /* 13e2f0: adr x0, #0x159208 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 13e2f4: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1303288));
  fn1_1424b8(c);
  /* 13e2f8: cbz w0, #0x13df3c */
  if ((ARC_W_R(c, 0)) == 0) goto L_13df3c;
  /* 13e2fc: nop  */
  /* nop: no architectural effect here */
  /* 13e300: adr x0, #0x159208 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 13e304: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1303304));
  fn1_1424d0(c);
  /* 13e308: b #0x13df3c */
  goto L_13df3c;
L_13e30c:;
  /* 13e30c: nop  */
  /* nop: no architectural effect here */
  /* 13e310: adr x0, #0x159208 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 13e314: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1303320));
  fn1_1424b8(c);
  /* 13e318: cbz w0, #0x13e144 */
  if ((ARC_W_R(c, 0)) == 0) goto L_13e144;
  /* 13e31c: nop  */
  /* nop: no architectural effect here */
  /* 13e320: adr x0, #0x159208 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 13e324: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1303336));
  fn1_1424d0(c);
  /* 13e328: b #0x13e144 */
  goto L_13e144;
L_13e32c:;
  /* 13e32c: nop  */
  /* nop: no architectural effect here */
  /* 13e330: adr x0, #0x159208 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 13e334: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1303352));
  fn1_1424b8(c);
  /* 13e338: cbz w0, #0x13e0e0 */
  if ((ARC_W_R(c, 0)) == 0) goto L_13e0e0;
  /* 13e33c: nop  */
  /* nop: no architectural effect here */
  /* 13e340: adr x0, #0x159208 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 13e344: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1303368));
  fn1_1424d0(c);
  /* 13e348: b #0x13e0e0 */
  goto L_13e0e0;
  /* 13e34c: b #0x13e350 */
  goto L_13e350;
L_13e350:;
  /* 13e350: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 13e354: nop  */
  /* nop: no architectural effect here */
  /* 13e358: adr x0, #0x15dd90 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432976)));
  /* 13e35c: bl #0x1424e8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1303392));
  fn1_1424e8(c);
  /* 13e360: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 13e364: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1303400));
  fn1_a1454(c);
  /* 13e368: b #0x13e384 */
  goto L_13e384;
  /* 13e36c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 13e370: b #0x13e3a0 */
  goto L_13e3a0;
  /* 13e374: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 13e378: b #0x13e3a8 */
  goto L_13e3a8;
  /* 13e37c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 13e380: b #0x13e3c0 */
  goto L_13e3c0;
L_13e384:;
  /* 13e384: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 13e388: add x8, x28, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 28) + UINT64_C(24)));
  /* 13e38c: add x9, x28, #0x40 */
  ARC_X_W(c, 9, (ARC_X_R(c, 28) + UINT64_C(64)));
  /* 13e390: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 13e394: str x8, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 8));
  /* 13e398: str x9, [sp, #0xc0] */
  arc_st64(((c)->sp + INT64_C(192)), ARC_X_R(c, 9));
  /* 13e39c: bl #0x1436d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1303456));
  fn1_1436d0(c);
L_13e3a0:;
  /* 13e3a0: add x0, x27, #0xb0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 27) + UINT64_C(176)));
  /* 13e3a4: bl #0x1433b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1303464));
  fn1_1433b8(c);
L_13e3a8:;
  /* 13e3a8: add x8, x25, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 25) + UINT64_C(24)));
  /* 13e3ac: add x9, x25, #0x40 */
  ARC_X_W(c, 9, (ARC_X_R(c, 25) + UINT64_C(64)));
  /* 13e3b0: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 13e3b4: str x8, [sp, #0x158] */
  arc_st64(((c)->sp + INT64_C(344)), ARC_X_R(c, 8));
  /* 13e3b8: str x9, [sp, #0x210] */
  arc_st64(((c)->sp + INT64_C(528)), ARC_X_R(c, 9));
  /* 13e3bc: bl #0x1436d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1303488));
  fn1_1436d0(c);
L_13e3c0:;
  /* 13e3c0: add x0, x24, #0xb8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 24) + UINT64_C(184)));
  /* 13e3c4: bl #0x1433b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1303496));
  fn1_1433b8(c);
  /* 13e3c8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 13e3cc: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1303504));
  fn1_9cc20(c);
}

void fn1_142650(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039248464));
  /* 142650: adrp x16, #0x151000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 142654: ldr x17, [x16, #0xf50] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(3920))));
  /* 142658: add x16, x16, #0xf50 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(3920)));
  /* 14265c: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 142660: nop  */
  /* nop: no architectural effect here */
  /* 142664: nop  */
  /* nop: no architectural effect here */
}

void fn1_142c50(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039250000));
  /* 142c50: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 142c54: ldr x17, [x16, #0x150] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(336))));
  /* 142c58: add x16, x16, #0x150 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(336)));
  /* 142c5c: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 142c60: nop  */
  /* nop: no architectural effect here */
  /* 142c64: nop  */
  /* nop: no architectural effect here */
}

void fn1_143250(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039251536));
  /* 143250: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 143254: ldr x17, [x16, #0x350] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(848))));
  /* 143258: add x16, x16, #0x350 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(848)));
  /* 14325c: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 143260: nop  */
  /* nop: no architectural effect here */
  /* 143264: nop  */
  /* nop: no architectural effect here */
}

void fn1_143850(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039253072));
  /* 143850: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 143854: ldr x17, [x16, #0x550] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(1360))));
  /* 143858: add x16, x16, #0x550 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(1360)));
  /* 14385c: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 143860: nop  */
  /* nop: no architectural effect here */
  /* 143864: nop  */
  /* nop: no architectural effect here */
}

void fn1_143e50(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039254608));
  /* 143e50: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 143e54: ldr x17, [x16, #0x750] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(1872))));
  /* 143e58: add x16, x16, #0x750 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(1872)));
  /* 143e5c: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 143e60: nop  */
  /* nop: no architectural effect here */
  /* 143e64: nop  */
  /* nop: no architectural effect here */
}

void fn1_144450(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039256144));
  /* 144450: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 144454: ldr x17, [x16, #0x950] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(2384))));
  /* 144458: add x16, x16, #0x950 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(2384)));
  /* 14445c: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 144460: nop  */
  /* nop: no architectural effect here */
  /* 144464: nop  */
  /* nop: no architectural effect here */
}

void fn1_144a50(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039257680));
  /* 144a50: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 144a54: ldr x17, [x16, #0xb50] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(2896))));
  /* 144a58: add x16, x16, #0xb50 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(2896)));
  /* 144a5c: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 144a60: nop  */
  /* nop: no architectural effect here */
  /* 144a64: nop  */
  /* nop: no architectural effect here */
}

