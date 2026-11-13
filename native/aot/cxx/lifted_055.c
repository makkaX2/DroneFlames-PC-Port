#include "lifted.h"

void fn1_a0740(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038585152));
  /* a0740: bti c */
  /* bti: no architectural effect here */
  /* a0744: add w8, w0, #2 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + UINT64_C(2)));
  /* a0748: cmp w8, #0x61 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(97));
  /* a074c: b.hi #0xa0764 */
  if (ARC_COND(c, 8)) goto L_a0764;
  /* a0750: nop  */
  /* nop: no architectural effect here */
  /* a0754: adr x9, #0x52778 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(337784)));
  /* a0758: ldrsw x8, [x9, w8, uxtw #2] */
  ARC_X_W(c, 8, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 9) + ((uint64_t)(((uint64_t)(uint32_t)(ARC_W_R(c, 8)))) << 2)))));
  /* a075c: add x0, x9, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 9) + ARC_X_R(c, 8)));
  /* a0760: ret  */
  return;
L_a0764:;
  /* a0764: adrp x0, #0x51000 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(331776)));
  /* a0768: add x0, x0, #0x846 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2118)));
  /* a076c: ret  */
  return;
}

void fn1_a2220(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038592032));
  /* a2220: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* a2224: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* a2228: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* a222c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* a2230: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* a2234: bl #0x142698 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(664120));
  fn1_142698(c);
  /* a2238: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a223c: mov w1, #0x10 */
  ARC_W_W(c, 1, UINT64_C(16));
  /* a2240: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* a2244: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* a2248: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* a224c: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_a7940(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038614336));
  /* a7940: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* a7944: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* a7948: str x23, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 23));
  /* a794c: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* a7950: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* a7954: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* a7958: ldp x21, x1, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    ARC_X_W(c, 21, arc_ld64(_pa));
    ARC_X_W(c, 1, arc_ld64(_pa + 8));
  }
  /* a795c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* a7960: add x20, x0, #0x20 */
  ARC_X_W(c, 20, (ARC_X_R(c, 0) + UINT64_C(32)));
  /* a7964: ldr x0, [x21, #0x298] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 21) + INT64_C(664))));
  /* a7968: cmp x1, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 1), ARC_X_R(c, 20));
  /* a796c: add x22, x21, #0x2b0 */
  ARC_X_W(c, 22, (ARC_X_R(c, 21) + UINT64_C(688)));
  /* a7970: b.eq #0xa79ac */
  if (ARC_COND(c, 0)) goto L_a79ac;
  /* a7974: cmp x0, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 22));
  /* a7978: str x1, [x21, #0x298] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(664)), ARC_X_R(c, 1));
  /* a797c: b.eq #0xa79ec */
  if (ARC_COND(c, 0)) goto L_a79ec;
  /* a7980: ldr x8, [x19, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* a7984: str x0, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 0));
  /* a7988: ldr x9, [x21, #0x2a0] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 21) + INT64_C(672))));
  /* a798c: str x8, [x21, #0x2a0] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(672)), ARC_X_R(c, 8));
  /* a7990: ldr x8, [x19, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(24))));
  /* a7994: str x9, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 9));
  /* a7998: ldr x9, [x21, #0x2a8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 21) + INT64_C(680))));
  /* a799c: str x8, [x21, #0x2a8] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(680)), ARC_X_R(c, 8));
  /* a79a0: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* a79a4: stp x8, x9, [x19, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* a79a8: b #0xa7a1c */
  goto L_a7a1c;
L_a79ac:;
  /* a79ac: cmp x0, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 22));
  /* a79b0: b.eq #0xa79d0 */
  if (ARC_COND(c, 0)) goto L_a79d0;
  /* a79b4: bl #0x142800 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(686520));
  fn1_142800(c);
  /* a79b8: str x22, [x21, #0x298] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(664)), ARC_X_R(c, 22));
  /* a79bc: add x8, x21, #0x2d0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 21) + UINT64_C(720)));
  /* a79c0: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* a79c4: ldr x1, [x19, #8] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* a79c8: str x22, [x21, #0x2a0] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(672)), ARC_X_R(c, 22));
  /* a79cc: str x8, [x21, #0x2a8] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(680)), ARC_X_R(c, 8));
L_a79d0:;
  /* a79d0: ldr x8, [x19, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* a79d4: subs x2, x8, x1 */
  ARC_X_W(c, 2, arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 1)));
  /* a79d8: b.eq #0xa7a04 */
  if (ARC_COND(c, 0)) goto L_a7a04;
  /* a79dc: bl #0x1449f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(686560));
  fn1_1449f0(c);
  /* a79e0: ldp x1, x8, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 1, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* a79e4: ldr x0, [x21, #0x298] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 21) + INT64_C(664))));
  /* a79e8: b #0xa7a08 */
  goto L_a7a08;
L_a79ec:;
  /* a79ec: ldr q0, [x19, #0x10] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))), arc_ld64((ARC_X_R(c, 19) + INT64_C(16)) + 8));
  /* a79f0: add x8, x19, #0x40 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + UINT64_C(64)));
  /* a79f4: str q0, [x21, #0x2a0] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(672)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 21) + INT64_C(672)) + 8, (c)->q[0].u64[1]);
  /* a79f8: stp x20, x20, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 20));
  }
  /* a79fc: str x8, [x19, #0x18] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(24)), ARC_X_R(c, 8));
  /* a7a00: b #0xa7a1c */
  goto L_a7a1c;
L_a7a04:;
  /* a7a04: mov x8, x1 */
  ARC_X_W(c, 8, ARC_X_R(c, 1));
L_a7a08:;
  /* a7a08: sub x8, x8, x1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) - ARC_X_R(c, 1)));
  /* a7a0c: add x8, x0, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* a7a10: str x8, [x21, #0x2a0] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(672)), ARC_X_R(c, 8));
  /* a7a14: ldr x21, [x19] */
  ARC_X_W(c, 21, arc_ld64(ARC_X_R(c, 19)));
  /* a7a18: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
L_a7a1c:;
  /* a7a1c: ldr x1, [x19, #0x40] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 19) + INT64_C(64))));
  /* a7a20: add x22, x19, #0x58 */
  ARC_X_W(c, 22, (ARC_X_R(c, 19) + UINT64_C(88)));
  /* a7a24: ldr x0, [x21, #0x240] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 21) + INT64_C(576))));
  /* a7a28: add x23, x21, #0x258 */
  ARC_X_W(c, 23, (ARC_X_R(c, 21) + UINT64_C(600)));
  /* a7a2c: cmp x1, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 1), ARC_X_R(c, 22));
  /* a7a30: b.eq #0xa7a6c */
  if (ARC_COND(c, 0)) goto L_a7a6c;
  /* a7a34: cmp x0, x23 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 23));
  /* a7a38: str x1, [x21, #0x240] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(576)), ARC_X_R(c, 1));
  /* a7a3c: b.eq #0xa7aac */
  if (ARC_COND(c, 0)) goto L_a7aac;
  /* a7a40: ldr x8, [x19, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(72))));
  /* a7a44: str x0, [x19, #0x40] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(64)), ARC_X_R(c, 0));
  /* a7a48: ldr x9, [x21, #0x248] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 21) + INT64_C(584))));
  /* a7a4c: str x8, [x21, #0x248] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(584)), ARC_X_R(c, 8));
  /* a7a50: ldr x8, [x19, #0x50] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(80))));
  /* a7a54: str x9, [x19, #0x48] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(72)), ARC_X_R(c, 9));
  /* a7a58: ldr x9, [x21, #0x250] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 21) + INT64_C(592))));
  /* a7a5c: str x8, [x21, #0x250] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(592)), ARC_X_R(c, 8));
  /* a7a60: ldr x1, [x19, #0x40] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 19) + INT64_C(64))));
  /* a7a64: str x9, [x19, #0x50] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(80)), ARC_X_R(c, 9));
  /* a7a68: b #0xa7ad8 */
  goto L_a7ad8;
L_a7a6c:;
  /* a7a6c: cmp x0, x23 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 23));
  /* a7a70: b.eq #0xa7a90 */
  if (ARC_COND(c, 0)) goto L_a7a90;
  /* a7a74: bl #0x142800 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(686712));
  fn1_142800(c);
  /* a7a78: str x23, [x21, #0x240] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(576)), ARC_X_R(c, 23));
  /* a7a7c: add x8, x21, #0x298 */
  ARC_X_W(c, 8, (ARC_X_R(c, 21) + UINT64_C(664)));
  /* a7a80: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* a7a84: ldr x1, [x19, #0x40] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 19) + INT64_C(64))));
  /* a7a88: str x23, [x21, #0x248] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(584)), ARC_X_R(c, 23));
  /* a7a8c: str x8, [x21, #0x250] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(592)), ARC_X_R(c, 8));
L_a7a90:;
  /* a7a90: ldr x8, [x19, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(72))));
  /* a7a94: subs x2, x8, x1 */
  ARC_X_W(c, 2, arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 1)));
  /* a7a98: b.eq #0xa7ac8 */
  if (ARC_COND(c, 0)) goto L_a7ac8;
  /* a7a9c: bl #0x1449f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(686752));
  fn1_1449f0(c);
  /* a7aa0: ldp x1, x8, [x19, #0x40] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(64));
    ARC_X_W(c, 1, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* a7aa4: ldr x0, [x21, #0x240] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 21) + INT64_C(576))));
  /* a7aa8: b #0xa7acc */
  goto L_a7acc;
L_a7aac:;
  /* a7aac: ldur q0, [x19, #0x48] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(72))), arc_ld64((ARC_X_R(c, 19) + INT64_C(72)) + 8));
  /* a7ab0: add x8, x21, #0x248 */
  ARC_X_W(c, 8, (ARC_X_R(c, 21) + UINT64_C(584)));
  /* a7ab4: str q0, [x8] */
  arc_st64(ARC_X_R(c, 8), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 8) + 8, (c)->q[0].u64[1]);
  /* a7ab8: add x8, x19, #0x98 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + UINT64_C(152)));
  /* a7abc: stp x22, x22, [x19, #0x40] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 22));
  }
  /* a7ac0: str x8, [x19, #0x50] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(80)), ARC_X_R(c, 8));
  /* a7ac4: b #0xa7aec */
  goto L_a7aec;
L_a7ac8:;
  /* a7ac8: mov x8, x1 */
  ARC_X_W(c, 8, ARC_X_R(c, 1));
L_a7acc:;
  /* a7acc: sub x8, x8, x1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) - ARC_X_R(c, 1)));
  /* a7ad0: add x8, x0, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* a7ad4: str x8, [x21, #0x248] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(584)), ARC_X_R(c, 8));
L_a7ad8:;
  /* a7ad8: cmp x1, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 1), ARC_X_R(c, 22));
  /* a7adc: str x1, [x19, #0x48] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(72)), ARC_X_R(c, 1));
  /* a7ae0: b.eq #0xa7aec */
  if (ARC_COND(c, 0)) goto L_a7aec;
  /* a7ae4: mov x0, x1 */
  ARC_X_W(c, 0, ARC_X_R(c, 1));
  /* a7ae8: bl #0x142800 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(686828));
  fn1_142800(c);
L_a7aec:;
  /* a7aec: ldr x0, [x19, #8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* a7af0: cmp x0, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 20));
  /* a7af4: b.eq #0xa7b10 */
  if (ARC_COND(c, 0)) goto L_a7b10;
  /* a7af8: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* a7afc: ldr x23, [sp, #0x10] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(16))));
  /* a7b00: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* a7b04: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* a7b08: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* a7b0c: b #0x142800 */
  fn1_142800(c); return;
L_a7b10:;
  /* a7b10: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* a7b14: ldr x23, [sp, #0x10] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(16))));
  /* a7b18: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* a7b1c: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* a7b20: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* a7b24: ret  */
  return;
}

void fn1_ad248(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038637128));
  /* ad248: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* ad24c: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* ad250: stp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* ad254: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* ad258: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* ad25c: ldr x22, [x0, #0x1330] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 0) + INT64_C(4912))));
  /* ad260: mov x20, x2 */
  ARC_X_W(c, 20, ARC_X_R(c, 2));
  /* ad264: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* ad268: ldr x8, [x22, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 22) + INT64_C(8))));
  /* ad26c: sub x9, x8, #0xfb0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4016)));
  /* ad270: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* ad274: b.hi #0xad298 */
  if (ARC_COND(c, 8)) goto L_ad298;
  /* ad278: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* ad27c: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* ad280: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(709252));
  fn1_1428a8(c);
  /* ad284: cbz x0, #0xad304 */
  if ((ARC_X_R(c, 0)) == 0) goto L_ad304;
  /* ad288: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* ad28c: stp x22, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* ad290: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* ad294: str x0, [x21, #0x1330] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(4912)), ARC_X_R(c, 0));
L_ad298:;
  /* ad298: add x9, x8, #0x40 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(64)));
  /* ad29c: add x0, x22, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 22) + ARC_X_R(c, 8)));
  /* ad2a0: adrp x8, #0x14a000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1351680)));
  /* ad2a4: add x8, x8, #0x690 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1680)));
  /* ad2a8: str x9, [x22, #8] */
  arc_st64((ARC_X_R(c, 22) + INT64_C(8)), ARC_X_R(c, 9));
  /* ad2ac: mov w9, #0x3c */
  ARC_W_W(c, 9, UINT64_C(60));
  /* ad2b0: str x8, [x0, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* ad2b4: ldurh w8, [x0, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 0) + INT64_C(9))));
  /* ad2b8: ldrh w10, [x20] */
  ARC_W_W(c, 10, arc_ld16(ARC_X_R(c, 20)));
  /* ad2bc: strb w9, [x0, #8] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 9));
  /* ad2c0: adrp x9, #0x51000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(331776)));
  /* ad2c4: add x9, x9, #0x7b9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(1977)));
  /* ad2c8: and w8, w8, #0xf000 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(61440)));
  /* ad2cc: bfxil w8, w10, #0, #6 */
  ARC_W_W(c, 8, (((uint32_t)(ARC_W_R(c, 8)) & UINT64_C(4294967232)) | ((((uint32_t)(ARC_W_R(c, 10))) >> 0) & UINT64_C(63))));
  /* ad2d0: mov w10, #9 */
  ARC_W_W(c, 10, UINT64_C(9));
  /* ad2d4: stp x9, x10, [x0, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 10));
  }
  /* ad2d8: mov w9, #0x540 */
  ARC_W_W(c, 9, UINT64_C(1344));
  /* ad2dc: ldr x10, [x19] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 19)));
  /* ad2e0: orr w8, w8, w9 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | ARC_W_R(c, 9)));
  /* ad2e4: stp xzr, xzr, [x0, #0x28] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(40));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* ad2e8: sturh w8, [x0, #9] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(9)), ARC_W_R(c, 8));
  /* ad2ec: str x10, [x0, #0x20] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(32)), ARC_X_R(c, 10));
  /* ad2f0: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* ad2f4: ldp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* ad2f8: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ad2fc: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* ad300: ret  */
  return;
L_ad304:;
  /* ad304: bl #0x142488 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(709384));
  fn1_142488(c);
}

void fn1_b314c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038661452));
  /* b314c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* b3150: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* b3154: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b3158: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* b315c: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* b3160: ldr w8, [x0, #0xc] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 0) + INT64_C(12))));
  /* b3164: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* b3168: cmp w8, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(2));
  /* b316c: b.eq #0xb3228 */
  if (ARC_COND(c, 0)) goto L_b3228;
  /* b3170: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* b3174: b.eq #0xb31cc */
  if (ARC_COND(c, 0)) goto L_b31cc;
  /* b3178: cbnz w8, #0xb3290 */
  if ((ARC_W_R(c, 8)) != 0) goto L_b3290;
  /* b317c: ldp x9, x10, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* b3180: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* b3184: add x11, x9, #2 */
  ARC_X_W(c, 11, (ARC_X_R(c, 9) + UINT64_C(2)));
  /* b3188: cmp x11, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 10));
  /* b318c: b.ls #0xb31c4 */
  if (ARC_COND(c, 9)) goto L_b31c4;
  /* b3190: lsl x10, x10, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* b3194: add x9, x9, #0x3e2 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(994)));
  /* b3198: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* b319c: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* b31a0: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* b31a4: csel x1, x10, x9, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* b31a8: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b31ac: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(733616));
  fn1_142878(c);
  /* b31b0: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b31b4: cbz x0, #0xb334c */
  if ((ARC_X_R(c, 0)) == 0) goto L_b334c;
  /* b31b8: ldr x9, [x19, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b31bc: mov x8, x0 */
  ARC_X_W(c, 8, ARC_X_R(c, 0));
  /* b31c0: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
L_b31c4:;
  /* b31c4: mov w10, #0x5424 */
  ARC_W_W(c, 10, UINT64_C(21540));
  /* b31c8: b #0xb3218 */
  goto L_b3218;
L_b31cc:;
  /* b31cc: ldp x9, x10, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* b31d0: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* b31d4: add x11, x9, #2 */
  ARC_X_W(c, 11, (ARC_X_R(c, 9) + UINT64_C(2)));
  /* b31d8: cmp x11, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 10));
  /* b31dc: b.ls #0xb3214 */
  if (ARC_COND(c, 9)) goto L_b3214;
  /* b31e0: lsl x10, x10, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* b31e4: add x9, x9, #0x3e2 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(994)));
  /* b31e8: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* b31ec: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* b31f0: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* b31f4: csel x1, x10, x9, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* b31f8: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b31fc: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(733696));
  fn1_142878(c);
  /* b3200: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b3204: cbz x0, #0xb3350 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b3350;
  /* b3208: ldr x9, [x19, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b320c: mov x8, x0 */
  ARC_X_W(c, 8, ARC_X_R(c, 0));
  /* b3210: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
L_b3214:;
  /* b3214: mov w10, #0x4e24 */
  ARC_W_W(c, 10, UINT64_C(20004));
L_b3218:;
  /* b3218: strh w10, [x8, x9] */
  arc_st16((ARC_X_R(c, 8) + ARC_X_R(c, 9)), ARC_W_R(c, 10));
  /* b321c: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b3220: add x8, x8, #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2)));
  /* b3224: b #0xb328c */
  goto L_b328c;
