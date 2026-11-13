#include "lifted.h"

void fn1_9d7c8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038573000));
  /* 9d7c8: bti c */
  /* bti: no architectural effect here */
  /* 9d7cc: and w8, w1, #0xffffffe0 */
  ARC_W_W(c, 8, (ARC_W_R(c, 1) & UINT64_C(4294967264)));
  /* 9d7d0: cmp w8, #0x40 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(64));
  /* 9d7d4: cset w0, eq */
  ARC_W_W(c, 0, (ARC_COND(c, 0) ? 1 : 0));
  /* 9d7d8: ret  */
  return;
}

void fn1_a1e84(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038591108));
  /* a1e84: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* a1e88: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* a1e8c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* a1e90: mov w0, #8 */
  ARC_W_W(c, 0, UINT64_C(8));
  /* a1e94: bl #0x142410 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(663192));
  fn1_142410(c);
  /* a1e98: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* a1e9c: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* a1ea0: adrp x2, #0x151000 */
  ARC_X_W(c, 2, (arc_image_bases[1] + UINT64_C(1380352)));
  /* a1ea4: ldr x8, [x8, #0x8d8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2264))));
  /* a1ea8: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* a1eac: str x8, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* a1eb0: ldr x1, [x1, #0x8a8] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(2216))));
  /* a1eb4: ldr x2, [x2, #0x890] */
  ARC_X_W(c, 2, arc_ld64((ARC_X_R(c, 2) + INT64_C(2192))));
  /* a1eb8: bl #0x142440 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(663228));
  fn1_142440(c);
}

void fn1_a2ee0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038595296));
  /* a2ee0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* a2ee4: sub sp, sp, #0xa0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(160)));
  /* a2ee8: stp x29, x30, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* a2eec: str x23, [sp, #0x70] */
  arc_st64(((c)->sp + INT64_C(112)), ARC_X_R(c, 23));
  /* a2ef0: stp x22, x21, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* a2ef4: stp x20, x19, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* a2ef8: add x29, sp, #0x60 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(96)));
  /* a2efc: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* a2f00: ldr x22, [x1, #8] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 1) + INT64_C(8))));
  /* a2f04: mov x19, x2 */
  ARC_X_W(c, 19, ARC_X_R(c, 2));
  /* a2f08: ldr x8, [x8, #0x9e0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2528))));
  /* a2f0c: cmp x22, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 8));
  /* a2f10: b.eq #0xa2f58 */
  if (ARC_COND(c, 0)) goto L_a2f58;
  /* a2f14: ldr w23, [x0, #0x10] */
  ARC_W_W(c, 23, arc_ld32((ARC_X_R(c, 0) + INT64_C(16))));
  /* a2f18: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* a2f1c: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* a2f20: tst w23, #0x18 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 23) & UINT64_C(24)));
  /* a2f24: b.eq #0xa2f64 */
  if (ARC_COND(c, 0)) goto L_a2f64;
L_a2f28:;
  /* a2f28: cmp x21, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 20));
  /* a2f2c: b.eq #0xa2f40 */
  if (ARC_COND(c, 0)) goto L_a2f40;
  /* a2f30: ldr x0, [x21, #8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 21) + INT64_C(8))));
  /* a2f34: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* a2f38: bl #0x142848 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(667452));
  fn1_142848(c);
  /* a2f3c: cbnz w0, #0xa2f9c */
  if ((ARC_W_R(c, 0)) != 0) goto L_a2f9c;
L_a2f40:;
  /* a2f40: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* a2f44: cbz x8, #0xa3064 */
  if ((ARC_X_R(c, 8)) == 0) goto L_a3064;
  /* a2f48: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* a2f4c: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* a2f50: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* a2f54: b #0xa3068 */
  goto L_a3068;
L_a2f58:;
  /* a2f58: str xzr, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 31));
  /* a2f5c: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* a2f60: b #0xa3068 */
  goto L_a3068;
L_a2f64:;
  /* a2f64: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* a2f68: adrp x2, #0x151000 */
  ARC_X_W(c, 2, (arc_image_bases[1] + UINT64_C(1380352)));
  /* a2f6c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* a2f70: ldr x1, [x1, #0x9a8] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(2472))));
  /* a2f74: ldr x2, [x2, #0x9b8] */
  ARC_X_W(c, 2, arc_ld64((ARC_X_R(c, 2) + INT64_C(2488))));
  /* a2f78: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* a2f7c: bl #0x142830 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(667520));
  fn1_142830(c);
  /* a2f80: cbz x0, #0xa2f9c */
  if ((ARC_X_R(c, 0)) == 0) goto L_a2f9c;
  /* a2f84: ldrb w8, [x0, #0x10] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 0) + INT64_C(16))));
  /* a2f88: tst w8, #0x18 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(24)));
  /* a2f8c: b.ne #0xa2f28 */
  if (ARC_COND(c, 1)) goto L_a2f28;
  /* a2f90: ldr x8, [x21, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 21) + INT64_C(8))));
  /* a2f94: cmp x8, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 22));
  /* a2f98: b.eq #0xa2f40 */
  if (ARC_COND(c, 0)) goto L_a2f40;
L_a2f9c:;
  /* a2f9c: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* a2fa0: adrp x2, #0x151000 */
  ARC_X_W(c, 2, (arc_image_bases[1] + UINT64_C(1380352)));
  /* a2fa4: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* a2fa8: ldr x1, [x1, #0x9a8] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(2472))));
  /* a2fac: ldr x2, [x2, #0x9c0] */
  ARC_X_W(c, 2, arc_ld64((ARC_X_R(c, 2) + INT64_C(2496))));
  /* a2fb0: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* a2fb4: bl #0x142830 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(667576));
  fn1_142830(c);
  /* a2fb8: cbz x0, #0xa3068 */
  if ((ARC_X_R(c, 0)) == 0) goto L_a3068;
  /* a2fbc: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* a2fc0: cbz x8, #0xa2fd0 */
  if ((ARC_X_R(c, 8)) == 0) goto L_a2fd0;
  /* a2fc4: ldr x20, [x8] */
  ARC_X_W(c, 20, arc_ld64(ARC_X_R(c, 8)));
  /* a2fc8: str x20, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 20));
  /* a2fcc: b #0xa2fd4 */
  goto L_a2fd4;
L_a2fd0:;
  /* a2fd0: mov x20, xzr */
  ARC_X_W(c, 20, ARC_X_R(c, 31));
L_a2fd4:;
  /* a2fd4: ldr w8, [x0, #0x10] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 0) + INT64_C(16))));
  /* a2fd8: bic w9, w8, w23 */
  ARC_W_W(c, 9, (ARC_W_R(c, 8) & (~ARC_W_R(c, 23))));
  /* a2fdc: tst w9, #7 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(7)));
  /* a2fe0: b.ne #0xa2ff0 */
  if (ARC_COND(c, 1)) goto L_a2ff0;
  /* a2fe4: bic w8, w23, w8 */
  ARC_W_W(c, 8, (ARC_W_R(c, 23) & (~ARC_W_R(c, 8))));
  /* a2fe8: tst w8, #0x60 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(96)));
  /* a2fec: b.eq #0xa2ff8 */
  if (ARC_COND(c, 0)) goto L_a2ff8;
L_a2ff0:;
  /* a2ff0: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* a2ff4: b #0xa3068 */
  goto L_a3068;
L_a2ff8:;
  /* a2ff8: ldr x22, [x21, #0x18] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 21) + INT64_C(24))));
  /* a2ffc: ldr x21, [x0, #0x18] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 0) + INT64_C(24))));
  /* a3000: ldr x8, [x22, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 22) + INT64_C(8))));
  /* a3004: ldr x9, [x21, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 21) + INT64_C(8))));
  /* a3008: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* a300c: b.eq #0xa3064 */
  if (ARC_COND(c, 0)) goto L_a3064;
  /* a3010: adrp x9, #0x151000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1380352)));
  /* a3014: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* a3018: ldr x9, [x9, #0x9d8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(2520))));
  /* a301c: ldr x1, [x1, #0x9a8] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(2472))));
  /* a3020: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* a3024: b.eq #0xa3084 */
  if (ARC_COND(c, 0)) goto L_a3084;
  /* a3028: adrp x2, #0x151000 */
  ARC_X_W(c, 2, (arc_image_bases[1] + UINT64_C(1380352)));
  /* a302c: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* a3030: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* a3034: ldr x2, [x2, #0x9c0] */
  ARC_X_W(c, 2, arc_ld64((ARC_X_R(c, 2) + INT64_C(2496))));
  /* a3038: bl #0x142830 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(667708));
  fn1_142830(c);
  /* a303c: cbz x0, #0xa30a4 */
  if ((ARC_X_R(c, 0)) == 0) goto L_a30a4;
  /* a3040: tbz w23, #0, #0xa2ff0 */
  if (((ARC_W_R(c, 23)) >> 0 & 1) == 0) goto L_a2ff0;
  /* a3044: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* a3048: ldp x20, x19, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* a304c: ldr x23, [sp, #0x70] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(112))));
  /* a3050: ldp x22, x21, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* a3054: ldp x29, x30, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* a3058: add sp, sp, #0xa0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(160)));
  /* a305c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* a3060: b #0xa319c */
  fn1_a319c(c); return;
L_a3064:;
  /* a3064: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
L_a3068:;
  /* a3068: ldp x20, x19, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* a306c: ldr x23, [sp, #0x70] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(112))));
  /* a3070: ldp x22, x21, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* a3074: ldp x29, x30, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* a3078: add sp, sp, #0xa0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(160)));
  /* a307c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* a3080: ret  */
  return;
L_a3084:;
  /* a3084: adrp x2, #0x151000 */
  ARC_X_W(c, 2, (arc_image_bases[1] + UINT64_C(1380352)));
  /* a3088: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* a308c: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* a3090: ldr x2, [x2, #0x9c8] */
  ARC_X_W(c, 2, arc_ld64((ARC_X_R(c, 2) + INT64_C(2504))));
  /* a3094: bl #0x142830 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(667800));
  fn1_142830(c);
  /* a3098: cmp x0, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 0), UINT64_C(0));
  /* a309c: cset w0, eq */
  ARC_W_W(c, 0, (ARC_COND(c, 0) ? 1 : 0));
  /* a30a0: b #0xa3068 */
  goto L_a3068;
L_a30a4:;
  /* a30a4: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* a30a8: adrp x2, #0x151000 */
  ARC_X_W(c, 2, (arc_image_bases[1] + UINT64_C(1380352)));
  /* a30ac: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* a30b0: ldr x1, [x1, #0x9a8] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(2472))));
  /* a30b4: ldr x2, [x2, #0x9d0] */
  ARC_X_W(c, 2, arc_ld64((ARC_X_R(c, 2) + INT64_C(2512))));
  /* a30b8: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* a30bc: bl #0x142830 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(667840));
  fn1_142830(c);
  /* a30c0: cbz x0, #0xa30e8 */
  if ((ARC_X_R(c, 0)) == 0) goto L_a30e8;
  /* a30c4: tbz w23, #0, #0xa2ff0 */
  if (((ARC_W_R(c, 23)) >> 0 & 1) == 0) goto L_a2ff0;
  /* a30c8: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* a30cc: ldp x20, x19, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* a30d0: ldr x23, [sp, #0x70] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(112))));
  /* a30d4: ldp x22, x21, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* a30d8: ldp x29, x30, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* a30dc: add sp, sp, #0xa0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(160)));
  /* a30e0: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* a30e4: b #0xa32dc */
  fn1_a32dc(c); return;
L_a30e8:;
  /* a30e8: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* a30ec: adrp x2, #0x151000 */
  ARC_X_W(c, 2, (arc_image_bases[1] + UINT64_C(1380352)));
  /* a30f0: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* a30f4: ldr x1, [x1, #0x9a8] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(2472))));
  /* a30f8: ldr x2, [x2, #0x9b0] */
  ARC_X_W(c, 2, arc_ld64((ARC_X_R(c, 2) + INT64_C(2480))));
  /* a30fc: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* a3100: bl #0x142830 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(667908));
  fn1_142830(c);
  /* a3104: cbz x0, #0xa3068 */
  if ((ARC_X_R(c, 0)) == 0) goto L_a3068;
  /* a3108: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* a310c: adrp x2, #0x151000 */
  ARC_X_W(c, 2, (arc_image_bases[1] + UINT64_C(1380352)));
  /* a3110: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* a3114: ldr x1, [x1, #0x9a8] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(2472))));
  /* a3118: ldr x2, [x2, #0x9b0] */
  ARC_X_W(c, 2, arc_ld64((ARC_X_R(c, 2) + INT64_C(2480))));
  /* a311c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* a3120: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* a3124: bl #0x142830 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(667944));
  fn1_142830(c);
  /* a3128: cbz x0, #0xa3068 */
  if ((ARC_X_R(c, 0)) == 0) goto L_a3068;
  /* a312c: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* a3130: cmp x20, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 20), UINT64_C(0));
  /* a3134: str xzr, [sp, #0x58] */
  arc_st64(((c)->sp + INT64_C(88)), ARC_X_R(c, 31));
  /* a3138: cset w8, ne */
  ARC_W_W(c, 8, (ARC_COND(c, 1) ? 1 : 0));
  /* a313c: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* a3140: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* a3144: strb w8, [sp, #0x57] */
  arc_st8(((c)->sp + INT64_C(87)), ARC_W_R(c, 8));
  /* a3148: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* a314c: mov w3, #1 */
  ARC_W_W(c, 3, UINT64_C(1));
  /* a3150: stp x0, xzr, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 0));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* a3154: stur q0, [sp, #0x47] */
  arc_st64(((c)->sp + INT64_C(71)), (c)->q[0].u64[0]);
  arc_st64(((c)->sp + INT64_C(71)) + 8, (c)->q[0].u64[1]);
  /* a3158: stur q0, [sp, #0x28] */
  arc_st64(((c)->sp + INT64_C(40)), (c)->q[0].u64[0]);
  arc_st64(((c)->sp + INT64_C(40)) + 8, (c)->q[0].u64[1]);
  /* a315c: stur q0, [sp, #0x38] */
  arc_st64(((c)->sp + INT64_C(56)), (c)->q[0].u64[0]);
  arc_st64(((c)->sp + INT64_C(56)) + 8, (c)->q[0].u64[1]);
  /* a3160: ldr x9, [x0] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 0)));
  /* a3164: str w8, [sp, #0x50] */
  arc_st32(((c)->sp + INT64_C(80)), ARC_W_R(c, 8));
  /* a3168: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* a316c: stp x22, x8, [sp, #0x18] */
  { const uint64_t _pa = ((c)->sp + INT64_C(24));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* a3170: ldr x9, [x9, #0x38] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(56))));
  /* a3174: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(668024));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* a3178: ldr w8, [sp, #0x38] */
  ARC_W_W(c, 8, arc_ld32(((c)->sp + INT64_C(56))));
  /* a317c: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* a3180: cset w0, eq */
  ARC_W_W(c, 0, (ARC_COND(c, 0) ? 1 : 0));
  /* a3184: b.ne #0xa3068 */
  if (ARC_COND(c, 1)) goto L_a3068;
  /* a3188: ldr x8, [sp, #0x28] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(40))));
  /* a318c: cmp x20, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 20), UINT64_C(0));
  /* a3190: csel x8, x8, xzr, ne */
  ARC_X_W(c, 8, (ARC_COND(c, 1) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 31)));
  /* a3194: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* a3198: b #0xa3068 */
  goto L_a3068;
}

void fn1_aa290(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038624912));
  /* aa290: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* aa294: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* aa298: str x23, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 23));
  /* aa29c: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* aa2a0: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* aa2a4: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* aa2a8: ldp x21, x8, [x0, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(8));
    ARC_X_W(c, 21, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* aa2ac: cmp x21, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 8));
  /* aa2b0: b.ne #0xaa33c */
  if (ARC_COND(c, 1)) goto L_aa33c;
  /* aa2b4: mov x8, x0 */
  ARC_X_W(c, 8, ARC_X_R(c, 0));
  /* aa2b8: mov x22, x1 */
  ARC_X_W(c, 22, ARC_X_R(c, 1));
  /* aa2bc: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* aa2c0: ldr x20, [x8], #0x18 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(24));
    ARC_X_W(c, 20, arc_ld64(_a));
  }
  /* aa2c4: sub x19, x21, x20 */
  ARC_X_W(c, 19, (ARC_X_R(c, 21) - ARC_X_R(c, 20)));
  /* aa2c8: cmp x20, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 8));
  /* aa2cc: lsl x1, x19, #1 */
  ARC_X_W(c, 1, ((uint64_t)(ARC_X_R(c, 19)) << ((UINT64_C(1)) & 63)));
  /* aa2d0: b.eq #0xaa2f0 */
  if (ARC_COND(c, 0)) goto L_aa2f0;
  /* aa2d4: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* aa2d8: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(697052));
  fn1_142878(c);
  /* aa2dc: mov x8, x0 */
  ARC_X_W(c, 8, ARC_X_R(c, 0));
  /* aa2e0: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* aa2e4: str x8, [x23] */
  arc_st64(ARC_X_R(c, 23), ARC_X_R(c, 8));
  /* aa2e8: cbnz x8, #0xaa328 */
  if ((ARC_X_R(c, 8)) != 0) goto L_aa328;
  /* aa2ec: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(697072));
  fn1_1427b8(c);
L_aa2f0:;
  /* aa2f0: mov x0, x1 */
  ARC_X_W(c, 0, ARC_X_R(c, 1));
  /* aa2f4: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(697080));
  fn1_1428a8(c);
  /* aa2f8: cbz x0, #0xaa360 */
  if ((ARC_X_R(c, 0)) == 0) goto L_aa360;
  /* aa2fc: mov x8, x0 */
  ARC_X_W(c, 8, ARC_X_R(c, 0));
  /* aa300: cmp x21, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 20));
  /* aa304: b.eq #0xaa320 */
  if (ARC_COND(c, 0)) goto L_aa320;
  /* aa308: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* aa30c: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* aa310: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* aa314: mov x21, x8 */
  ARC_X_W(c, 21, ARC_X_R(c, 8));
  /* aa318: bl #0x1449f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(697116));
  fn1_1449f0(c);
  /* aa31c: mov x8, x21 */
  ARC_X_W(c, 8, ARC_X_R(c, 21));
L_aa320:;
  /* aa320: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* aa324: str x8, [x23] */
  arc_st64(ARC_X_R(c, 23), ARC_X_R(c, 8));
L_aa328:;
  /* aa328: asr x9, x19, #2 */
  ARC_X_W(c, 9, ((uint64_t)((int64_t)(ARC_X_R(c, 19)) >> ((UINT64_C(2)) & 63))));
  /* aa32c: add x21, x8, x19 */
  ARC_X_W(c, 21, (ARC_X_R(c, 8) + ARC_X_R(c, 19)));
  /* aa330: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* aa334: add x9, x8, x9, lsl #3 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3)));
  /* aa338: str x9, [x0, #0x10] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(16)), ARC_X_R(c, 9));
L_aa33c:;
  /* aa33c: ldr x8, [x1] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 1)));
  /* aa340: str x8, [x21], #8 */
  { const uint64_t _a = ARC_X_R(c, 21);
    ARC_X_W(c, 21, ARC_X_R(c, 21) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* aa344: str x21, [x0, #8] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(8)), ARC_X_R(c, 21));
  /* aa348: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* aa34c: ldr x23, [sp, #0x10] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(16))));
  /* aa350: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* aa354: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* aa358: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* aa35c: ret  */
  return;
L_aa360:;
  /* aa360: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(697188));
  fn1_1427b8(c);
}

void fn1_b0ec4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038652612));
  /* b0ec4: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* b0ec8: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b0ecc: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* b0ed0: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* b0ed4: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* b0ed8: ldr x21, [x0, #0x1330] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 0) + INT64_C(4912))));
  /* b0edc: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* b0ee0: ldr x8, [x21, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 21) + INT64_C(8))));
  /* b0ee4: sub x9, x8, #0xfd0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4048)));
  /* b0ee8: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* b0eec: b.hi #0xb0f10 */
  if (ARC_COND(c, 8)) goto L_b0f10;
  /* b0ef0: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* b0ef4: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* b0ef8: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(724732));
  fn1_1428a8(c);
  /* b0efc: cbz x0, #0xb0f6c */
  if ((ARC_X_R(c, 0)) == 0) goto L_b0f6c;
  /* b0f00: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* b0f04: stp x21, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 21));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* b0f08: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* b0f0c: str x0, [x20, #0x1330] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(4912)), ARC_X_R(c, 0));
L_b0f10:;
  /* b0f10: add x9, x8, #0x20 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(32)));
  /* b0f14: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* b0f18: add x20, x21, x8 */
  ARC_X_W(c, 20, (ARC_X_R(c, 21) + ARC_X_R(c, 8)));
  /* b0f1c: str x9, [x21, #8] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(8)), ARC_X_R(c, 9));
  /* b0f20: bl #0x142860 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(724772));
  fn1_142860(c);
  /* b0f24: adrp x9, #0x149000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1347584)));
  /* b0f28: add x9, x9, #0xc10 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(3088)));
  /* b0f2c: mov w11, #0x540 */
  ARC_W_W(c, 11, UINT64_C(1344));
  /* b0f30: str x9, [x20, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 20) + INT64_C(16));
    ARC_X_W(c, 20, ARC_X_R(c, 20) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 9));
  }
  /* b0f34: ldurh w9, [x20, #9] */
  ARC_W_W(c, 9, arc_ld16((ARC_X_R(c, 20) + INT64_C(9))));
  /* b0f38: mov x8, x0 */
  ARC_X_W(c, 8, ARC_X_R(c, 0));
  /* b0f3c: mov w10, #8 */
  ARC_W_W(c, 10, UINT64_C(8));
  /* b0f40: and w9, w9, #0xf000 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) & UINT64_C(61440)));
  /* b0f44: strb w10, [x20, #8] */
  arc_st8((ARC_X_R(c, 20) + INT64_C(8)), ARC_W_R(c, 10));
  /* b0f48: orr w9, w9, w11 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | ARC_W_R(c, 11)));
  /* b0f4c: stp x19, x8, [x20, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 19));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* b0f50: sturh w9, [x20, #9] */
  arc_st16((ARC_X_R(c, 20) + INT64_C(9)), ARC_W_R(c, 9));
  /* b0f54: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* b0f58: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* b0f5c: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* b0f60: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b0f64: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* b0f68: ret  */
  return;
L_b0f6c:;
  /* b0f6c: bl #0x142488 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(724848));
  fn1_142488(c);
}

void fn1_b57bc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038671292));
  /* b57bc: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* b57c0: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b57c4: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* b57c8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* b57cc: ldp x9, x10, [x1, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 1) + INT64_C(8));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* b57d0: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* b57d4: ldr x8, [x1] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 1)));
  /* b57d8: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* b57dc: add x11, x9, #0xa */
  ARC_X_W(c, 11, (ARC_X_R(c, 9) + UINT64_C(10)));
  /* b57e0: cmp x11, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 10));
  /* b57e4: b.ls #0xb5814 */
  if (ARC_COND(c, 9)) goto L_b5814;
  /* b57e8: lsl x10, x10, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* b57ec: add x9, x9, #0x3ea */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(1002)));
  /* b57f0: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* b57f4: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* b57f8: csel x1, x10, x9, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* b57fc: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b5800: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(743428));
  fn1_142878(c);
  /* b5804: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b5808: cbz x0, #0xb58d0 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b58d0;
  /* b580c: ldr x9, [x19, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b5810: mov x8, x0 */
  ARC_X_W(c, 8, ARC_X_R(c, 0));
L_b5814:;
  /* b5814: adrp x10, #0x51000 */
  ARC_X_W(c, 10, (arc_image_bases[1] + UINT64_C(331776)));
  /* b5818: add x10, x10, #0xced */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(3309)));
  /* b581c: add x8, x8, x9 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + ARC_X_R(c, 9)));
  /* b5820: ldr x10, [x10] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 10)));
  /* b5824: mov w9, #0x2065 */
  ARC_W_W(c, 9, UINT64_C(8293));
  /* b5828: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* b582c: strh w9, [x8, #8] */
  arc_st16((ARC_X_R(c, 8) + INT64_C(8)), ARC_W_R(c, 9));
  /* b5830: str x10, [x8] */
  arc_st64(ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* b5834: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b5838: ldr x20, [x20, #0x10] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 20) + INT64_C(16))));
  /* b583c: add x8, x8, #0xa */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(10)));
  /* b5840: ldr x9, [x20] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 20)));
  /* b5844: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* b5848: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
  /* b584c: ldr x8, [x9, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(32))));
  /* b5850: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(743508));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* b5854: ldurh w8, [x20, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 20) + INT64_C(9))));
  /* b5858: and w8, w8, #0xc0 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(192)));
  /* b585c: cmp w8, #0x40 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(64));
  /* b5860: b.eq #0xb5878 */
  if (ARC_COND(c, 0)) goto L_b5878;
  /* b5864: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* b5868: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* b586c: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* b5870: ldr x8, [x8, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* b5874: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(743544));
  arc_dispatch(c, ARC_X_R(c, 8));
L_b5878:;
  /* b5878: ldp x8, x10, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* b587c: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* b5880: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* b5884: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* b5888: b.ls #0xb58b4 */
  if (ARC_COND(c, 9)) goto L_b58b4;
  /* b588c: lsl x9, x10, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* b5890: add x8, x8, #0x3e1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(993)));
  /* b5894: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* b5898: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* b589c: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b58a0: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(743588));
  fn1_142878(c);
  /* b58a4: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b58a8: cbz x0, #0xb58d4 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b58d4;
  /* b58ac: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b58b0: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
L_b58b4:;
  /* b58b4: str x9, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 9));
  /* b58b8: mov w9, #0x3b */
  ARC_W_W(c, 9, UINT64_C(59));
  /* b58bc: strb w9, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
  /* b58c0: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* b58c4: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b58c8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* b58cc: ret  */
  return;
L_b58d0:;
  /* b58d0: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(743636));
  fn1_1427b8(c);
L_b58d4:;
  /* b58d4: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(743640));
  fn1_1427b8(c);
}

void fn1_b82c8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038682312));
  /* b82c8: bti c */
  /* bti: no architectural effect here */
  /* b82cc: ldr w8, [x1, #0x1c] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 1) + INT64_C(28))));
  /* b82d0: cmn w8, #1 */
  (void)arc_add32(c, ARC_W_R(c, 8), UINT64_C(1), 0);
  /* b82d4: b.eq #0xb82fc */
  if (ARC_COND(c, 0)) goto L_b82fc;
  /* b82d8: ldr w8, [x1, #0x18] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 1) + INT64_C(24))));
  /* b82dc: ldr x9, [x0, #0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(24))));
  /* b82e0: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* b82e4: b.ls #0xb8310 */
  if (ARC_COND(c, 9)) goto L_b8310;
L_b82e8:;
  /* b82e8: ldr x9, [x0, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* b82ec: ldr x0, [x9, x8, lsl #3] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 9) + ((uint64_t)(ARC_X_R(c, 8)) << 3))));
  /* b82f0: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* b82f4: ldr x16, [x8, #0x28] */
  ARC_X_W(c, 16, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* b82f8: br x16 */
  arc_dispatch(c, ARC_X_R(c, 16)); return;
L_b82fc:;
  /* b82fc: ldr x9, [x0, #0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(24))));
  /* b8300: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* b8304: stp wzr, w9, [x1, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 1) + INT64_C(24));
    arc_st32(_pa, ARC_W_R(c, 31));
    arc_st32(_pa + 4, ARC_W_R(c, 9));
  }
  /* b8308: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* b830c: b.hi #0xb82e8 */
  if (ARC_COND(c, 8)) goto L_b82e8;
L_b8310:;
  /* b8310: ret  */
  return;
}

void fn1_bb578(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038695288));
  /* bb578: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* bb57c: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* bb580: stp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* bb584: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* bb588: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* bb58c: ldr x21, [x0, #0x18] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 0) + INT64_C(24))));
  /* bb590: ldr x8, [x1, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 1) + INT64_C(8))));
  /* bb594: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* bb598: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* bb59c: cbz x21, #0xbb5f8 */
  if ((ARC_X_R(c, 21)) == 0) goto L_bb5f8;
  /* bb5a0: ldr x10, [x19, #0x10] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* bb5a4: add x9, x8, x21 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + ARC_X_R(c, 21)));
  /* bb5a8: ldr x22, [x20, #0x10] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 20) + INT64_C(16))));
  /* bb5ac: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* bb5b0: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* bb5b4: b.ls #0xbb5dc */
  if (ARC_COND(c, 9)) goto L_bb5dc;
  /* bb5b8: lsl x8, x10, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* bb5bc: add x9, x9, #0x3e0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(992)));
  /* bb5c0: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* bb5c4: csel x1, x8, x9, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* bb5c8: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* bb5cc: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(767440));
  fn1_142878(c);
  /* bb5d0: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* bb5d4: cbz x0, #0xbb6e0 */
  if ((ARC_X_R(c, 0)) == 0) goto L_bb6e0;
  /* bb5d8: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
L_bb5dc:;
  /* bb5dc: add x0, x0, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* bb5e0: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* bb5e4: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* bb5e8: bl #0x1449d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(767468));
  fn1_1449d8(c);
  /* bb5ec: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* bb5f0: add x8, x8, x21 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + ARC_X_R(c, 21)));
  /* bb5f4: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
L_bb5f8:;
  /* bb5f8: ldr x10, [x19, #0x10] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* bb5fc: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* bb600: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* bb604: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* bb608: b.ls #0xbb634 */
  if (ARC_COND(c, 9)) goto L_bb634;
  /* bb60c: lsl x9, x10, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* bb610: add x8, x8, #0x3e1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(993)));
  /* bb614: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* bb618: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* bb61c: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* bb620: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(767524));
  fn1_142878(c);
  /* bb624: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* bb628: cbz x0, #0xbb6d8 */
  if ((ARC_X_R(c, 0)) == 0) goto L_bb6d8;
  /* bb62c: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* bb630: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
L_bb634:;
  /* bb634: str x9, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 9));
  /* bb638: mov w9, #0x28 */
  ARC_W_W(c, 9, UINT64_C(40));
  /* bb63c: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* bb640: strb w9, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
  /* bb644: ldr x20, [x20, #0x20] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 20) + INT64_C(32))));
  /* bb648: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* bb64c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* bb650: ldr x8, [x8, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* bb654: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(767576));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* bb658: ldurh w8, [x20, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 20) + INT64_C(9))));
  /* bb65c: and w8, w8, #0xc0 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(192)));
  /* bb660: cmp w8, #0x40 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(64));
  /* bb664: b.eq #0xbb67c */
  if (ARC_COND(c, 0)) goto L_bb67c;
  /* bb668: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* bb66c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* bb670: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* bb674: ldr x8, [x8, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* bb678: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(767612));
  arc_dispatch(c, ARC_X_R(c, 8));
L_bb67c:;
  /* bb67c: ldp x8, x10, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* bb680: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* bb684: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* bb688: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* bb68c: b.ls #0xbb6b8 */
  if (ARC_COND(c, 9)) goto L_bb6b8;
  /* bb690: lsl x9, x10, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* bb694: add x8, x8, #0x3e1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(993)));
  /* bb698: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* bb69c: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* bb6a0: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* bb6a4: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(767656));
  fn1_142878(c);
  /* bb6a8: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* bb6ac: cbz x0, #0xbb6dc */
  if ((ARC_X_R(c, 0)) == 0) goto L_bb6dc;
  /* bb6b0: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* bb6b4: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
L_bb6b8:;
  /* bb6b8: str x9, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 9));
  /* bb6bc: mov w9, #0x29 */
  ARC_W_W(c, 9, UINT64_C(41));
  /* bb6c0: strb w9, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
  /* bb6c4: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* bb6c8: ldp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* bb6cc: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* bb6d0: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* bb6d4: ret  */
  return;
