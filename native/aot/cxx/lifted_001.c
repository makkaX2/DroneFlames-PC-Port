#include "lifted.h"

void fn1_a0ef0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038587120));
  /* a0ef0: bti c */
  /* bti: no architectural effect here */
  /* a0ef4: adrp x8, #0x157000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1404928)));
  /* a0ef8: ldr x8, [x8, #0x648] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(1608))));
  /* a0efc: cbz x8, #0xa0f04 */
  if ((ARC_X_R(c, 8)) == 0) goto L_a0f04;
  /* a0f00: ret  */
  return;
L_a0f04:;
  /* a0f04: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* a0f08: sub sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(112)));
  /* a0f0c: stp x30, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 30));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* a0f10: nop  */
  /* nop: no architectural effect here */
  /* a0f14: adr x0, #0x4ff93 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(327571)));
  /* a0f18: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* a0f1c: bl #0x144a08 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(659232));
  fn1_144a08(c);
  /* a0f20: cmp w0, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(0));
  /* a0f24: b.le #0xa0f40 */
  if (ARC_COND(c, 13)) goto L_a0f40;
  /* a0f28: adrp x1, #0x50000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(327680)));
  /* a0f2c: add x1, x1, #0x469 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1129)));
  /* a0f30: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* a0f34: mov w2, #0xa */
  ARC_W_W(c, 2, UINT64_C(10));
  /* a0f38: bl #0x1449a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(659260));
  fn1_1449a8(c);
  /* a0f3c: cbz w0, #0xa0f6c */
  if ((ARC_W_R(c, 0)) == 0) goto L_a0f6c;
L_a0f40:;
  /* a0f40: mov w0, #0x10 */
  ARC_W_W(c, 0, UINT64_C(16));
  /* a0f44: bl #0x144a50 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(659272));
  fn1_144a50(c);
  /* a0f48: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* a0f4c: mov w0, #0x1a */
  ARC_W_W(c, 0, UINT64_C(26));
  /* a0f50: bl #0x144a50 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(659284));
  fn1_144a50(c);
  /* a0f54: mov w8, #0x18 */
  ARC_W_W(c, 8, UINT64_C(24));
  /* a0f58: str x0, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 0));
  /* a0f5c: orr x0, x19, #0x4000000000000000 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) | UINT64_C(4611686018427387904)));
  /* a0f60: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* a0f64: stp x8, x19, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* a0f68: bl #0xa0d04 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(659308));
  fn1_a0d04(c);
L_a0f6c:;
  /* a0f6c: ldp x30, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 30, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* a0f70: add sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(112)));
  /* a0f74: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* a0f78: ret  */
  return;
}

void fn1_a2378(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038592376));
  /* a2378: bti c */
  /* bti: no architectural effect here */
  /* a237c: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* a2380: ldr x8, [x8, #0x990] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2448))));
  /* a2384: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* a2388: str x8, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* a238c: ret  */
  return;
}

void fn1_a82a4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038616740));
  /* a82a4: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* a82a8: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* a82ac: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* a82b0: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* a82b4: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* a82b8: ldr x21, [x0, #0x1330] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 0) + INT64_C(4912))));
  /* a82bc: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* a82c0: ldr x8, [x21, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 21) + INT64_C(8))));
  /* a82c4: sub x9, x8, #0xfc0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4032)));
  /* a82c8: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* a82cc: b.hi #0xa82f0 */
  if (ARC_COND(c, 8)) goto L_a82f0;
  /* a82d0: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* a82d4: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* a82d8: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(688860));
  fn1_1428a8(c);
  /* a82dc: cbz x0, #0xa8350 */
  if ((ARC_X_R(c, 0)) == 0) goto L_a8350;
  /* a82e0: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* a82e4: stp x21, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 21));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* a82e8: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* a82ec: str x0, [x20, #0x1330] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(4912)), ARC_X_R(c, 0));
L_a82f0:;
  /* a82f0: add x9, x8, #0x30 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(48)));
  /* a82f4: add x0, x21, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) + ARC_X_R(c, 8)));
  /* a82f8: adrp x8, #0x149000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1347584)));
  /* a82fc: add x8, x8, #0xb10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2832)));
  /* a8300: str x9, [x21, #8] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(8)), ARC_X_R(c, 9));
  /* a8304: mov w10, #0x540 */
  ARC_W_W(c, 10, UINT64_C(1344));
  /* a8308: str x8, [x0, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* a830c: ldurh w9, [x0, #9] */
  ARC_W_W(c, 9, arc_ld16((ARC_X_R(c, 0) + INT64_C(9))));
  /* a8310: mov w8, #0x15 */
  ARC_W_W(c, 8, UINT64_C(21));
  /* a8314: mov w11, #0x11 */
  ARC_W_W(c, 11, UINT64_C(17));
  /* a8318: strb w8, [x0, #8] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 8));
  /* a831c: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* a8320: add x8, x8, #0x2cd */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(717)));
  /* a8324: and w9, w9, #0xf000 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) & UINT64_C(61440)));
  /* a8328: str x8, [x0, #0x10] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(16)), ARC_X_R(c, 8));
  /* a832c: orr w8, w9, w10 */
  ARC_W_W(c, 8, (ARC_W_R(c, 9) | ARC_W_R(c, 10)));
  /* a8330: ldr x9, [x19] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 19)));
  /* a8334: sturh w8, [x0, #9] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(9)), ARC_W_R(c, 8));
  /* a8338: stp x11, x9, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    arc_st64(_pa, ARC_X_R(c, 11));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* a833c: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* a8340: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* a8344: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* a8348: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* a834c: ret  */
  return;
L_a8350:;
  /* a8350: bl #0x142488 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(688980));
  fn1_142488(c);
}

void fn1_adfa0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038640544));
  /* adfa0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* adfa4: sub sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(112)));
  /* adfa8: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* adfac: stp x28, x27, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* adfb0: stp x26, x25, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* adfb4: stp x24, x23, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* adfb8: stp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* adfbc: stp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* adfc0: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* adfc4: ldp x8, x9, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* adfc8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* adfcc: mov w20, w1 */
  ARC_W_W(c, 20, ARC_W_R(c, 1));
  /* adfd0: sub x10, x9, x8 */
  ARC_X_W(c, 10, (ARC_X_R(c, 9) - ARC_X_R(c, 8)));
  /* adfd4: cmp x10, #3 */
  (void)arc_sub64(c, ARC_X_R(c, 10), UINT64_C(3));
  /* adfd8: b.hs #0xadfe8 */
  if (ARC_COND(c, 2)) goto L_adfe8;
  /* adfdc: cmp x10, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 10), UINT64_C(2));
  /* adfe0: b.eq #0xae004 */
  if (ARC_COND(c, 0)) goto L_ae004;
  /* adfe4: b #0xae014 */
  goto L_ae014;
L_adfe8:;
  /* adfe8: ldrh w10, [x8] */
  ARC_W_W(c, 10, arc_ld16(ARC_X_R(c, 8)));
  /* adfec: ldrb w11, [x8, #2] */
  ARC_W_W(c, 11, arc_ld8((ARC_X_R(c, 8) + INT64_C(2))));
  /* adff0: mov w12, #0x7273 */
  ARC_W_W(c, 12, UINT64_C(29299));
  /* adff4: cmp w10, w12 */
  (void)arc_sub32(c, ARC_W_R(c, 10), ARC_W_R(c, 12));
  /* adff8: mov w10, #0x4e */
  ARC_W_W(c, 10, UINT64_C(78));
  /* adffc: ccmp w11, w10, #0, eq */
  if (ARC_COND(c, 0)) { (void)arc_sub32(c, ARC_W_R(c, 11), ARC_W_R(c, 10)); }
  else { (c)->nf = 0; (c)->zf = 0;
          (c)->cf = 0; (c)->vf = 0; }
  /* ae000: b.eq #0xae114 */
  if (ARC_COND(c, 0)) goto L_ae114;
L_ae004:;
  /* ae004: ldrh w10, [x8] */
  ARC_W_W(c, 10, arc_ld16(ARC_X_R(c, 8)));
  /* ae008: mov w11, #0x7273 */
  ARC_W_W(c, 11, UINT64_C(29299));
  /* ae00c: cmp w10, w11 */
  (void)arc_sub32(c, ARC_W_R(c, 10), ARC_W_R(c, 11));
  /* ae010: b.eq #0xae09c */
  if (ARC_COND(c, 0)) goto L_ae09c;
L_ae014:;
  /* ae014: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ae018: bl #0xb6470 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(712732));
  fn1_b6470(c);
  /* ae01c: tbz w20, #0, #0xae5a0 */
  if (((ARC_W_R(c, 20)) >> 0 & 1) == 0) goto L_ae5a0;
  /* ae020: cbz x0, #0xae5a0 */
  if ((ARC_X_R(c, 0)) == 0) goto L_ae5a0;
  /* ae024: ldr x20, [x19, #0x1330] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 19) + INT64_C(4912))));
  /* ae028: ldr x8, [x20, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(8))));
  /* ae02c: sub x9, x8, #0xfd0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4048)));
  /* ae030: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* ae034: b.hi #0xae05c */
  if (ARC_COND(c, 8)) goto L_ae05c;
  /* ae038: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* ae03c: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* ae040: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(712772));
  fn1_1428a8(c);
  /* ae044: cbz x0, #0xae5c4 */
  if ((ARC_X_R(c, 0)) == 0) goto L_ae5c4;
  /* ae048: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* ae04c: stp x20, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* ae050: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* ae054: str x0, [x19, #0x1330] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(4912)), ARC_X_R(c, 0));
  /* ae058: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
L_ae05c:;
  /* ae05c: add x9, x8, #0x20 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(32)));
  /* ae060: add x8, x20, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 20) + ARC_X_R(c, 8)));
  /* ae064: adrp x10, #0x14b000 */
  ARC_X_W(c, 10, (arc_image_bases[1] + UINT64_C(1355776)));
  /* ae068: add x10, x10, #0x770 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(1904)));
  /* ae06c: str x9, [x20, #8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(8)), ARC_X_R(c, 9));
  /* ae070: mov w11, #0x540 */
  ARC_W_W(c, 11, UINT64_C(1344));
  /* ae074: str x10, [x8, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 8) + INT64_C(16));
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 10));
  }
  /* ae078: ldurh w9, [x8, #9] */
  ARC_W_W(c, 9, arc_ld16((ARC_X_R(c, 8) + INT64_C(9))));
  /* ae07c: mov w10, #0x2e */
  ARC_W_W(c, 10, UINT64_C(46));
  /* ae080: str x0, [x8, #0x10] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(16)), ARC_X_R(c, 0));
  /* ae084: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* ae088: and w9, w9, #0xf000 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) & UINT64_C(61440)));
  /* ae08c: strb w10, [x8, #8] */
  arc_st8((ARC_X_R(c, 8) + INT64_C(8)), ARC_W_R(c, 10));
  /* ae090: orr w9, w9, w11 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | ARC_W_R(c, 11)));
  /* ae094: sturh w9, [x8, #9] */
  arc_st16((ARC_X_R(c, 8) + INT64_C(9)), ARC_W_R(c, 9));
  /* ae098: b #0xae5a0 */
  goto L_ae5a0;
L_ae09c:;
  /* ae09c: add x8, x8, #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2)));
  /* ae0a0: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* ae0a4: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* ae0a8: b.eq #0xae0bc */
  if (ARC_COND(c, 0)) goto L_ae0bc;
  /* ae0ac: ldrb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* ae0b0: sub w8, w8, #0x3a */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) - UINT64_C(58)));
  /* ae0b4: cmn w8, #0xa */
  (void)arc_add32(c, ARC_W_R(c, 8), UINT64_C(10), 0);
  /* ae0b8: b.hs #0xae2f0 */
  if (ARC_COND(c, 2)) goto L_ae2f0;
L_ae0bc:;
  /* ae0bc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ae0c0: bl #0xb62fc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(712900));
  fn1_b62fc(c);
  /* ae0c4: str x0, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 0));
  /* ae0c8: cbz x0, #0xae5a0 */
  if ((ARC_X_R(c, 0)) == 0) goto L_ae5a0;
  /* ae0cc: ldp x8, x9, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* ae0d0: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* ae0d4: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* ae0d8: b.eq #0xae4b4 */
  if (ARC_COND(c, 0)) goto L_ae4b4;
  /* ae0dc: ldrb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* ae0e0: cmp w8, #0x49 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(73));
  /* ae0e4: b.ne #0xae4b4 */
  if (ARC_COND(c, 1)) goto L_ae4b4;
  /* ae0e8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ae0ec: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* ae0f0: bl #0xa8f88 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(712948));
  fn1_a8f88(c);
  /* ae0f4: str x0, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 0));
  /* ae0f8: cbz x0, #0xae5a0 */
  if ((ARC_X_R(c, 0)) == 0) goto L_ae5a0;
  /* ae0fc: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* ae100: mov x2, sp */
  ARC_X_W(c, 2, (c)->sp);
  /* ae104: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ae108: bl #0xa9454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(712972));
  fn1_a9454(c);
  /* ae10c: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* ae110: b #0xae4b4 */
  goto L_ae4b4;
L_ae114:;
  /* ae114: add x8, x8, #3 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3)));
  /* ae118: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ae11c: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* ae120: bl #0xb62fc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(712996));
  fn1_b62fc(c);
  /* ae124: cbz x0, #0xae5a0 */
  if ((ARC_X_R(c, 0)) == 0) goto L_ae5a0;
  /* ae128: ldp x8, x9, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* ae12c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* ae130: adrp x23, #0x14b000 */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1355776)));
  /* ae134: add x23, x23, #0xd10 */
  ARC_X_W(c, 23, (ARC_X_R(c, 23) + UINT64_C(3344)));
  /* ae138: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* ae13c: b.eq #0xae1c8 */
  if (ARC_COND(c, 0)) goto L_ae1c8;
  /* ae140: ldrb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* ae144: cmp w8, #0x49 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(73));
  /* ae148: b.ne #0xae1c8 */
  if (ARC_COND(c, 1)) goto L_ae1c8;
  /* ae14c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ae150: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* ae154: bl #0xa8f88 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(713048));
  fn1_a8f88(c);
  /* ae158: cbz x0, #0xae5a0 */
  if ((ARC_X_R(c, 0)) == 0) goto L_ae5a0;
  /* ae15c: ldr x21, [x19, #0x1330] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 19) + INT64_C(4912))));
  /* ae160: ldr x8, [x21, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 21) + INT64_C(8))));
  /* ae164: sub x9, x8, #0xfd0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4048)));
  /* ae168: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* ae16c: b.hi #0xae194 */
  if (ARC_COND(c, 8)) goto L_ae194;
  /* ae170: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* ae174: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* ae178: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(713084));
  fn1_1428a8(c);
  /* ae17c: cbz x0, #0xae5c4 */
  if ((ARC_X_R(c, 0)) == 0) goto L_ae5c4;
  /* ae180: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* ae184: stp x21, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 21));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* ae188: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* ae18c: str x0, [x19, #0x1330] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(4912)), ARC_X_R(c, 0));
  /* ae190: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
L_ae194:;
  /* ae194: add x9, x8, #0x20 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(32)));
  /* ae198: add x8, x21, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 21) + ARC_X_R(c, 8)));
  /* ae19c: mov w11, #0x540 */
  ARC_W_W(c, 11, UINT64_C(1344));
  /* ae1a0: str x9, [x21, #8] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(8)), ARC_X_R(c, 9));
  /* ae1a4: mov w10, #0x2d */
  ARC_W_W(c, 10, UINT64_C(45));
  /* ae1a8: str x23, [x8, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 8) + INT64_C(16));
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 23));
  }
  /* ae1ac: ldurh w9, [x8, #9] */
  ARC_W_W(c, 9, arc_ld16((ARC_X_R(c, 8) + INT64_C(9))));
  /* ae1b0: stp x20, x0, [x8, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 8) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 0));
  }
  /* ae1b4: mov x20, x8 */
  ARC_X_W(c, 20, ARC_X_R(c, 8));
  /* ae1b8: and w9, w9, #0xf000 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) & UINT64_C(61440)));
  /* ae1bc: strb w10, [x8, #8] */
  arc_st8((ARC_X_R(c, 8) + INT64_C(8)), ARC_W_R(c, 10));
  /* ae1c0: orr w9, w9, w11 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | ARC_W_R(c, 11)));
  /* ae1c4: sturh w9, [x8, #9] */
  arc_st16((ARC_X_R(c, 8) + INT64_C(9)), ARC_W_R(c, 9));
L_ae1c8:;
  /* ae1c8: adrp x24, #0x14b000 */
  ARC_X_W(c, 24, (arc_image_bases[1] + UINT64_C(1355776)));
  /* ae1cc: add x24, x24, #0x590 */
  ARC_X_W(c, 24, (ARC_X_R(c, 24) + UINT64_C(1424)));
  /* ae1d0: mov w25, #0x17 */
  ARC_W_W(c, 25, UINT64_C(23));
  /* ae1d4: mov w26, #0x540 */
  ARC_W_W(c, 26, UINT64_C(1344));
  /* ae1d8: mov w27, #0x2d */
  ARC_W_W(c, 27, UINT64_C(45));
  /* ae1dc: b #0xae20c */
  goto L_ae20c;
L_ae1e0:;
  /* ae1e0: add x9, x8, #0x20 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(32)));
  /* ae1e4: add x8, x22, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 22) + ARC_X_R(c, 8)));
  /* ae1e8: str x9, [x22, #8] */
  arc_st64((ARC_X_R(c, 22) + INT64_C(8)), ARC_X_R(c, 9));
  /* ae1ec: str x24, [x8, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 8) + INT64_C(16));
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 24));
  }
  /* ae1f0: ldurh w9, [x8, #9] */
  ARC_W_W(c, 9, arc_ld16((ARC_X_R(c, 8) + INT64_C(9))));
  /* ae1f4: strb w25, [x8, #8] */
  arc_st8((ARC_X_R(c, 8) + INT64_C(8)), ARC_W_R(c, 25));
  /* ae1f8: and w9, w9, #0xf000 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) & UINT64_C(61440)));
  /* ae1fc: stp x20, x21, [x8, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 8) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* ae200: mov x20, x8 */
  ARC_X_W(c, 20, ARC_X_R(c, 8));
  /* ae204: orr w9, w9, w26 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | ARC_W_R(c, 26)));
  /* ae208: sturh w9, [x8, #9] */
  arc_st16((ARC_X_R(c, 8) + INT64_C(9)), ARC_W_R(c, 9));
L_ae20c:;
  /* ae20c: ldp x8, x9, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* ae210: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* ae214: b.eq #0xae224 */
  if (ARC_COND(c, 0)) goto L_ae224;
  /* ae218: ldrb w9, [x8] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 8)));
  /* ae21c: cmp w9, #0x45 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(69));
  /* ae220: b.eq #0xae528 */
  if (ARC_COND(c, 0)) goto L_ae528;
L_ae224:;
  /* ae224: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ae228: bl #0xa8930 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(713260));
  fn1_a8930(c);
  /* ae22c: cbz x0, #0xae5a0 */
  if ((ARC_X_R(c, 0)) == 0) goto L_ae5a0;
  /* ae230: ldp x8, x9, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* ae234: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* ae238: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* ae23c: b.eq #0xae2bc */
  if (ARC_COND(c, 0)) goto L_ae2bc;
  /* ae240: ldrb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* ae244: cmp w8, #0x49 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(73));
  /* ae248: b.ne #0xae2bc */
  if (ARC_COND(c, 1)) goto L_ae2bc;
  /* ae24c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ae250: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* ae254: bl #0xa8f88 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(713304));
  fn1_a8f88(c);
  /* ae258: cbz x0, #0xae5a0 */
  if ((ARC_X_R(c, 0)) == 0) goto L_ae5a0;
  /* ae25c: ldr x28, [x19, #0x1330] */
  ARC_X_W(c, 28, arc_ld64((ARC_X_R(c, 19) + INT64_C(4912))));
  /* ae260: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* ae264: ldr x8, [x28, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 28) + INT64_C(8))));
  /* ae268: sub x9, x8, #0xfd0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4048)));
  /* ae26c: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* ae270: b.hi #0xae290 */
  if (ARC_COND(c, 8)) goto L_ae290;
  /* ae274: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* ae278: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(713340));
  fn1_1428a8(c);
  /* ae27c: cbz x0, #0xae5c4 */
  if ((ARC_X_R(c, 0)) == 0) goto L_ae5c4;
  /* ae280: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* ae284: stp x28, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* ae288: mov x28, x0 */
  ARC_X_W(c, 28, ARC_X_R(c, 0));
  /* ae28c: str x0, [x19, #0x1330] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(4912)), ARC_X_R(c, 0));
L_ae290:;
  /* ae290: add x9, x8, #0x20 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(32)));
  /* ae294: add x8, x28, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 28) + ARC_X_R(c, 8)));
  /* ae298: str x9, [x28, #8] */
  arc_st64((ARC_X_R(c, 28) + INT64_C(8)), ARC_X_R(c, 9));
  /* ae29c: str x23, [x8, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 8) + INT64_C(16));
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 23));
  }
  /* ae2a0: ldurh w9, [x8, #9] */
  ARC_W_W(c, 9, arc_ld16((ARC_X_R(c, 8) + INT64_C(9))));
  /* ae2a4: stp x21, x22, [x8, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 8) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 21));
    arc_st64(_pa + 8, ARC_X_R(c, 22));
  }
  /* ae2a8: mov x21, x8 */
  ARC_X_W(c, 21, ARC_X_R(c, 8));
  /* ae2ac: and w9, w9, #0xf000 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) & UINT64_C(61440)));
  /* ae2b0: strb w27, [x8, #8] */
  arc_st8((ARC_X_R(c, 8) + INT64_C(8)), ARC_W_R(c, 27));
  /* ae2b4: orr w9, w9, w26 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | ARC_W_R(c, 26)));
  /* ae2b8: sturh w9, [x8, #9] */
  arc_st16((ARC_X_R(c, 8) + INT64_C(9)), ARC_W_R(c, 9));
L_ae2bc:;
  /* ae2bc: ldr x22, [x19, #0x1330] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 19) + INT64_C(4912))));
  /* ae2c0: ldr x8, [x22, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 22) + INT64_C(8))));
  /* ae2c4: sub x9, x8, #0xfd0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4048)));
  /* ae2c8: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* ae2cc: b.hi #0xae1e0 */
  if (ARC_COND(c, 8)) goto L_ae1e0;
  /* ae2d0: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* ae2d4: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(713432));
  fn1_1428a8(c);
  /* ae2d8: cbz x0, #0xae5c4 */
  if ((ARC_X_R(c, 0)) == 0) goto L_ae5c4;
  /* ae2dc: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* ae2e0: stp x22, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* ae2e4: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* ae2e8: str x0, [x19, #0x1330] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(4912)), ARC_X_R(c, 0));
  /* ae2ec: b #0xae1e0 */
  goto L_ae1e0;
L_ae2f0:;
  /* ae2f0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ae2f4: bl #0xa8930 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(713464));
  fn1_a8930(c);
  /* ae2f8: cbz x0, #0xae5a0 */
  if ((ARC_X_R(c, 0)) == 0) goto L_ae5a0;
  /* ae2fc: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* ae300: mov x21, xzr */
  ARC_X_W(c, 21, ARC_X_R(c, 31));
  /* ae304: mov w26, #0x540 */
  ARC_W_W(c, 26, UINT64_C(1344));
  /* ae308: adrp x27, #0x14b000 */
  ARC_X_W(c, 27, (arc_image_bases[1] + UINT64_C(1355776)));
  /* ae30c: add x27, x27, #0x590 */
  ARC_X_W(c, 27, (ARC_X_R(c, 27) + UINT64_C(1424)));
  /* ae310: mov w28, #0x17 */
  ARC_W_W(c, 28, UINT64_C(23));
  /* ae314: mov w25, #0x2d */
  ARC_W_W(c, 25, UINT64_C(45));
  /* ae318: b #0xae330 */
  goto L_ae330;
L_ae31c:;
  /* ae31c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ae320: bl #0xa8930 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(713508));
  fn1_a8930(c);
  /* ae324: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* ae328: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
  /* ae32c: cbz x22, #0xae5a0 */
  if ((ARC_X_R(c, 22)) == 0) goto L_ae5a0;
L_ae330:;
  /* ae330: ldp x8, x9, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* ae334: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* ae338: b.eq #0xae3c0 */
  if (ARC_COND(c, 0)) goto L_ae3c0;
  /* ae33c: ldrb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* ae340: cmp w8, #0x49 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(73));
  /* ae344: b.ne #0xae3c0 */
  if (ARC_COND(c, 1)) goto L_ae3c0;
  /* ae348: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ae34c: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* ae350: bl #0xa8f88 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(713556));
  fn1_a8f88(c);
  /* ae354: cbz x0, #0xae5a0 */
  if ((ARC_X_R(c, 0)) == 0) goto L_ae5a0;
  /* ae358: ldr x24, [x19, #0x1330] */
  ARC_X_W(c, 24, arc_ld64((ARC_X_R(c, 19) + INT64_C(4912))));
  /* ae35c: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* ae360: ldr x8, [x24, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 24) + INT64_C(8))));
  /* ae364: sub x9, x8, #0xfd0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4048)));
  /* ae368: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* ae36c: b.hi #0xae38c */
  if (ARC_COND(c, 8)) goto L_ae38c;
  /* ae370: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* ae374: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(713592));
  fn1_1428a8(c);
  /* ae378: cbz x0, #0xae5c4 */
  if ((ARC_X_R(c, 0)) == 0) goto L_ae5c4;
  /* ae37c: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* ae380: stp x24, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* ae384: mov x24, x0 */
  ARC_X_W(c, 24, ARC_X_R(c, 0));
  /* ae388: str x0, [x19, #0x1330] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(4912)), ARC_X_R(c, 0));
L_ae38c:;
  /* ae38c: add x9, x8, #0x20 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(32)));
  /* ae390: add x8, x24, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 24) + ARC_X_R(c, 8)));
  /* ae394: str x9, [x24, #8] */
  arc_st64((ARC_X_R(c, 24) + INT64_C(8)), ARC_X_R(c, 9));
  /* ae398: adrp x9, #0x14b000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1355776)));
  /* ae39c: add x9, x9, #0xd10 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(3344)));
  /* ae3a0: str x9, [x8, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 8) + INT64_C(16));
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 9));
  }
  /* ae3a4: ldurh w9, [x8, #9] */
  ARC_W_W(c, 9, arc_ld16((ARC_X_R(c, 8) + INT64_C(9))));
  /* ae3a8: stp x22, x23, [x8, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 8) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* ae3ac: mov x22, x8 */
  ARC_X_W(c, 22, ARC_X_R(c, 8));
  /* ae3b0: and w9, w9, #0xf000 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) & UINT64_C(61440)));
  /* ae3b4: strb w25, [x8, #8] */
  arc_st8((ARC_X_R(c, 8) + INT64_C(8)), ARC_W_R(c, 25));
  /* ae3b8: orr w9, w9, w26 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | ARC_W_R(c, 26)));
  /* ae3bc: sturh w9, [x8, #9] */
  arc_st16((ARC_X_R(c, 8) + INT64_C(9)), ARC_W_R(c, 9));
L_ae3c0:;
  /* ae3c0: cbz x21, #0xae424 */
  if ((ARC_X_R(c, 21)) == 0) goto L_ae424;
  /* ae3c4: ldr x23, [x19, #0x1330] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 19) + INT64_C(4912))));
  /* ae3c8: ldr x8, [x23, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 23) + INT64_C(8))));
  /* ae3cc: sub x9, x8, #0xfd0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4048)));
  /* ae3d0: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* ae3d4: b.hi #0xae3f4 */
  if (ARC_COND(c, 8)) goto L_ae3f4;
  /* ae3d8: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* ae3dc: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(713696));
  fn1_1428a8(c);
  /* ae3e0: cbz x0, #0xae5c4 */
  if ((ARC_X_R(c, 0)) == 0) goto L_ae5c4;
  /* ae3e4: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* ae3e8: stp x23, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 23));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* ae3ec: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* ae3f0: str x0, [x19, #0x1330] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(4912)), ARC_X_R(c, 0));
L_ae3f4:;
  /* ae3f4: add x9, x8, #0x20 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(32)));
  /* ae3f8: add x8, x23, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 23) + ARC_X_R(c, 8)));
  /* ae3fc: str x9, [x23, #8] */
  arc_st64((ARC_X_R(c, 23) + INT64_C(8)), ARC_X_R(c, 9));
  /* ae400: str x27, [x8, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 8) + INT64_C(16));
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 27));
  }
  /* ae404: ldurh w9, [x8, #9] */
  ARC_W_W(c, 9, arc_ld16((ARC_X_R(c, 8) + INT64_C(9))));
  /* ae408: strb w28, [x8, #8] */
  arc_st8((ARC_X_R(c, 8) + INT64_C(8)), ARC_W_R(c, 28));
  /* ae40c: and w9, w9, #0xf000 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) & UINT64_C(61440)));
  /* ae410: stp x21, x22, [x8, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 8) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 21));
    arc_st64(_pa + 8, ARC_X_R(c, 22));
  }
  /* ae414: mov x21, x8 */
  ARC_X_W(c, 21, ARC_X_R(c, 8));
  /* ae418: orr w9, w9, w26 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | ARC_W_R(c, 26)));
  /* ae41c: sturh w9, [x8, #9] */
  arc_st16((ARC_X_R(c, 8) + INT64_C(9)), ARC_W_R(c, 9));
  /* ae420: b #0xae494 */
  goto L_ae494;