L_b3228:;
  /* b3228: ldp x9, x10, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* b322c: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* b3230: add x11, x9, #3 */
  ARC_X_W(c, 11, (ARC_X_R(c, 9) + UINT64_C(3)));
  /* b3234: cmp x11, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 10));
  /* b3238: b.ls #0xb3270 */
  if (ARC_COND(c, 9)) goto L_b3270;
  /* b323c: lsl x10, x10, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* b3240: add x9, x9, #0x3e3 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(995)));
  /* b3244: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* b3248: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* b324c: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* b3250: csel x1, x10, x9, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* b3254: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b3258: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(733788));
  fn1_142878(c);
  /* b325c: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b3260: cbz x0, #0xb3354 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b3354;
  /* b3264: ldr x9, [x19, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b3268: mov x8, x0 */
  ARC_X_W(c, 8, ARC_X_R(c, 0));
  /* b326c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
L_b3270:;
  /* b3270: add x8, x8, x9 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + ARC_X_R(c, 9)));
  /* b3274: mov w9, #0x54 */
  ARC_W_W(c, 9, UINT64_C(84));
  /* b3278: mov w10, #0x5424 */
  ARC_W_W(c, 10, UINT64_C(21540));
  /* b327c: strb w9, [x8, #2] */
  arc_st8((ARC_X_R(c, 8) + INT64_C(2)), ARC_W_R(c, 9));
  /* b3280: strh w10, [x8] */
  arc_st16(ARC_X_R(c, 8), ARC_W_R(c, 10));
  /* b3284: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b3288: add x8, x8, #3 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3)));
L_b328c:;
  /* b328c: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
L_b3290:;
  /* b3290: ldr w8, [x0, #0x10] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 0) + INT64_C(16))));
  /* b3294: cbz w8, #0xb3334 */
  if ((ARC_W_R(c, 8)) == 0) goto L_b3334;
  /* b3298: sub w9, w8, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 8) - UINT64_C(1)));
  /* b329c: mov x8, #-0x3333333333333334 */
  ARC_X_W(c, 8, UINT64_C(14757395258967641292));
  /* b32a0: mov x20, xzr */
  ARC_X_W(c, 20, ARC_X_R(c, 31));
  /* b32a4: movk x8, #0xcccd */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(18446744073709486080)) | UINT64_C(52429)));
  /* b32a8: mov w10, #0xa */
  ARC_W_W(c, 10, UINT64_C(10));
  /* b32ac: add x11, sp, #0xb */
  ARC_X_W(c, 11, ((c)->sp + UINT64_C(11)));
L_b32b0:;
  /* b32b0: umulh x12, x9, x8 */
  ARC_X_W(c, 12, arc_umulh(ARC_X_R(c, 9), ARC_X_R(c, 8)));
  /* b32b4: add x14, x11, x20 */
  ARC_X_W(c, 14, (ARC_X_R(c, 11) + ARC_X_R(c, 20)));
  /* b32b8: cmp x9, #9 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(9));
  /* b32bc: sub x20, x20, #1 */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) - UINT64_C(1)));
  /* b32c0: lsr x12, x12, #3 */
  ARC_X_W(c, 12, ((uint64_t)(ARC_X_R(c, 12)) >> ((UINT64_C(3)) & 63)));
  /* b32c4: msub w13, w12, w10, w9 */
  ARC_W_W(c, 13, ((uint32_t)(ARC_W_R(c, 9)) - ((uint32_t)(ARC_W_R(c, 12)) * (uint32_t)(ARC_W_R(c, 10)))));
  /* b32c8: mov x9, x12 */
  ARC_X_W(c, 9, ARC_X_R(c, 12));
  /* b32cc: orr w13, w13, #0x30 */
  ARC_W_W(c, 13, (ARC_W_R(c, 13) | UINT64_C(48)));
  /* b32d0: strb w13, [x14, #0x14] */
  arc_st8((ARC_X_R(c, 14) + INT64_C(20)), ARC_W_R(c, 13));
  /* b32d4: b.hi #0xb32b0 */
  if (ARC_COND(c, 8)) goto L_b32b0;
  /* b32d8: ldp x8, x9, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* b32dc: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* b32e0: sub x10, x8, x20 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) - ARC_X_R(c, 20)));
  /* b32e4: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* b32e8: b.ls #0xb3310 */
  if (ARC_COND(c, 9)) goto L_b3310;
  /* b32ec: lsl x8, x9, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 9)) << ((UINT64_C(1)) & 63)));
  /* b32f0: add x9, x10, #0x3e0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 10) + UINT64_C(992)));
  /* b32f4: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* b32f8: csel x1, x8, x9, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* b32fc: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b3300: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(733956));
  fn1_142878(c);
  /* b3304: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b3308: cbz x0, #0xb3348 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b3348;
  /* b330c: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
L_b3310:;
  /* b3310: add x9, sp, #0xb */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(11)));
  /* b3314: neg x2, x20 */
  ARC_X_W(c, 2, ((uint64_t)0 - (uint64_t)(ARC_X_R(c, 20))));
  /* b3318: add x0, x0, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* b331c: add x9, x9, x20 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + ARC_X_R(c, 20)));
  /* b3320: add x1, x9, #0x15 */
  ARC_X_W(c, 1, (ARC_X_R(c, 9) + UINT64_C(21)));
  /* b3324: bl #0x1449d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(733992));
  fn1_1449d8(c);
  /* b3328: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b332c: sub x8, x8, x20 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) - ARC_X_R(c, 20)));
  /* b3330: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
L_b3334:;
  /* b3334: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* b3338: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b333c: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* b3340: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* b3344: ret  */
  return;
L_b3348:;
  /* b3348: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(734028));
  fn1_1427b8(c);
L_b334c:;
  /* b334c: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(734032));
  fn1_1427b8(c);
L_b3350:;
  /* b3350: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(734036));
  fn1_1427b8(c);
L_b3354:;
  /* b3354: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(734040));
  fn1_1427b8(c);
}

void fn1_b6d14(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038676756));
  /* b6d14: bti c */
  /* bti: no architectural effect here */
  /* b6d18: mov w1, #0x18 */
  ARC_W_W(c, 1, UINT64_C(24));
  /* b6d1c: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_b93a0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038686624));
L_b93a0:;
  /* b93a0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* b93a4: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b93a8: stp x24, x23, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* b93ac: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* b93b0: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* b93b4: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* b93b8: ldp x9, x8, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* b93bc: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* b93c0: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* b93c4: b.eq #0xb94d4 */
  if (ARC_COND(c, 0)) goto L_b94d4;
  /* b93c8: ldrb w10, [x9] */
  ARC_W_W(c, 10, arc_ld8(ARC_X_R(c, 9)));
  /* b93cc: cmp w10, #0x72 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(114));
  /* b93d0: b.eq #0xb94e4 */
  if (ARC_COND(c, 0)) goto L_b94e4;
  /* b93d4: cmp w10, #0x55 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(85));
  /* b93d8: b.ne #0xb94d4 */
  if (ARC_COND(c, 1)) goto L_b94d4;
  /* b93dc: add x10, x9, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 9) + UINT64_C(1)));
  /* b93e0: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* b93e4: str x10, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 10));
  /* b93e8: b.eq #0xb9774 */
  if (ARC_COND(c, 0)) goto L_b9774;
  /* b93ec: ldrb w10, [x10] */
  ARC_W_W(c, 10, arc_ld8(ARC_X_R(c, 10)));
  /* b93f0: sub w10, w10, #0x3a */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) - UINT64_C(58)));
  /* b93f4: cmn w10, #0xa */
  (void)arc_add32(c, ARC_W_R(c, 10), UINT64_C(10), 0);
  /* b93f8: b.lo #0xb9774 */
  if (ARC_COND(c, 3)) goto L_b9774;
  /* b93fc: mov x15, xzr */
  ARC_X_W(c, 15, ARC_X_R(c, 31));
  /* b9400: mov x22, xzr */
  ARC_X_W(c, 22, ARC_X_R(c, 31));
  /* b9404: mov w12, #0xa */
  ARC_W_W(c, 12, UINT64_C(10));
L_b9408:;
  /* b9408: add x13, x9, x15 */
  ARC_X_W(c, 13, (ARC_X_R(c, 9) + ARC_X_R(c, 15)));
  /* b940c: mov x10, x15 */
  ARC_X_W(c, 10, ARC_X_R(c, 15));
  /* b9410: mov x14, x22 */
  ARC_X_W(c, 14, ARC_X_R(c, 22));
  /* b9414: add x23, x13, #2 */
  ARC_X_W(c, 23, (ARC_X_R(c, 13) + UINT64_C(2)));
  /* b9418: str x23, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 23));
  /* b941c: cmp x23, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 8));
  /* b9420: ldrb w11, [x13, #1] */
  ARC_W_W(c, 11, arc_ld8((ARC_X_R(c, 13) + INT64_C(1))));
  /* b9424: nop  */
  /* nop: no architectural effect here */
  /* b9428: madd x15, x22, x12, x11 */
  ARC_X_W(c, 15, ((uint64_t)(ARC_X_R(c, 11)) + ((uint64_t)(ARC_X_R(c, 22)) * (uint64_t)(ARC_X_R(c, 12)))));
  /* b942c: sub x22, x15, #0x30 */
  ARC_X_W(c, 22, (ARC_X_R(c, 15) - UINT64_C(48)));
  /* b9430: b.eq #0xb9448 */
  if (ARC_COND(c, 0)) goto L_b9448;
  /* b9434: ldrb w15, [x23] */
  ARC_W_W(c, 15, arc_ld8(ARC_X_R(c, 23)));
  /* b9438: sub w15, w15, #0x30 */
  ARC_W_W(c, 15, (ARC_W_R(c, 15) - UINT64_C(48)));
  /* b943c: cmp w15, #9 */
  (void)arc_sub32(c, ARC_W_R(c, 15), UINT64_C(9));
  /* b9440: add x15, x10, #1 */
  ARC_X_W(c, 15, (ARC_X_R(c, 10) + UINT64_C(1)));
  /* b9444: b.ls #0xb9408 */
  if (ARC_COND(c, 9)) goto L_b9408;
L_b9448:;
  /* b9448: sub x12, x8, x9 */
  ARC_X_W(c, 12, (ARC_X_R(c, 8) - ARC_X_R(c, 9)));
  /* b944c: sub x12, x12, x10 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) - ARC_X_R(c, 10)));
  /* b9450: sub x12, x12, #2 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) - UINT64_C(2)));
  /* b9454: cmp x12, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 12), ARC_X_R(c, 22));
  /* b9458: b.lo #0xb9774 */
  if (ARC_COND(c, 3)) goto L_b9774;
  /* b945c: mov w12, #0xa */
  ARC_W_W(c, 12, UINT64_C(10));
  /* b9460: add x15, x9, x10 */
  ARC_X_W(c, 15, (ARC_X_R(c, 9) + ARC_X_R(c, 10)));
  /* b9464: madd x12, x14, x12, x11 */
  ARC_X_W(c, 12, ((uint64_t)(ARC_X_R(c, 11)) + ((uint64_t)(ARC_X_R(c, 14)) * (uint64_t)(ARC_X_R(c, 12)))));
  /* b9468: add x12, x15, x12 */
  ARC_X_W(c, 12, (ARC_X_R(c, 15) + ARC_X_R(c, 12)));
  /* b946c: sub x12, x12, #0x2e */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) - UINT64_C(46)));
  /* b9470: str x12, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 12));
  /* b9474: cbz x22, #0xb9774 */
  if ((ARC_X_R(c, 22)) == 0) goto L_b9774;
  /* b9478: cmp x22, #9 */
  (void)arc_sub64(c, ARC_X_R(c, 22), UINT64_C(9));
  /* b947c: b.lo #0xb94a8 */
  if (ARC_COND(c, 3)) goto L_b94a8;
  /* b9480: mov x17, #0x626f */
  ARC_X_W(c, 17, UINT64_C(25199));
  /* b9484: ldur x15, [x13, #2] */
  ARC_X_W(c, 15, arc_ld64((ARC_X_R(c, 13) + INT64_C(2))));
  /* b9488: ldrb w16, [x13, #0xa] */
  ARC_W_W(c, 16, arc_ld8((ARC_X_R(c, 13) + INT64_C(10))));
  /* b948c: movk x17, #0x636a, lsl #16 */
  ARC_X_W(c, 17, ((ARC_X_R(c, 17) & UINT64_C(18446744069414649855)) | UINT64_C(1667891200)));
  /* b9490: movk x17, #0x7270, lsl #32 */
  ARC_X_W(c, 17, ((ARC_X_R(c, 17) & UINT64_C(18446462603027808255)) | UINT64_C(125825361903616)));
  /* b9494: movk x17, #0x746f, lsl #48 */
  ARC_X_W(c, 17, ((ARC_X_R(c, 17) & UINT64_C(281474976710655)) | UINT64_C(8389924630814523392)));
  /* b9498: cmp x15, x17 */
  (void)arc_sub64(c, ARC_X_R(c, 15), ARC_X_R(c, 17));
  /* b949c: mov w15, #0x6f */
  ARC_W_W(c, 15, UINT64_C(111));
  /* b94a0: ccmp w16, w15, #0, eq */
  if (ARC_COND(c, 0)) { (void)arc_sub32(c, ARC_W_R(c, 16), ARC_W_R(c, 15)); }
  else { (c)->nf = 0; (c)->zf = 0;
          (c)->cf = 0; (c)->vf = 0; }
  /* b94a4: b.eq #0xb9644 */
  if (ARC_COND(c, 0)) goto L_b9644;
L_b94a8:;
  /* b94a8: cmp x12, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 12), ARC_X_R(c, 8));
  /* b94ac: b.eq #0xb95c0 */
  if (ARC_COND(c, 0)) goto L_b95c0;
  /* b94b0: ldrb w8, [x12] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 12)));
  /* b94b4: cmp w8, #0x49 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(73));
  /* b94b8: b.ne #0xb95c0 */
  if (ARC_COND(c, 1)) goto L_b95c0;
  /* b94bc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* b94c0: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* b94c4: bl #0xa8f88 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(758984));
  fn1_a8f88(c);
  /* b94c8: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* b94cc: cbnz x0, #0xb95c4 */
  if ((ARC_X_R(c, 0)) != 0) goto L_b95c4;
  /* b94d0: b #0xb9778 */
  goto L_b9778;
L_b94d4:;
  /* b94d4: mov w20, wzr */
  ARC_W_W(c, 20, ARC_W_R(c, 31));
  /* b94d8: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* b94dc: b.ne #0xb94f8 */
  if (ARC_COND(c, 1)) goto L_b94f8;
  /* b94e0: b #0xb9510 */
  goto L_b9510;
L_b94e4:;
  /* b94e4: add x9, x9, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(1)));
  /* b94e8: mov w20, #4 */
  ARC_W_W(c, 20, UINT64_C(4));
  /* b94ec: str x9, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 9));
  /* b94f0: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* b94f4: b.eq #0xb9510 */
  if (ARC_COND(c, 0)) goto L_b9510;
L_b94f8:;
  /* b94f8: ldrb w10, [x9] */
  ARC_W_W(c, 10, arc_ld8(ARC_X_R(c, 9)));
  /* b94fc: cmp w10, #0x56 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(86));
  /* b9500: b.ne #0xb9510 */
  if (ARC_COND(c, 1)) goto L_b9510;
  /* b9504: add x9, x9, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(1)));
  /* b9508: orr w20, w20, #2 */
  ARC_W_W(c, 20, (ARC_W_R(c, 20) | UINT64_C(2)));
  /* b950c: str x9, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 9));
L_b9510:;
  /* b9510: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* b9514: b.eq #0xb9530 */
  if (ARC_COND(c, 0)) goto L_b9530;
  /* b9518: ldrb w8, [x9] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 9)));
  /* b951c: cmp w8, #0x4b */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(75));
  /* b9520: b.ne #0xb9530 */
  if (ARC_COND(c, 1)) goto L_b9530;
  /* b9524: add x8, x9, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) + UINT64_C(1)));
  /* b9528: orr w20, w20, #1 */
  ARC_W_W(c, 20, (ARC_W_R(c, 20) | UINT64_C(1)));
  /* b952c: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
L_b9530:;
  /* b9530: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* b9534: bl #0xa52b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(759096));
  fn1_a52b0(c);
  /* b9538: cbz x0, #0xb9778 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b9778;
  /* b953c: cbz w20, #0xb9778 */
  if ((ARC_W_R(c, 20)) == 0) goto L_b9778;
  /* b9540: ldr x21, [x19, #0x1330] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 19) + INT64_C(4912))));
  /* b9544: ldr x8, [x21, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 21) + INT64_C(8))));
  /* b9548: sub x9, x8, #0xfd0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4048)));
  /* b954c: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* b9550: b.hi #0xb9578 */
  if (ARC_COND(c, 8)) goto L_b9578;
  /* b9554: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* b9558: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* b955c: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(759136));
  fn1_1428a8(c);
  /* b9560: cbz x0, #0xb9790 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b9790;
  /* b9564: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* b9568: stp x21, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 21));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* b956c: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* b9570: str x0, [x19, #0x1330] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(4912)), ARC_X_R(c, 0));
  /* b9574: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
L_b9578:;
  /* b9578: add x9, x8, #0x20 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(32)));
  /* b957c: add x8, x21, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 21) + ARC_X_R(c, 8)));
  /* b9580: mov w11, #3 */
  ARC_W_W(c, 11, UINT64_C(3));
  /* b9584: str x9, [x21, #8] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(8)), ARC_X_R(c, 9));
  /* b9588: adrp x9, #0x14c000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1359872)));
  /* b958c: add x9, x9, #0x2b0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(688)));
  /* b9590: ldurh w10, [x0, #9] */
  ARC_W_W(c, 10, arc_ld16((ARC_X_R(c, 0) + INT64_C(9))));
  /* b9594: str x9, [x8, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 8) + INT64_C(16));
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 9));
  }
  /* b9598: ldurh w9, [x8, #9] */
  ARC_W_W(c, 9, arc_ld16((ARC_X_R(c, 8) + INT64_C(9))));
  /* b959c: str x0, [x8, #0x10] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(16)), ARC_X_R(c, 0));
  /* b95a0: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* b95a4: and w10, w10, #0xfc0 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) & UINT64_C(4032)));
  /* b95a8: strb w11, [x8, #8] */
  arc_st8((ARC_X_R(c, 8) + INT64_C(8)), ARC_W_R(c, 11));
  /* b95ac: and w9, w9, #0xf000 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) & UINT64_C(61440)));
  /* b95b0: str w20, [x8, #0xc] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(12)), ARC_W_R(c, 20));
  /* b95b4: orr w9, w9, w10 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | ARC_W_R(c, 10)));
  /* b95b8: sturh w9, [x8, #9] */
  arc_st16((ARC_X_R(c, 8) + INT64_C(9)), ARC_W_R(c, 9));
  /* b95bc: b #0xb9778 */
  goto L_b9778;
L_b95c0:;
  /* b95c0: mov x20, xzr */
  ARC_X_W(c, 20, ARC_X_R(c, 31));