L_bb6d8:;
  /* bb6d8: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(767708));
  fn1_1427b8(c);
L_bb6dc:;
  /* bb6dc: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(767712));
  fn1_1427b8(c);
L_bb6e0:;
  /* bb6e0: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(767716));
  fn1_1427b8(c);
}

void fn1_bdcf0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038705392));
  /* bdcf0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* bdcf4: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* bdcf8: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* bdcfc: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* bdd00: nop  */
  /* nop: no architectural effect here */
  /* bdd04: adr x0, #0x156bb8 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1403832)));
  /* bdd08: bl #0x144ac8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(777484));
  fn1_144ac8(c);
  /* bdd0c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* bdd10: ldr x0, [x0] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 0)));
  /* bdd14: cbz x0, #0xbdda0 */
  if ((ARC_X_R(c, 0)) == 0) goto L_bdda0;
  /* bdd18: mov x10, #0x2b2b */
  ARC_X_W(c, 10, UINT64_C(11051));
  /* bdd1c: mov x8, x0 */
  ARC_X_W(c, 8, ARC_X_R(c, 0));
  /* bdd20: movk x10, #0x4743, lsl #16 */
  ARC_X_W(c, 10, ((ARC_X_R(c, 10) & UINT64_C(18446744069414649855)) | UINT64_C(1195573248)));
  /* bdd24: ldr x9, [x8, #0x60]! */
  { const uint64_t _a = (ARC_X_R(c, 8) + INT64_C(96));
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(96));
    ARC_X_W(c, 9, arc_ld64(_a));
  }
  /* bdd28: movk x10, #0x4c4e, lsl #32 */
  ARC_X_W(c, 10, ((ARC_X_R(c, 10) & UINT64_C(18446462603027808255)) | UINT64_C(83897891160064)));
  /* bdd2c: movk x10, #0x43, lsl #48 */
  ARC_X_W(c, 10, ((ARC_X_R(c, 10) & UINT64_C(281474976710655)) | UINT64_C(18858823439613952)));
  /* bdd30: cmp x10, x9, lsr #8 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ((uint64_t)(ARC_X_R(c, 9)) >> 8));
  /* bdd34: b.ne #0xbdd90 */
  if (ARC_COND(c, 1)) goto L_bdd90;
  /* bdd38: ldr w8, [x0, #0x38] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 0) + INT64_C(56))));
  /* bdd3c: tbnz w8, #0x1f, #0xbddb0 */
  if (((ARC_W_R(c, 8)) >> 31 & 1) != 0) goto L_bddb0;
  /* bdd40: subs w8, w8, #1 */
  ARC_W_W(c, 8, arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1)));
  /* bdd44: str w8, [x0, #0x38] */
  arc_st32((ARC_X_R(c, 0) + INT64_C(56)), ARC_W_R(c, 8));
  /* bdd48: b.ne #0xbdda0 */
  if (ARC_COND(c, 1)) goto L_bdda0;
  /* bdd4c: ldr x8, [x0, #0x30] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(48))));
  /* bdd50: and x9, x9, #0xff */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) & UINT64_C(255)));
  /* bdd54: cmp x9, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(1));
  /* bdd58: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* bdd5c: b.ne #0xbddc4 */
  if (ARC_COND(c, 1)) goto L_bddc4;
  /* bdd60: ldr x8, [x0, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* bdd64: nop  */
  /* nop: no architectural effect here */
  /* bdd68: adr x9, #0x1576e0 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1406688)));
  /* bdd6c: cmp x0, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 9));
  /* bdd70: sub x19, x8, #0x80 */
  ARC_X_W(c, 19, (ARC_X_R(c, 8) - UINT64_C(128)));
  /* bdd74: b.lo #0xbddcc */
  if (ARC_COND(c, 3)) goto L_bddcc;
  /* bdd78: adrp x8, #0x157000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1404928)));
  /* bdd7c: add x8, x8, #0x8e0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2272)));
  /* bdd80: cmp x0, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* bdd84: b.hs #0xbddcc */
  if (ARC_COND(c, 2)) goto L_bddcc;
  /* bdd88: bl #0xa2664 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(777612));
  fn1_a2664(c);
  /* bdd8c: b #0xbddd0 */
  goto L_bddd0;
L_bdd90:;
  /* bdd90: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* bdd94: bl #0x9ce60 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(777624));
  fn1_9ce60(c);
  /* bdd98: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
L_bdd9c:;
  /* bdd9c: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
L_bdda0:;
  /* bdda0: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* bdda4: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* bdda8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* bddac: ret  */
  return;
L_bddb0:;
  /* bddb0: adds w8, w8, #1 */
  ARC_W_W(c, 8, arc_add32(c, ARC_W_R(c, 8), UINT64_C(1), 0));
  /* bddb4: str w8, [x0, #0x38] */
  arc_st32((ARC_X_R(c, 0) + INT64_C(56)), ARC_W_R(c, 8));
  /* bddb8: b.lo #0xbdda0 */
  if (ARC_COND(c, 3)) goto L_bdda0;
  /* bddbc: ldr x8, [x0, #0x30] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(48))));
  /* bddc0: b #0xbdd9c */
  goto L_bdd9c;
L_bddc4:;
  /* bddc4: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* bddc8: b #0xbddd0 */
  goto L_bddd0;
L_bddcc:;
  /* bddcc: bl #0x142800 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(777680));
  fn1_142800(c);
L_bddd0:;
  /* bddd0: add x1, x19, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 19) + UINT64_C(8)));
  /* bddd4: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* bddd8: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(777692));
  fn1_bd950(c);
  /* bdddc: cmp x0, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 0), UINT64_C(1));
  /* bdde0: b.ne #0xbdda0 */
  if (ARC_COND(c, 1)) goto L_bdda0;
  /* bdde4: ldr x8, [x19, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(24))));
  /* bdde8: cbz x8, #0xbddf4 */
  if ((ARC_X_R(c, 8)) == 0) goto L_bddf4;
  /* bddec: add x0, x19, #0x80 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(128)));
  /* bddf0: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(777716));
  arc_dispatch(c, ARC_X_R(c, 8));
L_bddf4:;
  /* bddf4: nop  */
  /* nop: no architectural effect here */
  /* bddf8: adr x8, #0x1576e0 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1406688)));
  /* bddfc: cmp x19, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* bde00: b.lo #0xbde20 */
  if (ARC_COND(c, 3)) goto L_bde20;
  /* bde04: adrp x8, #0x157000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1404928)));
  /* bde08: add x8, x8, #0x8e0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2272)));
  /* bde0c: cmp x19, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* bde10: b.hs #0xbde20 */
  if (ARC_COND(c, 2)) goto L_bde20;
  /* bde14: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* bde18: bl #0xa2664 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(777756));
  fn1_a2664(c);
  /* bde1c: b #0xbdda0 */
  goto L_bdda0;
L_bde20:;
  /* bde20: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* bde24: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* bde28: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* bde2c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* bde30: b #0x142800 */
  fn1_142800(c); return;
  /* bde34: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(777784));
  fn1_a1454(c);
  /* bde38: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(777788));
  fn1_a1454(c);
}

void fn1_d2128(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038788392));
  /* d2128: bti c */
  /* bti: no architectural effect here */
  /* d212c: sub x8, x1, x0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 1) - ARC_X_R(c, 0)));
  /* d2130: asr x8, x8, #3 */
  ARC_X_W(c, 8, ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(3)) & 63))));
  /* d2134: cmp x8, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(2));
  /* d2138: b.gt #0xd2148 */
  if (ARC_COND(c, 12)) goto L_d2148;
  /* d213c: b.hs #0xd221c */
  if (ARC_COND(c, 2)) goto L_d221c;
L_d2140:;
  /* d2140: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* d2144: ret  */
  return;
L_d2148:;
  /* d2148: cmp x8, #3 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(3));
  /* d214c: b.eq #0xd2244 */
  if (ARC_COND(c, 0)) goto L_d2244;
  /* d2150: cmp x8, #4 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(4));
  /* d2154: b.eq #0xd2348 */
  if (ARC_COND(c, 0)) goto L_d2348;
  /* d2158: cmp x8, #5 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(5));
  /* d215c: b.ne #0xd2290 */
  if (ARC_COND(c, 1)) goto L_d2290;
  /* d2160: ldp d0, d1, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_du_w(c, 0, arc_ld64(_pa));
    arc_du_w(c, 1, arc_ld64((_pa + 8)));
  }
  /* d2164: fcmp d0, d1 */
  arc_fcmp(c, (double)(ARC_D_R(c, 0)), (double)(ARC_D_R(c, 1)));
  /* d2168: fcsel d2, d0, d1, pl */
  arc_d_w(c, 2, (double)((ARC_COND(c, 5) ? ARC_D_R(c, 0) : ARC_D_R(c, 1))));
  /* d216c: fcsel d0, d1, d0, pl */
  arc_d_w(c, 0, (double)((ARC_COND(c, 5) ? ARC_D_R(c, 1) : ARC_D_R(c, 0))));
  /* d2170: stp d0, d2, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64((_pa + 8), (c)->q[2].u64[0]);
  }
  /* d2174: ldr d0, [x0, #0x18] */
  arc_du_w(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(24))));
  /* d2178: ldur d1, [x1, #-8] */
  arc_du_w(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(-8))));
  /* d217c: fcmp d0, d1 */
  arc_fcmp(c, (double)(ARC_D_R(c, 0)), (double)(ARC_D_R(c, 1)));
  /* d2180: fcsel d2, d0, d1, pl */
  arc_d_w(c, 2, (double)((ARC_COND(c, 5) ? ARC_D_R(c, 0) : ARC_D_R(c, 1))));
  /* d2184: fcsel d0, d1, d0, pl */
  arc_d_w(c, 0, (double)((ARC_COND(c, 5) ? ARC_D_R(c, 1) : ARC_D_R(c, 0))));
  /* d2188: stur d2, [x1, #-8] */
  arc_st64((ARC_X_R(c, 1) + INT64_C(-8)), (c)->q[2].u64[0]);
  /* d218c: str d0, [x0, #0x18] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(24)), (c)->q[0].u64[0]);
  /* d2190: ldr d1, [x0, #0x10] */
  arc_du_w(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* d2194: ldur d0, [x1, #-8] */
  arc_du_w(c, 0, arc_ld64((ARC_X_R(c, 1) + INT64_C(-8))));
  /* d2198: fcmp d0, d1 */
  arc_fcmp(c, (double)(ARC_D_R(c, 0)), (double)(ARC_D_R(c, 1)));
  /* d219c: fcsel d2, d0, d1, pl */
  arc_d_w(c, 2, (double)((ARC_COND(c, 5) ? ARC_D_R(c, 0) : ARC_D_R(c, 1))));
  /* d21a0: fcsel d0, d1, d0, pl */
  arc_d_w(c, 0, (double)((ARC_COND(c, 5) ? ARC_D_R(c, 1) : ARC_D_R(c, 0))));
  /* d21a4: stur d2, [x1, #-8] */
  arc_st64((ARC_X_R(c, 1) + INT64_C(-8)), (c)->q[2].u64[0]);
  /* d21a8: ldp d2, d1, [x0, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(16));
    arc_du_w(c, 2, arc_ld64(_pa));
    arc_du_w(c, 1, arc_ld64((_pa + 8)));
  }
  /* d21ac: ldr d3, [x0, #8] */
  arc_du_w(c, 3, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* d21b0: fcmp d0, d1 */
  arc_fcmp(c, (double)(ARC_D_R(c, 0)), (double)(ARC_D_R(c, 1)));
  /* d21b4: fcsel d2, d1, d2, pl */
  arc_d_w(c, 2, (double)((ARC_COND(c, 5) ? ARC_D_R(c, 1) : ARC_D_R(c, 2))));
  /* d21b8: fcsel d0, d0, d1, pl */
  arc_d_w(c, 0, (double)((ARC_COND(c, 5) ? ARC_D_R(c, 0) : ARC_D_R(c, 1))));
  /* d21bc: stp d2, d0, [x0, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_pa, (c)->q[2].u64[0]);
    arc_st64((_pa + 8), (c)->q[0].u64[0]);
  }
  /* d21c0: ldur d0, [x1, #-8] */
  arc_du_w(c, 0, arc_ld64((ARC_X_R(c, 1) + INT64_C(-8))));
  /* d21c4: fcmp d3, d0 */
  arc_fcmp(c, (double)(ARC_D_R(c, 3)), (double)(ARC_D_R(c, 0)));
  /* d21c8: fcsel d1, d3, d0, pl */
  arc_d_w(c, 1, (double)((ARC_COND(c, 5) ? ARC_D_R(c, 3) : ARC_D_R(c, 0))));
  /* d21cc: fcsel d0, d0, d3, pl */
  arc_d_w(c, 0, (double)((ARC_COND(c, 5) ? ARC_D_R(c, 0) : ARC_D_R(c, 3))));
  /* d21d0: stur d1, [x1, #-8] */
  arc_st64((ARC_X_R(c, 1) + INT64_C(-8)), (c)->q[1].u64[0]);
  /* d21d4: ldp d3, d2, [x0, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(16));
    arc_du_w(c, 3, arc_ld64(_pa));
    arc_du_w(c, 2, arc_ld64((_pa + 8)));
  }
  /* d21d8: ldr d1, [x0] */
  arc_du_w(c, 1, arc_ld64(ARC_X_R(c, 0)));
  /* d21dc: fcmp d2, d1 */
  arc_fcmp(c, (double)(ARC_D_R(c, 2)), (double)(ARC_D_R(c, 1)));
  /* d21e0: fcsel d4, d1, d2, pl */
  arc_d_w(c, 4, (double)((ARC_COND(c, 5) ? ARC_D_R(c, 1) : ARC_D_R(c, 2))));
  /* d21e4: fcsel d2, d2, d1, pl */
  arc_d_w(c, 2, (double)((ARC_COND(c, 5) ? ARC_D_R(c, 2) : ARC_D_R(c, 1))));
  /* d21e8: fcmp d4, d3 */
  arc_fcmp(c, (double)(ARC_D_R(c, 4)), (double)(ARC_D_R(c, 3)));
  /* d21ec: fcsel d1, d3, d1, pl */
  arc_d_w(c, 1, (double)((ARC_COND(c, 5) ? ARC_D_R(c, 3) : ARC_D_R(c, 1))));
  /* d21f0: fcsel d3, d4, d3, pl */
  arc_d_w(c, 3, (double)((ARC_COND(c, 5) ? ARC_D_R(c, 4) : ARC_D_R(c, 3))));
  /* d21f4: fcmp d2, d0 */
  arc_fcmp(c, (double)(ARC_D_R(c, 2)), (double)(ARC_D_R(c, 0)));
  /* d21f8: fcsel d4, d0, d2, pl */
  arc_d_w(c, 4, (double)((ARC_COND(c, 5) ? ARC_D_R(c, 0) : ARC_D_R(c, 2))));
  /* d21fc: fcsel d2, d2, d0, pl */
  arc_d_w(c, 2, (double)((ARC_COND(c, 5) ? ARC_D_R(c, 2) : ARC_D_R(c, 0))));
  /* d2200: fcmp d4, d3 */
  arc_fcmp(c, (double)(ARC_D_R(c, 4)), (double)(ARC_D_R(c, 3)));
  /* d2204: fcsel d0, d3, d0, pl */
  arc_d_w(c, 0, (double)((ARC_COND(c, 5) ? ARC_D_R(c, 3) : ARC_D_R(c, 0))));
  /* d2208: fcsel d3, d4, d3, pl */
  arc_d_w(c, 3, (double)((ARC_COND(c, 5) ? ARC_D_R(c, 4) : ARC_D_R(c, 3))));
  /* d220c: stp d1, d0, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, (c)->q[1].u64[0]);
    arc_st64((_pa + 8), (c)->q[0].u64[0]);
  }
  /* d2210: stp d3, d2, [x0, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_pa, (c)->q[3].u64[0]);
    arc_st64((_pa + 8), (c)->q[2].u64[0]);
  }
  /* d2214: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* d2218: ret  */
  return;
L_d221c:;
  /* d221c: cmp x8, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(2));
  /* d2220: b.ne #0xd2290 */
  if (ARC_COND(c, 1)) goto L_d2290;
  /* d2224: ldur d1, [x1, #-8] */
  arc_du_w(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(-8))));
  /* d2228: ldr d0, [x0] */
  arc_du_w(c, 0, arc_ld64(ARC_X_R(c, 0)));
  /* d222c: fcmp d1, d0 */
  arc_fcmp(c, (double)(ARC_D_R(c, 1)), (double)(ARC_D_R(c, 0)));
  /* d2230: b.pl #0xd2140 */
  if (ARC_COND(c, 5)) goto L_d2140;
  /* d2234: str d1, [x0] */
  arc_st64(ARC_X_R(c, 0), (c)->q[1].u64[0]);
  /* d2238: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* d223c: stur d0, [x1, #-8] */
  arc_st64((ARC_X_R(c, 1) + INT64_C(-8)), (c)->q[0].u64[0]);
  /* d2240: ret  */
  return;
L_d2244:;
  /* d2244: ldr d0, [x0, #8] */
  arc_du_w(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* d2248: ldur d1, [x1, #-8] */
  arc_du_w(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(-8))));
  /* d224c: fcmp d0, d1 */
  arc_fcmp(c, (double)(ARC_D_R(c, 0)), (double)(ARC_D_R(c, 1)));
  /* d2250: fcsel d2, d0, d1, pl */
  arc_d_w(c, 2, (double)((ARC_COND(c, 5) ? ARC_D_R(c, 0) : ARC_D_R(c, 1))));
  /* d2254: fcsel d0, d1, d0, pl */
  arc_d_w(c, 0, (double)((ARC_COND(c, 5) ? ARC_D_R(c, 1) : ARC_D_R(c, 0))));
  /* d2258: stur d2, [x1, #-8] */
  arc_st64((ARC_X_R(c, 1) + INT64_C(-8)), (c)->q[2].u64[0]);
  /* d225c: str d0, [x0, #8] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(8)), (c)->q[0].u64[0]);
  /* d2260: ldr d1, [x0] */
  arc_du_w(c, 1, arc_ld64(ARC_X_R(c, 0)));
  /* d2264: ldur d0, [x1, #-8] */
  arc_du_w(c, 0, arc_ld64((ARC_X_R(c, 1) + INT64_C(-8))));
  /* d2268: fcmp d0, d1 */
  arc_fcmp(c, (double)(ARC_D_R(c, 0)), (double)(ARC_D_R(c, 1)));
  /* d226c: fcsel d2, d0, d1, pl */
  arc_d_w(c, 2, (double)((ARC_COND(c, 5) ? ARC_D_R(c, 0) : ARC_D_R(c, 1))));
  /* d2270: fcsel d0, d1, d0, pl */
  arc_d_w(c, 0, (double)((ARC_COND(c, 5) ? ARC_D_R(c, 1) : ARC_D_R(c, 0))));
  /* d2274: stur d2, [x1, #-8] */
  arc_st64((ARC_X_R(c, 1) + INT64_C(-8)), (c)->q[2].u64[0]);
  /* d2278: ldp d2, d1, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_du_w(c, 2, arc_ld64(_pa));
    arc_du_w(c, 1, arc_ld64((_pa + 8)));
  }
  /* d227c: fcmp d0, d1 */
  arc_fcmp(c, (double)(ARC_D_R(c, 0)), (double)(ARC_D_R(c, 1)));
  /* d2280: fcsel d2, d1, d2, pl */
  arc_d_w(c, 2, (double)((ARC_COND(c, 5) ? ARC_D_R(c, 1) : ARC_D_R(c, 2))));
  /* d2284: fcsel d0, d0, d1, pl */
  arc_d_w(c, 0, (double)((ARC_COND(c, 5) ? ARC_D_R(c, 0) : ARC_D_R(c, 1))));
  /* d2288: str d2, [x0] */
  arc_st64(ARC_X_R(c, 0), (c)->q[2].u64[0]);
  /* d228c: b #0xd23b8 */
  goto L_d23b8;
L_d2290:;
  /* d2290: mov x11, x0 */
  ARC_X_W(c, 11, ARC_X_R(c, 0));
  /* d2294: ldp d2, d1, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_du_w(c, 2, arc_ld64(_pa));
    arc_du_w(c, 1, arc_ld64((_pa + 8)));
  }
  /* d2298: ldr d0, [x11, #0x10]! */
  arc_du_w(c, 0, arc_ld64((ARC_X_R(c, 11) + INT64_C(16))));
  ARC_X_W(c, 11, ARC_X_R(c, 11) + INT64_C(16));
  /* d229c: add x8, x0, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + UINT64_C(24)));
  /* d22a0: fcmp d1, d0 */
  arc_fcmp(c, (double)(ARC_D_R(c, 1)), (double)(ARC_D_R(c, 0)));
  /* d22a4: fcsel d3, d1, d0, pl */
  arc_d_w(c, 3, (double)((ARC_COND(c, 5) ? ARC_D_R(c, 1) : ARC_D_R(c, 0))));
  /* d22a8: fcsel d0, d0, d1, pl */
  arc_d_w(c, 0, (double)((ARC_COND(c, 5) ? ARC_D_R(c, 0) : ARC_D_R(c, 1))));
  /* d22ac: fcmp d3, d2 */
  arc_fcmp(c, (double)(ARC_D_R(c, 3)), (double)(ARC_D_R(c, 2)));
  /* d22b0: fcsel d1, d2, d3, pl */
  arc_d_w(c, 1, (double)((ARC_COND(c, 5) ? ARC_D_R(c, 2) : ARC_D_R(c, 3))));
  /* d22b4: fcsel d3, d3, d2, pl */
  arc_d_w(c, 3, (double)((ARC_COND(c, 5) ? ARC_D_R(c, 3) : ARC_D_R(c, 2))));
  /* d22b8: fcmp d1, d0 */
  arc_fcmp(c, (double)(ARC_D_R(c, 1)), (double)(ARC_D_R(c, 0)));
  /* d22bc: str d3, [x11] */
  arc_st64(ARC_X_R(c, 11), (c)->q[3].u64[0]);
  /* d22c0: fcsel d2, d0, d2, pl */
  arc_d_w(c, 2, (double)((ARC_COND(c, 5) ? ARC_D_R(c, 0) : ARC_D_R(c, 2))));
  /* d22c4: fcsel d0, d1, d0, pl */
  arc_d_w(c, 0, (double)((ARC_COND(c, 5) ? ARC_D_R(c, 1) : ARC_D_R(c, 0))));
  /* d22c8: cmp x8, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 1));
  /* d22cc: stp d2, d0, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, (c)->q[2].u64[0]);
    arc_st64((_pa + 8), (c)->q[0].u64[0]);
  }
  /* d22d0: b.eq #0xd2140 */
  if (ARC_COND(c, 0)) goto L_d2140;
  /* d22d4: mov w9, wzr */
  ARC_W_W(c, 9, ARC_W_R(c, 31));
  /* d22d8: mov w10, #0x18 */
  ARC_W_W(c, 10, UINT64_C(24));
  /* d22dc: b #0xd230c */
  goto L_d230c;
L_d22e0:;
  /* d22e0: mov x11, x0 */
  ARC_X_W(c, 11, ARC_X_R(c, 0));
L_d22e4:;
  /* d22e4: add w9, w9, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) + UINT64_C(1)));
  /* d22e8: str d0, [x11] */
  arc_st64(ARC_X_R(c, 11), (c)->q[0].u64[0]);
  /* d22ec: cmp w9, #8 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(8));
  /* d22f0: b.eq #0xd23c4 */
  if (ARC_COND(c, 0)) goto L_d23c4;
L_d22f4:;
  /* d22f4: add x12, x8, #8 */
  ARC_X_W(c, 12, (ARC_X_R(c, 8) + UINT64_C(8)));
  /* d22f8: mov x11, x8 */
  ARC_X_W(c, 11, ARC_X_R(c, 8));
  /* d22fc: add x10, x10, #8 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(8)));
  /* d2300: cmp x12, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 12), ARC_X_R(c, 1));
  /* d2304: mov x8, x12 */
  ARC_X_W(c, 8, ARC_X_R(c, 12));
  /* d2308: b.eq #0xd2140 */
  if (ARC_COND(c, 0)) goto L_d2140;
L_d230c:;
  /* d230c: ldr d0, [x8] */
  arc_du_w(c, 0, arc_ld64(ARC_X_R(c, 8)));
  /* d2310: ldr d1, [x11] */
  arc_du_w(c, 1, arc_ld64(ARC_X_R(c, 11)));
  /* d2314: fcmp d0, d1 */
  arc_fcmp(c, (double)(ARC_D_R(c, 0)), (double)(ARC_D_R(c, 1)));
  /* d2318: b.pl #0xd22f4 */
  if (ARC_COND(c, 5)) goto L_d22f4;
  /* d231c: mov x11, x10 */
  ARC_X_W(c, 11, ARC_X_R(c, 10));
L_d2320:;
  /* d2320: subs x12, x11, #8 */
  ARC_X_W(c, 12, arc_sub64(c, ARC_X_R(c, 11), UINT64_C(8)));
  /* d2324: str d1, [x0, x11] */
  arc_st64((ARC_X_R(c, 0) + ARC_X_R(c, 11)), (c)->q[1].u64[0]);
  /* d2328: b.eq #0xd22e0 */
  if (ARC_COND(c, 0)) goto L_d22e0;
  /* d232c: add x11, x0, x11 */
  ARC_X_W(c, 11, (ARC_X_R(c, 0) + ARC_X_R(c, 11)));
  /* d2330: ldur d1, [x11, #-0x10] */
  arc_du_w(c, 1, arc_ld64((ARC_X_R(c, 11) + INT64_C(-16))));
  /* d2334: mov x11, x12 */
  ARC_X_W(c, 11, ARC_X_R(c, 12));
  /* d2338: fcmp d0, d1 */
  arc_fcmp(c, (double)(ARC_D_R(c, 0)), (double)(ARC_D_R(c, 1)));
  /* d233c: b.mi #0xd2320 */
  if (ARC_COND(c, 4)) goto L_d2320;
  /* d2340: add x11, x0, x12 */
  ARC_X_W(c, 11, (ARC_X_R(c, 0) + ARC_X_R(c, 12)));
  /* d2344: b #0xd22e4 */
  goto L_d22e4;
L_d2348:;
  /* d2348: ldp d2, d0, [x0, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(8));
    arc_du_w(c, 2, arc_ld64(_pa));
    arc_du_w(c, 0, arc_ld64((_pa + 8)));
  }
  /* d234c: ldr d1, [x0] */
  arc_du_w(c, 1, arc_ld64(ARC_X_R(c, 0)));
  /* d2350: fcmp d1, d0 */
  arc_fcmp(c, (double)(ARC_D_R(c, 1)), (double)(ARC_D_R(c, 0)));
  /* d2354: fcsel d3, d1, d0, pl */
  arc_d_w(c, 3, (double)((ARC_COND(c, 5) ? ARC_D_R(c, 1) : ARC_D_R(c, 0))));
  /* d2358: fcsel d0, d0, d1, pl */
  arc_d_w(c, 0, (double)((ARC_COND(c, 5) ? ARC_D_R(c, 0) : ARC_D_R(c, 1))));
  /* d235c: str d3, [x0, #0x10] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(16)), (c)->q[3].u64[0]);
  /* d2360: str d0, [x0] */
  arc_st64(ARC_X_R(c, 0), (c)->q[0].u64[0]);
  /* d2364: ldur d0, [x1, #-8] */
  arc_du_w(c, 0, arc_ld64((ARC_X_R(c, 1) + INT64_C(-8))));
  /* d2368: fcmp d2, d0 */
  arc_fcmp(c, (double)(ARC_D_R(c, 2)), (double)(ARC_D_R(c, 0)));
  /* d236c: fcsel d1, d2, d0, pl */
  arc_d_w(c, 1, (double)((ARC_COND(c, 5) ? ARC_D_R(c, 2) : ARC_D_R(c, 0))));
  /* d2370: fcsel d0, d0, d2, pl */
  arc_d_w(c, 0, (double)((ARC_COND(c, 5) ? ARC_D_R(c, 0) : ARC_D_R(c, 2))));
  /* d2374: stur d1, [x1, #-8] */
  arc_st64((ARC_X_R(c, 1) + INT64_C(-8)), (c)->q[1].u64[0]);
  /* d2378: ldr d1, [x0] */
  arc_du_w(c, 1, arc_ld64(ARC_X_R(c, 0)));
  /* d237c: fcmp d1, d0 */
  arc_fcmp(c, (double)(ARC_D_R(c, 1)), (double)(ARC_D_R(c, 0)));
  /* d2380: fcsel d2, d1, d0, pl */
  arc_d_w(c, 2, (double)((ARC_COND(c, 5) ? ARC_D_R(c, 1) : ARC_D_R(c, 0))));
  /* d2384: fcsel d0, d0, d1, pl */
  arc_d_w(c, 0, (double)((ARC_COND(c, 5) ? ARC_D_R(c, 0) : ARC_D_R(c, 1))));
  /* d2388: stp d0, d2, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64((_pa + 8), (c)->q[2].u64[0]);
  }
  /* d238c: ldr d0, [x0, #0x10] */
  arc_du_w(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* d2390: ldur d1, [x1, #-8] */
  arc_du_w(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(-8))));
  /* d2394: fcmp d0, d1 */
  arc_fcmp(c, (double)(ARC_D_R(c, 0)), (double)(ARC_D_R(c, 1)));
  /* d2398: fcsel d2, d0, d1, pl */
  arc_d_w(c, 2, (double)((ARC_COND(c, 5) ? ARC_D_R(c, 0) : ARC_D_R(c, 1))));
  /* d239c: fcsel d0, d1, d0, pl */
  arc_d_w(c, 0, (double)((ARC_COND(c, 5) ? ARC_D_R(c, 1) : ARC_D_R(c, 0))));
  /* d23a0: stur d2, [x1, #-8] */
  arc_st64((ARC_X_R(c, 1) + INT64_C(-8)), (c)->q[2].u64[0]);
  /* d23a4: ldr d1, [x0, #8] */
  arc_du_w(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* d23a8: fcmp d1, d0 */
  arc_fcmp(c, (double)(ARC_D_R(c, 1)), (double)(ARC_D_R(c, 0)));
  /* d23ac: fcsel d2, d1, d0, pl */
  arc_d_w(c, 2, (double)((ARC_COND(c, 5) ? ARC_D_R(c, 1) : ARC_D_R(c, 0))));
  /* d23b0: fcsel d0, d0, d1, pl */
  arc_d_w(c, 0, (double)((ARC_COND(c, 5) ? ARC_D_R(c, 0) : ARC_D_R(c, 1))));
  /* d23b4: str d2, [x0, #0x10] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(16)), (c)->q[2].u64[0]);
L_d23b8:;
  /* d23b8: str d0, [x0, #8] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(8)), (c)->q[0].u64[0]);
  /* d23bc: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* d23c0: ret  */
  return;
L_d23c4:;
  /* d23c4: add x8, x8, #8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(8)));
  /* d23c8: cmp x8, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 1));
  /* d23cc: cset w0, eq */
  ARC_W_W(c, 0, (ARC_COND(c, 0) ? 1 : 0));
  /* d23d0: ret  */
  return;
}

void fn1_d7d6c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038812012));
  /* d7d6c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* d7d70: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* d7d74: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* d7d78: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* d7d7c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* d7d80: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* d7d84: str xzr, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 31));
  /* d7d88: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* d7d8c: mov w1, #0x10 */
  ARC_W_W(c, 1, UINT64_C(16));
  /* d7d90: mov w2, #0x90 */
  ARC_W_W(c, 2, UINT64_C(144));
  /* d7d94: bl #0x142818 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(884120));
  fn1_142818(c);
  /* d7d98: ldr x20, [x29, #0x18] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 29) + INT64_C(24))));
  /* d7d9c: cbnz x20, #0xd7db4 */
  if ((ARC_X_R(c, 20)) != 0) goto L_d7db4;
  /* d7da0: mov w0, #0x90 */
  ARC_W_W(c, 0, UINT64_C(144));
  /* d7da4: bl #0xa24dc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(884136));
  fn1_a24dc(c);
  /* d7da8: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* d7dac: cbnz x0, #0xd7db4 */
  if ((ARC_X_R(c, 0)) != 0) goto L_d7db4;
  /* d7db0: bl #0x142488 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(884148));
  fn1_142488(c);
L_d7db4:;
  /* d7db4: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* d7db8: mov x21, x20 */
  ARC_X_W(c, 21, ARC_X_R(c, 20));
  /* d7dbc: stp q0, q0, [x20] */
  { const uint64_t _pa = ARC_X_R(c, 20);
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* d7dc0: stp q0, q0, [x20, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(32));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* d7dc4: stp q0, q0, [x20, #0x40] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(64));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* d7dc8: stp q0, q0, [x20, #0x60] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(96));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* d7dcc: str q0, [x21, #0x80]! */
  arc_st64((ARC_X_R(c, 21) + INT64_C(128)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 21) + INT64_C(128)) + 8, (c)->q[0].u64[1]);
  ARC_X_W(c, 21, ARC_X_R(c, 21) + INT64_C(128));
  /* d7dd0: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* d7dd4: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* d7dd8: bl #0xd7e40 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(884188));
  fn1_d7e40(c);
  /* d7ddc: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* d7de0: adrp x2, #0x151000 */
  ARC_X_W(c, 2, (arc_image_bases[1] + UINT64_C(1380352)));
  /* d7de4: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* d7de8: ldr x1, [x1, #0x930] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(2352))));
  /* d7dec: ldr x2, [x2, #0x970] */
  ARC_X_W(c, 2, arc_ld64((ARC_X_R(c, 2) + INT64_C(2416))));
  /* d7df0: bl #0x142440 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(884212));
  fn1_142440(c);
  /* d7df4: nop  */
  /* nop: no architectural effect here */
  /* d7df8: adr x8, #0x1576e0 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1406688)));
  /* d7dfc: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* d7e00: cmp x20, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 8));
  /* d7e04: b.lo #0xd7e28 */
  if (ARC_COND(c, 3)) goto L_d7e28;
  /* d7e08: adrp x8, #0x157000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1404928)));
  /* d7e0c: add x8, x8, #0x8e0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2272)));
  /* d7e10: cmp x20, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 8));
  /* d7e14: b.hs #0xd7e28 */
  if (ARC_COND(c, 2)) goto L_d7e28;
  /* d7e18: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* d7e1c: bl #0xa2664 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(884256));
  fn1_a2664(c);
  /* d7e20: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* d7e24: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(884264));
  fn1_9cc20(c);
L_d7e28:;
  /* d7e28: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* d7e2c: bl #0x142800 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(884272));
  fn1_142800(c);
  /* d7e30: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* d7e34: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(884280));
  fn1_9cc20(c);
  /* d7e38: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(884284));
  fn1_a1454(c);
  /* d7e3c: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(884288));
  fn1_a1454(c);
}

void fn1_db878(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038827128));
  /* db878: bti c */
  /* bti: no architectural effect here */
  /* db87c: ldr w0, [x0, #0x20] */
  ARC_W_W(c, 0, arc_ld32((ARC_X_R(c, 0) + INT64_C(32))));
  /* db880: cmp x2, #0x10 */
  (void)arc_sub64(c, ARC_X_R(c, 2), UINT64_C(16));
  /* db884: b.hi #0xdb8d0 */
  if (ARC_COND(c, 8)) goto L_db8d0;
  /* db888: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* db88c: lsl x8, x8, x0 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) << ((ARC_X_R(c, 0)) & 63)));
  /* db890: cmp x1, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 1), ARC_X_R(c, 8));
  /* db894: b.hi #0xdb8d0 */
  if (ARC_COND(c, 8)) goto L_db8d0;
  /* db898: cmp x1, x2 */
  (void)arc_sub64(c, ARC_X_R(c, 1), ARC_X_R(c, 2));
  /* db89c: csel x8, x1, x2, hi */
  ARC_X_W(c, 8, (ARC_COND(c, 8) ? (ARC_X_R(c, 1)) : ARC_X_R(c, 2)));
  /* db8a0: sub x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) - UINT64_C(1)));
  /* db8a4: cmp x8, #8 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(8));
  /* db8a8: b.hs #0xdb8b4 */
  if (ARC_COND(c, 2)) goto L_db8b4;
  /* db8ac: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* db8b0: ret  */
  return;
L_db8b4:;
  /* db8b4: lsr x8, x8, #3 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(3)) & 63)));
  /* db8b8: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
L_db8bc:;
  /* db8bc: lsr x9, x8, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* db8c0: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* db8c4: add w0, w0, #1 */
  ARC_W_W(c, 0, (ARC_W_R(c, 0) + UINT64_C(1)));
  /* db8c8: mov x8, x9 */
  ARC_X_W(c, 8, ARC_X_R(c, 9));
  /* db8cc: b.hi #0xdb8bc */
  if (ARC_COND(c, 8)) goto L_db8bc;
L_db8d0:;
  /* db8d0: ret  */
  return;
}