L_ae424:;
  /* ae424: tbz w20, #0, #0xae490 */
  if (((ARC_W_R(c, 20)) >> 0 & 1) == 0) goto L_ae490;
  /* ae428: ldr x23, [x19, #0x1330] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 19) + INT64_C(4912))));
  /* ae42c: ldr x8, [x23, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 23) + INT64_C(8))));
  /* ae430: sub x9, x8, #0xfd0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4048)));
  /* ae434: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* ae438: b.hi #0xae458 */
  if (ARC_COND(c, 8)) goto L_ae458;
  /* ae43c: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* ae440: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(713796));
  fn1_1428a8(c);
  /* ae444: cbz x0, #0xae5c4 */
  if ((ARC_X_R(c, 0)) == 0) goto L_ae5c4;
  /* ae448: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* ae44c: stp x23, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 23));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* ae450: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* ae454: str x0, [x19, #0x1330] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(4912)), ARC_X_R(c, 0));
L_ae458:;
  /* ae458: add x9, x8, #0x20 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(32)));
  /* ae45c: add x21, x23, x8 */
  ARC_X_W(c, 21, (ARC_X_R(c, 23) + ARC_X_R(c, 8)));
  /* ae460: adrp x8, #0x14b000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1355776)));
  /* ae464: add x8, x8, #0x770 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1904)));
  /* ae468: str x9, [x23, #8] */
  arc_st64((ARC_X_R(c, 23) + INT64_C(8)), ARC_X_R(c, 9));
  /* ae46c: mov w9, #0x2e */
  ARC_W_W(c, 9, UINT64_C(46));
  /* ae470: str x8, [x21, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 21) + INT64_C(16));
    ARC_X_W(c, 21, ARC_X_R(c, 21) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* ae474: ldurh w8, [x21, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 21) + INT64_C(9))));
  /* ae478: strb w9, [x21, #8] */
  arc_st8((ARC_X_R(c, 21) + INT64_C(8)), ARC_W_R(c, 9));
  /* ae47c: and w8, w8, #0xf000 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(61440)));
  /* ae480: str x22, [x21, #0x10] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(16)), ARC_X_R(c, 22));
  /* ae484: orr w8, w8, w26 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | ARC_W_R(c, 26)));
  /* ae488: sturh w8, [x21, #9] */
  arc_st16((ARC_X_R(c, 21) + INT64_C(9)), ARC_W_R(c, 8));
  /* ae48c: b #0xae494 */
  goto L_ae494;
L_ae490:;
  /* ae490: mov x21, x22 */
  ARC_X_W(c, 21, ARC_X_R(c, 22));
L_ae494:;
  /* ae494: ldp x8, x9, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* ae498: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* ae49c: b.eq #0xae31c */
  if (ARC_COND(c, 0)) goto L_ae31c;
  /* ae4a0: ldrb w9, [x8] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 8)));
  /* ae4a4: cmp w9, #0x45 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(69));
  /* ae4a8: b.ne #0xae31c */
  if (ARC_COND(c, 1)) goto L_ae31c;
  /* ae4ac: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* ae4b0: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
L_ae4b4:;
  /* ae4b4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ae4b8: bl #0xb6470 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(713916));
  fn1_b6470(c);
  /* ae4bc: cbz x0, #0xae5a0 */
  if ((ARC_X_R(c, 0)) == 0) goto L_ae5a0;
  /* ae4c0: ldr x22, [x19, #0x1330] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 19) + INT64_C(4912))));
  /* ae4c4: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* ae4c8: ldr x8, [x22, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 22) + INT64_C(8))));
  /* ae4cc: sub x9, x8, #0xfd0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4048)));
  /* ae4d0: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* ae4d4: b.hi #0xae4f4 */
  if (ARC_COND(c, 8)) goto L_ae4f4;
  /* ae4d8: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* ae4dc: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(713952));
  fn1_1428a8(c);
  /* ae4e0: cbz x0, #0xae5c4 */
  if ((ARC_X_R(c, 0)) == 0) goto L_ae5c4;
  /* ae4e4: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* ae4e8: stp x22, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* ae4ec: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* ae4f0: str x0, [x19, #0x1330] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(4912)), ARC_X_R(c, 0));
L_ae4f4:;
  /* ae4f4: add x9, x8, #0x20 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(32)));
  /* ae4f8: add x0, x22, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 22) + ARC_X_R(c, 8)));
  /* ae4fc: adrp x8, #0x14b000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1355776)));
  /* ae500: add x8, x8, #0x590 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1424)));
  /* ae504: str x9, [x22, #8] */
  arc_st64((ARC_X_R(c, 22) + INT64_C(8)), ARC_X_R(c, 9));
  /* ae508: mov w10, #0x540 */
  ARC_W_W(c, 10, UINT64_C(1344));
  /* ae50c: str x8, [x0, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* ae510: ldurh w8, [x0, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 0) + INT64_C(9))));
  /* ae514: mov w9, #0x17 */
  ARC_W_W(c, 9, UINT64_C(23));
  /* ae518: stp x21, x20, [x0, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 21));
    arc_st64(_pa + 8, ARC_X_R(c, 20));
  }
  /* ae51c: and w8, w8, #0xf000 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(61440)));
  /* ae520: strb w9, [x0, #8] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 9));
  /* ae524: b #0xae598 */
  goto L_ae598;
L_ae528:;
  /* ae528: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* ae52c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ae530: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* ae534: bl #0xb6470 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(714040));
  fn1_b6470(c);
  /* ae538: cbz x0, #0xae5a0 */
  if ((ARC_X_R(c, 0)) == 0) goto L_ae5a0;
  /* ae53c: ldr x22, [x19, #0x1330] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 19) + INT64_C(4912))));
  /* ae540: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* ae544: ldr x8, [x22, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 22) + INT64_C(8))));
  /* ae548: sub x9, x8, #0xfd0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4048)));
  /* ae54c: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* ae550: b.hi #0xae570 */
  if (ARC_COND(c, 8)) goto L_ae570;
  /* ae554: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* ae558: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(714076));
  fn1_1428a8(c);
  /* ae55c: cbz x0, #0xae5c4 */
  if ((ARC_X_R(c, 0)) == 0) goto L_ae5c4;
  /* ae560: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* ae564: stp x22, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* ae568: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* ae56c: str x0, [x19, #0x1330] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(4912)), ARC_X_R(c, 0));
L_ae570:;
  /* ae570: add x9, x8, #0x20 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(32)));
  /* ae574: add x0, x22, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 22) + ARC_X_R(c, 8)));
  /* ae578: mov w10, #0x540 */
  ARC_W_W(c, 10, UINT64_C(1344));
  /* ae57c: str x9, [x22, #8] */
  arc_st64((ARC_X_R(c, 22) + INT64_C(8)), ARC_X_R(c, 9));
  /* ae580: mov w9, #0x17 */
  ARC_W_W(c, 9, UINT64_C(23));
  /* ae584: str x24, [x0, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 24));
  }
  /* ae588: ldurh w8, [x0, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 0) + INT64_C(9))));
  /* ae58c: strb w9, [x0, #8] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 9));
  /* ae590: and w8, w8, #0xf000 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(61440)));
  /* ae594: stp x20, x21, [x0, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
L_ae598:;
  /* ae598: orr w8, w8, w10 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | ARC_W_R(c, 10)));
  /* ae59c: sturh w8, [x0, #9] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(9)), ARC_W_R(c, 8));
L_ae5a0:;
  /* ae5a0: ldp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* ae5a4: ldp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* ae5a8: ldp x24, x23, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* ae5ac: ldp x26, x25, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* ae5b0: ldp x28, x27, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* ae5b4: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ae5b8: add sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(112)));
  /* ae5bc: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* ae5c0: ret  */
  return;
L_ae5c4:;
  /* ae5c4: bl #0x142488 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(714184));
  fn1_142488(c);
}

void fn1_b36b8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038662840));
  /* b36b8: bti c */
  /* bti: no architectural effect here */
  /* b36bc: mov w1, #0x20 */
  ARC_W_W(c, 1, UINT64_C(32));
  /* b36c0: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_b7310(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038678288));
  /* b7310: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* b7314: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b7318: stp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* b731c: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* b7320: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* b7324: ldp x9, x10, [x1, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 1) + INT64_C(8));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* b7328: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* b732c: ldr x8, [x1] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 1)));
  /* b7330: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* b7334: add x11, x9, #5 */
  ARC_X_W(c, 11, (ARC_X_R(c, 9) + UINT64_C(5)));
  /* b7338: cmp x11, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 10));
  /* b733c: b.ls #0xb736c */
  if (ARC_COND(c, 9)) goto L_b736c;
  /* b7340: lsl x10, x10, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* b7344: add x9, x9, #0x3e5 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(997)));
  /* b7348: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* b734c: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* b7350: csel x1, x10, x9, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* b7354: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b7358: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(750428));
  fn1_142878(c);
  /* b735c: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b7360: cbz x0, #0xb7538 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b7538;
  /* b7364: ldr x9, [x19, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b7368: mov x8, x0 */
  ARC_X_W(c, 8, ARC_X_R(c, 0));
L_b736c:;
  /* b736c: mov w10, #0x7473 */
  ARC_W_W(c, 10, UINT64_C(29811));
  /* b7370: add x8, x8, x9 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + ARC_X_R(c, 9)));
  /* b7374: mov w9, #0x3a */
  ARC_W_W(c, 9, UINT64_C(58));
  /* b7378: movk w10, #0x3a64, lsl #16 */
  ARC_W_W(c, 10, ((ARC_W_R(c, 10) & UINT64_C(18446744069414649855)) | UINT64_C(979632128)));
  /* b737c: strb w9, [x8, #4] */
  arc_st8((ARC_X_R(c, 8) + INT64_C(4)), ARC_W_R(c, 9));
  /* b7380: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* b7384: str w10, [x8] */
  arc_st32(ARC_X_R(c, 8), ARC_W_R(c, 10));
  /* b7388: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b738c: ldr x9, [x20] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 20)));
  /* b7390: add x8, x8, #5 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(5)));
  /* b7394: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
  /* b7398: ldr x8, [x9, #0x38] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(56))));
  /* b739c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(750496));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* b73a0: cbz x1, #0xb7400 */
  if ((ARC_X_R(c, 1)) == 0) goto L_b7400;
  /* b73a4: ldp x8, x9, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* b73a8: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* b73ac: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* b73b0: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* b73b4: add x10, x8, x1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + ARC_X_R(c, 1)));
  /* b73b8: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* b73bc: b.ls #0xb73e4 */
  if (ARC_COND(c, 9)) goto L_b73e4;
  /* b73c0: lsl x8, x9, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 9)) << ((UINT64_C(1)) & 63)));
  /* b73c4: add x9, x10, #0x3e0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 10) + UINT64_C(992)));
  /* b73c8: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* b73cc: csel x1, x8, x9, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* b73d0: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b73d4: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(750552));
  fn1_142878(c);
  /* b73d8: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b73dc: cbz x0, #0xb753c */
  if ((ARC_X_R(c, 0)) == 0) goto L_b753c;
  /* b73e0: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
L_b73e4:;
  /* b73e4: add x0, x0, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* b73e8: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* b73ec: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* b73f0: bl #0x1449d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(750580));
  fn1_1449d8(c);
  /* b73f4: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b73f8: add x8, x8, x21 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + ARC_X_R(c, 21)));
  /* b73fc: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
L_b7400:;
  /* b7400: ldr w8, [x20, #0xc] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 20) + INT64_C(12))));
  /* b7404: cmp w8, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(2));
  /* b7408: b.lo #0xb7524 */
  if (ARC_COND(c, 3)) goto L_b7524;
  /* b740c: ldp x8, x9, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* b7410: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* b7414: add x10, x8, #0x1d */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(29)));
  /* b7418: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* b741c: b.ls #0xb7444 */
  if (ARC_COND(c, 9)) goto L_b7444;
  /* b7420: lsl x9, x9, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) << ((UINT64_C(1)) & 63)));
  /* b7424: add x8, x8, #0x3fd */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1021)));
  /* b7428: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* b742c: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* b7430: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b7434: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(750648));
  fn1_142878(c);
  /* b7438: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b743c: cbz x0, #0xb7540 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b7540;
  /* b7440: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
L_b7444:;
  /* b7444: adrp x9, #0x51000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(331776)));
  /* b7448: add x9, x9, #0x3bb */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(955)));
  /* b744c: add x8, x0, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* b7450: ldr q0, [x9] */
  arc_q_w(c, 0, arc_ld64(ARC_X_R(c, 9)), arc_ld64(ARC_X_R(c, 9) + 8));
  /* b7454: ldur q1, [x9, #0xd] */
  arc_q_w(c, 1, arc_ld64((ARC_X_R(c, 9) + INT64_C(13))), arc_ld64((ARC_X_R(c, 9) + INT64_C(13)) + 8));
  /* b7458: str q0, [x8] */
  arc_st64(ARC_X_R(c, 8), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 8) + 8, (c)->q[0].u64[1]);
  /* b745c: stur q1, [x8, #0xd] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(13)), (c)->q[1].u64[0]);
  arc_st64((ARC_X_R(c, 8) + INT64_C(13)) + 8, (c)->q[1].u64[1]);
  /* b7460: ldr x9, [x19, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b7464: ldr w10, [x20, #0xc] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 20) + INT64_C(12))));
  /* b7468: add x8, x9, #0x1d */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) + UINT64_C(29)));
  /* b746c: cmp w10, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(2));
  /* b7470: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
  /* b7474: b.ne #0xb74d8 */
  if (ARC_COND(c, 1)) goto L_b74d8;
  /* b7478: ldr x10, [x19, #0x10] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* b747c: add x11, x9, #0x33 */
  ARC_X_W(c, 11, (ARC_X_R(c, 9) + UINT64_C(51)));
  /* b7480: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* b7484: cmp x11, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 10));
  /* b7488: b.ls #0xb74b0 */
  if (ARC_COND(c, 9)) goto L_b74b0;
  /* b748c: lsl x8, x10, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* b7490: add x9, x9, #0x413 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(1043)));
  /* b7494: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* b7498: csel x1, x8, x9, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* b749c: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b74a0: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(750756));
  fn1_142878(c);
  /* b74a4: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b74a8: cbz x0, #0xb7548 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b7548;
  /* b74ac: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
L_b74b0:;
  /* b74b0: adrp x9, #0x51000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(331776)));
  /* b74b4: add x9, x9, #0xb93 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(2963)));
  /* b74b8: add x8, x0, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* b74bc: ldr q0, [x9] */
  arc_q_w(c, 0, arc_ld64(ARC_X_R(c, 9)), arc_ld64(ARC_X_R(c, 9) + 8));
  /* b74c0: ldur x9, [x9, #0xe] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(14))));
  /* b74c4: str q0, [x8] */
  arc_st64(ARC_X_R(c, 8), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 8) + 8, (c)->q[0].u64[1]);
  /* b74c8: stur x9, [x8, #0xe] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(14)), ARC_X_R(c, 9));
  /* b74cc: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b74d0: add x8, x8, #0x16 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(22)));
  /* b74d4: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
L_b74d8:;
  /* b74d8: ldr x9, [x19, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* b74dc: add x10, x8, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* b74e0: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* b74e4: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* b74e8: b.ls #0xb7510 */
  if (ARC_COND(c, 9)) goto L_b7510;
  /* b74ec: lsl x9, x9, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) << ((UINT64_C(1)) & 63)));
  /* b74f0: add x8, x8, #0x3e1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(993)));
  /* b74f4: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* b74f8: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* b74fc: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b7500: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(750852));
  fn1_142878(c);
  /* b7504: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b7508: cbz x0, #0xb7544 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b7544;
  /* b750c: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
L_b7510:;
  /* b7510: mov w9, #0x3e */
  ARC_W_W(c, 9, UINT64_C(62));
  /* b7514: strb w9, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
  /* b7518: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b751c: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* b7520: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
L_b7524:;
  /* b7524: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* b7528: ldp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* b752c: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b7530: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* b7534: ret  */
  return;
L_b7538:;
  /* b7538: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(750908));
  fn1_1427b8(c);
L_b753c:;
  /* b753c: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(750912));
  fn1_1427b8(c);
L_b7540:;
  /* b7540: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(750916));
  fn1_1427b8(c);
L_b7544:;
  /* b7544: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(750920));
  fn1_1427b8(c);
L_b7548:;
  /* b7548: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(750924));
  fn1_1427b8(c);
}

void fn1_b9d84(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038689156));
  /* b9d84: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* b9d88: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b9d8c: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* b9d90: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* b9d94: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* b9d98: ldr x21, [x0, #0x1330] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 0) + INT64_C(4912))));
  /* b9d9c: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* b9da0: ldr x8, [x21, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 21) + INT64_C(8))));
  /* b9da4: sub x9, x8, #0xfd0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4048)));
  /* b9da8: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* b9dac: b.hi #0xb9dd0 */
  if (ARC_COND(c, 8)) goto L_b9dd0;
  /* b9db0: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* b9db4: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* b9db8: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(761276));
  fn1_1428a8(c);
  /* b9dbc: cbz x0, #0xb9e2c */
  if ((ARC_X_R(c, 0)) == 0) goto L_b9e2c;
  /* b9dc0: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* b9dc4: stp x21, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 21));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* b9dc8: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* b9dcc: str x0, [x20, #0x1330] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(4912)), ARC_X_R(c, 0));
L_b9dd0:;
  /* b9dd0: add x9, x8, #0x20 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(32)));
  /* b9dd4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* b9dd8: add x20, x21, x8 */
  ARC_X_W(c, 20, (ARC_X_R(c, 21) + ARC_X_R(c, 8)));
  /* b9ddc: str x9, [x21, #8] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(8)), ARC_X_R(c, 9));
  /* b9de0: bl #0x142860 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(761316));
  fn1_142860(c);
  /* b9de4: adrp x9, #0x149000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1347584)));
  /* b9de8: add x9, x9, #0xc10 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(3088)));
  /* b9dec: mov w11, #0x540 */
  ARC_W_W(c, 11, UINT64_C(1344));
  /* b9df0: str x9, [x20, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 20) + INT64_C(16));
    ARC_X_W(c, 20, ARC_X_R(c, 20) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 9));
  }
  /* b9df4: ldurh w9, [x20, #9] */
  ARC_W_W(c, 9, arc_ld16((ARC_X_R(c, 20) + INT64_C(9))));
  /* b9df8: mov x8, x0 */
  ARC_X_W(c, 8, ARC_X_R(c, 0));
  /* b9dfc: mov w10, #8 */
  ARC_W_W(c, 10, UINT64_C(8));
  /* b9e00: and w9, w9, #0xf000 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) & UINT64_C(61440)));
  /* b9e04: strb w10, [x20, #8] */
  arc_st8((ARC_X_R(c, 20) + INT64_C(8)), ARC_W_R(c, 10));
  /* b9e08: orr w9, w9, w11 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | ARC_W_R(c, 11)));
  /* b9e0c: stp x19, x8, [x20, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 19));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* b9e10: sturh w9, [x20, #9] */
  arc_st16((ARC_X_R(c, 20) + INT64_C(9)), ARC_W_R(c, 9));
  /* b9e14: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* b9e18: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* b9e1c: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* b9e20: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b9e24: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* b9e28: ret  */
  return;
L_b9e2c:;
  /* b9e2c: bl #0x142488 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(761392));
  fn1_142488(c);
}

void fn1_bd33c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038702908));
  /* bd33c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* bd340: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* bd344: str x23, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 23));
  /* bd348: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* bd34c: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* bd350: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* bd354: ldrb w23, [x0, #0x1c] */
  ARC_W_W(c, 23, arc_ld8((ARC_X_R(c, 0) + INT64_C(28))));
  /* bd358: tbnz w23, #0, #0xbd528 */
  if (((ARC_W_R(c, 23)) >> 0 & 1) != 0) goto L_bd528;
  /* bd35c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* bd360: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* bd364: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* bd368: strb w8, [x0, #0x1c] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(28)), ARC_W_R(c, 8));
  /* bd36c: bl #0xbd680 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(775024));
  fn1_bd680(c);
  /* bd370: mov x22, x1 */
  ARC_X_W(c, 22, ARC_X_R(c, 1));
  /* bd374: cbz x1, #0xbd524 */
  if ((ARC_X_R(c, 1)) == 0) goto L_bd524;
  /* bd378: ldr x8, [x22] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 22)));
  /* bd37c: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* bd380: ldr x8, [x8, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* bd384: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* bd388: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* bd38c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(775056));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* bd390: ldrb w8, [x22, #0xa] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 22) + INT64_C(10))));
  /* bd394: ands w8, w8, #3 */
  { uint32_t _r = (uint32_t)(ARC_W_R(c, 8) & UINT64_C(3));
    arc_flags_logical32(c, _r);
    ARC_W_W(c, 8, _r); }
  /* bd398: b.eq #0xbd3bc */
  if (ARC_COND(c, 0)) goto L_bd3bc;
  /* bd39c: cmp w8, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(2));
  /* bd3a0: b.ne #0xbd408 */
  if (ARC_COND(c, 1)) goto L_bd408;
  /* bd3a4: ldr x8, [x22] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 22)));
  /* bd3a8: ldr x8, [x8, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(8))));
  /* bd3ac: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* bd3b0: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* bd3b4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(775096));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* bd3b8: tbz w0, #0, #0xbd408 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_bd408;
L_bd3bc:;
  /* bd3bc: ldp x8, x9, [x20, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* bd3c0: ldr x0, [x20] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 20)));
  /* bd3c4: add x10, x8, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* bd3c8: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* bd3cc: b.ls #0xbd3f4 */
  if (ARC_COND(c, 9)) goto L_bd3f4;
  /* bd3d0: lsl x9, x9, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) << ((UINT64_C(1)) & 63)));
  /* bd3d4: add x8, x8, #0x3e1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(993)));
  /* bd3d8: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* bd3dc: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* bd3e0: str x1, [x20, #0x10] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(16)), ARC_X_R(c, 1));
  /* bd3e4: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(775144));
  fn1_142878(c);
  /* bd3e8: str x0, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 0));
  /* bd3ec: cbz x0, #0xbd548 */
  if ((ARC_X_R(c, 0)) == 0) goto L_bd548;
  /* bd3f0: ldr x8, [x20, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(8))));
L_bd3f4:;
  /* bd3f4: mov w9, #0x20 */
  ARC_W_W(c, 9, UINT64_C(32));
  /* bd3f8: strb w9, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
  /* bd3fc: ldr x8, [x20, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(8))));
  /* bd400: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* bd404: str x8, [x20, #8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(8)), ARC_X_R(c, 8));
L_bd408:;
  /* bd408: ldurh w8, [x22, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 22) + INT64_C(9))));
  /* bd40c: ubfx w9, w8, #8, #2 */
  ARC_W_W(c, 9, (((uint32_t)(ARC_W_R(c, 8)) >> 8) & UINT64_C(3)));
  /* bd410: cbz w9, #0xbd464 */
  if ((ARC_W_R(c, 9)) == 0) goto L_bd464;
  /* bd414: cmp w9, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(2));
  /* bd418: b.ne #0xbd438 */
  if (ARC_COND(c, 1)) goto L_bd438;
  /* bd41c: ldr x8, [x22] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 22)));
  /* bd420: ldr x8, [x8, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(8))));
  /* bd424: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* bd428: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* bd42c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(775216));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* bd430: tbnz w0, #0, #0xbd464 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) != 0) goto L_bd464;
  /* bd434: ldurh w8, [x22, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 22) + INT64_C(9))));
L_bd438:;
  /* bd438: lsr w8, w8, #0xa */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 8)) >> ((UINT64_C(10)) & 31)));
  /* bd43c: ands w8, w8, #3 */
  { uint32_t _r = (uint32_t)(ARC_W_R(c, 8) & UINT64_C(3));
    arc_flags_logical32(c, _r);
    ARC_W_W(c, 8, _r); }
  /* bd440: b.eq #0xbd464 */
  if (ARC_COND(c, 0)) goto L_bd464;
  /* bd444: cmp w8, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(2));
  /* bd448: b.ne #0xbd4b0 */
  if (ARC_COND(c, 1)) goto L_bd4b0;
  /* bd44c: ldr x8, [x22] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 22)));
  /* bd450: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* bd454: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* bd458: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* bd45c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(775264));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* bd460: tbz w0, #0, #0xbd4b0 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_bd4b0;
L_bd464:;
  /* bd464: ldp x8, x9, [x20, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* bd468: ldr x0, [x20] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 20)));
  /* bd46c: add x10, x8, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* bd470: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* bd474: b.ls #0xbd49c */
  if (ARC_COND(c, 9)) goto L_bd49c;
  /* bd478: lsl x9, x9, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) << ((UINT64_C(1)) & 63)));
  /* bd47c: add x8, x8, #0x3e1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(993)));
  /* bd480: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* bd484: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* bd488: str x1, [x20, #0x10] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(16)), ARC_X_R(c, 1));
  /* bd48c: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(775312));
  fn1_142878(c);
  /* bd490: str x0, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 0));
  /* bd494: cbz x0, #0xbd544 */
  if ((ARC_X_R(c, 0)) == 0) goto L_bd544;
  /* bd498: ldr x8, [x20, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(8))));
L_bd49c:;
  /* bd49c: mov w9, #0x28 */
  ARC_W_W(c, 9, UINT64_C(40));
  /* bd4a0: strb w9, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
  /* bd4a4: ldr x8, [x20, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(8))));
  /* bd4a8: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* bd4ac: str x8, [x20, #8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(8)), ARC_X_R(c, 8));
L_bd4b0:;
  /* bd4b0: tst x21, #0xffffffff */
  arc_flags_logical64(c, (uint64_t)(ARC_X_R(c, 21) & UINT64_C(4294967295)));
  /* bd4b4: mov w9, #1 */
  ARC_W_W(c, 9, UINT64_C(1));
  /* bd4b8: adrp x11, #0x50000 */
  ARC_X_W(c, 11, (arc_image_bases[1] + UINT64_C(327680)));
  /* bd4bc: add x11, x11, #0x4da */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) + UINT64_C(1242)));
  /* bd4c0: cinc x21, x9, ne */
  ARC_X_W(c, 21, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) + 1 : (ARC_X_R(c, 9))));
  /* bd4c4: adrp x12, #0x50000 */
  ARC_X_W(c, 12, (arc_image_bases[1] + UINT64_C(327680)));
  /* bd4c8: add x12, x12, #0x4d8 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) + UINT64_C(1240)));
  /* bd4cc: ldp x8, x9, [x20, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* bd4d0: ldr x0, [x20] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 20)));
  /* bd4d4: csel x22, x12, x11, eq */
  ARC_X_W(c, 22, (ARC_COND(c, 0) ? (ARC_X_R(c, 12)) : ARC_X_R(c, 11)));
  /* bd4d8: add x10, x8, x21 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + ARC_X_R(c, 21)));
  /* bd4dc: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* bd4e0: b.ls #0xbd508 */
  if (ARC_COND(c, 9)) goto L_bd508;
  /* bd4e4: lsl x8, x9, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 9)) << ((UINT64_C(1)) & 63)));
  /* bd4e8: add x9, x10, #0x3e0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 10) + UINT64_C(992)));
  /* bd4ec: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* bd4f0: csel x1, x8, x9, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* bd4f4: str x1, [x20, #0x10] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(16)), ARC_X_R(c, 1));
  /* bd4f8: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(775420));
  fn1_142878(c);
  /* bd4fc: str x0, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 0));
  /* bd500: cbz x0, #0xbd540 */
  if ((ARC_X_R(c, 0)) == 0) goto L_bd540;
  /* bd504: ldr x8, [x20, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(8))));
L_bd508:;
  /* bd508: add x0, x0, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* bd50c: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* bd510: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* bd514: bl #0x1449d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(775448));
  fn1_1449d8(c);
  /* bd518: ldr x8, [x20, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(8))));
  /* bd51c: add x8, x8, x21 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + ARC_X_R(c, 21)));
  /* bd520: str x8, [x20, #8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(8)), ARC_X_R(c, 8));
L_bd524:;
  /* bd524: strb w23, [x19, #0x1c] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(28)), ARC_W_R(c, 23));
L_bd528:;
  /* bd528: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* bd52c: ldr x23, [sp, #0x10] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(16))));
  /* bd530: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* bd534: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* bd538: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* bd53c: ret  */
  return;
L_bd540:;
  /* bd540: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(775492));
  fn1_1427b8(c);
L_bd544:;
  /* bd544: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(775496));
  fn1_1427b8(c);
L_bd548:;
  /* bd548: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(775500));
  fn1_1427b8(c);
  /* bd54c: strb w23, [x19, #0x1c] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(28)), ARC_W_R(c, 23));
  /* bd550: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(775508));
  fn1_9cc20(c);
}

void fn1_c75f8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038744568));
  /* c75f8: bti c */
  /* bti: no architectural effect here */
  /* c75fc: sub x9, x1, x0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 1) - ARC_X_R(c, 0)));
  /* c7600: mov w8, #0x7e */
  ARC_W_W(c, 8, UINT64_C(126));
  /* c7604: mov w3, #1 */
  ARC_W_W(c, 3, UINT64_C(1));
  /* c7608: asr x9, x9, #2 */
  ARC_X_W(c, 9, ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(2)) & 63))));
  /* c760c: clz x9, x9 */
  ARC_X_W(c, 9, arc_clz64(ARC_X_R(c, 9)));
  /* c7610: sub x2, x8, x9, lsl #1 */
  ARC_X_W(c, 2, (ARC_X_R(c, 8) - ((uint64_t)(ARC_X_R(c, 9)) << 1)));
  /* c7614: b #0xc7618 */
  fn1_c7618(c); return;
}

