#include "lifted.h"

void fn1_a08e4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038585572));
  /* a08e4: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* a08e8: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* a08ec: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* a08f0: mov w0, #8 */
  ARC_W_W(c, 0, UINT64_C(8));
  /* a08f4: bl #0x142410 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(657656));
  fn1_142410(c);
  /* a08f8: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* a08fc: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* a0900: adrp x2, #0x151000 */
  ARC_X_W(c, 2, (arc_image_bases[1] + UINT64_C(1380352)));
  /* a0904: ldr x8, [x8, #0x990] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2448))));
  /* a0908: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* a090c: str x8, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* a0910: ldr x1, [x1, #0x8a0] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(2208))));
  /* a0914: ldr x2, [x2, #0x888] */
  ARC_X_W(c, 2, arc_ld64((ARC_X_R(c, 2) + INT64_C(2184))));
  /* a0918: bl #0x142440 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(657692));
  fn1_142440(c);
}

void fn1_a2280(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038592128));
  /* a2280: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* a2284: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* a2288: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* a228c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* a2290: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* a2294: bl #0x1426c8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(664216));
  fn1_1426c8(c);
  /* a2298: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a229c: mov w1, #0x10 */
  ARC_W_W(c, 1, UINT64_C(16));
  /* a22a0: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* a22a4: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* a22a8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* a22ac: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_a7bd8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038615000));
  /* a7bd8: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* a7bdc: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* a7be0: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* a7be4: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* a7be8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* a7bec: ldr x21, [x0, #0x1330] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 0) + INT64_C(4912))));
  /* a7bf0: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* a7bf4: ldr x8, [x21, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 21) + INT64_C(8))));
  /* a7bf8: sub x9, x8, #0xfc0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4032)));
  /* a7bfc: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* a7c00: b.hi #0xa7c24 */
  if (ARC_COND(c, 8)) goto L_a7c24;
  /* a7c04: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* a7c08: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* a7c0c: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(687120));
  fn1_1428a8(c);
  /* a7c10: cbz x0, #0xa7c84 */
  if ((ARC_X_R(c, 0)) == 0) goto L_a7c84;
  /* a7c14: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* a7c18: stp x21, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 21));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* a7c1c: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* a7c20: str x0, [x20, #0x1330] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(4912)), ARC_X_R(c, 0));
L_a7c24:;
  /* a7c24: add x9, x8, #0x30 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(48)));
  /* a7c28: add x0, x21, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) + ARC_X_R(c, 8)));
  /* a7c2c: adrp x8, #0x149000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1347584)));
  /* a7c30: add x8, x8, #0xb10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2832)));
  /* a7c34: str x9, [x21, #8] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(8)), ARC_X_R(c, 9));
  /* a7c38: mov w10, #0x540 */
  ARC_W_W(c, 10, UINT64_C(1344));
  /* a7c3c: str x8, [x0, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* a7c40: ldurh w9, [x0, #9] */
  ARC_W_W(c, 9, arc_ld16((ARC_X_R(c, 0) + INT64_C(9))));
  /* a7c44: mov w8, #0x15 */
  ARC_W_W(c, 8, UINT64_C(21));
  /* a7c48: mov w11, #0xb */
  ARC_W_W(c, 11, UINT64_C(11));
  /* a7c4c: strb w8, [x0, #8] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 8));
  /* a7c50: adrp x8, #0x50000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(327680)));
  /* a7c54: add x8, x8, #0xea7 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3751)));
  /* a7c58: and w9, w9, #0xf000 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) & UINT64_C(61440)));
  /* a7c5c: str x8, [x0, #0x10] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(16)), ARC_X_R(c, 8));
  /* a7c60: orr w8, w9, w10 */
  ARC_W_W(c, 8, (ARC_W_R(c, 9) | ARC_W_R(c, 10)));
  /* a7c64: ldr x9, [x19] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 19)));
  /* a7c68: sturh w8, [x0, #9] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(9)), ARC_W_R(c, 8));
  /* a7c6c: stp x11, x9, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    arc_st64(_pa, ARC_X_R(c, 11));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* a7c70: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* a7c74: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* a7c78: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* a7c7c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* a7c80: ret  */
  return;
L_a7c84:;
  /* a7c84: bl #0x142488 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(687240));
  fn1_142488(c);
}

void fn1_ad7d0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038638544));
  /* ad7d0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* ad7d4: sub sp, sp, #0x90 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(144)));
  /* ad7d8: stp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* ad7dc: stp x28, x27, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* ad7e0: stp x26, x25, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* ad7e4: stp x24, x23, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* ad7e8: stp x22, x21, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* ad7ec: stp x20, x19, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* ad7f0: add x29, sp, #0x30 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(48)));
  /* ad7f4: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* ad7f8: bl #0xa52b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(710652));
  fn1_a52b0(c);
  /* ad7fc: cbz x0, #0xadaf8 */
  if ((ARC_X_R(c, 0)) == 0) goto L_adaf8;
  /* ad800: stur x0, [x29, #-8] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-8)), ARC_X_R(c, 0));
  /* ad804: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* ad808: bl #0xaa69c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(710668));
  fn1_aa69c(c);
  /* ad80c: cbz x0, #0xadaf8 */
  if ((ARC_X_R(c, 0)) == 0) goto L_adaf8;
  /* ad810: ldp x24, x8, [x20] */
  { const uint64_t _pa = ARC_X_R(c, 20);
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* ad814: cmp x24, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 24), ARC_X_R(c, 8));
  /* ad818: mov x9, x24 */
  ARC_X_W(c, 9, ARC_X_R(c, 24));
  /* ad81c: b.eq #0xad838 */
  if (ARC_COND(c, 0)) goto L_ad838;
  /* ad820: ldrb w9, [x24] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 24)));
  /* ad824: cmp w9, #0x6e */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(110));
  /* ad828: mov x9, x24 */
  ARC_X_W(c, 9, ARC_X_R(c, 24));
  /* ad82c: b.ne #0xad838 */
  if (ARC_COND(c, 1)) goto L_ad838;
  /* ad830: add x9, x24, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 24) + UINT64_C(1)));
  /* ad834: str x9, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 9));
L_ad838:;
  /* ad838: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* ad83c: b.eq #0xad850 */
  if (ARC_COND(c, 0)) goto L_ad850;
  /* ad840: ldrb w10, [x9] */
  ARC_W_W(c, 10, arc_ld8(ARC_X_R(c, 9)));
  /* ad844: sub w10, w10, #0x3a */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) - UINT64_C(58)));
  /* ad848: cmn w10, #0xa */
  (void)arc_add32(c, ARC_W_R(c, 10), UINT64_C(10), 0);
  /* ad84c: b.hs #0xad85c */
  if (ARC_COND(c, 2)) goto L_ad85c;
L_ad850:;
  /* ad850: mov x24, xzr */
  ARC_X_W(c, 24, ARC_X_R(c, 31));
  /* ad854: mov x26, xzr */
  ARC_X_W(c, 26, ARC_X_R(c, 31));
  /* ad858: b #0xad88c */
  goto L_ad88c;
L_ad85c:;
  /* ad85c: ldrb w10, [x9] */
  ARC_W_W(c, 10, arc_ld8(ARC_X_R(c, 9)));
  /* ad860: sub w10, w10, #0x3a */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) - UINT64_C(58)));
  /* ad864: cmn w10, #0xa */
  (void)arc_add32(c, ARC_W_R(c, 10), UINT64_C(10), 0);
  /* ad868: b.lo #0xad884 */
  if (ARC_COND(c, 3)) goto L_ad884;
  /* ad86c: add x9, x9, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(1)));
  /* ad870: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* ad874: str x9, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 9));
  /* ad878: b.ne #0xad85c */
  if (ARC_COND(c, 1)) goto L_ad85c;
  /* ad87c: mov x10, x8 */
  ARC_X_W(c, 10, ARC_X_R(c, 8));
  /* ad880: b #0xad888 */
  goto L_ad888;
L_ad884:;
  /* ad884: mov x10, x9 */
  ARC_X_W(c, 10, ARC_X_R(c, 9));
L_ad888:;
  /* ad888: sub x26, x10, x24 */
  ARC_X_W(c, 26, (ARC_X_R(c, 10) - ARC_X_R(c, 24)));
L_ad88c:;
  /* ad88c: ldp x12, x11, [x20, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(16));
    ARC_X_W(c, 12, arc_ld64(_pa));
    ARC_X_W(c, 11, arc_ld64(_pa + 8));
  }
  /* ad890: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* ad894: b.eq #0xada10 */
  if (ARC_COND(c, 0)) goto L_ada10;
  /* ad898: str x26, [sp, #0x18] */
  arc_st64(((c)->sp + INT64_C(24)), ARC_X_R(c, 26));
  /* ad89c: adrp x26, #0x149000 */
  ARC_X_W(c, 26, (arc_image_bases[1] + UINT64_C(1347584)));
  /* ad8a0: add x26, x26, #0xc10 */
  ARC_X_W(c, 26, (ARC_X_R(c, 26) + UINT64_C(3088)));
  /* ad8a4: add x27, x20, #0x28 */
  ARC_X_W(c, 27, (ARC_X_R(c, 20) + UINT64_C(40)));
  /* ad8a8: mov w28, #8 */
  ARC_W_W(c, 28, UINT64_C(8));
  /* ad8ac: mov w25, #0x540 */
  ARC_W_W(c, 25, UINT64_C(1344));
  /* ad8b0: stp x12, x11, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 12));
    arc_st64(_pa + 8, ARC_X_R(c, 11));
  }
  /* ad8b4: stur x0, [x29, #-0x10] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-16)), ARC_X_R(c, 0));
  /* ad8b8: b #0xad914 */
  goto L_ad914;
L_ad8bc:;
  /* ad8bc: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* ad8c0: stp x19, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 19));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* ad8c4: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* ad8c8: str x0, [x20, #0x1330] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(4912)), ARC_X_R(c, 0));
L_ad8cc:;
  /* ad8cc: add x9, x8, #0x20 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(32)));
  /* ad8d0: str x9, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 9));
  /* ad8d4: add x19, x19, x8 */
  ARC_X_W(c, 19, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* ad8d8: str x26, [x19, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 19) + INT64_C(16));
    ARC_X_W(c, 19, ARC_X_R(c, 19) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 26));
  }
  /* ad8dc: ldurh w8, [x19, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 19) + INT64_C(9))));
  /* ad8e0: strb w28, [x19, #8] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(8)), ARC_W_R(c, 28));
  /* ad8e4: and w8, w8, #0xf000 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(61440)));
  /* ad8e8: stp x21, x22, [x19, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 21));
    arc_st64(_pa + 8, ARC_X_R(c, 22));
  }
  /* ad8ec: orr w8, w8, w25 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | ARC_W_R(c, 25)));
  /* ad8f0: sturh w8, [x19, #9] */
  arc_st16((ARC_X_R(c, 19) + INT64_C(9)), ARC_W_R(c, 8));
  /* ad8f4: ldp x23, x8, [x20, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(24));
    ARC_X_W(c, 23, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* ad8f8: cmp x23, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 8));
  /* ad8fc: b.eq #0xad94c */
  if (ARC_COND(c, 0)) goto L_ad94c;
L_ad900:;
  /* ad900: ldp x9, x8, [x20] */
  { const uint64_t _pa = ARC_X_R(c, 20);
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* ad904: str x19, [x23], #8 */
  { const uint64_t _a = ARC_X_R(c, 23);
    ARC_X_W(c, 23, ARC_X_R(c, 23) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 19));
  }
  /* ad908: str x23, [x20, #0x18] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(24)), ARC_X_R(c, 23));
  /* ad90c: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* ad910: b.eq #0xadaf4 */
  if (ARC_COND(c, 0)) goto L_adaf4;
L_ad914:;
  /* ad914: ldrb w10, [x9] */
  ARC_W_W(c, 10, arc_ld8(ARC_X_R(c, 9)));
  /* ad918: cmp w10, #0x5f */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(95));
  /* ad91c: b.ne #0xada04 */
  if (ARC_COND(c, 1)) goto L_ada04;
  /* ad920: add x21, x9, #1 */
  ARC_X_W(c, 21, (ARC_X_R(c, 9) + UINT64_C(1)));
  /* ad924: cmp x8, x21 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 21));
  /* ad928: str x21, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 21));
  /* ad92c: b.eq #0xad940 */
  if (ARC_COND(c, 0)) goto L_ad940;
  /* ad930: ldrb w9, [x21] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 21)));
  /* ad934: sub w9, w9, #0x3a */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) - UINT64_C(58)));
  /* ad938: cmn w9, #0xa */
  (void)arc_add32(c, ARC_W_R(c, 9), UINT64_C(10), 0);
  /* ad93c: b.hs #0xad974 */
  if (ARC_COND(c, 2)) goto L_ad974;
L_ad940:;
  /* ad940: mov x21, xzr */
  ARC_X_W(c, 21, ARC_X_R(c, 31));
  /* ad944: mov x22, xzr */
  ARC_X_W(c, 22, ARC_X_R(c, 31));
  /* ad948: b #0xad9a0 */
  goto L_ad9a0;
L_ad94c:;
  /* ad94c: ldr x22, [x20, #0x10] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 20) + INT64_C(16))));
  /* ad950: sub x21, x23, x22 */
  ARC_X_W(c, 21, (ARC_X_R(c, 23) - ARC_X_R(c, 22)));
  /* ad954: cmp x22, x27 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 27));
  /* ad958: lsl x1, x21, #1 */
  ARC_X_W(c, 1, ((uint64_t)(ARC_X_R(c, 21)) << ((UINT64_C(1)) & 63)));
  /* ad95c: b.eq #0xad9c4 */
  if (ARC_COND(c, 0)) goto L_ad9c4;
  /* ad960: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* ad964: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(711016));
  fn1_142878(c);
  /* ad968: str x0, [x20, #0x10] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(16)), ARC_X_R(c, 0));
  /* ad96c: cbnz x0, #0xad9f0 */
  if ((ARC_X_R(c, 0)) != 0) goto L_ad9f0;
  /* ad970: b #0xadb20 */
  goto L_adb20;
L_ad974:;
  /* ad974: mov x9, x21 */
  ARC_X_W(c, 9, ARC_X_R(c, 21));
L_ad978:;
  /* ad978: ldrb w10, [x9] */
  ARC_W_W(c, 10, arc_ld8(ARC_X_R(c, 9)));
  /* ad97c: sub w10, w10, #0x3a */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) - UINT64_C(58)));
  /* ad980: cmn w10, #0xa */
  (void)arc_add32(c, ARC_W_R(c, 10), UINT64_C(10), 0);
  /* ad984: b.lo #0xad99c */
  if (ARC_COND(c, 3)) goto L_ad99c;
  /* ad988: add x9, x9, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(1)));
  /* ad98c: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* ad990: str x9, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 9));
  /* ad994: b.ne #0xad978 */
  if (ARC_COND(c, 1)) goto L_ad978;
  /* ad998: mov x9, x8 */
  ARC_X_W(c, 9, ARC_X_R(c, 8));
L_ad99c:;
  /* ad99c: sub x22, x9, x21 */
  ARC_X_W(c, 22, (ARC_X_R(c, 9) - ARC_X_R(c, 21)));
L_ad9a0:;
  /* ad9a0: ldr x19, [x20, #0x1330] */
  ARC_X_W(c, 19, arc_ld64((ARC_X_R(c, 20) + INT64_C(4912))));
  /* ad9a4: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* ad9a8: sub x9, x8, #0xfd0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4048)));
  /* ad9ac: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* ad9b0: b.hi #0xad8cc */
  if (ARC_COND(c, 8)) goto L_ad8cc;
  /* ad9b4: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* ad9b8: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(711100));
  fn1_1428a8(c);
  /* ad9bc: cbnz x0, #0xad8bc */
  if ((ARC_X_R(c, 0)) != 0) goto L_ad8bc;
  /* ad9c0: b #0xadb1c */
  goto L_adb1c;
L_ad9c4:;
  /* ad9c4: mov x0, x1 */
  ARC_X_W(c, 0, ARC_X_R(c, 1));
  /* ad9c8: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(711116));
  fn1_1428a8(c);
  /* ad9cc: cbz x0, #0xadb24 */
  if ((ARC_X_R(c, 0)) == 0) goto L_adb24;
  /* ad9d0: cmp x23, x27 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 27));
  /* ad9d4: b.eq #0xad9ec */
  if (ARC_COND(c, 0)) goto L_ad9ec;
  /* ad9d8: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* ad9dc: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* ad9e0: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* ad9e4: bl #0x1449f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(711144));
  fn1_1449f0(c);
  /* ad9e8: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
L_ad9ec:;
  /* ad9ec: str x0, [x20, #0x10] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(16)), ARC_X_R(c, 0));
L_ad9f0:;
  /* ad9f0: asr x8, x21, #2 */
  ARC_X_W(c, 8, ((uint64_t)((int64_t)(ARC_X_R(c, 21)) >> ((UINT64_C(2)) & 63))));
  /* ad9f4: add x23, x0, x21 */
  ARC_X_W(c, 23, (ARC_X_R(c, 0) + ARC_X_R(c, 21)));
  /* ad9f8: add x8, x0, x8, lsl #3 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + ((uint64_t)(ARC_X_R(c, 8)) << 3)));
  /* ad9fc: str x8, [x20, #0x20] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(32)), ARC_X_R(c, 8));
  /* ada00: b #0xad900 */
  goto L_ad900;
L_ada04:;
  /* ada04: ldp x11, x26, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 11, arc_ld64(_pa));
    ARC_X_W(c, 26, arc_ld64(_pa + 8));
  }
  /* ada08: ldur x0, [x29, #-0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-16))));
  /* ada0c: ldr x12, [sp, #8] */
  ARC_X_W(c, 12, arc_ld64(((c)->sp + INT64_C(8))));
L_ada10:;
  /* ada10: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* ada14: b.eq #0xada3c */
  if (ARC_COND(c, 0)) goto L_ada3c;
  /* ada18: ldrb w10, [x9] */
  ARC_W_W(c, 10, arc_ld8(ARC_X_R(c, 9)));
  /* ada1c: cmp w10, #0x70 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(112));
  /* ada20: b.ne #0xada3c */
  if (ARC_COND(c, 1)) goto L_ada3c;
  /* ada24: add x9, x9, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(1)));
  /* ada28: mov w23, #1 */
  ARC_W_W(c, 23, UINT64_C(1));
  /* ada2c: str x9, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 9));
  /* ada30: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* ada34: b.ne #0xada48 */
  if (ARC_COND(c, 1)) goto L_ada48;
  /* ada38: b #0xadaf4 */
  goto L_adaf4;
L_ada3c:;
  /* ada3c: mov w23, wzr */
  ARC_W_W(c, 23, ARC_W_R(c, 31));
  /* ada40: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* ada44: b.eq #0xadaf4 */
  if (ARC_COND(c, 0)) goto L_adaf4;
L_ada48:;
  /* ada48: ldrb w8, [x9] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 9)));
  /* ada4c: cmp w8, #0x45 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(69));
  /* ada50: b.ne #0xadaf4 */
  if (ARC_COND(c, 1)) goto L_adaf4;
  /* ada54: sub x8, x11, x12 */
  ARC_X_W(c, 8, (ARC_X_R(c, 11) - ARC_X_R(c, 12)));
  /* ada58: mov x25, x0 */
  ARC_X_W(c, 25, ARC_X_R(c, 0));
  /* ada5c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* ada60: asr x1, x8, #3 */
  ARC_X_W(c, 1, ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(3)) & 63))));
  /* ada64: add x8, x9, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) + UINT64_C(1)));
  /* ada68: str x8, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 8));
  /* ada6c: bl #0xa77e4 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(711280));
  fn1_a77e4(c);
  /* ada70: ldr x19, [x20, #0x1330] */
  ARC_X_W(c, 19, arc_ld64((ARC_X_R(c, 20) + INT64_C(4912))));
  /* ada74: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* ada78: mov x22, x1 */
  ARC_X_W(c, 22, ARC_X_R(c, 1));
  /* ada7c: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* ada80: sub x9, x8, #0xfa0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4000)));
  /* ada84: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* ada88: b.hi #0xadaa8 */
  if (ARC_COND(c, 8)) goto L_adaa8;
  /* ada8c: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* ada90: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(711316));
  fn1_1428a8(c);
  /* ada94: cbz x0, #0xadb1c */
  if ((ARC_X_R(c, 0)) == 0) goto L_adb1c;
  /* ada98: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* ada9c: stp x19, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 19));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* adaa0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* adaa4: str x0, [x20, #0x1330] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(4912)), ARC_X_R(c, 0));
L_adaa8:;
  /* adaa8: add x10, x8, #0x50 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(80)));
  /* adaac: add x0, x19, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* adab0: adrp x8, #0x14b000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1355776)));
  /* adab4: add x8, x8, #0x3b0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(944)));
  /* adab8: str x10, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 10));
  /* adabc: mov w10, #0x3b */
  ARC_W_W(c, 10, UINT64_C(59));
  /* adac0: str x8, [x0, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* adac4: ldurh w8, [x0, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 0) + INT64_C(9))));
  /* adac8: ldur x9, [x29, #-8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 29) + INT64_C(-8))));
  /* adacc: strb w10, [x0, #8] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 10));
  /* adad0: mov w10, #0x540 */
  ARC_W_W(c, 10, UINT64_C(1344));
  /* adad4: and w8, w8, #0xf000 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(61440)));
  /* adad8: stp x24, x26, [x0, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 26));
  }
  /* adadc: orr w8, w8, w10 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | ARC_W_R(c, 10)));
  /* adae0: stp x9, x25, [x0, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* adae4: sturh w8, [x0, #9] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(9)), ARC_W_R(c, 8));
  /* adae8: stp x21, x22, [x0, #0x30] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 21));
    arc_st64(_pa + 8, ARC_X_R(c, 22));
  }
  /* adaec: strb w23, [x0, #0x40] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(64)), ARC_W_R(c, 23));
  /* adaf0: b #0xadaf8 */
  goto L_adaf8;