L_b95c4:;
  /* b95c4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* b95c8: bl #0xb93a0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(759244));
  fn1_b93a0(c);
  /* b95cc: cbz x0, #0xb9778 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b9778;
  /* b95d0: ldr x24, [x19, #0x1330] */
  ARC_X_W(c, 24, arc_ld64((ARC_X_R(c, 19) + INT64_C(4912))));
  /* b95d4: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* b95d8: ldr x8, [x24, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 24) + INT64_C(8))));
  /* b95dc: sub x9, x8, #0xfc0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4032)));
  /* b95e0: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* b95e4: b.hi #0xb9604 */
  if (ARC_COND(c, 8)) goto L_b9604;
  /* b95e8: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* b95ec: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(759280));
  fn1_1428a8(c);
  /* b95f0: cbz x0, #0xb9790 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b9790;
  /* b95f4: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* b95f8: stp x24, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* b95fc: mov x24, x0 */
  ARC_X_W(c, 24, ARC_X_R(c, 0));
  /* b9600: str x0, [x19, #0x1330] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(4912)), ARC_X_R(c, 0));
L_b9604:;
  /* b9604: add x9, x8, #0x30 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(48)));
  /* b9608: add x0, x24, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 24) + ARC_X_R(c, 8)));
  /* b960c: adrp x8, #0x14c000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1359872)));
  /* b9610: add x8, x8, #0x238 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(568)));
  /* b9614: str x9, [x24, #8] */
  arc_st64((ARC_X_R(c, 24) + INT64_C(8)), ARC_X_R(c, 9));
  /* b9618: mov w9, #2 */
  ARC_W_W(c, 9, UINT64_C(2));
  /* b961c: str x8, [x0, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* b9620: ldurh w8, [x0, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 0) + INT64_C(9))));
  /* b9624: strb w9, [x0, #8] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 9));
  /* b9628: mov w9, #0x540 */
  ARC_W_W(c, 9, UINT64_C(1344));
  /* b962c: and w8, w8, #0xf000 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(61440)));
  /* b9630: stp x21, x23, [x0, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 21));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* b9634: orr w8, w8, w9 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | ARC_W_R(c, 9)));
  /* b9638: stp x22, x20, [x0, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 20));
  }
  /* b963c: sturh w8, [x0, #9] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(9)), ARC_W_R(c, 8));
  /* b9640: b #0xb9778 */
  goto L_b9778;
L_b9644:;
  /* b9644: add x15, x9, x10 */
  ARC_X_W(c, 15, (ARC_X_R(c, 9) + ARC_X_R(c, 10)));
  /* b9648: cmp x22, #9 */
  (void)arc_sub64(c, ARC_X_R(c, 22), UINT64_C(9));
  /* b964c: add x15, x15, #0xb */
  ARC_X_W(c, 15, (ARC_X_R(c, 15) + UINT64_C(11)));
  /* b9650: stp x15, x12, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    arc_st64(_pa, ARC_X_R(c, 15));
    arc_st64(_pa + 8, ARC_X_R(c, 12));
  }
  /* b9654: b.eq #0xb96e0 */
  if (ARC_COND(c, 0)) goto L_b96e0;
  /* b9658: ldrb w15, [x15] */
  ARC_W_W(c, 15, arc_ld8(ARC_X_R(c, 15)));
  /* b965c: sub w15, w15, #0x3a */
  ARC_W_W(c, 15, (ARC_W_R(c, 15) - UINT64_C(58)));
  /* b9660: cmn w15, #0xa */
  (void)arc_add32(c, ARC_W_R(c, 15), UINT64_C(10), 0);
  /* b9664: b.lo #0xb96e0 */
  if (ARC_COND(c, 3)) goto L_b96e0;
  /* b9668: add x14, x14, x14, lsl #2 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) + ((uint64_t)(ARC_X_R(c, 14)) << 2)));
  /* b966c: mov x21, xzr */
  ARC_X_W(c, 21, ARC_X_R(c, 31));
  /* b9670: add x16, x13, #0xc */
  ARC_X_W(c, 16, (ARC_X_R(c, 13) + UINT64_C(12)));
  /* b9674: lsl x14, x14, #1 */
  ARC_X_W(c, 14, ((uint64_t)(ARC_X_R(c, 14)) << ((UINT64_C(1)) & 63)));
  /* b9678: add x15, x14, x11 */
  ARC_X_W(c, 15, (ARC_X_R(c, 14) + ARC_X_R(c, 11)));
  /* b967c: sub x13, x15, #0x3a */
  ARC_X_W(c, 13, (ARC_X_R(c, 15) - UINT64_C(58)));
  /* b9680: mov w15, #0xa */
  ARC_W_W(c, 15, UINT64_C(10));
L_b9684:;
  /* b9684: str x16, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 16));
  /* b9688: ldurb w17, [x16, #-1] */
  ARC_W_W(c, 17, arc_ld8((ARC_X_R(c, 16) + INT64_C(-1))));
  /* b968c: nop  */
  /* nop: no architectural effect here */
  /* b9690: madd x17, x21, x15, x17 */
  ARC_X_W(c, 17, ((uint64_t)(ARC_X_R(c, 17)) + ((uint64_t)(ARC_X_R(c, 21)) * (uint64_t)(ARC_X_R(c, 15)))));
  /* b9694: sub x21, x17, #0x30 */
  ARC_X_W(c, 21, (ARC_X_R(c, 17) - UINT64_C(48)));
  /* b9698: cbz x13, #0xb96c0 */
  if ((ARC_X_R(c, 13)) == 0) goto L_b96c0;
  /* b969c: ldrb w17, [x16] */
  ARC_W_W(c, 17, arc_ld8(ARC_X_R(c, 16)));
  /* b96a0: sub x13, x13, #1 */
  ARC_X_W(c, 13, (ARC_X_R(c, 13) - UINT64_C(1)));
  /* b96a4: sub w0, w17, #0x30 */
  ARC_W_W(c, 0, (ARC_W_R(c, 17) - UINT64_C(48)));
  /* b96a8: add x17, x16, #1 */
  ARC_X_W(c, 17, (ARC_X_R(c, 16) + UINT64_C(1)));
  /* b96ac: cmp w0, #9 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(9));
  /* b96b0: mov x16, x17 */
  ARC_X_W(c, 16, ARC_X_R(c, 17));
  /* b96b4: b.ls #0xb9684 */
  if (ARC_COND(c, 9)) goto L_b9684;
  /* b96b8: sub x22, x17, #1 */
  ARC_X_W(c, 22, (ARC_X_R(c, 17) - UINT64_C(1)));
  /* b96bc: b #0xb96c4 */
  goto L_b96c4;
L_b96c0:;
  /* b96c0: mov x22, x12 */
  ARC_X_W(c, 22, ARC_X_R(c, 12));
L_b96c4:;
  /* b96c4: sub x13, x14, x22 */
  ARC_X_W(c, 13, (ARC_X_R(c, 14) - ARC_X_R(c, 22)));
  /* b96c8: add x9, x9, x11 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + ARC_X_R(c, 11)));
  /* b96cc: add x9, x9, x13 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + ARC_X_R(c, 13)));
  /* b96d0: add x9, x9, x10 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + ARC_X_R(c, 10)));
  /* b96d4: sub x9, x9, #0x2e */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - UINT64_C(46)));
  /* b96d8: cmp x9, x21 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 21));
  /* b96dc: b.hs #0xb96ec */
  if (ARC_COND(c, 2)) goto L_b96ec;
L_b96e0:;
  /* b96e0: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
  /* b96e4: stp x12, x8, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    arc_st64(_pa, ARC_X_R(c, 12));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* b96e8: b #0xb9778 */
  goto L_b9778;
L_b96ec:;
  /* b96ec: stp x12, x8, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    arc_st64(_pa, ARC_X_R(c, 12));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* b96f0: cbz x21, #0xb9774 */
  if ((ARC_X_R(c, 21)) == 0) goto L_b9774;
  /* b96f4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* b96f8: bl #0xb93a0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(759548));
  fn1_b93a0(c);
  /* b96fc: cbz x0, #0xb9778 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b9778;
  /* b9700: ldr x23, [x19, #0x1330] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 19) + INT64_C(4912))));
  /* b9704: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* b9708: ldr x8, [x23, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 23) + INT64_C(8))));
  /* b970c: sub x9, x8, #0xfc0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4032)));
  /* b9710: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* b9714: b.hi #0xb9734 */
  if (ARC_COND(c, 8)) goto L_b9734;
  /* b9718: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* b971c: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(759584));
  fn1_1428a8(c);
  /* b9720: cbz x0, #0xb9790 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b9790;
  /* b9724: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* b9728: stp x23, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 23));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* b972c: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* b9730: str x0, [x19, #0x1330] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(4912)), ARC_X_R(c, 0));
L_b9734:;
  /* b9734: add x9, x8, #0x30 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(48)));
  /* b9738: add x0, x23, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 23) + ARC_X_R(c, 8)));
  /* b973c: adrp x8, #0x14c000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1359872)));
  /* b9740: add x8, x8, #0x1c0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(448)));
  /* b9744: str x9, [x23, #8] */
  arc_st64((ARC_X_R(c, 23) + INT64_C(8)), ARC_X_R(c, 9));
  /* b9748: mov w9, #0xb */
  ARC_W_W(c, 9, UINT64_C(11));
  /* b974c: str x8, [x0, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* b9750: ldurh w8, [x0, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 0) + INT64_C(9))));
  /* b9754: strb w9, [x0, #8] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 9));
  /* b9758: mov w9, #0x540 */
  ARC_W_W(c, 9, UINT64_C(1344));
  /* b975c: and w8, w8, #0xf000 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(61440)));
  /* b9760: stp x20, x22, [x0, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 22));
  }
  /* b9764: orr w8, w8, w9 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | ARC_W_R(c, 9)));
  /* b9768: str x21, [x0, #0x20] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(32)), ARC_X_R(c, 21));
  /* b976c: sturh w8, [x0, #9] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(9)), ARC_W_R(c, 8));
  /* b9770: b #0xb9778 */
  goto L_b9778;
L_b9774:;
  /* b9774: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
L_b9778:;
  /* b9778: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* b977c: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* b9780: ldp x24, x23, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* b9784: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b9788: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* b978c: ret  */
  return;
L_b9790:;
  /* b9790: bl #0x142488 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(759700));
  fn1_142488(c);
}

void fn1_bca60(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038700640));
  /* bca60: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* bca64: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* bca68: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* bca6c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* bca70: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* bca74: ldr x0, [x0, #0x18] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(24))));
  /* bca78: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* bca7c: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* bca80: ldr x8, [x8, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* bca84: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(772744));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* bca88: ldr x0, [x20, #0x18] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 20) + INT64_C(24))));
  /* bca8c: ldurh w8, [x0, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 0) + INT64_C(9))));
  /* bca90: ubfx w9, w8, #8, #2 */
  ARC_W_W(c, 9, (((uint32_t)(ARC_W_R(c, 8)) >> 8) & UINT64_C(3)));
  /* bca94: cbz w9, #0xbcae4 */
  if ((ARC_W_R(c, 9)) == 0) goto L_bcae4;
  /* bca98: cmp w9, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(2));
  /* bca9c: b.ne #0xbcabc */
  if (ARC_COND(c, 1)) goto L_bcabc;
  /* bcaa0: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* bcaa4: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* bcaa8: ldr x8, [x8, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(8))));
  /* bcaac: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(772784));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* bcab0: tbnz w0, #0, #0xbcae4 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) != 0) goto L_bcae4;
  /* bcab4: ldr x0, [x20, #0x18] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 20) + INT64_C(24))));
  /* bcab8: ldurh w8, [x0, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 0) + INT64_C(9))));
L_bcabc:;
  /* bcabc: lsr w8, w8, #0xa */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 8)) >> ((UINT64_C(10)) & 31)));
  /* bcac0: ands w8, w8, #3 */
  { uint32_t _r = (uint32_t)(ARC_W_R(c, 8) & UINT64_C(3));
    arc_flags_logical32(c, _r);
    ARC_W_W(c, 8, _r); }
  /* bcac4: b.eq #0xbcae4 */
  if (ARC_COND(c, 0)) goto L_bcae4;
  /* bcac8: cmp w8, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(2));
  /* bcacc: b.ne #0xbcb24 */
  if (ARC_COND(c, 1)) goto L_bcb24;
  /* bcad0: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* bcad4: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* bcad8: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* bcadc: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(772832));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* bcae0: tbz w0, #0, #0xbcb24 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_bcb24;
L_bcae4:;
  /* bcae4: ldp x8, x9, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* bcae8: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* bcaec: add x10, x8, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* bcaf0: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* bcaf4: b.ls #0xbcb1c */
  if (ARC_COND(c, 9)) goto L_bcb1c;
  /* bcaf8: lsl x9, x9, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) << ((UINT64_C(1)) & 63)));
  /* bcafc: add x8, x8, #0x3e1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(993)));
  /* bcb00: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* bcb04: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* bcb08: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* bcb0c: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(772880));
  fn1_142878(c);
  /* bcb10: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* bcb14: cbz x0, #0xbcc18 */
  if ((ARC_X_R(c, 0)) == 0) goto L_bcc18;
  /* bcb18: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
L_bcb1c:;
  /* bcb1c: mov w9, #0x28 */
  ARC_W_W(c, 9, UINT64_C(40));
  /* bcb20: b #0xbcb60 */
  goto L_bcb60;
L_bcb24:;
  /* bcb24: ldp x8, x9, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* bcb28: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* bcb2c: add x10, x8, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* bcb30: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* bcb34: b.ls #0xbcb5c */
  if (ARC_COND(c, 9)) goto L_bcb5c;
  /* bcb38: lsl x9, x9, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) << ((UINT64_C(1)) & 63)));
  /* bcb3c: add x8, x8, #0x3e1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(993)));
  /* bcb40: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* bcb44: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* bcb48: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* bcb4c: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(772944));
  fn1_142878(c);
  /* bcb50: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* bcb54: cbz x0, #0xbcc1c */
  if ((ARC_X_R(c, 0)) == 0) goto L_bcc1c;
  /* bcb58: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
L_bcb5c:;
  /* bcb5c: mov w9, #0x20 */
  ARC_W_W(c, 9, UINT64_C(32));
L_bcb60:;
  /* bcb60: strb w9, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
  /* bcb64: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* bcb68: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* bcb6c: ldr x20, [x20, #0x10] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 20) + INT64_C(16))));
  /* bcb70: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* bcb74: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* bcb78: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
  /* bcb7c: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* bcb80: ldr x8, [x8, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* bcb84: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(773000));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* bcb88: ldurh w8, [x20, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 20) + INT64_C(9))));
  /* bcb8c: and w8, w8, #0xc0 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(192)));
  /* bcb90: cmp w8, #0x40 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(64));
  /* bcb94: b.eq #0xbcbac */
  if (ARC_COND(c, 0)) goto L_bcbac;
  /* bcb98: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* bcb9c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* bcba0: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* bcba4: ldr x8, [x8, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* bcba8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(773036));
  arc_dispatch(c, ARC_X_R(c, 8));
L_bcbac:;
  /* bcbac: ldp x8, x9, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* bcbb0: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* bcbb4: add x10, x8, #3 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(3)));
  /* bcbb8: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* bcbbc: b.ls #0xbcbe4 */
  if (ARC_COND(c, 9)) goto L_bcbe4;
  /* bcbc0: lsl x9, x9, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) << ((UINT64_C(1)) & 63)));
  /* bcbc4: add x8, x8, #0x3e3 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(995)));
  /* bcbc8: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* bcbcc: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* bcbd0: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* bcbd4: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(773080));
  fn1_142878(c);
  /* bcbd8: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* bcbdc: cbz x0, #0xbcc14 */
  if ((ARC_X_R(c, 0)) == 0) goto L_bcc14;
  /* bcbe0: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
L_bcbe4:;
  /* bcbe4: add x8, x0, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* bcbe8: mov w9, #0x2a */
  ARC_W_W(c, 9, UINT64_C(42));
  /* bcbec: mov w10, #0x3a3a */
  ARC_W_W(c, 10, UINT64_C(14906));
  /* bcbf0: strb w9, [x8, #2] */
  arc_st8((ARC_X_R(c, 8) + INT64_C(2)), ARC_W_R(c, 9));
  /* bcbf4: strh w10, [x8] */
  arc_st16(ARC_X_R(c, 8), ARC_W_R(c, 10));
  /* bcbf8: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* bcbfc: add x8, x8, #3 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3)));
  /* bcc00: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
  /* bcc04: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* bcc08: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* bcc0c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* bcc10: ret  */
  return;
L_bcc14:;
  /* bcc14: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(773144));
  fn1_1427b8(c);
L_bcc18:;
  /* bcc18: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(773148));
  fn1_1427b8(c);
L_bcc1c:;
  /* bcc1c: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(773152));
  fn1_1427b8(c);
}

void fn1_c0930(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038716720));
  /* c0930: bti c */
  /* bti: no architectural effect here */
  /* c0934: sub x9, x1, x0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 1) - ARC_X_R(c, 0)));
  /* c0938: mov w8, #0x7e */
  ARC_W_W(c, 8, UINT64_C(126));
  /* c093c: mov w3, #1 */
  ARC_W_W(c, 3, UINT64_C(1));
  /* c0940: asr x9, x9, #2 */
  ARC_X_W(c, 9, ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(2)) & 63))));
  /* c0944: clz x9, x9 */
  ARC_X_W(c, 9, arc_clz64(ARC_X_R(c, 9)));
  /* c0948: sub x2, x8, x9, lsl #1 */
  ARC_X_W(c, 2, (ARC_X_R(c, 8) - ((uint64_t)(ARC_X_R(c, 9)) << 1)));
  /* c094c: b #0xc0950 */
  fn1_c0950(c); return;
}

void fn1_d631c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038805276));
  /* d631c: bti c */
  /* bti: no architectural effect here */
  /* d6320: b #0xd6324 */
  fn1_d6324(c); return;
}