void fn1_d72e8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038809320));
  /* d72e8: bti c */
  /* bti: no architectural effect here */
  /* d72ec: mov w8, #0x4240 */
  ARC_W_W(c, 8, UINT64_C(16960));
  /* d72f0: movk w8, #0xf, lsl #16 */
  ARC_W_W(c, 8, ((ARC_W_R(c, 8) & UINT64_C(18446744069414649855)) | UINT64_C(983040)));
  /* d72f4: mul x0, x0, x8 */
  ARC_X_W(c, 0, ((uint64_t)(ARC_X_R(c, 0)) * (uint64_t)(ARC_X_R(c, 8))));
  /* d72f8: ret  */
  return;
}

void fn1_daa7c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038823548));
  /* daa7c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* daa80: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* daa84: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* daa88: cmp x0, #0xd3 */
  (void)arc_sub64(c, ARC_X_R(c, 0), UINT64_C(211));
  /* daa8c: b.hi #0xdaad0 */
  if (ARC_COND(c, 8)) goto L_daad0;
  /* daa90: nop  */
  /* nop: no architectural effect here */
  /* daa94: adr x8, #0x58708 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(362248)));
  /* daa98: mov w9, #0x30 */
  ARC_W_W(c, 9, UINT64_C(48));
L_daa9c:;
  /* daa9c: lsr x10, x9, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(1)) & 63)));
  /* daaa0: add x11, x8, x10, lsl #2 */
  ARC_X_W(c, 11, (ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 10)) << 2)));
  /* daaa4: mvn x13, x10 */
  ARC_X_W(c, 13, (~(uint64_t)(ARC_X_R(c, 10))));
  /* daaa8: add x9, x9, x13 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + ARC_X_R(c, 13)));
  /* daaac: ldr w12, [x11], #4 */
  { const uint64_t _a = ARC_X_R(c, 11);
    ARC_X_W(c, 11, ARC_X_R(c, 11) + INT64_C(4));
    ARC_W_W(c, 12, arc_ld32(_a));
  }
  /* daab0: cmp x0, x12 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 12));
  /* daab4: csel x9, x9, x10, hi */
  ARC_X_W(c, 9, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 10)));
  /* daab8: csel x8, x11, x8, hi */
  ARC_X_W(c, 8, (ARC_COND(c, 8) ? (ARC_X_R(c, 11)) : ARC_X_R(c, 8)));
  /* daabc: cbnz x9, #0xdaa9c */
  if ((ARC_X_R(c, 9)) != 0) goto L_daa9c;
  /* daac0: ldr w0, [x8] */
  ARC_W_W(c, 0, arc_ld32(ARC_X_R(c, 8)));
L_daac4:;
  /* daac4: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* daac8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* daacc: ret  */
  return;
L_daad0:;
  /* daad0: cmn x0, #0x3a */
  (void)arc_add64(c, ARC_X_R(c, 0), UINT64_C(58), 0);
  /* daad4: b.hs #0xdb18c */
  if (ARC_COND(c, 2)) goto L_db18c;
  /* daad8: mov x8, #0x4e05 */
  ARC_X_W(c, 8, UINT64_C(19973));
  /* daadc: mov w9, #0xd2 */
  ARC_W_W(c, 9, UINT64_C(210));
  /* daae0: mov w12, #0x30 */
  ARC_W_W(c, 12, UINT64_C(48));
  /* daae4: movk x8, #0x4e0, lsl #16 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(18446744069414649855)) | UINT64_C(81788928)));
  /* daae8: movk x8, #0xe04e, lsl #32 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(18446462603027808255)) | UINT64_C(246625612070912)));
  /* daaec: movk x8, #0x4e04, lsl #48 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(281474976710655)) | UINT64_C(5621618234865221632)));
  /* daaf0: umulh x8, x0, x8 */
  ARC_X_W(c, 8, arc_umulh(ARC_X_R(c, 0), ARC_X_R(c, 8)));
  /* daaf4: lsr x8, x8, #6 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(6)) & 63)));
  /* daaf8: mul x13, x8, x9 */
  ARC_X_W(c, 13, ((uint64_t)(ARC_X_R(c, 8)) * (uint64_t)(ARC_X_R(c, 9))));
  /* daafc: nop  */
  /* nop: no architectural effect here */
  /* dab00: adr x9, #0x587c8 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(362440)));
  /* dab04: mov x11, x9 */
  ARC_X_W(c, 11, ARC_X_R(c, 9));
  /* dab08: sub x10, x0, x13 */
  ARC_X_W(c, 10, (ARC_X_R(c, 0) - ARC_X_R(c, 13)));
L_dab0c:;
  /* dab0c: lsr x14, x12, #1 */
  ARC_X_W(c, 14, ((uint64_t)(ARC_X_R(c, 12)) >> ((UINT64_C(1)) & 63)));
  /* dab10: add x15, x11, x14, lsl #2 */
  ARC_X_W(c, 15, (ARC_X_R(c, 11) + ((uint64_t)(ARC_X_R(c, 14)) << 2)));
  /* dab14: mvn x17, x14 */
  ARC_X_W(c, 17, (~(uint64_t)(ARC_X_R(c, 14))));
  /* dab18: add x12, x12, x17 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) + ARC_X_R(c, 17)));
  /* dab1c: ldr w16, [x15], #4 */
  { const uint64_t _a = ARC_X_R(c, 15);
    ARC_X_W(c, 15, ARC_X_R(c, 15) + INT64_C(4));
    ARC_W_W(c, 16, arc_ld32(_a));
  }
  /* dab20: cmp x10, x16 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 16));
  /* dab24: csel x12, x12, x14, hi */
  ARC_X_W(c, 12, (ARC_COND(c, 8) ? (ARC_X_R(c, 12)) : ARC_X_R(c, 14)));
  /* dab28: csel x11, x15, x11, hi */
  ARC_X_W(c, 11, (ARC_COND(c, 8) ? (ARC_X_R(c, 15)) : ARC_X_R(c, 11)));
  /* dab2c: cbnz x12, #0xdab0c */
  if ((ARC_X_R(c, 12)) != 0) goto L_dab0c;
  /* dab30: sub x10, x11, x9 */
  ARC_X_W(c, 10, (ARC_X_R(c, 11) - ARC_X_R(c, 9)));
  /* dab34: nop  */
  /* nop: no architectural effect here */
  /* dab38: adr x11, #0x58708 */
  ARC_X_W(c, 11, (arc_image_bases[1] + UINT64_C(362248)));
  /* dab3c: asr x10, x10, #2 */
  ARC_X_W(c, 10, ((uint64_t)((int64_t)(ARC_X_R(c, 10)) >> ((UINT64_C(2)) & 63))));
  /* dab40: mov w12, #0xd2 */
  ARC_W_W(c, 12, UINT64_C(210));
L_dab44:;
  /* dab44: ldr w14, [x9, x10, lsl #2] */
  ARC_W_W(c, 14, arc_ld32((ARC_X_R(c, 9) + ((uint64_t)(ARC_X_R(c, 10)) << 2))));
  /* dab48: add x0, x13, x14 */
  ARC_X_W(c, 0, (ARC_X_R(c, 13) + ARC_X_R(c, 14)));
  /* dab4c: mov w13, #0x14 */
  ARC_W_W(c, 13, UINT64_C(20));
L_dab50:;
  /* dab50: ldr w14, [x11, x13] */
  ARC_W_W(c, 14, arc_ld32((ARC_X_R(c, 11) + ARC_X_R(c, 13))));
  /* dab54: udiv x15, x0, x14 */
  ARC_X_W(c, 15, ((uint64_t)(ARC_X_R(c, 14)) == 0 ? 0 : ((uint64_t)(ARC_X_R(c, 0)) / (uint64_t)(ARC_X_R(c, 14)))));
  /* dab58: cmp x15, x14 */
  (void)arc_sub64(c, ARC_X_R(c, 15), ARC_X_R(c, 14));
  /* dab5c: b.lo #0xdaac4 */
  if (ARC_COND(c, 3)) goto L_daac4;
  /* dab60: mul x14, x15, x14 */
  ARC_X_W(c, 14, ((uint64_t)(ARC_X_R(c, 15)) * (uint64_t)(ARC_X_R(c, 14))));
  /* dab64: cmp x0, x14 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 14));
  /* dab68: b.eq #0xdb174 */
  if (ARC_COND(c, 0)) goto L_db174;
  /* dab6c: add x13, x13, #4 */
  ARC_X_W(c, 13, (ARC_X_R(c, 13) + UINT64_C(4)));
  /* dab70: cmp x13, #0xbc */
  (void)arc_sub64(c, ARC_X_R(c, 13), UINT64_C(188));
  /* dab74: b.ne #0xdab50 */
  if (ARC_COND(c, 1)) goto L_dab50;
  /* dab78: mov w13, #0xd3 */
  ARC_W_W(c, 13, UINT64_C(211));