L_adaf4:;
  /* adaf4: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
L_adaf8:;
  /* adaf8: ldp x20, x19, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* adafc: ldp x22, x21, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* adb00: ldp x24, x23, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* adb04: ldp x26, x25, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* adb08: ldp x28, x27, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* adb0c: ldp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* adb10: add sp, sp, #0x90 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(144)));
  /* adb14: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* adb18: ret  */
  return;
L_adb1c:;
  /* adb1c: bl #0x142488 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(711456));
  fn1_142488(c);
L_adb20:;
  /* adb20: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(711460));
  fn1_1427b8(c);
L_adb24:;
  /* adb24: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(711464));
  fn1_1427b8(c);
}

void fn1_b3364(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038661988));
  /* b3364: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* b3368: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b336c: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* b3370: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* b3374: ldp x8, x9, [x1, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 1) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* b3378: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* b337c: ldr x0, [x1] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 1)));
  /* b3380: add x10, x8, #9 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(9)));
  /* b3384: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* b3388: b.ls #0xb33b0 */
  if (ARC_COND(c, 9)) goto L_b33b0;
  /* b338c: lsl x9, x9, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) << ((UINT64_C(1)) & 63)));
  /* b3390: add x8, x8, #0x3e9 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1001)));
  /* b3394: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* b3398: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* b339c: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b33a0: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(734116));
  fn1_142878(c);
  /* b33a4: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b33a8: cbz x0, #0xb33e8 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b33e8;
  /* b33ac: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
L_b33b0:;
  /* b33b0: adrp x9, #0x4f000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(323584)));
  /* b33b4: add x9, x9, #0x98d */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(2445)));
  /* b33b8: add x8, x0, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* b33bc: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* b33c0: mov w10, #0x20 */
  ARC_W_W(c, 10, UINT64_C(32));
  /* b33c4: strb w10, [x8, #8] */
  arc_st8((ARC_X_R(c, 8) + INT64_C(8)), ARC_W_R(c, 10));
  /* b33c8: str x9, [x8] */
  arc_st64(ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* b33cc: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b33d0: add x8, x8, #9 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(9)));
  /* b33d4: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
  /* b33d8: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* b33dc: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b33e0: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* b33e4: ret  */
  return;
L_b33e8:;
  /* b33e8: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(734188));
  fn1_1427b8(c);
}

void fn1_b6e00(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038676992));
  /* b6e00: bti c */
  /* bti: no architectural effect here */
  /* b6e04: mov w1, #0x18 */
  ARC_W_W(c, 1, UINT64_C(24));
  /* b6e08: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_b9840(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038687808));
  /* b9840: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* b9844: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b9848: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* b984c: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* b9850: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* b9854: ldr x21, [x0, #0x1330] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 0) + INT64_C(4912))));
  /* b9858: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* b985c: ldr x8, [x21, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 21) + INT64_C(8))));
  /* b9860: sub x9, x8, #0xfd0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4048)));
  /* b9864: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* b9868: b.hi #0xb988c */
  if (ARC_COND(c, 8)) goto L_b988c;
  /* b986c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* b9870: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* b9874: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(759928));
  fn1_1428a8(c);
  /* b9878: cbz x0, #0xb98e8 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b98e8;
  /* b987c: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* b9880: stp x21, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 21));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* b9884: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* b9888: str x0, [x20, #0x1330] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(4912)), ARC_X_R(c, 0));
L_b988c:;
  /* b988c: add x9, x8, #0x20 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(32)));
  /* b9890: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* b9894: add x20, x21, x8 */
  ARC_X_W(c, 20, (ARC_X_R(c, 21) + ARC_X_R(c, 8)));
  /* b9898: str x9, [x21, #8] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(8)), ARC_X_R(c, 9));
  /* b989c: bl #0x142860 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(759968));
  fn1_142860(c);
  /* b98a0: adrp x9, #0x149000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1347584)));
  /* b98a4: add x9, x9, #0xc10 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(3088)));
  /* b98a8: mov w11, #0x540 */
  ARC_W_W(c, 11, UINT64_C(1344));
  /* b98ac: str x9, [x20, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 20) + INT64_C(16));
    ARC_X_W(c, 20, ARC_X_R(c, 20) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 9));
  }
  /* b98b0: ldurh w9, [x20, #9] */
  ARC_W_W(c, 9, arc_ld16((ARC_X_R(c, 20) + INT64_C(9))));
  /* b98b4: mov x8, x0 */
  ARC_X_W(c, 8, ARC_X_R(c, 0));
  /* b98b8: mov w10, #8 */
  ARC_W_W(c, 10, UINT64_C(8));
  /* b98bc: and w9, w9, #0xf000 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) & UINT64_C(61440)));
  /* b98c0: strb w10, [x20, #8] */
  arc_st8((ARC_X_R(c, 20) + INT64_C(8)), ARC_W_R(c, 10));
  /* b98c4: orr w9, w9, w11 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | ARC_W_R(c, 11)));
  /* b98c8: stp x19, x8, [x20, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 19));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* b98cc: sturh w9, [x20, #9] */
  arc_st16((ARC_X_R(c, 20) + INT64_C(9)), ARC_W_R(c, 9));
  /* b98d0: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* b98d4: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* b98d8: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* b98dc: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b98e0: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* b98e4: ret  */
  return;
L_b98e8:;
  /* b98e8: bl #0x142488 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(760044));
  fn1_142488(c);
}

void fn1_bcd04(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038701316));
  /* bcd04: bti c */
  /* bti: no architectural effect here */
  /* bcd08: mov w1, #0x20 */
  ARC_W_W(c, 1, UINT64_C(32));
  /* bcd0c: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_c1cb8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038721720));
  /* c1cb8: bti c */
  /* bti: no architectural effect here */
  /* c1cbc: sub x9, x1, x0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 1) - ARC_X_R(c, 0)));
  /* c1cc0: mov w8, #0x7e */
  ARC_W_W(c, 8, UINT64_C(126));
  /* c1cc4: mov w3, #1 */
  ARC_W_W(c, 3, UINT64_C(1));
  /* c1cc8: clz x9, x9 */
  ARC_X_W(c, 9, arc_clz64(ARC_X_R(c, 9)));
  /* c1ccc: sub x2, x8, x9, lsl #1 */
  ARC_X_W(c, 2, (ARC_X_R(c, 8) - ((uint64_t)(ARC_X_R(c, 9)) << 1)));
  /* c1cd0: b #0xc1cd4 */
  fn1_c1cd4(c); return;
}

void fn1_d6930(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038806832));
  /* d6930: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* d6934: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* d6938: stp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* d693c: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* d6940: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* d6944: mov w19, w3 */
  ARC_W_W(c, 19, ARC_W_R(c, 3));
  /* d6948: mov w20, w2 */
  ARC_W_W(c, 20, ARC_W_R(c, 2));
  /* d694c: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* d6950: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* d6954: bl #0xd2ad4 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(878936));
  fn1_d2ad4(c);
  /* d6958: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* d695c: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* d6960: mov w2, w20 */
  ARC_W_W(c, 2, ARC_W_R(c, 20));
  /* d6964: mov w3, w19 */
  ARC_W_W(c, 3, ARC_W_R(c, 19));
  /* d6968: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* d696c: ldp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* d6970: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* d6974: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* d6978: b #0xd6324 */
  fn1_d6324(c); return;
}

void fn1_da18c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038821260));
  /* da18c: bti c */
  /* bti: no architectural effect here */
  /* da190: ldrb w10, [x0, #0x20] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 0) + INT64_C(32))));
  /* da194: ldp x9, x11, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 11, arc_ld64(_pa + 8));
  }
  /* da198: sub w8, w10, #2 */
  ARC_W_W(c, 8, (ARC_W_R(c, 10) - UINT64_C(2)));
  /* da19c: cmp w8, #3 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(3));
  /* da1a0: b.hs #0xda1b0 */
  if (ARC_COND(c, 2)) goto L_da1b0;
  /* da1a4: ldp x8, x12, [x0, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 12, arc_ld64(_pa + 8));
  }
  /* da1a8: add x8, x8, x12 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + ARC_X_R(c, 12)));
  /* da1ac: b #0xda1c0 */
  goto L_da1c0;
L_da1b0:;
  /* da1b0: sub w8, w10, #5 */
  ARC_W_W(c, 8, (ARC_W_R(c, 10) - UINT64_C(5)));
  /* da1b4: cmp w8, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(2));
  /* da1b8: b.lo #0xda214 */
  if (ARC_COND(c, 3)) goto L_da214;
  /* da1bc: mov x8, x9 */
  ARC_X_W(c, 8, ARC_X_R(c, 9));
L_da1c0:;
  /* da1c0: add x9, x9, x11 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + ARC_X_R(c, 11)));
  /* da1c4: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* da1c8: b.eq #0xda214 */
  if (ARC_COND(c, 0)) goto L_da214;
  /* da1cc: sub w11, w10, #1 */
  ARC_W_W(c, 11, (ARC_W_R(c, 10) - UINT64_C(1)));
  /* da1d0: cmp w11, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(2));
  /* da1d4: b.hs #0xda224 */
  if (ARC_COND(c, 2)) goto L_da224;
  /* da1d8: cbz x8, #0xda2c0 */
  if ((ARC_X_R(c, 8)) == 0) goto L_da2c0;
  /* da1dc: ldrb w11, [x8] */
  ARC_W_W(c, 11, arc_ld8(ARC_X_R(c, 8)));
  /* da1e0: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* da1e4: mov w10, #1 */
  ARC_W_W(c, 10, UINT64_C(1));
  /* da1e8: cneg x10, x10, hs */
  ARC_X_W(c, 10, (ARC_COND(c, 2) ? ((uint64_t)0 - (uint64_t)(ARC_X_R(c, 10))) : (ARC_X_R(c, 10))));
  /* da1ec: cmp w11, #0x2f */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(47));
  /* da1f0: b.ne #0xda2e0 */
  if (ARC_COND(c, 1)) goto L_da2e0;
  /* da1f4: mov x11, x8 */
  ARC_X_W(c, 11, ARC_X_R(c, 8));
L_da1f8:;
  /* da1f8: add x11, x11, x10 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) + ARC_X_R(c, 10)));
  /* da1fc: cmp x11, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 9));
  /* da200: b.eq #0xda300 */
  if (ARC_COND(c, 0)) goto L_da300;
  /* da204: ldrb w12, [x11] */
  ARC_W_W(c, 12, arc_ld8(ARC_X_R(c, 11)));
  /* da208: cmp w12, #0x2f */
  (void)arc_sub32(c, ARC_W_R(c, 12), UINT64_C(47));
  /* da20c: b.eq #0xda1f8 */
  if (ARC_COND(c, 0)) goto L_da1f8;
  /* da210: b #0xda304 */
  goto L_da304;
L_da214:;
  /* da214: mov w8, #6 */
  ARC_W_W(c, 8, UINT64_C(6));
  /* da218: stp xzr, xzr, [x0, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* da21c: strb w8, [x0, #0x20] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(32)), ARC_W_R(c, 8));
  /* da220: ret  */
  return;
L_da224:;
  /* da224: cmp w10, #3 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(3));
  /* da228: b.ne #0xda254 */
  if (ARC_COND(c, 1)) goto L_da254;
  /* da22c: cbz x8, #0xda23c */
  if ((ARC_X_R(c, 8)) == 0) goto L_da23c;
  /* da230: ldrb w10, [x8] */
  ARC_W_W(c, 10, arc_ld8(ARC_X_R(c, 8)));
  /* da234: cmp w10, #0x2f */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(47));
  /* da238: b.ne #0xda324 */
  if (ARC_COND(c, 1)) goto L_da324;
L_da23c:;
  /* da23c: mov x10, xzr */
  ARC_X_W(c, 10, ARC_X_R(c, 31));
L_da240:;
  /* da240: mov w9, #4 */
  ARC_W_W(c, 9, UINT64_C(4));
  /* da244: strb w9, [x0, #0x20] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(32)), ARC_W_R(c, 9));
  /* da248: sub x9, x10, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 10) - ARC_X_R(c, 8)));
  /* da24c: stp x8, x9, [x0, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* da250: ret  */
  return;
L_da254:;
  /* da254: cbz x8, #0xda2c8 */
  if ((ARC_X_R(c, 8)) == 0) goto L_da2c8;
  /* da258: ldrb w10, [x8] */
  ARC_W_W(c, 10, arc_ld8(ARC_X_R(c, 8)));
  /* da25c: cmp w10, #0x2f */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(47));
  /* da260: b.ne #0xda2c8 */
  if (ARC_COND(c, 1)) goto L_da2c8;
  /* da264: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* da268: mov w10, #1 */
  ARC_W_W(c, 10, UINT64_C(1));
  /* da26c: mov x11, x8 */
  ARC_X_W(c, 11, ARC_X_R(c, 8));
  /* da270: cneg x12, x10, hs */
  ARC_X_W(c, 12, (ARC_COND(c, 2) ? ((uint64_t)0 - (uint64_t)(ARC_X_R(c, 10))) : (ARC_X_R(c, 10))));
  /* da274: mov x10, x8 */
  ARC_X_W(c, 10, ARC_X_R(c, 8));
L_da278:;
  /* da278: add x11, x11, x12 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) + ARC_X_R(c, 12)));
  /* da27c: cmp x11, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 9));
  /* da280: b.eq #0xda2cc */
  if (ARC_COND(c, 0)) goto L_da2cc;
  /* da284: ldrb w13, [x11] */
  ARC_W_W(c, 13, arc_ld8(ARC_X_R(c, 11)));
  /* da288: add x10, x10, x12 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + ARC_X_R(c, 12)));
  /* da28c: cmp w13, #0x2f */
  (void)arc_sub32(c, ARC_W_R(c, 13), UINT64_C(47));
  /* da290: b.eq #0xda278 */
  if (ARC_COND(c, 0)) goto L_da278;
  /* da294: cmp x11, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 9));
  /* da298: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* da29c: cneg x12, x8, hs */
  ARC_X_W(c, 12, (ARC_COND(c, 2) ? ((uint64_t)0 - (uint64_t)(ARC_X_R(c, 8))) : (ARC_X_R(c, 8))));
  /* da2a0: mov x8, x11 */
  ARC_X_W(c, 8, ARC_X_R(c, 11));
L_da2a4:;
  /* da2a4: add x8, x8, x12 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + ARC_X_R(c, 12)));
  /* da2a8: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* da2ac: b.eq #0xda358 */
  if (ARC_COND(c, 0)) goto L_da358;
  /* da2b0: ldrb w13, [x8] */
  ARC_W_W(c, 13, arc_ld8(ARC_X_R(c, 8)));
  /* da2b4: cmp w13, #0x2f */
  (void)arc_sub32(c, ARC_W_R(c, 13), UINT64_C(47));
  /* da2b8: b.ne #0xda2a4 */
  if (ARC_COND(c, 1)) goto L_da2a4;
  /* da2bc: b #0xda35c */
  goto L_da35c;
L_da2c0:;
  /* da2c0: mov x11, xzr */
  ARC_X_W(c, 11, ARC_X_R(c, 31));
  /* da2c4: b #0xda310 */
  goto L_da310;
L_da2c8:;
  /* da2c8: mov x9, xzr */
  ARC_X_W(c, 9, ARC_X_R(c, 31));
L_da2cc:;
  /* da2cc: mov w10, #5 */
  ARC_W_W(c, 10, UINT64_C(5));
  /* da2d0: sub x9, x9, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - ARC_X_R(c, 8)));
  /* da2d4: strb w10, [x0, #0x20] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(32)), ARC_W_R(c, 10));
  /* da2d8: stp x8, x9, [x0, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* da2dc: ret  */
  return;
L_da2e0:;
  /* da2e0: mov x11, x8 */
  ARC_X_W(c, 11, ARC_X_R(c, 8));
L_da2e4:;
  /* da2e4: add x11, x11, x10 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) + ARC_X_R(c, 10)));
  /* da2e8: cmp x11, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 9));
  /* da2ec: b.eq #0xda30c */
  if (ARC_COND(c, 0)) goto L_da30c;
  /* da2f0: ldrb w12, [x11] */
  ARC_W_W(c, 12, arc_ld8(ARC_X_R(c, 11)));
  /* da2f4: cmp w12, #0x2f */
  (void)arc_sub32(c, ARC_W_R(c, 12), UINT64_C(47));
  /* da2f8: b.ne #0xda2e4 */
  if (ARC_COND(c, 1)) goto L_da2e4;
  /* da2fc: b #0xda310 */
  goto L_da310;
L_da300:;
  /* da300: mov x11, x9 */
  ARC_X_W(c, 11, ARC_X_R(c, 9));
L_da304:;
  /* da304: mov w9, #3 */
  ARC_W_W(c, 9, UINT64_C(3));
  /* da308: b #0xda314 */
  goto L_da314;
L_da30c:;
  /* da30c: mov x11, x9 */
  ARC_X_W(c, 11, ARC_X_R(c, 9));
L_da310:;
  /* da310: mov w9, #4 */
  ARC_W_W(c, 9, UINT64_C(4));
L_da314:;
  /* da314: strb w9, [x0, #0x20] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(32)), ARC_W_R(c, 9));
  /* da318: sub x9, x11, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 11) - ARC_X_R(c, 8)));
  /* da31c: stp x8, x9, [x0, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* da320: ret  */
  return;
L_da324:;
  /* da324: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* da328: mov w10, #1 */
  ARC_W_W(c, 10, UINT64_C(1));
  /* da32c: cneg x11, x10, hs */
  ARC_X_W(c, 11, (ARC_COND(c, 2) ? ((uint64_t)0 - (uint64_t)(ARC_X_R(c, 10))) : (ARC_X_R(c, 10))));
  /* da330: mov x10, x8 */
  ARC_X_W(c, 10, ARC_X_R(c, 8));
L_da334:;
  /* da334: add x10, x10, x11 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + ARC_X_R(c, 11)));
  /* da338: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* da33c: b.eq #0xda350 */
  if (ARC_COND(c, 0)) goto L_da350;
  /* da340: ldrb w12, [x10] */
  ARC_W_W(c, 12, arc_ld8(ARC_X_R(c, 10)));
  /* da344: cmp w12, #0x2f */
  (void)arc_sub32(c, ARC_W_R(c, 12), UINT64_C(47));
  /* da348: b.ne #0xda334 */
  if (ARC_COND(c, 1)) goto L_da334;
  /* da34c: b #0xda240 */
  goto L_da240;
L_da350:;
  /* da350: mov x10, x9 */
  ARC_X_W(c, 10, ARC_X_R(c, 9));
  /* da354: b #0xda240 */
  goto L_da240;
L_da358:;
  /* da358: mov x8, x9 */
  ARC_X_W(c, 8, ARC_X_R(c, 9));
L_da35c:;
  /* da35c: mov w9, #4 */
  ARC_W_W(c, 9, UINT64_C(4));
  /* da360: sub x8, x8, x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) - ARC_X_R(c, 10)));
  /* da364: strb w9, [x0, #0x20] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(32)), ARC_W_R(c, 9));
  /* da368: stp x11, x8, [x0, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 11));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* da36c: ret  */
  return;
}

void fn1_dc2cc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038829772));
  /* dc2cc: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* dc2d0: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* dc2d4: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* dc2d8: bl #0x142c08 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(901852));
  fn1_142c08(c);
}

void fn1_e1260(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038850144));
  /* e1260: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e1264: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e1268: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* e126c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* e1270: ldrb w8, [x0] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 0)));
  /* e1274: ldr x9, [x0, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* e1278: lsr x10, x8, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* e127c: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* e1280: csel x9, x10, x9, eq */
  ARC_X_W(c, 9, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* e1284: cmp x1, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 1), ARC_X_R(c, 9));
  /* e1288: b.hi #0xe12d4 */
  if (ARC_COND(c, 8)) goto L_e12d4;
  /* e128c: cmn x2, #1 */
  (void)arc_add64(c, ARC_X_R(c, 2), UINT64_C(1), 0);
  /* e1290: b.eq #0xe12a4 */
  if (ARC_COND(c, 0)) goto L_e12a4;
  /* e1294: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* e1298: bl #0xe12d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(922268));
  fn1_e12d8(c);
  /* e129c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* e12a0: b #0xe12c4 */
  goto L_e12c4;
L_e12a4:;
  /* e12a4: tbnz w8, #0, #0xe12b8 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_e12b8;
  /* e12a8: lsl w9, w1, #1 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 1)) << ((UINT64_C(1)) & 31)));
  /* e12ac: mov x8, x0 */
  ARC_X_W(c, 8, ARC_X_R(c, 0));
  /* e12b0: strb w9, [x8], #1 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(1));
    arc_st8(_a, ARC_W_R(c, 9));
  }
  /* e12b4: b #0xe12c0 */
  goto L_e12c0;
L_e12b8:;
  /* e12b8: ldr x8, [x0, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* e12bc: str x1, [x0, #8] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(8)), ARC_X_R(c, 1));
L_e12c0:;
  /* e12c0: strb wzr, [x8, x1] */
  arc_st8((ARC_X_R(c, 8) + ARC_X_R(c, 1)), ARC_W_R(c, 31));
L_e12c4:;
  /* e12c4: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* e12c8: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e12cc: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* e12d0: ret  */
  return;