void fn1_e00e4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038845668));
  /* e00e4: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e00e8: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e00ec: stp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* e00f0: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* e00f4: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* e00f8: ldrb w8, [x0] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 0)));
  /* e00fc: ldp x9, x11, [x0, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(8));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 11, arc_ld64(_pa + 8));
  }
  /* e0100: mov x19, x3 */
  ARC_X_W(c, 19, ARC_X_R(c, 3));
  /* e0104: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* e0108: lsr x10, x8, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* e010c: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* e0110: csinc x22, x11, x0, ne */
  ARC_X_W(c, 22, (ARC_COND(c, 1) ? (ARC_X_R(c, 11)) : ((ARC_X_R(c, 0)) + 1)));
  /* e0114: csel x8, x10, x9, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* e0118: cmp x2, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 2), ARC_X_R(c, 8));
  /* e011c: csinc x8, x8, x2, hs */
  ARC_X_W(c, 8, (ARC_COND(c, 2) ? (ARC_X_R(c, 8)) : ((ARC_X_R(c, 2)) + 1)));
  /* e0120: sub x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) - UINT64_C(1)));
L_e0124:;
  /* e0124: mov x21, x8 */
  ARC_X_W(c, 21, ARC_X_R(c, 8));
  /* e0128: cmn x8, #1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0);
  /* e012c: b.eq #0xe014c */
  if (ARC_COND(c, 0)) goto L_e014c;
  /* e0130: cbz x19, #0xe014c */
  if ((ARC_X_R(c, 19)) == 0) goto L_e014c;
  /* e0134: ldrb w1, [x22, x21] */
  ARC_W_W(c, 1, arc_ld8((ARC_X_R(c, 22) + ARC_X_R(c, 21))));
  /* e0138: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* e013c: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* e0140: bl #0x1428d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(917828));
  fn1_1428d8(c);
  /* e0144: sub x8, x21, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 21) - UINT64_C(1)));
  /* e0148: cbnz x0, #0xe0124 */
  if ((ARC_X_R(c, 0)) != 0) goto L_e0124;
L_e014c:;
  /* e014c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* e0150: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* e0154: ldp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* e0158: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e015c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* e0160: ret  */
  return;
}

void fn1_e2aac(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038856364));
  /* e2aac: bti c */
  /* bti: no architectural effect here */
  /* e2ab0: b #0xe2ab4 */
  fn1_e2ab4(c); return;
}

void fn1_e6a58(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038872664));
  /* e6a58: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e6a5c: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* e6a60: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e6a64: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* e6a68: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* e6a6c: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* e6a70: lsr x9, x0, #0x20 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 0)) >> ((UINT64_C(32)) & 63)));
  /* e6a74: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* e6a78: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* e6a7c: cbnz x9, #0xe6a94 */
  if ((ARC_X_R(c, 9)) != 0) goto L_e6a94;
  /* e6a80: add x0, sp, #0xb */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(11)));
  /* e6a84: mov w1, w20 */
  ARC_W_W(c, 1, ARC_W_R(c, 20));
  /* e6a88: bl #0xd4eb8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(944780));
  fn1_d4eb8(c);
  /* e6a8c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* e6a90: b #0xe6b88 */
  goto L_e6b88;
L_e6a94:;
  /* e6a94: mov x22, #0xe3ff */
  ARC_X_W(c, 22, UINT64_C(58367));
  /* e6a98: movk x22, #0x540b, lsl #16 */
  ARC_X_W(c, 22, ((ARC_X_R(c, 22) & UINT64_C(18446744069414649855)) | UINT64_C(1410007040)));
  /* e6a9c: movk x22, #2, lsl #32 */
  ARC_X_W(c, 22, ((ARC_X_R(c, 22) & UINT64_C(18446462603027808255)) | UINT64_C(8589934592)));
  /* e6aa0: cmp x20, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 22));
  /* e6aa4: b.ls #0xe6ad8 */
  if (ARC_COND(c, 9)) goto L_e6ad8;
  /* e6aa8: mov x8, #0xd5bf */
  ARC_X_W(c, 8, UINT64_C(54719));
  /* e6aac: add x0, sp, #0xb */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(11)));
  /* e6ab0: movk x8, #0xbded, lsl #16 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(18446744069414649855)) | UINT64_C(3186425856)));
  /* e6ab4: movk x8, #0xfece, lsl #32 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(18446462603027808255)) | UINT64_C(280160716718080)));
  /* e6ab8: movk x8, #0xdbe6, lsl #48 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(281474976710655)) | UINT64_C(15845352338949668864)));
  /* e6abc: umulh x8, x20, x8 */
  ARC_X_W(c, 8, arc_umulh(ARC_X_R(c, 20), ARC_X_R(c, 8)));
  /* e6ac0: lsr x21, x8, #0x21 */
  ARC_X_W(c, 21, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(33)) & 63)));
  /* e6ac4: mov w1, w21 */
  ARC_W_W(c, 1, ARC_W_R(c, 21));
  /* e6ac8: bl #0xd4eb8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(944844));
  fn1_d4eb8(c);
  /* e6acc: madd x8, x21, x22, x21 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 21)) + ((uint64_t)(ARC_X_R(c, 21)) * (uint64_t)(ARC_X_R(c, 22)))));
  /* e6ad0: sub x20, x20, x8 */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) - ARC_X_R(c, 8)));
  /* e6ad4: b #0xe6adc */
  goto L_e6adc;
L_e6ad8:;
  /* e6ad8: add x0, sp, #0xb */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(11)));
L_e6adc:;
  /* e6adc: mov x8, #0xcefd */
  ARC_X_W(c, 8, UINT64_C(52989));
  /* e6ae0: mov w9, #0xe100 */
  ARC_W_W(c, 9, UINT64_C(57600));
  /* e6ae4: mov w11, #0xde83 */
  ARC_W_W(c, 11, UINT64_C(56963));
  /* e6ae8: movk x8, #0x8461, lsl #16 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(18446744069414649855)) | UINT64_C(2220949504)));
  /* e6aec: movk w9, #0x5f5, lsl #16 */
  ARC_W_W(c, 9, ((ARC_W_R(c, 9) & UINT64_C(18446744069414649855)) | UINT64_C(99942400)));
  /* e6af0: movk w11, #0x431b, lsl #16 */
  ARC_W_W(c, 11, ((ARC_W_R(c, 11) & UINT64_C(18446744069414649855)) | UINT64_C(1125842944)));
  /* e6af4: movk x8, #0x7711, lsl #32 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(18446462603027808255)) | UINT64_C(130914898149376)));
  /* e6af8: mov w12, #0x2710 */
  ARC_W_W(c, 12, UINT64_C(10000));
  /* e6afc: movk x8, #0xabcc, lsl #48 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(281474976710655)) | UINT64_C(12379269475734650880)));
  /* e6b00: umulh x8, x20, x8 */
  ARC_X_W(c, 8, arc_umulh(ARC_X_R(c, 20), ARC_X_R(c, 8)));
  /* e6b04: lsr x8, x8, #0x1a */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(26)) & 63)));
  /* e6b08: msub x9, x8, x9, x20 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 20)) - ((uint64_t)(ARC_X_R(c, 8)) * (uint64_t)(ARC_X_R(c, 9)))));
  /* e6b0c: add x20, x0, #0xa */
  ARC_X_W(c, 20, (ARC_X_R(c, 0) + UINT64_C(10)));
  /* e6b10: mov w10, w9 */
  ARC_W_W(c, 10, ARC_W_R(c, 9));
  /* e6b14: umull x10, w10, w11 */
  ARC_X_W(c, 10, (((uint64_t)(uint32_t)(ARC_W_R(c, 10))) * ((uint64_t)(uint32_t)(ARC_W_R(c, 11)))));
  /* e6b18: mov w11, #0x4240 */
  ARC_W_W(c, 11, UINT64_C(16960));
  /* e6b1c: movk w11, #0xf, lsl #16 */
  ARC_W_W(c, 11, ((ARC_W_R(c, 11) & UINT64_C(18446744069414649855)) | UINT64_C(983040)));
  /* e6b20: lsr x10, x10, #0x32 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 10)) >> ((UINT64_C(50)) & 63)));
  /* e6b24: msub w9, w10, w11, w9 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 9)) - ((uint32_t)(ARC_W_R(c, 10)) * (uint32_t)(ARC_W_R(c, 11)))));
  /* e6b28: mov w11, #0x1759 */
  ARC_W_W(c, 11, UINT64_C(5977));
  /* e6b2c: movk w11, #0xd1b7, lsl #16 */
  ARC_W_W(c, 11, ((ARC_W_R(c, 11) & UINT64_C(18446744069414649855)) | UINT64_C(3518431232)));
  /* e6b30: umull x11, w9, w11 */
  ARC_X_W(c, 11, (((uint64_t)(uint32_t)(ARC_W_R(c, 9))) * ((uint64_t)(uint32_t)(ARC_W_R(c, 11)))));
  /* e6b34: lsr x11, x11, #0x2d */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 11)) >> ((UINT64_C(45)) & 63)));
  /* e6b38: msub w9, w11, w12, w9 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 9)) - ((uint32_t)(ARC_W_R(c, 11)) * (uint32_t)(ARC_W_R(c, 12)))));
  /* e6b3c: nop  */
  /* nop: no architectural effect here */
  /* e6b40: adr x12, #0x58470 */
  ARC_X_W(c, 12, (arc_image_bases[1] + UINT64_C(361584)));
  /* e6b44: ldrh w8, [x12, x8, lsl #1] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 12) + ((uint64_t)(ARC_X_R(c, 8)) << 1))));
  /* e6b48: ubfx w13, w9, #2, #0xe */
  ARC_W_W(c, 13, (((uint32_t)(ARC_W_R(c, 9)) >> 2) & UINT64_C(16383)));
  /* e6b4c: strh w8, [x0] */
  arc_st16(ARC_X_R(c, 0), ARC_W_R(c, 8));
  /* e6b50: mov w8, #0x147b */
  ARC_W_W(c, 8, UINT64_C(5243));
  /* e6b54: ldrh w10, [x12, x10, lsl #1] */
  ARC_W_W(c, 10, arc_ld16((ARC_X_R(c, 12) + ((uint64_t)(ARC_X_R(c, 10)) << 1))));
  /* e6b58: mul w8, w13, w8 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 13)) * (uint32_t)(ARC_W_R(c, 8))));
  /* e6b5c: strh w10, [x0, #2] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(2)), ARC_W_R(c, 10));
  /* e6b60: ldrh w10, [x12, x11, lsl #1] */
  ARC_W_W(c, 10, arc_ld16((ARC_X_R(c, 12) + ((uint64_t)(ARC_X_R(c, 11)) << 1))));
  /* e6b64: mov w11, #0x64 */
  ARC_W_W(c, 11, UINT64_C(100));
  /* e6b68: lsr w8, w8, #0x11 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 8)) >> ((UINT64_C(17)) & 31)));
  /* e6b6c: strh w10, [x0, #4] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(4)), ARC_W_R(c, 10));
  /* e6b70: msub w9, w8, w11, w9 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 9)) - ((uint32_t)(ARC_W_R(c, 8)) * (uint32_t)(ARC_W_R(c, 11)))));
  /* e6b74: ldrh w8, [x12, w8, uxtw #1] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 12) + ((uint64_t)(((uint64_t)(uint32_t)(ARC_W_R(c, 8)))) << 1))));
  /* e6b78: strh w8, [x0, #6] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(6)), ARC_W_R(c, 8));
  /* e6b7c: and x8, x9, #0xffff */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) & UINT64_C(65535)));
  /* e6b80: ldrh w8, [x12, x8, lsl #1] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 12) + ((uint64_t)(ARC_X_R(c, 8)) << 1))));
  /* e6b84: strh w8, [x0, #8] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 8));
L_e6b88:;
  /* e6b88: add x8, sp, #0xb */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(11)));
  /* e6b8c: sub x21, x20, x8 */
  ARC_X_W(c, 21, (ARC_X_R(c, 20) - ARC_X_R(c, 8)));
  /* e6b90: mov x8, #0x3ffffffffffffff8 */
  ARC_X_W(c, 8, UINT64_C(4611686018427387896));
  /* e6b94: cmp x21, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 8));
  /* e6b98: b.hs #0xe6cb0 */
  if (ARC_COND(c, 2)) goto L_e6cb0;
  /* e6b9c: cmp x21, #4 */
  (void)arc_sub64(c, ARC_X_R(c, 21), UINT64_C(4));
  /* e6ba0: b.hi #0xe6bb0 */
  if (ARC_COND(c, 8)) goto L_e6bb0;
  /* e6ba4: lsl w8, w21, #1 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 21)) << ((UINT64_C(1)) & 31)));
  /* e6ba8: strb w8, [x19], #4 */
  { const uint64_t _a = ARC_X_R(c, 19);
    ARC_X_W(c, 19, ARC_X_R(c, 19) + INT64_C(4));
    arc_st8(_a, ARC_W_R(c, 8));
  }
  /* e6bac: b #0xe6bd8 */
  goto L_e6bd8;
L_e6bb0:;
  /* e6bb0: orr x8, x21, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 21) | UINT64_C(1)));
  /* e6bb4: mov w9, #8 */
  ARC_W_W(c, 9, UINT64_C(8));
  /* e6bb8: cmp x8, #5 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(5));
  /* e6bbc: csinc x22, x9, x8, eq */
  ARC_X_W(c, 22, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 8)) + 1)));
  /* e6bc0: lsl x0, x22, #2 */
  ARC_X_W(c, 0, ((uint64_t)(ARC_X_R(c, 22)) << ((UINT64_C(2)) & 63)));
  /* e6bc4: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(945096));
  fn1_1428f0(c);
  /* e6bc8: orr x8, x22, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 22) | UINT64_C(1)));
  /* e6bcc: stp x21, x0, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 21));
    arc_st64(_pa + 8, ARC_X_R(c, 0));
  }
  /* e6bd0: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* e6bd4: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
L_e6bd8:;
  /* e6bd8: add x8, sp, #0xb */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(11)));
  /* e6bdc: cmp x8, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 20));
  /* e6be0: b.eq #0xe6bfc */
  if (ARC_COND(c, 0)) goto L_e6bfc;
  /* e6be4: cmp x21, #0x20 */
  (void)arc_sub64(c, ARC_X_R(c, 21), UINT64_C(32));
  /* e6be8: add x11, sp, #0xb */
  ARC_X_W(c, 11, ((c)->sp + UINT64_C(11)));
  /* e6bec: b.hs #0xe6c04 */
  if (ARC_COND(c, 2)) goto L_e6c04;
  /* e6bf0: mov x8, x19 */
  ARC_X_W(c, 8, ARC_X_R(c, 19));
  /* e6bf4: add x9, sp, #0xb */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(11)));
  /* e6bf8: b #0xe6c84 */
  goto L_e6c84;
L_e6bfc:;
  /* e6bfc: mov x8, x19 */
  ARC_X_W(c, 8, ARC_X_R(c, 19));
  /* e6c00: b #0xe6c94 */
  goto L_e6c94;
L_e6c04:;
  /* e6c04: adrp x12, #0x52000 */
  ARC_X_W(c, 12, (arc_image_bases[1] + UINT64_C(335872)));
  /* e6c08: and x10, x21, #0x3fffffffffffffe0 */
  ARC_X_W(c, 10, (ARC_X_R(c, 21) & UINT64_C(4611686018427387872)));
  /* e6c0c: adrp x13, #0x52000 */
  ARC_X_W(c, 13, (arc_image_bases[1] + UINT64_C(335872)));
  /* e6c10: ldr q0, [x12, #0xb70] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 12) + INT64_C(2928))), arc_ld64((ARC_X_R(c, 12) + INT64_C(2928)) + 8));
  /* e6c14: adrp x12, #0x52000 */
  ARC_X_W(c, 12, (arc_image_bases[1] + UINT64_C(335872)));
  /* e6c18: adrp x14, #0x52000 */
  ARC_X_W(c, 14, (arc_image_bases[1] + UINT64_C(335872)));
  /* e6c1c: add x8, x19, x10, lsl #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ((uint64_t)(ARC_X_R(c, 10)) << 2)));
  /* e6c20: ldr q1, [x13, #0xd40] */
  arc_q_w(c, 1, arc_ld64((ARC_X_R(c, 13) + INT64_C(3392))), arc_ld64((ARC_X_R(c, 13) + INT64_C(3392)) + 8));
  /* e6c24: ldr q2, [x12, #0xc50] */
  arc_q_w(c, 2, arc_ld64((ARC_X_R(c, 12) + INT64_C(3152))), arc_ld64((ARC_X_R(c, 12) + INT64_C(3152)) + 8));
  /* e6c28: ldr q3, [x14, #0x940] */
  arc_q_w(c, 3, arc_ld64((ARC_X_R(c, 14) + INT64_C(2368))), arc_ld64((ARC_X_R(c, 14) + INT64_C(2368)) + 8));
  /* e6c2c: add x9, x11, x10 */
  ARC_X_W(c, 9, (ARC_X_R(c, 11) + ARC_X_R(c, 10)));
  /* e6c30: add x11, x11, #0x10 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) + UINT64_C(16)));
  /* e6c34: add x12, x19, #0x40 */
  ARC_X_W(c, 12, (ARC_X_R(c, 19) + UINT64_C(64)));
  /* e6c38: mov x13, x10 */
  ARC_X_W(c, 13, ARC_X_R(c, 10));