void fn1_da038(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038820920));
  /* da038: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* da03c: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* da040: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* da044: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* da048: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* da04c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* da050: str xzr, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 31));
  /* da054: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* da058: mov w1, #0x10 */
  ARC_W_W(c, 1, UINT64_C(16));
  /* da05c: mov w2, #0x90 */
  ARC_W_W(c, 2, UINT64_C(144));
  /* da060: bl #0x142818 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(893028));
  fn1_142818(c);
  /* da064: ldr x20, [x29, #0x18] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 29) + INT64_C(24))));
  /* da068: cbnz x20, #0xda080 */
  if ((ARC_X_R(c, 20)) != 0) goto L_da080;
  /* da06c: mov w0, #0x90 */
  ARC_W_W(c, 0, UINT64_C(144));
  /* da070: bl #0xa24dc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(893044));
  fn1_a24dc(c);
  /* da074: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* da078: cbnz x0, #0xda080 */
  if ((ARC_X_R(c, 0)) != 0) goto L_da080;
  /* da07c: bl #0x142488 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(893056));
  fn1_142488(c);
L_da080:;
  /* da080: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* da084: mov x21, x20 */
  ARC_X_W(c, 21, ARC_X_R(c, 20));
  /* da088: stp q0, q0, [x20] */
  { const uint64_t _pa = ARC_X_R(c, 20);
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* da08c: stp q0, q0, [x20, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(32));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* da090: stp q0, q0, [x20, #0x40] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(64));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* da094: stp q0, q0, [x20, #0x60] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(96));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* da098: str q0, [x21, #0x80]! */
  arc_st64((ARC_X_R(c, 21) + INT64_C(128)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 21) + INT64_C(128)) + 8, (c)->q[0].u64[1]);
  ARC_X_W(c, 21, ARC_X_R(c, 21) + INT64_C(128));
  /* da09c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* da0a0: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* da0a4: bl #0xda10c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(893096));
  fn1_da10c(c);
  /* da0a8: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* da0ac: adrp x2, #0x151000 */
  ARC_X_W(c, 2, (arc_image_bases[1] + UINT64_C(1380352)));
  /* da0b0: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* da0b4: ldr x1, [x1, #0x940] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(2368))));
  /* da0b8: ldr x2, [x2, #0x978] */
  ARC_X_W(c, 2, arc_ld64((ARC_X_R(c, 2) + INT64_C(2424))));
  /* da0bc: bl #0x142440 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(893120));
  fn1_142440(c);
  /* da0c0: nop  */
  /* nop: no architectural effect here */
  /* da0c4: adr x8, #0x1576e0 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1406688)));
  /* da0c8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* da0cc: cmp x20, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 8));
  /* da0d0: b.lo #0xda0f4 */
  if (ARC_COND(c, 3)) goto L_da0f4;
  /* da0d4: adrp x8, #0x157000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1404928)));
  /* da0d8: add x8, x8, #0x8e0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2272)));
  /* da0dc: cmp x20, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 8));
  /* da0e0: b.hs #0xda0f4 */
  if (ARC_COND(c, 2)) goto L_da0f4;
  /* da0e4: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* da0e8: bl #0xa2664 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(893164));
  fn1_a2664(c);
  /* da0ec: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* da0f0: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(893172));
  fn1_9cc20(c);
L_da0f4:;
  /* da0f4: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* da0f8: bl #0x142800 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(893180));
  fn1_142800(c);
  /* da0fc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* da100: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(893188));
  fn1_9cc20(c);
  /* da104: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(893192));
  fn1_a1454(c);
  /* da108: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(893196));
  fn1_a1454(c);
}

void fn1_dc2b8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038829752));
  /* dc2b8: bti c */
  /* bti: no architectural effect here */
  /* dc2bc: ret  */
  return;
}

void fn1_e10c4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038849732));
  /* e10c4: bti c */
  /* bti: no architectural effect here */
  /* e10c8: ldrb w8, [x0] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 0)));
  /* e10cc: ldp x9, x11, [x0, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(8));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 11, arc_ld64(_pa + 8));
  }
  /* e10d0: lsr x10, x8, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* e10d4: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* e10d8: csel x10, x10, x9, eq */
  ARC_X_W(c, 10, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* e10dc: csinc x9, x11, x0, ne */
  ARC_X_W(c, 9, (ARC_COND(c, 1) ? (ARC_X_R(c, 11)) : ((ARC_X_R(c, 0)) + 1)));
  /* e10e0: cbz x10, #0xe110c */
  if ((ARC_X_R(c, 10)) == 0) goto L_e110c;
  /* e10e4: cmp x2, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 2), ARC_X_R(c, 10));
  /* e10e8: and w8, w1, #0xff */
  ARC_W_W(c, 8, (ARC_W_R(c, 1) & UINT64_C(255)));
  /* e10ec: sub x9, x9, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - UINT64_C(1)));
  /* e10f0: csinc x0, x10, x2, hs */
  ARC_X_W(c, 0, (ARC_COND(c, 2) ? (ARC_X_R(c, 10)) : ((ARC_X_R(c, 2)) + 1)));
L_e10f4:;
  /* e10f4: cbz x0, #0xe110c */
  if ((ARC_X_R(c, 0)) == 0) goto L_e110c;
  /* e10f8: ldrb w10, [x9, x0] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 9) + ARC_X_R(c, 0))));
  /* e10fc: sub x0, x0, #1 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) - UINT64_C(1)));
  /* e1100: cmp w10, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 10), ARC_W_R(c, 8));
  /* e1104: b.ne #0xe10f4 */
  if (ARC_COND(c, 1)) goto L_e10f4;
  /* e1108: ret  */
  return;
L_e110c:;
  /* e110c: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* e1110: ret  */
  return;
}

void fn1_e3a4c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038860364));
  /* e3a4c: bti c */
  /* bti: no architectural effect here */
  /* e3a50: b #0xe3a54 */
  fn1_e3a54(c); return;
}

void fn1_e7f5c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038878044));
  /* e7f5c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e7f60: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* e7f64: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e7f68: str x21, [sp, #0x30] */
  arc_st64(((c)->sp + INT64_C(48)), ARC_X_R(c, 21));
  /* e7f6c: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* e7f70: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* e7f74: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* e7f78: ldr w1, [x0] */
  ARC_W_W(c, 1, arc_ld32(ARC_X_R(c, 0)));
  /* e7f7c: mov x20, x8 */
  ARC_X_W(c, 20, ARC_X_R(c, 8));
  /* e7f80: cbz w1, #0xe7fec */
  if ((ARC_W_R(c, 1)) == 0) goto L_e7fec;
  /* e7f84: ldrb w8, [x19] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 19)));
  /* e7f88: ldr x9, [x19, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* e7f8c: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* e7f90: lsr x10, x8, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* e7f94: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* e7f98: csel x8, x10, x9, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* e7f9c: cbz x8, #0xe7fb4 */
  if ((ARC_X_R(c, 8)) == 0) goto L_e7fb4;
  /* e7fa0: nop  */
  /* nop: no architectural effect here */
  /* e7fa4: adr x1, #0x52030 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(335920)));
  /* e7fa8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* e7fac: bl #0x142b78 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(950192));
  fn1_142b78(c);
  /* e7fb0: ldr w1, [x21] */
  ARC_W_W(c, 1, arc_ld32(ARC_X_R(c, 21)));
L_e7fb4:;
  /* e7fb4: ldr x0, [x21, #8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 21) + INT64_C(8))));
  /* e7fb8: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* e7fbc: ldr x9, [x8, #0x30] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(48))));
  /* e7fc0: add x8, sp, #8 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(8)));
  /* e7fc4: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(950216));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* e7fc8: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* e7fcc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* e7fd0: bl #0xd8234 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(950228));
  fn1_d8234(c);
  /* e7fd4: ldrb w8, [sp, #8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(8))));
  /* e7fd8: tbz w8, #0, #0xe7fec */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_e7fec;
  /* e7fdc: ldr x8, [sp, #8] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(8))));
  /* e7fe0: ldr x0, [sp, #0x18] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(24))));
  /* e7fe4: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* e7fe8: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(950252));
  fn1_142608(c);
L_e7fec:;
  /* e7fec: ldr q0, [x19] */
  arc_q_w(c, 0, arc_ld64(ARC_X_R(c, 19)), arc_ld64(ARC_X_R(c, 19) + 8));
  /* e7ff0: ldr x8, [x19, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* e7ff4: stp xzr, xzr, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* e7ff8: str q0, [x20] */
  arc_st64(ARC_X_R(c, 20), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 20) + 8, (c)->q[0].u64[1]);
  /* e7ffc: str x8, [x20, #0x10] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(16)), ARC_X_R(c, 8));
  /* e8000: str xzr, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 31));
  /* e8004: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* e8008: ldr x21, [sp, #0x30] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(48))));
  /* e800c: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e8010: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* e8014: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* e8018: ret  */
  return;
  /* e801c: ldrb w8, [sp, #8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(8))));
  /* e8020: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* e8024: tbz w8, #0, #0xe8038 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_e8038;
  /* e8028: ldr x8, [sp, #8] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(8))));
  /* e802c: ldr x0, [sp, #0x18] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(24))));
  /* e8030: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* e8034: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(950328));
  fn1_142608(c);
L_e8038:;
  /* e8038: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* e803c: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(950336));
  fn1_9cc20(c);
}

void fn1_ea910(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038888720));
  /* ea910: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* ea914: sub sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(48)));
  /* ea918: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* ea91c: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* ea920: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* ea924: ldr x20, [x0] */
  ARC_X_W(c, 20, arc_ld64(ARC_X_R(c, 0)));
  /* ea928: cbz x20, #0xea9c8 */
  if ((ARC_X_R(c, 20)) == 0) goto L_ea9c8;
  /* ea92c: ldr x19, [x1] */
  ARC_X_W(c, 19, arc_ld64(ARC_X_R(c, 1)));
  /* ea930: str x19, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 19));
  /* ea934: cbz x19, #0xea944 */
  if ((ARC_X_R(c, 19)) == 0) goto L_ea944;
  /* ea938: sub x1, x19, #0x78 */
  ARC_X_W(c, 1, (ARC_X_R(c, 19) - UINT64_C(120)));
  /* ea93c: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* ea940: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(960836));
  fn1_bd950(c);
L_ea944:;
  /* ea944: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* ea948: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* ea94c: bl #0x1431a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(960848));
  fn1_1431a8(c);
  /* ea950: cbz x19, #0xea9a0 */
  if ((ARC_X_R(c, 19)) == 0) goto L_ea9a0;
  /* ea954: sub x1, x19, #0x78 */
  ARC_X_W(c, 1, (ARC_X_R(c, 19) - UINT64_C(120)));
  /* ea958: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* ea95c: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(960864));
  fn1_bd950(c);
  /* ea960: cmp x0, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 0), UINT64_C(1));
  /* ea964: b.ne #0xea9a0 */
  if (ARC_COND(c, 1)) goto L_ea9a0;
  /* ea968: ldur x8, [x19, #-0x68] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(-104))));
  /* ea96c: cbz x8, #0xea978 */
  if ((ARC_X_R(c, 8)) == 0) goto L_ea978;
  /* ea970: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ea974: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(960888));
  arc_dispatch(c, ARC_X_R(c, 8));
L_ea978:;
  /* ea978: sub x0, x19, #0x80 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) - UINT64_C(128)));
  /* ea97c: nop  */
  /* nop: no architectural effect here */
  /* ea980: adr x8, #0x1576e0 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1406688)));
  /* ea984: cmp x0, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* ea988: b.lo #0xea9b4 */
  if (ARC_COND(c, 3)) goto L_ea9b4;
  /* ea98c: adrp x8, #0x157000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1404928)));
  /* ea990: add x8, x8, #0x8e0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2272)));
  /* ea994: cmp x0, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* ea998: b.hs #0xea9b4 */
  if (ARC_COND(c, 2)) goto L_ea9b4;
  /* ea99c: bl #0xa2664 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(960928));
  fn1_a2664(c);
L_ea9a0:;
  /* ea9a0: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* ea9a4: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ea9a8: add sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(48)));
  /* ea9ac: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* ea9b0: ret  */
  return;
L_ea9b4:;
  /* ea9b4: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* ea9b8: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ea9bc: add sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(48)));
  /* ea9c0: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* ea9c4: b #0x142800 */
  fn1_142800(c); return;
L_ea9c8:;
  /* ea9c8: mov w0, #3 */
  ARC_W_W(c, 0, UINT64_C(3));
  /* ea9cc: bl #0xe9be0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(960976));
  fn1_e9be0(c);
  /* ea9d0: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(960980));
  fn1_a1454(c);
  /* ea9d4: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(960984));
  fn1_a1454(c);
  /* ea9d8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* ea9dc: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* ea9e0: bl #0x142aa0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(960996));
  fn1_142aa0(c);
  /* ea9e4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ea9e8: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(961004));
  fn1_9cc20(c);
}

void fn1_ec06c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038894700));
  /* ec06c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* ec070: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* ec074: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* ec078: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* ec07c: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* ec080: ldr x8, [x8, #0x910] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2320))));
  /* ec084: ldr x19, [x0, #8] */
  ARC_X_W(c, 19, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* ec088: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* ec08c: sub x1, x19, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 19) - UINT64_C(8)));
  /* ec090: str x8, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* ec094: mov w0, #-1 */
  ARC_W_W(c, 0, UINT64_C(18446744073709551615));
  /* ec098: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(966812));
  fn1_a2030(c);
  /* ec09c: cmp w0, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(1));
  /* ec0a0: b.mi #0xec0b4 */
  if (ARC_COND(c, 4)) goto L_ec0b4;
  /* ec0a4: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* ec0a8: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ec0ac: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* ec0b0: ret  */
  return;
L_ec0b4:;
  /* ec0b4: sub x0, x19, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) - UINT64_C(24)));
  /* ec0b8: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* ec0bc: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ec0c0: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* ec0c4: b #0x1426f8 */
  fn1_1426f8(c); return;
}

void fn1_eda98(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038901400));
  /* eda98: bti c */
  /* bti: no architectural effect here */
  /* eda9c: add x0, x0, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(16)));
  /* edaa0: b #0x1433b8 */
  fn1_1433b8(c); return;
}

void fn1_f2910(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038921488));
  /* f2910: bti c */
  /* bti: no architectural effect here */
  /* f2914: fcvt d0, s0 */
  arc_d_w(c, 0, (double)(ARC_S_R(c, 0)));
  /* f2918: b #0xf2924 */
  fn1_f2924(c); return;
}

void fn1_f44d4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038928596));
  /* f44d4: bti c */
  /* bti: no architectural effect here */
  /* f44d8: add x0, x0, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(16)));
  /* f44dc: b #0x1433b8 */
  fn1_1433b8(c); return;
}

void fn1_f9380(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038948736));
  /* f9380: bti c */
  /* bti: no architectural effect here */
  /* f9384: fcvt d0, s0 */
  arc_d_w(c, 0, (double)(ARC_S_R(c, 0)));
  /* f9388: b #0xf9394 */
  fn1_f9394(c); return;
}

void fn1_fd890(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038966416));
  /* fd890: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* fd894: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* fd898: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* fd89c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* fd8a0: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* fd8a4: ldr x8, [x8, #0xb18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2840))));
  /* fd8a8: ldr x9, [x0] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 0)));
  /* fd8ac: ldur x9, [x9, #-0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(-24))));
  /* fd8b0: add x10, x8, #0x18 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(24)));
  /* fd8b4: add x8, x8, #0x40 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(64)));
  /* fd8b8: add x19, x0, x9 */
  ARC_X_W(c, 19, (ARC_X_R(c, 0) + ARC_X_R(c, 9)));
  /* fd8bc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* fd8c0: str x8, [x19, #0xb8]! */
  { const uint64_t _a = (ARC_X_R(c, 19) + INT64_C(184));
    ARC_X_W(c, 19, ARC_X_R(c, 19) + INT64_C(184));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* fd8c4: str x10, [x0], #0x10 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 10));
  }
  /* fd8c8: bl #0x1436d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1038540));
  fn1_1436d0(c);
  /* fd8cc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* fd8d0: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* fd8d4: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* fd8d8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* fd8dc: b #0x1433b8 */
  fn1_1433b8(c); return;
}

void fn1_105fec(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039001068));
  /* 105fec: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 105ff0: sub sp, sp, #0x1e0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(480)));
  /* 105ff4: stp x29, x30, [sp, #0x180] */
  { const uint64_t _pa = ((c)->sp + INT64_C(384));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 105ff8: stp x28, x27, [sp, #0x190] */
  { const uint64_t _pa = ((c)->sp + INT64_C(400));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* 105ffc: stp x26, x25, [sp, #0x1a0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(416));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* 106000: stp x24, x23, [sp, #0x1b0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(432));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 106004: stp x22, x21, [sp, #0x1c0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(448));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 106008: stp x20, x19, [sp, #0x1d0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(464));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 10600c: add x29, sp, #0x180 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(384)));
  /* 106010: ldr w8, [x3, #8] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 3) + INT64_C(8))));
  /* 106014: mov w9, #0x4a */
  ARC_W_W(c, 9, UINT64_C(74));
  /* 106018: mov x24, x3 */
  ARC_X_W(c, 24, ARC_X_R(c, 3));
  /* 10601c: mov x21, x2 */
  ARC_X_W(c, 21, ARC_X_R(c, 2));
  /* 106020: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 106024: sub x26, x29, #0xb0 */
  ARC_X_W(c, 26, (ARC_X_R(c, 29) - UINT64_C(176)));
  /* 106028: ands w8, w8, w9 */
  { uint32_t _r = (uint32_t)(ARC_W_R(c, 8) & ARC_W_R(c, 9));
    arc_flags_logical32(c, _r);
    ARC_W_W(c, 8, _r); }
  /* 10602c: str x5, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 5));
  /* 106030: b.eq #0x106054 */
  if (ARC_COND(c, 0)) goto L_106054;
  /* 106034: cmp w8, #0x40 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(64));
  /* 106038: b.eq #0x10604c */
  if (ARC_COND(c, 0)) goto L_10604c;
  /* 10603c: cmp w8, #8 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(8));
  /* 106040: b.ne #0x10605c */
  if (ARC_COND(c, 1)) goto L_10605c;
  /* 106044: mov w23, #0x10 */
  ARC_W_W(c, 23, UINT64_C(16));
  /* 106048: b #0x106060 */
  goto L_106060;
L_10604c:;
  /* 10604c: mov w23, #8 */
  ARC_W_W(c, 23, UINT64_C(8));
  /* 106050: b #0x106060 */
  goto L_106060;
L_106054:;
  /* 106054: mov w23, wzr */
  ARC_W_W(c, 23, ARC_W_R(c, 31));
  /* 106058: b #0x106060 */
  goto L_106060;
L_10605c:;
  /* 10605c: mov w23, #0xa */
  ARC_W_W(c, 23, UINT64_C(10));
L_106060:;
  /* 106060: sub x1, x29, #0x74 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(116)));
  /* 106064: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 106068: str x4, [sp, #0x18] */
  arc_st64(((c)->sp + INT64_C(24)), ARC_X_R(c, 4));
  /* 10606c: sub x27, x29, #0x74 */
  ARC_X_W(c, 27, (ARC_X_R(c, 29) - UINT64_C(116)));
  /* 106070: bl #0x136534 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1073268));
  fn1_136534(c);
  /* 106074: sub x8, x29, #0x90 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(144)));
  /* 106078: sub x1, x29, #0xc */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(12)));
  /* 10607c: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 106080: bl #0x1366c4 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1073284));
  fn1_1366c4(c);
  /* 106084: stp xzr, xzr, [x26, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 26) + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 106088: str xzr, [x26, #0x18] */
  arc_st64((ARC_X_R(c, 26) + INT64_C(24)), ARC_X_R(c, 31));
  /* 10608c: sub x0, x29, #0xa8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(168)));
  /* 106090: mov w1, #0x16 */
  ARC_W_W(c, 1, UINT64_C(22));
  /* 106094: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 106098: sub x20, x29, #0xa8 */
  ARC_X_W(c, 20, (ARC_X_R(c, 29) - UINT64_C(168)));
  /* 10609c: bl #0x142d10 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1073312));
  fn1_142d10(c);
  /* 1060a0: ldurb w8, [x29, #-0xa8] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-168))));
  /* 1060a4: ldr x9, [x26, #0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 26) + INT64_C(24))));
  /* 1060a8: add x10, sp, #0x30 */
  ARC_X_W(c, 10, ((c)->sp + UINT64_C(48)));
  /* 1060ac: orr x28, x20, #1 */
  ARC_X_W(c, 28, (ARC_X_R(c, 20) | UINT64_C(1)));
  /* 1060b0: add x22, sp, #0x28 */
  ARC_X_W(c, 22, ((c)->sp + UINT64_C(40)));
  /* 1060b4: str x10, [sp, #0x28] */
  arc_st64(((c)->sp + INT64_C(40)), ARC_X_R(c, 10));
  /* 1060b8: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 1060bc: str wzr, [sp, #0x24] */
  arc_st32(((c)->sp + INT64_C(36)), ARC_W_R(c, 31));
  /* 1060c0: csinc x24, x9, x20, ne */
  ARC_X_W(c, 24, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 20)) + 1)));
  /* 1060c4: mov w20, #0x16 */
  ARC_W_W(c, 20, UINT64_C(22));
  /* 1060c8: str x24, [x26] */
  arc_st64(ARC_X_R(c, 26), ARC_X_R(c, 24));
  /* 1060cc: b #0x1060d8 */
  goto L_1060d8;