L_dab7c:;
  /* dab7c: udiv x14, x0, x13 */
  ARC_X_W(c, 14, ((uint64_t)(ARC_X_R(c, 13)) == 0 ? 0 : ((uint64_t)(ARC_X_R(c, 0)) / (uint64_t)(ARC_X_R(c, 13)))));
  /* dab80: cmp x14, x13 */
  (void)arc_sub64(c, ARC_X_R(c, 14), ARC_X_R(c, 13));
  /* dab84: b.lo #0xdaac4 */
  if (ARC_COND(c, 3)) goto L_daac4;
  /* dab88: mul x14, x14, x13 */
  ARC_X_W(c, 14, ((uint64_t)(ARC_X_R(c, 14)) * (uint64_t)(ARC_X_R(c, 13))));
  /* dab8c: cmp x0, x14 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 14));
  /* dab90: b.eq #0xdb174 */
  if (ARC_COND(c, 0)) goto L_db174;
  /* dab94: add x14, x13, #0xa */
  ARC_X_W(c, 14, (ARC_X_R(c, 13) + UINT64_C(10)));
  /* dab98: udiv x15, x0, x14 */
  ARC_X_W(c, 15, ((uint64_t)(ARC_X_R(c, 14)) == 0 ? 0 : ((uint64_t)(ARC_X_R(c, 0)) / (uint64_t)(ARC_X_R(c, 14)))));
  /* dab9c: cmp x15, x14 */
  (void)arc_sub64(c, ARC_X_R(c, 15), ARC_X_R(c, 14));
  /* daba0: b.lo #0xdaac4 */
  if (ARC_COND(c, 3)) goto L_daac4;
  /* daba4: mul x15, x15, x14 */
  ARC_X_W(c, 15, ((uint64_t)(ARC_X_R(c, 15)) * (uint64_t)(ARC_X_R(c, 14))));
  /* daba8: cmp x0, x15 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 15));
  /* dabac: b.eq #0xdb174 */
  if (ARC_COND(c, 0)) goto L_db174;
  /* dabb0: add x15, x13, #0xc */
  ARC_X_W(c, 15, (ARC_X_R(c, 13) + UINT64_C(12)));
  /* dabb4: add x14, x14, #2 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) + UINT64_C(2)));
  /* dabb8: udiv x16, x0, x15 */
  ARC_X_W(c, 16, ((uint64_t)(ARC_X_R(c, 15)) == 0 ? 0 : ((uint64_t)(ARC_X_R(c, 0)) / (uint64_t)(ARC_X_R(c, 15)))));
  /* dabbc: cmp x16, x14 */
  (void)arc_sub64(c, ARC_X_R(c, 16), ARC_X_R(c, 14));
  /* dabc0: b.lo #0xdaac4 */
  if (ARC_COND(c, 3)) goto L_daac4;
  /* dabc4: mul x15, x16, x15 */
  ARC_X_W(c, 15, ((uint64_t)(ARC_X_R(c, 16)) * (uint64_t)(ARC_X_R(c, 15))));
  /* dabc8: cmp x0, x15 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 15));
  /* dabcc: b.eq #0xdb174 */
  if (ARC_COND(c, 0)) goto L_db174;
  /* dabd0: add x15, x13, #0x10 */
  ARC_X_W(c, 15, (ARC_X_R(c, 13) + UINT64_C(16)));
  /* dabd4: add x14, x14, #4 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) + UINT64_C(4)));
  /* dabd8: udiv x16, x0, x15 */
  ARC_X_W(c, 16, ((uint64_t)(ARC_X_R(c, 15)) == 0 ? 0 : ((uint64_t)(ARC_X_R(c, 0)) / (uint64_t)(ARC_X_R(c, 15)))));
  /* dabdc: cmp x16, x14 */
  (void)arc_sub64(c, ARC_X_R(c, 16), ARC_X_R(c, 14));
  /* dabe0: b.lo #0xdaac4 */
  if (ARC_COND(c, 3)) goto L_daac4;
  /* dabe4: mul x15, x16, x15 */
  ARC_X_W(c, 15, ((uint64_t)(ARC_X_R(c, 16)) * (uint64_t)(ARC_X_R(c, 15))));
  /* dabe8: cmp x0, x15 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 15));
  /* dabec: b.eq #0xdb174 */
  if (ARC_COND(c, 0)) goto L_db174;
  /* dabf0: add x15, x13, #0x12 */
  ARC_X_W(c, 15, (ARC_X_R(c, 13) + UINT64_C(18)));
  /* dabf4: add x14, x14, #2 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) + UINT64_C(2)));
  /* dabf8: udiv x16, x0, x15 */
  ARC_X_W(c, 16, ((uint64_t)(ARC_X_R(c, 15)) == 0 ? 0 : ((uint64_t)(ARC_X_R(c, 0)) / (uint64_t)(ARC_X_R(c, 15)))));
  /* dabfc: cmp x16, x14 */
  (void)arc_sub64(c, ARC_X_R(c, 16), ARC_X_R(c, 14));
  /* dac00: b.lo #0xdaac4 */
  if (ARC_COND(c, 3)) goto L_daac4;
  /* dac04: mul x15, x16, x15 */
  ARC_X_W(c, 15, ((uint64_t)(ARC_X_R(c, 16)) * (uint64_t)(ARC_X_R(c, 15))));
  /* dac08: cmp x0, x15 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 15));
  /* dac0c: b.eq #0xdb174 */
  if (ARC_COND(c, 0)) goto L_db174;
  /* dac10: add x15, x13, #0x16 */
  ARC_X_W(c, 15, (ARC_X_R(c, 13) + UINT64_C(22)));
  /* dac14: add x14, x14, #4 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) + UINT64_C(4)));
  /* dac18: udiv x16, x0, x15 */
  ARC_X_W(c, 16, ((uint64_t)(ARC_X_R(c, 15)) == 0 ? 0 : ((uint64_t)(ARC_X_R(c, 0)) / (uint64_t)(ARC_X_R(c, 15)))));
  /* dac1c: cmp x16, x14 */
  (void)arc_sub64(c, ARC_X_R(c, 16), ARC_X_R(c, 14));
  /* dac20: b.lo #0xdaac4 */
  if (ARC_COND(c, 3)) goto L_daac4;
  /* dac24: mul x15, x16, x15 */
  ARC_X_W(c, 15, ((uint64_t)(ARC_X_R(c, 16)) * (uint64_t)(ARC_X_R(c, 15))));
  /* dac28: cmp x0, x15 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 15));
  /* dac2c: b.eq #0xdb174 */
  if (ARC_COND(c, 0)) goto L_db174;
  /* dac30: add x15, x13, #0x1c */
  ARC_X_W(c, 15, (ARC_X_R(c, 13) + UINT64_C(28)));
  /* dac34: add x14, x14, #6 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) + UINT64_C(6)));
  /* dac38: udiv x16, x0, x15 */
  ARC_X_W(c, 16, ((uint64_t)(ARC_X_R(c, 15)) == 0 ? 0 : ((uint64_t)(ARC_X_R(c, 0)) / (uint64_t)(ARC_X_R(c, 15)))));
  /* dac3c: cmp x16, x14 */
  (void)arc_sub64(c, ARC_X_R(c, 16), ARC_X_R(c, 14));
  /* dac40: b.lo #0xdaac4 */
  if (ARC_COND(c, 3)) goto L_daac4;
  /* dac44: mul x15, x16, x15 */
  ARC_X_W(c, 15, ((uint64_t)(ARC_X_R(c, 16)) * (uint64_t)(ARC_X_R(c, 15))));
  /* dac48: cmp x0, x15 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 15));
  /* dac4c: b.eq #0xdb174 */
  if (ARC_COND(c, 0)) goto L_db174;
  /* dac50: add x15, x13, #0x1e */
  ARC_X_W(c, 15, (ARC_X_R(c, 13) + UINT64_C(30)));
  /* dac54: add x14, x14, #2 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) + UINT64_C(2)));
  /* dac58: udiv x16, x0, x15 */
  ARC_X_W(c, 16, ((uint64_t)(ARC_X_R(c, 15)) == 0 ? 0 : ((uint64_t)(ARC_X_R(c, 0)) / (uint64_t)(ARC_X_R(c, 15)))));
  /* dac5c: cmp x16, x14 */
  (void)arc_sub64(c, ARC_X_R(c, 16), ARC_X_R(c, 14));
  /* dac60: b.lo #0xdaac4 */
  if (ARC_COND(c, 3)) goto L_daac4;
  /* dac64: mul x15, x16, x15 */
  ARC_X_W(c, 15, ((uint64_t)(ARC_X_R(c, 16)) * (uint64_t)(ARC_X_R(c, 15))));
  /* dac68: cmp x0, x15 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 15));
  /* dac6c: b.eq #0xdb174 */
  if (ARC_COND(c, 0)) goto L_db174;
  /* dac70: add x15, x13, #0x24 */
  ARC_X_W(c, 15, (ARC_X_R(c, 13) + UINT64_C(36)));
  /* dac74: add x14, x14, #6 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) + UINT64_C(6)));
  /* dac78: udiv x16, x0, x15 */
  ARC_X_W(c, 16, ((uint64_t)(ARC_X_R(c, 15)) == 0 ? 0 : ((uint64_t)(ARC_X_R(c, 0)) / (uint64_t)(ARC_X_R(c, 15)))));
  /* dac7c: cmp x16, x14 */
  (void)arc_sub64(c, ARC_X_R(c, 16), ARC_X_R(c, 14));
  /* dac80: b.lo #0xdaac4 */
  if (ARC_COND(c, 3)) goto L_daac4;
  /* dac84: mul x15, x16, x15 */
  ARC_X_W(c, 15, ((uint64_t)(ARC_X_R(c, 16)) * (uint64_t)(ARC_X_R(c, 15))));
  /* dac88: cmp x0, x15 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 15));
  /* dac8c: b.eq #0xdb174 */
  if (ARC_COND(c, 0)) goto L_db174;
  /* dac90: add x15, x13, #0x28 */
  ARC_X_W(c, 15, (ARC_X_R(c, 13) + UINT64_C(40)));
  /* dac94: add x14, x14, #4 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) + UINT64_C(4)));
  /* dac98: udiv x16, x0, x15 */
  ARC_X_W(c, 16, ((uint64_t)(ARC_X_R(c, 15)) == 0 ? 0 : ((uint64_t)(ARC_X_R(c, 0)) / (uint64_t)(ARC_X_R(c, 15)))));
  /* dac9c: cmp x16, x14 */
  (void)arc_sub64(c, ARC_X_R(c, 16), ARC_X_R(c, 14));
  /* daca0: b.lo #0xdaac4 */
  if (ARC_COND(c, 3)) goto L_daac4;
  /* daca4: mul x15, x16, x15 */
  ARC_X_W(c, 15, ((uint64_t)(ARC_X_R(c, 16)) * (uint64_t)(ARC_X_R(c, 15))));
  /* daca8: cmp x0, x15 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 15));
  /* dacac: b.eq #0xdb174 */
  if (ARC_COND(c, 0)) goto L_db174;
  /* dacb0: add x15, x13, #0x2a */
  ARC_X_W(c, 15, (ARC_X_R(c, 13) + UINT64_C(42)));
  /* dacb4: add x14, x14, #2 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) + UINT64_C(2)));
  /* dacb8: udiv x16, x0, x15 */
  ARC_X_W(c, 16, ((uint64_t)(ARC_X_R(c, 15)) == 0 ? 0 : ((uint64_t)(ARC_X_R(c, 0)) / (uint64_t)(ARC_X_R(c, 15)))));
  /* dacbc: cmp x16, x14 */
  (void)arc_sub64(c, ARC_X_R(c, 16), ARC_X_R(c, 14));
  /* dacc0: b.lo #0xdaac4 */
  if (ARC_COND(c, 3)) goto L_daac4;
  /* dacc4: mul x15, x16, x15 */
  ARC_X_W(c, 15, ((uint64_t)(ARC_X_R(c, 16)) * (uint64_t)(ARC_X_R(c, 15))));
  /* dacc8: cmp x0, x15 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 15));
  /* daccc: b.eq #0xdb174 */
  if (ARC_COND(c, 0)) goto L_db174;
  /* dacd0: add x15, x13, #0x2e */
  ARC_X_W(c, 15, (ARC_X_R(c, 13) + UINT64_C(46)));
  /* dacd4: add x14, x14, #4 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) + UINT64_C(4)));
  /* dacd8: udiv x16, x0, x15 */
  ARC_X_W(c, 16, ((uint64_t)(ARC_X_R(c, 15)) == 0 ? 0 : ((uint64_t)(ARC_X_R(c, 0)) / (uint64_t)(ARC_X_R(c, 15)))));
  /* dacdc: cmp x16, x14 */
  (void)arc_sub64(c, ARC_X_R(c, 16), ARC_X_R(c, 14));
  /* dace0: b.lo #0xdaac4 */
  if (ARC_COND(c, 3)) goto L_daac4;
  /* dace4: mul x15, x16, x15 */
  ARC_X_W(c, 15, ((uint64_t)(ARC_X_R(c, 16)) * (uint64_t)(ARC_X_R(c, 15))));
  /* dace8: cmp x0, x15 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 15));
  /* dacec: b.eq #0xdb174 */
  if (ARC_COND(c, 0)) goto L_db174;
  /* dacf0: add x15, x13, #0x34 */
  ARC_X_W(c, 15, (ARC_X_R(c, 13) + UINT64_C(52)));
  /* dacf4: add x14, x14, #6 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) + UINT64_C(6)));
  /* dacf8: udiv x16, x0, x15 */
  ARC_X_W(c, 16, ((uint64_t)(ARC_X_R(c, 15)) == 0 ? 0 : ((uint64_t)(ARC_X_R(c, 0)) / (uint64_t)(ARC_X_R(c, 15)))));
  /* dacfc: cmp x16, x14 */
  (void)arc_sub64(c, ARC_X_R(c, 16), ARC_X_R(c, 14));
  /* dad00: b.lo #0xdaac4 */
  if (ARC_COND(c, 3)) goto L_daac4;
  /* dad04: mul x15, x16, x15 */
  ARC_X_W(c, 15, ((uint64_t)(ARC_X_R(c, 16)) * (uint64_t)(ARC_X_R(c, 15))));
  /* dad08: cmp x0, x15 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 15));
  /* dad0c: b.eq #0xdb174 */
  if (ARC_COND(c, 0)) goto L_db174;
  /* dad10: add x15, x13, #0x3a */
  ARC_X_W(c, 15, (ARC_X_R(c, 13) + UINT64_C(58)));
  /* dad14: add x14, x14, #6 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) + UINT64_C(6)));
  /* dad18: udiv x16, x0, x15 */
  ARC_X_W(c, 16, ((uint64_t)(ARC_X_R(c, 15)) == 0 ? 0 : ((uint64_t)(ARC_X_R(c, 0)) / (uint64_t)(ARC_X_R(c, 15)))));
  /* dad1c: cmp x16, x14 */
  (void)arc_sub64(c, ARC_X_R(c, 16), ARC_X_R(c, 14));
  /* dad20: b.lo #0xdaac4 */
  if (ARC_COND(c, 3)) goto L_daac4;
  /* dad24: mul x15, x16, x15 */
  ARC_X_W(c, 15, ((uint64_t)(ARC_X_R(c, 16)) * (uint64_t)(ARC_X_R(c, 15))));
  /* dad28: cmp x0, x15 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 15));
  /* dad2c: b.eq #0xdb174 */
  if (ARC_COND(c, 0)) goto L_db174;
  /* dad30: add x15, x13, #0x3c */
  ARC_X_W(c, 15, (ARC_X_R(c, 13) + UINT64_C(60)));
  /* dad34: add x14, x14, #2 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) + UINT64_C(2)));
  /* dad38: udiv x16, x0, x15 */
  ARC_X_W(c, 16, ((uint64_t)(ARC_X_R(c, 15)) == 0 ? 0 : ((uint64_t)(ARC_X_R(c, 0)) / (uint64_t)(ARC_X_R(c, 15)))));
  /* dad3c: cmp x16, x14 */
  (void)arc_sub64(c, ARC_X_R(c, 16), ARC_X_R(c, 14));
  /* dad40: b.lo #0xdaac4 */
  if (ARC_COND(c, 3)) goto L_daac4;
  /* dad44: mul x15, x16, x15 */
  ARC_X_W(c, 15, ((uint64_t)(ARC_X_R(c, 16)) * (uint64_t)(ARC_X_R(c, 15))));
  /* dad48: cmp x0, x15 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 15));
  /* dad4c: b.eq #0xdb174 */
  if (ARC_COND(c, 0)) goto L_db174;
  /* dad50: add x15, x13, #0x42 */
  ARC_X_W(c, 15, (ARC_X_R(c, 13) + UINT64_C(66)));
  /* dad54: add x14, x14, #6 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) + UINT64_C(6)));
  /* dad58: udiv x16, x0, x15 */
  ARC_X_W(c, 16, ((uint64_t)(ARC_X_R(c, 15)) == 0 ? 0 : ((uint64_t)(ARC_X_R(c, 0)) / (uint64_t)(ARC_X_R(c, 15)))));
  /* dad5c: cmp x16, x14 */
  (void)arc_sub64(c, ARC_X_R(c, 16), ARC_X_R(c, 14));
  /* dad60: b.lo #0xdaac4 */
  if (ARC_COND(c, 3)) goto L_daac4;
  /* dad64: mul x15, x16, x15 */
  ARC_X_W(c, 15, ((uint64_t)(ARC_X_R(c, 16)) * (uint64_t)(ARC_X_R(c, 15))));
  /* dad68: cmp x0, x15 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 15));
  /* dad6c: b.eq #0xdb174 */
  if (ARC_COND(c, 0)) goto L_db174;
  /* dad70: add x15, x13, #0x46 */
  ARC_X_W(c, 15, (ARC_X_R(c, 13) + UINT64_C(70)));
  /* dad74: add x14, x14, #4 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) + UINT64_C(4)));
  /* dad78: udiv x16, x0, x15 */
  ARC_X_W(c, 16, ((uint64_t)(ARC_X_R(c, 15)) == 0 ? 0 : ((uint64_t)(ARC_X_R(c, 0)) / (uint64_t)(ARC_X_R(c, 15)))));
  /* dad7c: cmp x16, x14 */
  (void)arc_sub64(c, ARC_X_R(c, 16), ARC_X_R(c, 14));
  /* dad80: b.lo #0xdaac4 */
  if (ARC_COND(c, 3)) goto L_daac4;
  /* dad84: mul x15, x16, x15 */
  ARC_X_W(c, 15, ((uint64_t)(ARC_X_R(c, 16)) * (uint64_t)(ARC_X_R(c, 15))));
  /* dad88: cmp x0, x15 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 15));
  /* dad8c: b.eq #0xdb174 */
  if (ARC_COND(c, 0)) goto L_db174;
  /* dad90: add x15, x13, #0x48 */
  ARC_X_W(c, 15, (ARC_X_R(c, 13) + UINT64_C(72)));
  /* dad94: add x14, x14, #2 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) + UINT64_C(2)));
  /* dad98: udiv x16, x0, x15 */
  ARC_X_W(c, 16, ((uint64_t)(ARC_X_R(c, 15)) == 0 ? 0 : ((uint64_t)(ARC_X_R(c, 0)) / (uint64_t)(ARC_X_R(c, 15)))));
  /* dad9c: cmp x16, x14 */
  (void)arc_sub64(c, ARC_X_R(c, 16), ARC_X_R(c, 14));
  /* dada0: b.lo #0xdaac4 */
  if (ARC_COND(c, 3)) goto L_daac4;
  /* dada4: mul x15, x16, x15 */
  ARC_X_W(c, 15, ((uint64_t)(ARC_X_R(c, 16)) * (uint64_t)(ARC_X_R(c, 15))));
  /* dada8: cmp x0, x15 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 15));
  /* dadac: b.eq #0xdb174 */
  if (ARC_COND(c, 0)) goto L_db174;
  /* dadb0: add x15, x13, #0x4e */
  ARC_X_W(c, 15, (ARC_X_R(c, 13) + UINT64_C(78)));
  /* dadb4: add x14, x14, #6 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) + UINT64_C(6)));
  /* dadb8: udiv x16, x0, x15 */
  ARC_X_W(c, 16, ((uint64_t)(ARC_X_R(c, 15)) == 0 ? 0 : ((uint64_t)(ARC_X_R(c, 0)) / (uint64_t)(ARC_X_R(c, 15)))));
  /* dadbc: cmp x16, x14 */
  (void)arc_sub64(c, ARC_X_R(c, 16), ARC_X_R(c, 14));
  /* dadc0: b.lo #0xdaac4 */
  if (ARC_COND(c, 3)) goto L_daac4;
  /* dadc4: mul x15, x16, x15 */
  ARC_X_W(c, 15, ((uint64_t)(ARC_X_R(c, 16)) * (uint64_t)(ARC_X_R(c, 15))));
  /* dadc8: cmp x0, x15 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 15));
  /* dadcc: b.eq #0xdb174 */
  if (ARC_COND(c, 0)) goto L_db174;
  /* dadd0: add x15, x13, #0x52 */
  ARC_X_W(c, 15, (ARC_X_R(c, 13) + UINT64_C(82)));
  /* dadd4: add x14, x14, #4 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) + UINT64_C(4)));
  /* dadd8: udiv x16, x0, x15 */
  ARC_X_W(c, 16, ((uint64_t)(ARC_X_R(c, 15)) == 0 ? 0 : ((uint64_t)(ARC_X_R(c, 0)) / (uint64_t)(ARC_X_R(c, 15)))));
  /* daddc: cmp x16, x14 */
  (void)arc_sub64(c, ARC_X_R(c, 16), ARC_X_R(c, 14));
  /* dade0: b.lo #0xdaac4 */
  if (ARC_COND(c, 3)) goto L_daac4;
  /* dade4: mul x15, x16, x15 */
  ARC_X_W(c, 15, ((uint64_t)(ARC_X_R(c, 16)) * (uint64_t)(ARC_X_R(c, 15))));
  /* dade8: cmp x0, x15 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 15));
  /* dadec: b.eq #0xdb174 */
  if (ARC_COND(c, 0)) goto L_db174;
  /* dadf0: add x15, x13, #0x58 */
  ARC_X_W(c, 15, (ARC_X_R(c, 13) + UINT64_C(88)));
  /* dadf4: add x14, x14, #6 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) + UINT64_C(6)));
  /* dadf8: udiv x16, x0, x15 */
  ARC_X_W(c, 16, ((uint64_t)(ARC_X_R(c, 15)) == 0 ? 0 : ((uint64_t)(ARC_X_R(c, 0)) / (uint64_t)(ARC_X_R(c, 15)))));
  /* dadfc: cmp x16, x14 */
  (void)arc_sub64(c, ARC_X_R(c, 16), ARC_X_R(c, 14));
  /* dae00: b.lo #0xdaac4 */
  if (ARC_COND(c, 3)) goto L_daac4;
  /* dae04: mul x15, x16, x15 */
  ARC_X_W(c, 15, ((uint64_t)(ARC_X_R(c, 16)) * (uint64_t)(ARC_X_R(c, 15))));
  /* dae08: cmp x0, x15 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 15));
  /* dae0c: b.eq #0xdb174 */
  if (ARC_COND(c, 0)) goto L_db174;
  /* dae10: add x15, x13, #0x60 */
  ARC_X_W(c, 15, (ARC_X_R(c, 13) + UINT64_C(96)));
  /* dae14: add x14, x14, #8 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) + UINT64_C(8)));
  /* dae18: udiv x16, x0, x15 */
  ARC_X_W(c, 16, ((uint64_t)(ARC_X_R(c, 15)) == 0 ? 0 : ((uint64_t)(ARC_X_R(c, 0)) / (uint64_t)(ARC_X_R(c, 15)))));
  /* dae1c: cmp x16, x14 */
  (void)arc_sub64(c, ARC_X_R(c, 16), ARC_X_R(c, 14));
  /* dae20: b.lo #0xdaac4 */
  if (ARC_COND(c, 3)) goto L_daac4;
  /* dae24: mul x15, x16, x15 */
  ARC_X_W(c, 15, ((uint64_t)(ARC_X_R(c, 16)) * (uint64_t)(ARC_X_R(c, 15))));
  /* dae28: cmp x0, x15 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 15));
  /* dae2c: b.eq #0xdb174 */
  if (ARC_COND(c, 0)) goto L_db174;
  /* dae30: add x15, x13, #0x64 */
  ARC_X_W(c, 15, (ARC_X_R(c, 13) + UINT64_C(100)));
  /* dae34: add x14, x14, #4 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) + UINT64_C(4)));
  /* dae38: udiv x16, x0, x15 */
  ARC_X_W(c, 16, ((uint64_t)(ARC_X_R(c, 15)) == 0 ? 0 : ((uint64_t)(ARC_X_R(c, 0)) / (uint64_t)(ARC_X_R(c, 15)))));
  /* dae3c: cmp x16, x14 */
  (void)arc_sub64(c, ARC_X_R(c, 16), ARC_X_R(c, 14));
  /* dae40: b.lo #0xdaac4 */
  if (ARC_COND(c, 3)) goto L_daac4;
  /* dae44: mul x15, x16, x15 */
  ARC_X_W(c, 15, ((uint64_t)(ARC_X_R(c, 16)) * (uint64_t)(ARC_X_R(c, 15))));
  /* dae48: cmp x0, x15 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 15));
  /* dae4c: b.eq #0xdb174 */
  if (ARC_COND(c, 0)) goto L_db174;
  /* dae50: add x15, x13, #0x66 */
  ARC_X_W(c, 15, (ARC_X_R(c, 13) + UINT64_C(102)));
  /* dae54: add x14, x14, #2 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) + UINT64_C(2)));
  /* dae58: udiv x16, x0, x15 */
  ARC_X_W(c, 16, ((uint64_t)(ARC_X_R(c, 15)) == 0 ? 0 : ((uint64_t)(ARC_X_R(c, 0)) / (uint64_t)(ARC_X_R(c, 15)))));
  /* dae5c: cmp x16, x14 */
  (void)arc_sub64(c, ARC_X_R(c, 16), ARC_X_R(c, 14));
  /* dae60: b.lo #0xdaac4 */
  if (ARC_COND(c, 3)) goto L_daac4;
  /* dae64: mul x15, x16, x15 */
  ARC_X_W(c, 15, ((uint64_t)(ARC_X_R(c, 16)) * (uint64_t)(ARC_X_R(c, 15))));
  /* dae68: cmp x0, x15 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 15));
  /* dae6c: b.eq #0xdb174 */
  if (ARC_COND(c, 0)) goto L_db174;
  /* dae70: add x15, x13, #0x6a */
  ARC_X_W(c, 15, (ARC_X_R(c, 13) + UINT64_C(106)));
  /* dae74: add x14, x14, #4 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) + UINT64_C(4)));
  /* dae78: udiv x16, x0, x15 */
  ARC_X_W(c, 16, ((uint64_t)(ARC_X_R(c, 15)) == 0 ? 0 : ((uint64_t)(ARC_X_R(c, 0)) / (uint64_t)(ARC_X_R(c, 15)))));
  /* dae7c: cmp x16, x14 */
  (void)arc_sub64(c, ARC_X_R(c, 16), ARC_X_R(c, 14));
  /* dae80: b.lo #0xdaac4 */
  if (ARC_COND(c, 3)) goto L_daac4;
  /* dae84: mul x15, x16, x15 */
  ARC_X_W(c, 15, ((uint64_t)(ARC_X_R(c, 16)) * (uint64_t)(ARC_X_R(c, 15))));
  /* dae88: cmp x0, x15 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 15));
  /* dae8c: b.eq #0xdb174 */
  if (ARC_COND(c, 0)) goto L_db174;
  /* dae90: add x15, x13, #0x6c */
  ARC_X_W(c, 15, (ARC_X_R(c, 13) + UINT64_C(108)));
  /* dae94: add x14, x14, #2 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) + UINT64_C(2)));
  /* dae98: udiv x16, x0, x15 */
  ARC_X_W(c, 16, ((uint64_t)(ARC_X_R(c, 15)) == 0 ? 0 : ((uint64_t)(ARC_X_R(c, 0)) / (uint64_t)(ARC_X_R(c, 15)))));
  /* dae9c: cmp x16, x14 */
  (void)arc_sub64(c, ARC_X_R(c, 16), ARC_X_R(c, 14));
  /* daea0: b.lo #0xdaac4 */
  if (ARC_COND(c, 3)) goto L_daac4;
  /* daea4: mul x15, x16, x15 */
  ARC_X_W(c, 15, ((uint64_t)(ARC_X_R(c, 16)) * (uint64_t)(ARC_X_R(c, 15))));
  /* daea8: cmp x0, x15 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 15));
  /* daeac: b.eq #0xdb174 */
  if (ARC_COND(c, 0)) goto L_db174;
  /* daeb0: add x15, x13, #0x70 */
  ARC_X_W(c, 15, (ARC_X_R(c, 13) + UINT64_C(112)));
  /* daeb4: add x14, x14, #4 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) + UINT64_C(4)));
  /* daeb8: udiv x16, x0, x15 */
  ARC_X_W(c, 16, ((uint64_t)(ARC_X_R(c, 15)) == 0 ? 0 : ((uint64_t)(ARC_X_R(c, 0)) / (uint64_t)(ARC_X_R(c, 15)))));
  /* daebc: cmp x16, x14 */
  (void)arc_sub64(c, ARC_X_R(c, 16), ARC_X_R(c, 14));
  /* daec0: b.lo #0xdaac4 */
  if (ARC_COND(c, 3)) goto L_daac4;
  /* daec4: mul x15, x16, x15 */
  ARC_X_W(c, 15, ((uint64_t)(ARC_X_R(c, 16)) * (uint64_t)(ARC_X_R(c, 15))));
  /* daec8: cmp x0, x15 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 15));
  /* daecc: b.eq #0xdb174 */
  if (ARC_COND(c, 0)) goto L_db174;
  /* daed0: add x15, x13, #0x78 */
  ARC_X_W(c, 15, (ARC_X_R(c, 13) + UINT64_C(120)));
  /* daed4: add x14, x14, #8 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) + UINT64_C(8)));
  /* daed8: udiv x16, x0, x15 */
  ARC_X_W(c, 16, ((uint64_t)(ARC_X_R(c, 15)) == 0 ? 0 : ((uint64_t)(ARC_X_R(c, 0)) / (uint64_t)(ARC_X_R(c, 15)))));
  /* daedc: cmp x16, x14 */
  (void)arc_sub64(c, ARC_X_R(c, 16), ARC_X_R(c, 14));
  /* daee0: b.lo #0xdaac4 */
  if (ARC_COND(c, 3)) goto L_daac4;
  /* daee4: mul x15, x16, x15 */
  ARC_X_W(c, 15, ((uint64_t)(ARC_X_R(c, 16)) * (uint64_t)(ARC_X_R(c, 15))));
  /* daee8: cmp x0, x15 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 15));
  /* daeec: b.eq #0xdb174 */
  if (ARC_COND(c, 0)) goto L_db174;
  /* daef0: add x15, x13, #0x7e */
  ARC_X_W(c, 15, (ARC_X_R(c, 13) + UINT64_C(126)));
  /* daef4: add x14, x14, #6 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) + UINT64_C(6)));
  /* daef8: udiv x16, x0, x15 */
  ARC_X_W(c, 16, ((uint64_t)(ARC_X_R(c, 15)) == 0 ? 0 : ((uint64_t)(ARC_X_R(c, 0)) / (uint64_t)(ARC_X_R(c, 15)))));
  /* daefc: cmp x16, x14 */
  (void)arc_sub64(c, ARC_X_R(c, 16), ARC_X_R(c, 14));
  /* daf00: b.lo #0xdaac4 */
  if (ARC_COND(c, 3)) goto L_daac4;
  /* daf04: mul x15, x16, x15 */
  ARC_X_W(c, 15, ((uint64_t)(ARC_X_R(c, 16)) * (uint64_t)(ARC_X_R(c, 15))));
  /* daf08: cmp x0, x15 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 15));
  /* daf0c: b.eq #0xdb174 */
  if (ARC_COND(c, 0)) goto L_db174;
  /* daf10: add x15, x13, #0x82 */
  ARC_X_W(c, 15, (ARC_X_R(c, 13) + UINT64_C(130)));
  /* daf14: add x14, x14, #4 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) + UINT64_C(4)));
  /* daf18: udiv x16, x0, x15 */
  ARC_X_W(c, 16, ((uint64_t)(ARC_X_R(c, 15)) == 0 ? 0 : ((uint64_t)(ARC_X_R(c, 0)) / (uint64_t)(ARC_X_R(c, 15)))));
  /* daf1c: cmp x16, x14 */
  (void)arc_sub64(c, ARC_X_R(c, 16), ARC_X_R(c, 14));
  /* daf20: b.lo #0xdaac4 */
  if (ARC_COND(c, 3)) goto L_daac4;
  /* daf24: mul x15, x16, x15 */
  ARC_X_W(c, 15, ((uint64_t)(ARC_X_R(c, 16)) * (uint64_t)(ARC_X_R(c, 15))));
  /* daf28: cmp x0, x15 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 15));
  /* daf2c: b.eq #0xdb174 */
  if (ARC_COND(c, 0)) goto L_db174;
  /* daf30: add x15, x13, #0x88 */
  ARC_X_W(c, 15, (ARC_X_R(c, 13) + UINT64_C(136)));
  /* daf34: add x14, x14, #6 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) + UINT64_C(6)));
  /* daf38: udiv x16, x0, x15 */
  ARC_X_W(c, 16, ((uint64_t)(ARC_X_R(c, 15)) == 0 ? 0 : ((uint64_t)(ARC_X_R(c, 0)) / (uint64_t)(ARC_X_R(c, 15)))));
  /* daf3c: cmp x16, x14 */
  (void)arc_sub64(c, ARC_X_R(c, 16), ARC_X_R(c, 14));
  /* daf40: b.lo #0xdaac4 */
  if (ARC_COND(c, 3)) goto L_daac4;
  /* daf44: mul x15, x16, x15 */
  ARC_X_W(c, 15, ((uint64_t)(ARC_X_R(c, 16)) * (uint64_t)(ARC_X_R(c, 15))));
  /* daf48: cmp x0, x15 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 15));
  /* daf4c: b.eq #0xdb174 */
  if (ARC_COND(c, 0)) goto L_db174;
  /* daf50: add x15, x13, #0x8a */
  ARC_X_W(c, 15, (ARC_X_R(c, 13) + UINT64_C(138)));
  /* daf54: add x14, x14, #2 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) + UINT64_C(2)));
  /* daf58: udiv x16, x0, x15 */
  ARC_X_W(c, 16, ((uint64_t)(ARC_X_R(c, 15)) == 0 ? 0 : ((uint64_t)(ARC_X_R(c, 0)) / (uint64_t)(ARC_X_R(c, 15)))));
  /* daf5c: cmp x16, x14 */
  (void)arc_sub64(c, ARC_X_R(c, 16), ARC_X_R(c, 14));
  /* daf60: b.lo #0xdaac4 */
  if (ARC_COND(c, 3)) goto L_daac4;
  /* daf64: mul x15, x16, x15 */
  ARC_X_W(c, 15, ((uint64_t)(ARC_X_R(c, 16)) * (uint64_t)(ARC_X_R(c, 15))));
  /* daf68: cmp x0, x15 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 15));
  /* daf6c: b.eq #0xdb174 */
  if (ARC_COND(c, 0)) goto L_db174;
  /* daf70: add x15, x13, #0x8e */
  ARC_X_W(c, 15, (ARC_X_R(c, 13) + UINT64_C(142)));
  /* daf74: add x14, x14, #4 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) + UINT64_C(4)));
  /* daf78: udiv x16, x0, x15 */
  ARC_X_W(c, 16, ((uint64_t)(ARC_X_R(c, 15)) == 0 ? 0 : ((uint64_t)(ARC_X_R(c, 0)) / (uint64_t)(ARC_X_R(c, 15)))));
  /* daf7c: cmp x16, x14 */
  (void)arc_sub64(c, ARC_X_R(c, 16), ARC_X_R(c, 14));
  /* daf80: b.lo #0xdaac4 */
  if (ARC_COND(c, 3)) goto L_daac4;
  /* daf84: mul x15, x16, x15 */
  ARC_X_W(c, 15, ((uint64_t)(ARC_X_R(c, 16)) * (uint64_t)(ARC_X_R(c, 15))));
  /* daf88: cmp x0, x15 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 15));
  /* daf8c: b.eq #0xdb174 */
  if (ARC_COND(c, 0)) goto L_db174;
  /* daf90: add x15, x13, #0x94 */
  ARC_X_W(c, 15, (ARC_X_R(c, 13) + UINT64_C(148)));
  /* daf94: add x14, x14, #6 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) + UINT64_C(6)));
  /* daf98: udiv x16, x0, x15 */
  ARC_X_W(c, 16, ((uint64_t)(ARC_X_R(c, 15)) == 0 ? 0 : ((uint64_t)(ARC_X_R(c, 0)) / (uint64_t)(ARC_X_R(c, 15)))));
  /* daf9c: cmp x16, x14 */
  (void)arc_sub64(c, ARC_X_R(c, 16), ARC_X_R(c, 14));
  /* dafa0: b.lo #0xdaac4 */
  if (ARC_COND(c, 3)) goto L_daac4;
  /* dafa4: mul x15, x16, x15 */
  ARC_X_W(c, 15, ((uint64_t)(ARC_X_R(c, 16)) * (uint64_t)(ARC_X_R(c, 15))));
  /* dafa8: cmp x0, x15 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 15));
  /* dafac: b.eq #0xdb174 */
  if (ARC_COND(c, 0)) goto L_db174;
  /* dafb0: add x15, x13, #0x96 */
  ARC_X_W(c, 15, (ARC_X_R(c, 13) + UINT64_C(150)));
  /* dafb4: add x14, x14, #2 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) + UINT64_C(2)));
  /* dafb8: udiv x16, x0, x15 */
  ARC_X_W(c, 16, ((uint64_t)(ARC_X_R(c, 15)) == 0 ? 0 : ((uint64_t)(ARC_X_R(c, 0)) / (uint64_t)(ARC_X_R(c, 15)))));
  /* dafbc: cmp x16, x14 */
  (void)arc_sub64(c, ARC_X_R(c, 16), ARC_X_R(c, 14));
  /* dafc0: b.lo #0xdaac4 */
  if (ARC_COND(c, 3)) goto L_daac4;
  /* dafc4: mul x15, x16, x15 */
  ARC_X_W(c, 15, ((uint64_t)(ARC_X_R(c, 16)) * (uint64_t)(ARC_X_R(c, 15))));
  /* dafc8: cmp x0, x15 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 15));
  /* dafcc: b.eq #0xdb174 */
  if (ARC_COND(c, 0)) goto L_db174;
  /* dafd0: add x15, x13, #0x9c */
  ARC_X_W(c, 15, (ARC_X_R(c, 13) + UINT64_C(156)));
  /* dafd4: add x14, x14, #6 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) + UINT64_C(6)));
  /* dafd8: udiv x16, x0, x15 */
  ARC_X_W(c, 16, ((uint64_t)(ARC_X_R(c, 15)) == 0 ? 0 : ((uint64_t)(ARC_X_R(c, 0)) / (uint64_t)(ARC_X_R(c, 15)))));
  /* dafdc: cmp x16, x14 */
  (void)arc_sub64(c, ARC_X_R(c, 16), ARC_X_R(c, 14));
  /* dafe0: b.lo #0xdaac4 */
  if (ARC_COND(c, 3)) goto L_daac4;
  /* dafe4: mul x15, x16, x15 */
  ARC_X_W(c, 15, ((uint64_t)(ARC_X_R(c, 16)) * (uint64_t)(ARC_X_R(c, 15))));
  /* dafe8: cmp x0, x15 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 15));
  /* dafec: b.eq #0xdb174 */
  if (ARC_COND(c, 0)) goto L_db174;
  /* daff0: add x15, x13, #0xa2 */
  ARC_X_W(c, 15, (ARC_X_R(c, 13) + UINT64_C(162)));
  /* daff4: add x14, x14, #6 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) + UINT64_C(6)));
  /* daff8: udiv x16, x0, x15 */
  ARC_X_W(c, 16, ((uint64_t)(ARC_X_R(c, 15)) == 0 ? 0 : ((uint64_t)(ARC_X_R(c, 0)) / (uint64_t)(ARC_X_R(c, 15)))));
  /* daffc: cmp x16, x14 */
  (void)arc_sub64(c, ARC_X_R(c, 16), ARC_X_R(c, 14));
  /* db000: b.lo #0xdaac4 */
  if (ARC_COND(c, 3)) goto L_daac4;
  /* db004: mul x15, x16, x15 */
  ARC_X_W(c, 15, ((uint64_t)(ARC_X_R(c, 16)) * (uint64_t)(ARC_X_R(c, 15))));
  /* db008: cmp x0, x15 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 15));
  /* db00c: b.eq #0xdb174 */
  if (ARC_COND(c, 0)) goto L_db174;
  /* db010: add x15, x13, #0xa6 */
  ARC_X_W(c, 15, (ARC_X_R(c, 13) + UINT64_C(166)));
  /* db014: add x14, x14, #4 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) + UINT64_C(4)));
  /* db018: udiv x16, x0, x15 */
  ARC_X_W(c, 16, ((uint64_t)(ARC_X_R(c, 15)) == 0 ? 0 : ((uint64_t)(ARC_X_R(c, 0)) / (uint64_t)(ARC_X_R(c, 15)))));
  /* db01c: cmp x16, x14 */
  (void)arc_sub64(c, ARC_X_R(c, 16), ARC_X_R(c, 14));
  /* db020: b.lo #0xdaac4 */
  if (ARC_COND(c, 3)) goto L_daac4;
  /* db024: mul x15, x16, x15 */
  ARC_X_W(c, 15, ((uint64_t)(ARC_X_R(c, 16)) * (uint64_t)(ARC_X_R(c, 15))));
  /* db028: cmp x0, x15 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 15));
  /* db02c: b.eq #0xdb174 */
  if (ARC_COND(c, 0)) goto L_db174;
  /* db030: add x15, x13, #0xa8 */
  ARC_X_W(c, 15, (ARC_X_R(c, 13) + UINT64_C(168)));
  /* db034: add x14, x14, #2 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) + UINT64_C(2)));
  /* db038: udiv x16, x0, x15 */
  ARC_X_W(c, 16, ((uint64_t)(ARC_X_R(c, 15)) == 0 ? 0 : ((uint64_t)(ARC_X_R(c, 0)) / (uint64_t)(ARC_X_R(c, 15)))));
  /* db03c: cmp x16, x14 */
  (void)arc_sub64(c, ARC_X_R(c, 16), ARC_X_R(c, 14));
  /* db040: b.lo #0xdaac4 */
  if (ARC_COND(c, 3)) goto L_daac4;
  /* db044: mul x15, x16, x15 */
  ARC_X_W(c, 15, ((uint64_t)(ARC_X_R(c, 16)) * (uint64_t)(ARC_X_R(c, 15))));
  /* db048: cmp x0, x15 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 15));
  /* db04c: b.eq #0xdb174 */
  if (ARC_COND(c, 0)) goto L_db174;
  /* db050: add x15, x13, #0xac */
  ARC_X_W(c, 15, (ARC_X_R(c, 13) + UINT64_C(172)));
  /* db054: add x14, x14, #4 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) + UINT64_C(4)));
  /* db058: udiv x16, x0, x15 */
  ARC_X_W(c, 16, ((uint64_t)(ARC_X_R(c, 15)) == 0 ? 0 : ((uint64_t)(ARC_X_R(c, 0)) / (uint64_t)(ARC_X_R(c, 15)))));
  /* db05c: cmp x16, x14 */
  (void)arc_sub64(c, ARC_X_R(c, 16), ARC_X_R(c, 14));
  /* db060: b.lo #0xdaac4 */
  if (ARC_COND(c, 3)) goto L_daac4;
  /* db064: mul x15, x16, x15 */
  ARC_X_W(c, 15, ((uint64_t)(ARC_X_R(c, 16)) * (uint64_t)(ARC_X_R(c, 15))));
  /* db068: cmp x0, x15 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 15));
  /* db06c: b.eq #0xdb174 */
  if (ARC_COND(c, 0)) goto L_db174;
  /* db070: add x15, x13, #0xb2 */
  ARC_X_W(c, 15, (ARC_X_R(c, 13) + UINT64_C(178)));
  /* db074: add x14, x14, #6 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) + UINT64_C(6)));
  /* db078: udiv x16, x0, x15 */
  ARC_X_W(c, 16, ((uint64_t)(ARC_X_R(c, 15)) == 0 ? 0 : ((uint64_t)(ARC_X_R(c, 0)) / (uint64_t)(ARC_X_R(c, 15)))));
  /* db07c: cmp x16, x14 */
  (void)arc_sub64(c, ARC_X_R(c, 16), ARC_X_R(c, 14));
  /* db080: b.lo #0xdaac4 */
  if (ARC_COND(c, 3)) goto L_daac4;
  /* db084: mul x15, x16, x15 */
  ARC_X_W(c, 15, ((uint64_t)(ARC_X_R(c, 16)) * (uint64_t)(ARC_X_R(c, 15))));
  /* db088: cmp x0, x15 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 15));
  /* db08c: b.eq #0xdb174 */
  if (ARC_COND(c, 0)) goto L_db174;
  /* db090: add x15, x13, #0xb4 */
  ARC_X_W(c, 15, (ARC_X_R(c, 13) + UINT64_C(180)));
  /* db094: add x14, x14, #2 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) + UINT64_C(2)));
  /* db098: udiv x16, x0, x15 */
  ARC_X_W(c, 16, ((uint64_t)(ARC_X_R(c, 15)) == 0 ? 0 : ((uint64_t)(ARC_X_R(c, 0)) / (uint64_t)(ARC_X_R(c, 15)))));
  /* db09c: cmp x16, x14 */
  (void)arc_sub64(c, ARC_X_R(c, 16), ARC_X_R(c, 14));
  /* db0a0: b.lo #0xdaac4 */
  if (ARC_COND(c, 3)) goto L_daac4;
  /* db0a4: mul x15, x16, x15 */
  ARC_X_W(c, 15, ((uint64_t)(ARC_X_R(c, 16)) * (uint64_t)(ARC_X_R(c, 15))));
  /* db0a8: cmp x0, x15 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 15));
  /* db0ac: b.eq #0xdb174 */
  if (ARC_COND(c, 0)) goto L_db174;
  /* db0b0: add x15, x13, #0xba */
  ARC_X_W(c, 15, (ARC_X_R(c, 13) + UINT64_C(186)));
  /* db0b4: add x14, x14, #6 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) + UINT64_C(6)));
  /* db0b8: udiv x16, x0, x15 */
  ARC_X_W(c, 16, ((uint64_t)(ARC_X_R(c, 15)) == 0 ? 0 : ((uint64_t)(ARC_X_R(c, 0)) / (uint64_t)(ARC_X_R(c, 15)))));
  /* db0bc: cmp x16, x14 */
  (void)arc_sub64(c, ARC_X_R(c, 16), ARC_X_R(c, 14));
  /* db0c0: b.lo #0xdaac4 */
  if (ARC_COND(c, 3)) goto L_daac4;
  /* db0c4: mul x15, x16, x15 */
  ARC_X_W(c, 15, ((uint64_t)(ARC_X_R(c, 16)) * (uint64_t)(ARC_X_R(c, 15))));
  /* db0c8: cmp x0, x15 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 15));
  /* db0cc: b.eq #0xdb174 */
  if (ARC_COND(c, 0)) goto L_db174;
  /* db0d0: add x15, x13, #0xbe */
  ARC_X_W(c, 15, (ARC_X_R(c, 13) + UINT64_C(190)));
  /* db0d4: add x14, x14, #4 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) + UINT64_C(4)));
  /* db0d8: udiv x16, x0, x15 */
  ARC_X_W(c, 16, ((uint64_t)(ARC_X_R(c, 15)) == 0 ? 0 : ((uint64_t)(ARC_X_R(c, 0)) / (uint64_t)(ARC_X_R(c, 15)))));
  /* db0dc: cmp x16, x14 */
  (void)arc_sub64(c, ARC_X_R(c, 16), ARC_X_R(c, 14));
  /* db0e0: b.lo #0xdaac4 */
  if (ARC_COND(c, 3)) goto L_daac4;
  /* db0e4: mul x15, x16, x15 */
  ARC_X_W(c, 15, ((uint64_t)(ARC_X_R(c, 16)) * (uint64_t)(ARC_X_R(c, 15))));
  /* db0e8: cmp x0, x15 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 15));
  /* db0ec: b.eq #0xdb174 */
  if (ARC_COND(c, 0)) goto L_db174;
  /* db0f0: add x15, x13, #0xc0 */
  ARC_X_W(c, 15, (ARC_X_R(c, 13) + UINT64_C(192)));
  /* db0f4: add x14, x14, #2 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) + UINT64_C(2)));
  /* db0f8: udiv x16, x0, x15 */
  ARC_X_W(c, 16, ((uint64_t)(ARC_X_R(c, 15)) == 0 ? 0 : ((uint64_t)(ARC_X_R(c, 0)) / (uint64_t)(ARC_X_R(c, 15)))));
  /* db0fc: cmp x16, x14 */
  (void)arc_sub64(c, ARC_X_R(c, 16), ARC_X_R(c, 14));
  /* db100: b.lo #0xdaac4 */
  if (ARC_COND(c, 3)) goto L_daac4;
  /* db104: mul x15, x16, x15 */
  ARC_X_W(c, 15, ((uint64_t)(ARC_X_R(c, 16)) * (uint64_t)(ARC_X_R(c, 15))));
  /* db108: cmp x0, x15 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 15));
  /* db10c: b.eq #0xdb174 */
  if (ARC_COND(c, 0)) goto L_db174;
  /* db110: add x15, x13, #0xc4 */
  ARC_X_W(c, 15, (ARC_X_R(c, 13) + UINT64_C(196)));
  /* db114: add x14, x14, #4 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) + UINT64_C(4)));
  /* db118: udiv x16, x0, x15 */
  ARC_X_W(c, 16, ((uint64_t)(ARC_X_R(c, 15)) == 0 ? 0 : ((uint64_t)(ARC_X_R(c, 0)) / (uint64_t)(ARC_X_R(c, 15)))));
  /* db11c: cmp x16, x14 */
  (void)arc_sub64(c, ARC_X_R(c, 16), ARC_X_R(c, 14));
  /* db120: b.lo #0xdaac4 */
  if (ARC_COND(c, 3)) goto L_daac4;
  /* db124: mul x15, x16, x15 */
  ARC_X_W(c, 15, ((uint64_t)(ARC_X_R(c, 16)) * (uint64_t)(ARC_X_R(c, 15))));
  /* db128: cmp x0, x15 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 15));
  /* db12c: b.eq #0xdb174 */
  if (ARC_COND(c, 0)) goto L_db174;
  /* db130: add x15, x13, #0xc6 */
  ARC_X_W(c, 15, (ARC_X_R(c, 13) + UINT64_C(198)));
  /* db134: add x14, x14, #2 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) + UINT64_C(2)));
  /* db138: udiv x16, x0, x15 */
  ARC_X_W(c, 16, ((uint64_t)(ARC_X_R(c, 15)) == 0 ? 0 : ((uint64_t)(ARC_X_R(c, 0)) / (uint64_t)(ARC_X_R(c, 15)))));
  /* db13c: cmp x16, x14 */
  (void)arc_sub64(c, ARC_X_R(c, 16), ARC_X_R(c, 14));
  /* db140: b.lo #0xdaac4 */
  if (ARC_COND(c, 3)) goto L_daac4;
  /* db144: mul x15, x16, x15 */
  ARC_X_W(c, 15, ((uint64_t)(ARC_X_R(c, 16)) * (uint64_t)(ARC_X_R(c, 15))));
  /* db148: cmp x0, x15 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 15));
  /* db14c: b.eq #0xdb174 */
  if (ARC_COND(c, 0)) goto L_db174;
  /* db150: add x15, x13, #0xd0 */
  ARC_X_W(c, 15, (ARC_X_R(c, 13) + UINT64_C(208)));
  /* db154: add x13, x14, #0xa */
  ARC_X_W(c, 13, (ARC_X_R(c, 14) + UINT64_C(10)));
  /* db158: udiv x16, x0, x15 */
  ARC_X_W(c, 16, ((uint64_t)(ARC_X_R(c, 15)) == 0 ? 0 : ((uint64_t)(ARC_X_R(c, 0)) / (uint64_t)(ARC_X_R(c, 15)))));
  /* db15c: cmp x16, x13 */
  (void)arc_sub64(c, ARC_X_R(c, 16), ARC_X_R(c, 13));
  /* db160: b.lo #0xdaac4 */
  if (ARC_COND(c, 3)) goto L_daac4;
  /* db164: mul x14, x16, x15 */
  ARC_X_W(c, 14, ((uint64_t)(ARC_X_R(c, 16)) * (uint64_t)(ARC_X_R(c, 15))));
  /* db168: add x13, x13, #2 */
  ARC_X_W(c, 13, (ARC_X_R(c, 13) + UINT64_C(2)));
  /* db16c: cmp x0, x14 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 14));
  /* db170: b.ne #0xdab7c */
  if (ARC_COND(c, 1)) goto L_dab7c;