L_e6c3c:;
  /* e6c3c: ldp q4, q5, [x11, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 11) + INT64_C(-16));
    arc_q_w(c, 4, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 5, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* e6c40: subs x13, x13, #0x20 */
  ARC_X_W(c, 13, arc_sub64(c, ARC_X_R(c, 13), UINT64_C(32)));
  /* e6c44: add x11, x11, #0x20 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) + UINT64_C(32)));
  /* e6c48: tbl v6.16b, {v4.16b}, v3.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = arc_tbl(c, 4, 1, (c)->q[3].u8[0]);
    _t.u8[1] = arc_tbl(c, 4, 1, (c)->q[3].u8[1]);
    _t.u8[2] = arc_tbl(c, 4, 1, (c)->q[3].u8[2]);
    _t.u8[3] = arc_tbl(c, 4, 1, (c)->q[3].u8[3]);
    _t.u8[4] = arc_tbl(c, 4, 1, (c)->q[3].u8[4]);
    _t.u8[5] = arc_tbl(c, 4, 1, (c)->q[3].u8[5]);
    _t.u8[6] = arc_tbl(c, 4, 1, (c)->q[3].u8[6]);
    _t.u8[7] = arc_tbl(c, 4, 1, (c)->q[3].u8[7]);
    _t.u8[8] = arc_tbl(c, 4, 1, (c)->q[3].u8[8]);
    _t.u8[9] = arc_tbl(c, 4, 1, (c)->q[3].u8[9]);
    _t.u8[10] = arc_tbl(c, 4, 1, (c)->q[3].u8[10]);
    _t.u8[11] = arc_tbl(c, 4, 1, (c)->q[3].u8[11]);
    _t.u8[12] = arc_tbl(c, 4, 1, (c)->q[3].u8[12]);
    _t.u8[13] = arc_tbl(c, 4, 1, (c)->q[3].u8[13]);
    _t.u8[14] = arc_tbl(c, 4, 1, (c)->q[3].u8[14]);
    _t.u8[15] = arc_tbl(c, 4, 1, (c)->q[3].u8[15]);
    (c)->q[6] = _t; }
  /* e6c4c: tbl v7.16b, {v4.16b}, v2.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = arc_tbl(c, 4, 1, (c)->q[2].u8[0]);
    _t.u8[1] = arc_tbl(c, 4, 1, (c)->q[2].u8[1]);
    _t.u8[2] = arc_tbl(c, 4, 1, (c)->q[2].u8[2]);
    _t.u8[3] = arc_tbl(c, 4, 1, (c)->q[2].u8[3]);
    _t.u8[4] = arc_tbl(c, 4, 1, (c)->q[2].u8[4]);
    _t.u8[5] = arc_tbl(c, 4, 1, (c)->q[2].u8[5]);
    _t.u8[6] = arc_tbl(c, 4, 1, (c)->q[2].u8[6]);
    _t.u8[7] = arc_tbl(c, 4, 1, (c)->q[2].u8[7]);
    _t.u8[8] = arc_tbl(c, 4, 1, (c)->q[2].u8[8]);
    _t.u8[9] = arc_tbl(c, 4, 1, (c)->q[2].u8[9]);
    _t.u8[10] = arc_tbl(c, 4, 1, (c)->q[2].u8[10]);
    _t.u8[11] = arc_tbl(c, 4, 1, (c)->q[2].u8[11]);
    _t.u8[12] = arc_tbl(c, 4, 1, (c)->q[2].u8[12]);
    _t.u8[13] = arc_tbl(c, 4, 1, (c)->q[2].u8[13]);
    _t.u8[14] = arc_tbl(c, 4, 1, (c)->q[2].u8[14]);
    _t.u8[15] = arc_tbl(c, 4, 1, (c)->q[2].u8[15]);
    (c)->q[7] = _t; }
  /* e6c50: tbl v16.16b, {v4.16b}, v1.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = arc_tbl(c, 4, 1, (c)->q[1].u8[0]);
    _t.u8[1] = arc_tbl(c, 4, 1, (c)->q[1].u8[1]);
    _t.u8[2] = arc_tbl(c, 4, 1, (c)->q[1].u8[2]);
    _t.u8[3] = arc_tbl(c, 4, 1, (c)->q[1].u8[3]);
    _t.u8[4] = arc_tbl(c, 4, 1, (c)->q[1].u8[4]);
    _t.u8[5] = arc_tbl(c, 4, 1, (c)->q[1].u8[5]);
    _t.u8[6] = arc_tbl(c, 4, 1, (c)->q[1].u8[6]);
    _t.u8[7] = arc_tbl(c, 4, 1, (c)->q[1].u8[7]);
    _t.u8[8] = arc_tbl(c, 4, 1, (c)->q[1].u8[8]);
    _t.u8[9] = arc_tbl(c, 4, 1, (c)->q[1].u8[9]);
    _t.u8[10] = arc_tbl(c, 4, 1, (c)->q[1].u8[10]);
    _t.u8[11] = arc_tbl(c, 4, 1, (c)->q[1].u8[11]);
    _t.u8[12] = arc_tbl(c, 4, 1, (c)->q[1].u8[12]);
    _t.u8[13] = arc_tbl(c, 4, 1, (c)->q[1].u8[13]);
    _t.u8[14] = arc_tbl(c, 4, 1, (c)->q[1].u8[14]);
    _t.u8[15] = arc_tbl(c, 4, 1, (c)->q[1].u8[15]);
    (c)->q[16] = _t; }
  /* e6c54: tbl v4.16b, {v4.16b}, v0.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = arc_tbl(c, 4, 1, (c)->q[0].u8[0]);
    _t.u8[1] = arc_tbl(c, 4, 1, (c)->q[0].u8[1]);
    _t.u8[2] = arc_tbl(c, 4, 1, (c)->q[0].u8[2]);
    _t.u8[3] = arc_tbl(c, 4, 1, (c)->q[0].u8[3]);
    _t.u8[4] = arc_tbl(c, 4, 1, (c)->q[0].u8[4]);
    _t.u8[5] = arc_tbl(c, 4, 1, (c)->q[0].u8[5]);
    _t.u8[6] = arc_tbl(c, 4, 1, (c)->q[0].u8[6]);
    _t.u8[7] = arc_tbl(c, 4, 1, (c)->q[0].u8[7]);
    _t.u8[8] = arc_tbl(c, 4, 1, (c)->q[0].u8[8]);
    _t.u8[9] = arc_tbl(c, 4, 1, (c)->q[0].u8[9]);
    _t.u8[10] = arc_tbl(c, 4, 1, (c)->q[0].u8[10]);
    _t.u8[11] = arc_tbl(c, 4, 1, (c)->q[0].u8[11]);
    _t.u8[12] = arc_tbl(c, 4, 1, (c)->q[0].u8[12]);
    _t.u8[13] = arc_tbl(c, 4, 1, (c)->q[0].u8[13]);
    _t.u8[14] = arc_tbl(c, 4, 1, (c)->q[0].u8[14]);
    _t.u8[15] = arc_tbl(c, 4, 1, (c)->q[0].u8[15]);
    (c)->q[4] = _t; }
  /* e6c58: tbl v17.16b, {v5.16b}, v3.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = arc_tbl(c, 5, 1, (c)->q[3].u8[0]);
    _t.u8[1] = arc_tbl(c, 5, 1, (c)->q[3].u8[1]);
    _t.u8[2] = arc_tbl(c, 5, 1, (c)->q[3].u8[2]);
    _t.u8[3] = arc_tbl(c, 5, 1, (c)->q[3].u8[3]);
    _t.u8[4] = arc_tbl(c, 5, 1, (c)->q[3].u8[4]);
    _t.u8[5] = arc_tbl(c, 5, 1, (c)->q[3].u8[5]);
    _t.u8[6] = arc_tbl(c, 5, 1, (c)->q[3].u8[6]);
    _t.u8[7] = arc_tbl(c, 5, 1, (c)->q[3].u8[7]);
    _t.u8[8] = arc_tbl(c, 5, 1, (c)->q[3].u8[8]);
    _t.u8[9] = arc_tbl(c, 5, 1, (c)->q[3].u8[9]);
    _t.u8[10] = arc_tbl(c, 5, 1, (c)->q[3].u8[10]);
    _t.u8[11] = arc_tbl(c, 5, 1, (c)->q[3].u8[11]);
    _t.u8[12] = arc_tbl(c, 5, 1, (c)->q[3].u8[12]);
    _t.u8[13] = arc_tbl(c, 5, 1, (c)->q[3].u8[13]);
    _t.u8[14] = arc_tbl(c, 5, 1, (c)->q[3].u8[14]);
    _t.u8[15] = arc_tbl(c, 5, 1, (c)->q[3].u8[15]);
    (c)->q[17] = _t; }
  /* e6c5c: stp q7, q6, [x12, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 12) + INT64_C(-32));
    arc_st64(_pa, (c)->q[7].u64[0]);
    arc_st64(_pa + 8, (c)->q[7].u64[1]);
    arc_st64((_pa + 16), (c)->q[6].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[6].u64[1]);
  }
  /* e6c60: tbl v6.16b, {v5.16b}, v2.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = arc_tbl(c, 5, 1, (c)->q[2].u8[0]);
    _t.u8[1] = arc_tbl(c, 5, 1, (c)->q[2].u8[1]);
    _t.u8[2] = arc_tbl(c, 5, 1, (c)->q[2].u8[2]);
    _t.u8[3] = arc_tbl(c, 5, 1, (c)->q[2].u8[3]);
    _t.u8[4] = arc_tbl(c, 5, 1, (c)->q[2].u8[4]);
    _t.u8[5] = arc_tbl(c, 5, 1, (c)->q[2].u8[5]);
    _t.u8[6] = arc_tbl(c, 5, 1, (c)->q[2].u8[6]);
    _t.u8[7] = arc_tbl(c, 5, 1, (c)->q[2].u8[7]);
    _t.u8[8] = arc_tbl(c, 5, 1, (c)->q[2].u8[8]);
    _t.u8[9] = arc_tbl(c, 5, 1, (c)->q[2].u8[9]);
    _t.u8[10] = arc_tbl(c, 5, 1, (c)->q[2].u8[10]);
    _t.u8[11] = arc_tbl(c, 5, 1, (c)->q[2].u8[11]);
    _t.u8[12] = arc_tbl(c, 5, 1, (c)->q[2].u8[12]);
    _t.u8[13] = arc_tbl(c, 5, 1, (c)->q[2].u8[13]);
    _t.u8[14] = arc_tbl(c, 5, 1, (c)->q[2].u8[14]);
    _t.u8[15] = arc_tbl(c, 5, 1, (c)->q[2].u8[15]);
    (c)->q[6] = _t; }
  /* e6c64: tbl v7.16b, {v5.16b}, v1.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = arc_tbl(c, 5, 1, (c)->q[1].u8[0]);
    _t.u8[1] = arc_tbl(c, 5, 1, (c)->q[1].u8[1]);
    _t.u8[2] = arc_tbl(c, 5, 1, (c)->q[1].u8[2]);
    _t.u8[3] = arc_tbl(c, 5, 1, (c)->q[1].u8[3]);
    _t.u8[4] = arc_tbl(c, 5, 1, (c)->q[1].u8[4]);
    _t.u8[5] = arc_tbl(c, 5, 1, (c)->q[1].u8[5]);
    _t.u8[6] = arc_tbl(c, 5, 1, (c)->q[1].u8[6]);
    _t.u8[7] = arc_tbl(c, 5, 1, (c)->q[1].u8[7]);
    _t.u8[8] = arc_tbl(c, 5, 1, (c)->q[1].u8[8]);
    _t.u8[9] = arc_tbl(c, 5, 1, (c)->q[1].u8[9]);
    _t.u8[10] = arc_tbl(c, 5, 1, (c)->q[1].u8[10]);
    _t.u8[11] = arc_tbl(c, 5, 1, (c)->q[1].u8[11]);
    _t.u8[12] = arc_tbl(c, 5, 1, (c)->q[1].u8[12]);
    _t.u8[13] = arc_tbl(c, 5, 1, (c)->q[1].u8[13]);
    _t.u8[14] = arc_tbl(c, 5, 1, (c)->q[1].u8[14]);
    _t.u8[15] = arc_tbl(c, 5, 1, (c)->q[1].u8[15]);
    (c)->q[7] = _t; }
  /* e6c68: tbl v5.16b, {v5.16b}, v0.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = arc_tbl(c, 5, 1, (c)->q[0].u8[0]);
    _t.u8[1] = arc_tbl(c, 5, 1, (c)->q[0].u8[1]);
    _t.u8[2] = arc_tbl(c, 5, 1, (c)->q[0].u8[2]);
    _t.u8[3] = arc_tbl(c, 5, 1, (c)->q[0].u8[3]);
    _t.u8[4] = arc_tbl(c, 5, 1, (c)->q[0].u8[4]);
    _t.u8[5] = arc_tbl(c, 5, 1, (c)->q[0].u8[5]);
    _t.u8[6] = arc_tbl(c, 5, 1, (c)->q[0].u8[6]);
    _t.u8[7] = arc_tbl(c, 5, 1, (c)->q[0].u8[7]);
    _t.u8[8] = arc_tbl(c, 5, 1, (c)->q[0].u8[8]);
    _t.u8[9] = arc_tbl(c, 5, 1, (c)->q[0].u8[9]);
    _t.u8[10] = arc_tbl(c, 5, 1, (c)->q[0].u8[10]);
    _t.u8[11] = arc_tbl(c, 5, 1, (c)->q[0].u8[11]);
    _t.u8[12] = arc_tbl(c, 5, 1, (c)->q[0].u8[12]);
    _t.u8[13] = arc_tbl(c, 5, 1, (c)->q[0].u8[13]);
    _t.u8[14] = arc_tbl(c, 5, 1, (c)->q[0].u8[14]);
    _t.u8[15] = arc_tbl(c, 5, 1, (c)->q[0].u8[15]);
    (c)->q[5] = _t; }
  /* e6c6c: stp q4, q16, [x12, #-0x40] */
  { const uint64_t _pa = (ARC_X_R(c, 12) + INT64_C(-64));
    arc_st64(_pa, (c)->q[4].u64[0]);
    arc_st64(_pa + 8, (c)->q[4].u64[1]);
    arc_st64((_pa + 16), (c)->q[16].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[16].u64[1]);
  }
  /* e6c70: stp q6, q17, [x12, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 12) + INT64_C(32));
    arc_st64(_pa, (c)->q[6].u64[0]);
    arc_st64(_pa + 8, (c)->q[6].u64[1]);
    arc_st64((_pa + 16), (c)->q[17].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[17].u64[1]);
  }
  /* e6c74: stp q5, q7, [x12], #0x80 */
  { const uint64_t _pa = ARC_X_R(c, 12);
    ARC_X_W(c, 12, ARC_X_R(c, 12) + INT64_C(128));
    arc_st64(_pa, (c)->q[5].u64[0]);
    arc_st64(_pa + 8, (c)->q[5].u64[1]);
    arc_st64((_pa + 16), (c)->q[7].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[7].u64[1]);
  }
  /* e6c78: b.ne #0xe6c3c */
  if (ARC_COND(c, 1)) goto L_e6c3c;
  /* e6c7c: cmp x21, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 10));
  /* e6c80: b.eq #0xe6c94 */
  if (ARC_COND(c, 0)) goto L_e6c94;
L_e6c84:;
  /* e6c84: ldrb w10, [x9], #1 */
  { const uint64_t _a = ARC_X_R(c, 9);
    ARC_X_W(c, 9, ARC_X_R(c, 9) + INT64_C(1));
    ARC_W_W(c, 10, arc_ld8(_a));
  }
  /* e6c88: cmp x9, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 20));
  /* e6c8c: str w10, [x8], #4 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(4));
    arc_st32(_a, ARC_W_R(c, 10));
  }
  /* e6c90: b.ne #0xe6c84 */
  if (ARC_COND(c, 1)) goto L_e6c84;
L_e6c94:;
  /* e6c94: str wzr, [x8] */
  arc_st32(ARC_X_R(c, 8), ARC_W_R(c, 31));
  /* e6c98: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* e6c9c: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* e6ca0: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e6ca4: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* e6ca8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* e6cac: ret  */
  return;
L_e6cb0:;
  /* e6cb0: bl #0xe2274 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(945332));
  fn1_e2274(c);
}

void fn1_e99b4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038884788));
  /* e99b4: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e99b8: sub sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(96)));
  /* e99bc: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e99c0: stp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* e99c4: stp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* e99c8: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* e99cc: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* e99d0: ldr x8, [x2] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 2)));
  /* e99d4: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* e99d8: mov x0, x2 */
  ARC_X_W(c, 0, ARC_X_R(c, 2));
  /* e99dc: mov x19, x2 */
  ARC_X_W(c, 19, ARC_X_R(c, 2));
  /* e99e0: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* e99e4: add x22, sp, #8 */
  ARC_X_W(c, 22, ((c)->sp + UINT64_C(8)));
  /* e99e8: ldr x9, [x8, #0x30] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(48))));
  /* e99ec: add x8, sp, #8 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(8)));
  /* e99f0: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(956916));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* e99f4: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* e99f8: ldr x8, [x8, #0x908] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2312))));
  /* e99fc: ldrb w9, [sp, #8] */
  ARC_W_W(c, 9, arc_ld8(((c)->sp + INT64_C(8))));
  /* e9a00: ldr x10, [sp, #0x18] */
  ARC_X_W(c, 10, arc_ld64(((c)->sp + INT64_C(24))));
  /* e9a04: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* e9a08: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* e9a0c: csinc x22, x10, x22, ne */
  ARC_X_W(c, 22, (ARC_COND(c, 1) ? (ARC_X_R(c, 10)) : ((ARC_X_R(c, 22)) + 1)));
  /* e9a10: str x8, [x21] */
  arc_st64(ARC_X_R(c, 21), ARC_X_R(c, 8));
  /* e9a14: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* e9a18: bl #0x142860 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(956956));
  fn1_142860(c);
  /* e9a1c: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* e9a20: add x0, x0, #0x19 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(25)));
  /* e9a24: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(956968));
  fn1_1428f0(c);
  /* e9a28: add x24, x0, #0x18 */
  ARC_X_W(c, 24, (ARC_X_R(c, 0) + UINT64_C(24)));
  /* e9a2c: stp x23, x23, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 23));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* e9a30: add x2, x23, #1 */
  ARC_X_W(c, 2, (ARC_X_R(c, 23) + UINT64_C(1)));
  /* e9a34: str wzr, [x0, #0x10] */
  arc_st32((ARC_X_R(c, 0) + INT64_C(16)), ARC_W_R(c, 31));
  /* e9a38: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* e9a3c: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* e9a40: bl #0x1449d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(956996));
  fn1_1449d8(c);
  /* e9a44: ldrb w8, [sp, #8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(8))));
  /* e9a48: str x24, [x21, #8] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(8)), ARC_X_R(c, 24));
  /* e9a4c: tbz w8, #0, #0xe9a60 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_e9a60;
  /* e9a50: ldr x8, [sp, #8] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(8))));
  /* e9a54: ldr x0, [sp, #0x18] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(24))));
  /* e9a58: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* e9a5c: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(957024));
  fn1_142608(c);
L_e9a60:;
  /* e9a60: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* e9a64: ldr x8, [x8, #0xa60] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2656))));
  /* e9a68: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* e9a6c: str x8, [x21] */
  arc_st64(ARC_X_R(c, 21), ARC_X_R(c, 8));
  /* e9a70: stp x20, x19, [x21, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* e9a74: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* e9a78: ldp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* e9a7c: ldp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* e9a80: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e9a84: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* e9a88: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* e9a8c: ret  */
  return;
  /* e9a90: ldrb w8, [sp, #8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(8))));
  /* e9a94: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* e9a98: tbz w8, #0, #0xe9aac */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_e9aac;
  /* e9a9c: ldr x8, [sp, #8] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(8))));
  /* e9aa0: ldr x0, [sp, #0x18] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(24))));
  /* e9aa4: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* e9aa8: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(957100));
  fn1_142608(c);
L_e9aac:;
  /* e9aac: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* e9ab0: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(957108));
  fn1_9cc20(c);
}

void fn1_eb7c4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038892484));
  /* eb7c4: bti c */
  /* bti: no architectural effect here */
  /* eb7c8: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* eb7cc: cbnz x8, #0xeb7d4 */
  if ((ARC_X_R(c, 8)) != 0) goto L_eb7d4;
  /* eb7d0: ret  */
  return;
L_eb7d4:;
  /* eb7d4: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* eb7d8: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* eb7dc: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* eb7e0: bl #0x142488 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(964580));
  fn1_142488(c);
}

void fn1_ed3f0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038899696));
  /* ed3f0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* ed3f4: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* ed3f8: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* ed3fc: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* ed400: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* ed404: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* ed408: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* ed40c: adrp x21, #0x15d000 */
  ARC_X_W(c, 21, (arc_image_bases[1] + UINT64_C(1429504)));
  /* ed410: ldr x8, [x8, #0xaa8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2728))));
  /* ed414: nop  */
  /* nop: no architectural effect here */
  /* ed418: adr x20, #0x15dc40 */
  ARC_X_W(c, 20, (arc_image_bases[1] + UINT64_C(1432640)));
  /* ed41c: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* ed420: str x8, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* ed424: nop  */
  /* nop: no architectural effect here */
  /* ed428: adr x8, #0x15dd90 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1432976)));
  /* ed42c: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* ed430: tbz w8, #0, #0xed470 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_ed470;
L_ed434:;
  /* ed434: ldr x8, [x21, #0xd88] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 21) + INT64_C(3464))));
  /* ed438: cmp x8, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 20));
  /* ed43c: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
  /* ed440: b.eq #0xed450 */
  if (ARC_COND(c, 0)) goto L_ed450;
  /* ed444: add x1, x8, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) + UINT64_C(8)));
  /* ed448: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* ed44c: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(971856));
  fn1_db2e0(c);
L_ed450:;
  /* ed450: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* ed454: stp q0, q0, [x19, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(32));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* ed458: str q0, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)) + 8, (c)->q[0].u64[1]);
  /* ed45c: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* ed460: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* ed464: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ed468: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* ed46c: ret  */
  return;
L_ed470:;
  /* ed470: nop  */
  /* nop: no architectural effect here */
  /* ed474: adr x0, #0x15dd90 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432976)));
  /* ed478: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(971900));
  fn1_1424b8(c);
  /* ed47c: cbz w0, #0xed434 */
  if ((ARC_W_R(c, 0)) == 0) goto L_ed434;
  /* ed480: bl #0x143ac0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(971908));
  fn1_143ac0(c);
  /* ed484: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* ed488: cmp x8, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 20));
  /* ed48c: str x8, [x21, #0xd88] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(3464)), ARC_X_R(c, 8));
  /* ed490: b.eq #0xed4a0 */
  if (ARC_COND(c, 0)) goto L_ed4a0;
  /* ed494: add x1, x8, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) + UINT64_C(8)));
  /* ed498: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* ed49c: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(971936));
  fn1_db2e0(c);
L_ed4a0:;
  /* ed4a0: nop  */
  /* nop: no architectural effect here */
  /* ed4a4: adr x0, #0x15dd90 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432976)));
  /* ed4a8: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(971948));
  fn1_1424d0(c);
  /* ed4ac: b #0xed434 */
  goto L_ed434;
  /* ed4b0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* ed4b4: nop  */
  /* nop: no architectural effect here */
  /* ed4b8: adr x0, #0x15dd90 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432976)));
  /* ed4bc: bl #0x1424e8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(971968));
  fn1_1424e8(c);
  /* ed4c0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ed4c4: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(971976));
  fn1_a1454(c);
}

void fn1_f0e54(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038914644));
  /* f0e54: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* f0e58: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* f0e5c: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* f0e60: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* f0e64: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* f0e68: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* f0e6c: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* f0e70: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f0e74: add x8, x0, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* f0e78: ldr x9, [x8, #0x28] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* f0e7c: cmp x9, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(0));
  /* f0e80: ldp w10, w9, [x8, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 8) + INT64_C(32));
    ARC_W_W(c, 10, arc_ld32(_pa));
    ARC_W_W(c, 9, arc_ld32(_pa + 4));
  }
  /* f0e84: and w22, w10, #0xfffffffd */
  ARC_W_W(c, 22, (ARC_W_R(c, 10) & UINT64_C(4294967293)));
  /* f0e88: cset w10, eq */
  ARC_W_W(c, 10, (ARC_COND(c, 0) ? 1 : 0));
  /* f0e8c: orr w10, w22, w10 */
  ARC_W_W(c, 10, (ARC_W_R(c, 22) | ARC_W_R(c, 10)));
  /* f0e90: tst w10, w9 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 10) & ARC_W_R(c, 9)));
  /* f0e94: str w10, [x8, #0x20] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(32)), ARC_W_R(c, 10));
  /* f0e98: b.ne #0xf0f44 */
  if (ARC_COND(c, 1)) goto L_f0f44;
  /* f0e9c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f0ea0: mov w20, w2 */
  ARC_W_W(c, 20, ARC_W_R(c, 2));
  /* f0ea4: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* f0ea8: sub x0, x29, #4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(4)));
  /* f0eac: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* f0eb0: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* f0eb4: bl #0x1435f8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(986808));
  fn1_1435f8(c);
  /* f0eb8: ldurb w8, [x29, #-4] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-4))));
  /* f0ebc: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* f0ec0: b.ne #0xf0f28 */
  if (ARC_COND(c, 1)) goto L_f0f28;
  /* f0ec4: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f0ec8: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f0ecc: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f0ed0: ldr x0, [x8, #0x28] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* f0ed4: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* f0ed8: ldr x8, [x8, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* f0edc: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* f0ee0: mov w2, w20 */
  ARC_W_W(c, 2, ARC_W_R(c, 20));
  /* f0ee4: mov w3, #8 */
  ARC_W_W(c, 3, UINT64_C(8));
  /* f0ee8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(986860));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* f0eec: orr w8, w22, #4 */
  ARC_W_W(c, 8, (ARC_W_R(c, 22) | UINT64_C(4)));
  /* f0ef0: cmn x1, #1 */
  (void)arc_add64(c, ARC_X_R(c, 1), UINT64_C(1), 0);
  /* f0ef4: csel w20, w8, w22, eq */
  ARC_W_W(c, 20, (ARC_COND(c, 0) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 22)));
L_f0ef8:;
  /* f0ef8: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f0efc: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f0f00: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f0f04: ldr x9, [x8, #0x28] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* f0f08: cmp x9, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(0));
  /* f0f0c: ldp w9, w11, [x8, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 8) + INT64_C(32));
    ARC_W_W(c, 9, arc_ld32(_pa));
    ARC_W_W(c, 11, arc_ld32(_pa + 4));
  }
  /* f0f10: cset w10, eq */
  ARC_W_W(c, 10, (ARC_COND(c, 0) ? 1 : 0));
  /* f0f14: orr w9, w9, w10 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | ARC_W_R(c, 10)));
  /* f0f18: orr w9, w9, w20 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | ARC_W_R(c, 20)));
  /* f0f1c: tst w9, w11 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & ARC_W_R(c, 11)));
  /* f0f20: str w9, [x8, #0x20] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(32)), ARC_W_R(c, 9));
  /* f0f24: b.ne #0xf0f44 */
  if (ARC_COND(c, 1)) goto L_f0f44;
L_f0f28:;
  /* f0f28: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f0f2c: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* f0f30: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* f0f34: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* f0f38: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* f0f3c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* f0f40: ret  */
  return;
L_f0f44:;
  /* f0f44: nop  */
  /* nop: no architectural effect here */
  /* f0f48: adr x0, #0x50210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(328208)));
  /* f0f4c: bl #0xec720 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(986960));
  fn1_ec720(c);
  /* f0f50: bl #0x142548 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(986964));
  fn1_142548(c);
  /* f0f54: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f0f58: orr w20, w22, #1 */
  ARC_W_W(c, 20, (ARC_W_R(c, 22) | UINT64_C(1)));
  /* f0f5c: ldur x9, [x8, #-0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f0f60: add x9, x19, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + ARC_X_R(c, 9)));
  /* f0f64: ldr w10, [x9, #0x20] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 9) + INT64_C(32))));
  /* f0f68: orr w10, w10, w20 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) | ARC_W_R(c, 20)));
  /* f0f6c: str w10, [x9, #0x20] */
  arc_st32((ARC_X_R(c, 9) + INT64_C(32)), ARC_W_R(c, 10));
  /* f0f70: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f0f74: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f0f78: ldrb w8, [x8, #0x24] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 8) + INT64_C(36))));
  /* f0f7c: tbnz w8, #0, #0xf0f88 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_f0f88;
  /* f0f80: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(987012));
  fn1_142980(c);
  /* f0f84: b #0xf0ef8 */
  goto L_f0ef8;
L_f0f88:;
  /* f0f88: bl #0x1429b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(987020));
  fn1_1429b0(c);
  /* f0f8c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f0f90: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(987028));
  fn1_142980(c);
  /* f0f94: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f0f98: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(987036));
  fn1_9cc20(c);
  /* f0f9c: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(987040));
  fn1_a1454(c);
}

void fn1_f3e20(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038926880));
  /* f3e20: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* f3e24: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* f3e28: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* f3e2c: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* f3e30: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* f3e34: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* f3e38: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f3e3c: adrp x21, #0x15d000 */
  ARC_X_W(c, 21, (arc_image_bases[1] + UINT64_C(1429504)));
  /* f3e40: ldr x8, [x8, #0xac8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2760))));
  /* f3e44: nop  */
  /* nop: no architectural effect here */
  /* f3e48: adr x20, #0x15dc40 */
  ARC_X_W(c, 20, (arc_image_bases[1] + UINT64_C(1432640)));
  /* f3e4c: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* f3e50: str x8, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* f3e54: nop  */
  /* nop: no architectural effect here */
  /* f3e58: adr x8, #0x15dd90 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1432976)));
  /* f3e5c: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* f3e60: tbz w8, #0, #0xf3ea0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_f3ea0;
L_f3e64:;
  /* f3e64: ldr x8, [x21, #0xd88] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 21) + INT64_C(3464))));
  /* f3e68: cmp x8, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 20));
  /* f3e6c: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
  /* f3e70: b.eq #0xf3e80 */
  if (ARC_COND(c, 0)) goto L_f3e80;
  /* f3e74: add x1, x8, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) + UINT64_C(8)));
  /* f3e78: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* f3e7c: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(999040));
  fn1_db2e0(c);
L_f3e80:;
  /* f3e80: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* f3e84: stp q0, q0, [x19, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(32));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* f3e88: str q0, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)) + 8, (c)->q[0].u64[1]);
  /* f3e8c: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* f3e90: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* f3e94: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* f3e98: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* f3e9c: ret  */
  return;
L_f3ea0:;
  /* f3ea0: nop  */
  /* nop: no architectural effect here */
  /* f3ea4: adr x0, #0x15dd90 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432976)));
  /* f3ea8: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(999084));
  fn1_1424b8(c);
  /* f3eac: cbz w0, #0xf3e64 */
  if ((ARC_W_R(c, 0)) == 0) goto L_f3e64;
  /* f3eb0: bl #0x143ac0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(999092));
  fn1_143ac0(c);
  /* f3eb4: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* f3eb8: cmp x8, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 20));
  /* f3ebc: str x8, [x21, #0xd88] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(3464)), ARC_X_R(c, 8));
  /* f3ec0: b.eq #0xf3ed0 */
  if (ARC_COND(c, 0)) goto L_f3ed0;
  /* f3ec4: add x1, x8, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) + UINT64_C(8)));
  /* f3ec8: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* f3ecc: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(999120));
  fn1_db2e0(c);
L_f3ed0:;
  /* f3ed0: nop  */
  /* nop: no architectural effect here */
  /* f3ed4: adr x0, #0x15dd90 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432976)));
  /* f3ed8: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(999132));
  fn1_1424d0(c);
  /* f3edc: b #0xf3e64 */
  goto L_f3e64;
  /* f3ee0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f3ee4: nop  */
  /* nop: no architectural effect here */
  /* f3ee8: adr x0, #0x15dd90 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432976)));
  /* f3eec: bl #0x1424e8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(999152));
  fn1_1424e8(c);
  /* f3ef0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f3ef4: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(999160));
  fn1_a1454(c);
}

void fn1_f788c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038941836));
  /* f788c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* f7890: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* f7894: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* f7898: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* f789c: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* f78a0: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* f78a4: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* f78a8: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f78ac: add x8, x0, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* f78b0: ldr x9, [x8, #0x28] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* f78b4: cmp x9, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(0));
  /* f78b8: ldp w10, w9, [x8, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 8) + INT64_C(32));
    ARC_W_W(c, 10, arc_ld32(_pa));
    ARC_W_W(c, 9, arc_ld32(_pa + 4));
  }
  /* f78bc: and w22, w10, #0xfffffffd */
  ARC_W_W(c, 22, (ARC_W_R(c, 10) & UINT64_C(4294967293)));
  /* f78c0: cset w10, eq */
  ARC_W_W(c, 10, (ARC_COND(c, 0) ? 1 : 0));
  /* f78c4: orr w10, w22, w10 */
  ARC_W_W(c, 10, (ARC_W_R(c, 22) | ARC_W_R(c, 10)));
  /* f78c8: tst w10, w9 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 10) & ARC_W_R(c, 9)));
  /* f78cc: str w10, [x8, #0x20] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(32)), ARC_W_R(c, 10));
  /* f78d0: b.ne #0xf797c */
  if (ARC_COND(c, 1)) goto L_f797c;
  /* f78d4: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f78d8: mov w20, w2 */
  ARC_W_W(c, 20, ARC_W_R(c, 2));
  /* f78dc: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* f78e0: sub x0, x29, #4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(4)));
  /* f78e4: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* f78e8: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* f78ec: bl #0x143670 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1014000));
  fn1_143670(c);
  /* f78f0: ldurb w8, [x29, #-4] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-4))));
  /* f78f4: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* f78f8: b.ne #0xf7960 */
  if (ARC_COND(c, 1)) goto L_f7960;
  /* f78fc: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f7900: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f7904: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f7908: ldr x0, [x8, #0x28] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* f790c: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* f7910: ldr x8, [x8, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* f7914: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* f7918: mov w2, w20 */
  ARC_W_W(c, 2, ARC_W_R(c, 20));
  /* f791c: mov w3, #8 */
  ARC_W_W(c, 3, UINT64_C(8));
  /* f7920: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1014052));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* f7924: orr w8, w22, #4 */
  ARC_W_W(c, 8, (ARC_W_R(c, 22) | UINT64_C(4)));
  /* f7928: cmn x1, #1 */
  (void)arc_add64(c, ARC_X_R(c, 1), UINT64_C(1), 0);
  /* f792c: csel w20, w8, w22, eq */
  ARC_W_W(c, 20, (ARC_COND(c, 0) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 22)));