L_1060d0:;
  /* 1060d0: add x8, x8, #4 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(4)));
  /* 1060d4: str x8, [x19, #0x18] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(24)), ARC_X_R(c, 8));
L_1060d8:;
  /* 1060d8: cbz x19, #0x1060f0 */
  if ((ARC_X_R(c, 19)) == 0) goto L_1060f0;
  /* 1060dc: ldp x8, x9, [x19, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 1060e0: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 1060e4: b.eq #0x1060fc */
  if (ARC_COND(c, 0)) goto L_1060fc;
  /* 1060e8: ldr w0, [x8] */
  ARC_W_W(c, 0, arc_ld32(ARC_X_R(c, 8)));
  /* 1060ec: b #0x10610c */
  goto L_10610c;
L_1060f0:;
  /* 1060f0: cbz x21, #0x1062a8 */
  if ((ARC_X_R(c, 21)) == 0) goto L_1062a8;
  /* 1060f4: mov w25, #1 */
  ARC_W_W(c, 25, UINT64_C(1));
  /* 1060f8: b #0x106120 */
  goto L_106120;
L_1060fc:;
  /* 1060fc: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 106100: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 106104: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 106108: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1073420));
  arc_dispatch(c, ARC_X_R(c, 8));
L_10610c:;
  /* 10610c: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 106110: cset w25, eq */
  ARC_W_W(c, 25, (ARC_COND(c, 0) ? 1 : 0));
  /* 106114: csel x8, xzr, x19, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 19)));
  /* 106118: cbz x21, #0x10615c */
  if ((ARC_X_R(c, 21)) == 0) goto L_10615c;
  /* 10611c: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
L_106120:;
  /* 106120: ldp x8, x9, [x21, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 106124: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 106128: b.eq #0x106134 */
  if (ARC_COND(c, 0)) goto L_106134;
  /* 10612c: ldr w0, [x8] */
  ARC_W_W(c, 0, arc_ld32(ARC_X_R(c, 8)));
  /* 106130: b #0x106144 */
  goto L_106144;
L_106134:;
  /* 106134: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 106138: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 10613c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 106140: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1073476));
  arc_dispatch(c, ARC_X_R(c, 8));
L_106144:;
  /* 106144: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 106148: cset w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? 1 : 0));
  /* 10614c: csel x21, xzr, x21, eq */
  ARC_X_W(c, 21, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 21)));
  /* 106150: cmp w25, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 25), ARC_W_R(c, 8));
  /* 106154: b.ne #0x106164 */
  if (ARC_COND(c, 1)) goto L_106164;
  /* 106158: b #0x1062b4 */
  goto L_1062b4;
L_10615c:;
  /* 10615c: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 106160: b.eq #0x1062b0 */
  if (ARC_COND(c, 0)) goto L_1062b0;
L_106164:;
  /* 106164: ldurb w8, [x29, #-0xa8] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-168))));
  /* 106168: ldr x9, [x26, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 26) + INT64_C(16))));
  /* 10616c: ldr x11, [x26] */
  ARC_X_W(c, 11, arc_ld64(ARC_X_R(c, 26)));
  /* 106170: lsr x10, x8, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* 106174: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 106178: csel x25, x10, x9, eq */
  ARC_X_W(c, 25, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* 10617c: add x9, x24, x25 */
  ARC_X_W(c, 9, (ARC_X_R(c, 24) + ARC_X_R(c, 25)));
  /* 106180: cmp x11, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 9));
  /* 106184: b.ne #0x10623c */
  if (ARC_COND(c, 1)) goto L_10623c;
  /* 106188: cmp x25, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 25), UINT64_C(1));
  /* 10618c: b.lt #0x1061a4 */
  if (ARC_COND(c, 11)) goto L_1061a4;
  /* 106190: sub x0, x29, #0xa8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(168)));
  /* 106194: mov x1, x25 */
  ARC_X_W(c, 1, ARC_X_R(c, 25));
  /* 106198: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 10619c: bl #0x142d10 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1073568));
  fn1_142d10(c);
  /* 1061a0: b #0x1061c8 */
  goto L_1061c8;
L_1061a4:;
  /* 1061a4: lsl x9, x25, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 25)) << ((UINT64_C(1)) & 63)));
  /* 1061a8: tbnz w8, #0, #0x1061bc */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_1061bc;
  /* 1061ac: lsl w8, w9, #1 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 9)) << ((UINT64_C(1)) & 31)));
  /* 1061b0: sturb w8, [x29, #-0xa8] */
  arc_st8((ARC_X_R(c, 29) + INT64_C(-168)), ARC_W_R(c, 8));
  /* 1061b4: mov x8, x28 */
  ARC_X_W(c, 8, ARC_X_R(c, 28));
  /* 1061b8: b #0x1061c4 */
  goto L_1061c4;
L_1061bc:;
  /* 1061bc: ldr x8, [x26, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 26) + INT64_C(24))));
  /* 1061c0: str x9, [x26, #0x10] */
  arc_st64((ARC_X_R(c, 26) + INT64_C(16)), ARC_X_R(c, 9));
L_1061c4:;
  /* 1061c4: strb wzr, [x8, x9] */
  arc_st8((ARC_X_R(c, 8) + ARC_X_R(c, 9)), ARC_W_R(c, 31));
L_1061c8:;
  /* 1061c8: ldp x9, x10, [x26, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 26) + INT64_C(8));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* 1061cc: ldurb w8, [x29, #-0xa8] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-168))));
  /* 1061d0: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 1061d4: and x11, x9, #0xfffffffffffffffe */
  ARC_X_W(c, 11, (ARC_X_R(c, 9) & UINT64_C(18446744073709551614)));
  /* 1061d8: ubfx x12, x9, #1, #7 */
  ARC_X_W(c, 12, (((uint64_t)(ARC_X_R(c, 9)) >> 1) & UINT64_C(127)));
  /* 1061dc: sub x11, x11, #1 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) - UINT64_C(1)));
  /* 1061e0: csel x8, x20, x11, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 20)) : ARC_X_R(c, 11)));
  /* 1061e4: tst x9, #1 */
  arc_flags_logical64(c, (uint64_t)(ARC_X_R(c, 9) & UINT64_C(1)));
  /* 1061e8: csel x10, x12, x10, eq */
  ARC_X_W(c, 10, (ARC_COND(c, 0) ? (ARC_X_R(c, 12)) : ARC_X_R(c, 10)));
  /* 1061ec: subs x1, x8, x10 */
  ARC_X_W(c, 1, arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10)));
  /* 1061f0: b.ls #0x106204 */
  if (ARC_COND(c, 9)) goto L_106204;
  /* 1061f4: sub x0, x29, #0xa8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(168)));
  /* 1061f8: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1061fc: bl #0x142d10 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1073664));
  fn1_142d10(c);
  /* 106200: b #0x106224 */
  goto L_106224;
L_106204:;
  /* 106204: tbnz w9, #0, #0x106218 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) != 0) goto L_106218;
  /* 106208: lsl w9, w8, #1 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 8)) << ((UINT64_C(1)) & 31)));
  /* 10620c: sturb w9, [x29, #-0xa8] */
  arc_st8((ARC_X_R(c, 29) + INT64_C(-168)), ARC_W_R(c, 9));
  /* 106210: mov x9, x28 */
  ARC_X_W(c, 9, ARC_X_R(c, 28));
  /* 106214: b #0x106220 */
  goto L_106220;
L_106218:;
  /* 106218: ldr x9, [x26, #0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 26) + INT64_C(24))));
  /* 10621c: str x8, [x26, #0x10] */
  arc_st64((ARC_X_R(c, 26) + INT64_C(16)), ARC_X_R(c, 8));
L_106220:;
  /* 106220: strb wzr, [x9, x8] */
  arc_st8((ARC_X_R(c, 9) + ARC_X_R(c, 8)), ARC_W_R(c, 31));
L_106224:;
  /* 106224: ldurb w8, [x29, #-0xa8] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-168))));
  /* 106228: ldr x9, [x26, #0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 26) + INT64_C(24))));
  /* 10622c: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 106230: csel x24, x28, x9, eq */
  ARC_X_W(c, 24, (ARC_COND(c, 0) ? (ARC_X_R(c, 28)) : ARC_X_R(c, 9)));
  /* 106234: add x8, x24, x25 */
  ARC_X_W(c, 8, (ARC_X_R(c, 24) + ARC_X_R(c, 25)));
  /* 106238: str x8, [x26] */
  arc_st64(ARC_X_R(c, 26), ARC_X_R(c, 8));
L_10623c:;
  /* 10623c: ldp x8, x9, [x19, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 106240: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 106244: b.eq #0x106250 */
  if (ARC_COND(c, 0)) goto L_106250;
  /* 106248: ldr w0, [x8] */
  ARC_W_W(c, 0, arc_ld32(ARC_X_R(c, 8)));
  /* 10624c: b #0x106260 */
  goto L_106260;
L_106250:;
  /* 106250: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 106254: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 106258: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 10625c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1073760));
  arc_dispatch(c, ARC_X_R(c, 8));
L_106260:;
  /* 106260: ldur w5, [x29, #-0xc] */
  ARC_W_W(c, 5, arc_ld32((ARC_X_R(c, 29) + INT64_C(-12))));
  /* 106264: sub x3, x29, #0xb0 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) - UINT64_C(176)));
  /* 106268: add x4, sp, #0x24 */
  ARC_X_W(c, 4, ((c)->sp + UINT64_C(36)));
  /* 10626c: sub x6, x29, #0x90 */
  ARC_X_W(c, 6, (ARC_X_R(c, 29) - UINT64_C(144)));
  /* 106270: add x7, sp, #0x30 */
  ARC_X_W(c, 7, ((c)->sp + UINT64_C(48)));
  /* 106274: mov w1, w23 */
  ARC_W_W(c, 1, ARC_W_R(c, 23));
  /* 106278: mov x2, x24 */
  ARC_X_W(c, 2, ARC_X_R(c, 24));
  /* 10627c: stp x22, x27, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* 106280: bl #0x143880 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1073796));
  fn1_143880(c);
  /* 106284: cbnz w0, #0x1062b4 */
  if ((ARC_W_R(c, 0)) != 0) goto L_1062b4;
  /* 106288: ldp x8, x9, [x19, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 10628c: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 106290: b.ne #0x1060d0 */
  if (ARC_COND(c, 1)) goto L_1060d0;
  /* 106294: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 106298: ldr x8, [x8, #0x50] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(80))));
  /* 10629c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1062a0: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1073828));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1062a4: b #0x1060d8 */
  goto L_1060d8;
L_1062a8:;
  /* 1062a8: mov x21, x19 */
  ARC_X_W(c, 21, ARC_X_R(c, 19));
  /* 1062ac: b #0x1062b4 */
  goto L_1062b4;
L_1062b0:;
  /* 1062b0: mov x19, x21 */
  ARC_X_W(c, 19, ARC_X_R(c, 21));
L_1062b4:;
  /* 1062b4: ldurb w8, [x29, #-0x90] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-144))));
  /* 1062b8: ldr x9, [x26, #0x28] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 26) + INT64_C(40))));
  /* 1062bc: ldr x22, [sp, #0x18] */
  ARC_X_W(c, 22, arc_ld64(((c)->sp + INT64_C(24))));
  /* 1062c0: lsr x10, x8, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* 1062c4: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 1062c8: csel x8, x10, x9, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* 1062cc: cbz x8, #0x1062f0 */
  if ((ARC_X_R(c, 8)) == 0) goto L_1062f0;
  /* 1062d0: ldr x8, [sp, #0x28] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(40))));
  /* 1062d4: add x9, sp, #0x30 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(48)));
  /* 1062d8: sub x9, x8, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - ARC_X_R(c, 9)));
  /* 1062dc: cmp x9, #0x9f */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(159));
  /* 1062e0: b.gt #0x1062f0 */
  if (ARC_COND(c, 12)) goto L_1062f0;
  /* 1062e4: ldr w9, [sp, #0x24] */
  ARC_W_W(c, 9, arc_ld32(((c)->sp + INT64_C(36))));
  /* 1062e8: str w9, [x8], #4 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(4));
    arc_st32(_a, ARC_W_R(c, 9));
  }
  /* 1062ec: str x8, [sp, #0x28] */
  arc_st64(((c)->sp + INT64_C(40)), ARC_X_R(c, 8));
L_1062f0:;
  /* 1062f0: ldr x1, [x26] */
  ARC_X_W(c, 1, arc_ld64(ARC_X_R(c, 26)));
  /* 1062f4: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 1062f8: mov x2, x22 */
  ARC_X_W(c, 2, ARC_X_R(c, 22));
  /* 1062fc: mov w3, w23 */
  ARC_W_W(c, 3, ARC_W_R(c, 23));
  /* 106300: bl #0x135d44 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1073924));
  fn1_135d44(c);
  /* 106304: ldurb w10, [x29, #-0x90] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 29) + INT64_C(-144))));
  /* 106308: ldr x12, [sp, #0x28] */
  ARC_X_W(c, 12, arc_ld64(((c)->sp + INT64_C(40))));
  /* 10630c: add x11, sp, #0x30 */
  ARC_X_W(c, 11, ((c)->sp + UINT64_C(48)));
  /* 106310: ldr x8, [x26, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 26) + INT64_C(40))));
  /* 106314: lsr x9, x10, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 10)) >> ((UINT64_C(1)) & 63)));
  /* 106318: ands w13, w10, #1 */
  { uint32_t _r = (uint32_t)(ARC_W_R(c, 10) & UINT64_C(1));
    arc_flags_logical32(c, _r);
    ARC_W_W(c, 13, _r); }
  /* 10631c: sub x11, x12, x11 */
  ARC_X_W(c, 11, (ARC_X_R(c, 12) - ARC_X_R(c, 11)));
  /* 106320: csel x8, x9, x8, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* 106324: ldr x9, [sp, #0x10] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(16))));
  /* 106328: cmp x11, #5 */
  (void)arc_sub64(c, ARC_X_R(c, 11), UINT64_C(5));
  /* 10632c: str w0, [x9] */
  arc_st32(ARC_X_R(c, 9), ARC_W_R(c, 0));
  /* 106330: b.lt #0x106490 */
  if (ARC_COND(c, 11)) goto L_106490;
  /* 106334: cbz x8, #0x106490 */
  if ((ARC_X_R(c, 8)) == 0) goto L_106490;
  /* 106338: sub x8, x12, #4 */
  ARC_X_W(c, 8, (ARC_X_R(c, 12) - UINT64_C(4)));
  /* 10633c: add x9, sp, #0x30 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(48)));
  /* 106340: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* 106344: cset w11, lo */
  ARC_W_W(c, 11, (ARC_COND(c, 3) ? 1 : 0));
  /* 106348: cmp x9, x12 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 12));
  /* 10634c: b.eq #0x1063fc */
  if (ARC_COND(c, 0)) goto L_1063fc;
  /* 106350: cbz w11, #0x1063fc */
  if ((ARC_W_R(c, 11)) == 0) goto L_1063fc;
  /* 106354: add x10, sp, #0x30 */
  ARC_X_W(c, 10, ((c)->sp + UINT64_C(48)));
  /* 106358: sub x14, x12, #8 */
  ARC_X_W(c, 14, (ARC_X_R(c, 12) - UINT64_C(8)));
  /* 10635c: add x11, x10, #4 */
  ARC_X_W(c, 11, (ARC_X_R(c, 10) + UINT64_C(4)));
  /* 106360: cmp x14, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 14), ARC_X_R(c, 11));
  /* 106364: csel x13, x14, x11, hi */
  ARC_X_W(c, 13, (ARC_COND(c, 8) ? (ARC_X_R(c, 14)) : ARC_X_R(c, 11)));
  /* 106368: sub x13, x13, #4 */
  ARC_X_W(c, 13, (ARC_X_R(c, 13) - UINT64_C(4)));
  /* 10636c: cmp x13, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 13), ARC_X_R(c, 10));
  /* 106370: cinc x15, x10, ne */
  ARC_X_W(c, 15, (ARC_COND(c, 1) ? (ARC_X_R(c, 10)) + 1 : (ARC_X_R(c, 10))));
  /* 106374: cmp x13, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 13), ARC_X_R(c, 10));
  /* 106378: sub x15, x13, x15 */
  ARC_X_W(c, 15, (ARC_X_R(c, 13) - ARC_X_R(c, 15)));
  /* 10637c: lsr x15, x15, #3 */
  ARC_X_W(c, 15, ((uint64_t)(ARC_X_R(c, 15)) >> ((UINT64_C(3)) & 63)));
  /* 106380: cinc x13, x15, ne */
  ARC_X_W(c, 13, (ARC_COND(c, 1) ? (ARC_X_R(c, 15)) + 1 : (ARC_X_R(c, 15))));
  /* 106384: cmp x13, #0x13 */
  (void)arc_sub64(c, ARC_X_R(c, 13), UINT64_C(19));
  /* 106388: b.lo #0x1063d0 */
  if (ARC_COND(c, 3)) goto L_1063d0;
  /* 10638c: cmp x14, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 14), ARC_X_R(c, 11));
  /* 106390: csel x14, x14, x11, hi */
  ARC_X_W(c, 14, (ARC_COND(c, 8) ? (ARC_X_R(c, 14)) : ARC_X_R(c, 11)));
  /* 106394: sub x14, x14, #4 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) - UINT64_C(4)));
  /* 106398: cmp x14, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 14), ARC_X_R(c, 10));
  /* 10639c: cinc x15, x10, ne */
  ARC_X_W(c, 15, (ARC_COND(c, 1) ? (ARC_X_R(c, 10)) + 1 : (ARC_X_R(c, 10))));
  /* 1063a0: cmp x14, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 14), ARC_X_R(c, 10));
  /* 1063a4: sub x15, x14, x15 */
  ARC_X_W(c, 15, (ARC_X_R(c, 14) - ARC_X_R(c, 15)));
  /* 1063a8: lsr x15, x15, #3 */
  ARC_X_W(c, 15, ((uint64_t)(ARC_X_R(c, 15)) >> ((UINT64_C(3)) & 63)));
  /* 1063ac: cinc x14, x15, ne */
  ARC_X_W(c, 14, (ARC_COND(c, 1) ? (ARC_X_R(c, 15)) + 1 : (ARC_X_R(c, 15))));
  /* 1063b0: cmp x10, x12 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 12));
  /* 1063b4: b.hs #0x106580 */
  if (ARC_COND(c, 2)) goto L_106580;
  /* 1063b8: lsl x14, x14, #2 */
  ARC_X_W(c, 14, ((uint64_t)(ARC_X_R(c, 14)) << ((UINT64_C(2)) & 63)));
  /* 1063bc: sub x15, x12, x14 */
  ARC_X_W(c, 15, (ARC_X_R(c, 12) - ARC_X_R(c, 14)));
  /* 1063c0: add x11, x11, x14 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) + ARC_X_R(c, 14)));
  /* 1063c4: sub x14, x15, #4 */
  ARC_X_W(c, 14, (ARC_X_R(c, 15) - UINT64_C(4)));
  /* 1063c8: cmp x14, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 14), ARC_X_R(c, 11));
  /* 1063cc: b.hs #0x106580 */
  if (ARC_COND(c, 2)) goto L_106580;