L_e12d4:;
  /* e12d4: bl #0xda020 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(922328));
  fn1_da020(c);
}

void fn1_e3a90(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038860432));
  /* e3a90: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e3a94: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e3a98: stp x24, x23, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* e3a9c: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* e3aa0: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* e3aa4: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* e3aa8: ldrb w8, [x0] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 0)));
  /* e3aac: ldp x9, x11, [x0, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(8));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 11, arc_ld64(_pa + 8));
  }
  /* e3ab0: lsr x10, x8, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* e3ab4: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* e3ab8: add x8, x0, #4 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + UINT64_C(4)));
  /* e3abc: csel x23, x8, x11, eq */
  ARC_X_W(c, 23, (ARC_COND(c, 0) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 11)));
  /* e3ac0: csel x9, x10, x9, eq */
  ARC_X_W(c, 9, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* e3ac4: cmp x2, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 2), ARC_X_R(c, 9));
  /* e3ac8: b.ls #0xe3ad4 */
  if (ARC_COND(c, 9)) goto L_e3ad4;
  /* e3acc: mov x2, #-1 */
  ARC_X_W(c, 2, UINT64_C(18446744073709551615));
  /* e3ad0: b #0xe3b08 */
  goto L_e3b08;
L_e3ad4:;
  /* e3ad4: mov x19, x3 */
  ARC_X_W(c, 19, ARC_X_R(c, 3));
  /* e3ad8: cbz x3, #0xe3b08 */
  if ((ARC_X_R(c, 3)) == 0) goto L_e3b08;
  /* e3adc: lsl x8, x2, #2 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 2)) << ((UINT64_C(2)) & 63)));
  /* e3ae0: lsl x10, x9, #2 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 9)) << ((UINT64_C(2)) & 63)));
  /* e3ae4: sub x9, x10, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 10) - ARC_X_R(c, 8)));
  /* e3ae8: add x24, x23, x10 */
  ARC_X_W(c, 24, (ARC_X_R(c, 23) + ARC_X_R(c, 10)));
  /* e3aec: cmp x9, x19, lsl #2 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ((uint64_t)(ARC_X_R(c, 19)) << 2));
  /* e3af0: b.ge #0xe3b24 */
  if (ARC_COND(c, 10)) goto L_e3b24;
L_e3af4:;
  /* e3af4: mov x22, x24 */
  ARC_X_W(c, 22, ARC_X_R(c, 24));
L_e3af8:;
  /* e3af8: sub x8, x22, x23 */
  ARC_X_W(c, 8, (ARC_X_R(c, 22) - ARC_X_R(c, 23)));
  /* e3afc: cmp x22, x24 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 24));
  /* e3b00: asr x8, x8, #2 */
  ARC_X_W(c, 8, ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(2)) & 63))));
  /* e3b04: csinv x2, x8, xzr, ne */
  ARC_X_W(c, 2, (ARC_COND(c, 1) ? (ARC_X_R(c, 8)) : (~(uint64_t)(ARC_X_R(c, 31)))));
L_e3b08:;
  /* e3b08: mov x0, x2 */
  ARC_X_W(c, 0, ARC_X_R(c, 2));
  /* e3b0c: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* e3b10: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* e3b14: ldp x24, x23, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* e3b18: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e3b1c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* e3b20: ret  */
  return;
L_e3b24:;
  /* e3b24: ldr w21, [x1] */
  ARC_W_W(c, 21, arc_ld32(ARC_X_R(c, 1)));
  /* e3b28: asr x9, x9, #2 */
  ARC_X_W(c, 9, ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(2)) & 63))));
  /* e3b2c: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* e3b30: add x0, x23, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 23) + ARC_X_R(c, 8)));
L_e3b34:;
  /* e3b34: sub x8, x9, x19 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) - ARC_X_R(c, 19)));
  /* e3b38: adds x2, x8, #1 */
  ARC_X_W(c, 2, arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0));
  /* e3b3c: b.hs #0xe3af4 */
  if (ARC_COND(c, 2)) goto L_e3af4;
  /* e3b40: mov w1, w21 */
  ARC_W_W(c, 1, ARC_W_R(c, 21));
  /* e3b44: bl #0x142e48 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(932680));
  fn1_142e48(c);
  /* e3b48: cbz x0, #0xe3af4 */
  if ((ARC_X_R(c, 0)) == 0) goto L_e3af4;
  /* e3b4c: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* e3b50: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* e3b54: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* e3b58: bl #0x142e60 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(932700));
  fn1_142e60(c);
  /* e3b5c: cbz w0, #0xe3af8 */
  if ((ARC_W_R(c, 0)) == 0) goto L_e3af8;
  /* e3b60: add x0, x22, #4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 22) + UINT64_C(4)));
  /* e3b64: sub x8, x24, x0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 24) - ARC_X_R(c, 0)));
  /* e3b68: asr x9, x8, #2 */
  ARC_X_W(c, 9, ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(2)) & 63))));
  /* e3b6c: cmp x9, x19 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 19));
  /* e3b70: b.ge #0xe3b34 */
  if (ARC_COND(c, 10)) goto L_e3b34;
  /* e3b74: b #0xe3af4 */
  goto L_e3af4;
}

void fn1_e81fc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038878716));
  /* e81fc: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e8200: sub sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(96)));
  /* e8204: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e8208: stp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* e820c: stp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* e8210: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* e8214: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* e8218: mov x19, x2 */
  ARC_X_W(c, 19, ARC_X_R(c, 2));
  /* e821c: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* e8220: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* e8224: cbz w20, #0xe8268 */
  if ((ARC_W_R(c, 20)) == 0) goto L_e8268;
  /* e8228: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* e822c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* e8230: mov w1, w20 */
  ARC_W_W(c, 1, ARC_W_R(c, 20));
  /* e8234: add x22, sp, #8 */
  ARC_X_W(c, 22, ((c)->sp + UINT64_C(8)));
  /* e8238: ldr x9, [x8, #0x30] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(48))));
  /* e823c: add x8, sp, #8 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(8)));
  /* e8240: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(950852));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* e8244: ldrb w8, [sp, #8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(8))));
  /* e8248: adrp x9, #0x151000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1380352)));
  /* e824c: ldr x9, [x9, #0x910] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(2320))));
  /* e8250: ldr x10, [sp, #0x18] */
  ARC_X_W(c, 10, arc_ld64(((c)->sp + INT64_C(24))));
  /* e8254: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* e8258: add x9, x9, #0x10 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(16)));
  /* e825c: csinc x22, x10, x22, ne */
  ARC_X_W(c, 22, (ARC_COND(c, 1) ? (ARC_X_R(c, 10)) : ((ARC_X_R(c, 22)) + 1)));
  /* e8260: str x9, [x21] */
  arc_st64(ARC_X_R(c, 21), ARC_X_R(c, 9));
  /* e8264: b #0xe8288 */
  goto L_e8288;
L_e8268:;
  /* e8268: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* e826c: add x9, sp, #8 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(8)));
  /* e8270: ldr x8, [x8, #0x910] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2320))));
  /* e8274: stp xzr, xzr, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* e8278: orr x22, x9, #1 */
  ARC_X_W(c, 22, (ARC_X_R(c, 9) | UINT64_C(1)));
  /* e827c: str xzr, [sp, #0x18] */
  arc_st64(((c)->sp + INT64_C(24)), ARC_X_R(c, 31));
  /* e8280: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* e8284: str x8, [x21] */
  arc_st64(ARC_X_R(c, 21), ARC_X_R(c, 8));
L_e8288:;
  /* e8288: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* e828c: bl #0x142860 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(950928));
  fn1_142860(c);
  /* e8290: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* e8294: add x0, x0, #0x19 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(25)));
  /* e8298: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(950940));
  fn1_1428f0(c);
  /* e829c: add x24, x0, #0x18 */
  ARC_X_W(c, 24, (ARC_X_R(c, 0) + UINT64_C(24)));
  /* e82a0: stp x23, x23, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 23));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* e82a4: add x2, x23, #1 */
  ARC_X_W(c, 2, (ARC_X_R(c, 23) + UINT64_C(1)));
  /* e82a8: str wzr, [x0, #0x10] */
  arc_st32((ARC_X_R(c, 0) + INT64_C(16)), ARC_W_R(c, 31));
  /* e82ac: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* e82b0: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* e82b4: bl #0x1449d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(950968));
  fn1_1449d8(c);
  /* e82b8: ldrb w8, [sp, #8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(8))));
  /* e82bc: str x24, [x21, #8] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(8)), ARC_X_R(c, 24));
  /* e82c0: tbz w8, #0, #0xe82d4 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_e82d4;
  /* e82c4: ldr x8, [sp, #8] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(8))));
  /* e82c8: ldr x0, [sp, #0x18] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(24))));
  /* e82cc: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* e82d0: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(950996));
  fn1_142608(c);
L_e82d4:;
  /* e82d4: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* e82d8: ldr x8, [x8, #0xa50] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2640))));
  /* e82dc: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* e82e0: str x8, [x21] */
  arc_st64(ARC_X_R(c, 21), ARC_X_R(c, 8));
  /* e82e4: stp x20, x19, [x21, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* e82e8: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* e82ec: ldp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* e82f0: ldp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* e82f4: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e82f8: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* e82fc: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* e8300: ret  */
  return;
  /* e8304: ldrb w8, [sp, #8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(8))));
  /* e8308: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* e830c: tbz w8, #0, #0xe8320 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_e8320;
  /* e8310: ldr x8, [sp, #8] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(8))));
  /* e8314: ldr x0, [sp, #0x18] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(24))));
  /* e8318: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* e831c: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(951072));
  fn1_142608(c);
L_e8320:;
  /* e8320: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* e8324: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(951080));
  fn1_9cc20(c);
}

void fn1_eaa40(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038889024));
  /* eaa40: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* eaa44: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* eaa48: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* eaa4c: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* eaa50: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* eaa54: ldr x8, [x1] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 1)));
  /* eaa58: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* eaa5c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* eaa60: cbz x8, #0xeaa70 */
  if ((ARC_X_R(c, 8)) == 0) goto L_eaa70;
  /* eaa64: add x1, x8, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) + UINT64_C(8)));
  /* eaa68: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* eaa6c: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(961136));
  fn1_db2e0(c);
L_eaa70:;
  /* eaa70: ldr x21, [x19] */
  ARC_X_W(c, 21, arc_ld64(ARC_X_R(c, 19)));
  /* eaa74: cbz x21, #0xeaa98 */
  if ((ARC_X_R(c, 21)) == 0) goto L_eaa98;
  /* eaa78: add x1, x21, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(8)));
  /* eaa7c: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* eaa80: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(961156));
  fn1_bd950(c);
  /* eaa84: cbnz x0, #0xeaa98 */
  if ((ARC_X_R(c, 0)) != 0) goto L_eaa98;
  /* eaa88: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* eaa8c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* eaa90: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* eaa94: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(961176));
  arc_dispatch(c, ARC_X_R(c, 8));
L_eaa98:;
  /* eaa98: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* eaa9c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* eaaa0: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* eaaa4: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* eaaa8: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* eaaac: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* eaab0: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* eaab4: ret  */
  return;
}

void fn1_ec0f8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038894840));
  /* ec0f8: bti c */
  /* bti: no architectural effect here */
  /* ec0fc: ldr x8, [x0, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(72))));
  /* ec100: cbz x8, #0xec158 */
  if ((ARC_X_R(c, 8)) == 0) goto L_ec158;
  /* ec104: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* ec108: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* ec10c: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* ec110: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* ec114: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* ec118: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* ec11c: mov w20, w1 */
  ARC_W_W(c, 20, ARC_W_R(c, 1));
  /* ec120: sub x21, x8, #1 */
  ARC_X_W(c, 21, (ARC_X_R(c, 8) - UINT64_C(1)));
L_ec124:;
  /* ec124: ldp x8, x9, [x19, #0x38] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(56));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* ec128: mov w0, w20 */
  ARC_W_W(c, 0, ARC_W_R(c, 20));
  /* ec12c: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* ec130: ldr x8, [x8, x21, lsl #3] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 21)) << 3))));
  /* ec134: ldr w2, [x9, x21, lsl #2] */
  ARC_W_W(c, 2, arc_ld32((ARC_X_R(c, 9) + ((uint64_t)(ARC_X_R(c, 21)) << 2))));
  /* ec138: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(966972));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* ec13c: sub x21, x21, #1 */
  ARC_X_W(c, 21, (ARC_X_R(c, 21) - UINT64_C(1)));
  /* ec140: cmn x21, #1 */
  (void)arc_add64(c, ARC_X_R(c, 21), UINT64_C(1), 0);
  /* ec144: b.ne #0xec124 */
  if (ARC_COND(c, 1)) goto L_ec124;
  /* ec148: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* ec14c: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* ec150: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ec154: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
L_ec158:;
  /* ec158: ret  */
  return;
}