L_f7930:;
  /* f7930: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f7934: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f7938: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f793c: ldr x9, [x8, #0x28] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* f7940: cmp x9, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(0));
  /* f7944: ldp w9, w11, [x8, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 8) + INT64_C(32));
    ARC_W_W(c, 9, arc_ld32(_pa));
    ARC_W_W(c, 11, arc_ld32(_pa + 4));
  }
  /* f7948: cset w10, eq */
  ARC_W_W(c, 10, (ARC_COND(c, 0) ? 1 : 0));
  /* f794c: orr w9, w9, w10 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | ARC_W_R(c, 10)));
  /* f7950: orr w9, w9, w20 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | ARC_W_R(c, 20)));
  /* f7954: tst w9, w11 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & ARC_W_R(c, 11)));
  /* f7958: str w9, [x8, #0x20] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(32)), ARC_W_R(c, 9));
  /* f795c: b.ne #0xf797c */
  if (ARC_COND(c, 1)) goto L_f797c;
L_f7960:;
  /* f7960: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f7964: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* f7968: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* f796c: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* f7970: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* f7974: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* f7978: ret  */
  return;
L_f797c:;
  /* f797c: nop  */
  /* nop: no architectural effect here */
  /* f7980: adr x0, #0x50210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(328208)));
  /* f7984: bl #0xec720 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1014152));
  fn1_ec720(c);
  /* f7988: bl #0x142548 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1014156));
  fn1_142548(c);
  /* f798c: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f7990: orr w20, w22, #1 */
  ARC_W_W(c, 20, (ARC_W_R(c, 22) | UINT64_C(1)));
  /* f7994: ldur x9, [x8, #-0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f7998: add x9, x19, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + ARC_X_R(c, 9)));
  /* f799c: ldr w10, [x9, #0x20] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 9) + INT64_C(32))));
  /* f79a0: orr w10, w10, w20 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) | ARC_W_R(c, 20)));
  /* f79a4: str w10, [x9, #0x20] */
  arc_st32((ARC_X_R(c, 9) + INT64_C(32)), ARC_W_R(c, 10));
  /* f79a8: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f79ac: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f79b0: ldrb w8, [x8, #0x24] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 8) + INT64_C(36))));
  /* f79b4: tbnz w8, #0, #0xf79c0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_f79c0;
  /* f79b8: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1014204));
  fn1_142980(c);
  /* f79bc: b #0xf7930 */
  goto L_f7930;
L_f79c0:;
  /* f79c0: bl #0x1429b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1014212));
  fn1_1429b0(c);
  /* f79c4: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f79c8: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1014220));
  fn1_142980(c);
  /* f79cc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f79d0: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1014228));
  fn1_9cc20(c);
  /* f79d4: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1014232));
  fn1_a1454(c);
}

void fn1_fc808(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038962184));
  /* fc808: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* fc80c: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* fc810: stp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* fc814: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* fc818: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* fc81c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* fc820: ldr x0, [x0, #0x80] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(128))));
  /* fc824: cbz x0, #0xfc8d0 */
  if ((ARC_X_R(c, 0)) == 0) goto L_fc8d0;
  /* fc828: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* fc82c: mov w20, w2 */
  ARC_W_W(c, 20, ARC_W_R(c, 2));
  /* fc830: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* fc834: ldr x8, [x8, #0x30] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(48))));
  /* fc838: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1034300));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* fc83c: ldr x8, [x19, #0x78] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(120))));
  /* fc840: cbz x8, #0xfc89c */
  if ((ARC_X_R(c, 8)) == 0) goto L_fc89c;
  /* fc844: cbz x21, #0xfc850 */
  if ((ARC_X_R(c, 21)) == 0) goto L_fc850;
  /* fc848: cmp w0, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(1));
  /* fc84c: b.lt #0xfc89c */
  if (ARC_COND(c, 11)) goto L_fc89c;
L_fc850:;
  /* fc850: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* fc854: mov w22, w0 */
  ARC_W_W(c, 22, ARC_W_R(c, 0));
  /* fc858: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* fc85c: ldr x8, [x8, #0x30] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(48))));
  /* fc860: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1034340));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* fc864: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* fc868: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
  /* fc86c: cmp w20, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 20), UINT64_C(2));
  /* fc870: mov x1, #-1 */
  ARC_X_W(c, 1, UINT64_C(18446744073709551615));
  /* fc874: b.hi #0xfc8a4 */
  if (ARC_COND(c, 8)) goto L_fc8a4;
  /* fc878: cbnz w8, #0xfc8a4 */
  if ((ARC_W_R(c, 8)) != 0) goto L_fc8a4;
  /* fc87c: mov w8, w22 */
  ARC_W_W(c, 8, ARC_W_R(c, 22));
  /* fc880: ldr x0, [x19, #0x78] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(120))));
  /* fc884: cmp w22, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 22), UINT64_C(0));
  /* fc888: mul x8, x21, x8 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 21)) * (uint64_t)(ARC_X_R(c, 8))));
  /* fc88c: mov w2, w20 */
  ARC_W_W(c, 2, ARC_W_R(c, 20));
  /* fc890: csel x1, x8, xzr, gt */
  ARC_X_W(c, 1, (ARC_COND(c, 12) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 31)));
  /* fc894: bl #0x1437a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1034392));
  fn1_1437a8(c);
  /* fc898: cbz w0, #0xfc8b8 */
  if ((ARC_W_R(c, 0)) == 0) goto L_fc8b8;
L_fc89c:;
  /* fc89c: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
  /* fc8a0: mov x1, #-1 */
  ARC_X_W(c, 1, UINT64_C(18446744073709551615));
L_fc8a4:;
  /* fc8a4: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* fc8a8: ldp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* fc8ac: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* fc8b0: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* fc8b4: ret  */
  return;
L_fc8b8:;
  /* fc8b8: ldr x0, [x19, #0x78] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(120))));
  /* fc8bc: bl #0x1437c0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1034432));
  fn1_1437c0(c);
  /* fc8c0: ldr x8, [x19, #0x88] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(136))));
  /* fc8c4: mov x1, x0 */
  ARC_X_W(c, 1, ARC_X_R(c, 0));
  /* fc8c8: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* fc8cc: b #0xfc8a4 */
  goto L_fc8a4;
L_fc8d0:;
  /* fc8d0: bl #0xfc3b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1034452));
  fn1_fc3b8(c);
}

void fn1_ff538(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038973752));
  /* ff538: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* ff53c: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* ff540: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* ff544: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* ff548: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* ff54c: bl #0x143da8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1045840));
  fn1_143da8(c);
  /* ff550: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ff554: mov w1, #0x10 */
  ARC_W_W(c, 1, UINT64_C(16));
  /* ff558: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* ff55c: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ff560: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* ff564: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_10f6a0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039039648));
  /* 10f6a0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 10f6a4: sub sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(112)));
  /* 10f6a8: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 10f6ac: stp x26, x25, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* 10f6b0: stp x24, x23, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 10f6b4: stp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 10f6b8: stp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 10f6bc: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 10f6c0: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 10f6c4: str x1, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 1));
  /* 10f6c8: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 10f6cc: add x1, x3, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 3) + UINT64_C(48)));
  /* 10f6d0: mov x19, x5 */
  ARC_X_W(c, 19, ARC_X_R(c, 5));
  /* 10f6d4: mov x20, x4 */
  ARC_X_W(c, 20, ARC_X_R(c, 4));
  /* 10f6d8: mov x21, x2 */
  ARC_X_W(c, 21, ARC_X_R(c, 2));
  /* 10f6dc: bl #0x143460 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1111776));
  fn1_143460(c);
  /* 10f6e0: adrp x26, #0x151000 */
  ARC_X_W(c, 26, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 10f6e4: ldr x26, [x26, #0xb40] */
  ARC_X_W(c, 26, arc_ld64((ARC_X_R(c, 26) + INT64_C(2880))));
  /* 10f6e8: ldr x25, [sp] */
  ARC_X_W(c, 25, arc_ld64((c)->sp));
  /* 10f6ec: ldar x8, [x26] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 26)));
  /* 10f6f0: cmn x8, #1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0);
  /* 10f6f4: b.eq #0x10f7b0 */
  if (ARC_COND(c, 0)) goto L_10f7b0;
  /* 10f6f8: nop  */
  /* nop: no architectural effect here */
  /* 10f6fc: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 10f700: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1111812));
  fn1_142518(c);
  /* 10f704: ldr x8, [x26] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 26)));
  /* 10f708: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 10f70c: b.ne #0x10f738 */
  if (ARC_COND(c, 1)) goto L_10f738;
  /* 10f710: nop  */
  /* nop: no architectural effect here */
  /* 10f714: adr x23, #0x15791c */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 10f718: nop  */
  /* nop: no architectural effect here */
  /* 10f71c: adr x24, #0x1578f4 */
  ARC_X_W(c, 24, (arc_image_bases[1] + UINT64_C(1407220)));
L_10f720:;
  /* 10f720: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 10f724: mov x1, x24 */
  ARC_X_W(c, 1, ARC_X_R(c, 24));
  /* 10f728: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1111852));
  fn1_142530(c);
  /* 10f72c: ldr x8, [x26] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 26)));
  /* 10f730: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 10f734: b.eq #0x10f720 */
  if (ARC_COND(c, 0)) goto L_10f720;
L_10f738:;
  /* 10f738: ldr x8, [x26] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 26)));
  /* 10f73c: cbz x8, #0x10f750 */
  if ((ARC_X_R(c, 8)) == 0) goto L_10f750;
  /* 10f740: nop  */
  /* nop: no architectural effect here */
  /* 10f744: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 10f748: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1111884));
  fn1_142560(c);
  /* 10f74c: b #0x10f7b0 */
  goto L_10f7b0;
L_10f750:;
  /* 10f750: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 10f754: str x26, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 26));
  /* 10f758: strb wzr, [sp, #0x18] */
  arc_st8(((c)->sp + INT64_C(24)), ARC_W_R(c, 31));
  /* 10f75c: str x8, [x26] */
  arc_st64(ARC_X_R(c, 26), ARC_X_R(c, 8));
  /* 10f760: nop  */
  /* nop: no architectural effect here */
  /* 10f764: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 10f768: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1111916));
  fn1_142560(c);
  /* 10f76c: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 10f770: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 10f774: ldr x1, [x1, #0xc58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3160))));
  /* 10f778: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1111932));
  fn1_a2030(c);
  /* 10f77c: add w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + UINT64_C(1)));
  /* 10f780: str w8, [x26, #8] */
  arc_st32((ARC_X_R(c, 26) + INT64_C(8)), ARC_W_R(c, 8));
  /* 10f784: nop  */
  /* nop: no architectural effect here */
  /* 10f788: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 10f78c: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1111952));
  fn1_142518(c);
  /* 10f790: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 10f794: stlr x8, [x26] */
  arc_st64(ARC_X_R(c, 26), ARC_X_R(c, 8));
  /* 10f798: nop  */
  /* nop: no architectural effect here */
  /* 10f79c: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 10f7a0: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1111972));
  fn1_142560(c);
  /* 10f7a4: nop  */
  /* nop: no architectural effect here */
  /* 10f7a8: adr x0, #0x15791c */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 10f7ac: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1111984));
  fn1_142578(c);
L_10f7b0:;
  /* 10f7b0: ldp x8, x10, [x25, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 25) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* 10f7b4: ldrsw x9, [x26, #8] */
  ARC_X_W(c, 9, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 26) + INT64_C(8)))));
  /* 10f7b8: sub x9, x9, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - UINT64_C(1)));
  /* 10f7bc: sub x10, x10, x8 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) - ARC_X_R(c, 8)));
  /* 10f7c0: cmp x9, x10, asr #3 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ((uint64_t)((int64_t)(ARC_X_R(c, 10)) >> 3)));
  /* 10f7c4: b.hs #0x10f878 */
  if (ARC_COND(c, 2)) goto L_10f878;
  /* 10f7c8: ldr x23, [x8, x9, lsl #3] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3))));
  /* 10f7cc: cbz x23, #0x10f878 */
  if ((ARC_X_R(c, 23)) == 0) goto L_10f878;
  /* 10f7d0: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 10f7d4: bl #0x143478 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1112024));
  fn1_143478(c);
  /* 10f7d8: ldr x8, [x22, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 22) + INT64_C(16));
    ARC_X_W(c, 22, ARC_X_R(c, 22) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_a));
  }
  /* 10f7dc: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 10f7e0: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 10f7e4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1112040));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 10f7e8: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 10f7ec: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 10f7f0: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 10f7f4: add x3, x22, #0x150 */
  ARC_X_W(c, 3, (ARC_X_R(c, 22) + UINT64_C(336)));
  /* 10f7f8: mov x2, x22 */
  ARC_X_W(c, 2, ARC_X_R(c, 22));
  /* 10f7fc: mov x4, x23 */
  ARC_X_W(c, 4, ARC_X_R(c, 23));
  /* 10f800: mov x5, x20 */
  ARC_X_W(c, 5, ARC_X_R(c, 20));
  /* 10f804: mov w6, wzr */
  ARC_W_W(c, 6, ARC_W_R(c, 31));
  /* 10f808: bl #0xffa98 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1112076));
  fn1_ffa98(c);
  /* 10f80c: sub x8, x0, x22 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) - ARC_X_R(c, 22)));
  /* 10f810: cmp x8, #0x14f */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(335));
  /* 10f814: b.gt #0x10f854 */
  if (ARC_COND(c, 12)) goto L_10f854;
  /* 10f818: asr x8, x8, #3 */
  ARC_X_W(c, 8, ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(3)) & 63))));
  /* 10f81c: mov x9, #-0x5555555555555556 */
  ARC_X_W(c, 9, UINT64_C(12297829382473034410));
  /* 10f820: movk x9, #0xaaab */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(18446744073709486080)) | UINT64_C(43691)));
  /* 10f824: mul x8, x8, x9 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) * (uint64_t)(ARC_X_R(c, 9))));
  /* 10f828: mov x9, #0x4925 */
  ARC_X_W(c, 9, UINT64_C(18725));
  /* 10f82c: movk x9, #0x2492, lsl #16 */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(18446744069414649855)) | UINT64_C(613548032)));
  /* 10f830: movk x9, #0x9249, lsl #32 */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(18446462603027808255)) | UINT64_C(160842230267904)));
  /* 10f834: movk x9, #0x4924, lsl #48 */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(281474976710655)) | UINT64_C(5270337463930322944)));
  /* 10f838: smulh x9, x8, x9 */
  ARC_X_W(c, 9, arc_smulh(ARC_X_R(c, 8), ARC_X_R(c, 9)));
  /* 10f83c: lsr x10, x9, #0x3f */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(63)) & 63)));
  /* 10f840: lsr x9, x9, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(1)) & 63)));
  /* 10f844: add w9, w9, w10 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) + ARC_W_R(c, 10)));
  /* 10f848: sub w9, w9, w9, lsl #3 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) - ((uint32_t)(ARC_W_R(c, 9)) << 3)));
  /* 10f84c: add w8, w8, w9 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) + ARC_W_R(c, 9)));
  /* 10f850: str w8, [x19, #0x18] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(24)), ARC_W_R(c, 8));
L_10f854:;
  /* 10f854: ldr x0, [sp, #8] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(8))));
  /* 10f858: ldp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 10f85c: ldp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 10f860: ldp x24, x23, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 10f864: ldp x26, x25, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* 10f868: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 10f86c: add sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(112)));
  /* 10f870: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 10f874: ret  */
  return;
L_10f878:;
  /* 10f878: bl #0xfc3b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1112188));
  fn1_fc3b8(c);
  /* 10f87c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 10f880: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 10f884: bl #0xd2a78 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1112200));
  fn1_d2a78(c);
  /* 10f888: b #0x10f894 */
  goto L_10f894;
  /* 10f88c: b #0x10f890 */
  goto L_10f890;
L_10f890:;
  /* 10f890: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
L_10f894:;
  /* 10f894: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 10f898: bl #0x143478 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1112220));
  fn1_143478(c);
  /* 10f89c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 10f8a0: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1112228));
  fn1_9cc20(c);
}

void fn1_113c78(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039057528));
  /* 113c78: bti c */
  /* bti: no architectural effect here */
  /* 113c7c: mov w9, #0x2d02 */
  ARC_W_W(c, 9, UINT64_C(11522));
  /* 113c80: strb wzr, [x8, #2] */
  arc_st8((ARC_X_R(c, 8) + INT64_C(2)), ARC_W_R(c, 31));
  /* 113c84: strh w9, [x8] */
  arc_st16(ARC_X_R(c, 8), ARC_W_R(c, 9));
  /* 113c88: ret  */
  return;
}

void fn1_116624(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039068196));
  /* 116624: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 116628: stp x29, x30, [sp, #-0x60]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-96));
    (c)->sp = (c)->sp + INT64_C(-96);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 11662c: stp x28, x27, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* 116630: stp x26, x25, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* 116634: stp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 116638: stp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 11663c: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 116640: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 116644: sub sp, sp, #0x280 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(640)));
  /* 116648: stur x1, [x29, #-0x10] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-16)), ARC_X_R(c, 1));
  /* 11664c: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 116650: add x26, sp, #0xe0 */
  ARC_X_W(c, 26, ((c)->sp + UINT64_C(224)));
  /* 116654: ldr x8, [x8, #0xbc8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3016))));
  /* 116658: add x0, sp, #0xc0 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(192)));
  /* 11665c: add x1, x4, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 4) + UINT64_C(48)));
  /* 116660: mov x21, x6 */
  ARC_X_W(c, 21, ARC_X_R(c, 6));
  /* 116664: mov x19, x5 */
  ARC_X_W(c, 19, ARC_X_R(c, 5));
  /* 116668: mov x23, x4 */
  ARC_X_W(c, 23, ARC_X_R(c, 4));
  /* 11666c: mov w22, w3 */
  ARC_W_W(c, 22, ARC_W_R(c, 3));
  /* 116670: mov x20, x2 */
  ARC_X_W(c, 20, ARC_X_R(c, 2));
  /* 116674: stp x26, x8, [sp, #0xd0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(208));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* 116678: bl #0x143460 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1140348));
  fn1_143460(c);
  /* 11667c: adrp x28, #0x151000 */
  ARC_X_W(c, 28, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 116680: ldr x28, [x28, #0xb58] */
  ARC_X_W(c, 28, arc_ld64((ARC_X_R(c, 28) + INT64_C(2904))));
  /* 116684: ldr x27, [sp, #0xc0] */
  ARC_X_W(c, 27, arc_ld64(((c)->sp + INT64_C(192))));
  /* 116688: ldar x8, [x28] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 28)));
  /* 11668c: cmn x8, #1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0);
  /* 116690: b.eq #0x11674c */
  if (ARC_COND(c, 0)) goto L_11674c;
  /* 116694: nop  */
  /* nop: no architectural effect here */
  /* 116698: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11669c: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1140384));
  fn1_142518(c);
  /* 1166a0: ldr x8, [x28] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 28)));
  /* 1166a4: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 1166a8: b.ne #0x1166d4 */
  if (ARC_COND(c, 1)) goto L_1166d4;
  /* 1166ac: nop  */
  /* nop: no architectural effect here */
  /* 1166b0: adr x24, #0x15791c */
  ARC_X_W(c, 24, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 1166b4: nop  */
  /* nop: no architectural effect here */
  /* 1166b8: adr x25, #0x1578f4 */
  ARC_X_W(c, 25, (arc_image_bases[1] + UINT64_C(1407220)));
L_1166bc:;
  /* 1166bc: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 1166c0: mov x1, x25 */
  ARC_X_W(c, 1, ARC_X_R(c, 25));
  /* 1166c4: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1140424));
  fn1_142530(c);
  /* 1166c8: ldr x8, [x28] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 28)));
  /* 1166cc: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 1166d0: b.eq #0x1166bc */
  if (ARC_COND(c, 0)) goto L_1166bc;
L_1166d4:;
  /* 1166d4: ldr x8, [x28] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 28)));
  /* 1166d8: cbz x8, #0x1166ec */
  if ((ARC_X_R(c, 8)) == 0) goto L_1166ec;
  /* 1166dc: nop  */
  /* nop: no architectural effect here */
  /* 1166e0: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 1166e4: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1140456));
  fn1_142560(c);
  /* 1166e8: b #0x11674c */
  goto L_11674c;
L_1166ec:;
  /* 1166ec: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 1166f0: str x28, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 28));
  /* 1166f4: strb wzr, [sp, #0x28] */
  arc_st8(((c)->sp + INT64_C(40)), ARC_W_R(c, 31));
  /* 1166f8: str x8, [x28] */
  arc_st64(ARC_X_R(c, 28), ARC_X_R(c, 8));
  /* 1166fc: nop  */
  /* nop: no architectural effect here */
  /* 116700: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 116704: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1140488));
  fn1_142560(c);
  /* 116708: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 11670c: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 116710: ldr x1, [x1, #0xc58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3160))));
  /* 116714: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1140504));
  fn1_a2030(c);
  /* 116718: add w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + UINT64_C(1)));
  /* 11671c: str w8, [x28, #8] */
  arc_st32((ARC_X_R(c, 28) + INT64_C(8)), ARC_W_R(c, 8));
  /* 116720: nop  */
  /* nop: no architectural effect here */
  /* 116724: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 116728: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1140524));
  fn1_142518(c);
  /* 11672c: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 116730: stlr x8, [x28] */
  arc_st64(ARC_X_R(c, 28), ARC_X_R(c, 8));
  /* 116734: nop  */
  /* nop: no architectural effect here */
  /* 116738: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11673c: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1140544));
  fn1_142560(c);
  /* 116740: nop  */
  /* nop: no architectural effect here */
  /* 116744: adr x0, #0x15791c */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 116748: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1140556));
  fn1_142578(c);
L_11674c:;
  /* 11674c: ldp x8, x10, [x27, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 27) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* 116750: ldrsw x9, [x28, #8] */
  ARC_X_W(c, 9, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 28) + INT64_C(8)))));
  /* 116754: sub x9, x9, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - UINT64_C(1)));
  /* 116758: sub x10, x10, x8 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) - ARC_X_R(c, 8)));
  /* 11675c: cmp x9, x10, asr #3 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ((uint64_t)((int64_t)(ARC_X_R(c, 10)) >> 3)));
  /* 116760: b.hs #0x116980 */
  if (ARC_COND(c, 2)) goto L_116980;
  /* 116764: ldr x24, [x8, x9, lsl #3] */
  ARC_X_W(c, 24, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3))));
  /* 116768: cbz x24, #0x116980 */
  if ((ARC_X_R(c, 24)) == 0) goto L_116980;
  /* 11676c: ldr w4, [x23, #8] */
  ARC_W_W(c, 4, arc_ld32((ARC_X_R(c, 23) + INT64_C(8))));
  /* 116770: add x10, x26, #0x190 */
  ARC_X_W(c, 10, (ARC_X_R(c, 26) + UINT64_C(400)));
  /* 116774: strb wzr, [sp, #0xbc] */
  arc_st8(((c)->sp + INT64_C(188)), ARC_W_R(c, 31));
  /* 116778: add x8, sp, #0xc8 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(200)));
  /* 11677c: add x9, sp, #0xd0 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(208)));
  /* 116780: sub x0, x29, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* 116784: and w2, w22, #1 */
  ARC_W_W(c, 2, (ARC_W_R(c, 22) & UINT64_C(1)));
  /* 116788: add x3, sp, #0xc0 */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(192)));
  /* 11678c: add x6, sp, #0xbc */
  ARC_X_W(c, 6, ((c)->sp + UINT64_C(188)));
  /* 116790: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 116794: mov x5, x19 */
  ARC_X_W(c, 5, ARC_X_R(c, 19));
  /* 116798: mov x7, x24 */
  ARC_X_W(c, 7, ARC_X_R(c, 24));
  /* 11679c: stp x8, x10, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 10));
  }
  /* 1167a0: str x9, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 9));
  /* 1167a4: bl #0x143a30 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1140648));
  fn1_143a30(c);
  /* 1167a8: tbz w0, #0, #0x1168a4 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_1168a4;
  /* 1167ac: adrp x9, #0x4f000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(323584)));
  /* 1167b0: add x9, x9, #0x748 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(1864)));
  /* 1167b4: mov w8, #0x3837 */
  ARC_W_W(c, 8, UINT64_C(14391));
  /* 1167b8: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* 1167bc: movk w8, #0x39, lsl #16 */
  ARC_W_W(c, 8, ((ARC_W_R(c, 8) & UINT64_C(18446744069414649855)) | UINT64_C(3735552)));
  /* 1167c0: stur w8, [sp, #0xb7] */
  arc_st32(((c)->sp + INT64_C(183)), ARC_W_R(c, 8));
  /* 1167c4: str x9, [sp, #0xb0] */
  arc_st64(((c)->sp + INT64_C(176)), ARC_X_R(c, 9));
  /* 1167c8: add x9, sp, #0xb0 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(176)));
  /* 1167cc: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 1167d0: ldr x8, [x8, #0x60] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(96))));
  /* 1167d4: add x1, sp, #0xb0 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(176)));
  /* 1167d8: add x2, x9, #0xa */
  ARC_X_W(c, 2, (ARC_X_R(c, 9) + UINT64_C(10)));
  /* 1167dc: add x3, sp, #0x88 */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(136)));
  /* 1167e0: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 1167e4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1140712));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1167e8: ldp x25, x23, [sp, #0xc8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(200));
    ARC_X_W(c, 25, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 1167ec: sub x8, x25, x23 */
  ARC_X_W(c, 8, (ARC_X_R(c, 25) - ARC_X_R(c, 23)));
  /* 1167f0: cmp x8, #0x189 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(393));
  /* 1167f4: b.lt #0x116814 */
  if (ARC_COND(c, 11)) goto L_116814;
  /* 1167f8: lsr x8, x8, #2 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(2)) & 63)));
  /* 1167fc: add x0, x8, #2 */
  ARC_X_W(c, 0, (ARC_X_R(c, 8) + UINT64_C(2)));
  /* 116800: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1140740));
  fn1_1428a8(c);
  /* 116804: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 116808: mov x24, x0 */
  ARC_X_W(c, 24, ARC_X_R(c, 0));
  /* 11680c: cbnz x0, #0x11681c */
  if ((ARC_X_R(c, 0)) != 0) goto L_11681c;
  /* 116810: bl #0x142c08 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1140756));
  fn1_142c08(c);
L_116814:;
  /* 116814: mov x22, xzr */
  ARC_X_W(c, 22, ARC_X_R(c, 31));
  /* 116818: add x24, sp, #0x20 */
  ARC_X_W(c, 24, ((c)->sp + UINT64_C(32)));
L_11681c:;
  /* 11681c: ldrb w8, [sp, #0xbc] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(188))));
  /* 116820: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* 116824: b.ne #0x116830 */
  if (ARC_COND(c, 1)) goto L_116830;
  /* 116828: mov w8, #0x2d */
  ARC_W_W(c, 8, UINT64_C(45));
  /* 11682c: strb w8, [x24], #1 */
  { const uint64_t _a = ARC_X_R(c, 24);
    ARC_X_W(c, 24, ARC_X_R(c, 24) + INT64_C(1));
    arc_st8(_a, ARC_W_R(c, 8));
  }
L_116830:;
  /* 116830: cmp x23, x25 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 25));
  /* 116834: b.hs #0x116878 */
  if (ARC_COND(c, 2)) goto L_116878;
  /* 116838: add x25, sp, #0x88 */
  ARC_X_W(c, 25, ((c)->sp + UINT64_C(136)));
  /* 11683c: add x27, sp, #0xb0 */
  ARC_X_W(c, 27, ((c)->sp + UINT64_C(176)));
  /* 116840: add x26, x25, #0x28 */
  ARC_X_W(c, 26, (ARC_X_R(c, 25) + UINT64_C(40)));
L_116844:;
  /* 116844: ldr w1, [x23], #4 */
  { const uint64_t _a = ARC_X_R(c, 23);
    ARC_X_W(c, 23, ARC_X_R(c, 23) + INT64_C(4));
    ARC_W_W(c, 1, arc_ld32(_a));
  }
  /* 116848: add x0, sp, #0x88 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(136)));
  /* 11684c: mov w2, #0xa */
  ARC_W_W(c, 2, UINT64_C(10));
  /* 116850: bl #0x142e48 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1140820));
  fn1_142e48(c);
  /* 116854: cmp x0, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 0), UINT64_C(0));
  /* 116858: ldr x9, [sp, #0xc8] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(200))));
  /* 11685c: csel x8, x26, x0, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 26)) : ARC_X_R(c, 0)));
  /* 116860: sub x8, x8, x25 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) - ARC_X_R(c, 25)));
  /* 116864: cmp x23, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 9));
  /* 116868: asr x8, x8, #2 */
  ARC_X_W(c, 8, ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(2)) & 63))));
  /* 11686c: ldrb w8, [x27, x8] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 27) + ARC_X_R(c, 8))));
  /* 116870: strb w8, [x24], #1 */
  { const uint64_t _a = ARC_X_R(c, 24);
    ARC_X_W(c, 24, ARC_X_R(c, 24) + INT64_C(1));
    arc_st8(_a, ARC_W_R(c, 8));
  }
  /* 116874: b.lo #0x116844 */
  if (ARC_COND(c, 3)) goto L_116844;
