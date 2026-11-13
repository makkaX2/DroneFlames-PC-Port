#include "lifted.h"

void fn1_9d7dc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038573020));
  /* 9d7dc: bti c */
  /* bti: no architectural effect here */
  /* 9d7e0: add x8, x0, w1, sxtw #3 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + ((uint64_t)(((uint64_t)(int64_t)(int32_t)(ARC_W_R(c, 1)))) << 3)));
  /* 9d7e4: ldur d0, [x8, #-0xe0] */
  arc_du_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(-224))));
  /* 9d7e8: ret  */
  return;
}

void fn1_a1ebc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038591164));
  /* a1ebc: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* a1ec0: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* a1ec4: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* a1ec8: nop  */
  /* nop: no architectural effect here */
  /* a1ecc: adr x0, #0x4f674 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(325236)));
  /* a1ed0: bl #0xa23d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(663252));
  fn1_a23d8(c);
}

void fn1_a319c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038595996));
  /* a319c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* a31a0: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* a31a4: str x23, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 23));
  /* a31a8: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* a31ac: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* a31b0: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* a31b4: adrp x20, #0x151000 */
  ARC_X_W(c, 20, (arc_image_bases[1] + UINT64_C(1380352)));
  /* a31b8: adrp x21, #0x151000 */
  ARC_X_W(c, 21, (arc_image_bases[1] + UINT64_C(1380352)));
  /* a31bc: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* a31c0: ldr x20, [x20, #0x9a8] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 20) + INT64_C(2472))));
  /* a31c4: ldr x21, [x21, #0x9c0] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 21) + INT64_C(2496))));
  /* a31c8: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
L_a31cc:;
  /* a31cc: cbz x19, #0xa329c */
  if ((ARC_X_R(c, 19)) == 0) goto L_a329c;
  /* a31d0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a31d4: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* a31d8: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* a31dc: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* a31e0: bl #0x142830 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(668132));
  fn1_142830(c);
  /* a31e4: cbz x0, #0xa32a8 */
  if ((ARC_X_R(c, 0)) == 0) goto L_a32a8;
  /* a31e8: ldr w9, [x0, #0x10] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 0) + INT64_C(16))));
  /* a31ec: ldr w8, [x23, #0x10] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 23) + INT64_C(16))));
  /* a31f0: bics wzr, w9, w8 */
  { uint32_t _r = (uint32_t)(ARC_W_R(c, 9) & (~ARC_W_R(c, 8)));
    arc_flags_logical32(c, _r);
    ARC_W_W(c, 31, _r); }
  /* a31f4: b.ne #0xa329c */
  if (ARC_COND(c, 1)) goto L_a329c;
  /* a31f8: ldr x22, [x23, #0x18] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 23) + INT64_C(24))));
  /* a31fc: ldr x19, [x0, #0x18] */
  ARC_X_W(c, 19, arc_ld64((ARC_X_R(c, 0) + INT64_C(24))));
  /* a3200: ldr x9, [x22, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 22) + INT64_C(8))));
  /* a3204: ldr x10, [x19, #8] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* a3208: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* a320c: b.eq #0xa32a4 */
  if (ARC_COND(c, 0)) goto L_a32a4;
  /* a3210: tbz w8, #0, #0xa329c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_a329c;
  /* a3214: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* a3218: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* a321c: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* a3220: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* a3224: bl #0x142830 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(668200));
  fn1_142830(c);
  /* a3228: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* a322c: cbnz x0, #0xa31cc */
  if ((ARC_X_R(c, 0)) != 0) goto L_a31cc;
  /* a3230: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* a3234: adrp x2, #0x151000 */
  ARC_X_W(c, 2, (arc_image_bases[1] + UINT64_C(1380352)));
  /* a3238: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* a323c: ldr x1, [x1, #0x9a8] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(2472))));
  /* a3240: ldr x2, [x2, #0x9d0] */
  ARC_X_W(c, 2, arc_ld64((ARC_X_R(c, 2) + INT64_C(2512))));
  /* a3244: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* a3248: bl #0x142830 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(668236));
  fn1_142830(c);
  /* a324c: cbz x0, #0xa32a8 */
  if ((ARC_X_R(c, 0)) == 0) goto L_a32a8;
  /* a3250: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* a3254: adrp x2, #0x151000 */
  ARC_X_W(c, 2, (arc_image_bases[1] + UINT64_C(1380352)));
  /* a3258: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* a325c: ldr x1, [x1, #0x9a8] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(2472))));
  /* a3260: ldr x2, [x2, #0x9d0] */
  ARC_X_W(c, 2, arc_ld64((ARC_X_R(c, 2) + INT64_C(2512))));
  /* a3264: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a3268: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* a326c: bl #0x142830 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(668272));
  fn1_142830(c);
  /* a3270: cbz x0, #0xa32a8 */
  if ((ARC_X_R(c, 0)) == 0) goto L_a32a8;
  /* a3274: ldr w8, [x20, #0x10] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 20) + INT64_C(16))));
  /* a3278: ldr w9, [x0, #0x10] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 0) + INT64_C(16))));
  /* a327c: bics wzr, w9, w8 */
  { uint32_t _r = (uint32_t)(ARC_W_R(c, 9) & (~ARC_W_R(c, 8)));
    arc_flags_logical32(c, _r);
    ARC_W_W(c, 31, _r); }
  /* a3280: b.ne #0xa329c */
  if (ARC_COND(c, 1)) goto L_a329c;
  /* a3284: ldr x8, [x20, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(24))));
  /* a3288: ldr x9, [x0, #0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(24))));
  /* a328c: ldr x8, [x8, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(8))));
  /* a3290: ldr x9, [x9, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(8))));
  /* a3294: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* a3298: b.eq #0xa32c0 */
  if (ARC_COND(c, 0)) goto L_a32c0;
L_a329c:;
  /* a329c: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* a32a0: b #0xa32a8 */
  goto L_a32a8;
L_a32a4:;
  /* a32a4: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
L_a32a8:;
  /* a32a8: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* a32ac: ldr x23, [sp, #0x10] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(16))));
  /* a32b0: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* a32b4: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* a32b8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* a32bc: ret  */
  return;
L_a32c0:;
  /* a32c0: ldr x8, [x20, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(32))));
  /* a32c4: ldr x9, [x0, #0x20] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(32))));
  /* a32c8: ldr x8, [x8, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(8))));
  /* a32cc: ldr x9, [x9, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(8))));
  /* a32d0: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* a32d4: cset w0, eq */
  ARC_W_W(c, 0, (ARC_COND(c, 0) ? 1 : 0));
  /* a32d8: b #0xa32a8 */
  goto L_a32a8;
}

void fn1_aa364(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038625124));
  /* aa364: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* aa368: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* aa36c: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* aa370: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* aa374: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* aa378: ldr x21, [x0, #0x1330] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 0) + INT64_C(4912))));
  /* aa37c: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* aa380: ldr x8, [x21, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 21) + INT64_C(8))));
  /* aa384: sub x9, x8, #0xfd0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4048)));
  /* aa388: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* aa38c: b.hi #0xaa3b0 */
  if (ARC_COND(c, 8)) goto L_aa3b0;
  /* aa390: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* aa394: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* aa398: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(697244));
  fn1_1428a8(c);
  /* aa39c: cbz x0, #0xaa40c */
  if ((ARC_X_R(c, 0)) == 0) goto L_aa40c;
  /* aa3a0: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* aa3a4: stp x21, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 21));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* aa3a8: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* aa3ac: str x0, [x20, #0x1330] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(4912)), ARC_X_R(c, 0));
L_aa3b0:;
  /* aa3b0: add x9, x8, #0x20 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(32)));
  /* aa3b4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* aa3b8: add x20, x21, x8 */
  ARC_X_W(c, 20, (ARC_X_R(c, 21) + ARC_X_R(c, 8)));
  /* aa3bc: str x9, [x21, #8] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(8)), ARC_X_R(c, 9));
  /* aa3c0: bl #0x142860 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(697284));
  fn1_142860(c);
  /* aa3c4: adrp x9, #0x149000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1347584)));
  /* aa3c8: add x9, x9, #0xc10 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(3088)));
  /* aa3cc: mov w11, #0x540 */
  ARC_W_W(c, 11, UINT64_C(1344));
  /* aa3d0: str x9, [x20, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 20) + INT64_C(16));
    ARC_X_W(c, 20, ARC_X_R(c, 20) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 9));
  }
  /* aa3d4: ldurh w9, [x20, #9] */
  ARC_W_W(c, 9, arc_ld16((ARC_X_R(c, 20) + INT64_C(9))));
  /* aa3d8: mov x8, x0 */
  ARC_X_W(c, 8, ARC_X_R(c, 0));
  /* aa3dc: mov w10, #8 */
  ARC_W_W(c, 10, UINT64_C(8));
  /* aa3e0: and w9, w9, #0xf000 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) & UINT64_C(61440)));
  /* aa3e4: strb w10, [x20, #8] */
  arc_st8((ARC_X_R(c, 20) + INT64_C(8)), ARC_W_R(c, 10));
  /* aa3e8: orr w9, w9, w11 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | ARC_W_R(c, 11)));
  /* aa3ec: stp x19, x8, [x20, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 19));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* aa3f0: sturh w9, [x20, #9] */
  arc_st16((ARC_X_R(c, 20) + INT64_C(9)), ARC_W_R(c, 9));
  /* aa3f4: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* aa3f8: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* aa3fc: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* aa400: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* aa404: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* aa408: ret  */
  return;
L_aa40c:;
  /* aa40c: bl #0x142488 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(697360));
  fn1_142488(c);
}

void fn1_b0f70(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038652784));
  /* b0f70: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* b0f74: sub sp, sp, #0x130 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(304)));
  /* b0f78: stp x29, x30, [sp, #0xd0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(208));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b0f7c: stp x28, x27, [sp, #0xe0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(224));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* b0f80: stp x26, x25, [sp, #0xf0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(240));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* b0f84: stp x24, x23, [sp, #0x100] */
  { const uint64_t _pa = ((c)->sp + INT64_C(256));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* b0f88: stp x22, x21, [sp, #0x110] */
  { const uint64_t _pa = ((c)->sp + INT64_C(272));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* b0f8c: stp x20, x19, [sp, #0x120] */
  { const uint64_t _pa = ((c)->sp + INT64_C(288));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* b0f90: add x29, sp, #0xd0 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(208)));
  /* b0f94: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* b0f98: cbz x1, #0xb0fa4 */
  if ((ARC_X_R(c, 1)) == 0) goto L_b0fa4;
  /* b0f9c: ldr x8, [x19, #0x298] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(664))));
  /* b0fa0: str x8, [x19, #0x2a0] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(672)), ARC_X_R(c, 8));
L_b0fa4:;
  /* b0fa4: ldp x9, x23, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* b0fa8: sub x8, x23, x9 */
  ARC_X_W(c, 8, (ARC_X_R(c, 23) - ARC_X_R(c, 9)));
  /* b0fac: cmp x8, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(2));
  /* b0fb0: b.hs #0xb0fdc */
  if (ARC_COND(c, 2)) goto L_b0fdc;
L_b0fb4:;
  /* b0fb4: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
L_b0fb8:;
  /* b0fb8: ldp x20, x19, [sp, #0x120] */
  { const uint64_t _pa = ((c)->sp + INT64_C(288));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* b0fbc: ldp x22, x21, [sp, #0x110] */
  { const uint64_t _pa = ((c)->sp + INT64_C(272));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* b0fc0: ldp x24, x23, [sp, #0x100] */
  { const uint64_t _pa = ((c)->sp + INT64_C(256));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* b0fc4: ldp x26, x25, [sp, #0xf0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(240));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* b0fc8: ldp x28, x27, [sp, #0xe0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(224));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* b0fcc: ldp x29, x30, [sp, #0xd0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(208));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b0fd0: add sp, sp, #0x130 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(304)));
  /* b0fd4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* b0fd8: ret  */
  return;
L_b0fdc:;
  /* b0fdc: ldrh w8, [x9] */
  ARC_W_W(c, 8, arc_ld16(ARC_X_R(c, 9)));
  /* b0fe0: mov w10, #0x7455 */
  ARC_W_W(c, 10, UINT64_C(29781));
  /* b0fe4: cmp w8, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 10));
  /* b0fe8: b.eq #0xb10e0 */
  if (ARC_COND(c, 0)) goto L_b10e0;
  /* b0fec: ldrh w8, [x9] */
  ARC_W_W(c, 8, arc_ld16(ARC_X_R(c, 9)));
  /* b0ff0: mov w10, #0x6c55 */
  ARC_W_W(c, 10, UINT64_C(27733));
  /* b0ff4: cmp w8, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 10));
  /* b0ff8: b.eq #0xb1114 */
  if (ARC_COND(c, 0)) goto L_b1114;
  /* b0ffc: ldrh w8, [x9] */
  ARC_W_W(c, 8, arc_ld16(ARC_X_R(c, 9)));
  /* b1000: mov w10, #0x6255 */
  ARC_W_W(c, 10, UINT64_C(25173));
  /* b1004: cmp w8, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 10));
  /* b1008: b.ne #0xb0fb4 */
  if (ARC_COND(c, 1)) goto L_b0fb4;
  /* b100c: add x8, x9, #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) + UINT64_C(2)));
  /* b1010: cmp x23, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 8));
  /* b1014: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* b1018: b.eq #0xb104c */
  if (ARC_COND(c, 0)) goto L_b104c;
  /* b101c: ldrb w9, [x8] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 8)));
  /* b1020: sub w9, w9, #0x3a */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) - UINT64_C(58)));
  /* b1024: cmn w9, #0xa */
  (void)arc_add32(c, ARC_W_R(c, 9), UINT64_C(10), 0);
  /* b1028: b.lo #0xb104c */
  if (ARC_COND(c, 3)) goto L_b104c;
L_b102c:;
  /* b102c: ldrb w9, [x8] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 8)));
  /* b1030: sub w9, w9, #0x3a */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) - UINT64_C(58)));
  /* b1034: cmn w9, #0xa */
  (void)arc_add32(c, ARC_W_R(c, 9), UINT64_C(10), 0);
  /* b1038: b.lo #0xb104c */
  if (ARC_COND(c, 3)) goto L_b104c;
  /* b103c: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* b1040: cmp x8, x23 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 23));
  /* b1044: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* b1048: b.ne #0xb102c */
  if (ARC_COND(c, 1)) goto L_b102c;
L_b104c:;
  /* b104c: cmp x8, x23 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 23));
  /* b1050: b.eq #0xb0fb4 */
  if (ARC_COND(c, 0)) goto L_b0fb4;
  /* b1054: ldrb w9, [x8] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 8)));
  /* b1058: cmp w9, #0x5f */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(95));
  /* b105c: b.ne #0xb0fb4 */
  if (ARC_COND(c, 1)) goto L_b0fb4;
  /* b1060: ldr x20, [x19, #0x1330] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 19) + INT64_C(4912))));
  /* b1064: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* b1068: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* b106c: ldr x9, [x20, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 20) + INT64_C(8))));
  /* b1070: sub x10, x9, #0xfd0 */
  ARC_X_W(c, 10, (ARC_X_R(c, 9) - UINT64_C(4048)));
  /* b1074: cmn x10, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 10), UINT64_C(4081), 0);
  /* b1078: b.hi #0xb1098 */
  if (ARC_COND(c, 8)) goto L_b1098;
  /* b107c: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* b1080: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(725124));
  fn1_1428a8(c);
  /* b1084: cbz x0, #0xb1688 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b1688;
  /* b1088: mov x9, xzr */
  ARC_X_W(c, 9, ARC_X_R(c, 31));
  /* b108c: stp x20, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* b1090: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* b1094: str x0, [x19, #0x1330] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(4912)), ARC_X_R(c, 0));
L_b1098:;
  /* b1098: add x8, x9, #0x20 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) + UINT64_C(32)));
  /* b109c: add x0, x20, x9 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + ARC_X_R(c, 9)));
  /* b10a0: adrp x9, #0x149000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1347584)));
  /* b10a4: add x9, x9, #0xc10 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(3088)));
  /* b10a8: str x8, [x20, #8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(8)), ARC_X_R(c, 8));
  /* b10ac: mov w10, #0x540 */
  ARC_W_W(c, 10, UINT64_C(1344));
  /* b10b0: str x9, [x0, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 9));
  }
  /* b10b4: ldurh w8, [x0, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 0) + INT64_C(9))));
  /* b10b8: mov w9, #8 */
  ARC_W_W(c, 9, UINT64_C(8));
  /* b10bc: and w8, w8, #0xf000 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(61440)));
  /* b10c0: strb w9, [x0, #8] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 9));
  /* b10c4: adrp x9, #0x51000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(331776)));
  /* b10c8: add x9, x9, #0x85f */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(2143)));
  /* b10cc: orr w8, w8, w10 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | ARC_W_R(c, 10)));
  /* b10d0: sturh w8, [x0, #9] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(9)), ARC_W_R(c, 8));
  /* b10d4: mov w8, #0xf */
  ARC_W_W(c, 8, UINT64_C(15));
  /* b10d8: stp x9, x8, [x0, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* b10dc: b #0xb0fb8 */
  goto L_b0fb8;
L_b10e0:;
  /* b10e0: add x8, x9, #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) + UINT64_C(2)));
  /* b10e4: cmp x23, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 8));
  /* b10e8: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* b10ec: b.eq #0xb1100 */
  if (ARC_COND(c, 0)) goto L_b1100;
  /* b10f0: ldrb w10, [x8] */
  ARC_W_W(c, 10, arc_ld8(ARC_X_R(c, 8)));
  /* b10f4: sub w10, w10, #0x3a */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) - UINT64_C(58)));
  /* b10f8: cmn w10, #0xa */
  (void)arc_add32(c, ARC_W_R(c, 10), UINT64_C(10), 0);
  /* b10fc: b.hs #0xb11a0 */
  if (ARC_COND(c, 2)) goto L_b11a0;
L_b1100:;
  /* b1100: mov x20, xzr */
  ARC_X_W(c, 20, ARC_X_R(c, 31));
  /* b1104: mov x21, xzr */
  ARC_X_W(c, 21, ARC_X_R(c, 31));
  /* b1108: cmp x8, x23 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 23));
  /* b110c: b.ne #0xb11e4 */
  if (ARC_COND(c, 1)) goto L_b11e4;
  /* b1110: b #0xb0fb4 */
  goto L_b0fb4;
L_b1114:;
  /* b1114: ldr x22, [x19, #0x2a0] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 19) + INT64_C(672))));
  /* b1118: ldr x21, [x19, #0x298] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 19) + INT64_C(664))));
  /* b111c: add x25, sp, #0x60 */
  ARC_X_W(c, 25, ((c)->sp + UINT64_C(96)));
  /* b1120: add x24, x9, #2 */
  ARC_X_W(c, 24, (ARC_X_R(c, 9) + UINT64_C(2)));
  /* b1124: add x9, x25, #0x28 */
  ARC_X_W(c, 9, (ARC_X_R(c, 25) + UINT64_C(40)));
  /* b1128: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* b112c: sub x20, x22, x21 */
  ARC_X_W(c, 20, (ARC_X_R(c, 22) - ARC_X_R(c, 21)));
  /* b1130: stp x9, x9, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* b1134: asr x8, x20, #3 */
  ARC_X_W(c, 8, ((uint64_t)((int64_t)(ARC_X_R(c, 20)) >> ((UINT64_C(3)) & 63))));
  /* b1138: str x9, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 9));
  /* b113c: ldr x9, [x19, #0x310] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(784))));
  /* b1140: str x24, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 24));
  /* b1144: str x8, [x19, #0x310] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(784)), ARC_X_R(c, 8));
  /* b1148: stp x19, x8, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 19));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* b114c: ldr x8, [x19, #0x2a8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(680))));
  /* b1150: str x9, [sp, #0x18] */
  arc_st64(((c)->sp + INT64_C(24)), ARC_X_R(c, 9));
  /* b1154: add x9, x25, #0x68 */
  ARC_X_W(c, 9, (ARC_X_R(c, 25) + UINT64_C(104)));
  /* b1158: str x9, [sp, #0x80] */
  arc_st64(((c)->sp + INT64_C(128)), ARC_X_R(c, 9));
  /* b115c: add x9, sp, #0x60 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(96)));
  /* b1160: cmp x22, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 8));
  /* b1164: stur q0, [sp, #0x88] */
  arc_st64(((c)->sp + INT64_C(136)), (c)->q[0].u64[0]);
  arc_st64(((c)->sp + INT64_C(136)) + 8, (c)->q[0].u64[1]);
  /* b1168: stur q0, [sp, #0x98] */
  arc_st64(((c)->sp + INT64_C(152)), (c)->q[0].u64[0]);
  arc_st64(((c)->sp + INT64_C(152)) + 8, (c)->q[0].u64[1]);
  /* b116c: stur q0, [x9, #0x48] */
  arc_st64((ARC_X_R(c, 9) + INT64_C(72)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 9) + INT64_C(72)) + 8, (c)->q[0].u64[1]);
  /* b1170: stur q0, [x9, #0x58] */
  arc_st64((ARC_X_R(c, 9) + INT64_C(88)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 9) + INT64_C(88)) + 8, (c)->q[0].u64[1]);
  /* b1174: b.ne #0xb12a0 */
  if (ARC_COND(c, 1)) goto L_b12a0;
  /* b1178: add x8, x19, #0x2b0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + UINT64_C(688)));
  /* b117c: lsl x1, x20, #1 */
  ARC_X_W(c, 1, ((uint64_t)(ARC_X_R(c, 20)) << ((UINT64_C(1)) & 63)));
  /* b1180: cmp x21, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 8));
  /* b1184: b.eq #0xb1264 */
  if (ARC_COND(c, 0)) goto L_b1264;
  /* b1188: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* b118c: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(725392));
  fn1_142878(c);
  /* b1190: str x0, [x19, #0x298] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(664)), ARC_X_R(c, 0));
  /* b1194: cbz x0, #0xb16ac */
  if ((ARC_X_R(c, 0)) == 0) goto L_b16ac;
  /* b1198: ldp x24, x23, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* b119c: b #0xb1290 */
  goto L_b1290;
L_b11a0:;
  /* b11a0: add x10, x9, #2 */
  ARC_X_W(c, 10, (ARC_X_R(c, 9) + UINT64_C(2)));
  /* b11a4: mov x9, x8 */
  ARC_X_W(c, 9, ARC_X_R(c, 8));
L_b11a8:;
  /* b11a8: ldrb w11, [x9] */
  ARC_W_W(c, 11, arc_ld8(ARC_X_R(c, 9)));
  /* b11ac: sub w11, w11, #0x3a */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) - UINT64_C(58)));
  /* b11b0: cmn w11, #0xa */
  (void)arc_add32(c, ARC_W_R(c, 11), UINT64_C(10), 0);
  /* b11b4: b.lo #0xb11d0 */
  if (ARC_COND(c, 3)) goto L_b11d0;
  /* b11b8: add x9, x9, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(1)));
  /* b11bc: add x10, x10, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(1)));
  /* b11c0: cmp x9, x23 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 23));
  /* b11c4: str x9, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 9));
  /* b11c8: b.ne #0xb11a8 */
  if (ARC_COND(c, 1)) goto L_b11a8;
  /* b11cc: mov x10, x23 */
  ARC_X_W(c, 10, ARC_X_R(c, 23));
L_b11d0:;
  /* b11d0: mov x20, x8 */
  ARC_X_W(c, 20, ARC_X_R(c, 8));
  /* b11d4: sub x21, x10, x8 */
  ARC_X_W(c, 21, (ARC_X_R(c, 10) - ARC_X_R(c, 8)));
  /* b11d8: mov x8, x9 */
  ARC_X_W(c, 8, ARC_X_R(c, 9));
  /* b11dc: cmp x8, x23 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 23));
  /* b11e0: b.eq #0xb0fb4 */
  if (ARC_COND(c, 0)) goto L_b0fb4;
L_b11e4:;
  /* b11e4: ldrb w9, [x8] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 8)));
  /* b11e8: cmp w9, #0x5f */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(95));
  /* b11ec: b.ne #0xb0fb4 */
  if (ARC_COND(c, 1)) goto L_b0fb4;
  /* b11f0: ldr x22, [x19, #0x1330] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 19) + INT64_C(4912))));
  /* b11f4: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* b11f8: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* b11fc: ldr x9, [x22, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 22) + INT64_C(8))));
  /* b1200: sub x10, x9, #0xfd0 */
  ARC_X_W(c, 10, (ARC_X_R(c, 9) - UINT64_C(4048)));
  /* b1204: cmn x10, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 10), UINT64_C(4081), 0);
  /* b1208: b.hi #0xb1228 */
  if (ARC_COND(c, 8)) goto L_b1228;
  /* b120c: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* b1210: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(725524));
  fn1_1428a8(c);
  /* b1214: cbz x0, #0xb1688 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b1688;
  /* b1218: mov x9, xzr */
  ARC_X_W(c, 9, ARC_X_R(c, 31));
  /* b121c: stp x22, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* b1220: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* b1224: str x0, [x19, #0x1330] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(4912)), ARC_X_R(c, 0));
L_b1228:;
  /* b1228: add x8, x9, #0x20 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) + UINT64_C(32)));
  /* b122c: add x0, x22, x9 */
  ARC_X_W(c, 0, (ARC_X_R(c, 22) + ARC_X_R(c, 9)));
  /* b1230: adrp x9, #0x14a000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1351680)));
  /* b1234: add x9, x9, #0x9d8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(2520)));
  /* b1238: str x8, [x22, #8] */
  arc_st64((ARC_X_R(c, 22) + INT64_C(8)), ARC_X_R(c, 8));
  /* b123c: mov w10, #0x540 */
  ARC_W_W(c, 10, UINT64_C(1344));
  /* b1240: str x9, [x0, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 9));
  }
  /* b1244: ldurh w8, [x0, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 0) + INT64_C(9))));
  /* b1248: mov w9, #0x33 */
  ARC_W_W(c, 9, UINT64_C(51));
  /* b124c: stp x20, x21, [x0, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* b1250: and w8, w8, #0xf000 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(61440)));
  /* b1254: strb w9, [x0, #8] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 9));
  /* b1258: orr w8, w8, w10 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | ARC_W_R(c, 10)));
  /* b125c: sturh w8, [x0, #9] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(9)), ARC_W_R(c, 8));
  /* b1260: b #0xb0fb8 */
  goto L_b0fb8;
L_b1264:;
  /* b1264: mov x0, x1 */
  ARC_X_W(c, 0, ARC_X_R(c, 1));
  /* b1268: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(725612));
  fn1_1428a8(c);
  /* b126c: cbz x0, #0xb16b0 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b16b0;
  /* b1270: cmp x22, x21 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 21));
  /* b1274: b.eq #0xb128c */
  if (ARC_COND(c, 0)) goto L_b128c;
  /* b1278: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* b127c: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* b1280: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* b1284: bl #0x1449f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(725640));
  fn1_1449f0(c);
  /* b1288: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
L_b128c:;
  /* b128c: str x0, [x19, #0x298] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(664)), ARC_X_R(c, 0));
L_b1290:;
  /* b1290: asr x8, x20, #2 */
  ARC_X_W(c, 8, ((uint64_t)((int64_t)(ARC_X_R(c, 20)) >> ((UINT64_C(2)) & 63))));
  /* b1294: add x22, x0, x20 */
  ARC_X_W(c, 22, (ARC_X_R(c, 0) + ARC_X_R(c, 20)));
  /* b1298: add x8, x0, x8, lsl #3 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + ((uint64_t)(ARC_X_R(c, 8)) << 3)));
  /* b129c: str x8, [x19, #0x2a8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(680)), ARC_X_R(c, 8));
L_b12a0:;
  /* b12a0: ldp x28, x8, [x19, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(16));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* b12a4: add x20, x25, #0x10 */
  ARC_X_W(c, 20, (ARC_X_R(c, 25) + UINT64_C(16)));
  /* b12a8: str x20, [x22], #8 */
  { const uint64_t _a = ARC_X_R(c, 22);
    ARC_X_W(c, 22, ARC_X_R(c, 22) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 20));
  }
  /* b12ac: str x22, [x19, #0x2a0] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(672)), ARC_X_R(c, 22));
  /* b12b0: str x8, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 8));
  /* b12b4: subs x8, x23, x24 */
  ARC_X_W(c, 8, arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 24)));
  /* b12b8: b.eq #0xb13a4 */
  if (ARC_COND(c, 0)) goto L_b13a4;
  /* b12bc: add x25, x19, #0x28 */
  ARC_X_W(c, 25, (ARC_X_R(c, 19) + UINT64_C(40)));
  /* b12c0: adrp x21, #0x4f000 */
  ARC_X_W(c, 21, (arc_image_bases[1] + UINT64_C(323584)));
  /* b12c4: add x21, x21, #0xe95 */
  ARC_X_W(c, 21, (ARC_X_R(c, 21) + UINT64_C(3733)));
  /* b12c8: b #0xb1304 */
  goto L_b1304;
L_b12cc:;
  /* b12cc: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* b12d0: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(725716));
  fn1_142878(c);
  /* b12d4: str x0, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 0));
  /* b12d8: cbz x0, #0xb1660 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b1660;
L_b12dc:;
  /* b12dc: asr x8, x22, #2 */
  ARC_X_W(c, 8, ((uint64_t)((int64_t)(ARC_X_R(c, 22)) >> ((UINT64_C(2)) & 63))));
  /* b12e0: add x27, x0, x22 */
  ARC_X_W(c, 27, (ARC_X_R(c, 0) + ARC_X_R(c, 22)));
  /* b12e4: add x8, x0, x8, lsl #3 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + ((uint64_t)(ARC_X_R(c, 8)) << 3)));
  /* b12e8: mov x0, x26 */
  ARC_X_W(c, 0, ARC_X_R(c, 26));
  /* b12ec: str x8, [x19, #0x20] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(32)), ARC_X_R(c, 8));
L_b12f0:;
  /* b12f0: ldp x24, x8, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* b12f4: str x0, [x27], #8 */
  { const uint64_t _a = ARC_X_R(c, 27);
    ARC_X_W(c, 27, ARC_X_R(c, 27) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 0));
  }
  /* b12f8: str x27, [x19, #0x18] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(24)), ARC_X_R(c, 27));
  /* b12fc: subs x8, x8, x24 */
  ARC_X_W(c, 8, arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 24)));
  /* b1300: b.eq #0xb13a4 */
  if (ARC_COND(c, 0)) goto L_b13a4;
L_b1304:;
  /* b1304: ldrb w9, [x24] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 24)));
  /* b1308: cmp w9, #0x54 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(84));
  /* b130c: b.ne #0xb13a4 */
  if (ARC_COND(c, 1)) goto L_b13a4;
  /* b1310: cmp x8, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(2));
  /* b1314: b.lo #0xb1320 */
  if (ARC_COND(c, 3)) goto L_b1320;
  /* b1318: ldrb w1, [x24, #1] */
  ARC_W_W(c, 1, arc_ld8((ARC_X_R(c, 24) + INT64_C(1))));
  /* b131c: b #0xb1324 */
  goto L_b1324;
L_b1320:;
  /* b1320: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
L_b1324:;
  /* b1324: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* b1328: mov w2, #5 */
  ARC_W_W(c, 2, UINT64_C(5));
  /* b132c: bl #0x1428d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(725808));
  fn1_1428d8(c);
  /* b1330: cbz x0, #0xb13a4 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b13a4;
  /* b1334: sub x8, x0, x21 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) - ARC_X_R(c, 21)));
  /* b1338: cmn x8, #1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0);
  /* b133c: b.eq #0xb13a4 */
  if (ARC_COND(c, 0)) goto L_b13a4;
  /* b1340: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* b1344: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* b1348: bl #0xb2404 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(725836));
  fn1_b2404(c);
  /* b134c: cbz x0, #0xb160c */
  if ((ARC_X_R(c, 0)) == 0) goto L_b160c;
  /* b1350: ldp x27, x8, [x19, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(24));
    ARC_X_W(c, 27, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* b1354: cmp x27, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 27), ARC_X_R(c, 8));
  /* b1358: b.ne #0xb12f0 */
  if (ARC_COND(c, 1)) goto L_b12f0;
  /* b135c: ldr x23, [x19, #0x10] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* b1360: mov x26, x0 */
  ARC_X_W(c, 26, ARC_X_R(c, 0));
  /* b1364: sub x22, x27, x23 */
  ARC_X_W(c, 22, (ARC_X_R(c, 27) - ARC_X_R(c, 23)));
  /* b1368: cmp x23, x25 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 25));
  /* b136c: lsl x1, x22, #1 */
  ARC_X_W(c, 1, ((uint64_t)(ARC_X_R(c, 22)) << ((UINT64_C(1)) & 63)));
  /* b1370: b.ne #0xb12cc */
  if (ARC_COND(c, 1)) goto L_b12cc;
  /* b1374: mov x0, x1 */
  ARC_X_W(c, 0, ARC_X_R(c, 1));
  /* b1378: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(725884));
  fn1_1428a8(c);
  /* b137c: cbz x0, #0xb1684 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b1684;
  /* b1380: cmp x27, x25 */
  (void)arc_sub64(c, ARC_X_R(c, 27), ARC_X_R(c, 25));
  /* b1384: b.eq #0xb139c */
  if (ARC_COND(c, 0)) goto L_b139c;
  /* b1388: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* b138c: mov x2, x22 */
  ARC_X_W(c, 2, ARC_X_R(c, 22));
  /* b1390: mov x24, x0 */
  ARC_X_W(c, 24, ARC_X_R(c, 0));
  /* b1394: bl #0x1449f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(725912));
  fn1_1449f0(c);
  /* b1398: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
L_b139c:;
  /* b139c: str x0, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 0));
  /* b13a0: b #0xb12dc */
  goto L_b12dc;
L_b13a4:;
  /* b13a4: ldr x8, [sp, #8] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(8))));
  /* b13a8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* b13ac: sub x8, x8, x28 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) - ARC_X_R(c, 28)));
  /* b13b0: asr x20, x8, #3 */
  ARC_X_W(c, 20, ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(3)) & 63))));
  /* b13b4: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* b13b8: bl #0xa77e4 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(725948));
  fn1_a77e4(c);
  /* b13bc: stp x0, x1, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 0));
    arc_st64(_pa + 8, ARC_X_R(c, 1));
  }
  /* b13c0: cbnz x1, #0xb13dc */
  if ((ARC_X_R(c, 1)) != 0) goto L_b13dc;
  /* b13c4: ldr x8, [x19, #0x2a0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(672))));
  /* b13c8: ldr x9, [x19, #0x298] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(664))));
  /* b13cc: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* b13d0: b.eq #0xb168c */
  if (ARC_COND(c, 0)) goto L_b168c;
  /* b13d4: sub x8, x8, #8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) - UINT64_C(8)));
  /* b13d8: str x8, [x19, #0x2a0] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(672)), ARC_X_R(c, 8));
L_b13dc:;
  /* b13dc: ldp x8, x9, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* b13e0: str xzr, [sp, #0x48] */
  arc_st64(((c)->sp + INT64_C(72)), ARC_X_R(c, 31));
  /* b13e4: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* b13e8: b.eq #0xb1444 */
  if (ARC_COND(c, 0)) goto L_b1444;
  /* b13ec: ldrb w10, [x8] */
  ARC_W_W(c, 10, arc_ld8(ARC_X_R(c, 8)));
  /* b13f0: cmp w10, #0x51 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(81));
  /* b13f4: b.ne #0xb1424 */
  if (ARC_COND(c, 1)) goto L_b1424;
  /* b13f8: ldrb w21, [x19, #0x30a] */
  ARC_W_W(c, 21, arc_ld8((ARC_X_R(c, 19) + INT64_C(778))));
  /* b13fc: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* b1400: mov w9, #1 */
  ARC_W_W(c, 9, UINT64_C(1));
  /* b1404: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* b1408: strb w9, [x19, #0x30a] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(778)), ARC_W_R(c, 9));
  /* b140c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* b1410: bl #0xaa69c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(726036));
  fn1_aa69c(c);
  /* b1414: strb w21, [x19, #0x30a] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(778)), ARC_W_R(c, 21));
  /* b1418: str x0, [sp, #0x48] */
  arc_st64(((c)->sp + INT64_C(72)), ARC_X_R(c, 0));
  /* b141c: cbz x0, #0xb160c */
  if ((ARC_X_R(c, 0)) == 0) goto L_b160c;
  /* b1420: ldp x8, x9, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
L_b1424:;
  /* b1424: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* b1428: b.eq #0xb1444 */
  if (ARC_COND(c, 0)) goto L_b1444;
  /* b142c: ldrb w9, [x8] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 8)));
  /* b1430: cmp w9, #0x76 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(118));
  /* b1434: b.ne #0xb1444 */
  if (ARC_COND(c, 1)) goto L_b1444;
  /* b1438: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* b143c: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* b1440: b #0xb14f4 */
  goto L_b14f4;
L_b1444:;
  /* b1444: add x24, x19, #0x28 */
  ARC_X_W(c, 24, (ARC_X_R(c, 19) + UINT64_C(40)));
L_b1448:;
  /* b1448: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* b144c: bl #0xa52b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(726096));
  fn1_a52b0(c);
  /* b1450: cbz x0, #0xb160c */
  if ((ARC_X_R(c, 0)) == 0) goto L_b160c;
  /* b1454: ldp x23, x8, [x19, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(24));
    ARC_X_W(c, 23, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* b1458: cmp x23, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 8));
  /* b145c: b.ne #0xb14cc */
  if (ARC_COND(c, 1)) goto L_b14cc;
  /* b1460: ldr x22, [x19, #0x10] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* b1464: mov x25, x0 */
  ARC_X_W(c, 25, ARC_X_R(c, 0));
  /* b1468: sub x21, x23, x22 */
  ARC_X_W(c, 21, (ARC_X_R(c, 23) - ARC_X_R(c, 22)));
  /* b146c: cmp x22, x24 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 24));
  /* b1470: lsl x1, x21, #1 */
  ARC_X_W(c, 1, ((uint64_t)(ARC_X_R(c, 21)) << ((UINT64_C(1)) & 63)));
  /* b1474: b.eq #0xb148c */
  if (ARC_COND(c, 0)) goto L_b148c;
  /* b1478: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* b147c: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(726144));
  fn1_142878(c);
  /* b1480: str x0, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 0));
  /* b1484: cbnz x0, #0xb14b8 */
  if ((ARC_X_R(c, 0)) != 0) goto L_b14b8;
  /* b1488: b #0xb1658 */
  goto L_b1658;
L_b148c:;
  /* b148c: mov x0, x1 */
  ARC_X_W(c, 0, ARC_X_R(c, 1));
  /* b1490: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(726164));
  fn1_1428a8(c);
  /* b1494: cbz x0, #0xb165c */
  if ((ARC_X_R(c, 0)) == 0) goto L_b165c;
  /* b1498: cmp x23, x24 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 24));
  /* b149c: b.eq #0xb14b4 */
  if (ARC_COND(c, 0)) goto L_b14b4;
  /* b14a0: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* b14a4: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* b14a8: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* b14ac: bl #0x1449f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(726192));
  fn1_1449f0(c);
  /* b14b0: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
L_b14b4:;
  /* b14b4: str x0, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 0));
L_b14b8:;
  /* b14b8: asr x8, x21, #2 */
  ARC_X_W(c, 8, ((uint64_t)((int64_t)(ARC_X_R(c, 21)) >> ((UINT64_C(2)) & 63))));
  /* b14bc: add x23, x0, x21 */
  ARC_X_W(c, 23, (ARC_X_R(c, 0) + ARC_X_R(c, 21)));
  /* b14c0: add x8, x0, x8, lsl #3 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + ((uint64_t)(ARC_X_R(c, 8)) << 3)));
  /* b14c4: mov x0, x25 */
  ARC_X_W(c, 0, ARC_X_R(c, 25));
  /* b14c8: str x8, [x19, #0x20] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(32)), ARC_X_R(c, 8));
L_b14cc:;
  /* b14cc: ldp x8, x9, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* b14d0: str x0, [x23], #8 */
  { const uint64_t _a = ARC_X_R(c, 23);
    ARC_X_W(c, 23, ARC_X_R(c, 23) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 0));
  }
  /* b14d4: str x23, [x19, #0x18] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(24)), ARC_X_R(c, 23));
  /* b14d8: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* b14dc: b.eq #0xb1448 */
  if (ARC_COND(c, 0)) goto L_b1448;
  /* b14e0: ldrb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* b14e4: cmp w8, #0x51 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(81));
  /* b14e8: b.eq #0xb14f4 */
  if (ARC_COND(c, 0)) goto L_b14f4;
  /* b14ec: cmp w8, #0x45 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(69));
  /* b14f0: b.ne #0xb1448 */
  if (ARC_COND(c, 1)) goto L_b1448;
L_b14f4:;
  /* b14f4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* b14f8: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* b14fc: bl #0xa77e4 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(726272));
  fn1_a77e4(c);
  /* b1500: ldp x9, x8, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* b1504: stp x0, x1, [sp, #0x38] */
  { const uint64_t _pa = ((c)->sp + INT64_C(56));
    arc_st64(_pa, ARC_X_R(c, 0));
    arc_st64(_pa + 8, ARC_X_R(c, 1));
  }
  /* b1508: str xzr, [sp, #0x30] */
  arc_st64(((c)->sp + INT64_C(48)), ARC_X_R(c, 31));
  /* b150c: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* b1510: b.eq #0xb1608 */
  if (ARC_COND(c, 0)) goto L_b1608;
  /* b1514: ldrb w10, [x9] */
  ARC_W_W(c, 10, arc_ld8(ARC_X_R(c, 9)));
  /* b1518: cmp w10, #0x51 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(81));
  /* b151c: b.ne #0xb154c */
  if (ARC_COND(c, 1)) goto L_b154c;
  /* b1520: ldrb w21, [x19, #0x30a] */
  ARC_W_W(c, 21, arc_ld8((ARC_X_R(c, 19) + INT64_C(778))));
  /* b1524: add x8, x9, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) + UINT64_C(1)));
  /* b1528: mov w9, #1 */
  ARC_W_W(c, 9, UINT64_C(1));
  /* b152c: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* b1530: strb w9, [x19, #0x30a] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(778)), ARC_W_R(c, 9));
  /* b1534: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* b1538: bl #0xaa69c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(726332));
  fn1_aa69c(c);
  /* b153c: strb w21, [x19, #0x30a] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(778)), ARC_W_R(c, 21));
  /* b1540: str x0, [sp, #0x30] */
  arc_st64(((c)->sp + INT64_C(48)), ARC_X_R(c, 0));
  /* b1544: cbz x0, #0xb160c */
  if ((ARC_X_R(c, 0)) == 0) goto L_b160c;
  /* b1548: ldp x9, x8, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
L_b154c:;
  /* b154c: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* b1550: b.eq #0xb1608 */
  if (ARC_COND(c, 0)) goto L_b1608;
  /* b1554: ldrb w10, [x9] */
  ARC_W_W(c, 10, arc_ld8(ARC_X_R(c, 9)));
  /* b1558: cmp w10, #0x45 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(69));
  /* b155c: b.ne #0xb1608 */
  if (ARC_COND(c, 1)) goto L_b1608;
  /* b1560: add x9, x9, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(1)));
  /* b1564: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* b1568: str x9, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 9));
  /* b156c: b.eq #0xb1580 */
  if (ARC_COND(c, 0)) goto L_b1580;
  /* b1570: ldrb w10, [x9] */
  ARC_W_W(c, 10, arc_ld8(ARC_X_R(c, 9)));
  /* b1574: sub w10, w10, #0x3a */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) - UINT64_C(58)));
  /* b1578: cmn w10, #0xa */
  (void)arc_add32(c, ARC_W_R(c, 10), UINT64_C(10), 0);
  /* b157c: b.hs #0xb158c */
  if (ARC_COND(c, 2)) goto L_b158c;
L_b1580:;
  /* b1580: mov x11, xzr */
  ARC_X_W(c, 11, ARC_X_R(c, 31));
  /* b1584: mov x12, xzr */
  ARC_X_W(c, 12, ARC_X_R(c, 31));
  /* b1588: b #0xb15c8 */
  goto L_b15c8;
L_b158c:;
  /* b158c: mov x10, x9 */
  ARC_X_W(c, 10, ARC_X_R(c, 9));
L_b1590:;
  /* b1590: ldrb w11, [x10] */
  ARC_W_W(c, 11, arc_ld8(ARC_X_R(c, 10)));
  /* b1594: sub w11, w11, #0x3a */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) - UINT64_C(58)));
  /* b1598: cmn w11, #0xa */
  (void)arc_add32(c, ARC_W_R(c, 11), UINT64_C(10), 0);
  /* b159c: b.lo #0xb15b8 */
  if (ARC_COND(c, 3)) goto L_b15b8;
  /* b15a0: add x10, x10, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(1)));
  /* b15a4: cmp x10, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 8));
  /* b15a8: str x10, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 10));
  /* b15ac: b.ne #0xb1590 */
  if (ARC_COND(c, 1)) goto L_b1590;
  /* b15b0: mov x12, x8 */
  ARC_X_W(c, 12, ARC_X_R(c, 8));
  /* b15b4: b #0xb15bc */
  goto L_b15bc;
L_b15b8:;
  /* b15b8: mov x12, x10 */
  ARC_X_W(c, 12, ARC_X_R(c, 10));
L_b15bc:;
  /* b15bc: mov x11, x9 */
  ARC_X_W(c, 11, ARC_X_R(c, 9));
  /* b15c0: sub x12, x12, x9 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) - ARC_X_R(c, 9)));
  /* b15c4: mov x9, x10 */
  ARC_X_W(c, 9, ARC_X_R(c, 10));
L_b15c8:;
  /* b15c8: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* b15cc: stp x11, x12, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 11));
    arc_st64(_pa + 8, ARC_X_R(c, 12));
  }
  /* b15d0: b.eq #0xb1608 */
  if (ARC_COND(c, 0)) goto L_b1608;
  /* b15d4: ldrb w8, [x9] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 9)));
  /* b15d8: cmp w8, #0x5f */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(95));
  /* b15dc: b.ne #0xb1608 */
  if (ARC_COND(c, 1)) goto L_b1608;
  /* b15e0: add x8, x9, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) + UINT64_C(1)));
  /* b15e4: add x1, sp, #0x50 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(80)));
  /* b15e8: add x2, sp, #0x48 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(72)));
  /* b15ec: add x3, sp, #0x38 */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(56)));
  /* b15f0: add x4, sp, #0x30 */
  ARC_X_W(c, 4, ((c)->sp + UINT64_C(48)));
  /* b15f4: add x5, sp, #0x20 */
  ARC_X_W(c, 5, ((c)->sp + UINT64_C(32)));
  /* b15f8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* b15fc: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* b1600: bl #0xb2d50 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(726532));
  fn1_b2d50(c);
  /* b1604: b #0xb160c */
  goto L_b160c;
L_b1608:;
  /* b1608: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
L_b160c:;
  /* b160c: ldp x9, x10, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* b1610: ldr x8, [x9, #0x2a0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(672))));
  /* b1614: ldr x11, [x9, #0x298] */
  ARC_X_W(c, 11, arc_ld64((ARC_X_R(c, 9) + INT64_C(664))));
  /* b1618: sub x8, x8, x11 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) - ARC_X_R(c, 11)));
  /* b161c: cmp x10, x8, asr #3 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> 3)));
  /* b1620: b.hi #0xb1664 */
  if (ARC_COND(c, 8)) goto L_b1664;
  /* b1624: ldr x8, [sp, #0x70] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(112))));
  /* b1628: add x10, x11, x10, lsl #3 */
  ARC_X_W(c, 10, (ARC_X_R(c, 11) + ((uint64_t)(ARC_X_R(c, 10)) << 3)));
  /* b162c: ldr x11, [sp, #0x10] */
  ARC_X_W(c, 11, arc_ld64(((c)->sp + INT64_C(16))));
  /* b1630: cmp x8, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 11));
  /* b1634: str x10, [x9, #0x2a0] */
  arc_st64((ARC_X_R(c, 9) + INT64_C(672)), ARC_X_R(c, 10));
  /* b1638: b.eq #0xb164c */
  if (ARC_COND(c, 0)) goto L_b164c;
  /* b163c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* b1640: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* b1644: bl #0x142800 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(726600));
  fn1_142800(c);
  /* b1648: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
L_b164c:;
  /* b164c: ldr x8, [sp, #0x18] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(24))));
  /* b1650: str x8, [x19, #0x310] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(784)), ARC_X_R(c, 8));
  /* b1654: b #0xb0fb8 */
  goto L_b0fb8;
L_b1658:;
  /* b1658: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(726620));
  fn1_1427b8(c);
L_b165c:;
  /* b165c: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(726624));
  fn1_1427b8(c);
L_b1660:;
  /* b1660: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(726628));
  fn1_1427b8(c);
L_b1664:;
  /* b1664: adrp x0, #0x4f000 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(323584)));
  /* b1668: add x0, x0, #0x8a6 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2214)));
  /* b166c: adrp x1, #0x51000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(331776)));
  /* b1670: add x1, x1, #0x10b */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(267)));
  /* b1674: nop  */
  /* nop: no architectural effect here */
  /* b1678: adr x3, #0x5018e */
  ARC_X_W(c, 3, (arc_image_bases[1] + UINT64_C(328078)));
  /* b167c: mov w2, #0xac7 */
  ARC_W_W(c, 2, UINT64_C(2759));
  /* b1680: bl #0xa23d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(726660));
  fn1_a23d8(c);
L_b1684:;
  /* b1684: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(726664));
  fn1_1427b8(c);
L_b1688:;
  /* b1688: bl #0x142488 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(726668));
  fn1_142488(c);
L_b168c:;
  /* b168c: adrp x0, #0x4f000 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(323584)));
  /* b1690: add x0, x0, #0x8a6 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2214)));
  /* b1694: adrp x1, #0x51000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(331776)));
  /* b1698: add x1, x1, #0x10b */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(267)));
  /* b169c: adrp x3, #0x50000 */
  ARC_X_W(c, 3, (arc_image_bases[1] + UINT64_C(327680)));
  /* b16a0: add x3, x3, #0x353 */
  ARC_X_W(c, 3, (ARC_X_R(c, 3) + UINT64_C(851)));
  /* b16a4: mov w2, #0x81 */
  ARC_W_W(c, 2, UINT64_C(129));
  /* b16a8: bl #0xa23d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(726700));
  fn1_a23d8(c);
L_b16ac:;
  /* b16ac: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(726704));
  fn1_1427b8(c);
L_b16b0:;
  /* b16b0: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(726708));
  fn1_1427b8(c);
  /* b16b4: b #0xb16b8 */
  goto L_b16b8;
L_b16b8:;
  /* b16b8: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* b16bc: strb w21, [x19, #0x30a] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(778)), ARC_W_R(c, 21));
  /* b16c0: b #0xb16d8 */
  goto L_b16d8;
  /* b16c4: b #0xb16d4 */
  goto L_b16d4;
  /* b16c8: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(726732));
  fn1_a1454(c);
  /* b16cc: b #0xb16d4 */
  goto L_b16d4;
  /* b16d0: b #0xb16d4 */
  goto L_b16d4;
L_b16d4:;
  /* b16d4: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
L_b16d8:;
  /* b16d8: add x0, sp, #0x60 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(96)));
  /* b16dc: bl #0xb2e30 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(726752));
  fn1_b2e30(c);
  /* b16e0: ldr x8, [sp, #0x18] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(24))));
  /* b16e4: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* b16e8: str x8, [x19, #0x310] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(784)), ARC_X_R(c, 8));
  /* b16ec: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(726768));
  fn1_9cc20(c);
}

void fn1_b58d8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038671576));
  /* b58d8: bti c */
  /* bti: no architectural effect here */
  /* b58dc: mov w1, #0x18 */
  ARC_W_W(c, 1, UINT64_C(24));
  /* b58e0: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_b8314(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038682388));
  /* b8314: bti c */
  /* bti: no architectural effect here */
  /* b8318: mov w1, #0x20 */
  ARC_W_W(c, 1, UINT64_C(32));
  /* b831c: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_bb6e4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038695652));
  /* bb6e4: bti c */
  /* bti: no architectural effect here */
  /* bb6e8: mov w1, #0x28 */
  ARC_W_W(c, 1, UINT64_C(40));
  /* bb6ec: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_bde3c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038705724));
  /* bde3c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* bde40: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* bde44: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* bde48: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* bde4c: cbz x0, #0xbdea0 */
  if ((ARC_X_R(c, 0)) == 0) goto L_bdea0;
  /* bde50: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* bde54: sub x1, x0, #0x78 */
  ARC_X_W(c, 1, (ARC_X_R(c, 0) - UINT64_C(120)));
  /* bde58: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* bde5c: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(777824));
  fn1_bd950(c);
  /* bde60: cmp x0, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 0), UINT64_C(1));
  /* bde64: b.ne #0xbdea0 */
  if (ARC_COND(c, 1)) goto L_bdea0;
  /* bde68: ldur x8, [x19, #-0x68] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(-104))));
  /* bde6c: cbz x8, #0xbde78 */
  if ((ARC_X_R(c, 8)) == 0) goto L_bde78;
  /* bde70: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* bde74: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(777848));
  arc_dispatch(c, ARC_X_R(c, 8));
L_bde78:;
  /* bde78: sub x0, x19, #0x80 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) - UINT64_C(128)));
  /* bde7c: nop  */
  /* nop: no architectural effect here */
  /* bde80: adr x8, #0x1576e0 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1406688)));
  /* bde84: cmp x0, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* bde88: b.lo #0xbdeb0 */
  if (ARC_COND(c, 3)) goto L_bdeb0;
  /* bde8c: adrp x8, #0x157000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1404928)));
  /* bde90: add x8, x8, #0x8e0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2272)));
  /* bde94: cmp x0, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* bde98: b.hs #0xbdeb0 */
  if (ARC_COND(c, 2)) goto L_bdeb0;
  /* bde9c: bl #0xa2664 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(777888));
  fn1_a2664(c);
L_bdea0:;
  /* bdea0: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* bdea4: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* bdea8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* bdeac: ret  */
  return;
L_bdeb0:;
  /* bdeb0: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* bdeb4: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* bdeb8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* bdebc: b #0x142800 */
  fn1_142800(c); return;
  /* bdec0: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(777924));
  fn1_a1454(c);
  /* bdec4: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(777928));
  fn1_a1454(c);
}

void fn1_d23d4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038789076));
  /* d23d4: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* d23d8: sub sp, sp, #0x90 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(144)));
  /* d23dc: stp x29, x30, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* d23e0: stp x24, x23, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* d23e4: stp x22, x21, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* d23e8: stp x20, x19, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* d23ec: add x29, sp, #0x50 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(80)));
  /* d23f0: sub x8, x1, x0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 1) - ARC_X_R(c, 0)));
  /* d23f4: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* d23f8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* d23fc: asr x8, x8, #4 */
  ARC_X_W(c, 8, ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(4)) & 63))));
  /* d2400: cmp x8, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(2));
  /* d2404: b.gt #0xd242c */
  if (ARC_COND(c, 12)) goto L_d242c;
  /* d2408: b.hs #0xd2484 */
  if (ARC_COND(c, 2)) goto L_d2484;
L_d240c:;
  /* d240c: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
L_d2410:;
  /* d2410: ldp x20, x19, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* d2414: ldp x22, x21, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* d2418: ldp x24, x23, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* d241c: ldp x29, x30, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* d2420: add sp, sp, #0x90 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(144)));
  /* d2424: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* d2428: ret  */
  return;
L_d242c:;
  /* d242c: cmp x8, #3 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(3));
  /* d2430: b.eq #0xd24b8 */
  if (ARC_COND(c, 0)) goto L_d24b8;
  /* d2434: cmp x8, #4 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(4));
  /* d2438: b.eq #0xd2524 */
  if (ARC_COND(c, 0)) goto L_d2524;
  /* d243c: cmp x8, #5 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(5));
  /* d2440: b.ne #0xd24ec */
  if (ARC_COND(c, 1)) goto L_d24ec;
  /* d2444: ldp q1, q2, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    arc_q_w(c, 1, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 2, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* d2448: ldr q0, [x19, #0x20] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(32))), arc_ld64((ARC_X_R(c, 19) + INT64_C(32)) + 8));
  /* d244c: stp q0, q2, [x29, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-32));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[2].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[2].u64[1]);
  }
  /* d2450: mov v0.16b, v2.16b */
  (c)->q[0] = (c)->q[2];
  /* d2454: str q1, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), (c)->q[1].u64[0]);
  arc_st64(((c)->sp + INT64_C(32)) + 8, (c)->q[1].u64[1]);
  /* d2458: bl #0xbf250 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(861276));
  fn1_bf250(c);
  /* d245c: tbz w0, #0x1f, #0xd25cc */
  if (((ARC_W_R(c, 0)) >> 31 & 1) == 0) goto L_d25cc;
  /* d2460: ldp q0, q1, [x29, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-32));
    arc_q_w(c, 0, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 1, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* d2464: bl #0xbf250 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(861288));
  fn1_bf250(c);
  /* d2468: cmp w0, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(0));
  /* d246c: b.ge #0xd2748 */
  if (ARC_COND(c, 10)) goto L_d2748;
  /* d2470: ldur q0, [x29, #-0x20] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-32))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-32)) + 8));
  /* d2474: str q0, [x19] */
  arc_st64(ARC_X_R(c, 19), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 19) + 8, (c)->q[0].u64[1]);
  /* d2478: str q0, [sp] */
  arc_st64((c)->sp, (c)->q[0].u64[0]);
  arc_st64((c)->sp + 8, (c)->q[0].u64[1]);
  /* d247c: ldur q0, [x29, #-0x10] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-16))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-16)) + 8));
  /* d2480: b #0xd2770 */
  goto L_d2770;
L_d2484:;
  /* d2484: cmp x8, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(2));
  /* d2488: b.ne #0xd24ec */
  if (ARC_COND(c, 1)) goto L_d24ec;
  /* d248c: ldur q0, [x20, #-0x10] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 20) + INT64_C(-16))), arc_ld64((ARC_X_R(c, 20) + INT64_C(-16)) + 8));
  /* d2490: ldr q1, [x19] */
  arc_q_w(c, 1, arc_ld64(ARC_X_R(c, 19)), arc_ld64(ARC_X_R(c, 19) + 8));
  /* d2494: stp q0, q1, [x29, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-32));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[1].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[1].u64[1]);
  }
  /* d2498: bl #0xbf250 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(861340));
  fn1_bf250(c);
  /* d249c: cmp w0, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(0));
  /* d24a0: b.ge #0xd240c */
  if (ARC_COND(c, 10)) goto L_d240c;
  /* d24a4: ldp q1, q0, [x29, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-32));
    arc_q_w(c, 1, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 0, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* d24a8: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* d24ac: str q1, [x19] */
  arc_st64(ARC_X_R(c, 19), (c)->q[1].u64[0]);
  arc_st64(ARC_X_R(c, 19) + 8, (c)->q[1].u64[1]);
  /* d24b0: stur q0, [x20, #-0x10] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(-16)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 20) + INT64_C(-16)) + 8, (c)->q[0].u64[1]);
  /* d24b4: b #0xd2410 */
  goto L_d2410;
L_d24b8:;
  /* d24b8: ldp q1, q0, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    arc_q_w(c, 1, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 0, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* d24bc: ldur q2, [x20, #-0x10] */
  arc_q_w(c, 2, arc_ld64((ARC_X_R(c, 20) + INT64_C(-16))), arc_ld64((ARC_X_R(c, 20) + INT64_C(-16)) + 8));
  /* d24c0: stp q2, q0, [x29, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-32));
    arc_st64(_pa, (c)->q[2].u64[0]);
    arc_st64(_pa + 8, (c)->q[2].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* d24c4: str q1, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), (c)->q[1].u64[0]);
  arc_st64(((c)->sp + INT64_C(32)) + 8, (c)->q[1].u64[1]);
  /* d24c8: bl #0xbf250 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(861388));
  fn1_bf250(c);
  /* d24cc: tbz w0, #0x1f, #0xd255c */
  if (((ARC_W_R(c, 0)) >> 31 & 1) == 0) goto L_d255c;
  /* d24d0: ldp q0, q1, [x29, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-32));
    arc_q_w(c, 0, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 1, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* d24d4: bl #0xbf250 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(861400));
  fn1_bf250(c);
  /* d24d8: cmp w0, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(0));
  /* d24dc: b.ge #0xd2648 */
  if (ARC_COND(c, 10)) goto L_d2648;
  /* d24e0: ldur q0, [x29, #-0x20] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-32))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-32)) + 8));
  /* d24e4: str q0, [x19] */
  arc_st64(ARC_X_R(c, 19), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 19) + 8, (c)->q[0].u64[1]);
  /* d24e8: b #0xd2670 */
  goto L_d2670;
L_d24ec:;
  /* d24ec: ldp q1, q2, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    arc_q_w(c, 1, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 2, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* d24f0: ldr q0, [x19, #0x20] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(32))), arc_ld64((ARC_X_R(c, 19) + INT64_C(32)) + 8));
  /* d24f4: stp q2, q0, [x29, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-32));
    arc_st64(_pa, (c)->q[2].u64[0]);
    arc_st64(_pa + 8, (c)->q[2].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* d24f8: mov v0.16b, v2.16b */
  (c)->q[0] = (c)->q[2];
  /* d24fc: str q1, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), (c)->q[1].u64[0]);
  arc_st64(((c)->sp + INT64_C(32)) + 8, (c)->q[1].u64[1]);
  /* d2500: bl #0xbf250 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(861444));
  fn1_bf250(c);
  /* d2504: tbz w0, #0x1f, #0xd2594 */
  if (((ARC_W_R(c, 0)) >> 31 & 1) == 0) goto L_d2594;
  /* d2508: ldp q1, q0, [x29, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-32));
    arc_q_w(c, 1, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 0, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* d250c: bl #0xbf250 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(861456));
  fn1_bf250(c);
  /* d2510: cmp w0, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(0));
  /* d2514: b.ge #0xd2680 */
  if (ARC_COND(c, 10)) goto L_d2680;
  /* d2518: ldur q0, [x29, #-0x10] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-16))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-16)) + 8));
  /* d251c: str q0, [x19] */
  arc_st64(ARC_X_R(c, 19), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 19) + 8, (c)->q[0].u64[1]);
  /* d2520: b #0xd26a0 */
  goto L_d26a0;
L_d2524:;
  /* d2524: ldp q1, q2, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    arc_q_w(c, 1, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 2, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* d2528: ldr q0, [x19, #0x20] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(32))), arc_ld64((ARC_X_R(c, 19) + INT64_C(32)) + 8));
  /* d252c: stp q0, q2, [x29, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-32));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[2].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[2].u64[1]);
  }
  /* d2530: mov v0.16b, v2.16b */
  (c)->q[0] = (c)->q[2];
  /* d2534: str q1, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), (c)->q[1].u64[0]);
  arc_st64(((c)->sp + INT64_C(32)) + 8, (c)->q[1].u64[1]);
  /* d2538: bl #0xbf250 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(861500));
  fn1_bf250(c);
  /* d253c: tbz w0, #0x1f, #0xd2610 */
  if (((ARC_W_R(c, 0)) >> 31 & 1) == 0) goto L_d2610;
  /* d2540: ldp q0, q1, [x29, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-32));
    arc_q_w(c, 0, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 1, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* d2544: bl #0xbf250 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(861512));
  fn1_bf250(c);
  /* d2548: cmp w0, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(0));
  /* d254c: b.ge #0xd2794 */
  if (ARC_COND(c, 10)) goto L_d2794;
  /* d2550: ldur q0, [x29, #-0x20] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-32))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-32)) + 8));
  /* d2554: str q0, [x19] */
  arc_st64(ARC_X_R(c, 19), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 19) + 8, (c)->q[0].u64[1]);
  /* d2558: b #0xd27b4 */
  goto L_d27b4;
L_d255c:;
  /* d255c: ldp q0, q1, [x29, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-32));
    arc_q_w(c, 0, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 1, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* d2560: bl #0xbf250 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(861540));
  fn1_bf250(c);
  /* d2564: cmp w0, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(0));
  /* d2568: b.ge #0xd240c */
  if (ARC_COND(c, 10)) goto L_d240c;
  /* d256c: ldp q1, q0, [x29, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-32));
    arc_q_w(c, 1, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 0, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* d2570: str q1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), (c)->q[1].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)) + 8, (c)->q[1].u64[1]);
  /* d2574: stur q0, [x20, #-0x10] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(-16)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 20) + INT64_C(-16)) + 8, (c)->q[0].u64[1]);
  /* d2578: ldp q1, q0, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    arc_q_w(c, 1, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 0, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* d257c: stp q0, q1, [x29, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-32));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[1].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[1].u64[1]);
  }
  /* d2580: bl #0xbf250 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(861572));
  fn1_bf250(c);
  /* d2584: cmp w0, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(0));
  /* d2588: b.ge #0xd240c */
  if (ARC_COND(c, 10)) goto L_d240c;
  /* d258c: ldp q1, q0, [x29, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-32));
    arc_q_w(c, 1, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 0, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* d2590: b #0xd2920 */
  goto L_d2920;
L_d2594:;
  /* d2594: ldp q1, q0, [x29, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-32));
    arc_q_w(c, 1, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 0, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* d2598: bl #0xbf250 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(861596));
  fn1_bf250(c);
  /* d259c: cmp w0, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(0));
  /* d25a0: b.ge #0xd26a8 */
  if (ARC_COND(c, 10)) goto L_d26a8;
  /* d25a4: ldp q1, q0, [x29, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-32));
    arc_q_w(c, 1, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 0, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* d25a8: stp q0, q1, [x19, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(16));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[1].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[1].u64[1]);
  }
  /* d25ac: ldr q1, [sp, #0x20] */
  arc_q_w(c, 1, arc_ld64(((c)->sp + INT64_C(32))), arc_ld64(((c)->sp + INT64_C(32)) + 8));
  /* d25b0: bl #0xbf250 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(861620));
  fn1_bf250(c);
  /* d25b4: cmp w0, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(0));
  /* d25b8: b.ge #0xd26a8 */
  if (ARC_COND(c, 10)) goto L_d26a8;
  /* d25bc: ldur q1, [x29, #-0x10] */
  arc_q_w(c, 1, arc_ld64((ARC_X_R(c, 29) + INT64_C(-16))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-16)) + 8));
  /* d25c0: ldr q0, [sp, #0x20] */
  arc_q_w(c, 0, arc_ld64(((c)->sp + INT64_C(32))), arc_ld64(((c)->sp + INT64_C(32)) + 8));
  /* d25c4: stp q1, q0, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    arc_st64(_pa, (c)->q[1].u64[0]);
    arc_st64(_pa + 8, (c)->q[1].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* d25c8: b #0xd26a8 */
  goto L_d26a8;
L_d25cc:;
  /* d25cc: ldp q0, q1, [x29, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-32));
    arc_q_w(c, 0, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 1, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* d25d0: bl #0xbf250 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(861652));
  fn1_bf250(c);
  /* d25d4: cmp w0, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(0));
  /* d25d8: b.ge #0xd2784 */
  if (ARC_COND(c, 10)) goto L_d2784;
  /* d25dc: ldp q0, q1, [x29, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-32));
    arc_q_w(c, 0, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 1, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* d25e0: stp q0, q1, [x19, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(16));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[1].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[1].u64[1]);
  }
  /* d25e4: ldr q1, [sp, #0x20] */
  arc_q_w(c, 1, arc_ld64(((c)->sp + INT64_C(32))), arc_ld64(((c)->sp + INT64_C(32)) + 8));
  /* d25e8: bl #0xbf250 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(861676));
  fn1_bf250(c);
  /* d25ec: cmp w0, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(0));
  /* d25f0: b.ge #0xd27dc */
  if (ARC_COND(c, 10)) goto L_d27dc;
  /* d25f4: ldur q1, [x29, #-0x20] */
  arc_q_w(c, 1, arc_ld64((ARC_X_R(c, 29) + INT64_C(-32))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-32)) + 8));
  /* d25f8: ldr q0, [sp, #0x20] */
  arc_q_w(c, 0, arc_ld64(((c)->sp + INT64_C(32))), arc_ld64(((c)->sp + INT64_C(32)) + 8));
  /* d25fc: str q1, [x19] */
  arc_st64(ARC_X_R(c, 19), (c)->q[1].u64[0]);
  arc_st64(ARC_X_R(c, 19) + 8, (c)->q[1].u64[1]);
  /* d2600: stp q1, q0, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, (c)->q[1].u64[0]);
    arc_st64(_pa + 8, (c)->q[1].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* d2604: ldur q1, [x29, #-0x10] */
  arc_q_w(c, 1, arc_ld64((ARC_X_R(c, 29) + INT64_C(-16))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-16)) + 8));
  /* d2608: str q0, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)) + 8, (c)->q[0].u64[1]);
  /* d260c: b #0xd2804 */
  goto L_d2804;
L_d2610:;
  /* d2610: ldp q0, q1, [x29, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-32));
    arc_q_w(c, 0, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 1, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* d2614: bl #0xbf250 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(861720));
  fn1_bf250(c);
  /* d2618: cmp w0, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(0));
  /* d261c: b.ge #0xd27c4 */
  if (ARC_COND(c, 10)) goto L_d27c4;
  /* d2620: ldp q0, q1, [x29, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-32));
    arc_q_w(c, 0, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 1, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* d2624: stp q0, q1, [x19, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(16));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[1].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[1].u64[1]);
  }
  /* d2628: ldr q1, [sp, #0x20] */
  arc_q_w(c, 1, arc_ld64(((c)->sp + INT64_C(32))), arc_ld64(((c)->sp + INT64_C(32)) + 8));
  /* d262c: bl #0xbf250 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(861744));
  fn1_bf250(c);
  /* d2630: cmp w0, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(0));
  /* d2634: b.ge #0xd28c8 */
  if (ARC_COND(c, 10)) goto L_d28c8;
  /* d2638: ldp q2, q1, [x29, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-32));
    arc_q_w(c, 2, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 1, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* d263c: ldr q0, [sp, #0x20] */
  arc_q_w(c, 0, arc_ld64(((c)->sp + INT64_C(32))), arc_ld64(((c)->sp + INT64_C(32)) + 8));
  /* d2640: stp q2, q0, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    arc_st64(_pa, (c)->q[2].u64[0]);
    arc_st64(_pa + 8, (c)->q[2].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* d2644: b #0xd28cc */
  goto L_d28cc;
L_d2648:;
  /* d2648: ldur q0, [x29, #-0x10] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-16))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-16)) + 8));
  /* d264c: ldr q1, [sp, #0x20] */
  arc_q_w(c, 1, arc_ld64(((c)->sp + INT64_C(32))), arc_ld64(((c)->sp + INT64_C(32)) + 8));
  /* d2650: stp q0, q1, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[1].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[1].u64[1]);
  }
  /* d2654: ldur q0, [x20, #-0x10] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 20) + INT64_C(-16))), arc_ld64((ARC_X_R(c, 20) + INT64_C(-16)) + 8));
  /* d2658: stur q0, [x29, #-0x10] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-16)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 29) + INT64_C(-16)) + 8, (c)->q[0].u64[1]);
  /* d265c: bl #0xbf250 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(861792));
  fn1_bf250(c);
  /* d2660: cmp w0, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(0));
  /* d2664: b.ge #0xd240c */
  if (ARC_COND(c, 10)) goto L_d240c;
  /* d2668: ldur q0, [x29, #-0x10] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-16))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-16)) + 8));
  /* d266c: str q0, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)) + 8, (c)->q[0].u64[1]);
L_d2670:;
  /* d2670: ldr q0, [sp, #0x20] */
  arc_q_w(c, 0, arc_ld64(((c)->sp + INT64_C(32))), arc_ld64(((c)->sp + INT64_C(32)) + 8));
  /* d2674: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* d2678: stur q0, [x20, #-0x10] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(-16)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 20) + INT64_C(-16)) + 8, (c)->q[0].u64[1]);
  /* d267c: b #0xd2410 */
  goto L_d2410;
L_d2680:;
  /* d2680: ldp q2, q0, [x29, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-32));
    arc_q_w(c, 2, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 0, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* d2684: ldr q1, [sp, #0x20] */
  arc_q_w(c, 1, arc_ld64(((c)->sp + INT64_C(32))), arc_ld64(((c)->sp + INT64_C(32)) + 8));
  /* d2688: stp q2, q1, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    arc_st64(_pa, (c)->q[2].u64[0]);
    arc_st64(_pa + 8, (c)->q[2].u64[1]);
    arc_st64((_pa + 16), (c)->q[1].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[1].u64[1]);
  }
  /* d268c: bl #0xbf250 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(861840));
  fn1_bf250(c);
  /* d2690: cmp w0, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(0));
  /* d2694: b.ge #0xd26a8 */
  if (ARC_COND(c, 10)) goto L_d26a8;
  /* d2698: ldur q0, [x29, #-0x10] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-16))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-16)) + 8));
  /* d269c: str q0, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)) + 8, (c)->q[0].u64[1]);
L_d26a0:;
  /* d26a0: ldr q0, [sp, #0x20] */
  arc_q_w(c, 0, arc_ld64(((c)->sp + INT64_C(32))), arc_ld64(((c)->sp + INT64_C(32)) + 8));
  /* d26a4: str q0, [x19, #0x20] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(32)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(32)) + 8, (c)->q[0].u64[1]);
L_d26a8:;
  /* d26a8: add x21, x19, #0x30 */
  ARC_X_W(c, 21, (ARC_X_R(c, 19) + UINT64_C(48)));
  /* d26ac: cmp x21, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 20));
  /* d26b0: b.eq #0xd240c */
  if (ARC_COND(c, 0)) goto L_d240c;
  /* d26b4: mov w22, wzr */
  ARC_W_W(c, 22, ARC_W_R(c, 31));
  /* d26b8: add x8, x19, #0x20 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + UINT64_C(32)));
  /* d26bc: mov w23, #0x30 */
  ARC_W_W(c, 23, UINT64_C(48));
  /* d26c0: b #0xd26f4 */
  goto L_d26f4;
L_d26c4:;
  /* d26c4: mov x8, x19 */
  ARC_X_W(c, 8, ARC_X_R(c, 19));
L_d26c8:;
  /* d26c8: add w22, w22, #1 */
  ARC_W_W(c, 22, (ARC_W_R(c, 22) + UINT64_C(1)));
  /* d26cc: ldur q0, [x29, #-0x20] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-32))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-32)) + 8));
  /* d26d0: cmp w22, #8 */
  (void)arc_sub32(c, ARC_W_R(c, 22), UINT64_C(8));
  /* d26d4: str q0, [x8] */
  arc_st64(ARC_X_R(c, 8), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 8) + 8, (c)->q[0].u64[1]);
  /* d26d8: b.eq #0xd27cc */
  if (ARC_COND(c, 0)) goto L_d27cc;
L_d26dc:;
  /* d26dc: add x9, x21, #0x10 */
  ARC_X_W(c, 9, (ARC_X_R(c, 21) + UINT64_C(16)));
  /* d26e0: mov x8, x21 */
  ARC_X_W(c, 8, ARC_X_R(c, 21));
  /* d26e4: add x23, x23, #0x10 */
  ARC_X_W(c, 23, (ARC_X_R(c, 23) + UINT64_C(16)));
  /* d26e8: cmp x9, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 20));
  /* d26ec: mov x21, x9 */
  ARC_X_W(c, 21, ARC_X_R(c, 9));
  /* d26f0: b.eq #0xd240c */
  if (ARC_COND(c, 0)) goto L_d240c;
L_d26f4:;
  /* d26f4: ldr q0, [x21] */
  arc_q_w(c, 0, arc_ld64(ARC_X_R(c, 21)), arc_ld64(ARC_X_R(c, 21) + 8));
  /* d26f8: ldr q1, [x8] */
  arc_q_w(c, 1, arc_ld64(ARC_X_R(c, 8)), arc_ld64(ARC_X_R(c, 8) + 8));
  /* d26fc: stp q0, q1, [x29, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-32));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[1].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[1].u64[1]);
  }
  /* d2700: bl #0xbf250 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(861956));
  fn1_bf250(c);
  /* d2704: cmp w0, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(0));
  /* d2708: b.ge #0xd26dc */
  if (ARC_COND(c, 10)) goto L_d26dc;
  /* d270c: ldur q0, [x29, #-0x10] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-16))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-16)) + 8));
  /* d2710: mov x8, x23 */
  ARC_X_W(c, 8, ARC_X_R(c, 23));
L_d2714:;
  /* d2714: subs x24, x8, #0x10 */
  ARC_X_W(c, 24, arc_sub64(c, ARC_X_R(c, 8), UINT64_C(16)));
  /* d2718: str q0, [x19, x8] */
  arc_st64((ARC_X_R(c, 19) + ARC_X_R(c, 8)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + ARC_X_R(c, 8)) + 8, (c)->q[0].u64[1]);
  /* d271c: b.eq #0xd26c4 */
  if (ARC_COND(c, 0)) goto L_d26c4;
  /* d2720: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* d2724: ldur q0, [x29, #-0x20] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-32))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-32)) + 8));
  /* d2728: ldur q1, [x8, #-0x20] */
  arc_q_w(c, 1, arc_ld64((ARC_X_R(c, 8) + INT64_C(-32))), arc_ld64((ARC_X_R(c, 8) + INT64_C(-32)) + 8));
  /* d272c: stur q1, [x29, #-0x10] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-16)), (c)->q[1].u64[0]);
  arc_st64((ARC_X_R(c, 29) + INT64_C(-16)) + 8, (c)->q[1].u64[1]);
  /* d2730: bl #0xbf250 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(862004));
  fn1_bf250(c);
  /* d2734: ldur q0, [x29, #-0x10] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-16))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-16)) + 8));
  /* d2738: mov x8, x24 */
  ARC_X_W(c, 8, ARC_X_R(c, 24));
  /* d273c: tbnz w0, #0x1f, #0xd2714 */
  if (((ARC_W_R(c, 0)) >> 31 & 1) != 0) goto L_d2714;
  /* d2740: add x8, x19, x24 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 24)));
  /* d2744: b #0xd26c8 */
  goto L_d26c8;
L_d2748:;
  /* d2748: ldp q0, q2, [x29, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-32));
    arc_q_w(c, 0, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 2, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* d274c: ldr q1, [sp, #0x20] */
  arc_q_w(c, 1, arc_ld64(((c)->sp + INT64_C(32))), arc_ld64(((c)->sp + INT64_C(32)) + 8));
  /* d2750: stp q2, q1, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    arc_st64(_pa, (c)->q[2].u64[0]);
    arc_st64(_pa + 8, (c)->q[2].u64[1]);
    arc_st64((_pa + 16), (c)->q[1].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[1].u64[1]);
  }
  /* d2754: bl #0xbf250 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(862040));
  fn1_bf250(c);
  /* d2758: cmp w0, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(0));
  /* d275c: b.ge #0xd27f0 */
  if (ARC_COND(c, 10)) goto L_d27f0;
  /* d2760: ldur q0, [x29, #-0x10] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-16))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-16)) + 8));
  /* d2764: str q0, [sp] */
  arc_st64((c)->sp, (c)->q[0].u64[0]);
  arc_st64((c)->sp + 8, (c)->q[0].u64[1]);
  /* d2768: ldur q0, [x29, #-0x20] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-32))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-32)) + 8));
  /* d276c: str q0, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)) + 8, (c)->q[0].u64[1]);
L_d2770:;
  /* d2770: str q0, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), (c)->q[0].u64[0]);
  arc_st64(((c)->sp + INT64_C(16)) + 8, (c)->q[0].u64[1]);
  /* d2774: ldr q0, [sp, #0x20] */
  arc_q_w(c, 0, arc_ld64(((c)->sp + INT64_C(32))), arc_ld64(((c)->sp + INT64_C(32)) + 8));
  /* d2778: mov v1.16b, v0.16b */
  (c)->q[1] = (c)->q[0];
  /* d277c: str q0, [x19, #0x20] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(32)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(32)) + 8, (c)->q[0].u64[1]);
  /* d2780: b #0xd2804 */
  goto L_d2804;
L_d2784:;
  /* d2784: ldr q0, [sp, #0x20] */
  arc_q_w(c, 0, arc_ld64(((c)->sp + INT64_C(32))), arc_ld64(((c)->sp + INT64_C(32)) + 8));
  /* d2788: str q0, [sp] */
  arc_st64((c)->sp, (c)->q[0].u64[0]);
  arc_st64((c)->sp + 8, (c)->q[0].u64[1]);
  /* d278c: ldur q0, [x29, #-0x10] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-16))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-16)) + 8));
  /* d2790: b #0xd27fc */
  goto L_d27fc;
L_d2794:;
  /* d2794: ldp q0, q2, [x29, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-32));
    arc_q_w(c, 0, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 2, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* d2798: ldr q1, [sp, #0x20] */
  arc_q_w(c, 1, arc_ld64(((c)->sp + INT64_C(32))), arc_ld64(((c)->sp + INT64_C(32)) + 8));
  /* d279c: stp q2, q1, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    arc_st64(_pa, (c)->q[2].u64[0]);
    arc_st64(_pa + 8, (c)->q[2].u64[1]);
    arc_st64((_pa + 16), (c)->q[1].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[1].u64[1]);
  }
  /* d27a0: bl #0xbf250 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(862116));
  fn1_bf250(c);
  /* d27a4: cmp w0, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(0));
  /* d27a8: b.ge #0xd27c4 */
  if (ARC_COND(c, 10)) goto L_d27c4;
  /* d27ac: ldur q0, [x29, #-0x20] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-32))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-32)) + 8));
  /* d27b0: str q0, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)) + 8, (c)->q[0].u64[1]);
L_d27b4:;
  /* d27b4: ldr q0, [sp, #0x20] */
  arc_q_w(c, 0, arc_ld64(((c)->sp + INT64_C(32))), arc_ld64(((c)->sp + INT64_C(32)) + 8));
  /* d27b8: mov v1.16b, v0.16b */
  (c)->q[1] = (c)->q[0];
  /* d27bc: str q0, [x19, #0x20] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(32)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(32)) + 8, (c)->q[0].u64[1]);
  /* d27c0: b #0xd28cc */
  goto L_d28cc;
L_d27c4:;
  /* d27c4: ldur q1, [x29, #-0x20] */
  arc_q_w(c, 1, arc_ld64((ARC_X_R(c, 29) + INT64_C(-32))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-32)) + 8));
  /* d27c8: b #0xd28cc */
  goto L_d28cc;
L_d27cc:;
  /* d27cc: add x8, x21, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 21) + UINT64_C(16)));
  /* d27d0: cmp x8, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 20));
  /* d27d4: cset w0, eq */
  ARC_W_W(c, 0, (ARC_COND(c, 0) ? 1 : 0));
  /* d27d8: b #0xd2410 */
  goto L_d2410;
L_d27dc:;
  /* d27dc: ldr q0, [sp, #0x20] */
  arc_q_w(c, 0, arc_ld64(((c)->sp + INT64_C(32))), arc_ld64(((c)->sp + INT64_C(32)) + 8));
  /* d27e0: ldur q1, [x29, #-0x10] */
  arc_q_w(c, 1, arc_ld64((ARC_X_R(c, 29) + INT64_C(-16))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-16)) + 8));
  /* d27e4: str q0, [sp] */
  arc_st64((c)->sp, (c)->q[0].u64[0]);
  arc_st64((c)->sp + 8, (c)->q[0].u64[1]);
  /* d27e8: ldur q0, [x29, #-0x20] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-32))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-32)) + 8));
  /* d27ec: b #0xd2800 */
  goto L_d2800;
L_d27f0:;
  /* d27f0: ldur q0, [x29, #-0x10] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-16))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-16)) + 8));
  /* d27f4: str q0, [sp] */
  arc_st64((c)->sp, (c)->q[0].u64[0]);
  arc_st64((c)->sp + 8, (c)->q[0].u64[1]);
  /* d27f8: ldr q0, [sp, #0x20] */
  arc_q_w(c, 0, arc_ld64(((c)->sp + INT64_C(32))), arc_ld64(((c)->sp + INT64_C(32)) + 8));
L_d27fc:;
  /* d27fc: ldur q1, [x29, #-0x20] */
  arc_q_w(c, 1, arc_ld64((ARC_X_R(c, 29) + INT64_C(-32))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-32)) + 8));
L_d2800:;
  /* d2800: str q0, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), (c)->q[0].u64[0]);
  arc_st64(((c)->sp + INT64_C(16)) + 8, (c)->q[0].u64[1]);
L_d2804:;
  /* d2804: ldr q0, [x19, #0x30] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(48))), arc_ld64((ARC_X_R(c, 19) + INT64_C(48)) + 8));
  /* d2808: stp q0, q1, [x29, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-32));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[1].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[1].u64[1]);
  }
  /* d280c: bl #0xbf250 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(862224));
  fn1_bf250(c);
  /* d2810: cmp w0, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(0));
  /* d2814: b.ge #0xd285c */
  if (ARC_COND(c, 10)) goto L_d285c;
  /* d2818: ldp q0, q1, [x29, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-32));
    arc_q_w(c, 0, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 1, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* d281c: stp q0, q1, [x19, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(32));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[1].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[1].u64[1]);
  }
  /* d2820: ldr q1, [sp, #0x10] */
  arc_q_w(c, 1, arc_ld64(((c)->sp + INT64_C(16))), arc_ld64(((c)->sp + INT64_C(16)) + 8));
  /* d2824: bl #0xbf250 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(862248));
  fn1_bf250(c);
  /* d2828: cmp w0, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(0));
  /* d282c: b.ge #0xd2854 */
  if (ARC_COND(c, 10)) goto L_d2854;
  /* d2830: ldp q1, q2, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_q_w(c, 1, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 2, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* d2834: ldur q0, [x29, #-0x20] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-32))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-32)) + 8));
  /* d2838: stp q0, q2, [x19, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(16));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[2].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[2].u64[1]);
  }
  /* d283c: bl #0xbf250 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(862272));
  fn1_bf250(c);
  /* d2840: cmp w0, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(0));
  /* d2844: b.ge #0xd2854 */
  if (ARC_COND(c, 10)) goto L_d2854;
  /* d2848: ldur q1, [x29, #-0x20] */
  arc_q_w(c, 1, arc_ld64((ARC_X_R(c, 29) + INT64_C(-32))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-32)) + 8));
  /* d284c: ldr q0, [sp] */
  arc_q_w(c, 0, arc_ld64((c)->sp), arc_ld64((c)->sp + 8));
  /* d2850: stp q1, q0, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    arc_st64(_pa, (c)->q[1].u64[0]);
    arc_st64(_pa + 8, (c)->q[1].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
L_d2854:;
  /* d2854: ldur q1, [x29, #-0x10] */
  arc_q_w(c, 1, arc_ld64((ARC_X_R(c, 29) + INT64_C(-16))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-16)) + 8));
  /* d2858: b #0xd2860 */
  goto L_d2860;
L_d285c:;
  /* d285c: ldur q1, [x29, #-0x20] */
  arc_q_w(c, 1, arc_ld64((ARC_X_R(c, 29) + INT64_C(-32))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-32)) + 8));
L_d2860:;
  /* d2860: ldur q0, [x20, #-0x10] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 20) + INT64_C(-16))), arc_ld64((ARC_X_R(c, 20) + INT64_C(-16)) + 8));
  /* d2864: stp q0, q1, [x29, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-32));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[1].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[1].u64[1]);
  }
  /* d2868: bl #0xbf250 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(862316));
  fn1_bf250(c);
  /* d286c: cmp w0, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(0));
  /* d2870: b.ge #0xd240c */
  if (ARC_COND(c, 10)) goto L_d240c;
  /* d2874: ldp q1, q0, [x29, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-32));
    arc_q_w(c, 1, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 0, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* d2878: str q1, [x19, #0x30] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(48)), (c)->q[1].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(48)) + 8, (c)->q[1].u64[1]);
  /* d287c: stur q0, [x20, #-0x10] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(-16)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 20) + INT64_C(-16)) + 8, (c)->q[0].u64[1]);
  /* d2880: ldp q1, q0, [x19, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(32));
    arc_q_w(c, 1, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 0, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* d2884: stp q1, q0, [x29, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-32));
    arc_st64(_pa, (c)->q[1].u64[0]);
    arc_st64(_pa + 8, (c)->q[1].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* d2888: bl #0xbf250 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(862348));
  fn1_bf250(c);
  /* d288c: cmp w0, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(0));
  /* d2890: b.ge #0xd240c */
  if (ARC_COND(c, 10)) goto L_d240c;
  /* d2894: ldp q2, q0, [x29, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-32));
    arc_q_w(c, 2, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 0, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* d2898: ldr q1, [x19, #0x10] */
  arc_q_w(c, 1, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))), arc_ld64((ARC_X_R(c, 19) + INT64_C(16)) + 8));
  /* d289c: stur q1, [x29, #-0x20] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-32)), (c)->q[1].u64[0]);
  arc_st64((ARC_X_R(c, 29) + INT64_C(-32)) + 8, (c)->q[1].u64[1]);
  /* d28a0: stp q0, q2, [x19, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(32));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[2].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[2].u64[1]);
  }
  /* d28a4: bl #0xbf250 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(862376));
  fn1_bf250(c);
  /* d28a8: cmp w0, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(0));
  /* d28ac: b.ge #0xd240c */
  if (ARC_COND(c, 10)) goto L_d240c;
  /* d28b0: ldp q1, q0, [x29, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-32));
    arc_q_w(c, 1, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 0, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* d28b4: ldr q2, [x19] */
  arc_q_w(c, 2, arc_ld64(ARC_X_R(c, 19)), arc_ld64(ARC_X_R(c, 19) + 8));
  /* d28b8: stur q2, [x29, #-0x20] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-32)), (c)->q[2].u64[0]);
  arc_st64((ARC_X_R(c, 29) + INT64_C(-32)) + 8, (c)->q[2].u64[1]);
  /* d28bc: stp q0, q1, [x19, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(16));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[1].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[1].u64[1]);
  }
  /* d28c0: mov v1.16b, v2.16b */
  (c)->q[1] = (c)->q[2];
  /* d28c4: b #0xd2910 */
  goto L_d2910;
L_d28c8:;
  /* d28c8: ldur q1, [x29, #-0x10] */
  arc_q_w(c, 1, arc_ld64((ARC_X_R(c, 29) + INT64_C(-16))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-16)) + 8));
L_d28cc:;
  /* d28cc: ldur q0, [x20, #-0x10] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 20) + INT64_C(-16))), arc_ld64((ARC_X_R(c, 20) + INT64_C(-16)) + 8));
  /* d28d0: stp q0, q1, [x29, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-32));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[1].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[1].u64[1]);
  }
  /* d28d4: bl #0xbf250 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(862424));
  fn1_bf250(c);
  /* d28d8: cmp w0, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(0));
  /* d28dc: b.ge #0xd240c */
  if (ARC_COND(c, 10)) goto L_d240c;
  /* d28e0: ldp q1, q0, [x29, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-32));
    arc_q_w(c, 1, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 0, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* d28e4: str q1, [x19, #0x20] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(32)), (c)->q[1].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(32)) + 8, (c)->q[1].u64[1]);
  /* d28e8: stur q0, [x20, #-0x10] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(-16)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 20) + INT64_C(-16)) + 8, (c)->q[0].u64[1]);
  /* d28ec: ldp q1, q0, [x19, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(16));
    arc_q_w(c, 1, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 0, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* d28f0: stp q1, q0, [x29, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-32));
    arc_st64(_pa, (c)->q[1].u64[0]);
    arc_st64(_pa + 8, (c)->q[1].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* d28f4: bl #0xbf250 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(862456));
  fn1_bf250(c);
  /* d28f8: cmp w0, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(0));
  /* d28fc: b.ge #0xd240c */
  if (ARC_COND(c, 10)) goto L_d240c;
  /* d2900: ldp q2, q0, [x29, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-32));
    arc_q_w(c, 2, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 0, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* d2904: ldr q1, [x19] */
  arc_q_w(c, 1, arc_ld64(ARC_X_R(c, 19)), arc_ld64(ARC_X_R(c, 19) + 8));
  /* d2908: stur q1, [x29, #-0x20] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-32)), (c)->q[1].u64[0]);
  arc_st64((ARC_X_R(c, 29) + INT64_C(-32)) + 8, (c)->q[1].u64[1]);
  /* d290c: stp q0, q2, [x19, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(16));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[2].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[2].u64[1]);
  }
L_d2910:;
  /* d2910: bl #0xbf250 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(862484));
  fn1_bf250(c);
  /* d2914: cmp w0, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(0));
  /* d2918: b.ge #0xd240c */
  if (ARC_COND(c, 10)) goto L_d240c;
  /* d291c: ldp q0, q1, [x29, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-32));
    arc_q_w(c, 0, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 1, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
L_d2920:;
  /* d2920: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* d2924: stp q1, q0, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    arc_st64(_pa, (c)->q[1].u64[0]);
    arc_st64(_pa + 8, (c)->q[1].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* d2928: b #0xd2410 */
  goto L_d2410;
}

void fn1_d7e40(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038812224));
  /* d7e40: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* d7e44: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* d7e48: stp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* d7e4c: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* d7e50: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* d7e54: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* d7e58: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* d7e5c: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* d7e60: ldr x8, [x8, #0x908] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2312))));
  /* d7e64: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* d7e68: str x8, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* d7e6c: mov x0, x1 */
  ARC_X_W(c, 0, ARC_X_R(c, 1));
  /* d7e70: bl #0x142860 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(884340));
  fn1_142860(c);
  /* d7e74: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* d7e78: add x0, x0, #0x19 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(25)));
  /* d7e7c: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(884352));
  fn1_1428f0(c);
  /* d7e80: add x22, x0, #0x18 */
  ARC_X_W(c, 22, (ARC_X_R(c, 0) + UINT64_C(24)));
  /* d7e84: stp x21, x21, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 21));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* d7e88: add x2, x21, #1 */
  ARC_X_W(c, 2, (ARC_X_R(c, 21) + UINT64_C(1)));
  /* d7e8c: str wzr, [x0, #0x10] */
  arc_st32((ARC_X_R(c, 0) + INT64_C(16)), ARC_W_R(c, 31));
  /* d7e90: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* d7e94: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* d7e98: bl #0x1449d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(884380));
  fn1_1449d8(c);
  /* d7e9c: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* d7ea0: ldr x8, [x8, #0x928] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2344))));
  /* d7ea4: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* d7ea8: stp x8, x22, [x20] */
  { const uint64_t _pa = ARC_X_R(c, 20);
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 22));
  }
  /* d7eac: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* d7eb0: ldp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* d7eb4: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* d7eb8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* d7ebc: ret  */
  return;
}

void fn1_db8d4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038827220));
  /* db8d4: bti c */
  /* bti: no architectural effect here */
  /* db8d8: stp xzr, xzr, [x0, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* db8dc: mov w10, #0x40000000 */
  ARC_W_W(c, 10, UINT64_C(1073741824));
  /* db8e0: adrp x11, #0x151000 */
  ARC_X_W(c, 11, (arc_image_bases[1] + UINT64_C(1380352)));
  /* db8e4: ldp x9, x8, [x1] */
  { const uint64_t _pa = ARC_X_R(c, 1);
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* db8e8: ldr x11, [x11, #0xa20] */
  ARC_X_W(c, 11, arc_ld64((ARC_X_R(c, 11) + INT64_C(2592))));
  /* db8ec: mov w12, #8 */
  ARC_W_W(c, 12, UINT64_C(8));
  /* db8f0: add x11, x11, #0x10 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) + UINT64_C(16)));
  /* db8f4: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* db8f8: stp x11, x2, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 11));
    arc_st64(_pa + 8, ARC_X_R(c, 2));
  }
  /* db8fc: csel x10, x8, x10, lo */
  ARC_X_W(c, 10, (ARC_COND(c, 3) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 10)));
  /* db900: cmp x10, #8 */
  (void)arc_sub64(c, ARC_X_R(c, 10), UINT64_C(8));
  /* db904: csel x12, x10, x12, hi */
  ARC_X_W(c, 12, (ARC_COND(c, 8) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 12)));
  /* db908: cmp x8, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(0));
  /* db90c: mov w10, #0x100000 */
  ARC_W_W(c, 10, UINT64_C(1048576));
  /* db910: csel x8, x10, x12, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 12)));
  /* db914: cbz x9, #0xdb934 */
  if ((ARC_X_R(c, 9)) == 0) goto L_db934;
  /* db918: cmp x9, #0x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(16));
  /* db91c: b.hs #0xdb928 */
  if (ARC_COND(c, 2)) goto L_db928;
  /* db920: mov w10, #0x10 */
  ARC_W_W(c, 10, UINT64_C(16));
  /* db924: b #0xdb934 */
  goto L_db934;
L_db928:;
  /* db928: cmp x9, #0x100, lsl #12 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(1048576));
  /* db92c: mov w10, #0x100000 */
  ARC_W_W(c, 10, UINT64_C(1048576));
  /* db930: csel x10, x9, x10, lo */
  ARC_X_W(c, 10, (ARC_COND(c, 3) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 10)));
L_db934:;
  /* db934: cmp x8, #9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(9));
  /* db938: mov w9, #1 */
  ARC_W_W(c, 9, UINT64_C(1));
  /* db93c: str w10, [x0, #0x24] */
  arc_st32((ARC_X_R(c, 0) + INT64_C(36)), ARC_W_R(c, 10));
  /* db940: b.lo #0xdb958 */
  if (ARC_COND(c, 3)) goto L_db958;
  /* db944: mov w10, #8 */
  ARC_W_W(c, 10, UINT64_C(8));
L_db948:;
  /* db948: lsl x10, x10, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* db94c: add w9, w9, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) + UINT64_C(1)));
  /* db950: cmp x10, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 8));
  /* db954: b.lo #0xdb948 */
  if (ARC_COND(c, 3)) goto L_db948;
L_db958:;
  /* db958: str w9, [x0, #0x20] */
  arc_st32((ARC_X_R(c, 0) + INT64_C(32)), ARC_W_R(c, 9));
  /* db95c: ret  */
  return;
}

void fn1_e0164(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038845796));
  /* e0164: bti c */
  /* bti: no architectural effect here */
  /* e0168: ldrb w8, [x0] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 0)));
  /* e016c: tbnz w8, #0, #0xe0174 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_e0174;
  /* e0170: ret  */
  return;
L_e0174:;
  /* e0174: ldr x8, [x0, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* e0178: ldr x9, [x0] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 0)));
  /* e017c: and x1, x9, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 9) & UINT64_C(18446744073709551614)));
  /* e0180: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* e0184: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_e2ab4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038856372));
  /* e2ab4: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e2ab8: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e2abc: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* e2ac0: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* e2ac4: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* e2ac8: ldr x9, [x0] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 0)));
  /* e2acc: ldrb w8, [x0] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 0)));
  /* e2ad0: mov x7, x1 */
  ARC_X_W(c, 7, ARC_X_R(c, 1));
  /* e2ad4: mov x20, x2 */
  ARC_X_W(c, 20, ARC_X_R(c, 2));
  /* e2ad8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* e2adc: and x10, x9, #0xfffffffffffffffe */
  ARC_X_W(c, 10, (ARC_X_R(c, 9) & UINT64_C(18446744073709551614)));
  /* e2ae0: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* e2ae4: mov w8, #4 */
  ARC_W_W(c, 8, UINT64_C(4));
  /* e2ae8: sub x10, x10, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) - UINT64_C(1)));
  /* e2aec: csel x1, x8, x10, eq */
  ARC_X_W(c, 1, (ARC_COND(c, 0) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 10)));
  /* e2af0: and w8, w9, #0xff */
  ARC_W_W(c, 8, (ARC_W_R(c, 9) & UINT64_C(255)));
  /* e2af4: subs x2, x2, x1 */
  ARC_X_W(c, 2, arc_sub64(c, ARC_X_R(c, 2), ARC_X_R(c, 1)));
  /* e2af8: b.ls #0xe2b24 */
  if (ARC_COND(c, 9)) goto L_e2b24;
  /* e2afc: ldr x10, [x19, #8] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* e2b00: ubfx x9, x9, #1, #7 */
  ARC_X_W(c, 9, (((uint64_t)(ARC_X_R(c, 9)) >> 1) & UINT64_C(127)));
  /* e2b04: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* e2b08: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* e2b0c: mov x4, xzr */
  ARC_X_W(c, 4, ARC_X_R(c, 31));
  /* e2b10: mov x6, x20 */
  ARC_X_W(c, 6, ARC_X_R(c, 20));
  /* e2b14: csel x3, x9, x10, eq */
  ARC_X_W(c, 3, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 10)));
  /* e2b18: mov x5, x3 */
  ARC_X_W(c, 5, ARC_X_R(c, 3));
  /* e2b1c: bl #0x142d40 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(928544));
  fn1_142d40(c);
  /* e2b20: b #0xe2b64 */
  goto L_e2b64;
L_e2b24:;
  /* e2b24: ldr x9, [x19, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* e2b28: add x10, x19, #4 */
  ARC_X_W(c, 10, (ARC_X_R(c, 19) + UINT64_C(4)));
  /* e2b2c: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* e2b30: csel x21, x10, x9, eq */
  ARC_X_W(c, 21, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* e2b34: cbz x20, #0xe2b4c */
  if ((ARC_X_R(c, 20)) == 0) goto L_e2b4c;
  /* e2b38: lsl x2, x20, #2 */
  ARC_X_W(c, 2, ((uint64_t)(ARC_X_R(c, 20)) << ((UINT64_C(2)) & 63)));
  /* e2b3c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* e2b40: mov x1, x7 */
  ARC_X_W(c, 1, ARC_X_R(c, 7));
  /* e2b44: bl #0x1449f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(928584));
  fn1_1449f0(c);
  /* e2b48: ldrb w8, [x19] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 19)));
L_e2b4c:;
  /* e2b4c: tbnz w8, #0, #0xe2b5c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_e2b5c;
  /* e2b50: lsl w8, w20, #1 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 20)) << ((UINT64_C(1)) & 31)));
  /* e2b54: strb w8, [x19] */
  arc_st8(ARC_X_R(c, 19), ARC_W_R(c, 8));
  /* e2b58: b #0xe2b60 */
  goto L_e2b60;
L_e2b5c:;
  /* e2b5c: str x20, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 20));
L_e2b60:;
  /* e2b60: str wzr, [x21, x20, lsl #2] */
  arc_st32((ARC_X_R(c, 21) + ((uint64_t)(ARC_X_R(c, 20)) << 2)), ARC_W_R(c, 31));
L_e2b64:;
  /* e2b64: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* e2b68: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* e2b6c: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* e2b70: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e2b74: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* e2b78: ret  */
  return;
}

void fn1_e6cb4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038873268));
  /* e6cb4: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e6cb8: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* e6cbc: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e6cc0: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* e6cc4: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* e6cc8: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* e6ccc: lsr x9, x0, #0x20 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 0)) >> ((UINT64_C(32)) & 63)));
  /* e6cd0: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* e6cd4: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* e6cd8: cbnz x9, #0xe6cf0 */
  if ((ARC_X_R(c, 9)) != 0) goto L_e6cf0;
  /* e6cdc: add x0, sp, #0xb */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(11)));
  /* e6ce0: mov w1, w20 */
  ARC_W_W(c, 1, ARC_W_R(c, 20));
  /* e6ce4: bl #0xd4eb8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(945384));
  fn1_d4eb8(c);
  /* e6ce8: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* e6cec: b #0xe6de4 */
  goto L_e6de4;
L_e6cf0:;
  /* e6cf0: mov x22, #0xe3ff */
  ARC_X_W(c, 22, UINT64_C(58367));
  /* e6cf4: movk x22, #0x540b, lsl #16 */
  ARC_X_W(c, 22, ((ARC_X_R(c, 22) & UINT64_C(18446744069414649855)) | UINT64_C(1410007040)));
  /* e6cf8: movk x22, #2, lsl #32 */
  ARC_X_W(c, 22, ((ARC_X_R(c, 22) & UINT64_C(18446462603027808255)) | UINT64_C(8589934592)));
  /* e6cfc: cmp x20, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 22));
  /* e6d00: b.ls #0xe6d34 */
  if (ARC_COND(c, 9)) goto L_e6d34;
  /* e6d04: mov x8, #0xd5bf */
  ARC_X_W(c, 8, UINT64_C(54719));
  /* e6d08: add x0, sp, #0xb */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(11)));
  /* e6d0c: movk x8, #0xbded, lsl #16 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(18446744069414649855)) | UINT64_C(3186425856)));
  /* e6d10: movk x8, #0xfece, lsl #32 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(18446462603027808255)) | UINT64_C(280160716718080)));
  /* e6d14: movk x8, #0xdbe6, lsl #48 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(281474976710655)) | UINT64_C(15845352338949668864)));
  /* e6d18: umulh x8, x20, x8 */
  ARC_X_W(c, 8, arc_umulh(ARC_X_R(c, 20), ARC_X_R(c, 8)));
  /* e6d1c: lsr x21, x8, #0x21 */
  ARC_X_W(c, 21, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(33)) & 63)));
  /* e6d20: mov w1, w21 */
  ARC_W_W(c, 1, ARC_W_R(c, 21));
  /* e6d24: bl #0xd4eb8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(945448));
  fn1_d4eb8(c);
  /* e6d28: madd x8, x21, x22, x21 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 21)) + ((uint64_t)(ARC_X_R(c, 21)) * (uint64_t)(ARC_X_R(c, 22)))));
  /* e6d2c: sub x20, x20, x8 */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) - ARC_X_R(c, 8)));
  /* e6d30: b #0xe6d38 */
  goto L_e6d38;
L_e6d34:;
  /* e6d34: add x0, sp, #0xb */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(11)));
L_e6d38:;
  /* e6d38: mov x8, #0xcefd */
  ARC_X_W(c, 8, UINT64_C(52989));
  /* e6d3c: mov w9, #0xe100 */
  ARC_W_W(c, 9, UINT64_C(57600));
  /* e6d40: mov w11, #0xde83 */
  ARC_W_W(c, 11, UINT64_C(56963));
  /* e6d44: movk x8, #0x8461, lsl #16 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(18446744069414649855)) | UINT64_C(2220949504)));
  /* e6d48: movk w9, #0x5f5, lsl #16 */
  ARC_W_W(c, 9, ((ARC_W_R(c, 9) & UINT64_C(18446744069414649855)) | UINT64_C(99942400)));
  /* e6d4c: movk w11, #0x431b, lsl #16 */
  ARC_W_W(c, 11, ((ARC_W_R(c, 11) & UINT64_C(18446744069414649855)) | UINT64_C(1125842944)));
  /* e6d50: movk x8, #0x7711, lsl #32 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(18446462603027808255)) | UINT64_C(130914898149376)));
  /* e6d54: mov w12, #0x2710 */
  ARC_W_W(c, 12, UINT64_C(10000));
  /* e6d58: movk x8, #0xabcc, lsl #48 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(281474976710655)) | UINT64_C(12379269475734650880)));
  /* e6d5c: umulh x8, x20, x8 */
  ARC_X_W(c, 8, arc_umulh(ARC_X_R(c, 20), ARC_X_R(c, 8)));
  /* e6d60: lsr x8, x8, #0x1a */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(26)) & 63)));
  /* e6d64: msub x9, x8, x9, x20 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 20)) - ((uint64_t)(ARC_X_R(c, 8)) * (uint64_t)(ARC_X_R(c, 9)))));
  /* e6d68: add x20, x0, #0xa */
  ARC_X_W(c, 20, (ARC_X_R(c, 0) + UINT64_C(10)));
  /* e6d6c: mov w10, w9 */
  ARC_W_W(c, 10, ARC_W_R(c, 9));
  /* e6d70: umull x10, w10, w11 */
  ARC_X_W(c, 10, (((uint64_t)(uint32_t)(ARC_W_R(c, 10))) * ((uint64_t)(uint32_t)(ARC_W_R(c, 11)))));
  /* e6d74: mov w11, #0x4240 */
  ARC_W_W(c, 11, UINT64_C(16960));
  /* e6d78: movk w11, #0xf, lsl #16 */
  ARC_W_W(c, 11, ((ARC_W_R(c, 11) & UINT64_C(18446744069414649855)) | UINT64_C(983040)));
  /* e6d7c: lsr x10, x10, #0x32 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 10)) >> ((UINT64_C(50)) & 63)));
  /* e6d80: msub w9, w10, w11, w9 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 9)) - ((uint32_t)(ARC_W_R(c, 10)) * (uint32_t)(ARC_W_R(c, 11)))));
  /* e6d84: mov w11, #0x1759 */
  ARC_W_W(c, 11, UINT64_C(5977));
  /* e6d88: movk w11, #0xd1b7, lsl #16 */
  ARC_W_W(c, 11, ((ARC_W_R(c, 11) & UINT64_C(18446744069414649855)) | UINT64_C(3518431232)));
  /* e6d8c: umull x11, w9, w11 */
  ARC_X_W(c, 11, (((uint64_t)(uint32_t)(ARC_W_R(c, 9))) * ((uint64_t)(uint32_t)(ARC_W_R(c, 11)))));
  /* e6d90: lsr x11, x11, #0x2d */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 11)) >> ((UINT64_C(45)) & 63)));
  /* e6d94: msub w9, w11, w12, w9 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 9)) - ((uint32_t)(ARC_W_R(c, 11)) * (uint32_t)(ARC_W_R(c, 12)))));
  /* e6d98: nop  */
  /* nop: no architectural effect here */
  /* e6d9c: adr x12, #0x58470 */
  ARC_X_W(c, 12, (arc_image_bases[1] + UINT64_C(361584)));
  /* e6da0: ldrh w8, [x12, x8, lsl #1] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 12) + ((uint64_t)(ARC_X_R(c, 8)) << 1))));
  /* e6da4: ubfx w13, w9, #2, #0xe */
  ARC_W_W(c, 13, (((uint32_t)(ARC_W_R(c, 9)) >> 2) & UINT64_C(16383)));
  /* e6da8: strh w8, [x0] */
  arc_st16(ARC_X_R(c, 0), ARC_W_R(c, 8));
  /* e6dac: mov w8, #0x147b */
  ARC_W_W(c, 8, UINT64_C(5243));
  /* e6db0: ldrh w10, [x12, x10, lsl #1] */
  ARC_W_W(c, 10, arc_ld16((ARC_X_R(c, 12) + ((uint64_t)(ARC_X_R(c, 10)) << 1))));
  /* e6db4: mul w8, w13, w8 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 13)) * (uint32_t)(ARC_W_R(c, 8))));
  /* e6db8: strh w10, [x0, #2] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(2)), ARC_W_R(c, 10));
  /* e6dbc: ldrh w10, [x12, x11, lsl #1] */
  ARC_W_W(c, 10, arc_ld16((ARC_X_R(c, 12) + ((uint64_t)(ARC_X_R(c, 11)) << 1))));
  /* e6dc0: mov w11, #0x64 */
  ARC_W_W(c, 11, UINT64_C(100));
  /* e6dc4: lsr w8, w8, #0x11 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 8)) >> ((UINT64_C(17)) & 31)));
  /* e6dc8: strh w10, [x0, #4] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(4)), ARC_W_R(c, 10));
  /* e6dcc: msub w9, w8, w11, w9 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 9)) - ((uint32_t)(ARC_W_R(c, 8)) * (uint32_t)(ARC_W_R(c, 11)))));
  /* e6dd0: ldrh w8, [x12, w8, uxtw #1] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 12) + ((uint64_t)(((uint64_t)(uint32_t)(ARC_W_R(c, 8)))) << 1))));
  /* e6dd4: strh w8, [x0, #6] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(6)), ARC_W_R(c, 8));
  /* e6dd8: and x8, x9, #0xffff */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) & UINT64_C(65535)));
  /* e6ddc: ldrh w8, [x12, x8, lsl #1] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 12) + ((uint64_t)(ARC_X_R(c, 8)) << 1))));
  /* e6de0: strh w8, [x0, #8] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 8));
L_e6de4:;
  /* e6de4: add x8, sp, #0xb */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(11)));
  /* e6de8: sub x21, x20, x8 */
  ARC_X_W(c, 21, (ARC_X_R(c, 20) - ARC_X_R(c, 8)));
  /* e6dec: mov x8, #0x3ffffffffffffff8 */
  ARC_X_W(c, 8, UINT64_C(4611686018427387896));
  /* e6df0: cmp x21, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 8));
  /* e6df4: b.hs #0xe6f0c */
  if (ARC_COND(c, 2)) goto L_e6f0c;
  /* e6df8: cmp x21, #4 */
  (void)arc_sub64(c, ARC_X_R(c, 21), UINT64_C(4));
  /* e6dfc: b.hi #0xe6e0c */
  if (ARC_COND(c, 8)) goto L_e6e0c;
  /* e6e00: lsl w8, w21, #1 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 21)) << ((UINT64_C(1)) & 31)));
  /* e6e04: strb w8, [x19], #4 */
  { const uint64_t _a = ARC_X_R(c, 19);
    ARC_X_W(c, 19, ARC_X_R(c, 19) + INT64_C(4));
    arc_st8(_a, ARC_W_R(c, 8));
  }
  /* e6e08: b #0xe6e34 */
  goto L_e6e34;
L_e6e0c:;
  /* e6e0c: orr x8, x21, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 21) | UINT64_C(1)));
  /* e6e10: mov w9, #8 */
  ARC_W_W(c, 9, UINT64_C(8));
  /* e6e14: cmp x8, #5 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(5));
  /* e6e18: csinc x22, x9, x8, eq */
  ARC_X_W(c, 22, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 8)) + 1)));
  /* e6e1c: lsl x0, x22, #2 */
  ARC_X_W(c, 0, ((uint64_t)(ARC_X_R(c, 22)) << ((UINT64_C(2)) & 63)));
  /* e6e20: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(945700));
  fn1_1428f0(c);
  /* e6e24: orr x8, x22, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 22) | UINT64_C(1)));
  /* e6e28: stp x21, x0, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 21));
    arc_st64(_pa + 8, ARC_X_R(c, 0));
  }
  /* e6e2c: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* e6e30: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
L_e6e34:;
  /* e6e34: add x8, sp, #0xb */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(11)));
  /* e6e38: cmp x8, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 20));
  /* e6e3c: b.eq #0xe6e58 */
  if (ARC_COND(c, 0)) goto L_e6e58;
  /* e6e40: cmp x21, #0x20 */
  (void)arc_sub64(c, ARC_X_R(c, 21), UINT64_C(32));
  /* e6e44: add x11, sp, #0xb */
  ARC_X_W(c, 11, ((c)->sp + UINT64_C(11)));
  /* e6e48: b.hs #0xe6e60 */
  if (ARC_COND(c, 2)) goto L_e6e60;
  /* e6e4c: mov x8, x19 */
  ARC_X_W(c, 8, ARC_X_R(c, 19));
  /* e6e50: add x9, sp, #0xb */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(11)));
  /* e6e54: b #0xe6ee0 */
  goto L_e6ee0;
L_e6e58:;
  /* e6e58: mov x8, x19 */
  ARC_X_W(c, 8, ARC_X_R(c, 19));
  /* e6e5c: b #0xe6ef0 */
  goto L_e6ef0;
L_e6e60:;
  /* e6e60: adrp x12, #0x52000 */
  ARC_X_W(c, 12, (arc_image_bases[1] + UINT64_C(335872)));
  /* e6e64: and x10, x21, #0x3fffffffffffffe0 */
  ARC_X_W(c, 10, (ARC_X_R(c, 21) & UINT64_C(4611686018427387872)));
  /* e6e68: adrp x13, #0x52000 */
  ARC_X_W(c, 13, (arc_image_bases[1] + UINT64_C(335872)));
  /* e6e6c: ldr q0, [x12, #0xb70] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 12) + INT64_C(2928))), arc_ld64((ARC_X_R(c, 12) + INT64_C(2928)) + 8));
  /* e6e70: adrp x12, #0x52000 */
  ARC_X_W(c, 12, (arc_image_bases[1] + UINT64_C(335872)));
  /* e6e74: adrp x14, #0x52000 */
  ARC_X_W(c, 14, (arc_image_bases[1] + UINT64_C(335872)));
  /* e6e78: add x8, x19, x10, lsl #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ((uint64_t)(ARC_X_R(c, 10)) << 2)));
  /* e6e7c: ldr q1, [x13, #0xd40] */
  arc_q_w(c, 1, arc_ld64((ARC_X_R(c, 13) + INT64_C(3392))), arc_ld64((ARC_X_R(c, 13) + INT64_C(3392)) + 8));
  /* e6e80: ldr q2, [x12, #0xc50] */
  arc_q_w(c, 2, arc_ld64((ARC_X_R(c, 12) + INT64_C(3152))), arc_ld64((ARC_X_R(c, 12) + INT64_C(3152)) + 8));
  /* e6e84: ldr q3, [x14, #0x940] */
  arc_q_w(c, 3, arc_ld64((ARC_X_R(c, 14) + INT64_C(2368))), arc_ld64((ARC_X_R(c, 14) + INT64_C(2368)) + 8));
  /* e6e88: add x9, x11, x10 */
  ARC_X_W(c, 9, (ARC_X_R(c, 11) + ARC_X_R(c, 10)));
  /* e6e8c: add x11, x11, #0x10 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) + UINT64_C(16)));
  /* e6e90: add x12, x19, #0x40 */
  ARC_X_W(c, 12, (ARC_X_R(c, 19) + UINT64_C(64)));
  /* e6e94: mov x13, x10 */
  ARC_X_W(c, 13, ARC_X_R(c, 10));
L_e6e98:;
  /* e6e98: ldp q4, q5, [x11, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 11) + INT64_C(-16));
    arc_q_w(c, 4, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 5, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* e6e9c: subs x13, x13, #0x20 */
  ARC_X_W(c, 13, arc_sub64(c, ARC_X_R(c, 13), UINT64_C(32)));
  /* e6ea0: add x11, x11, #0x20 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) + UINT64_C(32)));
  /* e6ea4: tbl v6.16b, {v4.16b}, v3.16b */
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
  /* e6ea8: tbl v7.16b, {v4.16b}, v2.16b */
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
  /* e6eac: tbl v16.16b, {v4.16b}, v1.16b */
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
  /* e6eb0: tbl v4.16b, {v4.16b}, v0.16b */
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
  /* e6eb4: tbl v17.16b, {v5.16b}, v3.16b */
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
  /* e6eb8: stp q7, q6, [x12, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 12) + INT64_C(-32));
    arc_st64(_pa, (c)->q[7].u64[0]);
    arc_st64(_pa + 8, (c)->q[7].u64[1]);
    arc_st64((_pa + 16), (c)->q[6].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[6].u64[1]);
  }
  /* e6ebc: tbl v6.16b, {v5.16b}, v2.16b */
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
  /* e6ec0: tbl v7.16b, {v5.16b}, v1.16b */
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
  /* e6ec4: tbl v5.16b, {v5.16b}, v0.16b */
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
  /* e6ec8: stp q4, q16, [x12, #-0x40] */
  { const uint64_t _pa = (ARC_X_R(c, 12) + INT64_C(-64));
    arc_st64(_pa, (c)->q[4].u64[0]);
    arc_st64(_pa + 8, (c)->q[4].u64[1]);
    arc_st64((_pa + 16), (c)->q[16].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[16].u64[1]);
  }
  /* e6ecc: stp q6, q17, [x12, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 12) + INT64_C(32));
    arc_st64(_pa, (c)->q[6].u64[0]);
    arc_st64(_pa + 8, (c)->q[6].u64[1]);
    arc_st64((_pa + 16), (c)->q[17].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[17].u64[1]);
  }
  /* e6ed0: stp q5, q7, [x12], #0x80 */
  { const uint64_t _pa = ARC_X_R(c, 12);
    ARC_X_W(c, 12, ARC_X_R(c, 12) + INT64_C(128));
    arc_st64(_pa, (c)->q[5].u64[0]);
    arc_st64(_pa + 8, (c)->q[5].u64[1]);
    arc_st64((_pa + 16), (c)->q[7].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[7].u64[1]);
  }
  /* e6ed4: b.ne #0xe6e98 */
  if (ARC_COND(c, 1)) goto L_e6e98;
  /* e6ed8: cmp x21, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 10));
  /* e6edc: b.eq #0xe6ef0 */
  if (ARC_COND(c, 0)) goto L_e6ef0;
L_e6ee0:;
  /* e6ee0: ldrb w10, [x9], #1 */
  { const uint64_t _a = ARC_X_R(c, 9);
    ARC_X_W(c, 9, ARC_X_R(c, 9) + INT64_C(1));
    ARC_W_W(c, 10, arc_ld8(_a));
  }
  /* e6ee4: cmp x9, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 20));
  /* e6ee8: str w10, [x8], #4 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(4));
    arc_st32(_a, ARC_W_R(c, 10));
  }
  /* e6eec: b.ne #0xe6ee0 */
  if (ARC_COND(c, 1)) goto L_e6ee0;
L_e6ef0:;
  /* e6ef0: str wzr, [x8] */
  arc_st32(ARC_X_R(c, 8), ARC_W_R(c, 31));
  /* e6ef4: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* e6ef8: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* e6efc: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e6f00: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* e6f04: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* e6f08: ret  */
  return;
L_e6f0c:;
  /* e6f0c: bl #0xe2274 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(945936));
  fn1_e2274(c);
}

void fn1_e9ab4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038885044));
  /* e9ab4: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e9ab8: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e9abc: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* e9ac0: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* e9ac4: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* e9ac8: ldr x8, [x8, #0x908] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2312))));
  /* e9acc: ldr x19, [x0, #8] */
  ARC_X_W(c, 19, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* e9ad0: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* e9ad4: sub x1, x19, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 19) - UINT64_C(8)));
  /* e9ad8: str x8, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* e9adc: mov w0, #-1 */
  ARC_W_W(c, 0, UINT64_C(18446744073709551615));
  /* e9ae0: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(957156));
  fn1_a2030(c);
  /* e9ae4: cmp w0, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(1));
  /* e9ae8: b.mi #0xe9afc */
  if (ARC_COND(c, 4)) goto L_e9afc;
  /* e9aec: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* e9af0: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e9af4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* e9af8: ret  */
  return;
L_e9afc:;
  /* e9afc: sub x0, x19, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) - UINT64_C(24)));
  /* e9b00: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* e9b04: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e9b08: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* e9b0c: b #0x1426f8 */
  fn1_1426f8(c); return;
}

void fn1_eb7e4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038892516));
  /* eb7e4: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* eb7e8: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* eb7ec: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* eb7f0: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* eb7f4: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* eb7f8: ldr x0, [x0] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 0)));
  /* eb7fc: cbz x0, #0xeb820 */
  if ((ARC_X_R(c, 0)) == 0) goto L_eb820;
  /* eb800: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* eb804: bl #0x143310 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(964616));
  fn1_143310(c);
  /* eb808: cbnz w0, #0xeb824 */
  if ((ARC_W_R(c, 0)) != 0) goto L_eb824;
  /* eb80c: str xzr, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 31));
  /* eb810: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* eb814: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* eb818: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* eb81c: ret  */
  return;
L_eb820:;
  /* eb820: mov w0, #0x16 */
  ARC_W_W(c, 0, UINT64_C(22));
L_eb824:;
  /* eb824: nop  */
  /* nop: no architectural effect here */
  /* eb828: adr x1, #0x50073 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(327795)));
  /* eb82c: bl #0x142a40 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(964656));
  fn1_142a40(c);
}

void fn1_ed4c8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038899912));
  /* ed4c8: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* ed4cc: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* ed4d0: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* ed4d4: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* ed4d8: adrp x9, #0x151000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1380352)));
  /* ed4dc: nop  */
  /* nop: no architectural effect here */
  /* ed4e0: adr x10, #0x15dc40 */
  ARC_X_W(c, 10, (arc_image_bases[1] + UINT64_C(1432640)));
  /* ed4e4: ldr x9, [x9, #0xaa8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(2728))));
  /* ed4e8: ldr x8, [x1, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 1) + INT64_C(8))));
  /* ed4ec: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* ed4f0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* ed4f4: add x9, x9, #0x10 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(16)));
  /* ed4f8: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* ed4fc: stp x9, x8, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* ed500: b.eq #0xed510 */
  if (ARC_COND(c, 0)) goto L_ed510;
  /* ed504: add x1, x8, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) + UINT64_C(8)));
  /* ed508: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* ed50c: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(972048));
  fn1_db2e0(c);
L_ed510:;
  /* ed510: ldr q0, [x20, #0x10] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 20) + INT64_C(16))), arc_ld64((ARC_X_R(c, 20) + INT64_C(16)) + 8));
  /* ed514: str q0, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)) + 8, (c)->q[0].u64[1]);
  /* ed518: ldr q0, [x20, #0x20] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 20) + INT64_C(32))), arc_ld64((ARC_X_R(c, 20) + INT64_C(32)) + 8));
  /* ed51c: str q0, [x19, #0x20] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(32)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(32)) + 8, (c)->q[0].u64[1]);
  /* ed520: ldr q0, [x20, #0x30] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 20) + INT64_C(48))), arc_ld64((ARC_X_R(c, 20) + INT64_C(48)) + 8));
  /* ed524: str q0, [x19, #0x30] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(48)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(48)) + 8, (c)->q[0].u64[1]);
  /* ed528: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* ed52c: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ed530: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* ed534: ret  */
  return;
}

void fn1_f0fa0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038914976));
  /* f0fa0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* f0fa4: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* f0fa8: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* f0fac: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* f0fb0: ldr x8, [x1] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 1)));
  /* f0fb4: str x8, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* f0fb8: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f0fbc: ldr x9, [x1, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 1) + INT64_C(8))));
  /* f0fc0: mov x1, x2 */
  ARC_X_W(c, 1, ARC_X_R(c, 2));
  /* f0fc4: str x9, [x0, x8] */
  arc_st64((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_X_R(c, 9));
  /* f0fc8: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* f0fcc: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f0fd0: add x19, x0, x8 */
  ARC_X_W(c, 19, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* f0fd4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f0fd8: bl #0x1433d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(987100));
  fn1_1433d0(c);
  /* f0fdc: mov w8, #-1 */
  ARC_W_W(c, 8, UINT64_C(18446744073709551615));
  /* f0fe0: str xzr, [x19, #0x88] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(136)), ARC_X_R(c, 31));
  /* f0fe4: str w8, [x19, #0x90] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(144)), ARC_W_R(c, 8));
  /* f0fe8: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* f0fec: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* f0ff0: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* f0ff4: ret  */
  return;
}

void fn1_f3ef8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038927096));
  /* f3ef8: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* f3efc: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* f3f00: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* f3f04: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* f3f08: adrp x9, #0x151000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1380352)));
  /* f3f0c: nop  */
  /* nop: no architectural effect here */
  /* f3f10: adr x10, #0x15dc40 */
  ARC_X_W(c, 10, (arc_image_bases[1] + UINT64_C(1432640)));
  /* f3f14: ldr x9, [x9, #0xac8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(2760))));
  /* f3f18: ldr x8, [x1, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 1) + INT64_C(8))));
  /* f3f1c: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* f3f20: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f3f24: add x9, x9, #0x10 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(16)));
  /* f3f28: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* f3f2c: stp x9, x8, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* f3f30: b.eq #0xf3f40 */
  if (ARC_COND(c, 0)) goto L_f3f40;
  /* f3f34: add x1, x8, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) + UINT64_C(8)));
  /* f3f38: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* f3f3c: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(999232));
  fn1_db2e0(c);
L_f3f40:;
  /* f3f40: ldr q0, [x20, #0x10] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 20) + INT64_C(16))), arc_ld64((ARC_X_R(c, 20) + INT64_C(16)) + 8));
  /* f3f44: str q0, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)) + 8, (c)->q[0].u64[1]);
  /* f3f48: ldr q0, [x20, #0x20] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 20) + INT64_C(32))), arc_ld64((ARC_X_R(c, 20) + INT64_C(32)) + 8));
  /* f3f4c: str q0, [x19, #0x20] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(32)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(32)) + 8, (c)->q[0].u64[1]);
  /* f3f50: ldr q0, [x20, #0x30] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 20) + INT64_C(48))), arc_ld64((ARC_X_R(c, 20) + INT64_C(48)) + 8));
  /* f3f54: str q0, [x19, #0x30] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(48)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(48)) + 8, (c)->q[0].u64[1]);
  /* f3f58: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* f3f5c: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* f3f60: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* f3f64: ret  */
  return;
}

void fn1_f79d8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038942168));
  /* f79d8: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* f79dc: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* f79e0: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* f79e4: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* f79e8: ldr x8, [x1] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 1)));
  /* f79ec: str x8, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* f79f0: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f79f4: ldr x9, [x1, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 1) + INT64_C(8))));
  /* f79f8: mov x1, x2 */
  ARC_X_W(c, 1, ARC_X_R(c, 2));
  /* f79fc: str x9, [x0, x8] */
  arc_st64((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_X_R(c, 9));
  /* f7a00: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* f7a04: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f7a08: add x19, x0, x8 */
  ARC_X_W(c, 19, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* f7a0c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f7a10: bl #0x1433d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1014292));
  fn1_1433d0(c);
  /* f7a14: mov w8, #-1 */
  ARC_W_W(c, 8, UINT64_C(18446744073709551615));
  /* f7a18: str xzr, [x19, #0x88] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(136)), ARC_X_R(c, 31));
  /* f7a1c: str w8, [x19, #0x90] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(144)), ARC_W_R(c, 8));
  /* f7a20: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* f7a24: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* f7a28: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* f7a2c: ret  */
  return;
}

void fn1_fc8d4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038962388));
  /* fc8d4: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* fc8d8: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* fc8dc: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* fc8e0: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* fc8e4: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* fc8e8: ldr x8, [x0, #0x78] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(120))));
  /* fc8ec: cbz x8, #0xfc920 */
  if ((ARC_X_R(c, 8)) == 0) goto L_fc920;
  /* fc8f0: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* fc8f4: mov x19, x2 */
  ARC_X_W(c, 19, ARC_X_R(c, 2));
  /* fc8f8: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* fc8fc: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* fc900: ldr x8, [x8, #0x30] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(48))));
  /* fc904: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1034504));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* fc908: cbnz w0, #0xfc920 */
  if ((ARC_W_R(c, 0)) != 0) goto L_fc920;
  /* fc90c: ldr x0, [x20, #0x78] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 20) + INT64_C(120))));
  /* fc910: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* fc914: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* fc918: bl #0x1437a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1034524));
  fn1_1437a8(c);
  /* fc91c: cbz w0, #0xfc940 */
  if ((ARC_W_R(c, 0)) == 0) goto L_fc940;
L_fc920:;
  /* fc920: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
  /* fc924: mov x19, #-1 */
  ARC_X_W(c, 19, UINT64_C(18446744073709551615));
L_fc928:;
  /* fc928: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* fc92c: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* fc930: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* fc934: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* fc938: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* fc93c: ret  */
  return;
L_fc940:;
  /* fc940: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* fc944: str x21, [x20, #0x88] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(136)), ARC_X_R(c, 21));
  /* fc948: b #0xfc928 */
  goto L_fc928;
}

void fn1_ff568(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038973800));
  /* ff568: bti c */
  /* bti: no architectural effect here */
  /* ff56c: cmp x3, x4 */
  (void)arc_sub64(c, ARC_X_R(c, 3), ARC_X_R(c, 4));
  /* ff570: b.eq #0xff5a4 */
  if (ARC_COND(c, 0)) goto L_ff5a4;
L_ff574:;
  /* ff574: cmp x1, x2 */
  (void)arc_sub64(c, ARC_X_R(c, 1), ARC_X_R(c, 2));
  /* ff578: b.eq #0xff5b0 */
  if (ARC_COND(c, 0)) goto L_ff5b0;
  /* ff57c: ldr w8, [x1] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 1)));
  /* ff580: ldr w9, [x3] */
  ARC_W_W(c, 9, arc_ld32(ARC_X_R(c, 3)));
  /* ff584: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* ff588: b.lo #0xff5b0 */
  if (ARC_COND(c, 3)) goto L_ff5b0;
  /* ff58c: cmp w9, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 9), ARC_W_R(c, 8));
  /* ff590: b.lo #0xff5b8 */
  if (ARC_COND(c, 3)) goto L_ff5b8;
  /* ff594: add x3, x3, #4 */
  ARC_X_W(c, 3, (ARC_X_R(c, 3) + UINT64_C(4)));
  /* ff598: add x1, x1, #4 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(4)));
  /* ff59c: cmp x3, x4 */
  (void)arc_sub64(c, ARC_X_R(c, 3), ARC_X_R(c, 4));
  /* ff5a0: b.ne #0xff574 */
  if (ARC_COND(c, 1)) goto L_ff574;
L_ff5a4:;
  /* ff5a4: cmp x1, x2 */
  (void)arc_sub64(c, ARC_X_R(c, 1), ARC_X_R(c, 2));
  /* ff5a8: cset w0, ne */
  ARC_W_W(c, 0, (ARC_COND(c, 1) ? 1 : 0));
  /* ff5ac: ret  */
  return;
L_ff5b0:;
  /* ff5b0: mov w0, #-1 */
  ARC_W_W(c, 0, UINT64_C(18446744073709551615));
  /* ff5b4: ret  */
  return;
L_ff5b8:;
  /* ff5b8: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* ff5bc: ret  */
  return;
}

void fn1_10f8a4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039040164));
  /* 10f8a4: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 10f8a8: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 10f8ac: stp x24, x23, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 10f8b0: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 10f8b4: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 10f8b8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 10f8bc: ldr x8, [x0, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_a));
  }
  /* 10f8c0: mov x20, x5 */
  ARC_X_W(c, 20, ARC_X_R(c, 5));
  /* 10f8c4: mov x21, x4 */
  ARC_X_W(c, 21, ARC_X_R(c, 4));
  /* 10f8c8: mov x22, x3 */
  ARC_X_W(c, 22, ARC_X_R(c, 3));
  /* 10f8cc: mov x23, x2 */
  ARC_X_W(c, 23, ARC_X_R(c, 2));
  /* 10f8d0: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 10f8d4: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 10f8d8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1112284));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 10f8dc: mov x24, x0 */
  ARC_X_W(c, 24, ARC_X_R(c, 0));
  /* 10f8e0: add x3, x0, #0x150 */
  ARC_X_W(c, 3, (ARC_X_R(c, 0) + UINT64_C(336)));
  /* 10f8e4: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 10f8e8: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 10f8ec: mov x2, x24 */
  ARC_X_W(c, 2, ARC_X_R(c, 24));
  /* 10f8f0: mov x4, x20 */
  ARC_X_W(c, 4, ARC_X_R(c, 20));
  /* 10f8f4: mov x5, x21 */
  ARC_X_W(c, 5, ARC_X_R(c, 21));
  /* 10f8f8: mov w6, wzr */
  ARC_W_W(c, 6, ARC_W_R(c, 31));
  /* 10f8fc: bl #0xffa98 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1112320));
  fn1_ffa98(c);
  /* 10f900: sub x8, x0, x24 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) - ARC_X_R(c, 24)));
  /* 10f904: cmp x8, #0x14f */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(335));
  /* 10f908: b.gt #0x10f948 */
  if (ARC_COND(c, 12)) goto L_10f948;
  /* 10f90c: asr x8, x8, #3 */
  ARC_X_W(c, 8, ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(3)) & 63))));
  /* 10f910: mov x9, #-0x5555555555555556 */
  ARC_X_W(c, 9, UINT64_C(12297829382473034410));
  /* 10f914: movk x9, #0xaaab */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(18446744073709486080)) | UINT64_C(43691)));
  /* 10f918: mul x8, x8, x9 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) * (uint64_t)(ARC_X_R(c, 9))));
  /* 10f91c: mov x9, #0x4925 */
  ARC_X_W(c, 9, UINT64_C(18725));
  /* 10f920: movk x9, #0x2492, lsl #16 */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(18446744069414649855)) | UINT64_C(613548032)));
  /* 10f924: movk x9, #0x9249, lsl #32 */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(18446462603027808255)) | UINT64_C(160842230267904)));
  /* 10f928: movk x9, #0x4924, lsl #48 */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(281474976710655)) | UINT64_C(5270337463930322944)));
  /* 10f92c: smulh x9, x8, x9 */
  ARC_X_W(c, 9, arc_smulh(ARC_X_R(c, 8), ARC_X_R(c, 9)));
  /* 10f930: lsr x10, x9, #0x3f */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(63)) & 63)));
  /* 10f934: lsr x9, x9, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(1)) & 63)));
  /* 10f938: add w9, w9, w10 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) + ARC_W_R(c, 10)));
  /* 10f93c: sub w9, w9, w9, lsl #3 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) - ((uint32_t)(ARC_W_R(c, 9)) << 3)));
  /* 10f940: add w8, w8, w9 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) + ARC_W_R(c, 9)));
  /* 10f944: str w8, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 8));
L_10f948:;
  /* 10f948: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 10f94c: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 10f950: ldp x24, x23, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 10f954: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 10f958: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 10f95c: ret  */
  return;
}

void fn1_113c8c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039057548));
  /* 113c8c: bti c */
  /* bti: no architectural effect here */
  /* 113c90: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 113c94: ret  */
  return;
}

void fn1_1169f4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039069172));
  /* 1169f4: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 1169f8: stp x29, x30, [sp, #-0x60]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-96));
    (c)->sp = (c)->sp + INT64_C(-96);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1169fc: stp x28, x27, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* 116a00: stp x26, x25, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* 116a04: stp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 116a08: stp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 116a0c: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 116a10: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 116a14: sub sp, sp, #0x2b0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(688)));
  /* 116a18: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 116a1c: ldr x0, [x0] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 0)));
  /* 116a20: mov x22, x7 */
  ARC_X_W(c, 22, ARC_X_R(c, 7));
  /* 116a24: mov x23, x5 */
  ARC_X_W(c, 23, ARC_X_R(c, 5));
  /* 116a28: mov x19, x3 */
  ARC_X_W(c, 19, ARC_X_R(c, 3));
  /* 116a2c: mov w26, w2 */
  ARC_W_W(c, 26, ARC_W_R(c, 2));
  /* 116a30: mov x25, x1 */
  ARC_X_W(c, 25, ARC_X_R(c, 1));
  /* 116a34: str x6, [sp, #0x40] */
  arc_st64(((c)->sp + INT64_C(64)), ARC_X_R(c, 6));
  /* 116a38: str w4, [sp, #0x4c] */
  arc_st32(((c)->sp + INT64_C(76)), ARC_W_R(c, 4));
  /* 116a3c: cbz x0, #0x116a8c */
  if ((ARC_X_R(c, 0)) == 0) goto L_116a8c;
  /* 116a40: ldp x8, x9, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 116a44: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 116a48: b.eq #0x116a74 */
  if (ARC_COND(c, 0)) goto L_116a74;
  /* 116a4c: ldr w0, [x8] */
  ARC_W_W(c, 0, arc_ld32(ARC_X_R(c, 8)));
  /* 116a50: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 116a54: b.eq #0x116a88 */
  if (ARC_COND(c, 0)) goto L_116a88;
L_116a58:;
  /* 116a58: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 116a5c: cmp x8, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(0));
  /* 116a60: cset w20, eq */
  ARC_W_W(c, 20, (ARC_COND(c, 0) ? 1 : 0));
  /* 116a64: cbnz x25, #0x116a94 */
  if ((ARC_X_R(c, 25)) != 0) goto L_116a94;
L_116a68:;
  /* 116a68: tbnz w20, #0, #0x116b94 */
  if (((ARC_W_R(c, 20)) >> 0 & 1) != 0) goto L_116b94;
  /* 116a6c: mov x25, xzr */
  ARC_X_W(c, 25, ARC_X_R(c, 31));
  /* 116a70: b #0x116acc */
  goto L_116acc;
L_116a74:;
  /* 116a74: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 116a78: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 116a7c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1141376));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 116a80: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 116a84: b.ne #0x116a58 */
  if (ARC_COND(c, 1)) goto L_116a58;
L_116a88:;
  /* 116a88: str xzr, [x21] */
  arc_st64(ARC_X_R(c, 21), ARC_X_R(c, 31));
L_116a8c:;
  /* 116a8c: mov w20, #1 */
  ARC_W_W(c, 20, UINT64_C(1));
  /* 116a90: cbz x25, #0x116a68 */
  if ((ARC_X_R(c, 25)) == 0) goto L_116a68;
L_116a94:;
  /* 116a94: ldp x8, x9, [x25, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 25) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 116a98: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 116a9c: b.eq #0x116aa8 */
  if (ARC_COND(c, 0)) goto L_116aa8;
  /* 116aa0: ldr w0, [x8] */
  ARC_W_W(c, 0, arc_ld32(ARC_X_R(c, 8)));
  /* 116aa4: b #0x116ab8 */
  goto L_116ab8;
L_116aa8:;
  /* 116aa8: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 116aac: mov x0, x25 */
  ARC_X_W(c, 0, ARC_X_R(c, 25));
  /* 116ab0: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 116ab4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1141432));
  arc_dispatch(c, ARC_X_R(c, 8));
L_116ab8:;
  /* 116ab8: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 116abc: cset w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? 1 : 0));
  /* 116ac0: csel x25, xzr, x25, eq */
  ARC_X_W(c, 25, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 25)));
  /* 116ac4: eor w8, w20, w8 */
  ARC_W_W(c, 8, (ARC_W_R(c, 20) ^ ARC_W_R(c, 8)));
  /* 116ac8: tbz w8, #0, #0x116b94 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_116b94;
L_116acc:;
  /* 116acc: str x23, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 23));
  /* 116ad0: stp xzr, xzr, [sp, #0xf0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(240));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 116ad4: str xzr, [sp, #0x100] */
  arc_st64(((c)->sp + INT64_C(256)), ARC_X_R(c, 31));
  /* 116ad8: stp xzr, xzr, [sp, #0xd8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(216));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 116adc: str xzr, [sp, #0xe8] */
  arc_st64(((c)->sp + INT64_C(232)), ARC_X_R(c, 31));
  /* 116ae0: stp xzr, xzr, [sp, #0xc0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(192));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 116ae4: str xzr, [sp, #0xd0] */
  arc_st64(((c)->sp + INT64_C(208)), ARC_X_R(c, 31));
  /* 116ae8: stp xzr, xzr, [sp, #0xa8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(168));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 116aec: str xzr, [sp, #0xb8] */
  arc_st64(((c)->sp + INT64_C(184)), ARC_X_R(c, 31));
  /* 116af0: stp xzr, xzr, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 116af4: str xzr, [sp, #0xa0] */
  arc_st64(((c)->sp + INT64_C(160)), ARC_X_R(c, 31));
  /* 116af8: add x8, sp, #0x8c */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(140)));
  /* 116afc: add x27, sp, #0xa8 */
  ARC_X_W(c, 27, ((c)->sp + UINT64_C(168)));
  /* 116b00: and w0, w26, #1 */
  ARC_W_W(c, 0, (ARC_W_R(c, 26) & UINT64_C(1)));
  /* 116b04: add x2, sp, #0x114 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(276)));
  /* 116b08: add x3, sp, #0x110 */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(272)));
  /* 116b0c: add x4, sp, #0x10c */
  ARC_X_W(c, 4, ((c)->sp + UINT64_C(268)));
  /* 116b10: add x5, sp, #0xf0 */
  ARC_X_W(c, 5, ((c)->sp + UINT64_C(240)));
  /* 116b14: add x6, sp, #0xd8 */
  ARC_X_W(c, 6, ((c)->sp + UINT64_C(216)));
  /* 116b18: add x7, sp, #0xc0 */
  ARC_X_W(c, 7, ((c)->sp + UINT64_C(192)));
  /* 116b1c: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 116b20: stp x27, x8, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 27));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* 116b24: add x19, sp, #0xd8 */
  ARC_X_W(c, 19, ((c)->sp + UINT64_C(216)));
  /* 116b28: add x26, sp, #0xc0 */
  ARC_X_W(c, 26, ((c)->sp + UINT64_C(192)));
  /* 116b2c: bl #0x143a48 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1141552));
  fn1_143a48(c);
  /* 116b30: ldp x8, x23, [x29, #0x60] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(96));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 116b34: orr x9, x19, #4 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) | UINT64_C(4)));
  /* 116b38: orr x10, x26, #4 */
  ARC_X_W(c, 10, (ARC_X_R(c, 26) | UINT64_C(4)));
  /* 116b3c: ldr x11, [x29, #0x70] */
  ARC_X_W(c, 11, arc_ld64((ARC_X_R(c, 29) + INT64_C(112))));
  /* 116b40: add x28, sp, #0x118 */
  ARC_X_W(c, 28, ((c)->sp + UINT64_C(280)));
  /* 116b44: str x9, [sp, #0x58] */
  arc_st64(((c)->sp + INT64_C(88)), ARC_X_R(c, 9));
  /* 116b48: add x9, sp, #0x90 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(144)));
  /* 116b4c: mov x20, xzr */
  ARC_X_W(c, 20, ARC_X_R(c, 31));
  /* 116b50: str x8, [sp, #0x68] */
  arc_st64(((c)->sp + INT64_C(104)), ARC_X_R(c, 8));
  /* 116b54: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 116b58: orr x9, x9, #4 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) | UINT64_C(4)));
  /* 116b5c: str x10, [sp, #0x30] */
  arc_st64(((c)->sp + INT64_C(48)), ARC_X_R(c, 10));
  /* 116b60: orr x10, x27, #4 */
  ARC_X_W(c, 10, (ARC_X_R(c, 27) | UINT64_C(4)));
  /* 116b64: mov x24, xzr */
  ARC_X_W(c, 24, ARC_X_R(c, 31));
  /* 116b68: str x10, [sp, #0x18] */
  arc_st64(((c)->sp + INT64_C(24)), ARC_X_R(c, 10));
  /* 116b6c: add x10, x28, #0x190 */
  ARC_X_W(c, 10, (ARC_X_R(c, 28) + UINT64_C(400)));
  /* 116b70: stp x10, x11, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 10));
    arc_st64(_pa + 8, ARC_X_R(c, 11));
  }
  /* 116b74: str x9, [sp, #0x28] */
  arc_st64(((c)->sp + INT64_C(40)), ARC_X_R(c, 9));
  /* 116b78: str x8, [x23] */
  arc_st64(ARC_X_R(c, 23), ARC_X_R(c, 8));
  /* 116b7c: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 116b80: ldr x8, [x8, #0xbc8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3016))));
  /* 116b84: str x8, [sp, #0x60] */
  arc_st64(((c)->sp + INT64_C(96)), ARC_X_R(c, 8));
  /* 116b88: add x8, sp, #0x118 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(280)));
  /* 116b8c: str x8, [sp, #0x80] */
  arc_st64(((c)->sp + INT64_C(128)), ARC_X_R(c, 8));
  /* 116b90: b #0x116bd0 */
  goto L_116bd0;
L_116b94:;
  /* 116b94: ldr w8, [x23] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 23)));
  /* 116b98: mov w21, wzr */
  ARC_W_W(c, 21, ARC_W_R(c, 31));
  /* 116b9c: orr w8, w8, #4 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | UINT64_C(4)));
  /* 116ba0: str w8, [x23] */
  arc_st32(ARC_X_R(c, 23), ARC_W_R(c, 8));
  /* 116ba4: b #0x117c14 */
  goto L_117c14;
L_116ba8:;
  /* 116ba8: ldr x9, [sp, #0x68] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(104))));
  /* 116bac: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 116bb0: str x25, [sp, #0x78] */
  arc_st64(((c)->sp + INT64_C(120)), ARC_X_R(c, 25));
  /* 116bb4: mov x25, x26 */
  ARC_X_W(c, 25, ARC_X_R(c, 26));
  /* 116bb8: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* 116bbc: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 116bc0: b.eq #0x117bbc */
  if (ARC_COND(c, 0)) goto L_117bbc;
L_116bc4:;
  /* 116bc4: add x20, x20, #1 */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) + UINT64_C(1)));
  /* 116bc8: cmp x20, #4 */
  (void)arc_sub64(c, ARC_X_R(c, 20), UINT64_C(4));
  /* 116bcc: b.eq #0x117968 */
  if (ARC_COND(c, 0)) goto L_117968;
L_116bd0:;
  /* 116bd0: ldr x0, [x21] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 21)));
  /* 116bd4: cbz x0, #0x116c1c */
  if ((ARC_X_R(c, 0)) == 0) goto L_116c1c;
  /* 116bd8: ldp x8, x9, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 116bdc: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 116be0: b.eq #0x116bec */
  if (ARC_COND(c, 0)) goto L_116bec;
  /* 116be4: ldr w0, [x8] */
  ARC_W_W(c, 0, arc_ld32(ARC_X_R(c, 8)));
  /* 116be8: b #0x116bf8 */
  goto L_116bf8;
L_116bec:;
  /* 116bec: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 116bf0: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 116bf4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1141752));
  arc_dispatch(c, ARC_X_R(c, 8));
L_116bf8:;
  /* 116bf8: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 116bfc: b.eq #0x116c18 */
  if (ARC_COND(c, 0)) goto L_116c18;
  /* 116c00: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 116c04: cmp x8, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(0));
  /* 116c08: cset w19, eq */
  ARC_W_W(c, 19, (ARC_COND(c, 0) ? 1 : 0));
  /* 116c0c: cbnz x25, #0x116c24 */
  if ((ARC_X_R(c, 25)) != 0) goto L_116c24;
L_116c10:;
  /* 116c10: tbz w19, #0, #0x116c5c */
  if (((ARC_W_R(c, 19)) >> 0 & 1) == 0) goto L_116c5c;
  /* 116c14: b #0x117968 */
  goto L_117968;
L_116c18:;
  /* 116c18: str xzr, [x21] */
  arc_st64(ARC_X_R(c, 21), ARC_X_R(c, 31));
L_116c1c:;
  /* 116c1c: mov w19, #1 */
  ARC_W_W(c, 19, UINT64_C(1));
  /* 116c20: cbz x25, #0x116c10 */
  if ((ARC_X_R(c, 25)) == 0) goto L_116c10;
L_116c24:;
  /* 116c24: ldp x8, x9, [x25, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 25) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 116c28: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 116c2c: b.eq #0x116c38 */
  if (ARC_COND(c, 0)) goto L_116c38;
  /* 116c30: ldr w0, [x8] */
  ARC_W_W(c, 0, arc_ld32(ARC_X_R(c, 8)));
  /* 116c34: b #0x116c48 */
  goto L_116c48;
L_116c38:;
  /* 116c38: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 116c3c: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 116c40: mov x0, x25 */
  ARC_X_W(c, 0, ARC_X_R(c, 25));
  /* 116c44: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1141832));
  arc_dispatch(c, ARC_X_R(c, 8));
L_116c48:;
  /* 116c48: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 116c4c: cset w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? 1 : 0));
  /* 116c50: csel x25, xzr, x25, eq */
  ARC_X_W(c, 25, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 25)));
  /* 116c54: eor w8, w19, w8 */
  ARC_W_W(c, 8, (ARC_W_R(c, 19) ^ ARC_W_R(c, 8)));
  /* 116c58: tbz w8, #0, #0x117968 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_117968;
L_116c5c:;
  /* 116c5c: add x8, sp, #0x114 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(276)));
  /* 116c60: ldrb w8, [x8, x20] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 8) + ARC_X_R(c, 20))));
  /* 116c64: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* 116c68: b.le #0x116ee0 */
  if (ARC_COND(c, 13)) goto L_116ee0;
  /* 116c6c: cmp w8, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(2));
  /* 116c70: b.eq #0x116f0c */
  if (ARC_COND(c, 0)) goto L_116f0c;
  /* 116c74: cmp w8, #3 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(3));
  /* 116c78: b.eq #0x116f3c */
  if (ARC_COND(c, 0)) goto L_116f3c;
  /* 116c7c: cmp w8, #4 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(4));
  /* 116c80: b.ne #0x116bc4 */
  if (ARC_COND(c, 1)) goto L_116bc4;
  /* 116c84: mov w19, wzr */
  ARC_W_W(c, 19, ARC_W_R(c, 31));
  /* 116c88: str x24, [sp, #0x50] */
  arc_st64(((c)->sp + INT64_C(80)), ARC_X_R(c, 24));
  /* 116c8c: b #0x116c98 */
  goto L_116c98;
L_116c90:;
  /* 116c90: add x8, x8, #4 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(4)));
  /* 116c94: str x8, [x0, #0x18] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(24)), ARC_X_R(c, 8));
L_116c98:;
  /* 116c98: ldr x0, [x21] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 21)));
  /* 116c9c: cbz x0, #0x116cec */
  if ((ARC_X_R(c, 0)) == 0) goto L_116cec;
  /* 116ca0: ldp x8, x9, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 116ca4: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 116ca8: b.eq #0x116cb4 */
  if (ARC_COND(c, 0)) goto L_116cb4;
  /* 116cac: ldr w0, [x8] */
  ARC_W_W(c, 0, arc_ld32(ARC_X_R(c, 8)));
  /* 116cb0: b #0x116cc0 */
  goto L_116cc0;
L_116cb4:;
  /* 116cb4: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 116cb8: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 116cbc: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1141952));
  arc_dispatch(c, ARC_X_R(c, 8));
L_116cc0:;
  /* 116cc0: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 116cc4: b.eq #0x116ce4 */
  if (ARC_COND(c, 0)) goto L_116ce4;
  /* 116cc8: ldr x0, [x21] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 21)));
  /* 116ccc: cmp x0, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 0), UINT64_C(0));
  /* 116cd0: cset w24, eq */
  ARC_W_W(c, 24, (ARC_COND(c, 0) ? 1 : 0));
  /* 116cd4: cbnz x25, #0x116cf4 */
  if ((ARC_X_R(c, 25)) != 0) goto L_116cf4;
L_116cd8:;
  /* 116cd8: mov x26, xzr */
  ARC_X_W(c, 26, ARC_X_R(c, 31));
  /* 116cdc: tbz w24, #0, #0x116d30 */
  if (((ARC_W_R(c, 24)) >> 0 & 1) == 0) goto L_116d30;
  /* 116ce0: b #0x116f7c */
  goto L_116f7c;
L_116ce4:;
  /* 116ce4: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
  /* 116ce8: str xzr, [x21] */
  arc_st64(ARC_X_R(c, 21), ARC_X_R(c, 31));
L_116cec:;
  /* 116cec: mov w24, #1 */
  ARC_W_W(c, 24, UINT64_C(1));
  /* 116cf0: cbz x25, #0x116cd8 */
  if ((ARC_X_R(c, 25)) == 0) goto L_116cd8;
L_116cf4:;
  /* 116cf4: ldp x8, x9, [x25, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 25) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 116cf8: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 116cfc: b.eq #0x116d08 */
  if (ARC_COND(c, 0)) goto L_116d08;
  /* 116d00: ldr w0, [x8] */
  ARC_W_W(c, 0, arc_ld32(ARC_X_R(c, 8)));
  /* 116d04: b #0x116d18 */
  goto L_116d18;
L_116d08:;
  /* 116d08: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 116d0c: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 116d10: mov x0, x25 */
  ARC_X_W(c, 0, ARC_X_R(c, 25));
  /* 116d14: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1142040));
  arc_dispatch(c, ARC_X_R(c, 8));
L_116d18:;
  /* 116d18: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 116d1c: cset w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? 1 : 0));
  /* 116d20: csel x25, xzr, x25, eq */
  ARC_X_W(c, 25, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 25)));
  /* 116d24: cmp w24, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 24), ARC_W_R(c, 8));
  /* 116d28: b.eq #0x116f78 */
  if (ARC_COND(c, 0)) goto L_116f78;
  /* 116d2c: ldr x0, [x21] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 21)));
L_116d30:;
  /* 116d30: ldp x8, x9, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 116d34: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 116d38: b.eq #0x116d44 */
  if (ARC_COND(c, 0)) goto L_116d44;
  /* 116d3c: ldr w26, [x8] */
  ARC_W_W(c, 26, arc_ld32(ARC_X_R(c, 8)));
  /* 116d40: b #0x116d54 */
  goto L_116d54;
L_116d44:;
  /* 116d44: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 116d48: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 116d4c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1142096));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 116d50: mov w26, w0 */
  ARC_W_W(c, 26, ARC_W_R(c, 0));
L_116d54:;
  /* 116d54: ldr x8, [x22] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 22)));
  /* 116d58: ldr x8, [x8, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(24))));
  /* 116d5c: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 116d60: mov w1, #0x40 */
  ARC_W_W(c, 1, UINT64_C(64));
  /* 116d64: mov w2, w26 */
  ARC_W_W(c, 2, ARC_W_R(c, 26));
  /* 116d68: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1142124));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 116d6c: tbz w0, #0, #0x116dc4 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_116dc4;
  /* 116d70: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 116d74: ldr x10, [sp, #0x78] */
  ARC_X_W(c, 10, arc_ld64(((c)->sp + INT64_C(120))));
  /* 116d78: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* 116d7c: b.ne #0x116e78 */
  if (ARC_COND(c, 1)) goto L_116e78;
  /* 116d80: ldr x9, [sp, #0x68] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(104))));
  /* 116d84: ldp x0, x9, [x9] */
  { const uint64_t _pa = ARC_X_R(c, 9);
    ARC_X_W(c, 0, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 116d88: subs x24, x10, x0 */
  ARC_X_W(c, 24, arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 0)));
  /* 116d8c: mov w10, #4 */
  ARC_W_W(c, 10, UINT64_C(4));
  /* 116d90: lsl x8, x24, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 24)) << ((UINT64_C(1)) & 63)));
  /* 116d94: csel x8, x10, x8, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 8)));
  /* 116d98: mov x10, #0x7fffffffffffffff */
  ARC_X_W(c, 10, UINT64_C(9223372036854775807));
  /* 116d9c: cmp x24, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 24), ARC_X_R(c, 10));
  /* 116da0: csinv x27, x8, xzr, lo */
  ARC_X_W(c, 27, (ARC_COND(c, 3) ? (ARC_X_R(c, 8)) : (~(uint64_t)(ARC_X_R(c, 31)))));
  /* 116da4: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 116da8: ldr x8, [x8, #0xbc8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3016))));
  /* 116dac: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* 116db0: b.eq #0x116e40 */
  if (ARC_COND(c, 0)) goto L_116e40;
  /* 116db4: mov x1, x27 */
  ARC_X_W(c, 1, ARC_X_R(c, 27));
  /* 116db8: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1142204));
  fn1_142878(c);
  /* 116dbc: cbnz x0, #0x116e4c */
  if ((ARC_X_R(c, 0)) != 0) goto L_116e4c;
  /* 116dc0: b #0x117cb0 */
  goto L_117cb0;
L_116dc4:;
  /* 116dc4: ldrb w8, [sp, #0xf0] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(240))));
  /* 116dc8: ldr x9, [sp, #0xf8] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(248))));
  /* 116dcc: lsr x10, x8, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* 116dd0: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 116dd4: csel x8, x10, x9, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* 116dd8: cbz x8, #0x116f78 */
  if ((ARC_X_R(c, 8)) == 0) goto L_116f78;
  /* 116ddc: cbz w19, #0x116f78 */
  if ((ARC_W_R(c, 19)) == 0) goto L_116f78;
  /* 116de0: ldr w8, [sp, #0x10c] */
  ARC_W_W(c, 8, arc_ld32(((c)->sp + INT64_C(268))));
  /* 116de4: cmp w26, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 26), ARC_W_R(c, 8));
  /* 116de8: b.ne #0x116f78 */
  if (ARC_COND(c, 1)) goto L_116f78;
  /* 116dec: ldr x9, [sp, #0x80] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(128))));
  /* 116df0: ldr x8, [sp, #0x70] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(112))));
  /* 116df4: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* 116df8: b.ne #0x116eb4 */
  if (ARC_COND(c, 1)) goto L_116eb4;
  /* 116dfc: subs x24, x8, x28 */
  ARC_X_W(c, 24, arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 28)));
  /* 116e00: mov w9, #4 */
  ARC_W_W(c, 9, UINT64_C(4));
  /* 116e04: lsl x8, x24, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 24)) << ((UINT64_C(1)) & 63)));
  /* 116e08: csel x8, x9, x8, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* 116e0c: mov x9, #0x7fffffffffffffff */
  ARC_X_W(c, 9, UINT64_C(9223372036854775807));
  /* 116e10: cmp x24, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 24), ARC_X_R(c, 9));
  /* 116e14: adrp x9, #0x151000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 116e18: csinv x26, x8, xzr, lo */
  ARC_X_W(c, 26, (ARC_COND(c, 3) ? (ARC_X_R(c, 8)) : (~(uint64_t)(ARC_X_R(c, 31)))));
  /* 116e1c: ldr x8, [sp, #0x60] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(96))));
  /* 116e20: ldr x9, [x9, #0xbc8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(3016))));
  /* 116e24: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 116e28: b.eq #0x116e88 */
  if (ARC_COND(c, 0)) goto L_116e88;
  /* 116e2c: mov x0, x28 */
  ARC_X_W(c, 0, ARC_X_R(c, 28));
  /* 116e30: mov x1, x26 */
  ARC_X_W(c, 1, ARC_X_R(c, 26));
  /* 116e34: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1142328));
  fn1_142878(c);
  /* 116e38: cbnz x0, #0x116e94 */
  if ((ARC_X_R(c, 0)) != 0) goto L_116e94;
  /* 116e3c: b #0x117cb8 */
  goto L_117cb8;
L_116e40:;
  /* 116e40: mov x0, x27 */
  ARC_X_W(c, 0, ARC_X_R(c, 27));
  /* 116e44: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1142344));
  fn1_1428a8(c);
  /* 116e48: cbz x0, #0x117cb0 */
  if ((ARC_X_R(c, 0)) == 0) goto L_117cb0;
L_116e4c:;
  /* 116e4c: ldr x11, [sp, #0x68] */
  ARC_X_W(c, 11, arc_ld64(((c)->sp + INT64_C(104))));
  /* 116e50: add x8, x0, x24 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + ARC_X_R(c, 24)));
  /* 116e54: adrp x12, #0x151000 */
  ARC_X_W(c, 12, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 116e58: and x10, x27, #0xfffffffffffffffc */
  ARC_X_W(c, 10, (ARC_X_R(c, 27) & UINT64_C(18446744073709551612)));
  /* 116e5c: str x0, [x11] */
  arc_st64(ARC_X_R(c, 11), ARC_X_R(c, 0));
  /* 116e60: str x8, [x23] */
  arc_st64(ARC_X_R(c, 23), ARC_X_R(c, 8));
  /* 116e64: ldr x9, [x11] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 11)));
  /* 116e68: ldr x12, [x12, #0x9a0] */
  ARC_X_W(c, 12, arc_ld64((ARC_X_R(c, 12) + INT64_C(2464))));
  /* 116e6c: add x9, x9, x10 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + ARC_X_R(c, 10)));
  /* 116e70: str x12, [x11, #8] */
  arc_st64((ARC_X_R(c, 11) + INT64_C(8)), ARC_X_R(c, 12));
  /* 116e74: str x9, [sp, #0x78] */
  arc_st64(((c)->sp + INT64_C(120)), ARC_X_R(c, 9));
L_116e78:;
  /* 116e78: str w26, [x8], #4 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(4));
    arc_st32(_a, ARC_W_R(c, 26));
  }
  /* 116e7c: add w19, w19, #1 */
  ARC_W_W(c, 19, (ARC_W_R(c, 19) + UINT64_C(1)));
  /* 116e80: str x8, [x23] */
  arc_st64(ARC_X_R(c, 23), ARC_X_R(c, 8));
  /* 116e84: b #0x116ec0 */
  goto L_116ec0;
L_116e88:;
  /* 116e88: mov x0, x26 */
  ARC_X_W(c, 0, ARC_X_R(c, 26));
  /* 116e8c: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1142416));
  fn1_1428a8(c);
  /* 116e90: cbz x0, #0x117cb8 */
  if ((ARC_X_R(c, 0)) == 0) goto L_117cb8;
L_116e94:;
  /* 116e94: and x8, x26, #0xfffffffffffffffc */
  ARC_X_W(c, 8, (ARC_X_R(c, 26) & UINT64_C(18446744073709551612)));
  /* 116e98: mov x28, x0 */
  ARC_X_W(c, 28, ARC_X_R(c, 0));
  /* 116e9c: add x9, x0, x24 */
  ARC_X_W(c, 9, (ARC_X_R(c, 0) + ARC_X_R(c, 24)));
  /* 116ea0: add x8, x0, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* 116ea4: str x8, [sp, #0x70] */
  arc_st64(((c)->sp + INT64_C(112)), ARC_X_R(c, 8));
  /* 116ea8: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 116eac: ldr x8, [x8, #0x9a0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2464))));
  /* 116eb0: str x8, [sp, #0x60] */
  arc_st64(((c)->sp + INT64_C(96)), ARC_X_R(c, 8));
L_116eb4:;
  /* 116eb4: str w19, [x9], #4 */
  { const uint64_t _a = ARC_X_R(c, 9);
    ARC_X_W(c, 9, ARC_X_R(c, 9) + INT64_C(4));
    arc_st32(_a, ARC_W_R(c, 19));
  }
  /* 116eb8: mov w19, wzr */
  ARC_W_W(c, 19, ARC_W_R(c, 31));
  /* 116ebc: str x9, [sp, #0x80] */
  arc_st64(((c)->sp + INT64_C(128)), ARC_X_R(c, 9));
L_116ec0:;
  /* 116ec0: ldr x0, [x21] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 21)));
  /* 116ec4: ldp x8, x9, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 116ec8: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 116ecc: b.ne #0x116c90 */
  if (ARC_COND(c, 1)) goto L_116c90;
  /* 116ed0: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 116ed4: ldr x8, [x8, #0x50] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(80))));
  /* 116ed8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1142492));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 116edc: b #0x116c98 */
  goto L_116c98;
L_116ee0:;
  /* 116ee0: cbz w8, #0x116f6c */
  if ((ARC_W_R(c, 8)) == 0) goto L_116f6c;
  /* 116ee4: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* 116ee8: b.ne #0x116bc4 */
  if (ARC_COND(c, 1)) goto L_116bc4;
  /* 116eec: cmp x20, #3 */
  (void)arc_sub64(c, ARC_X_R(c, 20), UINT64_C(3));
  /* 116ef0: b.eq #0x117968 */
  if (ARC_COND(c, 0)) goto L_117968;
  /* 116ef4: ldr x0, [x21] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 21)));
  /* 116ef8: ldp x8, x9, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 116efc: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 116f00: b.eq #0x11700c */
  if (ARC_COND(c, 0)) goto L_11700c;
  /* 116f04: ldr w2, [x8] */
  ARC_W_W(c, 2, arc_ld32(ARC_X_R(c, 8)));
  /* 116f08: b #0x11701c */
  goto L_11701c;
L_116f0c:;
  /* 116f0c: cbnz x24, #0x116fe4 */
  if ((ARC_X_R(c, 24)) != 0) goto L_116fe4;
  /* 116f10: cmp x20, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 20), UINT64_C(2));
  /* 116f14: b.lo #0x116fe4 */
  if (ARC_COND(c, 3)) goto L_116fe4;
  /* 116f18: ldrb w8, [sp, #0x117] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(279))));
  /* 116f1c: ldr w9, [sp, #0x4c] */
  ARC_W_W(c, 9, arc_ld32(((c)->sp + INT64_C(76))));
  /* 116f20: tst w8, #0xff */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(255)));
  /* 116f24: ccmp x20, #2, #0, ne */
  if (ARC_COND(c, 1)) { (void)arc_sub64(c, ARC_X_R(c, 20), UINT64_C(2)); }
  else { (c)->nf = 0; (c)->zf = 0;
          (c)->cf = 0; (c)->vf = 0; }
  /* 116f28: cset w8, ne */
  ARC_W_W(c, 8, (ARC_COND(c, 1) ? 1 : 0));
  /* 116f2c: tbnz w9, #9, #0x1170b8 */
  if (((ARC_W_R(c, 9)) >> 9 & 1) != 0) goto L_1170b8;
  /* 116f30: tbz w8, #0, #0x1170b8 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1170b8;
  /* 116f34: mov x24, xzr */
  ARC_X_W(c, 24, ARC_X_R(c, 31));
  /* 116f38: b #0x116bc4 */
  goto L_116bc4;
L_116f3c:;
  /* 116f3c: ldrb w8, [sp, #0xc0] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(192))));
  /* 116f40: ldr x10, [sp, #0xc8] */
  ARC_X_W(c, 10, arc_ld64(((c)->sp + INT64_C(200))));
  /* 116f44: lsr x11, x8, #1 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* 116f48: ands w9, w8, #1 */
  { uint32_t _r = (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1));
    arc_flags_logical32(c, _r);
    ARC_W_W(c, 9, _r); }
  /* 116f4c: csel x10, x11, x10, eq */
  ARC_X_W(c, 10, (ARC_COND(c, 0) ? (ARC_X_R(c, 11)) : ARC_X_R(c, 10)));
  /* 116f50: cbz x10, #0x1171b4 */
  if ((ARC_X_R(c, 10)) == 0) goto L_1171b4;
  /* 116f54: ldr x0, [x21] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 21)));
  /* 116f58: ldp x10, x11, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    ARC_X_W(c, 10, arc_ld64(_pa));
    ARC_X_W(c, 11, arc_ld64(_pa + 8));
  }
  /* 116f5c: cmp x10, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 11));
  /* 116f60: b.eq #0x117168 */
  if (ARC_COND(c, 0)) goto L_117168;
  /* 116f64: ldr w0, [x10] */
  ARC_W_W(c, 0, arc_ld32(ARC_X_R(c, 10)));
  /* 116f68: b #0x11717c */
  goto L_11717c;
L_116f6c:;
  /* 116f6c: cmp x20, #3 */
  (void)arc_sub64(c, ARC_X_R(c, 20), UINT64_C(3));
  /* 116f70: b.ne #0x117800 */
  if (ARC_COND(c, 1)) goto L_117800;
  /* 116f74: b #0x117968 */
  goto L_117968;
L_116f78:;
  /* 116f78: mov x26, x25 */
  ARC_X_W(c, 26, ARC_X_R(c, 25));
L_116f7c:;
  /* 116f7c: ldr x9, [sp, #0x80] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(128))));
  /* 116f80: cmp x28, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 28), ARC_X_R(c, 9));
  /* 116f84: b.eq #0x11715c */
  if (ARC_COND(c, 0)) goto L_11715c;
  /* 116f88: ldr x24, [sp, #0x50] */
  ARC_X_W(c, 24, arc_ld64(((c)->sp + INT64_C(80))));
  /* 116f8c: ldr x25, [sp, #0x78] */
  ARC_X_W(c, 25, arc_ld64(((c)->sp + INT64_C(120))));
  /* 116f90: cbz w19, #0x117504 */
  if ((ARC_W_R(c, 19)) == 0) goto L_117504;
  /* 116f94: ldr x8, [sp, #0x70] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(112))));
  /* 116f98: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* 116f9c: b.ne #0x117500 */
  if (ARC_COND(c, 1)) goto L_117500;
  /* 116fa0: subs x24, x8, x28 */
  ARC_X_W(c, 24, arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 28)));
  /* 116fa4: mov w9, #4 */
  ARC_W_W(c, 9, UINT64_C(4));
  /* 116fa8: lsl x8, x24, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 24)) << ((UINT64_C(1)) & 63)));
  /* 116fac: csel x8, x9, x8, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* 116fb0: mov x9, #0x7fffffffffffffff */
  ARC_X_W(c, 9, UINT64_C(9223372036854775807));
  /* 116fb4: cmp x24, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 24), ARC_X_R(c, 9));
  /* 116fb8: adrp x9, #0x151000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 116fbc: csinv x25, x8, xzr, lo */
  ARC_X_W(c, 25, (ARC_COND(c, 3) ? (ARC_X_R(c, 8)) : (~(uint64_t)(ARC_X_R(c, 31)))));
  /* 116fc0: ldr x8, [sp, #0x60] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(96))));
  /* 116fc4: ldr x9, [x9, #0xbc8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(3016))));
  /* 116fc8: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 116fcc: b.eq #0x1174cc */
  if (ARC_COND(c, 0)) goto L_1174cc;
  /* 116fd0: mov x0, x28 */
  ARC_X_W(c, 0, ARC_X_R(c, 28));
  /* 116fd4: mov x1, x25 */
  ARC_X_W(c, 1, ARC_X_R(c, 25));
  /* 116fd8: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1142748));
  fn1_142878(c);
  /* 116fdc: cbnz x0, #0x1174d8 */
  if ((ARC_X_R(c, 0)) != 0) goto L_1174d8;
  /* 116fe0: b #0x117cc8 */
  goto L_117cc8;
L_116fe4:;
  /* 116fe4: ldrb w19, [sp, #0xd8] */
  ARC_W_W(c, 19, arc_ld8(((c)->sp + INT64_C(216))));
  /* 116fe8: ldr x27, [sp, #0xe8] */
  ARC_X_W(c, 27, arc_ld64(((c)->sp + INT64_C(232))));
  /* 116fec: ldr x8, [sp, #0x58] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(88))));
  /* 116ff0: str x24, [sp, #0x50] */
  arc_st64(((c)->sp + INT64_C(80)), ARC_X_R(c, 24));
  /* 116ff4: ands w24, w19, #1 */
  { uint32_t _r = (uint32_t)(ARC_W_R(c, 19) & UINT64_C(1));
    arc_flags_logical32(c, _r);
    ARC_W_W(c, 24, _r); }
  /* 116ff8: str x28, [sp, #0x38] */
  arc_st64(((c)->sp + INT64_C(56)), ARC_X_R(c, 28));
  /* 116ffc: csel x26, x8, x27, eq */
  ARC_X_W(c, 26, (ARC_COND(c, 0) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 27)));
  /* 117000: mov x28, x26 */
  ARC_X_W(c, 28, ARC_X_R(c, 26));
  /* 117004: cbnz x20, #0x1170d4 */
  if ((ARC_X_R(c, 20)) != 0) goto L_1170d4;
  /* 117008: b #0x117310 */
  goto L_117310;
L_11700c:;
  /* 11700c: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 117010: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 117014: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1142808));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 117018: mov w2, w0 */
  ARC_W_W(c, 2, ARC_W_R(c, 0));
L_11701c:;
  /* 11701c: ldr x8, [x22] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 22)));
  /* 117020: ldr x8, [x8, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(24))));
  /* 117024: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 117028: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* 11702c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1142832));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 117030: tbz w0, #0, #0x117bbc */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_117bbc;
  /* 117034: ldr x0, [x21] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 21)));
  /* 117038: ldp x8, x9, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 11703c: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 117040: b.eq #0x117064 */
  if (ARC_COND(c, 0)) goto L_117064;
  /* 117044: ldr w26, [x8], #4 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(4));
    ARC_W_W(c, 26, arc_ld32(_a));
  }
  /* 117048: str x8, [x0, #0x18] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(24)), ARC_X_R(c, 8));
  /* 11704c: ldrb w9, [sp, #0x90] */
  ARC_W_W(c, 9, arc_ld8(((c)->sp + INT64_C(144))));
  /* 117050: tbnz w9, #0, #0x11707c */
  if (((ARC_W_R(c, 9)) >> 0 & 1) != 0) goto L_11707c;
L_117054:;
  /* 117054: cmp w9, #8 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(8));
  /* 117058: b.ne #0x117918 */
  if (ARC_COND(c, 1)) goto L_117918;
  /* 11705c: mov w27, #4 */
  ARC_W_W(c, 27, UINT64_C(4));
  /* 117060: b #0x117090 */
  goto L_117090;
L_117064:;
  /* 117064: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 117068: ldr x8, [x8, #0x50] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(80))));
  /* 11706c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1142896));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 117070: mov w26, w0 */
  ARC_W_W(c, 26, ARC_W_R(c, 0));
  /* 117074: ldrb w9, [sp, #0x90] */
  ARC_W_W(c, 9, arc_ld8(((c)->sp + INT64_C(144))));
  /* 117078: tbz w9, #0, #0x117054 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_117054;
L_11707c:;
  /* 11707c: ldp x9, x8, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* 117080: and x9, x9, #0xfffffffffffffffe */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) & UINT64_C(18446744073709551614)));
  /* 117084: sub x27, x9, #1 */
  ARC_X_W(c, 27, (ARC_X_R(c, 9) - UINT64_C(1)));
  /* 117088: cmp x8, x27 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 27));
  /* 11708c: b.ne #0x1177ec */
  if (ARC_COND(c, 1)) goto L_1177ec;
L_117090:;
  /* 117090: add x0, sp, #0x90 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(144)));
  /* 117094: mov x1, x27 */
  ARC_X_W(c, 1, ARC_X_R(c, 27));
  /* 117098: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* 11709c: mov x3, x27 */
  ARC_X_W(c, 3, ARC_X_R(c, 27));
  /* 1170a0: mov x4, x27 */
  ARC_X_W(c, 4, ARC_X_R(c, 27));
  /* 1170a4: mov x5, xzr */
  ARC_X_W(c, 5, ARC_X_R(c, 31));
  /* 1170a8: mov x6, xzr */
  ARC_X_W(c, 6, ARC_X_R(c, 31));
  /* 1170ac: bl #0x142da0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1142960));
  fn1_142da0(c);
  /* 1170b0: mov x8, x27 */
  ARC_X_W(c, 8, ARC_X_R(c, 27));
  /* 1170b4: b #0x1177ec */
  goto L_1177ec;
L_1170b8:;
  /* 1170b8: ldrb w19, [sp, #0xd8] */
  ARC_W_W(c, 19, arc_ld8(((c)->sp + INT64_C(216))));
  /* 1170bc: ldr x27, [sp, #0xe8] */
  ARC_X_W(c, 27, arc_ld64(((c)->sp + INT64_C(232))));
  /* 1170c0: ldr x8, [sp, #0x58] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(88))));
  /* 1170c4: str x24, [sp, #0x50] */
  arc_st64(((c)->sp + INT64_C(80)), ARC_X_R(c, 24));
  /* 1170c8: ands w24, w19, #1 */
  { uint32_t _r = (uint32_t)(ARC_W_R(c, 19) & UINT64_C(1));
    arc_flags_logical32(c, _r);
    ARC_W_W(c, 24, _r); }
  /* 1170cc: str x28, [sp, #0x38] */
  arc_st64(((c)->sp + INT64_C(56)), ARC_X_R(c, 28));
  /* 1170d0: csel x26, x8, x27, eq */
  ARC_X_W(c, 26, (ARC_COND(c, 0) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 27)));
L_1170d4:;
  /* 1170d4: add x8, sp, #0x114 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(276)));
  /* 1170d8: add x8, x20, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 20) + ARC_X_R(c, 8)));
  /* 1170dc: ldurb w8, [x8, #-1] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 8) + INT64_C(-1))));
  /* 1170e0: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* 1170e4: b.hi #0x11730c */
  if (ARC_COND(c, 8)) goto L_11730c;
  /* 1170e8: ldr x8, [sp, #0xe0] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(224))));
  /* 1170ec: lsr w9, w19, #1 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 19)) >> ((UINT64_C(1)) & 31)));
  /* 1170f0: ldr x10, [sp, #0x58] */
  ARC_X_W(c, 10, arc_ld64(((c)->sp + INT64_C(88))));
  /* 1170f4: cmp w24, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 24), UINT64_C(0));
  /* 1170f8: csel x10, x10, x27, eq */
  ARC_X_W(c, 10, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 27)));
  /* 1170fc: csel x8, x9, x8, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* 117100: add x8, x10, x8, lsl #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 10) + ((uint64_t)(ARC_X_R(c, 8)) << 2)));
  /* 117104: cmp x26, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 26), ARC_X_R(c, 8));
  /* 117108: b.eq #0x1172bc */
  if (ARC_COND(c, 0)) goto L_1172bc;
L_11710c:;
  /* 11710c: ldr x8, [x22] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 22)));
  /* 117110: ldr w2, [x26] */
  ARC_W_W(c, 2, arc_ld32(ARC_X_R(c, 26)));
  /* 117114: ldr x8, [x8, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(24))));
  /* 117118: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 11711c: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* 117120: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1143076));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 117124: ldrb w19, [sp, #0xd8] */
  ARC_W_W(c, 19, arc_ld8(((c)->sp + INT64_C(216))));
  /* 117128: ldr x27, [sp, #0xe8] */
  ARC_X_W(c, 27, arc_ld64(((c)->sp + INT64_C(232))));
  /* 11712c: tbz w0, #0, #0x1172b8 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_1172b8;
  /* 117130: ldr x8, [sp, #0xe0] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(224))));
  /* 117134: lsr x9, x19, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 19)) >> ((UINT64_C(1)) & 63)));
  /* 117138: ldr x10, [sp, #0x58] */
  ARC_X_W(c, 10, arc_ld64(((c)->sp + INT64_C(88))));
  /* 11713c: ands w24, w19, #1 */
  { uint32_t _r = (uint32_t)(ARC_W_R(c, 19) & UINT64_C(1));
    arc_flags_logical32(c, _r);
    ARC_W_W(c, 24, _r); }
  /* 117140: add x26, x26, #4 */
  ARC_X_W(c, 26, (ARC_X_R(c, 26) + UINT64_C(4)));
  /* 117144: csel x10, x10, x27, eq */
  ARC_X_W(c, 10, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 27)));
  /* 117148: csel x8, x9, x8, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* 11714c: add x8, x10, x8, lsl #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 10) + ((uint64_t)(ARC_X_R(c, 8)) << 2)));
  /* 117150: cmp x26, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 26), ARC_X_R(c, 8));
  /* 117154: b.ne #0x11710c */
  if (ARC_COND(c, 1)) goto L_11710c;
  /* 117158: b #0x1172bc */
  goto L_1172bc;
L_11715c:;
  /* 11715c: ldr x24, [sp, #0x50] */
  ARC_X_W(c, 24, arc_ld64(((c)->sp + INT64_C(80))));
  /* 117160: ldr x25, [sp, #0x78] */
  ARC_X_W(c, 25, arc_ld64(((c)->sp + INT64_C(120))));
  /* 117164: b #0x117504 */
  goto L_117504;
L_117168:;
  /* 117168: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 11716c: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 117170: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1143156));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 117174: ldrb w8, [sp, #0xc0] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(192))));
  /* 117178: and w9, w8, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 8) & UINT64_C(1)));
L_11717c:;
  /* 11717c: ldr x10, [sp, #0xd0] */
  ARC_X_W(c, 10, arc_ld64(((c)->sp + INT64_C(208))));
  /* 117180: ldr x11, [sp, #0x30] */
  ARC_X_W(c, 11, arc_ld64(((c)->sp + INT64_C(48))));
  /* 117184: cmp w9, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(0));
  /* 117188: csel x10, x11, x10, eq */
  ARC_X_W(c, 10, (ARC_COND(c, 0) ? (ARC_X_R(c, 11)) : ARC_X_R(c, 10)));
  /* 11718c: ldr w10, [x10] */
  ARC_W_W(c, 10, arc_ld32(ARC_X_R(c, 10)));
  /* 117190: cmp w0, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 0), ARC_W_R(c, 10));
  /* 117194: b.ne #0x1171b4 */
  if (ARC_COND(c, 1)) goto L_1171b4;
  /* 117198: ldr x0, [x21] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 21)));
  /* 11719c: ldp x10, x11, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    ARC_X_W(c, 10, arc_ld64(_pa));
    ARC_X_W(c, 11, arc_ld64(_pa + 8));
  }
  /* 1171a0: cmp x10, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 11));
  /* 1171a4: b.eq #0x11727c */
  if (ARC_COND(c, 0)) goto L_11727c;
  /* 1171a8: add x10, x10, #4 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(4)));
  /* 1171ac: str x10, [x0, #0x18] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(24)), ARC_X_R(c, 10));
  /* 1171b0: b #0x117290 */
  goto L_117290;
L_1171b4:;
  /* 1171b4: ldrb w10, [sp, #0xa8] */
  ARC_W_W(c, 10, arc_ld8(((c)->sp + INT64_C(168))));
  /* 1171b8: ldr x11, [sp, #0xb0] */
  ARC_X_W(c, 11, arc_ld64(((c)->sp + INT64_C(176))));
  /* 1171bc: lsr x12, x10, #1 */
  ARC_X_W(c, 12, ((uint64_t)(ARC_X_R(c, 10)) >> ((UINT64_C(1)) & 63)));
  /* 1171c0: ands w9, w10, #1 */
  { uint32_t _r = (uint32_t)(ARC_W_R(c, 10) & UINT64_C(1));
    arc_flags_logical32(c, _r);
    ARC_W_W(c, 9, _r); }
  /* 1171c4: csel x13, x12, x11, eq */
  ARC_X_W(c, 13, (ARC_COND(c, 0) ? (ARC_X_R(c, 12)) : ARC_X_R(c, 11)));
  /* 1171c8: cbz x13, #0x117240 */
  if ((ARC_X_R(c, 13)) == 0) goto L_117240;
  /* 1171cc: ldr x0, [x21] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 21)));
  /* 1171d0: ldp x8, x11, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 11, arc_ld64(_pa + 8));
  }
  /* 1171d4: cmp x8, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 11));
  /* 1171d8: b.eq #0x1171e4 */
  if (ARC_COND(c, 0)) goto L_1171e4;
  /* 1171dc: ldr w0, [x8] */
  ARC_W_W(c, 0, arc_ld32(ARC_X_R(c, 8)));
  /* 1171e0: b #0x1171f8 */
  goto L_1171f8;
L_1171e4:;
  /* 1171e4: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 1171e8: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 1171ec: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1143280));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1171f0: ldrb w10, [sp, #0xa8] */
  ARC_W_W(c, 10, arc_ld8(((c)->sp + INT64_C(168))));
  /* 1171f4: and w9, w10, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 10) & UINT64_C(1)));
L_1171f8:;
  /* 1171f8: ldr x8, [sp, #0xb8] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(184))));
  /* 1171fc: ldr x11, [sp, #0x18] */
  ARC_X_W(c, 11, arc_ld64(((c)->sp + INT64_C(24))));
  /* 117200: cmp w9, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(0));
  /* 117204: csel x8, x11, x8, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 11)) : ARC_X_R(c, 8)));
  /* 117208: ldr w8, [x8] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 8)));
  /* 11720c: cmp w0, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 0), ARC_W_R(c, 8));
  /* 117210: b.ne #0x117230 */
  if (ARC_COND(c, 1)) goto L_117230;
  /* 117214: ldr x0, [x21] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 21)));
  /* 117218: ldp x8, x11, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 11, arc_ld64(_pa + 8));
  }
  /* 11721c: cmp x8, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 11));
  /* 117220: b.eq #0x11748c */
  if (ARC_COND(c, 0)) goto L_11748c;
  /* 117224: add x8, x8, #4 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(4)));
  /* 117228: str x8, [x0, #0x18] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(24)), ARC_X_R(c, 8));
  /* 11722c: b #0x1174a0 */
  goto L_1174a0;
L_117230:;
  /* 117230: ldrb w8, [sp, #0xc0] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(192))));
  /* 117234: ldr x11, [sp, #0xb0] */
  ARC_X_W(c, 11, arc_ld64(((c)->sp + INT64_C(176))));
  /* 117238: lsr w12, w10, #1 */
  ARC_W_W(c, 12, ((uint32_t)(ARC_W_R(c, 10)) >> ((UINT64_C(1)) & 31)));
  /* 11723c: and w9, w10, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 10) & UINT64_C(1)));
L_117240:;
  /* 117240: ldr x10, [sp, #0xc8] */
  ARC_X_W(c, 10, arc_ld64(((c)->sp + INT64_C(200))));
  /* 117244: lsr w13, w8, #1 */
  ARC_W_W(c, 13, ((uint32_t)(ARC_W_R(c, 8)) >> ((UINT64_C(1)) & 31)));
  /* 117248: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 11724c: csel x8, x13, x10, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 13)) : ARC_X_R(c, 10)));
  /* 117250: cmp w9, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(0));
  /* 117254: csel x9, x12, x11, eq */
  ARC_X_W(c, 9, (ARC_COND(c, 0) ? (ARC_X_R(c, 12)) : ARC_X_R(c, 11)));
  /* 117258: cbz x8, #0x117264 */
  if ((ARC_X_R(c, 8)) == 0) goto L_117264;
  /* 11725c: cbz x9, #0x117268 */
  if ((ARC_X_R(c, 9)) == 0) goto L_117268;
  /* 117260: b #0x117bbc */
  goto L_117bbc;
L_117264:;
  /* 117264: cbz x9, #0x116bc4 */
  if ((ARC_X_R(c, 9)) == 0) goto L_116bc4;
L_117268:;
  /* 117268: cmp x8, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(0));
  /* 11726c: ldr x9, [sp, #0x40] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(64))));
  /* 117270: cset w8, ne */
  ARC_W_W(c, 8, (ARC_COND(c, 1) ? 1 : 0));
  /* 117274: strb w8, [x9] */
  arc_st8(ARC_X_R(c, 9), ARC_W_R(c, 8));
  /* 117278: b #0x116bc4 */
  goto L_116bc4;
L_11727c:;
  /* 11727c: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 117280: ldr x8, [x8, #0x50] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(80))));
  /* 117284: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1143432));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 117288: ldrb w8, [sp, #0xc0] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(192))));
  /* 11728c: and w9, w8, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 8) & UINT64_C(1)));
L_117290:;
  /* 117290: ldr x10, [sp, #0xc8] */
  ARC_X_W(c, 10, arc_ld64(((c)->sp + INT64_C(200))));
  /* 117294: lsr w8, w8, #1 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 8)) >> ((UINT64_C(1)) & 31)));
  /* 117298: cmp w9, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(0));
  /* 11729c: csel x8, x8, x10, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 10)));
  /* 1172a0: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 1172a4: ldr x8, [sp, #0x40] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(64))));
  /* 1172a8: strb wzr, [x8] */
  arc_st8(ARC_X_R(c, 8), ARC_W_R(c, 31));
  /* 1172ac: add x8, sp, #0xc0 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(192)));
  /* 1172b0: csel x24, x8, x24, hi */
  ARC_X_W(c, 24, (ARC_COND(c, 8) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 24)));
  /* 1172b4: b #0x116bc4 */
  goto L_116bc4;
L_1172b8:;
  /* 1172b8: and w24, w19, #1 */
  ARC_W_W(c, 24, (ARC_W_R(c, 19) & UINT64_C(1)));
L_1172bc:;
  /* 1172bc: ldrb w8, [sp, #0x90] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(144))));
  /* 1172c0: ldr x11, [sp, #0x58] */
  ARC_X_W(c, 11, arc_ld64(((c)->sp + INT64_C(88))));
  /* 1172c4: cmp w24, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 24), UINT64_C(0));
  /* 1172c8: ldr x9, [sp, #0x98] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(152))));
  /* 1172cc: lsr x10, x8, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* 1172d0: csel x28, x11, x27, eq */
  ARC_X_W(c, 28, (ARC_COND(c, 0) ? (ARC_X_R(c, 11)) : ARC_X_R(c, 27)));
  /* 1172d4: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 1172d8: sub x2, x26, x28 */
  ARC_X_W(c, 2, (ARC_X_R(c, 26) - ARC_X_R(c, 28)));
  /* 1172dc: csel x9, x10, x9, eq */
  ARC_X_W(c, 9, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* 1172e0: cmp x9, x2, asr #2 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ((uint64_t)((int64_t)(ARC_X_R(c, 2)) >> 2)));
  /* 1172e4: b.lo #0x117310 */
  if (ARC_COND(c, 3)) goto L_117310;
  /* 1172e8: ldr x10, [sp, #0xa0] */
  ARC_X_W(c, 10, arc_ld64(((c)->sp + INT64_C(160))));
  /* 1172ec: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 1172f0: ldr x8, [sp, #0x28] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(40))));
  /* 1172f4: mov x1, x28 */
  ARC_X_W(c, 1, ARC_X_R(c, 28));
  /* 1172f8: csel x8, x8, x10, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 10)));
  /* 1172fc: add x8, x8, x9, lsl #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 2)));
  /* 117300: sub x0, x8, x2 */
  ARC_X_W(c, 0, (ARC_X_R(c, 8) - ARC_X_R(c, 2)));
  /* 117304: bl #0x142890 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1143560));
  fn1_142890(c);
  /* 117308: cbnz w0, #0x117310 */
  if ((ARC_W_R(c, 0)) != 0) goto L_117310;
L_11730c:;
  /* 11730c: mov x28, x26 */
  ARC_X_W(c, 28, ARC_X_R(c, 26));
L_117310:;
  /* 117310: ldr x8, [sp, #0xe0] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(224))));
  /* 117314: lsr w9, w19, #1 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 19)) >> ((UINT64_C(1)) & 31)));
  /* 117318: ldr x26, [sp, #0x58] */
  ARC_X_W(c, 26, arc_ld64(((c)->sp + INT64_C(88))));
  /* 11731c: cmp w24, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 24), UINT64_C(0));
  /* 117320: csel x10, x26, x27, eq */
  ARC_X_W(c, 10, (ARC_COND(c, 0) ? (ARC_X_R(c, 26)) : ARC_X_R(c, 27)));
  /* 117324: csel x8, x9, x8, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* 117328: add x8, x10, x8, lsl #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 10) + ((uint64_t)(ARC_X_R(c, 8)) << 2)));
  /* 11732c: cmp x28, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 28), ARC_X_R(c, 8));
  /* 117330: b.eq #0x11744c */
  if (ARC_COND(c, 0)) goto L_11744c;
  /* 117334: ldr x24, [sp, #0x50] */
  ARC_X_W(c, 24, arc_ld64(((c)->sp + INT64_C(80))));
  /* 117338: b #0x11736c */
  goto L_11736c;
L_11733c:;
  /* 11733c: add x8, x8, #4 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(4)));
  /* 117340: str x8, [x0, #0x18] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(24)), ARC_X_R(c, 8));
L_117344:;
  /* 117344: ldrb w8, [sp, #0xd8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(216))));
  /* 117348: ldp x10, x9, [sp, #0xe0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(224));
    ARC_X_W(c, 10, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 11734c: add x28, x28, #4 */
  ARC_X_W(c, 28, (ARC_X_R(c, 28) + UINT64_C(4)));
  /* 117350: lsr x11, x8, #1 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* 117354: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 117358: csel x8, x26, x9, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 26)) : ARC_X_R(c, 9)));
  /* 11735c: csel x9, x11, x10, eq */
  ARC_X_W(c, 9, (ARC_COND(c, 0) ? (ARC_X_R(c, 11)) : ARC_X_R(c, 10)));
  /* 117360: add x8, x8, x9, lsl #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 2)));
  /* 117364: cmp x28, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 28), ARC_X_R(c, 8));
  /* 117368: b.eq #0x117450 */
  if (ARC_COND(c, 0)) goto L_117450;
L_11736c:;
  /* 11736c: ldr x0, [x21] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 21)));
  /* 117370: cbz x0, #0x1173bc */
  if ((ARC_X_R(c, 0)) == 0) goto L_1173bc;
  /* 117374: ldp x8, x9, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 117378: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 11737c: b.eq #0x117388 */
  if (ARC_COND(c, 0)) goto L_117388;
  /* 117380: ldr w0, [x8] */
  ARC_W_W(c, 0, arc_ld32(ARC_X_R(c, 8)));
  /* 117384: b #0x117394 */
  goto L_117394;
L_117388:;
  /* 117388: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 11738c: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 117390: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1143700));
  arc_dispatch(c, ARC_X_R(c, 8));
L_117394:;
  /* 117394: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 117398: b.eq #0x1173b4 */
  if (ARC_COND(c, 0)) goto L_1173b4;
  /* 11739c: ldr x0, [x21] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 21)));
  /* 1173a0: cmp x0, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 0), UINT64_C(0));
  /* 1173a4: cset w19, eq */
  ARC_W_W(c, 19, (ARC_COND(c, 0) ? 1 : 0));
  /* 1173a8: cbnz x25, #0x1173c4 */
  if ((ARC_X_R(c, 25)) != 0) goto L_1173c4;
L_1173ac:;
  /* 1173ac: tbz w19, #0, #0x117400 */
  if (((ARC_W_R(c, 19)) >> 0 & 1) == 0) goto L_117400;
  /* 1173b0: b #0x117450 */
  goto L_117450;
L_1173b4:;
  /* 1173b4: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
  /* 1173b8: str xzr, [x21] */
  arc_st64(ARC_X_R(c, 21), ARC_X_R(c, 31));
L_1173bc:;
  /* 1173bc: mov w19, #1 */
  ARC_W_W(c, 19, UINT64_C(1));
  /* 1173c0: cbz x25, #0x1173ac */
  if ((ARC_X_R(c, 25)) == 0) goto L_1173ac;
L_1173c4:;
  /* 1173c4: ldp x8, x9, [x25, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 25) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 1173c8: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 1173cc: b.eq #0x1173d8 */
  if (ARC_COND(c, 0)) goto L_1173d8;
  /* 1173d0: ldr w0, [x8] */
  ARC_W_W(c, 0, arc_ld32(ARC_X_R(c, 8)));
  /* 1173d4: b #0x1173e8 */
  goto L_1173e8;
L_1173d8:;
  /* 1173d8: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 1173dc: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 1173e0: mov x0, x25 */
  ARC_X_W(c, 0, ARC_X_R(c, 25));
  /* 1173e4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1143784));
  arc_dispatch(c, ARC_X_R(c, 8));
L_1173e8:;
  /* 1173e8: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 1173ec: cset w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? 1 : 0));
  /* 1173f0: csel x25, xzr, x25, eq */
  ARC_X_W(c, 25, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 25)));
  /* 1173f4: cmp w19, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 19), ARC_W_R(c, 8));
  /* 1173f8: b.eq #0x117450 */
  if (ARC_COND(c, 0)) goto L_117450;
  /* 1173fc: ldr x0, [x21] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 21)));
L_117400:;
  /* 117400: ldp x8, x9, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 117404: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 117408: b.eq #0x117414 */
  if (ARC_COND(c, 0)) goto L_117414;
  /* 11740c: ldr w0, [x8] */
  ARC_W_W(c, 0, arc_ld32(ARC_X_R(c, 8)));
  /* 117410: b #0x117420 */
  goto L_117420;
L_117414:;
  /* 117414: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 117418: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 11741c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1143840));
  arc_dispatch(c, ARC_X_R(c, 8));
L_117420:;
  /* 117420: ldr w8, [x28] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 28)));
  /* 117424: cmp w0, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 0), ARC_W_R(c, 8));
  /* 117428: b.ne #0x117450 */
  if (ARC_COND(c, 1)) goto L_117450;
  /* 11742c: ldr x0, [x21] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 21)));
  /* 117430: ldp x8, x9, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 117434: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 117438: b.ne #0x11733c */
  if (ARC_COND(c, 1)) goto L_11733c;
  /* 11743c: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 117440: ldr x8, [x8, #0x50] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(80))));
  /* 117444: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1143880));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 117448: b #0x117344 */
  goto L_117344;
L_11744c:;
  /* 11744c: ldr x24, [sp, #0x50] */
  ARC_X_W(c, 24, arc_ld64(((c)->sp + INT64_C(80))));
L_117450:;
  /* 117450: ldr w8, [sp, #0x4c] */
  ARC_W_W(c, 8, arc_ld32(((c)->sp + INT64_C(76))));
  /* 117454: tbnz w8, #9, #0x117460 */
  if (((ARC_W_R(c, 8)) >> 9 & 1) != 0) goto L_117460;
  /* 117458: ldr x28, [sp, #0x38] */
  ARC_X_W(c, 28, arc_ld64(((c)->sp + INT64_C(56))));
  /* 11745c: b #0x116bc4 */
  goto L_116bc4;
L_117460:;
  /* 117460: ldrb w8, [sp, #0xd8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(216))));
  /* 117464: ldp x10, x9, [sp, #0xe0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(224));
    ARC_X_W(c, 10, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 117468: lsr x11, x8, #1 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* 11746c: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 117470: csel x8, x26, x9, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 26)) : ARC_X_R(c, 9)));
  /* 117474: csel x9, x11, x10, eq */
  ARC_X_W(c, 9, (ARC_COND(c, 0) ? (ARC_X_R(c, 11)) : ARC_X_R(c, 10)));
  /* 117478: add x8, x8, x9, lsl #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 2)));
  /* 11747c: cmp x28, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 28), ARC_X_R(c, 8));
  /* 117480: ldr x28, [sp, #0x38] */
  ARC_X_W(c, 28, arc_ld64(((c)->sp + INT64_C(56))));
  /* 117484: b.eq #0x116bc4 */
  if (ARC_COND(c, 0)) goto L_116bc4;
  /* 117488: b #0x117bbc */
  goto L_117bbc;
L_11748c:;
  /* 11748c: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 117490: ldr x8, [x8, #0x50] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(80))));
  /* 117494: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1143960));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 117498: ldrb w10, [sp, #0xa8] */
  ARC_W_W(c, 10, arc_ld8(((c)->sp + INT64_C(168))));
  /* 11749c: and w9, w10, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 10) & UINT64_C(1)));
L_1174a0:;
  /* 1174a0: ldr x8, [sp, #0xb0] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(176))));
  /* 1174a4: lsr w10, w10, #1 */
  ARC_W_W(c, 10, ((uint32_t)(ARC_W_R(c, 10)) >> ((UINT64_C(1)) & 31)));
  /* 1174a8: cmp w9, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(0));
  /* 1174ac: mov w9, #1 */
  ARC_W_W(c, 9, UINT64_C(1));
  /* 1174b0: csel x8, x10, x8, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 8)));
  /* 1174b4: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 1174b8: ldr x8, [sp, #0x40] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(64))));
  /* 1174bc: strb w9, [x8] */
  arc_st8(ARC_X_R(c, 8), ARC_W_R(c, 9));
  /* 1174c0: add x8, sp, #0xa8 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(168)));
  /* 1174c4: csel x24, x8, x24, hi */
  ARC_X_W(c, 24, (ARC_COND(c, 8) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 24)));
  /* 1174c8: b #0x116bc4 */
  goto L_116bc4;
L_1174cc:;
  /* 1174cc: mov x0, x25 */
  ARC_X_W(c, 0, ARC_X_R(c, 25));
  /* 1174d0: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1144020));
  fn1_1428a8(c);
  /* 1174d4: cbz x0, #0x117cc8 */
  if ((ARC_X_R(c, 0)) == 0) goto L_117cc8;
L_1174d8:;
  /* 1174d8: and x8, x25, #0xfffffffffffffffc */
  ARC_X_W(c, 8, (ARC_X_R(c, 25) & UINT64_C(18446744073709551612)));
  /* 1174dc: add x9, x0, x24 */
  ARC_X_W(c, 9, (ARC_X_R(c, 0) + ARC_X_R(c, 24)));
  /* 1174e0: mov x28, x0 */
  ARC_X_W(c, 28, ARC_X_R(c, 0));
  /* 1174e4: add x8, x0, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* 1174e8: str x8, [sp, #0x70] */
  arc_st64(((c)->sp + INT64_C(112)), ARC_X_R(c, 8));
  /* 1174ec: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 1174f0: ldr x8, [x8, #0x9a0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2464))));
  /* 1174f4: ldr x24, [sp, #0x50] */
  ARC_X_W(c, 24, arc_ld64(((c)->sp + INT64_C(80))));
  /* 1174f8: ldr x25, [sp, #0x78] */
  ARC_X_W(c, 25, arc_ld64(((c)->sp + INT64_C(120))));
  /* 1174fc: str x8, [sp, #0x60] */
  arc_st64(((c)->sp + INT64_C(96)), ARC_X_R(c, 8));
L_117500:;
  /* 117500: str w19, [x9], #4 */
  { const uint64_t _a = ARC_X_R(c, 9);
    ARC_X_W(c, 9, ARC_X_R(c, 9) + INT64_C(4));
    arc_st32(_a, ARC_W_R(c, 19));
  }
L_117504:;
  /* 117504: ldr w8, [sp, #0x8c] */
  ARC_W_W(c, 8, arc_ld32(((c)->sp + INT64_C(140))));
  /* 117508: str x9, [sp, #0x80] */
  arc_st64(((c)->sp + INT64_C(128)), ARC_X_R(c, 9));
  /* 11750c: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* 117510: b.lt #0x116ba8 */
  if (ARC_COND(c, 11)) goto L_116ba8;
  /* 117514: ldr x0, [x21] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 21)));
  /* 117518: cbz x0, #0x117568 */
  if ((ARC_X_R(c, 0)) == 0) goto L_117568;
  /* 11751c: ldp x8, x9, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 117520: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 117524: b.eq #0x117530 */
  if (ARC_COND(c, 0)) goto L_117530;
  /* 117528: ldr w0, [x8] */
  ARC_W_W(c, 0, arc_ld32(ARC_X_R(c, 8)));
  /* 11752c: b #0x11753c */
  goto L_11753c;
L_117530:;
  /* 117530: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 117534: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 117538: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1144124));
  arc_dispatch(c, ARC_X_R(c, 8));
L_11753c:;
  /* 11753c: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 117540: b.eq #0x117560 */
  if (ARC_COND(c, 0)) goto L_117560;
  /* 117544: ldr x0, [x21] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 21)));
  /* 117548: cmp x0, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 0), UINT64_C(0));
  /* 11754c: cset w19, eq */
  ARC_W_W(c, 19, (ARC_COND(c, 0) ? 1 : 0));
  /* 117550: cbnz x26, #0x117570 */
  if ((ARC_X_R(c, 26)) != 0) goto L_117570;
L_117554:;
  /* 117554: tbnz w19, #0, #0x117bbc */
  if (((ARC_W_R(c, 19)) >> 0 & 1) != 0) goto L_117bbc;
  /* 117558: mov x26, xzr */
  ARC_X_W(c, 26, ARC_X_R(c, 31));
  /* 11755c: b #0x1175b0 */
  goto L_1175b0;
L_117560:;
  /* 117560: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
  /* 117564: str xzr, [x21] */
  arc_st64(ARC_X_R(c, 21), ARC_X_R(c, 31));
L_117568:;
  /* 117568: mov w19, #1 */
  ARC_W_W(c, 19, UINT64_C(1));
  /* 11756c: cbz x26, #0x117554 */
  if ((ARC_X_R(c, 26)) == 0) goto L_117554;
L_117570:;
  /* 117570: ldp x8, x9, [x26, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 26) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 117574: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 117578: b.eq #0x117584 */
  if (ARC_COND(c, 0)) goto L_117584;
  /* 11757c: ldr w0, [x8] */
  ARC_W_W(c, 0, arc_ld32(ARC_X_R(c, 8)));
  /* 117580: b #0x117594 */
  goto L_117594;
L_117584:;
  /* 117584: ldr x8, [x26] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 26)));
  /* 117588: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 11758c: mov x0, x26 */
  ARC_X_W(c, 0, ARC_X_R(c, 26));
  /* 117590: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1144212));
  arc_dispatch(c, ARC_X_R(c, 8));
L_117594:;
  /* 117594: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 117598: cset w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? 1 : 0));
  /* 11759c: cmp w19, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 19), ARC_W_R(c, 8));
  /* 1175a0: b.eq #0x117bbc */
  if (ARC_COND(c, 0)) goto L_117bbc;
  /* 1175a4: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 1175a8: ldr x0, [x21] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 21)));
  /* 1175ac: csel x26, xzr, x26, eq */
  ARC_X_W(c, 26, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 26)));
L_1175b0:;
  /* 1175b0: ldp x8, x9, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 1175b4: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 1175b8: b.eq #0x1175c4 */
  if (ARC_COND(c, 0)) goto L_1175c4;
  /* 1175bc: ldr w0, [x8] */
  ARC_W_W(c, 0, arc_ld32(ARC_X_R(c, 8)));
  /* 1175c0: b #0x1175d0 */
  goto L_1175d0;
L_1175c4:;
  /* 1175c4: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 1175c8: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 1175cc: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1144272));
  arc_dispatch(c, ARC_X_R(c, 8));
L_1175d0:;
  /* 1175d0: ldr w8, [sp, #0x110] */
  ARC_W_W(c, 8, arc_ld32(((c)->sp + INT64_C(272))));
  /* 1175d4: cmp w0, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 0), ARC_W_R(c, 8));
  /* 1175d8: b.ne #0x117bbc */
  if (ARC_COND(c, 1)) goto L_117bbc;
  /* 1175dc: ldr x0, [x21] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 21)));
  /* 1175e0: ldp x8, x9, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 1175e4: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 1175e8: b.eq #0x1175f8 */
  if (ARC_COND(c, 0)) goto L_1175f8;
  /* 1175ec: add x8, x8, #4 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(4)));
  /* 1175f0: str x8, [x0, #0x18] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(24)), ARC_X_R(c, 8));
  /* 1175f4: b #0x117604 */
  goto L_117604;
L_1175f8:;
  /* 1175f8: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 1175fc: ldr x8, [x8, #0x50] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(80))));
  /* 117600: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1144324));
  arc_dispatch(c, ARC_X_R(c, 8));
L_117604:;
  /* 117604: ldr w8, [sp, #0x8c] */
  ARC_W_W(c, 8, arc_ld32(((c)->sp + INT64_C(140))));
  /* 117608: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* 11760c: b.ge #0x117624 */
  if (ARC_COND(c, 10)) goto L_117624;
  /* 117610: b #0x116ba8 */
  goto L_116ba8;
L_117614:;
  /* 117614: add x9, x9, #4 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(4)));
  /* 117618: str x9, [x0, #0x18] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(24)), ARC_X_R(c, 9));
  /* 11761c: cmp w8, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(0));
  /* 117620: b.le #0x116ba8 */
  if (ARC_COND(c, 13)) goto L_116ba8;
L_117624:;
  /* 117624: ldr x0, [x21] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 21)));
  /* 117628: cbz x0, #0x117678 */
  if ((ARC_X_R(c, 0)) == 0) goto L_117678;
  /* 11762c: ldp x8, x9, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 117630: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 117634: b.eq #0x117640 */
  if (ARC_COND(c, 0)) goto L_117640;
  /* 117638: ldr w0, [x8] */
  ARC_W_W(c, 0, arc_ld32(ARC_X_R(c, 8)));
  /* 11763c: b #0x11764c */
  goto L_11764c;
L_117640:;
  /* 117640: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 117644: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 117648: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1144396));
  arc_dispatch(c, ARC_X_R(c, 8));
L_11764c:;
  /* 11764c: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 117650: b.eq #0x117670 */
  if (ARC_COND(c, 0)) goto L_117670;
  /* 117654: ldr x0, [x21] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 21)));
  /* 117658: cmp x0, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 0), UINT64_C(0));
  /* 11765c: cset w19, eq */
  ARC_W_W(c, 19, (ARC_COND(c, 0) ? 1 : 0));
  /* 117660: cbnz x26, #0x117680 */
  if ((ARC_X_R(c, 26)) != 0) goto L_117680;
L_117664:;
  /* 117664: tbnz w19, #0, #0x117bbc */
  if (((ARC_W_R(c, 19)) >> 0 & 1) != 0) goto L_117bbc;
  /* 117668: mov x26, xzr */
  ARC_X_W(c, 26, ARC_X_R(c, 31));
  /* 11766c: b #0x1176c0 */
  goto L_1176c0;
L_117670:;
  /* 117670: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
  /* 117674: str xzr, [x21] */
  arc_st64(ARC_X_R(c, 21), ARC_X_R(c, 31));
L_117678:;
  /* 117678: mov w19, #1 */
  ARC_W_W(c, 19, UINT64_C(1));
  /* 11767c: cbz x26, #0x117664 */
  if ((ARC_X_R(c, 26)) == 0) goto L_117664;
L_117680:;
  /* 117680: ldp x8, x9, [x26, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 26) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 117684: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 117688: b.eq #0x117694 */
  if (ARC_COND(c, 0)) goto L_117694;
  /* 11768c: ldr w0, [x8] */
  ARC_W_W(c, 0, arc_ld32(ARC_X_R(c, 8)));
  /* 117690: b #0x1176a4 */
  goto L_1176a4;
L_117694:;
  /* 117694: ldr x8, [x26] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 26)));
  /* 117698: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 11769c: mov x0, x26 */
  ARC_X_W(c, 0, ARC_X_R(c, 26));
  /* 1176a0: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1144484));
  arc_dispatch(c, ARC_X_R(c, 8));
L_1176a4:;
  /* 1176a4: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 1176a8: cset w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? 1 : 0));
  /* 1176ac: cmp w19, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 19), ARC_W_R(c, 8));
  /* 1176b0: b.eq #0x117bbc */
  if (ARC_COND(c, 0)) goto L_117bbc;
  /* 1176b4: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 1176b8: ldr x0, [x21] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 21)));
  /* 1176bc: csel x26, xzr, x26, eq */
  ARC_X_W(c, 26, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 26)));
L_1176c0:;
  /* 1176c0: ldp x8, x9, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 1176c4: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 1176c8: b.eq #0x1176d4 */
  if (ARC_COND(c, 0)) goto L_1176d4;
  /* 1176cc: ldr w2, [x8] */
  ARC_W_W(c, 2, arc_ld32(ARC_X_R(c, 8)));
  /* 1176d0: b #0x1176e4 */
  goto L_1176e4;
L_1176d4:;
  /* 1176d4: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 1176d8: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 1176dc: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1144544));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1176e0: mov w2, w0 */
  ARC_W_W(c, 2, ARC_W_R(c, 0));
L_1176e4:;
  /* 1176e4: ldr x8, [x22] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 22)));
  /* 1176e8: ldr x8, [x8, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(24))));
  /* 1176ec: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 1176f0: mov w1, #0x40 */
  ARC_W_W(c, 1, UINT64_C(64));
  /* 1176f4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1144568));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1176f8: tbz w0, #0, #0x117bbc */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_117bbc;
  /* 1176fc: ldr x9, [x23] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 23)));
  /* 117700: cmp x9, x25 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 25));
  /* 117704: b.ne #0x117780 */
  if (ARC_COND(c, 1)) goto L_117780;
  /* 117708: ldr x9, [sp, #0x68] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(104))));
  /* 11770c: mov w10, #4 */
  ARC_W_W(c, 10, UINT64_C(4));
  /* 117710: ldp x0, x9, [x9] */
  { const uint64_t _pa = ARC_X_R(c, 9);
    ARC_X_W(c, 0, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 117714: subs x19, x25, x0 */
  ARC_X_W(c, 19, arc_sub64(c, ARC_X_R(c, 25), ARC_X_R(c, 0)));
  /* 117718: lsl x8, x19, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 19)) << ((UINT64_C(1)) & 63)));
  /* 11771c: csel x8, x10, x8, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 8)));
  /* 117720: mov x10, #0x7fffffffffffffff */
  ARC_X_W(c, 10, UINT64_C(9223372036854775807));
  /* 117724: cmp x19, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 10));
  /* 117728: csinv x25, x8, xzr, lo */
  ARC_X_W(c, 25, (ARC_COND(c, 3) ? (ARC_X_R(c, 8)) : (~(uint64_t)(ARC_X_R(c, 31)))));
  /* 11772c: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 117730: ldr x8, [x8, #0xbc8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3016))));
  /* 117734: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* 117738: b.eq #0x11774c */
  if (ARC_COND(c, 0)) goto L_11774c;
  /* 11773c: mov x1, x25 */
  ARC_X_W(c, 1, ARC_X_R(c, 25));
  /* 117740: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1144644));
  fn1_142878(c);
  /* 117744: cbnz x0, #0x117758 */
  if ((ARC_X_R(c, 0)) != 0) goto L_117758;
  /* 117748: b #0x117cc0 */
  goto L_117cc0;
L_11774c:;
  /* 11774c: mov x0, x25 */
  ARC_X_W(c, 0, ARC_X_R(c, 25));
  /* 117750: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1144660));
  fn1_1428a8(c);
  /* 117754: cbz x0, #0x117cc0 */
  if ((ARC_X_R(c, 0)) == 0) goto L_117cc0;
L_117758:;
  /* 117758: ldr x11, [sp, #0x68] */
  ARC_X_W(c, 11, arc_ld64(((c)->sp + INT64_C(104))));
  /* 11775c: add x9, x0, x19 */
  ARC_X_W(c, 9, (ARC_X_R(c, 0) + ARC_X_R(c, 19)));
  /* 117760: adrp x12, #0x151000 */
  ARC_X_W(c, 12, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 117764: and x10, x25, #0xfffffffffffffffc */
  ARC_X_W(c, 10, (ARC_X_R(c, 25) & UINT64_C(18446744073709551612)));
  /* 117768: str x0, [x11] */
  arc_st64(ARC_X_R(c, 11), ARC_X_R(c, 0));
  /* 11776c: str x9, [x23] */
  arc_st64(ARC_X_R(c, 23), ARC_X_R(c, 9));
  /* 117770: ldr x8, [x11] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 11)));
  /* 117774: ldr x12, [x12, #0x9a0] */
  ARC_X_W(c, 12, arc_ld64((ARC_X_R(c, 12) + INT64_C(2464))));
  /* 117778: add x25, x8, x10 */
  ARC_X_W(c, 25, (ARC_X_R(c, 8) + ARC_X_R(c, 10)));
  /* 11777c: str x12, [x11, #8] */
  arc_st64((ARC_X_R(c, 11) + INT64_C(8)), ARC_X_R(c, 12));
L_117780:;
  /* 117780: ldr x0, [x21] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 21)));
  /* 117784: ldp x8, x10, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* 117788: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* 11778c: b.eq #0x117798 */
  if (ARC_COND(c, 0)) goto L_117798;
  /* 117790: ldr w8, [x8] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 8)));
  /* 117794: b #0x1177b0 */
  goto L_1177b0;
L_117798:;
  /* 117798: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 11779c: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 1177a0: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1144740));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1177a4: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 1177a8: ldr x0, [x21] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 21)));
  /* 1177ac: ldr x9, [x23] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 23)));
L_1177b0:;
  /* 1177b0: str w8, [x9], #4 */
  { const uint64_t _a = ARC_X_R(c, 9);
    ARC_X_W(c, 9, ARC_X_R(c, 9) + INT64_C(4));
    arc_st32(_a, ARC_W_R(c, 8));
  }
  /* 1177b4: ldr w8, [sp, #0x8c] */
  ARC_W_W(c, 8, arc_ld32(((c)->sp + INT64_C(140))));
  /* 1177b8: str x9, [x23] */
  arc_st64(ARC_X_R(c, 23), ARC_X_R(c, 9));
  /* 1177bc: ldp x9, x10, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* 1177c0: sub w8, w8, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) - UINT64_C(1)));
  /* 1177c4: str w8, [sp, #0x8c] */
  arc_st32(((c)->sp + INT64_C(140)), ARC_W_R(c, 8));
  /* 1177c8: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* 1177cc: b.ne #0x117614 */
  if (ARC_COND(c, 1)) goto L_117614;
  /* 1177d0: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 1177d4: ldr x8, [x8, #0x50] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(80))));
  /* 1177d8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1144796));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1177dc: ldr w8, [sp, #0x8c] */
  ARC_W_W(c, 8, arc_ld32(((c)->sp + INT64_C(140))));
  /* 1177e0: cmp w8, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(0));
  /* 1177e4: b.gt #0x117624 */
  if (ARC_COND(c, 12)) goto L_117624;
  /* 1177e8: b #0x116ba8 */
  goto L_116ba8;
L_1177ec:;
  /* 1177ec: ldr x9, [sp, #0xa0] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(160))));
  /* 1177f0: add x10, x8, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* 1177f4: str x10, [sp, #0x98] */
  arc_st64(((c)->sp + INT64_C(152)), ARC_X_R(c, 10));
L_1177f8:;
  /* 1177f8: add x8, x9, x8, lsl #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) + ((uint64_t)(ARC_X_R(c, 8)) << 2)));
  /* 1177fc: stp w26, wzr, [x8] */
  { const uint64_t _pa = ARC_X_R(c, 8);
    arc_st32(_pa, ARC_W_R(c, 26));
    arc_st32(_pa + 4, ARC_W_R(c, 31));
  }
L_117800:;
  /* 117800: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 117804: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
  /* 117808: mov w19, #1 */
  ARC_W_W(c, 19, UINT64_C(1));
  /* 11780c: cbz x8, #0x117848 */
  if ((ARC_X_R(c, 8)) == 0) goto L_117848;
  /* 117810: ldp x9, x10, [x8, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 8) + INT64_C(24));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* 117814: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* 117818: b.eq #0x117824 */
  if (ARC_COND(c, 0)) goto L_117824;
  /* 11781c: ldr w0, [x9] */
  ARC_W_W(c, 0, arc_ld32(ARC_X_R(c, 9)));
  /* 117820: b #0x117834 */
  goto L_117834;
L_117824:;
  /* 117824: ldr x9, [x8] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 8)));
  /* 117828: ldr x9, [x9, #0x48] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(72))));
  /* 11782c: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 117830: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1144884));
  arc_dispatch(c, ARC_X_R(c, 9));
L_117834:;
  /* 117834: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 117838: b.eq #0x11788c */
  if (ARC_COND(c, 0)) goto L_11788c;
  /* 11783c: ldr x0, [x21] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 21)));
  /* 117840: cmp x0, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 0), UINT64_C(0));
  /* 117844: cset w19, eq */
  ARC_W_W(c, 19, (ARC_COND(c, 0) ? 1 : 0));
L_117848:;
  /* 117848: cbz x25, #0x117898 */
  if ((ARC_X_R(c, 25)) == 0) goto L_117898;
L_11784c:;
  /* 11784c: ldp x8, x9, [x25, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 25) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 117850: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 117854: b.eq #0x117860 */
  if (ARC_COND(c, 0)) goto L_117860;
  /* 117858: ldr w0, [x8] */
  ARC_W_W(c, 0, arc_ld32(ARC_X_R(c, 8)));
  /* 11785c: b #0x117870 */
  goto L_117870;
L_117860:;
  /* 117860: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 117864: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 117868: mov x0, x25 */
  ARC_X_W(c, 0, ARC_X_R(c, 25));
  /* 11786c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1144944));
  arc_dispatch(c, ARC_X_R(c, 8));
L_117870:;
  /* 117870: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 117874: cset w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? 1 : 0));
  /* 117878: csel x25, xzr, x25, eq */
  ARC_X_W(c, 25, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 25)));
  /* 11787c: cmp w19, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 19), ARC_W_R(c, 8));
  /* 117880: b.eq #0x116bc4 */
  if (ARC_COND(c, 0)) goto L_116bc4;
  /* 117884: ldr x0, [x21] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 21)));
  /* 117888: b #0x11789c */
  goto L_11789c;
L_11788c:;
  /* 11788c: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
  /* 117890: str xzr, [x21] */
  arc_st64(ARC_X_R(c, 21), ARC_X_R(c, 31));
  /* 117894: cbnz x25, #0x11784c */
  if ((ARC_X_R(c, 25)) != 0) goto L_11784c;
L_117898:;
  /* 117898: tbnz w19, #0, #0x116bc4 */
  if (((ARC_W_R(c, 19)) >> 0 & 1) != 0) goto L_116bc4;
L_11789c:;
  /* 11789c: ldp x8, x9, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 1178a0: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 1178a4: b.eq #0x1178b0 */
  if (ARC_COND(c, 0)) goto L_1178b0;
  /* 1178a8: ldr w2, [x8] */
  ARC_W_W(c, 2, arc_ld32(ARC_X_R(c, 8)));
  /* 1178ac: b #0x1178c0 */
  goto L_1178c0;
L_1178b0:;
  /* 1178b0: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 1178b4: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 1178b8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1145020));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1178bc: mov w2, w0 */
  ARC_W_W(c, 2, ARC_W_R(c, 0));
L_1178c0:;
  /* 1178c0: ldr x8, [x22] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 22)));
  /* 1178c4: ldr x8, [x8, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(24))));
  /* 1178c8: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 1178cc: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* 1178d0: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1145044));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1178d4: tbz w0, #0, #0x116bc4 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_116bc4;
  /* 1178d8: ldr x0, [x21] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 21)));
  /* 1178dc: ldp x8, x9, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 1178e0: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 1178e4: b.eq #0x1178f4 */
  if (ARC_COND(c, 0)) goto L_1178f4;
  /* 1178e8: ldr w26, [x8], #4 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(4));
    ARC_W_W(c, 26, arc_ld32(_a));
  }
  /* 1178ec: str x8, [x0, #0x18] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(24)), ARC_X_R(c, 8));
  /* 1178f0: b #0x117904 */
  goto L_117904;
L_1178f4:;
  /* 1178f4: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 1178f8: ldr x8, [x8, #0x50] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(80))));
  /* 1178fc: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1145088));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 117900: mov w26, w0 */
  ARC_W_W(c, 26, ARC_W_R(c, 0));
L_117904:;
  /* 117904: ldrb w9, [sp, #0x90] */
  ARC_W_W(c, 9, arc_ld8(((c)->sp + INT64_C(144))));
  /* 117908: tbnz w9, #0, #0x11792c */
  if (((ARC_W_R(c, 9)) >> 0 & 1) != 0) goto L_11792c;
  /* 11790c: cmp w9, #8 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(8));
  /* 117910: mov w27, #4 */
  ARC_W_W(c, 27, UINT64_C(4));
  /* 117914: b.eq #0x117940 */
  if (ARC_COND(c, 0)) goto L_117940;
L_117918:;
  /* 117918: lsr x8, x9, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(1)) & 63)));
  /* 11791c: add w9, w9, #2 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) + UINT64_C(2)));
  /* 117920: strb w9, [sp, #0x90] */
  arc_st8(((c)->sp + INT64_C(144)), ARC_W_R(c, 9));
  /* 117924: ldr x9, [sp, #0x28] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(40))));
  /* 117928: b #0x1177f8 */
  goto L_1177f8;
L_11792c:;
  /* 11792c: ldp x9, x8, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* 117930: and x9, x9, #0xfffffffffffffffe */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) & UINT64_C(18446744073709551614)));
  /* 117934: sub x27, x9, #1 */
  ARC_X_W(c, 27, (ARC_X_R(c, 9) - UINT64_C(1)));
  /* 117938: cmp x8, x27 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 27));
  /* 11793c: b.ne #0x1177ec */
  if (ARC_COND(c, 1)) goto L_1177ec;
L_117940:;
  /* 117940: add x0, sp, #0x90 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(144)));
  /* 117944: mov x1, x27 */
  ARC_X_W(c, 1, ARC_X_R(c, 27));
  /* 117948: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* 11794c: mov x3, x27 */
  ARC_X_W(c, 3, ARC_X_R(c, 27));
  /* 117950: mov x4, x27 */
  ARC_X_W(c, 4, ARC_X_R(c, 27));
  /* 117954: mov x5, xzr */
  ARC_X_W(c, 5, ARC_X_R(c, 31));
  /* 117958: mov x6, xzr */
  ARC_X_W(c, 6, ARC_X_R(c, 31));
  /* 11795c: bl #0x142da0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1145184));
  fn1_142da0(c);
  /* 117960: mov x8, x27 */
  ARC_X_W(c, 8, ARC_X_R(c, 27));
  /* 117964: b #0x1177ec */
  goto L_1177ec;
L_117968:;
  /* 117968: cbz x24, #0x117abc */
  if ((ARC_X_R(c, 24)) == 0) goto L_117abc;
  /* 11796c: ldrb w8, [x24] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 24)));
  /* 117970: ldr x9, [x24, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 24) + INT64_C(8))));
  /* 117974: lsr x10, x8, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* 117978: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 11797c: csel x8, x10, x9, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* 117980: cmp x8, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(2));
  /* 117984: b.lo #0x117abc */
  if (ARC_COND(c, 3)) goto L_117abc;
  /* 117988: add x19, x24, #4 */
  ARC_X_W(c, 19, (ARC_X_R(c, 24) + UINT64_C(4)));
  /* 11798c: mov w20, #2 */
  ARC_W_W(c, 20, UINT64_C(2));
  /* 117990: mov w22, #1 */
  ARC_W_W(c, 22, UINT64_C(1));
  /* 117994: b #0x1179c4 */
  goto L_1179c4;
L_117998:;
  /* 117998: add x8, x8, #4 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(4)));
  /* 11799c: str x8, [x0, #0x18] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(24)), ARC_X_R(c, 8));
L_1179a0:;
  /* 1179a0: ldrb w8, [x24] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 24)));
  /* 1179a4: ldr x9, [x24, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 24) + INT64_C(8))));
  /* 1179a8: mov w22, w20 */
  ARC_W_W(c, 22, ARC_W_R(c, 20));
  /* 1179ac: add w20, w20, #1 */
  ARC_W_W(c, 20, (ARC_W_R(c, 20) + UINT64_C(1)));
  /* 1179b0: lsr x10, x8, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* 1179b4: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 1179b8: csel x8, x10, x9, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* 1179bc: cmp x8, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 22));
  /* 1179c0: b.ls #0x117abc */
  if (ARC_COND(c, 9)) goto L_117abc;
L_1179c4:;
  /* 1179c4: ldr x0, [x21] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 21)));
  /* 1179c8: cbz x0, #0x117a18 */
  if ((ARC_X_R(c, 0)) == 0) goto L_117a18;
  /* 1179cc: ldp x8, x9, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 1179d0: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 1179d4: b.eq #0x1179e0 */
  if (ARC_COND(c, 0)) goto L_1179e0;
  /* 1179d8: ldr w0, [x8] */
  ARC_W_W(c, 0, arc_ld32(ARC_X_R(c, 8)));
  /* 1179dc: b #0x1179ec */
  goto L_1179ec;
L_1179e0:;
  /* 1179e0: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 1179e4: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 1179e8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1145324));
  arc_dispatch(c, ARC_X_R(c, 8));
L_1179ec:;
  /* 1179ec: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 1179f0: b.eq #0x117a10 */
  if (ARC_COND(c, 0)) goto L_117a10;
  /* 1179f4: ldr x0, [x21] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 21)));
  /* 1179f8: cmp x0, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 0), UINT64_C(0));
  /* 1179fc: cset w23, eq */
  ARC_W_W(c, 23, (ARC_COND(c, 0) ? 1 : 0));
  /* 117a00: cbnz x25, #0x117a20 */
  if ((ARC_X_R(c, 25)) != 0) goto L_117a20;
L_117a04:;
  /* 117a04: tbnz w23, #0, #0x117bbc */
  if (((ARC_W_R(c, 23)) >> 0 & 1) != 0) goto L_117bbc;
  /* 117a08: mov x25, xzr */
  ARC_X_W(c, 25, ARC_X_R(c, 31));
  /* 117a0c: b #0x117a60 */
  goto L_117a60;
L_117a10:;
  /* 117a10: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
  /* 117a14: str xzr, [x21] */
  arc_st64(ARC_X_R(c, 21), ARC_X_R(c, 31));
L_117a18:;
  /* 117a18: mov w23, #1 */
  ARC_W_W(c, 23, UINT64_C(1));
  /* 117a1c: cbz x25, #0x117a04 */
  if ((ARC_X_R(c, 25)) == 0) goto L_117a04;
L_117a20:;
  /* 117a20: ldp x8, x9, [x25, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 25) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 117a24: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 117a28: b.eq #0x117a34 */
  if (ARC_COND(c, 0)) goto L_117a34;
  /* 117a2c: ldr w0, [x8] */
  ARC_W_W(c, 0, arc_ld32(ARC_X_R(c, 8)));
  /* 117a30: b #0x117a44 */
  goto L_117a44;
L_117a34:;
  /* 117a34: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 117a38: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 117a3c: mov x0, x25 */
  ARC_X_W(c, 0, ARC_X_R(c, 25));
  /* 117a40: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1145412));
  arc_dispatch(c, ARC_X_R(c, 8));
L_117a44:;
  /* 117a44: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 117a48: cset w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? 1 : 0));
  /* 117a4c: cmp w23, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 23), ARC_W_R(c, 8));
  /* 117a50: b.eq #0x117bbc */
  if (ARC_COND(c, 0)) goto L_117bbc;
  /* 117a54: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 117a58: ldr x0, [x21] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 21)));
  /* 117a5c: csel x25, xzr, x25, eq */
  ARC_X_W(c, 25, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 25)));
L_117a60:;
  /* 117a60: ldp x8, x9, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 117a64: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 117a68: b.eq #0x117a74 */
  if (ARC_COND(c, 0)) goto L_117a74;
  /* 117a6c: ldr w0, [x8] */
  ARC_W_W(c, 0, arc_ld32(ARC_X_R(c, 8)));
  /* 117a70: b #0x117a80 */
  goto L_117a80;
L_117a74:;
  /* 117a74: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 117a78: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 117a7c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1145472));
  arc_dispatch(c, ARC_X_R(c, 8));
L_117a80:;
  /* 117a80: ldrb w8, [x24] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 24)));
  /* 117a84: ldr x9, [x24, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 24) + INT64_C(16))));
  /* 117a88: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 117a8c: csel x8, x19, x9, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 19)) : ARC_X_R(c, 9)));
  /* 117a90: ldr w8, [x8, x22, lsl #2] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 22)) << 2))));
  /* 117a94: cmp w0, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 0), ARC_W_R(c, 8));
  /* 117a98: b.ne #0x117bbc */
  if (ARC_COND(c, 1)) goto L_117bbc;
  /* 117a9c: ldr x0, [x21] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 21)));
  /* 117aa0: ldp x8, x9, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 117aa4: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 117aa8: b.ne #0x117998 */
  if (ARC_COND(c, 1)) goto L_117998;
  /* 117aac: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 117ab0: ldr x8, [x8, #0x50] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(80))));
  /* 117ab4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1145528));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 117ab8: b #0x1179a0 */
  goto L_1179a0;
L_117abc:;
  /* 117abc: ldr x12, [sp, #0x80] */
  ARC_X_W(c, 12, arc_ld64(((c)->sp + INT64_C(128))));
  /* 117ac0: cmp x28, x12 */
  (void)arc_sub64(c, ARC_X_R(c, 28), ARC_X_R(c, 12));
  /* 117ac4: b.eq #0x117b80 */
  if (ARC_COND(c, 0)) goto L_117b80;
  /* 117ac8: ldrb w9, [sp, #0xf0] */
  ARC_W_W(c, 9, arc_ld8(((c)->sp + INT64_C(240))));
  /* 117acc: ldr x8, [sp, #0xf8] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(248))));
  /* 117ad0: sub x11, x12, x28 */
  ARC_X_W(c, 11, (ARC_X_R(c, 12) - ARC_X_R(c, 28)));
  /* 117ad4: mov w21, #1 */
  ARC_W_W(c, 21, UINT64_C(1));
  /* 117ad8: lsr x10, x9, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(1)) & 63)));
  /* 117adc: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* 117ae0: csel x8, x10, x8, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 8)));
  /* 117ae4: cmp x11, #5 */
  (void)arc_sub64(c, ARC_X_R(c, 11), UINT64_C(5));
  /* 117ae8: b.lt #0x117bd0 */
  if (ARC_COND(c, 11)) goto L_117bd0;
  /* 117aec: cbz x8, #0x117bd0 */
  if ((ARC_X_R(c, 8)) == 0) goto L_117bd0;
  /* 117af0: sub x8, x12, #4 */
  ARC_X_W(c, 8, (ARC_X_R(c, 12) - UINT64_C(4)));
  /* 117af4: cmp x28, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 28), ARC_X_R(c, 8));
  /* 117af8: b.hs #0x117b88 */
  if (ARC_COND(c, 2)) goto L_117b88;
  /* 117afc: add x9, x28, #4 */
  ARC_X_W(c, 9, (ARC_X_R(c, 28) + UINT64_C(4)));
  /* 117b00: mov x10, x8 */
  ARC_X_W(c, 10, ARC_X_R(c, 8));
L_117b04:;
  /* 117b04: ldr w11, [x10] */
  ARC_W_W(c, 11, arc_ld32(ARC_X_R(c, 10)));
  /* 117b08: ldur w12, [x9, #-4] */
  ARC_W_W(c, 12, arc_ld32((ARC_X_R(c, 9) + INT64_C(-4))));
  /* 117b0c: stur w11, [x9, #-4] */
  arc_st32((ARC_X_R(c, 9) + INT64_C(-4)), ARC_W_R(c, 11));
  /* 117b10: str w12, [x10], #0xfffffffffffffffc */
  { const uint64_t _a = ARC_X_R(c, 10);
    ARC_X_W(c, 10, ARC_X_R(c, 10) + INT64_C(-4));
    arc_st32(_a, ARC_W_R(c, 12));
  }
  /* 117b14: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* 117b18: add x9, x9, #4 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(4)));
  /* 117b1c: b.lo #0x117b04 */
  if (ARC_COND(c, 3)) goto L_117b04;
  /* 117b20: ldrb w9, [sp, #0xf0] */
  ARC_W_W(c, 9, arc_ld8(((c)->sp + INT64_C(240))));
  /* 117b24: ldp x12, x11, [sp, #0xf8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(248));
    ARC_X_W(c, 12, arc_ld64(_pa));
    ARC_X_W(c, 11, arc_ld64(_pa + 8));
  }
  /* 117b28: lsr x10, x9, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(1)) & 63)));
  /* 117b2c: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* 117b30: add x9, sp, #0xf0 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(240)));
  /* 117b34: csinc x9, x11, x9, ne */
  ARC_X_W(c, 9, (ARC_COND(c, 1) ? (ARC_X_R(c, 11)) : ((ARC_X_R(c, 9)) + 1)));
  /* 117b38: mov x11, x28 */
  ARC_X_W(c, 11, ARC_X_R(c, 28));
  /* 117b3c: csel x10, x10, x12, eq */
  ARC_X_W(c, 10, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 12)));
  /* 117b40: add x10, x9, x10 */
  ARC_X_W(c, 10, (ARC_X_R(c, 9) + ARC_X_R(c, 10)));
  /* 117b44: b #0x117b60 */
  goto L_117b60;
L_117b48:;
  /* 117b48: sub x12, x10, x9 */
  ARC_X_W(c, 12, (ARC_X_R(c, 10) - ARC_X_R(c, 9)));
  /* 117b4c: add x11, x11, #4 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) + UINT64_C(4)));
  /* 117b50: cmp x12, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 12), UINT64_C(1));
  /* 117b54: cinc x9, x9, gt */
  ARC_X_W(c, 9, (ARC_COND(c, 12) ? (ARC_X_R(c, 9)) + 1 : (ARC_X_R(c, 9))));
  /* 117b58: cmp x11, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 8));
  /* 117b5c: b.hs #0x117b98 */
  if (ARC_COND(c, 2)) goto L_117b98;
L_117b60:;
  /* 117b60: ldrb w12, [x9] */
  ARC_W_W(c, 12, arc_ld8(ARC_X_R(c, 9)));
  /* 117b64: cbz w12, #0x117b48 */
  if ((ARC_W_R(c, 12)) == 0) goto L_117b48;
  /* 117b68: cmp w12, #0xff */
  (void)arc_sub32(c, ARC_W_R(c, 12), UINT64_C(255));
  /* 117b6c: b.eq #0x117b48 */
  if (ARC_COND(c, 0)) goto L_117b48;
  /* 117b70: ldr w13, [x11] */
  ARC_W_W(c, 13, arc_ld32(ARC_X_R(c, 11)));
  /* 117b74: cmp w13, w12 */
  (void)arc_sub32(c, ARC_W_R(c, 13), ARC_W_R(c, 12));
  /* 117b78: b.eq #0x117b48 */
  if (ARC_COND(c, 0)) goto L_117b48;
  /* 117b7c: b #0x117bbc */
  goto L_117bbc;
L_117b80:;
  /* 117b80: mov w21, #1 */
  ARC_W_W(c, 21, UINT64_C(1));
  /* 117b84: b #0x117bd0 */
  goto L_117bd0;
L_117b88:;
  /* 117b88: ldr x10, [sp, #0x100] */
  ARC_X_W(c, 10, arc_ld64(((c)->sp + INT64_C(256))));
  /* 117b8c: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* 117b90: add x9, sp, #0xf0 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(240)));
  /* 117b94: csinc x9, x10, x9, ne */
  ARC_X_W(c, 9, (ARC_COND(c, 1) ? (ARC_X_R(c, 10)) : ((ARC_X_R(c, 9)) + 1)));
L_117b98:;
  /* 117b98: ldrb w9, [x9] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 9)));
  /* 117b9c: mov w21, #1 */
  ARC_W_W(c, 21, UINT64_C(1));
  /* 117ba0: cbz w9, #0x117bd0 */
  if ((ARC_W_R(c, 9)) == 0) goto L_117bd0;
  /* 117ba4: cmp w9, #0xff */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(255));
  /* 117ba8: b.eq #0x117bd0 */
  if (ARC_COND(c, 0)) goto L_117bd0;
  /* 117bac: ldr w8, [x8] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 8)));
  /* 117bb0: sub w8, w8, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) - UINT64_C(1)));
  /* 117bb4: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* 117bb8: b.lo #0x117bd0 */
  if (ARC_COND(c, 3)) goto L_117bd0;
L_117bbc:;
  /* 117bbc: ldr x9, [sp, #0x20] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(32))));
  /* 117bc0: mov w21, wzr */
  ARC_W_W(c, 21, ARC_W_R(c, 31));
  /* 117bc4: ldr w8, [x9] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 9)));
  /* 117bc8: orr w8, w8, #4 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | UINT64_C(4)));
  /* 117bcc: str w8, [x9] */
  arc_st32(ARC_X_R(c, 9), ARC_W_R(c, 8));
L_117bd0:;
  /* 117bd0: ldrb w8, [sp, #0x90] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(144))));
  /* 117bd4: tbnz w8, #0, #0x117c3c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_117c3c;
  /* 117bd8: ldrb w8, [sp, #0xa8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(168))));
  /* 117bdc: tbnz w8, #0, #0x117c58 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_117c58;
L_117be0:;
  /* 117be0: ldrb w8, [sp, #0xc0] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(192))));
  /* 117be4: tbnz w8, #0, #0x117c74 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_117c74;
L_117be8:;
  /* 117be8: ldrb w8, [sp, #0xd8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(216))));
  /* 117bec: tbnz w8, #0, #0x117c90 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_117c90;
L_117bf0:;
  /* 117bf0: ldrb w8, [sp, #0xf0] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(240))));
  /* 117bf4: tbz w8, #0, #0x117c08 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_117c08;
L_117bf8:;
  /* 117bf8: ldr x8, [sp, #0xf0] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(240))));
  /* 117bfc: ldr x0, [sp, #0x100] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(256))));
  /* 117c00: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 117c04: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1145864));
  fn1_142608(c);
L_117c08:;
  /* 117c08: ldr x8, [sp, #0x60] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(96))));
  /* 117c0c: mov x0, x28 */
  ARC_X_W(c, 0, ARC_X_R(c, 28));
  /* 117c10: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1145876));
  arc_dispatch(c, ARC_X_R(c, 8));
L_117c14:;
  /* 117c14: mov w0, w21 */
  ARC_W_W(c, 0, ARC_W_R(c, 21));
  /* 117c18: add sp, sp, #0x2b0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(688)));
  /* 117c1c: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 117c20: ldp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 117c24: ldp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 117c28: ldp x26, x25, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* 117c2c: ldp x28, x27, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* 117c30: ldp x29, x30, [sp], #0x60 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(96);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 117c34: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 117c38: ret  */
  return;
L_117c3c:;
  /* 117c3c: ldr x8, [sp, #0x90] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(144))));
  /* 117c40: ldr x0, [sp, #0xa0] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(160))));
  /* 117c44: lsl x8, x8, #2 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) << ((UINT64_C(2)) & 63)));
  /* 117c48: and x1, x8, #0xfffffffffffffff8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551608)));
  /* 117c4c: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1145936));
  fn1_142608(c);
  /* 117c50: ldrb w8, [sp, #0xa8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(168))));
  /* 117c54: tbz w8, #0, #0x117be0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_117be0;
L_117c58:;
  /* 117c58: ldr x8, [sp, #0xa8] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(168))));
  /* 117c5c: ldr x0, [sp, #0xb8] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(184))));
  /* 117c60: lsl x8, x8, #2 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) << ((UINT64_C(2)) & 63)));
  /* 117c64: and x1, x8, #0xfffffffffffffff8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551608)));
  /* 117c68: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1145964));
  fn1_142608(c);
  /* 117c6c: ldrb w8, [sp, #0xc0] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(192))));
  /* 117c70: tbz w8, #0, #0x117be8 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_117be8;
L_117c74:;
  /* 117c74: ldr x8, [sp, #0xc0] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(192))));
  /* 117c78: ldr x0, [sp, #0xd0] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(208))));
  /* 117c7c: lsl x8, x8, #2 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) << ((UINT64_C(2)) & 63)));
  /* 117c80: and x1, x8, #0xfffffffffffffff8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551608)));
  /* 117c84: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1145992));
  fn1_142608(c);
  /* 117c88: ldrb w8, [sp, #0xd8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(216))));
  /* 117c8c: tbz w8, #0, #0x117bf0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_117bf0;
L_117c90:;
  /* 117c90: ldr x8, [sp, #0xd8] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(216))));
  /* 117c94: ldr x0, [sp, #0xe8] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(232))));
  /* 117c98: lsl x8, x8, #2 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) << ((UINT64_C(2)) & 63)));
  /* 117c9c: and x1, x8, #0xfffffffffffffff8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551608)));
  /* 117ca0: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1146020));
  fn1_142608(c);
  /* 117ca4: ldrb w8, [sp, #0xf0] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(240))));
  /* 117ca8: tbnz w8, #0, #0x117bf8 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_117bf8;
  /* 117cac: b #0x117c08 */
  goto L_117c08;
L_117cb0:;
  /* 117cb0: str x28, [sp, #0x38] */
  arc_st64(((c)->sp + INT64_C(56)), ARC_X_R(c, 28));
  /* 117cb4: bl #0x142c08 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1146040));
  fn1_142c08(c);
L_117cb8:;
  /* 117cb8: str x28, [sp, #0x38] */
  arc_st64(((c)->sp + INT64_C(56)), ARC_X_R(c, 28));
  /* 117cbc: bl #0x142c08 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1146048));
  fn1_142c08(c);
L_117cc0:;
  /* 117cc0: str x28, [sp, #0x38] */
  arc_st64(((c)->sp + INT64_C(56)), ARC_X_R(c, 28));
  /* 117cc4: bl #0x142c08 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1146056));
  fn1_142c08(c);
L_117cc8:;
  /* 117cc8: str x28, [sp, #0x38] */
  arc_st64(((c)->sp + INT64_C(56)), ARC_X_R(c, 28));
  /* 117ccc: bl #0x142c08 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1146064));
  fn1_142c08(c);
  /* 117cd0: b #0x117d30 */
  goto L_117d30;
  /* 117cd4: b #0x117d2c */
  goto L_117d2c;
  /* 117cd8: b #0x117d2c */
  goto L_117d2c;
  /* 117cdc: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1146080));
  fn1_a1454(c);
  /* 117ce0: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 117ce4: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 117ce8: ldr x8, [x8, #0xbc8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3016))));
  /* 117cec: str x8, [sp, #0x60] */
  arc_st64(((c)->sp + INT64_C(96)), ARC_X_R(c, 8));
  /* 117cf0: add x8, sp, #0x118 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(280)));
  /* 117cf4: str x8, [sp, #0x38] */
  arc_st64(((c)->sp + INT64_C(56)), ARC_X_R(c, 8));
  /* 117cf8: b #0x117d34 */
  goto L_117d34;
  /* 117cfc: b #0x117d2c */
  goto L_117d2c;
  /* 117d00: b #0x117d30 */
  goto L_117d30;
  /* 117d04: b #0x117d2c */
  goto L_117d2c;
  /* 117d08: b #0x117d30 */
  goto L_117d30;
  /* 117d0c: b #0x117d30 */
  goto L_117d30;
  /* 117d10: b #0x117d2c */
  goto L_117d2c;
  /* 117d14: b #0x117d30 */
  goto L_117d30;
  /* 117d18: b #0x117d30 */
  goto L_117d30;
  /* 117d1c: b #0x117d30 */
  goto L_117d30;
  /* 117d20: b #0x117d2c */
  goto L_117d2c;
  /* 117d24: b #0x117d2c */
  goto L_117d2c;
  /* 117d28: b #0x117d2c */
  goto L_117d2c;
L_117d2c:;
  /* 117d2c: str x28, [sp, #0x38] */
  arc_st64(((c)->sp + INT64_C(56)), ARC_X_R(c, 28));
L_117d30:;
  /* 117d30: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
L_117d34:;
  /* 117d34: ldrb w8, [sp, #0x90] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(144))));
  /* 117d38: tbnz w8, #0, #0x117d80 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_117d80;
  /* 117d3c: ldrb w8, [sp, #0xa8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(168))));
  /* 117d40: tbnz w8, #0, #0x117d9c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_117d9c;
L_117d44:;
  /* 117d44: ldrb w8, [sp, #0xc0] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(192))));
  /* 117d48: tbnz w8, #0, #0x117db8 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_117db8;
L_117d4c:;
  /* 117d4c: ldrb w8, [sp, #0xd8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(216))));
  /* 117d50: tbnz w8, #0, #0x117dd4 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_117dd4;
L_117d54:;
  /* 117d54: ldrb w8, [sp, #0xf0] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(240))));
  /* 117d58: tbz w8, #0, #0x117d6c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_117d6c;
L_117d5c:;
  /* 117d5c: ldr x8, [sp, #0xf0] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(240))));
  /* 117d60: ldr x0, [sp, #0x100] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(256))));
  /* 117d64: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 117d68: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1146220));
  fn1_142608(c);
L_117d6c:;
  /* 117d6c: ldr x0, [sp, #0x38] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(56))));
  /* 117d70: ldr x8, [sp, #0x60] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(96))));
  /* 117d74: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1146232));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 117d78: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 117d7c: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1146240));
  fn1_9cc20(c);
L_117d80:;
  /* 117d80: ldr x8, [sp, #0x90] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(144))));
  /* 117d84: ldr x0, [sp, #0xa0] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(160))));
  /* 117d88: lsl x8, x8, #2 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) << ((UINT64_C(2)) & 63)));
  /* 117d8c: and x1, x8, #0xfffffffffffffff8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551608)));
  /* 117d90: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1146260));
  fn1_142608(c);
  /* 117d94: ldrb w8, [sp, #0xa8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(168))));
  /* 117d98: tbz w8, #0, #0x117d44 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_117d44;
L_117d9c:;
  /* 117d9c: ldr x8, [sp, #0xa8] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(168))));
  /* 117da0: ldr x0, [sp, #0xb8] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(184))));
  /* 117da4: lsl x8, x8, #2 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) << ((UINT64_C(2)) & 63)));
  /* 117da8: and x1, x8, #0xfffffffffffffff8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551608)));
  /* 117dac: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1146288));
  fn1_142608(c);
  /* 117db0: ldrb w8, [sp, #0xc0] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(192))));
  /* 117db4: tbz w8, #0, #0x117d4c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_117d4c;
L_117db8:;
  /* 117db8: ldr x8, [sp, #0xc0] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(192))));
  /* 117dbc: ldr x0, [sp, #0xd0] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(208))));
  /* 117dc0: lsl x8, x8, #2 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) << ((UINT64_C(2)) & 63)));
  /* 117dc4: and x1, x8, #0xfffffffffffffff8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551608)));
  /* 117dc8: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1146316));
  fn1_142608(c);
  /* 117dcc: ldrb w8, [sp, #0xd8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(216))));
  /* 117dd0: tbz w8, #0, #0x117d54 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_117d54;
L_117dd4:;
  /* 117dd4: ldr x8, [sp, #0xd8] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(216))));
  /* 117dd8: ldr x0, [sp, #0xe8] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(232))));
  /* 117ddc: lsl x8, x8, #2 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) << ((UINT64_C(2)) & 63)));
  /* 117de0: and x1, x8, #0xfffffffffffffff8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551608)));
  /* 117de4: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1146344));
  fn1_142608(c);
  /* 117de8: ldrb w8, [sp, #0xf0] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(240))));
  /* 117dec: tbnz w8, #0, #0x117d5c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_117d5c;
  /* 117df0: b #0x117d6c */
  goto L_117d6c;
  /* 117df4: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1146360));
  fn1_a1454(c);
}

void fn1_124784(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039125892));
  /* 124784: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 124788: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 12478c: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 124790: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 124794: nop  */
  /* nop: no architectural effect here */
  /* 124798: adr x8, #0x15dd90 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1432976)));
  /* 12479c: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 1247a0: tbz w8, #0, #0x1247bc */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1247bc;
L_1247a4:;
  /* 1247a4: nop  */
  /* nop: no architectural effect here */
  /* 1247a8: adr x0, #0x15dd88 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432968)));
  /* 1247ac: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1247b0: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1247b4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 1247b8: ret  */
  return;
L_1247bc:;
  /* 1247bc: nop  */
  /* nop: no architectural effect here */
  /* 1247c0: adr x0, #0x15dd90 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432976)));
  /* 1247c4: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1198024));
  fn1_1424b8(c);
  /* 1247c8: cbz w0, #0x1247a4 */
  if ((ARC_W_R(c, 0)) == 0) goto L_1247a4;
  /* 1247cc: bl #0x143ac0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1198032));
  fn1_143ac0(c);
  /* 1247d0: nop  */
  /* nop: no architectural effect here */
  /* 1247d4: adr x0, #0x15dd88 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432968)));
  /* 1247d8: nop  */
  /* nop: no architectural effect here */
  /* 1247dc: adr x1, #0x15dd78 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1432952)));
  /* 1247e0: bl #0x143460 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1198052));
  fn1_143460(c);
  /* 1247e4: nop  */
  /* nop: no architectural effect here */
  /* 1247e8: adr x0, #0x15dd90 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432976)));
  /* 1247ec: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1198064));
  fn1_1424d0(c);
  /* 1247f0: b #0x1247a4 */
  goto L_1247a4;
  /* 1247f4: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1247f8: nop  */
  /* nop: no architectural effect here */
  /* 1247fc: adr x0, #0x15dd90 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432976)));
  /* 124800: bl #0x1424e8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1198084));
  fn1_1424e8(c);
  /* 124804: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 124808: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1198092));
  fn1_9cc20(c);
}

void fn1_12738c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039137164));
  /* 12738c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 127390: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* 127394: stp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 127398: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 12739c: add x29, sp, #0x30 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(48)));
  /* 1273a0: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 1273a4: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 1273a8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1273ac: ldr x8, [x8, #0xc80] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3200))));
  /* 1273b0: sub x9, x2, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 2) - UINT64_C(1)));
  /* 1273b4: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* 1273b8: stp x8, x9, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 1273bc: mov w0, #0x1fbf */
  ARC_W_W(c, 0, UINT64_C(8127));
  /* 1273c0: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 1273c4: bl #0x1441e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1209288));
  fn1_1441e0(c);
  /* 1273c8: str x0, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 0));
  /* 1273cc: cbz x0, #0x1273e4 */
  if ((ARC_X_R(c, 0)) == 0) goto L_1273e4;
  /* 1273d0: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1273d4: ldp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1273d8: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* 1273dc: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 1273e0: ret  */
  return;
L_1273e4:;
  /* 1273e4: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 1273e8: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 1273ec: bl #0x11dda8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1209328));
  fn1_11dda8(c);
  /* 1273f0: adrp x0, #0x52000 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(335872)));
  /* 1273f4: add x0, x0, #0x1b6 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(438)));
  /* 1273f8: add x8, sp, #0x18 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(24)));
  /* 1273fc: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 127400: add x20, sp, #0x18 */
  ARC_X_W(c, 20, ((c)->sp + UINT64_C(24)));
  /* 127404: bl #0x125878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1209352));
  fn1_125878(c);
  /* 127408: ldrb w8, [sp, #0x18] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(24))));
  /* 12740c: ldr x9, [sp, #0x28] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(40))));
  /* 127410: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 127414: csinc x0, x9, x20, ne */
  ARC_X_W(c, 0, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 20)) + 1)));
  /* 127418: bl #0x142c98 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1209372));
  fn1_142c98(c);
  /* 12741c: ldrb w8, [sp, #0x18] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(24))));
  /* 127420: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 127424: tbz w8, #0, #0x127440 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_127440;
  /* 127428: ldr x8, [sp, #0x18] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(24))));
  /* 12742c: ldr x0, [sp, #0x28] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(40))));
  /* 127430: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 127434: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1209400));
  fn1_142608(c);
  /* 127438: b #0x127440 */
  goto L_127440;
  /* 12743c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
L_127440:;
  /* 127440: ldrb w8, [sp] */
  ARC_W_W(c, 8, arc_ld8((c)->sp));
  /* 127444: tbz w8, #0, #0x127464 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_127464;
  /* 127448: ldr x8, [sp] */
  ARC_X_W(c, 8, arc_ld64((c)->sp));
  /* 12744c: ldr x0, [sp, #0x10] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(16))));
  /* 127450: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 127454: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1209432));
  fn1_142608(c);
  /* 127458: b #0x127464 */
  goto L_127464;
  /* 12745c: b #0x127460 */
  goto L_127460;
L_127460:;
  /* 127460: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
L_127464:;
  /* 127464: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 127468: bl #0x143ec8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1209452));
  fn1_143ec8(c);
  /* 12746c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 127470: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1209460));
  fn1_9cc20(c);
}

void fn1_129a00(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039147008));
  /* 129a00: bti c */
  /* bti: no architectural effect here */
  /* 129a04: cmp x2, x3 */
  (void)arc_sub64(c, ARC_X_R(c, 2), ARC_X_R(c, 3));
  /* 129a08: b.hs #0x129b08 */
  if (ARC_COND(c, 2)) goto L_129b08;
  /* 129a0c: mov w8, #0xd800 */
  ARC_W_W(c, 8, UINT64_C(55296));
  /* 129a10: b #0x129a24 */
  goto L_129a24;
L_129a14:;
  /* 129a14: mov x5, x9 */
  ARC_X_W(c, 5, ARC_X_R(c, 9));
L_129a18:;
  /* 129a18: add x2, x2, #4 */
  ARC_X_W(c, 2, (ARC_X_R(c, 2) + UINT64_C(4)));
  /* 129a1c: cmp x2, x3 */
  (void)arc_sub64(c, ARC_X_R(c, 2), ARC_X_R(c, 3));
  /* 129a20: b.hs #0x129b08 */
  if (ARC_COND(c, 2)) goto L_129b08;
L_129a24:;
  /* 129a24: ldr w9, [x2] */
  ARC_W_W(c, 9, arc_ld32(ARC_X_R(c, 2)));
  /* 129a28: lsr w10, w9, #0x10 */
  ARC_W_W(c, 10, ((uint32_t)(ARC_W_R(c, 9)) >> ((UINT64_C(16)) & 31)));
  /* 129a2c: and w11, w9, #0xfffff800 */
  ARC_W_W(c, 11, (ARC_W_R(c, 9) & UINT64_C(4294965248)));
  /* 129a30: cmp w10, #0x10 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(16));
  /* 129a34: ccmp w11, w8, #4, ls */
  if (ARC_COND(c, 9)) { (void)arc_sub32(c, ARC_W_R(c, 11), ARC_W_R(c, 8)); }
  else { (c)->nf = 0; (c)->zf = 1;
          (c)->cf = 0; (c)->vf = 0; }
  /* 129a38: b.eq #0x129b10 */
  if (ARC_COND(c, 0)) goto L_129b10;
  /* 129a3c: cmp w9, #0x7f */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(127));
  /* 129a40: b.hi #0x129a58 */
  if (ARC_COND(c, 8)) goto L_129a58;
  /* 129a44: sub x10, x6, x5 */
  ARC_X_W(c, 10, (ARC_X_R(c, 6) - ARC_X_R(c, 5)));
  /* 129a48: cmp x10, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 10), UINT64_C(1));
  /* 129a4c: b.lt #0x129b18 */
  if (ARC_COND(c, 11)) goto L_129b18;
  /* 129a50: strb w9, [x5], #1 */
  { const uint64_t _a = ARC_X_R(c, 5);
    ARC_X_W(c, 5, ARC_X_R(c, 5) + INT64_C(1));
    arc_st8(_a, ARC_W_R(c, 9));
  }
  /* 129a54: b #0x129a18 */
  goto L_129a18;
L_129a58:;
  /* 129a58: cmp w9, #0x7ff */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(2047));
  /* 129a5c: b.hi #0x129a8c */
  if (ARC_COND(c, 8)) goto L_129a8c;
  /* 129a60: sub x10, x6, x5 */
  ARC_X_W(c, 10, (ARC_X_R(c, 6) - ARC_X_R(c, 5)));
  /* 129a64: cmp x10, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 10), UINT64_C(2));
  /* 129a68: b.lt #0x129b18 */
  if (ARC_COND(c, 11)) goto L_129b18;
  /* 129a6c: lsr w10, w9, #6 */
  ARC_W_W(c, 10, ((uint32_t)(ARC_W_R(c, 9)) >> ((UINT64_C(6)) & 31)));
  /* 129a70: mov w11, #0x80 */
  ARC_W_W(c, 11, UINT64_C(128));
  /* 129a74: bfxil w11, w9, #0, #6 */
  ARC_W_W(c, 11, (((uint32_t)(ARC_W_R(c, 11)) & UINT64_C(4294967232)) | ((((uint32_t)(ARC_W_R(c, 9))) >> 0) & UINT64_C(63))));
  /* 129a78: add x9, x5, #2 */
  ARC_X_W(c, 9, (ARC_X_R(c, 5) + UINT64_C(2)));
  /* 129a7c: orr w10, w10, #0xc0 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) | UINT64_C(192)));
  /* 129a80: strb w10, [x5] */
  arc_st8(ARC_X_R(c, 5), ARC_W_R(c, 10));
  /* 129a84: strb w11, [x5, #1] */
  arc_st8((ARC_X_R(c, 5) + INT64_C(1)), ARC_W_R(c, 11));
  /* 129a88: b #0x129a14 */
  goto L_129a14;
L_129a8c:;
  /* 129a8c: sub x11, x6, x5 */
  ARC_X_W(c, 11, (ARC_X_R(c, 6) - ARC_X_R(c, 5)));
  /* 129a90: cbnz w10, #0x129ac8 */
  if ((ARC_W_R(c, 10)) != 0) goto L_129ac8;
  /* 129a94: cmp x11, #3 */
  (void)arc_sub64(c, ARC_X_R(c, 11), UINT64_C(3));
  /* 129a98: b.lt #0x129b18 */
  if (ARC_COND(c, 11)) goto L_129b18;
  /* 129a9c: lsr w10, w9, #0xc */
  ARC_W_W(c, 10, ((uint32_t)(ARC_W_R(c, 9)) >> ((UINT64_C(12)) & 31)));
  /* 129aa0: mov w11, #0x80 */
  ARC_W_W(c, 11, UINT64_C(128));
  /* 129aa4: mov w12, #0x80 */
  ARC_W_W(c, 12, UINT64_C(128));
  /* 129aa8: bfxil w11, w9, #6, #6 */
  ARC_W_W(c, 11, (((uint32_t)(ARC_W_R(c, 11)) & UINT64_C(4294967232)) | ((((uint32_t)(ARC_W_R(c, 9))) >> 6) & UINT64_C(63))));
  /* 129aac: bfxil w12, w9, #0, #6 */
  ARC_W_W(c, 12, (((uint32_t)(ARC_W_R(c, 12)) & UINT64_C(4294967232)) | ((((uint32_t)(ARC_W_R(c, 9))) >> 0) & UINT64_C(63))));
  /* 129ab0: add x9, x5, #3 */
  ARC_X_W(c, 9, (ARC_X_R(c, 5) + UINT64_C(3)));
  /* 129ab4: orr w10, w10, #0xe0 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) | UINT64_C(224)));
  /* 129ab8: strb w10, [x5] */
  arc_st8(ARC_X_R(c, 5), ARC_W_R(c, 10));
  /* 129abc: strb w11, [x5, #1] */
  arc_st8((ARC_X_R(c, 5) + INT64_C(1)), ARC_W_R(c, 11));
  /* 129ac0: strb w12, [x5, #2] */
  arc_st8((ARC_X_R(c, 5) + INT64_C(2)), ARC_W_R(c, 12));
  /* 129ac4: b #0x129a14 */
  goto L_129a14;
L_129ac8:;
  /* 129ac8: cmp x11, #4 */
  (void)arc_sub64(c, ARC_X_R(c, 11), UINT64_C(4));
  /* 129acc: b.lt #0x129b18 */
  if (ARC_COND(c, 11)) goto L_129b18;
  /* 129ad0: lsr w10, w9, #0x12 */
  ARC_W_W(c, 10, ((uint32_t)(ARC_W_R(c, 9)) >> ((UINT64_C(18)) & 31)));
  /* 129ad4: mov w11, #0x80 */
  ARC_W_W(c, 11, UINT64_C(128));
  /* 129ad8: mov w12, #0x80 */
  ARC_W_W(c, 12, UINT64_C(128));
  /* 129adc: mov w13, #0x80 */
  ARC_W_W(c, 13, UINT64_C(128));
  /* 129ae0: bfxil w11, w9, #0xc, #6 */
  ARC_W_W(c, 11, (((uint32_t)(ARC_W_R(c, 11)) & UINT64_C(4294967232)) | ((((uint32_t)(ARC_W_R(c, 9))) >> 12) & UINT64_C(63))));
  /* 129ae4: bfxil w12, w9, #6, #6 */
  ARC_W_W(c, 12, (((uint32_t)(ARC_W_R(c, 12)) & UINT64_C(4294967232)) | ((((uint32_t)(ARC_W_R(c, 9))) >> 6) & UINT64_C(63))));
  /* 129ae8: bfxil w13, w9, #0, #6 */
  ARC_W_W(c, 13, (((uint32_t)(ARC_W_R(c, 13)) & UINT64_C(4294967232)) | ((((uint32_t)(ARC_W_R(c, 9))) >> 0) & UINT64_C(63))));
  /* 129aec: orr w10, w10, #0xf0 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) | UINT64_C(240)));
  /* 129af0: add x9, x5, #4 */
  ARC_X_W(c, 9, (ARC_X_R(c, 5) + UINT64_C(4)));
  /* 129af4: strb w10, [x5] */
  arc_st8(ARC_X_R(c, 5), ARC_W_R(c, 10));
  /* 129af8: strb w11, [x5, #1] */
  arc_st8((ARC_X_R(c, 5) + INT64_C(1)), ARC_W_R(c, 11));
  /* 129afc: strb w12, [x5, #2] */
  arc_st8((ARC_X_R(c, 5) + INT64_C(2)), ARC_W_R(c, 12));
  /* 129b00: strb w13, [x5, #3] */
  arc_st8((ARC_X_R(c, 5) + INT64_C(3)), ARC_W_R(c, 13));
  /* 129b04: b #0x129a14 */
  goto L_129a14;
L_129b08:;
  /* 129b08: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 129b0c: b #0x129b1c */
  goto L_129b1c;
L_129b10:;
  /* 129b10: mov w0, #2 */
  ARC_W_W(c, 0, UINT64_C(2));
  /* 129b14: b #0x129b1c */
  goto L_129b1c;
L_129b18:;
  /* 129b18: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
L_129b1c:;
  /* 129b1c: str x2, [x4] */
  arc_st64(ARC_X_R(c, 4), ARC_X_R(c, 2));
  /* 129b20: str x5, [x7] */
  arc_st64(ARC_X_R(c, 7), ARC_X_R(c, 5));
  /* 129b24: ret  */
  return;
}

void fn1_12b0b4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039152820));
  /* 12b0b4: bti c */
  /* bti: no architectural effect here */
  /* 12b0b8: sub x8, x3, x2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 3) - ARC_X_R(c, 2)));
  /* 12b0bc: cmp x8, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(2));
  /* 12b0c0: b.lt #0x12b0e8 */
  if (ARC_COND(c, 11)) goto L_12b0e8;
  /* 12b0c4: ldr w8, [x0, #0x18] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 0) + INT64_C(24))));
  /* 12b0c8: tbz w8, #2, #0x12b0e8 */
  if (((ARC_W_R(c, 8)) >> 2 & 1) == 0) goto L_12b0e8;
  /* 12b0cc: ldrb w8, [x2] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 2)));
  /* 12b0d0: cmp w8, #0xff */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(255));
  /* 12b0d4: b.ne #0x12b0e8 */
  if (ARC_COND(c, 1)) goto L_12b0e8;
  /* 12b0d8: ldrb w8, [x2, #1] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 2) + INT64_C(1))));
  /* 12b0dc: cmp w8, #0xfe */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(254));
  /* 12b0e0: cset w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? 1 : 0));
  /* 12b0e4: add x2, x2, w8, uxtw #1 */
  ARC_X_W(c, 2, (ARC_X_R(c, 2) + ((uint64_t)(((uint64_t)(uint32_t)(ARC_W_R(c, 8)))) << 1)));
L_12b0e8:;
  /* 12b0e8: sub x8, x3, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 3) - UINT64_C(1)));
  /* 12b0ec: cmp x2, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 2), ARC_X_R(c, 8));
  /* 12b0f0: b.hs #0x12b18c */
  if (ARC_COND(c, 2)) goto L_12b18c;
  /* 12b0f4: ldr x9, [x0, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 12b0f8: mov w10, #0xd800 */
  ARC_W_W(c, 10, UINT64_C(55296));
  /* 12b0fc: mov w11, #0xdc00 */
  ARC_W_W(c, 11, UINT64_C(56320));
  /* 12b100: b #0x12b114 */
  goto L_12b114;
L_12b104:;
  /* 12b104: add x2, x2, x0 */
  ARC_X_W(c, 2, (ARC_X_R(c, 2) + ARC_X_R(c, 0)));
  /* 12b108: str w12, [x5], #4 */
  { const uint64_t _a = ARC_X_R(c, 5);
    ARC_X_W(c, 5, ARC_X_R(c, 5) + INT64_C(4));
    arc_st32(_a, ARC_W_R(c, 12));
  }
  /* 12b10c: cmp x2, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 2), ARC_X_R(c, 8));
  /* 12b110: b.hs #0x12b18c */
  if (ARC_COND(c, 2)) goto L_12b18c;
L_12b114:;
  /* 12b114: cmp x5, x6 */
  (void)arc_sub64(c, ARC_X_R(c, 5), ARC_X_R(c, 6));
  /* 12b118: b.hs #0x12b18c */
  if (ARC_COND(c, 2)) goto L_12b18c;
  /* 12b11c: ldrb w14, [x2, #1] */
  ARC_W_W(c, 14, arc_ld8((ARC_X_R(c, 2) + INT64_C(1))));
  /* 12b120: ldrb w12, [x2] */
  ARC_W_W(c, 12, arc_ld8(ARC_X_R(c, 2)));
  /* 12b124: lsl w13, w14, #8 */
  ARC_W_W(c, 13, ((uint32_t)(ARC_W_R(c, 14)) << ((UINT64_C(8)) & 31)));
  /* 12b128: bfi w12, w14, #8, #8 */
  ARC_W_W(c, 12, (((uint32_t)(ARC_W_R(c, 12)) & UINT64_C(4294902015)) | ((((uint32_t)(ARC_W_R(c, 14))) & UINT64_C(255)) << 8)));
  /* 12b12c: and w13, w13, #0xfc00 */
  ARC_W_W(c, 13, (ARC_W_R(c, 13) & UINT64_C(64512)));
  /* 12b130: cmp w13, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 13), ARC_W_R(c, 10));
  /* 12b134: b.eq #0x12b150 */
  if (ARC_COND(c, 0)) goto L_12b150;
  /* 12b138: cmp w13, w11 */
  (void)arc_sub32(c, ARC_W_R(c, 13), ARC_W_R(c, 11));
  /* 12b13c: b.eq #0x12b1a0 */
  if (ARC_COND(c, 0)) goto L_12b1a0;
  /* 12b140: cmp x9, w12, uxtw */
  (void)arc_sub64(c, ARC_X_R(c, 9), ((uint64_t)(uint32_t)(ARC_W_R(c, 12))));
  /* 12b144: mov w0, #2 */
  ARC_W_W(c, 0, UINT64_C(2));
  /* 12b148: b.hs #0x12b104 */
  if (ARC_COND(c, 2)) goto L_12b104;
  /* 12b14c: b #0x12b194 */
  goto L_12b194;
L_12b150:;
  /* 12b150: sub x13, x3, x2 */
  ARC_X_W(c, 13, (ARC_X_R(c, 3) - ARC_X_R(c, 2)));
  /* 12b154: cmp x13, #4 */
  (void)arc_sub64(c, ARC_X_R(c, 13), UINT64_C(4));
  /* 12b158: b.lt #0x12b1a8 */
  if (ARC_COND(c, 11)) goto L_12b1a8;
  /* 12b15c: ldrb w13, [x2, #3] */
  ARC_W_W(c, 13, arc_ld8((ARC_X_R(c, 2) + INT64_C(3))));
  /* 12b160: and w14, w13, #0xfc */
  ARC_W_W(c, 14, (ARC_W_R(c, 13) & UINT64_C(252)));
  /* 12b164: cmp w14, #0xdc */
  (void)arc_sub32(c, ARC_W_R(c, 14), UINT64_C(220));
  /* 12b168: b.ne #0x12b1a0 */
  if (ARC_COND(c, 1)) goto L_12b1a0;
  /* 12b16c: ldrb w14, [x2, #2] */
  ARC_W_W(c, 14, arc_ld8((ARC_X_R(c, 2) + INT64_C(2))));
  /* 12b170: bfi w14, w13, #8, #2 */
  ARC_W_W(c, 14, (((uint32_t)(ARC_W_R(c, 14)) & UINT64_C(4294966527)) | ((((uint32_t)(ARC_W_R(c, 13))) & UINT64_C(3)) << 8)));
  /* 12b174: bfi w14, w12, #0xa, #0xa */
  ARC_W_W(c, 14, (((uint32_t)(ARC_W_R(c, 14)) & UINT64_C(4293919743)) | ((((uint32_t)(ARC_W_R(c, 12))) & UINT64_C(1023)) << 10)));
  /* 12b178: add w12, w14, #0x10, lsl #12 */
  ARC_W_W(c, 12, (ARC_W_R(c, 14) + UINT64_C(65536)));
  /* 12b17c: cmp x9, x12 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 12));
  /* 12b180: b.lo #0x12b1a0 */
  if (ARC_COND(c, 3)) goto L_12b1a0;
  /* 12b184: mov w0, #4 */
  ARC_W_W(c, 0, UINT64_C(4));
  /* 12b188: b #0x12b104 */
  goto L_12b104;
L_12b18c:;
  /* 12b18c: cmp x2, x3 */
  (void)arc_sub64(c, ARC_X_R(c, 2), ARC_X_R(c, 3));
  /* 12b190: cset w0, lo */
  ARC_W_W(c, 0, (ARC_COND(c, 3) ? 1 : 0));
L_12b194:;
  /* 12b194: str x2, [x4] */
  arc_st64(ARC_X_R(c, 4), ARC_X_R(c, 2));
  /* 12b198: str x5, [x7] */
  arc_st64(ARC_X_R(c, 7), ARC_X_R(c, 5));
  /* 12b19c: ret  */
  return;
L_12b1a0:;
  /* 12b1a0: mov w0, #2 */
  ARC_W_W(c, 0, UINT64_C(2));
  /* 12b1a4: b #0x12b194 */
  goto L_12b194;
L_12b1a8:;
  /* 12b1a8: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 12b1ac: b #0x12b194 */
  goto L_12b194;
}

void fn1_12cc50(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039159888));
  /* 12cc50: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 12cc54: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 12cc58: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 12cc5c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 12cc60: nop  */
  /* nop: no architectural effect here */
  /* 12cc64: adr x8, #0x15de58 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1433176)));
  /* 12cc68: adrp x19, #0x15d000 */
  ARC_X_W(c, 19, (arc_image_bases[1] + UINT64_C(1429504)));
  /* 12cc6c: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 12cc70: tbz w8, #0, #0x12cc88 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_12cc88;
L_12cc74:;
  /* 12cc74: ldr x0, [x19, #0xe50] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(3664))));
  /* 12cc78: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 12cc7c: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 12cc80: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 12cc84: ret  */
  return;
L_12cc88:;
  /* 12cc88: nop  */
  /* nop: no architectural effect here */
  /* 12cc8c: adr x0, #0x15de58 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1433176)));
  /* 12cc90: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1232020));
  fn1_1424b8(c);
  /* 12cc94: cbz w0, #0x12cc74 */
  if ((ARC_W_R(c, 0)) == 0) goto L_12cc74;
  /* 12cc98: bl #0x12ccd0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1232028));
  fn1_12ccd0(c);
  /* 12cc9c: nop  */
  /* nop: no architectural effect here */
  /* 12cca0: adr x8, #0x15e098 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1433752)));
  /* 12cca4: nop  */
  /* nop: no architectural effect here */
  /* 12cca8: adr x0, #0x15de58 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1433176)));
  /* 12ccac: str x8, [x19, #0xe50] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(3664)), ARC_X_R(c, 8));
  /* 12ccb0: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1232052));
  fn1_1424d0(c);
  /* 12ccb4: b #0x12cc74 */
  goto L_12cc74;
  /* 12ccb8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 12ccbc: nop  */
  /* nop: no architectural effect here */
  /* 12ccc0: adr x0, #0x15de58 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1433176)));
  /* 12ccc4: bl #0x1424e8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1232072));
  fn1_1424e8(c);
  /* 12ccc8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 12cccc: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1232080));
  fn1_9cc20(c);
}

void fn1_1349d8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039192024));
  /* 1349d8: bti c */
  /* bti: no architectural effect here */
  /* 1349dc: mov w1, #0x18 */
  ARC_W_W(c, 1, UINT64_C(24));
  /* 1349e0: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_135150(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039193936));
  /* 135150: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 135154: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 135158: stp x24, x23, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 13515c: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 135160: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 135164: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 135168: ldr x9, [x0, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 13516c: ldr x22, [x0] */
  ARC_X_W(c, 22, arc_ld64(ARC_X_R(c, 0)));
  /* 135170: mov x21, x2 */
  ARC_X_W(c, 21, ARC_X_R(c, 2));
  /* 135174: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 135178: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 13517c: sub x8, x9, x22 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) - ARC_X_R(c, 22)));
  /* 135180: cmp x3, x8, asr #3 */
  (void)arc_sub64(c, ARC_X_R(c, 3), ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> 3)));
  /* 135184: b.ls #0x1351b4 */
  if (ARC_COND(c, 9)) goto L_1351b4;
  /* 135188: cbz x22, #0x13521c */
  if ((ARC_X_R(c, 22)) == 0) goto L_13521c;
  /* 13518c: add x9, x19, #0x18 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + UINT64_C(24)));
  /* 135190: str x22, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 22));
  /* 135194: cmp x22, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 9));
  /* 135198: b.eq #0x13520c */
  if (ARC_COND(c, 0)) goto L_13520c;
  /* 13519c: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 1351a0: mov x1, x8 */
  ARC_X_W(c, 1, ARC_X_R(c, 8));
  /* 1351a4: mov x22, x3 */
  ARC_X_W(c, 22, ARC_X_R(c, 3));
  /* 1351a8: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1266092));
  fn1_142608(c);
  /* 1351ac: mov x3, x22 */
  ARC_X_W(c, 3, ARC_X_R(c, 22));
  /* 1351b0: b #0x135210 */
  goto L_135210;
L_1351b4:;
  /* 1351b4: ldr x23, [x19, #8] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* 1351b8: sub x24, x23, x22 */
  ARC_X_W(c, 24, (ARC_X_R(c, 23) - ARC_X_R(c, 22)));
  /* 1351bc: cmp x3, x24, asr #3 */
  (void)arc_sub64(c, ARC_X_R(c, 3), ((uint64_t)((int64_t)(ARC_X_R(c, 24)) >> 3)));
  /* 1351c0: b.ls #0x135200 */
  if (ARC_COND(c, 9)) goto L_135200;
  /* 1351c4: cmp x23, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 22));
  /* 1351c8: b.eq #0x1351e0 */
  if (ARC_COND(c, 0)) goto L_1351e0;
  /* 1351cc: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 1351d0: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 1351d4: mov x2, x24 */
  ARC_X_W(c, 2, ARC_X_R(c, 24));
  /* 1351d8: bl #0x1449f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1266140));
  fn1_1449f0(c);
  /* 1351dc: ldr x23, [x19, #8] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
L_1351e0:;
  /* 1351e0: add x1, x20, x24 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + ARC_X_R(c, 24)));
  /* 1351e4: subs x20, x21, x1 */
  ARC_X_W(c, 20, arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 1)));
  /* 1351e8: b.eq #0x1351f8 */
  if (ARC_COND(c, 0)) goto L_1351f8;
  /* 1351ec: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 1351f0: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* 1351f4: bl #0x1449f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1266168));
  fn1_1449f0(c);
L_1351f8:;
  /* 1351f8: add x8, x23, x20 */
  ARC_X_W(c, 8, (ARC_X_R(c, 23) + ARC_X_R(c, 20)));
  /* 1351fc: b #0x13529c */
  goto L_13529c;
L_135200:;
  /* 135200: subs x21, x21, x20 */
  ARC_X_W(c, 21, arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 20)));
  /* 135204: b.ne #0x135288 */
  if (ARC_COND(c, 1)) goto L_135288;
  /* 135208: b #0x135298 */
  goto L_135298;
L_13520c:;
  /* 13520c: strb wzr, [x19, #0x108] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(264)), ARC_W_R(c, 31));
L_135210:;
  /* 135210: mov x9, xzr */
  ARC_X_W(c, 9, ARC_X_R(c, 31));
  /* 135214: stp xzr, xzr, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 135218: str xzr, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 31));
L_13521c:;
  /* 13521c: lsr x8, x3, #0x3d */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 3)) >> ((UINT64_C(61)) & 63)));
  /* 135220: cbnz x8, #0x1352b8 */
  if ((ARC_X_R(c, 8)) != 0) goto L_1352b8;
  /* 135224: asr x8, x9, #2 */
  ARC_X_W(c, 8, ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(2)) & 63))));
  /* 135228: mov x10, #0x7ffffffffffffff8 */
  ARC_X_W(c, 10, UINT64_C(9223372036854775800));
  /* 13522c: cmp x8, x3 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 3));
  /* 135230: csel x8, x8, x3, hi */
  ARC_X_W(c, 8, (ARC_COND(c, 8) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 3)));
  /* 135234: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* 135238: mov x9, #0x1fffffffffffffff */
  ARC_X_W(c, 9, UINT64_C(2305843009213693951));
  /* 13523c: csel x23, x8, x9, lo */
  ARC_X_W(c, 23, (ARC_COND(c, 3) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* 135240: lsr x8, x23, #0x3d */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 23)) >> ((UINT64_C(61)) & 63)));
  /* 135244: cbnz x8, #0x1352b8 */
  if ((ARC_X_R(c, 8)) != 0) goto L_1352b8;
  /* 135248: cmp x23, #0x1e */
  (void)arc_sub64(c, ARC_X_R(c, 23), UINT64_C(30));
  /* 13524c: b.hi #0x135268 */
  if (ARC_COND(c, 8)) goto L_135268;
  /* 135250: ldrb w8, [x19, #0x108] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(264))));
  /* 135254: tbnz w8, #0, #0x135268 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_135268;
  /* 135258: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 13525c: add x22, x19, #0x18 */
  ARC_X_W(c, 22, (ARC_X_R(c, 19) + UINT64_C(24)));
  /* 135260: strb w8, [x19, #0x108] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(264)), ARC_W_R(c, 8));
  /* 135264: b #0x135274 */
  goto L_135274;
L_135268:;
  /* 135268: lsl x0, x23, #3 */
  ARC_X_W(c, 0, ((uint64_t)(ARC_X_R(c, 23)) << ((UINT64_C(3)) & 63)));
  /* 13526c: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1266288));
  fn1_1428f0(c);
  /* 135270: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
L_135274:;
  /* 135274: add x8, x22, x23, lsl #3 */
  ARC_X_W(c, 8, (ARC_X_R(c, 22) + ((uint64_t)(ARC_X_R(c, 23)) << 3)));
  /* 135278: subs x21, x21, x20 */
  ARC_X_W(c, 21, arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 20)));
  /* 13527c: stp x22, x22, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 22));
  }
  /* 135280: str x8, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 8));
  /* 135284: b.eq #0x135298 */
  if (ARC_COND(c, 0)) goto L_135298;
L_135288:;
  /* 135288: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 13528c: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 135290: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* 135294: bl #0x1449f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1266328));
  fn1_1449f0(c);
L_135298:;
  /* 135298: add x8, x22, x21 */
  ARC_X_W(c, 8, (ARC_X_R(c, 22) + ARC_X_R(c, 21)));
L_13529c:;
  /* 13529c: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
  /* 1352a0: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1352a4: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1352a8: ldp x24, x23, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 1352ac: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1352b0: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 1352b4: ret  */
  return;
L_1352b8:;
  /* 1352b8: bl #0x135104 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1266364));
  fn1_135104(c);
}

void fn1_138270(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039206512));
  /* 138270: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 138274: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 138278: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 13827c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 138280: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 138284: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 138288: ldr x8, [x8, #0xe50] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3664))));
  /* 13828c: add x9, x8, #0x18 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(24)));
  /* 138290: add x8, x8, #0x40 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(64)));
  /* 138294: str x9, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 9));
  }
  /* 138298: str x8, [x19, #0x68]! */
  { const uint64_t _a = (ARC_X_R(c, 19) + INT64_C(104));
    ARC_X_W(c, 19, ARC_X_R(c, 19) + INT64_C(104));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* 13829c: bl #0x144558 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1278624));
  fn1_144558(c);
  /* 1382a0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1382a4: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1382a8: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1382ac: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 1382b0: b #0x1433b8 */
  fn1_1433b8(c); return;
}

void fn1_13c394(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039223188));
  /* 13c394: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 13c398: stp x29, x30, [sp, #-0x60]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-96));
    (c)->sp = (c)->sp + INT64_C(-96);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 13c39c: stp x28, x27, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* 13c3a0: stp x26, x25, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* 13c3a4: stp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 13c3a8: stp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 13c3ac: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 13c3b0: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 13c3b4: sub sp, sp, #0x1c0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(448)));
  /* 13c3b8: adrp x8, #0x50000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(327680)));
  /* 13c3bc: add x8, x8, #0x120 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(288)));
  /* 13c3c0: mov x19, x3 */
  ARC_X_W(c, 19, ARC_X_R(c, 3));
  /* 13c3c4: mov w21, w2 */
  ARC_W_W(c, 21, ARC_W_R(c, 2));
  /* 13c3c8: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 13c3cc: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 13c3d0: stp x8, x3, [x29, #-0x40] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-64));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 3));
  }
  /* 13c3d4: nop  */
  /* nop: no architectural effect here */
  /* 13c3d8: adr x23, #0x156d40 */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1404224)));
  /* 13c3dc: nop  */
  /* nop: no architectural effect here */
  /* 13c3e0: adr x8, #0x159210 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 13c3e4: stp x0, x1, [x29, #-0x30] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-48));
    arc_st64(_pa, ARC_X_R(c, 0));
    arc_st64(_pa + 8, ARC_X_R(c, 1));
  }
  /* 13c3e8: cbz x3, #0x13c400 */
  if ((ARC_X_R(c, 3)) == 0) goto L_13c400;
  /* 13c3ec: str wzr, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 31));
  /* 13c3f0: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 13c3f4: tbz w8, #0, #0x13c904 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13c904;
L_13c3f8:;
  /* 13c3f8: str x23, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 23));
  /* 13c3fc: b #0x13c408 */
  goto L_13c408;
L_13c400:;
  /* 13c400: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 13c404: tbz w8, #0, #0x13c924 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13c924;
L_13c408:;
  /* 13c408: mov w8, #0xb0 */
  ARC_W_W(c, 8, UINT64_C(176));
  /* 13c40c: stur wzr, [x29, #-0x50] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-80)), ARC_W_R(c, 31));
  /* 13c410: tst w21, w8 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 21) & ARC_W_R(c, 8)));
  /* 13c414: add x8, x22, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 22) + UINT64_C(1)));
  /* 13c418: stur x23, [x29, #-0x48] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-72)), ARC_X_R(c, 23));
  /* 13c41c: b.eq #0x13c44c */
  if (ARC_COND(c, 0)) goto L_13c44c;
  /* 13c420: ldrb w9, [x22] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 22)));
  /* 13c424: ldr x10, [x22, #0x10] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 22) + INT64_C(16))));
  /* 13c428: sub x1, x29, #0xd0 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(208)));
  /* 13c42c: str wzr, [sp, #0x68] */
  arc_st32(((c)->sp + INT64_C(104)), ARC_W_R(c, 31));
  /* 13c430: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* 13c434: str x23, [sp, #0x70] */
  arc_st64(((c)->sp + INT64_C(112)), ARC_X_R(c, 23));
  /* 13c438: csel x0, x8, x10, eq */
  ARC_X_W(c, 0, (ARC_COND(c, 0) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 10)));
  /* 13c43c: bl #0x144570 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1295424));
  fn1_144570(c);
  /* 13c440: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 13c444: b.ne #0x13c498 */
  if (ARC_COND(c, 1)) goto L_13c498;
  /* 13c448: b #0x13c474 */
  goto L_13c474;
L_13c44c:;
  /* 13c44c: ldrb w9, [x22] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 22)));
  /* 13c450: ldr x10, [x22, #0x10] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 22) + INT64_C(16))));
  /* 13c454: sub x1, x29, #0xd0 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(208)));
  /* 13c458: str wzr, [sp, #0x68] */
  arc_st32(((c)->sp + INT64_C(104)), ARC_W_R(c, 31));
  /* 13c45c: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* 13c460: str x23, [sp, #0x70] */
  arc_st64(((c)->sp + INT64_C(112)), ARC_X_R(c, 23));
  /* 13c464: csel x0, x8, x10, eq */
  ARC_X_W(c, 0, (ARC_COND(c, 0) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 10)));
  /* 13c468: bl #0x144588 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1295468));
  fn1_144588(c);
  /* 13c46c: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 13c470: b.ne #0x13c498 */
  if (ARC_COND(c, 1)) goto L_13c498;
L_13c474:;
  /* 13c474: bl #0x142a58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1295480));
  fn1_142a58(c);
  /* 13c478: nop  */
  /* nop: no architectural effect here */
  /* 13c47c: adr x8, #0x159208 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 13c480: ldr w24, [x0] */
  ARC_W_W(c, 24, arc_ld32(ARC_X_R(c, 0)));
  /* 13c484: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 13c488: tbz w8, #0, #0x13c944 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13c944;
L_13c48c:;
  /* 13c48c: nop  */
  /* nop: no architectural effect here */
  /* 13c490: adr x8, #0x156d38 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1404216)));
  /* 13c494: stp x24, x8, [sp, #0x68] */
  { const uint64_t _pa = ((c)->sp + INT64_C(104));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
L_13c498:;
  /* 13c498: sub x8, x29, #0xd8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(216)));
  /* 13c49c: add x0, sp, #0x68 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(104)));
  /* 13c4a0: sub x2, x29, #0xd0 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(208)));
  /* 13c4a4: sub x3, x29, #0x50 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) - UINT64_C(80)));
  /* 13c4a8: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 13c4ac: bl #0x1388e8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1295536));
  fn1_1388e8(c);
  /* 13c4b0: ldur w8, [x29, #-0x50] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 29) + INT64_C(-80))));
  /* 13c4b4: cbz w8, #0x13c4c4 */
  if ((ARC_W_R(c, 8)) == 0) goto L_13c4c4;
L_13c4b8:;
  /* 13c4b8: sub x0, x29, #0x40 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 13c4bc: sub x1, x29, #0x50 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(80)));
  /* 13c4c0: b #0x13c5b0 */
  goto L_13c5b0;
L_13c4c4:;
  /* 13c4c4: mov w8, #0xa0 */
  ARC_W_W(c, 8, UINT64_C(160));
  /* 13c4c8: and w9, w21, w8 */
  ARC_W_W(c, 9, (ARC_W_R(c, 21) & ARC_W_R(c, 8)));
  /* 13c4cc: add x8, x20, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 20) + UINT64_C(1)));
  /* 13c4d0: cbz w9, #0x13c500 */
  if ((ARC_W_R(c, 9)) == 0) goto L_13c500;
  /* 13c4d4: ldrb w9, [x20] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 20)));
  /* 13c4d8: ldr x10, [x20, #0x10] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 20) + INT64_C(16))));
  /* 13c4dc: add x1, sp, #0x68 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(104)));
  /* 13c4e0: stur wzr, [x29, #-0x20] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-32)), ARC_W_R(c, 31));
  /* 13c4e4: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* 13c4e8: stur x23, [x29, #-0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-24)), ARC_X_R(c, 23));
  /* 13c4ec: csel x0, x8, x10, eq */
  ARC_X_W(c, 0, (ARC_COND(c, 0) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 10)));
  /* 13c4f0: bl #0x144570 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1295604));
  fn1_144570(c);
  /* 13c4f4: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 13c4f8: b.ne #0x13c54c */
  if (ARC_COND(c, 1)) goto L_13c54c;
  /* 13c4fc: b #0x13c528 */
  goto L_13c528;
L_13c500:;
  /* 13c500: ldrb w9, [x20] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 20)));
  /* 13c504: ldr x10, [x20, #0x10] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 20) + INT64_C(16))));
  /* 13c508: add x1, sp, #0x68 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(104)));
  /* 13c50c: stur wzr, [x29, #-0x20] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-32)), ARC_W_R(c, 31));
  /* 13c510: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* 13c514: stur x23, [x29, #-0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-24)), ARC_X_R(c, 23));
  /* 13c518: csel x0, x8, x10, eq */
  ARC_X_W(c, 0, (ARC_COND(c, 0) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 10)));
  /* 13c51c: bl #0x144588 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1295648));
  fn1_144588(c);
  /* 13c520: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 13c524: b.ne #0x13c54c */
  if (ARC_COND(c, 1)) goto L_13c54c;
L_13c528:;
  /* 13c528: bl #0x142a58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1295660));
  fn1_142a58(c);
  /* 13c52c: nop  */
  /* nop: no architectural effect here */
  /* 13c530: adr x8, #0x159208 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 13c534: ldr w24, [x0] */
  ARC_W_W(c, 24, arc_ld32(ARC_X_R(c, 0)));
  /* 13c538: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 13c53c: tbz w8, #0, #0x13c984 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13c984;
L_13c540:;
  /* 13c540: nop  */
  /* nop: no architectural effect here */
  /* 13c544: adr x8, #0x156d38 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1404216)));
  /* 13c548: stp x24, x8, [x29, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-32));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
L_13c54c:;
  /* 13c54c: add x8, sp, #0x60 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(96)));
  /* 13c550: sub x0, x29, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* 13c554: add x2, sp, #0x68 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(104)));
  /* 13c558: sub x3, x29, #0x50 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) - UINT64_C(80)));
  /* 13c55c: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 13c560: bl #0x1388e8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1295716));
  fn1_1388e8(c);
  /* 13c564: ldrb w8, [sp, #0x60] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(96))));
  /* 13c568: cbz w8, #0x13c4b8 */
  if ((ARC_W_R(c, 8)) == 0) goto L_13c4b8;
  /* 13c56c: ldurb w9, [x29, #-0xd8] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 29) + INT64_C(-216))));
  /* 13c570: cbz w9, #0x13c588 */
  if ((ARC_W_R(c, 9)) == 0) goto L_13c588;
  /* 13c574: cmp w9, #0xff */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(255));
  /* 13c578: b.eq #0x13c588 */
  if (ARC_COND(c, 0)) goto L_13c588;
  /* 13c57c: sub w10, w9, #4 */
  ARC_W_W(c, 10, (ARC_W_R(c, 9) - UINT64_C(4)));
  /* 13c580: cmn w10, #3 */
  (void)arc_add32(c, ARC_W_R(c, 10), UINT64_C(3), 0);
  /* 13c584: b.hs #0x13c5d8 */
  if (ARC_COND(c, 2)) goto L_13c5d8;
L_13c588:;
  /* 13c588: nop  */
  /* nop: no architectural effect here */
  /* 13c58c: adr x8, #0x159208 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 13c590: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 13c594: tbz w8, #0, #0x13c964 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13c964;
L_13c598:;
  /* 13c598: mov w8, #0x26 */
  ARC_W_W(c, 8, UINT64_C(38));
  /* 13c59c: nop  */
  /* nop: no architectural effect here */
  /* 13c5a0: adr x9, #0x156d38 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1404216)));
  /* 13c5a4: stp x8, x9, [x29, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-32));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 13c5a8: sub x0, x29, #0x40 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 13c5ac: sub x1, x29, #0x20 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(32)));
L_13c5b0:;
  /* 13c5b0: bl #0x139ad0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1295796));
  fn1_139ad0(c);
L_13c5b4:;
  /* 13c5b4: add sp, sp, #0x1c0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(448)));
  /* 13c5b8: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 13c5bc: ldp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 13c5c0: ldp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 13c5c4: ldp x26, x25, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* 13c5c8: ldp x28, x27, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* 13c5cc: ldp x29, x30, [sp], #0x60 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(96);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 13c5d0: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 13c5d4: ret  */
  return;
L_13c5d8:;
  /* 13c5d8: cmp w8, #0xff */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(255));
  /* 13c5dc: b.ne #0x13c62c */
  if (ARC_COND(c, 1)) goto L_13c62c;
L_13c5e0:;
  /* 13c5e0: cmp w9, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(1));
  /* 13c5e4: b.eq #0x13c66c */
  if (ARC_COND(c, 0)) goto L_13c66c;
  /* 13c5e8: cmp w9, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(2));
  /* 13c5ec: b.ne #0x13c6e4 */
  if (ARC_COND(c, 1)) goto L_13c6e4;
  /* 13c5f0: tbnz w21, #7, #0x13c708 */
  if (((ARC_W_R(c, 21)) >> 7 & 1) != 0) goto L_13c708;
  /* 13c5f4: tst w21, #0xffff */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 21) & UINT64_C(65535)));
  /* 13c5f8: b.eq #0x13c600 */
  if (ARC_COND(c, 0)) goto L_13c600;
  /* 13c5fc: tbz w21, #3, #0x13c5b4 */
  if (((ARC_W_R(c, 21)) >> 3 & 1) == 0) goto L_13c5b4;
L_13c600:;
  /* 13c600: cmp w8, #0xff */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(255));
  /* 13c604: b.eq #0x13c60c */
  if (ARC_COND(c, 0)) goto L_13c60c;
  /* 13c608: cbnz w8, #0x13c750 */
  if ((ARC_W_R(c, 8)) != 0) goto L_13c750;
L_13c60c:;
  /* 13c60c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 13c610: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 13c614: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* 13c618: bl #0x144708 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1295900));
  fn1_144708(c);
  /* 13c61c: cbz x19, #0x13c774 */
  if ((ARC_X_R(c, 19)) == 0) goto L_13c774;
  /* 13c620: ldr w8, [x19] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 19)));
  /* 13c624: cbnz w8, #0x13c5b4 */
  if ((ARC_W_R(c, 8)) != 0) goto L_13c5b4;
  /* 13c628: b #0x13c754 */
  goto L_13c754;
L_13c62c:;
  /* 13c62c: sub w10, w8, #4 */
  ARC_W_W(c, 10, (ARC_W_R(c, 8) - UINT64_C(4)));
  /* 13c630: cmn w10, #3 */
  (void)arc_add32(c, ARC_W_R(c, 10), UINT64_C(3), 0);
  /* 13c634: b.lo #0x13c588 */
  if (ARC_COND(c, 3)) goto L_13c588;
  /* 13c638: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* 13c63c: b.ne #0x13c648 */
  if (ARC_COND(c, 1)) goto L_13c648;
  /* 13c640: cmp w9, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(2));
  /* 13c644: b.eq #0x13c588 */
  if (ARC_COND(c, 0)) goto L_13c588;
L_13c648:;
  /* 13c648: ldur x10, [x29, #-0xd0] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 29) + INT64_C(-208))));
  /* 13c64c: ldr x11, [sp, #0x68] */
  ARC_X_W(c, 11, arc_ld64(((c)->sp + INT64_C(104))));
  /* 13c650: cmp x10, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 11));
  /* 13c654: b.ne #0x13c5e0 */
  if (ARC_COND(c, 1)) goto L_13c5e0;
  /* 13c658: ldur x10, [x29, #-0xc8] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 29) + INT64_C(-200))));
  /* 13c65c: ldr x11, [sp, #0x70] */
  ARC_X_W(c, 11, arc_ld64(((c)->sp + INT64_C(112))));
  /* 13c660: cmp x10, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 11));
  /* 13c664: b.eq #0x13c588 */
  if (ARC_COND(c, 0)) goto L_13c588;
  /* 13c668: b #0x13c5e0 */
  goto L_13c5e0;
L_13c66c:;
  /* 13c66c: tbnz w21, #6, #0x13c5b4 */
  if (((ARC_W_R(c, 21)) >> 6 & 1) != 0) goto L_13c5b4;
  /* 13c670: tbnz w21, #7, #0x13c710 */
  if (((ARC_W_R(c, 21)) >> 7 & 1) != 0) goto L_13c710;
  /* 13c674: tbnz w21, #8, #0x13c73c */
  if (((ARC_W_R(c, 21)) >> 8 & 1) != 0) goto L_13c73c;
  /* 13c678: cmp w8, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(2));
  /* 13c67c: b.ne #0x13c8ec */
  if (ARC_COND(c, 1)) goto L_13c8ec;
  /* 13c680: add x8, sp, #0x40 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(64)));
  /* 13c684: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 13c688: bl #0x13d540 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1296012));
  fn1_13d540(c);
  /* 13c68c: sub x8, x29, #0x20 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* 13c690: add x1, sp, #0x40 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(64)));
  /* 13c694: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 13c698: bl #0x13d4bc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1296028));
  fn1_13d4bc(c);
  /* 13c69c: sub x1, x29, #0x20 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* 13c6a0: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 13c6a4: mov w2, w21 */
  ARC_W_W(c, 2, ARC_W_R(c, 21));
  /* 13c6a8: mov x3, x19 */
  ARC_X_W(c, 3, ARC_X_R(c, 19));
  /* 13c6ac: bl #0x1446f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1296048));
  fn1_1446f0(c);
  /* 13c6b0: ldurb w8, [x29, #-0x20] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-32))));
  /* 13c6b4: tbz w8, #0, #0x13c6c8 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13c6c8;
  /* 13c6b8: ldur x8, [x29, #-0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(-32))));
  /* 13c6bc: ldur x0, [x29, #-0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-16))));
  /* 13c6c0: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 13c6c4: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1296072));
  fn1_142608(c);
L_13c6c8:;
  /* 13c6c8: ldrb w8, [sp, #0x40] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(64))));
  /* 13c6cc: tbz w8, #0, #0x13c5b4 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13c5b4;
  /* 13c6d0: ldr x8, [sp, #0x40] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(64))));
  /* 13c6d4: ldr x0, [sp, #0x50] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(80))));
  /* 13c6d8: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 13c6dc: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1296096));
  fn1_142608(c);
  /* 13c6e0: b #0x13c5b4 */
  goto L_13c5b4;
L_13c6e4:;
  /* 13c6e4: tbnz w21, #5, #0x13c5b4 */
  if (((ARC_W_R(c, 21)) >> 5 & 1) != 0) goto L_13c5b4;
  /* 13c6e8: cmp w8, #0xff */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(255));
  /* 13c6ec: b.eq #0x13c6f4 */
  if (ARC_COND(c, 0)) goto L_13c6f4;
  /* 13c6f0: cbnz w8, #0x13c724 */
  if ((ARC_W_R(c, 8)) != 0) goto L_13c724;
L_13c6f4:;
  /* 13c6f4: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 13c6f8: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 13c6fc: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* 13c700: bl #0x1446a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1296132));
  fn1_1446a8(c);
  /* 13c704: b #0x13c5b4 */
  goto L_13c5b4;
L_13c708:;
  /* 13c708: mov w8, #0x15 */
  ARC_W_W(c, 8, UINT64_C(21));
  /* 13c70c: b #0x13c728 */
  goto L_13c728;
L_13c710:;
  /* 13c710: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 13c714: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 13c718: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* 13c71c: bl #0x1446c0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1296160));
  fn1_1446c0(c);
  /* 13c720: b #0x13c5b4 */
  goto L_13c5b4;
L_13c724:;
  /* 13c724: mov w8, #0x11 */
  ARC_W_W(c, 8, UINT64_C(17));
L_13c728:;
  /* 13c728: sub x0, x29, #0x40 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 13c72c: sub x1, x29, #0x20 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* 13c730: stur w8, [x29, #-0x20] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-32)), ARC_W_R(c, 8));
  /* 13c734: bl #0x13ca60 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1296184));
  fn1_13ca60(c);
  /* 13c738: b #0x13c5b4 */
  goto L_13c5b4;
L_13c73c:;
  /* 13c73c: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 13c740: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 13c744: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* 13c748: bl #0x1446d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1296204));
  fn1_1446d8(c);
  /* 13c74c: b #0x13c5b4 */
  goto L_13c5b4;
L_13c750:;
  /* 13c750: cbz x19, #0x13c774 */
  if ((ARC_X_R(c, 19)) == 0) goto L_13c774;
L_13c754:;
  /* 13c754: add x0, sp, #0x30 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(48)));
  /* 13c758: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 13c75c: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* 13c760: mov w3, wzr */
  ARC_W_W(c, 3, ARC_W_R(c, 31));
  /* 13c764: bl #0x1445a0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1296232));
  fn1_1445a0(c);
  /* 13c768: ldr w8, [x19] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 19)));
  /* 13c76c: cbnz w8, #0x13c8e0 */
  if ((ARC_W_R(c, 8)) != 0) goto L_13c8e0;
  /* 13c770: b #0x13c788 */
  goto L_13c788;
L_13c774:;
  /* 13c774: add x0, sp, #0x30 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(48)));
  /* 13c778: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 13c77c: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 13c780: mov w3, wzr */
  ARC_W_W(c, 3, ARC_W_R(c, 31));
  /* 13c784: bl #0x1445a0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1296264));
  fn1_1445a0(c);
L_13c788:;
  /* 13c788: ldr x28, [sp, #0x30] */
  ARC_X_W(c, 28, arc_ld64(((c)->sp + INT64_C(48))));
  /* 13c78c: str wzr, [sp, #0x20] */
  arc_st32(((c)->sp + INT64_C(32)), ARC_W_R(c, 31));
  /* 13c790: str x23, [sp, #0x28] */
  arc_st64(((c)->sp + INT64_C(40)), ARC_X_R(c, 23));
  /* 13c794: cbz x28, #0x13c8e0 */
  if ((ARC_X_R(c, 28)) == 0) goto L_13c8e0;
  /* 13c798: sub x8, x29, #0x20 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* 13c79c: mov w27, #0x1a */
  ARC_W_W(c, 27, UINT64_C(26));
  /* 13c7a0: orr x26, x8, #1 */
  ARC_X_W(c, 26, (ARC_X_R(c, 8) | UINT64_C(1)));
L_13c7a4:;
  /* 13c7a4: add x0, x28, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 28) + UINT64_C(32)));
  /* 13c7a8: bl #0x142b30 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1296300));
  fn1_142b30(c);
  /* 13c7ac: cmn x1, #8 */
  (void)arc_add64(c, ARC_X_R(c, 1), UINT64_C(8), 0);
  /* 13c7b0: b.hs #0x13c9a4 */
  if (ARC_COND(c, 2)) goto L_13c9a4;
  /* 13c7b4: mov x22, x1 */
  ARC_X_W(c, 22, ARC_X_R(c, 1));
  /* 13c7b8: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* 13c7bc: cmp x1, #0x17 */
  (void)arc_sub64(c, ARC_X_R(c, 1), UINT64_C(23));
  /* 13c7c0: b.hs #0x13c7d8 */
  if (ARC_COND(c, 2)) goto L_13c7d8;
  /* 13c7c4: lsl w8, w22, #1 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 22)) << ((UINT64_C(1)) & 31)));
  /* 13c7c8: mov x24, x26 */
  ARC_X_W(c, 24, ARC_X_R(c, 26));
  /* 13c7cc: sturb w8, [x29, #-0x20] */
  arc_st8((ARC_X_R(c, 29) + INT64_C(-32)), ARC_W_R(c, 8));
  /* 13c7d0: cbnz x22, #0x13c7fc */
  if ((ARC_X_R(c, 22)) != 0) goto L_13c7fc;
  /* 13c7d4: b #0x13c80c */
  goto L_13c80c;
L_13c7d8:;
  /* 13c7d8: orr x8, x22, #7 */
  ARC_X_W(c, 8, (ARC_X_R(c, 22) | UINT64_C(7)));
  /* 13c7dc: cmp x8, #0x17 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(23));
  /* 13c7e0: csinc x25, x27, x8, eq */
  ARC_X_W(c, 25, (ARC_COND(c, 0) ? (ARC_X_R(c, 27)) : ((ARC_X_R(c, 8)) + 1)));
  /* 13c7e4: mov x0, x25 */
  ARC_X_W(c, 0, ARC_X_R(c, 25));
  /* 13c7e8: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1296364));
  fn1_1428f0(c);
  /* 13c7ec: orr x8, x25, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 25) | UINT64_C(1)));
  /* 13c7f0: mov x24, x0 */
  ARC_X_W(c, 24, ARC_X_R(c, 0));
  /* 13c7f4: stp x22, x0, [x29, #-0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-24));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 0));
  }
  /* 13c7f8: stur x8, [x29, #-0x20] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-32)), ARC_X_R(c, 8));
L_13c7fc:;
  /* 13c7fc: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 13c800: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* 13c804: mov x2, x22 */
  ARC_X_W(c, 2, ARC_X_R(c, 22));
  /* 13c808: bl #0x1449f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1296396));
  fn1_1449f0(c);
L_13c80c:;
  /* 13c80c: strb wzr, [x24, x22] */
  arc_st8((ARC_X_R(c, 24) + ARC_X_R(c, 22)), ARC_W_R(c, 31));
  /* 13c810: ldur q0, [x29, #-0x20] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-32))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-32)) + 8));
  /* 13c814: ldur x8, [x29, #-0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(-16))));
  /* 13c818: ldrb w9, [x20] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 20)));
  /* 13c81c: str q0, [sp] */
  arc_st64((c)->sp, (c)->q[0].u64[0]);
  arc_st64((c)->sp + 8, (c)->q[0].u64[1]);
  /* 13c820: str x8, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 8));
  /* 13c824: tbnz w9, #0, #0x13c83c */
  if (((ARC_W_R(c, 9)) >> 0 & 1) != 0) goto L_13c83c;
  /* 13c828: ldr q0, [x20] */
  arc_q_w(c, 0, arc_ld64(ARC_X_R(c, 20)), arc_ld64(ARC_X_R(c, 20) + 8));
  /* 13c82c: ldr x8, [x20, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(16))));
  /* 13c830: str q0, [sp, #0x40] */
  arc_st64(((c)->sp + INT64_C(64)), (c)->q[0].u64[0]);
  arc_st64(((c)->sp + INT64_C(64)) + 8, (c)->q[0].u64[1]);
  /* 13c834: str x8, [sp, #0x50] */
  arc_st64(((c)->sp + INT64_C(80)), ARC_X_R(c, 8));
  /* 13c838: b #0x13c848 */
  goto L_13c848;
L_13c83c:;
  /* 13c83c: ldp x2, x1, [x20, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(8));
    ARC_X_W(c, 2, arc_ld64(_pa));
    ARC_X_W(c, 1, arc_ld64(_pa + 8));
  }
  /* 13c840: add x0, sp, #0x40 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(64)));
  /* 13c844: bl #0xda588 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1296456));
  fn1_da588(c);
L_13c848:;
  /* 13c848: add x0, sp, #0x40 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(64)));
  /* 13c84c: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 13c850: bl #0x13b0f4 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1296468));
  fn1_13b0f4(c);
  /* 13c854: add x0, x28, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 28) + UINT64_C(32)));
  /* 13c858: add x1, sp, #0x40 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(64)));
  /* 13c85c: orr w2, w21, #0x200 */
  ARC_W_W(c, 2, (ARC_W_R(c, 21) | UINT64_C(512)));
  /* 13c860: mov x3, x19 */
  ARC_X_W(c, 3, ARC_X_R(c, 19));
  /* 13c864: bl #0x144690 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1296488));
  fn1_144690(c);
  /* 13c868: ldrb w8, [sp, #0x40] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(64))));
  /* 13c86c: tbnz w8, #0, #0x13c880 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_13c880;
  /* 13c870: ldrb w8, [sp] */
  ARC_W_W(c, 8, arc_ld8((c)->sp));
  /* 13c874: tbnz w8, #0, #0x13c898 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_13c898;
L_13c878:;
  /* 13c878: cbnz x19, #0x13c8ac */
  if ((ARC_X_R(c, 19)) != 0) goto L_13c8ac;
  /* 13c87c: b #0x13c8b4 */
  goto L_13c8b4;
L_13c880:;
  /* 13c880: ldr x8, [sp, #0x40] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(64))));
  /* 13c884: ldr x0, [sp, #0x50] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(80))));
  /* 13c888: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 13c88c: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1296528));
  fn1_142608(c);
  /* 13c890: ldrb w8, [sp] */
  ARC_W_W(c, 8, arc_ld8((c)->sp));
  /* 13c894: tbz w8, #0, #0x13c878 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13c878;
L_13c898:;
  /* 13c898: ldr x8, [sp] */
  ARC_X_W(c, 8, arc_ld64((c)->sp));
  /* 13c89c: ldr x0, [sp, #0x10] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(16))));
  /* 13c8a0: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 13c8a4: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1296552));
  fn1_142608(c);
  /* 13c8a8: cbz x19, #0x13c8b4 */
  if ((ARC_X_R(c, 19)) == 0) goto L_13c8b4;
L_13c8ac:;
  /* 13c8ac: ldr w8, [x19] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 19)));
  /* 13c8b0: cbnz w8, #0x13c8e0 */
  if ((ARC_W_R(c, 8)) != 0) goto L_13c8e0;
L_13c8b4:;
  /* 13c8b4: add x0, sp, #0x30 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(48)));
  /* 13c8b8: add x1, sp, #0x20 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(32)));
  /* 13c8bc: bl #0x1445b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1296576));
  fn1_1445b8(c);
  /* 13c8c0: ldr w8, [sp, #0x20] */
  ARC_W_W(c, 8, arc_ld32(((c)->sp + INT64_C(32))));
  /* 13c8c4: cbnz w8, #0x13c8d0 */
  if ((ARC_W_R(c, 8)) != 0) goto L_13c8d0;
  /* 13c8c8: ldr x28, [sp, #0x30] */
  ARC_X_W(c, 28, arc_ld64(((c)->sp + INT64_C(48))));
  /* 13c8cc: cbnz x28, #0x13c7a4 */
  if ((ARC_X_R(c, 28)) != 0) goto L_13c7a4;
L_13c8d0:;
  /* 13c8d0: cbz w8, #0x13c8e0 */
  if ((ARC_W_R(c, 8)) == 0) goto L_13c8e0;
  /* 13c8d4: sub x0, x29, #0x40 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 13c8d8: add x1, sp, #0x20 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(32)));
  /* 13c8dc: bl #0x139ad0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1296608));
  fn1_139ad0(c);
L_13c8e0:;
  /* 13c8e0: add x0, sp, #0x30 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(48)));
  /* 13c8e4: bl #0x13b074 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1296616));
  fn1_13b074(c);
  /* 13c8e8: b #0x13c5b4 */
  goto L_13c5b4;
L_13c8ec:;
  /* 13c8ec: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 13c8f0: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 13c8f4: mov w2, w21 */
  ARC_W_W(c, 2, ARC_W_R(c, 21));
  /* 13c8f8: mov x3, x19 */
  ARC_X_W(c, 3, ARC_X_R(c, 19));
  /* 13c8fc: bl #0x1446f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1296640));
  fn1_1446f0(c);
  /* 13c900: b #0x13c5b4 */
  goto L_13c5b4;
L_13c904:;
  /* 13c904: nop  */
  /* nop: no architectural effect here */
  /* 13c908: adr x0, #0x159210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 13c90c: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1296656));
  fn1_1424b8(c);
  /* 13c910: cbz w0, #0x13c3f8 */
  if ((ARC_W_R(c, 0)) == 0) goto L_13c3f8;
  /* 13c914: nop  */
  /* nop: no architectural effect here */
  /* 13c918: adr x0, #0x159210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 13c91c: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1296672));
  fn1_1424d0(c);
  /* 13c920: b #0x13c3f8 */
  goto L_13c3f8;
L_13c924:;
  /* 13c924: nop  */
  /* nop: no architectural effect here */
  /* 13c928: adr x0, #0x159210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 13c92c: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1296688));
  fn1_1424b8(c);
  /* 13c930: cbz w0, #0x13c408 */
  if ((ARC_W_R(c, 0)) == 0) goto L_13c408;
  /* 13c934: nop  */
  /* nop: no architectural effect here */
  /* 13c938: adr x0, #0x159210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 13c93c: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1296704));
  fn1_1424d0(c);
  /* 13c940: b #0x13c408 */
  goto L_13c408;
L_13c944:;
  /* 13c944: nop  */
  /* nop: no architectural effect here */
  /* 13c948: adr x0, #0x159208 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 13c94c: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1296720));
  fn1_1424b8(c);
  /* 13c950: cbz w0, #0x13c48c */
  if ((ARC_W_R(c, 0)) == 0) goto L_13c48c;
  /* 13c954: nop  */
  /* nop: no architectural effect here */
  /* 13c958: adr x0, #0x159208 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 13c95c: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1296736));
  fn1_1424d0(c);
  /* 13c960: b #0x13c48c */
  goto L_13c48c;
L_13c964:;
  /* 13c964: nop  */
  /* nop: no architectural effect here */
  /* 13c968: adr x0, #0x159208 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 13c96c: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1296752));
  fn1_1424b8(c);
  /* 13c970: cbz w0, #0x13c598 */
  if ((ARC_W_R(c, 0)) == 0) goto L_13c598;
  /* 13c974: nop  */
  /* nop: no architectural effect here */
  /* 13c978: adr x0, #0x159208 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 13c97c: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1296768));
  fn1_1424d0(c);
  /* 13c980: b #0x13c598 */
  goto L_13c598;
L_13c984:;
  /* 13c984: nop  */
  /* nop: no architectural effect here */
  /* 13c988: adr x0, #0x159208 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 13c98c: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1296784));
  fn1_1424b8(c);
  /* 13c990: cbz w0, #0x13c540 */
  if ((ARC_W_R(c, 0)) == 0) goto L_13c540;
  /* 13c994: nop  */
  /* nop: no architectural effect here */
  /* 13c998: adr x0, #0x159208 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 13c99c: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1296800));
  fn1_1424d0(c);
  /* 13c9a0: b #0x13c540 */
  goto L_13c540;
L_13c9a4:;
  /* 13c9a4: bl #0xd7d54 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1296808));
  fn1_d7d54(c);
  /* 13c9a8: b #0x13ca14 */
  goto L_13ca14;
  /* 13c9ac: ldurb w8, [x29, #-0x20] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-32))));
  /* 13c9b0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 13c9b4: tbz w8, #0, #0x13c9d0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13c9d0;
  /* 13c9b8: ldur x8, [x29, #-0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(-32))));
  /* 13c9bc: ldur x0, [x29, #-0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-16))));
  /* 13c9c0: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 13c9c4: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1296840));
  fn1_142608(c);
  /* 13c9c8: b #0x13c9d0 */
  goto L_13c9d0;
  /* 13c9cc: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
L_13c9d0:;
  /* 13c9d0: ldrb w8, [sp, #0x40] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(64))));
  /* 13c9d4: tbz w8, #0, #0x13c9f8 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13c9f8;
  /* 13c9d8: ldr x8, [sp, #0x40] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(64))));
  /* 13c9dc: ldr x0, [sp, #0x50] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(80))));
  /* 13c9e0: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 13c9e4: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1296872));
  fn1_142608(c);
  /* 13c9e8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 13c9ec: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1296880));
  fn1_9cc20(c);
  /* 13c9f0: b #0x13c9f4 */
  goto L_13c9f4;
L_13c9f4:;
  /* 13c9f4: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
L_13c9f8:;
  /* 13c9f8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 13c9fc: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1296896));
  fn1_9cc20(c);
  /* 13ca00: b #0x13ca14 */
  goto L_13ca14;
  /* 13ca04: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 13ca08: b #0x13ca38 */
  goto L_13ca38;
  /* 13ca0c: b #0x13ca14 */
  goto L_13ca14;
  /* 13ca10: b #0x13ca1c */
  goto L_13ca1c;
L_13ca14:;
  /* 13ca14: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 13ca18: b #0x13ca50 */
  goto L_13ca50;
L_13ca1c:;
  /* 13ca1c: ldrb w8, [sp, #0x40] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(64))));
  /* 13ca20: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 13ca24: tbz w8, #0, #0x13ca38 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13ca38;
  /* 13ca28: ldr x8, [sp, #0x40] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(64))));
  /* 13ca2c: ldr x0, [sp, #0x50] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(80))));
  /* 13ca30: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 13ca34: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1296952));
  fn1_142608(c);
L_13ca38:;
  /* 13ca38: ldrb w8, [sp] */
  ARC_W_W(c, 8, arc_ld8((c)->sp));
  /* 13ca3c: tbz w8, #0, #0x13ca50 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13ca50;
  /* 13ca40: ldr x8, [sp] */
  ARC_X_W(c, 8, arc_ld64((c)->sp));
  /* 13ca44: ldr x0, [sp, #0x10] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(16))));
  /* 13ca48: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 13ca4c: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1296976));
  fn1_142608(c);
L_13ca50:;
  /* 13ca50: add x0, sp, #0x30 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(48)));
  /* 13ca54: bl #0x13b074 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1296984));
  fn1_13b074(c);
  /* 13ca58: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 13ca5c: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1296992));
  fn1_9cc20(c);
}

void fn1_142518(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039248152));
  /* 142518: adrp x16, #0x151000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 14251c: ldr x17, [x16, #0xee8] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(3816))));
  /* 142520: add x16, x16, #0xee8 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(3816)));
  /* 142524: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 142528: nop  */
  /* nop: no architectural effect here */
  /* 14252c: nop  */
  /* nop: no architectural effect here */
}

void fn1_142b18(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039249688));
  /* 142b18: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 142b1c: ldr x17, [x16, #0xe8] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(232))));
  /* 142b20: add x16, x16, #0xe8 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(232)));
  /* 142b24: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 142b28: nop  */
  /* nop: no architectural effect here */
  /* 142b2c: nop  */
  /* nop: no architectural effect here */
}

void fn1_143118(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039251224));
  /* 143118: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 14311c: ldr x17, [x16, #0x2e8] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(744))));
  /* 143120: add x16, x16, #0x2e8 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(744)));
  /* 143124: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 143128: nop  */
  /* nop: no architectural effect here */
  /* 14312c: nop  */
  /* nop: no architectural effect here */
}

void fn1_143718(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039252760));
  /* 143718: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 14371c: ldr x17, [x16, #0x4e8] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(1256))));
  /* 143720: add x16, x16, #0x4e8 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(1256)));
  /* 143724: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 143728: nop  */
  /* nop: no architectural effect here */
  /* 14372c: nop  */
  /* nop: no architectural effect here */
}

void fn1_143d18(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039254296));
  /* 143d18: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 143d1c: ldr x17, [x16, #0x6e8] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(1768))));
  /* 143d20: add x16, x16, #0x6e8 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(1768)));
  /* 143d24: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 143d28: nop  */
  /* nop: no architectural effect here */
  /* 143d2c: nop  */
  /* nop: no architectural effect here */
}

void fn1_144318(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039255832));
  /* 144318: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 14431c: ldr x17, [x16, #0x8e8] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(2280))));
  /* 144320: add x16, x16, #0x8e8 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(2280)));
  /* 144324: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 144328: nop  */
  /* nop: no architectural effect here */
  /* 14432c: nop  */
  /* nop: no architectural effect here */
}

void fn1_144918(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039257368));
  /* 144918: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 14491c: ldr x17, [x16, #0xae8] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(2792))));
  /* 144920: add x16, x16, #0xae8 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(2792)));
  /* 144924: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 144928: nop  */
  /* nop: no architectural effect here */
  /* 14492c: nop  */
  /* nop: no architectural effect here */
}

