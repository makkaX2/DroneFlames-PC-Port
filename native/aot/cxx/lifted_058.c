#include "lifted.h"

void fn1_a091c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038585628));
  /* a091c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* a0920: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* a0924: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* a0928: mov w0, #8 */
  ARC_W_W(c, 0, UINT64_C(8));
  /* a092c: bl #0x142410 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(657712));
  fn1_142410(c);
  /* a0930: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* a0934: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* a0938: adrp x2, #0x151000 */
  ARC_X_W(c, 2, (arc_image_bases[1] + UINT64_C(1380352)));
  /* a093c: ldr x8, [x8, #0x8d8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2264))));
  /* a0940: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* a0944: str x8, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* a0948: ldr x1, [x1, #0x8a8] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(2216))));
  /* a094c: ldr x2, [x2, #0x890] */
  ARC_X_W(c, 2, arc_ld64((ARC_X_R(c, 2) + INT64_C(2192))));
  /* a0950: bl #0x142440 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(657748));
  fn1_142440(c);
}

void fn1_a22b0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038592176));
  /* a22b0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* a22b4: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* a22b8: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* a22bc: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* a22c0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* a22c4: bl #0x1426e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(664264));
  fn1_1426e0(c);
  /* a22c8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a22cc: mov w1, #0x10 */
  ARC_W_W(c, 1, UINT64_C(16));
  /* a22d0: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* a22d4: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* a22d8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* a22dc: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_a7c88(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038615176));
  /* a7c88: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* a7c8c: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* a7c90: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* a7c94: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* a7c98: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* a7c9c: ldr x21, [x0, #0x1330] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 0) + INT64_C(4912))));
  /* a7ca0: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* a7ca4: ldr x8, [x21, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 21) + INT64_C(8))));
  /* a7ca8: sub x9, x8, #0xfc0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4032)));
  /* a7cac: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* a7cb0: b.hi #0xa7cd4 */
  if (ARC_COND(c, 8)) goto L_a7cd4;
  /* a7cb4: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* a7cb8: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* a7cbc: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(687296));
  fn1_1428a8(c);
  /* a7cc0: cbz x0, #0xa7d34 */
  if ((ARC_X_R(c, 0)) == 0) goto L_a7d34;
  /* a7cc4: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* a7cc8: stp x21, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 21));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* a7ccc: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* a7cd0: str x0, [x20, #0x1330] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(4912)), ARC_X_R(c, 0));
L_a7cd4:;
  /* a7cd4: add x9, x8, #0x30 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(48)));
  /* a7cd8: add x0, x21, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) + ARC_X_R(c, 8)));
  /* a7cdc: adrp x8, #0x149000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1347584)));
  /* a7ce0: add x8, x8, #0xb10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2832)));
  /* a7ce4: str x9, [x21, #8] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(8)), ARC_X_R(c, 9));
  /* a7ce8: mov w10, #0x540 */
  ARC_W_W(c, 10, UINT64_C(1344));
  /* a7cec: str x8, [x0, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* a7cf0: ldurh w9, [x0, #9] */
  ARC_W_W(c, 9, arc_ld16((ARC_X_R(c, 0) + INT64_C(9))));
  /* a7cf4: mov w8, #0x15 */
  ARC_W_W(c, 8, UINT64_C(21));
  /* a7cf8: mov w11, #8 */
  ARC_W_W(c, 11, UINT64_C(8));
  /* a7cfc: strb w8, [x0, #8] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 8));
  /* a7d00: adrp x8, #0x4f000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(323584)));
  /* a7d04: add x8, x8, #0x692 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1682)));
  /* a7d08: and w9, w9, #0xf000 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) & UINT64_C(61440)));
  /* a7d0c: str x8, [x0, #0x10] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(16)), ARC_X_R(c, 8));
  /* a7d10: orr w8, w9, w10 */
  ARC_W_W(c, 8, (ARC_W_R(c, 9) | ARC_W_R(c, 10)));
  /* a7d14: ldr x9, [x19] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 19)));
  /* a7d18: sturh w8, [x0, #9] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(9)), ARC_W_R(c, 8));
  /* a7d1c: stp x11, x9, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    arc_st64(_pa, ARC_X_R(c, 11));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* a7d20: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* a7d24: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* a7d28: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* a7d2c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* a7d30: ret  */
  return;
L_a7d34:;
  /* a7d34: bl #0x142488 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(687416));
  fn1_142488(c);
}

void fn1_adb28(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038639400));
  /* adb28: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* adb2c: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* adb30: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* adb34: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* adb38: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* adb3c: ldr x21, [x0, #0x1330] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 0) + INT64_C(4912))));
  /* adb40: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* adb44: ldr x8, [x21, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 21) + INT64_C(8))));
  /* adb48: sub x9, x8, #0xfd0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4048)));
  /* adb4c: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* adb50: b.hi #0xadb74 */
  if (ARC_COND(c, 8)) goto L_adb74;
  /* adb54: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* adb58: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* adb5c: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(711520));
  fn1_1428a8(c);
  /* adb60: cbz x0, #0xadbc4 */
  if ((ARC_X_R(c, 0)) == 0) goto L_adbc4;
  /* adb64: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* adb68: stp x21, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 21));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* adb6c: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* adb70: str x0, [x20, #0x1330] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(4912)), ARC_X_R(c, 0));
L_adb74:;
  /* adb74: add x9, x8, #0x20 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(32)));
  /* adb78: add x0, x21, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) + ARC_X_R(c, 8)));
  /* adb7c: adrp x8, #0x14a000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1351680)));
  /* adb80: add x8, x8, #0xf78 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3960)));
  /* adb84: str x9, [x21, #8] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(8)), ARC_X_R(c, 9));
  /* adb88: mov w9, #0x2a */
  ARC_W_W(c, 9, UINT64_C(42));
  /* adb8c: str x8, [x0, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* adb90: ldurh w8, [x0, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 0) + INT64_C(9))));
  /* adb94: mov w10, #0x540 */
  ARC_W_W(c, 10, UINT64_C(1344));
  /* adb98: strb w9, [x0, #8] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 9));
  /* adb9c: ldr x9, [x19] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 19)));
  /* adba0: and w8, w8, #0xf000 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(61440)));
  /* adba4: orr w8, w8, w10 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | ARC_W_R(c, 10)));
  /* adba8: sturh w8, [x0, #9] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(9)), ARC_W_R(c, 8));
  /* adbac: str x9, [x0, #0x10] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(16)), ARC_X_R(c, 9));
  /* adbb0: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* adbb4: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* adbb8: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* adbbc: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* adbc0: ret  */
  return;
L_adbc4:;
  /* adbc4: bl #0x142488 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(711624));
  fn1_142488(c);
}

void fn1_b33ec(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038662124));
  /* b33ec: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* b33f0: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b33f4: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* b33f8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* b33fc: ldr x19, [x0, #0x10] */
  ARC_X_W(c, 19, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* b3400: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* b3404: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* b3408: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* b340c: ldr x8, [x8, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* b3410: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(734228));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* b3414: ldurh w8, [x19, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 19) + INT64_C(9))));
  /* b3418: and w8, w8, #0xc0 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(192)));
  /* b341c: cmp w8, #0x40 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(64));
  /* b3420: b.ne #0xb3434 */
  if (ARC_COND(c, 1)) goto L_b3434;
  /* b3424: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* b3428: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b342c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* b3430: ret  */
  return;
L_b3434:;
  /* b3434: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* b3438: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* b343c: ldr x16, [x8, #0x28] */
  ARC_X_W(c, 16, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* b3440: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* b3444: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* b3448: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b344c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* b3450: br x16 */
  arc_dispatch(c, ARC_X_R(c, 16)); return;
}

void fn1_b6e0c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038677004));
  /* b6e0c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* b6e10: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b6e14: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* b6e18: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* b6e1c: ldp x9, x10, [x1, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 1) + INT64_C(8));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* b6e20: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* b6e24: ldr x8, [x1] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 1)));
  /* b6e28: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* b6e2c: add x11, x9, #2 */
  ARC_X_W(c, 11, (ARC_X_R(c, 9) + UINT64_C(2)));
  /* b6e30: cmp x11, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 10));
  /* b6e34: b.ls #0xb6e64 */
  if (ARC_COND(c, 9)) goto L_b6e64;
  /* b6e38: lsl x10, x10, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* b6e3c: add x9, x9, #0x3e2 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(994)));
  /* b6e40: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* b6e44: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* b6e48: csel x1, x10, x9, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* b6e4c: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b6e50: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(749140));
  fn1_142878(c);
  /* b6e54: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b6e58: cbz x0, #0xb6ed0 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b6ed0;
  /* b6e5c: ldr x9, [x19, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b6e60: mov x8, x0 */
  ARC_X_W(c, 8, ARC_X_R(c, 0));
L_b6e64:;
  /* b6e64: mov w10, #0x3a3a */
  ARC_W_W(c, 10, UINT64_C(14906));
  /* b6e68: strh w10, [x8, x9] */
  arc_st16((ARC_X_R(c, 8) + ARC_X_R(c, 9)), ARC_W_R(c, 10));
  /* b6e6c: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* b6e70: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b6e74: ldr x20, [x20, #0x10] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 20) + INT64_C(16))));
  /* b6e78: add x8, x8, #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2)));
  /* b6e7c: ldr x9, [x20] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 20)));
  /* b6e80: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* b6e84: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
  /* b6e88: ldr x8, [x9, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(32))));
  /* b6e8c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(749200));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* b6e90: ldurh w8, [x20, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 20) + INT64_C(9))));
  /* b6e94: and w8, w8, #0xc0 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(192)));
  /* b6e98: cmp w8, #0x40 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(64));
  /* b6e9c: b.ne #0xb6eb0 */
  if (ARC_COND(c, 1)) goto L_b6eb0;
  /* b6ea0: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* b6ea4: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b6ea8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* b6eac: ret  */
  return;
L_b6eb0:;
  /* b6eb0: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* b6eb4: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* b6eb8: ldr x16, [x8, #0x28] */
  ARC_X_W(c, 16, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* b6ebc: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* b6ec0: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* b6ec4: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b6ec8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* b6ecc: br x16 */
  arc_dispatch(c, ARC_X_R(c, 16)); return;
L_b6ed0:;
  /* b6ed0: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(749268));
  fn1_1427b8(c);
}

void fn1_b98ec(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038687980));
  /* b98ec: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* b98f0: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b98f4: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* b98f8: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* b98fc: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* b9900: ldr x21, [x0, #0x1330] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 0) + INT64_C(4912))));
  /* b9904: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* b9908: ldr x8, [x21, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 21) + INT64_C(8))));
  /* b990c: sub x9, x8, #0xfd0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4048)));
  /* b9910: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* b9914: b.hi #0xb9938 */
  if (ARC_COND(c, 8)) goto L_b9938;
  /* b9918: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* b991c: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* b9920: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(760100));
  fn1_1428a8(c);
  /* b9924: cbz x0, #0xb9994 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b9994;
  /* b9928: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* b992c: stp x21, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 21));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* b9930: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* b9934: str x0, [x20, #0x1330] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(4912)), ARC_X_R(c, 0));
L_b9938:;
  /* b9938: add x9, x8, #0x20 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(32)));
  /* b993c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* b9940: add x20, x21, x8 */
  ARC_X_W(c, 20, (ARC_X_R(c, 21) + ARC_X_R(c, 8)));
  /* b9944: str x9, [x21, #8] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(8)), ARC_X_R(c, 9));
  /* b9948: bl #0x142860 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(760140));
  fn1_142860(c);
  /* b994c: adrp x9, #0x149000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1347584)));
  /* b9950: add x9, x9, #0xc10 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(3088)));
  /* b9954: mov w11, #0x540 */
  ARC_W_W(c, 11, UINT64_C(1344));
  /* b9958: str x9, [x20, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 20) + INT64_C(16));
    ARC_X_W(c, 20, ARC_X_R(c, 20) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 9));
  }
  /* b995c: ldurh w9, [x20, #9] */
  ARC_W_W(c, 9, arc_ld16((ARC_X_R(c, 20) + INT64_C(9))));
  /* b9960: mov x8, x0 */
  ARC_X_W(c, 8, ARC_X_R(c, 0));
  /* b9964: mov w10, #8 */
  ARC_W_W(c, 10, UINT64_C(8));
  /* b9968: and w9, w9, #0xf000 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) & UINT64_C(61440)));
  /* b996c: strb w10, [x20, #8] */
  arc_st8((ARC_X_R(c, 20) + INT64_C(8)), ARC_W_R(c, 10));
  /* b9970: orr w9, w9, w11 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | ARC_W_R(c, 11)));
  /* b9974: stp x19, x8, [x20, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 19));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* b9978: sturh w9, [x20, #9] */
  arc_st16((ARC_X_R(c, 20) + INT64_C(9)), ARC_W_R(c, 9));
  /* b997c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* b9980: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* b9984: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* b9988: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b998c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* b9990: ret  */
  return;
L_b9994:;
  /* b9994: bl #0x142488 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(760216));
  fn1_142488(c);
}

void fn1_bcd10(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038701328));
  /* bcd10: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* bcd14: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* bcd18: stp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* bcd1c: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* bcd20: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* bcd24: ldr x21, [x0, #0x18] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 0) + INT64_C(24))));
  /* bcd28: ldr x8, [x1, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 1) + INT64_C(8))));
  /* bcd2c: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* bcd30: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* bcd34: cbz x21, #0xbcd90 */
  if ((ARC_X_R(c, 21)) == 0) goto L_bcd90;
  /* bcd38: ldr x10, [x19, #0x10] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* bcd3c: add x9, x8, x21 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + ARC_X_R(c, 21)));
  /* bcd40: ldr x22, [x20, #0x10] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 20) + INT64_C(16))));
  /* bcd44: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* bcd48: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* bcd4c: b.ls #0xbcd74 */
  if (ARC_COND(c, 9)) goto L_bcd74;
  /* bcd50: lsl x8, x10, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* bcd54: add x9, x9, #0x3e0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(992)));
  /* bcd58: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* bcd5c: csel x1, x8, x9, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* bcd60: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* bcd64: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(773480));
  fn1_142878(c);
  /* bcd68: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* bcd6c: cbz x0, #0xbce3c */
  if ((ARC_X_R(c, 0)) == 0) goto L_bce3c;
  /* bcd70: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
L_bcd74:;
  /* bcd74: add x0, x0, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* bcd78: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* bcd7c: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* bcd80: bl #0x1449d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(773508));
  fn1_1449d8(c);
  /* bcd84: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* bcd88: add x8, x8, x21 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + ARC_X_R(c, 21)));
  /* bcd8c: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
L_bcd90:;
  /* bcd90: ldr x10, [x19, #0x10] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* bcd94: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* bcd98: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* bcd9c: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* bcda0: b.ls #0xbcdcc */
  if (ARC_COND(c, 9)) goto L_bcdcc;
  /* bcda4: lsl x9, x10, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* bcda8: add x8, x8, #0x3e1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(993)));
  /* bcdac: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* bcdb0: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* bcdb4: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* bcdb8: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(773564));
  fn1_142878(c);
  /* bcdbc: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* bcdc0: cbz x0, #0xbce38 */
  if ((ARC_X_R(c, 0)) == 0) goto L_bce38;
  /* bcdc4: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* bcdc8: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
L_bcdcc:;
  /* bcdcc: str x9, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 9));
  /* bcdd0: mov w9, #0x20 */
  ARC_W_W(c, 9, UINT64_C(32));
  /* bcdd4: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* bcdd8: strb w9, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
  /* bcddc: ldr x20, [x20, #0x20] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 20) + INT64_C(32))));
  /* bcde0: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* bcde4: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* bcde8: ldr x8, [x8, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* bcdec: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(773616));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* bcdf0: ldurh w8, [x20, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 20) + INT64_C(9))));
  /* bcdf4: and w8, w8, #0xc0 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(192)));
  /* bcdf8: cmp w8, #0x40 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(64));
  /* bcdfc: b.ne #0xbce14 */
  if (ARC_COND(c, 1)) goto L_bce14;
  /* bce00: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* bce04: ldp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* bce08: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* bce0c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* bce10: ret  */
  return;
L_bce14:;
  /* bce14: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* bce18: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* bce1c: ldr x16, [x8, #0x28] */
  ARC_X_W(c, 16, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* bce20: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* bce24: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* bce28: ldp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* bce2c: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* bce30: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* bce34: br x16 */
  arc_dispatch(c, ARC_X_R(c, 16)); return;
L_bce38:;
  /* bce38: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(773692));
  fn1_1427b8(c);
L_bce3c:;
  /* bce3c: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(773696));
  fn1_1427b8(c);
}

void fn1_c1cd4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038721748));
L_c1cd4:;
  /* c1cd4: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* c1cd8: stp d15, d14, [sp, #-0xa0]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-160));
    (c)->sp = (c)->sp + INT64_C(-160);
    arc_st64(_pa, (c)->q[15].u64[0]);
    arc_st64((_pa + 8), (c)->q[14].u64[0]);
  }
  /* c1cdc: stp d13, d12, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, (c)->q[13].u64[0]);
    arc_st64((_pa + 8), (c)->q[12].u64[0]);
  }
  /* c1ce0: stp d11, d10, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, (c)->q[11].u64[0]);
    arc_st64((_pa + 8), (c)->q[10].u64[0]);
  }
  /* c1ce4: stp d9, d8, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, (c)->q[9].u64[0]);
    arc_st64((_pa + 8), (c)->q[8].u64[0]);
  }
  /* c1ce8: stp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* c1cec: stp x28, x27, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* c1cf0: stp x26, x25, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* c1cf4: stp x24, x23, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* c1cf8: stp x22, x21, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* c1cfc: stp x20, x19, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* c1d00: add x29, sp, #0x40 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(64)));
  /* c1d04: sub sp, sp, #0x1f0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(496)));
  /* c1d08: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* c1d0c: adrp x9, #0x52000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(335872)));
  /* c1d10: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* c1d14: ldr q0, [x8, #0xcf0] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(3312))), arc_ld64((ARC_X_R(c, 8) + INT64_C(3312)) + 8));
  /* c1d18: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* c1d1c: ldr q11, [x9, #0xb90] */
  arc_q_w(c, 11, arc_ld64((ARC_X_R(c, 9) + INT64_C(2960))), arc_ld64((ARC_X_R(c, 9) + INT64_C(2960)) + 8));
  /* c1d20: ldr q12, [x8, #0xb00] */
  arc_q_w(c, 12, arc_ld64((ARC_X_R(c, 8) + INT64_C(2816))), arc_ld64((ARC_X_R(c, 8) + INT64_C(2816)) + 8));
  /* c1d24: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* c1d28: adrp x9, #0x52000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(335872)));
  /* c1d2c: ldr q13, [x8, #0x990] */
  arc_q_w(c, 13, arc_ld64((ARC_X_R(c, 8) + INT64_C(2448))), arc_ld64((ARC_X_R(c, 8) + INT64_C(2448)) + 8));
  /* c1d30: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* c1d34: stur q0, [x29, #-0x60] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-96)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 29) + INT64_C(-96)) + 8, (c)->q[0].u64[1]);
  /* c1d38: ldr q15, [x8, #0xaa0] */
  arc_q_w(c, 15, arc_ld64((ARC_X_R(c, 8) + INT64_C(2720))), arc_ld64((ARC_X_R(c, 8) + INT64_C(2720)) + 8));
  /* c1d3c: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* c1d40: ldr q14, [x9, #0xa50] */
  arc_q_w(c, 14, arc_ld64((ARC_X_R(c, 9) + INT64_C(2640))), arc_ld64((ARC_X_R(c, 9) + INT64_C(2640)) + 8));
  /* c1d44: ldr q0, [x8, #0xba0] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(2976))), arc_ld64((ARC_X_R(c, 8) + INT64_C(2976)) + 8));
  /* c1d48: adrp x9, #0x52000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(335872)));
  /* c1d4c: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* c1d50: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* c1d54: adrp x6, #0x52000 */
  ARC_X_W(c, 6, (arc_image_bases[1] + UINT64_C(335872)));
  /* c1d58: adrp x27, #0x52000 */
  ARC_X_W(c, 27, (arc_image_bases[1] + UINT64_C(335872)));
  /* c1d5c: stur q0, [x29, #-0x70] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-112)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 29) + INT64_C(-112)) + 8, (c)->q[0].u64[1]);
  /* c1d60: ldr q0, [x9, #0x9d0] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 9) + INT64_C(2512))), arc_ld64((ARC_X_R(c, 9) + INT64_C(2512)) + 8));
  /* c1d64: adrp x9, #0x52000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(335872)));
  /* c1d68: adrp x22, #0x52000 */
  ARC_X_W(c, 22, (arc_image_bases[1] + UINT64_C(335872)));
  /* c1d6c: mov x4, #-0x40 */
  ARC_X_W(c, 4, UINT64_C(18446744073709551552));
  /* c1d70: mov w5, #1 */
  ARC_W_W(c, 5, UINT64_C(1));
  /* c1d74: stur q0, [x29, #-0x80] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-128)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 29) + INT64_C(-128)) + 8, (c)->q[0].u64[1]);
  /* c1d78: ldr q0, [x8, #0xd60] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(3424))), arc_ld64((ARC_X_R(c, 8) + INT64_C(3424)) + 8));
  /* c1d7c: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* c1d80: mov w21, #4 */
  ARC_W_W(c, 21, UINT64_C(4));
  /* c1d84: mov w28, #0x10 */
  ARC_W_W(c, 28, UINT64_C(16));
  /* c1d88: mov x26, #-1 */
  ARC_X_W(c, 26, UINT64_C(18446744073709551615));
  /* c1d8c: stur q0, [x29, #-0x90] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-144)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 29) + INT64_C(-144)) + 8, (c)->q[0].u64[1]);
  /* c1d90: ldr q0, [x8, #0xb40] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(2880))), arc_ld64((ARC_X_R(c, 8) + INT64_C(2880)) + 8));
  /* c1d94: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* c1d98: str w3, [sp, #0x5c] */
  arc_st32(((c)->sp + INT64_C(92)), ARC_W_R(c, 3));
  /* c1d9c: stur q0, [x29, #-0xa0] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-160)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 29) + INT64_C(-160)) + 8, (c)->q[0].u64[1]);
  /* c1da0: ldr q0, [x9, #0x9e0] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 9) + INT64_C(2528))), arc_ld64((ARC_X_R(c, 9) + INT64_C(2528)) + 8));
  /* c1da4: adrp x9, #0x52000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(335872)));
  /* c1da8: stp q14, q13, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, (c)->q[14].u64[0]);
    arc_st64(_pa + 8, (c)->q[14].u64[1]);
    arc_st64((_pa + 16), (c)->q[13].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[13].u64[1]);
  }
  /* c1dac: stur q0, [x29, #-0xb0] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-176)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 29) + INT64_C(-176)) + 8, (c)->q[0].u64[1]);
  /* c1db0: ldr q0, [x8, #0xbc0] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(3008))), arc_ld64((ARC_X_R(c, 8) + INT64_C(3008)) + 8));
  /* c1db4: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* c1db8: stp q12, q11, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, (c)->q[12].u64[0]);
    arc_st64(_pa + 8, (c)->q[12].u64[1]);
    arc_st64((_pa + 16), (c)->q[11].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[11].u64[1]);
  }
  /* c1dbc: stur q0, [x29, #-0xc0] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-192)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 29) + INT64_C(-192)) + 8, (c)->q[0].u64[1]);
  /* c1dc0: ldr q0, [x8, #0xb50] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(2896))), arc_ld64((ARC_X_R(c, 8) + INT64_C(2896)) + 8));
  /* c1dc4: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* c1dc8: str q15, [sp] */
  arc_st64((c)->sp, (c)->q[15].u64[0]);
  arc_st64((c)->sp + 8, (c)->q[15].u64[1]);
  /* c1dcc: stur q0, [x29, #-0xd0] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-208)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 29) + INT64_C(-208)) + 8, (c)->q[0].u64[1]);
  /* c1dd0: ldr q0, [x9, #0x9f0] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 9) + INT64_C(2544))), arc_ld64((ARC_X_R(c, 9) + INT64_C(2544)) + 8));
  /* c1dd4: adrp x9, #0x52000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(335872)));
  /* c1dd8: stur q0, [x29, #-0xe0] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-224)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 29) + INT64_C(-224)) + 8, (c)->q[0].u64[1]);
  /* c1ddc: ldr q0, [x8, #0xd10] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(3344))), arc_ld64((ARC_X_R(c, 8) + INT64_C(3344)) + 8));
  /* c1de0: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* c1de4: stur q0, [x29, #-0xf0] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-240)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 29) + INT64_C(-240)) + 8, (c)->q[0].u64[1]);
  /* c1de8: ldr q0, [x8, #0x970] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(2416))), arc_ld64((ARC_X_R(c, 8) + INT64_C(2416)) + 8));
  /* c1dec: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* c1df0: stur q0, [x29, #-0x100] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-256)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 29) + INT64_C(-256)) + 8, (c)->q[0].u64[1]);
  /* c1df4: ldr q0, [x9, #0xa60] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 9) + INT64_C(2656))), arc_ld64((ARC_X_R(c, 9) + INT64_C(2656)) + 8));
  /* c1df8: adrp x9, #0x52000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(335872)));
  /* c1dfc: str q0, [sp, #0x120] */
  arc_st64(((c)->sp + INT64_C(288)), (c)->q[0].u64[0]);
  arc_st64(((c)->sp + INT64_C(288)) + 8, (c)->q[0].u64[1]);
  /* c1e00: ldr q0, [x8, #0x980] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(2432))), arc_ld64((ARC_X_R(c, 8) + INT64_C(2432)) + 8));
  /* c1e04: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* c1e08: str q0, [sp, #0x110] */
  arc_st64(((c)->sp + INT64_C(272)), (c)->q[0].u64[0]);
  arc_st64(((c)->sp + INT64_C(272)) + 8, (c)->q[0].u64[1]);
  /* c1e0c: ldr q0, [x8, #0xbf0] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(3056))), arc_ld64((ARC_X_R(c, 8) + INT64_C(3056)) + 8));
  /* c1e10: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* c1e14: str q0, [sp, #0x100] */
  arc_st64(((c)->sp + INT64_C(256)), (c)->q[0].u64[0]);
  arc_st64(((c)->sp + INT64_C(256)) + 8, (c)->q[0].u64[1]);
  /* c1e18: ldr q0, [x9, #0xb10] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 9) + INT64_C(2832))), arc_ld64((ARC_X_R(c, 9) + INT64_C(2832)) + 8));
  /* c1e1c: adrp x9, #0x52000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(335872)));
  /* c1e20: str q0, [sp, #0xf0] */
  arc_st64(((c)->sp + INT64_C(240)), (c)->q[0].u64[0]);
  arc_st64(((c)->sp + INT64_C(240)) + 8, (c)->q[0].u64[1]);
  /* c1e24: ldr q0, [x8, #0xd70] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(3440))), arc_ld64((ARC_X_R(c, 8) + INT64_C(3440)) + 8));
  /* c1e28: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* c1e2c: str q0, [sp, #0xe0] */
  arc_st64(((c)->sp + INT64_C(224)), (c)->q[0].u64[0]);
  arc_st64(((c)->sp + INT64_C(224)) + 8, (c)->q[0].u64[1]);
  /* c1e30: ldr q0, [x8, #0xd30] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(3376))), arc_ld64((ARC_X_R(c, 8) + INT64_C(3376)) + 8));
  /* c1e34: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* c1e38: str q0, [sp, #0xd0] */
  arc_st64(((c)->sp + INT64_C(208)), (c)->q[0].u64[0]);
  arc_st64(((c)->sp + INT64_C(208)) + 8, (c)->q[0].u64[1]);
  /* c1e3c: ldr q0, [x9, #0x9a0] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 9) + INT64_C(2464))), arc_ld64((ARC_X_R(c, 9) + INT64_C(2464)) + 8));
  /* c1e40: adrp x9, #0x52000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(335872)));
  /* c1e44: str q0, [sp, #0xc0] */
  arc_st64(((c)->sp + INT64_C(192)), (c)->q[0].u64[0]);
  arc_st64(((c)->sp + INT64_C(192)) + 8, (c)->q[0].u64[1]);
  /* c1e48: ldr q0, [x8, #0xc30] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(3120))), arc_ld64((ARC_X_R(c, 8) + INT64_C(3120)) + 8));
  /* c1e4c: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* c1e50: str q0, [sp, #0xb0] */
  arc_st64(((c)->sp + INT64_C(176)), (c)->q[0].u64[0]);
  arc_st64(((c)->sp + INT64_C(176)) + 8, (c)->q[0].u64[1]);
  /* c1e54: ldr q0, [x8, #0xb60] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(2912))), arc_ld64((ARC_X_R(c, 8) + INT64_C(2912)) + 8));
  /* c1e58: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* c1e5c: str q0, [sp, #0xa0] */
  arc_st64(((c)->sp + INT64_C(160)), (c)->q[0].u64[0]);
  arc_st64(((c)->sp + INT64_C(160)) + 8, (c)->q[0].u64[1]);
  /* c1e60: ldr q0, [x9, #0xa00] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 9) + INT64_C(2560))), arc_ld64((ARC_X_R(c, 9) + INT64_C(2560)) + 8));
  /* c1e64: adrp x9, #0x52000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(335872)));
  /* c1e68: str q0, [sp, #0x90] */
  arc_st64(((c)->sp + INT64_C(144)), (c)->q[0].u64[0]);
  arc_st64(((c)->sp + INT64_C(144)) + 8, (c)->q[0].u64[1]);
  /* c1e6c: ldr q0, [x8, #0x9b0] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(2480))), arc_ld64((ARC_X_R(c, 8) + INT64_C(2480)) + 8));
  /* c1e70: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* c1e74: str q0, [sp, #0x80] */
  arc_st64(((c)->sp + INT64_C(128)), (c)->q[0].u64[0]);
  arc_st64(((c)->sp + INT64_C(128)) + 8, (c)->q[0].u64[1]);
  /* c1e78: ldr q0, [x8, #0xb20] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(2848))), arc_ld64((ARC_X_R(c, 8) + INT64_C(2848)) + 8));
  /* c1e7c: str q0, [sp, #0x70] */
  arc_st64(((c)->sp + INT64_C(112)), (c)->q[0].u64[0]);
  arc_st64(((c)->sp + INT64_C(112)) + 8, (c)->q[0].u64[1]);
  /* c1e80: ldr q0, [x9, #0xcb0] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 9) + INT64_C(3248))), arc_ld64((ARC_X_R(c, 9) + INT64_C(3248)) + 8));
  /* c1e84: str q0, [sp, #0x60] */
  arc_st64(((c)->sp + INT64_C(96)), (c)->q[0].u64[0]);
  arc_st64(((c)->sp + INT64_C(96)) + 8, (c)->q[0].u64[1]);
L_c1e88:;
  /* c1e88: mov x23, x19 */
  ARC_X_W(c, 23, ARC_X_R(c, 19));
L_c1e8c:;
  /* c1e8c: sub x8, x20, x23 */
  ARC_X_W(c, 8, (ARC_X_R(c, 20) - ARC_X_R(c, 23)));
  /* c1e90: mov x19, x23 */
  ARC_X_W(c, 19, ARC_X_R(c, 23));
  /* c1e94: subs x9, x8, #2 */
  ARC_X_W(c, 9, arc_sub64(c, ARC_X_R(c, 8), UINT64_C(2)));
  /* c1e98: b.gt #0xc1eac */
  if (ARC_COND(c, 12)) goto L_c1eac;
  /* c1e9c: b.lo #0xc3040 */
  if (ARC_COND(c, 3)) goto L_c3040;
  /* c1ea0: cmp x8, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(2));
  /* c1ea4: b.ne #0xc1ec4 */
  if (ARC_COND(c, 1)) goto L_c1ec4;
  /* c1ea8: b #0xc2f58 */
  goto L_c2f58;
L_c1eac:;
  /* c1eac: cmp x8, #3 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(3));
  /* c1eb0: b.eq #0xc2f74 */
  if (ARC_COND(c, 0)) goto L_c2f74;
  /* c1eb4: cmp x8, #4 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(4));
  /* c1eb8: b.eq #0xc2fc4 */
  if (ARC_COND(c, 0)) goto L_c2fc4;
  /* c1ebc: cmp x8, #5 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(5));
  /* c1ec0: b.eq #0xc2e84 */
  if (ARC_COND(c, 0)) goto L_c2e84;
L_c1ec4:;
  /* c1ec4: cmp x8, #0x17 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(23));
  /* c1ec8: b.le #0xc3074 */
  if (ARC_COND(c, 13)) goto L_c3074;
  /* c1ecc: cbz x2, #0xc30f4 */
  if ((ARC_X_R(c, 2)) == 0) goto L_c30f4;
  /* c1ed0: ldurb w10, [x20, #-1] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 20) + INT64_C(-1))));
  /* c1ed4: add x9, x19, x8, lsr #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + ((uint64_t)(ARC_X_R(c, 8)) >> 1)));
  /* c1ed8: cmp x8, #0x81 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(129));
  /* c1edc: sxtb w8, w10 */
  ARC_W_W(c, 8, ((int32_t)(int8_t)(ARC_W_R(c, 10))));
  /* c1ee0: b.lo #0xc2028 */
  if (ARC_COND(c, 3)) goto L_c2028;
  /* c1ee4: ldrsb w10, [x9] */
  ARC_W_W(c, 10, ((int32_t)(int8_t)arc_ld8(ARC_X_R(c, 9))));
  /* c1ee8: cmp w10, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 10), ARC_W_R(c, 8));
  /* c1eec: csel w11, w10, w8, gt */
  ARC_W_W(c, 11, (ARC_COND(c, 12) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 8)));
  /* c1ef0: csel w8, w10, w8, lt */
  ARC_W_W(c, 8, (ARC_COND(c, 11) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 8)));
  /* c1ef4: sturb w11, [x20, #-1] */
  arc_st8((ARC_X_R(c, 20) + INT64_C(-1)), ARC_W_R(c, 11));
  /* c1ef8: strb w8, [x9] */
  arc_st8(ARC_X_R(c, 9), ARC_W_R(c, 8));
  /* c1efc: ldursb w8, [x20, #-1] */
  ARC_W_W(c, 8, ((int32_t)(int8_t)arc_ld8((ARC_X_R(c, 20) + INT64_C(-1)))));
  /* c1f00: ldrsb w10, [x19] */
  ARC_W_W(c, 10, ((int32_t)(int8_t)arc_ld8(ARC_X_R(c, 19))));
  /* c1f04: cmp w8, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 10));
  /* c1f08: csel w11, w8, w10, gt */
  ARC_W_W(c, 11, (ARC_COND(c, 12) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 10)));
  /* c1f0c: csel w8, w8, w10, lt */
  ARC_W_W(c, 8, (ARC_COND(c, 11) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 10)));
  /* c1f10: sturb w11, [x20, #-1] */
  arc_st8((ARC_X_R(c, 20) + INT64_C(-1)), ARC_W_R(c, 11));
  /* c1f14: ldrsb w11, [x9] */
  ARC_W_W(c, 11, ((int32_t)(int8_t)arc_ld8(ARC_X_R(c, 9))));
  /* c1f18: ldrb w10, [x19] */
  ARC_W_W(c, 10, arc_ld8(ARC_X_R(c, 19)));
  /* c1f1c: cmp w8, w11 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 11));
  /* c1f20: csel w10, w10, w11, lt */
  ARC_W_W(c, 10, (ARC_COND(c, 11) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 11)));
  /* c1f24: strb w10, [x19] */
  arc_st8(ARC_X_R(c, 19), ARC_W_R(c, 10));
  /* c1f28: ldrb w10, [x9] */
  ARC_W_W(c, 10, arc_ld8(ARC_X_R(c, 9)));
  /* c1f2c: csel w8, w10, w8, lt */
  ARC_W_W(c, 8, (ARC_COND(c, 11) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 8)));
  /* c1f30: strb w8, [x9] */
  arc_st8(ARC_X_R(c, 9), ARC_W_R(c, 8));
  /* c1f34: ldursb w8, [x9, #-1] */
  ARC_W_W(c, 8, ((int32_t)(int8_t)arc_ld8((ARC_X_R(c, 9) + INT64_C(-1)))));
  /* c1f38: ldursb w10, [x20, #-2] */
  ARC_W_W(c, 10, ((int32_t)(int8_t)arc_ld8((ARC_X_R(c, 20) + INT64_C(-2)))));
  /* c1f3c: cmp w8, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 10));
  /* c1f40: csel w11, w8, w10, gt */
  ARC_W_W(c, 11, (ARC_COND(c, 12) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 10)));
  /* c1f44: csel w8, w8, w10, lt */
  ARC_W_W(c, 8, (ARC_COND(c, 11) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 10)));
  /* c1f48: sturb w11, [x20, #-2] */
  arc_st8((ARC_X_R(c, 20) + INT64_C(-2)), ARC_W_R(c, 11));
  /* c1f4c: sturb w8, [x9, #-1] */
  arc_st8((ARC_X_R(c, 9) + INT64_C(-1)), ARC_W_R(c, 8));
  /* c1f50: ldursb w8, [x20, #-2] */
  ARC_W_W(c, 8, ((int32_t)(int8_t)arc_ld8((ARC_X_R(c, 20) + INT64_C(-2)))));
  /* c1f54: ldrsb w10, [x19, #1] */
  ARC_W_W(c, 10, ((int32_t)(int8_t)arc_ld8((ARC_X_R(c, 19) + INT64_C(1)))));
  /* c1f58: cmp w8, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 10));
  /* c1f5c: csel w11, w8, w10, gt */
  ARC_W_W(c, 11, (ARC_COND(c, 12) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 10)));
  /* c1f60: csel w8, w8, w10, lt */
  ARC_W_W(c, 8, (ARC_COND(c, 11) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 10)));
  /* c1f64: sturb w11, [x20, #-2] */
  arc_st8((ARC_X_R(c, 20) + INT64_C(-2)), ARC_W_R(c, 11));
  /* c1f68: ldursb w11, [x9, #-1] */
  ARC_W_W(c, 11, ((int32_t)(int8_t)arc_ld8((ARC_X_R(c, 9) + INT64_C(-1)))));
  /* c1f6c: ldrb w10, [x19, #1] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 19) + INT64_C(1))));
  /* c1f70: cmp w8, w11 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 11));
  /* c1f74: csel w10, w10, w11, lt */
  ARC_W_W(c, 10, (ARC_COND(c, 11) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 11)));
  /* c1f78: strb w10, [x19, #1] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(1)), ARC_W_R(c, 10));
  /* c1f7c: ldurb w10, [x9, #-1] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 9) + INT64_C(-1))));
  /* c1f80: csel w8, w10, w8, lt */
  ARC_W_W(c, 8, (ARC_COND(c, 11) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 8)));
  /* c1f84: sturb w8, [x9, #-1] */
  arc_st8((ARC_X_R(c, 9) + INT64_C(-1)), ARC_W_R(c, 8));
  /* c1f88: ldrsb w8, [x9, #1] */
  ARC_W_W(c, 8, ((int32_t)(int8_t)arc_ld8((ARC_X_R(c, 9) + INT64_C(1)))));
  /* c1f8c: ldursb w10, [x20, #-3] */
  ARC_W_W(c, 10, ((int32_t)(int8_t)arc_ld8((ARC_X_R(c, 20) + INT64_C(-3)))));
  /* c1f90: cmp w8, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 10));
  /* c1f94: csel w11, w8, w10, gt */
  ARC_W_W(c, 11, (ARC_COND(c, 12) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 10)));
  /* c1f98: csel w8, w8, w10, lt */
  ARC_W_W(c, 8, (ARC_COND(c, 11) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 10)));
  /* c1f9c: sturb w11, [x20, #-3] */
  arc_st8((ARC_X_R(c, 20) + INT64_C(-3)), ARC_W_R(c, 11));
  /* c1fa0: strb w8, [x9, #1] */
  arc_st8((ARC_X_R(c, 9) + INT64_C(1)), ARC_W_R(c, 8));
  /* c1fa4: ldursb w8, [x20, #-3] */
  ARC_W_W(c, 8, ((int32_t)(int8_t)arc_ld8((ARC_X_R(c, 20) + INT64_C(-3)))));
  /* c1fa8: ldrsb w10, [x19, #2] */
  ARC_W_W(c, 10, ((int32_t)(int8_t)arc_ld8((ARC_X_R(c, 19) + INT64_C(2)))));
  /* c1fac: cmp w8, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 10));
  /* c1fb0: csel w11, w8, w10, gt */
  ARC_W_W(c, 11, (ARC_COND(c, 12) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 10)));
  /* c1fb4: csel w8, w8, w10, lt */
  ARC_W_W(c, 8, (ARC_COND(c, 11) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 10)));
  /* c1fb8: sturb w11, [x20, #-3] */
  arc_st8((ARC_X_R(c, 20) + INT64_C(-3)), ARC_W_R(c, 11));
  /* c1fbc: ldrsb w11, [x9, #1] */
  ARC_W_W(c, 11, ((int32_t)(int8_t)arc_ld8((ARC_X_R(c, 9) + INT64_C(1)))));
  /* c1fc0: ldrb w10, [x19, #2] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 19) + INT64_C(2))));
  /* c1fc4: cmp w8, w11 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 11));
  /* c1fc8: csel w10, w10, w11, lt */
  ARC_W_W(c, 10, (ARC_COND(c, 11) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 11)));
  /* c1fcc: strb w10, [x19, #2] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(2)), ARC_W_R(c, 10));
  /* c1fd0: ldrb w10, [x9, #1] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 9) + INT64_C(1))));
  /* c1fd4: ldursb w11, [x9, #-1] */
  ARC_W_W(c, 11, ((int32_t)(int8_t)arc_ld8((ARC_X_R(c, 9) + INT64_C(-1)))));
  /* c1fd8: csel w8, w10, w8, lt */
  ARC_W_W(c, 8, (ARC_COND(c, 11) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 8)));
  /* c1fdc: ldrsb w10, [x9] */
  ARC_W_W(c, 10, ((int32_t)(int8_t)arc_ld8(ARC_X_R(c, 9))));
  /* c1fe0: sxtb w8, w8 */
  ARC_W_W(c, 8, ((int32_t)(int8_t)(ARC_W_R(c, 8))));
  /* c1fe4: cmp w10, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 10), ARC_W_R(c, 8));
  /* c1fe8: csel w12, w10, w8, gt */
  ARC_W_W(c, 12, (ARC_COND(c, 12) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 8)));
  /* c1fec: csel w8, w10, w8, lt */
  ARC_W_W(c, 8, (ARC_COND(c, 11) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 8)));
  /* c1ff0: cmp w12, w11 */
  (void)arc_sub32(c, ARC_W_R(c, 12), ARC_W_R(c, 11));
  /* c1ff4: csel w10, w12, w11, lt */
  ARC_W_W(c, 10, (ARC_COND(c, 11) ? (ARC_W_R(c, 12)) : ARC_W_R(c, 11)));
  /* c1ff8: csel w12, w12, w11, gt */
  ARC_W_W(c, 12, (ARC_COND(c, 12) ? (ARC_W_R(c, 12)) : ARC_W_R(c, 11)));
  /* c1ffc: cmp w11, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 11), ARC_W_R(c, 8));
  /* c2000: csel w11, w11, w8, lt */
  ARC_W_W(c, 11, (ARC_COND(c, 11) ? (ARC_W_R(c, 11)) : ARC_W_R(c, 8)));
  /* c2004: csel w8, w8, w10, lt */
  ARC_W_W(c, 8, (ARC_COND(c, 11) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 10)));
  /* c2008: strb w12, [x9, #1] */
  arc_st8((ARC_X_R(c, 9) + INT64_C(1)), ARC_W_R(c, 12));
  /* c200c: sturb w11, [x9, #-1] */
  arc_st8((ARC_X_R(c, 9) + INT64_C(-1)), ARC_W_R(c, 11));
  /* c2010: strb w8, [x9] */
  arc_st8(ARC_X_R(c, 9), ARC_W_R(c, 8));
  /* c2014: ldrb w10, [x19] */
  ARC_W_W(c, 10, arc_ld8(ARC_X_R(c, 19)));
  /* c2018: strb w8, [x19] */
  arc_st8(ARC_X_R(c, 19), ARC_W_R(c, 8));
  /* c201c: strb w10, [x9] */
  arc_st8(ARC_X_R(c, 9), ARC_W_R(c, 10));
  /* c2020: ldrb w8, [x19] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 19)));
  /* c2024: b #0xc2078 */
  goto L_c2078;
L_c2028:;
  /* c2028: ldrsb w10, [x19] */
  ARC_W_W(c, 10, ((int32_t)(int8_t)arc_ld8(ARC_X_R(c, 19))));
  /* c202c: cmp w10, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 10), ARC_W_R(c, 8));
  /* c2030: csel w11, w10, w8, gt */
  ARC_W_W(c, 11, (ARC_COND(c, 12) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 8)));
  /* c2034: csel w8, w10, w8, lt */
  ARC_W_W(c, 8, (ARC_COND(c, 11) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 8)));
  /* c2038: sturb w11, [x20, #-1] */
  arc_st8((ARC_X_R(c, 20) + INT64_C(-1)), ARC_W_R(c, 11));
  /* c203c: strb w8, [x19] */
  arc_st8(ARC_X_R(c, 19), ARC_W_R(c, 8));
  /* c2040: ldursb w8, [x20, #-1] */
  ARC_W_W(c, 8, ((int32_t)(int8_t)arc_ld8((ARC_X_R(c, 20) + INT64_C(-1)))));
  /* c2044: ldrsb w10, [x9] */
  ARC_W_W(c, 10, ((int32_t)(int8_t)arc_ld8(ARC_X_R(c, 9))));
  /* c2048: cmp w8, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 10));
  /* c204c: csel w11, w8, w10, gt */
  ARC_W_W(c, 11, (ARC_COND(c, 12) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 10)));
  /* c2050: csel w8, w8, w10, lt */
  ARC_W_W(c, 8, (ARC_COND(c, 11) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 10)));
  /* c2054: sturb w11, [x20, #-1] */
  arc_st8((ARC_X_R(c, 20) + INT64_C(-1)), ARC_W_R(c, 11));
  /* c2058: ldrsb w11, [x19] */
  ARC_W_W(c, 11, ((int32_t)(int8_t)arc_ld8(ARC_X_R(c, 19))));
  /* c205c: ldrb w10, [x9] */
  ARC_W_W(c, 10, arc_ld8(ARC_X_R(c, 9)));
  /* c2060: cmp w8, w11 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 11));
  /* c2064: csel w10, w10, w11, lt */
  ARC_W_W(c, 10, (ARC_COND(c, 11) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 11)));
  /* c2068: strb w10, [x9] */
  arc_st8(ARC_X_R(c, 9), ARC_W_R(c, 10));
  /* c206c: ldrb w9, [x19] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 19)));
  /* c2070: csel w8, w9, w8, lt */
  ARC_W_W(c, 8, (ARC_COND(c, 11) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 8)));
  /* c2074: strb w8, [x19] */
  arc_st8(ARC_X_R(c, 19), ARC_W_R(c, 8));
L_c2078:;
  /* c2078: ldr w9, [sp, #0x5c] */
  ARC_W_W(c, 9, arc_ld32(((c)->sp + INT64_C(92))));
  /* c207c: sub x2, x2, #1 */
  ARC_X_W(c, 2, (ARC_X_R(c, 2) - UINT64_C(1)));
  /* c2080: tbnz w9, #0, #0xc2090 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) != 0) goto L_c2090;
  /* c2084: ldursb w9, [x19, #-1] */
  ARC_W_W(c, 9, ((int32_t)(int8_t)arc_ld8((ARC_X_R(c, 19) + INT64_C(-1)))));
  /* c2088: cmp w9, w8, sxtb */
  (void)arc_sub32(c, ARC_W_R(c, 9), ((uint64_t)(int64_t)(int8_t)(ARC_W_R(c, 8))));
  /* c208c: b.ge #0xc2d9c */
  if (ARC_COND(c, 10)) goto L_c2d9c;
L_c2090:;
  /* c2090: ldursb w9, [x20, #-1] */
  ARC_W_W(c, 9, ((int32_t)(int8_t)arc_ld8((ARC_X_R(c, 20) + INT64_C(-1)))));
  /* c2094: cmp w9, w8, sxtb */
  (void)arc_sub32(c, ARC_W_R(c, 9), ((uint64_t)(int64_t)(int8_t)(ARC_W_R(c, 8))));
  /* c2098: b.le #0xc20b0 */
  if (ARC_COND(c, 13)) goto L_c20b0;
  /* c209c: mov x9, x19 */
  ARC_X_W(c, 9, ARC_X_R(c, 19));
L_c20a0:;
  /* c20a0: ldrsb w10, [x9, #1]! */
  { const uint64_t _a = (ARC_X_R(c, 9) + INT64_C(1));
    ARC_X_W(c, 9, ARC_X_R(c, 9) + INT64_C(1));
    ARC_W_W(c, 10, ((int32_t)(int8_t)arc_ld8(_a)));
  }
  /* c20a4: cmp w10, w8, sxtb */
  (void)arc_sub32(c, ARC_W_R(c, 10), ((uint64_t)(int64_t)(int8_t)(ARC_W_R(c, 8))));
  /* c20a8: b.le #0xc20a0 */
  if (ARC_COND(c, 13)) goto L_c20a0;
  /* c20ac: b #0xc20d0 */
  goto L_c20d0;
L_c20b0:;
  /* c20b0: add x10, x19, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 19) + UINT64_C(1)));
L_c20b4:;
  /* c20b4: mov x9, x10 */
  ARC_X_W(c, 9, ARC_X_R(c, 10));
  /* c20b8: cmp x10, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 20));
  /* c20bc: b.hs #0xc20d0 */
  if (ARC_COND(c, 2)) goto L_c20d0;
  /* c20c0: mov x10, x9 */
  ARC_X_W(c, 10, ARC_X_R(c, 9));
  /* c20c4: ldrsb w11, [x10], #1 */
  { const uint64_t _a = ARC_X_R(c, 10);
    ARC_X_W(c, 10, ARC_X_R(c, 10) + INT64_C(1));
    ARC_W_W(c, 11, ((int32_t)(int8_t)arc_ld8(_a)));
  }
  /* c20c8: cmp w11, w8, sxtb */
  (void)arc_sub32(c, ARC_W_R(c, 11), ((uint64_t)(int64_t)(int8_t)(ARC_W_R(c, 8))));
  /* c20cc: b.le #0xc20b4 */
  if (ARC_COND(c, 13)) goto L_c20b4;
L_c20d0:;
  /* c20d0: cmp x9, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 20));
  /* c20d4: mov x10, x20 */
  ARC_X_W(c, 10, ARC_X_R(c, 20));
  /* c20d8: b.hs #0xc20ec */
  if (ARC_COND(c, 2)) goto L_c20ec;
  /* c20dc: mov x10, x20 */
  ARC_X_W(c, 10, ARC_X_R(c, 20));
L_c20e0:;
  /* c20e0: ldrsb w11, [x10, #-1]! */
  { const uint64_t _a = (ARC_X_R(c, 10) + INT64_C(-1));
    ARC_X_W(c, 10, ARC_X_R(c, 10) + INT64_C(-1));
    ARC_W_W(c, 11, ((int32_t)(int8_t)arc_ld8(_a)));
  }
  /* c20e4: cmp w11, w8, sxtb */
  (void)arc_sub32(c, ARC_W_R(c, 11), ((uint64_t)(int64_t)(int8_t)(ARC_W_R(c, 8))));
  /* c20e8: b.gt #0xc20e0 */
  if (ARC_COND(c, 12)) goto L_c20e0;
L_c20ec:;
  /* c20ec: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* c20f0: mov x11, x9 */
  ARC_X_W(c, 11, ARC_X_R(c, 9));
  /* c20f4: b.hs #0xc210c */
  if (ARC_COND(c, 2)) goto L_c210c;
  /* c20f8: ldrb w12, [x10] */
  ARC_W_W(c, 12, arc_ld8(ARC_X_R(c, 10)));
  /* c20fc: ldrb w13, [x9] */
  ARC_W_W(c, 13, arc_ld8(ARC_X_R(c, 9)));
  /* c2100: mov x11, x9 */
  ARC_X_W(c, 11, ARC_X_R(c, 9));
  /* c2104: strb w12, [x11], #1 */
  { const uint64_t _a = ARC_X_R(c, 11);
    ARC_X_W(c, 11, ARC_X_R(c, 11) + INT64_C(1));
    arc_st8(_a, ARC_W_R(c, 12));
  }
  /* c2108: strb w13, [x10] */
  arc_st8(ARC_X_R(c, 10), ARC_W_R(c, 13));
L_c210c:;
  /* c210c: sub x12, x10, #1 */
  ARC_X_W(c, 12, (ARC_X_R(c, 10) - UINT64_C(1)));
  /* c2110: sub x15, x12, x11 */
  ARC_X_W(c, 15, (ARC_X_R(c, 12) - ARC_X_R(c, 11)));
  /* c2114: cmp x15, #0x7f */
  (void)arc_sub64(c, ARC_X_R(c, 15), UINT64_C(127));
  /* c2118: b.lt #0xc26a4 */
  if (ARC_COND(c, 11)) goto L_c26a4;
  /* c211c: dup v0.16b, w8 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (ARC_W_R(c, 8));
    _t.u8[1] = (ARC_W_R(c, 8));
    _t.u8[2] = (ARC_W_R(c, 8));
    _t.u8[3] = (ARC_W_R(c, 8));
    _t.u8[4] = (ARC_W_R(c, 8));
    _t.u8[5] = (ARC_W_R(c, 8));
    _t.u8[6] = (ARC_W_R(c, 8));
    _t.u8[7] = (ARC_W_R(c, 8));
    _t.u8[8] = (ARC_W_R(c, 8));
    _t.u8[9] = (ARC_W_R(c, 8));
    _t.u8[10] = (ARC_W_R(c, 8));
    _t.u8[11] = (ARC_W_R(c, 8));
    _t.u8[12] = (ARC_W_R(c, 8));
    _t.u8[13] = (ARC_W_R(c, 8));
    _t.u8[14] = (ARC_W_R(c, 8));
    _t.u8[15] = (ARC_W_R(c, 8));
    (c)->q[0] = _t; }
  /* c2120: mov x13, xzr */
  ARC_X_W(c, 13, ARC_X_R(c, 31));
  /* c2124: mov x14, xzr */
  ARC_X_W(c, 14, ARC_X_R(c, 31));
  /* c2128: b #0xc2154 */
  goto L_c2154;
L_c212c:;
  /* c212c: cmp x14, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 14), UINT64_C(0));
  /* c2130: cset w15, eq */
  ARC_W_W(c, 15, (ARC_COND(c, 0) ? 1 : 0));
  /* c2134: cmp x13, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 13), UINT64_C(0));
  /* c2138: add x11, x11, x15, lsl #6 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) + ((uint64_t)(ARC_X_R(c, 15)) << 6)));
  /* c213c: csel x15, x4, xzr, eq */
  ARC_X_W(c, 15, (ARC_COND(c, 0) ? (ARC_X_R(c, 4)) : ARC_X_R(c, 31)));
  /* c2140: cset w16, eq */
  ARC_W_W(c, 16, (ARC_COND(c, 0) ? 1 : 0));
  /* c2144: add x12, x12, x15 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) + ARC_X_R(c, 15)));
  /* c2148: sub x15, x12, x11 */
  ARC_X_W(c, 15, (ARC_X_R(c, 12) - ARC_X_R(c, 11)));
  /* c214c: cmp x15, #0x7e */
  (void)arc_sub64(c, ARC_X_R(c, 15), UINT64_C(126));
  /* c2150: b.le #0xc26b0 */
  if (ARC_COND(c, 13)) goto L_c26b0;
L_c2154:;
  /* c2154: cbz x14, #0xc2164 */
  if ((ARC_X_R(c, 14)) == 0) goto L_c2164;
  /* c2158: cbz x13, #0xc23c8 */
  if ((ARC_X_R(c, 13)) == 0) goto L_c23c8;
L_c215c:;
  /* c215c: cbnz x14, #0xc2660 */
  if ((ARC_X_R(c, 14)) != 0) goto L_c2660;
  /* c2160: b #0xc212c */
  goto L_c212c;
L_c2164:;
  /* c2164: ldp q1, q2, [x11] */
  { const uint64_t _pa = ARC_X_R(c, 11);
    arc_q_w(c, 1, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 2, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c2168: ldr q10, [sp, #0x120] */
  arc_q_w(c, 10, arc_ld64(((c)->sp + INT64_C(288))), arc_ld64(((c)->sp + INT64_C(288)) + 8));
  /* c216c: ldp q25, q27, [x11, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 11) + INT64_C(32));
    arc_q_w(c, 25, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 27, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c2170: ldr q8, [x6, #0xc40] */
  arc_q_w(c, 8, arc_ld64((ARC_X_R(c, 6) + INT64_C(3136))), arc_ld64((ARC_X_R(c, 6) + INT64_C(3136)) + 8));
  /* c2174: ldr q9, [x27, #0xbb0] */
  arc_q_w(c, 9, arc_ld64((ARC_X_R(c, 27) + INT64_C(2992))), arc_ld64((ARC_X_R(c, 27) + INT64_C(2992)) + 8));
  /* c2178: cmgt v1.16b, v0.16b, v1.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = ((c)->q[0].i8[0] > (c)->q[1].i8[0]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[1] = ((c)->q[0].i8[1] > (c)->q[1].i8[1]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[2] = ((c)->q[0].i8[2] > (c)->q[1].i8[2]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[3] = ((c)->q[0].i8[3] > (c)->q[1].i8[3]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[4] = ((c)->q[0].i8[4] > (c)->q[1].i8[4]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[5] = ((c)->q[0].i8[5] > (c)->q[1].i8[5]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[6] = ((c)->q[0].i8[6] > (c)->q[1].i8[6]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[7] = ((c)->q[0].i8[7] > (c)->q[1].i8[7]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[8] = ((c)->q[0].i8[8] > (c)->q[1].i8[8]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[9] = ((c)->q[0].i8[9] > (c)->q[1].i8[9]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[10] = ((c)->q[0].i8[10] > (c)->q[1].i8[10]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[11] = ((c)->q[0].i8[11] > (c)->q[1].i8[11]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[12] = ((c)->q[0].i8[12] > (c)->q[1].i8[12]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[13] = ((c)->q[0].i8[13] > (c)->q[1].i8[13]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[14] = ((c)->q[0].i8[14] > (c)->q[1].i8[14]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[15] = ((c)->q[0].i8[15] > (c)->q[1].i8[15]) ? (uint8_t)~(uint8_t)0 : 0;
    (c)->q[1] = _t; }
  /* c217c: cmgt v2.16b, v0.16b, v2.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = ((c)->q[0].i8[0] > (c)->q[2].i8[0]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[1] = ((c)->q[0].i8[1] > (c)->q[2].i8[1]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[2] = ((c)->q[0].i8[2] > (c)->q[2].i8[2]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[3] = ((c)->q[0].i8[3] > (c)->q[2].i8[3]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[4] = ((c)->q[0].i8[4] > (c)->q[2].i8[4]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[5] = ((c)->q[0].i8[5] > (c)->q[2].i8[5]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[6] = ((c)->q[0].i8[6] > (c)->q[2].i8[6]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[7] = ((c)->q[0].i8[7] > (c)->q[2].i8[7]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[8] = ((c)->q[0].i8[8] > (c)->q[2].i8[8]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[9] = ((c)->q[0].i8[9] > (c)->q[2].i8[9]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[10] = ((c)->q[0].i8[10] > (c)->q[2].i8[10]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[11] = ((c)->q[0].i8[11] > (c)->q[2].i8[11]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[12] = ((c)->q[0].i8[12] > (c)->q[2].i8[12]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[13] = ((c)->q[0].i8[13] > (c)->q[2].i8[13]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[14] = ((c)->q[0].i8[14] > (c)->q[2].i8[14]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[15] = ((c)->q[0].i8[15] > (c)->q[2].i8[15]) ? (uint8_t)~(uint8_t)0 : 0;
    (c)->q[2] = _t; }
  /* c2180: cmgt v25.16b, v0.16b, v25.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = ((c)->q[0].i8[0] > (c)->q[25].i8[0]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[1] = ((c)->q[0].i8[1] > (c)->q[25].i8[1]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[2] = ((c)->q[0].i8[2] > (c)->q[25].i8[2]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[3] = ((c)->q[0].i8[3] > (c)->q[25].i8[3]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[4] = ((c)->q[0].i8[4] > (c)->q[25].i8[4]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[5] = ((c)->q[0].i8[5] > (c)->q[25].i8[5]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[6] = ((c)->q[0].i8[6] > (c)->q[25].i8[6]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[7] = ((c)->q[0].i8[7] > (c)->q[25].i8[7]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[8] = ((c)->q[0].i8[8] > (c)->q[25].i8[8]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[9] = ((c)->q[0].i8[9] > (c)->q[25].i8[9]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[10] = ((c)->q[0].i8[10] > (c)->q[25].i8[10]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[11] = ((c)->q[0].i8[11] > (c)->q[25].i8[11]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[12] = ((c)->q[0].i8[12] > (c)->q[25].i8[12]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[13] = ((c)->q[0].i8[13] > (c)->q[25].i8[13]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[14] = ((c)->q[0].i8[14] > (c)->q[25].i8[14]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[15] = ((c)->q[0].i8[15] > (c)->q[25].i8[15]) ? (uint8_t)~(uint8_t)0 : 0;
    (c)->q[25] = _t; }
  /* c2184: sshll v3.8h, v1.8b, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = (uint16_t)((int16_t)((c)->q[1].i8[0]) << 0);
    _t.u16[1] = (uint16_t)((int16_t)((c)->q[1].i8[1]) << 0);
    _t.u16[2] = (uint16_t)((int16_t)((c)->q[1].i8[2]) << 0);
    _t.u16[3] = (uint16_t)((int16_t)((c)->q[1].i8[3]) << 0);
    _t.u16[4] = (uint16_t)((int16_t)((c)->q[1].i8[4]) << 0);
    _t.u16[5] = (uint16_t)((int16_t)((c)->q[1].i8[5]) << 0);
    _t.u16[6] = (uint16_t)((int16_t)((c)->q[1].i8[6]) << 0);
    _t.u16[7] = (uint16_t)((int16_t)((c)->q[1].i8[7]) << 0);
    (c)->q[3] = _t; }
  /* c2188: sshll2 v1.8h, v1.16b, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = (uint16_t)((int16_t)((c)->q[1].i8[8]) << 0);
    _t.u16[1] = (uint16_t)((int16_t)((c)->q[1].i8[9]) << 0);
    _t.u16[2] = (uint16_t)((int16_t)((c)->q[1].i8[10]) << 0);
    _t.u16[3] = (uint16_t)((int16_t)((c)->q[1].i8[11]) << 0);
    _t.u16[4] = (uint16_t)((int16_t)((c)->q[1].i8[12]) << 0);
    _t.u16[5] = (uint16_t)((int16_t)((c)->q[1].i8[13]) << 0);
    _t.u16[6] = (uint16_t)((int16_t)((c)->q[1].i8[14]) << 0);
    _t.u16[7] = (uint16_t)((int16_t)((c)->q[1].i8[15]) << 0);
    (c)->q[1] = _t; }
  /* c218c: sshll2 v4.8h, v2.16b, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = (uint16_t)((int16_t)((c)->q[2].i8[8]) << 0);
    _t.u16[1] = (uint16_t)((int16_t)((c)->q[2].i8[9]) << 0);
    _t.u16[2] = (uint16_t)((int16_t)((c)->q[2].i8[10]) << 0);
    _t.u16[3] = (uint16_t)((int16_t)((c)->q[2].i8[11]) << 0);
    _t.u16[4] = (uint16_t)((int16_t)((c)->q[2].i8[12]) << 0);
    _t.u16[5] = (uint16_t)((int16_t)((c)->q[2].i8[13]) << 0);
    _t.u16[6] = (uint16_t)((int16_t)((c)->q[2].i8[14]) << 0);
    _t.u16[7] = (uint16_t)((int16_t)((c)->q[2].i8[15]) << 0);
    (c)->q[4] = _t; }
  /* c2190: sshll v2.8h, v2.8b, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = (uint16_t)((int16_t)((c)->q[2].i8[0]) << 0);
    _t.u16[1] = (uint16_t)((int16_t)((c)->q[2].i8[1]) << 0);
    _t.u16[2] = (uint16_t)((int16_t)((c)->q[2].i8[2]) << 0);
    _t.u16[3] = (uint16_t)((int16_t)((c)->q[2].i8[3]) << 0);
    _t.u16[4] = (uint16_t)((int16_t)((c)->q[2].i8[4]) << 0);
    _t.u16[5] = (uint16_t)((int16_t)((c)->q[2].i8[5]) << 0);
    _t.u16[6] = (uint16_t)((int16_t)((c)->q[2].i8[6]) << 0);
    _t.u16[7] = (uint16_t)((int16_t)((c)->q[2].i8[7]) << 0);
    (c)->q[2] = _t; }
  /* c2194: sshll2 v5.4s, v3.8h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[3].i16[4]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[3].i16[5]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[3].i16[6]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[3].i16[7]) << 0);
    (c)->q[5] = _t; }
  /* c2198: sshll v6.4s, v1.4h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[1].i16[0]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[1].i16[1]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[1].i16[2]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[1].i16[3]) << 0);
    (c)->q[6] = _t; }
  /* c219c: sshll v3.4s, v3.4h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[3].i16[0]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[3].i16[1]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[3].i16[2]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[3].i16[3]) << 0);
    (c)->q[3] = _t; }
  /* c21a0: sshll2 v1.4s, v1.8h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[1].i16[4]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[1].i16[5]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[1].i16[6]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[1].i16[7]) << 0);
    (c)->q[1] = _t; }
  /* c21a4: sshll2 v23.4s, v2.8h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[2].i16[4]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[2].i16[5]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[2].i16[6]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[2].i16[7]) << 0);
    (c)->q[23] = _t; }
  /* c21a8: sshll v17.4s, v4.4h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[4].i16[0]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[4].i16[1]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[4].i16[2]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[4].i16[3]) << 0);
    (c)->q[17] = _t; }
  /* c21ac: sshll2 v19.4s, v4.8h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[4].i16[4]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[4].i16[5]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[4].i16[6]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[4].i16[7]) << 0);
    (c)->q[19] = _t; }
  /* c21b0: sshll v18.4s, v2.4h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[2].i16[0]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[2].i16[1]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[2].i16[2]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[2].i16[3]) << 0);
    (c)->q[18] = _t; }
  /* c21b4: ushll2 v7.2d, v6.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[6].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[6].u32[3]) << 0);
    (c)->q[7] = _t; }
  /* c21b8: ushll2 v16.2d, v3.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[3].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[3].u32[3]) << 0);
    (c)->q[16] = _t; }
  /* c21bc: ushll v3.2d, v3.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[3].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[3].u32[1]) << 0);
    (c)->q[3] = _t; }
  /* c21c0: ushll2 v20.2d, v1.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[1].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[1].u32[3]) << 0);
    (c)->q[20] = _t; }
  /* c21c4: ushll v21.2d, v1.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[1].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[1].u32[1]) << 0);
    (c)->q[21] = _t; }
  /* c21c8: ushll v24.2d, v6.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[6].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[6].u32[1]) << 0);
    (c)->q[24] = _t; }
  /* c21cc: ldp q6, q1, [x29, #-0x70] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-112));
    arc_q_w(c, 6, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 1, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c21d0: ushll2 v4.2d, v5.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[5].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[5].u32[3]) << 0);
    (c)->q[4] = _t; }
  /* c21d4: ushll v22.2d, v5.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[5].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[5].u32[1]) << 0);
    (c)->q[22] = _t; }
  /* c21d8: ushll2 v26.2d, v17.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[17].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[17].u32[3]) << 0);
    (c)->q[26] = _t; }
  /* c21dc: bic v5.16b, v12.16b, v16.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[12].u8[0] & (~(c)->q[16].u8[0]);
    _t.u8[1] = (c)->q[12].u8[1] & (~(c)->q[16].u8[1]);
    _t.u8[2] = (c)->q[12].u8[2] & (~(c)->q[16].u8[2]);
    _t.u8[3] = (c)->q[12].u8[3] & (~(c)->q[16].u8[3]);
    _t.u8[4] = (c)->q[12].u8[4] & (~(c)->q[16].u8[4]);
    _t.u8[5] = (c)->q[12].u8[5] & (~(c)->q[16].u8[5]);
    _t.u8[6] = (c)->q[12].u8[6] & (~(c)->q[16].u8[6]);
    _t.u8[7] = (c)->q[12].u8[7] & (~(c)->q[16].u8[7]);
    _t.u8[8] = (c)->q[12].u8[8] & (~(c)->q[16].u8[8]);
    _t.u8[9] = (c)->q[12].u8[9] & (~(c)->q[16].u8[9]);
    _t.u8[10] = (c)->q[12].u8[10] & (~(c)->q[16].u8[10]);
    _t.u8[11] = (c)->q[12].u8[11] & (~(c)->q[16].u8[11]);
    _t.u8[12] = (c)->q[12].u8[12] & (~(c)->q[16].u8[12]);
    _t.u8[13] = (c)->q[12].u8[13] & (~(c)->q[16].u8[13]);
    _t.u8[14] = (c)->q[12].u8[14] & (~(c)->q[16].u8[14]);
    _t.u8[15] = (c)->q[12].u8[15] & (~(c)->q[16].u8[15]);
    (c)->q[5] = _t; }
  /* c21e0: bic v2.16b, v11.16b, v20.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[11].u8[0] & (~(c)->q[20].u8[0]);
    _t.u8[1] = (c)->q[11].u8[1] & (~(c)->q[20].u8[1]);
    _t.u8[2] = (c)->q[11].u8[2] & (~(c)->q[20].u8[2]);
    _t.u8[3] = (c)->q[11].u8[3] & (~(c)->q[20].u8[3]);
    _t.u8[4] = (c)->q[11].u8[4] & (~(c)->q[20].u8[4]);
    _t.u8[5] = (c)->q[11].u8[5] & (~(c)->q[20].u8[5]);
    _t.u8[6] = (c)->q[11].u8[6] & (~(c)->q[20].u8[6]);
    _t.u8[7] = (c)->q[11].u8[7] & (~(c)->q[20].u8[7]);
    _t.u8[8] = (c)->q[11].u8[8] & (~(c)->q[20].u8[8]);
    _t.u8[9] = (c)->q[11].u8[9] & (~(c)->q[20].u8[9]);
    _t.u8[10] = (c)->q[11].u8[10] & (~(c)->q[20].u8[10]);
    _t.u8[11] = (c)->q[11].u8[11] & (~(c)->q[20].u8[11]);
    _t.u8[12] = (c)->q[11].u8[12] & (~(c)->q[20].u8[12]);
    _t.u8[13] = (c)->q[11].u8[13] & (~(c)->q[20].u8[13]);
    _t.u8[14] = (c)->q[11].u8[14] & (~(c)->q[20].u8[14]);
    _t.u8[15] = (c)->q[11].u8[15] & (~(c)->q[20].u8[15]);
    (c)->q[2] = _t; }
  /* c21e4: ushll v20.2d, v17.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[17].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[17].u32[1]) << 0);
    (c)->q[20] = _t; }
  /* c21e8: ldur q17, [x29, #-0x90] */
  arc_q_w(c, 17, arc_ld64((ARC_X_R(c, 29) + INT64_C(-144))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-144)) + 8));
  /* c21ec: bic v6.16b, v6.16b, v3.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[6].u8[0] & (~(c)->q[3].u8[0]);
    _t.u8[1] = (c)->q[6].u8[1] & (~(c)->q[3].u8[1]);
    _t.u8[2] = (c)->q[6].u8[2] & (~(c)->q[3].u8[2]);
    _t.u8[3] = (c)->q[6].u8[3] & (~(c)->q[3].u8[3]);
    _t.u8[4] = (c)->q[6].u8[4] & (~(c)->q[3].u8[4]);
    _t.u8[5] = (c)->q[6].u8[5] & (~(c)->q[3].u8[5]);
    _t.u8[6] = (c)->q[6].u8[6] & (~(c)->q[3].u8[6]);
    _t.u8[7] = (c)->q[6].u8[7] & (~(c)->q[3].u8[7]);
    _t.u8[8] = (c)->q[6].u8[8] & (~(c)->q[3].u8[8]);
    _t.u8[9] = (c)->q[6].u8[9] & (~(c)->q[3].u8[9]);
    _t.u8[10] = (c)->q[6].u8[10] & (~(c)->q[3].u8[10]);
    _t.u8[11] = (c)->q[6].u8[11] & (~(c)->q[3].u8[11]);
    _t.u8[12] = (c)->q[6].u8[12] & (~(c)->q[3].u8[12]);
    _t.u8[13] = (c)->q[6].u8[13] & (~(c)->q[3].u8[13]);
    _t.u8[14] = (c)->q[6].u8[14] & (~(c)->q[3].u8[14]);
    _t.u8[15] = (c)->q[6].u8[15] & (~(c)->q[3].u8[15]);
    (c)->q[6] = _t; }
  /* c21f0: ldur q3, [x29, #-0x80] */
  arc_q_w(c, 3, arc_ld64((ARC_X_R(c, 29) + INT64_C(-128))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-128)) + 8));
  /* c21f4: bic v1.16b, v1.16b, v4.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[1].u8[0] & (~(c)->q[4].u8[0]);
    _t.u8[1] = (c)->q[1].u8[1] & (~(c)->q[4].u8[1]);
    _t.u8[2] = (c)->q[1].u8[2] & (~(c)->q[4].u8[2]);
    _t.u8[3] = (c)->q[1].u8[3] & (~(c)->q[4].u8[3]);
    _t.u8[4] = (c)->q[1].u8[4] & (~(c)->q[4].u8[4]);
    _t.u8[5] = (c)->q[1].u8[5] & (~(c)->q[4].u8[5]);
    _t.u8[6] = (c)->q[1].u8[6] & (~(c)->q[4].u8[6]);
    _t.u8[7] = (c)->q[1].u8[7] & (~(c)->q[4].u8[7]);
    _t.u8[8] = (c)->q[1].u8[8] & (~(c)->q[4].u8[8]);
    _t.u8[9] = (c)->q[1].u8[9] & (~(c)->q[4].u8[9]);
    _t.u8[10] = (c)->q[1].u8[10] & (~(c)->q[4].u8[10]);
    _t.u8[11] = (c)->q[1].u8[11] & (~(c)->q[4].u8[11]);
    _t.u8[12] = (c)->q[1].u8[12] & (~(c)->q[4].u8[12]);
    _t.u8[13] = (c)->q[1].u8[13] & (~(c)->q[4].u8[13]);
    _t.u8[14] = (c)->q[1].u8[14] & (~(c)->q[4].u8[14]);
    _t.u8[15] = (c)->q[1].u8[15] & (~(c)->q[4].u8[15]);
    (c)->q[1] = _t; }
  /* c21f8: bic v4.16b, v14.16b, v22.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[14].u8[0] & (~(c)->q[22].u8[0]);
    _t.u8[1] = (c)->q[14].u8[1] & (~(c)->q[22].u8[1]);
    _t.u8[2] = (c)->q[14].u8[2] & (~(c)->q[22].u8[2]);
    _t.u8[3] = (c)->q[14].u8[3] & (~(c)->q[22].u8[3]);
    _t.u8[4] = (c)->q[14].u8[4] & (~(c)->q[22].u8[4]);
    _t.u8[5] = (c)->q[14].u8[5] & (~(c)->q[22].u8[5]);
    _t.u8[6] = (c)->q[14].u8[6] & (~(c)->q[22].u8[6]);
    _t.u8[7] = (c)->q[14].u8[7] & (~(c)->q[22].u8[7]);
    _t.u8[8] = (c)->q[14].u8[8] & (~(c)->q[22].u8[8]);
    _t.u8[9] = (c)->q[14].u8[9] & (~(c)->q[22].u8[9]);
    _t.u8[10] = (c)->q[14].u8[10] & (~(c)->q[22].u8[10]);
    _t.u8[11] = (c)->q[14].u8[11] & (~(c)->q[22].u8[11]);
    _t.u8[12] = (c)->q[14].u8[12] & (~(c)->q[22].u8[12]);
    _t.u8[13] = (c)->q[14].u8[13] & (~(c)->q[22].u8[13]);
    _t.u8[14] = (c)->q[14].u8[14] & (~(c)->q[22].u8[14]);
    _t.u8[15] = (c)->q[14].u8[15] & (~(c)->q[22].u8[15]);
    (c)->q[4] = _t; }
  /* c21fc: ushll2 v22.2d, v19.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[19].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[19].u32[3]) << 0);
    (c)->q[22] = _t; }
  /* c2200: bic v16.16b, v13.16b, v7.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[13].u8[0] & (~(c)->q[7].u8[0]);
    _t.u8[1] = (c)->q[13].u8[1] & (~(c)->q[7].u8[1]);
    _t.u8[2] = (c)->q[13].u8[2] & (~(c)->q[7].u8[2]);
    _t.u8[3] = (c)->q[13].u8[3] & (~(c)->q[7].u8[3]);
    _t.u8[4] = (c)->q[13].u8[4] & (~(c)->q[7].u8[4]);
    _t.u8[5] = (c)->q[13].u8[5] & (~(c)->q[7].u8[5]);
    _t.u8[6] = (c)->q[13].u8[6] & (~(c)->q[7].u8[6]);
    _t.u8[7] = (c)->q[13].u8[7] & (~(c)->q[7].u8[7]);
    _t.u8[8] = (c)->q[13].u8[8] & (~(c)->q[7].u8[8]);
    _t.u8[9] = (c)->q[13].u8[9] & (~(c)->q[7].u8[9]);
    _t.u8[10] = (c)->q[13].u8[10] & (~(c)->q[7].u8[10]);
    _t.u8[11] = (c)->q[13].u8[11] & (~(c)->q[7].u8[11]);
    _t.u8[12] = (c)->q[13].u8[12] & (~(c)->q[7].u8[12]);
    _t.u8[13] = (c)->q[13].u8[13] & (~(c)->q[7].u8[13]);
    _t.u8[14] = (c)->q[13].u8[14] & (~(c)->q[7].u8[14]);
    _t.u8[15] = (c)->q[13].u8[15] & (~(c)->q[7].u8[15]);
    (c)->q[16] = _t; }
  /* c2204: bic v3.16b, v3.16b, v24.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[3].u8[0] & (~(c)->q[24].u8[0]);
    _t.u8[1] = (c)->q[3].u8[1] & (~(c)->q[24].u8[1]);
    _t.u8[2] = (c)->q[3].u8[2] & (~(c)->q[24].u8[2]);
    _t.u8[3] = (c)->q[3].u8[3] & (~(c)->q[24].u8[3]);
    _t.u8[4] = (c)->q[3].u8[4] & (~(c)->q[24].u8[4]);
    _t.u8[5] = (c)->q[3].u8[5] & (~(c)->q[24].u8[5]);
    _t.u8[6] = (c)->q[3].u8[6] & (~(c)->q[24].u8[6]);
    _t.u8[7] = (c)->q[3].u8[7] & (~(c)->q[24].u8[7]);
    _t.u8[8] = (c)->q[3].u8[8] & (~(c)->q[24].u8[8]);
    _t.u8[9] = (c)->q[3].u8[9] & (~(c)->q[24].u8[9]);
    _t.u8[10] = (c)->q[3].u8[10] & (~(c)->q[24].u8[10]);
    _t.u8[11] = (c)->q[3].u8[11] & (~(c)->q[24].u8[11]);
    _t.u8[12] = (c)->q[3].u8[12] & (~(c)->q[24].u8[12]);
    _t.u8[13] = (c)->q[3].u8[13] & (~(c)->q[24].u8[13]);
    _t.u8[14] = (c)->q[3].u8[14] & (~(c)->q[24].u8[14]);
    _t.u8[15] = (c)->q[3].u8[15] & (~(c)->q[24].u8[15]);
    (c)->q[3] = _t; }
  /* c2208: ushll2 v24.2d, v23.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[23].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[23].u32[3]) << 0);
    (c)->q[24] = _t; }
  /* c220c: bic v7.16b, v15.16b, v21.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[15].u8[0] & (~(c)->q[21].u8[0]);
    _t.u8[1] = (c)->q[15].u8[1] & (~(c)->q[21].u8[1]);
    _t.u8[2] = (c)->q[15].u8[2] & (~(c)->q[21].u8[2]);
    _t.u8[3] = (c)->q[15].u8[3] & (~(c)->q[21].u8[3]);
    _t.u8[4] = (c)->q[15].u8[4] & (~(c)->q[21].u8[4]);
    _t.u8[5] = (c)->q[15].u8[5] & (~(c)->q[21].u8[5]);
    _t.u8[6] = (c)->q[15].u8[6] & (~(c)->q[21].u8[6]);
    _t.u8[7] = (c)->q[15].u8[7] & (~(c)->q[21].u8[7]);
    _t.u8[8] = (c)->q[15].u8[8] & (~(c)->q[21].u8[8]);
    _t.u8[9] = (c)->q[15].u8[9] & (~(c)->q[21].u8[9]);
    _t.u8[10] = (c)->q[15].u8[10] & (~(c)->q[21].u8[10]);
    _t.u8[11] = (c)->q[15].u8[11] & (~(c)->q[21].u8[11]);
    _t.u8[12] = (c)->q[15].u8[12] & (~(c)->q[21].u8[12]);
    _t.u8[13] = (c)->q[15].u8[13] & (~(c)->q[21].u8[13]);
    _t.u8[14] = (c)->q[15].u8[14] & (~(c)->q[21].u8[14]);
    _t.u8[15] = (c)->q[15].u8[15] & (~(c)->q[21].u8[15]);
    (c)->q[7] = _t; }
  /* c2210: ushll v21.2d, v18.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[18].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[18].u32[1]) << 0);
    (c)->q[21] = _t; }
  /* c2214: ushll v19.2d, v19.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[19].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[19].u32[1]) << 0);
    (c)->q[19] = _t; }
  /* c2218: ushll2 v18.2d, v18.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[18].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[18].u32[3]) << 0);
    (c)->q[18] = _t; }
  /* c221c: ushll v23.2d, v23.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[23].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[23].u32[1]) << 0);
    (c)->q[23] = _t; }
  /* c2220: bic v17.16b, v17.16b, v24.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[17].u8[0] & (~(c)->q[24].u8[0]);
    _t.u8[1] = (c)->q[17].u8[1] & (~(c)->q[24].u8[1]);
    _t.u8[2] = (c)->q[17].u8[2] & (~(c)->q[24].u8[2]);
    _t.u8[3] = (c)->q[17].u8[3] & (~(c)->q[24].u8[3]);
    _t.u8[4] = (c)->q[17].u8[4] & (~(c)->q[24].u8[4]);
    _t.u8[5] = (c)->q[17].u8[5] & (~(c)->q[24].u8[5]);
    _t.u8[6] = (c)->q[17].u8[6] & (~(c)->q[24].u8[6]);
    _t.u8[7] = (c)->q[17].u8[7] & (~(c)->q[24].u8[7]);
    _t.u8[8] = (c)->q[17].u8[8] & (~(c)->q[24].u8[8]);
    _t.u8[9] = (c)->q[17].u8[9] & (~(c)->q[24].u8[9]);
    _t.u8[10] = (c)->q[17].u8[10] & (~(c)->q[24].u8[10]);
    _t.u8[11] = (c)->q[17].u8[11] & (~(c)->q[24].u8[11]);
    _t.u8[12] = (c)->q[17].u8[12] & (~(c)->q[24].u8[12]);
    _t.u8[13] = (c)->q[17].u8[13] & (~(c)->q[24].u8[13]);
    _t.u8[14] = (c)->q[17].u8[14] & (~(c)->q[24].u8[14]);
    _t.u8[15] = (c)->q[17].u8[15] & (~(c)->q[24].u8[15]);
    (c)->q[17] = _t; }
  /* c2224: ldur q24, [x29, #-0xa0] */
  arc_q_w(c, 24, arc_ld64((ARC_X_R(c, 29) + INT64_C(-160))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-160)) + 8));
  /* c2228: bic v22.16b, v24.16b, v22.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[24].u8[0] & (~(c)->q[22].u8[0]);
    _t.u8[1] = (c)->q[24].u8[1] & (~(c)->q[22].u8[1]);
    _t.u8[2] = (c)->q[24].u8[2] & (~(c)->q[22].u8[2]);
    _t.u8[3] = (c)->q[24].u8[3] & (~(c)->q[22].u8[3]);
    _t.u8[4] = (c)->q[24].u8[4] & (~(c)->q[22].u8[4]);
    _t.u8[5] = (c)->q[24].u8[5] & (~(c)->q[22].u8[5]);
    _t.u8[6] = (c)->q[24].u8[6] & (~(c)->q[22].u8[6]);
    _t.u8[7] = (c)->q[24].u8[7] & (~(c)->q[22].u8[7]);
    _t.u8[8] = (c)->q[24].u8[8] & (~(c)->q[22].u8[8]);
    _t.u8[9] = (c)->q[24].u8[9] & (~(c)->q[22].u8[9]);
    _t.u8[10] = (c)->q[24].u8[10] & (~(c)->q[22].u8[10]);
    _t.u8[11] = (c)->q[24].u8[11] & (~(c)->q[22].u8[11]);
    _t.u8[12] = (c)->q[24].u8[12] & (~(c)->q[22].u8[12]);
    _t.u8[13] = (c)->q[24].u8[13] & (~(c)->q[22].u8[13]);
    _t.u8[14] = (c)->q[24].u8[14] & (~(c)->q[22].u8[14]);
    _t.u8[15] = (c)->q[24].u8[15] & (~(c)->q[22].u8[15]);
    (c)->q[22] = _t; }
  /* c222c: ldur q24, [x29, #-0x100] */
  arc_q_w(c, 24, arc_ld64((ARC_X_R(c, 29) + INT64_C(-256))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-256)) + 8));
  /* c2230: orr v1.16b, v17.16b, v1.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[17].u8[0] | (c)->q[1].u8[0];
    _t.u8[1] = (c)->q[17].u8[1] | (c)->q[1].u8[1];
    _t.u8[2] = (c)->q[17].u8[2] | (c)->q[1].u8[2];
    _t.u8[3] = (c)->q[17].u8[3] | (c)->q[1].u8[3];
    _t.u8[4] = (c)->q[17].u8[4] | (c)->q[1].u8[4];
    _t.u8[5] = (c)->q[17].u8[5] | (c)->q[1].u8[5];
    _t.u8[6] = (c)->q[17].u8[6] | (c)->q[1].u8[6];
    _t.u8[7] = (c)->q[17].u8[7] | (c)->q[1].u8[7];
    _t.u8[8] = (c)->q[17].u8[8] | (c)->q[1].u8[8];
    _t.u8[9] = (c)->q[17].u8[9] | (c)->q[1].u8[9];
    _t.u8[10] = (c)->q[17].u8[10] | (c)->q[1].u8[10];
    _t.u8[11] = (c)->q[17].u8[11] | (c)->q[1].u8[11];
    _t.u8[12] = (c)->q[17].u8[12] | (c)->q[1].u8[12];
    _t.u8[13] = (c)->q[17].u8[13] | (c)->q[1].u8[13];
    _t.u8[14] = (c)->q[17].u8[14] | (c)->q[1].u8[14];
    _t.u8[15] = (c)->q[17].u8[15] | (c)->q[1].u8[15];
    (c)->q[1] = _t; }
  /* c2234: bic v20.16b, v24.16b, v20.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[24].u8[0] & (~(c)->q[20].u8[0]);
    _t.u8[1] = (c)->q[24].u8[1] & (~(c)->q[20].u8[1]);
    _t.u8[2] = (c)->q[24].u8[2] & (~(c)->q[20].u8[2]);
    _t.u8[3] = (c)->q[24].u8[3] & (~(c)->q[20].u8[3]);
    _t.u8[4] = (c)->q[24].u8[4] & (~(c)->q[20].u8[4]);
    _t.u8[5] = (c)->q[24].u8[5] & (~(c)->q[20].u8[5]);
    _t.u8[6] = (c)->q[24].u8[6] & (~(c)->q[20].u8[6]);
    _t.u8[7] = (c)->q[24].u8[7] & (~(c)->q[20].u8[7]);
    _t.u8[8] = (c)->q[24].u8[8] & (~(c)->q[20].u8[8]);
    _t.u8[9] = (c)->q[24].u8[9] & (~(c)->q[20].u8[9]);
    _t.u8[10] = (c)->q[24].u8[10] & (~(c)->q[20].u8[10]);
    _t.u8[11] = (c)->q[24].u8[11] & (~(c)->q[20].u8[11]);
    _t.u8[12] = (c)->q[24].u8[12] & (~(c)->q[20].u8[12]);
    _t.u8[13] = (c)->q[24].u8[13] & (~(c)->q[20].u8[13]);
    _t.u8[14] = (c)->q[24].u8[14] & (~(c)->q[20].u8[14]);
    _t.u8[15] = (c)->q[24].u8[15] & (~(c)->q[20].u8[15]);
    (c)->q[20] = _t; }
  /* c2238: ldp q24, q28, [x29, #-0xf0] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-240));
    arc_q_w(c, 24, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 28, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c223c: orr v2.16b, v22.16b, v2.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[22].u8[0] | (c)->q[2].u8[0];
    _t.u8[1] = (c)->q[22].u8[1] | (c)->q[2].u8[1];
    _t.u8[2] = (c)->q[22].u8[2] | (c)->q[2].u8[2];
    _t.u8[3] = (c)->q[22].u8[3] | (c)->q[2].u8[3];
    _t.u8[4] = (c)->q[22].u8[4] | (c)->q[2].u8[4];
    _t.u8[5] = (c)->q[22].u8[5] | (c)->q[2].u8[5];
    _t.u8[6] = (c)->q[22].u8[6] | (c)->q[2].u8[6];
    _t.u8[7] = (c)->q[22].u8[7] | (c)->q[2].u8[7];
    _t.u8[8] = (c)->q[22].u8[8] | (c)->q[2].u8[8];
    _t.u8[9] = (c)->q[22].u8[9] | (c)->q[2].u8[9];
    _t.u8[10] = (c)->q[22].u8[10] | (c)->q[2].u8[10];
    _t.u8[11] = (c)->q[22].u8[11] | (c)->q[2].u8[11];
    _t.u8[12] = (c)->q[22].u8[12] | (c)->q[2].u8[12];
    _t.u8[13] = (c)->q[22].u8[13] | (c)->q[2].u8[13];
    _t.u8[14] = (c)->q[22].u8[14] | (c)->q[2].u8[14];
    _t.u8[15] = (c)->q[22].u8[15] | (c)->q[2].u8[15];
    (c)->q[2] = _t; }
  /* c2240: bic v19.16b, v28.16b, v19.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[28].u8[0] & (~(c)->q[19].u8[0]);
    _t.u8[1] = (c)->q[28].u8[1] & (~(c)->q[19].u8[1]);
    _t.u8[2] = (c)->q[28].u8[2] & (~(c)->q[19].u8[2]);
    _t.u8[3] = (c)->q[28].u8[3] & (~(c)->q[19].u8[3]);
    _t.u8[4] = (c)->q[28].u8[4] & (~(c)->q[19].u8[4]);
    _t.u8[5] = (c)->q[28].u8[5] & (~(c)->q[19].u8[5]);
    _t.u8[6] = (c)->q[28].u8[6] & (~(c)->q[19].u8[6]);
    _t.u8[7] = (c)->q[28].u8[7] & (~(c)->q[19].u8[7]);
    _t.u8[8] = (c)->q[28].u8[8] & (~(c)->q[19].u8[8]);
    _t.u8[9] = (c)->q[28].u8[9] & (~(c)->q[19].u8[9]);
    _t.u8[10] = (c)->q[28].u8[10] & (~(c)->q[19].u8[10]);
    _t.u8[11] = (c)->q[28].u8[11] & (~(c)->q[19].u8[11]);
    _t.u8[12] = (c)->q[28].u8[12] & (~(c)->q[19].u8[12]);
    _t.u8[13] = (c)->q[28].u8[13] & (~(c)->q[19].u8[13]);
    _t.u8[14] = (c)->q[28].u8[14] & (~(c)->q[19].u8[14]);
    _t.u8[15] = (c)->q[28].u8[15] & (~(c)->q[19].u8[15]);
    (c)->q[19] = _t; }
  /* c2244: bic v21.16b, v24.16b, v21.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[24].u8[0] & (~(c)->q[21].u8[0]);
    _t.u8[1] = (c)->q[24].u8[1] & (~(c)->q[21].u8[1]);
    _t.u8[2] = (c)->q[24].u8[2] & (~(c)->q[21].u8[2]);
    _t.u8[3] = (c)->q[24].u8[3] & (~(c)->q[21].u8[3]);
    _t.u8[4] = (c)->q[24].u8[4] & (~(c)->q[21].u8[4]);
    _t.u8[5] = (c)->q[24].u8[5] & (~(c)->q[21].u8[5]);
    _t.u8[6] = (c)->q[24].u8[6] & (~(c)->q[21].u8[6]);
    _t.u8[7] = (c)->q[24].u8[7] & (~(c)->q[21].u8[7]);
    _t.u8[8] = (c)->q[24].u8[8] & (~(c)->q[21].u8[8]);
    _t.u8[9] = (c)->q[24].u8[9] & (~(c)->q[21].u8[9]);
    _t.u8[10] = (c)->q[24].u8[10] & (~(c)->q[21].u8[10]);
    _t.u8[11] = (c)->q[24].u8[11] & (~(c)->q[21].u8[11]);
    _t.u8[12] = (c)->q[24].u8[12] & (~(c)->q[21].u8[12]);
    _t.u8[13] = (c)->q[24].u8[13] & (~(c)->q[21].u8[13]);
    _t.u8[14] = (c)->q[24].u8[14] & (~(c)->q[21].u8[14]);
    _t.u8[15] = (c)->q[24].u8[15] & (~(c)->q[21].u8[15]);
    (c)->q[21] = _t; }
  /* c2248: cmgt v24.16b, v0.16b, v27.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = ((c)->q[0].i8[0] > (c)->q[27].i8[0]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[1] = ((c)->q[0].i8[1] > (c)->q[27].i8[1]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[2] = ((c)->q[0].i8[2] > (c)->q[27].i8[2]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[3] = ((c)->q[0].i8[3] > (c)->q[27].i8[3]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[4] = ((c)->q[0].i8[4] > (c)->q[27].i8[4]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[5] = ((c)->q[0].i8[5] > (c)->q[27].i8[5]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[6] = ((c)->q[0].i8[6] > (c)->q[27].i8[6]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[7] = ((c)->q[0].i8[7] > (c)->q[27].i8[7]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[8] = ((c)->q[0].i8[8] > (c)->q[27].i8[8]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[9] = ((c)->q[0].i8[9] > (c)->q[27].i8[9]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[10] = ((c)->q[0].i8[10] > (c)->q[27].i8[10]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[11] = ((c)->q[0].i8[11] > (c)->q[27].i8[11]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[12] = ((c)->q[0].i8[12] > (c)->q[27].i8[12]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[13] = ((c)->q[0].i8[13] > (c)->q[27].i8[13]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[14] = ((c)->q[0].i8[14] > (c)->q[27].i8[14]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[15] = ((c)->q[0].i8[15] > (c)->q[27].i8[15]) ? (uint8_t)~(uint8_t)0 : 0;
    (c)->q[24] = _t; }
  /* c224c: ldp q28, q27, [x29, #-0xc0] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-192));
    arc_q_w(c, 28, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 27, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c2250: orr v3.16b, v20.16b, v3.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[20].u8[0] | (c)->q[3].u8[0];
    _t.u8[1] = (c)->q[20].u8[1] | (c)->q[3].u8[1];
    _t.u8[2] = (c)->q[20].u8[2] | (c)->q[3].u8[2];
    _t.u8[3] = (c)->q[20].u8[3] | (c)->q[3].u8[3];
    _t.u8[4] = (c)->q[20].u8[4] | (c)->q[3].u8[4];
    _t.u8[5] = (c)->q[20].u8[5] | (c)->q[3].u8[5];
    _t.u8[6] = (c)->q[20].u8[6] | (c)->q[3].u8[6];
    _t.u8[7] = (c)->q[20].u8[7] | (c)->q[3].u8[7];
    _t.u8[8] = (c)->q[20].u8[8] | (c)->q[3].u8[8];
    _t.u8[9] = (c)->q[20].u8[9] | (c)->q[3].u8[9];
    _t.u8[10] = (c)->q[20].u8[10] | (c)->q[3].u8[10];
    _t.u8[11] = (c)->q[20].u8[11] | (c)->q[3].u8[11];
    _t.u8[12] = (c)->q[20].u8[12] | (c)->q[3].u8[12];
    _t.u8[13] = (c)->q[20].u8[13] | (c)->q[3].u8[13];
    _t.u8[14] = (c)->q[20].u8[14] | (c)->q[3].u8[14];
    _t.u8[15] = (c)->q[20].u8[15] | (c)->q[3].u8[15];
    (c)->q[3] = _t; }
  /* c2254: sshll2 v20.8h, v25.16b, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = (uint16_t)((int16_t)((c)->q[25].i8[8]) << 0);
    _t.u16[1] = (uint16_t)((int16_t)((c)->q[25].i8[9]) << 0);
    _t.u16[2] = (uint16_t)((int16_t)((c)->q[25].i8[10]) << 0);
    _t.u16[3] = (uint16_t)((int16_t)((c)->q[25].i8[11]) << 0);
    _t.u16[4] = (uint16_t)((int16_t)((c)->q[25].i8[12]) << 0);
    _t.u16[5] = (uint16_t)((int16_t)((c)->q[25].i8[13]) << 0);
    _t.u16[6] = (uint16_t)((int16_t)((c)->q[25].i8[14]) << 0);
    _t.u16[7] = (uint16_t)((int16_t)((c)->q[25].i8[15]) << 0);
    (c)->q[20] = _t; }
  /* c2258: orr v7.16b, v19.16b, v7.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[19].u8[0] | (c)->q[7].u8[0];
    _t.u8[1] = (c)->q[19].u8[1] | (c)->q[7].u8[1];
    _t.u8[2] = (c)->q[19].u8[2] | (c)->q[7].u8[2];
    _t.u8[3] = (c)->q[19].u8[3] | (c)->q[7].u8[3];
    _t.u8[4] = (c)->q[19].u8[4] | (c)->q[7].u8[4];
    _t.u8[5] = (c)->q[19].u8[5] | (c)->q[7].u8[5];
    _t.u8[6] = (c)->q[19].u8[6] | (c)->q[7].u8[6];
    _t.u8[7] = (c)->q[19].u8[7] | (c)->q[7].u8[7];
    _t.u8[8] = (c)->q[19].u8[8] | (c)->q[7].u8[8];
    _t.u8[9] = (c)->q[19].u8[9] | (c)->q[7].u8[9];
    _t.u8[10] = (c)->q[19].u8[10] | (c)->q[7].u8[10];
    _t.u8[11] = (c)->q[19].u8[11] | (c)->q[7].u8[11];
    _t.u8[12] = (c)->q[19].u8[12] | (c)->q[7].u8[12];
    _t.u8[13] = (c)->q[19].u8[13] | (c)->q[7].u8[13];
    _t.u8[14] = (c)->q[19].u8[14] | (c)->q[7].u8[14];
    _t.u8[15] = (c)->q[19].u8[15] | (c)->q[7].u8[15];
    (c)->q[7] = _t; }
  /* c225c: sshll2 v19.8h, v24.16b, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = (uint16_t)((int16_t)((c)->q[24].i8[8]) << 0);
    _t.u16[1] = (uint16_t)((int16_t)((c)->q[24].i8[9]) << 0);
    _t.u16[2] = (uint16_t)((int16_t)((c)->q[24].i8[10]) << 0);
    _t.u16[3] = (uint16_t)((int16_t)((c)->q[24].i8[11]) << 0);
    _t.u16[4] = (uint16_t)((int16_t)((c)->q[24].i8[12]) << 0);
    _t.u16[5] = (uint16_t)((int16_t)((c)->q[24].i8[13]) << 0);
    _t.u16[6] = (uint16_t)((int16_t)((c)->q[24].i8[14]) << 0);
    _t.u16[7] = (uint16_t)((int16_t)((c)->q[24].i8[15]) << 0);
    (c)->q[19] = _t; }
  /* c2260: orr v6.16b, v21.16b, v6.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[21].u8[0] | (c)->q[6].u8[0];
    _t.u8[1] = (c)->q[21].u8[1] | (c)->q[6].u8[1];
    _t.u8[2] = (c)->q[21].u8[2] | (c)->q[6].u8[2];
    _t.u8[3] = (c)->q[21].u8[3] | (c)->q[6].u8[3];
    _t.u8[4] = (c)->q[21].u8[4] | (c)->q[6].u8[4];
    _t.u8[5] = (c)->q[21].u8[5] | (c)->q[6].u8[5];
    _t.u8[6] = (c)->q[21].u8[6] | (c)->q[6].u8[6];
    _t.u8[7] = (c)->q[21].u8[7] | (c)->q[6].u8[7];
    _t.u8[8] = (c)->q[21].u8[8] | (c)->q[6].u8[8];
    _t.u8[9] = (c)->q[21].u8[9] | (c)->q[6].u8[9];
    _t.u8[10] = (c)->q[21].u8[10] | (c)->q[6].u8[10];
    _t.u8[11] = (c)->q[21].u8[11] | (c)->q[6].u8[11];
    _t.u8[12] = (c)->q[21].u8[12] | (c)->q[6].u8[12];
    _t.u8[13] = (c)->q[21].u8[13] | (c)->q[6].u8[13];
    _t.u8[14] = (c)->q[21].u8[14] | (c)->q[6].u8[14];
    _t.u8[15] = (c)->q[21].u8[15] | (c)->q[6].u8[15];
    (c)->q[6] = _t; }
  /* c2264: bic v18.16b, v27.16b, v18.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[27].u8[0] & (~(c)->q[18].u8[0]);
    _t.u8[1] = (c)->q[27].u8[1] & (~(c)->q[18].u8[1]);
    _t.u8[2] = (c)->q[27].u8[2] & (~(c)->q[18].u8[2]);
    _t.u8[3] = (c)->q[27].u8[3] & (~(c)->q[18].u8[3]);
    _t.u8[4] = (c)->q[27].u8[4] & (~(c)->q[18].u8[4]);
    _t.u8[5] = (c)->q[27].u8[5] & (~(c)->q[18].u8[5]);
    _t.u8[6] = (c)->q[27].u8[6] & (~(c)->q[18].u8[6]);
    _t.u8[7] = (c)->q[27].u8[7] & (~(c)->q[18].u8[7]);
    _t.u8[8] = (c)->q[27].u8[8] & (~(c)->q[18].u8[8]);
    _t.u8[9] = (c)->q[27].u8[9] & (~(c)->q[18].u8[9]);
    _t.u8[10] = (c)->q[27].u8[10] & (~(c)->q[18].u8[10]);
    _t.u8[11] = (c)->q[27].u8[11] & (~(c)->q[18].u8[11]);
    _t.u8[12] = (c)->q[27].u8[12] & (~(c)->q[18].u8[12]);
    _t.u8[13] = (c)->q[27].u8[13] & (~(c)->q[18].u8[13]);
    _t.u8[14] = (c)->q[27].u8[14] & (~(c)->q[18].u8[14]);
    _t.u8[15] = (c)->q[27].u8[15] & (~(c)->q[18].u8[15]);
    (c)->q[18] = _t; }
  /* c2268: ldur q27, [x29, #-0xd0] */
  arc_q_w(c, 27, arc_ld64((ARC_X_R(c, 29) + INT64_C(-208))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-208)) + 8));
  /* c226c: bic v26.16b, v28.16b, v26.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[28].u8[0] & (~(c)->q[26].u8[0]);
    _t.u8[1] = (c)->q[28].u8[1] & (~(c)->q[26].u8[1]);
    _t.u8[2] = (c)->q[28].u8[2] & (~(c)->q[26].u8[2]);
    _t.u8[3] = (c)->q[28].u8[3] & (~(c)->q[26].u8[3]);
    _t.u8[4] = (c)->q[28].u8[4] & (~(c)->q[26].u8[4]);
    _t.u8[5] = (c)->q[28].u8[5] & (~(c)->q[26].u8[5]);
    _t.u8[6] = (c)->q[28].u8[6] & (~(c)->q[26].u8[6]);
    _t.u8[7] = (c)->q[28].u8[7] & (~(c)->q[26].u8[7]);
    _t.u8[8] = (c)->q[28].u8[8] & (~(c)->q[26].u8[8]);
    _t.u8[9] = (c)->q[28].u8[9] & (~(c)->q[26].u8[9]);
    _t.u8[10] = (c)->q[28].u8[10] & (~(c)->q[26].u8[10]);
    _t.u8[11] = (c)->q[28].u8[11] & (~(c)->q[26].u8[11]);
    _t.u8[12] = (c)->q[28].u8[12] & (~(c)->q[26].u8[12]);
    _t.u8[13] = (c)->q[28].u8[13] & (~(c)->q[26].u8[13]);
    _t.u8[14] = (c)->q[28].u8[14] & (~(c)->q[26].u8[14]);
    _t.u8[15] = (c)->q[28].u8[15] & (~(c)->q[26].u8[15]);
    (c)->q[26] = _t; }
  /* c2270: bic v23.16b, v27.16b, v23.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[27].u8[0] & (~(c)->q[23].u8[0]);
    _t.u8[1] = (c)->q[27].u8[1] & (~(c)->q[23].u8[1]);
    _t.u8[2] = (c)->q[27].u8[2] & (~(c)->q[23].u8[2]);
    _t.u8[3] = (c)->q[27].u8[3] & (~(c)->q[23].u8[3]);
    _t.u8[4] = (c)->q[27].u8[4] & (~(c)->q[23].u8[4]);
    _t.u8[5] = (c)->q[27].u8[5] & (~(c)->q[23].u8[5]);
    _t.u8[6] = (c)->q[27].u8[6] & (~(c)->q[23].u8[6]);
    _t.u8[7] = (c)->q[27].u8[7] & (~(c)->q[23].u8[7]);
    _t.u8[8] = (c)->q[27].u8[8] & (~(c)->q[23].u8[8]);
    _t.u8[9] = (c)->q[27].u8[9] & (~(c)->q[23].u8[9]);
    _t.u8[10] = (c)->q[27].u8[10] & (~(c)->q[23].u8[10]);
    _t.u8[11] = (c)->q[27].u8[11] & (~(c)->q[23].u8[11]);
    _t.u8[12] = (c)->q[27].u8[12] & (~(c)->q[23].u8[12]);
    _t.u8[13] = (c)->q[27].u8[13] & (~(c)->q[23].u8[13]);
    _t.u8[14] = (c)->q[27].u8[14] & (~(c)->q[23].u8[14]);
    _t.u8[15] = (c)->q[27].u8[15] & (~(c)->q[23].u8[15]);
    (c)->q[23] = _t; }
  /* c2274: sshll v27.8h, v25.8b, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = (uint16_t)((int16_t)((c)->q[25].i8[0]) << 0);
    _t.u16[1] = (uint16_t)((int16_t)((c)->q[25].i8[1]) << 0);
    _t.u16[2] = (uint16_t)((int16_t)((c)->q[25].i8[2]) << 0);
    _t.u16[3] = (uint16_t)((int16_t)((c)->q[25].i8[3]) << 0);
    _t.u16[4] = (uint16_t)((int16_t)((c)->q[25].i8[4]) << 0);
    _t.u16[5] = (uint16_t)((int16_t)((c)->q[25].i8[5]) << 0);
    _t.u16[6] = (uint16_t)((int16_t)((c)->q[25].i8[6]) << 0);
    _t.u16[7] = (uint16_t)((int16_t)((c)->q[25].i8[7]) << 0);
    (c)->q[27] = _t; }
  /* c2278: orr v5.16b, v18.16b, v5.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[18].u8[0] | (c)->q[5].u8[0];
    _t.u8[1] = (c)->q[18].u8[1] | (c)->q[5].u8[1];
    _t.u8[2] = (c)->q[18].u8[2] | (c)->q[5].u8[2];
    _t.u8[3] = (c)->q[18].u8[3] | (c)->q[5].u8[3];
    _t.u8[4] = (c)->q[18].u8[4] | (c)->q[5].u8[4];
    _t.u8[5] = (c)->q[18].u8[5] | (c)->q[5].u8[5];
    _t.u8[6] = (c)->q[18].u8[6] | (c)->q[5].u8[6];
    _t.u8[7] = (c)->q[18].u8[7] | (c)->q[5].u8[7];
    _t.u8[8] = (c)->q[18].u8[8] | (c)->q[5].u8[8];
    _t.u8[9] = (c)->q[18].u8[9] | (c)->q[5].u8[9];
    _t.u8[10] = (c)->q[18].u8[10] | (c)->q[5].u8[10];
    _t.u8[11] = (c)->q[18].u8[11] | (c)->q[5].u8[11];
    _t.u8[12] = (c)->q[18].u8[12] | (c)->q[5].u8[12];
    _t.u8[13] = (c)->q[18].u8[13] | (c)->q[5].u8[13];
    _t.u8[14] = (c)->q[18].u8[14] | (c)->q[5].u8[14];
    _t.u8[15] = (c)->q[18].u8[15] | (c)->q[5].u8[15];
    (c)->q[5] = _t; }
  /* c227c: sshll2 v18.4s, v19.8h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[19].i16[4]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[19].i16[5]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[19].i16[6]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[19].i16[7]) << 0);
    (c)->q[18] = _t; }
  /* c2280: orr v16.16b, v26.16b, v16.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[26].u8[0] | (c)->q[16].u8[0];
    _t.u8[1] = (c)->q[26].u8[1] | (c)->q[16].u8[1];
    _t.u8[2] = (c)->q[26].u8[2] | (c)->q[16].u8[2];
    _t.u8[3] = (c)->q[26].u8[3] | (c)->q[16].u8[3];
    _t.u8[4] = (c)->q[26].u8[4] | (c)->q[16].u8[4];
    _t.u8[5] = (c)->q[26].u8[5] | (c)->q[16].u8[5];
    _t.u8[6] = (c)->q[26].u8[6] | (c)->q[16].u8[6];
    _t.u8[7] = (c)->q[26].u8[7] | (c)->q[16].u8[7];
    _t.u8[8] = (c)->q[26].u8[8] | (c)->q[16].u8[8];
    _t.u8[9] = (c)->q[26].u8[9] | (c)->q[16].u8[9];
    _t.u8[10] = (c)->q[26].u8[10] | (c)->q[16].u8[10];
    _t.u8[11] = (c)->q[26].u8[11] | (c)->q[16].u8[11];
    _t.u8[12] = (c)->q[26].u8[12] | (c)->q[16].u8[12];
    _t.u8[13] = (c)->q[26].u8[13] | (c)->q[16].u8[13];
    _t.u8[14] = (c)->q[26].u8[14] | (c)->q[16].u8[14];
    _t.u8[15] = (c)->q[26].u8[15] | (c)->q[16].u8[15];
    (c)->q[16] = _t; }
  /* c2284: sshll v19.4s, v19.4h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[19].i16[0]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[19].i16[1]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[19].i16[2]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[19].i16[3]) << 0);
    (c)->q[19] = _t; }
  /* c2288: orr v4.16b, v23.16b, v4.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[23].u8[0] | (c)->q[4].u8[0];
    _t.u8[1] = (c)->q[23].u8[1] | (c)->q[4].u8[1];
    _t.u8[2] = (c)->q[23].u8[2] | (c)->q[4].u8[2];
    _t.u8[3] = (c)->q[23].u8[3] | (c)->q[4].u8[3];
    _t.u8[4] = (c)->q[23].u8[4] | (c)->q[4].u8[4];
    _t.u8[5] = (c)->q[23].u8[5] | (c)->q[4].u8[5];
    _t.u8[6] = (c)->q[23].u8[6] | (c)->q[4].u8[6];
    _t.u8[7] = (c)->q[23].u8[7] | (c)->q[4].u8[7];
    _t.u8[8] = (c)->q[23].u8[8] | (c)->q[4].u8[8];
    _t.u8[9] = (c)->q[23].u8[9] | (c)->q[4].u8[9];
    _t.u8[10] = (c)->q[23].u8[10] | (c)->q[4].u8[10];
    _t.u8[11] = (c)->q[23].u8[11] | (c)->q[4].u8[11];
    _t.u8[12] = (c)->q[23].u8[12] | (c)->q[4].u8[12];
    _t.u8[13] = (c)->q[23].u8[13] | (c)->q[4].u8[13];
    _t.u8[14] = (c)->q[23].u8[14] | (c)->q[4].u8[14];
    _t.u8[15] = (c)->q[23].u8[15] | (c)->q[4].u8[15];
    (c)->q[4] = _t; }
  /* c228c: sshll v23.8h, v24.8b, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = (uint16_t)((int16_t)((c)->q[24].i8[0]) << 0);
    _t.u16[1] = (uint16_t)((int16_t)((c)->q[24].i8[1]) << 0);
    _t.u16[2] = (uint16_t)((int16_t)((c)->q[24].i8[2]) << 0);
    _t.u16[3] = (uint16_t)((int16_t)((c)->q[24].i8[3]) << 0);
    _t.u16[4] = (uint16_t)((int16_t)((c)->q[24].i8[4]) << 0);
    _t.u16[5] = (uint16_t)((int16_t)((c)->q[24].i8[5]) << 0);
    _t.u16[6] = (uint16_t)((int16_t)((c)->q[24].i8[6]) << 0);
    _t.u16[7] = (uint16_t)((int16_t)((c)->q[24].i8[7]) << 0);
    (c)->q[23] = _t; }
  /* c2290: sshll2 v24.4s, v20.8h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[20].i16[4]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[20].i16[5]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[20].i16[6]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[20].i16[7]) << 0);
    (c)->q[24] = _t; }
  /* c2294: sshll v20.4s, v20.4h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[20].i16[0]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[20].i16[1]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[20].i16[2]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[20].i16[3]) << 0);
    (c)->q[20] = _t; }
  /* c2298: sshll v25.4s, v27.4h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[27].i16[0]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[27].i16[1]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[27].i16[2]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[27].i16[3]) << 0);
    (c)->q[25] = _t; }
  /* c229c: sshll2 v21.4s, v27.8h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[27].i16[4]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[27].i16[5]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[27].i16[6]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[27].i16[7]) << 0);
    (c)->q[21] = _t; }
  /* c22a0: sshll v30.2d, v18.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[18].i32[0]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[18].i32[1]) << 0);
    (c)->q[30] = _t; }
  /* c22a4: sshll2 v18.2d, v18.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[18].i32[2]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[18].i32[3]) << 0);
    (c)->q[18] = _t; }
  /* c22a8: sshll2 v27.2d, v24.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[24].i32[2]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[24].i32[3]) << 0);
    (c)->q[27] = _t; }
  /* c22ac: sshll v24.2d, v24.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[24].i32[0]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[24].i32[1]) << 0);
    (c)->q[24] = _t; }
  /* c22b0: sshll v26.4s, v23.4h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[23].i16[0]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[23].i16[1]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[23].i16[2]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[23].i16[3]) << 0);
    (c)->q[26] = _t; }
  /* c22b4: sshll2 v29.2d, v20.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[20].i32[2]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[20].i32[3]) << 0);
    (c)->q[29] = _t; }
  /* c22b8: sshll v20.2d, v20.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[20].i32[0]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[20].i32[1]) << 0);
    (c)->q[20] = _t; }
  /* c22bc: sshll2 v28.2d, v25.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[25].i32[2]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[25].i32[3]) << 0);
    (c)->q[28] = _t; }
  /* c22c0: sshll v25.2d, v25.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[25].i32[0]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[25].i32[1]) << 0);
    (c)->q[25] = _t; }
  /* c22c4: sshll2 v22.2d, v21.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[21].i32[2]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[21].i32[3]) << 0);
    (c)->q[22] = _t; }
  /* c22c8: sshll v21.2d, v21.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[21].i32[0]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[21].i32[1]) << 0);
    (c)->q[21] = _t; }
  /* c22cc: sshll v31.2d, v26.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[26].i32[0]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[26].i32[1]) << 0);
    (c)->q[31] = _t; }
  /* c22d0: bic v30.16b, v8.16b, v30.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[8].u8[0] & (~(c)->q[30].u8[0]);
    _t.u8[1] = (c)->q[8].u8[1] & (~(c)->q[30].u8[1]);
    _t.u8[2] = (c)->q[8].u8[2] & (~(c)->q[30].u8[2]);
    _t.u8[3] = (c)->q[8].u8[3] & (~(c)->q[30].u8[3]);
    _t.u8[4] = (c)->q[8].u8[4] & (~(c)->q[30].u8[4]);
    _t.u8[5] = (c)->q[8].u8[5] & (~(c)->q[30].u8[5]);
    _t.u8[6] = (c)->q[8].u8[6] & (~(c)->q[30].u8[6]);
    _t.u8[7] = (c)->q[8].u8[7] & (~(c)->q[30].u8[7]);
    _t.u8[8] = (c)->q[8].u8[8] & (~(c)->q[30].u8[8]);
    _t.u8[9] = (c)->q[8].u8[9] & (~(c)->q[30].u8[9]);
    _t.u8[10] = (c)->q[8].u8[10] & (~(c)->q[30].u8[10]);
    _t.u8[11] = (c)->q[8].u8[11] & (~(c)->q[30].u8[11]);
    _t.u8[12] = (c)->q[8].u8[12] & (~(c)->q[30].u8[12]);
    _t.u8[13] = (c)->q[8].u8[13] & (~(c)->q[30].u8[13]);
    _t.u8[14] = (c)->q[8].u8[14] & (~(c)->q[30].u8[14]);
    _t.u8[15] = (c)->q[8].u8[15] & (~(c)->q[30].u8[15]);
    (c)->q[30] = _t; }
  /* c22d4: sshll v8.2d, v19.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[19].i32[0]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[19].i32[1]) << 0);
    (c)->q[8] = _t; }
  /* c22d8: bic v20.16b, v10.16b, v20.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[10].u8[0] & (~(c)->q[20].u8[0]);
    _t.u8[1] = (c)->q[10].u8[1] & (~(c)->q[20].u8[1]);
    _t.u8[2] = (c)->q[10].u8[2] & (~(c)->q[20].u8[2]);
    _t.u8[3] = (c)->q[10].u8[3] & (~(c)->q[20].u8[3]);
    _t.u8[4] = (c)->q[10].u8[4] & (~(c)->q[20].u8[4]);
    _t.u8[5] = (c)->q[10].u8[5] & (~(c)->q[20].u8[5]);
    _t.u8[6] = (c)->q[10].u8[6] & (~(c)->q[20].u8[6]);
    _t.u8[7] = (c)->q[10].u8[7] & (~(c)->q[20].u8[7]);
    _t.u8[8] = (c)->q[10].u8[8] & (~(c)->q[20].u8[8]);
    _t.u8[9] = (c)->q[10].u8[9] & (~(c)->q[20].u8[9]);
    _t.u8[10] = (c)->q[10].u8[10] & (~(c)->q[20].u8[10]);
    _t.u8[11] = (c)->q[10].u8[11] & (~(c)->q[20].u8[11]);
    _t.u8[12] = (c)->q[10].u8[12] & (~(c)->q[20].u8[12]);
    _t.u8[13] = (c)->q[10].u8[13] & (~(c)->q[20].u8[13]);
    _t.u8[14] = (c)->q[10].u8[14] & (~(c)->q[20].u8[14]);
    _t.u8[15] = (c)->q[10].u8[15] & (~(c)->q[20].u8[15]);
    (c)->q[20] = _t; }
  /* c22dc: ldr q10, [sp, #0x110] */
  arc_q_w(c, 10, arc_ld64(((c)->sp + INT64_C(272))), arc_ld64(((c)->sp + INT64_C(272)) + 8));
  /* c22e0: sshll2 v23.4s, v23.8h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[23].i16[4]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[23].i16[5]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[23].i16[6]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[23].i16[7]) << 0);
    (c)->q[23] = _t; }
  /* c22e4: sshll2 v26.2d, v26.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[26].i32[2]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[26].i32[3]) << 0);
    (c)->q[26] = _t; }
  /* c22e8: sshll2 v19.2d, v19.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[19].i32[2]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[19].i32[3]) << 0);
    (c)->q[19] = _t; }
  /* c22ec: bic v25.16b, v10.16b, v25.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[10].u8[0] & (~(c)->q[25].u8[0]);
    _t.u8[1] = (c)->q[10].u8[1] & (~(c)->q[25].u8[1]);
    _t.u8[2] = (c)->q[10].u8[2] & (~(c)->q[25].u8[2]);
    _t.u8[3] = (c)->q[10].u8[3] & (~(c)->q[25].u8[3]);
    _t.u8[4] = (c)->q[10].u8[4] & (~(c)->q[25].u8[4]);
    _t.u8[5] = (c)->q[10].u8[5] & (~(c)->q[25].u8[5]);
    _t.u8[6] = (c)->q[10].u8[6] & (~(c)->q[25].u8[6]);
    _t.u8[7] = (c)->q[10].u8[7] & (~(c)->q[25].u8[7]);
    _t.u8[8] = (c)->q[10].u8[8] & (~(c)->q[25].u8[8]);
    _t.u8[9] = (c)->q[10].u8[9] & (~(c)->q[25].u8[9]);
    _t.u8[10] = (c)->q[10].u8[10] & (~(c)->q[25].u8[10]);
    _t.u8[11] = (c)->q[10].u8[11] & (~(c)->q[25].u8[11]);
    _t.u8[12] = (c)->q[10].u8[12] & (~(c)->q[25].u8[12]);
    _t.u8[13] = (c)->q[10].u8[13] & (~(c)->q[25].u8[13]);
    _t.u8[14] = (c)->q[10].u8[14] & (~(c)->q[25].u8[14]);
    _t.u8[15] = (c)->q[10].u8[15] & (~(c)->q[25].u8[15]);
    (c)->q[25] = _t; }
  /* c22f0: ldr q10, [sp, #0x100] */
  arc_q_w(c, 10, arc_ld64(((c)->sp + INT64_C(256))), arc_ld64(((c)->sp + INT64_C(256)) + 8));
  /* c22f4: bic v31.16b, v9.16b, v31.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[9].u8[0] & (~(c)->q[31].u8[0]);
    _t.u8[1] = (c)->q[9].u8[1] & (~(c)->q[31].u8[1]);
    _t.u8[2] = (c)->q[9].u8[2] & (~(c)->q[31].u8[2]);
    _t.u8[3] = (c)->q[9].u8[3] & (~(c)->q[31].u8[3]);
    _t.u8[4] = (c)->q[9].u8[4] & (~(c)->q[31].u8[4]);
    _t.u8[5] = (c)->q[9].u8[5] & (~(c)->q[31].u8[5]);
    _t.u8[6] = (c)->q[9].u8[6] & (~(c)->q[31].u8[6]);
    _t.u8[7] = (c)->q[9].u8[7] & (~(c)->q[31].u8[7]);
    _t.u8[8] = (c)->q[9].u8[8] & (~(c)->q[31].u8[8]);
    _t.u8[9] = (c)->q[9].u8[9] & (~(c)->q[31].u8[9]);
    _t.u8[10] = (c)->q[9].u8[10] & (~(c)->q[31].u8[10]);
    _t.u8[11] = (c)->q[9].u8[11] & (~(c)->q[31].u8[11]);
    _t.u8[12] = (c)->q[9].u8[12] & (~(c)->q[31].u8[12]);
    _t.u8[13] = (c)->q[9].u8[13] & (~(c)->q[31].u8[13]);
    _t.u8[14] = (c)->q[9].u8[14] & (~(c)->q[31].u8[14]);
    _t.u8[15] = (c)->q[9].u8[15] & (~(c)->q[31].u8[15]);
    (c)->q[31] = _t; }
  /* c22f8: ldr q9, [x22, #0xc80] */
  arc_q_w(c, 9, arc_ld64((ARC_X_R(c, 22) + INT64_C(3200))), arc_ld64((ARC_X_R(c, 22) + INT64_C(3200)) + 8));
  /* c22fc: bic v24.16b, v10.16b, v24.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[10].u8[0] & (~(c)->q[24].u8[0]);
    _t.u8[1] = (c)->q[10].u8[1] & (~(c)->q[24].u8[1]);
    _t.u8[2] = (c)->q[10].u8[2] & (~(c)->q[24].u8[2]);
    _t.u8[3] = (c)->q[10].u8[3] & (~(c)->q[24].u8[3]);
    _t.u8[4] = (c)->q[10].u8[4] & (~(c)->q[24].u8[4]);
    _t.u8[5] = (c)->q[10].u8[5] & (~(c)->q[24].u8[5]);
    _t.u8[6] = (c)->q[10].u8[6] & (~(c)->q[24].u8[6]);
    _t.u8[7] = (c)->q[10].u8[7] & (~(c)->q[24].u8[7]);
    _t.u8[8] = (c)->q[10].u8[8] & (~(c)->q[24].u8[8]);
    _t.u8[9] = (c)->q[10].u8[9] & (~(c)->q[24].u8[9]);
    _t.u8[10] = (c)->q[10].u8[10] & (~(c)->q[24].u8[10]);
    _t.u8[11] = (c)->q[10].u8[11] & (~(c)->q[24].u8[11]);
    _t.u8[12] = (c)->q[10].u8[12] & (~(c)->q[24].u8[12]);
    _t.u8[13] = (c)->q[10].u8[13] & (~(c)->q[24].u8[13]);
    _t.u8[14] = (c)->q[10].u8[14] & (~(c)->q[24].u8[14]);
    _t.u8[15] = (c)->q[10].u8[15] & (~(c)->q[24].u8[15]);
    (c)->q[24] = _t; }
  /* c2300: ldr q10, [sp, #0xf0] */
  arc_q_w(c, 10, arc_ld64(((c)->sp + INT64_C(240))), arc_ld64(((c)->sp + INT64_C(240)) + 8));
  /* c2304: bic v8.16b, v9.16b, v8.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[9].u8[0] & (~(c)->q[8].u8[0]);
    _t.u8[1] = (c)->q[9].u8[1] & (~(c)->q[8].u8[1]);
    _t.u8[2] = (c)->q[9].u8[2] & (~(c)->q[8].u8[2]);
    _t.u8[3] = (c)->q[9].u8[3] & (~(c)->q[8].u8[3]);
    _t.u8[4] = (c)->q[9].u8[4] & (~(c)->q[8].u8[4]);
    _t.u8[5] = (c)->q[9].u8[5] & (~(c)->q[8].u8[5]);
    _t.u8[6] = (c)->q[9].u8[6] & (~(c)->q[8].u8[6]);
    _t.u8[7] = (c)->q[9].u8[7] & (~(c)->q[8].u8[7]);
    _t.u8[8] = (c)->q[9].u8[8] & (~(c)->q[8].u8[8]);
    _t.u8[9] = (c)->q[9].u8[9] & (~(c)->q[8].u8[9]);
    _t.u8[10] = (c)->q[9].u8[10] & (~(c)->q[8].u8[10]);
    _t.u8[11] = (c)->q[9].u8[11] & (~(c)->q[8].u8[11]);
    _t.u8[12] = (c)->q[9].u8[12] & (~(c)->q[8].u8[12]);
    _t.u8[13] = (c)->q[9].u8[13] & (~(c)->q[8].u8[13]);
    _t.u8[14] = (c)->q[9].u8[14] & (~(c)->q[8].u8[14]);
    _t.u8[15] = (c)->q[9].u8[15] & (~(c)->q[8].u8[15]);
    (c)->q[8] = _t; }
  /* c2308: sshll2 v9.2d, v23.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[23].i32[2]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[23].i32[3]) << 0);
    (c)->q[9] = _t; }
  /* c230c: sshll v23.2d, v23.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[23].i32[0]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[23].i32[1]) << 0);
    (c)->q[23] = _t; }
  /* c2310: bic v21.16b, v10.16b, v21.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[10].u8[0] & (~(c)->q[21].u8[0]);
    _t.u8[1] = (c)->q[10].u8[1] & (~(c)->q[21].u8[1]);
    _t.u8[2] = (c)->q[10].u8[2] & (~(c)->q[21].u8[2]);
    _t.u8[3] = (c)->q[10].u8[3] & (~(c)->q[21].u8[3]);
    _t.u8[4] = (c)->q[10].u8[4] & (~(c)->q[21].u8[4]);
    _t.u8[5] = (c)->q[10].u8[5] & (~(c)->q[21].u8[5]);
    _t.u8[6] = (c)->q[10].u8[6] & (~(c)->q[21].u8[6]);
    _t.u8[7] = (c)->q[10].u8[7] & (~(c)->q[21].u8[7]);
    _t.u8[8] = (c)->q[10].u8[8] & (~(c)->q[21].u8[8]);
    _t.u8[9] = (c)->q[10].u8[9] & (~(c)->q[21].u8[9]);
    _t.u8[10] = (c)->q[10].u8[10] & (~(c)->q[21].u8[10]);
    _t.u8[11] = (c)->q[10].u8[11] & (~(c)->q[21].u8[11]);
    _t.u8[12] = (c)->q[10].u8[12] & (~(c)->q[21].u8[12]);
    _t.u8[13] = (c)->q[10].u8[13] & (~(c)->q[21].u8[13]);
    _t.u8[14] = (c)->q[10].u8[14] & (~(c)->q[21].u8[14]);
    _t.u8[15] = (c)->q[10].u8[15] & (~(c)->q[21].u8[15]);
    (c)->q[21] = _t; }
  /* c2314: ldr q10, [sp, #0xe0] */
  arc_q_w(c, 10, arc_ld64(((c)->sp + INT64_C(224))), arc_ld64(((c)->sp + INT64_C(224)) + 8));
  /* c2318: orr v24.16b, v30.16b, v24.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[30].u8[0] | (c)->q[24].u8[0];
    _t.u8[1] = (c)->q[30].u8[1] | (c)->q[24].u8[1];
    _t.u8[2] = (c)->q[30].u8[2] | (c)->q[24].u8[2];
    _t.u8[3] = (c)->q[30].u8[3] | (c)->q[24].u8[3];
    _t.u8[4] = (c)->q[30].u8[4] | (c)->q[24].u8[4];
    _t.u8[5] = (c)->q[30].u8[5] | (c)->q[24].u8[5];
    _t.u8[6] = (c)->q[30].u8[6] | (c)->q[24].u8[6];
    _t.u8[7] = (c)->q[30].u8[7] | (c)->q[24].u8[7];
    _t.u8[8] = (c)->q[30].u8[8] | (c)->q[24].u8[8];
    _t.u8[9] = (c)->q[30].u8[9] | (c)->q[24].u8[9];
    _t.u8[10] = (c)->q[30].u8[10] | (c)->q[24].u8[10];
    _t.u8[11] = (c)->q[30].u8[11] | (c)->q[24].u8[11];
    _t.u8[12] = (c)->q[30].u8[12] | (c)->q[24].u8[12];
    _t.u8[13] = (c)->q[30].u8[13] | (c)->q[24].u8[13];
    _t.u8[14] = (c)->q[30].u8[14] | (c)->q[24].u8[14];
    _t.u8[15] = (c)->q[30].u8[15] | (c)->q[24].u8[15];
    (c)->q[24] = _t; }
  /* c231c: bic v29.16b, v10.16b, v29.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[10].u8[0] & (~(c)->q[29].u8[0]);
    _t.u8[1] = (c)->q[10].u8[1] & (~(c)->q[29].u8[1]);
    _t.u8[2] = (c)->q[10].u8[2] & (~(c)->q[29].u8[2]);
    _t.u8[3] = (c)->q[10].u8[3] & (~(c)->q[29].u8[3]);
    _t.u8[4] = (c)->q[10].u8[4] & (~(c)->q[29].u8[4]);
    _t.u8[5] = (c)->q[10].u8[5] & (~(c)->q[29].u8[5]);
    _t.u8[6] = (c)->q[10].u8[6] & (~(c)->q[29].u8[6]);
    _t.u8[7] = (c)->q[10].u8[7] & (~(c)->q[29].u8[7]);
    _t.u8[8] = (c)->q[10].u8[8] & (~(c)->q[29].u8[8]);
    _t.u8[9] = (c)->q[10].u8[9] & (~(c)->q[29].u8[9]);
    _t.u8[10] = (c)->q[10].u8[10] & (~(c)->q[29].u8[10]);
    _t.u8[11] = (c)->q[10].u8[11] & (~(c)->q[29].u8[11]);
    _t.u8[12] = (c)->q[10].u8[12] & (~(c)->q[29].u8[12]);
    _t.u8[13] = (c)->q[10].u8[13] & (~(c)->q[29].u8[13]);
    _t.u8[14] = (c)->q[10].u8[14] & (~(c)->q[29].u8[14]);
    _t.u8[15] = (c)->q[10].u8[15] & (~(c)->q[29].u8[15]);
    (c)->q[29] = _t; }
  /* c2320: ldr q10, [sp, #0xd0] */
  arc_q_w(c, 10, arc_ld64(((c)->sp + INT64_C(208))), arc_ld64(((c)->sp + INT64_C(208)) + 8));
  /* c2324: orr v17.16b, v8.16b, v20.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[8].u8[0] | (c)->q[20].u8[0];
    _t.u8[1] = (c)->q[8].u8[1] | (c)->q[20].u8[1];
    _t.u8[2] = (c)->q[8].u8[2] | (c)->q[20].u8[2];
    _t.u8[3] = (c)->q[8].u8[3] | (c)->q[20].u8[3];
    _t.u8[4] = (c)->q[8].u8[4] | (c)->q[20].u8[4];
    _t.u8[5] = (c)->q[8].u8[5] | (c)->q[20].u8[5];
    _t.u8[6] = (c)->q[8].u8[6] | (c)->q[20].u8[6];
    _t.u8[7] = (c)->q[8].u8[7] | (c)->q[20].u8[7];
    _t.u8[8] = (c)->q[8].u8[8] | (c)->q[20].u8[8];
    _t.u8[9] = (c)->q[8].u8[9] | (c)->q[20].u8[9];
    _t.u8[10] = (c)->q[8].u8[10] | (c)->q[20].u8[10];
    _t.u8[11] = (c)->q[8].u8[11] | (c)->q[20].u8[11];
    _t.u8[12] = (c)->q[8].u8[12] | (c)->q[20].u8[12];
    _t.u8[13] = (c)->q[8].u8[13] | (c)->q[20].u8[13];
    _t.u8[14] = (c)->q[8].u8[14] | (c)->q[20].u8[14];
    _t.u8[15] = (c)->q[8].u8[15] | (c)->q[20].u8[15];
    (c)->q[17] = _t; }
  /* c2328: orr v20.16b, v31.16b, v25.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[31].u8[0] | (c)->q[25].u8[0];
    _t.u8[1] = (c)->q[31].u8[1] | (c)->q[25].u8[1];
    _t.u8[2] = (c)->q[31].u8[2] | (c)->q[25].u8[2];
    _t.u8[3] = (c)->q[31].u8[3] | (c)->q[25].u8[3];
    _t.u8[4] = (c)->q[31].u8[4] | (c)->q[25].u8[4];
    _t.u8[5] = (c)->q[31].u8[5] | (c)->q[25].u8[5];
    _t.u8[6] = (c)->q[31].u8[6] | (c)->q[25].u8[6];
    _t.u8[7] = (c)->q[31].u8[7] | (c)->q[25].u8[7];
    _t.u8[8] = (c)->q[31].u8[8] | (c)->q[25].u8[8];
    _t.u8[9] = (c)->q[31].u8[9] | (c)->q[25].u8[9];
    _t.u8[10] = (c)->q[31].u8[10] | (c)->q[25].u8[10];
    _t.u8[11] = (c)->q[31].u8[11] | (c)->q[25].u8[11];
    _t.u8[12] = (c)->q[31].u8[12] | (c)->q[25].u8[12];
    _t.u8[13] = (c)->q[31].u8[13] | (c)->q[25].u8[13];
    _t.u8[14] = (c)->q[31].u8[14] | (c)->q[25].u8[14];
    _t.u8[15] = (c)->q[31].u8[15] | (c)->q[25].u8[15];
    (c)->q[20] = _t; }
  /* c232c: bic v28.16b, v10.16b, v28.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[10].u8[0] & (~(c)->q[28].u8[0]);
    _t.u8[1] = (c)->q[10].u8[1] & (~(c)->q[28].u8[1]);
    _t.u8[2] = (c)->q[10].u8[2] & (~(c)->q[28].u8[2]);
    _t.u8[3] = (c)->q[10].u8[3] & (~(c)->q[28].u8[3]);
    _t.u8[4] = (c)->q[10].u8[4] & (~(c)->q[28].u8[4]);
    _t.u8[5] = (c)->q[10].u8[5] & (~(c)->q[28].u8[5]);
    _t.u8[6] = (c)->q[10].u8[6] & (~(c)->q[28].u8[6]);
    _t.u8[7] = (c)->q[10].u8[7] & (~(c)->q[28].u8[7]);
    _t.u8[8] = (c)->q[10].u8[8] & (~(c)->q[28].u8[8]);
    _t.u8[9] = (c)->q[10].u8[9] & (~(c)->q[28].u8[9]);
    _t.u8[10] = (c)->q[10].u8[10] & (~(c)->q[28].u8[10]);
    _t.u8[11] = (c)->q[10].u8[11] & (~(c)->q[28].u8[11]);
    _t.u8[12] = (c)->q[10].u8[12] & (~(c)->q[28].u8[12]);
    _t.u8[13] = (c)->q[10].u8[13] & (~(c)->q[28].u8[13]);
    _t.u8[14] = (c)->q[10].u8[14] & (~(c)->q[28].u8[14]);
    _t.u8[15] = (c)->q[10].u8[15] & (~(c)->q[28].u8[15]);
    (c)->q[28] = _t; }
  /* c2330: ldr q10, [sp, #0xc0] */
  arc_q_w(c, 10, arc_ld64(((c)->sp + INT64_C(192))), arc_ld64(((c)->sp + INT64_C(192)) + 8));
  /* c2334: orr v7.16b, v24.16b, v7.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[24].u8[0] | (c)->q[7].u8[0];
    _t.u8[1] = (c)->q[24].u8[1] | (c)->q[7].u8[1];
    _t.u8[2] = (c)->q[24].u8[2] | (c)->q[7].u8[2];
    _t.u8[3] = (c)->q[24].u8[3] | (c)->q[7].u8[3];
    _t.u8[4] = (c)->q[24].u8[4] | (c)->q[7].u8[4];
    _t.u8[5] = (c)->q[24].u8[5] | (c)->q[7].u8[5];
    _t.u8[6] = (c)->q[24].u8[6] | (c)->q[7].u8[6];
    _t.u8[7] = (c)->q[24].u8[7] | (c)->q[7].u8[7];
    _t.u8[8] = (c)->q[24].u8[8] | (c)->q[7].u8[8];
    _t.u8[9] = (c)->q[24].u8[9] | (c)->q[7].u8[9];
    _t.u8[10] = (c)->q[24].u8[10] | (c)->q[7].u8[10];
    _t.u8[11] = (c)->q[24].u8[11] | (c)->q[7].u8[11];
    _t.u8[12] = (c)->q[24].u8[12] | (c)->q[7].u8[12];
    _t.u8[13] = (c)->q[24].u8[13] | (c)->q[7].u8[13];
    _t.u8[14] = (c)->q[24].u8[14] | (c)->q[7].u8[14];
    _t.u8[15] = (c)->q[24].u8[15] | (c)->q[7].u8[15];
    (c)->q[7] = _t; }
  /* c2338: orr v3.16b, v17.16b, v3.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[17].u8[0] | (c)->q[3].u8[0];
    _t.u8[1] = (c)->q[17].u8[1] | (c)->q[3].u8[1];
    _t.u8[2] = (c)->q[17].u8[2] | (c)->q[3].u8[2];
    _t.u8[3] = (c)->q[17].u8[3] | (c)->q[3].u8[3];
    _t.u8[4] = (c)->q[17].u8[4] | (c)->q[3].u8[4];
    _t.u8[5] = (c)->q[17].u8[5] | (c)->q[3].u8[5];
    _t.u8[6] = (c)->q[17].u8[6] | (c)->q[3].u8[6];
    _t.u8[7] = (c)->q[17].u8[7] | (c)->q[3].u8[7];
    _t.u8[8] = (c)->q[17].u8[8] | (c)->q[3].u8[8];
    _t.u8[9] = (c)->q[17].u8[9] | (c)->q[3].u8[9];
    _t.u8[10] = (c)->q[17].u8[10] | (c)->q[3].u8[10];
    _t.u8[11] = (c)->q[17].u8[11] | (c)->q[3].u8[11];
    _t.u8[12] = (c)->q[17].u8[12] | (c)->q[3].u8[12];
    _t.u8[13] = (c)->q[17].u8[13] | (c)->q[3].u8[13];
    _t.u8[14] = (c)->q[17].u8[14] | (c)->q[3].u8[14];
    _t.u8[15] = (c)->q[17].u8[15] | (c)->q[3].u8[15];
    (c)->q[3] = _t; }
  /* c233c: bic v27.16b, v10.16b, v27.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[10].u8[0] & (~(c)->q[27].u8[0]);
    _t.u8[1] = (c)->q[10].u8[1] & (~(c)->q[27].u8[1]);
    _t.u8[2] = (c)->q[10].u8[2] & (~(c)->q[27].u8[2]);
    _t.u8[3] = (c)->q[10].u8[3] & (~(c)->q[27].u8[3]);
    _t.u8[4] = (c)->q[10].u8[4] & (~(c)->q[27].u8[4]);
    _t.u8[5] = (c)->q[10].u8[5] & (~(c)->q[27].u8[5]);
    _t.u8[6] = (c)->q[10].u8[6] & (~(c)->q[27].u8[6]);
    _t.u8[7] = (c)->q[10].u8[7] & (~(c)->q[27].u8[7]);
    _t.u8[8] = (c)->q[10].u8[8] & (~(c)->q[27].u8[8]);
    _t.u8[9] = (c)->q[10].u8[9] & (~(c)->q[27].u8[9]);
    _t.u8[10] = (c)->q[10].u8[10] & (~(c)->q[27].u8[10]);
    _t.u8[11] = (c)->q[10].u8[11] & (~(c)->q[27].u8[11]);
    _t.u8[12] = (c)->q[10].u8[12] & (~(c)->q[27].u8[12]);
    _t.u8[13] = (c)->q[10].u8[13] & (~(c)->q[27].u8[13]);
    _t.u8[14] = (c)->q[10].u8[14] & (~(c)->q[27].u8[14]);
    _t.u8[15] = (c)->q[10].u8[15] & (~(c)->q[27].u8[15]);
    (c)->q[27] = _t; }
  /* c2340: ldr q10, [sp, #0xb0] */
  arc_q_w(c, 10, arc_ld64(((c)->sp + INT64_C(176))), arc_ld64(((c)->sp + INT64_C(176)) + 8));
  /* c2344: orr v6.16b, v20.16b, v6.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[20].u8[0] | (c)->q[6].u8[0];
    _t.u8[1] = (c)->q[20].u8[1] | (c)->q[6].u8[1];
    _t.u8[2] = (c)->q[20].u8[2] | (c)->q[6].u8[2];
    _t.u8[3] = (c)->q[20].u8[3] | (c)->q[6].u8[3];
    _t.u8[4] = (c)->q[20].u8[4] | (c)->q[6].u8[4];
    _t.u8[5] = (c)->q[20].u8[5] | (c)->q[6].u8[5];
    _t.u8[6] = (c)->q[20].u8[6] | (c)->q[6].u8[6];
    _t.u8[7] = (c)->q[20].u8[7] | (c)->q[6].u8[7];
    _t.u8[8] = (c)->q[20].u8[8] | (c)->q[6].u8[8];
    _t.u8[9] = (c)->q[20].u8[9] | (c)->q[6].u8[9];
    _t.u8[10] = (c)->q[20].u8[10] | (c)->q[6].u8[10];
    _t.u8[11] = (c)->q[20].u8[11] | (c)->q[6].u8[11];
    _t.u8[12] = (c)->q[20].u8[12] | (c)->q[6].u8[12];
    _t.u8[13] = (c)->q[20].u8[13] | (c)->q[6].u8[13];
    _t.u8[14] = (c)->q[20].u8[14] | (c)->q[6].u8[14];
    _t.u8[15] = (c)->q[20].u8[15] | (c)->q[6].u8[15];
    (c)->q[6] = _t; }
  /* c2348: bic v22.16b, v10.16b, v22.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[10].u8[0] & (~(c)->q[22].u8[0]);
    _t.u8[1] = (c)->q[10].u8[1] & (~(c)->q[22].u8[1]);
    _t.u8[2] = (c)->q[10].u8[2] & (~(c)->q[22].u8[2]);
    _t.u8[3] = (c)->q[10].u8[3] & (~(c)->q[22].u8[3]);
    _t.u8[4] = (c)->q[10].u8[4] & (~(c)->q[22].u8[4]);
    _t.u8[5] = (c)->q[10].u8[5] & (~(c)->q[22].u8[5]);
    _t.u8[6] = (c)->q[10].u8[6] & (~(c)->q[22].u8[6]);
    _t.u8[7] = (c)->q[10].u8[7] & (~(c)->q[22].u8[7]);
    _t.u8[8] = (c)->q[10].u8[8] & (~(c)->q[22].u8[8]);
    _t.u8[9] = (c)->q[10].u8[9] & (~(c)->q[22].u8[9]);
    _t.u8[10] = (c)->q[10].u8[10] & (~(c)->q[22].u8[10]);
    _t.u8[11] = (c)->q[10].u8[11] & (~(c)->q[22].u8[11]);
    _t.u8[12] = (c)->q[10].u8[12] & (~(c)->q[22].u8[12]);
    _t.u8[13] = (c)->q[10].u8[13] & (~(c)->q[22].u8[13]);
    _t.u8[14] = (c)->q[10].u8[14] & (~(c)->q[22].u8[14]);
    _t.u8[15] = (c)->q[10].u8[15] & (~(c)->q[22].u8[15]);
    (c)->q[22] = _t; }
  /* c234c: ldr q10, [sp, #0xa0] */
  arc_q_w(c, 10, arc_ld64(((c)->sp + INT64_C(160))), arc_ld64(((c)->sp + INT64_C(160)) + 8));
  /* c2350: orr v3.16b, v6.16b, v3.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[6].u8[0] | (c)->q[3].u8[0];
    _t.u8[1] = (c)->q[6].u8[1] | (c)->q[3].u8[1];
    _t.u8[2] = (c)->q[6].u8[2] | (c)->q[3].u8[2];
    _t.u8[3] = (c)->q[6].u8[3] | (c)->q[3].u8[3];
    _t.u8[4] = (c)->q[6].u8[4] | (c)->q[3].u8[4];
    _t.u8[5] = (c)->q[6].u8[5] | (c)->q[3].u8[5];
    _t.u8[6] = (c)->q[6].u8[6] | (c)->q[3].u8[6];
    _t.u8[7] = (c)->q[6].u8[7] | (c)->q[3].u8[7];
    _t.u8[8] = (c)->q[6].u8[8] | (c)->q[3].u8[8];
    _t.u8[9] = (c)->q[6].u8[9] | (c)->q[3].u8[9];
    _t.u8[10] = (c)->q[6].u8[10] | (c)->q[3].u8[10];
    _t.u8[11] = (c)->q[6].u8[11] | (c)->q[3].u8[11];
    _t.u8[12] = (c)->q[6].u8[12] | (c)->q[3].u8[12];
    _t.u8[13] = (c)->q[6].u8[13] | (c)->q[3].u8[13];
    _t.u8[14] = (c)->q[6].u8[14] | (c)->q[3].u8[14];
    _t.u8[15] = (c)->q[6].u8[15] | (c)->q[3].u8[15];
    (c)->q[3] = _t; }
  /* c2354: bic v9.16b, v10.16b, v9.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[10].u8[0] & (~(c)->q[9].u8[0]);
    _t.u8[1] = (c)->q[10].u8[1] & (~(c)->q[9].u8[1]);
    _t.u8[2] = (c)->q[10].u8[2] & (~(c)->q[9].u8[2]);
    _t.u8[3] = (c)->q[10].u8[3] & (~(c)->q[9].u8[3]);
    _t.u8[4] = (c)->q[10].u8[4] & (~(c)->q[9].u8[4]);
    _t.u8[5] = (c)->q[10].u8[5] & (~(c)->q[9].u8[5]);
    _t.u8[6] = (c)->q[10].u8[6] & (~(c)->q[9].u8[6]);
    _t.u8[7] = (c)->q[10].u8[7] & (~(c)->q[9].u8[7]);
    _t.u8[8] = (c)->q[10].u8[8] & (~(c)->q[9].u8[8]);
    _t.u8[9] = (c)->q[10].u8[9] & (~(c)->q[9].u8[9]);
    _t.u8[10] = (c)->q[10].u8[10] & (~(c)->q[9].u8[10]);
    _t.u8[11] = (c)->q[10].u8[11] & (~(c)->q[9].u8[11]);
    _t.u8[12] = (c)->q[10].u8[12] & (~(c)->q[9].u8[12]);
    _t.u8[13] = (c)->q[10].u8[13] & (~(c)->q[9].u8[13]);
    _t.u8[14] = (c)->q[10].u8[14] & (~(c)->q[9].u8[14]);
    _t.u8[15] = (c)->q[10].u8[15] & (~(c)->q[9].u8[15]);
    (c)->q[9] = _t; }
  /* c2358: ldr q10, [sp, #0x90] */
  arc_q_w(c, 10, arc_ld64(((c)->sp + INT64_C(144))), arc_ld64(((c)->sp + INT64_C(144)) + 8));
  /* c235c: bic v18.16b, v10.16b, v18.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[10].u8[0] & (~(c)->q[18].u8[0]);
    _t.u8[1] = (c)->q[10].u8[1] & (~(c)->q[18].u8[1]);
    _t.u8[2] = (c)->q[10].u8[2] & (~(c)->q[18].u8[2]);
    _t.u8[3] = (c)->q[10].u8[3] & (~(c)->q[18].u8[3]);
    _t.u8[4] = (c)->q[10].u8[4] & (~(c)->q[18].u8[4]);
    _t.u8[5] = (c)->q[10].u8[5] & (~(c)->q[18].u8[5]);
    _t.u8[6] = (c)->q[10].u8[6] & (~(c)->q[18].u8[6]);
    _t.u8[7] = (c)->q[10].u8[7] & (~(c)->q[18].u8[7]);
    _t.u8[8] = (c)->q[10].u8[8] & (~(c)->q[18].u8[8]);
    _t.u8[9] = (c)->q[10].u8[9] & (~(c)->q[18].u8[9]);
    _t.u8[10] = (c)->q[10].u8[10] & (~(c)->q[18].u8[10]);
    _t.u8[11] = (c)->q[10].u8[11] & (~(c)->q[18].u8[11]);
    _t.u8[12] = (c)->q[10].u8[12] & (~(c)->q[18].u8[12]);
    _t.u8[13] = (c)->q[10].u8[13] & (~(c)->q[18].u8[13]);
    _t.u8[14] = (c)->q[10].u8[14] & (~(c)->q[18].u8[14]);
    _t.u8[15] = (c)->q[10].u8[15] & (~(c)->q[18].u8[15]);
    (c)->q[18] = _t; }
  /* c2360: ldr q10, [sp, #0x80] */
  arc_q_w(c, 10, arc_ld64(((c)->sp + INT64_C(128))), arc_ld64(((c)->sp + INT64_C(128)) + 8));
  /* c2364: orr v22.16b, v9.16b, v22.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[9].u8[0] | (c)->q[22].u8[0];
    _t.u8[1] = (c)->q[9].u8[1] | (c)->q[22].u8[1];
    _t.u8[2] = (c)->q[9].u8[2] | (c)->q[22].u8[2];
    _t.u8[3] = (c)->q[9].u8[3] | (c)->q[22].u8[3];
    _t.u8[4] = (c)->q[9].u8[4] | (c)->q[22].u8[4];
    _t.u8[5] = (c)->q[9].u8[5] | (c)->q[22].u8[5];
    _t.u8[6] = (c)->q[9].u8[6] | (c)->q[22].u8[6];
    _t.u8[7] = (c)->q[9].u8[7] | (c)->q[22].u8[7];
    _t.u8[8] = (c)->q[9].u8[8] | (c)->q[22].u8[8];
    _t.u8[9] = (c)->q[9].u8[9] | (c)->q[22].u8[9];
    _t.u8[10] = (c)->q[9].u8[10] | (c)->q[22].u8[10];
    _t.u8[11] = (c)->q[9].u8[11] | (c)->q[22].u8[11];
    _t.u8[12] = (c)->q[9].u8[12] | (c)->q[22].u8[12];
    _t.u8[13] = (c)->q[9].u8[13] | (c)->q[22].u8[13];
    _t.u8[14] = (c)->q[9].u8[14] | (c)->q[22].u8[14];
    _t.u8[15] = (c)->q[9].u8[15] | (c)->q[22].u8[15];
    (c)->q[22] = _t; }
  /* c2368: bic v26.16b, v10.16b, v26.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[10].u8[0] & (~(c)->q[26].u8[0]);
    _t.u8[1] = (c)->q[10].u8[1] & (~(c)->q[26].u8[1]);
    _t.u8[2] = (c)->q[10].u8[2] & (~(c)->q[26].u8[2]);
    _t.u8[3] = (c)->q[10].u8[3] & (~(c)->q[26].u8[3]);
    _t.u8[4] = (c)->q[10].u8[4] & (~(c)->q[26].u8[4]);
    _t.u8[5] = (c)->q[10].u8[5] & (~(c)->q[26].u8[5]);
    _t.u8[6] = (c)->q[10].u8[6] & (~(c)->q[26].u8[6]);
    _t.u8[7] = (c)->q[10].u8[7] & (~(c)->q[26].u8[7]);
    _t.u8[8] = (c)->q[10].u8[8] & (~(c)->q[26].u8[8]);
    _t.u8[9] = (c)->q[10].u8[9] & (~(c)->q[26].u8[9]);
    _t.u8[10] = (c)->q[10].u8[10] & (~(c)->q[26].u8[10]);
    _t.u8[11] = (c)->q[10].u8[11] & (~(c)->q[26].u8[11]);
    _t.u8[12] = (c)->q[10].u8[12] & (~(c)->q[26].u8[12]);
    _t.u8[13] = (c)->q[10].u8[13] & (~(c)->q[26].u8[13]);
    _t.u8[14] = (c)->q[10].u8[14] & (~(c)->q[26].u8[14]);
    _t.u8[15] = (c)->q[10].u8[15] & (~(c)->q[26].u8[15]);
    (c)->q[26] = _t; }
  /* c236c: ldr q10, [sp, #0x70] */
  arc_q_w(c, 10, arc_ld64(((c)->sp + INT64_C(112))), arc_ld64(((c)->sp + INT64_C(112)) + 8));
  /* c2370: orr v18.16b, v18.16b, v27.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[18].u8[0] | (c)->q[27].u8[0];
    _t.u8[1] = (c)->q[18].u8[1] | (c)->q[27].u8[1];
    _t.u8[2] = (c)->q[18].u8[2] | (c)->q[27].u8[2];
    _t.u8[3] = (c)->q[18].u8[3] | (c)->q[27].u8[3];
    _t.u8[4] = (c)->q[18].u8[4] | (c)->q[27].u8[4];
    _t.u8[5] = (c)->q[18].u8[5] | (c)->q[27].u8[5];
    _t.u8[6] = (c)->q[18].u8[6] | (c)->q[27].u8[6];
    _t.u8[7] = (c)->q[18].u8[7] | (c)->q[27].u8[7];
    _t.u8[8] = (c)->q[18].u8[8] | (c)->q[27].u8[8];
    _t.u8[9] = (c)->q[18].u8[9] | (c)->q[27].u8[9];
    _t.u8[10] = (c)->q[18].u8[10] | (c)->q[27].u8[10];
    _t.u8[11] = (c)->q[18].u8[11] | (c)->q[27].u8[11];
    _t.u8[12] = (c)->q[18].u8[12] | (c)->q[27].u8[12];
    _t.u8[13] = (c)->q[18].u8[13] | (c)->q[27].u8[13];
    _t.u8[14] = (c)->q[18].u8[14] | (c)->q[27].u8[14];
    _t.u8[15] = (c)->q[18].u8[15] | (c)->q[27].u8[15];
    (c)->q[18] = _t; }
  /* c2374: bic v19.16b, v10.16b, v19.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[10].u8[0] & (~(c)->q[19].u8[0]);
    _t.u8[1] = (c)->q[10].u8[1] & (~(c)->q[19].u8[1]);
    _t.u8[2] = (c)->q[10].u8[2] & (~(c)->q[19].u8[2]);
    _t.u8[3] = (c)->q[10].u8[3] & (~(c)->q[19].u8[3]);
    _t.u8[4] = (c)->q[10].u8[4] & (~(c)->q[19].u8[4]);
    _t.u8[5] = (c)->q[10].u8[5] & (~(c)->q[19].u8[5]);
    _t.u8[6] = (c)->q[10].u8[6] & (~(c)->q[19].u8[6]);
    _t.u8[7] = (c)->q[10].u8[7] & (~(c)->q[19].u8[7]);
    _t.u8[8] = (c)->q[10].u8[8] & (~(c)->q[19].u8[8]);
    _t.u8[9] = (c)->q[10].u8[9] & (~(c)->q[19].u8[9]);
    _t.u8[10] = (c)->q[10].u8[10] & (~(c)->q[19].u8[10]);
    _t.u8[11] = (c)->q[10].u8[11] & (~(c)->q[19].u8[11]);
    _t.u8[12] = (c)->q[10].u8[12] & (~(c)->q[19].u8[12]);
    _t.u8[13] = (c)->q[10].u8[13] & (~(c)->q[19].u8[13]);
    _t.u8[14] = (c)->q[10].u8[14] & (~(c)->q[19].u8[14]);
    _t.u8[15] = (c)->q[10].u8[15] & (~(c)->q[19].u8[15]);
    (c)->q[19] = _t; }
  /* c2378: ldr q10, [sp, #0x60] */
  arc_q_w(c, 10, arc_ld64(((c)->sp + INT64_C(96))), arc_ld64(((c)->sp + INT64_C(96)) + 8));
  /* c237c: orr v1.16b, v22.16b, v1.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[22].u8[0] | (c)->q[1].u8[0];
    _t.u8[1] = (c)->q[22].u8[1] | (c)->q[1].u8[1];
    _t.u8[2] = (c)->q[22].u8[2] | (c)->q[1].u8[2];
    _t.u8[3] = (c)->q[22].u8[3] | (c)->q[1].u8[3];
    _t.u8[4] = (c)->q[22].u8[4] | (c)->q[1].u8[4];
    _t.u8[5] = (c)->q[22].u8[5] | (c)->q[1].u8[5];
    _t.u8[6] = (c)->q[22].u8[6] | (c)->q[1].u8[6];
    _t.u8[7] = (c)->q[22].u8[7] | (c)->q[1].u8[7];
    _t.u8[8] = (c)->q[22].u8[8] | (c)->q[1].u8[8];
    _t.u8[9] = (c)->q[22].u8[9] | (c)->q[1].u8[9];
    _t.u8[10] = (c)->q[22].u8[10] | (c)->q[1].u8[10];
    _t.u8[11] = (c)->q[22].u8[11] | (c)->q[1].u8[11];
    _t.u8[12] = (c)->q[22].u8[12] | (c)->q[1].u8[12];
    _t.u8[13] = (c)->q[22].u8[13] | (c)->q[1].u8[13];
    _t.u8[14] = (c)->q[22].u8[14] | (c)->q[1].u8[14];
    _t.u8[15] = (c)->q[22].u8[15] | (c)->q[1].u8[15];
    (c)->q[1] = _t; }
  /* c2380: bic v23.16b, v10.16b, v23.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[10].u8[0] & (~(c)->q[23].u8[0]);
    _t.u8[1] = (c)->q[10].u8[1] & (~(c)->q[23].u8[1]);
    _t.u8[2] = (c)->q[10].u8[2] & (~(c)->q[23].u8[2]);
    _t.u8[3] = (c)->q[10].u8[3] & (~(c)->q[23].u8[3]);
    _t.u8[4] = (c)->q[10].u8[4] & (~(c)->q[23].u8[4]);
    _t.u8[5] = (c)->q[10].u8[5] & (~(c)->q[23].u8[5]);
    _t.u8[6] = (c)->q[10].u8[6] & (~(c)->q[23].u8[6]);
    _t.u8[7] = (c)->q[10].u8[7] & (~(c)->q[23].u8[7]);
    _t.u8[8] = (c)->q[10].u8[8] & (~(c)->q[23].u8[8]);
    _t.u8[9] = (c)->q[10].u8[9] & (~(c)->q[23].u8[9]);
    _t.u8[10] = (c)->q[10].u8[10] & (~(c)->q[23].u8[10]);
    _t.u8[11] = (c)->q[10].u8[11] & (~(c)->q[23].u8[11]);
    _t.u8[12] = (c)->q[10].u8[12] & (~(c)->q[23].u8[12]);
    _t.u8[13] = (c)->q[10].u8[13] & (~(c)->q[23].u8[13]);
    _t.u8[14] = (c)->q[10].u8[14] & (~(c)->q[23].u8[14]);
    _t.u8[15] = (c)->q[10].u8[15] & (~(c)->q[23].u8[15]);
    (c)->q[23] = _t; }
  /* c2384: orr v2.16b, v18.16b, v2.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[18].u8[0] | (c)->q[2].u8[0];
    _t.u8[1] = (c)->q[18].u8[1] | (c)->q[2].u8[1];
    _t.u8[2] = (c)->q[18].u8[2] | (c)->q[2].u8[2];
    _t.u8[3] = (c)->q[18].u8[3] | (c)->q[2].u8[3];
    _t.u8[4] = (c)->q[18].u8[4] | (c)->q[2].u8[4];
    _t.u8[5] = (c)->q[18].u8[5] | (c)->q[2].u8[5];
    _t.u8[6] = (c)->q[18].u8[6] | (c)->q[2].u8[6];
    _t.u8[7] = (c)->q[18].u8[7] | (c)->q[2].u8[7];
    _t.u8[8] = (c)->q[18].u8[8] | (c)->q[2].u8[8];
    _t.u8[9] = (c)->q[18].u8[9] | (c)->q[2].u8[9];
    _t.u8[10] = (c)->q[18].u8[10] | (c)->q[2].u8[10];
    _t.u8[11] = (c)->q[18].u8[11] | (c)->q[2].u8[11];
    _t.u8[12] = (c)->q[18].u8[12] | (c)->q[2].u8[12];
    _t.u8[13] = (c)->q[18].u8[13] | (c)->q[2].u8[13];
    _t.u8[14] = (c)->q[18].u8[14] | (c)->q[2].u8[14];
    _t.u8[15] = (c)->q[18].u8[15] | (c)->q[2].u8[15];
    (c)->q[2] = _t; }
  /* c2388: orr v19.16b, v19.16b, v29.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[19].u8[0] | (c)->q[29].u8[0];
    _t.u8[1] = (c)->q[19].u8[1] | (c)->q[29].u8[1];
    _t.u8[2] = (c)->q[19].u8[2] | (c)->q[29].u8[2];
    _t.u8[3] = (c)->q[19].u8[3] | (c)->q[29].u8[3];
    _t.u8[4] = (c)->q[19].u8[4] | (c)->q[29].u8[4];
    _t.u8[5] = (c)->q[19].u8[5] | (c)->q[29].u8[5];
    _t.u8[6] = (c)->q[19].u8[6] | (c)->q[29].u8[6];
    _t.u8[7] = (c)->q[19].u8[7] | (c)->q[29].u8[7];
    _t.u8[8] = (c)->q[19].u8[8] | (c)->q[29].u8[8];
    _t.u8[9] = (c)->q[19].u8[9] | (c)->q[29].u8[9];
    _t.u8[10] = (c)->q[19].u8[10] | (c)->q[29].u8[10];
    _t.u8[11] = (c)->q[19].u8[11] | (c)->q[29].u8[11];
    _t.u8[12] = (c)->q[19].u8[12] | (c)->q[29].u8[12];
    _t.u8[13] = (c)->q[19].u8[13] | (c)->q[29].u8[13];
    _t.u8[14] = (c)->q[19].u8[14] | (c)->q[29].u8[14];
    _t.u8[15] = (c)->q[19].u8[15] | (c)->q[29].u8[15];
    (c)->q[19] = _t; }
  /* c238c: orr v21.16b, v23.16b, v21.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[23].u8[0] | (c)->q[21].u8[0];
    _t.u8[1] = (c)->q[23].u8[1] | (c)->q[21].u8[1];
    _t.u8[2] = (c)->q[23].u8[2] | (c)->q[21].u8[2];
    _t.u8[3] = (c)->q[23].u8[3] | (c)->q[21].u8[3];
    _t.u8[4] = (c)->q[23].u8[4] | (c)->q[21].u8[4];
    _t.u8[5] = (c)->q[23].u8[5] | (c)->q[21].u8[5];
    _t.u8[6] = (c)->q[23].u8[6] | (c)->q[21].u8[6];
    _t.u8[7] = (c)->q[23].u8[7] | (c)->q[21].u8[7];
    _t.u8[8] = (c)->q[23].u8[8] | (c)->q[21].u8[8];
    _t.u8[9] = (c)->q[23].u8[9] | (c)->q[21].u8[9];
    _t.u8[10] = (c)->q[23].u8[10] | (c)->q[21].u8[10];
    _t.u8[11] = (c)->q[23].u8[11] | (c)->q[21].u8[11];
    _t.u8[12] = (c)->q[23].u8[12] | (c)->q[21].u8[12];
    _t.u8[13] = (c)->q[23].u8[13] | (c)->q[21].u8[13];
    _t.u8[14] = (c)->q[23].u8[14] | (c)->q[21].u8[14];
    _t.u8[15] = (c)->q[23].u8[15] | (c)->q[21].u8[15];
    (c)->q[21] = _t; }
  /* c2390: orr v23.16b, v26.16b, v28.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[26].u8[0] | (c)->q[28].u8[0];
    _t.u8[1] = (c)->q[26].u8[1] | (c)->q[28].u8[1];
    _t.u8[2] = (c)->q[26].u8[2] | (c)->q[28].u8[2];
    _t.u8[3] = (c)->q[26].u8[3] | (c)->q[28].u8[3];
    _t.u8[4] = (c)->q[26].u8[4] | (c)->q[28].u8[4];
    _t.u8[5] = (c)->q[26].u8[5] | (c)->q[28].u8[5];
    _t.u8[6] = (c)->q[26].u8[6] | (c)->q[28].u8[6];
    _t.u8[7] = (c)->q[26].u8[7] | (c)->q[28].u8[7];
    _t.u8[8] = (c)->q[26].u8[8] | (c)->q[28].u8[8];
    _t.u8[9] = (c)->q[26].u8[9] | (c)->q[28].u8[9];
    _t.u8[10] = (c)->q[26].u8[10] | (c)->q[28].u8[10];
    _t.u8[11] = (c)->q[26].u8[11] | (c)->q[28].u8[11];
    _t.u8[12] = (c)->q[26].u8[12] | (c)->q[28].u8[12];
    _t.u8[13] = (c)->q[26].u8[13] | (c)->q[28].u8[13];
    _t.u8[14] = (c)->q[26].u8[14] | (c)->q[28].u8[14];
    _t.u8[15] = (c)->q[26].u8[15] | (c)->q[28].u8[15];
    (c)->q[23] = _t; }
  /* c2394: orr v1.16b, v1.16b, v2.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[1].u8[0] | (c)->q[2].u8[0];
    _t.u8[1] = (c)->q[1].u8[1] | (c)->q[2].u8[1];
    _t.u8[2] = (c)->q[1].u8[2] | (c)->q[2].u8[2];
    _t.u8[3] = (c)->q[1].u8[3] | (c)->q[2].u8[3];
    _t.u8[4] = (c)->q[1].u8[4] | (c)->q[2].u8[4];
    _t.u8[5] = (c)->q[1].u8[5] | (c)->q[2].u8[5];
    _t.u8[6] = (c)->q[1].u8[6] | (c)->q[2].u8[6];
    _t.u8[7] = (c)->q[1].u8[7] | (c)->q[2].u8[7];
    _t.u8[8] = (c)->q[1].u8[8] | (c)->q[2].u8[8];
    _t.u8[9] = (c)->q[1].u8[9] | (c)->q[2].u8[9];
    _t.u8[10] = (c)->q[1].u8[10] | (c)->q[2].u8[10];
    _t.u8[11] = (c)->q[1].u8[11] | (c)->q[2].u8[11];
    _t.u8[12] = (c)->q[1].u8[12] | (c)->q[2].u8[12];
    _t.u8[13] = (c)->q[1].u8[13] | (c)->q[2].u8[13];
    _t.u8[14] = (c)->q[1].u8[14] | (c)->q[2].u8[14];
    _t.u8[15] = (c)->q[1].u8[15] | (c)->q[2].u8[15];
    (c)->q[1] = _t; }
  /* c2398: orr v16.16b, v19.16b, v16.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[19].u8[0] | (c)->q[16].u8[0];
    _t.u8[1] = (c)->q[19].u8[1] | (c)->q[16].u8[1];
    _t.u8[2] = (c)->q[19].u8[2] | (c)->q[16].u8[2];
    _t.u8[3] = (c)->q[19].u8[3] | (c)->q[16].u8[3];
    _t.u8[4] = (c)->q[19].u8[4] | (c)->q[16].u8[4];
    _t.u8[5] = (c)->q[19].u8[5] | (c)->q[16].u8[5];
    _t.u8[6] = (c)->q[19].u8[6] | (c)->q[16].u8[6];
    _t.u8[7] = (c)->q[19].u8[7] | (c)->q[16].u8[7];
    _t.u8[8] = (c)->q[19].u8[8] | (c)->q[16].u8[8];
    _t.u8[9] = (c)->q[19].u8[9] | (c)->q[16].u8[9];
    _t.u8[10] = (c)->q[19].u8[10] | (c)->q[16].u8[10];
    _t.u8[11] = (c)->q[19].u8[11] | (c)->q[16].u8[11];
    _t.u8[12] = (c)->q[19].u8[12] | (c)->q[16].u8[12];
    _t.u8[13] = (c)->q[19].u8[13] | (c)->q[16].u8[13];
    _t.u8[14] = (c)->q[19].u8[14] | (c)->q[16].u8[14];
    _t.u8[15] = (c)->q[19].u8[15] | (c)->q[16].u8[15];
    (c)->q[16] = _t; }
  /* c239c: orr v4.16b, v21.16b, v4.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[21].u8[0] | (c)->q[4].u8[0];
    _t.u8[1] = (c)->q[21].u8[1] | (c)->q[4].u8[1];
    _t.u8[2] = (c)->q[21].u8[2] | (c)->q[4].u8[2];
    _t.u8[3] = (c)->q[21].u8[3] | (c)->q[4].u8[3];
    _t.u8[4] = (c)->q[21].u8[4] | (c)->q[4].u8[4];
    _t.u8[5] = (c)->q[21].u8[5] | (c)->q[4].u8[5];
    _t.u8[6] = (c)->q[21].u8[6] | (c)->q[4].u8[6];
    _t.u8[7] = (c)->q[21].u8[7] | (c)->q[4].u8[7];
    _t.u8[8] = (c)->q[21].u8[8] | (c)->q[4].u8[8];
    _t.u8[9] = (c)->q[21].u8[9] | (c)->q[4].u8[9];
    _t.u8[10] = (c)->q[21].u8[10] | (c)->q[4].u8[10];
    _t.u8[11] = (c)->q[21].u8[11] | (c)->q[4].u8[11];
    _t.u8[12] = (c)->q[21].u8[12] | (c)->q[4].u8[12];
    _t.u8[13] = (c)->q[21].u8[13] | (c)->q[4].u8[13];
    _t.u8[14] = (c)->q[21].u8[14] | (c)->q[4].u8[14];
    _t.u8[15] = (c)->q[21].u8[15] | (c)->q[4].u8[15];
    (c)->q[4] = _t; }
  /* c23a0: orr v5.16b, v23.16b, v5.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[23].u8[0] | (c)->q[5].u8[0];
    _t.u8[1] = (c)->q[23].u8[1] | (c)->q[5].u8[1];
    _t.u8[2] = (c)->q[23].u8[2] | (c)->q[5].u8[2];
    _t.u8[3] = (c)->q[23].u8[3] | (c)->q[5].u8[3];
    _t.u8[4] = (c)->q[23].u8[4] | (c)->q[5].u8[4];
    _t.u8[5] = (c)->q[23].u8[5] | (c)->q[5].u8[5];
    _t.u8[6] = (c)->q[23].u8[6] | (c)->q[5].u8[6];
    _t.u8[7] = (c)->q[23].u8[7] | (c)->q[5].u8[7];
    _t.u8[8] = (c)->q[23].u8[8] | (c)->q[5].u8[8];
    _t.u8[9] = (c)->q[23].u8[9] | (c)->q[5].u8[9];
    _t.u8[10] = (c)->q[23].u8[10] | (c)->q[5].u8[10];
    _t.u8[11] = (c)->q[23].u8[11] | (c)->q[5].u8[11];
    _t.u8[12] = (c)->q[23].u8[12] | (c)->q[5].u8[12];
    _t.u8[13] = (c)->q[23].u8[13] | (c)->q[5].u8[13];
    _t.u8[14] = (c)->q[23].u8[14] | (c)->q[5].u8[14];
    _t.u8[15] = (c)->q[23].u8[15] | (c)->q[5].u8[15];
    (c)->q[5] = _t; }
  /* c23a4: orr v2.16b, v5.16b, v16.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[5].u8[0] | (c)->q[16].u8[0];
    _t.u8[1] = (c)->q[5].u8[1] | (c)->q[16].u8[1];
    _t.u8[2] = (c)->q[5].u8[2] | (c)->q[16].u8[2];
    _t.u8[3] = (c)->q[5].u8[3] | (c)->q[16].u8[3];
    _t.u8[4] = (c)->q[5].u8[4] | (c)->q[16].u8[4];
    _t.u8[5] = (c)->q[5].u8[5] | (c)->q[16].u8[5];
    _t.u8[6] = (c)->q[5].u8[6] | (c)->q[16].u8[6];
    _t.u8[7] = (c)->q[5].u8[7] | (c)->q[16].u8[7];
    _t.u8[8] = (c)->q[5].u8[8] | (c)->q[16].u8[8];
    _t.u8[9] = (c)->q[5].u8[9] | (c)->q[16].u8[9];
    _t.u8[10] = (c)->q[5].u8[10] | (c)->q[16].u8[10];
    _t.u8[11] = (c)->q[5].u8[11] | (c)->q[16].u8[11];
    _t.u8[12] = (c)->q[5].u8[12] | (c)->q[16].u8[12];
    _t.u8[13] = (c)->q[5].u8[13] | (c)->q[16].u8[13];
    _t.u8[14] = (c)->q[5].u8[14] | (c)->q[16].u8[14];
    _t.u8[15] = (c)->q[5].u8[15] | (c)->q[16].u8[15];
    (c)->q[2] = _t; }
  /* c23a8: orr v4.16b, v4.16b, v7.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[4].u8[0] | (c)->q[7].u8[0];
    _t.u8[1] = (c)->q[4].u8[1] | (c)->q[7].u8[1];
    _t.u8[2] = (c)->q[4].u8[2] | (c)->q[7].u8[2];
    _t.u8[3] = (c)->q[4].u8[3] | (c)->q[7].u8[3];
    _t.u8[4] = (c)->q[4].u8[4] | (c)->q[7].u8[4];
    _t.u8[5] = (c)->q[4].u8[5] | (c)->q[7].u8[5];
    _t.u8[6] = (c)->q[4].u8[6] | (c)->q[7].u8[6];
    _t.u8[7] = (c)->q[4].u8[7] | (c)->q[7].u8[7];
    _t.u8[8] = (c)->q[4].u8[8] | (c)->q[7].u8[8];
    _t.u8[9] = (c)->q[4].u8[9] | (c)->q[7].u8[9];
    _t.u8[10] = (c)->q[4].u8[10] | (c)->q[7].u8[10];
    _t.u8[11] = (c)->q[4].u8[11] | (c)->q[7].u8[11];
    _t.u8[12] = (c)->q[4].u8[12] | (c)->q[7].u8[12];
    _t.u8[13] = (c)->q[4].u8[13] | (c)->q[7].u8[13];
    _t.u8[14] = (c)->q[4].u8[14] | (c)->q[7].u8[14];
    _t.u8[15] = (c)->q[4].u8[15] | (c)->q[7].u8[15];
    (c)->q[4] = _t; }
  /* c23ac: orr v1.16b, v2.16b, v1.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[2].u8[0] | (c)->q[1].u8[0];
    _t.u8[1] = (c)->q[2].u8[1] | (c)->q[1].u8[1];
    _t.u8[2] = (c)->q[2].u8[2] | (c)->q[1].u8[2];
    _t.u8[3] = (c)->q[2].u8[3] | (c)->q[1].u8[3];
    _t.u8[4] = (c)->q[2].u8[4] | (c)->q[1].u8[4];
    _t.u8[5] = (c)->q[2].u8[5] | (c)->q[1].u8[5];
    _t.u8[6] = (c)->q[2].u8[6] | (c)->q[1].u8[6];
    _t.u8[7] = (c)->q[2].u8[7] | (c)->q[1].u8[7];
    _t.u8[8] = (c)->q[2].u8[8] | (c)->q[1].u8[8];
    _t.u8[9] = (c)->q[2].u8[9] | (c)->q[1].u8[9];
    _t.u8[10] = (c)->q[2].u8[10] | (c)->q[1].u8[10];
    _t.u8[11] = (c)->q[2].u8[11] | (c)->q[1].u8[11];
    _t.u8[12] = (c)->q[2].u8[12] | (c)->q[1].u8[12];
    _t.u8[13] = (c)->q[2].u8[13] | (c)->q[1].u8[13];
    _t.u8[14] = (c)->q[2].u8[14] | (c)->q[1].u8[14];
    _t.u8[15] = (c)->q[2].u8[15] | (c)->q[1].u8[15];
    (c)->q[1] = _t; }
  /* c23b0: orr v2.16b, v3.16b, v4.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[3].u8[0] | (c)->q[4].u8[0];
    _t.u8[1] = (c)->q[3].u8[1] | (c)->q[4].u8[1];
    _t.u8[2] = (c)->q[3].u8[2] | (c)->q[4].u8[2];
    _t.u8[3] = (c)->q[3].u8[3] | (c)->q[4].u8[3];
    _t.u8[4] = (c)->q[3].u8[4] | (c)->q[4].u8[4];
    _t.u8[5] = (c)->q[3].u8[5] | (c)->q[4].u8[5];
    _t.u8[6] = (c)->q[3].u8[6] | (c)->q[4].u8[6];
    _t.u8[7] = (c)->q[3].u8[7] | (c)->q[4].u8[7];
    _t.u8[8] = (c)->q[3].u8[8] | (c)->q[4].u8[8];
    _t.u8[9] = (c)->q[3].u8[9] | (c)->q[4].u8[9];
    _t.u8[10] = (c)->q[3].u8[10] | (c)->q[4].u8[10];
    _t.u8[11] = (c)->q[3].u8[11] | (c)->q[4].u8[11];
    _t.u8[12] = (c)->q[3].u8[12] | (c)->q[4].u8[12];
    _t.u8[13] = (c)->q[3].u8[13] | (c)->q[4].u8[13];
    _t.u8[14] = (c)->q[3].u8[14] | (c)->q[4].u8[14];
    _t.u8[15] = (c)->q[3].u8[15] | (c)->q[4].u8[15];
    (c)->q[2] = _t; }
  /* c23b4: orr v1.16b, v2.16b, v1.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[2].u8[0] | (c)->q[1].u8[0];
    _t.u8[1] = (c)->q[2].u8[1] | (c)->q[1].u8[1];
    _t.u8[2] = (c)->q[2].u8[2] | (c)->q[1].u8[2];
    _t.u8[3] = (c)->q[2].u8[3] | (c)->q[1].u8[3];
    _t.u8[4] = (c)->q[2].u8[4] | (c)->q[1].u8[4];
    _t.u8[5] = (c)->q[2].u8[5] | (c)->q[1].u8[5];
    _t.u8[6] = (c)->q[2].u8[6] | (c)->q[1].u8[6];
    _t.u8[7] = (c)->q[2].u8[7] | (c)->q[1].u8[7];
    _t.u8[8] = (c)->q[2].u8[8] | (c)->q[1].u8[8];
    _t.u8[9] = (c)->q[2].u8[9] | (c)->q[1].u8[9];
    _t.u8[10] = (c)->q[2].u8[10] | (c)->q[1].u8[10];
    _t.u8[11] = (c)->q[2].u8[11] | (c)->q[1].u8[11];
    _t.u8[12] = (c)->q[2].u8[12] | (c)->q[1].u8[12];
    _t.u8[13] = (c)->q[2].u8[13] | (c)->q[1].u8[13];
    _t.u8[14] = (c)->q[2].u8[14] | (c)->q[1].u8[14];
    _t.u8[15] = (c)->q[2].u8[15] | (c)->q[1].u8[15];
    (c)->q[1] = _t; }
  /* c23b8: ext v2.16b, v1.16b, v1.16b, #8 */
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
    (c)->q[2] = _t; }
  /* c23bc: orr v1.8b, v1.8b, v2.8b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[1].u8[0] | (c)->q[2].u8[0];
    _t.u8[1] = (c)->q[1].u8[1] | (c)->q[2].u8[1];
    _t.u8[2] = (c)->q[1].u8[2] | (c)->q[2].u8[2];
    _t.u8[3] = (c)->q[1].u8[3] | (c)->q[2].u8[3];
    _t.u8[4] = (c)->q[1].u8[4] | (c)->q[2].u8[4];
    _t.u8[5] = (c)->q[1].u8[5] | (c)->q[2].u8[5];
    _t.u8[6] = (c)->q[1].u8[6] | (c)->q[2].u8[6];
    _t.u8[7] = (c)->q[1].u8[7] | (c)->q[2].u8[7];
    (c)->q[1] = _t; }
  /* c23c0: fmov x14, d1 */
  ARC_X_W(c, 14, ARC_DU_R(c, 1));
  /* c23c4: cbnz x13, #0xc215c */
  if ((ARC_X_R(c, 13)) != 0) goto L_c215c;
L_c23c8:;
  /* c23c8: ldur q1, [x12, #-0xf] */
  arc_q_w(c, 1, arc_ld64((ARC_X_R(c, 12) + INT64_C(-15))), arc_ld64((ARC_X_R(c, 12) + INT64_C(-15)) + 8));
  /* c23cc: ldur q2, [x12, #-0x1f] */
  arc_q_w(c, 2, arc_ld64((ARC_X_R(c, 12) + INT64_C(-31))), arc_ld64((ARC_X_R(c, 12) + INT64_C(-31)) + 8));
  /* c23d0: ldur q3, [x12, #-0x2f] */
  arc_q_w(c, 3, arc_ld64((ARC_X_R(c, 12) + INT64_C(-47))), arc_ld64((ARC_X_R(c, 12) + INT64_C(-47)) + 8));
  /* c23d4: ldur q4, [x12, #-0x3f] */
  arc_q_w(c, 4, arc_ld64((ARC_X_R(c, 12) + INT64_C(-63))), arc_ld64((ARC_X_R(c, 12) + INT64_C(-63)) + 8));
  /* c23d8: ldr q10, [sp, #0x120] */
  arc_q_w(c, 10, arc_ld64(((c)->sp + INT64_C(288))), arc_ld64(((c)->sp + INT64_C(288)) + 8));
  /* c23dc: ldr q8, [x6, #0xc40] */
  arc_q_w(c, 8, arc_ld64((ARC_X_R(c, 6) + INT64_C(3136))), arc_ld64((ARC_X_R(c, 6) + INT64_C(3136)) + 8));
  /* c23e0: rev64 v1.16b, v1.16b */
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
  /* c23e4: rev64 v2.16b, v2.16b */
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
  /* c23e8: rev64 v3.16b, v3.16b */
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
  /* c23ec: rev64 v4.16b, v4.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[4].u8[7];
    _t.u8[1] = (c)->q[4].u8[6];
    _t.u8[2] = (c)->q[4].u8[5];
    _t.u8[3] = (c)->q[4].u8[4];
    _t.u8[4] = (c)->q[4].u8[3];
    _t.u8[5] = (c)->q[4].u8[2];
    _t.u8[6] = (c)->q[4].u8[1];
    _t.u8[7] = (c)->q[4].u8[0];
    _t.u8[8] = (c)->q[4].u8[15];
    _t.u8[9] = (c)->q[4].u8[14];
    _t.u8[10] = (c)->q[4].u8[13];
    _t.u8[11] = (c)->q[4].u8[12];
    _t.u8[12] = (c)->q[4].u8[11];
    _t.u8[13] = (c)->q[4].u8[10];
    _t.u8[14] = (c)->q[4].u8[9];
    _t.u8[15] = (c)->q[4].u8[8];
    (c)->q[4] = _t; }
  /* c23f0: ldr q9, [x27, #0xbb0] */
  arc_q_w(c, 9, arc_ld64((ARC_X_R(c, 27) + INT64_C(2992))), arc_ld64((ARC_X_R(c, 27) + INT64_C(2992)) + 8));
  /* c23f4: ext v1.16b, v1.16b, v1.16b, #8 */
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
  /* c23f8: ext v2.16b, v2.16b, v2.16b, #8 */
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
  /* c23fc: ext v3.16b, v3.16b, v3.16b, #8 */
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
  /* c2400: ext v4.16b, v4.16b, v4.16b, #8 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[4].u8[8];
    _t.u8[1] = (c)->q[4].u8[9];
    _t.u8[2] = (c)->q[4].u8[10];
    _t.u8[3] = (c)->q[4].u8[11];
    _t.u8[4] = (c)->q[4].u8[12];
    _t.u8[5] = (c)->q[4].u8[13];
    _t.u8[6] = (c)->q[4].u8[14];
    _t.u8[7] = (c)->q[4].u8[15];
    _t.u8[8] = (c)->q[4].u8[0];
    _t.u8[9] = (c)->q[4].u8[1];
    _t.u8[10] = (c)->q[4].u8[2];
    _t.u8[11] = (c)->q[4].u8[3];
    _t.u8[12] = (c)->q[4].u8[4];
    _t.u8[13] = (c)->q[4].u8[5];
    _t.u8[14] = (c)->q[4].u8[6];
    _t.u8[15] = (c)->q[4].u8[7];
    (c)->q[4] = _t; }
  /* c2404: cmgt v1.16b, v0.16b, v1.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = ((c)->q[0].i8[0] > (c)->q[1].i8[0]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[1] = ((c)->q[0].i8[1] > (c)->q[1].i8[1]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[2] = ((c)->q[0].i8[2] > (c)->q[1].i8[2]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[3] = ((c)->q[0].i8[3] > (c)->q[1].i8[3]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[4] = ((c)->q[0].i8[4] > (c)->q[1].i8[4]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[5] = ((c)->q[0].i8[5] > (c)->q[1].i8[5]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[6] = ((c)->q[0].i8[6] > (c)->q[1].i8[6]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[7] = ((c)->q[0].i8[7] > (c)->q[1].i8[7]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[8] = ((c)->q[0].i8[8] > (c)->q[1].i8[8]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[9] = ((c)->q[0].i8[9] > (c)->q[1].i8[9]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[10] = ((c)->q[0].i8[10] > (c)->q[1].i8[10]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[11] = ((c)->q[0].i8[11] > (c)->q[1].i8[11]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[12] = ((c)->q[0].i8[12] > (c)->q[1].i8[12]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[13] = ((c)->q[0].i8[13] > (c)->q[1].i8[13]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[14] = ((c)->q[0].i8[14] > (c)->q[1].i8[14]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[15] = ((c)->q[0].i8[15] > (c)->q[1].i8[15]) ? (uint8_t)~(uint8_t)0 : 0;
    (c)->q[1] = _t; }
  /* c2408: cmgt v2.16b, v0.16b, v2.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = ((c)->q[0].i8[0] > (c)->q[2].i8[0]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[1] = ((c)->q[0].i8[1] > (c)->q[2].i8[1]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[2] = ((c)->q[0].i8[2] > (c)->q[2].i8[2]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[3] = ((c)->q[0].i8[3] > (c)->q[2].i8[3]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[4] = ((c)->q[0].i8[4] > (c)->q[2].i8[4]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[5] = ((c)->q[0].i8[5] > (c)->q[2].i8[5]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[6] = ((c)->q[0].i8[6] > (c)->q[2].i8[6]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[7] = ((c)->q[0].i8[7] > (c)->q[2].i8[7]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[8] = ((c)->q[0].i8[8] > (c)->q[2].i8[8]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[9] = ((c)->q[0].i8[9] > (c)->q[2].i8[9]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[10] = ((c)->q[0].i8[10] > (c)->q[2].i8[10]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[11] = ((c)->q[0].i8[11] > (c)->q[2].i8[11]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[12] = ((c)->q[0].i8[12] > (c)->q[2].i8[12]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[13] = ((c)->q[0].i8[13] > (c)->q[2].i8[13]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[14] = ((c)->q[0].i8[14] > (c)->q[2].i8[14]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[15] = ((c)->q[0].i8[15] > (c)->q[2].i8[15]) ? (uint8_t)~(uint8_t)0 : 0;
    (c)->q[2] = _t; }
  /* c240c: cmgt v3.16b, v0.16b, v3.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = ((c)->q[0].i8[0] > (c)->q[3].i8[0]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[1] = ((c)->q[0].i8[1] > (c)->q[3].i8[1]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[2] = ((c)->q[0].i8[2] > (c)->q[3].i8[2]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[3] = ((c)->q[0].i8[3] > (c)->q[3].i8[3]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[4] = ((c)->q[0].i8[4] > (c)->q[3].i8[4]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[5] = ((c)->q[0].i8[5] > (c)->q[3].i8[5]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[6] = ((c)->q[0].i8[6] > (c)->q[3].i8[6]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[7] = ((c)->q[0].i8[7] > (c)->q[3].i8[7]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[8] = ((c)->q[0].i8[8] > (c)->q[3].i8[8]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[9] = ((c)->q[0].i8[9] > (c)->q[3].i8[9]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[10] = ((c)->q[0].i8[10] > (c)->q[3].i8[10]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[11] = ((c)->q[0].i8[11] > (c)->q[3].i8[11]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[12] = ((c)->q[0].i8[12] > (c)->q[3].i8[12]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[13] = ((c)->q[0].i8[13] > (c)->q[3].i8[13]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[14] = ((c)->q[0].i8[14] > (c)->q[3].i8[14]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[15] = ((c)->q[0].i8[15] > (c)->q[3].i8[15]) ? (uint8_t)~(uint8_t)0 : 0;
    (c)->q[3] = _t; }
  /* c2410: sshll2 v5.8h, v1.16b, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = (uint16_t)((int16_t)((c)->q[1].i8[8]) << 0);
    _t.u16[1] = (uint16_t)((int16_t)((c)->q[1].i8[9]) << 0);
    _t.u16[2] = (uint16_t)((int16_t)((c)->q[1].i8[10]) << 0);
    _t.u16[3] = (uint16_t)((int16_t)((c)->q[1].i8[11]) << 0);
    _t.u16[4] = (uint16_t)((int16_t)((c)->q[1].i8[12]) << 0);
    _t.u16[5] = (uint16_t)((int16_t)((c)->q[1].i8[13]) << 0);
    _t.u16[6] = (uint16_t)((int16_t)((c)->q[1].i8[14]) << 0);
    _t.u16[7] = (uint16_t)((int16_t)((c)->q[1].i8[15]) << 0);
    (c)->q[5] = _t; }
  /* c2414: sshll v1.8h, v1.8b, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = (uint16_t)((int16_t)((c)->q[1].i8[0]) << 0);
    _t.u16[1] = (uint16_t)((int16_t)((c)->q[1].i8[1]) << 0);
    _t.u16[2] = (uint16_t)((int16_t)((c)->q[1].i8[2]) << 0);
    _t.u16[3] = (uint16_t)((int16_t)((c)->q[1].i8[3]) << 0);
    _t.u16[4] = (uint16_t)((int16_t)((c)->q[1].i8[4]) << 0);
    _t.u16[5] = (uint16_t)((int16_t)((c)->q[1].i8[5]) << 0);
    _t.u16[6] = (uint16_t)((int16_t)((c)->q[1].i8[6]) << 0);
    _t.u16[7] = (uint16_t)((int16_t)((c)->q[1].i8[7]) << 0);
    (c)->q[1] = _t; }
  /* c2418: sshll2 v6.8h, v2.16b, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = (uint16_t)((int16_t)((c)->q[2].i8[8]) << 0);
    _t.u16[1] = (uint16_t)((int16_t)((c)->q[2].i8[9]) << 0);
    _t.u16[2] = (uint16_t)((int16_t)((c)->q[2].i8[10]) << 0);
    _t.u16[3] = (uint16_t)((int16_t)((c)->q[2].i8[11]) << 0);
    _t.u16[4] = (uint16_t)((int16_t)((c)->q[2].i8[12]) << 0);
    _t.u16[5] = (uint16_t)((int16_t)((c)->q[2].i8[13]) << 0);
    _t.u16[6] = (uint16_t)((int16_t)((c)->q[2].i8[14]) << 0);
    _t.u16[7] = (uint16_t)((int16_t)((c)->q[2].i8[15]) << 0);
    (c)->q[6] = _t; }
  /* c241c: sshll v2.8h, v2.8b, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = (uint16_t)((int16_t)((c)->q[2].i8[0]) << 0);
    _t.u16[1] = (uint16_t)((int16_t)((c)->q[2].i8[1]) << 0);
    _t.u16[2] = (uint16_t)((int16_t)((c)->q[2].i8[2]) << 0);
    _t.u16[3] = (uint16_t)((int16_t)((c)->q[2].i8[3]) << 0);
    _t.u16[4] = (uint16_t)((int16_t)((c)->q[2].i8[4]) << 0);
    _t.u16[5] = (uint16_t)((int16_t)((c)->q[2].i8[5]) << 0);
    _t.u16[6] = (uint16_t)((int16_t)((c)->q[2].i8[6]) << 0);
    _t.u16[7] = (uint16_t)((int16_t)((c)->q[2].i8[7]) << 0);
    (c)->q[2] = _t; }
  /* c2420: sshll v16.4s, v1.4h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[1].i16[0]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[1].i16[1]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[1].i16[2]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[1].i16[3]) << 0);
    (c)->q[16] = _t; }
  /* c2424: sshll2 v1.4s, v1.8h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[1].i16[4]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[1].i16[5]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[1].i16[6]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[1].i16[7]) << 0);
    (c)->q[1] = _t; }
  /* c2428: sshll v17.4s, v6.4h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[6].i16[0]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[6].i16[1]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[6].i16[2]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[6].i16[3]) << 0);
    (c)->q[17] = _t; }
  /* c242c: sshll2 v6.4s, v6.8h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[6].i16[4]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[6].i16[5]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[6].i16[6]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[6].i16[7]) << 0);
    (c)->q[6] = _t; }
  /* c2430: sshll v7.4s, v5.4h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[5].i16[0]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[5].i16[1]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[5].i16[2]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[5].i16[3]) << 0);
    (c)->q[7] = _t; }
  /* c2434: sshll v18.4s, v2.4h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[2].i16[0]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[2].i16[1]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[2].i16[2]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[2].i16[3]) << 0);
    (c)->q[18] = _t; }
  /* c2438: sshll2 v2.4s, v2.8h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[2].i16[4]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[2].i16[5]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[2].i16[6]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[2].i16[7]) << 0);
    (c)->q[2] = _t; }
  /* c243c: sshll2 v5.4s, v5.8h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[5].i16[4]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[5].i16[5]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[5].i16[6]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[5].i16[7]) << 0);
    (c)->q[5] = _t; }
  /* c2440: ushll v22.2d, v1.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[1].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[1].u32[1]) << 0);
    (c)->q[22] = _t; }
  /* c2444: ushll2 v1.2d, v1.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[1].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[1].u32[3]) << 0);
    (c)->q[1] = _t; }
  /* c2448: ushll v20.2d, v16.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[16].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[16].u32[1]) << 0);
    (c)->q[20] = _t; }
  /* c244c: ushll v25.2d, v6.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[6].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[6].u32[1]) << 0);
    (c)->q[25] = _t; }
  /* c2450: ushll2 v27.2d, v6.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[6].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[6].u32[3]) << 0);
    (c)->q[27] = _t; }
  /* c2454: ldur q6, [x29, #-0x60] */
  arc_q_w(c, 6, arc_ld64((ARC_X_R(c, 29) + INT64_C(-96))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-96)) + 8));
  /* c2458: ushll v19.2d, v7.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[7].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[7].u32[1]) << 0);
    (c)->q[19] = _t; }
  /* c245c: ushll v26.2d, v2.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[2].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[2].u32[1]) << 0);
    (c)->q[26] = _t; }
  /* c2460: ushll2 v2.2d, v2.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[2].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[2].u32[3]) << 0);
    (c)->q[2] = _t; }
  /* c2464: and v1.16b, v1.16b, v6.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[1].u8[0] & (c)->q[6].u8[0];
    _t.u8[1] = (c)->q[1].u8[1] & (c)->q[6].u8[1];
    _t.u8[2] = (c)->q[1].u8[2] & (c)->q[6].u8[2];
    _t.u8[3] = (c)->q[1].u8[3] & (c)->q[6].u8[3];
    _t.u8[4] = (c)->q[1].u8[4] & (c)->q[6].u8[4];
    _t.u8[5] = (c)->q[1].u8[5] & (c)->q[6].u8[5];
    _t.u8[6] = (c)->q[1].u8[6] & (c)->q[6].u8[6];
    _t.u8[7] = (c)->q[1].u8[7] & (c)->q[6].u8[7];
    _t.u8[8] = (c)->q[1].u8[8] & (c)->q[6].u8[8];
    _t.u8[9] = (c)->q[1].u8[9] & (c)->q[6].u8[9];
    _t.u8[10] = (c)->q[1].u8[10] & (c)->q[6].u8[10];
    _t.u8[11] = (c)->q[1].u8[11] & (c)->q[6].u8[11];
    _t.u8[12] = (c)->q[1].u8[12] & (c)->q[6].u8[12];
    _t.u8[13] = (c)->q[1].u8[13] & (c)->q[6].u8[13];
    _t.u8[14] = (c)->q[1].u8[14] & (c)->q[6].u8[14];
    _t.u8[15] = (c)->q[1].u8[15] & (c)->q[6].u8[15];
    (c)->q[1] = _t; }
  /* c2468: ldur q6, [x29, #-0x70] */
  arc_q_w(c, 6, arc_ld64((ARC_X_R(c, 29) + INT64_C(-112))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-112)) + 8));
  /* c246c: ushll v21.2d, v5.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[5].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[5].u32[1]) << 0);
    (c)->q[21] = _t; }
  /* c2470: ushll2 v5.2d, v5.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[5].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[5].u32[3]) << 0);
    (c)->q[5] = _t; }
  /* c2474: ushll v23.2d, v17.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[17].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[17].u32[1]) << 0);
    (c)->q[23] = _t; }
  /* c2478: ushll v24.2d, v18.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[18].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[18].u32[1]) << 0);
    (c)->q[24] = _t; }
  /* c247c: and v20.16b, v20.16b, v6.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[20].u8[0] & (c)->q[6].u8[0];
    _t.u8[1] = (c)->q[20].u8[1] & (c)->q[6].u8[1];
    _t.u8[2] = (c)->q[20].u8[2] & (c)->q[6].u8[2];
    _t.u8[3] = (c)->q[20].u8[3] & (c)->q[6].u8[3];
    _t.u8[4] = (c)->q[20].u8[4] & (c)->q[6].u8[4];
    _t.u8[5] = (c)->q[20].u8[5] & (c)->q[6].u8[5];
    _t.u8[6] = (c)->q[20].u8[6] & (c)->q[6].u8[6];
    _t.u8[7] = (c)->q[20].u8[7] & (c)->q[6].u8[7];
    _t.u8[8] = (c)->q[20].u8[8] & (c)->q[6].u8[8];
    _t.u8[9] = (c)->q[20].u8[9] & (c)->q[6].u8[9];
    _t.u8[10] = (c)->q[20].u8[10] & (c)->q[6].u8[10];
    _t.u8[11] = (c)->q[20].u8[11] & (c)->q[6].u8[11];
    _t.u8[12] = (c)->q[20].u8[12] & (c)->q[6].u8[12];
    _t.u8[13] = (c)->q[20].u8[13] & (c)->q[6].u8[13];
    _t.u8[14] = (c)->q[20].u8[14] & (c)->q[6].u8[14];
    _t.u8[15] = (c)->q[20].u8[15] & (c)->q[6].u8[15];
    (c)->q[20] = _t; }
  /* c2480: ldur q6, [x29, #-0x80] */
  arc_q_w(c, 6, arc_ld64((ARC_X_R(c, 29) + INT64_C(-128))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-128)) + 8));
  /* c2484: ushll2 v18.2d, v18.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[18].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[18].u32[3]) << 0);
    (c)->q[18] = _t; }
  /* c2488: ushll2 v17.2d, v17.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[17].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[17].u32[3]) << 0);
    (c)->q[17] = _t; }
  /* c248c: ushll2 v7.2d, v7.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[7].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[7].u32[3]) << 0);
    (c)->q[7] = _t; }
  /* c2490: and v22.16b, v22.16b, v14.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[22].u8[0] & (c)->q[14].u8[0];
    _t.u8[1] = (c)->q[22].u8[1] & (c)->q[14].u8[1];
    _t.u8[2] = (c)->q[22].u8[2] & (c)->q[14].u8[2];
    _t.u8[3] = (c)->q[22].u8[3] & (c)->q[14].u8[3];
    _t.u8[4] = (c)->q[22].u8[4] & (c)->q[14].u8[4];
    _t.u8[5] = (c)->q[22].u8[5] & (c)->q[14].u8[5];
    _t.u8[6] = (c)->q[22].u8[6] & (c)->q[14].u8[6];
    _t.u8[7] = (c)->q[22].u8[7] & (c)->q[14].u8[7];
    _t.u8[8] = (c)->q[22].u8[8] & (c)->q[14].u8[8];
    _t.u8[9] = (c)->q[22].u8[9] & (c)->q[14].u8[9];
    _t.u8[10] = (c)->q[22].u8[10] & (c)->q[14].u8[10];
    _t.u8[11] = (c)->q[22].u8[11] & (c)->q[14].u8[11];
    _t.u8[12] = (c)->q[22].u8[12] & (c)->q[14].u8[12];
    _t.u8[13] = (c)->q[22].u8[13] & (c)->q[14].u8[13];
    _t.u8[14] = (c)->q[22].u8[14] & (c)->q[14].u8[14];
    _t.u8[15] = (c)->q[22].u8[15] & (c)->q[14].u8[15];
    (c)->q[22] = _t; }
  /* c2494: and v19.16b, v19.16b, v6.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[19].u8[0] & (c)->q[6].u8[0];
    _t.u8[1] = (c)->q[19].u8[1] & (c)->q[6].u8[1];
    _t.u8[2] = (c)->q[19].u8[2] & (c)->q[6].u8[2];
    _t.u8[3] = (c)->q[19].u8[3] & (c)->q[6].u8[3];
    _t.u8[4] = (c)->q[19].u8[4] & (c)->q[6].u8[4];
    _t.u8[5] = (c)->q[19].u8[5] & (c)->q[6].u8[5];
    _t.u8[6] = (c)->q[19].u8[6] & (c)->q[6].u8[6];
    _t.u8[7] = (c)->q[19].u8[7] & (c)->q[6].u8[7];
    _t.u8[8] = (c)->q[19].u8[8] & (c)->q[6].u8[8];
    _t.u8[9] = (c)->q[19].u8[9] & (c)->q[6].u8[9];
    _t.u8[10] = (c)->q[19].u8[10] & (c)->q[6].u8[10];
    _t.u8[11] = (c)->q[19].u8[11] & (c)->q[6].u8[11];
    _t.u8[12] = (c)->q[19].u8[12] & (c)->q[6].u8[12];
    _t.u8[13] = (c)->q[19].u8[13] & (c)->q[6].u8[13];
    _t.u8[14] = (c)->q[19].u8[14] & (c)->q[6].u8[14];
    _t.u8[15] = (c)->q[19].u8[15] & (c)->q[6].u8[15];
    (c)->q[19] = _t; }
  /* c2498: ldur q6, [x29, #-0x90] */
  arc_q_w(c, 6, arc_ld64((ARC_X_R(c, 29) + INT64_C(-144))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-144)) + 8));
  /* c249c: and v28.16b, v5.16b, v11.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[5].u8[0] & (c)->q[11].u8[0];
    _t.u8[1] = (c)->q[5].u8[1] & (c)->q[11].u8[1];
    _t.u8[2] = (c)->q[5].u8[2] & (c)->q[11].u8[2];
    _t.u8[3] = (c)->q[5].u8[3] & (c)->q[11].u8[3];
    _t.u8[4] = (c)->q[5].u8[4] & (c)->q[11].u8[4];
    _t.u8[5] = (c)->q[5].u8[5] & (c)->q[11].u8[5];
    _t.u8[6] = (c)->q[5].u8[6] & (c)->q[11].u8[6];
    _t.u8[7] = (c)->q[5].u8[7] & (c)->q[11].u8[7];
    _t.u8[8] = (c)->q[5].u8[8] & (c)->q[11].u8[8];
    _t.u8[9] = (c)->q[5].u8[9] & (c)->q[11].u8[9];
    _t.u8[10] = (c)->q[5].u8[10] & (c)->q[11].u8[10];
    _t.u8[11] = (c)->q[5].u8[11] & (c)->q[11].u8[11];
    _t.u8[12] = (c)->q[5].u8[12] & (c)->q[11].u8[12];
    _t.u8[13] = (c)->q[5].u8[13] & (c)->q[11].u8[13];
    _t.u8[14] = (c)->q[5].u8[14] & (c)->q[11].u8[14];
    _t.u8[15] = (c)->q[5].u8[15] & (c)->q[11].u8[15];
    (c)->q[28] = _t; }
  /* c24a0: and v5.16b, v21.16b, v15.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[21].u8[0] & (c)->q[15].u8[0];
    _t.u8[1] = (c)->q[21].u8[1] & (c)->q[15].u8[1];
    _t.u8[2] = (c)->q[21].u8[2] & (c)->q[15].u8[2];
    _t.u8[3] = (c)->q[21].u8[3] & (c)->q[15].u8[3];
    _t.u8[4] = (c)->q[21].u8[4] & (c)->q[15].u8[4];
    _t.u8[5] = (c)->q[21].u8[5] & (c)->q[15].u8[5];
    _t.u8[6] = (c)->q[21].u8[6] & (c)->q[15].u8[6];
    _t.u8[7] = (c)->q[21].u8[7] & (c)->q[15].u8[7];
    _t.u8[8] = (c)->q[21].u8[8] & (c)->q[15].u8[8];
    _t.u8[9] = (c)->q[21].u8[9] & (c)->q[15].u8[9];
    _t.u8[10] = (c)->q[21].u8[10] & (c)->q[15].u8[10];
    _t.u8[11] = (c)->q[21].u8[11] & (c)->q[15].u8[11];
    _t.u8[12] = (c)->q[21].u8[12] & (c)->q[15].u8[12];
    _t.u8[13] = (c)->q[21].u8[13] & (c)->q[15].u8[13];
    _t.u8[14] = (c)->q[21].u8[14] & (c)->q[15].u8[14];
    _t.u8[15] = (c)->q[21].u8[15] & (c)->q[15].u8[15];
    (c)->q[5] = _t; }
  /* c24a4: ushll2 v16.2d, v16.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[16].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[16].u32[3]) << 0);
    (c)->q[16] = _t; }
  /* c24a8: and v6.16b, v2.16b, v6.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[2].u8[0] & (c)->q[6].u8[0];
    _t.u8[1] = (c)->q[2].u8[1] & (c)->q[6].u8[1];
    _t.u8[2] = (c)->q[2].u8[2] & (c)->q[6].u8[2];
    _t.u8[3] = (c)->q[2].u8[3] & (c)->q[6].u8[3];
    _t.u8[4] = (c)->q[2].u8[4] & (c)->q[6].u8[4];
    _t.u8[5] = (c)->q[2].u8[5] & (c)->q[6].u8[5];
    _t.u8[6] = (c)->q[2].u8[6] & (c)->q[6].u8[6];
    _t.u8[7] = (c)->q[2].u8[7] & (c)->q[6].u8[7];
    _t.u8[8] = (c)->q[2].u8[8] & (c)->q[6].u8[8];
    _t.u8[9] = (c)->q[2].u8[9] & (c)->q[6].u8[9];
    _t.u8[10] = (c)->q[2].u8[10] & (c)->q[6].u8[10];
    _t.u8[11] = (c)->q[2].u8[11] & (c)->q[6].u8[11];
    _t.u8[12] = (c)->q[2].u8[12] & (c)->q[6].u8[12];
    _t.u8[13] = (c)->q[2].u8[13] & (c)->q[6].u8[13];
    _t.u8[14] = (c)->q[2].u8[14] & (c)->q[6].u8[14];
    _t.u8[15] = (c)->q[2].u8[15] & (c)->q[6].u8[15];
    (c)->q[6] = _t; }
  /* c24ac: ldur q2, [x29, #-0xa0] */
  arc_q_w(c, 2, arc_ld64((ARC_X_R(c, 29) + INT64_C(-160))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-160)) + 8));
  /* c24b0: and v7.16b, v7.16b, v13.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[7].u8[0] & (c)->q[13].u8[0];
    _t.u8[1] = (c)->q[7].u8[1] & (c)->q[13].u8[1];
    _t.u8[2] = (c)->q[7].u8[2] & (c)->q[13].u8[2];
    _t.u8[3] = (c)->q[7].u8[3] & (c)->q[13].u8[3];
    _t.u8[4] = (c)->q[7].u8[4] & (c)->q[13].u8[4];
    _t.u8[5] = (c)->q[7].u8[5] & (c)->q[13].u8[5];
    _t.u8[6] = (c)->q[7].u8[6] & (c)->q[13].u8[6];
    _t.u8[7] = (c)->q[7].u8[7] & (c)->q[13].u8[7];
    _t.u8[8] = (c)->q[7].u8[8] & (c)->q[13].u8[8];
    _t.u8[9] = (c)->q[7].u8[9] & (c)->q[13].u8[9];
    _t.u8[10] = (c)->q[7].u8[10] & (c)->q[13].u8[10];
    _t.u8[11] = (c)->q[7].u8[11] & (c)->q[13].u8[11];
    _t.u8[12] = (c)->q[7].u8[12] & (c)->q[13].u8[12];
    _t.u8[13] = (c)->q[7].u8[13] & (c)->q[13].u8[13];
    _t.u8[14] = (c)->q[7].u8[14] & (c)->q[13].u8[14];
    _t.u8[15] = (c)->q[7].u8[15] & (c)->q[13].u8[15];
    (c)->q[7] = _t; }
  /* c24b4: and v21.16b, v27.16b, v2.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[27].u8[0] & (c)->q[2].u8[0];
    _t.u8[1] = (c)->q[27].u8[1] & (c)->q[2].u8[1];
    _t.u8[2] = (c)->q[27].u8[2] & (c)->q[2].u8[2];
    _t.u8[3] = (c)->q[27].u8[3] & (c)->q[2].u8[3];
    _t.u8[4] = (c)->q[27].u8[4] & (c)->q[2].u8[4];
    _t.u8[5] = (c)->q[27].u8[5] & (c)->q[2].u8[5];
    _t.u8[6] = (c)->q[27].u8[6] & (c)->q[2].u8[6];
    _t.u8[7] = (c)->q[27].u8[7] & (c)->q[2].u8[7];
    _t.u8[8] = (c)->q[27].u8[8] & (c)->q[2].u8[8];
    _t.u8[9] = (c)->q[27].u8[9] & (c)->q[2].u8[9];
    _t.u8[10] = (c)->q[27].u8[10] & (c)->q[2].u8[10];
    _t.u8[11] = (c)->q[27].u8[11] & (c)->q[2].u8[11];
    _t.u8[12] = (c)->q[27].u8[12] & (c)->q[2].u8[12];
    _t.u8[13] = (c)->q[27].u8[13] & (c)->q[2].u8[13];
    _t.u8[14] = (c)->q[27].u8[14] & (c)->q[2].u8[14];
    _t.u8[15] = (c)->q[27].u8[15] & (c)->q[2].u8[15];
    (c)->q[21] = _t; }
  /* c24b8: ldur q2, [x29, #-0x100] */
  arc_q_w(c, 2, arc_ld64((ARC_X_R(c, 29) + INT64_C(-256))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-256)) + 8));
  /* c24bc: sshll v27.8h, v3.8b, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = (uint16_t)((int16_t)((c)->q[3].i8[0]) << 0);
    _t.u16[1] = (uint16_t)((int16_t)((c)->q[3].i8[1]) << 0);
    _t.u16[2] = (uint16_t)((int16_t)((c)->q[3].i8[2]) << 0);
    _t.u16[3] = (uint16_t)((int16_t)((c)->q[3].i8[3]) << 0);
    _t.u16[4] = (uint16_t)((int16_t)((c)->q[3].i8[4]) << 0);
    _t.u16[5] = (uint16_t)((int16_t)((c)->q[3].i8[5]) << 0);
    _t.u16[6] = (uint16_t)((int16_t)((c)->q[3].i8[6]) << 0);
    _t.u16[7] = (uint16_t)((int16_t)((c)->q[3].i8[7]) << 0);
    (c)->q[27] = _t; }
  /* c24c0: and v16.16b, v16.16b, v12.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[16].u8[0] & (c)->q[12].u8[0];
    _t.u8[1] = (c)->q[16].u8[1] & (c)->q[12].u8[1];
    _t.u8[2] = (c)->q[16].u8[2] & (c)->q[12].u8[2];
    _t.u8[3] = (c)->q[16].u8[3] & (c)->q[12].u8[3];
    _t.u8[4] = (c)->q[16].u8[4] & (c)->q[12].u8[4];
    _t.u8[5] = (c)->q[16].u8[5] & (c)->q[12].u8[5];
    _t.u8[6] = (c)->q[16].u8[6] & (c)->q[12].u8[6];
    _t.u8[7] = (c)->q[16].u8[7] & (c)->q[12].u8[7];
    _t.u8[8] = (c)->q[16].u8[8] & (c)->q[12].u8[8];
    _t.u8[9] = (c)->q[16].u8[9] & (c)->q[12].u8[9];
    _t.u8[10] = (c)->q[16].u8[10] & (c)->q[12].u8[10];
    _t.u8[11] = (c)->q[16].u8[11] & (c)->q[12].u8[11];
    _t.u8[12] = (c)->q[16].u8[12] & (c)->q[12].u8[12];
    _t.u8[13] = (c)->q[16].u8[13] & (c)->q[12].u8[13];
    _t.u8[14] = (c)->q[16].u8[14] & (c)->q[12].u8[14];
    _t.u8[15] = (c)->q[16].u8[15] & (c)->q[12].u8[15];
    (c)->q[16] = _t; }
  /* c24c4: orr v1.16b, v6.16b, v1.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[6].u8[0] | (c)->q[1].u8[0];
    _t.u8[1] = (c)->q[6].u8[1] | (c)->q[1].u8[1];
    _t.u8[2] = (c)->q[6].u8[2] | (c)->q[1].u8[2];
    _t.u8[3] = (c)->q[6].u8[3] | (c)->q[1].u8[3];
    _t.u8[4] = (c)->q[6].u8[4] | (c)->q[1].u8[4];
    _t.u8[5] = (c)->q[6].u8[5] | (c)->q[1].u8[5];
    _t.u8[6] = (c)->q[6].u8[6] | (c)->q[1].u8[6];
    _t.u8[7] = (c)->q[6].u8[7] | (c)->q[1].u8[7];
    _t.u8[8] = (c)->q[6].u8[8] | (c)->q[1].u8[8];
    _t.u8[9] = (c)->q[6].u8[9] | (c)->q[1].u8[9];
    _t.u8[10] = (c)->q[6].u8[10] | (c)->q[1].u8[10];
    _t.u8[11] = (c)->q[6].u8[11] | (c)->q[1].u8[11];
    _t.u8[12] = (c)->q[6].u8[12] | (c)->q[1].u8[12];
    _t.u8[13] = (c)->q[6].u8[13] | (c)->q[1].u8[13];
    _t.u8[14] = (c)->q[6].u8[14] | (c)->q[1].u8[14];
    _t.u8[15] = (c)->q[6].u8[15] | (c)->q[1].u8[15];
    (c)->q[1] = _t; }
  /* c24c8: and v2.16b, v23.16b, v2.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[23].u8[0] & (c)->q[2].u8[0];
    _t.u8[1] = (c)->q[23].u8[1] & (c)->q[2].u8[1];
    _t.u8[2] = (c)->q[23].u8[2] & (c)->q[2].u8[2];
    _t.u8[3] = (c)->q[23].u8[3] & (c)->q[2].u8[3];
    _t.u8[4] = (c)->q[23].u8[4] & (c)->q[2].u8[4];
    _t.u8[5] = (c)->q[23].u8[5] & (c)->q[2].u8[5];
    _t.u8[6] = (c)->q[23].u8[6] & (c)->q[2].u8[6];
    _t.u8[7] = (c)->q[23].u8[7] & (c)->q[2].u8[7];
    _t.u8[8] = (c)->q[23].u8[8] & (c)->q[2].u8[8];
    _t.u8[9] = (c)->q[23].u8[9] & (c)->q[2].u8[9];
    _t.u8[10] = (c)->q[23].u8[10] & (c)->q[2].u8[10];
    _t.u8[11] = (c)->q[23].u8[11] & (c)->q[2].u8[11];
    _t.u8[12] = (c)->q[23].u8[12] & (c)->q[2].u8[12];
    _t.u8[13] = (c)->q[23].u8[13] & (c)->q[2].u8[13];
    _t.u8[14] = (c)->q[23].u8[14] & (c)->q[2].u8[14];
    _t.u8[15] = (c)->q[23].u8[15] & (c)->q[2].u8[15];
    (c)->q[2] = _t; }
  /* c24cc: ldur q23, [x29, #-0xe0] */
  arc_q_w(c, 23, arc_ld64((ARC_X_R(c, 29) + INT64_C(-224))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-224)) + 8));
  /* c24d0: and v23.16b, v25.16b, v23.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[25].u8[0] & (c)->q[23].u8[0];
    _t.u8[1] = (c)->q[25].u8[1] & (c)->q[23].u8[1];
    _t.u8[2] = (c)->q[25].u8[2] & (c)->q[23].u8[2];
    _t.u8[3] = (c)->q[25].u8[3] & (c)->q[23].u8[3];
    _t.u8[4] = (c)->q[25].u8[4] & (c)->q[23].u8[4];
    _t.u8[5] = (c)->q[25].u8[5] & (c)->q[23].u8[5];
    _t.u8[6] = (c)->q[25].u8[6] & (c)->q[23].u8[6];
    _t.u8[7] = (c)->q[25].u8[7] & (c)->q[23].u8[7];
    _t.u8[8] = (c)->q[25].u8[8] & (c)->q[23].u8[8];
    _t.u8[9] = (c)->q[25].u8[9] & (c)->q[23].u8[9];
    _t.u8[10] = (c)->q[25].u8[10] & (c)->q[23].u8[10];
    _t.u8[11] = (c)->q[25].u8[11] & (c)->q[23].u8[11];
    _t.u8[12] = (c)->q[25].u8[12] & (c)->q[23].u8[12];
    _t.u8[13] = (c)->q[25].u8[13] & (c)->q[23].u8[13];
    _t.u8[14] = (c)->q[25].u8[14] & (c)->q[23].u8[14];
    _t.u8[15] = (c)->q[25].u8[15] & (c)->q[23].u8[15];
    (c)->q[23] = _t; }
  /* c24d4: ldur q25, [x29, #-0xf0] */
  arc_q_w(c, 25, arc_ld64((ARC_X_R(c, 29) + INT64_C(-240))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-240)) + 8));
  /* c24d8: orr v2.16b, v2.16b, v19.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[2].u8[0] | (c)->q[19].u8[0];
    _t.u8[1] = (c)->q[2].u8[1] | (c)->q[19].u8[1];
    _t.u8[2] = (c)->q[2].u8[2] | (c)->q[19].u8[2];
    _t.u8[3] = (c)->q[2].u8[3] | (c)->q[19].u8[3];
    _t.u8[4] = (c)->q[2].u8[4] | (c)->q[19].u8[4];
    _t.u8[5] = (c)->q[2].u8[5] | (c)->q[19].u8[5];
    _t.u8[6] = (c)->q[2].u8[6] | (c)->q[19].u8[6];
    _t.u8[7] = (c)->q[2].u8[7] | (c)->q[19].u8[7];
    _t.u8[8] = (c)->q[2].u8[8] | (c)->q[19].u8[8];
    _t.u8[9] = (c)->q[2].u8[9] | (c)->q[19].u8[9];
    _t.u8[10] = (c)->q[2].u8[10] | (c)->q[19].u8[10];
    _t.u8[11] = (c)->q[2].u8[11] | (c)->q[19].u8[11];
    _t.u8[12] = (c)->q[2].u8[12] | (c)->q[19].u8[12];
    _t.u8[13] = (c)->q[2].u8[13] | (c)->q[19].u8[13];
    _t.u8[14] = (c)->q[2].u8[14] | (c)->q[19].u8[14];
    _t.u8[15] = (c)->q[2].u8[15] | (c)->q[19].u8[15];
    (c)->q[2] = _t; }
  /* c24dc: sshll2 v19.8h, v3.16b, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = (uint16_t)((int16_t)((c)->q[3].i8[8]) << 0);
    _t.u16[1] = (uint16_t)((int16_t)((c)->q[3].i8[9]) << 0);
    _t.u16[2] = (uint16_t)((int16_t)((c)->q[3].i8[10]) << 0);
    _t.u16[3] = (uint16_t)((int16_t)((c)->q[3].i8[11]) << 0);
    _t.u16[4] = (uint16_t)((int16_t)((c)->q[3].i8[12]) << 0);
    _t.u16[5] = (uint16_t)((int16_t)((c)->q[3].i8[13]) << 0);
    _t.u16[6] = (uint16_t)((int16_t)((c)->q[3].i8[14]) << 0);
    _t.u16[7] = (uint16_t)((int16_t)((c)->q[3].i8[15]) << 0);
    (c)->q[19] = _t; }
  /* c24e0: and v24.16b, v24.16b, v25.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[24].u8[0] & (c)->q[25].u8[0];
    _t.u8[1] = (c)->q[24].u8[1] & (c)->q[25].u8[1];
    _t.u8[2] = (c)->q[24].u8[2] & (c)->q[25].u8[2];
    _t.u8[3] = (c)->q[24].u8[3] & (c)->q[25].u8[3];
    _t.u8[4] = (c)->q[24].u8[4] & (c)->q[25].u8[4];
    _t.u8[5] = (c)->q[24].u8[5] & (c)->q[25].u8[5];
    _t.u8[6] = (c)->q[24].u8[6] & (c)->q[25].u8[6];
    _t.u8[7] = (c)->q[24].u8[7] & (c)->q[25].u8[7];
    _t.u8[8] = (c)->q[24].u8[8] & (c)->q[25].u8[8];
    _t.u8[9] = (c)->q[24].u8[9] & (c)->q[25].u8[9];
    _t.u8[10] = (c)->q[24].u8[10] & (c)->q[25].u8[10];
    _t.u8[11] = (c)->q[24].u8[11] & (c)->q[25].u8[11];
    _t.u8[12] = (c)->q[24].u8[12] & (c)->q[25].u8[12];
    _t.u8[13] = (c)->q[24].u8[13] & (c)->q[25].u8[13];
    _t.u8[14] = (c)->q[24].u8[14] & (c)->q[25].u8[14];
    _t.u8[15] = (c)->q[24].u8[15] & (c)->q[25].u8[15];
    (c)->q[24] = _t; }
  /* c24e4: cmgt v25.16b, v0.16b, v4.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = ((c)->q[0].i8[0] > (c)->q[4].i8[0]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[1] = ((c)->q[0].i8[1] > (c)->q[4].i8[1]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[2] = ((c)->q[0].i8[2] > (c)->q[4].i8[2]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[3] = ((c)->q[0].i8[3] > (c)->q[4].i8[3]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[4] = ((c)->q[0].i8[4] > (c)->q[4].i8[4]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[5] = ((c)->q[0].i8[5] > (c)->q[4].i8[5]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[6] = ((c)->q[0].i8[6] > (c)->q[4].i8[6]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[7] = ((c)->q[0].i8[7] > (c)->q[4].i8[7]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[8] = ((c)->q[0].i8[8] > (c)->q[4].i8[8]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[9] = ((c)->q[0].i8[9] > (c)->q[4].i8[9]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[10] = ((c)->q[0].i8[10] > (c)->q[4].i8[10]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[11] = ((c)->q[0].i8[11] > (c)->q[4].i8[11]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[12] = ((c)->q[0].i8[12] > (c)->q[4].i8[12]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[13] = ((c)->q[0].i8[13] > (c)->q[4].i8[13]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[14] = ((c)->q[0].i8[14] > (c)->q[4].i8[14]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[15] = ((c)->q[0].i8[15] > (c)->q[4].i8[15]) ? (uint8_t)~(uint8_t)0 : 0;
    (c)->q[25] = _t; }
  /* c24e8: ldur q4, [x29, #-0xb0] */
  arc_q_w(c, 4, arc_ld64((ARC_X_R(c, 29) + INT64_C(-176))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-176)) + 8));
  /* c24ec: orr v5.16b, v23.16b, v5.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[23].u8[0] | (c)->q[5].u8[0];
    _t.u8[1] = (c)->q[23].u8[1] | (c)->q[5].u8[1];
    _t.u8[2] = (c)->q[23].u8[2] | (c)->q[5].u8[2];
    _t.u8[3] = (c)->q[23].u8[3] | (c)->q[5].u8[3];
    _t.u8[4] = (c)->q[23].u8[4] | (c)->q[5].u8[4];
    _t.u8[5] = (c)->q[23].u8[5] | (c)->q[5].u8[5];
    _t.u8[6] = (c)->q[23].u8[6] | (c)->q[5].u8[6];
    _t.u8[7] = (c)->q[23].u8[7] | (c)->q[5].u8[7];
    _t.u8[8] = (c)->q[23].u8[8] | (c)->q[5].u8[8];
    _t.u8[9] = (c)->q[23].u8[9] | (c)->q[5].u8[9];
    _t.u8[10] = (c)->q[23].u8[10] | (c)->q[5].u8[10];
    _t.u8[11] = (c)->q[23].u8[11] | (c)->q[5].u8[11];
    _t.u8[12] = (c)->q[23].u8[12] | (c)->q[5].u8[12];
    _t.u8[13] = (c)->q[23].u8[13] | (c)->q[5].u8[13];
    _t.u8[14] = (c)->q[23].u8[14] | (c)->q[5].u8[14];
    _t.u8[15] = (c)->q[23].u8[15] | (c)->q[5].u8[15];
    (c)->q[5] = _t; }
  /* c24f0: and v18.16b, v18.16b, v4.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[18].u8[0] & (c)->q[4].u8[0];
    _t.u8[1] = (c)->q[18].u8[1] & (c)->q[4].u8[1];
    _t.u8[2] = (c)->q[18].u8[2] & (c)->q[4].u8[2];
    _t.u8[3] = (c)->q[18].u8[3] & (c)->q[4].u8[3];
    _t.u8[4] = (c)->q[18].u8[4] & (c)->q[4].u8[4];
    _t.u8[5] = (c)->q[18].u8[5] & (c)->q[4].u8[5];
    _t.u8[6] = (c)->q[18].u8[6] & (c)->q[4].u8[6];
    _t.u8[7] = (c)->q[18].u8[7] & (c)->q[4].u8[7];
    _t.u8[8] = (c)->q[18].u8[8] & (c)->q[4].u8[8];
    _t.u8[9] = (c)->q[18].u8[9] & (c)->q[4].u8[9];
    _t.u8[10] = (c)->q[18].u8[10] & (c)->q[4].u8[10];
    _t.u8[11] = (c)->q[18].u8[11] & (c)->q[4].u8[11];
    _t.u8[12] = (c)->q[18].u8[12] & (c)->q[4].u8[12];
    _t.u8[13] = (c)->q[18].u8[13] & (c)->q[4].u8[13];
    _t.u8[14] = (c)->q[18].u8[14] & (c)->q[4].u8[14];
    _t.u8[15] = (c)->q[18].u8[15] & (c)->q[4].u8[15];
    (c)->q[18] = _t; }
  /* c24f4: ldur q4, [x29, #-0xd0] */
  arc_q_w(c, 4, arc_ld64((ARC_X_R(c, 29) + INT64_C(-208))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-208)) + 8));
  /* c24f8: sshll v23.8h, v25.8b, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = (uint16_t)((int16_t)((c)->q[25].i8[0]) << 0);
    _t.u16[1] = (uint16_t)((int16_t)((c)->q[25].i8[1]) << 0);
    _t.u16[2] = (uint16_t)((int16_t)((c)->q[25].i8[2]) << 0);
    _t.u16[3] = (uint16_t)((int16_t)((c)->q[25].i8[3]) << 0);
    _t.u16[4] = (uint16_t)((int16_t)((c)->q[25].i8[4]) << 0);
    _t.u16[5] = (uint16_t)((int16_t)((c)->q[25].i8[5]) << 0);
    _t.u16[6] = (uint16_t)((int16_t)((c)->q[25].i8[6]) << 0);
    _t.u16[7] = (uint16_t)((int16_t)((c)->q[25].i8[7]) << 0);
    (c)->q[23] = _t; }
  /* c24fc: and v26.16b, v26.16b, v4.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[26].u8[0] & (c)->q[4].u8[0];
    _t.u8[1] = (c)->q[26].u8[1] & (c)->q[4].u8[1];
    _t.u8[2] = (c)->q[26].u8[2] & (c)->q[4].u8[2];
    _t.u8[3] = (c)->q[26].u8[3] & (c)->q[4].u8[3];
    _t.u8[4] = (c)->q[26].u8[4] & (c)->q[4].u8[4];
    _t.u8[5] = (c)->q[26].u8[5] & (c)->q[4].u8[5];
    _t.u8[6] = (c)->q[26].u8[6] & (c)->q[4].u8[6];
    _t.u8[7] = (c)->q[26].u8[7] & (c)->q[4].u8[7];
    _t.u8[8] = (c)->q[26].u8[8] & (c)->q[4].u8[8];
    _t.u8[9] = (c)->q[26].u8[9] & (c)->q[4].u8[9];
    _t.u8[10] = (c)->q[26].u8[10] & (c)->q[4].u8[10];
    _t.u8[11] = (c)->q[26].u8[11] & (c)->q[4].u8[11];
    _t.u8[12] = (c)->q[26].u8[12] & (c)->q[4].u8[12];
    _t.u8[13] = (c)->q[26].u8[13] & (c)->q[4].u8[13];
    _t.u8[14] = (c)->q[26].u8[14] & (c)->q[4].u8[14];
    _t.u8[15] = (c)->q[26].u8[15] & (c)->q[4].u8[15];
    (c)->q[26] = _t; }
  /* c2500: ldur q4, [x29, #-0xc0] */
  arc_q_w(c, 4, arc_ld64((ARC_X_R(c, 29) + INT64_C(-192))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-192)) + 8));
  /* c2504: orr v16.16b, v18.16b, v16.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[18].u8[0] | (c)->q[16].u8[0];
    _t.u8[1] = (c)->q[18].u8[1] | (c)->q[16].u8[1];
    _t.u8[2] = (c)->q[18].u8[2] | (c)->q[16].u8[2];
    _t.u8[3] = (c)->q[18].u8[3] | (c)->q[16].u8[3];
    _t.u8[4] = (c)->q[18].u8[4] | (c)->q[16].u8[4];
    _t.u8[5] = (c)->q[18].u8[5] | (c)->q[16].u8[5];
    _t.u8[6] = (c)->q[18].u8[6] | (c)->q[16].u8[6];
    _t.u8[7] = (c)->q[18].u8[7] | (c)->q[16].u8[7];
    _t.u8[8] = (c)->q[18].u8[8] | (c)->q[16].u8[8];
    _t.u8[9] = (c)->q[18].u8[9] | (c)->q[16].u8[9];
    _t.u8[10] = (c)->q[18].u8[10] | (c)->q[16].u8[10];
    _t.u8[11] = (c)->q[18].u8[11] | (c)->q[16].u8[11];
    _t.u8[12] = (c)->q[18].u8[12] | (c)->q[16].u8[12];
    _t.u8[13] = (c)->q[18].u8[13] | (c)->q[16].u8[13];
    _t.u8[14] = (c)->q[18].u8[14] | (c)->q[16].u8[14];
    _t.u8[15] = (c)->q[18].u8[15] | (c)->q[16].u8[15];
    (c)->q[16] = _t; }
  /* c2508: and v17.16b, v17.16b, v4.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[17].u8[0] & (c)->q[4].u8[0];
    _t.u8[1] = (c)->q[17].u8[1] & (c)->q[4].u8[1];
    _t.u8[2] = (c)->q[17].u8[2] & (c)->q[4].u8[2];
    _t.u8[3] = (c)->q[17].u8[3] & (c)->q[4].u8[3];
    _t.u8[4] = (c)->q[17].u8[4] & (c)->q[4].u8[4];
    _t.u8[5] = (c)->q[17].u8[5] & (c)->q[4].u8[5];
    _t.u8[6] = (c)->q[17].u8[6] & (c)->q[4].u8[6];
    _t.u8[7] = (c)->q[17].u8[7] & (c)->q[4].u8[7];
    _t.u8[8] = (c)->q[17].u8[8] & (c)->q[4].u8[8];
    _t.u8[9] = (c)->q[17].u8[9] & (c)->q[4].u8[9];
    _t.u8[10] = (c)->q[17].u8[10] & (c)->q[4].u8[10];
    _t.u8[11] = (c)->q[17].u8[11] & (c)->q[4].u8[11];
    _t.u8[12] = (c)->q[17].u8[12] & (c)->q[4].u8[12];
    _t.u8[13] = (c)->q[17].u8[13] & (c)->q[4].u8[13];
    _t.u8[14] = (c)->q[17].u8[14] & (c)->q[4].u8[14];
    _t.u8[15] = (c)->q[17].u8[15] & (c)->q[4].u8[15];
    (c)->q[17] = _t; }
  /* c250c: orr v4.16b, v24.16b, v20.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[24].u8[0] | (c)->q[20].u8[0];
    _t.u8[1] = (c)->q[24].u8[1] | (c)->q[20].u8[1];
    _t.u8[2] = (c)->q[24].u8[2] | (c)->q[20].u8[2];
    _t.u8[3] = (c)->q[24].u8[3] | (c)->q[20].u8[3];
    _t.u8[4] = (c)->q[24].u8[4] | (c)->q[20].u8[4];
    _t.u8[5] = (c)->q[24].u8[5] | (c)->q[20].u8[5];
    _t.u8[6] = (c)->q[24].u8[6] | (c)->q[20].u8[6];
    _t.u8[7] = (c)->q[24].u8[7] | (c)->q[20].u8[7];
    _t.u8[8] = (c)->q[24].u8[8] | (c)->q[20].u8[8];
    _t.u8[9] = (c)->q[24].u8[9] | (c)->q[20].u8[9];
    _t.u8[10] = (c)->q[24].u8[10] | (c)->q[20].u8[10];
    _t.u8[11] = (c)->q[24].u8[11] | (c)->q[20].u8[11];
    _t.u8[12] = (c)->q[24].u8[12] | (c)->q[20].u8[12];
    _t.u8[13] = (c)->q[24].u8[13] | (c)->q[20].u8[13];
    _t.u8[14] = (c)->q[24].u8[14] | (c)->q[20].u8[14];
    _t.u8[15] = (c)->q[24].u8[15] | (c)->q[20].u8[15];
    (c)->q[4] = _t; }
  /* c2510: sshll2 v24.4s, v19.8h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[19].i16[4]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[19].i16[5]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[19].i16[6]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[19].i16[7]) << 0);
    (c)->q[24] = _t; }
  /* c2514: sshll v19.4s, v19.4h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[19].i16[0]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[19].i16[1]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[19].i16[2]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[19].i16[3]) << 0);
    (c)->q[19] = _t; }
  /* c2518: sshll2 v20.8h, v25.16b, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = (uint16_t)((int16_t)((c)->q[25].i8[8]) << 0);
    _t.u16[1] = (uint16_t)((int16_t)((c)->q[25].i8[9]) << 0);
    _t.u16[2] = (uint16_t)((int16_t)((c)->q[25].i8[10]) << 0);
    _t.u16[3] = (uint16_t)((int16_t)((c)->q[25].i8[11]) << 0);
    _t.u16[4] = (uint16_t)((int16_t)((c)->q[25].i8[12]) << 0);
    _t.u16[5] = (uint16_t)((int16_t)((c)->q[25].i8[13]) << 0);
    _t.u16[6] = (uint16_t)((int16_t)((c)->q[25].i8[14]) << 0);
    _t.u16[7] = (uint16_t)((int16_t)((c)->q[25].i8[15]) << 0);
    (c)->q[20] = _t; }
  /* c251c: sshll v25.4s, v27.4h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[27].i16[0]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[27].i16[1]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[27].i16[2]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[27].i16[3]) << 0);
    (c)->q[25] = _t; }
  /* c2520: orr v3.16b, v26.16b, v22.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[26].u8[0] | (c)->q[22].u8[0];
    _t.u8[1] = (c)->q[26].u8[1] | (c)->q[22].u8[1];
    _t.u8[2] = (c)->q[26].u8[2] | (c)->q[22].u8[2];
    _t.u8[3] = (c)->q[26].u8[3] | (c)->q[22].u8[3];
    _t.u8[4] = (c)->q[26].u8[4] | (c)->q[22].u8[4];
    _t.u8[5] = (c)->q[26].u8[5] | (c)->q[22].u8[5];
    _t.u8[6] = (c)->q[26].u8[6] | (c)->q[22].u8[6];
    _t.u8[7] = (c)->q[26].u8[7] | (c)->q[22].u8[7];
    _t.u8[8] = (c)->q[26].u8[8] | (c)->q[22].u8[8];
    _t.u8[9] = (c)->q[26].u8[9] | (c)->q[22].u8[9];
    _t.u8[10] = (c)->q[26].u8[10] | (c)->q[22].u8[10];
    _t.u8[11] = (c)->q[26].u8[11] | (c)->q[22].u8[11];
    _t.u8[12] = (c)->q[26].u8[12] | (c)->q[22].u8[12];
    _t.u8[13] = (c)->q[26].u8[13] | (c)->q[22].u8[13];
    _t.u8[14] = (c)->q[26].u8[14] | (c)->q[22].u8[14];
    _t.u8[15] = (c)->q[26].u8[15] | (c)->q[22].u8[15];
    (c)->q[3] = _t; }
  /* c2524: sshll2 v22.4s, v27.8h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[27].i16[4]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[27].i16[5]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[27].i16[6]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[27].i16[7]) << 0);
    (c)->q[22] = _t; }
  /* c2528: sshll v26.4s, v23.4h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[23].i16[0]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[23].i16[1]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[23].i16[2]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[23].i16[3]) << 0);
    (c)->q[26] = _t; }
  /* c252c: orr v7.16b, v17.16b, v7.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[17].u8[0] | (c)->q[7].u8[0];
    _t.u8[1] = (c)->q[17].u8[1] | (c)->q[7].u8[1];
    _t.u8[2] = (c)->q[17].u8[2] | (c)->q[7].u8[2];
    _t.u8[3] = (c)->q[17].u8[3] | (c)->q[7].u8[3];
    _t.u8[4] = (c)->q[17].u8[4] | (c)->q[7].u8[4];
    _t.u8[5] = (c)->q[17].u8[5] | (c)->q[7].u8[5];
    _t.u8[6] = (c)->q[17].u8[6] | (c)->q[7].u8[6];
    _t.u8[7] = (c)->q[17].u8[7] | (c)->q[7].u8[7];
    _t.u8[8] = (c)->q[17].u8[8] | (c)->q[7].u8[8];
    _t.u8[9] = (c)->q[17].u8[9] | (c)->q[7].u8[9];
    _t.u8[10] = (c)->q[17].u8[10] | (c)->q[7].u8[10];
    _t.u8[11] = (c)->q[17].u8[11] | (c)->q[7].u8[11];
    _t.u8[12] = (c)->q[17].u8[12] | (c)->q[7].u8[12];
    _t.u8[13] = (c)->q[17].u8[13] | (c)->q[7].u8[13];
    _t.u8[14] = (c)->q[17].u8[14] | (c)->q[7].u8[14];
    _t.u8[15] = (c)->q[17].u8[15] | (c)->q[7].u8[15];
    (c)->q[7] = _t; }
  /* c2530: orr v17.16b, v21.16b, v28.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[21].u8[0] | (c)->q[28].u8[0];
    _t.u8[1] = (c)->q[21].u8[1] | (c)->q[28].u8[1];
    _t.u8[2] = (c)->q[21].u8[2] | (c)->q[28].u8[2];
    _t.u8[3] = (c)->q[21].u8[3] | (c)->q[28].u8[3];
    _t.u8[4] = (c)->q[21].u8[4] | (c)->q[28].u8[4];
    _t.u8[5] = (c)->q[21].u8[5] | (c)->q[28].u8[5];
    _t.u8[6] = (c)->q[21].u8[6] | (c)->q[28].u8[6];
    _t.u8[7] = (c)->q[21].u8[7] | (c)->q[28].u8[7];
    _t.u8[8] = (c)->q[21].u8[8] | (c)->q[28].u8[8];
    _t.u8[9] = (c)->q[21].u8[9] | (c)->q[28].u8[9];
    _t.u8[10] = (c)->q[21].u8[10] | (c)->q[28].u8[10];
    _t.u8[11] = (c)->q[21].u8[11] | (c)->q[28].u8[11];
    _t.u8[12] = (c)->q[21].u8[12] | (c)->q[28].u8[12];
    _t.u8[13] = (c)->q[21].u8[13] | (c)->q[28].u8[13];
    _t.u8[14] = (c)->q[21].u8[14] | (c)->q[28].u8[14];
    _t.u8[15] = (c)->q[21].u8[15] | (c)->q[28].u8[15];
    (c)->q[17] = _t; }
  /* c2534: sshll2 v27.2d, v24.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[24].i32[2]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[24].i32[3]) << 0);
    (c)->q[27] = _t; }
  /* c2538: sshll2 v29.2d, v19.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[19].i32[2]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[19].i32[3]) << 0);
    (c)->q[29] = _t; }
  /* c253c: sshll v19.2d, v19.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[19].i32[0]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[19].i32[1]) << 0);
    (c)->q[19] = _t; }
  /* c2540: sshll2 v28.2d, v25.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[25].i32[2]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[25].i32[3]) << 0);
    (c)->q[28] = _t; }
  /* c2544: sshll v25.2d, v25.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[25].i32[0]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[25].i32[1]) << 0);
    (c)->q[25] = _t; }
  /* c2548: sshll v24.2d, v24.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[24].i32[0]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[24].i32[1]) << 0);
    (c)->q[24] = _t; }
  /* c254c: sshll2 v21.2d, v22.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[22].i32[2]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[22].i32[3]) << 0);
    (c)->q[21] = _t; }
  /* c2550: sshll v22.2d, v22.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[22].i32[0]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[22].i32[1]) << 0);
    (c)->q[22] = _t; }
  /* c2554: sshll2 v18.4s, v20.8h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[20].i16[4]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[20].i16[5]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[20].i16[6]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[20].i16[7]) << 0);
    (c)->q[18] = _t; }
  /* c2558: sshll v20.4s, v20.4h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[20].i16[0]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[20].i16[1]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[20].i16[2]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[20].i16[3]) << 0);
    (c)->q[20] = _t; }
  /* c255c: and v19.16b, v19.16b, v10.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[19].u8[0] & (c)->q[10].u8[0];
    _t.u8[1] = (c)->q[19].u8[1] & (c)->q[10].u8[1];
    _t.u8[2] = (c)->q[19].u8[2] & (c)->q[10].u8[2];
    _t.u8[3] = (c)->q[19].u8[3] & (c)->q[10].u8[3];
    _t.u8[4] = (c)->q[19].u8[4] & (c)->q[10].u8[4];
    _t.u8[5] = (c)->q[19].u8[5] & (c)->q[10].u8[5];
    _t.u8[6] = (c)->q[19].u8[6] & (c)->q[10].u8[6];
    _t.u8[7] = (c)->q[19].u8[7] & (c)->q[10].u8[7];
    _t.u8[8] = (c)->q[19].u8[8] & (c)->q[10].u8[8];
    _t.u8[9] = (c)->q[19].u8[9] & (c)->q[10].u8[9];
    _t.u8[10] = (c)->q[19].u8[10] & (c)->q[10].u8[10];
    _t.u8[11] = (c)->q[19].u8[11] & (c)->q[10].u8[11];
    _t.u8[12] = (c)->q[19].u8[12] & (c)->q[10].u8[12];
    _t.u8[13] = (c)->q[19].u8[13] & (c)->q[10].u8[13];
    _t.u8[14] = (c)->q[19].u8[14] & (c)->q[10].u8[14];
    _t.u8[15] = (c)->q[19].u8[15] & (c)->q[10].u8[15];
    (c)->q[19] = _t; }
  /* c2560: ldr q10, [sp, #0x110] */
  arc_q_w(c, 10, arc_ld64(((c)->sp + INT64_C(272))), arc_ld64(((c)->sp + INT64_C(272)) + 8));
  /* c2564: sshll v31.2d, v26.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[26].i32[0]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[26].i32[1]) << 0);
    (c)->q[31] = _t; }
  /* c2568: sshll2 v23.4s, v23.8h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[23].i16[4]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[23].i16[5]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[23].i16[6]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[23].i16[7]) << 0);
    (c)->q[23] = _t; }
  /* c256c: sshll2 v26.2d, v26.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[26].i32[2]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[26].i32[3]) << 0);
    (c)->q[26] = _t; }
  /* c2570: and v25.16b, v25.16b, v10.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[25].u8[0] & (c)->q[10].u8[0];
    _t.u8[1] = (c)->q[25].u8[1] & (c)->q[10].u8[1];
    _t.u8[2] = (c)->q[25].u8[2] & (c)->q[10].u8[2];
    _t.u8[3] = (c)->q[25].u8[3] & (c)->q[10].u8[3];
    _t.u8[4] = (c)->q[25].u8[4] & (c)->q[10].u8[4];
    _t.u8[5] = (c)->q[25].u8[5] & (c)->q[10].u8[5];
    _t.u8[6] = (c)->q[25].u8[6] & (c)->q[10].u8[6];
    _t.u8[7] = (c)->q[25].u8[7] & (c)->q[10].u8[7];
    _t.u8[8] = (c)->q[25].u8[8] & (c)->q[10].u8[8];
    _t.u8[9] = (c)->q[25].u8[9] & (c)->q[10].u8[9];
    _t.u8[10] = (c)->q[25].u8[10] & (c)->q[10].u8[10];
    _t.u8[11] = (c)->q[25].u8[11] & (c)->q[10].u8[11];
    _t.u8[12] = (c)->q[25].u8[12] & (c)->q[10].u8[12];
    _t.u8[13] = (c)->q[25].u8[13] & (c)->q[10].u8[13];
    _t.u8[14] = (c)->q[25].u8[14] & (c)->q[10].u8[14];
    _t.u8[15] = (c)->q[25].u8[15] & (c)->q[10].u8[15];
    (c)->q[25] = _t; }
  /* c2574: ldr q10, [sp, #0x100] */
  arc_q_w(c, 10, arc_ld64(((c)->sp + INT64_C(256))), arc_ld64(((c)->sp + INT64_C(256)) + 8));
  /* c2578: sshll v30.2d, v18.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[18].i32[0]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[18].i32[1]) << 0);
    (c)->q[30] = _t; }
  /* c257c: and v31.16b, v31.16b, v9.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[31].u8[0] & (c)->q[9].u8[0];
    _t.u8[1] = (c)->q[31].u8[1] & (c)->q[9].u8[1];
    _t.u8[2] = (c)->q[31].u8[2] & (c)->q[9].u8[2];
    _t.u8[3] = (c)->q[31].u8[3] & (c)->q[9].u8[3];
    _t.u8[4] = (c)->q[31].u8[4] & (c)->q[9].u8[4];
    _t.u8[5] = (c)->q[31].u8[5] & (c)->q[9].u8[5];
    _t.u8[6] = (c)->q[31].u8[6] & (c)->q[9].u8[6];
    _t.u8[7] = (c)->q[31].u8[7] & (c)->q[9].u8[7];
    _t.u8[8] = (c)->q[31].u8[8] & (c)->q[9].u8[8];
    _t.u8[9] = (c)->q[31].u8[9] & (c)->q[9].u8[9];
    _t.u8[10] = (c)->q[31].u8[10] & (c)->q[9].u8[10];
    _t.u8[11] = (c)->q[31].u8[11] & (c)->q[9].u8[11];
    _t.u8[12] = (c)->q[31].u8[12] & (c)->q[9].u8[12];
    _t.u8[13] = (c)->q[31].u8[13] & (c)->q[9].u8[13];
    _t.u8[14] = (c)->q[31].u8[14] & (c)->q[9].u8[14];
    _t.u8[15] = (c)->q[31].u8[15] & (c)->q[9].u8[15];
    (c)->q[31] = _t; }
  /* c2580: ldr q9, [x22, #0xc80] */
  arc_q_w(c, 9, arc_ld64((ARC_X_R(c, 22) + INT64_C(3200))), arc_ld64((ARC_X_R(c, 22) + INT64_C(3200)) + 8));
  /* c2584: sshll2 v18.2d, v18.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[18].i32[2]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[18].i32[3]) << 0);
    (c)->q[18] = _t; }
  /* c2588: and v24.16b, v24.16b, v10.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[24].u8[0] & (c)->q[10].u8[0];
    _t.u8[1] = (c)->q[24].u8[1] & (c)->q[10].u8[1];
    _t.u8[2] = (c)->q[24].u8[2] & (c)->q[10].u8[2];
    _t.u8[3] = (c)->q[24].u8[3] & (c)->q[10].u8[3];
    _t.u8[4] = (c)->q[24].u8[4] & (c)->q[10].u8[4];
    _t.u8[5] = (c)->q[24].u8[5] & (c)->q[10].u8[5];
    _t.u8[6] = (c)->q[24].u8[6] & (c)->q[10].u8[6];
    _t.u8[7] = (c)->q[24].u8[7] & (c)->q[10].u8[7];
    _t.u8[8] = (c)->q[24].u8[8] & (c)->q[10].u8[8];
    _t.u8[9] = (c)->q[24].u8[9] & (c)->q[10].u8[9];
    _t.u8[10] = (c)->q[24].u8[10] & (c)->q[10].u8[10];
    _t.u8[11] = (c)->q[24].u8[11] & (c)->q[10].u8[11];
    _t.u8[12] = (c)->q[24].u8[12] & (c)->q[10].u8[12];
    _t.u8[13] = (c)->q[24].u8[13] & (c)->q[10].u8[13];
    _t.u8[14] = (c)->q[24].u8[14] & (c)->q[10].u8[14];
    _t.u8[15] = (c)->q[24].u8[15] & (c)->q[10].u8[15];
    (c)->q[24] = _t; }
  /* c258c: ldr q10, [sp, #0xf0] */
  arc_q_w(c, 10, arc_ld64(((c)->sp + INT64_C(240))), arc_ld64(((c)->sp + INT64_C(240)) + 8));
  /* c2590: and v30.16b, v30.16b, v8.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[30].u8[0] & (c)->q[8].u8[0];
    _t.u8[1] = (c)->q[30].u8[1] & (c)->q[8].u8[1];
    _t.u8[2] = (c)->q[30].u8[2] & (c)->q[8].u8[2];
    _t.u8[3] = (c)->q[30].u8[3] & (c)->q[8].u8[3];
    _t.u8[4] = (c)->q[30].u8[4] & (c)->q[8].u8[4];
    _t.u8[5] = (c)->q[30].u8[5] & (c)->q[8].u8[5];
    _t.u8[6] = (c)->q[30].u8[6] & (c)->q[8].u8[6];
    _t.u8[7] = (c)->q[30].u8[7] & (c)->q[8].u8[7];
    _t.u8[8] = (c)->q[30].u8[8] & (c)->q[8].u8[8];
    _t.u8[9] = (c)->q[30].u8[9] & (c)->q[8].u8[9];
    _t.u8[10] = (c)->q[30].u8[10] & (c)->q[8].u8[10];
    _t.u8[11] = (c)->q[30].u8[11] & (c)->q[8].u8[11];
    _t.u8[12] = (c)->q[30].u8[12] & (c)->q[8].u8[12];
    _t.u8[13] = (c)->q[30].u8[13] & (c)->q[8].u8[13];
    _t.u8[14] = (c)->q[30].u8[14] & (c)->q[8].u8[14];
    _t.u8[15] = (c)->q[30].u8[15] & (c)->q[8].u8[15];
    (c)->q[30] = _t; }
  /* c2594: sshll v8.2d, v20.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[20].i32[0]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[20].i32[1]) << 0);
    (c)->q[8] = _t; }
  /* c2598: sshll2 v20.2d, v20.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[20].i32[2]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[20].i32[3]) << 0);
    (c)->q[20] = _t; }
  /* c259c: and v22.16b, v22.16b, v10.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[22].u8[0] & (c)->q[10].u8[0];
    _t.u8[1] = (c)->q[22].u8[1] & (c)->q[10].u8[1];
    _t.u8[2] = (c)->q[22].u8[2] & (c)->q[10].u8[2];
    _t.u8[3] = (c)->q[22].u8[3] & (c)->q[10].u8[3];
    _t.u8[4] = (c)->q[22].u8[4] & (c)->q[10].u8[4];
    _t.u8[5] = (c)->q[22].u8[5] & (c)->q[10].u8[5];
    _t.u8[6] = (c)->q[22].u8[6] & (c)->q[10].u8[6];
    _t.u8[7] = (c)->q[22].u8[7] & (c)->q[10].u8[7];
    _t.u8[8] = (c)->q[22].u8[8] & (c)->q[10].u8[8];
    _t.u8[9] = (c)->q[22].u8[9] & (c)->q[10].u8[9];
    _t.u8[10] = (c)->q[22].u8[10] & (c)->q[10].u8[10];
    _t.u8[11] = (c)->q[22].u8[11] & (c)->q[10].u8[11];
    _t.u8[12] = (c)->q[22].u8[12] & (c)->q[10].u8[12];
    _t.u8[13] = (c)->q[22].u8[13] & (c)->q[10].u8[13];
    _t.u8[14] = (c)->q[22].u8[14] & (c)->q[10].u8[14];
    _t.u8[15] = (c)->q[22].u8[15] & (c)->q[10].u8[15];
    (c)->q[22] = _t; }
  /* c25a0: ldr q10, [sp, #0xe0] */
  arc_q_w(c, 10, arc_ld64(((c)->sp + INT64_C(224))), arc_ld64(((c)->sp + INT64_C(224)) + 8));
  /* c25a4: and v29.16b, v29.16b, v10.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[29].u8[0] & (c)->q[10].u8[0];
    _t.u8[1] = (c)->q[29].u8[1] & (c)->q[10].u8[1];
    _t.u8[2] = (c)->q[29].u8[2] & (c)->q[10].u8[2];
    _t.u8[3] = (c)->q[29].u8[3] & (c)->q[10].u8[3];
    _t.u8[4] = (c)->q[29].u8[4] & (c)->q[10].u8[4];
    _t.u8[5] = (c)->q[29].u8[5] & (c)->q[10].u8[5];
    _t.u8[6] = (c)->q[29].u8[6] & (c)->q[10].u8[6];
    _t.u8[7] = (c)->q[29].u8[7] & (c)->q[10].u8[7];
    _t.u8[8] = (c)->q[29].u8[8] & (c)->q[10].u8[8];
    _t.u8[9] = (c)->q[29].u8[9] & (c)->q[10].u8[9];
    _t.u8[10] = (c)->q[29].u8[10] & (c)->q[10].u8[10];
    _t.u8[11] = (c)->q[29].u8[11] & (c)->q[10].u8[11];
    _t.u8[12] = (c)->q[29].u8[12] & (c)->q[10].u8[12];
    _t.u8[13] = (c)->q[29].u8[13] & (c)->q[10].u8[13];
    _t.u8[14] = (c)->q[29].u8[14] & (c)->q[10].u8[14];
    _t.u8[15] = (c)->q[29].u8[15] & (c)->q[10].u8[15];
    (c)->q[29] = _t; }
  /* c25a8: ldr q10, [sp, #0xd0] */
  arc_q_w(c, 10, arc_ld64(((c)->sp + INT64_C(208))), arc_ld64(((c)->sp + INT64_C(208)) + 8));
  /* c25ac: and v8.16b, v8.16b, v9.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[8].u8[0] & (c)->q[9].u8[0];
    _t.u8[1] = (c)->q[8].u8[1] & (c)->q[9].u8[1];
    _t.u8[2] = (c)->q[8].u8[2] & (c)->q[9].u8[2];
    _t.u8[3] = (c)->q[8].u8[3] & (c)->q[9].u8[3];
    _t.u8[4] = (c)->q[8].u8[4] & (c)->q[9].u8[4];
    _t.u8[5] = (c)->q[8].u8[5] & (c)->q[9].u8[5];
    _t.u8[6] = (c)->q[8].u8[6] & (c)->q[9].u8[6];
    _t.u8[7] = (c)->q[8].u8[7] & (c)->q[9].u8[7];
    _t.u8[8] = (c)->q[8].u8[8] & (c)->q[9].u8[8];
    _t.u8[9] = (c)->q[8].u8[9] & (c)->q[9].u8[9];
    _t.u8[10] = (c)->q[8].u8[10] & (c)->q[9].u8[10];
    _t.u8[11] = (c)->q[8].u8[11] & (c)->q[9].u8[11];
    _t.u8[12] = (c)->q[8].u8[12] & (c)->q[9].u8[12];
    _t.u8[13] = (c)->q[8].u8[13] & (c)->q[9].u8[13];
    _t.u8[14] = (c)->q[8].u8[14] & (c)->q[9].u8[14];
    _t.u8[15] = (c)->q[8].u8[15] & (c)->q[9].u8[15];
    (c)->q[8] = _t; }
  /* c25b0: sshll2 v9.2d, v23.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[23].i32[2]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[23].i32[3]) << 0);
    (c)->q[9] = _t; }
  /* c25b4: sshll v23.2d, v23.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[23].i32[0]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[23].i32[1]) << 0);
    (c)->q[23] = _t; }
  /* c25b8: orr v24.16b, v30.16b, v24.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[30].u8[0] | (c)->q[24].u8[0];
    _t.u8[1] = (c)->q[30].u8[1] | (c)->q[24].u8[1];
    _t.u8[2] = (c)->q[30].u8[2] | (c)->q[24].u8[2];
    _t.u8[3] = (c)->q[30].u8[3] | (c)->q[24].u8[3];
    _t.u8[4] = (c)->q[30].u8[4] | (c)->q[24].u8[4];
    _t.u8[5] = (c)->q[30].u8[5] | (c)->q[24].u8[5];
    _t.u8[6] = (c)->q[30].u8[6] | (c)->q[24].u8[6];
    _t.u8[7] = (c)->q[30].u8[7] | (c)->q[24].u8[7];
    _t.u8[8] = (c)->q[30].u8[8] | (c)->q[24].u8[8];
    _t.u8[9] = (c)->q[30].u8[9] | (c)->q[24].u8[9];
    _t.u8[10] = (c)->q[30].u8[10] | (c)->q[24].u8[10];
    _t.u8[11] = (c)->q[30].u8[11] | (c)->q[24].u8[11];
    _t.u8[12] = (c)->q[30].u8[12] | (c)->q[24].u8[12];
    _t.u8[13] = (c)->q[30].u8[13] | (c)->q[24].u8[13];
    _t.u8[14] = (c)->q[30].u8[14] | (c)->q[24].u8[14];
    _t.u8[15] = (c)->q[30].u8[15] | (c)->q[24].u8[15];
    (c)->q[24] = _t; }
  /* c25bc: and v28.16b, v28.16b, v10.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[28].u8[0] & (c)->q[10].u8[0];
    _t.u8[1] = (c)->q[28].u8[1] & (c)->q[10].u8[1];
    _t.u8[2] = (c)->q[28].u8[2] & (c)->q[10].u8[2];
    _t.u8[3] = (c)->q[28].u8[3] & (c)->q[10].u8[3];
    _t.u8[4] = (c)->q[28].u8[4] & (c)->q[10].u8[4];
    _t.u8[5] = (c)->q[28].u8[5] & (c)->q[10].u8[5];
    _t.u8[6] = (c)->q[28].u8[6] & (c)->q[10].u8[6];
    _t.u8[7] = (c)->q[28].u8[7] & (c)->q[10].u8[7];
    _t.u8[8] = (c)->q[28].u8[8] & (c)->q[10].u8[8];
    _t.u8[9] = (c)->q[28].u8[9] & (c)->q[10].u8[9];
    _t.u8[10] = (c)->q[28].u8[10] & (c)->q[10].u8[10];
    _t.u8[11] = (c)->q[28].u8[11] & (c)->q[10].u8[11];
    _t.u8[12] = (c)->q[28].u8[12] & (c)->q[10].u8[12];
    _t.u8[13] = (c)->q[28].u8[13] & (c)->q[10].u8[13];
    _t.u8[14] = (c)->q[28].u8[14] & (c)->q[10].u8[14];
    _t.u8[15] = (c)->q[28].u8[15] & (c)->q[10].u8[15];
    (c)->q[28] = _t; }
  /* c25c0: ldr q10, [sp, #0xc0] */
  arc_q_w(c, 10, arc_ld64(((c)->sp + INT64_C(192))), arc_ld64(((c)->sp + INT64_C(192)) + 8));
  /* c25c4: orr v6.16b, v8.16b, v19.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[8].u8[0] | (c)->q[19].u8[0];
    _t.u8[1] = (c)->q[8].u8[1] | (c)->q[19].u8[1];
    _t.u8[2] = (c)->q[8].u8[2] | (c)->q[19].u8[2];
    _t.u8[3] = (c)->q[8].u8[3] | (c)->q[19].u8[3];
    _t.u8[4] = (c)->q[8].u8[4] | (c)->q[19].u8[4];
    _t.u8[5] = (c)->q[8].u8[5] | (c)->q[19].u8[5];
    _t.u8[6] = (c)->q[8].u8[6] | (c)->q[19].u8[6];
    _t.u8[7] = (c)->q[8].u8[7] | (c)->q[19].u8[7];
    _t.u8[8] = (c)->q[8].u8[8] | (c)->q[19].u8[8];
    _t.u8[9] = (c)->q[8].u8[9] | (c)->q[19].u8[9];
    _t.u8[10] = (c)->q[8].u8[10] | (c)->q[19].u8[10];
    _t.u8[11] = (c)->q[8].u8[11] | (c)->q[19].u8[11];
    _t.u8[12] = (c)->q[8].u8[12] | (c)->q[19].u8[12];
    _t.u8[13] = (c)->q[8].u8[13] | (c)->q[19].u8[13];
    _t.u8[14] = (c)->q[8].u8[14] | (c)->q[19].u8[14];
    _t.u8[15] = (c)->q[8].u8[15] | (c)->q[19].u8[15];
    (c)->q[6] = _t; }
  /* c25c8: orr v19.16b, v31.16b, v25.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[31].u8[0] | (c)->q[25].u8[0];
    _t.u8[1] = (c)->q[31].u8[1] | (c)->q[25].u8[1];
    _t.u8[2] = (c)->q[31].u8[2] | (c)->q[25].u8[2];
    _t.u8[3] = (c)->q[31].u8[3] | (c)->q[25].u8[3];
    _t.u8[4] = (c)->q[31].u8[4] | (c)->q[25].u8[4];
    _t.u8[5] = (c)->q[31].u8[5] | (c)->q[25].u8[5];
    _t.u8[6] = (c)->q[31].u8[6] | (c)->q[25].u8[6];
    _t.u8[7] = (c)->q[31].u8[7] | (c)->q[25].u8[7];
    _t.u8[8] = (c)->q[31].u8[8] | (c)->q[25].u8[8];
    _t.u8[9] = (c)->q[31].u8[9] | (c)->q[25].u8[9];
    _t.u8[10] = (c)->q[31].u8[10] | (c)->q[25].u8[10];
    _t.u8[11] = (c)->q[31].u8[11] | (c)->q[25].u8[11];
    _t.u8[12] = (c)->q[31].u8[12] | (c)->q[25].u8[12];
    _t.u8[13] = (c)->q[31].u8[13] | (c)->q[25].u8[13];
    _t.u8[14] = (c)->q[31].u8[14] | (c)->q[25].u8[14];
    _t.u8[15] = (c)->q[31].u8[15] | (c)->q[25].u8[15];
    (c)->q[19] = _t; }
  /* c25cc: and v27.16b, v27.16b, v10.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[27].u8[0] & (c)->q[10].u8[0];
    _t.u8[1] = (c)->q[27].u8[1] & (c)->q[10].u8[1];
    _t.u8[2] = (c)->q[27].u8[2] & (c)->q[10].u8[2];
    _t.u8[3] = (c)->q[27].u8[3] & (c)->q[10].u8[3];
    _t.u8[4] = (c)->q[27].u8[4] & (c)->q[10].u8[4];
    _t.u8[5] = (c)->q[27].u8[5] & (c)->q[10].u8[5];
    _t.u8[6] = (c)->q[27].u8[6] & (c)->q[10].u8[6];
    _t.u8[7] = (c)->q[27].u8[7] & (c)->q[10].u8[7];
    _t.u8[8] = (c)->q[27].u8[8] & (c)->q[10].u8[8];
    _t.u8[9] = (c)->q[27].u8[9] & (c)->q[10].u8[9];
    _t.u8[10] = (c)->q[27].u8[10] & (c)->q[10].u8[10];
    _t.u8[11] = (c)->q[27].u8[11] & (c)->q[10].u8[11];
    _t.u8[12] = (c)->q[27].u8[12] & (c)->q[10].u8[12];
    _t.u8[13] = (c)->q[27].u8[13] & (c)->q[10].u8[13];
    _t.u8[14] = (c)->q[27].u8[14] & (c)->q[10].u8[14];
    _t.u8[15] = (c)->q[27].u8[15] & (c)->q[10].u8[15];
    (c)->q[27] = _t; }
  /* c25d0: ldr q10, [sp, #0xb0] */
  arc_q_w(c, 10, arc_ld64(((c)->sp + INT64_C(176))), arc_ld64(((c)->sp + INT64_C(176)) + 8));
  /* c25d4: orr v5.16b, v24.16b, v5.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[24].u8[0] | (c)->q[5].u8[0];
    _t.u8[1] = (c)->q[24].u8[1] | (c)->q[5].u8[1];
    _t.u8[2] = (c)->q[24].u8[2] | (c)->q[5].u8[2];
    _t.u8[3] = (c)->q[24].u8[3] | (c)->q[5].u8[3];
    _t.u8[4] = (c)->q[24].u8[4] | (c)->q[5].u8[4];
    _t.u8[5] = (c)->q[24].u8[5] | (c)->q[5].u8[5];
    _t.u8[6] = (c)->q[24].u8[6] | (c)->q[5].u8[6];
    _t.u8[7] = (c)->q[24].u8[7] | (c)->q[5].u8[7];
    _t.u8[8] = (c)->q[24].u8[8] | (c)->q[5].u8[8];
    _t.u8[9] = (c)->q[24].u8[9] | (c)->q[5].u8[9];
    _t.u8[10] = (c)->q[24].u8[10] | (c)->q[5].u8[10];
    _t.u8[11] = (c)->q[24].u8[11] | (c)->q[5].u8[11];
    _t.u8[12] = (c)->q[24].u8[12] | (c)->q[5].u8[12];
    _t.u8[13] = (c)->q[24].u8[13] | (c)->q[5].u8[13];
    _t.u8[14] = (c)->q[24].u8[14] | (c)->q[5].u8[14];
    _t.u8[15] = (c)->q[24].u8[15] | (c)->q[5].u8[15];
    (c)->q[5] = _t; }
  /* c25d8: and v21.16b, v21.16b, v10.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[21].u8[0] & (c)->q[10].u8[0];
    _t.u8[1] = (c)->q[21].u8[1] & (c)->q[10].u8[1];
    _t.u8[2] = (c)->q[21].u8[2] & (c)->q[10].u8[2];
    _t.u8[3] = (c)->q[21].u8[3] & (c)->q[10].u8[3];
    _t.u8[4] = (c)->q[21].u8[4] & (c)->q[10].u8[4];
    _t.u8[5] = (c)->q[21].u8[5] & (c)->q[10].u8[5];
    _t.u8[6] = (c)->q[21].u8[6] & (c)->q[10].u8[6];
    _t.u8[7] = (c)->q[21].u8[7] & (c)->q[10].u8[7];
    _t.u8[8] = (c)->q[21].u8[8] & (c)->q[10].u8[8];
    _t.u8[9] = (c)->q[21].u8[9] & (c)->q[10].u8[9];
    _t.u8[10] = (c)->q[21].u8[10] & (c)->q[10].u8[10];
    _t.u8[11] = (c)->q[21].u8[11] & (c)->q[10].u8[11];
    _t.u8[12] = (c)->q[21].u8[12] & (c)->q[10].u8[12];
    _t.u8[13] = (c)->q[21].u8[13] & (c)->q[10].u8[13];
    _t.u8[14] = (c)->q[21].u8[14] & (c)->q[10].u8[14];
    _t.u8[15] = (c)->q[21].u8[15] & (c)->q[10].u8[15];
    (c)->q[21] = _t; }
  /* c25dc: ldr q10, [sp, #0xa0] */
  arc_q_w(c, 10, arc_ld64(((c)->sp + INT64_C(160))), arc_ld64(((c)->sp + INT64_C(160)) + 8));
  /* c25e0: orr v2.16b, v6.16b, v2.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[6].u8[0] | (c)->q[2].u8[0];
    _t.u8[1] = (c)->q[6].u8[1] | (c)->q[2].u8[1];
    _t.u8[2] = (c)->q[6].u8[2] | (c)->q[2].u8[2];
    _t.u8[3] = (c)->q[6].u8[3] | (c)->q[2].u8[3];
    _t.u8[4] = (c)->q[6].u8[4] | (c)->q[2].u8[4];
    _t.u8[5] = (c)->q[6].u8[5] | (c)->q[2].u8[5];
    _t.u8[6] = (c)->q[6].u8[6] | (c)->q[2].u8[6];
    _t.u8[7] = (c)->q[6].u8[7] | (c)->q[2].u8[7];
    _t.u8[8] = (c)->q[6].u8[8] | (c)->q[2].u8[8];
    _t.u8[9] = (c)->q[6].u8[9] | (c)->q[2].u8[9];
    _t.u8[10] = (c)->q[6].u8[10] | (c)->q[2].u8[10];
    _t.u8[11] = (c)->q[6].u8[11] | (c)->q[2].u8[11];
    _t.u8[12] = (c)->q[6].u8[12] | (c)->q[2].u8[12];
    _t.u8[13] = (c)->q[6].u8[13] | (c)->q[2].u8[13];
    _t.u8[14] = (c)->q[6].u8[14] | (c)->q[2].u8[14];
    _t.u8[15] = (c)->q[6].u8[15] | (c)->q[2].u8[15];
    (c)->q[2] = _t; }
  /* c25e4: orr v4.16b, v19.16b, v4.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[19].u8[0] | (c)->q[4].u8[0];
    _t.u8[1] = (c)->q[19].u8[1] | (c)->q[4].u8[1];
    _t.u8[2] = (c)->q[19].u8[2] | (c)->q[4].u8[2];
    _t.u8[3] = (c)->q[19].u8[3] | (c)->q[4].u8[3];
    _t.u8[4] = (c)->q[19].u8[4] | (c)->q[4].u8[4];
    _t.u8[5] = (c)->q[19].u8[5] | (c)->q[4].u8[5];
    _t.u8[6] = (c)->q[19].u8[6] | (c)->q[4].u8[6];
    _t.u8[7] = (c)->q[19].u8[7] | (c)->q[4].u8[7];
    _t.u8[8] = (c)->q[19].u8[8] | (c)->q[4].u8[8];
    _t.u8[9] = (c)->q[19].u8[9] | (c)->q[4].u8[9];
    _t.u8[10] = (c)->q[19].u8[10] | (c)->q[4].u8[10];
    _t.u8[11] = (c)->q[19].u8[11] | (c)->q[4].u8[11];
    _t.u8[12] = (c)->q[19].u8[12] | (c)->q[4].u8[12];
    _t.u8[13] = (c)->q[19].u8[13] | (c)->q[4].u8[13];
    _t.u8[14] = (c)->q[19].u8[14] | (c)->q[4].u8[14];
    _t.u8[15] = (c)->q[19].u8[15] | (c)->q[4].u8[15];
    (c)->q[4] = _t; }
  /* c25e8: and v9.16b, v9.16b, v10.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[9].u8[0] & (c)->q[10].u8[0];
    _t.u8[1] = (c)->q[9].u8[1] & (c)->q[10].u8[1];
    _t.u8[2] = (c)->q[9].u8[2] & (c)->q[10].u8[2];
    _t.u8[3] = (c)->q[9].u8[3] & (c)->q[10].u8[3];
    _t.u8[4] = (c)->q[9].u8[4] & (c)->q[10].u8[4];
    _t.u8[5] = (c)->q[9].u8[5] & (c)->q[10].u8[5];
    _t.u8[6] = (c)->q[9].u8[6] & (c)->q[10].u8[6];
    _t.u8[7] = (c)->q[9].u8[7] & (c)->q[10].u8[7];
    _t.u8[8] = (c)->q[9].u8[8] & (c)->q[10].u8[8];
    _t.u8[9] = (c)->q[9].u8[9] & (c)->q[10].u8[9];
    _t.u8[10] = (c)->q[9].u8[10] & (c)->q[10].u8[10];
    _t.u8[11] = (c)->q[9].u8[11] & (c)->q[10].u8[11];
    _t.u8[12] = (c)->q[9].u8[12] & (c)->q[10].u8[12];
    _t.u8[13] = (c)->q[9].u8[13] & (c)->q[10].u8[13];
    _t.u8[14] = (c)->q[9].u8[14] & (c)->q[10].u8[14];
    _t.u8[15] = (c)->q[9].u8[15] & (c)->q[10].u8[15];
    (c)->q[9] = _t; }
  /* c25ec: ldr q10, [sp, #0x90] */
  arc_q_w(c, 10, arc_ld64(((c)->sp + INT64_C(144))), arc_ld64(((c)->sp + INT64_C(144)) + 8));
  /* c25f0: and v18.16b, v18.16b, v10.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[18].u8[0] & (c)->q[10].u8[0];
    _t.u8[1] = (c)->q[18].u8[1] & (c)->q[10].u8[1];
    _t.u8[2] = (c)->q[18].u8[2] & (c)->q[10].u8[2];
    _t.u8[3] = (c)->q[18].u8[3] & (c)->q[10].u8[3];
    _t.u8[4] = (c)->q[18].u8[4] & (c)->q[10].u8[4];
    _t.u8[5] = (c)->q[18].u8[5] & (c)->q[10].u8[5];
    _t.u8[6] = (c)->q[18].u8[6] & (c)->q[10].u8[6];
    _t.u8[7] = (c)->q[18].u8[7] & (c)->q[10].u8[7];
    _t.u8[8] = (c)->q[18].u8[8] & (c)->q[10].u8[8];
    _t.u8[9] = (c)->q[18].u8[9] & (c)->q[10].u8[9];
    _t.u8[10] = (c)->q[18].u8[10] & (c)->q[10].u8[10];
    _t.u8[11] = (c)->q[18].u8[11] & (c)->q[10].u8[11];
    _t.u8[12] = (c)->q[18].u8[12] & (c)->q[10].u8[12];
    _t.u8[13] = (c)->q[18].u8[13] & (c)->q[10].u8[13];
    _t.u8[14] = (c)->q[18].u8[14] & (c)->q[10].u8[14];
    _t.u8[15] = (c)->q[18].u8[15] & (c)->q[10].u8[15];
    (c)->q[18] = _t; }
  /* c25f4: ldr q10, [sp, #0x80] */
  arc_q_w(c, 10, arc_ld64(((c)->sp + INT64_C(128))), arc_ld64(((c)->sp + INT64_C(128)) + 8));
  /* c25f8: orr v2.16b, v4.16b, v2.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[4].u8[0] | (c)->q[2].u8[0];
    _t.u8[1] = (c)->q[4].u8[1] | (c)->q[2].u8[1];
    _t.u8[2] = (c)->q[4].u8[2] | (c)->q[2].u8[2];
    _t.u8[3] = (c)->q[4].u8[3] | (c)->q[2].u8[3];
    _t.u8[4] = (c)->q[4].u8[4] | (c)->q[2].u8[4];
    _t.u8[5] = (c)->q[4].u8[5] | (c)->q[2].u8[5];
    _t.u8[6] = (c)->q[4].u8[6] | (c)->q[2].u8[6];
    _t.u8[7] = (c)->q[4].u8[7] | (c)->q[2].u8[7];
    _t.u8[8] = (c)->q[4].u8[8] | (c)->q[2].u8[8];
    _t.u8[9] = (c)->q[4].u8[9] | (c)->q[2].u8[9];
    _t.u8[10] = (c)->q[4].u8[10] | (c)->q[2].u8[10];
    _t.u8[11] = (c)->q[4].u8[11] | (c)->q[2].u8[11];
    _t.u8[12] = (c)->q[4].u8[12] | (c)->q[2].u8[12];
    _t.u8[13] = (c)->q[4].u8[13] | (c)->q[2].u8[13];
    _t.u8[14] = (c)->q[4].u8[14] | (c)->q[2].u8[14];
    _t.u8[15] = (c)->q[4].u8[15] | (c)->q[2].u8[15];
    (c)->q[2] = _t; }
  /* c25fc: orr v21.16b, v9.16b, v21.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[9].u8[0] | (c)->q[21].u8[0];
    _t.u8[1] = (c)->q[9].u8[1] | (c)->q[21].u8[1];
    _t.u8[2] = (c)->q[9].u8[2] | (c)->q[21].u8[2];
    _t.u8[3] = (c)->q[9].u8[3] | (c)->q[21].u8[3];
    _t.u8[4] = (c)->q[9].u8[4] | (c)->q[21].u8[4];
    _t.u8[5] = (c)->q[9].u8[5] | (c)->q[21].u8[5];
    _t.u8[6] = (c)->q[9].u8[6] | (c)->q[21].u8[6];
    _t.u8[7] = (c)->q[9].u8[7] | (c)->q[21].u8[7];
    _t.u8[8] = (c)->q[9].u8[8] | (c)->q[21].u8[8];
    _t.u8[9] = (c)->q[9].u8[9] | (c)->q[21].u8[9];
    _t.u8[10] = (c)->q[9].u8[10] | (c)->q[21].u8[10];
    _t.u8[11] = (c)->q[9].u8[11] | (c)->q[21].u8[11];
    _t.u8[12] = (c)->q[9].u8[12] | (c)->q[21].u8[12];
    _t.u8[13] = (c)->q[9].u8[13] | (c)->q[21].u8[13];
    _t.u8[14] = (c)->q[9].u8[14] | (c)->q[21].u8[14];
    _t.u8[15] = (c)->q[9].u8[15] | (c)->q[21].u8[15];
    (c)->q[21] = _t; }
  /* c2600: and v26.16b, v26.16b, v10.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[26].u8[0] & (c)->q[10].u8[0];
    _t.u8[1] = (c)->q[26].u8[1] & (c)->q[10].u8[1];
    _t.u8[2] = (c)->q[26].u8[2] & (c)->q[10].u8[2];
    _t.u8[3] = (c)->q[26].u8[3] & (c)->q[10].u8[3];
    _t.u8[4] = (c)->q[26].u8[4] & (c)->q[10].u8[4];
    _t.u8[5] = (c)->q[26].u8[5] & (c)->q[10].u8[5];
    _t.u8[6] = (c)->q[26].u8[6] & (c)->q[10].u8[6];
    _t.u8[7] = (c)->q[26].u8[7] & (c)->q[10].u8[7];
    _t.u8[8] = (c)->q[26].u8[8] & (c)->q[10].u8[8];
    _t.u8[9] = (c)->q[26].u8[9] & (c)->q[10].u8[9];
    _t.u8[10] = (c)->q[26].u8[10] & (c)->q[10].u8[10];
    _t.u8[11] = (c)->q[26].u8[11] & (c)->q[10].u8[11];
    _t.u8[12] = (c)->q[26].u8[12] & (c)->q[10].u8[12];
    _t.u8[13] = (c)->q[26].u8[13] & (c)->q[10].u8[13];
    _t.u8[14] = (c)->q[26].u8[14] & (c)->q[10].u8[14];
    _t.u8[15] = (c)->q[26].u8[15] & (c)->q[10].u8[15];
    (c)->q[26] = _t; }
  /* c2604: ldr q10, [sp, #0x70] */
  arc_q_w(c, 10, arc_ld64(((c)->sp + INT64_C(112))), arc_ld64(((c)->sp + INT64_C(112)) + 8));
  /* c2608: orr v18.16b, v18.16b, v27.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[18].u8[0] | (c)->q[27].u8[0];
    _t.u8[1] = (c)->q[18].u8[1] | (c)->q[27].u8[1];
    _t.u8[2] = (c)->q[18].u8[2] | (c)->q[27].u8[2];
    _t.u8[3] = (c)->q[18].u8[3] | (c)->q[27].u8[3];
    _t.u8[4] = (c)->q[18].u8[4] | (c)->q[27].u8[4];
    _t.u8[5] = (c)->q[18].u8[5] | (c)->q[27].u8[5];
    _t.u8[6] = (c)->q[18].u8[6] | (c)->q[27].u8[6];
    _t.u8[7] = (c)->q[18].u8[7] | (c)->q[27].u8[7];
    _t.u8[8] = (c)->q[18].u8[8] | (c)->q[27].u8[8];
    _t.u8[9] = (c)->q[18].u8[9] | (c)->q[27].u8[9];
    _t.u8[10] = (c)->q[18].u8[10] | (c)->q[27].u8[10];
    _t.u8[11] = (c)->q[18].u8[11] | (c)->q[27].u8[11];
    _t.u8[12] = (c)->q[18].u8[12] | (c)->q[27].u8[12];
    _t.u8[13] = (c)->q[18].u8[13] | (c)->q[27].u8[13];
    _t.u8[14] = (c)->q[18].u8[14] | (c)->q[27].u8[14];
    _t.u8[15] = (c)->q[18].u8[15] | (c)->q[27].u8[15];
    (c)->q[18] = _t; }
  /* c260c: and v20.16b, v20.16b, v10.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[20].u8[0] & (c)->q[10].u8[0];
    _t.u8[1] = (c)->q[20].u8[1] & (c)->q[10].u8[1];
    _t.u8[2] = (c)->q[20].u8[2] & (c)->q[10].u8[2];
    _t.u8[3] = (c)->q[20].u8[3] & (c)->q[10].u8[3];
    _t.u8[4] = (c)->q[20].u8[4] & (c)->q[10].u8[4];
    _t.u8[5] = (c)->q[20].u8[5] & (c)->q[10].u8[5];
    _t.u8[6] = (c)->q[20].u8[6] & (c)->q[10].u8[6];
    _t.u8[7] = (c)->q[20].u8[7] & (c)->q[10].u8[7];
    _t.u8[8] = (c)->q[20].u8[8] & (c)->q[10].u8[8];
    _t.u8[9] = (c)->q[20].u8[9] & (c)->q[10].u8[9];
    _t.u8[10] = (c)->q[20].u8[10] & (c)->q[10].u8[10];
    _t.u8[11] = (c)->q[20].u8[11] & (c)->q[10].u8[11];
    _t.u8[12] = (c)->q[20].u8[12] & (c)->q[10].u8[12];
    _t.u8[13] = (c)->q[20].u8[13] & (c)->q[10].u8[13];
    _t.u8[14] = (c)->q[20].u8[14] & (c)->q[10].u8[14];
    _t.u8[15] = (c)->q[20].u8[15] & (c)->q[10].u8[15];
    (c)->q[20] = _t; }
  /* c2610: ldr q10, [sp, #0x60] */
  arc_q_w(c, 10, arc_ld64(((c)->sp + INT64_C(96))), arc_ld64(((c)->sp + INT64_C(96)) + 8));
  /* c2614: orr v1.16b, v21.16b, v1.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[21].u8[0] | (c)->q[1].u8[0];
    _t.u8[1] = (c)->q[21].u8[1] | (c)->q[1].u8[1];
    _t.u8[2] = (c)->q[21].u8[2] | (c)->q[1].u8[2];
    _t.u8[3] = (c)->q[21].u8[3] | (c)->q[1].u8[3];
    _t.u8[4] = (c)->q[21].u8[4] | (c)->q[1].u8[4];
    _t.u8[5] = (c)->q[21].u8[5] | (c)->q[1].u8[5];
    _t.u8[6] = (c)->q[21].u8[6] | (c)->q[1].u8[6];
    _t.u8[7] = (c)->q[21].u8[7] | (c)->q[1].u8[7];
    _t.u8[8] = (c)->q[21].u8[8] | (c)->q[1].u8[8];
    _t.u8[9] = (c)->q[21].u8[9] | (c)->q[1].u8[9];
    _t.u8[10] = (c)->q[21].u8[10] | (c)->q[1].u8[10];
    _t.u8[11] = (c)->q[21].u8[11] | (c)->q[1].u8[11];
    _t.u8[12] = (c)->q[21].u8[12] | (c)->q[1].u8[12];
    _t.u8[13] = (c)->q[21].u8[13] | (c)->q[1].u8[13];
    _t.u8[14] = (c)->q[21].u8[14] | (c)->q[1].u8[14];
    _t.u8[15] = (c)->q[21].u8[15] | (c)->q[1].u8[15];
    (c)->q[1] = _t; }
  /* c2618: and v23.16b, v23.16b, v10.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[23].u8[0] & (c)->q[10].u8[0];
    _t.u8[1] = (c)->q[23].u8[1] & (c)->q[10].u8[1];
    _t.u8[2] = (c)->q[23].u8[2] & (c)->q[10].u8[2];
    _t.u8[3] = (c)->q[23].u8[3] & (c)->q[10].u8[3];
    _t.u8[4] = (c)->q[23].u8[4] & (c)->q[10].u8[4];
    _t.u8[5] = (c)->q[23].u8[5] & (c)->q[10].u8[5];
    _t.u8[6] = (c)->q[23].u8[6] & (c)->q[10].u8[6];
    _t.u8[7] = (c)->q[23].u8[7] & (c)->q[10].u8[7];
    _t.u8[8] = (c)->q[23].u8[8] & (c)->q[10].u8[8];
    _t.u8[9] = (c)->q[23].u8[9] & (c)->q[10].u8[9];
    _t.u8[10] = (c)->q[23].u8[10] & (c)->q[10].u8[10];
    _t.u8[11] = (c)->q[23].u8[11] & (c)->q[10].u8[11];
    _t.u8[12] = (c)->q[23].u8[12] & (c)->q[10].u8[12];
    _t.u8[13] = (c)->q[23].u8[13] & (c)->q[10].u8[13];
    _t.u8[14] = (c)->q[23].u8[14] & (c)->q[10].u8[14];
    _t.u8[15] = (c)->q[23].u8[15] & (c)->q[10].u8[15];
    (c)->q[23] = _t; }
  /* c261c: orr v6.16b, v18.16b, v17.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[18].u8[0] | (c)->q[17].u8[0];
    _t.u8[1] = (c)->q[18].u8[1] | (c)->q[17].u8[1];
    _t.u8[2] = (c)->q[18].u8[2] | (c)->q[17].u8[2];
    _t.u8[3] = (c)->q[18].u8[3] | (c)->q[17].u8[3];
    _t.u8[4] = (c)->q[18].u8[4] | (c)->q[17].u8[4];
    _t.u8[5] = (c)->q[18].u8[5] | (c)->q[17].u8[5];
    _t.u8[6] = (c)->q[18].u8[6] | (c)->q[17].u8[6];
    _t.u8[7] = (c)->q[18].u8[7] | (c)->q[17].u8[7];
    _t.u8[8] = (c)->q[18].u8[8] | (c)->q[17].u8[8];
    _t.u8[9] = (c)->q[18].u8[9] | (c)->q[17].u8[9];
    _t.u8[10] = (c)->q[18].u8[10] | (c)->q[17].u8[10];
    _t.u8[11] = (c)->q[18].u8[11] | (c)->q[17].u8[11];
    _t.u8[12] = (c)->q[18].u8[12] | (c)->q[17].u8[12];
    _t.u8[13] = (c)->q[18].u8[13] | (c)->q[17].u8[13];
    _t.u8[14] = (c)->q[18].u8[14] | (c)->q[17].u8[14];
    _t.u8[15] = (c)->q[18].u8[15] | (c)->q[17].u8[15];
    (c)->q[6] = _t; }
  /* c2620: orr v20.16b, v20.16b, v29.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[20].u8[0] | (c)->q[29].u8[0];
    _t.u8[1] = (c)->q[20].u8[1] | (c)->q[29].u8[1];
    _t.u8[2] = (c)->q[20].u8[2] | (c)->q[29].u8[2];
    _t.u8[3] = (c)->q[20].u8[3] | (c)->q[29].u8[3];
    _t.u8[4] = (c)->q[20].u8[4] | (c)->q[29].u8[4];
    _t.u8[5] = (c)->q[20].u8[5] | (c)->q[29].u8[5];
    _t.u8[6] = (c)->q[20].u8[6] | (c)->q[29].u8[6];
    _t.u8[7] = (c)->q[20].u8[7] | (c)->q[29].u8[7];
    _t.u8[8] = (c)->q[20].u8[8] | (c)->q[29].u8[8];
    _t.u8[9] = (c)->q[20].u8[9] | (c)->q[29].u8[9];
    _t.u8[10] = (c)->q[20].u8[10] | (c)->q[29].u8[10];
    _t.u8[11] = (c)->q[20].u8[11] | (c)->q[29].u8[11];
    _t.u8[12] = (c)->q[20].u8[12] | (c)->q[29].u8[12];
    _t.u8[13] = (c)->q[20].u8[13] | (c)->q[29].u8[13];
    _t.u8[14] = (c)->q[20].u8[14] | (c)->q[29].u8[14];
    _t.u8[15] = (c)->q[20].u8[15] | (c)->q[29].u8[15];
    (c)->q[20] = _t; }
  /* c2624: orr v22.16b, v23.16b, v22.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[23].u8[0] | (c)->q[22].u8[0];
    _t.u8[1] = (c)->q[23].u8[1] | (c)->q[22].u8[1];
    _t.u8[2] = (c)->q[23].u8[2] | (c)->q[22].u8[2];
    _t.u8[3] = (c)->q[23].u8[3] | (c)->q[22].u8[3];
    _t.u8[4] = (c)->q[23].u8[4] | (c)->q[22].u8[4];
    _t.u8[5] = (c)->q[23].u8[5] | (c)->q[22].u8[5];
    _t.u8[6] = (c)->q[23].u8[6] | (c)->q[22].u8[6];
    _t.u8[7] = (c)->q[23].u8[7] | (c)->q[22].u8[7];
    _t.u8[8] = (c)->q[23].u8[8] | (c)->q[22].u8[8];
    _t.u8[9] = (c)->q[23].u8[9] | (c)->q[22].u8[9];
    _t.u8[10] = (c)->q[23].u8[10] | (c)->q[22].u8[10];
    _t.u8[11] = (c)->q[23].u8[11] | (c)->q[22].u8[11];
    _t.u8[12] = (c)->q[23].u8[12] | (c)->q[22].u8[12];
    _t.u8[13] = (c)->q[23].u8[13] | (c)->q[22].u8[13];
    _t.u8[14] = (c)->q[23].u8[14] | (c)->q[22].u8[14];
    _t.u8[15] = (c)->q[23].u8[15] | (c)->q[22].u8[15];
    (c)->q[22] = _t; }
  /* c2628: orr v23.16b, v26.16b, v28.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[26].u8[0] | (c)->q[28].u8[0];
    _t.u8[1] = (c)->q[26].u8[1] | (c)->q[28].u8[1];
    _t.u8[2] = (c)->q[26].u8[2] | (c)->q[28].u8[2];
    _t.u8[3] = (c)->q[26].u8[3] | (c)->q[28].u8[3];
    _t.u8[4] = (c)->q[26].u8[4] | (c)->q[28].u8[4];
    _t.u8[5] = (c)->q[26].u8[5] | (c)->q[28].u8[5];
    _t.u8[6] = (c)->q[26].u8[6] | (c)->q[28].u8[6];
    _t.u8[7] = (c)->q[26].u8[7] | (c)->q[28].u8[7];
    _t.u8[8] = (c)->q[26].u8[8] | (c)->q[28].u8[8];
    _t.u8[9] = (c)->q[26].u8[9] | (c)->q[28].u8[9];
    _t.u8[10] = (c)->q[26].u8[10] | (c)->q[28].u8[10];
    _t.u8[11] = (c)->q[26].u8[11] | (c)->q[28].u8[11];
    _t.u8[12] = (c)->q[26].u8[12] | (c)->q[28].u8[12];
    _t.u8[13] = (c)->q[26].u8[13] | (c)->q[28].u8[13];
    _t.u8[14] = (c)->q[26].u8[14] | (c)->q[28].u8[14];
    _t.u8[15] = (c)->q[26].u8[15] | (c)->q[28].u8[15];
    (c)->q[23] = _t; }
  /* c262c: orr v1.16b, v1.16b, v6.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[1].u8[0] | (c)->q[6].u8[0];
    _t.u8[1] = (c)->q[1].u8[1] | (c)->q[6].u8[1];
    _t.u8[2] = (c)->q[1].u8[2] | (c)->q[6].u8[2];
    _t.u8[3] = (c)->q[1].u8[3] | (c)->q[6].u8[3];
    _t.u8[4] = (c)->q[1].u8[4] | (c)->q[6].u8[4];
    _t.u8[5] = (c)->q[1].u8[5] | (c)->q[6].u8[5];
    _t.u8[6] = (c)->q[1].u8[6] | (c)->q[6].u8[6];
    _t.u8[7] = (c)->q[1].u8[7] | (c)->q[6].u8[7];
    _t.u8[8] = (c)->q[1].u8[8] | (c)->q[6].u8[8];
    _t.u8[9] = (c)->q[1].u8[9] | (c)->q[6].u8[9];
    _t.u8[10] = (c)->q[1].u8[10] | (c)->q[6].u8[10];
    _t.u8[11] = (c)->q[1].u8[11] | (c)->q[6].u8[11];
    _t.u8[12] = (c)->q[1].u8[12] | (c)->q[6].u8[12];
    _t.u8[13] = (c)->q[1].u8[13] | (c)->q[6].u8[13];
    _t.u8[14] = (c)->q[1].u8[14] | (c)->q[6].u8[14];
    _t.u8[15] = (c)->q[1].u8[15] | (c)->q[6].u8[15];
    (c)->q[1] = _t; }
  /* c2630: orr v7.16b, v20.16b, v7.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[20].u8[0] | (c)->q[7].u8[0];
    _t.u8[1] = (c)->q[20].u8[1] | (c)->q[7].u8[1];
    _t.u8[2] = (c)->q[20].u8[2] | (c)->q[7].u8[2];
    _t.u8[3] = (c)->q[20].u8[3] | (c)->q[7].u8[3];
    _t.u8[4] = (c)->q[20].u8[4] | (c)->q[7].u8[4];
    _t.u8[5] = (c)->q[20].u8[5] | (c)->q[7].u8[5];
    _t.u8[6] = (c)->q[20].u8[6] | (c)->q[7].u8[6];
    _t.u8[7] = (c)->q[20].u8[7] | (c)->q[7].u8[7];
    _t.u8[8] = (c)->q[20].u8[8] | (c)->q[7].u8[8];
    _t.u8[9] = (c)->q[20].u8[9] | (c)->q[7].u8[9];
    _t.u8[10] = (c)->q[20].u8[10] | (c)->q[7].u8[10];
    _t.u8[11] = (c)->q[20].u8[11] | (c)->q[7].u8[11];
    _t.u8[12] = (c)->q[20].u8[12] | (c)->q[7].u8[12];
    _t.u8[13] = (c)->q[20].u8[13] | (c)->q[7].u8[13];
    _t.u8[14] = (c)->q[20].u8[14] | (c)->q[7].u8[14];
    _t.u8[15] = (c)->q[20].u8[15] | (c)->q[7].u8[15];
    (c)->q[7] = _t; }
  /* c2634: orr v3.16b, v22.16b, v3.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[22].u8[0] | (c)->q[3].u8[0];
    _t.u8[1] = (c)->q[22].u8[1] | (c)->q[3].u8[1];
    _t.u8[2] = (c)->q[22].u8[2] | (c)->q[3].u8[2];
    _t.u8[3] = (c)->q[22].u8[3] | (c)->q[3].u8[3];
    _t.u8[4] = (c)->q[22].u8[4] | (c)->q[3].u8[4];
    _t.u8[5] = (c)->q[22].u8[5] | (c)->q[3].u8[5];
    _t.u8[6] = (c)->q[22].u8[6] | (c)->q[3].u8[6];
    _t.u8[7] = (c)->q[22].u8[7] | (c)->q[3].u8[7];
    _t.u8[8] = (c)->q[22].u8[8] | (c)->q[3].u8[8];
    _t.u8[9] = (c)->q[22].u8[9] | (c)->q[3].u8[9];
    _t.u8[10] = (c)->q[22].u8[10] | (c)->q[3].u8[10];
    _t.u8[11] = (c)->q[22].u8[11] | (c)->q[3].u8[11];
    _t.u8[12] = (c)->q[22].u8[12] | (c)->q[3].u8[12];
    _t.u8[13] = (c)->q[22].u8[13] | (c)->q[3].u8[13];
    _t.u8[14] = (c)->q[22].u8[14] | (c)->q[3].u8[14];
    _t.u8[15] = (c)->q[22].u8[15] | (c)->q[3].u8[15];
    (c)->q[3] = _t; }
  /* c2638: orr v16.16b, v23.16b, v16.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[23].u8[0] | (c)->q[16].u8[0];
    _t.u8[1] = (c)->q[23].u8[1] | (c)->q[16].u8[1];
    _t.u8[2] = (c)->q[23].u8[2] | (c)->q[16].u8[2];
    _t.u8[3] = (c)->q[23].u8[3] | (c)->q[16].u8[3];
    _t.u8[4] = (c)->q[23].u8[4] | (c)->q[16].u8[4];
    _t.u8[5] = (c)->q[23].u8[5] | (c)->q[16].u8[5];
    _t.u8[6] = (c)->q[23].u8[6] | (c)->q[16].u8[6];
    _t.u8[7] = (c)->q[23].u8[7] | (c)->q[16].u8[7];
    _t.u8[8] = (c)->q[23].u8[8] | (c)->q[16].u8[8];
    _t.u8[9] = (c)->q[23].u8[9] | (c)->q[16].u8[9];
    _t.u8[10] = (c)->q[23].u8[10] | (c)->q[16].u8[10];
    _t.u8[11] = (c)->q[23].u8[11] | (c)->q[16].u8[11];
    _t.u8[12] = (c)->q[23].u8[12] | (c)->q[16].u8[12];
    _t.u8[13] = (c)->q[23].u8[13] | (c)->q[16].u8[13];
    _t.u8[14] = (c)->q[23].u8[14] | (c)->q[16].u8[14];
    _t.u8[15] = (c)->q[23].u8[15] | (c)->q[16].u8[15];
    (c)->q[16] = _t; }
  /* c263c: orr v6.16b, v16.16b, v7.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[16].u8[0] | (c)->q[7].u8[0];
    _t.u8[1] = (c)->q[16].u8[1] | (c)->q[7].u8[1];
    _t.u8[2] = (c)->q[16].u8[2] | (c)->q[7].u8[2];
    _t.u8[3] = (c)->q[16].u8[3] | (c)->q[7].u8[3];
    _t.u8[4] = (c)->q[16].u8[4] | (c)->q[7].u8[4];
    _t.u8[5] = (c)->q[16].u8[5] | (c)->q[7].u8[5];
    _t.u8[6] = (c)->q[16].u8[6] | (c)->q[7].u8[6];
    _t.u8[7] = (c)->q[16].u8[7] | (c)->q[7].u8[7];
    _t.u8[8] = (c)->q[16].u8[8] | (c)->q[7].u8[8];
    _t.u8[9] = (c)->q[16].u8[9] | (c)->q[7].u8[9];
    _t.u8[10] = (c)->q[16].u8[10] | (c)->q[7].u8[10];
    _t.u8[11] = (c)->q[16].u8[11] | (c)->q[7].u8[11];
    _t.u8[12] = (c)->q[16].u8[12] | (c)->q[7].u8[12];
    _t.u8[13] = (c)->q[16].u8[13] | (c)->q[7].u8[13];
    _t.u8[14] = (c)->q[16].u8[14] | (c)->q[7].u8[14];
    _t.u8[15] = (c)->q[16].u8[15] | (c)->q[7].u8[15];
    (c)->q[6] = _t; }
  /* c2640: orr v3.16b, v3.16b, v5.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[3].u8[0] | (c)->q[5].u8[0];
    _t.u8[1] = (c)->q[3].u8[1] | (c)->q[5].u8[1];
    _t.u8[2] = (c)->q[3].u8[2] | (c)->q[5].u8[2];
    _t.u8[3] = (c)->q[3].u8[3] | (c)->q[5].u8[3];
    _t.u8[4] = (c)->q[3].u8[4] | (c)->q[5].u8[4];
    _t.u8[5] = (c)->q[3].u8[5] | (c)->q[5].u8[5];
    _t.u8[6] = (c)->q[3].u8[6] | (c)->q[5].u8[6];
    _t.u8[7] = (c)->q[3].u8[7] | (c)->q[5].u8[7];
    _t.u8[8] = (c)->q[3].u8[8] | (c)->q[5].u8[8];
    _t.u8[9] = (c)->q[3].u8[9] | (c)->q[5].u8[9];
    _t.u8[10] = (c)->q[3].u8[10] | (c)->q[5].u8[10];
    _t.u8[11] = (c)->q[3].u8[11] | (c)->q[5].u8[11];
    _t.u8[12] = (c)->q[3].u8[12] | (c)->q[5].u8[12];
    _t.u8[13] = (c)->q[3].u8[13] | (c)->q[5].u8[13];
    _t.u8[14] = (c)->q[3].u8[14] | (c)->q[5].u8[14];
    _t.u8[15] = (c)->q[3].u8[15] | (c)->q[5].u8[15];
    (c)->q[3] = _t; }
  /* c2644: orr v1.16b, v6.16b, v1.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[6].u8[0] | (c)->q[1].u8[0];
    _t.u8[1] = (c)->q[6].u8[1] | (c)->q[1].u8[1];
    _t.u8[2] = (c)->q[6].u8[2] | (c)->q[1].u8[2];
    _t.u8[3] = (c)->q[6].u8[3] | (c)->q[1].u8[3];
    _t.u8[4] = (c)->q[6].u8[4] | (c)->q[1].u8[4];
    _t.u8[5] = (c)->q[6].u8[5] | (c)->q[1].u8[5];
    _t.u8[6] = (c)->q[6].u8[6] | (c)->q[1].u8[6];
    _t.u8[7] = (c)->q[6].u8[7] | (c)->q[1].u8[7];
    _t.u8[8] = (c)->q[6].u8[8] | (c)->q[1].u8[8];
    _t.u8[9] = (c)->q[6].u8[9] | (c)->q[1].u8[9];
    _t.u8[10] = (c)->q[6].u8[10] | (c)->q[1].u8[10];
    _t.u8[11] = (c)->q[6].u8[11] | (c)->q[1].u8[11];
    _t.u8[12] = (c)->q[6].u8[12] | (c)->q[1].u8[12];
    _t.u8[13] = (c)->q[6].u8[13] | (c)->q[1].u8[13];
    _t.u8[14] = (c)->q[6].u8[14] | (c)->q[1].u8[14];
    _t.u8[15] = (c)->q[6].u8[15] | (c)->q[1].u8[15];
    (c)->q[1] = _t; }
  /* c2648: orr v2.16b, v2.16b, v3.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[2].u8[0] | (c)->q[3].u8[0];
    _t.u8[1] = (c)->q[2].u8[1] | (c)->q[3].u8[1];
    _t.u8[2] = (c)->q[2].u8[2] | (c)->q[3].u8[2];
    _t.u8[3] = (c)->q[2].u8[3] | (c)->q[3].u8[3];
    _t.u8[4] = (c)->q[2].u8[4] | (c)->q[3].u8[4];
    _t.u8[5] = (c)->q[2].u8[5] | (c)->q[3].u8[5];
    _t.u8[6] = (c)->q[2].u8[6] | (c)->q[3].u8[6];
    _t.u8[7] = (c)->q[2].u8[7] | (c)->q[3].u8[7];
    _t.u8[8] = (c)->q[2].u8[8] | (c)->q[3].u8[8];
    _t.u8[9] = (c)->q[2].u8[9] | (c)->q[3].u8[9];
    _t.u8[10] = (c)->q[2].u8[10] | (c)->q[3].u8[10];
    _t.u8[11] = (c)->q[2].u8[11] | (c)->q[3].u8[11];
    _t.u8[12] = (c)->q[2].u8[12] | (c)->q[3].u8[12];
    _t.u8[13] = (c)->q[2].u8[13] | (c)->q[3].u8[13];
    _t.u8[14] = (c)->q[2].u8[14] | (c)->q[3].u8[14];
    _t.u8[15] = (c)->q[2].u8[15] | (c)->q[3].u8[15];
    (c)->q[2] = _t; }
  /* c264c: orr v1.16b, v2.16b, v1.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[2].u8[0] | (c)->q[1].u8[0];
    _t.u8[1] = (c)->q[2].u8[1] | (c)->q[1].u8[1];
    _t.u8[2] = (c)->q[2].u8[2] | (c)->q[1].u8[2];
    _t.u8[3] = (c)->q[2].u8[3] | (c)->q[1].u8[3];
    _t.u8[4] = (c)->q[2].u8[4] | (c)->q[1].u8[4];
    _t.u8[5] = (c)->q[2].u8[5] | (c)->q[1].u8[5];
    _t.u8[6] = (c)->q[2].u8[6] | (c)->q[1].u8[6];
    _t.u8[7] = (c)->q[2].u8[7] | (c)->q[1].u8[7];
    _t.u8[8] = (c)->q[2].u8[8] | (c)->q[1].u8[8];
    _t.u8[9] = (c)->q[2].u8[9] | (c)->q[1].u8[9];
    _t.u8[10] = (c)->q[2].u8[10] | (c)->q[1].u8[10];
    _t.u8[11] = (c)->q[2].u8[11] | (c)->q[1].u8[11];
    _t.u8[12] = (c)->q[2].u8[12] | (c)->q[1].u8[12];
    _t.u8[13] = (c)->q[2].u8[13] | (c)->q[1].u8[13];
    _t.u8[14] = (c)->q[2].u8[14] | (c)->q[1].u8[14];
    _t.u8[15] = (c)->q[2].u8[15] | (c)->q[1].u8[15];
    (c)->q[1] = _t; }
  /* c2650: ext v2.16b, v1.16b, v1.16b, #8 */
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
    (c)->q[2] = _t; }
  /* c2654: orr v1.8b, v1.8b, v2.8b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[1].u8[0] | (c)->q[2].u8[0];
    _t.u8[1] = (c)->q[1].u8[1] | (c)->q[2].u8[1];
    _t.u8[2] = (c)->q[1].u8[2] | (c)->q[2].u8[2];
    _t.u8[3] = (c)->q[1].u8[3] | (c)->q[2].u8[3];
    _t.u8[4] = (c)->q[1].u8[4] | (c)->q[2].u8[4];
    _t.u8[5] = (c)->q[1].u8[5] | (c)->q[2].u8[5];
    _t.u8[6] = (c)->q[1].u8[6] | (c)->q[2].u8[6];
    _t.u8[7] = (c)->q[1].u8[7] | (c)->q[2].u8[7];
    (c)->q[1] = _t; }
  /* c2658: fmov x13, d1 */
  ARC_X_W(c, 13, ARC_DU_R(c, 1));
  /* c265c: cbz x14, #0xc212c */
  if ((ARC_X_R(c, 14)) == 0) goto L_c212c;
L_c2660:;
  /* c2660: cbz x13, #0xc212c */
  if ((ARC_X_R(c, 13)) == 0) goto L_c212c;
L_c2664:;
  /* c2664: rbit x15, x13 */
  ARC_X_W(c, 15, arc_rbit64(ARC_X_R(c, 13)));
  /* c2668: rbit x16, x14 */
  ARC_X_W(c, 16, arc_rbit64(ARC_X_R(c, 14)));
  /* c266c: sub x17, x13, #1 */
  ARC_X_W(c, 17, (ARC_X_R(c, 13) - UINT64_C(1)));
  /* c2670: sub x3, x14, #1 */
  ARC_X_W(c, 3, (ARC_X_R(c, 14) - UINT64_C(1)));
  /* c2674: and x13, x17, x13 */
  ARC_X_W(c, 13, (ARC_X_R(c, 17) & ARC_X_R(c, 13)));
  /* c2678: clz x15, x15 */
  ARC_X_W(c, 15, arc_clz64(ARC_X_R(c, 15)));
  /* c267c: clz x16, x16 */
  ARC_X_W(c, 16, arc_clz64(ARC_X_R(c, 16)));
  /* c2680: and x14, x3, x14 */
  ARC_X_W(c, 14, (ARC_X_R(c, 3) & ARC_X_R(c, 14)));
  /* c2684: sub x15, x12, x15 */
  ARC_X_W(c, 15, (ARC_X_R(c, 12) - ARC_X_R(c, 15)));
  /* c2688: ldrb w0, [x11, x16] */
  ARC_W_W(c, 0, arc_ld8((ARC_X_R(c, 11) + ARC_X_R(c, 16))));
  /* c268c: ldrb w1, [x15] */
  ARC_W_W(c, 1, arc_ld8(ARC_X_R(c, 15)));
  /* c2690: strb w1, [x11, x16] */
  arc_st8((ARC_X_R(c, 11) + ARC_X_R(c, 16)), ARC_W_R(c, 1));
  /* c2694: strb w0, [x15] */
  arc_st8(ARC_X_R(c, 15), ARC_W_R(c, 0));
  /* c2698: cbz x13, #0xc212c */
  if ((ARC_X_R(c, 13)) == 0) goto L_c212c;
  /* c269c: cbnz x14, #0xc2664 */
  if ((ARC_X_R(c, 14)) != 0) goto L_c2664;
  /* c26a0: b #0xc212c */
  goto L_c212c;
L_c26a4:;
  /* c26a4: mov x13, xzr */
  ARC_X_W(c, 13, ARC_X_R(c, 31));
  /* c26a8: mov w16, #1 */
  ARC_W_W(c, 16, UINT64_C(1));
  /* c26ac: b #0xc26d0 */
  goto L_c26d0;
L_c26b0:;
  /* c26b0: orr x17, x13, x14 */
  ARC_X_W(c, 17, (ARC_X_R(c, 13) | ARC_X_R(c, 14)));
  /* c26b4: cbz x17, #0xc26d0 */
  if ((ARC_X_R(c, 17)) == 0) goto L_c26d0;
  /* c26b8: sub x15, x15, #0x3f */
  ARC_X_W(c, 15, (ARC_X_R(c, 15) - UINT64_C(63)));
  /* c26bc: mov w0, #0x40 */
  ARC_W_W(c, 0, UINT64_C(64));
  /* c26c0: mov w17, #0x40 */
  ARC_W_W(c, 17, UINT64_C(64));
  /* c26c4: cbz x14, #0xc26e0 */
  if ((ARC_X_R(c, 14)) == 0) goto L_c26e0;
  /* c26c8: cbnz w16, #0xc296c */
  if ((ARC_W_R(c, 16)) != 0) goto L_c296c;
  /* c26cc: b #0xc2c00 */
  goto L_c2c00;
L_c26d0:;
  /* c26d0: add x14, x15, #1 */
  ARC_X_W(c, 14, (ARC_X_R(c, 15) + UINT64_C(1)));
  /* c26d4: add x15, x14, x14, lsr #63 */
  ARC_X_W(c, 15, (ARC_X_R(c, 14) + ((uint64_t)(ARC_X_R(c, 14)) >> 63)));
  /* c26d8: asr x15, x15, #1 */
  ARC_X_W(c, 15, ((uint64_t)((int64_t)(ARC_X_R(c, 15)) >> ((UINT64_C(1)) & 63))));
  /* c26dc: sub x0, x14, x15 */
  ARC_X_W(c, 0, (ARC_X_R(c, 14) - ARC_X_R(c, 15)));
L_c26e0:;
  /* c26e0: cmp x15, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 15), UINT64_C(1));
  /* c26e4: b.lt #0xc2700 */
  if (ARC_COND(c, 11)) goto L_c2700;
  /* c26e8: cmp x15, #4 */
  (void)arc_sub64(c, ARC_X_R(c, 15), UINT64_C(4));
  /* c26ec: b.hs #0xc2708 */
  if (ARC_COND(c, 2)) goto L_c2708;
  /* c26f0: mov x14, xzr */
  ARC_X_W(c, 14, ARC_X_R(c, 31));
  /* c26f4: mov x17, xzr */
  ARC_X_W(c, 17, ARC_X_R(c, 31));
  /* c26f8: mov x1, x11 */
  ARC_X_W(c, 1, ARC_X_R(c, 11));
  /* c26fc: b #0xc2940 */
  goto L_c2940;
L_c2700:;
  /* c2700: mov x14, xzr */
  ARC_X_W(c, 14, ARC_X_R(c, 31));
  /* c2704: b #0xc2960 */
  goto L_c2960;
L_c2708:;
  /* c2708: cmp x15, #0x10 */
  (void)arc_sub64(c, ARC_X_R(c, 15), UINT64_C(16));
  /* c270c: b.hs #0xc271c */
  if (ARC_COND(c, 2)) goto L_c271c;
  /* c2710: mov x14, xzr */
  ARC_X_W(c, 14, ARC_X_R(c, 31));
  /* c2714: mov x17, xzr */
  ARC_X_W(c, 17, ARC_X_R(c, 31));
  /* c2718: b #0xc2894 */
  goto L_c2894;
L_c271c:;
  /* c271c: adrp x17, #0x52000 */
  ARC_X_W(c, 17, (arc_image_bases[1] + UINT64_C(335872)));
  /* c2720: movi v3.2d, #0000000000000000 */
  arc_v_clear(c, 3);
  /* c2724: movi v4.2d, #0000000000000000 */
  arc_v_clear(c, 4);
  /* c2728: ldr q0, [x17, #0xa70] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 17) + INT64_C(2672))), arc_ld64((ARC_X_R(c, 17) + INT64_C(2672)) + 8));
  /* c272c: adrp x17, #0x52000 */
  ARC_X_W(c, 17, (arc_image_bases[1] + UINT64_C(335872)));
  /* c2730: movi v6.2d, #0000000000000000 */
  arc_v_clear(c, 6);
  /* c2734: ldr q1, [x17, #0xc60] */
  arc_q_w(c, 1, arc_ld64((ARC_X_R(c, 17) + INT64_C(3168))), arc_ld64((ARC_X_R(c, 17) + INT64_C(3168)) + 8));
  /* c2738: adrp x17, #0x52000 */
  ARC_X_W(c, 17, (arc_image_bases[1] + UINT64_C(335872)));
  /* c273c: movi v5.2d, #0000000000000000 */
  arc_v_clear(c, 5);
  /* c2740: ldr q2, [x17, #0xa10] */
  arc_q_w(c, 2, arc_ld64((ARC_X_R(c, 17) + INT64_C(2576))), arc_ld64((ARC_X_R(c, 17) + INT64_C(2576)) + 8));
  /* c2744: adrp x17, #0x52000 */
  ARC_X_W(c, 17, (arc_image_bases[1] + UINT64_C(335872)));
  /* c2748: movi v17.2d, #0000000000000000 */
  arc_v_clear(c, 17);
  /* c274c: ldr q19, [x17, #0xc00] */
  arc_q_w(c, 19, arc_ld64((ARC_X_R(c, 17) + INT64_C(3072))), arc_ld64((ARC_X_R(c, 17) + INT64_C(3072)) + 8));
  /* c2750: adrp x17, #0x52000 */
  ARC_X_W(c, 17, (arc_image_bases[1] + UINT64_C(335872)));
  /* c2754: movi v7.2d, #0000000000000000 */
  arc_v_clear(c, 7);
  /* c2758: ldr q20, [x17, #0xcc0] */
  arc_q_w(c, 20, arc_ld64((ARC_X_R(c, 17) + INT64_C(3264))), arc_ld64((ARC_X_R(c, 17) + INT64_C(3264)) + 8));
  /* c275c: adrp x17, #0x52000 */
  ARC_X_W(c, 17, (arc_image_bases[1] + UINT64_C(335872)));
  /* c2760: movi v18.2d, #0000000000000000 */
  arc_v_clear(c, 18);
  /* c2764: movi v16.2d, #0000000000000000 */
  arc_v_clear(c, 16);
  /* c2768: ldr q22, [x17, #0xc70] */
  arc_q_w(c, 22, arc_ld64((ARC_X_R(c, 17) + INT64_C(3184))), arc_ld64((ARC_X_R(c, 17) + INT64_C(3184)) + 8));
  /* c276c: adrp x17, #0x52000 */
  ARC_X_W(c, 17, (arc_image_bases[1] + UINT64_C(335872)));
  /* c2770: dup v21.16b, w8 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (ARC_W_R(c, 8));
    _t.u8[1] = (ARC_W_R(c, 8));
    _t.u8[2] = (ARC_W_R(c, 8));
    _t.u8[3] = (ARC_W_R(c, 8));
    _t.u8[4] = (ARC_W_R(c, 8));
    _t.u8[5] = (ARC_W_R(c, 8));
    _t.u8[6] = (ARC_W_R(c, 8));
    _t.u8[7] = (ARC_W_R(c, 8));
    _t.u8[8] = (ARC_W_R(c, 8));
    _t.u8[9] = (ARC_W_R(c, 8));
    _t.u8[10] = (ARC_W_R(c, 8));
    _t.u8[11] = (ARC_W_R(c, 8));
    _t.u8[12] = (ARC_W_R(c, 8));
    _t.u8[13] = (ARC_W_R(c, 8));
    _t.u8[14] = (ARC_W_R(c, 8));
    _t.u8[15] = (ARC_W_R(c, 8));
    (c)->q[21] = _t; }
  /* c2774: ldr q23, [x17, #0xc10] */
  arc_q_w(c, 23, arc_ld64((ARC_X_R(c, 17) + INT64_C(3088))), arc_ld64((ARC_X_R(c, 17) + INT64_C(3088)) + 8));
  /* c2778: adrp x17, #0x52000 */
  ARC_X_W(c, 17, (arc_image_bases[1] + UINT64_C(335872)));
  /* c277c: ldr q24, [x17, #0xa80] */
  arc_q_w(c, 24, arc_ld64((ARC_X_R(c, 17) + INT64_C(2688))), arc_ld64((ARC_X_R(c, 17) + INT64_C(2688)) + 8));
  /* c2780: mov x14, xzr */
  ARC_X_W(c, 14, ARC_X_R(c, 31));
  /* c2784: and x17, x15, #0x7ffffffffffffff0 */
  ARC_X_W(c, 17, (ARC_X_R(c, 15) & UINT64_C(9223372036854775792)));
L_c2788:;
  /* c2788: ldr q25, [x11, x14] */
  arc_q_w(c, 25, arc_ld64((ARC_X_R(c, 11) + ARC_X_R(c, 14))), arc_ld64((ARC_X_R(c, 11) + ARC_X_R(c, 14)) + 8));
  /* c278c: dup v29.2d, x5 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 5));
    _t.u64[1] = (ARC_X_R(c, 5));
    (c)->q[29] = _t; }
  /* c2790: add x14, x14, #0x10 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) + UINT64_C(16)));
  /* c2794: cmp x17, x14 */
  (void)arc_sub64(c, ARC_X_R(c, 17), ARC_X_R(c, 14));
  /* c2798: cmge v25.16b, v25.16b, v21.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = ((c)->q[25].i8[0] >= (c)->q[21].i8[0]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[1] = ((c)->q[25].i8[1] >= (c)->q[21].i8[1]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[2] = ((c)->q[25].i8[2] >= (c)->q[21].i8[2]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[3] = ((c)->q[25].i8[3] >= (c)->q[21].i8[3]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[4] = ((c)->q[25].i8[4] >= (c)->q[21].i8[4]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[5] = ((c)->q[25].i8[5] >= (c)->q[21].i8[5]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[6] = ((c)->q[25].i8[6] >= (c)->q[21].i8[6]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[7] = ((c)->q[25].i8[7] >= (c)->q[21].i8[7]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[8] = ((c)->q[25].i8[8] >= (c)->q[21].i8[8]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[9] = ((c)->q[25].i8[9] >= (c)->q[21].i8[9]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[10] = ((c)->q[25].i8[10] >= (c)->q[21].i8[10]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[11] = ((c)->q[25].i8[11] >= (c)->q[21].i8[11]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[12] = ((c)->q[25].i8[12] >= (c)->q[21].i8[12]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[13] = ((c)->q[25].i8[13] >= (c)->q[21].i8[13]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[14] = ((c)->q[25].i8[14] >= (c)->q[21].i8[14]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[15] = ((c)->q[25].i8[15] >= (c)->q[21].i8[15]) ? (uint8_t)~(uint8_t)0 : 0;
    (c)->q[25] = _t; }
  /* c279c: ushll2 v26.8h, v25.16b, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = (uint16_t)((uint16_t)((c)->q[25].u8[8]) << 0);
    _t.u16[1] = (uint16_t)((uint16_t)((c)->q[25].u8[9]) << 0);
    _t.u16[2] = (uint16_t)((uint16_t)((c)->q[25].u8[10]) << 0);
    _t.u16[3] = (uint16_t)((uint16_t)((c)->q[25].u8[11]) << 0);
    _t.u16[4] = (uint16_t)((uint16_t)((c)->q[25].u8[12]) << 0);
    _t.u16[5] = (uint16_t)((uint16_t)((c)->q[25].u8[13]) << 0);
    _t.u16[6] = (uint16_t)((uint16_t)((c)->q[25].u8[14]) << 0);
    _t.u16[7] = (uint16_t)((uint16_t)((c)->q[25].u8[15]) << 0);
    (c)->q[26] = _t; }
  /* c27a0: ushll v25.8h, v25.8b, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = (uint16_t)((uint16_t)((c)->q[25].u8[0]) << 0);
    _t.u16[1] = (uint16_t)((uint16_t)((c)->q[25].u8[1]) << 0);
    _t.u16[2] = (uint16_t)((uint16_t)((c)->q[25].u8[2]) << 0);
    _t.u16[3] = (uint16_t)((uint16_t)((c)->q[25].u8[3]) << 0);
    _t.u16[4] = (uint16_t)((uint16_t)((c)->q[25].u8[4]) << 0);
    _t.u16[5] = (uint16_t)((uint16_t)((c)->q[25].u8[5]) << 0);
    _t.u16[6] = (uint16_t)((uint16_t)((c)->q[25].u8[6]) << 0);
    _t.u16[7] = (uint16_t)((uint16_t)((c)->q[25].u8[7]) << 0);
    (c)->q[25] = _t; }
  /* c27a4: ushll2 v27.4s, v26.8h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((uint32_t)((c)->q[26].u16[4]) << 0);
    _t.u32[1] = (uint32_t)((uint32_t)((c)->q[26].u16[5]) << 0);
    _t.u32[2] = (uint32_t)((uint32_t)((c)->q[26].u16[6]) << 0);
    _t.u32[3] = (uint32_t)((uint32_t)((c)->q[26].u16[7]) << 0);
    (c)->q[27] = _t; }
  /* c27a8: ushll v26.4s, v26.4h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((uint32_t)((c)->q[26].u16[0]) << 0);
    _t.u32[1] = (uint32_t)((uint32_t)((c)->q[26].u16[1]) << 0);
    _t.u32[2] = (uint32_t)((uint32_t)((c)->q[26].u16[2]) << 0);
    _t.u32[3] = (uint32_t)((uint32_t)((c)->q[26].u16[3]) << 0);
    (c)->q[26] = _t; }
  /* c27ac: ushll2 v28.4s, v25.8h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((uint32_t)((c)->q[25].u16[4]) << 0);
    _t.u32[1] = (uint32_t)((uint32_t)((c)->q[25].u16[5]) << 0);
    _t.u32[2] = (uint32_t)((uint32_t)((c)->q[25].u16[6]) << 0);
    _t.u32[3] = (uint32_t)((uint32_t)((c)->q[25].u16[7]) << 0);
    (c)->q[28] = _t; }
  /* c27b0: ushll v25.4s, v25.4h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((uint32_t)((c)->q[25].u16[0]) << 0);
    _t.u32[1] = (uint32_t)((uint32_t)((c)->q[25].u16[1]) << 0);
    _t.u32[2] = (uint32_t)((uint32_t)((c)->q[25].u16[2]) << 0);
    _t.u32[3] = (uint32_t)((uint32_t)((c)->q[25].u16[3]) << 0);
    (c)->q[25] = _t; }
  /* c27b4: ushll2 v30.2d, v27.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[27].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[27].u32[3]) << 0);
    (c)->q[30] = _t; }
  /* c27b8: ushll v27.2d, v27.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[27].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[27].u32[1]) << 0);
    (c)->q[27] = _t; }
  /* c27bc: ushll2 v31.2d, v26.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[26].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[26].u32[3]) << 0);
    (c)->q[31] = _t; }
  /* c27c0: ushll2 v8.2d, v28.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[28].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[28].u32[3]) << 0);
    (c)->q[8] = _t; }
  /* c27c4: ushll v26.2d, v26.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[26].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[26].u32[1]) << 0);
    (c)->q[26] = _t; }
  /* c27c8: ushll v28.2d, v28.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[28].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[28].u32[1]) << 0);
    (c)->q[28] = _t; }
  /* c27cc: ushll2 v9.2d, v25.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[25].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[25].u32[3]) << 0);
    (c)->q[9] = _t; }
  /* c27d0: ushll v25.2d, v25.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[25].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[25].u32[1]) << 0);
    (c)->q[25] = _t; }
  /* c27d4: and v30.16b, v30.16b, v29.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[30].u8[0] & (c)->q[29].u8[0];
    _t.u8[1] = (c)->q[30].u8[1] & (c)->q[29].u8[1];
    _t.u8[2] = (c)->q[30].u8[2] & (c)->q[29].u8[2];
    _t.u8[3] = (c)->q[30].u8[3] & (c)->q[29].u8[3];
    _t.u8[4] = (c)->q[30].u8[4] & (c)->q[29].u8[4];
    _t.u8[5] = (c)->q[30].u8[5] & (c)->q[29].u8[5];
    _t.u8[6] = (c)->q[30].u8[6] & (c)->q[29].u8[6];
    _t.u8[7] = (c)->q[30].u8[7] & (c)->q[29].u8[7];
    _t.u8[8] = (c)->q[30].u8[8] & (c)->q[29].u8[8];
    _t.u8[9] = (c)->q[30].u8[9] & (c)->q[29].u8[9];
    _t.u8[10] = (c)->q[30].u8[10] & (c)->q[29].u8[10];
    _t.u8[11] = (c)->q[30].u8[11] & (c)->q[29].u8[11];
    _t.u8[12] = (c)->q[30].u8[12] & (c)->q[29].u8[12];
    _t.u8[13] = (c)->q[30].u8[13] & (c)->q[29].u8[13];
    _t.u8[14] = (c)->q[30].u8[14] & (c)->q[29].u8[14];
    _t.u8[15] = (c)->q[30].u8[15] & (c)->q[29].u8[15];
    (c)->q[30] = _t; }
  /* c27d8: and v27.16b, v27.16b, v29.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[27].u8[0] & (c)->q[29].u8[0];
    _t.u8[1] = (c)->q[27].u8[1] & (c)->q[29].u8[1];
    _t.u8[2] = (c)->q[27].u8[2] & (c)->q[29].u8[2];
    _t.u8[3] = (c)->q[27].u8[3] & (c)->q[29].u8[3];
    _t.u8[4] = (c)->q[27].u8[4] & (c)->q[29].u8[4];
    _t.u8[5] = (c)->q[27].u8[5] & (c)->q[29].u8[5];
    _t.u8[6] = (c)->q[27].u8[6] & (c)->q[29].u8[6];
    _t.u8[7] = (c)->q[27].u8[7] & (c)->q[29].u8[7];
    _t.u8[8] = (c)->q[27].u8[8] & (c)->q[29].u8[8];
    _t.u8[9] = (c)->q[27].u8[9] & (c)->q[29].u8[9];
    _t.u8[10] = (c)->q[27].u8[10] & (c)->q[29].u8[10];
    _t.u8[11] = (c)->q[27].u8[11] & (c)->q[29].u8[11];
    _t.u8[12] = (c)->q[27].u8[12] & (c)->q[29].u8[12];
    _t.u8[13] = (c)->q[27].u8[13] & (c)->q[29].u8[13];
    _t.u8[14] = (c)->q[27].u8[14] & (c)->q[29].u8[14];
    _t.u8[15] = (c)->q[27].u8[15] & (c)->q[29].u8[15];
    (c)->q[27] = _t; }
  /* c27dc: and v31.16b, v31.16b, v29.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[31].u8[0] & (c)->q[29].u8[0];
    _t.u8[1] = (c)->q[31].u8[1] & (c)->q[29].u8[1];
    _t.u8[2] = (c)->q[31].u8[2] & (c)->q[29].u8[2];
    _t.u8[3] = (c)->q[31].u8[3] & (c)->q[29].u8[3];
    _t.u8[4] = (c)->q[31].u8[4] & (c)->q[29].u8[4];
    _t.u8[5] = (c)->q[31].u8[5] & (c)->q[29].u8[5];
    _t.u8[6] = (c)->q[31].u8[6] & (c)->q[29].u8[6];
    _t.u8[7] = (c)->q[31].u8[7] & (c)->q[29].u8[7];
    _t.u8[8] = (c)->q[31].u8[8] & (c)->q[29].u8[8];
    _t.u8[9] = (c)->q[31].u8[9] & (c)->q[29].u8[9];
    _t.u8[10] = (c)->q[31].u8[10] & (c)->q[29].u8[10];
    _t.u8[11] = (c)->q[31].u8[11] & (c)->q[29].u8[11];
    _t.u8[12] = (c)->q[31].u8[12] & (c)->q[29].u8[12];
    _t.u8[13] = (c)->q[31].u8[13] & (c)->q[29].u8[13];
    _t.u8[14] = (c)->q[31].u8[14] & (c)->q[29].u8[14];
    _t.u8[15] = (c)->q[31].u8[15] & (c)->q[29].u8[15];
    (c)->q[31] = _t; }
  /* c27e0: and v8.16b, v8.16b, v29.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[8].u8[0] & (c)->q[29].u8[0];
    _t.u8[1] = (c)->q[8].u8[1] & (c)->q[29].u8[1];
    _t.u8[2] = (c)->q[8].u8[2] & (c)->q[29].u8[2];
    _t.u8[3] = (c)->q[8].u8[3] & (c)->q[29].u8[3];
    _t.u8[4] = (c)->q[8].u8[4] & (c)->q[29].u8[4];
    _t.u8[5] = (c)->q[8].u8[5] & (c)->q[29].u8[5];
    _t.u8[6] = (c)->q[8].u8[6] & (c)->q[29].u8[6];
    _t.u8[7] = (c)->q[8].u8[7] & (c)->q[29].u8[7];
    _t.u8[8] = (c)->q[8].u8[8] & (c)->q[29].u8[8];
    _t.u8[9] = (c)->q[8].u8[9] & (c)->q[29].u8[9];
    _t.u8[10] = (c)->q[8].u8[10] & (c)->q[29].u8[10];
    _t.u8[11] = (c)->q[8].u8[11] & (c)->q[29].u8[11];
    _t.u8[12] = (c)->q[8].u8[12] & (c)->q[29].u8[12];
    _t.u8[13] = (c)->q[8].u8[13] & (c)->q[29].u8[13];
    _t.u8[14] = (c)->q[8].u8[14] & (c)->q[29].u8[14];
    _t.u8[15] = (c)->q[8].u8[15] & (c)->q[29].u8[15];
    (c)->q[8] = _t; }
  /* c27e4: and v26.16b, v26.16b, v29.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[26].u8[0] & (c)->q[29].u8[0];
    _t.u8[1] = (c)->q[26].u8[1] & (c)->q[29].u8[1];
    _t.u8[2] = (c)->q[26].u8[2] & (c)->q[29].u8[2];
    _t.u8[3] = (c)->q[26].u8[3] & (c)->q[29].u8[3];
    _t.u8[4] = (c)->q[26].u8[4] & (c)->q[29].u8[4];
    _t.u8[5] = (c)->q[26].u8[5] & (c)->q[29].u8[5];
    _t.u8[6] = (c)->q[26].u8[6] & (c)->q[29].u8[6];
    _t.u8[7] = (c)->q[26].u8[7] & (c)->q[29].u8[7];
    _t.u8[8] = (c)->q[26].u8[8] & (c)->q[29].u8[8];
    _t.u8[9] = (c)->q[26].u8[9] & (c)->q[29].u8[9];
    _t.u8[10] = (c)->q[26].u8[10] & (c)->q[29].u8[10];
    _t.u8[11] = (c)->q[26].u8[11] & (c)->q[29].u8[11];
    _t.u8[12] = (c)->q[26].u8[12] & (c)->q[29].u8[12];
    _t.u8[13] = (c)->q[26].u8[13] & (c)->q[29].u8[13];
    _t.u8[14] = (c)->q[26].u8[14] & (c)->q[29].u8[14];
    _t.u8[15] = (c)->q[26].u8[15] & (c)->q[29].u8[15];
    (c)->q[26] = _t; }
  /* c27e8: and v28.16b, v28.16b, v29.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[28].u8[0] & (c)->q[29].u8[0];
    _t.u8[1] = (c)->q[28].u8[1] & (c)->q[29].u8[1];
    _t.u8[2] = (c)->q[28].u8[2] & (c)->q[29].u8[2];
    _t.u8[3] = (c)->q[28].u8[3] & (c)->q[29].u8[3];
    _t.u8[4] = (c)->q[28].u8[4] & (c)->q[29].u8[4];
    _t.u8[5] = (c)->q[28].u8[5] & (c)->q[29].u8[5];
    _t.u8[6] = (c)->q[28].u8[6] & (c)->q[29].u8[6];
    _t.u8[7] = (c)->q[28].u8[7] & (c)->q[29].u8[7];
    _t.u8[8] = (c)->q[28].u8[8] & (c)->q[29].u8[8];
    _t.u8[9] = (c)->q[28].u8[9] & (c)->q[29].u8[9];
    _t.u8[10] = (c)->q[28].u8[10] & (c)->q[29].u8[10];
    _t.u8[11] = (c)->q[28].u8[11] & (c)->q[29].u8[11];
    _t.u8[12] = (c)->q[28].u8[12] & (c)->q[29].u8[12];
    _t.u8[13] = (c)->q[28].u8[13] & (c)->q[29].u8[13];
    _t.u8[14] = (c)->q[28].u8[14] & (c)->q[29].u8[14];
    _t.u8[15] = (c)->q[28].u8[15] & (c)->q[29].u8[15];
    (c)->q[28] = _t; }
  /* c27ec: and v9.16b, v9.16b, v29.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[9].u8[0] & (c)->q[29].u8[0];
    _t.u8[1] = (c)->q[9].u8[1] & (c)->q[29].u8[1];
    _t.u8[2] = (c)->q[9].u8[2] & (c)->q[29].u8[2];
    _t.u8[3] = (c)->q[9].u8[3] & (c)->q[29].u8[3];
    _t.u8[4] = (c)->q[9].u8[4] & (c)->q[29].u8[4];
    _t.u8[5] = (c)->q[9].u8[5] & (c)->q[29].u8[5];
    _t.u8[6] = (c)->q[9].u8[6] & (c)->q[29].u8[6];
    _t.u8[7] = (c)->q[9].u8[7] & (c)->q[29].u8[7];
    _t.u8[8] = (c)->q[9].u8[8] & (c)->q[29].u8[8];
    _t.u8[9] = (c)->q[9].u8[9] & (c)->q[29].u8[9];
    _t.u8[10] = (c)->q[9].u8[10] & (c)->q[29].u8[10];
    _t.u8[11] = (c)->q[9].u8[11] & (c)->q[29].u8[11];
    _t.u8[12] = (c)->q[9].u8[12] & (c)->q[29].u8[12];
    _t.u8[13] = (c)->q[9].u8[13] & (c)->q[29].u8[13];
    _t.u8[14] = (c)->q[9].u8[14] & (c)->q[29].u8[14];
    _t.u8[15] = (c)->q[9].u8[15] & (c)->q[29].u8[15];
    (c)->q[9] = _t; }
  /* c27f0: and v25.16b, v25.16b, v29.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[25].u8[0] & (c)->q[29].u8[0];
    _t.u8[1] = (c)->q[25].u8[1] & (c)->q[29].u8[1];
    _t.u8[2] = (c)->q[25].u8[2] & (c)->q[29].u8[2];
    _t.u8[3] = (c)->q[25].u8[3] & (c)->q[29].u8[3];
    _t.u8[4] = (c)->q[25].u8[4] & (c)->q[29].u8[4];
    _t.u8[5] = (c)->q[25].u8[5] & (c)->q[29].u8[5];
    _t.u8[6] = (c)->q[25].u8[6] & (c)->q[29].u8[6];
    _t.u8[7] = (c)->q[25].u8[7] & (c)->q[29].u8[7];
    _t.u8[8] = (c)->q[25].u8[8] & (c)->q[29].u8[8];
    _t.u8[9] = (c)->q[25].u8[9] & (c)->q[29].u8[9];
    _t.u8[10] = (c)->q[25].u8[10] & (c)->q[29].u8[10];
    _t.u8[11] = (c)->q[25].u8[11] & (c)->q[29].u8[11];
    _t.u8[12] = (c)->q[25].u8[12] & (c)->q[29].u8[12];
    _t.u8[13] = (c)->q[25].u8[13] & (c)->q[29].u8[13];
    _t.u8[14] = (c)->q[25].u8[14] & (c)->q[29].u8[14];
    _t.u8[15] = (c)->q[25].u8[15] & (c)->q[29].u8[15];
    (c)->q[25] = _t; }
  /* c27f4: dup v29.2d, x28 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 28));
    _t.u64[1] = (ARC_X_R(c, 28));
    (c)->q[29] = _t; }
  /* c27f8: ushl v31.2d, v31.2d, v2.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[31].u64[0], (int8_t)(c)->q[2].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[31].u64[1], (int8_t)(c)->q[2].u64[1]);
    (c)->q[31] = _t; }
  /* c27fc: ushl v27.2d, v27.2d, v1.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[27].u64[0], (int8_t)(c)->q[1].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[27].u64[1], (int8_t)(c)->q[1].u64[1]);
    (c)->q[27] = _t; }
  /* c2800: ushl v30.2d, v30.2d, v0.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[30].u64[0], (int8_t)(c)->q[0].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[30].u64[1], (int8_t)(c)->q[0].u64[1]);
    (c)->q[30] = _t; }
  /* c2804: ushl v28.2d, v28.2d, v22.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[28].u64[0], (int8_t)(c)->q[22].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[28].u64[1], (int8_t)(c)->q[22].u64[1]);
    (c)->q[28] = _t; }
  /* c2808: ushl v26.2d, v26.2d, v19.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[26].u64[0], (int8_t)(c)->q[19].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[26].u64[1], (int8_t)(c)->q[19].u64[1]);
    (c)->q[26] = _t; }
  /* c280c: ushl v8.2d, v8.2d, v20.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[8].u64[0], (int8_t)(c)->q[20].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[8].u64[1], (int8_t)(c)->q[20].u64[1]);
    (c)->q[8] = _t; }
  /* c2810: ushl v25.2d, v25.2d, v24.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[25].u64[0], (int8_t)(c)->q[24].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[25].u64[1], (int8_t)(c)->q[24].u64[1]);
    (c)->q[25] = _t; }
  /* c2814: ushl v9.2d, v9.2d, v23.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[9].u64[0], (int8_t)(c)->q[23].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[9].u64[1], (int8_t)(c)->q[23].u64[1]);
    (c)->q[9] = _t; }
  /* c2818: add v22.2d, v22.2d, v29.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[22].u64[0] + (c)->q[29].u64[0];
    _t.u64[1] = (c)->q[22].u64[1] + (c)->q[29].u64[1];
    (c)->q[22] = _t; }
  /* c281c: orr v16.16b, v30.16b, v16.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[30].u8[0] | (c)->q[16].u8[0];
    _t.u8[1] = (c)->q[30].u8[1] | (c)->q[16].u8[1];
    _t.u8[2] = (c)->q[30].u8[2] | (c)->q[16].u8[2];
    _t.u8[3] = (c)->q[30].u8[3] | (c)->q[16].u8[3];
    _t.u8[4] = (c)->q[30].u8[4] | (c)->q[16].u8[4];
    _t.u8[5] = (c)->q[30].u8[5] | (c)->q[16].u8[5];
    _t.u8[6] = (c)->q[30].u8[6] | (c)->q[16].u8[6];
    _t.u8[7] = (c)->q[30].u8[7] | (c)->q[16].u8[7];
    _t.u8[8] = (c)->q[30].u8[8] | (c)->q[16].u8[8];
    _t.u8[9] = (c)->q[30].u8[9] | (c)->q[16].u8[9];
    _t.u8[10] = (c)->q[30].u8[10] | (c)->q[16].u8[10];
    _t.u8[11] = (c)->q[30].u8[11] | (c)->q[16].u8[11];
    _t.u8[12] = (c)->q[30].u8[12] | (c)->q[16].u8[12];
    _t.u8[13] = (c)->q[30].u8[13] | (c)->q[16].u8[13];
    _t.u8[14] = (c)->q[30].u8[14] | (c)->q[16].u8[14];
    _t.u8[15] = (c)->q[30].u8[15] | (c)->q[16].u8[15];
    (c)->q[16] = _t; }
  /* c2820: orr v18.16b, v27.16b, v18.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[27].u8[0] | (c)->q[18].u8[0];
    _t.u8[1] = (c)->q[27].u8[1] | (c)->q[18].u8[1];
    _t.u8[2] = (c)->q[27].u8[2] | (c)->q[18].u8[2];
    _t.u8[3] = (c)->q[27].u8[3] | (c)->q[18].u8[3];
    _t.u8[4] = (c)->q[27].u8[4] | (c)->q[18].u8[4];
    _t.u8[5] = (c)->q[27].u8[5] | (c)->q[18].u8[5];
    _t.u8[6] = (c)->q[27].u8[6] | (c)->q[18].u8[6];
    _t.u8[7] = (c)->q[27].u8[7] | (c)->q[18].u8[7];
    _t.u8[8] = (c)->q[27].u8[8] | (c)->q[18].u8[8];
    _t.u8[9] = (c)->q[27].u8[9] | (c)->q[18].u8[9];
    _t.u8[10] = (c)->q[27].u8[10] | (c)->q[18].u8[10];
    _t.u8[11] = (c)->q[27].u8[11] | (c)->q[18].u8[11];
    _t.u8[12] = (c)->q[27].u8[12] | (c)->q[18].u8[12];
    _t.u8[13] = (c)->q[27].u8[13] | (c)->q[18].u8[13];
    _t.u8[14] = (c)->q[27].u8[14] | (c)->q[18].u8[14];
    _t.u8[15] = (c)->q[27].u8[15] | (c)->q[18].u8[15];
    (c)->q[18] = _t; }
  /* c2824: orr v7.16b, v31.16b, v7.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[31].u8[0] | (c)->q[7].u8[0];
    _t.u8[1] = (c)->q[31].u8[1] | (c)->q[7].u8[1];
    _t.u8[2] = (c)->q[31].u8[2] | (c)->q[7].u8[2];
    _t.u8[3] = (c)->q[31].u8[3] | (c)->q[7].u8[3];
    _t.u8[4] = (c)->q[31].u8[4] | (c)->q[7].u8[4];
    _t.u8[5] = (c)->q[31].u8[5] | (c)->q[7].u8[5];
    _t.u8[6] = (c)->q[31].u8[6] | (c)->q[7].u8[6];
    _t.u8[7] = (c)->q[31].u8[7] | (c)->q[7].u8[7];
    _t.u8[8] = (c)->q[31].u8[8] | (c)->q[7].u8[8];
    _t.u8[9] = (c)->q[31].u8[9] | (c)->q[7].u8[9];
    _t.u8[10] = (c)->q[31].u8[10] | (c)->q[7].u8[10];
    _t.u8[11] = (c)->q[31].u8[11] | (c)->q[7].u8[11];
    _t.u8[12] = (c)->q[31].u8[12] | (c)->q[7].u8[12];
    _t.u8[13] = (c)->q[31].u8[13] | (c)->q[7].u8[13];
    _t.u8[14] = (c)->q[31].u8[14] | (c)->q[7].u8[14];
    _t.u8[15] = (c)->q[31].u8[15] | (c)->q[7].u8[15];
    (c)->q[7] = _t; }
  /* c2828: orr v5.16b, v8.16b, v5.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[8].u8[0] | (c)->q[5].u8[0];
    _t.u8[1] = (c)->q[8].u8[1] | (c)->q[5].u8[1];
    _t.u8[2] = (c)->q[8].u8[2] | (c)->q[5].u8[2];
    _t.u8[3] = (c)->q[8].u8[3] | (c)->q[5].u8[3];
    _t.u8[4] = (c)->q[8].u8[4] | (c)->q[5].u8[4];
    _t.u8[5] = (c)->q[8].u8[5] | (c)->q[5].u8[5];
    _t.u8[6] = (c)->q[8].u8[6] | (c)->q[5].u8[6];
    _t.u8[7] = (c)->q[8].u8[7] | (c)->q[5].u8[7];
    _t.u8[8] = (c)->q[8].u8[8] | (c)->q[5].u8[8];
    _t.u8[9] = (c)->q[8].u8[9] | (c)->q[5].u8[9];
    _t.u8[10] = (c)->q[8].u8[10] | (c)->q[5].u8[10];
    _t.u8[11] = (c)->q[8].u8[11] | (c)->q[5].u8[11];
    _t.u8[12] = (c)->q[8].u8[12] | (c)->q[5].u8[12];
    _t.u8[13] = (c)->q[8].u8[13] | (c)->q[5].u8[13];
    _t.u8[14] = (c)->q[8].u8[14] | (c)->q[5].u8[14];
    _t.u8[15] = (c)->q[8].u8[15] | (c)->q[5].u8[15];
    (c)->q[5] = _t; }
  /* c282c: orr v17.16b, v26.16b, v17.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[26].u8[0] | (c)->q[17].u8[0];
    _t.u8[1] = (c)->q[26].u8[1] | (c)->q[17].u8[1];
    _t.u8[2] = (c)->q[26].u8[2] | (c)->q[17].u8[2];
    _t.u8[3] = (c)->q[26].u8[3] | (c)->q[17].u8[3];
    _t.u8[4] = (c)->q[26].u8[4] | (c)->q[17].u8[4];
    _t.u8[5] = (c)->q[26].u8[5] | (c)->q[17].u8[5];
    _t.u8[6] = (c)->q[26].u8[6] | (c)->q[17].u8[6];
    _t.u8[7] = (c)->q[26].u8[7] | (c)->q[17].u8[7];
    _t.u8[8] = (c)->q[26].u8[8] | (c)->q[17].u8[8];
    _t.u8[9] = (c)->q[26].u8[9] | (c)->q[17].u8[9];
    _t.u8[10] = (c)->q[26].u8[10] | (c)->q[17].u8[10];
    _t.u8[11] = (c)->q[26].u8[11] | (c)->q[17].u8[11];
    _t.u8[12] = (c)->q[26].u8[12] | (c)->q[17].u8[12];
    _t.u8[13] = (c)->q[26].u8[13] | (c)->q[17].u8[13];
    _t.u8[14] = (c)->q[26].u8[14] | (c)->q[17].u8[14];
    _t.u8[15] = (c)->q[26].u8[15] | (c)->q[17].u8[15];
    (c)->q[17] = _t; }
  /* c2830: orr v6.16b, v28.16b, v6.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[28].u8[0] | (c)->q[6].u8[0];
    _t.u8[1] = (c)->q[28].u8[1] | (c)->q[6].u8[1];
    _t.u8[2] = (c)->q[28].u8[2] | (c)->q[6].u8[2];
    _t.u8[3] = (c)->q[28].u8[3] | (c)->q[6].u8[3];
    _t.u8[4] = (c)->q[28].u8[4] | (c)->q[6].u8[4];
    _t.u8[5] = (c)->q[28].u8[5] | (c)->q[6].u8[5];
    _t.u8[6] = (c)->q[28].u8[6] | (c)->q[6].u8[6];
    _t.u8[7] = (c)->q[28].u8[7] | (c)->q[6].u8[7];
    _t.u8[8] = (c)->q[28].u8[8] | (c)->q[6].u8[8];
    _t.u8[9] = (c)->q[28].u8[9] | (c)->q[6].u8[9];
    _t.u8[10] = (c)->q[28].u8[10] | (c)->q[6].u8[10];
    _t.u8[11] = (c)->q[28].u8[11] | (c)->q[6].u8[11];
    _t.u8[12] = (c)->q[28].u8[12] | (c)->q[6].u8[12];
    _t.u8[13] = (c)->q[28].u8[13] | (c)->q[6].u8[13];
    _t.u8[14] = (c)->q[28].u8[14] | (c)->q[6].u8[14];
    _t.u8[15] = (c)->q[28].u8[15] | (c)->q[6].u8[15];
    (c)->q[6] = _t; }
  /* c2834: orr v4.16b, v9.16b, v4.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[9].u8[0] | (c)->q[4].u8[0];
    _t.u8[1] = (c)->q[9].u8[1] | (c)->q[4].u8[1];
    _t.u8[2] = (c)->q[9].u8[2] | (c)->q[4].u8[2];
    _t.u8[3] = (c)->q[9].u8[3] | (c)->q[4].u8[3];
    _t.u8[4] = (c)->q[9].u8[4] | (c)->q[4].u8[4];
    _t.u8[5] = (c)->q[9].u8[5] | (c)->q[4].u8[5];
    _t.u8[6] = (c)->q[9].u8[6] | (c)->q[4].u8[6];
    _t.u8[7] = (c)->q[9].u8[7] | (c)->q[4].u8[7];
    _t.u8[8] = (c)->q[9].u8[8] | (c)->q[4].u8[8];
    _t.u8[9] = (c)->q[9].u8[9] | (c)->q[4].u8[9];
    _t.u8[10] = (c)->q[9].u8[10] | (c)->q[4].u8[10];
    _t.u8[11] = (c)->q[9].u8[11] | (c)->q[4].u8[11];
    _t.u8[12] = (c)->q[9].u8[12] | (c)->q[4].u8[12];
    _t.u8[13] = (c)->q[9].u8[13] | (c)->q[4].u8[13];
    _t.u8[14] = (c)->q[9].u8[14] | (c)->q[4].u8[14];
    _t.u8[15] = (c)->q[9].u8[15] | (c)->q[4].u8[15];
    (c)->q[4] = _t; }
  /* c2838: orr v3.16b, v25.16b, v3.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[25].u8[0] | (c)->q[3].u8[0];
    _t.u8[1] = (c)->q[25].u8[1] | (c)->q[3].u8[1];
    _t.u8[2] = (c)->q[25].u8[2] | (c)->q[3].u8[2];
    _t.u8[3] = (c)->q[25].u8[3] | (c)->q[3].u8[3];
    _t.u8[4] = (c)->q[25].u8[4] | (c)->q[3].u8[4];
    _t.u8[5] = (c)->q[25].u8[5] | (c)->q[3].u8[5];
    _t.u8[6] = (c)->q[25].u8[6] | (c)->q[3].u8[6];
    _t.u8[7] = (c)->q[25].u8[7] | (c)->q[3].u8[7];
    _t.u8[8] = (c)->q[25].u8[8] | (c)->q[3].u8[8];
    _t.u8[9] = (c)->q[25].u8[9] | (c)->q[3].u8[9];
    _t.u8[10] = (c)->q[25].u8[10] | (c)->q[3].u8[10];
    _t.u8[11] = (c)->q[25].u8[11] | (c)->q[3].u8[11];
    _t.u8[12] = (c)->q[25].u8[12] | (c)->q[3].u8[12];
    _t.u8[13] = (c)->q[25].u8[13] | (c)->q[3].u8[13];
    _t.u8[14] = (c)->q[25].u8[14] | (c)->q[3].u8[14];
    _t.u8[15] = (c)->q[25].u8[15] | (c)->q[3].u8[15];
    (c)->q[3] = _t; }
  /* c283c: add v23.2d, v23.2d, v29.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[23].u64[0] + (c)->q[29].u64[0];
    _t.u64[1] = (c)->q[23].u64[1] + (c)->q[29].u64[1];
    (c)->q[23] = _t; }
  /* c2840: add v24.2d, v24.2d, v29.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[24].u64[0] + (c)->q[29].u64[0];
    _t.u64[1] = (c)->q[24].u64[1] + (c)->q[29].u64[1];
    (c)->q[24] = _t; }
  /* c2844: add v20.2d, v20.2d, v29.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[20].u64[0] + (c)->q[29].u64[0];
    _t.u64[1] = (c)->q[20].u64[1] + (c)->q[29].u64[1];
    (c)->q[20] = _t; }
  /* c2848: add v19.2d, v19.2d, v29.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[19].u64[0] + (c)->q[29].u64[0];
    _t.u64[1] = (c)->q[19].u64[1] + (c)->q[29].u64[1];
    (c)->q[19] = _t; }
  /* c284c: add v2.2d, v2.2d, v29.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[2].u64[0] + (c)->q[29].u64[0];
    _t.u64[1] = (c)->q[2].u64[1] + (c)->q[29].u64[1];
    (c)->q[2] = _t; }
  /* c2850: add v1.2d, v1.2d, v29.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[1].u64[0] + (c)->q[29].u64[0];
    _t.u64[1] = (c)->q[1].u64[1] + (c)->q[29].u64[1];
    (c)->q[1] = _t; }
  /* c2854: add v0.2d, v0.2d, v29.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[0].u64[0] + (c)->q[29].u64[0];
    _t.u64[1] = (c)->q[0].u64[1] + (c)->q[29].u64[1];
    (c)->q[0] = _t; }
  /* c2858: b.ne #0xc2788 */
  if (ARC_COND(c, 1)) goto L_c2788;
  /* c285c: orr v0.16b, v3.16b, v17.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[3].u8[0] | (c)->q[17].u8[0];
    _t.u8[1] = (c)->q[3].u8[1] | (c)->q[17].u8[1];
    _t.u8[2] = (c)->q[3].u8[2] | (c)->q[17].u8[2];
    _t.u8[3] = (c)->q[3].u8[3] | (c)->q[17].u8[3];
    _t.u8[4] = (c)->q[3].u8[4] | (c)->q[17].u8[4];
    _t.u8[5] = (c)->q[3].u8[5] | (c)->q[17].u8[5];
    _t.u8[6] = (c)->q[3].u8[6] | (c)->q[17].u8[6];
    _t.u8[7] = (c)->q[3].u8[7] | (c)->q[17].u8[7];
    _t.u8[8] = (c)->q[3].u8[8] | (c)->q[17].u8[8];
    _t.u8[9] = (c)->q[3].u8[9] | (c)->q[17].u8[9];
    _t.u8[10] = (c)->q[3].u8[10] | (c)->q[17].u8[10];
    _t.u8[11] = (c)->q[3].u8[11] | (c)->q[17].u8[11];
    _t.u8[12] = (c)->q[3].u8[12] | (c)->q[17].u8[12];
    _t.u8[13] = (c)->q[3].u8[13] | (c)->q[17].u8[13];
    _t.u8[14] = (c)->q[3].u8[14] | (c)->q[17].u8[14];
    _t.u8[15] = (c)->q[3].u8[15] | (c)->q[17].u8[15];
    (c)->q[0] = _t; }
  /* c2860: orr v1.16b, v6.16b, v18.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[6].u8[0] | (c)->q[18].u8[0];
    _t.u8[1] = (c)->q[6].u8[1] | (c)->q[18].u8[1];
    _t.u8[2] = (c)->q[6].u8[2] | (c)->q[18].u8[2];
    _t.u8[3] = (c)->q[6].u8[3] | (c)->q[18].u8[3];
    _t.u8[4] = (c)->q[6].u8[4] | (c)->q[18].u8[4];
    _t.u8[5] = (c)->q[6].u8[5] | (c)->q[18].u8[5];
    _t.u8[6] = (c)->q[6].u8[6] | (c)->q[18].u8[6];
    _t.u8[7] = (c)->q[6].u8[7] | (c)->q[18].u8[7];
    _t.u8[8] = (c)->q[6].u8[8] | (c)->q[18].u8[8];
    _t.u8[9] = (c)->q[6].u8[9] | (c)->q[18].u8[9];
    _t.u8[10] = (c)->q[6].u8[10] | (c)->q[18].u8[10];
    _t.u8[11] = (c)->q[6].u8[11] | (c)->q[18].u8[11];
    _t.u8[12] = (c)->q[6].u8[12] | (c)->q[18].u8[12];
    _t.u8[13] = (c)->q[6].u8[13] | (c)->q[18].u8[13];
    _t.u8[14] = (c)->q[6].u8[14] | (c)->q[18].u8[14];
    _t.u8[15] = (c)->q[6].u8[15] | (c)->q[18].u8[15];
    (c)->q[1] = _t; }
  /* c2864: cmp x15, x17 */
  (void)arc_sub64(c, ARC_X_R(c, 15), ARC_X_R(c, 17));
  /* c2868: orr v2.16b, v4.16b, v7.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[4].u8[0] | (c)->q[7].u8[0];
    _t.u8[1] = (c)->q[4].u8[1] | (c)->q[7].u8[1];
    _t.u8[2] = (c)->q[4].u8[2] | (c)->q[7].u8[2];
    _t.u8[3] = (c)->q[4].u8[3] | (c)->q[7].u8[3];
    _t.u8[4] = (c)->q[4].u8[4] | (c)->q[7].u8[4];
    _t.u8[5] = (c)->q[4].u8[5] | (c)->q[7].u8[5];
    _t.u8[6] = (c)->q[4].u8[6] | (c)->q[7].u8[6];
    _t.u8[7] = (c)->q[4].u8[7] | (c)->q[7].u8[7];
    _t.u8[8] = (c)->q[4].u8[8] | (c)->q[7].u8[8];
    _t.u8[9] = (c)->q[4].u8[9] | (c)->q[7].u8[9];
    _t.u8[10] = (c)->q[4].u8[10] | (c)->q[7].u8[10];
    _t.u8[11] = (c)->q[4].u8[11] | (c)->q[7].u8[11];
    _t.u8[12] = (c)->q[4].u8[12] | (c)->q[7].u8[12];
    _t.u8[13] = (c)->q[4].u8[13] | (c)->q[7].u8[13];
    _t.u8[14] = (c)->q[4].u8[14] | (c)->q[7].u8[14];
    _t.u8[15] = (c)->q[4].u8[15] | (c)->q[7].u8[15];
    (c)->q[2] = _t; }
  /* c286c: orr v3.16b, v5.16b, v16.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[5].u8[0] | (c)->q[16].u8[0];
    _t.u8[1] = (c)->q[5].u8[1] | (c)->q[16].u8[1];
    _t.u8[2] = (c)->q[5].u8[2] | (c)->q[16].u8[2];
    _t.u8[3] = (c)->q[5].u8[3] | (c)->q[16].u8[3];
    _t.u8[4] = (c)->q[5].u8[4] | (c)->q[16].u8[4];
    _t.u8[5] = (c)->q[5].u8[5] | (c)->q[16].u8[5];
    _t.u8[6] = (c)->q[5].u8[6] | (c)->q[16].u8[6];
    _t.u8[7] = (c)->q[5].u8[7] | (c)->q[16].u8[7];
    _t.u8[8] = (c)->q[5].u8[8] | (c)->q[16].u8[8];
    _t.u8[9] = (c)->q[5].u8[9] | (c)->q[16].u8[9];
    _t.u8[10] = (c)->q[5].u8[10] | (c)->q[16].u8[10];
    _t.u8[11] = (c)->q[5].u8[11] | (c)->q[16].u8[11];
    _t.u8[12] = (c)->q[5].u8[12] | (c)->q[16].u8[12];
    _t.u8[13] = (c)->q[5].u8[13] | (c)->q[16].u8[13];
    _t.u8[14] = (c)->q[5].u8[14] | (c)->q[16].u8[14];
    _t.u8[15] = (c)->q[5].u8[15] | (c)->q[16].u8[15];
    (c)->q[3] = _t; }
  /* c2870: orr v0.16b, v0.16b, v1.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[0].u8[0] | (c)->q[1].u8[0];
    _t.u8[1] = (c)->q[0].u8[1] | (c)->q[1].u8[1];
    _t.u8[2] = (c)->q[0].u8[2] | (c)->q[1].u8[2];
    _t.u8[3] = (c)->q[0].u8[3] | (c)->q[1].u8[3];
    _t.u8[4] = (c)->q[0].u8[4] | (c)->q[1].u8[4];
    _t.u8[5] = (c)->q[0].u8[5] | (c)->q[1].u8[5];
    _t.u8[6] = (c)->q[0].u8[6] | (c)->q[1].u8[6];
    _t.u8[7] = (c)->q[0].u8[7] | (c)->q[1].u8[7];
    _t.u8[8] = (c)->q[0].u8[8] | (c)->q[1].u8[8];
    _t.u8[9] = (c)->q[0].u8[9] | (c)->q[1].u8[9];
    _t.u8[10] = (c)->q[0].u8[10] | (c)->q[1].u8[10];
    _t.u8[11] = (c)->q[0].u8[11] | (c)->q[1].u8[11];
    _t.u8[12] = (c)->q[0].u8[12] | (c)->q[1].u8[12];
    _t.u8[13] = (c)->q[0].u8[13] | (c)->q[1].u8[13];
    _t.u8[14] = (c)->q[0].u8[14] | (c)->q[1].u8[14];
    _t.u8[15] = (c)->q[0].u8[15] | (c)->q[1].u8[15];
    (c)->q[0] = _t; }
  /* c2874: orr v1.16b, v2.16b, v3.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[2].u8[0] | (c)->q[3].u8[0];
    _t.u8[1] = (c)->q[2].u8[1] | (c)->q[3].u8[1];
    _t.u8[2] = (c)->q[2].u8[2] | (c)->q[3].u8[2];
    _t.u8[3] = (c)->q[2].u8[3] | (c)->q[3].u8[3];
    _t.u8[4] = (c)->q[2].u8[4] | (c)->q[3].u8[4];
    _t.u8[5] = (c)->q[2].u8[5] | (c)->q[3].u8[5];
    _t.u8[6] = (c)->q[2].u8[6] | (c)->q[3].u8[6];
    _t.u8[7] = (c)->q[2].u8[7] | (c)->q[3].u8[7];
    _t.u8[8] = (c)->q[2].u8[8] | (c)->q[3].u8[8];
    _t.u8[9] = (c)->q[2].u8[9] | (c)->q[3].u8[9];
    _t.u8[10] = (c)->q[2].u8[10] | (c)->q[3].u8[10];
    _t.u8[11] = (c)->q[2].u8[11] | (c)->q[3].u8[11];
    _t.u8[12] = (c)->q[2].u8[12] | (c)->q[3].u8[12];
    _t.u8[13] = (c)->q[2].u8[13] | (c)->q[3].u8[13];
    _t.u8[14] = (c)->q[2].u8[14] | (c)->q[3].u8[14];
    _t.u8[15] = (c)->q[2].u8[15] | (c)->q[3].u8[15];
    (c)->q[1] = _t; }
  /* c2878: orr v0.16b, v0.16b, v1.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[0].u8[0] | (c)->q[1].u8[0];
    _t.u8[1] = (c)->q[0].u8[1] | (c)->q[1].u8[1];
    _t.u8[2] = (c)->q[0].u8[2] | (c)->q[1].u8[2];
    _t.u8[3] = (c)->q[0].u8[3] | (c)->q[1].u8[3];
    _t.u8[4] = (c)->q[0].u8[4] | (c)->q[1].u8[4];
    _t.u8[5] = (c)->q[0].u8[5] | (c)->q[1].u8[5];
    _t.u8[6] = (c)->q[0].u8[6] | (c)->q[1].u8[6];
    _t.u8[7] = (c)->q[0].u8[7] | (c)->q[1].u8[7];
    _t.u8[8] = (c)->q[0].u8[8] | (c)->q[1].u8[8];
    _t.u8[9] = (c)->q[0].u8[9] | (c)->q[1].u8[9];
    _t.u8[10] = (c)->q[0].u8[10] | (c)->q[1].u8[10];
    _t.u8[11] = (c)->q[0].u8[11] | (c)->q[1].u8[11];
    _t.u8[12] = (c)->q[0].u8[12] | (c)->q[1].u8[12];
    _t.u8[13] = (c)->q[0].u8[13] | (c)->q[1].u8[13];
    _t.u8[14] = (c)->q[0].u8[14] | (c)->q[1].u8[14];
    _t.u8[15] = (c)->q[0].u8[15] | (c)->q[1].u8[15];
    (c)->q[0] = _t; }
  /* c287c: ext v1.16b, v0.16b, v0.16b, #8 */
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
    (c)->q[1] = _t; }
  /* c2880: orr v0.8b, v0.8b, v1.8b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[0].u8[0] | (c)->q[1].u8[0];
    _t.u8[1] = (c)->q[0].u8[1] | (c)->q[1].u8[1];
    _t.u8[2] = (c)->q[0].u8[2] | (c)->q[1].u8[2];
    _t.u8[3] = (c)->q[0].u8[3] | (c)->q[1].u8[3];
    _t.u8[4] = (c)->q[0].u8[4] | (c)->q[1].u8[4];
    _t.u8[5] = (c)->q[0].u8[5] | (c)->q[1].u8[5];
    _t.u8[6] = (c)->q[0].u8[6] | (c)->q[1].u8[6];
    _t.u8[7] = (c)->q[0].u8[7] | (c)->q[1].u8[7];
    (c)->q[0] = _t; }
  /* c2884: fmov x14, d0 */
  ARC_X_W(c, 14, ARC_DU_R(c, 0));
  /* c2888: b.eq #0xc2960 */
  if (ARC_COND(c, 0)) goto L_c2960;
  /* c288c: tst x15, #0xc */
  arc_flags_logical64(c, (uint64_t)(ARC_X_R(c, 15) & UINT64_C(12)));
  /* c2890: b.eq #0xc293c */
  if (ARC_COND(c, 0)) goto L_c293c;
L_c2894:;
  /* c2894: dup v1.4h, w8 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = (ARC_W_R(c, 8));
    _t.u16[1] = (ARC_W_R(c, 8));
    _t.u16[2] = (ARC_W_R(c, 8));
    _t.u16[3] = (ARC_W_R(c, 8));
    (c)->q[1] = _t; }
  /* c2898: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* c289c: mov x3, x17 */
  ARC_X_W(c, 3, ARC_X_R(c, 17));
  /* c28a0: dup v3.2d, x17 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 17));
    _t.u64[1] = (ARC_X_R(c, 17));
    (c)->q[3] = _t; }
  /* c28a4: adrp x17, #0x52000 */
  ARC_X_W(c, 17, (arc_image_bases[1] + UINT64_C(335872)));
  /* c28a8: ldr q2, [x17, #0xc10] */
  arc_q_w(c, 2, arc_ld64((ARC_X_R(c, 17) + INT64_C(3088))), arc_ld64((ARC_X_R(c, 17) + INT64_C(3088)) + 8));
  /* c28ac: adrp x17, #0x52000 */
  ARC_X_W(c, 17, (arc_image_bases[1] + UINT64_C(335872)));
  /* c28b0: ldr q5, [x17, #0xa80] */
  arc_q_w(c, 5, arc_ld64((ARC_X_R(c, 17) + INT64_C(2688))), arc_ld64((ARC_X_R(c, 17) + INT64_C(2688)) + 8));
  /* c28b4: and x17, x15, #0x7ffffffffffffffc */
  ARC_X_W(c, 17, (ARC_X_R(c, 15) & UINT64_C(9223372036854775804)));
  /* c28b8: shl v4.4h, v1.4h, #8 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = (uint16_t)((c)->q[1].u16[0] << 8);
    _t.u16[1] = (uint16_t)((c)->q[1].u16[1] << 8);
    _t.u16[2] = (uint16_t)((c)->q[1].u16[2] << 8);
    _t.u16[3] = (uint16_t)((c)->q[1].u16[3] << 8);
    (c)->q[4] = _t; }
  /* c28bc: movi v1.2d, #0000000000000000 */
  arc_v_clear(c, 1);
  /* c28c0: mov v0.d[0], x14 */
  (c)->q[0].u64[0] = (ARC_X_R(c, 14));
  /* c28c4: orr v2.16b, v3.16b, v2.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[3].u8[0] | (c)->q[2].u8[0];
    _t.u8[1] = (c)->q[3].u8[1] | (c)->q[2].u8[1];
    _t.u8[2] = (c)->q[3].u8[2] | (c)->q[2].u8[2];
    _t.u8[3] = (c)->q[3].u8[3] | (c)->q[2].u8[3];
    _t.u8[4] = (c)->q[3].u8[4] | (c)->q[2].u8[4];
    _t.u8[5] = (c)->q[3].u8[5] | (c)->q[2].u8[5];
    _t.u8[6] = (c)->q[3].u8[6] | (c)->q[2].u8[6];
    _t.u8[7] = (c)->q[3].u8[7] | (c)->q[2].u8[7];
    _t.u8[8] = (c)->q[3].u8[8] | (c)->q[2].u8[8];
    _t.u8[9] = (c)->q[3].u8[9] | (c)->q[2].u8[9];
    _t.u8[10] = (c)->q[3].u8[10] | (c)->q[2].u8[10];
    _t.u8[11] = (c)->q[3].u8[11] | (c)->q[2].u8[11];
    _t.u8[12] = (c)->q[3].u8[12] | (c)->q[2].u8[12];
    _t.u8[13] = (c)->q[3].u8[13] | (c)->q[2].u8[13];
    _t.u8[14] = (c)->q[3].u8[14] | (c)->q[2].u8[14];
    _t.u8[15] = (c)->q[3].u8[15] | (c)->q[2].u8[15];
    (c)->q[2] = _t; }
  /* c28c8: orr v3.16b, v3.16b, v5.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[3].u8[0] | (c)->q[5].u8[0];
    _t.u8[1] = (c)->q[3].u8[1] | (c)->q[5].u8[1];
    _t.u8[2] = (c)->q[3].u8[2] | (c)->q[5].u8[2];
    _t.u8[3] = (c)->q[3].u8[3] | (c)->q[5].u8[3];
    _t.u8[4] = (c)->q[3].u8[4] | (c)->q[5].u8[4];
    _t.u8[5] = (c)->q[3].u8[5] | (c)->q[5].u8[5];
    _t.u8[6] = (c)->q[3].u8[6] | (c)->q[5].u8[6];
    _t.u8[7] = (c)->q[3].u8[7] | (c)->q[5].u8[7];
    _t.u8[8] = (c)->q[3].u8[8] | (c)->q[5].u8[8];
    _t.u8[9] = (c)->q[3].u8[9] | (c)->q[5].u8[9];
    _t.u8[10] = (c)->q[3].u8[10] | (c)->q[5].u8[10];
    _t.u8[11] = (c)->q[3].u8[11] | (c)->q[5].u8[11];
    _t.u8[12] = (c)->q[3].u8[12] | (c)->q[5].u8[12];
    _t.u8[13] = (c)->q[3].u8[13] | (c)->q[5].u8[13];
    _t.u8[14] = (c)->q[3].u8[14] | (c)->q[5].u8[14];
    _t.u8[15] = (c)->q[3].u8[15] | (c)->q[5].u8[15];
    (c)->q[3] = _t; }
  /* c28cc: add x1, x11, x17 */
  ARC_X_W(c, 1, (ARC_X_R(c, 11) + ARC_X_R(c, 17)));
  /* c28d0: sshr v4.4h, v4.4h, #8 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = (uint16_t)((c)->q[4].i16[0] >> 8);
    _t.u16[1] = (uint16_t)((c)->q[4].i16[1] >> 8);
    _t.u16[2] = (uint16_t)((c)->q[4].i16[2] >> 8);
    _t.u16[3] = (uint16_t)((c)->q[4].i16[3] >> 8);
    (c)->q[4] = _t; }
L_c28d4:;
  /* c28d4: ldr s5, [x11, x3] */
  arc_su_w(c, 5, arc_ld32((ARC_X_R(c, 11) + ARC_X_R(c, 3))));
  /* c28d8: dup v6.2d, x5 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 5));
    _t.u64[1] = (ARC_X_R(c, 5));
    (c)->q[6] = _t; }
  /* c28dc: add x3, x3, #4 */
  ARC_X_W(c, 3, (ARC_X_R(c, 3) + UINT64_C(4)));
  /* c28e0: cmp x17, x3 */
  (void)arc_sub64(c, ARC_X_R(c, 17), ARC_X_R(c, 3));
  /* c28e4: sshll v5.8h, v5.8b, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = (uint16_t)((int16_t)((c)->q[5].i8[0]) << 0);
    _t.u16[1] = (uint16_t)((int16_t)((c)->q[5].i8[1]) << 0);
    _t.u16[2] = (uint16_t)((int16_t)((c)->q[5].i8[2]) << 0);
    _t.u16[3] = (uint16_t)((int16_t)((c)->q[5].i8[3]) << 0);
    _t.u16[4] = (uint16_t)((int16_t)((c)->q[5].i8[4]) << 0);
    _t.u16[5] = (uint16_t)((int16_t)((c)->q[5].i8[5]) << 0);
    _t.u16[6] = (uint16_t)((int16_t)((c)->q[5].i8[6]) << 0);
    _t.u16[7] = (uint16_t)((int16_t)((c)->q[5].i8[7]) << 0);
    (c)->q[5] = _t; }
  /* c28e8: cmge v5.4h, v5.4h, v4.4h */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = ((c)->q[5].i16[0] >= (c)->q[4].i16[0]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[1] = ((c)->q[5].i16[1] >= (c)->q[4].i16[1]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[2] = ((c)->q[5].i16[2] >= (c)->q[4].i16[2]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[3] = ((c)->q[5].i16[3] >= (c)->q[4].i16[3]) ? (uint16_t)~(uint16_t)0 : 0;
    (c)->q[5] = _t; }
  /* c28ec: ushll v5.4s, v5.4h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((uint32_t)((c)->q[5].u16[0]) << 0);
    _t.u32[1] = (uint32_t)((uint32_t)((c)->q[5].u16[1]) << 0);
    _t.u32[2] = (uint32_t)((uint32_t)((c)->q[5].u16[2]) << 0);
    _t.u32[3] = (uint32_t)((uint32_t)((c)->q[5].u16[3]) << 0);
    (c)->q[5] = _t; }
  /* c28f0: ushll2 v7.2d, v5.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[5].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[5].u32[3]) << 0);
    (c)->q[7] = _t; }
  /* c28f4: ushll v5.2d, v5.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[5].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[5].u32[1]) << 0);
    (c)->q[5] = _t; }
  /* c28f8: and v7.16b, v7.16b, v6.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[7].u8[0] & (c)->q[6].u8[0];
    _t.u8[1] = (c)->q[7].u8[1] & (c)->q[6].u8[1];
    _t.u8[2] = (c)->q[7].u8[2] & (c)->q[6].u8[2];
    _t.u8[3] = (c)->q[7].u8[3] & (c)->q[6].u8[3];
    _t.u8[4] = (c)->q[7].u8[4] & (c)->q[6].u8[4];
    _t.u8[5] = (c)->q[7].u8[5] & (c)->q[6].u8[5];
    _t.u8[6] = (c)->q[7].u8[6] & (c)->q[6].u8[6];
    _t.u8[7] = (c)->q[7].u8[7] & (c)->q[6].u8[7];
    _t.u8[8] = (c)->q[7].u8[8] & (c)->q[6].u8[8];
    _t.u8[9] = (c)->q[7].u8[9] & (c)->q[6].u8[9];
    _t.u8[10] = (c)->q[7].u8[10] & (c)->q[6].u8[10];
    _t.u8[11] = (c)->q[7].u8[11] & (c)->q[6].u8[11];
    _t.u8[12] = (c)->q[7].u8[12] & (c)->q[6].u8[12];
    _t.u8[13] = (c)->q[7].u8[13] & (c)->q[6].u8[13];
    _t.u8[14] = (c)->q[7].u8[14] & (c)->q[6].u8[14];
    _t.u8[15] = (c)->q[7].u8[15] & (c)->q[6].u8[15];
    (c)->q[7] = _t; }
  /* c28fc: and v5.16b, v5.16b, v6.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[5].u8[0] & (c)->q[6].u8[0];
    _t.u8[1] = (c)->q[5].u8[1] & (c)->q[6].u8[1];
    _t.u8[2] = (c)->q[5].u8[2] & (c)->q[6].u8[2];
    _t.u8[3] = (c)->q[5].u8[3] & (c)->q[6].u8[3];
    _t.u8[4] = (c)->q[5].u8[4] & (c)->q[6].u8[4];
    _t.u8[5] = (c)->q[5].u8[5] & (c)->q[6].u8[5];
    _t.u8[6] = (c)->q[5].u8[6] & (c)->q[6].u8[6];
    _t.u8[7] = (c)->q[5].u8[7] & (c)->q[6].u8[7];
    _t.u8[8] = (c)->q[5].u8[8] & (c)->q[6].u8[8];
    _t.u8[9] = (c)->q[5].u8[9] & (c)->q[6].u8[9];
    _t.u8[10] = (c)->q[5].u8[10] & (c)->q[6].u8[10];
    _t.u8[11] = (c)->q[5].u8[11] & (c)->q[6].u8[11];
    _t.u8[12] = (c)->q[5].u8[12] & (c)->q[6].u8[12];
    _t.u8[13] = (c)->q[5].u8[13] & (c)->q[6].u8[13];
    _t.u8[14] = (c)->q[5].u8[14] & (c)->q[6].u8[14];
    _t.u8[15] = (c)->q[5].u8[15] & (c)->q[6].u8[15];
    (c)->q[5] = _t; }
  /* c2900: ushl v5.2d, v5.2d, v3.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[5].u64[0], (int8_t)(c)->q[3].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[5].u64[1], (int8_t)(c)->q[3].u64[1]);
    (c)->q[5] = _t; }
  /* c2904: ushl v6.2d, v7.2d, v2.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[7].u64[0], (int8_t)(c)->q[2].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[7].u64[1], (int8_t)(c)->q[2].u64[1]);
    (c)->q[6] = _t; }
  /* c2908: dup v7.2d, x21 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 21));
    _t.u64[1] = (ARC_X_R(c, 21));
    (c)->q[7] = _t; }
  /* c290c: orr v1.16b, v6.16b, v1.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[6].u8[0] | (c)->q[1].u8[0];
    _t.u8[1] = (c)->q[6].u8[1] | (c)->q[1].u8[1];
    _t.u8[2] = (c)->q[6].u8[2] | (c)->q[1].u8[2];
    _t.u8[3] = (c)->q[6].u8[3] | (c)->q[1].u8[3];
    _t.u8[4] = (c)->q[6].u8[4] | (c)->q[1].u8[4];
    _t.u8[5] = (c)->q[6].u8[5] | (c)->q[1].u8[5];
    _t.u8[6] = (c)->q[6].u8[6] | (c)->q[1].u8[6];
    _t.u8[7] = (c)->q[6].u8[7] | (c)->q[1].u8[7];
    _t.u8[8] = (c)->q[6].u8[8] | (c)->q[1].u8[8];
    _t.u8[9] = (c)->q[6].u8[9] | (c)->q[1].u8[9];
    _t.u8[10] = (c)->q[6].u8[10] | (c)->q[1].u8[10];
    _t.u8[11] = (c)->q[6].u8[11] | (c)->q[1].u8[11];
    _t.u8[12] = (c)->q[6].u8[12] | (c)->q[1].u8[12];
    _t.u8[13] = (c)->q[6].u8[13] | (c)->q[1].u8[13];
    _t.u8[14] = (c)->q[6].u8[14] | (c)->q[1].u8[14];
    _t.u8[15] = (c)->q[6].u8[15] | (c)->q[1].u8[15];
    (c)->q[1] = _t; }
  /* c2910: orr v0.16b, v5.16b, v0.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[5].u8[0] | (c)->q[0].u8[0];
    _t.u8[1] = (c)->q[5].u8[1] | (c)->q[0].u8[1];
    _t.u8[2] = (c)->q[5].u8[2] | (c)->q[0].u8[2];
    _t.u8[3] = (c)->q[5].u8[3] | (c)->q[0].u8[3];
    _t.u8[4] = (c)->q[5].u8[4] | (c)->q[0].u8[4];
    _t.u8[5] = (c)->q[5].u8[5] | (c)->q[0].u8[5];
    _t.u8[6] = (c)->q[5].u8[6] | (c)->q[0].u8[6];
    _t.u8[7] = (c)->q[5].u8[7] | (c)->q[0].u8[7];
    _t.u8[8] = (c)->q[5].u8[8] | (c)->q[0].u8[8];
    _t.u8[9] = (c)->q[5].u8[9] | (c)->q[0].u8[9];
    _t.u8[10] = (c)->q[5].u8[10] | (c)->q[0].u8[10];
    _t.u8[11] = (c)->q[5].u8[11] | (c)->q[0].u8[11];
    _t.u8[12] = (c)->q[5].u8[12] | (c)->q[0].u8[12];
    _t.u8[13] = (c)->q[5].u8[13] | (c)->q[0].u8[13];
    _t.u8[14] = (c)->q[5].u8[14] | (c)->q[0].u8[14];
    _t.u8[15] = (c)->q[5].u8[15] | (c)->q[0].u8[15];
    (c)->q[0] = _t; }
  /* c2914: add v2.2d, v2.2d, v7.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[2].u64[0] + (c)->q[7].u64[0];
    _t.u64[1] = (c)->q[2].u64[1] + (c)->q[7].u64[1];
    (c)->q[2] = _t; }
  /* c2918: add v3.2d, v3.2d, v7.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[3].u64[0] + (c)->q[7].u64[0];
    _t.u64[1] = (c)->q[3].u64[1] + (c)->q[7].u64[1];
    (c)->q[3] = _t; }
  /* c291c: b.ne #0xc28d4 */
  if (ARC_COND(c, 1)) goto L_c28d4;
  /* c2920: orr v0.16b, v0.16b, v1.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[0].u8[0] | (c)->q[1].u8[0];
    _t.u8[1] = (c)->q[0].u8[1] | (c)->q[1].u8[1];
    _t.u8[2] = (c)->q[0].u8[2] | (c)->q[1].u8[2];
    _t.u8[3] = (c)->q[0].u8[3] | (c)->q[1].u8[3];
    _t.u8[4] = (c)->q[0].u8[4] | (c)->q[1].u8[4];
    _t.u8[5] = (c)->q[0].u8[5] | (c)->q[1].u8[5];
    _t.u8[6] = (c)->q[0].u8[6] | (c)->q[1].u8[6];
    _t.u8[7] = (c)->q[0].u8[7] | (c)->q[1].u8[7];
    _t.u8[8] = (c)->q[0].u8[8] | (c)->q[1].u8[8];
    _t.u8[9] = (c)->q[0].u8[9] | (c)->q[1].u8[9];
    _t.u8[10] = (c)->q[0].u8[10] | (c)->q[1].u8[10];
    _t.u8[11] = (c)->q[0].u8[11] | (c)->q[1].u8[11];
    _t.u8[12] = (c)->q[0].u8[12] | (c)->q[1].u8[12];
    _t.u8[13] = (c)->q[0].u8[13] | (c)->q[1].u8[13];
    _t.u8[14] = (c)->q[0].u8[14] | (c)->q[1].u8[14];
    _t.u8[15] = (c)->q[0].u8[15] | (c)->q[1].u8[15];
    (c)->q[0] = _t; }
  /* c2924: cmp x15, x17 */
  (void)arc_sub64(c, ARC_X_R(c, 15), ARC_X_R(c, 17));
  /* c2928: ext v1.16b, v0.16b, v0.16b, #8 */
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
    (c)->q[1] = _t; }
  /* c292c: orr v0.8b, v0.8b, v1.8b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[0].u8[0] | (c)->q[1].u8[0];
    _t.u8[1] = (c)->q[0].u8[1] | (c)->q[1].u8[1];
    _t.u8[2] = (c)->q[0].u8[2] | (c)->q[1].u8[2];
    _t.u8[3] = (c)->q[0].u8[3] | (c)->q[1].u8[3];
    _t.u8[4] = (c)->q[0].u8[4] | (c)->q[1].u8[4];
    _t.u8[5] = (c)->q[0].u8[5] | (c)->q[1].u8[5];
    _t.u8[6] = (c)->q[0].u8[6] | (c)->q[1].u8[6];
    _t.u8[7] = (c)->q[0].u8[7] | (c)->q[1].u8[7];
    (c)->q[0] = _t; }
  /* c2930: fmov x14, d0 */
  ARC_X_W(c, 14, ARC_DU_R(c, 0));
  /* c2934: b.ne #0xc2940 */
  if (ARC_COND(c, 1)) goto L_c2940;
  /* c2938: b #0xc2960 */
  goto L_c2960;
L_c293c:;
  /* c293c: add x1, x11, x17 */
  ARC_X_W(c, 1, (ARC_X_R(c, 11) + ARC_X_R(c, 17)));
L_c2940:;
  /* c2940: ldrsb w3, [x1], #1 */
  { const uint64_t _a = ARC_X_R(c, 1);
    ARC_X_W(c, 1, ARC_X_R(c, 1) + INT64_C(1));
    ARC_W_W(c, 3, ((int32_t)(int8_t)arc_ld8(_a)));
  }
  /* c2944: cmp w3, w8, sxtb */
  (void)arc_sub32(c, ARC_W_R(c, 3), ((uint64_t)(int64_t)(int8_t)(ARC_W_R(c, 8))));
  /* c2948: cset w3, ge */
  ARC_W_W(c, 3, (ARC_COND(c, 10) ? 1 : 0));
  /* c294c: lsl x3, x3, x17 */
  ARC_X_W(c, 3, ((uint64_t)(ARC_X_R(c, 3)) << ((ARC_X_R(c, 17)) & 63)));
  /* c2950: add x17, x17, #1 */
  ARC_X_W(c, 17, (ARC_X_R(c, 17) + UINT64_C(1)));
  /* c2954: cmp x15, x17 */
  (void)arc_sub64(c, ARC_X_R(c, 15), ARC_X_R(c, 17));
  /* c2958: orr x14, x3, x14 */
  ARC_X_W(c, 14, (ARC_X_R(c, 3) | ARC_X_R(c, 14)));
  /* c295c: b.ne #0xc2940 */
  if (ARC_COND(c, 1)) goto L_c2940;
L_c2960:;
  /* c2960: mov x17, x15 */
  ARC_X_W(c, 17, ARC_X_R(c, 15));
  /* c2964: mov x15, x0 */
  ARC_X_W(c, 15, ARC_X_R(c, 0));
  /* c2968: cbz w16, #0xc2c00 */
  if ((ARC_W_R(c, 16)) == 0) goto L_c2c00;
L_c296c:;
  /* c296c: cmp x15, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 15), UINT64_C(1));
  /* c2970: b.lt #0xc2c00 */
  if (ARC_COND(c, 11)) goto L_c2c00;
  /* c2974: cmp x15, #4 */
  (void)arc_sub64(c, ARC_X_R(c, 15), UINT64_C(4));
  /* c2978: b.hs #0xc298c */
  if (ARC_COND(c, 2)) goto L_c298c;
  /* c297c: mov x13, xzr */
  ARC_X_W(c, 13, ARC_X_R(c, 31));
  /* c2980: mov x16, xzr */
  ARC_X_W(c, 16, ARC_X_R(c, 31));
  /* c2984: mov x0, x12 */
  ARC_X_W(c, 0, ARC_X_R(c, 12));
  /* c2988: b #0xc2be0 */
  goto L_c2be0;
L_c298c:;
  /* c298c: cmp x15, #0x10 */
  (void)arc_sub64(c, ARC_X_R(c, 15), UINT64_C(16));
  /* c2990: b.hs #0xc29a0 */
  if (ARC_COND(c, 2)) goto L_c29a0;
  /* c2994: mov x13, xzr */
  ARC_X_W(c, 13, ARC_X_R(c, 31));
  /* c2998: mov x16, xzr */
  ARC_X_W(c, 16, ARC_X_R(c, 31));
  /* c299c: b #0xc2b20 */
  goto L_c2b20;
L_c29a0:;
  /* c29a0: adrp x13, #0x52000 */
  ARC_X_W(c, 13, (arc_image_bases[1] + UINT64_C(335872)));
  /* c29a4: movi v3.2d, #0000000000000000 */
  arc_v_clear(c, 3);
  /* c29a8: movi v4.2d, #0000000000000000 */
  arc_v_clear(c, 4);
  /* c29ac: ldr q0, [x13, #0xa70] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 13) + INT64_C(2672))), arc_ld64((ARC_X_R(c, 13) + INT64_C(2672)) + 8));
  /* c29b0: adrp x13, #0x52000 */
  ARC_X_W(c, 13, (arc_image_bases[1] + UINT64_C(335872)));
  /* c29b4: movi v6.2d, #0000000000000000 */
  arc_v_clear(c, 6);
  /* c29b8: ldr q1, [x13, #0xc60] */
  arc_q_w(c, 1, arc_ld64((ARC_X_R(c, 13) + INT64_C(3168))), arc_ld64((ARC_X_R(c, 13) + INT64_C(3168)) + 8));
  /* c29bc: adrp x13, #0x52000 */
  ARC_X_W(c, 13, (arc_image_bases[1] + UINT64_C(335872)));
  /* c29c0: movi v5.2d, #0000000000000000 */
  arc_v_clear(c, 5);
  /* c29c4: ldr q2, [x13, #0xa10] */
  arc_q_w(c, 2, arc_ld64((ARC_X_R(c, 13) + INT64_C(2576))), arc_ld64((ARC_X_R(c, 13) + INT64_C(2576)) + 8));
  /* c29c8: adrp x13, #0x52000 */
  ARC_X_W(c, 13, (arc_image_bases[1] + UINT64_C(335872)));
  /* c29cc: movi v17.2d, #0000000000000000 */
  arc_v_clear(c, 17);
  /* c29d0: ldr q20, [x13, #0xc00] */
  arc_q_w(c, 20, arc_ld64((ARC_X_R(c, 13) + INT64_C(3072))), arc_ld64((ARC_X_R(c, 13) + INT64_C(3072)) + 8));
  /* c29d4: adrp x13, #0x52000 */
  ARC_X_W(c, 13, (arc_image_bases[1] + UINT64_C(335872)));
  /* c29d8: movi v7.2d, #0000000000000000 */
  arc_v_clear(c, 7);
  /* c29dc: ldr q21, [x13, #0xcc0] */
  arc_q_w(c, 21, arc_ld64((ARC_X_R(c, 13) + INT64_C(3264))), arc_ld64((ARC_X_R(c, 13) + INT64_C(3264)) + 8));
  /* c29e0: adrp x13, #0x52000 */
  ARC_X_W(c, 13, (arc_image_bases[1] + UINT64_C(335872)));
  /* c29e4: movi v18.2d, #0000000000000000 */
  arc_v_clear(c, 18);
  /* c29e8: movi v16.2d, #0000000000000000 */
  arc_v_clear(c, 16);
  /* c29ec: ldr q22, [x13, #0xc70] */
  arc_q_w(c, 22, arc_ld64((ARC_X_R(c, 13) + INT64_C(3184))), arc_ld64((ARC_X_R(c, 13) + INT64_C(3184)) + 8));
  /* c29f0: adrp x13, #0x52000 */
  ARC_X_W(c, 13, (arc_image_bases[1] + UINT64_C(335872)));
  /* c29f4: dup v19.16b, w8 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (ARC_W_R(c, 8));
    _t.u8[1] = (ARC_W_R(c, 8));
    _t.u8[2] = (ARC_W_R(c, 8));
    _t.u8[3] = (ARC_W_R(c, 8));
    _t.u8[4] = (ARC_W_R(c, 8));
    _t.u8[5] = (ARC_W_R(c, 8));
    _t.u8[6] = (ARC_W_R(c, 8));
    _t.u8[7] = (ARC_W_R(c, 8));
    _t.u8[8] = (ARC_W_R(c, 8));
    _t.u8[9] = (ARC_W_R(c, 8));
    _t.u8[10] = (ARC_W_R(c, 8));
    _t.u8[11] = (ARC_W_R(c, 8));
    _t.u8[12] = (ARC_W_R(c, 8));
    _t.u8[13] = (ARC_W_R(c, 8));
    _t.u8[14] = (ARC_W_R(c, 8));
    _t.u8[15] = (ARC_W_R(c, 8));
    (c)->q[19] = _t; }
  /* c29f8: ldr q23, [x13, #0xc10] */
  arc_q_w(c, 23, arc_ld64((ARC_X_R(c, 13) + INT64_C(3088))), arc_ld64((ARC_X_R(c, 13) + INT64_C(3088)) + 8));
  /* c29fc: adrp x13, #0x52000 */
  ARC_X_W(c, 13, (arc_image_bases[1] + UINT64_C(335872)));
  /* c2a00: and x16, x15, #0x7ffffffffffffff0 */
  ARC_X_W(c, 16, (ARC_X_R(c, 15) & UINT64_C(9223372036854775792)));
  /* c2a04: ldr q24, [x13, #0xa80] */
  arc_q_w(c, 24, arc_ld64((ARC_X_R(c, 13) + INT64_C(2688))), arc_ld64((ARC_X_R(c, 13) + INT64_C(2688)) + 8));
  /* c2a08: sub x13, x12, #0xf */
  ARC_X_W(c, 13, (ARC_X_R(c, 12) - UINT64_C(15)));
  /* c2a0c: mov x0, x16 */
  ARC_X_W(c, 0, ARC_X_R(c, 16));
L_c2a10:;
  /* c2a10: ldr q25, [x13], #0xfffffffffffffff0 */
  arc_q_w(c, 25, arc_ld64(ARC_X_R(c, 13)), arc_ld64(ARC_X_R(c, 13) + 8));
  ARC_X_W(c, 13, ARC_X_R(c, 13) + INT64_C(-16));
  /* c2a14: dup v29.2d, x5 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 5));
    _t.u64[1] = (ARC_X_R(c, 5));
    (c)->q[29] = _t; }
  /* c2a18: subs x0, x0, #0x10 */
  ARC_X_W(c, 0, arc_sub64(c, ARC_X_R(c, 0), UINT64_C(16)));
  /* c2a1c: rev64 v25.16b, v25.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[25].u8[7];
    _t.u8[1] = (c)->q[25].u8[6];
    _t.u8[2] = (c)->q[25].u8[5];
    _t.u8[3] = (c)->q[25].u8[4];
    _t.u8[4] = (c)->q[25].u8[3];
    _t.u8[5] = (c)->q[25].u8[2];
    _t.u8[6] = (c)->q[25].u8[1];
    _t.u8[7] = (c)->q[25].u8[0];
    _t.u8[8] = (c)->q[25].u8[15];
    _t.u8[9] = (c)->q[25].u8[14];
    _t.u8[10] = (c)->q[25].u8[13];
    _t.u8[11] = (c)->q[25].u8[12];
    _t.u8[12] = (c)->q[25].u8[11];
    _t.u8[13] = (c)->q[25].u8[10];
    _t.u8[14] = (c)->q[25].u8[9];
    _t.u8[15] = (c)->q[25].u8[8];
    (c)->q[25] = _t; }
  /* c2a20: ext v25.16b, v25.16b, v25.16b, #8 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[25].u8[8];
    _t.u8[1] = (c)->q[25].u8[9];
    _t.u8[2] = (c)->q[25].u8[10];
    _t.u8[3] = (c)->q[25].u8[11];
    _t.u8[4] = (c)->q[25].u8[12];
    _t.u8[5] = (c)->q[25].u8[13];
    _t.u8[6] = (c)->q[25].u8[14];
    _t.u8[7] = (c)->q[25].u8[15];
    _t.u8[8] = (c)->q[25].u8[0];
    _t.u8[9] = (c)->q[25].u8[1];
    _t.u8[10] = (c)->q[25].u8[2];
    _t.u8[11] = (c)->q[25].u8[3];
    _t.u8[12] = (c)->q[25].u8[4];
    _t.u8[13] = (c)->q[25].u8[5];
    _t.u8[14] = (c)->q[25].u8[6];
    _t.u8[15] = (c)->q[25].u8[7];
    (c)->q[25] = _t; }
  /* c2a24: cmgt v25.16b, v19.16b, v25.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = ((c)->q[19].i8[0] > (c)->q[25].i8[0]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[1] = ((c)->q[19].i8[1] > (c)->q[25].i8[1]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[2] = ((c)->q[19].i8[2] > (c)->q[25].i8[2]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[3] = ((c)->q[19].i8[3] > (c)->q[25].i8[3]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[4] = ((c)->q[19].i8[4] > (c)->q[25].i8[4]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[5] = ((c)->q[19].i8[5] > (c)->q[25].i8[5]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[6] = ((c)->q[19].i8[6] > (c)->q[25].i8[6]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[7] = ((c)->q[19].i8[7] > (c)->q[25].i8[7]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[8] = ((c)->q[19].i8[8] > (c)->q[25].i8[8]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[9] = ((c)->q[19].i8[9] > (c)->q[25].i8[9]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[10] = ((c)->q[19].i8[10] > (c)->q[25].i8[10]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[11] = ((c)->q[19].i8[11] > (c)->q[25].i8[11]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[12] = ((c)->q[19].i8[12] > (c)->q[25].i8[12]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[13] = ((c)->q[19].i8[13] > (c)->q[25].i8[13]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[14] = ((c)->q[19].i8[14] > (c)->q[25].i8[14]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[15] = ((c)->q[19].i8[15] > (c)->q[25].i8[15]) ? (uint8_t)~(uint8_t)0 : 0;
    (c)->q[25] = _t; }
  /* c2a28: ushll v26.8h, v25.8b, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = (uint16_t)((uint16_t)((c)->q[25].u8[0]) << 0);
    _t.u16[1] = (uint16_t)((uint16_t)((c)->q[25].u8[1]) << 0);
    _t.u16[2] = (uint16_t)((uint16_t)((c)->q[25].u8[2]) << 0);
    _t.u16[3] = (uint16_t)((uint16_t)((c)->q[25].u8[3]) << 0);
    _t.u16[4] = (uint16_t)((uint16_t)((c)->q[25].u8[4]) << 0);
    _t.u16[5] = (uint16_t)((uint16_t)((c)->q[25].u8[5]) << 0);
    _t.u16[6] = (uint16_t)((uint16_t)((c)->q[25].u8[6]) << 0);
    _t.u16[7] = (uint16_t)((uint16_t)((c)->q[25].u8[7]) << 0);
    (c)->q[26] = _t; }
  /* c2a2c: ushll2 v25.8h, v25.16b, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = (uint16_t)((uint16_t)((c)->q[25].u8[8]) << 0);
    _t.u16[1] = (uint16_t)((uint16_t)((c)->q[25].u8[9]) << 0);
    _t.u16[2] = (uint16_t)((uint16_t)((c)->q[25].u8[10]) << 0);
    _t.u16[3] = (uint16_t)((uint16_t)((c)->q[25].u8[11]) << 0);
    _t.u16[4] = (uint16_t)((uint16_t)((c)->q[25].u8[12]) << 0);
    _t.u16[5] = (uint16_t)((uint16_t)((c)->q[25].u8[13]) << 0);
    _t.u16[6] = (uint16_t)((uint16_t)((c)->q[25].u8[14]) << 0);
    _t.u16[7] = (uint16_t)((uint16_t)((c)->q[25].u8[15]) << 0);
    (c)->q[25] = _t; }
  /* c2a30: ushll2 v27.4s, v26.8h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((uint32_t)((c)->q[26].u16[4]) << 0);
    _t.u32[1] = (uint32_t)((uint32_t)((c)->q[26].u16[5]) << 0);
    _t.u32[2] = (uint32_t)((uint32_t)((c)->q[26].u16[6]) << 0);
    _t.u32[3] = (uint32_t)((uint32_t)((c)->q[26].u16[7]) << 0);
    (c)->q[27] = _t; }
  /* c2a34: ushll v26.4s, v26.4h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((uint32_t)((c)->q[26].u16[0]) << 0);
    _t.u32[1] = (uint32_t)((uint32_t)((c)->q[26].u16[1]) << 0);
    _t.u32[2] = (uint32_t)((uint32_t)((c)->q[26].u16[2]) << 0);
    _t.u32[3] = (uint32_t)((uint32_t)((c)->q[26].u16[3]) << 0);
    (c)->q[26] = _t; }
  /* c2a38: ushll2 v28.4s, v25.8h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((uint32_t)((c)->q[25].u16[4]) << 0);
    _t.u32[1] = (uint32_t)((uint32_t)((c)->q[25].u16[5]) << 0);
    _t.u32[2] = (uint32_t)((uint32_t)((c)->q[25].u16[6]) << 0);
    _t.u32[3] = (uint32_t)((uint32_t)((c)->q[25].u16[7]) << 0);
    (c)->q[28] = _t; }
  /* c2a3c: ushll v25.4s, v25.4h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((uint32_t)((c)->q[25].u16[0]) << 0);
    _t.u32[1] = (uint32_t)((uint32_t)((c)->q[25].u16[1]) << 0);
    _t.u32[2] = (uint32_t)((uint32_t)((c)->q[25].u16[2]) << 0);
    _t.u32[3] = (uint32_t)((uint32_t)((c)->q[25].u16[3]) << 0);
    (c)->q[25] = _t; }
  /* c2a40: ushll v30.2d, v27.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[27].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[27].u32[1]) << 0);
    (c)->q[30] = _t; }
  /* c2a44: ushll2 v31.2d, v26.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[26].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[26].u32[3]) << 0);
    (c)->q[31] = _t; }
  /* c2a48: ushll v26.2d, v26.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[26].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[26].u32[1]) << 0);
    (c)->q[26] = _t; }
  /* c2a4c: ushll2 v8.2d, v28.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[28].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[28].u32[3]) << 0);
    (c)->q[8] = _t; }
  /* c2a50: ushll v28.2d, v28.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[28].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[28].u32[1]) << 0);
    (c)->q[28] = _t; }
  /* c2a54: ushll v9.2d, v25.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[25].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[25].u32[1]) << 0);
    (c)->q[9] = _t; }
  /* c2a58: ushll2 v25.2d, v25.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[25].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[25].u32[3]) << 0);
    (c)->q[25] = _t; }
  /* c2a5c: ushll2 v27.2d, v27.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[27].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[27].u32[3]) << 0);
    (c)->q[27] = _t; }
  /* c2a60: and v30.16b, v30.16b, v29.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[30].u8[0] & (c)->q[29].u8[0];
    _t.u8[1] = (c)->q[30].u8[1] & (c)->q[29].u8[1];
    _t.u8[2] = (c)->q[30].u8[2] & (c)->q[29].u8[2];
    _t.u8[3] = (c)->q[30].u8[3] & (c)->q[29].u8[3];
    _t.u8[4] = (c)->q[30].u8[4] & (c)->q[29].u8[4];
    _t.u8[5] = (c)->q[30].u8[5] & (c)->q[29].u8[5];
    _t.u8[6] = (c)->q[30].u8[6] & (c)->q[29].u8[6];
    _t.u8[7] = (c)->q[30].u8[7] & (c)->q[29].u8[7];
    _t.u8[8] = (c)->q[30].u8[8] & (c)->q[29].u8[8];
    _t.u8[9] = (c)->q[30].u8[9] & (c)->q[29].u8[9];
    _t.u8[10] = (c)->q[30].u8[10] & (c)->q[29].u8[10];
    _t.u8[11] = (c)->q[30].u8[11] & (c)->q[29].u8[11];
    _t.u8[12] = (c)->q[30].u8[12] & (c)->q[29].u8[12];
    _t.u8[13] = (c)->q[30].u8[13] & (c)->q[29].u8[13];
    _t.u8[14] = (c)->q[30].u8[14] & (c)->q[29].u8[14];
    _t.u8[15] = (c)->q[30].u8[15] & (c)->q[29].u8[15];
    (c)->q[30] = _t; }
  /* c2a64: and v31.16b, v31.16b, v29.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[31].u8[0] & (c)->q[29].u8[0];
    _t.u8[1] = (c)->q[31].u8[1] & (c)->q[29].u8[1];
    _t.u8[2] = (c)->q[31].u8[2] & (c)->q[29].u8[2];
    _t.u8[3] = (c)->q[31].u8[3] & (c)->q[29].u8[3];
    _t.u8[4] = (c)->q[31].u8[4] & (c)->q[29].u8[4];
    _t.u8[5] = (c)->q[31].u8[5] & (c)->q[29].u8[5];
    _t.u8[6] = (c)->q[31].u8[6] & (c)->q[29].u8[6];
    _t.u8[7] = (c)->q[31].u8[7] & (c)->q[29].u8[7];
    _t.u8[8] = (c)->q[31].u8[8] & (c)->q[29].u8[8];
    _t.u8[9] = (c)->q[31].u8[9] & (c)->q[29].u8[9];
    _t.u8[10] = (c)->q[31].u8[10] & (c)->q[29].u8[10];
    _t.u8[11] = (c)->q[31].u8[11] & (c)->q[29].u8[11];
    _t.u8[12] = (c)->q[31].u8[12] & (c)->q[29].u8[12];
    _t.u8[13] = (c)->q[31].u8[13] & (c)->q[29].u8[13];
    _t.u8[14] = (c)->q[31].u8[14] & (c)->q[29].u8[14];
    _t.u8[15] = (c)->q[31].u8[15] & (c)->q[29].u8[15];
    (c)->q[31] = _t; }
  /* c2a68: and v26.16b, v26.16b, v29.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[26].u8[0] & (c)->q[29].u8[0];
    _t.u8[1] = (c)->q[26].u8[1] & (c)->q[29].u8[1];
    _t.u8[2] = (c)->q[26].u8[2] & (c)->q[29].u8[2];
    _t.u8[3] = (c)->q[26].u8[3] & (c)->q[29].u8[3];
    _t.u8[4] = (c)->q[26].u8[4] & (c)->q[29].u8[4];
    _t.u8[5] = (c)->q[26].u8[5] & (c)->q[29].u8[5];
    _t.u8[6] = (c)->q[26].u8[6] & (c)->q[29].u8[6];
    _t.u8[7] = (c)->q[26].u8[7] & (c)->q[29].u8[7];
    _t.u8[8] = (c)->q[26].u8[8] & (c)->q[29].u8[8];
    _t.u8[9] = (c)->q[26].u8[9] & (c)->q[29].u8[9];
    _t.u8[10] = (c)->q[26].u8[10] & (c)->q[29].u8[10];
    _t.u8[11] = (c)->q[26].u8[11] & (c)->q[29].u8[11];
    _t.u8[12] = (c)->q[26].u8[12] & (c)->q[29].u8[12];
    _t.u8[13] = (c)->q[26].u8[13] & (c)->q[29].u8[13];
    _t.u8[14] = (c)->q[26].u8[14] & (c)->q[29].u8[14];
    _t.u8[15] = (c)->q[26].u8[15] & (c)->q[29].u8[15];
    (c)->q[26] = _t; }
  /* c2a6c: and v8.16b, v8.16b, v29.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[8].u8[0] & (c)->q[29].u8[0];
    _t.u8[1] = (c)->q[8].u8[1] & (c)->q[29].u8[1];
    _t.u8[2] = (c)->q[8].u8[2] & (c)->q[29].u8[2];
    _t.u8[3] = (c)->q[8].u8[3] & (c)->q[29].u8[3];
    _t.u8[4] = (c)->q[8].u8[4] & (c)->q[29].u8[4];
    _t.u8[5] = (c)->q[8].u8[5] & (c)->q[29].u8[5];
    _t.u8[6] = (c)->q[8].u8[6] & (c)->q[29].u8[6];
    _t.u8[7] = (c)->q[8].u8[7] & (c)->q[29].u8[7];
    _t.u8[8] = (c)->q[8].u8[8] & (c)->q[29].u8[8];
    _t.u8[9] = (c)->q[8].u8[9] & (c)->q[29].u8[9];
    _t.u8[10] = (c)->q[8].u8[10] & (c)->q[29].u8[10];
    _t.u8[11] = (c)->q[8].u8[11] & (c)->q[29].u8[11];
    _t.u8[12] = (c)->q[8].u8[12] & (c)->q[29].u8[12];
    _t.u8[13] = (c)->q[8].u8[13] & (c)->q[29].u8[13];
    _t.u8[14] = (c)->q[8].u8[14] & (c)->q[29].u8[14];
    _t.u8[15] = (c)->q[8].u8[15] & (c)->q[29].u8[15];
    (c)->q[8] = _t; }
  /* c2a70: and v28.16b, v28.16b, v29.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[28].u8[0] & (c)->q[29].u8[0];
    _t.u8[1] = (c)->q[28].u8[1] & (c)->q[29].u8[1];
    _t.u8[2] = (c)->q[28].u8[2] & (c)->q[29].u8[2];
    _t.u8[3] = (c)->q[28].u8[3] & (c)->q[29].u8[3];
    _t.u8[4] = (c)->q[28].u8[4] & (c)->q[29].u8[4];
    _t.u8[5] = (c)->q[28].u8[5] & (c)->q[29].u8[5];
    _t.u8[6] = (c)->q[28].u8[6] & (c)->q[29].u8[6];
    _t.u8[7] = (c)->q[28].u8[7] & (c)->q[29].u8[7];
    _t.u8[8] = (c)->q[28].u8[8] & (c)->q[29].u8[8];
    _t.u8[9] = (c)->q[28].u8[9] & (c)->q[29].u8[9];
    _t.u8[10] = (c)->q[28].u8[10] & (c)->q[29].u8[10];
    _t.u8[11] = (c)->q[28].u8[11] & (c)->q[29].u8[11];
    _t.u8[12] = (c)->q[28].u8[12] & (c)->q[29].u8[12];
    _t.u8[13] = (c)->q[28].u8[13] & (c)->q[29].u8[13];
    _t.u8[14] = (c)->q[28].u8[14] & (c)->q[29].u8[14];
    _t.u8[15] = (c)->q[28].u8[15] & (c)->q[29].u8[15];
    (c)->q[28] = _t; }
  /* c2a74: and v9.16b, v9.16b, v29.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[9].u8[0] & (c)->q[29].u8[0];
    _t.u8[1] = (c)->q[9].u8[1] & (c)->q[29].u8[1];
    _t.u8[2] = (c)->q[9].u8[2] & (c)->q[29].u8[2];
    _t.u8[3] = (c)->q[9].u8[3] & (c)->q[29].u8[3];
    _t.u8[4] = (c)->q[9].u8[4] & (c)->q[29].u8[4];
    _t.u8[5] = (c)->q[9].u8[5] & (c)->q[29].u8[5];
    _t.u8[6] = (c)->q[9].u8[6] & (c)->q[29].u8[6];
    _t.u8[7] = (c)->q[9].u8[7] & (c)->q[29].u8[7];
    _t.u8[8] = (c)->q[9].u8[8] & (c)->q[29].u8[8];
    _t.u8[9] = (c)->q[9].u8[9] & (c)->q[29].u8[9];
    _t.u8[10] = (c)->q[9].u8[10] & (c)->q[29].u8[10];
    _t.u8[11] = (c)->q[9].u8[11] & (c)->q[29].u8[11];
    _t.u8[12] = (c)->q[9].u8[12] & (c)->q[29].u8[12];
    _t.u8[13] = (c)->q[9].u8[13] & (c)->q[29].u8[13];
    _t.u8[14] = (c)->q[9].u8[14] & (c)->q[29].u8[14];
    _t.u8[15] = (c)->q[9].u8[15] & (c)->q[29].u8[15];
    (c)->q[9] = _t; }
  /* c2a78: and v25.16b, v25.16b, v29.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[25].u8[0] & (c)->q[29].u8[0];
    _t.u8[1] = (c)->q[25].u8[1] & (c)->q[29].u8[1];
    _t.u8[2] = (c)->q[25].u8[2] & (c)->q[29].u8[2];
    _t.u8[3] = (c)->q[25].u8[3] & (c)->q[29].u8[3];
    _t.u8[4] = (c)->q[25].u8[4] & (c)->q[29].u8[4];
    _t.u8[5] = (c)->q[25].u8[5] & (c)->q[29].u8[5];
    _t.u8[6] = (c)->q[25].u8[6] & (c)->q[29].u8[6];
    _t.u8[7] = (c)->q[25].u8[7] & (c)->q[29].u8[7];
    _t.u8[8] = (c)->q[25].u8[8] & (c)->q[29].u8[8];
    _t.u8[9] = (c)->q[25].u8[9] & (c)->q[29].u8[9];
    _t.u8[10] = (c)->q[25].u8[10] & (c)->q[29].u8[10];
    _t.u8[11] = (c)->q[25].u8[11] & (c)->q[29].u8[11];
    _t.u8[12] = (c)->q[25].u8[12] & (c)->q[29].u8[12];
    _t.u8[13] = (c)->q[25].u8[13] & (c)->q[29].u8[13];
    _t.u8[14] = (c)->q[25].u8[14] & (c)->q[29].u8[14];
    _t.u8[15] = (c)->q[25].u8[15] & (c)->q[29].u8[15];
    (c)->q[25] = _t; }
  /* c2a7c: and v27.16b, v27.16b, v29.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[27].u8[0] & (c)->q[29].u8[0];
    _t.u8[1] = (c)->q[27].u8[1] & (c)->q[29].u8[1];
    _t.u8[2] = (c)->q[27].u8[2] & (c)->q[29].u8[2];
    _t.u8[3] = (c)->q[27].u8[3] & (c)->q[29].u8[3];
    _t.u8[4] = (c)->q[27].u8[4] & (c)->q[29].u8[4];
    _t.u8[5] = (c)->q[27].u8[5] & (c)->q[29].u8[5];
    _t.u8[6] = (c)->q[27].u8[6] & (c)->q[29].u8[6];
    _t.u8[7] = (c)->q[27].u8[7] & (c)->q[29].u8[7];
    _t.u8[8] = (c)->q[27].u8[8] & (c)->q[29].u8[8];
    _t.u8[9] = (c)->q[27].u8[9] & (c)->q[29].u8[9];
    _t.u8[10] = (c)->q[27].u8[10] & (c)->q[29].u8[10];
    _t.u8[11] = (c)->q[27].u8[11] & (c)->q[29].u8[11];
    _t.u8[12] = (c)->q[27].u8[12] & (c)->q[29].u8[12];
    _t.u8[13] = (c)->q[27].u8[13] & (c)->q[29].u8[13];
    _t.u8[14] = (c)->q[27].u8[14] & (c)->q[29].u8[14];
    _t.u8[15] = (c)->q[27].u8[15] & (c)->q[29].u8[15];
    (c)->q[27] = _t; }
  /* c2a80: dup v29.2d, x28 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 28));
    _t.u64[1] = (ARC_X_R(c, 28));
    (c)->q[29] = _t; }
  /* c2a84: ushl v26.2d, v26.2d, v24.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[26].u64[0], (int8_t)(c)->q[24].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[26].u64[1], (int8_t)(c)->q[24].u64[1]);
    (c)->q[26] = _t; }
  /* c2a88: ushl v31.2d, v31.2d, v23.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[31].u64[0], (int8_t)(c)->q[23].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[31].u64[1], (int8_t)(c)->q[23].u64[1]);
    (c)->q[31] = _t; }
  /* c2a8c: ushl v30.2d, v30.2d, v22.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[30].u64[0], (int8_t)(c)->q[22].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[30].u64[1], (int8_t)(c)->q[22].u64[1]);
    (c)->q[30] = _t; }
  /* c2a90: ushl v9.2d, v9.2d, v20.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[9].u64[0], (int8_t)(c)->q[20].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[9].u64[1], (int8_t)(c)->q[20].u64[1]);
    (c)->q[9] = _t; }
  /* c2a94: ushl v28.2d, v28.2d, v1.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[28].u64[0], (int8_t)(c)->q[1].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[28].u64[1], (int8_t)(c)->q[1].u64[1]);
    (c)->q[28] = _t; }
  /* c2a98: ushl v8.2d, v8.2d, v0.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[8].u64[0], (int8_t)(c)->q[0].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[8].u64[1], (int8_t)(c)->q[0].u64[1]);
    (c)->q[8] = _t; }
  /* c2a9c: ushl v27.2d, v27.2d, v21.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[27].u64[0], (int8_t)(c)->q[21].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[27].u64[1], (int8_t)(c)->q[21].u64[1]);
    (c)->q[27] = _t; }
  /* c2aa0: ushl v25.2d, v25.2d, v2.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[25].u64[0], (int8_t)(c)->q[2].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[25].u64[1], (int8_t)(c)->q[2].u64[1]);
    (c)->q[25] = _t; }
  /* c2aa4: add v22.2d, v22.2d, v29.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[22].u64[0] + (c)->q[29].u64[0];
    _t.u64[1] = (c)->q[22].u64[1] + (c)->q[29].u64[1];
    (c)->q[22] = _t; }
  /* c2aa8: add v23.2d, v23.2d, v29.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[23].u64[0] + (c)->q[29].u64[0];
    _t.u64[1] = (c)->q[23].u64[1] + (c)->q[29].u64[1];
    (c)->q[23] = _t; }
  /* c2aac: add v24.2d, v24.2d, v29.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[24].u64[0] + (c)->q[29].u64[0];
    _t.u64[1] = (c)->q[24].u64[1] + (c)->q[29].u64[1];
    (c)->q[24] = _t; }
  /* c2ab0: add v21.2d, v21.2d, v29.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[21].u64[0] + (c)->q[29].u64[0];
    _t.u64[1] = (c)->q[21].u64[1] + (c)->q[29].u64[1];
    (c)->q[21] = _t; }
  /* c2ab4: add v20.2d, v20.2d, v29.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[20].u64[0] + (c)->q[29].u64[0];
    _t.u64[1] = (c)->q[20].u64[1] + (c)->q[29].u64[1];
    (c)->q[20] = _t; }
  /* c2ab8: orr v16.16b, v8.16b, v16.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[8].u8[0] | (c)->q[16].u8[0];
    _t.u8[1] = (c)->q[8].u8[1] | (c)->q[16].u8[1];
    _t.u8[2] = (c)->q[8].u8[2] | (c)->q[16].u8[2];
    _t.u8[3] = (c)->q[8].u8[3] | (c)->q[16].u8[3];
    _t.u8[4] = (c)->q[8].u8[4] | (c)->q[16].u8[4];
    _t.u8[5] = (c)->q[8].u8[5] | (c)->q[16].u8[5];
    _t.u8[6] = (c)->q[8].u8[6] | (c)->q[16].u8[6];
    _t.u8[7] = (c)->q[8].u8[7] | (c)->q[16].u8[7];
    _t.u8[8] = (c)->q[8].u8[8] | (c)->q[16].u8[8];
    _t.u8[9] = (c)->q[8].u8[9] | (c)->q[16].u8[9];
    _t.u8[10] = (c)->q[8].u8[10] | (c)->q[16].u8[10];
    _t.u8[11] = (c)->q[8].u8[11] | (c)->q[16].u8[11];
    _t.u8[12] = (c)->q[8].u8[12] | (c)->q[16].u8[12];
    _t.u8[13] = (c)->q[8].u8[13] | (c)->q[16].u8[13];
    _t.u8[14] = (c)->q[8].u8[14] | (c)->q[16].u8[14];
    _t.u8[15] = (c)->q[8].u8[15] | (c)->q[16].u8[15];
    (c)->q[16] = _t; }
  /* c2abc: orr v18.16b, v28.16b, v18.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[28].u8[0] | (c)->q[18].u8[0];
    _t.u8[1] = (c)->q[28].u8[1] | (c)->q[18].u8[1];
    _t.u8[2] = (c)->q[28].u8[2] | (c)->q[18].u8[2];
    _t.u8[3] = (c)->q[28].u8[3] | (c)->q[18].u8[3];
    _t.u8[4] = (c)->q[28].u8[4] | (c)->q[18].u8[4];
    _t.u8[5] = (c)->q[28].u8[5] | (c)->q[18].u8[5];
    _t.u8[6] = (c)->q[28].u8[6] | (c)->q[18].u8[6];
    _t.u8[7] = (c)->q[28].u8[7] | (c)->q[18].u8[7];
    _t.u8[8] = (c)->q[28].u8[8] | (c)->q[18].u8[8];
    _t.u8[9] = (c)->q[28].u8[9] | (c)->q[18].u8[9];
    _t.u8[10] = (c)->q[28].u8[10] | (c)->q[18].u8[10];
    _t.u8[11] = (c)->q[28].u8[11] | (c)->q[18].u8[11];
    _t.u8[12] = (c)->q[28].u8[12] | (c)->q[18].u8[12];
    _t.u8[13] = (c)->q[28].u8[13] | (c)->q[18].u8[13];
    _t.u8[14] = (c)->q[28].u8[14] | (c)->q[18].u8[14];
    _t.u8[15] = (c)->q[28].u8[15] | (c)->q[18].u8[15];
    (c)->q[18] = _t; }
  /* c2ac0: orr v7.16b, v25.16b, v7.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[25].u8[0] | (c)->q[7].u8[0];
    _t.u8[1] = (c)->q[25].u8[1] | (c)->q[7].u8[1];
    _t.u8[2] = (c)->q[25].u8[2] | (c)->q[7].u8[2];
    _t.u8[3] = (c)->q[25].u8[3] | (c)->q[7].u8[3];
    _t.u8[4] = (c)->q[25].u8[4] | (c)->q[7].u8[4];
    _t.u8[5] = (c)->q[25].u8[5] | (c)->q[7].u8[5];
    _t.u8[6] = (c)->q[25].u8[6] | (c)->q[7].u8[6];
    _t.u8[7] = (c)->q[25].u8[7] | (c)->q[7].u8[7];
    _t.u8[8] = (c)->q[25].u8[8] | (c)->q[7].u8[8];
    _t.u8[9] = (c)->q[25].u8[9] | (c)->q[7].u8[9];
    _t.u8[10] = (c)->q[25].u8[10] | (c)->q[7].u8[10];
    _t.u8[11] = (c)->q[25].u8[11] | (c)->q[7].u8[11];
    _t.u8[12] = (c)->q[25].u8[12] | (c)->q[7].u8[12];
    _t.u8[13] = (c)->q[25].u8[13] | (c)->q[7].u8[13];
    _t.u8[14] = (c)->q[25].u8[14] | (c)->q[7].u8[14];
    _t.u8[15] = (c)->q[25].u8[15] | (c)->q[7].u8[15];
    (c)->q[7] = _t; }
  /* c2ac4: orr v5.16b, v27.16b, v5.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[27].u8[0] | (c)->q[5].u8[0];
    _t.u8[1] = (c)->q[27].u8[1] | (c)->q[5].u8[1];
    _t.u8[2] = (c)->q[27].u8[2] | (c)->q[5].u8[2];
    _t.u8[3] = (c)->q[27].u8[3] | (c)->q[5].u8[3];
    _t.u8[4] = (c)->q[27].u8[4] | (c)->q[5].u8[4];
    _t.u8[5] = (c)->q[27].u8[5] | (c)->q[5].u8[5];
    _t.u8[6] = (c)->q[27].u8[6] | (c)->q[5].u8[6];
    _t.u8[7] = (c)->q[27].u8[7] | (c)->q[5].u8[7];
    _t.u8[8] = (c)->q[27].u8[8] | (c)->q[5].u8[8];
    _t.u8[9] = (c)->q[27].u8[9] | (c)->q[5].u8[9];
    _t.u8[10] = (c)->q[27].u8[10] | (c)->q[5].u8[10];
    _t.u8[11] = (c)->q[27].u8[11] | (c)->q[5].u8[11];
    _t.u8[12] = (c)->q[27].u8[12] | (c)->q[5].u8[12];
    _t.u8[13] = (c)->q[27].u8[13] | (c)->q[5].u8[13];
    _t.u8[14] = (c)->q[27].u8[14] | (c)->q[5].u8[14];
    _t.u8[15] = (c)->q[27].u8[15] | (c)->q[5].u8[15];
    (c)->q[5] = _t; }
  /* c2ac8: orr v17.16b, v9.16b, v17.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[9].u8[0] | (c)->q[17].u8[0];
    _t.u8[1] = (c)->q[9].u8[1] | (c)->q[17].u8[1];
    _t.u8[2] = (c)->q[9].u8[2] | (c)->q[17].u8[2];
    _t.u8[3] = (c)->q[9].u8[3] | (c)->q[17].u8[3];
    _t.u8[4] = (c)->q[9].u8[4] | (c)->q[17].u8[4];
    _t.u8[5] = (c)->q[9].u8[5] | (c)->q[17].u8[5];
    _t.u8[6] = (c)->q[9].u8[6] | (c)->q[17].u8[6];
    _t.u8[7] = (c)->q[9].u8[7] | (c)->q[17].u8[7];
    _t.u8[8] = (c)->q[9].u8[8] | (c)->q[17].u8[8];
    _t.u8[9] = (c)->q[9].u8[9] | (c)->q[17].u8[9];
    _t.u8[10] = (c)->q[9].u8[10] | (c)->q[17].u8[10];
    _t.u8[11] = (c)->q[9].u8[11] | (c)->q[17].u8[11];
    _t.u8[12] = (c)->q[9].u8[12] | (c)->q[17].u8[12];
    _t.u8[13] = (c)->q[9].u8[13] | (c)->q[17].u8[13];
    _t.u8[14] = (c)->q[9].u8[14] | (c)->q[17].u8[14];
    _t.u8[15] = (c)->q[9].u8[15] | (c)->q[17].u8[15];
    (c)->q[17] = _t; }
  /* c2acc: orr v6.16b, v30.16b, v6.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[30].u8[0] | (c)->q[6].u8[0];
    _t.u8[1] = (c)->q[30].u8[1] | (c)->q[6].u8[1];
    _t.u8[2] = (c)->q[30].u8[2] | (c)->q[6].u8[2];
    _t.u8[3] = (c)->q[30].u8[3] | (c)->q[6].u8[3];
    _t.u8[4] = (c)->q[30].u8[4] | (c)->q[6].u8[4];
    _t.u8[5] = (c)->q[30].u8[5] | (c)->q[6].u8[5];
    _t.u8[6] = (c)->q[30].u8[6] | (c)->q[6].u8[6];
    _t.u8[7] = (c)->q[30].u8[7] | (c)->q[6].u8[7];
    _t.u8[8] = (c)->q[30].u8[8] | (c)->q[6].u8[8];
    _t.u8[9] = (c)->q[30].u8[9] | (c)->q[6].u8[9];
    _t.u8[10] = (c)->q[30].u8[10] | (c)->q[6].u8[10];
    _t.u8[11] = (c)->q[30].u8[11] | (c)->q[6].u8[11];
    _t.u8[12] = (c)->q[30].u8[12] | (c)->q[6].u8[12];
    _t.u8[13] = (c)->q[30].u8[13] | (c)->q[6].u8[13];
    _t.u8[14] = (c)->q[30].u8[14] | (c)->q[6].u8[14];
    _t.u8[15] = (c)->q[30].u8[15] | (c)->q[6].u8[15];
    (c)->q[6] = _t; }
  /* c2ad0: orr v4.16b, v31.16b, v4.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[31].u8[0] | (c)->q[4].u8[0];
    _t.u8[1] = (c)->q[31].u8[1] | (c)->q[4].u8[1];
    _t.u8[2] = (c)->q[31].u8[2] | (c)->q[4].u8[2];
    _t.u8[3] = (c)->q[31].u8[3] | (c)->q[4].u8[3];
    _t.u8[4] = (c)->q[31].u8[4] | (c)->q[4].u8[4];
    _t.u8[5] = (c)->q[31].u8[5] | (c)->q[4].u8[5];
    _t.u8[6] = (c)->q[31].u8[6] | (c)->q[4].u8[6];
    _t.u8[7] = (c)->q[31].u8[7] | (c)->q[4].u8[7];
    _t.u8[8] = (c)->q[31].u8[8] | (c)->q[4].u8[8];
    _t.u8[9] = (c)->q[31].u8[9] | (c)->q[4].u8[9];
    _t.u8[10] = (c)->q[31].u8[10] | (c)->q[4].u8[10];
    _t.u8[11] = (c)->q[31].u8[11] | (c)->q[4].u8[11];
    _t.u8[12] = (c)->q[31].u8[12] | (c)->q[4].u8[12];
    _t.u8[13] = (c)->q[31].u8[13] | (c)->q[4].u8[13];
    _t.u8[14] = (c)->q[31].u8[14] | (c)->q[4].u8[14];
    _t.u8[15] = (c)->q[31].u8[15] | (c)->q[4].u8[15];
    (c)->q[4] = _t; }
  /* c2ad4: orr v3.16b, v26.16b, v3.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[26].u8[0] | (c)->q[3].u8[0];
    _t.u8[1] = (c)->q[26].u8[1] | (c)->q[3].u8[1];
    _t.u8[2] = (c)->q[26].u8[2] | (c)->q[3].u8[2];
    _t.u8[3] = (c)->q[26].u8[3] | (c)->q[3].u8[3];
    _t.u8[4] = (c)->q[26].u8[4] | (c)->q[3].u8[4];
    _t.u8[5] = (c)->q[26].u8[5] | (c)->q[3].u8[5];
    _t.u8[6] = (c)->q[26].u8[6] | (c)->q[3].u8[6];
    _t.u8[7] = (c)->q[26].u8[7] | (c)->q[3].u8[7];
    _t.u8[8] = (c)->q[26].u8[8] | (c)->q[3].u8[8];
    _t.u8[9] = (c)->q[26].u8[9] | (c)->q[3].u8[9];
    _t.u8[10] = (c)->q[26].u8[10] | (c)->q[3].u8[10];
    _t.u8[11] = (c)->q[26].u8[11] | (c)->q[3].u8[11];
    _t.u8[12] = (c)->q[26].u8[12] | (c)->q[3].u8[12];
    _t.u8[13] = (c)->q[26].u8[13] | (c)->q[3].u8[13];
    _t.u8[14] = (c)->q[26].u8[14] | (c)->q[3].u8[14];
    _t.u8[15] = (c)->q[26].u8[15] | (c)->q[3].u8[15];
    (c)->q[3] = _t; }
  /* c2ad8: add v2.2d, v2.2d, v29.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[2].u64[0] + (c)->q[29].u64[0];
    _t.u64[1] = (c)->q[2].u64[1] + (c)->q[29].u64[1];
    (c)->q[2] = _t; }
  /* c2adc: add v1.2d, v1.2d, v29.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[1].u64[0] + (c)->q[29].u64[0];
    _t.u64[1] = (c)->q[1].u64[1] + (c)->q[29].u64[1];
    (c)->q[1] = _t; }
  /* c2ae0: add v0.2d, v0.2d, v29.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[0].u64[0] + (c)->q[29].u64[0];
    _t.u64[1] = (c)->q[0].u64[1] + (c)->q[29].u64[1];
    (c)->q[0] = _t; }
  /* c2ae4: b.ne #0xc2a10 */
  if (ARC_COND(c, 1)) goto L_c2a10;
  /* c2ae8: orr v0.16b, v3.16b, v17.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[3].u8[0] | (c)->q[17].u8[0];
    _t.u8[1] = (c)->q[3].u8[1] | (c)->q[17].u8[1];
    _t.u8[2] = (c)->q[3].u8[2] | (c)->q[17].u8[2];
    _t.u8[3] = (c)->q[3].u8[3] | (c)->q[17].u8[3];
    _t.u8[4] = (c)->q[3].u8[4] | (c)->q[17].u8[4];
    _t.u8[5] = (c)->q[3].u8[5] | (c)->q[17].u8[5];
    _t.u8[6] = (c)->q[3].u8[6] | (c)->q[17].u8[6];
    _t.u8[7] = (c)->q[3].u8[7] | (c)->q[17].u8[7];
    _t.u8[8] = (c)->q[3].u8[8] | (c)->q[17].u8[8];
    _t.u8[9] = (c)->q[3].u8[9] | (c)->q[17].u8[9];
    _t.u8[10] = (c)->q[3].u8[10] | (c)->q[17].u8[10];
    _t.u8[11] = (c)->q[3].u8[11] | (c)->q[17].u8[11];
    _t.u8[12] = (c)->q[3].u8[12] | (c)->q[17].u8[12];
    _t.u8[13] = (c)->q[3].u8[13] | (c)->q[17].u8[13];
    _t.u8[14] = (c)->q[3].u8[14] | (c)->q[17].u8[14];
    _t.u8[15] = (c)->q[3].u8[15] | (c)->q[17].u8[15];
    (c)->q[0] = _t; }
  /* c2aec: orr v1.16b, v6.16b, v18.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[6].u8[0] | (c)->q[18].u8[0];
    _t.u8[1] = (c)->q[6].u8[1] | (c)->q[18].u8[1];
    _t.u8[2] = (c)->q[6].u8[2] | (c)->q[18].u8[2];
    _t.u8[3] = (c)->q[6].u8[3] | (c)->q[18].u8[3];
    _t.u8[4] = (c)->q[6].u8[4] | (c)->q[18].u8[4];
    _t.u8[5] = (c)->q[6].u8[5] | (c)->q[18].u8[5];
    _t.u8[6] = (c)->q[6].u8[6] | (c)->q[18].u8[6];
    _t.u8[7] = (c)->q[6].u8[7] | (c)->q[18].u8[7];
    _t.u8[8] = (c)->q[6].u8[8] | (c)->q[18].u8[8];
    _t.u8[9] = (c)->q[6].u8[9] | (c)->q[18].u8[9];
    _t.u8[10] = (c)->q[6].u8[10] | (c)->q[18].u8[10];
    _t.u8[11] = (c)->q[6].u8[11] | (c)->q[18].u8[11];
    _t.u8[12] = (c)->q[6].u8[12] | (c)->q[18].u8[12];
    _t.u8[13] = (c)->q[6].u8[13] | (c)->q[18].u8[13];
    _t.u8[14] = (c)->q[6].u8[14] | (c)->q[18].u8[14];
    _t.u8[15] = (c)->q[6].u8[15] | (c)->q[18].u8[15];
    (c)->q[1] = _t; }
  /* c2af0: cmp x15, x16 */
  (void)arc_sub64(c, ARC_X_R(c, 15), ARC_X_R(c, 16));
  /* c2af4: orr v2.16b, v4.16b, v7.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[4].u8[0] | (c)->q[7].u8[0];
    _t.u8[1] = (c)->q[4].u8[1] | (c)->q[7].u8[1];
    _t.u8[2] = (c)->q[4].u8[2] | (c)->q[7].u8[2];
    _t.u8[3] = (c)->q[4].u8[3] | (c)->q[7].u8[3];
    _t.u8[4] = (c)->q[4].u8[4] | (c)->q[7].u8[4];
    _t.u8[5] = (c)->q[4].u8[5] | (c)->q[7].u8[5];
    _t.u8[6] = (c)->q[4].u8[6] | (c)->q[7].u8[6];
    _t.u8[7] = (c)->q[4].u8[7] | (c)->q[7].u8[7];
    _t.u8[8] = (c)->q[4].u8[8] | (c)->q[7].u8[8];
    _t.u8[9] = (c)->q[4].u8[9] | (c)->q[7].u8[9];
    _t.u8[10] = (c)->q[4].u8[10] | (c)->q[7].u8[10];
    _t.u8[11] = (c)->q[4].u8[11] | (c)->q[7].u8[11];
    _t.u8[12] = (c)->q[4].u8[12] | (c)->q[7].u8[12];
    _t.u8[13] = (c)->q[4].u8[13] | (c)->q[7].u8[13];
    _t.u8[14] = (c)->q[4].u8[14] | (c)->q[7].u8[14];
    _t.u8[15] = (c)->q[4].u8[15] | (c)->q[7].u8[15];
    (c)->q[2] = _t; }
  /* c2af8: orr v3.16b, v5.16b, v16.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[5].u8[0] | (c)->q[16].u8[0];
    _t.u8[1] = (c)->q[5].u8[1] | (c)->q[16].u8[1];
    _t.u8[2] = (c)->q[5].u8[2] | (c)->q[16].u8[2];
    _t.u8[3] = (c)->q[5].u8[3] | (c)->q[16].u8[3];
    _t.u8[4] = (c)->q[5].u8[4] | (c)->q[16].u8[4];
    _t.u8[5] = (c)->q[5].u8[5] | (c)->q[16].u8[5];
    _t.u8[6] = (c)->q[5].u8[6] | (c)->q[16].u8[6];
    _t.u8[7] = (c)->q[5].u8[7] | (c)->q[16].u8[7];
    _t.u8[8] = (c)->q[5].u8[8] | (c)->q[16].u8[8];
    _t.u8[9] = (c)->q[5].u8[9] | (c)->q[16].u8[9];
    _t.u8[10] = (c)->q[5].u8[10] | (c)->q[16].u8[10];
    _t.u8[11] = (c)->q[5].u8[11] | (c)->q[16].u8[11];
    _t.u8[12] = (c)->q[5].u8[12] | (c)->q[16].u8[12];
    _t.u8[13] = (c)->q[5].u8[13] | (c)->q[16].u8[13];
    _t.u8[14] = (c)->q[5].u8[14] | (c)->q[16].u8[14];
    _t.u8[15] = (c)->q[5].u8[15] | (c)->q[16].u8[15];
    (c)->q[3] = _t; }
  /* c2afc: orr v0.16b, v0.16b, v1.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[0].u8[0] | (c)->q[1].u8[0];
    _t.u8[1] = (c)->q[0].u8[1] | (c)->q[1].u8[1];
    _t.u8[2] = (c)->q[0].u8[2] | (c)->q[1].u8[2];
    _t.u8[3] = (c)->q[0].u8[3] | (c)->q[1].u8[3];
    _t.u8[4] = (c)->q[0].u8[4] | (c)->q[1].u8[4];
    _t.u8[5] = (c)->q[0].u8[5] | (c)->q[1].u8[5];
    _t.u8[6] = (c)->q[0].u8[6] | (c)->q[1].u8[6];
    _t.u8[7] = (c)->q[0].u8[7] | (c)->q[1].u8[7];
    _t.u8[8] = (c)->q[0].u8[8] | (c)->q[1].u8[8];
    _t.u8[9] = (c)->q[0].u8[9] | (c)->q[1].u8[9];
    _t.u8[10] = (c)->q[0].u8[10] | (c)->q[1].u8[10];
    _t.u8[11] = (c)->q[0].u8[11] | (c)->q[1].u8[11];
    _t.u8[12] = (c)->q[0].u8[12] | (c)->q[1].u8[12];
    _t.u8[13] = (c)->q[0].u8[13] | (c)->q[1].u8[13];
    _t.u8[14] = (c)->q[0].u8[14] | (c)->q[1].u8[14];
    _t.u8[15] = (c)->q[0].u8[15] | (c)->q[1].u8[15];
    (c)->q[0] = _t; }
  /* c2b00: orr v1.16b, v2.16b, v3.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[2].u8[0] | (c)->q[3].u8[0];
    _t.u8[1] = (c)->q[2].u8[1] | (c)->q[3].u8[1];
    _t.u8[2] = (c)->q[2].u8[2] | (c)->q[3].u8[2];
    _t.u8[3] = (c)->q[2].u8[3] | (c)->q[3].u8[3];
    _t.u8[4] = (c)->q[2].u8[4] | (c)->q[3].u8[4];
    _t.u8[5] = (c)->q[2].u8[5] | (c)->q[3].u8[5];
    _t.u8[6] = (c)->q[2].u8[6] | (c)->q[3].u8[6];
    _t.u8[7] = (c)->q[2].u8[7] | (c)->q[3].u8[7];
    _t.u8[8] = (c)->q[2].u8[8] | (c)->q[3].u8[8];
    _t.u8[9] = (c)->q[2].u8[9] | (c)->q[3].u8[9];
    _t.u8[10] = (c)->q[2].u8[10] | (c)->q[3].u8[10];
    _t.u8[11] = (c)->q[2].u8[11] | (c)->q[3].u8[11];
    _t.u8[12] = (c)->q[2].u8[12] | (c)->q[3].u8[12];
    _t.u8[13] = (c)->q[2].u8[13] | (c)->q[3].u8[13];
    _t.u8[14] = (c)->q[2].u8[14] | (c)->q[3].u8[14];
    _t.u8[15] = (c)->q[2].u8[15] | (c)->q[3].u8[15];
    (c)->q[1] = _t; }
  /* c2b04: orr v0.16b, v0.16b, v1.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[0].u8[0] | (c)->q[1].u8[0];
    _t.u8[1] = (c)->q[0].u8[1] | (c)->q[1].u8[1];
    _t.u8[2] = (c)->q[0].u8[2] | (c)->q[1].u8[2];
    _t.u8[3] = (c)->q[0].u8[3] | (c)->q[1].u8[3];
    _t.u8[4] = (c)->q[0].u8[4] | (c)->q[1].u8[4];
    _t.u8[5] = (c)->q[0].u8[5] | (c)->q[1].u8[5];
    _t.u8[6] = (c)->q[0].u8[6] | (c)->q[1].u8[6];
    _t.u8[7] = (c)->q[0].u8[7] | (c)->q[1].u8[7];
    _t.u8[8] = (c)->q[0].u8[8] | (c)->q[1].u8[8];
    _t.u8[9] = (c)->q[0].u8[9] | (c)->q[1].u8[9];
    _t.u8[10] = (c)->q[0].u8[10] | (c)->q[1].u8[10];
    _t.u8[11] = (c)->q[0].u8[11] | (c)->q[1].u8[11];
    _t.u8[12] = (c)->q[0].u8[12] | (c)->q[1].u8[12];
    _t.u8[13] = (c)->q[0].u8[13] | (c)->q[1].u8[13];
    _t.u8[14] = (c)->q[0].u8[14] | (c)->q[1].u8[14];
    _t.u8[15] = (c)->q[0].u8[15] | (c)->q[1].u8[15];
    (c)->q[0] = _t; }
  /* c2b08: ext v1.16b, v0.16b, v0.16b, #8 */
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
    (c)->q[1] = _t; }
  /* c2b0c: orr v0.8b, v0.8b, v1.8b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[0].u8[0] | (c)->q[1].u8[0];
    _t.u8[1] = (c)->q[0].u8[1] | (c)->q[1].u8[1];
    _t.u8[2] = (c)->q[0].u8[2] | (c)->q[1].u8[2];
    _t.u8[3] = (c)->q[0].u8[3] | (c)->q[1].u8[3];
    _t.u8[4] = (c)->q[0].u8[4] | (c)->q[1].u8[4];
    _t.u8[5] = (c)->q[0].u8[5] | (c)->q[1].u8[5];
    _t.u8[6] = (c)->q[0].u8[6] | (c)->q[1].u8[6];
    _t.u8[7] = (c)->q[0].u8[7] | (c)->q[1].u8[7];
    (c)->q[0] = _t; }
  /* c2b10: fmov x13, d0 */
  ARC_X_W(c, 13, ARC_DU_R(c, 0));
  /* c2b14: b.eq #0xc2c00 */
  if (ARC_COND(c, 0)) goto L_c2c00;
  /* c2b18: tst x15, #0xc */
  arc_flags_logical64(c, (uint64_t)(ARC_X_R(c, 15) & UINT64_C(12)));
  /* c2b1c: b.eq #0xc2bdc */
  if (ARC_COND(c, 0)) goto L_c2bdc;
L_c2b20:;
  /* c2b20: dup v1.4h, w8 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = (ARC_W_R(c, 8));
    _t.u16[1] = (ARC_W_R(c, 8));
    _t.u16[2] = (ARC_W_R(c, 8));
    _t.u16[3] = (ARC_W_R(c, 8));
    (c)->q[1] = _t; }
  /* c2b24: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* c2b28: mov x1, x16 */
  ARC_X_W(c, 1, ARC_X_R(c, 16));
  /* c2b2c: dup v3.2d, x16 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 16));
    _t.u64[1] = (ARC_X_R(c, 16));
    (c)->q[3] = _t; }
  /* c2b30: adrp x16, #0x52000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(335872)));
  /* c2b34: sub x3, x12, x1 */
  ARC_X_W(c, 3, (ARC_X_R(c, 12) - ARC_X_R(c, 1)));
  /* c2b38: ldr q2, [x16, #0xc10] */
  arc_q_w(c, 2, arc_ld64((ARC_X_R(c, 16) + INT64_C(3088))), arc_ld64((ARC_X_R(c, 16) + INT64_C(3088)) + 8));
  /* c2b3c: adrp x16, #0x52000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(335872)));
  /* c2b40: ldr q5, [x16, #0xa80] */
  arc_q_w(c, 5, arc_ld64((ARC_X_R(c, 16) + INT64_C(2688))), arc_ld64((ARC_X_R(c, 16) + INT64_C(2688)) + 8));
  /* c2b44: and x16, x15, #0x7ffffffffffffffc */
  ARC_X_W(c, 16, (ARC_X_R(c, 15) & UINT64_C(9223372036854775804)));
  /* c2b48: shl v4.4h, v1.4h, #8 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = (uint16_t)((c)->q[1].u16[0] << 8);
    _t.u16[1] = (uint16_t)((c)->q[1].u16[1] << 8);
    _t.u16[2] = (uint16_t)((c)->q[1].u16[2] << 8);
    _t.u16[3] = (uint16_t)((c)->q[1].u16[3] << 8);
    (c)->q[4] = _t; }
  /* c2b4c: movi v1.2d, #0000000000000000 */
  arc_v_clear(c, 1);
  /* c2b50: mov v0.d[0], x13 */
  (c)->q[0].u64[0] = (ARC_X_R(c, 13));
  /* c2b54: orr v2.16b, v3.16b, v2.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[3].u8[0] | (c)->q[2].u8[0];
    _t.u8[1] = (c)->q[3].u8[1] | (c)->q[2].u8[1];
    _t.u8[2] = (c)->q[3].u8[2] | (c)->q[2].u8[2];
    _t.u8[3] = (c)->q[3].u8[3] | (c)->q[2].u8[3];
    _t.u8[4] = (c)->q[3].u8[4] | (c)->q[2].u8[4];
    _t.u8[5] = (c)->q[3].u8[5] | (c)->q[2].u8[5];
    _t.u8[6] = (c)->q[3].u8[6] | (c)->q[2].u8[6];
    _t.u8[7] = (c)->q[3].u8[7] | (c)->q[2].u8[7];
    _t.u8[8] = (c)->q[3].u8[8] | (c)->q[2].u8[8];
    _t.u8[9] = (c)->q[3].u8[9] | (c)->q[2].u8[9];
    _t.u8[10] = (c)->q[3].u8[10] | (c)->q[2].u8[10];
    _t.u8[11] = (c)->q[3].u8[11] | (c)->q[2].u8[11];
    _t.u8[12] = (c)->q[3].u8[12] | (c)->q[2].u8[12];
    _t.u8[13] = (c)->q[3].u8[13] | (c)->q[2].u8[13];
    _t.u8[14] = (c)->q[3].u8[14] | (c)->q[2].u8[14];
    _t.u8[15] = (c)->q[3].u8[15] | (c)->q[2].u8[15];
    (c)->q[2] = _t; }
  /* c2b58: orr v3.16b, v3.16b, v5.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[3].u8[0] | (c)->q[5].u8[0];
    _t.u8[1] = (c)->q[3].u8[1] | (c)->q[5].u8[1];
    _t.u8[2] = (c)->q[3].u8[2] | (c)->q[5].u8[2];
    _t.u8[3] = (c)->q[3].u8[3] | (c)->q[5].u8[3];
    _t.u8[4] = (c)->q[3].u8[4] | (c)->q[5].u8[4];
    _t.u8[5] = (c)->q[3].u8[5] | (c)->q[5].u8[5];
    _t.u8[6] = (c)->q[3].u8[6] | (c)->q[5].u8[6];
    _t.u8[7] = (c)->q[3].u8[7] | (c)->q[5].u8[7];
    _t.u8[8] = (c)->q[3].u8[8] | (c)->q[5].u8[8];
    _t.u8[9] = (c)->q[3].u8[9] | (c)->q[5].u8[9];
    _t.u8[10] = (c)->q[3].u8[10] | (c)->q[5].u8[10];
    _t.u8[11] = (c)->q[3].u8[11] | (c)->q[5].u8[11];
    _t.u8[12] = (c)->q[3].u8[12] | (c)->q[5].u8[12];
    _t.u8[13] = (c)->q[3].u8[13] | (c)->q[5].u8[13];
    _t.u8[14] = (c)->q[3].u8[14] | (c)->q[5].u8[14];
    _t.u8[15] = (c)->q[3].u8[15] | (c)->q[5].u8[15];
    (c)->q[3] = _t; }
  /* c2b5c: sub x0, x12, x16 */
  ARC_X_W(c, 0, (ARC_X_R(c, 12) - ARC_X_R(c, 16)));
  /* c2b60: sub x13, x1, x16 */
  ARC_X_W(c, 13, (ARC_X_R(c, 1) - ARC_X_R(c, 16)));
  /* c2b64: sub x1, x3, #3 */
  ARC_X_W(c, 1, (ARC_X_R(c, 3) - UINT64_C(3)));
  /* c2b68: sshr v4.4h, v4.4h, #8 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = (uint16_t)((c)->q[4].i16[0] >> 8);
    _t.u16[1] = (uint16_t)((c)->q[4].i16[1] >> 8);
    _t.u16[2] = (uint16_t)((c)->q[4].i16[2] >> 8);
    _t.u16[3] = (uint16_t)((c)->q[4].i16[3] >> 8);
    (c)->q[4] = _t; }
L_c2b6c:;
  /* c2b6c: ldr s5, [x1], #0xfffffffffffffffc */
  arc_su_w(c, 5, arc_ld32(ARC_X_R(c, 1)));
  ARC_X_W(c, 1, ARC_X_R(c, 1) + INT64_C(-4));
  /* c2b70: dup v6.2d, x5 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 5));
    _t.u64[1] = (ARC_X_R(c, 5));
    (c)->q[6] = _t; }
  /* c2b74: adds x13, x13, #4 */
  ARC_X_W(c, 13, arc_add64(c, ARC_X_R(c, 13), UINT64_C(4), 0));
  /* c2b78: ushll v5.8h, v5.8b, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = (uint16_t)((uint16_t)((c)->q[5].u8[0]) << 0);
    _t.u16[1] = (uint16_t)((uint16_t)((c)->q[5].u8[1]) << 0);
    _t.u16[2] = (uint16_t)((uint16_t)((c)->q[5].u8[2]) << 0);
    _t.u16[3] = (uint16_t)((uint16_t)((c)->q[5].u8[3]) << 0);
    _t.u16[4] = (uint16_t)((uint16_t)((c)->q[5].u8[4]) << 0);
    _t.u16[5] = (uint16_t)((uint16_t)((c)->q[5].u8[5]) << 0);
    _t.u16[6] = (uint16_t)((uint16_t)((c)->q[5].u8[6]) << 0);
    _t.u16[7] = (uint16_t)((uint16_t)((c)->q[5].u8[7]) << 0);
    (c)->q[5] = _t; }
  /* c2b7c: rev64 v5.4h, v5.4h */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = (c)->q[5].u16[3];
    _t.u16[1] = (c)->q[5].u16[2];
    _t.u16[2] = (c)->q[5].u16[1];
    _t.u16[3] = (c)->q[5].u16[0];
    (c)->q[5] = _t; }
  /* c2b80: shl v5.4h, v5.4h, #8 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = (uint16_t)((c)->q[5].u16[0] << 8);
    _t.u16[1] = (uint16_t)((c)->q[5].u16[1] << 8);
    _t.u16[2] = (uint16_t)((c)->q[5].u16[2] << 8);
    _t.u16[3] = (uint16_t)((c)->q[5].u16[3] << 8);
    (c)->q[5] = _t; }
  /* c2b84: sshr v5.4h, v5.4h, #8 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = (uint16_t)((c)->q[5].i16[0] >> 8);
    _t.u16[1] = (uint16_t)((c)->q[5].i16[1] >> 8);
    _t.u16[2] = (uint16_t)((c)->q[5].i16[2] >> 8);
    _t.u16[3] = (uint16_t)((c)->q[5].i16[3] >> 8);
    (c)->q[5] = _t; }
  /* c2b88: cmgt v5.4h, v4.4h, v5.4h */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = ((c)->q[4].i16[0] > (c)->q[5].i16[0]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[1] = ((c)->q[4].i16[1] > (c)->q[5].i16[1]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[2] = ((c)->q[4].i16[2] > (c)->q[5].i16[2]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[3] = ((c)->q[4].i16[3] > (c)->q[5].i16[3]) ? (uint16_t)~(uint16_t)0 : 0;
    (c)->q[5] = _t; }
  /* c2b8c: ushll v5.4s, v5.4h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((uint32_t)((c)->q[5].u16[0]) << 0);
    _t.u32[1] = (uint32_t)((uint32_t)((c)->q[5].u16[1]) << 0);
    _t.u32[2] = (uint32_t)((uint32_t)((c)->q[5].u16[2]) << 0);
    _t.u32[3] = (uint32_t)((uint32_t)((c)->q[5].u16[3]) << 0);
    (c)->q[5] = _t; }
  /* c2b90: ushll2 v7.2d, v5.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[5].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[5].u32[3]) << 0);
    (c)->q[7] = _t; }
  /* c2b94: ushll v5.2d, v5.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[5].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[5].u32[1]) << 0);
    (c)->q[5] = _t; }
  /* c2b98: and v7.16b, v7.16b, v6.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[7].u8[0] & (c)->q[6].u8[0];
    _t.u8[1] = (c)->q[7].u8[1] & (c)->q[6].u8[1];
    _t.u8[2] = (c)->q[7].u8[2] & (c)->q[6].u8[2];
    _t.u8[3] = (c)->q[7].u8[3] & (c)->q[6].u8[3];
    _t.u8[4] = (c)->q[7].u8[4] & (c)->q[6].u8[4];
    _t.u8[5] = (c)->q[7].u8[5] & (c)->q[6].u8[5];
    _t.u8[6] = (c)->q[7].u8[6] & (c)->q[6].u8[6];
    _t.u8[7] = (c)->q[7].u8[7] & (c)->q[6].u8[7];
    _t.u8[8] = (c)->q[7].u8[8] & (c)->q[6].u8[8];
    _t.u8[9] = (c)->q[7].u8[9] & (c)->q[6].u8[9];
    _t.u8[10] = (c)->q[7].u8[10] & (c)->q[6].u8[10];
    _t.u8[11] = (c)->q[7].u8[11] & (c)->q[6].u8[11];
    _t.u8[12] = (c)->q[7].u8[12] & (c)->q[6].u8[12];
    _t.u8[13] = (c)->q[7].u8[13] & (c)->q[6].u8[13];
    _t.u8[14] = (c)->q[7].u8[14] & (c)->q[6].u8[14];
    _t.u8[15] = (c)->q[7].u8[15] & (c)->q[6].u8[15];
    (c)->q[7] = _t; }
  /* c2b9c: and v5.16b, v5.16b, v6.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[5].u8[0] & (c)->q[6].u8[0];
    _t.u8[1] = (c)->q[5].u8[1] & (c)->q[6].u8[1];
    _t.u8[2] = (c)->q[5].u8[2] & (c)->q[6].u8[2];
    _t.u8[3] = (c)->q[5].u8[3] & (c)->q[6].u8[3];
    _t.u8[4] = (c)->q[5].u8[4] & (c)->q[6].u8[4];
    _t.u8[5] = (c)->q[5].u8[5] & (c)->q[6].u8[5];
    _t.u8[6] = (c)->q[5].u8[6] & (c)->q[6].u8[6];
    _t.u8[7] = (c)->q[5].u8[7] & (c)->q[6].u8[7];
    _t.u8[8] = (c)->q[5].u8[8] & (c)->q[6].u8[8];
    _t.u8[9] = (c)->q[5].u8[9] & (c)->q[6].u8[9];
    _t.u8[10] = (c)->q[5].u8[10] & (c)->q[6].u8[10];
    _t.u8[11] = (c)->q[5].u8[11] & (c)->q[6].u8[11];
    _t.u8[12] = (c)->q[5].u8[12] & (c)->q[6].u8[12];
    _t.u8[13] = (c)->q[5].u8[13] & (c)->q[6].u8[13];
    _t.u8[14] = (c)->q[5].u8[14] & (c)->q[6].u8[14];
    _t.u8[15] = (c)->q[5].u8[15] & (c)->q[6].u8[15];
    (c)->q[5] = _t; }
  /* c2ba0: ushl v6.2d, v7.2d, v2.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[7].u64[0], (int8_t)(c)->q[2].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[7].u64[1], (int8_t)(c)->q[2].u64[1]);
    (c)->q[6] = _t; }
  /* c2ba4: dup v7.2d, x21 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 21));
    _t.u64[1] = (ARC_X_R(c, 21));
    (c)->q[7] = _t; }
  /* c2ba8: ushl v5.2d, v5.2d, v3.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[5].u64[0], (int8_t)(c)->q[3].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[5].u64[1], (int8_t)(c)->q[3].u64[1]);
    (c)->q[5] = _t; }
  /* c2bac: orr v1.16b, v6.16b, v1.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[6].u8[0] | (c)->q[1].u8[0];
    _t.u8[1] = (c)->q[6].u8[1] | (c)->q[1].u8[1];
    _t.u8[2] = (c)->q[6].u8[2] | (c)->q[1].u8[2];
    _t.u8[3] = (c)->q[6].u8[3] | (c)->q[1].u8[3];
    _t.u8[4] = (c)->q[6].u8[4] | (c)->q[1].u8[4];
    _t.u8[5] = (c)->q[6].u8[5] | (c)->q[1].u8[5];
    _t.u8[6] = (c)->q[6].u8[6] | (c)->q[1].u8[6];
    _t.u8[7] = (c)->q[6].u8[7] | (c)->q[1].u8[7];
    _t.u8[8] = (c)->q[6].u8[8] | (c)->q[1].u8[8];
    _t.u8[9] = (c)->q[6].u8[9] | (c)->q[1].u8[9];
    _t.u8[10] = (c)->q[6].u8[10] | (c)->q[1].u8[10];
    _t.u8[11] = (c)->q[6].u8[11] | (c)->q[1].u8[11];
    _t.u8[12] = (c)->q[6].u8[12] | (c)->q[1].u8[12];
    _t.u8[13] = (c)->q[6].u8[13] | (c)->q[1].u8[13];
    _t.u8[14] = (c)->q[6].u8[14] | (c)->q[1].u8[14];
    _t.u8[15] = (c)->q[6].u8[15] | (c)->q[1].u8[15];
    (c)->q[1] = _t; }
  /* c2bb0: orr v0.16b, v5.16b, v0.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[5].u8[0] | (c)->q[0].u8[0];
    _t.u8[1] = (c)->q[5].u8[1] | (c)->q[0].u8[1];
    _t.u8[2] = (c)->q[5].u8[2] | (c)->q[0].u8[2];
    _t.u8[3] = (c)->q[5].u8[3] | (c)->q[0].u8[3];
    _t.u8[4] = (c)->q[5].u8[4] | (c)->q[0].u8[4];
    _t.u8[5] = (c)->q[5].u8[5] | (c)->q[0].u8[5];
    _t.u8[6] = (c)->q[5].u8[6] | (c)->q[0].u8[6];
    _t.u8[7] = (c)->q[5].u8[7] | (c)->q[0].u8[7];
    _t.u8[8] = (c)->q[5].u8[8] | (c)->q[0].u8[8];
    _t.u8[9] = (c)->q[5].u8[9] | (c)->q[0].u8[9];
    _t.u8[10] = (c)->q[5].u8[10] | (c)->q[0].u8[10];
    _t.u8[11] = (c)->q[5].u8[11] | (c)->q[0].u8[11];
    _t.u8[12] = (c)->q[5].u8[12] | (c)->q[0].u8[12];
    _t.u8[13] = (c)->q[5].u8[13] | (c)->q[0].u8[13];
    _t.u8[14] = (c)->q[5].u8[14] | (c)->q[0].u8[14];
    _t.u8[15] = (c)->q[5].u8[15] | (c)->q[0].u8[15];
    (c)->q[0] = _t; }
  /* c2bb4: add v2.2d, v2.2d, v7.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[2].u64[0] + (c)->q[7].u64[0];
    _t.u64[1] = (c)->q[2].u64[1] + (c)->q[7].u64[1];
    (c)->q[2] = _t; }
  /* c2bb8: add v3.2d, v3.2d, v7.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[3].u64[0] + (c)->q[7].u64[0];
    _t.u64[1] = (c)->q[3].u64[1] + (c)->q[7].u64[1];
    (c)->q[3] = _t; }
  /* c2bbc: b.ne #0xc2b6c */
  if (ARC_COND(c, 1)) goto L_c2b6c;
  /* c2bc0: orr v0.16b, v0.16b, v1.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[0].u8[0] | (c)->q[1].u8[0];
    _t.u8[1] = (c)->q[0].u8[1] | (c)->q[1].u8[1];
    _t.u8[2] = (c)->q[0].u8[2] | (c)->q[1].u8[2];
    _t.u8[3] = (c)->q[0].u8[3] | (c)->q[1].u8[3];
    _t.u8[4] = (c)->q[0].u8[4] | (c)->q[1].u8[4];
    _t.u8[5] = (c)->q[0].u8[5] | (c)->q[1].u8[5];
    _t.u8[6] = (c)->q[0].u8[6] | (c)->q[1].u8[6];
    _t.u8[7] = (c)->q[0].u8[7] | (c)->q[1].u8[7];
    _t.u8[8] = (c)->q[0].u8[8] | (c)->q[1].u8[8];
    _t.u8[9] = (c)->q[0].u8[9] | (c)->q[1].u8[9];
    _t.u8[10] = (c)->q[0].u8[10] | (c)->q[1].u8[10];
    _t.u8[11] = (c)->q[0].u8[11] | (c)->q[1].u8[11];
    _t.u8[12] = (c)->q[0].u8[12] | (c)->q[1].u8[12];
    _t.u8[13] = (c)->q[0].u8[13] | (c)->q[1].u8[13];
    _t.u8[14] = (c)->q[0].u8[14] | (c)->q[1].u8[14];
    _t.u8[15] = (c)->q[0].u8[15] | (c)->q[1].u8[15];
    (c)->q[0] = _t; }
  /* c2bc4: cmp x15, x16 */
  (void)arc_sub64(c, ARC_X_R(c, 15), ARC_X_R(c, 16));
  /* c2bc8: ext v1.16b, v0.16b, v0.16b, #8 */
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
    (c)->q[1] = _t; }
  /* c2bcc: orr v0.8b, v0.8b, v1.8b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[0].u8[0] | (c)->q[1].u8[0];
    _t.u8[1] = (c)->q[0].u8[1] | (c)->q[1].u8[1];
    _t.u8[2] = (c)->q[0].u8[2] | (c)->q[1].u8[2];
    _t.u8[3] = (c)->q[0].u8[3] | (c)->q[1].u8[3];
    _t.u8[4] = (c)->q[0].u8[4] | (c)->q[1].u8[4];
    _t.u8[5] = (c)->q[0].u8[5] | (c)->q[1].u8[5];
    _t.u8[6] = (c)->q[0].u8[6] | (c)->q[1].u8[6];
    _t.u8[7] = (c)->q[0].u8[7] | (c)->q[1].u8[7];
    (c)->q[0] = _t; }
  /* c2bd0: fmov x13, d0 */
  ARC_X_W(c, 13, ARC_DU_R(c, 0));
  /* c2bd4: b.ne #0xc2be0 */
  if (ARC_COND(c, 1)) goto L_c2be0;
  /* c2bd8: b #0xc2c00 */
  goto L_c2c00;
L_c2bdc:;
  /* c2bdc: sub x0, x12, x16 */
  ARC_X_W(c, 0, (ARC_X_R(c, 12) - ARC_X_R(c, 16)));
L_c2be0:;
  /* c2be0: ldrsb w1, [x0], #0xffffffffffffffff */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(-1));
    ARC_W_W(c, 1, ((int32_t)(int8_t)arc_ld8(_a)));
  }
  /* c2be4: cmp w1, w8, sxtb */
  (void)arc_sub32(c, ARC_W_R(c, 1), ((uint64_t)(int64_t)(int8_t)(ARC_W_R(c, 8))));
  /* c2be8: cset w1, lt */
  ARC_W_W(c, 1, (ARC_COND(c, 11) ? 1 : 0));
  /* c2bec: lsl x1, x1, x16 */
  ARC_X_W(c, 1, ((uint64_t)(ARC_X_R(c, 1)) << ((ARC_X_R(c, 16)) & 63)));
  /* c2bf0: add x16, x16, #1 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(1)));
  /* c2bf4: cmp x15, x16 */
  (void)arc_sub64(c, ARC_X_R(c, 15), ARC_X_R(c, 16));
  /* c2bf8: orr x13, x1, x13 */
  ARC_X_W(c, 13, (ARC_X_R(c, 1) | ARC_X_R(c, 13)));
  /* c2bfc: b.ne #0xc2be0 */
  if (ARC_COND(c, 1)) goto L_c2be0;
L_c2c00:;
  /* c2c00: cbz x14, #0xc2c44 */
  if ((ARC_X_R(c, 14)) == 0) goto L_c2c44;
  /* c2c04: cbz x13, #0xc2c44 */
  if ((ARC_X_R(c, 13)) == 0) goto L_c2c44;
L_c2c08:;
  /* c2c08: rbit x16, x13 */
  ARC_X_W(c, 16, arc_rbit64(ARC_X_R(c, 13)));
  /* c2c0c: rbit x0, x14 */
  ARC_X_W(c, 0, arc_rbit64(ARC_X_R(c, 14)));
  /* c2c10: sub x1, x13, #1 */
  ARC_X_W(c, 1, (ARC_X_R(c, 13) - UINT64_C(1)));
  /* c2c14: sub x4, x14, #1 */
  ARC_X_W(c, 4, (ARC_X_R(c, 14) - UINT64_C(1)));
  /* c2c18: and x13, x1, x13 */
  ARC_X_W(c, 13, (ARC_X_R(c, 1) & ARC_X_R(c, 13)));
  /* c2c1c: clz x16, x16 */
  ARC_X_W(c, 16, arc_clz64(ARC_X_R(c, 16)));
  /* c2c20: clz x0, x0 */
  ARC_X_W(c, 0, arc_clz64(ARC_X_R(c, 0)));
  /* c2c24: and x14, x4, x14 */
  ARC_X_W(c, 14, (ARC_X_R(c, 4) & ARC_X_R(c, 14)));
  /* c2c28: sub x16, x12, x16 */
  ARC_X_W(c, 16, (ARC_X_R(c, 12) - ARC_X_R(c, 16)));
  /* c2c2c: ldrb w5, [x11, x0] */
  ARC_W_W(c, 5, arc_ld8((ARC_X_R(c, 11) + ARC_X_R(c, 0))));
  /* c2c30: ldrb w3, [x16] */
  ARC_W_W(c, 3, arc_ld8(ARC_X_R(c, 16)));
  /* c2c34: strb w3, [x11, x0] */
  arc_st8((ARC_X_R(c, 11) + ARC_X_R(c, 0)), ARC_W_R(c, 3));
  /* c2c38: strb w5, [x16] */
  arc_st8(ARC_X_R(c, 16), ARC_W_R(c, 5));
  /* c2c3c: cbz x13, #0xc2c44 */
  if ((ARC_X_R(c, 13)) == 0) goto L_c2c44;
  /* c2c40: cbnz x14, #0xc2c08 */
  if ((ARC_X_R(c, 14)) != 0) goto L_c2c08;
L_c2c44:;
  /* c2c44: cmp x14, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 14), UINT64_C(0));
  /* c2c48: csel x16, x17, xzr, eq */
  ARC_X_W(c, 16, (ARC_COND(c, 0) ? (ARC_X_R(c, 17)) : ARC_X_R(c, 31)));
  /* c2c4c: cmp x13, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 13), UINT64_C(0));
  /* c2c50: csel x15, x15, xzr, eq */
  ARC_X_W(c, 15, (ARC_COND(c, 0) ? (ARC_X_R(c, 15)) : ARC_X_R(c, 31)));
  /* c2c54: add x23, x11, x16 */
  ARC_X_W(c, 23, (ARC_X_R(c, 11) + ARC_X_R(c, 16)));
  /* c2c58: sub x11, x12, x15 */
  ARC_X_W(c, 11, (ARC_X_R(c, 12) - ARC_X_R(c, 15)));
  /* c2c5c: cbnz x14, #0xc2c78 */
  if ((ARC_X_R(c, 14)) != 0) goto L_c2c78;
  /* c2c60: cbnz x13, #0xc2cb0 */
  if ((ARC_X_R(c, 13)) != 0) goto L_c2cb0;
  /* c2c64: b #0xc2cdc */
  goto L_c2cdc;
L_c2c68:;
  /* c2c68: lsl x12, x26, x12 */
  ARC_X_W(c, 12, ((uint64_t)(ARC_X_R(c, 26)) << ((ARC_X_R(c, 12)) & 63)));
  /* c2c6c: sub x11, x11, #1 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) - UINT64_C(1)));
  /* c2c70: bic x14, x14, x12 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) & (~ARC_X_R(c, 12))));
  /* c2c74: cbz x14, #0xc2cd8 */
  if ((ARC_X_R(c, 14)) == 0) goto L_c2cd8;
L_c2c78:;
  /* c2c78: clz x12, x14 */
  ARC_X_W(c, 12, arc_clz64(ARC_X_R(c, 14)));
  /* c2c7c: eor x12, x12, #0x3f */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) ^ UINT64_C(63)));
  /* c2c80: add x13, x23, x12 */
  ARC_X_W(c, 13, (ARC_X_R(c, 23) + ARC_X_R(c, 12)));
  /* c2c84: cmp x11, x13 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 13));
  /* c2c88: b.eq #0xc2c68 */
  if (ARC_COND(c, 0)) goto L_c2c68;
  /* c2c8c: ldrb w15, [x11] */
  ARC_W_W(c, 15, arc_ld8(ARC_X_R(c, 11)));
  /* c2c90: ldrb w16, [x13] */
  ARC_W_W(c, 16, arc_ld8(ARC_X_R(c, 13)));
  /* c2c94: strb w15, [x13] */
  arc_st8(ARC_X_R(c, 13), ARC_W_R(c, 15));
  /* c2c98: strb w16, [x11] */
  arc_st8(ARC_X_R(c, 11), ARC_W_R(c, 16));
  /* c2c9c: b #0xc2c68 */
  goto L_c2c68;
L_c2ca0:;
  /* c2ca0: lsl x12, x26, x12 */
  ARC_X_W(c, 12, ((uint64_t)(ARC_X_R(c, 26)) << ((ARC_X_R(c, 12)) & 63)));
  /* c2ca4: add x23, x23, #1 */
  ARC_X_W(c, 23, (ARC_X_R(c, 23) + UINT64_C(1)));
  /* c2ca8: bic x13, x13, x12 */
  ARC_X_W(c, 13, (ARC_X_R(c, 13) & (~ARC_X_R(c, 12))));
  /* c2cac: cbz x13, #0xc2cdc */
  if ((ARC_X_R(c, 13)) == 0) goto L_c2cdc;
L_c2cb0:;
  /* c2cb0: clz x12, x13 */
  ARC_X_W(c, 12, arc_clz64(ARC_X_R(c, 13)));
  /* c2cb4: eor x12, x12, #0x3f */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) ^ UINT64_C(63)));
  /* c2cb8: sub x14, x11, x12 */
  ARC_X_W(c, 14, (ARC_X_R(c, 11) - ARC_X_R(c, 12)));
  /* c2cbc: cmp x23, x14 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 14));
  /* c2cc0: b.eq #0xc2ca0 */
  if (ARC_COND(c, 0)) goto L_c2ca0;
  /* c2cc4: ldrb w15, [x23] */
  ARC_W_W(c, 15, arc_ld8(ARC_X_R(c, 23)));
  /* c2cc8: ldrb w16, [x14] */
  ARC_W_W(c, 16, arc_ld8(ARC_X_R(c, 14)));
  /* c2ccc: strb w15, [x14] */
  arc_st8(ARC_X_R(c, 14), ARC_W_R(c, 15));
  /* c2cd0: strb w16, [x23] */
  arc_st8(ARC_X_R(c, 23), ARC_W_R(c, 16));
  /* c2cd4: b #0xc2ca0 */
  goto L_c2ca0;
L_c2cd8:;
  /* c2cd8: add x23, x11, #1 */
  ARC_X_W(c, 23, (ARC_X_R(c, 11) + UINT64_C(1)));
L_c2cdc:;
  /* c2cdc: sub x24, x23, #1 */
  ARC_X_W(c, 24, (ARC_X_R(c, 23) - UINT64_C(1)));
  /* c2ce0: cmp x19, x24 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 24));
  /* c2ce4: b.eq #0xc2cf0 */
  if (ARC_COND(c, 0)) goto L_c2cf0;
  /* c2ce8: ldrb w11, [x24] */
  ARC_W_W(c, 11, arc_ld8(ARC_X_R(c, 24)));
  /* c2cec: strb w11, [x19] */
  arc_st8(ARC_X_R(c, 19), ARC_W_R(c, 11));
L_c2cf0:;
  /* c2cf0: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* c2cf4: strb w8, [x24] */
  arc_st8(ARC_X_R(c, 24), ARC_W_R(c, 8));
  /* c2cf8: b.lo #0xc2d54 */
  if (ARC_COND(c, 3)) goto L_c2d54;
  /* c2cfc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* c2d00: mov x1, x24 */
  ARC_X_W(c, 1, ARC_X_R(c, 24));
  /* c2d04: mov x21, x27 */
  ARC_X_W(c, 21, ARC_X_R(c, 27));
  /* c2d08: mov x28, x6 */
  ARC_X_W(c, 28, ARC_X_R(c, 6));
  /* c2d0c: mov x27, x2 */
  ARC_X_W(c, 27, ARC_X_R(c, 2));
  /* c2d10: bl #0xd030c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(797972));
  fn1_d030c(c);
  /* c2d14: mov w25, w0 */
  ARC_W_W(c, 25, ARC_W_R(c, 0));
  /* c2d18: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* c2d1c: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* c2d20: bl #0xd030c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(797988));
  fn1_d030c(c);
  /* c2d24: tbnz w0, #0, #0xc2e50 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) != 0) goto L_c2e50;
  /* c2d28: ldp q12, q11, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_q_w(c, 12, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 11, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c2d2c: mov x2, x27 */
  ARC_X_W(c, 2, ARC_X_R(c, 27));
  /* c2d30: ldp q14, q13, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_q_w(c, 14, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 13, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c2d34: mov x6, x28 */
  ARC_X_W(c, 6, ARC_X_R(c, 28));
  /* c2d38: ldr q15, [sp] */
  arc_q_w(c, 15, arc_ld64((c)->sp), arc_ld64((c)->sp + 8));
  /* c2d3c: mov x4, #-0x40 */
  ARC_X_W(c, 4, UINT64_C(18446744073709551552));
  /* c2d40: mov x27, x21 */
  ARC_X_W(c, 27, ARC_X_R(c, 21));
  /* c2d44: mov w5, #1 */
  ARC_W_W(c, 5, UINT64_C(1));
  /* c2d48: mov w21, #4 */
  ARC_W_W(c, 21, UINT64_C(4));
  /* c2d4c: mov w28, #0x10 */
  ARC_W_W(c, 28, UINT64_C(16));
  /* c2d50: tbnz w25, #0, #0xc1e8c */
  if (((ARC_W_R(c, 25)) >> 0 & 1) != 0) goto L_c1e8c;
L_c2d54:;
  /* c2d54: ldr w8, [sp, #0x5c] */
  ARC_W_W(c, 8, arc_ld32(((c)->sp + INT64_C(92))));
  /* c2d58: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* c2d5c: mov x1, x24 */
  ARC_X_W(c, 1, ARC_X_R(c, 24));
  /* c2d60: mov x19, x2 */
  ARC_X_W(c, 19, ARC_X_R(c, 2));
  /* c2d64: mov x24, x6 */
  ARC_X_W(c, 24, ARC_X_R(c, 6));
  /* c2d68: and w3, w8, #1 */
  ARC_W_W(c, 3, (ARC_W_R(c, 8) & UINT64_C(1)));
  /* c2d6c: bl #0xc1cd4 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(798064));
  fn1_c1cd4(c);
  /* c2d70: ldp q15, q14, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_q_w(c, 15, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 14, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c2d74: mov w28, #0x10 */
  ARC_W_W(c, 28, UINT64_C(16));
  /* c2d78: ldp q13, q12, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_q_w(c, 13, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 12, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c2d7c: mov w21, #4 */
  ARC_W_W(c, 21, UINT64_C(4));
  /* c2d80: ldr q11, [sp, #0x40] */
  arc_q_w(c, 11, arc_ld64(((c)->sp + INT64_C(64))), arc_ld64(((c)->sp + INT64_C(64)) + 8));
  /* c2d84: mov w5, #1 */
  ARC_W_W(c, 5, UINT64_C(1));
  /* c2d88: mov x4, #-0x40 */
  ARC_X_W(c, 4, UINT64_C(18446744073709551552));
  /* c2d8c: mov x6, x24 */
  ARC_X_W(c, 6, ARC_X_R(c, 24));
  /* c2d90: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* c2d94: str wzr, [sp, #0x5c] */
  arc_st32(((c)->sp + INT64_C(92)), ARC_W_R(c, 31));
  /* c2d98: b #0xc1e8c */
  goto L_c1e8c;
L_c2d9c:;
  /* c2d9c: ldursb w9, [x20, #-1] */
  ARC_W_W(c, 9, ((int32_t)(int8_t)arc_ld8((ARC_X_R(c, 20) + INT64_C(-1)))));
  /* c2da0: cmp w9, w8, sxtb */
  (void)arc_sub32(c, ARC_W_R(c, 9), ((uint64_t)(int64_t)(int8_t)(ARC_W_R(c, 8))));
  /* c2da4: b.le #0xc2dbc */
  if (ARC_COND(c, 13)) goto L_c2dbc;
  /* c2da8: mov x23, x19 */
  ARC_X_W(c, 23, ARC_X_R(c, 19));
L_c2dac:;
  /* c2dac: ldrsb w9, [x23, #1]! */
  { const uint64_t _a = (ARC_X_R(c, 23) + INT64_C(1));
    ARC_X_W(c, 23, ARC_X_R(c, 23) + INT64_C(1));
    ARC_W_W(c, 9, ((int32_t)(int8_t)arc_ld8(_a)));
  }
  /* c2db0: cmp w9, w8, sxtb */
  (void)arc_sub32(c, ARC_W_R(c, 9), ((uint64_t)(int64_t)(int8_t)(ARC_W_R(c, 8))));
  /* c2db4: b.le #0xc2dac */
  if (ARC_COND(c, 13)) goto L_c2dac;
  /* c2db8: b #0xc2ddc */
  goto L_c2ddc;
L_c2dbc:;
  /* c2dbc: add x9, x19, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + UINT64_C(1)));
L_c2dc0:;
  /* c2dc0: mov x23, x9 */
  ARC_X_W(c, 23, ARC_X_R(c, 9));
  /* c2dc4: cmp x9, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 20));
  /* c2dc8: b.hs #0xc2ddc */
  if (ARC_COND(c, 2)) goto L_c2ddc;
  /* c2dcc: mov x9, x23 */
  ARC_X_W(c, 9, ARC_X_R(c, 23));
  /* c2dd0: ldrsb w10, [x9], #1 */
  { const uint64_t _a = ARC_X_R(c, 9);
    ARC_X_W(c, 9, ARC_X_R(c, 9) + INT64_C(1));
    ARC_W_W(c, 10, ((int32_t)(int8_t)arc_ld8(_a)));
  }
  /* c2dd4: cmp w10, w8, sxtb */
  (void)arc_sub32(c, ARC_W_R(c, 10), ((uint64_t)(int64_t)(int8_t)(ARC_W_R(c, 8))));
  /* c2dd8: b.le #0xc2dc0 */
  if (ARC_COND(c, 13)) goto L_c2dc0;
L_c2ddc:;
  /* c2ddc: cmp x23, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 20));
  /* c2de0: mov x9, x20 */
  ARC_X_W(c, 9, ARC_X_R(c, 20));
  /* c2de4: b.hs #0xc2df8 */
  if (ARC_COND(c, 2)) goto L_c2df8;
  /* c2de8: mov x9, x20 */
  ARC_X_W(c, 9, ARC_X_R(c, 20));
L_c2dec:;
  /* c2dec: ldrsb w10, [x9, #-1]! */
  { const uint64_t _a = (ARC_X_R(c, 9) + INT64_C(-1));
    ARC_X_W(c, 9, ARC_X_R(c, 9) + INT64_C(-1));
    ARC_W_W(c, 10, ((int32_t)(int8_t)arc_ld8(_a)));
  }
  /* c2df0: cmp w10, w8, sxtb */
  (void)arc_sub32(c, ARC_W_R(c, 10), ((uint64_t)(int64_t)(int8_t)(ARC_W_R(c, 8))));
  /* c2df4: b.gt #0xc2dec */
  if (ARC_COND(c, 12)) goto L_c2dec;
L_c2df8:;
  /* c2df8: cmp x23, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 9));
  /* c2dfc: b.hs #0xc2e30 */
  if (ARC_COND(c, 2)) goto L_c2e30;
  /* c2e00: ldrb w10, [x23] */
  ARC_W_W(c, 10, arc_ld8(ARC_X_R(c, 23)));
  /* c2e04: ldrb w11, [x9] */
  ARC_W_W(c, 11, arc_ld8(ARC_X_R(c, 9)));
L_c2e08:;
  /* c2e08: strb w11, [x23] */
  arc_st8(ARC_X_R(c, 23), ARC_W_R(c, 11));
  /* c2e0c: strb w10, [x9] */
  arc_st8(ARC_X_R(c, 9), ARC_W_R(c, 10));
L_c2e10:;
  /* c2e10: ldrsb w10, [x23, #1]! */
  { const uint64_t _a = (ARC_X_R(c, 23) + INT64_C(1));
    ARC_X_W(c, 23, ARC_X_R(c, 23) + INT64_C(1));
    ARC_W_W(c, 10, ((int32_t)(int8_t)arc_ld8(_a)));
  }
  /* c2e14: cmp w10, w8, sxtb */
  (void)arc_sub32(c, ARC_W_R(c, 10), ((uint64_t)(int64_t)(int8_t)(ARC_W_R(c, 8))));
  /* c2e18: b.le #0xc2e10 */
  if (ARC_COND(c, 13)) goto L_c2e10;
L_c2e1c:;
  /* c2e1c: ldrsb w11, [x9, #-1]! */
  { const uint64_t _a = (ARC_X_R(c, 9) + INT64_C(-1));
    ARC_X_W(c, 9, ARC_X_R(c, 9) + INT64_C(-1));
    ARC_W_W(c, 11, ((int32_t)(int8_t)arc_ld8(_a)));
  }
  /* c2e20: cmp w11, w8, sxtb */
  (void)arc_sub32(c, ARC_W_R(c, 11), ((uint64_t)(int64_t)(int8_t)(ARC_W_R(c, 8))));
  /* c2e24: b.gt #0xc2e1c */
  if (ARC_COND(c, 12)) goto L_c2e1c;
  /* c2e28: cmp x23, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 9));
  /* c2e2c: b.lo #0xc2e08 */
  if (ARC_COND(c, 3)) goto L_c2e08;
L_c2e30:;
  /* c2e30: sub x9, x23, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 23) - UINT64_C(1)));
  /* c2e34: cmp x19, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 9));
  /* c2e38: b.eq #0xc2e44 */
  if (ARC_COND(c, 0)) goto L_c2e44;
  /* c2e3c: ldrb w10, [x9] */
  ARC_W_W(c, 10, arc_ld8(ARC_X_R(c, 9)));
  /* c2e40: strb w10, [x19] */
  arc_st8(ARC_X_R(c, 19), ARC_W_R(c, 10));
L_c2e44:;
  /* c2e44: str wzr, [sp, #0x5c] */
  arc_st32(((c)->sp + INT64_C(92)), ARC_W_R(c, 31));
  /* c2e48: strb w8, [x9] */
  arc_st8(ARC_X_R(c, 9), ARC_W_R(c, 8));
  /* c2e4c: b #0xc1e8c */
  goto L_c1e8c;
L_c2e50:;
  /* c2e50: ldp q12, q11, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_q_w(c, 12, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 11, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c2e54: mov x20, x24 */
  ARC_X_W(c, 20, ARC_X_R(c, 24));
  /* c2e58: ldp q14, q13, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_q_w(c, 14, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 13, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c2e5c: mov x2, x27 */
  ARC_X_W(c, 2, ARC_X_R(c, 27));
  /* c2e60: ldr q15, [sp] */
  arc_q_w(c, 15, arc_ld64((c)->sp), arc_ld64((c)->sp + 8));
  /* c2e64: mov x6, x28 */
  ARC_X_W(c, 6, ARC_X_R(c, 28));
  /* c2e68: mov x4, #-0x40 */
  ARC_X_W(c, 4, UINT64_C(18446744073709551552));
  /* c2e6c: mov x27, x21 */
  ARC_X_W(c, 27, ARC_X_R(c, 21));
  /* c2e70: mov w5, #1 */
  ARC_W_W(c, 5, UINT64_C(1));
  /* c2e74: mov w21, #4 */
  ARC_W_W(c, 21, UINT64_C(4));
  /* c2e78: mov w28, #0x10 */
  ARC_W_W(c, 28, UINT64_C(16));
  /* c2e7c: tbz w25, #0, #0xc1e88 */
  if (((ARC_W_R(c, 25)) >> 0 & 1) == 0) goto L_c1e88;
  /* c2e80: b #0xc3040 */
  goto L_c3040;
L_c2e84:;
  /* c2e84: ldrsb w8, [x19] */
  ARC_W_W(c, 8, ((int32_t)(int8_t)arc_ld8(ARC_X_R(c, 19))));
  /* c2e88: ldrsb w9, [x19, #1] */
  ARC_W_W(c, 9, ((int32_t)(int8_t)arc_ld8((ARC_X_R(c, 19) + INT64_C(1)))));
  /* c2e8c: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* c2e90: csel w10, w8, w9, gt */
  ARC_W_W(c, 10, (ARC_COND(c, 12) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* c2e94: csel w8, w8, w9, lt */
  ARC_W_W(c, 8, (ARC_COND(c, 11) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* c2e98: strb w10, [x19, #1] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(1)), ARC_W_R(c, 10));
  /* c2e9c: strb w8, [x19] */
  arc_st8(ARC_X_R(c, 19), ARC_W_R(c, 8));
  /* c2ea0: ldrsb w8, [x19, #3] */
  ARC_W_W(c, 8, ((int32_t)(int8_t)arc_ld8((ARC_X_R(c, 19) + INT64_C(3)))));
  /* c2ea4: ldursb w9, [x20, #-1] */
  ARC_W_W(c, 9, ((int32_t)(int8_t)arc_ld8((ARC_X_R(c, 20) + INT64_C(-1)))));
  /* c2ea8: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* c2eac: csel w10, w8, w9, gt */
  ARC_W_W(c, 10, (ARC_COND(c, 12) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* c2eb0: csel w8, w8, w9, lt */
  ARC_W_W(c, 8, (ARC_COND(c, 11) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* c2eb4: sturb w10, [x20, #-1] */
  arc_st8((ARC_X_R(c, 20) + INT64_C(-1)), ARC_W_R(c, 10));
  /* c2eb8: strb w8, [x19, #3] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(3)), ARC_W_R(c, 8));
  /* c2ebc: ldrsb w9, [x19, #2] */
  ARC_W_W(c, 9, ((int32_t)(int8_t)arc_ld8((ARC_X_R(c, 19) + INT64_C(2)))));
  /* c2ec0: ldursb w8, [x20, #-1] */
  ARC_W_W(c, 8, ((int32_t)(int8_t)arc_ld8((ARC_X_R(c, 20) + INT64_C(-1)))));
  /* c2ec4: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* c2ec8: csel w10, w8, w9, gt */
  ARC_W_W(c, 10, (ARC_COND(c, 12) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* c2ecc: csel w8, w8, w9, lt */
  ARC_W_W(c, 8, (ARC_COND(c, 11) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* c2ed0: sturb w10, [x20, #-1] */
  arc_st8((ARC_X_R(c, 20) + INT64_C(-1)), ARC_W_R(c, 10));
  /* c2ed4: ldrsb w10, [x19, #3] */
  ARC_W_W(c, 10, ((int32_t)(int8_t)arc_ld8((ARC_X_R(c, 19) + INT64_C(3)))));
  /* c2ed8: ldrb w9, [x19, #2] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 19) + INT64_C(2))));
  /* c2edc: cmp w8, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 10));
  /* c2ee0: csel w9, w9, w10, lt */
  ARC_W_W(c, 9, (ARC_COND(c, 11) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 10)));
  /* c2ee4: csel w8, w8, w10, gt */
  ARC_W_W(c, 8, (ARC_COND(c, 12) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 10)));
  /* c2ee8: strb w9, [x19, #2] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(2)), ARC_W_R(c, 9));
  /* c2eec: strb w8, [x19, #3] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(3)), ARC_W_R(c, 8));
  /* c2ef0: ldrsb w8, [x19, #1] */
  ARC_W_W(c, 8, ((int32_t)(int8_t)arc_ld8((ARC_X_R(c, 19) + INT64_C(1)))));
  /* c2ef4: ldursb w9, [x20, #-1] */
  ARC_W_W(c, 9, ((int32_t)(int8_t)arc_ld8((ARC_X_R(c, 20) + INT64_C(-1)))));
  /* c2ef8: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* c2efc: csel w10, w8, w9, gt */
  ARC_W_W(c, 10, (ARC_COND(c, 12) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* c2f00: csel w8, w8, w9, lt */
  ARC_W_W(c, 8, (ARC_COND(c, 11) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* c2f04: sturb w10, [x20, #-1] */
  arc_st8((ARC_X_R(c, 20) + INT64_C(-1)), ARC_W_R(c, 10));
  /* c2f08: ldrsb w10, [x19, #3] */
  ARC_W_W(c, 10, ((int32_t)(int8_t)arc_ld8((ARC_X_R(c, 19) + INT64_C(3)))));
  /* c2f0c: ldrsb w11, [x19] */
  ARC_W_W(c, 11, ((int32_t)(int8_t)arc_ld8(ARC_X_R(c, 19))));
  /* c2f10: ldrsb w9, [x19, #2] */
  ARC_W_W(c, 9, ((int32_t)(int8_t)arc_ld8((ARC_X_R(c, 19) + INT64_C(2)))));
  /* c2f14: cmp w10, w11 */
  (void)arc_sub32(c, ARC_W_R(c, 10), ARC_W_R(c, 11));
  /* c2f18: csel w12, w10, w11, lt */
  ARC_W_W(c, 12, (ARC_COND(c, 11) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 11)));
  /* c2f1c: csel w10, w10, w11, gt */
  ARC_W_W(c, 10, (ARC_COND(c, 12) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 11)));
  /* c2f20: cmp w12, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 12), ARC_W_R(c, 9));
  /* c2f24: csel w11, w11, w9, lt */
  ARC_W_W(c, 11, (ARC_COND(c, 11) ? (ARC_W_R(c, 11)) : ARC_W_R(c, 9)));
  /* c2f28: csel w9, w12, w9, gt */
  ARC_W_W(c, 9, (ARC_COND(c, 12) ? (ARC_W_R(c, 12)) : ARC_W_R(c, 9)));
  /* c2f2c: cmp w10, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 10), ARC_W_R(c, 8));
  /* c2f30: csel w12, w10, w8, lt */
  ARC_W_W(c, 12, (ARC_COND(c, 11) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 8)));
  /* c2f34: csel w10, w10, w8, gt */
  ARC_W_W(c, 10, (ARC_COND(c, 12) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 8)));
  /* c2f38: strb w11, [x19] */
  arc_st8(ARC_X_R(c, 19), ARC_W_R(c, 11));
  /* c2f3c: cmp w12, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 12), ARC_W_R(c, 9));
  /* c2f40: strb w10, [x19, #3] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(3)), ARC_W_R(c, 10));
  /* c2f44: csel w8, w8, w9, lt */
  ARC_W_W(c, 8, (ARC_COND(c, 11) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* c2f48: csel w9, w12, w9, gt */
  ARC_W_W(c, 9, (ARC_COND(c, 12) ? (ARC_W_R(c, 12)) : ARC_W_R(c, 9)));
  /* c2f4c: strb w8, [x19, #1] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(1)), ARC_W_R(c, 8));
  /* c2f50: strb w9, [x19, #2] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(2)), ARC_W_R(c, 9));
  /* c2f54: b #0xc3040 */
  goto L_c3040;
L_c2f58:;
  /* c2f58: ldursb w8, [x20, #-1] */
  ARC_W_W(c, 8, ((int32_t)(int8_t)arc_ld8((ARC_X_R(c, 20) + INT64_C(-1)))));
  /* c2f5c: ldrsb w9, [x19] */
  ARC_W_W(c, 9, ((int32_t)(int8_t)arc_ld8(ARC_X_R(c, 19))));
  /* c2f60: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* c2f64: b.ge #0xc3040 */
  if (ARC_COND(c, 10)) goto L_c3040;
  /* c2f68: strb w8, [x19] */
  arc_st8(ARC_X_R(c, 19), ARC_W_R(c, 8));
  /* c2f6c: sturb w9, [x20, #-1] */
  arc_st8((ARC_X_R(c, 20) + INT64_C(-1)), ARC_W_R(c, 9));
  /* c2f70: b #0xc3040 */
  goto L_c3040;
L_c2f74:;
  /* c2f74: ldrsb w8, [x19, #1] */
  ARC_W_W(c, 8, ((int32_t)(int8_t)arc_ld8((ARC_X_R(c, 19) + INT64_C(1)))));
  /* c2f78: ldursb w9, [x20, #-1] */
  ARC_W_W(c, 9, ((int32_t)(int8_t)arc_ld8((ARC_X_R(c, 20) + INT64_C(-1)))));
  /* c2f7c: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* c2f80: csel w10, w8, w9, gt */
  ARC_W_W(c, 10, (ARC_COND(c, 12) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* c2f84: csel w8, w8, w9, lt */
  ARC_W_W(c, 8, (ARC_COND(c, 11) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* c2f88: sturb w10, [x20, #-1] */
  arc_st8((ARC_X_R(c, 20) + INT64_C(-1)), ARC_W_R(c, 10));
  /* c2f8c: strb w8, [x19, #1] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(1)), ARC_W_R(c, 8));
  /* c2f90: ldrsb w9, [x19] */
  ARC_W_W(c, 9, ((int32_t)(int8_t)arc_ld8(ARC_X_R(c, 19))));
  /* c2f94: ldursb w8, [x20, #-1] */
  ARC_W_W(c, 8, ((int32_t)(int8_t)arc_ld8((ARC_X_R(c, 20) + INT64_C(-1)))));
  /* c2f98: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* c2f9c: csel w10, w8, w9, gt */
  ARC_W_W(c, 10, (ARC_COND(c, 12) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* c2fa0: csel w8, w8, w9, lt */
  ARC_W_W(c, 8, (ARC_COND(c, 11) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* c2fa4: sturb w10, [x20, #-1] */
  arc_st8((ARC_X_R(c, 20) + INT64_C(-1)), ARC_W_R(c, 10));
  /* c2fa8: ldrsb w10, [x19, #1] */
  ARC_W_W(c, 10, ((int32_t)(int8_t)arc_ld8((ARC_X_R(c, 19) + INT64_C(1)))));
  /* c2fac: ldrb w9, [x19] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 19)));
  /* c2fb0: cmp w8, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 10));
  /* c2fb4: csel w9, w9, w10, lt */
  ARC_W_W(c, 9, (ARC_COND(c, 11) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 10)));
  /* c2fb8: csel w8, w8, w10, gt */
  ARC_W_W(c, 8, (ARC_COND(c, 12) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 10)));
  /* c2fbc: strb w9, [x19] */
  arc_st8(ARC_X_R(c, 19), ARC_W_R(c, 9));
  /* c2fc0: b #0xc303c */
  goto L_c303c;
L_c2fc4:;
  /* c2fc4: ldrsb w8, [x19] */
  ARC_W_W(c, 8, ((int32_t)(int8_t)arc_ld8(ARC_X_R(c, 19))));
  /* c2fc8: ldrsb w9, [x19, #2] */
  ARC_W_W(c, 9, ((int32_t)(int8_t)arc_ld8((ARC_X_R(c, 19) + INT64_C(2)))));
  /* c2fcc: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* c2fd0: csel w10, w8, w9, gt */
  ARC_W_W(c, 10, (ARC_COND(c, 12) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* c2fd4: csel w8, w8, w9, lt */
  ARC_W_W(c, 8, (ARC_COND(c, 11) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* c2fd8: strb w10, [x19, #2] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(2)), ARC_W_R(c, 10));
  /* c2fdc: strb w8, [x19] */
  arc_st8(ARC_X_R(c, 19), ARC_W_R(c, 8));
  /* c2fe0: ldrsb w8, [x19, #1] */
  ARC_W_W(c, 8, ((int32_t)(int8_t)arc_ld8((ARC_X_R(c, 19) + INT64_C(1)))));
  /* c2fe4: ldursb w9, [x20, #-1] */
  ARC_W_W(c, 9, ((int32_t)(int8_t)arc_ld8((ARC_X_R(c, 20) + INT64_C(-1)))));
  /* c2fe8: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* c2fec: csel w10, w8, w9, gt */
  ARC_W_W(c, 10, (ARC_COND(c, 12) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* c2ff0: csel w8, w8, w9, lt */
  ARC_W_W(c, 8, (ARC_COND(c, 11) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* c2ff4: sturb w10, [x20, #-1] */
  arc_st8((ARC_X_R(c, 20) + INT64_C(-1)), ARC_W_R(c, 10));
  /* c2ff8: ldrsb w10, [x19] */
  ARC_W_W(c, 10, ((int32_t)(int8_t)arc_ld8(ARC_X_R(c, 19))));
  /* c2ffc: cmp w10, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 10), ARC_W_R(c, 8));
  /* c3000: csel w9, w10, w8, gt */
  ARC_W_W(c, 9, (ARC_COND(c, 12) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 8)));
  /* c3004: csel w8, w10, w8, lt */
  ARC_W_W(c, 8, (ARC_COND(c, 11) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 8)));
  /* c3008: strb w9, [x19, #1] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(1)), ARC_W_R(c, 9));
  /* c300c: strb w8, [x19] */
  arc_st8(ARC_X_R(c, 19), ARC_W_R(c, 8));
  /* c3010: ldrsb w8, [x19, #2] */
  ARC_W_W(c, 8, ((int32_t)(int8_t)arc_ld8((ARC_X_R(c, 19) + INT64_C(2)))));
  /* c3014: ldursb w9, [x20, #-1] */
  ARC_W_W(c, 9, ((int32_t)(int8_t)arc_ld8((ARC_X_R(c, 20) + INT64_C(-1)))));
  /* c3018: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* c301c: csel w10, w8, w9, gt */
  ARC_W_W(c, 10, (ARC_COND(c, 12) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* c3020: csel w8, w8, w9, lt */
  ARC_W_W(c, 8, (ARC_COND(c, 11) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* c3024: sturb w10, [x20, #-1] */
  arc_st8((ARC_X_R(c, 20) + INT64_C(-1)), ARC_W_R(c, 10));
  /* c3028: ldrsb w10, [x19, #1] */
  ARC_W_W(c, 10, ((int32_t)(int8_t)arc_ld8((ARC_X_R(c, 19) + INT64_C(1)))));
  /* c302c: cmp w10, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 10), ARC_W_R(c, 8));
  /* c3030: csel w9, w10, w8, gt */
  ARC_W_W(c, 9, (ARC_COND(c, 12) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 8)));
  /* c3034: csel w8, w10, w8, lt */
  ARC_W_W(c, 8, (ARC_COND(c, 11) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 8)));
  /* c3038: strb w9, [x19, #2] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(2)), ARC_W_R(c, 9));
L_c303c:;
  /* c303c: strb w8, [x19, #1] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(1)), ARC_W_R(c, 8));
L_c3040:;
  /* c3040: add sp, sp, #0x1f0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(496)));
  /* c3044: ldp x20, x19, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* c3048: ldp x22, x21, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* c304c: ldp x24, x23, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* c3050: ldp x26, x25, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* c3054: ldp x28, x27, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* c3058: ldp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* c305c: ldp d9, d8, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_du_w(c, 9, arc_ld64(_pa));
    arc_du_w(c, 8, arc_ld64((_pa + 8)));
  }
  /* c3060: ldp d11, d10, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_du_w(c, 11, arc_ld64(_pa));
    arc_du_w(c, 10, arc_ld64((_pa + 8)));
  }
  /* c3064: ldp d13, d12, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_du_w(c, 13, arc_ld64(_pa));
    arc_du_w(c, 12, arc_ld64((_pa + 8)));
  }
  /* c3068: ldp d15, d14, [sp], #0xa0 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(160);
    arc_du_w(c, 15, arc_ld64(_pa));
    arc_du_w(c, 14, arc_ld64((_pa + 8)));
  }
  /* c306c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* c3070: ret  */
  return;
L_c3074:;
  /* c3074: cmp x19, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 20));
  /* c3078: add x9, x19, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + UINT64_C(1)));
  /* c307c: ldr w10, [sp, #0x5c] */
  ARC_W_W(c, 10, arc_ld32(((c)->sp + INT64_C(92))));
  /* c3080: ccmp x9, x20, #4, ne */
  if (ARC_COND(c, 1)) { (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 20)); }
  else { (c)->nf = 0; (c)->zf = 1;
          (c)->cf = 0; (c)->vf = 0; }
  /* c3084: cset w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? 1 : 0));
  /* c3088: tbz w10, #0, #0xc32c4 */
  if (((ARC_W_R(c, 10)) >> 0 & 1) == 0) goto L_c32c4;
  /* c308c: tbnz w8, #0, #0xc3040 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_c3040;
  /* c3090: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* c3094: mov x10, x19 */
  ARC_X_W(c, 10, ARC_X_R(c, 19));
  /* c3098: b #0xc30b4 */
  goto L_c30b4;
L_c309c:;
  /* c309c: mov x9, x19 */
  ARC_X_W(c, 9, ARC_X_R(c, 19));
L_c30a0:;
  /* c30a0: strb w11, [x9] */
  arc_st8(ARC_X_R(c, 9), ARC_W_R(c, 11));
L_c30a4:;
  /* c30a4: add x9, x10, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 10) + UINT64_C(1)));
  /* c30a8: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* c30ac: cmp x9, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 20));
  /* c30b0: b.eq #0xc3040 */
  if (ARC_COND(c, 0)) goto L_c3040;
L_c30b4:;
  /* c30b4: ldrsb w11, [x10, #1] */
  ARC_W_W(c, 11, ((int32_t)(int8_t)arc_ld8((ARC_X_R(c, 10) + INT64_C(1)))));
  /* c30b8: ldrsb w12, [x10] */
  ARC_W_W(c, 12, ((int32_t)(int8_t)arc_ld8(ARC_X_R(c, 10))));
  /* c30bc: mov x10, x9 */
  ARC_X_W(c, 10, ARC_X_R(c, 9));
  /* c30c0: cmp w11, w12 */
  (void)arc_sub32(c, ARC_W_R(c, 11), ARC_W_R(c, 12));
  /* c30c4: b.ge #0xc30a4 */
  if (ARC_COND(c, 10)) goto L_c30a4;
  /* c30c8: mov x13, x8 */
  ARC_X_W(c, 13, ARC_X_R(c, 8));
L_c30cc:;
  /* c30cc: subs x9, x13, #1 */
  ARC_X_W(c, 9, arc_sub64(c, ARC_X_R(c, 13), UINT64_C(1)));
  /* c30d0: strb w12, [x19, x13] */
  arc_st8((ARC_X_R(c, 19) + ARC_X_R(c, 13)), ARC_W_R(c, 12));
  /* c30d4: b.eq #0xc309c */
  if (ARC_COND(c, 0)) goto L_c309c;
  /* c30d8: add x12, x19, x13 */
  ARC_X_W(c, 12, (ARC_X_R(c, 19) + ARC_X_R(c, 13)));
  /* c30dc: mov x13, x9 */
  ARC_X_W(c, 13, ARC_X_R(c, 9));
  /* c30e0: ldursb w12, [x12, #-2] */
  ARC_W_W(c, 12, ((int32_t)(int8_t)arc_ld8((ARC_X_R(c, 12) + INT64_C(-2)))));
  /* c30e4: cmp w11, w12 */
  (void)arc_sub32(c, ARC_W_R(c, 11), ARC_W_R(c, 12));
  /* c30e8: b.lt #0xc30cc */
  if (ARC_COND(c, 11)) goto L_c30cc;
  /* c30ec: add x9, x19, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + ARC_X_R(c, 9)));
  /* c30f0: b #0xc30a0 */
  goto L_c30a0;
L_c30f4:;
  /* c30f4: cmp x19, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 20));
  /* c30f8: b.eq #0xc3040 */
  if (ARC_COND(c, 0)) goto L_c3040;
  /* c30fc: lsr x9, x9, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(1)) & 63)));
  /* c3100: mov x10, x9 */
  ARC_X_W(c, 10, ARC_X_R(c, 9));
  /* c3104: b #0xc3118 */
  goto L_c3118;
L_c3108:;
  /* c3108: strb w13, [x14] */
  arc_st8(ARC_X_R(c, 14), ARC_W_R(c, 13));
L_c310c:;
  /* c310c: cmp x10, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 10), UINT64_C(0));
  /* c3110: sub x10, x10, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) - UINT64_C(1)));
  /* c3114: b.le #0xc31e8 */
  if (ARC_COND(c, 13)) goto L_c31e8;
L_c3118:;
  /* c3118: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* c311c: b.lo #0xc310c */
  if (ARC_COND(c, 3)) goto L_c310c;
  /* c3120: lsl x11, x10, #1 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* c3124: mov w12, #1 */
  ARC_W_W(c, 12, UINT64_C(1));
  /* c3128: bfi x12, x10, #1, #0x3e */
  ARC_X_W(c, 12, (((uint64_t)(ARC_X_R(c, 12)) & UINT64_C(9223372036854775809)) | ((((uint64_t)(ARC_X_R(c, 10))) & UINT64_C(4611686018427387903)) << 1)));
  /* c312c: add x13, x11, #2 */
  ARC_X_W(c, 13, (ARC_X_R(c, 11) + UINT64_C(2)));
  /* c3130: cmp x13, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 13), ARC_X_R(c, 8));
  /* c3134: add x11, x19, x12 */
  ARC_X_W(c, 11, (ARC_X_R(c, 19) + ARC_X_R(c, 12)));
  /* c3138: b.ge #0xc315c */
  if (ARC_COND(c, 10)) goto L_c315c;
  /* c313c: mov x14, x11 */
  ARC_X_W(c, 14, ARC_X_R(c, 11));
  /* c3140: ldrsb w15, [x11] */
  ARC_W_W(c, 15, ((int32_t)(int8_t)arc_ld8(ARC_X_R(c, 11))));
  /* c3144: ldrsb w16, [x14, #1]! */
  { const uint64_t _a = (ARC_X_R(c, 14) + INT64_C(1));
    ARC_X_W(c, 14, ARC_X_R(c, 14) + INT64_C(1));
    ARC_W_W(c, 16, ((int32_t)(int8_t)arc_ld8(_a)));
  }
  /* c3148: cmp w15, w16 */
  (void)arc_sub32(c, ARC_W_R(c, 15), ARC_W_R(c, 16));
  /* c314c: csel w15, w15, w16, gt */
  ARC_W_W(c, 15, (ARC_COND(c, 12) ? (ARC_W_R(c, 15)) : ARC_W_R(c, 16)));
  /* c3150: csel x11, x14, x11, lt */
  ARC_X_W(c, 11, (ARC_COND(c, 11) ? (ARC_X_R(c, 14)) : ARC_X_R(c, 11)));
  /* c3154: csel x12, x13, x12, lt */
  ARC_X_W(c, 12, (ARC_COND(c, 11) ? (ARC_X_R(c, 13)) : ARC_X_R(c, 12)));
  /* c3158: b #0xc3160 */
  goto L_c3160;
L_c315c:;
  /* c315c: ldrb w15, [x11] */
  ARC_W_W(c, 15, arc_ld8(ARC_X_R(c, 11)));
L_c3160:;
  /* c3160: add x14, x19, x10 */
  ARC_X_W(c, 14, (ARC_X_R(c, 19) + ARC_X_R(c, 10)));
  /* c3164: ldrsb w13, [x14] */
  ARC_W_W(c, 13, ((int32_t)(int8_t)arc_ld8(ARC_X_R(c, 14))));
  /* c3168: cmp w13, w15, sxtb */
  (void)arc_sub32(c, ARC_W_R(c, 13), ((uint64_t)(int64_t)(int8_t)(ARC_W_R(c, 15))));
  /* c316c: b.le #0xc3198 */
  if (ARC_COND(c, 13)) goto L_c3198;
  /* c3170: b #0xc310c */
  goto L_c310c;
L_c3174:;
  /* c3174: mov x17, x11 */
  ARC_X_W(c, 17, ARC_X_R(c, 11));
  /* c3178: ldrsb w15, [x11] */
  ARC_W_W(c, 15, ((int32_t)(int8_t)arc_ld8(ARC_X_R(c, 11))));
  /* c317c: ldrsb w0, [x17, #1]! */
  { const uint64_t _a = (ARC_X_R(c, 17) + INT64_C(1));
    ARC_X_W(c, 17, ARC_X_R(c, 17) + INT64_C(1));
    ARC_W_W(c, 0, ((int32_t)(int8_t)arc_ld8(_a)));
  }
  /* c3180: cmp w15, w0 */
  (void)arc_sub32(c, ARC_W_R(c, 15), ARC_W_R(c, 0));
  /* c3184: csel w15, w15, w0, gt */
  ARC_W_W(c, 15, (ARC_COND(c, 12) ? (ARC_W_R(c, 15)) : ARC_W_R(c, 0)));
  /* c3188: csel x11, x17, x11, lt */
  ARC_X_W(c, 11, (ARC_COND(c, 11) ? (ARC_X_R(c, 17)) : ARC_X_R(c, 11)));
  /* c318c: csel x12, x12, x16, lt */
  ARC_X_W(c, 12, (ARC_COND(c, 11) ? (ARC_X_R(c, 12)) : ARC_X_R(c, 16)));
  /* c3190: cmp w13, w15, sxtb */
  (void)arc_sub32(c, ARC_W_R(c, 13), ((uint64_t)(int64_t)(int8_t)(ARC_W_R(c, 15))));
  /* c3194: b.gt #0xc3108 */
  if (ARC_COND(c, 12)) goto L_c3108;
L_c3198:;
  /* c3198: cmp x9, x12 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 12));
  /* c319c: strb w15, [x14] */
  arc_st8(ARC_X_R(c, 14), ARC_W_R(c, 15));
  /* c31a0: mov x14, x11 */
  ARC_X_W(c, 14, ARC_X_R(c, 11));
  /* c31a4: b.lt #0xc3108 */
  if (ARC_COND(c, 11)) goto L_c3108;
  /* c31a8: lsl x11, x12, #1 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 12)) << ((UINT64_C(1)) & 63)));
  /* c31ac: mov w16, #1 */
  ARC_W_W(c, 16, UINT64_C(1));
  /* c31b0: bfi x16, x12, #1, #0x3e */
  ARC_X_W(c, 16, (((uint64_t)(ARC_X_R(c, 16)) & UINT64_C(9223372036854775809)) | ((((uint64_t)(ARC_X_R(c, 12))) & UINT64_C(4611686018427387903)) << 1)));
  /* c31b4: add x12, x11, #2 */
  ARC_X_W(c, 12, (ARC_X_R(c, 11) + UINT64_C(2)));
  /* c31b8: cmp x12, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 12), ARC_X_R(c, 8));
  /* c31bc: add x11, x19, x16 */
  ARC_X_W(c, 11, (ARC_X_R(c, 19) + ARC_X_R(c, 16)));
  /* c31c0: b.lt #0xc3174 */
  if (ARC_COND(c, 11)) goto L_c3174;
  /* c31c4: ldrb w15, [x11] */
  ARC_W_W(c, 15, arc_ld8(ARC_X_R(c, 11)));
  /* c31c8: mov x12, x16 */
  ARC_X_W(c, 12, ARC_X_R(c, 16));
  /* c31cc: cmp w13, w15, sxtb */
  (void)arc_sub32(c, ARC_W_R(c, 13), ((uint64_t)(int64_t)(int8_t)(ARC_W_R(c, 15))));
  /* c31d0: b.le #0xc3198 */
  if (ARC_COND(c, 13)) goto L_c3198;
  /* c31d4: b #0xc3108 */
  goto L_c3108;
L_c31d8:;
  /* c31d8: strb w10, [x9] */
  arc_st8(ARC_X_R(c, 9), ARC_W_R(c, 10));
L_c31dc:;
  /* c31dc: cmp x8, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(2));
  /* c31e0: sub x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) - UINT64_C(1)));
  /* c31e4: b.le #0xc3040 */
  if (ARC_COND(c, 13)) goto L_c3040;
L_c31e8:;
  /* c31e8: sub x9, x8, #2 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(2)));
  /* c31ec: ldrb w10, [x19] */
  ARC_W_W(c, 10, arc_ld8(ARC_X_R(c, 19)));
  /* c31f0: mov x13, xzr */
  ARC_X_W(c, 13, ARC_X_R(c, 31));
  /* c31f4: lsr x11, x9, #1 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(1)) & 63)));
  /* c31f8: mov x12, x19 */
  ARC_X_W(c, 12, ARC_X_R(c, 19));
  /* c31fc: b #0xc3228 */
  goto L_c3228;
L_c3200:;
  /* c3200: ldrsb w13, [x17, #2]! */
  { const uint64_t _a = (ARC_X_R(c, 17) + INT64_C(2));
    ARC_X_W(c, 17, ARC_X_R(c, 17) + INT64_C(2));
    ARC_W_W(c, 13, ((int32_t)(int8_t)arc_ld8(_a)));
  }
  /* c3204: ldursb w15, [x17, #-1] */
  ARC_W_W(c, 15, ((int32_t)(int8_t)arc_ld8((ARC_X_R(c, 17) + INT64_C(-1)))));
  /* c3208: cmp w15, w13 */
  (void)arc_sub32(c, ARC_W_R(c, 15), ARC_W_R(c, 13));
  /* c320c: csel w15, w15, w13, gt */
  ARC_W_W(c, 15, (ARC_COND(c, 12) ? (ARC_W_R(c, 15)) : ARC_W_R(c, 13)));
  /* c3210: csel x9, x17, x9, lt */
  ARC_X_W(c, 9, (ARC_COND(c, 11) ? (ARC_X_R(c, 17)) : ARC_X_R(c, 9)));
  /* c3214: csel x13, x16, x14, lt */
  ARC_X_W(c, 13, (ARC_COND(c, 11) ? (ARC_X_R(c, 16)) : ARC_X_R(c, 14)));
L_c3218:;
  /* c3218: cmp x13, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 13), ARC_X_R(c, 11));
  /* c321c: strb w15, [x12] */
  arc_st8(ARC_X_R(c, 12), ARC_W_R(c, 15));
  /* c3220: mov x12, x9 */
  ARC_X_W(c, 12, ARC_X_R(c, 9));
  /* c3224: b.gt #0xc3254 */
  if (ARC_COND(c, 12)) goto L_c3254;
L_c3228:;
  /* c3228: lsl x9, x13, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 13)) << ((UINT64_C(1)) & 63)));
  /* c322c: mov w14, #1 */
  ARC_W_W(c, 14, UINT64_C(1));
  /* c3230: add x17, x12, x13 */
  ARC_X_W(c, 17, (ARC_X_R(c, 12) + ARC_X_R(c, 13)));
  /* c3234: bfi x14, x13, #1, #0x3f */
  ARC_X_W(c, 14, (((uint64_t)(ARC_X_R(c, 14)) & UINT64_C(1)) | ((((uint64_t)(ARC_X_R(c, 13))) & UINT64_C(9223372036854775807)) << 1)));
  /* c3238: add x16, x9, #2 */
  ARC_X_W(c, 16, (ARC_X_R(c, 9) + UINT64_C(2)));
  /* c323c: add x9, x17, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 17) + UINT64_C(1)));
  /* c3240: cmp x16, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 16), ARC_X_R(c, 8));
  /* c3244: b.lt #0xc3200 */
  if (ARC_COND(c, 11)) goto L_c3200;
  /* c3248: ldrb w15, [x9] */
  ARC_W_W(c, 15, arc_ld8(ARC_X_R(c, 9)));
  /* c324c: mov x13, x14 */
  ARC_X_W(c, 13, ARC_X_R(c, 14));
  /* c3250: b #0xc3218 */
  goto L_c3218;
L_c3254:;
  /* c3254: sub x20, x20, #1 */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) - UINT64_C(1)));
  /* c3258: cmp x9, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 20));
  /* c325c: b.eq #0xc31d8 */
  if (ARC_COND(c, 0)) goto L_c31d8;
  /* c3260: ldrb w11, [x20] */
  ARC_W_W(c, 11, arc_ld8(ARC_X_R(c, 20)));
  /* c3264: sub x12, x9, x19 */
  ARC_X_W(c, 12, (ARC_X_R(c, 9) - ARC_X_R(c, 19)));
  /* c3268: add x12, x12, #1 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) + UINT64_C(1)));
  /* c326c: strb w11, [x9] */
  arc_st8(ARC_X_R(c, 9), ARC_W_R(c, 11));
  /* c3270: subs x11, x12, #2 */
  ARC_X_W(c, 11, arc_sub64(c, ARC_X_R(c, 12), UINT64_C(2)));
  /* c3274: strb w10, [x20] */
  arc_st8(ARC_X_R(c, 20), ARC_W_R(c, 10));
  /* c3278: b.lt #0xc31dc */
  if (ARC_COND(c, 11)) goto L_c31dc;
  /* c327c: lsr x10, x11, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 11)) >> ((UINT64_C(1)) & 63)));
  /* c3280: ldrsb w11, [x9] */
  ARC_W_W(c, 11, ((int32_t)(int8_t)arc_ld8(ARC_X_R(c, 9))));
  /* c3284: add x12, x19, x10 */
  ARC_X_W(c, 12, (ARC_X_R(c, 19) + ARC_X_R(c, 10)));
  /* c3288: ldrsb w13, [x12] */
  ARC_W_W(c, 13, ((int32_t)(int8_t)arc_ld8(ARC_X_R(c, 12))));
  /* c328c: cmp w13, w11 */
  (void)arc_sub32(c, ARC_W_R(c, 13), ARC_W_R(c, 11));
  /* c3290: b.ge #0xc31dc */
  if (ARC_COND(c, 10)) goto L_c31dc;
L_c3294:;
  /* c3294: mov x14, x9 */
  ARC_X_W(c, 14, ARC_X_R(c, 9));
  /* c3298: mov x9, x12 */
  ARC_X_W(c, 9, ARC_X_R(c, 12));
  /* c329c: strb w13, [x14] */
  arc_st8(ARC_X_R(c, 14), ARC_W_R(c, 13));
  /* c32a0: cbz x10, #0xc32bc */
  if ((ARC_X_R(c, 10)) == 0) goto L_c32bc;
  /* c32a4: sub x10, x10, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) - UINT64_C(1)));
  /* c32a8: lsr x10, x10, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 10)) >> ((UINT64_C(1)) & 63)));
  /* c32ac: add x12, x19, x10 */
  ARC_X_W(c, 12, (ARC_X_R(c, 19) + ARC_X_R(c, 10)));
  /* c32b0: ldrsb w13, [x12] */
  ARC_W_W(c, 13, ((int32_t)(int8_t)arc_ld8(ARC_X_R(c, 12))));
  /* c32b4: cmp w13, w11 */
  (void)arc_sub32(c, ARC_W_R(c, 13), ARC_W_R(c, 11));
  /* c32b8: b.lt #0xc3294 */
  if (ARC_COND(c, 11)) goto L_c3294;
L_c32bc:;
  /* c32bc: strb w11, [x9] */
  arc_st8(ARC_X_R(c, 9), ARC_W_R(c, 11));
  /* c32c0: b #0xc31dc */
  goto L_c31dc;
L_c32c4:;
  /* c32c4: tbz w8, #0, #0xc32d8 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_c32d8;
  /* c32c8: b #0xc3040 */
  goto L_c3040;
L_c32cc:;
  /* c32cc: add x9, x19, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + UINT64_C(1)));
  /* c32d0: cmp x9, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 20));
  /* c32d4: b.eq #0xc3040 */
  if (ARC_COND(c, 0)) goto L_c3040;
L_c32d8:;
  /* c32d8: ldrsb w8, [x19, #1] */
  ARC_W_W(c, 8, ((int32_t)(int8_t)arc_ld8((ARC_X_R(c, 19) + INT64_C(1)))));
  /* c32dc: ldrsb w10, [x19] */
  ARC_W_W(c, 10, ((int32_t)(int8_t)arc_ld8(ARC_X_R(c, 19))));
  /* c32e0: mov x19, x9 */
  ARC_X_W(c, 19, ARC_X_R(c, 9));
  /* c32e4: cmp w8, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 10));
  /* c32e8: b.ge #0xc32cc */
  if (ARC_COND(c, 10)) goto L_c32cc;
  /* c32ec: mov x9, x19 */
  ARC_X_W(c, 9, ARC_X_R(c, 19));
L_c32f0:;
  /* c32f0: strb w10, [x9] */
  arc_st8(ARC_X_R(c, 9), ARC_W_R(c, 10));
  /* c32f4: ldursb w10, [x9, #-2] */
  ARC_W_W(c, 10, ((int32_t)(int8_t)arc_ld8((ARC_X_R(c, 9) + INT64_C(-2)))));
  /* c32f8: sub x9, x9, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - UINT64_C(1)));
  /* c32fc: cmp w8, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 10));
  /* c3300: b.lt #0xc32f0 */
  if (ARC_COND(c, 11)) goto L_c32f0;
  /* c3304: strb w8, [x9] */
  arc_st8(ARC_X_R(c, 9), ARC_W_R(c, 8));
  /* c3308: b #0xc32cc */
  goto L_c32cc;
}

void fn1_d697c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038806908));
  /* d697c: bti c */
  /* bti: no architectural effect here */
  /* d6980: sub w9, w0, #0x41 */
  ARC_W_W(c, 9, (ARC_W_R(c, 0) - UINT64_C(65)));
  /* d6984: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* d6988: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* d698c: cmp w9, #0x39 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(57));
  /* d6990: b.hi #0xd69a8 */
  if (ARC_COND(c, 8)) goto L_d69a8;
  /* d6994: mov w10, #1 */
  ARC_W_W(c, 10, UINT64_C(1));
  /* d6998: lsl x9, x10, x9 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 10)) << ((ARC_X_R(c, 9)) & 63)));
  /* d699c: tst x9, #0x3ffffff03ffffff */
  arc_flags_logical64(c, (uint64_t)(ARC_X_R(c, 9) & UINT64_C(288230371923853311)));
  /* d69a0: b.eq #0xd69a8 */
  if (ARC_COND(c, 0)) goto L_d69a8;
  /* d69a4: ret  */
  return;
L_d69a8:;
  /* d69a8: sub w8, w8, #0x30 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) - UINT64_C(48)));
  /* d69ac: cmp w8, #0xa */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(10));
  /* d69b0: csel w0, w0, wzr, lo */
  ARC_W_W(c, 0, (ARC_COND(c, 3) ? (ARC_W_R(c, 0)) : ARC_W_R(c, 31)));
  /* d69b4: ret  */
  return;
}

void fn1_da370(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038821744));
  /* da370: bti c */
  /* bti: no architectural effect here */
  /* da374: ldrb w12, [x0, #0x20] */
  ARC_W_W(c, 12, arc_ld8((ARC_X_R(c, 0) + INT64_C(32))));
  /* da378: ldr x10, [x0] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 0)));
  /* da37c: sub w8, w12, #3 */
  ARC_W_W(c, 8, (ARC_W_R(c, 12) - UINT64_C(3)));
  /* da380: cmp w8, #3 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(3));
  /* da384: b.hs #0xda398 */
  if (ARC_COND(c, 2)) goto L_da398;
  /* da388: ldr x9, [x0, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* da38c: subs x13, x9, x10 */
  ARC_X_W(c, 13, arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10)));
  /* da390: b.ne #0xda3c4 */
  if (ARC_COND(c, 1)) goto L_da3c4;
  /* da394: b #0xda3a4 */
  goto L_da3a4;
L_da398:;
  /* da398: sub w8, w12, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 12) - UINT64_C(1)));
  /* da39c: cmp w8, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(2));
  /* da3a0: b.hs #0xda3b4 */
  if (ARC_COND(c, 2)) goto L_da3b4;
L_da3a4:;
  /* da3a4: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* da3a8: stp xzr, xzr, [x0, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* da3ac: strb w8, [x0, #0x20] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(32)), ARC_W_R(c, 8));
  /* da3b0: ret  */
  return;
L_da3b4:;
  /* da3b4: ldr x8, [x0, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* da3b8: add x9, x10, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 10) + ARC_X_R(c, 8)));
  /* da3bc: subs x13, x9, x10 */
  ARC_X_W(c, 13, arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10)));
  /* da3c0: b.eq #0xda3a4 */
  if (ARC_COND(c, 0)) goto L_da3a4;
L_da3c4:;
  /* da3c4: cmp w12, #4 */
  (void)arc_sub32(c, ARC_W_R(c, 12), UINT64_C(4));
  /* da3c8: sub x8, x10, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 10) - UINT64_C(1)));
  /* da3cc: sub x11, x9, #1 */
  ARC_X_W(c, 11, (ARC_X_R(c, 9) - UINT64_C(1)));
  /* da3d0: b.gt #0xda3ec */
  if (ARC_COND(c, 12)) goto L_da3ec;
  /* da3d4: cmp w12, #3 */
  (void)arc_sub32(c, ARC_W_R(c, 12), UINT64_C(3));
  /* da3d8: b.ne #0xda408 */
  if (ARC_COND(c, 1)) goto L_da408;
  /* da3dc: mov w8, #2 */
  ARC_W_W(c, 8, UINT64_C(2));
  /* da3e0: stp x10, x13, [x0, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 10));
    arc_st64(_pa + 8, ARC_X_R(c, 13));
  }
  /* da3e4: strb w8, [x0, #0x20] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(32)), ARC_W_R(c, 8));
  /* da3e8: ret  */
  return;
L_da3ec:;
  /* da3ec: cmp w12, #5 */
  (void)arc_sub32(c, ARC_W_R(c, 12), UINT64_C(5));
  /* da3f0: b.ne #0xda468 */
  if (ARC_COND(c, 1)) goto L_da468;
  /* da3f4: ldrb w11, [x11] */
  ARC_W_W(c, 11, arc_ld8(ARC_X_R(c, 11)));
  /* da3f8: cmp w11, #0x2f */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(47));
  /* da3fc: b.ne #0xda4c0 */
  if (ARC_COND(c, 1)) goto L_da4c0;
  /* da400: mov x10, xzr */
  ARC_X_W(c, 10, ARC_X_R(c, 31));
  /* da404: b #0xda4f0 */
  goto L_da4f0;
L_da408:;
  /* da408: ldrb w12, [x11] */
  ARC_W_W(c, 12, arc_ld8(ARC_X_R(c, 11)));
  /* da40c: cmp w12, #0x2f */
  (void)arc_sub32(c, ARC_W_R(c, 12), UINT64_C(47));
  /* da410: b.ne #0xda508 */
  if (ARC_COND(c, 1)) goto L_da508;
  /* da414: subs x9, x9, x10 */
  ARC_X_W(c, 9, arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10)));
  /* da418: mov w12, #1 */
  ARC_W_W(c, 12, UINT64_C(1));
  /* da41c: cneg x12, x12, hs */
  ARC_X_W(c, 12, (ARC_COND(c, 2) ? ((uint64_t)0 - (uint64_t)(ARC_X_R(c, 12))) : (ARC_X_R(c, 12))));
L_da420:;
  /* da420: add x11, x11, x12 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) + ARC_X_R(c, 12)));
  /* da424: cmp x11, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 8));
  /* da428: b.eq #0xda568 */
  if (ARC_COND(c, 0)) goto L_da568;
  /* da42c: ldrb w13, [x11] */
  ARC_W_W(c, 13, arc_ld8(ARC_X_R(c, 11)));
  /* da430: cmp w13, #0x2f */
  (void)arc_sub32(c, ARC_W_R(c, 13), UINT64_C(47));
  /* da434: b.eq #0xda420 */
  if (ARC_COND(c, 0)) goto L_da420;
  /* da438: cmp x11, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 8));
  /* da43c: mov w9, #1 */
  ARC_W_W(c, 9, UINT64_C(1));
  /* da440: cneg x10, x9, hs */
  ARC_X_W(c, 10, (ARC_COND(c, 2) ? ((uint64_t)0 - (uint64_t)(ARC_X_R(c, 9))) : (ARC_X_R(c, 9))));
  /* da444: add x12, x11, x10 */
  ARC_X_W(c, 12, (ARC_X_R(c, 11) + ARC_X_R(c, 10)));
L_da448:;
  /* da448: mov x9, x12 */
  ARC_X_W(c, 9, ARC_X_R(c, 12));
  /* da44c: cmp x12, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 12), ARC_X_R(c, 8));
  /* da450: b.eq #0xda510 */
  if (ARC_COND(c, 0)) goto L_da510;
  /* da454: ldrb w12, [x9] */
  ARC_W_W(c, 12, arc_ld8(ARC_X_R(c, 9)));
  /* da458: cmp w12, #0x2f */
  (void)arc_sub32(c, ARC_W_R(c, 12), UINT64_C(47));
  /* da45c: add x12, x9, x10 */
  ARC_X_W(c, 12, (ARC_X_R(c, 9) + ARC_X_R(c, 10)));
  /* da460: b.ne #0xda448 */
  if (ARC_COND(c, 1)) goto L_da448;
  /* da464: b #0xda510 */
  goto L_da510;
L_da468:;
  /* da468: ldurb w13, [x9, #-1] */
  ARC_W_W(c, 13, arc_ld8((ARC_X_R(c, 9) + INT64_C(-1))));
  /* da46c: subs x12, x9, x10 */
  ARC_X_W(c, 12, arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10)));
  /* da470: mov w11, #1 */
  ARC_W_W(c, 11, UINT64_C(1));
  /* da474: cneg x11, x11, hs */
  ARC_X_W(c, 11, (ARC_COND(c, 2) ? ((uint64_t)0 - (uint64_t)(ARC_X_R(c, 11))) : (ARC_X_R(c, 11))));
  /* da478: cmp w13, #0x2f */
  (void)arc_sub32(c, ARC_W_R(c, 13), UINT64_C(47));
  /* da47c: b.ne #0xda52c */
  if (ARC_COND(c, 1)) goto L_da52c;
  /* da480: add x14, x11, x9 */
  ARC_X_W(c, 14, (ARC_X_R(c, 11) + ARC_X_R(c, 9)));
  /* da484: mov x13, xzr */
  ARC_X_W(c, 13, ARC_X_R(c, 31));
  /* da488: sub x14, x14, #1 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) - UINT64_C(1)));
L_da48c:;
  /* da48c: add x15, x14, x13 */
  ARC_X_W(c, 15, (ARC_X_R(c, 14) + ARC_X_R(c, 13)));
  /* da490: cmp x15, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 15), ARC_X_R(c, 8));
  /* da494: b.eq #0xda578 */
  if (ARC_COND(c, 0)) goto L_da578;
  /* da498: ldrb w15, [x14, x13] */
  ARC_W_W(c, 15, arc_ld8((ARC_X_R(c, 14) + ARC_X_R(c, 13))));
  /* da49c: add x13, x13, x11 */
  ARC_X_W(c, 13, (ARC_X_R(c, 13) + ARC_X_R(c, 11)));
  /* da4a0: cmp w15, #0x2f */
  (void)arc_sub32(c, ARC_W_R(c, 15), UINT64_C(47));
  /* da4a4: b.eq #0xda48c */
  if (ARC_COND(c, 0)) goto L_da48c;
  /* da4a8: mov w8, #5 */
  ARC_W_W(c, 8, UINT64_C(5));
  /* da4ac: add x9, x9, x13 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + ARC_X_R(c, 13)));
  /* da4b0: strb w8, [x0, #0x20] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(32)), ARC_W_R(c, 8));
  /* da4b4: neg x8, x13 */
  ARC_X_W(c, 8, ((uint64_t)0 - (uint64_t)(ARC_X_R(c, 13))));
  /* da4b8: stp x9, x8, [x0, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* da4bc: ret  */
  return;
L_da4c0:;
  /* da4c0: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* da4c4: mov w10, #1 */
  ARC_W_W(c, 10, UINT64_C(1));
  /* da4c8: cneg x11, x10, hs */
  ARC_X_W(c, 11, (ARC_COND(c, 2) ? ((uint64_t)0 - (uint64_t)(ARC_X_R(c, 10))) : (ARC_X_R(c, 10))));
  /* da4cc: add x10, x11, x9 */
  ARC_X_W(c, 10, (ARC_X_R(c, 11) + ARC_X_R(c, 9)));
  /* da4d0: sub x12, x10, #1 */
  ARC_X_W(c, 12, (ARC_X_R(c, 10) - UINT64_C(1)));
L_da4d4:;
  /* da4d4: mov x10, x12 */
  ARC_X_W(c, 10, ARC_X_R(c, 12));
  /* da4d8: cmp x12, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 12), ARC_X_R(c, 8));
  /* da4dc: b.eq #0xda4f0 */
  if (ARC_COND(c, 0)) goto L_da4f0;
  /* da4e0: ldrb w12, [x10] */
  ARC_W_W(c, 12, arc_ld8(ARC_X_R(c, 10)));
  /* da4e4: cmp w12, #0x2f */
  (void)arc_sub32(c, ARC_W_R(c, 12), UINT64_C(47));
  /* da4e8: add x12, x10, x11 */
  ARC_X_W(c, 12, (ARC_X_R(c, 10) + ARC_X_R(c, 11)));
  /* da4ec: b.ne #0xda4d4 */
  if (ARC_COND(c, 1)) goto L_da4d4;
L_da4f0:;
  /* da4f0: mov w8, #4 */
  ARC_W_W(c, 8, UINT64_C(4));
  /* da4f4: add x10, x10, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(1)));
  /* da4f8: strb w8, [x0, #0x20] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(32)), ARC_W_R(c, 8));
  /* da4fc: sub x8, x9, x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) - ARC_X_R(c, 10)));
  /* da500: stp x10, x8, [x0, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 10));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* da504: ret  */
  return;
L_da508:;
  /* da508: mov x11, xzr */
  ARC_X_W(c, 11, ARC_X_R(c, 31));
  /* da50c: mov x9, xzr */
  ARC_X_W(c, 9, ARC_X_R(c, 31));
L_da510:;
  /* da510: add x8, x9, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) + UINT64_C(1)));
  /* da514: mov w9, #4 */
  ARC_W_W(c, 9, UINT64_C(4));
  /* da518: strb w9, [x0, #0x20] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(32)), ARC_W_R(c, 9));
  /* da51c: sub x9, x11, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 11) - ARC_X_R(c, 8)));
  /* da520: add x9, x9, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(1)));
  /* da524: stp x8, x9, [x0, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* da528: ret  */
  return;
L_da52c:;
  /* da52c: mov x13, x11 */
  ARC_X_W(c, 13, ARC_X_R(c, 11));
L_da530:;
  /* da530: add x12, x9, x13 */
  ARC_X_W(c, 12, (ARC_X_R(c, 9) + ARC_X_R(c, 13)));
  /* da534: mov x10, x13 */
  ARC_X_W(c, 10, ARC_X_R(c, 13));
  /* da538: sub x13, x12, #1 */
  ARC_X_W(c, 13, (ARC_X_R(c, 12) - UINT64_C(1)));
  /* da53c: cmp x13, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 13), ARC_X_R(c, 8));
  /* da540: b.eq #0xda554 */
  if (ARC_COND(c, 0)) goto L_da554;
  /* da544: ldrb w13, [x13] */
  ARC_W_W(c, 13, arc_ld8(ARC_X_R(c, 13)));
  /* da548: cmp w13, #0x2f */
  (void)arc_sub32(c, ARC_W_R(c, 13), UINT64_C(47));
  /* da54c: add x13, x10, x11 */
  ARC_X_W(c, 13, (ARC_X_R(c, 10) + ARC_X_R(c, 11)));
  /* da550: b.ne #0xda530 */
  if (ARC_COND(c, 1)) goto L_da530;
L_da554:;
  /* da554: mov w8, #4 */
  ARC_W_W(c, 8, UINT64_C(4));
  /* da558: strb w8, [x0, #0x20] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(32)), ARC_W_R(c, 8));
  /* da55c: neg x8, x10 */
  ARC_X_W(c, 8, ((uint64_t)0 - (uint64_t)(ARC_X_R(c, 10))));
  /* da560: stp x12, x8, [x0, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 12));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* da564: ret  */
  return;
L_da568:;
  /* da568: mov w8, #3 */
  ARC_W_W(c, 8, UINT64_C(3));
  /* da56c: stp x10, x9, [x0, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 10));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* da570: strb w8, [x0, #0x20] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(32)), ARC_W_R(c, 8));
  /* da574: ret  */
  return;
L_da578:;
  /* da578: mov w8, #3 */
  ARC_W_W(c, 8, UINT64_C(3));
  /* da57c: stp x10, x12, [x0, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 10));
    arc_st64(_pa + 8, ARC_X_R(c, 12));
  }
  /* da580: strb w8, [x0, #0x20] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(32)), ARC_W_R(c, 8));
  /* da584: ret  */
  return;
}

void fn1_dc2dc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038829788));
  /* dc2dc: bti c */
  /* bti: no architectural effect here */
  /* dc2e0: ret  */
  return;
}

void fn1_e12d8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038850264));
  /* e12d8: bti c */
  /* bti: no architectural effect here */
  /* e12dc: cbz x2, #0xe1368 */
  if ((ARC_X_R(c, 2)) == 0) goto L_e1368;
  /* e12e0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e12e4: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e12e8: stp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* e12ec: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* e12f0: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* e12f4: ldrb w8, [x0] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 0)));
  /* e12f8: ldp x10, x11, [x0, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(8));
    ARC_X_W(c, 10, arc_ld64(_pa));
    ARC_X_W(c, 11, arc_ld64(_pa + 8));
  }
  /* e12fc: lsr x9, x8, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* e1300: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* e1304: csinc x19, x11, x0, ne */
  ARC_X_W(c, 19, (ARC_COND(c, 1) ? (ARC_X_R(c, 11)) : ((ARC_X_R(c, 0)) + 1)));
  /* e1308: csel x20, x9, x10, eq */
  ARC_X_W(c, 20, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 10)));
  /* e130c: sub x9, x20, x1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 20) - ARC_X_R(c, 1)));
  /* e1310: cmp x9, x2 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 2));
  /* e1314: csel x21, x9, x2, lo */
  ARC_X_W(c, 21, (ARC_COND(c, 3) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 2)));
  /* e1318: b.ls #0xe133c */
  if (ARC_COND(c, 9)) goto L_e133c;
  /* e131c: add x8, x19, x1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 1)));
  /* e1320: sub x2, x9, x21 */
  ARC_X_W(c, 2, (ARC_X_R(c, 9) - ARC_X_R(c, 21)));
  /* e1324: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* e1328: add x1, x8, x21 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) + ARC_X_R(c, 21)));
  /* e132c: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* e1330: bl #0x1449f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(922420));
  fn1_1449f0(c);
  /* e1334: ldrb w8, [x22] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 22)));
  /* e1338: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
L_e133c:;
  /* e133c: sub x9, x20, x21 */
  ARC_X_W(c, 9, (ARC_X_R(c, 20) - ARC_X_R(c, 21)));
  /* e1340: tbnz w8, #0, #0xe1350 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_e1350;
  /* e1344: lsl w8, w9, #1 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 9)) << ((UINT64_C(1)) & 31)));
  /* e1348: strb w8, [x0] */
  arc_st8(ARC_X_R(c, 0), ARC_W_R(c, 8));
  /* e134c: b #0xe1354 */
  goto L_e1354;
L_e1350:;
  /* e1350: str x9, [x0, #8] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(8)), ARC_X_R(c, 9));
L_e1354:;
  /* e1354: strb wzr, [x19, x9] */
  arc_st8((ARC_X_R(c, 19) + ARC_X_R(c, 9)), ARC_W_R(c, 31));
  /* e1358: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* e135c: ldp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* e1360: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e1364: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
L_e1368:;
  /* e1368: ret  */
  return;
}

void fn1_e3b78(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038860664));
  /* e3b78: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e3b7c: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e3b80: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* e3b84: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* e3b88: ldrb w8, [x3] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 3)));
  /* e3b8c: ldrb w9, [x0] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 0)));
  /* e3b90: add x10, x3, #4 */
  ARC_X_W(c, 10, (ARC_X_R(c, 3) + UINT64_C(4)));
  /* e3b94: ldp x12, x11, [x3, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 3) + INT64_C(8));
    ARC_X_W(c, 12, arc_ld64(_pa));
    ARC_X_W(c, 11, arc_ld64(_pa + 8));
  }
  /* e3b98: ldr x14, [x0, #8] */
  ARC_X_W(c, 14, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* e3b9c: lsr x13, x8, #1 */
  ARC_X_W(c, 13, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* e3ba0: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* e3ba4: lsr x15, x9, #1 */
  ARC_X_W(c, 15, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(1)) & 63)));
  /* e3ba8: csel x8, x10, x11, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 11)));
  /* e3bac: csel x10, x13, x12, eq */
  ARC_X_W(c, 10, (ARC_COND(c, 0) ? (ARC_X_R(c, 13)) : ARC_X_R(c, 12)));
  /* e3bb0: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* e3bb4: csel x11, x15, x14, eq */
  ARC_X_W(c, 11, (ARC_COND(c, 0) ? (ARC_X_R(c, 15)) : ARC_X_R(c, 14)));
  /* e3bb8: subs x11, x11, x1 */
  ARC_X_W(c, 11, arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 1)));
  /* e3bbc: b.lo #0xe3c24 */
  if (ARC_COND(c, 3)) goto L_e3c24;
  /* e3bc0: ldr x12, [x0, #0x10] */
  ARC_X_W(c, 12, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* e3bc4: add x13, x0, #4 */
  ARC_X_W(c, 13, (ARC_X_R(c, 0) + UINT64_C(4)));
  /* e3bc8: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* e3bcc: csel x9, x13, x12, eq */
  ARC_X_W(c, 9, (ARC_COND(c, 0) ? (ARC_X_R(c, 13)) : ARC_X_R(c, 12)));
  /* e3bd0: cmp x11, x2 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 2));
  /* e3bd4: csel x19, x11, x2, lo */
  ARC_X_W(c, 19, (ARC_COND(c, 3) ? (ARC_X_R(c, 11)) : ARC_X_R(c, 2)));
  /* e3bd8: subs x10, x10, x4 */
  ARC_X_W(c, 10, arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 4)));
  /* e3bdc: b.lo #0xe3c24 */
  if (ARC_COND(c, 3)) goto L_e3c24;
  /* e3be0: cmp x10, x5 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 5));
  /* e3be4: csel x20, x10, x5, lo */
  ARC_X_W(c, 20, (ARC_COND(c, 3) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 5)));
  /* e3be8: cmp x20, x19 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 19));
  /* e3bec: csel x2, x20, x19, lo */
  ARC_X_W(c, 2, (ARC_COND(c, 3) ? (ARC_X_R(c, 20)) : ARC_X_R(c, 19)));
  /* e3bf0: cbz x2, #0xe3c04 */
  if ((ARC_X_R(c, 2)) == 0) goto L_e3c04;
  /* e3bf4: add x0, x9, x1, lsl #2 */
  ARC_X_W(c, 0, (ARC_X_R(c, 9) + ((uint64_t)(ARC_X_R(c, 1)) << 2)));
  /* e3bf8: add x1, x8, x4, lsl #2 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 4)) << 2)));
  /* e3bfc: bl #0x142e60 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(932864));
  fn1_142e60(c);
  /* e3c00: cbnz w0, #0xe3c14 */
  if ((ARC_W_R(c, 0)) != 0) goto L_e3c14;
L_e3c04:;
  /* e3c04: cmp x19, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 20));
  /* e3c08: mov w8, #-1 */
  ARC_W_W(c, 8, UINT64_C(18446744073709551615));
  /* e3c0c: cneg w8, w8, hs */
  ARC_W_W(c, 8, (ARC_COND(c, 2) ? ((uint32_t)0 - (uint32_t)(ARC_W_R(c, 8))) : (ARC_W_R(c, 8))));
  /* e3c10: csel w0, wzr, w8, eq */
  ARC_W_W(c, 0, (ARC_COND(c, 0) ? (ARC_W_R(c, 31)) : ARC_W_R(c, 8)));
L_e3c14:;
  /* e3c14: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* e3c18: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e3c1c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* e3c20: ret  */
  return;
L_e3c24:;
  /* e3c24: adrp x0, #0x50000 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(327680)));
  /* e3c28: add x0, x0, #0xc97 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3223)));
  /* e3c2c: bl #0xda038 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(932912));
  fn1_da038(c);
}

void fn1_e8328(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038879016));
  /* e8328: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e832c: sub sp, sp, #0x90 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(144)));
  /* e8330: stp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e8334: stp x26, x25, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* e8338: stp x24, x23, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* e833c: stp x22, x21, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* e8340: stp x20, x19, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* e8344: add x29, sp, #0x40 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(64)));
  /* e8348: ldrb w8, [x3] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 3)));
  /* e834c: mov x19, x2 */
  ARC_X_W(c, 19, ARC_X_R(c, 2));
  /* e8350: mov w21, w1 */
  ARC_W_W(c, 21, ARC_W_R(c, 1));
  /* e8354: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* e8358: str w1, [sp, #0x18] */
  arc_st32(((c)->sp + INT64_C(24)), ARC_W_R(c, 1));
  /* e835c: str x2, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 2));
  /* e8360: tbnz w8, #0, #0xe8378 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_e8378;
  /* e8364: ldr q0, [x3] */
  arc_q_w(c, 0, arc_ld64(ARC_X_R(c, 3)), arc_ld64(ARC_X_R(c, 3) + 8));
  /* e8368: ldr x8, [x3, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 3) + INT64_C(16))));
  /* e836c: str q0, [sp] */
  arc_st64((c)->sp, (c)->q[0].u64[0]);
  arc_st64((c)->sp + 8, (c)->q[0].u64[1]);
  /* e8370: str x8, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 8));
  /* e8374: b #0xe8384 */
  goto L_e8384;
L_e8378:;
  /* e8378: ldp x2, x1, [x3, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 3) + INT64_C(8));
    ARC_X_W(c, 2, arc_ld64(_pa));
    ARC_X_W(c, 1, arc_ld64(_pa + 8));
  }
  /* e837c: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* e8380: bl #0xda588 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(951172));
  fn1_da588(c);
L_e8384:;
  /* e8384: sub x8, x29, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* e8388: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* e838c: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* e8390: sub x23, x29, #0x18 */
  ARC_X_W(c, 23, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* e8394: bl #0xe7f5c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(951192));
  fn1_e7f5c(c);
  /* e8398: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* e839c: ldr x8, [x8, #0x910] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2320))));
  /* e83a0: ldurb w26, [x29, #-0x18] */
  ARC_W_W(c, 26, arc_ld8((ARC_X_R(c, 29) + INT64_C(-24))));
  /* e83a4: ldur x22, [x29, #-8] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 29) + INT64_C(-8))));
  /* e83a8: tst w26, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 26) & UINT64_C(1)));
  /* e83ac: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* e83b0: csinc x23, x22, x23, ne */
  ARC_X_W(c, 23, (ARC_COND(c, 1) ? (ARC_X_R(c, 22)) : ((ARC_X_R(c, 23)) + 1)));
  /* e83b4: str x8, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 8));
  /* e83b8: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* e83bc: bl #0x142860 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(951232));
  fn1_142860(c);
  /* e83c0: mov x24, x0 */
  ARC_X_W(c, 24, ARC_X_R(c, 0));
  /* e83c4: add x0, x0, #0x19 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(25)));
  /* e83c8: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(951244));
  fn1_1428f0(c);
  /* e83cc: add x25, x0, #0x18 */
  ARC_X_W(c, 25, (ARC_X_R(c, 0) + UINT64_C(24)));
  /* e83d0: stp x24, x24, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 24));
  }
  /* e83d4: add x2, x24, #1 */
  ARC_X_W(c, 2, (ARC_X_R(c, 24) + UINT64_C(1)));
  /* e83d8: str wzr, [x0, #0x10] */
  arc_st32((ARC_X_R(c, 0) + INT64_C(16)), ARC_W_R(c, 31));
  /* e83dc: mov x0, x25 */
  ARC_X_W(c, 0, ARC_X_R(c, 25));
  /* e83e0: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* e83e4: bl #0x1449d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(951272));
  fn1_1449d8(c);
  /* e83e8: str x25, [x20, #8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(8)), ARC_X_R(c, 25));
  /* e83ec: tbz w26, #0, #0xe8400 */
  if (((ARC_W_R(c, 26)) >> 0 & 1) == 0) goto L_e8400;
  /* e83f0: ldur x8, [x29, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(-24))));
  /* e83f4: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* e83f8: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* e83fc: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(951296));
  fn1_142608(c);
L_e8400:;
  /* e8400: ldrb w8, [sp] */
  ARC_W_W(c, 8, arc_ld8((c)->sp));
  /* e8404: tbz w8, #0, #0xe8418 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_e8418;
  /* e8408: ldr x8, [sp] */
  ARC_X_W(c, 8, arc_ld64((c)->sp));
  /* e840c: ldr x0, [sp, #0x10] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(16))));
  /* e8410: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* e8414: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(951320));
  fn1_142608(c);
L_e8418:;
  /* e8418: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* e841c: ldr x8, [x8, #0xa50] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2640))));
  /* e8420: str w21, [x20, #0x10] */
  arc_st32((ARC_X_R(c, 20) + INT64_C(16)), ARC_W_R(c, 21));
  /* e8424: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* e8428: str x8, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 8));
  /* e842c: str x19, [x20, #0x18] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(24)), ARC_X_R(c, 19));
  /* e8430: ldp x20, x19, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* e8434: ldp x22, x21, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* e8438: ldp x24, x23, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* e843c: ldp x26, x25, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* e8440: ldp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e8444: add sp, sp, #0x90 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(144)));
  /* e8448: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* e844c: ret  */
  return;
  /* e8450: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* e8454: tbnz w26, #0, #0xe8468 */
  if (((ARC_W_R(c, 26)) >> 0 & 1) != 0) goto L_e8468;
  /* e8458: ldrb w8, [sp] */
  ARC_W_W(c, 8, arc_ld8((c)->sp));
  /* e845c: tbnz w8, #0, #0xe8490 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_e8490;
L_e8460:;
  /* e8460: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* e8464: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(951400));
  fn1_9cc20(c);
L_e8468:;
  /* e8468: ldur x8, [x29, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(-24))));
  /* e846c: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* e8470: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* e8474: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(951416));
  fn1_142608(c);
  /* e8478: ldrb w8, [sp] */
  ARC_W_W(c, 8, arc_ld8((c)->sp));
  /* e847c: tbz w8, #0, #0xe8460 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_e8460;
  /* e8480: b #0xe8490 */
  goto L_e8490;
  /* e8484: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* e8488: ldrb w8, [sp] */
  ARC_W_W(c, 8, arc_ld8((c)->sp));
  /* e848c: tbz w8, #0, #0xe8460 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_e8460;
L_e8490:;
  /* e8490: ldr x8, [sp] */
  ARC_X_W(c, 8, arc_ld64((c)->sp));
  /* e8494: ldr x0, [sp, #0x10] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(16))));
  /* e8498: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* e849c: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(951456));
  fn1_142608(c);
  /* e84a0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* e84a4: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(951464));
  fn1_9cc20(c);
}

void fn1_eaab8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038889144));
  /* eaab8: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* eaabc: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* eaac0: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* eaac4: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* eaac8: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* eaacc: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* eaad0: ldr x8, [x8, #0xa70] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2672))));
  /* eaad4: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* eaad8: str x8, [x0], #0x40 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(64));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* eaadc: bl #0x1430d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(961248));
  fn1_1430d0(c);
  /* eaae0: add x0, x19, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(24)));
  /* eaae4: bl #0x143220 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(961256));
  fn1_143220(c);
  /* eaae8: ldr x19, [x19, #0x10] */
  ARC_X_W(c, 19, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* eaaec: cbz x19, #0xeab3c */
  if ((ARC_X_R(c, 19)) == 0) goto L_eab3c;
  /* eaaf0: sub x1, x19, #0x78 */
  ARC_X_W(c, 1, (ARC_X_R(c, 19) - UINT64_C(120)));
  /* eaaf4: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* eaaf8: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(961276));
  fn1_bd950(c);
  /* eaafc: cmp x0, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 0), UINT64_C(1));
  /* eab00: b.ne #0xeab3c */
  if (ARC_COND(c, 1)) goto L_eab3c;
  /* eab04: ldur x8, [x19, #-0x68] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(-104))));
  /* eab08: cbz x8, #0xeab14 */
  if ((ARC_X_R(c, 8)) == 0) goto L_eab14;
  /* eab0c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* eab10: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(961300));
  arc_dispatch(c, ARC_X_R(c, 8));
L_eab14:;
  /* eab14: sub x0, x19, #0x80 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) - UINT64_C(128)));
  /* eab18: nop  */
  /* nop: no architectural effect here */
  /* eab1c: adr x8, #0x1576e0 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1406688)));
  /* eab20: cmp x0, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* eab24: b.lo #0xeab4c */
  if (ARC_COND(c, 3)) goto L_eab4c;
  /* eab28: adrp x8, #0x157000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1404928)));
  /* eab2c: add x8, x8, #0x8e0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2272)));
  /* eab30: cmp x0, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* eab34: b.hs #0xeab4c */
  if (ARC_COND(c, 2)) goto L_eab4c;
  /* eab38: bl #0xa2664 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(961340));
  fn1_a2664(c);
L_eab3c:;
  /* eab3c: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* eab40: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* eab44: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* eab48: ret  */
  return;
L_eab4c:;
  /* eab4c: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* eab50: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* eab54: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* eab58: b #0x142800 */
  fn1_142800(c); return;
  /* eab5c: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(961376));
  fn1_a1454(c);
  /* eab60: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(961380));
  fn1_a1454(c);
  /* eab64: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(961384));
  fn1_a1454(c);
  /* eab68: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(961388));
  fn1_a1454(c);
}

void fn1_ec15c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038894940));
  /* ec15c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* ec160: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* ec164: str x23, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 23));
  /* ec168: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* ec16c: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* ec170: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* ec174: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* ec178: ldr x8, [x0, #0x30] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(48))));
  /* ec17c: nop  */
  /* nop: no architectural effect here */
  /* ec180: adr x23, #0x15dc40 */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1432640)));
  /* ec184: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* ec188: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* ec18c: cmp x8, x23 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 23));
  /* ec190: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* ec194: b.eq #0xec1a4 */
  if (ARC_COND(c, 0)) goto L_ec1a4;
  /* ec198: add x1, x8, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) + UINT64_C(8)));
  /* ec19c: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* ec1a0: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(967076));
  fn1_db2e0(c);
L_ec1a4:;
  /* ec1a4: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* ec1a8: cmp x8, x23 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 23));
  /* ec1ac: b.eq #0xec1bc */
  if (ARC_COND(c, 0)) goto L_ec1bc;
  /* ec1b0: add x1, x8, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) + UINT64_C(8)));
  /* ec1b4: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* ec1b8: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(967100));
  fn1_db2e0(c);
L_ec1bc:;
  /* ec1bc: ldr x22, [x20, #0x30] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 20) + INT64_C(48))));
  /* ec1c0: cmp x22, x23 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 23));
  /* ec1c4: b.eq #0xec1e8 */
  if (ARC_COND(c, 0)) goto L_ec1e8;
  /* ec1c8: add x1, x22, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 22) + UINT64_C(8)));
  /* ec1cc: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* ec1d0: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(967124));
  fn1_bd950(c);
  /* ec1d4: cbnz x0, #0xec1e8 */
  if ((ARC_X_R(c, 0)) != 0) goto L_ec1e8;
  /* ec1d8: ldr x8, [x22] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 22)));
  /* ec1dc: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* ec1e0: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* ec1e4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(967144));
  arc_dispatch(c, ARC_X_R(c, 8));
L_ec1e8:;
  /* ec1e8: ldr x9, [x21] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 21)));
  /* ec1ec: ldr x8, [x20, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(72))));
  /* ec1f0: str x9, [x20, #0x30] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(48)), ARC_X_R(c, 9));
  /* ec1f4: cbz x8, #0xec220 */
  if ((ARC_X_R(c, 8)) == 0) goto L_ec220;
  /* ec1f8: sub x21, x8, #1 */
  ARC_X_W(c, 21, (ARC_X_R(c, 8) - UINT64_C(1)));
L_ec1fc:;
  /* ec1fc: ldp x8, x9, [x20, #0x38] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(56));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* ec200: ldr x8, [x8, x21, lsl #3] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 21)) << 3))));
  /* ec204: ldr w2, [x9, x21, lsl #2] */
  ARC_W_W(c, 2, arc_ld32((ARC_X_R(c, 9) + ((uint64_t)(ARC_X_R(c, 21)) << 2))));
  /* ec208: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* ec20c: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* ec210: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(967188));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* ec214: sub x21, x21, #1 */
  ARC_X_W(c, 21, (ARC_X_R(c, 21) - UINT64_C(1)));
  /* ec218: cmn x21, #1 */
  (void)arc_add64(c, ARC_X_R(c, 21), UINT64_C(1), 0);
  /* ec21c: b.ne #0xec1fc */
  if (ARC_COND(c, 1)) goto L_ec1fc;
L_ec220:;
  /* ec220: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* ec224: ldr x23, [sp, #0x10] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(16))));
  /* ec228: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* ec22c: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ec230: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* ec234: ret  */
  return;
  /* ec238: ldr x20, [x19] */
  ARC_X_W(c, 20, arc_ld64(ARC_X_R(c, 19)));
  /* ec23c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* ec240: cmp x20, x23 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 23));
  /* ec244: b.eq #0xec268 */
  if (ARC_COND(c, 0)) goto L_ec268;
  /* ec248: add x1, x20, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* ec24c: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* ec250: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(967252));
  fn1_bd950(c);
  /* ec254: cbnz x0, #0xec268 */
  if ((ARC_X_R(c, 0)) != 0) goto L_ec268;
  /* ec258: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* ec25c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* ec260: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* ec264: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(967272));
  arc_dispatch(c, ARC_X_R(c, 8));
L_ec268:;
  /* ec268: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ec26c: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(967280));
  fn1_9cc20(c);
}

void fn1_edaf0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038901488));
  /* edaf0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* edaf4: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* edaf8: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* edafc: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* edb00: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* edb04: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* edb08: add x19, x0, x8 */
  ARC_X_W(c, 19, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* edb0c: add x0, x19, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(16)));
  /* edb10: bl #0x1433b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(973588));
  fn1_1433b8(c);
  /* edb14: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* edb18: mov w1, #0xa8 */
  ARC_W_W(c, 1, UINT64_C(168));
  /* edb1c: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* edb20: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* edb24: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* edb28: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_f2b98(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038922136));
  /* f2b98: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* f2b9c: sub sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(112)));
  /* f2ba0: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* f2ba4: str x25, [sp, #0x30] */
  arc_st64(((c)->sp + INT64_C(48)), ARC_X_R(c, 25));
  /* f2ba8: stp x24, x23, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* f2bac: stp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* f2bb0: stp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* f2bb4: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* f2bb8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f2bbc: str q0, [sp] */
  arc_st64((c)->sp, (c)->q[0].u64[0]);
  arc_st64((c)->sp + 8, (c)->q[0].u64[1]);
  /* f2bc0: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* f2bc4: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* f2bc8: bl #0x143610 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(994252));
  fn1_143610(c);
  /* f2bcc: ldrb w8, [sp, #0x10] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(16))));
  /* f2bd0: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* f2bd4: b.ne #0xf2d14 */
  if (ARC_COND(c, 1)) goto L_f2d14;
  /* f2bd8: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f2bdc: nop  */
  /* nop: no architectural effect here */
  /* f2be0: adr x25, #0x15dc40 */
  ARC_X_W(c, 25, (arc_image_bases[1] + UINT64_C(1432640)));
  /* f2be4: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f2be8: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f2bec: ldr x21, [x8, #0x30] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 8) + INT64_C(48))));
  /* f2bf0: cmp x21, x25 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 25));
  /* f2bf4: str x21, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 21));
  /* f2bf8: b.eq #0xf2c08 */
  if (ARC_COND(c, 0)) goto L_f2c08;
  /* f2bfc: add x1, x21, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(8)));
  /* f2c00: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* f2c04: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(994312));
  fn1_db2e0(c);
L_f2c08:;
  /* f2c08: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* f2c0c: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* f2c10: ldr x1, [x1, #0xb50] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(2896))));
  /* f2c14: bl #0x143748 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(994328));
  fn1_143748(c);
  /* f2c18: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* f2c1c: cmp x21, x25 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 25));
  /* f2c20: b.eq #0xf2c44 */
  if (ARC_COND(c, 0)) goto L_f2c44;
  /* f2c24: add x1, x21, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(8)));
  /* f2c28: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* f2c2c: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(994352));
  fn1_bd950(c);
  /* f2c30: cbnz x0, #0xf2c44 */
  if ((ARC_X_R(c, 0)) != 0) goto L_f2c44;
  /* f2c34: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* f2c38: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* f2c3c: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* f2c40: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(994372));
  arc_dispatch(c, ARC_X_R(c, 8));
L_f2c44:;
  /* f2c44: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f2c48: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f2c4c: add x21, x19, x8 */
  ARC_X_W(c, 21, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f2c50: ldr w3, [x21, #0x90] */
  ARC_W_W(c, 3, arc_ld32((ARC_X_R(c, 21) + INT64_C(144))));
  /* f2c54: ldr x22, [x21, #0x28] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 21) + INT64_C(40))));
  /* f2c58: cmn w3, #1 */
  (void)arc_add32(c, ARC_W_R(c, 3), UINT64_C(1), 0);
  /* f2c5c: b.ne #0xf2cd0 */
  if (ARC_COND(c, 1)) goto L_f2cd0;
  /* f2c60: ldr x23, [x21, #0x30] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 21) + INT64_C(48))));
  /* f2c64: cmp x23, x25 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 25));
  /* f2c68: str x23, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 23));
  /* f2c6c: b.eq #0xf2c7c */
  if (ARC_COND(c, 0)) goto L_f2c7c;
  /* f2c70: add x1, x23, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 23) + UINT64_C(8)));
  /* f2c74: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* f2c78: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(994428));
  fn1_db2e0(c);
L_f2c7c:;
  /* f2c7c: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* f2c80: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* f2c84: ldr x1, [x1, #0xb40] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(2880))));
  /* f2c88: bl #0x143748 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(994444));
  fn1_143748(c);
  /* f2c8c: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* f2c90: ldr x8, [x8, #0x38] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(56))));
  /* f2c94: mov w1, #0x20 */
  ARC_W_W(c, 1, UINT64_C(32));
  /* f2c98: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(994460));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* f2c9c: mov w24, w0 */
  ARC_W_W(c, 24, ARC_W_R(c, 0));
  /* f2ca0: cmp x23, x25 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 25));
  /* f2ca4: b.eq #0xf2cc8 */
  if (ARC_COND(c, 0)) goto L_f2cc8;
  /* f2ca8: add x1, x23, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 23) + UINT64_C(8)));
  /* f2cac: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* f2cb0: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(994484));
  fn1_bd950(c);
  /* f2cb4: cbnz x0, #0xf2cc8 */
  if ((ARC_X_R(c, 0)) != 0) goto L_f2cc8;
  /* f2cb8: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* f2cbc: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* f2cc0: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* f2cc4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(994504));
  arc_dispatch(c, ARC_X_R(c, 8));
L_f2cc8:;
  /* f2cc8: and w3, w24, #0xff */
  ARC_W_W(c, 3, (ARC_W_R(c, 24) & UINT64_C(255)));
  /* f2ccc: str w3, [x21, #0x90] */
  arc_st32((ARC_X_R(c, 21) + INT64_C(144)), ARC_W_R(c, 3));
L_f2cd0:;
  /* f2cd0: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* f2cd4: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* f2cd8: ldr q0, [sp] */
  arc_q_w(c, 0, arc_ld64((c)->sp), arc_ld64((c)->sp + 8));
  /* f2cdc: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* f2ce0: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* f2ce4: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* f2ce8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(994540));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* f2cec: cbnz x0, #0xf2d14 */
  if ((ARC_X_R(c, 0)) != 0) goto L_f2d14;
  /* f2cf0: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f2cf4: mov w10, #5 */
  ARC_W_W(c, 10, UINT64_C(5));
  /* f2cf8: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f2cfc: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f2d00: ldp w9, w11, [x8, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 8) + INT64_C(32));
    ARC_W_W(c, 9, arc_ld32(_pa));
    ARC_W_W(c, 11, arc_ld32(_pa + 4));
  }
  /* f2d04: orr w9, w9, w10 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | ARC_W_R(c, 10)));
  /* f2d08: tst w11, w9 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 11) & ARC_W_R(c, 9)));
  /* f2d0c: str w9, [x8, #0x20] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(32)), ARC_W_R(c, 9));
  /* f2d10: b.ne #0xf2d40 */
  if (ARC_COND(c, 1)) goto L_f2d40;
L_f2d14:;
  /* f2d14: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* f2d18: bl #0x143628 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(994588));
  fn1_143628(c);
L_f2d1c:;
  /* f2d1c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f2d20: ldp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* f2d24: ldr x25, [sp, #0x30] */
  ARC_X_W(c, 25, arc_ld64(((c)->sp + INT64_C(48))));
  /* f2d28: ldp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* f2d2c: ldp x24, x23, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* f2d30: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* f2d34: add sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(112)));
  /* f2d38: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* f2d3c: ret  */
  return;
L_f2d40:;
  /* f2d40: nop  */
  /* nop: no architectural effect here */
  /* f2d44: adr x0, #0x50210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(328208)));
  /* f2d48: bl #0xec720 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(994636));
  fn1_ec720(c);
  /* f2d4c: b #0xf2d78 */
  goto L_f2d78;
  /* f2d50: cmp x23, x25 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 25));
  /* f2d54: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* f2d58: b.eq #0xf2dac */
  if (ARC_COND(c, 0)) goto L_f2dac;
  /* f2d5c: add x1, x23, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 23) + UINT64_C(8)));
  /* f2d60: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* f2d64: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(994664));
  fn1_bd950(c);
  /* f2d68: cbnz x0, #0xf2dac */
  if ((ARC_X_R(c, 0)) != 0) goto L_f2dac;
  /* f2d6c: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* f2d70: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* f2d74: b #0xf2da4 */
  goto L_f2da4;
L_f2d78:;
  /* f2d78: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* f2d7c: b #0xf2dac */
  goto L_f2dac;
  /* f2d80: cmp x21, x25 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 25));
  /* f2d84: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* f2d88: b.eq #0xf2dac */
  if (ARC_COND(c, 0)) goto L_f2dac;
  /* f2d8c: add x1, x21, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(8)));
  /* f2d90: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* f2d94: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(994712));
  fn1_bd950(c);
  /* f2d98: cbnz x0, #0xf2dac */
  if ((ARC_X_R(c, 0)) != 0) goto L_f2dac;
  /* f2d9c: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* f2da0: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
L_f2da4:;
  /* f2da4: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* f2da8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(994732));
  arc_dispatch(c, ARC_X_R(c, 8));
L_f2dac:;
  /* f2dac: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* f2db0: bl #0x143628 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(994740));
  fn1_143628(c);
  /* f2db4: b #0xf2dbc */
  goto L_f2dbc;
  /* f2db8: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
L_f2dbc:;
  /* f2dbc: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* f2dc0: bl #0x142548 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(994756));
  fn1_142548(c);
  /* f2dc4: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f2dc8: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f2dcc: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f2dd0: ldr w9, [x8, #0x20] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 8) + INT64_C(32))));
  /* f2dd4: ldrb w10, [x8, #0x24] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 8) + INT64_C(36))));
  /* f2dd8: orr w9, w9, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | UINT64_C(1)));
  /* f2ddc: str w9, [x8, #0x20] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(32)), ARC_W_R(c, 9));
  /* f2de0: tbnz w10, #0, #0xf2dec */
  if (((ARC_W_R(c, 10)) >> 0 & 1) != 0) goto L_f2dec;
  /* f2de4: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(994792));
  fn1_142980(c);
  /* f2de8: b #0xf2d1c */
  goto L_f2d1c;
L_f2dec:;
  /* f2dec: bl #0x1429b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(994800));
  fn1_1429b0(c);
  /* f2df0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f2df4: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(994808));
  fn1_142980(c);
  /* f2df8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f2dfc: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(994816));
  fn1_9cc20(c);
  /* f2e00: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(994820));
  fn1_a1454(c);
}

void fn1_f452c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038928684));
  /* f452c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* f4530: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* f4534: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* f4538: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* f453c: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* f4540: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f4544: add x19, x0, x8 */
  ARC_X_W(c, 19, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* f4548: add x0, x19, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(16)));
  /* f454c: bl #0x1433b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1000784));
  fn1_1433b8(c);
  /* f4550: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f4554: mov w1, #0xa8 */
  ARC_W_W(c, 1, UINT64_C(168));
  /* f4558: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* f455c: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* f4560: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* f4564: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_f9608(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038949384));
  /* f9608: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* f960c: sub sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(112)));
  /* f9610: stp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* f9614: stp x24, x23, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* f9618: stp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* f961c: stp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* f9620: add x29, sp, #0x30 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(48)));
  /* f9624: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f9628: str q0, [sp] */
  arc_st64((c)->sp, (c)->q[0].u64[0]);
  arc_st64((c)->sp + 8, (c)->q[0].u64[1]);
  /* f962c: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* f9630: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* f9634: bl #0x143688 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1021496));
  fn1_143688(c);
  /* f9638: ldrb w8, [sp, #0x18] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(24))));
  /* f963c: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* f9640: b.ne #0xf9788 */
  if (ARC_COND(c, 1)) goto L_f9788;
  /* f9644: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f9648: nop  */
  /* nop: no architectural effect here */
  /* f964c: adr x24, #0x15dc40 */
  ARC_X_W(c, 24, (arc_image_bases[1] + UINT64_C(1432640)));
  /* f9650: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f9654: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f9658: ldr x21, [x8, #0x30] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 8) + INT64_C(48))));
  /* f965c: cmp x21, x24 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 24));
  /* f9660: stur x21, [x29, #-8] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-8)), ARC_X_R(c, 21));
  /* f9664: b.eq #0xf9674 */
  if (ARC_COND(c, 0)) goto L_f9674;
  /* f9668: add x1, x21, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(8)));
  /* f966c: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* f9670: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1021556));
  fn1_db2e0(c);
L_f9674:;
  /* f9674: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* f9678: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* f967c: ldr x1, [x1, #0xb68] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(2920))));
  /* f9680: bl #0x143748 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1021572));
  fn1_143748(c);
  /* f9684: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* f9688: cmp x21, x24 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 24));
  /* f968c: b.eq #0xf96b0 */
  if (ARC_COND(c, 0)) goto L_f96b0;
  /* f9690: add x1, x21, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(8)));
  /* f9694: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* f9698: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1021596));
  fn1_bd950(c);
  /* f969c: cbnz x0, #0xf96b0 */
  if ((ARC_X_R(c, 0)) != 0) goto L_f96b0;
  /* f96a0: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* f96a4: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* f96a8: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* f96ac: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1021616));
  arc_dispatch(c, ARC_X_R(c, 8));
L_f96b0:;
  /* f96b0: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f96b4: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f96b8: add x21, x19, x8 */
  ARC_X_W(c, 21, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f96bc: ldr w3, [x21, #0x90] */
  ARC_W_W(c, 3, arc_ld32((ARC_X_R(c, 21) + INT64_C(144))));
  /* f96c0: ldr x22, [x21, #0x28] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 21) + INT64_C(40))));
  /* f96c4: cmn w3, #1 */
  (void)arc_add32(c, ARC_W_R(c, 3), UINT64_C(1), 0);
  /* f96c8: b.ne #0xf9744 */
  if (ARC_COND(c, 1)) goto L_f9744;
  /* f96cc: ldr x23, [x21, #0x30] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 21) + INT64_C(48))));
  /* f96d0: cmp x23, x24 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 24));
  /* f96d4: stur x23, [x29, #-8] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-8)), ARC_X_R(c, 23));
  /* f96d8: b.eq #0xf96e8 */
  if (ARC_COND(c, 0)) goto L_f96e8;
  /* f96dc: add x1, x23, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 23) + UINT64_C(8)));
  /* f96e0: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* f96e4: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1021672));
  fn1_db2e0(c);
L_f96e8:;
  /* f96e8: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* f96ec: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* f96f0: ldr x1, [x1, #0xb58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(2904))));
  /* f96f4: bl #0x143748 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1021688));
  fn1_143748(c);
  /* f96f8: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* f96fc: ldr x8, [x8, #0x58] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(88))));
  /* f9700: mov w1, #0x20 */
  ARC_W_W(c, 1, UINT64_C(32));
  /* f9704: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1021704));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* f9708: mov w3, w0 */
  ARC_W_W(c, 3, ARC_W_R(c, 0));
  /* f970c: cmp x23, x24 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 24));
  /* f9710: b.eq #0xf9740 */
  if (ARC_COND(c, 0)) goto L_f9740;
  /* f9714: add x1, x23, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 23) + UINT64_C(8)));
  /* f9718: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* f971c: mov w24, w3 */
  ARC_W_W(c, 24, ARC_W_R(c, 3));
  /* f9720: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1021732));
  fn1_bd950(c);
  /* f9724: mov w3, w24 */
  ARC_W_W(c, 3, ARC_W_R(c, 24));
  /* f9728: cbnz x0, #0xf9740 */
  if ((ARC_X_R(c, 0)) != 0) goto L_f9740;
  /* f972c: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* f9730: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* f9734: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* f9738: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1021756));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* f973c: mov w3, w24 */
  ARC_W_W(c, 3, ARC_W_R(c, 24));
L_f9740:;
  /* f9740: str w3, [x21, #0x90] */
  arc_st32((ARC_X_R(c, 21) + INT64_C(144)), ARC_W_R(c, 3));
L_f9744:;
  /* f9744: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* f9748: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* f974c: ldr q0, [sp] */
  arc_q_w(c, 0, arc_ld64((c)->sp), arc_ld64((c)->sp + 8));
  /* f9750: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* f9754: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* f9758: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* f975c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1021792));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* f9760: cbnz x0, #0xf9788 */
  if ((ARC_X_R(c, 0)) != 0) goto L_f9788;
  /* f9764: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f9768: mov w10, #5 */
  ARC_W_W(c, 10, UINT64_C(5));
  /* f976c: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f9770: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f9774: ldp w9, w11, [x8, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 8) + INT64_C(32));
    ARC_W_W(c, 9, arc_ld32(_pa));
    ARC_W_W(c, 11, arc_ld32(_pa + 4));
  }
  /* f9778: orr w9, w9, w10 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | ARC_W_R(c, 10)));
  /* f977c: tst w11, w9 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 11) & ARC_W_R(c, 9)));
  /* f9780: str w9, [x8, #0x20] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(32)), ARC_W_R(c, 9));
  /* f9784: b.ne #0xf97b0 */
  if (ARC_COND(c, 1)) goto L_f97b0;
L_f9788:;
  /* f9788: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* f978c: bl #0x1436a0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1021840));
  fn1_1436a0(c);
L_f9790:;
  /* f9790: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f9794: ldp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* f9798: ldp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* f979c: ldp x24, x23, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* f97a0: ldp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* f97a4: add sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(112)));
  /* f97a8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* f97ac: ret  */
  return;
L_f97b0:;
  /* f97b0: nop  */
  /* nop: no architectural effect here */
  /* f97b4: adr x0, #0x50210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(328208)));
  /* f97b8: bl #0xec720 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1021884));
  fn1_ec720(c);
  /* f97bc: b #0xf97e8 */
  goto L_f97e8;
  /* f97c0: cmp x23, x24 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 24));
  /* f97c4: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* f97c8: b.eq #0xf981c */
  if (ARC_COND(c, 0)) goto L_f981c;
  /* f97cc: add x1, x23, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 23) + UINT64_C(8)));
  /* f97d0: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* f97d4: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1021912));
  fn1_bd950(c);
  /* f97d8: cbnz x0, #0xf981c */
  if ((ARC_X_R(c, 0)) != 0) goto L_f981c;
  /* f97dc: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* f97e0: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* f97e4: b #0xf9814 */
  goto L_f9814;
L_f97e8:;
  /* f97e8: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* f97ec: b #0xf981c */
  goto L_f981c;
  /* f97f0: cmp x21, x24 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 24));
  /* f97f4: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* f97f8: b.eq #0xf981c */
  if (ARC_COND(c, 0)) goto L_f981c;
  /* f97fc: add x1, x21, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(8)));
  /* f9800: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* f9804: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1021960));
  fn1_bd950(c);
  /* f9808: cbnz x0, #0xf981c */
  if ((ARC_X_R(c, 0)) != 0) goto L_f981c;
  /* f980c: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* f9810: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
L_f9814:;
  /* f9814: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* f9818: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1021980));
  arc_dispatch(c, ARC_X_R(c, 8));
L_f981c:;
  /* f981c: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* f9820: bl #0x1436a0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1021988));
  fn1_1436a0(c);
  /* f9824: b #0xf982c */
  goto L_f982c;
  /* f9828: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
L_f982c:;
  /* f982c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* f9830: bl #0x142548 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1022004));
  fn1_142548(c);
  /* f9834: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f9838: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f983c: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f9840: ldr w9, [x8, #0x20] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 8) + INT64_C(32))));
  /* f9844: ldrb w10, [x8, #0x24] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 8) + INT64_C(36))));
  /* f9848: orr w9, w9, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | UINT64_C(1)));
  /* f984c: str w9, [x8, #0x20] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(32)), ARC_W_R(c, 9));
  /* f9850: tbnz w10, #0, #0xf985c */
  if (((ARC_W_R(c, 10)) >> 0 & 1) != 0) goto L_f985c;
  /* f9854: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1022040));
  fn1_142980(c);
  /* f9858: b #0xf9790 */
  goto L_f9790;
L_f985c:;
  /* f985c: bl #0x1429b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1022048));
  fn1_1429b0(c);
  /* f9860: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f9864: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1022056));
  fn1_142980(c);
  /* f9868: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f986c: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1022064));
  fn1_9cc20(c);
  /* f9870: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1022068));
  fn1_a1454(c);
}

void fn1_fd984(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038966660));
  /* fd984: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* fd988: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* fd98c: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* fd990: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* fd994: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* fd998: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* fd99c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* fd9a0: ldr x8, [x8, #0xb28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2856))));
  /* fd9a4: add x9, x8, #0x18 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(24)));
  /* fd9a8: add x8, x8, #0x40 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(64)));
  /* fd9ac: str x9, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 9));
  }
  /* fd9b0: str x8, [x20, #0xb0]! */
  { const uint64_t _a = (ARC_X_R(c, 20) + INT64_C(176));
    ARC_X_W(c, 20, ARC_X_R(c, 20) + INT64_C(176));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* fd9b4: bl #0x1436d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1038776));
  fn1_1436d0(c);
  /* fd9b8: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* fd9bc: bl #0x1433b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1038784));
  fn1_1433b8(c);
  /* fd9c0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* fd9c4: mov w1, #0x148 */
  ARC_W_W(c, 1, UINT64_C(328));
  /* fd9c8: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* fd9cc: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* fd9d0: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* fd9d4: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_107300(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039005952));
  /* 107300: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 107304: stp x29, x30, [sp, #-0x60]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-96));
    (c)->sp = (c)->sp + INT64_C(-96);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 107308: stp x28, x27, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* 10730c: stp x26, x25, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* 107310: stp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 107314: stp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 107318: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 10731c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 107320: sub sp, sp, #0x1a0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(416)));
  /* 107324: mov x0, x3 */
  ARC_X_W(c, 0, ARC_X_R(c, 3));
  /* 107328: mov x21, x2 */
  ARC_X_W(c, 21, ARC_X_R(c, 2));
  /* 10732c: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 107330: sub x8, x29, #0x98 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(152)));
  /* 107334: sub x1, x29, #0x78 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(120)));
  /* 107338: sub x2, x29, #0x7c */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(124)));
  /* 10733c: sub x3, x29, #0x80 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) - UINT64_C(128)));
  /* 107340: stp x5, x4, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 5));
    arc_st64(_pa + 8, ARC_X_R(c, 4));
  }
  /* 107344: sub x25, x29, #0xb8 */
  ARC_X_W(c, 25, (ARC_X_R(c, 29) - UINT64_C(184)));
  /* 107348: bl #0x1438c8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1078092));
  fn1_1438c8(c);
  /* 10734c: stp xzr, xzr, [x25, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 25) + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 107350: str xzr, [x25, #0x18] */
  arc_st64((ARC_X_R(c, 25) + INT64_C(24)), ARC_X_R(c, 31));
  /* 107354: sub x0, x29, #0xb0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(176)));
  /* 107358: mov w1, #0x16 */
  ARC_W_W(c, 1, UINT64_C(22));
  /* 10735c: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 107360: sub x20, x29, #0xb0 */
  ARC_X_W(c, 20, (ARC_X_R(c, 29) - UINT64_C(176)));
  /* 107364: bl #0x142d10 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1078120));
  fn1_142d10(c);
  /* 107368: ldurb w8, [x29, #-0xb0] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-176))));
  /* 10736c: ldr x9, [x25, #0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 25) + INT64_C(24))));
  /* 107370: mov w26, wzr */
  ARC_W_W(c, 26, ARC_W_R(c, 31));
  /* 107374: add x27, sp, #0x48 */
  ARC_X_W(c, 27, ((c)->sp + UINT64_C(72)));
  /* 107378: mov w10, #1 */
  ARC_W_W(c, 10, UINT64_C(1));
  /* 10737c: orr x28, x20, #1 */
  ARC_X_W(c, 28, (ARC_X_R(c, 20) | UINT64_C(1)));
  /* 107380: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 107384: mov w8, #0x45 */
  ARC_W_W(c, 8, UINT64_C(69));
  /* 107388: add x22, sp, #0x40 */
  ARC_X_W(c, 22, ((c)->sp + UINT64_C(64)));
  /* 10738c: csinc x23, x9, x20, ne */
  ARC_X_W(c, 23, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 20)) + 1)));
  /* 107390: add x20, sp, #0x3c */
  ARC_X_W(c, 20, ((c)->sp + UINT64_C(60)));
  /* 107394: str wzr, [sp, #0x3c] */
  arc_st32(((c)->sp + INT64_C(60)), ARC_W_R(c, 31));
  /* 107398: str x27, [sp, #0x40] */
  arc_st64(((c)->sp + INT64_C(64)), ARC_X_R(c, 27));
  /* 10739c: strb w10, [sp, #0x38] */
  arc_st8(((c)->sp + INT64_C(56)), ARC_W_R(c, 10));
  /* 1073a0: strb w8, [sp, #0x34] */
  arc_st8(((c)->sp + INT64_C(52)), ARC_W_R(c, 8));
  /* 1073a4: str x23, [x25] */
  arc_st64(ARC_X_R(c, 25), ARC_X_R(c, 23));
  /* 1073a8: b #0x1073b4 */
  goto L_1073b4;
L_1073ac:;
  /* 1073ac: add x8, x8, #4 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(4)));
  /* 1073b0: str x8, [x19, #0x18] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(24)), ARC_X_R(c, 8));
L_1073b4:;
  /* 1073b4: cbz x19, #0x1073cc */
  if ((ARC_X_R(c, 19)) == 0) goto L_1073cc;
  /* 1073b8: ldp x8, x9, [x19, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 1073bc: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 1073c0: b.eq #0x1073d8 */
  if (ARC_COND(c, 0)) goto L_1073d8;
  /* 1073c4: ldr w0, [x8] */
  ARC_W_W(c, 0, arc_ld32(ARC_X_R(c, 8)));
  /* 1073c8: b #0x1073e8 */
  goto L_1073e8;
L_1073cc:;
  /* 1073cc: cbz x21, #0x107614 */
  if ((ARC_X_R(c, 21)) == 0) goto L_107614;
  /* 1073d0: mov w24, #1 */
  ARC_W_W(c, 24, UINT64_C(1));
  /* 1073d4: b #0x1073fc */
  goto L_1073fc;
L_1073d8:;
  /* 1073d8: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 1073dc: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 1073e0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1073e4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1078248));
  arc_dispatch(c, ARC_X_R(c, 8));
L_1073e8:;
  /* 1073e8: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 1073ec: cset w24, eq */
  ARC_W_W(c, 24, (ARC_COND(c, 0) ? 1 : 0));
  /* 1073f0: csel x8, xzr, x19, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 19)));
  /* 1073f4: cbz x21, #0x107438 */
  if ((ARC_X_R(c, 21)) == 0) goto L_107438;
  /* 1073f8: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
L_1073fc:;
  /* 1073fc: ldp x8, x9, [x21, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 107400: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 107404: b.eq #0x107410 */
  if (ARC_COND(c, 0)) goto L_107410;
  /* 107408: ldr w0, [x8] */
  ARC_W_W(c, 0, arc_ld32(ARC_X_R(c, 8)));
  /* 10740c: b #0x107420 */
  goto L_107420;
L_107410:;
  /* 107410: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 107414: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 107418: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 10741c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1078304));
  arc_dispatch(c, ARC_X_R(c, 8));
L_107420:;
  /* 107420: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 107424: cset w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? 1 : 0));
  /* 107428: csel x21, xzr, x21, eq */
  ARC_X_W(c, 21, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 21)));
  /* 10742c: cmp w24, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 24), ARC_W_R(c, 8));
  /* 107430: b.ne #0x107440 */
  if (ARC_COND(c, 1)) goto L_107440;
  /* 107434: b #0x107620 */
  goto L_107620;
L_107438:;
  /* 107438: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 10743c: b.eq #0x10761c */
  if (ARC_COND(c, 0)) goto L_10761c;
L_107440:;
  /* 107440: ldurb w8, [x29, #-0xb0] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-176))));
  /* 107444: ldr x9, [x25, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 25) + INT64_C(16))));
  /* 107448: ldr x11, [x25] */
  ARC_X_W(c, 11, arc_ld64(ARC_X_R(c, 25)));
  /* 10744c: lsr x10, x8, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* 107450: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 107454: csel x24, x10, x9, eq */
  ARC_X_W(c, 24, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* 107458: add x9, x23, x24 */
  ARC_X_W(c, 9, (ARC_X_R(c, 23) + ARC_X_R(c, 24)));
  /* 10745c: cmp x11, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 9));
  /* 107460: b.ne #0x10751c */
  if (ARC_COND(c, 1)) goto L_10751c;
  /* 107464: cmp x24, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 24), UINT64_C(1));
  /* 107468: b.lt #0x107480 */
  if (ARC_COND(c, 11)) goto L_107480;
  /* 10746c: sub x0, x29, #0xb0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(176)));
  /* 107470: mov x1, x24 */
  ARC_X_W(c, 1, ARC_X_R(c, 24));
  /* 107474: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 107478: bl #0x142d10 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1078396));
  fn1_142d10(c);
  /* 10747c: b #0x1074a4 */
  goto L_1074a4;
L_107480:;
  /* 107480: lsl x9, x24, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 24)) << ((UINT64_C(1)) & 63)));
  /* 107484: tbnz w8, #0, #0x107498 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_107498;
  /* 107488: lsl w8, w9, #1 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 9)) << ((UINT64_C(1)) & 31)));
  /* 10748c: sturb w8, [x29, #-0xb0] */
  arc_st8((ARC_X_R(c, 29) + INT64_C(-176)), ARC_W_R(c, 8));
  /* 107490: mov x8, x28 */
  ARC_X_W(c, 8, ARC_X_R(c, 28));
  /* 107494: b #0x1074a0 */
  goto L_1074a0;
L_107498:;
  /* 107498: ldr x8, [x25, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 25) + INT64_C(24))));
  /* 10749c: str x9, [x25, #0x10] */
  arc_st64((ARC_X_R(c, 25) + INT64_C(16)), ARC_X_R(c, 9));
L_1074a0:;
  /* 1074a0: strb wzr, [x8, x9] */
  arc_st8((ARC_X_R(c, 8) + ARC_X_R(c, 9)), ARC_W_R(c, 31));
L_1074a4:;
  /* 1074a4: ldp x9, x10, [x25, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 25) + INT64_C(8));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* 1074a8: ldurb w8, [x29, #-0xb0] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-176))));
  /* 1074ac: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 1074b0: mov w8, #0x16 */
  ARC_W_W(c, 8, UINT64_C(22));
  /* 1074b4: and x11, x9, #0xfffffffffffffffe */
  ARC_X_W(c, 11, (ARC_X_R(c, 9) & UINT64_C(18446744073709551614)));
  /* 1074b8: ubfx x12, x9, #1, #7 */
  ARC_X_W(c, 12, (((uint64_t)(ARC_X_R(c, 9)) >> 1) & UINT64_C(127)));
  /* 1074bc: sub x11, x11, #1 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) - UINT64_C(1)));
  /* 1074c0: csel x8, x8, x11, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 11)));
  /* 1074c4: tst x9, #1 */
  arc_flags_logical64(c, (uint64_t)(ARC_X_R(c, 9) & UINT64_C(1)));
  /* 1074c8: csel x10, x12, x10, eq */
  ARC_X_W(c, 10, (ARC_COND(c, 0) ? (ARC_X_R(c, 12)) : ARC_X_R(c, 10)));
  /* 1074cc: subs x1, x8, x10 */
  ARC_X_W(c, 1, arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10)));
  /* 1074d0: b.ls #0x1074e4 */
  if (ARC_COND(c, 9)) goto L_1074e4;
  /* 1074d4: sub x0, x29, #0xb0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(176)));
  /* 1074d8: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1074dc: bl #0x142d10 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1078496));
  fn1_142d10(c);
  /* 1074e0: b #0x107504 */
  goto L_107504;
L_1074e4:;
  /* 1074e4: tbnz w9, #0, #0x1074f8 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) != 0) goto L_1074f8;
  /* 1074e8: lsl w9, w8, #1 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 8)) << ((UINT64_C(1)) & 31)));
  /* 1074ec: sturb w9, [x29, #-0xb0] */
  arc_st8((ARC_X_R(c, 29) + INT64_C(-176)), ARC_W_R(c, 9));
  /* 1074f0: mov x9, x28 */
  ARC_X_W(c, 9, ARC_X_R(c, 28));
  /* 1074f4: b #0x107500 */
  goto L_107500;
L_1074f8:;
  /* 1074f8: ldr x9, [x25, #0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 25) + INT64_C(24))));
  /* 1074fc: str x8, [x25, #0x10] */
  arc_st64((ARC_X_R(c, 25) + INT64_C(16)), ARC_X_R(c, 8));
L_107500:;
  /* 107500: strb wzr, [x9, x8] */
  arc_st8((ARC_X_R(c, 9) + ARC_X_R(c, 8)), ARC_W_R(c, 31));
L_107504:;
  /* 107504: ldurb w8, [x29, #-0xb0] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-176))));
  /* 107508: ldr x9, [x25, #0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 25) + INT64_C(24))));
  /* 10750c: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 107510: csel x23, x28, x9, eq */
  ARC_X_W(c, 23, (ARC_COND(c, 0) ? (ARC_X_R(c, 28)) : ARC_X_R(c, 9)));
  /* 107514: add x8, x23, x24 */
  ARC_X_W(c, 8, (ARC_X_R(c, 23) + ARC_X_R(c, 24)));
  /* 107518: str x8, [x25] */
  arc_st64(ARC_X_R(c, 25), ARC_X_R(c, 8));
L_10751c:;
  /* 10751c: ldp x8, x9, [x19, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 107520: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 107524: b.eq #0x107530 */
  if (ARC_COND(c, 0)) goto L_107530;
  /* 107528: ldr w0, [x8] */
  ARC_W_W(c, 0, arc_ld32(ARC_X_R(c, 8)));
  /* 10752c: b #0x107540 */
  goto L_107540;
L_107530:;
  /* 107530: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 107534: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 107538: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 10753c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1078592));
  arc_dispatch(c, ARC_X_R(c, 8));
L_107540:;
  /* 107540: ldp w6, w5, [x29, #-0x80] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-128));
    ARC_W_W(c, 6, arc_ld32(_pa));
    ARC_W_W(c, 5, arc_ld32(_pa + 4));
  }
  /* 107544: add x1, sp, #0x38 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(56)));
  /* 107548: sub x8, x29, #0x78 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(120)));
  /* 10754c: add x2, sp, #0x34 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(52)));
  /* 107550: sub x4, x29, #0xb8 */
  ARC_X_W(c, 4, (ARC_X_R(c, 29) - UINT64_C(184)));
  /* 107554: sub x7, x29, #0x98 */
  ARC_X_W(c, 7, (ARC_X_R(c, 29) - UINT64_C(152)));
  /* 107558: mov x3, x23 */
  ARC_X_W(c, 3, ARC_X_R(c, 23));
  /* 10755c: stp x20, x8, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* 107560: stp x27, x22, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 27));
    arc_st64(_pa + 8, ARC_X_R(c, 22));
  }
  /* 107564: bl #0x1438e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1078632));
  fn1_1438e0(c);
  /* 107568: cbnz w0, #0x107620 */
  if ((ARC_W_R(c, 0)) != 0) goto L_107620;
  /* 10756c: tbz w26, #0, #0x107578 */
  if (((ARC_W_R(c, 26)) >> 0 & 1) == 0) goto L_107578;
  /* 107570: mov w26, #1 */
  ARC_W_W(c, 26, UINT64_C(1));
  /* 107574: b #0x1075d8 */
  goto L_1075d8;
L_107578:;
  /* 107578: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 10757c: sub x9, x8, x23 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - ARC_X_R(c, 23)));
  /* 107580: cmp x9, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(1));
  /* 107584: b.lt #0x1075d4 */
  if (ARC_COND(c, 11)) goto L_1075d4;
  /* 107588: ldrb w8, [x23] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 23)));
  /* 10758c: cmp w8, #0x2b */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(43));
  /* 107590: b.eq #0x10759c */
  if (ARC_COND(c, 0)) goto L_10759c;
  /* 107594: cmp w8, #0x2d */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(45));
  /* 107598: b.ne #0x1075f8 */
  if (ARC_COND(c, 1)) goto L_1075f8;
L_10759c:;
  /* 10759c: cmp x9, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(1));
  /* 1075a0: b.eq #0x1075d4 */
  if (ARC_COND(c, 0)) goto L_1075d4;
  /* 1075a4: cmp w8, #0x2d */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(45));
  /* 1075a8: b.eq #0x1075b4 */
  if (ARC_COND(c, 0)) goto L_1075b4;
  /* 1075ac: cmp w8, #0x2b */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(43));
  /* 1075b0: b.ne #0x1075d4 */
  if (ARC_COND(c, 1)) goto L_1075d4;
L_1075b4:;
  /* 1075b4: ldrb w8, [x23, #1] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 23) + INT64_C(1))));
  /* 1075b8: mov w26, #1 */
  ARC_W_W(c, 26, UINT64_C(1));
  /* 1075bc: cmp w8, #0x2e */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(46));
  /* 1075c0: b.eq #0x1075d8 */
  if (ARC_COND(c, 0)) goto L_1075d8;
  /* 1075c4: sub w8, w8, #0x30 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) - UINT64_C(48)));
  /* 1075c8: cmp w8, #9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(9));
  /* 1075cc: b.ls #0x1075d8 */
  if (ARC_COND(c, 9)) goto L_1075d8;
  /* 1075d0: b #0x107620 */
  goto L_107620;
L_1075d4:;
  /* 1075d4: mov w26, wzr */
  ARC_W_W(c, 26, ARC_W_R(c, 31));
L_1075d8:;
  /* 1075d8: ldp x8, x9, [x19, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 1075dc: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 1075e0: b.ne #0x1073ac */
  if (ARC_COND(c, 1)) goto L_1073ac;
  /* 1075e4: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 1075e8: ldr x8, [x8, #0x50] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(80))));
  /* 1075ec: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1075f0: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1078772));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1075f4: b #0x1073b4 */
  goto L_1073b4;
L_1075f8:;
  /* 1075f8: cmp w8, #0x2e */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(46));
  /* 1075fc: mov w26, #1 */
  ARC_W_W(c, 26, UINT64_C(1));
  /* 107600: b.eq #0x1075d8 */
  if (ARC_COND(c, 0)) goto L_1075d8;
  /* 107604: sub w8, w8, #0x30 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) - UINT64_C(48)));
  /* 107608: cmp w8, #0xa */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(10));
  /* 10760c: b.lo #0x1075d8 */
  if (ARC_COND(c, 3)) goto L_1075d8;
  /* 107610: b #0x107620 */
  goto L_107620;
L_107614:;
  /* 107614: mov x21, x19 */
  ARC_X_W(c, 21, ARC_X_R(c, 19));
  /* 107618: b #0x107620 */
  goto L_107620;
L_10761c:;
  /* 10761c: mov x19, x21 */
  ARC_X_W(c, 19, ARC_X_R(c, 21));
L_107620:;
  /* 107620: ldurb w8, [x29, #-0x98] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-152))));
  /* 107624: ldr x9, [x25, #0x28] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 25) + INT64_C(40))));
  /* 107628: ldr x22, [sp, #0x28] */
  ARC_X_W(c, 22, arc_ld64(((c)->sp + INT64_C(40))));
  /* 10762c: lsr x10, x8, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* 107630: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 107634: csel x8, x10, x9, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* 107638: cbz x8, #0x107668 */
  if ((ARC_X_R(c, 8)) == 0) goto L_107668;
  /* 10763c: ldrb w8, [sp, #0x38] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(56))));
  /* 107640: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* 107644: b.ne #0x107668 */
  if (ARC_COND(c, 1)) goto L_107668;
  /* 107648: ldr x8, [sp, #0x40] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(64))));
  /* 10764c: add x9, sp, #0x48 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(72)));
  /* 107650: sub x9, x8, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - ARC_X_R(c, 9)));
  /* 107654: cmp x9, #0x9f */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(159));
  /* 107658: b.gt #0x107668 */
  if (ARC_COND(c, 12)) goto L_107668;
  /* 10765c: ldr w9, [sp, #0x3c] */
  ARC_W_W(c, 9, arc_ld32(((c)->sp + INT64_C(60))));
  /* 107660: str w9, [x8], #4 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(4));
    arc_st32(_a, ARC_W_R(c, 9));
  }
  /* 107664: str x8, [sp, #0x40] */
  arc_st64(((c)->sp + INT64_C(64)), ARC_X_R(c, 8));
L_107668:;
  /* 107668: ldr x1, [x25] */
  ARC_X_W(c, 1, arc_ld64(ARC_X_R(c, 25)));
  /* 10766c: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 107670: mov x2, x22 */
  ARC_X_W(c, 2, ARC_X_R(c, 22));
  /* 107674: bl #0x13612c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1078904));
  fn1_13612c(c);
  /* 107678: ldurb w10, [x29, #-0x98] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 29) + INT64_C(-152))));
  /* 10767c: ldr x12, [sp, #0x40] */
  ARC_X_W(c, 12, arc_ld64(((c)->sp + INT64_C(64))));
  /* 107680: add x11, sp, #0x48 */
  ARC_X_W(c, 11, ((c)->sp + UINT64_C(72)));
  /* 107684: ldr x8, [x25, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 25) + INT64_C(40))));
  /* 107688: lsr x9, x10, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 10)) >> ((UINT64_C(1)) & 63)));
  /* 10768c: ands w13, w10, #1 */
  { uint32_t _r = (uint32_t)(ARC_W_R(c, 10) & UINT64_C(1));
    arc_flags_logical32(c, _r);
    ARC_W_W(c, 13, _r); }
  /* 107690: sub x11, x12, x11 */
  ARC_X_W(c, 11, (ARC_X_R(c, 12) - ARC_X_R(c, 11)));
  /* 107694: csel x8, x9, x8, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* 107698: ldr x9, [sp, #0x20] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(32))));
  /* 10769c: cmp x11, #5 */
  (void)arc_sub64(c, ARC_X_R(c, 11), UINT64_C(5));
  /* 1076a0: str s0, [x9] */
  arc_st32(ARC_X_R(c, 9), (c)->q[0].u32[0]);
  /* 1076a4: b.lt #0x107804 */
  if (ARC_COND(c, 11)) goto L_107804;
  /* 1076a8: cbz x8, #0x107804 */
  if ((ARC_X_R(c, 8)) == 0) goto L_107804;
  /* 1076ac: sub x8, x12, #4 */
  ARC_X_W(c, 8, (ARC_X_R(c, 12) - UINT64_C(4)));
  /* 1076b0: add x9, sp, #0x48 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(72)));
  /* 1076b4: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* 1076b8: cset w11, lo */
  ARC_W_W(c, 11, (ARC_COND(c, 3) ? 1 : 0));
  /* 1076bc: cmp x9, x12 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 12));
  /* 1076c0: b.eq #0x107770 */
  if (ARC_COND(c, 0)) goto L_107770;
  /* 1076c4: cbz w11, #0x107770 */
  if ((ARC_W_R(c, 11)) == 0) goto L_107770;
  /* 1076c8: add x10, sp, #0x48 */
  ARC_X_W(c, 10, ((c)->sp + UINT64_C(72)));
  /* 1076cc: sub x14, x12, #8 */
  ARC_X_W(c, 14, (ARC_X_R(c, 12) - UINT64_C(8)));
  /* 1076d0: add x11, x10, #4 */
  ARC_X_W(c, 11, (ARC_X_R(c, 10) + UINT64_C(4)));
  /* 1076d4: cmp x14, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 14), ARC_X_R(c, 11));
  /* 1076d8: csel x13, x14, x11, hi */
  ARC_X_W(c, 13, (ARC_COND(c, 8) ? (ARC_X_R(c, 14)) : ARC_X_R(c, 11)));
  /* 1076dc: sub x13, x13, #4 */
  ARC_X_W(c, 13, (ARC_X_R(c, 13) - UINT64_C(4)));
  /* 1076e0: cmp x13, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 13), ARC_X_R(c, 10));
  /* 1076e4: cinc x15, x10, ne */
  ARC_X_W(c, 15, (ARC_COND(c, 1) ? (ARC_X_R(c, 10)) + 1 : (ARC_X_R(c, 10))));
  /* 1076e8: cmp x13, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 13), ARC_X_R(c, 10));
  /* 1076ec: sub x15, x13, x15 */
  ARC_X_W(c, 15, (ARC_X_R(c, 13) - ARC_X_R(c, 15)));
  /* 1076f0: lsr x15, x15, #3 */
  ARC_X_W(c, 15, ((uint64_t)(ARC_X_R(c, 15)) >> ((UINT64_C(3)) & 63)));
  /* 1076f4: cinc x13, x15, ne */
  ARC_X_W(c, 13, (ARC_COND(c, 1) ? (ARC_X_R(c, 15)) + 1 : (ARC_X_R(c, 15))));
  /* 1076f8: cmp x13, #0x13 */
  (void)arc_sub64(c, ARC_X_R(c, 13), UINT64_C(19));
  /* 1076fc: b.lo #0x107744 */
  if (ARC_COND(c, 3)) goto L_107744;
  /* 107700: cmp x14, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 14), ARC_X_R(c, 11));
  /* 107704: csel x14, x14, x11, hi */
  ARC_X_W(c, 14, (ARC_COND(c, 8) ? (ARC_X_R(c, 14)) : ARC_X_R(c, 11)));
  /* 107708: sub x14, x14, #4 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) - UINT64_C(4)));
  /* 10770c: cmp x14, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 14), ARC_X_R(c, 10));
  /* 107710: cinc x15, x10, ne */
  ARC_X_W(c, 15, (ARC_COND(c, 1) ? (ARC_X_R(c, 10)) + 1 : (ARC_X_R(c, 10))));
  /* 107714: cmp x14, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 14), ARC_X_R(c, 10));
  /* 107718: sub x15, x14, x15 */
  ARC_X_W(c, 15, (ARC_X_R(c, 14) - ARC_X_R(c, 15)));
  /* 10771c: lsr x15, x15, #3 */
  ARC_X_W(c, 15, ((uint64_t)(ARC_X_R(c, 15)) >> ((UINT64_C(3)) & 63)));
  /* 107720: cinc x14, x15, ne */
  ARC_X_W(c, 14, (ARC_COND(c, 1) ? (ARC_X_R(c, 15)) + 1 : (ARC_X_R(c, 15))));
  /* 107724: cmp x10, x12 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 12));
  /* 107728: b.hs #0x1078f4 */
  if (ARC_COND(c, 2)) goto L_1078f4;
  /* 10772c: lsl x14, x14, #2 */
  ARC_X_W(c, 14, ((uint64_t)(ARC_X_R(c, 14)) << ((UINT64_C(2)) & 63)));
  /* 107730: sub x15, x12, x14 */
  ARC_X_W(c, 15, (ARC_X_R(c, 12) - ARC_X_R(c, 14)));
  /* 107734: add x11, x11, x14 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) + ARC_X_R(c, 14)));
  /* 107738: sub x14, x15, #4 */
  ARC_X_W(c, 14, (ARC_X_R(c, 15) - UINT64_C(4)));
  /* 10773c: cmp x14, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 14), ARC_X_R(c, 11));
  /* 107740: b.hs #0x1078f4 */
  if (ARC_COND(c, 2)) goto L_1078f4;
L_107744:;
  /* 107744: mov x11, x8 */
  ARC_X_W(c, 11, ARC_X_R(c, 8));
L_107748:;
  /* 107748: add x10, x10, #4 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(4)));
L_10774c:;
  /* 10774c: ldr w12, [x11] */
  ARC_W_W(c, 12, arc_ld32(ARC_X_R(c, 11)));
  /* 107750: ldur w13, [x10, #-4] */
  ARC_W_W(c, 13, arc_ld32((ARC_X_R(c, 10) + INT64_C(-4))));
  /* 107754: stur w12, [x10, #-4] */
  arc_st32((ARC_X_R(c, 10) + INT64_C(-4)), ARC_W_R(c, 12));
  /* 107758: str w13, [x11], #0xfffffffffffffffc */
  { const uint64_t _a = ARC_X_R(c, 11);
    ARC_X_W(c, 11, ARC_X_R(c, 11) + INT64_C(-4));
    arc_st32(_a, ARC_W_R(c, 13));
  }
  /* 10775c: cmp x10, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 11));
  /* 107760: add x10, x10, #4 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(4)));
  /* 107764: b.lo #0x10774c */
  if (ARC_COND(c, 3)) goto L_10774c;
L_107768:;
  /* 107768: ldurb w10, [x29, #-0x98] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 29) + INT64_C(-152))));
  /* 10776c: and w13, w10, #1 */
  ARC_W_W(c, 13, (ARC_W_R(c, 10) & UINT64_C(1)));
L_107770:;
  /* 107770: ldr x11, [x25, #0x30] */
  ARC_X_W(c, 11, arc_ld64((ARC_X_R(c, 25) + INT64_C(48))));
  /* 107774: cmp w13, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 13), UINT64_C(0));
  /* 107778: sub x12, x29, #0x98 */
  ARC_X_W(c, 12, (ARC_X_R(c, 29) - UINT64_C(152)));
  /* 10777c: csinc x11, x11, x12, ne */
  ARC_X_W(c, 11, (ARC_COND(c, 1) ? (ARC_X_R(c, 11)) : ((ARC_X_R(c, 12)) + 1)));
  /* 107780: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* 107784: b.hs #0x1077dc */
  if (ARC_COND(c, 2)) goto L_1077dc;
  /* 107788: lsr w9, w10, #1 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 10)) >> ((UINT64_C(1)) & 31)));
  /* 10778c: ldr x10, [x25, #0x28] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 25) + INT64_C(40))));
  /* 107790: cmp w13, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 13), UINT64_C(0));
  /* 107794: csel x9, x9, x10, eq */
  ARC_X_W(c, 9, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 10)));
  /* 107798: add x10, sp, #0x48 */
  ARC_X_W(c, 10, ((c)->sp + UINT64_C(72)));
  /* 10779c: add x9, x11, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 11) + ARC_X_R(c, 9)));
  /* 1077a0: b #0x1077bc */
  goto L_1077bc;
L_1077a4:;
  /* 1077a4: sub x12, x9, x11 */
  ARC_X_W(c, 12, (ARC_X_R(c, 9) - ARC_X_R(c, 11)));
  /* 1077a8: add x10, x10, #4 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(4)));
  /* 1077ac: cmp x12, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 12), UINT64_C(1));
  /* 1077b0: cinc x11, x11, gt */
  ARC_X_W(c, 11, (ARC_COND(c, 12) ? (ARC_X_R(c, 11)) + 1 : (ARC_X_R(c, 11))));
  /* 1077b4: cmp x10, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 8));
  /* 1077b8: b.hs #0x1077dc */
  if (ARC_COND(c, 2)) goto L_1077dc;
L_1077bc:;
  /* 1077bc: ldrb w12, [x11] */
  ARC_W_W(c, 12, arc_ld8(ARC_X_R(c, 11)));
  /* 1077c0: cbz w12, #0x1077a4 */
  if ((ARC_W_R(c, 12)) == 0) goto L_1077a4;
  /* 1077c4: cmp w12, #0xff */
  (void)arc_sub32(c, ARC_W_R(c, 12), UINT64_C(255));
  /* 1077c8: b.eq #0x1077a4 */
  if (ARC_COND(c, 0)) goto L_1077a4;
  /* 1077cc: ldr w13, [x10] */
  ARC_W_W(c, 13, arc_ld32(ARC_X_R(c, 10)));
  /* 1077d0: cmp w13, w12 */
  (void)arc_sub32(c, ARC_W_R(c, 13), ARC_W_R(c, 12));
  /* 1077d4: b.eq #0x1077a4 */
  if (ARC_COND(c, 0)) goto L_1077a4;
  /* 1077d8: b #0x1077fc */
  goto L_1077fc;
L_1077dc:;
  /* 1077dc: ldrb w9, [x11] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 11)));
  /* 1077e0: cbz w9, #0x107804 */
  if ((ARC_W_R(c, 9)) == 0) goto L_107804;
  /* 1077e4: cmp w9, #0xff */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(255));
  /* 1077e8: b.eq #0x107804 */
  if (ARC_COND(c, 0)) goto L_107804;
  /* 1077ec: ldr w8, [x8] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 8)));
  /* 1077f0: sub w8, w8, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) - UINT64_C(1)));
  /* 1077f4: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* 1077f8: b.lo #0x107804 */
  if (ARC_COND(c, 3)) goto L_107804;
L_1077fc:;
  /* 1077fc: mov w8, #4 */
  ARC_W_W(c, 8, UINT64_C(4));
  /* 107800: str w8, [x22] */
  arc_st32(ARC_X_R(c, 22), ARC_W_R(c, 8));
L_107804:;
  /* 107804: cbz x19, #0x10781c */
  if ((ARC_X_R(c, 19)) == 0) goto L_10781c;
  /* 107808: ldp x8, x9, [x19, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 10780c: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 107810: b.eq #0x107828 */
  if (ARC_COND(c, 0)) goto L_107828;
  /* 107814: ldr w0, [x8] */
  ARC_W_W(c, 0, arc_ld32(ARC_X_R(c, 8)));
  /* 107818: b #0x107838 */
  goto L_107838;
L_10781c:;
  /* 10781c: cbz x21, #0x107890 */
  if ((ARC_X_R(c, 21)) == 0) goto L_107890;
  /* 107820: mov w20, #1 */
  ARC_W_W(c, 20, UINT64_C(1));
  /* 107824: b #0x10784c */
  goto L_10784c;
L_107828:;
  /* 107828: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 10782c: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 107830: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 107834: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1079352));
  arc_dispatch(c, ARC_X_R(c, 8));
L_107838:;
  /* 107838: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 10783c: cset w20, eq */
  ARC_W_W(c, 20, (ARC_COND(c, 0) ? 1 : 0));
  /* 107840: csel x8, xzr, x19, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 19)));
  /* 107844: cbz x21, #0x107884 */
  if ((ARC_X_R(c, 21)) == 0) goto L_107884;
  /* 107848: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
L_10784c:;
  /* 10784c: ldp x8, x9, [x21, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 107850: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 107854: b.eq #0x107860 */
  if (ARC_COND(c, 0)) goto L_107860;
  /* 107858: ldr w0, [x8] */
  ARC_W_W(c, 0, arc_ld32(ARC_X_R(c, 8)));
  /* 10785c: b #0x107870 */
  goto L_107870;
L_107860:;
  /* 107860: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 107864: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 107868: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 10786c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1079408));
  arc_dispatch(c, ARC_X_R(c, 8));
L_107870:;
  /* 107870: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 107874: cset w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? 1 : 0));
  /* 107878: eor w8, w20, w8 */
  ARC_W_W(c, 8, (ARC_W_R(c, 20) ^ ARC_W_R(c, 8)));
  /* 10787c: tbz w8, #0, #0x107890 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_107890;
  /* 107880: b #0x10789c */
  goto L_10789c;
L_107884:;
  /* 107884: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 107888: b.ne #0x10789c */
  if (ARC_COND(c, 1)) goto L_10789c;
  /* 10788c: mov x19, xzr */
  ARC_X_W(c, 19, ARC_X_R(c, 31));
L_107890:;
  /* 107890: ldr w8, [x22] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 22)));
  /* 107894: orr w8, w8, #2 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | UINT64_C(2)));
  /* 107898: str w8, [x22] */
  arc_st32(ARC_X_R(c, 22), ARC_W_R(c, 8));
L_10789c:;
  /* 10789c: ldurb w8, [x29, #-0xb0] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-176))));
  /* 1078a0: tbz w8, #0, #0x1078b4 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1078b4;
  /* 1078a4: ldr x8, [x25, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 25) + INT64_C(8))));
  /* 1078a8: ldr x0, [x25, #0x18] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 25) + INT64_C(24))));
  /* 1078ac: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 1078b0: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1079476));
  fn1_142608(c);
L_1078b4:;
  /* 1078b4: ldurb w8, [x29, #-0x98] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-152))));
  /* 1078b8: tbz w8, #0, #0x1078cc */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1078cc;
  /* 1078bc: ldr x8, [x25, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 25) + INT64_C(32))));
  /* 1078c0: ldr x0, [x25, #0x30] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 25) + INT64_C(48))));
  /* 1078c4: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 1078c8: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1079500));
  fn1_142608(c);
L_1078cc:;
  /* 1078cc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1078d0: add sp, sp, #0x1a0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(416)));
  /* 1078d4: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1078d8: ldp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1078dc: ldp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 1078e0: ldp x26, x25, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* 1078e4: ldp x28, x27, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* 1078e8: ldp x29, x30, [sp], #0x60 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(96);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1078ec: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 1078f0: ret  */
  return;
L_1078f4:;
  /* 1078f4: add x13, x13, #1 */
  ARC_X_W(c, 13, (ARC_X_R(c, 13) + UINT64_C(1)));
  /* 1078f8: add x15, sp, #0x48 */
  ARC_X_W(c, 15, ((c)->sp + UINT64_C(72)));
  /* 1078fc: sub x12, x12, #0x10 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) - UINT64_C(16)));
  /* 107900: and x14, x13, #0x7ffffffffffffff8 */
  ARC_X_W(c, 14, (ARC_X_R(c, 13) & UINT64_C(9223372036854775800)));
  /* 107904: lsl x10, x14, #2 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 14)) << ((UINT64_C(2)) & 63)));
  /* 107908: mov x16, x14 */
  ARC_X_W(c, 16, ARC_X_R(c, 14));
  /* 10790c: sub x11, x8, x10 */
  ARC_X_W(c, 11, (ARC_X_R(c, 8) - ARC_X_R(c, 10)));
  /* 107910: add x10, x15, x10 */
  ARC_X_W(c, 10, (ARC_X_R(c, 15) + ARC_X_R(c, 10)));
  /* 107914: add x15, x15, #0x10 */
  ARC_X_W(c, 15, (ARC_X_R(c, 15) + UINT64_C(16)));
L_107918:;
  /* 107918: ldp q1, q0, [x12, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 12) + INT64_C(-16));
    arc_q_w(c, 1, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 0, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* 10791c: sub x16, x16, #8 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) - UINT64_C(8)));
  /* 107920: ldp q2, q3, [x15, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 15) + INT64_C(-16));
    arc_q_w(c, 2, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 3, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* 107924: rev64 v0.4s, v0.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[0].u32[1];
    _t.u32[1] = (c)->q[0].u32[0];
    _t.u32[2] = (c)->q[0].u32[3];
    _t.u32[3] = (c)->q[0].u32[2];
    (c)->q[0] = _t; }
  /* 107928: rev64 v1.4s, v1.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[1].u32[1];
    _t.u32[1] = (c)->q[1].u32[0];
    _t.u32[2] = (c)->q[1].u32[3];
    _t.u32[3] = (c)->q[1].u32[2];
    (c)->q[1] = _t; }
  /* 10792c: rev64 v2.4s, v2.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[2].u32[1];
    _t.u32[1] = (c)->q[2].u32[0];
    _t.u32[2] = (c)->q[2].u32[3];
    _t.u32[3] = (c)->q[2].u32[2];
    (c)->q[2] = _t; }
  /* 107930: rev64 v3.4s, v3.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[3].u32[1];
    _t.u32[1] = (c)->q[3].u32[0];
    _t.u32[2] = (c)->q[3].u32[3];
    _t.u32[3] = (c)->q[3].u32[2];
    (c)->q[3] = _t; }
  /* 107934: ext v0.16b, v0.16b, v0.16b, #8 */
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
  /* 107938: ext v1.16b, v1.16b, v1.16b, #8 */
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
  /* 10793c: ext v2.16b, v2.16b, v2.16b, #8 */
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
  /* 107940: ext v3.16b, v3.16b, v3.16b, #8 */
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
  /* 107944: stp q0, q1, [x15, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 15) + INT64_C(-16));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[1].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[1].u64[1]);
  }
  /* 107948: add x15, x15, #0x20 */
  ARC_X_W(c, 15, (ARC_X_R(c, 15) + UINT64_C(32)));
  /* 10794c: stp q3, q2, [x12, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 12) + INT64_C(-16));
    arc_st64(_pa, (c)->q[3].u64[0]);
    arc_st64(_pa + 8, (c)->q[3].u64[1]);
    arc_st64((_pa + 16), (c)->q[2].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[2].u64[1]);
  }
  /* 107950: sub x12, x12, #0x20 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) - UINT64_C(32)));
  /* 107954: cbnz x16, #0x107918 */
  if ((ARC_X_R(c, 16)) != 0) goto L_107918;
  /* 107958: cmp x13, x14 */
  (void)arc_sub64(c, ARC_X_R(c, 13), ARC_X_R(c, 14));
  /* 10795c: b.eq #0x107768 */
  if (ARC_COND(c, 0)) goto L_107768;
  /* 107960: b #0x107748 */
  goto L_107748;
  /* 107964: b #0x107970 */
  goto L_107970;
  /* 107968: b #0x107970 */
  goto L_107970;
  /* 10796c: b #0x107970 */
  goto L_107970;
L_107970:;
  /* 107970: ldurb w8, [x29, #-0xb0] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-176))));
  /* 107974: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 107978: tbnz w8, #0, #0x10798c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_10798c;
  /* 10797c: ldurb w8, [x29, #-0x98] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-152))));
  /* 107980: tbnz w8, #0, #0x1079a4 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_1079a4;
L_107984:;
  /* 107984: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 107988: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1079692));
  fn1_9cc20(c);
L_10798c:;
  /* 10798c: ldr x8, [x25, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 25) + INT64_C(8))));
  /* 107990: ldr x0, [x25, #0x18] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 25) + INT64_C(24))));
  /* 107994: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 107998: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1079708));
  fn1_142608(c);
  /* 10799c: ldurb w8, [x29, #-0x98] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-152))));
  /* 1079a0: tbz w8, #0, #0x107984 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_107984;
L_1079a4:;
  /* 1079a4: ldr x8, [x25, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 25) + INT64_C(32))));
  /* 1079a8: ldr x0, [x25, #0x30] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 25) + INT64_C(48))));
  /* 1079ac: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 1079b0: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1079732));
  fn1_142608(c);
  /* 1079b4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1079b8: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1079740));
  fn1_9cc20(c);
}

void fn1_111aa8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039048872));
  /* 111aa8: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 111aac: sub sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(112)));
  /* 111ab0: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 111ab4: stp x26, x25, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* 111ab8: stp x24, x23, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 111abc: stp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 111ac0: stp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 111ac4: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 111ac8: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 111acc: str x1, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 1));
  /* 111ad0: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 111ad4: add x1, x3, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 3) + UINT64_C(48)));
  /* 111ad8: mov x19, x5 */
  ARC_X_W(c, 19, ARC_X_R(c, 5));
  /* 111adc: mov x20, x4 */
  ARC_X_W(c, 20, ARC_X_R(c, 4));
  /* 111ae0: mov x21, x2 */
  ARC_X_W(c, 21, ARC_X_R(c, 2));
  /* 111ae4: bl #0x143460 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1121000));
  fn1_143460(c);
  /* 111ae8: adrp x26, #0x151000 */
  ARC_X_W(c, 26, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 111aec: ldr x26, [x26, #0xb58] */
  ARC_X_W(c, 26, arc_ld64((ARC_X_R(c, 26) + INT64_C(2904))));
  /* 111af0: ldr x25, [sp] */
  ARC_X_W(c, 25, arc_ld64((c)->sp));
  /* 111af4: ldar x8, [x26] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 26)));
  /* 111af8: cmn x8, #1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0);
  /* 111afc: b.eq #0x111bb8 */
  if (ARC_COND(c, 0)) goto L_111bb8;
  /* 111b00: nop  */
  /* nop: no architectural effect here */
  /* 111b04: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 111b08: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1121036));
  fn1_142518(c);
  /* 111b0c: ldr x8, [x26] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 26)));
  /* 111b10: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 111b14: b.ne #0x111b40 */
  if (ARC_COND(c, 1)) goto L_111b40;
  /* 111b18: nop  */
  /* nop: no architectural effect here */
  /* 111b1c: adr x23, #0x15791c */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 111b20: nop  */
  /* nop: no architectural effect here */
  /* 111b24: adr x24, #0x1578f4 */
  ARC_X_W(c, 24, (arc_image_bases[1] + UINT64_C(1407220)));
L_111b28:;
  /* 111b28: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 111b2c: mov x1, x24 */
  ARC_X_W(c, 1, ARC_X_R(c, 24));
  /* 111b30: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1121076));
  fn1_142530(c);
  /* 111b34: ldr x8, [x26] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 26)));
  /* 111b38: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 111b3c: b.eq #0x111b28 */
  if (ARC_COND(c, 0)) goto L_111b28;
L_111b40:;
  /* 111b40: ldr x8, [x26] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 26)));
  /* 111b44: cbz x8, #0x111b58 */
  if ((ARC_X_R(c, 8)) == 0) goto L_111b58;
  /* 111b48: nop  */
  /* nop: no architectural effect here */
  /* 111b4c: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 111b50: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1121108));
  fn1_142560(c);
  /* 111b54: b #0x111bb8 */
  goto L_111bb8;
L_111b58:;
  /* 111b58: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 111b5c: str x26, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 26));
  /* 111b60: strb wzr, [sp, #0x18] */
  arc_st8(((c)->sp + INT64_C(24)), ARC_W_R(c, 31));
  /* 111b64: str x8, [x26] */
  arc_st64(ARC_X_R(c, 26), ARC_X_R(c, 8));
  /* 111b68: nop  */
  /* nop: no architectural effect here */
  /* 111b6c: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 111b70: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1121140));
  fn1_142560(c);
  /* 111b74: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 111b78: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 111b7c: ldr x1, [x1, #0xc58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3160))));
  /* 111b80: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1121156));
  fn1_a2030(c);
  /* 111b84: add w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + UINT64_C(1)));
  /* 111b88: str w8, [x26, #8] */
  arc_st32((ARC_X_R(c, 26) + INT64_C(8)), ARC_W_R(c, 8));
  /* 111b8c: nop  */
  /* nop: no architectural effect here */
  /* 111b90: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 111b94: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1121176));
  fn1_142518(c);
  /* 111b98: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 111b9c: stlr x8, [x26] */
  arc_st64(ARC_X_R(c, 26), ARC_X_R(c, 8));
  /* 111ba0: nop  */
  /* nop: no architectural effect here */
  /* 111ba4: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 111ba8: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1121196));
  fn1_142560(c);
  /* 111bac: nop  */
  /* nop: no architectural effect here */
  /* 111bb0: adr x0, #0x15791c */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 111bb4: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1121208));
  fn1_142578(c);
L_111bb8:;
  /* 111bb8: ldp x8, x10, [x25, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 25) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* 111bbc: ldrsw x9, [x26, #8] */
  ARC_X_W(c, 9, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 26) + INT64_C(8)))));
  /* 111bc0: sub x9, x9, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - UINT64_C(1)));
  /* 111bc4: sub x10, x10, x8 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) - ARC_X_R(c, 8)));
  /* 111bc8: cmp x9, x10, asr #3 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ((uint64_t)((int64_t)(ARC_X_R(c, 10)) >> 3)));
  /* 111bcc: b.hs #0x111c74 */
  if (ARC_COND(c, 2)) goto L_111c74;
  /* 111bd0: ldr x23, [x8, x9, lsl #3] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3))));
  /* 111bd4: cbz x23, #0x111c74 */
  if ((ARC_X_R(c, 23)) == 0) goto L_111c74;
  /* 111bd8: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 111bdc: bl #0x143478 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1121248));
  fn1_143478(c);
  /* 111be0: ldr x8, [x22, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 22) + INT64_C(16));
    ARC_X_W(c, 22, ARC_X_R(c, 22) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_a));
  }
  /* 111be4: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 111be8: ldr x8, [x8, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(8))));
  /* 111bec: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1121264));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 111bf0: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 111bf4: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 111bf8: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 111bfc: add x3, x22, #0x240 */
  ARC_X_W(c, 3, (ARC_X_R(c, 22) + UINT64_C(576)));
  /* 111c00: mov x2, x22 */
  ARC_X_W(c, 2, ARC_X_R(c, 22));
  /* 111c04: mov x4, x23 */
  ARC_X_W(c, 4, ARC_X_R(c, 23));
  /* 111c08: mov x5, x20 */
  ARC_X_W(c, 5, ARC_X_R(c, 20));
  /* 111c0c: mov w6, wzr */
  ARC_W_W(c, 6, ARC_W_R(c, 31));
  /* 111c10: bl #0x104878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1121300));
  fn1_104878(c);
  /* 111c14: sub x8, x0, x22 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) - ARC_X_R(c, 22)));
  /* 111c18: cmp x8, #0x23f */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(575));
  /* 111c1c: b.gt #0x111c50 */
  if (ARC_COND(c, 12)) goto L_111c50;
  /* 111c20: asr x8, x8, #3 */
  ARC_X_W(c, 8, ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(3)) & 63))));
  /* 111c24: mov x9, #-0x5555555555555556 */
  ARC_X_W(c, 9, UINT64_C(12297829382473034410));
  /* 111c28: movk x9, #0xaaab */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(18446744073709486080)) | UINT64_C(43691)));
  /* 111c2c: mul x8, x8, x9 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) * (uint64_t)(ARC_X_R(c, 9))));
  /* 111c30: mov x9, #-0x5555555555555556 */
  ARC_X_W(c, 9, UINT64_C(12297829382473034410));
  /* 111c34: eor x9, x9, #0x8000000000000001 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) ^ UINT64_C(9223372036854775809)));
  /* 111c38: smulh x9, x8, x9 */
  ARC_X_W(c, 9, arc_smulh(ARC_X_R(c, 8), ARC_X_R(c, 9)));
  /* 111c3c: lsr x10, x9, #0x3f */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(63)) & 63)));
  /* 111c40: add w9, w10, w9, lsr #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 10) + ((uint32_t)(ARC_W_R(c, 9)) >> 1)));
  /* 111c44: mov w10, #0xc */
  ARC_W_W(c, 10, UINT64_C(12));
  /* 111c48: msub w8, w9, w10, w8 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 8)) - ((uint32_t)(ARC_W_R(c, 9)) * (uint32_t)(ARC_W_R(c, 10)))));
  /* 111c4c: str w8, [x19, #0x10] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(16)), ARC_W_R(c, 8));
L_111c50:;
  /* 111c50: ldr x0, [sp, #8] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(8))));
  /* 111c54: ldp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 111c58: ldp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 111c5c: ldp x24, x23, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 111c60: ldp x26, x25, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* 111c64: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 111c68: add sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(112)));
  /* 111c6c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 111c70: ret  */
  return;
L_111c74:;
  /* 111c74: bl #0xfc3b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1121400));
  fn1_fc3b8(c);
  /* 111c78: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 111c7c: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 111c80: bl #0xd2a78 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1121412));
  fn1_d2a78(c);
  /* 111c84: b #0x111c90 */
  goto L_111c90;
  /* 111c88: b #0x111c8c */
  goto L_111c8c;
L_111c8c:;
  /* 111c8c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
L_111c90:;
  /* 111c90: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 111c94: bl #0x143478 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1121432));
  fn1_143478(c);
  /* 111c98: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 111c9c: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1121440));
  fn1_9cc20(c);
}

void fn1_113e50(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039058000));
  /* 113e50: bti c */
  /* bti: no architectural effect here */
  /* 113e54: mov x9, x0 */
  ARC_X_W(c, 9, ARC_X_R(c, 0));
  /* 113e58: ldrb w10, [x9, #0x48]! */
  { const uint64_t _a = (ARC_X_R(c, 9) + INT64_C(72));
    ARC_X_W(c, 9, ARC_X_R(c, 9) + INT64_C(72));
    ARC_W_W(c, 10, arc_ld8(_a));
  }
  /* 113e5c: tbnz w10, #0, #0x113e74 */
  if (((ARC_W_R(c, 10)) >> 0 & 1) != 0) goto L_113e74;
  /* 113e60: ldr q0, [x9] */
  arc_q_w(c, 0, arc_ld64(ARC_X_R(c, 9)), arc_ld64(ARC_X_R(c, 9) + 8));
  /* 113e64: ldr x9, [x9, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(16))));
  /* 113e68: str q0, [x8] */
  arc_st64(ARC_X_R(c, 8), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 8) + 8, (c)->q[0].u64[1]);
  /* 113e6c: str x9, [x8, #0x10] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(16)), ARC_X_R(c, 9));
  /* 113e70: ret  */
  return;
L_113e74:;
  /* 113e74: ldp x2, x1, [x0, #0x50] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(80));
    ARC_X_W(c, 2, arc_ld64(_pa));
    ARC_X_W(c, 1, arc_ld64(_pa + 8));
  }
  /* 113e78: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 113e7c: b #0xda588 */
  fn1_da588(c); return;
}

void fn1_11ae24(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039086628));
  /* 11ae24: bti c */
  /* bti: no architectural effect here */
  /* 11ae28: b #0x144018 */
  fn1_144018(c); return;
}

void fn1_125bcc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039131084));
  /* 125bcc: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 125bd0: sub sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(96)));
  /* 125bd4: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 125bd8: stp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 125bdc: stp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 125be0: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 125be4: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 125be8: sub x21, x2, x1 */
  ARC_X_W(c, 21, (ARC_X_R(c, 2) - ARC_X_R(c, 1)));
  /* 125bec: cmn x21, #8 */
  (void)arc_add64(c, ARC_X_R(c, 21), UINT64_C(8), 0);
  /* 125bf0: b.hs #0x125d60 */
  if (ARC_COND(c, 2)) goto L_125d60;
  /* 125bf4: mov x22, x2 */
  ARC_X_W(c, 22, ARC_X_R(c, 2));
  /* 125bf8: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 125bfc: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* 125c00: cmp x21, #0x16 */
  (void)arc_sub64(c, ARC_X_R(c, 21), UINT64_C(22));
  /* 125c04: b.hi #0x125c24 */
  if (ARC_COND(c, 8)) goto L_125c24;
  /* 125c08: lsl w8, w21, #1 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 21)) << ((UINT64_C(1)) & 31)));
  /* 125c0c: add x9, sp, #8 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(8)));
  /* 125c10: orr x23, x9, #1 */
  ARC_X_W(c, 23, (ARC_X_R(c, 9) | UINT64_C(1)));
  /* 125c14: strb w8, [sp, #8] */
  arc_st8(((c)->sp + INT64_C(8)), ARC_W_R(c, 8));
  /* 125c18: cmp x22, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 1));
  /* 125c1c: b.ne #0x125c5c */
  if (ARC_COND(c, 1)) goto L_125c5c;
  /* 125c20: b #0x125c68 */
  goto L_125c68;
L_125c24:;
  /* 125c24: orr x8, x21, #7 */
  ARC_X_W(c, 8, (ARC_X_R(c, 21) | UINT64_C(7)));
  /* 125c28: mov w9, #0x1a */
  ARC_W_W(c, 9, UINT64_C(26));
  /* 125c2c: mov x23, x1 */
  ARC_X_W(c, 23, ARC_X_R(c, 1));
  /* 125c30: cmp x8, #0x17 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(23));
  /* 125c34: csinc x24, x9, x8, eq */
  ARC_X_W(c, 24, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 8)) + 1)));
  /* 125c38: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 125c3c: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1203264));
  fn1_1428f0(c);
  /* 125c40: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* 125c44: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* 125c48: orr x8, x24, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 24) | UINT64_C(1)));
  /* 125c4c: stp x21, x0, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 21));
    arc_st64(_pa + 8, ARC_X_R(c, 0));
  }
  /* 125c50: str x8, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 8));
  /* 125c54: cmp x22, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 1));
  /* 125c58: b.eq #0x125c68 */
  if (ARC_COND(c, 0)) goto L_125c68;
L_125c5c:;
  /* 125c5c: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 125c60: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* 125c64: bl #0x1449d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1203304));
  fn1_1449d8(c);
L_125c68:;
  /* 125c68: strb wzr, [x23, x21] */
  arc_st8((ARC_X_R(c, 23) + ARC_X_R(c, 21)), ARC_W_R(c, 31));
  /* 125c6c: add x24, sp, #8 */
  ARC_X_W(c, 24, ((c)->sp + UINT64_C(8)));
  /* 125c70: ldr x3, [x20, #0x10] */
  ARC_X_W(c, 3, arc_ld64((ARC_X_R(c, 20) + INT64_C(16))));
  /* 125c74: ldrb w8, [sp, #8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(8))));
  /* 125c78: ldr x9, [sp, #0x18] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(24))));
  /* 125c7c: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 125c80: csinc x1, x9, x24, ne */
  ARC_X_W(c, 1, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 24)) + 1)));
  /* 125c84: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
  /* 125c88: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 125c8c: bl #0x144240 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1203344));
  fn1_144240(c);
  /* 125c90: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 125c94: cmn x0, #8 */
  (void)arc_add64(c, ARC_X_R(c, 0), UINT64_C(8), 0);
  /* 125c98: b.hs #0x125d64 */
  if (ARC_COND(c, 2)) goto L_125d64;
  /* 125c9c: cmp x21, #0x17 */
  (void)arc_sub64(c, ARC_X_R(c, 21), UINT64_C(23));
  /* 125ca0: b.hs #0x125cb8 */
  if (ARC_COND(c, 2)) goto L_125cb8;
  /* 125ca4: lsl w8, w21, #1 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 21)) << ((UINT64_C(1)) & 31)));
  /* 125ca8: mov x22, x19 */
  ARC_X_W(c, 22, ARC_X_R(c, 19));
  /* 125cac: strb w8, [x22], #1 */
  { const uint64_t _a = ARC_X_R(c, 22);
    ARC_X_W(c, 22, ARC_X_R(c, 22) + INT64_C(1));
    arc_st8(_a, ARC_W_R(c, 8));
  }
  /* 125cb0: cbnz x21, #0x125ce0 */
  if ((ARC_X_R(c, 21)) != 0) goto L_125ce0;
  /* 125cb4: b #0x125cf0 */
  goto L_125cf0;
L_125cb8:;
  /* 125cb8: orr x8, x21, #7 */
  ARC_X_W(c, 8, (ARC_X_R(c, 21) | UINT64_C(7)));
  /* 125cbc: mov w9, #0x1a */
  ARC_W_W(c, 9, UINT64_C(26));
  /* 125cc0: cmp x8, #0x17 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(23));
  /* 125cc4: csinc x23, x9, x8, eq */
  ARC_X_W(c, 23, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 8)) + 1)));
  /* 125cc8: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 125ccc: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1203408));
  fn1_1428f0(c);
  /* 125cd0: orr x8, x23, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 23) | UINT64_C(1)));
  /* 125cd4: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 125cd8: stp x21, x0, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 21));
    arc_st64(_pa + 8, ARC_X_R(c, 0));
  }
  /* 125cdc: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
L_125ce0:;
  /* 125ce0: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 125ce4: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* 125ce8: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* 125cec: bl #0x144a20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1203440));
  fn1_144a20(c);
L_125cf0:;
  /* 125cf0: ldrb w8, [sp, #8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(8))));
  /* 125cf4: strb wzr, [x22, x21] */
  arc_st8((ARC_X_R(c, 22) + ARC_X_R(c, 21)), ARC_W_R(c, 31));
  /* 125cf8: orr x10, x24, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 24) | UINT64_C(1)));
  /* 125cfc: ldrb w9, [x19] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 19)));
  /* 125d00: ldr x11, [sp, #0x18] */
  ARC_X_W(c, 11, arc_ld64(((c)->sp + INT64_C(24))));
  /* 125d04: ldr x3, [x20, #0x10] */
  ARC_X_W(c, 3, arc_ld64((ARC_X_R(c, 20) + INT64_C(16))));
  /* 125d08: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 125d0c: ldp x12, x8, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 12, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* 125d10: lsr x13, x9, #1 */
  ARC_X_W(c, 13, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(1)) & 63)));
  /* 125d14: csel x1, x10, x11, eq */
  ARC_X_W(c, 1, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 11)));
  /* 125d18: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* 125d1c: csinc x0, x8, x19, ne */
  ARC_X_W(c, 0, (ARC_COND(c, 1) ? (ARC_X_R(c, 8)) : ((ARC_X_R(c, 19)) + 1)));
  /* 125d20: csel x8, x13, x12, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 13)) : ARC_X_R(c, 12)));
  /* 125d24: add x2, x8, #1 */
  ARC_X_W(c, 2, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* 125d28: bl #0x144240 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1203500));
  fn1_144240(c);
  /* 125d2c: ldrb w8, [sp, #8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(8))));
  /* 125d30: tbz w8, #0, #0x125d44 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_125d44;
  /* 125d34: ldr x8, [sp, #8] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(8))));
  /* 125d38: ldr x0, [sp, #0x18] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(24))));
  /* 125d3c: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 125d40: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1203524));
  fn1_142608(c);
L_125d44:;
  /* 125d44: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 125d48: ldp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 125d4c: ldp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 125d50: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 125d54: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* 125d58: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 125d5c: ret  */
  return;
L_125d60:;
  /* 125d60: bl #0xd7d54 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1203556));
  fn1_d7d54(c);
L_125d64:;
  /* 125d64: bl #0xd7d54 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1203560));
  fn1_d7d54(c);
  /* 125d68: ldrb w8, [x19] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 19)));
  /* 125d6c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 125d70: tbnz w8, #0, #0x125d84 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_125d84;
  /* 125d74: ldrb w8, [sp, #8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(8))));
  /* 125d78: tbnz w8, #0, #0x125dac */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_125dac;
L_125d7c:;
  /* 125d7c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 125d80: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1203588));
  fn1_9cc20(c);
L_125d84:;
  /* 125d84: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 125d88: ldr x0, [x19, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* 125d8c: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 125d90: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1203604));
  fn1_142608(c);
  /* 125d94: ldrb w8, [sp, #8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(8))));
  /* 125d98: tbz w8, #0, #0x125d7c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_125d7c;
  /* 125d9c: b #0x125dac */
  goto L_125dac;
  /* 125da0: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 125da4: ldrb w8, [sp, #8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(8))));
  /* 125da8: tbz w8, #0, #0x125d7c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_125d7c;
L_125dac:;
  /* 125dac: ldr x8, [sp, #8] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(8))));
  /* 125db0: ldr x0, [sp, #0x18] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(24))));
  /* 125db4: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 125db8: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1203644));
  fn1_142608(c);
  /* 125dbc: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 125dc0: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1203652));
  fn1_9cc20(c);
}

void fn1_128008(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039140360));
  /* 128008: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 12800c: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 128010: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 128014: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 128018: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 12801c: bl #0x143fd0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1212448));
  fn1_143fd0(c);
  /* 128020: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 128024: mov w1, #0x18 */
  ARC_W_W(c, 1, UINT64_C(24));
  /* 128028: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 12802c: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 128030: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 128034: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_12a260(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039149152));
  /* 12a260: bti c */
  /* bti: no architectural effect here */
  /* 12a264: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 12a268: ret  */
  return;
}

void fn1_12bab8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039155384));
  /* 12bab8: bti c */
  /* bti: no architectural effect here */
  /* 12babc: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 12bac0: ret  */
  return;
}

void fn1_130710(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039174928));
  /* 130710: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 130714: sub sp, sp, #0x100 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(256)));
  /* 130718: stp x29, x30, [sp, #0xc0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(192));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 13071c: stp x24, x23, [sp, #0xd0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(208));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 130720: stp x22, x21, [sp, #0xe0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(224));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 130724: stp x20, x19, [sp, #0xf0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(240));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 130728: add x29, sp, #0xc0 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(192)));
  /* 13072c: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* 130730: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 130734: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 130738: mov x24, xzr */
  ARC_X_W(c, 24, ARC_X_R(c, 31));
  /* 13073c: adrp x21, #0x51000 */
  ARC_X_W(c, 21, (arc_image_bases[1] + UINT64_C(331776)));
  /* 130740: add x21, x21, #0x162 */
  ARC_X_W(c, 21, (ARC_X_R(c, 21) + UINT64_C(354)));
  /* 130744: add x22, x0, #0xb0 */
  ARC_X_W(c, 22, (ARC_X_R(c, 0) + UINT64_C(176)));
  /* 130748: adrp x23, #0x50000 */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(327680)));
  /* 13074c: add x23, x23, #0x7ce */
  ARC_X_W(c, 23, (ARC_X_R(c, 23) + UINT64_C(1998)));
  /* 130750: stur xzr, [x29, #-0x10] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-16)), ARC_X_R(c, 31));
  /* 130754: stp q0, q0, [x29, #-0x30] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-48));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* 130758: stur q0, [x29, #-0x40] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-64)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 29) + INT64_C(-64)) + 8, (c)->q[0].u64[1]);
L_13075c:;
  /* 13075c: ldr x4, [x19] */
  ARC_X_W(c, 4, arc_ld64(ARC_X_R(c, 19)));
  /* 130760: add x0, sp, #0x1c */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(28)));
  /* 130764: sub x3, x29, #0x40 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 130768: mov w1, #0x64 */
  ARC_W_W(c, 1, UINT64_C(100));
  /* 13076c: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* 130770: stur w24, [x29, #-0x28] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-40)), ARC_W_R(c, 24));
  /* 130774: bl #0x1444b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1247096));
  fn1_1444b0(c);
  /* 130778: sub x0, x22, #0xa8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 22) - UINT64_C(168)));
  /* 13077c: add x1, sp, #0x1c */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(28)));
  /* 130780: bl #0xe167c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1247108));
  fn1_e167c(c);
  /* 130784: ldr x4, [x19] */
  ARC_X_W(c, 4, arc_ld64(ARC_X_R(c, 19)));
  /* 130788: add x0, sp, #0x1c */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(28)));
  /* 13078c: sub x3, x29, #0x40 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 130790: mov w1, #0x64 */
  ARC_W_W(c, 1, UINT64_C(100));
  /* 130794: mov x2, x23 */
  ARC_X_W(c, 2, ARC_X_R(c, 23));
  /* 130798: bl #0x1444b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1247132));
  fn1_1444b0(c);
  /* 13079c: add x1, sp, #0x1c */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(28)));
  /* 1307a0: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 1307a4: bl #0xe167c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1247144));
  fn1_e167c(c);
  /* 1307a8: add x24, x24, #1 */
  ARC_X_W(c, 24, (ARC_X_R(c, 24) + UINT64_C(1)));
  /* 1307ac: add x22, x22, #0x18 */
  ARC_X_W(c, 22, (ARC_X_R(c, 22) + UINT64_C(24)));
  /* 1307b0: cmp x24, #7 */
  (void)arc_sub64(c, ARC_X_R(c, 24), UINT64_C(7));
  /* 1307b4: b.ne #0x13075c */
  if (ARC_COND(c, 1)) goto L_13075c;
  /* 1307b8: mov x24, xzr */
  ARC_X_W(c, 24, ARC_X_R(c, 31));
  /* 1307bc: adrp x21, #0x50000 */
  ARC_X_W(c, 21, (arc_image_bases[1] + UINT64_C(327680)));
  /* 1307c0: add x21, x21, #0xcce */
  ARC_X_W(c, 21, (ARC_X_R(c, 21) + UINT64_C(3278)));
  /* 1307c4: add x22, x19, #0x278 */
  ARC_X_W(c, 22, (ARC_X_R(c, 19) + UINT64_C(632)));
  /* 1307c8: adrp x23, #0x4f000 */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(323584)));
  /* 1307cc: add x23, x23, #0xd44 */
  ARC_X_W(c, 23, (ARC_X_R(c, 23) + UINT64_C(3396)));
L_1307d0:;
  /* 1307d0: ldr x4, [x19] */
  ARC_X_W(c, 4, arc_ld64(ARC_X_R(c, 19)));
  /* 1307d4: add x0, sp, #0x1c */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(28)));
  /* 1307d8: sub x3, x29, #0x40 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 1307dc: mov w1, #0x64 */
  ARC_W_W(c, 1, UINT64_C(100));
  /* 1307e0: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* 1307e4: stur w24, [x29, #-0x30] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-48)), ARC_W_R(c, 24));
  /* 1307e8: bl #0x1444b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1247212));
  fn1_1444b0(c);
  /* 1307ec: sub x0, x22, #0x120 */
  ARC_X_W(c, 0, (ARC_X_R(c, 22) - UINT64_C(288)));
  /* 1307f0: add x1, sp, #0x1c */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(28)));
  /* 1307f4: bl #0xe167c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1247224));
  fn1_e167c(c);
  /* 1307f8: ldr x4, [x19] */
  ARC_X_W(c, 4, arc_ld64(ARC_X_R(c, 19)));
  /* 1307fc: add x0, sp, #0x1c */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(28)));
  /* 130800: sub x3, x29, #0x40 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 130804: mov w1, #0x64 */
  ARC_W_W(c, 1, UINT64_C(100));
  /* 130808: mov x2, x23 */
  ARC_X_W(c, 2, ARC_X_R(c, 23));
  /* 13080c: bl #0x1444b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1247248));
  fn1_1444b0(c);
  /* 130810: add x1, sp, #0x1c */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(28)));
  /* 130814: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 130818: bl #0xe167c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1247260));
  fn1_e167c(c);
  /* 13081c: add x24, x24, #1 */
  ARC_X_W(c, 24, (ARC_X_R(c, 24) + UINT64_C(1)));
  /* 130820: add x22, x22, #0x18 */
  ARC_X_W(c, 22, (ARC_X_R(c, 22) + UINT64_C(24)));
  /* 130824: cmp x24, #0xc */
  (void)arc_sub64(c, ARC_X_R(c, 24), UINT64_C(12));
  /* 130828: b.ne #0x1307d0 */
  if (ARC_COND(c, 1)) goto L_1307d0;
  /* 13082c: ldr x4, [x19] */
  ARC_X_W(c, 4, arc_ld64(ARC_X_R(c, 19)));
  /* 130830: nop  */
  /* nop: no architectural effect here */
  /* 130834: adr x21, #0x50087 */
  ARC_X_W(c, 21, (arc_image_bases[1] + UINT64_C(327815)));
  /* 130838: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 13083c: add x0, sp, #0x1c */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(28)));
  /* 130840: sub x3, x29, #0x40 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 130844: mov w1, #0x64 */
  ARC_W_W(c, 1, UINT64_C(100));
  /* 130848: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* 13084c: stur w8, [x29, #-0x38] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-56)), ARC_W_R(c, 8));
  /* 130850: bl #0x1444b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1247316));
  fn1_1444b0(c);
  /* 130854: add x0, x19, #0x398 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(920)));
  /* 130858: add x1, sp, #0x1c */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(28)));
  /* 13085c: bl #0xe167c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1247328));
  fn1_e167c(c);
  /* 130860: ldr x4, [x19] */
  ARC_X_W(c, 4, arc_ld64(ARC_X_R(c, 19)));
  /* 130864: mov w8, #0xd */
  ARC_W_W(c, 8, UINT64_C(13));
  /* 130868: add x0, sp, #0x1c */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(28)));
  /* 13086c: sub x3, x29, #0x40 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 130870: mov w1, #0x64 */
  ARC_W_W(c, 1, UINT64_C(100));
  /* 130874: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* 130878: stur w8, [x29, #-0x38] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-56)), ARC_W_R(c, 8));
  /* 13087c: bl #0x1444b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1247360));
  fn1_1444b0(c);
  /* 130880: add x0, x19, #0x3b0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(944)));
  /* 130884: add x1, sp, #0x1c */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(28)));
  /* 130888: bl #0xe167c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1247372));
  fn1_e167c(c);
  /* 13088c: mov x8, sp */
  ARC_X_W(c, 8, (c)->sp);
  /* 130890: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 130894: mov w1, #0x63 */
  ARC_W_W(c, 1, UINT64_C(99));
  /* 130898: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* 13089c: bl #0x143bf8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1247392));
  fn1_143bf8(c);
  /* 1308a0: ldrb w8, [x19, #0x3c8] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(968))));
  /* 1308a4: add x21, x19, #0x3c8 */
  ARC_X_W(c, 21, (ARC_X_R(c, 19) + UINT64_C(968)));
  /* 1308a8: tbz w8, #0, #0x1308bc */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1308bc;
  /* 1308ac: ldr x8, [x19, #0x3c8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(968))));
  /* 1308b0: ldr x0, [x19, #0x3d8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(984))));
  /* 1308b4: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 1308b8: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1247420));
  fn1_142608(c);
L_1308bc:;
  /* 1308bc: ldr x8, [sp, #0x10] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1308c0: ldr q0, [sp] */
  arc_q_w(c, 0, arc_ld64((c)->sp), arc_ld64((c)->sp + 8));
  /* 1308c4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1308c8: mov w1, #0x72 */
  ARC_W_W(c, 1, UINT64_C(114));
  /* 1308cc: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* 1308d0: str x8, [x21, #0x10] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(16)), ARC_X_R(c, 8));
  /* 1308d4: mov x8, sp */
  ARC_X_W(c, 8, (c)->sp);
  /* 1308d8: str q0, [x21] */
  arc_st64(ARC_X_R(c, 21), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 21) + 8, (c)->q[0].u64[1]);
  /* 1308dc: bl #0x143bf8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1247456));
  fn1_143bf8(c);
  /* 1308e0: ldrb w8, [x19, #0x3e0] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(992))));
  /* 1308e4: add x21, x19, #0x3e0 */
  ARC_X_W(c, 21, (ARC_X_R(c, 19) + UINT64_C(992)));
  /* 1308e8: tbz w8, #0, #0x1308fc */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1308fc;
  /* 1308ec: ldr x8, [x19, #0x3e0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(992))));
  /* 1308f0: ldr x0, [x19, #0x3f0] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(1008))));
  /* 1308f4: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 1308f8: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1247484));
  fn1_142608(c);
L_1308fc:;
  /* 1308fc: ldr x8, [sp, #0x10] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(16))));
  /* 130900: ldr q0, [sp] */
  arc_q_w(c, 0, arc_ld64((c)->sp), arc_ld64((c)->sp + 8));
  /* 130904: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 130908: mov w1, #0x78 */
  ARC_W_W(c, 1, UINT64_C(120));
  /* 13090c: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* 130910: str x8, [x21, #0x10] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(16)), ARC_X_R(c, 8));
  /* 130914: mov x8, sp */
  ARC_X_W(c, 8, (c)->sp);
  /* 130918: str q0, [x21] */
  arc_st64(ARC_X_R(c, 21), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 21) + 8, (c)->q[0].u64[1]);
  /* 13091c: bl #0x143bf8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1247520));
  fn1_143bf8(c);
  /* 130920: ldrb w8, [x19, #0x3f8] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(1016))));
  /* 130924: add x21, x19, #0x3f8 */
  ARC_X_W(c, 21, (ARC_X_R(c, 19) + UINT64_C(1016)));
  /* 130928: tbz w8, #0, #0x13093c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13093c;
  /* 13092c: ldr x8, [x19, #0x3f8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(1016))));
  /* 130930: ldr x0, [x19, #0x408] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(1032))));
  /* 130934: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 130938: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1247548));
  fn1_142608(c);
L_13093c:;
  /* 13093c: ldr x8, [sp, #0x10] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(16))));
  /* 130940: ldr q0, [sp] */
  arc_q_w(c, 0, arc_ld64((c)->sp), arc_ld64((c)->sp + 8));
  /* 130944: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 130948: mov w1, #0x58 */
  ARC_W_W(c, 1, UINT64_C(88));
  /* 13094c: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* 130950: str x8, [x21, #0x10] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(16)), ARC_X_R(c, 8));
  /* 130954: mov x8, sp */
  ARC_X_W(c, 8, (c)->sp);
  /* 130958: str q0, [x21] */
  arc_st64(ARC_X_R(c, 21), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 21) + 8, (c)->q[0].u64[1]);
  /* 13095c: bl #0x143bf8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1247584));
  fn1_143bf8(c);
  /* 130960: ldrb w8, [x19, #0x410] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(1040))));
  /* 130964: add x20, x19, #0x410 */
  ARC_X_W(c, 20, (ARC_X_R(c, 19) + UINT64_C(1040)));
  /* 130968: tbz w8, #0, #0x13097c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13097c;
  /* 13096c: ldr x8, [x19, #0x410] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(1040))));
  /* 130970: ldr x0, [x19, #0x420] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(1056))));
  /* 130974: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 130978: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1247612));
  fn1_142608(c);
L_13097c:;
  /* 13097c: ldr q0, [sp] */
  arc_q_w(c, 0, arc_ld64((c)->sp), arc_ld64((c)->sp + 8));
  /* 130980: ldr x8, [sp, #0x10] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(16))));
  /* 130984: str q0, [x20] */
  arc_st64(ARC_X_R(c, 20), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 20) + 8, (c)->q[0].u64[1]);
  /* 130988: str x8, [x20, #0x10] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(16)), ARC_X_R(c, 8));
  /* 13098c: ldp x20, x19, [sp, #0xf0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(240));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 130990: ldp x22, x21, [sp, #0xe0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(224));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 130994: ldp x24, x23, [sp, #0xd0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(208));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 130998: ldp x29, x30, [sp, #0xc0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(192));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 13099c: add sp, sp, #0x100 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(256)));
  /* 1309a0: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 1309a4: ret  */
  return;
}

void fn1_134b54(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039192404));
  /* 134b54: bti c */
  /* bti: no architectural effect here */
  /* 134b58: add x0, x0, #0x3f8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1016)));
  /* 134b5c: ret  */
  return;
}

void fn1_1366c4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039199428));
  /* 1366c4: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 1366c8: sub sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(96)));
  /* 1366cc: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1366d0: stp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 1366d4: stp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1366d8: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1366dc: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 1366e0: mov x9, x0 */
  ARC_X_W(c, 9, ARC_X_R(c, 0));
  /* 1366e4: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 1366e8: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1366ec: add x1, x9, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 9) + UINT64_C(48)));
  /* 1366f0: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* 1366f4: bl #0x143460 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1271544));
  fn1_143460(c);
  /* 1366f8: adrp x24, #0x151000 */
  ARC_X_W(c, 24, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 1366fc: ldr x24, [x24, #0xcb8] */
  ARC_X_W(c, 24, arc_ld64((ARC_X_R(c, 24) + INT64_C(3256))));
  /* 136700: ldr x23, [sp, #8] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(8))));
  /* 136704: ldar x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 136708: cmn x8, #1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0);
  /* 13670c: b.eq #0x1367c8 */
  if (ARC_COND(c, 0)) goto L_1367c8;
  /* 136710: nop  */
  /* nop: no architectural effect here */
  /* 136714: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 136718: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1271580));
  fn1_142518(c);
  /* 13671c: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 136720: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 136724: b.ne #0x136750 */
  if (ARC_COND(c, 1)) goto L_136750;
  /* 136728: nop  */
  /* nop: no architectural effect here */
  /* 13672c: adr x21, #0x15791c */
  ARC_X_W(c, 21, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 136730: nop  */
  /* nop: no architectural effect here */
  /* 136734: adr x22, #0x1578f4 */
  ARC_X_W(c, 22, (arc_image_bases[1] + UINT64_C(1407220)));
L_136738:;
  /* 136738: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 13673c: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 136740: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1271620));
  fn1_142530(c);
  /* 136744: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 136748: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 13674c: b.eq #0x136738 */
  if (ARC_COND(c, 0)) goto L_136738;
L_136750:;
  /* 136750: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 136754: cbz x8, #0x136768 */
  if ((ARC_X_R(c, 8)) == 0) goto L_136768;
  /* 136758: nop  */
  /* nop: no architectural effect here */
  /* 13675c: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 136760: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1271652));
  fn1_142560(c);
  /* 136764: b #0x1367c8 */
  goto L_1367c8;
L_136768:;
  /* 136768: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 13676c: str x24, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 24));
  /* 136770: strb wzr, [sp, #0x18] */
  arc_st8(((c)->sp + INT64_C(24)), ARC_W_R(c, 31));
  /* 136774: str x8, [x24] */
  arc_st64(ARC_X_R(c, 24), ARC_X_R(c, 8));
  /* 136778: nop  */
  /* nop: no architectural effect here */
  /* 13677c: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 136780: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1271684));
  fn1_142560(c);
  /* 136784: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 136788: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 13678c: ldr x1, [x1, #0xc58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3160))));
  /* 136790: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1271700));
  fn1_a2030(c);
  /* 136794: add w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + UINT64_C(1)));
  /* 136798: str w8, [x24, #8] */
  arc_st32((ARC_X_R(c, 24) + INT64_C(8)), ARC_W_R(c, 8));
  /* 13679c: nop  */
  /* nop: no architectural effect here */
  /* 1367a0: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 1367a4: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1271720));
  fn1_142518(c);
  /* 1367a8: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 1367ac: stlr x8, [x24] */
  arc_st64(ARC_X_R(c, 24), ARC_X_R(c, 8));
  /* 1367b0: nop  */
  /* nop: no architectural effect here */
  /* 1367b4: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 1367b8: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1271740));
  fn1_142560(c);
  /* 1367bc: nop  */
  /* nop: no architectural effect here */
  /* 1367c0: adr x0, #0x15791c */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 1367c4: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1271752));
  fn1_142578(c);
L_1367c8:;
  /* 1367c8: ldp x8, x10, [x23, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 23) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* 1367cc: ldrsw x9, [x24, #8] */
  ARC_X_W(c, 9, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 24) + INT64_C(8)))));
  /* 1367d0: sub x9, x9, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - UINT64_C(1)));
  /* 1367d4: sub x10, x10, x8 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) - ARC_X_R(c, 8)));
  /* 1367d8: cmp x9, x10, asr #3 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ((uint64_t)((int64_t)(ARC_X_R(c, 10)) >> 3)));
  /* 1367dc: b.hs #0x136834 */
  if (ARC_COND(c, 2)) goto L_136834;
  /* 1367e0: ldr x21, [x8, x9, lsl #3] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3))));
  /* 1367e4: cbz x21, #0x136834 */
  if ((ARC_X_R(c, 21)) == 0) goto L_136834;
  /* 1367e8: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 1367ec: ldr x8, [x8, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* 1367f0: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 1367f4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1271800));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1367f8: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 1367fc: str w0, [x20] */
  arc_st32(ARC_X_R(c, 20), ARC_W_R(c, 0));
  /* 136800: ldr x9, [x8, #0x28] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* 136804: mov x8, x19 */
  ARC_X_W(c, 8, ARC_X_R(c, 19));
  /* 136808: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 13680c: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1271824));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 136810: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 136814: bl #0x143478 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1271832));
  fn1_143478(c);
  /* 136818: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 13681c: ldp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 136820: ldp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 136824: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 136828: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* 13682c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 136830: ret  */
  return;
L_136834:;
  /* 136834: bl #0xfc3b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1271864));
  fn1_fc3b8(c);
  /* 136838: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 13683c: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 136840: bl #0xd2a78 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1271876));
  fn1_d2a78(c);
  /* 136844: b #0x136850 */
  goto L_136850;
  /* 136848: b #0x13684c */
  goto L_13684c;
L_13684c:;
  /* 13684c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
L_136850:;
  /* 136850: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 136854: bl #0x143478 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1271896));
  fn1_143478(c);
  /* 136858: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 13685c: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1271904));
  fn1_9cc20(c);
}

void fn1_139410(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039211024));
  /* 139410: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 139414: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* 139418: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 13941c: str x21, [sp, #0x30] */
  arc_st64(((c)->sp + INT64_C(48)), ARC_X_R(c, 21));
  /* 139420: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 139424: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 139428: mov x8, x1 */
  ARC_X_W(c, 8, ARC_X_R(c, 1));
  /* 13942c: mov x21, x2 */
  ARC_X_W(c, 21, ARC_X_R(c, 2));
  /* 139430: mov x1, x3 */
  ARC_X_W(c, 1, ARC_X_R(c, 3));
  /* 139434: mov x2, x4 */
  ARC_X_W(c, 2, ARC_X_R(c, 4));
  /* 139438: mov x3, x8 */
  ARC_X_W(c, 3, ARC_X_R(c, 8));
  /* 13943c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 139440: bl #0x143010 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1283140));
  fn1_143010(c);
  /* 139444: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 139448: mov x20, x19 */
  ARC_X_W(c, 20, ARC_X_R(c, 19));
  /* 13944c: ldr x8, [x8, #0xa00] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2560))));
  /* 139450: stp xzr, xzr, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 139454: str xzr, [sp, #0x18] */
  arc_st64(((c)->sp + INT64_C(24)), ARC_X_R(c, 31));
  /* 139458: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* 13945c: str x8, [x20], #0x20 */
  { const uint64_t _a = ARC_X_R(c, 20);
    ARC_X_W(c, 20, ARC_X_R(c, 20) + INT64_C(32));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* 139460: add x0, x29, #0x1f */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(31)));
  /* 139464: add x2, sp, #8 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(8)));
  /* 139468: mov x8, x20 */
  ARC_X_W(c, 8, ARC_X_R(c, 20));
  /* 13946c: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 139470: bl #0x139560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1283188));
  fn1_139560(c);
  /* 139474: ldrb w8, [sp, #8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(8))));
  /* 139478: tbz w8, #0, #0x13948c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13948c;
  /* 13947c: ldr x8, [sp, #8] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(8))));
  /* 139480: ldr x0, [sp, #0x18] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(24))));
  /* 139484: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 139488: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1283212));
  fn1_142608(c);
L_13948c:;
  /* 13948c: ldr x8, [x19, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(32))));
  /* 139490: ldr x1, [x19, #8] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* 139494: ldrb w9, [x8] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 8)));
  /* 139498: ldr x10, [x8, #0x10] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 13949c: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* 1394a0: csinc x2, x10, x8, ne */
  ARC_X_W(c, 2, (ARC_COND(c, 1) ? (ARC_X_R(c, 10)) : ((ARC_X_R(c, 8)) + 1)));
  /* 1394a4: nop  */
  /* nop: no architectural effect here */
  /* 1394a8: adr x0, #0x509ba */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(330170)));
  /* 1394ac: add x8, sp, #8 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(8)));
  /* 1394b0: bl #0xd7a54 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1283252));
  fn1_d7a54(c);
  /* 1394b4: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 1394b8: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* 1394bc: ldrb w9, [x19, #0x30]! */
  { const uint64_t _a = (ARC_X_R(c, 19) + INT64_C(48));
    ARC_X_W(c, 19, ARC_X_R(c, 19) + INT64_C(48));
    ARC_W_W(c, 9, arc_ld8(_a));
  }
  /* 1394c0: tbz w9, #0, #0x1394d4 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_1394d4;
  /* 1394c4: ldr x0, [x8, #0x40] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(64))));
  /* 1394c8: ldr x8, [x8, #0x30] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(48))));
  /* 1394cc: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 1394d0: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1283284));
  fn1_142608(c);
L_1394d4:;
  /* 1394d4: ldur q0, [sp, #8] */
  arc_q_w(c, 0, arc_ld64(((c)->sp + INT64_C(8))), arc_ld64(((c)->sp + INT64_C(8)) + 8));
  /* 1394d8: ldr x8, [sp, #0x18] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(24))));
  /* 1394dc: str q0, [x19] */
  arc_st64(ARC_X_R(c, 19), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 19) + 8, (c)->q[0].u64[1]);
  /* 1394e0: str x8, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 8));
  /* 1394e4: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1394e8: ldr x21, [sp, #0x30] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(48))));
  /* 1394ec: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1394f0: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* 1394f4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 1394f8: ret  */
  return;
  /* 1394fc: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 139500: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 139504: bl #0x1391ec */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1283336));
  fn1_1391ec(c);
  /* 139508: b #0x139528 */
  goto L_139528;
  /* 13950c: ldrb w8, [sp, #8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(8))));
  /* 139510: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 139514: tbz w8, #0, #0x139528 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_139528;
  /* 139518: ldr x8, [sp, #8] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(8))));
  /* 13951c: ldr x0, [sp, #0x18] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(24))));
  /* 139520: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 139524: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1283368));
  fn1_142608(c);
L_139528:;
  /* 139528: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 13952c: mov w0, #-1 */
  ARC_W_W(c, 0, UINT64_C(18446744073709551615));
  /* 139530: ldr x8, [x8, #0x910] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2320))));
  /* 139534: ldr x20, [x19, #8] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* 139538: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* 13953c: sub x1, x20, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) - UINT64_C(8)));
  /* 139540: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* 139544: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1283400));
  fn1_a2030(c);
  /* 139548: cmp w0, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(1));
  /* 13954c: b.pl #0x139558 */
  if (ARC_COND(c, 5)) goto L_139558;
  /* 139550: sub x0, x20, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) - UINT64_C(24)));
  /* 139554: bl #0x1426f8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1283416));
  fn1_1426f8(c);
L_139558:;
  /* 139558: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 13955c: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1283424));
  fn1_9cc20(c);
}

void fn1_13f9d4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039237076));
  /* 13f9d4: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 13f9d8: sub sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(96)));
  /* 13f9dc: stp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 13f9e0: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 13f9e4: add x29, sp, #0x40 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(64)));
  /* 13f9e8: ldr x8, [x0, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* 13f9ec: cbz x8, #0x13fa0c */
  if ((ARC_X_R(c, 8)) == 0) goto L_13fa0c;
  /* 13f9f0: ldr q0, [x1] */
  arc_q_w(c, 0, arc_ld64(ARC_X_R(c, 1)), arc_ld64(ARC_X_R(c, 1) + 8));
  /* 13f9f4: str q0, [x8] */
  arc_st64(ARC_X_R(c, 8), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 8) + 8, (c)->q[0].u64[1]);
  /* 13f9f8: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 13f9fc: ldp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 13fa00: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* 13fa04: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 13fa08: ret  */
  return;
L_13fa0c:;
  /* 13fa0c: str x1, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 1));
  /* 13fa10: adrp x1, #0x51000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(331776)));
  /* 13fa14: add x1, x1, #0x597 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1431)));
  /* 13fa18: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 13fa1c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 13fa20: bl #0x11dda8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1309220));
  fn1_11dda8(c);
  /* 13fa24: ldr x1, [x20] */
  ARC_X_W(c, 1, arc_ld64(ARC_X_R(c, 20)));
  /* 13fa28: mov x19, x20 */
  ARC_X_W(c, 19, ARC_X_R(c, 20));
  /* 13fa2c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 13fa30: bl #0x142b78 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1309236));
  fn1_142b78(c);
  /* 13fa34: ldr x8, [x0, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 13fa38: ldr q0, [x0] */
  arc_q_w(c, 0, arc_ld64(ARC_X_R(c, 0)), arc_ld64(ARC_X_R(c, 0) + 8));
  /* 13fa3c: str x8, [sp, #0x30] */
  arc_st64(((c)->sp + INT64_C(48)), ARC_X_R(c, 8));
  /* 13fa40: str q0, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), (c)->q[0].u64[0]);
  arc_st64(((c)->sp + INT64_C(32)) + 8, (c)->q[0].u64[1]);
  /* 13fa44: stp xzr, xzr, [x0, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 13fa48: str xzr, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 31));
  /* 13fa4c: ldrb w8, [sp, #8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(8))));
  /* 13fa50: tbz w8, #0, #0x13fa64 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13fa64;
  /* 13fa54: ldr x8, [sp, #8] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(8))));
  /* 13fa58: ldr x0, [sp, #0x18] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(24))));
  /* 13fa5c: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 13fa60: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1309284));
  fn1_142608(c);
L_13fa64:;
  /* 13fa64: ldp x1, x2, [x19, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(16));
    ARC_X_W(c, 1, arc_ld64(_pa));
    ARC_X_W(c, 2, arc_ld64(_pa + 8));
  }
  /* 13fa68: cmp x1, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 1), UINT64_C(0));
  /* 13fa6c: cset w8, ne */
  ARC_W_W(c, 8, (ARC_COND(c, 1) ? 1 : 0));
  /* 13fa70: cmp x2, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 2), UINT64_C(0));
  /* 13fa74: cinc w8, w8, ne */
  ARC_W_W(c, 8, (ARC_COND(c, 1) ? (ARC_W_R(c, 8)) + 1 : (ARC_W_R(c, 8))));
  /* 13fa78: cbz w8, #0x13fa90 */
  if ((ARC_W_R(c, 8)) == 0) goto L_13fa90;
  /* 13fa7c: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* 13fa80: b.ne #0x13fa9c */
  if (ARC_COND(c, 1)) goto L_13fa9c;
  /* 13fa84: ldr x2, [sp] */
  ARC_X_W(c, 2, arc_ld64((c)->sp));
  /* 13fa88: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 13fa8c: bl #0x138e98 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1309328));
  fn1_138e98(c);
L_13fa90:;
  /* 13fa90: ldr x1, [sp] */
  ARC_X_W(c, 1, arc_ld64((c)->sp));
  /* 13fa94: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 13fa98: bl #0x138db4 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1309340));
  fn1_138db4(c);
L_13fa9c:;
  /* 13fa9c: ldr x3, [sp] */
  ARC_X_W(c, 3, arc_ld64((c)->sp));
  /* 13faa0: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 13faa4: bl #0x138f84 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1309352));
  fn1_138f84(c);
  /* 13faa8: ldrb w8, [sp, #0x20] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(32))));
  /* 13faac: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 13fab0: tbz w8, #0, #0x13fadc */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13fadc;
  /* 13fab4: ldr x0, [sp, #0x30] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(48))));
  /* 13fab8: ldr x8, [sp, #0x20] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(32))));
  /* 13fabc: b #0x13fad4 */
  goto L_13fad4;
  /* 13fac0: ldrb w8, [sp, #8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(8))));
  /* 13fac4: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 13fac8: tbz w8, #0, #0x13fadc */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13fadc;
  /* 13facc: ldr x0, [sp, #0x18] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(24))));
  /* 13fad0: ldr x8, [sp, #8] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(8))));
L_13fad4:;
  /* 13fad4: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 13fad8: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1309404));
  fn1_142608(c);
L_13fadc:;
  /* 13fadc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 13fae0: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1309412));
  fn1_9cc20(c);
}

void fn1_142770(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039248752));
  /* 142770: adrp x16, #0x151000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 142774: ldr x17, [x16, #0xfb0] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(4016))));
  /* 142778: add x16, x16, #0xfb0 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(4016)));
  /* 14277c: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 142780: nop  */
  /* nop: no architectural effect here */
  /* 142784: nop  */
  /* nop: no architectural effect here */
}

void fn1_142d70(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039250288));
  /* 142d70: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 142d74: ldr x17, [x16, #0x1b0] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(432))));
  /* 142d78: add x16, x16, #0x1b0 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(432)));
  /* 142d7c: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 142d80: nop  */
  /* nop: no architectural effect here */
  /* 142d84: nop  */
  /* nop: no architectural effect here */
}

void fn1_143370(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039251824));
  /* 143370: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 143374: ldr x17, [x16, #0x3b0] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(944))));
  /* 143378: add x16, x16, #0x3b0 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(944)));
  /* 14337c: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 143380: nop  */
  /* nop: no architectural effect here */
  /* 143384: nop  */
  /* nop: no architectural effect here */
}

void fn1_143970(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039253360));
  /* 143970: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 143974: ldr x17, [x16, #0x5b0] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(1456))));
  /* 143978: add x16, x16, #0x5b0 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(1456)));
  /* 14397c: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 143980: nop  */
  /* nop: no architectural effect here */
  /* 143984: nop  */
  /* nop: no architectural effect here */
}

void fn1_143f70(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039254896));
  /* 143f70: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 143f74: ldr x17, [x16, #0x7b0] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(1968))));
  /* 143f78: add x16, x16, #0x7b0 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(1968)));
  /* 143f7c: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 143f80: nop  */
  /* nop: no architectural effect here */
  /* 143f84: nop  */
  /* nop: no architectural effect here */
}

void fn1_144570(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039256432));
  /* 144570: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 144574: ldr x17, [x16, #0x9b0] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(2480))));
  /* 144578: add x16, x16, #0x9b0 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(2480)));
  /* 14457c: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 144580: nop  */
  /* nop: no architectural effect here */
  /* 144584: nop  */
  /* nop: no architectural effect here */
}