L_116878:;
  /* 116878: adrp x1, #0x50000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(327680)));
  /* 11687c: add x1, x1, #0xcab */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3243)));
  /* 116880: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 116884: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* 116888: strb wzr, [x24] */
  arc_st8(ARC_X_R(c, 24), ARC_W_R(c, 31));
  /* 11688c: bl #0x1441c8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1140880));
  fn1_1441c8(c);
  /* 116890: cmp w0, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(1));
  /* 116894: b.ne #0x116984 */
  if (ARC_COND(c, 1)) goto L_116984;
  /* 116898: cbz x22, #0x1168a4 */
  if ((ARC_X_R(c, 22)) == 0) goto L_1168a4;
  /* 11689c: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 1168a0: bl #0x142800 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1140900));
  fn1_142800(c);
L_1168a4:;
  /* 1168a4: ldur x0, [x29, #-0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-16))));
  /* 1168a8: cbz x0, #0x1168f0 */
  if ((ARC_X_R(c, 0)) == 0) goto L_1168f0;
  /* 1168ac: ldp x8, x9, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 1168b0: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 1168b4: b.eq #0x1168c0 */
  if (ARC_COND(c, 0)) goto L_1168c0;
  /* 1168b8: ldr w0, [x8] */
  ARC_W_W(c, 0, arc_ld32(ARC_X_R(c, 8)));
  /* 1168bc: b #0x1168cc */
  goto L_1168cc;
L_1168c0:;
  /* 1168c0: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 1168c4: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 1168c8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1140940));
  arc_dispatch(c, ARC_X_R(c, 8));
L_1168cc:;
  /* 1168cc: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 1168d0: b.eq #0x1168ec */
  if (ARC_COND(c, 0)) goto L_1168ec;
  /* 1168d4: ldur x8, [x29, #-0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(-16))));
  /* 1168d8: cmp x8, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(0));
  /* 1168dc: cset w21, eq */
  ARC_W_W(c, 21, (ARC_COND(c, 0) ? 1 : 0));
  /* 1168e0: cbnz x20, #0x1168f8 */
  if ((ARC_X_R(c, 20)) != 0) goto L_1168f8;
L_1168e4:;
  /* 1168e4: tbnz w21, #0, #0x11692c */
  if (((ARC_W_R(c, 21)) >> 0 & 1) != 0) goto L_11692c;
  /* 1168e8: b #0x116938 */
  goto L_116938;
L_1168ec:;
  /* 1168ec: stur xzr, [x29, #-0x10] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-16)), ARC_X_R(c, 31));
L_1168f0:;
  /* 1168f0: mov w21, #1 */
  ARC_W_W(c, 21, UINT64_C(1));
  /* 1168f4: cbz x20, #0x1168e4 */
  if ((ARC_X_R(c, 20)) == 0) goto L_1168e4;
L_1168f8:;
  /* 1168f8: ldp x8, x9, [x20, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 1168fc: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 116900: b.eq #0x11690c */
  if (ARC_COND(c, 0)) goto L_11690c;
  /* 116904: ldr w0, [x8] */
  ARC_W_W(c, 0, arc_ld32(ARC_X_R(c, 8)));
  /* 116908: b #0x11691c */
  goto L_11691c;
L_11690c:;
  /* 11690c: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 116910: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 116914: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 116918: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1141020));
  arc_dispatch(c, ARC_X_R(c, 8));
L_11691c:;
  /* 11691c: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 116920: cset w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? 1 : 0));
  /* 116924: eor w8, w21, w8 */
  ARC_W_W(c, 8, (ARC_W_R(c, 21) ^ ARC_W_R(c, 8)));
  /* 116928: tbnz w8, #0, #0x116938 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_116938;
L_11692c:;
  /* 11692c: ldr w8, [x19] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 19)));
  /* 116930: orr w8, w8, #2 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | UINT64_C(2)));
  /* 116934: str w8, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 8));
L_116938:;
  /* 116938: ldur x19, [x29, #-0x10] */
  ARC_X_W(c, 19, arc_ld64((ARC_X_R(c, 29) + INT64_C(-16))));
  /* 11693c: add x0, sp, #0xc0 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(192)));
  /* 116940: bl #0x143478 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1141060));
  fn1_143478(c);
  /* 116944: ldr x0, [sp, #0xd0] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(208))));
  /* 116948: str xzr, [sp, #0xd0] */
  arc_st64(((c)->sp + INT64_C(208)), ARC_X_R(c, 31));
  /* 11694c: cbz x0, #0x116958 */
  if ((ARC_X_R(c, 0)) == 0) goto L_116958;
  /* 116950: ldr x8, [sp, #0xd8] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(216))));
  /* 116954: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1141080));
  arc_dispatch(c, ARC_X_R(c, 8));
L_116958:;
  /* 116958: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 11695c: add sp, sp, #0x280 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(640)));
  /* 116960: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 116964: ldp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 116968: ldp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 11696c: ldp x26, x25, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* 116970: ldp x28, x27, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* 116974: ldp x29, x30, [sp], #0x60 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(96);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 116978: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 11697c: ret  */
  return;
L_116980:;
  /* 116980: bl #0xfc3b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1141124));
  fn1_fc3b8(c);
L_116984:;
  /* 116984: adrp x0, #0x52000 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(335872)));
  /* 116988: add x0, x0, #0x54a */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1354)));
  /* 11698c: bl #0x142c98 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1141136));
  fn1_142c98(c);
  /* 116990: b #0x1169c8 */
  goto L_1169c8;
  /* 116994: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 116998: cbz x22, #0x1169cc */
  if ((ARC_X_R(c, 22)) == 0) goto L_1169cc;
  /* 11699c: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 1169a0: bl #0x142800 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1141156));
  fn1_142800(c);
  /* 1169a4: b #0x1169cc */
  goto L_1169cc;
  /* 1169a8: b #0x1169c8 */
  goto L_1169c8;
  /* 1169ac: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1141168));
  fn1_a1454(c);
  /* 1169b0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1169b4: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 1169b8: bl #0xd2a78 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1141180));
  fn1_d2a78(c);
  /* 1169bc: b #0x1169cc */
  goto L_1169cc;
  /* 1169c0: b #0x1169c8 */
  goto L_1169c8;
  /* 1169c4: b #0x1169c8 */
  goto L_1169c8;
L_1169c8:;
  /* 1169c8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
L_1169cc:;
  /* 1169cc: add x0, sp, #0xc0 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(192)));
  /* 1169d0: bl #0x143478 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1141204));
  fn1_143478(c);
  /* 1169d4: ldr x0, [sp, #0xd0] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(208))));
  /* 1169d8: str xzr, [sp, #0xd0] */
  arc_st64(((c)->sp + INT64_C(208)), ARC_X_R(c, 31));
  /* 1169dc: cbz x0, #0x1169e8 */
  if ((ARC_X_R(c, 0)) == 0) goto L_1169e8;
  /* 1169e0: ldr x8, [sp, #0xd8] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(216))));
  /* 1169e4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1141224));
  arc_dispatch(c, ARC_X_R(c, 8));
L_1169e8:;
  /* 1169e8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1169ec: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1141232));
  fn1_9cc20(c);
  /* 1169f0: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1141236));
  fn1_a1454(c);
}

void fn1_124754(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039125844));
  /* 124754: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 124758: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 12475c: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 124760: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 124764: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 124768: bl #0x124670 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1197932));
  fn1_124670(c);
  /* 12476c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 124770: mov w1, #0x138 */
  ARC_W_W(c, 1, UINT64_C(312));
  /* 124774: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 124778: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 12477c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 124780: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_127260(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039136864));
  /* 127260: bti c */
  /* bti: no architectural effect here */
  /* 127264: cmp x1, x2 */
  (void)arc_sub64(c, ARC_X_R(c, 1), ARC_X_R(c, 2));
  /* 127268: b.eq #0x127280 */
  if (ARC_COND(c, 0)) goto L_127280;
  /* 12726c: sub x8, x2, x1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 2) - ARC_X_R(c, 1)));
  /* 127270: cmp x8, #0x20 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(32));
  /* 127274: b.hs #0x127288 */
  if (ARC_COND(c, 2)) goto L_127288;
  /* 127278: mov x0, x1 */
  ARC_X_W(c, 0, ARC_X_R(c, 1));
  /* 12727c: b #0x127368 */
  goto L_127368;
L_127280:;
  /* 127280: mov x0, x1 */
  ARC_X_W(c, 0, ARC_X_R(c, 1));
  /* 127284: ret  */
  return;
L_127288:;
  /* 127288: adrp x10, #0x52000 */
  ARC_X_W(c, 10, (arc_image_bases[1] + UINT64_C(335872)));
  /* 12728c: movi v0.16b, #0x20 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = UINT64_C(32);
    _t.u8[1] = UINT64_C(32);
    _t.u8[2] = UINT64_C(32);
    _t.u8[3] = UINT64_C(32);
    _t.u8[4] = UINT64_C(32);
    _t.u8[5] = UINT64_C(32);
    _t.u8[6] = UINT64_C(32);
    _t.u8[7] = UINT64_C(32);
    _t.u8[8] = UINT64_C(32);
    _t.u8[9] = UINT64_C(32);
    _t.u8[10] = UINT64_C(32);
    _t.u8[11] = UINT64_C(32);
    _t.u8[12] = UINT64_C(32);
    _t.u8[13] = UINT64_C(32);
    _t.u8[14] = UINT64_C(32);
    _t.u8[15] = UINT64_C(32);
    (c)->q[0] = _t; }
  /* 127290: adrp x11, #0x52000 */
  ARC_X_W(c, 11, (arc_image_bases[1] + UINT64_C(335872)));
  /* 127294: adrp x12, #0x52000 */
  ARC_X_W(c, 12, (arc_image_bases[1] + UINT64_C(335872)));
  /* 127298: ldr q1, [x10, #0x940] */
  arc_q_w(c, 1, arc_ld64((ARC_X_R(c, 10) + INT64_C(2368))), arc_ld64((ARC_X_R(c, 10) + INT64_C(2368)) + 8));
  /* 12729c: adrp x10, #0x52000 */
  ARC_X_W(c, 10, (arc_image_bases[1] + UINT64_C(335872)));
  /* 1272a0: mvni v2.4s, #0x5a */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = UINT64_C(4294967205);
    _t.u32[1] = UINT64_C(4294967205);
    _t.u32[2] = UINT64_C(4294967205);
    _t.u32[3] = UINT64_C(4294967205);
    (c)->q[2] = _t; }
  /* 1272a4: mvni v3.4s, #0x19 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = UINT64_C(4294967270);
    _t.u32[1] = UINT64_C(4294967270);
    _t.u32[2] = UINT64_C(4294967270);
    _t.u32[3] = UINT64_C(4294967270);
    (c)->q[3] = _t; }
  /* 1272a8: and x9, x8, #0xffffffffffffffe0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) & UINT64_C(18446744073709551584)));
  /* 1272ac: ldr q4, [x11, #0xc50] */
  arc_q_w(c, 4, arc_ld64((ARC_X_R(c, 11) + INT64_C(3152))), arc_ld64((ARC_X_R(c, 11) + INT64_C(3152)) + 8));
  /* 1272b0: ldr q5, [x12, #0xd40] */
  arc_q_w(c, 5, arc_ld64((ARC_X_R(c, 12) + INT64_C(3392))), arc_ld64((ARC_X_R(c, 12) + INT64_C(3392)) + 8));
  /* 1272b4: ldr q6, [x10, #0xb70] */
  arc_q_w(c, 6, arc_ld64((ARC_X_R(c, 10) + INT64_C(2928))), arc_ld64((ARC_X_R(c, 10) + INT64_C(2928)) + 8));
  /* 1272b8: add x0, x1, x9 */
  ARC_X_W(c, 0, (ARC_X_R(c, 1) + ARC_X_R(c, 9)));
  /* 1272bc: add x10, x1, #0x10 */
  ARC_X_W(c, 10, (ARC_X_R(c, 1) + UINT64_C(16)));
  /* 1272c0: mov x11, x9 */
  ARC_X_W(c, 11, ARC_X_R(c, 9));
L_1272c4:;
  /* 1272c4: ldp q7, q16, [x10, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 10) + INT64_C(-16));
    arc_q_w(c, 7, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 16, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* 1272c8: subs x11, x11, #0x20 */
  ARC_X_W(c, 11, arc_sub64(c, ARC_X_R(c, 11), UINT64_C(32)));
  /* 1272cc: tbl v17.16b, {v7.16b}, v1.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = arc_tbl(c, 7, 1, (c)->q[1].u8[0]);
    _t.u8[1] = arc_tbl(c, 7, 1, (c)->q[1].u8[1]);
    _t.u8[2] = arc_tbl(c, 7, 1, (c)->q[1].u8[2]);
    _t.u8[3] = arc_tbl(c, 7, 1, (c)->q[1].u8[3]);
    _t.u8[4] = arc_tbl(c, 7, 1, (c)->q[1].u8[4]);
    _t.u8[5] = arc_tbl(c, 7, 1, (c)->q[1].u8[5]);
    _t.u8[6] = arc_tbl(c, 7, 1, (c)->q[1].u8[6]);
    _t.u8[7] = arc_tbl(c, 7, 1, (c)->q[1].u8[7]);
    _t.u8[8] = arc_tbl(c, 7, 1, (c)->q[1].u8[8]);
    _t.u8[9] = arc_tbl(c, 7, 1, (c)->q[1].u8[9]);
    _t.u8[10] = arc_tbl(c, 7, 1, (c)->q[1].u8[10]);
    _t.u8[11] = arc_tbl(c, 7, 1, (c)->q[1].u8[11]);
    _t.u8[12] = arc_tbl(c, 7, 1, (c)->q[1].u8[12]);
    _t.u8[13] = arc_tbl(c, 7, 1, (c)->q[1].u8[13]);
    _t.u8[14] = arc_tbl(c, 7, 1, (c)->q[1].u8[14]);
    _t.u8[15] = arc_tbl(c, 7, 1, (c)->q[1].u8[15]);
    (c)->q[17] = _t; }
  /* 1272d0: tbl v18.16b, {v7.16b}, v4.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = arc_tbl(c, 7, 1, (c)->q[4].u8[0]);
    _t.u8[1] = arc_tbl(c, 7, 1, (c)->q[4].u8[1]);
    _t.u8[2] = arc_tbl(c, 7, 1, (c)->q[4].u8[2]);
    _t.u8[3] = arc_tbl(c, 7, 1, (c)->q[4].u8[3]);
    _t.u8[4] = arc_tbl(c, 7, 1, (c)->q[4].u8[4]);
    _t.u8[5] = arc_tbl(c, 7, 1, (c)->q[4].u8[5]);
    _t.u8[6] = arc_tbl(c, 7, 1, (c)->q[4].u8[6]);
    _t.u8[7] = arc_tbl(c, 7, 1, (c)->q[4].u8[7]);
    _t.u8[8] = arc_tbl(c, 7, 1, (c)->q[4].u8[8]);
    _t.u8[9] = arc_tbl(c, 7, 1, (c)->q[4].u8[9]);
    _t.u8[10] = arc_tbl(c, 7, 1, (c)->q[4].u8[10]);
    _t.u8[11] = arc_tbl(c, 7, 1, (c)->q[4].u8[11]);
    _t.u8[12] = arc_tbl(c, 7, 1, (c)->q[4].u8[12]);
    _t.u8[13] = arc_tbl(c, 7, 1, (c)->q[4].u8[13]);
    _t.u8[14] = arc_tbl(c, 7, 1, (c)->q[4].u8[14]);
    _t.u8[15] = arc_tbl(c, 7, 1, (c)->q[4].u8[15]);
    (c)->q[18] = _t; }
  /* 1272d4: tbl v19.16b, {v7.16b}, v5.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = arc_tbl(c, 7, 1, (c)->q[5].u8[0]);
    _t.u8[1] = arc_tbl(c, 7, 1, (c)->q[5].u8[1]);
    _t.u8[2] = arc_tbl(c, 7, 1, (c)->q[5].u8[2]);
    _t.u8[3] = arc_tbl(c, 7, 1, (c)->q[5].u8[3]);
    _t.u8[4] = arc_tbl(c, 7, 1, (c)->q[5].u8[4]);
    _t.u8[5] = arc_tbl(c, 7, 1, (c)->q[5].u8[5]);
    _t.u8[6] = arc_tbl(c, 7, 1, (c)->q[5].u8[6]);
    _t.u8[7] = arc_tbl(c, 7, 1, (c)->q[5].u8[7]);
    _t.u8[8] = arc_tbl(c, 7, 1, (c)->q[5].u8[8]);
    _t.u8[9] = arc_tbl(c, 7, 1, (c)->q[5].u8[9]);
    _t.u8[10] = arc_tbl(c, 7, 1, (c)->q[5].u8[10]);
    _t.u8[11] = arc_tbl(c, 7, 1, (c)->q[5].u8[11]);
    _t.u8[12] = arc_tbl(c, 7, 1, (c)->q[5].u8[12]);
    _t.u8[13] = arc_tbl(c, 7, 1, (c)->q[5].u8[13]);
    _t.u8[14] = arc_tbl(c, 7, 1, (c)->q[5].u8[14]);
    _t.u8[15] = arc_tbl(c, 7, 1, (c)->q[5].u8[15]);
    (c)->q[19] = _t; }
  /* 1272d8: tbl v20.16b, {v7.16b}, v6.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = arc_tbl(c, 7, 1, (c)->q[6].u8[0]);
    _t.u8[1] = arc_tbl(c, 7, 1, (c)->q[6].u8[1]);
    _t.u8[2] = arc_tbl(c, 7, 1, (c)->q[6].u8[2]);
    _t.u8[3] = arc_tbl(c, 7, 1, (c)->q[6].u8[3]);
    _t.u8[4] = arc_tbl(c, 7, 1, (c)->q[6].u8[4]);
    _t.u8[5] = arc_tbl(c, 7, 1, (c)->q[6].u8[5]);
    _t.u8[6] = arc_tbl(c, 7, 1, (c)->q[6].u8[6]);
    _t.u8[7] = arc_tbl(c, 7, 1, (c)->q[6].u8[7]);
    _t.u8[8] = arc_tbl(c, 7, 1, (c)->q[6].u8[8]);
    _t.u8[9] = arc_tbl(c, 7, 1, (c)->q[6].u8[9]);
    _t.u8[10] = arc_tbl(c, 7, 1, (c)->q[6].u8[10]);
    _t.u8[11] = arc_tbl(c, 7, 1, (c)->q[6].u8[11]);
    _t.u8[12] = arc_tbl(c, 7, 1, (c)->q[6].u8[12]);
    _t.u8[13] = arc_tbl(c, 7, 1, (c)->q[6].u8[13]);
    _t.u8[14] = arc_tbl(c, 7, 1, (c)->q[6].u8[14]);
    _t.u8[15] = arc_tbl(c, 7, 1, (c)->q[6].u8[15]);
    (c)->q[20] = _t; }
  /* 1272dc: tbl v21.16b, {v16.16b}, v1.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = arc_tbl(c, 16, 1, (c)->q[1].u8[0]);
    _t.u8[1] = arc_tbl(c, 16, 1, (c)->q[1].u8[1]);
    _t.u8[2] = arc_tbl(c, 16, 1, (c)->q[1].u8[2]);
    _t.u8[3] = arc_tbl(c, 16, 1, (c)->q[1].u8[3]);
    _t.u8[4] = arc_tbl(c, 16, 1, (c)->q[1].u8[4]);
    _t.u8[5] = arc_tbl(c, 16, 1, (c)->q[1].u8[5]);
    _t.u8[6] = arc_tbl(c, 16, 1, (c)->q[1].u8[6]);
    _t.u8[7] = arc_tbl(c, 16, 1, (c)->q[1].u8[7]);
    _t.u8[8] = arc_tbl(c, 16, 1, (c)->q[1].u8[8]);
    _t.u8[9] = arc_tbl(c, 16, 1, (c)->q[1].u8[9]);
    _t.u8[10] = arc_tbl(c, 16, 1, (c)->q[1].u8[10]);
    _t.u8[11] = arc_tbl(c, 16, 1, (c)->q[1].u8[11]);
    _t.u8[12] = arc_tbl(c, 16, 1, (c)->q[1].u8[12]);
    _t.u8[13] = arc_tbl(c, 16, 1, (c)->q[1].u8[13]);
    _t.u8[14] = arc_tbl(c, 16, 1, (c)->q[1].u8[14]);
    _t.u8[15] = arc_tbl(c, 16, 1, (c)->q[1].u8[15]);
    (c)->q[21] = _t; }
  /* 1272e0: tbl v22.16b, {v16.16b}, v4.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = arc_tbl(c, 16, 1, (c)->q[4].u8[0]);
    _t.u8[1] = arc_tbl(c, 16, 1, (c)->q[4].u8[1]);
    _t.u8[2] = arc_tbl(c, 16, 1, (c)->q[4].u8[2]);
    _t.u8[3] = arc_tbl(c, 16, 1, (c)->q[4].u8[3]);
    _t.u8[4] = arc_tbl(c, 16, 1, (c)->q[4].u8[4]);
    _t.u8[5] = arc_tbl(c, 16, 1, (c)->q[4].u8[5]);
    _t.u8[6] = arc_tbl(c, 16, 1, (c)->q[4].u8[6]);
    _t.u8[7] = arc_tbl(c, 16, 1, (c)->q[4].u8[7]);
    _t.u8[8] = arc_tbl(c, 16, 1, (c)->q[4].u8[8]);
    _t.u8[9] = arc_tbl(c, 16, 1, (c)->q[4].u8[9]);
    _t.u8[10] = arc_tbl(c, 16, 1, (c)->q[4].u8[10]);
    _t.u8[11] = arc_tbl(c, 16, 1, (c)->q[4].u8[11]);
    _t.u8[12] = arc_tbl(c, 16, 1, (c)->q[4].u8[12]);
    _t.u8[13] = arc_tbl(c, 16, 1, (c)->q[4].u8[13]);
    _t.u8[14] = arc_tbl(c, 16, 1, (c)->q[4].u8[14]);
    _t.u8[15] = arc_tbl(c, 16, 1, (c)->q[4].u8[15]);
    (c)->q[22] = _t; }
  /* 1272e4: tbl v23.16b, {v16.16b}, v5.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = arc_tbl(c, 16, 1, (c)->q[5].u8[0]);
    _t.u8[1] = arc_tbl(c, 16, 1, (c)->q[5].u8[1]);
    _t.u8[2] = arc_tbl(c, 16, 1, (c)->q[5].u8[2]);
    _t.u8[3] = arc_tbl(c, 16, 1, (c)->q[5].u8[3]);
    _t.u8[4] = arc_tbl(c, 16, 1, (c)->q[5].u8[4]);
    _t.u8[5] = arc_tbl(c, 16, 1, (c)->q[5].u8[5]);
    _t.u8[6] = arc_tbl(c, 16, 1, (c)->q[5].u8[6]);
    _t.u8[7] = arc_tbl(c, 16, 1, (c)->q[5].u8[7]);
    _t.u8[8] = arc_tbl(c, 16, 1, (c)->q[5].u8[8]);
    _t.u8[9] = arc_tbl(c, 16, 1, (c)->q[5].u8[9]);
    _t.u8[10] = arc_tbl(c, 16, 1, (c)->q[5].u8[10]);
    _t.u8[11] = arc_tbl(c, 16, 1, (c)->q[5].u8[11]);
    _t.u8[12] = arc_tbl(c, 16, 1, (c)->q[5].u8[12]);
    _t.u8[13] = arc_tbl(c, 16, 1, (c)->q[5].u8[13]);
    _t.u8[14] = arc_tbl(c, 16, 1, (c)->q[5].u8[14]);
    _t.u8[15] = arc_tbl(c, 16, 1, (c)->q[5].u8[15]);
    (c)->q[23] = _t; }
  /* 1272e8: tbl v24.16b, {v16.16b}, v6.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = arc_tbl(c, 16, 1, (c)->q[6].u8[0]);
    _t.u8[1] = arc_tbl(c, 16, 1, (c)->q[6].u8[1]);
    _t.u8[2] = arc_tbl(c, 16, 1, (c)->q[6].u8[2]);
    _t.u8[3] = arc_tbl(c, 16, 1, (c)->q[6].u8[3]);
    _t.u8[4] = arc_tbl(c, 16, 1, (c)->q[6].u8[4]);
    _t.u8[5] = arc_tbl(c, 16, 1, (c)->q[6].u8[5]);
    _t.u8[6] = arc_tbl(c, 16, 1, (c)->q[6].u8[6]);
    _t.u8[7] = arc_tbl(c, 16, 1, (c)->q[6].u8[7]);
    _t.u8[8] = arc_tbl(c, 16, 1, (c)->q[6].u8[8]);
    _t.u8[9] = arc_tbl(c, 16, 1, (c)->q[6].u8[9]);
    _t.u8[10] = arc_tbl(c, 16, 1, (c)->q[6].u8[10]);
    _t.u8[11] = arc_tbl(c, 16, 1, (c)->q[6].u8[11]);
    _t.u8[12] = arc_tbl(c, 16, 1, (c)->q[6].u8[12]);
    _t.u8[13] = arc_tbl(c, 16, 1, (c)->q[6].u8[13]);
    _t.u8[14] = arc_tbl(c, 16, 1, (c)->q[6].u8[14]);
    _t.u8[15] = arc_tbl(c, 16, 1, (c)->q[6].u8[15]);
    (c)->q[24] = _t; }
  /* 1272ec: add v18.4s, v18.4s, v2.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[18].u32[0] + (c)->q[2].u32[0];
    _t.u32[1] = (c)->q[18].u32[1] + (c)->q[2].u32[1];
    _t.u32[2] = (c)->q[18].u32[2] + (c)->q[2].u32[2];
    _t.u32[3] = (c)->q[18].u32[3] + (c)->q[2].u32[3];
    (c)->q[18] = _t; }
  /* 1272f0: add v17.4s, v17.4s, v2.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[17].u32[0] + (c)->q[2].u32[0];
    _t.u32[1] = (c)->q[17].u32[1] + (c)->q[2].u32[1];
    _t.u32[2] = (c)->q[17].u32[2] + (c)->q[2].u32[2];
    _t.u32[3] = (c)->q[17].u32[3] + (c)->q[2].u32[3];
    (c)->q[17] = _t; }
  /* 1272f4: add v19.4s, v19.4s, v2.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[19].u32[0] + (c)->q[2].u32[0];
    _t.u32[1] = (c)->q[19].u32[1] + (c)->q[2].u32[1];
    _t.u32[2] = (c)->q[19].u32[2] + (c)->q[2].u32[2];
    _t.u32[3] = (c)->q[19].u32[3] + (c)->q[2].u32[3];
    (c)->q[19] = _t; }
  /* 1272f8: add v20.4s, v20.4s, v2.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[20].u32[0] + (c)->q[2].u32[0];
    _t.u32[1] = (c)->q[20].u32[1] + (c)->q[2].u32[1];
    _t.u32[2] = (c)->q[20].u32[2] + (c)->q[2].u32[2];
    _t.u32[3] = (c)->q[20].u32[3] + (c)->q[2].u32[3];
    (c)->q[20] = _t; }
  /* 1272fc: add v21.4s, v21.4s, v2.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[21].u32[0] + (c)->q[2].u32[0];
    _t.u32[1] = (c)->q[21].u32[1] + (c)->q[2].u32[1];
    _t.u32[2] = (c)->q[21].u32[2] + (c)->q[2].u32[2];
    _t.u32[3] = (c)->q[21].u32[3] + (c)->q[2].u32[3];
    (c)->q[21] = _t; }
  /* 127300: add v22.4s, v22.4s, v2.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[22].u32[0] + (c)->q[2].u32[0];
    _t.u32[1] = (c)->q[22].u32[1] + (c)->q[2].u32[1];
    _t.u32[2] = (c)->q[22].u32[2] + (c)->q[2].u32[2];
    _t.u32[3] = (c)->q[22].u32[3] + (c)->q[2].u32[3];
    (c)->q[22] = _t; }
  /* 127304: add v24.4s, v24.4s, v2.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[24].u32[0] + (c)->q[2].u32[0];
    _t.u32[1] = (c)->q[24].u32[1] + (c)->q[2].u32[1];
    _t.u32[2] = (c)->q[24].u32[2] + (c)->q[2].u32[2];
    _t.u32[3] = (c)->q[24].u32[3] + (c)->q[2].u32[3];
    (c)->q[24] = _t; }
  /* 127308: add v23.4s, v23.4s, v2.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[23].u32[0] + (c)->q[2].u32[0];
    _t.u32[1] = (c)->q[23].u32[1] + (c)->q[2].u32[1];
    _t.u32[2] = (c)->q[23].u32[2] + (c)->q[2].u32[2];
    _t.u32[3] = (c)->q[23].u32[3] + (c)->q[2].u32[3];
    (c)->q[23] = _t; }
  /* 12730c: cmhi v17.4s, v3.4s, v17.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[3].u32[0] > (c)->q[17].u32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[3].u32[1] > (c)->q[17].u32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[3].u32[2] > (c)->q[17].u32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[3].u32[3] > (c)->q[17].u32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[17] = _t; }
  /* 127310: cmhi v18.4s, v3.4s, v18.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[3].u32[0] > (c)->q[18].u32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[3].u32[1] > (c)->q[18].u32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[3].u32[2] > (c)->q[18].u32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[3].u32[3] > (c)->q[18].u32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[18] = _t; }
  /* 127314: cmhi v19.4s, v3.4s, v19.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[3].u32[0] > (c)->q[19].u32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[3].u32[1] > (c)->q[19].u32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[3].u32[2] > (c)->q[19].u32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[3].u32[3] > (c)->q[19].u32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[19] = _t; }
  /* 127318: cmhi v20.4s, v3.4s, v20.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[3].u32[0] > (c)->q[20].u32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[3].u32[1] > (c)->q[20].u32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[3].u32[2] > (c)->q[20].u32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[3].u32[3] > (c)->q[20].u32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[20] = _t; }
  /* 12731c: cmhi v21.4s, v3.4s, v21.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[3].u32[0] > (c)->q[21].u32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[3].u32[1] > (c)->q[21].u32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[3].u32[2] > (c)->q[21].u32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[3].u32[3] > (c)->q[21].u32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[21] = _t; }
  /* 127320: cmhi v22.4s, v3.4s, v22.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[3].u32[0] > (c)->q[22].u32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[3].u32[1] > (c)->q[22].u32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[3].u32[2] > (c)->q[22].u32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[3].u32[3] > (c)->q[22].u32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[22] = _t; }
  /* 127324: cmhi v23.4s, v3.4s, v23.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[3].u32[0] > (c)->q[23].u32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[3].u32[1] > (c)->q[23].u32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[3].u32[2] > (c)->q[23].u32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[3].u32[3] > (c)->q[23].u32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[23] = _t; }
  /* 127328: cmhi v24.4s, v3.4s, v24.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[3].u32[0] > (c)->q[24].u32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[3].u32[1] > (c)->q[24].u32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[3].u32[2] > (c)->q[24].u32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[3].u32[3] > (c)->q[24].u32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[24] = _t; }
  /* 12732c: uzp1 v17.8h, v18.8h, v17.8h */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = (c)->q[18].u16[0];
    _t.u16[1] = (c)->q[18].u16[2];
    _t.u16[2] = (c)->q[18].u16[4];
    _t.u16[3] = (c)->q[18].u16[6];
    _t.u16[4] = (c)->q[17].u16[0];
    _t.u16[5] = (c)->q[17].u16[2];
    _t.u16[6] = (c)->q[17].u16[4];
    _t.u16[7] = (c)->q[17].u16[6];
    (c)->q[17] = _t; }
  /* 127330: uzp1 v18.8h, v20.8h, v19.8h */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = (c)->q[20].u16[0];
    _t.u16[1] = (c)->q[20].u16[2];
    _t.u16[2] = (c)->q[20].u16[4];
    _t.u16[3] = (c)->q[20].u16[6];
    _t.u16[4] = (c)->q[19].u16[0];
    _t.u16[5] = (c)->q[19].u16[2];
    _t.u16[6] = (c)->q[19].u16[4];
    _t.u16[7] = (c)->q[19].u16[6];
    (c)->q[18] = _t; }
  /* 127334: uzp1 v19.8h, v22.8h, v21.8h */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = (c)->q[22].u16[0];
    _t.u16[1] = (c)->q[22].u16[2];
    _t.u16[2] = (c)->q[22].u16[4];
    _t.u16[3] = (c)->q[22].u16[6];
    _t.u16[4] = (c)->q[21].u16[0];
    _t.u16[5] = (c)->q[21].u16[2];
    _t.u16[6] = (c)->q[21].u16[4];
    _t.u16[7] = (c)->q[21].u16[6];
    (c)->q[19] = _t; }
  /* 127338: uzp1 v20.8h, v24.8h, v23.8h */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = (c)->q[24].u16[0];
    _t.u16[1] = (c)->q[24].u16[2];
    _t.u16[2] = (c)->q[24].u16[4];
    _t.u16[3] = (c)->q[24].u16[6];
    _t.u16[4] = (c)->q[23].u16[0];
    _t.u16[5] = (c)->q[23].u16[2];
    _t.u16[6] = (c)->q[23].u16[4];
    _t.u16[7] = (c)->q[23].u16[6];
    (c)->q[20] = _t; }
  /* 12733c: uzp1 v17.16b, v18.16b, v17.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[18].u8[0];
    _t.u8[1] = (c)->q[18].u8[2];
    _t.u8[2] = (c)->q[18].u8[4];
    _t.u8[3] = (c)->q[18].u8[6];
    _t.u8[4] = (c)->q[18].u8[8];
    _t.u8[5] = (c)->q[18].u8[10];
    _t.u8[6] = (c)->q[18].u8[12];
    _t.u8[7] = (c)->q[18].u8[14];
    _t.u8[8] = (c)->q[17].u8[0];
    _t.u8[9] = (c)->q[17].u8[2];
    _t.u8[10] = (c)->q[17].u8[4];
    _t.u8[11] = (c)->q[17].u8[6];
    _t.u8[12] = (c)->q[17].u8[8];
    _t.u8[13] = (c)->q[17].u8[10];
    _t.u8[14] = (c)->q[17].u8[12];
    _t.u8[15] = (c)->q[17].u8[14];
    (c)->q[17] = _t; }
  /* 127340: orr v18.16b, v7.16b, v0.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[7].u8[0] | (c)->q[0].u8[0];
    _t.u8[1] = (c)->q[7].u8[1] | (c)->q[0].u8[1];
    _t.u8[2] = (c)->q[7].u8[2] | (c)->q[0].u8[2];
    _t.u8[3] = (c)->q[7].u8[3] | (c)->q[0].u8[3];
    _t.u8[4] = (c)->q[7].u8[4] | (c)->q[0].u8[4];
    _t.u8[5] = (c)->q[7].u8[5] | (c)->q[0].u8[5];
    _t.u8[6] = (c)->q[7].u8[6] | (c)->q[0].u8[6];
    _t.u8[7] = (c)->q[7].u8[7] | (c)->q[0].u8[7];
    _t.u8[8] = (c)->q[7].u8[8] | (c)->q[0].u8[8];
    _t.u8[9] = (c)->q[7].u8[9] | (c)->q[0].u8[9];
    _t.u8[10] = (c)->q[7].u8[10] | (c)->q[0].u8[10];
    _t.u8[11] = (c)->q[7].u8[11] | (c)->q[0].u8[11];
    _t.u8[12] = (c)->q[7].u8[12] | (c)->q[0].u8[12];
    _t.u8[13] = (c)->q[7].u8[13] | (c)->q[0].u8[13];
    _t.u8[14] = (c)->q[7].u8[14] | (c)->q[0].u8[14];
    _t.u8[15] = (c)->q[7].u8[15] | (c)->q[0].u8[15];
    (c)->q[18] = _t; }
  /* 127344: uzp1 v19.16b, v20.16b, v19.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[20].u8[0];
    _t.u8[1] = (c)->q[20].u8[2];
    _t.u8[2] = (c)->q[20].u8[4];
    _t.u8[3] = (c)->q[20].u8[6];
    _t.u8[4] = (c)->q[20].u8[8];
    _t.u8[5] = (c)->q[20].u8[10];
    _t.u8[6] = (c)->q[20].u8[12];
    _t.u8[7] = (c)->q[20].u8[14];
    _t.u8[8] = (c)->q[19].u8[0];
    _t.u8[9] = (c)->q[19].u8[2];
    _t.u8[10] = (c)->q[19].u8[4];
    _t.u8[11] = (c)->q[19].u8[6];
    _t.u8[12] = (c)->q[19].u8[8];
    _t.u8[13] = (c)->q[19].u8[10];
    _t.u8[14] = (c)->q[19].u8[12];
    _t.u8[15] = (c)->q[19].u8[14];
    (c)->q[19] = _t; }
  /* 127348: orr v20.16b, v16.16b, v0.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[16].u8[0] | (c)->q[0].u8[0];
    _t.u8[1] = (c)->q[16].u8[1] | (c)->q[0].u8[1];
    _t.u8[2] = (c)->q[16].u8[2] | (c)->q[0].u8[2];
    _t.u8[3] = (c)->q[16].u8[3] | (c)->q[0].u8[3];
    _t.u8[4] = (c)->q[16].u8[4] | (c)->q[0].u8[4];
    _t.u8[5] = (c)->q[16].u8[5] | (c)->q[0].u8[5];
    _t.u8[6] = (c)->q[16].u8[6] | (c)->q[0].u8[6];
    _t.u8[7] = (c)->q[16].u8[7] | (c)->q[0].u8[7];
    _t.u8[8] = (c)->q[16].u8[8] | (c)->q[0].u8[8];
    _t.u8[9] = (c)->q[16].u8[9] | (c)->q[0].u8[9];
    _t.u8[10] = (c)->q[16].u8[10] | (c)->q[0].u8[10];
    _t.u8[11] = (c)->q[16].u8[11] | (c)->q[0].u8[11];
    _t.u8[12] = (c)->q[16].u8[12] | (c)->q[0].u8[12];
    _t.u8[13] = (c)->q[16].u8[13] | (c)->q[0].u8[13];
    _t.u8[14] = (c)->q[16].u8[14] | (c)->q[0].u8[14];
    _t.u8[15] = (c)->q[16].u8[15] | (c)->q[0].u8[15];
    (c)->q[20] = _t; }
  /* 12734c: bif v7.16b, v18.16b, v17.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = ((c)->q[7].u8[0] ^ (((c)->q[18].u8[0] ^ (c)->q[7].u8[0]) & ~(c)->q[17].u8[0]));
    _t.u8[1] = ((c)->q[7].u8[1] ^ (((c)->q[18].u8[1] ^ (c)->q[7].u8[1]) & ~(c)->q[17].u8[1]));
    _t.u8[2] = ((c)->q[7].u8[2] ^ (((c)->q[18].u8[2] ^ (c)->q[7].u8[2]) & ~(c)->q[17].u8[2]));
    _t.u8[3] = ((c)->q[7].u8[3] ^ (((c)->q[18].u8[3] ^ (c)->q[7].u8[3]) & ~(c)->q[17].u8[3]));
    _t.u8[4] = ((c)->q[7].u8[4] ^ (((c)->q[18].u8[4] ^ (c)->q[7].u8[4]) & ~(c)->q[17].u8[4]));
    _t.u8[5] = ((c)->q[7].u8[5] ^ (((c)->q[18].u8[5] ^ (c)->q[7].u8[5]) & ~(c)->q[17].u8[5]));
    _t.u8[6] = ((c)->q[7].u8[6] ^ (((c)->q[18].u8[6] ^ (c)->q[7].u8[6]) & ~(c)->q[17].u8[6]));
    _t.u8[7] = ((c)->q[7].u8[7] ^ (((c)->q[18].u8[7] ^ (c)->q[7].u8[7]) & ~(c)->q[17].u8[7]));
    _t.u8[8] = ((c)->q[7].u8[8] ^ (((c)->q[18].u8[8] ^ (c)->q[7].u8[8]) & ~(c)->q[17].u8[8]));
    _t.u8[9] = ((c)->q[7].u8[9] ^ (((c)->q[18].u8[9] ^ (c)->q[7].u8[9]) & ~(c)->q[17].u8[9]));
    _t.u8[10] = ((c)->q[7].u8[10] ^ (((c)->q[18].u8[10] ^ (c)->q[7].u8[10]) & ~(c)->q[17].u8[10]));
    _t.u8[11] = ((c)->q[7].u8[11] ^ (((c)->q[18].u8[11] ^ (c)->q[7].u8[11]) & ~(c)->q[17].u8[11]));
    _t.u8[12] = ((c)->q[7].u8[12] ^ (((c)->q[18].u8[12] ^ (c)->q[7].u8[12]) & ~(c)->q[17].u8[12]));
    _t.u8[13] = ((c)->q[7].u8[13] ^ (((c)->q[18].u8[13] ^ (c)->q[7].u8[13]) & ~(c)->q[17].u8[13]));
    _t.u8[14] = ((c)->q[7].u8[14] ^ (((c)->q[18].u8[14] ^ (c)->q[7].u8[14]) & ~(c)->q[17].u8[14]));
    _t.u8[15] = ((c)->q[7].u8[15] ^ (((c)->q[18].u8[15] ^ (c)->q[7].u8[15]) & ~(c)->q[17].u8[15]));
    (c)->q[7] = _t; }
  /* 127350: bif v16.16b, v20.16b, v19.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = ((c)->q[16].u8[0] ^ (((c)->q[20].u8[0] ^ (c)->q[16].u8[0]) & ~(c)->q[19].u8[0]));
    _t.u8[1] = ((c)->q[16].u8[1] ^ (((c)->q[20].u8[1] ^ (c)->q[16].u8[1]) & ~(c)->q[19].u8[1]));
    _t.u8[2] = ((c)->q[16].u8[2] ^ (((c)->q[20].u8[2] ^ (c)->q[16].u8[2]) & ~(c)->q[19].u8[2]));
    _t.u8[3] = ((c)->q[16].u8[3] ^ (((c)->q[20].u8[3] ^ (c)->q[16].u8[3]) & ~(c)->q[19].u8[3]));
    _t.u8[4] = ((c)->q[16].u8[4] ^ (((c)->q[20].u8[4] ^ (c)->q[16].u8[4]) & ~(c)->q[19].u8[4]));
    _t.u8[5] = ((c)->q[16].u8[5] ^ (((c)->q[20].u8[5] ^ (c)->q[16].u8[5]) & ~(c)->q[19].u8[5]));
    _t.u8[6] = ((c)->q[16].u8[6] ^ (((c)->q[20].u8[6] ^ (c)->q[16].u8[6]) & ~(c)->q[19].u8[6]));
    _t.u8[7] = ((c)->q[16].u8[7] ^ (((c)->q[20].u8[7] ^ (c)->q[16].u8[7]) & ~(c)->q[19].u8[7]));
    _t.u8[8] = ((c)->q[16].u8[8] ^ (((c)->q[20].u8[8] ^ (c)->q[16].u8[8]) & ~(c)->q[19].u8[8]));
    _t.u8[9] = ((c)->q[16].u8[9] ^ (((c)->q[20].u8[9] ^ (c)->q[16].u8[9]) & ~(c)->q[19].u8[9]));
    _t.u8[10] = ((c)->q[16].u8[10] ^ (((c)->q[20].u8[10] ^ (c)->q[16].u8[10]) & ~(c)->q[19].u8[10]));
    _t.u8[11] = ((c)->q[16].u8[11] ^ (((c)->q[20].u8[11] ^ (c)->q[16].u8[11]) & ~(c)->q[19].u8[11]));
    _t.u8[12] = ((c)->q[16].u8[12] ^ (((c)->q[20].u8[12] ^ (c)->q[16].u8[12]) & ~(c)->q[19].u8[12]));
    _t.u8[13] = ((c)->q[16].u8[13] ^ (((c)->q[20].u8[13] ^ (c)->q[16].u8[13]) & ~(c)->q[19].u8[13]));
    _t.u8[14] = ((c)->q[16].u8[14] ^ (((c)->q[20].u8[14] ^ (c)->q[16].u8[14]) & ~(c)->q[19].u8[14]));
    _t.u8[15] = ((c)->q[16].u8[15] ^ (((c)->q[20].u8[15] ^ (c)->q[16].u8[15]) & ~(c)->q[19].u8[15]));
    (c)->q[16] = _t; }
  /* 127354: stp q7, q16, [x10, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 10) + INT64_C(-16));
    arc_st64(_pa, (c)->q[7].u64[0]);
    arc_st64(_pa + 8, (c)->q[7].u64[1]);
    arc_st64((_pa + 16), (c)->q[16].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[16].u64[1]);
  }
  /* 127358: add x10, x10, #0x20 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(32)));
  /* 12735c: b.ne #0x1272c4 */
  if (ARC_COND(c, 1)) goto L_1272c4;
  /* 127360: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 127364: b.eq #0x127388 */
  if (ARC_COND(c, 0)) goto L_127388;