void fn1_edabc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038901436));
  /* edabc: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* edac0: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* edac4: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* edac8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* edacc: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* edad0: add x0, x0, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(16)));
  /* edad4: bl #0x1433b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(973528));
  fn1_1433b8(c);
  /* edad8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* edadc: mov w1, #0xa8 */
  ARC_W_W(c, 1, UINT64_C(168));
  /* edae0: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* edae4: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* edae8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* edaec: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_f2924(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038921508));
  /* f2924: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* f2928: sub sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(112)));
  /* f292c: str d8, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), (c)->q[8].u64[0]);
  /* f2930: stp x29, x30, [sp, #0x28] */
  { const uint64_t _pa = ((c)->sp + INT64_C(40));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* f2934: str x25, [sp, #0x38] */
  arc_st64(((c)->sp + INT64_C(56)), ARC_X_R(c, 25));
  /* f2938: stp x24, x23, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* f293c: stp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* f2940: stp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* f2944: add x29, sp, #0x28 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(40)));
  /* f2948: fmov d8, d0 */
  arc_du_w(c, 8, (uint64_t)(ARC_DU_R(c, 0)));
  /* f294c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f2950: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* f2954: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* f2958: bl #0x143610 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(993628));
  fn1_143610(c);
  /* f295c: ldrb w8, [sp, #8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(8))));
  /* f2960: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* f2964: b.ne #0xf2aa4 */
  if (ARC_COND(c, 1)) goto L_f2aa4;
  /* f2968: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f296c: nop  */
  /* nop: no architectural effect here */
  /* f2970: adr x25, #0x15dc40 */
  ARC_X_W(c, 25, (arc_image_bases[1] + UINT64_C(1432640)));
  /* f2974: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f2978: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f297c: ldr x21, [x8, #0x30] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 8) + INT64_C(48))));
  /* f2980: cmp x21, x25 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 25));
  /* f2984: stur x21, [x29, #-0x10] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-16)), ARC_X_R(c, 21));
  /* f2988: b.eq #0xf2998 */
  if (ARC_COND(c, 0)) goto L_f2998;
  /* f298c: add x1, x21, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(8)));
  /* f2990: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* f2994: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(993688));
  fn1_db2e0(c);
L_f2998:;
  /* f2998: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* f299c: sub x0, x29, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* f29a0: ldr x1, [x1, #0xb50] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(2896))));
  /* f29a4: bl #0x143748 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(993704));
  fn1_143748(c);
  /* f29a8: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* f29ac: cmp x21, x25 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 25));
  /* f29b0: b.eq #0xf29d4 */
  if (ARC_COND(c, 0)) goto L_f29d4;
  /* f29b4: add x1, x21, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(8)));
  /* f29b8: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* f29bc: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(993728));
  fn1_bd950(c);
  /* f29c0: cbnz x0, #0xf29d4 */
  if ((ARC_X_R(c, 0)) != 0) goto L_f29d4;
  /* f29c4: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* f29c8: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* f29cc: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* f29d0: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(993748));
  arc_dispatch(c, ARC_X_R(c, 8));
L_f29d4:;
  /* f29d4: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f29d8: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f29dc: add x21, x19, x8 */
  ARC_X_W(c, 21, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f29e0: ldr w3, [x21, #0x90] */
  ARC_W_W(c, 3, arc_ld32((ARC_X_R(c, 21) + INT64_C(144))));
  /* f29e4: ldr x22, [x21, #0x28] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 21) + INT64_C(40))));
  /* f29e8: cmn w3, #1 */
  (void)arc_add32(c, ARC_W_R(c, 3), UINT64_C(1), 0);
  /* f29ec: b.ne #0xf2a60 */
  if (ARC_COND(c, 1)) goto L_f2a60;
  /* f29f0: ldr x23, [x21, #0x30] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 21) + INT64_C(48))));
  /* f29f4: cmp x23, x25 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 25));
  /* f29f8: stur x23, [x29, #-0x10] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-16)), ARC_X_R(c, 23));
  /* f29fc: b.eq #0xf2a0c */
  if (ARC_COND(c, 0)) goto L_f2a0c;
  /* f2a00: add x1, x23, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 23) + UINT64_C(8)));
  /* f2a04: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* f2a08: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(993804));
  fn1_db2e0(c);
L_f2a0c:;
  /* f2a0c: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* f2a10: sub x0, x29, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* f2a14: ldr x1, [x1, #0xb40] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(2880))));
  /* f2a18: bl #0x143748 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(993820));
  fn1_143748(c);
  /* f2a1c: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* f2a20: ldr x8, [x8, #0x38] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(56))));
  /* f2a24: mov w1, #0x20 */
  ARC_W_W(c, 1, UINT64_C(32));
  /* f2a28: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(993836));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* f2a2c: mov w24, w0 */
  ARC_W_W(c, 24, ARC_W_R(c, 0));
  /* f2a30: cmp x23, x25 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 25));
  /* f2a34: b.eq #0xf2a58 */
  if (ARC_COND(c, 0)) goto L_f2a58;
  /* f2a38: add x1, x23, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 23) + UINT64_C(8)));
  /* f2a3c: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* f2a40: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(993860));
  fn1_bd950(c);
  /* f2a44: cbnz x0, #0xf2a58 */
  if ((ARC_X_R(c, 0)) != 0) goto L_f2a58;
  /* f2a48: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* f2a4c: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* f2a50: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* f2a54: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(993880));
  arc_dispatch(c, ARC_X_R(c, 8));
L_f2a58:;
  /* f2a58: and w3, w24, #0xff */
  ARC_W_W(c, 3, (ARC_W_R(c, 24) & UINT64_C(255)));
  /* f2a5c: str w3, [x21, #0x90] */
  arc_st32((ARC_X_R(c, 21) + INT64_C(144)), ARC_W_R(c, 3));
L_f2a60:;
  /* f2a60: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* f2a64: ldr x8, [x8, #0x40] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(64))));
  /* f2a68: fmov d0, d8 */
  arc_du_w(c, 0, (uint64_t)(ARC_DU_R(c, 8)));
  /* f2a6c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* f2a70: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* f2a74: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* f2a78: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(993916));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* f2a7c: cbnz x0, #0xf2aa4 */
  if ((ARC_X_R(c, 0)) != 0) goto L_f2aa4;
  /* f2a80: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f2a84: mov w10, #5 */
  ARC_W_W(c, 10, UINT64_C(5));
  /* f2a88: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f2a8c: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f2a90: ldp w9, w11, [x8, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 8) + INT64_C(32));
    ARC_W_W(c, 9, arc_ld32(_pa));
    ARC_W_W(c, 11, arc_ld32(_pa + 4));
  }
  /* f2a94: orr w9, w9, w10 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | ARC_W_R(c, 10)));
  /* f2a98: tst w11, w9 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 11) & ARC_W_R(c, 9)));
  /* f2a9c: str w9, [x8, #0x20] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(32)), ARC_W_R(c, 9));
  /* f2aa0: b.ne #0xf2ad4 */
  if (ARC_COND(c, 1)) goto L_f2ad4;
L_f2aa4:;
  /* f2aa4: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* f2aa8: bl #0x143628 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(993964));
  fn1_143628(c);
L_f2aac:;
  /* f2aac: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f2ab0: ldp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* f2ab4: ldr x25, [sp, #0x38] */
  ARC_X_W(c, 25, arc_ld64(((c)->sp + INT64_C(56))));
  /* f2ab8: ldp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* f2abc: ldr d8, [sp, #0x20] */
  arc_du_w(c, 8, arc_ld64(((c)->sp + INT64_C(32))));
  /* f2ac0: ldp x24, x23, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* f2ac4: ldp x29, x30, [sp, #0x28] */
  { const uint64_t _pa = ((c)->sp + INT64_C(40));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* f2ac8: add sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(112)));
  /* f2acc: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* f2ad0: ret  */
  return;
L_f2ad4:;
  /* f2ad4: nop  */
  /* nop: no architectural effect here */
  /* f2ad8: adr x0, #0x50210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(328208)));
  /* f2adc: bl #0xec720 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(994016));
  fn1_ec720(c);
  /* f2ae0: b #0xf2b0c */
  goto L_f2b0c;
  /* f2ae4: cmp x23, x25 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 25));
  /* f2ae8: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* f2aec: b.eq #0xf2b40 */
  if (ARC_COND(c, 0)) goto L_f2b40;
  /* f2af0: add x1, x23, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 23) + UINT64_C(8)));
  /* f2af4: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* f2af8: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(994044));
  fn1_bd950(c);
  /* f2afc: cbnz x0, #0xf2b40 */
  if ((ARC_X_R(c, 0)) != 0) goto L_f2b40;
  /* f2b00: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* f2b04: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* f2b08: b #0xf2b38 */
  goto L_f2b38;
L_f2b0c:;
  /* f2b0c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* f2b10: b #0xf2b40 */
  goto L_f2b40;
  /* f2b14: cmp x21, x25 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 25));
  /* f2b18: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* f2b1c: b.eq #0xf2b40 */
  if (ARC_COND(c, 0)) goto L_f2b40;
  /* f2b20: add x1, x21, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(8)));
  /* f2b24: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* f2b28: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(994092));
  fn1_bd950(c);
  /* f2b2c: cbnz x0, #0xf2b40 */
  if ((ARC_X_R(c, 0)) != 0) goto L_f2b40;
  /* f2b30: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* f2b34: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
L_f2b38:;
  /* f2b38: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* f2b3c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(994112));
  arc_dispatch(c, ARC_X_R(c, 8));
L_f2b40:;
  /* f2b40: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* f2b44: bl #0x143628 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(994120));
  fn1_143628(c);
  /* f2b48: b #0xf2b50 */
  goto L_f2b50;
  /* f2b4c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
L_f2b50:;
  /* f2b50: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* f2b54: bl #0x142548 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(994136));
  fn1_142548(c);
  /* f2b58: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f2b5c: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f2b60: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f2b64: ldr w9, [x8, #0x20] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 8) + INT64_C(32))));
  /* f2b68: ldrb w10, [x8, #0x24] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 8) + INT64_C(36))));
  /* f2b6c: orr w9, w9, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | UINT64_C(1)));
  /* f2b70: str w9, [x8, #0x20] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(32)), ARC_W_R(c, 9));
  /* f2b74: tbnz w10, #0, #0xf2b80 */
  if (((ARC_W_R(c, 10)) >> 0 & 1) != 0) goto L_f2b80;
  /* f2b78: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(994172));
  fn1_142980(c);
  /* f2b7c: b #0xf2aac */
  goto L_f2aac;
L_f2b80:;
  /* f2b80: bl #0x1429b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(994180));
  fn1_1429b0(c);
  /* f2b84: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f2b88: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(994188));
  fn1_142980(c);
  /* f2b8c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f2b90: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(994196));
  fn1_9cc20(c);
  /* f2b94: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(994200));
  fn1_a1454(c);
}

void fn1_f44f8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038928632));
  /* f44f8: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* f44fc: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* f4500: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* f4504: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* f4508: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f450c: add x0, x0, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(16)));
  /* f4510: bl #0x1433b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1000724));
  fn1_1433b8(c);
  /* f4514: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f4518: mov w1, #0xa8 */
  ARC_W_W(c, 1, UINT64_C(168));
  /* f451c: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* f4520: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* f4524: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* f4528: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_f9394(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038948756));
  /* f9394: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* f9398: sub sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(96)));
  /* f939c: str d8, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), (c)->q[8].u64[0]);
  /* f93a0: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* f93a4: stp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* f93a8: stp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* f93ac: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* f93b0: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* f93b4: fmov d8, d0 */
  arc_du_w(c, 8, (uint64_t)(ARC_DU_R(c, 0)));
  /* f93b8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f93bc: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* f93c0: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* f93c4: bl #0x143688 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1020872));
  fn1_143688(c);
  /* f93c8: ldrb w8, [sp] */
  ARC_W_W(c, 8, arc_ld8((c)->sp));
  /* f93cc: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* f93d0: b.ne #0xf9518 */
  if (ARC_COND(c, 1)) goto L_f9518;
  /* f93d4: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f93d8: nop  */
  /* nop: no architectural effect here */
  /* f93dc: adr x24, #0x15dc40 */
  ARC_X_W(c, 24, (arc_image_bases[1] + UINT64_C(1432640)));
  /* f93e0: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f93e4: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f93e8: ldr x21, [x8, #0x30] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 8) + INT64_C(48))));
  /* f93ec: cmp x21, x24 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 24));
  /* f93f0: stur x21, [x29, #-8] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-8)), ARC_X_R(c, 21));
  /* f93f4: b.eq #0xf9404 */
  if (ARC_COND(c, 0)) goto L_f9404;
  /* f93f8: add x1, x21, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(8)));
  /* f93fc: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* f9400: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1020932));
  fn1_db2e0(c);
L_f9404:;
  /* f9404: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* f9408: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* f940c: ldr x1, [x1, #0xb68] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(2920))));
  /* f9410: bl #0x143748 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1020948));
  fn1_143748(c);
  /* f9414: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* f9418: cmp x21, x24 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 24));
  /* f941c: b.eq #0xf9440 */
  if (ARC_COND(c, 0)) goto L_f9440;
  /* f9420: add x1, x21, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(8)));
  /* f9424: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* f9428: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1020972));
  fn1_bd950(c);
  /* f942c: cbnz x0, #0xf9440 */
  if ((ARC_X_R(c, 0)) != 0) goto L_f9440;
  /* f9430: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* f9434: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* f9438: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* f943c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1020992));
  arc_dispatch(c, ARC_X_R(c, 8));
L_f9440:;
  /* f9440: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f9444: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f9448: add x21, x19, x8 */
  ARC_X_W(c, 21, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f944c: ldr w3, [x21, #0x90] */
  ARC_W_W(c, 3, arc_ld32((ARC_X_R(c, 21) + INT64_C(144))));
  /* f9450: ldr x22, [x21, #0x28] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 21) + INT64_C(40))));
  /* f9454: cmn w3, #1 */
  (void)arc_add32(c, ARC_W_R(c, 3), UINT64_C(1), 0);
  /* f9458: b.ne #0xf94d4 */
  if (ARC_COND(c, 1)) goto L_f94d4;
  /* f945c: ldr x23, [x21, #0x30] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 21) + INT64_C(48))));
  /* f9460: cmp x23, x24 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 24));
  /* f9464: stur x23, [x29, #-8] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-8)), ARC_X_R(c, 23));
  /* f9468: b.eq #0xf9478 */
  if (ARC_COND(c, 0)) goto L_f9478;
  /* f946c: add x1, x23, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 23) + UINT64_C(8)));
  /* f9470: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* f9474: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1021048));
  fn1_db2e0(c);
L_f9478:;
  /* f9478: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* f947c: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* f9480: ldr x1, [x1, #0xb58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(2904))));
  /* f9484: bl #0x143748 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1021064));
  fn1_143748(c);
  /* f9488: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* f948c: ldr x8, [x8, #0x58] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(88))));
  /* f9490: mov w1, #0x20 */
  ARC_W_W(c, 1, UINT64_C(32));
  /* f9494: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1021080));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* f9498: mov w3, w0 */
  ARC_W_W(c, 3, ARC_W_R(c, 0));
  /* f949c: cmp x23, x24 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 24));
  /* f94a0: b.eq #0xf94d0 */
  if (ARC_COND(c, 0)) goto L_f94d0;
  /* f94a4: add x1, x23, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 23) + UINT64_C(8)));
  /* f94a8: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* f94ac: mov w24, w3 */
  ARC_W_W(c, 24, ARC_W_R(c, 3));
  /* f94b0: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1021108));
  fn1_bd950(c);
  /* f94b4: mov w3, w24 */
  ARC_W_W(c, 3, ARC_W_R(c, 24));
  /* f94b8: cbnz x0, #0xf94d0 */
  if ((ARC_X_R(c, 0)) != 0) goto L_f94d0;
  /* f94bc: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* f94c0: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* f94c4: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* f94c8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1021132));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* f94cc: mov w3, w24 */
  ARC_W_W(c, 3, ARC_W_R(c, 24));
L_f94d0:;
  /* f94d0: str w3, [x21, #0x90] */
  arc_st32((ARC_X_R(c, 21) + INT64_C(144)), ARC_W_R(c, 3));
L_f94d4:;
  /* f94d4: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* f94d8: ldr x8, [x8, #0x40] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(64))));
  /* f94dc: fmov d0, d8 */
  arc_du_w(c, 0, (uint64_t)(ARC_DU_R(c, 8)));
  /* f94e0: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* f94e4: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* f94e8: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* f94ec: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1021168));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* f94f0: cbnz x0, #0xf9518 */
  if ((ARC_X_R(c, 0)) != 0) goto L_f9518;
  /* f94f4: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f94f8: mov w10, #5 */
  ARC_W_W(c, 10, UINT64_C(5));
  /* f94fc: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f9500: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f9504: ldp w9, w11, [x8, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 8) + INT64_C(32));
    ARC_W_W(c, 9, arc_ld32(_pa));
    ARC_W_W(c, 11, arc_ld32(_pa + 4));
  }
  /* f9508: orr w9, w9, w10 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | ARC_W_R(c, 10)));
  /* f950c: tst w11, w9 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 11) & ARC_W_R(c, 9)));
  /* f9510: str w9, [x8, #0x20] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(32)), ARC_W_R(c, 9));
  /* f9514: b.ne #0xf9544 */
  if (ARC_COND(c, 1)) goto L_f9544;
L_f9518:;
  /* f9518: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* f951c: bl #0x1436a0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1021216));
  fn1_1436a0(c);
L_f9520:;
  /* f9520: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f9524: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* f9528: ldr d8, [sp, #0x10] */
  arc_du_w(c, 8, arc_ld64(((c)->sp + INT64_C(16))));
  /* f952c: ldp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* f9530: ldp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* f9534: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* f9538: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* f953c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* f9540: ret  */
  return;
L_f9544:;
  /* f9544: nop  */
  /* nop: no architectural effect here */
  /* f9548: adr x0, #0x50210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(328208)));
  /* f954c: bl #0xec720 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1021264));
  fn1_ec720(c);
  /* f9550: b #0xf957c */
  goto L_f957c;
  /* f9554: cmp x23, x24 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 24));
  /* f9558: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* f955c: b.eq #0xf95b0 */
  if (ARC_COND(c, 0)) goto L_f95b0;
  /* f9560: add x1, x23, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 23) + UINT64_C(8)));
  /* f9564: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* f9568: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1021292));
  fn1_bd950(c);
  /* f956c: cbnz x0, #0xf95b0 */
  if ((ARC_X_R(c, 0)) != 0) goto L_f95b0;
  /* f9570: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* f9574: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* f9578: b #0xf95a8 */
  goto L_f95a8;
L_f957c:;
  /* f957c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* f9580: b #0xf95b0 */
  goto L_f95b0;
  /* f9584: cmp x21, x24 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 24));
  /* f9588: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* f958c: b.eq #0xf95b0 */
  if (ARC_COND(c, 0)) goto L_f95b0;
  /* f9590: add x1, x21, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(8)));
  /* f9594: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* f9598: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1021340));
  fn1_bd950(c);
  /* f959c: cbnz x0, #0xf95b0 */
  if ((ARC_X_R(c, 0)) != 0) goto L_f95b0;
  /* f95a0: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* f95a4: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
L_f95a8:;
  /* f95a8: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* f95ac: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1021360));
  arc_dispatch(c, ARC_X_R(c, 8));
L_f95b0:;
  /* f95b0: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* f95b4: bl #0x1436a0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1021368));
  fn1_1436a0(c);
  /* f95b8: b #0xf95c0 */
  goto L_f95c0;
  /* f95bc: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
L_f95c0:;
  /* f95c0: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* f95c4: bl #0x142548 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1021384));
  fn1_142548(c);
  /* f95c8: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f95cc: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f95d0: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f95d4: ldr w9, [x8, #0x20] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 8) + INT64_C(32))));
  /* f95d8: ldrb w10, [x8, #0x24] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 8) + INT64_C(36))));
  /* f95dc: orr w9, w9, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | UINT64_C(1)));
  /* f95e0: str w9, [x8, #0x20] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(32)), ARC_W_R(c, 9));
  /* f95e4: tbnz w10, #0, #0xf95f0 */
  if (((ARC_W_R(c, 10)) >> 0 & 1) != 0) goto L_f95f0;
  /* f95e8: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1021420));
  fn1_142980(c);
  /* f95ec: b #0xf9520 */
  goto L_f9520;
L_f95f0:;
  /* f95f0: bl #0x1429b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1021428));
  fn1_1429b0(c);
  /* f95f4: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f95f8: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1021436));
  fn1_142980(c);
  /* f95fc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f9600: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1021444));
  fn1_9cc20(c);
  /* f9604: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1021448));
  fn1_a1454(c);
}

void fn1_fd940(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038966592));
  /* fd940: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* fd944: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* fd948: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* fd94c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* fd950: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* fd954: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* fd958: ldr x8, [x8, #0xb28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2856))));
  /* fd95c: add x9, x8, #0x18 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(24)));
  /* fd960: add x8, x8, #0x40 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(64)));
  /* fd964: str x9, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 9));
  }
  /* fd968: str x8, [x19, #0xb0]! */
  { const uint64_t _a = (ARC_X_R(c, 19) + INT64_C(176));
    ARC_X_W(c, 19, ARC_X_R(c, 19) + INT64_C(176));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* fd96c: bl #0x1436d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1038704));
  fn1_1436d0(c);
  /* fd970: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* fd974: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* fd978: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* fd97c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* fd980: b #0x1433b8 */
  fn1_1433b8(c); return;
}

void fn1_106ca4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039004324));
  /* 106ca4: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 106ca8: sub sp, sp, #0x1e0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(480)));
  /* 106cac: stp x29, x30, [sp, #0x180] */
  { const uint64_t _pa = ((c)->sp + INT64_C(384));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 106cb0: stp x28, x27, [sp, #0x190] */
  { const uint64_t _pa = ((c)->sp + INT64_C(400));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* 106cb4: stp x26, x25, [sp, #0x1a0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(416));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* 106cb8: stp x24, x23, [sp, #0x1b0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(432));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 106cbc: stp x22, x21, [sp, #0x1c0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(448));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 106cc0: stp x20, x19, [sp, #0x1d0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(464));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 106cc4: add x29, sp, #0x180 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(384)));
  /* 106cc8: ldr w8, [x3, #8] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 3) + INT64_C(8))));
  /* 106ccc: mov w9, #0x4a */
  ARC_W_W(c, 9, UINT64_C(74));
  /* 106cd0: mov x24, x3 */
  ARC_X_W(c, 24, ARC_X_R(c, 3));
  /* 106cd4: mov x21, x2 */
  ARC_X_W(c, 21, ARC_X_R(c, 2));
  /* 106cd8: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 106cdc: sub x26, x29, #0xb0 */
  ARC_X_W(c, 26, (ARC_X_R(c, 29) - UINT64_C(176)));
  /* 106ce0: ands w8, w8, w9 */
  { uint32_t _r = (uint32_t)(ARC_W_R(c, 8) & ARC_W_R(c, 9));
    arc_flags_logical32(c, _r);
    ARC_W_W(c, 8, _r); }
  /* 106ce4: str x5, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 5));
  /* 106ce8: b.eq #0x106d0c */
  if (ARC_COND(c, 0)) goto L_106d0c;
  /* 106cec: cmp w8, #0x40 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(64));
  /* 106cf0: b.eq #0x106d04 */
  if (ARC_COND(c, 0)) goto L_106d04;
  /* 106cf4: cmp w8, #8 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(8));
  /* 106cf8: b.ne #0x106d14 */
  if (ARC_COND(c, 1)) goto L_106d14;
  /* 106cfc: mov w23, #0x10 */
  ARC_W_W(c, 23, UINT64_C(16));
  /* 106d00: b #0x106d18 */
  goto L_106d18;
L_106d04:;
  /* 106d04: mov w23, #8 */
  ARC_W_W(c, 23, UINT64_C(8));
  /* 106d08: b #0x106d18 */
  goto L_106d18;
L_106d0c:;
  /* 106d0c: mov w23, wzr */
  ARC_W_W(c, 23, ARC_W_R(c, 31));
  /* 106d10: b #0x106d18 */
  goto L_106d18;
L_106d14:;
  /* 106d14: mov w23, #0xa */
  ARC_W_W(c, 23, UINT64_C(10));
L_106d18:;
  /* 106d18: sub x1, x29, #0x74 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(116)));
  /* 106d1c: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 106d20: str x4, [sp, #0x18] */
  arc_st64(((c)->sp + INT64_C(24)), ARC_X_R(c, 4));
  /* 106d24: sub x27, x29, #0x74 */
  ARC_X_W(c, 27, (ARC_X_R(c, 29) - UINT64_C(116)));
  /* 106d28: bl #0x136534 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1076524));
  fn1_136534(c);
  /* 106d2c: sub x8, x29, #0x90 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(144)));
  /* 106d30: sub x1, x29, #0xc */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(12)));
  /* 106d34: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 106d38: bl #0x1366c4 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1076540));
  fn1_1366c4(c);
  /* 106d3c: stp xzr, xzr, [x26, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 26) + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 106d40: str xzr, [x26, #0x18] */
  arc_st64((ARC_X_R(c, 26) + INT64_C(24)), ARC_X_R(c, 31));
  /* 106d44: sub x0, x29, #0xa8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(168)));
  /* 106d48: mov w1, #0x16 */
  ARC_W_W(c, 1, UINT64_C(22));
  /* 106d4c: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 106d50: sub x20, x29, #0xa8 */
  ARC_X_W(c, 20, (ARC_X_R(c, 29) - UINT64_C(168)));
  /* 106d54: bl #0x142d10 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1076568));
  fn1_142d10(c);
  /* 106d58: ldurb w8, [x29, #-0xa8] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-168))));
  /* 106d5c: ldr x9, [x26, #0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 26) + INT64_C(24))));
  /* 106d60: add x10, sp, #0x30 */
  ARC_X_W(c, 10, ((c)->sp + UINT64_C(48)));
  /* 106d64: orr x28, x20, #1 */
  ARC_X_W(c, 28, (ARC_X_R(c, 20) | UINT64_C(1)));
  /* 106d68: add x22, sp, #0x28 */
  ARC_X_W(c, 22, ((c)->sp + UINT64_C(40)));
  /* 106d6c: str x10, [sp, #0x28] */
  arc_st64(((c)->sp + INT64_C(40)), ARC_X_R(c, 10));
  /* 106d70: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 106d74: str wzr, [sp, #0x24] */
  arc_st32(((c)->sp + INT64_C(36)), ARC_W_R(c, 31));
  /* 106d78: csinc x24, x9, x20, ne */
  ARC_X_W(c, 24, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 20)) + 1)));
  /* 106d7c: mov w20, #0x16 */
  ARC_W_W(c, 20, UINT64_C(22));
  /* 106d80: str x24, [x26] */
  arc_st64(ARC_X_R(c, 26), ARC_X_R(c, 24));
  /* 106d84: b #0x106d90 */
  goto L_106d90;
L_106d88:;
  /* 106d88: add x8, x8, #4 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(4)));
  /* 106d8c: str x8, [x19, #0x18] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(24)), ARC_X_R(c, 8));
L_106d90:;
  /* 106d90: cbz x19, #0x106da8 */
  if ((ARC_X_R(c, 19)) == 0) goto L_106da8;
  /* 106d94: ldp x8, x9, [x19, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 106d98: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 106d9c: b.eq #0x106db4 */
  if (ARC_COND(c, 0)) goto L_106db4;
  /* 106da0: ldr w0, [x8] */
  ARC_W_W(c, 0, arc_ld32(ARC_X_R(c, 8)));
  /* 106da4: b #0x106dc4 */
  goto L_106dc4;
L_106da8:;
  /* 106da8: cbz x21, #0x106f60 */
  if ((ARC_X_R(c, 21)) == 0) goto L_106f60;
  /* 106dac: mov w25, #1 */
  ARC_W_W(c, 25, UINT64_C(1));
  /* 106db0: b #0x106dd8 */
  goto L_106dd8;
L_106db4:;
  /* 106db4: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 106db8: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 106dbc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 106dc0: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1076676));
  arc_dispatch(c, ARC_X_R(c, 8));
L_106dc4:;
  /* 106dc4: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 106dc8: cset w25, eq */
  ARC_W_W(c, 25, (ARC_COND(c, 0) ? 1 : 0));
  /* 106dcc: csel x8, xzr, x19, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 19)));
  /* 106dd0: cbz x21, #0x106e14 */
  if ((ARC_X_R(c, 21)) == 0) goto L_106e14;
  /* 106dd4: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
L_106dd8:;
  /* 106dd8: ldp x8, x9, [x21, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 106ddc: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 106de0: b.eq #0x106dec */
  if (ARC_COND(c, 0)) goto L_106dec;
  /* 106de4: ldr w0, [x8] */
  ARC_W_W(c, 0, arc_ld32(ARC_X_R(c, 8)));
  /* 106de8: b #0x106dfc */
  goto L_106dfc;
L_106dec:;
  /* 106dec: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 106df0: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 106df4: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 106df8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1076732));
  arc_dispatch(c, ARC_X_R(c, 8));
L_106dfc:;
  /* 106dfc: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 106e00: cset w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? 1 : 0));
  /* 106e04: csel x21, xzr, x21, eq */
  ARC_X_W(c, 21, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 21)));
  /* 106e08: cmp w25, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 25), ARC_W_R(c, 8));
  /* 106e0c: b.ne #0x106e1c */
  if (ARC_COND(c, 1)) goto L_106e1c;
  /* 106e10: b #0x106f6c */
  goto L_106f6c;
L_106e14:;
  /* 106e14: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 106e18: b.eq #0x106f68 */
  if (ARC_COND(c, 0)) goto L_106f68;