L_1063d0:;
  /* 1063d0: mov x11, x8 */
  ARC_X_W(c, 11, ARC_X_R(c, 8));
L_1063d4:;
  /* 1063d4: add x10, x10, #4 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(4)));
L_1063d8:;
  /* 1063d8: ldr w12, [x11] */
  ARC_W_W(c, 12, arc_ld32(ARC_X_R(c, 11)));
  /* 1063dc: ldur w13, [x10, #-4] */
  ARC_W_W(c, 13, arc_ld32((ARC_X_R(c, 10) + INT64_C(-4))));
  /* 1063e0: stur w12, [x10, #-4] */
  arc_st32((ARC_X_R(c, 10) + INT64_C(-4)), ARC_W_R(c, 12));
  /* 1063e4: str w13, [x11], #0xfffffffffffffffc */
  { const uint64_t _a = ARC_X_R(c, 11);
    ARC_X_W(c, 11, ARC_X_R(c, 11) + INT64_C(-4));
    arc_st32(_a, ARC_W_R(c, 13));
  }
  /* 1063e8: cmp x10, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 11));
  /* 1063ec: add x10, x10, #4 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(4)));
  /* 1063f0: b.lo #0x1063d8 */
  if (ARC_COND(c, 3)) goto L_1063d8;
L_1063f4:;
  /* 1063f4: ldurb w10, [x29, #-0x90] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 29) + INT64_C(-144))));
  /* 1063f8: and w13, w10, #1 */
  ARC_W_W(c, 13, (ARC_W_R(c, 10) & UINT64_C(1)));
L_1063fc:;
  /* 1063fc: ldr x11, [x26, #0x30] */
  ARC_X_W(c, 11, arc_ld64((ARC_X_R(c, 26) + INT64_C(48))));
  /* 106400: cmp w13, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 13), UINT64_C(0));
  /* 106404: sub x12, x29, #0x90 */
  ARC_X_W(c, 12, (ARC_X_R(c, 29) - UINT64_C(144)));
  /* 106408: csinc x11, x11, x12, ne */
  ARC_X_W(c, 11, (ARC_COND(c, 1) ? (ARC_X_R(c, 11)) : ((ARC_X_R(c, 12)) + 1)));
  /* 10640c: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* 106410: b.hs #0x106468 */
  if (ARC_COND(c, 2)) goto L_106468;
  /* 106414: lsr w9, w10, #1 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 10)) >> ((UINT64_C(1)) & 31)));
  /* 106418: ldr x10, [x26, #0x28] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 26) + INT64_C(40))));
  /* 10641c: cmp w13, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 13), UINT64_C(0));
  /* 106420: csel x9, x9, x10, eq */
  ARC_X_W(c, 9, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 10)));
  /* 106424: add x10, sp, #0x30 */
  ARC_X_W(c, 10, ((c)->sp + UINT64_C(48)));
  /* 106428: add x9, x11, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 11) + ARC_X_R(c, 9)));
  /* 10642c: b #0x106448 */
  goto L_106448;
L_106430:;
  /* 106430: sub x12, x9, x11 */
  ARC_X_W(c, 12, (ARC_X_R(c, 9) - ARC_X_R(c, 11)));
  /* 106434: add x10, x10, #4 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(4)));
  /* 106438: cmp x12, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 12), UINT64_C(1));
  /* 10643c: cinc x11, x11, gt */
  ARC_X_W(c, 11, (ARC_COND(c, 12) ? (ARC_X_R(c, 11)) + 1 : (ARC_X_R(c, 11))));
  /* 106440: cmp x10, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 8));
  /* 106444: b.hs #0x106468 */
  if (ARC_COND(c, 2)) goto L_106468;
L_106448:;
  /* 106448: ldrb w12, [x11] */
  ARC_W_W(c, 12, arc_ld8(ARC_X_R(c, 11)));
  /* 10644c: cbz w12, #0x106430 */
  if ((ARC_W_R(c, 12)) == 0) goto L_106430;
  /* 106450: cmp w12, #0xff */
  (void)arc_sub32(c, ARC_W_R(c, 12), UINT64_C(255));
  /* 106454: b.eq #0x106430 */
  if (ARC_COND(c, 0)) goto L_106430;
  /* 106458: ldr w13, [x10] */
  ARC_W_W(c, 13, arc_ld32(ARC_X_R(c, 10)));
  /* 10645c: cmp w13, w12 */
  (void)arc_sub32(c, ARC_W_R(c, 13), ARC_W_R(c, 12));
  /* 106460: b.eq #0x106430 */
  if (ARC_COND(c, 0)) goto L_106430;
  /* 106464: b #0x106488 */
  goto L_106488;
L_106468:;
  /* 106468: ldrb w9, [x11] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 11)));
  /* 10646c: cbz w9, #0x106490 */
  if ((ARC_W_R(c, 9)) == 0) goto L_106490;
  /* 106470: cmp w9, #0xff */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(255));
  /* 106474: b.eq #0x106490 */
  if (ARC_COND(c, 0)) goto L_106490;
  /* 106478: ldr w8, [x8] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 8)));
  /* 10647c: sub w8, w8, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) - UINT64_C(1)));
  /* 106480: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* 106484: b.lo #0x106490 */
  if (ARC_COND(c, 3)) goto L_106490;
L_106488:;
  /* 106488: mov w8, #4 */
  ARC_W_W(c, 8, UINT64_C(4));
  /* 10648c: str w8, [x22] */
  arc_st32(ARC_X_R(c, 22), ARC_W_R(c, 8));
L_106490:;
  /* 106490: cbz x19, #0x1064a8 */
  if ((ARC_X_R(c, 19)) == 0) goto L_1064a8;
  /* 106494: ldp x8, x9, [x19, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 106498: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 10649c: b.eq #0x1064b4 */
  if (ARC_COND(c, 0)) goto L_1064b4;
  /* 1064a0: ldr w0, [x8] */
  ARC_W_W(c, 0, arc_ld32(ARC_X_R(c, 8)));
  /* 1064a4: b #0x1064c4 */
  goto L_1064c4;
L_1064a8:;
  /* 1064a8: cbz x21, #0x10651c */
  if ((ARC_X_R(c, 21)) == 0) goto L_10651c;
  /* 1064ac: mov w20, #1 */
  ARC_W_W(c, 20, UINT64_C(1));
  /* 1064b0: b #0x1064d8 */
  goto L_1064d8;
L_1064b4:;
  /* 1064b4: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 1064b8: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 1064bc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1064c0: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1074372));
  arc_dispatch(c, ARC_X_R(c, 8));
L_1064c4:;
  /* 1064c4: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 1064c8: cset w20, eq */
  ARC_W_W(c, 20, (ARC_COND(c, 0) ? 1 : 0));
  /* 1064cc: csel x8, xzr, x19, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 19)));
  /* 1064d0: cbz x21, #0x106510 */
  if ((ARC_X_R(c, 21)) == 0) goto L_106510;
  /* 1064d4: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
L_1064d8:;
  /* 1064d8: ldp x8, x9, [x21, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 1064dc: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 1064e0: b.eq #0x1064ec */
  if (ARC_COND(c, 0)) goto L_1064ec;
  /* 1064e4: ldr w0, [x8] */
  ARC_W_W(c, 0, arc_ld32(ARC_X_R(c, 8)));
  /* 1064e8: b #0x1064fc */
  goto L_1064fc;
L_1064ec:;
  /* 1064ec: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 1064f0: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 1064f4: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 1064f8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1074428));
  arc_dispatch(c, ARC_X_R(c, 8));
L_1064fc:;
  /* 1064fc: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 106500: cset w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? 1 : 0));
  /* 106504: eor w8, w20, w8 */
  ARC_W_W(c, 8, (ARC_W_R(c, 20) ^ ARC_W_R(c, 8)));
  /* 106508: tbz w8, #0, #0x10651c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_10651c;
  /* 10650c: b #0x106528 */
  goto L_106528;
L_106510:;
  /* 106510: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 106514: b.ne #0x106528 */
  if (ARC_COND(c, 1)) goto L_106528;
  /* 106518: mov x19, xzr */
  ARC_X_W(c, 19, ARC_X_R(c, 31));
L_10651c:;
  /* 10651c: ldr w8, [x22] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 22)));
  /* 106520: orr w8, w8, #2 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | UINT64_C(2)));
  /* 106524: str w8, [x22] */
  arc_st32(ARC_X_R(c, 22), ARC_W_R(c, 8));
L_106528:;
  /* 106528: ldurb w8, [x29, #-0xa8] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-168))));
  /* 10652c: tbz w8, #0, #0x106540 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_106540;
  /* 106530: ldr x8, [x26, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 26) + INT64_C(8))));
  /* 106534: ldr x0, [x26, #0x18] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 26) + INT64_C(24))));
  /* 106538: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 10653c: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1074496));
  fn1_142608(c);
L_106540:;
  /* 106540: ldurb w8, [x29, #-0x90] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-144))));
  /* 106544: tbz w8, #0, #0x106558 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_106558;
  /* 106548: ldr x8, [x26, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 26) + INT64_C(32))));
  /* 10654c: ldr x0, [x26, #0x30] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 26) + INT64_C(48))));
  /* 106550: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 106554: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1074520));
  fn1_142608(c);
L_106558:;
  /* 106558: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 10655c: ldp x20, x19, [sp, #0x1d0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(464));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 106560: ldp x22, x21, [sp, #0x1c0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(448));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 106564: ldp x24, x23, [sp, #0x1b0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(432));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 106568: ldp x26, x25, [sp, #0x1a0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(416));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* 10656c: ldp x28, x27, [sp, #0x190] */
  { const uint64_t _pa = ((c)->sp + INT64_C(400));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* 106570: ldp x29, x30, [sp, #0x180] */
  { const uint64_t _pa = ((c)->sp + INT64_C(384));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 106574: add sp, sp, #0x1e0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(480)));
  /* 106578: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 10657c: ret  */
  return;
L_106580:;
  /* 106580: add x13, x13, #1 */
  ARC_X_W(c, 13, (ARC_X_R(c, 13) + UINT64_C(1)));
  /* 106584: add x15, sp, #0x30 */
  ARC_X_W(c, 15, ((c)->sp + UINT64_C(48)));
  /* 106588: sub x12, x12, #0x10 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) - UINT64_C(16)));
  /* 10658c: and x14, x13, #0x7ffffffffffffff8 */
  ARC_X_W(c, 14, (ARC_X_R(c, 13) & UINT64_C(9223372036854775800)));
  /* 106590: lsl x10, x14, #2 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 14)) << ((UINT64_C(2)) & 63)));
  /* 106594: mov x16, x14 */
  ARC_X_W(c, 16, ARC_X_R(c, 14));
  /* 106598: sub x11, x8, x10 */
  ARC_X_W(c, 11, (ARC_X_R(c, 8) - ARC_X_R(c, 10)));
  /* 10659c: add x10, x15, x10 */
  ARC_X_W(c, 10, (ARC_X_R(c, 15) + ARC_X_R(c, 10)));
  /* 1065a0: add x15, x15, #0x10 */
  ARC_X_W(c, 15, (ARC_X_R(c, 15) + UINT64_C(16)));
L_1065a4:;
  /* 1065a4: ldp q1, q0, [x12, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 12) + INT64_C(-16));
    arc_q_w(c, 1, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 0, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* 1065a8: sub x16, x16, #8 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) - UINT64_C(8)));
  /* 1065ac: ldp q2, q3, [x15, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 15) + INT64_C(-16));
    arc_q_w(c, 2, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 3, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* 1065b0: rev64 v0.4s, v0.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[0].u32[1];
    _t.u32[1] = (c)->q[0].u32[0];
    _t.u32[2] = (c)->q[0].u32[3];
    _t.u32[3] = (c)->q[0].u32[2];
    (c)->q[0] = _t; }
  /* 1065b4: rev64 v1.4s, v1.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[1].u32[1];
    _t.u32[1] = (c)->q[1].u32[0];
    _t.u32[2] = (c)->q[1].u32[3];
    _t.u32[3] = (c)->q[1].u32[2];
    (c)->q[1] = _t; }
  /* 1065b8: rev64 v2.4s, v2.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[2].u32[1];
    _t.u32[1] = (c)->q[2].u32[0];
    _t.u32[2] = (c)->q[2].u32[3];
    _t.u32[3] = (c)->q[2].u32[2];
    (c)->q[2] = _t; }
  /* 1065bc: rev64 v3.4s, v3.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[3].u32[1];
    _t.u32[1] = (c)->q[3].u32[0];
    _t.u32[2] = (c)->q[3].u32[3];
    _t.u32[3] = (c)->q[3].u32[2];
    (c)->q[3] = _t; }
  /* 1065c0: ext v0.16b, v0.16b, v0.16b, #8 */
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
  /* 1065c4: ext v1.16b, v1.16b, v1.16b, #8 */
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
  /* 1065c8: ext v2.16b, v2.16b, v2.16b, #8 */
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
  /* 1065cc: ext v3.16b, v3.16b, v3.16b, #8 */
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
  /* 1065d0: stp q0, q1, [x15, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 15) + INT64_C(-16));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[1].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[1].u64[1]);
  }
  /* 1065d4: add x15, x15, #0x20 */
  ARC_X_W(c, 15, (ARC_X_R(c, 15) + UINT64_C(32)));
  /* 1065d8: stp q3, q2, [x12, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 12) + INT64_C(-16));
    arc_st64(_pa, (c)->q[3].u64[0]);
    arc_st64(_pa + 8, (c)->q[3].u64[1]);
    arc_st64((_pa + 16), (c)->q[2].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[2].u64[1]);
  }
  /* 1065dc: sub x12, x12, #0x20 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) - UINT64_C(32)));
  /* 1065e0: cbnz x16, #0x1065a4 */
  if ((ARC_X_R(c, 16)) != 0) goto L_1065a4;
  /* 1065e4: cmp x13, x14 */
  (void)arc_sub64(c, ARC_X_R(c, 13), ARC_X_R(c, 14));
  /* 1065e8: b.eq #0x1063f4 */
  if (ARC_COND(c, 0)) goto L_1063f4;
  /* 1065ec: b #0x1063d4 */
  goto L_1063d4;
  /* 1065f0: b #0x1065fc */
  goto L_1065fc;
  /* 1065f4: b #0x1065fc */
  goto L_1065fc;
  /* 1065f8: b #0x1065fc */
  goto L_1065fc;
L_1065fc:;
  /* 1065fc: ldurb w8, [x29, #-0xa8] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-168))));
  /* 106600: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 106604: tbnz w8, #0, #0x106618 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_106618;
  /* 106608: ldurb w8, [x29, #-0x90] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-144))));
  /* 10660c: tbnz w8, #0, #0x106630 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_106630;
L_106610:;
  /* 106610: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 106614: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1074712));
  fn1_9cc20(c);
L_106618:;
  /* 106618: ldr x8, [x26, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 26) + INT64_C(8))));
  /* 10661c: ldr x0, [x26, #0x18] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 26) + INT64_C(24))));
  /* 106620: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 106624: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1074728));
  fn1_142608(c);
  /* 106628: ldurb w8, [x29, #-0x90] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-144))));
  /* 10662c: tbz w8, #0, #0x106610 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_106610;
L_106630:;
  /* 106630: ldr x8, [x26, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 26) + INT64_C(32))));
  /* 106634: ldr x0, [x26, #0x30] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 26) + INT64_C(48))));
  /* 106638: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 10663c: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1074752));
  fn1_142608(c);
  /* 106640: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 106644: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1074760));
  fn1_9cc20(c);
}

void fn1_111758(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039048024));
  /* 111758: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 11175c: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 111760: stp x24, x23, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 111764: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 111768: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 11176c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 111770: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 111774: ldr x8, [x0, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_a));
  }
  /* 111778: mov x19, x5 */
  ARC_X_W(c, 19, ARC_X_R(c, 5));
  /* 11177c: mov x20, x4 */
  ARC_X_W(c, 20, ARC_X_R(c, 4));
  /* 111780: mov x21, x3 */
  ARC_X_W(c, 21, ARC_X_R(c, 3));
  /* 111784: ldr x8, [x8, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* 111788: mov x23, x2 */
  ARC_X_W(c, 23, ARC_X_R(c, 2));
  /* 11178c: mov x24, x1 */
  ARC_X_W(c, 24, ARC_X_R(c, 1));
  /* 111790: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1120148));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 111794: mov x8, x0 */
  ARC_X_W(c, 8, ARC_X_R(c, 0));
  /* 111798: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 11179c: mov x1, x24 */
  ARC_X_W(c, 1, ARC_X_R(c, 24));
  /* 1117a0: ldrb w9, [x8] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 8)));
  /* 1117a4: ldp x11, x10, [x8, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 8) + INT64_C(8));
    ARC_X_W(c, 11, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* 1117a8: add x8, x8, #4 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(4)));
  /* 1117ac: mov x2, x23 */
  ARC_X_W(c, 2, ARC_X_R(c, 23));
  /* 1117b0: mov x3, x21 */
  ARC_X_W(c, 3, ARC_X_R(c, 21));
  /* 1117b4: lsr x12, x9, #1 */
  ARC_X_W(c, 12, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(1)) & 63)));
  /* 1117b8: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* 1117bc: mov x4, x20 */
  ARC_X_W(c, 4, ARC_X_R(c, 20));
  /* 1117c0: csel x6, x8, x10, eq */
  ARC_X_W(c, 6, (ARC_COND(c, 0) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 10)));
  /* 1117c4: mov x5, x19 */
  ARC_X_W(c, 5, ARC_X_R(c, 19));
  /* 1117c8: csel x8, x12, x11, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 12)) : ARC_X_R(c, 11)));
  /* 1117cc: add x7, x6, x8, lsl #2 */
  ARC_X_W(c, 7, (ARC_X_R(c, 6) + ((uint64_t)(ARC_X_R(c, 8)) << 2)));
  /* 1117d0: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1117d4: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1117d8: ldp x24, x23, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 1117dc: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1117e0: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 1117e4: b #0x1439a0 */
  fn1_1439a0(c); return;
}