L_db174:;
  /* db174: add x13, x10, #1 */
  ARC_X_W(c, 13, (ARC_X_R(c, 10) + UINT64_C(1)));
  /* db178: cmp x13, #0x30 */
  (void)arc_sub64(c, ARC_X_R(c, 13), UINT64_C(48));
  /* db17c: cinc x8, x8, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 8)) + 1 : (ARC_X_R(c, 8))));
  /* db180: csinc x10, xzr, x10, eq */
  ARC_X_W(c, 10, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ((ARC_X_R(c, 10)) + 1)));
  /* db184: mul x13, x8, x12 */
  ARC_X_W(c, 13, ((uint64_t)(ARC_X_R(c, 8)) * (uint64_t)(ARC_X_R(c, 12))));
  /* db188: b #0xdab44 */
  goto L_dab44;
L_db18c:;
  /* db18c: bl #0xdb190 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(897424));
  fn1_db190(c);
}

void fn1_dc3d0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038830032));
  /* dc3d0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* dc3d4: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* dc3d8: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* dc3dc: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* dc3e0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* dc3e4: bl #0x142c38 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(902120));
  fn1_142c38(c);
  /* dc3e8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* dc3ec: mov w1, #0x10 */
  ARC_W_W(c, 1, UINT64_C(16));
  /* dc3f0: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* dc3f4: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* dc3f8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* dc3fc: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_e167c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038851196));
  /* e167c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e1680: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e1684: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* e1688: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* e168c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* e1690: mov x0, x1 */
  ARC_X_W(c, 0, ARC_X_R(c, 1));
  /* e1694: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* e1698: bl #0x142860 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(923292));
  fn1_142860(c);
  /* e169c: mov x2, x0 */
  ARC_X_W(c, 2, ARC_X_R(c, 0));
  /* e16a0: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* e16a4: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* e16a8: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* e16ac: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e16b0: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* e16b4: b #0xd7c14 */
  fn1_d7c14(c); return;
}

void fn1_e401c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038861852));
  /* e401c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e4020: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e4024: stp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* e4028: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* e402c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* e4030: ldrb w9, [x0] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 0)));
  /* e4034: ldr x8, [x0, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* e4038: lsr x10, x9, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(1)) & 63)));
  /* e403c: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* e4040: csel x10, x10, x8, eq */
  ARC_X_W(c, 10, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 8)));
  /* e4044: subs x21, x1, x10 */
  ARC_X_W(c, 21, arc_sub64(c, ARC_X_R(c, 1), ARC_X_R(c, 10)));
  /* e4048: b.ls #0xe40dc */
  if (ARC_COND(c, 9)) goto L_e40dc;
  /* e404c: ldr x10, [x0] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 0)));
  /* e4050: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* e4054: mov w9, #4 */
  ARC_W_W(c, 9, UINT64_C(4));
  /* e4058: and x11, x10, #0xfffffffffffffffe */
  ARC_X_W(c, 11, (ARC_X_R(c, 10) & UINT64_C(18446744073709551614)));
  /* e405c: ubfx x12, x10, #1, #7 */
  ARC_X_W(c, 12, (((uint64_t)(ARC_X_R(c, 10)) >> 1) & UINT64_C(127)));
  /* e4060: sub x11, x11, #1 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) - UINT64_C(1)));
  /* e4064: csel x1, x9, x11, eq */
  ARC_X_W(c, 1, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 11)));
  /* e4068: ands w9, w10, #1 */
  { uint32_t _r = (uint32_t)(ARC_W_R(c, 10) & UINT64_C(1));
    arc_flags_logical32(c, _r);
    ARC_W_W(c, 9, _r); }
  /* e406c: csel x19, x12, x8, eq */
  ARC_X_W(c, 19, (ARC_COND(c, 0) ? (ARC_X_R(c, 12)) : ARC_X_R(c, 8)));
  /* e4070: sub x8, x1, x19 */
  ARC_X_W(c, 8, (ARC_X_R(c, 1) - ARC_X_R(c, 19)));
  /* e4074: cmp x8, x21 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 21));
  /* e4078: b.hs #0xe40b4 */
  if (ARC_COND(c, 2)) goto L_e40b4;
  /* e407c: sub x8, x21, x1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 21) - ARC_X_R(c, 1)));
  /* e4080: mov w22, w2 */
  ARC_W_W(c, 22, ARC_W_R(c, 2));
  /* e4084: mov x3, x19 */
  ARC_X_W(c, 3, ARC_X_R(c, 19));
  /* e4088: add x2, x8, x19 */
  ARC_X_W(c, 2, (ARC_X_R(c, 8) + ARC_X_R(c, 19)));
  /* e408c: mov x4, x19 */
  ARC_X_W(c, 4, ARC_X_R(c, 19));
  /* e4090: mov x5, xzr */
  ARC_X_W(c, 5, ARC_X_R(c, 31));
  /* e4094: mov x6, xzr */
  ARC_X_W(c, 6, ARC_X_R(c, 31));
  /* e4098: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* e409c: bl #0x142da0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(934048));
  fn1_142da0(c);
  /* e40a0: ldrb w8, [x20] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 20)));
  /* e40a4: mov w2, w22 */
  ARC_W_W(c, 2, ARC_W_R(c, 22));
  /* e40a8: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* e40ac: str x19, [x20, #8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(8)), ARC_X_R(c, 19));
  /* e40b0: and w9, w8, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 8) & UINT64_C(1)));
L_e40b4:;
  /* e40b4: ldr x8, [x0, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* e40b8: add x10, x0, #4 */
  ARC_X_W(c, 10, (ARC_X_R(c, 0) + UINT64_C(4)));
  /* e40bc: cmp w9, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(0));
  /* e40c0: csel x8, x10, x8, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 8)));
  /* e40c4: cmp x21, #8 */
  (void)arc_sub64(c, ARC_X_R(c, 21), UINT64_C(8));
  /* e40c8: add x12, x8, x19, lsl #2 */
  ARC_X_W(c, 12, (ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 19)) << 2)));
  /* e40cc: b.hs #0xe40f0 */
  if (ARC_COND(c, 2)) goto L_e40f0;
  /* e40d0: mov x9, x12 */
  ARC_X_W(c, 9, ARC_X_R(c, 12));
  /* e40d4: mov x10, x21 */
  ARC_X_W(c, 10, ARC_X_R(c, 21));
  /* e40d8: b #0xe4120 */
  goto L_e4120;
L_e40dc:;
  /* e40dc: tbnz w9, #0, #0xe4144 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) != 0) goto L_e4144;
  /* e40e0: lsl w8, w1, #1 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 1)) << ((UINT64_C(1)) & 31)));
  /* e40e4: strb w8, [x0], #4 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(4));
    arc_st8(_a, ARC_W_R(c, 8));
  }
  /* e40e8: mov x8, x0 */
  ARC_X_W(c, 8, ARC_X_R(c, 0));
  /* e40ec: b #0xe414c */
  goto L_e414c;
L_e40f0:;
  /* e40f0: and x11, x21, #0xfffffffffffffff8 */
  ARC_X_W(c, 11, (ARC_X_R(c, 21) & UINT64_C(18446744073709551608)));
  /* e40f4: dup v0.4s, w2 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (ARC_W_R(c, 2));
    _t.u32[1] = (ARC_W_R(c, 2));
    _t.u32[2] = (ARC_W_R(c, 2));
    _t.u32[3] = (ARC_W_R(c, 2));
    (c)->q[0] = _t; }
  /* e40f8: and x10, x21, #7 */
  ARC_X_W(c, 10, (ARC_X_R(c, 21) & UINT64_C(7)));
  /* e40fc: add x9, x12, x11, lsl #2 */
  ARC_X_W(c, 9, (ARC_X_R(c, 12) + ((uint64_t)(ARC_X_R(c, 11)) << 2)));
  /* e4100: add x12, x12, #0x10 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) + UINT64_C(16)));
  /* e4104: mov x13, x11 */
  ARC_X_W(c, 13, ARC_X_R(c, 11));
L_e4108:;
  /* e4108: subs x13, x13, #8 */
  ARC_X_W(c, 13, arc_sub64(c, ARC_X_R(c, 13), UINT64_C(8)));
  /* e410c: stp q0, q0, [x12, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 12) + INT64_C(-16));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* e4110: add x12, x12, #0x20 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) + UINT64_C(32)));
  /* e4114: b.ne #0xe4108 */
  if (ARC_COND(c, 1)) goto L_e4108;
  /* e4118: cmp x21, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 11));
  /* e411c: b.eq #0xe412c */
  if (ARC_COND(c, 0)) goto L_e412c;
L_e4120:;
  /* e4120: subs x10, x10, #1 */
  ARC_X_W(c, 10, arc_sub64(c, ARC_X_R(c, 10), UINT64_C(1)));
  /* e4124: str w2, [x9], #4 */
  { const uint64_t _a = ARC_X_R(c, 9);
    ARC_X_W(c, 9, ARC_X_R(c, 9) + INT64_C(4));
    arc_st32(_a, ARC_W_R(c, 2));
  }
  /* e4128: b.ne #0xe4120 */
  if (ARC_COND(c, 1)) goto L_e4120;
L_e412c:;
  /* e412c: ldrb w10, [x0] */
  ARC_W_W(c, 10, arc_ld8(ARC_X_R(c, 0)));
  /* e4130: add x9, x19, x21 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + ARC_X_R(c, 21)));
  /* e4134: tbnz w10, #0, #0xe4154 */
  if (((ARC_W_R(c, 10)) >> 0 & 1) != 0) goto L_e4154;
  /* e4138: lsl w10, w9, #1 */
  ARC_W_W(c, 10, ((uint32_t)(ARC_W_R(c, 9)) << ((UINT64_C(1)) & 31)));
  /* e413c: strb w10, [x0] */
  arc_st8(ARC_X_R(c, 0), ARC_W_R(c, 10));
  /* e4140: b #0xe4158 */
  goto L_e4158;
L_e4144:;
  /* e4144: ldr x8, [x0, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* e4148: str x1, [x0, #8] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(8)), ARC_X_R(c, 1));
L_e414c:;
  /* e414c: str wzr, [x8, x1, lsl #2] */
  arc_st32((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 1)) << 2)), ARC_W_R(c, 31));
  /* e4150: b #0xe415c */
  goto L_e415c;
L_e4154:;
  /* e4154: str x9, [x0, #8] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(8)), ARC_X_R(c, 9));
L_e4158:;
  /* e4158: str wzr, [x8, x9, lsl #2] */
  arc_st32((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 2)), ARC_W_R(c, 31));
L_e415c:;
  /* e415c: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* e4160: ldp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* e4164: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e4168: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* e416c: ret  */
  return;
}

void fn1_e8940(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038880576));
  /* e8940: bti c */
  /* bti: no architectural effect here */
  /* e8944: mov w1, #8 */
  ARC_W_W(c, 1, UINT64_C(8));
  /* e8948: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_eacb0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038889648));
  /* eacb0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* eacb4: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* eacb8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* eacbc: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(961728));
  fn1_142560(c);
  /* eacc0: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* eacc4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* eacc8: ret  */
  return;
  /* eaccc: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(961744));
  fn1_a1454(c);
}

void fn1_ec6b0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038896304));
  /* ec6b0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* ec6b4: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* ec6b8: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* ec6bc: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* ec6c0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* ec6c4: bl #0x143448 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(968392));
  fn1_143448(c);
  /* ec6c8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ec6cc: mov w1, #0x88 */
  ARC_W_W(c, 1, UINT64_C(136));
  /* ec6d0: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* ec6d4: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ec6d8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* ec6dc: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_edf90(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038902672));
  /* edf90: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* edf94: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* edf98: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* edf9c: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* edfa0: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* edfa4: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* edfa8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* edfac: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* edfb0: str xzr, [x0, #8] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(8)), ARC_X_R(c, 31));
  /* edfb4: sub x0, x29, #4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(4)));
  /* edfb8: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* edfbc: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* edfc0: bl #0x1435f8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(974788));
  fn1_1435f8(c);
  /* edfc4: ldurb w8, [x29, #-4] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-4))));
  /* edfc8: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* edfcc: b.ne #0xee0e8 */
  if (ARC_COND(c, 1)) goto L_ee0e8;
  /* edfd0: cbz x20, #0xee094 */
  if ((ARC_X_R(c, 20)) == 0) goto L_ee094;
  /* edfd4: add x21, x19, #0x28 */
  ARC_X_W(c, 21, (ARC_X_R(c, 19) + UINT64_C(40)));
  /* edfd8: mov x22, #0x7fffffffffffffff */
  ARC_X_W(c, 22, UINT64_C(9223372036854775807));
  /* edfdc: b #0xee000 */
  goto L_ee000;
L_edfe0:;
  /* edfe0: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* edfe4: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* edfe8: ldr x0, [x21, x8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 21) + ARC_X_R(c, 8))));
  /* edfec: ldp x8, x9, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* edff0: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* edff4: b.eq #0xee084 */
  if (ARC_COND(c, 0)) goto L_ee084;
  /* edff8: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* edffc: str x8, [x0, #0x18] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(24)), ARC_X_R(c, 8));
L_ee000:;
  /* ee000: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* ee004: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* ee008: ldr x0, [x21, x8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 21) + ARC_X_R(c, 8))));
  /* ee00c: ldp x8, x9, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* ee010: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* ee014: b.eq #0xee020 */
  if (ARC_COND(c, 0)) goto L_ee020;
  /* ee018: ldrb w0, [x8] */
  ARC_W_W(c, 0, arc_ld8(ARC_X_R(c, 8)));
  /* ee01c: b #0xee034 */
  goto L_ee034;
L_ee020:;
  /* ee020: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* ee024: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* ee028: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(974892));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* ee02c: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* ee030: b.eq #0xee09c */
  if (ARC_COND(c, 0)) goto L_ee09c;
L_ee034:;
  /* ee034: ldp x8, x9, [x20, #0x30] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(48));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* ee038: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* ee03c: b.eq #0xee050 */
  if (ARC_COND(c, 0)) goto L_ee050;
  /* ee040: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* ee044: str x9, [x20, #0x30] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(48)), ARC_X_R(c, 9));
  /* ee048: strb w0, [x8] */
  arc_st8(ARC_X_R(c, 8), ARC_W_R(c, 0));
  /* ee04c: b #0xee06c */
  goto L_ee06c;
L_ee050:;
  /* ee050: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* ee054: ldr x8, [x8, #0x68] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(104))));
  /* ee058: and w1, w0, #0xff */
  ARC_W_W(c, 1, (ARC_W_R(c, 0) & UINT64_C(255)));
  /* ee05c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* ee060: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(974948));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* ee064: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* ee068: b.eq #0xee0a4 */
  if (ARC_COND(c, 0)) goto L_ee0a4;
L_ee06c:;
  /* ee06c: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* ee070: cmp x8, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 22));
  /* ee074: b.eq #0xedfe0 */
  if (ARC_COND(c, 0)) goto L_edfe0;
  /* ee078: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* ee07c: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
  /* ee080: b #0xedfe0 */
  goto L_edfe0;
L_ee084:;
  /* ee084: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* ee088: ldr x8, [x8, #0x50] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(80))));
  /* ee08c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(974992));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* ee090: b #0xee000 */
  goto L_ee000;
L_ee094:;
  /* ee094: mov w20, #4 */
  ARC_W_W(c, 20, UINT64_C(4));
  /* ee098: b #0xee0b8 */
  goto L_ee0b8;
L_ee09c:;
  /* ee09c: mov w8, #2 */
  ARC_W_W(c, 8, UINT64_C(2));
  /* ee0a0: b #0xee0a8 */
  goto L_ee0a8;
L_ee0a4:;
  /* ee0a4: mov w8, wzr */
  ARC_W_W(c, 8, ARC_W_R(c, 31));
L_ee0a8:;
  /* ee0a8: ldr x9, [x19, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* ee0ac: orr w10, w8, #4 */
  ARC_W_W(c, 10, (ARC_W_R(c, 8) | UINT64_C(4)));
  /* ee0b0: cmp x9, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(0));
  /* ee0b4: csel w20, w10, w8, eq */
  ARC_W_W(c, 20, (ARC_COND(c, 0) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 8)));
L_ee0b8:;
  /* ee0b8: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* ee0bc: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* ee0c0: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* ee0c4: ldr x9, [x8, #0x28] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* ee0c8: cmp x9, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(0));
  /* ee0cc: ldp w10, w9, [x8, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 8) + INT64_C(32));
    ARC_W_W(c, 10, arc_ld32(_pa));
    ARC_W_W(c, 9, arc_ld32(_pa + 4));
  }
  /* ee0d0: cset w11, eq */
  ARC_W_W(c, 11, (ARC_COND(c, 0) ? 1 : 0));
  /* ee0d4: orr w10, w10, w20 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) | ARC_W_R(c, 20)));
  /* ee0d8: orr w10, w10, w11 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) | ARC_W_R(c, 11)));
  /* ee0dc: tst w10, w9 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 10) & ARC_W_R(c, 9)));
  /* ee0e0: str w10, [x8, #0x20] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(32)), ARC_W_R(c, 10));
  /* ee0e4: b.ne #0xee104 */
  if (ARC_COND(c, 1)) goto L_ee104;
L_ee0e8:;
  /* ee0e8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ee0ec: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* ee0f0: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* ee0f4: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ee0f8: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* ee0fc: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* ee100: ret  */
  return;
L_ee104:;
  /* ee104: nop  */
  /* nop: no architectural effect here */
  /* ee108: adr x0, #0x50210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(328208)));
  /* ee10c: bl #0xec720 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(975120));
  fn1_ec720(c);
  /* ee110: bl #0x142548 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(975124));
  fn1_142548(c);
  /* ee114: ldp x8, x10, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* ee118: ldur x9, [x8, #-0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* ee11c: cmp x10, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 10), UINT64_C(0));
  /* ee120: mov w10, #5 */
  ARC_W_W(c, 10, UINT64_C(5));
  /* ee124: csinc w20, w10, wzr, eq */
  ARC_W_W(c, 20, (ARC_COND(c, 0) ? (ARC_W_R(c, 10)) : ((ARC_W_R(c, 31)) + 1)));
  /* ee128: add x9, x19, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + ARC_X_R(c, 9)));
  /* ee12c: ldr w11, [x9, #0x20] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 9) + INT64_C(32))));
  /* ee130: orr w11, w11, w20 */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) | ARC_W_R(c, 20)));
  /* ee134: str w11, [x9, #0x20] */
  arc_st32((ARC_X_R(c, 9) + INT64_C(32)), ARC_W_R(c, 11));
  /* ee138: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* ee13c: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* ee140: ldrb w8, [x8, #0x24] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 8) + INT64_C(36))));
  /* ee144: tst w8, w10 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & ARC_W_R(c, 10)));
  /* ee148: b.ne #0xee154 */
  if (ARC_COND(c, 1)) goto L_ee154;
  /* ee14c: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(975184));
  fn1_142980(c);
  /* ee150: b #0xee0b8 */
  goto L_ee0b8;
L_ee154:;
  /* ee154: bl #0x1429b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(975192));
  fn1_1429b0(c);
  /* ee158: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* ee15c: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(975200));
  fn1_142980(c);
  /* ee160: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ee164: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(975208));
  fn1_9cc20(c);
  /* ee168: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(975212));
  fn1_a1454(c);
}

void fn1_f3620(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038924832));
  /* f3620: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* f3624: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* f3628: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* f362c: str x21, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 21));
  /* f3630: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* f3634: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* f3638: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f363c: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* f3640: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* f3644: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* f3648: mov w20, w2 */
  ARC_W_W(c, 20, ARC_W_R(c, 2));
  /* f364c: bl #0x143610 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(996944));
  fn1_143610(c);
  /* f3650: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f3654: mov w10, #5 */
  ARC_W_W(c, 10, UINT64_C(5));
  /* f3658: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f365c: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f3660: ldrb w9, [x8, #0x20] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 8) + INT64_C(32))));
  /* f3664: tst w9, w10 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & ARC_W_R(c, 10)));
  /* f3668: b.ne #0xf36c0 */
  if (ARC_COND(c, 1)) goto L_f36c0;
  /* f366c: ldr x0, [x8, #0x28] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* f3670: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* f3674: ldr x8, [x8, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* f3678: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* f367c: mov w2, w20 */
  ARC_W_W(c, 2, ARC_W_R(c, 20));
  /* f3680: mov w3, #0x10 */
  ARC_W_W(c, 3, UINT64_C(16));
  /* f3684: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(997000));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* f3688: cmn x1, #1 */
  (void)arc_add64(c, ARC_X_R(c, 1), UINT64_C(1), 0);
  /* f368c: b.ne #0xf36c0 */
  if (ARC_COND(c, 1)) goto L_f36c0;
  /* f3690: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f3694: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f3698: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f369c: ldr x9, [x8, #0x28] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* f36a0: cmp x9, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(0));
  /* f36a4: ldp w9, w11, [x8, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 8) + INT64_C(32));
    ARC_W_W(c, 9, arc_ld32(_pa));
    ARC_W_W(c, 11, arc_ld32(_pa + 4));
  }
  /* f36a8: cset w10, eq */
  ARC_W_W(c, 10, (ARC_COND(c, 0) ? 1 : 0));
  /* f36ac: orr w9, w9, w10 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | ARC_W_R(c, 10)));
  /* f36b0: orr w9, w9, #4 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | UINT64_C(4)));
  /* f36b4: tst w9, w11 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & ARC_W_R(c, 11)));
  /* f36b8: str w9, [x8, #0x20] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(32)), ARC_W_R(c, 9));
  /* f36bc: b.ne #0xf36e4 */
  if (ARC_COND(c, 1)) goto L_f36e4;
L_f36c0:;
  /* f36c0: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* f36c4: bl #0x143628 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(997064));
  fn1_143628(c);
  /* f36c8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f36cc: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* f36d0: ldr x21, [sp, #0x20] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(32))));
  /* f36d4: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* f36d8: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* f36dc: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* f36e0: ret  */
  return;
L_f36e4:;
  /* f36e4: nop  */
  /* nop: no architectural effect here */
  /* f36e8: adr x0, #0x50210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(328208)));
  /* f36ec: bl #0xec720 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(997104));
  fn1_ec720(c);
  /* f36f0: b #0xf36f4 */
  goto L_f36f4;
L_f36f4:;
  /* f36f4: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f36f8: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* f36fc: bl #0x143628 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(997120));
  fn1_143628(c);
  /* f3700: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f3704: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(997128));
  fn1_9cc20(c);
}

void fn1_f49c8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038929864));
  /* f49c8: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* f49cc: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* f49d0: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* f49d4: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* f49d8: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* f49dc: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* f49e0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f49e4: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* f49e8: str xzr, [x0, #8] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(8)), ARC_X_R(c, 31));
  /* f49ec: sub x0, x29, #4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(4)));
  /* f49f0: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* f49f4: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* f49f8: bl #0x143670 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1001980));
  fn1_143670(c);
  /* f49fc: ldurb w8, [x29, #-4] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-4))));
  /* f4a00: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* f4a04: b.ne #0xf4b1c */
  if (ARC_COND(c, 1)) goto L_f4b1c;
  /* f4a08: cbz x20, #0xf4ad0 */
  if ((ARC_X_R(c, 20)) == 0) goto L_f4ad0;
  /* f4a0c: add x21, x19, #0x28 */
  ARC_X_W(c, 21, (ARC_X_R(c, 19) + UINT64_C(40)));
  /* f4a10: mov x22, #0x7fffffffffffffff */
  ARC_X_W(c, 22, UINT64_C(9223372036854775807));
  /* f4a14: b #0xf4a38 */
  goto L_f4a38;
L_f4a18:;
  /* f4a18: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f4a1c: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f4a20: ldr x0, [x21, x8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 21) + ARC_X_R(c, 8))));
  /* f4a24: ldp x8, x9, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* f4a28: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* f4a2c: b.eq #0xf4ab8 */
  if (ARC_COND(c, 0)) goto L_f4ab8;
  /* f4a30: add x8, x8, #4 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(4)));
  /* f4a34: str x8, [x0, #0x18] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(24)), ARC_X_R(c, 8));
L_f4a38:;
  /* f4a38: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f4a3c: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f4a40: ldr x0, [x21, x8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 21) + ARC_X_R(c, 8))));
  /* f4a44: ldp x8, x9, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* f4a48: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* f4a4c: b.eq #0xf4a58 */
  if (ARC_COND(c, 0)) goto L_f4a58;
  /* f4a50: ldr w1, [x8] */
  ARC_W_W(c, 1, arc_ld32(ARC_X_R(c, 8)));
  /* f4a54: b #0xf4a68 */
  goto L_f4a68;
L_f4a58:;
  /* f4a58: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* f4a5c: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* f4a60: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1002084));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* f4a64: mov w1, w0 */
  ARC_W_W(c, 1, ARC_W_R(c, 0));
L_f4a68:;
  /* f4a68: cmn w1, #1 */
  (void)arc_add32(c, ARC_W_R(c, 1), UINT64_C(1), 0);
  /* f4a6c: b.eq #0xf4ac8 */
  if (ARC_COND(c, 0)) goto L_f4ac8;
  /* f4a70: ldp x8, x9, [x20, #0x30] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(48));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* f4a74: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* f4a78: b.eq #0xf4a88 */
  if (ARC_COND(c, 0)) goto L_f4a88;
  /* f4a7c: str w1, [x8], #4 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(4));
    arc_st32(_a, ARC_W_R(c, 1));
  }
  /* f4a80: str x8, [x20, #0x30] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(48)), ARC_X_R(c, 8));
  /* f4a84: b #0xf4aa0 */
  goto L_f4aa0;
