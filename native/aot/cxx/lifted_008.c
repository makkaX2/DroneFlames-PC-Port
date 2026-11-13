#include "lifted.h"

void fn1_9c8b4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038569140));
  /* 9c8b4: bti c */
  /* bti: no architectural effect here */
  /* 9c8b8: mov x1, x0 */
  ARC_X_W(c, 1, ARC_X_R(c, 0));
  /* 9c8bc: nop  */
  /* nop: no architectural effect here */
  /* 9c8c0: adr x0, #0x9c8a0 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(641184)));
  /* 9c8c4: nop  */
  /* nop: no architectural effect here */
  /* 9c8c8: adr x2, #0x148af8 */
  ARC_X_W(c, 2, (arc_image_bases[1] + UINT64_C(1346296)));
  /* 9c8cc: b #0x1423f8 */
  fn1_1423f8(c); return;
}

void fn1_a1160(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038587744));
  /* a1160: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* a1164: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* a1168: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* a116c: nop  */
  /* nop: no architectural effect here */
  /* a1170: adr x0, #0x156bb8 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1403832)));
  /* a1174: bl #0x144ac8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(659832));
  fn1_144ac8(c);
  /* a1178: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* a117c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* a1180: ret  */
  return;
}

void fn1_a2768(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038593384));
  /* a2768: bti c */
  /* bti: no architectural effect here */
  /* a276c: ret  */
  return;
}

void fn1_a8694(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038617748));
  /* a8694: bti c */
  /* bti: no architectural effect here */
  /* a8698: ret  */
  return;
}

void fn1_aee54(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038644308));
  /* aee54: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* aee58: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* aee5c: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* aee60: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* aee64: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* aee68: ldr x21, [x0, #0x10] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* aee6c: ldurh w8, [x0, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 0) + INT64_C(9))));
  /* aee70: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* aee74: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* aee78: ldurh w9, [x21, #9] */
  ARC_W_W(c, 9, arc_ld16((ARC_X_R(c, 21) + INT64_C(9))));
  /* aee7c: sbfx w8, w8, #0, #6 */
  ARC_W_W(c, 8, arc_sext32((((uint32_t)(ARC_W_R(c, 8)) >> 0) & UINT64_C(63)), 6));
  /* aee80: lsl w9, w9, #0x1a */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 9)) << ((UINT64_C(26)) & 31)));
  /* aee84: add w8, w8, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) + UINT64_C(1)));
  /* aee88: cmp w8, w9, asr #26 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ((uint32_t)((int32_t)(ARC_W_R(c, 9)) >> 26)));
  /* aee8c: b.ls #0xaeed4 */
  if (ARC_COND(c, 9)) goto L_aeed4;
  /* aee90: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* aee94: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* aee98: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* aee9c: ldr x8, [x8, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* aeea0: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(716452));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* aeea4: ldurh w8, [x21, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 21) + INT64_C(9))));
  /* aeea8: and w8, w8, #0xc0 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(192)));
  /* aeeac: cmp w8, #0x40 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(64));
  /* aeeb0: b.eq #0xaeec8 */
  if (ARC_COND(c, 0)) goto L_aeec8;
  /* aeeb4: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* aeeb8: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* aeebc: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* aeec0: ldr x8, [x8, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* aeec4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(716488));
  arc_dispatch(c, ARC_X_R(c, 8));
L_aeec8:;
  /* aeec8: ldr x21, [x20, #0x20] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 20) + INT64_C(32))));
  /* aeecc: cbnz x21, #0xaefbc */
  if ((ARC_X_R(c, 21)) != 0) goto L_aefbc;
  /* aeed0: b #0xaf014 */
  goto L_af014;
L_aeed4:;
  /* aeed4: ldp x8, x10, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* aeed8: ldr w11, [x19, #0x20] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 19) + INT64_C(32))));
  /* aeedc: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* aeee0: add w11, w11, #1 */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) + UINT64_C(1)));
  /* aeee4: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* aeee8: str w11, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 11));
  /* aeeec: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* aeef0: b.ls #0xaef1c */
  if (ARC_COND(c, 9)) goto L_aef1c;
  /* aeef4: lsl x9, x10, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* aeef8: add x8, x8, #0x3e1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(993)));
  /* aeefc: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* aef00: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* aef04: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* aef08: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(716556));
  fn1_142878(c);
  /* aef0c: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* aef10: cbz x0, #0xaf02c */
  if ((ARC_X_R(c, 0)) == 0) goto L_af02c;
  /* aef14: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* aef18: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
L_aef1c:;
  /* aef1c: str x9, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 9));
  /* aef20: ldr x9, [x21] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 21)));
  /* aef24: mov w10, #0x28 */
  ARC_W_W(c, 10, UINT64_C(40));
  /* aef28: strb w10, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 10));
  /* aef2c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* aef30: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* aef34: ldr x8, [x9, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(32))));
  /* aef38: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(716604));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* aef3c: ldurh w8, [x21, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 21) + INT64_C(9))));
  /* aef40: and w8, w8, #0xc0 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(192)));
  /* aef44: cmp w8, #0x40 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(64));
  /* aef48: b.eq #0xaef60 */
  if (ARC_COND(c, 0)) goto L_aef60;
  /* aef4c: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* aef50: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* aef54: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* aef58: ldr x8, [x8, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* aef5c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(716640));
  arc_dispatch(c, ARC_X_R(c, 8));
L_aef60:;
  /* aef60: ldp x8, x10, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* aef64: ldr w11, [x19, #0x20] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 19) + INT64_C(32))));
  /* aef68: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* aef6c: sub w11, w11, #1 */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) - UINT64_C(1)));
  /* aef70: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* aef74: str w11, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 11));
  /* aef78: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* aef7c: b.ls #0xaefa8 */
  if (ARC_COND(c, 9)) goto L_aefa8;
  /* aef80: lsl x9, x10, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* aef84: add x8, x8, #0x3e1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(993)));
  /* aef88: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* aef8c: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* aef90: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* aef94: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(716696));
  fn1_142878(c);
  /* aef98: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* aef9c: cbz x0, #0xaf030 */
  if ((ARC_X_R(c, 0)) == 0) goto L_af030;
  /* aefa0: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* aefa4: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
L_aefa8:;
  /* aefa8: str x9, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 9));
  /* aefac: mov w9, #0x29 */
  ARC_W_W(c, 9, UINT64_C(41));
  /* aefb0: strb w9, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
  /* aefb4: ldr x21, [x20, #0x20] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 20) + INT64_C(32))));
  /* aefb8: cbz x21, #0xaf014 */
  if ((ARC_X_R(c, 21)) == 0) goto L_af014;
L_aefbc:;
  /* aefbc: ldp x8, x9, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* aefc0: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* aefc4: ldr x20, [x20, #0x18] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 20) + INT64_C(24))));
  /* aefc8: add x10, x8, x21 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + ARC_X_R(c, 21)));
  /* aefcc: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* aefd0: b.ls #0xaeff8 */
  if (ARC_COND(c, 9)) goto L_aeff8;
  /* aefd4: lsl x8, x9, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 9)) << ((UINT64_C(1)) & 63)));
  /* aefd8: add x9, x10, #0x3e0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 10) + UINT64_C(992)));
  /* aefdc: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* aefe0: csel x1, x8, x9, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* aefe4: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* aefe8: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(716780));
  fn1_142878(c);
  /* aefec: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* aeff0: cbz x0, #0xaf028 */
  if ((ARC_X_R(c, 0)) == 0) goto L_af028;
  /* aeff4: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
L_aeff8:;
  /* aeff8: add x0, x0, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* aeffc: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* af000: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* af004: bl #0x1449d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(716808));
  fn1_1449d8(c);
  /* af008: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* af00c: add x8, x8, x21 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + ARC_X_R(c, 21)));
  /* af010: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
L_af014:;
  /* af014: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* af018: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* af01c: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* af020: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* af024: ret  */
  return;
L_af028:;
  /* af028: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(716844));
  fn1_1427b8(c);
L_af02c:;
  /* af02c: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(716848));
  fn1_1427b8(c);
L_af030:;
  /* af030: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(716852));
  fn1_1427b8(c);
}

void fn1_b39bc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038663612));
  /* b39bc: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* b39c0: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b39c4: stp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* b39c8: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* b39cc: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* b39d0: ldp x9, x10, [x1, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 1) + INT64_C(8));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* b39d4: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* b39d8: ldr x8, [x1] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 1)));
  /* b39dc: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* b39e0: add x11, x9, #7 */
  ARC_X_W(c, 11, (ARC_X_R(c, 9) + UINT64_C(7)));
  /* b39e4: cmp x11, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 10));
  /* b39e8: b.ls #0xb3a18 */
  if (ARC_COND(c, 9)) goto L_b3a18;
  /* b39ec: lsl x10, x10, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* b39f0: add x9, x9, #0x3e7 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(999)));
  /* b39f4: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* b39f8: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* b39fc: csel x1, x10, x9, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* b3a00: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b3a04: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(735752));
  fn1_142878(c);
  /* b3a08: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b3a0c: cbz x0, #0xb3b08 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b3b08;
  /* b3a10: ldr x9, [x19, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b3a14: mov x8, x0 */
  ARC_X_W(c, 8, ARC_X_R(c, 0));
L_b3a18:;
  /* b3a18: add x8, x8, x9 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + ARC_X_R(c, 9)));
  /* b3a1c: mov w9, #0x626d */
  ARC_W_W(c, 9, UINT64_C(25197));
  /* b3a20: mov w10, #0x6c27 */
  ARC_W_W(c, 10, UINT64_C(27687));
  /* b3a24: movk w9, #0x6164, lsl #16 */
  ARC_W_W(c, 9, ((ARC_W_R(c, 9) & UINT64_C(18446744069414649855)) | UINT64_C(1633943552)));
  /* b3a28: movk w10, #0x6d61, lsl #16 */
  ARC_W_W(c, 10, ((ARC_W_R(c, 10) & UINT64_C(18446744069414649855)) | UINT64_C(1835073536)));
  /* b3a2c: stur w9, [x8, #3] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(3)), ARC_W_R(c, 9));
  /* b3a30: str w10, [x8] */
  arc_st32(ARC_X_R(c, 8), ARC_W_R(c, 10));
  /* b3a34: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b3a38: add x8, x8, #7 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(7)));
  /* b3a3c: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
  /* b3a40: ldr x21, [x20, #0x48] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 20) + INT64_C(72))));
  /* b3a44: cbz x21, #0xb3aa0 */
  if ((ARC_X_R(c, 21)) == 0) goto L_b3aa0;
  /* b3a48: ldr x10, [x19, #0x10] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* b3a4c: add x9, x21, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 21) + ARC_X_R(c, 8)));
  /* b3a50: ldr x22, [x20, #0x40] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 20) + INT64_C(64))));
  /* b3a54: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* b3a58: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* b3a5c: b.ls #0xb3a84 */
  if (ARC_COND(c, 9)) goto L_b3a84;
  /* b3a60: lsl x8, x10, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* b3a64: add x9, x9, #0x3e0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(992)));
  /* b3a68: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* b3a6c: csel x1, x8, x9, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* b3a70: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b3a74: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(735864));
  fn1_142878(c);
  /* b3a78: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b3a7c: cbz x0, #0xb3b10 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b3b10;
  /* b3a80: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
L_b3a84:;
  /* b3a84: add x0, x0, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* b3a88: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* b3a8c: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* b3a90: bl #0x1449d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(735892));
  fn1_1449d8(c);
  /* b3a94: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b3a98: add x8, x8, x21 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + ARC_X_R(c, 21)));
  /* b3a9c: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
L_b3aa0:;
  /* b3aa0: ldr x9, [x19, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* b3aa4: add x10, x8, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* b3aa8: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* b3aac: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* b3ab0: b.ls #0xb3ad8 */
  if (ARC_COND(c, 9)) goto L_b3ad8;
  /* b3ab4: lsl x9, x9, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) << ((UINT64_C(1)) & 63)));
  /* b3ab8: add x8, x8, #0x3e1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(993)));
  /* b3abc: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* b3ac0: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* b3ac4: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b3ac8: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(735948));
  fn1_142878(c);
  /* b3acc: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b3ad0: cbz x0, #0xb3b0c */
  if ((ARC_X_R(c, 0)) == 0) goto L_b3b0c;
  /* b3ad4: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
L_b3ad8:;
  /* b3ad8: mov w9, #0x27 */
  ARC_W_W(c, 9, UINT64_C(39));
  /* b3adc: strb w9, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
  /* b3ae0: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* b3ae4: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b3ae8: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* b3aec: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* b3af0: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
  /* b3af4: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* b3af8: ldp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* b3afc: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b3b00: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* b3b04: b #0xb3b20 */
  fn1_b3b20(c); return;
L_b3b08:;
  /* b3b08: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(736012));
  fn1_1427b8(c);
L_b3b0c:;
  /* b3b0c: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(736016));
  fn1_1427b8(c);
L_b3b10:;
  /* b3b10: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(736020));
  fn1_1427b8(c);
}

void fn1_b77d8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038679512));
  /* b77d8: bti c */
  /* bti: no architectural effect here */
  /* b77dc: mov w1, #0x20 */
  ARC_W_W(c, 1, UINT64_C(32));
  /* b77e0: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_ba440(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038690880));
  /* ba440: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* ba444: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* ba448: str x23, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 23));
  /* ba44c: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* ba450: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* ba454: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* ba458: ldp x8, x9, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* ba45c: sub x9, x9, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - ARC_X_R(c, 8)));
  /* ba460: cmp x9, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(2));
  /* ba464: b.hs #0xba484 */
  if (ARC_COND(c, 2)) goto L_ba484;
L_ba468:;
  /* ba468: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* ba46c: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* ba470: ldr x23, [sp, #0x10] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(16))));
  /* ba474: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* ba478: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ba47c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* ba480: b #0xa6c18 */
  fn1_a6c18(c); return;
L_ba484:;
  /* ba484: ldrh w9, [x8] */
  ARC_W_W(c, 9, arc_ld16(ARC_X_R(c, 8)));
  /* ba488: mov w10, #0x7354 */
  ARC_W_W(c, 10, UINT64_C(29524));
  /* ba48c: cmp w9, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 9), ARC_W_R(c, 10));
  /* ba490: b.eq #0xba4c4 */
  if (ARC_COND(c, 0)) goto L_ba4c4;
  /* ba494: ldrh w9, [x8] */
  ARC_W_W(c, 9, arc_ld16(ARC_X_R(c, 8)));
  /* ba498: mov w10, #0x7554 */
  ARC_W_W(c, 10, UINT64_C(30036));
  /* ba49c: cmp w9, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 9), ARC_W_R(c, 10));
  /* ba4a0: b.eq #0xba4d4 */
  if (ARC_COND(c, 0)) goto L_ba4d4;
  /* ba4a4: ldrh w9, [x8] */
  ARC_W_W(c, 9, arc_ld16(ARC_X_R(c, 8)));
  /* ba4a8: mov w10, #0x6554 */
  ARC_W_W(c, 10, UINT64_C(25940));
  /* ba4ac: cmp w9, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 9), ARC_W_R(c, 10));
  /* ba4b0: b.ne #0xba468 */
  if (ARC_COND(c, 1)) goto L_ba468;
  /* ba4b4: adrp x19, #0x51000 */
  ARC_X_W(c, 19, (arc_image_bases[1] + UINT64_C(331776)));
  /* ba4b8: add x19, x19, #0x29e */
  ARC_X_W(c, 19, (ARC_X_R(c, 19) + UINT64_C(670)));
  /* ba4bc: mov w20, #4 */
  ARC_W_W(c, 20, UINT64_C(4));
  /* ba4c0: b #0xba4e0 */
  goto L_ba4e0;
L_ba4c4:;
  /* ba4c4: adrp x19, #0x52000 */
  ARC_X_W(c, 19, (arc_image_bases[1] + UINT64_C(335872)));
  /* ba4c8: add x19, x19, #0x515 */
  ARC_X_W(c, 19, (ARC_X_R(c, 19) + UINT64_C(1301)));
  /* ba4cc: mov w20, #6 */
  ARC_W_W(c, 20, UINT64_C(6));
  /* ba4d0: b #0xba4e0 */
  goto L_ba4e0;
L_ba4d4:;
  /* ba4d4: adrp x19, #0x50000 */
  ARC_X_W(c, 19, (arc_image_bases[1] + UINT64_C(327680)));
  /* ba4d8: add x19, x19, #0x699 */
  ARC_X_W(c, 19, (ARC_X_R(c, 19) + UINT64_C(1689)));
  /* ba4dc: mov w20, #5 */
  ARC_W_W(c, 20, UINT64_C(5));
L_ba4e0:;
  /* ba4e0: add x8, x8, #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2)));
  /* ba4e4: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* ba4e8: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* ba4ec: str x8, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* ba4f0: bl #0xa6c18 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(763124));
  fn1_a6c18(c);
  /* ba4f4: cbz x0, #0xba570 */
  if ((ARC_X_R(c, 0)) == 0) goto L_ba570;
  /* ba4f8: ldr x22, [x21, #0x1330] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 21) + INT64_C(4912))));
  /* ba4fc: ldr x8, [x22, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 22) + INT64_C(8))));
  /* ba500: sub x9, x8, #0xfc0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4032)));
  /* ba504: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* ba508: b.hi #0xba530 */
  if (ARC_COND(c, 8)) goto L_ba530;
  /* ba50c: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* ba510: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* ba514: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(763160));
  fn1_1428a8(c);
  /* ba518: cbz x0, #0xba588 */
  if ((ARC_X_R(c, 0)) == 0) goto L_ba588;
  /* ba51c: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* ba520: stp x22, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* ba524: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* ba528: str x0, [x21, #0x1330] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(4912)), ARC_X_R(c, 0));
  /* ba52c: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
L_ba530:;
  /* ba530: add x9, x8, #0x30 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(48)));
  /* ba534: add x8, x22, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 22) + ARC_X_R(c, 8)));
  /* ba538: mov w10, #6 */
  ARC_W_W(c, 10, UINT64_C(6));
  /* ba53c: str x9, [x22, #8] */
  arc_st64((ARC_X_R(c, 22) + INT64_C(8)), ARC_X_R(c, 9));
  /* ba540: adrp x9, #0x14c000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1359872)));
  /* ba544: add x9, x9, #0x6e8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(1768)));
  /* ba548: str x9, [x8, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 8) + INT64_C(16));
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 9));
  }
  /* ba54c: ldurh w9, [x8, #9] */
  ARC_W_W(c, 9, arc_ld16((ARC_X_R(c, 8) + INT64_C(9))));
  /* ba550: strb w10, [x8, #8] */
  arc_st8((ARC_X_R(c, 8) + INT64_C(8)), ARC_W_R(c, 10));
  /* ba554: mov w10, #0x540 */
  ARC_W_W(c, 10, UINT64_C(1344));
  /* ba558: and w9, w9, #0xf000 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) & UINT64_C(61440)));
  /* ba55c: str x0, [x8, #0x20] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(32)), ARC_X_R(c, 0));
  /* ba560: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* ba564: orr w9, w9, w10 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | ARC_W_R(c, 10)));
  /* ba568: stp x19, x20, [x8, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 8) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 19));
    arc_st64(_pa + 8, ARC_X_R(c, 20));
  }
  /* ba56c: sturh w9, [x8, #9] */
  arc_st16((ARC_X_R(c, 8) + INT64_C(9)), ARC_W_R(c, 9));
L_ba570:;
  /* ba570: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* ba574: ldr x23, [sp, #0x10] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(16))));
  /* ba578: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* ba57c: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ba580: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* ba584: ret  */
  return;
L_ba588:;
  /* ba588: bl #0x142488 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(763276));
  fn1_142488(c);
}

void fn1_bd888(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038704264));
  /* bd888: bti c */
  /* bti: no architectural effect here */
  /* bd88c: b #0x142800 */
  fn1_142800(c); return;
}

void fn1_ca9ec(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038757868));
L_ca9ec:;
  /* ca9ec: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* ca9f0: sub sp, sp, #0xb0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(176)));
  /* ca9f4: stp x29, x30, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* ca9f8: stp x28, x27, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* ca9fc: stp x26, x25, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* caa00: stp x24, x23, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* caa04: stp x22, x21, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* caa08: stp x20, x19, [sp, #0xa0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(160));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* caa0c: add x29, sp, #0x50 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(80)));
  /* caa10: mov w26, #2 */
  ARC_W_W(c, 26, UINT64_C(2));
  /* caa14: mov w27, #1 */
  ARC_W_W(c, 27, UINT64_C(1));
  /* caa18: mov w28, #4 */
  ARC_W_W(c, 28, UINT64_C(4));
  /* caa1c: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* caa20: dup v16.2d, x26 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 26));
    _t.u64[1] = (ARC_X_R(c, 26));
    (c)->q[16] = _t; }
  /* caa24: dup v17.2d, x27 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 27));
    _t.u64[1] = (ARC_X_R(c, 27));
    (c)->q[17] = _t; }
  /* caa28: dup v18.2d, x28 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 28));
    _t.u64[1] = (ARC_X_R(c, 28));
    (c)->q[18] = _t; }
  /* caa2c: ldr q19, [x8, #0xa80] */
  arc_q_w(c, 19, arc_ld64((ARC_X_R(c, 8) + INT64_C(2688))), arc_ld64((ARC_X_R(c, 8) + INT64_C(2688)) + 8));
  /* caa30: mov x22, x2 */
  ARC_X_W(c, 22, ARC_X_R(c, 2));
  /* caa34: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* caa38: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* caa3c: mov x4, #-0x200 */
  ARC_X_W(c, 4, UINT64_C(18446744073709551104));
  /* caa40: mov x21, #-1 */
  ARC_X_W(c, 21, UINT64_C(18446744073709551615));
  /* caa44: stur w3, [x29, #-4] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-4)), ARC_W_R(c, 3));
  /* caa48: stur q16, [x29, #-0x20] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-32)), (c)->q[16].u64[0]);
  arc_st64((ARC_X_R(c, 29) + INT64_C(-32)) + 8, (c)->q[16].u64[1]);
  /* caa4c: stp q18, q17, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, (c)->q[18].u64[0]);
    arc_st64(_pa + 8, (c)->q[18].u64[1]);
    arc_st64((_pa + 16), (c)->q[17].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[17].u64[1]);
  }
  /* caa50: str q19, [sp] */
  arc_st64((c)->sp, (c)->q[19].u64[0]);
  arc_st64((c)->sp + 8, (c)->q[19].u64[1]);
L_caa54:;
  /* caa54: mov x23, x19 */
  ARC_X_W(c, 23, ARC_X_R(c, 19));
L_caa58:;
  /* caa58: sub x8, x20, x23 */
  ARC_X_W(c, 8, (ARC_X_R(c, 20) - ARC_X_R(c, 23)));
  /* caa5c: mov x19, x23 */
  ARC_X_W(c, 19, ARC_X_R(c, 23));
  /* caa60: asr x8, x8, #3 */
  ARC_X_W(c, 8, ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(3)) & 63))));
  /* caa64: subs x9, x8, #2 */
  ARC_X_W(c, 9, arc_sub64(c, ARC_X_R(c, 8), UINT64_C(2)));
  /* caa68: b.gt #0xcaa7c */
  if (ARC_COND(c, 12)) goto L_caa7c;
  /* caa6c: b.lo #0xcb3d8 */
  if (ARC_COND(c, 3)) goto L_cb3d8;
  /* caa70: cmp x8, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(2));
  /* caa74: b.ne #0xcaa94 */
  if (ARC_COND(c, 1)) goto L_caa94;
  /* caa78: b #0xcb2fc */
  goto L_cb2fc;
L_caa7c:;
  /* caa7c: cmp x8, #3 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(3));
  /* caa80: b.eq #0xcb318 */
  if (ARC_COND(c, 0)) goto L_cb318;
  /* caa84: cmp x8, #4 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(4));
  /* caa88: b.eq #0xcb364 */
  if (ARC_COND(c, 0)) goto L_cb364;
  /* caa8c: cmp x8, #5 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(5));
  /* caa90: b.eq #0xcb244 */
  if (ARC_COND(c, 0)) goto L_cb244;
L_caa94:;
  /* caa94: cmp x8, #0x17 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(23));
  /* caa98: b.le #0xcb3fc */
  if (ARC_COND(c, 13)) goto L_cb3fc;
  /* caa9c: cbz x22, #0xcb478 */
  if ((ARC_X_R(c, 22)) == 0) goto L_cb478;
  /* caaa0: lsr x9, x8, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* caaa4: ldur x10, [x20, #-8] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 20) + INT64_C(-8))));
  /* caaa8: cmp x8, #0x81 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(129));
  /* caaac: add x9, x19, x9, lsl #3 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + ((uint64_t)(ARC_X_R(c, 9)) << 3)));
  /* caab0: b.lo #0xcabe8 */
  if (ARC_COND(c, 3)) goto L_cabe8;
  /* caab4: ldr x8, [x9] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 9)));
  /* caab8: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* caabc: csel x11, x8, x10, hi */
  ARC_X_W(c, 11, (ARC_COND(c, 8) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 10)));
  /* caac0: csel x8, x8, x10, lo */
  ARC_X_W(c, 8, (ARC_COND(c, 3) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 10)));
  /* caac4: stur x11, [x20, #-8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(-8)), ARC_X_R(c, 11));
  /* caac8: str x8, [x9] */
  arc_st64(ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* caacc: ldur x8, [x20, #-8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(-8))));
  /* caad0: ldr x10, [x19] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 19)));
  /* caad4: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* caad8: csel x11, x8, x10, hi */
  ARC_X_W(c, 11, (ARC_COND(c, 8) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 10)));
  /* caadc: csel x8, x8, x10, lo */
  ARC_X_W(c, 8, (ARC_COND(c, 3) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 10)));
  /* caae0: stur x11, [x20, #-8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(-8)), ARC_X_R(c, 11));
  /* caae4: ldr x11, [x9] */
  ARC_X_W(c, 11, arc_ld64(ARC_X_R(c, 9)));
  /* caae8: ldr x10, [x19] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 19)));
  /* caaec: cmp x8, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 11));
  /* caaf0: csel x10, x10, x11, lo */
  ARC_X_W(c, 10, (ARC_COND(c, 3) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 11)));
  /* caaf4: str x10, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 10));
  /* caaf8: ldp x11, x10, [x9, #-8] */
  { const uint64_t _pa = (ARC_X_R(c, 9) + INT64_C(-8));
    ARC_X_W(c, 11, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* caafc: csel x8, x10, x8, lo */
  ARC_X_W(c, 8, (ARC_COND(c, 3) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 8)));
  /* cab00: str x8, [x9] */
  arc_st64(ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* cab04: ldur x8, [x20, #-0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(-16))));
  /* cab08: cmp x11, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 8));
  /* cab0c: csel x10, x11, x8, hi */
  ARC_X_W(c, 10, (ARC_COND(c, 8) ? (ARC_X_R(c, 11)) : ARC_X_R(c, 8)));
  /* cab10: csel x8, x11, x8, lo */
  ARC_X_W(c, 8, (ARC_COND(c, 3) ? (ARC_X_R(c, 11)) : ARC_X_R(c, 8)));
  /* cab14: stur x10, [x20, #-0x10] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(-16)), ARC_X_R(c, 10));
  /* cab18: stur x8, [x9, #-8] */
  arc_st64((ARC_X_R(c, 9) + INT64_C(-8)), ARC_X_R(c, 8));
  /* cab1c: ldur x8, [x20, #-0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(-16))));
  /* cab20: ldr x10, [x19, #8] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* cab24: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* cab28: csel x11, x8, x10, hi */
  ARC_X_W(c, 11, (ARC_COND(c, 8) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 10)));
  /* cab2c: csel x8, x8, x10, lo */
  ARC_X_W(c, 8, (ARC_COND(c, 3) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 10)));
  /* cab30: stur x11, [x20, #-0x10] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(-16)), ARC_X_R(c, 11));
  /* cab34: ldur x11, [x9, #-8] */
  ARC_X_W(c, 11, arc_ld64((ARC_X_R(c, 9) + INT64_C(-8))));
  /* cab38: ldr x10, [x19, #8] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* cab3c: cmp x8, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 11));
  /* cab40: csel x10, x10, x11, lo */
  ARC_X_W(c, 10, (ARC_COND(c, 3) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 11)));
  /* cab44: str x10, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 10));
  /* cab48: ldur x10, [x9, #-8] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 9) + INT64_C(-8))));
  /* cab4c: csel x8, x10, x8, lo */
  ARC_X_W(c, 8, (ARC_COND(c, 3) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 8)));
  /* cab50: stur x8, [x9, #-8] */
  arc_st64((ARC_X_R(c, 9) + INT64_C(-8)), ARC_X_R(c, 8));
  /* cab54: ldr x8, [x9, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(8))));
  /* cab58: ldur x10, [x20, #-0x18] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 20) + INT64_C(-24))));
  /* cab5c: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* cab60: csel x11, x8, x10, hi */
  ARC_X_W(c, 11, (ARC_COND(c, 8) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 10)));
  /* cab64: csel x8, x8, x10, lo */
  ARC_X_W(c, 8, (ARC_COND(c, 3) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 10)));
  /* cab68: stur x11, [x20, #-0x18] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(-24)), ARC_X_R(c, 11));
  /* cab6c: str x8, [x9, #8] */
  arc_st64((ARC_X_R(c, 9) + INT64_C(8)), ARC_X_R(c, 8));
  /* cab70: ldur x8, [x20, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(-24))));
  /* cab74: ldr x10, [x19, #0x10] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* cab78: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* cab7c: csel x11, x8, x10, hi */
  ARC_X_W(c, 11, (ARC_COND(c, 8) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 10)));
  /* cab80: csel x8, x8, x10, lo */
  ARC_X_W(c, 8, (ARC_COND(c, 3) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 10)));
  /* cab84: stur x11, [x20, #-0x18] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(-24)), ARC_X_R(c, 11));
  /* cab88: ldr x11, [x9, #8] */
  ARC_X_W(c, 11, arc_ld64((ARC_X_R(c, 9) + INT64_C(8))));
  /* cab8c: ldr x10, [x19, #0x10] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* cab90: cmp x8, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 11));
  /* cab94: csel x10, x10, x11, lo */
  ARC_X_W(c, 10, (ARC_COND(c, 3) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 11)));
  /* cab98: str x10, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 10));
  /* cab9c: ldp x11, x10, [x9] */
  { const uint64_t _pa = ARC_X_R(c, 9);
    ARC_X_W(c, 11, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* caba0: csel x8, x10, x8, lo */
  ARC_X_W(c, 8, (ARC_COND(c, 3) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 8)));
  /* caba4: ldur x10, [x9, #-8] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 9) + INT64_C(-8))));
  /* caba8: cmp x11, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 8));
  /* cabac: csel x12, x11, x8, hi */
  ARC_X_W(c, 12, (ARC_COND(c, 8) ? (ARC_X_R(c, 11)) : ARC_X_R(c, 8)));
  /* cabb0: csel x8, x11, x8, lo */
  ARC_X_W(c, 8, (ARC_COND(c, 3) ? (ARC_X_R(c, 11)) : ARC_X_R(c, 8)));
  /* cabb4: cmp x12, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 12), ARC_X_R(c, 10));
  /* cabb8: csel x11, x12, x10, lo */
  ARC_X_W(c, 11, (ARC_COND(c, 3) ? (ARC_X_R(c, 12)) : ARC_X_R(c, 10)));
  /* cabbc: csel x12, x12, x10, hi */
  ARC_X_W(c, 12, (ARC_COND(c, 8) ? (ARC_X_R(c, 12)) : ARC_X_R(c, 10)));
  /* cabc0: cmp x10, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 8));
  /* cabc4: csel x10, x10, x8, lo */
  ARC_X_W(c, 10, (ARC_COND(c, 3) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 8)));
  /* cabc8: csel x8, x8, x11, lo */
  ARC_X_W(c, 8, (ARC_COND(c, 3) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 11)));
  /* cabcc: stur x10, [x9, #-8] */
  arc_st64((ARC_X_R(c, 9) + INT64_C(-8)), ARC_X_R(c, 10));
  /* cabd0: stp x8, x12, [x9] */
  { const uint64_t _pa = ARC_X_R(c, 9);
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 12));
  }
  /* cabd4: ldr x10, [x19] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 19)));
  /* cabd8: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* cabdc: str x10, [x9] */
  arc_st64(ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* cabe0: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* cabe4: b #0xcac38 */
  goto L_cac38;
L_cabe8:;
  /* cabe8: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* cabec: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* cabf0: csel x11, x8, x10, hi */
  ARC_X_W(c, 11, (ARC_COND(c, 8) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 10)));
  /* cabf4: csel x8, x8, x10, lo */
  ARC_X_W(c, 8, (ARC_COND(c, 3) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 10)));
  /* cabf8: stur x11, [x20, #-8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(-8)), ARC_X_R(c, 11));
  /* cabfc: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* cac00: ldur x8, [x20, #-8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(-8))));
  /* cac04: ldr x10, [x9] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 9)));
  /* cac08: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* cac0c: csel x11, x8, x10, hi */
  ARC_X_W(c, 11, (ARC_COND(c, 8) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 10)));
  /* cac10: csel x8, x8, x10, lo */
  ARC_X_W(c, 8, (ARC_COND(c, 3) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 10)));
  /* cac14: stur x11, [x20, #-8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(-8)), ARC_X_R(c, 11));
  /* cac18: ldr x11, [x19] */
  ARC_X_W(c, 11, arc_ld64(ARC_X_R(c, 19)));
  /* cac1c: ldr x10, [x9] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 9)));
  /* cac20: cmp x8, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 11));
  /* cac24: csel x10, x10, x11, lo */
  ARC_X_W(c, 10, (ARC_COND(c, 3) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 11)));
  /* cac28: str x10, [x9] */
  arc_st64(ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* cac2c: ldr x9, [x19] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 19)));
  /* cac30: csel x8, x9, x8, lo */
  ARC_X_W(c, 8, (ARC_COND(c, 3) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* cac34: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
L_cac38:;
  /* cac38: ldur w9, [x29, #-4] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 29) + INT64_C(-4))));
  /* cac3c: sub x22, x22, #1 */
  ARC_X_W(c, 22, (ARC_X_R(c, 22) - UINT64_C(1)));
  /* cac40: tbnz w9, #0, #0xcac50 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) != 0) goto L_cac50;
  /* cac44: ldur x9, [x19, #-8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(-8))));
  /* cac48: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* cac4c: b.hs #0xcb174 */
  if (ARC_COND(c, 2)) goto L_cb174;
L_cac50:;
  /* cac50: ldur x9, [x20, #-8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 20) + INT64_C(-8))));
  /* cac54: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* cac58: b.hs #0xcac70 */
  if (ARC_COND(c, 2)) goto L_cac70;
  /* cac5c: mov x9, x19 */
  ARC_X_W(c, 9, ARC_X_R(c, 19));
L_cac60:;
  /* cac60: ldr x10, [x9, #8]! */
  { const uint64_t _a = (ARC_X_R(c, 9) + INT64_C(8));
    ARC_X_W(c, 9, ARC_X_R(c, 9) + INT64_C(8));
    ARC_X_W(c, 10, arc_ld64(_a));
  }
  /* cac64: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* cac68: b.hs #0xcac60 */
  if (ARC_COND(c, 2)) goto L_cac60;
  /* cac6c: b #0xcac90 */
  goto L_cac90;
L_cac70:;
  /* cac70: add x10, x19, #8 */
  ARC_X_W(c, 10, (ARC_X_R(c, 19) + UINT64_C(8)));
L_cac74:;
  /* cac74: mov x9, x10 */
  ARC_X_W(c, 9, ARC_X_R(c, 10));
  /* cac78: cmp x10, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 20));
  /* cac7c: b.hs #0xcac90 */
  if (ARC_COND(c, 2)) goto L_cac90;
  /* cac80: mov x10, x9 */
  ARC_X_W(c, 10, ARC_X_R(c, 9));
  /* cac84: ldr x11, [x10], #8 */
  { const uint64_t _a = ARC_X_R(c, 10);
    ARC_X_W(c, 10, ARC_X_R(c, 10) + INT64_C(8));
    ARC_X_W(c, 11, arc_ld64(_a));
  }
  /* cac88: cmp x8, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 11));
  /* cac8c: b.hs #0xcac74 */
  if (ARC_COND(c, 2)) goto L_cac74;
L_cac90:;
  /* cac90: cmp x9, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 20));
  /* cac94: mov x10, x20 */
  ARC_X_W(c, 10, ARC_X_R(c, 20));
  /* cac98: b.hs #0xcacac */
  if (ARC_COND(c, 2)) goto L_cacac;
  /* cac9c: mov x10, x20 */
  ARC_X_W(c, 10, ARC_X_R(c, 20));
L_caca0:;
  /* caca0: ldr x11, [x10, #-8]! */
  { const uint64_t _a = (ARC_X_R(c, 10) + INT64_C(-8));
    ARC_X_W(c, 10, ARC_X_R(c, 10) + INT64_C(-8));
    ARC_X_W(c, 11, arc_ld64(_a));
  }
  /* caca4: cmp x8, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 11));
  /* caca8: b.lo #0xcaca0 */
  if (ARC_COND(c, 3)) goto L_caca0;
L_cacac:;
  /* cacac: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* cacb0: mov x11, x9 */
  ARC_X_W(c, 11, ARC_X_R(c, 9));
  /* cacb4: b.hs #0xcaccc */
  if (ARC_COND(c, 2)) goto L_caccc;
  /* cacb8: ldr x12, [x10] */
  ARC_X_W(c, 12, arc_ld64(ARC_X_R(c, 10)));
  /* cacbc: ldr x13, [x9] */
  ARC_X_W(c, 13, arc_ld64(ARC_X_R(c, 9)));
  /* cacc0: mov x11, x9 */
  ARC_X_W(c, 11, ARC_X_R(c, 9));
  /* cacc4: str x12, [x11], #8 */
  { const uint64_t _a = ARC_X_R(c, 11);
    ARC_X_W(c, 11, ARC_X_R(c, 11) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 12));
  }
  /* cacc8: str x13, [x10] */
  arc_st64(ARC_X_R(c, 10), ARC_X_R(c, 13));
L_caccc:;
  /* caccc: sub x12, x10, #8 */
  ARC_X_W(c, 12, (ARC_X_R(c, 10) - UINT64_C(8)));
  /* cacd0: sub x14, x12, x11 */
  ARC_X_W(c, 14, (ARC_X_R(c, 12) - ARC_X_R(c, 11)));
  /* cacd4: cmp x14, #0x3f1 */
  (void)arc_sub64(c, ARC_X_R(c, 14), UINT64_C(1009));
  /* cacd8: b.lt #0xcae3c */
  if (ARC_COND(c, 11)) goto L_cae3c;
  /* cacdc: dup v0.2d, x8 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 8));
    _t.u64[1] = (ARC_X_R(c, 8));
    (c)->q[0] = _t; }
  /* cace0: mov x13, xzr */
  ARC_X_W(c, 13, ARC_X_R(c, 31));
  /* cace4: mov x14, xzr */
  ARC_X_W(c, 14, ARC_X_R(c, 31));
  /* cace8: b #0xcad14 */
  goto L_cad14;
L_cacec:;
  /* cacec: cmp x14, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 14), UINT64_C(0));
  /* cacf0: cset w15, eq */
  ARC_W_W(c, 15, (ARC_COND(c, 0) ? 1 : 0));
  /* cacf4: cmp x13, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 13), UINT64_C(0));
  /* cacf8: add x11, x11, x15, lsl #9 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) + ((uint64_t)(ARC_X_R(c, 15)) << 9)));
  /* cacfc: csel x15, x4, xzr, eq */
  ARC_X_W(c, 15, (ARC_COND(c, 0) ? (ARC_X_R(c, 4)) : ARC_X_R(c, 31)));
  /* cad00: cset w16, eq */
  ARC_W_W(c, 16, (ARC_COND(c, 0) ? 1 : 0));
  /* cad04: add x12, x12, x15 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) + ARC_X_R(c, 15)));
  /* cad08: sub x15, x12, x11 */
  ARC_X_W(c, 15, (ARC_X_R(c, 12) - ARC_X_R(c, 11)));
  /* cad0c: cmp x15, #0x3f0 */
  (void)arc_sub64(c, ARC_X_R(c, 15), UINT64_C(1008));
  /* cad10: b.le #0xcae4c */
  if (ARC_COND(c, 13)) goto L_cae4c;
L_cad14:;
  /* cad14: cbz x14, #0xcad24 */
  if ((ARC_X_R(c, 14)) == 0) goto L_cad24;
  /* cad18: cbz x13, #0xcad84 */
  if ((ARC_X_R(c, 13)) == 0) goto L_cad84;
L_cad1c:;
  /* cad1c: cbnz x14, #0xcadf8 */
  if ((ARC_X_R(c, 14)) != 0) goto L_cadf8;
  /* cad20: b #0xcacec */
  goto L_cacec;
L_cad24:;
  /* cad24: movi v1.2d, #0000000000000000 */
  arc_v_clear(c, 1);
  /* cad28: movi v2.2d, #0000000000000000 */
  arc_v_clear(c, 2);
  /* cad2c: add x14, x11, #0x10 */
  ARC_X_W(c, 14, (ARC_X_R(c, 11) + UINT64_C(16)));
  /* cad30: mov v3.16b, v19.16b */
  (c)->q[3] = (c)->q[19];
  /* cad34: mov w15, #0x40 */
  ARC_W_W(c, 15, UINT64_C(64));
L_cad38:;
  /* cad38: ldp q4, q5, [x14, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 14) + INT64_C(-16));
    arc_q_w(c, 4, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 5, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* cad3c: add v6.2d, v3.2d, v16.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[3].u64[0] + (c)->q[16].u64[0];
    _t.u64[1] = (c)->q[3].u64[1] + (c)->q[16].u64[1];
    (c)->q[6] = _t; }
  /* cad40: subs x15, x15, #4 */
  ARC_X_W(c, 15, arc_sub64(c, ARC_X_R(c, 15), UINT64_C(4)));
  /* cad44: add x14, x14, #0x20 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) + UINT64_C(32)));
  /* cad48: cmhs v4.2d, v4.2d, v0.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = ((c)->q[4].u64[0] >= (c)->q[0].u64[0]) ? (uint64_t)~(uint64_t)0 : 0;
    _t.u64[1] = ((c)->q[4].u64[1] >= (c)->q[0].u64[1]) ? (uint64_t)~(uint64_t)0 : 0;
    (c)->q[4] = _t; }
  /* cad4c: cmhs v5.2d, v5.2d, v0.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = ((c)->q[5].u64[0] >= (c)->q[0].u64[0]) ? (uint64_t)~(uint64_t)0 : 0;
    _t.u64[1] = ((c)->q[5].u64[1] >= (c)->q[0].u64[1]) ? (uint64_t)~(uint64_t)0 : 0;
    (c)->q[5] = _t; }
  /* cad50: and v4.16b, v4.16b, v17.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[4].u8[0] & (c)->q[17].u8[0];
    _t.u8[1] = (c)->q[4].u8[1] & (c)->q[17].u8[1];
    _t.u8[2] = (c)->q[4].u8[2] & (c)->q[17].u8[2];
    _t.u8[3] = (c)->q[4].u8[3] & (c)->q[17].u8[3];
    _t.u8[4] = (c)->q[4].u8[4] & (c)->q[17].u8[4];
    _t.u8[5] = (c)->q[4].u8[5] & (c)->q[17].u8[5];
    _t.u8[6] = (c)->q[4].u8[6] & (c)->q[17].u8[6];
    _t.u8[7] = (c)->q[4].u8[7] & (c)->q[17].u8[7];
    _t.u8[8] = (c)->q[4].u8[8] & (c)->q[17].u8[8];
    _t.u8[9] = (c)->q[4].u8[9] & (c)->q[17].u8[9];
    _t.u8[10] = (c)->q[4].u8[10] & (c)->q[17].u8[10];
    _t.u8[11] = (c)->q[4].u8[11] & (c)->q[17].u8[11];
    _t.u8[12] = (c)->q[4].u8[12] & (c)->q[17].u8[12];
    _t.u8[13] = (c)->q[4].u8[13] & (c)->q[17].u8[13];
    _t.u8[14] = (c)->q[4].u8[14] & (c)->q[17].u8[14];
    _t.u8[15] = (c)->q[4].u8[15] & (c)->q[17].u8[15];
    (c)->q[4] = _t; }
  /* cad54: and v5.16b, v5.16b, v17.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[5].u8[0] & (c)->q[17].u8[0];
    _t.u8[1] = (c)->q[5].u8[1] & (c)->q[17].u8[1];
    _t.u8[2] = (c)->q[5].u8[2] & (c)->q[17].u8[2];
    _t.u8[3] = (c)->q[5].u8[3] & (c)->q[17].u8[3];
    _t.u8[4] = (c)->q[5].u8[4] & (c)->q[17].u8[4];
    _t.u8[5] = (c)->q[5].u8[5] & (c)->q[17].u8[5];
    _t.u8[6] = (c)->q[5].u8[6] & (c)->q[17].u8[6];
    _t.u8[7] = (c)->q[5].u8[7] & (c)->q[17].u8[7];
    _t.u8[8] = (c)->q[5].u8[8] & (c)->q[17].u8[8];
    _t.u8[9] = (c)->q[5].u8[9] & (c)->q[17].u8[9];
    _t.u8[10] = (c)->q[5].u8[10] & (c)->q[17].u8[10];
    _t.u8[11] = (c)->q[5].u8[11] & (c)->q[17].u8[11];
    _t.u8[12] = (c)->q[5].u8[12] & (c)->q[17].u8[12];
    _t.u8[13] = (c)->q[5].u8[13] & (c)->q[17].u8[13];
    _t.u8[14] = (c)->q[5].u8[14] & (c)->q[17].u8[14];
    _t.u8[15] = (c)->q[5].u8[15] & (c)->q[17].u8[15];
    (c)->q[5] = _t; }
  /* cad58: ushl v4.2d, v4.2d, v3.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[4].u64[0], (int8_t)(c)->q[3].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[4].u64[1], (int8_t)(c)->q[3].u64[1]);
    (c)->q[4] = _t; }
  /* cad5c: ushl v5.2d, v5.2d, v6.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[5].u64[0], (int8_t)(c)->q[6].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[5].u64[1], (int8_t)(c)->q[6].u64[1]);
    (c)->q[5] = _t; }
  /* cad60: add v3.2d, v3.2d, v18.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[3].u64[0] + (c)->q[18].u64[0];
    _t.u64[1] = (c)->q[3].u64[1] + (c)->q[18].u64[1];
    (c)->q[3] = _t; }
  /* cad64: orr v1.16b, v4.16b, v1.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[4].u8[0] | (c)->q[1].u8[0];
    _t.u8[1] = (c)->q[4].u8[1] | (c)->q[1].u8[1];
    _t.u8[2] = (c)->q[4].u8[2] | (c)->q[1].u8[2];
    _t.u8[3] = (c)->q[4].u8[3] | (c)->q[1].u8[3];
    _t.u8[4] = (c)->q[4].u8[4] | (c)->q[1].u8[4];
    _t.u8[5] = (c)->q[4].u8[5] | (c)->q[1].u8[5];
    _t.u8[6] = (c)->q[4].u8[6] | (c)->q[1].u8[6];
    _t.u8[7] = (c)->q[4].u8[7] | (c)->q[1].u8[7];
    _t.u8[8] = (c)->q[4].u8[8] | (c)->q[1].u8[8];
    _t.u8[9] = (c)->q[4].u8[9] | (c)->q[1].u8[9];
    _t.u8[10] = (c)->q[4].u8[10] | (c)->q[1].u8[10];
    _t.u8[11] = (c)->q[4].u8[11] | (c)->q[1].u8[11];
    _t.u8[12] = (c)->q[4].u8[12] | (c)->q[1].u8[12];
    _t.u8[13] = (c)->q[4].u8[13] | (c)->q[1].u8[13];
    _t.u8[14] = (c)->q[4].u8[14] | (c)->q[1].u8[14];
    _t.u8[15] = (c)->q[4].u8[15] | (c)->q[1].u8[15];
    (c)->q[1] = _t; }
  /* cad68: orr v2.16b, v5.16b, v2.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[5].u8[0] | (c)->q[2].u8[0];
    _t.u8[1] = (c)->q[5].u8[1] | (c)->q[2].u8[1];
    _t.u8[2] = (c)->q[5].u8[2] | (c)->q[2].u8[2];
    _t.u8[3] = (c)->q[5].u8[3] | (c)->q[2].u8[3];
    _t.u8[4] = (c)->q[5].u8[4] | (c)->q[2].u8[4];
    _t.u8[5] = (c)->q[5].u8[5] | (c)->q[2].u8[5];
    _t.u8[6] = (c)->q[5].u8[6] | (c)->q[2].u8[6];
    _t.u8[7] = (c)->q[5].u8[7] | (c)->q[2].u8[7];
    _t.u8[8] = (c)->q[5].u8[8] | (c)->q[2].u8[8];
    _t.u8[9] = (c)->q[5].u8[9] | (c)->q[2].u8[9];
    _t.u8[10] = (c)->q[5].u8[10] | (c)->q[2].u8[10];
    _t.u8[11] = (c)->q[5].u8[11] | (c)->q[2].u8[11];
    _t.u8[12] = (c)->q[5].u8[12] | (c)->q[2].u8[12];
    _t.u8[13] = (c)->q[5].u8[13] | (c)->q[2].u8[13];
    _t.u8[14] = (c)->q[5].u8[14] | (c)->q[2].u8[14];
    _t.u8[15] = (c)->q[5].u8[15] | (c)->q[2].u8[15];
    (c)->q[2] = _t; }
  /* cad6c: b.ne #0xcad38 */
  if (ARC_COND(c, 1)) goto L_cad38;
  /* cad70: orr v1.16b, v2.16b, v1.16b */
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
  /* cad74: ext v2.16b, v1.16b, v1.16b, #8 */
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
  /* cad78: orr v1.8b, v1.8b, v2.8b */
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
  /* cad7c: fmov x14, d1 */
  ARC_X_W(c, 14, ARC_DU_R(c, 1));
  /* cad80: cbnz x13, #0xcad1c */
  if ((ARC_X_R(c, 13)) != 0) goto L_cad1c;
L_cad84:;
  /* cad84: movi v1.2d, #0000000000000000 */
  arc_v_clear(c, 1);
  /* cad88: movi v2.2d, #0000000000000000 */
  arc_v_clear(c, 2);
  /* cad8c: sub x13, x12, #8 */
  ARC_X_W(c, 13, (ARC_X_R(c, 12) - UINT64_C(8)));
  /* cad90: mov v3.16b, v19.16b */
  (c)->q[3] = (c)->q[19];
  /* cad94: mov w15, #0x40 */
  ARC_W_W(c, 15, UINT64_C(64));
L_cad98:;
  /* cad98: ldp q5, q4, [x13, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 13) + INT64_C(-16));
    arc_q_w(c, 5, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 4, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* cad9c: dup v6.2d, x26 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 26));
    _t.u64[1] = (ARC_X_R(c, 26));
    (c)->q[6] = _t; }
  /* cada0: dup v7.2d, x27 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 27));
    _t.u64[1] = (ARC_X_R(c, 27));
    (c)->q[7] = _t; }
  /* cada4: sub x15, x15, #4 */
  ARC_X_W(c, 15, (ARC_X_R(c, 15) - UINT64_C(4)));
  /* cada8: sub x13, x13, #0x20 */
  ARC_X_W(c, 13, (ARC_X_R(c, 13) - UINT64_C(32)));
  /* cadac: ext v4.16b, v4.16b, v4.16b, #8 */
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
  /* cadb0: ext v5.16b, v5.16b, v5.16b, #8 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[5].u8[8];
    _t.u8[1] = (c)->q[5].u8[9];
    _t.u8[2] = (c)->q[5].u8[10];
    _t.u8[3] = (c)->q[5].u8[11];
    _t.u8[4] = (c)->q[5].u8[12];
    _t.u8[5] = (c)->q[5].u8[13];
    _t.u8[6] = (c)->q[5].u8[14];
    _t.u8[7] = (c)->q[5].u8[15];
    _t.u8[8] = (c)->q[5].u8[0];
    _t.u8[9] = (c)->q[5].u8[1];
    _t.u8[10] = (c)->q[5].u8[2];
    _t.u8[11] = (c)->q[5].u8[3];
    _t.u8[12] = (c)->q[5].u8[4];
    _t.u8[13] = (c)->q[5].u8[5];
    _t.u8[14] = (c)->q[5].u8[6];
    _t.u8[15] = (c)->q[5].u8[7];
    (c)->q[5] = _t; }
  /* cadb4: add v6.2d, v3.2d, v6.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[3].u64[0] + (c)->q[6].u64[0];
    _t.u64[1] = (c)->q[3].u64[1] + (c)->q[6].u64[1];
    (c)->q[6] = _t; }
  /* cadb8: cmhi v4.2d, v0.2d, v4.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = ((c)->q[0].u64[0] > (c)->q[4].u64[0]) ? (uint64_t)~(uint64_t)0 : 0;
    _t.u64[1] = ((c)->q[0].u64[1] > (c)->q[4].u64[1]) ? (uint64_t)~(uint64_t)0 : 0;
    (c)->q[4] = _t; }
  /* cadbc: cmhi v5.2d, v0.2d, v5.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = ((c)->q[0].u64[0] > (c)->q[5].u64[0]) ? (uint64_t)~(uint64_t)0 : 0;
    _t.u64[1] = ((c)->q[0].u64[1] > (c)->q[5].u64[1]) ? (uint64_t)~(uint64_t)0 : 0;
    (c)->q[5] = _t; }
  /* cadc0: and v4.16b, v4.16b, v7.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[4].u8[0] & (c)->q[7].u8[0];
    _t.u8[1] = (c)->q[4].u8[1] & (c)->q[7].u8[1];
    _t.u8[2] = (c)->q[4].u8[2] & (c)->q[7].u8[2];
    _t.u8[3] = (c)->q[4].u8[3] & (c)->q[7].u8[3];
    _t.u8[4] = (c)->q[4].u8[4] & (c)->q[7].u8[4];
    _t.u8[5] = (c)->q[4].u8[5] & (c)->q[7].u8[5];
    _t.u8[6] = (c)->q[4].u8[6] & (c)->q[7].u8[6];
    _t.u8[7] = (c)->q[4].u8[7] & (c)->q[7].u8[7];
    _t.u8[8] = (c)->q[4].u8[8] & (c)->q[7].u8[8];
    _t.u8[9] = (c)->q[4].u8[9] & (c)->q[7].u8[9];
    _t.u8[10] = (c)->q[4].u8[10] & (c)->q[7].u8[10];
    _t.u8[11] = (c)->q[4].u8[11] & (c)->q[7].u8[11];
    _t.u8[12] = (c)->q[4].u8[12] & (c)->q[7].u8[12];
    _t.u8[13] = (c)->q[4].u8[13] & (c)->q[7].u8[13];
    _t.u8[14] = (c)->q[4].u8[14] & (c)->q[7].u8[14];
    _t.u8[15] = (c)->q[4].u8[15] & (c)->q[7].u8[15];
    (c)->q[4] = _t; }
  /* cadc4: and v5.16b, v5.16b, v7.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[5].u8[0] & (c)->q[7].u8[0];
    _t.u8[1] = (c)->q[5].u8[1] & (c)->q[7].u8[1];
    _t.u8[2] = (c)->q[5].u8[2] & (c)->q[7].u8[2];
    _t.u8[3] = (c)->q[5].u8[3] & (c)->q[7].u8[3];
    _t.u8[4] = (c)->q[5].u8[4] & (c)->q[7].u8[4];
    _t.u8[5] = (c)->q[5].u8[5] & (c)->q[7].u8[5];
    _t.u8[6] = (c)->q[5].u8[6] & (c)->q[7].u8[6];
    _t.u8[7] = (c)->q[5].u8[7] & (c)->q[7].u8[7];
    _t.u8[8] = (c)->q[5].u8[8] & (c)->q[7].u8[8];
    _t.u8[9] = (c)->q[5].u8[9] & (c)->q[7].u8[9];
    _t.u8[10] = (c)->q[5].u8[10] & (c)->q[7].u8[10];
    _t.u8[11] = (c)->q[5].u8[11] & (c)->q[7].u8[11];
    _t.u8[12] = (c)->q[5].u8[12] & (c)->q[7].u8[12];
    _t.u8[13] = (c)->q[5].u8[13] & (c)->q[7].u8[13];
    _t.u8[14] = (c)->q[5].u8[14] & (c)->q[7].u8[14];
    _t.u8[15] = (c)->q[5].u8[15] & (c)->q[7].u8[15];
    (c)->q[5] = _t; }
  /* cadc8: ushl v4.2d, v4.2d, v3.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[4].u64[0], (int8_t)(c)->q[3].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[4].u64[1], (int8_t)(c)->q[3].u64[1]);
    (c)->q[4] = _t; }
  /* cadcc: ushl v5.2d, v5.2d, v6.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[5].u64[0], (int8_t)(c)->q[6].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[5].u64[1], (int8_t)(c)->q[6].u64[1]);
    (c)->q[5] = _t; }
  /* cadd0: dup v6.2d, x28 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 28));
    _t.u64[1] = (ARC_X_R(c, 28));
    (c)->q[6] = _t; }
  /* cadd4: orr v1.16b, v4.16b, v1.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[4].u8[0] | (c)->q[1].u8[0];
    _t.u8[1] = (c)->q[4].u8[1] | (c)->q[1].u8[1];
    _t.u8[2] = (c)->q[4].u8[2] | (c)->q[1].u8[2];
    _t.u8[3] = (c)->q[4].u8[3] | (c)->q[1].u8[3];
    _t.u8[4] = (c)->q[4].u8[4] | (c)->q[1].u8[4];
    _t.u8[5] = (c)->q[4].u8[5] | (c)->q[1].u8[5];
    _t.u8[6] = (c)->q[4].u8[6] | (c)->q[1].u8[6];
    _t.u8[7] = (c)->q[4].u8[7] | (c)->q[1].u8[7];
    _t.u8[8] = (c)->q[4].u8[8] | (c)->q[1].u8[8];
    _t.u8[9] = (c)->q[4].u8[9] | (c)->q[1].u8[9];
    _t.u8[10] = (c)->q[4].u8[10] | (c)->q[1].u8[10];
    _t.u8[11] = (c)->q[4].u8[11] | (c)->q[1].u8[11];
    _t.u8[12] = (c)->q[4].u8[12] | (c)->q[1].u8[12];
    _t.u8[13] = (c)->q[4].u8[13] | (c)->q[1].u8[13];
    _t.u8[14] = (c)->q[4].u8[14] | (c)->q[1].u8[14];
    _t.u8[15] = (c)->q[4].u8[15] | (c)->q[1].u8[15];
    (c)->q[1] = _t; }
  /* cadd8: orr v2.16b, v5.16b, v2.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[5].u8[0] | (c)->q[2].u8[0];
    _t.u8[1] = (c)->q[5].u8[1] | (c)->q[2].u8[1];
    _t.u8[2] = (c)->q[5].u8[2] | (c)->q[2].u8[2];
    _t.u8[3] = (c)->q[5].u8[3] | (c)->q[2].u8[3];
    _t.u8[4] = (c)->q[5].u8[4] | (c)->q[2].u8[4];
    _t.u8[5] = (c)->q[5].u8[5] | (c)->q[2].u8[5];
    _t.u8[6] = (c)->q[5].u8[6] | (c)->q[2].u8[6];
    _t.u8[7] = (c)->q[5].u8[7] | (c)->q[2].u8[7];
    _t.u8[8] = (c)->q[5].u8[8] | (c)->q[2].u8[8];
    _t.u8[9] = (c)->q[5].u8[9] | (c)->q[2].u8[9];
    _t.u8[10] = (c)->q[5].u8[10] | (c)->q[2].u8[10];
    _t.u8[11] = (c)->q[5].u8[11] | (c)->q[2].u8[11];
    _t.u8[12] = (c)->q[5].u8[12] | (c)->q[2].u8[12];
    _t.u8[13] = (c)->q[5].u8[13] | (c)->q[2].u8[13];
    _t.u8[14] = (c)->q[5].u8[14] | (c)->q[2].u8[14];
    _t.u8[15] = (c)->q[5].u8[15] | (c)->q[2].u8[15];
    (c)->q[2] = _t; }
  /* caddc: add v3.2d, v3.2d, v6.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[3].u64[0] + (c)->q[6].u64[0];
    _t.u64[1] = (c)->q[3].u64[1] + (c)->q[6].u64[1];
    (c)->q[3] = _t; }
  /* cade0: cbnz x15, #0xcad98 */
  if ((ARC_X_R(c, 15)) != 0) goto L_cad98;
  /* cade4: orr v1.16b, v2.16b, v1.16b */
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
  /* cade8: ext v2.16b, v1.16b, v1.16b, #8 */
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
  /* cadec: orr v1.8b, v1.8b, v2.8b */
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
  /* cadf0: fmov x13, d1 */
  ARC_X_W(c, 13, ARC_DU_R(c, 1));
  /* cadf4: cbz x14, #0xcacec */
  if ((ARC_X_R(c, 14)) == 0) goto L_cacec;
L_cadf8:;
  /* cadf8: cbz x13, #0xcacec */
  if ((ARC_X_R(c, 13)) == 0) goto L_cacec;
L_cadfc:;
  /* cadfc: rbit x15, x13 */
  ARC_X_W(c, 15, arc_rbit64(ARC_X_R(c, 13)));
  /* cae00: rbit x16, x14 */
  ARC_X_W(c, 16, arc_rbit64(ARC_X_R(c, 14)));
  /* cae04: sub x17, x13, #1 */
  ARC_X_W(c, 17, (ARC_X_R(c, 13) - UINT64_C(1)));
  /* cae08: sub x3, x14, #1 */
  ARC_X_W(c, 3, (ARC_X_R(c, 14) - UINT64_C(1)));
  /* cae0c: and x13, x17, x13 */
  ARC_X_W(c, 13, (ARC_X_R(c, 17) & ARC_X_R(c, 13)));
  /* cae10: clz x15, x15 */
  ARC_X_W(c, 15, arc_clz64(ARC_X_R(c, 15)));
  /* cae14: clz x16, x16 */
  ARC_X_W(c, 16, arc_clz64(ARC_X_R(c, 16)));
  /* cae18: and x14, x3, x14 */
  ARC_X_W(c, 14, (ARC_X_R(c, 3) & ARC_X_R(c, 14)));
  /* cae1c: sub x15, x12, x15, lsl #3 */
  ARC_X_W(c, 15, (ARC_X_R(c, 12) - ((uint64_t)(ARC_X_R(c, 15)) << 3)));
  /* cae20: ldr x0, [x11, x16, lsl #3] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 11) + ((uint64_t)(ARC_X_R(c, 16)) << 3))));
  /* cae24: ldr x1, [x15] */
  ARC_X_W(c, 1, arc_ld64(ARC_X_R(c, 15)));
  /* cae28: str x1, [x11, x16, lsl #3] */
  arc_st64((ARC_X_R(c, 11) + ((uint64_t)(ARC_X_R(c, 16)) << 3)), ARC_X_R(c, 1));
  /* cae2c: str x0, [x15] */
  arc_st64(ARC_X_R(c, 15), ARC_X_R(c, 0));
  /* cae30: cbz x13, #0xcacec */
  if ((ARC_X_R(c, 13)) == 0) goto L_cacec;
  /* cae34: cbnz x14, #0xcadfc */
  if ((ARC_X_R(c, 14)) != 0) goto L_cadfc;
  /* cae38: b #0xcacec */
  goto L_cacec;
L_cae3c:;
  /* cae3c: asr x15, x14, #3 */
  ARC_X_W(c, 15, ((uint64_t)((int64_t)(ARC_X_R(c, 14)) >> ((UINT64_C(3)) & 63))));
  /* cae40: mov x13, xzr */
  ARC_X_W(c, 13, ARC_X_R(c, 31));
  /* cae44: mov w16, #1 */
  ARC_W_W(c, 16, UINT64_C(1));
  /* cae48: b #0xcae70 */
  goto L_cae70;
L_cae4c:;
  /* cae4c: asr x15, x15, #3 */
  ARC_X_W(c, 15, ((uint64_t)((int64_t)(ARC_X_R(c, 15)) >> ((UINT64_C(3)) & 63))));
  /* cae50: orr x17, x13, x14 */
  ARC_X_W(c, 17, (ARC_X_R(c, 13) | ARC_X_R(c, 14)));
  /* cae54: cbz x17, #0xcae70 */
  if ((ARC_X_R(c, 17)) == 0) goto L_cae70;
  /* cae58: sub x15, x15, #0x3f */
  ARC_X_W(c, 15, (ARC_X_R(c, 15) - UINT64_C(63)));
  /* cae5c: mov w0, #0x40 */
  ARC_W_W(c, 0, UINT64_C(64));
  /* cae60: mov w17, #0x40 */
  ARC_W_W(c, 17, UINT64_C(64));
  /* cae64: cbz x14, #0xcae80 */
  if ((ARC_X_R(c, 14)) == 0) goto L_cae80;
  /* cae68: cbnz w16, #0xcaf50 */
  if ((ARC_W_R(c, 16)) != 0) goto L_caf50;
  /* cae6c: b #0xcb014 */
  goto L_cb014;
L_cae70:;
  /* cae70: add x14, x15, #1 */
  ARC_X_W(c, 14, (ARC_X_R(c, 15) + UINT64_C(1)));
  /* cae74: add x15, x14, x14, lsr #63 */
  ARC_X_W(c, 15, (ARC_X_R(c, 14) + ((uint64_t)(ARC_X_R(c, 14)) >> 63)));
  /* cae78: asr x15, x15, #1 */
  ARC_X_W(c, 15, ((uint64_t)((int64_t)(ARC_X_R(c, 15)) >> ((UINT64_C(1)) & 63))));
  /* cae7c: sub x0, x14, x15 */
  ARC_X_W(c, 0, (ARC_X_R(c, 14) - ARC_X_R(c, 15)));
L_cae80:;
  /* cae80: cmp x15, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 15), UINT64_C(1));
  /* cae84: b.lt #0xcaea0 */
  if (ARC_COND(c, 11)) goto L_caea0;
  /* cae88: cmp x15, #4 */
  (void)arc_sub64(c, ARC_X_R(c, 15), UINT64_C(4));
  /* cae8c: b.hs #0xcaea8 */
  if (ARC_COND(c, 2)) goto L_caea8;
  /* cae90: mov x14, xzr */
  ARC_X_W(c, 14, ARC_X_R(c, 31));
  /* cae94: mov x17, xzr */
  ARC_X_W(c, 17, ARC_X_R(c, 31));
  /* cae98: mov x1, x11 */
  ARC_X_W(c, 1, ARC_X_R(c, 11));
  /* cae9c: b #0xcaf24 */
  goto L_caf24;
L_caea0:;
  /* caea0: mov x14, xzr */
  ARC_X_W(c, 14, ARC_X_R(c, 31));
  /* caea4: b #0xcaf44 */
  goto L_caf44;
L_caea8:;
  /* caea8: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* caeac: movi v1.2d, #0000000000000000 */
  arc_v_clear(c, 1);
  /* caeb0: and x17, x15, #0x7ffffffffffffffc */
  ARC_X_W(c, 17, (ARC_X_R(c, 15) & UINT64_C(9223372036854775804)));
  /* caeb4: dup v2.2d, x8 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 8));
    _t.u64[1] = (ARC_X_R(c, 8));
    (c)->q[2] = _t; }
  /* caeb8: mov v3.16b, v19.16b */
  (c)->q[3] = (c)->q[19];
  /* caebc: add x1, x11, x17, lsl #3 */
  ARC_X_W(c, 1, (ARC_X_R(c, 11) + ((uint64_t)(ARC_X_R(c, 17)) << 3)));
  /* caec0: add x14, x11, #0x10 */
  ARC_X_W(c, 14, (ARC_X_R(c, 11) + UINT64_C(16)));
  /* caec4: mov x3, x17 */
  ARC_X_W(c, 3, ARC_X_R(c, 17));
L_caec8:;
  /* caec8: ldp q4, q5, [x14, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 14) + INT64_C(-16));
    arc_q_w(c, 4, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 5, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* caecc: dup v6.2d, x26 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 26));
    _t.u64[1] = (ARC_X_R(c, 26));
    (c)->q[6] = _t; }
  /* caed0: dup v7.2d, x27 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 27));
    _t.u64[1] = (ARC_X_R(c, 27));
    (c)->q[7] = _t; }
  /* caed4: subs x3, x3, #4 */
  ARC_X_W(c, 3, arc_sub64(c, ARC_X_R(c, 3), UINT64_C(4)));
  /* caed8: add x14, x14, #0x20 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) + UINT64_C(32)));
  /* caedc: cmhs v4.2d, v4.2d, v2.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = ((c)->q[4].u64[0] >= (c)->q[2].u64[0]) ? (uint64_t)~(uint64_t)0 : 0;
    _t.u64[1] = ((c)->q[4].u64[1] >= (c)->q[2].u64[1]) ? (uint64_t)~(uint64_t)0 : 0;
    (c)->q[4] = _t; }
  /* caee0: cmhs v5.2d, v5.2d, v2.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = ((c)->q[5].u64[0] >= (c)->q[2].u64[0]) ? (uint64_t)~(uint64_t)0 : 0;
    _t.u64[1] = ((c)->q[5].u64[1] >= (c)->q[2].u64[1]) ? (uint64_t)~(uint64_t)0 : 0;
    (c)->q[5] = _t; }
  /* caee4: add v6.2d, v3.2d, v6.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[3].u64[0] + (c)->q[6].u64[0];
    _t.u64[1] = (c)->q[3].u64[1] + (c)->q[6].u64[1];
    (c)->q[6] = _t; }
  /* caee8: and v4.16b, v4.16b, v7.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[4].u8[0] & (c)->q[7].u8[0];
    _t.u8[1] = (c)->q[4].u8[1] & (c)->q[7].u8[1];
    _t.u8[2] = (c)->q[4].u8[2] & (c)->q[7].u8[2];
    _t.u8[3] = (c)->q[4].u8[3] & (c)->q[7].u8[3];
    _t.u8[4] = (c)->q[4].u8[4] & (c)->q[7].u8[4];
    _t.u8[5] = (c)->q[4].u8[5] & (c)->q[7].u8[5];
    _t.u8[6] = (c)->q[4].u8[6] & (c)->q[7].u8[6];
    _t.u8[7] = (c)->q[4].u8[7] & (c)->q[7].u8[7];
    _t.u8[8] = (c)->q[4].u8[8] & (c)->q[7].u8[8];
    _t.u8[9] = (c)->q[4].u8[9] & (c)->q[7].u8[9];
    _t.u8[10] = (c)->q[4].u8[10] & (c)->q[7].u8[10];
    _t.u8[11] = (c)->q[4].u8[11] & (c)->q[7].u8[11];
    _t.u8[12] = (c)->q[4].u8[12] & (c)->q[7].u8[12];
    _t.u8[13] = (c)->q[4].u8[13] & (c)->q[7].u8[13];
    _t.u8[14] = (c)->q[4].u8[14] & (c)->q[7].u8[14];
    _t.u8[15] = (c)->q[4].u8[15] & (c)->q[7].u8[15];
    (c)->q[4] = _t; }
  /* caeec: and v5.16b, v5.16b, v7.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[5].u8[0] & (c)->q[7].u8[0];
    _t.u8[1] = (c)->q[5].u8[1] & (c)->q[7].u8[1];
    _t.u8[2] = (c)->q[5].u8[2] & (c)->q[7].u8[2];
    _t.u8[3] = (c)->q[5].u8[3] & (c)->q[7].u8[3];
    _t.u8[4] = (c)->q[5].u8[4] & (c)->q[7].u8[4];
    _t.u8[5] = (c)->q[5].u8[5] & (c)->q[7].u8[5];
    _t.u8[6] = (c)->q[5].u8[6] & (c)->q[7].u8[6];
    _t.u8[7] = (c)->q[5].u8[7] & (c)->q[7].u8[7];
    _t.u8[8] = (c)->q[5].u8[8] & (c)->q[7].u8[8];
    _t.u8[9] = (c)->q[5].u8[9] & (c)->q[7].u8[9];
    _t.u8[10] = (c)->q[5].u8[10] & (c)->q[7].u8[10];
    _t.u8[11] = (c)->q[5].u8[11] & (c)->q[7].u8[11];
    _t.u8[12] = (c)->q[5].u8[12] & (c)->q[7].u8[12];
    _t.u8[13] = (c)->q[5].u8[13] & (c)->q[7].u8[13];
    _t.u8[14] = (c)->q[5].u8[14] & (c)->q[7].u8[14];
    _t.u8[15] = (c)->q[5].u8[15] & (c)->q[7].u8[15];
    (c)->q[5] = _t; }
  /* caef0: ushl v4.2d, v4.2d, v3.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[4].u64[0], (int8_t)(c)->q[3].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[4].u64[1], (int8_t)(c)->q[3].u64[1]);
    (c)->q[4] = _t; }
  /* caef4: ushl v5.2d, v5.2d, v6.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[5].u64[0], (int8_t)(c)->q[6].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[5].u64[1], (int8_t)(c)->q[6].u64[1]);
    (c)->q[5] = _t; }
  /* caef8: dup v6.2d, x28 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 28));
    _t.u64[1] = (ARC_X_R(c, 28));
    (c)->q[6] = _t; }
  /* caefc: orr v0.16b, v4.16b, v0.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[4].u8[0] | (c)->q[0].u8[0];
    _t.u8[1] = (c)->q[4].u8[1] | (c)->q[0].u8[1];
    _t.u8[2] = (c)->q[4].u8[2] | (c)->q[0].u8[2];
    _t.u8[3] = (c)->q[4].u8[3] | (c)->q[0].u8[3];
    _t.u8[4] = (c)->q[4].u8[4] | (c)->q[0].u8[4];
    _t.u8[5] = (c)->q[4].u8[5] | (c)->q[0].u8[5];
    _t.u8[6] = (c)->q[4].u8[6] | (c)->q[0].u8[6];
    _t.u8[7] = (c)->q[4].u8[7] | (c)->q[0].u8[7];
    _t.u8[8] = (c)->q[4].u8[8] | (c)->q[0].u8[8];
    _t.u8[9] = (c)->q[4].u8[9] | (c)->q[0].u8[9];
    _t.u8[10] = (c)->q[4].u8[10] | (c)->q[0].u8[10];
    _t.u8[11] = (c)->q[4].u8[11] | (c)->q[0].u8[11];
    _t.u8[12] = (c)->q[4].u8[12] | (c)->q[0].u8[12];
    _t.u8[13] = (c)->q[4].u8[13] | (c)->q[0].u8[13];
    _t.u8[14] = (c)->q[4].u8[14] | (c)->q[0].u8[14];
    _t.u8[15] = (c)->q[4].u8[15] | (c)->q[0].u8[15];
    (c)->q[0] = _t; }
  /* caf00: orr v1.16b, v5.16b, v1.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[5].u8[0] | (c)->q[1].u8[0];
    _t.u8[1] = (c)->q[5].u8[1] | (c)->q[1].u8[1];
    _t.u8[2] = (c)->q[5].u8[2] | (c)->q[1].u8[2];
    _t.u8[3] = (c)->q[5].u8[3] | (c)->q[1].u8[3];
    _t.u8[4] = (c)->q[5].u8[4] | (c)->q[1].u8[4];
    _t.u8[5] = (c)->q[5].u8[5] | (c)->q[1].u8[5];
    _t.u8[6] = (c)->q[5].u8[6] | (c)->q[1].u8[6];
    _t.u8[7] = (c)->q[5].u8[7] | (c)->q[1].u8[7];
    _t.u8[8] = (c)->q[5].u8[8] | (c)->q[1].u8[8];
    _t.u8[9] = (c)->q[5].u8[9] | (c)->q[1].u8[9];
    _t.u8[10] = (c)->q[5].u8[10] | (c)->q[1].u8[10];
    _t.u8[11] = (c)->q[5].u8[11] | (c)->q[1].u8[11];
    _t.u8[12] = (c)->q[5].u8[12] | (c)->q[1].u8[12];
    _t.u8[13] = (c)->q[5].u8[13] | (c)->q[1].u8[13];
    _t.u8[14] = (c)->q[5].u8[14] | (c)->q[1].u8[14];
    _t.u8[15] = (c)->q[5].u8[15] | (c)->q[1].u8[15];
    (c)->q[1] = _t; }
  /* caf04: add v3.2d, v3.2d, v6.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[3].u64[0] + (c)->q[6].u64[0];
    _t.u64[1] = (c)->q[3].u64[1] + (c)->q[6].u64[1];
    (c)->q[3] = _t; }
  /* caf08: b.ne #0xcaec8 */
  if (ARC_COND(c, 1)) goto L_caec8;
  /* caf0c: orr v0.16b, v1.16b, v0.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[1].u8[0] | (c)->q[0].u8[0];
    _t.u8[1] = (c)->q[1].u8[1] | (c)->q[0].u8[1];
    _t.u8[2] = (c)->q[1].u8[2] | (c)->q[0].u8[2];
    _t.u8[3] = (c)->q[1].u8[3] | (c)->q[0].u8[3];
    _t.u8[4] = (c)->q[1].u8[4] | (c)->q[0].u8[4];
    _t.u8[5] = (c)->q[1].u8[5] | (c)->q[0].u8[5];
    _t.u8[6] = (c)->q[1].u8[6] | (c)->q[0].u8[6];
    _t.u8[7] = (c)->q[1].u8[7] | (c)->q[0].u8[7];
    _t.u8[8] = (c)->q[1].u8[8] | (c)->q[0].u8[8];
    _t.u8[9] = (c)->q[1].u8[9] | (c)->q[0].u8[9];
    _t.u8[10] = (c)->q[1].u8[10] | (c)->q[0].u8[10];
    _t.u8[11] = (c)->q[1].u8[11] | (c)->q[0].u8[11];
    _t.u8[12] = (c)->q[1].u8[12] | (c)->q[0].u8[12];
    _t.u8[13] = (c)->q[1].u8[13] | (c)->q[0].u8[13];
    _t.u8[14] = (c)->q[1].u8[14] | (c)->q[0].u8[14];
    _t.u8[15] = (c)->q[1].u8[15] | (c)->q[0].u8[15];
    (c)->q[0] = _t; }
  /* caf10: cmp x15, x17 */
  (void)arc_sub64(c, ARC_X_R(c, 15), ARC_X_R(c, 17));
  /* caf14: ext v1.16b, v0.16b, v0.16b, #8 */
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
  /* caf18: orr v0.8b, v0.8b, v1.8b */
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
  /* caf1c: fmov x14, d0 */
  ARC_X_W(c, 14, ARC_DU_R(c, 0));
  /* caf20: b.eq #0xcaf44 */
  if (ARC_COND(c, 0)) goto L_caf44;
L_caf24:;
  /* caf24: ldr x3, [x1], #8 */
  { const uint64_t _a = ARC_X_R(c, 1);
    ARC_X_W(c, 1, ARC_X_R(c, 1) + INT64_C(8));
    ARC_X_W(c, 3, arc_ld64(_a));
  }
  /* caf28: cmp x3, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 3), ARC_X_R(c, 8));
  /* caf2c: cset w3, hs */
  ARC_W_W(c, 3, (ARC_COND(c, 2) ? 1 : 0));
  /* caf30: lsl x3, x3, x17 */
  ARC_X_W(c, 3, ((uint64_t)(ARC_X_R(c, 3)) << ((ARC_X_R(c, 17)) & 63)));
  /* caf34: add x17, x17, #1 */
  ARC_X_W(c, 17, (ARC_X_R(c, 17) + UINT64_C(1)));
  /* caf38: cmp x15, x17 */
  (void)arc_sub64(c, ARC_X_R(c, 15), ARC_X_R(c, 17));
  /* caf3c: orr x14, x3, x14 */
  ARC_X_W(c, 14, (ARC_X_R(c, 3) | ARC_X_R(c, 14)));
  /* caf40: b.ne #0xcaf24 */
  if (ARC_COND(c, 1)) goto L_caf24;
L_caf44:;
  /* caf44: mov x17, x15 */
  ARC_X_W(c, 17, ARC_X_R(c, 15));
  /* caf48: mov x15, x0 */
  ARC_X_W(c, 15, ARC_X_R(c, 0));
  /* caf4c: cbz w16, #0xcb014 */
  if ((ARC_W_R(c, 16)) == 0) goto L_cb014;
L_caf50:;
  /* caf50: cmp x15, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 15), UINT64_C(1));
  /* caf54: b.lt #0xcb014 */
  if (ARC_COND(c, 11)) goto L_cb014;
  /* caf58: cmp x15, #4 */
  (void)arc_sub64(c, ARC_X_R(c, 15), UINT64_C(4));
  /* caf5c: b.hs #0xcaf70 */
  if (ARC_COND(c, 2)) goto L_caf70;
  /* caf60: mov x13, xzr */
  ARC_X_W(c, 13, ARC_X_R(c, 31));
  /* caf64: mov x16, xzr */
  ARC_X_W(c, 16, ARC_X_R(c, 31));
  /* caf68: mov x0, x12 */
  ARC_X_W(c, 0, ARC_X_R(c, 12));
  /* caf6c: b #0xcaff4 */
  goto L_caff4;
L_caf70:;
  /* caf70: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* caf74: movi v1.2d, #0000000000000000 */
  arc_v_clear(c, 1);
  /* caf78: and x16, x15, #0x7ffffffffffffffc */
  ARC_X_W(c, 16, (ARC_X_R(c, 15) & UINT64_C(9223372036854775804)));
  /* caf7c: dup v2.2d, x8 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 8));
    _t.u64[1] = (ARC_X_R(c, 8));
    (c)->q[2] = _t; }
  /* caf80: mov v3.16b, v19.16b */
  (c)->q[3] = (c)->q[19];
  /* caf84: sub x0, x12, x16, lsl #3 */
  ARC_X_W(c, 0, (ARC_X_R(c, 12) - ((uint64_t)(ARC_X_R(c, 16)) << 3)));
  /* caf88: sub x13, x12, #8 */
  ARC_X_W(c, 13, (ARC_X_R(c, 12) - UINT64_C(8)));
  /* caf8c: mov x1, x16 */
  ARC_X_W(c, 1, ARC_X_R(c, 16));
L_caf90:;
  /* caf90: ldp q5, q4, [x13, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 13) + INT64_C(-16));
    arc_q_w(c, 5, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 4, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* caf94: dup v6.2d, x26 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 26));
    _t.u64[1] = (ARC_X_R(c, 26));
    (c)->q[6] = _t; }
  /* caf98: dup v7.2d, x27 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 27));
    _t.u64[1] = (ARC_X_R(c, 27));
    (c)->q[7] = _t; }
  /* caf9c: sub x1, x1, #4 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) - UINT64_C(4)));
  /* cafa0: sub x13, x13, #0x20 */
  ARC_X_W(c, 13, (ARC_X_R(c, 13) - UINT64_C(32)));
  /* cafa4: ext v4.16b, v4.16b, v4.16b, #8 */
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
  /* cafa8: ext v5.16b, v5.16b, v5.16b, #8 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[5].u8[8];
    _t.u8[1] = (c)->q[5].u8[9];
    _t.u8[2] = (c)->q[5].u8[10];
    _t.u8[3] = (c)->q[5].u8[11];
    _t.u8[4] = (c)->q[5].u8[12];
    _t.u8[5] = (c)->q[5].u8[13];
    _t.u8[6] = (c)->q[5].u8[14];
    _t.u8[7] = (c)->q[5].u8[15];
    _t.u8[8] = (c)->q[5].u8[0];
    _t.u8[9] = (c)->q[5].u8[1];
    _t.u8[10] = (c)->q[5].u8[2];
    _t.u8[11] = (c)->q[5].u8[3];
    _t.u8[12] = (c)->q[5].u8[4];
    _t.u8[13] = (c)->q[5].u8[5];
    _t.u8[14] = (c)->q[5].u8[6];
    _t.u8[15] = (c)->q[5].u8[7];
    (c)->q[5] = _t; }
  /* cafac: add v6.2d, v3.2d, v6.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[3].u64[0] + (c)->q[6].u64[0];
    _t.u64[1] = (c)->q[3].u64[1] + (c)->q[6].u64[1];
    (c)->q[6] = _t; }
  /* cafb0: cmhi v4.2d, v2.2d, v4.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = ((c)->q[2].u64[0] > (c)->q[4].u64[0]) ? (uint64_t)~(uint64_t)0 : 0;
    _t.u64[1] = ((c)->q[2].u64[1] > (c)->q[4].u64[1]) ? (uint64_t)~(uint64_t)0 : 0;
    (c)->q[4] = _t; }
  /* cafb4: cmhi v5.2d, v2.2d, v5.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = ((c)->q[2].u64[0] > (c)->q[5].u64[0]) ? (uint64_t)~(uint64_t)0 : 0;
    _t.u64[1] = ((c)->q[2].u64[1] > (c)->q[5].u64[1]) ? (uint64_t)~(uint64_t)0 : 0;
    (c)->q[5] = _t; }
  /* cafb8: and v4.16b, v4.16b, v7.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[4].u8[0] & (c)->q[7].u8[0];
    _t.u8[1] = (c)->q[4].u8[1] & (c)->q[7].u8[1];
    _t.u8[2] = (c)->q[4].u8[2] & (c)->q[7].u8[2];
    _t.u8[3] = (c)->q[4].u8[3] & (c)->q[7].u8[3];
    _t.u8[4] = (c)->q[4].u8[4] & (c)->q[7].u8[4];
    _t.u8[5] = (c)->q[4].u8[5] & (c)->q[7].u8[5];
    _t.u8[6] = (c)->q[4].u8[6] & (c)->q[7].u8[6];
    _t.u8[7] = (c)->q[4].u8[7] & (c)->q[7].u8[7];
    _t.u8[8] = (c)->q[4].u8[8] & (c)->q[7].u8[8];
    _t.u8[9] = (c)->q[4].u8[9] & (c)->q[7].u8[9];
    _t.u8[10] = (c)->q[4].u8[10] & (c)->q[7].u8[10];
    _t.u8[11] = (c)->q[4].u8[11] & (c)->q[7].u8[11];
    _t.u8[12] = (c)->q[4].u8[12] & (c)->q[7].u8[12];
    _t.u8[13] = (c)->q[4].u8[13] & (c)->q[7].u8[13];
    _t.u8[14] = (c)->q[4].u8[14] & (c)->q[7].u8[14];
    _t.u8[15] = (c)->q[4].u8[15] & (c)->q[7].u8[15];
    (c)->q[4] = _t; }
  /* cafbc: and v5.16b, v5.16b, v7.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[5].u8[0] & (c)->q[7].u8[0];
    _t.u8[1] = (c)->q[5].u8[1] & (c)->q[7].u8[1];
    _t.u8[2] = (c)->q[5].u8[2] & (c)->q[7].u8[2];
    _t.u8[3] = (c)->q[5].u8[3] & (c)->q[7].u8[3];
    _t.u8[4] = (c)->q[5].u8[4] & (c)->q[7].u8[4];
    _t.u8[5] = (c)->q[5].u8[5] & (c)->q[7].u8[5];
    _t.u8[6] = (c)->q[5].u8[6] & (c)->q[7].u8[6];
    _t.u8[7] = (c)->q[5].u8[7] & (c)->q[7].u8[7];
    _t.u8[8] = (c)->q[5].u8[8] & (c)->q[7].u8[8];
    _t.u8[9] = (c)->q[5].u8[9] & (c)->q[7].u8[9];
    _t.u8[10] = (c)->q[5].u8[10] & (c)->q[7].u8[10];
    _t.u8[11] = (c)->q[5].u8[11] & (c)->q[7].u8[11];
    _t.u8[12] = (c)->q[5].u8[12] & (c)->q[7].u8[12];
    _t.u8[13] = (c)->q[5].u8[13] & (c)->q[7].u8[13];
    _t.u8[14] = (c)->q[5].u8[14] & (c)->q[7].u8[14];
    _t.u8[15] = (c)->q[5].u8[15] & (c)->q[7].u8[15];
    (c)->q[5] = _t; }
  /* cafc0: ushl v4.2d, v4.2d, v3.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[4].u64[0], (int8_t)(c)->q[3].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[4].u64[1], (int8_t)(c)->q[3].u64[1]);
    (c)->q[4] = _t; }
  /* cafc4: ushl v5.2d, v5.2d, v6.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[5].u64[0], (int8_t)(c)->q[6].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[5].u64[1], (int8_t)(c)->q[6].u64[1]);
    (c)->q[5] = _t; }
  /* cafc8: dup v6.2d, x28 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 28));
    _t.u64[1] = (ARC_X_R(c, 28));
    (c)->q[6] = _t; }
  /* cafcc: orr v0.16b, v4.16b, v0.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[4].u8[0] | (c)->q[0].u8[0];
    _t.u8[1] = (c)->q[4].u8[1] | (c)->q[0].u8[1];
    _t.u8[2] = (c)->q[4].u8[2] | (c)->q[0].u8[2];
    _t.u8[3] = (c)->q[4].u8[3] | (c)->q[0].u8[3];
    _t.u8[4] = (c)->q[4].u8[4] | (c)->q[0].u8[4];
    _t.u8[5] = (c)->q[4].u8[5] | (c)->q[0].u8[5];
    _t.u8[6] = (c)->q[4].u8[6] | (c)->q[0].u8[6];
    _t.u8[7] = (c)->q[4].u8[7] | (c)->q[0].u8[7];
    _t.u8[8] = (c)->q[4].u8[8] | (c)->q[0].u8[8];
    _t.u8[9] = (c)->q[4].u8[9] | (c)->q[0].u8[9];
    _t.u8[10] = (c)->q[4].u8[10] | (c)->q[0].u8[10];
    _t.u8[11] = (c)->q[4].u8[11] | (c)->q[0].u8[11];
    _t.u8[12] = (c)->q[4].u8[12] | (c)->q[0].u8[12];
    _t.u8[13] = (c)->q[4].u8[13] | (c)->q[0].u8[13];
    _t.u8[14] = (c)->q[4].u8[14] | (c)->q[0].u8[14];
    _t.u8[15] = (c)->q[4].u8[15] | (c)->q[0].u8[15];
    (c)->q[0] = _t; }
  /* cafd0: orr v1.16b, v5.16b, v1.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[5].u8[0] | (c)->q[1].u8[0];
    _t.u8[1] = (c)->q[5].u8[1] | (c)->q[1].u8[1];
    _t.u8[2] = (c)->q[5].u8[2] | (c)->q[1].u8[2];
    _t.u8[3] = (c)->q[5].u8[3] | (c)->q[1].u8[3];
    _t.u8[4] = (c)->q[5].u8[4] | (c)->q[1].u8[4];
    _t.u8[5] = (c)->q[5].u8[5] | (c)->q[1].u8[5];
    _t.u8[6] = (c)->q[5].u8[6] | (c)->q[1].u8[6];
    _t.u8[7] = (c)->q[5].u8[7] | (c)->q[1].u8[7];
    _t.u8[8] = (c)->q[5].u8[8] | (c)->q[1].u8[8];
    _t.u8[9] = (c)->q[5].u8[9] | (c)->q[1].u8[9];
    _t.u8[10] = (c)->q[5].u8[10] | (c)->q[1].u8[10];
    _t.u8[11] = (c)->q[5].u8[11] | (c)->q[1].u8[11];
    _t.u8[12] = (c)->q[5].u8[12] | (c)->q[1].u8[12];
    _t.u8[13] = (c)->q[5].u8[13] | (c)->q[1].u8[13];
    _t.u8[14] = (c)->q[5].u8[14] | (c)->q[1].u8[14];
    _t.u8[15] = (c)->q[5].u8[15] | (c)->q[1].u8[15];
    (c)->q[1] = _t; }
  /* cafd4: add v3.2d, v3.2d, v6.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[3].u64[0] + (c)->q[6].u64[0];
    _t.u64[1] = (c)->q[3].u64[1] + (c)->q[6].u64[1];
    (c)->q[3] = _t; }
  /* cafd8: cbnz x1, #0xcaf90 */
  if ((ARC_X_R(c, 1)) != 0) goto L_caf90;
  /* cafdc: orr v0.16b, v1.16b, v0.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[1].u8[0] | (c)->q[0].u8[0];
    _t.u8[1] = (c)->q[1].u8[1] | (c)->q[0].u8[1];
    _t.u8[2] = (c)->q[1].u8[2] | (c)->q[0].u8[2];
    _t.u8[3] = (c)->q[1].u8[3] | (c)->q[0].u8[3];
    _t.u8[4] = (c)->q[1].u8[4] | (c)->q[0].u8[4];
    _t.u8[5] = (c)->q[1].u8[5] | (c)->q[0].u8[5];
    _t.u8[6] = (c)->q[1].u8[6] | (c)->q[0].u8[6];
    _t.u8[7] = (c)->q[1].u8[7] | (c)->q[0].u8[7];
    _t.u8[8] = (c)->q[1].u8[8] | (c)->q[0].u8[8];
    _t.u8[9] = (c)->q[1].u8[9] | (c)->q[0].u8[9];
    _t.u8[10] = (c)->q[1].u8[10] | (c)->q[0].u8[10];
    _t.u8[11] = (c)->q[1].u8[11] | (c)->q[0].u8[11];
    _t.u8[12] = (c)->q[1].u8[12] | (c)->q[0].u8[12];
    _t.u8[13] = (c)->q[1].u8[13] | (c)->q[0].u8[13];
    _t.u8[14] = (c)->q[1].u8[14] | (c)->q[0].u8[14];
    _t.u8[15] = (c)->q[1].u8[15] | (c)->q[0].u8[15];
    (c)->q[0] = _t; }
  /* cafe0: cmp x15, x16 */
  (void)arc_sub64(c, ARC_X_R(c, 15), ARC_X_R(c, 16));
  /* cafe4: ext v1.16b, v0.16b, v0.16b, #8 */
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
  /* cafe8: orr v0.8b, v0.8b, v1.8b */
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
  /* cafec: fmov x13, d0 */
  ARC_X_W(c, 13, ARC_DU_R(c, 0));
  /* caff0: b.eq #0xcb014 */
  if (ARC_COND(c, 0)) goto L_cb014;
L_caff4:;
  /* caff4: ldr x1, [x0], #0xfffffffffffffff8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(-8));
    ARC_X_W(c, 1, arc_ld64(_a));
  }
  /* caff8: cmp x1, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 1), ARC_X_R(c, 8));
  /* caffc: cset w1, lo */
  ARC_W_W(c, 1, (ARC_COND(c, 3) ? 1 : 0));
  /* cb000: lsl x1, x1, x16 */
  ARC_X_W(c, 1, ((uint64_t)(ARC_X_R(c, 1)) << ((ARC_X_R(c, 16)) & 63)));
  /* cb004: add x16, x16, #1 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(1)));
  /* cb008: cmp x15, x16 */
  (void)arc_sub64(c, ARC_X_R(c, 15), ARC_X_R(c, 16));
  /* cb00c: orr x13, x1, x13 */
  ARC_X_W(c, 13, (ARC_X_R(c, 1) | ARC_X_R(c, 13)));
  /* cb010: b.ne #0xcaff4 */
  if (ARC_COND(c, 1)) goto L_caff4;
L_cb014:;
  /* cb014: cbz x14, #0xcb058 */
  if ((ARC_X_R(c, 14)) == 0) goto L_cb058;
  /* cb018: cbz x13, #0xcb058 */
  if ((ARC_X_R(c, 13)) == 0) goto L_cb058;
L_cb01c:;
  /* cb01c: rbit x16, x13 */
  ARC_X_W(c, 16, arc_rbit64(ARC_X_R(c, 13)));
  /* cb020: rbit x0, x14 */
  ARC_X_W(c, 0, arc_rbit64(ARC_X_R(c, 14)));
  /* cb024: sub x1, x13, #1 */
  ARC_X_W(c, 1, (ARC_X_R(c, 13) - UINT64_C(1)));
  /* cb028: sub x4, x14, #1 */
  ARC_X_W(c, 4, (ARC_X_R(c, 14) - UINT64_C(1)));
  /* cb02c: and x13, x1, x13 */
  ARC_X_W(c, 13, (ARC_X_R(c, 1) & ARC_X_R(c, 13)));
  /* cb030: clz x16, x16 */
  ARC_X_W(c, 16, arc_clz64(ARC_X_R(c, 16)));
  /* cb034: clz x0, x0 */
  ARC_X_W(c, 0, arc_clz64(ARC_X_R(c, 0)));
  /* cb038: and x14, x4, x14 */
  ARC_X_W(c, 14, (ARC_X_R(c, 4) & ARC_X_R(c, 14)));
  /* cb03c: sub x16, x12, x16, lsl #3 */
  ARC_X_W(c, 16, (ARC_X_R(c, 12) - ((uint64_t)(ARC_X_R(c, 16)) << 3)));
  /* cb040: ldr x5, [x11, x0, lsl #3] */
  ARC_X_W(c, 5, arc_ld64((ARC_X_R(c, 11) + ((uint64_t)(ARC_X_R(c, 0)) << 3))));
  /* cb044: ldr x3, [x16] */
  ARC_X_W(c, 3, arc_ld64(ARC_X_R(c, 16)));
  /* cb048: str x3, [x11, x0, lsl #3] */
  arc_st64((ARC_X_R(c, 11) + ((uint64_t)(ARC_X_R(c, 0)) << 3)), ARC_X_R(c, 3));
  /* cb04c: str x5, [x16] */
  arc_st64(ARC_X_R(c, 16), ARC_X_R(c, 5));
  /* cb050: cbz x13, #0xcb058 */
  if ((ARC_X_R(c, 13)) == 0) goto L_cb058;
  /* cb054: cbnz x14, #0xcb01c */
  if ((ARC_X_R(c, 14)) != 0) goto L_cb01c;
L_cb058:;
  /* cb058: cmp x14, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 14), UINT64_C(0));
  /* cb05c: csel x16, x17, xzr, eq */
  ARC_X_W(c, 16, (ARC_COND(c, 0) ? (ARC_X_R(c, 17)) : ARC_X_R(c, 31)));
  /* cb060: cmp x13, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 13), UINT64_C(0));
  /* cb064: csel x15, x15, xzr, eq */
  ARC_X_W(c, 15, (ARC_COND(c, 0) ? (ARC_X_R(c, 15)) : ARC_X_R(c, 31)));
  /* cb068: add x23, x11, x16, lsl #3 */
  ARC_X_W(c, 23, (ARC_X_R(c, 11) + ((uint64_t)(ARC_X_R(c, 16)) << 3)));
  /* cb06c: sub x11, x12, x15, lsl #3 */
  ARC_X_W(c, 11, (ARC_X_R(c, 12) - ((uint64_t)(ARC_X_R(c, 15)) << 3)));
  /* cb070: cbnz x14, #0xcb08c */
  if ((ARC_X_R(c, 14)) != 0) goto L_cb08c;
  /* cb074: cbnz x13, #0xcb0c4 */
  if ((ARC_X_R(c, 13)) != 0) goto L_cb0c4;
  /* cb078: b #0xcb0f0 */
  goto L_cb0f0;
L_cb07c:;
  /* cb07c: lsl x12, x21, x12 */
  ARC_X_W(c, 12, ((uint64_t)(ARC_X_R(c, 21)) << ((ARC_X_R(c, 12)) & 63)));
  /* cb080: sub x11, x11, #8 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) - UINT64_C(8)));
  /* cb084: bic x14, x14, x12 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) & (~ARC_X_R(c, 12))));
  /* cb088: cbz x14, #0xcb0ec */
  if ((ARC_X_R(c, 14)) == 0) goto L_cb0ec;
L_cb08c:;
  /* cb08c: clz x12, x14 */
  ARC_X_W(c, 12, arc_clz64(ARC_X_R(c, 14)));
  /* cb090: eor x12, x12, #0x3f */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) ^ UINT64_C(63)));
  /* cb094: add x13, x23, x12, lsl #3 */
  ARC_X_W(c, 13, (ARC_X_R(c, 23) + ((uint64_t)(ARC_X_R(c, 12)) << 3)));
  /* cb098: cmp x11, x13 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 13));
  /* cb09c: b.eq #0xcb07c */
  if (ARC_COND(c, 0)) goto L_cb07c;
  /* cb0a0: ldr x15, [x11] */
  ARC_X_W(c, 15, arc_ld64(ARC_X_R(c, 11)));
  /* cb0a4: ldr x16, [x13] */
  ARC_X_W(c, 16, arc_ld64(ARC_X_R(c, 13)));
  /* cb0a8: str x15, [x13] */
  arc_st64(ARC_X_R(c, 13), ARC_X_R(c, 15));
  /* cb0ac: str x16, [x11] */
  arc_st64(ARC_X_R(c, 11), ARC_X_R(c, 16));
  /* cb0b0: b #0xcb07c */
  goto L_cb07c;
L_cb0b4:;
  /* cb0b4: lsl x12, x21, x12 */
  ARC_X_W(c, 12, ((uint64_t)(ARC_X_R(c, 21)) << ((ARC_X_R(c, 12)) & 63)));
  /* cb0b8: add x23, x23, #8 */
  ARC_X_W(c, 23, (ARC_X_R(c, 23) + UINT64_C(8)));
  /* cb0bc: bic x13, x13, x12 */
  ARC_X_W(c, 13, (ARC_X_R(c, 13) & (~ARC_X_R(c, 12))));
  /* cb0c0: cbz x13, #0xcb0f0 */
  if ((ARC_X_R(c, 13)) == 0) goto L_cb0f0;
L_cb0c4:;
  /* cb0c4: clz x12, x13 */
  ARC_X_W(c, 12, arc_clz64(ARC_X_R(c, 13)));
  /* cb0c8: eor x12, x12, #0x3f */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) ^ UINT64_C(63)));
  /* cb0cc: sub x14, x11, x12, lsl #3 */
  ARC_X_W(c, 14, (ARC_X_R(c, 11) - ((uint64_t)(ARC_X_R(c, 12)) << 3)));
  /* cb0d0: cmp x23, x14 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 14));
  /* cb0d4: b.eq #0xcb0b4 */
  if (ARC_COND(c, 0)) goto L_cb0b4;
  /* cb0d8: ldr x15, [x23] */
  ARC_X_W(c, 15, arc_ld64(ARC_X_R(c, 23)));
  /* cb0dc: ldr x16, [x14] */
  ARC_X_W(c, 16, arc_ld64(ARC_X_R(c, 14)));
  /* cb0e0: str x15, [x14] */
  arc_st64(ARC_X_R(c, 14), ARC_X_R(c, 15));
  /* cb0e4: str x16, [x23] */
  arc_st64(ARC_X_R(c, 23), ARC_X_R(c, 16));
  /* cb0e8: b #0xcb0b4 */
  goto L_cb0b4;
L_cb0ec:;
  /* cb0ec: add x23, x11, #8 */
  ARC_X_W(c, 23, (ARC_X_R(c, 11) + UINT64_C(8)));
L_cb0f0:;
  /* cb0f0: sub x24, x23, #8 */
  ARC_X_W(c, 24, (ARC_X_R(c, 23) - UINT64_C(8)));
  /* cb0f4: cmp x19, x24 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 24));
  /* cb0f8: b.eq #0xcb104 */
  if (ARC_COND(c, 0)) goto L_cb104;
  /* cb0fc: ldr x11, [x24] */
  ARC_X_W(c, 11, arc_ld64(ARC_X_R(c, 24)));
  /* cb100: str x11, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 11));
L_cb104:;
  /* cb104: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* cb108: str x8, [x24] */
  arc_st64(ARC_X_R(c, 24), ARC_X_R(c, 8));
  /* cb10c: b.lo #0xcb144 */
  if (ARC_COND(c, 3)) goto L_cb144;
  /* cb110: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* cb114: mov x1, x24 */
  ARC_X_W(c, 1, ARC_X_R(c, 24));
  /* cb118: bl #0xd1678 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(831772));
  fn1_d1678(c);
  /* cb11c: mov w25, w0 */
  ARC_W_W(c, 25, ARC_W_R(c, 0));
  /* cb120: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* cb124: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* cb128: bl #0xd1678 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(831788));
  fn1_d1678(c);
  /* cb12c: tbnz w0, #0, #0xcb228 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) != 0) goto L_cb228;
  /* cb130: ldp q18, q17, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_q_w(c, 18, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 17, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* cb134: mov x4, #-0x200 */
  ARC_X_W(c, 4, UINT64_C(18446744073709551104));
  /* cb138: ldur q16, [x29, #-0x20] */
  arc_q_w(c, 16, arc_ld64((ARC_X_R(c, 29) + INT64_C(-32))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-32)) + 8));
  /* cb13c: ldr q19, [sp] */
  arc_q_w(c, 19, arc_ld64((c)->sp), arc_ld64((c)->sp + 8));
  /* cb140: tbnz w25, #0, #0xcaa58 */
  if (((ARC_W_R(c, 25)) >> 0 & 1) != 0) goto L_caa58;
L_cb144:;
  /* cb144: ldur w8, [x29, #-4] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 29) + INT64_C(-4))));
  /* cb148: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* cb14c: mov x1, x24 */
  ARC_X_W(c, 1, ARC_X_R(c, 24));
  /* cb150: mov x2, x22 */
  ARC_X_W(c, 2, ARC_X_R(c, 22));
  /* cb154: and w3, w8, #1 */
  ARC_W_W(c, 3, (ARC_W_R(c, 8) & UINT64_C(1)));
  /* cb158: bl #0xca9ec */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(831836));
  fn1_ca9ec(c);
  /* cb15c: ldp q19, q18, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_q_w(c, 19, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 18, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* cb160: mov x4, #-0x200 */
  ARC_X_W(c, 4, UINT64_C(18446744073709551104));
  /* cb164: ldr q17, [sp, #0x20] */
  arc_q_w(c, 17, arc_ld64(((c)->sp + INT64_C(32))), arc_ld64(((c)->sp + INT64_C(32)) + 8));
  /* cb168: ldur q16, [x29, #-0x20] */
  arc_q_w(c, 16, arc_ld64((ARC_X_R(c, 29) + INT64_C(-32))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-32)) + 8));
  /* cb16c: stur wzr, [x29, #-4] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-4)), ARC_W_R(c, 31));
  /* cb170: b #0xcaa58 */
  goto L_caa58;
L_cb174:;
  /* cb174: ldur x9, [x20, #-8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 20) + INT64_C(-8))));
  /* cb178: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* cb17c: b.hs #0xcb194 */
  if (ARC_COND(c, 2)) goto L_cb194;
  /* cb180: mov x23, x19 */
  ARC_X_W(c, 23, ARC_X_R(c, 19));
L_cb184:;
  /* cb184: ldr x9, [x23, #8]! */
  { const uint64_t _a = (ARC_X_R(c, 23) + INT64_C(8));
    ARC_X_W(c, 23, ARC_X_R(c, 23) + INT64_C(8));
    ARC_X_W(c, 9, arc_ld64(_a));
  }
  /* cb188: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* cb18c: b.hs #0xcb184 */
  if (ARC_COND(c, 2)) goto L_cb184;
  /* cb190: b #0xcb1b4 */
  goto L_cb1b4;
L_cb194:;
  /* cb194: add x9, x19, #8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + UINT64_C(8)));
L_cb198:;
  /* cb198: mov x23, x9 */
  ARC_X_W(c, 23, ARC_X_R(c, 9));
  /* cb19c: cmp x9, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 20));
  /* cb1a0: b.hs #0xcb1b4 */
  if (ARC_COND(c, 2)) goto L_cb1b4;
  /* cb1a4: mov x9, x23 */
  ARC_X_W(c, 9, ARC_X_R(c, 23));
  /* cb1a8: ldr x10, [x9], #8 */
  { const uint64_t _a = ARC_X_R(c, 9);
    ARC_X_W(c, 9, ARC_X_R(c, 9) + INT64_C(8));
    ARC_X_W(c, 10, arc_ld64(_a));
  }
  /* cb1ac: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* cb1b0: b.hs #0xcb198 */
  if (ARC_COND(c, 2)) goto L_cb198;
L_cb1b4:;
  /* cb1b4: cmp x23, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 20));
  /* cb1b8: mov x9, x20 */
  ARC_X_W(c, 9, ARC_X_R(c, 20));
  /* cb1bc: b.hs #0xcb1d0 */
  if (ARC_COND(c, 2)) goto L_cb1d0;
  /* cb1c0: mov x9, x20 */
  ARC_X_W(c, 9, ARC_X_R(c, 20));
L_cb1c4:;
  /* cb1c4: ldr x10, [x9, #-8]! */
  { const uint64_t _a = (ARC_X_R(c, 9) + INT64_C(-8));
    ARC_X_W(c, 9, ARC_X_R(c, 9) + INT64_C(-8));
    ARC_X_W(c, 10, arc_ld64(_a));
  }
  /* cb1c8: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* cb1cc: b.lo #0xcb1c4 */
  if (ARC_COND(c, 3)) goto L_cb1c4;
L_cb1d0:;
  /* cb1d0: cmp x23, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 9));
  /* cb1d4: b.hs #0xcb208 */
  if (ARC_COND(c, 2)) goto L_cb208;
  /* cb1d8: ldr x10, [x23] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 23)));
  /* cb1dc: ldr x11, [x9] */
  ARC_X_W(c, 11, arc_ld64(ARC_X_R(c, 9)));
L_cb1e0:;
  /* cb1e0: str x11, [x23] */
  arc_st64(ARC_X_R(c, 23), ARC_X_R(c, 11));
  /* cb1e4: str x10, [x9] */
  arc_st64(ARC_X_R(c, 9), ARC_X_R(c, 10));
L_cb1e8:;
  /* cb1e8: ldr x10, [x23, #8]! */
  { const uint64_t _a = (ARC_X_R(c, 23) + INT64_C(8));
    ARC_X_W(c, 23, ARC_X_R(c, 23) + INT64_C(8));
    ARC_X_W(c, 10, arc_ld64(_a));
  }
  /* cb1ec: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* cb1f0: b.hs #0xcb1e8 */
  if (ARC_COND(c, 2)) goto L_cb1e8;
L_cb1f4:;
  /* cb1f4: ldr x11, [x9, #-8]! */
  { const uint64_t _a = (ARC_X_R(c, 9) + INT64_C(-8));
    ARC_X_W(c, 9, ARC_X_R(c, 9) + INT64_C(-8));
    ARC_X_W(c, 11, arc_ld64(_a));
  }
  /* cb1f8: cmp x8, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 11));
  /* cb1fc: b.lo #0xcb1f4 */
  if (ARC_COND(c, 3)) goto L_cb1f4;
  /* cb200: cmp x23, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 9));
  /* cb204: b.lo #0xcb1e0 */
  if (ARC_COND(c, 3)) goto L_cb1e0;
L_cb208:;
  /* cb208: sub x9, x23, #8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 23) - UINT64_C(8)));
  /* cb20c: cmp x19, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 9));
  /* cb210: b.eq #0xcb21c */
  if (ARC_COND(c, 0)) goto L_cb21c;
  /* cb214: ldr x10, [x9] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 9)));
  /* cb218: str x10, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 10));
L_cb21c:;
  /* cb21c: stur wzr, [x29, #-4] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-4)), ARC_W_R(c, 31));
  /* cb220: str x8, [x9] */
  arc_st64(ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* cb224: b #0xcaa58 */
  goto L_caa58;
L_cb228:;
  /* cb228: ldp q18, q17, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_q_w(c, 18, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 17, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* cb22c: mov x20, x24 */
  ARC_X_W(c, 20, ARC_X_R(c, 24));
  /* cb230: ldur q16, [x29, #-0x20] */
  arc_q_w(c, 16, arc_ld64((ARC_X_R(c, 29) + INT64_C(-32))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-32)) + 8));
  /* cb234: ldr q19, [sp] */
  arc_q_w(c, 19, arc_ld64((c)->sp), arc_ld64((c)->sp + 8));
  /* cb238: mov x4, #-0x200 */
  ARC_X_W(c, 4, UINT64_C(18446744073709551104));
  /* cb23c: tbz w25, #0, #0xcaa54 */
  if (((ARC_W_R(c, 25)) >> 0 & 1) == 0) goto L_caa54;
  /* cb240: b #0xcb3d8 */
  goto L_cb3d8;
L_cb244:;
  /* cb244: ldp x8, x9, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* cb248: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* cb24c: csel x10, x8, x9, hi */
  ARC_X_W(c, 10, (ARC_COND(c, 8) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* cb250: csel x8, x8, x9, lo */
  ARC_X_W(c, 8, (ARC_COND(c, 3) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* cb254: stp x8, x10, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 10));
  }
  /* cb258: ldr x8, [x19, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(24))));
  /* cb25c: ldur x9, [x20, #-8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 20) + INT64_C(-8))));
  /* cb260: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* cb264: csel x10, x8, x9, hi */
  ARC_X_W(c, 10, (ARC_COND(c, 8) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* cb268: csel x8, x8, x9, lo */
  ARC_X_W(c, 8, (ARC_COND(c, 3) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* cb26c: stur x10, [x20, #-8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(-8)), ARC_X_R(c, 10));
  /* cb270: str x8, [x19, #0x18] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(24)), ARC_X_R(c, 8));
  /* cb274: ldr x9, [x19, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* cb278: ldur x8, [x20, #-8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(-8))));
  /* cb27c: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* cb280: csel x10, x8, x9, hi */
  ARC_X_W(c, 10, (ARC_COND(c, 8) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* cb284: csel x8, x8, x9, lo */
  ARC_X_W(c, 8, (ARC_COND(c, 3) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* cb288: stur x10, [x20, #-8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(-8)), ARC_X_R(c, 10));
  /* cb28c: ldp x9, x10, [x19, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(16));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* cb290: ldr x11, [x19, #8] */
  ARC_X_W(c, 11, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* cb294: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* cb298: csel x9, x9, x10, lo */
  ARC_X_W(c, 9, (ARC_COND(c, 3) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 10)));
  /* cb29c: csel x8, x8, x10, hi */
  ARC_X_W(c, 8, (ARC_COND(c, 8) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 10)));
  /* cb2a0: stp x9, x8, [x19, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* cb2a4: ldur x8, [x20, #-8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(-8))));
  /* cb2a8: cmp x11, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 8));
  /* cb2ac: csel x9, x11, x8, hi */
  ARC_X_W(c, 9, (ARC_COND(c, 8) ? (ARC_X_R(c, 11)) : ARC_X_R(c, 8)));
  /* cb2b0: csel x8, x11, x8, lo */
  ARC_X_W(c, 8, (ARC_COND(c, 3) ? (ARC_X_R(c, 11)) : ARC_X_R(c, 8)));
  /* cb2b4: stur x9, [x20, #-8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(-8)), ARC_X_R(c, 9));
  /* cb2b8: ldp x11, x10, [x19, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(16));
    ARC_X_W(c, 11, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* cb2bc: ldr x9, [x19] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 19)));
  /* cb2c0: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* cb2c4: csel x12, x10, x9, lo */
  ARC_X_W(c, 12, (ARC_COND(c, 3) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* cb2c8: csel x10, x10, x9, hi */
  ARC_X_W(c, 10, (ARC_COND(c, 8) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* cb2cc: cmp x12, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 12), ARC_X_R(c, 11));
  /* cb2d0: csel x9, x9, x11, lo */
  ARC_X_W(c, 9, (ARC_COND(c, 3) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 11)));
  /* cb2d4: csel x11, x12, x11, hi */
  ARC_X_W(c, 11, (ARC_COND(c, 8) ? (ARC_X_R(c, 12)) : ARC_X_R(c, 11)));
  /* cb2d8: cmp x10, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 8));
  /* cb2dc: csel x12, x10, x8, lo */
  ARC_X_W(c, 12, (ARC_COND(c, 3) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 8)));
  /* cb2e0: csel x10, x10, x8, hi */
  ARC_X_W(c, 10, (ARC_COND(c, 8) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 8)));
  /* cb2e4: cmp x12, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 12), ARC_X_R(c, 11));
  /* cb2e8: csel x8, x8, x11, lo */
  ARC_X_W(c, 8, (ARC_COND(c, 3) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 11)));
  /* cb2ec: stp x9, x8, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* cb2f0: csel x8, x12, x11, hi */
  ARC_X_W(c, 8, (ARC_COND(c, 8) ? (ARC_X_R(c, 12)) : ARC_X_R(c, 11)));
  /* cb2f4: stp x8, x10, [x19, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 10));
  }
  /* cb2f8: b #0xcb3d8 */
  goto L_cb3d8;
L_cb2fc:;
  /* cb2fc: ldur x8, [x20, #-8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(-8))));
  /* cb300: ldr x9, [x19] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 19)));
  /* cb304: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* cb308: b.hs #0xcb3d8 */
  if (ARC_COND(c, 2)) goto L_cb3d8;
  /* cb30c: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* cb310: stur x9, [x20, #-8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(-8)), ARC_X_R(c, 9));
  /* cb314: b #0xcb3d8 */
  goto L_cb3d8;
L_cb318:;
  /* cb318: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* cb31c: ldur x9, [x20, #-8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 20) + INT64_C(-8))));
  /* cb320: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* cb324: csel x10, x8, x9, hi */
  ARC_X_W(c, 10, (ARC_COND(c, 8) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* cb328: csel x8, x8, x9, lo */
  ARC_X_W(c, 8, (ARC_COND(c, 3) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* cb32c: stur x10, [x20, #-8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(-8)), ARC_X_R(c, 10));
  /* cb330: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
  /* cb334: ldr x9, [x19] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 19)));
  /* cb338: ldur x8, [x20, #-8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(-8))));
  /* cb33c: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* cb340: csel x10, x8, x9, hi */
  ARC_X_W(c, 10, (ARC_COND(c, 8) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* cb344: csel x8, x8, x9, lo */
  ARC_X_W(c, 8, (ARC_COND(c, 3) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* cb348: stur x10, [x20, #-8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(-8)), ARC_X_R(c, 10));
  /* cb34c: ldp x9, x10, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* cb350: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* cb354: csel x9, x9, x10, lo */
  ARC_X_W(c, 9, (ARC_COND(c, 3) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 10)));
  /* cb358: csel x8, x8, x10, hi */
  ARC_X_W(c, 8, (ARC_COND(c, 8) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 10)));
  /* cb35c: str x9, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 9));
  /* cb360: b #0xcb3d4 */
  goto L_cb3d4;
L_cb364:;
  /* cb364: ldp x10, x8, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 10, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* cb368: ldr x9, [x19] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 19)));
  /* cb36c: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* cb370: csel x11, x9, x8, hi */
  ARC_X_W(c, 11, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* cb374: csel x8, x9, x8, lo */
  ARC_X_W(c, 8, (ARC_COND(c, 3) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* cb378: str x11, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 11));
  /* cb37c: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* cb380: ldur x8, [x20, #-8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(-8))));
  /* cb384: cmp x10, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 8));
  /* cb388: csel x9, x10, x8, hi */
  ARC_X_W(c, 9, (ARC_COND(c, 8) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 8)));
  /* cb38c: csel x8, x10, x8, lo */
  ARC_X_W(c, 8, (ARC_COND(c, 3) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 8)));
  /* cb390: stur x9, [x20, #-8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(-8)), ARC_X_R(c, 9));
  /* cb394: ldr x9, [x19] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 19)));
  /* cb398: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* cb39c: csel x10, x9, x8, hi */
  ARC_X_W(c, 10, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* cb3a0: csel x8, x9, x8, lo */
  ARC_X_W(c, 8, (ARC_COND(c, 3) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* cb3a4: stp x8, x10, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 10));
  }
  /* cb3a8: ldr x8, [x19, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* cb3ac: ldur x9, [x20, #-8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 20) + INT64_C(-8))));
  /* cb3b0: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* cb3b4: csel x10, x8, x9, hi */
  ARC_X_W(c, 10, (ARC_COND(c, 8) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* cb3b8: csel x8, x8, x9, lo */
  ARC_X_W(c, 8, (ARC_COND(c, 3) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* cb3bc: stur x10, [x20, #-8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(-8)), ARC_X_R(c, 10));
  /* cb3c0: ldr x10, [x19, #8] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* cb3c4: cmp x10, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 8));
  /* cb3c8: csel x9, x10, x8, hi */
  ARC_X_W(c, 9, (ARC_COND(c, 8) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 8)));
  /* cb3cc: csel x8, x10, x8, lo */
  ARC_X_W(c, 8, (ARC_COND(c, 3) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 8)));
  /* cb3d0: str x9, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 9));
L_cb3d4:;
  /* cb3d4: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
L_cb3d8:;
  /* cb3d8: ldp x20, x19, [sp, #0xa0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(160));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* cb3dc: ldp x22, x21, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* cb3e0: ldp x24, x23, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* cb3e4: ldp x26, x25, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* cb3e8: ldp x28, x27, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* cb3ec: ldp x29, x30, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* cb3f0: add sp, sp, #0xb0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(176)));
  /* cb3f4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* cb3f8: ret  */
  return;
L_cb3fc:;
  /* cb3fc: cmp x19, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 20));
  /* cb400: add x9, x19, #8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + UINT64_C(8)));
  /* cb404: ldur w10, [x29, #-4] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 29) + INT64_C(-4))));
  /* cb408: ccmp x9, x20, #4, ne */
  if (ARC_COND(c, 1)) { (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 20)); }
  else { (c)->nf = 0; (c)->zf = 1;
          (c)->cf = 0; (c)->vf = 0; }
  /* cb40c: cset w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? 1 : 0));
  /* cb410: tbz w10, #0, #0xcb64c */
  if (((ARC_W_R(c, 10)) >> 0 & 1) == 0) goto L_cb64c;
  /* cb414: tbnz w8, #0, #0xcb3d8 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_cb3d8;
  /* cb418: mov w8, #8 */
  ARC_W_W(c, 8, UINT64_C(8));
  /* cb41c: mov x10, x19 */
  ARC_X_W(c, 10, ARC_X_R(c, 19));
  /* cb420: b #0xcb43c */
  goto L_cb43c;
L_cb424:;
  /* cb424: mov x9, x19 */
  ARC_X_W(c, 9, ARC_X_R(c, 19));
L_cb428:;
  /* cb428: str x11, [x9] */
  arc_st64(ARC_X_R(c, 9), ARC_X_R(c, 11));
L_cb42c:;
  /* cb42c: add x9, x10, #8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 10) + UINT64_C(8)));
  /* cb430: add x8, x8, #8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(8)));
  /* cb434: cmp x9, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 20));
  /* cb438: b.eq #0xcb3d8 */
  if (ARC_COND(c, 0)) goto L_cb3d8;
L_cb43c:;
  /* cb43c: ldp x12, x11, [x10] */
  { const uint64_t _pa = ARC_X_R(c, 10);
    ARC_X_W(c, 12, arc_ld64(_pa));
    ARC_X_W(c, 11, arc_ld64(_pa + 8));
  }
  /* cb440: mov x10, x9 */
  ARC_X_W(c, 10, ARC_X_R(c, 9));
  /* cb444: cmp x11, x12 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 12));
  /* cb448: b.hs #0xcb42c */
  if (ARC_COND(c, 2)) goto L_cb42c;
  /* cb44c: mov x13, x8 */
  ARC_X_W(c, 13, ARC_X_R(c, 8));
L_cb450:;
  /* cb450: subs x9, x13, #8 */
  ARC_X_W(c, 9, arc_sub64(c, ARC_X_R(c, 13), UINT64_C(8)));
  /* cb454: str x12, [x19, x13] */
  arc_st64((ARC_X_R(c, 19) + ARC_X_R(c, 13)), ARC_X_R(c, 12));
  /* cb458: b.eq #0xcb424 */
  if (ARC_COND(c, 0)) goto L_cb424;
  /* cb45c: add x12, x19, x13 */
  ARC_X_W(c, 12, (ARC_X_R(c, 19) + ARC_X_R(c, 13)));
  /* cb460: mov x13, x9 */
  ARC_X_W(c, 13, ARC_X_R(c, 9));
  /* cb464: ldur x12, [x12, #-0x10] */
  ARC_X_W(c, 12, arc_ld64((ARC_X_R(c, 12) + INT64_C(-16))));
  /* cb468: cmp x11, x12 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 12));
  /* cb46c: b.lo #0xcb450 */
  if (ARC_COND(c, 3)) goto L_cb450;
  /* cb470: add x9, x19, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + ARC_X_R(c, 9)));
  /* cb474: b #0xcb428 */
  goto L_cb428;
L_cb478:;
  /* cb478: cmp x19, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 20));
  /* cb47c: b.eq #0xcb3d8 */
  if (ARC_COND(c, 0)) goto L_cb3d8;
  /* cb480: lsr x9, x9, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(1)) & 63)));
  /* cb484: mov x10, x9 */
  ARC_X_W(c, 10, ARC_X_R(c, 9));
  /* cb488: b #0xcb49c */
  goto L_cb49c;
L_cb48c:;
  /* cb48c: str x13, [x14] */
  arc_st64(ARC_X_R(c, 14), ARC_X_R(c, 13));
L_cb490:;
  /* cb490: cmp x10, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 10), UINT64_C(0));
  /* cb494: sub x10, x10, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) - UINT64_C(1)));
  /* cb498: b.le #0xcb56c */
  if (ARC_COND(c, 13)) goto L_cb56c;
L_cb49c:;
  /* cb49c: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* cb4a0: b.lo #0xcb490 */
  if (ARC_COND(c, 3)) goto L_cb490;
  /* cb4a4: mov w12, #1 */
  ARC_W_W(c, 12, UINT64_C(1));
  /* cb4a8: lsl x11, x10, #1 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* cb4ac: bfi x12, x10, #1, #0x3e */
  ARC_X_W(c, 12, (((uint64_t)(ARC_X_R(c, 12)) & UINT64_C(9223372036854775809)) | ((((uint64_t)(ARC_X_R(c, 10))) & UINT64_C(4611686018427387903)) << 1)));
  /* cb4b0: add x13, x11, #2 */
  ARC_X_W(c, 13, (ARC_X_R(c, 11) + UINT64_C(2)));
  /* cb4b4: add x11, x19, x12, lsl #3 */
  ARC_X_W(c, 11, (ARC_X_R(c, 19) + ((uint64_t)(ARC_X_R(c, 12)) << 3)));
  /* cb4b8: cmp x13, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 13), ARC_X_R(c, 8));
  /* cb4bc: b.ge #0xcb4e0 */
  if (ARC_COND(c, 10)) goto L_cb4e0;
  /* cb4c0: mov x14, x11 */
  ARC_X_W(c, 14, ARC_X_R(c, 11));
  /* cb4c4: ldr x15, [x11] */
  ARC_X_W(c, 15, arc_ld64(ARC_X_R(c, 11)));
  /* cb4c8: ldr x16, [x14, #8]! */
  { const uint64_t _a = (ARC_X_R(c, 14) + INT64_C(8));
    ARC_X_W(c, 14, ARC_X_R(c, 14) + INT64_C(8));
    ARC_X_W(c, 16, arc_ld64(_a));
  }
  /* cb4cc: cmp x15, x16 */
  (void)arc_sub64(c, ARC_X_R(c, 15), ARC_X_R(c, 16));
  /* cb4d0: csel x15, x15, x16, hi */
  ARC_X_W(c, 15, (ARC_COND(c, 8) ? (ARC_X_R(c, 15)) : ARC_X_R(c, 16)));
  /* cb4d4: csel x11, x14, x11, lo */
  ARC_X_W(c, 11, (ARC_COND(c, 3) ? (ARC_X_R(c, 14)) : ARC_X_R(c, 11)));
  /* cb4d8: csel x12, x13, x12, lo */
  ARC_X_W(c, 12, (ARC_COND(c, 3) ? (ARC_X_R(c, 13)) : ARC_X_R(c, 12)));
  /* cb4dc: b #0xcb4e4 */
  goto L_cb4e4;
L_cb4e0:;
  /* cb4e0: ldr x15, [x11] */
  ARC_X_W(c, 15, arc_ld64(ARC_X_R(c, 11)));
L_cb4e4:;
  /* cb4e4: add x14, x19, x10, lsl #3 */
  ARC_X_W(c, 14, (ARC_X_R(c, 19) + ((uint64_t)(ARC_X_R(c, 10)) << 3)));
  /* cb4e8: ldr x13, [x14] */
  ARC_X_W(c, 13, arc_ld64(ARC_X_R(c, 14)));
  /* cb4ec: cmp x15, x13 */
  (void)arc_sub64(c, ARC_X_R(c, 15), ARC_X_R(c, 13));
  /* cb4f0: b.hs #0xcb51c */
  if (ARC_COND(c, 2)) goto L_cb51c;
  /* cb4f4: b #0xcb490 */
  goto L_cb490;
L_cb4f8:;
  /* cb4f8: mov x17, x11 */
  ARC_X_W(c, 17, ARC_X_R(c, 11));
  /* cb4fc: ldr x15, [x11] */
  ARC_X_W(c, 15, arc_ld64(ARC_X_R(c, 11)));
  /* cb500: ldr x0, [x17, #8]! */
  { const uint64_t _a = (ARC_X_R(c, 17) + INT64_C(8));
    ARC_X_W(c, 17, ARC_X_R(c, 17) + INT64_C(8));
    ARC_X_W(c, 0, arc_ld64(_a));
  }
  /* cb504: cmp x15, x0 */
  (void)arc_sub64(c, ARC_X_R(c, 15), ARC_X_R(c, 0));
  /* cb508: csel x15, x15, x0, hi */
  ARC_X_W(c, 15, (ARC_COND(c, 8) ? (ARC_X_R(c, 15)) : ARC_X_R(c, 0)));
  /* cb50c: csel x11, x17, x11, lo */
  ARC_X_W(c, 11, (ARC_COND(c, 3) ? (ARC_X_R(c, 17)) : ARC_X_R(c, 11)));
  /* cb510: csel x12, x12, x16, lo */
  ARC_X_W(c, 12, (ARC_COND(c, 3) ? (ARC_X_R(c, 12)) : ARC_X_R(c, 16)));
  /* cb514: cmp x15, x13 */
  (void)arc_sub64(c, ARC_X_R(c, 15), ARC_X_R(c, 13));
  /* cb518: b.lo #0xcb48c */
  if (ARC_COND(c, 3)) goto L_cb48c;
L_cb51c:;
  /* cb51c: cmp x9, x12 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 12));
  /* cb520: str x15, [x14] */
  arc_st64(ARC_X_R(c, 14), ARC_X_R(c, 15));
  /* cb524: mov x14, x11 */
  ARC_X_W(c, 14, ARC_X_R(c, 11));
  /* cb528: b.lt #0xcb48c */
  if (ARC_COND(c, 11)) goto L_cb48c;
  /* cb52c: mov w16, #1 */
  ARC_W_W(c, 16, UINT64_C(1));
  /* cb530: lsl x11, x12, #1 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 12)) << ((UINT64_C(1)) & 63)));
  /* cb534: bfi x16, x12, #1, #0x3e */
  ARC_X_W(c, 16, (((uint64_t)(ARC_X_R(c, 16)) & UINT64_C(9223372036854775809)) | ((((uint64_t)(ARC_X_R(c, 12))) & UINT64_C(4611686018427387903)) << 1)));
  /* cb538: add x12, x11, #2 */
  ARC_X_W(c, 12, (ARC_X_R(c, 11) + UINT64_C(2)));
  /* cb53c: add x11, x19, x16, lsl #3 */
  ARC_X_W(c, 11, (ARC_X_R(c, 19) + ((uint64_t)(ARC_X_R(c, 16)) << 3)));
  /* cb540: cmp x12, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 12), ARC_X_R(c, 8));
  /* cb544: b.lt #0xcb4f8 */
  if (ARC_COND(c, 11)) goto L_cb4f8;
  /* cb548: ldr x15, [x11] */
  ARC_X_W(c, 15, arc_ld64(ARC_X_R(c, 11)));
  /* cb54c: mov x12, x16 */
  ARC_X_W(c, 12, ARC_X_R(c, 16));
  /* cb550: cmp x15, x13 */
  (void)arc_sub64(c, ARC_X_R(c, 15), ARC_X_R(c, 13));
  /* cb554: b.hs #0xcb51c */
  if (ARC_COND(c, 2)) goto L_cb51c;
  /* cb558: b #0xcb48c */
  goto L_cb48c;
L_cb55c:;
  /* cb55c: str x10, [x9] */
  arc_st64(ARC_X_R(c, 9), ARC_X_R(c, 10));
L_cb560:;
  /* cb560: cmp x8, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(2));
  /* cb564: sub x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) - UINT64_C(1)));
  /* cb568: b.le #0xcb3d8 */
  if (ARC_COND(c, 13)) goto L_cb3d8;
L_cb56c:;
  /* cb56c: sub x9, x8, #2 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(2)));
  /* cb570: ldr x10, [x19] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 19)));
  /* cb574: mov x13, xzr */
  ARC_X_W(c, 13, ARC_X_R(c, 31));
  /* cb578: lsr x11, x9, #1 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(1)) & 63)));
  /* cb57c: mov x12, x19 */
  ARC_X_W(c, 12, ARC_X_R(c, 19));
  /* cb580: b #0xcb5ac */
  goto L_cb5ac;
L_cb584:;
  /* cb584: ldr x13, [x16, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 16) + INT64_C(16));
    ARC_X_W(c, 16, ARC_X_R(c, 16) + INT64_C(16));
    ARC_X_W(c, 13, arc_ld64(_a));
  }
  /* cb588: ldur x15, [x16, #-8] */
  ARC_X_W(c, 15, arc_ld64((ARC_X_R(c, 16) + INT64_C(-8))));
  /* cb58c: cmp x15, x13 */
  (void)arc_sub64(c, ARC_X_R(c, 15), ARC_X_R(c, 13));
  /* cb590: csel x15, x15, x13, hi */
  ARC_X_W(c, 15, (ARC_COND(c, 8) ? (ARC_X_R(c, 15)) : ARC_X_R(c, 13)));
  /* cb594: csel x9, x16, x9, lo */
  ARC_X_W(c, 9, (ARC_COND(c, 3) ? (ARC_X_R(c, 16)) : ARC_X_R(c, 9)));
  /* cb598: csel x13, x17, x14, lo */
  ARC_X_W(c, 13, (ARC_COND(c, 3) ? (ARC_X_R(c, 17)) : ARC_X_R(c, 14)));
L_cb59c:;
  /* cb59c: cmp x13, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 13), ARC_X_R(c, 11));
  /* cb5a0: str x15, [x12] */
  arc_st64(ARC_X_R(c, 12), ARC_X_R(c, 15));
  /* cb5a4: mov x12, x9 */
  ARC_X_W(c, 12, ARC_X_R(c, 9));
  /* cb5a8: b.gt #0xcb5d8 */
  if (ARC_COND(c, 12)) goto L_cb5d8;
L_cb5ac:;
  /* cb5ac: lsl x9, x13, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 13)) << ((UINT64_C(1)) & 63)));
  /* cb5b0: add x16, x12, x13, lsl #3 */
  ARC_X_W(c, 16, (ARC_X_R(c, 12) + ((uint64_t)(ARC_X_R(c, 13)) << 3)));
  /* cb5b4: mov w14, #1 */
  ARC_W_W(c, 14, UINT64_C(1));
  /* cb5b8: bfi x14, x13, #1, #0x3f */
  ARC_X_W(c, 14, (((uint64_t)(ARC_X_R(c, 14)) & UINT64_C(1)) | ((((uint64_t)(ARC_X_R(c, 13))) & UINT64_C(9223372036854775807)) << 1)));
  /* cb5bc: add x17, x9, #2 */
  ARC_X_W(c, 17, (ARC_X_R(c, 9) + UINT64_C(2)));
  /* cb5c0: add x9, x16, #8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 16) + UINT64_C(8)));
  /* cb5c4: cmp x17, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 17), ARC_X_R(c, 8));
  /* cb5c8: b.lt #0xcb584 */
  if (ARC_COND(c, 11)) goto L_cb584;
  /* cb5cc: ldr x15, [x9] */
  ARC_X_W(c, 15, arc_ld64(ARC_X_R(c, 9)));
  /* cb5d0: mov x13, x14 */
  ARC_X_W(c, 13, ARC_X_R(c, 14));
  /* cb5d4: b #0xcb59c */
  goto L_cb59c;
L_cb5d8:;
  /* cb5d8: sub x20, x20, #8 */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) - UINT64_C(8)));
  /* cb5dc: cmp x9, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 20));
  /* cb5e0: b.eq #0xcb55c */
  if (ARC_COND(c, 0)) goto L_cb55c;
  /* cb5e4: sub x11, x9, x19 */
  ARC_X_W(c, 11, (ARC_X_R(c, 9) - ARC_X_R(c, 19)));
  /* cb5e8: ldr x12, [x20] */
  ARC_X_W(c, 12, arc_ld64(ARC_X_R(c, 20)));
  /* cb5ec: add x11, x11, #8 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) + UINT64_C(8)));
  /* cb5f0: asr x11, x11, #3 */
  ARC_X_W(c, 11, ((uint64_t)((int64_t)(ARC_X_R(c, 11)) >> ((UINT64_C(3)) & 63))));
  /* cb5f4: str x12, [x9] */
  arc_st64(ARC_X_R(c, 9), ARC_X_R(c, 12));
  /* cb5f8: str x10, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 10));
  /* cb5fc: subs x11, x11, #2 */
  ARC_X_W(c, 11, arc_sub64(c, ARC_X_R(c, 11), UINT64_C(2)));
  /* cb600: b.lt #0xcb560 */
  if (ARC_COND(c, 11)) goto L_cb560;
  /* cb604: lsr x10, x11, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 11)) >> ((UINT64_C(1)) & 63)));
  /* cb608: ldr x11, [x9] */
  ARC_X_W(c, 11, arc_ld64(ARC_X_R(c, 9)));
  /* cb60c: add x12, x19, x10, lsl #3 */
  ARC_X_W(c, 12, (ARC_X_R(c, 19) + ((uint64_t)(ARC_X_R(c, 10)) << 3)));
  /* cb610: ldr x13, [x12] */
  ARC_X_W(c, 13, arc_ld64(ARC_X_R(c, 12)));
  /* cb614: cmp x13, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 13), ARC_X_R(c, 11));
  /* cb618: b.hs #0xcb560 */
  if (ARC_COND(c, 2)) goto L_cb560;
L_cb61c:;
  /* cb61c: mov x14, x9 */
  ARC_X_W(c, 14, ARC_X_R(c, 9));
  /* cb620: mov x9, x12 */
  ARC_X_W(c, 9, ARC_X_R(c, 12));
  /* cb624: str x13, [x14] */
  arc_st64(ARC_X_R(c, 14), ARC_X_R(c, 13));
  /* cb628: cbz x10, #0xcb644 */
  if ((ARC_X_R(c, 10)) == 0) goto L_cb644;
  /* cb62c: sub x10, x10, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) - UINT64_C(1)));
  /* cb630: lsr x10, x10, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 10)) >> ((UINT64_C(1)) & 63)));
  /* cb634: add x12, x19, x10, lsl #3 */
  ARC_X_W(c, 12, (ARC_X_R(c, 19) + ((uint64_t)(ARC_X_R(c, 10)) << 3)));
  /* cb638: ldr x13, [x12] */
  ARC_X_W(c, 13, arc_ld64(ARC_X_R(c, 12)));
  /* cb63c: cmp x13, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 13), ARC_X_R(c, 11));
  /* cb640: b.lo #0xcb61c */
  if (ARC_COND(c, 3)) goto L_cb61c;
L_cb644:;
  /* cb644: str x11, [x9] */
  arc_st64(ARC_X_R(c, 9), ARC_X_R(c, 11));
  /* cb648: b #0xcb560 */
  goto L_cb560;
L_cb64c:;
  /* cb64c: tbz w8, #0, #0xcb660 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_cb660;
  /* cb650: b #0xcb3d8 */
  goto L_cb3d8;
L_cb654:;
  /* cb654: add x9, x19, #8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + UINT64_C(8)));
  /* cb658: cmp x9, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 20));
  /* cb65c: b.eq #0xcb3d8 */
  if (ARC_COND(c, 0)) goto L_cb3d8;
L_cb660:;
  /* cb660: ldp x10, x8, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    ARC_X_W(c, 10, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* cb664: mov x19, x9 */
  ARC_X_W(c, 19, ARC_X_R(c, 9));
  /* cb668: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* cb66c: b.hs #0xcb654 */
  if (ARC_COND(c, 2)) goto L_cb654;
  /* cb670: mov x9, x19 */
  ARC_X_W(c, 9, ARC_X_R(c, 19));
L_cb674:;
  /* cb674: str x10, [x9] */
  arc_st64(ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* cb678: ldur x10, [x9, #-0x10] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 9) + INT64_C(-16))));
  /* cb67c: sub x9, x9, #8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - UINT64_C(8)));
  /* cb680: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* cb684: b.lo #0xcb674 */
  if (ARC_COND(c, 3)) goto L_cb674;
  /* cb688: str x8, [x9] */
  arc_st64(ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* cb68c: b #0xcb654 */
  goto L_cb654;
}

void fn1_d73d4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038809556));
  /* d73d4: bti c */
  /* bti: no architectural effect here */
  /* d73d8: ldr x8, [x1, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 1) + INT64_C(8))));
  /* d73dc: ldr w9, [x1] */
  ARC_W_W(c, 9, arc_ld32(ARC_X_R(c, 1)));
  /* d73e0: cmp x0, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* d73e4: ccmp w9, w2, #0, eq */
  if (ARC_COND(c, 0)) { (void)arc_sub32(c, ARC_W_R(c, 9), ARC_W_R(c, 2)); }
  else { (c)->nf = 0; (c)->zf = 0;
          (c)->cf = 0; (c)->vf = 0; }
  /* d73e8: cset w0, eq */
  ARC_W_W(c, 0, (ARC_COND(c, 0) ? 1 : 0));
  /* d73ec: ret  */
  return;
}

void fn1_db394(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038825876));
  /* db394: bti c */
  /* bti: no architectural effect here */
  /* db398: brk #1 */
  arc_trap(c, "brk");
}

void fn1_dc610(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038830608));
  /* dc610: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* dc614: sub sp, sp, #0x80 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(128)));
  /* dc618: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* dc61c: stp x28, x27, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* dc620: stp x26, x25, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* dc624: stp x24, x23, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* dc628: stp x22, x21, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* dc62c: stp x20, x19, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* dc630: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* dc634: fmov x8, d0 */
  ARC_X_W(c, 8, ARC_DU_R(c, 0));
  /* dc638: mov x15, x0 */
  ARC_X_W(c, 15, ARC_X_R(c, 0));
  /* dc63c: cbz x8, #0xdcab4 */
  if ((ARC_X_R(c, 8)) == 0) goto L_dcab4;
  /* dc640: lsr x9, x8, #0x34 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(52)) & 63)));
  /* dc644: mov x10, #0x10000000000000 */
  ARC_X_W(c, 10, UINT64_C(4503599627370496));
  /* dc648: mov x0, x15 */
  ARC_X_W(c, 0, ARC_X_R(c, 15));
  /* dc64c: bfxil x10, x8, #0, #0x34 */
  ARC_X_W(c, 10, (((uint64_t)(ARC_X_R(c, 10)) & UINT64_C(18442240474082181120)) | ((((uint64_t)(ARC_X_R(c, 8))) >> 0) & UINT64_C(4503599627370495))));
  /* dc650: and x8, x8, #0xfffffffffffff */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) & UINT64_C(4503599627370495)));
  /* dc654: str x15, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 15));
  /* dc658: sub w11, w9, #0x433 */
  ARC_W_W(c, 11, (ARC_W_R(c, 9) - UINT64_C(1075)));
  /* dc65c: cmp x9, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(0));
  /* dc660: mov w9, #-0x432 */
  ARC_W_W(c, 9, UINT64_C(18446744073709550542));
  /* dc664: csel w23, w9, w11, eq */
  ARC_W_W(c, 23, (ARC_COND(c, 0) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 11)));
  /* dc668: csel x13, x8, x10, eq */
  ARC_X_W(c, 13, (ARC_COND(c, 0) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 10)));
  /* dc66c: cmn w23, #0x34 */
  (void)arc_add32(c, ARC_W_R(c, 23), UINT64_C(52), 0);
  /* dc670: stur x13, [x29, #-8] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-8)), ARC_X_R(c, 13));
  /* dc674: b.lt #0xdca48 */
  if (ARC_COND(c, 11)) goto L_dca48;
  /* dc678: add w8, w23, #0xf */
  ARC_W_W(c, 8, (ARC_W_R(c, 23) + UINT64_C(15)));
  /* dc67c: cmp w23, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 23), UINT64_C(0));
  /* dc680: mov w10, #0x4410 */
  ARC_W_W(c, 10, UINT64_C(17424));
  /* dc684: lsr w8, w8, #4 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 8)) >> ((UINT64_C(4)) & 31)));
  /* dc688: movk w10, #0x13, lsl #16 */
  ARC_W_W(c, 10, ((ARC_W_R(c, 10) & UINT64_C(18446744069414649855)) | UINT64_C(1245184)));
  /* dc68c: mov w4, #0x1c72 */
  ARC_W_W(c, 4, UINT64_C(7282));
  /* dc690: mov x9, #0xa597 */
  ARC_X_W(c, 9, UINT64_C(42391));
  /* dc694: nop  */
  /* nop: no architectural effect here */
  /* dc698: adr x7, #0x5fce8 */
  ARC_X_W(c, 7, (arc_image_bases[1] + UINT64_C(392424)));
  /* dc69c: csel w0, wzr, w8, lt */
  ARC_W_W(c, 0, (ARC_COND(c, 11) ? (ARC_W_R(c, 31)) : ARC_W_R(c, 8)));
  /* dc6a0: movk x9, #0x36b4, lsl #16 */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(18446744069414649855)) | UINT64_C(917766144)));
  /* dc6a4: mov w11, #0x3600 */
  ARC_W_W(c, 11, UINT64_C(13824));
  /* dc6a8: mul w8, w0, w10 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 0)) * (uint32_t)(ARC_W_R(c, 10))));
  /* dc6ac: mov x10, #0x3031 */
  ARC_X_W(c, 10, UINT64_C(12337));
  /* dc6b0: lsl w20, w0, #4 */
  ARC_W_W(c, 20, ((uint32_t)(ARC_W_R(c, 0)) << ((UINT64_C(4)) & 31)));
  /* dc6b4: movk x10, #0xf895, lsl #16 */
  ARC_X_W(c, 10, ((ARC_X_R(c, 10) & UINT64_C(18446744069414649855)) | UINT64_C(4170514432)));
  /* dc6b8: movk x9, #0x5f41, lsl #32 */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(18446462603027808255)) | UINT64_C(104732777512960)));
  /* dc6bc: mov w12, #0xe0ff */
  ARC_W_W(c, 12, UINT64_C(57599));
  /* dc6c0: movk x10, #0xa88, lsl #32 */
  ARC_X_W(c, 10, ((ARC_X_R(c, 10) & UINT64_C(18446462603027808255)) | UINT64_C(11579231830016)));
  /* dc6c4: lsl x13, x13, #8 */
  ARC_X_W(c, 13, ((uint64_t)(ARC_X_R(c, 13)) << ((UINT64_C(8)) & 63)));
  /* dc6c8: mov x16, x15 */
  ARC_X_W(c, 16, ARC_X_R(c, 15));
  /* dc6cc: lsr w3, w8, #0x12 */
  ARC_W_W(c, 3, ((uint32_t)(ARC_W_R(c, 8)) >> ((UINT64_C(18)) & 31)));
  /* dc6d0: mov w17, #0x1759 */
  ARC_W_W(c, 17, UINT64_C(5977));
  /* dc6d4: sub w20, w20, w23 */
  ARC_W_W(c, 20, (ARC_W_R(c, 20) - ARC_W_R(c, 23)));
  /* dc6d8: ldrh w21, [x7, w0, uxtw #1] */
  ARC_W_W(c, 21, arc_ld16((ARC_X_R(c, 7) + ((uint64_t)(((uint64_t)(uint32_t)(ARC_W_R(c, 0)))) << 1))));
  /* dc6dc: mov w28, wzr */
  ARC_W_W(c, 28, ARC_W_R(c, 31));
  /* dc6e0: movk x9, #0x8970, lsl #48 */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(281474976710655)) | UINT64_C(9903415580587720704)));
  /* dc6e4: add w5, w3, #0x19 */
  ARC_W_W(c, 5, (ARC_W_R(c, 3) + UINT64_C(25)));
  /* dc6e8: movk x10, #0x3168, lsl #48 */
  ARC_X_W(c, 10, ((ARC_X_R(c, 10) & UINT64_C(281474976710655)) | UINT64_C(3560095505436377088)));
  /* dc6ec: movk w11, #0xc465, lsl #16 */
  ARC_W_W(c, 11, ((ARC_W_R(c, 11) & UINT64_C(18446744069414649855)) | UINT64_C(3294953472)));
  /* dc6f0: mul w25, w5, w4 */
  ARC_W_W(c, 25, ((uint32_t)(ARC_W_R(c, 5)) * (uint32_t)(ARC_W_R(c, 4))));
  /* dc6f4: mov w4, #0x851f */
  ARC_W_W(c, 4, UINT64_C(34079));
  /* dc6f8: movk w12, #0x5f5, lsl #16 */
  ARC_W_W(c, 12, ((ARC_W_R(c, 12) & UINT64_C(18446744069414649855)) | UINT64_C(99942400)));
  /* dc6fc: nop  */
  /* nop: no architectural effect here */
  /* dc700: adr x14, #0x58a28 */
  ARC_X_W(c, 14, (arc_image_bases[1] + UINT64_C(363048)));
  /* dc704: mov w15, #0x18 */
  ARC_W_W(c, 15, UINT64_C(24));
  /* dc708: mov w8, #0x4b */
  ARC_W_W(c, 8, UINT64_C(75));
  /* dc70c: movk w17, #0xd1b7, lsl #16 */
  ARC_W_W(c, 17, ((ARC_W_R(c, 17) & UINT64_C(18446744069414649855)) | UINT64_C(3518431232)));
  /* dc710: mov w3, #-0x2710 */
  ARC_W_W(c, 3, UINT64_C(18446744073709541616));
  /* dc714: lsr w25, w25, #0x10 */
  ARC_W_W(c, 25, ((uint32_t)(ARC_W_R(c, 25)) >> ((UINT64_C(16)) & 31)));
  /* dc718: movk w4, #0x51eb, lsl #16 */
  ARC_W_W(c, 4, ((ARC_W_R(c, 4) & UINT64_C(18446744069414649855)) | UINT64_C(1374355456)));
  /* dc71c: nop  */
  /* nop: no architectural effect here */
  /* dc720: adr x5, #0x58470 */
  ARC_X_W(c, 5, (arc_image_bases[1] + UINT64_C(361584)));
  /* dc724: mov w6, #0x64 */
  ARC_W_W(c, 6, UINT64_C(100));
  /* dc728: and w24, w20, #0x3f */
  ARC_W_W(c, 24, (ARC_W_R(c, 20) & UINT64_C(63)));
  /* dc72c: mov x0, x16 */
  ARC_X_W(c, 0, ARC_X_R(c, 16));
  /* dc730: b #0xdc74c */
  goto L_dc74c;
L_dc734:;
  /* dc734: orr w16, w30, #0x30 */
  ARC_W_W(c, 16, (ARC_W_R(c, 30) | UINT64_C(48)));
  /* dc738: strb w16, [x0] */
  arc_st8(ARC_X_R(c, 0), ARC_W_R(c, 16));
L_dc73c:;
  /* dc73c: cmp w25, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 25), UINT64_C(1));
  /* dc740: add x0, x0, x28 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + ARC_X_R(c, 28)));
  /* dc744: mov w28, #1 */
  ARC_W_W(c, 28, UINT64_C(1));
  /* dc748: b.lt #0xdca58 */
  if (ARC_COND(c, 11)) goto L_dca58;
L_dc74c:;
  /* dc74c: sub w25, w25, #1 */
  ARC_W_W(c, 25, (ARC_W_R(c, 25) - UINT64_C(1)));
  /* dc750: add w7, w25, w21 */
  ARC_W_W(c, 7, (ARC_W_R(c, 25) + ARC_W_R(c, 21)));
  /* dc754: umaddl x7, w7, w15, x14 */
  ARC_X_W(c, 7, (((uint64_t)(ARC_X_R(c, 14))) + (((uint64_t)(uint32_t)(ARC_W_R(c, 7))) * ((uint64_t)(uint32_t)(ARC_W_R(c, 15))))));
  /* dc758: ldp x26, x27, [x7] */
  { const uint64_t _pa = ARC_X_R(c, 7);
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* dc75c: ldr x7, [x7, #0x10] */
  ARC_X_W(c, 7, arc_ld64((ARC_X_R(c, 7) + INT64_C(16))));
  /* dc760: mul x22, x7, x13 */
  ARC_X_W(c, 22, ((uint64_t)(ARC_X_R(c, 7)) * (uint64_t)(ARC_X_R(c, 13))));
  /* dc764: umulh x26, x26, x13 */
  ARC_X_W(c, 26, arc_umulh(ARC_X_R(c, 26), ARC_X_R(c, 13)));
  /* dc768: umulh x30, x27, x13 */
  ARC_X_W(c, 30, arc_umulh(ARC_X_R(c, 27), ARC_X_R(c, 13)));
  /* dc76c: mul x27, x27, x13 */
  ARC_X_W(c, 27, ((uint64_t)(ARC_X_R(c, 27)) * (uint64_t)(ARC_X_R(c, 13))));
  /* dc770: umulh x7, x7, x13 */
  ARC_X_W(c, 7, arc_umulh(ARC_X_R(c, 7), ARC_X_R(c, 13)));
  /* dc774: cmn x27, x26 */
  (void)arc_add64(c, ARC_X_R(c, 27), ARC_X_R(c, 26), 0);
  /* dc778: mvn w27, w24 */
  ARC_W_W(c, 27, (~(uint32_t)(ARC_W_R(c, 24))));
  /* dc77c: adc x26, x22, x30 */
  ARC_X_W(c, 26, ((uint64_t)(ARC_X_R(c, 22)) + (uint64_t)(ARC_X_R(c, 30)) + (c)->cf));
  /* dc780: cmp x26, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 26), ARC_X_R(c, 22));
  /* dc784: lsr x26, x26, x24 */
  ARC_X_W(c, 26, ((uint64_t)(ARC_X_R(c, 26)) >> ((ARC_X_R(c, 24)) & 63)));
  /* dc788: cinc x7, x7, lo */
  ARC_X_W(c, 7, (ARC_COND(c, 3) ? (ARC_X_R(c, 7)) + 1 : (ARC_X_R(c, 7))));
  /* dc78c: lsr x22, x7, x20 */
  ARC_X_W(c, 22, ((uint64_t)(ARC_X_R(c, 7)) >> ((ARC_X_R(c, 20)) & 63)));
  /* dc790: lsl x7, x7, #1 */
  ARC_X_W(c, 7, ((uint64_t)(ARC_X_R(c, 7)) << ((UINT64_C(1)) & 63)));
  /* dc794: lsl x7, x7, x27 */
  ARC_X_W(c, 7, ((uint64_t)(ARC_X_R(c, 7)) << ((ARC_X_R(c, 27)) & 63)));
  /* dc798: umulh x27, x22, x10 */
  ARC_X_W(c, 27, arc_umulh(ARC_X_R(c, 22), ARC_X_R(c, 10)));
  /* dc79c: orr x7, x7, x26 */
  ARC_X_W(c, 7, (ARC_X_R(c, 7) | ARC_X_R(c, 26)));
  /* dc7a0: mul x30, x22, x10 */
  ARC_X_W(c, 30, ((uint64_t)(ARC_X_R(c, 22)) * (uint64_t)(ARC_X_R(c, 10))));
  /* dc7a4: umulh x26, x7, x10 */
  ARC_X_W(c, 26, arc_umulh(ARC_X_R(c, 7), ARC_X_R(c, 10)));
  /* dc7a8: mul x16, x7, x9 */
  ARC_X_W(c, 16, ((uint64_t)(ARC_X_R(c, 7)) * (uint64_t)(ARC_X_R(c, 9))));
  /* dc7ac: umulh x19, x7, x9 */
  ARC_X_W(c, 19, arc_umulh(ARC_X_R(c, 7), ARC_X_R(c, 9)));
  /* dc7b0: madd x22, x22, x9, x27 */
  ARC_X_W(c, 22, ((uint64_t)(ARC_X_R(c, 27)) + ((uint64_t)(ARC_X_R(c, 22)) * (uint64_t)(ARC_X_R(c, 9)))));
  /* dc7b4: adds x27, x26, x30 */
  ARC_X_W(c, 27, arc_add64(c, ARC_X_R(c, 26), ARC_X_R(c, 30), 0));
  /* dc7b8: cmn x16, x27 */
  (void)arc_add64(c, ARC_X_R(c, 16), ARC_X_R(c, 27), 0);
  /* dc7bc: cset w16, hs */
  ARC_W_W(c, 16, (ARC_COND(c, 2) ? 1 : 0));
  /* dc7c0: cmn x26, x30 */
  (void)arc_add64(c, ARC_X_R(c, 26), ARC_X_R(c, 30), 0);
  /* dc7c4: add x19, x22, x19 */
  ARC_X_W(c, 19, (ARC_X_R(c, 22) + ARC_X_R(c, 19)));
  /* dc7c8: adc x16, x19, x16 */
  ARC_X_W(c, 16, ((uint64_t)(ARC_X_R(c, 19)) + (uint64_t)(ARC_X_R(c, 16)) + (c)->cf));
  /* dc7cc: lsr x16, x16, #0x1d */
  ARC_X_W(c, 16, ((uint64_t)(ARC_X_R(c, 16)) >> ((UINT64_C(29)) & 63)));
  /* dc7d0: madd w30, w16, w11, w7 */
  ARC_W_W(c, 30, ((uint32_t)(ARC_W_R(c, 7)) + ((uint32_t)(ARC_W_R(c, 16)) * (uint32_t)(ARC_W_R(c, 11)))));
  /* dc7d4: tbz w28, #0, #0xdc850 */
  if (((ARC_W_R(c, 28)) >> 0 & 1) == 0) goto L_dc850;
  /* dc7d8: sub x16, x1, x0 */
  ARC_X_W(c, 16, (ARC_X_R(c, 1) - ARC_X_R(c, 0)));
  /* dc7dc: cmp x16, #9 */
  (void)arc_sub64(c, ARC_X_R(c, 16), UINT64_C(9));
  /* dc7e0: b.lt #0xdcd2c */
  if (ARC_COND(c, 11)) goto L_dcd2c;
  /* dc7e4: cbz w30, #0xdc910 */
  if ((ARC_W_R(c, 30)) == 0) goto L_dc910;
  /* dc7e8: umull x16, w30, w17 */
  ARC_X_W(c, 16, (((uint64_t)(uint32_t)(ARC_W_R(c, 30))) * ((uint64_t)(uint32_t)(ARC_W_R(c, 17)))));
  /* dc7ec: mov w19, #0x3b89 */
  ARC_W_W(c, 19, UINT64_C(15241));
  /* dc7f0: mov w28, #9 */
  ARC_W_W(c, 28, UINT64_C(9));
  /* dc7f4: movk w19, #0x55e6, lsl #16 */
  ARC_W_W(c, 19, ((ARC_W_R(c, 19) & UINT64_C(18446744069414649855)) | UINT64_C(1441136640)));
  /* dc7f8: umull x19, w30, w19 */
  ARC_X_W(c, 19, (((uint64_t)(uint32_t)(ARC_W_R(c, 30))) * ((uint64_t)(uint32_t)(ARC_W_R(c, 19)))));
  /* dc7fc: lsr x16, x16, #0x2d */
  ARC_X_W(c, 16, ((uint64_t)(ARC_X_R(c, 16)) >> ((UINT64_C(45)) & 63)));
  /* dc800: madd w7, w16, w3, w30 */
  ARC_W_W(c, 7, ((uint32_t)(ARC_W_R(c, 30)) + ((uint32_t)(ARC_W_R(c, 16)) * (uint32_t)(ARC_W_R(c, 3)))));
  /* dc804: lsr x19, x19, #0x39 */
  ARC_X_W(c, 19, ((uint64_t)(ARC_X_R(c, 19)) >> ((UINT64_C(57)) & 63)));
  /* dc808: madd w16, w19, w3, w16 */
  ARC_W_W(c, 16, ((uint32_t)(ARC_W_R(c, 16)) + ((uint32_t)(ARC_W_R(c, 19)) * (uint32_t)(ARC_W_R(c, 3)))));
  /* dc80c: umull x22, w7, w4 */
  ARC_X_W(c, 22, (((uint64_t)(uint32_t)(ARC_W_R(c, 7))) * ((uint64_t)(uint32_t)(ARC_W_R(c, 4)))));
  /* dc810: umull x26, w16, w4 */
  ARC_X_W(c, 26, (((uint64_t)(uint32_t)(ARC_W_R(c, 16))) * ((uint64_t)(uint32_t)(ARC_W_R(c, 4)))));
  /* dc814: lsr x22, x22, #0x25 */
  ARC_X_W(c, 22, ((uint64_t)(ARC_X_R(c, 22)) >> ((UINT64_C(37)) & 63)));
  /* dc818: msub w7, w22, w6, w7 */
  ARC_W_W(c, 7, ((uint32_t)(ARC_W_R(c, 7)) - ((uint32_t)(ARC_W_R(c, 22)) * (uint32_t)(ARC_W_R(c, 6)))));
  /* dc81c: lsr x26, x26, #0x25 */
  ARC_X_W(c, 26, ((uint64_t)(ARC_X_R(c, 26)) >> ((UINT64_C(37)) & 63)));
  /* dc820: msub w16, w26, w6, w16 */
  ARC_W_W(c, 16, ((uint32_t)(ARC_W_R(c, 16)) - ((uint32_t)(ARC_W_R(c, 26)) * (uint32_t)(ARC_W_R(c, 6)))));
  /* dc824: ldrh w7, [x5, w7, uxtw #1] */
  ARC_W_W(c, 7, arc_ld16((ARC_X_R(c, 5) + ((uint64_t)(((uint64_t)(uint32_t)(ARC_W_R(c, 7)))) << 1))));
  /* dc828: sturh w7, [x0, #7] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(7)), ARC_W_R(c, 7));
  /* dc82c: ldrh w7, [x5, x22, lsl #1] */
  ARC_W_W(c, 7, arc_ld16((ARC_X_R(c, 5) + ((uint64_t)(ARC_X_R(c, 22)) << 1))));
  /* dc830: sturh w7, [x0, #5] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(5)), ARC_W_R(c, 7));
  /* dc834: add w7, w19, #0x30 */
  ARC_W_W(c, 7, (ARC_W_R(c, 19) + UINT64_C(48)));
  /* dc838: ldrh w16, [x5, w16, uxtw #1] */
  ARC_W_W(c, 16, arc_ld16((ARC_X_R(c, 5) + ((uint64_t)(((uint64_t)(uint32_t)(ARC_W_R(c, 16)))) << 1))));
  /* dc83c: sturh w16, [x0, #3] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(3)), ARC_W_R(c, 16));
  /* dc840: ldrh w16, [x5, x26, lsl #1] */
  ARC_W_W(c, 16, arc_ld16((ARC_X_R(c, 5) + ((uint64_t)(ARC_X_R(c, 26)) << 1))));
  /* dc844: strb w7, [x0] */
  arc_st8(ARC_X_R(c, 0), ARC_W_R(c, 7));
  /* dc848: sturh w16, [x0, #1] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(1)), ARC_W_R(c, 16));
  /* dc84c: b #0xdc73c */
  goto L_dc73c;
L_dc850:;
  /* dc850: cbnz w30, #0xdc8e4 */
  if ((ARC_W_R(c, 30)) != 0) goto L_dc8e4;
L_dc854:;
  /* dc854: subs w25, w25, #1 */
  ARC_W_W(c, 25, arc_sub32(c, ARC_W_R(c, 25), UINT64_C(1)));
  /* dc858: b.lt #0xdca48 */
  if (ARC_COND(c, 11)) goto L_dca48;
  /* dc85c: add w16, w25, w21 */
  ARC_W_W(c, 16, (ARC_W_R(c, 25) + ARC_W_R(c, 21)));
  /* dc860: umaddl x16, w16, w15, x14 */
  ARC_X_W(c, 16, (((uint64_t)(ARC_X_R(c, 14))) + (((uint64_t)(uint32_t)(ARC_W_R(c, 16))) * ((uint64_t)(uint32_t)(ARC_W_R(c, 15))))));
  /* dc864: ldp x7, x19, [x16] */
  { const uint64_t _pa = ARC_X_R(c, 16);
    ARC_X_W(c, 7, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* dc868: ldr x16, [x16, #0x10] */
  ARC_X_W(c, 16, arc_ld64((ARC_X_R(c, 16) + INT64_C(16))));
  /* dc86c: mul x26, x16, x13 */
  ARC_X_W(c, 26, ((uint64_t)(ARC_X_R(c, 16)) * (uint64_t)(ARC_X_R(c, 13))));
  /* dc870: umulh x7, x7, x13 */
  ARC_X_W(c, 7, arc_umulh(ARC_X_R(c, 7), ARC_X_R(c, 13)));
  /* dc874: umulh x22, x19, x13 */
  ARC_X_W(c, 22, arc_umulh(ARC_X_R(c, 19), ARC_X_R(c, 13)));
  /* dc878: mul x19, x19, x13 */
  ARC_X_W(c, 19, ((uint64_t)(ARC_X_R(c, 19)) * (uint64_t)(ARC_X_R(c, 13))));
  /* dc87c: umulh x16, x16, x13 */
  ARC_X_W(c, 16, arc_umulh(ARC_X_R(c, 16), ARC_X_R(c, 13)));
  /* dc880: cmn x19, x7 */
  (void)arc_add64(c, ARC_X_R(c, 19), ARC_X_R(c, 7), 0);
  /* dc884: adc x7, x26, x22 */
  ARC_X_W(c, 7, ((uint64_t)(ARC_X_R(c, 26)) + (uint64_t)(ARC_X_R(c, 22)) + (c)->cf));
  /* dc888: mvn w22, w24 */
  ARC_W_W(c, 22, (~(uint32_t)(ARC_W_R(c, 24))));
  /* dc88c: cmp x7, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 7), ARC_X_R(c, 26));
  /* dc890: lsr x7, x7, x24 */
  ARC_X_W(c, 7, ((uint64_t)(ARC_X_R(c, 7)) >> ((ARC_X_R(c, 24)) & 63)));
  /* dc894: cinc x16, x16, lo */
  ARC_X_W(c, 16, (ARC_COND(c, 3) ? (ARC_X_R(c, 16)) + 1 : (ARC_X_R(c, 16))));
  /* dc898: lsr x19, x16, x20 */
  ARC_X_W(c, 19, ((uint64_t)(ARC_X_R(c, 16)) >> ((ARC_X_R(c, 20)) & 63)));
  /* dc89c: lsl x16, x16, #1 */
  ARC_X_W(c, 16, ((uint64_t)(ARC_X_R(c, 16)) << ((UINT64_C(1)) & 63)));
  /* dc8a0: lsl x16, x16, x22 */
  ARC_X_W(c, 16, ((uint64_t)(ARC_X_R(c, 16)) << ((ARC_X_R(c, 22)) & 63)));
  /* dc8a4: umulh x22, x19, x10 */
  ARC_X_W(c, 22, arc_umulh(ARC_X_R(c, 19), ARC_X_R(c, 10)));
  /* dc8a8: orr x16, x16, x7 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) | ARC_X_R(c, 7)));
  /* dc8ac: mul x26, x19, x10 */
  ARC_X_W(c, 26, ((uint64_t)(ARC_X_R(c, 19)) * (uint64_t)(ARC_X_R(c, 10))));
  /* dc8b0: umulh x7, x16, x10 */
  ARC_X_W(c, 7, arc_umulh(ARC_X_R(c, 16), ARC_X_R(c, 10)));
  /* dc8b4: mul x27, x16, x9 */
  ARC_X_W(c, 27, ((uint64_t)(ARC_X_R(c, 16)) * (uint64_t)(ARC_X_R(c, 9))));
  /* dc8b8: umulh x28, x16, x9 */
  ARC_X_W(c, 28, arc_umulh(ARC_X_R(c, 16), ARC_X_R(c, 9)));
  /* dc8bc: madd x19, x19, x9, x22 */
  ARC_X_W(c, 19, ((uint64_t)(ARC_X_R(c, 22)) + ((uint64_t)(ARC_X_R(c, 19)) * (uint64_t)(ARC_X_R(c, 9)))));
  /* dc8c0: adds x22, x7, x26 */
  ARC_X_W(c, 22, arc_add64(c, ARC_X_R(c, 7), ARC_X_R(c, 26), 0));
  /* dc8c4: cmn x27, x22 */
  (void)arc_add64(c, ARC_X_R(c, 27), ARC_X_R(c, 22), 0);
  /* dc8c8: cset w22, hs */
  ARC_W_W(c, 22, (ARC_COND(c, 2) ? 1 : 0));
  /* dc8cc: cmn x7, x26 */
  (void)arc_add64(c, ARC_X_R(c, 7), ARC_X_R(c, 26), 0);
  /* dc8d0: add x7, x19, x28 */
  ARC_X_W(c, 7, (ARC_X_R(c, 19) + ARC_X_R(c, 28)));
  /* dc8d4: adc x7, x7, x22 */
  ARC_X_W(c, 7, ((uint64_t)(ARC_X_R(c, 7)) + (uint64_t)(ARC_X_R(c, 22)) + (c)->cf));
  /* dc8d8: lsr x7, x7, #0x1d */
  ARC_X_W(c, 7, ((uint64_t)(ARC_X_R(c, 7)) >> ((UINT64_C(29)) & 63)));
  /* dc8dc: madd w30, w7, w11, w16 */
  ARC_W_W(c, 30, ((uint32_t)(ARC_W_R(c, 16)) + ((uint32_t)(ARC_W_R(c, 7)) * (uint32_t)(ARC_W_R(c, 11)))));
  /* dc8e0: cbz w30, #0xdc854 */
  if ((ARC_W_R(c, 30)) == 0) goto L_dc854;
L_dc8e4:;
  /* dc8e4: lsr w26, w30, #4 */
  ARC_W_W(c, 26, ((uint32_t)(ARC_W_R(c, 30)) >> ((UINT64_C(4)) & 31)));
  /* dc8e8: cmp w30, w12 */
  (void)arc_sub32(c, ARC_W_R(c, 30), ARC_W_R(c, 12));
  /* dc8ec: b.ls #0xdc8f8 */
  if (ARC_COND(c, 9)) goto L_dc8f8;
  /* dc8f0: mov w28, #9 */
  ARC_W_W(c, 28, UINT64_C(9));
  /* dc8f4: b #0xdc988 */
  goto L_dc988;
L_dc8f8:;
  /* dc8f8: mov w16, #0x967f */
  ARC_W_W(c, 16, UINT64_C(38527));
  /* dc8fc: movk w16, #0x98, lsl #16 */
  ARC_W_W(c, 16, ((ARC_W_R(c, 16) & UINT64_C(18446744069414649855)) | UINT64_C(9961472)));
  /* dc900: cmp w30, w16 */
  (void)arc_sub32(c, ARC_W_R(c, 30), ARC_W_R(c, 16));
  /* dc904: b.ls #0xdc924 */
  if (ARC_COND(c, 9)) goto L_dc924;
  /* dc908: mov w28, #8 */
  ARC_W_W(c, 28, UINT64_C(8));
  /* dc90c: b #0xdc988 */
  goto L_dc988;
L_dc910:;
  /* dc910: mov x16, #0x3030303030303030 */
  ARC_X_W(c, 16, UINT64_C(3472328296227680304));
  /* dc914: mov w28, #9 */
  ARC_W_W(c, 28, UINT64_C(9));
  /* dc918: str x16, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 16));
  /* dc91c: strb w16, [x0, #8] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 16));
  /* dc920: b #0xdc73c */
  goto L_dc73c;
L_dc924:;
  /* dc924: mov w16, #0x423f */
  ARC_W_W(c, 16, UINT64_C(16959));
  /* dc928: movk w16, #0xf, lsl #16 */
  ARC_W_W(c, 16, ((ARC_W_R(c, 16) & UINT64_C(18446744069414649855)) | UINT64_C(983040)));
  /* dc92c: cmp w30, w16 */
  (void)arc_sub32(c, ARC_W_R(c, 30), ARC_W_R(c, 16));
  /* dc930: b.ls #0xdc93c */
  if (ARC_COND(c, 9)) goto L_dc93c;
  /* dc934: mov w28, #7 */
  ARC_W_W(c, 28, UINT64_C(7));
  /* dc938: b #0xdc988 */
  goto L_dc988;
L_dc93c:;
  /* dc93c: lsr w16, w30, #5 */
  ARC_W_W(c, 16, ((uint32_t)(ARC_W_R(c, 30)) >> ((UINT64_C(5)) & 31)));
  /* dc940: cmp w16, #0xc34 */
  (void)arc_sub32(c, ARC_W_R(c, 16), UINT64_C(3124));
  /* dc944: b.ls #0xdc950 */
  if (ARC_COND(c, 9)) goto L_dc950;
  /* dc948: mov w28, #6 */
  ARC_W_W(c, 28, UINT64_C(6));
  /* dc94c: b #0xdc988 */
  goto L_dc988;
L_dc950:;
  /* dc950: cmp w26, #0x270 */
  (void)arc_sub32(c, ARC_W_R(c, 26), UINT64_C(624));
  /* dc954: b.ls #0xdc960 */
  if (ARC_COND(c, 9)) goto L_dc960;
  /* dc958: mov w28, #5 */
  ARC_W_W(c, 28, UINT64_C(5));
  /* dc95c: b #0xdc988 */
  goto L_dc988;
L_dc960:;
  /* dc960: cmp w30, #0x3e7 */
  (void)arc_sub32(c, ARC_W_R(c, 30), UINT64_C(999));
  /* dc964: b.ls #0xdc970 */
  if (ARC_COND(c, 9)) goto L_dc970;
  /* dc968: mov w28, #4 */
  ARC_W_W(c, 28, UINT64_C(4));
  /* dc96c: b #0xdc988 */
  goto L_dc988;
L_dc970:;
  /* dc970: cmp w30, #9 */
  (void)arc_sub32(c, ARC_W_R(c, 30), UINT64_C(9));
  /* dc974: mov w16, #1 */
  ARC_W_W(c, 16, UINT64_C(1));
  /* dc978: mov w7, #3 */
  ARC_W_W(c, 7, UINT64_C(3));
  /* dc97c: cinc x16, x16, hi */
  ARC_X_W(c, 16, (ARC_COND(c, 8) ? (ARC_X_R(c, 16)) + 1 : (ARC_X_R(c, 16))));
  /* dc980: cmp w30, #0x63 */
  (void)arc_sub32(c, ARC_W_R(c, 30), UINT64_C(99));
  /* dc984: csel x28, x7, x16, hi */
  ARC_X_W(c, 28, (ARC_COND(c, 8) ? (ARC_X_R(c, 7)) : ARC_X_R(c, 16)));
L_dc988:;
  /* dc988: sub x16, x1, x0 */
  ARC_X_W(c, 16, (ARC_X_R(c, 1) - ARC_X_R(c, 0)));
  /* dc98c: cmp x16, x28 */
  (void)arc_sub64(c, ARC_X_R(c, 16), ARC_X_R(c, 28));
  /* dc990: b.lt #0xdcd2c */
  if (ARC_COND(c, 11)) goto L_dcd2c;
  /* dc994: cmp w26, #0x271 */
  (void)arc_sub32(c, ARC_W_R(c, 26), UINT64_C(625));
  /* dc998: b.lo #0xdca38 */
  if (ARC_COND(c, 3)) goto L_dca38;
  /* dc99c: mov w26, wzr */
  ARC_W_W(c, 26, ARC_W_R(c, 31));
  /* dc9a0: add x27, x0, x28 */
  ARC_X_W(c, 27, (ARC_X_R(c, 0) + ARC_X_R(c, 28)));
  /* dc9a4: mov w7, w30 */
  ARC_W_W(c, 7, ARC_W_R(c, 30));
L_dc9a8:;
  /* dc9a8: umull x16, w7, w17 */
  ARC_X_W(c, 16, (((uint64_t)(uint32_t)(ARC_W_R(c, 7))) * ((uint64_t)(uint32_t)(ARC_W_R(c, 17)))));
  /* dc9ac: sub x22, x27, w26, uxtw */
  ARC_X_W(c, 22, (ARC_X_R(c, 27) - ((uint64_t)(uint32_t)(ARC_W_R(c, 26)))));
  /* dc9b0: cmp w7, w12 */
  (void)arc_sub32(c, ARC_W_R(c, 7), ARC_W_R(c, 12));
  /* dc9b4: add w26, w26, #4 */
  ARC_W_W(c, 26, (ARC_W_R(c, 26) + UINT64_C(4)));
  /* dc9b8: lsr x30, x16, #0x2d */
  ARC_X_W(c, 30, ((uint64_t)(ARC_X_R(c, 16)) >> ((UINT64_C(45)) & 63)));
  /* dc9bc: madd w16, w30, w3, w7 */
  ARC_W_W(c, 16, ((uint32_t)(ARC_W_R(c, 7)) + ((uint32_t)(ARC_W_R(c, 30)) * (uint32_t)(ARC_W_R(c, 3)))));
  /* dc9c0: mov w7, w30 */
  ARC_W_W(c, 7, ARC_W_R(c, 30));
  /* dc9c4: umull x19, w16, w4 */
  ARC_X_W(c, 19, (((uint64_t)(uint32_t)(ARC_W_R(c, 16))) * ((uint64_t)(uint32_t)(ARC_W_R(c, 4)))));
  /* dc9c8: lsr x19, x19, #0x25 */
  ARC_X_W(c, 19, ((uint64_t)(ARC_X_R(c, 19)) >> ((UINT64_C(37)) & 63)));
  /* dc9cc: msub w16, w19, w6, w16 */
  ARC_W_W(c, 16, ((uint32_t)(ARC_W_R(c, 16)) - ((uint32_t)(ARC_W_R(c, 19)) * (uint32_t)(ARC_W_R(c, 6)))));
  /* dc9d0: ldrh w16, [x5, w16, uxtw #1] */
  ARC_W_W(c, 16, arc_ld16((ARC_X_R(c, 5) + ((uint64_t)(((uint64_t)(uint32_t)(ARC_W_R(c, 16)))) << 1))));
  /* dc9d4: sturh w16, [x22, #-2] */
  arc_st16((ARC_X_R(c, 22) + INT64_C(-2)), ARC_W_R(c, 16));
  /* dc9d8: ldrh w16, [x5, x19, lsl #1] */
  ARC_W_W(c, 16, arc_ld16((ARC_X_R(c, 5) + ((uint64_t)(ARC_X_R(c, 19)) << 1))));
  /* dc9dc: sturh w16, [x22, #-4] */
  arc_st16((ARC_X_R(c, 22) + INT64_C(-4)), ARC_W_R(c, 16));
  /* dc9e0: b.hi #0xdc9a8 */
  if (ARC_COND(c, 8)) goto L_dc9a8;
  /* dc9e4: cmp w30, #0x64 */
  (void)arc_sub32(c, ARC_W_R(c, 30), UINT64_C(100));
  /* dc9e8: b.lo #0xdca1c */
  if (ARC_COND(c, 3)) goto L_dca1c;
L_dc9ec:;
  /* dc9ec: ubfx w16, w30, #2, #0xe */
  ARC_W_W(c, 16, (((uint32_t)(ARC_W_R(c, 30)) >> 2) & UINT64_C(16383)));
  /* dc9f0: mov w7, #0x147b */
  ARC_W_W(c, 7, UINT64_C(5243));
  /* dc9f4: add x19, x0, x28 */
  ARC_X_W(c, 19, (ARC_X_R(c, 0) + ARC_X_R(c, 28)));
  /* dc9f8: sub x19, x19, w26, uxtw */
  ARC_X_W(c, 19, (ARC_X_R(c, 19) - ((uint64_t)(uint32_t)(ARC_W_R(c, 26)))));
  /* dc9fc: orr w26, w26, #2 */
  ARC_W_W(c, 26, (ARC_W_R(c, 26) | UINT64_C(2)));
  /* dca00: mul w16, w16, w7 */
  ARC_W_W(c, 16, ((uint32_t)(ARC_W_R(c, 16)) * (uint32_t)(ARC_W_R(c, 7))));
  /* dca04: lsr w16, w16, #0x11 */
  ARC_W_W(c, 16, ((uint32_t)(ARC_W_R(c, 16)) >> ((UINT64_C(17)) & 31)));
  /* dca08: msub w7, w16, w6, w30 */
  ARC_W_W(c, 7, ((uint32_t)(ARC_W_R(c, 30)) - ((uint32_t)(ARC_W_R(c, 16)) * (uint32_t)(ARC_W_R(c, 6)))));
  /* dca0c: mov w30, w16 */
  ARC_W_W(c, 30, ARC_W_R(c, 16));
  /* dca10: and x7, x7, #0xffff */
  ARC_X_W(c, 7, (ARC_X_R(c, 7) & UINT64_C(65535)));
  /* dca14: ldrh w7, [x5, x7, lsl #1] */
  ARC_W_W(c, 7, arc_ld16((ARC_X_R(c, 5) + ((uint64_t)(ARC_X_R(c, 7)) << 1))));
  /* dca18: sturh w7, [x19, #-2] */
  arc_st16((ARC_X_R(c, 19) + INT64_C(-2)), ARC_W_R(c, 7));
L_dca1c:;
  /* dca1c: cmp w30, #0xa */
  (void)arc_sub32(c, ARC_W_R(c, 30), UINT64_C(10));
  /* dca20: b.lo #0xdc734 */
  if (ARC_COND(c, 3)) goto L_dc734;
  /* dca24: add x16, x0, x28 */
  ARC_X_W(c, 16, (ARC_X_R(c, 0) + ARC_X_R(c, 28)));
  /* dca28: ldrh w7, [x5, w30, uxtw #1] */
  ARC_W_W(c, 7, arc_ld16((ARC_X_R(c, 5) + ((uint64_t)(((uint64_t)(uint32_t)(ARC_W_R(c, 30)))) << 1))));
  /* dca2c: sub x16, x16, w26, uxtw */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) - ((uint64_t)(uint32_t)(ARC_W_R(c, 26)))));
  /* dca30: sturh w7, [x16, #-2] */
  arc_st16((ARC_X_R(c, 16) + INT64_C(-2)), ARC_W_R(c, 7));
  /* dca34: b #0xdc73c */
  goto L_dc73c;
L_dca38:;
  /* dca38: mov w26, wzr */
  ARC_W_W(c, 26, ARC_W_R(c, 31));
  /* dca3c: cmp w30, #0x64 */
  (void)arc_sub32(c, ARC_W_R(c, 30), UINT64_C(100));
  /* dca40: b.hs #0xdc9ec */
  if (ARC_COND(c, 2)) goto L_dc9ec;
  /* dca44: b #0xdca1c */
  goto L_dca1c;
L_dca48:;
  /* dca48: cmp x0, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 1));
  /* dca4c: b.eq #0xdcad0 */
  if (ARC_COND(c, 0)) goto L_dcad0;
  /* dca50: mov w8, #0x30 */
  ARC_W_W(c, 8, UINT64_C(48));
  /* dca54: strb w8, [x0], #1 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(1));
    arc_st8(_a, ARC_W_R(c, 8));
  }
L_dca58:;
  /* dca58: cbz w2, #0xdca6c */
  if ((ARC_W_R(c, 2)) == 0) goto L_dca6c;
  /* dca5c: cmp x0, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 1));
  /* dca60: b.eq #0xdcad0 */
  if (ARC_COND(c, 0)) goto L_dcad0;
  /* dca64: mov w8, #0x2e */
  ARC_W_W(c, 8, UINT64_C(46));
  /* dca68: strb w8, [x0], #1 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(1));
    arc_st8(_a, ARC_W_R(c, 8));
  }
L_dca6c:;
  /* dca6c: tbz w23, #0x1f, #0xdca9c */
  if (((ARC_W_R(c, 23)) >> 31 & 1) == 0) goto L_dca9c;
  /* dca70: mov w8, #0x8e39 */
  ARC_W_W(c, 8, UINT64_C(36409));
  /* dca74: neg w25, w23 */
  ARC_W_W(c, 25, ((uint32_t)0 - (uint32_t)(ARC_W_R(c, 23))));
  /* dca78: movk w8, #0x38e3, lsl #16 */
  ARC_W_W(c, 8, ((ARC_W_R(c, 8) & UINT64_C(18446744069414649855)) | UINT64_C(954400768)));
  /* dca7c: lsr x26, x25, #4 */
  ARC_X_W(c, 26, ((uint64_t)(ARC_X_R(c, 25)) >> ((UINT64_C(4)) & 63)));
  /* dca80: umull x8, w2, w8 */
  ARC_X_W(c, 8, (((uint64_t)(uint32_t)(ARC_W_R(c, 2))) * ((uint64_t)(uint32_t)(ARC_W_R(c, 8)))));
  /* dca84: lsr x24, x8, #0x21 */
  ARC_X_W(c, 24, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(33)) & 63)));
  /* dca88: nop  */
  /* nop: no architectural effect here */
  /* dca8c: adr x8, #0x5fd68 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(392552)));
  /* dca90: ldrb w27, [x8, x26] */
  ARC_W_W(c, 27, arc_ld8((ARC_X_R(c, 8) + ARC_X_R(c, 26))));
  /* dca94: cmp w24, w27 */
  (void)arc_sub32(c, ARC_W_R(c, 24), ARC_W_R(c, 27));
  /* dca98: b.hs #0xdcb18 */
  if (ARC_COND(c, 2)) goto L_dcb18;
L_dca9c:;
  /* dca9c: sub x8, x1, x0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 1) - ARC_X_R(c, 0)));
  /* dcaa0: mov w19, w2 */
  ARC_W_W(c, 19, ARC_W_R(c, 2));
  /* dcaa4: cmp x8, x19 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 19));
  /* dcaa8: b.lt #0xdcad0 */
  if (ARC_COND(c, 11)) goto L_dcad0;
L_dcaac:;
  /* dcaac: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* dcab0: b #0xdcb00 */
  goto L_dcb00;
L_dcab4:;
  /* dcab4: cmp w2, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 2), UINT64_C(0));
  /* dcab8: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* dcabc: sub x9, x1, x15 */
  ARC_X_W(c, 9, (ARC_X_R(c, 1) - ARC_X_R(c, 15)));
  /* dcac0: cinc w8, w8, ne */
  ARC_W_W(c, 8, (ARC_COND(c, 1) ? (ARC_W_R(c, 8)) + 1 : (ARC_W_R(c, 8))));
  /* dcac4: add w8, w8, w2 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) + ARC_W_R(c, 2)));
  /* dcac8: cmp x9, w8, sxtw */
  (void)arc_sub64(c, ARC_X_R(c, 9), ((uint64_t)(int64_t)(int32_t)(ARC_W_R(c, 8))));
  /* dcacc: b.ge #0xdcadc */
  if (ARC_COND(c, 10)) goto L_dcadc;
L_dcad0:;
  /* dcad0: mov w8, #0x4b */
  ARC_W_W(c, 8, UINT64_C(75));
  /* dcad4: mov x0, x1 */
  ARC_X_W(c, 0, ARC_X_R(c, 1));
  /* dcad8: b #0xdcf10 */
  goto L_dcf10;
L_dcadc:;
  /* dcadc: mov w8, #0x30 */
  ARC_W_W(c, 8, UINT64_C(48));
  /* dcae0: mov x0, x15 */
  ARC_X_W(c, 0, ARC_X_R(c, 15));
  /* dcae4: strb w8, [x0], #1 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(1));
    arc_st8(_a, ARC_W_R(c, 8));
  }
  /* dcae8: cbz w2, #0xdcf0c */
  if ((ARC_W_R(c, 2)) == 0) goto L_dcf0c;
  /* dcaec: mov w8, #0x2e */
  ARC_W_W(c, 8, UINT64_C(46));
  /* dcaf0: add x20, x15, #2 */
  ARC_X_W(c, 20, (ARC_X_R(c, 15) + UINT64_C(2)));
  /* dcaf4: mov w19, w2 */
  ARC_W_W(c, 19, ARC_W_R(c, 2));
  /* dcaf8: strb w8, [x15, #1] */
  arc_st8((ARC_X_R(c, 15) + INT64_C(1)), ARC_W_R(c, 8));
  /* dcafc: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
L_dcb00:;
  /* dcb00: mov w1, #0x30 */
  ARC_W_W(c, 1, UINT64_C(48));
  /* dcb04: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* dcb08: bl #0x144a20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(903948));
  fn1_144a20(c);
  /* dcb0c: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* dcb10: add x0, x20, x19 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + ARC_X_R(c, 19)));
  /* dcb14: b #0xdcf10 */
  goto L_dcf10;
L_dcb18:;
  /* dcb18: sub x8, x26, #0x44 */
  ARC_X_W(c, 8, (ARC_X_R(c, 26) - UINT64_C(68)));
  /* dcb1c: cmn x8, #0x3e */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(62), 0);
  /* dcb20: b.hs #0xdcb2c */
  if (ARC_COND(c, 2)) goto L_dcb2c;
  /* dcb24: mov x13, xzr */
  ARC_X_W(c, 13, ARC_X_R(c, 31));
  /* dcb28: b #0xdcb64 */
  goto L_dcb64;
L_dcb2c:;
  /* dcb2c: add x20, x27, x27, lsl #3 */
  ARC_X_W(c, 20, (ARC_X_R(c, 27) + ((uint64_t)(ARC_X_R(c, 27)) << 3)));
  /* dcb30: sub x8, x1, x0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 1) - ARC_X_R(c, 0)));
  /* dcb34: cmp x8, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 20));
  /* dcb38: b.lt #0xdcad0 */
  if (ARC_COND(c, 11)) goto L_dcad0;
  /* dcb3c: str x1, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 1));
  /* dcb40: mov w1, #0x30 */
  ARC_W_W(c, 1, UINT64_C(48));
  /* dcb44: mov w28, w2 */
  ARC_W_W(c, 28, ARC_W_R(c, 2));
  /* dcb48: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* dcb4c: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* dcb50: bl #0x144a20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(904020));
  fn1_144a20(c);
  /* dcb54: ldr x1, [sp, #8] */
  ARC_X_W(c, 1, arc_ld64(((c)->sp + INT64_C(8))));
  /* dcb58: mov w2, w28 */
  ARC_W_W(c, 2, ARC_W_R(c, 28));
  /* dcb5c: add x0, x21, x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) + ARC_X_R(c, 20)));
  /* dcb60: mov x13, x27 */
  ARC_X_W(c, 13, ARC_X_R(c, 27));
L_dcb64:;
  /* dcb64: nop  */
  /* nop: no architectural effect here */
  /* dcb68: adr x8, #0x5fdae */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(392622)));
  /* dcb6c: add w10, w26, #1 */
  ARC_W_W(c, 10, (ARC_W_R(c, 26) + UINT64_C(1)));
  /* dcb70: ldrh w9, [x8, x26, lsl #1] */
  ARC_W_W(c, 9, arc_ld16((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 26)) << 1))));
  /* dcb74: ldrh w14, [x8, w10, uxtw #1] */
  ARC_W_W(c, 14, arc_ld16((ARC_X_R(c, 8) + ((uint64_t)(((uint64_t)(uint32_t)(ARC_W_R(c, 10)))) << 1))));
  /* dcb78: sub w8, w13, w27 */
  ARC_W_W(c, 8, (ARC_W_R(c, 13) - ARC_W_R(c, 27)));
  /* dcb7c: add w15, w8, w9 */
  ARC_W_W(c, 15, (ARC_W_R(c, 8) + ARC_W_R(c, 9)));
  /* dcb80: cmp w15, w14 */
  (void)arc_sub32(c, ARC_W_R(c, 15), ARC_W_R(c, 14));
  /* dcb84: b.hs #0xdcd34 */
  if (ARC_COND(c, 2)) goto L_dcd34;
  /* dcb88: ldur x8, [x29, #-8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(-8))));
  /* dcb8c: mov w3, w24 */
  ARC_W_W(c, 3, ARC_W_R(c, 24));
  /* dcb90: mov x4, #0xa597 */
  ARC_X_W(c, 4, UINT64_C(42391));
  /* dcb94: mov x5, #0x3031 */
  ARC_X_W(c, 5, UINT64_C(12337));
  /* dcb98: add x9, x3, x3, lsl #3 */
  ARC_X_W(c, 9, (ARC_X_R(c, 3) + ((uint64_t)(ARC_X_R(c, 3)) << 3)));
  /* dcb9c: movk x4, #0x36b4, lsl #16 */
  ARC_X_W(c, 4, ((ARC_X_R(c, 4) & UINT64_C(18446744069414649855)) | UINT64_C(917766144)));
  /* dcba0: lsl x17, x8, #8 */
  ARC_X_W(c, 17, ((uint64_t)(ARC_X_R(c, 8)) << ((UINT64_C(8)) & 63)));
  /* dcba4: movk x5, #0xf895, lsl #16 */
  ARC_X_W(c, 5, ((ARC_X_R(c, 5) & UINT64_C(18446744069414649855)) | UINT64_C(4170514432)));
  /* dcba8: mov w8, w2 */
  ARC_W_W(c, 8, ARC_W_R(c, 2));
  /* dcbac: and w16, w25, #0xf */
  ARC_W_W(c, 16, (ARC_W_R(c, 25) & UINT64_C(15)));
  /* dcbb0: movk x4, #0x5f41, lsl #32 */
  ARC_X_W(c, 4, ((ARC_X_R(c, 4) & UINT64_C(18446462603027808255)) | UINT64_C(104732777512960)));
  /* dcbb4: movk x5, #0xa88, lsl #32 */
  ARC_X_W(c, 5, ((ARC_X_R(c, 5) & UINT64_C(18446462603027808255)) | UINT64_C(11579231830016)));
  /* dcbb8: mov w7, #0x3600 */
  ARC_W_W(c, 7, UINT64_C(13824));
  /* dcbbc: stp x8, x9, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* dcbc0: add x8, x0, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* dcbc4: mvn x9, x9 */
  ARC_X_W(c, 9, (~(uint64_t)(ARC_X_R(c, 9))));
  /* dcbc8: mov w30, #0x851f */
  ARC_W_W(c, 30, UINT64_C(34079));
  /* dcbcc: movk x4, #0x8970, lsl #48 */
  ARC_X_W(c, 4, ((ARC_X_R(c, 4) & UINT64_C(281474976710655)) | UINT64_C(9903415580587720704)));
  /* dcbd0: movk x5, #0x3168, lsl #48 */
  ARC_X_W(c, 5, ((ARC_X_R(c, 5) & UINT64_C(281474976710655)) | UINT64_C(3560095505436377088)));
  /* dcbd4: movk w7, #0xc465, lsl #16 */
  ARC_W_W(c, 7, ((ARC_W_R(c, 7) & UINT64_C(18446744069414649855)) | UINT64_C(3294953472)));
  /* dcbd8: mov w21, #0x18 */
  ARC_W_W(c, 21, UINT64_C(24));
  /* dcbdc: mvn w25, w16 */
  ARC_W_W(c, 25, (~(uint32_t)(ARC_W_R(c, 16))));
  /* dcbe0: add x9, x8, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + ARC_X_R(c, 9)));
  /* dcbe4: mov w8, #0x4b */
  ARC_W_W(c, 8, UINT64_C(75));
  /* dcbe8: mov w28, #-0x2710 */
  ARC_W_W(c, 28, UINT64_C(18446744073709541616));
  /* dcbec: movk w30, #0x51eb, lsl #16 */
  ARC_W_W(c, 30, ((ARC_W_R(c, 30) & UINT64_C(18446744069414649855)) | UINT64_C(1374355456)));
  /* dcbf0: mov w11, #0x64 */
  ARC_W_W(c, 11, UINT64_C(100));
  /* dcbf4: nop  */
  /* nop: no architectural effect here */
  /* dcbf8: adr x10, #0x58470 */
  ARC_X_W(c, 10, (arc_image_bases[1] + UINT64_C(361584)));
  /* dcbfc: b #0xdcc24 */
  goto L_dcc24;
L_dcc00:;
  /* dcc00: mov x12, #0x3030303030303030 */
  ARC_X_W(c, 12, UINT64_C(3472328296227680304));
  /* dcc04: str x12, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 12));
  /* dcc08: strb w12, [x0, #8] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 12));
L_dcc0c:;
  /* dcc0c: add x15, x15, #1 */
  ARC_X_W(c, 15, (ARC_X_R(c, 15) + UINT64_C(1)));
  /* dcc10: add x0, x0, #9 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(9)));
  /* dcc14: add x13, x13, #1 */
  ARC_X_W(c, 13, (ARC_X_R(c, 13) + UINT64_C(1)));
  /* dcc18: cmp w15, w14 */
  (void)arc_sub32(c, ARC_W_R(c, 15), ARC_W_R(c, 14));
  /* dcc1c: add x9, x9, #9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(9)));
  /* dcc20: b.hs #0xdcd34 */
  if (ARC_COND(c, 2)) goto L_dcd34;
L_dcc24:;
  /* dcc24: nop  */
  /* nop: no architectural effect here */
  /* dcc28: adr x12, #0x5fe38 */
  ARC_X_W(c, 12, (arc_image_bases[1] + UINT64_C(392760)));
  /* dcc2c: madd x19, x15, x21, x12 */
  ARC_X_W(c, 19, ((uint64_t)(ARC_X_R(c, 12)) + ((uint64_t)(ARC_X_R(c, 15)) * (uint64_t)(ARC_X_R(c, 21)))));
  /* dcc30: ldp x20, x22, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 22, arc_ld64(_pa + 8));
  }
  /* dcc34: ldr x19, [x19, #0x10] */
  ARC_X_W(c, 19, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* dcc38: mul x12, x19, x17 */
  ARC_X_W(c, 12, ((uint64_t)(ARC_X_R(c, 19)) * (uint64_t)(ARC_X_R(c, 17))));
  /* dcc3c: umulh x20, x20, x17 */
  ARC_X_W(c, 20, arc_umulh(ARC_X_R(c, 20), ARC_X_R(c, 17)));
  /* dcc40: umulh x27, x22, x17 */
  ARC_X_W(c, 27, arc_umulh(ARC_X_R(c, 22), ARC_X_R(c, 17)));
  /* dcc44: mul x22, x22, x17 */
  ARC_X_W(c, 22, ((uint64_t)(ARC_X_R(c, 22)) * (uint64_t)(ARC_X_R(c, 17))));
  /* dcc48: umulh x19, x19, x17 */
  ARC_X_W(c, 19, arc_umulh(ARC_X_R(c, 19), ARC_X_R(c, 17)));
  /* dcc4c: cmn x22, x20 */
  (void)arc_add64(c, ARC_X_R(c, 22), ARC_X_R(c, 20), 0);
  /* dcc50: adc x20, x12, x27 */
  ARC_X_W(c, 20, ((uint64_t)(ARC_X_R(c, 12)) + (uint64_t)(ARC_X_R(c, 27)) + (c)->cf));
  /* dcc54: cmp x20, x12 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 12));
  /* dcc58: lsr x20, x20, x16 */
  ARC_X_W(c, 20, ((uint64_t)(ARC_X_R(c, 20)) >> ((ARC_X_R(c, 16)) & 63)));
  /* dcc5c: cinc x12, x19, lo */
  ARC_X_W(c, 12, (ARC_COND(c, 3) ? (ARC_X_R(c, 19)) + 1 : (ARC_X_R(c, 19))));
  /* dcc60: lsr x19, x12, x16 */
  ARC_X_W(c, 19, ((uint64_t)(ARC_X_R(c, 12)) >> ((ARC_X_R(c, 16)) & 63)));
  /* dcc64: lsl x12, x12, #1 */
  ARC_X_W(c, 12, ((uint64_t)(ARC_X_R(c, 12)) << ((UINT64_C(1)) & 63)));
  /* dcc68: lsl x12, x12, x25 */
  ARC_X_W(c, 12, ((uint64_t)(ARC_X_R(c, 12)) << ((ARC_X_R(c, 25)) & 63)));
  /* dcc6c: umulh x27, x19, x5 */
  ARC_X_W(c, 27, arc_umulh(ARC_X_R(c, 19), ARC_X_R(c, 5)));
  /* dcc70: orr x12, x12, x20 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) | ARC_X_R(c, 20)));
  /* dcc74: mul x22, x19, x5 */
  ARC_X_W(c, 22, ((uint64_t)(ARC_X_R(c, 19)) * (uint64_t)(ARC_X_R(c, 5))));
  /* dcc78: umulh x26, x12, x5 */
  ARC_X_W(c, 26, arc_umulh(ARC_X_R(c, 12), ARC_X_R(c, 5)));
  /* dcc7c: mul x6, x12, x4 */
  ARC_X_W(c, 6, ((uint64_t)(ARC_X_R(c, 12)) * (uint64_t)(ARC_X_R(c, 4))));
  /* dcc80: umulh x12, x12, x4 */
  ARC_X_W(c, 12, arc_umulh(ARC_X_R(c, 12), ARC_X_R(c, 4)));
  /* dcc84: madd x19, x19, x4, x27 */
  ARC_X_W(c, 19, ((uint64_t)(ARC_X_R(c, 27)) + ((uint64_t)(ARC_X_R(c, 19)) * (uint64_t)(ARC_X_R(c, 4)))));
  /* dcc88: adds x27, x26, x22 */
  ARC_X_W(c, 27, arc_add64(c, ARC_X_R(c, 26), ARC_X_R(c, 22), 0));
  /* dcc8c: cmn x6, x27 */
  (void)arc_add64(c, ARC_X_R(c, 6), ARC_X_R(c, 27), 0);
  /* dcc90: cset w6, hs */
  ARC_W_W(c, 6, (ARC_COND(c, 2) ? 1 : 0));
  /* dcc94: cmn x26, x22 */
  (void)arc_add64(c, ARC_X_R(c, 26), ARC_X_R(c, 22), 0);
  /* dcc98: add x12, x19, x12 */
  ARC_X_W(c, 12, (ARC_X_R(c, 19) + ARC_X_R(c, 12)));
  /* dcc9c: adc x12, x12, x6 */
  ARC_X_W(c, 12, ((uint64_t)(ARC_X_R(c, 12)) + (uint64_t)(ARC_X_R(c, 6)) + (c)->cf));
  /* dcca0: cmp x13, x3 */
  (void)arc_sub64(c, ARC_X_R(c, 13), ARC_X_R(c, 3));
  /* dcca4: lsr x12, x12, #0x1d */
  ARC_X_W(c, 12, ((uint64_t)(ARC_X_R(c, 12)) >> ((UINT64_C(29)) & 63)));
  /* dcca8: madd w20, w12, w7, w20 */
  ARC_W_W(c, 20, ((uint32_t)(ARC_W_R(c, 20)) + ((uint32_t)(ARC_W_R(c, 12)) * (uint32_t)(ARC_W_R(c, 7)))));
  /* dccac: b.eq #0xdcd4c */
  if (ARC_COND(c, 0)) goto L_dcd4c;
  /* dccb0: sub x12, x1, x0 */
  ARC_X_W(c, 12, (ARC_X_R(c, 1) - ARC_X_R(c, 0)));
  /* dccb4: cmp x12, #9 */
  (void)arc_sub64(c, ARC_X_R(c, 12), UINT64_C(9));
  /* dccb8: b.lt #0xdcd2c */
  if (ARC_COND(c, 11)) goto L_dcd2c;
  /* dccbc: cbz w20, #0xdcc00 */
  if ((ARC_W_R(c, 20)) == 0) goto L_dcc00;
  /* dccc0: mov w12, #0x1759 */
  ARC_W_W(c, 12, UINT64_C(5977));
  /* dccc4: mov w19, #0x3b89 */
  ARC_W_W(c, 19, UINT64_C(15241));
  /* dccc8: movk w12, #0xd1b7, lsl #16 */
  ARC_W_W(c, 12, ((ARC_W_R(c, 12) & UINT64_C(18446744069414649855)) | UINT64_C(3518431232)));
  /* dcccc: movk w19, #0x55e6, lsl #16 */
  ARC_W_W(c, 19, ((ARC_W_R(c, 19) & UINT64_C(18446744069414649855)) | UINT64_C(1441136640)));
  /* dccd0: umull x12, w20, w12 */
  ARC_X_W(c, 12, (((uint64_t)(uint32_t)(ARC_W_R(c, 20))) * ((uint64_t)(uint32_t)(ARC_W_R(c, 12)))));
  /* dccd4: umull x19, w20, w19 */
  ARC_X_W(c, 19, (((uint64_t)(uint32_t)(ARC_W_R(c, 20))) * ((uint64_t)(uint32_t)(ARC_W_R(c, 19)))));
  /* dccd8: lsr x12, x12, #0x2d */
  ARC_X_W(c, 12, ((uint64_t)(ARC_X_R(c, 12)) >> ((UINT64_C(45)) & 63)));
  /* dccdc: lsr x19, x19, #0x39 */
  ARC_X_W(c, 19, ((uint64_t)(ARC_X_R(c, 19)) >> ((UINT64_C(57)) & 63)));
  /* dcce0: madd w6, w12, w28, w20 */
  ARC_W_W(c, 6, ((uint32_t)(ARC_W_R(c, 20)) + ((uint32_t)(ARC_W_R(c, 12)) * (uint32_t)(ARC_W_R(c, 28)))));
  /* dcce4: madd w12, w19, w28, w12 */
  ARC_W_W(c, 12, ((uint32_t)(ARC_W_R(c, 12)) + ((uint32_t)(ARC_W_R(c, 19)) * (uint32_t)(ARC_W_R(c, 28)))));
  /* dcce8: umull x20, w6, w30 */
  ARC_X_W(c, 20, (((uint64_t)(uint32_t)(ARC_W_R(c, 6))) * ((uint64_t)(uint32_t)(ARC_W_R(c, 30)))));
  /* dccec: umull x22, w12, w30 */
  ARC_X_W(c, 22, (((uint64_t)(uint32_t)(ARC_W_R(c, 12))) * ((uint64_t)(uint32_t)(ARC_W_R(c, 30)))));
  /* dccf0: lsr x20, x20, #0x25 */
  ARC_X_W(c, 20, ((uint64_t)(ARC_X_R(c, 20)) >> ((UINT64_C(37)) & 63)));
  /* dccf4: lsr x22, x22, #0x25 */
  ARC_X_W(c, 22, ((uint64_t)(ARC_X_R(c, 22)) >> ((UINT64_C(37)) & 63)));
  /* dccf8: msub w6, w20, w11, w6 */
  ARC_W_W(c, 6, ((uint32_t)(ARC_W_R(c, 6)) - ((uint32_t)(ARC_W_R(c, 20)) * (uint32_t)(ARC_W_R(c, 11)))));
  /* dccfc: msub w12, w22, w11, w12 */
  ARC_W_W(c, 12, ((uint32_t)(ARC_W_R(c, 12)) - ((uint32_t)(ARC_W_R(c, 22)) * (uint32_t)(ARC_W_R(c, 11)))));
  /* dcd00: ldrh w6, [x10, w6, uxtw #1] */
  ARC_W_W(c, 6, arc_ld16((ARC_X_R(c, 10) + ((uint64_t)(((uint64_t)(uint32_t)(ARC_W_R(c, 6)))) << 1))));
  /* dcd04: sturh w6, [x0, #7] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(7)), ARC_W_R(c, 6));
  /* dcd08: ldrh w6, [x10, x20, lsl #1] */
  ARC_W_W(c, 6, arc_ld16((ARC_X_R(c, 10) + ((uint64_t)(ARC_X_R(c, 20)) << 1))));
  /* dcd0c: sturh w6, [x0, #5] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(5)), ARC_W_R(c, 6));
  /* dcd10: add w6, w19, #0x30 */
  ARC_W_W(c, 6, (ARC_W_R(c, 19) + UINT64_C(48)));
  /* dcd14: ldrh w12, [x10, w12, uxtw #1] */
  ARC_W_W(c, 12, arc_ld16((ARC_X_R(c, 10) + ((uint64_t)(((uint64_t)(uint32_t)(ARC_W_R(c, 12)))) << 1))));
  /* dcd18: sturh w12, [x0, #3] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(3)), ARC_W_R(c, 12));
  /* dcd1c: ldrh w12, [x10, x22, lsl #1] */
  ARC_W_W(c, 12, arc_ld16((ARC_X_R(c, 10) + ((uint64_t)(ARC_X_R(c, 22)) << 1))));
  /* dcd20: strb w6, [x0] */
  arc_st8(ARC_X_R(c, 0), ARC_W_R(c, 6));
  /* dcd24: sturh w12, [x0, #1] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(1)), ARC_W_R(c, 12));
  /* dcd28: b #0xdcc0c */
  goto L_dcc0c;
L_dcd2c:;
  /* dcd2c: mov x0, x1 */
  ARC_X_W(c, 0, ARC_X_R(c, 1));
  /* dcd30: b #0xdcf10 */
  goto L_dcf10;
L_dcd34:;
  /* dcd34: add w8, w13, w13, lsl #3 */
  ARC_W_W(c, 8, (ARC_W_R(c, 13) + ((uint32_t)(ARC_W_R(c, 13)) << 3)));
  /* dcd38: sub w19, w2, w8 */
  ARC_W_W(c, 19, (ARC_W_R(c, 2) - ARC_W_R(c, 8)));
  /* dcd3c: sub x8, x1, x0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 1) - ARC_X_R(c, 0)));
  /* dcd40: cmp x8, x19 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 19));
  /* dcd44: b.ge #0xdcaac */
  if (ARC_COND(c, 10)) goto L_dcaac;
  /* dcd48: b #0xdcad0 */
  goto L_dcad0;
L_dcd4c:;
  /* dcd4c: add w8, w24, w24, lsl #3 */
  ARC_W_W(c, 8, (ARC_W_R(c, 24) + ((uint32_t)(ARC_W_R(c, 24)) << 3)));
  /* dcd50: sub w8, w2, w8 */
  ARC_W_W(c, 8, (ARC_W_R(c, 2) - ARC_W_R(c, 8)));
  /* dcd54: subs w11, w8, #9 */
  ARC_W_W(c, 11, arc_sub32(c, ARC_W_R(c, 8), UINT64_C(9)));
  /* dcd58: b.ne #0xdcd64 */
  if (ARC_COND(c, 1)) goto L_dcd64;
  /* dcd5c: ldr x3, [sp, #0x10] */
  ARC_X_W(c, 3, arc_ld64(((c)->sp + INT64_C(16))));
  /* dcd60: b #0xdcdcc */
  goto L_dcdcc;
L_dcd64:;
  /* dcd64: mov w12, #0xcccd */
  ARC_W_W(c, 12, UINT64_C(52429));
  /* dcd68: ldr x3, [sp, #0x10] */
  ARC_X_W(c, 3, arc_ld64(((c)->sp + INT64_C(16))));
  /* dcd6c: movk w12, #0xcccc, lsl #16 */
  ARC_W_W(c, 12, ((ARC_W_R(c, 12) & UINT64_C(18446744069414649855)) | UINT64_C(3435921408)));
L_dcd70:;
  /* dcd70: umull x14, w20, w12 */
  ARC_X_W(c, 14, (((uint64_t)(uint32_t)(ARC_W_R(c, 20))) * ((uint64_t)(uint32_t)(ARC_W_R(c, 12)))));
  /* dcd74: mov w13, w20 */
  ARC_W_W(c, 13, ARC_W_R(c, 20));
  /* dcd78: adds w11, w11, #1 */
  ARC_W_W(c, 11, arc_add32(c, ARC_W_R(c, 11), UINT64_C(1), 0));
  /* dcd7c: lsr x20, x14, #0x23 */
  ARC_X_W(c, 20, ((uint64_t)(ARC_X_R(c, 14)) >> ((UINT64_C(35)) & 63)));
  /* dcd80: b.lo #0xdcd70 */
  if (ARC_COND(c, 3)) goto L_dcd70;
  /* dcd84: mov w11, #0xa */
  ARC_W_W(c, 11, UINT64_C(10));
  /* dcd88: msub w11, w20, w11, w13 */
  ARC_W_W(c, 11, ((uint32_t)(ARC_W_R(c, 13)) - ((uint32_t)(ARC_W_R(c, 20)) * (uint32_t)(ARC_W_R(c, 11)))));
  /* dcd8c: cmp w11, #5 */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(5));
  /* dcd90: b.ne #0xdcdcc */
  if (ARC_COND(c, 1)) goto L_dcdcc;
  /* dcd94: mvn w11, w2 */
  ARC_W_W(c, 11, (~(uint32_t)(ARC_W_R(c, 2))));
  /* dcd98: sub w11, w11, w23 */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) - ARC_W_R(c, 23)));
  /* dcd9c: cmp w11, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(1));
  /* dcda0: b.lt #0xdcef4 */
  if (ARC_COND(c, 11)) goto L_dcef4;
  /* dcda4: cmp w11, #0x3b */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(59));
  /* dcda8: mov w13, #1 */
  ARC_W_W(c, 13, UINT64_C(1));
  /* dcdac: b.hi #0xdcdd4 */
  if (ARC_COND(c, 8)) goto L_dcdd4;
  /* dcdb0: mov x12, #-1 */
  ARC_X_W(c, 12, UINT64_C(18446744073709551615));
  /* dcdb4: lsl x11, x12, x11 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 12)) << ((ARC_X_R(c, 11)) & 63)));
  /* dcdb8: ldur x12, [x29, #-8] */
  ARC_X_W(c, 12, arc_ld64((ARC_X_R(c, 29) + INT64_C(-8))));
  /* dcdbc: bics xzr, x12, x11 */
  { uint64_t _r = (uint64_t)(ARC_X_R(c, 12) & (~ARC_X_R(c, 11)));
    arc_flags_logical64(c, _r);
    ARC_X_W(c, 31, _r); }
  /* dcdc0: cinc w13, w13, eq */
  ARC_W_W(c, 13, (ARC_COND(c, 0) ? (ARC_W_R(c, 13)) + 1 : (ARC_W_R(c, 13))));
  /* dcdc4: cbnz w8, #0xdcdd8 */
  if ((ARC_W_R(c, 8)) != 0) goto L_dcdd8;
  /* dcdc8: b #0xdce6c */
  goto L_dce6c;
L_dcdcc:;
  /* dcdcc: cmp w11, #5 */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(5));
  /* dcdd0: cset w13, hi */
  ARC_W_W(c, 13, (ARC_COND(c, 8) ? 1 : 0));
L_dcdd4:;
  /* dcdd4: cbz w8, #0xdce6c */
  if ((ARC_W_R(c, 8)) == 0) goto L_dce6c;
L_dcdd8:;
  /* dcdd8: sub x11, x1, x0 */
  ARC_X_W(c, 11, (ARC_X_R(c, 1) - ARC_X_R(c, 0)));
  /* dcddc: cmp x11, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 8));
  /* dcde0: b.lt #0xdcad0 */
  if (ARC_COND(c, 11)) goto L_dcad0;
  /* dcde4: subs w12, w8, #1 */
  ARC_W_W(c, 12, arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1)));
  /* dcde8: b.eq #0xdce34 */
  if (ARC_COND(c, 0)) goto L_dce34;
  /* dcdec: ldp x15, x14, [sp] */
  { const uint64_t _pa = (c)->sp;
    ARC_X_W(c, 15, arc_ld64(_pa));
    ARC_X_W(c, 14, arc_ld64(_pa + 8));
  }
  /* dcdf0: mov x11, xzr */
  ARC_X_W(c, 11, ARC_X_R(c, 31));
  /* dcdf4: mov w16, #0x64 */
  ARC_W_W(c, 16, UINT64_C(100));
  /* dcdf8: sub x14, x15, x14 */
  ARC_X_W(c, 14, (ARC_X_R(c, 15) - ARC_X_R(c, 14)));
  /* dcdfc: mov w15, #0x851f */
  ARC_W_W(c, 15, UINT64_C(34079));
  /* dce00: sub x14, x14, #2 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) - UINT64_C(2)));
  /* dce04: movk w15, #0x51eb, lsl #16 */
  ARC_W_W(c, 15, ((ARC_W_R(c, 15) & UINT64_C(18446744069414649855)) | UINT64_C(1374355456)));
L_dce08:;
  /* dce08: umull x2, w20, w15 */
  ARC_X_W(c, 2, (((uint64_t)(uint32_t)(ARC_W_R(c, 20))) * ((uint64_t)(uint32_t)(ARC_W_R(c, 15)))));
  /* dce0c: mov w17, w20 */
  ARC_W_W(c, 17, ARC_W_R(c, 20));
  /* dce10: add x11, x11, #2 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) + UINT64_C(2)));
  /* dce14: cmp x11, x12 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 12));
  /* dce18: lsr x20, x2, #0x25 */
  ARC_X_W(c, 20, ((uint64_t)(ARC_X_R(c, 2)) >> ((UINT64_C(37)) & 63)));
  /* dce1c: msub w17, w20, w16, w17 */
  ARC_W_W(c, 17, ((uint32_t)(ARC_W_R(c, 17)) - ((uint32_t)(ARC_W_R(c, 20)) * (uint32_t)(ARC_W_R(c, 16)))));
  /* dce20: ldrh w17, [x10, w17, uxtw #1] */
  ARC_W_W(c, 17, arc_ld16((ARC_X_R(c, 10) + ((uint64_t)(((uint64_t)(uint32_t)(ARC_W_R(c, 17)))) << 1))));
  /* dce24: strh w17, [x0, x14] */
  arc_st16((ARC_X_R(c, 0) + ARC_X_R(c, 14)), ARC_W_R(c, 17));
  /* dce28: sub x14, x14, #2 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) - UINT64_C(2)));
  /* dce2c: b.lo #0xdce08 */
  if (ARC_COND(c, 3)) goto L_dce08;
  /* dce30: b #0xdce38 */
  goto L_dce38;
L_dce34:;
  /* dce34: mov w11, wzr */
  ARC_W_W(c, 11, ARC_W_R(c, 31));
L_dce38:;
  /* dce38: cmp w11, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 11), ARC_W_R(c, 8));
  /* dce3c: b.hs #0xdce68 */
  if (ARC_COND(c, 2)) goto L_dce68;
  /* dce40: mov w10, #0xcccd */
  ARC_W_W(c, 10, UINT64_C(52429));
  /* dce44: mov w12, #0xa */
  ARC_W_W(c, 12, UINT64_C(10));
  /* dce48: mvn w11, w11 */
  ARC_W_W(c, 11, (~(uint32_t)(ARC_W_R(c, 11))));
  /* dce4c: movk w10, #0xcccc, lsl #16 */
  ARC_W_W(c, 10, ((ARC_W_R(c, 10) & UINT64_C(18446744069414649855)) | UINT64_C(3435921408)));
  /* dce50: add w11, w8, w11 */
  ARC_W_W(c, 11, (ARC_W_R(c, 8) + ARC_W_R(c, 11)));
  /* dce54: umull x10, w20, w10 */
  ARC_X_W(c, 10, (((uint64_t)(uint32_t)(ARC_W_R(c, 20))) * ((uint64_t)(uint32_t)(ARC_W_R(c, 10)))));
  /* dce58: lsr x10, x10, #0x23 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 10)) >> ((UINT64_C(35)) & 63)));
  /* dce5c: msub w10, w10, w12, w20 */
  ARC_W_W(c, 10, ((uint32_t)(ARC_W_R(c, 20)) - ((uint32_t)(ARC_W_R(c, 10)) * (uint32_t)(ARC_W_R(c, 12)))));
  /* dce60: orr w10, w10, #0x30 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) | UINT64_C(48)));
  /* dce64: strb w10, [x0, w11, uxtw] */
  arc_st8((ARC_X_R(c, 0) + ((uint64_t)(uint32_t)(ARC_W_R(c, 11)))), ARC_W_R(c, 10));
L_dce68:;
  /* dce68: add x0, x0, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
L_dce6c:;
  /* dce6c: cbz w13, #0xdcf0c */
  if ((ARC_W_R(c, 13)) == 0) goto L_dcf0c;
  /* dce70: cmp x0, x3 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 3));
  /* dce74: b.eq #0xdced4 */
  if (ARC_COND(c, 0)) goto L_dced4;
  /* dce78: mov w10, #0x30 */
  ARC_W_W(c, 10, UINT64_C(48));
  /* dce7c: mov x8, x1 */
  ARC_X_W(c, 8, ARC_X_R(c, 1));
  /* dce80: b #0xdce9c */
  goto L_dce9c;
L_dce84:;
  /* dce84: mov w13, #1 */
  ARC_W_W(c, 13, UINT64_C(1));
  /* dce88: strb w10, [x9] */
  arc_st8(ARC_X_R(c, 9), ARC_W_R(c, 10));
L_dce8c:;
  /* dce8c: sub x11, x9, #1 */
  ARC_X_W(c, 11, (ARC_X_R(c, 9) - UINT64_C(1)));
  /* dce90: cmp x9, x3 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 3));
  /* dce94: mov x9, x11 */
  ARC_X_W(c, 9, ARC_X_R(c, 11));
  /* dce98: b.eq #0xdceb8 */
  if (ARC_COND(c, 0)) goto L_dceb8;
L_dce9c:;
  /* dce9c: ldrb w11, [x9] */
  ARC_W_W(c, 11, arc_ld8(ARC_X_R(c, 9)));
  /* dcea0: cmp w11, #0x39 */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(57));
  /* dcea4: b.eq #0xdce84 */
  if (ARC_COND(c, 0)) goto L_dce84;
  /* dcea8: cmp w11, #0x2e */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(46));
  /* dceac: b.ne #0xdcf00 */
  if (ARC_COND(c, 1)) goto L_dcf00;
  /* dceb0: mov x8, x9 */
  ARC_X_W(c, 8, ARC_X_R(c, 9));
  /* dceb4: b #0xdce8c */
  goto L_dce8c;
L_dceb8:;
  /* dceb8: mov w9, #0x31 */
  ARC_W_W(c, 9, UINT64_C(49));
  /* dcebc: cmp x8, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 1));
  /* dcec0: strb w9, [x11, #1] */
  arc_st8((ARC_X_R(c, 11) + INT64_C(1)), ARC_W_R(c, 9));
  /* dcec4: b.eq #0xdcedc */
  if (ARC_COND(c, 0)) goto L_dcedc;
  /* dcec8: mov w9, #0x2e30 */
  ARC_W_W(c, 9, UINT64_C(11824));
  /* dcecc: strh w9, [x8] */
  arc_st16(ARC_X_R(c, 8), ARC_W_R(c, 9));
  /* dced0: b #0xdcedc */
  goto L_dcedc;
L_dced4:;
  /* dced4: mov w8, #0x31 */
  ARC_W_W(c, 8, UINT64_C(49));
  /* dced8: strb w8, [x0] */
  arc_st8(ARC_X_R(c, 0), ARC_W_R(c, 8));
L_dcedc:;
  /* dcedc: cmp x0, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 1));
  /* dcee0: b.eq #0xdcad0 */
  if (ARC_COND(c, 0)) goto L_dcad0;
  /* dcee4: mov w9, #0x30 */
  ARC_W_W(c, 9, UINT64_C(48));
  /* dcee8: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* dceec: strb w9, [x0], #1 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(1));
    arc_st8(_a, ARC_W_R(c, 9));
  }
  /* dcef0: b #0xdcf10 */
  goto L_dcf10;
L_dcef4:;
  /* dcef4: mov w13, #2 */
  ARC_W_W(c, 13, UINT64_C(2));
  /* dcef8: cbnz w8, #0xdcdd8 */
  if ((ARC_W_R(c, 8)) != 0) goto L_dcdd8;
  /* dcefc: b #0xdce6c */
  goto L_dce6c;
L_dcf00:;
  /* dcf00: cmp w13, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 13), UINT64_C(1));
  /* dcf04: b.eq #0xdcf38 */
  if (ARC_COND(c, 0)) goto L_dcf38;
  /* dcf08: tbnz w11, #0, #0xdcf38 */
  if (((ARC_W_R(c, 11)) >> 0 & 1) != 0) goto L_dcf38;
L_dcf0c:;
  /* dcf0c: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
L_dcf10:;
  /* dcf10: mov x1, x8 */
  ARC_X_W(c, 1, ARC_X_R(c, 8));
  /* dcf14: ldp x20, x19, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* dcf18: ldp x22, x21, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* dcf1c: ldp x24, x23, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* dcf20: ldp x26, x25, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* dcf24: ldp x28, x27, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* dcf28: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* dcf2c: add sp, sp, #0x80 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(128)));
  /* dcf30: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* dcf34: ret  */
  return;
L_dcf38:;
  /* dcf38: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* dcf3c: add w10, w11, #1 */
  ARC_W_W(c, 10, (ARC_W_R(c, 11) + UINT64_C(1)));
  /* dcf40: strb w10, [x9] */
  arc_st8(ARC_X_R(c, 9), ARC_W_R(c, 10));
  /* dcf44: b #0xdcf10 */
  goto L_dcf10;
}

void fn1_e1b34(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038852404));
  /* e1b34: bti c */
  /* bti: no architectural effect here */
  /* e1b38: ldrb w8, [x3] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 3)));
  /* e1b3c: ldr x9, [x3, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 3) + INT64_C(8))));
  /* e1b40: lsr x10, x8, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* e1b44: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* e1b48: csel x9, x10, x9, eq */
  ARC_X_W(c, 9, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* e1b4c: subs x9, x9, x4 */
  ARC_X_W(c, 9, arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 4)));
  /* e1b50: b.lo #0xe1b74 */
  if (ARC_COND(c, 3)) goto L_e1b74;
  /* e1b54: ldr x10, [x3, #0x10] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 3) + INT64_C(16))));
  /* e1b58: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* e1b5c: csinc x10, x10, x3, ne */
  ARC_X_W(c, 10, (ARC_COND(c, 1) ? (ARC_X_R(c, 10)) : ((ARC_X_R(c, 3)) + 1)));
  /* e1b60: cmp x9, x5 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 5));
  /* e1b64: csel x8, x9, x5, lo */
  ARC_X_W(c, 8, (ARC_COND(c, 3) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 5)));
  /* e1b68: add x3, x10, x4 */
  ARC_X_W(c, 3, (ARC_X_R(c, 10) + ARC_X_R(c, 4)));
  /* e1b6c: mov x4, x8 */
  ARC_X_W(c, 4, ARC_X_R(c, 8));
  /* e1b70: b #0x142cc8 */
  fn1_142cc8(c); return;
L_e1b74:;
  /* e1b74: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e1b78: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e1b7c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* e1b80: bl #0xda020 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(924548));
  fn1_da020(c);
}

void fn1_e4558(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038863192));
  /* e4558: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e455c: sub sp, sp, #0x80 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(128)));
  /* e4560: stp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e4564: str x25, [sp, #0x40] */
  arc_st64(((c)->sp + INT64_C(64)), ARC_X_R(c, 25));
  /* e4568: stp x24, x23, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* e456c: stp x22, x21, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* e4570: stp x20, x19, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* e4574: add x29, sp, #0x30 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(48)));
  /* e4578: mov w8, #0xa */
  ARC_W_W(c, 8, UINT64_C(10));
  /* e457c: mov w23, #0x7473 */
  ARC_W_W(c, 23, UINT64_C(29811));
  /* e4580: ldr x9, [x0, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* e4584: strb w8, [sp] */
  arc_st8((c)->sp, ARC_W_R(c, 8));
  /* e4588: ldrb w8, [x0] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 0)));
  /* e458c: movk w23, #0x756f, lsl #16 */
  ARC_W_W(c, 23, ((ARC_W_R(c, 23) & UINT64_C(18446744069414649855)) | UINT64_C(1970208768)));
  /* e4590: mov w24, #0x6c */
  ARC_W_W(c, 24, UINT64_C(108));
  /* e4594: mov w21, w2 */
  ARC_W_W(c, 21, ARC_W_R(c, 2));
  /* e4598: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* e459c: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* e45a0: stur w23, [sp, #1] */
  arc_st32(((c)->sp + INT64_C(1)), ARC_W_R(c, 23));
  /* e45a4: sturh w24, [sp, #5] */
  arc_st16(((c)->sp + INT64_C(5)), ARC_W_R(c, 24));
  /* e45a8: csinc x20, x9, x0, ne */
  ARC_X_W(c, 20, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 0)) + 1)));
  /* e45ac: str xzr, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 31));
  /* e45b0: bl #0x142a58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(935348));
  fn1_142a58(c);
  /* e45b4: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* e45b8: ldr w25, [x0] */
  ARC_W_W(c, 25, arc_ld32(ARC_X_R(c, 0)));
  /* e45bc: str wzr, [x0] */
  arc_st32(ARC_X_R(c, 0), ARC_W_R(c, 31));
  /* e45c0: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* e45c4: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* e45c8: mov w2, w21 */
  ARC_W_W(c, 2, ARC_W_R(c, 21));
  /* e45cc: bl #0x142e90 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(935376));
  fn1_142e90(c);
  /* e45d0: ldr w8, [x22] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 22)));
  /* e45d4: str w25, [x22] */
  arc_st32(ARC_X_R(c, 22), ARC_W_R(c, 25));
  /* e45d8: cmp w8, #0x22 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(34));
  /* e45dc: b.eq #0xe4624 */
  if (ARC_COND(c, 0)) goto L_e4624;
  /* e45e0: ldr x8, [x29, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(24))));
  /* e45e4: subs x8, x8, x20 */
  ARC_X_W(c, 8, arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 20)));
  /* e45e8: b.eq #0xe465c */
  if (ARC_COND(c, 0)) goto L_e465c;
  /* e45ec: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* e45f0: cbz x19, #0xe45f8 */
  if ((ARC_X_R(c, 19)) == 0) goto L_e45f8;
  /* e45f4: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
L_e45f8:;
  /* e45f8: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* e45fc: bl #0x142e00 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(935424));
  fn1_142e00(c);
  /* e4600: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* e4604: ldp x20, x19, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* e4608: ldr x25, [sp, #0x40] */
  ARC_X_W(c, 25, arc_ld64(((c)->sp + INT64_C(64))));
  /* e460c: ldp x22, x21, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* e4610: ldp x24, x23, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* e4614: ldp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e4618: add sp, sp, #0x80 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(128)));
  /* e461c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* e4620: ret  */
  return;
L_e4624:;
  /* e4624: mov w8, #0x26 */
  ARC_W_W(c, 8, UINT64_C(38));
  /* e4628: str xzr, [sp, #0x28] */
  arc_st64(((c)->sp + INT64_C(40)), ARC_X_R(c, 31));
  /* e462c: strb w8, [sp, #0x18] */
  arc_st8(((c)->sp + INT64_C(24)), ARC_W_R(c, 8));
  /* e4630: adrp x8, #0x51000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(331776)));
  /* e4634: add x8, x8, #0xa7d */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2685)));
  /* e4638: ldr x9, [x8] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 8)));
  /* e463c: ldur x8, [x8, #6] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(6))));
  /* e4640: stur w23, [sp, #0x19] */
  arc_st32(((c)->sp + INT64_C(25)), ARC_W_R(c, 23));
  /* e4644: strb w24, [sp, #0x1d] */
  arc_st8(((c)->sp + INT64_C(29)), ARC_W_R(c, 24));
  /* e4648: stur x9, [sp, #0x1e] */
  arc_st64(((c)->sp + INT64_C(30)), ARC_X_R(c, 9));
  /* e464c: add x9, sp, #0x18 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(24)));
  /* e4650: stur x8, [sp, #0x24] */
  arc_st64(((c)->sp + INT64_C(36)), ARC_X_R(c, 8));
  /* e4654: orr x0, x9, #1 */
  ARC_X_W(c, 0, (ARC_X_R(c, 9) | UINT64_C(1)));
  /* e4658: bl #0xda038 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(935516));
  fn1_da038(c);
L_e465c:;
  /* e465c: mov w9, #0x7473 */
  ARC_W_W(c, 9, UINT64_C(29811));
  /* e4660: mov w8, #0x28 */
  ARC_W_W(c, 8, UINT64_C(40));
  /* e4664: str xzr, [sp, #0x28] */
  arc_st64(((c)->sp + INT64_C(40)), ARC_X_R(c, 31));
  /* e4668: movk w9, #0x756f, lsl #16 */
  ARC_W_W(c, 9, ((ARC_W_R(c, 9) & UINT64_C(18446744069414649855)) | UINT64_C(1970208768)));
  /* e466c: strb w8, [sp, #0x18] */
  arc_st8(((c)->sp + INT64_C(24)), ARC_W_R(c, 8));
  /* e4670: mov w8, #0x6c */
  ARC_W_W(c, 8, UINT64_C(108));
  /* e4674: stur w9, [sp, #0x19] */
  arc_st32(((c)->sp + INT64_C(25)), ARC_W_R(c, 9));
  /* e4678: adrp x9, #0x50000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(327680)));
  /* e467c: add x9, x9, #0x1dd */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(477)));
  /* e4680: ldr x10, [x9] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 9)));
  /* e4684: strb w8, [sp, #0x1d] */
  arc_st8(((c)->sp + INT64_C(29)), ARC_W_R(c, 8));
  /* e4688: ldur x8, [x9, #7] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(7))));
  /* e468c: add x9, sp, #0x18 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(24)));
  /* e4690: stur x10, [sp, #0x1e] */
  arc_st64(((c)->sp + INT64_C(30)), ARC_X_R(c, 10));
  /* e4694: stur x8, [sp, #0x25] */
  arc_st64(((c)->sp + INT64_C(37)), ARC_X_R(c, 8));
  /* e4698: orr x0, x9, #1 */
  ARC_X_W(c, 0, (ARC_X_R(c, 9) | UINT64_C(1)));
  /* e469c: bl #0xe78a0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(935584));
  fn1_e78a0(c);
  /* e46a0: b #0xe46a4 */
  goto L_e46a4;
L_e46a4:;
  /* e46a4: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* e46a8: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* e46ac: bl #0x142e00 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(935600));
  fn1_142e00(c);
  /* e46b0: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* e46b4: bl #0x142e00 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(935608));
  fn1_142e00(c);
  /* e46b8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* e46bc: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(935616));
  fn1_9cc20(c);
}

void fn1_e8d30(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038881584));
  /* e8d30: bti c */
  /* bti: no architectural effect here */
  /* e8d34: mov w1, #8 */
  ARC_W_W(c, 1, UINT64_C(8));
  /* e8d38: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_eae24(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038890020));
  /* eae24: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* eae28: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* eae2c: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* eae30: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* eae34: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* eae38: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(962108));
  fn1_142518(c);
  /* eae3c: cbnz w0, #0xeae68 */
  if ((ARC_W_R(c, 0)) != 0) goto L_eae68;
  /* eae40: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* eae44: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(962120));
  fn1_142560(c);
  /* eae48: add x0, x19, #0x28 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(40)));
  /* eae4c: bl #0x1430d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(962128));
  fn1_1430d0(c);
  /* eae50: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* eae54: bl #0x143220 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(962136));
  fn1_143220(c);
  /* eae58: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* eae5c: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* eae60: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* eae64: ret  */
  return;
L_eae68:;
  /* eae68: nop  */
  /* nop: no architectural effect here */
  /* eae6c: adr x1, #0x50f67 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(331623)));
  /* eae70: bl #0x142a40 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(962164));
  fn1_142a40(c);
  /* eae74: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(962168));
  fn1_a1454(c);
  /* eae78: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(962172));
  fn1_a1454(c);
  /* eae7c: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(962176));
  fn1_a1454(c);
  /* eae80: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(962180));
  fn1_a1454(c);
}

void fn1_ecec4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038898372));
  /* ecec4: bti c */
  /* bti: no architectural effect here */
  /* ecec8: ldr w8, [x0, #0x20] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 0) + INT64_C(32))));
  /* ececc: ldrb w9, [x0, #0x24] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(36))));
  /* eced0: orr w8, w8, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | UINT64_C(1)));
  /* eced4: str w8, [x0, #0x20] */
  arc_st32((ARC_X_R(c, 0) + INT64_C(32)), ARC_W_R(c, 8));
  /* eced8: tbnz w9, #0, #0xecee0 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) != 0) goto L_ecee0;
  /* ecedc: ret  */
  return;
L_ecee0:;
  /* ecee0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* ecee4: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* ecee8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* eceec: bl #0x1429b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(970480));
  fn1_1429b0(c);
}

void fn1_eec28(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038905896));
  /* eec28: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* eec2c: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* eec30: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* eec34: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* eec38: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* eec3c: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* eec40: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* eec44: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* eec48: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* eec4c: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* eec50: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* eec54: stur wzr, [x29, #-4] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-4)), ARC_W_R(c, 31));
  /* eec58: bl #0x1435f8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(978012));
  fn1_1435f8(c);
  /* eec5c: ldrb w8, [sp, #8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(8))));
  /* eec60: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* eec64: b.ne #0xeed2c */
  if (ARC_COND(c, 1)) goto L_eed2c;
  /* eec68: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* eec6c: nop  */
  /* nop: no architectural effect here */
  /* eec70: adr x22, #0x15dc40 */
  ARC_X_W(c, 22, (arc_image_bases[1] + UINT64_C(1432640)));
  /* eec74: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* eec78: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* eec7c: ldr x20, [x8, #0x30] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 8) + INT64_C(48))));
  /* eec80: cmp x20, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 22));
  /* eec84: str x20, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 20));
  /* eec88: b.eq #0xeec98 */
  if (ARC_COND(c, 0)) goto L_eec98;
  /* eec8c: add x1, x20, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* eec90: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* eec94: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(978072));
  fn1_db2e0(c);
L_eec98:;
  /* eec98: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* eec9c: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* eeca0: ldr x1, [x1, #0xb48] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(2888))));
  /* eeca4: bl #0x143748 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(978088));
  fn1_143748(c);
  /* eeca8: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* eecac: ldr x9, [x0] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 0)));
  /* eecb0: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* eecb4: add x3, x19, x8 */
  ARC_X_W(c, 3, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* eecb8: ldr x8, [x9, #0x40] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(64))));
  /* eecbc: ldr x1, [x3, #0x28] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 3) + INT64_C(40))));
  /* eecc0: sub x4, x29, #4 */
  ARC_X_W(c, 4, (ARC_X_R(c, 29) - UINT64_C(4)));
  /* eecc4: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* eecc8: mov x5, x21 */
  ARC_X_W(c, 5, ARC_X_R(c, 21));
  /* eeccc: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(978128));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* eecd0: cmp x20, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 22));
  /* eecd4: b.eq #0xeecf8 */
  if (ARC_COND(c, 0)) goto L_eecf8;
  /* eecd8: add x1, x20, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* eecdc: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* eece0: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(978148));
  fn1_bd950(c);
  /* eece4: cbnz x0, #0xeecf8 */
  if ((ARC_X_R(c, 0)) != 0) goto L_eecf8;
  /* eece8: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* eecec: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* eecf0: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* eecf4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(978168));
  arc_dispatch(c, ARC_X_R(c, 8));
L_eecf8:;
  /* eecf8: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* eecfc: ldur w10, [x29, #-4] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 29) + INT64_C(-4))));
  /* eed00: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* eed04: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* eed08: ldr x9, [x8, #0x28] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* eed0c: cmp x9, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(0));
  /* eed10: ldp w11, w9, [x8, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 8) + INT64_C(32));
    ARC_W_W(c, 11, arc_ld32(_pa));
    ARC_W_W(c, 9, arc_ld32(_pa + 4));
  }
  /* eed14: orr w10, w11, w10 */
  ARC_W_W(c, 10, (ARC_W_R(c, 11) | ARC_W_R(c, 10)));
  /* eed18: cset w11, eq */
  ARC_W_W(c, 11, (ARC_COND(c, 0) ? 1 : 0));
  /* eed1c: orr w10, w10, w11 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) | ARC_W_R(c, 11)));
  /* eed20: tst w10, w9 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 10) & ARC_W_R(c, 9)));
  /* eed24: str w10, [x8, #0x20] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(32)), ARC_W_R(c, 10));
  /* eed28: b.ne #0xeed48 */
  if (ARC_COND(c, 1)) goto L_eed48;
L_eed2c:;
  /* eed2c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* eed30: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* eed34: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* eed38: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* eed3c: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* eed40: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* eed44: ret  */
  return;
L_eed48:;
  /* eed48: nop  */
  /* nop: no architectural effect here */
  /* eed4c: adr x0, #0x50210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(328208)));
  /* eed50: bl #0xec720 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(978260));
  fn1_ec720(c);
  /* eed54: cmp x20, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 22));
  /* eed58: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* eed5c: b.eq #0xeed80 */
  if (ARC_COND(c, 0)) goto L_eed80;
  /* eed60: add x1, x20, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* eed64: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* eed68: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(978284));
  fn1_bd950(c);
  /* eed6c: cbnz x0, #0xeed80 */
  if ((ARC_X_R(c, 0)) != 0) goto L_eed80;
  /* eed70: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* eed74: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* eed78: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* eed7c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(978304));
  arc_dispatch(c, ARC_X_R(c, 8));
L_eed80:;
  /* eed80: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* eed84: bl #0x142548 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(978312));
  fn1_142548(c);
  /* eed88: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* eed8c: ldur w10, [x29, #-4] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 29) + INT64_C(-4))));
  /* eed90: ldur x9, [x8, #-0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* eed94: orr w10, w10, #1 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) | UINT64_C(1)));
  /* eed98: stur w10, [x29, #-4] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-4)), ARC_W_R(c, 10));
  /* eed9c: add x9, x19, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + ARC_X_R(c, 9)));
  /* eeda0: ldr w11, [x9, #0x20] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 9) + INT64_C(32))));
  /* eeda4: orr w11, w11, w10 */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) | ARC_W_R(c, 10)));
  /* eeda8: str w11, [x9, #0x20] */
  arc_st32((ARC_X_R(c, 9) + INT64_C(32)), ARC_W_R(c, 11));
  /* eedac: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* eedb0: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* eedb4: ldrb w8, [x8, #0x24] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 8) + INT64_C(36))));
  /* eedb8: tbnz w8, #0, #0xeedc4 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_eedc4;
  /* eedbc: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(978368));
  fn1_142980(c);
  /* eedc0: b #0xeecf8 */
  goto L_eecf8;
L_eedc4:;
  /* eedc4: bl #0x1429b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(978376));
  fn1_1429b0(c);
  /* eedc8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* eedcc: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(978384));
  fn1_142980(c);
  /* eedd0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* eedd4: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(978392));
  fn1_9cc20(c);
  /* eedd8: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(978396));
  fn1_a1454(c);
}

void fn1_f3858(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038925400));
  /* f3858: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* f385c: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* f3860: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* f3864: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* f3868: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f386c: add x0, x0, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(24)));
  /* f3870: bl #0x1433b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(997492));
  fn1_1433b8(c);
  /* f3874: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f3878: mov w1, #0xb0 */
  ARC_W_W(c, 1, UINT64_C(176));
  /* f387c: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* f3880: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* f3884: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* f3888: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_f565c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038933084));
  /* f565c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* f5660: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* f5664: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* f5668: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* f566c: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* f5670: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* f5674: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f5678: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* f567c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* f5680: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* f5684: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* f5688: stur wzr, [x29, #-4] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-4)), ARC_W_R(c, 31));
  /* f568c: bl #0x143670 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1005200));
  fn1_143670(c);
  /* f5690: ldrb w8, [sp, #8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(8))));
  /* f5694: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* f5698: b.ne #0xf5760 */
  if (ARC_COND(c, 1)) goto L_f5760;
  /* f569c: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f56a0: nop  */
  /* nop: no architectural effect here */
  /* f56a4: adr x22, #0x15dc40 */
  ARC_X_W(c, 22, (arc_image_bases[1] + UINT64_C(1432640)));
  /* f56a8: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f56ac: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f56b0: ldr x20, [x8, #0x30] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 8) + INT64_C(48))));
  /* f56b4: cmp x20, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 22));
  /* f56b8: str x20, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 20));
  /* f56bc: b.eq #0xf56cc */
  if (ARC_COND(c, 0)) goto L_f56cc;
  /* f56c0: add x1, x20, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* f56c4: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* f56c8: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1005260));
  fn1_db2e0(c);
L_f56cc:;
  /* f56cc: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* f56d0: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* f56d4: ldr x1, [x1, #0xb60] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(2912))));
  /* f56d8: bl #0x143748 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1005276));
  fn1_143748(c);
  /* f56dc: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f56e0: ldr x9, [x0] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 0)));
  /* f56e4: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f56e8: add x3, x19, x8 */
  ARC_X_W(c, 3, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f56ec: ldr x8, [x9, #0x40] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(64))));
  /* f56f0: ldr x1, [x3, #0x28] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 3) + INT64_C(40))));
  /* f56f4: sub x4, x29, #4 */
  ARC_X_W(c, 4, (ARC_X_R(c, 29) - UINT64_C(4)));
  /* f56f8: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* f56fc: mov x5, x21 */
  ARC_X_W(c, 5, ARC_X_R(c, 21));
  /* f5700: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1005316));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* f5704: cmp x20, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 22));
  /* f5708: b.eq #0xf572c */
  if (ARC_COND(c, 0)) goto L_f572c;
  /* f570c: add x1, x20, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* f5710: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* f5714: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1005336));
  fn1_bd950(c);
  /* f5718: cbnz x0, #0xf572c */
  if ((ARC_X_R(c, 0)) != 0) goto L_f572c;
  /* f571c: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* f5720: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* f5724: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* f5728: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1005356));
  arc_dispatch(c, ARC_X_R(c, 8));
L_f572c:;
  /* f572c: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f5730: ldur w10, [x29, #-4] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 29) + INT64_C(-4))));
  /* f5734: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f5738: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f573c: ldr x9, [x8, #0x28] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* f5740: cmp x9, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(0));
  /* f5744: ldp w11, w9, [x8, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 8) + INT64_C(32));
    ARC_W_W(c, 11, arc_ld32(_pa));
    ARC_W_W(c, 9, arc_ld32(_pa + 4));
  }
  /* f5748: orr w10, w11, w10 */
  ARC_W_W(c, 10, (ARC_W_R(c, 11) | ARC_W_R(c, 10)));
  /* f574c: cset w11, eq */
  ARC_W_W(c, 11, (ARC_COND(c, 0) ? 1 : 0));
  /* f5750: orr w10, w10, w11 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) | ARC_W_R(c, 11)));
  /* f5754: tst w10, w9 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 10) & ARC_W_R(c, 9)));
  /* f5758: str w10, [x8, #0x20] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(32)), ARC_W_R(c, 10));
  /* f575c: b.ne #0xf577c */
  if (ARC_COND(c, 1)) goto L_f577c;
L_f5760:;
  /* f5760: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f5764: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* f5768: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* f576c: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* f5770: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* f5774: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* f5778: ret  */
  return;
L_f577c:;
  /* f577c: nop  */
  /* nop: no architectural effect here */
  /* f5780: adr x0, #0x50210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(328208)));
  /* f5784: bl #0xec720 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1005448));
  fn1_ec720(c);
  /* f5788: cmp x20, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 22));
  /* f578c: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* f5790: b.eq #0xf57b4 */
  if (ARC_COND(c, 0)) goto L_f57b4;
  /* f5794: add x1, x20, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* f5798: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* f579c: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1005472));
  fn1_bd950(c);
  /* f57a0: cbnz x0, #0xf57b4 */
  if ((ARC_X_R(c, 0)) != 0) goto L_f57b4;
  /* f57a4: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* f57a8: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* f57ac: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* f57b0: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1005492));
  arc_dispatch(c, ARC_X_R(c, 8));
L_f57b4:;
  /* f57b4: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* f57b8: bl #0x142548 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1005500));
  fn1_142548(c);
  /* f57bc: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f57c0: ldur w10, [x29, #-4] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 29) + INT64_C(-4))));
  /* f57c4: ldur x9, [x8, #-0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f57c8: orr w10, w10, #1 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) | UINT64_C(1)));
  /* f57cc: stur w10, [x29, #-4] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-4)), ARC_W_R(c, 10));
  /* f57d0: add x9, x19, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + ARC_X_R(c, 9)));
  /* f57d4: ldr w11, [x9, #0x20] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 9) + INT64_C(32))));
  /* f57d8: orr w11, w11, w10 */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) | ARC_W_R(c, 10)));
  /* f57dc: str w11, [x9, #0x20] */
  arc_st32((ARC_X_R(c, 9) + INT64_C(32)), ARC_W_R(c, 11));
  /* f57e0: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f57e4: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f57e8: ldrb w8, [x8, #0x24] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 8) + INT64_C(36))));
  /* f57ec: tbnz w8, #0, #0xf57f8 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_f57f8;
  /* f57f0: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1005556));
  fn1_142980(c);
  /* f57f4: b #0xf572c */
  goto L_f572c;
L_f57f8:;
  /* f57f8: bl #0x1429b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1005564));
  fn1_1429b0(c);
  /* f57fc: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f5800: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1005572));
  fn1_142980(c);
  /* f5804: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f5808: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1005580));
  fn1_9cc20(c);
  /* f580c: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1005584));
  fn1_a1454(c);
}

void fn1_faebc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038955708));
  /* faebc: bti c */
  /* bti: no architectural effect here */
  /* faec0: ldr x9, [x0, #0x58] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(88))));
  /* faec4: ldr x10, [x0, #0x30] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 0) + INT64_C(48))));
  /* faec8: mov x8, x0 */
  ARC_X_W(c, 8, ARC_X_R(c, 0));
  /* faecc: mov w0, w1 */
  ARC_W_W(c, 0, ARC_W_R(c, 1));
  /* faed0: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* faed4: b.hs #0xfaee0 */
  if (ARC_COND(c, 2)) goto L_faee0;
  /* faed8: mov x9, x10 */
  ARC_X_W(c, 9, ARC_X_R(c, 10));
  /* faedc: str x10, [x8, #0x58] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(88)), ARC_X_R(c, 10));
L_faee0:;
  /* faee0: ldp x11, x10, [x8, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 8) + INT64_C(16));
    ARC_X_W(c, 11, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* faee4: cmp x11, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 10));
  /* faee8: b.hs #0xfaf18 */
  if (ARC_COND(c, 2)) goto L_faf18;
  /* faeec: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* faef0: b.eq #0xfaf20 */
  if (ARC_COND(c, 0)) goto L_faf20;
  /* faef4: ldrb w11, [x8, #0x60] */
  ARC_W_W(c, 11, arc_ld8((ARC_X_R(c, 8) + INT64_C(96))));
  /* faef8: tbnz w11, #4, #0xfaf08 */
  if (((ARC_W_R(c, 11)) >> 4 & 1) != 0) goto L_faf08;
  /* faefc: ldurb w11, [x10, #-1] */
  ARC_W_W(c, 11, arc_ld8((ARC_X_R(c, 10) + INT64_C(-1))));
  /* faf00: cmp w11, w0, uxtb */
  (void)arc_sub32(c, ARC_W_R(c, 11), ((uint64_t)(uint8_t)(ARC_W_R(c, 0))));
  /* faf04: b.ne #0xfaf18 */
  if (ARC_COND(c, 1)) goto L_faf18;
L_faf08:;
  /* faf08: sub x11, x10, #1 */
  ARC_X_W(c, 11, (ARC_X_R(c, 10) - UINT64_C(1)));
  /* faf0c: stp x11, x9, [x8, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 8) + INT64_C(24));
    arc_st64(_pa, ARC_X_R(c, 11));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* faf10: sturb w0, [x10, #-1] */
  arc_st8((ARC_X_R(c, 10) + INT64_C(-1)), ARC_W_R(c, 0));
  /* faf14: ret  */
  return;
L_faf18:;
  /* faf18: mov w0, #-1 */
  ARC_W_W(c, 0, UINT64_C(18446744073709551615));
  /* faf1c: ret  */
  return;
L_faf20:;
  /* faf20: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* faf24: sub x10, x10, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) - UINT64_C(1)));
  /* faf28: stp x10, x9, [x8, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 8) + INT64_C(24));
    arc_st64(_pa, ARC_X_R(c, 10));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* faf2c: ret  */
  return;
}

void fn1_fe6f8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038970104));
  /* fe6f8: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* fe6fc: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* fe700: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* fe704: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* fe708: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* fe70c: nop  */
  /* nop: no architectural effect here */
  /* fe710: adr x9, #0x15dc40 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1432640)));
  /* fe714: ldr x8, [x8, #0xaa8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2728))));
  /* fe718: ldr x20, [x0, #8] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* fe71c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* fe720: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* fe724: cmp x20, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 9));
  /* fe728: str x8, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* fe72c: b.eq #0xfe750 */
  if (ARC_COND(c, 0)) goto L_fe750;
  /* fe730: add x1, x20, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* fe734: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* fe738: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1042236));
  fn1_bd950(c);
  /* fe73c: cbnz x0, #0xfe750 */
  if ((ARC_X_R(c, 0)) != 0) goto L_fe750;
  /* fe740: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* fe744: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* fe748: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* fe74c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1042256));
  arc_dispatch(c, ARC_X_R(c, 8));
L_fe750:;
  /* fe750: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* fe754: mov w1, #0x60 */
  ARC_W_W(c, 1, UINT64_C(96));
  /* fe758: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* fe75c: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* fe760: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* fe764: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_10a608(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039019016));
  /* 10a608: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 10a60c: sub sp, sp, #0xa0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(160)));
  /* 10a610: stp x29, x30, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 10a614: str x23, [sp, #0x70] */
  arc_st64(((c)->sp + INT64_C(112)), ARC_X_R(c, 23));
  /* 10a618: stp x22, x21, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 10a61c: stp x20, x19, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 10a620: add x29, sp, #0x60 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(96)));
  /* 10a624: ldr w9, [x2, #8] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 2) + INT64_C(8))));
  /* 10a628: mov w8, #0x25 */
  ARC_W_W(c, 8, UINT64_C(37));
  /* 10a62c: mov x22, x4 */
  ARC_X_W(c, 22, ARC_X_R(c, 4));
  /* 10a630: mov w19, w3 */
  ARC_W_W(c, 19, ARC_W_R(c, 3));
  /* 10a634: mov x20, x2 */
  ARC_X_W(c, 20, ARC_X_R(c, 2));
  /* 10a638: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* 10a63c: str x8, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 8));
  /* 10a640: add x8, x29, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 10a644: tbnz w9, #9, #0x10a650 */
  if (((ARC_W_R(c, 9)) >> 9 & 1) != 0) goto L_10a650;
  /* 10a648: orr x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) | UINT64_C(1)));
  /* 10a64c: b #0x10a65c */
  goto L_10a65c;
L_10a650:;
  /* 10a650: mov w10, #0x23 */
  ARC_W_W(c, 10, UINT64_C(35));
  /* 10a654: orr x8, x8, #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) | UINT64_C(2)));
  /* 10a658: strb w10, [x29, #0x19] */
  arc_st8((ARC_X_R(c, 29) + INT64_C(25)), ARC_W_R(c, 10));
L_10a65c:;
  /* 10a65c: mov w10, #0x4a */
  ARC_W_W(c, 10, UINT64_C(74));
  /* 10a660: mov w11, #0x6c */
  ARC_W_W(c, 11, UINT64_C(108));
  /* 10a664: and w10, w9, w10 */
  ARC_W_W(c, 10, (ARC_W_R(c, 9) & ARC_W_R(c, 10)));
  /* 10a668: strb w11, [x8] */
  arc_st8(ARC_X_R(c, 8), ARC_W_R(c, 11));
  /* 10a66c: cmp w10, #0x40 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(64));
  /* 10a670: b.eq #0x10a690 */
  if (ARC_COND(c, 0)) goto L_10a690;
  /* 10a674: cmp w10, #8 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(8));
  /* 10a678: b.ne #0x10a698 */
  if (ARC_COND(c, 1)) goto L_10a698;
  /* 10a67c: tst w9, #0x4000 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(16384)));
  /* 10a680: mov w9, #0x58 */
  ARC_W_W(c, 9, UINT64_C(88));
  /* 10a684: mov w10, #0x78 */
  ARC_W_W(c, 10, UINT64_C(120));
  /* 10a688: csel w9, w10, w9, eq */
  ARC_W_W(c, 9, (ARC_COND(c, 0) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 9)));
  /* 10a68c: b #0x10a69c */
  goto L_10a69c;
L_10a690:;
  /* 10a690: mov w9, #0x6f */
  ARC_W_W(c, 9, UINT64_C(111));
  /* 10a694: b #0x10a69c */
  goto L_10a69c;
L_10a698:;
  /* 10a698: mov w9, #0x75 */
  ARC_W_W(c, 9, UINT64_C(117));
L_10a69c:;
  /* 10a69c: strb w9, [x8, #1] */
  arc_st8((ARC_X_R(c, 8) + INT64_C(1)), ARC_W_R(c, 9));
  /* 10a6a0: nop  */
  /* nop: no architectural effect here */
  /* 10a6a4: adr x8, #0x15dc38 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 10a6a8: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 10a6ac: adrp x23, #0x15d000 */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1429504)));
  /* 10a6b0: tbz w8, #0, #0x10a7ac */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_10a7ac;
L_10a6b4:;
  /* 10a6b4: ldr x2, [x23, #0xc30] */
  ARC_X_W(c, 2, arc_ld64((ARC_X_R(c, 23) + INT64_C(3120))));
  /* 10a6b8: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 10a6bc: add x3, x29, #0x18 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 10a6c0: mov w1, #0x18 */
  ARC_W_W(c, 1, UINT64_C(24));
  /* 10a6c4: mov x4, x22 */
  ARC_X_W(c, 4, ARC_X_R(c, 22));
  /* 10a6c8: sub x22, x29, #0x18 */
  ARC_X_W(c, 22, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 10a6cc: bl #0x136860 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1091280));
  fn1_136860(c);
  /* 10a6d0: ldr w8, [x20, #8] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 20) + INT64_C(8))));
  /* 10a6d4: mov w9, #0xb0 */
  ARC_W_W(c, 9, UINT64_C(176));
  /* 10a6d8: add x22, x22, w0, sxtw */
  ARC_X_W(c, 22, (ARC_X_R(c, 22) + ((uint64_t)(int64_t)(int32_t)(ARC_W_R(c, 0)))));
  /* 10a6dc: and w8, w8, w9 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & ARC_W_R(c, 9)));
  /* 10a6e0: mov x23, x22 */
  ARC_X_W(c, 23, ARC_X_R(c, 22));
  /* 10a6e4: cmp w8, #0x20 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(32));
  /* 10a6e8: b.eq #0x10a744 */
  if (ARC_COND(c, 0)) goto L_10a744;
  /* 10a6ec: cmp w8, #0x10 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(16));
  /* 10a6f0: b.ne #0x10a740 */
  if (ARC_COND(c, 1)) goto L_10a740;
  /* 10a6f4: ldurb w8, [x29, #-0x18] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-24))));
  /* 10a6f8: cmp w8, #0x2d */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(45));
  /* 10a6fc: b.eq #0x10a708 */
  if (ARC_COND(c, 0)) goto L_10a708;
  /* 10a700: cmp w8, #0x2b */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(43));
  /* 10a704: b.ne #0x10a714 */
  if (ARC_COND(c, 1)) goto L_10a714;
L_10a708:;
  /* 10a708: sub x8, x29, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 10a70c: orr x23, x8, #1 */
  ARC_X_W(c, 23, (ARC_X_R(c, 8) | UINT64_C(1)));
  /* 10a710: b #0x10a744 */
  goto L_10a744;
L_10a714:;
  /* 10a714: cmp w0, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(2));
  /* 10a718: b.lt #0x10a740 */
  if (ARC_COND(c, 11)) goto L_10a740;
  /* 10a71c: cmp w8, #0x30 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(48));
  /* 10a720: b.ne #0x10a740 */
  if (ARC_COND(c, 1)) goto L_10a740;
  /* 10a724: ldurb w8, [x29, #-0x17] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-23))));
  /* 10a728: orr w8, w8, #0x20 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | UINT64_C(32)));
  /* 10a72c: cmp w8, #0x78 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(120));
  /* 10a730: b.ne #0x10a740 */
  if (ARC_COND(c, 1)) goto L_10a740;
  /* 10a734: sub x8, x29, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 10a738: orr x23, x8, #2 */
  ARC_X_W(c, 23, (ARC_X_R(c, 8) | UINT64_C(2)));
  /* 10a73c: b #0x10a744 */
  goto L_10a744;
L_10a740:;
  /* 10a740: sub x23, x29, #0x18 */
  ARC_X_W(c, 23, (ARC_X_R(c, 29) - UINT64_C(24)));
L_10a744:;
  /* 10a744: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 10a748: add x1, x20, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(48)));
  /* 10a74c: bl #0x143460 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1091408));
  fn1_143460(c);
  /* 10a750: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 10a754: add x3, sp, #0x1b */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(27)));
  /* 10a758: add x4, sp, #0x10 */
  ARC_X_W(c, 4, ((c)->sp + UINT64_C(16)));
  /* 10a75c: add x5, sp, #8 */
  ARC_X_W(c, 5, ((c)->sp + UINT64_C(8)));
  /* 10a760: mov x6, sp */
  ARC_X_W(c, 6, (c)->sp);
  /* 10a764: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* 10a768: mov x2, x22 */
  ARC_X_W(c, 2, ARC_X_R(c, 22));
  /* 10a76c: bl #0x1438f8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1091440));
  fn1_1438f8(c);
  /* 10a770: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 10a774: bl #0x143478 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1091448));
  fn1_143478(c);
  /* 10a778: ldp x3, x2, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    ARC_X_W(c, 3, arc_ld64(_pa));
    ARC_X_W(c, 2, arc_ld64(_pa + 8));
  }
  /* 10a77c: add x1, sp, #0x1b */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(27)));
  /* 10a780: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 10a784: mov x4, x20 */
  ARC_X_W(c, 4, ARC_X_R(c, 20));
  /* 10a788: mov w5, w19 */
  ARC_W_W(c, 5, ARC_W_R(c, 19));
  /* 10a78c: bl #0x10b5d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1091472));
  fn1_10b5d8(c);
  /* 10a790: ldp x20, x19, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 10a794: ldr x23, [sp, #0x70] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(112))));
  /* 10a798: ldp x22, x21, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 10a79c: ldp x29, x30, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 10a7a0: add sp, sp, #0xa0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(160)));
  /* 10a7a4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 10a7a8: ret  */
  return;
L_10a7ac:;
  /* 10a7ac: nop  */
  /* nop: no architectural effect here */
  /* 10a7b0: adr x0, #0x15dc38 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 10a7b4: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1091512));
  fn1_1424b8(c);
  /* 10a7b8: cbz w0, #0x10a6b4 */
  if ((ARC_W_R(c, 0)) == 0) goto L_10a6b4;
  /* 10a7bc: adrp x1, #0x51000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(331776)));
  /* 10a7c0: add x1, x1, #0x6e4 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1764)));
  /* 10a7c4: mov w0, #0x1fbf */
  ARC_W_W(c, 0, UINT64_C(8127));
  /* 10a7c8: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 10a7cc: bl #0x1441e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1091536));
  fn1_1441e0(c);
  /* 10a7d0: str x0, [x23, #0xc30] */
  arc_st64((ARC_X_R(c, 23) + INT64_C(3120)), ARC_X_R(c, 0));
  /* 10a7d4: nop  */
  /* nop: no architectural effect here */
  /* 10a7d8: adr x0, #0x15dc38 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 10a7dc: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1091552));
  fn1_1424d0(c);
  /* 10a7e0: b #0x10a6b4 */
  goto L_10a6b4;
  /* 10a7e4: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 10a7e8: nop  */
  /* nop: no architectural effect here */
  /* 10a7ec: adr x0, #0x15dc38 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 10a7f0: bl #0x1424e8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1091572));
  fn1_1424e8(c);
  /* 10a7f4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 10a7f8: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1091580));
  fn1_9cc20(c);
  /* 10a7fc: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 10a800: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 10a804: bl #0x143478 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1091592));
  fn1_143478(c);
  /* 10a808: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 10a80c: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1091600));
  fn1_9cc20(c);
}

void fn1_112c14(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039053332));
  /* 112c14: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 112c18: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 112c1c: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 112c20: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 112c24: mov x19, x4 */
  ARC_X_W(c, 19, ARC_X_R(c, 4));
  /* 112c28: mov x0, x2 */
  ARC_X_W(c, 0, ARC_X_R(c, 2));
  /* 112c2c: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 112c30: mov x1, x3 */
  ARC_X_W(c, 1, ARC_X_R(c, 3));
  /* 112c34: mov x2, x4 */
  ARC_X_W(c, 2, ARC_X_R(c, 4));
  /* 112c38: mov x3, x5 */
  ARC_X_W(c, 3, ARC_X_R(c, 5));
  /* 112c3c: mov w4, #1 */
  ARC_W_W(c, 4, UINT64_C(1));
  /* 112c40: bl #0x112ec0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1125444));
  fn1_112ec0(c);
  /* 112c44: ldr w8, [x19] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 19)));
  /* 112c48: cmp w0, #6 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(6));
  /* 112c4c: b.gt #0x112c5c */
  if (ARC_COND(c, 12)) goto L_112c5c;
  /* 112c50: tbnz w8, #2, #0x112c5c */
  if (((ARC_W_R(c, 8)) >> 2 & 1) != 0) goto L_112c5c;
  /* 112c54: str w0, [x20] */
  arc_st32(ARC_X_R(c, 20), ARC_W_R(c, 0));
  /* 112c58: b #0x112c64 */
  goto L_112c64;
L_112c5c:;
  /* 112c5c: orr w8, w8, #4 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | UINT64_C(4)));
  /* 112c60: str w8, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 8));
L_112c64:;
  /* 112c64: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 112c68: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 112c6c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 112c70: ret  */
  return;
}

void fn1_113fd0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039058384));
  /* 113fd0: bti c */
  /* bti: no architectural effect here */
  /* 113fd4: ldr w0, [x0, #0x10] */
  ARC_W_W(c, 0, arc_ld32((ARC_X_R(c, 0) + INT64_C(16))));
  /* 113fd8: ret  */
  return;
}

void fn1_11eecc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039103180));
  /* 11eecc: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 11eed0: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* 11eed4: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 11eed8: str x23, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 23));
  /* 11eedc: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 11eee0: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 11eee4: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 11eee8: adrp x23, #0x151000 */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 11eeec: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 11eef0: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 11eef4: ldr x23, [x23, #0xbc0] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 23) + INT64_C(3008))));
  /* 11eef8: ldar x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 11eefc: cmn x8, #1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0);
  /* 11ef00: b.eq #0x11efbc */
  if (ARC_COND(c, 0)) goto L_11efbc;
  /* 11ef04: nop  */
  /* nop: no architectural effect here */
  /* 11ef08: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11ef0c: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1175312));
  fn1_142518(c);
  /* 11ef10: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 11ef14: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 11ef18: b.ne #0x11ef44 */
  if (ARC_COND(c, 1)) goto L_11ef44;
  /* 11ef1c: nop  */
  /* nop: no architectural effect here */
  /* 11ef20: adr x21, #0x15791c */
  ARC_X_W(c, 21, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 11ef24: nop  */
  /* nop: no architectural effect here */
  /* 11ef28: adr x22, #0x1578f4 */
  ARC_X_W(c, 22, (arc_image_bases[1] + UINT64_C(1407220)));
L_11ef2c:;
  /* 11ef2c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 11ef30: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 11ef34: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1175352));
  fn1_142530(c);
  /* 11ef38: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 11ef3c: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 11ef40: b.eq #0x11ef2c */
  if (ARC_COND(c, 0)) goto L_11ef2c;
L_11ef44:;
  /* 11ef44: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 11ef48: cbz x8, #0x11ef5c */
  if ((ARC_X_R(c, 8)) == 0) goto L_11ef5c;
  /* 11ef4c: nop  */
  /* nop: no architectural effect here */
  /* 11ef50: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11ef54: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1175384));
  fn1_142560(c);
  /* 11ef58: b #0x11efbc */
  goto L_11efbc;
L_11ef5c:;
  /* 11ef5c: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 11ef60: str x23, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 23));
  /* 11ef64: strb wzr, [sp, #8] */
  arc_st8(((c)->sp + INT64_C(8)), ARC_W_R(c, 31));
  /* 11ef68: str x8, [x23] */
  arc_st64(ARC_X_R(c, 23), ARC_X_R(c, 8));
  /* 11ef6c: nop  */
  /* nop: no architectural effect here */
  /* 11ef70: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11ef74: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1175416));
  fn1_142560(c);
  /* 11ef78: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 11ef7c: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 11ef80: ldr x1, [x1, #0xc58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3160))));
  /* 11ef84: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1175432));
  fn1_a2030(c);
  /* 11ef88: add w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + UINT64_C(1)));
  /* 11ef8c: str w8, [x23, #8] */
  arc_st32((ARC_X_R(c, 23) + INT64_C(8)), ARC_W_R(c, 8));
  /* 11ef90: nop  */
  /* nop: no architectural effect here */
  /* 11ef94: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11ef98: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1175452));
  fn1_142518(c);
  /* 11ef9c: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 11efa0: stlr x8, [x23] */
  arc_st64(ARC_X_R(c, 23), ARC_X_R(c, 8));
  /* 11efa4: nop  */
  /* nop: no architectural effect here */
  /* 11efa8: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11efac: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1175472));
  fn1_142560(c);
  /* 11efb0: nop  */
  /* nop: no architectural effect here */
  /* 11efb4: adr x0, #0x15791c */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 11efb8: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1175484));
  fn1_142578(c);
L_11efbc:;
  /* 11efbc: ldrsw x8, [x23, #8] */
  ARC_X_W(c, 8, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 23) + INT64_C(8)))));
  /* 11efc0: add x1, x19, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 19) + UINT64_C(8)));
  /* 11efc4: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 11efc8: sub x22, x8, #1 */
  ARC_X_W(c, 22, (ARC_X_R(c, 8) - UINT64_C(1)));
  /* 11efcc: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1175504));
  fn1_db2e0(c);
  /* 11efd0: mov x21, x20 */
  ARC_X_W(c, 21, ARC_X_R(c, 20));
  /* 11efd4: ldp x8, x9, [x21, #0x10]! */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(16));
    ARC_X_W(c, 21, ARC_X_R(c, 21) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 11efd8: sub x9, x9, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - ARC_X_R(c, 8)));
  /* 11efdc: asr x10, x9, #3 */
  ARC_X_W(c, 10, ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(3)) & 63))));
  /* 11efe0: cmp x10, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 22));
  /* 11efe4: b.hi #0x11f010 */
  if (ARC_COND(c, 8)) goto L_11f010;
  /* 11efe8: add x9, x22, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 22) + UINT64_C(1)));
  /* 11efec: subs x1, x9, x10 */
  ARC_X_W(c, 1, arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10)));
  /* 11eff0: b.ls #0x11f004 */
  if (ARC_COND(c, 9)) goto L_11f004;
  /* 11eff4: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 11eff8: bl #0x1352bc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1175548));
  fn1_1352bc(c);
  /* 11effc: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 11f000: b #0x11f010 */
  goto L_11f010;
L_11f004:;
  /* 11f004: b.hs #0x11f010 */
  if (ARC_COND(c, 2)) goto L_11f010;
  /* 11f008: add x9, x8, x9, lsl #3 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3)));
  /* 11f00c: str x9, [x20, #0x18] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(24)), ARC_X_R(c, 9));
L_11f010:;
  /* 11f010: ldr x20, [x8, x22, lsl #3] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 22)) << 3))));
  /* 11f014: cbz x20, #0x11f038 */
  if ((ARC_X_R(c, 20)) == 0) goto L_11f038;
  /* 11f018: add x1, x20, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* 11f01c: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 11f020: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1175588));
  fn1_bd950(c);
  /* 11f024: cbnz x0, #0x11f038 */
  if ((ARC_X_R(c, 0)) != 0) goto L_11f038;
  /* 11f028: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 11f02c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 11f030: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 11f034: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1175608));
  arc_dispatch(c, ARC_X_R(c, 8));
L_11f038:;
  /* 11f038: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 11f03c: str x19, [x8, x22, lsl #3] */
  arc_st64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 22)) << 3)), ARC_X_R(c, 19));
  /* 11f040: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 11f044: ldr x23, [sp, #0x20] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(32))));
  /* 11f048: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 11f04c: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 11f050: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* 11f054: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 11f058: ret  */
  return;
  /* 11f05c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 11f060: add x1, x19, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 19) + UINT64_C(8)));
  /* 11f064: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 11f068: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1175660));
  fn1_bd950(c);
  /* 11f06c: cbnz x0, #0x11f094 */
  if ((ARC_X_R(c, 0)) != 0) goto L_11f094;
  /* 11f070: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 11f074: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 11f078: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 11f07c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1175680));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 11f080: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 11f084: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1175688));
  fn1_9cc20(c);
  /* 11f088: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 11f08c: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 11f090: bl #0xd2a78 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1175700));
  fn1_d2a78(c);
L_11f094:;
  /* 11f094: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 11f098: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1175708));
  fn1_9cc20(c);
}

void fn1_1265ac(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039133612));
  /* 1265ac: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 1265b0: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1265b4: str x23, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 23));
  /* 1265b8: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1265bc: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1265c0: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1265c4: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 1265c8: cmp x1, x2 */
  (void)arc_sub64(c, ARC_X_R(c, 1), ARC_X_R(c, 2));
  /* 1265cc: b.eq #0x126648 */
  if (ARC_COND(c, 0)) goto L_126648;
  /* 1265d0: mov x20, x2 */
  ARC_X_W(c, 20, ARC_X_R(c, 2));
  /* 1265d4: nop  */
  /* nop: no architectural effect here */
  /* 1265d8: adr x21, #0x15dc38 */
  ARC_X_W(c, 21, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 1265dc: adrp x22, #0x15d000 */
  ARC_X_W(c, 22, (arc_image_bases[1] + UINT64_C(1429504)));
  /* 1265e0: b #0x126604 */
  goto L_126604;
L_1265e4:;
  /* 1265e4: ldr w8, [x19] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 19)));
  /* 1265e8: sub w9, w23, #0x7b */
  ARC_W_W(c, 9, (ARC_W_R(c, 23) - UINT64_C(123)));
  /* 1265ec: cmn w9, #0x1a */
  (void)arc_add32(c, ARC_W_R(c, 9), UINT64_C(26), 0);
  /* 1265f0: sub w10, w8, #0x20 */
  ARC_W_W(c, 10, (ARC_W_R(c, 8) - UINT64_C(32)));
  /* 1265f4: csel w23, w8, w10, lo */
  ARC_W_W(c, 23, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 10)));
L_1265f8:;
  /* 1265f8: str w23, [x19], #4 */
  { const uint64_t _a = ARC_X_R(c, 19);
    ARC_X_W(c, 19, ARC_X_R(c, 19) + INT64_C(4));
    arc_st32(_a, ARC_W_R(c, 23));
  }
  /* 1265fc: cmp x19, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 20));
  /* 126600: b.eq #0x126648 */
  if (ARC_COND(c, 0)) goto L_126648;
L_126604:;
  /* 126604: ldr w23, [x19] */
  ARC_W_W(c, 23, arc_ld32(ARC_X_R(c, 19)));
  /* 126608: cmp w23, #0x7f */
  (void)arc_sub32(c, ARC_W_R(c, 23), UINT64_C(127));
  /* 12660c: b.hi #0x1265f8 */
  if (ARC_COND(c, 8)) goto L_1265f8;
  /* 126610: ldarb w8, [x21] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 21)));
  /* 126614: tbnz w8, #0, #0x1265e4 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_1265e4;
  /* 126618: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 12661c: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1205792));
  fn1_1424b8(c);
  /* 126620: adrp x1, #0x51000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(331776)));
  /* 126624: add x1, x1, #0x6e4 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1764)));
  /* 126628: cbz w0, #0x1265e4 */
  if ((ARC_W_R(c, 0)) == 0) goto L_1265e4;
  /* 12662c: mov w0, #0x1fbf */
  ARC_W_W(c, 0, UINT64_C(8127));
  /* 126630: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 126634: bl #0x1441e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1205816));
  fn1_1441e0(c);
  /* 126638: str x0, [x22, #0xc30] */
  arc_st64((ARC_X_R(c, 22) + INT64_C(3120)), ARC_X_R(c, 0));
  /* 12663c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 126640: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1205828));
  fn1_1424d0(c);
  /* 126644: b #0x1265e4 */
  goto L_1265e4;
L_126648:;
  /* 126648: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 12664c: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 126650: ldr x23, [sp, #0x10] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(16))));
  /* 126654: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 126658: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 12665c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 126660: ret  */
  return;
  /* 126664: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 126668: nop  */
  /* nop: no architectural effect here */
  /* 12666c: adr x0, #0x15dc38 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 126670: bl #0x1424e8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1205876));
  fn1_1424e8(c);
  /* 126674: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 126678: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1205884));
  fn1_9cc20(c);
}

void fn1_128e84(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039144068));
  /* 128e84: bti c */
  /* bti: no architectural effect here */
  /* 128e88: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 128e8c: ret  */
  return;
}

void fn1_12a7a4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039150500));
  /* 12a7a4: bti c */
  /* bti: no architectural effect here */
  /* 12a7a8: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 12a7ac: ret  */
  return;
}

void fn1_12bcf0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039155952));
  /* 12bcf0: bti c */
  /* bti: no architectural effect here */
  /* 12bcf4: ldrb w0, [x0, #0x10] */
  ARC_W_W(c, 0, arc_ld8((ARC_X_R(c, 0) + INT64_C(16))));
  /* 12bcf8: ret  */
  return;
}

void fn1_132874(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039183476));
  /* 132874: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 132878: stp x29, x30, [sp, #-0x50]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-80));
    (c)->sp = (c)->sp + INT64_C(-80);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 13287c: str x25, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 25));
  /* 132880: stp x24, x23, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 132884: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 132888: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 13288c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 132890: tbz w2, #0, #0x1328b4 */
  if (((ARC_W_R(c, 2)) >> 0 & 1) == 0) goto L_1328b4;
  /* 132894: ldrb w8, [x1] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 1)));
  /* 132898: ldr x9, [x1, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 1) + INT64_C(8))));
  /* 13289c: lsr x10, x8, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* 1328a0: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 1328a4: csel x8, x10, x9, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* 1328a8: cmp x8, #4 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(4));
  /* 1328ac: cset w20, eq */
  ARC_W_W(c, 20, (ARC_COND(c, 0) ? 1 : 0));
  /* 1328b0: b #0x1328b8 */
  goto L_1328b8;
L_1328b4:;
  /* 1328b4: mov w20, wzr */
  ARC_W_W(c, 20, ARC_W_R(c, 31));
L_1328b8:;
  /* 1328b8: and w8, w3, #0xff */
  ARC_W_W(c, 8, (ARC_W_R(c, 3) & UINT64_C(255)));
  /* 1328bc: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* 1328c0: b.eq #0x132944 */
  if (ARC_COND(c, 0)) goto L_132944;
  /* 1328c4: cbnz w8, #0x132c34 */
  if ((ARC_W_R(c, 8)) != 0) goto L_132c34;
  /* 1328c8: cbz w20, #0x132b10 */
  if ((ARC_W_R(c, 20)) == 0) goto L_132b10;
  /* 1328cc: ldrb w8, [x1] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 1)));
  /* 1328d0: ldp x9, x11, [x1, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 1) + INT64_C(8));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 11, arc_ld64(_pa + 8));
  }
  /* 1328d4: lsr x10, x8, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* 1328d8: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 1328dc: csinc x19, x11, x1, ne */
  ARC_X_W(c, 19, (ARC_COND(c, 1) ? (ARC_X_R(c, 11)) : ((ARC_X_R(c, 1)) + 1)));
  /* 1328e0: csel x8, x10, x9, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* 1328e4: cmp x8, #3 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(3));
  /* 1328e8: b.eq #0x132b10 */
  if (ARC_COND(c, 0)) goto L_132b10;
  /* 1328ec: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* 1328f0: add x9, x19, #4 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + UINT64_C(4)));
  /* 1328f4: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* 1328f8: b.ne #0x132a64 */
  if (ARC_COND(c, 1)) goto L_132a64;
  /* 1328fc: mov x9, x8 */
  ARC_X_W(c, 9, ARC_X_R(c, 8));
  /* 132900: ldrb w21, [x9, #-1]! */
  { const uint64_t _a = (ARC_X_R(c, 9) + INT64_C(-1));
    ARC_X_W(c, 9, ARC_X_R(c, 9) + INT64_C(-1));
    ARC_W_W(c, 21, arc_ld8(_a));
  }
  /* 132904: subs x2, x9, x19 */
  ARC_X_W(c, 2, arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 19)));
  /* 132908: b.eq #0x13293c */
  if (ARC_COND(c, 0)) goto L_13293c;
  /* 13290c: sub x8, x8, x2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) - ARC_X_R(c, 2)));
  /* 132910: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 132914: mov x23, x1 */
  ARC_X_W(c, 23, ARC_X_R(c, 1));
  /* 132918: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 13291c: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 132920: mov w24, w4 */
  ARC_W_W(c, 24, ARC_W_R(c, 4));
  /* 132924: mov w25, w5 */
  ARC_W_W(c, 25, ARC_W_R(c, 5));
  /* 132928: bl #0x1449f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1255724));
  fn1_1449f0(c);
  /* 13292c: mov w5, w25 */
  ARC_W_W(c, 5, ARC_W_R(c, 25));
  /* 132930: mov w4, w24 */
  ARC_W_W(c, 4, ARC_W_R(c, 24));
  /* 132934: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 132938: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
L_13293c:;
  /* 13293c: strb w21, [x19] */
  arc_st8(ARC_X_R(c, 19), ARC_W_R(c, 21));
  /* 132940: b #0x132b10 */
  goto L_132b10;
L_132944:;
  /* 132944: and w8, w5, #0xff */
  ARC_W_W(c, 8, (ARC_W_R(c, 5) & UINT64_C(255)));
  /* 132948: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* 13294c: b.le #0x13299c */
  if (ARC_COND(c, 13)) goto L_13299c;
  /* 132950: cmp w8, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(2));
  /* 132954: b.eq #0x1329d4 */
  if (ARC_COND(c, 0)) goto L_1329d4;
  /* 132958: cmp w8, #3 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(3));
  /* 13295c: b.eq #0x132a08 */
  if (ARC_COND(c, 0)) goto L_132a08;
  /* 132960: cmp w8, #4 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(4));
  /* 132964: b.ne #0x132c34 */
  if (ARC_COND(c, 1)) goto L_132c34;
  /* 132968: mov w9, #2 */
  ARC_W_W(c, 9, UINT64_C(2));
  /* 13296c: and w8, w4, #0xff */
  ARC_W_W(c, 8, (ARC_W_R(c, 4) & UINT64_C(255)));
  /* 132970: strb w9, [x0] */
  arc_st8(ARC_X_R(c, 0), ARC_W_R(c, 9));
  /* 132974: mov w9, #4 */
  ARC_W_W(c, 9, UINT64_C(4));
  /* 132978: cmp w8, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(2));
  /* 13297c: strb w9, [x0, #3] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(3)), ARC_W_R(c, 9));
  /* 132980: b.eq #0x132d28 */
  if (ARC_COND(c, 0)) goto L_132d28;
  /* 132984: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* 132988: b.eq #0x132ca0 */
  if (ARC_COND(c, 0)) goto L_132ca0;
  /* 13298c: cbnz w8, #0x132c34 */
  if ((ARC_W_R(c, 8)) != 0) goto L_132c34;
  /* 132990: mov w8, #3 */
  ARC_W_W(c, 8, UINT64_C(3));
  /* 132994: sturh w8, [x0, #1] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(1)), ARC_W_R(c, 8));
  /* 132998: b #0x132c40 */
  goto L_132c40;
L_13299c:;
  /* 13299c: cbz w8, #0x132a3c */
  if ((ARC_W_R(c, 8)) == 0) goto L_132a3c;
  /* 1329a0: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* 1329a4: b.ne #0x132c34 */
  if (ARC_COND(c, 1)) goto L_132c34;
  /* 1329a8: mov w9, #3 */
  ARC_W_W(c, 9, UINT64_C(3));
  /* 1329ac: and w8, w4, #0xff */
  ARC_W_W(c, 8, (ARC_W_R(c, 4) & UINT64_C(255)));
  /* 1329b0: strb w9, [x0] */
  arc_st8(ARC_X_R(c, 0), ARC_W_R(c, 9));
  /* 1329b4: mov w9, #4 */
  ARC_W_W(c, 9, UINT64_C(4));
  /* 1329b8: cmp w8, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(2));
  /* 1329bc: strb w9, [x0, #3] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(3)), ARC_W_R(c, 9));
  /* 1329c0: b.eq #0x132aa8 */
  if (ARC_COND(c, 0)) goto L_132aa8;
  /* 1329c4: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* 1329c8: b.ne #0x132a2c */
  if (ARC_COND(c, 1)) goto L_132a2c;
L_1329cc:;
  /* 1329cc: mov w8, #2 */
  ARC_W_W(c, 8, UINT64_C(2));
  /* 1329d0: b #0x132d2c */
  goto L_132d2c;
L_1329d4:;
  /* 1329d4: mov w9, #2 */
  ARC_W_W(c, 9, UINT64_C(2));
  /* 1329d8: and w8, w4, #0xff */
  ARC_W_W(c, 8, (ARC_W_R(c, 4) & UINT64_C(255)));
  /* 1329dc: strb w9, [x0] */
  arc_st8(ARC_X_R(c, 0), ARC_W_R(c, 9));
  /* 1329e0: mov w9, #3 */
  ARC_W_W(c, 9, UINT64_C(3));
  /* 1329e4: cmp w8, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(2));
  /* 1329e8: strb w9, [x0, #3] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(3)), ARC_W_R(c, 9));
  /* 1329ec: b.eq #0x132ca8 */
  if (ARC_COND(c, 0)) goto L_132ca8;
  /* 1329f0: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* 1329f4: b.eq #0x132c90 */
  if (ARC_COND(c, 0)) goto L_132c90;
  /* 1329f8: cbnz w8, #0x132c34 */
  if ((ARC_W_R(c, 8)) != 0) goto L_132c34;
  /* 1329fc: mov w8, #0x400 */
  ARC_W_W(c, 8, UINT64_C(1024));
  /* 132a00: sturh w8, [x0, #1] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(1)), ARC_W_R(c, 8));
  /* 132a04: b #0x132c40 */
  goto L_132c40;
L_132a08:;
  /* 132a08: mov w9, #3 */
  ARC_W_W(c, 9, UINT64_C(3));
  /* 132a0c: and w8, w4, #0xff */
  ARC_W_W(c, 8, (ARC_W_R(c, 4) & UINT64_C(255)));
  /* 132a10: strb w9, [x0] */
  arc_st8(ARC_X_R(c, 0), ARC_W_R(c, 9));
  /* 132a14: mov w9, #4 */
  ARC_W_W(c, 9, UINT64_C(4));
  /* 132a18: cmp w8, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(2));
  /* 132a1c: strb w9, [x0, #3] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(3)), ARC_W_R(c, 9));
  /* 132a20: b.eq #0x132aa8 */
  if (ARC_COND(c, 0)) goto L_132aa8;
  /* 132a24: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* 132a28: b.eq #0x1329cc */
  if (ARC_COND(c, 0)) goto L_1329cc;
L_132a2c:;
  /* 132a2c: cbnz w8, #0x132c34 */
  if ((ARC_W_R(c, 8)) != 0) goto L_132c34;
  /* 132a30: mov w8, #2 */
  ARC_W_W(c, 8, UINT64_C(2));
  /* 132a34: sturh w8, [x0, #1] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(1)), ARC_W_R(c, 8));
  /* 132a38: b #0x132c40 */
  goto L_132c40;
L_132a3c:;
  /* 132a3c: adrp x8, #0x53000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(339968)));
  /* 132a40: ldr d0, [x8, #0x2c0] */
  arc_du_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(704))));
  /* 132a44: ands w8, w4, #0xff */
  { uint32_t _r = (uint32_t)(ARC_W_R(c, 4) & UINT64_C(255));
    arc_flags_logical32(c, _r);
    ARC_W_W(c, 8, _r); }
  /* 132a48: str s0, [x0] */
  arc_st32(ARC_X_R(c, 0), (c)->q[0].u32[0]);
  /* 132a4c: b.eq #0x132c40 */
  if (ARC_COND(c, 0)) goto L_132c40;
  /* 132a50: cmp w8, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(2));
  /* 132a54: b.eq #0x132c40 */
  if (ARC_COND(c, 0)) goto L_132c40;
  /* 132a58: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* 132a5c: b.eq #0x132c2c */
  if (ARC_COND(c, 0)) goto L_132c2c;
  /* 132a60: b #0x132c34 */
  goto L_132c34;
L_132a64:;
  /* 132a64: add x9, x19, #3 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + UINT64_C(3)));
  /* 132a68: sub x10, x8, x9 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) - ARC_X_R(c, 9)));
  /* 132a6c: cmp x10, #3 */
  (void)arc_sub64(c, ARC_X_R(c, 10), UINT64_C(3));
  /* 132a70: b.ne #0x132ab0 */
  if (ARC_COND(c, 1)) goto L_132ab0;
  /* 132a74: add x10, x19, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 19) + UINT64_C(1)));
  /* 132a78: add x11, x9, #1 */
  ARC_X_W(c, 11, (ARC_X_R(c, 9) + UINT64_C(1)));
L_132a7c:;
  /* 132a7c: ldurb w12, [x11, #-1] */
  ARC_W_W(c, 12, arc_ld8((ARC_X_R(c, 11) + INT64_C(-1))));
  /* 132a80: ldurb w13, [x10, #-1] */
  ARC_W_W(c, 13, arc_ld8((ARC_X_R(c, 10) + INT64_C(-1))));
  /* 132a84: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* 132a88: sturb w12, [x10, #-1] */
  arc_st8((ARC_X_R(c, 10) + INT64_C(-1)), ARC_W_R(c, 12));
  /* 132a8c: sturb w13, [x11, #-1] */
  arc_st8((ARC_X_R(c, 11) + INT64_C(-1)), ARC_W_R(c, 13));
  /* 132a90: b.eq #0x132b10 */
  if (ARC_COND(c, 0)) goto L_132b10;
  /* 132a94: cmp x11, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 8));
  /* 132a98: add x11, x11, #1 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) + UINT64_C(1)));
  /* 132a9c: add x10, x10, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(1)));
  /* 132aa0: b.ne #0x132a7c */
  if (ARC_COND(c, 1)) goto L_132a7c;
  /* 132aa4: b #0x132b10 */
  goto L_132b10;
L_132aa8:;
  /* 132aa8: mov w8, #0x201 */
  ARC_W_W(c, 8, UINT64_C(513));
  /* 132aac: b #0x132cac */
  goto L_132cac;
L_132ab0:;
  /* 132ab0: mov w11, #3 */
  ARC_W_W(c, 11, UINT64_C(3));
L_132ab4:;
  /* 132ab4: mov x12, x11 */
  ARC_X_W(c, 12, ARC_X_R(c, 11));
  /* 132ab8: mov x11, x10 */
  ARC_X_W(c, 11, ARC_X_R(c, 10));
  /* 132abc: sdiv x10, x12, x10 */
  ARC_X_W(c, 10, ((int64_t)(ARC_X_R(c, 10)) == 0 ? 0 : ((int64_t)(ARC_X_R(c, 12)) / (int64_t)(ARC_X_R(c, 10)))));
  /* 132ac0: msub x10, x10, x11, x12 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 12)) - ((uint64_t)(ARC_X_R(c, 10)) * (uint64_t)(ARC_X_R(c, 11)))));
  /* 132ac4: cbnz x10, #0x132ab4 */
  if ((ARC_X_R(c, 10)) != 0) goto L_132ab4;
  /* 132ac8: add x10, x11, x19 */
  ARC_X_W(c, 10, (ARC_X_R(c, 11) + ARC_X_R(c, 19)));
L_132acc:;
  /* 132acc: ldrb w11, [x10, #-1]! */
  { const uint64_t _a = (ARC_X_R(c, 10) + INT64_C(-1));
    ARC_X_W(c, 10, ARC_X_R(c, 10) + INT64_C(-1));
    ARC_W_W(c, 11, arc_ld8(_a));
  }
  /* 132ad0: add x14, x10, #3 */
  ARC_X_W(c, 14, (ARC_X_R(c, 10) + UINT64_C(3)));
  /* 132ad4: mov x13, x10 */
  ARC_X_W(c, 13, ARC_X_R(c, 10));
L_132ad8:;
  /* 132ad8: mov x12, x14 */
  ARC_X_W(c, 12, ARC_X_R(c, 14));
  /* 132adc: sub x14, x8, x14 */
  ARC_X_W(c, 14, (ARC_X_R(c, 8) - ARC_X_R(c, 14)));
  /* 132ae0: mov x15, x12 */
  ARC_X_W(c, 15, ARC_X_R(c, 12));
  /* 132ae4: sub x16, x9, x14 */
  ARC_X_W(c, 16, (ARC_X_R(c, 9) - ARC_X_R(c, 14)));
  /* 132ae8: cmp x14, #3 */
  (void)arc_sub64(c, ARC_X_R(c, 14), UINT64_C(3));
  /* 132aec: ldrb w17, [x15], #3 */
  { const uint64_t _a = ARC_X_R(c, 15);
    ARC_X_W(c, 15, ARC_X_R(c, 15) + INT64_C(3));
    ARC_W_W(c, 17, arc_ld8(_a));
  }
  /* 132af0: csel x14, x15, x16, gt */
  ARC_X_W(c, 14, (ARC_COND(c, 12) ? (ARC_X_R(c, 15)) : ARC_X_R(c, 16)));
  /* 132af4: cmp x14, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 14), ARC_X_R(c, 10));
  /* 132af8: strb w17, [x13] */
  arc_st8(ARC_X_R(c, 13), ARC_W_R(c, 17));
  /* 132afc: mov x13, x12 */
  ARC_X_W(c, 13, ARC_X_R(c, 12));
  /* 132b00: b.ne #0x132ad8 */
  if (ARC_COND(c, 1)) goto L_132ad8;
  /* 132b04: cmp x10, x19 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 19));
  /* 132b08: strb w11, [x12] */
  arc_st8(ARC_X_R(c, 12), ARC_W_R(c, 11));
  /* 132b0c: b.ne #0x132acc */
  if (ARC_COND(c, 1)) goto L_132acc;
L_132b10:;
  /* 132b10: and w8, w5, #0xff */
  ARC_W_W(c, 8, (ARC_W_R(c, 5) & UINT64_C(255)));
  /* 132b14: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* 132b18: b.le #0x132b60 */
  if (ARC_COND(c, 13)) goto L_132b60;
  /* 132b1c: cmp w8, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(2));
  /* 132b20: b.eq #0x132ba0 */
  if (ARC_COND(c, 0)) goto L_132ba0;
  /* 132b24: cmp w8, #3 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(3));
  /* 132b28: b.eq #0x132bd4 */
  if (ARC_COND(c, 0)) goto L_132bd4;
  /* 132b2c: cmp w8, #4 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(4));
  /* 132b30: b.ne #0x132c34 */
  if (ARC_COND(c, 1)) goto L_132c34;
  /* 132b34: mov w9, #4 */
  ARC_W_W(c, 9, UINT64_C(4));
  /* 132b38: and w8, w4, #0xff */
  ARC_W_W(c, 8, (ARC_W_R(c, 4) & UINT64_C(255)));
  /* 132b3c: strb w9, [x0] */
  arc_st8(ARC_X_R(c, 0), ARC_W_R(c, 9));
  /* 132b40: mov w9, #3 */
  ARC_W_W(c, 9, UINT64_C(3));
  /* 132b44: cmp w8, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(2));
  /* 132b48: strb w9, [x0, #3] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(3)), ARC_W_R(c, 9));
  /* 132b4c: b.eq #0x132c5c */
  if (ARC_COND(c, 0)) goto L_132c5c;
  /* 132b50: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* 132b54: b.ne #0x132bc4 */
  if (ARC_COND(c, 1)) goto L_132bc4;
  /* 132b58: mov w8, #0x200 */
  ARC_W_W(c, 8, UINT64_C(512));
  /* 132b5c: b #0x132ce4 */
  goto L_132ce4;
L_132b60:;
  /* 132b60: cbz w8, #0x132c08 */
  if ((ARC_W_R(c, 8)) == 0) goto L_132c08;
  /* 132b64: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* 132b68: b.ne #0x132c34 */
  if (ARC_COND(c, 1)) goto L_132c34;
  /* 132b6c: mov w9, #3 */
  ARC_W_W(c, 9, UINT64_C(3));
  /* 132b70: and w8, w4, #0xff */
  ARC_W_W(c, 8, (ARC_W_R(c, 4) & UINT64_C(255)));
  /* 132b74: strb w9, [x0] */
  arc_st8(ARC_X_R(c, 0), ARC_W_R(c, 9));
  /* 132b78: mov w9, #2 */
  ARC_W_W(c, 9, UINT64_C(2));
  /* 132b7c: cmp w8, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(2));
  /* 132b80: strb w9, [x0, #3] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(3)), ARC_W_R(c, 9));
  /* 132b84: b.eq #0x132d58 */
  if (ARC_COND(c, 0)) goto L_132d58;
  /* 132b88: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* 132b8c: b.eq #0x132ce0 */
  if (ARC_COND(c, 0)) goto L_132ce0;
  /* 132b90: cbnz w8, #0x132c34 */
  if ((ARC_W_R(c, 8)) != 0) goto L_132c34;
  /* 132b94: mov w8, #4 */
  ARC_W_W(c, 8, UINT64_C(4));
  /* 132b98: sturh w8, [x0, #1] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(1)), ARC_W_R(c, 8));
  /* 132b9c: b #0x132c40 */
  goto L_132c40;
L_132ba0:;
  /* 132ba0: mov w9, #4 */
  ARC_W_W(c, 9, UINT64_C(4));
  /* 132ba4: and w8, w4, #0xff */
  ARC_W_W(c, 8, (ARC_W_R(c, 4) & UINT64_C(255)));
  /* 132ba8: strb w9, [x0] */
  arc_st8(ARC_X_R(c, 0), ARC_W_R(c, 9));
  /* 132bac: mov w9, #3 */
  ARC_W_W(c, 9, UINT64_C(3));
  /* 132bb0: cmp w8, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(2));
  /* 132bb4: strb w9, [x0, #3] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(3)), ARC_W_R(c, 9));
  /* 132bb8: b.eq #0x132c5c */
  if (ARC_COND(c, 0)) goto L_132c5c;
  /* 132bbc: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* 132bc0: b.eq #0x132c64 */
  if (ARC_COND(c, 0)) goto L_132c64;
L_132bc4:;
  /* 132bc4: cbnz w8, #0x132c34 */
  if ((ARC_W_R(c, 8)) != 0) goto L_132c34;
L_132bc8:;
  /* 132bc8: mov w8, #0x200 */
  ARC_W_W(c, 8, UINT64_C(512));
  /* 132bcc: sturh w8, [x0, #1] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(1)), ARC_W_R(c, 8));
  /* 132bd0: b #0x132c40 */
  goto L_132c40;
L_132bd4:;
  /* 132bd4: mov w9, #4 */
  ARC_W_W(c, 9, UINT64_C(4));
  /* 132bd8: and w8, w4, #0xff */
  ARC_W_W(c, 8, (ARC_W_R(c, 4) & UINT64_C(255)));
  /* 132bdc: strb w9, [x0] */
  arc_st8(ARC_X_R(c, 0), ARC_W_R(c, 9));
  /* 132be0: mov w9, #2 */
  ARC_W_W(c, 9, UINT64_C(2));
  /* 132be4: cmp w8, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(2));
  /* 132be8: strb w9, [x0, #3] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(3)), ARC_W_R(c, 9));
  /* 132bec: b.eq #0x132c98 */
  if (ARC_COND(c, 0)) goto L_132c98;
  /* 132bf0: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* 132bf4: b.eq #0x132c88 */
  if (ARC_COND(c, 0)) goto L_132c88;
  /* 132bf8: cbnz w8, #0x132c34 */
  if ((ARC_W_R(c, 8)) != 0) goto L_132c34;
  /* 132bfc: mov w8, #0x300 */
  ARC_W_W(c, 8, UINT64_C(768));
  /* 132c00: sturh w8, [x0, #1] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(1)), ARC_W_R(c, 8));
  /* 132c04: b #0x132c40 */
  goto L_132c40;
L_132c08:;
  /* 132c08: adrp x8, #0x53000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(339968)));
  /* 132c0c: ldr d0, [x8, #0x2f8] */
  arc_du_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(760))));
  /* 132c10: ands w8, w4, #0xff */
  { uint32_t _r = (uint32_t)(ARC_W_R(c, 4) & UINT64_C(255));
    arc_flags_logical32(c, _r);
    ARC_W_W(c, 8, _r); }
  /* 132c14: str s0, [x0] */
  arc_st32(ARC_X_R(c, 0), (c)->q[0].u32[0]);
  /* 132c18: b.eq #0x132c40 */
  if (ARC_COND(c, 0)) goto L_132c40;
  /* 132c1c: cmp w8, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(2));
  /* 132c20: b.eq #0x132c40 */
  if (ARC_COND(c, 0)) goto L_132c40;
  /* 132c24: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* 132c28: b.ne #0x132c34 */
  if (ARC_COND(c, 1)) goto L_132c34;
L_132c2c:;
  /* 132c2c: tbz w20, #0, #0x132cec */
  if (((ARC_W_R(c, 20)) >> 0 & 1) == 0) goto L_132cec;
  /* 132c30: b #0x132c40 */
  goto L_132c40;
L_132c34:;
  /* 132c34: adrp x8, #0x53000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(339968)));
  /* 132c38: ldr d0, [x8, #0x2d8] */
  arc_du_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(728))));
  /* 132c3c: str s0, [x0] */
  arc_st32(ARC_X_R(c, 0), (c)->q[0].u32[0]);
L_132c40:;
  /* 132c40: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 132c44: ldr x25, [sp, #0x10] */
  ARC_X_W(c, 25, arc_ld64(((c)->sp + INT64_C(16))));
  /* 132c48: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 132c4c: ldp x24, x23, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 132c50: ldp x29, x30, [sp], #0x50 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(80);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 132c54: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 132c58: ret  */
  return;
L_132c5c:;
  /* 132c5c: mov w8, #0x102 */
  ARC_W_W(c, 8, UINT64_C(258));
  /* 132c60: b #0x132d5c */
  goto L_132d5c;
L_132c64:;
  /* 132c64: tbnz w20, #0, #0x132bc8 */
  if (((ARC_W_R(c, 20)) >> 0 & 1) != 0) goto L_132bc8;
  /* 132c68: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 132c6c: mov x0, x1 */
  ARC_X_W(c, 0, ARC_X_R(c, 1));
  /* 132c70: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 132c74: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* 132c78: mov w3, #0x20 */
  ARC_W_W(c, 3, UINT64_C(32));
  /* 132c7c: bl #0x142ce0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1256576));
  fn1_142ce0(c);
  /* 132c80: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 132c84: b #0x132bc8 */
  goto L_132bc8;
L_132c88:;
  /* 132c88: mov w8, #0x301 */
  ARC_W_W(c, 8, UINT64_C(769));
  /* 132c8c: b #0x132d5c */
  goto L_132d5c;
L_132c90:;
  /* 132c90: mov w8, #0x400 */
  ARC_W_W(c, 8, UINT64_C(1024));
  /* 132c94: b #0x132d2c */
  goto L_132d2c;
L_132c98:;
  /* 132c98: mov w8, #3 */
  ARC_W_W(c, 8, UINT64_C(3));
  /* 132c9c: b #0x132ce4 */
  goto L_132ce4;
L_132ca0:;
  /* 132ca0: mov w8, #0x103 */
  ARC_W_W(c, 8, UINT64_C(259));
  /* 132ca4: b #0x132cac */
  goto L_132cac;
L_132ca8:;
  /* 132ca8: mov w8, #0x104 */
  ARC_W_W(c, 8, UINT64_C(260));
L_132cac:;
  /* 132cac: sturh w8, [x0, #1] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(1)), ARC_W_R(c, 8));
  /* 132cb0: cbz w20, #0x132c40 */
  if ((ARC_W_R(c, 20)) == 0) goto L_132c40;
  /* 132cb4: ldrb w9, [x1] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 1)));
  /* 132cb8: ldr x8, [x1, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 1) + INT64_C(8))));
  /* 132cbc: lsr x10, x9, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(1)) & 63)));
  /* 132cc0: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* 132cc4: csel x8, x10, x8, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 8)));
  /* 132cc8: sub x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) - UINT64_C(1)));
  /* 132ccc: tbnz w9, #0, #0x132d18 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) != 0) goto L_132d18;
  /* 132cd0: lsl w9, w8, #1 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 8)) << ((UINT64_C(1)) & 31)));
  /* 132cd4: strb w9, [x1], #1 */
  { const uint64_t _a = ARC_X_R(c, 1);
    ARC_X_W(c, 1, ARC_X_R(c, 1) + INT64_C(1));
    arc_st8(_a, ARC_W_R(c, 9));
  }
  /* 132cd8: mov x9, x1 */
  ARC_X_W(c, 9, ARC_X_R(c, 1));
  /* 132cdc: b #0x132d20 */
  goto L_132d20;
L_132ce0:;
  /* 132ce0: mov w8, #4 */
  ARC_W_W(c, 8, UINT64_C(4));
L_132ce4:;
  /* 132ce4: sturh w8, [x0, #1] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(1)), ARC_W_R(c, 8));
  /* 132ce8: tbnz w20, #0, #0x132c40 */
  if (((ARC_W_R(c, 20)) >> 0 & 1) != 0) goto L_132c40;
L_132cec:;
  /* 132cec: mov x0, x1 */
  ARC_X_W(c, 0, ARC_X_R(c, 1));
  /* 132cf0: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 132cf4: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* 132cf8: mov w3, #0x20 */
  ARC_W_W(c, 3, UINT64_C(32));
  /* 132cfc: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 132d00: ldr x25, [sp, #0x10] */
  ARC_X_W(c, 25, arc_ld64(((c)->sp + INT64_C(16))));
  /* 132d04: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 132d08: ldp x24, x23, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 132d0c: ldp x29, x30, [sp], #0x50 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(80);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 132d10: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 132d14: b #0x142ce0 */
  fn1_142ce0(c); return;
L_132d18:;
  /* 132d18: ldr x9, [x1, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 1) + INT64_C(16))));
  /* 132d1c: str x8, [x1, #8] */
  arc_st64((ARC_X_R(c, 1) + INT64_C(8)), ARC_X_R(c, 8));
L_132d20:;
  /* 132d20: strb wzr, [x9, x8] */
  arc_st8((ARC_X_R(c, 9) + ARC_X_R(c, 8)), ARC_W_R(c, 31));
  /* 132d24: b #0x132c40 */
  goto L_132c40;
L_132d28:;
  /* 132d28: mov w8, #0x300 */
  ARC_W_W(c, 8, UINT64_C(768));
L_132d2c:;
  /* 132d2c: sturh w8, [x0, #1] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(1)), ARC_W_R(c, 8));
  /* 132d30: tbnz w20, #0, #0x132c40 */
  if (((ARC_W_R(c, 20)) >> 0 & 1) != 0) goto L_132c40;
  /* 132d34: mov x0, x1 */
  ARC_X_W(c, 0, ARC_X_R(c, 1));
  /* 132d38: mov w1, #0x20 */
  ARC_W_W(c, 1, UINT64_C(32));
  /* 132d3c: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 132d40: ldr x25, [sp, #0x10] */
  ARC_X_W(c, 25, arc_ld64(((c)->sp + INT64_C(16))));
  /* 132d44: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 132d48: ldp x24, x23, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 132d4c: ldp x29, x30, [sp], #0x50 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(80);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 132d50: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 132d54: b #0x142ba8 */
  fn1_142ba8(c); return;
L_132d58:;
  /* 132d58: mov w8, #0x401 */
  ARC_W_W(c, 8, UINT64_C(1025));
L_132d5c:;
  /* 132d5c: sturh w8, [x0, #1] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(1)), ARC_W_R(c, 8));
  /* 132d60: cbz w20, #0x132c40 */
  if ((ARC_W_R(c, 20)) == 0) goto L_132c40;
  /* 132d64: ldrb w8, [x1] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 1)));
  /* 132d68: ldr x9, [x1, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 1) + INT64_C(16))));
  /* 132d6c: mov x0, x1 */
  ARC_X_W(c, 0, ARC_X_R(c, 1));
  /* 132d70: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 132d74: csinc x8, x9, x1, ne */
  ARC_X_W(c, 8, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 1)) + 1)));
  /* 132d78: mov x1, x8 */
  ARC_X_W(c, 1, ARC_X_R(c, 8));
  /* 132d7c: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 132d80: ldr x25, [sp, #0x10] */
  ARC_X_W(c, 25, arc_ld64(((c)->sp + INT64_C(16))));
  /* 132d84: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 132d88: ldp x24, x23, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 132d8c: ldp x29, x30, [sp], #0x50 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(80);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 132d90: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 132d94: b #0x135748 */
  fn1_135748(c); return;
}

void fn1_134c74(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039192692));
  /* 134c74: bti c */
  /* bti: no architectural effect here */
  /* 134c78: add x0, x0, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(16)));
  /* 134c7c: b #0x143d00 */
  fn1_143d00(c); return;
}

void fn1_137170(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039202160));
  /* 137170: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 137174: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 137178: str x23, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 23));
  /* 13717c: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 137180: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 137184: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 137188: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 13718c: mov x19, x2 */
  ARC_X_W(c, 19, ARC_X_R(c, 2));
  /* 137190: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* 137194: ldr x8, [x8, #0xaa8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2728))));
  /* 137198: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 13719c: adrp x23, #0x15d000 */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1429504)));
  /* 1371a0: nop  */
  /* nop: no architectural effect here */
  /* 1371a4: adr x22, #0x15dc40 */
  ARC_X_W(c, 22, (arc_image_bases[1] + UINT64_C(1432640)));
  /* 1371a8: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* 1371ac: str x8, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* 1371b0: nop  */
  /* nop: no architectural effect here */
  /* 1371b4: adr x8, #0x15dd90 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1432976)));
  /* 1371b8: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 1371bc: tbz w8, #0, #0x137224 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_137224;
L_1371c0:;
  /* 1371c0: ldr x8, [x23, #0xd88] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 23) + INT64_C(3464))));
  /* 1371c4: cmp x8, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 22));
  /* 1371c8: str x8, [x20, #8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(8)), ARC_X_R(c, 8));
  /* 1371cc: b.eq #0x1371dc */
  if (ARC_COND(c, 0)) goto L_1371dc;
  /* 1371d0: add x1, x8, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) + UINT64_C(8)));
  /* 1371d4: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 1371d8: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1274332));
  fn1_db2e0(c);
L_1371dc:;
  /* 1371dc: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 1371e0: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* 1371e4: mov w9, #4 */
  ARC_W_W(c, 9, UINT64_C(4));
  /* 1371e8: ldr x8, [x8, #0xe40] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3648))));
  /* 1371ec: str w9, [x20, #0x40] */
  arc_st32((ARC_X_R(c, 20) + INT64_C(64)), ARC_W_R(c, 9));
  /* 1371f0: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* 1371f4: str x8, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 8));
  /* 1371f8: mov w8, #0x1000 */
  ARC_W_W(c, 8, UINT64_C(4096));
  /* 1371fc: stp q0, q0, [x20, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(32));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* 137200: str q0, [x20, #0x10] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(16)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 20) + INT64_C(16)) + 8, (c)->q[0].u64[1]);
  /* 137204: stp x8, x21, [x20, #0x48] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(72));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 137208: str x19, [x20, #0x58] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(88)), ARC_X_R(c, 19));
  /* 13720c: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 137210: ldr x23, [sp, #0x10] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(16))));
  /* 137214: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 137218: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 13721c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 137220: ret  */
  return;
L_137224:;
  /* 137224: nop  */
  /* nop: no architectural effect here */
  /* 137228: adr x0, #0x15dd90 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432976)));
  /* 13722c: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1274416));
  fn1_1424b8(c);
  /* 137230: cbz w0, #0x1371c0 */
  if ((ARC_W_R(c, 0)) == 0) goto L_1371c0;
  /* 137234: bl #0x143ac0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1274424));
  fn1_143ac0(c);
  /* 137238: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 13723c: cmp x8, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 22));
  /* 137240: str x8, [x23, #0xd88] */
  arc_st64((ARC_X_R(c, 23) + INT64_C(3464)), ARC_X_R(c, 8));
  /* 137244: b.eq #0x137254 */
  if (ARC_COND(c, 0)) goto L_137254;
  /* 137248: add x1, x8, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) + UINT64_C(8)));
  /* 13724c: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 137250: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1274452));
  fn1_db2e0(c);
L_137254:;
  /* 137254: nop  */
  /* nop: no architectural effect here */
  /* 137258: adr x0, #0x15dd90 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432976)));
  /* 13725c: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1274464));
  fn1_1424d0(c);
  /* 137260: b #0x1371c0 */
  goto L_1371c0;
  /* 137264: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 137268: nop  */
  /* nop: no architectural effect here */
  /* 13726c: adr x0, #0x15dd90 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432976)));
  /* 137270: bl #0x1424e8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1274484));
  fn1_1424e8(c);
  /* 137274: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 137278: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1274492));
  fn1_a1454(c);
}

void fn1_13a9e8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039216616));
  /* 13a9e8: bti c */
  /* bti: no architectural effect here */
  /* 13a9ec: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 13a9f0: ldrb w0, [x8, #0x30] */
  ARC_W_W(c, 0, arc_ld8((ARC_X_R(c, 8) + INT64_C(48))));
  /* 13a9f4: ret  */
  return;
}

void fn1_141390(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039243664));
  /* 141390: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 141394: sub sp, sp, #0x120 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(288)));
  /* 141398: stp x29, x30, [sp, #0xf0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(240));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 14139c: stp x28, x21, [sp, #0x100] */
  { const uint64_t _pa = ((c)->sp + INT64_C(256));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1413a0: stp x20, x19, [sp, #0x110] */
  { const uint64_t _pa = ((c)->sp + INT64_C(272));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1413a4: add x29, sp, #0xf0 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(240)));
  /* 1413a8: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* 1413ac: adrp x8, #0x4f000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(323584)));
  /* 1413b0: add x8, x8, #0x813 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2067)));
  /* 1413b4: nop  */
  /* nop: no architectural effect here */
  /* 1413b8: adr x21, #0x159210 */
  ARC_X_W(c, 21, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 1413bc: nop  */
  /* nop: no architectural effect here */
  /* 1413c0: adr x20, #0x156d40 */
  ARC_X_W(c, 20, (arc_image_bases[1] + UINT64_C(1404224)));
  /* 1413c4: stp xzr, xzr, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 1413c8: stp x8, x0, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 0));
  }
  /* 1413cc: cbz x0, #0x1413e0 */
  if ((ARC_X_R(c, 0)) == 0) goto L_1413e0;
  /* 1413d0: str wzr, [x0] */
  arc_st32(ARC_X_R(c, 0), ARC_W_R(c, 31));
  /* 1413d4: ldarb w8, [x21] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 21)));
  /* 1413d8: tbz w8, #0, #0x14159c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_14159c;
L_1413dc:;
  /* 1413dc: str x20, [x0, #8] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(8)), ARC_X_R(c, 20));
L_1413e0:;
  /* 1413e0: adrp x0, #0x50000 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(327680)));
  /* 1413e4: add x0, x0, #0xcf6 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3318)));
  /* 1413e8: bl #0x1448a0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1315820));
  fn1_1448a0(c);
  /* 1413ec: cbnz x0, #0x141410 */
  if ((ARC_X_R(c, 0)) != 0) goto L_141410;
  /* 1413f0: adrp x0, #0x4f000 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(323584)));
  /* 1413f4: add x0, x0, #0xf7e */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3966)));
  /* 1413f8: bl #0x1448a0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1315836));
  fn1_1448a0(c);
  /* 1413fc: cbnz x0, #0x141410 */
  if ((ARC_X_R(c, 0)) != 0) goto L_141410;
  /* 141400: adrp x0, #0x51000 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(331776)));
  /* 141404: add x0, x0, #0xd4b */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3403)));
  /* 141408: bl #0x1448a0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1315852));
  fn1_1448a0(c);
  /* 14140c: cbz x0, #0x14155c */
  if ((ARC_X_R(c, 0)) == 0) goto L_14155c;
L_141410:;
  /* 141410: mov x1, x0 */
  ARC_X_W(c, 1, ARC_X_R(c, 0));
L_141414:;
  /* 141414: sub x2, x1, #1 */
  ARC_X_W(c, 2, (ARC_X_R(c, 1) - UINT64_C(1)));
  /* 141418: stp xzr, xzr, [sp, #0x28] */
  { const uint64_t _pa = ((c)->sp + INT64_C(40));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 14141c: str xzr, [sp, #0x38] */
  arc_st64(((c)->sp + INT64_C(56)), ARC_X_R(c, 31));
L_141420:;
  /* 141420: ldrb w8, [x2, #1]! */
  { const uint64_t _a = (ARC_X_R(c, 2) + INT64_C(1));
    ARC_X_W(c, 2, ARC_X_R(c, 2) + INT64_C(1));
    ARC_W_W(c, 8, arc_ld8(_a));
  }
  /* 141424: cbnz w8, #0x141420 */
  if ((ARC_W_R(c, 8)) != 0) goto L_141420;
  /* 141428: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* 14142c: bl #0xda784 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1315888));
  fn1_da784(c);
  /* 141430: str wzr, [sp, #0x18] */
  arc_st32(((c)->sp + INT64_C(24)), ARC_W_R(c, 31));
  /* 141434: ldarb w8, [x21] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 21)));
  /* 141438: tbz w8, #0, #0x14157c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_14157c;
L_14143c:;
  /* 14143c: ldrb w8, [sp, #0x28] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(40))));
  /* 141440: ldr x9, [sp, #0x38] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(56))));
  /* 141444: add x21, sp, #0x28 */
  ARC_X_W(c, 21, ((c)->sp + UINT64_C(40)));
  /* 141448: add x1, sp, #0x60 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(96)));
  /* 14144c: str x20, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 20));
  /* 141450: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 141454: stur wzr, [x29, #-0x10] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-16)), ARC_W_R(c, 31));
  /* 141458: csinc x0, x9, x21, ne */
  ARC_X_W(c, 0, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 21)) + 1)));
  /* 14145c: stur x20, [x29, #-8] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-8)), ARC_X_R(c, 20));
  /* 141460: bl #0x144588 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1315940));
  fn1_144588(c);
  /* 141464: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 141468: b.ne #0x141490 */
  if (ARC_COND(c, 1)) goto L_141490;
  /* 14146c: bl #0x142a58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1315952));
  fn1_142a58(c);
  /* 141470: nop  */
  /* nop: no architectural effect here */
  /* 141474: adr x8, #0x159208 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 141478: ldr w20, [x0] */
  ARC_W_W(c, 20, arc_ld32(ARC_X_R(c, 0)));
  /* 14147c: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 141480: tbz w8, #0, #0x1415d0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1415d0;
L_141484:;
  /* 141484: nop  */
  /* nop: no architectural effect here */
  /* 141488: adr x8, #0x156d38 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1404216)));
  /* 14148c: stp x20, x8, [x29, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
L_141490:;
  /* 141490: add x8, sp, #0x10 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(16)));
  /* 141494: sub x0, x29, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* 141498: add x1, sp, #0x28 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(40)));
  /* 14149c: add x2, sp, #0x60 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(96)));
  /* 1414a0: add x3, sp, #0x18 */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(24)));
  /* 1414a4: bl #0x1388e8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1316008));
  fn1_1388e8(c);
  /* 1414a8: ldrb w9, [sp, #0x10] */
  ARC_W_W(c, 9, arc_ld8(((c)->sp + INT64_C(16))));
  /* 1414ac: cmp w9, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(2));
  /* 1414b0: b.eq #0x1414e8 */
  if (ARC_COND(c, 0)) goto L_1414e8;
  /* 1414b4: orr x8, x21, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 21) | UINT64_C(1)));
  /* 1414b8: cbnz w9, #0x141504 */
  if ((ARC_W_R(c, 9)) != 0) goto L_141504;
  /* 1414bc: ldrb w9, [sp, #0x28] */
  ARC_W_W(c, 9, arc_ld8(((c)->sp + INT64_C(40))));
  /* 1414c0: ldr x10, [sp, #0x38] */
  ARC_X_W(c, 10, arc_ld64(((c)->sp + INT64_C(56))));
  /* 1414c4: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* 1414c8: csel x3, x8, x10, eq */
  ARC_X_W(c, 3, (ARC_COND(c, 0) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 10)));
  /* 1414cc: adrp x2, #0x4f000 */
  ARC_X_W(c, 2, (arc_image_bases[1] + UINT64_C(323584)));
  /* 1414d0: add x2, x2, #0x827 */
  ARC_X_W(c, 2, (ARC_X_R(c, 2) + UINT64_C(2087)));
  /* 1414d4: add x0, sp, #0x40 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(64)));
  /* 1414d8: add x1, sp, #0x18 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(24)));
  /* 1414dc: mov x8, x19 */
  ARC_X_W(c, 8, ARC_X_R(c, 19));
  /* 1414e0: bl #0x13f24c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1316068));
  fn1_13f24c(c);
  /* 1414e4: b #0x14152c */
  goto L_14152c;
L_1414e8:;
  /* 1414e8: ldur q0, [sp, #0x28] */
  arc_q_w(c, 0, arc_ld64(((c)->sp + INT64_C(40))), arc_ld64(((c)->sp + INT64_C(40)) + 8));
  /* 1414ec: ldr x8, [sp, #0x38] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(56))));
  /* 1414f0: stp xzr, xzr, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 1414f4: str xzr, [sp, #0x28] */
  arc_st64(((c)->sp + INT64_C(40)), ARC_X_R(c, 31));
  /* 1414f8: str q0, [x19] */
  arc_st64(ARC_X_R(c, 19), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 19) + 8, (c)->q[0].u64[1]);
  /* 1414fc: str x8, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 8));
  /* 141500: b #0x14152c */
  goto L_14152c;
L_141504:;
  /* 141504: ldrb w9, [sp, #0x28] */
  ARC_W_W(c, 9, arc_ld8(((c)->sp + INT64_C(40))));
  /* 141508: ldr x10, [sp, #0x38] */
  ARC_X_W(c, 10, arc_ld64(((c)->sp + INT64_C(56))));
  /* 14150c: mov w11, #0x14 */
  ARC_W_W(c, 11, UINT64_C(20));
  /* 141510: str w11, [sp, #0x60] */
  arc_st32(((c)->sp + INT64_C(96)), ARC_W_R(c, 11));
  /* 141514: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* 141518: csel x3, x8, x10, eq */
  ARC_X_W(c, 3, (ARC_COND(c, 0) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 10)));
  /* 14151c: add x0, sp, #0x40 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(64)));
  /* 141520: add x1, sp, #0x60 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(96)));
  /* 141524: mov x8, x19 */
  ARC_X_W(c, 8, ARC_X_R(c, 19));
  /* 141528: bl #0x141620 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1316140));
  fn1_141620(c);
L_14152c:;
  /* 14152c: ldrb w8, [sp, #0x28] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(40))));
  /* 141530: tbz w8, #0, #0x141544 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_141544;
  /* 141534: ldr x8, [sp, #0x28] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(40))));
  /* 141538: ldr x0, [sp, #0x38] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(56))));
  /* 14153c: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 141540: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1316164));
  fn1_142608(c);
L_141544:;
  /* 141544: ldp x20, x19, [sp, #0x110] */
  { const uint64_t _pa = ((c)->sp + INT64_C(272));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 141548: ldp x28, x21, [sp, #0x100] */
  { const uint64_t _pa = ((c)->sp + INT64_C(256));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 14154c: ldp x29, x30, [sp, #0xf0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(240));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 141550: add sp, sp, #0x120 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(288)));
  /* 141554: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 141558: ret  */
  return;
L_14155c:;
  /* 14155c: adrp x0, #0x51000 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(331776)));
  /* 141560: add x0, x0, #0xc28 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3112)));
  /* 141564: bl #0x1448a0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1316200));
  fn1_1448a0(c);
  /* 141568: cmp x0, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 0), UINT64_C(0));
  /* 14156c: adrp x8, #0x50000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(327680)));
  /* 141570: add x8, x8, #0x236 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(566)));
  /* 141574: csel x1, x8, x0, eq */
  ARC_X_W(c, 1, (ARC_COND(c, 0) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 0)));
  /* 141578: b #0x141414 */
  goto L_141414;
L_14157c:;
  /* 14157c: nop  */
  /* nop: no architectural effect here */
  /* 141580: adr x0, #0x159210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 141584: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1316232));
  fn1_1424b8(c);
  /* 141588: cbz w0, #0x14143c */
  if ((ARC_W_R(c, 0)) == 0) goto L_14143c;
  /* 14158c: nop  */
  /* nop: no architectural effect here */
  /* 141590: adr x0, #0x159210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 141594: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1316248));
  fn1_1424d0(c);
  /* 141598: b #0x14143c */
  goto L_14143c;
L_14159c:;
  /* 14159c: nop  */
  /* nop: no architectural effect here */
  /* 1415a0: adr x8, #0x159210 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 1415a4: str x0, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 0));
  /* 1415a8: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1415ac: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1316272));
  fn1_1424b8(c);
  /* 1415b0: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 1415b4: ldr x0, [sp, #8] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(8))));
  /* 1415b8: cbz w8, #0x1413dc */
  if ((ARC_W_R(c, 8)) == 0) goto L_1413dc;
  /* 1415bc: nop  */
  /* nop: no architectural effect here */
  /* 1415c0: adr x0, #0x159210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 1415c4: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1316296));
  fn1_1424d0(c);
  /* 1415c8: ldr x0, [sp, #8] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(8))));
  /* 1415cc: b #0x1413dc */
  goto L_1413dc;
L_1415d0:;
  /* 1415d0: nop  */
  /* nop: no architectural effect here */
  /* 1415d4: adr x0, #0x159208 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 1415d8: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1316316));
  fn1_1424b8(c);
  /* 1415dc: cbz w0, #0x141484 */
  if ((ARC_W_R(c, 0)) == 0) goto L_141484;
  /* 1415e0: nop  */
  /* nop: no architectural effect here */
  /* 1415e4: adr x0, #0x159208 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 1415e8: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1316332));
  fn1_1424d0(c);
  /* 1415ec: b #0x141484 */
  goto L_141484;
  /* 1415f0: b #0x1415fc */
  goto L_1415fc;
  /* 1415f4: b #0x1415fc */
  goto L_1415fc;
  /* 1415f8: b #0x1415fc */
  goto L_1415fc;
L_1415fc:;
  /* 1415fc: ldrb w8, [sp, #0x28] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(40))));
  /* 141600: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 141604: tbz w8, #0, #0x141618 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_141618;
  /* 141608: ldr x8, [sp, #0x28] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(40))));
  /* 14160c: ldr x0, [sp, #0x38] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(56))));
  /* 141610: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 141614: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1316376));
  fn1_142608(c);
L_141618:;
  /* 141618: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 14161c: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1316384));
  fn1_9cc20(c);
}

void fn1_1428c0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039249088));
  /* 1428c0: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 1428c4: ldr x17, [x16, #0x20] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(32))));
  /* 1428c8: add x16, x16, #0x20 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(32)));
  /* 1428cc: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 1428d0: nop  */
  /* nop: no architectural effect here */
  /* 1428d4: nop  */
  /* nop: no architectural effect here */
}

void fn1_142ec0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039250624));
  /* 142ec0: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 142ec4: ldr x17, [x16, #0x220] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(544))));
  /* 142ec8: add x16, x16, #0x220 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(544)));
  /* 142ecc: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 142ed0: nop  */
  /* nop: no architectural effect here */
  /* 142ed4: nop  */
  /* nop: no architectural effect here */
}

void fn1_1434c0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039252160));
  /* 1434c0: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 1434c4: ldr x17, [x16, #0x420] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(1056))));
  /* 1434c8: add x16, x16, #0x420 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(1056)));
  /* 1434cc: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 1434d0: nop  */
  /* nop: no architectural effect here */
  /* 1434d4: nop  */
  /* nop: no architectural effect here */
}

void fn1_143ac0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039253696));
  /* 143ac0: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 143ac4: ldr x17, [x16, #0x620] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(1568))));
  /* 143ac8: add x16, x16, #0x620 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(1568)));
  /* 143acc: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 143ad0: nop  */
  /* nop: no architectural effect here */
  /* 143ad4: nop  */
  /* nop: no architectural effect here */
}

void fn1_1440c0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039255232));
  /* 1440c0: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 1440c4: ldr x17, [x16, #0x820] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(2080))));
  /* 1440c8: add x16, x16, #0x820 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(2080)));
  /* 1440cc: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 1440d0: nop  */
  /* nop: no architectural effect here */
  /* 1440d4: nop  */
  /* nop: no architectural effect here */
}

void fn1_1446c0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039256768));
  /* 1446c0: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 1446c4: ldr x17, [x16, #0xa20] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(2592))));
  /* 1446c8: add x16, x16, #0xa20 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(2592)));
  /* 1446cc: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 1446d0: nop  */
  /* nop: no architectural effect here */
  /* 1446d4: nop  */
  /* nop: no architectural effect here */
}