void fn1_113de4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039057892));
  /* 113de4: bti c */
  /* bti: no architectural effect here */
  /* 113de8: ldrb w0, [x0, #0x11] */
  ARC_W_W(c, 0, arc_ld8((ARC_X_R(c, 0) + INT64_C(17))));
  /* 113dec: ret  */
  return;
}

void fn1_11adbc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039086524));
  /* 11adbc: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 11adc0: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 11adc4: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 11adc8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 11adcc: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 11add0: bl #0x143df0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1158612));
  fn1_143df0(c);
  /* 11add4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 11add8: mov w1, #0x10 */
  ARC_W_W(c, 1, UINT64_C(16));
  /* 11addc: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 11ade0: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 11ade4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 11ade8: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_125994(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039130516));
  /* 125994: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 125998: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 12599c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1259a0: adrp x9, #0x151000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 1259a4: ldr x9, [x9, #0xc60] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(3168))));
  /* 1259a8: ldr x8, [x0, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 1259ac: add x9, x9, #0x10 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(16)));
  /* 1259b0: str x9, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 9));
  /* 1259b4: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1259b8: bl #0x144210 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1202620));
  fn1_144210(c);
  /* 1259bc: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1259c0: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 1259c4: ret  */
  return;
  /* 1259c8: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1202636));
  fn1_a1454(c);
}

void fn1_127e6c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039139948));
  /* 127e6c: bti c */
  /* bti: no architectural effect here */
  /* 127e70: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 127e74: ret  */
  return;
}

void fn1_12a1dc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039149020));
  /* 12a1dc: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 12a1e0: sub sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(48)));
  /* 12a1e4: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 12a1e8: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 12a1ec: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 12a1f0: mov x19, x7 */
  ARC_X_W(c, 19, ARC_X_R(c, 7));
  /* 12a1f4: mov x9, x6 */
  ARC_X_W(c, 9, ARC_X_R(c, 6));
  /* 12a1f8: mov x8, x5 */
  ARC_X_W(c, 8, ARC_X_R(c, 5));
  /* 12a1fc: ldr x6, [x0, #0x10] */
  ARC_X_W(c, 6, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 12a200: ldr w7, [x0, #0x18] */
  ARC_W_W(c, 7, arc_ld32((ARC_X_R(c, 0) + INT64_C(24))));
  /* 12a204: mov x20, x4 */
  ARC_X_W(c, 20, ARC_X_R(c, 4));
  /* 12a208: mov x1, x3 */
  ARC_X_W(c, 1, ARC_X_R(c, 3));
  /* 12a20c: mov x0, x2 */
  ARC_X_W(c, 0, ARC_X_R(c, 2));
  /* 12a210: add x2, sp, #8 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(8)));
  /* 12a214: mov x5, sp */
  ARC_X_W(c, 5, (c)->sp);
  /* 12a218: mov x3, x8 */
  ARC_X_W(c, 3, ARC_X_R(c, 8));
  /* 12a21c: mov x4, x9 */
  ARC_X_W(c, 4, ARC_X_R(c, 9));
  /* 12a220: bl #0x12955c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1221156));
  fn1_12955c(c);
  /* 12a224: ldp x9, x8, [sp] */
  { const uint64_t _pa = (c)->sp;
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* 12a228: str x8, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 8));
  /* 12a22c: str x9, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 9));
  /* 12a230: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 12a234: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 12a238: add sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(48)));
  /* 12a23c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 12a240: ret  */
  return;
}

void fn1_12b9d8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039155160));
  /* 12b9d8: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 12b9dc: sub sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(48)));
  /* 12b9e0: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 12b9e4: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 12b9e8: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 12b9ec: mov x19, x7 */
  ARC_X_W(c, 19, ARC_X_R(c, 7));
  /* 12b9f0: mov x9, x6 */
  ARC_X_W(c, 9, ARC_X_R(c, 6));
  /* 12b9f4: mov x8, x5 */
  ARC_X_W(c, 8, ARC_X_R(c, 5));
  /* 12b9f8: ldr x6, [x0, #0x10] */
  ARC_X_W(c, 6, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 12b9fc: ldr w7, [x0, #0x18] */
  ARC_W_W(c, 7, arc_ld32((ARC_X_R(c, 0) + INT64_C(24))));
  /* 12ba00: mov x20, x4 */
  ARC_X_W(c, 20, ARC_X_R(c, 4));
  /* 12ba04: mov x1, x3 */
  ARC_X_W(c, 1, ARC_X_R(c, 3));
  /* 12ba08: mov x0, x2 */
  ARC_X_W(c, 0, ARC_X_R(c, 2));
  /* 12ba0c: add x2, sp, #8 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(8)));
  /* 12ba10: mov x5, sp */
  ARC_X_W(c, 5, (c)->sp);
  /* 12ba14: mov x3, x8 */
  ARC_X_W(c, 3, ARC_X_R(c, 8));
  /* 12ba18: mov x4, x9 */
  ARC_X_W(c, 4, ARC_X_R(c, 9));
  /* 12ba1c: bl #0x12b350 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1227296));
  fn1_12b350(c);
  /* 12ba20: ldp x9, x8, [sp] */
  { const uint64_t _pa = (c)->sp;
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* 12ba24: str x8, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 8));
  /* 12ba28: str x9, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 9));
  /* 12ba2c: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 12ba30: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 12ba34: add sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(48)));
  /* 12ba38: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 12ba3c: ret  */
  return;
}

void fn1_12eaf0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039167728));
  /* 12eaf0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 12eaf4: sub sp, sp, #0x100 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(256)));
  /* 12eaf8: stp x29, x30, [sp, #0xa0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(160));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 12eafc: stp x28, x27, [sp, #0xb0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(176));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* 12eb00: stp x26, x25, [sp, #0xc0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(192));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* 12eb04: stp x24, x23, [sp, #0xd0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(208));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 12eb08: stp x22, x21, [sp, #0xe0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(224));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 12eb0c: stp x20, x19, [sp, #0xf0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(240));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 12eb10: add x29, sp, #0xa0 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(160)));
  /* 12eb14: sub x8, x3, x2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 3) - ARC_X_R(c, 2)));
  /* 12eb18: mov x9, #-0x5555555555555556 */
  ARC_X_W(c, 9, UINT64_C(12297829382473034410));
  /* 12eb1c: mov x20, x5 */
  ARC_X_W(c, 20, ARC_X_R(c, 5));
  /* 12eb20: asr x8, x8, #3 */
  ARC_X_W(c, 8, ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(3)) & 63))));
  /* 12eb24: movk x9, #0xaaab */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(18446744073709486080)) | UINT64_C(43691)));
  /* 12eb28: mov x24, x4 */
  ARC_X_W(c, 24, ARC_X_R(c, 4));
  /* 12eb2c: mov x22, x3 */
  ARC_X_W(c, 22, ARC_X_R(c, 3));
  /* 12eb30: mov x19, x2 */
  ARC_X_W(c, 19, ARC_X_R(c, 2));
  /* 12eb34: mov x26, x0 */
  ARC_X_W(c, 26, ARC_X_R(c, 0));
  /* 12eb38: mul x25, x8, x9 */
  ARC_X_W(c, 25, ((uint64_t)(ARC_X_R(c, 8)) * (uint64_t)(ARC_X_R(c, 9))));
  /* 12eb3c: str x1, [sp, #0x30] */
  arc_st64(((c)->sp + INT64_C(48)), ARC_X_R(c, 1));
  /* 12eb40: cmp x25, #0x65 */
  (void)arc_sub64(c, ARC_X_R(c, 25), UINT64_C(101));
  /* 12eb44: b.lo #0x12eb5c */
  if (ARC_COND(c, 3)) goto L_12eb5c;
  /* 12eb48: mov x0, x25 */
  ARC_X_W(c, 0, ARC_X_R(c, 25));
  /* 12eb4c: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1239888));
  fn1_1428a8(c);
  /* 12eb50: mov x27, x0 */
  ARC_X_W(c, 27, ARC_X_R(c, 0));
  /* 12eb54: cbnz x0, #0x12eb64 */
  if ((ARC_X_R(c, 0)) != 0) goto L_12eb64;
  /* 12eb58: bl #0x142c08 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1239900));
  fn1_142c08(c);
L_12eb5c:;
  /* 12eb5c: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
  /* 12eb60: add x27, sp, #0x3c */
  ARC_X_W(c, 27, ((c)->sp + UINT64_C(60)));
L_12eb64:;
  /* 12eb64: cmp x19, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 22));
  /* 12eb68: stp x20, x0, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 0));
  }
  /* 12eb6c: b.eq #0x12ed10 */
  if (ARC_COND(c, 0)) goto L_12ed10;
  /* 12eb70: mov x28, xzr */
  ARC_X_W(c, 28, ARC_X_R(c, 31));
  /* 12eb74: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 12eb78: mov x9, x19 */
  ARC_X_W(c, 9, ARC_X_R(c, 19));
  /* 12eb7c: mov x10, x27 */
  ARC_X_W(c, 10, ARC_X_R(c, 27));
L_12eb80:;
  /* 12eb80: ldrb w11, [x9] */
  ARC_W_W(c, 11, arc_ld8(ARC_X_R(c, 9)));
  /* 12eb84: ldr x12, [x9, #8] */
  ARC_X_W(c, 12, arc_ld64((ARC_X_R(c, 9) + INT64_C(8))));
  /* 12eb88: add x9, x9, #0x18 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(24)));
  /* 12eb8c: lsr x13, x11, #1 */
  ARC_X_W(c, 13, ((uint64_t)(ARC_X_R(c, 11)) >> ((UINT64_C(1)) & 63)));
  /* 12eb90: tst w11, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 11) & UINT64_C(1)));
  /* 12eb94: csel x11, x13, x12, eq */
  ARC_X_W(c, 11, (ARC_COND(c, 0) ? (ARC_X_R(c, 13)) : ARC_X_R(c, 12)));
  /* 12eb98: cmp x11, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 11), UINT64_C(0));
  /* 12eb9c: cset w11, eq */
  ARC_W_W(c, 11, (ARC_COND(c, 0) ? 1 : 0));
  /* 12eba0: cinc w12, w8, eq */
  ARC_W_W(c, 12, (ARC_COND(c, 0) ? (ARC_W_R(c, 8)) + 1 : (ARC_W_R(c, 8))));
  /* 12eba4: cinc x28, x28, eq */
  ARC_X_W(c, 28, (ARC_COND(c, 0) ? (ARC_X_R(c, 28)) + 1 : (ARC_X_R(c, 28))));
  /* 12eba8: cmp x9, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 22));
  /* 12ebac: sub x25, x25, x11 */
  ARC_X_W(c, 25, (ARC_X_R(c, 25) - ARC_X_R(c, 11)));
  /* 12ebb0: strb w12, [x10], #1 */
  { const uint64_t _a = ARC_X_R(c, 10);
    ARC_X_W(c, 10, ARC_X_R(c, 10) + INT64_C(1));
    arc_st8(_a, ARC_W_R(c, 12));
  }
  /* 12ebb4: b.ne #0x12eb80 */
  if (ARC_COND(c, 1)) goto L_12eb80;
  /* 12ebb8: ldr x8, [x26] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 26)));
  /* 12ebbc: ldr x9, [sp, #0x30] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(48))));
  /* 12ebc0: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 12ebc4: b.eq #0x12ed14 */
  if (ARC_COND(c, 0)) goto L_12ed14;
  /* 12ebc8: cbz x25, #0x12ed14 */
  if ((ARC_X_R(c, 25)) == 0) goto L_12ed14;
  /* 12ebcc: mov x20, xzr */
  ARC_X_W(c, 20, ARC_X_R(c, 31));
  /* 12ebd0: stp x27, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 27));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 12ebd4: str x26, [sp, #0x18] */
  arc_st64(((c)->sp + INT64_C(24)), ARC_X_R(c, 26));
L_12ebd8:;
  /* 12ebd8: ldr x9, [x24] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 24)));
  /* 12ebdc: ldrb w1, [x8] */
  ARC_W_W(c, 1, arc_ld8(ARC_X_R(c, 8)));
  /* 12ebe0: ldr x9, [x9, #0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(24))));
  /* 12ebe4: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 12ebe8: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1240044));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 12ebec: mov w21, wzr */
  ARC_W_W(c, 21, ARC_W_R(c, 31));
  /* 12ebf0: add x23, x20, #1 */
  ARC_X_W(c, 23, (ARC_X_R(c, 20) + UINT64_C(1)));
  /* 12ebf4: and w26, w0, #0xff */
  ARC_W_W(c, 26, (ARC_W_R(c, 0) & UINT64_C(255)));
  /* 12ebf8: b #0x12ec14 */
  goto L_12ec14;
L_12ebfc:;
  /* 12ebfc: sub x25, x25, #1 */
  ARC_X_W(c, 25, (ARC_X_R(c, 25) - UINT64_C(1)));
  /* 12ec00: strb wzr, [x27] */
  arc_st8(ARC_X_R(c, 27), ARC_W_R(c, 31));
L_12ec04:;
  /* 12ec04: add x19, x19, #0x18 */
  ARC_X_W(c, 19, (ARC_X_R(c, 19) + UINT64_C(24)));
  /* 12ec08: add x27, x27, #1 */
  ARC_X_W(c, 27, (ARC_X_R(c, 27) + UINT64_C(1)));
  /* 12ec0c: cmp x19, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 22));
  /* 12ec10: b.eq #0x12ec80 */
  if (ARC_COND(c, 0)) goto L_12ec80;
L_12ec14:;
  /* 12ec14: ldrb w8, [x27] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 27)));
  /* 12ec18: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* 12ec1c: b.ne #0x12ec04 */
  if (ARC_COND(c, 1)) goto L_12ec04;
  /* 12ec20: ldrb w8, [x19] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 19)));
  /* 12ec24: ldr x9, [x19, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* 12ec28: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 12ec2c: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 12ec30: csinc x9, x9, x19, ne */
  ARC_X_W(c, 9, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 19)) + 1)));
  /* 12ec34: ldrb w1, [x9, x20] */
  ARC_W_W(c, 1, arc_ld8((ARC_X_R(c, 9) + ARC_X_R(c, 20))));
  /* 12ec38: ldr x8, [x8, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(24))));
  /* 12ec3c: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 12ec40: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1240132));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 12ec44: cmp w26, w0, uxtb */
  (void)arc_sub32(c, ARC_W_R(c, 26), ((uint64_t)(uint8_t)(ARC_W_R(c, 0))));
  /* 12ec48: b.ne #0x12ebfc */
  if (ARC_COND(c, 1)) goto L_12ebfc;
  /* 12ec4c: ldrb w8, [x19] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 19)));
  /* 12ec50: ldr x9, [x19, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* 12ec54: lsr x10, x8, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* 12ec58: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 12ec5c: csel x8, x10, x9, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* 12ec60: cmp x8, x23 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 23));
  /* 12ec64: b.ne #0x12ec78 */
  if (ARC_COND(c, 1)) goto L_12ec78;
  /* 12ec68: mov w8, #2 */
  ARC_W_W(c, 8, UINT64_C(2));
  /* 12ec6c: sub x25, x25, #1 */
  ARC_X_W(c, 25, (ARC_X_R(c, 25) - UINT64_C(1)));
  /* 12ec70: add x28, x28, #1 */
  ARC_X_W(c, 28, (ARC_X_R(c, 28) + UINT64_C(1)));
  /* 12ec74: strb w8, [x27] */
  arc_st8(ARC_X_R(c, 27), ARC_W_R(c, 8));
L_12ec78:;
  /* 12ec78: mov w21, #1 */
  ARC_W_W(c, 21, UINT64_C(1));
  /* 12ec7c: b #0x12ec04 */
  goto L_12ec04;