L_f4a88:;
  /* f4a88: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* f4a8c: ldr x8, [x8, #0x68] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(104))));
  /* f4a90: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* f4a94: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1002136));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* f4a98: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* f4a9c: b.eq #0xf4ad8 */
  if (ARC_COND(c, 0)) goto L_f4ad8;
L_f4aa0:;
  /* f4aa0: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* f4aa4: cmp x8, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 22));
  /* f4aa8: b.eq #0xf4a18 */
  if (ARC_COND(c, 0)) goto L_f4a18;
  /* f4aac: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* f4ab0: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
  /* f4ab4: b #0xf4a18 */
  goto L_f4a18;
L_f4ab8:;
  /* f4ab8: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* f4abc: ldr x8, [x8, #0x50] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(80))));
  /* f4ac0: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1002180));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* f4ac4: b #0xf4a38 */
  goto L_f4a38;
L_f4ac8:;
  /* f4ac8: mov w8, #2 */
  ARC_W_W(c, 8, UINT64_C(2));
  /* f4acc: b #0xf4adc */
  goto L_f4adc;
L_f4ad0:;
  /* f4ad0: mov w20, #4 */
  ARC_W_W(c, 20, UINT64_C(4));
  /* f4ad4: b #0xf4aec */
  goto L_f4aec;
L_f4ad8:;
  /* f4ad8: mov w8, wzr */
  ARC_W_W(c, 8, ARC_W_R(c, 31));
L_f4adc:;
  /* f4adc: ldr x9, [x19, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* f4ae0: orr w10, w8, #4 */
  ARC_W_W(c, 10, (ARC_W_R(c, 8) | UINT64_C(4)));
  /* f4ae4: cmp x9, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(0));
  /* f4ae8: csel w20, w10, w8, eq */
  ARC_W_W(c, 20, (ARC_COND(c, 0) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 8)));
L_f4aec:;
  /* f4aec: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f4af0: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f4af4: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f4af8: ldr x9, [x8, #0x28] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* f4afc: cmp x9, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(0));
  /* f4b00: ldp w10, w9, [x8, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 8) + INT64_C(32));
    ARC_W_W(c, 10, arc_ld32(_pa));
    ARC_W_W(c, 9, arc_ld32(_pa + 4));
  }
  /* f4b04: cset w11, eq */
  ARC_W_W(c, 11, (ARC_COND(c, 0) ? 1 : 0));
  /* f4b08: orr w10, w10, w20 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) | ARC_W_R(c, 20)));
  /* f4b0c: orr w10, w10, w11 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) | ARC_W_R(c, 11)));
  /* f4b10: tst w10, w9 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 10) & ARC_W_R(c, 9)));
  /* f4b14: str w10, [x8, #0x20] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(32)), ARC_W_R(c, 10));
  /* f4b18: b.ne #0xf4b38 */
  if (ARC_COND(c, 1)) goto L_f4b38;
L_f4b1c:;
  /* f4b1c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f4b20: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* f4b24: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* f4b28: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* f4b2c: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* f4b30: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* f4b34: ret  */
  return;
L_f4b38:;
  /* f4b38: nop  */
  /* nop: no architectural effect here */
  /* f4b3c: adr x0, #0x50210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(328208)));
  /* f4b40: bl #0xec720 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1002308));
  fn1_ec720(c);
  /* f4b44: bl #0x142548 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1002312));
  fn1_142548(c);
  /* f4b48: ldp x8, x10, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* f4b4c: ldur x9, [x8, #-0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f4b50: cmp x10, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 10), UINT64_C(0));
  /* f4b54: mov w10, #5 */
  ARC_W_W(c, 10, UINT64_C(5));
  /* f4b58: csinc w20, w10, wzr, eq */
  ARC_W_W(c, 20, (ARC_COND(c, 0) ? (ARC_W_R(c, 10)) : ((ARC_W_R(c, 31)) + 1)));
  /* f4b5c: add x9, x19, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + ARC_X_R(c, 9)));
  /* f4b60: ldr w11, [x9, #0x20] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 9) + INT64_C(32))));
  /* f4b64: orr w11, w11, w20 */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) | ARC_W_R(c, 20)));
  /* f4b68: str w11, [x9, #0x20] */
  arc_st32((ARC_X_R(c, 9) + INT64_C(32)), ARC_W_R(c, 11));
  /* f4b6c: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f4b70: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f4b74: ldrb w8, [x8, #0x24] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 8) + INT64_C(36))));
  /* f4b78: tst w8, w10 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & ARC_W_R(c, 10)));
  /* f4b7c: b.ne #0xf4b88 */
  if (ARC_COND(c, 1)) goto L_f4b88;
  /* f4b80: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1002372));
  fn1_142980(c);
  /* f4b84: b #0xf4aec */
  goto L_f4aec;
L_f4b88:;
  /* f4b88: bl #0x1429b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1002380));
  fn1_1429b0(c);
  /* f4b8c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f4b90: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1002388));
  fn1_142980(c);
  /* f4b94: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f4b98: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1002396));
  fn1_9cc20(c);
  /* f4b9c: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1002400));
  fn1_a1454(c);
}

void fn1_fa09c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038952092));
  /* fa09c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* fa0a0: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* fa0a4: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* fa0a8: str x21, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 21));
  /* fa0ac: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* fa0b0: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* fa0b4: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* fa0b8: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* fa0bc: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* fa0c0: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* fa0c4: mov w20, w2 */
  ARC_W_W(c, 20, ARC_W_R(c, 2));
  /* fa0c8: bl #0x143688 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1024204));
  fn1_143688(c);
  /* fa0cc: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* fa0d0: mov w10, #5 */
  ARC_W_W(c, 10, UINT64_C(5));
  /* fa0d4: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* fa0d8: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* fa0dc: ldrb w9, [x8, #0x20] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 8) + INT64_C(32))));
  /* fa0e0: tst w9, w10 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & ARC_W_R(c, 10)));
  /* fa0e4: b.ne #0xfa13c */
  if (ARC_COND(c, 1)) goto L_fa13c;
  /* fa0e8: ldr x0, [x8, #0x28] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* fa0ec: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* fa0f0: ldr x8, [x8, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* fa0f4: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* fa0f8: mov w2, w20 */
  ARC_W_W(c, 2, ARC_W_R(c, 20));
  /* fa0fc: mov w3, #0x10 */
  ARC_W_W(c, 3, UINT64_C(16));
  /* fa100: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1024260));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* fa104: cmn x1, #1 */
  (void)arc_add64(c, ARC_X_R(c, 1), UINT64_C(1), 0);
  /* fa108: b.ne #0xfa13c */
  if (ARC_COND(c, 1)) goto L_fa13c;
  /* fa10c: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* fa110: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* fa114: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* fa118: ldr x9, [x8, #0x28] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* fa11c: cmp x9, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(0));
  /* fa120: ldp w9, w11, [x8, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 8) + INT64_C(32));
    ARC_W_W(c, 9, arc_ld32(_pa));
    ARC_W_W(c, 11, arc_ld32(_pa + 4));
  }
  /* fa124: cset w10, eq */
  ARC_W_W(c, 10, (ARC_COND(c, 0) ? 1 : 0));
  /* fa128: orr w9, w9, w10 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | ARC_W_R(c, 10)));
  /* fa12c: orr w9, w9, #4 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | UINT64_C(4)));
  /* fa130: tst w9, w11 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & ARC_W_R(c, 11)));
  /* fa134: str w9, [x8, #0x20] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(32)), ARC_W_R(c, 9));
  /* fa138: b.ne #0xfa160 */
  if (ARC_COND(c, 1)) goto L_fa160;
L_fa13c:;
  /* fa13c: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* fa140: bl #0x1436a0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1024324));
  fn1_1436a0(c);
  /* fa144: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* fa148: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* fa14c: ldr x21, [sp, #0x20] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(32))));
  /* fa150: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* fa154: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* fa158: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* fa15c: ret  */
  return;
L_fa160:;
  /* fa160: nop  */
  /* nop: no architectural effect here */
  /* fa164: adr x0, #0x50210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(328208)));
  /* fa168: bl #0xec720 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1024364));
  fn1_ec720(c);
  /* fa16c: b #0xfa170 */
  goto L_fa170;
L_fa170:;
  /* fa170: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* fa174: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* fa178: bl #0x1436a0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1024380));
  fn1_1436a0(c);
  /* fa17c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* fa180: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1024388));
  fn1_9cc20(c);
}

void fn1_fe108(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038968584));
  /* fe108: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* fe10c: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* fe110: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* fe114: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* fe118: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* fe11c: nop  */
  /* nop: no architectural effect here */
  /* fe120: adr x9, #0x15dc40 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1432640)));
  /* fe124: ldr x8, [x8, #0xaa8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2728))));
  /* fe128: ldr x20, [x0, #8] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* fe12c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* fe130: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* fe134: cmp x20, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 9));
  /* fe138: str x8, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* fe13c: b.eq #0xfe160 */
  if (ARC_COND(c, 0)) goto L_fe160;
  /* fe140: add x1, x20, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* fe144: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* fe148: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1040716));
  fn1_bd950(c);
  /* fe14c: cbnz x0, #0xfe160 */
  if ((ARC_X_R(c, 0)) != 0) goto L_fe160;
  /* fe150: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* fe154: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* fe158: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* fe15c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1040736));
  arc_dispatch(c, ARC_X_R(c, 8));
L_fe160:;
  /* fe160: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* fe164: mov w1, #0x68 */
  ARC_W_W(c, 1, UINT64_C(104));
  /* fe168: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* fe16c: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* fe170: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* fe174: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_10944c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039014476));
  /* 10944c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 109450: sub sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(96)));
  /* 109454: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 109458: str x25, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 25));
  /* 10945c: stp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 109460: stp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 109464: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 109468: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 10946c: mov x9, x0 */
  ARC_X_W(c, 9, ARC_X_R(c, 0));
  /* 109470: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* 109474: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 109478: add x1, x9, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 9) + UINT64_C(48)));
  /* 10947c: mov x20, x2 */
  ARC_X_W(c, 20, ARC_X_R(c, 2));
  /* 109480: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* 109484: bl #0x143460 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1086600));
  fn1_143460(c);
  /* 109488: adrp x25, #0x151000 */
  ARC_X_W(c, 25, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 10948c: ldr x25, [x25, #0xb40] */
  ARC_X_W(c, 25, arc_ld64((ARC_X_R(c, 25) + INT64_C(2880))));
  /* 109490: ldr x24, [x29, #0x18] */
  ARC_X_W(c, 24, arc_ld64((ARC_X_R(c, 29) + INT64_C(24))));
  /* 109494: ldar x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 109498: cmn x8, #1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0);
  /* 10949c: b.eq #0x109558 */
  if (ARC_COND(c, 0)) goto L_109558;
  /* 1094a0: nop  */
  /* nop: no architectural effect here */
  /* 1094a4: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 1094a8: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1086636));
  fn1_142518(c);
  /* 1094ac: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 1094b0: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 1094b4: b.ne #0x1094e0 */
  if (ARC_COND(c, 1)) goto L_1094e0;
  /* 1094b8: nop  */
  /* nop: no architectural effect here */
  /* 1094bc: adr x22, #0x15791c */
  ARC_X_W(c, 22, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 1094c0: nop  */
  /* nop: no architectural effect here */
  /* 1094c4: adr x23, #0x1578f4 */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1407220)));
L_1094c8:;
  /* 1094c8: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 1094cc: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* 1094d0: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1086676));
  fn1_142530(c);
  /* 1094d4: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 1094d8: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 1094dc: b.eq #0x1094c8 */
  if (ARC_COND(c, 0)) goto L_1094c8;
L_1094e0:;
  /* 1094e0: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 1094e4: cbz x8, #0x1094f8 */
  if ((ARC_X_R(c, 8)) == 0) goto L_1094f8;
  /* 1094e8: nop  */
  /* nop: no architectural effect here */
  /* 1094ec: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 1094f0: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1086708));
  fn1_142560(c);
  /* 1094f4: b #0x109558 */
  goto L_109558;
L_1094f8:;
  /* 1094f8: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 1094fc: str x25, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 25));
  /* 109500: strb wzr, [sp, #8] */
  arc_st8(((c)->sp + INT64_C(8)), ARC_W_R(c, 31));
  /* 109504: str x8, [x25] */
  arc_st64(ARC_X_R(c, 25), ARC_X_R(c, 8));
  /* 109508: nop  */
  /* nop: no architectural effect here */
  /* 10950c: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 109510: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1086740));
  fn1_142560(c);
  /* 109514: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 109518: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 10951c: ldr x1, [x1, #0xc58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3160))));
  /* 109520: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1086756));
  fn1_a2030(c);
  /* 109524: add w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + UINT64_C(1)));
  /* 109528: str w8, [x25, #8] */
  arc_st32((ARC_X_R(c, 25) + INT64_C(8)), ARC_W_R(c, 8));
  /* 10952c: nop  */
  /* nop: no architectural effect here */
  /* 109530: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 109534: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1086776));
  fn1_142518(c);
  /* 109538: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 10953c: stlr x8, [x25] */
  arc_st64(ARC_X_R(c, 25), ARC_X_R(c, 8));
  /* 109540: nop  */
  /* nop: no architectural effect here */
  /* 109544: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 109548: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1086796));
  fn1_142560(c);
  /* 10954c: nop  */
  /* nop: no architectural effect here */
  /* 109550: adr x0, #0x15791c */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 109554: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1086808));
  fn1_142578(c);
L_109558:;
  /* 109558: ldp x8, x10, [x24, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 24) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* 10955c: ldrsw x9, [x25, #8] */
  ARC_X_W(c, 9, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 25) + INT64_C(8)))));
  /* 109560: sub x9, x9, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - UINT64_C(1)));
  /* 109564: sub x10, x10, x8 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) - ARC_X_R(c, 8)));
  /* 109568: cmp x9, x10, asr #3 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ((uint64_t)((int64_t)(ARC_X_R(c, 10)) >> 3)));
  /* 10956c: b.hs #0x1096d4 */
  if (ARC_COND(c, 2)) goto L_1096d4;
  /* 109570: ldr x0, [x8, x9, lsl #3] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3))));
  /* 109574: cbz x0, #0x1096d4 */
  if ((ARC_X_R(c, 0)) == 0) goto L_1096d4;
  /* 109578: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 10957c: ldr x8, [x8, #0x40] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(64))));
  /* 109580: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 109584: mov x3, x21 */
  ARC_X_W(c, 3, ARC_X_R(c, 21));
  /* 109588: ldr x1, [x1, #0xbe0] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3040))));
  /* 10958c: add x2, x1, #0x1a */
  ARC_X_W(c, 2, (ARC_X_R(c, 1) + UINT64_C(26)));
  /* 109590: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1086868));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 109594: adrp x24, #0x151000 */
  ARC_X_W(c, 24, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 109598: ldr x24, [x24, #0xcb0] */
  ARC_X_W(c, 24, arc_ld64((ARC_X_R(c, 24) + INT64_C(3248))));
  /* 10959c: ldr x23, [x29, #0x18] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 29) + INT64_C(24))));
  /* 1095a0: ldar x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 1095a4: cmn x8, #1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0);
  /* 1095a8: b.eq #0x109664 */
  if (ARC_COND(c, 0)) goto L_109664;
  /* 1095ac: nop  */
  /* nop: no architectural effect here */
  /* 1095b0: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 1095b4: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1086904));
  fn1_142518(c);
  /* 1095b8: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 1095bc: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 1095c0: b.ne #0x1095ec */
  if (ARC_COND(c, 1)) goto L_1095ec;
  /* 1095c4: nop  */
  /* nop: no architectural effect here */
  /* 1095c8: adr x21, #0x15791c */
  ARC_X_W(c, 21, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 1095cc: nop  */
  /* nop: no architectural effect here */
  /* 1095d0: adr x22, #0x1578f4 */
  ARC_X_W(c, 22, (arc_image_bases[1] + UINT64_C(1407220)));
L_1095d4:;
  /* 1095d4: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 1095d8: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 1095dc: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1086944));
  fn1_142530(c);
  /* 1095e0: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 1095e4: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 1095e8: b.eq #0x1095d4 */
  if (ARC_COND(c, 0)) goto L_1095d4;
L_1095ec:;
  /* 1095ec: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 1095f0: cbz x8, #0x109604 */
  if ((ARC_X_R(c, 8)) == 0) goto L_109604;
  /* 1095f4: nop  */
  /* nop: no architectural effect here */
  /* 1095f8: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 1095fc: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1086976));
  fn1_142560(c);
  /* 109600: b #0x109664 */
  goto L_109664;
L_109604:;
  /* 109604: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 109608: str x24, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 24));
  /* 10960c: strb wzr, [sp, #8] */
  arc_st8(((c)->sp + INT64_C(8)), ARC_W_R(c, 31));
  /* 109610: str x8, [x24] */
  arc_st64(ARC_X_R(c, 24), ARC_X_R(c, 8));
  /* 109614: nop  */
  /* nop: no architectural effect here */
  /* 109618: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 10961c: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1087008));
  fn1_142560(c);
  /* 109620: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 109624: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 109628: ldr x1, [x1, #0xc58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3160))));
  /* 10962c: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1087024));
  fn1_a2030(c);
  /* 109630: add w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + UINT64_C(1)));
  /* 109634: str w8, [x24, #8] */
  arc_st32((ARC_X_R(c, 24) + INT64_C(8)), ARC_W_R(c, 8));
  /* 109638: nop  */
  /* nop: no architectural effect here */
  /* 10963c: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 109640: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1087044));
  fn1_142518(c);
  /* 109644: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 109648: stlr x8, [x24] */
  arc_st64(ARC_X_R(c, 24), ARC_X_R(c, 8));
  /* 10964c: nop  */
  /* nop: no architectural effect here */
  /* 109650: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 109654: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1087064));
  fn1_142560(c);
  /* 109658: nop  */
  /* nop: no architectural effect here */
  /* 10965c: adr x0, #0x15791c */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 109660: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1087076));
  fn1_142578(c);
L_109664:;
  /* 109664: ldp x8, x10, [x23, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 23) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* 109668: ldrsw x9, [x24, #8] */
  ARC_X_W(c, 9, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 24) + INT64_C(8)))));
  /* 10966c: sub x9, x9, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - UINT64_C(1)));
  /* 109670: sub x10, x10, x8 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) - ARC_X_R(c, 8)));
  /* 109674: cmp x9, x10, asr #3 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ((uint64_t)((int64_t)(ARC_X_R(c, 10)) >> 3)));
  /* 109678: b.hs #0x1096d8 */
  if (ARC_COND(c, 2)) goto L_1096d8;
  /* 10967c: ldr x21, [x8, x9, lsl #3] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3))));
  /* 109680: cbz x21, #0x1096d8 */
  if ((ARC_X_R(c, 21)) == 0) goto L_1096d8;
  /* 109684: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 109688: ldr x8, [x8, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* 10968c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 109690: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1087124));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 109694: strb w0, [x20] */
  arc_st8(ARC_X_R(c, 20), ARC_W_R(c, 0));
  /* 109698: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 10969c: ldr x9, [x8, #0x28] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* 1096a0: mov x8, x19 */
  ARC_X_W(c, 8, ARC_X_R(c, 19));
  /* 1096a4: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 1096a8: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1087148));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 1096ac: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1096b0: bl #0x143478 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1087156));
  fn1_143478(c);
  /* 1096b4: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1096b8: ldr x25, [sp, #0x20] */
  ARC_X_W(c, 25, arc_ld64(((c)->sp + INT64_C(32))));
  /* 1096bc: ldp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1096c0: ldp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 1096c4: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1096c8: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* 1096cc: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 1096d0: ret  */
  return;
L_1096d4:;
  /* 1096d4: bl #0xfc3b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1087192));
  fn1_fc3b8(c);
L_1096d8:;
  /* 1096d8: bl #0xfc3b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1087196));
  fn1_fc3b8(c);
  /* 1096dc: b #0x1096e0 */
  goto L_1096e0;
L_1096e0:;
  /* 1096e0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1096e4: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 1096e8: bl #0xd2a78 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1087212));
  fn1_d2a78(c);
  /* 1096ec: b #0x109700 */
  goto L_109700;
  /* 1096f0: b #0x1096fc */
  goto L_1096fc;
  /* 1096f4: b #0x1096fc */
  goto L_1096fc;
  /* 1096f8: b #0x1096fc */
  goto L_1096fc;
L_1096fc:;
  /* 1096fc: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
L_109700:;
  /* 109700: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 109704: bl #0x143478 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1087240));
  fn1_143478(c);
  /* 109708: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 10970c: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1087248));
  fn1_9cc20(c);
}

void fn1_112754(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039052116));
  /* 112754: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 112758: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 11275c: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 112760: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 112764: mov x19, x4 */
  ARC_X_W(c, 19, ARC_X_R(c, 4));
  /* 112768: mov x0, x2 */
  ARC_X_W(c, 0, ARC_X_R(c, 2));
  /* 11276c: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 112770: mov x1, x3 */
  ARC_X_W(c, 1, ARC_X_R(c, 3));
  /* 112774: mov x2, x4 */
  ARC_X_W(c, 2, ARC_X_R(c, 4));
  /* 112778: mov x3, x5 */
  ARC_X_W(c, 3, ARC_X_R(c, 5));
  /* 11277c: mov w4, #2 */
  ARC_W_W(c, 4, UINT64_C(2));
  /* 112780: bl #0x112ec0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1124228));
  fn1_112ec0(c);
  /* 112784: ldr w8, [x19] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 19)));
  /* 112788: sub w9, w0, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 0) - UINT64_C(1)));
  /* 11278c: cmp w9, #0xb */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(11));
  /* 112790: b.hi #0x1127a0 */
  if (ARC_COND(c, 8)) goto L_1127a0;
  /* 112794: tbnz w8, #2, #0x1127a0 */
  if (((ARC_W_R(c, 8)) >> 2 & 1) != 0) goto L_1127a0;
  /* 112798: str w0, [x20] */
  arc_st32(ARC_X_R(c, 20), ARC_W_R(c, 0));
  /* 11279c: b #0x1127a8 */
  goto L_1127a8;
L_1127a0:;
  /* 1127a0: orr w8, w8, #4 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | UINT64_C(4)));
  /* 1127a4: str w8, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 8));
L_1127a8:;
  /* 1127a8: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1127ac: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1127b0: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 1127b4: ret  */
  return;
}

void fn1_113eec(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039058156));
  /* 113eec: bti c */
  /* bti: no architectural effect here */
  /* 113ef0: mov x9, x0 */
  ARC_X_W(c, 9, ARC_X_R(c, 0));
  /* 113ef4: ldrb w10, [x9, #0x18]! */
  { const uint64_t _a = (ARC_X_R(c, 9) + INT64_C(24));
    ARC_X_W(c, 9, ARC_X_R(c, 9) + INT64_C(24));
    ARC_W_W(c, 10, arc_ld8(_a));
  }
  /* 113ef8: tbnz w10, #0, #0x113f10 */
  if (((ARC_W_R(c, 10)) >> 0 & 1) != 0) goto L_113f10;
  /* 113efc: ldr q0, [x9] */
  arc_q_w(c, 0, arc_ld64(ARC_X_R(c, 9)), arc_ld64(ARC_X_R(c, 9) + 8));
  /* 113f00: ldr x9, [x9, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(16))));
  /* 113f04: str q0, [x8] */
  arc_st64(ARC_X_R(c, 8), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 8) + 8, (c)->q[0].u64[1]);
  /* 113f08: str x9, [x8, #0x10] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(16)), ARC_X_R(c, 9));
  /* 113f0c: ret  */
  return;
L_113f10:;
  /* 113f10: ldp x2, x1, [x0, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(32));
    ARC_X_W(c, 2, arc_ld64(_pa));
    ARC_X_W(c, 1, arc_ld64(_pa + 8));
  }
  /* 113f14: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 113f18: b #0xda588 */
  fn1_da588(c); return;
}

void fn1_11de78(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039099000));
  /* 11de78: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 11de7c: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 11de80: stp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 11de84: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 11de88: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 11de8c: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* 11de90: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 11de94: adrp x9, #0x14e000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1368064)));
  /* 11de98: add x9, x9, #0x248 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(584)));
  /* 11de9c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 11dea0: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 11dea4: stp x9, x8, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* 11dea8: mov w9, #1 */
  ARC_W_W(c, 9, UINT64_C(1));
  /* 11deac: mov x8, x0 */
  ARC_X_W(c, 8, ARC_X_R(c, 0));
  /* 11deb0: str x9, [x0, #0x118] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(280)), ARC_X_R(c, 9));
  /* 11deb4: add x9, x0, #0x118 */
  ARC_X_W(c, 9, (ARC_X_R(c, 0) + UINT64_C(280)));
  /* 11deb8: str q0, [x8, #0x28]! */
  arc_st64((ARC_X_R(c, 8) + INT64_C(40)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 8) + INT64_C(40)) + 8, (c)->q[0].u64[1]);
  ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(40));
  /* 11debc: str x8, [x19, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 19) + INT64_C(16));
    ARC_X_W(c, 19, ARC_X_R(c, 19) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* 11dec0: stur q0, [x0, #0x38] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(56)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 0) + INT64_C(56)) + 8, (c)->q[0].u64[1]);
  /* 11dec4: stur q0, [x0, #0x48] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(72)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 0) + INT64_C(72)) + 8, (c)->q[0].u64[1]);
  /* 11dec8: stur q0, [x0, #0x58] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(88)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 0) + INT64_C(88)) + 8, (c)->q[0].u64[1]);
  /* 11decc: stur q0, [x0, #0x68] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(104)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 0) + INT64_C(104)) + 8, (c)->q[0].u64[1]);
  /* 11ded0: stur q0, [x0, #0x78] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(120)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 0) + INT64_C(120)) + 8, (c)->q[0].u64[1]);
  /* 11ded4: stur q0, [x0, #0x88] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(136)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 0) + INT64_C(136)) + 8, (c)->q[0].u64[1]);
  /* 11ded8: stur q0, [x0, #0x98] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(152)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 0) + INT64_C(152)) + 8, (c)->q[0].u64[1]);
  /* 11dedc: stur q0, [x0, #0xa8] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(168)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 0) + INT64_C(168)) + 8, (c)->q[0].u64[1]);
  /* 11dee0: stur q0, [x0, #0xb8] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(184)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 0) + INT64_C(184)) + 8, (c)->q[0].u64[1]);
  /* 11dee4: stur q0, [x0, #0xc8] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(200)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 0) + INT64_C(200)) + 8, (c)->q[0].u64[1]);
  /* 11dee8: stur q0, [x0, #0xd8] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(216)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 0) + INT64_C(216)) + 8, (c)->q[0].u64[1]);
  /* 11deec: stur q0, [x0, #0xe8] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(232)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 0) + INT64_C(232)) + 8, (c)->q[0].u64[1]);
  /* 11def0: stur q0, [x0, #0xf8] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(248)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 0) + INT64_C(248)) + 8, (c)->q[0].u64[1]);
  /* 11def4: str q0, [x8, #0xe0] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(224)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 8) + INT64_C(224)) + 8, (c)->q[0].u64[1]);
  /* 11def8: stp x9, x9, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 11defc: ldrb w8, [x1] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 1)));
  /* 11df00: tbnz w8, #0, #0x11df18 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_11df18;
  /* 11df04: ldr x8, [x1, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 1) + INT64_C(16))));
  /* 11df08: ldr q0, [x1] */
  arc_q_w(c, 0, arc_ld64(ARC_X_R(c, 1)), arc_ld64(ARC_X_R(c, 1) + 8));
  /* 11df0c: str x8, [x20, #0x130] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(304)), ARC_X_R(c, 8));
  /* 11df10: str q0, [x20, #0x120] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(288)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 20) + INT64_C(288)) + 8, (c)->q[0].u64[1]);
  /* 11df14: b #0x11df28 */
  goto L_11df28;
L_11df18:;
  /* 11df18: ldp x2, x8, [x1, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 1) + INT64_C(8));
    ARC_X_W(c, 2, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* 11df1c: add x0, x20, #0x120 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(288)));
  /* 11df20: mov x1, x8 */
  ARC_X_W(c, 1, ARC_X_R(c, 8));
  /* 11df24: bl #0xda588 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1171240));
  fn1_da588(c);
L_11df28:;
  /* 11df28: nop  */
  /* nop: no architectural effect here */
  /* 11df2c: adr x8, #0x15dd80 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1432960)));
  /* 11df30: adrp x22, #0x15d000 */
  ARC_X_W(c, 22, (arc_image_bases[1] + UINT64_C(1429504)));
  /* 11df34: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 11df38: tbz w8, #0, #0x11e39c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_11e39c;
L_11df3c:;
  /* 11df3c: ldr x8, [x22, #0xd78] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 22) + INT64_C(3448))));
  /* 11df40: cmp x20, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 8));
  /* 11df44: b.eq #0x11df5c */
  if (ARC_COND(c, 0)) goto L_11df5c;
  /* 11df48: ldp x1, x2, [x8, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 8) + INT64_C(16));
    ARC_X_W(c, 1, arc_ld64(_pa));
    ARC_X_W(c, 2, arc_ld64(_pa + 8));
  }
  /* 11df4c: sub x8, x2, x1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 2) - ARC_X_R(c, 1)));
  /* 11df50: asr x3, x8, #3 */
  ARC_X_W(c, 3, ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(3)) & 63))));
  /* 11df54: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 11df58: bl #0x135150 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1171292));
  fn1_135150(c);
L_11df5c:;
  /* 11df5c: ldp x9, x8, [x20, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(16));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* 11df60: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 11df64: b.eq #0x11dfa4 */
  if (ARC_COND(c, 0)) goto L_11dfa4;
  /* 11df68: mov x10, xzr */
  ARC_X_W(c, 10, ARC_X_R(c, 31));
  /* 11df6c: mov w21, #1 */
  ARC_W_W(c, 21, UINT64_C(1));
  /* 11df70: b #0x11df88 */
  goto L_11df88;
