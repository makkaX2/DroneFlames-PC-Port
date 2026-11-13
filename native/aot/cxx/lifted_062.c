#include "lifted.h"

void fn1_a0bb8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038586296));
  /* a0bb8: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* a0bbc: stp x30, x21, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 30));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* a0bc0: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* a0bc4: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* a0bc8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* a0bcc: cbz x8, #0xa0bf4 */
  if ((ARC_X_R(c, 8)) == 0) goto L_a0bf4;
  /* a0bd0: sub x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) - UINT64_C(1)));
  /* a0bd4: adrp x9, #0x157000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1404928)));
  /* a0bd8: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* a0bdc: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* a0be0: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* a0be4: ldr w0, [x9, #0x604] */
  ARC_W_W(c, 0, arc_ld32((ARC_X_R(c, 9) + INT64_C(1540))));
  /* a0be8: ldp x30, x21, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 30, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* a0bec: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* a0bf0: b #0x142a10 */
  fn1_142a10(c); return;
L_a0bf4:;
  /* a0bf4: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* a0bf8: cbz x8, #0xa0c2c */
  if ((ARC_X_R(c, 8)) == 0) goto L_a0c2c;
  /* a0bfc: mov x20, xzr */
  ARC_X_W(c, 20, ARC_X_R(c, 31));
  /* a0c00: add x21, x19, #0x10 */
  ARC_X_W(c, 21, (ARC_X_R(c, 19) + UINT64_C(16)));
  /* a0c04: b #0xa0c14 */
  goto L_a0c14;
L_a0c08:;
  /* a0c08: add x20, x20, #1 */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) + UINT64_C(1)));
  /* a0c0c: cmp x20, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 8));
  /* a0c10: b.hs #0xa0c2c */
  if (ARC_COND(c, 2)) goto L_a0c2c;
L_a0c14:;
  /* a0c14: ldr x9, [x21, x20, lsl #3] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 21) + ((uint64_t)(ARC_X_R(c, 20)) << 3))));
  /* a0c18: cbz x9, #0xa0c08 */
  if ((ARC_X_R(c, 9)) == 0) goto L_a0c08;
  /* a0c1c: ldur x0, [x9, #-8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 9) + INT64_C(-8))));
  /* a0c20: bl #0x142800 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(658468));
  fn1_142800(c);
  /* a0c24: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* a0c28: b #0xa0c08 */
  goto L_a0c08;
L_a0c2c:;
  /* a0c2c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a0c30: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* a0c34: ldp x30, x21, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 30, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* a0c38: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* a0c3c: b #0x142800 */
  fn1_142800(c); return;
}

void fn1_a2330(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038592304));
  /* a2330: bti c */
  /* bti: no architectural effect here */
  /* a2334: ret  */
  return;
}

void fn1_a809c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038616220));
  /* a809c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* a80a0: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* a80a4: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* a80a8: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* a80ac: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* a80b0: ldr x21, [x0, #0x1330] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 0) + INT64_C(4912))));
  /* a80b4: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* a80b8: ldr x8, [x21, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 21) + INT64_C(8))));
  /* a80bc: sub x9, x8, #0xfc0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4032)));
  /* a80c0: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* a80c4: b.hi #0xa80e8 */
  if (ARC_COND(c, 8)) goto L_a80e8;
  /* a80c8: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* a80cc: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* a80d0: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(688340));
  fn1_1428a8(c);
  /* a80d4: cbz x0, #0xa8148 */
  if ((ARC_X_R(c, 0)) == 0) goto L_a8148;
  /* a80d8: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* a80dc: stp x21, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 21));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* a80e0: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* a80e4: str x0, [x20, #0x1330] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(4912)), ARC_X_R(c, 0));
L_a80e8:;
  /* a80e8: add x9, x8, #0x30 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(48)));
  /* a80ec: add x0, x21, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) + ARC_X_R(c, 8)));
  /* a80f0: adrp x8, #0x149000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1347584)));
  /* a80f4: add x8, x8, #0xb10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2832)));
  /* a80f8: str x9, [x21, #8] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(8)), ARC_X_R(c, 9));
  /* a80fc: mov w10, #0x540 */
  ARC_W_W(c, 10, UINT64_C(1344));
  /* a8100: str x8, [x0, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* a8104: ldurh w9, [x0, #9] */
  ARC_W_W(c, 9, arc_ld16((ARC_X_R(c, 0) + INT64_C(9))));
  /* a8108: mov w8, #0x15 */
  ARC_W_W(c, 8, UINT64_C(21));
  /* a810c: mov w11, #0x1a */
  ARC_W_W(c, 11, UINT64_C(26));
  /* a8110: strb w8, [x0, #8] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 8));
  /* a8114: adrp x8, #0x51000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(331776)));
  /* a8118: add x8, x8, #0x9de */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2526)));
  /* a811c: and w9, w9, #0xf000 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) & UINT64_C(61440)));
  /* a8120: str x8, [x0, #0x10] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(16)), ARC_X_R(c, 8));
  /* a8124: orr w8, w9, w10 */
  ARC_W_W(c, 8, (ARC_W_R(c, 9) | ARC_W_R(c, 10)));
  /* a8128: ldr x9, [x19] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 19)));
  /* a812c: sturh w8, [x0, #9] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(9)), ARC_W_R(c, 8));
  /* a8130: stp x11, x9, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    arc_st64(_pa, ARC_X_R(c, 11));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* a8134: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* a8138: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* a813c: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* a8140: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* a8144: ret  */
  return;
L_a8148:;
  /* a8148: bl #0x142488 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(688460));
  fn1_142488(c);
}

void fn1_addb8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038640056));
  /* addb8: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* addbc: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* addc0: stp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* addc4: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* addc8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* addcc: ldr x22, [x0, #0x1330] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 0) + INT64_C(4912))));
  /* addd0: mov x19, x2 */
  ARC_X_W(c, 19, ARC_X_R(c, 2));
  /* addd4: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* addd8: ldr x8, [x22, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 22) + INT64_C(8))));
  /* adddc: sub x9, x8, #0xfc0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4032)));
  /* adde0: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* adde4: b.hi #0xade08 */
  if (ARC_COND(c, 8)) goto L_ade08;
  /* adde8: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* addec: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* addf0: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(712180));
  fn1_1428a8(c);
  /* addf4: cbz x0, #0xade60 */
  if ((ARC_X_R(c, 0)) == 0) goto L_ade60;
  /* addf8: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* addfc: stp x22, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* ade00: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* ade04: str x0, [x21, #0x1330] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(4912)), ARC_X_R(c, 0));
L_ade08:;
  /* ade08: add x9, x8, #0x30 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(48)));
  /* ade0c: add x0, x22, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 22) + ARC_X_R(c, 8)));
  /* ade10: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* ade14: str x9, [x22, #8] */
  arc_st64((ARC_X_R(c, 22) + INT64_C(8)), ARC_X_R(c, 9));
  /* ade18: adrp x9, #0x14b000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1355776)));
  /* ade1c: add x9, x9, #0xe0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(224)));
  /* ade20: mov w10, #0x46 */
  ARC_W_W(c, 10, UINT64_C(70));
  /* ade24: str x9, [x0, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 9));
  }
  /* ade28: ldurh w9, [x0, #9] */
  ARC_W_W(c, 9, arc_ld16((ARC_X_R(c, 0) + INT64_C(9))));
  /* ade2c: strb w10, [x0, #8] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 10));
  /* ade30: mov w10, #0x540 */
  ARC_W_W(c, 10, UINT64_C(1344));
  /* ade34: str x8, [x0, #0x10] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(16)), ARC_X_R(c, 8));
  /* ade38: and w8, w9, #0xf000 */
  ARC_W_W(c, 8, (ARC_W_R(c, 9) & UINT64_C(61440)));
  /* ade3c: ldr q0, [x19] */
  arc_q_w(c, 0, arc_ld64(ARC_X_R(c, 19)), arc_ld64(ARC_X_R(c, 19) + 8));
  /* ade40: orr w8, w8, w10 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | ARC_W_R(c, 10)));
  /* ade44: sturh w8, [x0, #9] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(9)), ARC_W_R(c, 8));
  /* ade48: stur q0, [x0, #0x18] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(24)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 0) + INT64_C(24)) + 8, (c)->q[0].u64[1]);
  /* ade4c: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* ade50: ldp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* ade54: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ade58: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* ade5c: ret  */
  return;
L_ade60:;
  /* ade60: bl #0x142488 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(712292));
  fn1_142488(c);
}

void fn1_b3574(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038662516));
  /* b3574: bti c */
  /* bti: no architectural effect here */
  /* b3578: mov w1, #0x20 */
  ARC_W_W(c, 1, UINT64_C(32));
  /* b357c: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_b7078(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038677624));
  /* b7078: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* b707c: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b7080: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* b7084: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* b7088: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* b708c: ldp x9, x10, [x1, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 1) + INT64_C(8));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* b7090: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* b7094: ldr x8, [x1] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 1)));
  /* b7098: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* b709c: add x11, x9, #5 */
  ARC_X_W(c, 11, (ARC_X_R(c, 9) + UINT64_C(5)));
  /* b70a0: cmp x11, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 10));
  /* b70a4: b.ls #0xb70d4 */
  if (ARC_COND(c, 9)) goto L_b70d4;
  /* b70a8: lsl x10, x10, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* b70ac: add x9, x9, #0x3e5 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(997)));
  /* b70b0: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* b70b4: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* b70b8: csel x1, x10, x9, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* b70bc: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b70c0: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(749764));
  fn1_142878(c);
  /* b70c4: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b70c8: cbz x0, #0xb7224 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b7224;
  /* b70cc: ldr x9, [x19, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b70d0: mov x8, x0 */
  ARC_X_W(c, 8, ARC_X_R(c, 0));
L_b70d4:;
  /* b70d4: mov w10, #0x7473 */
  ARC_W_W(c, 10, UINT64_C(29811));
  /* b70d8: add x8, x8, x9 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + ARC_X_R(c, 9)));
  /* b70dc: mov w9, #0x3a */
  ARC_W_W(c, 9, UINT64_C(58));
  /* b70e0: movk w10, #0x3a64, lsl #16 */
  ARC_W_W(c, 10, ((ARC_W_R(c, 10) & UINT64_C(18446744069414649855)) | UINT64_C(979632128)));
  /* b70e4: strb w9, [x8, #4] */
  arc_st8((ARC_X_R(c, 8) + INT64_C(4)), ARC_W_R(c, 9));
  /* b70e8: str w10, [x8] */
  arc_st32(ARC_X_R(c, 8), ARC_W_R(c, 10));
  /* b70ec: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b70f0: ldr w9, [x20, #0xc] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 20) + INT64_C(12))));
  /* b70f4: add x8, x8, #5 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(5)));
  /* b70f8: cmp w9, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(2));
  /* b70fc: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
  /* b7100: b.gt #0xb7128 */
  if (ARC_COND(c, 12)) goto L_b7128;
  /* b7104: sub w10, w9, #1 */
  ARC_W_W(c, 10, (ARC_W_R(c, 9) - UINT64_C(1)));
  /* b7108: cmp w10, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(2));
  /* b710c: b.hs #0xb7148 */
  if (ARC_COND(c, 2)) goto L_b7148;
  /* b7110: cmp w9, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(2));
  /* b7114: adrp x20, #0x51000 */
  ARC_X_W(c, 20, (arc_image_bases[1] + UINT64_C(331776)));
  /* b7118: add x20, x20, #0xbaa */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) + UINT64_C(2986)));
  /* b711c: b.lo #0xb7164 */
  if (ARC_COND(c, 3)) goto L_b7164;
  /* b7120: mov w21, #6 */
  ARC_W_W(c, 21, UINT64_C(6));
  /* b7124: b #0xb7178 */
  goto L_b7178;
L_b7128:;
  /* b7128: cmp w9, #3 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(3));
  /* b712c: b.eq #0xb7158 */
  if (ARC_COND(c, 0)) goto L_b7158;
  /* b7130: cmp w9, #5 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(5));
  /* b7134: b.ne #0xb716c */
  if (ARC_COND(c, 1)) goto L_b716c;
  /* b7138: adrp x20, #0x51000 */
  ARC_X_W(c, 20, (arc_image_bases[1] + UINT64_C(331776)));
  /* b713c: add x20, x20, #0x86f */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) + UINT64_C(2159)));
  /* b7140: mov w21, #8 */
  ARC_W_W(c, 21, UINT64_C(8));
  /* b7144: b #0xb7178 */
  goto L_b7178;
L_b7148:;
  /* b7148: adrp x20, #0x51000 */
  ARC_X_W(c, 20, (arc_image_bases[1] + UINT64_C(331776)));
  /* b714c: add x20, x20, #0x7df */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) + UINT64_C(2015)));
  /* b7150: mov w21, #9 */
  ARC_W_W(c, 21, UINT64_C(9));
  /* b7154: b #0xb719c */
  goto L_b719c;
L_b7158:;
  /* b7158: adrp x20, #0x52000 */
  ARC_X_W(c, 20, (arc_image_bases[1] + UINT64_C(335872)));
  /* b715c: add x20, x20, #0x13f */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) + UINT64_C(319)));
  /* b7160: b #0xb7174 */
  goto L_b7174;
L_b7164:;
  /* b7164: mov w21, #0xc */
  ARC_W_W(c, 21, UINT64_C(12));
  /* b7168: b #0xb719c */
  goto L_b719c;
L_b716c:;
  /* b716c: adrp x20, #0x51000 */
  ARC_X_W(c, 20, (arc_image_bases[1] + UINT64_C(331776)));
  /* b7170: add x20, x20, #0xe6a */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) + UINT64_C(3690)));
L_b7174:;
  /* b7174: mov w21, #7 */
  ARC_W_W(c, 21, UINT64_C(7));
L_b7178:;
  /* b7178: ldr w9, [x20] */
  ARC_W_W(c, 9, arc_ld32(ARC_X_R(c, 20)));
  /* b717c: mov w11, #0x6162 */
  ARC_W_W(c, 11, UINT64_C(24930));
  /* b7180: ldrh w10, [x20, #4] */
  ARC_W_W(c, 10, arc_ld16((ARC_X_R(c, 20) + INT64_C(4))));
  /* b7184: movk w11, #0x6973, lsl #16 */
  ARC_W_W(c, 11, ((ARC_W_R(c, 11) & UINT64_C(18446744069414649855)) | UINT64_C(1769144320)));
  /* b7188: cmp w9, w11 */
  (void)arc_sub32(c, ARC_W_R(c, 9), ARC_W_R(c, 11));
  /* b718c: mov w9, #0x5f63 */
  ARC_W_W(c, 9, UINT64_C(24419));
  /* b7190: ccmp w10, w9, #0, eq */
  if (ARC_COND(c, 0)) { (void)arc_sub32(c, ARC_W_R(c, 10), ARC_W_R(c, 9)); }
  else { (c)->nf = 0; (c)->zf = 0;
          (c)->cf = 0; (c)->vf = 0; }
  /* b7194: b.ne #0xb7204 */
  if (ARC_COND(c, 1)) goto L_b7204;
  /* b7198: add x20, x20, #6 */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) + UINT64_C(6)));
L_b719c:;
  /* b719c: ldr x10, [x19, #0x10] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* b71a0: add x9, x21, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 21) + ARC_X_R(c, 8)));
  /* b71a4: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* b71a8: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* b71ac: b.ls #0xb71d4 */
  if (ARC_COND(c, 9)) goto L_b71d4;
  /* b71b0: lsl x8, x10, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* b71b4: add x9, x9, #0x3e0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(992)));
  /* b71b8: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* b71bc: csel x1, x8, x9, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* b71c0: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b71c4: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(750024));
  fn1_142878(c);
  /* b71c8: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b71cc: cbz x0, #0xb7228 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b7228;
  /* b71d0: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
L_b71d4:;
  /* b71d4: add x0, x0, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* b71d8: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* b71dc: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* b71e0: bl #0x1449d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(750052));
  fn1_1449d8(c);
  /* b71e4: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b71e8: add x8, x8, x21 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + ARC_X_R(c, 21)));
  /* b71ec: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
  /* b71f0: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* b71f4: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* b71f8: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b71fc: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* b7200: ret  */
  return;
L_b7204:;
  /* b7204: adrp x0, #0x4f000 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(323584)));
  /* b7208: add x0, x0, #0x8a6 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2214)));
  /* b720c: adrp x1, #0x51000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(331776)));
  /* b7210: add x1, x1, #0x10b */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(267)));
  /* b7214: nop  */
  /* nop: no architectural effect here */
  /* b7218: adr x3, #0x5018e */
  ARC_X_W(c, 3, (arc_image_bases[1] + UINT64_C(328078)));
  /* b721c: mov w2, #0x6be */
  ARC_W_W(c, 2, UINT64_C(1726));
  /* b7220: bl #0xa23d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(750116));
  fn1_a23d8(c);
L_b7224:;
  /* b7224: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(750120));
  fn1_1427b8(c);
L_b7228:;
  /* b7228: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(750124));
  fn1_1427b8(c);
}

void fn1_b9b9c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038688668));
  /* b9b9c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* b9ba0: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b9ba4: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* b9ba8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* b9bac: ldr x20, [x0, #0x1330] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 0) + INT64_C(4912))));
  /* b9bb0: ldr x8, [x20, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(8))));
  /* b9bb4: sub x9, x8, #0xfd0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4048)));
  /* b9bb8: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* b9bbc: b.hi #0xb9be0 */
  if (ARC_COND(c, 8)) goto L_b9be0;
  /* b9bc0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* b9bc4: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* b9bc8: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(760780));
  fn1_1428a8(c);
  /* b9bcc: cbz x0, #0xb9c34 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b9c34;
  /* b9bd0: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* b9bd4: stp x20, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* b9bd8: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* b9bdc: str x0, [x19, #0x1330] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(4912)), ARC_X_R(c, 0));
L_b9be0:;
  /* b9be0: add x9, x8, #0x20 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(32)));
  /* b9be4: add x0, x20, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + ARC_X_R(c, 8)));
  /* b9be8: adrp x8, #0x149000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1347584)));
  /* b9bec: add x8, x8, #0xc10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3088)));
  /* b9bf0: str x9, [x20, #8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(8)), ARC_X_R(c, 9));
  /* b9bf4: mov w10, #0x540 */
  ARC_W_W(c, 10, UINT64_C(1344));
  /* b9bf8: str x8, [x0, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* b9bfc: ldurh w8, [x0, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 0) + INT64_C(9))));
  /* b9c00: mov w9, #8 */
  ARC_W_W(c, 9, UINT64_C(8));
  /* b9c04: and w8, w8, #0xf000 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(61440)));
  /* b9c08: strb w9, [x0, #8] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 9));
  /* b9c0c: adrp x9, #0x50000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(327680)));
  /* b9c10: add x9, x9, #0x670 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(1648)));
  /* b9c14: orr w8, w8, w10 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | ARC_W_R(c, 10)));
  /* b9c18: sturh w8, [x0, #9] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(9)), ARC_W_R(c, 8));
  /* b9c1c: mov w8, #0xa */
  ARC_W_W(c, 8, UINT64_C(10));
  /* b9c20: stp x9, x8, [x0, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* b9c24: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* b9c28: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b9c2c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* b9c30: ret  */
  return;
L_b9c34:;
  /* b9c34: bl #0x142488 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(760888));
  fn1_142488(c);
}

void fn1_bd1ac(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038702508));
  /* bd1ac: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* bd1b0: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* bd1b4: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* bd1b8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* bd1bc: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* bd1c0: ldr x0, [x0, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* bd1c4: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* bd1c8: ldrb w8, [x0, #8] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 0) + INT64_C(8))));
  /* bd1cc: cmp w8, #0xb */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(11));
  /* bd1d0: b.ne #0xbd228 */
  if (ARC_COND(c, 1)) goto L_bd228;
  /* bd1d4: ldr x8, [x0, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* bd1d8: ldrb w9, [x8, #8] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 8) + INT64_C(8))));
  /* bd1dc: cmp w9, #8 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(8));
  /* bd1e0: b.ne #0xbd228 */
  if (ARC_COND(c, 1)) goto L_bd228;
  /* bd1e4: ldr x9, [x8, #0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(24))));
  /* bd1e8: cmp x9, #0xb */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(11));
  /* bd1ec: b.ne #0xbd228 */
  if (ARC_COND(c, 1)) goto L_bd228;
  /* bd1f0: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* bd1f4: mov x10, #0x626f */
  ARC_X_W(c, 10, UINT64_C(25199));
  /* bd1f8: movk x10, #0x636a, lsl #16 */
  ARC_X_W(c, 10, ((ARC_X_R(c, 10) & UINT64_C(18446744069414649855)) | UINT64_C(1667891200)));
  /* bd1fc: ldr x9, [x8] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 8)));
  /* bd200: movk x10, #0x6f5f, lsl #32 */
  ARC_X_W(c, 10, ((ARC_X_R(c, 10) & UINT64_C(18446462603027808255)) | UINT64_C(122453812576256)));
  /* bd204: ldur x8, [x8, #3] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3))));
  /* bd208: movk x10, #0x6a62, lsl #48 */
  ARC_X_W(c, 10, ((ARC_X_R(c, 10) & UINT64_C(281474976710655)) | UINT64_C(7665689515738005504)));
  /* bd20c: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* bd210: mov x9, #0x5f63 */
  ARC_X_W(c, 9, UINT64_C(24419));
  /* bd214: movk x9, #0x626f, lsl #16 */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(18446744069414649855)) | UINT64_C(1651441664)));
  /* bd218: movk x9, #0x656a, lsl #32 */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(18446462603027808255)) | UINT64_C(111505940938752)));
  /* bd21c: movk x9, #0x7463, lsl #48 */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(281474976710655)) | UINT64_C(8386546931093995520)));
  /* bd220: ccmp x8, x9, #0, eq */
  if (ARC_COND(c, 0)) { (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9)); }
  else { (c)->nf = 0; (c)->zf = 0;
          (c)->cf = 0; (c)->vf = 0; }
  /* bd224: b.eq #0xbd2ec */
  if (ARC_COND(c, 0)) goto L_bd2ec;
L_bd228:;
  /* bd228: ldurh w8, [x0, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 0) + INT64_C(9))));
  /* bd22c: ubfx w9, w8, #8, #2 */
  ARC_W_W(c, 9, (((uint32_t)(ARC_W_R(c, 8)) >> 8) & UINT64_C(3)));
  /* bd230: cbz w9, #0xbd280 */
  if ((ARC_W_R(c, 9)) == 0) goto L_bd280;
  /* bd234: cmp w9, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(2));
  /* bd238: b.ne #0xbd258 */
  if (ARC_COND(c, 1)) goto L_bd258;
  /* bd23c: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* bd240: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* bd244: ldr x8, [x8, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(8))));
  /* bd248: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(774732));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* bd24c: tbnz w0, #0, #0xbd280 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) != 0) goto L_bd280;
  /* bd250: ldr x0, [x19, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* bd254: ldurh w8, [x0, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 0) + INT64_C(9))));
L_bd258:;
  /* bd258: lsr w8, w8, #0xa */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 8)) >> ((UINT64_C(10)) & 31)));
  /* bd25c: ands w8, w8, #3 */
  { uint32_t _r = (uint32_t)(ARC_W_R(c, 8) & UINT64_C(3));
    arc_flags_logical32(c, _r);
    ARC_W_W(c, 8, _r); }
  /* bd260: b.eq #0xbd280 */
  if (ARC_COND(c, 0)) goto L_bd280;
  /* bd264: cmp w8, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(2));
  /* bd268: b.ne #0xbd2cc */
  if (ARC_COND(c, 1)) goto L_bd2cc;
  /* bd26c: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* bd270: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* bd274: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* bd278: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(774780));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* bd27c: tbz w0, #0, #0xbd2cc */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_bd2cc;
L_bd280:;
  /* bd280: ldp x8, x9, [x20, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* bd284: ldr x0, [x20] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 20)));
  /* bd288: add x10, x8, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* bd28c: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* bd290: b.ls #0xbd2b8 */
  if (ARC_COND(c, 9)) goto L_bd2b8;
  /* bd294: lsl x9, x9, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) << ((UINT64_C(1)) & 63)));
  /* bd298: add x8, x8, #0x3e1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(993)));
  /* bd29c: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* bd2a0: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* bd2a4: str x1, [x20, #0x10] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(16)), ARC_X_R(c, 1));
  /* bd2a8: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(774828));
  fn1_142878(c);
  /* bd2ac: str x0, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 0));
  /* bd2b0: cbz x0, #0xbd2fc */
  if ((ARC_X_R(c, 0)) == 0) goto L_bd2fc;
  /* bd2b4: ldr x8, [x20, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(8))));
L_bd2b8:;
  /* bd2b8: mov w9, #0x29 */
  ARC_W_W(c, 9, UINT64_C(41));
  /* bd2bc: strb w9, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
  /* bd2c0: ldr x8, [x20, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(8))));
  /* bd2c4: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* bd2c8: str x8, [x20, #8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(8)), ARC_X_R(c, 8));
L_bd2cc:;
  /* bd2cc: ldr x0, [x19, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* bd2d0: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* bd2d4: ldr x16, [x8, #0x28] */
  ARC_X_W(c, 16, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* bd2d8: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* bd2dc: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* bd2e0: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* bd2e4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* bd2e8: br x16 */
  arc_dispatch(c, ARC_X_R(c, 16)); return;
L_bd2ec:;
  /* bd2ec: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* bd2f0: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* bd2f4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* bd2f8: ret  */
  return;
L_bd2fc:;
  /* bd2fc: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(774912));
  fn1_1427b8(c);
}

void fn1_c496c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038733164));
L_c496c:;
  /* c496c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* c4970: stp d15, d14, [sp, #-0xa0]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-160));
    (c)->sp = (c)->sp + INT64_C(-160);
    arc_st64(_pa, (c)->q[15].u64[0]);
    arc_st64((_pa + 8), (c)->q[14].u64[0]);
  }
  /* c4974: stp d13, d12, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, (c)->q[13].u64[0]);
    arc_st64((_pa + 8), (c)->q[12].u64[0]);
  }
  /* c4978: stp d11, d10, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, (c)->q[11].u64[0]);
    arc_st64((_pa + 8), (c)->q[10].u64[0]);
  }
  /* c497c: stp d9, d8, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, (c)->q[9].u64[0]);
    arc_st64((_pa + 8), (c)->q[8].u64[0]);
  }
  /* c4980: stp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* c4984: stp x28, x27, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* c4988: stp x26, x25, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* c498c: stp x24, x23, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* c4990: stp x22, x21, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* c4994: stp x20, x19, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* c4998: add x29, sp, #0x40 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(64)));
  /* c499c: sub sp, sp, #0x1f0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(496)));
  /* c49a0: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* c49a4: adrp x9, #0x52000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(335872)));
  /* c49a8: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* c49ac: ldr q0, [x8, #0xa50] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(2640))), arc_ld64((ARC_X_R(c, 8) + INT64_C(2640)) + 8));
  /* c49b0: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* c49b4: ldr q11, [x9, #0xba0] */
  arc_q_w(c, 11, arc_ld64((ARC_X_R(c, 9) + INT64_C(2976))), arc_ld64((ARC_X_R(c, 9) + INT64_C(2976)) + 8));
  /* c49b8: ldr q12, [x8, #0xcf0] */
  arc_q_w(c, 12, arc_ld64((ARC_X_R(c, 8) + INT64_C(3312))), arc_ld64((ARC_X_R(c, 8) + INT64_C(3312)) + 8));
  /* c49bc: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* c49c0: adrp x9, #0x52000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(335872)));
  /* c49c4: ldr q13, [x8, #0xb00] */
  arc_q_w(c, 13, arc_ld64((ARC_X_R(c, 8) + INT64_C(2816))), arc_ld64((ARC_X_R(c, 8) + INT64_C(2816)) + 8));
  /* c49c8: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* c49cc: stur q0, [x29, #-0x60] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-96)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 29) + INT64_C(-96)) + 8, (c)->q[0].u64[1]);
  /* c49d0: ldr q15, [x8, #0x9d0] */
  arc_q_w(c, 15, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))), arc_ld64((ARC_X_R(c, 8) + INT64_C(2512)) + 8));
  /* c49d4: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* c49d8: ldr q14, [x9, #0xaa0] */
  arc_q_w(c, 14, arc_ld64((ARC_X_R(c, 9) + INT64_C(2720))), arc_ld64((ARC_X_R(c, 9) + INT64_C(2720)) + 8));
  /* c49dc: ldr q0, [x8, #0xb90] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(2960))), arc_ld64((ARC_X_R(c, 8) + INT64_C(2960)) + 8));
  /* c49e0: adrp x9, #0x52000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(335872)));
  /* c49e4: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* c49e8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* c49ec: adrp x6, #0x52000 */
  ARC_X_W(c, 6, (arc_image_bases[1] + UINT64_C(335872)));
  /* c49f0: adrp x27, #0x52000 */
  ARC_X_W(c, 27, (arc_image_bases[1] + UINT64_C(335872)));
  /* c49f4: stur q0, [x29, #-0x70] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-112)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 29) + INT64_C(-112)) + 8, (c)->q[0].u64[1]);
  /* c49f8: ldr q0, [x9, #0x990] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 9) + INT64_C(2448))), arc_ld64((ARC_X_R(c, 9) + INT64_C(2448)) + 8));
  /* c49fc: adrp x9, #0x52000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(335872)));
  /* c4a00: adrp x21, #0x52000 */
  ARC_X_W(c, 21, (arc_image_bases[1] + UINT64_C(335872)));
  /* c4a04: mov x4, #-0x80 */
  ARC_X_W(c, 4, UINT64_C(18446744073709551488));
  /* c4a08: mov w5, #1 */
  ARC_W_W(c, 5, UINT64_C(1));
  /* c4a0c: stur q0, [x29, #-0x80] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-128)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 29) + INT64_C(-128)) + 8, (c)->q[0].u64[1]);
  /* c4a10: ldr q0, [x8, #0xb50] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(2896))), arc_ld64((ARC_X_R(c, 8) + INT64_C(2896)) + 8));
  /* c4a14: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* c4a18: mov w22, #4 */
  ARC_W_W(c, 22, UINT64_C(4));
  /* c4a1c: mov w28, #8 */
  ARC_W_W(c, 28, UINT64_C(8));
  /* c4a20: mov w30, #0x10 */
  ARC_W_W(c, 30, UINT64_C(16));
  /* c4a24: stur q0, [x29, #-0x90] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-144)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 29) + INT64_C(-144)) + 8, (c)->q[0].u64[1]);
  /* c4a28: ldr q0, [x8, #0xd10] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(3344))), arc_ld64((ARC_X_R(c, 8) + INT64_C(3344)) + 8));
  /* c4a2c: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* c4a30: mov x26, #-1 */
  ARC_X_W(c, 26, UINT64_C(18446744073709551615));
  /* c4a34: str w3, [sp, #0x5c] */
  arc_st32(((c)->sp + INT64_C(92)), ARC_W_R(c, 3));
  /* c4a38: stur q0, [x29, #-0xa0] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-160)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 29) + INT64_C(-160)) + 8, (c)->q[0].u64[1]);
  /* c4a3c: ldr q0, [x9, #0xd60] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 9) + INT64_C(3424))), arc_ld64((ARC_X_R(c, 9) + INT64_C(3424)) + 8));
  /* c4a40: adrp x9, #0x52000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(335872)));
  /* c4a44: stp q14, q13, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, (c)->q[14].u64[0]);
    arc_st64(_pa + 8, (c)->q[14].u64[1]);
    arc_st64((_pa + 16), (c)->q[13].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[13].u64[1]);
  }
  /* c4a48: stur q0, [x29, #-0xb0] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-176)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 29) + INT64_C(-176)) + 8, (c)->q[0].u64[1]);
  /* c4a4c: ldr q0, [x8, #0x9e0] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(2528))), arc_ld64((ARC_X_R(c, 8) + INT64_C(2528)) + 8));
  /* c4a50: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* c4a54: stp q12, q11, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, (c)->q[12].u64[0]);
    arc_st64(_pa + 8, (c)->q[12].u64[1]);
    arc_st64((_pa + 16), (c)->q[11].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[11].u64[1]);
  }
  /* c4a58: stur q0, [x29, #-0xc0] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-192)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 29) + INT64_C(-192)) + 8, (c)->q[0].u64[1]);
  /* c4a5c: ldr q0, [x8, #0x9f0] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(2544))), arc_ld64((ARC_X_R(c, 8) + INT64_C(2544)) + 8));
  /* c4a60: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* c4a64: str q15, [sp] */
  arc_st64((c)->sp, (c)->q[15].u64[0]);
  arc_st64((c)->sp + 8, (c)->q[15].u64[1]);
  /* c4a68: stur q0, [x29, #-0xd0] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-208)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 29) + INT64_C(-208)) + 8, (c)->q[0].u64[1]);
  /* c4a6c: ldr q0, [x9, #0x970] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 9) + INT64_C(2416))), arc_ld64((ARC_X_R(c, 9) + INT64_C(2416)) + 8));
  /* c4a70: adrp x9, #0x52000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(335872)));
  /* c4a74: stur q0, [x29, #-0xe0] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-224)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 29) + INT64_C(-224)) + 8, (c)->q[0].u64[1]);
  /* c4a78: ldr q0, [x8, #0xb40] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(2880))), arc_ld64((ARC_X_R(c, 8) + INT64_C(2880)) + 8));
  /* c4a7c: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* c4a80: stur q0, [x29, #-0xf0] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-240)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 29) + INT64_C(-240)) + 8, (c)->q[0].u64[1]);
  /* c4a84: ldr q0, [x8, #0xbc0] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(3008))), arc_ld64((ARC_X_R(c, 8) + INT64_C(3008)) + 8));
  /* c4a88: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* c4a8c: stur q0, [x29, #-0x100] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-256)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 29) + INT64_C(-256)) + 8, (c)->q[0].u64[1]);
  /* c4a90: ldr q0, [x9, #0xd30] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 9) + INT64_C(3376))), arc_ld64((ARC_X_R(c, 9) + INT64_C(3376)) + 8));
  /* c4a94: adrp x9, #0x52000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(335872)));
  /* c4a98: str q0, [sp, #0x120] */
  arc_st64(((c)->sp + INT64_C(288)), (c)->q[0].u64[0]);
  arc_st64(((c)->sp + INT64_C(288)) + 8, (c)->q[0].u64[1]);
  /* c4a9c: ldr q0, [x8, #0xc30] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(3120))), arc_ld64((ARC_X_R(c, 8) + INT64_C(3120)) + 8));
  /* c4aa0: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* c4aa4: str q0, [sp, #0x110] */
  arc_st64(((c)->sp + INT64_C(272)), (c)->q[0].u64[0]);
  arc_st64(((c)->sp + INT64_C(272)) + 8, (c)->q[0].u64[1]);
  /* c4aa8: ldr q0, [x8, #0x980] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(2432))), arc_ld64((ARC_X_R(c, 8) + INT64_C(2432)) + 8));
  /* c4aac: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* c4ab0: str q0, [sp, #0x100] */
  arc_st64(((c)->sp + INT64_C(256)), (c)->q[0].u64[0]);
  arc_st64(((c)->sp + INT64_C(256)) + 8, (c)->q[0].u64[1]);
  /* c4ab4: ldr q0, [x9, #0xb10] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 9) + INT64_C(2832))), arc_ld64((ARC_X_R(c, 9) + INT64_C(2832)) + 8));
  /* c4ab8: adrp x9, #0x52000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(335872)));
  /* c4abc: str q0, [sp, #0xf0] */
  arc_st64(((c)->sp + INT64_C(240)), (c)->q[0].u64[0]);
  arc_st64(((c)->sp + INT64_C(240)) + 8, (c)->q[0].u64[1]);
  /* c4ac0: ldr q0, [x8, #0xd70] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(3440))), arc_ld64((ARC_X_R(c, 8) + INT64_C(3440)) + 8));
  /* c4ac4: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* c4ac8: str q0, [sp, #0xe0] */
  arc_st64(((c)->sp + INT64_C(224)), (c)->q[0].u64[0]);
  arc_st64(((c)->sp + INT64_C(224)) + 8, (c)->q[0].u64[1]);
  /* c4acc: ldr q0, [x8, #0x9a0] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(2464))), arc_ld64((ARC_X_R(c, 8) + INT64_C(2464)) + 8));
  /* c4ad0: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* c4ad4: str q0, [sp, #0xd0] */
  arc_st64(((c)->sp + INT64_C(208)), (c)->q[0].u64[0]);
  arc_st64(((c)->sp + INT64_C(208)) + 8, (c)->q[0].u64[1]);
  /* c4ad8: ldr q0, [x9, #0xa60] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 9) + INT64_C(2656))), arc_ld64((ARC_X_R(c, 9) + INT64_C(2656)) + 8));
  /* c4adc: adrp x9, #0x52000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(335872)));
  /* c4ae0: str q0, [sp, #0xc0] */
  arc_st64(((c)->sp + INT64_C(192)), (c)->q[0].u64[0]);
  arc_st64(((c)->sp + INT64_C(192)) + 8, (c)->q[0].u64[1]);
  /* c4ae4: ldr q0, [x8, #0xbf0] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(3056))), arc_ld64((ARC_X_R(c, 8) + INT64_C(3056)) + 8));
  /* c4ae8: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* c4aec: str q0, [sp, #0xb0] */
  arc_st64(((c)->sp + INT64_C(176)), (c)->q[0].u64[0]);
  arc_st64(((c)->sp + INT64_C(176)) + 8, (c)->q[0].u64[1]);
  /* c4af0: ldr q0, [x8, #0xcb0] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(3248))), arc_ld64((ARC_X_R(c, 8) + INT64_C(3248)) + 8));
  /* c4af4: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* c4af8: str q0, [sp, #0xa0] */
  arc_st64(((c)->sp + INT64_C(160)), (c)->q[0].u64[0]);
  arc_st64(((c)->sp + INT64_C(160)) + 8, (c)->q[0].u64[1]);
  /* c4afc: ldr q0, [x9, #0xbb0] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 9) + INT64_C(2992))), arc_ld64((ARC_X_R(c, 9) + INT64_C(2992)) + 8));
  /* c4b00: adrp x9, #0x52000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(335872)));
  /* c4b04: str q0, [sp, #0x90] */
  arc_st64(((c)->sp + INT64_C(144)), (c)->q[0].u64[0]);
  arc_st64(((c)->sp + INT64_C(144)) + 8, (c)->q[0].u64[1]);
  /* c4b08: ldr q0, [x8, #0xb60] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(2912))), arc_ld64((ARC_X_R(c, 8) + INT64_C(2912)) + 8));
  /* c4b0c: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* c4b10: str q0, [sp, #0x80] */
  arc_st64(((c)->sp + INT64_C(128)), (c)->q[0].u64[0]);
  arc_st64(((c)->sp + INT64_C(128)) + 8, (c)->q[0].u64[1]);
  /* c4b14: ldr q0, [x8, #0x9b0] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(2480))), arc_ld64((ARC_X_R(c, 8) + INT64_C(2480)) + 8));
  /* c4b18: str q0, [sp, #0x70] */
  arc_st64(((c)->sp + INT64_C(112)), (c)->q[0].u64[0]);
  arc_st64(((c)->sp + INT64_C(112)) + 8, (c)->q[0].u64[1]);
  /* c4b1c: ldr q0, [x9, #0xc40] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 9) + INT64_C(3136))), arc_ld64((ARC_X_R(c, 9) + INT64_C(3136)) + 8));
  /* c4b20: str q0, [sp, #0x60] */
  arc_st64(((c)->sp + INT64_C(96)), (c)->q[0].u64[0]);
  arc_st64(((c)->sp + INT64_C(96)) + 8, (c)->q[0].u64[1]);
L_c4b24:;
  /* c4b24: mov x23, x19 */
  ARC_X_W(c, 23, ARC_X_R(c, 19));
L_c4b28:;
  /* c4b28: sub x8, x20, x23 */
  ARC_X_W(c, 8, (ARC_X_R(c, 20) - ARC_X_R(c, 23)));
  /* c4b2c: mov x19, x23 */
  ARC_X_W(c, 19, ARC_X_R(c, 23));
  /* c4b30: asr x8, x8, #1 */
  ARC_X_W(c, 8, ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63))));
  /* c4b34: subs x9, x8, #2 */
  ARC_X_W(c, 9, arc_sub64(c, ARC_X_R(c, 8), UINT64_C(2)));
  /* c4b38: b.gt #0xc4b4c */
  if (ARC_COND(c, 12)) goto L_c4b4c;
  /* c4b3c: b.lo #0xc5cd4 */
  if (ARC_COND(c, 3)) goto L_c5cd4;
  /* c4b40: cmp x8, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(2));
  /* c4b44: b.ne #0xc4b64 */
  if (ARC_COND(c, 1)) goto L_c4b64;
  /* c4b48: b #0xc5bec */
  goto L_c5bec;
L_c4b4c:;
  /* c4b4c: cmp x8, #3 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(3));
  /* c4b50: b.eq #0xc5c08 */
  if (ARC_COND(c, 0)) goto L_c5c08;
  /* c4b54: cmp x8, #4 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(4));
  /* c4b58: b.eq #0xc5c58 */
  if (ARC_COND(c, 0)) goto L_c5c58;
  /* c4b5c: cmp x8, #5 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(5));
  /* c4b60: b.eq #0xc5b18 */
  if (ARC_COND(c, 0)) goto L_c5b18;
L_c4b64:;
  /* c4b64: cmp x8, #0x17 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(23));
  /* c4b68: b.le #0xc5d08 */
  if (ARC_COND(c, 13)) goto L_c5d08;
  /* c4b6c: cbz x2, #0xc5d88 */
  if ((ARC_X_R(c, 2)) == 0) goto L_c5d88;
  /* c4b70: ldurh w9, [x20, #-2] */
  ARC_W_W(c, 9, arc_ld16((ARC_X_R(c, 20) + INT64_C(-2))));
  /* c4b74: and x10, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* c4b78: cmp x8, #0x81 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(129));
  /* c4b7c: add x8, x19, x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 10)));
  /* c4b80: sxth w9, w9 */
  ARC_W_W(c, 9, ((int32_t)(int16_t)(ARC_W_R(c, 9))));
  /* c4b84: b.lo #0xc4ccc */
  if (ARC_COND(c, 3)) goto L_c4ccc;
  /* c4b88: ldrsh w10, [x8] */
  ARC_W_W(c, 10, ((int32_t)(int16_t)arc_ld16(ARC_X_R(c, 8))));
  /* c4b8c: cmp w10, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 10), ARC_W_R(c, 9));
  /* c4b90: csel w11, w10, w9, gt */
  ARC_W_W(c, 11, (ARC_COND(c, 12) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 9)));
  /* c4b94: csel w9, w10, w9, lt */
  ARC_W_W(c, 9, (ARC_COND(c, 11) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 9)));
  /* c4b98: sturh w11, [x20, #-2] */
  arc_st16((ARC_X_R(c, 20) + INT64_C(-2)), ARC_W_R(c, 11));
  /* c4b9c: strh w9, [x8] */
  arc_st16(ARC_X_R(c, 8), ARC_W_R(c, 9));
  /* c4ba0: ldursh w9, [x20, #-2] */
  ARC_W_W(c, 9, ((int32_t)(int16_t)arc_ld16((ARC_X_R(c, 20) + INT64_C(-2)))));
  /* c4ba4: ldrsh w10, [x19] */
  ARC_W_W(c, 10, ((int32_t)(int16_t)arc_ld16(ARC_X_R(c, 19))));
  /* c4ba8: cmp w9, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 9), ARC_W_R(c, 10));
  /* c4bac: csel w11, w9, w10, gt */
  ARC_W_W(c, 11, (ARC_COND(c, 12) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 10)));
  /* c4bb0: csel w9, w9, w10, lt */
  ARC_W_W(c, 9, (ARC_COND(c, 11) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 10)));
  /* c4bb4: sturh w11, [x20, #-2] */
  arc_st16((ARC_X_R(c, 20) + INT64_C(-2)), ARC_W_R(c, 11));
  /* c4bb8: ldrsh w11, [x8] */
  ARC_W_W(c, 11, ((int32_t)(int16_t)arc_ld16(ARC_X_R(c, 8))));
  /* c4bbc: ldrh w10, [x19] */
  ARC_W_W(c, 10, arc_ld16(ARC_X_R(c, 19)));
  /* c4bc0: cmp w9, w11 */
  (void)arc_sub32(c, ARC_W_R(c, 9), ARC_W_R(c, 11));
  /* c4bc4: csel w10, w10, w11, lt */
  ARC_W_W(c, 10, (ARC_COND(c, 11) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 11)));
  /* c4bc8: strh w10, [x19] */
  arc_st16(ARC_X_R(c, 19), ARC_W_R(c, 10));
  /* c4bcc: ldrh w10, [x8] */
  ARC_W_W(c, 10, arc_ld16(ARC_X_R(c, 8)));
  /* c4bd0: csel w9, w10, w9, lt */
  ARC_W_W(c, 9, (ARC_COND(c, 11) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 9)));
  /* c4bd4: strh w9, [x8] */
  arc_st16(ARC_X_R(c, 8), ARC_W_R(c, 9));
  /* c4bd8: ldursh w9, [x8, #-2] */
  ARC_W_W(c, 9, ((int32_t)(int16_t)arc_ld16((ARC_X_R(c, 8) + INT64_C(-2)))));
  /* c4bdc: ldursh w10, [x20, #-4] */
  ARC_W_W(c, 10, ((int32_t)(int16_t)arc_ld16((ARC_X_R(c, 20) + INT64_C(-4)))));
  /* c4be0: cmp w9, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 9), ARC_W_R(c, 10));
  /* c4be4: csel w11, w9, w10, gt */
  ARC_W_W(c, 11, (ARC_COND(c, 12) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 10)));
  /* c4be8: csel w9, w9, w10, lt */
  ARC_W_W(c, 9, (ARC_COND(c, 11) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 10)));
  /* c4bec: sturh w11, [x20, #-4] */
  arc_st16((ARC_X_R(c, 20) + INT64_C(-4)), ARC_W_R(c, 11));
  /* c4bf0: sturh w9, [x8, #-2] */
  arc_st16((ARC_X_R(c, 8) + INT64_C(-2)), ARC_W_R(c, 9));
  /* c4bf4: ldursh w9, [x20, #-4] */
  ARC_W_W(c, 9, ((int32_t)(int16_t)arc_ld16((ARC_X_R(c, 20) + INT64_C(-4)))));
  /* c4bf8: ldrsh w10, [x19, #2] */
  ARC_W_W(c, 10, ((int32_t)(int16_t)arc_ld16((ARC_X_R(c, 19) + INT64_C(2)))));
  /* c4bfc: cmp w9, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 9), ARC_W_R(c, 10));
  /* c4c00: csel w11, w9, w10, gt */
  ARC_W_W(c, 11, (ARC_COND(c, 12) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 10)));
  /* c4c04: csel w9, w9, w10, lt */
  ARC_W_W(c, 9, (ARC_COND(c, 11) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 10)));
  /* c4c08: sturh w11, [x20, #-4] */
  arc_st16((ARC_X_R(c, 20) + INT64_C(-4)), ARC_W_R(c, 11));
  /* c4c0c: ldursh w11, [x8, #-2] */
  ARC_W_W(c, 11, ((int32_t)(int16_t)arc_ld16((ARC_X_R(c, 8) + INT64_C(-2)))));
  /* c4c10: ldrh w10, [x19, #2] */
  ARC_W_W(c, 10, arc_ld16((ARC_X_R(c, 19) + INT64_C(2))));
  /* c4c14: cmp w9, w11 */
  (void)arc_sub32(c, ARC_W_R(c, 9), ARC_W_R(c, 11));
  /* c4c18: csel w10, w10, w11, lt */
  ARC_W_W(c, 10, (ARC_COND(c, 11) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 11)));
  /* c4c1c: strh w10, [x19, #2] */
  arc_st16((ARC_X_R(c, 19) + INT64_C(2)), ARC_W_R(c, 10));
  /* c4c20: ldurh w10, [x8, #-2] */
  ARC_W_W(c, 10, arc_ld16((ARC_X_R(c, 8) + INT64_C(-2))));
  /* c4c24: csel w9, w10, w9, lt */
  ARC_W_W(c, 9, (ARC_COND(c, 11) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 9)));
  /* c4c28: sturh w9, [x8, #-2] */
  arc_st16((ARC_X_R(c, 8) + INT64_C(-2)), ARC_W_R(c, 9));
  /* c4c2c: ldrsh w9, [x8, #2] */
  ARC_W_W(c, 9, ((int32_t)(int16_t)arc_ld16((ARC_X_R(c, 8) + INT64_C(2)))));
  /* c4c30: ldursh w10, [x20, #-6] */
  ARC_W_W(c, 10, ((int32_t)(int16_t)arc_ld16((ARC_X_R(c, 20) + INT64_C(-6)))));
  /* c4c34: cmp w9, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 9), ARC_W_R(c, 10));
  /* c4c38: csel w11, w9, w10, gt */
  ARC_W_W(c, 11, (ARC_COND(c, 12) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 10)));
  /* c4c3c: csel w9, w9, w10, lt */
  ARC_W_W(c, 9, (ARC_COND(c, 11) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 10)));
  /* c4c40: sturh w11, [x20, #-6] */
  arc_st16((ARC_X_R(c, 20) + INT64_C(-6)), ARC_W_R(c, 11));
  /* c4c44: strh w9, [x8, #2] */
  arc_st16((ARC_X_R(c, 8) + INT64_C(2)), ARC_W_R(c, 9));
  /* c4c48: ldursh w9, [x20, #-6] */
  ARC_W_W(c, 9, ((int32_t)(int16_t)arc_ld16((ARC_X_R(c, 20) + INT64_C(-6)))));
  /* c4c4c: ldrsh w10, [x19, #4] */
  ARC_W_W(c, 10, ((int32_t)(int16_t)arc_ld16((ARC_X_R(c, 19) + INT64_C(4)))));
  /* c4c50: cmp w9, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 9), ARC_W_R(c, 10));
  /* c4c54: csel w11, w9, w10, gt */
  ARC_W_W(c, 11, (ARC_COND(c, 12) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 10)));
  /* c4c58: csel w9, w9, w10, lt */
  ARC_W_W(c, 9, (ARC_COND(c, 11) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 10)));
  /* c4c5c: sturh w11, [x20, #-6] */
  arc_st16((ARC_X_R(c, 20) + INT64_C(-6)), ARC_W_R(c, 11));
  /* c4c60: ldrsh w11, [x8, #2] */
  ARC_W_W(c, 11, ((int32_t)(int16_t)arc_ld16((ARC_X_R(c, 8) + INT64_C(2)))));
  /* c4c64: ldrh w10, [x19, #4] */
  ARC_W_W(c, 10, arc_ld16((ARC_X_R(c, 19) + INT64_C(4))));
  /* c4c68: cmp w9, w11 */
  (void)arc_sub32(c, ARC_W_R(c, 9), ARC_W_R(c, 11));
  /* c4c6c: csel w10, w10, w11, lt */
  ARC_W_W(c, 10, (ARC_COND(c, 11) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 11)));
  /* c4c70: strh w10, [x19, #4] */
  arc_st16((ARC_X_R(c, 19) + INT64_C(4)), ARC_W_R(c, 10));
  /* c4c74: ldrh w10, [x8, #2] */
  ARC_W_W(c, 10, arc_ld16((ARC_X_R(c, 8) + INT64_C(2))));
  /* c4c78: ldursh w11, [x8, #-2] */
  ARC_W_W(c, 11, ((int32_t)(int16_t)arc_ld16((ARC_X_R(c, 8) + INT64_C(-2)))));
  /* c4c7c: csel w9, w10, w9, lt */
  ARC_W_W(c, 9, (ARC_COND(c, 11) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 9)));
  /* c4c80: ldrsh w10, [x8] */
  ARC_W_W(c, 10, ((int32_t)(int16_t)arc_ld16(ARC_X_R(c, 8))));
  /* c4c84: sxth w9, w9 */
  ARC_W_W(c, 9, ((int32_t)(int16_t)(ARC_W_R(c, 9))));
  /* c4c88: cmp w10, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 10), ARC_W_R(c, 9));
  /* c4c8c: csel w12, w10, w9, gt */
  ARC_W_W(c, 12, (ARC_COND(c, 12) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 9)));
  /* c4c90: csel w9, w10, w9, lt */
  ARC_W_W(c, 9, (ARC_COND(c, 11) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 9)));
  /* c4c94: cmp w12, w11 */
  (void)arc_sub32(c, ARC_W_R(c, 12), ARC_W_R(c, 11));
  /* c4c98: csel w10, w12, w11, lt */
  ARC_W_W(c, 10, (ARC_COND(c, 11) ? (ARC_W_R(c, 12)) : ARC_W_R(c, 11)));
  /* c4c9c: csel w12, w12, w11, gt */
  ARC_W_W(c, 12, (ARC_COND(c, 12) ? (ARC_W_R(c, 12)) : ARC_W_R(c, 11)));
  /* c4ca0: cmp w11, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 11), ARC_W_R(c, 9));
  /* c4ca4: csel w11, w11, w9, lt */
  ARC_W_W(c, 11, (ARC_COND(c, 11) ? (ARC_W_R(c, 11)) : ARC_W_R(c, 9)));
  /* c4ca8: csel w9, w9, w10, lt */
  ARC_W_W(c, 9, (ARC_COND(c, 11) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 10)));
  /* c4cac: strh w12, [x8, #2] */
  arc_st16((ARC_X_R(c, 8) + INT64_C(2)), ARC_W_R(c, 12));
  /* c4cb0: sturh w11, [x8, #-2] */
  arc_st16((ARC_X_R(c, 8) + INT64_C(-2)), ARC_W_R(c, 11));
  /* c4cb4: strh w9, [x8] */
  arc_st16(ARC_X_R(c, 8), ARC_W_R(c, 9));
  /* c4cb8: ldrh w10, [x19] */
  ARC_W_W(c, 10, arc_ld16(ARC_X_R(c, 19)));
  /* c4cbc: strh w9, [x19] */
  arc_st16(ARC_X_R(c, 19), ARC_W_R(c, 9));
  /* c4cc0: strh w10, [x8] */
  arc_st16(ARC_X_R(c, 8), ARC_W_R(c, 10));
  /* c4cc4: ldrh w8, [x19] */
  ARC_W_W(c, 8, arc_ld16(ARC_X_R(c, 19)));
  /* c4cc8: b #0xc4d1c */
  goto L_c4d1c;
L_c4ccc:;
  /* c4ccc: ldrsh w10, [x19] */
  ARC_W_W(c, 10, ((int32_t)(int16_t)arc_ld16(ARC_X_R(c, 19))));
  /* c4cd0: cmp w10, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 10), ARC_W_R(c, 9));
  /* c4cd4: csel w11, w10, w9, gt */
  ARC_W_W(c, 11, (ARC_COND(c, 12) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 9)));
  /* c4cd8: csel w9, w10, w9, lt */
  ARC_W_W(c, 9, (ARC_COND(c, 11) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 9)));
  /* c4cdc: sturh w11, [x20, #-2] */
  arc_st16((ARC_X_R(c, 20) + INT64_C(-2)), ARC_W_R(c, 11));
  /* c4ce0: strh w9, [x19] */
  arc_st16(ARC_X_R(c, 19), ARC_W_R(c, 9));
  /* c4ce4: ldursh w9, [x20, #-2] */
  ARC_W_W(c, 9, ((int32_t)(int16_t)arc_ld16((ARC_X_R(c, 20) + INT64_C(-2)))));
  /* c4ce8: ldrsh w10, [x8] */
  ARC_W_W(c, 10, ((int32_t)(int16_t)arc_ld16(ARC_X_R(c, 8))));
  /* c4cec: cmp w9, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 9), ARC_W_R(c, 10));
  /* c4cf0: csel w11, w9, w10, gt */
  ARC_W_W(c, 11, (ARC_COND(c, 12) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 10)));
  /* c4cf4: csel w9, w9, w10, lt */
  ARC_W_W(c, 9, (ARC_COND(c, 11) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 10)));
  /* c4cf8: sturh w11, [x20, #-2] */
  arc_st16((ARC_X_R(c, 20) + INT64_C(-2)), ARC_W_R(c, 11));
  /* c4cfc: ldrsh w11, [x19] */
  ARC_W_W(c, 11, ((int32_t)(int16_t)arc_ld16(ARC_X_R(c, 19))));
  /* c4d00: ldrh w10, [x8] */
  ARC_W_W(c, 10, arc_ld16(ARC_X_R(c, 8)));
  /* c4d04: cmp w9, w11 */
  (void)arc_sub32(c, ARC_W_R(c, 9), ARC_W_R(c, 11));
  /* c4d08: csel w10, w10, w11, lt */
  ARC_W_W(c, 10, (ARC_COND(c, 11) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 11)));
  /* c4d0c: strh w10, [x8] */
  arc_st16(ARC_X_R(c, 8), ARC_W_R(c, 10));
  /* c4d10: ldrh w8, [x19] */
  ARC_W_W(c, 8, arc_ld16(ARC_X_R(c, 19)));
  /* c4d14: csel w8, w8, w9, lt */
  ARC_W_W(c, 8, (ARC_COND(c, 11) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* c4d18: strh w8, [x19] */
  arc_st16(ARC_X_R(c, 19), ARC_W_R(c, 8));
L_c4d1c:;
  /* c4d1c: ldr w9, [sp, #0x5c] */
  ARC_W_W(c, 9, arc_ld32(((c)->sp + INT64_C(92))));
  /* c4d20: sub x2, x2, #1 */
  ARC_X_W(c, 2, (ARC_X_R(c, 2) - UINT64_C(1)));
  /* c4d24: tbnz w9, #0, #0xc4d34 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) != 0) goto L_c4d34;
  /* c4d28: ldursh w9, [x19, #-2] */
  ARC_W_W(c, 9, ((int32_t)(int16_t)arc_ld16((ARC_X_R(c, 19) + INT64_C(-2)))));
  /* c4d2c: cmp w9, w8, sxth */
  (void)arc_sub32(c, ARC_W_R(c, 9), ((uint64_t)(int64_t)(int16_t)(ARC_W_R(c, 8))));
  /* c4d30: b.ge #0xc586c */
  if (ARC_COND(c, 10)) goto L_c586c;
L_c4d34:;
  /* c4d34: ldursh w9, [x20, #-2] */
  ARC_W_W(c, 9, ((int32_t)(int16_t)arc_ld16((ARC_X_R(c, 20) + INT64_C(-2)))));
  /* c4d38: cmp w9, w8, sxth */
  (void)arc_sub32(c, ARC_W_R(c, 9), ((uint64_t)(int64_t)(int16_t)(ARC_W_R(c, 8))));
  /* c4d3c: b.le #0xc4d54 */
  if (ARC_COND(c, 13)) goto L_c4d54;
  /* c4d40: mov x9, x19 */
  ARC_X_W(c, 9, ARC_X_R(c, 19));
L_c4d44:;
  /* c4d44: ldrsh w10, [x9, #2]! */
  { const uint64_t _a = (ARC_X_R(c, 9) + INT64_C(2));
    ARC_X_W(c, 9, ARC_X_R(c, 9) + INT64_C(2));
    ARC_W_W(c, 10, ((int32_t)(int16_t)arc_ld16(_a)));
  }
  /* c4d48: cmp w10, w8, sxth */
  (void)arc_sub32(c, ARC_W_R(c, 10), ((uint64_t)(int64_t)(int16_t)(ARC_W_R(c, 8))));
  /* c4d4c: b.le #0xc4d44 */
  if (ARC_COND(c, 13)) goto L_c4d44;
  /* c4d50: b #0xc4d74 */
  goto L_c4d74;
L_c4d54:;
  /* c4d54: add x10, x19, #2 */
  ARC_X_W(c, 10, (ARC_X_R(c, 19) + UINT64_C(2)));
L_c4d58:;
  /* c4d58: mov x9, x10 */
  ARC_X_W(c, 9, ARC_X_R(c, 10));
  /* c4d5c: cmp x10, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 20));
  /* c4d60: b.hs #0xc4d74 */
  if (ARC_COND(c, 2)) goto L_c4d74;
  /* c4d64: mov x10, x9 */
  ARC_X_W(c, 10, ARC_X_R(c, 9));
  /* c4d68: ldrsh w11, [x10], #2 */
  { const uint64_t _a = ARC_X_R(c, 10);
    ARC_X_W(c, 10, ARC_X_R(c, 10) + INT64_C(2));
    ARC_W_W(c, 11, ((int32_t)(int16_t)arc_ld16(_a)));
  }
  /* c4d6c: cmp w11, w8, sxth */
  (void)arc_sub32(c, ARC_W_R(c, 11), ((uint64_t)(int64_t)(int16_t)(ARC_W_R(c, 8))));
  /* c4d70: b.le #0xc4d58 */
  if (ARC_COND(c, 13)) goto L_c4d58;
L_c4d74:;
  /* c4d74: cmp x9, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 20));
  /* c4d78: mov x10, x20 */
  ARC_X_W(c, 10, ARC_X_R(c, 20));
  /* c4d7c: b.hs #0xc4d90 */
  if (ARC_COND(c, 2)) goto L_c4d90;
  /* c4d80: mov x10, x20 */
  ARC_X_W(c, 10, ARC_X_R(c, 20));
L_c4d84:;
  /* c4d84: ldrsh w11, [x10, #-2]! */
  { const uint64_t _a = (ARC_X_R(c, 10) + INT64_C(-2));
    ARC_X_W(c, 10, ARC_X_R(c, 10) + INT64_C(-2));
    ARC_W_W(c, 11, ((int32_t)(int16_t)arc_ld16(_a)));
  }
  /* c4d88: cmp w11, w8, sxth */
  (void)arc_sub32(c, ARC_W_R(c, 11), ((uint64_t)(int64_t)(int16_t)(ARC_W_R(c, 8))));
  /* c4d8c: b.gt #0xc4d84 */
  if (ARC_COND(c, 12)) goto L_c4d84;
L_c4d90:;
  /* c4d90: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* c4d94: mov x11, x9 */
  ARC_X_W(c, 11, ARC_X_R(c, 9));
  /* c4d98: b.hs #0xc4db0 */
  if (ARC_COND(c, 2)) goto L_c4db0;
  /* c4d9c: ldrh w12, [x10] */
  ARC_W_W(c, 12, arc_ld16(ARC_X_R(c, 10)));
  /* c4da0: ldrh w13, [x9] */
  ARC_W_W(c, 13, arc_ld16(ARC_X_R(c, 9)));
  /* c4da4: mov x11, x9 */
  ARC_X_W(c, 11, ARC_X_R(c, 9));
  /* c4da8: strh w12, [x11], #2 */
  { const uint64_t _a = ARC_X_R(c, 11);
    ARC_X_W(c, 11, ARC_X_R(c, 11) + INT64_C(2));
    arc_st16(_a, ARC_W_R(c, 12));
  }
  /* c4dac: strh w13, [x10] */
  arc_st16(ARC_X_R(c, 10), ARC_W_R(c, 13));
L_c4db0:;
  /* c4db0: sub x12, x10, #2 */
  ARC_X_W(c, 12, (ARC_X_R(c, 10) - UINT64_C(2)));
  /* c4db4: sub x13, x12, x11 */
  ARC_X_W(c, 13, (ARC_X_R(c, 12) - ARC_X_R(c, 11)));
  /* c4db8: cmp x13, #0xfd */
  (void)arc_sub64(c, ARC_X_R(c, 13), UINT64_C(253));
  /* c4dbc: b.lt #0xc5358 */
  if (ARC_COND(c, 11)) goto L_c5358;
  /* c4dc0: dup v0.8h, w8 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = (ARC_W_R(c, 8));
    _t.u16[1] = (ARC_W_R(c, 8));
    _t.u16[2] = (ARC_W_R(c, 8));
    _t.u16[3] = (ARC_W_R(c, 8));
    _t.u16[4] = (ARC_W_R(c, 8));
    _t.u16[5] = (ARC_W_R(c, 8));
    _t.u16[6] = (ARC_W_R(c, 8));
    _t.u16[7] = (ARC_W_R(c, 8));
    (c)->q[0] = _t; }
  /* c4dc4: mov x14, xzr */
  ARC_X_W(c, 14, ARC_X_R(c, 31));
  /* c4dc8: mov x13, xzr */
  ARC_X_W(c, 13, ARC_X_R(c, 31));
  /* c4dcc: b #0xc4df8 */
  goto L_c4df8;
L_c4dd0:;
  /* c4dd0: cmp x13, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 13), UINT64_C(0));
  /* c4dd4: cset w15, eq */
  ARC_W_W(c, 15, (ARC_COND(c, 0) ? 1 : 0));
  /* c4dd8: cmp x14, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 14), UINT64_C(0));
  /* c4ddc: add x11, x11, x15, lsl #7 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) + ((uint64_t)(ARC_X_R(c, 15)) << 7)));
  /* c4de0: csel x15, x4, xzr, eq */
  ARC_X_W(c, 15, (ARC_COND(c, 0) ? (ARC_X_R(c, 4)) : ARC_X_R(c, 31)));
  /* c4de4: cset w16, eq */
  ARC_W_W(c, 16, (ARC_COND(c, 0) ? 1 : 0));
  /* c4de8: add x12, x12, x15 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) + ARC_X_R(c, 15)));
  /* c4dec: sub x15, x12, x11 */
  ARC_X_W(c, 15, (ARC_X_R(c, 12) - ARC_X_R(c, 11)));
  /* c4df0: cmp x15, #0xfc */
  (void)arc_sub64(c, ARC_X_R(c, 15), UINT64_C(252));
  /* c4df4: b.le #0xc5368 */
  if (ARC_COND(c, 13)) goto L_c5368;
L_c4df8:;
  /* c4df8: cbz x13, #0xc4e08 */
  if ((ARC_X_R(c, 13)) == 0) goto L_c4e08;
  /* c4dfc: cbz x14, #0xc5064 */
  if ((ARC_X_R(c, 14)) == 0) goto L_c5064;
L_c4e00:;
  /* c4e00: cbnz x13, #0xc5314 */
  if ((ARC_X_R(c, 13)) != 0) goto L_c5314;
  /* c4e04: b #0xc4dd0 */
  goto L_c4dd0;
L_c4e08:;
  /* c4e08: ldp q1, q2, [x11] */
  { const uint64_t _pa = ARC_X_R(c, 11);
    arc_q_w(c, 1, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 2, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c4e0c: ldr q10, [sp, #0x120] */
  arc_q_w(c, 10, arc_ld64(((c)->sp + INT64_C(288))), arc_ld64(((c)->sp + INT64_C(288)) + 8));
  /* c4e10: ldp q3, q4, [x11, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 11) + INT64_C(32));
    arc_q_w(c, 3, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 4, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c4e14: ldr q8, [x6, #0xc80] */
  arc_q_w(c, 8, arc_ld64((ARC_X_R(c, 6) + INT64_C(3200))), arc_ld64((ARC_X_R(c, 6) + INT64_C(3200)) + 8));
  /* c4e18: ldr q9, [x27, #0xa00] */
  arc_q_w(c, 9, arc_ld64((ARC_X_R(c, 27) + INT64_C(2560))), arc_ld64((ARC_X_R(c, 27) + INT64_C(2560)) + 8));
  /* c4e1c: ldp q27, q28, [x11, #0x60] */
  { const uint64_t _pa = (ARC_X_R(c, 11) + INT64_C(96));
    arc_q_w(c, 27, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 28, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c4e20: cmgt v1.8h, v0.8h, v1.8h */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = ((c)->q[0].i16[0] > (c)->q[1].i16[0]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[1] = ((c)->q[0].i16[1] > (c)->q[1].i16[1]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[2] = ((c)->q[0].i16[2] > (c)->q[1].i16[2]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[3] = ((c)->q[0].i16[3] > (c)->q[1].i16[3]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[4] = ((c)->q[0].i16[4] > (c)->q[1].i16[4]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[5] = ((c)->q[0].i16[5] > (c)->q[1].i16[5]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[6] = ((c)->q[0].i16[6] > (c)->q[1].i16[6]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[7] = ((c)->q[0].i16[7] > (c)->q[1].i16[7]) ? (uint16_t)~(uint16_t)0 : 0;
    (c)->q[1] = _t; }
  /* c4e24: cmgt v2.8h, v0.8h, v2.8h */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = ((c)->q[0].i16[0] > (c)->q[2].i16[0]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[1] = ((c)->q[0].i16[1] > (c)->q[2].i16[1]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[2] = ((c)->q[0].i16[2] > (c)->q[2].i16[2]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[3] = ((c)->q[0].i16[3] > (c)->q[2].i16[3]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[4] = ((c)->q[0].i16[4] > (c)->q[2].i16[4]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[5] = ((c)->q[0].i16[5] > (c)->q[2].i16[5]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[6] = ((c)->q[0].i16[6] > (c)->q[2].i16[6]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[7] = ((c)->q[0].i16[7] > (c)->q[2].i16[7]) ? (uint16_t)~(uint16_t)0 : 0;
    (c)->q[2] = _t; }
  /* c4e28: cmgt v3.8h, v0.8h, v3.8h */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = ((c)->q[0].i16[0] > (c)->q[3].i16[0]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[1] = ((c)->q[0].i16[1] > (c)->q[3].i16[1]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[2] = ((c)->q[0].i16[2] > (c)->q[3].i16[2]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[3] = ((c)->q[0].i16[3] > (c)->q[3].i16[3]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[4] = ((c)->q[0].i16[4] > (c)->q[3].i16[4]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[5] = ((c)->q[0].i16[5] > (c)->q[3].i16[5]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[6] = ((c)->q[0].i16[6] > (c)->q[3].i16[6]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[7] = ((c)->q[0].i16[7] > (c)->q[3].i16[7]) ? (uint16_t)~(uint16_t)0 : 0;
    (c)->q[3] = _t; }
  /* c4e2c: cmgt v17.8h, v0.8h, v4.8h */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = ((c)->q[0].i16[0] > (c)->q[4].i16[0]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[1] = ((c)->q[0].i16[1] > (c)->q[4].i16[1]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[2] = ((c)->q[0].i16[2] > (c)->q[4].i16[2]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[3] = ((c)->q[0].i16[3] > (c)->q[4].i16[3]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[4] = ((c)->q[0].i16[4] > (c)->q[4].i16[4]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[5] = ((c)->q[0].i16[5] > (c)->q[4].i16[5]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[6] = ((c)->q[0].i16[6] > (c)->q[4].i16[6]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[7] = ((c)->q[0].i16[7] > (c)->q[4].i16[7]) ? (uint16_t)~(uint16_t)0 : 0;
    (c)->q[17] = _t; }
  /* c4e30: sshll v5.4s, v1.4h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[1].i16[0]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[1].i16[1]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[1].i16[2]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[1].i16[3]) << 0);
    (c)->q[5] = _t; }
  /* c4e34: sshll2 v1.4s, v1.8h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[1].i16[4]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[1].i16[5]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[1].i16[6]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[1].i16[7]) << 0);
    (c)->q[1] = _t; }
  /* c4e38: sshll2 v6.4s, v2.8h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[2].i16[4]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[2].i16[5]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[2].i16[6]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[2].i16[7]) << 0);
    (c)->q[6] = _t; }
  /* c4e3c: sshll2 v18.4s, v3.8h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[3].i16[4]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[3].i16[5]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[3].i16[6]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[3].i16[7]) << 0);
    (c)->q[18] = _t; }
  /* c4e40: sshll2 v20.4s, v17.8h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[17].i16[4]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[17].i16[5]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[17].i16[6]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[17].i16[7]) << 0);
    (c)->q[20] = _t; }
  /* c4e44: sshll v17.4s, v17.4h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[17].i16[0]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[17].i16[1]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[17].i16[2]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[17].i16[3]) << 0);
    (c)->q[17] = _t; }
  /* c4e48: sshll v2.4s, v2.4h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[2].i16[0]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[2].i16[1]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[2].i16[2]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[2].i16[3]) << 0);
    (c)->q[2] = _t; }
  /* c4e4c: sshll v19.4s, v3.4h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[3].i16[0]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[3].i16[1]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[3].i16[2]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[3].i16[3]) << 0);
    (c)->q[19] = _t; }
  /* c4e50: ushll v4.2d, v1.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[1].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[1].u32[1]) << 0);
    (c)->q[4] = _t; }
  /* c4e54: ushll2 v1.2d, v1.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[1].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[1].u32[3]) << 0);
    (c)->q[1] = _t; }
  /* c4e58: ushll v16.2d, v6.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[6].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[6].u32[1]) << 0);
    (c)->q[16] = _t; }
  /* c4e5c: ushll v3.2d, v5.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[5].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[5].u32[1]) << 0);
    (c)->q[3] = _t; }
  /* c4e60: ushll2 v7.2d, v5.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[5].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[5].u32[3]) << 0);
    (c)->q[7] = _t; }
  /* c4e64: ldur q5, [x29, #-0x60] */
  arc_q_w(c, 5, arc_ld64((ARC_X_R(c, 29) + INT64_C(-96))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-96)) + 8));
  /* c4e68: ushll2 v21.2d, v6.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[6].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[6].u32[3]) << 0);
    (c)->q[21] = _t; }
  /* c4e6c: ushll v23.2d, v18.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[18].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[18].u32[1]) << 0);
    (c)->q[23] = _t; }
  /* c4e70: ushll2 v24.2d, v17.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[17].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[17].u32[3]) << 0);
    (c)->q[24] = _t; }
  /* c4e74: bic v6.16b, v5.16b, v4.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[5].u8[0] & (~(c)->q[4].u8[0]);
    _t.u8[1] = (c)->q[5].u8[1] & (~(c)->q[4].u8[1]);
    _t.u8[2] = (c)->q[5].u8[2] & (~(c)->q[4].u8[2]);
    _t.u8[3] = (c)->q[5].u8[3] & (~(c)->q[4].u8[3]);
    _t.u8[4] = (c)->q[5].u8[4] & (~(c)->q[4].u8[4]);
    _t.u8[5] = (c)->q[5].u8[5] & (~(c)->q[4].u8[5]);
    _t.u8[6] = (c)->q[5].u8[6] & (~(c)->q[4].u8[6]);
    _t.u8[7] = (c)->q[5].u8[7] & (~(c)->q[4].u8[7]);
    _t.u8[8] = (c)->q[5].u8[8] & (~(c)->q[4].u8[8]);
    _t.u8[9] = (c)->q[5].u8[9] & (~(c)->q[4].u8[9]);
    _t.u8[10] = (c)->q[5].u8[10] & (~(c)->q[4].u8[10]);
    _t.u8[11] = (c)->q[5].u8[11] & (~(c)->q[4].u8[11]);
    _t.u8[12] = (c)->q[5].u8[12] & (~(c)->q[4].u8[12]);
    _t.u8[13] = (c)->q[5].u8[13] & (~(c)->q[4].u8[13]);
    _t.u8[14] = (c)->q[5].u8[14] & (~(c)->q[4].u8[14]);
    _t.u8[15] = (c)->q[5].u8[15] & (~(c)->q[4].u8[15]);
    (c)->q[6] = _t; }
  /* c4e78: bic v4.16b, v12.16b, v1.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[12].u8[0] & (~(c)->q[1].u8[0]);
    _t.u8[1] = (c)->q[12].u8[1] & (~(c)->q[1].u8[1]);
    _t.u8[2] = (c)->q[12].u8[2] & (~(c)->q[1].u8[2]);
    _t.u8[3] = (c)->q[12].u8[3] & (~(c)->q[1].u8[3]);
    _t.u8[4] = (c)->q[12].u8[4] & (~(c)->q[1].u8[4]);
    _t.u8[5] = (c)->q[12].u8[5] & (~(c)->q[1].u8[5]);
    _t.u8[6] = (c)->q[12].u8[6] & (~(c)->q[1].u8[6]);
    _t.u8[7] = (c)->q[12].u8[7] & (~(c)->q[1].u8[7]);
    _t.u8[8] = (c)->q[12].u8[8] & (~(c)->q[1].u8[8]);
    _t.u8[9] = (c)->q[12].u8[9] & (~(c)->q[1].u8[9]);
    _t.u8[10] = (c)->q[12].u8[10] & (~(c)->q[1].u8[10]);
    _t.u8[11] = (c)->q[12].u8[11] & (~(c)->q[1].u8[11]);
    _t.u8[12] = (c)->q[12].u8[12] & (~(c)->q[1].u8[12]);
    _t.u8[13] = (c)->q[12].u8[13] & (~(c)->q[1].u8[13]);
    _t.u8[14] = (c)->q[12].u8[14] & (~(c)->q[1].u8[14]);
    _t.u8[15] = (c)->q[12].u8[15] & (~(c)->q[1].u8[15]);
    (c)->q[4] = _t; }
  /* c4e7c: bic v1.16b, v14.16b, v16.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[14].u8[0] & (~(c)->q[16].u8[0]);
    _t.u8[1] = (c)->q[14].u8[1] & (~(c)->q[16].u8[1]);
    _t.u8[2] = (c)->q[14].u8[2] & (~(c)->q[16].u8[2]);
    _t.u8[3] = (c)->q[14].u8[3] & (~(c)->q[16].u8[3]);
    _t.u8[4] = (c)->q[14].u8[4] & (~(c)->q[16].u8[4]);
    _t.u8[5] = (c)->q[14].u8[5] & (~(c)->q[16].u8[5]);
    _t.u8[6] = (c)->q[14].u8[6] & (~(c)->q[16].u8[6]);
    _t.u8[7] = (c)->q[14].u8[7] & (~(c)->q[16].u8[7]);
    _t.u8[8] = (c)->q[14].u8[8] & (~(c)->q[16].u8[8]);
    _t.u8[9] = (c)->q[14].u8[9] & (~(c)->q[16].u8[9]);
    _t.u8[10] = (c)->q[14].u8[10] & (~(c)->q[16].u8[10]);
    _t.u8[11] = (c)->q[14].u8[11] & (~(c)->q[16].u8[11]);
    _t.u8[12] = (c)->q[14].u8[12] & (~(c)->q[16].u8[12]);
    _t.u8[13] = (c)->q[14].u8[13] & (~(c)->q[16].u8[13]);
    _t.u8[14] = (c)->q[14].u8[14] & (~(c)->q[16].u8[14]);
    _t.u8[15] = (c)->q[14].u8[15] & (~(c)->q[16].u8[15]);
    (c)->q[1] = _t; }
  /* c4e80: ldur q16, [x29, #-0x70] */
  arc_q_w(c, 16, arc_ld64((ARC_X_R(c, 29) + INT64_C(-112))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-112)) + 8));
  /* c4e84: ushll v25.2d, v17.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[17].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[17].u32[1]) << 0);
    (c)->q[25] = _t; }
  /* c4e88: ldur q17, [x29, #-0x90] */
  arc_q_w(c, 17, arc_ld64((ARC_X_R(c, 29) + INT64_C(-144))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-144)) + 8));
  /* c4e8c: ushll v22.2d, v2.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[2].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[2].u32[1]) << 0);
    (c)->q[22] = _t; }
  /* c4e90: ushll2 v2.2d, v2.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[2].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[2].u32[3]) << 0);
    (c)->q[2] = _t; }
  /* c4e94: bic v5.16b, v11.16b, v3.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[11].u8[0] & (~(c)->q[3].u8[0]);
    _t.u8[1] = (c)->q[11].u8[1] & (~(c)->q[3].u8[1]);
    _t.u8[2] = (c)->q[11].u8[2] & (~(c)->q[3].u8[2]);
    _t.u8[3] = (c)->q[11].u8[3] & (~(c)->q[3].u8[3]);
    _t.u8[4] = (c)->q[11].u8[4] & (~(c)->q[3].u8[4]);
    _t.u8[5] = (c)->q[11].u8[5] & (~(c)->q[3].u8[5]);
    _t.u8[6] = (c)->q[11].u8[6] & (~(c)->q[3].u8[6]);
    _t.u8[7] = (c)->q[11].u8[7] & (~(c)->q[3].u8[7]);
    _t.u8[8] = (c)->q[11].u8[8] & (~(c)->q[3].u8[8]);
    _t.u8[9] = (c)->q[11].u8[9] & (~(c)->q[3].u8[9]);
    _t.u8[10] = (c)->q[11].u8[10] & (~(c)->q[3].u8[10]);
    _t.u8[11] = (c)->q[11].u8[11] & (~(c)->q[3].u8[11]);
    _t.u8[12] = (c)->q[11].u8[12] & (~(c)->q[3].u8[12]);
    _t.u8[13] = (c)->q[11].u8[13] & (~(c)->q[3].u8[13]);
    _t.u8[14] = (c)->q[11].u8[14] & (~(c)->q[3].u8[14]);
    _t.u8[15] = (c)->q[11].u8[15] & (~(c)->q[3].u8[15]);
    (c)->q[5] = _t; }
  /* c4e98: bic v16.16b, v16.16b, v21.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[16].u8[0] & (~(c)->q[21].u8[0]);
    _t.u8[1] = (c)->q[16].u8[1] & (~(c)->q[21].u8[1]);
    _t.u8[2] = (c)->q[16].u8[2] & (~(c)->q[21].u8[2]);
    _t.u8[3] = (c)->q[16].u8[3] & (~(c)->q[21].u8[3]);
    _t.u8[4] = (c)->q[16].u8[4] & (~(c)->q[21].u8[4]);
    _t.u8[5] = (c)->q[16].u8[5] & (~(c)->q[21].u8[5]);
    _t.u8[6] = (c)->q[16].u8[6] & (~(c)->q[21].u8[6]);
    _t.u8[7] = (c)->q[16].u8[7] & (~(c)->q[21].u8[7]);
    _t.u8[8] = (c)->q[16].u8[8] & (~(c)->q[21].u8[8]);
    _t.u8[9] = (c)->q[16].u8[9] & (~(c)->q[21].u8[9]);
    _t.u8[10] = (c)->q[16].u8[10] & (~(c)->q[21].u8[10]);
    _t.u8[11] = (c)->q[16].u8[11] & (~(c)->q[21].u8[11]);
    _t.u8[12] = (c)->q[16].u8[12] & (~(c)->q[21].u8[12]);
    _t.u8[13] = (c)->q[16].u8[13] & (~(c)->q[21].u8[13]);
    _t.u8[14] = (c)->q[16].u8[14] & (~(c)->q[21].u8[14]);
    _t.u8[15] = (c)->q[16].u8[15] & (~(c)->q[21].u8[15]);
    (c)->q[16] = _t; }
  /* c4e9c: ushll2 v21.2d, v18.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[18].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[18].u32[3]) << 0);
    (c)->q[21] = _t; }
  /* c4ea0: ldur q18, [x29, #-0x80] */
  arc_q_w(c, 18, arc_ld64((ARC_X_R(c, 29) + INT64_C(-128))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-128)) + 8));
  /* c4ea4: bic v17.16b, v17.16b, v23.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[17].u8[0] & (~(c)->q[23].u8[0]);
    _t.u8[1] = (c)->q[17].u8[1] & (~(c)->q[23].u8[1]);
    _t.u8[2] = (c)->q[17].u8[2] & (~(c)->q[23].u8[2]);
    _t.u8[3] = (c)->q[17].u8[3] & (~(c)->q[23].u8[3]);
    _t.u8[4] = (c)->q[17].u8[4] & (~(c)->q[23].u8[4]);
    _t.u8[5] = (c)->q[17].u8[5] & (~(c)->q[23].u8[5]);
    _t.u8[6] = (c)->q[17].u8[6] & (~(c)->q[23].u8[6]);
    _t.u8[7] = (c)->q[17].u8[7] & (~(c)->q[23].u8[7]);
    _t.u8[8] = (c)->q[17].u8[8] & (~(c)->q[23].u8[8]);
    _t.u8[9] = (c)->q[17].u8[9] & (~(c)->q[23].u8[9]);
    _t.u8[10] = (c)->q[17].u8[10] & (~(c)->q[23].u8[10]);
    _t.u8[11] = (c)->q[17].u8[11] & (~(c)->q[23].u8[11]);
    _t.u8[12] = (c)->q[17].u8[12] & (~(c)->q[23].u8[12]);
    _t.u8[13] = (c)->q[17].u8[13] & (~(c)->q[23].u8[13]);
    _t.u8[14] = (c)->q[17].u8[14] & (~(c)->q[23].u8[14]);
    _t.u8[15] = (c)->q[17].u8[15] & (~(c)->q[23].u8[15]);
    (c)->q[17] = _t; }
  /* c4ea8: ldp q23, q26, [x29, #-0xb0] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-176));
    arc_q_w(c, 23, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 26, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c4eac: bic v3.16b, v13.16b, v7.16b */
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
    (c)->q[3] = _t; }
  /* c4eb0: bic v7.16b, v15.16b, v22.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[15].u8[0] & (~(c)->q[22].u8[0]);
    _t.u8[1] = (c)->q[15].u8[1] & (~(c)->q[22].u8[1]);
    _t.u8[2] = (c)->q[15].u8[2] & (~(c)->q[22].u8[2]);
    _t.u8[3] = (c)->q[15].u8[3] & (~(c)->q[22].u8[3]);
    _t.u8[4] = (c)->q[15].u8[4] & (~(c)->q[22].u8[4]);
    _t.u8[5] = (c)->q[15].u8[5] & (~(c)->q[22].u8[5]);
    _t.u8[6] = (c)->q[15].u8[6] & (~(c)->q[22].u8[6]);
    _t.u8[7] = (c)->q[15].u8[7] & (~(c)->q[22].u8[7]);
    _t.u8[8] = (c)->q[15].u8[8] & (~(c)->q[22].u8[8]);
    _t.u8[9] = (c)->q[15].u8[9] & (~(c)->q[22].u8[9]);
    _t.u8[10] = (c)->q[15].u8[10] & (~(c)->q[22].u8[10]);
    _t.u8[11] = (c)->q[15].u8[11] & (~(c)->q[22].u8[11]);
    _t.u8[12] = (c)->q[15].u8[12] & (~(c)->q[22].u8[12]);
    _t.u8[13] = (c)->q[15].u8[13] & (~(c)->q[22].u8[13]);
    _t.u8[14] = (c)->q[15].u8[14] & (~(c)->q[22].u8[14]);
    _t.u8[15] = (c)->q[15].u8[15] & (~(c)->q[22].u8[15]);
    (c)->q[7] = _t; }
  /* c4eb4: ushll v22.2d, v19.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[19].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[19].u32[1]) << 0);
    (c)->q[22] = _t; }
  /* c4eb8: bic v18.16b, v18.16b, v2.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[18].u8[0] & (~(c)->q[2].u8[0]);
    _t.u8[1] = (c)->q[18].u8[1] & (~(c)->q[2].u8[1]);
    _t.u8[2] = (c)->q[18].u8[2] & (~(c)->q[2].u8[2]);
    _t.u8[3] = (c)->q[18].u8[3] & (~(c)->q[2].u8[3]);
    _t.u8[4] = (c)->q[18].u8[4] & (~(c)->q[2].u8[4]);
    _t.u8[5] = (c)->q[18].u8[5] & (~(c)->q[2].u8[5]);
    _t.u8[6] = (c)->q[18].u8[6] & (~(c)->q[2].u8[6]);
    _t.u8[7] = (c)->q[18].u8[7] & (~(c)->q[2].u8[7]);
    _t.u8[8] = (c)->q[18].u8[8] & (~(c)->q[2].u8[8]);
    _t.u8[9] = (c)->q[18].u8[9] & (~(c)->q[2].u8[9]);
    _t.u8[10] = (c)->q[18].u8[10] & (~(c)->q[2].u8[10]);
    _t.u8[11] = (c)->q[18].u8[11] & (~(c)->q[2].u8[11]);
    _t.u8[12] = (c)->q[18].u8[12] & (~(c)->q[2].u8[12]);
    _t.u8[13] = (c)->q[18].u8[13] & (~(c)->q[2].u8[13]);
    _t.u8[14] = (c)->q[18].u8[14] & (~(c)->q[2].u8[14]);
    _t.u8[15] = (c)->q[18].u8[15] & (~(c)->q[2].u8[15]);
    (c)->q[18] = _t; }
  /* c4ebc: ushll2 v2.2d, v19.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[19].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[19].u32[3]) << 0);
    (c)->q[2] = _t; }
  /* c4ec0: ushll v19.2d, v20.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[20].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[20].u32[1]) << 0);
    (c)->q[19] = _t; }
  /* c4ec4: bic v21.16b, v23.16b, v21.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[23].u8[0] & (~(c)->q[21].u8[0]);
    _t.u8[1] = (c)->q[23].u8[1] & (~(c)->q[21].u8[1]);
    _t.u8[2] = (c)->q[23].u8[2] & (~(c)->q[21].u8[2]);
    _t.u8[3] = (c)->q[23].u8[3] & (~(c)->q[21].u8[3]);
    _t.u8[4] = (c)->q[23].u8[4] & (~(c)->q[21].u8[4]);
    _t.u8[5] = (c)->q[23].u8[5] & (~(c)->q[21].u8[5]);
    _t.u8[6] = (c)->q[23].u8[6] & (~(c)->q[21].u8[6]);
    _t.u8[7] = (c)->q[23].u8[7] & (~(c)->q[21].u8[7]);
    _t.u8[8] = (c)->q[23].u8[8] & (~(c)->q[21].u8[8]);
    _t.u8[9] = (c)->q[23].u8[9] & (~(c)->q[21].u8[9]);
    _t.u8[10] = (c)->q[23].u8[10] & (~(c)->q[21].u8[10]);
    _t.u8[11] = (c)->q[23].u8[11] & (~(c)->q[21].u8[11]);
    _t.u8[12] = (c)->q[23].u8[12] & (~(c)->q[21].u8[12]);
    _t.u8[13] = (c)->q[23].u8[13] & (~(c)->q[21].u8[13]);
    _t.u8[14] = (c)->q[23].u8[14] & (~(c)->q[21].u8[14]);
    _t.u8[15] = (c)->q[23].u8[15] & (~(c)->q[21].u8[15]);
    (c)->q[21] = _t; }
  /* c4ec8: ldur q23, [x29, #-0xc0] */
  arc_q_w(c, 23, arc_ld64((ARC_X_R(c, 29) + INT64_C(-192))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-192)) + 8));
  /* c4ecc: orr v17.16b, v17.16b, v6.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[17].u8[0] | (c)->q[6].u8[0];
    _t.u8[1] = (c)->q[17].u8[1] | (c)->q[6].u8[1];
    _t.u8[2] = (c)->q[17].u8[2] | (c)->q[6].u8[2];
    _t.u8[3] = (c)->q[17].u8[3] | (c)->q[6].u8[3];
    _t.u8[4] = (c)->q[17].u8[4] | (c)->q[6].u8[4];
    _t.u8[5] = (c)->q[17].u8[5] | (c)->q[6].u8[5];
    _t.u8[6] = (c)->q[17].u8[6] | (c)->q[6].u8[6];
    _t.u8[7] = (c)->q[17].u8[7] | (c)->q[6].u8[7];
    _t.u8[8] = (c)->q[17].u8[8] | (c)->q[6].u8[8];
    _t.u8[9] = (c)->q[17].u8[9] | (c)->q[6].u8[9];
    _t.u8[10] = (c)->q[17].u8[10] | (c)->q[6].u8[10];
    _t.u8[11] = (c)->q[17].u8[11] | (c)->q[6].u8[11];
    _t.u8[12] = (c)->q[17].u8[12] | (c)->q[6].u8[12];
    _t.u8[13] = (c)->q[17].u8[13] | (c)->q[6].u8[13];
    _t.u8[14] = (c)->q[17].u8[14] | (c)->q[6].u8[14];
    _t.u8[15] = (c)->q[17].u8[15] | (c)->q[6].u8[15];
    (c)->q[17] = _t; }
  /* c4ed0: bic v22.16b, v26.16b, v22.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[26].u8[0] & (~(c)->q[22].u8[0]);
    _t.u8[1] = (c)->q[26].u8[1] & (~(c)->q[22].u8[1]);
    _t.u8[2] = (c)->q[26].u8[2] & (~(c)->q[22].u8[2]);
    _t.u8[3] = (c)->q[26].u8[3] & (~(c)->q[22].u8[3]);
    _t.u8[4] = (c)->q[26].u8[4] & (~(c)->q[22].u8[4]);
    _t.u8[5] = (c)->q[26].u8[5] & (~(c)->q[22].u8[5]);
    _t.u8[6] = (c)->q[26].u8[6] & (~(c)->q[22].u8[6]);
    _t.u8[7] = (c)->q[26].u8[7] & (~(c)->q[22].u8[7]);
    _t.u8[8] = (c)->q[26].u8[8] & (~(c)->q[22].u8[8]);
    _t.u8[9] = (c)->q[26].u8[9] & (~(c)->q[22].u8[9]);
    _t.u8[10] = (c)->q[26].u8[10] & (~(c)->q[22].u8[10]);
    _t.u8[11] = (c)->q[26].u8[11] & (~(c)->q[22].u8[11]);
    _t.u8[12] = (c)->q[26].u8[12] & (~(c)->q[22].u8[12]);
    _t.u8[13] = (c)->q[26].u8[13] & (~(c)->q[22].u8[13]);
    _t.u8[14] = (c)->q[26].u8[14] & (~(c)->q[22].u8[14]);
    _t.u8[15] = (c)->q[26].u8[15] & (~(c)->q[22].u8[15]);
    (c)->q[22] = _t; }
  /* c4ed4: ushll2 v20.2d, v20.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[20].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[20].u32[3]) << 0);
    (c)->q[20] = _t; }
  /* c4ed8: bic v23.16b, v23.16b, v2.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[23].u8[0] & (~(c)->q[2].u8[0]);
    _t.u8[1] = (c)->q[23].u8[1] & (~(c)->q[2].u8[1]);
    _t.u8[2] = (c)->q[23].u8[2] & (~(c)->q[2].u8[2]);
    _t.u8[3] = (c)->q[23].u8[3] & (~(c)->q[2].u8[3]);
    _t.u8[4] = (c)->q[23].u8[4] & (~(c)->q[2].u8[4]);
    _t.u8[5] = (c)->q[23].u8[5] & (~(c)->q[2].u8[5]);
    _t.u8[6] = (c)->q[23].u8[6] & (~(c)->q[2].u8[6]);
    _t.u8[7] = (c)->q[23].u8[7] & (~(c)->q[2].u8[7]);
    _t.u8[8] = (c)->q[23].u8[8] & (~(c)->q[2].u8[8]);
    _t.u8[9] = (c)->q[23].u8[9] & (~(c)->q[2].u8[9]);
    _t.u8[10] = (c)->q[23].u8[10] & (~(c)->q[2].u8[10]);
    _t.u8[11] = (c)->q[23].u8[11] & (~(c)->q[2].u8[11]);
    _t.u8[12] = (c)->q[23].u8[12] & (~(c)->q[2].u8[12]);
    _t.u8[13] = (c)->q[23].u8[13] & (~(c)->q[2].u8[13]);
    _t.u8[14] = (c)->q[23].u8[14] & (~(c)->q[2].u8[14]);
    _t.u8[15] = (c)->q[23].u8[15] & (~(c)->q[2].u8[15]);
    (c)->q[23] = _t; }
  /* c4edc: ldp q26, q2, [x29, #-0xe0] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-224));
    arc_q_w(c, 26, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 2, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c4ee0: orr v4.16b, v21.16b, v4.16b */
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
  /* c4ee4: orr v5.16b, v22.16b, v5.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[22].u8[0] | (c)->q[5].u8[0];
    _t.u8[1] = (c)->q[22].u8[1] | (c)->q[5].u8[1];
    _t.u8[2] = (c)->q[22].u8[2] | (c)->q[5].u8[2];
    _t.u8[3] = (c)->q[22].u8[3] | (c)->q[5].u8[3];
    _t.u8[4] = (c)->q[22].u8[4] | (c)->q[5].u8[4];
    _t.u8[5] = (c)->q[22].u8[5] | (c)->q[5].u8[5];
    _t.u8[6] = (c)->q[22].u8[6] | (c)->q[5].u8[6];
    _t.u8[7] = (c)->q[22].u8[7] | (c)->q[5].u8[7];
    _t.u8[8] = (c)->q[22].u8[8] | (c)->q[5].u8[8];
    _t.u8[9] = (c)->q[22].u8[9] | (c)->q[5].u8[9];
    _t.u8[10] = (c)->q[22].u8[10] | (c)->q[5].u8[10];
    _t.u8[11] = (c)->q[22].u8[11] | (c)->q[5].u8[11];
    _t.u8[12] = (c)->q[22].u8[12] | (c)->q[5].u8[12];
    _t.u8[13] = (c)->q[22].u8[13] | (c)->q[5].u8[13];
    _t.u8[14] = (c)->q[22].u8[14] | (c)->q[5].u8[14];
    _t.u8[15] = (c)->q[22].u8[15] | (c)->q[5].u8[15];
    (c)->q[5] = _t; }
  /* c4ee8: cmgt v22.8h, v0.8h, v28.8h */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = ((c)->q[0].i16[0] > (c)->q[28].i16[0]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[1] = ((c)->q[0].i16[1] > (c)->q[28].i16[1]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[2] = ((c)->q[0].i16[2] > (c)->q[28].i16[2]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[3] = ((c)->q[0].i16[3] > (c)->q[28].i16[3]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[4] = ((c)->q[0].i16[4] > (c)->q[28].i16[4]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[5] = ((c)->q[0].i16[5] > (c)->q[28].i16[5]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[6] = ((c)->q[0].i16[6] > (c)->q[28].i16[6]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[7] = ((c)->q[0].i16[7] > (c)->q[28].i16[7]) ? (uint16_t)~(uint16_t)0 : 0;
    (c)->q[22] = _t; }
  /* c4eec: bic v25.16b, v26.16b, v25.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[26].u8[0] & (~(c)->q[25].u8[0]);
    _t.u8[1] = (c)->q[26].u8[1] & (~(c)->q[25].u8[1]);
    _t.u8[2] = (c)->q[26].u8[2] & (~(c)->q[25].u8[2]);
    _t.u8[3] = (c)->q[26].u8[3] & (~(c)->q[25].u8[3]);
    _t.u8[4] = (c)->q[26].u8[4] & (~(c)->q[25].u8[4]);
    _t.u8[5] = (c)->q[26].u8[5] & (~(c)->q[25].u8[5]);
    _t.u8[6] = (c)->q[26].u8[6] & (~(c)->q[25].u8[6]);
    _t.u8[7] = (c)->q[26].u8[7] & (~(c)->q[25].u8[7]);
    _t.u8[8] = (c)->q[26].u8[8] & (~(c)->q[25].u8[8]);
    _t.u8[9] = (c)->q[26].u8[9] & (~(c)->q[25].u8[9]);
    _t.u8[10] = (c)->q[26].u8[10] & (~(c)->q[25].u8[10]);
    _t.u8[11] = (c)->q[26].u8[11] & (~(c)->q[25].u8[11]);
    _t.u8[12] = (c)->q[26].u8[12] & (~(c)->q[25].u8[12]);
    _t.u8[13] = (c)->q[26].u8[13] & (~(c)->q[25].u8[13]);
    _t.u8[14] = (c)->q[26].u8[14] & (~(c)->q[25].u8[14]);
    _t.u8[15] = (c)->q[26].u8[15] & (~(c)->q[25].u8[15]);
    (c)->q[25] = _t; }
  /* c4ef0: ldp q26, q29, [x29, #-0x100] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-256));
    arc_q_w(c, 26, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 29, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c4ef4: bic v2.16b, v2.16b, v19.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[2].u8[0] & (~(c)->q[19].u8[0]);
    _t.u8[1] = (c)->q[2].u8[1] & (~(c)->q[19].u8[1]);
    _t.u8[2] = (c)->q[2].u8[2] & (~(c)->q[19].u8[2]);
    _t.u8[3] = (c)->q[2].u8[3] & (~(c)->q[19].u8[3]);
    _t.u8[4] = (c)->q[2].u8[4] & (~(c)->q[19].u8[4]);
    _t.u8[5] = (c)->q[2].u8[5] & (~(c)->q[19].u8[5]);
    _t.u8[6] = (c)->q[2].u8[6] & (~(c)->q[19].u8[6]);
    _t.u8[7] = (c)->q[2].u8[7] & (~(c)->q[19].u8[7]);
    _t.u8[8] = (c)->q[2].u8[8] & (~(c)->q[19].u8[8]);
    _t.u8[9] = (c)->q[2].u8[9] & (~(c)->q[19].u8[9]);
    _t.u8[10] = (c)->q[2].u8[10] & (~(c)->q[19].u8[10]);
    _t.u8[11] = (c)->q[2].u8[11] & (~(c)->q[19].u8[11]);
    _t.u8[12] = (c)->q[2].u8[12] & (~(c)->q[19].u8[12]);
    _t.u8[13] = (c)->q[2].u8[13] & (~(c)->q[19].u8[13]);
    _t.u8[14] = (c)->q[2].u8[14] & (~(c)->q[19].u8[14]);
    _t.u8[15] = (c)->q[2].u8[15] & (~(c)->q[19].u8[15]);
    (c)->q[2] = _t; }
  /* c4ef8: orr v3.16b, v23.16b, v3.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[23].u8[0] | (c)->q[3].u8[0];
    _t.u8[1] = (c)->q[23].u8[1] | (c)->q[3].u8[1];
    _t.u8[2] = (c)->q[23].u8[2] | (c)->q[3].u8[2];
    _t.u8[3] = (c)->q[23].u8[3] | (c)->q[3].u8[3];
    _t.u8[4] = (c)->q[23].u8[4] | (c)->q[3].u8[4];
    _t.u8[5] = (c)->q[23].u8[5] | (c)->q[3].u8[5];
    _t.u8[6] = (c)->q[23].u8[6] | (c)->q[3].u8[6];
    _t.u8[7] = (c)->q[23].u8[7] | (c)->q[3].u8[7];
    _t.u8[8] = (c)->q[23].u8[8] | (c)->q[3].u8[8];
    _t.u8[9] = (c)->q[23].u8[9] | (c)->q[3].u8[9];
    _t.u8[10] = (c)->q[23].u8[10] | (c)->q[3].u8[10];
    _t.u8[11] = (c)->q[23].u8[11] | (c)->q[3].u8[11];
    _t.u8[12] = (c)->q[23].u8[12] | (c)->q[3].u8[12];
    _t.u8[13] = (c)->q[23].u8[13] | (c)->q[3].u8[13];
    _t.u8[14] = (c)->q[23].u8[14] | (c)->q[3].u8[14];
    _t.u8[15] = (c)->q[23].u8[15] | (c)->q[3].u8[15];
    (c)->q[3] = _t; }
  /* c4efc: sshll v23.4s, v22.4h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[22].i16[0]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[22].i16[1]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[22].i16[2]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[22].i16[3]) << 0);
    (c)->q[23] = _t; }
  /* c4f00: sshll2 v22.4s, v22.8h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[22].i16[4]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[22].i16[5]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[22].i16[6]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[22].i16[7]) << 0);
    (c)->q[22] = _t; }
  /* c4f04: bic v24.16b, v26.16b, v24.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[26].u8[0] & (~(c)->q[24].u8[0]);
    _t.u8[1] = (c)->q[26].u8[1] & (~(c)->q[24].u8[1]);
    _t.u8[2] = (c)->q[26].u8[2] & (~(c)->q[24].u8[2]);
    _t.u8[3] = (c)->q[26].u8[3] & (~(c)->q[24].u8[3]);
    _t.u8[4] = (c)->q[26].u8[4] & (~(c)->q[24].u8[4]);
    _t.u8[5] = (c)->q[26].u8[5] & (~(c)->q[24].u8[5]);
    _t.u8[6] = (c)->q[26].u8[6] & (~(c)->q[24].u8[6]);
    _t.u8[7] = (c)->q[26].u8[7] & (~(c)->q[24].u8[7]);
    _t.u8[8] = (c)->q[26].u8[8] & (~(c)->q[24].u8[8]);
    _t.u8[9] = (c)->q[26].u8[9] & (~(c)->q[24].u8[9]);
    _t.u8[10] = (c)->q[26].u8[10] & (~(c)->q[24].u8[10]);
    _t.u8[11] = (c)->q[26].u8[11] & (~(c)->q[24].u8[11]);
    _t.u8[12] = (c)->q[26].u8[12] & (~(c)->q[24].u8[12]);
    _t.u8[13] = (c)->q[26].u8[13] & (~(c)->q[24].u8[13]);
    _t.u8[14] = (c)->q[26].u8[14] & (~(c)->q[24].u8[14]);
    _t.u8[15] = (c)->q[26].u8[15] & (~(c)->q[24].u8[15]);
    (c)->q[24] = _t; }
  /* c4f08: ldp q19, q26, [x11, #0x40] */
  { const uint64_t _pa = (ARC_X_R(c, 11) + INT64_C(64));
    arc_q_w(c, 19, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 26, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c4f0c: bic v20.16b, v29.16b, v20.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[29].u8[0] & (~(c)->q[20].u8[0]);
    _t.u8[1] = (c)->q[29].u8[1] & (~(c)->q[20].u8[1]);
    _t.u8[2] = (c)->q[29].u8[2] & (~(c)->q[20].u8[2]);
    _t.u8[3] = (c)->q[29].u8[3] & (~(c)->q[20].u8[3]);
    _t.u8[4] = (c)->q[29].u8[4] & (~(c)->q[20].u8[4]);
    _t.u8[5] = (c)->q[29].u8[5] & (~(c)->q[20].u8[5]);
    _t.u8[6] = (c)->q[29].u8[6] & (~(c)->q[20].u8[6]);
    _t.u8[7] = (c)->q[29].u8[7] & (~(c)->q[20].u8[7]);
    _t.u8[8] = (c)->q[29].u8[8] & (~(c)->q[20].u8[8]);
    _t.u8[9] = (c)->q[29].u8[9] & (~(c)->q[20].u8[9]);
    _t.u8[10] = (c)->q[29].u8[10] & (~(c)->q[20].u8[10]);
    _t.u8[11] = (c)->q[29].u8[11] & (~(c)->q[20].u8[11]);
    _t.u8[12] = (c)->q[29].u8[12] & (~(c)->q[20].u8[12]);
    _t.u8[13] = (c)->q[29].u8[13] & (~(c)->q[20].u8[13]);
    _t.u8[14] = (c)->q[29].u8[14] & (~(c)->q[20].u8[14]);
    _t.u8[15] = (c)->q[29].u8[15] & (~(c)->q[20].u8[15]);
    (c)->q[20] = _t; }
  /* c4f10: orr v7.16b, v25.16b, v7.16b */
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
  /* c4f14: cmgt v25.8h, v0.8h, v27.8h */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = ((c)->q[0].i16[0] > (c)->q[27].i16[0]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[1] = ((c)->q[0].i16[1] > (c)->q[27].i16[1]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[2] = ((c)->q[0].i16[2] > (c)->q[27].i16[2]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[3] = ((c)->q[0].i16[3] > (c)->q[27].i16[3]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[4] = ((c)->q[0].i16[4] > (c)->q[27].i16[4]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[5] = ((c)->q[0].i16[5] > (c)->q[27].i16[5]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[6] = ((c)->q[0].i16[6] > (c)->q[27].i16[6]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[7] = ((c)->q[0].i16[7] > (c)->q[27].i16[7]) ? (uint16_t)~(uint16_t)0 : 0;
    (c)->q[25] = _t; }
  /* c4f18: sshll v29.2d, v23.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[23].i32[0]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[23].i32[1]) << 0);
    (c)->q[29] = _t; }
  /* c4f1c: sshll2 v23.2d, v23.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[23].i32[2]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[23].i32[3]) << 0);
    (c)->q[23] = _t; }
  /* c4f20: sshll2 v31.2d, v22.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[22].i32[2]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[22].i32[3]) << 0);
    (c)->q[31] = _t; }
  /* c4f24: cmgt v19.8h, v0.8h, v19.8h */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = ((c)->q[0].i16[0] > (c)->q[19].i16[0]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[1] = ((c)->q[0].i16[1] > (c)->q[19].i16[1]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[2] = ((c)->q[0].i16[2] > (c)->q[19].i16[2]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[3] = ((c)->q[0].i16[3] > (c)->q[19].i16[3]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[4] = ((c)->q[0].i16[4] > (c)->q[19].i16[4]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[5] = ((c)->q[0].i16[5] > (c)->q[19].i16[5]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[6] = ((c)->q[0].i16[6] > (c)->q[19].i16[6]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[7] = ((c)->q[0].i16[7] > (c)->q[19].i16[7]) ? (uint16_t)~(uint16_t)0 : 0;
    (c)->q[19] = _t; }
  /* c4f28: orr v6.16b, v24.16b, v18.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[24].u8[0] | (c)->q[18].u8[0];
    _t.u8[1] = (c)->q[24].u8[1] | (c)->q[18].u8[1];
    _t.u8[2] = (c)->q[24].u8[2] | (c)->q[18].u8[2];
    _t.u8[3] = (c)->q[24].u8[3] | (c)->q[18].u8[3];
    _t.u8[4] = (c)->q[24].u8[4] | (c)->q[18].u8[4];
    _t.u8[5] = (c)->q[24].u8[5] | (c)->q[18].u8[5];
    _t.u8[6] = (c)->q[24].u8[6] | (c)->q[18].u8[6];
    _t.u8[7] = (c)->q[24].u8[7] | (c)->q[18].u8[7];
    _t.u8[8] = (c)->q[24].u8[8] | (c)->q[18].u8[8];
    _t.u8[9] = (c)->q[24].u8[9] | (c)->q[18].u8[9];
    _t.u8[10] = (c)->q[24].u8[10] | (c)->q[18].u8[10];
    _t.u8[11] = (c)->q[24].u8[11] | (c)->q[18].u8[11];
    _t.u8[12] = (c)->q[24].u8[12] | (c)->q[18].u8[12];
    _t.u8[13] = (c)->q[24].u8[13] | (c)->q[18].u8[13];
    _t.u8[14] = (c)->q[24].u8[14] | (c)->q[18].u8[14];
    _t.u8[15] = (c)->q[24].u8[15] | (c)->q[18].u8[15];
    (c)->q[6] = _t; }
  /* c4f2c: cmgt v21.8h, v0.8h, v26.8h */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = ((c)->q[0].i16[0] > (c)->q[26].i16[0]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[1] = ((c)->q[0].i16[1] > (c)->q[26].i16[1]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[2] = ((c)->q[0].i16[2] > (c)->q[26].i16[2]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[3] = ((c)->q[0].i16[3] > (c)->q[26].i16[3]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[4] = ((c)->q[0].i16[4] > (c)->q[26].i16[4]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[5] = ((c)->q[0].i16[5] > (c)->q[26].i16[5]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[6] = ((c)->q[0].i16[6] > (c)->q[26].i16[6]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[7] = ((c)->q[0].i16[7] > (c)->q[26].i16[7]) ? (uint16_t)~(uint16_t)0 : 0;
    (c)->q[21] = _t; }
  /* c4f30: orr v16.16b, v20.16b, v16.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[20].u8[0] | (c)->q[16].u8[0];
    _t.u8[1] = (c)->q[20].u8[1] | (c)->q[16].u8[1];
    _t.u8[2] = (c)->q[20].u8[2] | (c)->q[16].u8[2];
    _t.u8[3] = (c)->q[20].u8[3] | (c)->q[16].u8[3];
    _t.u8[4] = (c)->q[20].u8[4] | (c)->q[16].u8[4];
    _t.u8[5] = (c)->q[20].u8[5] | (c)->q[16].u8[5];
    _t.u8[6] = (c)->q[20].u8[6] | (c)->q[16].u8[6];
    _t.u8[7] = (c)->q[20].u8[7] | (c)->q[16].u8[7];
    _t.u8[8] = (c)->q[20].u8[8] | (c)->q[16].u8[8];
    _t.u8[9] = (c)->q[20].u8[9] | (c)->q[16].u8[9];
    _t.u8[10] = (c)->q[20].u8[10] | (c)->q[16].u8[10];
    _t.u8[11] = (c)->q[20].u8[11] | (c)->q[16].u8[11];
    _t.u8[12] = (c)->q[20].u8[12] | (c)->q[16].u8[12];
    _t.u8[13] = (c)->q[20].u8[13] | (c)->q[16].u8[13];
    _t.u8[14] = (c)->q[20].u8[14] | (c)->q[16].u8[14];
    _t.u8[15] = (c)->q[20].u8[15] | (c)->q[16].u8[15];
    (c)->q[16] = _t; }
  /* c4f34: sshll v30.4s, v25.4h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[25].i16[0]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[25].i16[1]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[25].i16[2]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[25].i16[3]) << 0);
    (c)->q[30] = _t; }
  /* c4f38: sshll2 v25.4s, v25.8h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[25].i16[4]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[25].i16[5]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[25].i16[6]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[25].i16[7]) << 0);
    (c)->q[25] = _t; }
  /* c4f3c: bic v29.16b, v8.16b, v29.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[8].u8[0] & (~(c)->q[29].u8[0]);
    _t.u8[1] = (c)->q[8].u8[1] & (~(c)->q[29].u8[1]);
    _t.u8[2] = (c)->q[8].u8[2] & (~(c)->q[29].u8[2]);
    _t.u8[3] = (c)->q[8].u8[3] & (~(c)->q[29].u8[3]);
    _t.u8[4] = (c)->q[8].u8[4] & (~(c)->q[29].u8[4]);
    _t.u8[5] = (c)->q[8].u8[5] & (~(c)->q[29].u8[5]);
    _t.u8[6] = (c)->q[8].u8[6] & (~(c)->q[29].u8[6]);
    _t.u8[7] = (c)->q[8].u8[7] & (~(c)->q[29].u8[7]);
    _t.u8[8] = (c)->q[8].u8[8] & (~(c)->q[29].u8[8]);
    _t.u8[9] = (c)->q[8].u8[9] & (~(c)->q[29].u8[9]);
    _t.u8[10] = (c)->q[8].u8[10] & (~(c)->q[29].u8[10]);
    _t.u8[11] = (c)->q[8].u8[11] & (~(c)->q[29].u8[11]);
    _t.u8[12] = (c)->q[8].u8[12] & (~(c)->q[29].u8[12]);
    _t.u8[13] = (c)->q[8].u8[13] & (~(c)->q[29].u8[13]);
    _t.u8[14] = (c)->q[8].u8[14] & (~(c)->q[29].u8[14]);
    _t.u8[15] = (c)->q[8].u8[15] & (~(c)->q[29].u8[15]);
    (c)->q[29] = _t; }
  /* c4f40: ldr q8, [x21, #0xb20] */
  arc_q_w(c, 8, arc_ld64((ARC_X_R(c, 21) + INT64_C(2848))), arc_ld64((ARC_X_R(c, 21) + INT64_C(2848)) + 8));
  /* c4f44: bic v31.16b, v9.16b, v31.16b */
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
  /* c4f48: sshll2 v18.4s, v19.8h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[19].i16[4]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[19].i16[5]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[19].i16[6]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[19].i16[7]) << 0);
    (c)->q[18] = _t; }
  /* c4f4c: sshll v19.4s, v19.4h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[19].i16[0]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[19].i16[1]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[19].i16[2]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[19].i16[3]) << 0);
    (c)->q[19] = _t; }
  /* c4f50: sshll2 v20.4s, v21.8h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[21].i16[4]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[21].i16[5]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[21].i16[6]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[21].i16[7]) << 0);
    (c)->q[20] = _t; }
  /* c4f54: bic v23.16b, v8.16b, v23.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[8].u8[0] & (~(c)->q[23].u8[0]);
    _t.u8[1] = (c)->q[8].u8[1] & (~(c)->q[23].u8[1]);
    _t.u8[2] = (c)->q[8].u8[2] & (~(c)->q[23].u8[2]);
    _t.u8[3] = (c)->q[8].u8[3] & (~(c)->q[23].u8[3]);
    _t.u8[4] = (c)->q[8].u8[4] & (~(c)->q[23].u8[4]);
    _t.u8[5] = (c)->q[8].u8[5] & (~(c)->q[23].u8[5]);
    _t.u8[6] = (c)->q[8].u8[6] & (~(c)->q[23].u8[6]);
    _t.u8[7] = (c)->q[8].u8[7] & (~(c)->q[23].u8[7]);
    _t.u8[8] = (c)->q[8].u8[8] & (~(c)->q[23].u8[8]);
    _t.u8[9] = (c)->q[8].u8[9] & (~(c)->q[23].u8[9]);
    _t.u8[10] = (c)->q[8].u8[10] & (~(c)->q[23].u8[10]);
    _t.u8[11] = (c)->q[8].u8[11] & (~(c)->q[23].u8[11]);
    _t.u8[12] = (c)->q[8].u8[12] & (~(c)->q[23].u8[12]);
    _t.u8[13] = (c)->q[8].u8[13] & (~(c)->q[23].u8[13]);
    _t.u8[14] = (c)->q[8].u8[14] & (~(c)->q[23].u8[14]);
    _t.u8[15] = (c)->q[8].u8[15] & (~(c)->q[23].u8[15]);
    (c)->q[23] = _t; }
  /* c4f58: sshll2 v8.2d, v25.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[25].i32[2]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[25].i32[3]) << 0);
    (c)->q[8] = _t; }
  /* c4f5c: sshll2 v9.2d, v30.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[30].i32[2]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[30].i32[3]) << 0);
    (c)->q[9] = _t; }
  /* c4f60: sshll v25.2d, v25.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[25].i32[0]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[25].i32[1]) << 0);
    (c)->q[25] = _t; }
  /* c4f64: sshll v30.2d, v30.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[30].i32[0]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[30].i32[1]) << 0);
    (c)->q[30] = _t; }
  /* c4f68: sshll v21.4s, v21.4h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[21].i16[0]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[21].i16[1]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[21].i16[2]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[21].i16[3]) << 0);
    (c)->q[21] = _t; }
  /* c4f6c: sshll v26.2d, v19.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[19].i32[0]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[19].i32[1]) << 0);
    (c)->q[26] = _t; }
  /* c4f70: sshll2 v19.2d, v19.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[19].i32[2]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[19].i32[3]) << 0);
    (c)->q[19] = _t; }
  /* c4f74: sshll v24.2d, v18.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[18].i32[0]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[18].i32[1]) << 0);
    (c)->q[24] = _t; }
  /* c4f78: sshll2 v18.2d, v18.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[18].i32[2]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[18].i32[3]) << 0);
    (c)->q[18] = _t; }
  /* c4f7c: sshll v27.2d, v20.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[20].i32[0]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[20].i32[1]) << 0);
    (c)->q[27] = _t; }
  /* c4f80: sshll v22.2d, v22.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[22].i32[0]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[22].i32[1]) << 0);
    (c)->q[22] = _t; }
  /* c4f84: sshll v28.2d, v21.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[21].i32[0]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[21].i32[1]) << 0);
    (c)->q[28] = _t; }
  /* c4f88: sshll2 v21.2d, v21.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[21].i32[2]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[21].i32[3]) << 0);
    (c)->q[21] = _t; }
  /* c4f8c: sshll2 v20.2d, v20.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[20].i32[2]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[20].i32[3]) << 0);
    (c)->q[20] = _t; }
  /* c4f90: bic v19.16b, v10.16b, v19.16b */
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
  /* c4f94: ldr q10, [sp, #0x110] */
  arc_q_w(c, 10, arc_ld64(((c)->sp + INT64_C(272))), arc_ld64(((c)->sp + INT64_C(272)) + 8));
  /* c4f98: orr v1.16b, v2.16b, v1.16b */
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
  /* c4f9c: bic v18.16b, v10.16b, v18.16b */
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
  /* c4fa0: ldr q10, [sp, #0x100] */
  arc_q_w(c, 10, arc_ld64(((c)->sp + INT64_C(256))), arc_ld64(((c)->sp + INT64_C(256)) + 8));
  /* c4fa4: bic v26.16b, v10.16b, v26.16b */
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
  /* c4fa8: ldr q10, [sp, #0xf0] */
  arc_q_w(c, 10, arc_ld64(((c)->sp + INT64_C(240))), arc_ld64(((c)->sp + INT64_C(240)) + 8));
  /* c4fac: bic v24.16b, v10.16b, v24.16b */
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
  /* c4fb0: ldr q10, [sp, #0xb0] */
  arc_q_w(c, 10, arc_ld64(((c)->sp + INT64_C(176))), arc_ld64(((c)->sp + INT64_C(176)) + 8));
  /* c4fb4: bic v27.16b, v10.16b, v27.16b */
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
  /* c4fb8: ldr q10, [sp, #0x80] */
  arc_q_w(c, 10, arc_ld64(((c)->sp + INT64_C(128))), arc_ld64(((c)->sp + INT64_C(128)) + 8));
  /* c4fbc: bic v8.16b, v10.16b, v8.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[10].u8[0] & (~(c)->q[8].u8[0]);
    _t.u8[1] = (c)->q[10].u8[1] & (~(c)->q[8].u8[1]);
    _t.u8[2] = (c)->q[10].u8[2] & (~(c)->q[8].u8[2]);
    _t.u8[3] = (c)->q[10].u8[3] & (~(c)->q[8].u8[3]);
    _t.u8[4] = (c)->q[10].u8[4] & (~(c)->q[8].u8[4]);
    _t.u8[5] = (c)->q[10].u8[5] & (~(c)->q[8].u8[5]);
    _t.u8[6] = (c)->q[10].u8[6] & (~(c)->q[8].u8[6]);
    _t.u8[7] = (c)->q[10].u8[7] & (~(c)->q[8].u8[7]);
    _t.u8[8] = (c)->q[10].u8[8] & (~(c)->q[8].u8[8]);
    _t.u8[9] = (c)->q[10].u8[9] & (~(c)->q[8].u8[9]);
    _t.u8[10] = (c)->q[10].u8[10] & (~(c)->q[8].u8[10]);
    _t.u8[11] = (c)->q[10].u8[11] & (~(c)->q[8].u8[11]);
    _t.u8[12] = (c)->q[10].u8[12] & (~(c)->q[8].u8[12]);
    _t.u8[13] = (c)->q[10].u8[13] & (~(c)->q[8].u8[13]);
    _t.u8[14] = (c)->q[10].u8[14] & (~(c)->q[8].u8[14]);
    _t.u8[15] = (c)->q[10].u8[15] & (~(c)->q[8].u8[15]);
    (c)->q[8] = _t; }
  /* c4fc0: ldr q10, [sp, #0x70] */
  arc_q_w(c, 10, arc_ld64(((c)->sp + INT64_C(112))), arc_ld64(((c)->sp + INT64_C(112)) + 8));
  /* c4fc4: bic v9.16b, v10.16b, v9.16b */
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
  /* c4fc8: ldr q10, [sp, #0xa0] */
  arc_q_w(c, 10, arc_ld64(((c)->sp + INT64_C(160))), arc_ld64(((c)->sp + INT64_C(160)) + 8));
  /* c4fcc: orr v18.16b, v8.16b, v18.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[8].u8[0] | (c)->q[18].u8[0];
    _t.u8[1] = (c)->q[8].u8[1] | (c)->q[18].u8[1];
    _t.u8[2] = (c)->q[8].u8[2] | (c)->q[18].u8[2];
    _t.u8[3] = (c)->q[8].u8[3] | (c)->q[18].u8[3];
    _t.u8[4] = (c)->q[8].u8[4] | (c)->q[18].u8[4];
    _t.u8[5] = (c)->q[8].u8[5] | (c)->q[18].u8[5];
    _t.u8[6] = (c)->q[8].u8[6] | (c)->q[18].u8[6];
    _t.u8[7] = (c)->q[8].u8[7] | (c)->q[18].u8[7];
    _t.u8[8] = (c)->q[8].u8[8] | (c)->q[18].u8[8];
    _t.u8[9] = (c)->q[8].u8[9] | (c)->q[18].u8[9];
    _t.u8[10] = (c)->q[8].u8[10] | (c)->q[18].u8[10];
    _t.u8[11] = (c)->q[8].u8[11] | (c)->q[18].u8[11];
    _t.u8[12] = (c)->q[8].u8[12] | (c)->q[18].u8[12];
    _t.u8[13] = (c)->q[8].u8[13] | (c)->q[18].u8[13];
    _t.u8[14] = (c)->q[8].u8[14] | (c)->q[18].u8[14];
    _t.u8[15] = (c)->q[8].u8[15] | (c)->q[18].u8[15];
    (c)->q[18] = _t; }
  /* c4fd0: bic v25.16b, v10.16b, v25.16b */
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
  /* c4fd4: ldr q10, [sp, #0x90] */
  arc_q_w(c, 10, arc_ld64(((c)->sp + INT64_C(144))), arc_ld64(((c)->sp + INT64_C(144)) + 8));
  /* c4fd8: orr v2.16b, v9.16b, v19.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[9].u8[0] | (c)->q[19].u8[0];
    _t.u8[1] = (c)->q[9].u8[1] | (c)->q[19].u8[1];
    _t.u8[2] = (c)->q[9].u8[2] | (c)->q[19].u8[2];
    _t.u8[3] = (c)->q[9].u8[3] | (c)->q[19].u8[3];
    _t.u8[4] = (c)->q[9].u8[4] | (c)->q[19].u8[4];
    _t.u8[5] = (c)->q[9].u8[5] | (c)->q[19].u8[5];
    _t.u8[6] = (c)->q[9].u8[6] | (c)->q[19].u8[6];
    _t.u8[7] = (c)->q[9].u8[7] | (c)->q[19].u8[7];
    _t.u8[8] = (c)->q[9].u8[8] | (c)->q[19].u8[8];
    _t.u8[9] = (c)->q[9].u8[9] | (c)->q[19].u8[9];
    _t.u8[10] = (c)->q[9].u8[10] | (c)->q[19].u8[10];
    _t.u8[11] = (c)->q[9].u8[11] | (c)->q[19].u8[11];
    _t.u8[12] = (c)->q[9].u8[12] | (c)->q[19].u8[12];
    _t.u8[13] = (c)->q[9].u8[13] | (c)->q[19].u8[13];
    _t.u8[14] = (c)->q[9].u8[14] | (c)->q[19].u8[14];
    _t.u8[15] = (c)->q[9].u8[15] | (c)->q[19].u8[15];
    (c)->q[2] = _t; }
  /* c4fdc: bic v30.16b, v10.16b, v30.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[10].u8[0] & (~(c)->q[30].u8[0]);
    _t.u8[1] = (c)->q[10].u8[1] & (~(c)->q[30].u8[1]);
    _t.u8[2] = (c)->q[10].u8[2] & (~(c)->q[30].u8[2]);
    _t.u8[3] = (c)->q[10].u8[3] & (~(c)->q[30].u8[3]);
    _t.u8[4] = (c)->q[10].u8[4] & (~(c)->q[30].u8[4]);
    _t.u8[5] = (c)->q[10].u8[5] & (~(c)->q[30].u8[5]);
    _t.u8[6] = (c)->q[10].u8[6] & (~(c)->q[30].u8[6]);
    _t.u8[7] = (c)->q[10].u8[7] & (~(c)->q[30].u8[7]);
    _t.u8[8] = (c)->q[10].u8[8] & (~(c)->q[30].u8[8]);
    _t.u8[9] = (c)->q[10].u8[9] & (~(c)->q[30].u8[9]);
    _t.u8[10] = (c)->q[10].u8[10] & (~(c)->q[30].u8[10]);
    _t.u8[11] = (c)->q[10].u8[11] & (~(c)->q[30].u8[11]);
    _t.u8[12] = (c)->q[10].u8[12] & (~(c)->q[30].u8[12]);
    _t.u8[13] = (c)->q[10].u8[13] & (~(c)->q[30].u8[13]);
    _t.u8[14] = (c)->q[10].u8[14] & (~(c)->q[30].u8[14]);
    _t.u8[15] = (c)->q[10].u8[15] & (~(c)->q[30].u8[15]);
    (c)->q[30] = _t; }
  /* c4fe0: ldr q10, [sp, #0x60] */
  arc_q_w(c, 10, arc_ld64(((c)->sp + INT64_C(96))), arc_ld64(((c)->sp + INT64_C(96)) + 8));
  /* c4fe4: orr v24.16b, v25.16b, v24.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[25].u8[0] | (c)->q[24].u8[0];
    _t.u8[1] = (c)->q[25].u8[1] | (c)->q[24].u8[1];
    _t.u8[2] = (c)->q[25].u8[2] | (c)->q[24].u8[2];
    _t.u8[3] = (c)->q[25].u8[3] | (c)->q[24].u8[3];
    _t.u8[4] = (c)->q[25].u8[4] | (c)->q[24].u8[4];
    _t.u8[5] = (c)->q[25].u8[5] | (c)->q[24].u8[5];
    _t.u8[6] = (c)->q[25].u8[6] | (c)->q[24].u8[6];
    _t.u8[7] = (c)->q[25].u8[7] | (c)->q[24].u8[7];
    _t.u8[8] = (c)->q[25].u8[8] | (c)->q[24].u8[8];
    _t.u8[9] = (c)->q[25].u8[9] | (c)->q[24].u8[9];
    _t.u8[10] = (c)->q[25].u8[10] | (c)->q[24].u8[10];
    _t.u8[11] = (c)->q[25].u8[11] | (c)->q[24].u8[11];
    _t.u8[12] = (c)->q[25].u8[12] | (c)->q[24].u8[12];
    _t.u8[13] = (c)->q[25].u8[13] | (c)->q[24].u8[13];
    _t.u8[14] = (c)->q[25].u8[14] | (c)->q[24].u8[14];
    _t.u8[15] = (c)->q[25].u8[15] | (c)->q[24].u8[15];
    (c)->q[24] = _t; }
  /* c4fe8: bic v22.16b, v10.16b, v22.16b */
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
  /* c4fec: ldr q10, [sp, #0xe0] */
  arc_q_w(c, 10, arc_ld64(((c)->sp + INT64_C(224))), arc_ld64(((c)->sp + INT64_C(224)) + 8));
  /* c4ff0: orr v2.16b, v2.16b, v3.16b */
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
  /* c4ff4: orr v19.16b, v30.16b, v26.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[30].u8[0] | (c)->q[26].u8[0];
    _t.u8[1] = (c)->q[30].u8[1] | (c)->q[26].u8[1];
    _t.u8[2] = (c)->q[30].u8[2] | (c)->q[26].u8[2];
    _t.u8[3] = (c)->q[30].u8[3] | (c)->q[26].u8[3];
    _t.u8[4] = (c)->q[30].u8[4] | (c)->q[26].u8[4];
    _t.u8[5] = (c)->q[30].u8[5] | (c)->q[26].u8[5];
    _t.u8[6] = (c)->q[30].u8[6] | (c)->q[26].u8[6];
    _t.u8[7] = (c)->q[30].u8[7] | (c)->q[26].u8[7];
    _t.u8[8] = (c)->q[30].u8[8] | (c)->q[26].u8[8];
    _t.u8[9] = (c)->q[30].u8[9] | (c)->q[26].u8[9];
    _t.u8[10] = (c)->q[30].u8[10] | (c)->q[26].u8[10];
    _t.u8[11] = (c)->q[30].u8[11] | (c)->q[26].u8[11];
    _t.u8[12] = (c)->q[30].u8[12] | (c)->q[26].u8[12];
    _t.u8[13] = (c)->q[30].u8[13] | (c)->q[26].u8[13];
    _t.u8[14] = (c)->q[30].u8[14] | (c)->q[26].u8[14];
    _t.u8[15] = (c)->q[30].u8[15] | (c)->q[26].u8[15];
    (c)->q[19] = _t; }
  /* c4ff8: orr v3.16b, v18.16b, v4.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[18].u8[0] | (c)->q[4].u8[0];
    _t.u8[1] = (c)->q[18].u8[1] | (c)->q[4].u8[1];
    _t.u8[2] = (c)->q[18].u8[2] | (c)->q[4].u8[2];
    _t.u8[3] = (c)->q[18].u8[3] | (c)->q[4].u8[3];
    _t.u8[4] = (c)->q[18].u8[4] | (c)->q[4].u8[4];
    _t.u8[5] = (c)->q[18].u8[5] | (c)->q[4].u8[5];
    _t.u8[6] = (c)->q[18].u8[6] | (c)->q[4].u8[6];
    _t.u8[7] = (c)->q[18].u8[7] | (c)->q[4].u8[7];
    _t.u8[8] = (c)->q[18].u8[8] | (c)->q[4].u8[8];
    _t.u8[9] = (c)->q[18].u8[9] | (c)->q[4].u8[9];
    _t.u8[10] = (c)->q[18].u8[10] | (c)->q[4].u8[10];
    _t.u8[11] = (c)->q[18].u8[11] | (c)->q[4].u8[11];
    _t.u8[12] = (c)->q[18].u8[12] | (c)->q[4].u8[12];
    _t.u8[13] = (c)->q[18].u8[13] | (c)->q[4].u8[13];
    _t.u8[14] = (c)->q[18].u8[14] | (c)->q[4].u8[14];
    _t.u8[15] = (c)->q[18].u8[15] | (c)->q[4].u8[15];
    (c)->q[3] = _t; }
  /* c4ffc: bic v21.16b, v10.16b, v21.16b */
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
  /* c5000: ldr q10, [sp, #0xd0] */
  arc_q_w(c, 10, arc_ld64(((c)->sp + INT64_C(208))), arc_ld64(((c)->sp + INT64_C(208)) + 8));
  /* c5004: orr v22.16b, v22.16b, v27.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[22].u8[0] | (c)->q[27].u8[0];
    _t.u8[1] = (c)->q[22].u8[1] | (c)->q[27].u8[1];
    _t.u8[2] = (c)->q[22].u8[2] | (c)->q[27].u8[2];
    _t.u8[3] = (c)->q[22].u8[3] | (c)->q[27].u8[3];
    _t.u8[4] = (c)->q[22].u8[4] | (c)->q[27].u8[4];
    _t.u8[5] = (c)->q[22].u8[5] | (c)->q[27].u8[5];
    _t.u8[6] = (c)->q[22].u8[6] | (c)->q[27].u8[6];
    _t.u8[7] = (c)->q[22].u8[7] | (c)->q[27].u8[7];
    _t.u8[8] = (c)->q[22].u8[8] | (c)->q[27].u8[8];
    _t.u8[9] = (c)->q[22].u8[9] | (c)->q[27].u8[9];
    _t.u8[10] = (c)->q[22].u8[10] | (c)->q[27].u8[10];
    _t.u8[11] = (c)->q[22].u8[11] | (c)->q[27].u8[11];
    _t.u8[12] = (c)->q[22].u8[12] | (c)->q[27].u8[12];
    _t.u8[13] = (c)->q[22].u8[13] | (c)->q[27].u8[13];
    _t.u8[14] = (c)->q[22].u8[14] | (c)->q[27].u8[14];
    _t.u8[15] = (c)->q[22].u8[15] | (c)->q[27].u8[15];
    (c)->q[22] = _t; }
  /* c5008: bic v20.16b, v10.16b, v20.16b */
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
  /* c500c: ldr q10, [sp, #0xc0] */
  arc_q_w(c, 10, arc_ld64(((c)->sp + INT64_C(192))), arc_ld64(((c)->sp + INT64_C(192)) + 8));
  /* c5010: orr v4.16b, v19.16b, v5.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[19].u8[0] | (c)->q[5].u8[0];
    _t.u8[1] = (c)->q[19].u8[1] | (c)->q[5].u8[1];
    _t.u8[2] = (c)->q[19].u8[2] | (c)->q[5].u8[2];
    _t.u8[3] = (c)->q[19].u8[3] | (c)->q[5].u8[3];
    _t.u8[4] = (c)->q[19].u8[4] | (c)->q[5].u8[4];
    _t.u8[5] = (c)->q[19].u8[5] | (c)->q[5].u8[5];
    _t.u8[6] = (c)->q[19].u8[6] | (c)->q[5].u8[6];
    _t.u8[7] = (c)->q[19].u8[7] | (c)->q[5].u8[7];
    _t.u8[8] = (c)->q[19].u8[8] | (c)->q[5].u8[8];
    _t.u8[9] = (c)->q[19].u8[9] | (c)->q[5].u8[9];
    _t.u8[10] = (c)->q[19].u8[10] | (c)->q[5].u8[10];
    _t.u8[11] = (c)->q[19].u8[11] | (c)->q[5].u8[11];
    _t.u8[12] = (c)->q[19].u8[12] | (c)->q[5].u8[12];
    _t.u8[13] = (c)->q[19].u8[13] | (c)->q[5].u8[13];
    _t.u8[14] = (c)->q[19].u8[14] | (c)->q[5].u8[14];
    _t.u8[15] = (c)->q[19].u8[15] | (c)->q[5].u8[15];
    (c)->q[4] = _t; }
  /* c5014: orr v21.16b, v23.16b, v21.16b */
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
  /* c5018: orr v5.16b, v24.16b, v17.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[24].u8[0] | (c)->q[17].u8[0];
    _t.u8[1] = (c)->q[24].u8[1] | (c)->q[17].u8[1];
    _t.u8[2] = (c)->q[24].u8[2] | (c)->q[17].u8[2];
    _t.u8[3] = (c)->q[24].u8[3] | (c)->q[17].u8[3];
    _t.u8[4] = (c)->q[24].u8[4] | (c)->q[17].u8[4];
    _t.u8[5] = (c)->q[24].u8[5] | (c)->q[17].u8[5];
    _t.u8[6] = (c)->q[24].u8[6] | (c)->q[17].u8[6];
    _t.u8[7] = (c)->q[24].u8[7] | (c)->q[17].u8[7];
    _t.u8[8] = (c)->q[24].u8[8] | (c)->q[17].u8[8];
    _t.u8[9] = (c)->q[24].u8[9] | (c)->q[17].u8[9];
    _t.u8[10] = (c)->q[24].u8[10] | (c)->q[17].u8[10];
    _t.u8[11] = (c)->q[24].u8[11] | (c)->q[17].u8[11];
    _t.u8[12] = (c)->q[24].u8[12] | (c)->q[17].u8[12];
    _t.u8[13] = (c)->q[24].u8[13] | (c)->q[17].u8[13];
    _t.u8[14] = (c)->q[24].u8[14] | (c)->q[17].u8[14];
    _t.u8[15] = (c)->q[24].u8[15] | (c)->q[17].u8[15];
    (c)->q[5] = _t; }
  /* c501c: bic v28.16b, v10.16b, v28.16b */
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
  /* c5020: orr v1.16b, v22.16b, v1.16b */
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
  /* c5024: orr v20.16b, v31.16b, v20.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[31].u8[0] | (c)->q[20].u8[0];
    _t.u8[1] = (c)->q[31].u8[1] | (c)->q[20].u8[1];
    _t.u8[2] = (c)->q[31].u8[2] | (c)->q[20].u8[2];
    _t.u8[3] = (c)->q[31].u8[3] | (c)->q[20].u8[3];
    _t.u8[4] = (c)->q[31].u8[4] | (c)->q[20].u8[4];
    _t.u8[5] = (c)->q[31].u8[5] | (c)->q[20].u8[5];
    _t.u8[6] = (c)->q[31].u8[6] | (c)->q[20].u8[6];
    _t.u8[7] = (c)->q[31].u8[7] | (c)->q[20].u8[7];
    _t.u8[8] = (c)->q[31].u8[8] | (c)->q[20].u8[8];
    _t.u8[9] = (c)->q[31].u8[9] | (c)->q[20].u8[9];
    _t.u8[10] = (c)->q[31].u8[10] | (c)->q[20].u8[10];
    _t.u8[11] = (c)->q[31].u8[11] | (c)->q[20].u8[11];
    _t.u8[12] = (c)->q[31].u8[12] | (c)->q[20].u8[12];
    _t.u8[13] = (c)->q[31].u8[13] | (c)->q[20].u8[13];
    _t.u8[14] = (c)->q[31].u8[14] | (c)->q[20].u8[14];
    _t.u8[15] = (c)->q[31].u8[15] | (c)->q[20].u8[15];
    (c)->q[20] = _t; }
  /* c5028: orr v6.16b, v21.16b, v6.16b */
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
  /* c502c: orr v23.16b, v29.16b, v28.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[29].u8[0] | (c)->q[28].u8[0];
    _t.u8[1] = (c)->q[29].u8[1] | (c)->q[28].u8[1];
    _t.u8[2] = (c)->q[29].u8[2] | (c)->q[28].u8[2];
    _t.u8[3] = (c)->q[29].u8[3] | (c)->q[28].u8[3];
    _t.u8[4] = (c)->q[29].u8[4] | (c)->q[28].u8[4];
    _t.u8[5] = (c)->q[29].u8[5] | (c)->q[28].u8[5];
    _t.u8[6] = (c)->q[29].u8[6] | (c)->q[28].u8[6];
    _t.u8[7] = (c)->q[29].u8[7] | (c)->q[28].u8[7];
    _t.u8[8] = (c)->q[29].u8[8] | (c)->q[28].u8[8];
    _t.u8[9] = (c)->q[29].u8[9] | (c)->q[28].u8[9];
    _t.u8[10] = (c)->q[29].u8[10] | (c)->q[28].u8[10];
    _t.u8[11] = (c)->q[29].u8[11] | (c)->q[28].u8[11];
    _t.u8[12] = (c)->q[29].u8[12] | (c)->q[28].u8[12];
    _t.u8[13] = (c)->q[29].u8[13] | (c)->q[28].u8[13];
    _t.u8[14] = (c)->q[29].u8[14] | (c)->q[28].u8[14];
    _t.u8[15] = (c)->q[29].u8[15] | (c)->q[28].u8[15];
    (c)->q[23] = _t; }
  /* c5030: orr v1.16b, v1.16b, v5.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[1].u8[0] | (c)->q[5].u8[0];
    _t.u8[1] = (c)->q[1].u8[1] | (c)->q[5].u8[1];
    _t.u8[2] = (c)->q[1].u8[2] | (c)->q[5].u8[2];
    _t.u8[3] = (c)->q[1].u8[3] | (c)->q[5].u8[3];
    _t.u8[4] = (c)->q[1].u8[4] | (c)->q[5].u8[4];
    _t.u8[5] = (c)->q[1].u8[5] | (c)->q[5].u8[5];
    _t.u8[6] = (c)->q[1].u8[6] | (c)->q[5].u8[6];
    _t.u8[7] = (c)->q[1].u8[7] | (c)->q[5].u8[7];
    _t.u8[8] = (c)->q[1].u8[8] | (c)->q[5].u8[8];
    _t.u8[9] = (c)->q[1].u8[9] | (c)->q[5].u8[9];
    _t.u8[10] = (c)->q[1].u8[10] | (c)->q[5].u8[10];
    _t.u8[11] = (c)->q[1].u8[11] | (c)->q[5].u8[11];
    _t.u8[12] = (c)->q[1].u8[12] | (c)->q[5].u8[12];
    _t.u8[13] = (c)->q[1].u8[13] | (c)->q[5].u8[13];
    _t.u8[14] = (c)->q[1].u8[14] | (c)->q[5].u8[14];
    _t.u8[15] = (c)->q[1].u8[15] | (c)->q[5].u8[15];
    (c)->q[1] = _t; }
  /* c5034: orr v16.16b, v20.16b, v16.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[20].u8[0] | (c)->q[16].u8[0];
    _t.u8[1] = (c)->q[20].u8[1] | (c)->q[16].u8[1];
    _t.u8[2] = (c)->q[20].u8[2] | (c)->q[16].u8[2];
    _t.u8[3] = (c)->q[20].u8[3] | (c)->q[16].u8[3];
    _t.u8[4] = (c)->q[20].u8[4] | (c)->q[16].u8[4];
    _t.u8[5] = (c)->q[20].u8[5] | (c)->q[16].u8[5];
    _t.u8[6] = (c)->q[20].u8[6] | (c)->q[16].u8[6];
    _t.u8[7] = (c)->q[20].u8[7] | (c)->q[16].u8[7];
    _t.u8[8] = (c)->q[20].u8[8] | (c)->q[16].u8[8];
    _t.u8[9] = (c)->q[20].u8[9] | (c)->q[16].u8[9];
    _t.u8[10] = (c)->q[20].u8[10] | (c)->q[16].u8[10];
    _t.u8[11] = (c)->q[20].u8[11] | (c)->q[16].u8[11];
    _t.u8[12] = (c)->q[20].u8[12] | (c)->q[16].u8[12];
    _t.u8[13] = (c)->q[20].u8[13] | (c)->q[16].u8[13];
    _t.u8[14] = (c)->q[20].u8[14] | (c)->q[16].u8[14];
    _t.u8[15] = (c)->q[20].u8[15] | (c)->q[16].u8[15];
    (c)->q[16] = _t; }
  /* c5038: orr v2.16b, v6.16b, v2.16b */
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
  /* c503c: orr v7.16b, v23.16b, v7.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[23].u8[0] | (c)->q[7].u8[0];
    _t.u8[1] = (c)->q[23].u8[1] | (c)->q[7].u8[1];
    _t.u8[2] = (c)->q[23].u8[2] | (c)->q[7].u8[2];
    _t.u8[3] = (c)->q[23].u8[3] | (c)->q[7].u8[3];
    _t.u8[4] = (c)->q[23].u8[4] | (c)->q[7].u8[4];
    _t.u8[5] = (c)->q[23].u8[5] | (c)->q[7].u8[5];
    _t.u8[6] = (c)->q[23].u8[6] | (c)->q[7].u8[6];
    _t.u8[7] = (c)->q[23].u8[7] | (c)->q[7].u8[7];
    _t.u8[8] = (c)->q[23].u8[8] | (c)->q[7].u8[8];
    _t.u8[9] = (c)->q[23].u8[9] | (c)->q[7].u8[9];
    _t.u8[10] = (c)->q[23].u8[10] | (c)->q[7].u8[10];
    _t.u8[11] = (c)->q[23].u8[11] | (c)->q[7].u8[11];
    _t.u8[12] = (c)->q[23].u8[12] | (c)->q[7].u8[12];
    _t.u8[13] = (c)->q[23].u8[13] | (c)->q[7].u8[13];
    _t.u8[14] = (c)->q[23].u8[14] | (c)->q[7].u8[14];
    _t.u8[15] = (c)->q[23].u8[15] | (c)->q[7].u8[15];
    (c)->q[7] = _t; }
  /* c5040: orr v3.16b, v16.16b, v3.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[16].u8[0] | (c)->q[3].u8[0];
    _t.u8[1] = (c)->q[16].u8[1] | (c)->q[3].u8[1];
    _t.u8[2] = (c)->q[16].u8[2] | (c)->q[3].u8[2];
    _t.u8[3] = (c)->q[16].u8[3] | (c)->q[3].u8[3];
    _t.u8[4] = (c)->q[16].u8[4] | (c)->q[3].u8[4];
    _t.u8[5] = (c)->q[16].u8[5] | (c)->q[3].u8[5];
    _t.u8[6] = (c)->q[16].u8[6] | (c)->q[3].u8[6];
    _t.u8[7] = (c)->q[16].u8[7] | (c)->q[3].u8[7];
    _t.u8[8] = (c)->q[16].u8[8] | (c)->q[3].u8[8];
    _t.u8[9] = (c)->q[16].u8[9] | (c)->q[3].u8[9];
    _t.u8[10] = (c)->q[16].u8[10] | (c)->q[3].u8[10];
    _t.u8[11] = (c)->q[16].u8[11] | (c)->q[3].u8[11];
    _t.u8[12] = (c)->q[16].u8[12] | (c)->q[3].u8[12];
    _t.u8[13] = (c)->q[16].u8[13] | (c)->q[3].u8[13];
    _t.u8[14] = (c)->q[16].u8[14] | (c)->q[3].u8[14];
    _t.u8[15] = (c)->q[16].u8[15] | (c)->q[3].u8[15];
    (c)->q[3] = _t; }
  /* c5044: orr v4.16b, v7.16b, v4.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[7].u8[0] | (c)->q[4].u8[0];
    _t.u8[1] = (c)->q[7].u8[1] | (c)->q[4].u8[1];
    _t.u8[2] = (c)->q[7].u8[2] | (c)->q[4].u8[2];
    _t.u8[3] = (c)->q[7].u8[3] | (c)->q[4].u8[3];
    _t.u8[4] = (c)->q[7].u8[4] | (c)->q[4].u8[4];
    _t.u8[5] = (c)->q[7].u8[5] | (c)->q[4].u8[5];
    _t.u8[6] = (c)->q[7].u8[6] | (c)->q[4].u8[6];
    _t.u8[7] = (c)->q[7].u8[7] | (c)->q[4].u8[7];
    _t.u8[8] = (c)->q[7].u8[8] | (c)->q[4].u8[8];
    _t.u8[9] = (c)->q[7].u8[9] | (c)->q[4].u8[9];
    _t.u8[10] = (c)->q[7].u8[10] | (c)->q[4].u8[10];
    _t.u8[11] = (c)->q[7].u8[11] | (c)->q[4].u8[11];
    _t.u8[12] = (c)->q[7].u8[12] | (c)->q[4].u8[12];
    _t.u8[13] = (c)->q[7].u8[13] | (c)->q[4].u8[13];
    _t.u8[14] = (c)->q[7].u8[14] | (c)->q[4].u8[14];
    _t.u8[15] = (c)->q[7].u8[15] | (c)->q[4].u8[15];
    (c)->q[4] = _t; }
  /* c5048: orr v2.16b, v2.16b, v3.16b */
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
  /* c504c: orr v1.16b, v4.16b, v1.16b */
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
  /* c5050: orr v1.16b, v1.16b, v2.16b */
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
  /* c5054: ext v2.16b, v1.16b, v1.16b, #8 */
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
  /* c5058: orr v1.8b, v1.8b, v2.8b */
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
  /* c505c: fmov x13, d1 */
  ARC_X_W(c, 13, ARC_DU_R(c, 1));
  /* c5060: cbnz x14, #0xc4e00 */
  if ((ARC_X_R(c, 14)) != 0) goto L_c4e00;
L_c5064:;
  /* c5064: ldur q2, [x12, #-0x1e] */
  arc_q_w(c, 2, arc_ld64((ARC_X_R(c, 12) + INT64_C(-30))), arc_ld64((ARC_X_R(c, 12) + INT64_C(-30)) + 8));
  /* c5068: ldur q3, [x12, #-0x2e] */
  arc_q_w(c, 3, arc_ld64((ARC_X_R(c, 12) + INT64_C(-46))), arc_ld64((ARC_X_R(c, 12) + INT64_C(-46)) + 8));
  /* c506c: ldur q1, [x12, #-0xe] */
  arc_q_w(c, 1, arc_ld64((ARC_X_R(c, 12) + INT64_C(-14))), arc_ld64((ARC_X_R(c, 12) + INT64_C(-14)) + 8));
  /* c5070: ldur q4, [x12, #-0x3e] */
  arc_q_w(c, 4, arc_ld64((ARC_X_R(c, 12) + INT64_C(-62))), arc_ld64((ARC_X_R(c, 12) + INT64_C(-62)) + 8));
  /* c5074: ldur q5, [x12, #-0x4e] */
  arc_q_w(c, 5, arc_ld64((ARC_X_R(c, 12) + INT64_C(-78))), arc_ld64((ARC_X_R(c, 12) + INT64_C(-78)) + 8));
  /* c5078: ldur q26, [x29, #-0x60] */
  arc_q_w(c, 26, arc_ld64((ARC_X_R(c, 29) + INT64_C(-96))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-96)) + 8));
  /* c507c: rev64 v2.8h, v2.8h */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = (c)->q[2].u16[3];
    _t.u16[1] = (c)->q[2].u16[2];
    _t.u16[2] = (c)->q[2].u16[1];
    _t.u16[3] = (c)->q[2].u16[0];
    _t.u16[4] = (c)->q[2].u16[7];
    _t.u16[5] = (c)->q[2].u16[6];
    _t.u16[6] = (c)->q[2].u16[5];
    _t.u16[7] = (c)->q[2].u16[4];
    (c)->q[2] = _t; }
  /* c5080: rev64 v3.8h, v3.8h */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = (c)->q[3].u16[3];
    _t.u16[1] = (c)->q[3].u16[2];
    _t.u16[2] = (c)->q[3].u16[1];
    _t.u16[3] = (c)->q[3].u16[0];
    _t.u16[4] = (c)->q[3].u16[7];
    _t.u16[5] = (c)->q[3].u16[6];
    _t.u16[6] = (c)->q[3].u16[5];
    _t.u16[7] = (c)->q[3].u16[4];
    (c)->q[3] = _t; }
  /* c5084: rev64 v1.8h, v1.8h */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = (c)->q[1].u16[3];
    _t.u16[1] = (c)->q[1].u16[2];
    _t.u16[2] = (c)->q[1].u16[1];
    _t.u16[3] = (c)->q[1].u16[0];
    _t.u16[4] = (c)->q[1].u16[7];
    _t.u16[5] = (c)->q[1].u16[6];
    _t.u16[6] = (c)->q[1].u16[5];
    _t.u16[7] = (c)->q[1].u16[4];
    (c)->q[1] = _t; }
  /* c5088: rev64 v4.8h, v4.8h */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = (c)->q[4].u16[3];
    _t.u16[1] = (c)->q[4].u16[2];
    _t.u16[2] = (c)->q[4].u16[1];
    _t.u16[3] = (c)->q[4].u16[0];
    _t.u16[4] = (c)->q[4].u16[7];
    _t.u16[5] = (c)->q[4].u16[6];
    _t.u16[6] = (c)->q[4].u16[5];
    _t.u16[7] = (c)->q[4].u16[4];
    (c)->q[4] = _t; }
  /* c508c: ldp q29, q30, [x29, #-0xb0] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-176));
    arc_q_w(c, 29, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 30, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c5090: ldur q16, [x12, #-0x7e] */
  arc_q_w(c, 16, arc_ld64((ARC_X_R(c, 12) + INT64_C(-126))), arc_ld64((ARC_X_R(c, 12) + INT64_C(-126)) + 8));
  /* c5094: ldr q10, [sp, #0x120] */
  arc_q_w(c, 10, arc_ld64(((c)->sp + INT64_C(288))), arc_ld64(((c)->sp + INT64_C(288)) + 8));
  /* c5098: ldr q8, [x6, #0xc80] */
  arc_q_w(c, 8, arc_ld64((ARC_X_R(c, 6) + INT64_C(3200))), arc_ld64((ARC_X_R(c, 6) + INT64_C(3200)) + 8));
  /* c509c: ldr q9, [x27, #0xa00] */
  arc_q_w(c, 9, arc_ld64((ARC_X_R(c, 27) + INT64_C(2560))), arc_ld64((ARC_X_R(c, 27) + INT64_C(2560)) + 8));
  /* c50a0: ext v2.16b, v2.16b, v2.16b, #8 */
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
  /* c50a4: ext v3.16b, v3.16b, v3.16b, #8 */
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
  /* c50a8: ext v1.16b, v1.16b, v1.16b, #8 */
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
  /* c50ac: ext v4.16b, v4.16b, v4.16b, #8 */
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
  /* c50b0: cmgt v6.8h, v0.8h, v2.8h */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = ((c)->q[0].i16[0] > (c)->q[2].i16[0]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[1] = ((c)->q[0].i16[1] > (c)->q[2].i16[1]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[2] = ((c)->q[0].i16[2] > (c)->q[2].i16[2]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[3] = ((c)->q[0].i16[3] > (c)->q[2].i16[3]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[4] = ((c)->q[0].i16[4] > (c)->q[2].i16[4]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[5] = ((c)->q[0].i16[5] > (c)->q[2].i16[5]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[6] = ((c)->q[0].i16[6] > (c)->q[2].i16[6]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[7] = ((c)->q[0].i16[7] > (c)->q[2].i16[7]) ? (uint16_t)~(uint16_t)0 : 0;
    (c)->q[6] = _t; }
  /* c50b4: cmgt v3.8h, v0.8h, v3.8h */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = ((c)->q[0].i16[0] > (c)->q[3].i16[0]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[1] = ((c)->q[0].i16[1] > (c)->q[3].i16[1]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[2] = ((c)->q[0].i16[2] > (c)->q[3].i16[2]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[3] = ((c)->q[0].i16[3] > (c)->q[3].i16[3]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[4] = ((c)->q[0].i16[4] > (c)->q[3].i16[4]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[5] = ((c)->q[0].i16[5] > (c)->q[3].i16[5]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[6] = ((c)->q[0].i16[6] > (c)->q[3].i16[6]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[7] = ((c)->q[0].i16[7] > (c)->q[3].i16[7]) ? (uint16_t)~(uint16_t)0 : 0;
    (c)->q[3] = _t; }
  /* c50b8: cmgt v1.8h, v0.8h, v1.8h */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = ((c)->q[0].i16[0] > (c)->q[1].i16[0]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[1] = ((c)->q[0].i16[1] > (c)->q[1].i16[1]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[2] = ((c)->q[0].i16[2] > (c)->q[1].i16[2]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[3] = ((c)->q[0].i16[3] > (c)->q[1].i16[3]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[4] = ((c)->q[0].i16[4] > (c)->q[1].i16[4]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[5] = ((c)->q[0].i16[5] > (c)->q[1].i16[5]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[6] = ((c)->q[0].i16[6] > (c)->q[1].i16[6]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[7] = ((c)->q[0].i16[7] > (c)->q[1].i16[7]) ? (uint16_t)~(uint16_t)0 : 0;
    (c)->q[1] = _t; }
  /* c50bc: cmgt v4.8h, v0.8h, v4.8h */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = ((c)->q[0].i16[0] > (c)->q[4].i16[0]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[1] = ((c)->q[0].i16[1] > (c)->q[4].i16[1]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[2] = ((c)->q[0].i16[2] > (c)->q[4].i16[2]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[3] = ((c)->q[0].i16[3] > (c)->q[4].i16[3]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[4] = ((c)->q[0].i16[4] > (c)->q[4].i16[4]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[5] = ((c)->q[0].i16[5] > (c)->q[4].i16[5]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[6] = ((c)->q[0].i16[6] > (c)->q[4].i16[6]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[7] = ((c)->q[0].i16[7] > (c)->q[4].i16[7]) ? (uint16_t)~(uint16_t)0 : 0;
    (c)->q[4] = _t; }
  /* c50c0: rev64 v2.8h, v5.8h */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = (c)->q[5].u16[3];
    _t.u16[1] = (c)->q[5].u16[2];
    _t.u16[2] = (c)->q[5].u16[1];
    _t.u16[3] = (c)->q[5].u16[0];
    _t.u16[4] = (c)->q[5].u16[7];
    _t.u16[5] = (c)->q[5].u16[6];
    _t.u16[6] = (c)->q[5].u16[5];
    _t.u16[7] = (c)->q[5].u16[4];
    (c)->q[2] = _t; }
  /* c50c4: ldur q5, [x12, #-0x5e] */
  arc_q_w(c, 5, arc_ld64((ARC_X_R(c, 12) + INT64_C(-94))), arc_ld64((ARC_X_R(c, 12) + INT64_C(-94)) + 8));
  /* c50c8: sshll v17.4s, v6.4h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[6].i16[0]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[6].i16[1]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[6].i16[2]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[6].i16[3]) << 0);
    (c)->q[17] = _t; }
  /* c50cc: sshll v18.4s, v3.4h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[3].i16[0]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[3].i16[1]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[3].i16[2]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[3].i16[3]) << 0);
    (c)->q[18] = _t; }
  /* c50d0: sshll2 v3.4s, v3.8h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[3].i16[4]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[3].i16[5]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[3].i16[6]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[3].i16[7]) << 0);
    (c)->q[3] = _t; }
  /* c50d4: sshll v7.4s, v1.4h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[1].i16[0]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[1].i16[1]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[1].i16[2]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[1].i16[3]) << 0);
    (c)->q[7] = _t; }
  /* c50d8: sshll2 v1.4s, v1.8h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[1].i16[4]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[1].i16[5]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[1].i16[6]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[1].i16[7]) << 0);
    (c)->q[1] = _t; }
  /* c50dc: sshll2 v6.4s, v6.8h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[6].i16[4]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[6].i16[5]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[6].i16[6]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[6].i16[7]) << 0);
    (c)->q[6] = _t; }
  /* c50e0: sshll v19.4s, v4.4h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[4].i16[0]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[4].i16[1]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[4].i16[2]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[4].i16[3]) << 0);
    (c)->q[19] = _t; }
  /* c50e4: sshll2 v4.4s, v4.8h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[4].i16[4]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[4].i16[5]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[4].i16[6]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[4].i16[7]) << 0);
    (c)->q[4] = _t; }
  /* c50e8: rev64 v5.8h, v5.8h */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = (c)->q[5].u16[3];
    _t.u16[1] = (c)->q[5].u16[2];
    _t.u16[2] = (c)->q[5].u16[1];
    _t.u16[3] = (c)->q[5].u16[0];
    _t.u16[4] = (c)->q[5].u16[7];
    _t.u16[5] = (c)->q[5].u16[6];
    _t.u16[6] = (c)->q[5].u16[5];
    _t.u16[7] = (c)->q[5].u16[4];
    (c)->q[5] = _t; }
  /* c50ec: ushll2 v22.2d, v17.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[17].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[17].u32[3]) << 0);
    (c)->q[22] = _t; }
  /* c50f0: ushll v17.2d, v17.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[17].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[17].u32[1]) << 0);
    (c)->q[17] = _t; }
  /* c50f4: ushll2 v25.2d, v3.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[3].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[3].u32[3]) << 0);
    (c)->q[25] = _t; }
  /* c50f8: ushll2 v24.2d, v18.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[18].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[18].u32[3]) << 0);
    (c)->q[24] = _t; }
  /* c50fc: ushll2 v21.2d, v1.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[1].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[1].u32[3]) << 0);
    (c)->q[21] = _t; }
  /* c5100: ushll v1.2d, v1.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[1].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[1].u32[1]) << 0);
    (c)->q[1] = _t; }
  /* c5104: ushll2 v23.2d, v6.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[6].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[6].u32[3]) << 0);
    (c)->q[23] = _t; }
  /* c5108: ushll v6.2d, v6.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[6].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[6].u32[1]) << 0);
    (c)->q[6] = _t; }
  /* c510c: ushll v18.2d, v18.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[18].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[18].u32[1]) << 0);
    (c)->q[18] = _t; }
  /* c5110: and v27.16b, v17.16b, v15.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[17].u8[0] & (c)->q[15].u8[0];
    _t.u8[1] = (c)->q[17].u8[1] & (c)->q[15].u8[1];
    _t.u8[2] = (c)->q[17].u8[2] & (c)->q[15].u8[2];
    _t.u8[3] = (c)->q[17].u8[3] & (c)->q[15].u8[3];
    _t.u8[4] = (c)->q[17].u8[4] & (c)->q[15].u8[4];
    _t.u8[5] = (c)->q[17].u8[5] & (c)->q[15].u8[5];
    _t.u8[6] = (c)->q[17].u8[6] & (c)->q[15].u8[6];
    _t.u8[7] = (c)->q[17].u8[7] & (c)->q[15].u8[7];
    _t.u8[8] = (c)->q[17].u8[8] & (c)->q[15].u8[8];
    _t.u8[9] = (c)->q[17].u8[9] & (c)->q[15].u8[9];
    _t.u8[10] = (c)->q[17].u8[10] & (c)->q[15].u8[10];
    _t.u8[11] = (c)->q[17].u8[11] & (c)->q[15].u8[11];
    _t.u8[12] = (c)->q[17].u8[12] & (c)->q[15].u8[12];
    _t.u8[13] = (c)->q[17].u8[13] & (c)->q[15].u8[13];
    _t.u8[14] = (c)->q[17].u8[14] & (c)->q[15].u8[14];
    _t.u8[15] = (c)->q[17].u8[15] & (c)->q[15].u8[15];
    (c)->q[27] = _t; }
  /* c5114: ldur q17, [x12, #-0x6e] */
  arc_q_w(c, 17, arc_ld64((ARC_X_R(c, 12) + INT64_C(-110))), arc_ld64((ARC_X_R(c, 12) + INT64_C(-110)) + 8));
  /* c5118: and v25.16b, v25.16b, v29.16b */
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
  /* c511c: ldur q29, [x29, #-0xc0] */
  arc_q_w(c, 29, arc_ld64((ARC_X_R(c, 29) + INT64_C(-192))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-192)) + 8));
  /* c5120: ushll v3.2d, v3.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[3].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[3].u32[1]) << 0);
    (c)->q[3] = _t; }
  /* c5124: ushll2 v28.2d, v4.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[4].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[4].u32[3]) << 0);
    (c)->q[28] = _t; }
  /* c5128: ushll v4.2d, v4.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[4].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[4].u32[1]) << 0);
    (c)->q[4] = _t; }
  /* c512c: and v26.16b, v1.16b, v26.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[1].u8[0] & (c)->q[26].u8[0];
    _t.u8[1] = (c)->q[1].u8[1] & (c)->q[26].u8[1];
    _t.u8[2] = (c)->q[1].u8[2] & (c)->q[26].u8[2];
    _t.u8[3] = (c)->q[1].u8[3] & (c)->q[26].u8[3];
    _t.u8[4] = (c)->q[1].u8[4] & (c)->q[26].u8[4];
    _t.u8[5] = (c)->q[1].u8[5] & (c)->q[26].u8[5];
    _t.u8[6] = (c)->q[1].u8[6] & (c)->q[26].u8[6];
    _t.u8[7] = (c)->q[1].u8[7] & (c)->q[26].u8[7];
    _t.u8[8] = (c)->q[1].u8[8] & (c)->q[26].u8[8];
    _t.u8[9] = (c)->q[1].u8[9] & (c)->q[26].u8[9];
    _t.u8[10] = (c)->q[1].u8[10] & (c)->q[26].u8[10];
    _t.u8[11] = (c)->q[1].u8[11] & (c)->q[26].u8[11];
    _t.u8[12] = (c)->q[1].u8[12] & (c)->q[26].u8[12];
    _t.u8[13] = (c)->q[1].u8[13] & (c)->q[26].u8[13];
    _t.u8[14] = (c)->q[1].u8[14] & (c)->q[26].u8[14];
    _t.u8[15] = (c)->q[1].u8[15] & (c)->q[26].u8[15];
    (c)->q[26] = _t; }
  /* c5130: and v1.16b, v6.16b, v14.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[6].u8[0] & (c)->q[14].u8[0];
    _t.u8[1] = (c)->q[6].u8[1] & (c)->q[14].u8[1];
    _t.u8[2] = (c)->q[6].u8[2] & (c)->q[14].u8[2];
    _t.u8[3] = (c)->q[6].u8[3] & (c)->q[14].u8[3];
    _t.u8[4] = (c)->q[6].u8[4] & (c)->q[14].u8[4];
    _t.u8[5] = (c)->q[6].u8[5] & (c)->q[14].u8[5];
    _t.u8[6] = (c)->q[6].u8[6] & (c)->q[14].u8[6];
    _t.u8[7] = (c)->q[6].u8[7] & (c)->q[14].u8[7];
    _t.u8[8] = (c)->q[6].u8[8] & (c)->q[14].u8[8];
    _t.u8[9] = (c)->q[6].u8[9] & (c)->q[14].u8[9];
    _t.u8[10] = (c)->q[6].u8[10] & (c)->q[14].u8[10];
    _t.u8[11] = (c)->q[6].u8[11] & (c)->q[14].u8[11];
    _t.u8[12] = (c)->q[6].u8[12] & (c)->q[14].u8[12];
    _t.u8[13] = (c)->q[6].u8[13] & (c)->q[14].u8[13];
    _t.u8[14] = (c)->q[6].u8[14] & (c)->q[14].u8[14];
    _t.u8[15] = (c)->q[6].u8[15] & (c)->q[14].u8[15];
    (c)->q[1] = _t; }
  /* c5134: and v24.16b, v24.16b, v29.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[24].u8[0] & (c)->q[29].u8[0];
    _t.u8[1] = (c)->q[24].u8[1] & (c)->q[29].u8[1];
    _t.u8[2] = (c)->q[24].u8[2] & (c)->q[29].u8[2];
    _t.u8[3] = (c)->q[24].u8[3] & (c)->q[29].u8[3];
    _t.u8[4] = (c)->q[24].u8[4] & (c)->q[29].u8[4];
    _t.u8[5] = (c)->q[24].u8[5] & (c)->q[29].u8[5];
    _t.u8[6] = (c)->q[24].u8[6] & (c)->q[29].u8[6];
    _t.u8[7] = (c)->q[24].u8[7] & (c)->q[29].u8[7];
    _t.u8[8] = (c)->q[24].u8[8] & (c)->q[29].u8[8];
    _t.u8[9] = (c)->q[24].u8[9] & (c)->q[29].u8[9];
    _t.u8[10] = (c)->q[24].u8[10] & (c)->q[29].u8[10];
    _t.u8[11] = (c)->q[24].u8[11] & (c)->q[29].u8[11];
    _t.u8[12] = (c)->q[24].u8[12] & (c)->q[29].u8[12];
    _t.u8[13] = (c)->q[24].u8[13] & (c)->q[29].u8[13];
    _t.u8[14] = (c)->q[24].u8[14] & (c)->q[29].u8[14];
    _t.u8[15] = (c)->q[24].u8[15] & (c)->q[29].u8[15];
    (c)->q[24] = _t; }
  /* c5138: rev64 v29.8h, v17.8h */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = (c)->q[17].u16[3];
    _t.u16[1] = (c)->q[17].u16[2];
    _t.u16[2] = (c)->q[17].u16[1];
    _t.u16[3] = (c)->q[17].u16[0];
    _t.u16[4] = (c)->q[17].u16[7];
    _t.u16[5] = (c)->q[17].u16[6];
    _t.u16[6] = (c)->q[17].u16[5];
    _t.u16[7] = (c)->q[17].u16[4];
    (c)->q[29] = _t; }
  /* c513c: ldur q17, [x29, #-0x90] */
  arc_q_w(c, 17, arc_ld64((ARC_X_R(c, 29) + INT64_C(-144))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-144)) + 8));
  /* c5140: ldur q6, [x29, #-0x70] */
  arc_q_w(c, 6, arc_ld64((ARC_X_R(c, 29) + INT64_C(-112))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-112)) + 8));
  /* c5144: and v18.16b, v18.16b, v30.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[18].u8[0] & (c)->q[30].u8[0];
    _t.u8[1] = (c)->q[18].u8[1] & (c)->q[30].u8[1];
    _t.u8[2] = (c)->q[18].u8[2] & (c)->q[30].u8[2];
    _t.u8[3] = (c)->q[18].u8[3] & (c)->q[30].u8[3];
    _t.u8[4] = (c)->q[18].u8[4] & (c)->q[30].u8[4];
    _t.u8[5] = (c)->q[18].u8[5] & (c)->q[30].u8[5];
    _t.u8[6] = (c)->q[18].u8[6] & (c)->q[30].u8[6];
    _t.u8[7] = (c)->q[18].u8[7] & (c)->q[30].u8[7];
    _t.u8[8] = (c)->q[18].u8[8] & (c)->q[30].u8[8];
    _t.u8[9] = (c)->q[18].u8[9] & (c)->q[30].u8[9];
    _t.u8[10] = (c)->q[18].u8[10] & (c)->q[30].u8[10];
    _t.u8[11] = (c)->q[18].u8[11] & (c)->q[30].u8[11];
    _t.u8[12] = (c)->q[18].u8[12] & (c)->q[30].u8[12];
    _t.u8[13] = (c)->q[18].u8[13] & (c)->q[30].u8[13];
    _t.u8[14] = (c)->q[18].u8[14] & (c)->q[30].u8[14];
    _t.u8[15] = (c)->q[18].u8[15] & (c)->q[30].u8[15];
    (c)->q[18] = _t; }
  /* c5148: ext v2.16b, v2.16b, v2.16b, #8 */
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
  /* c514c: and v30.16b, v3.16b, v17.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[3].u8[0] & (c)->q[17].u8[0];
    _t.u8[1] = (c)->q[3].u8[1] & (c)->q[17].u8[1];
    _t.u8[2] = (c)->q[3].u8[2] & (c)->q[17].u8[2];
    _t.u8[3] = (c)->q[3].u8[3] & (c)->q[17].u8[3];
    _t.u8[4] = (c)->q[3].u8[4] & (c)->q[17].u8[4];
    _t.u8[5] = (c)->q[3].u8[5] & (c)->q[17].u8[5];
    _t.u8[6] = (c)->q[3].u8[6] & (c)->q[17].u8[6];
    _t.u8[7] = (c)->q[3].u8[7] & (c)->q[17].u8[7];
    _t.u8[8] = (c)->q[3].u8[8] & (c)->q[17].u8[8];
    _t.u8[9] = (c)->q[3].u8[9] & (c)->q[17].u8[9];
    _t.u8[10] = (c)->q[3].u8[10] & (c)->q[17].u8[10];
    _t.u8[11] = (c)->q[3].u8[11] & (c)->q[17].u8[11];
    _t.u8[12] = (c)->q[3].u8[12] & (c)->q[17].u8[12];
    _t.u8[13] = (c)->q[3].u8[13] & (c)->q[17].u8[13];
    _t.u8[14] = (c)->q[3].u8[14] & (c)->q[17].u8[14];
    _t.u8[15] = (c)->q[3].u8[15] & (c)->q[17].u8[15];
    (c)->q[30] = _t; }
  /* c5150: ldur q3, [x29, #-0xd0] */
  arc_q_w(c, 3, arc_ld64((ARC_X_R(c, 29) + INT64_C(-208))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-208)) + 8));
  /* c5154: ushll2 v20.2d, v7.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[7].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[7].u32[3]) << 0);
    (c)->q[20] = _t; }
  /* c5158: and v23.16b, v23.16b, v6.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[23].u8[0] & (c)->q[6].u8[0];
    _t.u8[1] = (c)->q[23].u8[1] & (c)->q[6].u8[1];
    _t.u8[2] = (c)->q[23].u8[2] & (c)->q[6].u8[2];
    _t.u8[3] = (c)->q[23].u8[3] & (c)->q[6].u8[3];
    _t.u8[4] = (c)->q[23].u8[4] & (c)->q[6].u8[4];
    _t.u8[5] = (c)->q[23].u8[5] & (c)->q[6].u8[5];
    _t.u8[6] = (c)->q[23].u8[6] & (c)->q[6].u8[6];
    _t.u8[7] = (c)->q[23].u8[7] & (c)->q[6].u8[7];
    _t.u8[8] = (c)->q[23].u8[8] & (c)->q[6].u8[8];
    _t.u8[9] = (c)->q[23].u8[9] & (c)->q[6].u8[9];
    _t.u8[10] = (c)->q[23].u8[10] & (c)->q[6].u8[10];
    _t.u8[11] = (c)->q[23].u8[11] & (c)->q[6].u8[11];
    _t.u8[12] = (c)->q[23].u8[12] & (c)->q[6].u8[12];
    _t.u8[13] = (c)->q[23].u8[13] & (c)->q[6].u8[13];
    _t.u8[14] = (c)->q[23].u8[14] & (c)->q[6].u8[14];
    _t.u8[15] = (c)->q[23].u8[15] & (c)->q[6].u8[15];
    (c)->q[23] = _t; }
  /* c515c: ldur q6, [x29, #-0x80] */
  arc_q_w(c, 6, arc_ld64((ARC_X_R(c, 29) + INT64_C(-128))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-128)) + 8));
  /* c5160: ushll v7.2d, v7.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[7].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[7].u32[1]) << 0);
    (c)->q[7] = _t; }
  /* c5164: and v17.16b, v4.16b, v3.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[4].u8[0] & (c)->q[3].u8[0];
    _t.u8[1] = (c)->q[4].u8[1] & (c)->q[3].u8[1];
    _t.u8[2] = (c)->q[4].u8[2] & (c)->q[3].u8[2];
    _t.u8[3] = (c)->q[4].u8[3] & (c)->q[3].u8[3];
    _t.u8[4] = (c)->q[4].u8[4] & (c)->q[3].u8[4];
    _t.u8[5] = (c)->q[4].u8[5] & (c)->q[3].u8[5];
    _t.u8[6] = (c)->q[4].u8[6] & (c)->q[3].u8[6];
    _t.u8[7] = (c)->q[4].u8[7] & (c)->q[3].u8[7];
    _t.u8[8] = (c)->q[4].u8[8] & (c)->q[3].u8[8];
    _t.u8[9] = (c)->q[4].u8[9] & (c)->q[3].u8[9];
    _t.u8[10] = (c)->q[4].u8[10] & (c)->q[3].u8[10];
    _t.u8[11] = (c)->q[4].u8[11] & (c)->q[3].u8[11];
    _t.u8[12] = (c)->q[4].u8[12] & (c)->q[3].u8[12];
    _t.u8[13] = (c)->q[4].u8[13] & (c)->q[3].u8[13];
    _t.u8[14] = (c)->q[4].u8[14] & (c)->q[3].u8[14];
    _t.u8[15] = (c)->q[4].u8[15] & (c)->q[3].u8[15];
    (c)->q[17] = _t; }
  /* c5168: ldp q3, q4, [x29, #-0xf0] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-240));
    arc_q_w(c, 3, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 4, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c516c: and v22.16b, v22.16b, v6.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[22].u8[0] & (c)->q[6].u8[0];
    _t.u8[1] = (c)->q[22].u8[1] & (c)->q[6].u8[1];
    _t.u8[2] = (c)->q[22].u8[2] & (c)->q[6].u8[2];
    _t.u8[3] = (c)->q[22].u8[3] & (c)->q[6].u8[3];
    _t.u8[4] = (c)->q[22].u8[4] & (c)->q[6].u8[4];
    _t.u8[5] = (c)->q[22].u8[5] & (c)->q[6].u8[5];
    _t.u8[6] = (c)->q[22].u8[6] & (c)->q[6].u8[6];
    _t.u8[7] = (c)->q[22].u8[7] & (c)->q[6].u8[7];
    _t.u8[8] = (c)->q[22].u8[8] & (c)->q[6].u8[8];
    _t.u8[9] = (c)->q[22].u8[9] & (c)->q[6].u8[9];
    _t.u8[10] = (c)->q[22].u8[10] & (c)->q[6].u8[10];
    _t.u8[11] = (c)->q[22].u8[11] & (c)->q[6].u8[11];
    _t.u8[12] = (c)->q[22].u8[12] & (c)->q[6].u8[12];
    _t.u8[13] = (c)->q[22].u8[13] & (c)->q[6].u8[13];
    _t.u8[14] = (c)->q[22].u8[14] & (c)->q[6].u8[14];
    _t.u8[15] = (c)->q[22].u8[15] & (c)->q[6].u8[15];
    (c)->q[22] = _t; }
  /* c5170: rev64 v6.8h, v16.8h */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = (c)->q[16].u16[3];
    _t.u16[1] = (c)->q[16].u16[2];
    _t.u16[2] = (c)->q[16].u16[1];
    _t.u16[3] = (c)->q[16].u16[0];
    _t.u16[4] = (c)->q[16].u16[7];
    _t.u16[5] = (c)->q[16].u16[6];
    _t.u16[6] = (c)->q[16].u16[5];
    _t.u16[7] = (c)->q[16].u16[4];
    (c)->q[6] = _t; }
  /* c5174: ushll2 v16.2d, v19.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[19].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[19].u32[3]) << 0);
    (c)->q[16] = _t; }
  /* c5178: ushll v19.2d, v19.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[19].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[19].u32[1]) << 0);
    (c)->q[19] = _t; }
  /* c517c: ext v5.16b, v5.16b, v5.16b, #8 */
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
  /* c5180: and v7.16b, v7.16b, v11.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[7].u8[0] & (c)->q[11].u8[0];
    _t.u8[1] = (c)->q[7].u8[1] & (c)->q[11].u8[1];
    _t.u8[2] = (c)->q[7].u8[2] & (c)->q[11].u8[2];
    _t.u8[3] = (c)->q[7].u8[3] & (c)->q[11].u8[3];
    _t.u8[4] = (c)->q[7].u8[4] & (c)->q[11].u8[4];
    _t.u8[5] = (c)->q[7].u8[5] & (c)->q[11].u8[5];
    _t.u8[6] = (c)->q[7].u8[6] & (c)->q[11].u8[6];
    _t.u8[7] = (c)->q[7].u8[7] & (c)->q[11].u8[7];
    _t.u8[8] = (c)->q[7].u8[8] & (c)->q[11].u8[8];
    _t.u8[9] = (c)->q[7].u8[9] & (c)->q[11].u8[9];
    _t.u8[10] = (c)->q[7].u8[10] & (c)->q[11].u8[10];
    _t.u8[11] = (c)->q[7].u8[11] & (c)->q[11].u8[11];
    _t.u8[12] = (c)->q[7].u8[12] & (c)->q[11].u8[12];
    _t.u8[13] = (c)->q[7].u8[13] & (c)->q[11].u8[13];
    _t.u8[14] = (c)->q[7].u8[14] & (c)->q[11].u8[14];
    _t.u8[15] = (c)->q[7].u8[15] & (c)->q[11].u8[15];
    (c)->q[7] = _t; }
  /* c5184: and v28.16b, v28.16b, v3.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[28].u8[0] & (c)->q[3].u8[0];
    _t.u8[1] = (c)->q[28].u8[1] & (c)->q[3].u8[1];
    _t.u8[2] = (c)->q[28].u8[2] & (c)->q[3].u8[2];
    _t.u8[3] = (c)->q[28].u8[3] & (c)->q[3].u8[3];
    _t.u8[4] = (c)->q[28].u8[4] & (c)->q[3].u8[4];
    _t.u8[5] = (c)->q[28].u8[5] & (c)->q[3].u8[5];
    _t.u8[6] = (c)->q[28].u8[6] & (c)->q[3].u8[6];
    _t.u8[7] = (c)->q[28].u8[7] & (c)->q[3].u8[7];
    _t.u8[8] = (c)->q[28].u8[8] & (c)->q[3].u8[8];
    _t.u8[9] = (c)->q[28].u8[9] & (c)->q[3].u8[9];
    _t.u8[10] = (c)->q[28].u8[10] & (c)->q[3].u8[10];
    _t.u8[11] = (c)->q[28].u8[11] & (c)->q[3].u8[11];
    _t.u8[12] = (c)->q[28].u8[12] & (c)->q[3].u8[12];
    _t.u8[13] = (c)->q[28].u8[13] & (c)->q[3].u8[13];
    _t.u8[14] = (c)->q[28].u8[14] & (c)->q[3].u8[14];
    _t.u8[15] = (c)->q[28].u8[15] & (c)->q[3].u8[15];
    (c)->q[28] = _t; }
  /* c5188: ldur q3, [x29, #-0x100] */
  arc_q_w(c, 3, arc_ld64((ARC_X_R(c, 29) + INT64_C(-256))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-256)) + 8));
  /* c518c: cmgt v31.8h, v0.8h, v2.8h */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = ((c)->q[0].i16[0] > (c)->q[2].i16[0]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[1] = ((c)->q[0].i16[1] > (c)->q[2].i16[1]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[2] = ((c)->q[0].i16[2] > (c)->q[2].i16[2]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[3] = ((c)->q[0].i16[3] > (c)->q[2].i16[3]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[4] = ((c)->q[0].i16[4] > (c)->q[2].i16[4]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[5] = ((c)->q[0].i16[5] > (c)->q[2].i16[5]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[6] = ((c)->q[0].i16[6] > (c)->q[2].i16[6]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[7] = ((c)->q[0].i16[7] > (c)->q[2].i16[7]) ? (uint16_t)~(uint16_t)0 : 0;
    (c)->q[31] = _t; }
  /* c5190: and v21.16b, v21.16b, v12.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[21].u8[0] & (c)->q[12].u8[0];
    _t.u8[1] = (c)->q[21].u8[1] & (c)->q[12].u8[1];
    _t.u8[2] = (c)->q[21].u8[2] & (c)->q[12].u8[2];
    _t.u8[3] = (c)->q[21].u8[3] & (c)->q[12].u8[3];
    _t.u8[4] = (c)->q[21].u8[4] & (c)->q[12].u8[4];
    _t.u8[5] = (c)->q[21].u8[5] & (c)->q[12].u8[5];
    _t.u8[6] = (c)->q[21].u8[6] & (c)->q[12].u8[6];
    _t.u8[7] = (c)->q[21].u8[7] & (c)->q[12].u8[7];
    _t.u8[8] = (c)->q[21].u8[8] & (c)->q[12].u8[8];
    _t.u8[9] = (c)->q[21].u8[9] & (c)->q[12].u8[9];
    _t.u8[10] = (c)->q[21].u8[10] & (c)->q[12].u8[10];
    _t.u8[11] = (c)->q[21].u8[11] & (c)->q[12].u8[11];
    _t.u8[12] = (c)->q[21].u8[12] & (c)->q[12].u8[12];
    _t.u8[13] = (c)->q[21].u8[13] & (c)->q[12].u8[13];
    _t.u8[14] = (c)->q[21].u8[14] & (c)->q[12].u8[14];
    _t.u8[15] = (c)->q[21].u8[15] & (c)->q[12].u8[15];
    (c)->q[21] = _t; }
  /* c5194: and v20.16b, v20.16b, v13.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[20].u8[0] & (c)->q[13].u8[0];
    _t.u8[1] = (c)->q[20].u8[1] & (c)->q[13].u8[1];
    _t.u8[2] = (c)->q[20].u8[2] & (c)->q[13].u8[2];
    _t.u8[3] = (c)->q[20].u8[3] & (c)->q[13].u8[3];
    _t.u8[4] = (c)->q[20].u8[4] & (c)->q[13].u8[4];
    _t.u8[5] = (c)->q[20].u8[5] & (c)->q[13].u8[5];
    _t.u8[6] = (c)->q[20].u8[6] & (c)->q[13].u8[6];
    _t.u8[7] = (c)->q[20].u8[7] & (c)->q[13].u8[7];
    _t.u8[8] = (c)->q[20].u8[8] & (c)->q[13].u8[8];
    _t.u8[9] = (c)->q[20].u8[9] & (c)->q[13].u8[9];
    _t.u8[10] = (c)->q[20].u8[10] & (c)->q[13].u8[10];
    _t.u8[11] = (c)->q[20].u8[11] & (c)->q[13].u8[11];
    _t.u8[12] = (c)->q[20].u8[12] & (c)->q[13].u8[12];
    _t.u8[13] = (c)->q[20].u8[13] & (c)->q[13].u8[13];
    _t.u8[14] = (c)->q[20].u8[14] & (c)->q[13].u8[14];
    _t.u8[15] = (c)->q[20].u8[15] & (c)->q[13].u8[15];
    (c)->q[20] = _t; }
  /* c5198: orr v1.16b, v17.16b, v1.16b */
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
  /* c519c: and v19.16b, v19.16b, v4.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[19].u8[0] & (c)->q[4].u8[0];
    _t.u8[1] = (c)->q[19].u8[1] & (c)->q[4].u8[1];
    _t.u8[2] = (c)->q[19].u8[2] & (c)->q[4].u8[2];
    _t.u8[3] = (c)->q[19].u8[3] & (c)->q[4].u8[3];
    _t.u8[4] = (c)->q[19].u8[4] & (c)->q[4].u8[4];
    _t.u8[5] = (c)->q[19].u8[5] & (c)->q[4].u8[5];
    _t.u8[6] = (c)->q[19].u8[6] & (c)->q[4].u8[6];
    _t.u8[7] = (c)->q[19].u8[7] & (c)->q[4].u8[7];
    _t.u8[8] = (c)->q[19].u8[8] & (c)->q[4].u8[8];
    _t.u8[9] = (c)->q[19].u8[9] & (c)->q[4].u8[9];
    _t.u8[10] = (c)->q[19].u8[10] & (c)->q[4].u8[10];
    _t.u8[11] = (c)->q[19].u8[11] & (c)->q[4].u8[11];
    _t.u8[12] = (c)->q[19].u8[12] & (c)->q[4].u8[12];
    _t.u8[13] = (c)->q[19].u8[13] & (c)->q[4].u8[13];
    _t.u8[14] = (c)->q[19].u8[14] & (c)->q[4].u8[14];
    _t.u8[15] = (c)->q[19].u8[15] & (c)->q[4].u8[15];
    (c)->q[19] = _t; }
  /* c51a0: and v16.16b, v16.16b, v3.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[16].u8[0] & (c)->q[3].u8[0];
    _t.u8[1] = (c)->q[16].u8[1] & (c)->q[3].u8[1];
    _t.u8[2] = (c)->q[16].u8[2] & (c)->q[3].u8[2];
    _t.u8[3] = (c)->q[16].u8[3] & (c)->q[3].u8[3];
    _t.u8[4] = (c)->q[16].u8[4] & (c)->q[3].u8[4];
    _t.u8[5] = (c)->q[16].u8[5] & (c)->q[3].u8[5];
    _t.u8[6] = (c)->q[16].u8[6] & (c)->q[3].u8[6];
    _t.u8[7] = (c)->q[16].u8[7] & (c)->q[3].u8[7];
    _t.u8[8] = (c)->q[16].u8[8] & (c)->q[3].u8[8];
    _t.u8[9] = (c)->q[16].u8[9] & (c)->q[3].u8[9];
    _t.u8[10] = (c)->q[16].u8[10] & (c)->q[3].u8[10];
    _t.u8[11] = (c)->q[16].u8[11] & (c)->q[3].u8[11];
    _t.u8[12] = (c)->q[16].u8[12] & (c)->q[3].u8[12];
    _t.u8[13] = (c)->q[16].u8[13] & (c)->q[3].u8[13];
    _t.u8[14] = (c)->q[16].u8[14] & (c)->q[3].u8[14];
    _t.u8[15] = (c)->q[16].u8[15] & (c)->q[3].u8[15];
    (c)->q[16] = _t; }
  /* c51a4: ext v6.16b, v6.16b, v6.16b, #8 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[6].u8[8];
    _t.u8[1] = (c)->q[6].u8[9];
    _t.u8[2] = (c)->q[6].u8[10];
    _t.u8[3] = (c)->q[6].u8[11];
    _t.u8[4] = (c)->q[6].u8[12];
    _t.u8[5] = (c)->q[6].u8[13];
    _t.u8[6] = (c)->q[6].u8[14];
    _t.u8[7] = (c)->q[6].u8[15];
    _t.u8[8] = (c)->q[6].u8[0];
    _t.u8[9] = (c)->q[6].u8[1];
    _t.u8[10] = (c)->q[6].u8[2];
    _t.u8[11] = (c)->q[6].u8[3];
    _t.u8[12] = (c)->q[6].u8[4];
    _t.u8[13] = (c)->q[6].u8[5];
    _t.u8[14] = (c)->q[6].u8[6];
    _t.u8[15] = (c)->q[6].u8[7];
    (c)->q[6] = _t; }
  /* c51a8: orr v4.16b, v18.16b, v7.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[18].u8[0] | (c)->q[7].u8[0];
    _t.u8[1] = (c)->q[18].u8[1] | (c)->q[7].u8[1];
    _t.u8[2] = (c)->q[18].u8[2] | (c)->q[7].u8[2];
    _t.u8[3] = (c)->q[18].u8[3] | (c)->q[7].u8[3];
    _t.u8[4] = (c)->q[18].u8[4] | (c)->q[7].u8[4];
    _t.u8[5] = (c)->q[18].u8[5] | (c)->q[7].u8[5];
    _t.u8[6] = (c)->q[18].u8[6] | (c)->q[7].u8[6];
    _t.u8[7] = (c)->q[18].u8[7] | (c)->q[7].u8[7];
    _t.u8[8] = (c)->q[18].u8[8] | (c)->q[7].u8[8];
    _t.u8[9] = (c)->q[18].u8[9] | (c)->q[7].u8[9];
    _t.u8[10] = (c)->q[18].u8[10] | (c)->q[7].u8[10];
    _t.u8[11] = (c)->q[18].u8[11] | (c)->q[7].u8[11];
    _t.u8[12] = (c)->q[18].u8[12] | (c)->q[7].u8[12];
    _t.u8[13] = (c)->q[18].u8[13] | (c)->q[7].u8[13];
    _t.u8[14] = (c)->q[18].u8[14] | (c)->q[7].u8[14];
    _t.u8[15] = (c)->q[18].u8[15] | (c)->q[7].u8[15];
    (c)->q[4] = _t; }
  /* c51ac: cmgt v18.8h, v0.8h, v5.8h */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = ((c)->q[0].i16[0] > (c)->q[5].i16[0]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[1] = ((c)->q[0].i16[1] > (c)->q[5].i16[1]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[2] = ((c)->q[0].i16[2] > (c)->q[5].i16[2]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[3] = ((c)->q[0].i16[3] > (c)->q[5].i16[3]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[4] = ((c)->q[0].i16[4] > (c)->q[5].i16[4]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[5] = ((c)->q[0].i16[5] > (c)->q[5].i16[5]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[6] = ((c)->q[0].i16[6] > (c)->q[5].i16[6]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[7] = ((c)->q[0].i16[7] > (c)->q[5].i16[7]) ? (uint16_t)~(uint16_t)0 : 0;
    (c)->q[18] = _t; }
  /* c51b0: orr v7.16b, v28.16b, v23.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[28].u8[0] | (c)->q[23].u8[0];
    _t.u8[1] = (c)->q[28].u8[1] | (c)->q[23].u8[1];
    _t.u8[2] = (c)->q[28].u8[2] | (c)->q[23].u8[2];
    _t.u8[3] = (c)->q[28].u8[3] | (c)->q[23].u8[3];
    _t.u8[4] = (c)->q[28].u8[4] | (c)->q[23].u8[4];
    _t.u8[5] = (c)->q[28].u8[5] | (c)->q[23].u8[5];
    _t.u8[6] = (c)->q[28].u8[6] | (c)->q[23].u8[6];
    _t.u8[7] = (c)->q[28].u8[7] | (c)->q[23].u8[7];
    _t.u8[8] = (c)->q[28].u8[8] | (c)->q[23].u8[8];
    _t.u8[9] = (c)->q[28].u8[9] | (c)->q[23].u8[9];
    _t.u8[10] = (c)->q[28].u8[10] | (c)->q[23].u8[10];
    _t.u8[11] = (c)->q[28].u8[11] | (c)->q[23].u8[11];
    _t.u8[12] = (c)->q[28].u8[12] | (c)->q[23].u8[12];
    _t.u8[13] = (c)->q[28].u8[13] | (c)->q[23].u8[13];
    _t.u8[14] = (c)->q[28].u8[14] | (c)->q[23].u8[14];
    _t.u8[15] = (c)->q[28].u8[15] | (c)->q[23].u8[15];
    (c)->q[7] = _t; }
  /* c51b4: orr v3.16b, v25.16b, v21.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[25].u8[0] | (c)->q[21].u8[0];
    _t.u8[1] = (c)->q[25].u8[1] | (c)->q[21].u8[1];
    _t.u8[2] = (c)->q[25].u8[2] | (c)->q[21].u8[2];
    _t.u8[3] = (c)->q[25].u8[3] | (c)->q[21].u8[3];
    _t.u8[4] = (c)->q[25].u8[4] | (c)->q[21].u8[4];
    _t.u8[5] = (c)->q[25].u8[5] | (c)->q[21].u8[5];
    _t.u8[6] = (c)->q[25].u8[6] | (c)->q[21].u8[6];
    _t.u8[7] = (c)->q[25].u8[7] | (c)->q[21].u8[7];
    _t.u8[8] = (c)->q[25].u8[8] | (c)->q[21].u8[8];
    _t.u8[9] = (c)->q[25].u8[9] | (c)->q[21].u8[9];
    _t.u8[10] = (c)->q[25].u8[10] | (c)->q[21].u8[10];
    _t.u8[11] = (c)->q[25].u8[11] | (c)->q[21].u8[11];
    _t.u8[12] = (c)->q[25].u8[12] | (c)->q[21].u8[12];
    _t.u8[13] = (c)->q[25].u8[13] | (c)->q[21].u8[13];
    _t.u8[14] = (c)->q[25].u8[14] | (c)->q[21].u8[14];
    _t.u8[15] = (c)->q[25].u8[15] | (c)->q[21].u8[15];
    (c)->q[3] = _t; }
  /* c51b8: orr v2.16b, v24.16b, v20.16b */
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
    (c)->q[2] = _t; }
  /* c51bc: ext v20.16b, v29.16b, v29.16b, #8 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[29].u8[8];
    _t.u8[1] = (c)->q[29].u8[9];
    _t.u8[2] = (c)->q[29].u8[10];
    _t.u8[3] = (c)->q[29].u8[11];
    _t.u8[4] = (c)->q[29].u8[12];
    _t.u8[5] = (c)->q[29].u8[13];
    _t.u8[6] = (c)->q[29].u8[14];
    _t.u8[7] = (c)->q[29].u8[15];
    _t.u8[8] = (c)->q[29].u8[0];
    _t.u8[9] = (c)->q[29].u8[1];
    _t.u8[10] = (c)->q[29].u8[2];
    _t.u8[11] = (c)->q[29].u8[3];
    _t.u8[12] = (c)->q[29].u8[4];
    _t.u8[13] = (c)->q[29].u8[5];
    _t.u8[14] = (c)->q[29].u8[6];
    _t.u8[15] = (c)->q[29].u8[7];
    (c)->q[20] = _t; }
  /* c51c0: orr v5.16b, v16.16b, v22.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[16].u8[0] | (c)->q[22].u8[0];
    _t.u8[1] = (c)->q[16].u8[1] | (c)->q[22].u8[1];
    _t.u8[2] = (c)->q[16].u8[2] | (c)->q[22].u8[2];
    _t.u8[3] = (c)->q[16].u8[3] | (c)->q[22].u8[3];
    _t.u8[4] = (c)->q[16].u8[4] | (c)->q[22].u8[4];
    _t.u8[5] = (c)->q[16].u8[5] | (c)->q[22].u8[5];
    _t.u8[6] = (c)->q[16].u8[6] | (c)->q[22].u8[6];
    _t.u8[7] = (c)->q[16].u8[7] | (c)->q[22].u8[7];
    _t.u8[8] = (c)->q[16].u8[8] | (c)->q[22].u8[8];
    _t.u8[9] = (c)->q[16].u8[9] | (c)->q[22].u8[9];
    _t.u8[10] = (c)->q[16].u8[10] | (c)->q[22].u8[10];
    _t.u8[11] = (c)->q[16].u8[11] | (c)->q[22].u8[11];
    _t.u8[12] = (c)->q[16].u8[12] | (c)->q[22].u8[12];
    _t.u8[13] = (c)->q[16].u8[13] | (c)->q[22].u8[13];
    _t.u8[14] = (c)->q[16].u8[14] | (c)->q[22].u8[14];
    _t.u8[15] = (c)->q[16].u8[15] | (c)->q[22].u8[15];
    (c)->q[5] = _t; }
  /* c51c4: orr v16.16b, v19.16b, v27.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[19].u8[0] | (c)->q[27].u8[0];
    _t.u8[1] = (c)->q[19].u8[1] | (c)->q[27].u8[1];
    _t.u8[2] = (c)->q[19].u8[2] | (c)->q[27].u8[2];
    _t.u8[3] = (c)->q[19].u8[3] | (c)->q[27].u8[3];
    _t.u8[4] = (c)->q[19].u8[4] | (c)->q[27].u8[4];
    _t.u8[5] = (c)->q[19].u8[5] | (c)->q[27].u8[5];
    _t.u8[6] = (c)->q[19].u8[6] | (c)->q[27].u8[6];
    _t.u8[7] = (c)->q[19].u8[7] | (c)->q[27].u8[7];
    _t.u8[8] = (c)->q[19].u8[8] | (c)->q[27].u8[8];
    _t.u8[9] = (c)->q[19].u8[9] | (c)->q[27].u8[9];
    _t.u8[10] = (c)->q[19].u8[10] | (c)->q[27].u8[10];
    _t.u8[11] = (c)->q[19].u8[11] | (c)->q[27].u8[11];
    _t.u8[12] = (c)->q[19].u8[12] | (c)->q[27].u8[12];
    _t.u8[13] = (c)->q[19].u8[13] | (c)->q[27].u8[13];
    _t.u8[14] = (c)->q[19].u8[14] | (c)->q[27].u8[14];
    _t.u8[15] = (c)->q[19].u8[15] | (c)->q[27].u8[15];
    (c)->q[16] = _t; }
  /* c51c8: sshll v19.4s, v31.4h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[31].i16[0]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[31].i16[1]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[31].i16[2]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[31].i16[3]) << 0);
    (c)->q[19] = _t; }
  /* c51cc: cmgt v21.8h, v0.8h, v6.8h */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = ((c)->q[0].i16[0] > (c)->q[6].i16[0]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[1] = ((c)->q[0].i16[1] > (c)->q[6].i16[1]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[2] = ((c)->q[0].i16[2] > (c)->q[6].i16[2]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[3] = ((c)->q[0].i16[3] > (c)->q[6].i16[3]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[4] = ((c)->q[0].i16[4] > (c)->q[6].i16[4]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[5] = ((c)->q[0].i16[5] > (c)->q[6].i16[5]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[6] = ((c)->q[0].i16[6] > (c)->q[6].i16[6]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[7] = ((c)->q[0].i16[7] > (c)->q[6].i16[7]) ? (uint16_t)~(uint16_t)0 : 0;
    (c)->q[21] = _t; }
  /* c51d0: sshll2 v22.4s, v31.8h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[31].i16[4]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[31].i16[5]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[31].i16[6]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[31].i16[7]) << 0);
    (c)->q[22] = _t; }
  /* c51d4: orr v6.16b, v30.16b, v26.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[30].u8[0] | (c)->q[26].u8[0];
    _t.u8[1] = (c)->q[30].u8[1] | (c)->q[26].u8[1];
    _t.u8[2] = (c)->q[30].u8[2] | (c)->q[26].u8[2];
    _t.u8[3] = (c)->q[30].u8[3] | (c)->q[26].u8[3];
    _t.u8[4] = (c)->q[30].u8[4] | (c)->q[26].u8[4];
    _t.u8[5] = (c)->q[30].u8[5] | (c)->q[26].u8[5];
    _t.u8[6] = (c)->q[30].u8[6] | (c)->q[26].u8[6];
    _t.u8[7] = (c)->q[30].u8[7] | (c)->q[26].u8[7];
    _t.u8[8] = (c)->q[30].u8[8] | (c)->q[26].u8[8];
    _t.u8[9] = (c)->q[30].u8[9] | (c)->q[26].u8[9];
    _t.u8[10] = (c)->q[30].u8[10] | (c)->q[26].u8[10];
    _t.u8[11] = (c)->q[30].u8[11] | (c)->q[26].u8[11];
    _t.u8[12] = (c)->q[30].u8[12] | (c)->q[26].u8[12];
    _t.u8[13] = (c)->q[30].u8[13] | (c)->q[26].u8[13];
    _t.u8[14] = (c)->q[30].u8[14] | (c)->q[26].u8[14];
    _t.u8[15] = (c)->q[30].u8[15] | (c)->q[26].u8[15];
    (c)->q[6] = _t; }
  /* c51d8: sshll2 v23.4s, v18.8h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[18].i16[4]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[18].i16[5]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[18].i16[6]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[18].i16[7]) << 0);
    (c)->q[23] = _t; }
  /* c51dc: sshll v18.4s, v18.4h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[18].i16[0]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[18].i16[1]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[18].i16[2]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[18].i16[3]) << 0);
    (c)->q[18] = _t; }
  /* c51e0: sshll v26.2d, v19.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[19].i32[0]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[19].i32[1]) << 0);
    (c)->q[26] = _t; }
  /* c51e4: sshll2 v19.2d, v19.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[19].i32[2]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[19].i32[3]) << 0);
    (c)->q[19] = _t; }
  /* c51e8: cmgt v20.8h, v0.8h, v20.8h */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = ((c)->q[0].i16[0] > (c)->q[20].i16[0]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[1] = ((c)->q[0].i16[1] > (c)->q[20].i16[1]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[2] = ((c)->q[0].i16[2] > (c)->q[20].i16[2]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[3] = ((c)->q[0].i16[3] > (c)->q[20].i16[3]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[4] = ((c)->q[0].i16[4] > (c)->q[20].i16[4]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[5] = ((c)->q[0].i16[5] > (c)->q[20].i16[5]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[6] = ((c)->q[0].i16[6] > (c)->q[20].i16[6]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[7] = ((c)->q[0].i16[7] > (c)->q[20].i16[7]) ? (uint16_t)~(uint16_t)0 : 0;
    (c)->q[20] = _t; }
  /* c51ec: sshll v24.4s, v21.4h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[21].i16[0]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[21].i16[1]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[21].i16[2]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[21].i16[3]) << 0);
    (c)->q[24] = _t; }
  /* c51f0: sshll v25.2d, v22.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[22].i32[0]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[22].i32[1]) << 0);
    (c)->q[25] = _t; }
  /* c51f4: sshll2 v22.2d, v22.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[22].i32[2]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[22].i32[3]) << 0);
    (c)->q[22] = _t; }
  /* c51f8: sshll2 v21.4s, v21.8h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[21].i16[4]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[21].i16[5]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[21].i16[6]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[21].i16[7]) << 0);
    (c)->q[21] = _t; }
  /* c51fc: sshll v27.2d, v23.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[23].i32[0]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[23].i32[1]) << 0);
    (c)->q[27] = _t; }
  /* c5200: sshll v28.2d, v18.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[18].i32[0]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[18].i32[1]) << 0);
    (c)->q[28] = _t; }
  /* c5204: and v19.16b, v19.16b, v10.16b */
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
  /* c5208: ldr q10, [sp, #0x110] */
  arc_q_w(c, 10, arc_ld64(((c)->sp + INT64_C(272))), arc_ld64(((c)->sp + INT64_C(272)) + 8));
  /* c520c: sshll v30.4s, v20.4h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[20].i16[0]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[20].i16[1]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[20].i16[2]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[20].i16[3]) << 0);
    (c)->q[30] = _t; }
  /* c5210: sshll v29.2d, v24.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[24].i32[0]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[24].i32[1]) << 0);
    (c)->q[29] = _t; }
  /* c5214: sshll2 v20.4s, v20.8h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[20].i16[4]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[20].i16[5]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[20].i16[6]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[20].i16[7]) << 0);
    (c)->q[20] = _t; }
  /* c5218: sshll2 v24.2d, v24.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[24].i32[2]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[24].i32[3]) << 0);
    (c)->q[24] = _t; }
  /* c521c: and v22.16b, v22.16b, v10.16b */
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
  /* c5220: ldr q10, [sp, #0x100] */
  arc_q_w(c, 10, arc_ld64(((c)->sp + INT64_C(256))), arc_ld64(((c)->sp + INT64_C(256)) + 8));
  /* c5224: sshll2 v31.2d, v21.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[21].i32[2]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[21].i32[3]) << 0);
    (c)->q[31] = _t; }
  /* c5228: sshll v21.2d, v21.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[21].i32[0]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[21].i32[1]) << 0);
    (c)->q[21] = _t; }
  /* c522c: sshll2 v18.2d, v18.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[18].i32[2]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[18].i32[3]) << 0);
    (c)->q[18] = _t; }
  /* c5230: sshll2 v23.2d, v23.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[23].i32[2]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[23].i32[3]) << 0);
    (c)->q[23] = _t; }
  /* c5234: and v26.16b, v26.16b, v10.16b */
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
  /* c5238: ldr q10, [sp, #0xf0] */
  arc_q_w(c, 10, arc_ld64(((c)->sp + INT64_C(240))), arc_ld64(((c)->sp + INT64_C(240)) + 8));
  /* c523c: and v29.16b, v29.16b, v8.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[29].u8[0] & (c)->q[8].u8[0];
    _t.u8[1] = (c)->q[29].u8[1] & (c)->q[8].u8[1];
    _t.u8[2] = (c)->q[29].u8[2] & (c)->q[8].u8[2];
    _t.u8[3] = (c)->q[29].u8[3] & (c)->q[8].u8[3];
    _t.u8[4] = (c)->q[29].u8[4] & (c)->q[8].u8[4];
    _t.u8[5] = (c)->q[29].u8[5] & (c)->q[8].u8[5];
    _t.u8[6] = (c)->q[29].u8[6] & (c)->q[8].u8[6];
    _t.u8[7] = (c)->q[29].u8[7] & (c)->q[8].u8[7];
    _t.u8[8] = (c)->q[29].u8[8] & (c)->q[8].u8[8];
    _t.u8[9] = (c)->q[29].u8[9] & (c)->q[8].u8[9];
    _t.u8[10] = (c)->q[29].u8[10] & (c)->q[8].u8[10];
    _t.u8[11] = (c)->q[29].u8[11] & (c)->q[8].u8[11];
    _t.u8[12] = (c)->q[29].u8[12] & (c)->q[8].u8[12];
    _t.u8[13] = (c)->q[29].u8[13] & (c)->q[8].u8[13];
    _t.u8[14] = (c)->q[29].u8[14] & (c)->q[8].u8[14];
    _t.u8[15] = (c)->q[29].u8[15] & (c)->q[8].u8[15];
    (c)->q[29] = _t; }
  /* c5240: ldr q8, [x21, #0xb20] */
  arc_q_w(c, 8, arc_ld64((ARC_X_R(c, 21) + INT64_C(2848))), arc_ld64((ARC_X_R(c, 21) + INT64_C(2848)) + 8));
  /* c5244: and v31.16b, v31.16b, v9.16b */
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
  /* c5248: sshll2 v9.2d, v30.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[30].i32[2]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[30].i32[3]) << 0);
    (c)->q[9] = _t; }
  /* c524c: and v25.16b, v25.16b, v10.16b */
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
  /* c5250: ldr q10, [sp, #0xb0] */
  arc_q_w(c, 10, arc_ld64(((c)->sp + INT64_C(176))), arc_ld64(((c)->sp + INT64_C(176)) + 8));
  /* c5254: sshll v30.2d, v30.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[30].i32[0]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[30].i32[1]) << 0);
    (c)->q[30] = _t; }
  /* c5258: and v24.16b, v24.16b, v8.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[24].u8[0] & (c)->q[8].u8[0];
    _t.u8[1] = (c)->q[24].u8[1] & (c)->q[8].u8[1];
    _t.u8[2] = (c)->q[24].u8[2] & (c)->q[8].u8[2];
    _t.u8[3] = (c)->q[24].u8[3] & (c)->q[8].u8[3];
    _t.u8[4] = (c)->q[24].u8[4] & (c)->q[8].u8[4];
    _t.u8[5] = (c)->q[24].u8[5] & (c)->q[8].u8[5];
    _t.u8[6] = (c)->q[24].u8[6] & (c)->q[8].u8[6];
    _t.u8[7] = (c)->q[24].u8[7] & (c)->q[8].u8[7];
    _t.u8[8] = (c)->q[24].u8[8] & (c)->q[8].u8[8];
    _t.u8[9] = (c)->q[24].u8[9] & (c)->q[8].u8[9];
    _t.u8[10] = (c)->q[24].u8[10] & (c)->q[8].u8[10];
    _t.u8[11] = (c)->q[24].u8[11] & (c)->q[8].u8[11];
    _t.u8[12] = (c)->q[24].u8[12] & (c)->q[8].u8[12];
    _t.u8[13] = (c)->q[24].u8[13] & (c)->q[8].u8[13];
    _t.u8[14] = (c)->q[24].u8[14] & (c)->q[8].u8[14];
    _t.u8[15] = (c)->q[24].u8[15] & (c)->q[8].u8[15];
    (c)->q[24] = _t; }
  /* c525c: sshll2 v8.2d, v20.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[20].i32[2]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[20].i32[3]) << 0);
    (c)->q[8] = _t; }
  /* c5260: sshll v20.2d, v20.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[20].i32[0]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[20].i32[1]) << 0);
    (c)->q[20] = _t; }
  /* c5264: and v27.16b, v27.16b, v10.16b */
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
  /* c5268: ldr q10, [sp, #0x80] */
  arc_q_w(c, 10, arc_ld64(((c)->sp + INT64_C(128))), arc_ld64(((c)->sp + INT64_C(128)) + 8));
  /* c526c: and v8.16b, v8.16b, v10.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[8].u8[0] & (c)->q[10].u8[0];
    _t.u8[1] = (c)->q[8].u8[1] & (c)->q[10].u8[1];
    _t.u8[2] = (c)->q[8].u8[2] & (c)->q[10].u8[2];
    _t.u8[3] = (c)->q[8].u8[3] & (c)->q[10].u8[3];
    _t.u8[4] = (c)->q[8].u8[4] & (c)->q[10].u8[4];
    _t.u8[5] = (c)->q[8].u8[5] & (c)->q[10].u8[5];
    _t.u8[6] = (c)->q[8].u8[6] & (c)->q[10].u8[6];
    _t.u8[7] = (c)->q[8].u8[7] & (c)->q[10].u8[7];
    _t.u8[8] = (c)->q[8].u8[8] & (c)->q[10].u8[8];
    _t.u8[9] = (c)->q[8].u8[9] & (c)->q[10].u8[9];
    _t.u8[10] = (c)->q[8].u8[10] & (c)->q[10].u8[10];
    _t.u8[11] = (c)->q[8].u8[11] & (c)->q[10].u8[11];
    _t.u8[12] = (c)->q[8].u8[12] & (c)->q[10].u8[12];
    _t.u8[13] = (c)->q[8].u8[13] & (c)->q[10].u8[13];
    _t.u8[14] = (c)->q[8].u8[14] & (c)->q[10].u8[14];
    _t.u8[15] = (c)->q[8].u8[15] & (c)->q[10].u8[15];
    (c)->q[8] = _t; }
  /* c5270: ldr q10, [sp, #0x70] */
  arc_q_w(c, 10, arc_ld64(((c)->sp + INT64_C(112))), arc_ld64(((c)->sp + INT64_C(112)) + 8));
  /* c5274: and v9.16b, v9.16b, v10.16b */
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
  /* c5278: ldr q10, [sp, #0xa0] */
  arc_q_w(c, 10, arc_ld64(((c)->sp + INT64_C(160))), arc_ld64(((c)->sp + INT64_C(160)) + 8));
  /* c527c: and v20.16b, v20.16b, v10.16b */
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
  /* c5280: ldr q10, [sp, #0x90] */
  arc_q_w(c, 10, arc_ld64(((c)->sp + INT64_C(144))), arc_ld64(((c)->sp + INT64_C(144)) + 8));
  /* c5284: orr v17.16b, v9.16b, v19.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[9].u8[0] | (c)->q[19].u8[0];
    _t.u8[1] = (c)->q[9].u8[1] | (c)->q[19].u8[1];
    _t.u8[2] = (c)->q[9].u8[2] | (c)->q[19].u8[2];
    _t.u8[3] = (c)->q[9].u8[3] | (c)->q[19].u8[3];
    _t.u8[4] = (c)->q[9].u8[4] | (c)->q[19].u8[4];
    _t.u8[5] = (c)->q[9].u8[5] | (c)->q[19].u8[5];
    _t.u8[6] = (c)->q[9].u8[6] | (c)->q[19].u8[6];
    _t.u8[7] = (c)->q[9].u8[7] | (c)->q[19].u8[7];
    _t.u8[8] = (c)->q[9].u8[8] | (c)->q[19].u8[8];
    _t.u8[9] = (c)->q[9].u8[9] | (c)->q[19].u8[9];
    _t.u8[10] = (c)->q[9].u8[10] | (c)->q[19].u8[10];
    _t.u8[11] = (c)->q[9].u8[11] | (c)->q[19].u8[11];
    _t.u8[12] = (c)->q[9].u8[12] | (c)->q[19].u8[12];
    _t.u8[13] = (c)->q[9].u8[13] | (c)->q[19].u8[13];
    _t.u8[14] = (c)->q[9].u8[14] | (c)->q[19].u8[14];
    _t.u8[15] = (c)->q[9].u8[15] | (c)->q[19].u8[15];
    (c)->q[17] = _t; }
  /* c5288: orr v19.16b, v8.16b, v22.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[8].u8[0] | (c)->q[22].u8[0];
    _t.u8[1] = (c)->q[8].u8[1] | (c)->q[22].u8[1];
    _t.u8[2] = (c)->q[8].u8[2] | (c)->q[22].u8[2];
    _t.u8[3] = (c)->q[8].u8[3] | (c)->q[22].u8[3];
    _t.u8[4] = (c)->q[8].u8[4] | (c)->q[22].u8[4];
    _t.u8[5] = (c)->q[8].u8[5] | (c)->q[22].u8[5];
    _t.u8[6] = (c)->q[8].u8[6] | (c)->q[22].u8[6];
    _t.u8[7] = (c)->q[8].u8[7] | (c)->q[22].u8[7];
    _t.u8[8] = (c)->q[8].u8[8] | (c)->q[22].u8[8];
    _t.u8[9] = (c)->q[8].u8[9] | (c)->q[22].u8[9];
    _t.u8[10] = (c)->q[8].u8[10] | (c)->q[22].u8[10];
    _t.u8[11] = (c)->q[8].u8[11] | (c)->q[22].u8[11];
    _t.u8[12] = (c)->q[8].u8[12] | (c)->q[22].u8[12];
    _t.u8[13] = (c)->q[8].u8[13] | (c)->q[22].u8[13];
    _t.u8[14] = (c)->q[8].u8[14] | (c)->q[22].u8[14];
    _t.u8[15] = (c)->q[8].u8[15] | (c)->q[22].u8[15];
    (c)->q[19] = _t; }
  /* c528c: and v30.16b, v30.16b, v10.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[30].u8[0] & (c)->q[10].u8[0];
    _t.u8[1] = (c)->q[30].u8[1] & (c)->q[10].u8[1];
    _t.u8[2] = (c)->q[30].u8[2] & (c)->q[10].u8[2];
    _t.u8[3] = (c)->q[30].u8[3] & (c)->q[10].u8[3];
    _t.u8[4] = (c)->q[30].u8[4] & (c)->q[10].u8[4];
    _t.u8[5] = (c)->q[30].u8[5] & (c)->q[10].u8[5];
    _t.u8[6] = (c)->q[30].u8[6] & (c)->q[10].u8[6];
    _t.u8[7] = (c)->q[30].u8[7] & (c)->q[10].u8[7];
    _t.u8[8] = (c)->q[30].u8[8] & (c)->q[10].u8[8];
    _t.u8[9] = (c)->q[30].u8[9] & (c)->q[10].u8[9];
    _t.u8[10] = (c)->q[30].u8[10] & (c)->q[10].u8[10];
    _t.u8[11] = (c)->q[30].u8[11] & (c)->q[10].u8[11];
    _t.u8[12] = (c)->q[30].u8[12] & (c)->q[10].u8[12];
    _t.u8[13] = (c)->q[30].u8[13] & (c)->q[10].u8[13];
    _t.u8[14] = (c)->q[30].u8[14] & (c)->q[10].u8[14];
    _t.u8[15] = (c)->q[30].u8[15] & (c)->q[10].u8[15];
    (c)->q[30] = _t; }
  /* c5290: ldr q10, [sp, #0x60] */
  arc_q_w(c, 10, arc_ld64(((c)->sp + INT64_C(96))), arc_ld64(((c)->sp + INT64_C(96)) + 8));
  /* c5294: orr v20.16b, v20.16b, v25.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[20].u8[0] | (c)->q[25].u8[0];
    _t.u8[1] = (c)->q[20].u8[1] | (c)->q[25].u8[1];
    _t.u8[2] = (c)->q[20].u8[2] | (c)->q[25].u8[2];
    _t.u8[3] = (c)->q[20].u8[3] | (c)->q[25].u8[3];
    _t.u8[4] = (c)->q[20].u8[4] | (c)->q[25].u8[4];
    _t.u8[5] = (c)->q[20].u8[5] | (c)->q[25].u8[5];
    _t.u8[6] = (c)->q[20].u8[6] | (c)->q[25].u8[6];
    _t.u8[7] = (c)->q[20].u8[7] | (c)->q[25].u8[7];
    _t.u8[8] = (c)->q[20].u8[8] | (c)->q[25].u8[8];
    _t.u8[9] = (c)->q[20].u8[9] | (c)->q[25].u8[9];
    _t.u8[10] = (c)->q[20].u8[10] | (c)->q[25].u8[10];
    _t.u8[11] = (c)->q[20].u8[11] | (c)->q[25].u8[11];
    _t.u8[12] = (c)->q[20].u8[12] | (c)->q[25].u8[12];
    _t.u8[13] = (c)->q[20].u8[13] | (c)->q[25].u8[13];
    _t.u8[14] = (c)->q[20].u8[14] | (c)->q[25].u8[14];
    _t.u8[15] = (c)->q[20].u8[15] | (c)->q[25].u8[15];
    (c)->q[20] = _t; }
  /* c5298: and v21.16b, v21.16b, v10.16b */
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
  /* c529c: ldr q10, [sp, #0xe0] */
  arc_q_w(c, 10, arc_ld64(((c)->sp + INT64_C(224))), arc_ld64(((c)->sp + INT64_C(224)) + 8));
  /* c52a0: orr v2.16b, v17.16b, v2.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[17].u8[0] | (c)->q[2].u8[0];
    _t.u8[1] = (c)->q[17].u8[1] | (c)->q[2].u8[1];
    _t.u8[2] = (c)->q[17].u8[2] | (c)->q[2].u8[2];
    _t.u8[3] = (c)->q[17].u8[3] | (c)->q[2].u8[3];
    _t.u8[4] = (c)->q[17].u8[4] | (c)->q[2].u8[4];
    _t.u8[5] = (c)->q[17].u8[5] | (c)->q[2].u8[5];
    _t.u8[6] = (c)->q[17].u8[6] | (c)->q[2].u8[6];
    _t.u8[7] = (c)->q[17].u8[7] | (c)->q[2].u8[7];
    _t.u8[8] = (c)->q[17].u8[8] | (c)->q[2].u8[8];
    _t.u8[9] = (c)->q[17].u8[9] | (c)->q[2].u8[9];
    _t.u8[10] = (c)->q[17].u8[10] | (c)->q[2].u8[10];
    _t.u8[11] = (c)->q[17].u8[11] | (c)->q[2].u8[11];
    _t.u8[12] = (c)->q[17].u8[12] | (c)->q[2].u8[12];
    _t.u8[13] = (c)->q[17].u8[13] | (c)->q[2].u8[13];
    _t.u8[14] = (c)->q[17].u8[14] | (c)->q[2].u8[14];
    _t.u8[15] = (c)->q[17].u8[15] | (c)->q[2].u8[15];
    (c)->q[2] = _t; }
  /* c52a4: orr v22.16b, v30.16b, v26.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[30].u8[0] | (c)->q[26].u8[0];
    _t.u8[1] = (c)->q[30].u8[1] | (c)->q[26].u8[1];
    _t.u8[2] = (c)->q[30].u8[2] | (c)->q[26].u8[2];
    _t.u8[3] = (c)->q[30].u8[3] | (c)->q[26].u8[3];
    _t.u8[4] = (c)->q[30].u8[4] | (c)->q[26].u8[4];
    _t.u8[5] = (c)->q[30].u8[5] | (c)->q[26].u8[5];
    _t.u8[6] = (c)->q[30].u8[6] | (c)->q[26].u8[6];
    _t.u8[7] = (c)->q[30].u8[7] | (c)->q[26].u8[7];
    _t.u8[8] = (c)->q[30].u8[8] | (c)->q[26].u8[8];
    _t.u8[9] = (c)->q[30].u8[9] | (c)->q[26].u8[9];
    _t.u8[10] = (c)->q[30].u8[10] | (c)->q[26].u8[10];
    _t.u8[11] = (c)->q[30].u8[11] | (c)->q[26].u8[11];
    _t.u8[12] = (c)->q[30].u8[12] | (c)->q[26].u8[12];
    _t.u8[13] = (c)->q[30].u8[13] | (c)->q[26].u8[13];
    _t.u8[14] = (c)->q[30].u8[14] | (c)->q[26].u8[14];
    _t.u8[15] = (c)->q[30].u8[15] | (c)->q[26].u8[15];
    (c)->q[22] = _t; }
  /* c52a8: orr v3.16b, v19.16b, v3.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[19].u8[0] | (c)->q[3].u8[0];
    _t.u8[1] = (c)->q[19].u8[1] | (c)->q[3].u8[1];
    _t.u8[2] = (c)->q[19].u8[2] | (c)->q[3].u8[2];
    _t.u8[3] = (c)->q[19].u8[3] | (c)->q[3].u8[3];
    _t.u8[4] = (c)->q[19].u8[4] | (c)->q[3].u8[4];
    _t.u8[5] = (c)->q[19].u8[5] | (c)->q[3].u8[5];
    _t.u8[6] = (c)->q[19].u8[6] | (c)->q[3].u8[6];
    _t.u8[7] = (c)->q[19].u8[7] | (c)->q[3].u8[7];
    _t.u8[8] = (c)->q[19].u8[8] | (c)->q[3].u8[8];
    _t.u8[9] = (c)->q[19].u8[9] | (c)->q[3].u8[9];
    _t.u8[10] = (c)->q[19].u8[10] | (c)->q[3].u8[10];
    _t.u8[11] = (c)->q[19].u8[11] | (c)->q[3].u8[11];
    _t.u8[12] = (c)->q[19].u8[12] | (c)->q[3].u8[12];
    _t.u8[13] = (c)->q[19].u8[13] | (c)->q[3].u8[13];
    _t.u8[14] = (c)->q[19].u8[14] | (c)->q[3].u8[14];
    _t.u8[15] = (c)->q[19].u8[15] | (c)->q[3].u8[15];
    (c)->q[3] = _t; }
  /* c52ac: and v18.16b, v18.16b, v10.16b */
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
  /* c52b0: ldr q10, [sp, #0xd0] */
  arc_q_w(c, 10, arc_ld64(((c)->sp + INT64_C(208))), arc_ld64(((c)->sp + INT64_C(208)) + 8));
  /* c52b4: orr v6.16b, v20.16b, v6.16b */
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
  /* c52b8: orr v21.16b, v21.16b, v27.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[21].u8[0] | (c)->q[27].u8[0];
    _t.u8[1] = (c)->q[21].u8[1] | (c)->q[27].u8[1];
    _t.u8[2] = (c)->q[21].u8[2] | (c)->q[27].u8[2];
    _t.u8[3] = (c)->q[21].u8[3] | (c)->q[27].u8[3];
    _t.u8[4] = (c)->q[21].u8[4] | (c)->q[27].u8[4];
    _t.u8[5] = (c)->q[21].u8[5] | (c)->q[27].u8[5];
    _t.u8[6] = (c)->q[21].u8[6] | (c)->q[27].u8[6];
    _t.u8[7] = (c)->q[21].u8[7] | (c)->q[27].u8[7];
    _t.u8[8] = (c)->q[21].u8[8] | (c)->q[27].u8[8];
    _t.u8[9] = (c)->q[21].u8[9] | (c)->q[27].u8[9];
    _t.u8[10] = (c)->q[21].u8[10] | (c)->q[27].u8[10];
    _t.u8[11] = (c)->q[21].u8[11] | (c)->q[27].u8[11];
    _t.u8[12] = (c)->q[21].u8[12] | (c)->q[27].u8[12];
    _t.u8[13] = (c)->q[21].u8[13] | (c)->q[27].u8[13];
    _t.u8[14] = (c)->q[21].u8[14] | (c)->q[27].u8[14];
    _t.u8[15] = (c)->q[21].u8[15] | (c)->q[27].u8[15];
    (c)->q[21] = _t; }
  /* c52bc: and v23.16b, v23.16b, v10.16b */
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
  /* c52c0: ldr q10, [sp, #0xc0] */
  arc_q_w(c, 10, arc_ld64(((c)->sp + INT64_C(192))), arc_ld64(((c)->sp + INT64_C(192)) + 8));
  /* c52c4: orr v4.16b, v22.16b, v4.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[22].u8[0] | (c)->q[4].u8[0];
    _t.u8[1] = (c)->q[22].u8[1] | (c)->q[4].u8[1];
    _t.u8[2] = (c)->q[22].u8[2] | (c)->q[4].u8[2];
    _t.u8[3] = (c)->q[22].u8[3] | (c)->q[4].u8[3];
    _t.u8[4] = (c)->q[22].u8[4] | (c)->q[4].u8[4];
    _t.u8[5] = (c)->q[22].u8[5] | (c)->q[4].u8[5];
    _t.u8[6] = (c)->q[22].u8[6] | (c)->q[4].u8[6];
    _t.u8[7] = (c)->q[22].u8[7] | (c)->q[4].u8[7];
    _t.u8[8] = (c)->q[22].u8[8] | (c)->q[4].u8[8];
    _t.u8[9] = (c)->q[22].u8[9] | (c)->q[4].u8[9];
    _t.u8[10] = (c)->q[22].u8[10] | (c)->q[4].u8[10];
    _t.u8[11] = (c)->q[22].u8[11] | (c)->q[4].u8[11];
    _t.u8[12] = (c)->q[22].u8[12] | (c)->q[4].u8[12];
    _t.u8[13] = (c)->q[22].u8[13] | (c)->q[4].u8[13];
    _t.u8[14] = (c)->q[22].u8[14] | (c)->q[4].u8[14];
    _t.u8[15] = (c)->q[22].u8[15] | (c)->q[4].u8[15];
    (c)->q[4] = _t; }
  /* c52c8: orr v18.16b, v24.16b, v18.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[24].u8[0] | (c)->q[18].u8[0];
    _t.u8[1] = (c)->q[24].u8[1] | (c)->q[18].u8[1];
    _t.u8[2] = (c)->q[24].u8[2] | (c)->q[18].u8[2];
    _t.u8[3] = (c)->q[24].u8[3] | (c)->q[18].u8[3];
    _t.u8[4] = (c)->q[24].u8[4] | (c)->q[18].u8[4];
    _t.u8[5] = (c)->q[24].u8[5] | (c)->q[18].u8[5];
    _t.u8[6] = (c)->q[24].u8[6] | (c)->q[18].u8[6];
    _t.u8[7] = (c)->q[24].u8[7] | (c)->q[18].u8[7];
    _t.u8[8] = (c)->q[24].u8[8] | (c)->q[18].u8[8];
    _t.u8[9] = (c)->q[24].u8[9] | (c)->q[18].u8[9];
    _t.u8[10] = (c)->q[24].u8[10] | (c)->q[18].u8[10];
    _t.u8[11] = (c)->q[24].u8[11] | (c)->q[18].u8[11];
    _t.u8[12] = (c)->q[24].u8[12] | (c)->q[18].u8[12];
    _t.u8[13] = (c)->q[24].u8[13] | (c)->q[18].u8[13];
    _t.u8[14] = (c)->q[24].u8[14] | (c)->q[18].u8[14];
    _t.u8[15] = (c)->q[24].u8[15] | (c)->q[18].u8[15];
    (c)->q[18] = _t; }
  /* c52cc: and v28.16b, v28.16b, v10.16b */
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
  /* c52d0: orr v1.16b, v21.16b, v1.16b */
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
  /* c52d4: orr v23.16b, v31.16b, v23.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[31].u8[0] | (c)->q[23].u8[0];
    _t.u8[1] = (c)->q[31].u8[1] | (c)->q[23].u8[1];
    _t.u8[2] = (c)->q[31].u8[2] | (c)->q[23].u8[2];
    _t.u8[3] = (c)->q[31].u8[3] | (c)->q[23].u8[3];
    _t.u8[4] = (c)->q[31].u8[4] | (c)->q[23].u8[4];
    _t.u8[5] = (c)->q[31].u8[5] | (c)->q[23].u8[5];
    _t.u8[6] = (c)->q[31].u8[6] | (c)->q[23].u8[6];
    _t.u8[7] = (c)->q[31].u8[7] | (c)->q[23].u8[7];
    _t.u8[8] = (c)->q[31].u8[8] | (c)->q[23].u8[8];
    _t.u8[9] = (c)->q[31].u8[9] | (c)->q[23].u8[9];
    _t.u8[10] = (c)->q[31].u8[10] | (c)->q[23].u8[10];
    _t.u8[11] = (c)->q[31].u8[11] | (c)->q[23].u8[11];
    _t.u8[12] = (c)->q[31].u8[12] | (c)->q[23].u8[12];
    _t.u8[13] = (c)->q[31].u8[13] | (c)->q[23].u8[13];
    _t.u8[14] = (c)->q[31].u8[14] | (c)->q[23].u8[14];
    _t.u8[15] = (c)->q[31].u8[15] | (c)->q[23].u8[15];
    (c)->q[23] = _t; }
  /* c52d8: orr v5.16b, v18.16b, v5.16b */
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
  /* c52dc: orr v24.16b, v29.16b, v28.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[29].u8[0] | (c)->q[28].u8[0];
    _t.u8[1] = (c)->q[29].u8[1] | (c)->q[28].u8[1];
    _t.u8[2] = (c)->q[29].u8[2] | (c)->q[28].u8[2];
    _t.u8[3] = (c)->q[29].u8[3] | (c)->q[28].u8[3];
    _t.u8[4] = (c)->q[29].u8[4] | (c)->q[28].u8[4];
    _t.u8[5] = (c)->q[29].u8[5] | (c)->q[28].u8[5];
    _t.u8[6] = (c)->q[29].u8[6] | (c)->q[28].u8[6];
    _t.u8[7] = (c)->q[29].u8[7] | (c)->q[28].u8[7];
    _t.u8[8] = (c)->q[29].u8[8] | (c)->q[28].u8[8];
    _t.u8[9] = (c)->q[29].u8[9] | (c)->q[28].u8[9];
    _t.u8[10] = (c)->q[29].u8[10] | (c)->q[28].u8[10];
    _t.u8[11] = (c)->q[29].u8[11] | (c)->q[28].u8[11];
    _t.u8[12] = (c)->q[29].u8[12] | (c)->q[28].u8[12];
    _t.u8[13] = (c)->q[29].u8[13] | (c)->q[28].u8[13];
    _t.u8[14] = (c)->q[29].u8[14] | (c)->q[28].u8[14];
    _t.u8[15] = (c)->q[29].u8[15] | (c)->q[28].u8[15];
    (c)->q[24] = _t; }
  /* c52e0: orr v1.16b, v1.16b, v6.16b */
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
  /* c52e4: orr v7.16b, v23.16b, v7.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[23].u8[0] | (c)->q[7].u8[0];
    _t.u8[1] = (c)->q[23].u8[1] | (c)->q[7].u8[1];
    _t.u8[2] = (c)->q[23].u8[2] | (c)->q[7].u8[2];
    _t.u8[3] = (c)->q[23].u8[3] | (c)->q[7].u8[3];
    _t.u8[4] = (c)->q[23].u8[4] | (c)->q[7].u8[4];
    _t.u8[5] = (c)->q[23].u8[5] | (c)->q[7].u8[5];
    _t.u8[6] = (c)->q[23].u8[6] | (c)->q[7].u8[6];
    _t.u8[7] = (c)->q[23].u8[7] | (c)->q[7].u8[7];
    _t.u8[8] = (c)->q[23].u8[8] | (c)->q[7].u8[8];
    _t.u8[9] = (c)->q[23].u8[9] | (c)->q[7].u8[9];
    _t.u8[10] = (c)->q[23].u8[10] | (c)->q[7].u8[10];
    _t.u8[11] = (c)->q[23].u8[11] | (c)->q[7].u8[11];
    _t.u8[12] = (c)->q[23].u8[12] | (c)->q[7].u8[12];
    _t.u8[13] = (c)->q[23].u8[13] | (c)->q[7].u8[13];
    _t.u8[14] = (c)->q[23].u8[14] | (c)->q[7].u8[14];
    _t.u8[15] = (c)->q[23].u8[15] | (c)->q[7].u8[15];
    (c)->q[7] = _t; }
  /* c52e8: orr v2.16b, v5.16b, v2.16b */
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
  /* c52ec: orr v16.16b, v24.16b, v16.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[24].u8[0] | (c)->q[16].u8[0];
    _t.u8[1] = (c)->q[24].u8[1] | (c)->q[16].u8[1];
    _t.u8[2] = (c)->q[24].u8[2] | (c)->q[16].u8[2];
    _t.u8[3] = (c)->q[24].u8[3] | (c)->q[16].u8[3];
    _t.u8[4] = (c)->q[24].u8[4] | (c)->q[16].u8[4];
    _t.u8[5] = (c)->q[24].u8[5] | (c)->q[16].u8[5];
    _t.u8[6] = (c)->q[24].u8[6] | (c)->q[16].u8[6];
    _t.u8[7] = (c)->q[24].u8[7] | (c)->q[16].u8[7];
    _t.u8[8] = (c)->q[24].u8[8] | (c)->q[16].u8[8];
    _t.u8[9] = (c)->q[24].u8[9] | (c)->q[16].u8[9];
    _t.u8[10] = (c)->q[24].u8[10] | (c)->q[16].u8[10];
    _t.u8[11] = (c)->q[24].u8[11] | (c)->q[16].u8[11];
    _t.u8[12] = (c)->q[24].u8[12] | (c)->q[16].u8[12];
    _t.u8[13] = (c)->q[24].u8[13] | (c)->q[16].u8[13];
    _t.u8[14] = (c)->q[24].u8[14] | (c)->q[16].u8[14];
    _t.u8[15] = (c)->q[24].u8[15] | (c)->q[16].u8[15];
    (c)->q[16] = _t; }
  /* c52f0: orr v3.16b, v7.16b, v3.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[7].u8[0] | (c)->q[3].u8[0];
    _t.u8[1] = (c)->q[7].u8[1] | (c)->q[3].u8[1];
    _t.u8[2] = (c)->q[7].u8[2] | (c)->q[3].u8[2];
    _t.u8[3] = (c)->q[7].u8[3] | (c)->q[3].u8[3];
    _t.u8[4] = (c)->q[7].u8[4] | (c)->q[3].u8[4];
    _t.u8[5] = (c)->q[7].u8[5] | (c)->q[3].u8[5];
    _t.u8[6] = (c)->q[7].u8[6] | (c)->q[3].u8[6];
    _t.u8[7] = (c)->q[7].u8[7] | (c)->q[3].u8[7];
    _t.u8[8] = (c)->q[7].u8[8] | (c)->q[3].u8[8];
    _t.u8[9] = (c)->q[7].u8[9] | (c)->q[3].u8[9];
    _t.u8[10] = (c)->q[7].u8[10] | (c)->q[3].u8[10];
    _t.u8[11] = (c)->q[7].u8[11] | (c)->q[3].u8[11];
    _t.u8[12] = (c)->q[7].u8[12] | (c)->q[3].u8[12];
    _t.u8[13] = (c)->q[7].u8[13] | (c)->q[3].u8[13];
    _t.u8[14] = (c)->q[7].u8[14] | (c)->q[3].u8[14];
    _t.u8[15] = (c)->q[7].u8[15] | (c)->q[3].u8[15];
    (c)->q[3] = _t; }
  /* c52f4: orr v4.16b, v16.16b, v4.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[16].u8[0] | (c)->q[4].u8[0];
    _t.u8[1] = (c)->q[16].u8[1] | (c)->q[4].u8[1];
    _t.u8[2] = (c)->q[16].u8[2] | (c)->q[4].u8[2];
    _t.u8[3] = (c)->q[16].u8[3] | (c)->q[4].u8[3];
    _t.u8[4] = (c)->q[16].u8[4] | (c)->q[4].u8[4];
    _t.u8[5] = (c)->q[16].u8[5] | (c)->q[4].u8[5];
    _t.u8[6] = (c)->q[16].u8[6] | (c)->q[4].u8[6];
    _t.u8[7] = (c)->q[16].u8[7] | (c)->q[4].u8[7];
    _t.u8[8] = (c)->q[16].u8[8] | (c)->q[4].u8[8];
    _t.u8[9] = (c)->q[16].u8[9] | (c)->q[4].u8[9];
    _t.u8[10] = (c)->q[16].u8[10] | (c)->q[4].u8[10];
    _t.u8[11] = (c)->q[16].u8[11] | (c)->q[4].u8[11];
    _t.u8[12] = (c)->q[16].u8[12] | (c)->q[4].u8[12];
    _t.u8[13] = (c)->q[16].u8[13] | (c)->q[4].u8[13];
    _t.u8[14] = (c)->q[16].u8[14] | (c)->q[4].u8[14];
    _t.u8[15] = (c)->q[16].u8[15] | (c)->q[4].u8[15];
    (c)->q[4] = _t; }
  /* c52f8: orr v2.16b, v2.16b, v3.16b */
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
  /* c52fc: orr v1.16b, v4.16b, v1.16b */
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
  /* c5300: orr v1.16b, v1.16b, v2.16b */
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
  /* c5304: ext v2.16b, v1.16b, v1.16b, #8 */
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
  /* c5308: orr v1.8b, v1.8b, v2.8b */
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
  /* c530c: fmov x14, d1 */
  ARC_X_W(c, 14, ARC_DU_R(c, 1));
  /* c5310: cbz x13, #0xc4dd0 */
  if ((ARC_X_R(c, 13)) == 0) goto L_c4dd0;
L_c5314:;
  /* c5314: cbz x14, #0xc4dd0 */
  if ((ARC_X_R(c, 14)) == 0) goto L_c4dd0;
L_c5318:;
  /* c5318: rbit x15, x14 */
  ARC_X_W(c, 15, arc_rbit64(ARC_X_R(c, 14)));
  /* c531c: rbit x16, x13 */
  ARC_X_W(c, 16, arc_rbit64(ARC_X_R(c, 13)));
  /* c5320: sub x17, x14, #1 */
  ARC_X_W(c, 17, (ARC_X_R(c, 14) - UINT64_C(1)));
  /* c5324: sub x3, x13, #1 */
  ARC_X_W(c, 3, (ARC_X_R(c, 13) - UINT64_C(1)));
  /* c5328: and x14, x17, x14 */
  ARC_X_W(c, 14, (ARC_X_R(c, 17) & ARC_X_R(c, 14)));
  /* c532c: clz x15, x15 */
  ARC_X_W(c, 15, arc_clz64(ARC_X_R(c, 15)));
  /* c5330: clz x16, x16 */
  ARC_X_W(c, 16, arc_clz64(ARC_X_R(c, 16)));
  /* c5334: and x13, x3, x13 */
  ARC_X_W(c, 13, (ARC_X_R(c, 3) & ARC_X_R(c, 13)));
  /* c5338: sub x15, x12, x15, lsl #1 */
  ARC_X_W(c, 15, (ARC_X_R(c, 12) - ((uint64_t)(ARC_X_R(c, 15)) << 1)));
  /* c533c: ldrh w0, [x11, x16, lsl #1] */
  ARC_W_W(c, 0, arc_ld16((ARC_X_R(c, 11) + ((uint64_t)(ARC_X_R(c, 16)) << 1))));
  /* c5340: ldrh w1, [x15] */
  ARC_W_W(c, 1, arc_ld16(ARC_X_R(c, 15)));
  /* c5344: strh w1, [x11, x16, lsl #1] */
  arc_st16((ARC_X_R(c, 11) + ((uint64_t)(ARC_X_R(c, 16)) << 1)), ARC_W_R(c, 1));
  /* c5348: strh w0, [x15] */
  arc_st16(ARC_X_R(c, 15), ARC_W_R(c, 0));
  /* c534c: cbz x14, #0xc4dd0 */
  if ((ARC_X_R(c, 14)) == 0) goto L_c4dd0;
  /* c5350: cbnz x13, #0xc5318 */
  if ((ARC_X_R(c, 13)) != 0) goto L_c5318;
  /* c5354: b #0xc4dd0 */
  goto L_c4dd0;
L_c5358:;
  /* c5358: asr x15, x13, #1 */
  ARC_X_W(c, 15, ((uint64_t)((int64_t)(ARC_X_R(c, 13)) >> ((UINT64_C(1)) & 63))));
  /* c535c: mov x14, xzr */
  ARC_X_W(c, 14, ARC_X_R(c, 31));
  /* c5360: mov w16, #1 */
  ARC_W_W(c, 16, UINT64_C(1));
  /* c5364: b #0xc538c */
  goto L_c538c;
L_c5368:;
  /* c5368: asr x15, x15, #1 */
  ARC_X_W(c, 15, ((uint64_t)((int64_t)(ARC_X_R(c, 15)) >> ((UINT64_C(1)) & 63))));
  /* c536c: orr x17, x14, x13 */
  ARC_X_W(c, 17, (ARC_X_R(c, 14) | ARC_X_R(c, 13)));
  /* c5370: cbz x17, #0xc538c */
  if ((ARC_X_R(c, 17)) == 0) goto L_c538c;
  /* c5374: sub x15, x15, #0x3f */
  ARC_X_W(c, 15, (ARC_X_R(c, 15) - UINT64_C(63)));
  /* c5378: mov w0, #0x40 */
  ARC_W_W(c, 0, UINT64_C(64));
  /* c537c: mov w17, #0x40 */
  ARC_W_W(c, 17, UINT64_C(64));
  /* c5380: cbz x13, #0xc539c */
  if ((ARC_X_R(c, 13)) == 0) goto L_c539c;
  /* c5384: cbnz w16, #0xc5608 */
  if ((ARC_W_R(c, 16)) != 0) goto L_c5608;
  /* c5388: b #0xc58b0 */
  goto L_c58b0;
L_c538c:;
  /* c538c: add x13, x15, #1 */
  ARC_X_W(c, 13, (ARC_X_R(c, 15) + UINT64_C(1)));
  /* c5390: add x15, x13, x13, lsr #63 */
  ARC_X_W(c, 15, (ARC_X_R(c, 13) + ((uint64_t)(ARC_X_R(c, 13)) >> 63)));
  /* c5394: asr x15, x15, #1 */
  ARC_X_W(c, 15, ((uint64_t)((int64_t)(ARC_X_R(c, 15)) >> ((UINT64_C(1)) & 63))));
  /* c5398: sub x0, x13, x15 */
  ARC_X_W(c, 0, (ARC_X_R(c, 13) - ARC_X_R(c, 15)));
L_c539c:;
  /* c539c: cmp x15, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 15), UINT64_C(1));
  /* c53a0: b.lt #0xc53bc */
  if (ARC_COND(c, 11)) goto L_c53bc;
  /* c53a4: cmp x15, #4 */
  (void)arc_sub64(c, ARC_X_R(c, 15), UINT64_C(4));
  /* c53a8: b.hs #0xc53c4 */
  if (ARC_COND(c, 2)) goto L_c53c4;
  /* c53ac: mov x17, xzr */
  ARC_X_W(c, 17, ARC_X_R(c, 31));
  /* c53b0: mov x13, xzr */
  ARC_X_W(c, 13, ARC_X_R(c, 31));
  /* c53b4: mov x1, x11 */
  ARC_X_W(c, 1, ARC_X_R(c, 11));
  /* c53b8: b #0xc55dc */
  goto L_c55dc;
L_c53bc:;
  /* c53bc: mov x13, xzr */
  ARC_X_W(c, 13, ARC_X_R(c, 31));
  /* c53c0: b #0xc55fc */
  goto L_c55fc;
L_c53c4:;
  /* c53c4: cmp x15, #0x10 */
  (void)arc_sub64(c, ARC_X_R(c, 15), UINT64_C(16));
  /* c53c8: b.hs #0xc53d8 */
  if (ARC_COND(c, 2)) goto L_c53d8;
  /* c53cc: mov x17, xzr */
  ARC_X_W(c, 17, ARC_X_R(c, 31));
  /* c53d0: mov x13, xzr */
  ARC_X_W(c, 13, ARC_X_R(c, 31));
  /* c53d4: b #0xc5534 */
  goto L_c5534;
L_c53d8:;
  /* c53d8: adrp x13, #0x52000 */
  ARC_X_W(c, 13, (arc_image_bases[1] + UINT64_C(335872)));
  /* c53dc: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* c53e0: movi v2.2d, #0000000000000000 */
  arc_v_clear(c, 2);
  /* c53e4: ldr q16, [x13, #0xcc0] */
  arc_q_w(c, 16, arc_ld64((ARC_X_R(c, 13) + INT64_C(3264))), arc_ld64((ARC_X_R(c, 13) + INT64_C(3264)) + 8));
  /* c53e8: adrp x13, #0x52000 */
  ARC_X_W(c, 13, (arc_image_bases[1] + UINT64_C(335872)));
  /* c53ec: movi v1.2d, #0000000000000000 */
  arc_v_clear(c, 1);
  /* c53f0: movi v3.2d, #0000000000000000 */
  arc_v_clear(c, 3);
  /* c53f4: movi v4.2d, #0000000000000000 */
  arc_v_clear(c, 4);
  /* c53f8: movi v6.2d, #0000000000000000 */
  arc_v_clear(c, 6);
  /* c53fc: movi v5.2d, #0000000000000000 */
  arc_v_clear(c, 5);
  /* c5400: movi v7.2d, #0000000000000000 */
  arc_v_clear(c, 7);
  /* c5404: ldr q18, [x13, #0xc70] */
  arc_q_w(c, 18, arc_ld64((ARC_X_R(c, 13) + INT64_C(3184))), arc_ld64((ARC_X_R(c, 13) + INT64_C(3184)) + 8));
  /* c5408: adrp x13, #0x52000 */
  ARC_X_W(c, 13, (arc_image_bases[1] + UINT64_C(335872)));
  /* c540c: dup v17.8h, w8 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = (ARC_W_R(c, 8));
    _t.u16[1] = (ARC_W_R(c, 8));
    _t.u16[2] = (ARC_W_R(c, 8));
    _t.u16[3] = (ARC_W_R(c, 8));
    _t.u16[4] = (ARC_W_R(c, 8));
    _t.u16[5] = (ARC_W_R(c, 8));
    _t.u16[6] = (ARC_W_R(c, 8));
    _t.u16[7] = (ARC_W_R(c, 8));
    (c)->q[17] = _t; }
  /* c5410: and x17, x15, #0x7ffffffffffffff0 */
  ARC_X_W(c, 17, (ARC_X_R(c, 15) & UINT64_C(9223372036854775792)));
  /* c5414: ldr q19, [x13, #0xc10] */
  arc_q_w(c, 19, arc_ld64((ARC_X_R(c, 13) + INT64_C(3088))), arc_ld64((ARC_X_R(c, 13) + INT64_C(3088)) + 8));
  /* c5418: adrp x13, #0x52000 */
  ARC_X_W(c, 13, (arc_image_bases[1] + UINT64_C(335872)));
  /* c541c: mov x1, x17 */
  ARC_X_W(c, 1, ARC_X_R(c, 17));
  /* c5420: ldr q20, [x13, #0xa80] */
  arc_q_w(c, 20, arc_ld64((ARC_X_R(c, 13) + INT64_C(2688))), arc_ld64((ARC_X_R(c, 13) + INT64_C(2688)) + 8));
  /* c5424: add x13, x11, #0x10 */
  ARC_X_W(c, 13, (ARC_X_R(c, 11) + UINT64_C(16)));
L_c5428:;
  /* c5428: ldp q21, q22, [x13, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 13) + INT64_C(-16));
    arc_q_w(c, 21, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 22, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c542c: dup v23.2d, x28 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 28));
    _t.u64[1] = (ARC_X_R(c, 28));
    (c)->q[23] = _t; }
  /* c5430: dup v25.2d, x5 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 5));
    _t.u64[1] = (ARC_X_R(c, 5));
    (c)->q[25] = _t; }
  /* c5434: subs x1, x1, #0x10 */
  ARC_X_W(c, 1, arc_sub64(c, ARC_X_R(c, 1), UINT64_C(16)));
  /* c5438: add x13, x13, #0x20 */
  ARC_X_W(c, 13, (ARC_X_R(c, 13) + UINT64_C(32)));
  /* c543c: cmge v21.8h, v21.8h, v17.8h */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = ((c)->q[21].i16[0] >= (c)->q[17].i16[0]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[1] = ((c)->q[21].i16[1] >= (c)->q[17].i16[1]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[2] = ((c)->q[21].i16[2] >= (c)->q[17].i16[2]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[3] = ((c)->q[21].i16[3] >= (c)->q[17].i16[3]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[4] = ((c)->q[21].i16[4] >= (c)->q[17].i16[4]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[5] = ((c)->q[21].i16[5] >= (c)->q[17].i16[5]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[6] = ((c)->q[21].i16[6] >= (c)->q[17].i16[6]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[7] = ((c)->q[21].i16[7] >= (c)->q[17].i16[7]) ? (uint16_t)~(uint16_t)0 : 0;
    (c)->q[21] = _t; }
  /* c5440: cmge v22.8h, v22.8h, v17.8h */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = ((c)->q[22].i16[0] >= (c)->q[17].i16[0]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[1] = ((c)->q[22].i16[1] >= (c)->q[17].i16[1]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[2] = ((c)->q[22].i16[2] >= (c)->q[17].i16[2]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[3] = ((c)->q[22].i16[3] >= (c)->q[17].i16[3]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[4] = ((c)->q[22].i16[4] >= (c)->q[17].i16[4]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[5] = ((c)->q[22].i16[5] >= (c)->q[17].i16[5]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[6] = ((c)->q[22].i16[6] >= (c)->q[17].i16[6]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[7] = ((c)->q[22].i16[7] >= (c)->q[17].i16[7]) ? (uint16_t)~(uint16_t)0 : 0;
    (c)->q[22] = _t; }
  /* c5444: add v27.2d, v16.2d, v23.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[16].u64[0] + (c)->q[23].u64[0];
    _t.u64[1] = (c)->q[16].u64[1] + (c)->q[23].u64[1];
    (c)->q[27] = _t; }
  /* c5448: add v28.2d, v18.2d, v23.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[18].u64[0] + (c)->q[23].u64[0];
    _t.u64[1] = (c)->q[18].u64[1] + (c)->q[23].u64[1];
    (c)->q[28] = _t; }
  /* c544c: add v8.2d, v19.2d, v23.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[19].u64[0] + (c)->q[23].u64[0];
    _t.u64[1] = (c)->q[19].u64[1] + (c)->q[23].u64[1];
    (c)->q[8] = _t; }
  /* c5450: add v23.2d, v20.2d, v23.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[20].u64[0] + (c)->q[23].u64[0];
    _t.u64[1] = (c)->q[20].u64[1] + (c)->q[23].u64[1];
    (c)->q[23] = _t; }
  /* c5454: ushll2 v24.4s, v21.8h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((uint32_t)((c)->q[21].u16[4]) << 0);
    _t.u32[1] = (uint32_t)((uint32_t)((c)->q[21].u16[5]) << 0);
    _t.u32[2] = (uint32_t)((uint32_t)((c)->q[21].u16[6]) << 0);
    _t.u32[3] = (uint32_t)((uint32_t)((c)->q[21].u16[7]) << 0);
    (c)->q[24] = _t; }
  /* c5458: ushll v21.4s, v21.4h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((uint32_t)((c)->q[21].u16[0]) << 0);
    _t.u32[1] = (uint32_t)((uint32_t)((c)->q[21].u16[1]) << 0);
    _t.u32[2] = (uint32_t)((uint32_t)((c)->q[21].u16[2]) << 0);
    _t.u32[3] = (uint32_t)((uint32_t)((c)->q[21].u16[3]) << 0);
    (c)->q[21] = _t; }
  /* c545c: ushll2 v26.4s, v22.8h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((uint32_t)((c)->q[22].u16[4]) << 0);
    _t.u32[1] = (uint32_t)((uint32_t)((c)->q[22].u16[5]) << 0);
    _t.u32[2] = (uint32_t)((uint32_t)((c)->q[22].u16[6]) << 0);
    _t.u32[3] = (uint32_t)((uint32_t)((c)->q[22].u16[7]) << 0);
    (c)->q[26] = _t; }
  /* c5460: ushll v22.4s, v22.4h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((uint32_t)((c)->q[22].u16[0]) << 0);
    _t.u32[1] = (uint32_t)((uint32_t)((c)->q[22].u16[1]) << 0);
    _t.u32[2] = (uint32_t)((uint32_t)((c)->q[22].u16[2]) << 0);
    _t.u32[3] = (uint32_t)((uint32_t)((c)->q[22].u16[3]) << 0);
    (c)->q[22] = _t; }
  /* c5464: ushll2 v29.2d, v24.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[24].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[24].u32[3]) << 0);
    (c)->q[29] = _t; }
  /* c5468: ushll v24.2d, v24.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[24].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[24].u32[1]) << 0);
    (c)->q[24] = _t; }
  /* c546c: ushll2 v30.2d, v21.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[21].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[21].u32[3]) << 0);
    (c)->q[30] = _t; }
  /* c5470: ushll v21.2d, v21.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[21].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[21].u32[1]) << 0);
    (c)->q[21] = _t; }
  /* c5474: ushll2 v31.2d, v26.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[26].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[26].u32[3]) << 0);
    (c)->q[31] = _t; }
  /* c5478: ushll v26.2d, v26.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[26].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[26].u32[1]) << 0);
    (c)->q[26] = _t; }
  /* c547c: ushll2 v9.2d, v22.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[22].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[22].u32[3]) << 0);
    (c)->q[9] = _t; }
  /* c5480: ushll v22.2d, v22.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[22].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[22].u32[1]) << 0);
    (c)->q[22] = _t; }
  /* c5484: and v29.16b, v29.16b, v25.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[29].u8[0] & (c)->q[25].u8[0];
    _t.u8[1] = (c)->q[29].u8[1] & (c)->q[25].u8[1];
    _t.u8[2] = (c)->q[29].u8[2] & (c)->q[25].u8[2];
    _t.u8[3] = (c)->q[29].u8[3] & (c)->q[25].u8[3];
    _t.u8[4] = (c)->q[29].u8[4] & (c)->q[25].u8[4];
    _t.u8[5] = (c)->q[29].u8[5] & (c)->q[25].u8[5];
    _t.u8[6] = (c)->q[29].u8[6] & (c)->q[25].u8[6];
    _t.u8[7] = (c)->q[29].u8[7] & (c)->q[25].u8[7];
    _t.u8[8] = (c)->q[29].u8[8] & (c)->q[25].u8[8];
    _t.u8[9] = (c)->q[29].u8[9] & (c)->q[25].u8[9];
    _t.u8[10] = (c)->q[29].u8[10] & (c)->q[25].u8[10];
    _t.u8[11] = (c)->q[29].u8[11] & (c)->q[25].u8[11];
    _t.u8[12] = (c)->q[29].u8[12] & (c)->q[25].u8[12];
    _t.u8[13] = (c)->q[29].u8[13] & (c)->q[25].u8[13];
    _t.u8[14] = (c)->q[29].u8[14] & (c)->q[25].u8[14];
    _t.u8[15] = (c)->q[29].u8[15] & (c)->q[25].u8[15];
    (c)->q[29] = _t; }
  /* c5488: and v24.16b, v24.16b, v25.16b */
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
  /* c548c: and v30.16b, v30.16b, v25.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[30].u8[0] & (c)->q[25].u8[0];
    _t.u8[1] = (c)->q[30].u8[1] & (c)->q[25].u8[1];
    _t.u8[2] = (c)->q[30].u8[2] & (c)->q[25].u8[2];
    _t.u8[3] = (c)->q[30].u8[3] & (c)->q[25].u8[3];
    _t.u8[4] = (c)->q[30].u8[4] & (c)->q[25].u8[4];
    _t.u8[5] = (c)->q[30].u8[5] & (c)->q[25].u8[5];
    _t.u8[6] = (c)->q[30].u8[6] & (c)->q[25].u8[6];
    _t.u8[7] = (c)->q[30].u8[7] & (c)->q[25].u8[7];
    _t.u8[8] = (c)->q[30].u8[8] & (c)->q[25].u8[8];
    _t.u8[9] = (c)->q[30].u8[9] & (c)->q[25].u8[9];
    _t.u8[10] = (c)->q[30].u8[10] & (c)->q[25].u8[10];
    _t.u8[11] = (c)->q[30].u8[11] & (c)->q[25].u8[11];
    _t.u8[12] = (c)->q[30].u8[12] & (c)->q[25].u8[12];
    _t.u8[13] = (c)->q[30].u8[13] & (c)->q[25].u8[13];
    _t.u8[14] = (c)->q[30].u8[14] & (c)->q[25].u8[14];
    _t.u8[15] = (c)->q[30].u8[15] & (c)->q[25].u8[15];
    (c)->q[30] = _t; }
  /* c5490: and v21.16b, v21.16b, v25.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[21].u8[0] & (c)->q[25].u8[0];
    _t.u8[1] = (c)->q[21].u8[1] & (c)->q[25].u8[1];
    _t.u8[2] = (c)->q[21].u8[2] & (c)->q[25].u8[2];
    _t.u8[3] = (c)->q[21].u8[3] & (c)->q[25].u8[3];
    _t.u8[4] = (c)->q[21].u8[4] & (c)->q[25].u8[4];
    _t.u8[5] = (c)->q[21].u8[5] & (c)->q[25].u8[5];
    _t.u8[6] = (c)->q[21].u8[6] & (c)->q[25].u8[6];
    _t.u8[7] = (c)->q[21].u8[7] & (c)->q[25].u8[7];
    _t.u8[8] = (c)->q[21].u8[8] & (c)->q[25].u8[8];
    _t.u8[9] = (c)->q[21].u8[9] & (c)->q[25].u8[9];
    _t.u8[10] = (c)->q[21].u8[10] & (c)->q[25].u8[10];
    _t.u8[11] = (c)->q[21].u8[11] & (c)->q[25].u8[11];
    _t.u8[12] = (c)->q[21].u8[12] & (c)->q[25].u8[12];
    _t.u8[13] = (c)->q[21].u8[13] & (c)->q[25].u8[13];
    _t.u8[14] = (c)->q[21].u8[14] & (c)->q[25].u8[14];
    _t.u8[15] = (c)->q[21].u8[15] & (c)->q[25].u8[15];
    (c)->q[21] = _t; }
  /* c5494: and v31.16b, v31.16b, v25.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[31].u8[0] & (c)->q[25].u8[0];
    _t.u8[1] = (c)->q[31].u8[1] & (c)->q[25].u8[1];
    _t.u8[2] = (c)->q[31].u8[2] & (c)->q[25].u8[2];
    _t.u8[3] = (c)->q[31].u8[3] & (c)->q[25].u8[3];
    _t.u8[4] = (c)->q[31].u8[4] & (c)->q[25].u8[4];
    _t.u8[5] = (c)->q[31].u8[5] & (c)->q[25].u8[5];
    _t.u8[6] = (c)->q[31].u8[6] & (c)->q[25].u8[6];
    _t.u8[7] = (c)->q[31].u8[7] & (c)->q[25].u8[7];
    _t.u8[8] = (c)->q[31].u8[8] & (c)->q[25].u8[8];
    _t.u8[9] = (c)->q[31].u8[9] & (c)->q[25].u8[9];
    _t.u8[10] = (c)->q[31].u8[10] & (c)->q[25].u8[10];
    _t.u8[11] = (c)->q[31].u8[11] & (c)->q[25].u8[11];
    _t.u8[12] = (c)->q[31].u8[12] & (c)->q[25].u8[12];
    _t.u8[13] = (c)->q[31].u8[13] & (c)->q[25].u8[13];
    _t.u8[14] = (c)->q[31].u8[14] & (c)->q[25].u8[14];
    _t.u8[15] = (c)->q[31].u8[15] & (c)->q[25].u8[15];
    (c)->q[31] = _t; }
  /* c5498: and v26.16b, v26.16b, v25.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[26].u8[0] & (c)->q[25].u8[0];
    _t.u8[1] = (c)->q[26].u8[1] & (c)->q[25].u8[1];
    _t.u8[2] = (c)->q[26].u8[2] & (c)->q[25].u8[2];
    _t.u8[3] = (c)->q[26].u8[3] & (c)->q[25].u8[3];
    _t.u8[4] = (c)->q[26].u8[4] & (c)->q[25].u8[4];
    _t.u8[5] = (c)->q[26].u8[5] & (c)->q[25].u8[5];
    _t.u8[6] = (c)->q[26].u8[6] & (c)->q[25].u8[6];
    _t.u8[7] = (c)->q[26].u8[7] & (c)->q[25].u8[7];
    _t.u8[8] = (c)->q[26].u8[8] & (c)->q[25].u8[8];
    _t.u8[9] = (c)->q[26].u8[9] & (c)->q[25].u8[9];
    _t.u8[10] = (c)->q[26].u8[10] & (c)->q[25].u8[10];
    _t.u8[11] = (c)->q[26].u8[11] & (c)->q[25].u8[11];
    _t.u8[12] = (c)->q[26].u8[12] & (c)->q[25].u8[12];
    _t.u8[13] = (c)->q[26].u8[13] & (c)->q[25].u8[13];
    _t.u8[14] = (c)->q[26].u8[14] & (c)->q[25].u8[14];
    _t.u8[15] = (c)->q[26].u8[15] & (c)->q[25].u8[15];
    (c)->q[26] = _t; }
  /* c549c: and v9.16b, v9.16b, v25.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[9].u8[0] & (c)->q[25].u8[0];
    _t.u8[1] = (c)->q[9].u8[1] & (c)->q[25].u8[1];
    _t.u8[2] = (c)->q[9].u8[2] & (c)->q[25].u8[2];
    _t.u8[3] = (c)->q[9].u8[3] & (c)->q[25].u8[3];
    _t.u8[4] = (c)->q[9].u8[4] & (c)->q[25].u8[4];
    _t.u8[5] = (c)->q[9].u8[5] & (c)->q[25].u8[5];
    _t.u8[6] = (c)->q[9].u8[6] & (c)->q[25].u8[6];
    _t.u8[7] = (c)->q[9].u8[7] & (c)->q[25].u8[7];
    _t.u8[8] = (c)->q[9].u8[8] & (c)->q[25].u8[8];
    _t.u8[9] = (c)->q[9].u8[9] & (c)->q[25].u8[9];
    _t.u8[10] = (c)->q[9].u8[10] & (c)->q[25].u8[10];
    _t.u8[11] = (c)->q[9].u8[11] & (c)->q[25].u8[11];
    _t.u8[12] = (c)->q[9].u8[12] & (c)->q[25].u8[12];
    _t.u8[13] = (c)->q[9].u8[13] & (c)->q[25].u8[13];
    _t.u8[14] = (c)->q[9].u8[14] & (c)->q[25].u8[14];
    _t.u8[15] = (c)->q[9].u8[15] & (c)->q[25].u8[15];
    (c)->q[9] = _t; }
  /* c54a0: and v22.16b, v22.16b, v25.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[22].u8[0] & (c)->q[25].u8[0];
    _t.u8[1] = (c)->q[22].u8[1] & (c)->q[25].u8[1];
    _t.u8[2] = (c)->q[22].u8[2] & (c)->q[25].u8[2];
    _t.u8[3] = (c)->q[22].u8[3] & (c)->q[25].u8[3];
    _t.u8[4] = (c)->q[22].u8[4] & (c)->q[25].u8[4];
    _t.u8[5] = (c)->q[22].u8[5] & (c)->q[25].u8[5];
    _t.u8[6] = (c)->q[22].u8[6] & (c)->q[25].u8[6];
    _t.u8[7] = (c)->q[22].u8[7] & (c)->q[25].u8[7];
    _t.u8[8] = (c)->q[22].u8[8] & (c)->q[25].u8[8];
    _t.u8[9] = (c)->q[22].u8[9] & (c)->q[25].u8[9];
    _t.u8[10] = (c)->q[22].u8[10] & (c)->q[25].u8[10];
    _t.u8[11] = (c)->q[22].u8[11] & (c)->q[25].u8[11];
    _t.u8[12] = (c)->q[22].u8[12] & (c)->q[25].u8[12];
    _t.u8[13] = (c)->q[22].u8[13] & (c)->q[25].u8[13];
    _t.u8[14] = (c)->q[22].u8[14] & (c)->q[25].u8[14];
    _t.u8[15] = (c)->q[22].u8[15] & (c)->q[25].u8[15];
    (c)->q[22] = _t; }
  /* c54a4: ushl v25.2d, v30.2d, v19.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[30].u64[0], (int8_t)(c)->q[19].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[30].u64[1], (int8_t)(c)->q[19].u64[1]);
    (c)->q[25] = _t; }
  /* c54a8: ushl v24.2d, v24.2d, v18.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[24].u64[0], (int8_t)(c)->q[18].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[24].u64[1], (int8_t)(c)->q[18].u64[1]);
    (c)->q[24] = _t; }
  /* c54ac: ushl v29.2d, v29.2d, v16.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[29].u64[0], (int8_t)(c)->q[16].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[29].u64[1], (int8_t)(c)->q[16].u64[1]);
    (c)->q[29] = _t; }
  /* c54b0: ushl v21.2d, v21.2d, v20.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[21].u64[0], (int8_t)(c)->q[20].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[21].u64[1], (int8_t)(c)->q[20].u64[1]);
    (c)->q[21] = _t; }
  /* c54b4: ushl v26.2d, v26.2d, v28.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[26].u64[0], (int8_t)(c)->q[28].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[26].u64[1], (int8_t)(c)->q[28].u64[1]);
    (c)->q[26] = _t; }
  /* c54b8: ushl v27.2d, v31.2d, v27.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[31].u64[0], (int8_t)(c)->q[27].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[31].u64[1], (int8_t)(c)->q[27].u64[1]);
    (c)->q[27] = _t; }
  /* c54bc: ushl v22.2d, v22.2d, v23.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[22].u64[0], (int8_t)(c)->q[23].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[22].u64[1], (int8_t)(c)->q[23].u64[1]);
    (c)->q[22] = _t; }
  /* c54c0: ushl v23.2d, v9.2d, v8.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[9].u64[0], (int8_t)(c)->q[8].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[9].u64[1], (int8_t)(c)->q[8].u64[1]);
    (c)->q[23] = _t; }
  /* c54c4: dup v28.2d, x30 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 30));
    _t.u64[1] = (ARC_X_R(c, 30));
    (c)->q[28] = _t; }
  /* c54c8: orr v3.16b, v29.16b, v3.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[29].u8[0] | (c)->q[3].u8[0];
    _t.u8[1] = (c)->q[29].u8[1] | (c)->q[3].u8[1];
    _t.u8[2] = (c)->q[29].u8[2] | (c)->q[3].u8[2];
    _t.u8[3] = (c)->q[29].u8[3] | (c)->q[3].u8[3];
    _t.u8[4] = (c)->q[29].u8[4] | (c)->q[3].u8[4];
    _t.u8[5] = (c)->q[29].u8[5] | (c)->q[3].u8[5];
    _t.u8[6] = (c)->q[29].u8[6] | (c)->q[3].u8[6];
    _t.u8[7] = (c)->q[29].u8[7] | (c)->q[3].u8[7];
    _t.u8[8] = (c)->q[29].u8[8] | (c)->q[3].u8[8];
    _t.u8[9] = (c)->q[29].u8[9] | (c)->q[3].u8[9];
    _t.u8[10] = (c)->q[29].u8[10] | (c)->q[3].u8[10];
    _t.u8[11] = (c)->q[29].u8[11] | (c)->q[3].u8[11];
    _t.u8[12] = (c)->q[29].u8[12] | (c)->q[3].u8[12];
    _t.u8[13] = (c)->q[29].u8[13] | (c)->q[3].u8[13];
    _t.u8[14] = (c)->q[29].u8[14] | (c)->q[3].u8[14];
    _t.u8[15] = (c)->q[29].u8[15] | (c)->q[3].u8[15];
    (c)->q[3] = _t; }
  /* c54cc: orr v1.16b, v24.16b, v1.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[24].u8[0] | (c)->q[1].u8[0];
    _t.u8[1] = (c)->q[24].u8[1] | (c)->q[1].u8[1];
    _t.u8[2] = (c)->q[24].u8[2] | (c)->q[1].u8[2];
    _t.u8[3] = (c)->q[24].u8[3] | (c)->q[1].u8[3];
    _t.u8[4] = (c)->q[24].u8[4] | (c)->q[1].u8[4];
    _t.u8[5] = (c)->q[24].u8[5] | (c)->q[1].u8[5];
    _t.u8[6] = (c)->q[24].u8[6] | (c)->q[1].u8[6];
    _t.u8[7] = (c)->q[24].u8[7] | (c)->q[1].u8[7];
    _t.u8[8] = (c)->q[24].u8[8] | (c)->q[1].u8[8];
    _t.u8[9] = (c)->q[24].u8[9] | (c)->q[1].u8[9];
    _t.u8[10] = (c)->q[24].u8[10] | (c)->q[1].u8[10];
    _t.u8[11] = (c)->q[24].u8[11] | (c)->q[1].u8[11];
    _t.u8[12] = (c)->q[24].u8[12] | (c)->q[1].u8[12];
    _t.u8[13] = (c)->q[24].u8[13] | (c)->q[1].u8[13];
    _t.u8[14] = (c)->q[24].u8[14] | (c)->q[1].u8[14];
    _t.u8[15] = (c)->q[24].u8[15] | (c)->q[1].u8[15];
    (c)->q[1] = _t; }
  /* c54d0: orr v2.16b, v25.16b, v2.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[25].u8[0] | (c)->q[2].u8[0];
    _t.u8[1] = (c)->q[25].u8[1] | (c)->q[2].u8[1];
    _t.u8[2] = (c)->q[25].u8[2] | (c)->q[2].u8[2];
    _t.u8[3] = (c)->q[25].u8[3] | (c)->q[2].u8[3];
    _t.u8[4] = (c)->q[25].u8[4] | (c)->q[2].u8[4];
    _t.u8[5] = (c)->q[25].u8[5] | (c)->q[2].u8[5];
    _t.u8[6] = (c)->q[25].u8[6] | (c)->q[2].u8[6];
    _t.u8[7] = (c)->q[25].u8[7] | (c)->q[2].u8[7];
    _t.u8[8] = (c)->q[25].u8[8] | (c)->q[2].u8[8];
    _t.u8[9] = (c)->q[25].u8[9] | (c)->q[2].u8[9];
    _t.u8[10] = (c)->q[25].u8[10] | (c)->q[2].u8[10];
    _t.u8[11] = (c)->q[25].u8[11] | (c)->q[2].u8[11];
    _t.u8[12] = (c)->q[25].u8[12] | (c)->q[2].u8[12];
    _t.u8[13] = (c)->q[25].u8[13] | (c)->q[2].u8[13];
    _t.u8[14] = (c)->q[25].u8[14] | (c)->q[2].u8[14];
    _t.u8[15] = (c)->q[25].u8[15] | (c)->q[2].u8[15];
    (c)->q[2] = _t; }
  /* c54d4: orr v0.16b, v21.16b, v0.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[21].u8[0] | (c)->q[0].u8[0];
    _t.u8[1] = (c)->q[21].u8[1] | (c)->q[0].u8[1];
    _t.u8[2] = (c)->q[21].u8[2] | (c)->q[0].u8[2];
    _t.u8[3] = (c)->q[21].u8[3] | (c)->q[0].u8[3];
    _t.u8[4] = (c)->q[21].u8[4] | (c)->q[0].u8[4];
    _t.u8[5] = (c)->q[21].u8[5] | (c)->q[0].u8[5];
    _t.u8[6] = (c)->q[21].u8[6] | (c)->q[0].u8[6];
    _t.u8[7] = (c)->q[21].u8[7] | (c)->q[0].u8[7];
    _t.u8[8] = (c)->q[21].u8[8] | (c)->q[0].u8[8];
    _t.u8[9] = (c)->q[21].u8[9] | (c)->q[0].u8[9];
    _t.u8[10] = (c)->q[21].u8[10] | (c)->q[0].u8[10];
    _t.u8[11] = (c)->q[21].u8[11] | (c)->q[0].u8[11];
    _t.u8[12] = (c)->q[21].u8[12] | (c)->q[0].u8[12];
    _t.u8[13] = (c)->q[21].u8[13] | (c)->q[0].u8[13];
    _t.u8[14] = (c)->q[21].u8[14] | (c)->q[0].u8[14];
    _t.u8[15] = (c)->q[21].u8[15] | (c)->q[0].u8[15];
    (c)->q[0] = _t; }
  /* c54d8: orr v7.16b, v27.16b, v7.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[27].u8[0] | (c)->q[7].u8[0];
    _t.u8[1] = (c)->q[27].u8[1] | (c)->q[7].u8[1];
    _t.u8[2] = (c)->q[27].u8[2] | (c)->q[7].u8[2];
    _t.u8[3] = (c)->q[27].u8[3] | (c)->q[7].u8[3];
    _t.u8[4] = (c)->q[27].u8[4] | (c)->q[7].u8[4];
    _t.u8[5] = (c)->q[27].u8[5] | (c)->q[7].u8[5];
    _t.u8[6] = (c)->q[27].u8[6] | (c)->q[7].u8[6];
    _t.u8[7] = (c)->q[27].u8[7] | (c)->q[7].u8[7];
    _t.u8[8] = (c)->q[27].u8[8] | (c)->q[7].u8[8];
    _t.u8[9] = (c)->q[27].u8[9] | (c)->q[7].u8[9];
    _t.u8[10] = (c)->q[27].u8[10] | (c)->q[7].u8[10];
    _t.u8[11] = (c)->q[27].u8[11] | (c)->q[7].u8[11];
    _t.u8[12] = (c)->q[27].u8[12] | (c)->q[7].u8[12];
    _t.u8[13] = (c)->q[27].u8[13] | (c)->q[7].u8[13];
    _t.u8[14] = (c)->q[27].u8[14] | (c)->q[7].u8[14];
    _t.u8[15] = (c)->q[27].u8[15] | (c)->q[7].u8[15];
    (c)->q[7] = _t; }
  /* c54dc: orr v5.16b, v26.16b, v5.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[26].u8[0] | (c)->q[5].u8[0];
    _t.u8[1] = (c)->q[26].u8[1] | (c)->q[5].u8[1];
    _t.u8[2] = (c)->q[26].u8[2] | (c)->q[5].u8[2];
    _t.u8[3] = (c)->q[26].u8[3] | (c)->q[5].u8[3];
    _t.u8[4] = (c)->q[26].u8[4] | (c)->q[5].u8[4];
    _t.u8[5] = (c)->q[26].u8[5] | (c)->q[5].u8[5];
    _t.u8[6] = (c)->q[26].u8[6] | (c)->q[5].u8[6];
    _t.u8[7] = (c)->q[26].u8[7] | (c)->q[5].u8[7];
    _t.u8[8] = (c)->q[26].u8[8] | (c)->q[5].u8[8];
    _t.u8[9] = (c)->q[26].u8[9] | (c)->q[5].u8[9];
    _t.u8[10] = (c)->q[26].u8[10] | (c)->q[5].u8[10];
    _t.u8[11] = (c)->q[26].u8[11] | (c)->q[5].u8[11];
    _t.u8[12] = (c)->q[26].u8[12] | (c)->q[5].u8[12];
    _t.u8[13] = (c)->q[26].u8[13] | (c)->q[5].u8[13];
    _t.u8[14] = (c)->q[26].u8[14] | (c)->q[5].u8[14];
    _t.u8[15] = (c)->q[26].u8[15] | (c)->q[5].u8[15];
    (c)->q[5] = _t; }
  /* c54e0: orr v6.16b, v23.16b, v6.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[23].u8[0] | (c)->q[6].u8[0];
    _t.u8[1] = (c)->q[23].u8[1] | (c)->q[6].u8[1];
    _t.u8[2] = (c)->q[23].u8[2] | (c)->q[6].u8[2];
    _t.u8[3] = (c)->q[23].u8[3] | (c)->q[6].u8[3];
    _t.u8[4] = (c)->q[23].u8[4] | (c)->q[6].u8[4];
    _t.u8[5] = (c)->q[23].u8[5] | (c)->q[6].u8[5];
    _t.u8[6] = (c)->q[23].u8[6] | (c)->q[6].u8[6];
    _t.u8[7] = (c)->q[23].u8[7] | (c)->q[6].u8[7];
    _t.u8[8] = (c)->q[23].u8[8] | (c)->q[6].u8[8];
    _t.u8[9] = (c)->q[23].u8[9] | (c)->q[6].u8[9];
    _t.u8[10] = (c)->q[23].u8[10] | (c)->q[6].u8[10];
    _t.u8[11] = (c)->q[23].u8[11] | (c)->q[6].u8[11];
    _t.u8[12] = (c)->q[23].u8[12] | (c)->q[6].u8[12];
    _t.u8[13] = (c)->q[23].u8[13] | (c)->q[6].u8[13];
    _t.u8[14] = (c)->q[23].u8[14] | (c)->q[6].u8[14];
    _t.u8[15] = (c)->q[23].u8[15] | (c)->q[6].u8[15];
    (c)->q[6] = _t; }
  /* c54e4: orr v4.16b, v22.16b, v4.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[22].u8[0] | (c)->q[4].u8[0];
    _t.u8[1] = (c)->q[22].u8[1] | (c)->q[4].u8[1];
    _t.u8[2] = (c)->q[22].u8[2] | (c)->q[4].u8[2];
    _t.u8[3] = (c)->q[22].u8[3] | (c)->q[4].u8[3];
    _t.u8[4] = (c)->q[22].u8[4] | (c)->q[4].u8[4];
    _t.u8[5] = (c)->q[22].u8[5] | (c)->q[4].u8[5];
    _t.u8[6] = (c)->q[22].u8[6] | (c)->q[4].u8[6];
    _t.u8[7] = (c)->q[22].u8[7] | (c)->q[4].u8[7];
    _t.u8[8] = (c)->q[22].u8[8] | (c)->q[4].u8[8];
    _t.u8[9] = (c)->q[22].u8[9] | (c)->q[4].u8[9];
    _t.u8[10] = (c)->q[22].u8[10] | (c)->q[4].u8[10];
    _t.u8[11] = (c)->q[22].u8[11] | (c)->q[4].u8[11];
    _t.u8[12] = (c)->q[22].u8[12] | (c)->q[4].u8[12];
    _t.u8[13] = (c)->q[22].u8[13] | (c)->q[4].u8[13];
    _t.u8[14] = (c)->q[22].u8[14] | (c)->q[4].u8[14];
    _t.u8[15] = (c)->q[22].u8[15] | (c)->q[4].u8[15];
    (c)->q[4] = _t; }
  /* c54e8: add v18.2d, v18.2d, v28.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[18].u64[0] + (c)->q[28].u64[0];
    _t.u64[1] = (c)->q[18].u64[1] + (c)->q[28].u64[1];
    (c)->q[18] = _t; }
  /* c54ec: add v19.2d, v19.2d, v28.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[19].u64[0] + (c)->q[28].u64[0];
    _t.u64[1] = (c)->q[19].u64[1] + (c)->q[28].u64[1];
    (c)->q[19] = _t; }
  /* c54f0: add v20.2d, v20.2d, v28.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[20].u64[0] + (c)->q[28].u64[0];
    _t.u64[1] = (c)->q[20].u64[1] + (c)->q[28].u64[1];
    (c)->q[20] = _t; }
  /* c54f4: add v16.2d, v16.2d, v28.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[16].u64[0] + (c)->q[28].u64[0];
    _t.u64[1] = (c)->q[16].u64[1] + (c)->q[28].u64[1];
    (c)->q[16] = _t; }
  /* c54f8: b.ne #0xc5428 */
  if (ARC_COND(c, 1)) goto L_c5428;
  /* c54fc: orr v2.16b, v6.16b, v2.16b */
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
  /* c5500: orr v3.16b, v7.16b, v3.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[7].u8[0] | (c)->q[3].u8[0];
    _t.u8[1] = (c)->q[7].u8[1] | (c)->q[3].u8[1];
    _t.u8[2] = (c)->q[7].u8[2] | (c)->q[3].u8[2];
    _t.u8[3] = (c)->q[7].u8[3] | (c)->q[3].u8[3];
    _t.u8[4] = (c)->q[7].u8[4] | (c)->q[3].u8[4];
    _t.u8[5] = (c)->q[7].u8[5] | (c)->q[3].u8[5];
    _t.u8[6] = (c)->q[7].u8[6] | (c)->q[3].u8[6];
    _t.u8[7] = (c)->q[7].u8[7] | (c)->q[3].u8[7];
    _t.u8[8] = (c)->q[7].u8[8] | (c)->q[3].u8[8];
    _t.u8[9] = (c)->q[7].u8[9] | (c)->q[3].u8[9];
    _t.u8[10] = (c)->q[7].u8[10] | (c)->q[3].u8[10];
    _t.u8[11] = (c)->q[7].u8[11] | (c)->q[3].u8[11];
    _t.u8[12] = (c)->q[7].u8[12] | (c)->q[3].u8[12];
    _t.u8[13] = (c)->q[7].u8[13] | (c)->q[3].u8[13];
    _t.u8[14] = (c)->q[7].u8[14] | (c)->q[3].u8[14];
    _t.u8[15] = (c)->q[7].u8[15] | (c)->q[3].u8[15];
    (c)->q[3] = _t; }
  /* c5504: cmp x15, x17 */
  (void)arc_sub64(c, ARC_X_R(c, 15), ARC_X_R(c, 17));
  /* c5508: orr v0.16b, v4.16b, v0.16b */
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
  /* c550c: orr v1.16b, v5.16b, v1.16b */
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
  /* c5510: orr v0.16b, v0.16b, v1.16b */
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
  /* c5514: orr v1.16b, v2.16b, v3.16b */
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
  /* c5518: orr v0.16b, v0.16b, v1.16b */
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
  /* c551c: ext v1.16b, v0.16b, v0.16b, #8 */
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
  /* c5520: orr v0.8b, v0.8b, v1.8b */
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
  /* c5524: fmov x13, d0 */
  ARC_X_W(c, 13, ARC_DU_R(c, 0));
  /* c5528: b.eq #0xc55fc */
  if (ARC_COND(c, 0)) goto L_c55fc;
  /* c552c: tst x15, #0xc */
  arc_flags_logical64(c, (uint64_t)(ARC_X_R(c, 15) & UINT64_C(12)));
  /* c5530: b.eq #0xc55d8 */
  if (ARC_COND(c, 0)) goto L_c55d8;
L_c5534:;
  /* c5534: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* c5538: mov x3, x17 */
  ARC_X_W(c, 3, ARC_X_R(c, 17));
  /* c553c: dup v4.2d, x17 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 17));
    _t.u64[1] = (ARC_X_R(c, 17));
    (c)->q[4] = _t; }
  /* c5540: adrp x17, #0x52000 */
  ARC_X_W(c, 17, (arc_image_bases[1] + UINT64_C(335872)));
  /* c5544: movi v1.2d, #0000000000000000 */
  arc_v_clear(c, 1);
  /* c5548: dup v2.4h, w8 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = (ARC_W_R(c, 8));
    _t.u16[1] = (ARC_W_R(c, 8));
    _t.u16[2] = (ARC_W_R(c, 8));
    _t.u16[3] = (ARC_W_R(c, 8));
    (c)->q[2] = _t; }
  /* c554c: ldr q3, [x17, #0xc10] */
  arc_q_w(c, 3, arc_ld64((ARC_X_R(c, 17) + INT64_C(3088))), arc_ld64((ARC_X_R(c, 17) + INT64_C(3088)) + 8));
  /* c5550: adrp x17, #0x52000 */
  ARC_X_W(c, 17, (arc_image_bases[1] + UINT64_C(335872)));
  /* c5554: ldr q5, [x17, #0xa80] */
  arc_q_w(c, 5, arc_ld64((ARC_X_R(c, 17) + INT64_C(2688))), arc_ld64((ARC_X_R(c, 17) + INT64_C(2688)) + 8));
  /* c5558: and x17, x15, #0x7ffffffffffffffc */
  ARC_X_W(c, 17, (ARC_X_R(c, 15) & UINT64_C(9223372036854775804)));
  /* c555c: mov v0.d[0], x13 */
  (c)->q[0].u64[0] = (ARC_X_R(c, 13));
  /* c5560: orr v3.16b, v4.16b, v3.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[4].u8[0] | (c)->q[3].u8[0];
    _t.u8[1] = (c)->q[4].u8[1] | (c)->q[3].u8[1];
    _t.u8[2] = (c)->q[4].u8[2] | (c)->q[3].u8[2];
    _t.u8[3] = (c)->q[4].u8[3] | (c)->q[3].u8[3];
    _t.u8[4] = (c)->q[4].u8[4] | (c)->q[3].u8[4];
    _t.u8[5] = (c)->q[4].u8[5] | (c)->q[3].u8[5];
    _t.u8[6] = (c)->q[4].u8[6] | (c)->q[3].u8[6];
    _t.u8[7] = (c)->q[4].u8[7] | (c)->q[3].u8[7];
    _t.u8[8] = (c)->q[4].u8[8] | (c)->q[3].u8[8];
    _t.u8[9] = (c)->q[4].u8[9] | (c)->q[3].u8[9];
    _t.u8[10] = (c)->q[4].u8[10] | (c)->q[3].u8[10];
    _t.u8[11] = (c)->q[4].u8[11] | (c)->q[3].u8[11];
    _t.u8[12] = (c)->q[4].u8[12] | (c)->q[3].u8[12];
    _t.u8[13] = (c)->q[4].u8[13] | (c)->q[3].u8[13];
    _t.u8[14] = (c)->q[4].u8[14] | (c)->q[3].u8[14];
    _t.u8[15] = (c)->q[4].u8[15] | (c)->q[3].u8[15];
    (c)->q[3] = _t; }
  /* c5564: add x1, x11, x17, lsl #1 */
  ARC_X_W(c, 1, (ARC_X_R(c, 11) + ((uint64_t)(ARC_X_R(c, 17)) << 1)));
  /* c5568: orr v4.16b, v4.16b, v5.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[4].u8[0] | (c)->q[5].u8[0];
    _t.u8[1] = (c)->q[4].u8[1] | (c)->q[5].u8[1];
    _t.u8[2] = (c)->q[4].u8[2] | (c)->q[5].u8[2];
    _t.u8[3] = (c)->q[4].u8[3] | (c)->q[5].u8[3];
    _t.u8[4] = (c)->q[4].u8[4] | (c)->q[5].u8[4];
    _t.u8[5] = (c)->q[4].u8[5] | (c)->q[5].u8[5];
    _t.u8[6] = (c)->q[4].u8[6] | (c)->q[5].u8[6];
    _t.u8[7] = (c)->q[4].u8[7] | (c)->q[5].u8[7];
    _t.u8[8] = (c)->q[4].u8[8] | (c)->q[5].u8[8];
    _t.u8[9] = (c)->q[4].u8[9] | (c)->q[5].u8[9];
    _t.u8[10] = (c)->q[4].u8[10] | (c)->q[5].u8[10];
    _t.u8[11] = (c)->q[4].u8[11] | (c)->q[5].u8[11];
    _t.u8[12] = (c)->q[4].u8[12] | (c)->q[5].u8[12];
    _t.u8[13] = (c)->q[4].u8[13] | (c)->q[5].u8[13];
    _t.u8[14] = (c)->q[4].u8[14] | (c)->q[5].u8[14];
    _t.u8[15] = (c)->q[4].u8[15] | (c)->q[5].u8[15];
    (c)->q[4] = _t; }
  /* c556c: lsl x13, x3, #1 */
  ARC_X_W(c, 13, ((uint64_t)(ARC_X_R(c, 3)) << ((UINT64_C(1)) & 63)));
  /* c5570: sub x3, x3, x17 */
  ARC_X_W(c, 3, (ARC_X_R(c, 3) - ARC_X_R(c, 17)));
L_c5574:;
  /* c5574: ldr d5, [x11, x13] */
  arc_du_w(c, 5, arc_ld64((ARC_X_R(c, 11) + ARC_X_R(c, 13))));
  /* c5578: dup v6.2d, x5 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 5));
    _t.u64[1] = (ARC_X_R(c, 5));
    (c)->q[6] = _t; }
  /* c557c: adds x3, x3, #4 */
  ARC_X_W(c, 3, arc_add64(c, ARC_X_R(c, 3), UINT64_C(4), 0));
  /* c5580: add x13, x13, #8 */
  ARC_X_W(c, 13, (ARC_X_R(c, 13) + UINT64_C(8)));
  /* c5584: cmge v5.4h, v5.4h, v2.4h */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = ((c)->q[5].i16[0] >= (c)->q[2].i16[0]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[1] = ((c)->q[5].i16[1] >= (c)->q[2].i16[1]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[2] = ((c)->q[5].i16[2] >= (c)->q[2].i16[2]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[3] = ((c)->q[5].i16[3] >= (c)->q[2].i16[3]) ? (uint16_t)~(uint16_t)0 : 0;
    (c)->q[5] = _t; }
  /* c5588: ushll v5.4s, v5.4h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((uint32_t)((c)->q[5].u16[0]) << 0);
    _t.u32[1] = (uint32_t)((uint32_t)((c)->q[5].u16[1]) << 0);
    _t.u32[2] = (uint32_t)((uint32_t)((c)->q[5].u16[2]) << 0);
    _t.u32[3] = (uint32_t)((uint32_t)((c)->q[5].u16[3]) << 0);
    (c)->q[5] = _t; }
  /* c558c: ushll2 v7.2d, v5.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[5].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[5].u32[3]) << 0);
    (c)->q[7] = _t; }
  /* c5590: ushll v5.2d, v5.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[5].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[5].u32[1]) << 0);
    (c)->q[5] = _t; }
  /* c5594: and v7.16b, v7.16b, v6.16b */
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
  /* c5598: and v5.16b, v5.16b, v6.16b */
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
  /* c559c: ushl v6.2d, v7.2d, v3.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[7].u64[0], (int8_t)(c)->q[3].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[7].u64[1], (int8_t)(c)->q[3].u64[1]);
    (c)->q[6] = _t; }
  /* c55a0: dup v7.2d, x22 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 22));
    _t.u64[1] = (ARC_X_R(c, 22));
    (c)->q[7] = _t; }
  /* c55a4: ushl v5.2d, v5.2d, v4.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[5].u64[0], (int8_t)(c)->q[4].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[5].u64[1], (int8_t)(c)->q[4].u64[1]);
    (c)->q[5] = _t; }
  /* c55a8: orr v1.16b, v6.16b, v1.16b */
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
  /* c55ac: orr v0.16b, v5.16b, v0.16b */
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
  /* c55b0: add v3.2d, v3.2d, v7.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[3].u64[0] + (c)->q[7].u64[0];
    _t.u64[1] = (c)->q[3].u64[1] + (c)->q[7].u64[1];
    (c)->q[3] = _t; }
  /* c55b4: add v4.2d, v4.2d, v7.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[4].u64[0] + (c)->q[7].u64[0];
    _t.u64[1] = (c)->q[4].u64[1] + (c)->q[7].u64[1];
    (c)->q[4] = _t; }
  /* c55b8: b.ne #0xc5574 */
  if (ARC_COND(c, 1)) goto L_c5574;
  /* c55bc: orr v0.16b, v0.16b, v1.16b */
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
  /* c55c0: cmp x15, x17 */
  (void)arc_sub64(c, ARC_X_R(c, 15), ARC_X_R(c, 17));
  /* c55c4: ext v1.16b, v0.16b, v0.16b, #8 */
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
  /* c55c8: orr v0.8b, v0.8b, v1.8b */
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
  /* c55cc: fmov x13, d0 */
  ARC_X_W(c, 13, ARC_DU_R(c, 0));
  /* c55d0: b.ne #0xc55dc */
  if (ARC_COND(c, 1)) goto L_c55dc;
  /* c55d4: b #0xc55fc */
  goto L_c55fc;
L_c55d8:;
  /* c55d8: add x1, x11, x17, lsl #1 */
  ARC_X_W(c, 1, (ARC_X_R(c, 11) + ((uint64_t)(ARC_X_R(c, 17)) << 1)));
L_c55dc:;
  /* c55dc: ldrsh w3, [x1], #2 */
  { const uint64_t _a = ARC_X_R(c, 1);
    ARC_X_W(c, 1, ARC_X_R(c, 1) + INT64_C(2));
    ARC_W_W(c, 3, ((int32_t)(int16_t)arc_ld16(_a)));
  }
  /* c55e0: cmp w3, w8, sxth */
  (void)arc_sub32(c, ARC_W_R(c, 3), ((uint64_t)(int64_t)(int16_t)(ARC_W_R(c, 8))));
  /* c55e4: cset w3, ge */
  ARC_W_W(c, 3, (ARC_COND(c, 10) ? 1 : 0));
  /* c55e8: lsl x3, x3, x17 */
  ARC_X_W(c, 3, ((uint64_t)(ARC_X_R(c, 3)) << ((ARC_X_R(c, 17)) & 63)));
  /* c55ec: add x17, x17, #1 */
  ARC_X_W(c, 17, (ARC_X_R(c, 17) + UINT64_C(1)));
  /* c55f0: cmp x15, x17 */
  (void)arc_sub64(c, ARC_X_R(c, 15), ARC_X_R(c, 17));
  /* c55f4: orr x13, x3, x13 */
  ARC_X_W(c, 13, (ARC_X_R(c, 3) | ARC_X_R(c, 13)));
  /* c55f8: b.ne #0xc55dc */
  if (ARC_COND(c, 1)) goto L_c55dc;
L_c55fc:;
  /* c55fc: mov x17, x15 */
  ARC_X_W(c, 17, ARC_X_R(c, 15));
  /* c5600: mov x15, x0 */
  ARC_X_W(c, 15, ARC_X_R(c, 0));
  /* c5604: cbz w16, #0xc58b0 */
  if ((ARC_W_R(c, 16)) == 0) goto L_c58b0;
L_c5608:;
  /* c5608: cmp x15, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 15), UINT64_C(1));
  /* c560c: b.lt #0xc5628 */
  if (ARC_COND(c, 11)) goto L_c5628;
  /* c5610: cmp x15, #4 */
  (void)arc_sub64(c, ARC_X_R(c, 15), UINT64_C(4));
  /* c5614: b.hs #0xc563c */
  if (ARC_COND(c, 2)) goto L_c563c;
  /* c5618: mov x16, xzr */
  ARC_X_W(c, 16, ARC_X_R(c, 31));
  /* c561c: mov x14, xzr */
  ARC_X_W(c, 14, ARC_X_R(c, 31));
  /* c5620: mov x0, x12 */
  ARC_X_W(c, 0, ARC_X_R(c, 12));
  /* c5624: b #0xc5890 */
  goto L_c5890;
L_c5628:;
  /* c5628: cmp x13, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 13), UINT64_C(0));
  /* c562c: csel x14, x17, xzr, eq */
  ARC_X_W(c, 14, (ARC_COND(c, 0) ? (ARC_X_R(c, 17)) : ARC_X_R(c, 31)));
  /* c5630: cbz x13, #0xc5864 */
  if ((ARC_X_R(c, 13)) == 0) goto L_c5864;
  /* c5634: sub x12, x12, x15, lsl #1 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) - ((uint64_t)(ARC_X_R(c, 15)) << 1)));
  /* c5638: b #0xc5920 */
  goto L_c5920;
L_c563c:;
  /* c563c: cmp x15, #0x10 */
  (void)arc_sub64(c, ARC_X_R(c, 15), UINT64_C(16));
  /* c5640: b.hs #0xc5650 */
  if (ARC_COND(c, 2)) goto L_c5650;
  /* c5644: mov x16, xzr */
  ARC_X_W(c, 16, ARC_X_R(c, 31));
  /* c5648: mov x14, xzr */
  ARC_X_W(c, 14, ARC_X_R(c, 31));
  /* c564c: b #0xc57bc */
  goto L_c57bc;
L_c5650:;
  /* c5650: adrp x14, #0x52000 */
  ARC_X_W(c, 14, (arc_image_bases[1] + UINT64_C(335872)));
  /* c5654: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* c5658: movi v2.2d, #0000000000000000 */
  arc_v_clear(c, 2);
  /* c565c: ldr q16, [x14, #0xcc0] */
  arc_q_w(c, 16, arc_ld64((ARC_X_R(c, 14) + INT64_C(3264))), arc_ld64((ARC_X_R(c, 14) + INT64_C(3264)) + 8));
  /* c5660: adrp x14, #0x52000 */
  ARC_X_W(c, 14, (arc_image_bases[1] + UINT64_C(335872)));
  /* c5664: movi v1.2d, #0000000000000000 */
  arc_v_clear(c, 1);
  /* c5668: movi v3.2d, #0000000000000000 */
  arc_v_clear(c, 3);
  /* c566c: movi v4.2d, #0000000000000000 */
  arc_v_clear(c, 4);
  /* c5670: movi v6.2d, #0000000000000000 */
  arc_v_clear(c, 6);
  /* c5674: movi v5.2d, #0000000000000000 */
  arc_v_clear(c, 5);
  /* c5678: movi v7.2d, #0000000000000000 */
  arc_v_clear(c, 7);
  /* c567c: ldr q18, [x14, #0xc70] */
  arc_q_w(c, 18, arc_ld64((ARC_X_R(c, 14) + INT64_C(3184))), arc_ld64((ARC_X_R(c, 14) + INT64_C(3184)) + 8));
  /* c5680: adrp x14, #0x52000 */
  ARC_X_W(c, 14, (arc_image_bases[1] + UINT64_C(335872)));
  /* c5684: dup v17.8h, w8 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = (ARC_W_R(c, 8));
    _t.u16[1] = (ARC_W_R(c, 8));
    _t.u16[2] = (ARC_W_R(c, 8));
    _t.u16[3] = (ARC_W_R(c, 8));
    _t.u16[4] = (ARC_W_R(c, 8));
    _t.u16[5] = (ARC_W_R(c, 8));
    _t.u16[6] = (ARC_W_R(c, 8));
    _t.u16[7] = (ARC_W_R(c, 8));
    (c)->q[17] = _t; }
  /* c5688: and x16, x15, #0x7ffffffffffffff0 */
  ARC_X_W(c, 16, (ARC_X_R(c, 15) & UINT64_C(9223372036854775792)));
  /* c568c: ldr q19, [x14, #0xc10] */
  arc_q_w(c, 19, arc_ld64((ARC_X_R(c, 14) + INT64_C(3088))), arc_ld64((ARC_X_R(c, 14) + INT64_C(3088)) + 8));
  /* c5690: adrp x14, #0x52000 */
  ARC_X_W(c, 14, (arc_image_bases[1] + UINT64_C(335872)));
  /* c5694: mov x0, x16 */
  ARC_X_W(c, 0, ARC_X_R(c, 16));
  /* c5698: ldr q20, [x14, #0xa80] */
  arc_q_w(c, 20, arc_ld64((ARC_X_R(c, 14) + INT64_C(2688))), arc_ld64((ARC_X_R(c, 14) + INT64_C(2688)) + 8));
  /* c569c: sub x14, x12, #0xe */
  ARC_X_W(c, 14, (ARC_X_R(c, 12) - UINT64_C(14)));
L_c56a0:;
  /* c56a0: ldp q22, q21, [x14, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 14) + INT64_C(-16));
    arc_q_w(c, 22, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 21, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c56a4: dup v23.2d, x28 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 28));
    _t.u64[1] = (ARC_X_R(c, 28));
    (c)->q[23] = _t; }
  /* c56a8: dup v25.2d, x5 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 5));
    _t.u64[1] = (ARC_X_R(c, 5));
    (c)->q[25] = _t; }
  /* c56ac: sub x0, x0, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) - UINT64_C(16)));
  /* c56b0: sub x14, x14, #0x20 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) - UINT64_C(32)));
  /* c56b4: rev64 v21.8h, v21.8h */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = (c)->q[21].u16[3];
    _t.u16[1] = (c)->q[21].u16[2];
    _t.u16[2] = (c)->q[21].u16[1];
    _t.u16[3] = (c)->q[21].u16[0];
    _t.u16[4] = (c)->q[21].u16[7];
    _t.u16[5] = (c)->q[21].u16[6];
    _t.u16[6] = (c)->q[21].u16[5];
    _t.u16[7] = (c)->q[21].u16[4];
    (c)->q[21] = _t; }
  /* c56b8: rev64 v22.8h, v22.8h */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = (c)->q[22].u16[3];
    _t.u16[1] = (c)->q[22].u16[2];
    _t.u16[2] = (c)->q[22].u16[1];
    _t.u16[3] = (c)->q[22].u16[0];
    _t.u16[4] = (c)->q[22].u16[7];
    _t.u16[5] = (c)->q[22].u16[6];
    _t.u16[6] = (c)->q[22].u16[5];
    _t.u16[7] = (c)->q[22].u16[4];
    (c)->q[22] = _t; }
  /* c56bc: add v27.2d, v16.2d, v23.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[16].u64[0] + (c)->q[23].u64[0];
    _t.u64[1] = (c)->q[16].u64[1] + (c)->q[23].u64[1];
    (c)->q[27] = _t; }
  /* c56c0: add v28.2d, v18.2d, v23.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[18].u64[0] + (c)->q[23].u64[0];
    _t.u64[1] = (c)->q[18].u64[1] + (c)->q[23].u64[1];
    (c)->q[28] = _t; }
  /* c56c4: add v29.2d, v19.2d, v23.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[19].u64[0] + (c)->q[23].u64[0];
    _t.u64[1] = (c)->q[19].u64[1] + (c)->q[23].u64[1];
    (c)->q[29] = _t; }
  /* c56c8: add v23.2d, v20.2d, v23.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[20].u64[0] + (c)->q[23].u64[0];
    _t.u64[1] = (c)->q[20].u64[1] + (c)->q[23].u64[1];
    (c)->q[23] = _t; }
  /* c56cc: ext v21.16b, v21.16b, v21.16b, #8 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[21].u8[8];
    _t.u8[1] = (c)->q[21].u8[9];
    _t.u8[2] = (c)->q[21].u8[10];
    _t.u8[3] = (c)->q[21].u8[11];
    _t.u8[4] = (c)->q[21].u8[12];
    _t.u8[5] = (c)->q[21].u8[13];
    _t.u8[6] = (c)->q[21].u8[14];
    _t.u8[7] = (c)->q[21].u8[15];
    _t.u8[8] = (c)->q[21].u8[0];
    _t.u8[9] = (c)->q[21].u8[1];
    _t.u8[10] = (c)->q[21].u8[2];
    _t.u8[11] = (c)->q[21].u8[3];
    _t.u8[12] = (c)->q[21].u8[4];
    _t.u8[13] = (c)->q[21].u8[5];
    _t.u8[14] = (c)->q[21].u8[6];
    _t.u8[15] = (c)->q[21].u8[7];
    (c)->q[21] = _t; }
  /* c56d0: ext v22.16b, v22.16b, v22.16b, #8 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[22].u8[8];
    _t.u8[1] = (c)->q[22].u8[9];
    _t.u8[2] = (c)->q[22].u8[10];
    _t.u8[3] = (c)->q[22].u8[11];
    _t.u8[4] = (c)->q[22].u8[12];
    _t.u8[5] = (c)->q[22].u8[13];
    _t.u8[6] = (c)->q[22].u8[14];
    _t.u8[7] = (c)->q[22].u8[15];
    _t.u8[8] = (c)->q[22].u8[0];
    _t.u8[9] = (c)->q[22].u8[1];
    _t.u8[10] = (c)->q[22].u8[2];
    _t.u8[11] = (c)->q[22].u8[3];
    _t.u8[12] = (c)->q[22].u8[4];
    _t.u8[13] = (c)->q[22].u8[5];
    _t.u8[14] = (c)->q[22].u8[6];
    _t.u8[15] = (c)->q[22].u8[7];
    (c)->q[22] = _t; }
  /* c56d4: cmgt v21.8h, v17.8h, v21.8h */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = ((c)->q[17].i16[0] > (c)->q[21].i16[0]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[1] = ((c)->q[17].i16[1] > (c)->q[21].i16[1]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[2] = ((c)->q[17].i16[2] > (c)->q[21].i16[2]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[3] = ((c)->q[17].i16[3] > (c)->q[21].i16[3]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[4] = ((c)->q[17].i16[4] > (c)->q[21].i16[4]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[5] = ((c)->q[17].i16[5] > (c)->q[21].i16[5]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[6] = ((c)->q[17].i16[6] > (c)->q[21].i16[6]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[7] = ((c)->q[17].i16[7] > (c)->q[21].i16[7]) ? (uint16_t)~(uint16_t)0 : 0;
    (c)->q[21] = _t; }
  /* c56d8: cmgt v22.8h, v17.8h, v22.8h */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = ((c)->q[17].i16[0] > (c)->q[22].i16[0]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[1] = ((c)->q[17].i16[1] > (c)->q[22].i16[1]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[2] = ((c)->q[17].i16[2] > (c)->q[22].i16[2]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[3] = ((c)->q[17].i16[3] > (c)->q[22].i16[3]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[4] = ((c)->q[17].i16[4] > (c)->q[22].i16[4]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[5] = ((c)->q[17].i16[5] > (c)->q[22].i16[5]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[6] = ((c)->q[17].i16[6] > (c)->q[22].i16[6]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[7] = ((c)->q[17].i16[7] > (c)->q[22].i16[7]) ? (uint16_t)~(uint16_t)0 : 0;
    (c)->q[22] = _t; }
  /* c56dc: ushll2 v24.4s, v21.8h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((uint32_t)((c)->q[21].u16[4]) << 0);
    _t.u32[1] = (uint32_t)((uint32_t)((c)->q[21].u16[5]) << 0);
    _t.u32[2] = (uint32_t)((uint32_t)((c)->q[21].u16[6]) << 0);
    _t.u32[3] = (uint32_t)((uint32_t)((c)->q[21].u16[7]) << 0);
    (c)->q[24] = _t; }
  /* c56e0: ushll v21.4s, v21.4h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((uint32_t)((c)->q[21].u16[0]) << 0);
    _t.u32[1] = (uint32_t)((uint32_t)((c)->q[21].u16[1]) << 0);
    _t.u32[2] = (uint32_t)((uint32_t)((c)->q[21].u16[2]) << 0);
    _t.u32[3] = (uint32_t)((uint32_t)((c)->q[21].u16[3]) << 0);
    (c)->q[21] = _t; }
  /* c56e4: ushll2 v26.4s, v22.8h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((uint32_t)((c)->q[22].u16[4]) << 0);
    _t.u32[1] = (uint32_t)((uint32_t)((c)->q[22].u16[5]) << 0);
    _t.u32[2] = (uint32_t)((uint32_t)((c)->q[22].u16[6]) << 0);
    _t.u32[3] = (uint32_t)((uint32_t)((c)->q[22].u16[7]) << 0);
    (c)->q[26] = _t; }
  /* c56e8: ushll v22.4s, v22.4h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((uint32_t)((c)->q[22].u16[0]) << 0);
    _t.u32[1] = (uint32_t)((uint32_t)((c)->q[22].u16[1]) << 0);
    _t.u32[2] = (uint32_t)((uint32_t)((c)->q[22].u16[2]) << 0);
    _t.u32[3] = (uint32_t)((uint32_t)((c)->q[22].u16[3]) << 0);
    (c)->q[22] = _t; }
  /* c56ec: ushll2 v30.2d, v24.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[24].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[24].u32[3]) << 0);
    (c)->q[30] = _t; }
  /* c56f0: ushll v24.2d, v24.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[24].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[24].u32[1]) << 0);
    (c)->q[24] = _t; }
  /* c56f4: ushll2 v31.2d, v21.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[21].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[21].u32[3]) << 0);
    (c)->q[31] = _t; }
  /* c56f8: ushll v21.2d, v21.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[21].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[21].u32[1]) << 0);
    (c)->q[21] = _t; }
  /* c56fc: ushll2 v8.2d, v26.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[26].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[26].u32[3]) << 0);
    (c)->q[8] = _t; }
  /* c5700: ushll v26.2d, v26.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[26].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[26].u32[1]) << 0);
    (c)->q[26] = _t; }
  /* c5704: ushll2 v9.2d, v22.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[22].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[22].u32[3]) << 0);
    (c)->q[9] = _t; }
  /* c5708: ushll v22.2d, v22.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[22].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[22].u32[1]) << 0);
    (c)->q[22] = _t; }
  /* c570c: and v30.16b, v30.16b, v25.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[30].u8[0] & (c)->q[25].u8[0];
    _t.u8[1] = (c)->q[30].u8[1] & (c)->q[25].u8[1];
    _t.u8[2] = (c)->q[30].u8[2] & (c)->q[25].u8[2];
    _t.u8[3] = (c)->q[30].u8[3] & (c)->q[25].u8[3];
    _t.u8[4] = (c)->q[30].u8[4] & (c)->q[25].u8[4];
    _t.u8[5] = (c)->q[30].u8[5] & (c)->q[25].u8[5];
    _t.u8[6] = (c)->q[30].u8[6] & (c)->q[25].u8[6];
    _t.u8[7] = (c)->q[30].u8[7] & (c)->q[25].u8[7];
    _t.u8[8] = (c)->q[30].u8[8] & (c)->q[25].u8[8];
    _t.u8[9] = (c)->q[30].u8[9] & (c)->q[25].u8[9];
    _t.u8[10] = (c)->q[30].u8[10] & (c)->q[25].u8[10];
    _t.u8[11] = (c)->q[30].u8[11] & (c)->q[25].u8[11];
    _t.u8[12] = (c)->q[30].u8[12] & (c)->q[25].u8[12];
    _t.u8[13] = (c)->q[30].u8[13] & (c)->q[25].u8[13];
    _t.u8[14] = (c)->q[30].u8[14] & (c)->q[25].u8[14];
    _t.u8[15] = (c)->q[30].u8[15] & (c)->q[25].u8[15];
    (c)->q[30] = _t; }
  /* c5710: and v24.16b, v24.16b, v25.16b */
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
  /* c5714: and v31.16b, v31.16b, v25.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[31].u8[0] & (c)->q[25].u8[0];
    _t.u8[1] = (c)->q[31].u8[1] & (c)->q[25].u8[1];
    _t.u8[2] = (c)->q[31].u8[2] & (c)->q[25].u8[2];
    _t.u8[3] = (c)->q[31].u8[3] & (c)->q[25].u8[3];
    _t.u8[4] = (c)->q[31].u8[4] & (c)->q[25].u8[4];
    _t.u8[5] = (c)->q[31].u8[5] & (c)->q[25].u8[5];
    _t.u8[6] = (c)->q[31].u8[6] & (c)->q[25].u8[6];
    _t.u8[7] = (c)->q[31].u8[7] & (c)->q[25].u8[7];
    _t.u8[8] = (c)->q[31].u8[8] & (c)->q[25].u8[8];
    _t.u8[9] = (c)->q[31].u8[9] & (c)->q[25].u8[9];
    _t.u8[10] = (c)->q[31].u8[10] & (c)->q[25].u8[10];
    _t.u8[11] = (c)->q[31].u8[11] & (c)->q[25].u8[11];
    _t.u8[12] = (c)->q[31].u8[12] & (c)->q[25].u8[12];
    _t.u8[13] = (c)->q[31].u8[13] & (c)->q[25].u8[13];
    _t.u8[14] = (c)->q[31].u8[14] & (c)->q[25].u8[14];
    _t.u8[15] = (c)->q[31].u8[15] & (c)->q[25].u8[15];
    (c)->q[31] = _t; }
  /* c5718: and v21.16b, v21.16b, v25.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[21].u8[0] & (c)->q[25].u8[0];
    _t.u8[1] = (c)->q[21].u8[1] & (c)->q[25].u8[1];
    _t.u8[2] = (c)->q[21].u8[2] & (c)->q[25].u8[2];
    _t.u8[3] = (c)->q[21].u8[3] & (c)->q[25].u8[3];
    _t.u8[4] = (c)->q[21].u8[4] & (c)->q[25].u8[4];
    _t.u8[5] = (c)->q[21].u8[5] & (c)->q[25].u8[5];
    _t.u8[6] = (c)->q[21].u8[6] & (c)->q[25].u8[6];
    _t.u8[7] = (c)->q[21].u8[7] & (c)->q[25].u8[7];
    _t.u8[8] = (c)->q[21].u8[8] & (c)->q[25].u8[8];
    _t.u8[9] = (c)->q[21].u8[9] & (c)->q[25].u8[9];
    _t.u8[10] = (c)->q[21].u8[10] & (c)->q[25].u8[10];
    _t.u8[11] = (c)->q[21].u8[11] & (c)->q[25].u8[11];
    _t.u8[12] = (c)->q[21].u8[12] & (c)->q[25].u8[12];
    _t.u8[13] = (c)->q[21].u8[13] & (c)->q[25].u8[13];
    _t.u8[14] = (c)->q[21].u8[14] & (c)->q[25].u8[14];
    _t.u8[15] = (c)->q[21].u8[15] & (c)->q[25].u8[15];
    (c)->q[21] = _t; }
  /* c571c: and v8.16b, v8.16b, v25.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[8].u8[0] & (c)->q[25].u8[0];
    _t.u8[1] = (c)->q[8].u8[1] & (c)->q[25].u8[1];
    _t.u8[2] = (c)->q[8].u8[2] & (c)->q[25].u8[2];
    _t.u8[3] = (c)->q[8].u8[3] & (c)->q[25].u8[3];
    _t.u8[4] = (c)->q[8].u8[4] & (c)->q[25].u8[4];
    _t.u8[5] = (c)->q[8].u8[5] & (c)->q[25].u8[5];
    _t.u8[6] = (c)->q[8].u8[6] & (c)->q[25].u8[6];
    _t.u8[7] = (c)->q[8].u8[7] & (c)->q[25].u8[7];
    _t.u8[8] = (c)->q[8].u8[8] & (c)->q[25].u8[8];
    _t.u8[9] = (c)->q[8].u8[9] & (c)->q[25].u8[9];
    _t.u8[10] = (c)->q[8].u8[10] & (c)->q[25].u8[10];
    _t.u8[11] = (c)->q[8].u8[11] & (c)->q[25].u8[11];
    _t.u8[12] = (c)->q[8].u8[12] & (c)->q[25].u8[12];
    _t.u8[13] = (c)->q[8].u8[13] & (c)->q[25].u8[13];
    _t.u8[14] = (c)->q[8].u8[14] & (c)->q[25].u8[14];
    _t.u8[15] = (c)->q[8].u8[15] & (c)->q[25].u8[15];
    (c)->q[8] = _t; }
  /* c5720: and v26.16b, v26.16b, v25.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[26].u8[0] & (c)->q[25].u8[0];
    _t.u8[1] = (c)->q[26].u8[1] & (c)->q[25].u8[1];
    _t.u8[2] = (c)->q[26].u8[2] & (c)->q[25].u8[2];
    _t.u8[3] = (c)->q[26].u8[3] & (c)->q[25].u8[3];
    _t.u8[4] = (c)->q[26].u8[4] & (c)->q[25].u8[4];
    _t.u8[5] = (c)->q[26].u8[5] & (c)->q[25].u8[5];
    _t.u8[6] = (c)->q[26].u8[6] & (c)->q[25].u8[6];
    _t.u8[7] = (c)->q[26].u8[7] & (c)->q[25].u8[7];
    _t.u8[8] = (c)->q[26].u8[8] & (c)->q[25].u8[8];
    _t.u8[9] = (c)->q[26].u8[9] & (c)->q[25].u8[9];
    _t.u8[10] = (c)->q[26].u8[10] & (c)->q[25].u8[10];
    _t.u8[11] = (c)->q[26].u8[11] & (c)->q[25].u8[11];
    _t.u8[12] = (c)->q[26].u8[12] & (c)->q[25].u8[12];
    _t.u8[13] = (c)->q[26].u8[13] & (c)->q[25].u8[13];
    _t.u8[14] = (c)->q[26].u8[14] & (c)->q[25].u8[14];
    _t.u8[15] = (c)->q[26].u8[15] & (c)->q[25].u8[15];
    (c)->q[26] = _t; }
  /* c5724: and v9.16b, v9.16b, v25.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[9].u8[0] & (c)->q[25].u8[0];
    _t.u8[1] = (c)->q[9].u8[1] & (c)->q[25].u8[1];
    _t.u8[2] = (c)->q[9].u8[2] & (c)->q[25].u8[2];
    _t.u8[3] = (c)->q[9].u8[3] & (c)->q[25].u8[3];
    _t.u8[4] = (c)->q[9].u8[4] & (c)->q[25].u8[4];
    _t.u8[5] = (c)->q[9].u8[5] & (c)->q[25].u8[5];
    _t.u8[6] = (c)->q[9].u8[6] & (c)->q[25].u8[6];
    _t.u8[7] = (c)->q[9].u8[7] & (c)->q[25].u8[7];
    _t.u8[8] = (c)->q[9].u8[8] & (c)->q[25].u8[8];
    _t.u8[9] = (c)->q[9].u8[9] & (c)->q[25].u8[9];
    _t.u8[10] = (c)->q[9].u8[10] & (c)->q[25].u8[10];
    _t.u8[11] = (c)->q[9].u8[11] & (c)->q[25].u8[11];
    _t.u8[12] = (c)->q[9].u8[12] & (c)->q[25].u8[12];
    _t.u8[13] = (c)->q[9].u8[13] & (c)->q[25].u8[13];
    _t.u8[14] = (c)->q[9].u8[14] & (c)->q[25].u8[14];
    _t.u8[15] = (c)->q[9].u8[15] & (c)->q[25].u8[15];
    (c)->q[9] = _t; }
  /* c5728: and v22.16b, v22.16b, v25.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[22].u8[0] & (c)->q[25].u8[0];
    _t.u8[1] = (c)->q[22].u8[1] & (c)->q[25].u8[1];
    _t.u8[2] = (c)->q[22].u8[2] & (c)->q[25].u8[2];
    _t.u8[3] = (c)->q[22].u8[3] & (c)->q[25].u8[3];
    _t.u8[4] = (c)->q[22].u8[4] & (c)->q[25].u8[4];
    _t.u8[5] = (c)->q[22].u8[5] & (c)->q[25].u8[5];
    _t.u8[6] = (c)->q[22].u8[6] & (c)->q[25].u8[6];
    _t.u8[7] = (c)->q[22].u8[7] & (c)->q[25].u8[7];
    _t.u8[8] = (c)->q[22].u8[8] & (c)->q[25].u8[8];
    _t.u8[9] = (c)->q[22].u8[9] & (c)->q[25].u8[9];
    _t.u8[10] = (c)->q[22].u8[10] & (c)->q[25].u8[10];
    _t.u8[11] = (c)->q[22].u8[11] & (c)->q[25].u8[11];
    _t.u8[12] = (c)->q[22].u8[12] & (c)->q[25].u8[12];
    _t.u8[13] = (c)->q[22].u8[13] & (c)->q[25].u8[13];
    _t.u8[14] = (c)->q[22].u8[14] & (c)->q[25].u8[14];
    _t.u8[15] = (c)->q[22].u8[15] & (c)->q[25].u8[15];
    (c)->q[22] = _t; }
  /* c572c: dup v25.2d, x30 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 30));
    _t.u64[1] = (ARC_X_R(c, 30));
    (c)->q[25] = _t; }
  /* c5730: ushl v24.2d, v24.2d, v18.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[24].u64[0], (int8_t)(c)->q[18].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[24].u64[1], (int8_t)(c)->q[18].u64[1]);
    (c)->q[24] = _t; }
  /* c5734: ushl v30.2d, v30.2d, v16.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[30].u64[0], (int8_t)(c)->q[16].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[30].u64[1], (int8_t)(c)->q[16].u64[1]);
    (c)->q[30] = _t; }
  /* c5738: ushl v31.2d, v31.2d, v19.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[31].u64[0], (int8_t)(c)->q[19].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[31].u64[1], (int8_t)(c)->q[19].u64[1]);
    (c)->q[31] = _t; }
  /* c573c: ushl v21.2d, v21.2d, v20.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[21].u64[0], (int8_t)(c)->q[20].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[21].u64[1], (int8_t)(c)->q[20].u64[1]);
    (c)->q[21] = _t; }
  /* c5740: ushl v27.2d, v8.2d, v27.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[8].u64[0], (int8_t)(c)->q[27].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[8].u64[1], (int8_t)(c)->q[27].u64[1]);
    (c)->q[27] = _t; }
  /* c5744: ushl v26.2d, v26.2d, v28.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[26].u64[0], (int8_t)(c)->q[28].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[26].u64[1], (int8_t)(c)->q[28].u64[1]);
    (c)->q[26] = _t; }
  /* c5748: ushl v22.2d, v22.2d, v23.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[22].u64[0], (int8_t)(c)->q[23].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[22].u64[1], (int8_t)(c)->q[23].u64[1]);
    (c)->q[22] = _t; }
  /* c574c: ushl v23.2d, v9.2d, v29.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[9].u64[0], (int8_t)(c)->q[29].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[9].u64[1], (int8_t)(c)->q[29].u64[1]);
    (c)->q[23] = _t; }
  /* c5750: add v18.2d, v18.2d, v25.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[18].u64[0] + (c)->q[25].u64[0];
    _t.u64[1] = (c)->q[18].u64[1] + (c)->q[25].u64[1];
    (c)->q[18] = _t; }
  /* c5754: orr v3.16b, v30.16b, v3.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[30].u8[0] | (c)->q[3].u8[0];
    _t.u8[1] = (c)->q[30].u8[1] | (c)->q[3].u8[1];
    _t.u8[2] = (c)->q[30].u8[2] | (c)->q[3].u8[2];
    _t.u8[3] = (c)->q[30].u8[3] | (c)->q[3].u8[3];
    _t.u8[4] = (c)->q[30].u8[4] | (c)->q[3].u8[4];
    _t.u8[5] = (c)->q[30].u8[5] | (c)->q[3].u8[5];
    _t.u8[6] = (c)->q[30].u8[6] | (c)->q[3].u8[6];
    _t.u8[7] = (c)->q[30].u8[7] | (c)->q[3].u8[7];
    _t.u8[8] = (c)->q[30].u8[8] | (c)->q[3].u8[8];
    _t.u8[9] = (c)->q[30].u8[9] | (c)->q[3].u8[9];
    _t.u8[10] = (c)->q[30].u8[10] | (c)->q[3].u8[10];
    _t.u8[11] = (c)->q[30].u8[11] | (c)->q[3].u8[11];
    _t.u8[12] = (c)->q[30].u8[12] | (c)->q[3].u8[12];
    _t.u8[13] = (c)->q[30].u8[13] | (c)->q[3].u8[13];
    _t.u8[14] = (c)->q[30].u8[14] | (c)->q[3].u8[14];
    _t.u8[15] = (c)->q[30].u8[15] | (c)->q[3].u8[15];
    (c)->q[3] = _t; }
  /* c5758: orr v1.16b, v24.16b, v1.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[24].u8[0] | (c)->q[1].u8[0];
    _t.u8[1] = (c)->q[24].u8[1] | (c)->q[1].u8[1];
    _t.u8[2] = (c)->q[24].u8[2] | (c)->q[1].u8[2];
    _t.u8[3] = (c)->q[24].u8[3] | (c)->q[1].u8[3];
    _t.u8[4] = (c)->q[24].u8[4] | (c)->q[1].u8[4];
    _t.u8[5] = (c)->q[24].u8[5] | (c)->q[1].u8[5];
    _t.u8[6] = (c)->q[24].u8[6] | (c)->q[1].u8[6];
    _t.u8[7] = (c)->q[24].u8[7] | (c)->q[1].u8[7];
    _t.u8[8] = (c)->q[24].u8[8] | (c)->q[1].u8[8];
    _t.u8[9] = (c)->q[24].u8[9] | (c)->q[1].u8[9];
    _t.u8[10] = (c)->q[24].u8[10] | (c)->q[1].u8[10];
    _t.u8[11] = (c)->q[24].u8[11] | (c)->q[1].u8[11];
    _t.u8[12] = (c)->q[24].u8[12] | (c)->q[1].u8[12];
    _t.u8[13] = (c)->q[24].u8[13] | (c)->q[1].u8[13];
    _t.u8[14] = (c)->q[24].u8[14] | (c)->q[1].u8[14];
    _t.u8[15] = (c)->q[24].u8[15] | (c)->q[1].u8[15];
    (c)->q[1] = _t; }
  /* c575c: orr v2.16b, v31.16b, v2.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[31].u8[0] | (c)->q[2].u8[0];
    _t.u8[1] = (c)->q[31].u8[1] | (c)->q[2].u8[1];
    _t.u8[2] = (c)->q[31].u8[2] | (c)->q[2].u8[2];
    _t.u8[3] = (c)->q[31].u8[3] | (c)->q[2].u8[3];
    _t.u8[4] = (c)->q[31].u8[4] | (c)->q[2].u8[4];
    _t.u8[5] = (c)->q[31].u8[5] | (c)->q[2].u8[5];
    _t.u8[6] = (c)->q[31].u8[6] | (c)->q[2].u8[6];
    _t.u8[7] = (c)->q[31].u8[7] | (c)->q[2].u8[7];
    _t.u8[8] = (c)->q[31].u8[8] | (c)->q[2].u8[8];
    _t.u8[9] = (c)->q[31].u8[9] | (c)->q[2].u8[9];
    _t.u8[10] = (c)->q[31].u8[10] | (c)->q[2].u8[10];
    _t.u8[11] = (c)->q[31].u8[11] | (c)->q[2].u8[11];
    _t.u8[12] = (c)->q[31].u8[12] | (c)->q[2].u8[12];
    _t.u8[13] = (c)->q[31].u8[13] | (c)->q[2].u8[13];
    _t.u8[14] = (c)->q[31].u8[14] | (c)->q[2].u8[14];
    _t.u8[15] = (c)->q[31].u8[15] | (c)->q[2].u8[15];
    (c)->q[2] = _t; }
  /* c5760: orr v0.16b, v21.16b, v0.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[21].u8[0] | (c)->q[0].u8[0];
    _t.u8[1] = (c)->q[21].u8[1] | (c)->q[0].u8[1];
    _t.u8[2] = (c)->q[21].u8[2] | (c)->q[0].u8[2];
    _t.u8[3] = (c)->q[21].u8[3] | (c)->q[0].u8[3];
    _t.u8[4] = (c)->q[21].u8[4] | (c)->q[0].u8[4];
    _t.u8[5] = (c)->q[21].u8[5] | (c)->q[0].u8[5];
    _t.u8[6] = (c)->q[21].u8[6] | (c)->q[0].u8[6];
    _t.u8[7] = (c)->q[21].u8[7] | (c)->q[0].u8[7];
    _t.u8[8] = (c)->q[21].u8[8] | (c)->q[0].u8[8];
    _t.u8[9] = (c)->q[21].u8[9] | (c)->q[0].u8[9];
    _t.u8[10] = (c)->q[21].u8[10] | (c)->q[0].u8[10];
    _t.u8[11] = (c)->q[21].u8[11] | (c)->q[0].u8[11];
    _t.u8[12] = (c)->q[21].u8[12] | (c)->q[0].u8[12];
    _t.u8[13] = (c)->q[21].u8[13] | (c)->q[0].u8[13];
    _t.u8[14] = (c)->q[21].u8[14] | (c)->q[0].u8[14];
    _t.u8[15] = (c)->q[21].u8[15] | (c)->q[0].u8[15];
    (c)->q[0] = _t; }
  /* c5764: orr v7.16b, v27.16b, v7.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[27].u8[0] | (c)->q[7].u8[0];
    _t.u8[1] = (c)->q[27].u8[1] | (c)->q[7].u8[1];
    _t.u8[2] = (c)->q[27].u8[2] | (c)->q[7].u8[2];
    _t.u8[3] = (c)->q[27].u8[3] | (c)->q[7].u8[3];
    _t.u8[4] = (c)->q[27].u8[4] | (c)->q[7].u8[4];
    _t.u8[5] = (c)->q[27].u8[5] | (c)->q[7].u8[5];
    _t.u8[6] = (c)->q[27].u8[6] | (c)->q[7].u8[6];
    _t.u8[7] = (c)->q[27].u8[7] | (c)->q[7].u8[7];
    _t.u8[8] = (c)->q[27].u8[8] | (c)->q[7].u8[8];
    _t.u8[9] = (c)->q[27].u8[9] | (c)->q[7].u8[9];
    _t.u8[10] = (c)->q[27].u8[10] | (c)->q[7].u8[10];
    _t.u8[11] = (c)->q[27].u8[11] | (c)->q[7].u8[11];
    _t.u8[12] = (c)->q[27].u8[12] | (c)->q[7].u8[12];
    _t.u8[13] = (c)->q[27].u8[13] | (c)->q[7].u8[13];
    _t.u8[14] = (c)->q[27].u8[14] | (c)->q[7].u8[14];
    _t.u8[15] = (c)->q[27].u8[15] | (c)->q[7].u8[15];
    (c)->q[7] = _t; }
  /* c5768: orr v5.16b, v26.16b, v5.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[26].u8[0] | (c)->q[5].u8[0];
    _t.u8[1] = (c)->q[26].u8[1] | (c)->q[5].u8[1];
    _t.u8[2] = (c)->q[26].u8[2] | (c)->q[5].u8[2];
    _t.u8[3] = (c)->q[26].u8[3] | (c)->q[5].u8[3];
    _t.u8[4] = (c)->q[26].u8[4] | (c)->q[5].u8[4];
    _t.u8[5] = (c)->q[26].u8[5] | (c)->q[5].u8[5];
    _t.u8[6] = (c)->q[26].u8[6] | (c)->q[5].u8[6];
    _t.u8[7] = (c)->q[26].u8[7] | (c)->q[5].u8[7];
    _t.u8[8] = (c)->q[26].u8[8] | (c)->q[5].u8[8];
    _t.u8[9] = (c)->q[26].u8[9] | (c)->q[5].u8[9];
    _t.u8[10] = (c)->q[26].u8[10] | (c)->q[5].u8[10];
    _t.u8[11] = (c)->q[26].u8[11] | (c)->q[5].u8[11];
    _t.u8[12] = (c)->q[26].u8[12] | (c)->q[5].u8[12];
    _t.u8[13] = (c)->q[26].u8[13] | (c)->q[5].u8[13];
    _t.u8[14] = (c)->q[26].u8[14] | (c)->q[5].u8[14];
    _t.u8[15] = (c)->q[26].u8[15] | (c)->q[5].u8[15];
    (c)->q[5] = _t; }
  /* c576c: orr v6.16b, v23.16b, v6.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[23].u8[0] | (c)->q[6].u8[0];
    _t.u8[1] = (c)->q[23].u8[1] | (c)->q[6].u8[1];
    _t.u8[2] = (c)->q[23].u8[2] | (c)->q[6].u8[2];
    _t.u8[3] = (c)->q[23].u8[3] | (c)->q[6].u8[3];
    _t.u8[4] = (c)->q[23].u8[4] | (c)->q[6].u8[4];
    _t.u8[5] = (c)->q[23].u8[5] | (c)->q[6].u8[5];
    _t.u8[6] = (c)->q[23].u8[6] | (c)->q[6].u8[6];
    _t.u8[7] = (c)->q[23].u8[7] | (c)->q[6].u8[7];
    _t.u8[8] = (c)->q[23].u8[8] | (c)->q[6].u8[8];
    _t.u8[9] = (c)->q[23].u8[9] | (c)->q[6].u8[9];
    _t.u8[10] = (c)->q[23].u8[10] | (c)->q[6].u8[10];
    _t.u8[11] = (c)->q[23].u8[11] | (c)->q[6].u8[11];
    _t.u8[12] = (c)->q[23].u8[12] | (c)->q[6].u8[12];
    _t.u8[13] = (c)->q[23].u8[13] | (c)->q[6].u8[13];
    _t.u8[14] = (c)->q[23].u8[14] | (c)->q[6].u8[14];
    _t.u8[15] = (c)->q[23].u8[15] | (c)->q[6].u8[15];
    (c)->q[6] = _t; }
  /* c5770: orr v4.16b, v22.16b, v4.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[22].u8[0] | (c)->q[4].u8[0];
    _t.u8[1] = (c)->q[22].u8[1] | (c)->q[4].u8[1];
    _t.u8[2] = (c)->q[22].u8[2] | (c)->q[4].u8[2];
    _t.u8[3] = (c)->q[22].u8[3] | (c)->q[4].u8[3];
    _t.u8[4] = (c)->q[22].u8[4] | (c)->q[4].u8[4];
    _t.u8[5] = (c)->q[22].u8[5] | (c)->q[4].u8[5];
    _t.u8[6] = (c)->q[22].u8[6] | (c)->q[4].u8[6];
    _t.u8[7] = (c)->q[22].u8[7] | (c)->q[4].u8[7];
    _t.u8[8] = (c)->q[22].u8[8] | (c)->q[4].u8[8];
    _t.u8[9] = (c)->q[22].u8[9] | (c)->q[4].u8[9];
    _t.u8[10] = (c)->q[22].u8[10] | (c)->q[4].u8[10];
    _t.u8[11] = (c)->q[22].u8[11] | (c)->q[4].u8[11];
    _t.u8[12] = (c)->q[22].u8[12] | (c)->q[4].u8[12];
    _t.u8[13] = (c)->q[22].u8[13] | (c)->q[4].u8[13];
    _t.u8[14] = (c)->q[22].u8[14] | (c)->q[4].u8[14];
    _t.u8[15] = (c)->q[22].u8[15] | (c)->q[4].u8[15];
    (c)->q[4] = _t; }
  /* c5774: add v19.2d, v19.2d, v25.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[19].u64[0] + (c)->q[25].u64[0];
    _t.u64[1] = (c)->q[19].u64[1] + (c)->q[25].u64[1];
    (c)->q[19] = _t; }
  /* c5778: add v20.2d, v20.2d, v25.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[20].u64[0] + (c)->q[25].u64[0];
    _t.u64[1] = (c)->q[20].u64[1] + (c)->q[25].u64[1];
    (c)->q[20] = _t; }
  /* c577c: add v16.2d, v16.2d, v25.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[16].u64[0] + (c)->q[25].u64[0];
    _t.u64[1] = (c)->q[16].u64[1] + (c)->q[25].u64[1];
    (c)->q[16] = _t; }
  /* c5780: cbnz x0, #0xc56a0 */
  if ((ARC_X_R(c, 0)) != 0) goto L_c56a0;
  /* c5784: orr v2.16b, v6.16b, v2.16b */
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
  /* c5788: orr v3.16b, v7.16b, v3.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[7].u8[0] | (c)->q[3].u8[0];
    _t.u8[1] = (c)->q[7].u8[1] | (c)->q[3].u8[1];
    _t.u8[2] = (c)->q[7].u8[2] | (c)->q[3].u8[2];
    _t.u8[3] = (c)->q[7].u8[3] | (c)->q[3].u8[3];
    _t.u8[4] = (c)->q[7].u8[4] | (c)->q[3].u8[4];
    _t.u8[5] = (c)->q[7].u8[5] | (c)->q[3].u8[5];
    _t.u8[6] = (c)->q[7].u8[6] | (c)->q[3].u8[6];
    _t.u8[7] = (c)->q[7].u8[7] | (c)->q[3].u8[7];
    _t.u8[8] = (c)->q[7].u8[8] | (c)->q[3].u8[8];
    _t.u8[9] = (c)->q[7].u8[9] | (c)->q[3].u8[9];
    _t.u8[10] = (c)->q[7].u8[10] | (c)->q[3].u8[10];
    _t.u8[11] = (c)->q[7].u8[11] | (c)->q[3].u8[11];
    _t.u8[12] = (c)->q[7].u8[12] | (c)->q[3].u8[12];
    _t.u8[13] = (c)->q[7].u8[13] | (c)->q[3].u8[13];
    _t.u8[14] = (c)->q[7].u8[14] | (c)->q[3].u8[14];
    _t.u8[15] = (c)->q[7].u8[15] | (c)->q[3].u8[15];
    (c)->q[3] = _t; }
  /* c578c: cmp x15, x16 */
  (void)arc_sub64(c, ARC_X_R(c, 15), ARC_X_R(c, 16));
  /* c5790: orr v0.16b, v4.16b, v0.16b */
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
  /* c5794: orr v1.16b, v5.16b, v1.16b */
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
  /* c5798: orr v0.16b, v0.16b, v1.16b */
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
  /* c579c: orr v1.16b, v2.16b, v3.16b */
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
  /* c57a0: orr v0.16b, v0.16b, v1.16b */
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
  /* c57a4: ext v1.16b, v0.16b, v0.16b, #8 */
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
  /* c57a8: orr v0.8b, v0.8b, v1.8b */
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
  /* c57ac: fmov x14, d0 */
  ARC_X_W(c, 14, ARC_DU_R(c, 0));
  /* c57b0: b.eq #0xc58b0 */
  if (ARC_COND(c, 0)) goto L_c58b0;
  /* c57b4: tst x15, #0xc */
  arc_flags_logical64(c, (uint64_t)(ARC_X_R(c, 15) & UINT64_C(12)));
  /* c57b8: b.eq #0xc588c */
  if (ARC_COND(c, 0)) goto L_c588c;
L_c57bc:;
  /* c57bc: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* c57c0: mov x1, x16 */
  ARC_X_W(c, 1, ARC_X_R(c, 16));
  /* c57c4: dup v4.2d, x16 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 16));
    _t.u64[1] = (ARC_X_R(c, 16));
    (c)->q[4] = _t; }
  /* c57c8: adrp x16, #0x52000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(335872)));
  /* c57cc: dup v3.4h, w8 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = (ARC_W_R(c, 8));
    _t.u16[1] = (ARC_W_R(c, 8));
    _t.u16[2] = (ARC_W_R(c, 8));
    _t.u16[3] = (ARC_W_R(c, 8));
    (c)->q[3] = _t; }
  /* c57d0: sub x3, x12, x1, lsl #1 */
  ARC_X_W(c, 3, (ARC_X_R(c, 12) - ((uint64_t)(ARC_X_R(c, 1)) << 1)));
  /* c57d4: ldr q1, [x16, #0xc10] */
  arc_q_w(c, 1, arc_ld64((ARC_X_R(c, 16) + INT64_C(3088))), arc_ld64((ARC_X_R(c, 16) + INT64_C(3088)) + 8));
  /* c57d8: adrp x16, #0x52000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(335872)));
  /* c57dc: ldr q5, [x16, #0xa80] */
  arc_q_w(c, 5, arc_ld64((ARC_X_R(c, 16) + INT64_C(2688))), arc_ld64((ARC_X_R(c, 16) + INT64_C(2688)) + 8));
  /* c57e0: and x16, x15, #0x7ffffffffffffffc */
  ARC_X_W(c, 16, (ARC_X_R(c, 15) & UINT64_C(9223372036854775804)));
  /* c57e4: orr v2.16b, v4.16b, v1.16b */
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
    (c)->q[2] = _t; }
  /* c57e8: movi v1.2d, #0000000000000000 */
  arc_v_clear(c, 1);
  /* c57ec: mov v0.d[0], x14 */
  (c)->q[0].u64[0] = (ARC_X_R(c, 14));
  /* c57f0: orr v4.16b, v4.16b, v5.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[4].u8[0] | (c)->q[5].u8[0];
    _t.u8[1] = (c)->q[4].u8[1] | (c)->q[5].u8[1];
    _t.u8[2] = (c)->q[4].u8[2] | (c)->q[5].u8[2];
    _t.u8[3] = (c)->q[4].u8[3] | (c)->q[5].u8[3];
    _t.u8[4] = (c)->q[4].u8[4] | (c)->q[5].u8[4];
    _t.u8[5] = (c)->q[4].u8[5] | (c)->q[5].u8[5];
    _t.u8[6] = (c)->q[4].u8[6] | (c)->q[5].u8[6];
    _t.u8[7] = (c)->q[4].u8[7] | (c)->q[5].u8[7];
    _t.u8[8] = (c)->q[4].u8[8] | (c)->q[5].u8[8];
    _t.u8[9] = (c)->q[4].u8[9] | (c)->q[5].u8[9];
    _t.u8[10] = (c)->q[4].u8[10] | (c)->q[5].u8[10];
    _t.u8[11] = (c)->q[4].u8[11] | (c)->q[5].u8[11];
    _t.u8[12] = (c)->q[4].u8[12] | (c)->q[5].u8[12];
    _t.u8[13] = (c)->q[4].u8[13] | (c)->q[5].u8[13];
    _t.u8[14] = (c)->q[4].u8[14] | (c)->q[5].u8[14];
    _t.u8[15] = (c)->q[4].u8[15] | (c)->q[5].u8[15];
    (c)->q[4] = _t; }
  /* c57f4: sub x0, x12, x16, lsl #1 */
  ARC_X_W(c, 0, (ARC_X_R(c, 12) - ((uint64_t)(ARC_X_R(c, 16)) << 1)));
  /* c57f8: sub x14, x1, x16 */
  ARC_X_W(c, 14, (ARC_X_R(c, 1) - ARC_X_R(c, 16)));
  /* c57fc: sub x1, x3, #6 */
  ARC_X_W(c, 1, (ARC_X_R(c, 3) - UINT64_C(6)));
L_c5800:;
  /* c5800: ldr d5, [x1], #0xfffffffffffffff8 */
  arc_du_w(c, 5, arc_ld64(ARC_X_R(c, 1)));
  ARC_X_W(c, 1, ARC_X_R(c, 1) + INT64_C(-8));
  /* c5804: dup v6.2d, x5 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 5));
    _t.u64[1] = (ARC_X_R(c, 5));
    (c)->q[6] = _t; }
  /* c5808: adds x14, x14, #4 */
  ARC_X_W(c, 14, arc_add64(c, ARC_X_R(c, 14), UINT64_C(4), 0));
  /* c580c: rev64 v5.4h, v5.4h */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = (c)->q[5].u16[3];
    _t.u16[1] = (c)->q[5].u16[2];
    _t.u16[2] = (c)->q[5].u16[1];
    _t.u16[3] = (c)->q[5].u16[0];
    (c)->q[5] = _t; }
  /* c5810: cmgt v5.4h, v3.4h, v5.4h */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = ((c)->q[3].i16[0] > (c)->q[5].i16[0]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[1] = ((c)->q[3].i16[1] > (c)->q[5].i16[1]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[2] = ((c)->q[3].i16[2] > (c)->q[5].i16[2]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[3] = ((c)->q[3].i16[3] > (c)->q[5].i16[3]) ? (uint16_t)~(uint16_t)0 : 0;
    (c)->q[5] = _t; }
  /* c5814: ushll v5.4s, v5.4h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((uint32_t)((c)->q[5].u16[0]) << 0);
    _t.u32[1] = (uint32_t)((uint32_t)((c)->q[5].u16[1]) << 0);
    _t.u32[2] = (uint32_t)((uint32_t)((c)->q[5].u16[2]) << 0);
    _t.u32[3] = (uint32_t)((uint32_t)((c)->q[5].u16[3]) << 0);
    (c)->q[5] = _t; }
  /* c5818: ushll2 v7.2d, v5.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[5].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[5].u32[3]) << 0);
    (c)->q[7] = _t; }
  /* c581c: ushll v5.2d, v5.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[5].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[5].u32[1]) << 0);
    (c)->q[5] = _t; }
  /* c5820: and v7.16b, v7.16b, v6.16b */
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
  /* c5824: and v5.16b, v5.16b, v6.16b */
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
  /* c5828: ushl v6.2d, v7.2d, v2.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[7].u64[0], (int8_t)(c)->q[2].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[7].u64[1], (int8_t)(c)->q[2].u64[1]);
    (c)->q[6] = _t; }
  /* c582c: dup v7.2d, x22 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 22));
    _t.u64[1] = (ARC_X_R(c, 22));
    (c)->q[7] = _t; }
  /* c5830: ushl v5.2d, v5.2d, v4.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[5].u64[0], (int8_t)(c)->q[4].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[5].u64[1], (int8_t)(c)->q[4].u64[1]);
    (c)->q[5] = _t; }
  /* c5834: orr v1.16b, v6.16b, v1.16b */
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
  /* c5838: orr v0.16b, v5.16b, v0.16b */
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
  /* c583c: add v2.2d, v2.2d, v7.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[2].u64[0] + (c)->q[7].u64[0];
    _t.u64[1] = (c)->q[2].u64[1] + (c)->q[7].u64[1];
    (c)->q[2] = _t; }
  /* c5840: add v4.2d, v4.2d, v7.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[4].u64[0] + (c)->q[7].u64[0];
    _t.u64[1] = (c)->q[4].u64[1] + (c)->q[7].u64[1];
    (c)->q[4] = _t; }
  /* c5844: b.ne #0xc5800 */
  if (ARC_COND(c, 1)) goto L_c5800;
  /* c5848: orr v0.16b, v0.16b, v1.16b */
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
  /* c584c: cmp x15, x16 */
  (void)arc_sub64(c, ARC_X_R(c, 15), ARC_X_R(c, 16));
  /* c5850: ext v1.16b, v0.16b, v0.16b, #8 */
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
  /* c5854: orr v0.8b, v0.8b, v1.8b */
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
  /* c5858: fmov x14, d0 */
  ARC_X_W(c, 14, ARC_DU_R(c, 0));
  /* c585c: b.ne #0xc5890 */
  if (ARC_COND(c, 1)) goto L_c5890;
  /* c5860: b #0xc58b0 */
  goto L_c58b0;
L_c5864:;
  /* c5864: add x23, x11, x14, lsl #1 */
  ARC_X_W(c, 23, (ARC_X_R(c, 11) + ((uint64_t)(ARC_X_R(c, 14)) << 1)));
  /* c5868: b #0xc5984 */
  goto L_c5984;
L_c586c:;
  /* c586c: ldursh w9, [x20, #-2] */
  ARC_W_W(c, 9, ((int32_t)(int16_t)arc_ld16((ARC_X_R(c, 20) + INT64_C(-2)))));
  /* c5870: cmp w9, w8, sxth */
  (void)arc_sub32(c, ARC_W_R(c, 9), ((uint64_t)(int64_t)(int16_t)(ARC_W_R(c, 8))));
  /* c5874: b.le #0xc5a4c */
  if (ARC_COND(c, 13)) goto L_c5a4c;
  /* c5878: mov x23, x19 */
  ARC_X_W(c, 23, ARC_X_R(c, 19));
L_c587c:;
  /* c587c: ldrsh w9, [x23, #2]! */
  { const uint64_t _a = (ARC_X_R(c, 23) + INT64_C(2));
    ARC_X_W(c, 23, ARC_X_R(c, 23) + INT64_C(2));
    ARC_W_W(c, 9, ((int32_t)(int16_t)arc_ld16(_a)));
  }
  /* c5880: cmp w9, w8, sxth */
  (void)arc_sub32(c, ARC_W_R(c, 9), ((uint64_t)(int64_t)(int16_t)(ARC_W_R(c, 8))));
  /* c5884: b.le #0xc587c */
  if (ARC_COND(c, 13)) goto L_c587c;
  /* c5888: b #0xc5a6c */
  goto L_c5a6c;
L_c588c:;
  /* c588c: sub x0, x12, x16, lsl #1 */
  ARC_X_W(c, 0, (ARC_X_R(c, 12) - ((uint64_t)(ARC_X_R(c, 16)) << 1)));
L_c5890:;
  /* c5890: ldrsh w1, [x0], #0xfffffffffffffffe */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(-2));
    ARC_W_W(c, 1, ((int32_t)(int16_t)arc_ld16(_a)));
  }
  /* c5894: cmp w1, w8, sxth */
  (void)arc_sub32(c, ARC_W_R(c, 1), ((uint64_t)(int64_t)(int16_t)(ARC_W_R(c, 8))));
  /* c5898: cset w1, lt */
  ARC_W_W(c, 1, (ARC_COND(c, 11) ? 1 : 0));
  /* c589c: lsl x1, x1, x16 */
  ARC_X_W(c, 1, ((uint64_t)(ARC_X_R(c, 1)) << ((ARC_X_R(c, 16)) & 63)));
  /* c58a0: add x16, x16, #1 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(1)));
  /* c58a4: cmp x15, x16 */
  (void)arc_sub64(c, ARC_X_R(c, 15), ARC_X_R(c, 16));
  /* c58a8: orr x14, x1, x14 */
  ARC_X_W(c, 14, (ARC_X_R(c, 1) | ARC_X_R(c, 14)));
  /* c58ac: b.ne #0xc5890 */
  if (ARC_COND(c, 1)) goto L_c5890;
L_c58b0:;
  /* c58b0: cbz x13, #0xc58f4 */
  if ((ARC_X_R(c, 13)) == 0) goto L_c58f4;
  /* c58b4: cbz x14, #0xc58f4 */
  if ((ARC_X_R(c, 14)) == 0) goto L_c58f4;
L_c58b8:;
  /* c58b8: rbit x16, x14 */
  ARC_X_W(c, 16, arc_rbit64(ARC_X_R(c, 14)));
  /* c58bc: rbit x0, x13 */
  ARC_X_W(c, 0, arc_rbit64(ARC_X_R(c, 13)));
  /* c58c0: sub x1, x14, #1 */
  ARC_X_W(c, 1, (ARC_X_R(c, 14) - UINT64_C(1)));
  /* c58c4: sub x4, x13, #1 */
  ARC_X_W(c, 4, (ARC_X_R(c, 13) - UINT64_C(1)));
  /* c58c8: and x14, x1, x14 */
  ARC_X_W(c, 14, (ARC_X_R(c, 1) & ARC_X_R(c, 14)));
  /* c58cc: clz x16, x16 */
  ARC_X_W(c, 16, arc_clz64(ARC_X_R(c, 16)));
  /* c58d0: clz x0, x0 */
  ARC_X_W(c, 0, arc_clz64(ARC_X_R(c, 0)));
  /* c58d4: and x13, x4, x13 */
  ARC_X_W(c, 13, (ARC_X_R(c, 4) & ARC_X_R(c, 13)));
  /* c58d8: sub x16, x12, x16, lsl #1 */
  ARC_X_W(c, 16, (ARC_X_R(c, 12) - ((uint64_t)(ARC_X_R(c, 16)) << 1)));
  /* c58dc: ldrh w5, [x11, x0, lsl #1] */
  ARC_W_W(c, 5, arc_ld16((ARC_X_R(c, 11) + ((uint64_t)(ARC_X_R(c, 0)) << 1))));
  /* c58e0: ldrh w3, [x16] */
  ARC_W_W(c, 3, arc_ld16(ARC_X_R(c, 16)));
  /* c58e4: strh w3, [x11, x0, lsl #1] */
  arc_st16((ARC_X_R(c, 11) + ((uint64_t)(ARC_X_R(c, 0)) << 1)), ARC_W_R(c, 3));
  /* c58e8: strh w5, [x16] */
  arc_st16(ARC_X_R(c, 16), ARC_W_R(c, 5));
  /* c58ec: cbz x14, #0xc58f4 */
  if ((ARC_X_R(c, 14)) == 0) goto L_c58f4;
  /* c58f0: cbnz x13, #0xc58b8 */
  if ((ARC_X_R(c, 13)) != 0) goto L_c58b8;
L_c58f4:;
  /* c58f4: cmp x14, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 14), UINT64_C(0));
  /* c58f8: csel x15, x15, xzr, eq */
  ARC_X_W(c, 15, (ARC_COND(c, 0) ? (ARC_X_R(c, 15)) : ARC_X_R(c, 31)));
  /* c58fc: sub x12, x12, x15, lsl #1 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) - ((uint64_t)(ARC_X_R(c, 15)) << 1)));
  /* c5900: cbnz x13, #0xc5920 */
  if ((ARC_X_R(c, 13)) != 0) goto L_c5920;
  /* c5904: add x23, x11, x17, lsl #1 */
  ARC_X_W(c, 23, (ARC_X_R(c, 11) + ((uint64_t)(ARC_X_R(c, 17)) << 1)));
  /* c5908: cbnz x14, #0xc5958 */
  if ((ARC_X_R(c, 14)) != 0) goto L_c5958;
  /* c590c: b #0xc5984 */
  goto L_c5984;
L_c5910:;
  /* c5910: lsl x14, x26, x14 */
  ARC_X_W(c, 14, ((uint64_t)(ARC_X_R(c, 26)) << ((ARC_X_R(c, 14)) & 63)));
  /* c5914: sub x12, x12, #2 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) - UINT64_C(2)));
  /* c5918: bic x13, x13, x14 */
  ARC_X_W(c, 13, (ARC_X_R(c, 13) & (~ARC_X_R(c, 14))));
  /* c591c: cbz x13, #0xc5980 */
  if ((ARC_X_R(c, 13)) == 0) goto L_c5980;
L_c5920:;
  /* c5920: clz x14, x13 */
  ARC_X_W(c, 14, arc_clz64(ARC_X_R(c, 13)));
  /* c5924: eor x14, x14, #0x3f */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) ^ UINT64_C(63)));
  /* c5928: add x15, x11, x14, lsl #1 */
  ARC_X_W(c, 15, (ARC_X_R(c, 11) + ((uint64_t)(ARC_X_R(c, 14)) << 1)));
  /* c592c: cmp x12, x15 */
  (void)arc_sub64(c, ARC_X_R(c, 12), ARC_X_R(c, 15));
  /* c5930: b.eq #0xc5910 */
  if (ARC_COND(c, 0)) goto L_c5910;
  /* c5934: ldrh w16, [x12] */
  ARC_W_W(c, 16, arc_ld16(ARC_X_R(c, 12)));
  /* c5938: ldrh w17, [x15] */
  ARC_W_W(c, 17, arc_ld16(ARC_X_R(c, 15)));
  /* c593c: strh w16, [x15] */
  arc_st16(ARC_X_R(c, 15), ARC_W_R(c, 16));
  /* c5940: strh w17, [x12] */
  arc_st16(ARC_X_R(c, 12), ARC_W_R(c, 17));
  /* c5944: b #0xc5910 */
  goto L_c5910;
L_c5948:;
  /* c5948: lsl x11, x26, x11 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 26)) << ((ARC_X_R(c, 11)) & 63)));
  /* c594c: add x23, x23, #2 */
  ARC_X_W(c, 23, (ARC_X_R(c, 23) + UINT64_C(2)));
  /* c5950: bic x14, x14, x11 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) & (~ARC_X_R(c, 11))));
  /* c5954: cbz x14, #0xc5984 */
  if ((ARC_X_R(c, 14)) == 0) goto L_c5984;
L_c5958:;
  /* c5958: clz x11, x14 */
  ARC_X_W(c, 11, arc_clz64(ARC_X_R(c, 14)));
  /* c595c: eor x11, x11, #0x3f */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) ^ UINT64_C(63)));
  /* c5960: sub x13, x12, x11, lsl #1 */
  ARC_X_W(c, 13, (ARC_X_R(c, 12) - ((uint64_t)(ARC_X_R(c, 11)) << 1)));
  /* c5964: cmp x23, x13 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 13));
  /* c5968: b.eq #0xc5948 */
  if (ARC_COND(c, 0)) goto L_c5948;
  /* c596c: ldrh w15, [x23] */
  ARC_W_W(c, 15, arc_ld16(ARC_X_R(c, 23)));
  /* c5970: ldrh w16, [x13] */
  ARC_W_W(c, 16, arc_ld16(ARC_X_R(c, 13)));
  /* c5974: strh w15, [x13] */
  arc_st16(ARC_X_R(c, 13), ARC_W_R(c, 15));
  /* c5978: strh w16, [x23] */
  arc_st16(ARC_X_R(c, 23), ARC_W_R(c, 16));
  /* c597c: b #0xc5948 */
  goto L_c5948;
L_c5980:;
  /* c5980: add x23, x12, #2 */
  ARC_X_W(c, 23, (ARC_X_R(c, 12) + UINT64_C(2)));
L_c5984:;
  /* c5984: sub x24, x23, #2 */
  ARC_X_W(c, 24, (ARC_X_R(c, 23) - UINT64_C(2)));
  /* c5988: cmp x19, x24 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 24));
  /* c598c: b.eq #0xc5998 */
  if (ARC_COND(c, 0)) goto L_c5998;
  /* c5990: ldrh w11, [x24] */
  ARC_W_W(c, 11, arc_ld16(ARC_X_R(c, 24)));
  /* c5994: strh w11, [x19] */
  arc_st16(ARC_X_R(c, 19), ARC_W_R(c, 11));
L_c5998:;
  /* c5998: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* c599c: strh w8, [x24] */
  arc_st16(ARC_X_R(c, 24), ARC_W_R(c, 8));
  /* c59a0: b.lo #0xc5a00 */
  if (ARC_COND(c, 3)) goto L_c5a00;
  /* c59a4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* c59a8: mov x1, x24 */
  ARC_X_W(c, 1, ARC_X_R(c, 24));
  /* c59ac: mov x22, x27 */
  ARC_X_W(c, 22, ARC_X_R(c, 27));
  /* c59b0: mov x28, x6 */
  ARC_X_W(c, 28, ARC_X_R(c, 6));
  /* c59b4: mov x27, x2 */
  ARC_X_W(c, 27, ARC_X_R(c, 2));
  /* c59b8: bl #0xd08bc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(809404));
  fn1_d08bc(c);
  /* c59bc: mov w25, w0 */
  ARC_W_W(c, 25, ARC_W_R(c, 0));
  /* c59c0: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* c59c4: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* c59c8: bl #0xd08bc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(809420));
  fn1_d08bc(c);
  /* c59cc: tbnz w0, #0, #0xc5ae0 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) != 0) goto L_c5ae0;
  /* c59d0: ldp q12, q11, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_q_w(c, 12, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 11, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c59d4: mov x2, x27 */
  ARC_X_W(c, 2, ARC_X_R(c, 27));
  /* c59d8: ldp q14, q13, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_q_w(c, 14, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 13, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c59dc: mov x6, x28 */
  ARC_X_W(c, 6, ARC_X_R(c, 28));
  /* c59e0: ldr q15, [sp] */
  arc_q_w(c, 15, arc_ld64((c)->sp), arc_ld64((c)->sp + 8));
  /* c59e4: mov x27, x22 */
  ARC_X_W(c, 27, ARC_X_R(c, 22));
  /* c59e8: mov x4, #-0x80 */
  ARC_X_W(c, 4, UINT64_C(18446744073709551488));
  /* c59ec: mov w5, #1 */
  ARC_W_W(c, 5, UINT64_C(1));
  /* c59f0: mov w22, #4 */
  ARC_W_W(c, 22, UINT64_C(4));
  /* c59f4: mov w28, #8 */
  ARC_W_W(c, 28, UINT64_C(8));
  /* c59f8: mov w30, #0x10 */
  ARC_W_W(c, 30, UINT64_C(16));
  /* c59fc: tbnz w25, #0, #0xc4b28 */
  if (((ARC_W_R(c, 25)) >> 0 & 1) != 0) goto L_c4b28;
L_c5a00:;
  /* c5a00: ldr w8, [sp, #0x5c] */
  ARC_W_W(c, 8, arc_ld32(((c)->sp + INT64_C(92))));
  /* c5a04: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* c5a08: mov x1, x24 */
  ARC_X_W(c, 1, ARC_X_R(c, 24));
  /* c5a0c: mov x19, x2 */
  ARC_X_W(c, 19, ARC_X_R(c, 2));
  /* c5a10: mov x24, x6 */
  ARC_X_W(c, 24, ARC_X_R(c, 6));
  /* c5a14: and w3, w8, #1 */
  ARC_W_W(c, 3, (ARC_W_R(c, 8) & UINT64_C(1)));
  /* c5a18: bl #0xc496c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(809500));
  fn1_c496c(c);
  /* c5a1c: ldp q15, q14, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_q_w(c, 15, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 14, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c5a20: mov w30, #0x10 */
  ARC_W_W(c, 30, UINT64_C(16));
  /* c5a24: ldp q13, q12, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_q_w(c, 13, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 12, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c5a28: mov w28, #8 */
  ARC_W_W(c, 28, UINT64_C(8));
  /* c5a2c: ldr q11, [sp, #0x40] */
  arc_q_w(c, 11, arc_ld64(((c)->sp + INT64_C(64))), arc_ld64(((c)->sp + INT64_C(64)) + 8));
  /* c5a30: mov w22, #4 */
  ARC_W_W(c, 22, UINT64_C(4));
  /* c5a34: mov w5, #1 */
  ARC_W_W(c, 5, UINT64_C(1));
  /* c5a38: mov x4, #-0x80 */
  ARC_X_W(c, 4, UINT64_C(18446744073709551488));
  /* c5a3c: mov x6, x24 */
  ARC_X_W(c, 6, ARC_X_R(c, 24));
  /* c5a40: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* c5a44: str wzr, [sp, #0x5c] */
  arc_st32(((c)->sp + INT64_C(92)), ARC_W_R(c, 31));
  /* c5a48: b #0xc4b28 */
  goto L_c4b28;
L_c5a4c:;
  /* c5a4c: add x9, x19, #2 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + UINT64_C(2)));
L_c5a50:;
  /* c5a50: mov x23, x9 */
  ARC_X_W(c, 23, ARC_X_R(c, 9));
  /* c5a54: cmp x9, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 20));
  /* c5a58: b.hs #0xc5a6c */
  if (ARC_COND(c, 2)) goto L_c5a6c;
  /* c5a5c: mov x9, x23 */
  ARC_X_W(c, 9, ARC_X_R(c, 23));
  /* c5a60: ldrsh w10, [x9], #2 */
  { const uint64_t _a = ARC_X_R(c, 9);
    ARC_X_W(c, 9, ARC_X_R(c, 9) + INT64_C(2));
    ARC_W_W(c, 10, ((int32_t)(int16_t)arc_ld16(_a)));
  }
  /* c5a64: cmp w10, w8, sxth */
  (void)arc_sub32(c, ARC_W_R(c, 10), ((uint64_t)(int64_t)(int16_t)(ARC_W_R(c, 8))));
  /* c5a68: b.le #0xc5a50 */
  if (ARC_COND(c, 13)) goto L_c5a50;
L_c5a6c:;
  /* c5a6c: cmp x23, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 20));
  /* c5a70: mov x9, x20 */
  ARC_X_W(c, 9, ARC_X_R(c, 20));
  /* c5a74: b.hs #0xc5a88 */
  if (ARC_COND(c, 2)) goto L_c5a88;
  /* c5a78: mov x9, x20 */
  ARC_X_W(c, 9, ARC_X_R(c, 20));
L_c5a7c:;
  /* c5a7c: ldrsh w10, [x9, #-2]! */
  { const uint64_t _a = (ARC_X_R(c, 9) + INT64_C(-2));
    ARC_X_W(c, 9, ARC_X_R(c, 9) + INT64_C(-2));
    ARC_W_W(c, 10, ((int32_t)(int16_t)arc_ld16(_a)));
  }
  /* c5a80: cmp w10, w8, sxth */
  (void)arc_sub32(c, ARC_W_R(c, 10), ((uint64_t)(int64_t)(int16_t)(ARC_W_R(c, 8))));
  /* c5a84: b.gt #0xc5a7c */
  if (ARC_COND(c, 12)) goto L_c5a7c;
L_c5a88:;
  /* c5a88: cmp x23, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 9));
  /* c5a8c: b.hs #0xc5ac0 */
  if (ARC_COND(c, 2)) goto L_c5ac0;
  /* c5a90: ldrh w10, [x23] */
  ARC_W_W(c, 10, arc_ld16(ARC_X_R(c, 23)));
  /* c5a94: ldrh w11, [x9] */
  ARC_W_W(c, 11, arc_ld16(ARC_X_R(c, 9)));
L_c5a98:;
  /* c5a98: strh w11, [x23] */
  arc_st16(ARC_X_R(c, 23), ARC_W_R(c, 11));
  /* c5a9c: strh w10, [x9] */
  arc_st16(ARC_X_R(c, 9), ARC_W_R(c, 10));
L_c5aa0:;
  /* c5aa0: ldrsh w10, [x23, #2]! */
  { const uint64_t _a = (ARC_X_R(c, 23) + INT64_C(2));
    ARC_X_W(c, 23, ARC_X_R(c, 23) + INT64_C(2));
    ARC_W_W(c, 10, ((int32_t)(int16_t)arc_ld16(_a)));
  }
  /* c5aa4: cmp w10, w8, sxth */
  (void)arc_sub32(c, ARC_W_R(c, 10), ((uint64_t)(int64_t)(int16_t)(ARC_W_R(c, 8))));
  /* c5aa8: b.le #0xc5aa0 */
  if (ARC_COND(c, 13)) goto L_c5aa0;
L_c5aac:;
  /* c5aac: ldrsh w11, [x9, #-2]! */
  { const uint64_t _a = (ARC_X_R(c, 9) + INT64_C(-2));
    ARC_X_W(c, 9, ARC_X_R(c, 9) + INT64_C(-2));
    ARC_W_W(c, 11, ((int32_t)(int16_t)arc_ld16(_a)));
  }
  /* c5ab0: cmp w11, w8, sxth */
  (void)arc_sub32(c, ARC_W_R(c, 11), ((uint64_t)(int64_t)(int16_t)(ARC_W_R(c, 8))));
  /* c5ab4: b.gt #0xc5aac */
  if (ARC_COND(c, 12)) goto L_c5aac;
  /* c5ab8: cmp x23, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 9));
  /* c5abc: b.lo #0xc5a98 */
  if (ARC_COND(c, 3)) goto L_c5a98;
L_c5ac0:;
  /* c5ac0: sub x9, x23, #2 */
  ARC_X_W(c, 9, (ARC_X_R(c, 23) - UINT64_C(2)));
  /* c5ac4: cmp x19, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 9));
  /* c5ac8: b.eq #0xc5ad4 */
  if (ARC_COND(c, 0)) goto L_c5ad4;
  /* c5acc: ldrh w10, [x9] */
  ARC_W_W(c, 10, arc_ld16(ARC_X_R(c, 9)));
  /* c5ad0: strh w10, [x19] */
  arc_st16(ARC_X_R(c, 19), ARC_W_R(c, 10));
L_c5ad4:;
  /* c5ad4: str wzr, [sp, #0x5c] */
  arc_st32(((c)->sp + INT64_C(92)), ARC_W_R(c, 31));
  /* c5ad8: strh w8, [x9] */
  arc_st16(ARC_X_R(c, 9), ARC_W_R(c, 8));
  /* c5adc: b #0xc4b28 */
  goto L_c4b28;
L_c5ae0:;
  /* c5ae0: ldp q12, q11, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_q_w(c, 12, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 11, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c5ae4: mov x20, x24 */
  ARC_X_W(c, 20, ARC_X_R(c, 24));
  /* c5ae8: ldp q14, q13, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_q_w(c, 14, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 13, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c5aec: mov x2, x27 */
  ARC_X_W(c, 2, ARC_X_R(c, 27));
  /* c5af0: ldr q15, [sp] */
  arc_q_w(c, 15, arc_ld64((c)->sp), arc_ld64((c)->sp + 8));
  /* c5af4: mov x6, x28 */
  ARC_X_W(c, 6, ARC_X_R(c, 28));
  /* c5af8: mov x27, x22 */
  ARC_X_W(c, 27, ARC_X_R(c, 22));
  /* c5afc: mov x4, #-0x80 */
  ARC_X_W(c, 4, UINT64_C(18446744073709551488));
  /* c5b00: mov w5, #1 */
  ARC_W_W(c, 5, UINT64_C(1));
  /* c5b04: mov w22, #4 */
  ARC_W_W(c, 22, UINT64_C(4));
  /* c5b08: mov w28, #8 */
  ARC_W_W(c, 28, UINT64_C(8));
  /* c5b0c: mov w30, #0x10 */
  ARC_W_W(c, 30, UINT64_C(16));
  /* c5b10: tbz w25, #0, #0xc4b24 */
  if (((ARC_W_R(c, 25)) >> 0 & 1) == 0) goto L_c4b24;
  /* c5b14: b #0xc5cd4 */
  goto L_c5cd4;
L_c5b18:;
  /* c5b18: ldrsh w8, [x19] */
  ARC_W_W(c, 8, ((int32_t)(int16_t)arc_ld16(ARC_X_R(c, 19))));
  /* c5b1c: ldrsh w9, [x19, #2] */
  ARC_W_W(c, 9, ((int32_t)(int16_t)arc_ld16((ARC_X_R(c, 19) + INT64_C(2)))));
  /* c5b20: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* c5b24: csel w10, w8, w9, gt */
  ARC_W_W(c, 10, (ARC_COND(c, 12) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* c5b28: csel w8, w8, w9, lt */
  ARC_W_W(c, 8, (ARC_COND(c, 11) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* c5b2c: strh w10, [x19, #2] */
  arc_st16((ARC_X_R(c, 19) + INT64_C(2)), ARC_W_R(c, 10));
  /* c5b30: strh w8, [x19] */
  arc_st16(ARC_X_R(c, 19), ARC_W_R(c, 8));
  /* c5b34: ldrsh w8, [x19, #6] */
  ARC_W_W(c, 8, ((int32_t)(int16_t)arc_ld16((ARC_X_R(c, 19) + INT64_C(6)))));
  /* c5b38: ldursh w9, [x20, #-2] */
  ARC_W_W(c, 9, ((int32_t)(int16_t)arc_ld16((ARC_X_R(c, 20) + INT64_C(-2)))));
  /* c5b3c: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* c5b40: csel w10, w8, w9, gt */
  ARC_W_W(c, 10, (ARC_COND(c, 12) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* c5b44: csel w8, w8, w9, lt */
  ARC_W_W(c, 8, (ARC_COND(c, 11) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* c5b48: sturh w10, [x20, #-2] */
  arc_st16((ARC_X_R(c, 20) + INT64_C(-2)), ARC_W_R(c, 10));
  /* c5b4c: strh w8, [x19, #6] */
  arc_st16((ARC_X_R(c, 19) + INT64_C(6)), ARC_W_R(c, 8));
  /* c5b50: ldrsh w9, [x19, #4] */
  ARC_W_W(c, 9, ((int32_t)(int16_t)arc_ld16((ARC_X_R(c, 19) + INT64_C(4)))));
  /* c5b54: ldursh w8, [x20, #-2] */
  ARC_W_W(c, 8, ((int32_t)(int16_t)arc_ld16((ARC_X_R(c, 20) + INT64_C(-2)))));
  /* c5b58: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* c5b5c: csel w10, w8, w9, gt */
  ARC_W_W(c, 10, (ARC_COND(c, 12) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* c5b60: csel w8, w8, w9, lt */
  ARC_W_W(c, 8, (ARC_COND(c, 11) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* c5b64: sturh w10, [x20, #-2] */
  arc_st16((ARC_X_R(c, 20) + INT64_C(-2)), ARC_W_R(c, 10));
  /* c5b68: ldrsh w10, [x19, #6] */
  ARC_W_W(c, 10, ((int32_t)(int16_t)arc_ld16((ARC_X_R(c, 19) + INT64_C(6)))));
  /* c5b6c: ldrh w9, [x19, #4] */
  ARC_W_W(c, 9, arc_ld16((ARC_X_R(c, 19) + INT64_C(4))));
  /* c5b70: cmp w8, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 10));
  /* c5b74: csel w9, w9, w10, lt */
  ARC_W_W(c, 9, (ARC_COND(c, 11) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 10)));
  /* c5b78: csel w8, w8, w10, gt */
  ARC_W_W(c, 8, (ARC_COND(c, 12) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 10)));
  /* c5b7c: strh w9, [x19, #4] */
  arc_st16((ARC_X_R(c, 19) + INT64_C(4)), ARC_W_R(c, 9));
  /* c5b80: strh w8, [x19, #6] */
  arc_st16((ARC_X_R(c, 19) + INT64_C(6)), ARC_W_R(c, 8));
  /* c5b84: ldrsh w8, [x19, #2] */
  ARC_W_W(c, 8, ((int32_t)(int16_t)arc_ld16((ARC_X_R(c, 19) + INT64_C(2)))));
  /* c5b88: ldursh w9, [x20, #-2] */
  ARC_W_W(c, 9, ((int32_t)(int16_t)arc_ld16((ARC_X_R(c, 20) + INT64_C(-2)))));
  /* c5b8c: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* c5b90: csel w10, w8, w9, gt */
  ARC_W_W(c, 10, (ARC_COND(c, 12) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* c5b94: csel w8, w8, w9, lt */
  ARC_W_W(c, 8, (ARC_COND(c, 11) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* c5b98: sturh w10, [x20, #-2] */
  arc_st16((ARC_X_R(c, 20) + INT64_C(-2)), ARC_W_R(c, 10));
  /* c5b9c: ldrsh w10, [x19, #6] */
  ARC_W_W(c, 10, ((int32_t)(int16_t)arc_ld16((ARC_X_R(c, 19) + INT64_C(6)))));
  /* c5ba0: ldrsh w11, [x19] */
  ARC_W_W(c, 11, ((int32_t)(int16_t)arc_ld16(ARC_X_R(c, 19))));
  /* c5ba4: ldrsh w9, [x19, #4] */
  ARC_W_W(c, 9, ((int32_t)(int16_t)arc_ld16((ARC_X_R(c, 19) + INT64_C(4)))));
  /* c5ba8: cmp w10, w11 */
  (void)arc_sub32(c, ARC_W_R(c, 10), ARC_W_R(c, 11));
  /* c5bac: csel w12, w10, w11, lt */
  ARC_W_W(c, 12, (ARC_COND(c, 11) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 11)));
  /* c5bb0: csel w10, w10, w11, gt */
  ARC_W_W(c, 10, (ARC_COND(c, 12) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 11)));
  /* c5bb4: cmp w12, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 12), ARC_W_R(c, 9));
  /* c5bb8: csel w11, w11, w9, lt */
  ARC_W_W(c, 11, (ARC_COND(c, 11) ? (ARC_W_R(c, 11)) : ARC_W_R(c, 9)));
  /* c5bbc: csel w9, w12, w9, gt */
  ARC_W_W(c, 9, (ARC_COND(c, 12) ? (ARC_W_R(c, 12)) : ARC_W_R(c, 9)));
  /* c5bc0: cmp w10, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 10), ARC_W_R(c, 8));
  /* c5bc4: csel w12, w10, w8, lt */
  ARC_W_W(c, 12, (ARC_COND(c, 11) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 8)));
  /* c5bc8: csel w10, w10, w8, gt */
  ARC_W_W(c, 10, (ARC_COND(c, 12) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 8)));
  /* c5bcc: strh w11, [x19] */
  arc_st16(ARC_X_R(c, 19), ARC_W_R(c, 11));
  /* c5bd0: cmp w12, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 12), ARC_W_R(c, 9));
  /* c5bd4: strh w10, [x19, #6] */
  arc_st16((ARC_X_R(c, 19) + INT64_C(6)), ARC_W_R(c, 10));
  /* c5bd8: csel w8, w8, w9, lt */
  ARC_W_W(c, 8, (ARC_COND(c, 11) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* c5bdc: csel w9, w12, w9, gt */
  ARC_W_W(c, 9, (ARC_COND(c, 12) ? (ARC_W_R(c, 12)) : ARC_W_R(c, 9)));
  /* c5be0: strh w8, [x19, #2] */
  arc_st16((ARC_X_R(c, 19) + INT64_C(2)), ARC_W_R(c, 8));
  /* c5be4: strh w9, [x19, #4] */
  arc_st16((ARC_X_R(c, 19) + INT64_C(4)), ARC_W_R(c, 9));
  /* c5be8: b #0xc5cd4 */
  goto L_c5cd4;
L_c5bec:;
  /* c5bec: ldursh w8, [x20, #-2] */
  ARC_W_W(c, 8, ((int32_t)(int16_t)arc_ld16((ARC_X_R(c, 20) + INT64_C(-2)))));
  /* c5bf0: ldrsh w9, [x19] */
  ARC_W_W(c, 9, ((int32_t)(int16_t)arc_ld16(ARC_X_R(c, 19))));
  /* c5bf4: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* c5bf8: b.ge #0xc5cd4 */
  if (ARC_COND(c, 10)) goto L_c5cd4;
  /* c5bfc: strh w8, [x19] */
  arc_st16(ARC_X_R(c, 19), ARC_W_R(c, 8));
  /* c5c00: sturh w9, [x20, #-2] */
  arc_st16((ARC_X_R(c, 20) + INT64_C(-2)), ARC_W_R(c, 9));
  /* c5c04: b #0xc5cd4 */
  goto L_c5cd4;
L_c5c08:;
  /* c5c08: ldrsh w8, [x19, #2] */
  ARC_W_W(c, 8, ((int32_t)(int16_t)arc_ld16((ARC_X_R(c, 19) + INT64_C(2)))));
  /* c5c0c: ldursh w9, [x20, #-2] */
  ARC_W_W(c, 9, ((int32_t)(int16_t)arc_ld16((ARC_X_R(c, 20) + INT64_C(-2)))));
  /* c5c10: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* c5c14: csel w10, w8, w9, gt */
  ARC_W_W(c, 10, (ARC_COND(c, 12) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* c5c18: csel w8, w8, w9, lt */
  ARC_W_W(c, 8, (ARC_COND(c, 11) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* c5c1c: sturh w10, [x20, #-2] */
  arc_st16((ARC_X_R(c, 20) + INT64_C(-2)), ARC_W_R(c, 10));
  /* c5c20: strh w8, [x19, #2] */
  arc_st16((ARC_X_R(c, 19) + INT64_C(2)), ARC_W_R(c, 8));
  /* c5c24: ldrsh w9, [x19] */
  ARC_W_W(c, 9, ((int32_t)(int16_t)arc_ld16(ARC_X_R(c, 19))));
  /* c5c28: ldursh w8, [x20, #-2] */
  ARC_W_W(c, 8, ((int32_t)(int16_t)arc_ld16((ARC_X_R(c, 20) + INT64_C(-2)))));
  /* c5c2c: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* c5c30: csel w10, w8, w9, gt */
  ARC_W_W(c, 10, (ARC_COND(c, 12) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* c5c34: csel w8, w8, w9, lt */
  ARC_W_W(c, 8, (ARC_COND(c, 11) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* c5c38: sturh w10, [x20, #-2] */
  arc_st16((ARC_X_R(c, 20) + INT64_C(-2)), ARC_W_R(c, 10));
  /* c5c3c: ldrsh w10, [x19, #2] */
  ARC_W_W(c, 10, ((int32_t)(int16_t)arc_ld16((ARC_X_R(c, 19) + INT64_C(2)))));
  /* c5c40: ldrh w9, [x19] */
  ARC_W_W(c, 9, arc_ld16(ARC_X_R(c, 19)));
  /* c5c44: cmp w8, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 10));
  /* c5c48: csel w9, w9, w10, lt */
  ARC_W_W(c, 9, (ARC_COND(c, 11) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 10)));
  /* c5c4c: csel w8, w8, w10, gt */
  ARC_W_W(c, 8, (ARC_COND(c, 12) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 10)));
  /* c5c50: strh w9, [x19] */
  arc_st16(ARC_X_R(c, 19), ARC_W_R(c, 9));
  /* c5c54: b #0xc5cd0 */
  goto L_c5cd0;
L_c5c58:;
  /* c5c58: ldrsh w8, [x19] */
  ARC_W_W(c, 8, ((int32_t)(int16_t)arc_ld16(ARC_X_R(c, 19))));
  /* c5c5c: ldrsh w9, [x19, #4] */
  ARC_W_W(c, 9, ((int32_t)(int16_t)arc_ld16((ARC_X_R(c, 19) + INT64_C(4)))));
  /* c5c60: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* c5c64: csel w10, w8, w9, gt */
  ARC_W_W(c, 10, (ARC_COND(c, 12) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* c5c68: csel w8, w8, w9, lt */
  ARC_W_W(c, 8, (ARC_COND(c, 11) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* c5c6c: strh w10, [x19, #4] */
  arc_st16((ARC_X_R(c, 19) + INT64_C(4)), ARC_W_R(c, 10));
  /* c5c70: strh w8, [x19] */
  arc_st16(ARC_X_R(c, 19), ARC_W_R(c, 8));
  /* c5c74: ldrsh w8, [x19, #2] */
  ARC_W_W(c, 8, ((int32_t)(int16_t)arc_ld16((ARC_X_R(c, 19) + INT64_C(2)))));
  /* c5c78: ldursh w9, [x20, #-2] */
  ARC_W_W(c, 9, ((int32_t)(int16_t)arc_ld16((ARC_X_R(c, 20) + INT64_C(-2)))));
  /* c5c7c: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* c5c80: csel w10, w8, w9, gt */
  ARC_W_W(c, 10, (ARC_COND(c, 12) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* c5c84: csel w8, w8, w9, lt */
  ARC_W_W(c, 8, (ARC_COND(c, 11) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* c5c88: sturh w10, [x20, #-2] */
  arc_st16((ARC_X_R(c, 20) + INT64_C(-2)), ARC_W_R(c, 10));
  /* c5c8c: ldrsh w10, [x19] */
  ARC_W_W(c, 10, ((int32_t)(int16_t)arc_ld16(ARC_X_R(c, 19))));
  /* c5c90: cmp w10, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 10), ARC_W_R(c, 8));
  /* c5c94: csel w9, w10, w8, gt */
  ARC_W_W(c, 9, (ARC_COND(c, 12) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 8)));
  /* c5c98: csel w8, w10, w8, lt */
  ARC_W_W(c, 8, (ARC_COND(c, 11) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 8)));
  /* c5c9c: strh w9, [x19, #2] */
  arc_st16((ARC_X_R(c, 19) + INT64_C(2)), ARC_W_R(c, 9));
  /* c5ca0: strh w8, [x19] */
  arc_st16(ARC_X_R(c, 19), ARC_W_R(c, 8));
  /* c5ca4: ldrsh w8, [x19, #4] */
  ARC_W_W(c, 8, ((int32_t)(int16_t)arc_ld16((ARC_X_R(c, 19) + INT64_C(4)))));
  /* c5ca8: ldursh w9, [x20, #-2] */
  ARC_W_W(c, 9, ((int32_t)(int16_t)arc_ld16((ARC_X_R(c, 20) + INT64_C(-2)))));
  /* c5cac: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* c5cb0: csel w10, w8, w9, gt */
  ARC_W_W(c, 10, (ARC_COND(c, 12) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* c5cb4: csel w8, w8, w9, lt */
  ARC_W_W(c, 8, (ARC_COND(c, 11) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* c5cb8: sturh w10, [x20, #-2] */
  arc_st16((ARC_X_R(c, 20) + INT64_C(-2)), ARC_W_R(c, 10));
  /* c5cbc: ldrsh w10, [x19, #2] */
  ARC_W_W(c, 10, ((int32_t)(int16_t)arc_ld16((ARC_X_R(c, 19) + INT64_C(2)))));
  /* c5cc0: cmp w10, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 10), ARC_W_R(c, 8));
  /* c5cc4: csel w9, w10, w8, gt */
  ARC_W_W(c, 9, (ARC_COND(c, 12) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 8)));
  /* c5cc8: csel w8, w10, w8, lt */
  ARC_W_W(c, 8, (ARC_COND(c, 11) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 8)));
  /* c5ccc: strh w9, [x19, #4] */
  arc_st16((ARC_X_R(c, 19) + INT64_C(4)), ARC_W_R(c, 9));
L_c5cd0:;
  /* c5cd0: strh w8, [x19, #2] */
  arc_st16((ARC_X_R(c, 19) + INT64_C(2)), ARC_W_R(c, 8));
L_c5cd4:;
  /* c5cd4: add sp, sp, #0x1f0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(496)));
  /* c5cd8: ldp x20, x19, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* c5cdc: ldp x22, x21, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* c5ce0: ldp x24, x23, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* c5ce4: ldp x26, x25, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* c5ce8: ldp x28, x27, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* c5cec: ldp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* c5cf0: ldp d9, d8, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_du_w(c, 9, arc_ld64(_pa));
    arc_du_w(c, 8, arc_ld64((_pa + 8)));
  }
  /* c5cf4: ldp d11, d10, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_du_w(c, 11, arc_ld64(_pa));
    arc_du_w(c, 10, arc_ld64((_pa + 8)));
  }
  /* c5cf8: ldp d13, d12, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_du_w(c, 13, arc_ld64(_pa));
    arc_du_w(c, 12, arc_ld64((_pa + 8)));
  }
  /* c5cfc: ldp d15, d14, [sp], #0xa0 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(160);
    arc_du_w(c, 15, arc_ld64(_pa));
    arc_du_w(c, 14, arc_ld64((_pa + 8)));
  }
  /* c5d00: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* c5d04: ret  */
  return;
L_c5d08:;
  /* c5d08: cmp x19, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 20));
  /* c5d0c: add x9, x19, #2 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + UINT64_C(2)));
  /* c5d10: ldr w10, [sp, #0x5c] */
  ARC_W_W(c, 10, arc_ld32(((c)->sp + INT64_C(92))));
  /* c5d14: ccmp x9, x20, #4, ne */
  if (ARC_COND(c, 1)) { (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 20)); }
  else { (c)->nf = 0; (c)->zf = 1;
          (c)->cf = 0; (c)->vf = 0; }
  /* c5d18: cset w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? 1 : 0));
  /* c5d1c: tbz w10, #0, #0xc5f5c */
  if (((ARC_W_R(c, 10)) >> 0 & 1) == 0) goto L_c5f5c;
  /* c5d20: tbnz w8, #0, #0xc5cd4 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_c5cd4;
  /* c5d24: mov w8, #2 */
  ARC_W_W(c, 8, UINT64_C(2));
  /* c5d28: mov x10, x19 */
  ARC_X_W(c, 10, ARC_X_R(c, 19));
  /* c5d2c: b #0xc5d48 */
  goto L_c5d48;
L_c5d30:;
  /* c5d30: mov x9, x19 */
  ARC_X_W(c, 9, ARC_X_R(c, 19));
L_c5d34:;
  /* c5d34: strh w11, [x9] */
  arc_st16(ARC_X_R(c, 9), ARC_W_R(c, 11));
L_c5d38:;
  /* c5d38: add x9, x10, #2 */
  ARC_X_W(c, 9, (ARC_X_R(c, 10) + UINT64_C(2)));
  /* c5d3c: add x8, x8, #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2)));
  /* c5d40: cmp x9, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 20));
  /* c5d44: b.eq #0xc5cd4 */
  if (ARC_COND(c, 0)) goto L_c5cd4;
L_c5d48:;
  /* c5d48: ldrsh w11, [x10, #2] */
  ARC_W_W(c, 11, ((int32_t)(int16_t)arc_ld16((ARC_X_R(c, 10) + INT64_C(2)))));
  /* c5d4c: ldrsh w12, [x10] */
  ARC_W_W(c, 12, ((int32_t)(int16_t)arc_ld16(ARC_X_R(c, 10))));
  /* c5d50: mov x10, x9 */
  ARC_X_W(c, 10, ARC_X_R(c, 9));
  /* c5d54: cmp w11, w12 */
  (void)arc_sub32(c, ARC_W_R(c, 11), ARC_W_R(c, 12));
  /* c5d58: b.ge #0xc5d38 */
  if (ARC_COND(c, 10)) goto L_c5d38;
  /* c5d5c: mov x13, x8 */
  ARC_X_W(c, 13, ARC_X_R(c, 8));
L_c5d60:;
  /* c5d60: subs x9, x13, #2 */
  ARC_X_W(c, 9, arc_sub64(c, ARC_X_R(c, 13), UINT64_C(2)));
  /* c5d64: strh w12, [x19, x13] */
  arc_st16((ARC_X_R(c, 19) + ARC_X_R(c, 13)), ARC_W_R(c, 12));
  /* c5d68: b.eq #0xc5d30 */
  if (ARC_COND(c, 0)) goto L_c5d30;
  /* c5d6c: add x12, x19, x13 */
  ARC_X_W(c, 12, (ARC_X_R(c, 19) + ARC_X_R(c, 13)));
  /* c5d70: mov x13, x9 */
  ARC_X_W(c, 13, ARC_X_R(c, 9));
  /* c5d74: ldursh w12, [x12, #-4] */
  ARC_W_W(c, 12, ((int32_t)(int16_t)arc_ld16((ARC_X_R(c, 12) + INT64_C(-4)))));
  /* c5d78: cmp w11, w12 */
  (void)arc_sub32(c, ARC_W_R(c, 11), ARC_W_R(c, 12));
  /* c5d7c: b.lt #0xc5d60 */
  if (ARC_COND(c, 11)) goto L_c5d60;
  /* c5d80: add x9, x19, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + ARC_X_R(c, 9)));
  /* c5d84: b #0xc5d34 */
  goto L_c5d34;
L_c5d88:;
  /* c5d88: cmp x19, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 20));
  /* c5d8c: b.eq #0xc5cd4 */
  if (ARC_COND(c, 0)) goto L_c5cd4;
  /* c5d90: lsr x9, x9, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(1)) & 63)));
  /* c5d94: mov x10, x9 */
  ARC_X_W(c, 10, ARC_X_R(c, 9));
  /* c5d98: b #0xc5dac */
  goto L_c5dac;
L_c5d9c:;
  /* c5d9c: strh w13, [x14] */
  arc_st16(ARC_X_R(c, 14), ARC_W_R(c, 13));
L_c5da0:;
  /* c5da0: cmp x10, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 10), UINT64_C(0));
  /* c5da4: sub x10, x10, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) - UINT64_C(1)));
  /* c5da8: b.le #0xc5e7c */
  if (ARC_COND(c, 13)) goto L_c5e7c;
L_c5dac:;
  /* c5dac: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* c5db0: b.lo #0xc5da0 */
  if (ARC_COND(c, 3)) goto L_c5da0;
  /* c5db4: mov w12, #1 */
  ARC_W_W(c, 12, UINT64_C(1));
  /* c5db8: lsl x11, x10, #1 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* c5dbc: bfi x12, x10, #1, #0x3e */
  ARC_X_W(c, 12, (((uint64_t)(ARC_X_R(c, 12)) & UINT64_C(9223372036854775809)) | ((((uint64_t)(ARC_X_R(c, 10))) & UINT64_C(4611686018427387903)) << 1)));
  /* c5dc0: add x13, x11, #2 */
  ARC_X_W(c, 13, (ARC_X_R(c, 11) + UINT64_C(2)));
  /* c5dc4: add x11, x19, x12, lsl #1 */
  ARC_X_W(c, 11, (ARC_X_R(c, 19) + ((uint64_t)(ARC_X_R(c, 12)) << 1)));
  /* c5dc8: cmp x13, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 13), ARC_X_R(c, 8));
  /* c5dcc: b.ge #0xc5df0 */
  if (ARC_COND(c, 10)) goto L_c5df0;
  /* c5dd0: mov x14, x11 */
  ARC_X_W(c, 14, ARC_X_R(c, 11));
  /* c5dd4: ldrsh w15, [x11] */
  ARC_W_W(c, 15, ((int32_t)(int16_t)arc_ld16(ARC_X_R(c, 11))));
  /* c5dd8: ldrsh w16, [x14, #2]! */
  { const uint64_t _a = (ARC_X_R(c, 14) + INT64_C(2));
    ARC_X_W(c, 14, ARC_X_R(c, 14) + INT64_C(2));
    ARC_W_W(c, 16, ((int32_t)(int16_t)arc_ld16(_a)));
  }
  /* c5ddc: cmp w15, w16 */
  (void)arc_sub32(c, ARC_W_R(c, 15), ARC_W_R(c, 16));
  /* c5de0: csel w15, w15, w16, gt */
  ARC_W_W(c, 15, (ARC_COND(c, 12) ? (ARC_W_R(c, 15)) : ARC_W_R(c, 16)));
  /* c5de4: csel x11, x14, x11, lt */
  ARC_X_W(c, 11, (ARC_COND(c, 11) ? (ARC_X_R(c, 14)) : ARC_X_R(c, 11)));
  /* c5de8: csel x12, x13, x12, lt */
  ARC_X_W(c, 12, (ARC_COND(c, 11) ? (ARC_X_R(c, 13)) : ARC_X_R(c, 12)));
  /* c5dec: b #0xc5df4 */
  goto L_c5df4;
L_c5df0:;
  /* c5df0: ldrh w15, [x11] */
  ARC_W_W(c, 15, arc_ld16(ARC_X_R(c, 11)));
L_c5df4:;
  /* c5df4: add x14, x19, x10, lsl #1 */
  ARC_X_W(c, 14, (ARC_X_R(c, 19) + ((uint64_t)(ARC_X_R(c, 10)) << 1)));
  /* c5df8: ldrsh w13, [x14] */
  ARC_W_W(c, 13, ((int32_t)(int16_t)arc_ld16(ARC_X_R(c, 14))));
  /* c5dfc: cmp w13, w15, sxth */
  (void)arc_sub32(c, ARC_W_R(c, 13), ((uint64_t)(int64_t)(int16_t)(ARC_W_R(c, 15))));
  /* c5e00: b.le #0xc5e2c */
  if (ARC_COND(c, 13)) goto L_c5e2c;
  /* c5e04: b #0xc5da0 */
  goto L_c5da0;
L_c5e08:;
  /* c5e08: mov x17, x11 */
  ARC_X_W(c, 17, ARC_X_R(c, 11));
  /* c5e0c: ldrsh w15, [x11] */
  ARC_W_W(c, 15, ((int32_t)(int16_t)arc_ld16(ARC_X_R(c, 11))));
  /* c5e10: ldrsh w0, [x17, #2]! */
  { const uint64_t _a = (ARC_X_R(c, 17) + INT64_C(2));
    ARC_X_W(c, 17, ARC_X_R(c, 17) + INT64_C(2));
    ARC_W_W(c, 0, ((int32_t)(int16_t)arc_ld16(_a)));
  }
  /* c5e14: cmp w15, w0 */
  (void)arc_sub32(c, ARC_W_R(c, 15), ARC_W_R(c, 0));
  /* c5e18: csel w15, w15, w0, gt */
  ARC_W_W(c, 15, (ARC_COND(c, 12) ? (ARC_W_R(c, 15)) : ARC_W_R(c, 0)));
  /* c5e1c: csel x11, x17, x11, lt */
  ARC_X_W(c, 11, (ARC_COND(c, 11) ? (ARC_X_R(c, 17)) : ARC_X_R(c, 11)));
  /* c5e20: csel x12, x12, x16, lt */
  ARC_X_W(c, 12, (ARC_COND(c, 11) ? (ARC_X_R(c, 12)) : ARC_X_R(c, 16)));
  /* c5e24: cmp w13, w15, sxth */
  (void)arc_sub32(c, ARC_W_R(c, 13), ((uint64_t)(int64_t)(int16_t)(ARC_W_R(c, 15))));
  /* c5e28: b.gt #0xc5d9c */
  if (ARC_COND(c, 12)) goto L_c5d9c;
L_c5e2c:;
  /* c5e2c: cmp x9, x12 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 12));
  /* c5e30: strh w15, [x14] */
  arc_st16(ARC_X_R(c, 14), ARC_W_R(c, 15));
  /* c5e34: mov x14, x11 */
  ARC_X_W(c, 14, ARC_X_R(c, 11));
  /* c5e38: b.lt #0xc5d9c */
  if (ARC_COND(c, 11)) goto L_c5d9c;
  /* c5e3c: mov w16, #1 */
  ARC_W_W(c, 16, UINT64_C(1));
  /* c5e40: lsl x11, x12, #1 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 12)) << ((UINT64_C(1)) & 63)));
  /* c5e44: bfi x16, x12, #1, #0x3e */
  ARC_X_W(c, 16, (((uint64_t)(ARC_X_R(c, 16)) & UINT64_C(9223372036854775809)) | ((((uint64_t)(ARC_X_R(c, 12))) & UINT64_C(4611686018427387903)) << 1)));
  /* c5e48: add x12, x11, #2 */
  ARC_X_W(c, 12, (ARC_X_R(c, 11) + UINT64_C(2)));
  /* c5e4c: add x11, x19, x16, lsl #1 */
  ARC_X_W(c, 11, (ARC_X_R(c, 19) + ((uint64_t)(ARC_X_R(c, 16)) << 1)));
  /* c5e50: cmp x12, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 12), ARC_X_R(c, 8));
  /* c5e54: b.lt #0xc5e08 */
  if (ARC_COND(c, 11)) goto L_c5e08;
  /* c5e58: ldrh w15, [x11] */
  ARC_W_W(c, 15, arc_ld16(ARC_X_R(c, 11)));
  /* c5e5c: mov x12, x16 */
  ARC_X_W(c, 12, ARC_X_R(c, 16));
  /* c5e60: cmp w13, w15, sxth */
  (void)arc_sub32(c, ARC_W_R(c, 13), ((uint64_t)(int64_t)(int16_t)(ARC_W_R(c, 15))));
  /* c5e64: b.le #0xc5e2c */
  if (ARC_COND(c, 13)) goto L_c5e2c;
  /* c5e68: b #0xc5d9c */
  goto L_c5d9c;
L_c5e6c:;
  /* c5e6c: strh w10, [x9] */
  arc_st16(ARC_X_R(c, 9), ARC_W_R(c, 10));
L_c5e70:;
  /* c5e70: cmp x8, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(2));
  /* c5e74: sub x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) - UINT64_C(1)));
  /* c5e78: b.le #0xc5cd4 */
  if (ARC_COND(c, 13)) goto L_c5cd4;
L_c5e7c:;
  /* c5e7c: sub x9, x8, #2 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(2)));
  /* c5e80: ldrh w10, [x19] */
  ARC_W_W(c, 10, arc_ld16(ARC_X_R(c, 19)));
  /* c5e84: mov x13, xzr */
  ARC_X_W(c, 13, ARC_X_R(c, 31));
  /* c5e88: lsr x11, x9, #1 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(1)) & 63)));
  /* c5e8c: mov x12, x19 */
  ARC_X_W(c, 12, ARC_X_R(c, 19));
  /* c5e90: b #0xc5ebc */
  goto L_c5ebc;
L_c5e94:;
  /* c5e94: ldrsh w13, [x17, #4]! */
  { const uint64_t _a = (ARC_X_R(c, 17) + INT64_C(4));
    ARC_X_W(c, 17, ARC_X_R(c, 17) + INT64_C(4));
    ARC_W_W(c, 13, ((int32_t)(int16_t)arc_ld16(_a)));
  }
  /* c5e98: ldursh w15, [x17, #-2] */
  ARC_W_W(c, 15, ((int32_t)(int16_t)arc_ld16((ARC_X_R(c, 17) + INT64_C(-2)))));
  /* c5e9c: cmp w15, w13 */
  (void)arc_sub32(c, ARC_W_R(c, 15), ARC_W_R(c, 13));
  /* c5ea0: csel w15, w15, w13, gt */
  ARC_W_W(c, 15, (ARC_COND(c, 12) ? (ARC_W_R(c, 15)) : ARC_W_R(c, 13)));
  /* c5ea4: csel x9, x17, x9, lt */
  ARC_X_W(c, 9, (ARC_COND(c, 11) ? (ARC_X_R(c, 17)) : ARC_X_R(c, 9)));
  /* c5ea8: csel x13, x16, x14, lt */
  ARC_X_W(c, 13, (ARC_COND(c, 11) ? (ARC_X_R(c, 16)) : ARC_X_R(c, 14)));
L_c5eac:;
  /* c5eac: cmp x13, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 13), ARC_X_R(c, 11));
  /* c5eb0: strh w15, [x12] */
  arc_st16(ARC_X_R(c, 12), ARC_W_R(c, 15));
  /* c5eb4: mov x12, x9 */
  ARC_X_W(c, 12, ARC_X_R(c, 9));
  /* c5eb8: b.gt #0xc5ee8 */
  if (ARC_COND(c, 12)) goto L_c5ee8;
L_c5ebc:;
  /* c5ebc: lsl x9, x13, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 13)) << ((UINT64_C(1)) & 63)));
  /* c5ec0: mov w14, #1 */
  ARC_W_W(c, 14, UINT64_C(1));
  /* c5ec4: bfi x14, x13, #1, #0x3f */
  ARC_X_W(c, 14, (((uint64_t)(ARC_X_R(c, 14)) & UINT64_C(1)) | ((((uint64_t)(ARC_X_R(c, 13))) & UINT64_C(9223372036854775807)) << 1)));
  /* c5ec8: add x16, x9, #2 */
  ARC_X_W(c, 16, (ARC_X_R(c, 9) + UINT64_C(2)));
  /* c5ecc: add x17, x12, x9 */
  ARC_X_W(c, 17, (ARC_X_R(c, 12) + ARC_X_R(c, 9)));
  /* c5ed0: cmp x16, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 16), ARC_X_R(c, 8));
  /* c5ed4: add x9, x17, #2 */
  ARC_X_W(c, 9, (ARC_X_R(c, 17) + UINT64_C(2)));
  /* c5ed8: b.lt #0xc5e94 */
  if (ARC_COND(c, 11)) goto L_c5e94;
  /* c5edc: ldrh w15, [x9] */
  ARC_W_W(c, 15, arc_ld16(ARC_X_R(c, 9)));
  /* c5ee0: mov x13, x14 */
  ARC_X_W(c, 13, ARC_X_R(c, 14));
  /* c5ee4: b #0xc5eac */
  goto L_c5eac;
L_c5ee8:;
  /* c5ee8: sub x20, x20, #2 */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) - UINT64_C(2)));
  /* c5eec: cmp x9, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 20));
  /* c5ef0: b.eq #0xc5e6c */
  if (ARC_COND(c, 0)) goto L_c5e6c;
  /* c5ef4: sub x11, x9, x19 */
  ARC_X_W(c, 11, (ARC_X_R(c, 9) - ARC_X_R(c, 19)));
  /* c5ef8: ldrh w12, [x20] */
  ARC_W_W(c, 12, arc_ld16(ARC_X_R(c, 20)));
  /* c5efc: add x11, x11, #2 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) + UINT64_C(2)));
  /* c5f00: asr x11, x11, #1 */
  ARC_X_W(c, 11, ((uint64_t)((int64_t)(ARC_X_R(c, 11)) >> ((UINT64_C(1)) & 63))));
  /* c5f04: strh w12, [x9] */
  arc_st16(ARC_X_R(c, 9), ARC_W_R(c, 12));
  /* c5f08: strh w10, [x20] */
  arc_st16(ARC_X_R(c, 20), ARC_W_R(c, 10));
  /* c5f0c: subs x11, x11, #2 */
  ARC_X_W(c, 11, arc_sub64(c, ARC_X_R(c, 11), UINT64_C(2)));
  /* c5f10: b.lt #0xc5e70 */
  if (ARC_COND(c, 11)) goto L_c5e70;
  /* c5f14: lsr x10, x11, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 11)) >> ((UINT64_C(1)) & 63)));
  /* c5f18: ldrsh w11, [x9] */
  ARC_W_W(c, 11, ((int32_t)(int16_t)arc_ld16(ARC_X_R(c, 9))));
  /* c5f1c: add x12, x19, x10, lsl #1 */
  ARC_X_W(c, 12, (ARC_X_R(c, 19) + ((uint64_t)(ARC_X_R(c, 10)) << 1)));
  /* c5f20: ldrsh w13, [x12] */
  ARC_W_W(c, 13, ((int32_t)(int16_t)arc_ld16(ARC_X_R(c, 12))));
  /* c5f24: cmp w13, w11 */
  (void)arc_sub32(c, ARC_W_R(c, 13), ARC_W_R(c, 11));
  /* c5f28: b.ge #0xc5e70 */
  if (ARC_COND(c, 10)) goto L_c5e70;
L_c5f2c:;
  /* c5f2c: mov x14, x9 */
  ARC_X_W(c, 14, ARC_X_R(c, 9));
  /* c5f30: mov x9, x12 */
  ARC_X_W(c, 9, ARC_X_R(c, 12));
  /* c5f34: strh w13, [x14] */
  arc_st16(ARC_X_R(c, 14), ARC_W_R(c, 13));
  /* c5f38: cbz x10, #0xc5f54 */
  if ((ARC_X_R(c, 10)) == 0) goto L_c5f54;
  /* c5f3c: sub x10, x10, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) - UINT64_C(1)));
  /* c5f40: lsr x10, x10, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 10)) >> ((UINT64_C(1)) & 63)));
  /* c5f44: add x12, x19, x10, lsl #1 */
  ARC_X_W(c, 12, (ARC_X_R(c, 19) + ((uint64_t)(ARC_X_R(c, 10)) << 1)));
  /* c5f48: ldrsh w13, [x12] */
  ARC_W_W(c, 13, ((int32_t)(int16_t)arc_ld16(ARC_X_R(c, 12))));
  /* c5f4c: cmp w13, w11 */
  (void)arc_sub32(c, ARC_W_R(c, 13), ARC_W_R(c, 11));
  /* c5f50: b.lt #0xc5f2c */
  if (ARC_COND(c, 11)) goto L_c5f2c;
L_c5f54:;
  /* c5f54: strh w11, [x9] */
  arc_st16(ARC_X_R(c, 9), ARC_W_R(c, 11));
  /* c5f58: b #0xc5e70 */
  goto L_c5e70;
L_c5f5c:;
  /* c5f5c: tbz w8, #0, #0xc5f70 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_c5f70;
  /* c5f60: b #0xc5cd4 */
  goto L_c5cd4;
L_c5f64:;
  /* c5f64: add x9, x19, #2 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + UINT64_C(2)));
  /* c5f68: cmp x9, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 20));
  /* c5f6c: b.eq #0xc5cd4 */
  if (ARC_COND(c, 0)) goto L_c5cd4;
L_c5f70:;
  /* c5f70: ldrsh w8, [x19, #2] */
  ARC_W_W(c, 8, ((int32_t)(int16_t)arc_ld16((ARC_X_R(c, 19) + INT64_C(2)))));
  /* c5f74: ldrsh w10, [x19] */
  ARC_W_W(c, 10, ((int32_t)(int16_t)arc_ld16(ARC_X_R(c, 19))));
  /* c5f78: mov x19, x9 */
  ARC_X_W(c, 19, ARC_X_R(c, 9));
  /* c5f7c: cmp w8, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 10));
  /* c5f80: b.ge #0xc5f64 */
  if (ARC_COND(c, 10)) goto L_c5f64;
  /* c5f84: mov x9, x19 */
  ARC_X_W(c, 9, ARC_X_R(c, 19));
L_c5f88:;
  /* c5f88: strh w10, [x9] */
  arc_st16(ARC_X_R(c, 9), ARC_W_R(c, 10));
  /* c5f8c: ldursh w10, [x9, #-4] */
  ARC_W_W(c, 10, ((int32_t)(int16_t)arc_ld16((ARC_X_R(c, 9) + INT64_C(-4)))));
  /* c5f90: sub x9, x9, #2 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - UINT64_C(2)));
  /* c5f94: cmp w8, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 10));
  /* c5f98: b.lt #0xc5f88 */
  if (ARC_COND(c, 11)) goto L_c5f88;
  /* c5f9c: strh w8, [x9] */
  arc_st16(ARC_X_R(c, 9), ARC_W_R(c, 8));
  /* c5fa0: b #0xc5f64 */
  goto L_c5f64;
}

void fn1_d7094(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038808724));
  /* d7094: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* d7098: stp x29, x30, [sp, #-0x50]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-80));
    (c)->sp = (c)->sp + INT64_C(-80);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* d709c: stp x26, x25, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* d70a0: stp x24, x23, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* d70a4: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* d70a8: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* d70ac: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* d70b0: nop  */
  /* nop: no architectural effect here */
  /* d70b4: adr x8, #0x14c8c0 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1362112)));
  /* d70b8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* d70bc: add x9, x8, w1, uxtw #4 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + ((uint64_t)(((uint64_t)(uint32_t)(ARC_W_R(c, 1)))) << 4)));
  /* d70c0: ldr w22, [x19] */
  ARC_W_W(c, 22, arc_ld32(ARC_X_R(c, 19)));
  /* d70c4: mov w20, w1 */
  ARC_W_W(c, 20, ARC_W_R(c, 1));
  /* d70c8: ldr x8, [x9, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(8))));
  /* d70cc: ldr w21, [x9] */
  ARC_W_W(c, 21, arc_ld32(ARC_X_R(c, 9)));
  /* d70d0: ldrb w0, [x8] */
  ARC_W_W(c, 0, arc_ld8(ARC_X_R(c, 8)));
  /* d70d4: cbz w0, #0xd711c */
  if ((ARC_W_R(c, 0)) == 0) goto L_d711c;
  /* d70d8: add x23, x19, #9 */
  ARC_X_W(c, 23, (ARC_X_R(c, 19) + UINT64_C(9)));
  /* d70dc: add x24, x8, #1 */
  ARC_X_W(c, 24, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* d70e0: mov x25, x22 */
  ARC_X_W(c, 25, ARC_X_R(c, 22));
L_d70e4:;
  /* d70e4: cbz x25, #0xd710c */
  if ((ARC_X_R(c, 25)) == 0) goto L_d710c;
  /* d70e8: ldrb w26, [x23] */
  ARC_W_W(c, 26, arc_ld8(ARC_X_R(c, 23)));
  /* d70ec: bl #0xd69b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(880880));
  fn1_d69b8(c);
  /* d70f0: cmp w0, w26 */
  (void)arc_sub32(c, ARC_W_R(c, 0), ARC_W_R(c, 26));
  /* d70f4: b.ne #0xd7114 */
  if (ARC_COND(c, 1)) goto L_d7114;
  /* d70f8: ldrb w0, [x24], #1 */
  { const uint64_t _a = ARC_X_R(c, 24);
    ARC_X_W(c, 24, ARC_X_R(c, 24) + INT64_C(1));
    ARC_W_W(c, 0, arc_ld8(_a));
  }
  /* d70fc: add x23, x23, #1 */
  ARC_X_W(c, 23, (ARC_X_R(c, 23) + UINT64_C(1)));
  /* d7100: sub x25, x25, #1 */
  ARC_X_W(c, 25, (ARC_X_R(c, 25) - UINT64_C(1)));
  /* d7104: cbnz w0, #0xd70e4 */
  if ((ARC_W_R(c, 0)) != 0) goto L_d70e4;
  /* d7108: b #0xd711c */
  goto L_d711c;
L_d710c:;
  /* d710c: sub w21, w21, #1 */
  ARC_W_W(c, 21, (ARC_W_R(c, 21) - UINT64_C(1)));
  /* d7110: b #0xd711c */
  goto L_d711c;
L_d7114:;
  /* d7114: cset w8, hi */
  ARC_W_W(c, 8, (ARC_COND(c, 8) ? 1 : 0));
  /* d7118: sub w21, w21, w8 */
  ARC_W_W(c, 21, (ARC_W_R(c, 21) - ARC_W_R(c, 8)));
L_d711c:;
  /* d711c: subs w13, w22, #1 */
  ARC_W_W(c, 13, arc_sub32(c, ARC_W_R(c, 22), UINT64_C(1)));
  /* d7120: add w8, w21, w22 */
  ARC_W_W(c, 8, (ARC_W_R(c, 21) + ARC_W_R(c, 22)));
  /* d7124: b.mi #0xd719c */
  if (ARC_COND(c, 4)) goto L_d719c;
  /* d7128: add x9, x19, #9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + UINT64_C(9)));
  /* d712c: add w14, w21, w22 */
  ARC_W_W(c, 14, (ARC_W_R(c, 21) + ARC_W_R(c, 22)));
  /* d7130: mov x15, #-0x3333333333333334 */
  ARC_X_W(c, 15, UINT64_C(14757395258967641292));
  /* d7134: mov x10, xzr */
  ARC_X_W(c, 10, ARC_X_R(c, 31));
  /* d7138: mov w11, w20 */
  ARC_W_W(c, 11, ARC_W_R(c, 20));
  /* d713c: add x12, x13, #1 */
  ARC_X_W(c, 12, (ARC_X_R(c, 13) + UINT64_C(1)));
  /* d7140: add x13, x9, x13 */
  ARC_X_W(c, 13, (ARC_X_R(c, 9) + ARC_X_R(c, 13)));
  /* d7144: sub w14, w14, #1 */
  ARC_W_W(c, 14, (ARC_W_R(c, 14) - UINT64_C(1)));
  /* d7148: movk x15, #0xcccd */
  ARC_X_W(c, 15, ((ARC_X_R(c, 15) & UINT64_C(18446744073709486080)) | UINT64_C(52429)));
  /* d714c: mov x16, #-0xa */
  ARC_X_W(c, 16, UINT64_C(18446744073709551606));
  /* d7150: mov w17, #1 */
  ARC_W_W(c, 17, UINT64_C(1));
  /* d7154: b #0xd7168 */
  goto L_d7168;
L_d7158:;
  /* d7158: strb w1, [x9, w14, uxtw] */
  arc_st8((ARC_X_R(c, 9) + ((uint64_t)(uint32_t)(ARC_W_R(c, 14)))), ARC_W_R(c, 1));
L_d715c:;
  /* d715c: subs x12, x12, #1 */
  ARC_X_W(c, 12, arc_sub64(c, ARC_X_R(c, 12), UINT64_C(1)));
  /* d7160: sub w14, w14, #1 */
  ARC_W_W(c, 14, (ARC_W_R(c, 14) - UINT64_C(1)));
  /* d7164: b.le #0xd7194 */
  if (ARC_COND(c, 13)) goto L_d7194;
L_d7168:;
  /* d7168: ldrb w0, [x13], #0xffffffffffffffff */
  { const uint64_t _a = ARC_X_R(c, 13);
    ARC_X_W(c, 13, ARC_X_R(c, 13) + INT64_C(-1));
    ARC_W_W(c, 0, arc_ld8(_a));
  }
  /* d716c: cmp w14, #0x31f */
  (void)arc_sub32(c, ARC_W_R(c, 14), UINT64_C(799));
  /* d7170: lsl x0, x0, x11 */
  ARC_X_W(c, 0, ((uint64_t)(ARC_X_R(c, 0)) << ((ARC_X_R(c, 11)) & 63)));
  /* d7174: add x0, x0, x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + ARC_X_R(c, 10)));
  /* d7178: umulh x10, x0, x15 */
  ARC_X_W(c, 10, arc_umulh(ARC_X_R(c, 0), ARC_X_R(c, 15)));
  /* d717c: lsr x10, x10, #3 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 10)) >> ((UINT64_C(3)) & 63)));
  /* d7180: madd x1, x10, x16, x0 */
  ARC_X_W(c, 1, ((uint64_t)(ARC_X_R(c, 0)) + ((uint64_t)(ARC_X_R(c, 10)) * (uint64_t)(ARC_X_R(c, 16)))));
  /* d7184: b.ls #0xd7158 */
  if (ARC_COND(c, 9)) goto L_d7158;
  /* d7188: cbz x1, #0xd715c */
  if ((ARC_X_R(c, 1)) == 0) goto L_d715c;
  /* d718c: strb w17, [x19, #8] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(8)), ARC_W_R(c, 17));
  /* d7190: b #0xd715c */
  goto L_d715c;
L_d7194:;
  /* d7194: cmp x0, #0xa */
  (void)arc_sub64(c, ARC_X_R(c, 0), UINT64_C(10));
  /* d7198: b.hs #0xd71fc */
  if (ARC_COND(c, 2)) goto L_d71fc;
L_d719c:;
  /* d719c: ldr w11, [x19, #4] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 19) + INT64_C(4))));
  /* d71a0: cmp w8, #0x320 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(800));
  /* d71a4: mov w9, #0x320 */
  ARC_W_W(c, 9, UINT64_C(800));
  /* d71a8: csel w10, w8, w9, lo */
  ARC_W_W(c, 10, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* d71ac: add w9, w11, w21 */
  ARC_W_W(c, 9, (ARC_W_R(c, 11) + ARC_W_R(c, 21)));
  /* d71b0: stp w10, w9, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    arc_st32(_pa, ARC_W_R(c, 10));
    arc_st32(_pa + 4, ARC_W_R(c, 9));
  }
  /* d71b4: cbz w8, #0xd71dc */
  if ((ARC_W_R(c, 8)) == 0) goto L_d71dc;
  /* d71b8: add x8, x19, #9 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + UINT64_C(9)));
  /* d71bc: neg w9, w10 */
  ARC_W_W(c, 9, ((uint32_t)0 - (uint32_t)(ARC_W_R(c, 10))));
  /* d71c0: sub x10, x10, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) - UINT64_C(1)));
L_d71c4:;
  /* d71c4: ldrb w11, [x8, w10, uxtw] */
  ARC_W_W(c, 11, arc_ld8((ARC_X_R(c, 8) + ((uint64_t)(uint32_t)(ARC_W_R(c, 10))))));
  /* d71c8: cbnz w11, #0xd71e0 */
  if ((ARC_W_R(c, 11)) != 0) goto L_d71e0;
  /* d71cc: adds w9, w9, #1 */
  ARC_W_W(c, 9, arc_add32(c, ARC_W_R(c, 9), UINT64_C(1), 0));
  /* d71d0: str w10, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 10));
  /* d71d4: sub x10, x10, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) - UINT64_C(1)));
  /* d71d8: b.lo #0xd71c4 */
  if (ARC_COND(c, 3)) goto L_d71c4;
L_d71dc:;
  /* d71dc: str wzr, [x19, #4] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(4)), ARC_W_R(c, 31));
L_d71e0:;
  /* d71e0: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* d71e4: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* d71e8: ldp x24, x23, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* d71ec: ldp x26, x25, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* d71f0: ldp x29, x30, [sp], #0x50 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(80);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* d71f4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* d71f8: ret  */
  return;
L_d71fc:;
  /* d71fc: mov x12, #-0x3333333333333334 */
  ARC_X_W(c, 12, UINT64_C(14757395258967641292));
  /* d7200: sub w11, w21, #1 */
  ARC_W_W(c, 11, (ARC_W_R(c, 21) - UINT64_C(1)));
  /* d7204: mov x13, #-0xa */
  ARC_X_W(c, 13, UINT64_C(18446744073709551606));
  /* d7208: movk x12, #0xcccd */
  ARC_X_W(c, 12, ((ARC_X_R(c, 12) & UINT64_C(18446744073709486080)) | UINT64_C(52429)));
  /* d720c: mov w14, #1 */
  ARC_W_W(c, 14, UINT64_C(1));
  /* d7210: b #0xd7228 */
  goto L_d7228;
L_d7214:;
  /* d7214: strb w16, [x9, w11, uxtw] */
  arc_st8((ARC_X_R(c, 9) + ((uint64_t)(uint32_t)(ARC_W_R(c, 11)))), ARC_W_R(c, 16));
L_d7218:;
  /* d7218: cmp x10, #9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), UINT64_C(9));
  /* d721c: sub w11, w11, #1 */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) - UINT64_C(1)));
  /* d7220: mov x10, x15 */
  ARC_X_W(c, 10, ARC_X_R(c, 15));
  /* d7224: b.ls #0xd719c */
  if (ARC_COND(c, 9)) goto L_d719c;
L_d7228:;
  /* d7228: umulh x15, x10, x12 */
  ARC_X_W(c, 15, arc_umulh(ARC_X_R(c, 10), ARC_X_R(c, 12)));
  /* d722c: cmp w11, #0x31f */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(799));
  /* d7230: lsr x15, x15, #3 */
  ARC_X_W(c, 15, ((uint64_t)(ARC_X_R(c, 15)) >> ((UINT64_C(3)) & 63)));
  /* d7234: madd x16, x15, x13, x10 */
  ARC_X_W(c, 16, ((uint64_t)(ARC_X_R(c, 10)) + ((uint64_t)(ARC_X_R(c, 15)) * (uint64_t)(ARC_X_R(c, 13)))));
  /* d7238: b.ls #0xd7214 */
  if (ARC_COND(c, 9)) goto L_d7214;
  /* d723c: cbz x16, #0xd7218 */
  if ((ARC_X_R(c, 16)) == 0) goto L_d7218;
  /* d7240: strb w14, [x19, #8] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(8)), ARC_W_R(c, 14));
  /* d7244: b #0xd7218 */
  goto L_d7218;
}

void fn1_da784(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038822788));
  /* da784: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* da788: sub sp, sp, #0x80 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(128)));
  /* da78c: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* da790: stp x28, x27, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* da794: stp x26, x25, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* da798: stp x24, x23, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* da79c: stp x22, x21, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* da7a0: stp x20, x19, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* da7a4: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* da7a8: ldp x26, x8, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* da7ac: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* da7b0: ldrb w9, [x0] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 0)));
  /* da7b4: lsr x10, x9, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(1)) & 63)));
  /* da7b8: and x11, x26, #0xfffffffffffffffe */
  ARC_X_W(c, 11, (ARC_X_R(c, 26) & UINT64_C(18446744073709551614)));
  /* da7bc: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* da7c0: sub x27, x11, #1 */
  ARC_X_W(c, 27, (ARC_X_R(c, 11) - UINT64_C(1)));
  /* da7c4: mov w9, #0x16 */
  ARC_W_W(c, 9, UINT64_C(22));
  /* da7c8: csel x22, x10, x8, eq */
  ARC_X_W(c, 22, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 8)));
  /* da7cc: csel x28, x9, x27, eq */
  ARC_X_W(c, 28, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 27)));
  /* da7d0: subs x21, x2, x1 */
  ARC_X_W(c, 21, arc_sub64(c, ARC_X_R(c, 2), ARC_X_R(c, 1)));
  /* da7d4: b.eq #0xda9f4 */
  if (ARC_COND(c, 0)) goto L_da9f4;
  /* da7d8: ldr x9, [x19, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* da7dc: tst x26, #1 */
  arc_flags_logical64(c, (uint64_t)(ARC_X_R(c, 26) & UINT64_C(1)));
  /* da7e0: ubfx x10, x26, #1, #7 */
  ARC_X_W(c, 10, (((uint64_t)(ARC_X_R(c, 26)) >> 1) & UINT64_C(127)));
  /* da7e4: csinc x20, x9, x19, ne */
  ARC_X_W(c, 20, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 19)) + 1)));
  /* da7e8: csel x23, x10, x8, eq */
  ARC_X_W(c, 23, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 8)));
  /* da7ec: cmp x1, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 1), ARC_X_R(c, 20));
  /* da7f0: b.lo #0xda828 */
  if (ARC_COND(c, 3)) goto L_da828;
  /* da7f4: add x24, x20, x23 */
  ARC_X_W(c, 24, (ARC_X_R(c, 20) + ARC_X_R(c, 23)));
  /* da7f8: add x8, x24, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 24) + UINT64_C(1)));
  /* da7fc: cmp x1, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 1), ARC_X_R(c, 8));
  /* da800: b.hs #0xda828 */
  if (ARC_COND(c, 2)) goto L_da828;
  /* da804: cmn x21, #8 */
  (void)arc_add64(c, ARC_X_R(c, 21), UINT64_C(8), 0);
  /* da808: b.hs #0xdaa1c */
  if (ARC_COND(c, 2)) goto L_daa1c;
  /* da80c: cmp x21, #0x16 */
  (void)arc_sub64(c, ARC_X_R(c, 21), UINT64_C(22));
  /* da810: b.hi #0xda894 */
  if (ARC_COND(c, 8)) goto L_da894;
  /* da814: lsl w8, w21, #1 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 21)) << ((UINT64_C(1)) & 31)));
  /* da818: add x9, sp, #8 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(8)));
  /* da81c: orr x22, x9, #1 */
  ARC_X_W(c, 22, (ARC_X_R(c, 9) | UINT64_C(1)));
  /* da820: strb w8, [sp, #8] */
  arc_st8(((c)->sp + INT64_C(8)), ARC_W_R(c, 8));
  /* da824: b #0xda8c4 */
  goto L_da8c4;
L_da828:;
  /* da828: sub x8, x28, x22 */
  ARC_X_W(c, 8, (ARC_X_R(c, 28) - ARC_X_R(c, 22)));
  /* da82c: add x25, x22, x21 */
  ARC_X_W(c, 25, (ARC_X_R(c, 22) + ARC_X_R(c, 21)));
  /* da830: cmp x8, x21 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 21));
  /* da834: b.hs #0xda88c */
  if (ARC_COND(c, 2)) goto L_da88c;
  /* da838: mov x8, #-9 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551607));
  /* da83c: sub x9, x25, x28 */
  ARC_X_W(c, 9, (ARC_X_R(c, 25) - ARC_X_R(c, 28)));
  /* da840: sub x8, x8, x28 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) - ARC_X_R(c, 28)));
  /* da844: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* da848: b.hi #0xdaa1c */
  if (ARC_COND(c, 8)) goto L_daa1c;
  /* da84c: mov x8, #-0xe */
  ARC_X_W(c, 8, UINT64_C(18446744073709551602));
  /* da850: mov x26, x1 */
  ARC_X_W(c, 26, ARC_X_R(c, 1));
  /* da854: movk x8, #0x7fff, lsl #48 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(281474976710655)) | UINT64_C(9223090561878065152)));
  /* da858: cmp x28, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 28), ARC_X_R(c, 8));
  /* da85c: b.hi #0xda960 */
  if (ARC_COND(c, 8)) goto L_da960;
  /* da860: lsl x8, x28, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 28)) << ((UINT64_C(1)) & 63)));
  /* da864: mov w10, #0x1a */
  ARC_W_W(c, 10, UINT64_C(26));
  /* da868: cmp x25, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 25), ARC_X_R(c, 8));
  /* da86c: csel x8, x25, x8, hi */
  ARC_X_W(c, 8, (ARC_COND(c, 8) ? (ARC_X_R(c, 25)) : ARC_X_R(c, 8)));
  /* da870: orr x9, x8, #7 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) | UINT64_C(7)));
  /* da874: cmp x9, #0x17 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(23));
  /* da878: csinc x9, x10, x9, eq */
  ARC_X_W(c, 9, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ((ARC_X_R(c, 9)) + 1)));
  /* da87c: cmp x8, #0x17 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(23));
  /* da880: mov w8, #0x17 */
  ARC_W_W(c, 8, UINT64_C(23));
  /* da884: csel x23, x8, x9, lo */
  ARC_X_W(c, 23, (ARC_COND(c, 3) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* da888: b #0xda964 */
  goto L_da964;
L_da88c:;
  /* da88c: mov x24, x20 */
  ARC_X_W(c, 24, ARC_X_R(c, 20));
  /* da890: b #0xda9a8 */
  goto L_da9a8;
L_da894:;
  /* da894: orr x8, x21, #7 */
  ARC_X_W(c, 8, (ARC_X_R(c, 21) | UINT64_C(7)));
  /* da898: mov w9, #0x1a */
  ARC_W_W(c, 9, UINT64_C(26));
  /* da89c: mov x22, x1 */
  ARC_X_W(c, 22, ARC_X_R(c, 1));
  /* da8a0: cmp x8, #0x17 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(23));
  /* da8a4: csinc x25, x9, x8, eq */
  ARC_X_W(c, 25, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 8)) + 1)));
  /* da8a8: mov x0, x25 */
  ARC_X_W(c, 0, ARC_X_R(c, 25));
  /* da8ac: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(895152));
  fn1_1428f0(c);
  /* da8b0: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* da8b4: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* da8b8: orr x8, x25, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 25) | UINT64_C(1)));
  /* da8bc: stp x21, x0, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 21));
    arc_st64(_pa + 8, ARC_X_R(c, 0));
  }
  /* da8c0: str x8, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 8));
L_da8c4:;
  /* da8c4: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* da8c8: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* da8cc: bl #0x1449d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(895184));
  fn1_1449d8(c);
  /* da8d0: strb wzr, [x22, x21] */
  arc_st8((ARC_X_R(c, 22) + ARC_X_R(c, 21)), ARC_W_R(c, 31));
  /* da8d4: add x10, sp, #8 */
  ARC_X_W(c, 10, ((c)->sp + UINT64_C(8)));
  /* da8d8: ldrb w8, [sp, #8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(8))));
  /* da8dc: ldp x11, x9, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 11, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* da8e0: ands w21, w8, #1 */
  { uint32_t _r = (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1));
    arc_flags_logical32(c, _r);
    ARC_W_W(c, 21, _r); }
  /* da8e4: lsr x8, x8, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* da8e8: csinc x7, x9, x10, ne */
  ARC_X_W(c, 7, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 10)) + 1)));
  /* da8ec: csel x6, x8, x11, eq */
  ARC_X_W(c, 6, (ARC_COND(c, 0) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 11)));
  /* da8f0: tst x26, #1 */
  arc_flags_logical64(c, (uint64_t)(ARC_X_R(c, 26) & UINT64_C(1)));
  /* da8f4: mov w8, #0x16 */
  ARC_W_W(c, 8, UINT64_C(22));
  /* da8f8: csel x1, x8, x27, eq */
  ARC_X_W(c, 1, (ARC_COND(c, 0) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 27)));
  /* da8fc: sub x8, x1, x23 */
  ARC_X_W(c, 8, (ARC_X_R(c, 1) - ARC_X_R(c, 23)));
  /* da900: cmp x8, x6 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 6));
  /* da904: b.hs #0xda930 */
  if (ARC_COND(c, 2)) goto L_da930;
  /* da908: sub x8, x23, x1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 23) - ARC_X_R(c, 1)));
  /* da90c: add x2, x8, x6 */
  ARC_X_W(c, 2, (ARC_X_R(c, 8) + ARC_X_R(c, 6)));
  /* da910: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* da914: mov x3, x23 */
  ARC_X_W(c, 3, ARC_X_R(c, 23));
  /* da918: mov x4, x23 */
  ARC_X_W(c, 4, ARC_X_R(c, 23));
  /* da91c: mov x5, xzr */
  ARC_X_W(c, 5, ARC_X_R(c, 31));
  /* da920: bl #0x142b90 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(895268));
  fn1_142b90(c);
  /* da924: ldrb w8, [sp, #8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(8))));
  /* da928: and w21, w8, #1 */
  ARC_W_W(c, 21, (ARC_W_R(c, 8) & UINT64_C(1)));
  /* da92c: b #0xda9e0 */
  goto L_da9e0;
L_da930:;
  /* da930: cbz x6, #0xda9e0 */
  if ((ARC_X_R(c, 6)) == 0) goto L_da9e0;
  /* da934: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* da938: mov x1, x7 */
  ARC_X_W(c, 1, ARC_X_R(c, 7));
  /* da93c: mov x2, x6 */
  ARC_X_W(c, 2, ARC_X_R(c, 6));
  /* da940: mov x22, x6 */
  ARC_X_W(c, 22, ARC_X_R(c, 6));
  /* da944: bl #0x1449f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(895304));
  fn1_1449f0(c);
  /* da948: ldrb w9, [x19] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 19)));
  /* da94c: add x8, x22, x23 */
  ARC_X_W(c, 8, (ARC_X_R(c, 22) + ARC_X_R(c, 23)));
  /* da950: tbnz w9, #0, #0xda9d8 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) != 0) goto L_da9d8;
  /* da954: lsl w9, w8, #1 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 8)) << ((UINT64_C(1)) & 31)));
  /* da958: strb w9, [x19] */
  arc_st8(ARC_X_R(c, 19), ARC_W_R(c, 9));
  /* da95c: b #0xda9dc */
  goto L_da9dc;
L_da960:;
  /* da960: mov x23, #-9 */
  ARC_X_W(c, 23, UINT64_C(18446744073709551607));
L_da964:;
  /* da964: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* da968: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(895340));
  fn1_1428f0(c);
  /* da96c: mov x24, x0 */
  ARC_X_W(c, 24, ARC_X_R(c, 0));
  /* da970: cbz x22, #0xda984 */
  if ((ARC_X_R(c, 22)) == 0) goto L_da984;
  /* da974: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* da978: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* da97c: mov x2, x22 */
  ARC_X_W(c, 2, ARC_X_R(c, 22));
  /* da980: bl #0x1449f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(895364));
  fn1_1449f0(c);
L_da984:;
  /* da984: add x1, x28, #1 */
  ARC_X_W(c, 1, (ARC_X_R(c, 28) + UINT64_C(1)));
  /* da988: cmp x1, #0x17 */
  (void)arc_sub64(c, ARC_X_R(c, 1), UINT64_C(23));
  /* da98c: b.eq #0xda998 */
  if (ARC_COND(c, 0)) goto L_da998;
  /* da990: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* da994: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(895384));
  fn1_142608(c);
L_da998:;
  /* da998: orr x8, x23, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 23) | UINT64_C(1)));
  /* da99c: mov x1, x26 */
  ARC_X_W(c, 1, ARC_X_R(c, 26));
  /* da9a0: stp x22, x24, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 24));
  }
  /* da9a4: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
L_da9a8:;
  /* da9a8: add x20, x24, x22 */
  ARC_X_W(c, 20, (ARC_X_R(c, 24) + ARC_X_R(c, 22)));
  /* da9ac: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* da9b0: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* da9b4: bl #0x1449f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(895416));
  fn1_1449f0(c);
  /* da9b8: strb wzr, [x20, x21] */
  arc_st8((ARC_X_R(c, 20) + ARC_X_R(c, 21)), ARC_W_R(c, 31));
  /* da9bc: ldrb w8, [x19] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 19)));
  /* da9c0: tbnz w8, #0, #0xda9d0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_da9d0;
  /* da9c4: lsl w8, w25, #1 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 25)) << ((UINT64_C(1)) & 31)));
  /* da9c8: strb w8, [x19] */
  arc_st8(ARC_X_R(c, 19), ARC_W_R(c, 8));
  /* da9cc: b #0xda9f4 */
  goto L_da9f4;
L_da9d0:;
  /* da9d0: str x25, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 25));
  /* da9d4: b #0xda9f4 */
  goto L_da9f4;
L_da9d8:;
  /* da9d8: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
L_da9dc:;
  /* da9dc: strb wzr, [x20, x8] */
  arc_st8((ARC_X_R(c, 20) + ARC_X_R(c, 8)), ARC_W_R(c, 31));
L_da9e0:;
  /* da9e0: cbz w21, #0xda9f4 */
  if ((ARC_W_R(c, 21)) == 0) goto L_da9f4;
  /* da9e4: ldr x8, [sp, #8] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(8))));
  /* da9e8: ldr x0, [sp, #0x18] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(24))));
  /* da9ec: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* da9f0: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(895476));
  fn1_142608(c);
L_da9f4:;
  /* da9f4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* da9f8: ldp x20, x19, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* da9fc: ldp x22, x21, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* daa00: ldp x24, x23, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* daa04: ldp x26, x25, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* daa08: ldp x28, x27, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* daa0c: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* daa10: add sp, sp, #0x80 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(128)));
  /* daa14: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* daa18: ret  */
  return;
L_daa1c:;
  /* daa1c: bl #0xd7d54 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(895520));
  fn1_d7d54(c);
  /* daa20: ldrb w8, [sp, #8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(8))));
  /* daa24: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* daa28: tbz w8, #0, #0xdaa3c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_daa3c;
  /* daa2c: ldr x8, [sp, #8] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(8))));
  /* daa30: ldr x0, [sp, #0x18] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(24))));
  /* daa34: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* daa38: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(895548));
  fn1_142608(c);
L_daa3c:;
  /* daa3c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* daa40: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(895556));
  fn1_9cc20(c);
}

void fn1_dc334(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038829876));
  /* dc334: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* dc338: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* dc33c: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* dc340: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* dc344: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* dc348: bl #0x142c20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(901964));
  fn1_142c20(c);
  /* dc34c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* dc350: mov w1, #8 */
  ARC_W_W(c, 1, UINT64_C(8));
  /* dc354: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* dc358: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* dc35c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* dc360: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_e1580(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038850944));
  /* e1580: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e1584: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e1588: str x23, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 23));
  /* e158c: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* e1590: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* e1594: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* e1598: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* e159c: mov x0, x3 */
  ARC_X_W(c, 0, ARC_X_R(c, 3));
  /* e15a0: mov x19, x3 */
  ARC_X_W(c, 19, ARC_X_R(c, 3));
  /* e15a4: mov x23, x2 */
  ARC_X_W(c, 23, ARC_X_R(c, 2));
  /* e15a8: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* e15ac: bl #0x142860 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(923056));
  fn1_142860(c);
  /* e15b0: ldrb w8, [x22] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 22)));
  /* e15b4: ldr x9, [x22, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 22) + INT64_C(8))));
  /* e15b8: lsr x10, x8, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* e15bc: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* e15c0: csel x9, x10, x9, eq */
  ARC_X_W(c, 9, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* e15c4: cmn x0, #1 */
  (void)arc_add64(c, ARC_X_R(c, 0), UINT64_C(1), 0);
  /* e15c8: b.eq #0xe162c */
  if (ARC_COND(c, 0)) goto L_e162c;
  /* e15cc: subs x9, x9, x20 */
  ARC_X_W(c, 9, arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 20)));
  /* e15d0: b.lo #0xe162c */
  if (ARC_COND(c, 3)) goto L_e162c;
  /* e15d4: cmp x9, x23 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 23));
  /* e15d8: ldr x10, [x22, #0x10] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 22) + INT64_C(16))));
  /* e15dc: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* e15e0: csel x23, x9, x23, lo */
  ARC_X_W(c, 23, (ARC_COND(c, 3) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 23)));
  /* e15e4: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* e15e8: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* e15ec: csinc x8, x10, x22, ne */
  ARC_X_W(c, 8, (ARC_COND(c, 1) ? (ARC_X_R(c, 10)) : ((ARC_X_R(c, 22)) + 1)));
  /* e15f0: cmp x0, x23 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 23));
  /* e15f4: csel x2, x0, x23, lo */
  ARC_X_W(c, 2, (ARC_COND(c, 3) ? (ARC_X_R(c, 0)) : ARC_X_R(c, 23)));
  /* e15f8: add x0, x8, x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 8) + ARC_X_R(c, 20)));
  /* e15fc: bl #0x142890 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(923136));
  fn1_142890(c);
  /* e1600: cmp x23, x21 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 21));
  /* e1604: cset w8, hi */
  ARC_W_W(c, 8, (ARC_COND(c, 8) ? 1 : 0));
  /* e1608: csinv w8, w8, wzr, hs */
  ARC_W_W(c, 8, (ARC_COND(c, 2) ? (ARC_W_R(c, 8)) : (~(uint32_t)(ARC_W_R(c, 31)))));
  /* e160c: cmp w0, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(0));
  /* e1610: csel w0, w8, w0, eq */
  ARC_W_W(c, 0, (ARC_COND(c, 0) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 0)));
  /* e1614: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* e1618: ldr x23, [sp, #0x10] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(16))));
  /* e161c: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* e1620: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e1624: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* e1628: ret  */
  return;
L_e162c:;
  /* e162c: bl #0xda020 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(923184));
  fn1_da020(c);
}

void fn1_e3dec(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038861292));
  /* e3dec: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e3df0: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e3df4: str x23, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 23));
  /* e3df8: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* e3dfc: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* e3e00: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* e3e04: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* e3e08: mov x0, x1 */
  ARC_X_W(c, 0, ARC_X_R(c, 1));
  /* e3e0c: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* e3e10: bl #0x142e30 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(933396));
  fn1_142e30(c);
  /* e3e14: ldp x8, x10, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* e3e18: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* e3e1c: ldrb w9, [x19] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 19)));
  /* e3e20: and x11, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 11, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* e3e24: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* e3e28: mov w9, #4 */
  ARC_W_W(c, 9, UINT64_C(4));
  /* e3e2c: sub x11, x11, #1 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) - UINT64_C(1)));
  /* e3e30: ubfx x12, x8, #1, #7 */
  ARC_X_W(c, 12, (((uint64_t)(ARC_X_R(c, 8)) >> 1) & UINT64_C(127)));
  /* e3e34: csel x1, x9, x11, eq */
  ARC_X_W(c, 1, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 11)));
  /* e3e38: tst x8, #1 */
  arc_flags_logical64(c, (uint64_t)(ARC_X_R(c, 8) & UINT64_C(1)));
  /* e3e3c: csel x22, x12, x10, eq */
  ARC_X_W(c, 22, (ARC_COND(c, 0) ? (ARC_X_R(c, 12)) : ARC_X_R(c, 10)));
  /* e3e40: sub x9, x1, x22 */
  ARC_X_W(c, 9, (ARC_X_R(c, 1) - ARC_X_R(c, 22)));
  /* e3e44: cmp x9, x0 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 0));
  /* e3e48: b.hs #0xe3e74 */
  if (ARC_COND(c, 2)) goto L_e3e74;
  /* e3e4c: sub x8, x21, x1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 21) - ARC_X_R(c, 1)));
  /* e3e50: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* e3e54: mov x3, x22 */
  ARC_X_W(c, 3, ARC_X_R(c, 22));
  /* e3e58: add x2, x8, x22 */
  ARC_X_W(c, 2, (ARC_X_R(c, 8) + ARC_X_R(c, 22)));
  /* e3e5c: mov x4, x22 */
  ARC_X_W(c, 4, ARC_X_R(c, 22));
  /* e3e60: mov x5, xzr */
  ARC_X_W(c, 5, ARC_X_R(c, 31));
  /* e3e64: mov x6, x21 */
  ARC_X_W(c, 6, ARC_X_R(c, 21));
  /* e3e68: mov x7, x20 */
  ARC_X_W(c, 7, ARC_X_R(c, 20));
  /* e3e6c: bl #0x142d40 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(933488));
  fn1_142d40(c);
  /* e3e70: b #0xe3eb8 */
  goto L_e3eb8;
L_e3e74:;
  /* e3e74: cbz x21, #0xe3eb8 */
  if ((ARC_X_R(c, 21)) == 0) goto L_e3eb8;
  /* e3e78: ldr x9, [x19, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* e3e7c: add x10, x19, #4 */
  ARC_X_W(c, 10, (ARC_X_R(c, 19) + UINT64_C(4)));
  /* e3e80: tst x8, #1 */
  arc_flags_logical64(c, (uint64_t)(ARC_X_R(c, 8) & UINT64_C(1)));
  /* e3e84: lsl x2, x21, #2 */
  ARC_X_W(c, 2, ((uint64_t)(ARC_X_R(c, 21)) << ((UINT64_C(2)) & 63)));
  /* e3e88: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* e3e8c: csel x23, x10, x9, eq */
  ARC_X_W(c, 23, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* e3e90: add x0, x23, x22, lsl #2 */
  ARC_X_W(c, 0, (ARC_X_R(c, 23) + ((uint64_t)(ARC_X_R(c, 22)) << 2)));
  /* e3e94: bl #0x1449f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(933528));
  fn1_1449f0(c);
  /* e3e98: ldrb w9, [x19] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 19)));
  /* e3e9c: add x8, x22, x21 */
  ARC_X_W(c, 8, (ARC_X_R(c, 22) + ARC_X_R(c, 21)));
  /* e3ea0: tbnz w9, #0, #0xe3eb0 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) != 0) goto L_e3eb0;
  /* e3ea4: lsl w9, w8, #1 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 8)) << ((UINT64_C(1)) & 31)));
  /* e3ea8: strb w9, [x19] */
  arc_st8(ARC_X_R(c, 19), ARC_W_R(c, 9));
  /* e3eac: b #0xe3eb4 */
  goto L_e3eb4;
L_e3eb0:;
  /* e3eb0: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
L_e3eb4:;
  /* e3eb4: str wzr, [x23, x8, lsl #2] */
  arc_st32((ARC_X_R(c, 23) + ((uint64_t)(ARC_X_R(c, 8)) << 2)), ARC_W_R(c, 31));
L_e3eb8:;
  /* e3eb8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* e3ebc: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* e3ec0: ldr x23, [sp, #0x10] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(16))));
  /* e3ec4: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* e3ec8: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e3ecc: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* e3ed0: ret  */
  return;
}

void fn1_e8804(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038880260));
  /* e8804: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e8808: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e880c: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* e8810: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* e8814: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* e8818: bl #0x143058 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(952348));
  fn1_143058(c);
  /* e881c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* e8820: mov w1, #0x20 */
  ARC_W_W(c, 1, UINT64_C(32));
  /* e8824: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* e8828: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e882c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* e8830: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_eac3c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038889532));
  /* eac3c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* eac40: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* eac44: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* eac48: bl #0x143220 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(961612));
  fn1_143220(c);
  /* eac4c: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* eac50: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* eac54: ret  */
  return;
  /* eac58: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(961628));
  fn1_a1454(c);
}

void fn1_ec3ec(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038895596));
  /* ec3ec: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* ec3f0: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* ec3f4: stp x24, x23, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* ec3f8: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* ec3fc: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* ec400: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* ec404: sxtw x21, w1 */
  ARC_X_W(c, 21, ((int64_t)(int32_t)(ARC_W_R(c, 1))));
  /* ec408: ldr x8, [x0, #0x80] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(128))));
  /* ec40c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* ec410: add x22, x21, #1 */
  ARC_X_W(c, 22, (ARC_X_R(c, 21) + UINT64_C(1)));
  /* ec414: cmp x22, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 8));
  /* ec418: b.ls #0xec4a4 */
  if (ARC_COND(c, 9)) goto L_ec4a4;
  /* ec41c: ldp x8, x0, [x19, #0x68] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(104));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 0, arc_ld64(_pa + 8));
  }
  /* ec420: mov x9, #0xfffffffffffffff */
  ARC_X_W(c, 9, UINT64_C(1152921504606846975));
  /* ec424: lsl x8, x8, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) << ((UINT64_C(1)) & 63)));
  /* ec428: cmp x8, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 22));
  /* ec42c: csel x8, x8, x22, hi */
  ARC_X_W(c, 8, (ARC_COND(c, 8) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 22)));
  /* ec430: cmp x22, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 9));
  /* ec434: mov x9, #0x1fffffffffffffff */
  ARC_X_W(c, 9, UINT64_C(2305843009213693951));
  /* ec438: csel x23, x8, x9, lo */
  ARC_X_W(c, 23, (ARC_COND(c, 3) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* ec43c: lsl x20, x23, #3 */
  ARC_X_W(c, 20, ((uint64_t)(ARC_X_R(c, 23)) << ((UINT64_C(3)) & 63)));
  /* ec440: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* ec444: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(967752));
  fn1_142878(c);
  /* ec448: cbz x0, #0xec4d0 */
  if ((ARC_X_R(c, 0)) == 0) goto L_ec4d0;
  /* ec44c: ldr x24, [x19, #0x78] */
  ARC_X_W(c, 24, arc_ld64((ARC_X_R(c, 19) + INT64_C(120))));
  /* ec450: str x0, [x19, #0x70] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(112)), ARC_X_R(c, 0));
  /* ec454: cmp x24, x23 */
  (void)arc_sub64(c, ARC_X_R(c, 24), ARC_X_R(c, 23));
  /* ec458: b.hs #0xec49c */
  if (ARC_COND(c, 2)) goto L_ec49c;
  /* ec45c: lsl x9, x24, #3 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 24)) << ((UINT64_C(3)) & 63)));
  /* ec460: add x11, x20, x0 */
  ARC_X_W(c, 11, (ARC_X_R(c, 20) + ARC_X_R(c, 0)));
  /* ec464: mvn x12, x0 */
  ARC_X_W(c, 12, (~(uint64_t)(ARC_X_R(c, 0))));
  /* ec468: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* ec46c: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* ec470: add x8, x0, x9 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + ARC_X_R(c, 9)));
  /* ec474: sub x9, x12, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 12) - ARC_X_R(c, 9)));
  /* ec478: add x10, x8, #8 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(8)));
  /* ec47c: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* ec480: cmp x10, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 11));
  /* ec484: csel x10, x10, x11, hi */
  ARC_X_W(c, 10, (ARC_COND(c, 8) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 11)));
  /* ec488: add x9, x9, x10 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + ARC_X_R(c, 10)));
  /* ec48c: and x9, x9, #0xfffffffffffffff8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) & UINT64_C(18446744073709551608)));
  /* ec490: add x2, x9, #8 */
  ARC_X_W(c, 2, (ARC_X_R(c, 9) + UINT64_C(8)));
  /* ec494: bl #0x144a20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(967832));
  fn1_144a20(c);
  /* ec498: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
L_ec49c:;
  /* ec49c: str x23, [x19, #0x80] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(128)), ARC_X_R(c, 23));
  /* ec4a0: b #0xec4a8 */
  goto L_ec4a8;
L_ec4a4:;
  /* ec4a4: ldp x0, x24, [x19, #0x70] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(112));
    ARC_X_W(c, 0, arc_ld64(_pa));
    ARC_X_W(c, 24, arc_ld64(_pa + 8));
  }
L_ec4a8:;
  /* ec4a8: cmp x24, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 24), ARC_X_R(c, 22));
  /* ec4ac: add x0, x0, x21, lsl #3 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + ((uint64_t)(ARC_X_R(c, 21)) << 3)));
  /* ec4b0: csel x8, x24, x22, hi */
  ARC_X_W(c, 8, (ARC_COND(c, 8) ? (ARC_X_R(c, 24)) : ARC_X_R(c, 22)));
  /* ec4b4: str x8, [x19, #0x78] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(120)), ARC_X_R(c, 8));
L_ec4b8:;
  /* ec4b8: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* ec4bc: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* ec4c0: ldp x24, x23, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* ec4c4: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ec4c8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* ec4cc: ret  */
  return;
L_ec4d0:;
  /* ec4d0: ldp w8, w9, [x19, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(32));
    ARC_W_W(c, 8, arc_ld32(_pa));
    ARC_W_W(c, 9, arc_ld32(_pa + 4));
  }
  /* ec4d4: orr w8, w8, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | UINT64_C(1)));
  /* ec4d8: tst w9, w8 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & ARC_W_R(c, 8)));
  /* ec4dc: str w8, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 8));
  /* ec4e0: b.ne #0xec4f4 */
  if (ARC_COND(c, 1)) goto L_ec4f4;
  /* ec4e4: nop  */
  /* nop: no architectural effect here */
  /* ec4e8: adr x0, #0x15d278 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1430136)));
  /* ec4ec: str xzr, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 31));
  /* ec4f0: b #0xec4b8 */
  goto L_ec4b8;
L_ec4f4:;
  /* ec4f4: nop  */
  /* nop: no architectural effect here */
  /* ec4f8: adr x0, #0x50210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(328208)));
  /* ec4fc: bl #0xec720 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(967936));
  fn1_ec720(c);
}

void fn1_edf14(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038902548));
  /* edf14: bti c */
  /* bti: no architectural effect here */
  /* edf18: mov x16, x1 */
  ARC_X_W(c, 16, ARC_X_R(c, 1));
  /* edf1c: br x16 */
  arc_dispatch(c, ARC_X_R(c, 16)); return;
}

void fn1_f33c4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038924228));
  /* f33c4: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* f33c8: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* f33cc: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* f33d0: str x21, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 21));
  /* f33d4: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* f33d8: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* f33dc: mov x20, x2 */
  ARC_X_W(c, 20, ARC_X_R(c, 2));
  /* f33e0: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* f33e4: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f33e8: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* f33ec: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* f33f0: bl #0x143610 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(996340));
  fn1_143610(c);
  /* f33f4: cbz x20, #0xf344c */
  if ((ARC_X_R(c, 20)) == 0) goto L_f344c;
  /* f33f8: ldrb w8, [sp] */
  ARC_W_W(c, 8, arc_ld8((c)->sp));
  /* f33fc: tbz w8, #0, #0xf344c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_f344c;
  /* f3400: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f3404: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f3408: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f340c: ldr x0, [x8, #0x28] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* f3410: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* f3414: ldr x8, [x8, #0x60] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(96))));
  /* f3418: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* f341c: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* f3420: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(996388));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* f3424: cmp x0, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 20));
  /* f3428: b.eq #0xf344c */
  if (ARC_COND(c, 0)) goto L_f344c;
  /* f342c: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f3430: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f3434: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f3438: ldp w9, w10, [x8, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 8) + INT64_C(32));
    ARC_W_W(c, 9, arc_ld32(_pa));
    ARC_W_W(c, 10, arc_ld32(_pa + 4));
  }
  /* f343c: orr w9, w9, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | UINT64_C(1)));
  /* f3440: tst w10, w9 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 10) & ARC_W_R(c, 9)));
  /* f3444: str w9, [x8, #0x20] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(32)), ARC_W_R(c, 9));
  /* f3448: b.ne #0xf3470 */
  if (ARC_COND(c, 1)) goto L_f3470;
L_f344c:;
  /* f344c: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* f3450: bl #0x143628 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(996436));
  fn1_143628(c);
L_f3454:;
  /* f3454: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f3458: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* f345c: ldr x21, [sp, #0x20] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(32))));
  /* f3460: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* f3464: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* f3468: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* f346c: ret  */
  return;
L_f3470:;
  /* f3470: nop  */
  /* nop: no architectural effect here */
  /* f3474: adr x0, #0x50210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(328208)));
  /* f3478: bl #0xec720 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(996476));
  fn1_ec720(c);
  /* f347c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* f3480: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* f3484: bl #0x143628 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(996488));
  fn1_143628(c);
  /* f3488: b #0xf3490 */
  goto L_f3490;
  /* f348c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
L_f3490:;
  /* f3490: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* f3494: bl #0x142548 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(996504));
  fn1_142548(c);
  /* f3498: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f349c: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f34a0: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f34a4: ldr w9, [x8, #0x20] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 8) + INT64_C(32))));
  /* f34a8: ldrb w10, [x8, #0x24] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 8) + INT64_C(36))));
  /* f34ac: orr w9, w9, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | UINT64_C(1)));
  /* f34b0: str w9, [x8, #0x20] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(32)), ARC_W_R(c, 9));
  /* f34b4: tbnz w10, #0, #0xf34c0 */
  if (((ARC_W_R(c, 10)) >> 0 & 1) != 0) goto L_f34c0;
  /* f34b8: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(996540));
  fn1_142980(c);
  /* f34bc: b #0xf3454 */
  goto L_f3454;
L_f34c0:;
  /* f34c0: bl #0x1429b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(996548));
  fn1_1429b0(c);
  /* f34c4: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f34c8: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(996556));
  fn1_142980(c);
  /* f34cc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f34d0: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(996564));
  fn1_9cc20(c);
  /* f34d4: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(996568));
  fn1_a1454(c);
}

void fn1_f494c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038929740));
  /* f494c: bti c */
  /* bti: no architectural effect here */
  /* f4950: mov x16, x1 */
  ARC_X_W(c, 16, ARC_X_R(c, 1));
  /* f4954: br x16 */
  arc_dispatch(c, ARC_X_R(c, 16)); return;
}

void fn1_f9e40(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038951488));
  /* f9e40: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* f9e44: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* f9e48: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* f9e4c: str x21, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 21));
  /* f9e50: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* f9e54: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* f9e58: mov x20, x2 */
  ARC_X_W(c, 20, ARC_X_R(c, 2));
  /* f9e5c: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* f9e60: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f9e64: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* f9e68: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* f9e6c: bl #0x143688 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1023600));
  fn1_143688(c);
  /* f9e70: cbz x20, #0xf9ec8 */
  if ((ARC_X_R(c, 20)) == 0) goto L_f9ec8;
  /* f9e74: ldrb w8, [sp] */
  ARC_W_W(c, 8, arc_ld8((c)->sp));
  /* f9e78: tbz w8, #0, #0xf9ec8 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_f9ec8;
  /* f9e7c: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f9e80: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f9e84: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f9e88: ldr x0, [x8, #0x28] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* f9e8c: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* f9e90: ldr x8, [x8, #0x60] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(96))));
  /* f9e94: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* f9e98: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* f9e9c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1023648));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* f9ea0: cmp x0, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 20));
  /* f9ea4: b.eq #0xf9ec8 */
  if (ARC_COND(c, 0)) goto L_f9ec8;
  /* f9ea8: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f9eac: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f9eb0: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f9eb4: ldp w9, w10, [x8, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 8) + INT64_C(32));
    ARC_W_W(c, 9, arc_ld32(_pa));
    ARC_W_W(c, 10, arc_ld32(_pa + 4));
  }
  /* f9eb8: orr w9, w9, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | UINT64_C(1)));
  /* f9ebc: tst w10, w9 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 10) & ARC_W_R(c, 9)));
  /* f9ec0: str w9, [x8, #0x20] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(32)), ARC_W_R(c, 9));
  /* f9ec4: b.ne #0xf9eec */
  if (ARC_COND(c, 1)) goto L_f9eec;
L_f9ec8:;
  /* f9ec8: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* f9ecc: bl #0x1436a0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1023696));
  fn1_1436a0(c);
L_f9ed0:;
  /* f9ed0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f9ed4: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* f9ed8: ldr x21, [sp, #0x20] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(32))));
  /* f9edc: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* f9ee0: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* f9ee4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* f9ee8: ret  */
  return;
L_f9eec:;
  /* f9eec: nop  */
  /* nop: no architectural effect here */
  /* f9ef0: adr x0, #0x50210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(328208)));
  /* f9ef4: bl #0xec720 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1023736));
  fn1_ec720(c);
  /* f9ef8: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* f9efc: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* f9f00: bl #0x1436a0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1023748));
  fn1_1436a0(c);
  /* f9f04: b #0xf9f0c */
  goto L_f9f0c;
  /* f9f08: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
L_f9f0c:;
  /* f9f0c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* f9f10: bl #0x142548 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1023764));
  fn1_142548(c);
  /* f9f14: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f9f18: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f9f1c: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f9f20: ldr w9, [x8, #0x20] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 8) + INT64_C(32))));
  /* f9f24: ldrb w10, [x8, #0x24] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 8) + INT64_C(36))));
  /* f9f28: orr w9, w9, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | UINT64_C(1)));
  /* f9f2c: str w9, [x8, #0x20] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(32)), ARC_W_R(c, 9));
  /* f9f30: tbnz w10, #0, #0xf9f3c */
  if (((ARC_W_R(c, 10)) >> 0 & 1) != 0) goto L_f9f3c;
  /* f9f34: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1023800));
  fn1_142980(c);
  /* f9f38: b #0xf9ed0 */
  goto L_f9ed0;
L_f9f3c:;
  /* f9f3c: bl #0x1429b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1023808));
  fn1_1429b0(c);
  /* f9f40: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f9f44: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1023816));
  fn1_142980(c);
  /* f9f48: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f9f4c: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1023824));
  fn1_9cc20(c);
  /* f9f50: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1023828));
  fn1_a1454(c);
}

void fn1_fe024(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038968356));
  /* fe024: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* fe028: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* fe02c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* fe030: adrp x0, #0x151000 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1380352)));
  /* fe034: ldr x0, [x0, #0xb80] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(2944))));
  /* fe038: bl #0x143490 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1040444));
  fn1_143490(c);
  /* fe03c: adrp x0, #0x151000 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1380352)));
  /* fe040: ldr x0, [x0, #0xb90] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(2960))));
  /* fe044: bl #0x143490 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1040456));
  fn1_143490(c);
  /* fe048: adrp x0, #0x151000 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1380352)));
  /* fe04c: ldr x0, [x0, #0xba0] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(2976))));
  /* fe050: bl #0x143508 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1040468));
  fn1_143508(c);
  /* fe054: adrp x0, #0x151000 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1380352)));
  /* fe058: ldr x0, [x0, #0xbb0] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(2992))));
  /* fe05c: bl #0x143508 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1040480));
  fn1_143508(c);
  /* fe060: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* fe064: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* fe068: ret  */
  return;
  /* fe06c: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1040496));
  fn1_a1454(c);
}

void fn1_108d2c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039012652));
  /* 108d2c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 108d30: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 108d34: stp x24, x23, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 108d38: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 108d3c: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 108d40: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 108d44: ldr x8, [x3] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 3)));
  /* 108d48: ldr x19, [x29, #0x48] */
  ARC_X_W(c, 19, arc_ld64((ARC_X_R(c, 29) + INT64_C(72))));
  /* 108d4c: cmp x8, x2 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 2));
  /* 108d50: b.eq #0x108da0 */
  if (ARC_COND(c, 0)) goto L_108da0;
L_108d54:;
  /* 108d54: ldrb w8, [x6] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 6)));
  /* 108d58: ldr x9, [x6, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 6) + INT64_C(8))));
  /* 108d5c: lsr x10, x8, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* 108d60: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 108d64: csel x8, x10, x9, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* 108d68: cmp w0, w5 */
  (void)arc_sub32(c, ARC_W_R(c, 0), ARC_W_R(c, 5));
  /* 108d6c: b.ne #0x108db4 */
  if (ARC_COND(c, 1)) goto L_108db4;
  /* 108d70: cbz x8, #0x108db4 */
  if ((ARC_X_R(c, 8)) == 0) goto L_108db4;
  /* 108d74: ldr x8, [x29, #0x40] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(64))));
  /* 108d78: ldr x9, [x8] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 8)));
  /* 108d7c: sub x10, x9, x7 */
  ARC_X_W(c, 10, (ARC_X_R(c, 9) - ARC_X_R(c, 7)));
  /* 108d80: cmp x10, #0x9f */
  (void)arc_sub64(c, ARC_X_R(c, 10), UINT64_C(159));
  /* 108d84: b.gt #0x108e4c */
  if (ARC_COND(c, 12)) goto L_108e4c;
  /* 108d88: ldr w10, [x4] */
  ARC_W_W(c, 10, arc_ld32(ARC_X_R(c, 4)));
  /* 108d8c: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 108d90: str w10, [x9], #4 */
  { const uint64_t _a = ARC_X_R(c, 9);
    ARC_X_W(c, 9, ARC_X_R(c, 9) + INT64_C(4));
    arc_st32(_a, ARC_W_R(c, 10));
  }
  /* 108d94: str x9, [x8] */
  arc_st64(ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 108d98: str wzr, [x4] */
  arc_st32(ARC_X_R(c, 4), ARC_W_R(c, 31));
  /* 108d9c: b #0x108e88 */
  goto L_108e88;
L_108da0:;
  /* 108da0: ldr w9, [x19, #0x60] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 19) + INT64_C(96))));
  /* 108da4: cmp w0, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 0), ARC_W_R(c, 9));
  /* 108da8: b.ne #0x108df8 */
  if (ARC_COND(c, 1)) goto L_108df8;
  /* 108dac: mov w9, #0x2b */
  ARC_W_W(c, 9, UINT64_C(43));
  /* 108db0: b #0x108e08 */
  goto L_108e08;
L_108db4:;
  /* 108db4: mov w23, w1 */
  ARC_W_W(c, 23, ARC_W_R(c, 1));
  /* 108db8: mov x20, x2 */
  ARC_X_W(c, 20, ARC_X_R(c, 2));
  /* 108dbc: mov w1, w0 */
  ARC_W_W(c, 1, ARC_W_R(c, 0));
  /* 108dc0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 108dc4: mov w2, #0x1a */
  ARC_W_W(c, 2, UINT64_C(26));
  /* 108dc8: mov x21, x3 */
  ARC_X_W(c, 21, ARC_X_R(c, 3));
  /* 108dcc: mov x22, x4 */
  ARC_X_W(c, 22, ARC_X_R(c, 4));
  /* 108dd0: add x24, x19, #0x68 */
  ARC_X_W(c, 24, (ARC_X_R(c, 19) + UINT64_C(104)));
  /* 108dd4: bl #0x142e48 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1084888));
  fn1_142e48(c);
  /* 108dd8: cmp x0, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 0), UINT64_C(0));
  /* 108ddc: csel x8, x24, x0, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 24)) : ARC_X_R(c, 0)));
  /* 108de0: sub x8, x8, x19 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) - ARC_X_R(c, 19)));
  /* 108de4: asr x8, x8, #2 */
  ARC_X_W(c, 8, ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(2)) & 63))));
  /* 108de8: cmp x8, #0x17 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(23));
  /* 108dec: b.le #0x108e20 */
  if (ARC_COND(c, 13)) goto L_108e20;
L_108df0:;
  /* 108df0: mov w0, #-1 */
  ARC_W_W(c, 0, UINT64_C(18446744073709551615));
  /* 108df4: b #0x108e88 */
  goto L_108e88;
L_108df8:;
  /* 108df8: ldr w9, [x19, #0x64] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 19) + INT64_C(100))));
  /* 108dfc: cmp w0, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 0), ARC_W_R(c, 9));
  /* 108e00: b.ne #0x108d54 */
  if (ARC_COND(c, 1)) goto L_108d54;
  /* 108e04: mov w9, #0x2d */
  ARC_W_W(c, 9, UINT64_C(45));
L_108e08:;
  /* 108e08: add x10, x8, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* 108e0c: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 108e10: str x10, [x3] */
  arc_st64(ARC_X_R(c, 3), ARC_X_R(c, 10));
  /* 108e14: strb w9, [x8] */
  arc_st8(ARC_X_R(c, 8), ARC_W_R(c, 9));
  /* 108e18: str wzr, [x4] */
  arc_st32(ARC_X_R(c, 4), ARC_W_R(c, 31));
  /* 108e1c: b #0x108e88 */
  goto L_108e88;
L_108e20:;
  /* 108e20: cmp w23, #8 */
  (void)arc_sub32(c, ARC_W_R(c, 23), UINT64_C(8));
  /* 108e24: mov x9, x22 */
  ARC_X_W(c, 9, ARC_X_R(c, 22));
  /* 108e28: mov x10, x21 */
  ARC_X_W(c, 10, ARC_X_R(c, 21));
  /* 108e2c: b.eq #0x108e40 */
  if (ARC_COND(c, 0)) goto L_108e40;
  /* 108e30: cmp w23, #0x10 */
  (void)arc_sub32(c, ARC_W_R(c, 23), UINT64_C(16));
  /* 108e34: b.eq #0x108e54 */
  if (ARC_COND(c, 0)) goto L_108e54;
  /* 108e38: cmp w23, #0xa */
  (void)arc_sub32(c, ARC_W_R(c, 23), UINT64_C(10));
  /* 108e3c: b.ne #0x108e5c */
  if (ARC_COND(c, 1)) goto L_108e5c;
L_108e40:;
  /* 108e40: cmp x8, w23, uxtw */
  (void)arc_sub64(c, ARC_X_R(c, 8), ((uint64_t)(uint32_t)(ARC_W_R(c, 23))));
  /* 108e44: b.ge #0x108df0 */
  if (ARC_COND(c, 10)) goto L_108df0;
  /* 108e48: b #0x108e5c */
  goto L_108e5c;
L_108e4c:;
  /* 108e4c: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 108e50: b #0x108e88 */
  goto L_108e88;
L_108e54:;
  /* 108e54: cmp x8, #0x16 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(22));
  /* 108e58: b.ge #0x108ea0 */
  if (ARC_COND(c, 10)) goto L_108ea0;
L_108e5c:;
  /* 108e5c: adrp x11, #0x151000 */
  ARC_X_W(c, 11, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 108e60: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 108e64: ldr x11, [x11, #0xbe0] */
  ARC_X_W(c, 11, arc_ld64((ARC_X_R(c, 11) + INT64_C(3040))));
  /* 108e68: ldr x12, [x10] */
  ARC_X_W(c, 12, arc_ld64(ARC_X_R(c, 10)));
  /* 108e6c: ldrb w8, [x11, x8] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 11) + ARC_X_R(c, 8))));
  /* 108e70: add x11, x12, #1 */
  ARC_X_W(c, 11, (ARC_X_R(c, 12) + UINT64_C(1)));
  /* 108e74: str x11, [x10] */
  arc_st64(ARC_X_R(c, 10), ARC_X_R(c, 11));
  /* 108e78: strb w8, [x12] */
  arc_st8(ARC_X_R(c, 12), ARC_W_R(c, 8));
  /* 108e7c: ldr w8, [x9] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 9)));
  /* 108e80: add w8, w8, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) + UINT64_C(1)));
  /* 108e84: str w8, [x9] */
  arc_st32(ARC_X_R(c, 9), ARC_W_R(c, 8));
L_108e88:;
  /* 108e88: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 108e8c: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 108e90: ldp x24, x23, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 108e94: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 108e98: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 108e9c: ret  */
  return;
L_108ea0:;
  /* 108ea0: ldr x11, [x10] */
  ARC_X_W(c, 11, arc_ld64(ARC_X_R(c, 10)));
  /* 108ea4: mov w0, #-1 */
  ARC_W_W(c, 0, UINT64_C(18446744073709551615));
  /* 108ea8: subs x12, x11, x20 */
  ARC_X_W(c, 12, arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 20)));
  /* 108eac: b.eq #0x108e88 */
  if (ARC_COND(c, 0)) goto L_108e88;
  /* 108eb0: cmp x12, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 12), UINT64_C(2));
  /* 108eb4: b.gt #0x108e88 */
  if (ARC_COND(c, 12)) goto L_108e88;
  /* 108eb8: ldurb w12, [x11, #-1] */
  ARC_W_W(c, 12, arc_ld8((ARC_X_R(c, 11) + INT64_C(-1))));
  /* 108ebc: cmp w12, #0x30 */
  (void)arc_sub32(c, ARC_W_R(c, 12), UINT64_C(48));
  /* 108ec0: b.ne #0x108e88 */
  if (ARC_COND(c, 1)) goto L_108e88;
  /* 108ec4: adrp x12, #0x151000 */
  ARC_X_W(c, 12, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 108ec8: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 108ecc: ldr x12, [x12, #0xbe0] */
  ARC_X_W(c, 12, arc_ld64((ARC_X_R(c, 12) + INT64_C(3040))));
  /* 108ed0: str wzr, [x9] */
  arc_st32(ARC_X_R(c, 9), ARC_W_R(c, 31));
  /* 108ed4: add x9, x11, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 11) + UINT64_C(1)));
  /* 108ed8: ldrb w8, [x12, x8] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 12) + ARC_X_R(c, 8))));
  /* 108edc: str x9, [x10] */
  arc_st64(ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* 108ee0: strb w8, [x11] */
  arc_st8(ARC_X_R(c, 11), ARC_W_R(c, 8));
  /* 108ee4: b #0x108e88 */
  goto L_108e88;
}

void fn1_111f7c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039050108));
  /* 111f7c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 111f80: sub sp, sp, #0xa0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(160)));
  /* 111f84: stp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 111f88: stp x28, x27, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* 111f8c: stp x26, x25, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* 111f90: stp x24, x23, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 111f94: stp x22, x21, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 111f98: stp x20, x19, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 111f9c: add x29, sp, #0x40 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(64)));
  /* 111fa0: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* 111fa4: stur x1, [x29, #-8] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-8)), ARC_X_R(c, 1));
  /* 111fa8: sub x0, x29, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* 111fac: add x1, x3, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 3) + UINT64_C(48)));
  /* 111fb0: mov w25, w6 */
  ARC_W_W(c, 25, ARC_W_R(c, 6));
  /* 111fb4: mov x19, x5 */
  ARC_X_W(c, 19, ARC_X_R(c, 5));
  /* 111fb8: mov x20, x4 */
  ARC_X_W(c, 20, ARC_X_R(c, 4));
  /* 111fbc: mov x22, x3 */
  ARC_X_W(c, 22, ARC_X_R(c, 3));
  /* 111fc0: mov x21, x2 */
  ARC_X_W(c, 21, ARC_X_R(c, 2));
  /* 111fc4: str wzr, [x4] */
  arc_st32(ARC_X_R(c, 4), ARC_W_R(c, 31));
  /* 111fc8: bl #0x143460 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1122252));
  fn1_143460(c);
  /* 111fcc: adrp x28, #0x151000 */
  ARC_X_W(c, 28, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 111fd0: ldr x28, [x28, #0xb58] */
  ARC_X_W(c, 28, arc_ld64((ARC_X_R(c, 28) + INT64_C(2904))));
  /* 111fd4: ldur x27, [x29, #-0x10] */
  ARC_X_W(c, 27, arc_ld64((ARC_X_R(c, 29) + INT64_C(-16))));
  /* 111fd8: ldar x8, [x28] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 28)));
  /* 111fdc: cmn x8, #1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0);
  /* 111fe0: b.eq #0x11209c */
  if (ARC_COND(c, 0)) goto L_11209c;
  /* 111fe4: nop  */
  /* nop: no architectural effect here */
  /* 111fe8: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 111fec: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1122288));
  fn1_142518(c);
  /* 111ff0: ldr x8, [x28] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 28)));
  /* 111ff4: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 111ff8: b.ne #0x112024 */
  if (ARC_COND(c, 1)) goto L_112024;
  /* 111ffc: nop  */
  /* nop: no architectural effect here */
  /* 112000: adr x24, #0x15791c */
  ARC_X_W(c, 24, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 112004: nop  */
  /* nop: no architectural effect here */
  /* 112008: adr x26, #0x1578f4 */
  ARC_X_W(c, 26, (arc_image_bases[1] + UINT64_C(1407220)));
L_11200c:;
  /* 11200c: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 112010: mov x1, x26 */
  ARC_X_W(c, 1, ARC_X_R(c, 26));
  /* 112014: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1122328));
  fn1_142530(c);
  /* 112018: ldr x8, [x28] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 28)));
  /* 11201c: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 112020: b.eq #0x11200c */
  if (ARC_COND(c, 0)) goto L_11200c;
L_112024:;
  /* 112024: ldr x8, [x28] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 28)));
  /* 112028: cbz x8, #0x11203c */
  if ((ARC_X_R(c, 8)) == 0) goto L_11203c;
  /* 11202c: nop  */
  /* nop: no architectural effect here */
  /* 112030: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 112034: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1122360));
  fn1_142560(c);
  /* 112038: b #0x11209c */
  goto L_11209c;
L_11203c:;
  /* 11203c: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 112040: str x28, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 28));
  /* 112044: strb wzr, [sp, #8] */
  arc_st8(((c)->sp + INT64_C(8)), ARC_W_R(c, 31));
  /* 112048: str x8, [x28] */
  arc_st64(ARC_X_R(c, 28), ARC_X_R(c, 8));
  /* 11204c: nop  */
  /* nop: no architectural effect here */
  /* 112050: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 112054: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1122392));
  fn1_142560(c);
  /* 112058: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 11205c: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 112060: ldr x1, [x1, #0xc58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3160))));
  /* 112064: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1122408));
  fn1_a2030(c);
  /* 112068: add w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + UINT64_C(1)));
  /* 11206c: str w8, [x28, #8] */
  arc_st32((ARC_X_R(c, 28) + INT64_C(8)), ARC_W_R(c, 8));
  /* 112070: nop  */
  /* nop: no architectural effect here */
  /* 112074: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 112078: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1122428));
  fn1_142518(c);
  /* 11207c: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 112080: stlr x8, [x28] */
  arc_st64(ARC_X_R(c, 28), ARC_X_R(c, 8));
  /* 112084: nop  */
  /* nop: no architectural effect here */
  /* 112088: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11208c: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1122448));
  fn1_142560(c);
  /* 112090: nop  */
  /* nop: no architectural effect here */
  /* 112094: adr x0, #0x15791c */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 112098: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1122460));
  fn1_142578(c);
L_11209c:;
  /* 11209c: ldp x8, x10, [x27, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 27) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* 1120a0: ldrsw x9, [x28, #8] */
  ARC_X_W(c, 9, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 28) + INT64_C(8)))));
  /* 1120a4: sub x9, x9, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - UINT64_C(1)));
  /* 1120a8: sub x10, x10, x8 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) - ARC_X_R(c, 8)));
  /* 1120ac: cmp x9, x10, asr #3 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ((uint64_t)((int64_t)(ARC_X_R(c, 10)) >> 3)));
  /* 1120b0: b.hs #0x112664 */
  if (ARC_COND(c, 2)) goto L_112664;
  /* 1120b4: ldr x24, [x8, x9, lsl #3] */
  ARC_X_W(c, 24, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3))));
  /* 1120b8: cbz x24, #0x112664 */
  if ((ARC_X_R(c, 24)) == 0) goto L_112664;
  /* 1120bc: sub x0, x29, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* 1120c0: bl #0x143478 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1122500));
  fn1_143478(c);
  /* 1120c4: and w8, w25, #0xff */
  ARC_W_W(c, 8, (ARC_W_R(c, 25) & UINT64_C(255)));
  /* 1120c8: sub w8, w8, #0x25 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) - UINT64_C(37)));
  /* 1120cc: cmp w8, #0x54 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(84));
  /* 1120d0: b.hi #0x112594 */
  if (ARC_COND(c, 8)) goto L_112594;
  /* 1120d4: nop  */
  /* nop: no architectural effect here */
  /* 1120d8: adr x9, #0x75a0c */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(481804)));
  /* 1120dc: adr x10, #0x1120ec */
  ARC_X_W(c, 10, (arc_image_bases[1] + UINT64_C(1122540)));
  /* 1120e0: ldrh w11, [x9, x8, lsl #1] */
  ARC_W_W(c, 11, arc_ld16((ARC_X_R(c, 9) + ((uint64_t)(ARC_X_R(c, 8)) << 1))));
  /* 1120e4: add x10, x10, x11, lsl #2 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + ((uint64_t)(ARC_X_R(c, 11)) << 2)));
  /* 1120e8: br x10 */
  switch (ARC_X_R(c, 10) - arc_image_bases[1]) {
    case UINT64_C(1123344): goto L_112410;
    case UINT64_C(1123732): goto L_112594;
    case UINT64_C(1122716): goto L_11219c;
    case UINT64_C(1122540): goto L_1120ec;
    case UINT64_C(1123108): goto L_112324;
    case UINT64_C(1123428): goto L_112464;
    case UINT64_C(1123196): goto L_11237c;
    case UINT64_C(1123288): goto L_1123d8;
    case UINT64_C(1122996): goto L_1122b4;
    case UINT64_C(1123240): goto L_1123a8;
    case UINT64_C(1123376): goto L_112430;
    case UINT64_C(1123180): goto L_11236c;
    case UINT64_C(1122928): goto L_112270;
    case UINT64_C(1122948): goto L_112284;
    case UINT64_C(1123048): goto L_1122e8;
    case UINT64_C(1122660): goto L_112164;
    case UINT64_C(1123612): goto L_11251c;
    case UINT64_C(1123124): goto L_112334;
    case UINT64_C(1122848): goto L_112220;
    case UINT64_C(1123664): goto L_112550;
    case UINT64_C(1122880): goto L_112240;
    case UINT64_C(1123788): goto L_1125cc;
    case UINT64_C(1123568): goto L_1124f0;
    case UINT64_C(1123496): goto L_1124a8;
    default: break;
  }
  arc_dispatch(c, ARC_X_R(c, 10)); return;
L_1120ec:;
  /* 1120ec: bti j */
  /* bti: no architectural effect here */
  /* 1120f0: ldr x8, [x23, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 23) + INT64_C(16));
    ARC_X_W(c, 23, ARC_X_R(c, 23) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_a));
  }
  /* 1120f4: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 1120f8: ldr x8, [x8, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(8))));
  /* 1120fc: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1122560));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 112100: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 112104: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 112108: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 11210c: add x3, x22, #0x240 */
  ARC_X_W(c, 3, (ARC_X_R(c, 22) + UINT64_C(576)));
  /* 112110: mov x2, x22 */
  ARC_X_W(c, 2, ARC_X_R(c, 22));
  /* 112114: mov x4, x24 */
  ARC_X_W(c, 4, ARC_X_R(c, 24));
  /* 112118: mov x5, x20 */
  ARC_X_W(c, 5, ARC_X_R(c, 20));
  /* 11211c: mov w6, wzr */
  ARC_W_W(c, 6, ARC_W_R(c, 31));
  /* 112120: bl #0x104878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1122596));
  fn1_104878(c);
  /* 112124: sub x8, x0, x22 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) - ARC_X_R(c, 22)));
  /* 112128: cmp x8, #0x23f */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(575));
  /* 11212c: b.gt #0x1125a4 */
  if (ARC_COND(c, 12)) goto L_1125a4;
  /* 112130: asr x8, x8, #3 */
  ARC_X_W(c, 8, ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(3)) & 63))));
  /* 112134: mov x9, #-0x5555555555555556 */
  ARC_X_W(c, 9, UINT64_C(12297829382473034410));
  /* 112138: movk x9, #0xaaab */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(18446744073709486080)) | UINT64_C(43691)));
  /* 11213c: mul x8, x8, x9 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) * (uint64_t)(ARC_X_R(c, 9))));
  /* 112140: mov x9, #-0x5555555555555556 */
  ARC_X_W(c, 9, UINT64_C(12297829382473034410));
  /* 112144: eor x9, x9, #0x8000000000000001 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) ^ UINT64_C(9223372036854775809)));
  /* 112148: smulh x9, x8, x9 */
  ARC_X_W(c, 9, arc_smulh(ARC_X_R(c, 8), ARC_X_R(c, 9)));
  /* 11214c: lsr x10, x9, #0x3f */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(63)) & 63)));
  /* 112150: add w9, w10, w9, lsr #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 10) + ((uint32_t)(ARC_W_R(c, 9)) >> 1)));
  /* 112154: mov w10, #0xc */
  ARC_W_W(c, 10, UINT64_C(12));
  /* 112158: msub w8, w9, w10, w8 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 8)) - ((uint32_t)(ARC_W_R(c, 9)) * (uint32_t)(ARC_W_R(c, 10)))));
  /* 11215c: str w8, [x19, #0x10] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(16)), ARC_W_R(c, 8));
  /* 112160: b #0x1125a4 */
  goto L_1125a4;
L_112164:;
  /* 112164: bti j */
  /* bti: no architectural effect here */
  /* 112168: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 11216c: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 112170: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* 112174: mov x3, x24 */
  ARC_X_W(c, 3, ARC_X_R(c, 24));
  /* 112178: mov w4, #2 */
  ARC_W_W(c, 4, UINT64_C(2));
  /* 11217c: bl #0x112ec0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1122688));
  fn1_112ec0(c);
  /* 112180: ldr w8, [x20] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 20)));
  /* 112184: sub w9, w0, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 0) - UINT64_C(1)));
  /* 112188: cmp w9, #0x1e */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(30));
  /* 11218c: b.hi #0x11259c */
  if (ARC_COND(c, 8)) goto L_11259c;
  /* 112190: tbnz w8, #2, #0x11259c */
  if (((ARC_W_R(c, 8)) >> 2 & 1) != 0) goto L_11259c;
  /* 112194: str w0, [x19, #0xc] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(12)), ARC_W_R(c, 0));
  /* 112198: b #0x1125a4 */
  goto L_1125a4;
L_11219c:;
  /* 11219c: bti j */
  /* bti: no architectural effect here */
  /* 1121a0: ldr x8, [x23, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 23) + INT64_C(16));
    ARC_X_W(c, 23, ARC_X_R(c, 23) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_a));
  }
  /* 1121a4: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 1121a8: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 1121ac: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1122736));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1121b0: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 1121b4: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 1121b8: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 1121bc: add x3, x22, #0x150 */
  ARC_X_W(c, 3, (ARC_X_R(c, 22) + UINT64_C(336)));
  /* 1121c0: mov x2, x22 */
  ARC_X_W(c, 2, ARC_X_R(c, 22));
  /* 1121c4: mov x4, x24 */
  ARC_X_W(c, 4, ARC_X_R(c, 24));
  /* 1121c8: mov x5, x20 */
  ARC_X_W(c, 5, ARC_X_R(c, 20));
  /* 1121cc: mov w6, wzr */
  ARC_W_W(c, 6, ARC_W_R(c, 31));
  /* 1121d0: bl #0x104878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1122772));
  fn1_104878(c);
  /* 1121d4: sub x8, x0, x22 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) - ARC_X_R(c, 22)));
  /* 1121d8: cmp x8, #0x14f */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(335));
  /* 1121dc: b.gt #0x1125a4 */
  if (ARC_COND(c, 12)) goto L_1125a4;
  /* 1121e0: asr x8, x8, #3 */
  ARC_X_W(c, 8, ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(3)) & 63))));
  /* 1121e4: mov x9, #-0x5555555555555556 */
  ARC_X_W(c, 9, UINT64_C(12297829382473034410));
  /* 1121e8: movk x9, #0xaaab */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(18446744073709486080)) | UINT64_C(43691)));
  /* 1121ec: mul x8, x8, x9 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) * (uint64_t)(ARC_X_R(c, 9))));
  /* 1121f0: mov x9, #0x4925 */
  ARC_X_W(c, 9, UINT64_C(18725));
  /* 1121f4: movk x9, #0x2492, lsl #16 */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(18446744069414649855)) | UINT64_C(613548032)));
  /* 1121f8: movk x9, #0x9249, lsl #32 */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(18446462603027808255)) | UINT64_C(160842230267904)));
  /* 1121fc: movk x9, #0x4924, lsl #48 */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(281474976710655)) | UINT64_C(5270337463930322944)));
  /* 112200: smulh x9, x8, x9 */
  ARC_X_W(c, 9, arc_smulh(ARC_X_R(c, 8), ARC_X_R(c, 9)));
  /* 112204: lsr x10, x9, #0x3f */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(63)) & 63)));
  /* 112208: lsr x9, x9, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(1)) & 63)));
  /* 11220c: add w9, w9, w10 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) + ARC_W_R(c, 10)));
  /* 112210: sub w9, w9, w9, lsl #3 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) - ((uint32_t)(ARC_W_R(c, 9)) << 3)));
  /* 112214: add w8, w8, w9 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) + ARC_W_R(c, 9)));
  /* 112218: str w8, [x19, #0x18] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(24)), ARC_W_R(c, 8));
  /* 11221c: b #0x1125a4 */
  goto L_1125a4;
L_112220:;
  /* 112220: bti j */
  /* bti: no architectural effect here */
  /* 112224: sub x1, x29, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 112228: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 11222c: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* 112230: mov x3, x20 */
  ARC_X_W(c, 3, ARC_X_R(c, 20));
  /* 112234: mov x4, x24 */
  ARC_X_W(c, 4, ARC_X_R(c, 24));
  /* 112238: bl #0x1439b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1122876));
  fn1_1439b8(c);
  /* 11223c: b #0x1125a4 */
  goto L_1125a4;
L_112240:;
  /* 112240: bti j */
  /* bti: no architectural effect here */
  /* 112244: nop  */
  /* nop: no architectural effect here */
  /* 112248: adr x8, #0x75b44 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(482116)));
  /* 11224c: ldur x1, [x29, #-8] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 29) + INT64_C(-8))));
  /* 112250: ldp q0, q1, [x8] */
  { const uint64_t _pa = ARC_X_R(c, 8);
    arc_q_w(c, 0, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 1, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* 112254: ldur q2, [x8, #0x1c] */
  arc_q_w(c, 2, arc_ld64((ARC_X_R(c, 8) + INT64_C(28))), arc_ld64((ARC_X_R(c, 8) + INT64_C(28)) + 8));
  /* 112258: mov x8, sp */
  ARC_X_W(c, 8, (c)->sp);
  /* 11225c: mov x6, sp */
  ARC_X_W(c, 6, (c)->sp);
  /* 112260: add x7, x8, #0x2c */
  ARC_X_W(c, 7, (ARC_X_R(c, 8) + UINT64_C(44)));
  /* 112264: stp q0, q1, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[1].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[1].u64[1]);
  }
  /* 112268: stur q2, [sp, #0x1c] */
  arc_st64(((c)->sp + INT64_C(28)), (c)->q[2].u64[0]);
  arc_st64(((c)->sp + INT64_C(28)) + 8, (c)->q[2].u64[1]);
  /* 11226c: b #0x112488 */
  goto L_112488;
L_112270:;
  /* 112270: bti j */
  /* bti: no architectural effect here */
  /* 112274: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 112278: ldr x8, [x0, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_a));
  }
  /* 11227c: ldr x8, [x8, #0x30] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(48))));
  /* 112280: b #0x1122f8 */
  goto L_1122f8;
L_112284:;
  /* 112284: bti j */
  /* bti: no architectural effect here */
  /* 112288: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 11228c: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 112290: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* 112294: mov x3, x24 */
  ARC_X_W(c, 3, ARC_X_R(c, 24));
  /* 112298: mov w4, #4 */
  ARC_W_W(c, 4, UINT64_C(4));
  /* 11229c: bl #0x112ec0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1122976));
  fn1_112ec0(c);
  /* 1122a0: ldrb w8, [x20] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 20)));
  /* 1122a4: tbnz w8, #2, #0x1125a4 */
  if (((ARC_W_R(c, 8)) >> 2 & 1) != 0) goto L_1125a4;
  /* 1122a8: sub w8, w0, #0x76c */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) - UINT64_C(1900)));
  /* 1122ac: str w8, [x19, #0x14] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(20)), ARC_W_R(c, 8));
  /* 1122b0: b #0x1125a4 */
  goto L_1125a4;
L_1122b4:;
  /* 1122b4: bti j */
  /* bti: no architectural effect here */
  /* 1122b8: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 1122bc: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 1122c0: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* 1122c4: mov x3, x24 */
  ARC_X_W(c, 3, ARC_X_R(c, 24));
  /* 1122c8: mov w4, #2 */
  ARC_W_W(c, 4, UINT64_C(2));
  /* 1122cc: bl #0x112ec0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1123024));
  fn1_112ec0(c);
  /* 1122d0: ldr w8, [x20] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 20)));
  /* 1122d4: cmp w0, #0x3b */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(59));
  /* 1122d8: b.gt #0x11259c */
  if (ARC_COND(c, 12)) goto L_11259c;
  /* 1122dc: tbnz w8, #2, #0x11259c */
  if (((ARC_W_R(c, 8)) >> 2 & 1) != 0) goto L_11259c;
  /* 1122e0: str w0, [x19, #4] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(4)), ARC_W_R(c, 0));
  /* 1122e4: b #0x1125a4 */
  goto L_1125a4;
L_1122e8:;
  /* 1122e8: bti j */
  /* bti: no architectural effect here */
  /* 1122ec: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 1122f0: ldr x8, [x0, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_a));
  }
  /* 1122f4: ldr x8, [x8, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(24))));
L_1122f8:;
  /* 1122f8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1123068));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1122fc: ldrb w8, [x0] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 0)));
  /* 112300: ldp x10, x9, [x0, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(8));
    ARC_X_W(c, 10, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 112304: add x12, x0, #4 */
  ARC_X_W(c, 12, (ARC_X_R(c, 0) + UINT64_C(4)));
  /* 112308: ldur x1, [x29, #-8] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 29) + INT64_C(-8))));
  /* 11230c: lsr x11, x8, #1 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* 112310: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 112314: csel x6, x12, x9, eq */
  ARC_X_W(c, 6, (ARC_COND(c, 0) ? (ARC_X_R(c, 12)) : ARC_X_R(c, 9)));
  /* 112318: csel x8, x11, x10, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 11)) : ARC_X_R(c, 10)));
  /* 11231c: add x7, x6, x8, lsl #2 */
  ARC_X_W(c, 7, (ARC_X_R(c, 6) + ((uint64_t)(ARC_X_R(c, 8)) << 2)));
  /* 112320: b #0x112488 */
  goto L_112488;
L_112324:;
  /* 112324: bti j */
  /* bti: no architectural effect here */
  /* 112328: nop  */
  /* nop: no architectural effect here */
  /* 11232c: adr x8, #0x75b24 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(482084)));
  /* 112330: b #0x112470 */
  goto L_112470;
L_112334:;
  /* 112334: bti j */
  /* bti: no architectural effect here */
  /* 112338: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 11233c: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 112340: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* 112344: mov x3, x24 */
  ARC_X_W(c, 3, ARC_X_R(c, 24));
  /* 112348: mov w4, #2 */
  ARC_W_W(c, 4, UINT64_C(2));
  /* 11234c: bl #0x112ec0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1123152));
  fn1_112ec0(c);
  /* 112350: ldr w9, [x20] */
  ARC_W_W(c, 9, arc_ld32(ARC_X_R(c, 20)));
  /* 112354: sub w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) - UINT64_C(1)));
  /* 112358: cmp w8, #0xb */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(11));
  /* 11235c: b.hi #0x112600 */
  if (ARC_COND(c, 8)) goto L_112600;
  /* 112360: tbnz w9, #2, #0x112600 */
  if (((ARC_W_R(c, 9)) >> 2 & 1) != 0) goto L_112600;
  /* 112364: str w8, [x19, #0x10] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(16)), ARC_W_R(c, 8));
  /* 112368: b #0x1125a4 */
  goto L_1125a4;
L_11236c:;
  /* 11236c: bti j */
  /* bti: no architectural effect here */
  /* 112370: adrp x8, #0x75000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(479232)));
  /* 112374: add x8, x8, #0xb04 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2820)));
  /* 112378: b #0x112470 */
  goto L_112470;
L_11237c:;
  /* 11237c: bti j */
  /* bti: no architectural effect here */
  /* 112380: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 112384: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 112388: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* 11238c: mov x3, x24 */
  ARC_X_W(c, 3, ARC_X_R(c, 24));
  /* 112390: mov w4, #2 */
  ARC_W_W(c, 4, UINT64_C(2));
  /* 112394: bl #0x112ec0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1123224));
  fn1_112ec0(c);
  /* 112398: ldr w8, [x20] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 20)));
  /* 11239c: cmp w0, #0x17 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(23));
  /* 1123a0: b.le #0x112404 */
  if (ARC_COND(c, 13)) goto L_112404;
  /* 1123a4: b #0x11259c */
  goto L_11259c;
L_1123a8:;
  /* 1123a8: bti j */
  /* bti: no architectural effect here */
  /* 1123ac: nop  */
  /* nop: no architectural effect here */
  /* 1123b0: adr x9, #0x75b70 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(482160)));
  /* 1123b4: mov w8, #0x4d */
  ARC_W_W(c, 8, UINT64_C(77));
  /* 1123b8: ldr q0, [x9] */
  arc_q_w(c, 0, arc_ld64(ARC_X_R(c, 9)), arc_ld64(ARC_X_R(c, 9) + 8));
  /* 1123bc: str w8, [sp, #0x10] */
  arc_st32(((c)->sp + INT64_C(16)), ARC_W_R(c, 8));
  /* 1123c0: ldur x1, [x29, #-8] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 29) + INT64_C(-8))));
  /* 1123c4: mov x8, sp */
  ARC_X_W(c, 8, (c)->sp);
  /* 1123c8: mov x6, sp */
  ARC_X_W(c, 6, (c)->sp);
  /* 1123cc: str q0, [sp] */
  arc_st64((c)->sp, (c)->q[0].u64[0]);
  arc_st64((c)->sp + 8, (c)->q[0].u64[1]);
  /* 1123d0: add x7, x8, #0x14 */
  ARC_X_W(c, 7, (ARC_X_R(c, 8) + UINT64_C(20)));
  /* 1123d4: b #0x112488 */
  goto L_112488;
L_1123d8:;
  /* 1123d8: bti j */
  /* bti: no architectural effect here */
  /* 1123dc: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 1123e0: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 1123e4: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* 1123e8: mov x3, x24 */
  ARC_X_W(c, 3, ARC_X_R(c, 24));
  /* 1123ec: mov w4, #2 */
  ARC_W_W(c, 4, UINT64_C(2));
  /* 1123f0: bl #0x112ec0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1123316));
  fn1_112ec0(c);
  /* 1123f4: ldr w8, [x20] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 20)));
  /* 1123f8: sub w9, w0, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 0) - UINT64_C(1)));
  /* 1123fc: cmp w9, #0xb */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(11));
  /* 112400: b.hi #0x11259c */
  if (ARC_COND(c, 8)) goto L_11259c;
L_112404:;
  /* 112404: tbnz w8, #2, #0x11259c */
  if (((ARC_W_R(c, 8)) >> 2 & 1) != 0) goto L_11259c;
  /* 112408: str w0, [x19, #8] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(8)), ARC_W_R(c, 0));
  /* 11240c: b #0x1125a4 */
  goto L_1125a4;
L_112410:;
  /* 112410: bti j */
  /* bti: no architectural effect here */
  /* 112414: sub x1, x29, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 112418: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 11241c: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* 112420: mov x3, x20 */
  ARC_X_W(c, 3, ARC_X_R(c, 20));
  /* 112424: mov x4, x24 */
  ARC_X_W(c, 4, ARC_X_R(c, 24));
  /* 112428: bl #0x1439d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1123372));
  fn1_1439d0(c);
  /* 11242c: b #0x1125a4 */
  goto L_1125a4;
L_112430:;
  /* 112430: bti j */
  /* bti: no architectural effect here */
  /* 112434: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 112438: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 11243c: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* 112440: mov x3, x24 */
  ARC_X_W(c, 3, ARC_X_R(c, 24));
  /* 112444: mov w4, #2 */
  ARC_W_W(c, 4, UINT64_C(2));
  /* 112448: bl #0x112ec0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1123404));
  fn1_112ec0(c);
  /* 11244c: ldr w8, [x20] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 20)));
  /* 112450: cmp w0, #0x3c */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(60));
  /* 112454: b.gt #0x11259c */
  if (ARC_COND(c, 12)) goto L_11259c;
  /* 112458: tbnz w8, #2, #0x11259c */
  if (((ARC_W_R(c, 8)) >> 2 & 1) != 0) goto L_11259c;
  /* 11245c: str w0, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 0));
  /* 112460: b #0x1125a4 */
  goto L_1125a4;
L_112464:;
  /* 112464: bti j */
  /* bti: no architectural effect here */
  /* 112468: adrp x8, #0x75000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(479232)));
  /* 11246c: add x8, x8, #0xae4 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2788)));
L_112470:;
  /* 112470: ldp q0, q1, [x8] */
  { const uint64_t _pa = ARC_X_R(c, 8);
    arc_q_w(c, 0, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 1, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* 112474: mov x8, sp */
  ARC_X_W(c, 8, (c)->sp);
  /* 112478: ldur x1, [x29, #-8] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 29) + INT64_C(-8))));
  /* 11247c: mov x6, sp */
  ARC_X_W(c, 6, (c)->sp);
  /* 112480: add x7, x8, #0x20 */
  ARC_X_W(c, 7, (ARC_X_R(c, 8) + UINT64_C(32)));
  /* 112484: stp q0, q1, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[1].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[1].u64[1]);
  }
L_112488:;
  /* 112488: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 11248c: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* 112490: mov x3, x22 */
  ARC_X_W(c, 3, ARC_X_R(c, 22));
  /* 112494: mov x4, x20 */
  ARC_X_W(c, 4, ARC_X_R(c, 20));
  /* 112498: mov x5, x19 */
  ARC_X_W(c, 5, ARC_X_R(c, 19));
  /* 11249c: bl #0x1439a0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1123488));
  fn1_1439a0(c);
  /* 1124a0: stur x0, [x29, #-8] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-8)), ARC_X_R(c, 0));
  /* 1124a4: b #0x1125a4 */
  goto L_1125a4;
L_1124a8:;
  /* 1124a8: bti j */
  /* bti: no architectural effect here */
  /* 1124ac: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 1124b0: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 1124b4: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* 1124b8: mov x3, x24 */
  ARC_X_W(c, 3, ARC_X_R(c, 24));
  /* 1124bc: mov w4, #4 */
  ARC_W_W(c, 4, UINT64_C(4));
  /* 1124c0: bl #0x112ec0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1123524));
  fn1_112ec0(c);
  /* 1124c4: ldrb w8, [x20] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 20)));
  /* 1124c8: tbnz w8, #2, #0x1125a4 */
  if (((ARC_W_R(c, 8)) >> 2 & 1) != 0) goto L_1125a4;
  /* 1124cc: add w8, w0, #0x76c */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + UINT64_C(1900)));
  /* 1124d0: cmp w0, #0x64 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(100));
  /* 1124d4: add w9, w0, #0x7d0 */
  ARC_W_W(c, 9, (ARC_W_R(c, 0) + UINT64_C(2000)));
  /* 1124d8: csel w8, w8, w0, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 0)));
  /* 1124dc: cmp w0, #0x45 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(69));
  /* 1124e0: csel w8, w9, w8, lt */
  ARC_W_W(c, 8, (ARC_COND(c, 11) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 8)));
  /* 1124e4: sub w8, w8, #0x76c */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) - UINT64_C(1900)));
  /* 1124e8: str w8, [x19, #0x14] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(20)), ARC_W_R(c, 8));
  /* 1124ec: b #0x1125a4 */
  goto L_1125a4;
L_1124f0:;
  /* 1124f0: bti j */
  /* bti: no architectural effect here */
  /* 1124f4: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 1124f8: ldur x1, [x29, #-8] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 29) + INT64_C(-8))));
  /* 1124fc: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 112500: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* 112504: mov x3, x22 */
  ARC_X_W(c, 3, ARC_X_R(c, 22));
  /* 112508: mov x4, x20 */
  ARC_X_W(c, 4, ARC_X_R(c, 20));
  /* 11250c: ldr x8, [x8, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* 112510: mov x5, x19 */
  ARC_X_W(c, 5, ARC_X_R(c, 19));
  /* 112514: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1123608));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 112518: b #0x1125a8 */
  goto L_1125a8;
L_11251c:;
  /* 11251c: bti j */
  /* bti: no architectural effect here */
  /* 112520: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 112524: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 112528: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* 11252c: mov x3, x24 */
  ARC_X_W(c, 3, ARC_X_R(c, 24));
  /* 112530: mov w4, #3 */
  ARC_W_W(c, 4, UINT64_C(3));
  /* 112534: bl #0x112ec0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1123640));
  fn1_112ec0(c);
  /* 112538: ldr w8, [x20] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 20)));
  /* 11253c: cmp w0, #0x16d */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(365));
  /* 112540: b.gt #0x11259c */
  if (ARC_COND(c, 12)) goto L_11259c;
  /* 112544: tbnz w8, #2, #0x11259c */
  if (((ARC_W_R(c, 8)) >> 2 & 1) != 0) goto L_11259c;
  /* 112548: str w0, [x19, #0x1c] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(28)), ARC_W_R(c, 0));
  /* 11254c: b #0x1125a4 */
  goto L_1125a4;
L_112550:;
  /* 112550: bti j */
  /* bti: no architectural effect here */
  /* 112554: ldr x8, [x23, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 23) + INT64_C(16));
    ARC_X_W(c, 23, ARC_X_R(c, 23) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_a));
  }
  /* 112558: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 11255c: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 112560: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1123684));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 112564: ldrb w8, [x0] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 0)));
  /* 112568: ldrb w9, [x0, #0x18] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(24))));
  /* 11256c: ldr x10, [x0, #8] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* 112570: lsr x11, x8, #1 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* 112574: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 112578: ldr x8, [x0, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(32))));
  /* 11257c: lsr x12, x9, #1 */
  ARC_X_W(c, 12, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(1)) & 63)));
  /* 112580: csel x10, x11, x10, eq */
  ARC_X_W(c, 10, (ARC_COND(c, 0) ? (ARC_X_R(c, 11)) : ARC_X_R(c, 10)));
  /* 112584: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* 112588: csel x8, x12, x8, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 12)) : ARC_X_R(c, 8)));
  /* 11258c: cmn x10, x8 */
  (void)arc_add64(c, ARC_X_R(c, 10), ARC_X_R(c, 8), 0);
  /* 112590: b.ne #0x112608 */
  if (ARC_COND(c, 1)) goto L_112608;
L_112594:;
  /* 112594: bti j */
  /* bti: no architectural effect here */
  /* 112598: ldr w8, [x20] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 20)));
L_11259c:;
  /* 11259c: orr w8, w8, #4 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | UINT64_C(4)));
L_1125a0:;
  /* 1125a0: str w8, [x20] */
  arc_st32(ARC_X_R(c, 20), ARC_W_R(c, 8));
L_1125a4:;
  /* 1125a4: ldur x0, [x29, #-8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-8))));
L_1125a8:;
  /* 1125a8: ldp x20, x19, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1125ac: ldp x22, x21, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1125b0: ldp x24, x23, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 1125b4: ldp x26, x25, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* 1125b8: ldp x28, x27, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* 1125bc: ldp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1125c0: add sp, sp, #0xa0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(160)));
  /* 1125c4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 1125c8: ret  */
  return;
L_1125cc:;
  /* 1125cc: bti j */
  /* bti: no architectural effect here */
  /* 1125d0: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 1125d4: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 1125d8: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* 1125dc: mov x3, x24 */
  ARC_X_W(c, 3, ARC_X_R(c, 24));
  /* 1125e0: mov w4, #1 */
  ARC_W_W(c, 4, UINT64_C(1));
  /* 1125e4: bl #0x112ec0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1123816));
  fn1_112ec0(c);
  /* 1125e8: ldr w8, [x20] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 20)));
  /* 1125ec: cmp w0, #6 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(6));
  /* 1125f0: b.gt #0x11259c */
  if (ARC_COND(c, 12)) goto L_11259c;
  /* 1125f4: tbnz w8, #2, #0x11259c */
  if (((ARC_W_R(c, 8)) >> 2 & 1) != 0) goto L_11259c;
  /* 1125f8: str w0, [x19, #0x18] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(24)), ARC_W_R(c, 0));
  /* 1125fc: b #0x1125a4 */
  goto L_1125a4;
L_112600:;
  /* 112600: orr w8, w9, #4 */
  ARC_W_W(c, 8, (ARC_W_R(c, 9) | UINT64_C(4)));
  /* 112604: b #0x1125a0 */
  goto L_1125a0;
L_112608:;
  /* 112608: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 11260c: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 112610: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 112614: add x3, x22, #0x30 */
  ARC_X_W(c, 3, (ARC_X_R(c, 22) + UINT64_C(48)));
  /* 112618: mov x2, x22 */
  ARC_X_W(c, 2, ARC_X_R(c, 22));
  /* 11261c: mov x4, x24 */
  ARC_X_W(c, 4, ARC_X_R(c, 24));
  /* 112620: mov x5, x20 */
  ARC_X_W(c, 5, ARC_X_R(c, 20));
  /* 112624: mov w6, wzr */
  ARC_W_W(c, 6, ARC_W_R(c, 31));
  /* 112628: bl #0x104878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1123884));
  fn1_104878(c);
  /* 11262c: ldr w8, [x19, #8] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 19) + INT64_C(8))));
  /* 112630: subs x9, x0, x22 */
  ARC_X_W(c, 9, arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 22)));
  /* 112634: b.ne #0x112648 */
  if (ARC_COND(c, 1)) goto L_112648;
  /* 112638: cmp w8, #0xc */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(12));
  /* 11263c: b.ne #0x112648 */
  if (ARC_COND(c, 1)) goto L_112648;
  /* 112640: str wzr, [x19, #8] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(8)), ARC_W_R(c, 31));
  /* 112644: b #0x1125a4 */
  goto L_1125a4;
L_112648:;
  /* 112648: cmp x9, #0x18 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(24));
  /* 11264c: b.ne #0x1125a4 */
  if (ARC_COND(c, 1)) goto L_1125a4;
  /* 112650: cmp w8, #0xb */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(11));
  /* 112654: b.gt #0x1125a4 */
  if (ARC_COND(c, 12)) goto L_1125a4;
  /* 112658: add w8, w8, #0xc */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) + UINT64_C(12)));
  /* 11265c: str w8, [x19, #8] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(8)), ARC_W_R(c, 8));
  /* 112660: b #0x1125a4 */
  goto L_1125a4;
L_112664:;
  /* 112664: bl #0xfc3b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1123944));
  fn1_fc3b8(c);
  /* 112668: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 11266c: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 112670: bl #0xd2a78 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1123956));
  fn1_d2a78(c);
  /* 112674: b #0x112680 */
  goto L_112680;
  /* 112678: b #0x11267c */
  goto L_11267c;
L_11267c:;
  /* 11267c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
L_112680:;
  /* 112680: sub x0, x29, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* 112684: bl #0x143478 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1123976));
  fn1_143478(c);
  /* 112688: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 11268c: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1123984));
  fn1_9cc20(c);
}

void fn1_113ec8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039058120));
  /* 113ec8: bti c */
  /* bti: no architectural effect here */
  /* 113ecc: ldr w0, [x0, #0x80] */
  ARC_W_W(c, 0, arc_ld32((ARC_X_R(c, 0) + INT64_C(128))));
  /* 113ed0: ret  */
  return;
}

void fn1_11ae94(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039086740));
  /* 11ae94: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 11ae98: sub sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(112)));
  /* 11ae9c: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 11aea0: str x27, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 27));
  /* 11aea4: stp x26, x25, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* 11aea8: stp x24, x23, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 11aeac: stp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 11aeb0: stp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 11aeb4: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 11aeb8: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* 11aebc: sub x8, x1, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 1) - UINT64_C(1)));
  /* 11aec0: adrp x9, #0x14e000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1368064)));
  /* 11aec4: add x9, x9, #0x248 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(584)));
  /* 11aec8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 11aecc: strb wzr, [x0, #0x122] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(290)), ARC_W_R(c, 31));
  /* 11aed0: stp x9, x8, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* 11aed4: mov w9, #1 */
  ARC_W_W(c, 9, UINT64_C(1));
  /* 11aed8: mov x8, x0 */
  ARC_X_W(c, 8, ARC_X_R(c, 0));
  /* 11aedc: str x9, [x0, #0x118] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(280)), ARC_X_R(c, 9));
  /* 11aee0: mov w9, #0x4302 */
  ARC_W_W(c, 9, UINT64_C(17154));
  /* 11aee4: adrp x10, #0x151000 */
  ARC_X_W(c, 10, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 11aee8: str q0, [x8, #0x28]! */
  arc_st64((ARC_X_R(c, 8) + INT64_C(40)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 8) + INT64_C(40)) + 8, (c)->q[0].u64[1]);
  ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(40));
  /* 11aeec: adrp x24, #0x151000 */
  ARC_X_W(c, 24, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 11aef0: str x8, [x19, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 19) + INT64_C(16));
    ARC_X_W(c, 19, ARC_X_R(c, 19) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* 11aef4: nop  */
  /* nop: no architectural effect here */
  /* 11aef8: adr x22, #0x15e6f0 */
  ARC_X_W(c, 22, (arc_image_bases[1] + UINT64_C(1435376)));
  /* 11aefc: stur q0, [x0, #0x38] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(56)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 0) + INT64_C(56)) + 8, (c)->q[0].u64[1]);
  /* 11af00: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 11af04: stur q0, [x0, #0x48] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(72)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 0) + INT64_C(72)) + 8, (c)->q[0].u64[1]);
  /* 11af08: stur q0, [x0, #0x58] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(88)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 0) + INT64_C(88)) + 8, (c)->q[0].u64[1]);
  /* 11af0c: stur q0, [x0, #0x68] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(104)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 0) + INT64_C(104)) + 8, (c)->q[0].u64[1]);
  /* 11af10: stur q0, [x0, #0x78] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(120)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 0) + INT64_C(120)) + 8, (c)->q[0].u64[1]);
  /* 11af14: stur q0, [x0, #0x88] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(136)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 0) + INT64_C(136)) + 8, (c)->q[0].u64[1]);
  /* 11af18: stur q0, [x0, #0x98] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(152)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 0) + INT64_C(152)) + 8, (c)->q[0].u64[1]);
  /* 11af1c: stur q0, [x0, #0xa8] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(168)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 0) + INT64_C(168)) + 8, (c)->q[0].u64[1]);
  /* 11af20: stur q0, [x0, #0xb8] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(184)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 0) + INT64_C(184)) + 8, (c)->q[0].u64[1]);
  /* 11af24: stur q0, [x0, #0xc8] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(200)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 0) + INT64_C(200)) + 8, (c)->q[0].u64[1]);
  /* 11af28: stur q0, [x0, #0xd8] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(216)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 0) + INT64_C(216)) + 8, (c)->q[0].u64[1]);
  /* 11af2c: stur q0, [x0, #0xe8] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(232)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 0) + INT64_C(232)) + 8, (c)->q[0].u64[1]);
  /* 11af30: stur q0, [x0, #0xf8] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(248)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 0) + INT64_C(248)) + 8, (c)->q[0].u64[1]);
  /* 11af34: str q0, [x8, #0xe0] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(224)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 8) + INT64_C(224)) + 8, (c)->q[0].u64[1]);
  /* 11af38: strh w9, [x0, #0x120] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(288)), ARC_W_R(c, 9));
  /* 11af3c: add x9, x0, #0x118 */
  ARC_X_W(c, 9, (ARC_X_R(c, 0) + UINT64_C(280)));
  /* 11af40: ldr x10, [x10, #0xd18] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 10) + INT64_C(3352))));
  /* 11af44: stp x8, x9, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 11af48: ldr x24, [x24, #0xbd0] */
  ARC_X_W(c, 24, arc_ld64((ARC_X_R(c, 24) + INT64_C(3024))));
  /* 11af4c: add x8, x10, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 10) + UINT64_C(16)));
  /* 11af50: stp x8, xzr, [x22] */
  { const uint64_t _pa = ARC_X_R(c, 22);
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 11af54: ldar x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 11af58: cmn x8, #1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0);
  /* 11af5c: b.eq #0x11b018 */
  if (ARC_COND(c, 0)) goto L_11b018;
  /* 11af60: nop  */
  /* nop: no architectural effect here */
  /* 11af64: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11af68: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1159020));
  fn1_142518(c);
  /* 11af6c: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 11af70: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 11af74: b.ne #0x11afa0 */
  if (ARC_COND(c, 1)) goto L_11afa0;
  /* 11af78: nop  */
  /* nop: no architectural effect here */
  /* 11af7c: adr x21, #0x15791c */
  ARC_X_W(c, 21, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 11af80: nop  */
  /* nop: no architectural effect here */
  /* 11af84: adr x23, #0x1578f4 */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1407220)));
L_11af88:;
  /* 11af88: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 11af8c: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* 11af90: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1159060));
  fn1_142530(c);
  /* 11af94: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 11af98: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 11af9c: b.eq #0x11af88 */
  if (ARC_COND(c, 0)) goto L_11af88;
L_11afa0:;
  /* 11afa0: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 11afa4: cbz x8, #0x11afb8 */
  if ((ARC_X_R(c, 8)) == 0) goto L_11afb8;
  /* 11afa8: nop  */
  /* nop: no architectural effect here */
  /* 11afac: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11afb0: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1159092));
  fn1_142560(c);
  /* 11afb4: b #0x11b018 */
  goto L_11b018;
L_11afb8:;
  /* 11afb8: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 11afbc: str x24, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 24));
  /* 11afc0: strb wzr, [sp, #8] */
  arc_st8(((c)->sp + INT64_C(8)), ARC_W_R(c, 31));
  /* 11afc4: str x8, [x24] */
  arc_st64(ARC_X_R(c, 24), ARC_X_R(c, 8));
  /* 11afc8: nop  */
  /* nop: no architectural effect here */
  /* 11afcc: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11afd0: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1159124));
  fn1_142560(c);
  /* 11afd4: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 11afd8: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 11afdc: ldr x1, [x1, #0xc58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3160))));
  /* 11afe0: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1159140));
  fn1_a2030(c);
  /* 11afe4: add w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + UINT64_C(1)));
  /* 11afe8: str w8, [x24, #8] */
  arc_st32((ARC_X_R(c, 24) + INT64_C(8)), ARC_W_R(c, 8));
  /* 11afec: nop  */
  /* nop: no architectural effect here */
  /* 11aff0: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11aff4: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1159160));
  fn1_142518(c);
  /* 11aff8: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 11affc: stlr x8, [x24] */
  arc_st64(ARC_X_R(c, 24), ARC_X_R(c, 8));
  /* 11b000: nop  */
  /* nop: no architectural effect here */
  /* 11b004: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11b008: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1159180));
  fn1_142560(c);
  /* 11b00c: nop  */
  /* nop: no architectural effect here */
  /* 11b010: adr x0, #0x15791c */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 11b014: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1159192));
  fn1_142578(c);
L_11b018:;
  /* 11b018: ldrsw x8, [x24, #8] */
  ARC_X_W(c, 8, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 24) + INT64_C(8)))));
  /* 11b01c: adrp x1, #0x15e000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 11b020: add x1, x1, #0x6f8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1784)));
  /* 11b024: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 11b028: sub x24, x8, #1 */
  ARC_X_W(c, 24, (ARC_X_R(c, 8) - UINT64_C(1)));
  /* 11b02c: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1159216));
  fn1_db2e0(c);
  /* 11b030: ldp x8, x9, [x20, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 11b034: sub x9, x9, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - ARC_X_R(c, 8)));
  /* 11b038: asr x10, x9, #3 */
  ARC_X_W(c, 10, ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(3)) & 63))));
  /* 11b03c: cmp x10, x24 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 24));
  /* 11b040: b.hi #0x11b06c */
  if (ARC_COND(c, 8)) goto L_11b06c;
  /* 11b044: add x9, x24, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 24) + UINT64_C(1)));
  /* 11b048: subs x1, x9, x10 */
  ARC_X_W(c, 1, arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10)));
  /* 11b04c: b.ls #0x11b060 */
  if (ARC_COND(c, 9)) goto L_11b060;
  /* 11b050: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 11b054: bl #0x1352bc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1159256));
  fn1_1352bc(c);
  /* 11b058: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 11b05c: b #0x11b06c */
  goto L_11b06c;
L_11b060:;
  /* 11b060: b.hs #0x11b06c */
  if (ARC_COND(c, 2)) goto L_11b06c;
  /* 11b064: add x9, x8, x9, lsl #3 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3)));
  /* 11b068: str x9, [x20, #0x18] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(24)), ARC_X_R(c, 9));
L_11b06c:;
  /* 11b06c: ldr x21, [x8, x24, lsl #3] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 24)) << 3))));
  /* 11b070: cbz x21, #0x11b094 */
  if ((ARC_X_R(c, 21)) == 0) goto L_11b094;
  /* 11b074: add x1, x21, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(8)));
  /* 11b078: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 11b07c: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1159296));
  fn1_bd950(c);
  /* 11b080: cbnz x0, #0x11b094 */
  if ((ARC_X_R(c, 0)) != 0) goto L_11b094;
  /* 11b084: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 11b088: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 11b08c: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 11b090: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1159316));
  arc_dispatch(c, ARC_X_R(c, 8));
L_11b094:;
  /* 11b094: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 11b098: adrp x9, #0x151000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 11b09c: nop  */
  /* nop: no architectural effect here */
  /* 11b0a0: adr x23, #0x15e700 */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1435392)));
  /* 11b0a4: ldr x9, [x9, #0xd20] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(3360))));
  /* 11b0a8: str x22, [x8, x24, lsl #3] */
  arc_st64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 24)) << 3)), ARC_X_R(c, 22));
  /* 11b0ac: adrp x24, #0x151000 */
  ARC_X_W(c, 24, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 11b0b0: add x8, x9, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) + UINT64_C(16)));
  /* 11b0b4: ldr x24, [x24, #0xbd8] */
  ARC_X_W(c, 24, arc_ld64((ARC_X_R(c, 24) + INT64_C(3032))));
  /* 11b0b8: stp x8, xzr, [x23] */
  { const uint64_t _pa = ARC_X_R(c, 23);
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 11b0bc: ldar x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 11b0c0: cmn x8, #1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0);
  /* 11b0c4: b.eq #0x11b180 */
  if (ARC_COND(c, 0)) goto L_11b180;
  /* 11b0c8: nop  */
  /* nop: no architectural effect here */
  /* 11b0cc: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11b0d0: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1159380));
  fn1_142518(c);
  /* 11b0d4: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 11b0d8: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 11b0dc: b.ne #0x11b108 */
  if (ARC_COND(c, 1)) goto L_11b108;
  /* 11b0e0: nop  */
  /* nop: no architectural effect here */
  /* 11b0e4: adr x21, #0x15791c */
  ARC_X_W(c, 21, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 11b0e8: nop  */
  /* nop: no architectural effect here */
  /* 11b0ec: adr x22, #0x1578f4 */
  ARC_X_W(c, 22, (arc_image_bases[1] + UINT64_C(1407220)));
L_11b0f0:;
  /* 11b0f0: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 11b0f4: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 11b0f8: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1159420));
  fn1_142530(c);
  /* 11b0fc: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 11b100: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 11b104: b.eq #0x11b0f0 */
  if (ARC_COND(c, 0)) goto L_11b0f0;
L_11b108:;
  /* 11b108: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 11b10c: cbz x8, #0x11b120 */
  if ((ARC_X_R(c, 8)) == 0) goto L_11b120;
  /* 11b110: nop  */
  /* nop: no architectural effect here */
  /* 11b114: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11b118: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1159452));
  fn1_142560(c);
  /* 11b11c: b #0x11b180 */
  goto L_11b180;
L_11b120:;
  /* 11b120: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 11b124: str x24, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 24));
  /* 11b128: strb wzr, [sp, #8] */
  arc_st8(((c)->sp + INT64_C(8)), ARC_W_R(c, 31));
  /* 11b12c: str x8, [x24] */
  arc_st64(ARC_X_R(c, 24), ARC_X_R(c, 8));
  /* 11b130: nop  */
  /* nop: no architectural effect here */
  /* 11b134: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11b138: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1159484));
  fn1_142560(c);
  /* 11b13c: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 11b140: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 11b144: ldr x1, [x1, #0xc58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3160))));
  /* 11b148: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1159500));
  fn1_a2030(c);
  /* 11b14c: add w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + UINT64_C(1)));
  /* 11b150: str w8, [x24, #8] */
  arc_st32((ARC_X_R(c, 24) + INT64_C(8)), ARC_W_R(c, 8));
  /* 11b154: nop  */
  /* nop: no architectural effect here */
  /* 11b158: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11b15c: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1159520));
  fn1_142518(c);
  /* 11b160: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 11b164: stlr x8, [x24] */
  arc_st64(ARC_X_R(c, 24), ARC_X_R(c, 8));
  /* 11b168: nop  */
  /* nop: no architectural effect here */
  /* 11b16c: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11b170: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1159540));
  fn1_142560(c);
  /* 11b174: nop  */
  /* nop: no architectural effect here */
  /* 11b178: adr x0, #0x15791c */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 11b17c: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1159552));
  fn1_142578(c);
L_11b180:;
  /* 11b180: ldrsw x8, [x24, #8] */
  ARC_X_W(c, 8, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 24) + INT64_C(8)))));
  /* 11b184: adrp x1, #0x15e000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 11b188: add x1, x1, #0x708 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1800)));
  /* 11b18c: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 11b190: sub x22, x8, #1 */
  ARC_X_W(c, 22, (ARC_X_R(c, 8) - UINT64_C(1)));
  /* 11b194: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1159576));
  fn1_db2e0(c);
  /* 11b198: ldp x8, x9, [x20, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 11b19c: sub x9, x9, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - ARC_X_R(c, 8)));
  /* 11b1a0: asr x10, x9, #3 */
  ARC_X_W(c, 10, ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(3)) & 63))));
  /* 11b1a4: cmp x10, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 22));
  /* 11b1a8: b.hi #0x11b1d4 */
  if (ARC_COND(c, 8)) goto L_11b1d4;
  /* 11b1ac: add x9, x22, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 22) + UINT64_C(1)));
  /* 11b1b0: subs x1, x9, x10 */
  ARC_X_W(c, 1, arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10)));
  /* 11b1b4: b.ls #0x11b1c8 */
  if (ARC_COND(c, 9)) goto L_11b1c8;
  /* 11b1b8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 11b1bc: bl #0x1352bc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1159616));
  fn1_1352bc(c);
  /* 11b1c0: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 11b1c4: b #0x11b1d4 */
  goto L_11b1d4;
L_11b1c8:;
  /* 11b1c8: b.hs #0x11b1d4 */
  if (ARC_COND(c, 2)) goto L_11b1d4;
  /* 11b1cc: add x9, x8, x9, lsl #3 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3)));
  /* 11b1d0: str x9, [x20, #0x18] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(24)), ARC_X_R(c, 9));
L_11b1d4:;
  /* 11b1d4: ldr x21, [x8, x22, lsl #3] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 22)) << 3))));
  /* 11b1d8: cbz x21, #0x11b1fc */
  if ((ARC_X_R(c, 21)) == 0) goto L_11b1fc;
  /* 11b1dc: add x1, x21, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(8)));
  /* 11b1e0: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 11b1e4: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1159656));
  fn1_bd950(c);
  /* 11b1e8: cbnz x0, #0x11b1fc */
  if ((ARC_X_R(c, 0)) != 0) goto L_11b1fc;
  /* 11b1ec: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 11b1f0: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 11b1f4: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 11b1f8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1159676));
  arc_dispatch(c, ARC_X_R(c, 8));
L_11b1fc:;
  /* 11b1fc: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 11b200: str x23, [x8, x22, lsl #3] */
  arc_st64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 22)) << 3)), ARC_X_R(c, 23));
  /* 11b204: nop  */
  /* nop: no architectural effect here */
  /* 11b208: adr x22, #0x15e710 */
  ARC_X_W(c, 22, (arc_image_bases[1] + UINT64_C(1435408)));
  /* 11b20c: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 11b210: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 11b214: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 11b218: mov w3, #1 */
  ARC_W_W(c, 3, UINT64_C(1));
  /* 11b21c: bl #0x143ef8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1159712));
  fn1_143ef8(c);
  /* 11b220: adrp x24, #0x151000 */
  ARC_X_W(c, 24, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 11b224: ldr x24, [x24, #0xb40] */
  ARC_X_W(c, 24, arc_ld64((ARC_X_R(c, 24) + INT64_C(2880))));
  /* 11b228: ldar x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 11b22c: cmn x8, #1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0);
  /* 11b230: b.eq #0x11b2ec */
  if (ARC_COND(c, 0)) goto L_11b2ec;
  /* 11b234: nop  */
  /* nop: no architectural effect here */
  /* 11b238: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11b23c: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1159744));
  fn1_142518(c);
  /* 11b240: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 11b244: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 11b248: b.ne #0x11b274 */
  if (ARC_COND(c, 1)) goto L_11b274;
  /* 11b24c: nop  */
  /* nop: no architectural effect here */
  /* 11b250: adr x21, #0x15791c */
  ARC_X_W(c, 21, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 11b254: nop  */
  /* nop: no architectural effect here */
  /* 11b258: adr x23, #0x1578f4 */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1407220)));
L_11b25c:;
  /* 11b25c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 11b260: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* 11b264: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1159784));
  fn1_142530(c);
  /* 11b268: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 11b26c: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 11b270: b.eq #0x11b25c */
  if (ARC_COND(c, 0)) goto L_11b25c;
L_11b274:;
  /* 11b274: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 11b278: cbz x8, #0x11b28c */
  if ((ARC_X_R(c, 8)) == 0) goto L_11b28c;
  /* 11b27c: nop  */
  /* nop: no architectural effect here */
  /* 11b280: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11b284: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1159816));
  fn1_142560(c);
  /* 11b288: b #0x11b2ec */
  goto L_11b2ec;
L_11b28c:;
  /* 11b28c: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 11b290: str x24, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 24));
  /* 11b294: strb wzr, [sp, #8] */
  arc_st8(((c)->sp + INT64_C(8)), ARC_W_R(c, 31));
  /* 11b298: str x8, [x24] */
  arc_st64(ARC_X_R(c, 24), ARC_X_R(c, 8));
  /* 11b29c: nop  */
  /* nop: no architectural effect here */
  /* 11b2a0: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11b2a4: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1159848));
  fn1_142560(c);
  /* 11b2a8: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 11b2ac: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 11b2b0: ldr x1, [x1, #0xc58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3160))));
  /* 11b2b4: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1159864));
  fn1_a2030(c);
  /* 11b2b8: add w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + UINT64_C(1)));
  /* 11b2bc: str w8, [x24, #8] */
  arc_st32((ARC_X_R(c, 24) + INT64_C(8)), ARC_W_R(c, 8));
  /* 11b2c0: nop  */
  /* nop: no architectural effect here */
  /* 11b2c4: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11b2c8: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1159884));
  fn1_142518(c);
  /* 11b2cc: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 11b2d0: stlr x8, [x24] */
  arc_st64(ARC_X_R(c, 24), ARC_X_R(c, 8));
  /* 11b2d4: nop  */
  /* nop: no architectural effect here */
  /* 11b2d8: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11b2dc: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1159904));
  fn1_142560(c);
  /* 11b2e0: nop  */
  /* nop: no architectural effect here */
  /* 11b2e4: adr x0, #0x15791c */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 11b2e8: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1159916));
  fn1_142578(c);
L_11b2ec:;
  /* 11b2ec: ldrsw x8, [x24, #8] */
  ARC_X_W(c, 8, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 24) + INT64_C(8)))));
  /* 11b2f0: adrp x1, #0x15e000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 11b2f4: add x1, x1, #0x718 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1816)));
  /* 11b2f8: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 11b2fc: sub x24, x8, #1 */
  ARC_X_W(c, 24, (ARC_X_R(c, 8) - UINT64_C(1)));
  /* 11b300: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1159940));
  fn1_db2e0(c);
  /* 11b304: ldp x8, x9, [x20, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 11b308: sub x9, x9, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - ARC_X_R(c, 8)));
  /* 11b30c: asr x10, x9, #3 */
  ARC_X_W(c, 10, ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(3)) & 63))));
  /* 11b310: cmp x10, x24 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 24));
  /* 11b314: b.hi #0x11b340 */
  if (ARC_COND(c, 8)) goto L_11b340;
  /* 11b318: add x9, x24, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 24) + UINT64_C(1)));
  /* 11b31c: subs x1, x9, x10 */
  ARC_X_W(c, 1, arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10)));
  /* 11b320: b.ls #0x11b334 */
  if (ARC_COND(c, 9)) goto L_11b334;
  /* 11b324: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 11b328: bl #0x1352bc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1159980));
  fn1_1352bc(c);
  /* 11b32c: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 11b330: b #0x11b340 */
  goto L_11b340;
L_11b334:;
  /* 11b334: b.hs #0x11b340 */
  if (ARC_COND(c, 2)) goto L_11b340;
  /* 11b338: add x9, x8, x9, lsl #3 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3)));
  /* 11b33c: str x9, [x20, #0x18] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(24)), ARC_X_R(c, 9));
L_11b340:;
  /* 11b340: ldr x21, [x8, x24, lsl #3] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 24)) << 3))));
  /* 11b344: cbz x21, #0x11b368 */
  if ((ARC_X_R(c, 21)) == 0) goto L_11b368;
  /* 11b348: add x1, x21, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(8)));
  /* 11b34c: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 11b350: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1160020));
  fn1_bd950(c);
  /* 11b354: cbnz x0, #0x11b368 */
  if ((ARC_X_R(c, 0)) != 0) goto L_11b368;
  /* 11b358: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 11b35c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 11b360: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 11b364: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1160040));
  arc_dispatch(c, ARC_X_R(c, 8));
L_11b368:;
  /* 11b368: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 11b36c: adrp x9, #0x151000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 11b370: nop  */
  /* nop: no architectural effect here */
  /* 11b374: adr x23, #0x15e730 */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1435440)));
  /* 11b378: ldr x9, [x9, #0xce8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(3304))));
  /* 11b37c: str x22, [x8, x24, lsl #3] */
  arc_st64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 24)) << 3)), ARC_X_R(c, 22));
  /* 11b380: adrp x24, #0x151000 */
  ARC_X_W(c, 24, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 11b384: add x8, x9, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) + UINT64_C(16)));
  /* 11b388: ldr x24, [x24, #0xb58] */
  ARC_X_W(c, 24, arc_ld64((ARC_X_R(c, 24) + INT64_C(2904))));
  /* 11b38c: stp x8, xzr, [x23] */
  { const uint64_t _pa = ARC_X_R(c, 23);
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 11b390: ldar x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 11b394: cmn x8, #1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0);
  /* 11b398: b.eq #0x11b454 */
  if (ARC_COND(c, 0)) goto L_11b454;
  /* 11b39c: nop  */
  /* nop: no architectural effect here */
  /* 11b3a0: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11b3a4: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1160104));
  fn1_142518(c);
  /* 11b3a8: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 11b3ac: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 11b3b0: b.ne #0x11b3dc */
  if (ARC_COND(c, 1)) goto L_11b3dc;
  /* 11b3b4: nop  */
  /* nop: no architectural effect here */
  /* 11b3b8: adr x21, #0x15791c */
  ARC_X_W(c, 21, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 11b3bc: nop  */
  /* nop: no architectural effect here */
  /* 11b3c0: adr x22, #0x1578f4 */
  ARC_X_W(c, 22, (arc_image_bases[1] + UINT64_C(1407220)));
L_11b3c4:;
  /* 11b3c4: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 11b3c8: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 11b3cc: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1160144));
  fn1_142530(c);
  /* 11b3d0: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 11b3d4: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 11b3d8: b.eq #0x11b3c4 */
  if (ARC_COND(c, 0)) goto L_11b3c4;
L_11b3dc:;
  /* 11b3dc: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 11b3e0: cbz x8, #0x11b3f4 */
  if ((ARC_X_R(c, 8)) == 0) goto L_11b3f4;
  /* 11b3e4: nop  */
  /* nop: no architectural effect here */
  /* 11b3e8: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11b3ec: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1160176));
  fn1_142560(c);
  /* 11b3f0: b #0x11b454 */
  goto L_11b454;
L_11b3f4:;
  /* 11b3f4: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 11b3f8: str x24, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 24));
  /* 11b3fc: strb wzr, [sp, #8] */
  arc_st8(((c)->sp + INT64_C(8)), ARC_W_R(c, 31));
  /* 11b400: str x8, [x24] */
  arc_st64(ARC_X_R(c, 24), ARC_X_R(c, 8));
  /* 11b404: nop  */
  /* nop: no architectural effect here */
  /* 11b408: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11b40c: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1160208));
  fn1_142560(c);
  /* 11b410: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 11b414: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 11b418: ldr x1, [x1, #0xc58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3160))));
  /* 11b41c: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1160224));
  fn1_a2030(c);
  /* 11b420: add w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + UINT64_C(1)));
  /* 11b424: str w8, [x24, #8] */
  arc_st32((ARC_X_R(c, 24) + INT64_C(8)), ARC_W_R(c, 8));
  /* 11b428: nop  */
  /* nop: no architectural effect here */
  /* 11b42c: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11b430: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1160244));
  fn1_142518(c);
  /* 11b434: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 11b438: stlr x8, [x24] */
  arc_st64(ARC_X_R(c, 24), ARC_X_R(c, 8));
  /* 11b43c: nop  */
  /* nop: no architectural effect here */
  /* 11b440: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11b444: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1160264));
  fn1_142560(c);
  /* 11b448: nop  */
  /* nop: no architectural effect here */
  /* 11b44c: adr x0, #0x15791c */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 11b450: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1160276));
  fn1_142578(c);
L_11b454:;
  /* 11b454: ldrsw x8, [x24, #8] */
  ARC_X_W(c, 8, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 24) + INT64_C(8)))));
  /* 11b458: adrp x1, #0x15e000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 11b45c: add x1, x1, #0x738 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1848)));
  /* 11b460: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 11b464: sub x24, x8, #1 */
  ARC_X_W(c, 24, (ARC_X_R(c, 8) - UINT64_C(1)));
  /* 11b468: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1160300));
  fn1_db2e0(c);
  /* 11b46c: ldp x8, x9, [x20, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 11b470: sub x9, x9, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - ARC_X_R(c, 8)));
  /* 11b474: asr x10, x9, #3 */
  ARC_X_W(c, 10, ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(3)) & 63))));
  /* 11b478: cmp x10, x24 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 24));
  /* 11b47c: b.hi #0x11b4a8 */
  if (ARC_COND(c, 8)) goto L_11b4a8;
  /* 11b480: add x9, x24, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 24) + UINT64_C(1)));
  /* 11b484: subs x1, x9, x10 */
  ARC_X_W(c, 1, arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10)));
  /* 11b488: b.ls #0x11b49c */
  if (ARC_COND(c, 9)) goto L_11b49c;
  /* 11b48c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 11b490: bl #0x1352bc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1160340));
  fn1_1352bc(c);
  /* 11b494: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 11b498: b #0x11b4a8 */
  goto L_11b4a8;
L_11b49c:;
  /* 11b49c: b.hs #0x11b4a8 */
  if (ARC_COND(c, 2)) goto L_11b4a8;
  /* 11b4a0: add x9, x8, x9, lsl #3 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3)));
  /* 11b4a4: str x9, [x20, #0x18] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(24)), ARC_X_R(c, 9));
L_11b4a8:;
  /* 11b4a8: ldr x21, [x8, x24, lsl #3] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 24)) << 3))));
  /* 11b4ac: cbz x21, #0x11b4d0 */
  if ((ARC_X_R(c, 21)) == 0) goto L_11b4d0;
  /* 11b4b0: add x1, x21, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(8)));
  /* 11b4b4: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 11b4b8: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1160380));
  fn1_bd950(c);
  /* 11b4bc: cbnz x0, #0x11b4d0 */
  if ((ARC_X_R(c, 0)) != 0) goto L_11b4d0;
  /* 11b4c0: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 11b4c4: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 11b4c8: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 11b4cc: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1160400));
  arc_dispatch(c, ARC_X_R(c, 8));
L_11b4d0:;
  /* 11b4d0: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 11b4d4: adrp x9, #0x151000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 11b4d8: nop  */
  /* nop: no architectural effect here */
  /* 11b4dc: adr x22, #0x15e740 */
  ARC_X_W(c, 22, (arc_image_bases[1] + UINT64_C(1435456)));
  /* 11b4e0: ldr x9, [x9, #0xcf0] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(3312))));
  /* 11b4e4: str x23, [x8, x24, lsl #3] */
  arc_st64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 24)) << 3)), ARC_X_R(c, 23));
  /* 11b4e8: adrp x24, #0x151000 */
  ARC_X_W(c, 24, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 11b4ec: add x8, x9, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) + UINT64_C(16)));
  /* 11b4f0: ldr x24, [x24, #0xb70] */
  ARC_X_W(c, 24, arc_ld64((ARC_X_R(c, 24) + INT64_C(2928))));
  /* 11b4f4: stp x8, xzr, [x22] */
  { const uint64_t _pa = ARC_X_R(c, 22);
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 11b4f8: ldar x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 11b4fc: cmn x8, #1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0);
  /* 11b500: b.eq #0x11b5bc */
  if (ARC_COND(c, 0)) goto L_11b5bc;
  /* 11b504: nop  */
  /* nop: no architectural effect here */
  /* 11b508: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11b50c: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1160464));
  fn1_142518(c);
  /* 11b510: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 11b514: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 11b518: b.ne #0x11b544 */
  if (ARC_COND(c, 1)) goto L_11b544;
  /* 11b51c: nop  */
  /* nop: no architectural effect here */
  /* 11b520: adr x21, #0x15791c */
  ARC_X_W(c, 21, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 11b524: nop  */
  /* nop: no architectural effect here */
  /* 11b528: adr x23, #0x1578f4 */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1407220)));
L_11b52c:;
  /* 11b52c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 11b530: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* 11b534: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1160504));
  fn1_142530(c);
  /* 11b538: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 11b53c: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 11b540: b.eq #0x11b52c */
  if (ARC_COND(c, 0)) goto L_11b52c;
L_11b544:;
  /* 11b544: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 11b548: cbz x8, #0x11b55c */
  if ((ARC_X_R(c, 8)) == 0) goto L_11b55c;
  /* 11b54c: nop  */
  /* nop: no architectural effect here */
  /* 11b550: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11b554: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1160536));
  fn1_142560(c);
  /* 11b558: b #0x11b5bc */
  goto L_11b5bc;
L_11b55c:;
  /* 11b55c: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 11b560: str x24, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 24));
  /* 11b564: strb wzr, [sp, #8] */
  arc_st8(((c)->sp + INT64_C(8)), ARC_W_R(c, 31));
  /* 11b568: str x8, [x24] */
  arc_st64(ARC_X_R(c, 24), ARC_X_R(c, 8));
  /* 11b56c: nop  */
  /* nop: no architectural effect here */
  /* 11b570: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11b574: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1160568));
  fn1_142560(c);
  /* 11b578: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 11b57c: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 11b580: ldr x1, [x1, #0xc58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3160))));
  /* 11b584: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1160584));
  fn1_a2030(c);
  /* 11b588: add w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + UINT64_C(1)));
  /* 11b58c: str w8, [x24, #8] */
  arc_st32((ARC_X_R(c, 24) + INT64_C(8)), ARC_W_R(c, 8));
  /* 11b590: nop  */
  /* nop: no architectural effect here */
  /* 11b594: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11b598: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1160604));
  fn1_142518(c);
  /* 11b59c: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 11b5a0: stlr x8, [x24] */
  arc_st64(ARC_X_R(c, 24), ARC_X_R(c, 8));
  /* 11b5a4: nop  */
  /* nop: no architectural effect here */
  /* 11b5a8: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11b5ac: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1160624));
  fn1_142560(c);
  /* 11b5b0: nop  */
  /* nop: no architectural effect here */
  /* 11b5b4: adr x0, #0x15791c */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 11b5b8: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1160636));
  fn1_142578(c);
L_11b5bc:;
  /* 11b5bc: ldrsw x8, [x24, #8] */
  ARC_X_W(c, 8, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 24) + INT64_C(8)))));
  /* 11b5c0: adrp x1, #0x15e000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 11b5c4: add x1, x1, #0x748 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1864)));
  /* 11b5c8: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 11b5cc: sub x23, x8, #1 */
  ARC_X_W(c, 23, (ARC_X_R(c, 8) - UINT64_C(1)));
  /* 11b5d0: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1160660));
  fn1_db2e0(c);
  /* 11b5d4: ldp x8, x9, [x20, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 11b5d8: sub x9, x9, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - ARC_X_R(c, 8)));
  /* 11b5dc: asr x10, x9, #3 */
  ARC_X_W(c, 10, ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(3)) & 63))));
  /* 11b5e0: cmp x10, x23 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 23));
  /* 11b5e4: b.hi #0x11b610 */
  if (ARC_COND(c, 8)) goto L_11b610;
  /* 11b5e8: add x9, x23, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 23) + UINT64_C(1)));
  /* 11b5ec: subs x1, x9, x10 */
  ARC_X_W(c, 1, arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10)));
  /* 11b5f0: b.ls #0x11b604 */
  if (ARC_COND(c, 9)) goto L_11b604;
  /* 11b5f4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 11b5f8: bl #0x1352bc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1160700));
  fn1_1352bc(c);
  /* 11b5fc: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 11b600: b #0x11b610 */
  goto L_11b610;
L_11b604:;
  /* 11b604: b.hs #0x11b610 */
  if (ARC_COND(c, 2)) goto L_11b610;
  /* 11b608: add x9, x8, x9, lsl #3 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3)));
  /* 11b60c: str x9, [x20, #0x18] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(24)), ARC_X_R(c, 9));
L_11b610:;
  /* 11b610: ldr x21, [x8, x23, lsl #3] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 23)) << 3))));
  /* 11b614: cbz x21, #0x11b638 */
  if ((ARC_X_R(c, 21)) == 0) goto L_11b638;
  /* 11b618: add x1, x21, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(8)));
  /* 11b61c: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 11b620: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1160740));
  fn1_bd950(c);
  /* 11b624: cbnz x0, #0x11b638 */
  if ((ARC_X_R(c, 0)) != 0) goto L_11b638;
  /* 11b628: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 11b62c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 11b630: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 11b634: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1160760));
  arc_dispatch(c, ARC_X_R(c, 8));
L_11b638:;
  /* 11b638: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 11b63c: str x22, [x8, x23, lsl #3] */
  arc_st64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 23)) << 3)), ARC_X_R(c, 22));
  /* 11b640: nop  */
  /* nop: no architectural effect here */
  /* 11b644: adr x22, #0x15e750 */
  ARC_X_W(c, 22, (arc_image_bases[1] + UINT64_C(1435472)));
  /* 11b648: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* 11b64c: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 11b650: bl #0x143fb8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1160788));
  fn1_143fb8(c);
  /* 11b654: adrp x24, #0x151000 */
  ARC_X_W(c, 24, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 11b658: ldr x24, [x24, #0xbc0] */
  ARC_X_W(c, 24, arc_ld64((ARC_X_R(c, 24) + INT64_C(3008))));
  /* 11b65c: ldar x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 11b660: cmn x8, #1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0);
  /* 11b664: b.eq #0x11b720 */
  if (ARC_COND(c, 0)) goto L_11b720;
  /* 11b668: nop  */
  /* nop: no architectural effect here */
  /* 11b66c: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11b670: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1160820));
  fn1_142518(c);
  /* 11b674: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 11b678: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 11b67c: b.ne #0x11b6a8 */
  if (ARC_COND(c, 1)) goto L_11b6a8;
  /* 11b680: nop  */
  /* nop: no architectural effect here */
  /* 11b684: adr x21, #0x15791c */
  ARC_X_W(c, 21, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 11b688: nop  */
  /* nop: no architectural effect here */
  /* 11b68c: adr x23, #0x1578f4 */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1407220)));
L_11b690:;
  /* 11b690: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 11b694: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* 11b698: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1160860));
  fn1_142530(c);
  /* 11b69c: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 11b6a0: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 11b6a4: b.eq #0x11b690 */
  if (ARC_COND(c, 0)) goto L_11b690;
L_11b6a8:;
  /* 11b6a8: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 11b6ac: cbz x8, #0x11b6c0 */
  if ((ARC_X_R(c, 8)) == 0) goto L_11b6c0;
  /* 11b6b0: nop  */
  /* nop: no architectural effect here */
  /* 11b6b4: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11b6b8: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1160892));
  fn1_142560(c);
  /* 11b6bc: b #0x11b720 */
  goto L_11b720;
L_11b6c0:;
  /* 11b6c0: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 11b6c4: str x24, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 24));
  /* 11b6c8: strb wzr, [sp, #8] */
  arc_st8(((c)->sp + INT64_C(8)), ARC_W_R(c, 31));
  /* 11b6cc: str x8, [x24] */
  arc_st64(ARC_X_R(c, 24), ARC_X_R(c, 8));
  /* 11b6d0: nop  */
  /* nop: no architectural effect here */
  /* 11b6d4: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11b6d8: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1160924));
  fn1_142560(c);
  /* 11b6dc: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 11b6e0: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 11b6e4: ldr x1, [x1, #0xc58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3160))));
  /* 11b6e8: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1160940));
  fn1_a2030(c);
  /* 11b6ec: add w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + UINT64_C(1)));
  /* 11b6f0: str w8, [x24, #8] */
  arc_st32((ARC_X_R(c, 24) + INT64_C(8)), ARC_W_R(c, 8));
  /* 11b6f4: nop  */
  /* nop: no architectural effect here */
  /* 11b6f8: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11b6fc: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1160960));
  fn1_142518(c);
  /* 11b700: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 11b704: stlr x8, [x24] */
  arc_st64(ARC_X_R(c, 24), ARC_X_R(c, 8));
  /* 11b708: nop  */
  /* nop: no architectural effect here */
  /* 11b70c: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11b710: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1160980));
  fn1_142560(c);
  /* 11b714: nop  */
  /* nop: no architectural effect here */
  /* 11b718: adr x0, #0x15791c */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 11b71c: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1160992));
  fn1_142578(c);
L_11b720:;
  /* 11b720: ldrsw x8, [x24, #8] */
  ARC_X_W(c, 8, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 24) + INT64_C(8)))));
  /* 11b724: adrp x1, #0x15e000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 11b728: add x1, x1, #0x758 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1880)));
  /* 11b72c: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 11b730: sub x24, x8, #1 */
  ARC_X_W(c, 24, (ARC_X_R(c, 8) - UINT64_C(1)));
  /* 11b734: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1161016));
  fn1_db2e0(c);
  /* 11b738: ldp x8, x9, [x20, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 11b73c: sub x9, x9, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - ARC_X_R(c, 8)));
  /* 11b740: asr x10, x9, #3 */
  ARC_X_W(c, 10, ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(3)) & 63))));
  /* 11b744: cmp x10, x24 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 24));
  /* 11b748: b.hi #0x11b774 */
  if (ARC_COND(c, 8)) goto L_11b774;
  /* 11b74c: add x9, x24, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 24) + UINT64_C(1)));
  /* 11b750: subs x1, x9, x10 */
  ARC_X_W(c, 1, arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10)));
  /* 11b754: b.ls #0x11b768 */
  if (ARC_COND(c, 9)) goto L_11b768;
  /* 11b758: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 11b75c: bl #0x1352bc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1161056));
  fn1_1352bc(c);
  /* 11b760: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 11b764: b #0x11b774 */
  goto L_11b774;
L_11b768:;
  /* 11b768: b.hs #0x11b774 */
  if (ARC_COND(c, 2)) goto L_11b774;
  /* 11b76c: add x9, x8, x9, lsl #3 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3)));
  /* 11b770: str x9, [x20, #0x18] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(24)), ARC_X_R(c, 9));
L_11b774:;
  /* 11b774: ldr x21, [x8, x24, lsl #3] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 24)) << 3))));
  /* 11b778: cbz x21, #0x11b79c */
  if ((ARC_X_R(c, 21)) == 0) goto L_11b79c;
  /* 11b77c: add x1, x21, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(8)));
  /* 11b780: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 11b784: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1161096));
  fn1_bd950(c);
  /* 11b788: cbnz x0, #0x11b79c */
  if ((ARC_X_R(c, 0)) != 0) goto L_11b79c;
  /* 11b78c: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 11b790: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 11b794: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 11b798: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1161116));
  arc_dispatch(c, ARC_X_R(c, 8));
L_11b79c:;
  /* 11b79c: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 11b7a0: adrp x9, #0x151000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 11b7a4: nop  */
  /* nop: no architectural effect here */
  /* 11b7a8: adr x23, #0x15e768 */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1435496)));
  /* 11b7ac: ldr x9, [x9, #0xcf8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(3320))));
  /* 11b7b0: str x22, [x8, x24, lsl #3] */
  arc_st64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 24)) << 3)), ARC_X_R(c, 22));
  /* 11b7b4: adrp x24, #0x151000 */
  ARC_X_W(c, 24, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 11b7b8: add x8, x9, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) + UINT64_C(16)));
  /* 11b7bc: ldr x24, [x24, #0xc90] */
  ARC_X_W(c, 24, arc_ld64((ARC_X_R(c, 24) + INT64_C(3216))));
  /* 11b7c0: stp x8, xzr, [x23] */
  { const uint64_t _pa = ARC_X_R(c, 23);
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 11b7c4: ldar x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 11b7c8: cmn x8, #1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0);
  /* 11b7cc: b.eq #0x11b888 */
  if (ARC_COND(c, 0)) goto L_11b888;
  /* 11b7d0: nop  */
  /* nop: no architectural effect here */
  /* 11b7d4: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11b7d8: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1161180));
  fn1_142518(c);
  /* 11b7dc: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 11b7e0: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 11b7e4: b.ne #0x11b810 */
  if (ARC_COND(c, 1)) goto L_11b810;
  /* 11b7e8: nop  */
  /* nop: no architectural effect here */
  /* 11b7ec: adr x21, #0x15791c */
  ARC_X_W(c, 21, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 11b7f0: nop  */
  /* nop: no architectural effect here */
  /* 11b7f4: adr x22, #0x1578f4 */
  ARC_X_W(c, 22, (arc_image_bases[1] + UINT64_C(1407220)));
L_11b7f8:;
  /* 11b7f8: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 11b7fc: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 11b800: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1161220));
  fn1_142530(c);
  /* 11b804: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 11b808: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 11b80c: b.eq #0x11b7f8 */
  if (ARC_COND(c, 0)) goto L_11b7f8;
L_11b810:;
  /* 11b810: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 11b814: cbz x8, #0x11b828 */
  if ((ARC_X_R(c, 8)) == 0) goto L_11b828;
  /* 11b818: nop  */
  /* nop: no architectural effect here */
  /* 11b81c: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11b820: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1161252));
  fn1_142560(c);
  /* 11b824: b #0x11b888 */
  goto L_11b888;
L_11b828:;
  /* 11b828: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 11b82c: str x24, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 24));
  /* 11b830: strb wzr, [sp, #8] */
  arc_st8(((c)->sp + INT64_C(8)), ARC_W_R(c, 31));
  /* 11b834: str x8, [x24] */
  arc_st64(ARC_X_R(c, 24), ARC_X_R(c, 8));
  /* 11b838: nop  */
  /* nop: no architectural effect here */
  /* 11b83c: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11b840: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1161284));
  fn1_142560(c);
  /* 11b844: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 11b848: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 11b84c: ldr x1, [x1, #0xc58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3160))));
  /* 11b850: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1161300));
  fn1_a2030(c);
  /* 11b854: add w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + UINT64_C(1)));
  /* 11b858: str w8, [x24, #8] */
  arc_st32((ARC_X_R(c, 24) + INT64_C(8)), ARC_W_R(c, 8));
  /* 11b85c: nop  */
  /* nop: no architectural effect here */
  /* 11b860: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11b864: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1161320));
  fn1_142518(c);
  /* 11b868: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 11b86c: stlr x8, [x24] */
  arc_st64(ARC_X_R(c, 24), ARC_X_R(c, 8));
  /* 11b870: nop  */
  /* nop: no architectural effect here */
  /* 11b874: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11b878: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1161340));
  fn1_142560(c);
  /* 11b87c: nop  */
  /* nop: no architectural effect here */
  /* 11b880: adr x0, #0x15791c */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 11b884: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1161352));
  fn1_142578(c);
L_11b888:;
  /* 11b888: ldrsw x8, [x24, #8] */
  ARC_X_W(c, 8, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 24) + INT64_C(8)))));
  /* 11b88c: adrp x1, #0x15e000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 11b890: add x1, x1, #0x770 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1904)));
  /* 11b894: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 11b898: sub x24, x8, #1 */
  ARC_X_W(c, 24, (ARC_X_R(c, 8) - UINT64_C(1)));
  /* 11b89c: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1161376));
  fn1_db2e0(c);
  /* 11b8a0: ldp x8, x9, [x20, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 11b8a4: sub x9, x9, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - ARC_X_R(c, 8)));
  /* 11b8a8: asr x10, x9, #3 */
  ARC_X_W(c, 10, ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(3)) & 63))));
  /* 11b8ac: cmp x10, x24 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 24));
  /* 11b8b0: b.hi #0x11b8dc */
  if (ARC_COND(c, 8)) goto L_11b8dc;
  /* 11b8b4: add x9, x24, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 24) + UINT64_C(1)));
  /* 11b8b8: subs x1, x9, x10 */
  ARC_X_W(c, 1, arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10)));
  /* 11b8bc: b.ls #0x11b8d0 */
  if (ARC_COND(c, 9)) goto L_11b8d0;
  /* 11b8c0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 11b8c4: bl #0x1352bc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1161416));
  fn1_1352bc(c);
  /* 11b8c8: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 11b8cc: b #0x11b8dc */
  goto L_11b8dc;
L_11b8d0:;
  /* 11b8d0: b.hs #0x11b8dc */
  if (ARC_COND(c, 2)) goto L_11b8dc;
  /* 11b8d4: add x9, x8, x9, lsl #3 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3)));
  /* 11b8d8: str x9, [x20, #0x18] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(24)), ARC_X_R(c, 9));
L_11b8dc:;
  /* 11b8dc: ldr x21, [x8, x24, lsl #3] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 24)) << 3))));
  /* 11b8e0: cbz x21, #0x11b904 */
  if ((ARC_X_R(c, 21)) == 0) goto L_11b904;
  /* 11b8e4: add x1, x21, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(8)));
  /* 11b8e8: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 11b8ec: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1161456));
  fn1_bd950(c);
  /* 11b8f0: cbnz x0, #0x11b904 */
  if ((ARC_X_R(c, 0)) != 0) goto L_11b904;
  /* 11b8f4: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 11b8f8: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 11b8fc: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 11b900: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1161476));
  arc_dispatch(c, ARC_X_R(c, 8));
L_11b904:;
  /* 11b904: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 11b908: adrp x9, #0x151000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 11b90c: nop  */
  /* nop: no architectural effect here */
  /* 11b910: adr x22, #0x15e778 */
  ARC_X_W(c, 22, (arc_image_bases[1] + UINT64_C(1435512)));
  /* 11b914: ldr x9, [x9, #0xd08] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(3336))));
  /* 11b918: str x23, [x8, x24, lsl #3] */
  arc_st64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 24)) << 3)), ARC_X_R(c, 23));
  /* 11b91c: adrp x24, #0x151000 */
  ARC_X_W(c, 24, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 11b920: add x8, x9, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) + UINT64_C(16)));
  /* 11b924: ldr x24, [x24, #0xca0] */
  ARC_X_W(c, 24, arc_ld64((ARC_X_R(c, 24) + INT64_C(3232))));
  /* 11b928: stp x8, xzr, [x22] */
  { const uint64_t _pa = ARC_X_R(c, 22);
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 11b92c: ldar x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 11b930: cmn x8, #1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0);
  /* 11b934: b.eq #0x11b9f0 */
  if (ARC_COND(c, 0)) goto L_11b9f0;
  /* 11b938: nop  */
  /* nop: no architectural effect here */
  /* 11b93c: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11b940: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1161540));
  fn1_142518(c);
  /* 11b944: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 11b948: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 11b94c: b.ne #0x11b978 */
  if (ARC_COND(c, 1)) goto L_11b978;
  /* 11b950: nop  */
  /* nop: no architectural effect here */
  /* 11b954: adr x21, #0x15791c */
  ARC_X_W(c, 21, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 11b958: nop  */
  /* nop: no architectural effect here */
  /* 11b95c: adr x23, #0x1578f4 */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1407220)));
L_11b960:;
  /* 11b960: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 11b964: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* 11b968: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1161580));
  fn1_142530(c);
  /* 11b96c: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 11b970: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 11b974: b.eq #0x11b960 */
  if (ARC_COND(c, 0)) goto L_11b960;
L_11b978:;
  /* 11b978: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 11b97c: cbz x8, #0x11b990 */
  if ((ARC_X_R(c, 8)) == 0) goto L_11b990;
  /* 11b980: nop  */
  /* nop: no architectural effect here */
  /* 11b984: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11b988: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1161612));
  fn1_142560(c);
  /* 11b98c: b #0x11b9f0 */
  goto L_11b9f0;
L_11b990:;
  /* 11b990: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 11b994: str x24, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 24));
  /* 11b998: strb wzr, [sp, #8] */
  arc_st8(((c)->sp + INT64_C(8)), ARC_W_R(c, 31));
  /* 11b99c: str x8, [x24] */
  arc_st64(ARC_X_R(c, 24), ARC_X_R(c, 8));
  /* 11b9a0: nop  */
  /* nop: no architectural effect here */
  /* 11b9a4: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11b9a8: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1161644));
  fn1_142560(c);
  /* 11b9ac: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 11b9b0: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 11b9b4: ldr x1, [x1, #0xc58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3160))));
  /* 11b9b8: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1161660));
  fn1_a2030(c);
  /* 11b9bc: add w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + UINT64_C(1)));
  /* 11b9c0: str w8, [x24, #8] */
  arc_st32((ARC_X_R(c, 24) + INT64_C(8)), ARC_W_R(c, 8));
  /* 11b9c4: nop  */
  /* nop: no architectural effect here */
  /* 11b9c8: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11b9cc: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1161680));
  fn1_142518(c);
  /* 11b9d0: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 11b9d4: stlr x8, [x24] */
  arc_st64(ARC_X_R(c, 24), ARC_X_R(c, 8));
  /* 11b9d8: nop  */
  /* nop: no architectural effect here */
  /* 11b9dc: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11b9e0: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1161700));
  fn1_142560(c);
  /* 11b9e4: nop  */
  /* nop: no architectural effect here */
  /* 11b9e8: adr x0, #0x15791c */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 11b9ec: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1161712));
  fn1_142578(c);
L_11b9f0:;
  /* 11b9f0: ldrsw x8, [x24, #8] */
  ARC_X_W(c, 8, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 24) + INT64_C(8)))));
  /* 11b9f4: adrp x1, #0x15e000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 11b9f8: add x1, x1, #0x780 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1920)));
  /* 11b9fc: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 11ba00: sub x24, x8, #1 */
  ARC_X_W(c, 24, (ARC_X_R(c, 8) - UINT64_C(1)));
  /* 11ba04: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1161736));
  fn1_db2e0(c);
  /* 11ba08: ldp x8, x9, [x20, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 11ba0c: sub x9, x9, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - ARC_X_R(c, 8)));
  /* 11ba10: asr x10, x9, #3 */
  ARC_X_W(c, 10, ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(3)) & 63))));
  /* 11ba14: cmp x10, x24 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 24));
  /* 11ba18: b.hi #0x11ba44 */
  if (ARC_COND(c, 8)) goto L_11ba44;
  /* 11ba1c: add x9, x24, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 24) + UINT64_C(1)));
  /* 11ba20: subs x1, x9, x10 */
  ARC_X_W(c, 1, arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10)));
  /* 11ba24: b.ls #0x11ba38 */
  if (ARC_COND(c, 9)) goto L_11ba38;
  /* 11ba28: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 11ba2c: bl #0x1352bc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1161776));
  fn1_1352bc(c);
  /* 11ba30: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 11ba34: b #0x11ba44 */
  goto L_11ba44;
L_11ba38:;
  /* 11ba38: b.hs #0x11ba44 */
  if (ARC_COND(c, 2)) goto L_11ba44;
  /* 11ba3c: add x9, x8, x9, lsl #3 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3)));
  /* 11ba40: str x9, [x20, #0x18] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(24)), ARC_X_R(c, 9));
L_11ba44:;
  /* 11ba44: ldr x21, [x8, x24, lsl #3] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 24)) << 3))));
  /* 11ba48: cbz x21, #0x11ba6c */
  if ((ARC_X_R(c, 21)) == 0) goto L_11ba6c;
  /* 11ba4c: add x1, x21, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(8)));
  /* 11ba50: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 11ba54: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1161816));
  fn1_bd950(c);
  /* 11ba58: cbnz x0, #0x11ba6c */
  if ((ARC_X_R(c, 0)) != 0) goto L_11ba6c;
  /* 11ba5c: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 11ba60: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 11ba64: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 11ba68: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1161836));
  arc_dispatch(c, ARC_X_R(c, 8));
L_11ba6c:;
  /* 11ba6c: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 11ba70: adrp x9, #0x151000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 11ba74: nop  */
  /* nop: no architectural effect here */
  /* 11ba78: adr x23, #0x15e788 */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1435528)));
  /* 11ba7c: ldr x9, [x9, #0xd00] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(3328))));
  /* 11ba80: str x22, [x8, x24, lsl #3] */
  arc_st64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 24)) << 3)), ARC_X_R(c, 22));
  /* 11ba84: adrp x24, #0x151000 */
  ARC_X_W(c, 24, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 11ba88: add x8, x9, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) + UINT64_C(16)));
  /* 11ba8c: ldr x24, [x24, #0xc98] */
  ARC_X_W(c, 24, arc_ld64((ARC_X_R(c, 24) + INT64_C(3224))));
  /* 11ba90: stp x8, xzr, [x23] */
  { const uint64_t _pa = ARC_X_R(c, 23);
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 11ba94: ldar x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 11ba98: cmn x8, #1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0);
  /* 11ba9c: b.eq #0x11bb58 */
  if (ARC_COND(c, 0)) goto L_11bb58;
  /* 11baa0: nop  */
  /* nop: no architectural effect here */
  /* 11baa4: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11baa8: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1161900));
  fn1_142518(c);
  /* 11baac: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 11bab0: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 11bab4: b.ne #0x11bae0 */
  if (ARC_COND(c, 1)) goto L_11bae0;
  /* 11bab8: nop  */
  /* nop: no architectural effect here */
  /* 11babc: adr x21, #0x15791c */
  ARC_X_W(c, 21, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 11bac0: nop  */
  /* nop: no architectural effect here */
  /* 11bac4: adr x22, #0x1578f4 */
  ARC_X_W(c, 22, (arc_image_bases[1] + UINT64_C(1407220)));
L_11bac8:;
  /* 11bac8: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 11bacc: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 11bad0: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1161940));
  fn1_142530(c);
  /* 11bad4: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 11bad8: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 11badc: b.eq #0x11bac8 */
  if (ARC_COND(c, 0)) goto L_11bac8;
L_11bae0:;
  /* 11bae0: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 11bae4: cbz x8, #0x11baf8 */
  if ((ARC_X_R(c, 8)) == 0) goto L_11baf8;
  /* 11bae8: nop  */
  /* nop: no architectural effect here */
  /* 11baec: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11baf0: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1161972));
  fn1_142560(c);
  /* 11baf4: b #0x11bb58 */
  goto L_11bb58;
L_11baf8:;
  /* 11baf8: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 11bafc: str x24, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 24));
  /* 11bb00: strb wzr, [sp, #8] */
  arc_st8(((c)->sp + INT64_C(8)), ARC_W_R(c, 31));
  /* 11bb04: str x8, [x24] */
  arc_st64(ARC_X_R(c, 24), ARC_X_R(c, 8));
  /* 11bb08: nop  */
  /* nop: no architectural effect here */
  /* 11bb0c: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11bb10: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1162004));
  fn1_142560(c);
  /* 11bb14: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 11bb18: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 11bb1c: ldr x1, [x1, #0xc58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3160))));
  /* 11bb20: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1162020));
  fn1_a2030(c);
  /* 11bb24: add w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + UINT64_C(1)));
  /* 11bb28: str w8, [x24, #8] */
  arc_st32((ARC_X_R(c, 24) + INT64_C(8)), ARC_W_R(c, 8));
  /* 11bb2c: nop  */
  /* nop: no architectural effect here */
  /* 11bb30: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11bb34: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1162040));
  fn1_142518(c);
  /* 11bb38: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 11bb3c: stlr x8, [x24] */
  arc_st64(ARC_X_R(c, 24), ARC_X_R(c, 8));
  /* 11bb40: nop  */
  /* nop: no architectural effect here */
  /* 11bb44: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11bb48: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1162060));
  fn1_142560(c);
  /* 11bb4c: nop  */
  /* nop: no architectural effect here */
  /* 11bb50: adr x0, #0x15791c */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 11bb54: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1162072));
  fn1_142578(c);
L_11bb58:;
  /* 11bb58: ldrsw x8, [x24, #8] */
  ARC_X_W(c, 8, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 24) + INT64_C(8)))));
  /* 11bb5c: adrp x1, #0x15e000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 11bb60: add x1, x1, #0x790 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1936)));
  /* 11bb64: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 11bb68: sub x24, x8, #1 */
  ARC_X_W(c, 24, (ARC_X_R(c, 8) - UINT64_C(1)));
  /* 11bb6c: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1162096));
  fn1_db2e0(c);
  /* 11bb70: ldp x8, x9, [x20, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 11bb74: sub x9, x9, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - ARC_X_R(c, 8)));
  /* 11bb78: asr x10, x9, #3 */
  ARC_X_W(c, 10, ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(3)) & 63))));
  /* 11bb7c: cmp x10, x24 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 24));
  /* 11bb80: b.hi #0x11bbac */
  if (ARC_COND(c, 8)) goto L_11bbac;
  /* 11bb84: add x9, x24, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 24) + UINT64_C(1)));
  /* 11bb88: subs x1, x9, x10 */
  ARC_X_W(c, 1, arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10)));
  /* 11bb8c: b.ls #0x11bba0 */
  if (ARC_COND(c, 9)) goto L_11bba0;
  /* 11bb90: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 11bb94: bl #0x1352bc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1162136));
  fn1_1352bc(c);
  /* 11bb98: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 11bb9c: b #0x11bbac */
  goto L_11bbac;
L_11bba0:;
  /* 11bba0: b.hs #0x11bbac */
  if (ARC_COND(c, 2)) goto L_11bbac;
  /* 11bba4: add x9, x8, x9, lsl #3 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3)));
  /* 11bba8: str x9, [x20, #0x18] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(24)), ARC_X_R(c, 9));
L_11bbac:;
  /* 11bbac: ldr x21, [x8, x24, lsl #3] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 24)) << 3))));
  /* 11bbb0: cbz x21, #0x11bbd4 */
  if ((ARC_X_R(c, 21)) == 0) goto L_11bbd4;
  /* 11bbb4: add x1, x21, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(8)));
  /* 11bbb8: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 11bbbc: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1162176));
  fn1_bd950(c);
  /* 11bbc0: cbnz x0, #0x11bbd4 */
  if ((ARC_X_R(c, 0)) != 0) goto L_11bbd4;
  /* 11bbc4: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 11bbc8: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 11bbcc: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 11bbd0: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1162196));
  arc_dispatch(c, ARC_X_R(c, 8));
L_11bbd4:;
  /* 11bbd4: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 11bbd8: adrp x9, #0x151000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 11bbdc: nop  */
  /* nop: no architectural effect here */
  /* 11bbe0: adr x22, #0x15e798 */
  ARC_X_W(c, 22, (arc_image_bases[1] + UINT64_C(1435544)));
  /* 11bbe4: ldr x9, [x9, #0xd10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(3344))));
  /* 11bbe8: str x23, [x8, x24, lsl #3] */
  arc_st64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 24)) << 3)), ARC_X_R(c, 23));
  /* 11bbec: adrp x24, #0x151000 */
  ARC_X_W(c, 24, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 11bbf0: add x8, x9, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) + UINT64_C(16)));
  /* 11bbf4: ldr x24, [x24, #0xca8] */
  ARC_X_W(c, 24, arc_ld64((ARC_X_R(c, 24) + INT64_C(3240))));
  /* 11bbf8: stp x8, xzr, [x22] */
  { const uint64_t _pa = ARC_X_R(c, 22);
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 11bbfc: ldar x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 11bc00: cmn x8, #1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0);
  /* 11bc04: b.eq #0x11bcc0 */
  if (ARC_COND(c, 0)) goto L_11bcc0;
  /* 11bc08: nop  */
  /* nop: no architectural effect here */
  /* 11bc0c: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11bc10: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1162260));
  fn1_142518(c);
  /* 11bc14: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 11bc18: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 11bc1c: b.ne #0x11bc48 */
  if (ARC_COND(c, 1)) goto L_11bc48;
  /* 11bc20: nop  */
  /* nop: no architectural effect here */
  /* 11bc24: adr x21, #0x15791c */
  ARC_X_W(c, 21, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 11bc28: nop  */
  /* nop: no architectural effect here */
  /* 11bc2c: adr x23, #0x1578f4 */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1407220)));
L_11bc30:;
  /* 11bc30: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 11bc34: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* 11bc38: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1162300));
  fn1_142530(c);
  /* 11bc3c: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 11bc40: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 11bc44: b.eq #0x11bc30 */
  if (ARC_COND(c, 0)) goto L_11bc30;
L_11bc48:;
  /* 11bc48: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 11bc4c: cbz x8, #0x11bc60 */
  if ((ARC_X_R(c, 8)) == 0) goto L_11bc60;
  /* 11bc50: nop  */
  /* nop: no architectural effect here */
  /* 11bc54: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11bc58: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1162332));
  fn1_142560(c);
  /* 11bc5c: b #0x11bcc0 */
  goto L_11bcc0;
L_11bc60:;
  /* 11bc60: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 11bc64: str x24, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 24));
  /* 11bc68: strb wzr, [sp, #8] */
  arc_st8(((c)->sp + INT64_C(8)), ARC_W_R(c, 31));
  /* 11bc6c: str x8, [x24] */
  arc_st64(ARC_X_R(c, 24), ARC_X_R(c, 8));
  /* 11bc70: nop  */
  /* nop: no architectural effect here */
  /* 11bc74: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11bc78: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1162364));
  fn1_142560(c);
  /* 11bc7c: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 11bc80: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 11bc84: ldr x1, [x1, #0xc58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3160))));
  /* 11bc88: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1162380));
  fn1_a2030(c);
  /* 11bc8c: add w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + UINT64_C(1)));
  /* 11bc90: str w8, [x24, #8] */
  arc_st32((ARC_X_R(c, 24) + INT64_C(8)), ARC_W_R(c, 8));
  /* 11bc94: nop  */
  /* nop: no architectural effect here */
  /* 11bc98: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11bc9c: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1162400));
  fn1_142518(c);
  /* 11bca0: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 11bca4: stlr x8, [x24] */
  arc_st64(ARC_X_R(c, 24), ARC_X_R(c, 8));
  /* 11bca8: nop  */
  /* nop: no architectural effect here */
  /* 11bcac: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11bcb0: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1162420));
  fn1_142560(c);
  /* 11bcb4: nop  */
  /* nop: no architectural effect here */
  /* 11bcb8: adr x0, #0x15791c */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 11bcbc: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1162432));
  fn1_142578(c);
L_11bcc0:;
  /* 11bcc0: ldrsw x8, [x24, #8] */
  ARC_X_W(c, 8, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 24) + INT64_C(8)))));
  /* 11bcc4: adrp x1, #0x15e000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 11bcc8: add x1, x1, #0x7a0 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1952)));
  /* 11bccc: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 11bcd0: sub x23, x8, #1 */
  ARC_X_W(c, 23, (ARC_X_R(c, 8) - UINT64_C(1)));
  /* 11bcd4: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1162456));
  fn1_db2e0(c);
  /* 11bcd8: ldp x8, x9, [x20, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 11bcdc: sub x9, x9, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - ARC_X_R(c, 8)));
  /* 11bce0: asr x10, x9, #3 */
  ARC_X_W(c, 10, ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(3)) & 63))));
  /* 11bce4: cmp x10, x23 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 23));
  /* 11bce8: b.hi #0x11bd14 */
  if (ARC_COND(c, 8)) goto L_11bd14;
  /* 11bcec: add x9, x23, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 23) + UINT64_C(1)));
  /* 11bcf0: subs x1, x9, x10 */
  ARC_X_W(c, 1, arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10)));
  /* 11bcf4: b.ls #0x11bd08 */
  if (ARC_COND(c, 9)) goto L_11bd08;
  /* 11bcf8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 11bcfc: bl #0x1352bc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1162496));
  fn1_1352bc(c);
  /* 11bd00: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 11bd04: b #0x11bd14 */
  goto L_11bd14;
L_11bd08:;
  /* 11bd08: b.hs #0x11bd14 */
  if (ARC_COND(c, 2)) goto L_11bd14;
  /* 11bd0c: add x9, x8, x9, lsl #3 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3)));
  /* 11bd10: str x9, [x20, #0x18] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(24)), ARC_X_R(c, 9));
L_11bd14:;
  /* 11bd14: ldr x21, [x8, x23, lsl #3] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 23)) << 3))));
  /* 11bd18: cbz x21, #0x11bd3c */
  if ((ARC_X_R(c, 21)) == 0) goto L_11bd3c;
  /* 11bd1c: add x1, x21, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(8)));
  /* 11bd20: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 11bd24: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1162536));
  fn1_bd950(c);
  /* 11bd28: cbnz x0, #0x11bd3c */
  if ((ARC_X_R(c, 0)) != 0) goto L_11bd3c;
  /* 11bd2c: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 11bd30: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 11bd34: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 11bd38: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1162556));
  arc_dispatch(c, ARC_X_R(c, 8));
L_11bd3c:;
  /* 11bd3c: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 11bd40: str x22, [x8, x23, lsl #3] */
  arc_st64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 23)) << 3)), ARC_X_R(c, 22));
  /* 11bd44: nop  */
  /* nop: no architectural effect here */
  /* 11bd48: adr x22, #0x15e7a8 */
  ARC_X_W(c, 22, (arc_image_bases[1] + UINT64_C(1435560)));
  /* 11bd4c: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* 11bd50: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 11bd54: bl #0x144108 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1162584));
  fn1_144108(c);
  /* 11bd58: adrp x24, #0x151000 */
  ARC_X_W(c, 24, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 11bd5c: ldr x24, [x24, #0xcb0] */
  ARC_X_W(c, 24, arc_ld64((ARC_X_R(c, 24) + INT64_C(3248))));
  /* 11bd60: ldar x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 11bd64: cmn x8, #1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0);
  /* 11bd68: b.eq #0x11be24 */
  if (ARC_COND(c, 0)) goto L_11be24;
  /* 11bd6c: nop  */
  /* nop: no architectural effect here */
  /* 11bd70: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11bd74: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1162616));
  fn1_142518(c);
  /* 11bd78: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 11bd7c: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 11bd80: b.ne #0x11bdac */
  if (ARC_COND(c, 1)) goto L_11bdac;
  /* 11bd84: nop  */
  /* nop: no architectural effect here */
  /* 11bd88: adr x21, #0x15791c */
  ARC_X_W(c, 21, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 11bd8c: nop  */
  /* nop: no architectural effect here */
  /* 11bd90: adr x23, #0x1578f4 */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1407220)));
L_11bd94:;
  /* 11bd94: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 11bd98: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* 11bd9c: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1162656));
  fn1_142530(c);
  /* 11bda0: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 11bda4: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 11bda8: b.eq #0x11bd94 */
  if (ARC_COND(c, 0)) goto L_11bd94;
L_11bdac:;
  /* 11bdac: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 11bdb0: cbz x8, #0x11bdc4 */
  if ((ARC_X_R(c, 8)) == 0) goto L_11bdc4;
  /* 11bdb4: nop  */
  /* nop: no architectural effect here */
  /* 11bdb8: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11bdbc: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1162688));
  fn1_142560(c);
  /* 11bdc0: b #0x11be24 */
  goto L_11be24;
L_11bdc4:;
  /* 11bdc4: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 11bdc8: str x24, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 24));
  /* 11bdcc: strb wzr, [sp, #8] */
  arc_st8(((c)->sp + INT64_C(8)), ARC_W_R(c, 31));
  /* 11bdd0: str x8, [x24] */
  arc_st64(ARC_X_R(c, 24), ARC_X_R(c, 8));
  /* 11bdd4: nop  */
  /* nop: no architectural effect here */
  /* 11bdd8: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11bddc: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1162720));
  fn1_142560(c);
  /* 11bde0: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 11bde4: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 11bde8: ldr x1, [x1, #0xc58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3160))));
  /* 11bdec: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1162736));
  fn1_a2030(c);
  /* 11bdf0: add w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + UINT64_C(1)));
  /* 11bdf4: str w8, [x24, #8] */
  arc_st32((ARC_X_R(c, 24) + INT64_C(8)), ARC_W_R(c, 8));
  /* 11bdf8: nop  */
  /* nop: no architectural effect here */
  /* 11bdfc: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11be00: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1162756));
  fn1_142518(c);
  /* 11be04: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 11be08: stlr x8, [x24] */
  arc_st64(ARC_X_R(c, 24), ARC_X_R(c, 8));
  /* 11be0c: nop  */
  /* nop: no architectural effect here */
  /* 11be10: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11be14: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1162776));
  fn1_142560(c);
  /* 11be18: nop  */
  /* nop: no architectural effect here */
  /* 11be1c: adr x0, #0x15791c */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 11be20: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1162788));
  fn1_142578(c);
L_11be24:;
  /* 11be24: ldrsw x8, [x24, #8] */
  ARC_X_W(c, 8, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 24) + INT64_C(8)))));
  /* 11be28: adrp x1, #0x15e000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 11be2c: add x1, x1, #0x7b0 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1968)));
  /* 11be30: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 11be34: sub x23, x8, #1 */
  ARC_X_W(c, 23, (ARC_X_R(c, 8) - UINT64_C(1)));
  /* 11be38: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1162812));
  fn1_db2e0(c);
  /* 11be3c: ldp x8, x9, [x20, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 11be40: sub x9, x9, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - ARC_X_R(c, 8)));
  /* 11be44: asr x10, x9, #3 */
  ARC_X_W(c, 10, ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(3)) & 63))));
  /* 11be48: cmp x10, x23 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 23));
  /* 11be4c: b.hi #0x11be78 */
  if (ARC_COND(c, 8)) goto L_11be78;
  /* 11be50: add x9, x23, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 23) + UINT64_C(1)));
  /* 11be54: subs x1, x9, x10 */
  ARC_X_W(c, 1, arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10)));
  /* 11be58: b.ls #0x11be6c */
  if (ARC_COND(c, 9)) goto L_11be6c;
  /* 11be5c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 11be60: bl #0x1352bc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1162852));
  fn1_1352bc(c);
  /* 11be64: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 11be68: b #0x11be78 */
  goto L_11be78;
L_11be6c:;
  /* 11be6c: b.hs #0x11be78 */
  if (ARC_COND(c, 2)) goto L_11be78;
  /* 11be70: add x9, x8, x9, lsl #3 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3)));
  /* 11be74: str x9, [x20, #0x18] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(24)), ARC_X_R(c, 9));
L_11be78:;
  /* 11be78: ldr x21, [x8, x23, lsl #3] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 23)) << 3))));
  /* 11be7c: cbz x21, #0x11bea0 */
  if ((ARC_X_R(c, 21)) == 0) goto L_11bea0;
  /* 11be80: add x1, x21, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(8)));
  /* 11be84: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 11be88: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1162892));
  fn1_bd950(c);
  /* 11be8c: cbnz x0, #0x11bea0 */
  if ((ARC_X_R(c, 0)) != 0) goto L_11bea0;
  /* 11be90: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 11be94: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 11be98: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 11be9c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1162912));
  arc_dispatch(c, ARC_X_R(c, 8));
L_11bea0:;
  /* 11bea0: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 11bea4: str x22, [x8, x23, lsl #3] */
  arc_st64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 23)) << 3)), ARC_X_R(c, 22));
  /* 11bea8: nop  */
  /* nop: no architectural effect here */
  /* 11beac: adr x22, #0x15e7d8 */
  ARC_X_W(c, 22, (arc_image_bases[1] + UINT64_C(1435608)));
  /* 11beb0: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* 11beb4: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 11beb8: bl #0x144120 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1162940));
  fn1_144120(c);
  /* 11bebc: adrp x24, #0x151000 */
  ARC_X_W(c, 24, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 11bec0: ldr x24, [x24, #0xcb8] */
  ARC_X_W(c, 24, arc_ld64((ARC_X_R(c, 24) + INT64_C(3256))));
  /* 11bec4: ldar x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 11bec8: cmn x8, #1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0);
  /* 11becc: b.eq #0x11bf88 */
  if (ARC_COND(c, 0)) goto L_11bf88;
  /* 11bed0: nop  */
  /* nop: no architectural effect here */
  /* 11bed4: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11bed8: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1162972));
  fn1_142518(c);
  /* 11bedc: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 11bee0: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 11bee4: b.ne #0x11bf10 */
  if (ARC_COND(c, 1)) goto L_11bf10;
  /* 11bee8: nop  */
  /* nop: no architectural effect here */
  /* 11beec: adr x21, #0x15791c */
  ARC_X_W(c, 21, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 11bef0: nop  */
  /* nop: no architectural effect here */
  /* 11bef4: adr x23, #0x1578f4 */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1407220)));
L_11bef8:;
  /* 11bef8: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 11befc: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* 11bf00: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1163012));
  fn1_142530(c);
  /* 11bf04: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 11bf08: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 11bf0c: b.eq #0x11bef8 */
  if (ARC_COND(c, 0)) goto L_11bef8;
L_11bf10:;
  /* 11bf10: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 11bf14: cbz x8, #0x11bf28 */
  if ((ARC_X_R(c, 8)) == 0) goto L_11bf28;
  /* 11bf18: nop  */
  /* nop: no architectural effect here */
  /* 11bf1c: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11bf20: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1163044));
  fn1_142560(c);
  /* 11bf24: b #0x11bf88 */
  goto L_11bf88;
L_11bf28:;
  /* 11bf28: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 11bf2c: str x24, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 24));
  /* 11bf30: strb wzr, [sp, #8] */
  arc_st8(((c)->sp + INT64_C(8)), ARC_W_R(c, 31));
  /* 11bf34: str x8, [x24] */
  arc_st64(ARC_X_R(c, 24), ARC_X_R(c, 8));
  /* 11bf38: nop  */
  /* nop: no architectural effect here */
  /* 11bf3c: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11bf40: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1163076));
  fn1_142560(c);
  /* 11bf44: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 11bf48: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 11bf4c: ldr x1, [x1, #0xc58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3160))));
  /* 11bf50: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1163092));
  fn1_a2030(c);
  /* 11bf54: add w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + UINT64_C(1)));
  /* 11bf58: str w8, [x24, #8] */
  arc_st32((ARC_X_R(c, 24) + INT64_C(8)), ARC_W_R(c, 8));
  /* 11bf5c: nop  */
  /* nop: no architectural effect here */
  /* 11bf60: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11bf64: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1163112));
  fn1_142518(c);
  /* 11bf68: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 11bf6c: stlr x8, [x24] */
  arc_st64(ARC_X_R(c, 24), ARC_X_R(c, 8));
  /* 11bf70: nop  */
  /* nop: no architectural effect here */
  /* 11bf74: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11bf78: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1163132));
  fn1_142560(c);
  /* 11bf7c: nop  */
  /* nop: no architectural effect here */
  /* 11bf80: adr x0, #0x15791c */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 11bf84: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1163144));
  fn1_142578(c);
L_11bf88:;
  /* 11bf88: ldrsw x8, [x24, #8] */
  ARC_X_W(c, 8, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 24) + INT64_C(8)))));
  /* 11bf8c: adrp x1, #0x15e000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 11bf90: add x1, x1, #0x7e0 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2016)));
  /* 11bf94: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 11bf98: sub x24, x8, #1 */
  ARC_X_W(c, 24, (ARC_X_R(c, 8) - UINT64_C(1)));
  /* 11bf9c: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1163168));
  fn1_db2e0(c);
  /* 11bfa0: ldp x8, x9, [x20, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 11bfa4: sub x9, x9, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - ARC_X_R(c, 8)));
  /* 11bfa8: asr x10, x9, #3 */
  ARC_X_W(c, 10, ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(3)) & 63))));
  /* 11bfac: cmp x10, x24 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 24));
  /* 11bfb0: b.hi #0x11bfdc */
  if (ARC_COND(c, 8)) goto L_11bfdc;
  /* 11bfb4: add x9, x24, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 24) + UINT64_C(1)));
  /* 11bfb8: subs x1, x9, x10 */
  ARC_X_W(c, 1, arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10)));
  /* 11bfbc: b.ls #0x11bfd0 */
  if (ARC_COND(c, 9)) goto L_11bfd0;
  /* 11bfc0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 11bfc4: bl #0x1352bc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1163208));
  fn1_1352bc(c);
  /* 11bfc8: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 11bfcc: b #0x11bfdc */
  goto L_11bfdc;
L_11bfd0:;
  /* 11bfd0: b.hs #0x11bfdc */
  if (ARC_COND(c, 2)) goto L_11bfdc;
  /* 11bfd4: add x9, x8, x9, lsl #3 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3)));
  /* 11bfd8: str x9, [x20, #0x18] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(24)), ARC_X_R(c, 9));
L_11bfdc:;
  /* 11bfdc: ldr x21, [x8, x24, lsl #3] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 24)) << 3))));
  /* 11bfe0: cbz x21, #0x11c004 */
  if ((ARC_X_R(c, 21)) == 0) goto L_11c004;
  /* 11bfe4: add x1, x21, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(8)));
  /* 11bfe8: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 11bfec: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1163248));
  fn1_bd950(c);
  /* 11bff0: cbnz x0, #0x11c004 */
  if ((ARC_X_R(c, 0)) != 0) goto L_11c004;
  /* 11bff4: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 11bff8: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 11bffc: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 11c000: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1163268));
  arc_dispatch(c, ARC_X_R(c, 8));
L_11c004:;
  /* 11c004: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 11c008: adrp x9, #0x151000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 11c00c: nop  */
  /* nop: no architectural effect here */
  /* 11c010: adr x23, #0x15e808 */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1435656)));
  /* 11c014: ldr x9, [x9, #0xd28] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(3368))));
  /* 11c018: str x22, [x8, x24, lsl #3] */
  arc_st64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 24)) << 3)), ARC_X_R(c, 22));
  /* 11c01c: adrp x24, #0x151000 */
  ARC_X_W(c, 24, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 11c020: add x8, x9, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) + UINT64_C(16)));
  /* 11c024: ldr x24, [x24, #0xb48] */
  ARC_X_W(c, 24, arc_ld64((ARC_X_R(c, 24) + INT64_C(2888))));
  /* 11c028: stp x8, xzr, [x23] */
  { const uint64_t _pa = ARC_X_R(c, 23);
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 11c02c: ldar x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 11c030: cmn x8, #1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0);
  /* 11c034: b.eq #0x11c0f0 */
  if (ARC_COND(c, 0)) goto L_11c0f0;
  /* 11c038: nop  */
  /* nop: no architectural effect here */
  /* 11c03c: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11c040: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1163332));
  fn1_142518(c);
  /* 11c044: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 11c048: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 11c04c: b.ne #0x11c078 */
  if (ARC_COND(c, 1)) goto L_11c078;
  /* 11c050: nop  */
  /* nop: no architectural effect here */
  /* 11c054: adr x21, #0x15791c */
  ARC_X_W(c, 21, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 11c058: nop  */
  /* nop: no architectural effect here */
  /* 11c05c: adr x22, #0x1578f4 */
  ARC_X_W(c, 22, (arc_image_bases[1] + UINT64_C(1407220)));
L_11c060:;
  /* 11c060: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 11c064: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 11c068: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1163372));
  fn1_142530(c);
  /* 11c06c: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 11c070: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 11c074: b.eq #0x11c060 */
  if (ARC_COND(c, 0)) goto L_11c060;
L_11c078:;
  /* 11c078: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 11c07c: cbz x8, #0x11c090 */
  if ((ARC_X_R(c, 8)) == 0) goto L_11c090;
  /* 11c080: nop  */
  /* nop: no architectural effect here */
  /* 11c084: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11c088: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1163404));
  fn1_142560(c);
  /* 11c08c: b #0x11c0f0 */
  goto L_11c0f0;
L_11c090:;
  /* 11c090: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 11c094: str x24, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 24));
  /* 11c098: strb wzr, [sp, #8] */
  arc_st8(((c)->sp + INT64_C(8)), ARC_W_R(c, 31));
  /* 11c09c: str x8, [x24] */
  arc_st64(ARC_X_R(c, 24), ARC_X_R(c, 8));
  /* 11c0a0: nop  */
  /* nop: no architectural effect here */
  /* 11c0a4: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11c0a8: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1163436));
  fn1_142560(c);
  /* 11c0ac: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 11c0b0: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 11c0b4: ldr x1, [x1, #0xc58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3160))));
  /* 11c0b8: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1163452));
  fn1_a2030(c);
  /* 11c0bc: add w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + UINT64_C(1)));
  /* 11c0c0: str w8, [x24, #8] */
  arc_st32((ARC_X_R(c, 24) + INT64_C(8)), ARC_W_R(c, 8));
  /* 11c0c4: nop  */
  /* nop: no architectural effect here */
  /* 11c0c8: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11c0cc: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1163472));
  fn1_142518(c);
  /* 11c0d0: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 11c0d4: stlr x8, [x24] */
  arc_st64(ARC_X_R(c, 24), ARC_X_R(c, 8));
  /* 11c0d8: nop  */
  /* nop: no architectural effect here */
  /* 11c0dc: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11c0e0: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1163492));
  fn1_142560(c);
  /* 11c0e4: nop  */
  /* nop: no architectural effect here */
  /* 11c0e8: adr x0, #0x15791c */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 11c0ec: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1163504));
  fn1_142578(c);
L_11c0f0:;
  /* 11c0f0: ldrsw x8, [x24, #8] */
  ARC_X_W(c, 8, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 24) + INT64_C(8)))));
  /* 11c0f4: adrp x1, #0x15e000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 11c0f8: add x1, x1, #0x810 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2064)));
  /* 11c0fc: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 11c100: sub x24, x8, #1 */
  ARC_X_W(c, 24, (ARC_X_R(c, 8) - UINT64_C(1)));
  /* 11c104: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1163528));
  fn1_db2e0(c);
  /* 11c108: ldp x8, x9, [x20, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 11c10c: sub x9, x9, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - ARC_X_R(c, 8)));
  /* 11c110: asr x10, x9, #3 */
  ARC_X_W(c, 10, ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(3)) & 63))));
  /* 11c114: cmp x10, x24 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 24));
  /* 11c118: b.hi #0x11c144 */
  if (ARC_COND(c, 8)) goto L_11c144;
  /* 11c11c: add x9, x24, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 24) + UINT64_C(1)));
  /* 11c120: subs x1, x9, x10 */
  ARC_X_W(c, 1, arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10)));
  /* 11c124: b.ls #0x11c138 */
  if (ARC_COND(c, 9)) goto L_11c138;
  /* 11c128: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 11c12c: bl #0x1352bc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1163568));
  fn1_1352bc(c);
  /* 11c130: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 11c134: b #0x11c144 */
  goto L_11c144;
L_11c138:;
  /* 11c138: b.hs #0x11c144 */
  if (ARC_COND(c, 2)) goto L_11c144;
  /* 11c13c: add x9, x8, x9, lsl #3 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3)));
  /* 11c140: str x9, [x20, #0x18] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(24)), ARC_X_R(c, 9));
L_11c144:;
  /* 11c144: ldr x21, [x8, x24, lsl #3] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 24)) << 3))));
  /* 11c148: cbz x21, #0x11c16c */
  if ((ARC_X_R(c, 21)) == 0) goto L_11c16c;
  /* 11c14c: add x1, x21, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(8)));
  /* 11c150: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 11c154: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1163608));
  fn1_bd950(c);
  /* 11c158: cbnz x0, #0x11c16c */
  if ((ARC_X_R(c, 0)) != 0) goto L_11c16c;
  /* 11c15c: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 11c160: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 11c164: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 11c168: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1163628));
  arc_dispatch(c, ARC_X_R(c, 8));
L_11c16c:;
  /* 11c16c: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 11c170: adrp x9, #0x151000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 11c174: nop  */
  /* nop: no architectural effect here */
  /* 11c178: adr x22, #0x15e818 */
  ARC_X_W(c, 22, (arc_image_bases[1] + UINT64_C(1435672)));
  /* 11c17c: ldr x9, [x9, #0xd30] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(3376))));
  /* 11c180: str x23, [x8, x24, lsl #3] */
  arc_st64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 24)) << 3)), ARC_X_R(c, 23));
  /* 11c184: adrp x24, #0x151000 */
  ARC_X_W(c, 24, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 11c188: add x8, x9, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) + UINT64_C(16)));
  /* 11c18c: ldr x24, [x24, #0xb60] */
  ARC_X_W(c, 24, arc_ld64((ARC_X_R(c, 24) + INT64_C(2912))));
  /* 11c190: stp x8, xzr, [x22] */
  { const uint64_t _pa = ARC_X_R(c, 22);
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 11c194: ldar x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 11c198: cmn x8, #1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0);
  /* 11c19c: b.eq #0x11c258 */
  if (ARC_COND(c, 0)) goto L_11c258;
  /* 11c1a0: nop  */
  /* nop: no architectural effect here */
  /* 11c1a4: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11c1a8: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1163692));
  fn1_142518(c);
  /* 11c1ac: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 11c1b0: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 11c1b4: b.ne #0x11c1e0 */
  if (ARC_COND(c, 1)) goto L_11c1e0;
  /* 11c1b8: nop  */
  /* nop: no architectural effect here */
  /* 11c1bc: adr x21, #0x15791c */
  ARC_X_W(c, 21, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 11c1c0: nop  */
  /* nop: no architectural effect here */
  /* 11c1c4: adr x23, #0x1578f4 */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1407220)));
L_11c1c8:;
  /* 11c1c8: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 11c1cc: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* 11c1d0: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1163732));
  fn1_142530(c);
  /* 11c1d4: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 11c1d8: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 11c1dc: b.eq #0x11c1c8 */
  if (ARC_COND(c, 0)) goto L_11c1c8;
L_11c1e0:;
  /* 11c1e0: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 11c1e4: cbz x8, #0x11c1f8 */
  if ((ARC_X_R(c, 8)) == 0) goto L_11c1f8;
  /* 11c1e8: nop  */
  /* nop: no architectural effect here */
  /* 11c1ec: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11c1f0: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1163764));
  fn1_142560(c);
  /* 11c1f4: b #0x11c258 */
  goto L_11c258;
L_11c1f8:;
  /* 11c1f8: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 11c1fc: str x24, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 24));
  /* 11c200: strb wzr, [sp, #8] */
  arc_st8(((c)->sp + INT64_C(8)), ARC_W_R(c, 31));
  /* 11c204: str x8, [x24] */
  arc_st64(ARC_X_R(c, 24), ARC_X_R(c, 8));
  /* 11c208: nop  */
  /* nop: no architectural effect here */
  /* 11c20c: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11c210: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1163796));
  fn1_142560(c);
  /* 11c214: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 11c218: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 11c21c: ldr x1, [x1, #0xc58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3160))));
  /* 11c220: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1163812));
  fn1_a2030(c);
  /* 11c224: add w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + UINT64_C(1)));
  /* 11c228: str w8, [x24, #8] */
  arc_st32((ARC_X_R(c, 24) + INT64_C(8)), ARC_W_R(c, 8));
  /* 11c22c: nop  */
  /* nop: no architectural effect here */
  /* 11c230: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11c234: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1163832));
  fn1_142518(c);
  /* 11c238: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 11c23c: stlr x8, [x24] */
  arc_st64(ARC_X_R(c, 24), ARC_X_R(c, 8));
  /* 11c240: nop  */
  /* nop: no architectural effect here */
  /* 11c244: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11c248: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1163852));
  fn1_142560(c);
  /* 11c24c: nop  */
  /* nop: no architectural effect here */
  /* 11c250: adr x0, #0x15791c */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 11c254: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1163864));
  fn1_142578(c);
L_11c258:;
  /* 11c258: ldrsw x8, [x24, #8] */
  ARC_X_W(c, 8, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 24) + INT64_C(8)))));
  /* 11c25c: adrp x1, #0x15e000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 11c260: add x1, x1, #0x820 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2080)));
  /* 11c264: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 11c268: sub x24, x8, #1 */
  ARC_X_W(c, 24, (ARC_X_R(c, 8) - UINT64_C(1)));
  /* 11c26c: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1163888));
  fn1_db2e0(c);
  /* 11c270: ldp x8, x9, [x20, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 11c274: sub x9, x9, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - ARC_X_R(c, 8)));
  /* 11c278: asr x10, x9, #3 */
  ARC_X_W(c, 10, ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(3)) & 63))));
  /* 11c27c: cmp x10, x24 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 24));
  /* 11c280: b.hi #0x11c2ac */
  if (ARC_COND(c, 8)) goto L_11c2ac;
  /* 11c284: add x9, x24, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 24) + UINT64_C(1)));
  /* 11c288: subs x1, x9, x10 */
  ARC_X_W(c, 1, arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10)));
  /* 11c28c: b.ls #0x11c2a0 */
  if (ARC_COND(c, 9)) goto L_11c2a0;
  /* 11c290: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 11c294: bl #0x1352bc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1163928));
  fn1_1352bc(c);
  /* 11c298: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 11c29c: b #0x11c2ac */
  goto L_11c2ac;
L_11c2a0:;
  /* 11c2a0: b.hs #0x11c2ac */
  if (ARC_COND(c, 2)) goto L_11c2ac;
  /* 11c2a4: add x9, x8, x9, lsl #3 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3)));
  /* 11c2a8: str x9, [x20, #0x18] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(24)), ARC_X_R(c, 9));
L_11c2ac:;
  /* 11c2ac: ldr x21, [x8, x24, lsl #3] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 24)) << 3))));
  /* 11c2b0: cbz x21, #0x11c2d4 */
  if ((ARC_X_R(c, 21)) == 0) goto L_11c2d4;
  /* 11c2b4: add x1, x21, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(8)));
  /* 11c2b8: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 11c2bc: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1163968));
  fn1_bd950(c);
  /* 11c2c0: cbnz x0, #0x11c2d4 */
  if ((ARC_X_R(c, 0)) != 0) goto L_11c2d4;
  /* 11c2c4: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 11c2c8: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 11c2cc: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 11c2d0: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1163988));
  arc_dispatch(c, ARC_X_R(c, 8));
L_11c2d4:;
  /* 11c2d4: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 11c2d8: adrp x9, #0x151000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 11c2dc: nop  */
  /* nop: no architectural effect here */
  /* 11c2e0: adr x23, #0x15e828 */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1435688)));
  /* 11c2e4: ldr x9, [x9, #0xd38] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(3384))));
  /* 11c2e8: str x22, [x8, x24, lsl #3] */
  arc_st64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 24)) << 3)), ARC_X_R(c, 22));
  /* 11c2ec: adrp x24, #0x151000 */
  ARC_X_W(c, 24, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 11c2f0: add x8, x9, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) + UINT64_C(16)));
  /* 11c2f4: ldr x24, [x24, #0xb50] */
  ARC_X_W(c, 24, arc_ld64((ARC_X_R(c, 24) + INT64_C(2896))));
  /* 11c2f8: stp x8, xzr, [x23] */
  { const uint64_t _pa = ARC_X_R(c, 23);
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 11c2fc: ldar x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 11c300: cmn x8, #1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0);
  /* 11c304: b.eq #0x11c3c0 */
  if (ARC_COND(c, 0)) goto L_11c3c0;
  /* 11c308: nop  */
  /* nop: no architectural effect here */
  /* 11c30c: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11c310: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1164052));
  fn1_142518(c);
  /* 11c314: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 11c318: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 11c31c: b.ne #0x11c348 */
  if (ARC_COND(c, 1)) goto L_11c348;
  /* 11c320: nop  */
  /* nop: no architectural effect here */
  /* 11c324: adr x21, #0x15791c */
  ARC_X_W(c, 21, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 11c328: nop  */
  /* nop: no architectural effect here */
  /* 11c32c: adr x22, #0x1578f4 */
  ARC_X_W(c, 22, (arc_image_bases[1] + UINT64_C(1407220)));
L_11c330:;
  /* 11c330: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 11c334: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 11c338: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1164092));
  fn1_142530(c);
  /* 11c33c: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 11c340: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 11c344: b.eq #0x11c330 */
  if (ARC_COND(c, 0)) goto L_11c330;
L_11c348:;
  /* 11c348: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 11c34c: cbz x8, #0x11c360 */
  if ((ARC_X_R(c, 8)) == 0) goto L_11c360;
  /* 11c350: nop  */
  /* nop: no architectural effect here */
  /* 11c354: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11c358: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1164124));
  fn1_142560(c);
  /* 11c35c: b #0x11c3c0 */
  goto L_11c3c0;
L_11c360:;
  /* 11c360: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 11c364: str x24, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 24));
  /* 11c368: strb wzr, [sp, #8] */
  arc_st8(((c)->sp + INT64_C(8)), ARC_W_R(c, 31));
  /* 11c36c: str x8, [x24] */
  arc_st64(ARC_X_R(c, 24), ARC_X_R(c, 8));
  /* 11c370: nop  */
  /* nop: no architectural effect here */
  /* 11c374: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11c378: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1164156));
  fn1_142560(c);
  /* 11c37c: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 11c380: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 11c384: ldr x1, [x1, #0xc58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3160))));
  /* 11c388: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1164172));
  fn1_a2030(c);
  /* 11c38c: add w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + UINT64_C(1)));
  /* 11c390: str w8, [x24, #8] */
  arc_st32((ARC_X_R(c, 24) + INT64_C(8)), ARC_W_R(c, 8));
  /* 11c394: nop  */
  /* nop: no architectural effect here */
  /* 11c398: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11c39c: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1164192));
  fn1_142518(c);
  /* 11c3a0: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 11c3a4: stlr x8, [x24] */
  arc_st64(ARC_X_R(c, 24), ARC_X_R(c, 8));
  /* 11c3a8: nop  */
  /* nop: no architectural effect here */
  /* 11c3ac: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11c3b0: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1164212));
  fn1_142560(c);
  /* 11c3b4: nop  */
  /* nop: no architectural effect here */
  /* 11c3b8: adr x0, #0x15791c */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 11c3bc: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1164224));
  fn1_142578(c);
L_11c3c0:;
  /* 11c3c0: ldrsw x8, [x24, #8] */
  ARC_X_W(c, 8, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 24) + INT64_C(8)))));
  /* 11c3c4: adrp x1, #0x15e000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 11c3c8: add x1, x1, #0x830 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2096)));
  /* 11c3cc: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 11c3d0: sub x24, x8, #1 */
  ARC_X_W(c, 24, (ARC_X_R(c, 8) - UINT64_C(1)));
  /* 11c3d4: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1164248));
  fn1_db2e0(c);
  /* 11c3d8: ldp x8, x9, [x20, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 11c3dc: sub x9, x9, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - ARC_X_R(c, 8)));
  /* 11c3e0: asr x10, x9, #3 */
  ARC_X_W(c, 10, ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(3)) & 63))));
  /* 11c3e4: cmp x10, x24 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 24));
  /* 11c3e8: b.hi #0x11c414 */
  if (ARC_COND(c, 8)) goto L_11c414;
  /* 11c3ec: add x9, x24, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 24) + UINT64_C(1)));
  /* 11c3f0: subs x1, x9, x10 */
  ARC_X_W(c, 1, arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10)));
  /* 11c3f4: b.ls #0x11c408 */
  if (ARC_COND(c, 9)) goto L_11c408;
  /* 11c3f8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 11c3fc: bl #0x1352bc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1164288));
  fn1_1352bc(c);
  /* 11c400: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 11c404: b #0x11c414 */
  goto L_11c414;
L_11c408:;
  /* 11c408: b.hs #0x11c414 */
  if (ARC_COND(c, 2)) goto L_11c414;
  /* 11c40c: add x9, x8, x9, lsl #3 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3)));
  /* 11c410: str x9, [x20, #0x18] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(24)), ARC_X_R(c, 9));
L_11c414:;
  /* 11c414: ldr x21, [x8, x24, lsl #3] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 24)) << 3))));
  /* 11c418: cbz x21, #0x11c43c */
  if ((ARC_X_R(c, 21)) == 0) goto L_11c43c;
  /* 11c41c: add x1, x21, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(8)));
  /* 11c420: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 11c424: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1164328));
  fn1_bd950(c);
  /* 11c428: cbnz x0, #0x11c43c */
  if ((ARC_X_R(c, 0)) != 0) goto L_11c43c;
  /* 11c42c: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 11c430: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 11c434: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 11c438: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1164348));
  arc_dispatch(c, ARC_X_R(c, 8));
L_11c43c:;
  /* 11c43c: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 11c440: adrp x9, #0x151000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 11c444: nop  */
  /* nop: no architectural effect here */
  /* 11c448: adr x22, #0x15e838 */
  ARC_X_W(c, 22, (arc_image_bases[1] + UINT64_C(1435704)));
  /* 11c44c: ldr x9, [x9, #0xd40] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(3392))));
  /* 11c450: str x23, [x8, x24, lsl #3] */
  arc_st64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 24)) << 3)), ARC_X_R(c, 23));
  /* 11c454: adrp x24, #0x151000 */
  ARC_X_W(c, 24, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 11c458: add x8, x9, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) + UINT64_C(16)));
  /* 11c45c: ldr x24, [x24, #0xb68] */
  ARC_X_W(c, 24, arc_ld64((ARC_X_R(c, 24) + INT64_C(2920))));
  /* 11c460: stp x8, xzr, [x22] */
  { const uint64_t _pa = ARC_X_R(c, 22);
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 11c464: ldar x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 11c468: cmn x8, #1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0);
  /* 11c46c: b.eq #0x11c528 */
  if (ARC_COND(c, 0)) goto L_11c528;
  /* 11c470: nop  */
  /* nop: no architectural effect here */
  /* 11c474: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11c478: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1164412));
  fn1_142518(c);
  /* 11c47c: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 11c480: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 11c484: b.ne #0x11c4b0 */
  if (ARC_COND(c, 1)) goto L_11c4b0;
  /* 11c488: nop  */
  /* nop: no architectural effect here */
  /* 11c48c: adr x21, #0x15791c */
  ARC_X_W(c, 21, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 11c490: nop  */
  /* nop: no architectural effect here */
  /* 11c494: adr x23, #0x1578f4 */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1407220)));
L_11c498:;
  /* 11c498: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 11c49c: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* 11c4a0: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1164452));
  fn1_142530(c);
  /* 11c4a4: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 11c4a8: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 11c4ac: b.eq #0x11c498 */
  if (ARC_COND(c, 0)) goto L_11c498;
L_11c4b0:;
  /* 11c4b0: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 11c4b4: cbz x8, #0x11c4c8 */
  if ((ARC_X_R(c, 8)) == 0) goto L_11c4c8;
  /* 11c4b8: nop  */
  /* nop: no architectural effect here */
  /* 11c4bc: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11c4c0: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1164484));
  fn1_142560(c);
  /* 11c4c4: b #0x11c528 */
  goto L_11c528;
L_11c4c8:;
  /* 11c4c8: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 11c4cc: str x24, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 24));
  /* 11c4d0: strb wzr, [sp, #8] */
  arc_st8(((c)->sp + INT64_C(8)), ARC_W_R(c, 31));
  /* 11c4d4: str x8, [x24] */
  arc_st64(ARC_X_R(c, 24), ARC_X_R(c, 8));
  /* 11c4d8: nop  */
  /* nop: no architectural effect here */
  /* 11c4dc: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11c4e0: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1164516));
  fn1_142560(c);
  /* 11c4e4: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 11c4e8: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 11c4ec: ldr x1, [x1, #0xc58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3160))));
  /* 11c4f0: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1164532));
  fn1_a2030(c);
  /* 11c4f4: add w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + UINT64_C(1)));
  /* 11c4f8: str w8, [x24, #8] */
  arc_st32((ARC_X_R(c, 24) + INT64_C(8)), ARC_W_R(c, 8));
  /* 11c4fc: nop  */
  /* nop: no architectural effect here */
  /* 11c500: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11c504: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1164552));
  fn1_142518(c);
  /* 11c508: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 11c50c: stlr x8, [x24] */
  arc_st64(ARC_X_R(c, 24), ARC_X_R(c, 8));
  /* 11c510: nop  */
  /* nop: no architectural effect here */
  /* 11c514: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11c518: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1164572));
  fn1_142560(c);
  /* 11c51c: nop  */
  /* nop: no architectural effect here */
  /* 11c520: adr x0, #0x15791c */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 11c524: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1164584));
  fn1_142578(c);
L_11c528:;
  /* 11c528: ldrsw x8, [x24, #8] */
  ARC_X_W(c, 8, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 24) + INT64_C(8)))));
  /* 11c52c: adrp x1, #0x15e000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 11c530: add x1, x1, #0x840 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2112)));
  /* 11c534: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 11c538: sub x24, x8, #1 */
  ARC_X_W(c, 24, (ARC_X_R(c, 8) - UINT64_C(1)));
  /* 11c53c: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1164608));
  fn1_db2e0(c);
  /* 11c540: ldp x8, x9, [x20, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 11c544: sub x9, x9, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - ARC_X_R(c, 8)));
  /* 11c548: asr x10, x9, #3 */
  ARC_X_W(c, 10, ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(3)) & 63))));
  /* 11c54c: cmp x10, x24 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 24));
  /* 11c550: b.hi #0x11c57c */
  if (ARC_COND(c, 8)) goto L_11c57c;
  /* 11c554: add x9, x24, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 24) + UINT64_C(1)));
  /* 11c558: subs x1, x9, x10 */
  ARC_X_W(c, 1, arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10)));
  /* 11c55c: b.ls #0x11c570 */
  if (ARC_COND(c, 9)) goto L_11c570;
  /* 11c560: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 11c564: bl #0x1352bc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1164648));
  fn1_1352bc(c);
  /* 11c568: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 11c56c: b #0x11c57c */
  goto L_11c57c;
L_11c570:;
  /* 11c570: b.hs #0x11c57c */
  if (ARC_COND(c, 2)) goto L_11c57c;
  /* 11c574: add x9, x8, x9, lsl #3 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3)));
  /* 11c578: str x9, [x20, #0x18] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(24)), ARC_X_R(c, 9));
L_11c57c:;
  /* 11c57c: ldr x21, [x8, x24, lsl #3] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 24)) << 3))));
  /* 11c580: cbz x21, #0x11c5a4 */
  if ((ARC_X_R(c, 21)) == 0) goto L_11c5a4;
  /* 11c584: add x1, x21, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(8)));
  /* 11c588: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 11c58c: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1164688));
  fn1_bd950(c);
  /* 11c590: cbnz x0, #0x11c5a4 */
  if ((ARC_X_R(c, 0)) != 0) goto L_11c5a4;
  /* 11c594: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 11c598: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 11c59c: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 11c5a0: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1164708));
  arc_dispatch(c, ARC_X_R(c, 8));
L_11c5a4:;
  /* 11c5a4: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 11c5a8: adrp x9, #0x151000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 11c5ac: nop  */
  /* nop: no architectural effect here */
  /* 11c5b0: adr x23, #0x15e848 */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1435720)));
  /* 11c5b4: ldr x9, [x9, #0xd88] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(3464))));
  /* 11c5b8: str x22, [x8, x24, lsl #3] */
  arc_st64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 24)) << 3)), ARC_X_R(c, 22));
  /* 11c5bc: adrp x24, #0x151000 */
  ARC_X_W(c, 24, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 11c5c0: add x8, x9, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) + UINT64_C(16)));
  /* 11c5c4: ldr x24, [x24, #0xc08] */
  ARC_X_W(c, 24, arc_ld64((ARC_X_R(c, 24) + INT64_C(3080))));
  /* 11c5c8: stp x8, xzr, [x23] */
  { const uint64_t _pa = ARC_X_R(c, 23);
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 11c5cc: ldar x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 11c5d0: cmn x8, #1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0);
  /* 11c5d4: b.eq #0x11c690 */
  if (ARC_COND(c, 0)) goto L_11c690;
  /* 11c5d8: nop  */
  /* nop: no architectural effect here */
  /* 11c5dc: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11c5e0: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1164772));
  fn1_142518(c);
  /* 11c5e4: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 11c5e8: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 11c5ec: b.ne #0x11c618 */
  if (ARC_COND(c, 1)) goto L_11c618;
  /* 11c5f0: nop  */
  /* nop: no architectural effect here */
  /* 11c5f4: adr x21, #0x15791c */
  ARC_X_W(c, 21, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 11c5f8: nop  */
  /* nop: no architectural effect here */
  /* 11c5fc: adr x22, #0x1578f4 */
  ARC_X_W(c, 22, (arc_image_bases[1] + UINT64_C(1407220)));
L_11c600:;
  /* 11c600: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 11c604: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 11c608: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1164812));
  fn1_142530(c);
  /* 11c60c: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 11c610: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 11c614: b.eq #0x11c600 */
  if (ARC_COND(c, 0)) goto L_11c600;
L_11c618:;
  /* 11c618: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 11c61c: cbz x8, #0x11c630 */
  if ((ARC_X_R(c, 8)) == 0) goto L_11c630;
  /* 11c620: nop  */
  /* nop: no architectural effect here */
  /* 11c624: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11c628: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1164844));
  fn1_142560(c);
  /* 11c62c: b #0x11c690 */
  goto L_11c690;
L_11c630:;
  /* 11c630: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 11c634: str x24, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 24));
  /* 11c638: strb wzr, [sp, #8] */
  arc_st8(((c)->sp + INT64_C(8)), ARC_W_R(c, 31));
  /* 11c63c: str x8, [x24] */
  arc_st64(ARC_X_R(c, 24), ARC_X_R(c, 8));
  /* 11c640: nop  */
  /* nop: no architectural effect here */
  /* 11c644: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11c648: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1164876));
  fn1_142560(c);
  /* 11c64c: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 11c650: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 11c654: ldr x1, [x1, #0xc58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3160))));
  /* 11c658: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1164892));
  fn1_a2030(c);
  /* 11c65c: add w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + UINT64_C(1)));
  /* 11c660: str w8, [x24, #8] */
  arc_st32((ARC_X_R(c, 24) + INT64_C(8)), ARC_W_R(c, 8));
  /* 11c664: nop  */
  /* nop: no architectural effect here */
  /* 11c668: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11c66c: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1164912));
  fn1_142518(c);
  /* 11c670: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 11c674: stlr x8, [x24] */
  arc_st64(ARC_X_R(c, 24), ARC_X_R(c, 8));
  /* 11c678: nop  */
  /* nop: no architectural effect here */
  /* 11c67c: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11c680: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1164932));
  fn1_142560(c);
  /* 11c684: nop  */
  /* nop: no architectural effect here */
  /* 11c688: adr x0, #0x15791c */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 11c68c: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1164944));
  fn1_142578(c);
L_11c690:;
  /* 11c690: ldrsw x8, [x24, #8] */
  ARC_X_W(c, 8, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 24) + INT64_C(8)))));
  /* 11c694: adrp x1, #0x15e000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 11c698: add x1, x1, #0x850 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2128)));
  /* 11c69c: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 11c6a0: sub x24, x8, #1 */
  ARC_X_W(c, 24, (ARC_X_R(c, 8) - UINT64_C(1)));
  /* 11c6a4: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1164968));
  fn1_db2e0(c);
  /* 11c6a8: ldp x8, x9, [x20, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 11c6ac: sub x9, x9, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - ARC_X_R(c, 8)));
  /* 11c6b0: asr x10, x9, #3 */
  ARC_X_W(c, 10, ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(3)) & 63))));
  /* 11c6b4: cmp x10, x24 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 24));
  /* 11c6b8: b.hi #0x11c6e4 */
  if (ARC_COND(c, 8)) goto L_11c6e4;
  /* 11c6bc: add x9, x24, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 24) + UINT64_C(1)));
  /* 11c6c0: subs x1, x9, x10 */
  ARC_X_W(c, 1, arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10)));
  /* 11c6c4: b.ls #0x11c6d8 */
  if (ARC_COND(c, 9)) goto L_11c6d8;
  /* 11c6c8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 11c6cc: bl #0x1352bc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1165008));
  fn1_1352bc(c);
  /* 11c6d0: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 11c6d4: b #0x11c6e4 */
  goto L_11c6e4;
L_11c6d8:;
  /* 11c6d8: b.hs #0x11c6e4 */
  if (ARC_COND(c, 2)) goto L_11c6e4;
  /* 11c6dc: add x9, x8, x9, lsl #3 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3)));
  /* 11c6e0: str x9, [x20, #0x18] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(24)), ARC_X_R(c, 9));
L_11c6e4:;
  /* 11c6e4: ldr x21, [x8, x24, lsl #3] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 24)) << 3))));
  /* 11c6e8: cbz x21, #0x11c70c */
  if ((ARC_X_R(c, 21)) == 0) goto L_11c70c;
  /* 11c6ec: add x1, x21, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(8)));
  /* 11c6f0: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 11c6f4: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1165048));
  fn1_bd950(c);
  /* 11c6f8: cbnz x0, #0x11c70c */
  if ((ARC_X_R(c, 0)) != 0) goto L_11c70c;
  /* 11c6fc: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 11c700: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 11c704: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 11c708: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1165068));
  arc_dispatch(c, ARC_X_R(c, 8));
L_11c70c:;
  /* 11c70c: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 11c710: adrp x9, #0x151000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 11c714: nop  */
  /* nop: no architectural effect here */
  /* 11c718: adr x22, #0x15e858 */
  ARC_X_W(c, 22, (arc_image_bases[1] + UINT64_C(1435736)));
  /* 11c71c: ldr x9, [x9, #0xd90] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(3472))));
  /* 11c720: str x23, [x8, x24, lsl #3] */
  arc_st64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 24)) << 3)), ARC_X_R(c, 23));
  /* 11c724: adrp x24, #0x151000 */
  ARC_X_W(c, 24, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 11c728: add x8, x9, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) + UINT64_C(16)));
  /* 11c72c: ldr x24, [x24, #0xc10] */
  ARC_X_W(c, 24, arc_ld64((ARC_X_R(c, 24) + INT64_C(3088))));
  /* 11c730: stp x8, xzr, [x22] */
  { const uint64_t _pa = ARC_X_R(c, 22);
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 11c734: ldar x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 11c738: cmn x8, #1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0);
  /* 11c73c: b.eq #0x11c7f8 */
  if (ARC_COND(c, 0)) goto L_11c7f8;
  /* 11c740: nop  */
  /* nop: no architectural effect here */
  /* 11c744: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11c748: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1165132));
  fn1_142518(c);
  /* 11c74c: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 11c750: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 11c754: b.ne #0x11c780 */
  if (ARC_COND(c, 1)) goto L_11c780;
  /* 11c758: nop  */
  /* nop: no architectural effect here */
  /* 11c75c: adr x21, #0x15791c */
  ARC_X_W(c, 21, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 11c760: nop  */
  /* nop: no architectural effect here */
  /* 11c764: adr x23, #0x1578f4 */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1407220)));
L_11c768:;
  /* 11c768: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 11c76c: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* 11c770: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1165172));
  fn1_142530(c);
  /* 11c774: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 11c778: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 11c77c: b.eq #0x11c768 */
  if (ARC_COND(c, 0)) goto L_11c768;
L_11c780:;
  /* 11c780: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 11c784: cbz x8, #0x11c798 */
  if ((ARC_X_R(c, 8)) == 0) goto L_11c798;
  /* 11c788: nop  */
  /* nop: no architectural effect here */
  /* 11c78c: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11c790: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1165204));
  fn1_142560(c);
  /* 11c794: b #0x11c7f8 */
  goto L_11c7f8;
L_11c798:;
  /* 11c798: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 11c79c: str x24, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 24));
  /* 11c7a0: strb wzr, [sp, #8] */
  arc_st8(((c)->sp + INT64_C(8)), ARC_W_R(c, 31));
  /* 11c7a4: str x8, [x24] */
  arc_st64(ARC_X_R(c, 24), ARC_X_R(c, 8));
  /* 11c7a8: nop  */
  /* nop: no architectural effect here */
  /* 11c7ac: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11c7b0: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1165236));
  fn1_142560(c);
  /* 11c7b4: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 11c7b8: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 11c7bc: ldr x1, [x1, #0xc58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3160))));
  /* 11c7c0: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1165252));
  fn1_a2030(c);
  /* 11c7c4: add w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + UINT64_C(1)));
  /* 11c7c8: str w8, [x24, #8] */
  arc_st32((ARC_X_R(c, 24) + INT64_C(8)), ARC_W_R(c, 8));
  /* 11c7cc: nop  */
  /* nop: no architectural effect here */
  /* 11c7d0: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11c7d4: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1165272));
  fn1_142518(c);
  /* 11c7d8: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 11c7dc: stlr x8, [x24] */
  arc_st64(ARC_X_R(c, 24), ARC_X_R(c, 8));
  /* 11c7e0: nop  */
  /* nop: no architectural effect here */
  /* 11c7e4: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11c7e8: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1165292));
  fn1_142560(c);
  /* 11c7ec: nop  */
  /* nop: no architectural effect here */
  /* 11c7f0: adr x0, #0x15791c */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 11c7f4: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1165304));
  fn1_142578(c);
L_11c7f8:;
  /* 11c7f8: ldrsw x8, [x24, #8] */
  ARC_X_W(c, 8, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 24) + INT64_C(8)))));
  /* 11c7fc: adrp x1, #0x15e000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 11c800: add x1, x1, #0x860 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2144)));
  /* 11c804: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 11c808: sub x24, x8, #1 */
  ARC_X_W(c, 24, (ARC_X_R(c, 8) - UINT64_C(1)));
  /* 11c80c: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1165328));
  fn1_db2e0(c);
  /* 11c810: ldp x8, x9, [x20, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 11c814: sub x9, x9, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - ARC_X_R(c, 8)));
  /* 11c818: asr x10, x9, #3 */
  ARC_X_W(c, 10, ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(3)) & 63))));
  /* 11c81c: cmp x10, x24 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 24));
  /* 11c820: b.hi #0x11c84c */
  if (ARC_COND(c, 8)) goto L_11c84c;
  /* 11c824: add x9, x24, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 24) + UINT64_C(1)));
  /* 11c828: subs x1, x9, x10 */
  ARC_X_W(c, 1, arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10)));
  /* 11c82c: b.ls #0x11c840 */
  if (ARC_COND(c, 9)) goto L_11c840;
  /* 11c830: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 11c834: bl #0x1352bc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1165368));
  fn1_1352bc(c);
  /* 11c838: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 11c83c: b #0x11c84c */
  goto L_11c84c;
L_11c840:;
  /* 11c840: b.hs #0x11c84c */
  if (ARC_COND(c, 2)) goto L_11c84c;
  /* 11c844: add x9, x8, x9, lsl #3 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3)));
  /* 11c848: str x9, [x20, #0x18] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(24)), ARC_X_R(c, 9));
L_11c84c:;
  /* 11c84c: ldr x21, [x8, x24, lsl #3] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 24)) << 3))));
  /* 11c850: cbz x21, #0x11c874 */
  if ((ARC_X_R(c, 21)) == 0) goto L_11c874;
  /* 11c854: add x1, x21, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(8)));
  /* 11c858: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 11c85c: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1165408));
  fn1_bd950(c);
  /* 11c860: cbnz x0, #0x11c874 */
  if ((ARC_X_R(c, 0)) != 0) goto L_11c874;
  /* 11c864: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 11c868: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 11c86c: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 11c870: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1165428));
  arc_dispatch(c, ARC_X_R(c, 8));
L_11c874:;
  /* 11c874: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 11c878: adrp x9, #0x151000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 11c87c: nop  */
  /* nop: no architectural effect here */
  /* 11c880: adr x23, #0x15e868 */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1435752)));
  /* 11c884: ldr x9, [x9, #0xd98] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(3480))));
  /* 11c888: str x22, [x8, x24, lsl #3] */
  arc_st64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 24)) << 3)), ARC_X_R(c, 22));
  /* 11c88c: adrp x24, #0x151000 */
  ARC_X_W(c, 24, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 11c890: add x8, x9, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) + UINT64_C(16)));
  /* 11c894: ldr x24, [x24, #0xc18] */
  ARC_X_W(c, 24, arc_ld64((ARC_X_R(c, 24) + INT64_C(3096))));
  /* 11c898: stp x8, xzr, [x23] */
  { const uint64_t _pa = ARC_X_R(c, 23);
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 11c89c: ldar x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 11c8a0: cmn x8, #1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0);
  /* 11c8a4: b.eq #0x11c960 */
  if (ARC_COND(c, 0)) goto L_11c960;
  /* 11c8a8: nop  */
  /* nop: no architectural effect here */
  /* 11c8ac: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11c8b0: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1165492));
  fn1_142518(c);
  /* 11c8b4: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 11c8b8: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 11c8bc: b.ne #0x11c8e8 */
  if (ARC_COND(c, 1)) goto L_11c8e8;
  /* 11c8c0: nop  */
  /* nop: no architectural effect here */
  /* 11c8c4: adr x21, #0x15791c */
  ARC_X_W(c, 21, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 11c8c8: nop  */
  /* nop: no architectural effect here */
  /* 11c8cc: adr x22, #0x1578f4 */
  ARC_X_W(c, 22, (arc_image_bases[1] + UINT64_C(1407220)));
L_11c8d0:;
  /* 11c8d0: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 11c8d4: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 11c8d8: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1165532));
  fn1_142530(c);
  /* 11c8dc: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 11c8e0: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 11c8e4: b.eq #0x11c8d0 */
  if (ARC_COND(c, 0)) goto L_11c8d0;
L_11c8e8:;
  /* 11c8e8: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 11c8ec: cbz x8, #0x11c900 */
  if ((ARC_X_R(c, 8)) == 0) goto L_11c900;
  /* 11c8f0: nop  */
  /* nop: no architectural effect here */
  /* 11c8f4: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11c8f8: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1165564));
  fn1_142560(c);
  /* 11c8fc: b #0x11c960 */
  goto L_11c960;
L_11c900:;
  /* 11c900: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 11c904: str x24, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 24));
  /* 11c908: strb wzr, [sp, #8] */
  arc_st8(((c)->sp + INT64_C(8)), ARC_W_R(c, 31));
  /* 11c90c: str x8, [x24] */
  arc_st64(ARC_X_R(c, 24), ARC_X_R(c, 8));
  /* 11c910: nop  */
  /* nop: no architectural effect here */
  /* 11c914: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11c918: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1165596));
  fn1_142560(c);
  /* 11c91c: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 11c920: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 11c924: ldr x1, [x1, #0xc58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3160))));
  /* 11c928: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1165612));
  fn1_a2030(c);
  /* 11c92c: add w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + UINT64_C(1)));
  /* 11c930: str w8, [x24, #8] */
  arc_st32((ARC_X_R(c, 24) + INT64_C(8)), ARC_W_R(c, 8));
  /* 11c934: nop  */
  /* nop: no architectural effect here */
  /* 11c938: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11c93c: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1165632));
  fn1_142518(c);
  /* 11c940: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 11c944: stlr x8, [x24] */
  arc_st64(ARC_X_R(c, 24), ARC_X_R(c, 8));
  /* 11c948: nop  */
  /* nop: no architectural effect here */
  /* 11c94c: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11c950: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1165652));
  fn1_142560(c);
  /* 11c954: nop  */
  /* nop: no architectural effect here */
  /* 11c958: adr x0, #0x15791c */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 11c95c: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1165664));
  fn1_142578(c);
L_11c960:;
  /* 11c960: ldrsw x8, [x24, #8] */
  ARC_X_W(c, 8, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 24) + INT64_C(8)))));
  /* 11c964: adrp x1, #0x15e000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 11c968: add x1, x1, #0x870 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2160)));
  /* 11c96c: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 11c970: sub x24, x8, #1 */
  ARC_X_W(c, 24, (ARC_X_R(c, 8) - UINT64_C(1)));
  /* 11c974: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1165688));
  fn1_db2e0(c);
  /* 11c978: ldp x8, x9, [x20, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 11c97c: sub x9, x9, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - ARC_X_R(c, 8)));
  /* 11c980: asr x10, x9, #3 */
  ARC_X_W(c, 10, ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(3)) & 63))));
  /* 11c984: cmp x10, x24 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 24));
  /* 11c988: b.hi #0x11c9b4 */
  if (ARC_COND(c, 8)) goto L_11c9b4;
  /* 11c98c: add x9, x24, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 24) + UINT64_C(1)));
  /* 11c990: subs x1, x9, x10 */
  ARC_X_W(c, 1, arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10)));
  /* 11c994: b.ls #0x11c9a8 */
  if (ARC_COND(c, 9)) goto L_11c9a8;
  /* 11c998: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 11c99c: bl #0x1352bc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1165728));
  fn1_1352bc(c);
  /* 11c9a0: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 11c9a4: b #0x11c9b4 */
  goto L_11c9b4;
L_11c9a8:;
  /* 11c9a8: b.hs #0x11c9b4 */
  if (ARC_COND(c, 2)) goto L_11c9b4;
  /* 11c9ac: add x9, x8, x9, lsl #3 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3)));
  /* 11c9b0: str x9, [x20, #0x18] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(24)), ARC_X_R(c, 9));
L_11c9b4:;
  /* 11c9b4: ldr x21, [x8, x24, lsl #3] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 24)) << 3))));
  /* 11c9b8: cbz x21, #0x11c9dc */
  if ((ARC_X_R(c, 21)) == 0) goto L_11c9dc;
  /* 11c9bc: add x1, x21, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(8)));
  /* 11c9c0: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 11c9c4: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1165768));
  fn1_bd950(c);
  /* 11c9c8: cbnz x0, #0x11c9dc */
  if ((ARC_X_R(c, 0)) != 0) goto L_11c9dc;
  /* 11c9cc: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 11c9d0: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 11c9d4: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 11c9d8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1165788));
  arc_dispatch(c, ARC_X_R(c, 8));
L_11c9dc:;
  /* 11c9dc: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 11c9e0: adrp x9, #0x151000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 11c9e4: nop  */
  /* nop: no architectural effect here */
  /* 11c9e8: adr x22, #0x15e878 */
  ARC_X_W(c, 22, (arc_image_bases[1] + UINT64_C(1435768)));
  /* 11c9ec: ldr x9, [x9, #0xda0] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(3488))));
  /* 11c9f0: str x23, [x8, x24, lsl #3] */
  arc_st64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 24)) << 3)), ARC_X_R(c, 23));
  /* 11c9f4: adrp x24, #0x151000 */
  ARC_X_W(c, 24, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 11c9f8: add x8, x9, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) + UINT64_C(16)));
  /* 11c9fc: ldr x24, [x24, #0xc20] */
  ARC_X_W(c, 24, arc_ld64((ARC_X_R(c, 24) + INT64_C(3104))));
  /* 11ca00: stp x8, xzr, [x22] */
  { const uint64_t _pa = ARC_X_R(c, 22);
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 11ca04: ldar x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 11ca08: cmn x8, #1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0);
  /* 11ca0c: b.eq #0x11cac8 */
  if (ARC_COND(c, 0)) goto L_11cac8;
  /* 11ca10: nop  */
  /* nop: no architectural effect here */
  /* 11ca14: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11ca18: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1165852));
  fn1_142518(c);
  /* 11ca1c: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 11ca20: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 11ca24: b.ne #0x11ca50 */
  if (ARC_COND(c, 1)) goto L_11ca50;
  /* 11ca28: nop  */
  /* nop: no architectural effect here */
  /* 11ca2c: adr x21, #0x15791c */
  ARC_X_W(c, 21, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 11ca30: nop  */
  /* nop: no architectural effect here */
  /* 11ca34: adr x23, #0x1578f4 */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1407220)));
L_11ca38:;
  /* 11ca38: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 11ca3c: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* 11ca40: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1165892));
  fn1_142530(c);
  /* 11ca44: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 11ca48: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 11ca4c: b.eq #0x11ca38 */
  if (ARC_COND(c, 0)) goto L_11ca38;
L_11ca50:;
  /* 11ca50: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 11ca54: cbz x8, #0x11ca68 */
  if ((ARC_X_R(c, 8)) == 0) goto L_11ca68;
  /* 11ca58: nop  */
  /* nop: no architectural effect here */
  /* 11ca5c: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11ca60: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1165924));
  fn1_142560(c);
  /* 11ca64: b #0x11cac8 */
  goto L_11cac8;
L_11ca68:;
  /* 11ca68: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 11ca6c: str x24, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 24));
  /* 11ca70: strb wzr, [sp, #8] */
  arc_st8(((c)->sp + INT64_C(8)), ARC_W_R(c, 31));
  /* 11ca74: str x8, [x24] */
  arc_st64(ARC_X_R(c, 24), ARC_X_R(c, 8));
  /* 11ca78: nop  */
  /* nop: no architectural effect here */
  /* 11ca7c: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11ca80: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1165956));
  fn1_142560(c);
  /* 11ca84: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 11ca88: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 11ca8c: ldr x1, [x1, #0xc58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3160))));
  /* 11ca90: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1165972));
  fn1_a2030(c);
  /* 11ca94: add w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + UINT64_C(1)));
  /* 11ca98: str w8, [x24, #8] */
  arc_st32((ARC_X_R(c, 24) + INT64_C(8)), ARC_W_R(c, 8));
  /* 11ca9c: nop  */
  /* nop: no architectural effect here */
  /* 11caa0: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11caa4: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1165992));
  fn1_142518(c);
  /* 11caa8: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 11caac: stlr x8, [x24] */
  arc_st64(ARC_X_R(c, 24), ARC_X_R(c, 8));
  /* 11cab0: nop  */
  /* nop: no architectural effect here */
  /* 11cab4: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11cab8: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1166012));
  fn1_142560(c);
  /* 11cabc: nop  */
  /* nop: no architectural effect here */
  /* 11cac0: adr x0, #0x15791c */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 11cac4: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1166024));
  fn1_142578(c);
L_11cac8:;
  /* 11cac8: ldrsw x8, [x24, #8] */
  ARC_X_W(c, 8, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 24) + INT64_C(8)))));
  /* 11cacc: adrp x1, #0x15e000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 11cad0: add x1, x1, #0x880 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2176)));
  /* 11cad4: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 11cad8: sub x24, x8, #1 */
  ARC_X_W(c, 24, (ARC_X_R(c, 8) - UINT64_C(1)));
  /* 11cadc: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1166048));
  fn1_db2e0(c);
  /* 11cae0: ldp x8, x9, [x20, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 11cae4: sub x9, x9, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - ARC_X_R(c, 8)));
  /* 11cae8: asr x10, x9, #3 */
  ARC_X_W(c, 10, ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(3)) & 63))));
  /* 11caec: cmp x10, x24 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 24));
  /* 11caf0: b.hi #0x11cb1c */
  if (ARC_COND(c, 8)) goto L_11cb1c;
  /* 11caf4: add x9, x24, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 24) + UINT64_C(1)));
  /* 11caf8: subs x1, x9, x10 */
  ARC_X_W(c, 1, arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10)));
  /* 11cafc: b.ls #0x11cb10 */
  if (ARC_COND(c, 9)) goto L_11cb10;
  /* 11cb00: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 11cb04: bl #0x1352bc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1166088));
  fn1_1352bc(c);
  /* 11cb08: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 11cb0c: b #0x11cb1c */
  goto L_11cb1c;
L_11cb10:;
  /* 11cb10: b.hs #0x11cb1c */
  if (ARC_COND(c, 2)) goto L_11cb1c;
  /* 11cb14: add x9, x8, x9, lsl #3 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3)));
  /* 11cb18: str x9, [x20, #0x18] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(24)), ARC_X_R(c, 9));
L_11cb1c:;
  /* 11cb1c: ldr x21, [x8, x24, lsl #3] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 24)) << 3))));
  /* 11cb20: cbz x21, #0x11cb44 */
  if ((ARC_X_R(c, 21)) == 0) goto L_11cb44;
  /* 11cb24: add x1, x21, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(8)));
  /* 11cb28: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 11cb2c: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1166128));
  fn1_bd950(c);
  /* 11cb30: cbnz x0, #0x11cb44 */
  if ((ARC_X_R(c, 0)) != 0) goto L_11cb44;
  /* 11cb34: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 11cb38: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 11cb3c: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 11cb40: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1166148));
  arc_dispatch(c, ARC_X_R(c, 8));
L_11cb44:;
  /* 11cb44: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 11cb48: adrp x9, #0x151000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 11cb4c: nop  */
  /* nop: no architectural effect here */
  /* 11cb50: adr x23, #0x15e888 */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1435784)));
  /* 11cb54: ldr x9, [x9, #0xdc8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(3528))));
  /* 11cb58: str x22, [x8, x24, lsl #3] */
  arc_st64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 24)) << 3)), ARC_X_R(c, 22));
  /* 11cb5c: adrp x24, #0x151000 */
  ARC_X_W(c, 24, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 11cb60: add x8, x9, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) + UINT64_C(16)));
  /* 11cb64: ldr x24, [x24, #0xc28] */
  ARC_X_W(c, 24, arc_ld64((ARC_X_R(c, 24) + INT64_C(3112))));
  /* 11cb68: stp x8, xzr, [x23] */
  { const uint64_t _pa = ARC_X_R(c, 23);
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 11cb6c: ldar x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 11cb70: cmn x8, #1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0);
  /* 11cb74: b.eq #0x11cc30 */
  if (ARC_COND(c, 0)) goto L_11cc30;
  /* 11cb78: nop  */
  /* nop: no architectural effect here */
  /* 11cb7c: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11cb80: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1166212));
  fn1_142518(c);
  /* 11cb84: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 11cb88: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 11cb8c: b.ne #0x11cbb8 */
  if (ARC_COND(c, 1)) goto L_11cbb8;
  /* 11cb90: nop  */
  /* nop: no architectural effect here */
  /* 11cb94: adr x21, #0x15791c */
  ARC_X_W(c, 21, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 11cb98: nop  */
  /* nop: no architectural effect here */
  /* 11cb9c: adr x22, #0x1578f4 */
  ARC_X_W(c, 22, (arc_image_bases[1] + UINT64_C(1407220)));
L_11cba0:;
  /* 11cba0: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 11cba4: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 11cba8: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1166252));
  fn1_142530(c);
  /* 11cbac: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 11cbb0: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 11cbb4: b.eq #0x11cba0 */
  if (ARC_COND(c, 0)) goto L_11cba0;
L_11cbb8:;
  /* 11cbb8: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 11cbbc: cbz x8, #0x11cbd0 */
  if ((ARC_X_R(c, 8)) == 0) goto L_11cbd0;
  /* 11cbc0: nop  */
  /* nop: no architectural effect here */
  /* 11cbc4: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11cbc8: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1166284));
  fn1_142560(c);
  /* 11cbcc: b #0x11cc30 */
  goto L_11cc30;
L_11cbd0:;
  /* 11cbd0: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 11cbd4: str x24, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 24));
  /* 11cbd8: strb wzr, [sp, #8] */
  arc_st8(((c)->sp + INT64_C(8)), ARC_W_R(c, 31));
  /* 11cbdc: str x8, [x24] */
  arc_st64(ARC_X_R(c, 24), ARC_X_R(c, 8));
  /* 11cbe0: nop  */
  /* nop: no architectural effect here */
  /* 11cbe4: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11cbe8: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1166316));
  fn1_142560(c);
  /* 11cbec: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 11cbf0: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 11cbf4: ldr x1, [x1, #0xc58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3160))));
  /* 11cbf8: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1166332));
  fn1_a2030(c);
  /* 11cbfc: add w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + UINT64_C(1)));
  /* 11cc00: str w8, [x24, #8] */
  arc_st32((ARC_X_R(c, 24) + INT64_C(8)), ARC_W_R(c, 8));
  /* 11cc04: nop  */
  /* nop: no architectural effect here */
  /* 11cc08: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11cc0c: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1166352));
  fn1_142518(c);
  /* 11cc10: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 11cc14: stlr x8, [x24] */
  arc_st64(ARC_X_R(c, 24), ARC_X_R(c, 8));
  /* 11cc18: nop  */
  /* nop: no architectural effect here */
  /* 11cc1c: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11cc20: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1166372));
  fn1_142560(c);
  /* 11cc24: nop  */
  /* nop: no architectural effect here */
  /* 11cc28: adr x0, #0x15791c */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 11cc2c: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1166384));
  fn1_142578(c);
L_11cc30:;
  /* 11cc30: ldrsw x8, [x24, #8] */
  ARC_X_W(c, 8, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 24) + INT64_C(8)))));
  /* 11cc34: adrp x1, #0x15e000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 11cc38: add x1, x1, #0x890 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2192)));
  /* 11cc3c: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 11cc40: sub x24, x8, #1 */
  ARC_X_W(c, 24, (ARC_X_R(c, 8) - UINT64_C(1)));
  /* 11cc44: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1166408));
  fn1_db2e0(c);
  /* 11cc48: ldp x8, x9, [x20, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 11cc4c: sub x9, x9, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - ARC_X_R(c, 8)));
  /* 11cc50: asr x10, x9, #3 */
  ARC_X_W(c, 10, ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(3)) & 63))));
  /* 11cc54: cmp x10, x24 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 24));
  /* 11cc58: b.hi #0x11cc84 */
  if (ARC_COND(c, 8)) goto L_11cc84;
  /* 11cc5c: add x9, x24, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 24) + UINT64_C(1)));
  /* 11cc60: subs x1, x9, x10 */
  ARC_X_W(c, 1, arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10)));
  /* 11cc64: b.ls #0x11cc78 */
  if (ARC_COND(c, 9)) goto L_11cc78;
  /* 11cc68: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 11cc6c: bl #0x1352bc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1166448));
  fn1_1352bc(c);
  /* 11cc70: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 11cc74: b #0x11cc84 */
  goto L_11cc84;
L_11cc78:;
  /* 11cc78: b.hs #0x11cc84 */
  if (ARC_COND(c, 2)) goto L_11cc84;
  /* 11cc7c: add x9, x8, x9, lsl #3 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3)));
  /* 11cc80: str x9, [x20, #0x18] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(24)), ARC_X_R(c, 9));
L_11cc84:;
  /* 11cc84: ldr x21, [x8, x24, lsl #3] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 24)) << 3))));
  /* 11cc88: cbz x21, #0x11ccac */
  if ((ARC_X_R(c, 21)) == 0) goto L_11ccac;
  /* 11cc8c: add x1, x21, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(8)));
  /* 11cc90: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 11cc94: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1166488));
  fn1_bd950(c);
  /* 11cc98: cbnz x0, #0x11ccac */
  if ((ARC_X_R(c, 0)) != 0) goto L_11ccac;
  /* 11cc9c: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 11cca0: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 11cca4: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 11cca8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1166508));
  arc_dispatch(c, ARC_X_R(c, 8));
L_11ccac:;
  /* 11ccac: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 11ccb0: adrp x9, #0x151000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 11ccb4: nop  */
  /* nop: no architectural effect here */
  /* 11ccb8: adr x22, #0x15e898 */
  ARC_X_W(c, 22, (arc_image_bases[1] + UINT64_C(1435800)));
  /* 11ccbc: ldr x9, [x9, #0xdd0] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(3536))));
  /* 11ccc0: str x23, [x8, x24, lsl #3] */
  arc_st64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 24)) << 3)), ARC_X_R(c, 23));
  /* 11ccc4: adrp x24, #0x151000 */
  ARC_X_W(c, 24, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 11ccc8: add x8, x9, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) + UINT64_C(16)));
  /* 11cccc: ldr x24, [x24, #0xc30] */
  ARC_X_W(c, 24, arc_ld64((ARC_X_R(c, 24) + INT64_C(3120))));
  /* 11ccd0: stp x8, xzr, [x22] */
  { const uint64_t _pa = ARC_X_R(c, 22);
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 11ccd4: ldar x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 11ccd8: cmn x8, #1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0);
  /* 11ccdc: b.eq #0x11cd98 */
  if (ARC_COND(c, 0)) goto L_11cd98;
  /* 11cce0: nop  */
  /* nop: no architectural effect here */
  /* 11cce4: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11cce8: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1166572));
  fn1_142518(c);
  /* 11ccec: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 11ccf0: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 11ccf4: b.ne #0x11cd20 */
  if (ARC_COND(c, 1)) goto L_11cd20;
  /* 11ccf8: nop  */
  /* nop: no architectural effect here */
  /* 11ccfc: adr x21, #0x15791c */
  ARC_X_W(c, 21, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 11cd00: nop  */
  /* nop: no architectural effect here */
  /* 11cd04: adr x23, #0x1578f4 */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1407220)));
L_11cd08:;
  /* 11cd08: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 11cd0c: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* 11cd10: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1166612));
  fn1_142530(c);
  /* 11cd14: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 11cd18: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 11cd1c: b.eq #0x11cd08 */
  if (ARC_COND(c, 0)) goto L_11cd08;
L_11cd20:;
  /* 11cd20: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 11cd24: cbz x8, #0x11cd38 */
  if ((ARC_X_R(c, 8)) == 0) goto L_11cd38;
  /* 11cd28: nop  */
  /* nop: no architectural effect here */
  /* 11cd2c: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11cd30: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1166644));
  fn1_142560(c);
  /* 11cd34: b #0x11cd98 */
  goto L_11cd98;
L_11cd38:;
  /* 11cd38: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 11cd3c: str x24, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 24));
  /* 11cd40: strb wzr, [sp, #8] */
  arc_st8(((c)->sp + INT64_C(8)), ARC_W_R(c, 31));
  /* 11cd44: str x8, [x24] */
  arc_st64(ARC_X_R(c, 24), ARC_X_R(c, 8));
  /* 11cd48: nop  */
  /* nop: no architectural effect here */
  /* 11cd4c: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11cd50: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1166676));
  fn1_142560(c);
  /* 11cd54: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 11cd58: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 11cd5c: ldr x1, [x1, #0xc58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3160))));
  /* 11cd60: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1166692));
  fn1_a2030(c);
  /* 11cd64: add w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + UINT64_C(1)));
  /* 11cd68: str w8, [x24, #8] */
  arc_st32((ARC_X_R(c, 24) + INT64_C(8)), ARC_W_R(c, 8));
  /* 11cd6c: nop  */
  /* nop: no architectural effect here */
  /* 11cd70: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11cd74: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1166712));
  fn1_142518(c);
  /* 11cd78: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 11cd7c: stlr x8, [x24] */
  arc_st64(ARC_X_R(c, 24), ARC_X_R(c, 8));
  /* 11cd80: nop  */
  /* nop: no architectural effect here */
  /* 11cd84: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11cd88: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1166732));
  fn1_142560(c);
  /* 11cd8c: nop  */
  /* nop: no architectural effect here */
  /* 11cd90: adr x0, #0x15791c */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 11cd94: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1166744));
  fn1_142578(c);
L_11cd98:;
  /* 11cd98: ldrsw x8, [x24, #8] */
  ARC_X_W(c, 8, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 24) + INT64_C(8)))));
  /* 11cd9c: adrp x1, #0x15e000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 11cda0: add x1, x1, #0x8a0 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2208)));
  /* 11cda4: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 11cda8: sub x23, x8, #1 */
  ARC_X_W(c, 23, (ARC_X_R(c, 8) - UINT64_C(1)));
  /* 11cdac: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1166768));
  fn1_db2e0(c);
  /* 11cdb0: ldp x8, x9, [x20, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 11cdb4: sub x9, x9, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - ARC_X_R(c, 8)));
  /* 11cdb8: asr x10, x9, #3 */
  ARC_X_W(c, 10, ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(3)) & 63))));
  /* 11cdbc: cmp x10, x23 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 23));
  /* 11cdc0: b.hi #0x11cdec */
  if (ARC_COND(c, 8)) goto L_11cdec;
  /* 11cdc4: add x9, x23, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 23) + UINT64_C(1)));
  /* 11cdc8: subs x1, x9, x10 */
  ARC_X_W(c, 1, arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10)));
  /* 11cdcc: b.ls #0x11cde0 */
  if (ARC_COND(c, 9)) goto L_11cde0;
  /* 11cdd0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 11cdd4: bl #0x1352bc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1166808));
  fn1_1352bc(c);
  /* 11cdd8: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 11cddc: b #0x11cdec */
  goto L_11cdec;
L_11cde0:;
  /* 11cde0: b.hs #0x11cdec */
  if (ARC_COND(c, 2)) goto L_11cdec;
  /* 11cde4: add x9, x8, x9, lsl #3 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3)));
  /* 11cde8: str x9, [x20, #0x18] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(24)), ARC_X_R(c, 9));
L_11cdec:;
  /* 11cdec: ldr x21, [x8, x23, lsl #3] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 23)) << 3))));
  /* 11cdf0: cbz x21, #0x11ce14 */
  if ((ARC_X_R(c, 21)) == 0) goto L_11ce14;
  /* 11cdf4: add x1, x21, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(8)));
  /* 11cdf8: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 11cdfc: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1166848));
  fn1_bd950(c);
  /* 11ce00: cbnz x0, #0x11ce14 */
  if ((ARC_X_R(c, 0)) != 0) goto L_11ce14;
  /* 11ce04: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 11ce08: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 11ce0c: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 11ce10: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1166868));
  arc_dispatch(c, ARC_X_R(c, 8));
L_11ce14:;
  /* 11ce14: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 11ce18: adrp x9, #0x151000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 11ce1c: nop  */
  /* nop: no architectural effect here */
  /* 11ce20: adr x24, #0x15e8a8 */
  ARC_X_W(c, 24, (arc_image_bases[1] + UINT64_C(1435816)));
  /* 11ce24: ldr x9, [x9, #0xdd8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(3544))));
  /* 11ce28: str x22, [x8, x23, lsl #3] */
  arc_st64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 23)) << 3)), ARC_X_R(c, 22));
  /* 11ce2c: adrp x23, #0x151000 */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 11ce30: add x8, x9, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) + UINT64_C(16)));
  /* 11ce34: ldr x23, [x23, #0xc38] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 23) + INT64_C(3128))));
  /* 11ce38: stp x8, xzr, [x24] */
  { const uint64_t _pa = ARC_X_R(c, 24);
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 11ce3c: ldar x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 11ce40: cmn x8, #1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0);
  /* 11ce44: b.eq #0x11cf00 */
  if (ARC_COND(c, 0)) goto L_11cf00;
  /* 11ce48: nop  */
  /* nop: no architectural effect here */
  /* 11ce4c: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11ce50: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1166932));
  fn1_142518(c);
  /* 11ce54: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 11ce58: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 11ce5c: b.ne #0x11ce88 */
  if (ARC_COND(c, 1)) goto L_11ce88;
  /* 11ce60: nop  */
  /* nop: no architectural effect here */
  /* 11ce64: adr x21, #0x15791c */
  ARC_X_W(c, 21, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 11ce68: nop  */
  /* nop: no architectural effect here */
  /* 11ce6c: adr x22, #0x1578f4 */
  ARC_X_W(c, 22, (arc_image_bases[1] + UINT64_C(1407220)));
L_11ce70:;
  /* 11ce70: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 11ce74: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 11ce78: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1166972));
  fn1_142530(c);
  /* 11ce7c: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 11ce80: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 11ce84: b.eq #0x11ce70 */
  if (ARC_COND(c, 0)) goto L_11ce70;
L_11ce88:;
  /* 11ce88: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 11ce8c: cbz x8, #0x11cea0 */
  if ((ARC_X_R(c, 8)) == 0) goto L_11cea0;
  /* 11ce90: nop  */
  /* nop: no architectural effect here */
  /* 11ce94: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11ce98: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1167004));
  fn1_142560(c);
  /* 11ce9c: b #0x11cf00 */
  goto L_11cf00;
L_11cea0:;
  /* 11cea0: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 11cea4: str x23, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 23));
  /* 11cea8: strb wzr, [sp, #8] */
  arc_st8(((c)->sp + INT64_C(8)), ARC_W_R(c, 31));
  /* 11ceac: str x8, [x23] */
  arc_st64(ARC_X_R(c, 23), ARC_X_R(c, 8));
  /* 11ceb0: nop  */
  /* nop: no architectural effect here */
  /* 11ceb4: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11ceb8: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1167036));
  fn1_142560(c);
  /* 11cebc: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 11cec0: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 11cec4: ldr x1, [x1, #0xc58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3160))));
  /* 11cec8: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1167052));
  fn1_a2030(c);
  /* 11cecc: add w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + UINT64_C(1)));
  /* 11ced0: str w8, [x23, #8] */
  arc_st32((ARC_X_R(c, 23) + INT64_C(8)), ARC_W_R(c, 8));
  /* 11ced4: nop  */
  /* nop: no architectural effect here */
  /* 11ced8: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11cedc: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1167072));
  fn1_142518(c);
  /* 11cee0: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 11cee4: stlr x8, [x23] */
  arc_st64(ARC_X_R(c, 23), ARC_X_R(c, 8));
  /* 11cee8: nop  */
  /* nop: no architectural effect here */
  /* 11ceec: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11cef0: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1167092));
  fn1_142560(c);
  /* 11cef4: nop  */
  /* nop: no architectural effect here */
  /* 11cef8: adr x0, #0x15791c */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 11cefc: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1167104));
  fn1_142578(c);
L_11cf00:;
  /* 11cf00: ldrsw x8, [x23, #8] */
  ARC_X_W(c, 8, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 23) + INT64_C(8)))));
  /* 11cf04: adrp x1, #0x15e000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 11cf08: add x1, x1, #0x8b0 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2224)));
  /* 11cf0c: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 11cf10: sub x22, x8, #1 */
  ARC_X_W(c, 22, (ARC_X_R(c, 8) - UINT64_C(1)));
  /* 11cf14: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1167128));
  fn1_db2e0(c);
  /* 11cf18: ldp x8, x9, [x20, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 11cf1c: sub x9, x9, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - ARC_X_R(c, 8)));
  /* 11cf20: asr x10, x9, #3 */
  ARC_X_W(c, 10, ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(3)) & 63))));
  /* 11cf24: cmp x10, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 22));
  /* 11cf28: b.hi #0x11cf54 */
  if (ARC_COND(c, 8)) goto L_11cf54;
  /* 11cf2c: add x9, x22, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 22) + UINT64_C(1)));
  /* 11cf30: subs x1, x9, x10 */
  ARC_X_W(c, 1, arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10)));
  /* 11cf34: b.ls #0x11cf48 */
  if (ARC_COND(c, 9)) goto L_11cf48;
  /* 11cf38: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 11cf3c: bl #0x1352bc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1167168));
  fn1_1352bc(c);
  /* 11cf40: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 11cf44: b #0x11cf54 */
  goto L_11cf54;
L_11cf48:;
  /* 11cf48: b.hs #0x11cf54 */
  if (ARC_COND(c, 2)) goto L_11cf54;
  /* 11cf4c: add x9, x8, x9, lsl #3 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3)));
  /* 11cf50: str x9, [x20, #0x18] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(24)), ARC_X_R(c, 9));
L_11cf54:;
  /* 11cf54: ldr x21, [x8, x22, lsl #3] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 22)) << 3))));
  /* 11cf58: cbz x21, #0x11cf7c */
  if ((ARC_X_R(c, 21)) == 0) goto L_11cf7c;
  /* 11cf5c: add x1, x21, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(8)));
  /* 11cf60: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 11cf64: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1167208));
  fn1_bd950(c);
  /* 11cf68: cbnz x0, #0x11cf7c */
  if ((ARC_X_R(c, 0)) != 0) goto L_11cf7c;
  /* 11cf6c: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 11cf70: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 11cf74: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 11cf78: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1167228));
  arc_dispatch(c, ARC_X_R(c, 8));
L_11cf7c:;
  /* 11cf7c: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 11cf80: adrp x9, #0x151000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 11cf84: nop  */
  /* nop: no architectural effect here */
  /* 11cf88: adr x23, #0x15e8b8 */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1435832)));
  /* 11cf8c: ldr x9, [x9, #0xde0] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(3552))));
  /* 11cf90: str x24, [x8, x22, lsl #3] */
  arc_st64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 22)) << 3)), ARC_X_R(c, 24));
  /* 11cf94: adrp x24, #0x151000 */
  ARC_X_W(c, 24, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 11cf98: add x8, x9, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) + UINT64_C(16)));
  /* 11cf9c: ldr x24, [x24, #0xc40] */
  ARC_X_W(c, 24, arc_ld64((ARC_X_R(c, 24) + INT64_C(3136))));
  /* 11cfa0: stp x8, xzr, [x23] */
  { const uint64_t _pa = ARC_X_R(c, 23);
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 11cfa4: ldar x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 11cfa8: cmn x8, #1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0);
  /* 11cfac: b.eq #0x11d068 */
  if (ARC_COND(c, 0)) goto L_11d068;
  /* 11cfb0: nop  */
  /* nop: no architectural effect here */
  /* 11cfb4: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11cfb8: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1167292));
  fn1_142518(c);
  /* 11cfbc: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 11cfc0: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 11cfc4: b.ne #0x11cff0 */
  if (ARC_COND(c, 1)) goto L_11cff0;
  /* 11cfc8: nop  */
  /* nop: no architectural effect here */
  /* 11cfcc: adr x21, #0x15791c */
  ARC_X_W(c, 21, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 11cfd0: nop  */
  /* nop: no architectural effect here */
  /* 11cfd4: adr x22, #0x1578f4 */
  ARC_X_W(c, 22, (arc_image_bases[1] + UINT64_C(1407220)));
L_11cfd8:;
  /* 11cfd8: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 11cfdc: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 11cfe0: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1167332));
  fn1_142530(c);
  /* 11cfe4: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 11cfe8: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 11cfec: b.eq #0x11cfd8 */
  if (ARC_COND(c, 0)) goto L_11cfd8;
L_11cff0:;
  /* 11cff0: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 11cff4: cbz x8, #0x11d008 */
  if ((ARC_X_R(c, 8)) == 0) goto L_11d008;
  /* 11cff8: nop  */
  /* nop: no architectural effect here */
  /* 11cffc: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11d000: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1167364));
  fn1_142560(c);
  /* 11d004: b #0x11d068 */
  goto L_11d068;
L_11d008:;
  /* 11d008: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 11d00c: str x24, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 24));
  /* 11d010: strb wzr, [sp, #8] */
  arc_st8(((c)->sp + INT64_C(8)), ARC_W_R(c, 31));
  /* 11d014: str x8, [x24] */
  arc_st64(ARC_X_R(c, 24), ARC_X_R(c, 8));
  /* 11d018: nop  */
  /* nop: no architectural effect here */
  /* 11d01c: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11d020: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1167396));
  fn1_142560(c);
  /* 11d024: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 11d028: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 11d02c: ldr x1, [x1, #0xc58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3160))));
  /* 11d030: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1167412));
  fn1_a2030(c);
  /* 11d034: add w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + UINT64_C(1)));
  /* 11d038: str w8, [x24, #8] */
  arc_st32((ARC_X_R(c, 24) + INT64_C(8)), ARC_W_R(c, 8));
  /* 11d03c: nop  */
  /* nop: no architectural effect here */
  /* 11d040: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11d044: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1167432));
  fn1_142518(c);
  /* 11d048: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 11d04c: stlr x8, [x24] */
  arc_st64(ARC_X_R(c, 24), ARC_X_R(c, 8));
  /* 11d050: nop  */
  /* nop: no architectural effect here */
  /* 11d054: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11d058: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1167452));
  fn1_142560(c);
  /* 11d05c: nop  */
  /* nop: no architectural effect here */
  /* 11d060: adr x0, #0x15791c */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 11d064: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1167464));
  fn1_142578(c);
L_11d068:;
  /* 11d068: ldrsw x8, [x24, #8] */
  ARC_X_W(c, 8, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 24) + INT64_C(8)))));
  /* 11d06c: adrp x1, #0x15e000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 11d070: add x1, x1, #0x8c0 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2240)));
  /* 11d074: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 11d078: sub x25, x8, #1 */
  ARC_X_W(c, 25, (ARC_X_R(c, 8) - UINT64_C(1)));
  /* 11d07c: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1167488));
  fn1_db2e0(c);
  /* 11d080: ldp x8, x9, [x20, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 11d084: sub x9, x9, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - ARC_X_R(c, 8)));
  /* 11d088: asr x10, x9, #3 */
  ARC_X_W(c, 10, ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(3)) & 63))));
  /* 11d08c: cmp x10, x25 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 25));
  /* 11d090: b.hi #0x11d0bc */
  if (ARC_COND(c, 8)) goto L_11d0bc;
  /* 11d094: add x9, x25, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 25) + UINT64_C(1)));
  /* 11d098: subs x1, x9, x10 */
  ARC_X_W(c, 1, arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10)));
  /* 11d09c: b.ls #0x11d0b0 */
  if (ARC_COND(c, 9)) goto L_11d0b0;
  /* 11d0a0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 11d0a4: bl #0x1352bc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1167528));
  fn1_1352bc(c);
  /* 11d0a8: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 11d0ac: b #0x11d0bc */
  goto L_11d0bc;
L_11d0b0:;
  /* 11d0b0: b.hs #0x11d0bc */
  if (ARC_COND(c, 2)) goto L_11d0bc;
  /* 11d0b4: add x9, x8, x9, lsl #3 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3)));
  /* 11d0b8: str x9, [x20, #0x18] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(24)), ARC_X_R(c, 9));
L_11d0bc:;
  /* 11d0bc: ldr x21, [x8, x25, lsl #3] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 25)) << 3))));
  /* 11d0c0: cbz x21, #0x11d0e4 */
  if ((ARC_X_R(c, 21)) == 0) goto L_11d0e4;
  /* 11d0c4: add x1, x21, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(8)));
  /* 11d0c8: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 11d0cc: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1167568));
  fn1_bd950(c);
  /* 11d0d0: cbnz x0, #0x11d0e4 */
  if ((ARC_X_R(c, 0)) != 0) goto L_11d0e4;
  /* 11d0d4: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 11d0d8: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 11d0dc: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 11d0e0: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1167588));
  arc_dispatch(c, ARC_X_R(c, 8));
L_11d0e4:;
  /* 11d0e4: adrp x9, #0x151000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 11d0e8: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 11d0ec: adrp x24, #0x151000 */
  ARC_X_W(c, 24, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 11d0f0: ldr x9, [x9, #0xd48] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(3400))));
  /* 11d0f4: nop  */
  /* nop: no architectural effect here */
  /* 11d0f8: adr x22, #0x15e8c8 */
  ARC_X_W(c, 22, (arc_image_bases[1] + UINT64_C(1435848)));
  /* 11d0fc: ldr x24, [x24, #0xbe8] */
  ARC_X_W(c, 24, arc_ld64((ARC_X_R(c, 24) + INT64_C(3048))));
  /* 11d100: str x23, [x8, x25, lsl #3] */
  arc_st64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 25)) << 3)), ARC_X_R(c, 23));
  /* 11d104: add x8, x9, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) + UINT64_C(16)));
  /* 11d108: add x9, x9, #0x70 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(112)));
  /* 11d10c: stp x8, xzr, [x22] */
  { const uint64_t _pa = ARC_X_R(c, 22);
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 11d110: str x9, [x22, #0x10] */
  arc_st64((ARC_X_R(c, 22) + INT64_C(16)), ARC_X_R(c, 9));
  /* 11d114: ldar x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 11d118: cmn x8, #1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0);
  /* 11d11c: b.eq #0x11d1d8 */
  if (ARC_COND(c, 0)) goto L_11d1d8;
  /* 11d120: nop  */
  /* nop: no architectural effect here */
  /* 11d124: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11d128: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1167660));
  fn1_142518(c);
  /* 11d12c: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 11d130: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 11d134: b.ne #0x11d160 */
  if (ARC_COND(c, 1)) goto L_11d160;
  /* 11d138: nop  */
  /* nop: no architectural effect here */
  /* 11d13c: adr x21, #0x15791c */
  ARC_X_W(c, 21, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 11d140: nop  */
  /* nop: no architectural effect here */
  /* 11d144: adr x23, #0x1578f4 */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1407220)));
L_11d148:;
  /* 11d148: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 11d14c: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* 11d150: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1167700));
  fn1_142530(c);
  /* 11d154: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 11d158: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 11d15c: b.eq #0x11d148 */
  if (ARC_COND(c, 0)) goto L_11d148;
L_11d160:;
  /* 11d160: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 11d164: cbz x8, #0x11d178 */
  if ((ARC_X_R(c, 8)) == 0) goto L_11d178;
  /* 11d168: nop  */
  /* nop: no architectural effect here */
  /* 11d16c: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11d170: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1167732));
  fn1_142560(c);
  /* 11d174: b #0x11d1d8 */
  goto L_11d1d8;
L_11d178:;
  /* 11d178: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 11d17c: str x24, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 24));
  /* 11d180: strb wzr, [sp, #8] */
  arc_st8(((c)->sp + INT64_C(8)), ARC_W_R(c, 31));
  /* 11d184: str x8, [x24] */
  arc_st64(ARC_X_R(c, 24), ARC_X_R(c, 8));
  /* 11d188: nop  */
  /* nop: no architectural effect here */
  /* 11d18c: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11d190: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1167764));
  fn1_142560(c);
  /* 11d194: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 11d198: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 11d19c: ldr x1, [x1, #0xc58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3160))));
  /* 11d1a0: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1167780));
  fn1_a2030(c);
  /* 11d1a4: add w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + UINT64_C(1)));
  /* 11d1a8: str w8, [x24, #8] */
  arc_st32((ARC_X_R(c, 24) + INT64_C(8)), ARC_W_R(c, 8));
  /* 11d1ac: nop  */
  /* nop: no architectural effect here */
  /* 11d1b0: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11d1b4: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1167800));
  fn1_142518(c);
  /* 11d1b8: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 11d1bc: stlr x8, [x24] */
  arc_st64(ARC_X_R(c, 24), ARC_X_R(c, 8));
  /* 11d1c0: nop  */
  /* nop: no architectural effect here */
  /* 11d1c4: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11d1c8: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1167820));
  fn1_142560(c);
  /* 11d1cc: nop  */
  /* nop: no architectural effect here */
  /* 11d1d0: adr x0, #0x15791c */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 11d1d4: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1167832));
  fn1_142578(c);
L_11d1d8:;
  /* 11d1d8: ldrsw x8, [x24, #8] */
  ARC_X_W(c, 8, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 24) + INT64_C(8)))));
  /* 11d1dc: adrp x1, #0x15e000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 11d1e0: add x1, x1, #0x8d0 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2256)));
  /* 11d1e4: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 11d1e8: sub x25, x8, #1 */
  ARC_X_W(c, 25, (ARC_X_R(c, 8) - UINT64_C(1)));
  /* 11d1ec: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1167856));
  fn1_db2e0(c);
  /* 11d1f0: ldp x8, x9, [x20, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 11d1f4: sub x9, x9, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - ARC_X_R(c, 8)));
  /* 11d1f8: asr x10, x9, #3 */
  ARC_X_W(c, 10, ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(3)) & 63))));
  /* 11d1fc: cmp x10, x25 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 25));
  /* 11d200: b.hi #0x11d22c */
  if (ARC_COND(c, 8)) goto L_11d22c;
  /* 11d204: add x9, x25, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 25) + UINT64_C(1)));
  /* 11d208: subs x1, x9, x10 */
  ARC_X_W(c, 1, arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10)));
  /* 11d20c: b.ls #0x11d220 */
  if (ARC_COND(c, 9)) goto L_11d220;
  /* 11d210: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 11d214: bl #0x1352bc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1167896));
  fn1_1352bc(c);
  /* 11d218: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 11d21c: b #0x11d22c */
  goto L_11d22c;
L_11d220:;
  /* 11d220: b.hs #0x11d22c */
  if (ARC_COND(c, 2)) goto L_11d22c;
  /* 11d224: add x9, x8, x9, lsl #3 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3)));
  /* 11d228: str x9, [x20, #0x18] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(24)), ARC_X_R(c, 9));
L_11d22c:;
  /* 11d22c: ldr x21, [x8, x25, lsl #3] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 25)) << 3))));
  /* 11d230: cbz x21, #0x11d254 */
  if ((ARC_X_R(c, 21)) == 0) goto L_11d254;
  /* 11d234: add x1, x21, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(8)));
  /* 11d238: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 11d23c: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1167936));
  fn1_bd950(c);
  /* 11d240: cbnz x0, #0x11d254 */
  if ((ARC_X_R(c, 0)) != 0) goto L_11d254;
  /* 11d244: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 11d248: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 11d24c: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 11d250: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1167956));
  arc_dispatch(c, ARC_X_R(c, 8));
L_11d254:;
  /* 11d254: adrp x9, #0x151000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 11d258: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 11d25c: adrp x23, #0x151000 */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 11d260: ldr x9, [x9, #0xd50] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(3408))));
  /* 11d264: nop  */
  /* nop: no architectural effect here */
  /* 11d268: adr x24, #0x15e8e0 */
  ARC_X_W(c, 24, (arc_image_bases[1] + UINT64_C(1435872)));
  /* 11d26c: ldr x23, [x23, #0xbf0] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 23) + INT64_C(3056))));
  /* 11d270: str x22, [x8, x25, lsl #3] */
  arc_st64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 25)) << 3)), ARC_X_R(c, 22));
  /* 11d274: add x8, x9, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) + UINT64_C(16)));
  /* 11d278: add x9, x9, #0x70 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(112)));
  /* 11d27c: stp x8, xzr, [x24] */
  { const uint64_t _pa = ARC_X_R(c, 24);
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 11d280: str x9, [x24, #0x10] */
  arc_st64((ARC_X_R(c, 24) + INT64_C(16)), ARC_X_R(c, 9));
  /* 11d284: ldar x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 11d288: cmn x8, #1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0);
  /* 11d28c: b.eq #0x11d348 */
  if (ARC_COND(c, 0)) goto L_11d348;
  /* 11d290: nop  */
  /* nop: no architectural effect here */
  /* 11d294: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11d298: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1168028));
  fn1_142518(c);
  /* 11d29c: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 11d2a0: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 11d2a4: b.ne #0x11d2d0 */
  if (ARC_COND(c, 1)) goto L_11d2d0;
  /* 11d2a8: nop  */
  /* nop: no architectural effect here */
  /* 11d2ac: adr x21, #0x15791c */
  ARC_X_W(c, 21, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 11d2b0: nop  */
  /* nop: no architectural effect here */
  /* 11d2b4: adr x22, #0x1578f4 */
  ARC_X_W(c, 22, (arc_image_bases[1] + UINT64_C(1407220)));
L_11d2b8:;
  /* 11d2b8: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 11d2bc: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 11d2c0: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1168068));
  fn1_142530(c);
  /* 11d2c4: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 11d2c8: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 11d2cc: b.eq #0x11d2b8 */
  if (ARC_COND(c, 0)) goto L_11d2b8;
L_11d2d0:;
  /* 11d2d0: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 11d2d4: cbz x8, #0x11d2e8 */
  if ((ARC_X_R(c, 8)) == 0) goto L_11d2e8;
  /* 11d2d8: nop  */
  /* nop: no architectural effect here */
  /* 11d2dc: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11d2e0: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1168100));
  fn1_142560(c);
  /* 11d2e4: b #0x11d348 */
  goto L_11d348;
L_11d2e8:;
  /* 11d2e8: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 11d2ec: str x23, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 23));
  /* 11d2f0: strb wzr, [sp, #8] */
  arc_st8(((c)->sp + INT64_C(8)), ARC_W_R(c, 31));
  /* 11d2f4: str x8, [x23] */
  arc_st64(ARC_X_R(c, 23), ARC_X_R(c, 8));
  /* 11d2f8: nop  */
  /* nop: no architectural effect here */
  /* 11d2fc: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11d300: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1168132));
  fn1_142560(c);
  /* 11d304: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 11d308: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 11d30c: ldr x1, [x1, #0xc58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3160))));
  /* 11d310: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1168148));
  fn1_a2030(c);
  /* 11d314: add w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + UINT64_C(1)));
  /* 11d318: str w8, [x23, #8] */
  arc_st32((ARC_X_R(c, 23) + INT64_C(8)), ARC_W_R(c, 8));
  /* 11d31c: nop  */
  /* nop: no architectural effect here */
  /* 11d320: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11d324: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1168168));
  fn1_142518(c);
  /* 11d328: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 11d32c: stlr x8, [x23] */
  arc_st64(ARC_X_R(c, 23), ARC_X_R(c, 8));
  /* 11d330: nop  */
  /* nop: no architectural effect here */
  /* 11d334: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11d338: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1168188));
  fn1_142560(c);
  /* 11d33c: nop  */
  /* nop: no architectural effect here */
  /* 11d340: adr x0, #0x15791c */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 11d344: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1168200));
  fn1_142578(c);
L_11d348:;
  /* 11d348: ldrsw x8, [x23, #8] */
  ARC_X_W(c, 8, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 23) + INT64_C(8)))));
  /* 11d34c: adrp x1, #0x15e000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 11d350: add x1, x1, #0x8e8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2280)));
  /* 11d354: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 11d358: sub x22, x8, #1 */
  ARC_X_W(c, 22, (ARC_X_R(c, 8) - UINT64_C(1)));
  /* 11d35c: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1168224));
  fn1_db2e0(c);
  /* 11d360: ldp x8, x9, [x20, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 11d364: sub x9, x9, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - ARC_X_R(c, 8)));
  /* 11d368: asr x10, x9, #3 */
  ARC_X_W(c, 10, ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(3)) & 63))));
  /* 11d36c: cmp x10, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 22));
  /* 11d370: b.hi #0x11d39c */
  if (ARC_COND(c, 8)) goto L_11d39c;
  /* 11d374: add x9, x22, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 22) + UINT64_C(1)));
  /* 11d378: subs x1, x9, x10 */
  ARC_X_W(c, 1, arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10)));
  /* 11d37c: b.ls #0x11d390 */
  if (ARC_COND(c, 9)) goto L_11d390;
  /* 11d380: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 11d384: bl #0x1352bc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1168264));
  fn1_1352bc(c);
  /* 11d388: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 11d38c: b #0x11d39c */
  goto L_11d39c;
L_11d390:;
  /* 11d390: b.hs #0x11d39c */
  if (ARC_COND(c, 2)) goto L_11d39c;
  /* 11d394: add x9, x8, x9, lsl #3 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3)));
  /* 11d398: str x9, [x20, #0x18] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(24)), ARC_X_R(c, 9));
L_11d39c:;
  /* 11d39c: ldr x21, [x8, x22, lsl #3] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 22)) << 3))));
  /* 11d3a0: cbz x21, #0x11d3c4 */
  if ((ARC_X_R(c, 21)) == 0) goto L_11d3c4;
  /* 11d3a4: add x1, x21, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(8)));
  /* 11d3a8: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 11d3ac: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1168304));
  fn1_bd950(c);
  /* 11d3b0: cbnz x0, #0x11d3c4 */
  if ((ARC_X_R(c, 0)) != 0) goto L_11d3c4;
  /* 11d3b4: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 11d3b8: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 11d3bc: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 11d3c0: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1168324));
  arc_dispatch(c, ARC_X_R(c, 8));
L_11d3c4:;
  /* 11d3c4: adrp x25, #0x151000 */
  ARC_X_W(c, 25, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 11d3c8: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 11d3cc: nop  */
  /* nop: no architectural effect here */
  /* 11d3d0: adr x23, #0x15e8f8 */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1435896)));
  /* 11d3d4: ldr x25, [x25, #0xce0] */
  ARC_X_W(c, 25, arc_ld64((ARC_X_R(c, 25) + INT64_C(3296))));
  /* 11d3d8: nop  */
  /* nop: no architectural effect here */
  /* 11d3dc: adr x26, #0x15dc38 */
  ARC_X_W(c, 26, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 11d3e0: str x24, [x8, x22, lsl #3] */
  arc_st64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 22)) << 3)), ARC_X_R(c, 24));
  /* 11d3e4: adrp x24, #0x15d000 */
  ARC_X_W(c, 24, (arc_image_bases[1] + UINT64_C(1429504)));
  /* 11d3e8: add x8, x25, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 25) + UINT64_C(16)));
  /* 11d3ec: stp x8, xzr, [x23] */
  { const uint64_t _pa = ARC_X_R(c, 23);
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 11d3f0: ldarb w8, [x26] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 26)));
  /* 11d3f4: tbz w8, #0, #0x11d9d4 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_11d9d4;
L_11d3f8:;
  /* 11d3f8: ldr x8, [x24, #0xc30] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 24) + INT64_C(3120))));
  /* 11d3fc: adrp x9, #0x151000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 11d400: adrp x27, #0x151000 */
  ARC_X_W(c, 27, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 11d404: ldr x9, [x9, #0xd68] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(3432))));
  /* 11d408: str x8, [x23, #0x10] */
  arc_st64((ARC_X_R(c, 23) + INT64_C(16)), ARC_X_R(c, 8));
  /* 11d40c: add x8, x9, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) + UINT64_C(16)));
  /* 11d410: ldr x27, [x27, #0xbf8] */
  ARC_X_W(c, 27, arc_ld64((ARC_X_R(c, 27) + INT64_C(3064))));
  /* 11d414: str x8, [x23] */
  arc_st64(ARC_X_R(c, 23), ARC_X_R(c, 8));
  /* 11d418: ldar x8, [x27] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 27)));
  /* 11d41c: cmn x8, #1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0);
  /* 11d420: b.eq #0x11d4dc */
  if (ARC_COND(c, 0)) goto L_11d4dc;
  /* 11d424: nop  */
  /* nop: no architectural effect here */
  /* 11d428: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11d42c: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1168432));
  fn1_142518(c);
  /* 11d430: ldr x8, [x27] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 27)));
  /* 11d434: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 11d438: b.ne #0x11d464 */
  if (ARC_COND(c, 1)) goto L_11d464;
  /* 11d43c: nop  */
  /* nop: no architectural effect here */
  /* 11d440: adr x21, #0x15791c */
  ARC_X_W(c, 21, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 11d444: nop  */
  /* nop: no architectural effect here */
  /* 11d448: adr x22, #0x1578f4 */
  ARC_X_W(c, 22, (arc_image_bases[1] + UINT64_C(1407220)));
L_11d44c:;
  /* 11d44c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 11d450: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 11d454: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1168472));
  fn1_142530(c);
  /* 11d458: ldr x8, [x27] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 27)));
  /* 11d45c: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 11d460: b.eq #0x11d44c */
  if (ARC_COND(c, 0)) goto L_11d44c;
L_11d464:;
  /* 11d464: ldr x8, [x27] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 27)));
  /* 11d468: cbz x8, #0x11d47c */
  if ((ARC_X_R(c, 8)) == 0) goto L_11d47c;
  /* 11d46c: nop  */
  /* nop: no architectural effect here */
  /* 11d470: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11d474: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1168504));
  fn1_142560(c);
  /* 11d478: b #0x11d4dc */
  goto L_11d4dc;
L_11d47c:;
  /* 11d47c: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 11d480: str x27, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 27));
  /* 11d484: strb wzr, [sp, #8] */
  arc_st8(((c)->sp + INT64_C(8)), ARC_W_R(c, 31));
  /* 11d488: str x8, [x27] */
  arc_st64(ARC_X_R(c, 27), ARC_X_R(c, 8));
  /* 11d48c: nop  */
  /* nop: no architectural effect here */
  /* 11d490: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11d494: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1168536));
  fn1_142560(c);
  /* 11d498: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 11d49c: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 11d4a0: ldr x1, [x1, #0xc58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3160))));
  /* 11d4a4: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1168552));
  fn1_a2030(c);
  /* 11d4a8: add w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + UINT64_C(1)));
  /* 11d4ac: str w8, [x27, #8] */
  arc_st32((ARC_X_R(c, 27) + INT64_C(8)), ARC_W_R(c, 8));
  /* 11d4b0: nop  */
  /* nop: no architectural effect here */
  /* 11d4b4: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11d4b8: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1168572));
  fn1_142518(c);
  /* 11d4bc: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 11d4c0: stlr x8, [x27] */
  arc_st64(ARC_X_R(c, 27), ARC_X_R(c, 8));
  /* 11d4c4: nop  */
  /* nop: no architectural effect here */
  /* 11d4c8: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11d4cc: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1168592));
  fn1_142560(c);
  /* 11d4d0: nop  */
  /* nop: no architectural effect here */
  /* 11d4d4: adr x0, #0x15791c */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 11d4d8: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1168604));
  fn1_142578(c);
L_11d4dc:;
  /* 11d4dc: ldrsw x8, [x27, #8] */
  ARC_X_W(c, 8, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 27) + INT64_C(8)))));
  /* 11d4e0: adrp x1, #0x15e000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 11d4e4: add x1, x1, #0x900 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2304)));
  /* 11d4e8: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 11d4ec: sub x27, x8, #1 */
  ARC_X_W(c, 27, (ARC_X_R(c, 8) - UINT64_C(1)));
  /* 11d4f0: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1168628));
  fn1_db2e0(c);
  /* 11d4f4: ldp x8, x9, [x20, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 11d4f8: sub x9, x9, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - ARC_X_R(c, 8)));
  /* 11d4fc: asr x10, x9, #3 */
  ARC_X_W(c, 10, ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(3)) & 63))));
  /* 11d500: cmp x10, x27 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 27));
  /* 11d504: b.hi #0x11d530 */
  if (ARC_COND(c, 8)) goto L_11d530;
  /* 11d508: add x9, x27, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 27) + UINT64_C(1)));
  /* 11d50c: subs x1, x9, x10 */
  ARC_X_W(c, 1, arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10)));
  /* 11d510: b.ls #0x11d524 */
  if (ARC_COND(c, 9)) goto L_11d524;
  /* 11d514: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 11d518: bl #0x1352bc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1168668));
  fn1_1352bc(c);
  /* 11d51c: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 11d520: b #0x11d530 */
  goto L_11d530;
L_11d524:;
  /* 11d524: b.hs #0x11d530 */
  if (ARC_COND(c, 2)) goto L_11d530;
  /* 11d528: add x9, x8, x9, lsl #3 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3)));
  /* 11d52c: str x9, [x20, #0x18] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(24)), ARC_X_R(c, 9));
L_11d530:;
  /* 11d530: ldr x21, [x8, x27, lsl #3] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 27)) << 3))));
  /* 11d534: cbz x21, #0x11d558 */
  if ((ARC_X_R(c, 21)) == 0) goto L_11d558;
  /* 11d538: add x1, x21, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(8)));
  /* 11d53c: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 11d540: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1168708));
  fn1_bd950(c);
  /* 11d544: cbnz x0, #0x11d558 */
  if ((ARC_X_R(c, 0)) != 0) goto L_11d558;
  /* 11d548: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 11d54c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 11d550: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 11d554: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1168728));
  arc_dispatch(c, ARC_X_R(c, 8));
L_11d558:;
  /* 11d558: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 11d55c: nop  */
  /* nop: no architectural effect here */
  /* 11d560: adr x22, #0x15e910 */
  ARC_X_W(c, 22, (arc_image_bases[1] + UINT64_C(1435920)));
  /* 11d564: str x23, [x8, x27, lsl #3] */
  arc_st64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 27)) << 3)), ARC_X_R(c, 23));
  /* 11d568: add x8, x25, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 25) + UINT64_C(16)));
  /* 11d56c: stp x8, xzr, [x22] */
  { const uint64_t _pa = ARC_X_R(c, 22);
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 11d570: ldarb w8, [x26] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 26)));
  /* 11d574: tbz w8, #0, #0x11da0c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_11da0c;
L_11d578:;
  /* 11d578: ldr x8, [x24, #0xc30] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 24) + INT64_C(3120))));
  /* 11d57c: adrp x9, #0x151000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 11d580: adrp x24, #0x151000 */
  ARC_X_W(c, 24, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 11d584: ldr x9, [x9, #0xd70] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(3440))));
  /* 11d588: str x8, [x22, #0x10] */
  arc_st64((ARC_X_R(c, 22) + INT64_C(16)), ARC_X_R(c, 8));
  /* 11d58c: add x8, x9, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) + UINT64_C(16)));
  /* 11d590: ldr x24, [x24, #0xc00] */
  ARC_X_W(c, 24, arc_ld64((ARC_X_R(c, 24) + INT64_C(3072))));
  /* 11d594: str x8, [x22] */
  arc_st64(ARC_X_R(c, 22), ARC_X_R(c, 8));
  /* 11d598: ldar x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 11d59c: cmn x8, #1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0);
  /* 11d5a0: b.eq #0x11d65c */
  if (ARC_COND(c, 0)) goto L_11d65c;
  /* 11d5a4: nop  */
  /* nop: no architectural effect here */
  /* 11d5a8: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11d5ac: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1168816));
  fn1_142518(c);
  /* 11d5b0: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 11d5b4: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 11d5b8: b.ne #0x11d5e4 */
  if (ARC_COND(c, 1)) goto L_11d5e4;
  /* 11d5bc: nop  */
  /* nop: no architectural effect here */
  /* 11d5c0: adr x21, #0x15791c */
  ARC_X_W(c, 21, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 11d5c4: nop  */
  /* nop: no architectural effect here */
  /* 11d5c8: adr x23, #0x1578f4 */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1407220)));
L_11d5cc:;
  /* 11d5cc: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 11d5d0: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* 11d5d4: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1168856));
  fn1_142530(c);
  /* 11d5d8: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 11d5dc: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 11d5e0: b.eq #0x11d5cc */
  if (ARC_COND(c, 0)) goto L_11d5cc;
L_11d5e4:;
  /* 11d5e4: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 11d5e8: cbz x8, #0x11d5fc */
  if ((ARC_X_R(c, 8)) == 0) goto L_11d5fc;
  /* 11d5ec: nop  */
  /* nop: no architectural effect here */
  /* 11d5f0: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11d5f4: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1168888));
  fn1_142560(c);
  /* 11d5f8: b #0x11d65c */
  goto L_11d65c;
L_11d5fc:;
  /* 11d5fc: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 11d600: str x24, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 24));
  /* 11d604: strb wzr, [sp, #8] */
  arc_st8(((c)->sp + INT64_C(8)), ARC_W_R(c, 31));
  /* 11d608: str x8, [x24] */
  arc_st64(ARC_X_R(c, 24), ARC_X_R(c, 8));
  /* 11d60c: nop  */
  /* nop: no architectural effect here */
  /* 11d610: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11d614: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1168920));
  fn1_142560(c);
  /* 11d618: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 11d61c: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 11d620: ldr x1, [x1, #0xc58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3160))));
  /* 11d624: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1168936));
  fn1_a2030(c);
  /* 11d628: add w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + UINT64_C(1)));
  /* 11d62c: str w8, [x24, #8] */
  arc_st32((ARC_X_R(c, 24) + INT64_C(8)), ARC_W_R(c, 8));
  /* 11d630: nop  */
  /* nop: no architectural effect here */
  /* 11d634: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11d638: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1168956));
  fn1_142518(c);
  /* 11d63c: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 11d640: stlr x8, [x24] */
  arc_st64(ARC_X_R(c, 24), ARC_X_R(c, 8));
  /* 11d644: nop  */
  /* nop: no architectural effect here */
  /* 11d648: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11d64c: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1168976));
  fn1_142560(c);
  /* 11d650: nop  */
  /* nop: no architectural effect here */
  /* 11d654: adr x0, #0x15791c */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 11d658: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1168988));
  fn1_142578(c);
L_11d65c:;
  /* 11d65c: ldrsw x8, [x24, #8] */
  ARC_X_W(c, 8, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 24) + INT64_C(8)))));
  /* 11d660: adrp x1, #0x15e000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 11d664: add x1, x1, #0x918 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2328)));
  /* 11d668: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 11d66c: sub x24, x8, #1 */
  ARC_X_W(c, 24, (ARC_X_R(c, 8) - UINT64_C(1)));
  /* 11d670: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1169012));
  fn1_db2e0(c);
  /* 11d674: ldp x8, x9, [x20, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 11d678: sub x9, x9, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - ARC_X_R(c, 8)));
  /* 11d67c: asr x10, x9, #3 */
  ARC_X_W(c, 10, ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(3)) & 63))));
  /* 11d680: cmp x10, x24 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 24));
  /* 11d684: b.hi #0x11d6b0 */
  if (ARC_COND(c, 8)) goto L_11d6b0;
  /* 11d688: add x9, x24, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 24) + UINT64_C(1)));
  /* 11d68c: subs x1, x9, x10 */
  ARC_X_W(c, 1, arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10)));
  /* 11d690: b.ls #0x11d6a4 */
  if (ARC_COND(c, 9)) goto L_11d6a4;
  /* 11d694: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 11d698: bl #0x1352bc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1169052));
  fn1_1352bc(c);
  /* 11d69c: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 11d6a0: b #0x11d6b0 */
  goto L_11d6b0;
L_11d6a4:;
  /* 11d6a4: b.hs #0x11d6b0 */
  if (ARC_COND(c, 2)) goto L_11d6b0;
  /* 11d6a8: add x9, x8, x9, lsl #3 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3)));
  /* 11d6ac: str x9, [x20, #0x18] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(24)), ARC_X_R(c, 9));
L_11d6b0:;
  /* 11d6b0: ldr x21, [x8, x24, lsl #3] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 24)) << 3))));
  /* 11d6b4: cbz x21, #0x11d6d8 */
  if ((ARC_X_R(c, 21)) == 0) goto L_11d6d8;
  /* 11d6b8: add x1, x21, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(8)));
  /* 11d6bc: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 11d6c0: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1169092));
  fn1_bd950(c);
  /* 11d6c4: cbnz x0, #0x11d6d8 */
  if ((ARC_X_R(c, 0)) != 0) goto L_11d6d8;
  /* 11d6c8: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 11d6cc: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 11d6d0: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 11d6d4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1169112));
  arc_dispatch(c, ARC_X_R(c, 8));
L_11d6d8:;
  /* 11d6d8: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 11d6dc: adrp x9, #0x151000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 11d6e0: nop  */
  /* nop: no architectural effect here */
  /* 11d6e4: adr x23, #0x15e928 */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1435944)));
  /* 11d6e8: ldr x9, [x9, #0xde8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(3560))));
  /* 11d6ec: str x22, [x8, x24, lsl #3] */
  arc_st64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 24)) << 3)), ARC_X_R(c, 22));
  /* 11d6f0: adrp x24, #0x151000 */
  ARC_X_W(c, 24, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 11d6f4: add x8, x9, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) + UINT64_C(16)));
  /* 11d6f8: ldr x24, [x24, #0xc48] */
  ARC_X_W(c, 24, arc_ld64((ARC_X_R(c, 24) + INT64_C(3144))));
  /* 11d6fc: stp x8, xzr, [x23] */
  { const uint64_t _pa = ARC_X_R(c, 23);
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 11d700: ldar x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 11d704: cmn x8, #1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0);
  /* 11d708: b.eq #0x11d7c4 */
  if (ARC_COND(c, 0)) goto L_11d7c4;
  /* 11d70c: nop  */
  /* nop: no architectural effect here */
  /* 11d710: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11d714: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1169176));
  fn1_142518(c);
  /* 11d718: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 11d71c: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 11d720: b.ne #0x11d74c */
  if (ARC_COND(c, 1)) goto L_11d74c;
  /* 11d724: nop  */
  /* nop: no architectural effect here */
  /* 11d728: adr x21, #0x15791c */
  ARC_X_W(c, 21, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 11d72c: nop  */
  /* nop: no architectural effect here */
  /* 11d730: adr x22, #0x1578f4 */
  ARC_X_W(c, 22, (arc_image_bases[1] + UINT64_C(1407220)));
L_11d734:;
  /* 11d734: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 11d738: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 11d73c: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1169216));
  fn1_142530(c);
  /* 11d740: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 11d744: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 11d748: b.eq #0x11d734 */
  if (ARC_COND(c, 0)) goto L_11d734;
L_11d74c:;
  /* 11d74c: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 11d750: cbz x8, #0x11d764 */
  if ((ARC_X_R(c, 8)) == 0) goto L_11d764;
  /* 11d754: nop  */
  /* nop: no architectural effect here */
  /* 11d758: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11d75c: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1169248));
  fn1_142560(c);
  /* 11d760: b #0x11d7c4 */
  goto L_11d7c4;
L_11d764:;
  /* 11d764: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 11d768: str x24, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 24));
  /* 11d76c: strb wzr, [sp, #8] */
  arc_st8(((c)->sp + INT64_C(8)), ARC_W_R(c, 31));
  /* 11d770: str x8, [x24] */
  arc_st64(ARC_X_R(c, 24), ARC_X_R(c, 8));
  /* 11d774: nop  */
  /* nop: no architectural effect here */
  /* 11d778: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11d77c: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1169280));
  fn1_142560(c);
  /* 11d780: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 11d784: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 11d788: ldr x1, [x1, #0xc58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3160))));
  /* 11d78c: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1169296));
  fn1_a2030(c);
  /* 11d790: add w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + UINT64_C(1)));
  /* 11d794: str w8, [x24, #8] */
  arc_st32((ARC_X_R(c, 24) + INT64_C(8)), ARC_W_R(c, 8));
  /* 11d798: nop  */
  /* nop: no architectural effect here */
  /* 11d79c: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11d7a0: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1169316));
  fn1_142518(c);
  /* 11d7a4: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 11d7a8: stlr x8, [x24] */
  arc_st64(ARC_X_R(c, 24), ARC_X_R(c, 8));
  /* 11d7ac: nop  */
  /* nop: no architectural effect here */
  /* 11d7b0: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11d7b4: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1169336));
  fn1_142560(c);
  /* 11d7b8: nop  */
  /* nop: no architectural effect here */
  /* 11d7bc: adr x0, #0x15791c */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 11d7c0: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1169348));
  fn1_142578(c);
L_11d7c4:;
  /* 11d7c4: ldrsw x8, [x24, #8] */
  ARC_X_W(c, 8, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 24) + INT64_C(8)))));
  /* 11d7c8: adrp x1, #0x15e000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 11d7cc: add x1, x1, #0x930 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2352)));
  /* 11d7d0: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 11d7d4: sub x24, x8, #1 */
  ARC_X_W(c, 24, (ARC_X_R(c, 8) - UINT64_C(1)));
  /* 11d7d8: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1169372));
  fn1_db2e0(c);
  /* 11d7dc: ldp x8, x9, [x20, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 11d7e0: sub x9, x9, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - ARC_X_R(c, 8)));
  /* 11d7e4: asr x10, x9, #3 */
  ARC_X_W(c, 10, ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(3)) & 63))));
  /* 11d7e8: cmp x10, x24 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 24));
  /* 11d7ec: b.hi #0x11d818 */
  if (ARC_COND(c, 8)) goto L_11d818;
  /* 11d7f0: add x9, x24, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 24) + UINT64_C(1)));
  /* 11d7f4: subs x1, x9, x10 */
  ARC_X_W(c, 1, arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10)));
  /* 11d7f8: b.ls #0x11d80c */
  if (ARC_COND(c, 9)) goto L_11d80c;
  /* 11d7fc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 11d800: bl #0x1352bc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1169412));
  fn1_1352bc(c);
  /* 11d804: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 11d808: b #0x11d818 */
  goto L_11d818;
L_11d80c:;
  /* 11d80c: b.hs #0x11d818 */
  if (ARC_COND(c, 2)) goto L_11d818;
  /* 11d810: add x9, x8, x9, lsl #3 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3)));
  /* 11d814: str x9, [x20, #0x18] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(24)), ARC_X_R(c, 9));
L_11d818:;
  /* 11d818: ldr x21, [x8, x24, lsl #3] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 24)) << 3))));
  /* 11d81c: cbz x21, #0x11d840 */
  if ((ARC_X_R(c, 21)) == 0) goto L_11d840;
  /* 11d820: add x1, x21, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(8)));
  /* 11d824: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 11d828: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1169452));
  fn1_bd950(c);
  /* 11d82c: cbnz x0, #0x11d840 */
  if ((ARC_X_R(c, 0)) != 0) goto L_11d840;
  /* 11d830: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 11d834: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 11d838: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 11d83c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1169472));
  arc_dispatch(c, ARC_X_R(c, 8));
L_11d840:;
  /* 11d840: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 11d844: adrp x9, #0x151000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 11d848: nop  */
  /* nop: no architectural effect here */
  /* 11d84c: adr x22, #0x15e938 */
  ARC_X_W(c, 22, (arc_image_bases[1] + UINT64_C(1435960)));
  /* 11d850: ldr x9, [x9, #0xdf0] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(3568))));
  /* 11d854: str x23, [x8, x24, lsl #3] */
  arc_st64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 24)) << 3)), ARC_X_R(c, 23));
  /* 11d858: adrp x24, #0x151000 */
  ARC_X_W(c, 24, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 11d85c: add x8, x9, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) + UINT64_C(16)));
  /* 11d860: ldr x24, [x24, #0xc50] */
  ARC_X_W(c, 24, arc_ld64((ARC_X_R(c, 24) + INT64_C(3152))));
  /* 11d864: stp x8, xzr, [x22] */
  { const uint64_t _pa = ARC_X_R(c, 22);
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 11d868: ldar x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 11d86c: cmn x8, #1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0);
  /* 11d870: b.eq #0x11d92c */
  if (ARC_COND(c, 0)) goto L_11d92c;
  /* 11d874: nop  */
  /* nop: no architectural effect here */
  /* 11d878: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11d87c: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1169536));
  fn1_142518(c);
  /* 11d880: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 11d884: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 11d888: b.ne #0x11d8b4 */
  if (ARC_COND(c, 1)) goto L_11d8b4;
  /* 11d88c: nop  */
  /* nop: no architectural effect here */
  /* 11d890: adr x21, #0x15791c */
  ARC_X_W(c, 21, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 11d894: nop  */
  /* nop: no architectural effect here */
  /* 11d898: adr x23, #0x1578f4 */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1407220)));
L_11d89c:;
  /* 11d89c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 11d8a0: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* 11d8a4: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1169576));
  fn1_142530(c);
  /* 11d8a8: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 11d8ac: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 11d8b0: b.eq #0x11d89c */
  if (ARC_COND(c, 0)) goto L_11d89c;
L_11d8b4:;
  /* 11d8b4: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 11d8b8: cbz x8, #0x11d8cc */
  if ((ARC_X_R(c, 8)) == 0) goto L_11d8cc;
  /* 11d8bc: nop  */
  /* nop: no architectural effect here */
  /* 11d8c0: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11d8c4: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1169608));
  fn1_142560(c);
  /* 11d8c8: b #0x11d92c */
  goto L_11d92c;
L_11d8cc:;
  /* 11d8cc: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 11d8d0: str x24, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 24));
  /* 11d8d4: strb wzr, [sp, #8] */
  arc_st8(((c)->sp + INT64_C(8)), ARC_W_R(c, 31));
  /* 11d8d8: str x8, [x24] */
  arc_st64(ARC_X_R(c, 24), ARC_X_R(c, 8));
  /* 11d8dc: nop  */
  /* nop: no architectural effect here */
  /* 11d8e0: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11d8e4: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1169640));
  fn1_142560(c);
  /* 11d8e8: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 11d8ec: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 11d8f0: ldr x1, [x1, #0xc58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3160))));
  /* 11d8f4: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1169656));
  fn1_a2030(c);
  /* 11d8f8: add w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + UINT64_C(1)));
  /* 11d8fc: str w8, [x24, #8] */
  arc_st32((ARC_X_R(c, 24) + INT64_C(8)), ARC_W_R(c, 8));
  /* 11d900: nop  */
  /* nop: no architectural effect here */
  /* 11d904: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11d908: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1169676));
  fn1_142518(c);
  /* 11d90c: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 11d910: stlr x8, [x24] */
  arc_st64(ARC_X_R(c, 24), ARC_X_R(c, 8));
  /* 11d914: nop  */
  /* nop: no architectural effect here */
  /* 11d918: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11d91c: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1169696));
  fn1_142560(c);
  /* 11d920: nop  */
  /* nop: no architectural effect here */
  /* 11d924: adr x0, #0x15791c */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 11d928: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1169708));
  fn1_142578(c);
L_11d92c:;
  /* 11d92c: ldrsw x8, [x24, #8] */
  ARC_X_W(c, 8, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 24) + INT64_C(8)))));
  /* 11d930: adrp x1, #0x15e000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 11d934: add x1, x1, #0x940 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2368)));
  /* 11d938: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 11d93c: sub x21, x8, #1 */
  ARC_X_W(c, 21, (ARC_X_R(c, 8) - UINT64_C(1)));
  /* 11d940: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1169732));
  fn1_db2e0(c);
  /* 11d944: ldp x8, x9, [x20, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 11d948: sub x9, x9, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - ARC_X_R(c, 8)));
  /* 11d94c: asr x10, x9, #3 */
  ARC_X_W(c, 10, ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(3)) & 63))));
  /* 11d950: cmp x10, x21 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 21));
  /* 11d954: b.hi #0x11d980 */
  if (ARC_COND(c, 8)) goto L_11d980;
  /* 11d958: add x9, x21, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 21) + UINT64_C(1)));
  /* 11d95c: subs x1, x9, x10 */
  ARC_X_W(c, 1, arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10)));
  /* 11d960: b.ls #0x11d974 */
  if (ARC_COND(c, 9)) goto L_11d974;
  /* 11d964: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 11d968: bl #0x1352bc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1169772));
  fn1_1352bc(c);
  /* 11d96c: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 11d970: b #0x11d980 */
  goto L_11d980;
L_11d974:;
  /* 11d974: b.hs #0x11d980 */
  if (ARC_COND(c, 2)) goto L_11d980;
  /* 11d978: add x9, x8, x9, lsl #3 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3)));
  /* 11d97c: str x9, [x20, #0x18] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(24)), ARC_X_R(c, 9));
L_11d980:;
  /* 11d980: ldr x20, [x8, x21, lsl #3] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 21)) << 3))));
  /* 11d984: cbz x20, #0x11d9a8 */
  if ((ARC_X_R(c, 20)) == 0) goto L_11d9a8;
  /* 11d988: add x1, x20, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* 11d98c: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 11d990: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1169812));
  fn1_bd950(c);
  /* 11d994: cbnz x0, #0x11d9a8 */
  if ((ARC_X_R(c, 0)) != 0) goto L_11d9a8;
  /* 11d998: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 11d99c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 11d9a0: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 11d9a4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1169832));
  arc_dispatch(c, ARC_X_R(c, 8));
L_11d9a8:;
  /* 11d9a8: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 11d9ac: str x22, [x8, x21, lsl #3] */
  arc_st64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 21)) << 3)), ARC_X_R(c, 22));
  /* 11d9b0: ldp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 11d9b4: ldr x27, [sp, #0x20] */
  ARC_X_W(c, 27, arc_ld64(((c)->sp + INT64_C(32))));
  /* 11d9b8: ldp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 11d9bc: ldp x24, x23, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 11d9c0: ldp x26, x25, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* 11d9c4: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 11d9c8: add sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(112)));
  /* 11d9cc: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 11d9d0: ret  */
  return;
L_11d9d4:;
  /* 11d9d4: nop  */
  /* nop: no architectural effect here */
  /* 11d9d8: adr x0, #0x15dc38 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 11d9dc: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1169888));
  fn1_1424b8(c);
  /* 11d9e0: cbz w0, #0x11d3f8 */
  if ((ARC_W_R(c, 0)) == 0) goto L_11d3f8;
  /* 11d9e4: adrp x1, #0x51000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(331776)));
  /* 11d9e8: add x1, x1, #0x6e4 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1764)));
  /* 11d9ec: mov w0, #0x1fbf */
  ARC_W_W(c, 0, UINT64_C(8127));
  /* 11d9f0: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 11d9f4: bl #0x1441e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1169912));
  fn1_1441e0(c);
  /* 11d9f8: str x0, [x24, #0xc30] */
  arc_st64((ARC_X_R(c, 24) + INT64_C(3120)), ARC_X_R(c, 0));
  /* 11d9fc: nop  */
  /* nop: no architectural effect here */
  /* 11da00: adr x0, #0x15dc38 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 11da04: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1169928));
  fn1_1424d0(c);
  /* 11da08: b #0x11d3f8 */
  goto L_11d3f8;
L_11da0c:;
  /* 11da0c: nop  */
  /* nop: no architectural effect here */
  /* 11da10: adr x0, #0x15dc38 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 11da14: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1169944));
  fn1_1424b8(c);
  /* 11da18: cbz w0, #0x11d578 */
  if ((ARC_W_R(c, 0)) == 0) goto L_11d578;
  /* 11da1c: adrp x1, #0x51000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(331776)));
  /* 11da20: add x1, x1, #0x6e4 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1764)));
  /* 11da24: mov w0, #0x1fbf */
  ARC_W_W(c, 0, UINT64_C(8127));
  /* 11da28: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 11da2c: bl #0x1441e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1169968));
  fn1_1441e0(c);
  /* 11da30: str x0, [x24, #0xc30] */
  arc_st64((ARC_X_R(c, 24) + INT64_C(3120)), ARC_X_R(c, 0));
  /* 11da34: nop  */
  /* nop: no architectural effect here */
  /* 11da38: adr x0, #0x15dc38 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 11da3c: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1169984));
  fn1_1424d0(c);
  /* 11da40: b #0x11d578 */
  goto L_11d578;
  /* 11da44: b #0x11da48 */
  goto L_11da48;
L_11da48:;
  /* 11da48: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 11da4c: nop  */
  /* nop: no architectural effect here */
  /* 11da50: adr x0, #0x15dc38 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 11da54: bl #0x1424e8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1170008));
  fn1_1424e8(c);
  /* 11da58: b #0x11dd80 */
  goto L_11dd80;
  /* 11da5c: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 11da60: adrp x1, #0x15e000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 11da64: add x1, x1, #0x940 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2368)));
  /* 11da68: b #0x11dc60 */
  goto L_11dc60;
  /* 11da6c: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 11da70: adrp x1, #0x15e000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 11da74: add x1, x1, #0x930 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2352)));
  /* 11da78: b #0x11dc3c */
  goto L_11dc3c;
  /* 11da7c: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 11da80: adrp x1, #0x15e000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 11da84: add x1, x1, #0x918 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2328)));
  /* 11da88: b #0x11dc60 */
  goto L_11dc60;
  /* 11da8c: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 11da90: adrp x1, #0x15e000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 11da94: add x1, x1, #0x900 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2304)));
  /* 11da98: b #0x11dc3c */
  goto L_11dc3c;
  /* 11da9c: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 11daa0: adrp x1, #0x15e000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 11daa4: add x1, x1, #0x8e8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2280)));
  /* 11daa8: b #0x11dad8 */
  goto L_11dad8;
  /* 11daac: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 11dab0: adrp x1, #0x15e000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 11dab4: add x1, x1, #0x8d0 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2256)));
  /* 11dab8: b #0x11dc60 */
  goto L_11dc60;
  /* 11dabc: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 11dac0: adrp x1, #0x15e000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 11dac4: add x1, x1, #0x8c0 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2240)));
  /* 11dac8: b #0x11dc3c */
  goto L_11dc3c;
  /* 11dacc: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 11dad0: adrp x1, #0x15e000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 11dad4: add x1, x1, #0x8b0 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2224)));
L_11dad8:;
  /* 11dad8: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 11dadc: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1170144));
  fn1_bd950(c);
  /* 11dae0: cbnz x0, #0x11dd80 */
  if ((ARC_X_R(c, 0)) != 0) goto L_11dd80;
  /* 11dae4: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 11dae8: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 11daec: b #0x11dc74 */
  goto L_11dc74;
  /* 11daf0: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 11daf4: adrp x1, #0x15e000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 11daf8: add x1, x1, #0x8a0 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2208)));
  /* 11dafc: b #0x11dc60 */
  goto L_11dc60;
  /* 11db00: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 11db04: adrp x1, #0x15e000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 11db08: add x1, x1, #0x890 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2192)));
  /* 11db0c: b #0x11dc3c */
  goto L_11dc3c;
  /* 11db10: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 11db14: adrp x1, #0x15e000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 11db18: add x1, x1, #0x880 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2176)));
  /* 11db1c: b #0x11dc60 */
  goto L_11dc60;
  /* 11db20: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 11db24: adrp x1, #0x15e000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 11db28: add x1, x1, #0x870 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2160)));
  /* 11db2c: b #0x11dc3c */
  goto L_11dc3c;
  /* 11db30: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 11db34: adrp x1, #0x15e000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 11db38: add x1, x1, #0x860 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2144)));
  /* 11db3c: b #0x11dc60 */
  goto L_11dc60;
  /* 11db40: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 11db44: adrp x1, #0x15e000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 11db48: add x1, x1, #0x850 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2128)));
  /* 11db4c: b #0x11dc3c */
  goto L_11dc3c;
  /* 11db50: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 11db54: adrp x1, #0x15e000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 11db58: add x1, x1, #0x840 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2112)));
  /* 11db5c: b #0x11dc60 */
  goto L_11dc60;
  /* 11db60: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 11db64: adrp x1, #0x15e000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 11db68: add x1, x1, #0x830 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2096)));
  /* 11db6c: b #0x11dc3c */
  goto L_11dc3c;
  /* 11db70: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 11db74: adrp x1, #0x15e000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 11db78: add x1, x1, #0x820 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2080)));
  /* 11db7c: b #0x11dc60 */
  goto L_11dc60;
  /* 11db80: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 11db84: adrp x1, #0x15e000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 11db88: add x1, x1, #0x810 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2064)));
  /* 11db8c: b #0x11dc3c */
  goto L_11dc3c;
  /* 11db90: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 11db94: adrp x1, #0x15e000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 11db98: add x1, x1, #0x7e0 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2016)));
  /* 11db9c: b #0x11dc60 */
  goto L_11dc60;
  /* 11dba0: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 11dba4: adrp x1, #0x15e000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 11dba8: add x1, x1, #0x7b0 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1968)));
  /* 11dbac: b #0x11dc60 */
  goto L_11dc60;
  /* 11dbb0: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 11dbb4: adrp x1, #0x15e000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 11dbb8: add x1, x1, #0x7a0 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1952)));
  /* 11dbbc: b #0x11dc60 */
  goto L_11dc60;
  /* 11dbc0: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 11dbc4: adrp x1, #0x15e000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 11dbc8: add x1, x1, #0x790 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1936)));
  /* 11dbcc: b #0x11dc3c */
  goto L_11dc3c;
  /* 11dbd0: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 11dbd4: adrp x1, #0x15e000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 11dbd8: add x1, x1, #0x780 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1920)));
  /* 11dbdc: b #0x11dc60 */
  goto L_11dc60;
  /* 11dbe0: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 11dbe4: adrp x1, #0x15e000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 11dbe8: add x1, x1, #0x770 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1904)));
  /* 11dbec: b #0x11dc3c */
  goto L_11dc3c;
  /* 11dbf0: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 11dbf4: adrp x1, #0x15e000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 11dbf8: add x1, x1, #0x758 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1880)));
  /* 11dbfc: b #0x11dc60 */
  goto L_11dc60;
  /* 11dc00: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 11dc04: adrp x1, #0x15e000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 11dc08: add x1, x1, #0x748 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1864)));
  /* 11dc0c: b #0x11dc60 */
  goto L_11dc60;
  /* 11dc10: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 11dc14: adrp x1, #0x15e000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 11dc18: add x1, x1, #0x738 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1848)));
  /* 11dc1c: b #0x11dc3c */
  goto L_11dc3c;
  /* 11dc20: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 11dc24: adrp x1, #0x15e000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 11dc28: add x1, x1, #0x718 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1816)));
  /* 11dc2c: b #0x11dc60 */
  goto L_11dc60;
  /* 11dc30: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 11dc34: adrp x1, #0x15e000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 11dc38: add x1, x1, #0x708 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1800)));
L_11dc3c:;
  /* 11dc3c: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 11dc40: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1170500));
  fn1_bd950(c);
  /* 11dc44: cbnz x0, #0x11dd80 */
  if ((ARC_X_R(c, 0)) != 0) goto L_11dd80;
  /* 11dc48: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 11dc4c: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 11dc50: b #0x11dc74 */
  goto L_11dc74;
  /* 11dc54: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 11dc58: adrp x1, #0x15e000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 11dc5c: add x1, x1, #0x6f8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1784)));
L_11dc60:;
  /* 11dc60: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 11dc64: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1170536));
  fn1_bd950(c);
  /* 11dc68: cbnz x0, #0x11dd80 */
  if ((ARC_X_R(c, 0)) != 0) goto L_11dd80;
  /* 11dc6c: ldr x8, [x22] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 22)));
  /* 11dc70: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
L_11dc74:;
  /* 11dc74: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 11dc78: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1170556));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 11dc7c: b #0x11dd80 */
  goto L_11dd80;
  /* 11dc80: b #0x11dcf4 */
  goto L_11dcf4;
  /* 11dc84: b #0x11dcf4 */
  goto L_11dcf4;
  /* 11dc88: b #0x11dcf4 */
  goto L_11dcf4;
  /* 11dc8c: b #0x11dcf4 */
  goto L_11dcf4;
  /* 11dc90: b #0x11dcf4 */
  goto L_11dcf4;
  /* 11dc94: b #0x11dcf4 */
  goto L_11dcf4;
  /* 11dc98: b #0x11dcf4 */
  goto L_11dcf4;
  /* 11dc9c: b #0x11dcf4 */
  goto L_11dcf4;
  /* 11dca0: b #0x11dcf4 */
  goto L_11dcf4;
  /* 11dca4: b #0x11dcf4 */
  goto L_11dcf4;
  /* 11dca8: b #0x11dcf4 */
  goto L_11dcf4;
  /* 11dcac: b #0x11dcf4 */
  goto L_11dcf4;
  /* 11dcb0: b #0x11dcf4 */
  goto L_11dcf4;
  /* 11dcb4: b #0x11dcf4 */
  goto L_11dcf4;
  /* 11dcb8: b #0x11dcf4 */
  goto L_11dcf4;
  /* 11dcbc: b #0x11dcf4 */
  goto L_11dcf4;
  /* 11dcc0: b #0x11dcf4 */
  goto L_11dcf4;
  /* 11dcc4: b #0x11dcf4 */
  goto L_11dcf4;
  /* 11dcc8: b #0x11dcf4 */
  goto L_11dcf4;
  /* 11dccc: b #0x11dcf4 */
  goto L_11dcf4;
  /* 11dcd0: b #0x11dcf4 */
  goto L_11dcf4;
  /* 11dcd4: b #0x11dcf4 */
  goto L_11dcf4;
  /* 11dcd8: b #0x11dcf4 */
  goto L_11dcf4;
  /* 11dcdc: b #0x11dcf4 */
  goto L_11dcf4;
  /* 11dce0: b #0x11dcf4 */
  goto L_11dcf4;
  /* 11dce4: b #0x11dcf4 */
  goto L_11dcf4;
  /* 11dce8: b #0x11dcf4 */
  goto L_11dcf4;
  /* 11dcec: b #0x11dcf4 */
  goto L_11dcf4;
  /* 11dcf0: b #0x11dcf4 */
  goto L_11dcf4;
L_11dcf4:;
  /* 11dcf4: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 11dcf8: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 11dcfc: bl #0xd2a78 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1170688));
  fn1_d2a78(c);
  /* 11dd00: b #0x11dd80 */
  goto L_11dd80;
  /* 11dd04: b #0x11dd7c */
  goto L_11dd7c;
  /* 11dd08: b #0x11dd7c */
  goto L_11dd7c;
  /* 11dd0c: b #0x11dd7c */
  goto L_11dd7c;
  /* 11dd10: b #0x11dd7c */
  goto L_11dd7c;
  /* 11dd14: b #0x11dd7c */
  goto L_11dd7c;
  /* 11dd18: b #0x11dd7c */
  goto L_11dd7c;
  /* 11dd1c: b #0x11dd7c */
  goto L_11dd7c;
  /* 11dd20: b #0x11dd7c */
  goto L_11dd7c;
  /* 11dd24: b #0x11dd7c */
  goto L_11dd7c;
  /* 11dd28: b #0x11dd7c */
  goto L_11dd7c;
  /* 11dd2c: b #0x11dd7c */
  goto L_11dd7c;
  /* 11dd30: b #0x11dd7c */
  goto L_11dd7c;
  /* 11dd34: b #0x11dd7c */
  goto L_11dd7c;
  /* 11dd38: b #0x11dd7c */
  goto L_11dd7c;
  /* 11dd3c: b #0x11dd7c */
  goto L_11dd7c;
  /* 11dd40: b #0x11dd7c */
  goto L_11dd7c;
  /* 11dd44: b #0x11dd7c */
  goto L_11dd7c;
  /* 11dd48: b #0x11dd7c */
  goto L_11dd7c;
  /* 11dd4c: b #0x11dd7c */
  goto L_11dd7c;
  /* 11dd50: b #0x11dd7c */
  goto L_11dd7c;
  /* 11dd54: b #0x11dd7c */
  goto L_11dd7c;
  /* 11dd58: b #0x11dd7c */
  goto L_11dd7c;
  /* 11dd5c: b #0x11dd7c */
  goto L_11dd7c;
  /* 11dd60: b #0x11dd7c */
  goto L_11dd7c;
  /* 11dd64: b #0x11dd7c */
  goto L_11dd7c;
  /* 11dd68: b #0x11dd7c */
  goto L_11dd7c;
  /* 11dd6c: b #0x11dd7c */
  goto L_11dd7c;
  /* 11dd70: b #0x11dd7c */
  goto L_11dd7c;
  /* 11dd74: b #0x11dd7c */
  goto L_11dd7c;
  /* 11dd78: b #0x11dd7c */
  goto L_11dd7c;
L_11dd7c:;
  /* 11dd7c: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
L_11dd80:;
  /* 11dd80: ldrb w8, [x20, #0x120] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 20) + INT64_C(288))));
  /* 11dd84: tbz w8, #0, #0x11dd98 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_11dd98;
  /* 11dd88: ldr x8, [x20, #0x120] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(288))));
  /* 11dd8c: ldr x0, [x20, #0x130] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 20) + INT64_C(304))));
  /* 11dd90: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 11dd94: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1170840));
  fn1_142608(c);
L_11dd98:;
  /* 11dd98: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 11dd9c: bl #0x11de44 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1170848));
  fn1_11de44(c);
  /* 11dda0: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 11dda4: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1170856));
  fn1_9cc20(c);
}

void fn1_125fa0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039132064));
  /* 125fa0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 125fa4: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 125fa8: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 125fac: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 125fb0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 125fb4: bl #0x143eb0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1204152));
  fn1_143eb0(c);
  /* 125fb8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 125fbc: mov w1, #0x18 */
  ARC_W_W(c, 1, UINT64_C(24));
  /* 125fc0: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 125fc4: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 125fc8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 125fcc: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_12867c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039142012));
  /* 12867c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 128680: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 128684: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 128688: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 12868c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 128690: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 128694: ldr x0, [x0, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 128698: bl #0x1443c0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1214108));
  fn1_1443c0(c);
  /* 12869c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 1286a0: str x0, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 0));
  /* 1286a4: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
  /* 1286a8: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 1286ac: mov w2, #4 */
  ARC_W_W(c, 2, UINT64_C(4));
  /* 1286b0: bl #0x144450 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1214132));
  fn1_144450(c);
  /* 1286b4: mov w21, w0 */
  ARC_W_W(c, 21, ARC_W_R(c, 0));
  /* 1286b8: cbz x20, #0x1286c4 */
  if ((ARC_X_R(c, 20)) == 0) goto L_1286c4;
  /* 1286bc: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1286c0: bl #0x1443c0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1214148));
  fn1_1443c0(c);
L_1286c4:;
  /* 1286c4: cbz w21, #0x1286d0 */
  if ((ARC_W_R(c, 21)) == 0) goto L_1286d0;
  /* 1286c8: mov w0, #-1 */
  ARC_W_W(c, 0, UINT64_C(18446744073709551615));
  /* 1286cc: b #0x128708 */
  goto L_128708;
L_1286d0:;
  /* 1286d0: ldr x0, [x19, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* 1286d4: cbz x0, #0x128704 */
  if ((ARC_X_R(c, 0)) == 0) goto L_128704;
  /* 1286d8: bl #0x1443c0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1214172));
  fn1_1443c0(c);
  /* 1286dc: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1286e0: str x0, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 0));
  /* 1286e4: bl #0x144468 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1214184));
  fn1_144468(c);
  /* 1286e8: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 1286ec: cbz x19, #0x1286f8 */
  if ((ARC_X_R(c, 19)) == 0) goto L_1286f8;
  /* 1286f0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1286f4: bl #0x1443c0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1214200));
  fn1_1443c0(c);
L_1286f8:;
  /* 1286f8: cmp x20, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 20), UINT64_C(1));
  /* 1286fc: cset w0, eq */
  ARC_W_W(c, 0, (ARC_COND(c, 0) ? 1 : 0));
  /* 128700: b #0x128708 */
  goto L_128708;
L_128704:;
  /* 128704: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
L_128708:;
  /* 128708: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 12870c: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 128710: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 128714: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 128718: ret  */
  return;
  /* 12871c: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1214240));
  fn1_a1454(c);
  /* 128720: b #0x128728 */
  goto L_128728;
  /* 128724: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1214248));
  fn1_a1454(c);
L_128728:;
  /* 128728: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 12872c: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 128730: bl #0x135428 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1214260));
  fn1_135428(c);
  /* 128734: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 128738: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1214268));
  fn1_a1454(c);
  /* 12873c: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1214272));
  fn1_a1454(c);
}

void fn1_12a380(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039149440));
  /* 12a380: bti c */
  /* bti: no architectural effect here */
  /* 12a384: sub x8, x3, x2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 3) - ARC_X_R(c, 2)));
  /* 12a388: cmp x8, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(2));
  /* 12a38c: b.lt #0x12a3b4 */
  if (ARC_COND(c, 11)) goto L_12a3b4;
  /* 12a390: ldr w8, [x0, #0x20] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 0) + INT64_C(32))));
  /* 12a394: tbz w8, #2, #0x12a3b4 */
  if (((ARC_W_R(c, 8)) >> 2 & 1) == 0) goto L_12a3b4;
  /* 12a398: ldrb w8, [x2] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 2)));
  /* 12a39c: cmp w8, #0xfe */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(254));
  /* 12a3a0: b.ne #0x12a3b4 */
  if (ARC_COND(c, 1)) goto L_12a3b4;
  /* 12a3a4: ldrb w8, [x2, #1] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 2) + INT64_C(1))));
  /* 12a3a8: cmp w8, #0xff */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(255));
  /* 12a3ac: cset w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? 1 : 0));
  /* 12a3b0: add x2, x2, w8, uxtw #1 */
  ARC_X_W(c, 2, (ARC_X_R(c, 2) + ((uint64_t)(((uint64_t)(uint32_t)(ARC_W_R(c, 8)))) << 1)));
L_12a3b4:;
  /* 12a3b4: sub x8, x3, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 3) - UINT64_C(1)));
  /* 12a3b8: cmp x2, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 2), ARC_X_R(c, 8));
  /* 12a3bc: b.hs #0x12a458 */
  if (ARC_COND(c, 2)) goto L_12a458;
  /* 12a3c0: ldr x9, [x0, #0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(24))));
  /* 12a3c4: mov w10, #0xd800 */
  ARC_W_W(c, 10, UINT64_C(55296));
  /* 12a3c8: mov w11, #0xdc00 */
  ARC_W_W(c, 11, UINT64_C(56320));
  /* 12a3cc: b #0x12a3e0 */
  goto L_12a3e0;
L_12a3d0:;
  /* 12a3d0: add x2, x2, x0 */
  ARC_X_W(c, 2, (ARC_X_R(c, 2) + ARC_X_R(c, 0)));
  /* 12a3d4: str w12, [x5], #4 */
  { const uint64_t _a = ARC_X_R(c, 5);
    ARC_X_W(c, 5, ARC_X_R(c, 5) + INT64_C(4));
    arc_st32(_a, ARC_W_R(c, 12));
  }
  /* 12a3d8: cmp x2, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 2), ARC_X_R(c, 8));
  /* 12a3dc: b.hs #0x12a458 */
  if (ARC_COND(c, 2)) goto L_12a458;
L_12a3e0:;
  /* 12a3e0: cmp x5, x6 */
  (void)arc_sub64(c, ARC_X_R(c, 5), ARC_X_R(c, 6));
  /* 12a3e4: b.hs #0x12a458 */
  if (ARC_COND(c, 2)) goto L_12a458;
  /* 12a3e8: ldrb w14, [x2] */
  ARC_W_W(c, 14, arc_ld8(ARC_X_R(c, 2)));
  /* 12a3ec: ldrb w12, [x2, #1] */
  ARC_W_W(c, 12, arc_ld8((ARC_X_R(c, 2) + INT64_C(1))));
  /* 12a3f0: lsl w13, w14, #8 */
  ARC_W_W(c, 13, ((uint32_t)(ARC_W_R(c, 14)) << ((UINT64_C(8)) & 31)));
  /* 12a3f4: bfi w12, w14, #8, #8 */
  ARC_W_W(c, 12, (((uint32_t)(ARC_W_R(c, 12)) & UINT64_C(4294902015)) | ((((uint32_t)(ARC_W_R(c, 14))) & UINT64_C(255)) << 8)));
  /* 12a3f8: and w13, w13, #0xfc00 */
  ARC_W_W(c, 13, (ARC_W_R(c, 13) & UINT64_C(64512)));
  /* 12a3fc: cmp w13, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 13), ARC_W_R(c, 10));
  /* 12a400: b.eq #0x12a41c */
  if (ARC_COND(c, 0)) goto L_12a41c;
  /* 12a404: cmp w13, w11 */
  (void)arc_sub32(c, ARC_W_R(c, 13), ARC_W_R(c, 11));
  /* 12a408: b.eq #0x12a46c */
  if (ARC_COND(c, 0)) goto L_12a46c;
  /* 12a40c: cmp x9, w12, uxtw */
  (void)arc_sub64(c, ARC_X_R(c, 9), ((uint64_t)(uint32_t)(ARC_W_R(c, 12))));
  /* 12a410: mov w0, #2 */
  ARC_W_W(c, 0, UINT64_C(2));
  /* 12a414: b.hs #0x12a3d0 */
  if (ARC_COND(c, 2)) goto L_12a3d0;
  /* 12a418: b #0x12a460 */
  goto L_12a460;
L_12a41c:;
  /* 12a41c: sub x13, x3, x2 */
  ARC_X_W(c, 13, (ARC_X_R(c, 3) - ARC_X_R(c, 2)));
  /* 12a420: cmp x13, #4 */
  (void)arc_sub64(c, ARC_X_R(c, 13), UINT64_C(4));
  /* 12a424: b.lt #0x12a474 */
  if (ARC_COND(c, 11)) goto L_12a474;
  /* 12a428: ldrb w13, [x2, #2] */
  ARC_W_W(c, 13, arc_ld8((ARC_X_R(c, 2) + INT64_C(2))));
  /* 12a42c: and w14, w13, #0xfc */
  ARC_W_W(c, 14, (ARC_W_R(c, 13) & UINT64_C(252)));
  /* 12a430: cmp w14, #0xdc */
  (void)arc_sub32(c, ARC_W_R(c, 14), UINT64_C(220));
  /* 12a434: b.ne #0x12a46c */
  if (ARC_COND(c, 1)) goto L_12a46c;
  /* 12a438: ldrb w14, [x2, #3] */
  ARC_W_W(c, 14, arc_ld8((ARC_X_R(c, 2) + INT64_C(3))));
  /* 12a43c: bfi w14, w13, #8, #2 */
  ARC_W_W(c, 14, (((uint32_t)(ARC_W_R(c, 14)) & UINT64_C(4294966527)) | ((((uint32_t)(ARC_W_R(c, 13))) & UINT64_C(3)) << 8)));
  /* 12a440: bfi w14, w12, #0xa, #0xa */
  ARC_W_W(c, 14, (((uint32_t)(ARC_W_R(c, 14)) & UINT64_C(4293919743)) | ((((uint32_t)(ARC_W_R(c, 12))) & UINT64_C(1023)) << 10)));
  /* 12a444: add w12, w14, #0x10, lsl #12 */
  ARC_W_W(c, 12, (ARC_W_R(c, 14) + UINT64_C(65536)));
  /* 12a448: cmp x9, x12 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 12));
  /* 12a44c: b.lo #0x12a46c */
  if (ARC_COND(c, 3)) goto L_12a46c;
  /* 12a450: mov w0, #4 */
  ARC_W_W(c, 0, UINT64_C(4));
  /* 12a454: b #0x12a3d0 */
  goto L_12a3d0;
L_12a458:;
  /* 12a458: cmp x2, x3 */
  (void)arc_sub64(c, ARC_X_R(c, 2), ARC_X_R(c, 3));
  /* 12a45c: cset w0, lo */
  ARC_W_W(c, 0, (ARC_COND(c, 3) ? 1 : 0));
L_12a460:;
  /* 12a460: str x2, [x4] */
  arc_st64(ARC_X_R(c, 4), ARC_X_R(c, 2));
  /* 12a464: str x5, [x7] */
  arc_st64(ARC_X_R(c, 7), ARC_X_R(c, 5));
  /* 12a468: ret  */
  return;
L_12a46c:;
  /* 12a46c: mov w0, #2 */
  ARC_W_W(c, 0, UINT64_C(2));
  /* 12a470: b #0x12a460 */
  goto L_12a460;
L_12a474:;
  /* 12a474: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 12a478: b #0x12a460 */
  goto L_12a460;
}

void fn1_12bb0c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039155468));
  /* 12bb0c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 12bb10: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 12bb14: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 12bb18: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 12bb1c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 12bb20: bl #0x1440a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1227556));
  fn1_1440a8(c);
  /* 12bb24: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 12bb28: mov w1, #0x10 */
  ARC_W_W(c, 1, UINT64_C(16));
  /* 12bb2c: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 12bb30: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 12bb34: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 12bb38: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_1316b8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039178936));
  /* 1316b8: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 1316bc: sub sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(96)));
  /* 1316c0: stp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1316c4: str x21, [sp, #0x40] */
  arc_st64(((c)->sp + INT64_C(64)), ARC_X_R(c, 21));
  /* 1316c8: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1316cc: add x29, sp, #0x30 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(48)));
  /* 1316d0: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 1316d4: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1316d8: bl #0x143bc8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1251036));
  fn1_143bc8(c);
  /* 1316dc: add x0, x19, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(8)));
  /* 1316e0: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* 1316e4: mov w2, #0x420 */
  ARC_W_W(c, 2, UINT64_C(1056));
  /* 1316e8: bl #0x144a20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1251052));
  fn1_144a20(c);
  /* 1316ec: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1316f0: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 1316f4: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* 1316f8: bl #0x143af0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1251068));
  fn1_143af0(c);
  /* 1316fc: adrp x8, #0x150000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1376256)));
  /* 131700: add x8, x8, #0x828 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2088)));
  /* 131704: str x8, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 8));
  /* 131708: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 13170c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 131710: bl #0x143c28 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1251092));
  fn1_143c28(c);
  /* 131714: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 131718: ldr x8, [x8, #0xc78] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3192))));
  /* 13171c: ldr x0, [sp, #0x28] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(40))));
  /* 131720: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* 131724: str x8, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 8));
  /* 131728: bl #0x144210 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1251116));
  fn1_144210(c);
  /* 13172c: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 131730: ldr x8, [x8, #0xc70] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3184))));
  /* 131734: ldr x0, [sp, #0x18] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(24))));
  /* 131738: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* 13173c: str x8, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 8));
  /* 131740: cbz x0, #0x131754 */
  if ((ARC_X_R(c, 0)) == 0) goto L_131754;
  /* 131744: ldrb w8, [sp, #0x20] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(32))));
  /* 131748: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* 13174c: b.ne #0x131754 */
  if (ARC_COND(c, 1)) goto L_131754;
  /* 131750: bl #0x1425a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1251156));
  fn1_1425a8(c);
L_131754:;
  /* 131754: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 131758: ldr x21, [sp, #0x40] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(64))));
  /* 13175c: ldp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 131760: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* 131764: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 131768: ret  */
  return;
  /* 13176c: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1251184));
  fn1_a1454(c);
  /* 131770: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 131774: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 131778: bl #0x143c58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1251196));
  fn1_143c58(c);
  /* 13177c: b #0x131784 */
  goto L_131784;
  /* 131780: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
L_131784:;
  /* 131784: ldrb w8, [x19, #0x410] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(1040))));
  /* 131788: tbnz w8, #0, #0x131830 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_131830;
  /* 13178c: ldrb w8, [x19, #0x3f8] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(1016))));
  /* 131790: tbnz w8, #0, #0x131848 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_131848;
L_131794:;
  /* 131794: ldrb w8, [x19, #0x3e0] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(992))));
  /* 131798: tbnz w8, #0, #0x131860 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_131860;
L_13179c:;
  /* 13179c: ldrb w8, [x19, #0x3c8] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(968))));
  /* 1317a0: tbnz w8, #0, #0x131878 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_131878;
L_1317a4:;
  /* 1317a4: ldrb w8, [x19, #0x3b0] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(944))));
  /* 1317a8: tbnz w8, #0, #0x131890 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_131890;
L_1317ac:;
  /* 1317ac: ldrb w8, [x19, #0x398] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(920))));
  /* 1317b0: tbz w8, #0, #0x1317c4 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1317c4;
L_1317b4:;
  /* 1317b4: ldr x8, [x19, #0x398] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(920))));
  /* 1317b8: ldr x0, [x19, #0x3a8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(936))));
  /* 1317bc: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 1317c0: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1251268));
  fn1_142608(c);
L_1317c4:;
  /* 1317c4: mov w21, #0x240 */
  ARC_W_W(c, 21, UINT64_C(576));
  /* 1317c8: b #0x1317d4 */
  goto L_1317d4;
L_1317cc:;
  /* 1317cc: subs x21, x21, #0x18 */
  ARC_X_W(c, 21, arc_sub64(c, ARC_X_R(c, 21), UINT64_C(24)));
  /* 1317d0: b.eq #0x131800 */
  if (ARC_COND(c, 0)) goto L_131800;
L_1317d4:;
  /* 1317d4: add x8, x19, x21 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 21)));
  /* 1317d8: ldrb w9, [x8, #0x140] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 8) + INT64_C(320))));
  /* 1317dc: tbz w9, #0, #0x1317cc */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_1317cc;
  /* 1317e0: ldr x0, [x8, #0x150] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(336))));
  /* 1317e4: ldr x8, [x8, #0x140] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(320))));
  /* 1317e8: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 1317ec: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1251312));
  fn1_142608(c);
  /* 1317f0: b #0x1317cc */
  goto L_1317cc;
L_1317f4:;
  /* 1317f4: sub x21, x21, #0x18 */
  ARC_X_W(c, 21, (ARC_X_R(c, 21) - UINT64_C(24)));
  /* 1317f8: cmn x21, #0x150 */
  (void)arc_add64(c, ARC_X_R(c, 21), UINT64_C(336), 0);
  /* 1317fc: b.eq #0x131820 */
  if (ARC_COND(c, 0)) goto L_131820;
L_131800:;
  /* 131800: add x8, x19, x21 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 21)));
  /* 131804: ldrb w9, [x8, #0x140] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 8) + INT64_C(320))));
  /* 131808: tbz w9, #0, #0x1317f4 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_1317f4;
  /* 13180c: ldr x0, [x8, #0x150] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(336))));
  /* 131810: ldr x8, [x8, #0x140] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(320))));
  /* 131814: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 131818: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1251356));
  fn1_142608(c);
  /* 13181c: b #0x1317f4 */
  goto L_1317f4;
L_131820:;
  /* 131820: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 131824: bl #0x143be0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1251368));
  fn1_143be0(c);
  /* 131828: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 13182c: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1251376));
  fn1_9cc20(c);
L_131830:;
  /* 131830: ldr x8, [x19, #0x410] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(1040))));
  /* 131834: ldr x0, [x19, #0x420] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(1056))));
  /* 131838: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 13183c: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1251392));
  fn1_142608(c);
  /* 131840: ldrb w8, [x19, #0x3f8] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(1016))));
  /* 131844: tbz w8, #0, #0x131794 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_131794;
L_131848:;
  /* 131848: ldr x8, [x19, #0x3f8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(1016))));
  /* 13184c: ldr x0, [x19, #0x408] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(1032))));
  /* 131850: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 131854: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1251416));
  fn1_142608(c);
  /* 131858: ldrb w8, [x19, #0x3e0] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(992))));
  /* 13185c: tbz w8, #0, #0x13179c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13179c;
L_131860:;
  /* 131860: ldr x8, [x19, #0x3e0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(992))));
  /* 131864: ldr x0, [x19, #0x3f0] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(1008))));
  /* 131868: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 13186c: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1251440));
  fn1_142608(c);
  /* 131870: ldrb w8, [x19, #0x3c8] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(968))));
  /* 131874: tbz w8, #0, #0x1317a4 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1317a4;
L_131878:;
  /* 131878: ldr x8, [x19, #0x3c8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(968))));
  /* 13187c: ldr x0, [x19, #0x3d8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(984))));
  /* 131880: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 131884: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1251464));
  fn1_142608(c);
  /* 131888: ldrb w8, [x19, #0x3b0] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(944))));
  /* 13188c: tbz w8, #0, #0x1317ac */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1317ac;
L_131890:;
  /* 131890: ldr x8, [x19, #0x3b0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(944))));
  /* 131894: ldr x0, [x19, #0x3c0] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(960))));
  /* 131898: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 13189c: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1251488));
  fn1_142608(c);
  /* 1318a0: ldrb w8, [x19, #0x398] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(920))));
  /* 1318a4: tbnz w8, #0, #0x1317b4 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_1317b4;
  /* 1318a8: b #0x1317c4 */
  goto L_1317c4;
}

void fn1_134b84(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039192452));
  /* 134b84: bti c */
  /* bti: no architectural effect here */
  /* 134b88: add x0, x0, #0x160 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(352)));
  /* 134b8c: ret  */
  return;
}

void fn1_136b34(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039200564));
  /* 136b34: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 136b38: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 136b3c: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 136b40: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 136b44: ldrb w8, [x0, #0x410] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 0) + INT64_C(1040))));
  /* 136b48: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 136b4c: tbnz w8, #0, #0x136c08 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_136c08;
  /* 136b50: ldrb w8, [x19, #0x3f8] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(1016))));
  /* 136b54: tbnz w8, #0, #0x136c24 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_136c24;
L_136b58:;
  /* 136b58: ldrb w8, [x19, #0x3e0] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(992))));
  /* 136b5c: tbnz w8, #0, #0x136c40 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_136c40;
L_136b60:;
  /* 136b60: ldrb w8, [x19, #0x3c8] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(968))));
  /* 136b64: tbnz w8, #0, #0x136c5c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_136c5c;
L_136b68:;
  /* 136b68: ldrb w8, [x19, #0x3b0] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(944))));
  /* 136b6c: tbnz w8, #0, #0x136c78 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_136c78;
L_136b70:;
  /* 136b70: ldrb w8, [x19, #0x398] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(920))));
  /* 136b74: tbz w8, #0, #0x136b8c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_136b8c;
L_136b78:;
  /* 136b78: ldr x8, [x19, #0x398] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(920))));
  /* 136b7c: ldr x0, [x19, #0x3a8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(936))));
  /* 136b80: lsl x8, x8, #2 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) << ((UINT64_C(2)) & 63)));
  /* 136b84: and x1, x8, #0xfffffffffffffff8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551608)));
  /* 136b88: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1272716));
  fn1_142608(c);
L_136b8c:;
  /* 136b8c: mov w20, #0x240 */
  ARC_W_W(c, 20, UINT64_C(576));
  /* 136b90: b #0x136b9c */
  goto L_136b9c;
L_136b94:;
  /* 136b94: subs x20, x20, #0x18 */
  ARC_X_W(c, 20, arc_sub64(c, ARC_X_R(c, 20), UINT64_C(24)));
  /* 136b98: b.eq #0x136bcc */
  if (ARC_COND(c, 0)) goto L_136bcc;
L_136b9c:;
  /* 136b9c: add x8, x19, x20 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 20)));
  /* 136ba0: ldrb w9, [x8, #0x140] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 8) + INT64_C(320))));
  /* 136ba4: tbz w9, #0, #0x136b94 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_136b94;
  /* 136ba8: ldr x9, [x8, #0x140] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(320))));
  /* 136bac: ldr x0, [x8, #0x150] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(336))));
  /* 136bb0: lsl x8, x9, #2 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 9)) << ((UINT64_C(2)) & 63)));
  /* 136bb4: and x1, x8, #0xfffffffffffffff8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551608)));
  /* 136bb8: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1272764));
  fn1_142608(c);
  /* 136bbc: b #0x136b94 */
  goto L_136b94;
L_136bc0:;
  /* 136bc0: sub x20, x20, #0x18 */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) - UINT64_C(24)));
  /* 136bc4: cmn x20, #0x150 */
  (void)arc_add64(c, ARC_X_R(c, 20), UINT64_C(336), 0);
  /* 136bc8: b.eq #0x136bf0 */
  if (ARC_COND(c, 0)) goto L_136bf0;
L_136bcc:;
  /* 136bcc: add x8, x19, x20 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 20)));
  /* 136bd0: ldrb w9, [x8, #0x140] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 8) + INT64_C(320))));
  /* 136bd4: tbz w9, #0, #0x136bc0 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_136bc0;
  /* 136bd8: ldr x9, [x8, #0x140] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(320))));
  /* 136bdc: ldr x0, [x8, #0x150] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(336))));
  /* 136be0: lsl x8, x9, #2 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 9)) << ((UINT64_C(2)) & 63)));
  /* 136be4: and x1, x8, #0xfffffffffffffff8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551608)));
  /* 136be8: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1272812));
  fn1_142608(c);
  /* 136bec: b #0x136bc0 */
  goto L_136bc0;
L_136bf0:;
  /* 136bf0: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* 136bf4: bl #0x144210 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1272824));
  fn1_144210(c);
  /* 136bf8: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 136bfc: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 136c00: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 136c04: ret  */
  return;
L_136c08:;
  /* 136c08: ldr x8, [x19, #0x410] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(1040))));
  /* 136c0c: ldr x0, [x19, #0x420] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(1056))));
  /* 136c10: lsl x8, x8, #2 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) << ((UINT64_C(2)) & 63)));
  /* 136c14: and x1, x8, #0xfffffffffffffff8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551608)));
  /* 136c18: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1272860));
  fn1_142608(c);
  /* 136c1c: ldrb w8, [x19, #0x3f8] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(1016))));
  /* 136c20: tbz w8, #0, #0x136b58 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_136b58;
L_136c24:;
  /* 136c24: ldr x8, [x19, #0x3f8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(1016))));
  /* 136c28: ldr x0, [x19, #0x408] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(1032))));
  /* 136c2c: lsl x8, x8, #2 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) << ((UINT64_C(2)) & 63)));
  /* 136c30: and x1, x8, #0xfffffffffffffff8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551608)));
  /* 136c34: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1272888));
  fn1_142608(c);
  /* 136c38: ldrb w8, [x19, #0x3e0] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(992))));
  /* 136c3c: tbz w8, #0, #0x136b60 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_136b60;
L_136c40:;
  /* 136c40: ldr x8, [x19, #0x3e0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(992))));
  /* 136c44: ldr x0, [x19, #0x3f0] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(1008))));
  /* 136c48: lsl x8, x8, #2 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) << ((UINT64_C(2)) & 63)));
  /* 136c4c: and x1, x8, #0xfffffffffffffff8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551608)));
  /* 136c50: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1272916));
  fn1_142608(c);
  /* 136c54: ldrb w8, [x19, #0x3c8] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(968))));
  /* 136c58: tbz w8, #0, #0x136b68 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_136b68;
L_136c5c:;
  /* 136c5c: ldr x8, [x19, #0x3c8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(968))));
  /* 136c60: ldr x0, [x19, #0x3d8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(984))));
  /* 136c64: lsl x8, x8, #2 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) << ((UINT64_C(2)) & 63)));
  /* 136c68: and x1, x8, #0xfffffffffffffff8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551608)));
  /* 136c6c: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1272944));
  fn1_142608(c);
  /* 136c70: ldrb w8, [x19, #0x3b0] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(944))));
  /* 136c74: tbz w8, #0, #0x136b70 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_136b70;
L_136c78:;
  /* 136c78: ldr x8, [x19, #0x3b0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(944))));
  /* 136c7c: ldr x0, [x19, #0x3c0] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(960))));
  /* 136c80: lsl x8, x8, #2 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) << ((UINT64_C(2)) & 63)));
  /* 136c84: and x1, x8, #0xfffffffffffffff8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551608)));
  /* 136c88: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1272972));
  fn1_142608(c);
  /* 136c8c: ldrb w8, [x19, #0x398] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(920))));
  /* 136c90: tbnz w8, #0, #0x136b78 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_136b78;
  /* 136c94: b #0x136b8c */
  goto L_136b8c;
  /* 136c98: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1272988));
  fn1_a1454(c);
}

void fn1_13986c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039212140));
  /* 13986c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 139870: sub sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(112)));
  /* 139874: stp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 139878: stp x24, x23, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 13987c: stp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 139880: stp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 139884: add x29, sp, #0x30 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(48)));
  /* 139888: mov w21, w3 */
  ARC_W_W(c, 21, ARC_W_R(c, 3));
  /* 13988c: mov x20, x2 */
  ARC_X_W(c, 20, ARC_X_R(c, 2));
  /* 139890: mov x22, x1 */
  ARC_X_W(c, 22, ARC_X_R(c, 1));
  /* 139894: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 139898: nop  */
  /* nop: no architectural effect here */
  /* 13989c: adr x8, #0x50df8 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(331256)));
  /* 1398a0: nop  */
  /* nop: no architectural effect here */
  /* 1398a4: adr x23, #0x156d40 */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1404224)));
  /* 1398a8: stp xzr, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 1398ac: stp x8, x2, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 2));
  }
  /* 1398b0: stp x1, xzr, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 1));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 1398b4: cbz x2, #0x1398d4 */
  if ((ARC_X_R(c, 2)) == 0) goto L_1398d4;
  /* 1398b8: str wzr, [x20] */
  arc_st32(ARC_X_R(c, 20), ARC_W_R(c, 31));
  /* 1398bc: nop  */
  /* nop: no architectural effect here */
  /* 1398c0: adr x8, #0x159210 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 1398c4: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 1398c8: tbz w8, #0, #0x139a18 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_139a18;
L_1398cc:;
  /* 1398cc: str x23, [x20, #8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(8)), ARC_X_R(c, 23));
  /* 1398d0: b #0x1398e4 */
  goto L_1398e4;
L_1398d4:;
  /* 1398d4: nop  */
  /* nop: no architectural effect here */
  /* 1398d8: adr x8, #0x159210 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 1398dc: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 1398e0: tbz w8, #0, #0x139a38 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_139a38;
L_1398e4:;
  /* 1398e4: str wzr, [sp] */
  arc_st32((c)->sp, ARC_W_R(c, 31));
  /* 1398e8: str x23, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 23));
  /* 1398ec: mov w0, #0x90 */
  ARC_W_W(c, 0, UINT64_C(144));
  /* 1398f0: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1284340));
  fn1_1428f0(c);
  /* 1398f4: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* 1398f8: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 1398fc: add x8, x8, #0x5f8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1528)));
  /* 139900: add x24, x0, #0x20 */
  ARC_X_W(c, 24, (ARC_X_R(c, 0) + UINT64_C(32)));
  /* 139904: stp xzr, xzr, [x0, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 139908: str x8, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* 13990c: mov x3, sp */
  ARC_X_W(c, 3, (c)->sp);
  /* 139910: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 139914: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 139918: mov w2, w21 */
  ARC_W_W(c, 2, ARC_W_R(c, 21));
  /* 13991c: bl #0x13a384 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1284384));
  fn1_13a384(c);
  /* 139920: ldr x21, [x19, #8] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* 139924: stp x24, x23, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 139928: cbz x21, #0x139978 */
  if ((ARC_X_R(c, 21)) == 0) goto L_139978;
  /* 13992c: add x1, x21, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(8)));
  /* 139930: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 139934: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1284408));
  fn1_bd950(c);
  /* 139938: cbnz x0, #0x139978 */
  if ((ARC_X_R(c, 0)) != 0) goto L_139978;
  /* 13993c: mov x22, x21 */
  ARC_X_W(c, 22, ARC_X_R(c, 21));
  /* 139940: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 139944: ldr x8, [x22], #0x10 */
  { const uint64_t _a = ARC_X_R(c, 22);
    ARC_X_W(c, 22, ARC_X_R(c, 22) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_a));
  }
  /* 139948: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 13994c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1284432));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 139950: ldar x8, [x22] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 22)));
  /* 139954: cbz x8, #0x139968 */
  if ((ARC_X_R(c, 8)) == 0) goto L_139968;
  /* 139958: add x1, x21, #0x10 */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(16)));
  /* 13995c: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 139960: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1284452));
  fn1_bd950(c);
  /* 139964: cbnz x0, #0x139978 */
  if ((ARC_X_R(c, 0)) != 0) goto L_139978;
L_139968:;
  /* 139968: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 13996c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 139970: ldr x8, [x8, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* 139974: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1284472));
  arc_dispatch(c, ARC_X_R(c, 8));
L_139978:;
  /* 139978: cbz x20, #0x139984 */
  if ((ARC_X_R(c, 20)) == 0) goto L_139984;
  /* 13997c: ldr q0, [sp] */
  arc_q_w(c, 0, arc_ld64((c)->sp), arc_ld64((c)->sp + 8));
  /* 139980: str q0, [x20] */
  arc_st64(ARC_X_R(c, 20), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 20) + 8, (c)->q[0].u64[1]);
L_139984:;
  /* 139984: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 139988: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 13998c: cbnz x8, #0x1399fc */
  if ((ARC_X_R(c, 8)) != 0) goto L_1399fc;
  /* 139990: ldr x20, [x19, #8] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* 139994: stp xzr, xzr, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 139998: cbz x20, #0x1399e8 */
  if ((ARC_X_R(c, 20)) == 0) goto L_1399e8;
  /* 13999c: add x1, x20, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* 1399a0: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 1399a4: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1284520));
  fn1_bd950(c);
  /* 1399a8: cbnz x0, #0x1399e8 */
  if ((ARC_X_R(c, 0)) != 0) goto L_1399e8;
  /* 1399ac: mov x21, x20 */
  ARC_X_W(c, 21, ARC_X_R(c, 20));
  /* 1399b0: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1399b4: ldr x8, [x21], #0x10 */
  { const uint64_t _a = ARC_X_R(c, 21);
    ARC_X_W(c, 21, ARC_X_R(c, 21) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_a));
  }
  /* 1399b8: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 1399bc: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1284544));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1399c0: ldar x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 1399c4: cbz x8, #0x1399d8 */
  if ((ARC_X_R(c, 8)) == 0) goto L_1399d8;
  /* 1399c8: add x1, x20, #0x10 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(16)));
  /* 1399cc: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 1399d0: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1284564));
  fn1_bd950(c);
  /* 1399d4: cbnz x0, #0x1399e8 */
  if ((ARC_X_R(c, 0)) != 0) goto L_1399e8;
L_1399d8:;
  /* 1399d8: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 1399dc: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1399e0: ldr x8, [x8, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* 1399e4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1284584));
  arc_dispatch(c, ARC_X_R(c, 8));
L_1399e8:;
  /* 1399e8: ldr w8, [sp] */
  ARC_W_W(c, 8, arc_ld32((c)->sp));
  /* 1399ec: cbz w8, #0x1399fc */
  if ((ARC_W_R(c, 8)) == 0) goto L_1399fc;
  /* 1399f0: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 1399f4: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 1399f8: bl #0x139ad0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1284604));
  fn1_139ad0(c);
L_1399fc:;
  /* 1399fc: ldp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 139a00: ldp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 139a04: ldp x24, x23, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 139a08: ldp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 139a0c: add sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(112)));
  /* 139a10: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 139a14: ret  */
  return;
L_139a18:;
  /* 139a18: nop  */
  /* nop: no architectural effect here */
  /* 139a1c: adr x0, #0x159210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 139a20: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1284644));
  fn1_1424b8(c);
  /* 139a24: cbz w0, #0x1398cc */
  if ((ARC_W_R(c, 0)) == 0) goto L_1398cc;
  /* 139a28: nop  */
  /* nop: no architectural effect here */
  /* 139a2c: adr x0, #0x159210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 139a30: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1284660));
  fn1_1424d0(c);
  /* 139a34: b #0x1398cc */
  goto L_1398cc;
L_139a38:;
  /* 139a38: nop  */
  /* nop: no architectural effect here */
  /* 139a3c: adr x0, #0x159210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 139a40: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1284676));
  fn1_1424b8(c);
  /* 139a44: cbz w0, #0x1398e4 */
  if ((ARC_W_R(c, 0)) == 0) goto L_1398e4;
  /* 139a48: nop  */
  /* nop: no architectural effect here */
  /* 139a4c: adr x0, #0x159210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 139a50: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1284692));
  fn1_1424d0(c);
  /* 139a54: b #0x1398e4 */
  goto L_1398e4;
  /* 139a58: b #0x139a70 */
  goto L_139a70;
  /* 139a5c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 139a60: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 139a64: mov w1, #0x90 */
  ARC_W_W(c, 1, UINT64_C(144));
  /* 139a68: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1284716));
  fn1_142608(c);
  /* 139a6c: b #0x139a74 */
  goto L_139a74;
L_139a70:;
  /* 139a70: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
L_139a74:;
  /* 139a74: ldr x19, [x19, #8] */
  ARC_X_W(c, 19, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* 139a78: cbz x19, #0x139ac8 */
  if ((ARC_X_R(c, 19)) == 0) goto L_139ac8;
  /* 139a7c: add x1, x19, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 19) + UINT64_C(8)));
  /* 139a80: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 139a84: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1284744));
  fn1_bd950(c);
  /* 139a88: cbnz x0, #0x139ac8 */
  if ((ARC_X_R(c, 0)) != 0) goto L_139ac8;
  /* 139a8c: mov x21, x19 */
  ARC_X_W(c, 21, ARC_X_R(c, 19));
  /* 139a90: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 139a94: ldr x8, [x21], #0x10 */
  { const uint64_t _a = ARC_X_R(c, 21);
    ARC_X_W(c, 21, ARC_X_R(c, 21) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_a));
  }
  /* 139a98: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 139a9c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1284768));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 139aa0: ldar x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 139aa4: cbz x8, #0x139ab8 */
  if ((ARC_X_R(c, 8)) == 0) goto L_139ab8;
  /* 139aa8: add x1, x19, #0x10 */
  ARC_X_W(c, 1, (ARC_X_R(c, 19) + UINT64_C(16)));
  /* 139aac: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 139ab0: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1284788));
  fn1_bd950(c);
  /* 139ab4: cbnz x0, #0x139ac8 */
  if ((ARC_X_R(c, 0)) != 0) goto L_139ac8;
L_139ab8:;
  /* 139ab8: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 139abc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 139ac0: ldr x8, [x8, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* 139ac4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1284808));
  arc_dispatch(c, ARC_X_R(c, 8));
L_139ac8:;
  /* 139ac8: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 139acc: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1284816));
  fn1_9cc20(c);
}

void fn1_140188(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039239048));
  /* 140188: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 14018c: sub sp, sp, #0x80 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(128)));
  /* 140190: stp x29, x30, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 140194: str x21, [sp, #0x60] */
  arc_st64(((c)->sp + INT64_C(96)), ARC_X_R(c, 21));
  /* 140198: stp x20, x19, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 14019c: add x29, sp, #0x50 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(80)));
  /* 1401a0: mov x20, x3 */
  ARC_X_W(c, 20, ARC_X_R(c, 3));
  /* 1401a4: mov x21, x2 */
  ARC_X_W(c, 21, ARC_X_R(c, 2));
  /* 1401a8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1401ac: adrp x8, #0x51000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(331776)));
  /* 1401b0: add x8, x8, #0xad6 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2774)));
  /* 1401b4: stp x0, xzr, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 0));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 1401b8: stp x8, x4, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 4));
  }
  /* 1401bc: cbz x4, #0x1401e0 */
  if ((ARC_X_R(c, 4)) == 0) goto L_1401e0;
  /* 1401c0: str wzr, [x4] */
  arc_st32(ARC_X_R(c, 4), ARC_W_R(c, 31));
  /* 1401c4: nop  */
  /* nop: no architectural effect here */
  /* 1401c8: adr x8, #0x159210 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 1401cc: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 1401d0: tbz w8, #0, #0x140374 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_140374;
L_1401d4:;
  /* 1401d4: nop  */
  /* nop: no architectural effect here */
  /* 1401d8: adr x8, #0x156d40 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1404224)));
  /* 1401dc: str x8, [x4, #8] */
  arc_st64((ARC_X_R(c, 4) + INT64_C(8)), ARC_X_R(c, 8));
L_1401e0:;
  /* 1401e0: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* 1401e4: mov w2, #0xca00 */
  ARC_W_W(c, 2, UINT64_C(51712));
  /* 1401e8: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 1401ec: ldr q0, [x8, #0xd20] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(3360))), arc_ld64((ARC_X_R(c, 8) + INT64_C(3360)) + 8));
  /* 1401f0: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 1401f4: movk w2, #0x3b9a, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(999948288)));
  /* 1401f8: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* 1401fc: str q0, [sp] */
  arc_st64((c)->sp, (c)->q[0].u64[0]);
  arc_st64((c)->sp + 8, (c)->q[0].u64[1]);
  /* 140200: bl #0x13bb88 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1311236));
  fn1_13bb88(c);
  /* 140204: mov x8, #-0xca00 */
  ARC_X_W(c, 8, UINT64_C(18446744073709499904));
  /* 140208: mov x11, #-0x8000000000000000 */
  ARC_X_W(c, 11, UINT64_C(9223372036854775808));
  /* 14020c: movk x8, #0xc465, lsl #16 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(18446744069414649855)) | UINT64_C(3294953472)));
  /* 140210: umulh x9, x0, x8 */
  ARC_X_W(c, 9, arc_umulh(ARC_X_R(c, 0), ARC_X_R(c, 8)));
  /* 140214: mul x10, x0, x8 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 0)) * (uint64_t)(ARC_X_R(c, 8))));
  /* 140218: sub x9, x9, x0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - ARC_X_R(c, 0)));
  /* 14021c: madd x9, x1, x8, x9 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) + ((uint64_t)(ARC_X_R(c, 1)) * (uint64_t)(ARC_X_R(c, 8)))));
  /* 140220: adds x8, x10, x21 */
  ARC_X_W(c, 8, arc_add64(c, ARC_X_R(c, 10), ARC_X_R(c, 21), 0));
  /* 140224: adc x9, x9, x20 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) + (uint64_t)(ARC_X_R(c, 20)) + (c)->cf));
  /* 140228: adds x10, x0, x9, lsr #63 */
  ARC_X_W(c, 10, arc_add64(c, ARC_X_R(c, 0), ((uint64_t)(ARC_X_R(c, 9)) >> 63), 0));
  /* 14022c: cinc x12, x1, hs */
  ARC_X_W(c, 12, (ARC_COND(c, 2) ? (ARC_X_R(c, 1)) + 1 : (ARC_X_R(c, 1))));
  /* 140230: cmp x10, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 11));
  /* 140234: mov x11, #0x7fffffffffffffff */
  ARC_X_W(c, 11, UINT64_C(9223372036854775807));
  /* 140238: sbcs xzr, x12, xzr */
  ARC_X_W(c, 31, arc_add64(c, ARC_X_R(c, 12), ((uint64_t)~(uint64_t)(ARC_X_R(c, 31))), (c)->cf));
  /* 14023c: cset w13, lo */
  ARC_W_W(c, 13, (ARC_COND(c, 3) ? 1 : 0));
  /* 140240: cmp x11, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 10));
  /* 140244: mov x10, #-1 */
  ARC_X_W(c, 10, UINT64_C(18446744073709551615));
  /* 140248: sbcs xzr, x10, x12 */
  ARC_X_W(c, 31, arc_add64(c, ARC_X_R(c, 10), ((uint64_t)~(uint64_t)(ARC_X_R(c, 12))), (c)->cf));
  /* 14024c: cset w10, lo */
  ARC_W_W(c, 10, (ARC_COND(c, 3) ? 1 : 0));
  /* 140250: cmp x12, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 12), UINT64_C(0));
  /* 140254: csel w10, w10, w13, lt */
  ARC_W_W(c, 10, (ARC_COND(c, 11) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 13)));
  /* 140258: cmp w10, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(1));
  /* 14025c: b.ne #0x140310 */
  if (ARC_COND(c, 1)) goto L_140310;
  /* 140260: tbz x9, #0x3f, #0x140298 */
  if (((ARC_X_R(c, 9)) >> 63 & 1) == 0) goto L_140298;
  /* 140264: mov w10, #0x6201 */
  ARC_W_W(c, 10, UINT64_C(25089));
  /* 140268: movk w10, #0x34b2, lsl #16 */
  ARC_W_W(c, 10, ((ARC_W_R(c, 10) & UINT64_C(18446744069414649855)) | UINT64_C(884080640)));
  /* 14026c: cmp x21, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 10));
  /* 140270: mov x10, #-0x8000000000000000 */
  ARC_X_W(c, 10, UINT64_C(9223372036854775808));
  /* 140274: sbcs xzr, x20, x10 */
  ARC_X_W(c, 31, arc_add64(c, ARC_X_R(c, 20), ((uint64_t)~(uint64_t)(ARC_X_R(c, 10))), (c)->cf));
  /* 140278: b.lt #0x140310 */
  if (ARC_COND(c, 11)) goto L_140310;
  /* 14027c: mov w11, #0xca00 */
  ARC_W_W(c, 11, UINT64_C(51712));
  /* 140280: subs x0, x0, #1 */
  ARC_X_W(c, 0, arc_sub64(c, ARC_X_R(c, 0), UINT64_C(1)));
  /* 140284: mov x10, #-1 */
  ARC_X_W(c, 10, UINT64_C(18446744073709551615));
  /* 140288: movk w11, #0x3b9a, lsl #16 */
  ARC_W_W(c, 11, ((ARC_W_R(c, 11) & UINT64_C(18446744069414649855)) | UINT64_C(999948288)));
  /* 14028c: adc x1, x1, x10 */
  ARC_X_W(c, 1, ((uint64_t)(ARC_X_R(c, 1)) + (uint64_t)(ARC_X_R(c, 10)) + (c)->cf));
  /* 140290: adds x8, x8, x11 */
  ARC_X_W(c, 8, arc_add64(c, ARC_X_R(c, 8), ARC_X_R(c, 11), 0));
  /* 140294: cinc x9, x9, hs */
  ARC_X_W(c, 9, (ARC_COND(c, 2) ? (ARC_X_R(c, 9)) + 1 : (ARC_X_R(c, 9))));
L_140298:;
  /* 140298: mov x10, #-0x8000000000000000 */
  ARC_X_W(c, 10, UINT64_C(9223372036854775808));
  /* 14029c: cmn x0, x10 */
  (void)arc_add64(c, ARC_X_R(c, 0), ARC_X_R(c, 10), 0);
  /* 1402a0: cinc x11, x1, hs */
  ARC_X_W(c, 11, (ARC_COND(c, 2) ? (ARC_X_R(c, 1)) + 1 : (ARC_X_R(c, 1))));
  /* 1402a4: cbnz x11, #0x140310 */
  if ((ARC_X_R(c, 11)) != 0) goto L_140310;
  /* 1402a8: cmn x8, x10 */
  (void)arc_add64(c, ARC_X_R(c, 8), ARC_X_R(c, 10), 0);
  /* 1402ac: str x0, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 0));
  /* 1402b0: cinc x9, x9, hs */
  ARC_X_W(c, 9, (ARC_COND(c, 2) ? (ARC_X_R(c, 9)) + 1 : (ARC_X_R(c, 9))));
  /* 1402b4: cbnz x9, #0x140310 */
  if ((ARC_X_R(c, 9)) != 0) goto L_140310;
  /* 1402b8: ldrb w9, [x19] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 19)));
  /* 1402bc: ldr x10, [x19, #0x10] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* 1402c0: mov x2, sp */
  ARC_X_W(c, 2, (c)->sp);
  /* 1402c4: mov w0, #-0x64 */
  ARC_W_W(c, 0, UINT64_C(18446744073709551516));
  /* 1402c8: mov w3, wzr */
  ARC_W_W(c, 3, ARC_W_R(c, 31));
  /* 1402cc: str x8, [sp, #0x18] */
  arc_st64(((c)->sp + INT64_C(24)), ARC_X_R(c, 8));
  /* 1402d0: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* 1402d4: csinc x1, x10, x19, ne */
  ARC_X_W(c, 1, (ARC_COND(c, 1) ? (ARC_X_R(c, 10)) : ((ARC_X_R(c, 19)) + 1)));
  /* 1402d8: bl #0x144930 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1311452));
  fn1_144930(c);
  /* 1402dc: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 1402e0: b.ne #0x14033c */
  if (ARC_COND(c, 1)) goto L_14033c;
  /* 1402e4: bl #0x142a58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1311464));
  fn1_142a58(c);
  /* 1402e8: nop  */
  /* nop: no architectural effect here */
  /* 1402ec: adr x8, #0x159208 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 1402f0: ldr w19, [x0] */
  ARC_W_W(c, 19, arc_ld32(ARC_X_R(c, 0)));
  /* 1402f4: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 1402f8: tbz w8, #0, #0x1403a0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1403a0;
L_1402fc:;
  /* 1402fc: nop  */
  /* nop: no architectural effect here */
  /* 140300: adr x8, #0x156d38 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1404216)));
  /* 140304: stp x19, x8, [x29, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-16));
    arc_st64(_pa, ARC_X_R(c, 19));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* 140308: cbnz w19, #0x140330 */
  if ((ARC_W_R(c, 19)) != 0) goto L_140330;
  /* 14030c: b #0x14033c */
  goto L_14033c;
L_140310:;
  /* 140310: nop  */
  /* nop: no architectural effect here */
  /* 140314: adr x8, #0x159208 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 140318: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 14031c: tbz w8, #0, #0x140354 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_140354;
L_140320:;
  /* 140320: mov w8, #0x4b */
  ARC_W_W(c, 8, UINT64_C(75));
  /* 140324: nop  */
  /* nop: no architectural effect here */
  /* 140328: adr x9, #0x156d38 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1404216)));
  /* 14032c: stp x8, x9, [x29, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-16));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
L_140330:;
  /* 140330: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 140334: sub x1, x29, #0x10 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* 140338: bl #0x139ad0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1311548));
  fn1_139ad0(c);
L_14033c:;
  /* 14033c: ldp x20, x19, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 140340: ldr x21, [sp, #0x60] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(96))));
  /* 140344: ldp x29, x30, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 140348: add sp, sp, #0x80 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(128)));
  /* 14034c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 140350: ret  */
  return;
L_140354:;
  /* 140354: nop  */
  /* nop: no architectural effect here */
  /* 140358: adr x0, #0x159208 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 14035c: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1311584));
  fn1_1424b8(c);
  /* 140360: cbz w0, #0x140320 */
  if ((ARC_W_R(c, 0)) == 0) goto L_140320;
  /* 140364: nop  */
  /* nop: no architectural effect here */
  /* 140368: adr x0, #0x159208 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 14036c: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1311600));
  fn1_1424d0(c);
  /* 140370: b #0x140320 */
  goto L_140320;
L_140374:;
  /* 140374: nop  */
  /* nop: no architectural effect here */
  /* 140378: adr x0, #0x159210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 14037c: str x4, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 4));
  /* 140380: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1311620));
  fn1_1424b8(c);
  /* 140384: ldr x4, [x29, #0x18] */
  ARC_X_W(c, 4, arc_ld64((ARC_X_R(c, 29) + INT64_C(24))));
  /* 140388: cbz w0, #0x1401d4 */
  if ((ARC_W_R(c, 0)) == 0) goto L_1401d4;
  /* 14038c: nop  */
  /* nop: no architectural effect here */
  /* 140390: adr x0, #0x159210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 140394: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1311640));
  fn1_1424d0(c);
  /* 140398: ldr x4, [x29, #0x18] */
  ARC_X_W(c, 4, arc_ld64((ARC_X_R(c, 29) + INT64_C(24))));
  /* 14039c: b #0x1401d4 */
  goto L_1401d4;
L_1403a0:;
  /* 1403a0: nop  */
  /* nop: no architectural effect here */
  /* 1403a4: adr x0, #0x159208 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 1403a8: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1311660));
  fn1_1424b8(c);
  /* 1403ac: cbz w0, #0x1402fc */
  if ((ARC_W_R(c, 0)) == 0) goto L_1402fc;
  /* 1403b0: nop  */
  /* nop: no architectural effect here */
  /* 1403b4: adr x0, #0x159208 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 1403b8: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1311676));
  fn1_1424d0(c);
  /* 1403bc: b #0x1402fc */
  goto L_1402fc;
}

void fn1_1427d0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039248848));
  /* 1427d0: adrp x16, #0x151000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 1427d4: ldr x17, [x16, #0xfd0] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(4048))));
  /* 1427d8: add x16, x16, #0xfd0 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(4048)));
  /* 1427dc: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 1427e0: nop  */
  /* nop: no architectural effect here */
  /* 1427e4: nop  */
  /* nop: no architectural effect here */
}

void fn1_142dd0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039250384));
  /* 142dd0: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 142dd4: ldr x17, [x16, #0x1d0] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(464))));
  /* 142dd8: add x16, x16, #0x1d0 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(464)));
  /* 142ddc: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 142de0: nop  */
  /* nop: no architectural effect here */
  /* 142de4: nop  */
  /* nop: no architectural effect here */
}

void fn1_1433d0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039251920));
  /* 1433d0: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 1433d4: ldr x17, [x16, #0x3d0] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(976))));
  /* 1433d8: add x16, x16, #0x3d0 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(976)));
  /* 1433dc: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 1433e0: nop  */
  /* nop: no architectural effect here */
  /* 1433e4: nop  */
  /* nop: no architectural effect here */
}

void fn1_1439d0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039253456));
  /* 1439d0: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 1439d4: ldr x17, [x16, #0x5d0] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(1488))));
  /* 1439d8: add x16, x16, #0x5d0 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(1488)));
  /* 1439dc: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 1439e0: nop  */
  /* nop: no architectural effect here */
  /* 1439e4: nop  */
  /* nop: no architectural effect here */
}

void fn1_143fd0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039254992));
  /* 143fd0: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 143fd4: ldr x17, [x16, #0x7d0] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(2000))));
  /* 143fd8: add x16, x16, #0x7d0 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(2000)));
  /* 143fdc: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 143fe0: nop  */
  /* nop: no architectural effect here */
  /* 143fe4: nop  */
  /* nop: no architectural effect here */
}

void fn1_1445d0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039256528));
  /* 1445d0: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 1445d4: ldr x17, [x16, #0x9d0] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(2512))));
  /* 1445d8: add x16, x16, #0x9d0 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(2512)));
  /* 1445dc: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 1445e0: nop  */
  /* nop: no architectural effect here */
  /* 1445e4: nop  */
  /* nop: no architectural effect here */
}