L_106e1c:;
  /* 106e1c: ldurb w8, [x29, #-0xa8] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-168))));
  /* 106e20: ldr x9, [x26, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 26) + INT64_C(16))));
  /* 106e24: ldr x11, [x26] */
  ARC_X_W(c, 11, arc_ld64(ARC_X_R(c, 26)));
  /* 106e28: lsr x10, x8, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* 106e2c: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 106e30: csel x25, x10, x9, eq */
  ARC_X_W(c, 25, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* 106e34: add x9, x24, x25 */
  ARC_X_W(c, 9, (ARC_X_R(c, 24) + ARC_X_R(c, 25)));
  /* 106e38: cmp x11, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 9));
  /* 106e3c: b.ne #0x106ef4 */
  if (ARC_COND(c, 1)) goto L_106ef4;
  /* 106e40: cmp x25, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 25), UINT64_C(1));
  /* 106e44: b.lt #0x106e5c */
  if (ARC_COND(c, 11)) goto L_106e5c;
  /* 106e48: sub x0, x29, #0xa8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(168)));
  /* 106e4c: mov x1, x25 */
  ARC_X_W(c, 1, ARC_X_R(c, 25));
  /* 106e50: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 106e54: bl #0x142d10 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1076824));
  fn1_142d10(c);
  /* 106e58: b #0x106e80 */
  goto L_106e80;
L_106e5c:;
  /* 106e5c: lsl x9, x25, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 25)) << ((UINT64_C(1)) & 63)));
  /* 106e60: tbnz w8, #0, #0x106e74 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_106e74;
  /* 106e64: lsl w8, w9, #1 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 9)) << ((UINT64_C(1)) & 31)));
  /* 106e68: sturb w8, [x29, #-0xa8] */
  arc_st8((ARC_X_R(c, 29) + INT64_C(-168)), ARC_W_R(c, 8));
  /* 106e6c: mov x8, x28 */
  ARC_X_W(c, 8, ARC_X_R(c, 28));
  /* 106e70: b #0x106e7c */
  goto L_106e7c;
L_106e74:;
  /* 106e74: ldr x8, [x26, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 26) + INT64_C(24))));
  /* 106e78: str x9, [x26, #0x10] */
  arc_st64((ARC_X_R(c, 26) + INT64_C(16)), ARC_X_R(c, 9));
L_106e7c:;
  /* 106e7c: strb wzr, [x8, x9] */
  arc_st8((ARC_X_R(c, 8) + ARC_X_R(c, 9)), ARC_W_R(c, 31));
L_106e80:;
  /* 106e80: ldp x9, x10, [x26, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 26) + INT64_C(8));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* 106e84: ldurb w8, [x29, #-0xa8] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-168))));
  /* 106e88: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 106e8c: and x11, x9, #0xfffffffffffffffe */
  ARC_X_W(c, 11, (ARC_X_R(c, 9) & UINT64_C(18446744073709551614)));
  /* 106e90: ubfx x12, x9, #1, #7 */
  ARC_X_W(c, 12, (((uint64_t)(ARC_X_R(c, 9)) >> 1) & UINT64_C(127)));
  /* 106e94: sub x11, x11, #1 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) - UINT64_C(1)));
  /* 106e98: csel x8, x20, x11, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 20)) : ARC_X_R(c, 11)));
  /* 106e9c: tst x9, #1 */
  arc_flags_logical64(c, (uint64_t)(ARC_X_R(c, 9) & UINT64_C(1)));
  /* 106ea0: csel x10, x12, x10, eq */
  ARC_X_W(c, 10, (ARC_COND(c, 0) ? (ARC_X_R(c, 12)) : ARC_X_R(c, 10)));
  /* 106ea4: subs x1, x8, x10 */
  ARC_X_W(c, 1, arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10)));
  /* 106ea8: b.ls #0x106ebc */
  if (ARC_COND(c, 9)) goto L_106ebc;
  /* 106eac: sub x0, x29, #0xa8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(168)));
  /* 106eb0: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 106eb4: bl #0x142d10 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1076920));
  fn1_142d10(c);
  /* 106eb8: b #0x106edc */
  goto L_106edc;
L_106ebc:;
  /* 106ebc: tbnz w9, #0, #0x106ed0 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) != 0) goto L_106ed0;
  /* 106ec0: lsl w9, w8, #1 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 8)) << ((UINT64_C(1)) & 31)));
  /* 106ec4: sturb w9, [x29, #-0xa8] */
  arc_st8((ARC_X_R(c, 29) + INT64_C(-168)), ARC_W_R(c, 9));
  /* 106ec8: mov x9, x28 */
  ARC_X_W(c, 9, ARC_X_R(c, 28));
  /* 106ecc: b #0x106ed8 */
  goto L_106ed8;
L_106ed0:;
  /* 106ed0: ldr x9, [x26, #0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 26) + INT64_C(24))));
  /* 106ed4: str x8, [x26, #0x10] */
  arc_st64((ARC_X_R(c, 26) + INT64_C(16)), ARC_X_R(c, 8));
L_106ed8:;
  /* 106ed8: strb wzr, [x9, x8] */
  arc_st8((ARC_X_R(c, 9) + ARC_X_R(c, 8)), ARC_W_R(c, 31));
L_106edc:;
  /* 106edc: ldurb w8, [x29, #-0xa8] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-168))));
  /* 106ee0: ldr x9, [x26, #0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 26) + INT64_C(24))));
  /* 106ee4: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 106ee8: csel x24, x28, x9, eq */
  ARC_X_W(c, 24, (ARC_COND(c, 0) ? (ARC_X_R(c, 28)) : ARC_X_R(c, 9)));
  /* 106eec: add x8, x24, x25 */
  ARC_X_W(c, 8, (ARC_X_R(c, 24) + ARC_X_R(c, 25)));
  /* 106ef0: str x8, [x26] */
  arc_st64(ARC_X_R(c, 26), ARC_X_R(c, 8));
L_106ef4:;
  /* 106ef4: ldp x8, x9, [x19, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 106ef8: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 106efc: b.eq #0x106f08 */
  if (ARC_COND(c, 0)) goto L_106f08;
  /* 106f00: ldr w0, [x8] */
  ARC_W_W(c, 0, arc_ld32(ARC_X_R(c, 8)));
  /* 106f04: b #0x106f18 */
  goto L_106f18;
L_106f08:;
  /* 106f08: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 106f0c: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 106f10: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 106f14: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1077016));
  arc_dispatch(c, ARC_X_R(c, 8));
L_106f18:;
  /* 106f18: ldur w5, [x29, #-0xc] */
  ARC_W_W(c, 5, arc_ld32((ARC_X_R(c, 29) + INT64_C(-12))));
  /* 106f1c: sub x3, x29, #0xb0 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) - UINT64_C(176)));
  /* 106f20: add x4, sp, #0x24 */
  ARC_X_W(c, 4, ((c)->sp + UINT64_C(36)));
  /* 106f24: sub x6, x29, #0x90 */
  ARC_X_W(c, 6, (ARC_X_R(c, 29) - UINT64_C(144)));
  /* 106f28: add x7, sp, #0x30 */
  ARC_X_W(c, 7, ((c)->sp + UINT64_C(48)));
  /* 106f2c: mov w1, w23 */
  ARC_W_W(c, 1, ARC_W_R(c, 23));
  /* 106f30: mov x2, x24 */
  ARC_X_W(c, 2, ARC_X_R(c, 24));
  /* 106f34: stp x22, x27, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* 106f38: bl #0x143880 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1077052));
  fn1_143880(c);
  /* 106f3c: cbnz w0, #0x106f6c */
  if ((ARC_W_R(c, 0)) != 0) goto L_106f6c;
  /* 106f40: ldp x8, x9, [x19, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 106f44: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 106f48: b.ne #0x106d88 */
  if (ARC_COND(c, 1)) goto L_106d88;
  /* 106f4c: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 106f50: ldr x8, [x8, #0x50] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(80))));
  /* 106f54: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 106f58: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1077084));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 106f5c: b #0x106d90 */
  goto L_106d90;
L_106f60:;
  /* 106f60: mov x21, x19 */
  ARC_X_W(c, 21, ARC_X_R(c, 19));
  /* 106f64: b #0x106f6c */
  goto L_106f6c;
L_106f68:;
  /* 106f68: mov x19, x21 */
  ARC_X_W(c, 19, ARC_X_R(c, 21));
L_106f6c:;
  /* 106f6c: ldurb w8, [x29, #-0x90] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-144))));
  /* 106f70: ldr x9, [x26, #0x28] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 26) + INT64_C(40))));
  /* 106f74: ldr x22, [sp, #0x18] */
  ARC_X_W(c, 22, arc_ld64(((c)->sp + INT64_C(24))));
  /* 106f78: lsr x10, x8, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* 106f7c: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 106f80: csel x8, x10, x9, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* 106f84: cbz x8, #0x106fa8 */
  if ((ARC_X_R(c, 8)) == 0) goto L_106fa8;
  /* 106f88: ldr x8, [sp, #0x28] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(40))));
  /* 106f8c: add x9, sp, #0x30 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(48)));
  /* 106f90: sub x9, x8, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - ARC_X_R(c, 9)));
  /* 106f94: cmp x9, #0x9f */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(159));
  /* 106f98: b.gt #0x106fa8 */
  if (ARC_COND(c, 12)) goto L_106fa8;
  /* 106f9c: ldr w9, [sp, #0x24] */
  ARC_W_W(c, 9, arc_ld32(((c)->sp + INT64_C(36))));
  /* 106fa0: str w9, [x8], #4 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(4));
    arc_st32(_a, ARC_W_R(c, 9));
  }
  /* 106fa4: str x8, [sp, #0x28] */
  arc_st64(((c)->sp + INT64_C(40)), ARC_X_R(c, 8));
L_106fa8:;
  /* 106fa8: ldr x1, [x26] */
  ARC_X_W(c, 1, arc_ld64(ARC_X_R(c, 26)));
  /* 106fac: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 106fb0: mov x2, x22 */
  ARC_X_W(c, 2, ARC_X_R(c, 22));
  /* 106fb4: mov w3, w23 */
  ARC_W_W(c, 3, ARC_W_R(c, 23));
  /* 106fb8: bl #0x135fe4 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1077180));
  fn1_135fe4(c);
  /* 106fbc: ldurb w10, [x29, #-0x90] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 29) + INT64_C(-144))));
  /* 106fc0: ldr x12, [sp, #0x28] */
  ARC_X_W(c, 12, arc_ld64(((c)->sp + INT64_C(40))));
  /* 106fc4: add x11, sp, #0x30 */
  ARC_X_W(c, 11, ((c)->sp + UINT64_C(48)));
  /* 106fc8: ldr x8, [x26, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 26) + INT64_C(40))));
  /* 106fcc: lsr x9, x10, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 10)) >> ((UINT64_C(1)) & 63)));
  /* 106fd0: ands w13, w10, #1 */
  { uint32_t _r = (uint32_t)(ARC_W_R(c, 10) & UINT64_C(1));
    arc_flags_logical32(c, _r);
    ARC_W_W(c, 13, _r); }
  /* 106fd4: sub x11, x12, x11 */
  ARC_X_W(c, 11, (ARC_X_R(c, 12) - ARC_X_R(c, 11)));
  /* 106fd8: csel x8, x9, x8, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* 106fdc: ldr x9, [sp, #0x10] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(16))));
  /* 106fe0: cmp x11, #5 */
  (void)arc_sub64(c, ARC_X_R(c, 11), UINT64_C(5));
  /* 106fe4: str x0, [x9] */
  arc_st64(ARC_X_R(c, 9), ARC_X_R(c, 0));
  /* 106fe8: b.lt #0x107148 */
  if (ARC_COND(c, 11)) goto L_107148;
  /* 106fec: cbz x8, #0x107148 */
  if ((ARC_X_R(c, 8)) == 0) goto L_107148;
  /* 106ff0: sub x8, x12, #4 */
  ARC_X_W(c, 8, (ARC_X_R(c, 12) - UINT64_C(4)));
  /* 106ff4: add x9, sp, #0x30 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(48)));
  /* 106ff8: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* 106ffc: cset w11, lo */
  ARC_W_W(c, 11, (ARC_COND(c, 3) ? 1 : 0));
  /* 107000: cmp x9, x12 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 12));
  /* 107004: b.eq #0x1070b4 */
  if (ARC_COND(c, 0)) goto L_1070b4;
  /* 107008: cbz w11, #0x1070b4 */
  if ((ARC_W_R(c, 11)) == 0) goto L_1070b4;
  /* 10700c: add x10, sp, #0x30 */
  ARC_X_W(c, 10, ((c)->sp + UINT64_C(48)));
  /* 107010: sub x14, x12, #8 */
  ARC_X_W(c, 14, (ARC_X_R(c, 12) - UINT64_C(8)));
  /* 107014: add x11, x10, #4 */
  ARC_X_W(c, 11, (ARC_X_R(c, 10) + UINT64_C(4)));
  /* 107018: cmp x14, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 14), ARC_X_R(c, 11));
  /* 10701c: csel x13, x14, x11, hi */
  ARC_X_W(c, 13, (ARC_COND(c, 8) ? (ARC_X_R(c, 14)) : ARC_X_R(c, 11)));
  /* 107020: sub x13, x13, #4 */
  ARC_X_W(c, 13, (ARC_X_R(c, 13) - UINT64_C(4)));
  /* 107024: cmp x13, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 13), ARC_X_R(c, 10));
  /* 107028: cinc x15, x10, ne */
  ARC_X_W(c, 15, (ARC_COND(c, 1) ? (ARC_X_R(c, 10)) + 1 : (ARC_X_R(c, 10))));
  /* 10702c: cmp x13, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 13), ARC_X_R(c, 10));
  /* 107030: sub x15, x13, x15 */
  ARC_X_W(c, 15, (ARC_X_R(c, 13) - ARC_X_R(c, 15)));
  /* 107034: lsr x15, x15, #3 */
  ARC_X_W(c, 15, ((uint64_t)(ARC_X_R(c, 15)) >> ((UINT64_C(3)) & 63)));
  /* 107038: cinc x13, x15, ne */
  ARC_X_W(c, 13, (ARC_COND(c, 1) ? (ARC_X_R(c, 15)) + 1 : (ARC_X_R(c, 15))));
  /* 10703c: cmp x13, #0x13 */
  (void)arc_sub64(c, ARC_X_R(c, 13), UINT64_C(19));
  /* 107040: b.lo #0x107088 */
  if (ARC_COND(c, 3)) goto L_107088;
  /* 107044: cmp x14, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 14), ARC_X_R(c, 11));
  /* 107048: csel x14, x14, x11, hi */
  ARC_X_W(c, 14, (ARC_COND(c, 8) ? (ARC_X_R(c, 14)) : ARC_X_R(c, 11)));
  /* 10704c: sub x14, x14, #4 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) - UINT64_C(4)));
  /* 107050: cmp x14, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 14), ARC_X_R(c, 10));
  /* 107054: cinc x15, x10, ne */
  ARC_X_W(c, 15, (ARC_COND(c, 1) ? (ARC_X_R(c, 10)) + 1 : (ARC_X_R(c, 10))));
  /* 107058: cmp x14, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 14), ARC_X_R(c, 10));
  /* 10705c: sub x15, x14, x15 */
  ARC_X_W(c, 15, (ARC_X_R(c, 14) - ARC_X_R(c, 15)));
  /* 107060: lsr x15, x15, #3 */
  ARC_X_W(c, 15, ((uint64_t)(ARC_X_R(c, 15)) >> ((UINT64_C(3)) & 63)));
  /* 107064: cinc x14, x15, ne */
  ARC_X_W(c, 14, (ARC_COND(c, 1) ? (ARC_X_R(c, 15)) + 1 : (ARC_X_R(c, 15))));
  /* 107068: cmp x10, x12 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 12));
  /* 10706c: b.hs #0x107238 */
  if (ARC_COND(c, 2)) goto L_107238;
  /* 107070: lsl x14, x14, #2 */
  ARC_X_W(c, 14, ((uint64_t)(ARC_X_R(c, 14)) << ((UINT64_C(2)) & 63)));
  /* 107074: sub x15, x12, x14 */
  ARC_X_W(c, 15, (ARC_X_R(c, 12) - ARC_X_R(c, 14)));
  /* 107078: add x11, x11, x14 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) + ARC_X_R(c, 14)));
  /* 10707c: sub x14, x15, #4 */
  ARC_X_W(c, 14, (ARC_X_R(c, 15) - UINT64_C(4)));
  /* 107080: cmp x14, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 14), ARC_X_R(c, 11));
  /* 107084: b.hs #0x107238 */
  if (ARC_COND(c, 2)) goto L_107238;
L_107088:;
  /* 107088: mov x11, x8 */
  ARC_X_W(c, 11, ARC_X_R(c, 8));
L_10708c:;
  /* 10708c: add x10, x10, #4 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(4)));
L_107090:;
  /* 107090: ldr w12, [x11] */
  ARC_W_W(c, 12, arc_ld32(ARC_X_R(c, 11)));
  /* 107094: ldur w13, [x10, #-4] */
  ARC_W_W(c, 13, arc_ld32((ARC_X_R(c, 10) + INT64_C(-4))));
  /* 107098: stur w12, [x10, #-4] */
  arc_st32((ARC_X_R(c, 10) + INT64_C(-4)), ARC_W_R(c, 12));
  /* 10709c: str w13, [x11], #0xfffffffffffffffc */
  { const uint64_t _a = ARC_X_R(c, 11);
    ARC_X_W(c, 11, ARC_X_R(c, 11) + INT64_C(-4));
    arc_st32(_a, ARC_W_R(c, 13));
  }
  /* 1070a0: cmp x10, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 11));
  /* 1070a4: add x10, x10, #4 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(4)));
  /* 1070a8: b.lo #0x107090 */
  if (ARC_COND(c, 3)) goto L_107090;
L_1070ac:;
  /* 1070ac: ldurb w10, [x29, #-0x90] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 29) + INT64_C(-144))));
  /* 1070b0: and w13, w10, #1 */
  ARC_W_W(c, 13, (ARC_W_R(c, 10) & UINT64_C(1)));
L_1070b4:;
  /* 1070b4: ldr x11, [x26, #0x30] */
  ARC_X_W(c, 11, arc_ld64((ARC_X_R(c, 26) + INT64_C(48))));
  /* 1070b8: cmp w13, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 13), UINT64_C(0));
  /* 1070bc: sub x12, x29, #0x90 */
  ARC_X_W(c, 12, (ARC_X_R(c, 29) - UINT64_C(144)));
  /* 1070c0: csinc x11, x11, x12, ne */
  ARC_X_W(c, 11, (ARC_COND(c, 1) ? (ARC_X_R(c, 11)) : ((ARC_X_R(c, 12)) + 1)));
  /* 1070c4: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* 1070c8: b.hs #0x107120 */
  if (ARC_COND(c, 2)) goto L_107120;
  /* 1070cc: lsr w9, w10, #1 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 10)) >> ((UINT64_C(1)) & 31)));
  /* 1070d0: ldr x10, [x26, #0x28] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 26) + INT64_C(40))));
  /* 1070d4: cmp w13, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 13), UINT64_C(0));
  /* 1070d8: csel x9, x9, x10, eq */
  ARC_X_W(c, 9, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 10)));
  /* 1070dc: add x10, sp, #0x30 */
  ARC_X_W(c, 10, ((c)->sp + UINT64_C(48)));
  /* 1070e0: add x9, x11, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 11) + ARC_X_R(c, 9)));
  /* 1070e4: b #0x107100 */
  goto L_107100;
L_1070e8:;
  /* 1070e8: sub x12, x9, x11 */
  ARC_X_W(c, 12, (ARC_X_R(c, 9) - ARC_X_R(c, 11)));
  /* 1070ec: add x10, x10, #4 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(4)));
  /* 1070f0: cmp x12, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 12), UINT64_C(1));
  /* 1070f4: cinc x11, x11, gt */
  ARC_X_W(c, 11, (ARC_COND(c, 12) ? (ARC_X_R(c, 11)) + 1 : (ARC_X_R(c, 11))));
  /* 1070f8: cmp x10, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 8));
  /* 1070fc: b.hs #0x107120 */
  if (ARC_COND(c, 2)) goto L_107120;
L_107100:;
  /* 107100: ldrb w12, [x11] */
  ARC_W_W(c, 12, arc_ld8(ARC_X_R(c, 11)));
  /* 107104: cbz w12, #0x1070e8 */
  if ((ARC_W_R(c, 12)) == 0) goto L_1070e8;
  /* 107108: cmp w12, #0xff */
  (void)arc_sub32(c, ARC_W_R(c, 12), UINT64_C(255));
  /* 10710c: b.eq #0x1070e8 */
  if (ARC_COND(c, 0)) goto L_1070e8;
  /* 107110: ldr w13, [x10] */
  ARC_W_W(c, 13, arc_ld32(ARC_X_R(c, 10)));
  /* 107114: cmp w13, w12 */
  (void)arc_sub32(c, ARC_W_R(c, 13), ARC_W_R(c, 12));
  /* 107118: b.eq #0x1070e8 */
  if (ARC_COND(c, 0)) goto L_1070e8;
  /* 10711c: b #0x107140 */
  goto L_107140;
L_107120:;
  /* 107120: ldrb w9, [x11] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 11)));
  /* 107124: cbz w9, #0x107148 */
  if ((ARC_W_R(c, 9)) == 0) goto L_107148;
  /* 107128: cmp w9, #0xff */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(255));
  /* 10712c: b.eq #0x107148 */
  if (ARC_COND(c, 0)) goto L_107148;
  /* 107130: ldr w8, [x8] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 8)));
  /* 107134: sub w8, w8, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) - UINT64_C(1)));
  /* 107138: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* 10713c: b.lo #0x107148 */
  if (ARC_COND(c, 3)) goto L_107148;
L_107140:;
  /* 107140: mov w8, #4 */
  ARC_W_W(c, 8, UINT64_C(4));
  /* 107144: str w8, [x22] */
  arc_st32(ARC_X_R(c, 22), ARC_W_R(c, 8));
L_107148:;
  /* 107148: cbz x19, #0x107160 */
  if ((ARC_X_R(c, 19)) == 0) goto L_107160;
  /* 10714c: ldp x8, x9, [x19, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 107150: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 107154: b.eq #0x10716c */
  if (ARC_COND(c, 0)) goto L_10716c;
  /* 107158: ldr w0, [x8] */
  ARC_W_W(c, 0, arc_ld32(ARC_X_R(c, 8)));
  /* 10715c: b #0x10717c */
  goto L_10717c;