L_127368:;
  /* 127368: ldrb w8, [x0] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 0)));
  /* 12736c: sub w9, w8, #0x5b */
  ARC_W_W(c, 9, (ARC_W_R(c, 8) - UINT64_C(91)));
  /* 127370: orr w10, w8, #0x20 */
  ARC_W_W(c, 10, (ARC_W_R(c, 8) | UINT64_C(32)));
  /* 127374: cmn w9, #0x1a */
  (void)arc_add32(c, ARC_W_R(c, 9), UINT64_C(26), 0);
  /* 127378: csel w8, w8, w10, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 10)));
  /* 12737c: strb w8, [x0], #1 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(1));
    arc_st8(_a, ARC_W_R(c, 8));
  }
  /* 127380: cmp x0, x2 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 2));
  /* 127384: b.ne #0x127368 */
  if (ARC_COND(c, 1)) goto L_127368;
L_127388:;
  /* 127388: ret  */
  return;
}

void fn1_1299d0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039146960));
  /* 1299d0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 1299d4: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1299d8: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 1299dc: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1299e0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1299e4: bl #0x144090 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1219048));
  fn1_144090(c);
  /* 1299e8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1299ec: mov w1, #0x10 */
  ARC_W_W(c, 1, UINT64_C(16));
  /* 1299f0: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1299f4: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1299f8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 1299fc: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_12afdc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039152604));
  /* 12afdc: bti c */
  /* bti: no architectural effect here */
  /* 12afe0: ldrb w9, [x0, #0x18] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(24))));
  /* 12afe4: ldr x8, [x0, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 12afe8: tbz w9, #1, #0x12b008 */
  if (((ARC_W_R(c, 9)) >> 1 & 1) == 0) goto L_12b008;
  /* 12afec: sub x9, x6, x5 */
  ARC_X_W(c, 9, (ARC_X_R(c, 6) - ARC_X_R(c, 5)));
  /* 12aff0: cmp x9, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(2));
  /* 12aff4: b.ge #0x12b000 */
  if (ARC_COND(c, 10)) goto L_12b000;
L_12aff8:;
  /* 12aff8: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 12affc: b #0x12b0a8 */
  goto L_12b0a8;
L_12b000:;
  /* 12b000: mov w9, #0xfeff */
  ARC_W_W(c, 9, UINT64_C(65279));
  /* 12b004: strh w9, [x5], #2 */
  { const uint64_t _a = ARC_X_R(c, 5);
    ARC_X_W(c, 5, ARC_X_R(c, 5) + INT64_C(2));
    arc_st16(_a, ARC_W_R(c, 9));
  }
L_12b008:;
  /* 12b008: cmp x2, x3 */
  (void)arc_sub64(c, ARC_X_R(c, 2), ARC_X_R(c, 3));
  /* 12b00c: b.hs #0x12b09c */
  if (ARC_COND(c, 2)) goto L_12b09c;
  /* 12b010: mov w9, #0x3fc0 */
  ARC_W_W(c, 9, UINT64_C(16320));
  /* 12b014: mov w10, #0xd8 */
  ARC_W_W(c, 10, UINT64_C(216));
  /* 12b018: b #0x12b02c */
  goto L_12b02c;
L_12b01c:;
  /* 12b01c: add x2, x2, #4 */
  ARC_X_W(c, 2, (ARC_X_R(c, 2) + UINT64_C(4)));
  /* 12b020: strb w12, [x5], #1 */
  { const uint64_t _a = ARC_X_R(c, 5);
    ARC_X_W(c, 5, ARC_X_R(c, 5) + INT64_C(1));
    arc_st8(_a, ARC_W_R(c, 12));
  }
  /* 12b024: cmp x2, x3 */
  (void)arc_sub64(c, ARC_X_R(c, 2), ARC_X_R(c, 3));
  /* 12b028: b.hs #0x12b09c */
  if (ARC_COND(c, 2)) goto L_12b09c;
L_12b02c:;
  /* 12b02c: ldr w11, [x2] */
  ARC_W_W(c, 11, arc_ld32(ARC_X_R(c, 2)));
  /* 12b030: lsr w12, w11, #0xb */
  ARC_W_W(c, 12, ((uint32_t)(ARC_W_R(c, 11)) >> ((UINT64_C(11)) & 31)));
  /* 12b034: cmp w12, #0x1b */
  (void)arc_sub32(c, ARC_W_R(c, 12), UINT64_C(27));
  /* 12b038: ccmp x8, x11, #0, ne */
  if (ARC_COND(c, 1)) { (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 11)); }
  else { (c)->nf = 0; (c)->zf = 0;
          (c)->cf = 0; (c)->vf = 0; }
  /* 12b03c: b.lo #0x12b0a4 */
  if (ARC_COND(c, 3)) goto L_12b0a4;
  /* 12b040: lsr w13, w11, #0x10 */
  ARC_W_W(c, 13, ((uint32_t)(ARC_W_R(c, 11)) >> ((UINT64_C(16)) & 31)));
  /* 12b044: sub x12, x6, x5 */
  ARC_X_W(c, 12, (ARC_X_R(c, 6) - ARC_X_R(c, 5)));
  /* 12b048: cbnz w13, #0x12b060 */
  if ((ARC_W_R(c, 13)) != 0) goto L_12b060;
  /* 12b04c: cmp x12, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 12), UINT64_C(2));
  /* 12b050: b.lt #0x12aff8 */
  if (ARC_COND(c, 11)) goto L_12aff8;
  /* 12b054: lsr w12, w11, #8 */
  ARC_W_W(c, 12, ((uint32_t)(ARC_W_R(c, 11)) >> ((UINT64_C(8)) & 31)));
  /* 12b058: strb w11, [x5], #1 */
  { const uint64_t _a = ARC_X_R(c, 5);
    ARC_X_W(c, 5, ARC_X_R(c, 5) + INT64_C(1));
    arc_st8(_a, ARC_W_R(c, 11));
  }
  /* 12b05c: b #0x12b01c */
  goto L_12b01c;
L_12b060:;
  /* 12b060: cmp x12, #4 */
  (void)arc_sub64(c, ARC_X_R(c, 12), UINT64_C(4));
  /* 12b064: b.lt #0x12aff8 */
  if (ARC_COND(c, 11)) goto L_12aff8;
  /* 12b068: lsr w12, w11, #0xa */
  ARC_W_W(c, 12, ((uint32_t)(ARC_W_R(c, 11)) >> ((UINT64_C(10)) & 31)));
  /* 12b06c: strb w11, [x5, #2] */
  arc_st8((ARC_X_R(c, 5) + INT64_C(2)), ARC_W_R(c, 11));
  /* 12b070: and w12, w12, #0x7c0 */
  ARC_W_W(c, 12, (ARC_W_R(c, 12) & UINT64_C(1984)));
  /* 12b074: add w13, w12, w9 */
  ARC_W_W(c, 13, (ARC_W_R(c, 12) + ARC_W_R(c, 9)));
  /* 12b078: mov w12, #-0x24 */
  ARC_W_W(c, 12, UINT64_C(18446744073709551580));
  /* 12b07c: orr w14, w10, w13, lsr #8 */
  ARC_W_W(c, 14, (ARC_W_R(c, 10) | ((uint32_t)(ARC_W_R(c, 13)) >> 8)));
  /* 12b080: bfxil w13, w11, #0xa, #6 */
  ARC_W_W(c, 13, (((uint32_t)(ARC_W_R(c, 13)) & UINT64_C(4294967232)) | ((((uint32_t)(ARC_W_R(c, 11))) >> 10) & UINT64_C(63))));
  /* 12b084: bfxil w12, w11, #8, #2 */
  ARC_W_W(c, 12, (((uint32_t)(ARC_W_R(c, 12)) & UINT64_C(4294967292)) | ((((uint32_t)(ARC_W_R(c, 11))) >> 8) & UINT64_C(3))));
  /* 12b088: strb w13, [x5] */
  arc_st8(ARC_X_R(c, 5), ARC_W_R(c, 13));
  /* 12b08c: add x13, x5, #3 */
  ARC_X_W(c, 13, (ARC_X_R(c, 5) + UINT64_C(3)));
  /* 12b090: strb w14, [x5, #1] */
  arc_st8((ARC_X_R(c, 5) + INT64_C(1)), ARC_W_R(c, 14));
  /* 12b094: mov x5, x13 */
  ARC_X_W(c, 5, ARC_X_R(c, 13));
  /* 12b098: b #0x12b01c */
  goto L_12b01c;
L_12b09c:;
  /* 12b09c: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 12b0a0: b #0x12b0a8 */
  goto L_12b0a8;
L_12b0a4:;
  /* 12b0a4: mov w0, #2 */
  ARC_W_W(c, 0, UINT64_C(2));
L_12b0a8:;
  /* 12b0a8: str x2, [x4] */
  arc_st64(ARC_X_R(c, 4), ARC_X_R(c, 2));
  /* 12b0ac: str x5, [x7] */
  arc_st64(ARC_X_R(c, 7), ARC_X_R(c, 5));
  /* 12b0b0: ret  */
  return;
}

void fn1_12c818(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039158808));
  /* 12c818: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 12c81c: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 12c820: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 12c824: nop  */
  /* nop: no architectural effect here */
  /* 12c828: adr x8, #0x15e090 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1433744)));
  /* 12c82c: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 12c830: tbz w8, #0, #0x12cc18 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_12cc18;
L_12c834:;
  /* 12c834: adrp x8, #0x15d000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1429504)));
  /* 12c838: ldrb w8, [x8, #0xf40] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 8) + INT64_C(3904))));
  /* 12c83c: tbnz w8, #0, #0x12c854 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_12c854;
  /* 12c840: nop  */
  /* nop: no architectural effect here */
  /* 12c844: adr x8, #0x15df40 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1433408)));
  /* 12c848: mov w9, #0xc */
  ARC_W_W(c, 9, UINT64_C(12));
  /* 12c84c: strb w9, [x8], #1 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(1));
    arc_st8(_a, ARC_W_R(c, 9));
  }
  /* 12c850: b #0x12c868 */
  goto L_12c868;
L_12c854:;
  /* 12c854: adrp x9, #0x15d000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1429504)));
  /* 12c858: add x9, x9, #0xf48 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(3912)));
  /* 12c85c: mov w10, #6 */
  ARC_W_W(c, 10, UINT64_C(6));
  /* 12c860: ldr x8, [x9, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(8))));
  /* 12c864: str x10, [x9] */
  arc_st64(ARC_X_R(c, 9), ARC_X_R(c, 10));
L_12c868:;
  /* 12c868: mov w10, #0x7553 */
  ARC_W_W(c, 10, UINT64_C(30035));
  /* 12c86c: mov w9, #0x7961 */
  ARC_W_W(c, 9, UINT64_C(31073));
  /* 12c870: strb wzr, [x8, #6] */
  arc_st8((ARC_X_R(c, 8) + INT64_C(6)), ARC_W_R(c, 31));
  /* 12c874: movk w10, #0x646e, lsl #16 */
  ARC_W_W(c, 10, ((ARC_W_R(c, 10) & UINT64_C(18446744069414649855)) | UINT64_C(1684930560)));
  /* 12c878: strh w9, [x8, #4] */
  arc_st16((ARC_X_R(c, 8) + INT64_C(4)), ARC_W_R(c, 9));
  /* 12c87c: adrp x9, #0x15d000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1429504)));
  /* 12c880: str w10, [x8] */
  arc_st32(ARC_X_R(c, 8), ARC_W_R(c, 10));
  /* 12c884: ldrb w8, [x9, #0xf58] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 9) + INT64_C(3928))));
  /* 12c888: tbnz w8, #0, #0x12c8a0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_12c8a0;
  /* 12c88c: adrp x8, #0x15d000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1429504)));
  /* 12c890: add x8, x8, #0xf58 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3928)));
  /* 12c894: mov w9, #0xc */
  ARC_W_W(c, 9, UINT64_C(12));
  /* 12c898: strb w9, [x8], #1 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(1));
    arc_st8(_a, ARC_W_R(c, 9));
  }
  /* 12c89c: b #0x12c8b4 */
  goto L_12c8b4;
L_12c8a0:;
  /* 12c8a0: adrp x9, #0x15d000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1429504)));
  /* 12c8a4: add x9, x9, #0xf60 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(3936)));
  /* 12c8a8: mov w10, #6 */
  ARC_W_W(c, 10, UINT64_C(6));
  /* 12c8ac: ldr x8, [x9, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(8))));
  /* 12c8b0: str x10, [x9] */
  arc_st64(ARC_X_R(c, 9), ARC_X_R(c, 10));
L_12c8b4:;
  /* 12c8b4: mov w10, #0x6f4d */
  ARC_W_W(c, 10, UINT64_C(28493));
  /* 12c8b8: mov w9, #0x7961 */
  ARC_W_W(c, 9, UINT64_C(31073));
  /* 12c8bc: strb wzr, [x8, #6] */
  arc_st8((ARC_X_R(c, 8) + INT64_C(6)), ARC_W_R(c, 31));
  /* 12c8c0: movk w10, #0x646e, lsl #16 */
  ARC_W_W(c, 10, ((ARC_W_R(c, 10) & UINT64_C(18446744069414649855)) | UINT64_C(1684930560)));
  /* 12c8c4: strh w9, [x8, #4] */
  arc_st16((ARC_X_R(c, 8) + INT64_C(4)), ARC_W_R(c, 9));
  /* 12c8c8: adrp x9, #0x15d000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1429504)));
  /* 12c8cc: str w10, [x8] */
  arc_st32(ARC_X_R(c, 8), ARC_W_R(c, 10));
  /* 12c8d0: ldrb w8, [x9, #0xf70] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 9) + INT64_C(3952))));
  /* 12c8d4: tbnz w8, #0, #0x12c8ec */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_12c8ec;
  /* 12c8d8: adrp x8, #0x15d000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1429504)));
  /* 12c8dc: add x8, x8, #0xf70 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3952)));
  /* 12c8e0: mov w9, #0xe */
  ARC_W_W(c, 9, UINT64_C(14));
  /* 12c8e4: strb w9, [x8], #1 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(1));
    arc_st8(_a, ARC_W_R(c, 9));
  }
  /* 12c8e8: b #0x12c900 */
  goto L_12c900;
L_12c8ec:;
  /* 12c8ec: adrp x9, #0x15d000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1429504)));
  /* 12c8f0: add x9, x9, #0xf78 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(3960)));
  /* 12c8f4: mov w10, #7 */
  ARC_W_W(c, 10, UINT64_C(7));
  /* 12c8f8: ldr x8, [x9, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(8))));
  /* 12c8fc: str x10, [x9] */
  arc_st64(ARC_X_R(c, 9), ARC_X_R(c, 10));