L_11df74:;
  /* 11df74: mov w10, w21 */
  ARC_W_W(c, 10, ARC_W_R(c, 21));
  /* 11df78: sub x11, x8, x9 */
  ARC_X_W(c, 11, (ARC_X_R(c, 8) - ARC_X_R(c, 9)));
  /* 11df7c: add w21, w21, #1 */
  ARC_W_W(c, 21, (ARC_W_R(c, 21) + UINT64_C(1)));
  /* 11df80: cmp x10, x11, asr #3 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ((uint64_t)((int64_t)(ARC_X_R(c, 11)) >> 3)));
  /* 11df84: b.hs #0x11dfa4 */
  if (ARC_COND(c, 2)) goto L_11dfa4;
L_11df88:;
  /* 11df88: ldr x10, [x9, x10, lsl #3] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 9) + ((uint64_t)(ARC_X_R(c, 10)) << 3))));
  /* 11df8c: cbz x10, #0x11df74 */
  if ((ARC_X_R(c, 10)) == 0) goto L_11df74;
  /* 11df90: add x1, x10, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 10) + UINT64_C(8)));
  /* 11df94: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 11df98: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1171356));
  fn1_db2e0(c);
  /* 11df9c: ldp x9, x8, [x20, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(16));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* 11dfa0: b #0x11df74 */
  goto L_11df74;
L_11dfa4:;
  /* 11dfa4: mov w0, #0x18 */
  ARC_W_W(c, 0, UINT64_C(24));
  /* 11dfa8: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1171372));
  fn1_1428f0(c);
  /* 11dfac: add x1, x20, #0x120 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(288)));
  /* 11dfb0: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 11dfb4: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 11dfb8: bl #0x143e68 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1171388));
  fn1_143e68(c);
  /* 11dfbc: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 11dfc0: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 11dfc4: bl #0x11e5bc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1171400));
  fn1_11e5bc(c);
  /* 11dfc8: mov w0, #0x18 */
  ARC_W_W(c, 0, UINT64_C(24));
  /* 11dfcc: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1171408));
  fn1_1428f0(c);
  /* 11dfd0: add x1, x20, #0x120 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(288)));
  /* 11dfd4: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 11dfd8: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 11dfdc: bl #0x143e98 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1171424));
  fn1_143e98(c);
  /* 11dfe0: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 11dfe4: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 11dfe8: bl #0x11e78c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1171436));
  fn1_11e78c(c);
  /* 11dfec: mov w0, #0x28 */
  ARC_W_W(c, 0, UINT64_C(40));
  /* 11dff0: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1171444));
  fn1_1428f0(c);
  /* 11dff4: add x1, x20, #0x120 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(288)));
  /* 11dff8: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 11dffc: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 11e000: bl #0x143f28 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1171460));
  fn1_143f28(c);
  /* 11e004: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 11e008: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 11e00c: bl #0x11e95c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1171472));
  fn1_11e95c(c);
  /* 11e010: mov w0, #0x18 */
  ARC_W_W(c, 0, UINT64_C(24));
  /* 11e014: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1171480));
  fn1_1428f0(c);
  /* 11e018: add x1, x20, #0x120 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(288)));
  /* 11e01c: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 11e020: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 11e024: bl #0x143f58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1171496));
  fn1_143f58(c);
  /* 11e028: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 11e02c: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 11e030: bl #0x11eb2c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1171508));
  fn1_11eb2c(c);
  /* 11e034: mov w0, #0x10 */
  ARC_W_W(c, 0, UINT64_C(16));
  /* 11e038: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1171516));
  fn1_1428f0(c);
  /* 11e03c: mov x1, x0 */
  ARC_X_W(c, 1, ARC_X_R(c, 0));
  /* 11e040: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 11e044: mov x9, #-1 */
  ARC_X_W(c, 9, UINT64_C(18446744073709551615));
  /* 11e048: ldr x8, [x8, #0xe08] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3592))));
  /* 11e04c: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* 11e050: stp x8, x9, [x1] */
  { const uint64_t _pa = ARC_X_R(c, 1);
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 11e054: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 11e058: bl #0x11ecfc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1171548));
  fn1_11ecfc(c);
  /* 11e05c: mov w0, #0x18 */
  ARC_W_W(c, 0, UINT64_C(24));
  /* 11e060: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1171556));
  fn1_1428f0(c);
  /* 11e064: ldrb w8, [x20, #0x120] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 20) + INT64_C(288))));
  /* 11e068: ldr x9, [x20, #0x130] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 20) + INT64_C(304))));
  /* 11e06c: add x10, x20, #0x121 */
  ARC_X_W(c, 10, (ARC_X_R(c, 20) + UINT64_C(289)));
  /* 11e070: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 11e074: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 11e078: csel x1, x10, x9, eq */
  ARC_X_W(c, 1, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* 11e07c: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 11e080: bl #0x143b38 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1171588));
  fn1_143b38(c);
  /* 11e084: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 11e088: ldr x8, [x8, #0xe10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3600))));
  /* 11e08c: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* 11e090: str x8, [x21] */
  arc_st64(ARC_X_R(c, 21), ARC_X_R(c, 8));
  /* 11e094: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 11e098: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 11e09c: bl #0x11eecc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1171616));
  fn1_11eecc(c);
  /* 11e0a0: mov w0, #0x10 */
  ARC_W_W(c, 0, UINT64_C(16));
  /* 11e0a4: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1171624));
  fn1_1428f0(c);
  /* 11e0a8: mov x1, x0 */
  ARC_X_W(c, 1, ARC_X_R(c, 0));
  /* 11e0ac: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 11e0b0: mov x9, #-1 */
  ARC_X_W(c, 9, UINT64_C(18446744073709551615));
  /* 11e0b4: ldr x8, [x8, #0xe18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3608))));
  /* 11e0b8: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* 11e0bc: stp x8, x9, [x1] */
  { const uint64_t _pa = ARC_X_R(c, 1);
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 11e0c0: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 11e0c4: bl #0x11f09c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1171656));
  fn1_11f09c(c);
  /* 11e0c8: mov w0, #0x10 */
  ARC_W_W(c, 0, UINT64_C(16));
  /* 11e0cc: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1171664));
  fn1_1428f0(c);
  /* 11e0d0: mov x1, x0 */
  ARC_X_W(c, 1, ARC_X_R(c, 0));
  /* 11e0d4: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 11e0d8: mov x9, #-1 */
  ARC_X_W(c, 9, UINT64_C(18446744073709551615));
  /* 11e0dc: ldr x8, [x8, #0xe20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3616))));
  /* 11e0e0: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* 11e0e4: stp x8, x9, [x1] */
  { const uint64_t _pa = ARC_X_R(c, 1);
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 11e0e8: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 11e0ec: bl #0x11f26c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1171696));
  fn1_11f26c(c);
  /* 11e0f0: mov w0, #0x10 */
  ARC_W_W(c, 0, UINT64_C(16));
  /* 11e0f4: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1171704));
  fn1_1428f0(c);
  /* 11e0f8: mov x1, x0 */
  ARC_X_W(c, 1, ARC_X_R(c, 0));
  /* 11e0fc: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 11e100: mov x9, #-1 */
  ARC_X_W(c, 9, UINT64_C(18446744073709551615));
  /* 11e104: ldr x8, [x8, #0xe28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3624))));
  /* 11e108: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* 11e10c: stp x8, x9, [x1] */
  { const uint64_t _pa = ARC_X_R(c, 1);
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 11e110: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 11e114: bl #0x11f43c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1171736));
  fn1_11f43c(c);
  /* 11e118: mov w0, #0x10 */
  ARC_W_W(c, 0, UINT64_C(16));
  /* 11e11c: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1171744));
  fn1_1428f0(c);
  /* 11e120: mov x1, x0 */
  ARC_X_W(c, 1, ARC_X_R(c, 0));
  /* 11e124: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 11e128: mov x9, #-1 */
  ARC_X_W(c, 9, UINT64_C(18446744073709551615));
  /* 11e12c: ldr x8, [x8, #0xe30] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3632))));
  /* 11e130: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* 11e134: stp x8, x9, [x1] */
  { const uint64_t _pa = ARC_X_R(c, 1);
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 11e138: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 11e13c: bl #0x11f60c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1171776));
  fn1_11f60c(c);
  /* 11e140: mov w0, #0x30 */
  ARC_W_W(c, 0, UINT64_C(48));
  /* 11e144: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1171784));
  fn1_1428f0(c);
  /* 11e148: add x1, x20, #0x120 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(288)));
  /* 11e14c: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 11e150: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 11e154: bl #0x144168 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1171800));
  fn1_144168(c);
  /* 11e158: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 11e15c: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 11e160: bl #0x11f7dc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1171812));
  fn1_11f7dc(c);
  /* 11e164: mov w0, #0x30 */
  ARC_W_W(c, 0, UINT64_C(48));
  /* 11e168: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1171820));
  fn1_1428f0(c);
  /* 11e16c: add x1, x20, #0x120 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(288)));
  /* 11e170: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 11e174: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 11e178: bl #0x144198 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1171836));
  fn1_144198(c);
  /* 11e17c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 11e180: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 11e184: bl #0x11f9ac */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1171848));
  fn1_11f9ac(c);
  /* 11e188: mov w0, #0x88 */
  ARC_W_W(c, 0, UINT64_C(136));
  /* 11e18c: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1171856));
  fn1_1428f0(c);
  /* 11e190: add x1, x20, #0x120 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(288)));
  /* 11e194: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 11e198: bl #0x11fd4c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1171868));
  fn1_11fd4c(c);
  /* 11e19c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 11e1a0: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 11e1a4: bl #0x11fb7c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1171880));
  fn1_11fb7c(c);
  /* 11e1a8: mov w0, #0x88 */
  ARC_W_W(c, 0, UINT64_C(136));
  /* 11e1ac: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1171888));
  fn1_1428f0(c);
  /* 11e1b0: add x1, x20, #0x120 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(288)));
  /* 11e1b4: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 11e1b8: bl #0x12001c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1171900));
  fn1_12001c(c);
  /* 11e1bc: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 11e1c0: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 11e1c4: bl #0x11fe4c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1171912));
  fn1_11fe4c(c);
  /* 11e1c8: mov w0, #0x88 */
  ARC_W_W(c, 0, UINT64_C(136));
  /* 11e1cc: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1171920));
  fn1_1428f0(c);
  /* 11e1d0: add x1, x20, #0x120 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(288)));
  /* 11e1d4: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 11e1d8: bl #0x1202ec */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1171932));
  fn1_1202ec(c);
  /* 11e1dc: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 11e1e0: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 11e1e4: bl #0x12011c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1171944));
  fn1_12011c(c);
  /* 11e1e8: mov w0, #0x88 */
  ARC_W_W(c, 0, UINT64_C(136));
  /* 11e1ec: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1171952));
  fn1_1428f0(c);
  /* 11e1f0: add x1, x20, #0x120 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(288)));
  /* 11e1f4: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 11e1f8: bl #0x120560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1171964));
  fn1_120560(c);
  /* 11e1fc: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 11e200: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 11e204: bl #0x120390 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1171976));
  fn1_120390(c);
  /* 11e208: mov w0, #0x440 */
  ARC_W_W(c, 0, UINT64_C(1088));
  /* 11e20c: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1171984));
  fn1_1428f0(c);
  /* 11e210: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 11e214: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 11e218: mov x9, #-1 */
  ARC_X_W(c, 9, UINT64_C(18446744073709551615));
  /* 11e21c: ldr x8, [x8, #0xd48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3400))));
  /* 11e220: add x10, x8, #0x10 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* 11e224: add x8, x8, #0x70 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(112)));
  /* 11e228: stp x10, x9, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 10));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 11e22c: str x8, [x0, #0x10] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(16)), ARC_X_R(c, 8));
  /* 11e230: add x0, x0, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(24)));
  /* 11e234: add x1, x20, #0x120 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(288)));
  /* 11e238: bl #0x143c70 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1172028));
  fn1_143c70(c);
  /* 11e23c: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 11e240: ldr x8, [x8, #0xd58] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3416))));
  /* 11e244: add x9, x8, #0x10 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* 11e248: add x8, x8, #0xa8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(168)));
  /* 11e24c: str x9, [x21] */
  arc_st64(ARC_X_R(c, 21), ARC_X_R(c, 9));
  /* 11e250: str x8, [x21, #0x10] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(16)), ARC_X_R(c, 8));
  /* 11e254: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 11e258: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 11e25c: bl #0x120604 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1172064));
  fn1_120604(c);
  /* 11e260: mov w0, #0x440 */
  ARC_W_W(c, 0, UINT64_C(1088));
  /* 11e264: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1172072));
  fn1_1428f0(c);
  /* 11e268: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 11e26c: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 11e270: mov x9, #-1 */
  ARC_X_W(c, 9, UINT64_C(18446744073709551615));
  /* 11e274: ldr x8, [x8, #0xd50] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3408))));
  /* 11e278: add x10, x8, #0x10 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* 11e27c: add x8, x8, #0x70 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(112)));
  /* 11e280: stp x10, x9, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 10));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 11e284: str x8, [x0, #0x10] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(16)), ARC_X_R(c, 8));
  /* 11e288: add x0, x0, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(24)));
  /* 11e28c: add x1, x20, #0x120 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(288)));
  /* 11e290: bl #0x143ca0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1172116));
  fn1_143ca0(c);
  /* 11e294: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 11e298: ldr x8, [x8, #0xd60] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3424))));
  /* 11e29c: add x9, x8, #0x10 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* 11e2a0: add x8, x8, #0xa8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(168)));
  /* 11e2a4: str x9, [x21] */
  arc_st64(ARC_X_R(c, 21), ARC_X_R(c, 9));
  /* 11e2a8: str x8, [x21, #0x10] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(16)), ARC_X_R(c, 8));
  /* 11e2ac: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 11e2b0: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 11e2b4: bl #0x1207d4 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1172152));
  fn1_1207d4(c);
  /* 11e2b8: mov w0, #0x18 */
  ARC_W_W(c, 0, UINT64_C(24));
  /* 11e2bc: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1172160));
  fn1_1428f0(c);
  /* 11e2c0: adrp x22, #0x151000 */
  ARC_X_W(c, 22, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 11e2c4: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 11e2c8: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 11e2cc: ldr x22, [x22, #0xce0] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 22) + INT64_C(3296))));
  /* 11e2d0: add x9, x22, #0x10 */
  ARC_X_W(c, 9, (ARC_X_R(c, 22) + UINT64_C(16)));
  /* 11e2d4: stp x9, x8, [x0], #0x10 */
  { const uint64_t _pa = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* 11e2d8: add x1, x20, #0x120 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(288)));
  /* 11e2dc: bl #0x143ce8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1172192));
  fn1_143ce8(c);
  /* 11e2e0: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 11e2e4: ldr x8, [x8, #0xd78] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3448))));
  /* 11e2e8: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* 11e2ec: str x8, [x21] */
  arc_st64(ARC_X_R(c, 21), ARC_X_R(c, 8));
  /* 11e2f0: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 11e2f4: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 11e2f8: bl #0x1209a4 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1172220));
  fn1_1209a4(c);
  /* 11e2fc: mov w0, #0x18 */
  ARC_W_W(c, 0, UINT64_C(24));
  /* 11e300: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1172228));
  fn1_1428f0(c);
  /* 11e304: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 11e308: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 11e30c: add x9, x22, #0x10 */
  ARC_X_W(c, 9, (ARC_X_R(c, 22) + UINT64_C(16)));
  /* 11e310: stp x9, x8, [x0], #0x10 */
  { const uint64_t _pa = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* 11e314: add x1, x20, #0x120 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(288)));
  /* 11e318: bl #0x143ce8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1172252));
  fn1_143ce8(c);
  /* 11e31c: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 11e320: ldr x8, [x8, #0xd80] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3456))));
  /* 11e324: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* 11e328: str x8, [x21] */
  arc_st64(ARC_X_R(c, 21), ARC_X_R(c, 8));
  /* 11e32c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 11e330: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 11e334: bl #0x120b74 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1172280));
  fn1_120b74(c);
  /* 11e338: mov w0, #0x10 */
  ARC_W_W(c, 0, UINT64_C(16));
  /* 11e33c: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1172288));
  fn1_1428f0(c);
  /* 11e340: mov x1, x0 */
  ARC_X_W(c, 1, ARC_X_R(c, 0));
  /* 11e344: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 11e348: mov x9, #-1 */
  ARC_X_W(c, 9, UINT64_C(18446744073709551615));
  /* 11e34c: ldr x8, [x8, #0xdf8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3576))));
  /* 11e350: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* 11e354: stp x8, x9, [x1] */
  { const uint64_t _pa = ARC_X_R(c, 1);
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 11e358: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 11e35c: bl #0x120d44 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1172320));
  fn1_120d44(c);
  /* 11e360: mov w0, #0x10 */
  ARC_W_W(c, 0, UINT64_C(16));
  /* 11e364: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1172328));
  fn1_1428f0(c);
  /* 11e368: mov x1, x0 */
  ARC_X_W(c, 1, ARC_X_R(c, 0));
  /* 11e36c: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 11e370: mov x9, #-1 */
  ARC_X_W(c, 9, UINT64_C(18446744073709551615));
  /* 11e374: ldr x8, [x8, #0xe00] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3584))));
  /* 11e378: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* 11e37c: stp x8, x9, [x1] */
  { const uint64_t _pa = ARC_X_R(c, 1);
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 11e380: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 11e384: bl #0x120f14 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1172360));
  fn1_120f14(c);
  /* 11e388: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 11e38c: ldp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 11e390: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 11e394: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 11e398: ret  */
  return;
L_11e39c:;
  /* 11e39c: nop  */
  /* nop: no architectural effect here */
  /* 11e3a0: adr x0, #0x15dd80 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432960)));
  /* 11e3a4: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1172392));
  fn1_1424b8(c);
  /* 11e3a8: cbz w0, #0x11df3c */
  if ((ARC_W_R(c, 0)) == 0) goto L_11df3c;
  /* 11e3ac: nop  */
  /* nop: no architectural effect here */
  /* 11e3b0: adr x21, #0x15dc40 */
  ARC_X_W(c, 21, (arc_image_bases[1] + UINT64_C(1432640)));
  /* 11e3b4: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* 11e3b8: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 11e3bc: bl #0x11ae94 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1172416));
  fn1_11ae94(c);
  /* 11e3c0: nop  */
  /* nop: no architectural effect here */
  /* 11e3c4: adr x0, #0x15dd80 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432960)));
  /* 11e3c8: str x21, [x22, #0xd78] */
  arc_st64((ARC_X_R(c, 22) + INT64_C(3448)), ARC_X_R(c, 21));
  /* 11e3cc: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1172432));
  fn1_1424d0(c);
  /* 11e3d0: b #0x11df3c */
  goto L_11df3c;
  /* 11e3d4: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 11e3d8: nop  */
  /* nop: no architectural effect here */
  /* 11e3dc: adr x0, #0x15dd80 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432960)));
  /* 11e3e0: bl #0x1424e8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1172452));
  fn1_1424e8(c);
  /* 11e3e4: b #0x11e494 */
  goto L_11e494;
  /* 11e3e8: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 11e3ec: b #0x11e51c */
  goto L_11e51c;
  /* 11e3f0: b #0x11e448 */
  goto L_11e448;
  /* 11e3f4: b #0x11e448 */
  goto L_11e448;
  /* 11e3f8: b #0x11e3fc */
  goto L_11e3fc;
L_11e3fc:;
  /* 11e3fc: mov x8, x21 */
  ARC_X_W(c, 8, ARC_X_R(c, 21));
  /* 11e400: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 11e404: mov w1, #0x440 */
  ARC_W_W(c, 1, UINT64_C(1088));
  /* 11e408: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 11e40c: b #0x11e488 */
  goto L_11e488;
  /* 11e410: b #0x11e41c */
  goto L_11e41c;
  /* 11e414: b #0x11e41c */
  goto L_11e41c;
  /* 11e418: b #0x11e41c */
  goto L_11e41c;
L_11e41c:;
  /* 11e41c: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 11e420: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 11e424: mov x0, x1 */
  ARC_X_W(c, 0, ARC_X_R(c, 1));
  /* 11e428: mov w1, #0x88 */
  ARC_W_W(c, 1, UINT64_C(136));
  /* 11e42c: b #0x11e488 */
  goto L_11e488;
  /* 11e430: b #0x11e434 */
  goto L_11e434;
L_11e434:;
  /* 11e434: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 11e438: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 11e43c: mov x0, x1 */
  ARC_X_W(c, 0, ARC_X_R(c, 1));
  /* 11e440: mov w1, #0x30 */
  ARC_W_W(c, 1, UINT64_C(48));
  /* 11e444: b #0x11e488 */
  goto L_11e488;
L_11e448:;
  /* 11e448: mov x8, x21 */
  ARC_X_W(c, 8, ARC_X_R(c, 21));
  /* 11e44c: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 11e450: mov w1, #0x18 */
  ARC_W_W(c, 1, UINT64_C(24));
  /* 11e454: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 11e458: b #0x11e488 */
  goto L_11e488;
  /* 11e45c: b #0x11e478 */
  goto L_11e478;
  /* 11e460: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 11e464: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 11e468: mov x0, x1 */
  ARC_X_W(c, 0, ARC_X_R(c, 1));
  /* 11e46c: mov w1, #0x28 */
  ARC_W_W(c, 1, UINT64_C(40));
  /* 11e470: b #0x11e488 */
  goto L_11e488;
  /* 11e474: b #0x11e478 */
  goto L_11e478;
L_11e478:;
  /* 11e478: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 11e47c: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 11e480: mov x0, x1 */
  ARC_X_W(c, 0, ARC_X_R(c, 1));
  /* 11e484: mov w1, #0x18 */
  ARC_W_W(c, 1, UINT64_C(24));
L_11e488:;
  /* 11e488: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1172620));
  fn1_142608(c);
  /* 11e48c: b #0x11e494 */
  goto L_11e494;
  /* 11e490: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
L_11e494:;
  /* 11e494: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 11e498: bl #0x142548 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1172636));
  fn1_142548(c);
  /* 11e49c: ldp x8, x9, [x20, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 11e4a0: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* 11e4a4: b.ne #0x11e4ac */
  if (ARC_COND(c, 1)) goto L_11e4ac;
L_11e4a8:;
  /* 11e4a8: bl #0x1429b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1172652));
  fn1_1429b0(c);
L_11e4ac:;
  /* 11e4ac: mov x9, xzr */
  ARC_X_W(c, 9, ARC_X_R(c, 31));
  /* 11e4b0: mov w22, #1 */
  ARC_W_W(c, 22, UINT64_C(1));
  /* 11e4b4: b #0x11e4d0 */
  goto L_11e4d0;
L_11e4b8:;
  /* 11e4b8: ldp x8, x10, [x20, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* 11e4bc: mov w9, w22 */
  ARC_W_W(c, 9, ARC_W_R(c, 22));
  /* 11e4c0: add w22, w22, #1 */
  ARC_W_W(c, 22, (ARC_W_R(c, 22) + UINT64_C(1)));
  /* 11e4c4: sub x10, x10, x8 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) - ARC_X_R(c, 8)));
  /* 11e4c8: cmp x9, x10, asr #3 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ((uint64_t)((int64_t)(ARC_X_R(c, 10)) >> 3)));
  /* 11e4cc: b.hs #0x11e4a8 */
  if (ARC_COND(c, 2)) goto L_11e4a8;
L_11e4d0:;
  /* 11e4d0: ldr x21, [x8, x9, lsl #3] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3))));
  /* 11e4d4: cbz x21, #0x11e4b8 */
  if ((ARC_X_R(c, 21)) == 0) goto L_11e4b8;
  /* 11e4d8: add x1, x21, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(8)));
  /* 11e4dc: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 11e4e0: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1172708));
  fn1_bd950(c);
  /* 11e4e4: cbnz x0, #0x11e4b8 */
  if ((ARC_X_R(c, 0)) != 0) goto L_11e4b8;
  /* 11e4e8: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 11e4ec: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 11e4f0: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 11e4f4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1172728));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 11e4f8: b #0x11e4b8 */
  goto L_11e4b8;
  /* 11e4fc: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 11e500: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1172740));
  fn1_142980(c);
  /* 11e504: ldrb w8, [x20, #0x120] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 20) + INT64_C(288))));
  /* 11e508: tbz w8, #0, #0x11e51c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_11e51c;
  /* 11e50c: ldr x8, [x20, #0x120] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(288))));
  /* 11e510: ldr x0, [x20, #0x130] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 20) + INT64_C(304))));
  /* 11e514: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 11e518: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1172764));
  fn1_142608(c);
L_11e51c:;
  /* 11e51c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 11e520: bl #0x11de44 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1172772));
  fn1_11de44(c);
  /* 11e524: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 11e528: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1172780));
  fn1_9cc20(c);
  /* 11e52c: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1172784));
  fn1_a1454(c);
}

void fn1_1263c8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039133128));
  /* 1263c8: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 1263cc: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1263d0: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 1263d4: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1263d8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1263dc: bl #0x143ee0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1205216));
  fn1_143ee0(c);
  /* 1263e0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1263e4: mov w1, #0x10 */
  ARC_W_W(c, 1, UINT64_C(16));
  /* 1263e8: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1263ec: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1263f0: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 1263f4: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_128844(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039142468));
  /* 128844: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 128848: sub sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(48)));
  /* 12884c: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 128850: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 128854: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 128858: ldr x0, [x0, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 12885c: cbz x0, #0x128884 */
  if ((ARC_X_R(c, 0)) == 0) goto L_128884;
  /* 128860: bl #0x1443c0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1214564));
  fn1_1443c0(c);
  /* 128864: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 128868: str x0, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 0));
  /* 12886c: bl #0x144468 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1214576));
  fn1_144468(c);
  /* 128870: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 128874: cbz x20, #0x128888 */
  if ((ARC_X_R(c, 20)) == 0) goto L_128888;
  /* 128878: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 12887c: bl #0x1443c0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1214592));
  fn1_1443c0(c);
  /* 128880: b #0x128888 */
  goto L_128888;
L_128884:;
  /* 128884: mov w19, #1 */
  ARC_W_W(c, 19, UINT64_C(1));
L_128888:;
  /* 128888: mov w0, w19 */
  ARC_W_W(c, 0, ARC_W_R(c, 19));
  /* 12888c: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 128890: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 128894: add sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(48)));
  /* 128898: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 12889c: ret  */
  return;
  /* 1288a0: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1214628));
  fn1_a1454(c);
  /* 1288a4: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1288a8: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1288ac: bl #0x135428 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1214640));
  fn1_135428(c);
  /* 1288b0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1288b4: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1214648));
  fn1_a1454(c);
  /* 1288b8: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1214652));
  fn1_a1454(c);
}

void fn1_12a498(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039149720));
  /* 12a498: bti c */
  /* bti: no architectural effect here */
  /* 12a49c: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 12a4a0: ret  */
  return;
}

void fn1_12bb9c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039155612));
  /* 12bb9c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 12bba0: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 12bba4: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 12bba8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 12bbac: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 12bbb0: bl #0x1440f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1227700));
  fn1_1440f0(c);
  /* 12bbb4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 12bbb8: mov w1, #0x10 */
  ARC_W_W(c, 1, UINT64_C(16));
  /* 12bbbc: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 12bbc0: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 12bbc4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 12bbc8: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_131b04(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039180036));
  /* 131b04: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 131b08: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 131b0c: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 131b10: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 131b14: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 131b18: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 131b1c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 131b20: bl #0x143bc8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1252132));
  fn1_143bc8(c);
  /* 131b24: add x0, x19, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(8)));
  /* 131b28: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* 131b2c: mov w2, #0x420 */
  ARC_W_W(c, 2, UINT64_C(1056));
  /* 131b30: bl #0x144a20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1252148));
  fn1_144a20(c);
  /* 131b34: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 131b38: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 131b3c: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* 131b40: bl #0x143b20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1252164));
  fn1_143b20(c);
  /* 131b44: adrp x8, #0x150000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1376256)));
  /* 131b48: add x8, x8, #0x8a8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2216)));
  /* 131b4c: str x8, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 8));
  /* 131b50: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 131b54: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 131b58: bl #0x143c40 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1252188));
  fn1_143c40(c);
  /* 131b5c: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 131b60: ldr x8, [x8, #0xc80] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3200))));
  /* 131b64: ldr x0, [sp, #0x18] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(24))));
  /* 131b68: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* 131b6c: str x8, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 8));
  /* 131b70: bl #0x144210 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1252212));
  fn1_144210(c);
  /* 131b74: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 131b78: bl #0x143ec8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1252220));
  fn1_143ec8(c);
  /* 131b7c: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 131b80: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 131b84: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 131b88: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 131b8c: ret  */
  return;
  /* 131b90: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1252244));
  fn1_a1454(c);
  /* 131b94: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 131b98: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 131b9c: bl #0x143c88 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1252256));
  fn1_143c88(c);
  /* 131ba0: b #0x131ba8 */
  goto L_131ba8;
  /* 131ba4: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
L_131ba8:;
  /* 131ba8: add x0, x19, #0x410 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(1040)));
  /* 131bac: bl #0x142d58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1252272));
  fn1_142d58(c);
  /* 131bb0: add x0, x19, #0x3f8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(1016)));
  /* 131bb4: bl #0x142d58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1252280));
  fn1_142d58(c);
  /* 131bb8: add x0, x19, #0x3e0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(992)));
  /* 131bbc: bl #0x142d58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1252288));
  fn1_142d58(c);
  /* 131bc0: add x0, x19, #0x3c8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(968)));
  /* 131bc4: bl #0x142d58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1252296));
  fn1_142d58(c);
  /* 131bc8: add x0, x19, #0x3b0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(944)));
  /* 131bcc: bl #0x142d58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1252304));
  fn1_142d58(c);
  /* 131bd0: add x0, x19, #0x398 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(920)));
  /* 131bd4: bl #0x142d58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1252312));
  fn1_142d58(c);
  /* 131bd8: add x0, x19, #0x380 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(896)));
  /* 131bdc: bl #0x142d58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1252320));
  fn1_142d58(c);
  /* 131be0: add x0, x19, #0x368 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(872)));
  /* 131be4: bl #0x142d58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1252328));
  fn1_142d58(c);
  /* 131be8: add x0, x19, #0x350 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(848)));
  /* 131bec: bl #0x142d58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1252336));
  fn1_142d58(c);
  /* 131bf0: add x0, x19, #0x338 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(824)));
  /* 131bf4: bl #0x142d58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1252344));
  fn1_142d58(c);
  /* 131bf8: add x0, x19, #0x320 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(800)));
  /* 131bfc: bl #0x142d58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1252352));
  fn1_142d58(c);
  /* 131c00: add x0, x19, #0x308 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(776)));
  /* 131c04: bl #0x142d58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1252360));
  fn1_142d58(c);
  /* 131c08: add x0, x19, #0x2f0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(752)));
  /* 131c0c: bl #0x142d58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1252368));
  fn1_142d58(c);
  /* 131c10: add x0, x19, #0x2d8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(728)));
  /* 131c14: bl #0x142d58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1252376));
  fn1_142d58(c);
  /* 131c18: add x0, x19, #0x2c0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(704)));
  /* 131c1c: bl #0x142d58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1252384));
  fn1_142d58(c);
  /* 131c20: add x0, x19, #0x2a8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(680)));
  /* 131c24: bl #0x142d58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1252392));
  fn1_142d58(c);
  /* 131c28: add x0, x19, #0x290 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(656)));
  /* 131c2c: bl #0x142d58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1252400));
  fn1_142d58(c);
  /* 131c30: add x0, x19, #0x278 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(632)));
  /* 131c34: bl #0x142d58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1252408));
  fn1_142d58(c);
  /* 131c38: add x0, x19, #0x260 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(608)));
  /* 131c3c: bl #0x142d58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1252416));
  fn1_142d58(c);
  /* 131c40: add x0, x19, #0x248 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(584)));
  /* 131c44: bl #0x142d58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1252424));
  fn1_142d58(c);
  /* 131c48: add x0, x19, #0x230 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(560)));
  /* 131c4c: bl #0x142d58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1252432));
  fn1_142d58(c);
  /* 131c50: add x0, x19, #0x218 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(536)));
  /* 131c54: bl #0x142d58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1252440));
  fn1_142d58(c);
  /* 131c58: add x0, x19, #0x200 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(512)));
  /* 131c5c: bl #0x142d58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1252448));
  fn1_142d58(c);
  /* 131c60: add x0, x19, #0x1e8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(488)));
  /* 131c64: bl #0x142d58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1252456));
  fn1_142d58(c);
  /* 131c68: add x0, x19, #0x1d0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(464)));
  /* 131c6c: bl #0x142d58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1252464));
  fn1_142d58(c);
  /* 131c70: add x0, x19, #0x1b8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(440)));
  /* 131c74: bl #0x142d58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1252472));
  fn1_142d58(c);
  /* 131c78: add x0, x19, #0x1a0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(416)));
  /* 131c7c: bl #0x142d58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1252480));
  fn1_142d58(c);
  /* 131c80: add x0, x19, #0x188 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(392)));
  /* 131c84: bl #0x142d58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1252488));
  fn1_142d58(c);
  /* 131c88: add x0, x19, #0x170 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(368)));
  /* 131c8c: bl #0x142d58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1252496));
  fn1_142d58(c);
  /* 131c90: add x0, x19, #0x158 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(344)));
  /* 131c94: bl #0x142d58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1252504));
  fn1_142d58(c);
  /* 131c98: add x0, x19, #0x140 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(320)));
  /* 131c9c: bl #0x142d58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1252512));
  fn1_142d58(c);
  /* 131ca0: add x0, x19, #0x128 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(296)));
  /* 131ca4: bl #0x142d58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1252520));
  fn1_142d58(c);
  /* 131ca8: add x0, x19, #0x110 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(272)));
  /* 131cac: bl #0x142d58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1252528));
  fn1_142d58(c);
  /* 131cb0: add x0, x19, #0xf8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(248)));
  /* 131cb4: bl #0x142d58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1252536));
  fn1_142d58(c);
  /* 131cb8: add x0, x19, #0xe0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(224)));
  /* 131cbc: bl #0x142d58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1252544));
  fn1_142d58(c);
  /* 131cc0: add x0, x19, #0xc8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(200)));
  /* 131cc4: bl #0x142d58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1252552));
  fn1_142d58(c);
  /* 131cc8: add x0, x19, #0xb0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(176)));
  /* 131ccc: bl #0x142d58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1252560));
  fn1_142d58(c);
  /* 131cd0: add x0, x19, #0x98 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(152)));
  /* 131cd4: bl #0x142d58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1252568));
  fn1_142d58(c);
  /* 131cd8: add x0, x19, #0x80 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(128)));
  /* 131cdc: bl #0x142d58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1252576));
  fn1_142d58(c);
  /* 131ce0: add x0, x19, #0x68 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(104)));
  /* 131ce4: bl #0x142d58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1252584));
  fn1_142d58(c);
  /* 131ce8: add x0, x19, #0x50 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(80)));
  /* 131cec: bl #0x142d58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1252592));
  fn1_142d58(c);
  /* 131cf0: add x0, x19, #0x38 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(56)));
  /* 131cf4: bl #0x142d58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1252600));
  fn1_142d58(c);
  /* 131cf8: add x0, x19, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(32)));
  /* 131cfc: bl #0x142d58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1252608));
  fn1_142d58(c);
  /* 131d00: add x0, x19, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(8)));
  /* 131d04: bl #0x142d58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1252616));
  fn1_142d58(c);
  /* 131d08: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 131d0c: bl #0x143be0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1252624));
  fn1_143be0(c);
  /* 131d10: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 131d14: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1252632));
  fn1_9cc20(c);
}

void fn1_134ba8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039192488));
  /* 134ba8: bti c */
  /* bti: no architectural effect here */
  /* 134bac: add x0, x0, #0x3e8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1000)));
  /* 134bb0: ret  */
  return;
}

void fn1_136dd8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039201240));
  /* 136dd8: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 136ddc: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 136de0: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 136de4: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 136de8: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 136dec: ldr x8, [x8, #0x910] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2320))));
  /* 136df0: ldr x19, [x0, #8] */
  ARC_X_W(c, 19, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* 136df4: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* 136df8: sub x1, x19, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 19) - UINT64_C(8)));
  /* 136dfc: str x8, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* 136e00: mov w0, #-1 */
  ARC_W_W(c, 0, UINT64_C(18446744073709551615));
  /* 136e04: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1273352));
  fn1_a2030(c);
  /* 136e08: cmp w0, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(1));
  /* 136e0c: b.mi #0x136e20 */
  if (ARC_COND(c, 4)) goto L_136e20;
  /* 136e10: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 136e14: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 136e18: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 136e1c: ret  */
  return;