L_107160:;
  /* 107160: cbz x21, #0x1071d4 */
  if ((ARC_X_R(c, 21)) == 0) goto L_1071d4;
  /* 107164: mov w20, #1 */
  ARC_W_W(c, 20, UINT64_C(1));
  /* 107168: b #0x107190 */
  goto L_107190;
L_10716c:;
  /* 10716c: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 107170: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 107174: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 107178: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1077628));
  arc_dispatch(c, ARC_X_R(c, 8));
L_10717c:;
  /* 10717c: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 107180: cset w20, eq */
  ARC_W_W(c, 20, (ARC_COND(c, 0) ? 1 : 0));
  /* 107184: csel x8, xzr, x19, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 19)));
  /* 107188: cbz x21, #0x1071c8 */
  if ((ARC_X_R(c, 21)) == 0) goto L_1071c8;
  /* 10718c: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
L_107190:;
  /* 107190: ldp x8, x9, [x21, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 107194: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 107198: b.eq #0x1071a4 */
  if (ARC_COND(c, 0)) goto L_1071a4;
  /* 10719c: ldr w0, [x8] */
  ARC_W_W(c, 0, arc_ld32(ARC_X_R(c, 8)));
  /* 1071a0: b #0x1071b4 */
  goto L_1071b4;
L_1071a4:;
  /* 1071a4: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 1071a8: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 1071ac: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 1071b0: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1077684));
  arc_dispatch(c, ARC_X_R(c, 8));
L_1071b4:;
  /* 1071b4: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 1071b8: cset w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? 1 : 0));
  /* 1071bc: eor w8, w20, w8 */
  ARC_W_W(c, 8, (ARC_W_R(c, 20) ^ ARC_W_R(c, 8)));
  /* 1071c0: tbz w8, #0, #0x1071d4 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1071d4;
  /* 1071c4: b #0x1071e0 */
  goto L_1071e0;
L_1071c8:;
  /* 1071c8: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 1071cc: b.ne #0x1071e0 */
  if (ARC_COND(c, 1)) goto L_1071e0;
  /* 1071d0: mov x19, xzr */
  ARC_X_W(c, 19, ARC_X_R(c, 31));
L_1071d4:;
  /* 1071d4: ldr w8, [x22] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 22)));
  /* 1071d8: orr w8, w8, #2 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | UINT64_C(2)));
  /* 1071dc: str w8, [x22] */
  arc_st32(ARC_X_R(c, 22), ARC_W_R(c, 8));
L_1071e0:;
  /* 1071e0: ldurb w8, [x29, #-0xa8] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-168))));
  /* 1071e4: tbz w8, #0, #0x1071f8 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1071f8;
  /* 1071e8: ldr x8, [x26, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 26) + INT64_C(8))));
  /* 1071ec: ldr x0, [x26, #0x18] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 26) + INT64_C(24))));
  /* 1071f0: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 1071f4: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1077752));
  fn1_142608(c);
L_1071f8:;
  /* 1071f8: ldurb w8, [x29, #-0x90] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-144))));
  /* 1071fc: tbz w8, #0, #0x107210 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_107210;
  /* 107200: ldr x8, [x26, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 26) + INT64_C(32))));
  /* 107204: ldr x0, [x26, #0x30] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 26) + INT64_C(48))));
  /* 107208: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 10720c: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1077776));
  fn1_142608(c);
L_107210:;
  /* 107210: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 107214: ldp x20, x19, [sp, #0x1d0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(464));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 107218: ldp x22, x21, [sp, #0x1c0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(448));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 10721c: ldp x24, x23, [sp, #0x1b0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(432));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 107220: ldp x26, x25, [sp, #0x1a0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(416));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* 107224: ldp x28, x27, [sp, #0x190] */
  { const uint64_t _pa = ((c)->sp + INT64_C(400));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* 107228: ldp x29, x30, [sp, #0x180] */
  { const uint64_t _pa = ((c)->sp + INT64_C(384));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 10722c: add sp, sp, #0x1e0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(480)));
  /* 107230: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 107234: ret  */
  return;
L_107238:;
  /* 107238: add x13, x13, #1 */
  ARC_X_W(c, 13, (ARC_X_R(c, 13) + UINT64_C(1)));
  /* 10723c: add x15, sp, #0x30 */
  ARC_X_W(c, 15, ((c)->sp + UINT64_C(48)));
  /* 107240: sub x12, x12, #0x10 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) - UINT64_C(16)));
  /* 107244: and x14, x13, #0x7ffffffffffffff8 */
  ARC_X_W(c, 14, (ARC_X_R(c, 13) & UINT64_C(9223372036854775800)));
  /* 107248: lsl x10, x14, #2 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 14)) << ((UINT64_C(2)) & 63)));
  /* 10724c: mov x16, x14 */
  ARC_X_W(c, 16, ARC_X_R(c, 14));
  /* 107250: sub x11, x8, x10 */
  ARC_X_W(c, 11, (ARC_X_R(c, 8) - ARC_X_R(c, 10)));
  /* 107254: add x10, x15, x10 */
  ARC_X_W(c, 10, (ARC_X_R(c, 15) + ARC_X_R(c, 10)));
  /* 107258: add x15, x15, #0x10 */
  ARC_X_W(c, 15, (ARC_X_R(c, 15) + UINT64_C(16)));
L_10725c:;
  /* 10725c: ldp q1, q0, [x12, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 12) + INT64_C(-16));
    arc_q_w(c, 1, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 0, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* 107260: sub x16, x16, #8 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) - UINT64_C(8)));
  /* 107264: ldp q2, q3, [x15, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 15) + INT64_C(-16));
    arc_q_w(c, 2, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 3, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* 107268: rev64 v0.4s, v0.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[0].u32[1];
    _t.u32[1] = (c)->q[0].u32[0];
    _t.u32[2] = (c)->q[0].u32[3];
    _t.u32[3] = (c)->q[0].u32[2];
    (c)->q[0] = _t; }
  /* 10726c: rev64 v1.4s, v1.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[1].u32[1];
    _t.u32[1] = (c)->q[1].u32[0];
    _t.u32[2] = (c)->q[1].u32[3];
    _t.u32[3] = (c)->q[1].u32[2];
    (c)->q[1] = _t; }
  /* 107270: rev64 v2.4s, v2.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[2].u32[1];
    _t.u32[1] = (c)->q[2].u32[0];
    _t.u32[2] = (c)->q[2].u32[3];
    _t.u32[3] = (c)->q[2].u32[2];
    (c)->q[2] = _t; }
  /* 107274: rev64 v3.4s, v3.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[3].u32[1];
    _t.u32[1] = (c)->q[3].u32[0];
    _t.u32[2] = (c)->q[3].u32[3];
    _t.u32[3] = (c)->q[3].u32[2];
    (c)->q[3] = _t; }
  /* 107278: ext v0.16b, v0.16b, v0.16b, #8 */
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
  /* 10727c: ext v1.16b, v1.16b, v1.16b, #8 */
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
  /* 107280: ext v2.16b, v2.16b, v2.16b, #8 */
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
  /* 107284: ext v3.16b, v3.16b, v3.16b, #8 */
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
  /* 107288: stp q0, q1, [x15, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 15) + INT64_C(-16));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[1].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[1].u64[1]);
  }
  /* 10728c: add x15, x15, #0x20 */
  ARC_X_W(c, 15, (ARC_X_R(c, 15) + UINT64_C(32)));
  /* 107290: stp q3, q2, [x12, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 12) + INT64_C(-16));
    arc_st64(_pa, (c)->q[3].u64[0]);
    arc_st64(_pa + 8, (c)->q[3].u64[1]);
    arc_st64((_pa + 16), (c)->q[2].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[2].u64[1]);
  }
  /* 107294: sub x12, x12, #0x20 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) - UINT64_C(32)));
  /* 107298: cbnz x16, #0x10725c */
  if ((ARC_X_R(c, 16)) != 0) goto L_10725c;
  /* 10729c: cmp x13, x14 */
  (void)arc_sub64(c, ARC_X_R(c, 13), ARC_X_R(c, 14));
  /* 1072a0: b.eq #0x1070ac */
  if (ARC_COND(c, 0)) goto L_1070ac;
  /* 1072a4: b #0x10708c */
  goto L_10708c;
  /* 1072a8: b #0x1072b4 */
  goto L_1072b4;
  /* 1072ac: b #0x1072b4 */
  goto L_1072b4;
  /* 1072b0: b #0x1072b4 */
  goto L_1072b4;
L_1072b4:;
  /* 1072b4: ldurb w8, [x29, #-0xa8] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-168))));
  /* 1072b8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1072bc: tbnz w8, #0, #0x1072d0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_1072d0;
  /* 1072c0: ldurb w8, [x29, #-0x90] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-144))));
  /* 1072c4: tbnz w8, #0, #0x1072e8 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_1072e8;
L_1072c8:;
  /* 1072c8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1072cc: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1077968));
  fn1_9cc20(c);
L_1072d0:;
  /* 1072d0: ldr x8, [x26, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 26) + INT64_C(8))));
  /* 1072d4: ldr x0, [x26, #0x18] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 26) + INT64_C(24))));
  /* 1072d8: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 1072dc: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1077984));
  fn1_142608(c);
  /* 1072e0: ldurb w8, [x29, #-0x90] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-144))));
  /* 1072e4: tbz w8, #0, #0x1072c8 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1072c8;
L_1072e8:;
  /* 1072e8: ldr x8, [x26, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 26) + INT64_C(32))));
  /* 1072ec: ldr x0, [x26, #0x30] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 26) + INT64_C(48))));
  /* 1072f0: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 1072f4: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1078008));
  fn1_142608(c);
  /* 1072f8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1072fc: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1078016));
  fn1_9cc20(c);
}

void fn1_1119ec(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039048684));
  /* 1119ec: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 1119f0: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1119f4: stp x24, x23, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 1119f8: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1119fc: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 111a00: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 111a04: ldr x8, [x0, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_a));
  }
  /* 111a08: mov x20, x5 */
  ARC_X_W(c, 20, ARC_X_R(c, 5));
  /* 111a0c: mov x21, x4 */
  ARC_X_W(c, 21, ARC_X_R(c, 4));
  /* 111a10: mov x22, x3 */
  ARC_X_W(c, 22, ARC_X_R(c, 3));
  /* 111a14: mov x23, x2 */
  ARC_X_W(c, 23, ARC_X_R(c, 2));
  /* 111a18: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 111a1c: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 111a20: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1120804));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 111a24: mov x24, x0 */
  ARC_X_W(c, 24, ARC_X_R(c, 0));
  /* 111a28: add x3, x0, #0x150 */
  ARC_X_W(c, 3, (ARC_X_R(c, 0) + UINT64_C(336)));
  /* 111a2c: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 111a30: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 111a34: mov x2, x24 */
  ARC_X_W(c, 2, ARC_X_R(c, 24));
  /* 111a38: mov x4, x20 */
  ARC_X_W(c, 4, ARC_X_R(c, 20));
  /* 111a3c: mov x5, x21 */
  ARC_X_W(c, 5, ARC_X_R(c, 21));
  /* 111a40: mov w6, wzr */
  ARC_W_W(c, 6, ARC_W_R(c, 31));
  /* 111a44: bl #0x104878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1120840));
  fn1_104878(c);
  /* 111a48: sub x8, x0, x24 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) - ARC_X_R(c, 24)));
  /* 111a4c: cmp x8, #0x14f */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(335));
  /* 111a50: b.gt #0x111a90 */
  if (ARC_COND(c, 12)) goto L_111a90;
  /* 111a54: asr x8, x8, #3 */
  ARC_X_W(c, 8, ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(3)) & 63))));
  /* 111a58: mov x9, #-0x5555555555555556 */
  ARC_X_W(c, 9, UINT64_C(12297829382473034410));
  /* 111a5c: movk x9, #0xaaab */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(18446744073709486080)) | UINT64_C(43691)));
  /* 111a60: mul x8, x8, x9 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) * (uint64_t)(ARC_X_R(c, 9))));
  /* 111a64: mov x9, #0x4925 */
  ARC_X_W(c, 9, UINT64_C(18725));
  /* 111a68: movk x9, #0x2492, lsl #16 */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(18446744069414649855)) | UINT64_C(613548032)));
  /* 111a6c: movk x9, #0x9249, lsl #32 */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(18446462603027808255)) | UINT64_C(160842230267904)));
  /* 111a70: movk x9, #0x4924, lsl #48 */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(281474976710655)) | UINT64_C(5270337463930322944)));
  /* 111a74: smulh x9, x8, x9 */
  ARC_X_W(c, 9, arc_smulh(ARC_X_R(c, 8), ARC_X_R(c, 9)));
  /* 111a78: lsr x10, x9, #0x3f */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(63)) & 63)));
  /* 111a7c: lsr x9, x9, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(1)) & 63)));
  /* 111a80: add w9, w9, w10 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) + ARC_W_R(c, 10)));
  /* 111a84: sub w9, w9, w9, lsl #3 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) - ((uint32_t)(ARC_W_R(c, 9)) << 3)));
  /* 111a88: add w8, w8, w9 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) + ARC_W_R(c, 9)));
  /* 111a8c: str w8, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 8));
L_111a90:;
  /* 111a90: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 111a94: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 111a98: ldp x24, x23, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 111a9c: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 111aa0: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 111aa4: ret  */
  return;
}

void fn1_113e20(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039057952));
  /* 113e20: bti c */
  /* bti: no architectural effect here */
  /* 113e24: mov x9, x0 */
  ARC_X_W(c, 9, ARC_X_R(c, 0));
  /* 113e28: ldrb w10, [x9, #0x30]! */
  { const uint64_t _a = (ARC_X_R(c, 9) + INT64_C(48));
    ARC_X_W(c, 9, ARC_X_R(c, 9) + INT64_C(48));
    ARC_W_W(c, 10, arc_ld8(_a));
  }
  /* 113e2c: tbnz w10, #0, #0x113e44 */
  if (((ARC_W_R(c, 10)) >> 0 & 1) != 0) goto L_113e44;
  /* 113e30: ldr q0, [x9] */
  arc_q_w(c, 0, arc_ld64(ARC_X_R(c, 9)), arc_ld64(ARC_X_R(c, 9) + 8));
  /* 113e34: ldr x9, [x9, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(16))));
  /* 113e38: str q0, [x8] */
  arc_st64(ARC_X_R(c, 8), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 8) + 8, (c)->q[0].u64[1]);
  /* 113e3c: str x9, [x8, #0x10] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(16)), ARC_X_R(c, 9));
  /* 113e40: ret  */
  return;
L_113e44:;
  /* 113e44: ldp x2, x1, [x0, #0x38] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(56));
    ARC_X_W(c, 2, arc_ld64(_pa));
    ARC_X_W(c, 1, arc_ld64(_pa + 8));
  }
  /* 113e48: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 113e4c: b #0xda588 */
  fn1_da588(c); return;
}

void fn1_11adf4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039086580));
  /* 11adf4: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 11adf8: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 11adfc: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 11ae00: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 11ae04: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 11ae08: bl #0x143e08 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1158668));
  fn1_143e08(c);
  /* 11ae0c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 11ae10: mov w1, #0x10 */
  ARC_W_W(c, 1, UINT64_C(16));
  /* 11ae14: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 11ae18: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 11ae1c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 11ae20: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_1259fc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039130620));
  /* 1259fc: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 125a00: sub sp, sp, #0x80 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(128)));
  /* 125a04: stp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 125a08: str x25, [sp, #0x40] */
  arc_st64(((c)->sp + INT64_C(64)), ARC_X_R(c, 25));
  /* 125a0c: stp x24, x23, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 125a10: stp x22, x21, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 125a14: stp x20, x19, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 125a18: add x29, sp, #0x30 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(48)));
  /* 125a1c: sub x23, x2, x1 */
  ARC_X_W(c, 23, (ARC_X_R(c, 2) - ARC_X_R(c, 1)));
  /* 125a20: cmn x23, #8 */
  (void)arc_add64(c, ARC_X_R(c, 23), UINT64_C(8), 0);
  /* 125a24: b.hs #0x125ba0 */
  if (ARC_COND(c, 2)) goto L_125ba0;
  /* 125a28: mov x21, x4 */
  ARC_X_W(c, 21, ARC_X_R(c, 4));
  /* 125a2c: mov x20, x3 */
  ARC_X_W(c, 20, ARC_X_R(c, 3));
  /* 125a30: mov x22, x2 */
  ARC_X_W(c, 22, ARC_X_R(c, 2));
  /* 125a34: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 125a38: cmp x23, #0x16 */
  (void)arc_sub64(c, ARC_X_R(c, 23), UINT64_C(22));
  /* 125a3c: b.hi #0x125a5c */
  if (ARC_COND(c, 8)) goto L_125a5c;
  /* 125a40: lsl w8, w23, #1 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 23)) << ((UINT64_C(1)) & 31)));
  /* 125a44: add x9, sp, #0x18 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(24)));
  /* 125a48: orr x24, x9, #1 */
  ARC_X_W(c, 24, (ARC_X_R(c, 9) | UINT64_C(1)));
  /* 125a4c: strb w8, [sp, #0x18] */
  arc_st8(((c)->sp + INT64_C(24)), ARC_W_R(c, 8));
  /* 125a50: cmp x22, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 1));
  /* 125a54: b.ne #0x125a94 */
  if (ARC_COND(c, 1)) goto L_125a94;
  /* 125a58: b #0x125aa0 */
  goto L_125aa0;
L_125a5c:;
  /* 125a5c: orr x8, x23, #7 */
  ARC_X_W(c, 8, (ARC_X_R(c, 23) | UINT64_C(7)));
  /* 125a60: mov w9, #0x1a */
  ARC_W_W(c, 9, UINT64_C(26));
  /* 125a64: mov x24, x1 */
  ARC_X_W(c, 24, ARC_X_R(c, 1));
  /* 125a68: cmp x8, #0x17 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(23));
  /* 125a6c: csinc x25, x9, x8, eq */
  ARC_X_W(c, 25, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 8)) + 1)));
  /* 125a70: mov x0, x25 */
  ARC_X_W(c, 0, ARC_X_R(c, 25));
  /* 125a74: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1202808));
  fn1_1428f0(c);
  /* 125a78: mov x1, x24 */
  ARC_X_W(c, 1, ARC_X_R(c, 24));
  /* 125a7c: mov x24, x0 */
  ARC_X_W(c, 24, ARC_X_R(c, 0));
  /* 125a80: orr x8, x25, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 25) | UINT64_C(1)));
  /* 125a84: stp x23, x0, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 23));
    arc_st64(_pa + 8, ARC_X_R(c, 0));
  }
  /* 125a88: str x8, [sp, #0x18] */
  arc_st64(((c)->sp + INT64_C(24)), ARC_X_R(c, 8));
  /* 125a8c: cmp x22, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 1));
  /* 125a90: b.eq #0x125aa0 */
  if (ARC_COND(c, 0)) goto L_125aa0;
L_125a94:;
  /* 125a94: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 125a98: mov x2, x23 */
  ARC_X_W(c, 2, ARC_X_R(c, 23));
  /* 125a9c: bl #0x1449d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1202848));
  fn1_1449d8(c);
L_125aa0:;
  /* 125aa0: sub x22, x21, x20 */
  ARC_X_W(c, 22, (ARC_X_R(c, 21) - ARC_X_R(c, 20)));
  /* 125aa4: strb wzr, [x24, x23] */
  arc_st8((ARC_X_R(c, 24) + ARC_X_R(c, 23)), ARC_W_R(c, 31));
  /* 125aa8: cmn x22, #8 */
  (void)arc_add64(c, ARC_X_R(c, 22), UINT64_C(8), 0);
  /* 125aac: b.hs #0x125ba4 */
  if (ARC_COND(c, 2)) goto L_125ba4;
  /* 125ab0: cmp x22, #0x16 */
  (void)arc_sub64(c, ARC_X_R(c, 22), UINT64_C(22));
  /* 125ab4: b.hi #0x125b6c */
  if (ARC_COND(c, 8)) goto L_125b6c;
  /* 125ab8: lsl w8, w22, #1 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 22)) << ((UINT64_C(1)) & 31)));
  /* 125abc: mov x9, sp */
  ARC_X_W(c, 9, (c)->sp);
  /* 125ac0: orr x23, x9, #1 */
  ARC_X_W(c, 23, (ARC_X_R(c, 9) | UINT64_C(1)));
  /* 125ac4: strb w8, [sp] */
  arc_st8((c)->sp, ARC_W_R(c, 8));
  /* 125ac8: cmp x21, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 20));
  /* 125acc: b.eq #0x125ae0 */
  if (ARC_COND(c, 0)) goto L_125ae0;