L_12c900:;
  /* 12c900: mov w9, #0x6473 */
  ARC_W_W(c, 9, UINT64_C(25715));
  /* 12c904: mov w10, #0x7554 */
  ARC_W_W(c, 10, UINT64_C(30036));
  /* 12c908: strb wzr, [x8, #7] */
  arc_st8((ARC_X_R(c, 8) + INT64_C(7)), ARC_W_R(c, 31));
  /* 12c90c: movk w9, #0x7961, lsl #16 */
  ARC_W_W(c, 9, ((ARC_W_R(c, 9) & UINT64_C(18446744069414649855)) | UINT64_C(2036400128)));
  /* 12c910: movk w10, #0x7365, lsl #16 */
  ARC_W_W(c, 10, ((ARC_W_R(c, 10) & UINT64_C(18446744069414649855)) | UINT64_C(1935998976)));
  /* 12c914: stur w9, [x8, #3] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(3)), ARC_W_R(c, 9));
  /* 12c918: adrp x9, #0x15d000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1429504)));
  /* 12c91c: str w10, [x8] */
  arc_st32(ARC_X_R(c, 8), ARC_W_R(c, 10));
  /* 12c920: ldrb w8, [x9, #0xf88] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 9) + INT64_C(3976))));
  /* 12c924: tbnz w8, #0, #0x12c93c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_12c93c;
  /* 12c928: adrp x8, #0x15d000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1429504)));
  /* 12c92c: add x8, x8, #0xf88 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3976)));
  /* 12c930: mov w9, #0x12 */
  ARC_W_W(c, 9, UINT64_C(18));
  /* 12c934: strb w9, [x8], #1 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(1));
    arc_st8(_a, ARC_W_R(c, 9));
  }
  /* 12c938: b #0x12c950 */
  goto L_12c950;
L_12c93c:;
  /* 12c93c: adrp x9, #0x15d000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1429504)));
  /* 12c940: add x9, x9, #0xf90 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(3984)));
  /* 12c944: mov w10, #9 */
  ARC_W_W(c, 10, UINT64_C(9));
  /* 12c948: ldr x8, [x9, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(8))));
  /* 12c94c: str x10, [x9] */
  arc_st64(ARC_X_R(c, 9), ARC_X_R(c, 10));
L_12c950:;
  /* 12c950: adrp x10, #0x51000 */
  ARC_X_W(c, 10, (arc_image_bases[1] + UINT64_C(331776)));
  /* 12c954: add x10, x10, #0x914 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(2324)));
  /* 12c958: mov w9, #0x79 */
  ARC_W_W(c, 9, UINT64_C(121));
  /* 12c95c: ldr x10, [x10] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 10)));
  /* 12c960: strh w9, [x8, #8] */
  arc_st16((ARC_X_R(c, 8) + INT64_C(8)), ARC_W_R(c, 9));
  /* 12c964: str x10, [x8] */
  arc_st64(ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* 12c968: adrp x8, #0x15d000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1429504)));
  /* 12c96c: ldrb w8, [x8, #0xfa0] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 8) + INT64_C(4000))));
  /* 12c970: tbnz w8, #0, #0x12c988 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_12c988;
  /* 12c974: adrp x8, #0x15d000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1429504)));
  /* 12c978: add x8, x8, #0xfa0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(4000)));
  /* 12c97c: mov w9, #0x10 */
  ARC_W_W(c, 9, UINT64_C(16));
  /* 12c980: strb w9, [x8], #1 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(1));
    arc_st8(_a, ARC_W_R(c, 9));
  }
  /* 12c984: b #0x12c99c */
  goto L_12c99c;
L_12c988:;
  /* 12c988: adrp x9, #0x15d000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1429504)));
  /* 12c98c: add x9, x9, #0xfa8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(4008)));
  /* 12c990: mov w10, #8 */
  ARC_W_W(c, 10, UINT64_C(8));
  /* 12c994: ldr x8, [x9, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(8))));
  /* 12c998: str x10, [x9] */
  arc_st64(ARC_X_R(c, 9), ARC_X_R(c, 10));
L_12c99c:;
  /* 12c99c: mov x9, #0x6854 */
  ARC_X_W(c, 9, UINT64_C(26708));
  /* 12c9a0: strb wzr, [x8, #8] */
  arc_st8((ARC_X_R(c, 8) + INT64_C(8)), ARC_W_R(c, 31));
  /* 12c9a4: movk x9, #0x7275, lsl #16 */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(18446744069414649855)) | UINT64_C(1920270336)));
  /* 12c9a8: movk x9, #0x6473, lsl #32 */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(18446462603027808255)) | UINT64_C(110445084016640)));
  /* 12c9ac: movk x9, #0x7961, lsl #48 */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(281474976710655)) | UINT64_C(8746271951330213888)));
  /* 12c9b0: str x9, [x8] */
  arc_st64(ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 12c9b4: adrp x8, #0x15d000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1429504)));
  /* 12c9b8: ldrb w8, [x8, #0xfb8] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 8) + INT64_C(4024))));
  /* 12c9bc: tbnz w8, #0, #0x12c9d4 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_12c9d4;
  /* 12c9c0: adrp x8, #0x15d000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1429504)));
  /* 12c9c4: add x8, x8, #0xfb8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(4024)));
  /* 12c9c8: mov w9, #0xc */
  ARC_W_W(c, 9, UINT64_C(12));
  /* 12c9cc: strb w9, [x8], #1 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(1));
    arc_st8(_a, ARC_W_R(c, 9));
  }
  /* 12c9d0: b #0x12c9e8 */
  goto L_12c9e8;
L_12c9d4:;
  /* 12c9d4: adrp x9, #0x15d000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1429504)));
  /* 12c9d8: add x9, x9, #0xfc0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(4032)));
  /* 12c9dc: mov w10, #6 */
  ARC_W_W(c, 10, UINT64_C(6));
  /* 12c9e0: ldr x8, [x9, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(8))));
  /* 12c9e4: str x10, [x9] */
  arc_st64(ARC_X_R(c, 9), ARC_X_R(c, 10));
L_12c9e8:;
  /* 12c9e8: mov w10, #0x7246 */
  ARC_W_W(c, 10, UINT64_C(29254));
  /* 12c9ec: mov w9, #0x7961 */
  ARC_W_W(c, 9, UINT64_C(31073));
  /* 12c9f0: strb wzr, [x8, #6] */
  arc_st8((ARC_X_R(c, 8) + INT64_C(6)), ARC_W_R(c, 31));
  /* 12c9f4: movk w10, #0x6469, lsl #16 */
  ARC_W_W(c, 10, ((ARC_W_R(c, 10) & UINT64_C(18446744069414649855)) | UINT64_C(1684602880)));
  /* 12c9f8: strh w9, [x8, #4] */
  arc_st16((ARC_X_R(c, 8) + INT64_C(4)), ARC_W_R(c, 9));
  /* 12c9fc: adrp x9, #0x15d000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1429504)));
  /* 12ca00: str w10, [x8] */
  arc_st32(ARC_X_R(c, 8), ARC_W_R(c, 10));
  /* 12ca04: ldrb w8, [x9, #0xfd0] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 9) + INT64_C(4048))));
  /* 12ca08: tbnz w8, #0, #0x12ca20 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_12ca20;
  /* 12ca0c: adrp x8, #0x15d000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1429504)));
  /* 12ca10: add x8, x8, #0xfd0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(4048)));
  /* 12ca14: mov w9, #0x10 */
  ARC_W_W(c, 9, UINT64_C(16));
  /* 12ca18: strb w9, [x8], #1 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(1));
    arc_st8(_a, ARC_W_R(c, 9));
  }
  /* 12ca1c: b #0x12ca34 */
  goto L_12ca34;
L_12ca20:;
  /* 12ca20: adrp x9, #0x15d000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1429504)));
  /* 12ca24: add x9, x9, #0xfd8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(4056)));
  /* 12ca28: mov w10, #8 */
  ARC_W_W(c, 10, UINT64_C(8));
  /* 12ca2c: ldr x8, [x9, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(8))));
  /* 12ca30: str x10, [x9] */
  arc_st64(ARC_X_R(c, 9), ARC_X_R(c, 10));
L_12ca34:;
  /* 12ca34: mov x9, #0x6153 */
  ARC_X_W(c, 9, UINT64_C(24915));
  /* 12ca38: strb wzr, [x8, #8] */
  arc_st8((ARC_X_R(c, 8) + INT64_C(8)), ARC_W_R(c, 31));
  /* 12ca3c: movk x9, #0x7574, lsl #16 */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(18446744069414649855)) | UINT64_C(1970536448)));
  /* 12ca40: movk x9, #0x6472, lsl #32 */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(18446462603027808255)) | UINT64_C(110440789049344)));
  /* 12ca44: movk x9, #0x7961, lsl #48 */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(281474976710655)) | UINT64_C(8746271951330213888)));
  /* 12ca48: str x9, [x8] */
  arc_st64(ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 12ca4c: adrp x8, #0x15d000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1429504)));
  /* 12ca50: ldrb w8, [x8, #0xfe8] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 8) + INT64_C(4072))));
  /* 12ca54: tbnz w8, #0, #0x12ca6c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_12ca6c;
  /* 12ca58: adrp x8, #0x15d000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1429504)));
  /* 12ca5c: add x8, x8, #0xfe8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(4072)));
  /* 12ca60: mov w9, #6 */
  ARC_W_W(c, 9, UINT64_C(6));
  /* 12ca64: strb w9, [x8], #1 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(1));
    arc_st8(_a, ARC_W_R(c, 9));
  }
  /* 12ca68: b #0x12ca80 */
  goto L_12ca80;
L_12ca6c:;
  /* 12ca6c: adrp x9, #0x15d000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1429504)));
  /* 12ca70: add x9, x9, #0xff0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(4080)));
  /* 12ca74: mov w10, #3 */
  ARC_W_W(c, 10, UINT64_C(3));
  /* 12ca78: ldr x8, [x9, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(8))));
  /* 12ca7c: str x10, [x9] */
  arc_st64(ARC_X_R(c, 9), ARC_X_R(c, 10));
L_12ca80:;
  /* 12ca80: mov w9, #0x7553 */
  ARC_W_W(c, 9, UINT64_C(30035));
  /* 12ca84: movk w9, #0x6e, lsl #16 */
  ARC_W_W(c, 9, ((ARC_W_R(c, 9) & UINT64_C(18446744069414649855)) | UINT64_C(7208960)));
  /* 12ca88: str w9, [x8] */
  arc_st32(ARC_X_R(c, 8), ARC_W_R(c, 9));
  /* 12ca8c: adrp x8, #0x15e000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12ca90: ldrb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 12ca94: tbnz w8, #0, #0x12caac */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_12caac;
  /* 12ca98: adrp x8, #0x15e000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12ca9c: add x8, x8, #0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(0)));
  /* 12caa0: mov w9, #6 */
  ARC_W_W(c, 9, UINT64_C(6));
  /* 12caa4: strb w9, [x8], #1 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(1));
    arc_st8(_a, ARC_W_R(c, 9));
  }
  /* 12caa8: b #0x12cac0 */
  goto L_12cac0;
L_12caac:;
  /* 12caac: adrp x9, #0x15e000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12cab0: add x9, x9, #8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(8)));
  /* 12cab4: mov w10, #3 */
  ARC_W_W(c, 10, UINT64_C(3));
  /* 12cab8: ldr x8, [x9, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(8))));
  /* 12cabc: str x10, [x9] */
  arc_st64(ARC_X_R(c, 9), ARC_X_R(c, 10));
L_12cac0:;
  /* 12cac0: mov w9, #0x6f4d */
  ARC_W_W(c, 9, UINT64_C(28493));
  /* 12cac4: movk w9, #0x6e, lsl #16 */
  ARC_W_W(c, 9, ((ARC_W_R(c, 9) & UINT64_C(18446744069414649855)) | UINT64_C(7208960)));
  /* 12cac8: str w9, [x8] */
  arc_st32(ARC_X_R(c, 8), ARC_W_R(c, 9));
  /* 12cacc: adrp x8, #0x15e000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12cad0: ldrb w8, [x8, #0x18] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 8) + INT64_C(24))));
  /* 12cad4: tbnz w8, #0, #0x12caec */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_12caec;
  /* 12cad8: adrp x8, #0x15e000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12cadc: add x8, x8, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(24)));
  /* 12cae0: mov w9, #6 */
  ARC_W_W(c, 9, UINT64_C(6));
  /* 12cae4: strb w9, [x8], #1 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(1));
    arc_st8(_a, ARC_W_R(c, 9));
  }
  /* 12cae8: b #0x12cb00 */
  goto L_12cb00;
L_12caec:;
  /* 12caec: adrp x9, #0x15e000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12caf0: add x9, x9, #0x20 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(32)));
  /* 12caf4: mov w10, #3 */
  ARC_W_W(c, 10, UINT64_C(3));
  /* 12caf8: ldr x8, [x9, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(8))));
  /* 12cafc: str x10, [x9] */
  arc_st64(ARC_X_R(c, 9), ARC_X_R(c, 10));
L_12cb00:;
  /* 12cb00: mov w9, #0x7554 */
  ARC_W_W(c, 9, UINT64_C(30036));
  /* 12cb04: movk w9, #0x65, lsl #16 */
  ARC_W_W(c, 9, ((ARC_W_R(c, 9) & UINT64_C(18446744069414649855)) | UINT64_C(6619136)));
  /* 12cb08: str w9, [x8] */
  arc_st32(ARC_X_R(c, 8), ARC_W_R(c, 9));
  /* 12cb0c: adrp x8, #0x15e000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12cb10: ldrb w8, [x8, #0x30] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 8) + INT64_C(48))));
  /* 12cb14: tbnz w8, #0, #0x12cb2c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_12cb2c;
  /* 12cb18: adrp x8, #0x15e000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12cb1c: add x8, x8, #0x30 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(48)));
  /* 12cb20: mov w9, #6 */
  ARC_W_W(c, 9, UINT64_C(6));
  /* 12cb24: strb w9, [x8], #1 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(1));
    arc_st8(_a, ARC_W_R(c, 9));
  }
  /* 12cb28: b #0x12cb40 */
  goto L_12cb40;
L_12cb2c:;
  /* 12cb2c: adrp x9, #0x15e000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12cb30: add x9, x9, #0x38 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(56)));
  /* 12cb34: mov w10, #3 */
  ARC_W_W(c, 10, UINT64_C(3));
  /* 12cb38: ldr x8, [x9, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(8))));
  /* 12cb3c: str x10, [x9] */
  arc_st64(ARC_X_R(c, 9), ARC_X_R(c, 10));
L_12cb40:;
  /* 12cb40: mov w9, #0x6557 */
  ARC_W_W(c, 9, UINT64_C(25943));
  /* 12cb44: movk w9, #0x64, lsl #16 */
  ARC_W_W(c, 9, ((ARC_W_R(c, 9) & UINT64_C(18446744069414649855)) | UINT64_C(6553600)));
  /* 12cb48: str w9, [x8] */
  arc_st32(ARC_X_R(c, 8), ARC_W_R(c, 9));
  /* 12cb4c: adrp x8, #0x15e000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12cb50: ldrb w8, [x8, #0x48] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 8) + INT64_C(72))));
  /* 12cb54: tbnz w8, #0, #0x12cb6c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_12cb6c;
  /* 12cb58: adrp x8, #0x15e000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12cb5c: add x8, x8, #0x48 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(72)));
  /* 12cb60: mov w9, #6 */
  ARC_W_W(c, 9, UINT64_C(6));
  /* 12cb64: strb w9, [x8], #1 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(1));
    arc_st8(_a, ARC_W_R(c, 9));
  }
  /* 12cb68: b #0x12cb80 */
  goto L_12cb80;
L_12cb6c:;
  /* 12cb6c: adrp x9, #0x15e000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12cb70: add x9, x9, #0x50 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(80)));
  /* 12cb74: mov w10, #3 */
  ARC_W_W(c, 10, UINT64_C(3));
  /* 12cb78: ldr x8, [x9, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(8))));
  /* 12cb7c: str x10, [x9] */
  arc_st64(ARC_X_R(c, 9), ARC_X_R(c, 10));
L_12cb80:;
  /* 12cb80: mov w9, #0x6854 */
  ARC_W_W(c, 9, UINT64_C(26708));
  /* 12cb84: movk w9, #0x75, lsl #16 */
  ARC_W_W(c, 9, ((ARC_W_R(c, 9) & UINT64_C(18446744069414649855)) | UINT64_C(7667712)));
  /* 12cb88: str w9, [x8] */
  arc_st32(ARC_X_R(c, 8), ARC_W_R(c, 9));
  /* 12cb8c: adrp x8, #0x15e000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12cb90: ldrb w8, [x8, #0x60] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 8) + INT64_C(96))));
  /* 12cb94: tbnz w8, #0, #0x12cbac */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_12cbac;
  /* 12cb98: adrp x8, #0x15e000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12cb9c: add x8, x8, #0x60 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(96)));
  /* 12cba0: mov w9, #6 */
  ARC_W_W(c, 9, UINT64_C(6));
  /* 12cba4: strb w9, [x8], #1 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(1));
    arc_st8(_a, ARC_W_R(c, 9));
  }
  /* 12cba8: b #0x12cbc0 */
  goto L_12cbc0;
L_12cbac:;
  /* 12cbac: adrp x9, #0x15e000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12cbb0: add x9, x9, #0x68 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(104)));
  /* 12cbb4: mov w10, #3 */
  ARC_W_W(c, 10, UINT64_C(3));
  /* 12cbb8: ldr x8, [x9, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(8))));
  /* 12cbbc: str x10, [x9] */
  arc_st64(ARC_X_R(c, 9), ARC_X_R(c, 10));
L_12cbc0:;
  /* 12cbc0: mov w9, #0x7246 */
  ARC_W_W(c, 9, UINT64_C(29254));
  /* 12cbc4: movk w9, #0x69, lsl #16 */
  ARC_W_W(c, 9, ((ARC_W_R(c, 9) & UINT64_C(18446744069414649855)) | UINT64_C(6881280)));
  /* 12cbc8: str w9, [x8] */
  arc_st32(ARC_X_R(c, 8), ARC_W_R(c, 9));
  /* 12cbcc: adrp x8, #0x15e000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12cbd0: ldrb w8, [x8, #0x78] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 8) + INT64_C(120))));
  /* 12cbd4: tbnz w8, #0, #0x12cbec */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_12cbec;
  /* 12cbd8: adrp x8, #0x15e000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12cbdc: add x8, x8, #0x78 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(120)));
  /* 12cbe0: mov w9, #6 */
  ARC_W_W(c, 9, UINT64_C(6));
  /* 12cbe4: strb w9, [x8], #1 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(1));
    arc_st8(_a, ARC_W_R(c, 9));
  }
  /* 12cbe8: b #0x12cc00 */
  goto L_12cc00;
L_12cbec:;
  /* 12cbec: adrp x9, #0x15e000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12cbf0: add x9, x9, #0x80 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(128)));
  /* 12cbf4: mov w10, #3 */
  ARC_W_W(c, 10, UINT64_C(3));
  /* 12cbf8: ldr x8, [x9, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(8))));
  /* 12cbfc: str x10, [x9] */
  arc_st64(ARC_X_R(c, 9), ARC_X_R(c, 10));
L_12cc00:;
  /* 12cc00: mov w9, #0x6153 */
  ARC_W_W(c, 9, UINT64_C(24915));
  /* 12cc04: movk w9, #0x74, lsl #16 */
  ARC_W_W(c, 9, ((ARC_W_R(c, 9) & UINT64_C(18446744069414649855)) | UINT64_C(7602176)));
  /* 12cc08: str w9, [x8] */
  arc_st32(ARC_X_R(c, 8), ARC_W_R(c, 9));
  /* 12cc0c: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 12cc10: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 12cc14: ret  */
  return;
L_12cc18:;
  /* 12cc18: nop  */
  /* nop: no architectural effect here */
  /* 12cc1c: adr x0, #0x15e090 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1433744)));
  /* 12cc20: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1231908));
  fn1_1424b8(c);
  /* 12cc24: cbz w0, #0x12c834 */
  if ((ARC_W_R(c, 0)) == 0) goto L_12c834;
  /* 12cc28: nop  */
  /* nop: no architectural effect here */
  /* 12cc2c: adr x0, #0x135450 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1266768)));
  /* 12cc30: nop  */
  /* nop: no architectural effect here */
  /* 12cc34: adr x2, #0x148af8 */
  ARC_X_W(c, 2, (arc_image_bases[1] + UINT64_C(1346296)));
  /* 12cc38: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 12cc3c: bl #0x1423f8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1231936));
  fn1_1423f8(c);
  /* 12cc40: nop  */
  /* nop: no architectural effect here */
  /* 12cc44: adr x0, #0x15e090 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1433744)));
  /* 12cc48: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1231948));
  fn1_1424d0(c);
  /* 12cc4c: b #0x12c834 */
  goto L_12c834;
}

void fn1_1349d0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039192016));
  /* 1349d0: bti c */
  /* bti: no architectural effect here */
  /* 1349d4: ret  */
  return;
}

void fn1_13511c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039193884));
  /* 13511c: bti c */
  /* bti: no architectural effect here */
  /* 135120: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 135124: ldr x0, [x8] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 8)));
  /* 135128: cbz x0, #0x13514c */
  if ((ARC_X_R(c, 0)) == 0) goto L_13514c;
  /* 13512c: add x9, x8, #0x18 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(24)));
  /* 135130: str x0, [x8, #8] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(8)), ARC_X_R(c, 0));
  /* 135134: cmp x0, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 9));
  /* 135138: b.eq #0x135148 */
  if (ARC_COND(c, 0)) goto L_135148;
  /* 13513c: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 135140: sub x1, x8, x0 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) - ARC_X_R(c, 0)));
  /* 135144: b #0x142608 */
  fn1_142608(c); return;
L_135148:;
  /* 135148: strb wzr, [x8, #0x108] */
  arc_st8((ARC_X_R(c, 8) + INT64_C(264)), ARC_W_R(c, 31));
L_13514c:;
  /* 13514c: ret  */
  return;
}

void fn1_138250(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039206480));
  /* 138250: bti c */
  /* bti: no architectural effect here */
  /* 138254: ldr x9, [x1] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 1)));
  /* 138258: mov x8, x0 */
  ARC_X_W(c, 8, ARC_X_R(c, 0));
  /* 13825c: str x9, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 9));
  }
  /* 138260: ldur x9, [x9, #-0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(-24))));
  /* 138264: ldr x10, [x1, #0x18] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 1) + INT64_C(24))));
  /* 138268: str x10, [x8, x9] */
  arc_st64((ARC_X_R(c, 8) + ARC_X_R(c, 9)), ARC_X_R(c, 10));
  /* 13826c: b #0x144558 */
  fn1_144558(c); return;
}

void fn1_13c27c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039222908));
  /* 13c27c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 13c280: sub sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(96)));
  /* 13c284: stp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 13c288: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 13c28c: add x29, sp, #0x40 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(64)));
  /* 13c290: ldr x9, [x0, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* 13c294: cbz x9, #0x13c2bc */
  if ((ARC_X_R(c, 9)) == 0) goto L_13c2bc;
  /* 13c298: ldr q0, [x1] */
  arc_q_w(c, 0, arc_ld64(ARC_X_R(c, 1)), arc_ld64(ARC_X_R(c, 1) + 8));
  /* 13c29c: stp xzr, xzr, [x8, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 8) + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 13c2a0: str q0, [x9] */
  arc_st64(ARC_X_R(c, 9), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 9) + 8, (c)->q[0].u64[1]);
  /* 13c2a4: str xzr, [x8] */
  arc_st64(ARC_X_R(c, 8), ARC_X_R(c, 31));
  /* 13c2a8: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 13c2ac: ldp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 13c2b0: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* 13c2b4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 13c2b8: ret  */
  return;
L_13c2bc:;
  /* 13c2bc: str x1, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 1));
  /* 13c2c0: adrp x1, #0x51000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(331776)));
  /* 13c2c4: add x1, x1, #0x597 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1431)));
  /* 13c2c8: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 13c2cc: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 13c2d0: bl #0x11dda8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1295060));
  fn1_11dda8(c);
  /* 13c2d4: ldr x1, [x20] */
  ARC_X_W(c, 1, arc_ld64(ARC_X_R(c, 20)));
  /* 13c2d8: mov x19, x20 */
  ARC_X_W(c, 19, ARC_X_R(c, 20));
  /* 13c2dc: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 13c2e0: bl #0x142b78 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1295076));
  fn1_142b78(c);
  /* 13c2e4: ldr x8, [x0, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 13c2e8: ldr q0, [x0] */
  arc_q_w(c, 0, arc_ld64(ARC_X_R(c, 0)), arc_ld64(ARC_X_R(c, 0) + 8));
  /* 13c2ec: str x8, [sp, #0x30] */
  arc_st64(((c)->sp + INT64_C(48)), ARC_X_R(c, 8));
  /* 13c2f0: str q0, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), (c)->q[0].u64[0]);
  arc_st64(((c)->sp + INT64_C(32)) + 8, (c)->q[0].u64[1]);
  /* 13c2f4: stp xzr, xzr, [x0, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 13c2f8: str xzr, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 31));
  /* 13c2fc: ldrb w8, [sp, #8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(8))));
  /* 13c300: tbz w8, #0, #0x13c314 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13c314;
  /* 13c304: ldr x8, [sp, #8] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(8))));
  /* 13c308: ldr x0, [sp, #0x18] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(24))));
  /* 13c30c: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 13c310: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1295124));
  fn1_142608(c);
L_13c314:;
  /* 13c314: ldp x1, x2, [x19, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(16));
    ARC_X_W(c, 1, arc_ld64(_pa));
    ARC_X_W(c, 2, arc_ld64(_pa + 8));
  }
  /* 13c318: cmp x1, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 1), UINT64_C(0));
  /* 13c31c: cset w8, ne */
  ARC_W_W(c, 8, (ARC_COND(c, 1) ? 1 : 0));
  /* 13c320: cmp x2, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 2), UINT64_C(0));
  /* 13c324: cinc w8, w8, ne */
  ARC_W_W(c, 8, (ARC_COND(c, 1) ? (ARC_W_R(c, 8)) + 1 : (ARC_W_R(c, 8))));
  /* 13c328: cbz w8, #0x13c340 */
  if ((ARC_W_R(c, 8)) == 0) goto L_13c340;
  /* 13c32c: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* 13c330: b.ne #0x13c34c */
  if (ARC_COND(c, 1)) goto L_13c34c;
  /* 13c334: ldr x2, [sp] */
  ARC_X_W(c, 2, arc_ld64((c)->sp));
  /* 13c338: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 13c33c: bl #0x138e98 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1295168));
  fn1_138e98(c);
L_13c340:;
  /* 13c340: ldr x1, [sp] */
  ARC_X_W(c, 1, arc_ld64((c)->sp));
  /* 13c344: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 13c348: bl #0x138db4 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1295180));
  fn1_138db4(c);
L_13c34c:;
  /* 13c34c: ldr x3, [sp] */
  ARC_X_W(c, 3, arc_ld64((c)->sp));
  /* 13c350: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 13c354: bl #0x138f84 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1295192));
  fn1_138f84(c);
  /* 13c358: ldrb w8, [sp, #0x20] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(32))));
  /* 13c35c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 13c360: tbz w8, #0, #0x13c38c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13c38c;
  /* 13c364: ldr x0, [sp, #0x30] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(48))));
  /* 13c368: ldr x8, [sp, #0x20] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(32))));
  /* 13c36c: b #0x13c384 */
  goto L_13c384;
  /* 13c370: ldrb w8, [sp, #8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(8))));
  /* 13c374: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 13c378: tbz w8, #0, #0x13c38c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13c38c;
  /* 13c37c: ldr x0, [sp, #0x18] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(24))));
  /* 13c380: ldr x8, [sp, #8] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(8))));
L_13c384:;
  /* 13c384: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 13c388: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1295244));
  fn1_142608(c);
L_13c38c:;
  /* 13c38c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 13c390: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1295252));
  fn1_9cc20(c);
}

void fn1_142500(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039248128));
  /* 142500: adrp x16, #0x151000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 142504: ldr x17, [x16, #0xee0] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(3808))));
  /* 142508: add x16, x16, #0xee0 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(3808)));
  /* 14250c: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 142510: nop  */
  /* nop: no architectural effect here */
  /* 142514: nop  */
  /* nop: no architectural effect here */
}

void fn1_142b00(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039249664));
  /* 142b00: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 142b04: ldr x17, [x16, #0xe0] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(224))));
  /* 142b08: add x16, x16, #0xe0 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(224)));
  /* 142b0c: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 142b10: nop  */
  /* nop: no architectural effect here */
  /* 142b14: nop  */
  /* nop: no architectural effect here */
}

void fn1_143100(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039251200));
  /* 143100: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 143104: ldr x17, [x16, #0x2e0] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(736))));
  /* 143108: add x16, x16, #0x2e0 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(736)));
  /* 14310c: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 143110: nop  */
  /* nop: no architectural effect here */
  /* 143114: nop  */
  /* nop: no architectural effect here */
}

void fn1_143700(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039252736));
  /* 143700: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 143704: ldr x17, [x16, #0x4e0] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(1248))));
  /* 143708: add x16, x16, #0x4e0 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(1248)));
  /* 14370c: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 143710: nop  */
  /* nop: no architectural effect here */
  /* 143714: nop  */
  /* nop: no architectural effect here */
}

void fn1_143d00(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039254272));
  /* 143d00: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 143d04: ldr x17, [x16, #0x6e0] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(1760))));
  /* 143d08: add x16, x16, #0x6e0 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(1760)));
  /* 143d0c: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 143d10: nop  */
  /* nop: no architectural effect here */
  /* 143d14: nop  */
  /* nop: no architectural effect here */
}

void fn1_144300(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039255808));
  /* 144300: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 144304: ldr x17, [x16, #0x8e0] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(2272))));
  /* 144308: add x16, x16, #0x8e0 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(2272)));
  /* 14430c: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 144310: nop  */
  /* nop: no architectural effect here */
  /* 144314: nop  */
  /* nop: no architectural effect here */
}

void fn1_144900(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039257344));
  /* 144900: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 144904: ldr x17, [x16, #0xae0] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(2784))));
  /* 144908: add x16, x16, #0xae0 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(2784)));
  /* 14490c: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 144910: nop  */
  /* nop: no architectural effect here */
  /* 144914: nop  */
  /* nop: no architectural effect here */
}