L_136e20:;
  /* 136e20: sub x0, x19, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) - UINT64_C(24)));
  /* 136e24: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 136e28: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 136e2c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 136e30: b #0x1426f8 */
  fn1_1426f8(c); return;
}

void fn1_139da4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039213476));
  /* 139da4: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 139da8: sub sp, sp, #0xa0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(160)));
  /* 139dac: stp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 139db0: stp x28, x27, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* 139db4: stp x26, x25, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* 139db8: stp x24, x23, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 139dbc: stp x22, x21, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 139dc0: stp x20, x19, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 139dc4: add x29, sp, #0x40 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(64)));
  /* 139dc8: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 139dcc: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 139dd0: bl #0x142a58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1285588));
  fn1_142a58(c);
  /* 139dd4: nop  */
  /* nop: no architectural effect here */
  /* 139dd8: adr x8, #0x159210 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 139ddc: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 139de0: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 139de4: tbz w8, #0, #0x139fb4 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_139fb4;
L_139de8:;
  /* 139de8: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* 139dec: nop  */
  /* nop: no architectural effect here */
  /* 139df0: adr x25, #0x156d40 */
  ARC_X_W(c, 25, (arc_image_bases[1] + UINT64_C(1404224)));
  /* 139df4: str wzr, [x21] */
  arc_st32(ARC_X_R(c, 21), ARC_W_R(c, 31));
  /* 139df8: str wzr, [x20] */
  arc_st32(ARC_X_R(c, 20), ARC_W_R(c, 31));
  /* 139dfc: str x25, [x20, #8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(8)), ARC_X_R(c, 25));
  /* 139e00: bl #0x144600 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1285636));
  fn1_144600(c);
  /* 139e04: cbz x0, #0x139ed8 */
  if ((ARC_X_R(c, 0)) == 0) goto L_139ed8;
  /* 139e08: nop  */
  /* nop: no architectural effect here */
  /* 139e0c: adr x26, #0x77448 */
  ARC_X_W(c, 26, (arc_image_bases[1] + UINT64_C(488520)));
  /* 139e10: nop  */
  /* nop: no architectural effect here */
  /* 139e14: adr x27, #0x77454 */
  ARC_X_W(c, 27, (arc_image_bases[1] + UINT64_C(488532)));
  /* 139e18: mov w28, #0x2e2e */
  ARC_W_W(c, 28, UINT64_C(11822));
  /* 139e1c: b #0x139e44 */
  goto L_139e44;
L_139e20:;
  /* 139e20: ldrh w8, [x22] */
  ARC_W_W(c, 8, arc_ld16(ARC_X_R(c, 22)));
  /* 139e24: cmp w8, w28 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 28));
  /* 139e28: b.ne #0x139e94 */
  if (ARC_COND(c, 1)) goto L_139e94;
L_139e2c:;
  /* 139e2c: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* 139e30: str wzr, [x21] */
  arc_st32(ARC_X_R(c, 21), ARC_W_R(c, 31));
  /* 139e34: str wzr, [x20] */
  arc_st32(ARC_X_R(c, 20), ARC_W_R(c, 31));
  /* 139e38: str x25, [x20, #8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(8)), ARC_X_R(c, 25));
  /* 139e3c: bl #0x144600 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1285696));
  fn1_144600(c);
  /* 139e40: cbz x0, #0x139ed8 */
  if ((ARC_X_R(c, 0)) == 0) goto L_139ed8;
L_139e44:;
  /* 139e44: ldrb w8, [x0, #0x12] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 0) + INT64_C(18))));
  /* 139e48: sub w8, w8, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) - UINT64_C(1)));
  /* 139e4c: cmp w8, #0xb */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(11));
  /* 139e50: b.hi #0x139e64 */
  if (ARC_COND(c, 8)) goto L_139e64;
  /* 139e54: and x8, x8, #0xff */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) & UINT64_C(255)));
  /* 139e58: ldrb w23, [x26, x8] */
  ARC_W_W(c, 23, arc_ld8((ARC_X_R(c, 26) + ARC_X_R(c, 8))));
  /* 139e5c: ldrb w24, [x27, x8] */
  ARC_W_W(c, 24, arc_ld8((ARC_X_R(c, 27) + ARC_X_R(c, 8))));
  /* 139e60: b #0x139e6c */
  goto L_139e6c;
L_139e64:;
  /* 139e64: mov w23, wzr */
  ARC_W_W(c, 23, ARC_W_R(c, 31));
  /* 139e68: mov w24, wzr */
  ARC_W_W(c, 24, ARC_W_R(c, 31));
L_139e6c:;
  /* 139e6c: add x22, x0, #0x13 */
  ARC_X_W(c, 22, (ARC_X_R(c, 0) + UINT64_C(19)));
  /* 139e70: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 139e74: bl #0x142860 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1285752));
  fn1_142860(c);
  /* 139e78: cmp x0, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 0), UINT64_C(2));
  /* 139e7c: b.eq #0x139e20 */
  if (ARC_COND(c, 0)) goto L_139e20;
  /* 139e80: cmp x0, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 0), UINT64_C(1));
  /* 139e84: b.ne #0x139e94 */
  if (ARC_COND(c, 1)) goto L_139e94;
  /* 139e88: ldrb w8, [x22] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 22)));
  /* 139e8c: cmp w8, #0x2e */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(46));
  /* 139e90: b.eq #0x139e2c */
  if (ARC_COND(c, 0)) goto L_139e2c;
L_139e94:;
  /* 139e94: cbz x0, #0x139efc */
  if ((ARC_X_R(c, 0)) == 0) goto L_139efc;
  /* 139e98: ldr w8, [x20] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 20)));
  /* 139e9c: cbnz w8, #0x139efc */
  if ((ARC_W_R(c, 8)) != 0) goto L_139efc;
  /* 139ea0: stp xzr, xzr, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 139ea4: str xzr, [sp, #0x18] */
  arc_st64(((c)->sp + INT64_C(24)), ARC_X_R(c, 31));
  /* 139ea8: mov x8, x0 */
  ARC_X_W(c, 8, ARC_X_R(c, 0));
  /* 139eac: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 139eb0: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 139eb4: add x2, x22, x8 */
  ARC_X_W(c, 2, (ARC_X_R(c, 22) + ARC_X_R(c, 8)));
  /* 139eb8: bl #0xda784 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1285820));
  fn1_da784(c);
  /* 139ebc: ldurb w8, [x19, #8] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(8))));
  /* 139ec0: tbnz w8, #0, #0x139f30 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_139f30;
  /* 139ec4: ldur q0, [x19, #8] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))), arc_ld64((ARC_X_R(c, 19) + INT64_C(8)) + 8));
  /* 139ec8: ldur x8, [x19, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(24))));
  /* 139ecc: str q0, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), (c)->q[0].u64[0]);
  arc_st64(((c)->sp + INT64_C(32)) + 8, (c)->q[0].u64[1]);
  /* 139ed0: str x8, [sp, #0x30] */
  arc_st64(((c)->sp + INT64_C(48)), ARC_X_R(c, 8));
  /* 139ed4: b #0x139f3c */
  goto L_139f3c;
L_139ed8:;
  /* 139ed8: ldr w21, [x21] */
  ARC_W_W(c, 21, arc_ld32(ARC_X_R(c, 21)));
  /* 139edc: cbz w21, #0x139efc */
  if ((ARC_W_R(c, 21)) == 0) goto L_139efc;
  /* 139ee0: nop  */
  /* nop: no architectural effect here */
  /* 139ee4: adr x8, #0x159208 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 139ee8: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 139eec: tbz w8, #0, #0x139fd4 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_139fd4;
L_139ef0:;
  /* 139ef0: nop  */
  /* nop: no architectural effect here */
  /* 139ef4: adr x8, #0x156d38 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1404216)));
  /* 139ef8: stp x21, x8, [x20] */
  { const uint64_t _pa = ARC_X_R(c, 20);
    arc_st64(_pa, ARC_X_R(c, 21));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
L_139efc:;
  /* 139efc: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* 139f00: bl #0x144618 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1285892));
  fn1_144618(c);
  /* 139f04: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 139f08: str xzr, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 31));
L_139f0c:;
  /* 139f0c: ldp x20, x19, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 139f10: ldp x22, x21, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 139f14: ldp x24, x23, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 139f18: ldp x26, x25, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* 139f1c: ldp x28, x27, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* 139f20: ldp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 139f24: add sp, sp, #0xa0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(160)));
  /* 139f28: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 139f2c: ret  */
  return;
L_139f30:;
  /* 139f30: ldp x2, x1, [x19, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(16));
    ARC_X_W(c, 2, arc_ld64(_pa));
    ARC_X_W(c, 1, arc_ld64(_pa + 8));
  }
  /* 139f34: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 139f38: bl #0xda588 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1285948));
  fn1_da588(c);
L_139f3c:;
  /* 139f3c: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 139f40: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 139f44: bl #0x13b0f4 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1285960));
  fn1_13b0f4(c);
  /* 139f48: ldurb w8, [x19, #0x20] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(32))));
  /* 139f4c: tbz w8, #0, #0x139f60 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_139f60;
  /* 139f50: ldr x8, [x19, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(32))));
  /* 139f54: ldr x0, [x19, #0x30] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(48))));
  /* 139f58: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 139f5c: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1285984));
  fn1_142608(c);
L_139f60:;
  /* 139f60: ldr x8, [sp, #0x30] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(48))));
  /* 139f64: ldr q0, [sp, #0x20] */
  arc_q_w(c, 0, arc_ld64(((c)->sp + INT64_C(32))), arc_ld64(((c)->sp + INT64_C(32)) + 8));
  /* 139f68: strh wzr, [sp, #0x20] */
  arc_st16(((c)->sp + INT64_C(32)), ARC_W_R(c, 31));
  /* 139f6c: strb w24, [x19, #0x68] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(104)), ARC_W_R(c, 24));
  /* 139f70: stur x8, [x19, #0x30] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(48)), ARC_X_R(c, 8));
  /* 139f74: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 139f78: stur q0, [x19, #0x20] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(32)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(32)) + 8, (c)->q[0].u64[1]);
  /* 139f7c: movi d0, #0x00ffff0000ffff */
  arc_du_w(c, 0, UINT64_C(281470681808895));
  /* 139f80: stp x8, x8, [x19, #0x40] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* 139f84: mov x8, #-0x8000000000000000 */
  ARC_X_W(c, 8, UINT64_C(9223372036854775808));
  /* 139f88: stp xzr, x8, [x19, #0x50] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* 139f8c: ldrb w8, [sp, #8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(8))));
  /* 139f90: strb w23, [x19, #0x69] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(105)), ARC_W_R(c, 23));
  /* 139f94: str d0, [x19, #0x60] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(96)), (c)->q[0].u64[0]);
  /* 139f98: tbz w8, #0, #0x139fac */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_139fac;
  /* 139f9c: ldr x8, [sp, #8] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(8))));
  /* 139fa0: ldr x0, [sp, #0x18] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(24))));
  /* 139fa4: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 139fa8: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1286060));
  fn1_142608(c);
L_139fac:;
  /* 139fac: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 139fb0: b #0x139f0c */
  goto L_139f0c;
L_139fb4:;
  /* 139fb4: nop  */
  /* nop: no architectural effect here */
  /* 139fb8: adr x0, #0x159210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 139fbc: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1286080));
  fn1_1424b8(c);
  /* 139fc0: cbz w0, #0x139de8 */
  if ((ARC_W_R(c, 0)) == 0) goto L_139de8;
  /* 139fc4: nop  */
  /* nop: no architectural effect here */
  /* 139fc8: adr x0, #0x159210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 139fcc: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1286096));
  fn1_1424d0(c);
  /* 139fd0: b #0x139de8 */
  goto L_139de8;
L_139fd4:;
  /* 139fd4: nop  */
  /* nop: no architectural effect here */
  /* 139fd8: adr x0, #0x159208 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 139fdc: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1286112));
  fn1_1424b8(c);
  /* 139fe0: cbz w0, #0x139ef0 */
  if ((ARC_W_R(c, 0)) == 0) goto L_139ef0;
  /* 139fe4: nop  */
  /* nop: no architectural effect here */
  /* 139fe8: adr x0, #0x159208 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 139fec: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1286128));
  fn1_1424d0(c);
  /* 139ff0: b #0x139ef0 */
  goto L_139ef0;
  /* 139ff4: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 139ff8: b #0x13a018 */
  goto L_13a018;
  /* 139ffc: ldrb w8, [sp, #0x20] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(32))));
  /* 13a000: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 13a004: tbz w8, #0, #0x13a018 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13a018;
  /* 13a008: ldr x8, [sp, #0x20] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(32))));
  /* 13a00c: ldr x0, [sp, #0x30] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(48))));
  /* 13a010: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 13a014: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1286168));
  fn1_142608(c);
L_13a018:;
  /* 13a018: ldrb w8, [sp, #8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(8))));
  /* 13a01c: tbz w8, #0, #0x13a030 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13a030;
L_13a020:;
  /* 13a020: ldr x8, [sp, #8] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(8))));
  /* 13a024: ldr x0, [sp, #0x18] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(24))));
  /* 13a028: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 13a02c: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1286192));
  fn1_142608(c);
L_13a030:;
  /* 13a030: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 13a034: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1286200));
  fn1_9cc20(c);
  /* 13a038: ldrb w8, [sp, #8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(8))));
  /* 13a03c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 13a040: tbnz w8, #0, #0x13a020 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_13a020;
  /* 13a044: b #0x13a030 */
  goto L_13a030;
}

void fn1_1407ac(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039240620));
  /* 1407ac: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 1407b0: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* 1407b4: stp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1407b8: add x29, sp, #0x40 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(64)));
  /* 1407bc: adrp x9, #0x50000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(327680)));
  /* 1407c0: add x9, x9, #0xceb */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(3307)));
  /* 1407c4: mov x8, x0 */
  ARC_X_W(c, 8, ARC_X_R(c, 0));
  /* 1407c8: stp x9, x1, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 1));
  }
  /* 1407cc: nop  */
  /* nop: no architectural effect here */
  /* 1407d0: adr x9, #0x156d40 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1404224)));
  /* 1407d4: stp x0, xzr, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 0));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 1407d8: cbz x1, #0x1407f8 */
  if ((ARC_X_R(c, 1)) == 0) goto L_1407f8;
  /* 1407dc: str wzr, [x1] */
  arc_st32(ARC_X_R(c, 1), ARC_W_R(c, 31));
  /* 1407e0: nop  */
  /* nop: no architectural effect here */
  /* 1407e4: adr x10, #0x159210 */
  ARC_X_W(c, 10, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 1407e8: ldarb w10, [x10] */
  ARC_W_W(c, 10, arc_ld8(ARC_X_R(c, 10)));
  /* 1407ec: tbz w10, #0, #0x140848 */
  if (((ARC_W_R(c, 10)) >> 0 & 1) == 0) goto L_140848;
L_1407f0:;
  /* 1407f0: str x9, [x1, #8] */
  arc_st64((ARC_X_R(c, 1) + INT64_C(8)), ARC_X_R(c, 9));
  /* 1407f4: b #0x140808 */
  goto L_140808;
L_1407f8:;
  /* 1407f8: nop  */
  /* nop: no architectural effect here */
  /* 1407fc: adr x10, #0x159210 */
  ARC_X_W(c, 10, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 140800: ldarb w10, [x10] */
  ARC_W_W(c, 10, arc_ld8(ARC_X_R(c, 10)));
  /* 140804: tbz w10, #0, #0x140884 */
  if (((ARC_W_R(c, 10)) >> 0 & 1) == 0) goto L_140884;
L_140808:;
  /* 140808: add x2, sp, #0x10 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(16)));
  /* 14080c: mov w0, #-0x64 */
  ARC_W_W(c, 0, UINT64_C(18446744073709551516));
  /* 140810: mov x1, x8 */
  ARC_X_W(c, 1, ARC_X_R(c, 8));
  /* 140814: str wzr, [sp, #0x10] */
  arc_st32(((c)->sp + INT64_C(16)), ARC_W_R(c, 31));
  /* 140818: str x9, [sp, #0x18] */
  arc_st64(((c)->sp + INT64_C(24)), ARC_X_R(c, 9));
  /* 14081c: bl #0x1408c0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1312800));
  fn1_1408c0(c);
  /* 140820: ldr w8, [sp, #0x10] */
  ARC_W_W(c, 8, arc_ld32(((c)->sp + INT64_C(16))));
  /* 140824: cbz w8, #0x140838 */
  if ((ARC_W_R(c, 8)) == 0) goto L_140838;
  /* 140828: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 14082c: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* 140830: bl #0x13f9d4 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1312820));
  fn1_13f9d4(c);
  /* 140834: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
L_140838:;
  /* 140838: ldp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 14083c: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* 140840: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 140844: ret  */
  return;
L_140848:;
  /* 140848: nop  */
  /* nop: no architectural effect here */
  /* 14084c: adr x0, #0x159210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 140850: stp x1, x8, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 1));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* 140854: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1312856));
  fn1_1424b8(c);
  /* 140858: ldp x1, x8, [sp] */
  { const uint64_t _pa = (c)->sp;
    ARC_X_W(c, 1, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* 14085c: nop  */
  /* nop: no architectural effect here */
  /* 140860: adr x9, #0x156d40 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1404224)));
  /* 140864: cbz w0, #0x1407f0 */
  if ((ARC_W_R(c, 0)) == 0) goto L_1407f0;
  /* 140868: nop  */
  /* nop: no architectural effect here */
  /* 14086c: adr x0, #0x159210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 140870: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1312884));
  fn1_1424d0(c);
  /* 140874: ldp x1, x8, [sp] */
  { const uint64_t _pa = (c)->sp;
    ARC_X_W(c, 1, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* 140878: nop  */
  /* nop: no architectural effect here */
  /* 14087c: adr x9, #0x156d40 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1404224)));
  /* 140880: b #0x1407f0 */
  goto L_1407f0;
L_140884:;
  /* 140884: nop  */
  /* nop: no architectural effect here */
  /* 140888: adr x0, #0x159210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 14088c: str x8, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 8));
  /* 140890: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1312916));
  fn1_1424b8(c);
  /* 140894: ldr x8, [sp, #8] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(8))));
  /* 140898: nop  */
  /* nop: no architectural effect here */
  /* 14089c: adr x9, #0x156d40 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1404224)));
  /* 1408a0: cbz w0, #0x140808 */
  if ((ARC_W_R(c, 0)) == 0) goto L_140808;
  /* 1408a4: nop  */
  /* nop: no architectural effect here */
  /* 1408a8: adr x0, #0x159210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 1408ac: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1312944));
  fn1_1424d0(c);
  /* 1408b0: ldr x8, [sp, #8] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(8))));
  /* 1408b4: nop  */
  /* nop: no architectural effect here */
  /* 1408b8: adr x9, #0x156d40 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1404224)));
  /* 1408bc: b #0x140808 */
  goto L_140808;
}

void fn1_142818(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039248920));
  /* 142818: adrp x16, #0x151000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 14281c: ldr x17, [x16, #0xfe8] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(4072))));
  /* 142820: add x16, x16, #0xfe8 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(4072)));
  /* 142824: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 142828: nop  */
  /* nop: no architectural effect here */
  /* 14282c: nop  */
  /* nop: no architectural effect here */
}

void fn1_142e18(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039250456));
  /* 142e18: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 142e1c: ldr x17, [x16, #0x1e8] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(488))));
  /* 142e20: add x16, x16, #0x1e8 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(488)));
  /* 142e24: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 142e28: nop  */
  /* nop: no architectural effect here */
  /* 142e2c: nop  */
  /* nop: no architectural effect here */
}

void fn1_143418(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039251992));
  /* 143418: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 14341c: ldr x17, [x16, #0x3e8] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(1000))));
  /* 143420: add x16, x16, #0x3e8 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(1000)));
  /* 143424: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 143428: nop  */
  /* nop: no architectural effect here */
  /* 14342c: nop  */
  /* nop: no architectural effect here */
}

void fn1_143a18(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039253528));
  /* 143a18: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 143a1c: ldr x17, [x16, #0x5e8] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(1512))));
  /* 143a20: add x16, x16, #0x5e8 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(1512)));
  /* 143a24: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 143a28: nop  */
  /* nop: no architectural effect here */
  /* 143a2c: nop  */
  /* nop: no architectural effect here */
}

void fn1_144018(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039255064));
  /* 144018: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 14401c: ldr x17, [x16, #0x7e8] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(2024))));
  /* 144020: add x16, x16, #0x7e8 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(2024)));
  /* 144024: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 144028: nop  */
  /* nop: no architectural effect here */
  /* 14402c: nop  */
  /* nop: no architectural effect here */
}

void fn1_144618(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039256600));
  /* 144618: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 14461c: ldr x17, [x16, #0x9e8] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(2536))));
  /* 144620: add x16, x16, #0x9e8 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(2536)));
  /* 144624: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 144628: nop  */
  /* nop: no architectural effect here */
  /* 14462c: nop  */
  /* nop: no architectural effect here */
}