L_125ad0:;
  /* 125ad0: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 125ad4: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 125ad8: mov x2, x22 */
  ARC_X_W(c, 2, ARC_X_R(c, 22));
  /* 125adc: bl #0x1449d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1202912));
  fn1_1449d8(c);
L_125ae0:;
  /* 125ae0: ldrb w24, [sp, #0x18] */
  ARC_W_W(c, 24, arc_ld8(((c)->sp + INT64_C(24))));
  /* 125ae4: strb wzr, [x23, x22] */
  arc_st8((ARC_X_R(c, 23) + ARC_X_R(c, 22)), ARC_W_R(c, 31));
  /* 125ae8: add x8, sp, #0x18 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(24)));
  /* 125aec: ldr x20, [sp, #0x28] */
  ARC_X_W(c, 20, arc_ld64(((c)->sp + INT64_C(40))));
  /* 125af0: ldrb w22, [sp] */
  ARC_W_W(c, 22, arc_ld8((c)->sp));
  /* 125af4: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 125af8: tst w24, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 24) & UINT64_C(1)));
  /* 125afc: ldr x2, [x19, #0x10] */
  ARC_X_W(c, 2, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* 125b00: csinc x0, x20, x8, ne */
  ARC_X_W(c, 0, (ARC_COND(c, 1) ? (ARC_X_R(c, 20)) : ((ARC_X_R(c, 8)) + 1)));
  /* 125b04: tst w22, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 22) & UINT64_C(1)));
  /* 125b08: mov x8, sp */
  ARC_X_W(c, 8, (c)->sp);
  /* 125b0c: csinc x1, x21, x8, ne */
  ARC_X_W(c, 1, (ARC_COND(c, 1) ? (ARC_X_R(c, 21)) : ((ARC_X_R(c, 8)) + 1)));
  /* 125b10: bl #0x144228 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1202964));
  fn1_144228(c);
  /* 125b14: mov w19, w0 */
  ARC_W_W(c, 19, ARC_W_R(c, 0));
  /* 125b18: tbz w22, #0, #0x125b2c */
  if (((ARC_W_R(c, 22)) >> 0 & 1) == 0) goto L_125b2c;
  /* 125b1c: ldr x8, [sp] */
  ARC_X_W(c, 8, arc_ld64((c)->sp));
  /* 125b20: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 125b24: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 125b28: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1202988));
  fn1_142608(c);
L_125b2c:;
  /* 125b2c: tbz w24, #0, #0x125b40 */
  if (((ARC_W_R(c, 24)) >> 0 & 1) == 0) goto L_125b40;
  /* 125b30: ldr x8, [sp, #0x18] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(24))));
  /* 125b34: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 125b38: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 125b3c: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1203008));
  fn1_142608(c);
L_125b40:;
  /* 125b40: cmp w19, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 19), UINT64_C(0));
  /* 125b44: cset w8, ne */
  ARC_W_W(c, 8, (ARC_COND(c, 1) ? 1 : 0));
  /* 125b48: csinv w0, w8, wzr, ge */
  ARC_W_W(c, 0, (ARC_COND(c, 10) ? (ARC_W_R(c, 8)) : (~(uint32_t)(ARC_W_R(c, 31)))));
  /* 125b4c: ldp x20, x19, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 125b50: ldr x25, [sp, #0x40] */
  ARC_X_W(c, 25, arc_ld64(((c)->sp + INT64_C(64))));
  /* 125b54: ldp x22, x21, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 125b58: ldp x24, x23, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 125b5c: ldp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 125b60: add sp, sp, #0x80 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(128)));
  /* 125b64: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 125b68: ret  */
  return;
L_125b6c:;
  /* 125b6c: orr x8, x22, #7 */
  ARC_X_W(c, 8, (ARC_X_R(c, 22) | UINT64_C(7)));
  /* 125b70: mov w9, #0x1a */
  ARC_W_W(c, 9, UINT64_C(26));
  /* 125b74: cmp x8, #0x17 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(23));
  /* 125b78: csinc x24, x9, x8, eq */
  ARC_X_W(c, 24, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 8)) + 1)));
  /* 125b7c: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 125b80: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1203076));
  fn1_1428f0(c);
  /* 125b84: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* 125b88: orr x8, x24, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 24) | UINT64_C(1)));
  /* 125b8c: stp x22, x0, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 0));
  }
  /* 125b90: str x8, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 8));
  /* 125b94: cmp x21, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 20));
  /* 125b98: b.ne #0x125ad0 */
  if (ARC_COND(c, 1)) goto L_125ad0;
  /* 125b9c: b #0x125ae0 */
  goto L_125ae0;
L_125ba0:;
  /* 125ba0: bl #0xd7d54 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1203108));
  fn1_d7d54(c);
L_125ba4:;
  /* 125ba4: bl #0xd7d54 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1203112));
  fn1_d7d54(c);
  /* 125ba8: ldrb w8, [sp, #0x18] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(24))));
  /* 125bac: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 125bb0: tbz w8, #0, #0x125bc4 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_125bc4;
  /* 125bb4: ldr x8, [sp, #0x18] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(24))));
  /* 125bb8: ldr x0, [sp, #0x28] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(40))));
  /* 125bbc: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 125bc0: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1203140));
  fn1_142608(c);
L_125bc4:;
  /* 125bc4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 125bc8: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1203148));
  fn1_9cc20(c);
}

void fn1_127f1c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039140124));
  /* 127f1c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 127f20: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* 127f24: stp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 127f28: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 127f2c: add x29, sp, #0x30 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(48)));
  /* 127f30: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 127f34: sub x9, x2, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 2) - UINT64_C(1)));
  /* 127f38: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 127f3c: ldr x8, [x8, #0xc88] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3208))));
  /* 127f40: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 127f44: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 127f48: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* 127f4c: stp x8, x9, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 127f50: mov w0, #0x1fbf */
  ARC_W_W(c, 0, UINT64_C(8127));
  /* 127f54: bl #0x1441e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1212248));
  fn1_1441e0(c);
  /* 127f58: str x0, [x20, #0x10] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(16)), ARC_X_R(c, 0));
  /* 127f5c: cbz x0, #0x127f74 */
  if ((ARC_X_R(c, 0)) == 0) goto L_127f74;
  /* 127f60: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 127f64: ldp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 127f68: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* 127f6c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 127f70: ret  */
  return;
L_127f74:;
  /* 127f74: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 127f78: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 127f7c: bl #0x11dda8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1212288));
  fn1_11dda8(c);
  /* 127f80: adrp x0, #0x50000 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(327680)));
  /* 127f84: add x0, x0, #0x859 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2137)));
  /* 127f88: add x8, sp, #0x18 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(24)));
  /* 127f8c: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 127f90: add x19, sp, #0x18 */
  ARC_X_W(c, 19, ((c)->sp + UINT64_C(24)));
  /* 127f94: bl #0x125878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1212312));
  fn1_125878(c);
  /* 127f98: ldrb w8, [sp, #0x18] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(24))));
  /* 127f9c: ldr x9, [sp, #0x28] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(40))));
  /* 127fa0: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 127fa4: csinc x0, x9, x19, ne */
  ARC_X_W(c, 0, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 19)) + 1)));
  /* 127fa8: bl #0x142c98 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1212332));
  fn1_142c98(c);
  /* 127fac: ldrb w8, [sp, #0x18] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(24))));
  /* 127fb0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 127fb4: tbnz w8, #0, #0x127fc8 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_127fc8;
  /* 127fb8: ldrb w8, [sp] */
  ARC_W_W(c, 8, arc_ld8((c)->sp));
  /* 127fbc: tbnz w8, #0, #0x127ff0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_127ff0;
L_127fc0:;
  /* 127fc0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 127fc4: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1212360));
  fn1_9cc20(c);
L_127fc8:;
  /* 127fc8: ldr x8, [sp, #0x18] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(24))));
  /* 127fcc: ldr x0, [sp, #0x28] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(40))));
  /* 127fd0: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 127fd4: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1212376));
  fn1_142608(c);
  /* 127fd8: ldrb w8, [sp] */
  ARC_W_W(c, 8, arc_ld8((c)->sp));
  /* 127fdc: tbz w8, #0, #0x127fc0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_127fc0;
  /* 127fe0: b #0x127ff0 */
  goto L_127ff0;
  /* 127fe4: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 127fe8: ldrb w8, [sp] */
  ARC_W_W(c, 8, arc_ld8((c)->sp));
  /* 127fec: tbz w8, #0, #0x127fc0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_127fc0;
L_127ff0:;
  /* 127ff0: ldr x8, [sp] */
  ARC_X_W(c, 8, arc_ld64((c)->sp));
  /* 127ff4: ldr x0, [sp, #0x10] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(16))));
  /* 127ff8: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 127ffc: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1212416));
  fn1_142608(c);
  /* 128000: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 128004: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1212424));
  fn1_9cc20(c);
}

void fn1_12a254(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039149140));
  /* 12a254: bti c */
  /* bti: no architectural effect here */
  /* 12a258: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 12a25c: ret  */
  return;
}

void fn1_12baa8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039155368));
  /* 12baa8: bti c */
  /* bti: no architectural effect here */
  /* 12baac: mov w0, #3 */
  ARC_W_W(c, 0, UINT64_C(3));
  /* 12bab0: str x2, [x4] */
  arc_st64(ARC_X_R(c, 4), ARC_X_R(c, 2));
  /* 12bab4: ret  */
  return;
}

void fn1_130448(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039174216));
  /* 130448: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 13044c: sub sp, sp, #0x100 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(256)));
  /* 130450: stp x29, x30, [sp, #0xa0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(160));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 130454: stp x28, x27, [sp, #0xb0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(176));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* 130458: stp x26, x25, [sp, #0xc0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(192));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* 13045c: stp x24, x23, [sp, #0xd0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(208));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 130460: stp x22, x21, [sp, #0xe0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(224));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 130464: stp x20, x19, [sp, #0xf0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(240));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 130468: add x29, sp, #0xa0 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(160)));
  /* 13046c: sub x8, x3, x2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 3) - ARC_X_R(c, 2)));
  /* 130470: mov x9, #-0x5555555555555556 */
  ARC_X_W(c, 9, UINT64_C(12297829382473034410));
  /* 130474: mov x20, x5 */
  ARC_X_W(c, 20, ARC_X_R(c, 5));
  /* 130478: asr x8, x8, #3 */
  ARC_X_W(c, 8, ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(3)) & 63))));
  /* 13047c: movk x9, #0xaaab */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(18446744073709486080)) | UINT64_C(43691)));
  /* 130480: mov x24, x4 */
  ARC_X_W(c, 24, ARC_X_R(c, 4));
  /* 130484: mov x22, x3 */
  ARC_X_W(c, 22, ARC_X_R(c, 3));
  /* 130488: mov x19, x2 */
  ARC_X_W(c, 19, ARC_X_R(c, 2));
  /* 13048c: mov x27, x0 */
  ARC_X_W(c, 27, ARC_X_R(c, 0));
  /* 130490: mul x25, x8, x9 */
  ARC_X_W(c, 25, ((uint64_t)(ARC_X_R(c, 8)) * (uint64_t)(ARC_X_R(c, 9))));
  /* 130494: str x1, [sp, #0x30] */
  arc_st64(((c)->sp + INT64_C(48)), ARC_X_R(c, 1));
  /* 130498: cmp x25, #0x65 */
  (void)arc_sub64(c, ARC_X_R(c, 25), UINT64_C(101));
  /* 13049c: b.lo #0x1304b4 */
  if (ARC_COND(c, 3)) goto L_1304b4;
  /* 1304a0: mov x0, x25 */
  ARC_X_W(c, 0, ARC_X_R(c, 25));
  /* 1304a4: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1246376));
  fn1_1428a8(c);
  /* 1304a8: mov x28, x0 */
  ARC_X_W(c, 28, ARC_X_R(c, 0));
  /* 1304ac: cbnz x0, #0x1304bc */
  if ((ARC_X_R(c, 0)) != 0) goto L_1304bc;
  /* 1304b0: bl #0x142c08 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1246388));
  fn1_142c08(c);
L_1304b4:;
  /* 1304b4: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
  /* 1304b8: add x28, sp, #0x3c */
  ARC_X_W(c, 28, ((c)->sp + UINT64_C(60)));
L_1304bc:;
  /* 1304bc: cmp x19, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 22));
  /* 1304c0: stp x20, x0, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 0));
  }
  /* 1304c4: b.eq #0x13066c */
  if (ARC_COND(c, 0)) goto L_13066c;
  /* 1304c8: mov x21, xzr */
  ARC_X_W(c, 21, ARC_X_R(c, 31));
  /* 1304cc: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 1304d0: mov x9, x19 */
  ARC_X_W(c, 9, ARC_X_R(c, 19));
  /* 1304d4: mov x10, x28 */
  ARC_X_W(c, 10, ARC_X_R(c, 28));
L_1304d8:;
  /* 1304d8: ldrb w11, [x9] */
  ARC_W_W(c, 11, arc_ld8(ARC_X_R(c, 9)));
  /* 1304dc: ldr x12, [x9, #8] */
  ARC_X_W(c, 12, arc_ld64((ARC_X_R(c, 9) + INT64_C(8))));
  /* 1304e0: add x9, x9, #0x18 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(24)));
  /* 1304e4: lsr x13, x11, #1 */
  ARC_X_W(c, 13, ((uint64_t)(ARC_X_R(c, 11)) >> ((UINT64_C(1)) & 63)));
  /* 1304e8: tst w11, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 11) & UINT64_C(1)));
  /* 1304ec: csel x11, x13, x12, eq */
  ARC_X_W(c, 11, (ARC_COND(c, 0) ? (ARC_X_R(c, 13)) : ARC_X_R(c, 12)));
  /* 1304f0: cmp x11, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 11), UINT64_C(0));
  /* 1304f4: cset w11, eq */
  ARC_W_W(c, 11, (ARC_COND(c, 0) ? 1 : 0));
  /* 1304f8: cinc w12, w8, eq */
  ARC_W_W(c, 12, (ARC_COND(c, 0) ? (ARC_W_R(c, 8)) + 1 : (ARC_W_R(c, 8))));
  /* 1304fc: cinc x21, x21, eq */
  ARC_X_W(c, 21, (ARC_COND(c, 0) ? (ARC_X_R(c, 21)) + 1 : (ARC_X_R(c, 21))));
  /* 130500: cmp x9, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 22));
  /* 130504: sub x25, x25, x11 */
  ARC_X_W(c, 25, (ARC_X_R(c, 25) - ARC_X_R(c, 11)));
  /* 130508: strb w12, [x10], #1 */
  { const uint64_t _a = ARC_X_R(c, 10);
    ARC_X_W(c, 10, ARC_X_R(c, 10) + INT64_C(1));
    arc_st8(_a, ARC_W_R(c, 12));
  }
  /* 13050c: b.ne #0x1304d8 */
  if (ARC_COND(c, 1)) goto L_1304d8;
  /* 130510: ldr x8, [x27] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 27)));
  /* 130514: ldr x9, [sp, #0x30] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(48))));
  /* 130518: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 13051c: b.eq #0x130670 */
  if (ARC_COND(c, 0)) goto L_130670;
  /* 130520: cbz x25, #0x130670 */
  if ((ARC_X_R(c, 25)) == 0) goto L_130670;
  /* 130524: mov x23, xzr */
  ARC_X_W(c, 23, ARC_X_R(c, 31));
  /* 130528: stp x28, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 13052c: str x27, [sp, #0x18] */
  arc_st64(((c)->sp + INT64_C(24)), ARC_X_R(c, 27));
L_130530:;
  /* 130530: ldr x9, [x24] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 24)));
  /* 130534: ldr w1, [x8] */
  ARC_W_W(c, 1, arc_ld32(ARC_X_R(c, 8)));
  /* 130538: ldr x8, [x9, #0x38] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(56))));
  /* 13053c: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 130540: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1246532));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 130544: mov w27, w0 */
  ARC_W_W(c, 27, ARC_W_R(c, 0));
  /* 130548: mov w20, wzr */
  ARC_W_W(c, 20, ARC_W_R(c, 31));
  /* 13054c: add x26, x23, #1 */
  ARC_X_W(c, 26, (ARC_X_R(c, 23) + UINT64_C(1)));
  /* 130550: b #0x13056c */
  goto L_13056c;
L_130554:;
  /* 130554: sub x25, x25, #1 */
  ARC_X_W(c, 25, (ARC_X_R(c, 25) - UINT64_C(1)));
  /* 130558: strb wzr, [x28] */
  arc_st8(ARC_X_R(c, 28), ARC_W_R(c, 31));
L_13055c:;
  /* 13055c: add x19, x19, #0x18 */
  ARC_X_W(c, 19, (ARC_X_R(c, 19) + UINT64_C(24)));
  /* 130560: add x28, x28, #1 */
  ARC_X_W(c, 28, (ARC_X_R(c, 28) + UINT64_C(1)));
  /* 130564: cmp x19, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 22));
  /* 130568: b.eq #0x1305dc */
  if (ARC_COND(c, 0)) goto L_1305dc;