L_12ec80:;
  /* 12ec80: ldr x26, [sp, #0x18] */
  ARC_X_W(c, 26, arc_ld64(((c)->sp + INT64_C(24))));
  /* 12ec84: ldr x8, [x26] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 26)));
  /* 12ec88: tbz w21, #0, #0x12ecf4 */
  if (((ARC_W_R(c, 21)) >> 0 & 1) == 0) goto L_12ecf4;
  /* 12ec8c: ldp x27, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 27, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 12ec90: add x9, x28, x25 */
  ARC_X_W(c, 9, (ARC_X_R(c, 28) + ARC_X_R(c, 25)));
  /* 12ec94: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* 12ec98: cmp x9, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(2));
  /* 12ec9c: str x8, [x26] */
  arc_st64(ARC_X_R(c, 26), ARC_X_R(c, 8));
  /* 12eca0: b.lo #0x12ecf8 */
  if (ARC_COND(c, 3)) goto L_12ecf8;
  /* 12eca4: mov x9, x19 */
  ARC_X_W(c, 9, ARC_X_R(c, 19));
  /* 12eca8: mov x10, x27 */
  ARC_X_W(c, 10, ARC_X_R(c, 27));
  /* 12ecac: b #0x12ecc0 */
  goto L_12ecc0;
L_12ecb0:;
  /* 12ecb0: add x9, x9, #0x18 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(24)));
  /* 12ecb4: add x10, x10, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(1)));
  /* 12ecb8: cmp x9, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 22));
  /* 12ecbc: b.eq #0x12ecf8 */
  if (ARC_COND(c, 0)) goto L_12ecf8;
L_12ecc0:;
  /* 12ecc0: ldrb w11, [x10] */
  ARC_W_W(c, 11, arc_ld8(ARC_X_R(c, 10)));
  /* 12ecc4: cmp w11, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(2));
  /* 12ecc8: b.ne #0x12ecb0 */
  if (ARC_COND(c, 1)) goto L_12ecb0;
  /* 12eccc: ldrb w11, [x9] */
  ARC_W_W(c, 11, arc_ld8(ARC_X_R(c, 9)));
  /* 12ecd0: ldr x12, [x9, #8] */
  ARC_X_W(c, 12, arc_ld64((ARC_X_R(c, 9) + INT64_C(8))));
  /* 12ecd4: lsr x13, x11, #1 */
  ARC_X_W(c, 13, ((uint64_t)(ARC_X_R(c, 11)) >> ((UINT64_C(1)) & 63)));
  /* 12ecd8: tst w11, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 11) & UINT64_C(1)));
  /* 12ecdc: csel x11, x13, x12, eq */
  ARC_X_W(c, 11, (ARC_COND(c, 0) ? (ARC_X_R(c, 13)) : ARC_X_R(c, 12)));
  /* 12ece0: cmp x11, x23 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 23));
  /* 12ece4: b.eq #0x12ecb0 */
  if (ARC_COND(c, 0)) goto L_12ecb0;
  /* 12ece8: sub x28, x28, #1 */
  ARC_X_W(c, 28, (ARC_X_R(c, 28) - UINT64_C(1)));
  /* 12ecec: strb wzr, [x10] */
  arc_st8(ARC_X_R(c, 10), ARC_W_R(c, 31));
  /* 12ecf0: b #0x12ecb0 */
  goto L_12ecb0;
L_12ecf4:;
  /* 12ecf4: ldp x27, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 27, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
L_12ecf8:;
  /* 12ecf8: ldr x9, [sp, #0x30] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(48))));
  /* 12ecfc: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 12ed00: b.eq #0x12ed14 */
  if (ARC_COND(c, 0)) goto L_12ed14;
  /* 12ed04: mov x20, x23 */
  ARC_X_W(c, 20, ARC_X_R(c, 23));
  /* 12ed08: cbnz x25, #0x12ebd8 */
  if ((ARC_X_R(c, 25)) != 0) goto L_12ebd8;
  /* 12ed0c: b #0x12ed14 */
  goto L_12ed14;
L_12ed10:;
  /* 12ed10: ldr x8, [x26] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 26)));
L_12ed14:;
  /* 12ed14: ldr x9, [sp, #0x30] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(48))));
  /* 12ed18: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 12ed1c: ldr x9, [sp, #8] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(8))));
  /* 12ed20: b.ne #0x12ed30 */
  if (ARC_COND(c, 1)) goto L_12ed30;
  /* 12ed24: ldr w8, [x9] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 9)));
  /* 12ed28: orr w8, w8, #2 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | UINT64_C(2)));
  /* 12ed2c: str w8, [x9] */
  arc_st32(ARC_X_R(c, 9), ARC_W_R(c, 8));
L_12ed30:;
  /* 12ed30: ldr x0, [sp, #0x10] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(16))));
  /* 12ed34: cmp x19, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 22));
  /* 12ed38: b.eq #0x12ed58 */
  if (ARC_COND(c, 0)) goto L_12ed58;
L_12ed3c:;
  /* 12ed3c: ldrb w8, [x27] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 27)));
  /* 12ed40: cmp w8, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(2));
  /* 12ed44: b.eq #0x12ed64 */
  if (ARC_COND(c, 0)) goto L_12ed64;
  /* 12ed48: add x19, x19, #0x18 */
  ARC_X_W(c, 19, (ARC_X_R(c, 19) + UINT64_C(24)));
  /* 12ed4c: add x27, x27, #1 */
  ARC_X_W(c, 27, (ARC_X_R(c, 27) + UINT64_C(1)));
  /* 12ed50: cmp x19, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 22));
  /* 12ed54: b.ne #0x12ed3c */
  if (ARC_COND(c, 1)) goto L_12ed3c;
L_12ed58:;
  /* 12ed58: ldr w8, [x9] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 9)));
  /* 12ed5c: orr w8, w8, #4 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | UINT64_C(4)));
  /* 12ed60: str w8, [x9] */
  arc_st32(ARC_X_R(c, 9), ARC_W_R(c, 8));
L_12ed64:;
  /* 12ed64: cbz x0, #0x12ed6c */
  if ((ARC_X_R(c, 0)) == 0) goto L_12ed6c;
  /* 12ed68: bl #0x142800 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1240428));
  fn1_142800(c);
L_12ed6c:;
  /* 12ed6c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 12ed70: ldp x20, x19, [sp, #0xf0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(240));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 12ed74: ldp x22, x21, [sp, #0xe0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(224));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 12ed78: ldp x24, x23, [sp, #0xd0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(208));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 12ed7c: ldp x26, x25, [sp, #0xc0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(192));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* 12ed80: ldp x28, x27, [sp, #0xb0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(176));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* 12ed84: ldp x29, x30, [sp, #0xa0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(160));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 12ed88: add sp, sp, #0x100 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(256)));
  /* 12ed8c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 12ed90: ret  */
  return;
  /* 12ed94: b #0x12ed98 */
  goto L_12ed98;
L_12ed98:;
  /* 12ed98: ldr x8, [sp, #0x10] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(16))));
  /* 12ed9c: cbz x8, #0x12edb0 */
  if ((ARC_X_R(c, 8)) == 0) goto L_12edb0;
  /* 12eda0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 12eda4: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 12eda8: bl #0x142800 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1240492));
  fn1_142800(c);
  /* 12edac: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
L_12edb0:;
  /* 12edb0: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1240500));
  fn1_9cc20(c);
}

void fn1_134b30(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039192368));
  /* 134b30: bti c */
  /* bti: no architectural effect here */
  /* 134b34: add x0, x0, #0x170 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(368)));
  /* 134b38: ret  */
  return;
}

void fn1_13635c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039198556));
  /* 13635c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 136360: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* 136364: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 136368: stp x24, x23, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 13636c: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 136370: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 136374: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 136378: cmp x0, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 1));
  /* 13637c: mov x19, x2 */
  ARC_X_W(c, 19, ARC_X_R(c, 2));
  /* 136380: b.eq #0x1363e0 */
  if (ARC_COND(c, 0)) goto L_1363e0;
  /* 136384: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 136388: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 13638c: bl #0x142a58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1270672));
  fn1_142a58(c);
  /* 136390: ldr w23, [x0] */
  ARC_W_W(c, 23, arc_ld32(ARC_X_R(c, 0)));
  /* 136394: str wzr, [x0] */
  arc_st32(ARC_X_R(c, 0), ARC_W_R(c, 31));
  /* 136398: nop  */
  /* nop: no architectural effect here */
  /* 13639c: adr x8, #0x15dc38 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 1363a0: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 1363a4: adrp x24, #0x15d000 */
  ARC_X_W(c, 24, (arc_image_bases[1] + UINT64_C(1429504)));
  /* 1363a8: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 1363ac: tbz w8, #0, #0x136430 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_136430;
L_1363b0:;
  /* 1363b0: ldr x2, [x24, #0xc30] */
  ARC_X_W(c, 2, arc_ld64((ARC_X_R(c, 24) + INT64_C(3120))));
  /* 1363b4: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 1363b8: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 1363bc: bl #0x144510 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1270720));
  fn1_144510(c);
  /* 1363c0: ldr w8, [x21] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 21)));
  /* 1363c4: cbz w8, #0x1363f4 */
  if ((ARC_W_R(c, 8)) == 0) goto L_1363f4;
  /* 1363c8: ldr x9, [sp, #8] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(8))));
  /* 1363cc: cmp x9, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 20));
  /* 1363d0: b.ne #0x136404 */
  if (ARC_COND(c, 1)) goto L_136404;
  /* 1363d4: cmp w8, #0x22 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(34));
  /* 1363d8: b.eq #0x13640c */
  if (ARC_COND(c, 0)) goto L_13640c;
  /* 1363dc: b #0x136414 */
  goto L_136414;
L_1363e0:;
  /* 1363e0: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* 1363e4: mov w9, #4 */
  ARC_W_W(c, 9, UINT64_C(4));
  /* 1363e8: ldr q0, [x8, #0xca0] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(3232))), arc_ld64((ARC_X_R(c, 8) + INT64_C(3232)) + 8));
  /* 1363ec: str w9, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 9));
  /* 1363f0: b #0x136414 */
  goto L_136414;
L_1363f4:;
  /* 1363f4: ldr x8, [sp, #8] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(8))));
  /* 1363f8: str w23, [x21] */
  arc_st32(ARC_X_R(c, 21), ARC_W_R(c, 23));
  /* 1363fc: cmp x8, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 20));
  /* 136400: b.eq #0x136414 */
  if (ARC_COND(c, 0)) goto L_136414;
L_136404:;
  /* 136404: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* 136408: ldr q0, [x8, #0xca0] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(3232))), arc_ld64((ARC_X_R(c, 8) + INT64_C(3232)) + 8));
L_13640c:;
  /* 13640c: mov w8, #4 */
  ARC_W_W(c, 8, UINT64_C(4));
  /* 136410: str w8, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 8));
L_136414:;
  /* 136414: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 136418: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 13641c: ldp x24, x23, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 136420: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 136424: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* 136428: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 13642c: ret  */
  return;
L_136430:;
  /* 136430: nop  */
  /* nop: no architectural effect here */
  /* 136434: adr x0, #0x15dc38 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 136438: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1270844));
  fn1_1424b8(c);
  /* 13643c: cbz w0, #0x1363b0 */
  if ((ARC_W_R(c, 0)) == 0) goto L_1363b0;
  /* 136440: adrp x1, #0x51000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(331776)));
  /* 136444: add x1, x1, #0x6e4 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1764)));
  /* 136448: mov w0, #0x1fbf */
  ARC_W_W(c, 0, UINT64_C(8127));
  /* 13644c: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 136450: bl #0x1441e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1270868));
  fn1_1441e0(c);
  /* 136454: str x0, [x24, #0xc30] */
  arc_st64((ARC_X_R(c, 24) + INT64_C(3120)), ARC_X_R(c, 0));
  /* 136458: nop  */
  /* nop: no architectural effect here */
  /* 13645c: adr x0, #0x15dc38 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 136460: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1270884));
  fn1_1424d0(c);
  /* 136464: b #0x1363b0 */
  goto L_1363b0;
  /* 136468: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 13646c: nop  */
  /* nop: no architectural effect here */
  /* 136470: adr x0, #0x15dc38 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 136474: bl #0x1424e8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1270904));
  fn1_1424e8(c);
  /* 136478: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 13647c: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1270912));
  fn1_9cc20(c);
}

void fn1_139370(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039210864));
  /* 139370: bti c */
  /* bti: no architectural effect here */
  /* 139374: mov w1, #0x60 */
  ARC_W_W(c, 1, UINT64_C(96));
  /* 139378: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_13f2f0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039235312));
  /* 13f2f0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 13f2f4: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* 13f2f8: stp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 13f2fc: add x29, sp, #0x40 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(64)));
  /* 13f300: adrp x8, #0x50000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(327680)));
  /* 13f304: add x8, x8, #0x8ce */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2254)));
  /* 13f308: stp x0, xzr, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 0));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 13f30c: stp x8, x1, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 1));
  }
  /* 13f310: cbz x1, #0x13f334 */
  if ((ARC_X_R(c, 1)) == 0) goto L_13f334;
  /* 13f314: str wzr, [x1] */
  arc_st32(ARC_X_R(c, 1), ARC_W_R(c, 31));
  /* 13f318: nop  */
  /* nop: no architectural effect here */
  /* 13f31c: adr x8, #0x159210 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 13f320: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 13f324: tbz w8, #0, #0x13f390 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13f390;
L_13f328:;
  /* 13f328: nop  */
  /* nop: no architectural effect here */
  /* 13f32c: adr x8, #0x156d40 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1404224)));
  /* 13f330: str x8, [x1, #8] */
  arc_st64((ARC_X_R(c, 1) + INT64_C(8)), ARC_X_R(c, 8));
L_13f334:;
  /* 13f334: ldrb w8, [x0] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 0)));
  /* 13f338: ldr x9, [x0, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 13f33c: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 13f340: csinc x0, x9, x0, ne */
  ARC_X_W(c, 0, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 0)) + 1)));
  /* 13f344: bl #0x1447f8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1307464));
  fn1_1447f8(c);
  /* 13f348: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 13f34c: b.ne #0x13f380 */
  if (ARC_COND(c, 1)) goto L_13f380;
  /* 13f350: bl #0x142a58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1307476));
  fn1_142a58(c);
  /* 13f354: nop  */
  /* nop: no architectural effect here */
  /* 13f358: adr x9, #0x159208 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 13f35c: ldr w8, [x0] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 0)));
  /* 13f360: ldarb w9, [x9] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 9)));
  /* 13f364: tbz w9, #0, #0x13f3c4 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_13f3c4;
L_13f368:;
  /* 13f368: nop  */
  /* nop: no architectural effect here */
  /* 13f36c: adr x9, #0x156d38 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1404216)));
  /* 13f370: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 13f374: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* 13f378: stp x8, x9, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 13f37c: bl #0x139ad0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1307520));
  fn1_139ad0(c);
L_13f380:;
  /* 13f380: ldp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 13f384: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* 13f388: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 13f38c: ret  */
  return;
L_13f390:;
  /* 13f390: nop  */
  /* nop: no architectural effect here */
  /* 13f394: adr x8, #0x159210 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 13f398: stp x1, x0, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 1));
    arc_st64(_pa + 8, ARC_X_R(c, 0));
  }
  /* 13f39c: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 13f3a0: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1307556));
  fn1_1424b8(c);
  /* 13f3a4: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 13f3a8: ldp x1, x0, [sp] */
  { const uint64_t _pa = (c)->sp;
    ARC_X_W(c, 1, arc_ld64(_pa));
    ARC_X_W(c, 0, arc_ld64(_pa + 8));
  }
  /* 13f3ac: cbz w8, #0x13f328 */
  if ((ARC_W_R(c, 8)) == 0) goto L_13f328;
  /* 13f3b0: nop  */
  /* nop: no architectural effect here */
  /* 13f3b4: adr x0, #0x159210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 13f3b8: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1307580));
  fn1_1424d0(c);
  /* 13f3bc: ldp x1, x0, [sp] */
  { const uint64_t _pa = (c)->sp;
    ARC_X_W(c, 1, arc_ld64(_pa));
    ARC_X_W(c, 0, arc_ld64(_pa + 8));
  }
  /* 13f3c0: b #0x13f328 */
  goto L_13f328;
L_13f3c4:;
  /* 13f3c4: nop  */
  /* nop: no architectural effect here */
  /* 13f3c8: adr x0, #0x159208 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 13f3cc: str x8, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 8));
  /* 13f3d0: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1307604));
  fn1_1424b8(c);
  /* 13f3d4: ldr x8, [sp, #8] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(8))));
  /* 13f3d8: cbz w0, #0x13f368 */
  if ((ARC_W_R(c, 0)) == 0) goto L_13f368;
  /* 13f3dc: nop  */
  /* nop: no architectural effect here */
  /* 13f3e0: adr x0, #0x159208 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 13f3e4: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1307624));
  fn1_1424d0(c);
  /* 13f3e8: ldr x8, [sp, #8] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(8))));
  /* 13f3ec: b #0x13f368 */
  goto L_13f368;
}

void fn1_142728(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039248680));
  /* 142728: adrp x16, #0x151000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 14272c: ldr x17, [x16, #0xf98] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(3992))));
  /* 142730: add x16, x16, #0xf98 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(3992)));
  /* 142734: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 142738: nop  */
  /* nop: no architectural effect here */
  /* 14273c: nop  */
  /* nop: no architectural effect here */
}

void fn1_142d28(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039250216));
  /* 142d28: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 142d2c: ldr x17, [x16, #0x198] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(408))));
  /* 142d30: add x16, x16, #0x198 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(408)));
  /* 142d34: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 142d38: nop  */
  /* nop: no architectural effect here */
  /* 142d3c: nop  */
  /* nop: no architectural effect here */
}

void fn1_143328(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039251752));
  /* 143328: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 14332c: ldr x17, [x16, #0x398] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(920))));
  /* 143330: add x16, x16, #0x398 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(920)));
  /* 143334: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 143338: nop  */
  /* nop: no architectural effect here */
  /* 14333c: nop  */
  /* nop: no architectural effect here */
}

void fn1_143928(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039253288));
  /* 143928: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 14392c: ldr x17, [x16, #0x598] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(1432))));
  /* 143930: add x16, x16, #0x598 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(1432)));
  /* 143934: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 143938: nop  */
  /* nop: no architectural effect here */
  /* 14393c: nop  */
  /* nop: no architectural effect here */
}

void fn1_143f28(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039254824));
  /* 143f28: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 143f2c: ldr x17, [x16, #0x798] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(1944))));
  /* 143f30: add x16, x16, #0x798 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(1944)));
  /* 143f34: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 143f38: nop  */
  /* nop: no architectural effect here */
  /* 143f3c: nop  */
  /* nop: no architectural effect here */
}

void fn1_144528(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039256360));
  /* 144528: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 14452c: ldr x17, [x16, #0x998] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(2456))));
  /* 144530: add x16, x16, #0x998 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(2456)));
  /* 144534: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 144538: nop  */
  /* nop: no architectural effect here */
  /* 14453c: nop  */
  /* nop: no architectural effect here */
}