L_13056c:;
  /* 13056c: ldrb w8, [x28] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 28)));
  /* 130570: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* 130574: b.ne #0x13055c */
  if (ARC_COND(c, 1)) goto L_13055c;
  /* 130578: ldrb w8, [x19] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 19)));
  /* 13057c: ldr x9, [x19, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* 130580: add x10, x19, #4 */
  ARC_X_W(c, 10, (ARC_X_R(c, 19) + UINT64_C(4)));
  /* 130584: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 130588: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 13058c: csel x9, x10, x9, eq */
  ARC_X_W(c, 9, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* 130590: ldr w1, [x9, x23, lsl #2] */
  ARC_W_W(c, 1, arc_ld32((ARC_X_R(c, 9) + ((uint64_t)(ARC_X_R(c, 23)) << 2))));
  /* 130594: ldr x8, [x8, #0x38] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(56))));
  /* 130598: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 13059c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1246624));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1305a0: cmp w27, w0 */
  (void)arc_sub32(c, ARC_W_R(c, 27), ARC_W_R(c, 0));
  /* 1305a4: b.ne #0x130554 */
  if (ARC_COND(c, 1)) goto L_130554;
  /* 1305a8: ldrb w8, [x19] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 19)));
  /* 1305ac: ldr x9, [x19, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* 1305b0: lsr x10, x8, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* 1305b4: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 1305b8: csel x8, x10, x9, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* 1305bc: cmp x8, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 26));
  /* 1305c0: b.ne #0x1305d4 */
  if (ARC_COND(c, 1)) goto L_1305d4;
  /* 1305c4: mov w8, #2 */
  ARC_W_W(c, 8, UINT64_C(2));
  /* 1305c8: sub x25, x25, #1 */
  ARC_X_W(c, 25, (ARC_X_R(c, 25) - UINT64_C(1)));
  /* 1305cc: add x21, x21, #1 */
  ARC_X_W(c, 21, (ARC_X_R(c, 21) + UINT64_C(1)));
  /* 1305d0: strb w8, [x28] */
  arc_st8(ARC_X_R(c, 28), ARC_W_R(c, 8));
L_1305d4:;
  /* 1305d4: mov w20, #1 */
  ARC_W_W(c, 20, UINT64_C(1));
  /* 1305d8: b #0x13055c */
  goto L_13055c;
L_1305dc:;
  /* 1305dc: ldr x27, [sp, #0x18] */
  ARC_X_W(c, 27, arc_ld64(((c)->sp + INT64_C(24))));
  /* 1305e0: ldr x8, [x27] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 27)));
  /* 1305e4: tbz w20, #0, #0x130650 */
  if (((ARC_W_R(c, 20)) >> 0 & 1) == 0) goto L_130650;
  /* 1305e8: ldp x28, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1305ec: add x9, x21, x25 */
  ARC_X_W(c, 9, (ARC_X_R(c, 21) + ARC_X_R(c, 25)));
  /* 1305f0: add x8, x8, #4 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(4)));
  /* 1305f4: cmp x9, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(2));
  /* 1305f8: str x8, [x27] */
  arc_st64(ARC_X_R(c, 27), ARC_X_R(c, 8));
  /* 1305fc: b.lo #0x130654 */
  if (ARC_COND(c, 3)) goto L_130654;
  /* 130600: mov x9, x19 */
  ARC_X_W(c, 9, ARC_X_R(c, 19));
  /* 130604: mov x10, x28 */
  ARC_X_W(c, 10, ARC_X_R(c, 28));
  /* 130608: b #0x13061c */
  goto L_13061c;
L_13060c:;
  /* 13060c: add x9, x9, #0x18 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(24)));
  /* 130610: add x10, x10, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(1)));
  /* 130614: cmp x9, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 22));
  /* 130618: b.eq #0x130654 */
  if (ARC_COND(c, 0)) goto L_130654;
L_13061c:;
  /* 13061c: ldrb w11, [x10] */
  ARC_W_W(c, 11, arc_ld8(ARC_X_R(c, 10)));
  /* 130620: cmp w11, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(2));
  /* 130624: b.ne #0x13060c */
  if (ARC_COND(c, 1)) goto L_13060c;
  /* 130628: ldrb w11, [x9] */
  ARC_W_W(c, 11, arc_ld8(ARC_X_R(c, 9)));
  /* 13062c: ldr x12, [x9, #8] */
  ARC_X_W(c, 12, arc_ld64((ARC_X_R(c, 9) + INT64_C(8))));
  /* 130630: lsr x13, x11, #1 */
  ARC_X_W(c, 13, ((uint64_t)(ARC_X_R(c, 11)) >> ((UINT64_C(1)) & 63)));
  /* 130634: tst w11, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 11) & UINT64_C(1)));
  /* 130638: csel x11, x13, x12, eq */
  ARC_X_W(c, 11, (ARC_COND(c, 0) ? (ARC_X_R(c, 13)) : ARC_X_R(c, 12)));
  /* 13063c: cmp x11, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 26));
  /* 130640: b.eq #0x13060c */
  if (ARC_COND(c, 0)) goto L_13060c;
  /* 130644: sub x21, x21, #1 */
  ARC_X_W(c, 21, (ARC_X_R(c, 21) - UINT64_C(1)));
  /* 130648: strb wzr, [x10] */
  arc_st8(ARC_X_R(c, 10), ARC_W_R(c, 31));
  /* 13064c: b #0x13060c */
  goto L_13060c;
L_130650:;
  /* 130650: ldp x28, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
L_130654:;
  /* 130654: ldr x9, [sp, #0x30] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(48))));
  /* 130658: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 13065c: b.eq #0x130670 */
  if (ARC_COND(c, 0)) goto L_130670;
  /* 130660: mov x23, x26 */
  ARC_X_W(c, 23, ARC_X_R(c, 26));
  /* 130664: cbnz x25, #0x130530 */
  if ((ARC_X_R(c, 25)) != 0) goto L_130530;
  /* 130668: b #0x130670 */
  goto L_130670;
L_13066c:;
  /* 13066c: ldr x8, [x27] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 27)));
L_130670:;
  /* 130670: ldr x9, [sp, #0x30] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(48))));
  /* 130674: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 130678: ldr x9, [sp, #8] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(8))));
  /* 13067c: b.ne #0x13068c */
  if (ARC_COND(c, 1)) goto L_13068c;
  /* 130680: ldr w8, [x9] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 9)));
  /* 130684: orr w8, w8, #2 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | UINT64_C(2)));
  /* 130688: str w8, [x9] */
  arc_st32(ARC_X_R(c, 9), ARC_W_R(c, 8));
L_13068c:;
  /* 13068c: ldr x0, [sp, #0x10] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(16))));
  /* 130690: cmp x19, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 22));
  /* 130694: b.eq #0x1306b4 */
  if (ARC_COND(c, 0)) goto L_1306b4;
L_130698:;
  /* 130698: ldrb w8, [x28] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 28)));
  /* 13069c: cmp w8, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(2));
  /* 1306a0: b.eq #0x1306c0 */
  if (ARC_COND(c, 0)) goto L_1306c0;
  /* 1306a4: add x19, x19, #0x18 */
  ARC_X_W(c, 19, (ARC_X_R(c, 19) + UINT64_C(24)));
  /* 1306a8: add x28, x28, #1 */
  ARC_X_W(c, 28, (ARC_X_R(c, 28) + UINT64_C(1)));
  /* 1306ac: cmp x19, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 22));
  /* 1306b0: b.ne #0x130698 */
  if (ARC_COND(c, 1)) goto L_130698;
L_1306b4:;
  /* 1306b4: ldr w8, [x9] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 9)));
  /* 1306b8: orr w8, w8, #4 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | UINT64_C(4)));
  /* 1306bc: str w8, [x9] */
  arc_st32(ARC_X_R(c, 9), ARC_W_R(c, 8));
L_1306c0:;
  /* 1306c0: cbz x0, #0x1306c8 */
  if ((ARC_X_R(c, 0)) == 0) goto L_1306c8;
  /* 1306c4: bl #0x142800 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1246920));
  fn1_142800(c);
L_1306c8:;
  /* 1306c8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1306cc: ldp x20, x19, [sp, #0xf0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(240));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1306d0: ldp x22, x21, [sp, #0xe0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(224));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1306d4: ldp x24, x23, [sp, #0xd0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(208));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 1306d8: ldp x26, x25, [sp, #0xc0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(192));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* 1306dc: ldp x28, x27, [sp, #0xb0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(176));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* 1306e0: ldp x29, x30, [sp, #0xa0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(160));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1306e4: add sp, sp, #0x100 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(256)));
  /* 1306e8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 1306ec: ret  */
  return;
  /* 1306f0: b #0x1306f4 */
  goto L_1306f4;
L_1306f4:;
  /* 1306f4: ldr x8, [sp, #0x10] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1306f8: cbz x8, #0x13070c */
  if ((ARC_X_R(c, 8)) == 0) goto L_13070c;
  /* 1306fc: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 130700: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 130704: bl #0x142800 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1246984));
  fn1_142800(c);
  /* 130708: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
L_13070c:;
  /* 13070c: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1246992));
  fn1_9cc20(c);
}

void fn1_134b48(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039192392));
  /* 134b48: bti c */
  /* bti: no architectural effect here */
  /* 134b4c: add x0, x0, #0x3e0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(992)));
  /* 134b50: ret  */
  return;
}

void fn1_136534(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039199028));
  /* 136534: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 136538: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* 13653c: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 136540: str x23, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 23));
  /* 136544: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 136548: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 13654c: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 136550: mov x8, x0 */
  ARC_X_W(c, 8, ARC_X_R(c, 0));
  /* 136554: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 136558: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 13655c: add x1, x8, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) + UINT64_C(48)));
  /* 136560: bl #0x143460 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1271140));
  fn1_143460(c);
  /* 136564: adrp x23, #0x151000 */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 136568: ldr x23, [x23, #0xb58] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 23) + INT64_C(2904))));
  /* 13656c: ldr x22, [x29, #0x18] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 29) + INT64_C(24))));
  /* 136570: ldar x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 136574: cmn x8, #1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0);
  /* 136578: b.eq #0x136634 */
  if (ARC_COND(c, 0)) goto L_136634;
  /* 13657c: nop  */
  /* nop: no architectural effect here */
  /* 136580: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 136584: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1271176));
  fn1_142518(c);
  /* 136588: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 13658c: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 136590: b.ne #0x1365bc */
  if (ARC_COND(c, 1)) goto L_1365bc;
  /* 136594: nop  */
  /* nop: no architectural effect here */
  /* 136598: adr x20, #0x15791c */
  ARC_X_W(c, 20, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 13659c: nop  */
  /* nop: no architectural effect here */
  /* 1365a0: adr x21, #0x1578f4 */
  ARC_X_W(c, 21, (arc_image_bases[1] + UINT64_C(1407220)));
L_1365a4:;
  /* 1365a4: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1365a8: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 1365ac: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1271216));
  fn1_142530(c);
  /* 1365b0: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 1365b4: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 1365b8: b.eq #0x1365a4 */
  if (ARC_COND(c, 0)) goto L_1365a4;
L_1365bc:;
  /* 1365bc: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 1365c0: cbz x8, #0x1365d4 */
  if ((ARC_X_R(c, 8)) == 0) goto L_1365d4;
  /* 1365c4: nop  */
  /* nop: no architectural effect here */
  /* 1365c8: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 1365cc: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1271248));
  fn1_142560(c);
  /* 1365d0: b #0x136634 */
  goto L_136634;
L_1365d4:;
  /* 1365d4: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 1365d8: str x23, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 23));
  /* 1365dc: strb wzr, [sp, #8] */
  arc_st8(((c)->sp + INT64_C(8)), ARC_W_R(c, 31));
  /* 1365e0: str x8, [x23] */
  arc_st64(ARC_X_R(c, 23), ARC_X_R(c, 8));
  /* 1365e4: nop  */
  /* nop: no architectural effect here */
  /* 1365e8: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 1365ec: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1271280));
  fn1_142560(c);
  /* 1365f0: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 1365f4: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 1365f8: ldr x1, [x1, #0xc58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3160))));
  /* 1365fc: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1271296));
  fn1_a2030(c);
  /* 136600: add w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + UINT64_C(1)));
  /* 136604: str w8, [x23, #8] */
  arc_st32((ARC_X_R(c, 23) + INT64_C(8)), ARC_W_R(c, 8));
  /* 136608: nop  */
  /* nop: no architectural effect here */
  /* 13660c: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 136610: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1271316));
  fn1_142518(c);
  /* 136614: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 136618: stlr x8, [x23] */
  arc_st64(ARC_X_R(c, 23), ARC_X_R(c, 8));
  /* 13661c: nop  */
  /* nop: no architectural effect here */
  /* 136620: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 136624: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1271336));
  fn1_142560(c);
  /* 136628: nop  */
  /* nop: no architectural effect here */
  /* 13662c: adr x0, #0x15791c */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 136630: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1271348));
  fn1_142578(c);
L_136634:;
  /* 136634: ldp x8, x10, [x22, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 22) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* 136638: ldrsw x9, [x23, #8] */
  ARC_X_W(c, 9, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 23) + INT64_C(8)))));
  /* 13663c: sub x9, x9, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - UINT64_C(1)));
  /* 136640: sub x10, x10, x8 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) - ARC_X_R(c, 8)));
  /* 136644: cmp x9, x10, asr #3 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ((uint64_t)((int64_t)(ARC_X_R(c, 10)) >> 3)));
  /* 136648: b.hs #0x136698 */
  if (ARC_COND(c, 2)) goto L_136698;
  /* 13664c: ldr x0, [x8, x9, lsl #3] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3))));
  /* 136650: cbz x0, #0x136698 */
  if ((ARC_X_R(c, 0)) == 0) goto L_136698;
  /* 136654: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 136658: ldr x8, [x8, #0x60] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(96))));
  /* 13665c: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 136660: mov x3, x19 */
  ARC_X_W(c, 3, ARC_X_R(c, 19));
  /* 136664: ldr x1, [x1, #0xbe0] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3040))));
  /* 136668: add x2, x1, #0x1a */
  ARC_X_W(c, 2, (ARC_X_R(c, 1) + UINT64_C(26)));
  /* 13666c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1271408));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 136670: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 136674: bl #0x143478 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1271416));
  fn1_143478(c);
  /* 136678: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 13667c: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 136680: ldr x23, [sp, #0x20] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(32))));
  /* 136684: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 136688: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 13668c: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* 136690: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 136694: ret  */
  return;
L_136698:;
  /* 136698: bl #0xfc3b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1271452));
  fn1_fc3b8(c);
  /* 13669c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1366a0: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 1366a4: bl #0xd2a78 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1271464));
  fn1_d2a78(c);
  /* 1366a8: b #0x1366b4 */
  goto L_1366b4;
  /* 1366ac: b #0x1366b0 */
  goto L_1366b0;
L_1366b0:;
  /* 1366b0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
L_1366b4:;
  /* 1366b4: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1366b8: bl #0x143478 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1271484));
  fn1_143478(c);
  /* 1366bc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1366c0: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1271492));
  fn1_9cc20(c);
}

void fn1_139404(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039211012));
  /* 139404: bti c */
  /* bti: no architectural effect here */
  /* 139408: mov w1, #0x60 */
  ARC_W_W(c, 1, UINT64_C(96));
  /* 13940c: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_13f7d0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039236560));
  /* 13f7d0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 13f7d4: sub sp, sp, #0xf0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(240)));
  /* 13f7d8: stp x29, x30, [sp, #0xd0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(208));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 13f7dc: str x19, [sp, #0xe0] */
  arc_st64(((c)->sp + INT64_C(224)), ARC_X_R(c, 19));
  /* 13f7e0: add x29, sp, #0xd0 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(208)));
  /* 13f7e4: adrp x8, #0x4f000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(323584)));
  /* 13f7e8: add x8, x8, #0x964 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2404)));
  /* 13f7ec: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 13f7f0: stp x8, x1, [x29, #-0x30] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-48));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 1));
  }
  /* 13f7f4: nop  */
  /* nop: no architectural effect here */
  /* 13f7f8: adr x8, #0x156d40 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1404224)));
  /* 13f7fc: stp x0, xzr, [x29, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-32));
    arc_st64(_pa, ARC_X_R(c, 0));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 13f800: cbz x1, #0x13f820 */
  if ((ARC_X_R(c, 1)) == 0) goto L_13f820;
  /* 13f804: str wzr, [x1] */
  arc_st32(ARC_X_R(c, 1), ARC_W_R(c, 31));
  /* 13f808: nop  */
  /* nop: no architectural effect here */
  /* 13f80c: adr x9, #0x159210 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 13f810: ldarb w9, [x9] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 9)));
  /* 13f814: tbz w9, #0, #0x13f91c */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_13f91c;
L_13f818:;
  /* 13f818: str x8, [x1, #8] */
  arc_st64((ARC_X_R(c, 1) + INT64_C(8)), ARC_X_R(c, 8));
  /* 13f81c: b #0x13f830 */
  goto L_13f830;
L_13f820:;
  /* 13f820: nop  */
  /* nop: no architectural effect here */
  /* 13f824: adr x9, #0x159210 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 13f828: ldarb w9, [x9] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 9)));
  /* 13f82c: tbz w9, #0, #0x13f958 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_13f958;
L_13f830:;
  /* 13f830: ldrb w9, [x19] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 19)));
  /* 13f834: ldr x10, [x19, #0x10] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* 13f838: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* 13f83c: stur wzr, [x29, #-0x40] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-64)), ARC_W_R(c, 31));
  /* 13f840: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* 13f844: stur x8, [x29, #-0x38] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-56)), ARC_X_R(c, 8));
  /* 13f848: csinc x0, x10, x19, ne */
  ARC_X_W(c, 0, (ARC_COND(c, 1) ? (ARC_X_R(c, 10)) : ((ARC_X_R(c, 19)) + 1)));
  /* 13f84c: stur wzr, [x29, #-0x10] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-16)), ARC_W_R(c, 31));
  /* 13f850: stur x8, [x29, #-8] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-8)), ARC_X_R(c, 8));
  /* 13f854: bl #0x144588 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1308760));
  fn1_144588(c);
  /* 13f858: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 13f85c: b.ne #0x13f884 */
  if (ARC_COND(c, 1)) goto L_13f884;
  /* 13f860: bl #0x142a58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1308772));
  fn1_142a58(c);
  /* 13f864: nop  */
  /* nop: no architectural effect here */
  /* 13f868: adr x9, #0x159208 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 13f86c: ldr w8, [x0] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 0)));
  /* 13f870: ldarb w9, [x9] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 9)));
  /* 13f874: tbz w9, #0, #0x13f988 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_13f988;
L_13f878:;
  /* 13f878: nop  */
  /* nop: no architectural effect here */
  /* 13f87c: adr x9, #0x156d38 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1404216)));
  /* 13f880: stp x8, x9, [x29, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-16));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
L_13f884:;
  /* 13f884: add x8, x29, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 13f888: sub x0, x29, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* 13f88c: add x2, sp, #0x10 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(16)));
  /* 13f890: sub x3, x29, #0x40 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 13f894: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 13f898: bl #0x1388e8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1308828));
  fn1_1388e8(c);
  /* 13f89c: ldr x8, [x29, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(24))));
  /* 13f8a0: tst w8, #0xff */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(255)));
  /* 13f8a4: and x19, x8, #0xff */
  ARC_X_W(c, 19, (ARC_X_R(c, 8) & UINT64_C(255)));
  /* 13f8a8: b.eq #0x13f8c4 */
  if (ARC_COND(c, 0)) goto L_13f8c4;
  /* 13f8ac: cmp w19, #0xff */
  (void)arc_sub32(c, ARC_W_R(c, 19), UINT64_C(255));
  /* 13f8b0: b.eq #0x13f8c4 */
  if (ARC_COND(c, 0)) goto L_13f8c4;
  /* 13f8b4: cmp x19, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 19), UINT64_C(1));
  /* 13f8b8: b.ne #0x13f8c4 */
  if (ARC_COND(c, 1)) goto L_13f8c4;
  /* 13f8bc: ldr x0, [sp, #0x40] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(64))));
  /* 13f8c0: b #0x13f908 */
  goto L_13f908;
L_13f8c4:;
  /* 13f8c4: ldur w8, [x29, #-0x40] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 29) + INT64_C(-64))));
  /* 13f8c8: cbnz w8, #0x13f8f8 */
  if ((ARC_W_R(c, 8)) != 0) goto L_13f8f8;
  /* 13f8cc: nop  */
  /* nop: no architectural effect here */
  /* 13f8d0: adr x8, #0x159208 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 13f8d4: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 13f8d8: tbz w8, #0, #0x13f9b4 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13f9b4;
L_13f8dc:;
  /* 13f8dc: cmp x19, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 19), UINT64_C(2));
  /* 13f8e0: mov w8, #0x5f */
  ARC_W_W(c, 8, UINT64_C(95));
  /* 13f8e4: mov w9, #0x15 */
  ARC_W_W(c, 9, UINT64_C(21));
  /* 13f8e8: csel x8, x9, x8, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* 13f8ec: nop  */
  /* nop: no architectural effect here */
  /* 13f8f0: adr x9, #0x156d38 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1404216)));
  /* 13f8f4: stp x8, x9, [x29, #-0x40] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-64));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
L_13f8f8:;
  /* 13f8f8: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 13f8fc: sub x1, x29, #0x40 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 13f900: bl #0x13f9d4 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1308932));
  fn1_13f9d4(c);
  /* 13f904: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
L_13f908:;
  /* 13f908: ldp x29, x30, [sp, #0xd0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(208));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 13f90c: ldr x19, [sp, #0xe0] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(224))));
  /* 13f910: add sp, sp, #0xf0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(240)));
  /* 13f914: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 13f918: ret  */
  return;
L_13f91c:;
  /* 13f91c: nop  */
  /* nop: no architectural effect here */
  /* 13f920: adr x0, #0x159210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 13f924: str x1, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 1));
  /* 13f928: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1308972));
  fn1_1424b8(c);
  /* 13f92c: ldr x1, [sp, #8] */
  ARC_X_W(c, 1, arc_ld64(((c)->sp + INT64_C(8))));
  /* 13f930: nop  */
  /* nop: no architectural effect here */
  /* 13f934: adr x8, #0x156d40 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1404224)));
  /* 13f938: cbz w0, #0x13f818 */
  if ((ARC_W_R(c, 0)) == 0) goto L_13f818;
  /* 13f93c: nop  */
  /* nop: no architectural effect here */
  /* 13f940: adr x0, #0x159210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 13f944: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1309000));
  fn1_1424d0(c);
  /* 13f948: ldr x1, [sp, #8] */
  ARC_X_W(c, 1, arc_ld64(((c)->sp + INT64_C(8))));
  /* 13f94c: nop  */
  /* nop: no architectural effect here */
  /* 13f950: adr x8, #0x156d40 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1404224)));
  /* 13f954: b #0x13f818 */
  goto L_13f818;
L_13f958:;
  /* 13f958: nop  */
  /* nop: no architectural effect here */
  /* 13f95c: adr x0, #0x159210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 13f960: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1309028));
  fn1_1424b8(c);
  /* 13f964: nop  */
  /* nop: no architectural effect here */
  /* 13f968: adr x8, #0x156d40 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1404224)));
  /* 13f96c: cbz w0, #0x13f830 */
  if ((ARC_W_R(c, 0)) == 0) goto L_13f830;
  /* 13f970: nop  */
  /* nop: no architectural effect here */
  /* 13f974: adr x0, #0x159210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 13f978: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1309052));
  fn1_1424d0(c);
  /* 13f97c: nop  */
  /* nop: no architectural effect here */
  /* 13f980: adr x8, #0x156d40 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1404224)));
  /* 13f984: b #0x13f830 */
  goto L_13f830;
L_13f988:;
  /* 13f988: nop  */
  /* nop: no architectural effect here */
  /* 13f98c: adr x0, #0x159208 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 13f990: str x8, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 8));
  /* 13f994: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1309080));
  fn1_1424b8(c);
  /* 13f998: ldr x8, [sp, #8] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(8))));
  /* 13f99c: cbz w0, #0x13f878 */
  if ((ARC_W_R(c, 0)) == 0) goto L_13f878;
  /* 13f9a0: nop  */
  /* nop: no architectural effect here */
  /* 13f9a4: adr x0, #0x159208 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 13f9a8: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1309100));
  fn1_1424d0(c);
  /* 13f9ac: ldr x8, [sp, #8] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(8))));
  /* 13f9b0: b #0x13f878 */
  goto L_13f878;
L_13f9b4:;
  /* 13f9b4: nop  */
  /* nop: no architectural effect here */
  /* 13f9b8: adr x0, #0x159208 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 13f9bc: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1309120));
  fn1_1424b8(c);
  /* 13f9c0: cbz w0, #0x13f8dc */
  if ((ARC_W_R(c, 0)) == 0) goto L_13f8dc;
  /* 13f9c4: nop  */
  /* nop: no architectural effect here */
  /* 13f9c8: adr x0, #0x159208 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 13f9cc: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1309136));
  fn1_1424d0(c);
  /* 13f9d0: b #0x13f8dc */
  goto L_13f8dc;
}

void fn1_142758(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039248728));
  /* 142758: adrp x16, #0x151000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 14275c: ldr x17, [x16, #0xfa8] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(4008))));
  /* 142760: add x16, x16, #0xfa8 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(4008)));
  /* 142764: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 142768: nop  */
  /* nop: no architectural effect here */
  /* 14276c: nop  */
  /* nop: no architectural effect here */
}

void fn1_142d58(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039250264));
  /* 142d58: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 142d5c: ldr x17, [x16, #0x1a8] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(424))));
  /* 142d60: add x16, x16, #0x1a8 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(424)));
  /* 142d64: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 142d68: nop  */
  /* nop: no architectural effect here */
  /* 142d6c: nop  */
  /* nop: no architectural effect here */
}

void fn1_143358(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039251800));
  /* 143358: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 14335c: ldr x17, [x16, #0x3a8] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(936))));
  /* 143360: add x16, x16, #0x3a8 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(936)));
  /* 143364: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 143368: nop  */
  /* nop: no architectural effect here */
  /* 14336c: nop  */
  /* nop: no architectural effect here */
}

void fn1_143958(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039253336));
  /* 143958: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 14395c: ldr x17, [x16, #0x5a8] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(1448))));
  /* 143960: add x16, x16, #0x5a8 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(1448)));
  /* 143964: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 143968: nop  */
  /* nop: no architectural effect here */
  /* 14396c: nop  */
  /* nop: no architectural effect here */
}

void fn1_143f58(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039254872));
  /* 143f58: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 143f5c: ldr x17, [x16, #0x7a8] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(1960))));
  /* 143f60: add x16, x16, #0x7a8 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(1960)));
  /* 143f64: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 143f68: nop  */
  /* nop: no architectural effect here */
  /* 143f6c: nop  */
  /* nop: no architectural effect here */
}

void fn1_144558(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039256408));
  /* 144558: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 14455c: ldr x17, [x16, #0x9a8] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(2472))));
  /* 144560: add x16, x16, #0x9a8 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(2472)));
  /* 144564: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 144568: nop  */
  /* nop: no architectural effect here */
  /* 14456c: nop  */
  /* nop: no architectural effect here */
}

