#include "lifted.h"

void fn1_9dbf4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038574068));
  /* 9dbf4: bti c */
  /* bti: no architectural effect here */
  /* 9dbf8: add x0, x0, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(16)));
  /* 9dbfc: ret  */
  return;
}

void fn1_a1fbc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038591420));
  /* a1fbc: bti c */
  /* bti: no architectural effect here */
  /* a1fc0: adrp x0, #0x50000 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(327680)));
  /* a1fc4: add x0, x0, #0x623 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1571)));
  /* a1fc8: ret  */
  return;
}

void fn1_a3ff4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038599668));
  /* a3ff4: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* a3ff8: stp x29, x30, [sp, #-0x60]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-96));
    (c)->sp = (c)->sp + INT64_C(-96);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* a3ffc: stp x28, x27, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* a4000: stp x26, x25, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* a4004: stp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* a4008: stp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* a400c: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* a4010: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* a4014: sub sp, sp, #1, lsl #12 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(4096)));
  /* a4018: sub sp, sp, #0x390 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(912)));
  /* a401c: mov x19, x3 */
  ARC_X_W(c, 19, ARC_X_R(c, 3));
  /* a4020: cbz x0, #0xa4034 */
  if ((ARC_X_R(c, 0)) == 0) goto L_a4034;
  /* a4024: mov x20, x2 */
  ARC_X_W(c, 20, ARC_X_R(c, 2));
  /* a4028: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* a402c: cbz x1, #0xa4048 */
  if ((ARC_X_R(c, 1)) == 0) goto L_a4048;
  /* a4030: cbnz x20, #0xa4048 */
  if ((ARC_X_R(c, 20)) != 0) goto L_a4048;
L_a4034:;
  /* a4034: mov x20, xzr */
  ARC_X_W(c, 20, ARC_X_R(c, 31));
  /* a4038: cbz x19, #0xa4284 */
  if ((ARC_X_R(c, 19)) == 0) goto L_a4284;
  /* a403c: mov w8, #-3 */
  ARC_W_W(c, 8, UINT64_C(18446744073709551613));
  /* a4040: str w8, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 8));
  /* a4044: b #0xa4284 */
  goto L_a4284;
L_a4048:;
  /* a4048: add x28, sp, #0x40 */
  ARC_X_W(c, 28, ((c)->sp + UINT64_C(64)));
  /* a404c: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* a4050: bl #0x142860 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(671828));
  fn1_142860(c);
  /* a4054: add x9, sp, #0x40 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(64)));
  /* a4058: add x10, x22, x0 */
  ARC_X_W(c, 10, (ARC_X_R(c, 22) + ARC_X_R(c, 0)));
  /* a405c: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* a4060: stp x22, x10, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 10));
  }
  /* a4064: add x10, x9, #0x128 */
  ARC_X_W(c, 10, (ARC_X_R(c, 9) + UINT64_C(296)));
  /* a4068: mov x8, x22 */
  ARC_X_W(c, 8, ARC_X_R(c, 22));
  /* a406c: str x10, [sp, #0x60] */
  arc_st64(((c)->sp + INT64_C(96)), ARC_X_R(c, 10));
  /* a4070: add x10, x9, #0x240 */
  ARC_X_W(c, 10, (ARC_X_R(c, 9) + UINT64_C(576)));
  /* a4074: add x22, x9, #0x28 */
  ARC_X_W(c, 22, (ARC_X_R(c, 9) + UINT64_C(40)));
  /* a4078: str x10, [sp, #0x178] */
  arc_st64(((c)->sp + INT64_C(376)), ARC_X_R(c, 10));
  /* a407c: add x10, x9, #0x298 */
  ARC_X_W(c, 10, (ARC_X_R(c, 9) + UINT64_C(664)));
  /* a4080: add x23, x9, #0x140 */
  ARC_X_W(c, 23, (ARC_X_R(c, 9) + UINT64_C(320)));
  /* a4084: str x10, [sp, #0x290] */
  arc_st64(((c)->sp + INT64_C(656)), ARC_X_R(c, 10));
  /* a4088: add x10, x9, #0x2d0 */
  ARC_X_W(c, 10, (ARC_X_R(c, 9) + UINT64_C(720)));
  /* a408c: add x24, x9, #0x258 */
  ARC_X_W(c, 24, (ARC_X_R(c, 9) + UINT64_C(600)));
  /* a4090: str x10, [sp, #0x2e8] */
  arc_st64(((c)->sp + INT64_C(744)), ARC_X_R(c, 10));
  /* a4094: add x10, x9, #0x308 */
  ARC_X_W(c, 10, (ARC_X_R(c, 9) + UINT64_C(776)));
  /* a4098: add x25, x9, #0x2b0 */
  ARC_X_W(c, 25, (ARC_X_R(c, 9) + UINT64_C(688)));
  /* a409c: str x10, [sp, #0x320] */
  arc_st64(((c)->sp + INT64_C(800)), ARC_X_R(c, 10));
  /* a40a0: mov w10, #1 */
  ARC_W_W(c, 10, UINT64_C(1));
  /* a40a4: add x26, x9, #0x2e8 */
  ARC_X_W(c, 26, (ARC_X_R(c, 9) + UINT64_C(744)));
  /* a40a8: strh w10, [sp, #0x348] */
  arc_st16(((c)->sp + INT64_C(840)), ARC_W_R(c, 10));
  /* a40ac: mov x10, #-1 */
  ARC_X_W(c, 10, UINT64_C(18446744073709551615));
  /* a40b0: add x27, x9, #0x330 */
  ARC_X_W(c, 27, (ARC_X_R(c, 9) + UINT64_C(816)));
  /* a40b4: cmp x0, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 0), UINT64_C(2));
  /* a40b8: stp x22, x22, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 22));
  }
  /* a40bc: stp q0, q0, [x22, #0xe0] */
  { const uint64_t _pa = (ARC_X_R(c, 22) + INT64_C(224));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* a40c0: stur q0, [sp, #0x68] */
  arc_st64(((c)->sp + INT64_C(104)), (c)->q[0].u64[0]);
  arc_st64(((c)->sp + INT64_C(104)) + 8, (c)->q[0].u64[1]);
  /* a40c4: stur q0, [sp, #0x78] */
  arc_st64(((c)->sp + INT64_C(120)), (c)->q[0].u64[0]);
  arc_st64(((c)->sp + INT64_C(120)) + 8, (c)->q[0].u64[1]);
  /* a40c8: stur q0, [sp, #0x88] */
  arc_st64(((c)->sp + INT64_C(136)), (c)->q[0].u64[0]);
  arc_st64(((c)->sp + INT64_C(136)) + 8, (c)->q[0].u64[1]);
  /* a40cc: stur q0, [x28, #0x58] */
  arc_st64((ARC_X_R(c, 28) + INT64_C(88)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 28) + INT64_C(88)) + 8, (c)->q[0].u64[1]);
  /* a40d0: stur q0, [x28, #0x68] */
  arc_st64((ARC_X_R(c, 28) + INT64_C(104)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 28) + INT64_C(104)) + 8, (c)->q[0].u64[1]);
  /* a40d4: stur q0, [x28, #0x78] */
  arc_st64((ARC_X_R(c, 28) + INT64_C(120)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 28) + INT64_C(120)) + 8, (c)->q[0].u64[1]);
  /* a40d8: stur q0, [x28, #0x88] */
  arc_st64((ARC_X_R(c, 28) + INT64_C(136)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 28) + INT64_C(136)) + 8, (c)->q[0].u64[1]);
  /* a40dc: stur q0, [x28, #0x98] */
  arc_st64((ARC_X_R(c, 28) + INT64_C(152)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 28) + INT64_C(152)) + 8, (c)->q[0].u64[1]);
  /* a40e0: stur q0, [x28, #0xa8] */
  arc_st64((ARC_X_R(c, 28) + INT64_C(168)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 28) + INT64_C(168)) + 8, (c)->q[0].u64[1]);
  /* a40e4: stur q0, [x28, #0xb8] */
  arc_st64((ARC_X_R(c, 28) + INT64_C(184)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 28) + INT64_C(184)) + 8, (c)->q[0].u64[1]);
  /* a40e8: stur q0, [x28, #0xc8] */
  arc_st64((ARC_X_R(c, 28) + INT64_C(200)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 28) + INT64_C(200)) + 8, (c)->q[0].u64[1]);
  /* a40ec: stur q0, [x28, #0xd8] */
  arc_st64((ARC_X_R(c, 28) + INT64_C(216)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 28) + INT64_C(216)) + 8, (c)->q[0].u64[1]);
  /* a40f0: stur q0, [x28, #0xe8] */
  arc_st64((ARC_X_R(c, 28) + INT64_C(232)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 28) + INT64_C(232)) + 8, (c)->q[0].u64[1]);
  /* a40f4: stur q0, [x28, #0xf8] */
  arc_st64((ARC_X_R(c, 28) + INT64_C(248)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 28) + INT64_C(248)) + 8, (c)->q[0].u64[1]);
  /* a40f8: stp x23, x23, [sp, #0x168] */
  { const uint64_t _pa = ((c)->sp + INT64_C(360));
    arc_st64(_pa, ARC_X_R(c, 23));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* a40fc: stp q0, q0, [x28, #0x140] */
  { const uint64_t _pa = (ARC_X_R(c, 28) + INT64_C(320));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* a4100: stp q0, q0, [x28, #0x160] */
  { const uint64_t _pa = (ARC_X_R(c, 28) + INT64_C(352));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* a4104: stp q0, q0, [x28, #0x180] */
  { const uint64_t _pa = (ARC_X_R(c, 28) + INT64_C(384));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* a4108: stp q0, q0, [x28, #0x1a0] */
  { const uint64_t _pa = (ARC_X_R(c, 28) + INT64_C(416));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* a410c: stp q0, q0, [x28, #0x1c0] */
  { const uint64_t _pa = (ARC_X_R(c, 28) + INT64_C(448));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* a4110: stp q0, q0, [x28, #0x1e0] */
  { const uint64_t _pa = (ARC_X_R(c, 28) + INT64_C(480));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* a4114: stp q0, q0, [x28, #0x200] */
  { const uint64_t _pa = (ARC_X_R(c, 28) + INT64_C(512));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* a4118: stp q0, q0, [x28, #0x220] */
  { const uint64_t _pa = (ARC_X_R(c, 28) + INT64_C(544));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* a411c: str x24, [sp, #0x280] */
  arc_st64(((c)->sp + INT64_C(640)), ARC_X_R(c, 24));
  /* a4120: str x24, [sp, #0x288] */
  arc_st64(((c)->sp + INT64_C(648)), ARC_X_R(c, 24));
  /* a4124: stp q0, q0, [x24] */
  { const uint64_t _pa = ARC_X_R(c, 24);
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* a4128: stp q0, q0, [x24, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 24) + INT64_C(32));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* a412c: str x25, [sp, #0x2d8] */
  arc_st64(((c)->sp + INT64_C(728)), ARC_X_R(c, 25));
  /* a4130: str x25, [sp, #0x2e0] */
  arc_st64(((c)->sp + INT64_C(736)), ARC_X_R(c, 25));
  /* a4134: stp q0, q0, [x28, #0x2b0] */
  { const uint64_t _pa = (ARC_X_R(c, 28) + INT64_C(688));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* a4138: str x26, [sp, #0x310] */
  arc_st64(((c)->sp + INT64_C(784)), ARC_X_R(c, 26));
  /* a413c: str x26, [sp, #0x318] */
  arc_st64(((c)->sp + INT64_C(792)), ARC_X_R(c, 26));
  /* a4140: stp q0, q0, [x26] */
  { const uint64_t _pa = ARC_X_R(c, 26);
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* a4144: strb wzr, [sp, #0x34a] */
  arc_st8(((c)->sp + INT64_C(842)), ARC_W_R(c, 31));
  /* a4148: str x10, [sp, #0x350] */
  arc_st64(((c)->sp + INT64_C(848)), ARC_X_R(c, 10));
  /* a414c: str wzr, [sp, #0x360] */
  arc_st32(((c)->sp + INT64_C(864)), ARC_W_R(c, 31));
  /* a4150: str xzr, [sp, #0x358] */
  arc_st64(((c)->sp + INT64_C(856)), ARC_X_R(c, 31));
  /* a4154: str q0, [x28, #0x330] */
  arc_st64((ARC_X_R(c, 28) + INT64_C(816)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 28) + INT64_C(816)) + 8, (c)->q[0].u64[1]);
  /* a4158: str x27, [sp, #0x1370] */
  arc_st64(((c)->sp + INT64_C(4976)), ARC_X_R(c, 27));
  /* a415c: b.lo #0xa41d8 */
  if (ARC_COND(c, 3)) goto L_a41d8;
  /* a4160: ldrh w9, [x8] */
  ARC_W_W(c, 9, arc_ld16(ARC_X_R(c, 8)));
  /* a4164: mov w10, #0x5a5f */
  ARC_W_W(c, 10, UINT64_C(23135));
  /* a4168: cmp w9, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 9), ARC_W_R(c, 10));
  /* a416c: b.eq #0xa42b0 */
  if (ARC_COND(c, 0)) goto L_a42b0;
  /* a4170: cmp x0, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 0), UINT64_C(2));
  /* a4174: b.eq #0xa41d8 */
  if (ARC_COND(c, 0)) goto L_a41d8;
  /* a4178: ldrh w9, [x8] */
  ARC_W_W(c, 9, arc_ld16(ARC_X_R(c, 8)));
  /* a417c: ldrb w10, [x8, #2] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 8) + INT64_C(2))));
  /* a4180: mov w11, #0x5f5f */
  ARC_W_W(c, 11, UINT64_C(24415));
  /* a4184: cmp w9, w11 */
  (void)arc_sub32(c, ARC_W_R(c, 9), ARC_W_R(c, 11));
  /* a4188: mov w9, #0x5a */
  ARC_W_W(c, 9, UINT64_C(90));
  /* a418c: ccmp w10, w9, #0, eq */
  if (ARC_COND(c, 0)) { (void)arc_sub32(c, ARC_W_R(c, 10), ARC_W_R(c, 9)); }
  else { (c)->nf = 0; (c)->zf = 0;
          (c)->cf = 0; (c)->vf = 0; }
  /* a4190: b.eq #0xa42b8 */
  if (ARC_COND(c, 0)) goto L_a42b8;
  /* a4194: cmp x0, #4 */
  (void)arc_sub64(c, ARC_X_R(c, 0), UINT64_C(4));
  /* a4198: b.lo #0xa41d8 */
  if (ARC_COND(c, 3)) goto L_a41d8;
  /* a419c: ldr w9, [x8] */
  ARC_W_W(c, 9, arc_ld32(ARC_X_R(c, 8)));
  /* a41a0: mov w10, #0x5f5f */
  ARC_W_W(c, 10, UINT64_C(24415));
  /* a41a4: movk w10, #0x5a5f, lsl #16 */
  ARC_W_W(c, 10, ((ARC_W_R(c, 10) & UINT64_C(18446744069414649855)) | UINT64_C(1516175360)));
  /* a41a8: cmp w9, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 9), ARC_W_R(c, 10));
  /* a41ac: b.eq #0xa4374 */
  if (ARC_COND(c, 0)) goto L_a4374;
  /* a41b0: cmp x0, #4 */
  (void)arc_sub64(c, ARC_X_R(c, 0), UINT64_C(4));
  /* a41b4: b.eq #0xa41d8 */
  if (ARC_COND(c, 0)) goto L_a41d8;
  /* a41b8: ldr w9, [x8] */
  ARC_W_W(c, 9, arc_ld32(ARC_X_R(c, 8)));
  /* a41bc: mov w11, #0x5f5f */
  ARC_W_W(c, 11, UINT64_C(24415));
  /* a41c0: ldrb w10, [x8, #4] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 8) + INT64_C(4))));
  /* a41c4: movk w11, #0x5f5f, lsl #16 */
  ARC_W_W(c, 11, ((ARC_W_R(c, 11) & UINT64_C(18446744069414649855)) | UINT64_C(1600061440)));
  /* a41c8: cmp w9, w11 */
  (void)arc_sub32(c, ARC_W_R(c, 9), ARC_W_R(c, 11));
  /* a41cc: mov w9, #0x5a */
  ARC_W_W(c, 9, UINT64_C(90));
  /* a41d0: ccmp w10, w9, #0, eq */
  if (ARC_COND(c, 0)) { (void)arc_sub32(c, ARC_W_R(c, 10), ARC_W_R(c, 9)); }
  else { (c)->nf = 0; (c)->zf = 0;
          (c)->cf = 0; (c)->vf = 0; }
  /* a41d4: b.eq #0xa437c */
  if (ARC_COND(c, 0)) goto L_a437c;
L_a41d8:;
  /* a41d8: add x0, sp, #0x40 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(64)));
  /* a41dc: bl #0xa52b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(672224));
  fn1_a52b0(c);
  /* a41e0: ldp x9, x8, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* a41e4: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* a41e8: b.eq #0xa44a4 */
  if (ARC_COND(c, 0)) goto L_a44a4;
L_a41ec:;
  /* a41ec: mov x20, xzr */
  ARC_X_W(c, 20, ARC_X_R(c, 31));
  /* a41f0: mov w8, #-2 */
  ARC_W_W(c, 8, UINT64_C(18446744073709551614));
  /* a41f4: cbz x19, #0xa41fc */
  if ((ARC_X_R(c, 19)) == 0) goto L_a41fc;
L_a41f8:;
  /* a41f8: str w8, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 8));
L_a41fc:;
  /* a41fc: ldr x0, [sp, #0x1370] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(4976))));
  /* a4200: cbnz x0, #0xa4210 */
  if ((ARC_X_R(c, 0)) != 0) goto L_a4210;
  /* a4204: b #0xa422c */
  goto L_a422c;
L_a4208:;
  /* a4208: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* a420c: cbz x0, #0xa422c */
  if ((ARC_X_R(c, 0)) == 0) goto L_a422c;
L_a4210:;
  /* a4210: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* a4214: cmp x0, x27 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 27));
  /* a4218: str x8, [sp, #0x1370] */
  arc_st64(((c)->sp + INT64_C(4976)), ARC_X_R(c, 8));
  /* a421c: b.eq #0xa4208 */
  if (ARC_COND(c, 0)) goto L_a4208;
  /* a4220: bl #0x142800 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(672292));
  fn1_142800(c);
  /* a4224: ldr x0, [sp, #0x1370] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(4976))));
  /* a4228: cbnz x0, #0xa4210 */
  if ((ARC_X_R(c, 0)) != 0) goto L_a4210;
L_a422c:;
  /* a422c: ldr x0, [sp, #0x310] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(784))));
  /* a4230: stp xzr, xzr, [x27] */
  { const uint64_t _pa = ARC_X_R(c, 27);
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* a4234: str x27, [sp, #0x1370] */
  arc_st64(((c)->sp + INT64_C(4976)), ARC_X_R(c, 27));
  /* a4238: cmp x0, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 26));
  /* a423c: b.eq #0xa4244 */
  if (ARC_COND(c, 0)) goto L_a4244;
  /* a4240: bl #0x142800 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(672324));
  fn1_142800(c);
L_a4244:;
  /* a4244: ldr x0, [sp, #0x2d8] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(728))));
  /* a4248: cmp x0, x25 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 25));
  /* a424c: b.eq #0xa4254 */
  if (ARC_COND(c, 0)) goto L_a4254;
  /* a4250: bl #0x142800 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(672340));
  fn1_142800(c);
L_a4254:;
  /* a4254: ldr x0, [sp, #0x280] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(640))));
  /* a4258: cmp x0, x24 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 24));
  /* a425c: b.eq #0xa4264 */
  if (ARC_COND(c, 0)) goto L_a4264;
  /* a4260: bl #0x142800 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(672356));
  fn1_142800(c);
L_a4264:;
  /* a4264: ldr x0, [sp, #0x168] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(360))));
  /* a4268: cmp x0, x23 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 23));
  /* a426c: b.eq #0xa4274 */
  if (ARC_COND(c, 0)) goto L_a4274;
  /* a4270: bl #0x142800 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(672372));
  fn1_142800(c);
L_a4274:;
  /* a4274: ldr x0, [sp, #0x50] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(80))));
  /* a4278: cmp x0, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 22));
  /* a427c: b.eq #0xa4284 */
  if (ARC_COND(c, 0)) goto L_a4284;
  /* a4280: bl #0x142800 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(672388));
  fn1_142800(c);
L_a4284:;
  /* a4284: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* a4288: add sp, sp, #1, lsl #12 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(4096)));
  /* a428c: add sp, sp, #0x390 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(912)));
  /* a4290: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* a4294: ldp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* a4298: ldp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* a429c: ldp x26, x25, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* a42a0: ldp x28, x27, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* a42a4: ldp x29, x30, [sp], #0x60 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(96);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* a42a8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* a42ac: ret  */
  return;
L_a42b0:;
  /* a42b0: mov w9, #2 */
  ARC_W_W(c, 9, UINT64_C(2));
  /* a42b4: b #0xa42bc */
  goto L_a42bc;
L_a42b8:;
  /* a42b8: mov w9, #3 */
  ARC_W_W(c, 9, UINT64_C(3));
L_a42bc:;
  /* a42bc: add x8, x8, x9 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + ARC_X_R(c, 9)));
  /* a42c0: str x8, [sp, #0x40] */
  arc_st64(((c)->sp + INT64_C(64)), ARC_X_R(c, 8));
  /* a42c4: add x0, sp, #0x40 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(64)));
  /* a42c8: bl #0xa46ec */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(672460));
  fn1_a46ec(c);
  /* a42cc: cbz x0, #0xa41ec */
  if ((ARC_X_R(c, 0)) == 0) goto L_a41ec;
  /* a42d0: ldp x28, x8, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* a42d4: subs x11, x8, x28 */
  ARC_X_W(c, 11, arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 28)));
  /* a42d8: b.eq #0xa44a8 */
  if (ARC_COND(c, 0)) goto L_a44a8;
  /* a42dc: ldrb w8, [x28] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 28)));
  /* a42e0: cmp w8, #0x2e */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(46));
  /* a42e4: b.ne #0xa41ec */
  if (ARC_COND(c, 1)) goto L_a41ec;
  /* a42e8: ldr x10, [sp, #0x1370] */
  ARC_X_W(c, 10, arc_ld64(((c)->sp + INT64_C(4976))));
  /* a42ec: ldr x8, [x10, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 10) + INT64_C(8))));
  /* a42f0: sub x9, x8, #0xfc0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4032)));
  /* a42f4: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* a42f8: b.hi #0xa4328 */
  if (ARC_COND(c, 8)) goto L_a4328;
  /* a42fc: str x0, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 0));
  /* a4300: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* a4304: stp x10, x11, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 10));
    arc_st64(_pa + 8, ARC_X_R(c, 11));
  }
  /* a4308: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(672524));
  fn1_1428a8(c);
  /* a430c: cbz x0, #0xa459c */
  if ((ARC_X_R(c, 0)) == 0) goto L_a459c;
  /* a4310: ldp x9, x11, [sp] */
  { const uint64_t _pa = (c)->sp;
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 11, arc_ld64(_pa + 8));
  }
  /* a4314: mov x10, x0 */
  ARC_X_W(c, 10, ARC_X_R(c, 0));
  /* a4318: str x0, [sp, #0x1370] */
  arc_st64(((c)->sp + INT64_C(4976)), ARC_X_R(c, 0));
  /* a431c: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* a4320: stp x9, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* a4324: ldr x0, [sp, #0x10] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(16))));
L_a4328:;
  /* a4328: add x9, x8, #0x30 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(48)));
  /* a432c: add x8, x10, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 10) + ARC_X_R(c, 8)));
  /* a4330: str x9, [x10, #8] */
  arc_st64((ARC_X_R(c, 10) + INT64_C(8)), ARC_X_R(c, 9));
  /* a4334: adrp x9, #0x14b000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1355776)));
  /* a4338: add x9, x9, #0xfe0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(4064)));
  /* a433c: str x9, [x8, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 8) + INT64_C(16));
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 9));
  }
  /* a4340: ldurh w9, [x8, #9] */
  ARC_W_W(c, 9, arc_ld16((ARC_X_R(c, 8) + INT64_C(9))));
  /* a4344: mov w10, #1 */
  ARC_W_W(c, 10, UINT64_C(1));
  /* a4348: stp x0, x28, [x8, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 8) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 0));
    arc_st64(_pa + 8, ARC_X_R(c, 28));
  }
  /* a434c: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* a4350: strb w10, [x8, #8] */
  arc_st8((ARC_X_R(c, 8) + INT64_C(8)), ARC_W_R(c, 10));
  /* a4354: mov w10, #0x540 */
  ARC_W_W(c, 10, UINT64_C(1344));
  /* a4358: and w9, w9, #0xf000 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) & UINT64_C(61440)));
  /* a435c: orr w9, w9, w10 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | ARC_W_R(c, 10)));
  /* a4360: str x11, [x8, #0x20] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(32)), ARC_X_R(c, 11));
  /* a4364: sturh w9, [x8, #9] */
  arc_st16((ARC_X_R(c, 8) + INT64_C(9)), ARC_W_R(c, 9));
  /* a4368: ldr x9, [sp, #0x48] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(72))));
  /* a436c: str x9, [sp, #0x40] */
  arc_st64(((c)->sp + INT64_C(64)), ARC_X_R(c, 9));
  /* a4370: b #0xa44a8 */
  goto L_a44a8;
L_a4374:;
  /* a4374: mov w9, #4 */
  ARC_W_W(c, 9, UINT64_C(4));
  /* a4378: b #0xa4380 */
  goto L_a4380;
L_a437c:;
  /* a437c: mov w9, #5 */
  ARC_W_W(c, 9, UINT64_C(5));
L_a4380:;
  /* a4380: add x8, x8, x9 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + ARC_X_R(c, 9)));
  /* a4384: str x8, [sp, #0x40] */
  arc_st64(((c)->sp + INT64_C(64)), ARC_X_R(c, 8));
  /* a4388: add x0, sp, #0x40 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(64)));
  /* a438c: bl #0xa46ec */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(672656));
  fn1_a46ec(c);
  /* a4390: str x0, [sp, #0x18] */
  arc_st64(((c)->sp + INT64_C(24)), ARC_X_R(c, 0));
  /* a4394: cbz x0, #0xa44a4 */
  if ((ARC_X_R(c, 0)) == 0) goto L_a44a4;
  /* a4398: ldp x10, x8, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 10, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* a439c: sub x9, x8, x10 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - ARC_X_R(c, 10)));
  /* a43a0: cmp x9, #0xd */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(13));
  /* a43a4: b.lo #0xa44a0 */
  if (ARC_COND(c, 3)) goto L_a44a0;
  /* a43a8: mov x12, #0x625f */
  ARC_X_W(c, 12, UINT64_C(25183));
  /* a43ac: ldr x9, [x10] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 10)));
  /* a43b0: ldur x11, [x10, #5] */
  ARC_X_W(c, 11, arc_ld64((ARC_X_R(c, 10) + INT64_C(5))));
  /* a43b4: movk x12, #0x6f6c, lsl #16 */
  ARC_X_W(c, 12, ((ARC_X_R(c, 12) & UINT64_C(18446744069414649855)) | UINT64_C(1869348864)));
  /* a43b8: movk x12, #0x6b63, lsl #32 */
  ARC_X_W(c, 12, ((ARC_X_R(c, 12) & UINT64_C(18446462603027808255)) | UINT64_C(118072945934336)));
  /* a43bc: movk x12, #0x695f, lsl #48 */
  ARC_X_W(c, 12, ((ARC_X_R(c, 12) & UINT64_C(281474976710655)) | UINT64_C(7592787496769945600)));
  /* a43c0: cmp x9, x12 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 12));
  /* a43c4: mov x9, #0x5f6b */
  ARC_X_W(c, 9, UINT64_C(24427));
  /* a43c8: movk x9, #0x6e69, lsl #16 */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(18446744069414649855)) | UINT64_C(1852375040)));
  /* a43cc: movk x9, #0x6f76, lsl #32 */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(18446462603027808255)) | UINT64_C(122552596824064)));
  /* a43d0: movk x9, #0x656b, lsl #48 */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(281474976710655)) | UINT64_C(7307934820338761728)));
  /* a43d4: ccmp x11, x9, #0, eq */
  if (ARC_COND(c, 0)) { (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 9)); }
  else { (c)->nf = 0; (c)->zf = 0;
          (c)->cf = 0; (c)->vf = 0; }
  /* a43d8: b.ne #0xa44a0 */
  if (ARC_COND(c, 1)) goto L_a44a0;
  /* a43dc: add x9, x10, #0xd */
  ARC_X_W(c, 9, (ARC_X_R(c, 10) + UINT64_C(13)));
  /* a43e0: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* a43e4: str x9, [sp, #0x40] */
  arc_st64(((c)->sp + INT64_C(64)), ARC_X_R(c, 9));
  /* a43e8: b.eq #0xa4408 */
  if (ARC_COND(c, 0)) goto L_a4408;
  /* a43ec: ldrb w11, [x9] */
  ARC_W_W(c, 11, arc_ld8(ARC_X_R(c, 9)));
  /* a43f0: cmp w11, #0x5f */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(95));
  /* a43f4: b.ne #0xa4408 */
  if (ARC_COND(c, 1)) goto L_a4408;
  /* a43f8: add x9, x10, #0xe */
  ARC_X_W(c, 9, (ARC_X_R(c, 10) + UINT64_C(14)));
  /* a43fc: mov w10, #1 */
  ARC_W_W(c, 10, UINT64_C(1));
  /* a4400: str x9, [sp, #0x40] */
  arc_st64(((c)->sp + INT64_C(64)), ARC_X_R(c, 9));
  /* a4404: b #0xa440c */
  goto L_a440c;
L_a4408:;
  /* a4408: mov w10, wzr */
  ARC_W_W(c, 10, ARC_W_R(c, 31));
L_a440c:;
  /* a440c: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* a4410: b.eq #0xa4424 */
  if (ARC_COND(c, 0)) goto L_a4424;
  /* a4414: ldrb w11, [x9] */
  ARC_W_W(c, 11, arc_ld8(ARC_X_R(c, 9)));
  /* a4418: sub w11, w11, #0x3a */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) - UINT64_C(58)));
  /* a441c: cmn w11, #0xa */
  (void)arc_add32(c, ARC_W_R(c, 11), UINT64_C(10), 0);
  /* a4420: b.hs #0xa442c */
  if (ARC_COND(c, 2)) goto L_a442c;
L_a4424:;
  /* a4424: mov w11, #1 */
  ARC_W_W(c, 11, UINT64_C(1));
  /* a4428: b #0xa4468 */
  goto L_a4468;
L_a442c:;
  /* a442c: mov x11, x9 */
  ARC_X_W(c, 11, ARC_X_R(c, 9));
L_a4430:;
  /* a4430: ldrb w12, [x11] */
  ARC_W_W(c, 12, arc_ld8(ARC_X_R(c, 11)));
  /* a4434: sub w12, w12, #0x3a */
  ARC_W_W(c, 12, (ARC_W_R(c, 12) - UINT64_C(58)));
  /* a4438: cmn w12, #0xa */
  (void)arc_add32(c, ARC_W_R(c, 12), UINT64_C(10), 0);
  /* a443c: b.lo #0xa4458 */
  if (ARC_COND(c, 3)) goto L_a4458;
  /* a4440: add x11, x11, #1 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) + UINT64_C(1)));
  /* a4444: cmp x11, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 8));
  /* a4448: str x11, [sp, #0x40] */
  arc_st64(((c)->sp + INT64_C(64)), ARC_X_R(c, 11));
  /* a444c: b.ne #0xa4430 */
  if (ARC_COND(c, 1)) goto L_a4430;
  /* a4450: mov x12, x8 */
  ARC_X_W(c, 12, ARC_X_R(c, 8));
  /* a4454: b #0xa445c */
  goto L_a445c;
L_a4458:;
  /* a4458: mov x12, x11 */
  ARC_X_W(c, 12, ARC_X_R(c, 11));
L_a445c:;
  /* a445c: cmp x12, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 12), ARC_X_R(c, 9));
  /* a4460: mov x9, x11 */
  ARC_X_W(c, 9, ARC_X_R(c, 11));
  /* a4464: cset w11, eq */
  ARC_W_W(c, 11, (ARC_COND(c, 0) ? 1 : 0));
L_a4468:;
  /* a4468: and w10, w10, w11 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) & ARC_W_R(c, 11)));
  /* a446c: tbnz w10, #0, #0xa44a0 */
  if (((ARC_W_R(c, 10)) >> 0 & 1) != 0) goto L_a44a0;
  /* a4470: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* a4474: b.eq #0xa4488 */
  if (ARC_COND(c, 0)) goto L_a4488;
  /* a4478: ldrb w9, [x9] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 9)));
  /* a447c: cmp w9, #0x2e */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(46));
  /* a4480: b.ne #0xa44a0 */
  if (ARC_COND(c, 1)) goto L_a44a0;
  /* a4484: str x8, [sp, #0x40] */
  arc_st64(((c)->sp + INT64_C(64)), ARC_X_R(c, 8));
L_a4488:;
  /* a4488: adrp x1, #0x51000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(331776)));
  /* a448c: add x1, x1, #0x9bc */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2492)));
  /* a4490: add x0, sp, #0x40 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(64)));
  /* a4494: add x2, sp, #0x18 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(24)));
  /* a4498: bl #0xa51fc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(672924));
  fn1_a51fc(c);
  /* a449c: b #0xa44a4 */
  goto L_a44a4;
L_a44a0:;
  /* a44a0: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
L_a44a4:;
  /* a44a4: cbz x0, #0xa41ec */
  if ((ARC_X_R(c, 0)) == 0) goto L_a41ec;
L_a44a8:;
  /* a44a8: cbz x21, #0xa44b4 */
  if ((ARC_X_R(c, 21)) == 0) goto L_a44b4;
  /* a44ac: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* a44b0: b #0xa44b8 */
  goto L_a44b8;
L_a44b4:;
  /* a44b4: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
L_a44b8:;
  /* a44b8: movi v0.2d, #0xffffffffffffffff */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = UINT64_C(18446744073709551615);
    _t.u64[1] = UINT64_C(18446744073709551615);
    (c)->q[0] = _t; }
  /* a44bc: ldr x9, [sp, #0x310] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(784))));
  /* a44c0: ldr x10, [sp, #0x318] */
  ARC_X_W(c, 10, arc_ld64(((c)->sp + INT64_C(792))));
  /* a44c4: str x8, [sp, #0x28] */
  arc_st64(((c)->sp + INT64_C(40)), ARC_X_R(c, 8));
  /* a44c8: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* a44cc: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* a44d0: stp x21, xzr, [sp, #0x18] */
  { const uint64_t _pa = ((c)->sp + INT64_C(24));
    arc_st64(_pa, ARC_X_R(c, 21));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* a44d4: str w8, [sp, #0x38] */
  arc_st32(((c)->sp + INT64_C(56)), ARC_W_R(c, 8));
  /* a44d8: str d0, [sp, #0x30] */
  arc_st64(((c)->sp + INT64_C(48)), (c)->q[0].u64[0]);
  /* a44dc: b.ne #0xa4578 */
  if (ARC_COND(c, 1)) goto L_a4578;
  /* a44e0: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* a44e4: ldr x8, [x8, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* a44e8: add x1, sp, #0x18 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(24)));
  /* a44ec: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* a44f0: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(673012));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* a44f4: ldurh w8, [x21, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 21) + INT64_C(9))));
  /* a44f8: and w8, w8, #0xc0 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(192)));
  /* a44fc: cmp w8, #0x40 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(64));
  /* a4500: b.eq #0xa4518 */
  if (ARC_COND(c, 0)) goto L_a4518;
  /* a4504: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* a4508: ldr x8, [x8, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* a450c: add x1, sp, #0x18 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(24)));
  /* a4510: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* a4514: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(673048));
  arc_dispatch(c, ARC_X_R(c, 8));
L_a4518:;
  /* a4518: ldp x8, x10, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* a451c: ldr x0, [sp, #0x18] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(24))));
  /* a4520: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* a4524: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* a4528: b.ls #0xa4554 */
  if (ARC_COND(c, 9)) goto L_a4554;
  /* a452c: lsl x9, x10, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* a4530: add x8, x8, #0x3e1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(993)));
  /* a4534: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* a4538: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* a453c: str x1, [sp, #0x28] */
  arc_st64(((c)->sp + INT64_C(40)), ARC_X_R(c, 1));
  /* a4540: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(673092));
  fn1_142878(c);
  /* a4544: str x0, [sp, #0x18] */
  arc_st64(((c)->sp + INT64_C(24)), ARC_X_R(c, 0));
  /* a4548: cbz x0, #0xa4598 */
  if ((ARC_X_R(c, 0)) == 0) goto L_a4598;
  /* a454c: ldr x8, [sp, #0x20] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(32))));
  /* a4550: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
L_a4554:;
  /* a4554: str x9, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 9));
  /* a4558: strb wzr, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 31));
  /* a455c: cbz x20, #0xa4568 */
  if ((ARC_X_R(c, 20)) == 0) goto L_a4568;
  /* a4560: ldr x8, [sp, #0x20] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(32))));
  /* a4564: str x8, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 8));
L_a4568:;
  /* a4568: ldr x20, [sp, #0x18] */
  ARC_X_W(c, 20, arc_ld64(((c)->sp + INT64_C(24))));
  /* a456c: mov w8, wzr */
  ARC_W_W(c, 8, ARC_W_R(c, 31));
  /* a4570: cbnz x19, #0xa41f8 */
  if ((ARC_X_R(c, 19)) != 0) goto L_a41f8;
  /* a4574: b #0xa41fc */
  goto L_a41fc;
L_a4578:;
  /* a4578: adrp x0, #0x4f000 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(323584)));
  /* a457c: add x0, x0, #0x8a6 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2214)));
  /* a4580: adrp x1, #0x52000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(335872)));
  /* a4584: add x1, x1, #0x484 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1156)));
  /* a4588: nop  */
  /* nop: no architectural effect here */
  /* a458c: adr x3, #0x5018e */
  ARC_X_W(c, 3, (arc_image_bases[1] + UINT64_C(328078)));
  /* a4590: mov w2, #0x18c */
  ARC_W_W(c, 2, UINT64_C(396));
  /* a4594: bl #0xa23d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(673176));
  fn1_a23d8(c);
L_a4598:;
  /* a4598: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(673180));
  fn1_1427b8(c);
L_a459c:;
  /* a459c: bl #0x142488 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(673184));
  fn1_142488(c);
  /* a45a0: b #0xa45a8 */
  goto L_a45a8;
  /* a45a4: b #0xa45a8 */
  goto L_a45a8;
L_a45a8:;
  /* a45a8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* a45ac: add x0, sp, #0x40 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(64)));
  /* a45b0: bl #0xa45bc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(673204));
  fn1_a45bc(c);
  /* a45b4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a45b8: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(673212));
  fn1_9cc20(c);
}

void fn1_aba3c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038630972));
  /* aba3c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* aba40: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* aba44: str x23, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 23));
  /* aba48: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* aba4c: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* aba50: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* aba54: ldr x23, [x0, #0x1330] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 0) + INT64_C(4912))));
  /* aba58: mov x20, x3 */
  ARC_X_W(c, 20, ARC_X_R(c, 3));
  /* aba5c: mov x19, x2 */
  ARC_X_W(c, 19, ARC_X_R(c, 2));
  /* aba60: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* aba64: ldr x8, [x23, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 23) + INT64_C(8))));
  /* aba68: sub x9, x8, #0xfc0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4032)));
  /* aba6c: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* aba70: b.hi #0xaba94 */
  if (ARC_COND(c, 8)) goto L_aba94;
  /* aba74: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* aba78: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* aba7c: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(703104));
  fn1_1428a8(c);
  /* aba80: cbz x0, #0xabaf8 */
  if ((ARC_X_R(c, 0)) == 0) goto L_abaf8;
  /* aba84: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* aba88: stp x23, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 23));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* aba8c: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* aba90: str x0, [x22, #0x1330] */
  arc_st64((ARC_X_R(c, 22) + INT64_C(4912)), ARC_X_R(c, 0));
L_aba94:;
  /* aba94: add x9, x8, #0x30 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(48)));
  /* aba98: add x0, x23, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 23) + ARC_X_R(c, 8)));
  /* aba9c: adrp x8, #0x14a000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1351680)));
  /* abaa0: add x8, x8, #0x258 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(600)));
  /* abaa4: str x9, [x23, #8] */
  arc_st64((ARC_X_R(c, 23) + INT64_C(8)), ARC_X_R(c, 9));
  /* abaa8: ldr x10, [x21] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 21)));
  /* abaac: str x8, [x0, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* abab0: ldurh w8, [x0, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 0) + INT64_C(9))));
  /* abab4: ldrh w9, [x20] */
  ARC_W_W(c, 9, arc_ld16(ARC_X_R(c, 20)));
  /* abab8: mov w11, #0x38 */
  ARC_W_W(c, 11, UINT64_C(56));
  /* ababc: str x10, [x0, #0x10] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(16)), ARC_X_R(c, 10));
  /* abac0: and w8, w8, #0xf000 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(61440)));
  /* abac4: strb w11, [x0, #8] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 11));
  /* abac8: bfxil w8, w9, #0, #6 */
  ARC_W_W(c, 8, (((uint32_t)(ARC_W_R(c, 8)) & UINT64_C(4294967232)) | ((((uint32_t)(ARC_W_R(c, 9))) >> 0) & UINT64_C(63))));
  /* abacc: mov w9, #0x540 */
  ARC_W_W(c, 9, UINT64_C(1344));
  /* abad0: ldr q0, [x19] */
  arc_q_w(c, 0, arc_ld64(ARC_X_R(c, 19)), arc_ld64(ARC_X_R(c, 19) + 8));
  /* abad4: orr w8, w8, w9 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | ARC_W_R(c, 9)));
  /* abad8: sturh w8, [x0, #9] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(9)), ARC_W_R(c, 8));
  /* abadc: stur q0, [x0, #0x18] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(24)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 0) + INT64_C(24)) + 8, (c)->q[0].u64[1]);
  /* abae0: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* abae4: ldr x23, [sp, #0x10] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(16))));
  /* abae8: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* abaec: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* abaf0: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* abaf4: ret  */
  return;
L_abaf8:;
  /* abaf8: bl #0x142488 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(703228));
  fn1_142488(c);
}

void fn1_b1db8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038656440));
  /* b1db8: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* b1dbc: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* b1dc0: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b1dc4: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* b1dc8: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* b1dcc: ldr x8, [x0, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(24))));
  /* b1dd0: cmp x8, #0x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(16));
  /* b1dd4: b.lo #0xb20a0 */
  if (ARC_COND(c, 3)) goto L_b20a0;
  /* b1dd8: ldr x8, [x0, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* b1ddc: movi v5.4h, #0xf6 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = UINT64_C(246);
    _t.u16[1] = UINT64_C(246);
    _t.u16[2] = UINT64_C(246);
    _t.u16[3] = UINT64_C(246);
    (c)->q[5] = _t; }
  /* b1de0: movi v6.4h, #9 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = UINT64_C(9);
    _t.u16[1] = UINT64_C(9);
    _t.u16[2] = UINT64_C(9);
    _t.u16[3] = UINT64_C(9);
    (c)->q[6] = _t; }
  /* b1de4: movi v17.4h, #0xd0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = UINT64_C(208);
    _t.u16[1] = UINT64_C(208);
    _t.u16[2] = UINT64_C(208);
    _t.u16[3] = UINT64_C(208);
    (c)->q[17] = _t; }
  /* b1de8: movi v18.4h, #0xa9 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = UINT64_C(169);
    _t.u16[1] = UINT64_C(169);
    _t.u16[2] = UINT64_C(169);
    _t.u16[3] = UINT64_C(169);
    (c)->q[18] = _t; }
  /* b1dec: mov w13, #-0x57 */
  ARC_W_W(c, 13, UINT64_C(18446744073709551529));
  /* b1df0: ldr d0, [x8] */
  arc_du_w(c, 0, arc_ld64(ARC_X_R(c, 8)));
  /* b1df4: ldr s3, [x8, #0xc] */
  arc_su_w(c, 3, arc_ld32((ARC_X_R(c, 8) + INT64_C(12))));
  /* b1df8: ldrb w15, [x8, #0xb] */
  ARC_W_W(c, 15, arc_ld8((ARC_X_R(c, 8) + INT64_C(11))));
  /* b1dfc: ldrb w16, [x8, #0xa] */
  ARC_W_W(c, 16, arc_ld8((ARC_X_R(c, 8) + INT64_C(10))));
  /* b1e00: mov w14, #9 */
  ARC_W_W(c, 14, UINT64_C(9));
  /* b1e04: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* b1e08: umov w9, v0.b[2] */
  ARC_W_W(c, 9, (c)->q[0].u8[2]);
  /* b1e0c: umov w11, v0.b[3] */
  ARC_W_W(c, 11, (c)->q[0].u8[3]);
  /* b1e10: umov w10, v0.b[0] */
  ARC_W_W(c, 10, (c)->q[0].u8[0]);
  /* b1e14: umov w12, v0.b[1] */
  ARC_W_W(c, 12, (c)->q[0].u8[1]);
  /* b1e18: ushll v3.8h, v3.8b, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = (uint16_t)((uint16_t)((c)->q[3].u8[0]) << 0);
    _t.u16[1] = (uint16_t)((uint16_t)((c)->q[3].u8[1]) << 0);
    _t.u16[2] = (uint16_t)((uint16_t)((c)->q[3].u8[2]) << 0);
    _t.u16[3] = (uint16_t)((uint16_t)((c)->q[3].u8[3]) << 0);
    _t.u16[4] = (uint16_t)((uint16_t)((c)->q[3].u8[4]) << 0);
    _t.u16[5] = (uint16_t)((uint16_t)((c)->q[3].u8[5]) << 0);
    _t.u16[6] = (uint16_t)((uint16_t)((c)->q[3].u8[6]) << 0);
    _t.u16[7] = (uint16_t)((uint16_t)((c)->q[3].u8[7]) << 0);
    (c)->q[3] = _t; }
  /* b1e1c: sub w17, w15, #0x3a */
  ARC_W_W(c, 17, (ARC_W_R(c, 15) - UINT64_C(58)));
  /* b1e20: sub w0, w16, #0x3a */
  ARC_W_W(c, 0, (ARC_W_R(c, 16) - UINT64_C(58)));
  /* b1e24: and w17, w17, #0xff */
  ARC_W_W(c, 17, (ARC_W_R(c, 17) & UINT64_C(255)));
  /* b1e28: adrp x2, #0x50000 */
  ARC_X_W(c, 2, (arc_image_bases[1] + UINT64_C(327680)));
  /* b1e2c: add x2, x2, #0x7ce */
  ARC_X_W(c, 2, (ARC_X_R(c, 2) + UINT64_C(1998)));
  /* b1e30: mov w1, #0x20 */
  ARC_W_W(c, 1, UINT64_C(32));
  /* b1e34: fmov s1, w9 */
  arc_su_w(c, 1, (uint32_t)(ARC_W_R(c, 9)));
  /* b1e38: fmov s2, w11 */
  arc_su_w(c, 2, (uint32_t)(ARC_W_R(c, 11)));
  /* b1e3c: umov w9, v0.b[4] */
  ARC_W_W(c, 9, (c)->q[0].u8[4]);
  /* b1e40: umov w11, v0.b[6] */
  ARC_W_W(c, 11, (c)->q[0].u8[6]);
  /* b1e44: mov v1.h[1], w10 */
  (c)->q[1].u16[1] = (ARC_W_R(c, 10));
  /* b1e48: umov w10, v0.b[5] */
  ARC_W_W(c, 10, (c)->q[0].u8[5]);
  /* b1e4c: mov v2.h[1], w12 */
  (c)->q[2].u16[1] = (ARC_W_R(c, 12));
  /* b1e50: umov w12, v3.h[0] */
  ARC_W_W(c, 12, (c)->q[3].u16[0]);
  /* b1e54: mov v1.h[2], w9 */
  (c)->q[1].u16[2] = (ARC_W_R(c, 9));
  /* b1e58: umov w9, v0.b[7] */
  ARC_W_W(c, 9, (c)->q[0].u8[7]);
  /* b1e5c: mov v2.h[2], w10 */
  (c)->q[2].u16[2] = (ARC_W_R(c, 10));
  /* b1e60: movi v0.4h, #0xc6 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = UINT64_C(198);
    _t.u16[1] = UINT64_C(198);
    _t.u16[2] = UINT64_C(198);
    _t.u16[3] = UINT64_C(198);
    (c)->q[0] = _t; }
  /* b1e64: umov w10, v3.h[1] */
  ARC_W_W(c, 10, (c)->q[3].u16[1]);
  /* b1e68: mov v1.h[3], w11 */
  (c)->q[1].u16[3] = (ARC_W_R(c, 11));
  /* b1e6c: mov v2.h[3], w9 */
  (c)->q[2].u16[3] = (ARC_W_R(c, 9));
  /* b1e70: umov w9, v3.h[3] */
  ARC_W_W(c, 9, (c)->q[3].u16[3]);
  /* b1e74: umov w11, v3.h[2] */
  ARC_W_W(c, 11, (c)->q[3].u16[2]);
  /* b1e78: movi v3.2s, #0xc6 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = UINT64_C(198);
    _t.u32[1] = UINT64_C(198);
    (c)->q[3] = _t; }
  /* b1e7c: add v4.4h, v1.4h, v0.4h */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = (c)->q[1].u16[0] + (c)->q[0].u16[0];
    _t.u16[1] = (c)->q[1].u16[1] + (c)->q[0].u16[1];
    _t.u16[2] = (c)->q[1].u16[2] + (c)->q[0].u16[2];
    _t.u16[3] = (c)->q[1].u16[3] + (c)->q[0].u16[3];
    (c)->q[4] = _t; }
  /* b1e80: add v0.4h, v2.4h, v0.4h */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = (c)->q[2].u16[0] + (c)->q[0].u16[0];
    _t.u16[1] = (c)->q[2].u16[1] + (c)->q[0].u16[1];
    _t.u16[2] = (c)->q[2].u16[2] + (c)->q[0].u16[2];
    _t.u16[3] = (c)->q[2].u16[3] + (c)->q[0].u16[3];
    (c)->q[0] = _t; }
  /* b1e84: fmov s7, w9 */
  arc_su_w(c, 7, (uint32_t)(ARC_W_R(c, 9)));
  /* b1e88: fmov s16, w11 */
  arc_su_w(c, 16, (uint32_t)(ARC_W_R(c, 11)));
  /* b1e8c: ldrb w9, [x8, #9] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 8) + INT64_C(9))));
  /* b1e90: bic v4.4h, #0xff, lsl #8 */
  { Arm64Vec _t = (c)->q[4];
    _t.u16[0] = (uint16_t)(_t.u16[0] & UINT64_C(255));
    _t.u16[1] = (uint16_t)(_t.u16[1] & UINT64_C(255));
    _t.u16[2] = (uint16_t)(_t.u16[2] & UINT64_C(255));
    _t.u16[3] = (uint16_t)(_t.u16[3] & UINT64_C(255));
    _t.u64[1] = 0;
    (c)->q[4] = _t; }
  /* b1e94: bic v0.4h, #0xff, lsl #8 */
  { Arm64Vec _t = (c)->q[0];
    _t.u16[0] = (uint16_t)(_t.u16[0] & UINT64_C(255));
    _t.u16[1] = (uint16_t)(_t.u16[1] & UINT64_C(255));
    _t.u16[2] = (uint16_t)(_t.u16[2] & UINT64_C(255));
    _t.u16[3] = (uint16_t)(_t.u16[3] & UINT64_C(255));
    _t.u64[1] = 0;
    (c)->q[0] = _t; }
  /* b1e98: mov v7.s[1], w10 */
  (c)->q[7].u32[1] = (ARC_W_R(c, 10));
  /* b1e9c: mov v16.s[1], w12 */
  (c)->q[16].u32[1] = (ARC_W_R(c, 12));
  /* b1ea0: ldrb w10, [x8, #8] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 8) + INT64_C(8))));
  /* b1ea4: sub w8, w9, #0x3a */
  ARC_W_W(c, 8, (ARC_W_R(c, 9) - UINT64_C(58)));
  /* b1ea8: and w8, w8, #0xff */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(255)));
  /* b1eac: mov w12, #-0x30 */
  ARC_W_W(c, 12, UINT64_C(18446744073709551568));
  /* b1eb0: cmhi v4.4h, v5.4h, v4.4h */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = ((c)->q[5].u16[0] > (c)->q[4].u16[0]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[1] = ((c)->q[5].u16[1] > (c)->q[4].u16[1]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[2] = ((c)->q[5].u16[2] > (c)->q[4].u16[2]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[3] = ((c)->q[5].u16[3] > (c)->q[4].u16[3]) ? (uint16_t)~(uint16_t)0 : 0;
    (c)->q[4] = _t; }
  /* b1eb4: cmhi v0.4h, v5.4h, v0.4h */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = ((c)->q[5].u16[0] > (c)->q[0].u16[0]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[1] = ((c)->q[5].u16[1] > (c)->q[0].u16[1]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[2] = ((c)->q[5].u16[2] > (c)->q[0].u16[2]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[3] = ((c)->q[5].u16[3] > (c)->q[0].u16[3]) ? (uint16_t)~(uint16_t)0 : 0;
    (c)->q[0] = _t; }
  /* b1eb8: movi d5, #0x0000ff000000ff */
  arc_du_w(c, 5, UINT64_C(1095216660735));
  /* b1ebc: sub w11, w10, #0x3a */
  ARC_W_W(c, 11, (ARC_W_R(c, 10) - UINT64_C(58)));
  /* b1ec0: cmp w8, #0xf6 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(246));
  /* b1ec4: and w11, w11, #0xff */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) & UINT64_C(255)));
  /* b1ec8: csel w8, w13, w12, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 13)) : ARC_W_R(c, 12)));
  /* b1ecc: and v4.8b, v4.8b, v6.8b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[4].u8[0] & (c)->q[6].u8[0];
    _t.u8[1] = (c)->q[4].u8[1] & (c)->q[6].u8[1];
    _t.u8[2] = (c)->q[4].u8[2] & (c)->q[6].u8[2];
    _t.u8[3] = (c)->q[4].u8[3] & (c)->q[6].u8[3];
    _t.u8[4] = (c)->q[4].u8[4] & (c)->q[6].u8[4];
    _t.u8[5] = (c)->q[4].u8[5] & (c)->q[6].u8[5];
    _t.u8[6] = (c)->q[4].u8[6] & (c)->q[6].u8[6];
    _t.u8[7] = (c)->q[4].u8[7] & (c)->q[6].u8[7];
    (c)->q[4] = _t; }
  /* b1ed0: bsl v0.8b, v18.8b, v17.8b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (((c)->q[0].u8[0] & (c)->q[18].u8[0]) | (~(c)->q[0].u8[0] & (c)->q[17].u8[0]));
    _t.u8[1] = (((c)->q[0].u8[1] & (c)->q[18].u8[1]) | (~(c)->q[0].u8[1] & (c)->q[17].u8[1]));
    _t.u8[2] = (((c)->q[0].u8[2] & (c)->q[18].u8[2]) | (~(c)->q[0].u8[2] & (c)->q[17].u8[2]));
    _t.u8[3] = (((c)->q[0].u8[3] & (c)->q[18].u8[3]) | (~(c)->q[0].u8[3] & (c)->q[17].u8[3]));
    _t.u8[4] = (((c)->q[0].u8[4] & (c)->q[18].u8[4]) | (~(c)->q[0].u8[4] & (c)->q[17].u8[4]));
    _t.u8[5] = (((c)->q[0].u8[5] & (c)->q[18].u8[5]) | (~(c)->q[0].u8[5] & (c)->q[17].u8[5]));
    _t.u8[6] = (((c)->q[0].u8[6] & (c)->q[18].u8[6]) | (~(c)->q[0].u8[6] & (c)->q[17].u8[6]));
    _t.u8[7] = (((c)->q[0].u8[7] & (c)->q[18].u8[7]) | (~(c)->q[0].u8[7] & (c)->q[17].u8[7]));
    (c)->q[0] = _t; }
  /* b1ed4: add v6.2s, v7.2s, v3.2s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[7].u32[0] + (c)->q[3].u32[0];
    _t.u32[1] = (c)->q[7].u32[1] + (c)->q[3].u32[1];
    (c)->q[6] = _t; }
  /* b1ed8: add v3.2s, v16.2s, v3.2s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[16].u32[0] + (c)->q[3].u32[0];
    _t.u32[1] = (c)->q[16].u32[1] + (c)->q[3].u32[1];
    (c)->q[3] = _t; }
  /* b1edc: cmp w11, #0xf6 */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(246));
  /* b1ee0: add w8, w8, w9 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) + ARC_W_R(c, 9)));
  /* b1ee4: csel w11, w14, wzr, lo */
  ARC_W_W(c, 11, (ARC_COND(c, 3) ? (ARC_W_R(c, 14)) : ARC_W_R(c, 31)));
  /* b1ee8: cmp w17, #0xf6 */
  (void)arc_sub32(c, ARC_W_R(c, 17), UINT64_C(246));
  /* b1eec: and w17, w0, #0xff */
  ARC_W_W(c, 17, (ARC_W_R(c, 0) & UINT64_C(255)));
  /* b1ef0: add v1.4h, v4.4h, v1.4h */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = (c)->q[4].u16[0] + (c)->q[1].u16[0];
    _t.u16[1] = (c)->q[4].u16[1] + (c)->q[1].u16[1];
    _t.u16[2] = (c)->q[4].u16[2] + (c)->q[1].u16[2];
    _t.u16[3] = (c)->q[4].u16[3] + (c)->q[1].u16[3];
    (c)->q[1] = _t; }
  /* b1ef4: movi v4.2s, #0xf6 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = UINT64_C(246);
    _t.u32[1] = UINT64_C(246);
    (c)->q[4] = _t; }
  /* b1ef8: and v6.8b, v6.8b, v5.8b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[6].u8[0] & (c)->q[5].u8[0];
    _t.u8[1] = (c)->q[6].u8[1] & (c)->q[5].u8[1];
    _t.u8[2] = (c)->q[6].u8[2] & (c)->q[5].u8[2];
    _t.u8[3] = (c)->q[6].u8[3] & (c)->q[5].u8[3];
    _t.u8[4] = (c)->q[6].u8[4] & (c)->q[5].u8[4];
    _t.u8[5] = (c)->q[6].u8[5] & (c)->q[5].u8[5];
    _t.u8[6] = (c)->q[6].u8[6] & (c)->q[5].u8[6];
    _t.u8[7] = (c)->q[6].u8[7] & (c)->q[5].u8[7];
    (c)->q[6] = _t; }
  /* b1efc: add v0.4h, v0.4h, v2.4h */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = (c)->q[0].u16[0] + (c)->q[2].u16[0];
    _t.u16[1] = (c)->q[0].u16[1] + (c)->q[2].u16[1];
    _t.u16[2] = (c)->q[0].u16[2] + (c)->q[2].u16[2];
    _t.u16[3] = (c)->q[0].u16[3] + (c)->q[2].u16[3];
    (c)->q[0] = _t; }
  /* b1f00: and v3.8b, v3.8b, v5.8b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[3].u8[0] & (c)->q[5].u8[0];
    _t.u8[1] = (c)->q[3].u8[1] & (c)->q[5].u8[1];
    _t.u8[2] = (c)->q[3].u8[2] & (c)->q[5].u8[2];
    _t.u8[3] = (c)->q[3].u8[3] & (c)->q[5].u8[3];
    _t.u8[4] = (c)->q[3].u8[4] & (c)->q[5].u8[4];
    _t.u8[5] = (c)->q[3].u8[5] & (c)->q[5].u8[5];
    _t.u8[6] = (c)->q[3].u8[6] & (c)->q[5].u8[6];
    _t.u8[7] = (c)->q[3].u8[7] & (c)->q[5].u8[7];
    (c)->q[3] = _t; }
  /* b1f04: movi v2.2s, #0xd0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = UINT64_C(208);
    _t.u32[1] = UINT64_C(208);
    (c)->q[2] = _t; }
  /* b1f08: csel w12, w13, w12, lo */
  ARC_W_W(c, 12, (ARC_COND(c, 3) ? (ARC_W_R(c, 13)) : ARC_W_R(c, 12)));
  /* b1f0c: cmp w17, #0xf6 */
  (void)arc_sub32(c, ARC_W_R(c, 17), UINT64_C(246));
  /* b1f10: add w9, w11, w10 */
  ARC_W_W(c, 9, (ARC_W_R(c, 11) + ARC_W_R(c, 10)));
  /* b1f14: shl v1.4h, v1.4h, #4 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = (uint16_t)((c)->q[1].u16[0] << 4);
    _t.u16[1] = (uint16_t)((c)->q[1].u16[1] << 4);
    _t.u16[2] = (uint16_t)((c)->q[1].u16[2] << 4);
    _t.u16[3] = (uint16_t)((c)->q[1].u16[3] << 4);
    (c)->q[1] = _t; }
  /* b1f18: csel w13, w14, wzr, lo */
  ARC_W_W(c, 13, (ARC_COND(c, 3) ? (ARC_W_R(c, 14)) : ARC_W_R(c, 31)));
  /* b1f1c: add w12, w12, w15 */
  ARC_W_W(c, 12, (ARC_W_R(c, 12) + ARC_W_R(c, 15)));
  /* b1f20: cmhi v5.2s, v4.2s, v6.2s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[4].u32[0] > (c)->q[6].u32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[4].u32[1] > (c)->q[6].u32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[5] = _t; }
  /* b1f24: cmhi v3.2s, v4.2s, v3.2s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[4].u32[0] > (c)->q[3].u32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[4].u32[1] > (c)->q[3].u32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[3] = _t; }
  /* b1f28: movi v4.2s, #0xa9 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = UINT64_C(169);
    _t.u32[1] = UINT64_C(169);
    (c)->q[4] = _t; }
  /* b1f2c: add w13, w13, w16 */
  ARC_W_W(c, 13, (ARC_W_R(c, 13) + ARC_W_R(c, 16)));
  /* b1f30: add w8, w8, w9, lsl #4 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) + ((uint32_t)(ARC_W_R(c, 9)) << 4)));
  /* b1f34: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* b1f38: add v0.4h, v0.4h, v1.4h */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = (c)->q[0].u16[0] + (c)->q[1].u16[0];
    _t.u16[1] = (c)->q[0].u16[1] + (c)->q[1].u16[1];
    _t.u16[2] = (c)->q[0].u16[2] + (c)->q[1].u16[2];
    _t.u16[3] = (c)->q[0].u16[3] + (c)->q[1].u16[3];
    (c)->q[0] = _t; }
  /* b1f3c: movi v1.2s, #9 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = UINT64_C(9);
    _t.u32[1] = UINT64_C(9);
    (c)->q[1] = _t; }
  /* b1f40: add w12, w12, w13, lsl #4 */
  ARC_W_W(c, 12, (ARC_W_R(c, 12) + ((uint32_t)(ARC_W_R(c, 13)) << 4)));
  /* b1f44: adrp x13, #0x52000 */
  ARC_X_W(c, 13, (arc_image_bases[1] + UINT64_C(335872)));
  /* b1f48: and w8, w8, #0xff */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(255)));
  /* b1f4c: bit v2.8b, v4.8b, v5.8b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = ((c)->q[2].u8[0] ^ (((c)->q[4].u8[0] ^ (c)->q[2].u8[0]) & (c)->q[5].u8[0]));
    _t.u8[1] = ((c)->q[2].u8[1] ^ (((c)->q[4].u8[1] ^ (c)->q[2].u8[1]) & (c)->q[5].u8[1]));
    _t.u8[2] = ((c)->q[2].u8[2] ^ (((c)->q[4].u8[2] ^ (c)->q[2].u8[2]) & (c)->q[5].u8[2]));
    _t.u8[3] = ((c)->q[2].u8[3] ^ (((c)->q[4].u8[3] ^ (c)->q[2].u8[3]) & (c)->q[5].u8[3]));
    _t.u8[4] = ((c)->q[2].u8[4] ^ (((c)->q[4].u8[4] ^ (c)->q[2].u8[4]) & (c)->q[5].u8[4]));
    _t.u8[5] = ((c)->q[2].u8[5] ^ (((c)->q[4].u8[5] ^ (c)->q[2].u8[5]) & (c)->q[5].u8[5]));
    _t.u8[6] = ((c)->q[2].u8[6] ^ (((c)->q[4].u8[6] ^ (c)->q[2].u8[6]) & (c)->q[5].u8[6]));
    _t.u8[7] = ((c)->q[2].u8[7] ^ (((c)->q[4].u8[7] ^ (c)->q[2].u8[7]) & (c)->q[5].u8[7]));
    (c)->q[2] = _t; }
  /* b1f50: and x12, x12, #0xff */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) & UINT64_C(255)));
  /* b1f54: ushll v0.4s, v0.4h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((uint32_t)((c)->q[0].u16[0]) << 0);
    _t.u32[1] = (uint32_t)((uint32_t)((c)->q[0].u16[1]) << 0);
    _t.u32[2] = (uint32_t)((uint32_t)((c)->q[0].u16[2]) << 0);
    _t.u32[3] = (uint32_t)((uint32_t)((c)->q[0].u16[3]) << 0);
    (c)->q[0] = _t; }
  /* b1f58: and v1.8b, v3.8b, v1.8b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[3].u8[0] & (c)->q[1].u8[0];
    _t.u8[1] = (c)->q[3].u8[1] & (c)->q[1].u8[1];
    _t.u8[2] = (c)->q[3].u8[2] & (c)->q[1].u8[2];
    _t.u8[3] = (c)->q[3].u8[3] & (c)->q[1].u8[3];
    _t.u8[4] = (c)->q[3].u8[4] & (c)->q[1].u8[4];
    _t.u8[5] = (c)->q[3].u8[5] & (c)->q[1].u8[5];
    _t.u8[6] = (c)->q[3].u8[6] & (c)->q[1].u8[6];
    _t.u8[7] = (c)->q[3].u8[7] & (c)->q[1].u8[7];
    (c)->q[1] = _t; }
  /* b1f5c: movi v3.2d, #0x000000000000ff */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = UINT64_C(255);
    _t.u64[1] = UINT64_C(255);
    (c)->q[3] = _t; }
  /* b1f60: ushll2 v4.2d, v0.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[0].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[0].u32[3]) << 0);
    (c)->q[4] = _t; }
  /* b1f64: ushll v0.2d, v0.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[0].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[0].u32[1]) << 0);
    (c)->q[0] = _t; }
  /* b1f68: add v2.2s, v2.2s, v7.2s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[2].u32[0] + (c)->q[7].u32[0];
    _t.u32[1] = (c)->q[2].u32[1] + (c)->q[7].u32[1];
    (c)->q[2] = _t; }
  /* b1f6c: add v1.2s, v1.2s, v16.2s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[1].u32[0] + (c)->q[16].u32[0];
    _t.u32[1] = (c)->q[1].u32[1] + (c)->q[16].u32[1];
    (c)->q[1] = _t; }
  /* b1f70: ldr q7, [x13, #0xb30] */
  arc_q_w(c, 7, arc_ld64((ARC_X_R(c, 13) + INT64_C(2864))), arc_ld64((ARC_X_R(c, 13) + INT64_C(2864)) + 8));
  /* b1f74: adrp x13, #0x52000 */
  ARC_X_W(c, 13, (arc_image_bases[1] + UINT64_C(335872)));
  /* b1f78: and v4.16b, v4.16b, v3.16b */
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
    (c)->q[4] = _t; }
  /* b1f7c: and v0.16b, v0.16b, v3.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[0].u8[0] & (c)->q[3].u8[0];
    _t.u8[1] = (c)->q[0].u8[1] & (c)->q[3].u8[1];
    _t.u8[2] = (c)->q[0].u8[2] & (c)->q[3].u8[2];
    _t.u8[3] = (c)->q[0].u8[3] & (c)->q[3].u8[3];
    _t.u8[4] = (c)->q[0].u8[4] & (c)->q[3].u8[4];
    _t.u8[5] = (c)->q[0].u8[5] & (c)->q[3].u8[5];
    _t.u8[6] = (c)->q[0].u8[6] & (c)->q[3].u8[6];
    _t.u8[7] = (c)->q[0].u8[7] & (c)->q[3].u8[7];
    _t.u8[8] = (c)->q[0].u8[8] & (c)->q[3].u8[8];
    _t.u8[9] = (c)->q[0].u8[9] & (c)->q[3].u8[9];
    _t.u8[10] = (c)->q[0].u8[10] & (c)->q[3].u8[10];
    _t.u8[11] = (c)->q[0].u8[11] & (c)->q[3].u8[11];
    _t.u8[12] = (c)->q[0].u8[12] & (c)->q[3].u8[12];
    _t.u8[13] = (c)->q[0].u8[13] & (c)->q[3].u8[13];
    _t.u8[14] = (c)->q[0].u8[14] & (c)->q[3].u8[14];
    _t.u8[15] = (c)->q[0].u8[15] & (c)->q[3].u8[15];
    (c)->q[0] = _t; }
  /* b1f80: shl v1.2s, v1.2s, #4 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((c)->q[1].u32[0] << 4);
    _t.u32[1] = (uint32_t)((c)->q[1].u32[1] << 4);
    (c)->q[1] = _t; }
  /* b1f84: mov v5.16b, v0.16b */
  (c)->q[5] = (c)->q[0];
  /* b1f88: mov v6.16b, v4.16b */
  (c)->q[6] = (c)->q[4];
  /* b1f8c: mov x10, v0.d[1] */
  ARC_X_W(c, 10, (c)->q[0].u64[1]);
  /* b1f90: add v1.2s, v2.2s, v1.2s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[2].u32[0] + (c)->q[1].u32[0];
    _t.u32[1] = (c)->q[2].u32[1] + (c)->q[1].u32[1];
    (c)->q[1] = _t; }
  /* b1f94: mov v5.d[1], v4.d[1] */
  (c)->q[5].u64[1] = ((c)->q[4].u64[1]);
  /* b1f98: mov v6.d[1], x12 */
  (c)->q[6].u64[1] = (ARC_X_R(c, 12));
  /* b1f9c: adrp x12, #0x52000 */
  ARC_X_W(c, 12, (arc_image_bases[1] + UINT64_C(335872)));
  /* b1fa0: ldr q2, [x12, #0xaf0] */
  arc_q_w(c, 2, arc_ld64((ARC_X_R(c, 12) + INT64_C(2800))), arc_ld64((ARC_X_R(c, 12) + INT64_C(2800)) + 8));
  /* b1fa4: ushll v1.2d, v1.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[1].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[1].u32[1]) << 0);
    (c)->q[1] = _t; }
  /* b1fa8: adrp x12, #0x52000 */
  ARC_X_W(c, 12, (arc_image_bases[1] + UINT64_C(335872)));
  /* b1fac: ushl v2.2d, v5.2d, v2.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[5].u64[0], (int8_t)(c)->q[2].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[5].u64[1], (int8_t)(c)->q[2].u64[1]);
    (c)->q[2] = _t; }
  /* b1fb0: ushl v5.2d, v6.2d, v7.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[6].u64[0], (int8_t)(c)->q[7].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[6].u64[1], (int8_t)(c)->q[7].u64[1]);
    (c)->q[5] = _t; }
  /* b1fb4: and v1.16b, v1.16b, v3.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[1].u8[0] & (c)->q[3].u8[0];
    _t.u8[1] = (c)->q[1].u8[1] & (c)->q[3].u8[1];
    _t.u8[2] = (c)->q[1].u8[2] & (c)->q[3].u8[2];
    _t.u8[3] = (c)->q[1].u8[3] & (c)->q[3].u8[3];
    _t.u8[4] = (c)->q[1].u8[4] & (c)->q[3].u8[4];
    _t.u8[5] = (c)->q[1].u8[5] & (c)->q[3].u8[5];
    _t.u8[6] = (c)->q[1].u8[6] & (c)->q[3].u8[6];
    _t.u8[7] = (c)->q[1].u8[7] & (c)->q[3].u8[7];
    _t.u8[8] = (c)->q[1].u8[8] & (c)->q[3].u8[8];
    _t.u8[9] = (c)->q[1].u8[9] & (c)->q[3].u8[9];
    _t.u8[10] = (c)->q[1].u8[10] & (c)->q[3].u8[10];
    _t.u8[11] = (c)->q[1].u8[11] & (c)->q[3].u8[11];
    _t.u8[12] = (c)->q[1].u8[12] & (c)->q[3].u8[12];
    _t.u8[13] = (c)->q[1].u8[13] & (c)->q[3].u8[13];
    _t.u8[14] = (c)->q[1].u8[14] & (c)->q[3].u8[14];
    _t.u8[15] = (c)->q[1].u8[15] & (c)->q[3].u8[15];
    (c)->q[1] = _t; }
  /* b1fb8: ldr q3, [x12, #0xa40] */
  arc_q_w(c, 3, arc_ld64((ARC_X_R(c, 12) + INT64_C(2624))), arc_ld64((ARC_X_R(c, 12) + INT64_C(2624)) + 8));
  /* b1fbc: adrp x12, #0x52000 */
  ARC_X_W(c, 12, (arc_image_bases[1] + UINT64_C(335872)));
  /* b1fc0: ldr q6, [x13, #0x960] */
  arc_q_w(c, 6, arc_ld64((ARC_X_R(c, 13) + INT64_C(2400))), arc_ld64((ARC_X_R(c, 13) + INT64_C(2400)) + 8));
  /* b1fc4: orr v2.16b, v2.16b, v5.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[2].u8[0] | (c)->q[5].u8[0];
    _t.u8[1] = (c)->q[2].u8[1] | (c)->q[5].u8[1];
    _t.u8[2] = (c)->q[2].u8[2] | (c)->q[5].u8[2];
    _t.u8[3] = (c)->q[2].u8[3] | (c)->q[5].u8[3];
    _t.u8[4] = (c)->q[2].u8[4] | (c)->q[5].u8[4];
    _t.u8[5] = (c)->q[2].u8[5] | (c)->q[5].u8[5];
    _t.u8[6] = (c)->q[2].u8[6] | (c)->q[5].u8[6];
    _t.u8[7] = (c)->q[2].u8[7] | (c)->q[5].u8[7];
    _t.u8[8] = (c)->q[2].u8[8] | (c)->q[5].u8[8];
    _t.u8[9] = (c)->q[2].u8[9] | (c)->q[5].u8[9];
    _t.u8[10] = (c)->q[2].u8[10] | (c)->q[5].u8[10];
    _t.u8[11] = (c)->q[2].u8[11] | (c)->q[5].u8[11];
    _t.u8[12] = (c)->q[2].u8[12] | (c)->q[5].u8[12];
    _t.u8[13] = (c)->q[2].u8[13] | (c)->q[5].u8[13];
    _t.u8[14] = (c)->q[2].u8[14] | (c)->q[5].u8[14];
    _t.u8[15] = (c)->q[2].u8[15] | (c)->q[5].u8[15];
    (c)->q[2] = _t; }
  /* b1fc8: ldr q5, [x12, #0xce0] */
  arc_q_w(c, 5, arc_ld64((ARC_X_R(c, 12) + INT64_C(3296))), arc_ld64((ARC_X_R(c, 12) + INT64_C(3296)) + 8));
  /* b1fcc: ushl v1.2d, v1.2d, v3.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[1].u64[0], (int8_t)(c)->q[3].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[1].u64[1], (int8_t)(c)->q[3].u64[1]);
    (c)->q[1] = _t; }
  /* b1fd0: ushl v4.2d, v4.2d, v6.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[4].u64[0], (int8_t)(c)->q[6].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[4].u64[1], (int8_t)(c)->q[6].u64[1]);
    (c)->q[4] = _t; }
  /* b1fd4: ushl v5.2d, v0.2d, v5.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[0].u64[0], (int8_t)(c)->q[5].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[0].u64[1], (int8_t)(c)->q[5].u64[1]);
    (c)->q[5] = _t; }
  /* b1fd8: ext v3.16b, v2.16b, v2.16b, #8 */
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
    (c)->q[3] = _t; }
  /* b1fdc: dup v6.2d, v1.d[1] */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = ((c)->q[1].u64[1]);
    _t.u64[1] = ((c)->q[1].u64[1]);
    (c)->q[6] = _t; }
  /* b1fe0: orr v4.16b, v5.16b, v4.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[5].u8[0] | (c)->q[4].u8[0];
    _t.u8[1] = (c)->q[5].u8[1] | (c)->q[4].u8[1];
    _t.u8[2] = (c)->q[5].u8[2] | (c)->q[4].u8[2];
    _t.u8[3] = (c)->q[5].u8[3] | (c)->q[4].u8[3];
    _t.u8[4] = (c)->q[5].u8[4] | (c)->q[4].u8[4];
    _t.u8[5] = (c)->q[5].u8[5] | (c)->q[4].u8[5];
    _t.u8[6] = (c)->q[5].u8[6] | (c)->q[4].u8[6];
    _t.u8[7] = (c)->q[5].u8[7] | (c)->q[4].u8[7];
    _t.u8[8] = (c)->q[5].u8[8] | (c)->q[4].u8[8];
    _t.u8[9] = (c)->q[5].u8[9] | (c)->q[4].u8[9];
    _t.u8[10] = (c)->q[5].u8[10] | (c)->q[4].u8[10];
    _t.u8[11] = (c)->q[5].u8[11] | (c)->q[4].u8[11];
    _t.u8[12] = (c)->q[5].u8[12] | (c)->q[4].u8[12];
    _t.u8[13] = (c)->q[5].u8[13] | (c)->q[4].u8[13];
    _t.u8[14] = (c)->q[5].u8[14] | (c)->q[4].u8[14];
    _t.u8[15] = (c)->q[5].u8[15] | (c)->q[4].u8[15];
    (c)->q[4] = _t; }
  /* b1fe4: orr v0.16b, v1.16b, v6.16b */
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
    (c)->q[0] = _t; }
  /* b1fe8: orr v2.8b, v2.8b, v3.8b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[2].u8[0] | (c)->q[3].u8[0];
    _t.u8[1] = (c)->q[2].u8[1] | (c)->q[3].u8[1];
    _t.u8[2] = (c)->q[2].u8[2] | (c)->q[3].u8[2];
    _t.u8[3] = (c)->q[2].u8[3] | (c)->q[3].u8[3];
    _t.u8[4] = (c)->q[2].u8[4] | (c)->q[3].u8[4];
    _t.u8[5] = (c)->q[2].u8[5] | (c)->q[3].u8[5];
    _t.u8[6] = (c)->q[2].u8[6] | (c)->q[3].u8[6];
    _t.u8[7] = (c)->q[2].u8[7] | (c)->q[3].u8[7];
    (c)->q[2] = _t; }
  /* b1fec: ext v1.16b, v4.16b, v4.16b, #8 */
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
    (c)->q[1] = _t; }
  /* b1ff0: fmov x11, d0 */
  ARC_X_W(c, 11, ARC_DU_R(c, 0));
  /* b1ff4: fmov x9, d2 */
  ARC_X_W(c, 9, ARC_DU_R(c, 2));
  /* b1ff8: orr v0.8b, v4.8b, v1.8b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[4].u8[0] | (c)->q[1].u8[0];
    _t.u8[1] = (c)->q[4].u8[1] | (c)->q[1].u8[1];
    _t.u8[2] = (c)->q[4].u8[2] | (c)->q[1].u8[2];
    _t.u8[3] = (c)->q[4].u8[3] | (c)->q[1].u8[3];
    _t.u8[4] = (c)->q[4].u8[4] | (c)->q[1].u8[4];
    _t.u8[5] = (c)->q[4].u8[5] | (c)->q[1].u8[5];
    _t.u8[6] = (c)->q[4].u8[6] | (c)->q[1].u8[6];
    _t.u8[7] = (c)->q[4].u8[7] | (c)->q[1].u8[7];
    (c)->q[0] = _t; }
  /* b1ffc: orr x10, x10, x11 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) | ARC_X_R(c, 11)));
  /* b2000: movi v1.2d, #0000000000000000 */
  arc_v_clear(c, 1);
  /* b2004: orr x8, x9, x8, lsl #32 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) | ((uint64_t)(ARC_X_R(c, 8)) << 32)));
  /* b2008: lsr x9, x9, #0x18 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(24)) & 63)));
  /* b200c: orr x10, x10, x8 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) | ARC_X_R(c, 8)));
  /* b2010: lsr x8, x8, #8 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(8)) & 63)));
  /* b2014: fmov x12, d0 */
  ARC_X_W(c, 12, ARC_DU_R(c, 0));
  /* b2018: lsr x11, x10, #0x28 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 10)) >> ((UINT64_C(40)) & 63)));
  /* b201c: and x9, x9, #0xff0000 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) & UINT64_C(16711680)));
  /* b2020: stp q1, q1, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, (c)->q[1].u64[0]);
    arc_st64(_pa + 8, (c)->q[1].u64[1]);
    arc_st64((_pa + 16), (c)->q[1].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[1].u64[1]);
  }
  /* b2024: and x8, x8, #0xff000000 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) & UINT64_C(4278190080)));
  /* b2028: and x11, x11, #0xff00 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) & UINT64_C(65280)));
  /* b202c: orr x8, x9, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) | ARC_X_R(c, 8)));
  /* b2030: orr x11, x12, x11 */
  ARC_X_W(c, 11, (ARC_X_R(c, 12) | ARC_X_R(c, 11)));
  /* b2034: orr x8, x11, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 11) | ARC_X_R(c, 8)));
  /* b2038: orr x8, x8, x10, lsr #56 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) | ((uint64_t)(ARC_X_R(c, 10)) >> 56)));
  /* b203c: fmov d0, x8 */
  arc_du_w(c, 0, (uint64_t)(ARC_X_R(c, 8)));
  /* b2040: bl #0x1428c0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(729156));
  fn1_1428c0(c);
  /* b2044: cbz w0, #0xb20a0 */
  if ((ARC_W_R(c, 0)) == 0) goto L_b20a0;
  /* b2048: ldp x8, x9, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* b204c: sxtw x20, w0 */
  ARC_X_W(c, 20, ((int64_t)(int32_t)(ARC_W_R(c, 0))));
  /* b2050: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* b2054: add x10, x8, x20 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + ARC_X_R(c, 20)));
  /* b2058: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* b205c: b.ls #0xb2084 */
  if (ARC_COND(c, 9)) goto L_b2084;
  /* b2060: lsl x8, x9, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 9)) << ((UINT64_C(1)) & 63)));
  /* b2064: add x9, x10, #0x3e0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 10) + UINT64_C(992)));
  /* b2068: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* b206c: csel x1, x8, x9, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* b2070: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b2074: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(729208));
  fn1_142878(c);
  /* b2078: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b207c: cbz x0, #0xb20b4 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b20b4;
  /* b2080: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
L_b2084:;
  /* b2084: add x0, x0, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* b2088: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* b208c: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* b2090: bl #0x1449d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(729236));
  fn1_1449d8(c);
  /* b2094: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b2098: add x8, x8, x20 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + ARC_X_R(c, 20)));
  /* b209c: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
L_b20a0:;
  /* b20a0: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* b20a4: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b20a8: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* b20ac: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* b20b0: ret  */
  return;
L_b20b4:;
  /* b20b4: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(729272));
  fn1_1427b8(c);
}

void fn1_b6200(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038673920));
  /* b6200: bti c */
  /* bti: no architectural effect here */
  /* b6204: add x0, x0, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(16)));
  /* b6208: b #0xafa48 */
  fn1_afa48(c); return;
}

void fn1_b8570(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038682992));
  /* b8570: bti c */
  /* bti: no architectural effect here */
  /* b8574: mov w1, #0x20 */
  ARC_W_W(c, 1, UINT64_C(32));
  /* b8578: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_bbcb8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038697144));
  /* bbcb8: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* bbcbc: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* bbcc0: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* bbcc4: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* bbcc8: ldp x9, x10, [x1, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 1) + INT64_C(8));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* bbccc: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* bbcd0: ldr x8, [x1] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 1)));
  /* bbcd4: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* bbcd8: add x11, x9, #0xd */
  ARC_X_W(c, 11, (ARC_X_R(c, 9) + UINT64_C(13)));
  /* bbcdc: cmp x11, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 10));
  /* bbce0: b.ls #0xbbd10 */
  if (ARC_COND(c, 9)) goto L_bbd10;
  /* bbce4: lsl x10, x10, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* bbce8: add x9, x9, #0x3ed */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(1005)));
  /* bbcec: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* bbcf0: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* bbcf4: csel x1, x10, x9, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* bbcf8: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* bbcfc: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(769280));
  fn1_142878(c);
  /* bbd00: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* bbd04: cbz x0, #0xbbdd0 */
  if ((ARC_X_R(c, 0)) == 0) goto L_bbdd0;
  /* bbd08: ldr x9, [x19, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* bbd0c: mov x8, x0 */
  ARC_X_W(c, 8, ARC_X_R(c, 0));
L_bbd10:;
  /* bbd10: adrp x10, #0x52000 */
  ARC_X_W(c, 10, (arc_image_bases[1] + UINT64_C(335872)));
  /* bbd14: add x10, x10, #0x15a */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(346)));
  /* bbd18: add x8, x8, x9 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + ARC_X_R(c, 9)));
  /* bbd1c: ldr x11, [x10] */
  ARC_X_W(c, 11, arc_ld64(ARC_X_R(c, 10)));
  /* bbd20: ldur x9, [x10, #5] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 10) + INT64_C(5))));
  /* bbd24: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* bbd28: str x11, [x8] */
  arc_st64(ARC_X_R(c, 8), ARC_X_R(c, 11));
  /* bbd2c: stur x9, [x8, #5] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(5)), ARC_X_R(c, 9));
  /* bbd30: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* bbd34: ldr x20, [x20, #0x10] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 20) + INT64_C(16))));
  /* bbd38: add x8, x8, #0xd */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(13)));
  /* bbd3c: ldr x9, [x20] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 20)));
  /* bbd40: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* bbd44: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
  /* bbd48: ldr x8, [x9, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(32))));
  /* bbd4c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(769360));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* bbd50: ldurh w8, [x20, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 20) + INT64_C(9))));
  /* bbd54: and w8, w8, #0xc0 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(192)));
  /* bbd58: cmp w8, #0x40 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(64));
  /* bbd5c: b.eq #0xbbd74 */
  if (ARC_COND(c, 0)) goto L_bbd74;
  /* bbd60: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* bbd64: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* bbd68: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* bbd6c: ldr x8, [x8, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* bbd70: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(769396));
  arc_dispatch(c, ARC_X_R(c, 8));
L_bbd74:;
  /* bbd74: ldp x8, x9, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* bbd78: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* bbd7c: add x10, x8, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* bbd80: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* bbd84: b.ls #0xbbdac */
  if (ARC_COND(c, 9)) goto L_bbdac;
  /* bbd88: lsl x9, x9, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) << ((UINT64_C(1)) & 63)));
  /* bbd8c: add x8, x8, #0x3e1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(993)));
  /* bbd90: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* bbd94: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* bbd98: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* bbd9c: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(769440));
  fn1_142878(c);
  /* bbda0: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* bbda4: cbz x0, #0xbbdd4 */
  if ((ARC_X_R(c, 0)) == 0) goto L_bbdd4;
  /* bbda8: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
L_bbdac:;
  /* bbdac: mov w9, #0x5d */
  ARC_W_W(c, 9, UINT64_C(93));
  /* bbdb0: strb w9, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
  /* bbdb4: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* bbdb8: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* bbdbc: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
  /* bbdc0: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* bbdc4: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* bbdc8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* bbdcc: ret  */
  return;
L_bbdd0:;
  /* bbdd0: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(769492));
  fn1_1427b8(c);
L_bbdd4:;
  /* bbdd4: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(769496));
  fn1_1427b8(c);
}

void fn1_be320(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038706976));
  /* be320: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* be324: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* be328: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* be32c: nop  */
  /* nop: no architectural effect here */
  /* be330: adr x0, #0x156bb8 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1403832)));
  /* be334: bl #0x144ac8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(779064));
  fn1_144ac8(c);
  /* be338: ldr w0, [x0, #8] */
  ARC_W_W(c, 0, arc_ld32((ARC_X_R(c, 0) + INT64_C(8))));
  /* be33c: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* be340: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* be344: ret  */
  return;
}

void fn1_d2f04(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038791940));
  /* d2f04: bti c */
  /* bti: no architectural effect here */
  /* d2f08: cmp x0, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 1));
  /* d2f0c: b.eq #0xd3784 */
  if (ARC_COND(c, 0)) goto L_d3784;
  /* d2f10: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* d2f14: str d8, [sp, #-0x70]! */
  arc_st64(((c)->sp + INT64_C(-112)), (c)->q[8].u64[0]);
  (c)->sp = (c)->sp + INT64_C(-112);
  /* d2f18: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* d2f1c: stp x28, x27, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* d2f20: stp x26, x25, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* d2f24: stp x24, x23, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* d2f28: stp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* d2f2c: stp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* d2f30: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* d2f34: sub sp, sp, #0x330 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(816)));
  /* d2f38: ldrb w22, [x0] */
  ARC_W_W(c, 22, arc_ld8(ARC_X_R(c, 0)));
  /* d2f3c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* d2f40: cmp w22, #0x2d */
  (void)arc_sub32(c, ARC_W_R(c, 22), UINT64_C(45));
  /* d2f44: mov w9, w22 */
  ARC_W_W(c, 9, ARC_W_R(c, 22));
  /* d2f48: b.ne #0xd2f5c */
  if (ARC_COND(c, 1)) goto L_d2f5c;
  /* d2f4c: add x20, x0, #1 */
  ARC_X_W(c, 20, (ARC_X_R(c, 0) + UINT64_C(1)));
  /* d2f50: cmp x20, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 1));
  /* d2f54: b.eq #0xd375c */
  if (ARC_COND(c, 0)) goto L_d375c;
  /* d2f58: ldrb w9, [x20] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 20)));
L_d2f5c:;
  /* d2f5c: sub w10, w9, #0x5b */
  ARC_W_W(c, 10, (ARC_W_R(c, 9) - UINT64_C(91)));
  /* d2f60: orr w11, w9, #0x20 */
  ARC_W_W(c, 11, (ARC_W_R(c, 9) | UINT64_C(32)));
  /* d2f64: cmn w10, #0x1a */
  (void)arc_add32(c, ARC_W_R(c, 10), UINT64_C(26), 0);
  /* d2f68: csel w9, w9, w11, lo */
  ARC_W_W(c, 9, (ARC_COND(c, 3) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 11)));
  /* d2f6c: cmp w9, #0x6e */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(110));
  /* d2f70: b.eq #0xd3078 */
  if (ARC_COND(c, 0)) goto L_d3078;
  /* d2f74: cmp w9, #0x69 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(105));
  /* d2f78: b.ne #0xd312c */
  if (ARC_COND(c, 1)) goto L_d312c;
  /* d2f7c: add x9, x20, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 20) + UINT64_C(1)));
  /* d2f80: sub x10, x1, x9 */
  ARC_X_W(c, 10, (ARC_X_R(c, 1) - ARC_X_R(c, 9)));
  /* d2f84: cmp x10, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 10), UINT64_C(1));
  /* d2f88: b.le #0xd375c */
  if (ARC_COND(c, 13)) goto L_d375c;
  /* d2f8c: ldrb w9, [x9] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 9)));
  /* d2f90: sub w10, w9, #0x5b */
  ARC_W_W(c, 10, (ARC_W_R(c, 9) - UINT64_C(91)));
  /* d2f94: orr w11, w9, #0x20 */
  ARC_W_W(c, 11, (ARC_W_R(c, 9) | UINT64_C(32)));
  /* d2f98: cmn w10, #0x1a */
  (void)arc_add32(c, ARC_W_R(c, 10), UINT64_C(26), 0);
  /* d2f9c: csel w9, w9, w11, lo */
  ARC_W_W(c, 9, (ARC_COND(c, 3) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 11)));
  /* d2fa0: cmp w9, #0x6e */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(110));
  /* d2fa4: b.ne #0xd375c */
  if (ARC_COND(c, 1)) goto L_d375c;
  /* d2fa8: ldrb w9, [x20, #2] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 20) + INT64_C(2))));
  /* d2fac: sub w10, w9, #0x5b */
  ARC_W_W(c, 10, (ARC_W_R(c, 9) - UINT64_C(91)));
  /* d2fb0: orr w11, w9, #0x20 */
  ARC_W_W(c, 11, (ARC_W_R(c, 9) | UINT64_C(32)));
  /* d2fb4: cmn w10, #0x1a */
  (void)arc_add32(c, ARC_W_R(c, 10), UINT64_C(26), 0);
  /* d2fb8: csel w9, w9, w11, lo */
  ARC_W_W(c, 9, (ARC_COND(c, 3) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 11)));
  /* d2fbc: cmp w9, #0x66 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(102));
  /* d2fc0: b.ne #0xd375c */
  if (ARC_COND(c, 1)) goto L_d375c;
  /* d2fc4: add x9, x20, #3 */
  ARC_X_W(c, 9, (ARC_X_R(c, 20) + UINT64_C(3)));
  /* d2fc8: sub x10, x1, x9 */
  ARC_X_W(c, 10, (ARC_X_R(c, 1) - ARC_X_R(c, 9)));
  /* d2fcc: cmp x10, #5 */
  (void)arc_sub64(c, ARC_X_R(c, 10), UINT64_C(5));
  /* d2fd0: b.lt #0xd3064 */
  if (ARC_COND(c, 11)) goto L_d3064;
  /* d2fd4: ldrb w10, [x9] */
  ARC_W_W(c, 10, arc_ld8(ARC_X_R(c, 9)));
  /* d2fd8: sub w11, w10, #0x5b */
  ARC_W_W(c, 11, (ARC_W_R(c, 10) - UINT64_C(91)));
  /* d2fdc: orr w12, w10, #0x20 */
  ARC_W_W(c, 12, (ARC_W_R(c, 10) | UINT64_C(32)));
  /* d2fe0: cmn w11, #0x1a */
  (void)arc_add32(c, ARC_W_R(c, 11), UINT64_C(26), 0);
  /* d2fe4: csel w10, w10, w12, lo */
  ARC_W_W(c, 10, (ARC_COND(c, 3) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 12)));
  /* d2fe8: cmp w10, #0x69 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(105));
  /* d2fec: b.ne #0xd3064 */
  if (ARC_COND(c, 1)) goto L_d3064;
  /* d2ff0: ldrb w10, [x20, #4] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 20) + INT64_C(4))));
  /* d2ff4: sub w11, w10, #0x5b */
  ARC_W_W(c, 11, (ARC_W_R(c, 10) - UINT64_C(91)));
  /* d2ff8: orr w12, w10, #0x20 */
  ARC_W_W(c, 12, (ARC_W_R(c, 10) | UINT64_C(32)));
  /* d2ffc: cmn w11, #0x1a */
  (void)arc_add32(c, ARC_W_R(c, 11), UINT64_C(26), 0);
  /* d3000: csel w10, w10, w12, lo */
  ARC_W_W(c, 10, (ARC_COND(c, 3) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 12)));
  /* d3004: cmp w10, #0x6e */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(110));
  /* d3008: b.ne #0xd3064 */
  if (ARC_COND(c, 1)) goto L_d3064;
  /* d300c: ldrb w10, [x20, #5] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 20) + INT64_C(5))));
  /* d3010: sub w11, w10, #0x5b */
  ARC_W_W(c, 11, (ARC_W_R(c, 10) - UINT64_C(91)));
  /* d3014: orr w12, w10, #0x20 */
  ARC_W_W(c, 12, (ARC_W_R(c, 10) | UINT64_C(32)));
  /* d3018: cmn w11, #0x1a */
  (void)arc_add32(c, ARC_W_R(c, 11), UINT64_C(26), 0);
  /* d301c: csel w10, w10, w12, lo */
  ARC_W_W(c, 10, (ARC_COND(c, 3) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 12)));
  /* d3020: cmp w10, #0x69 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(105));
  /* d3024: b.ne #0xd3064 */
  if (ARC_COND(c, 1)) goto L_d3064;
  /* d3028: ldrb w10, [x20, #6] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 20) + INT64_C(6))));
  /* d302c: sub w11, w10, #0x5b */
  ARC_W_W(c, 11, (ARC_W_R(c, 10) - UINT64_C(91)));
  /* d3030: orr w12, w10, #0x20 */
  ARC_W_W(c, 12, (ARC_W_R(c, 10) | UINT64_C(32)));
  /* d3034: cmn w11, #0x1a */
  (void)arc_add32(c, ARC_W_R(c, 11), UINT64_C(26), 0);
  /* d3038: csel w10, w10, w12, lo */
  ARC_W_W(c, 10, (ARC_COND(c, 3) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 12)));
  /* d303c: cmp w10, #0x74 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(116));
  /* d3040: b.ne #0xd3064 */
  if (ARC_COND(c, 1)) goto L_d3064;
  /* d3044: ldrb w10, [x20, #7] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 20) + INT64_C(7))));
  /* d3048: sub w11, w10, #0x5b */
  ARC_W_W(c, 11, (ARC_W_R(c, 10) - UINT64_C(91)));
  /* d304c: orr w12, w10, #0x20 */
  ARC_W_W(c, 12, (ARC_W_R(c, 10) | UINT64_C(32)));
  /* d3050: cmn w11, #0x1a */
  (void)arc_add32(c, ARC_W_R(c, 11), UINT64_C(26), 0);
  /* d3054: add x11, x20, #8 */
  ARC_X_W(c, 11, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* d3058: csel w10, w10, w12, lo */
  ARC_W_W(c, 10, (ARC_COND(c, 3) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 12)));
  /* d305c: cmp w10, #0x79 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(121));
  /* d3060: csel x9, x11, x9, eq */
  ARC_X_W(c, 9, (ARC_COND(c, 0) ? (ARC_X_R(c, 11)) : ARC_X_R(c, 9)));
L_d3064:;
  /* d3064: cmp w22, #0x2d */
  (void)arc_sub32(c, ARC_W_R(c, 22), UINT64_C(45));
  /* d3068: sub x9, x9, x0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - ARC_X_R(c, 0)));
  /* d306c: b.ne #0xd329c */
  if (ARC_COND(c, 1)) goto L_d329c;
  /* d3070: mov w10, #-0x800000 */
  ARC_W_W(c, 10, UINT64_C(18446744073701163008));
  /* d3074: b #0xd336c */
  goto L_d336c;
L_d3078:;
  /* d3078: add x9, x20, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 20) + UINT64_C(1)));
  /* d307c: sub x10, x1, x9 */
  ARC_X_W(c, 10, (ARC_X_R(c, 1) - ARC_X_R(c, 9)));
  /* d3080: cmp x10, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 10), UINT64_C(1));
  /* d3084: b.le #0xd375c */
  if (ARC_COND(c, 13)) goto L_d375c;
  /* d3088: ldrb w9, [x9] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 9)));
  /* d308c: sub w10, w9, #0x5b */
  ARC_W_W(c, 10, (ARC_W_R(c, 9) - UINT64_C(91)));
  /* d3090: orr w11, w9, #0x20 */
  ARC_W_W(c, 11, (ARC_W_R(c, 9) | UINT64_C(32)));
  /* d3094: cmn w10, #0x1a */
  (void)arc_add32(c, ARC_W_R(c, 10), UINT64_C(26), 0);
  /* d3098: csel w9, w9, w11, lo */
  ARC_W_W(c, 9, (ARC_COND(c, 3) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 11)));
  /* d309c: cmp w9, #0x61 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(97));
  /* d30a0: b.ne #0xd375c */
  if (ARC_COND(c, 1)) goto L_d375c;
  /* d30a4: ldrb w9, [x20, #2] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 20) + INT64_C(2))));
  /* d30a8: sub w10, w9, #0x5b */
  ARC_W_W(c, 10, (ARC_W_R(c, 9) - UINT64_C(91)));
  /* d30ac: orr w11, w9, #0x20 */
  ARC_W_W(c, 11, (ARC_W_R(c, 9) | UINT64_C(32)));
  /* d30b0: cmn w10, #0x1a */
  (void)arc_add32(c, ARC_W_R(c, 10), UINT64_C(26), 0);
  /* d30b4: csel w9, w9, w11, lo */
  ARC_W_W(c, 9, (ARC_COND(c, 3) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 11)));
  /* d30b8: cmp w9, #0x6e */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(110));
  /* d30bc: b.ne #0xd375c */
  if (ARC_COND(c, 1)) goto L_d375c;
  /* d30c0: add x9, x20, #3 */
  ARC_X_W(c, 9, (ARC_X_R(c, 20) + UINT64_C(3)));
  /* d30c4: sub x10, x1, x9 */
  ARC_X_W(c, 10, (ARC_X_R(c, 1) - ARC_X_R(c, 9)));
  /* d30c8: cmp x10, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 10), UINT64_C(2));
  /* d30cc: b.lt #0xd3354 */
  if (ARC_COND(c, 11)) goto L_d3354;
  /* d30d0: ldrb w10, [x9] */
  ARC_W_W(c, 10, arc_ld8(ARC_X_R(c, 9)));
  /* d30d4: cmp w10, #0x28 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(40));
  /* d30d8: b.ne #0xd3354 */
  if (ARC_COND(c, 1)) goto L_d3354;
  /* d30dc: add x10, x20, #5 */
  ARC_X_W(c, 10, (ARC_X_R(c, 20) + UINT64_C(5)));
  /* d30e0: mov w11, #1 */
  ARC_W_W(c, 11, UINT64_C(1));
  /* d30e4: mov x12, x10 */
  ARC_X_W(c, 12, ARC_X_R(c, 10));
L_d30e8:;
  /* d30e8: ldurb w13, [x10, #-1] */
  ARC_W_W(c, 13, arc_ld8((ARC_X_R(c, 10) + INT64_C(-1))));
  /* d30ec: cmp w13, #0x5f */
  (void)arc_sub32(c, ARC_W_R(c, 13), UINT64_C(95));
  /* d30f0: b.eq #0xd3114 */
  if (ARC_COND(c, 0)) goto L_d3114;
  /* d30f4: cmp w13, #0x29 */
  (void)arc_sub32(c, ARC_W_R(c, 13), UINT64_C(41));
  /* d30f8: b.eq #0xd3350 */
  if (ARC_COND(c, 0)) goto L_d3350;
  /* d30fc: orr w14, w13, #0x20 */
  ARC_W_W(c, 14, (ARC_W_R(c, 13) | UINT64_C(32)));
  /* d3100: sub w13, w13, #0x3a */
  ARC_W_W(c, 13, (ARC_W_R(c, 13) - UINT64_C(58)));
  /* d3104: sub w14, w14, #0x7b */
  ARC_W_W(c, 14, (ARC_W_R(c, 14) - UINT64_C(123)));
  /* d3108: cmn w14, #0x1a */
  (void)arc_add32(c, ARC_W_R(c, 14), UINT64_C(26), 0);
  /* d310c: ccmn w13, #0xa, #2, lo */
  if (ARC_COND(c, 3)) { (void)arc_add32(c, ARC_W_R(c, 13), UINT64_C(10), 0); }
  else { (c)->nf = 0; (c)->zf = 0;
          (c)->cf = 1; (c)->vf = 0; }
  /* d3110: b.lo #0xd3354 */
  if (ARC_COND(c, 3)) goto L_d3354;
L_d3114:;
  /* d3114: cmp x10, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 1));
  /* d3118: b.eq #0xd3354 */
  if (ARC_COND(c, 0)) goto L_d3354;
  /* d311c: add x11, x11, #1 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) + UINT64_C(1)));
  /* d3120: add x12, x12, #1 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) + UINT64_C(1)));
  /* d3124: add x10, x10, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(1)));
  /* d3128: b #0xd30e8 */
  goto L_d30e8;
L_d312c:;
  /* d312c: cmp w2, #4 */
  (void)arc_sub32(c, ARC_W_R(c, 2), UINT64_C(4));
  /* d3130: mov x11, x1 */
  ARC_X_W(c, 11, ARC_X_R(c, 1));
  /* d3134: sub x1, x1, x0 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) - ARC_X_R(c, 0)));
  /* d3138: sub x19, x20, x0 */
  ARC_X_W(c, 19, (ARC_X_R(c, 20) - ARC_X_R(c, 0)));
  /* d313c: b.ne #0xd3200 */
  if (ARC_COND(c, 1)) goto L_d3200;
  /* d3140: movi d0, #0000000000000000 */
  arc_v_clear(c, 0);
  /* d3144: cmp x19, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 1));
  /* d3148: b.hs #0xd3304 */
  if (ARC_COND(c, 2)) goto L_d3304;
  /* d314c: mov w24, wzr */
  ARC_W_W(c, 24, ARC_W_R(c, 31));
  /* d3150: mov w21, wzr */
  ARC_W_W(c, 21, ARC_W_R(c, 31));
  /* d3154: mov w12, wzr */
  ARC_W_W(c, 12, ARC_W_R(c, 31));
  /* d3158: mov w10, wzr */
  ARC_W_W(c, 10, ARC_W_R(c, 31));
  /* d315c: mov w23, wzr */
  ARC_W_W(c, 23, ARC_W_R(c, 31));
  /* d3160: sub x9, x11, x20 */
  ARC_X_W(c, 9, (ARC_X_R(c, 11) - ARC_X_R(c, 20)));
  /* d3164: mov w11, #0xffffffe */
  ARC_W_W(c, 11, UINT64_C(268435454));
  /* d3168: b #0xd3190 */
  goto L_d3190;
L_d316c:;
  /* d316c: cmp w12, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 12), UINT64_C(0));
  /* d3170: add w12, w24, #4 */
  ARC_W_W(c, 12, (ARC_W_R(c, 24) + UINT64_C(4)));
  /* d3174: csinc w21, w21, wzr, eq */
  ARC_W_W(c, 21, (ARC_COND(c, 0) ? (ARC_W_R(c, 21)) : ((ARC_W_R(c, 31)) + 1)));
  /* d3178: tst w10, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 10) & UINT64_C(1)));
  /* d317c: csel w24, w24, w12, ne */
  ARC_W_W(c, 24, (ARC_COND(c, 1) ? (ARC_W_R(c, 24)) : ARC_W_R(c, 12)));
L_d3180:;
  /* d3180: mov w12, #1 */
  ARC_W_W(c, 12, UINT64_C(1));
L_d3184:;
  /* d3184: subs x9, x9, #1 */
  ARC_X_W(c, 9, arc_sub64(c, ARC_X_R(c, 9), UINT64_C(1)));
  /* d3188: add x19, x19, #1 */
  ARC_X_W(c, 19, (ARC_X_R(c, 19) + UINT64_C(1)));
  /* d318c: b.eq #0xd32a4 */
  if (ARC_COND(c, 0)) goto L_d32a4;
L_d3190:;
  /* d3190: ldrb w14, [x0, x19] */
  ARC_W_W(c, 14, arc_ld8((ARC_X_R(c, 0) + ARC_X_R(c, 19))));
  /* d3194: sub w13, w14, #0x30 */
  ARC_W_W(c, 13, (ARC_W_R(c, 14) - UINT64_C(48)));
  /* d3198: orr w15, w14, #0x20 */
  ARC_W_W(c, 15, (ARC_W_R(c, 14) | UINT64_C(32)));
  /* d319c: sub w16, w15, #0x67 */
  ARC_W_W(c, 16, (ARC_W_R(c, 15) - UINT64_C(103)));
  /* d31a0: cmp w13, #0xa */
  (void)arc_sub32(c, ARC_W_R(c, 13), UINT64_C(10));
  /* d31a4: ccmn w16, #6, #2, hs */
  if (ARC_COND(c, 2)) { (void)arc_add32(c, ARC_W_R(c, 16), UINT64_C(6), 0); }
  else { (c)->nf = 0; (c)->zf = 0;
          (c)->cf = 1; (c)->vf = 0; }
  /* d31a8: b.lo #0xd31e8 */
  if (ARC_COND(c, 3)) goto L_d31e8;
  /* d31ac: sub w12, w14, #0x5b */
  ARC_W_W(c, 12, (ARC_W_R(c, 14) - UINT64_C(91)));
  /* d31b0: cmn w12, #0x1a */
  (void)arc_add32(c, ARC_W_R(c, 12), UINT64_C(26), 0);
  /* d31b4: csel w12, w14, w15, lo */
  ARC_W_W(c, 12, (ARC_COND(c, 3) ? (ARC_W_R(c, 14)) : ARC_W_R(c, 15)));
  /* d31b8: sub w12, w12, #0x61 */
  ARC_W_W(c, 12, (ARC_W_R(c, 12) - UINT64_C(97)));
  /* d31bc: and w12, w12, #0xff */
  ARC_W_W(c, 12, (ARC_W_R(c, 12) & UINT64_C(255)));
  /* d31c0: add w14, w12, #0xa */
  ARC_W_W(c, 14, (ARC_W_R(c, 12) + UINT64_C(10)));
  /* d31c4: cmp w12, #6 */
  (void)arc_sub32(c, ARC_W_R(c, 12), UINT64_C(6));
  /* d31c8: csel w12, w14, w13, lo */
  ARC_W_W(c, 12, (ARC_COND(c, 3) ? (ARC_W_R(c, 14)) : ARC_W_R(c, 13)));
  /* d31cc: cmp w23, w11 */
  (void)arc_sub32(c, ARC_W_R(c, 23), ARC_W_R(c, 11));
  /* d31d0: b.hi #0xd316c */
  if (ARC_COND(c, 8)) goto L_d316c;
  /* d31d4: add w23, w12, w23, lsl #4 */
  ARC_W_W(c, 23, (ARC_W_R(c, 12) + ((uint32_t)(ARC_W_R(c, 23)) << 4)));
  /* d31d8: sub w12, w24, #4 */
  ARC_W_W(c, 12, (ARC_W_R(c, 24) - UINT64_C(4)));
  /* d31dc: tst w10, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 10) & UINT64_C(1)));
  /* d31e0: csel w24, w12, w24, ne */
  ARC_W_W(c, 24, (ARC_COND(c, 1) ? (ARC_W_R(c, 12)) : ARC_W_R(c, 24)));
  /* d31e4: b #0xd3180 */
  goto L_d3180;
L_d31e8:;
  /* d31e8: cmp w14, #0x2e */
  (void)arc_sub32(c, ARC_W_R(c, 14), UINT64_C(46));
  /* d31ec: cset w13, ne */
  ARC_W_W(c, 13, (ARC_COND(c, 1) ? 1 : 0));
  /* d31f0: orr w10, w10, w13 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) | ARC_W_R(c, 13)));
  /* d31f4: tbnz w10, #0, #0xd32a8 */
  if (((ARC_W_R(c, 10)) >> 0 & 1) != 0) goto L_d32a8;
  /* d31f8: mov w10, #1 */
  ARC_W_W(c, 10, UINT64_C(1));
  /* d31fc: b #0xd3184 */
  goto L_d3184;
L_d3200:;
  /* d3200: movi d8, #0000000000000000 */
  arc_v_clear(c, 8);
  /* d3204: cmp x19, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 1));
  /* d3208: b.ge #0xd333c */
  if (ARC_COND(c, 10)) goto L_d333c;
  /* d320c: sub x21, x11, x20 */
  ARC_X_W(c, 21, (ARC_X_R(c, 11) - ARC_X_R(c, 20)));
  /* d3210: mov w11, #0x9998 */
  ARC_W_W(c, 11, UINT64_C(39320));
  /* d3214: mov w25, wzr */
  ARC_W_W(c, 25, ARC_W_R(c, 31));
  /* d3218: mov w24, wzr */
  ARC_W_W(c, 24, ARC_W_R(c, 31));
  /* d321c: mov w9, wzr */
  ARC_W_W(c, 9, ARC_W_R(c, 31));
  /* d3220: mov w10, wzr */
  ARC_W_W(c, 10, ARC_W_R(c, 31));
  /* d3224: mov w23, wzr */
  ARC_W_W(c, 23, ARC_W_R(c, 31));
  /* d3228: movk w11, #0x1999, lsl #16 */
  ARC_W_W(c, 11, ((ARC_W_R(c, 11) & UINT64_C(18446744069414649855)) | UINT64_C(429457408)));
  /* d322c: mov w12, #0xa */
  ARC_W_W(c, 12, UINT64_C(10));
  /* d3230: mov x13, x21 */
  ARC_X_W(c, 13, ARC_X_R(c, 21));
  /* d3234: b #0xd3258 */
  goto L_d3258;
L_d3238:;
  /* d3238: mov w9, #1 */
  ARC_W_W(c, 9, UINT64_C(1));
  /* d323c: cmp w14, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 14), UINT64_C(0));
  /* d3240: bic w14, w9, w10 */
  ARC_W_W(c, 14, (ARC_W_R(c, 9) & (~ARC_W_R(c, 10))));
  /* d3244: csinc w24, w24, wzr, eq */
  ARC_W_W(c, 24, (ARC_COND(c, 0) ? (ARC_W_R(c, 24)) : ((ARC_W_R(c, 31)) + 1)));
  /* d3248: add w25, w25, w14 */
  ARC_W_W(c, 25, (ARC_W_R(c, 25) + ARC_W_R(c, 14)));
L_d324c:;
  /* d324c: subs x13, x13, #1 */
  ARC_X_W(c, 13, arc_sub64(c, ARC_X_R(c, 13), UINT64_C(1)));
  /* d3250: add x19, x19, #1 */
  ARC_X_W(c, 19, (ARC_X_R(c, 19) + UINT64_C(1)));
  /* d3254: b.eq #0xd3310 */
  if (ARC_COND(c, 0)) goto L_d3310;
L_d3258:;
  /* d3258: ldrb w15, [x0, x19] */
  ARC_W_W(c, 15, arc_ld8((ARC_X_R(c, 0) + ARC_X_R(c, 19))));
  /* d325c: sub w14, w15, #0x30 */
  ARC_W_W(c, 14, (ARC_W_R(c, 15) - UINT64_C(48)));
  /* d3260: cmp w14, #9 */
  (void)arc_sub32(c, ARC_W_R(c, 14), UINT64_C(9));
  /* d3264: b.ls #0xd3280 */
  if (ARC_COND(c, 9)) goto L_d3280;
  /* d3268: cmp w15, #0x2e */
  (void)arc_sub32(c, ARC_W_R(c, 15), UINT64_C(46));
  /* d326c: cset w14, ne */
  ARC_W_W(c, 14, (ARC_COND(c, 1) ? 1 : 0));
  /* d3270: orr w10, w10, w14 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) | ARC_W_R(c, 14)));
  /* d3274: tbnz w10, #0, #0xd3314 */
  if (((ARC_W_R(c, 10)) >> 0 & 1) != 0) goto L_d3314;
  /* d3278: mov w10, #1 */
  ARC_W_W(c, 10, UINT64_C(1));
  /* d327c: b #0xd324c */
  goto L_d324c;
L_d3280:;
  /* d3280: cmp w23, w11 */
  (void)arc_sub32(c, ARC_W_R(c, 23), ARC_W_R(c, 11));
  /* d3284: b.hi #0xd3238 */
  if (ARC_COND(c, 8)) goto L_d3238;
  /* d3288: and w9, w10, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 10) & UINT64_C(1)));
  /* d328c: madd w23, w23, w12, w14 */
  ARC_W_W(c, 23, ((uint32_t)(ARC_W_R(c, 14)) + ((uint32_t)(ARC_W_R(c, 23)) * (uint32_t)(ARC_W_R(c, 12)))));
  /* d3290: sub w25, w25, w9 */
  ARC_W_W(c, 25, (ARC_W_R(c, 25) - ARC_W_R(c, 9)));
  /* d3294: mov w9, #1 */
  ARC_W_W(c, 9, UINT64_C(1));
  /* d3298: b #0xd324c */
  goto L_d324c;
L_d329c:;
  /* d329c: mov w10, #0x7f800000 */
  ARC_W_W(c, 10, UINT64_C(2139095040));
  /* d32a0: b #0xd336c */
  goto L_d336c;
L_d32a4:;
  /* d32a4: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
L_d32a8:;
  /* d32a8: tbz w12, #0, #0xd3304 */
  if (((ARC_W_R(c, 12)) >> 0 & 1) == 0) goto L_d3304;
  /* d32ac: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* d32b0: mov w3, #0x70 */
  ARC_W_W(c, 3, UINT64_C(112));
  /* d32b4: mov x20, x8 */
  ARC_X_W(c, 20, ARC_X_R(c, 8));
  /* d32b8: bl #0xd2cb4 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(864956));
  fn1_d2cb4(c);
  /* d32bc: cbz w23, #0xd33b0 */
  if ((ARC_W_R(c, 23)) == 0) goto L_d33b0;
  /* d32c0: sxtw x8, w1 */
  ARC_X_W(c, 8, ((int64_t)(int32_t)(ARC_W_R(c, 1))));
  /* d32c4: mov x9, #-0xff */
  ARC_X_W(c, 9, UINT64_C(18446744073709551361));
  /* d32c8: clz w10, w23 */
  ARC_W_W(c, 10, arc_clz32(ARC_W_R(c, 23)));
  /* d32cc: add x8, x8, w24, sxtw */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + ((uint64_t)(int64_t)(int32_t)(ARC_W_R(c, 24)))));
  /* d32d0: cmn x8, #0xff */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(255), 0);
  /* d32d4: csel x8, x8, x9, gt */
  ARC_X_W(c, 8, (ARC_COND(c, 12) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* d32d8: mov w9, #0xff */
  ARC_W_W(c, 9, UINT64_C(255));
  /* d32dc: cmp x8, #0xff */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(255));
  /* d32e0: csel x8, x8, x9, lt */
  ARC_X_W(c, 8, (ARC_COND(c, 11) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* d32e4: sub w11, w8, w10 */
  ARC_W_W(c, 11, (ARC_W_R(c, 8) - ARC_W_R(c, 10)));
  /* d32e8: cmp w11, #0x60 */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(96));
  /* d32ec: b.le #0xd33c4 */
  if (ARC_COND(c, 13)) goto L_d33c4;
  /* d32f0: mov x10, xzr */
  ARC_X_W(c, 10, ARC_X_R(c, 31));
  /* d32f4: mov x11, #0xff00000000 */
  ARC_X_W(c, 11, UINT64_C(1095216660480));
  /* d32f8: mov w9, #0x22 */
  ARC_W_W(c, 9, UINT64_C(34));
  /* d32fc: mov x8, x20 */
  ARC_X_W(c, 8, ARC_X_R(c, 20));
  /* d3300: b #0xd36f8 */
  goto L_d36f8;
L_d3304:;
  /* d3304: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
  /* d3308: mov w9, #0x16 */
  ARC_W_W(c, 9, UINT64_C(22));
  /* d330c: b #0xd3728 */
  goto L_d3728;
L_d3310:;
  /* d3310: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
L_d3314:;
  /* d3314: tbz w9, #0, #0xd333c */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_d333c;
  /* d3318: cmp w2, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 2), UINT64_C(2));
  /* d331c: b.ne #0xd337c */
  if (ARC_COND(c, 1)) goto L_d337c;
  /* d3320: cmn w25, #0xff */
  (void)arc_add32(c, ARC_W_R(c, 25), UINT64_C(255), 0);
  /* d3324: mov w9, #-0xff */
  ARC_W_W(c, 9, UINT64_C(18446744073709551361));
  /* d3328: mov w10, #0xff */
  ARC_W_W(c, 10, UINT64_C(255));
  /* d332c: csel w9, w25, w9, gt */
  ARC_W_W(c, 9, (ARC_COND(c, 12) ? (ARC_W_R(c, 25)) : ARC_W_R(c, 9)));
  /* d3330: cmp w9, #0xff */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(255));
  /* d3334: csel w9, w9, w10, lt */
  ARC_W_W(c, 9, (ARC_COND(c, 11) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 10)));
  /* d3338: b #0xd340c */
  goto L_d340c;
L_d333c:;
  /* d333c: mov x19, xzr */
  ARC_X_W(c, 19, ARC_X_R(c, 31));
  /* d3340: mov w9, #0x16 */
  ARC_W_W(c, 9, UINT64_C(22));
L_d3344:;
  /* d3344: str s8, [x8] */
  arc_st32(ARC_X_R(c, 8), (c)->q[8].u32[0]);
  /* d3348: str x19, [x8, #8] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(8)), ARC_X_R(c, 19));
  /* d334c: b #0xd3730 */
  goto L_d3730;
L_d3350:;
  /* d3350: mov x9, x12 */
  ARC_X_W(c, 9, ARC_X_R(c, 12));
L_d3354:;
  /* d3354: cmp w22, #0x2d */
  (void)arc_sub32(c, ARC_W_R(c, 22), UINT64_C(45));
  /* d3358: sub x9, x9, x0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - ARC_X_R(c, 0)));
  /* d335c: b.ne #0xd3368 */
  if (ARC_COND(c, 1)) goto L_d3368;
  /* d3360: mov w10, #-0x400000 */
  ARC_W_W(c, 10, UINT64_C(18446744073705357312));
  /* d3364: b #0xd336c */
  goto L_d336c;
L_d3368:;
  /* d3368: mov w10, #0x7fc00000 */
  ARC_W_W(c, 10, UINT64_C(2143289344));
L_d336c:;
  /* d336c: str x9, [x8, #8] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(8)), ARC_X_R(c, 9));
  /* d3370: str w10, [x8] */
  arc_st32(ARC_X_R(c, 8), ARC_W_R(c, 10));
  /* d3374: str wzr, [x8, #0x10] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(16)), ARC_W_R(c, 31));
  /* d3378: b #0xd3734 */
  goto L_d3734;
L_d337c:;
  /* d337c: mov w27, w2 */
  ARC_W_W(c, 27, ARC_W_R(c, 2));
  /* d3380: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* d3384: mov w3, #0x65 */
  ARC_W_W(c, 3, UINT64_C(101));
  /* d3388: mov x26, x8 */
  ARC_X_W(c, 26, ARC_X_R(c, 8));
  /* d338c: bl #0xd2cb4 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(865168));
  fn1_d2cb4(c);
  /* d3390: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* d3394: cmp w27, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 27), UINT64_C(1));
  /* d3398: b.ne #0xd33e8 */
  if (ARC_COND(c, 1)) goto L_d33e8;
  /* d339c: tbnz x1, #0x20, #0xd33e8 */
  if (((ARC_X_R(c, 1)) >> 32 & 1) != 0) goto L_d33e8;
  /* d33a0: mov x19, xzr */
  ARC_X_W(c, 19, ARC_X_R(c, 31));
  /* d33a4: mov w9, #0x16 */
  ARC_W_W(c, 9, UINT64_C(22));
  /* d33a8: mov x8, x26 */
  ARC_X_W(c, 8, ARC_X_R(c, 26));
  /* d33ac: b #0xd3344 */
  goto L_d3344;
L_d33b0:;
  /* d33b0: mov w11, wzr */
  ARC_W_W(c, 11, ARC_W_R(c, 31));
  /* d33b4: mov w10, wzr */
  ARC_W_W(c, 10, ARC_W_R(c, 31));
  /* d33b8: mov w9, wzr */
  ARC_W_W(c, 9, ARC_W_R(c, 31));
  /* d33bc: mov x8, x20 */
  ARC_X_W(c, 8, ARC_X_R(c, 20));
  /* d33c0: b #0xd3700 */
  goto L_d3700;
L_d33c4:;
  /* d33c4: cmn w11, #0x9e */
  (void)arc_add32(c, ARC_W_R(c, 11), UINT64_C(158), 0);
  /* d33c8: b.gt #0xd347c */
  if (ARC_COND(c, 12)) goto L_d347c;
  /* d33cc: cmn w11, #0xb5 */
  (void)arc_add32(c, ARC_W_R(c, 11), UINT64_C(181), 0);
  /* d33d0: mov x8, x20 */
  ARC_X_W(c, 8, ARC_X_R(c, 20));
  /* d33d4: b.hs #0xd3630 */
  if (ARC_COND(c, 2)) goto L_d3630;
  /* d33d8: mov x11, xzr */
  ARC_X_W(c, 11, ARC_X_R(c, 31));
  /* d33dc: mov x10, xzr */
  ARC_X_W(c, 10, ARC_X_R(c, 31));
  /* d33e0: mov w9, #0x22 */
  ARC_W_W(c, 9, UINT64_C(34));
  /* d33e4: b #0xd36f8 */
  goto L_d36f8;
L_d33e8:;
  /* d33e8: sxtw x8, w1 */
  ARC_X_W(c, 8, ((int64_t)(int32_t)(ARC_W_R(c, 1))));
  /* d33ec: mov x9, #-0xff */
  ARC_X_W(c, 9, UINT64_C(18446744073709551361));
  /* d33f0: add x8, x8, w25, sxtw */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + ((uint64_t)(int64_t)(int32_t)(ARC_W_R(c, 25)))));
  /* d33f4: cmn x8, #0xff */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(255), 0);
  /* d33f8: csel x8, x8, x9, gt */
  ARC_X_W(c, 8, (ARC_COND(c, 12) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* d33fc: mov w9, #0xff */
  ARC_W_W(c, 9, UINT64_C(255));
  /* d3400: cmp x8, #0xff */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(255));
  /* d3404: csel x9, x8, x9, lt */
  ARC_X_W(c, 9, (ARC_COND(c, 11) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* d3408: mov x8, x26 */
  ARC_X_W(c, 8, ARC_X_R(c, 26));
L_d340c:;
  /* d340c: cbz w23, #0xd3424 */
  if ((ARC_W_R(c, 23)) == 0) goto L_d3424;
  /* d3410: cmp w9, #0x27 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(39));
  /* d3414: b.le #0xd3434 */
  if (ARC_COND(c, 13)) goto L_d3434;
  /* d3418: mov w9, #0x22 */
  ARC_W_W(c, 9, UINT64_C(34));
  /* d341c: mov x10, #0xff00000000 */
  ARC_X_W(c, 10, UINT64_C(1095216660480));
  /* d3420: b #0xd3444 */
  goto L_d3444;
L_d3424:;
  /* d3424: mov w10, wzr */
  ARC_W_W(c, 10, ARC_W_R(c, 31));
  /* d3428: mov w11, wzr */
  ARC_W_W(c, 11, ARC_W_R(c, 31));
  /* d342c: mov w9, wzr */
  ARC_W_W(c, 9, ARC_W_R(c, 31));
  /* d3430: b #0xd3450 */
  goto L_d3450;
L_d3434:;
  /* d3434: cmn w9, #0x37 */
  (void)arc_add32(c, ARC_W_R(c, 9), UINT64_C(55), 0);
  /* d3438: b.ge #0xd348c */
  if (ARC_COND(c, 10)) goto L_d348c;
L_d343c:;
  /* d343c: mov x10, xzr */
  ARC_X_W(c, 10, ARC_X_R(c, 31));
L_d3440:;
  /* d3440: mov w9, #0x22 */
  ARC_W_W(c, 9, UINT64_C(34));
L_d3444:;
  /* d3444: lsr x12, x10, #9 */
  ARC_X_W(c, 12, ((uint64_t)(ARC_X_R(c, 10)) >> ((UINT64_C(9)) & 63)));
  /* d3448: and w11, w10, #0x7fffff */
  ARC_W_W(c, 11, (ARC_W_R(c, 10) & UINT64_C(8388607)));
  /* d344c: and w10, w12, #0x7f800000 */
  ARC_W_W(c, 10, (ARC_W_R(c, 12) & UINT64_C(2139095040)));
L_d3450:;
  /* d3450: orr w11, w11, w10 */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) | ARC_W_R(c, 10)));
  /* d3454: fmov s0, w11 */
  arc_su_w(c, 0, (uint32_t)(ARC_W_R(c, 11)));
  /* d3458: cmp w11, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(0));
  /* d345c: mov w11, #0x22 */
  ARC_W_W(c, 11, UINT64_C(34));
  /* d3460: ccmp w9, w11, #0, ne */
  if (ARC_COND(c, 1)) { (void)arc_sub32(c, ARC_W_R(c, 9), ARC_W_R(c, 11)); }
  else { (c)->nf = 0; (c)->zf = 0;
          (c)->cf = 0; (c)->vf = 0; }
  /* d3464: ccmp w10, #0, #0, eq */
  if (ARC_COND(c, 0)) { (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(0)); }
  else { (c)->nf = 0; (c)->zf = 0;
          (c)->cf = 0; (c)->vf = 0; }
  /* d3468: fneg s1, s0 */
  arc_s_w(c, 1, (float)((-(ARC_S_R(c, 0)))));
  /* d346c: csel w9, w9, wzr, ne */
  ARC_W_W(c, 9, (ARC_COND(c, 1) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 31)));
  /* d3470: cmp w22, #0x2d */
  (void)arc_sub32(c, ARC_W_R(c, 22), UINT64_C(45));
  /* d3474: fcsel s8, s1, s0, eq */
  arc_s_w(c, 8, (float)((ARC_COND(c, 0) ? ARC_S_R(c, 1) : ARC_S_R(c, 0))));
  /* d3478: b #0xd3344 */
  goto L_d3344;
L_d347c:;
  /* d347c: add w9, w11, #0x9e */
  ARC_W_W(c, 9, (ARC_W_R(c, 11) + UINT64_C(158)));
  /* d3480: mov w11, #8 */
  ARC_W_W(c, 11, UINT64_C(8));
  /* d3484: mov x8, x20 */
  ARC_X_W(c, 8, ARC_X_R(c, 20));
  /* d3488: b #0xd363c */
  goto L_d363c;
L_d348c:;
  /* d348c: mov w10, w9 */
  ARC_W_W(c, 10, ARC_W_R(c, 9));
  /* d3490: tbz w24, #0, #0xd3698 */
  if (((ARC_W_R(c, 24)) >> 0 & 1) == 0) goto L_d3698;
  /* d3494: add w10, w10, #0x15c */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) + UINT64_C(348)));
  /* d3498: nop  */
  /* nop: no architectural effect here */
  /* d349c: adr x11, #0x55820 */
  ARC_X_W(c, 11, (arc_image_bases[1] + UINT64_C(350240)));
  /* d34a0: add x10, x11, w10, uxtw #4 */
  ARC_X_W(c, 10, (ARC_X_R(c, 11) + ((uint64_t)(((uint64_t)(uint32_t)(ARC_W_R(c, 10)))) << 4)));
  /* d34a4: clz w11, w23 */
  ARC_W_W(c, 11, arc_clz32(ARC_W_R(c, 23)));
  /* d34a8: lsl w15, w23, w11 */
  ARC_W_W(c, 15, ((uint32_t)(ARC_W_R(c, 23)) << ((ARC_W_R(c, 11)) & 31)));
  /* d34ac: ldr x13, [x10, #8] */
  ARC_X_W(c, 13, arc_ld64((ARC_X_R(c, 10) + INT64_C(8))));
  /* d34b0: umulh x12, x13, x15 */
  ARC_X_W(c, 12, arc_umulh(ARC_X_R(c, 13), ARC_X_R(c, 15)));
  /* d34b4: mul x14, x13, x15 */
  ARC_X_W(c, 14, ((uint64_t)(ARC_X_R(c, 13)) * (uint64_t)(ARC_X_R(c, 15))));
  /* d34b8: mvn w16, w12 */
  ARC_W_W(c, 16, (~(uint32_t)(ARC_W_R(c, 12))));
  /* d34bc: tst x16, #0x3f */
  arc_flags_logical64(c, (uint64_t)(ARC_X_R(c, 16) & UINT64_C(63)));
  /* d34c0: b.ne #0xd34fc */
  if (ARC_COND(c, 1)) goto L_d34fc;
  /* d34c4: mvn x16, x15 */
  ARC_X_W(c, 16, (~(uint64_t)(ARC_X_R(c, 15))));
  /* d34c8: cmp x14, x16 */
  (void)arc_sub64(c, ARC_X_R(c, 14), ARC_X_R(c, 16));
  /* d34cc: b.ls #0xd34fc */
  if (ARC_COND(c, 9)) goto L_d34fc;
  /* d34d0: ldr x17, [x10] */
  ARC_X_W(c, 17, arc_ld64(ARC_X_R(c, 10)));
  /* d34d4: umulh x0, x17, x15 */
  ARC_X_W(c, 0, arc_umulh(ARC_X_R(c, 17), ARC_X_R(c, 15)));
  /* d34d8: mul x15, x17, x15 */
  ARC_X_W(c, 15, ((uint64_t)(ARC_X_R(c, 17)) * (uint64_t)(ARC_X_R(c, 15))));
  /* d34dc: adds x14, x0, x14 */
  ARC_X_W(c, 14, arc_add64(c, ARC_X_R(c, 0), ARC_X_R(c, 14), 0));
  /* d34e0: cinc x12, x12, hs */
  ARC_X_W(c, 12, (ARC_COND(c, 2) ? (ARC_X_R(c, 12)) + 1 : (ARC_X_R(c, 12))));
  /* d34e4: cmp x15, x16 */
  (void)arc_sub64(c, ARC_X_R(c, 15), ARC_X_R(c, 16));
  /* d34e8: b.ls #0xd34fc */
  if (ARC_COND(c, 9)) goto L_d34fc;
  /* d34ec: and x15, x12, #0x3f */
  ARC_X_W(c, 15, (ARC_X_R(c, 12) & UINT64_C(63)));
  /* d34f0: cmp x15, #0x3f */
  (void)arc_sub64(c, ARC_X_R(c, 15), UINT64_C(63));
  /* d34f4: ccmn x14, #1, #0, eq */
  if (ARC_COND(c, 0)) { (void)arc_add64(c, ARC_X_R(c, 14), UINT64_C(1), 0); }
  else { (c)->nf = 0; (c)->zf = 0;
          (c)->cf = 0; (c)->vf = 0; }
  /* d34f8: b.eq #0xd38e4 */
  if (ARC_COND(c, 0)) goto L_d38e4;
L_d34fc:;
  /* d34fc: lsr x15, x12, #0x1f */
  ARC_X_W(c, 15, ((uint64_t)(ARC_X_R(c, 12)) >> ((UINT64_C(31)) & 63)));
  /* d3500: add x16, x15, #6 */
  ARC_X_W(c, 16, (ARC_X_R(c, 15) + UINT64_C(6)));
  /* d3504: lsr x16, x12, x16 */
  ARC_X_W(c, 16, ((uint64_t)(ARC_X_R(c, 12)) >> ((ARC_X_R(c, 16)) & 63)));
  /* d3508: cbz x14, #0xd376c */
  if ((ARC_X_R(c, 14)) == 0) goto L_d376c;
L_d350c:;
  /* d350c: mov w12, #0x526a */
  ARC_W_W(c, 12, UINT64_C(21098));
  /* d3510: eor w14, w15, #0xfffffffe */
  ARC_W_W(c, 14, (ARC_W_R(c, 15) ^ UINT64_C(4294967294)));
  /* d3514: movk w12, #3, lsl #16 */
  ARC_W_W(c, 12, ((ARC_W_R(c, 12) & UINT64_C(18446744069414649855)) | UINT64_C(196608)));
  /* d3518: mul w9, w9, w12 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 9)) * (uint32_t)(ARC_W_R(c, 12))));
  /* d351c: asr w12, w9, #0x10 */
  ARC_W_W(c, 12, ((uint32_t)((int32_t)(ARC_W_R(c, 9)) >> ((UINT64_C(16)) & 31))));
  /* d3520: and w9, w16, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 16) & UINT64_C(1)));
  /* d3524: add w9, w9, w16 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) + ARC_W_R(c, 16)));
  /* d3528: sub w11, w12, w11 */
  ARC_W_W(c, 11, (ARC_W_R(c, 12) - ARC_W_R(c, 11)));
  /* d352c: tst w9, #0xfe000000 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(4261412864)));
  /* d3530: add w11, w11, w14 */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) + ARC_W_R(c, 14)));
  /* d3534: cinc w11, w11, ne */
  ARC_W_W(c, 11, (ARC_COND(c, 1) ? (ARC_W_R(c, 11)) + 1 : (ARC_W_R(c, 11))));
  /* d3538: sub w14, w11, #0x5f */
  ARC_W_W(c, 14, (ARC_W_R(c, 11) - UINT64_C(95)));
  /* d353c: cmn w14, #0xfe */
  (void)arc_add32(c, ARC_W_R(c, 14), UINT64_C(254), 0);
  /* d3540: b.lo #0xd38e4 */
  if (ARC_COND(c, 3)) goto L_d38e4;
  /* d3544: add w15, w23, #1 */
  ARC_W_W(c, 15, (ARC_W_R(c, 23) + UINT64_C(1)));
  /* d3548: lsr w0, w9, #0x19 */
  ARC_W_W(c, 0, ((uint32_t)(ARC_W_R(c, 9)) >> ((UINT64_C(25)) & 31)));
  /* d354c: clz w14, w15 */
  ARC_W_W(c, 14, arc_clz32(ARC_W_R(c, 15)));
  /* d3550: lsl w17, w15, w14 */
  ARC_W_W(c, 17, ((uint32_t)(ARC_W_R(c, 15)) << ((ARC_W_R(c, 14)) & 31)));
  /* d3554: cmp w0, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(0));
  /* d3558: umulh x15, x13, x17 */
  ARC_X_W(c, 15, arc_umulh(ARC_X_R(c, 13), ARC_X_R(c, 17)));
  /* d355c: mul x16, x13, x17 */
  ARC_X_W(c, 16, ((uint64_t)(ARC_X_R(c, 13)) * (uint64_t)(ARC_X_R(c, 17))));
  /* d3560: mov w13, #1 */
  ARC_W_W(c, 13, UINT64_C(1));
  /* d3564: cinc w13, w13, ne */
  ARC_W_W(c, 13, (ARC_COND(c, 1) ? (ARC_W_R(c, 13)) + 1 : (ARC_W_R(c, 13))));
  /* d3568: mvn w0, w15 */
  ARC_W_W(c, 0, (~(uint32_t)(ARC_W_R(c, 15))));
  /* d356c: tst x0, #0x3f */
  arc_flags_logical64(c, (uint64_t)(ARC_X_R(c, 0) & UINT64_C(63)));
  /* d3570: b.ne #0xd35ac */
  if (ARC_COND(c, 1)) goto L_d35ac;
  /* d3574: mvn x0, x17 */
  ARC_X_W(c, 0, (~(uint64_t)(ARC_X_R(c, 17))));
  /* d3578: cmp x16, x0 */
  (void)arc_sub64(c, ARC_X_R(c, 16), ARC_X_R(c, 0));
  /* d357c: b.ls #0xd35ac */
  if (ARC_COND(c, 9)) goto L_d35ac;
  /* d3580: ldr x10, [x10] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 10)));
  /* d3584: umulh x1, x10, x17 */
  ARC_X_W(c, 1, arc_umulh(ARC_X_R(c, 10), ARC_X_R(c, 17)));
  /* d3588: mul x10, x10, x17 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 10)) * (uint64_t)(ARC_X_R(c, 17))));
  /* d358c: adds x16, x1, x16 */
  ARC_X_W(c, 16, arc_add64(c, ARC_X_R(c, 1), ARC_X_R(c, 16), 0));
  /* d3590: cinc x15, x15, hs */
  ARC_X_W(c, 15, (ARC_COND(c, 2) ? (ARC_X_R(c, 15)) + 1 : (ARC_X_R(c, 15))));
  /* d3594: cmp x10, x0 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 0));
  /* d3598: b.ls #0xd35ac */
  if (ARC_COND(c, 9)) goto L_d35ac;
  /* d359c: and x10, x15, #0x3f */
  ARC_X_W(c, 10, (ARC_X_R(c, 15) & UINT64_C(63)));
  /* d35a0: cmp x10, #0x3f */
  (void)arc_sub64(c, ARC_X_R(c, 10), UINT64_C(63));
  /* d35a4: ccmn x16, #1, #0, eq */
  if (ARC_COND(c, 0)) { (void)arc_add64(c, ARC_X_R(c, 16), UINT64_C(1), 0); }
  else { (c)->nf = 0; (c)->zf = 0;
          (c)->cf = 0; (c)->vf = 0; }
  /* d35a8: b.eq #0xd38e4 */
  if (ARC_COND(c, 0)) goto L_d38e4;
L_d35ac:;
  /* d35ac: lsr x10, x15, #0x1f */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 15)) >> ((UINT64_C(31)) & 63)));
  /* d35b0: add x17, x10, #6 */
  ARC_X_W(c, 17, (ARC_X_R(c, 10) + UINT64_C(6)));
  /* d35b4: lsr x17, x15, x17 */
  ARC_X_W(c, 17, ((uint64_t)(ARC_X_R(c, 15)) >> ((ARC_X_R(c, 17)) & 63)));
  /* d35b8: cbz x16, #0xd37cc */
  if ((ARC_X_R(c, 16)) == 0) goto L_d37cc;
L_d35bc:;
  /* d35bc: and w15, w17, #1 */
  ARC_W_W(c, 15, (ARC_W_R(c, 17) & UINT64_C(1)));
  /* d35c0: eor w16, w10, #0xfffffffe */
  ARC_W_W(c, 16, (ARC_W_R(c, 10) ^ UINT64_C(4294967294)));
  /* d35c4: sub w12, w12, w14 */
  ARC_W_W(c, 12, (ARC_W_R(c, 12) - ARC_W_R(c, 14)));
  /* d35c8: add w10, w15, w17 */
  ARC_W_W(c, 10, (ARC_W_R(c, 15) + ARC_W_R(c, 17)));
  /* d35cc: add w12, w12, w16 */
  ARC_W_W(c, 12, (ARC_W_R(c, 12) + ARC_W_R(c, 16)));
  /* d35d0: tst w10, #0xfe000000 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 10) & UINT64_C(4261412864)));
  /* d35d4: cinc w12, w12, ne */
  ARC_W_W(c, 12, (ARC_COND(c, 1) ? (ARC_W_R(c, 12)) + 1 : (ARC_W_R(c, 12))));
  /* d35d8: sub w14, w12, #0x5f */
  ARC_W_W(c, 14, (ARC_W_R(c, 12) - UINT64_C(95)));
  /* d35dc: cmn w14, #0xfe */
  (void)arc_add32(c, ARC_W_R(c, 14), UINT64_C(254), 0);
  /* d35e0: b.lo #0xd38e4 */
  if (ARC_COND(c, 3)) goto L_d38e4;
  /* d35e4: lsr w14, w10, #0x19 */
  ARC_W_W(c, 14, ((uint32_t)(ARC_W_R(c, 10)) >> ((UINT64_C(25)) & 31)));
  /* d35e8: lsr w9, w9, w13 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 9)) >> ((ARC_W_R(c, 13)) & 31)));
  /* d35ec: add w11, w11, #0xa0 */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) + UINT64_C(160)));
  /* d35f0: add w12, w12, #0xa0 */
  ARC_W_W(c, 12, (ARC_W_R(c, 12) + UINT64_C(160)));
  /* d35f4: cmp w14, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 14), UINT64_C(0));
  /* d35f8: mov w14, #1 */
  ARC_W_W(c, 14, UINT64_C(1));
  /* d35fc: and w13, w9, #0x7fffff00 */
  ARC_W_W(c, 13, (ARC_W_R(c, 9) & UINT64_C(2147483392)));
  /* d3600: cinc w14, w14, ne */
  ARC_W_W(c, 14, (ARC_COND(c, 1) ? (ARC_W_R(c, 14)) + 1 : (ARC_W_R(c, 14))));
  /* d3604: orr x11, x13, x11, lsl #32 */
  ARC_X_W(c, 11, (ARC_X_R(c, 13) | ((uint64_t)(ARC_X_R(c, 11)) << 32)));
  /* d3608: and w9, w9, #0xff */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) & UINT64_C(255)));
  /* d360c: lsr w10, w10, w14 */
  ARC_W_W(c, 10, ((uint32_t)(ARC_W_R(c, 10)) >> ((ARC_W_R(c, 14)) & 31)));
  /* d3610: and w14, w10, #0x7fffff00 */
  ARC_W_W(c, 14, (ARC_W_R(c, 10) & UINT64_C(2147483392)));
  /* d3614: and w13, w10, #0xff */
  ARC_W_W(c, 13, (ARC_W_R(c, 10) & UINT64_C(255)));
  /* d3618: orr x10, x11, x9 */
  ARC_X_W(c, 10, (ARC_X_R(c, 11) | ARC_X_R(c, 9)));
  /* d361c: orr x12, x14, x12, lsl #32 */
  ARC_X_W(c, 12, (ARC_X_R(c, 14) | ((uint64_t)(ARC_X_R(c, 12)) << 32)));
  /* d3620: orr x9, x12, x13 */
  ARC_X_W(c, 9, (ARC_X_R(c, 12) | ARC_X_R(c, 13)));
  /* d3624: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* d3628: b.ne #0xd38e4 */
  if (ARC_COND(c, 1)) goto L_d38e4;
  /* d362c: b #0xd3f30 */
  goto L_d3f30;
L_d3630:;
  /* d3630: mov w12, #-0x95 */
  ARC_W_W(c, 12, UINT64_C(18446744073709551467));
  /* d3634: mov w9, wzr */
  ARC_W_W(c, 9, ARC_W_R(c, 31));
  /* d3638: sub w11, w12, w11 */
  ARC_W_W(c, 11, (ARC_W_R(c, 12) - ARC_W_R(c, 11)));
L_d363c:;
  /* d363c: sub w12, w11, #1 */
  ARC_W_W(c, 12, (ARC_W_R(c, 11) - UINT64_C(1)));
  /* d3640: mov w13, #1 */
  ARC_W_W(c, 13, UINT64_C(1));
  /* d3644: lsl w10, w23, w10 */
  ARC_W_W(c, 10, ((uint32_t)(ARC_W_R(c, 23)) << ((ARC_W_R(c, 10)) & 31)));
  /* d3648: lsl w12, w13, w12 */
  ARC_W_W(c, 12, ((uint32_t)(ARC_W_R(c, 13)) << ((ARC_W_R(c, 12)) & 31)));
  /* d364c: lsr w14, w10, w11 */
  ARC_W_W(c, 14, ((uint32_t)(ARC_W_R(c, 10)) >> ((ARC_W_R(c, 11)) & 31)));
  /* d3650: sub w13, w12, #1 */
  ARC_W_W(c, 13, (ARC_W_R(c, 12) - UINT64_C(1)));
  /* d3654: and w15, w12, w10 */
  ARC_W_W(c, 15, (ARC_W_R(c, 12) & ARC_W_R(c, 10)));
  /* d3658: tst w13, w10 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 13) & ARC_W_R(c, 10)));
  /* d365c: and w10, w14, #0x7fffff */
  ARC_W_W(c, 10, (ARC_W_R(c, 14) & UINT64_C(8388607)));
  /* d3660: cset w12, ne */
  ARC_W_W(c, 12, (ARC_COND(c, 1) ? 1 : 0));
  /* d3664: cmp w11, #0x20 */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(32));
  /* d3668: csel w10, w10, wzr, lo */
  ARC_W_W(c, 10, (ARC_COND(c, 3) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 31)));
  /* d366c: cbz w15, #0xd36dc */
  if ((ARC_W_R(c, 15)) == 0) goto L_d36dc;
  /* d3670: orr w11, w21, w12 */
  ARC_W_W(c, 11, (ARC_W_R(c, 21) | ARC_W_R(c, 12)));
  /* d3674: orr w11, w10, w11 */
  ARC_W_W(c, 11, (ARC_W_R(c, 10) | ARC_W_R(c, 11)));
  /* d3678: tbz w11, #0, #0xd36dc */
  if (((ARC_W_R(c, 11)) >> 0 & 1) == 0) goto L_d36dc;
  /* d367c: mov w11, #0x7fffff */
  ARC_W_W(c, 11, UINT64_C(8388607));
  /* d3680: cmp w10, w11 */
  (void)arc_sub32(c, ARC_W_R(c, 10), ARC_W_R(c, 11));
  /* d3684: b.ne #0xd36d8 */
  if (ARC_COND(c, 1)) goto L_d36d8;
  /* d3688: add w9, w9, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) + UINT64_C(1)));
  /* d368c: mov x10, xzr */
  ARC_X_W(c, 10, ARC_X_R(c, 31));
  /* d3690: cmp w9, #0xff */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(255));
  /* d3694: b #0xd36e4 */
  goto L_d36e4;
L_d3698:;
  /* d3698: lsr w11, w23, #0x17 */
  ARC_W_W(c, 11, ((uint32_t)(ARC_W_R(c, 23)) >> ((UINT64_C(23)) & 31)));
  /* d369c: cbnz w11, #0xd37f8 */
  if ((ARC_W_R(c, 11)) != 0) goto L_d37f8;
  /* d36a0: ucvtf s0, w23 */
  arc_s_w(c, 0, (float)(((uint32_t)(ARC_W_R(c, 23)))));
  /* d36a4: cmp w9, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(1));
  /* d36a8: b.lt #0xd3798 */
  if (ARC_COND(c, 11)) goto L_d3798;
  /* d36ac: cmp w9, #0x11 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(17));
  /* d36b0: b.hi #0xd37f8 */
  if (ARC_COND(c, 8)) goto L_d37f8;
  /* d36b4: cmp w9, #0xb */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(11));
  /* d36b8: b.lo #0xd37e4 */
  if (ARC_COND(c, 3)) goto L_d37e4;
  /* d36bc: sub w11, w10, #0xa */
  ARC_W_W(c, 11, (ARC_W_R(c, 10) - UINT64_C(10)));
  /* d36c0: nop  */
  /* nop: no architectural effect here */
  /* d36c4: adr x12, #0x557f0 */
  ARC_X_W(c, 12, (arc_image_bases[1] + UINT64_C(350192)));
  /* d36c8: ldr s1, [x12, w11, uxtw #2] */
  arc_su_w(c, 1, arc_ld32((ARC_X_R(c, 12) + ((uint64_t)(((uint64_t)(uint32_t)(ARC_W_R(c, 11)))) << 2))));
  /* d36cc: mov w11, #0xa */
  ARC_W_W(c, 11, UINT64_C(10));
  /* d36d0: fmul s0, s1, s0 */
  arc_s_w(c, 0, (float)(arc_fmul32(ARC_S_R(c, 1), ARC_S_R(c, 0))));
  /* d36d4: b #0xd37e8 */
  goto L_d37e8;
L_d36d8:;
  /* d36d8: add w10, w10, #1 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) + UINT64_C(1)));
L_d36dc:;
  /* d36dc: cmp w9, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(0));
  /* d36e0: mov w10, w10 */
  ARC_W_W(c, 10, ARC_W_R(c, 10));
L_d36e4:;
  /* d36e4: cset w12, eq */
  ARC_W_W(c, 12, (ARC_COND(c, 0) ? 1 : 0));
  /* d36e8: lsl x11, x9, #0x20 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 9)) << ((UINT64_C(32)) & 63)));
  /* d36ec: cmp w12, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 12), UINT64_C(0));
  /* d36f0: mov w9, #0x22 */
  ARC_W_W(c, 9, UINT64_C(34));
  /* d36f4: csel w9, w9, wzr, ne */
  ARC_W_W(c, 9, (ARC_COND(c, 1) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 31)));
L_d36f8:;
  /* d36f8: lsr x11, x11, #9 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 11)) >> ((UINT64_C(9)) & 63)));
  /* d36fc: and w11, w11, #0x7f800000 */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) & UINT64_C(2139095040)));
L_d3700:;
  /* d3700: orr w10, w10, w11 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) | ARC_W_R(c, 11)));
  /* d3704: fmov s0, w10 */
  arc_su_w(c, 0, (uint32_t)(ARC_W_R(c, 10)));
  /* d3708: cmp w10, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(0));
  /* d370c: mov w10, #0x22 */
  ARC_W_W(c, 10, UINT64_C(34));
  /* d3710: ccmp w9, w10, #0, ne */
  if (ARC_COND(c, 1)) { (void)arc_sub32(c, ARC_W_R(c, 9), ARC_W_R(c, 10)); }
  else { (c)->nf = 0; (c)->zf = 0;
          (c)->cf = 0; (c)->vf = 0; }
  /* d3714: ccmp w11, #0, #0, eq */
  if (ARC_COND(c, 0)) { (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(0)); }
  else { (c)->nf = 0; (c)->zf = 0;
          (c)->cf = 0; (c)->vf = 0; }
  /* d3718: fneg s1, s0 */
  arc_s_w(c, 1, (float)((-(ARC_S_R(c, 0)))));
  /* d371c: csel w9, w9, wzr, ne */
  ARC_W_W(c, 9, (ARC_COND(c, 1) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 31)));
  /* d3720: cmp w22, #0x2d */
  (void)arc_sub32(c, ARC_W_R(c, 22), UINT64_C(45));
  /* d3724: fcsel s0, s1, s0, eq */
  arc_s_w(c, 0, (float)((ARC_COND(c, 0) ? ARC_S_R(c, 1) : ARC_S_R(c, 0))));
L_d3728:;
  /* d3728: str s0, [x8] */
  arc_st32(ARC_X_R(c, 8), (c)->q[0].u32[0]);
  /* d372c: str x0, [x8, #8] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(8)), ARC_X_R(c, 0));
L_d3730:;
  /* d3730: str w9, [x8, #0x10] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(16)), ARC_W_R(c, 9));
L_d3734:;
  /* d3734: add sp, sp, #0x330 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(816)));
  /* d3738: ldp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* d373c: ldp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* d3740: ldp x24, x23, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* d3744: ldp x26, x25, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* d3748: ldp x28, x27, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* d374c: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* d3750: ldr d8, [sp], #0x70 */
  arc_du_w(c, 8, arc_ld64((c)->sp));
  (c)->sp = (c)->sp + INT64_C(112);
  /* d3754: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* d3758: ret  */
  return;
L_d375c:;
  /* d375c: str wzr, [x8] */
  arc_st32(ARC_X_R(c, 8), ARC_W_R(c, 31));
  /* d3760: mov w9, #0x16 */
  ARC_W_W(c, 9, UINT64_C(22));
  /* d3764: str xzr, [x8, #8] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(8)), ARC_X_R(c, 31));
  /* d3768: b #0xd3730 */
  goto L_d3730;
L_d376c:;
  /* d376c: tst x12, #0x3f */
  arc_flags_logical64(c, (uint64_t)(ARC_X_R(c, 12) & UINT64_C(63)));
  /* d3770: b.ne #0xd350c */
  if (ARC_COND(c, 1)) goto L_d350c;
  /* d3774: and w12, w16, #3 */
  ARC_W_W(c, 12, (ARC_W_R(c, 16) & UINT64_C(3)));
  /* d3778: cmp w12, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 12), UINT64_C(1));
  /* d377c: b.eq #0xd38e4 */
  if (ARC_COND(c, 0)) goto L_d38e4;
  /* d3780: b #0xd350c */
  goto L_d350c;
L_d3784:;
  /* d3784: mov w9, #0x16 */
  ARC_W_W(c, 9, UINT64_C(22));
  /* d3788: str wzr, [x8] */
  arc_st32(ARC_X_R(c, 8), ARC_W_R(c, 31));
  /* d378c: str xzr, [x8, #8] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(8)), ARC_X_R(c, 31));
  /* d3790: str w9, [x8, #0x10] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(16)), ARC_W_R(c, 9));
  /* d3794: ret  */
  return;
L_d3798:;
  /* d3798: fmov w11, s0 */
  ARC_W_W(c, 11, ARC_SU_R(c, 0));
  /* d379c: cmp w9, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(0));
  /* d37a0: csel w11, w11, wzr, eq */
  ARC_W_W(c, 11, (ARC_COND(c, 0) ? (ARC_W_R(c, 11)) : ARC_W_R(c, 31)));
  /* d37a4: tbz w9, #0x1f, #0xd3b74 */
  if (((ARC_W_R(c, 9)) >> 31 & 1) == 0) goto L_d3b74;
  /* d37a8: cmn w9, #0xa */
  (void)arc_add32(c, ARC_W_R(c, 9), UINT64_C(10), 0);
  /* d37ac: b.lo #0xd37f8 */
  if (ARC_COND(c, 3)) goto L_d37f8;
  /* d37b0: neg w9, w10 */
  ARC_W_W(c, 9, ((uint32_t)0 - (uint32_t)(ARC_W_R(c, 10))));
  /* d37b4: nop  */
  /* nop: no architectural effect here */
  /* d37b8: adr x10, #0x557f0 */
  ARC_X_W(c, 10, (arc_image_bases[1] + UINT64_C(350192)));
  /* d37bc: and x9, x9, #0x1f */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) & UINT64_C(31)));
  /* d37c0: ldr s1, [x10, x9, lsl #2] */
  arc_su_w(c, 1, arc_ld32((ARC_X_R(c, 10) + ((uint64_t)(ARC_X_R(c, 9)) << 2))));
  /* d37c4: fdiv s0, s0, s1 */
  arc_s_w(c, 0, (float)(arc_fdiv32(ARC_S_R(c, 0), ARC_S_R(c, 1))));
  /* d37c8: b #0xd3b70 */
  goto L_d3b70;
L_d37cc:;
  /* d37cc: tst x15, #0x3f */
  arc_flags_logical64(c, (uint64_t)(ARC_X_R(c, 15) & UINT64_C(63)));
  /* d37d0: b.ne #0xd35bc */
  if (ARC_COND(c, 1)) goto L_d35bc;
  /* d37d4: and w15, w17, #3 */
  ARC_W_W(c, 15, (ARC_W_R(c, 17) & UINT64_C(3)));
  /* d37d8: cmp w15, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 15), UINT64_C(1));
  /* d37dc: b.eq #0xd38e4 */
  if (ARC_COND(c, 0)) goto L_d38e4;
  /* d37e0: b #0xd35bc */
  goto L_d35bc;
L_d37e4:;
  /* d37e4: mov x11, x10 */
  ARC_X_W(c, 11, ARC_X_R(c, 10));
L_d37e8:;
  /* d37e8: mov w12, #0x4b7fffff */
  ARC_W_W(c, 12, UINT64_C(1266679807));
  /* d37ec: fmov s1, w12 */
  arc_su_w(c, 1, (uint32_t)(ARC_W_R(c, 12)));
  /* d37f0: fcmp s0, s1 */
  arc_fcmp(c, (double)(ARC_S_R(c, 0)), (double)(ARC_S_R(c, 1)));
  /* d37f4: b.le #0xd3b60 */
  if (ARC_COND(c, 13)) goto L_d3b60;
L_d37f8:;
  /* d37f8: add w10, w10, #0x15c */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) + UINT64_C(348)));
  /* d37fc: nop  */
  /* nop: no architectural effect here */
  /* d3800: adr x11, #0x55820 */
  ARC_X_W(c, 11, (arc_image_bases[1] + UINT64_C(350240)));
  /* d3804: add x14, x11, w10, uxtw #4 */
  ARC_X_W(c, 14, (ARC_X_R(c, 11) + ((uint64_t)(((uint64_t)(uint32_t)(ARC_W_R(c, 10)))) << 4)));
  /* d3808: clz w10, w23 */
  ARC_W_W(c, 10, arc_clz32(ARC_W_R(c, 23)));
  /* d380c: lsl w13, w23, w10 */
  ARC_W_W(c, 13, ((uint32_t)(ARC_W_R(c, 23)) << ((ARC_W_R(c, 10)) & 31)));
  /* d3810: ldr x12, [x14, #8] */
  ARC_X_W(c, 12, arc_ld64((ARC_X_R(c, 14) + INT64_C(8))));
  /* d3814: umulh x11, x12, x13 */
  ARC_X_W(c, 11, arc_umulh(ARC_X_R(c, 12), ARC_X_R(c, 13)));
  /* d3818: mul x12, x12, x13 */
  ARC_X_W(c, 12, ((uint64_t)(ARC_X_R(c, 12)) * (uint64_t)(ARC_X_R(c, 13))));
  /* d381c: mvn w15, w11 */
  ARC_W_W(c, 15, (~(uint32_t)(ARC_W_R(c, 11))));
  /* d3820: tst x15, #0x3f */
  arc_flags_logical64(c, (uint64_t)(ARC_X_R(c, 15) & UINT64_C(63)));
  /* d3824: b.ne #0xd3860 */
  if (ARC_COND(c, 1)) goto L_d3860;
  /* d3828: mvn x15, x13 */
  ARC_X_W(c, 15, (~(uint64_t)(ARC_X_R(c, 13))));
  /* d382c: cmp x12, x15 */
  (void)arc_sub64(c, ARC_X_R(c, 12), ARC_X_R(c, 15));
  /* d3830: b.ls #0xd3860 */
  if (ARC_COND(c, 9)) goto L_d3860;
  /* d3834: ldr x14, [x14] */
  ARC_X_W(c, 14, arc_ld64(ARC_X_R(c, 14)));
  /* d3838: umulh x16, x14, x13 */
  ARC_X_W(c, 16, arc_umulh(ARC_X_R(c, 14), ARC_X_R(c, 13)));
  /* d383c: mul x13, x14, x13 */
  ARC_X_W(c, 13, ((uint64_t)(ARC_X_R(c, 14)) * (uint64_t)(ARC_X_R(c, 13))));
  /* d3840: adds x12, x16, x12 */
  ARC_X_W(c, 12, arc_add64(c, ARC_X_R(c, 16), ARC_X_R(c, 12), 0));
  /* d3844: cinc x11, x11, hs */
  ARC_X_W(c, 11, (ARC_COND(c, 2) ? (ARC_X_R(c, 11)) + 1 : (ARC_X_R(c, 11))));
  /* d3848: cmp x13, x15 */
  (void)arc_sub64(c, ARC_X_R(c, 13), ARC_X_R(c, 15));
  /* d384c: b.ls #0xd3860 */
  if (ARC_COND(c, 9)) goto L_d3860;
  /* d3850: and x13, x11, #0x3f */
  ARC_X_W(c, 13, (ARC_X_R(c, 11) & UINT64_C(63)));
  /* d3854: cmp x13, #0x3f */
  (void)arc_sub64(c, ARC_X_R(c, 13), UINT64_C(63));
  /* d3858: ccmn x12, #1, #0, eq */
  if (ARC_COND(c, 0)) { (void)arc_add64(c, ARC_X_R(c, 12), UINT64_C(1), 0); }
  else { (c)->nf = 0; (c)->zf = 0;
          (c)->cf = 0; (c)->vf = 0; }
  /* d385c: b.eq #0xd38e4 */
  if (ARC_COND(c, 0)) goto L_d38e4;
L_d3860:;
  /* d3860: lsr x13, x11, #0x1f */
  ARC_X_W(c, 13, ((uint64_t)(ARC_X_R(c, 11)) >> ((UINT64_C(31)) & 63)));
  /* d3864: add x14, x13, #6 */
  ARC_X_W(c, 14, (ARC_X_R(c, 13) + UINT64_C(6)));
  /* d3868: lsr x14, x11, x14 */
  ARC_X_W(c, 14, ((uint64_t)(ARC_X_R(c, 11)) >> ((ARC_X_R(c, 14)) & 63)));
  /* d386c: cbz x12, #0xd38d0 */
  if ((ARC_X_R(c, 12)) == 0) goto L_d38d0;
L_d3870:;
  /* d3870: mov w11, #0x526a */
  ARC_W_W(c, 11, UINT64_C(21098));
  /* d3874: eor w12, w13, #0xfffffffe */
  ARC_W_W(c, 12, (ARC_W_R(c, 13) ^ UINT64_C(4294967294)));
  /* d3878: movk w11, #3, lsl #16 */
  ARC_W_W(c, 11, ((ARC_W_R(c, 11) & UINT64_C(18446744069414649855)) | UINT64_C(196608)));
  /* d387c: mul w9, w9, w11 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 9)) * (uint32_t)(ARC_W_R(c, 11))));
  /* d3880: and w11, w14, #1 */
  ARC_W_W(c, 11, (ARC_W_R(c, 14) & UINT64_C(1)));
  /* d3884: add w11, w11, w14 */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) + ARC_W_R(c, 14)));
  /* d3888: tst w11, #0xfe000000 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 11) & UINT64_C(4261412864)));
  /* d388c: asr w9, w9, #0x10 */
  ARC_W_W(c, 9, ((uint32_t)((int32_t)(ARC_W_R(c, 9)) >> ((UINT64_C(16)) & 31))));
  /* d3890: sub w9, w9, w10 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) - ARC_W_R(c, 10)));
  /* d3894: add w9, w9, w12 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) + ARC_W_R(c, 12)));
  /* d3898: cinc w10, w9, ne */
  ARC_W_W(c, 10, (ARC_COND(c, 1) ? (ARC_W_R(c, 9)) + 1 : (ARC_W_R(c, 9))));
  /* d389c: sub w9, w10, #0x5f */
  ARC_W_W(c, 9, (ARC_W_R(c, 10) - UINT64_C(95)));
  /* d38a0: cmn w9, #0xfe */
  (void)arc_add32(c, ARC_W_R(c, 9), UINT64_C(254), 0);
  /* d38a4: b.lo #0xd38e4 */
  if (ARC_COND(c, 3)) goto L_d38e4;
  /* d38a8: lsr w12, w11, #0x19 */
  ARC_W_W(c, 12, ((uint32_t)(ARC_W_R(c, 11)) >> ((UINT64_C(25)) & 31)));
  /* d38ac: add w10, w10, #0xa0 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) + UINT64_C(160)));
  /* d38b0: mov w9, wzr */
  ARC_W_W(c, 9, ARC_W_R(c, 31));
  /* d38b4: cmp w12, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 12), UINT64_C(0));
  /* d38b8: mov w12, #1 */
  ARC_W_W(c, 12, UINT64_C(1));
  /* d38bc: cinc w12, w12, ne */
  ARC_W_W(c, 12, (ARC_COND(c, 1) ? (ARC_W_R(c, 12)) + 1 : (ARC_W_R(c, 12))));
  /* d38c0: lsr w11, w11, w12 */
  ARC_W_W(c, 11, ((uint32_t)(ARC_W_R(c, 11)) >> ((ARC_W_R(c, 12)) & 31)));
  /* d38c4: and w12, w11, #0x7fffff00 */
  ARC_W_W(c, 12, (ARC_W_R(c, 11) & UINT64_C(2147483392)));
  /* d38c8: orr x10, x12, x10, lsl #32 */
  ARC_X_W(c, 10, (ARC_X_R(c, 12) | ((uint64_t)(ARC_X_R(c, 10)) << 32)));
  /* d38cc: b #0xd3b8c */
  goto L_d3b8c;
L_d38d0:;
  /* d38d0: tst x11, #0x3f */
  arc_flags_logical64(c, (uint64_t)(ARC_X_R(c, 11) & UINT64_C(63)));
  /* d38d4: b.ne #0xd3870 */
  if (ARC_COND(c, 1)) goto L_d3870;
  /* d38d8: and w11, w14, #3 */
  ARC_W_W(c, 11, (ARC_W_R(c, 14) & UINT64_C(3)));
  /* d38dc: cmp w11, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(1));
  /* d38e0: b.ne #0xd3870 */
  if (ARC_COND(c, 1)) goto L_d3870;
L_d38e4:;
  /* d38e4: add x0, sp, #4 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(4)));
  /* d38e8: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* d38ec: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* d38f0: mov x23, x8 */
  ARC_X_W(c, 23, ARC_X_R(c, 8));
  /* d38f4: bl #0xd69e8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(866552));
  fn1_d69e8(c);
  /* d38f8: ldr w8, [sp, #4] */
  ARC_W_W(c, 8, arc_ld32(((c)->sp + INT64_C(4))));
  /* d38fc: cbz w8, #0xd3930 */
  if ((ARC_W_R(c, 8)) == 0) goto L_d3930;
  /* d3900: ldr w9, [sp, #8] */
  ARC_W_W(c, 9, arc_ld32(((c)->sp + INT64_C(8))));
  /* d3904: mov x8, x23 */
  ARC_X_W(c, 8, ARC_X_R(c, 23));
  /* d3908: subs w10, w9, #1 */
  ARC_W_W(c, 10, arc_sub32(c, ARC_W_R(c, 9), UINT64_C(1)));
  /* d390c: b.lt #0xd3940 */
  if (ARC_COND(c, 11)) goto L_d3940;
  /* d3910: mov w11, #0x526a */
  ARC_W_W(c, 11, UINT64_C(21098));
  /* d3914: movk w11, #3, lsl #16 */
  ARC_W_W(c, 11, ((ARC_W_R(c, 11) & UINT64_C(18446744069414649855)) | UINT64_C(196608)));
  /* d3918: umull x10, w10, w11 */
  ARC_X_W(c, 10, (((uint64_t)(uint32_t)(ARC_W_R(c, 10))) * ((uint64_t)(uint32_t)(ARC_W_R(c, 11)))));
  /* d391c: lsr x10, x10, #0x10 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 10)) >> ((UINT64_C(16)) & 63)));
  /* d3920: cmp w10, #0x7f */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(127));
  /* d3924: b.le #0xd3950 */
  if (ARC_COND(c, 13)) goto L_d3950;
  /* d3928: mov x10, #0xff00000000 */
  ARC_X_W(c, 10, UINT64_C(1095216660480));
  /* d392c: b #0xd3440 */
  goto L_d3440;
L_d3930:;
  /* d3930: mov x10, xzr */
  ARC_X_W(c, 10, ARC_X_R(c, 31));
  /* d3934: mov w9, wzr */
  ARC_W_W(c, 9, ARC_W_R(c, 31));
  /* d3938: mov x8, x23 */
  ARC_X_W(c, 8, ARC_X_R(c, 23));
  /* d393c: b #0xd3444 */
  goto L_d3444;
L_d3940:;
  /* d3940: tbnz w9, #0x1f, #0xd3990 */
  if (((ARC_W_R(c, 9)) >> 31 & 1) != 0) goto L_d3990;
  /* d3944: mov w21, wzr */
  ARC_W_W(c, 21, ARC_W_R(c, 31));
  /* d3948: mov w9, wzr */
  ARC_W_W(c, 9, ARC_W_R(c, 31));
  /* d394c: b #0xd39b0 */
  goto L_d39b0;
L_d3950:;
  /* d3950: mov w21, wzr */
  ARC_W_W(c, 21, ARC_W_R(c, 31));
  /* d3954: nop  */
  /* nop: no architectural effect here */
  /* d3958: adr x20, #0x583a0 */
  ARC_X_W(c, 20, (arc_image_bases[1] + UINT64_C(361376)));
  /* d395c: b #0xd3980 */
  goto L_d3980;
L_d3960:;
  /* d3960: ldrb w8, [x20, w9, uxtw] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 20) + ((uint64_t)(uint32_t)(ARC_W_R(c, 9))))));
L_d3964:;
  /* d3964: neg w1, w8 */
  ARC_W_W(c, 1, ((uint32_t)0 - (uint32_t)(ARC_W_R(c, 8))));
  /* d3968: add x0, sp, #4 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(4)));
  /* d396c: add w21, w8, w21 */
  ARC_W_W(c, 21, (ARC_W_R(c, 8) + ARC_W_R(c, 21)));
  /* d3970: bl #0xd6de8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(866676));
  fn1_d6de8(c);
  /* d3974: ldr w9, [sp, #8] */
  ARC_W_W(c, 9, arc_ld32(((c)->sp + INT64_C(8))));
  /* d3978: cmp w9, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(0));
  /* d397c: b.le #0xd39b0 */
  if (ARC_COND(c, 13)) goto L_d39b0;
L_d3980:;
  /* d3980: cmp w9, #0x12 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(18));
  /* d3984: b.ls #0xd3960 */
  if (ARC_COND(c, 9)) goto L_d3960;
  /* d3988: mov w8, #0x3c */
  ARC_W_W(c, 8, UINT64_C(60));
  /* d398c: b #0xd3964 */
  goto L_d3964;
L_d3990:;
  /* d3990: mov w11, #0x526a */
  ARC_W_W(c, 11, UINT64_C(21098));
  /* d3994: neg w10, w9 */
  ARC_W_W(c, 10, ((uint32_t)0 - (uint32_t)(ARC_W_R(c, 9))));
  /* d3998: movk w11, #3, lsl #16 */
  ARC_W_W(c, 11, ((ARC_W_R(c, 11) & UINT64_C(18446744069414649855)) | UINT64_C(196608)));
  /* d399c: umull x10, w10, w11 */
  ARC_X_W(c, 10, (((uint64_t)(uint32_t)(ARC_W_R(c, 10))) * ((uint64_t)(uint32_t)(ARC_W_R(c, 11)))));
  /* d39a0: lsr x10, x10, #0x10 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 10)) >> ((UINT64_C(16)) & 63)));
  /* d39a4: cmp w10, #0x96 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(150));
  /* d39a8: b.gt #0xd343c */
  if (ARC_COND(c, 12)) goto L_d343c;
  /* d39ac: mov w21, wzr */
  ARC_W_W(c, 21, ARC_W_R(c, 31));
L_d39b0:;
  /* d39b0: add x8, sp, #4 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(4)));
  /* d39b4: nop  */
  /* nop: no architectural effect here */
  /* d39b8: adr x24, #0x583a0 */
  ARC_X_W(c, 24, (arc_image_bases[1] + UINT64_C(361376)));
  /* d39bc: add x20, x8, #9 */
  ARC_X_W(c, 20, (ARC_X_R(c, 8) + UINT64_C(9)));
  /* d39c0: b #0xd39dc */
  goto L_d39dc;
L_d39c4:;
  /* d39c4: neg w8, w9 */
  ARC_W_W(c, 8, ((uint32_t)0 - (uint32_t)(ARC_W_R(c, 9))));
  /* d39c8: ldrb w1, [x24, w8, uxtw] */
  ARC_W_W(c, 1, arc_ld8((ARC_X_R(c, 24) + ((uint64_t)(uint32_t)(ARC_W_R(c, 8))))));
L_d39cc:;
  /* d39cc: add x0, sp, #4 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(4)));
  /* d39d0: sub w21, w21, w1 */
  ARC_W_W(c, 21, (ARC_W_R(c, 21) - ARC_W_R(c, 1)));
  /* d39d4: bl #0xd6de8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(866776));
  fn1_d6de8(c);
  /* d39d8: ldr w9, [sp, #8] */
  ARC_W_W(c, 9, arc_ld32(((c)->sp + INT64_C(8))));
L_d39dc:;
  /* d39dc: tbnz w9, #0x1f, #0xd39f8 */
  if (((ARC_W_R(c, 9)) >> 31 & 1) != 0) goto L_d39f8;
  /* d39e0: cbnz w9, #0xd3a08 */
  if ((ARC_W_R(c, 9)) != 0) goto L_d3a08;
  /* d39e4: ldrb w8, [sp, #0xd] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(13))));
  /* d39e8: cmp w8, #5 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(5));
  /* d39ec: b.hs #0xd3a08 */
  if (ARC_COND(c, 2)) goto L_d3a08;
  /* d39f0: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* d39f4: b #0xd39cc */
  goto L_d39cc;
L_d39f8:;
  /* d39f8: cmn w9, #0x12 */
  (void)arc_add32(c, ARC_W_R(c, 9), UINT64_C(18), 0);
  /* d39fc: b.hs #0xd39c4 */
  if (ARC_COND(c, 2)) goto L_d39c4;
  /* d3a00: mov w1, #0x3c */
  ARC_W_W(c, 1, UINT64_C(60));
  /* d3a04: b #0xd39cc */
  goto L_d39cc;
L_d3a08:;
  /* d3a08: add x0, sp, #4 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(4)));
  /* d3a0c: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* d3a10: bl #0xd7094 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(866836));
  fn1_d7094(c);
  /* d3a14: cmp w21, #0x80 */
  (void)arc_sub32(c, ARC_W_R(c, 21), UINT64_C(128));
  /* d3a18: b.le #0xd3a28 */
  if (ARC_COND(c, 13)) goto L_d3a28;
  /* d3a1c: mov x10, #0xff00000000 */
  ARC_X_W(c, 10, UINT64_C(1095216660480));
  /* d3a20: mov x8, x23 */
  ARC_X_W(c, 8, ARC_X_R(c, 23));
  /* d3a24: b #0xd3440 */
  goto L_d3440;
L_d3a28:;
  /* d3a28: add x0, sp, #4 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(4)));
  /* d3a2c: mov w1, #4 */
  ARC_W_W(c, 1, UINT64_C(4));
  /* d3a30: bl #0xd7094 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(866868));
  fn1_d7094(c);
  /* d3a34: add x0, sp, #4 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(4)));
  /* d3a38: mov w1, #4 */
  ARC_W_W(c, 1, UINT64_C(4));
  /* d3a3c: bl #0xd7094 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(866880));
  fn1_d7094(c);
  /* d3a40: add x0, sp, #4 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(4)));
  /* d3a44: mov w1, #4 */
  ARC_W_W(c, 1, UINT64_C(4));
  /* d3a48: bl #0xd7094 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(866892));
  fn1_d7094(c);
  /* d3a4c: add x0, sp, #4 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(4)));
  /* d3a50: mov w1, #4 */
  ARC_W_W(c, 1, UINT64_C(4));
  /* d3a54: bl #0xd7094 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(866904));
  fn1_d7094(c);
  /* d3a58: add x0, sp, #4 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(4)));
  /* d3a5c: mov w1, #4 */
  ARC_W_W(c, 1, UINT64_C(4));
  /* d3a60: bl #0xd7094 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(866916));
  fn1_d7094(c);
  /* d3a64: add x0, sp, #4 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(4)));
  /* d3a68: mov w1, #3 */
  ARC_W_W(c, 1, UINT64_C(3));
  /* d3a6c: bl #0xd7094 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(866928));
  fn1_d7094(c);
  /* d3a70: ldp w10, w9, [sp, #4] */
  { const uint64_t _pa = ((c)->sp + INT64_C(4));
    ARC_W_W(c, 10, arc_ld32(_pa));
    ARC_W_W(c, 9, arc_ld32(_pa + 4));
  }
  /* d3a74: mov w13, wzr */
  ARC_W_W(c, 13, ARC_W_R(c, 31));
  /* d3a78: mov w11, wzr */
  ARC_W_W(c, 11, ARC_W_R(c, 31));
  /* d3a7c: mov x8, x23 */
  ARC_X_W(c, 8, ARC_X_R(c, 23));
  /* d3a80: subs w12, w9, #1 */
  ARC_W_W(c, 12, arc_sub32(c, ARC_W_R(c, 9), UINT64_C(1)));
  /* d3a84: b.lt #0xd3ab4 */
  if (ARC_COND(c, 11)) goto L_d3ab4;
  /* d3a88: cbz w10, #0xd3ab4 */
  if ((ARC_W_R(c, 10)) == 0) goto L_d3ab4;
  /* d3a8c: cmp w9, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 9), ARC_W_R(c, 10));
  /* d3a90: mov w13, wzr */
  ARC_W_W(c, 13, ARC_W_R(c, 31));
  /* d3a94: mov w14, #0xa */
  ARC_W_W(c, 14, UINT64_C(10));
  /* d3a98: csel w11, w9, w10, lo */
  ARC_W_W(c, 11, (ARC_COND(c, 3) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 10)));
  /* d3a9c: mov x15, x20 */
  ARC_X_W(c, 15, ARC_X_R(c, 20));
  /* d3aa0: mov x16, x11 */
  ARC_X_W(c, 16, ARC_X_R(c, 11));
L_d3aa4:;
  /* d3aa4: ldrb w17, [x15], #1 */
  { const uint64_t _a = ARC_X_R(c, 15);
    ARC_X_W(c, 15, ARC_X_R(c, 15) + INT64_C(1));
    ARC_W_W(c, 17, arc_ld8(_a));
  }
  /* d3aa8: madd w13, w13, w14, w17 */
  ARC_W_W(c, 13, ((uint32_t)(ARC_W_R(c, 17)) + ((uint32_t)(ARC_W_R(c, 13)) * (uint32_t)(ARC_W_R(c, 14)))));
  /* d3aac: subs x16, x16, #1 */
  ARC_X_W(c, 16, arc_sub64(c, ARC_X_R(c, 16), UINT64_C(1)));
  /* d3ab0: b.ne #0xd3aa4 */
  if (ARC_COND(c, 1)) goto L_d3aa4;
L_d3ab4:;
  /* d3ab4: subs w14, w9, w11 */
  ARC_W_W(c, 14, arc_sub32(c, ARC_W_R(c, 9), ARC_W_R(c, 11)));
  /* d3ab8: b.le #0xd3b24 */
  if (ARC_COND(c, 13)) goto L_d3b24;
  /* d3abc: cmp w14, #8 */
  (void)arc_sub32(c, ARC_W_R(c, 14), UINT64_C(8));
  /* d3ac0: b.lo #0xd3b10 */
  if (ARC_COND(c, 3)) goto L_d3b10;
  /* d3ac4: movi v0.4s, #1 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = UINT64_C(1);
    _t.u32[1] = UINT64_C(1);
    _t.u32[2] = UINT64_C(1);
    _t.u32[3] = UINT64_C(1);
    (c)->q[0] = _t; }
  /* d3ac8: movi v1.4s, #1 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = UINT64_C(1);
    _t.u32[1] = UINT64_C(1);
    _t.u32[2] = UINT64_C(1);
    _t.u32[3] = UINT64_C(1);
    (c)->q[1] = _t; }
  /* d3acc: and w15, w14, #0xfffffff8 */
  ARC_W_W(c, 15, (ARC_W_R(c, 14) & UINT64_C(4294967288)));
  /* d3ad0: movi v2.4s, #0xa */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = UINT64_C(10);
    _t.u32[1] = UINT64_C(10);
    _t.u32[2] = UINT64_C(10);
    _t.u32[3] = UINT64_C(10);
    (c)->q[2] = _t; }
  /* d3ad4: add w11, w11, w15 */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) + ARC_W_R(c, 15)));
  /* d3ad8: mov v0.s[0], w13 */
  (c)->q[0].u32[0] = (ARC_W_R(c, 13));
  /* d3adc: mov w13, w15 */
  ARC_W_W(c, 13, ARC_W_R(c, 15));
L_d3ae0:;
  /* d3ae0: mul v0.4s, v0.4s, v2.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[0].u32[0] * (c)->q[2].u32[0];
    _t.u32[1] = (c)->q[0].u32[1] * (c)->q[2].u32[1];
    _t.u32[2] = (c)->q[0].u32[2] * (c)->q[2].u32[2];
    _t.u32[3] = (c)->q[0].u32[3] * (c)->q[2].u32[3];
    (c)->q[0] = _t; }
  /* d3ae4: mul v1.4s, v1.4s, v2.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[1].u32[0] * (c)->q[2].u32[0];
    _t.u32[1] = (c)->q[1].u32[1] * (c)->q[2].u32[1];
    _t.u32[2] = (c)->q[1].u32[2] * (c)->q[2].u32[2];
    _t.u32[3] = (c)->q[1].u32[3] * (c)->q[2].u32[3];
    (c)->q[1] = _t; }
  /* d3ae8: subs w13, w13, #8 */
  ARC_W_W(c, 13, arc_sub32(c, ARC_W_R(c, 13), UINT64_C(8)));
  /* d3aec: b.ne #0xd3ae0 */
  if (ARC_COND(c, 1)) goto L_d3ae0;
  /* d3af0: mul v0.4s, v1.4s, v0.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[1].u32[0] * (c)->q[0].u32[0];
    _t.u32[1] = (c)->q[1].u32[1] * (c)->q[0].u32[1];
    _t.u32[2] = (c)->q[1].u32[2] * (c)->q[0].u32[2];
    _t.u32[3] = (c)->q[1].u32[3] * (c)->q[0].u32[3];
    (c)->q[0] = _t; }
  /* d3af4: cmp w14, w15 */
  (void)arc_sub32(c, ARC_W_R(c, 14), ARC_W_R(c, 15));
  /* d3af8: ext v1.16b, v0.16b, v0.16b, #8 */
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
  /* d3afc: mul v0.2s, v0.2s, v1.2s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[0].u32[0] * (c)->q[1].u32[0];
    _t.u32[1] = (c)->q[0].u32[1] * (c)->q[1].u32[1];
    (c)->q[0] = _t; }
  /* d3b00: mov w13, v0.s[1] */
  ARC_W_W(c, 13, (c)->q[0].u32[1]);
  /* d3b04: fmov w16, s0 */
  ARC_W_W(c, 16, ARC_SU_R(c, 0));
  /* d3b08: mul w13, w16, w13 */
  ARC_W_W(c, 13, ((uint32_t)(ARC_W_R(c, 16)) * (uint32_t)(ARC_W_R(c, 13))));
  /* d3b0c: b.eq #0xd3b24 */
  if (ARC_COND(c, 0)) goto L_d3b24;
L_d3b10:;
  /* d3b10: sub w11, w9, w11 */
  ARC_W_W(c, 11, (ARC_W_R(c, 9) - ARC_W_R(c, 11)));
L_d3b14:;
  /* d3b14: add w13, w13, w13, lsl #2 */
  ARC_W_W(c, 13, (ARC_W_R(c, 13) + ((uint32_t)(ARC_W_R(c, 13)) << 2)));
  /* d3b18: subs w11, w11, #1 */
  ARC_W_W(c, 11, arc_sub32(c, ARC_W_R(c, 11), UINT64_C(1)));
  /* d3b1c: lsl w13, w13, #1 */
  ARC_W_W(c, 13, ((uint32_t)(ARC_W_R(c, 13)) << ((UINT64_C(1)) & 31)));
  /* d3b20: b.ne #0xd3b14 */
  if (ARC_COND(c, 1)) goto L_d3b14;
L_d3b24:;
  /* d3b24: mov w14, wzr */
  ARC_W_W(c, 14, ARC_W_R(c, 31));
  /* d3b28: add w11, w21, #0x7e */
  ARC_W_W(c, 11, (ARC_W_R(c, 21) + UINT64_C(126)));
  /* d3b2c: tbnz w9, #0x1f, #0xd3bb8 */
  if (((ARC_W_R(c, 9)) >> 31 & 1) != 0) goto L_d3bb8;
  /* d3b30: cmp w9, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 9), ARC_W_R(c, 10));
  /* d3b34: b.hs #0xd3bb8 */
  if (ARC_COND(c, 2)) goto L_d3bb8;
  /* d3b38: ldrb w14, [x20, w9, uxtw] */
  ARC_W_W(c, 14, arc_ld8((ARC_X_R(c, 20) + ((uint64_t)(uint32_t)(ARC_W_R(c, 9))))));
  /* d3b3c: cmp w14, #5 */
  (void)arc_sub32(c, ARC_W_R(c, 14), UINT64_C(5));
  /* d3b40: b.ne #0xd3b98 */
  if (ARC_COND(c, 1)) goto L_d3b98;
  /* d3b44: add w15, w9, #1 */
  ARC_W_W(c, 15, (ARC_W_R(c, 9) + UINT64_C(1)));
  /* d3b48: cmp w15, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 15), ARC_W_R(c, 10));
  /* d3b4c: b.ne #0xd3b98 */
  if (ARC_COND(c, 1)) goto L_d3b98;
  /* d3b50: ldrb w14, [sp, #0xc] */
  ARC_W_W(c, 14, arc_ld8(((c)->sp + INT64_C(12))));
  /* d3b54: tbz w14, #0, #0xd3ba4 */
  if (((ARC_W_R(c, 14)) >> 0 & 1) == 0) goto L_d3ba4;
  /* d3b58: mov w14, #1 */
  ARC_W_W(c, 14, UINT64_C(1));
  /* d3b5c: b #0xd3bb8 */
  goto L_d3bb8;
L_d3b60:;
  /* d3b60: nop  */
  /* nop: no architectural effect here */
  /* d3b64: adr x9, #0x557f0 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(350192)));
  /* d3b68: ldr s1, [x9, x11, lsl #2] */
  arc_su_w(c, 1, arc_ld32((ARC_X_R(c, 9) + ((uint64_t)(ARC_X_R(c, 11)) << 2))));
  /* d3b6c: fmul s0, s0, s1 */
  arc_s_w(c, 0, (float)(arc_fmul32(ARC_S_R(c, 0), ARC_S_R(c, 1))));
L_d3b70:;
  /* d3b70: fmov w11, s0 */
  ARC_W_W(c, 11, ARC_SU_R(c, 0));
L_d3b74:;
  /* d3b74: lsr w10, w11, #0x17 */
  ARC_W_W(c, 10, ((uint32_t)(ARC_W_R(c, 11)) >> ((UINT64_C(23)) & 31)));
  /* d3b78: mov w12, w11 */
  ARC_W_W(c, 12, ARC_W_R(c, 11));
  /* d3b7c: mov w9, wzr */
  ARC_W_W(c, 9, ARC_W_R(c, 31));
  /* d3b80: orr x10, x12, x10, lsl #32 */
  ARC_X_W(c, 10, (ARC_X_R(c, 12) | ((uint64_t)(ARC_X_R(c, 10)) << 32)));
  /* d3b84: and x10, x10, #0xffffffff00 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) & UINT64_C(1099511627520)));
  /* d3b88: and x10, x10, #0xffffffff00ffffff */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) & UINT64_C(18446744069431361535)));
L_d3b8c:;
  /* d3b8c: and w11, w11, #0xff */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) & UINT64_C(255)));
  /* d3b90: orr x10, x10, x11 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) | ARC_X_R(c, 11)));
  /* d3b94: b #0xd3444 */
  goto L_d3444;
L_d3b98:;
  /* d3b98: cmp w14, #4 */
  (void)arc_sub32(c, ARC_W_R(c, 14), UINT64_C(4));
  /* d3b9c: cset w14, hi */
  ARC_W_W(c, 14, (ARC_COND(c, 8) ? 1 : 0));
  /* d3ba0: b #0xd3bb8 */
  goto L_d3bb8;
L_d3ba4:;
  /* d3ba4: cbz w9, #0xd3bb4 */
  if ((ARC_W_R(c, 9)) == 0) goto L_d3bb4;
  /* d3ba8: ldrb w12, [x20, w12, uxtw] */
  ARC_W_W(c, 12, arc_ld8((ARC_X_R(c, 20) + ((uint64_t)(uint32_t)(ARC_W_R(c, 12))))));
  /* d3bac: and w14, w12, #1 */
  ARC_W_W(c, 14, (ARC_W_R(c, 12) & UINT64_C(1)));
  /* d3bb0: b #0xd3bb8 */
  goto L_d3bb8;
L_d3bb4:;
  /* d3bb4: mov w14, wzr */
  ARC_W_W(c, 14, ARC_W_R(c, 31));
L_d3bb8:;
  /* d3bb8: cmn w21, #0x7e */
  (void)arc_add32(c, ARC_W_R(c, 21), UINT64_C(126), 0);
  /* d3bbc: b.gt #0xd3cd8 */
  if (ARC_COND(c, 12)) goto L_d3cd8;
  /* d3bc0: b.eq #0xd3ce4 */
  if (ARC_COND(c, 0)) goto L_d3ce4;
  /* d3bc4: ldrb w12, [sp, #0xc] */
  ARC_W_W(c, 12, arc_ld8(((c)->sp + INT64_C(12))));
  /* d3bc8: mov w13, #0xa */
  ARC_W_W(c, 13, UINT64_C(10));
  /* d3bcc: b #0xd3c14 */
  goto L_d3c14;
L_d3bd0:;
  /* d3bd0: mov w10, w14 */
  ARC_W_W(c, 10, ARC_W_R(c, 14));
  /* d3bd4: sub w9, w9, w15 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) - ARC_W_R(c, 15)));
  /* d3bd8: add x16, x10, x20 */
  ARC_X_W(c, 16, (ARC_X_R(c, 10) + ARC_X_R(c, 20)));
  /* d3bdc: add w9, w9, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) + UINT64_C(1)));
  /* d3be0: ldurb w16, [x16, #-1] */
  ARC_W_W(c, 16, arc_ld8((ARC_X_R(c, 16) + INT64_C(-1))));
  /* d3be4: cbz w16, #0xd3bf8 */
  if ((ARC_W_R(c, 16)) == 0) goto L_d3bf8;
L_d3be8:;
  /* d3be8: mov w10, w14 */
  ARC_W_W(c, 10, ARC_W_R(c, 14));
  /* d3bec: adds w11, w11, #1 */
  ARC_W_W(c, 11, arc_add32(c, ARC_W_R(c, 11), UINT64_C(1), 0));
  /* d3bf0: b.lo #0xd3c14 */
  if (ARC_COND(c, 3)) goto L_d3c14;
  /* d3bf4: b #0xd3ce0 */
  goto L_d3ce0;
L_d3bf8:;
  /* d3bf8: sub x10, x10, #2 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) - UINT64_C(2)));
L_d3bfc:;
  /* d3bfc: subs w14, w14, #1 */
  ARC_W_W(c, 14, arc_sub32(c, ARC_W_R(c, 14), UINT64_C(1)));
  /* d3c00: b.eq #0xd3c8c */
  if (ARC_COND(c, 0)) goto L_d3c8c;
  /* d3c04: ldrb w15, [x20, w10, uxtw] */
  ARC_W_W(c, 15, arc_ld8((ARC_X_R(c, 20) + ((uint64_t)(uint32_t)(ARC_W_R(c, 10))))));
  /* d3c08: sub x10, x10, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) - UINT64_C(1)));
  /* d3c0c: cbz w15, #0xd3bfc */
  if ((ARC_W_R(c, 15)) == 0) goto L_d3bfc;
  /* d3c10: b #0xd3be8 */
  goto L_d3be8;
L_d3c14:;
  /* d3c14: mov w15, wzr */
  ARC_W_W(c, 15, ARC_W_R(c, 31));
  /* d3c18: mov x16, xzr */
  ARC_X_W(c, 16, ARC_X_R(c, 31));
  /* d3c1c: b #0xd3c38 */
  goto L_d3c38;
L_d3c20:;
  /* d3c20: ldrb w14, [x20, w17, uxtw] */
  ARC_W_W(c, 14, arc_ld8((ARC_X_R(c, 20) + ((uint64_t)(uint32_t)(ARC_W_R(c, 17))))));
L_d3c24:;
  /* d3c24: nop  */
  /* nop: no architectural effect here */
  /* d3c28: madd x16, x16, x13, x14 */
  ARC_X_W(c, 16, ((uint64_t)(ARC_X_R(c, 14)) + ((uint64_t)(ARC_X_R(c, 16)) * (uint64_t)(ARC_X_R(c, 13)))));
  /* d3c2c: add w15, w17, #1 */
  ARC_W_W(c, 15, (ARC_W_R(c, 17) + UINT64_C(1)));
  /* d3c30: cmp x16, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 16), UINT64_C(2));
  /* d3c34: b.hs #0xd3c4c */
  if (ARC_COND(c, 2)) goto L_d3c4c;
L_d3c38:;
  /* d3c38: mov w17, w15 */
  ARC_W_W(c, 17, ARC_W_R(c, 15));
  /* d3c3c: cmp w15, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 15), ARC_W_R(c, 10));
  /* d3c40: b.lo #0xd3c20 */
  if (ARC_COND(c, 3)) goto L_d3c20;
  /* d3c44: mov x14, xzr */
  ARC_X_W(c, 14, ARC_X_R(c, 31));
  /* d3c48: b #0xd3c24 */
  goto L_d3c24;
L_d3c4c:;
  /* d3c4c: subs w14, w10, w15 */
  ARC_W_W(c, 14, arc_sub32(c, ARC_W_R(c, 10), ARC_W_R(c, 15)));
  /* d3c50: b.ls #0xd3ca0 */
  if (ARC_COND(c, 9)) goto L_d3ca0;
  /* d3c54: mvn w17, w17 */
  ARC_W_W(c, 17, (~(uint32_t)(ARC_W_R(c, 17))));
  /* d3c58: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* d3c5c: add w17, w17, w10 */
  ARC_W_W(c, 17, (ARC_W_R(c, 17) + ARC_W_R(c, 10)));
L_d3c60:;
  /* d3c60: ldrb w1, [x0, w15, uxtw] */
  ARC_W_W(c, 1, arc_ld8((ARC_X_R(c, 0) + ((uint64_t)(uint32_t)(ARC_W_R(c, 15))))));
  /* d3c64: tst w16, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 16) & UINT64_C(1)));
  /* d3c68: lsr x2, x16, #1 */
  ARC_X_W(c, 2, ((uint64_t)(ARC_X_R(c, 16)) >> ((UINT64_C(1)) & 63)));
  /* d3c6c: csel x16, x13, xzr, ne */
  ARC_X_W(c, 16, (ARC_COND(c, 1) ? (ARC_X_R(c, 13)) : ARC_X_R(c, 31)));
  /* d3c70: subs w17, w17, #1 */
  ARC_W_W(c, 17, arc_sub32(c, ARC_W_R(c, 17), UINT64_C(1)));
  /* d3c74: add x16, x16, x1 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + ARC_X_R(c, 1)));
  /* d3c78: strb w2, [x0], #1 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(1));
    arc_st8(_a, ARC_W_R(c, 2));
  }
  /* d3c7c: b.ne #0xd3c60 */
  if (ARC_COND(c, 1)) goto L_d3c60;
  /* d3c80: cbnz x16, #0xd3cc0 */
  if ((ARC_X_R(c, 16)) != 0) goto L_d3cc0;
  /* d3c84: cmp w10, w15 */
  (void)arc_sub32(c, ARC_W_R(c, 10), ARC_W_R(c, 15));
  /* d3c88: b.ne #0xd3bd0 */
  if (ARC_COND(c, 1)) goto L_d3bd0;
L_d3c8c:;
  /* d3c8c: mov w9, wzr */
  ARC_W_W(c, 9, ARC_W_R(c, 31));
  /* d3c90: mov w10, wzr */
  ARC_W_W(c, 10, ARC_W_R(c, 31));
  /* d3c94: adds w11, w11, #1 */
  ARC_W_W(c, 11, arc_add32(c, ARC_W_R(c, 11), UINT64_C(1), 0));
  /* d3c98: b.lo #0xd3c14 */
  if (ARC_COND(c, 3)) goto L_d3c14;
  /* d3c9c: b #0xd3ce0 */
  goto L_d3ce0;
L_d3ca0:;
  /* d3ca0: mov w14, wzr */
  ARC_W_W(c, 14, ARC_W_R(c, 31));
  /* d3ca4: b #0xd3cc0 */
  goto L_d3cc0;
L_d3ca8:;
  /* d3ca8: cmp x16, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 16), UINT64_C(2));
  /* d3cac: csinc w12, w12, wzr, lo */
  ARC_W_W(c, 12, (ARC_COND(c, 3) ? (ARC_W_R(c, 12)) : ((ARC_W_R(c, 31)) + 1)));
L_d3cb0:;
  /* d3cb0: and x10, x16, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 16) & UINT64_C(1)));
  /* d3cb4: lsl x16, x10, #1 */
  ARC_X_W(c, 16, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* d3cb8: orr x16, x16, x10, lsl #3 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) | ((uint64_t)(ARC_X_R(c, 10)) << 3)));
  /* d3cbc: cbz x10, #0xd3bd0 */
  if ((ARC_X_R(c, 10)) == 0) goto L_d3bd0;
L_d3cc0:;
  /* d3cc0: cmp w14, #0x31f */
  (void)arc_sub32(c, ARC_W_R(c, 14), UINT64_C(799));
  /* d3cc4: b.hi #0xd3ca8 */
  if (ARC_COND(c, 8)) goto L_d3ca8;
  /* d3cc8: lsr x10, x16, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 16)) >> ((UINT64_C(1)) & 63)));
  /* d3ccc: strb w10, [x20, w14, uxtw] */
  arc_st8((ARC_X_R(c, 20) + ((uint64_t)(uint32_t)(ARC_W_R(c, 14)))), ARC_W_R(c, 10));
  /* d3cd0: add w14, w14, #1 */
  ARC_W_W(c, 14, (ARC_W_R(c, 14) + UINT64_C(1)));
  /* d3cd4: b #0xd3cb0 */
  goto L_d3cb0;
L_d3cd8:;
  /* d3cd8: add w9, w13, w14 */
  ARC_W_W(c, 9, (ARC_W_R(c, 13) + ARC_W_R(c, 14)));
  /* d3cdc: b #0xd3ef8 */
  goto L_d3ef8;
L_d3ce0:;
  /* d3ce0: strb w12, [sp, #0xc] */
  arc_st8(((c)->sp + INT64_C(12)), ARC_W_R(c, 12));
L_d3ce4:;
  /* d3ce4: mov w11, wzr */
  ARC_W_W(c, 11, ARC_W_R(c, 31));
  /* d3ce8: mov x13, xzr */
  ARC_X_W(c, 13, ARC_X_R(c, 31));
  /* d3cec: mov w12, #0xa */
  ARC_W_W(c, 12, UINT64_C(10));
  /* d3cf0: b #0xd3d0c */
  goto L_d3d0c;
L_d3cf4:;
  /* d3cf4: ldrb w14, [x20, w11, uxtw] */
  ARC_W_W(c, 14, arc_ld8((ARC_X_R(c, 20) + ((uint64_t)(uint32_t)(ARC_W_R(c, 11))))));
L_d3cf8:;
  /* d3cf8: nop  */
  /* nop: no architectural effect here */
  /* d3cfc: madd x13, x13, x12, x14 */
  ARC_X_W(c, 13, ((uint64_t)(ARC_X_R(c, 14)) + ((uint64_t)(ARC_X_R(c, 13)) * (uint64_t)(ARC_X_R(c, 12)))));
  /* d3d00: add w11, w11, #1 */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) + UINT64_C(1)));
  /* d3d04: cmp x13, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 13), UINT64_C(2));
  /* d3d08: b.hs #0xd3d1c */
  if (ARC_COND(c, 2)) goto L_d3d1c;
L_d3d0c:;
  /* d3d0c: cmp w11, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 11), ARC_W_R(c, 10));
  /* d3d10: b.lo #0xd3cf4 */
  if (ARC_COND(c, 3)) goto L_d3cf4;
  /* d3d14: mov x14, xzr */
  ARC_X_W(c, 14, ARC_X_R(c, 31));
  /* d3d18: b #0xd3cf8 */
  goto L_d3cf8;
L_d3d1c:;
  /* d3d1c: subs w12, w10, w11 */
  ARC_W_W(c, 12, arc_sub32(c, ARC_W_R(c, 10), ARC_W_R(c, 11)));
  /* d3d20: b.ls #0xd3d68 */
  if (ARC_COND(c, 9)) goto L_d3d68;
  /* d3d24: mov w14, #0xa */
  ARC_W_W(c, 14, UINT64_C(10));
  /* d3d28: mov x15, x20 */
  ARC_X_W(c, 15, ARC_X_R(c, 20));
  /* d3d2c: mov w16, w12 */
  ARC_W_W(c, 16, ARC_W_R(c, 12));
L_d3d30:;
  /* d3d30: ldrb w17, [x15, w11, uxtw] */
  ARC_W_W(c, 17, arc_ld8((ARC_X_R(c, 15) + ((uint64_t)(uint32_t)(ARC_W_R(c, 11))))));
  /* d3d34: tst w13, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 13) & UINT64_C(1)));
  /* d3d38: lsr x0, x13, #1 */
  ARC_X_W(c, 0, ((uint64_t)(ARC_X_R(c, 13)) >> ((UINT64_C(1)) & 63)));
  /* d3d3c: csel x13, x14, xzr, ne */
  ARC_X_W(c, 13, (ARC_COND(c, 1) ? (ARC_X_R(c, 14)) : ARC_X_R(c, 31)));
  /* d3d40: subs w16, w16, #1 */
  ARC_W_W(c, 16, arc_sub32(c, ARC_W_R(c, 16), UINT64_C(1)));
  /* d3d44: add x13, x13, x17 */
  ARC_X_W(c, 13, (ARC_X_R(c, 13) + ARC_X_R(c, 17)));
  /* d3d48: strb w0, [x15], #1 */
  { const uint64_t _a = ARC_X_R(c, 15);
    ARC_X_W(c, 15, ARC_X_R(c, 15) + INT64_C(1));
    arc_st8(_a, ARC_W_R(c, 0));
  }
  /* d3d4c: b.ne #0xd3d30 */
  if (ARC_COND(c, 1)) goto L_d3d30;
  /* d3d50: cbnz x13, #0xd3d6c */
  if ((ARC_X_R(c, 13)) != 0) goto L_d3d6c;
  /* d3d54: cmp w10, w11 */
  (void)arc_sub32(c, ARC_W_R(c, 10), ARC_W_R(c, 11));
  /* d3d58: b.ne #0xd3da8 */
  if (ARC_COND(c, 1)) goto L_d3da8;
L_d3d5c:;
  /* d3d5c: mov w10, wzr */
  ARC_W_W(c, 10, ARC_W_R(c, 31));
  /* d3d60: mov w15, wzr */
  ARC_W_W(c, 15, ARC_W_R(c, 31));
  /* d3d64: b #0xd3eec */
  goto L_d3eec;
L_d3d68:;
  /* d3d68: mov w12, wzr */
  ARC_W_W(c, 12, ARC_W_R(c, 31));
L_d3d6c:;
  /* d3d6c: ldrb w10, [sp, #0xc] */
  ARC_W_W(c, 10, arc_ld8(((c)->sp + INT64_C(12))));
  /* d3d70: b #0xd3d8c */
  goto L_d3d8c;
L_d3d74:;
  /* d3d74: cmp x13, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 13), UINT64_C(2));
  /* d3d78: csinc w10, w10, wzr, lo */
  ARC_W_W(c, 10, (ARC_COND(c, 3) ? (ARC_W_R(c, 10)) : ((ARC_W_R(c, 31)) + 1)));
L_d3d7c:;
  /* d3d7c: and x14, x13, #1 */
  ARC_X_W(c, 14, (ARC_X_R(c, 13) & UINT64_C(1)));
  /* d3d80: lsl x13, x14, #1 */
  ARC_X_W(c, 13, ((uint64_t)(ARC_X_R(c, 14)) << ((UINT64_C(1)) & 63)));
  /* d3d84: orr x13, x13, x14, lsl #3 */
  ARC_X_W(c, 13, (ARC_X_R(c, 13) | ((uint64_t)(ARC_X_R(c, 14)) << 3)));
  /* d3d88: cbz x14, #0xd3da4 */
  if ((ARC_X_R(c, 14)) == 0) goto L_d3da4;
L_d3d8c:;
  /* d3d8c: cmp w12, #0x31f */
  (void)arc_sub32(c, ARC_W_R(c, 12), UINT64_C(799));
  /* d3d90: b.hi #0xd3d74 */
  if (ARC_COND(c, 8)) goto L_d3d74;
  /* d3d94: lsr x14, x13, #1 */
  ARC_X_W(c, 14, ((uint64_t)(ARC_X_R(c, 13)) >> ((UINT64_C(1)) & 63)));
  /* d3d98: strb w14, [x20, w12, uxtw] */
  arc_st8((ARC_X_R(c, 20) + ((uint64_t)(uint32_t)(ARC_W_R(c, 12)))), ARC_W_R(c, 14));
  /* d3d9c: add w12, w12, #1 */
  ARC_W_W(c, 12, (ARC_W_R(c, 12) + UINT64_C(1)));
  /* d3da0: b #0xd3d7c */
  goto L_d3d7c;
L_d3da4:;
  /* d3da4: strb w10, [sp, #0xc] */
  arc_st8(((c)->sp + INT64_C(12)), ARC_W_R(c, 10));
L_d3da8:;
  /* d3da8: mov w10, w12 */
  ARC_W_W(c, 10, ARC_W_R(c, 12));
  /* d3dac: add x13, x10, x20 */
  ARC_X_W(c, 13, (ARC_X_R(c, 10) + ARC_X_R(c, 20)));
  /* d3db0: ldurb w13, [x13, #-1] */
  ARC_W_W(c, 13, arc_ld8((ARC_X_R(c, 13) + INT64_C(-1))));
  /* d3db4: cbnz w13, #0xd3dd0 */
  if ((ARC_W_R(c, 13)) != 0) goto L_d3dd0;
  /* d3db8: sub x10, x10, #2 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) - UINT64_C(2)));
L_d3dbc:;
  /* d3dbc: subs w12, w12, #1 */
  ARC_W_W(c, 12, arc_sub32(c, ARC_W_R(c, 12), UINT64_C(1)));
  /* d3dc0: b.eq #0xd3d5c */
  if (ARC_COND(c, 0)) goto L_d3d5c;
  /* d3dc4: ldrb w13, [x20, w10, uxtw] */
  ARC_W_W(c, 13, arc_ld8((ARC_X_R(c, 20) + ((uint64_t)(uint32_t)(ARC_W_R(c, 10))))));
  /* d3dc8: sub x10, x10, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) - UINT64_C(1)));
  /* d3dcc: cbz w13, #0xd3dbc */
  if ((ARC_W_R(c, 13)) == 0) goto L_d3dbc;
L_d3dd0:;
  /* d3dd0: sub w13, w9, w11 */
  ARC_W_W(c, 13, (ARC_W_R(c, 9) - ARC_W_R(c, 11)));
  /* d3dd4: mov w10, wzr */
  ARC_W_W(c, 10, ARC_W_R(c, 31));
  /* d3dd8: mov w15, wzr */
  ARC_W_W(c, 15, ARC_W_R(c, 31));
  /* d3ddc: add w14, w13, #1 */
  ARC_W_W(c, 14, (ARC_W_R(c, 13) + UINT64_C(1)));
  /* d3de0: cmp w14, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 14), UINT64_C(1));
  /* d3de4: b.lt #0xd3e20 */
  if (ARC_COND(c, 11)) goto L_d3e20;
  /* d3de8: cbz w12, #0xd3e20 */
  if ((ARC_W_R(c, 12)) == 0) goto L_d3e20;
  /* d3dec: cmp w14, w12 */
  (void)arc_sub32(c, ARC_W_R(c, 14), ARC_W_R(c, 12));
  /* d3df0: mov w16, w12 */
  ARC_W_W(c, 16, ARC_W_R(c, 12));
  /* d3df4: add w17, w13, #1 */
  ARC_W_W(c, 17, (ARC_W_R(c, 13) + UINT64_C(1)));
  /* d3df8: csel w15, w14, w12, lo */
  ARC_W_W(c, 15, (ARC_COND(c, 3) ? (ARC_W_R(c, 14)) : ARC_W_R(c, 12)));
  /* d3dfc: cmp x16, x17 */
  (void)arc_sub64(c, ARC_X_R(c, 16), ARC_X_R(c, 17));
  /* d3e00: mov w10, wzr */
  ARC_W_W(c, 10, ARC_W_R(c, 31));
  /* d3e04: csel x16, x16, x17, lo */
  ARC_X_W(c, 16, (ARC_COND(c, 3) ? (ARC_X_R(c, 16)) : ARC_X_R(c, 17)));
  /* d3e08: mov w17, #0xa */
  ARC_W_W(c, 17, UINT64_C(10));
  /* d3e0c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
L_d3e10:;
  /* d3e10: ldrb w1, [x0], #1 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(1));
    ARC_W_W(c, 1, arc_ld8(_a));
  }
  /* d3e14: madd w10, w10, w17, w1 */
  ARC_W_W(c, 10, ((uint32_t)(ARC_W_R(c, 1)) + ((uint32_t)(ARC_W_R(c, 10)) * (uint32_t)(ARC_W_R(c, 17)))));
  /* d3e18: subs x16, x16, #1 */
  ARC_X_W(c, 16, arc_sub64(c, ARC_X_R(c, 16), UINT64_C(1)));
  /* d3e1c: b.ne #0xd3e10 */
  if (ARC_COND(c, 1)) goto L_d3e10;
L_d3e20:;
  /* d3e20: cmp w15, w14 */
  (void)arc_sub32(c, ARC_W_R(c, 15), ARC_W_R(c, 14));
  /* d3e24: b.ge #0xd3ea4 */
  if (ARC_COND(c, 10)) goto L_d3ea4;
  /* d3e28: sub w16, w9, w15 */
  ARC_W_W(c, 16, (ARC_W_R(c, 9) - ARC_W_R(c, 15)));
  /* d3e2c: sub w16, w16, w11 */
  ARC_W_W(c, 16, (ARC_W_R(c, 16) - ARC_W_R(c, 11)));
  /* d3e30: add w16, w16, #1 */
  ARC_W_W(c, 16, (ARC_W_R(c, 16) + UINT64_C(1)));
  /* d3e34: cmp w16, #8 */
  (void)arc_sub32(c, ARC_W_R(c, 16), UINT64_C(8));
  /* d3e38: b.lo #0xd3e88 */
  if (ARC_COND(c, 3)) goto L_d3e88;
  /* d3e3c: movi v0.4s, #1 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = UINT64_C(1);
    _t.u32[1] = UINT64_C(1);
    _t.u32[2] = UINT64_C(1);
    _t.u32[3] = UINT64_C(1);
    (c)->q[0] = _t; }
  /* d3e40: movi v1.4s, #1 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = UINT64_C(1);
    _t.u32[1] = UINT64_C(1);
    _t.u32[2] = UINT64_C(1);
    _t.u32[3] = UINT64_C(1);
    (c)->q[1] = _t; }
  /* d3e44: and w17, w16, #0xfffffff8 */
  ARC_W_W(c, 17, (ARC_W_R(c, 16) & UINT64_C(4294967288)));
  /* d3e48: movi v2.4s, #0xa */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = UINT64_C(10);
    _t.u32[1] = UINT64_C(10);
    _t.u32[2] = UINT64_C(10);
    _t.u32[3] = UINT64_C(10);
    (c)->q[2] = _t; }
  /* d3e4c: add w15, w15, w17 */
  ARC_W_W(c, 15, (ARC_W_R(c, 15) + ARC_W_R(c, 17)));
  /* d3e50: mov v0.s[0], w10 */
  (c)->q[0].u32[0] = (ARC_W_R(c, 10));
  /* d3e54: mov w10, w17 */
  ARC_W_W(c, 10, ARC_W_R(c, 17));
L_d3e58:;
  /* d3e58: mul v0.4s, v0.4s, v2.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[0].u32[0] * (c)->q[2].u32[0];
    _t.u32[1] = (c)->q[0].u32[1] * (c)->q[2].u32[1];
    _t.u32[2] = (c)->q[0].u32[2] * (c)->q[2].u32[2];
    _t.u32[3] = (c)->q[0].u32[3] * (c)->q[2].u32[3];
    (c)->q[0] = _t; }
  /* d3e5c: mul v1.4s, v1.4s, v2.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[1].u32[0] * (c)->q[2].u32[0];
    _t.u32[1] = (c)->q[1].u32[1] * (c)->q[2].u32[1];
    _t.u32[2] = (c)->q[1].u32[2] * (c)->q[2].u32[2];
    _t.u32[3] = (c)->q[1].u32[3] * (c)->q[2].u32[3];
    (c)->q[1] = _t; }
  /* d3e60: subs w10, w10, #8 */
  ARC_W_W(c, 10, arc_sub32(c, ARC_W_R(c, 10), UINT64_C(8)));
  /* d3e64: b.ne #0xd3e58 */
  if (ARC_COND(c, 1)) goto L_d3e58;
  /* d3e68: mul v0.4s, v1.4s, v0.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[1].u32[0] * (c)->q[0].u32[0];
    _t.u32[1] = (c)->q[1].u32[1] * (c)->q[0].u32[1];
    _t.u32[2] = (c)->q[1].u32[2] * (c)->q[0].u32[2];
    _t.u32[3] = (c)->q[1].u32[3] * (c)->q[0].u32[3];
    (c)->q[0] = _t; }
  /* d3e6c: cmp w16, w17 */
  (void)arc_sub32(c, ARC_W_R(c, 16), ARC_W_R(c, 17));
  /* d3e70: ext v1.16b, v0.16b, v0.16b, #8 */
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
  /* d3e74: mul v0.2s, v0.2s, v1.2s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[0].u32[0] * (c)->q[1].u32[0];
    _t.u32[1] = (c)->q[0].u32[1] * (c)->q[1].u32[1];
    (c)->q[0] = _t; }
  /* d3e78: mov w10, v0.s[1] */
  ARC_W_W(c, 10, (c)->q[0].u32[1]);
  /* d3e7c: fmov w0, s0 */
  ARC_W_W(c, 0, ARC_SU_R(c, 0));
  /* d3e80: mul w10, w0, w10 */
  ARC_W_W(c, 10, ((uint32_t)(ARC_W_R(c, 0)) * (uint32_t)(ARC_W_R(c, 10))));
  /* d3e84: b.eq #0xd3ea4 */
  if (ARC_COND(c, 0)) goto L_d3ea4;
L_d3e88:;
  /* d3e88: sub w15, w9, w15 */
  ARC_W_W(c, 15, (ARC_W_R(c, 9) - ARC_W_R(c, 15)));
  /* d3e8c: sub w15, w15, w11 */
  ARC_W_W(c, 15, (ARC_W_R(c, 15) - ARC_W_R(c, 11)));
  /* d3e90: add w15, w15, #1 */
  ARC_W_W(c, 15, (ARC_W_R(c, 15) + UINT64_C(1)));
L_d3e94:;
  /* d3e94: add w10, w10, w10, lsl #2 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) + ((uint32_t)(ARC_W_R(c, 10)) << 2)));
  /* d3e98: subs w15, w15, #1 */
  ARC_W_W(c, 15, arc_sub32(c, ARC_W_R(c, 15), UINT64_C(1)));
  /* d3e9c: lsl w10, w10, #1 */
  ARC_W_W(c, 10, ((uint32_t)(ARC_W_R(c, 10)) << ((UINT64_C(1)) & 31)));
  /* d3ea0: b.ne #0xd3e94 */
  if (ARC_COND(c, 1)) goto L_d3e94;
L_d3ea4:;
  /* d3ea4: mov w15, wzr */
  ARC_W_W(c, 15, ARC_W_R(c, 31));
  /* d3ea8: tbnz w14, #0x1f, #0xd3eec */
  if (((ARC_W_R(c, 14)) >> 31 & 1) != 0) goto L_d3eec;
  /* d3eac: cmp w14, w12 */
  (void)arc_sub32(c, ARC_W_R(c, 14), ARC_W_R(c, 12));
  /* d3eb0: b.hs #0xd3eec */
  if (ARC_COND(c, 2)) goto L_d3eec;
  /* d3eb4: ldrb w14, [x20, w14, uxtw] */
  ARC_W_W(c, 14, arc_ld8((ARC_X_R(c, 20) + ((uint64_t)(uint32_t)(ARC_W_R(c, 14))))));
  /* d3eb8: cmp w14, #5 */
  (void)arc_sub32(c, ARC_W_R(c, 14), UINT64_C(5));
  /* d3ebc: b.ne #0xd3ee4 */
  if (ARC_COND(c, 1)) goto L_d3ee4;
  /* d3ec0: sub w12, w12, w9 */
  ARC_W_W(c, 12, (ARC_W_R(c, 12) - ARC_W_R(c, 9)));
  /* d3ec4: add w12, w12, w11 */
  ARC_W_W(c, 12, (ARC_W_R(c, 12) + ARC_W_R(c, 11)));
  /* d3ec8: cmp w12, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 12), UINT64_C(2));
  /* d3ecc: b.ne #0xd3ee4 */
  if (ARC_COND(c, 1)) goto L_d3ee4;
  /* d3ed0: ldrb w8, [sp, #0xc] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(12))));
  /* d3ed4: tbz w8, #0, #0xd3f38 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_d3f38;
  /* d3ed8: mov w15, #1 */
  ARC_W_W(c, 15, UINT64_C(1));
  /* d3edc: mov x8, x23 */
  ARC_X_W(c, 8, ARC_X_R(c, 23));
  /* d3ee0: b #0xd3eec */
  goto L_d3eec;
L_d3ee4:;
  /* d3ee4: cmp w14, #4 */
  (void)arc_sub32(c, ARC_W_R(c, 14), UINT64_C(4));
  /* d3ee8: cset w15, hi */
  ARC_W_W(c, 15, (ARC_COND(c, 8) ? 1 : 0));
L_d3eec:;
  /* d3eec: add w9, w10, w15 */
  ARC_W_W(c, 9, (ARC_W_R(c, 10) + ARC_W_R(c, 15)));
  /* d3ef0: tst w9, #0xff800000 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(4286578688)));
  /* d3ef4: cset w11, ne */
  ARC_W_W(c, 11, (ARC_COND(c, 1) ? 1 : 0));
L_d3ef8:;
  /* d3ef8: mov w10, #0x1000000 */
  ARC_W_W(c, 10, UINT64_C(16777216));
  /* d3efc: cmp w9, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 9), ARC_W_R(c, 10));
  /* d3f00: b.ne #0xd3f24 */
  if (ARC_COND(c, 1)) goto L_d3f24;
  /* d3f04: cmp w11, #0xfe */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(254));
  /* d3f08: mov w9, #0xfe */
  ARC_W_W(c, 9, UINT64_C(254));
  /* d3f0c: csel w9, w11, w9, lt */
  ARC_W_W(c, 9, (ARC_COND(c, 11) ? (ARC_W_R(c, 11)) : ARC_W_R(c, 9)));
  /* d3f10: cmp w11, #0xfd */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(253));
  /* d3f14: add w9, w9, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) + UINT64_C(1)));
  /* d3f18: lsl x10, x9, #0x20 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 9)) << ((UINT64_C(32)) & 63)));
  /* d3f1c: b.gt #0xd3440 */
  if (ARC_COND(c, 12)) goto L_d3440;
  /* d3f20: b #0xd3f30 */
  goto L_d3f30;
L_d3f24:;
  /* d3f24: mov w9, w9 */
  ARC_W_W(c, 9, ARC_W_R(c, 9));
  /* d3f28: orr x10, x9, x11, lsl #32 */
  ARC_X_W(c, 10, (ARC_X_R(c, 9) | ((uint64_t)(ARC_X_R(c, 11)) << 32)));
  /* d3f2c: cbz w11, #0xd3440 */
  if ((ARC_W_R(c, 11)) == 0) goto L_d3440;
L_d3f30:;
  /* d3f30: mov w9, wzr */
  ARC_W_W(c, 9, ARC_W_R(c, 31));
  /* d3f34: b #0xd3444 */
  goto L_d3444;
L_d3f38:;
  /* d3f38: add w8, w9, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 9) + UINT64_C(1)));
  /* d3f3c: cmp w8, w11 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 11));
  /* d3f40: b.ne #0xd3f50 */
  if (ARC_COND(c, 1)) goto L_d3f50;
  /* d3f44: mov w15, wzr */
  ARC_W_W(c, 15, ARC_W_R(c, 31));
  /* d3f48: mov x8, x23 */
  ARC_X_W(c, 8, ARC_X_R(c, 23));
  /* d3f4c: b #0xd3eec */
  goto L_d3eec;
L_d3f50:;
  /* d3f50: ldrb w8, [x20, w13, uxtw] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 20) + ((uint64_t)(uint32_t)(ARC_W_R(c, 13))))));
  /* d3f54: and w15, w8, #1 */
  ARC_W_W(c, 15, (ARC_W_R(c, 8) & UINT64_C(1)));
  /* d3f58: mov x8, x23 */
  ARC_X_W(c, 8, ARC_X_R(c, 23));
  /* d3f5c: b #0xd3eec */
  goto L_d3eec;
}

void fn1_d86fc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038814460));
  /* d86fc: bti c */
  /* bti: no architectural effect here */
  /* d8700: ldrb w9, [x0] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 0)));
  /* d8704: ldr x8, [x0, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* d8708: lsr x10, x9, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(1)) & 63)));
  /* d870c: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* d8710: csel x8, x10, x8, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 8)));
  /* d8714: cbz x8, #0xd8788 */
  if ((ARC_X_R(c, 8)) == 0) goto L_d8788;
  /* d8718: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* d871c: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* d8720: stp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* d8724: str x19, [sp, #0x40] */
  arc_st64(((c)->sp + INT64_C(64)), ARC_X_R(c, 19));
  /* d8728: add x29, sp, #0x30 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(48)));
  /* d872c: ldr x10, [x0, #0x10] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* d8730: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* d8734: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* d8738: stp xzr, xzr, [sp, #0x18] */
  { const uint64_t _pa = ((c)->sp + INT64_C(24));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* d873c: csinc x9, x10, x0, ne */
  ARC_X_W(c, 9, (ARC_COND(c, 1) ? (ARC_X_R(c, 10)) : ((ARC_X_R(c, 0)) + 1)));
  /* d8740: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* d8744: stp x9, x8, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* d8748: mov w9, #1 */
  ARC_W_W(c, 9, UINT64_C(1));
  /* d874c: strb w9, [sp, #0x28] */
  arc_st8(((c)->sp + INT64_C(40)), ARC_W_R(c, 9));
  /* d8750: bl #0xda18c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(886612));
  fn1_da18c(c);
  /* d8754: ldrb w8, [sp, #0x28] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(40))));
  /* d8758: cmp w8, #3 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(3));
  /* d875c: b.hi #0xd8774 */
  if (ARC_COND(c, 8)) goto L_d8774;
L_d8760:;
  /* d8760: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* d8764: bl #0xda18c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(886632));
  fn1_da18c(c);
  /* d8768: ldrb w8, [sp, #0x28] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(40))));
  /* d876c: cmp w8, #4 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(4));
  /* d8770: b.lo #0xd8760 */
  if (ARC_COND(c, 3)) goto L_d8760;
L_d8774:;
  /* d8774: cmp w8, #6 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(6));
  /* d8778: b.ne #0xd8794 */
  if (ARC_COND(c, 1)) goto L_d8794;
  /* d877c: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
  /* d8780: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* d8784: b #0xd8824 */
  goto L_d8824;
L_d8788:;
  /* d8788: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
  /* d878c: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* d8790: ret  */
  return;
L_d8794:;
  /* d8794: ldrb w8, [x19] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 19)));
  /* d8798: ldp x11, x10, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 11, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* d879c: add x9, x19, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + UINT64_C(1)));
  /* d87a0: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* d87a4: stp xzr, xzr, [sp, #0x18] */
  { const uint64_t _pa = ((c)->sp + INT64_C(24));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* d87a8: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* d87ac: lsr x8, x8, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* d87b0: csel x9, x9, x10, eq */
  ARC_X_W(c, 9, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 10)));
  /* d87b4: csel x8, x8, x11, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 11)));
  /* d87b8: stp x9, x8, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* d87bc: mov w9, #6 */
  ARC_W_W(c, 9, UINT64_C(6));
  /* d87c0: strb w9, [sp, #0x28] */
  arc_st8(((c)->sp + INT64_C(40)), ARC_W_R(c, 9));
  /* d87c4: bl #0xda370 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(886728));
  fn1_da370(c);
  /* d87c8: ldrb w8, [sp, #0x28] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(40))));
  /* d87cc: mov w9, #1 */
  ARC_W_W(c, 9, UINT64_C(1));
  /* d87d0: nop  */
  /* nop: no architectural effect here */
  /* d87d4: adr x0, #0x5018e */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(328078)));
  /* d87d8: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* d87dc: lsl w8, w9, w8 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 9)) << ((ARC_W_R(c, 8)) & 31)));
  /* d87e0: mov w9, #0x62 */
  ARC_W_W(c, 9, UINT64_C(98));
  /* d87e4: tst w8, w9 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & ARC_W_R(c, 9)));
  /* d87e8: b.ne #0xd8824 */
  if (ARC_COND(c, 1)) goto L_d8824;
  /* d87ec: mov w9, #0x14 */
  ARC_W_W(c, 9, UINT64_C(20));
  /* d87f0: tst w8, w9 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & ARC_W_R(c, 9)));
  /* d87f4: b.eq #0xd8800 */
  if (ARC_COND(c, 0)) goto L_d8800;
  /* d87f8: ldp x0, x1, [sp, #0x18] */
  { const uint64_t _pa = ((c)->sp + INT64_C(24));
    ARC_X_W(c, 0, arc_ld64(_pa));
    ARC_X_W(c, 1, arc_ld64(_pa + 8));
  }
  /* d87fc: b #0xd8824 */
  goto L_d8824;
L_d8800:;
  /* d8800: ldr x8, [sp, #0x18] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(24))));
  /* d8804: nop  */
  /* nop: no architectural effect here */
  /* d8808: adr x9, #0x5004e */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(327758)));
  /* d880c: nop  */
  /* nop: no architectural effect here */
  /* d8810: adr x10, #0x501db */
  ARC_X_W(c, 10, (arc_image_bases[1] + UINT64_C(328155)));
  /* d8814: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* d8818: ldrb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* d881c: cmp w8, #0x5c */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(92));
  /* d8820: csel x0, x10, x9, eq */
  ARC_X_W(c, 0, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
L_d8824:;
  /* d8824: ldp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* d8828: ldr x19, [sp, #0x40] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(64))));
  /* d882c: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* d8830: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* d8834: ret  */
  return;
}

void fn1_dbfec(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038829036));
  /* dbfec: bti c */
  /* bti: no architectural effect here */
  /* dbff0: ret  */
  return;
}

void fn1_e0864(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038847588));
  /* e0864: bti c */
  /* bti: no architectural effect here */
  /* e0868: b #0xd7c14 */
  fn1_d7c14(c); return;
}

void fn1_e30f4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038857972));
  /* e30f4: bti c */
  /* bti: no architectural effect here */
  /* e30f8: ldrb w9, [x0] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 0)));
  /* e30fc: ldr x8, [x0, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* e3100: add x10, x0, #4 */
  ARC_X_W(c, 10, (ARC_X_R(c, 0) + UINT64_C(4)));
  /* e3104: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* e3108: csel x8, x10, x8, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 8)));
  /* e310c: cbz x3, #0xe3170 */
  if ((ARC_X_R(c, 3)) == 0) goto L_e3170;
  /* e3110: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e3114: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e3118: stp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* e311c: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* e3120: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* e3124: lsr x10, x9, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(1)) & 63)));
  /* e3128: ldr x11, [x0, #8] */
  ARC_X_W(c, 11, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* e312c: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* e3130: mov x19, x3 */
  ARC_X_W(c, 19, ARC_X_R(c, 3));
  /* e3134: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* e3138: sub x22, x8, #4 */
  ARC_X_W(c, 22, (ARC_X_R(c, 8) - UINT64_C(4)));
  /* e313c: csel x9, x10, x11, eq */
  ARC_X_W(c, 9, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 11)));
  /* e3140: cmp x2, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 2), ARC_X_R(c, 9));
  /* e3144: csinc x9, x9, x2, hs */
  ARC_X_W(c, 9, (ARC_COND(c, 2) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 2)) + 1)));
  /* e3148: lsl x21, x9, #2 */
  ARC_X_W(c, 21, ((uint64_t)(ARC_X_R(c, 9)) << ((UINT64_C(2)) & 63)));
L_e314c:;
  /* e314c: cbz x21, #0xe3178 */
  if ((ARC_X_R(c, 21)) == 0) goto L_e3178;
  /* e3150: ldr w1, [x22, x21] */
  ARC_W_W(c, 1, arc_ld32((ARC_X_R(c, 22) + ARC_X_R(c, 21))));
  /* e3154: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* e3158: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* e315c: bl #0x142e48 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(930144));
  fn1_142e48(c);
  /* e3160: sub x21, x21, #4 */
  ARC_X_W(c, 21, (ARC_X_R(c, 21) - UINT64_C(4)));
  /* e3164: cbz x0, #0xe314c */
  if ((ARC_X_R(c, 0)) == 0) goto L_e314c;
  /* e3168: asr x0, x21, #2 */
  ARC_X_W(c, 0, ((uint64_t)((int64_t)(ARC_X_R(c, 21)) >> ((UINT64_C(2)) & 63))));
  /* e316c: b #0xe317c */
  goto L_e317c;
L_e3170:;
  /* e3170: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* e3174: ret  */
  return;
L_e3178:;
  /* e3178: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
L_e317c:;
  /* e317c: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* e3180: ldp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* e3184: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e3188: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* e318c: ret  */
  return;
}

void fn1_e7974(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038876532));
  /* e7974: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e7978: stp x29, x30, [sp, #-0x50]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-80));
    (c)->sp = (c)->sp + INT64_C(-80);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e797c: stp x26, x25, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* e7980: stp x24, x23, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* e7984: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* e7988: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* e798c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* e7990: ldrb w25, [x0] */
  ARC_W_W(c, 25, arc_ld8(ARC_X_R(c, 0)));
  /* e7994: mov x23, x8 */
  ARC_X_W(c, 23, ARC_X_R(c, 8));
  /* e7998: ldr x8, [x0, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* e799c: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* e79a0: mov x0, x1 */
  ARC_X_W(c, 0, ARC_X_R(c, 1));
  /* e79a4: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* e79a8: lsr x9, x25, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 25)) >> ((UINT64_C(1)) & 63)));
  /* e79ac: tst w25, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 25) & UINT64_C(1)));
  /* e79b0: csel x21, x9, x8, eq */
  ARC_X_W(c, 21, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* e79b4: bl #0x142860 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(948664));
  fn1_142860(c);
  /* e79b8: add x26, x21, x0 */
  ARC_X_W(c, 26, (ARC_X_R(c, 21) + ARC_X_R(c, 0)));
  /* e79bc: cmn x26, #8 */
  (void)arc_add64(c, ARC_X_R(c, 26), UINT64_C(8), 0);
  /* e79c0: b.hs #0xe7a6c */
  if (ARC_COND(c, 2)) goto L_e7a6c;
  /* e79c4: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* e79c8: cmp x26, #0x16 */
  (void)arc_sub64(c, ARC_X_R(c, 26), UINT64_C(22));
  /* e79cc: b.hi #0xe79e8 */
  if (ARC_COND(c, 8)) goto L_e79e8;
  /* e79d0: lsl w8, w26, #1 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 26)) << ((UINT64_C(1)) & 31)));
  /* e79d4: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
  /* e79d8: stp xzr, xzr, [x23] */
  { const uint64_t _pa = ARC_X_R(c, 23);
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* e79dc: str xzr, [x23, #0x10] */
  arc_st64((ARC_X_R(c, 23) + INT64_C(16)), ARC_X_R(c, 31));
  /* e79e0: strb w8, [x23] */
  arc_st8(ARC_X_R(c, 23), ARC_W_R(c, 8));
  /* e79e4: b #0xe7a10 */
  goto L_e7a10;
L_e79e8:;
  /* e79e8: orr x8, x26, #7 */
  ARC_X_W(c, 8, (ARC_X_R(c, 26) | UINT64_C(7)));
  /* e79ec: mov w9, #0x1a */
  ARC_W_W(c, 9, UINT64_C(26));
  /* e79f0: cmp x8, #0x17 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(23));
  /* e79f4: csinc x24, x9, x8, eq */
  ARC_X_W(c, 24, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 8)) + 1)));
  /* e79f8: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* e79fc: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(948736));
  fn1_1428f0(c);
  /* e7a00: orr x8, x24, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 24) | UINT64_C(1)));
  /* e7a04: stp x26, x0, [x23, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 23) + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 0));
  }
  /* e7a08: str x8, [x23] */
  arc_st64(ARC_X_R(c, 23), ARC_X_R(c, 8));
  /* e7a0c: and w8, w8, #0xff */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(255)));
L_e7a10:;
  /* e7a10: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* e7a14: csinc x23, x0, x23, ne */
  ARC_X_W(c, 23, (ARC_COND(c, 1) ? (ARC_X_R(c, 0)) : ((ARC_X_R(c, 23)) + 1)));
  /* e7a18: cbz x21, #0xe7a34 */
  if ((ARC_X_R(c, 21)) == 0) goto L_e7a34;
  /* e7a1c: ldr x8, [x22, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 22) + INT64_C(16))));
  /* e7a20: tst w25, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 25) & UINT64_C(1)));
  /* e7a24: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* e7a28: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* e7a2c: csinc x1, x8, x22, ne */
  ARC_X_W(c, 1, (ARC_COND(c, 1) ? (ARC_X_R(c, 8)) : ((ARC_X_R(c, 22)) + 1)));
  /* e7a30: bl #0x1449f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(948788));
  fn1_1449f0(c);
L_e7a34:;
  /* e7a34: add x21, x23, x21 */
  ARC_X_W(c, 21, (ARC_X_R(c, 23) + ARC_X_R(c, 21)));
  /* e7a38: cbz x20, #0xe7a4c */
  if ((ARC_X_R(c, 20)) == 0) goto L_e7a4c;
  /* e7a3c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* e7a40: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* e7a44: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* e7a48: bl #0x1449f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(948812));
  fn1_1449f0(c);
L_e7a4c:;
  /* e7a4c: strb wzr, [x21, x20] */
  arc_st8((ARC_X_R(c, 21) + ARC_X_R(c, 20)), ARC_W_R(c, 31));
  /* e7a50: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* e7a54: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* e7a58: ldp x24, x23, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* e7a5c: ldp x26, x25, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* e7a60: ldp x29, x30, [sp], #0x50 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(80);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e7a64: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* e7a68: ret  */
  return;
L_e7a6c:;
  /* e7a6c: bl #0xd7d54 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(948848));
  fn1_d7d54(c);
}

void fn1_ea138(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038886712));
  /* ea138: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* ea13c: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* ea140: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* ea144: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* ea148: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* ea14c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* ea150: add x0, x0, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(24)));
  /* ea154: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(958808));
  fn1_142518(c);
  /* ea158: cbnz w0, #0xea1dc */
  if ((ARC_W_R(c, 0)) != 0) goto L_ea1dc;
  /* ea15c: ldr w8, [x19, #0x70] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 19) + INT64_C(112))));
  /* ea160: tbnz w8, #2, #0xea180 */
  if (((ARC_W_R(c, 8)) >> 2 & 1) != 0) goto L_ea180;
  /* ea164: tbnz w8, #3, #0xea194 */
  if (((ARC_W_R(c, 8)) >> 3 & 1) != 0) goto L_ea194;
L_ea168:;
  /* ea168: add x0, x19, #0x40 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(64)));
  /* ea16c: add x1, x19, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 19) + UINT64_C(24)));
  /* ea170: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(958836));
  fn1_142530(c);
  /* ea174: cbnz w0, #0xea1d0 */
  if ((ARC_W_R(c, 0)) != 0) goto L_ea1d0;
  /* ea178: ldrb w8, [x19, #0x70] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(112))));
  /* ea17c: tbz w8, #2, #0xea168 */
  if (((ARC_W_R(c, 8)) >> 2 & 1) == 0) goto L_ea168;
L_ea180:;
  /* ea180: ldr x8, [x19, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* ea184: cbnz x8, #0xea1e8 */
  if ((ARC_X_R(c, 8)) != 0) goto L_ea1e8;
  /* ea188: add x0, x19, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(24)));
  /* ea18c: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(958864));
  fn1_142560(c);
  /* ea190: b #0xea1bc */
  goto L_ea1bc;
L_ea194:;
  /* ea194: and w8, w8, #0xfffffff3 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(4294967283)));
  /* ea198: str w8, [x19, #0x70] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(112)), ARC_W_R(c, 8));
  /* ea19c: add x0, x19, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(24)));
  /* ea1a0: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(958884));
  fn1_142560(c);
  /* ea1a4: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* ea1a8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ea1ac: ldr x8, [x8, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(24))));
  /* ea1b0: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(958900));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* ea1b4: ldr x8, [x19, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* ea1b8: cbnz x8, #0xea1f0 */
  if ((ARC_X_R(c, 8)) != 0) goto L_ea1f0;
L_ea1bc:;
  /* ea1bc: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* ea1c0: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* ea1c4: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ea1c8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* ea1cc: ret  */
  return;
L_ea1d0:;
  /* ea1d0: nop  */
  /* nop: no architectural effect here */
  /* ea1d4: adr x1, #0x50514 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(328980)));
  /* ea1d8: bl #0x142a40 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(958940));
  fn1_142a40(c);
L_ea1dc:;
  /* ea1dc: nop  */
  /* nop: no architectural effect here */
  /* ea1e0: adr x1, #0x50f67 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(331623)));
  /* ea1e4: bl #0x142a40 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(958952));
  fn1_142a40(c);
L_ea1e8:;
  /* ea1e8: mov w21, #1 */
  ARC_W_W(c, 21, UINT64_C(1));
  /* ea1ec: b #0xea1f4 */
  goto L_ea1f4;
L_ea1f0:;
  /* ea1f0: mov w21, wzr */
  ARC_W_W(c, 21, ARC_W_R(c, 31));
L_ea1f4:;
  /* ea1f4: sub x1, x8, #0x78 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) - UINT64_C(120)));
  /* ea1f8: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* ea1fc: str x8, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 8));
  /* ea200: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(958980));
  fn1_bd950(c);
  /* ea204: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* ea208: bl #0x142a88 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(958988));
  fn1_142a88(c);
  /* ea20c: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(958992));
  fn1_a1454(c);
  /* ea210: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(958996));
  fn1_a1454(c);
  /* ea214: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* ea218: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* ea21c: bl #0x142aa0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(959008));
  fn1_142aa0(c);
  /* ea220: cbz w21, #0xea22c */
  if ((ARC_W_R(c, 21)) == 0) goto L_ea22c;
  /* ea224: add x0, x19, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(24)));
  /* ea228: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(959020));
  fn1_142560(c);
L_ea22c:;
  /* ea22c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* ea230: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(959028));
  fn1_9cc20(c);
  /* ea234: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(959032));
  fn1_a1454(c);
  /* ea238: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(959036));
  fn1_a1454(c);
  /* ea23c: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(959040));
  fn1_a1454(c);
}

void fn1_ebc14(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038893588));
  /* ebc14: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* ebc18: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* ebc1c: stp x24, x23, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* ebc20: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* ebc24: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* ebc28: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* ebc2c: ldr x23, [x0] */
  ARC_X_W(c, 23, arc_ld64(ARC_X_R(c, 0)));
  /* ebc30: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* ebc34: ldp x24, x8, [x23, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 23) + INT64_C(8));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* ebc38: cmp x24, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 24), ARC_X_R(c, 8));
  /* ebc3c: b.hs #0xebc48 */
  if (ARC_COND(c, 2)) goto L_ebc48;
  /* ebc40: str x19, [x24], #8 */
  { const uint64_t _a = ARC_X_R(c, 24);
    ARC_X_W(c, 24, ARC_X_R(c, 24) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 19));
  }
  /* ebc44: b #0xebcc4 */
  goto L_ebcc4;
L_ebc48:;
  /* ebc48: ldr x10, [x23] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 23)));
  /* ebc4c: sub x22, x24, x10 */
  ARC_X_W(c, 22, (ARC_X_R(c, 24) - ARC_X_R(c, 10)));
  /* ebc50: asr x9, x22, #3 */
  ARC_X_W(c, 9, ((uint64_t)((int64_t)(ARC_X_R(c, 22)) >> ((UINT64_C(3)) & 63))));
  /* ebc54: add x9, x9, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(1)));
  /* ebc58: lsr x11, x9, #0x3d */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(61)) & 63)));
  /* ebc5c: cbnz x11, #0xebcec */
  if ((ARC_X_R(c, 11)) != 0) goto L_ebcec;
  /* ebc60: sub x8, x8, x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) - ARC_X_R(c, 10)));
  /* ebc64: mov x11, #0x7ffffffffffffff8 */
  ARC_X_W(c, 11, UINT64_C(9223372036854775800));
  /* ebc68: asr x10, x8, #2 */
  ARC_X_W(c, 10, ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(2)) & 63))));
  /* ebc6c: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* ebc70: csel x9, x10, x9, hi */
  ARC_X_W(c, 9, (ARC_COND(c, 8) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* ebc74: cmp x8, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 11));
  /* ebc78: mov x8, #0x1fffffffffffffff */
  ARC_X_W(c, 8, UINT64_C(2305843009213693951));
  /* ebc7c: csel x8, x9, x8, lo */
  ARC_X_W(c, 8, (ARC_COND(c, 3) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* ebc80: lsl x21, x8, #3 */
  ARC_X_W(c, 21, ((uint64_t)(ARC_X_R(c, 8)) << ((UINT64_C(3)) & 63)));
  /* ebc84: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* ebc88: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(965772));
  fn1_1428f0(c);
  /* ebc8c: ldp x20, x8, [x23] */
  { const uint64_t _pa = ARC_X_R(c, 23);
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* ebc90: add x24, x0, x22 */
  ARC_X_W(c, 24, (ARC_X_R(c, 0) + ARC_X_R(c, 22)));
  /* ebc94: add x21, x0, x21 */
  ARC_X_W(c, 21, (ARC_X_R(c, 0) + ARC_X_R(c, 21)));
  /* ebc98: sub x2, x8, x20 */
  ARC_X_W(c, 2, (ARC_X_R(c, 8) - ARC_X_R(c, 20)));
  /* ebc9c: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* ebca0: sub x22, x24, x2 */
  ARC_X_W(c, 22, (ARC_X_R(c, 24) - ARC_X_R(c, 2)));
  /* ebca4: str x19, [x24], #8 */
  { const uint64_t _a = ARC_X_R(c, 24);
    ARC_X_W(c, 24, ARC_X_R(c, 24) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 19));
  }
  /* ebca8: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* ebcac: bl #0x1449d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(965808));
  fn1_1449d8(c);
  /* ebcb0: stp x22, x24, [x23] */
  { const uint64_t _pa = ARC_X_R(c, 23);
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 24));
  }
  /* ebcb4: str x21, [x23, #0x10] */
  arc_st64((ARC_X_R(c, 23) + INT64_C(16)), ARC_X_R(c, 21));
  /* ebcb8: cbz x20, #0xebcc4 */
  if ((ARC_X_R(c, 20)) == 0) goto L_ebcc4;
  /* ebcbc: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* ebcc0: bl #0x1426f8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(965828));
  fn1_1426f8(c);
L_ebcc4:;
  /* ebcc4: add x1, x19, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 19) + UINT64_C(8)));
  /* ebcc8: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* ebccc: str x24, [x23, #8] */
  arc_st64((ARC_X_R(c, 23) + INT64_C(8)), ARC_X_R(c, 24));
  /* ebcd0: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(965844));
  fn1_db2e0(c);
  /* ebcd4: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* ebcd8: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* ebcdc: ldp x24, x23, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* ebce0: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ebce4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* ebce8: ret  */
  return;
L_ebcec:;
  /* ebcec: bl #0xebd08 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(965872));
  fn1_ebd08(c);
}

void fn1_ed7a0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038900640));
  /* ed7a0: bti c */
  /* bti: no architectural effect here */
  /* ed7a4: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
  /* ed7a8: mov x1, #-1 */
  ARC_X_W(c, 1, UINT64_C(18446744073709551615));
  /* ed7ac: ret  */
  return;
}

void fn1_f11ac(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038915500));
  /* f11ac: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* f11b0: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* f11b4: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* f11b8: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* f11bc: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* f11c0: ldr x8, [x0, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* f11c4: ldr x9, [x8] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 8)));
  /* f11c8: ldur x9, [x9, #-0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(-24))));
  /* f11cc: add x21, x8, x9 */
  ARC_X_W(c, 21, (ARC_X_R(c, 8) + ARC_X_R(c, 9)));
  /* f11d0: ldr x19, [x21, #0x28] */
  ARC_X_W(c, 19, arc_ld64((ARC_X_R(c, 21) + INT64_C(40))));
  /* f11d4: cbz x19, #0xf11e0 */
  if ((ARC_X_R(c, 19)) == 0) goto L_f11e0;
  /* f11d8: ldr w8, [x21, #0x20] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 21) + INT64_C(32))));
  /* f11dc: cbz w8, #0xf11f4 */
  if ((ARC_W_R(c, 8)) == 0) goto L_f11f4;
L_f11e0:;
  /* f11e0: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* f11e4: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* f11e8: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* f11ec: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* f11f0: ret  */
  return;
L_f11f4:;
  /* f11f4: nop  */
  /* nop: no architectural effect here */
  /* f11f8: adr x8, #0x156bb8 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1403832)));
  /* f11fc: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* f1200: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* f1204: bl #0x144ac8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(987656));
  fn1_144ac8(c);
  /* f1208: ldrb w8, [x21, #9] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 21) + INT64_C(9))));
  /* f120c: tbz w8, #5, #0xf11e0 */
  if (((ARC_W_R(c, 8)) >> 5 & 1) == 0) goto L_f11e0;
  /* f1210: ldr w8, [x0, #8] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 0) + INT64_C(8))));
  /* f1214: cbnz w8, #0xf11e0 */
  if ((ARC_W_R(c, 8)) != 0) goto L_f11e0;
  /* f1218: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f121c: ldr x8, [x8, #0x30] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(48))));
  /* f1220: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f1224: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(987688));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* f1228: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* f122c: b.ne #0xf11e0 */
  if (ARC_COND(c, 1)) goto L_f11e0;
  /* f1230: ldr x8, [x20, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(8))));
  /* f1234: ldr x9, [x8] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 8)));
  /* f1238: ldur x9, [x9, #-0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(-24))));
  /* f123c: add x8, x8, x9 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + ARC_X_R(c, 9)));
  /* f1240: ldp w9, w10, [x8, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 8) + INT64_C(32));
    ARC_W_W(c, 9, arc_ld32(_pa));
    ARC_W_W(c, 10, arc_ld32(_pa + 4));
  }
  /* f1244: orr w9, w9, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | UINT64_C(1)));
  /* f1248: tst w10, w9 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 10) & ARC_W_R(c, 9)));
  /* f124c: str w9, [x8, #0x20] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(32)), ARC_W_R(c, 9));
  /* f1250: b.eq #0xf11e0 */
  if (ARC_COND(c, 0)) goto L_f11e0;
  /* f1254: nop  */
  /* nop: no architectural effect here */
  /* f1258: adr x0, #0x50210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(328208)));
  /* f125c: bl #0xec720 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(987744));
  fn1_ec720(c);
  /* f1260: bl #0x142548 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(987748));
  fn1_142548(c);
  /* f1264: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(987752));
  fn1_142980(c);
  /* f1268: b #0xf11e0 */
  goto L_f11e0;
  /* f126c: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(987760));
  fn1_a1454(c);
}

void fn1_f41d0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038927824));
  /* f41d0: bti c */
  /* bti: no architectural effect here */
  /* f41d4: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
  /* f41d8: mov x1, #-1 */
  ARC_X_W(c, 1, UINT64_C(18446744073709551615));
  /* f41dc: ret  */
  return;
}

void fn1_f7be4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038942692));
  /* f7be4: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* f7be8: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* f7bec: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* f7bf0: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* f7bf4: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* f7bf8: ldr x8, [x0, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* f7bfc: ldr x9, [x8] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 8)));
  /* f7c00: ldur x9, [x9, #-0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(-24))));
  /* f7c04: add x21, x8, x9 */
  ARC_X_W(c, 21, (ARC_X_R(c, 8) + ARC_X_R(c, 9)));
  /* f7c08: ldr x19, [x21, #0x28] */
  ARC_X_W(c, 19, arc_ld64((ARC_X_R(c, 21) + INT64_C(40))));
  /* f7c0c: cbz x19, #0xf7c18 */
  if ((ARC_X_R(c, 19)) == 0) goto L_f7c18;
  /* f7c10: ldr w8, [x21, #0x20] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 21) + INT64_C(32))));
  /* f7c14: cbz w8, #0xf7c2c */
  if ((ARC_W_R(c, 8)) == 0) goto L_f7c2c;
L_f7c18:;
  /* f7c18: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* f7c1c: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* f7c20: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* f7c24: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* f7c28: ret  */
  return;
L_f7c2c:;
  /* f7c2c: nop  */
  /* nop: no architectural effect here */
  /* f7c30: adr x8, #0x156bb8 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1403832)));
  /* f7c34: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* f7c38: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* f7c3c: bl #0x144ac8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1014848));
  fn1_144ac8(c);
  /* f7c40: ldrb w8, [x21, #9] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 21) + INT64_C(9))));
  /* f7c44: tbz w8, #5, #0xf7c18 */
  if (((ARC_W_R(c, 8)) >> 5 & 1) == 0) goto L_f7c18;
  /* f7c48: ldr w8, [x0, #8] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 0) + INT64_C(8))));
  /* f7c4c: cbnz w8, #0xf7c18 */
  if ((ARC_W_R(c, 8)) != 0) goto L_f7c18;
  /* f7c50: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f7c54: ldr x8, [x8, #0x30] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(48))));
  /* f7c58: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f7c5c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1014880));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* f7c60: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* f7c64: b.ne #0xf7c18 */
  if (ARC_COND(c, 1)) goto L_f7c18;
  /* f7c68: ldr x8, [x20, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(8))));
  /* f7c6c: ldr x9, [x8] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 8)));
  /* f7c70: ldur x9, [x9, #-0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(-24))));
  /* f7c74: add x8, x8, x9 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + ARC_X_R(c, 9)));
  /* f7c78: ldp w9, w10, [x8, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 8) + INT64_C(32));
    ARC_W_W(c, 9, arc_ld32(_pa));
    ARC_W_W(c, 10, arc_ld32(_pa + 4));
  }
  /* f7c7c: orr w9, w9, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | UINT64_C(1)));
  /* f7c80: tst w10, w9 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 10) & ARC_W_R(c, 9)));
  /* f7c84: str w9, [x8, #0x20] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(32)), ARC_W_R(c, 9));
  /* f7c88: b.eq #0xf7c18 */
  if (ARC_COND(c, 0)) goto L_f7c18;
  /* f7c8c: nop  */
  /* nop: no architectural effect here */
  /* f7c90: adr x0, #0x50210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(328208)));
  /* f7c94: bl #0xec720 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1014936));
  fn1_ec720(c);
  /* f7c98: bl #0x142548 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1014940));
  fn1_142548(c);
  /* f7c9c: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1014944));
  fn1_142980(c);
  /* f7ca0: b #0xf7c18 */
  goto L_f7c18;
  /* f7ca4: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1014952));
  fn1_a1454(c);
}

void fn1_fcf98(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038964120));
  /* fcf98: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* fcf9c: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* fcfa0: stp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* fcfa4: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* fcfa8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* fcfac: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* fcfb0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* fcfb4: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* fcfb8: ldr x8, [x8, #0xb00] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2816))));
  /* fcfbc: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* fcfc0: add x9, x8, #0x18 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(24)));
  /* fcfc4: add x10, x8, #0x68 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(104)));
  /* fcfc8: add x8, x8, #0x40 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(64)));
  /* fcfcc: str x9, [x19, #-0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 19) + INT64_C(-16));
    ARC_X_W(c, 19, ARC_X_R(c, 19) + INT64_C(-16));
    arc_st64(_a, ARC_X_R(c, 9));
  }
  /* fcfd0: adrp x9, #0x151000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1380352)));
  /* fcfd4: str x10, [x20, #0x70]! */
  { const uint64_t _a = (ARC_X_R(c, 20) + INT64_C(112));
    ARC_X_W(c, 20, ARC_X_R(c, 20) + INT64_C(112));
    arc_st64(_a, ARC_X_R(c, 10));
  }
  /* fcfd8: ldr x9, [x9, #0xae0] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(2784))));
  /* fcfdc: ldrb w10, [x0, #0x48] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 0) + INT64_C(72))));
  /* fcfe0: add x9, x9, #0x10 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(16)));
  /* fcfe4: stp x8, x9, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* fcfe8: tbz w10, #0, #0xfcffc */
  if (((ARC_W_R(c, 10)) >> 0 & 1) == 0) goto L_fcffc;
  /* fcfec: ldr x8, [x21, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 21) + INT64_C(72))));
  /* fcff0: ldr x0, [x21, #0x58] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 21) + INT64_C(88))));
  /* fcff4: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* fcff8: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1036284));
  fn1_142608(c);
L_fcffc:;
  /* fcffc: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* fd000: nop  */
  /* nop: no architectural effect here */
  /* fd004: adr x9, #0x15dc40 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1432640)));
  /* fd008: ldr x8, [x8, #0xaa8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2728))));
  /* fd00c: ldr x22, [x21, #0x10] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 21) + INT64_C(16))));
  /* fd010: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* fd014: cmp x22, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 9));
  /* fd018: str x8, [x21, #8] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(8)), ARC_X_R(c, 8));
  /* fd01c: b.eq #0xfd040 */
  if (ARC_COND(c, 0)) goto L_fd040;
  /* fd020: add x1, x22, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 22) + UINT64_C(8)));
  /* fd024: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* fd028: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1036332));
  fn1_bd950(c);
  /* fd02c: cbnz x0, #0xfd040 */
  if ((ARC_X_R(c, 0)) != 0) goto L_fd040;
  /* fd030: ldr x8, [x22] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 22)));
  /* fd034: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* fd038: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* fd03c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1036352));
  arc_dispatch(c, ARC_X_R(c, 8));
L_fd040:;
  /* fd040: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* fd044: bl #0x1433b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1036360));
  fn1_1433b8(c);
  /* fd048: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* fd04c: mov w1, #0x118 */
  ARC_W_W(c, 1, UINT64_C(280));
  /* fd050: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* fd054: ldp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* fd058: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* fd05c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* fd060: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_101988(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038983048));
  /* 101988: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 10198c: sub sp, sp, #0x180 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(384)));
  /* 101990: stp x29, x30, [sp, #0x120] */
  { const uint64_t _pa = ((c)->sp + INT64_C(288));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 101994: stp x28, x27, [sp, #0x130] */
  { const uint64_t _pa = ((c)->sp + INT64_C(304));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* 101998: stp x26, x25, [sp, #0x140] */
  { const uint64_t _pa = ((c)->sp + INT64_C(320));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* 10199c: stp x24, x23, [sp, #0x150] */
  { const uint64_t _pa = ((c)->sp + INT64_C(336));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 1019a0: stp x22, x21, [sp, #0x160] */
  { const uint64_t _pa = ((c)->sp + INT64_C(352));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1019a4: stp x20, x19, [sp, #0x170] */
  { const uint64_t _pa = ((c)->sp + INT64_C(368));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1019a8: add x29, sp, #0x120 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(288)));
  /* 1019ac: ldr w8, [x3, #8] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 3) + INT64_C(8))));
  /* 1019b0: mov w9, #0x4a */
  ARC_W_W(c, 9, UINT64_C(74));
  /* 1019b4: mov x0, x3 */
  ARC_X_W(c, 0, ARC_X_R(c, 3));
  /* 1019b8: mov x21, x2 */
  ARC_X_W(c, 21, ARC_X_R(c, 2));
  /* 1019bc: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 1019c0: sub x26, x29, #0x48 */
  ARC_X_W(c, 26, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 1019c4: ands w8, w8, w9 */
  { uint32_t _r = (uint32_t)(ARC_W_R(c, 8) & ARC_W_R(c, 9));
    arc_flags_logical32(c, _r);
    ARC_W_W(c, 8, _r); }
  /* 1019c8: str x5, [sp, #0x18] */
  arc_st64(((c)->sp + INT64_C(24)), ARC_X_R(c, 5));
  /* 1019cc: b.eq #0x1019f0 */
  if (ARC_COND(c, 0)) goto L_1019f0;
  /* 1019d0: cmp w8, #0x40 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(64));
  /* 1019d4: b.eq #0x1019e8 */
  if (ARC_COND(c, 0)) goto L_1019e8;
  /* 1019d8: cmp w8, #8 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(8));
  /* 1019dc: b.ne #0x1019f8 */
  if (ARC_COND(c, 1)) goto L_1019f8;
  /* 1019e0: mov w23, #0x10 */
  ARC_W_W(c, 23, UINT64_C(16));
  /* 1019e4: b #0x1019fc */
  goto L_1019fc;
L_1019e8:;
  /* 1019e8: mov w23, #8 */
  ARC_W_W(c, 23, UINT64_C(8));
  /* 1019ec: b #0x1019fc */
  goto L_1019fc;
L_1019f0:;
  /* 1019f0: mov w23, wzr */
  ARC_W_W(c, 23, ARC_W_R(c, 31));
  /* 1019f4: b #0x1019fc */
  goto L_1019fc;
L_1019f8:;
  /* 1019f8: mov w23, #0xa */
  ARC_W_W(c, 23, UINT64_C(10));
L_1019fc:;
  /* 1019fc: sub x8, x29, #0x28 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(40)));
  /* 101a00: sub x1, x29, #0xc */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(12)));
  /* 101a04: str x4, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 4));
  /* 101a08: bl #0x135800 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1055244));
  fn1_135800(c);
  /* 101a0c: stp xzr, xzr, [x26, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 26) + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 101a10: str xzr, [x26, #0x18] */
  arc_st64((ARC_X_R(c, 26) + INT64_C(24)), ARC_X_R(c, 31));
  /* 101a14: sub x0, x29, #0x40 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 101a18: mov w1, #0x16 */
  ARC_W_W(c, 1, UINT64_C(22));
  /* 101a1c: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 101a20: sub x19, x29, #0x40 */
  ARC_X_W(c, 19, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 101a24: bl #0x142d10 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1055272));
  fn1_142d10(c);
  /* 101a28: ldurb w8, [x29, #-0x40] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-64))));
  /* 101a2c: add x10, sp, #0x38 */
  ARC_X_W(c, 10, ((c)->sp + UINT64_C(56)));
  /* 101a30: ldr x9, [x26, #0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 26) + INT64_C(24))));
  /* 101a34: str x10, [sp, #0x30] */
  arc_st64(((c)->sp + INT64_C(48)), ARC_X_R(c, 10));
  /* 101a38: adrp x28, #0x151000 */
  ARC_X_W(c, 28, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 101a3c: orr x27, x19, #1 */
  ARC_X_W(c, 27, (ARC_X_R(c, 19) | UINT64_C(1)));
  /* 101a40: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 101a44: ldr x28, [x28, #0xbe0] */
  ARC_X_W(c, 28, arc_ld64((ARC_X_R(c, 28) + INT64_C(3040))));
  /* 101a48: add x22, sp, #0x30 */
  ARC_X_W(c, 22, ((c)->sp + UINT64_C(48)));
  /* 101a4c: csinc x24, x9, x19, ne */
  ARC_X_W(c, 24, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 19)) + 1)));
  /* 101a50: mov w19, #0x16 */
  ARC_W_W(c, 19, UINT64_C(22));
  /* 101a54: str wzr, [sp, #0x2c] */
  arc_st32(((c)->sp + INT64_C(44)), ARC_W_R(c, 31));
  /* 101a58: str x24, [x26] */
  arc_st64(ARC_X_R(c, 26), ARC_X_R(c, 24));
  /* 101a5c: b #0x101a68 */
  goto L_101a68;
L_101a60:;
  /* 101a60: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* 101a64: str x8, [x20, #0x18] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(24)), ARC_X_R(c, 8));
L_101a68:;
  /* 101a68: cbz x20, #0x101a90 */
  if ((ARC_X_R(c, 20)) == 0) goto L_101a90;
  /* 101a6c: ldp x8, x9, [x20, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 101a70: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 101a74: b.eq #0x101aac */
  if (ARC_COND(c, 0)) goto L_101aac;
  /* 101a78: cbz x21, #0x101b1c */
  if ((ARC_X_R(c, 21)) == 0) goto L_101b1c;
  /* 101a7c: ldp x8, x9, [x21, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 101a80: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 101a84: b.ne #0x101c64 */
  if (ARC_COND(c, 1)) goto L_101c64;
  /* 101a88: mov w25, wzr */
  ARC_W_W(c, 25, ARC_W_R(c, 31));
  /* 101a8c: b #0x101af8 */
  goto L_101af8;
L_101a90:;
  /* 101a90: cbz x21, #0x101c60 */
  if ((ARC_X_R(c, 21)) == 0) goto L_101c60;
  /* 101a94: ldp x8, x9, [x21, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 101a98: mov x20, xzr */
  ARC_X_W(c, 20, ARC_X_R(c, 31));
  /* 101a9c: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 101aa0: b.ne #0x101b1c */
  if (ARC_COND(c, 1)) goto L_101b1c;
  /* 101aa4: mov w25, #1 */
  ARC_W_W(c, 25, UINT64_C(1));
  /* 101aa8: b #0x101af8 */
  goto L_101af8;
L_101aac:;
  /* 101aac: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 101ab0: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 101ab4: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 101ab8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1055420));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 101abc: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 101ac0: cset w25, eq */
  ARC_W_W(c, 25, (ARC_COND(c, 0) ? 1 : 0));
  /* 101ac4: cbz x21, #0x101ae8 */
  if ((ARC_X_R(c, 21)) == 0) goto L_101ae8;
  /* 101ac8: ldp x9, x10, [x21, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(24));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* 101acc: csel x8, xzr, x20, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 20)));
  /* 101ad0: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* 101ad4: b.eq #0x101af4 */
  if (ARC_COND(c, 0)) goto L_101af4;
  /* 101ad8: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 101adc: b.ne #0x101c64 */
  if (ARC_COND(c, 1)) goto L_101c64;
  /* 101ae0: mov x20, xzr */
  ARC_X_W(c, 20, ARC_X_R(c, 31));
  /* 101ae4: b #0x101b1c */
  goto L_101b1c;
L_101ae8:;
  /* 101ae8: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 101aec: b.ne #0x101b1c */
  if (ARC_COND(c, 1)) goto L_101b1c;
  /* 101af0: b #0x101fc8 */
  goto L_101fc8;
L_101af4:;
  /* 101af4: mov x20, x8 */
  ARC_X_W(c, 20, ARC_X_R(c, 8));
L_101af8:;
  /* 101af8: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 101afc: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 101b00: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 101b04: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1055496));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 101b08: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 101b0c: cset w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? 1 : 0));
  /* 101b10: csel x21, xzr, x21, eq */
  ARC_X_W(c, 21, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 21)));
  /* 101b14: cmp w25, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 25), ARC_W_R(c, 8));
  /* 101b18: b.eq #0x101c64 */
  if (ARC_COND(c, 0)) goto L_101c64;
L_101b1c:;
  /* 101b1c: ldurb w8, [x29, #-0x40] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-64))));
  /* 101b20: ldr x9, [x26, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 26) + INT64_C(16))));
  /* 101b24: ldr x11, [x26] */
  ARC_X_W(c, 11, arc_ld64(ARC_X_R(c, 26)));
  /* 101b28: lsr x10, x8, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* 101b2c: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 101b30: csel x25, x10, x9, eq */
  ARC_X_W(c, 25, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* 101b34: add x9, x24, x25 */
  ARC_X_W(c, 9, (ARC_X_R(c, 24) + ARC_X_R(c, 25)));
  /* 101b38: cmp x11, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 9));
  /* 101b3c: b.ne #0x101bf4 */
  if (ARC_COND(c, 1)) goto L_101bf4;
  /* 101b40: cmp x25, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 25), UINT64_C(1));
  /* 101b44: b.lt #0x101b5c */
  if (ARC_COND(c, 11)) goto L_101b5c;
  /* 101b48: sub x0, x29, #0x40 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 101b4c: mov x1, x25 */
  ARC_X_W(c, 1, ARC_X_R(c, 25));
  /* 101b50: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 101b54: bl #0x142d10 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1055576));
  fn1_142d10(c);
  /* 101b58: b #0x101b80 */
  goto L_101b80;
L_101b5c:;
  /* 101b5c: lsl x9, x25, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 25)) << ((UINT64_C(1)) & 63)));
  /* 101b60: tbnz w8, #0, #0x101b74 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_101b74;
  /* 101b64: lsl w8, w9, #1 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 9)) << ((UINT64_C(1)) & 31)));
  /* 101b68: sturb w8, [x29, #-0x40] */
  arc_st8((ARC_X_R(c, 29) + INT64_C(-64)), ARC_W_R(c, 8));
  /* 101b6c: mov x8, x27 */
  ARC_X_W(c, 8, ARC_X_R(c, 27));
  /* 101b70: b #0x101b7c */
  goto L_101b7c;
L_101b74:;
  /* 101b74: ldr x8, [x26, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 26) + INT64_C(24))));
  /* 101b78: str x9, [x26, #0x10] */
  arc_st64((ARC_X_R(c, 26) + INT64_C(16)), ARC_X_R(c, 9));
L_101b7c:;
  /* 101b7c: strb wzr, [x8, x9] */
  arc_st8((ARC_X_R(c, 8) + ARC_X_R(c, 9)), ARC_W_R(c, 31));
L_101b80:;
  /* 101b80: ldp x9, x10, [x26, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 26) + INT64_C(8));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* 101b84: ldurb w8, [x29, #-0x40] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-64))));
  /* 101b88: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 101b8c: and x11, x9, #0xfffffffffffffffe */
  ARC_X_W(c, 11, (ARC_X_R(c, 9) & UINT64_C(18446744073709551614)));
  /* 101b90: ubfx x12, x9, #1, #7 */
  ARC_X_W(c, 12, (((uint64_t)(ARC_X_R(c, 9)) >> 1) & UINT64_C(127)));
  /* 101b94: sub x11, x11, #1 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) - UINT64_C(1)));
  /* 101b98: csel x8, x19, x11, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 19)) : ARC_X_R(c, 11)));
  /* 101b9c: tst x9, #1 */
  arc_flags_logical64(c, (uint64_t)(ARC_X_R(c, 9) & UINT64_C(1)));
  /* 101ba0: csel x10, x12, x10, eq */
  ARC_X_W(c, 10, (ARC_COND(c, 0) ? (ARC_X_R(c, 12)) : ARC_X_R(c, 10)));
  /* 101ba4: subs x1, x8, x10 */
  ARC_X_W(c, 1, arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10)));
  /* 101ba8: b.ls #0x101bbc */
  if (ARC_COND(c, 9)) goto L_101bbc;
  /* 101bac: sub x0, x29, #0x40 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 101bb0: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 101bb4: bl #0x142d10 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1055672));
  fn1_142d10(c);
  /* 101bb8: b #0x101bdc */
  goto L_101bdc;
L_101bbc:;
  /* 101bbc: tbnz w9, #0, #0x101bd0 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) != 0) goto L_101bd0;
  /* 101bc0: lsl w9, w8, #1 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 8)) << ((UINT64_C(1)) & 31)));
  /* 101bc4: sturb w9, [x29, #-0x40] */
  arc_st8((ARC_X_R(c, 29) + INT64_C(-64)), ARC_W_R(c, 9));
  /* 101bc8: mov x9, x27 */
  ARC_X_W(c, 9, ARC_X_R(c, 27));
  /* 101bcc: b #0x101bd8 */
  goto L_101bd8;
L_101bd0:;
  /* 101bd0: ldr x9, [x26, #0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 26) + INT64_C(24))));
  /* 101bd4: str x8, [x26, #0x10] */
  arc_st64((ARC_X_R(c, 26) + INT64_C(16)), ARC_X_R(c, 8));
L_101bd8:;
  /* 101bd8: strb wzr, [x9, x8] */
  arc_st8((ARC_X_R(c, 9) + ARC_X_R(c, 8)), ARC_W_R(c, 31));
L_101bdc:;
  /* 101bdc: ldurb w8, [x29, #-0x40] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-64))));
  /* 101be0: ldr x9, [x26, #0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 26) + INT64_C(24))));
  /* 101be4: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 101be8: csel x24, x27, x9, eq */
  ARC_X_W(c, 24, (ARC_COND(c, 0) ? (ARC_X_R(c, 27)) : ARC_X_R(c, 9)));
  /* 101bec: add x8, x24, x25 */
  ARC_X_W(c, 8, (ARC_X_R(c, 24) + ARC_X_R(c, 25)));
  /* 101bf0: str x8, [x26] */
  arc_st64(ARC_X_R(c, 26), ARC_X_R(c, 8));
L_101bf4:;
  /* 101bf4: ldp x8, x9, [x20, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 101bf8: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 101bfc: b.eq #0x101c08 */
  if (ARC_COND(c, 0)) goto L_101c08;
  /* 101c00: ldrb w0, [x8] */
  ARC_W_W(c, 0, arc_ld8(ARC_X_R(c, 8)));
  /* 101c04: b #0x101c18 */
  goto L_101c18;
L_101c08:;
  /* 101c08: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 101c0c: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 101c10: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 101c14: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1055768));
  arc_dispatch(c, ARC_X_R(c, 8));
L_101c18:;
  /* 101c18: ldurb w5, [x29, #-0xc] */
  ARC_W_W(c, 5, arc_ld8((ARC_X_R(c, 29) + INT64_C(-12))));
  /* 101c1c: sub x3, x29, #0x48 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 101c20: add x4, sp, #0x2c */
  ARC_X_W(c, 4, ((c)->sp + UINT64_C(44)));
  /* 101c24: sub x6, x29, #0x28 */
  ARC_X_W(c, 6, (ARC_X_R(c, 29) - UINT64_C(40)));
  /* 101c28: add x7, sp, #0x38 */
  ARC_X_W(c, 7, ((c)->sp + UINT64_C(56)));
  /* 101c2c: mov w1, w23 */
  ARC_W_W(c, 1, ARC_W_R(c, 23));
  /* 101c30: mov x2, x24 */
  ARC_X_W(c, 2, ARC_X_R(c, 24));
  /* 101c34: stp x22, x28, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 28));
  }
  /* 101c38: bl #0x143868 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1055804));
  fn1_143868(c);
  /* 101c3c: cbnz w0, #0x101c64 */
  if ((ARC_W_R(c, 0)) != 0) goto L_101c64;
  /* 101c40: ldp x8, x9, [x20, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 101c44: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 101c48: b.ne #0x101a60 */
  if (ARC_COND(c, 1)) goto L_101a60;
  /* 101c4c: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 101c50: ldr x8, [x8, #0x50] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(80))));
  /* 101c54: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 101c58: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1055836));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 101c5c: b #0x101a68 */
  goto L_101a68;
L_101c60:;
  /* 101c60: mov x20, xzr */
  ARC_X_W(c, 20, ARC_X_R(c, 31));
L_101c64:;
  /* 101c64: ldurb w8, [x29, #-0x28] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-40))));
  /* 101c68: ldr x9, [x26, #0x28] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 26) + INT64_C(40))));
  /* 101c6c: ldr x22, [sp, #0x20] */
  ARC_X_W(c, 22, arc_ld64(((c)->sp + INT64_C(32))));
  /* 101c70: lsr x10, x8, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* 101c74: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 101c78: csel x8, x10, x9, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* 101c7c: cbz x8, #0x101ca0 */
  if ((ARC_X_R(c, 8)) == 0) goto L_101ca0;
  /* 101c80: ldr x8, [sp, #0x30] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(48))));
  /* 101c84: add x9, sp, #0x38 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(56)));
  /* 101c88: sub x9, x8, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - ARC_X_R(c, 9)));
  /* 101c8c: cmp x9, #0x9f */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(159));
  /* 101c90: b.gt #0x101ca0 */
  if (ARC_COND(c, 12)) goto L_101ca0;
  /* 101c94: ldr w9, [sp, #0x2c] */
  ARC_W_W(c, 9, arc_ld32(((c)->sp + INT64_C(44))));
  /* 101c98: str w9, [x8], #4 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(4));
    arc_st32(_a, ARC_W_R(c, 9));
  }
  /* 101c9c: str x8, [sp, #0x30] */
  arc_st64(((c)->sp + INT64_C(48)), ARC_X_R(c, 8));
L_101ca0:;
  /* 101ca0: ldr x1, [x26] */
  ARC_X_W(c, 1, arc_ld64(ARC_X_R(c, 26)));
  /* 101ca4: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 101ca8: mov x2, x22 */
  ARC_X_W(c, 2, ARC_X_R(c, 22));
  /* 101cac: mov w3, w23 */
  ARC_W_W(c, 3, ARC_W_R(c, 23));
  /* 101cb0: bl #0x135e9c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1055924));
  fn1_135e9c(c);
  /* 101cb4: ldurb w10, [x29, #-0x28] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 29) + INT64_C(-40))));
  /* 101cb8: ldr x12, [sp, #0x30] */
  ARC_X_W(c, 12, arc_ld64(((c)->sp + INT64_C(48))));
  /* 101cbc: add x11, sp, #0x38 */
  ARC_X_W(c, 11, ((c)->sp + UINT64_C(56)));
  /* 101cc0: ldr x8, [x26, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 26) + INT64_C(40))));
  /* 101cc4: lsr x9, x10, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 10)) >> ((UINT64_C(1)) & 63)));
  /* 101cc8: ands w13, w10, #1 */
  { uint32_t _r = (uint32_t)(ARC_W_R(c, 10) & UINT64_C(1));
    arc_flags_logical32(c, _r);
    ARC_W_W(c, 13, _r); }
  /* 101ccc: sub x11, x12, x11 */
  ARC_X_W(c, 11, (ARC_X_R(c, 12) - ARC_X_R(c, 11)));
  /* 101cd0: csel x8, x9, x8, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* 101cd4: ldr x9, [sp, #0x18] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(24))));
  /* 101cd8: cmp x11, #5 */
  (void)arc_sub64(c, ARC_X_R(c, 11), UINT64_C(5));
  /* 101cdc: str x0, [x9] */
  arc_st64(ARC_X_R(c, 9), ARC_X_R(c, 0));
  /* 101ce0: b.lt #0x101e40 */
  if (ARC_COND(c, 11)) goto L_101e40;
  /* 101ce4: cbz x8, #0x101e40 */
  if ((ARC_X_R(c, 8)) == 0) goto L_101e40;
  /* 101ce8: sub x8, x12, #4 */
  ARC_X_W(c, 8, (ARC_X_R(c, 12) - UINT64_C(4)));
  /* 101cec: add x9, sp, #0x38 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(56)));
  /* 101cf0: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* 101cf4: cset w11, lo */
  ARC_W_W(c, 11, (ARC_COND(c, 3) ? 1 : 0));
  /* 101cf8: cmp x9, x12 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 12));
  /* 101cfc: b.eq #0x101dac */
  if (ARC_COND(c, 0)) goto L_101dac;
  /* 101d00: cbz w11, #0x101dac */
  if ((ARC_W_R(c, 11)) == 0) goto L_101dac;
  /* 101d04: add x10, sp, #0x38 */
  ARC_X_W(c, 10, ((c)->sp + UINT64_C(56)));
  /* 101d08: sub x14, x12, #8 */
  ARC_X_W(c, 14, (ARC_X_R(c, 12) - UINT64_C(8)));
  /* 101d0c: add x11, x10, #4 */
  ARC_X_W(c, 11, (ARC_X_R(c, 10) + UINT64_C(4)));
  /* 101d10: cmp x14, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 14), ARC_X_R(c, 11));
  /* 101d14: csel x13, x14, x11, hi */
  ARC_X_W(c, 13, (ARC_COND(c, 8) ? (ARC_X_R(c, 14)) : ARC_X_R(c, 11)));
  /* 101d18: sub x13, x13, #4 */
  ARC_X_W(c, 13, (ARC_X_R(c, 13) - UINT64_C(4)));
  /* 101d1c: cmp x13, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 13), ARC_X_R(c, 10));
  /* 101d20: cinc x15, x10, ne */
  ARC_X_W(c, 15, (ARC_COND(c, 1) ? (ARC_X_R(c, 10)) + 1 : (ARC_X_R(c, 10))));
  /* 101d24: cmp x13, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 13), ARC_X_R(c, 10));
  /* 101d28: sub x15, x13, x15 */
  ARC_X_W(c, 15, (ARC_X_R(c, 13) - ARC_X_R(c, 15)));
  /* 101d2c: lsr x15, x15, #3 */
  ARC_X_W(c, 15, ((uint64_t)(ARC_X_R(c, 15)) >> ((UINT64_C(3)) & 63)));
  /* 101d30: cinc x13, x15, ne */
  ARC_X_W(c, 13, (ARC_COND(c, 1) ? (ARC_X_R(c, 15)) + 1 : (ARC_X_R(c, 15))));
  /* 101d34: cmp x13, #0x13 */
  (void)arc_sub64(c, ARC_X_R(c, 13), UINT64_C(19));
  /* 101d38: b.lo #0x101d80 */
  if (ARC_COND(c, 3)) goto L_101d80;
  /* 101d3c: cmp x14, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 14), ARC_X_R(c, 11));
  /* 101d40: csel x14, x14, x11, hi */
  ARC_X_W(c, 14, (ARC_COND(c, 8) ? (ARC_X_R(c, 14)) : ARC_X_R(c, 11)));
  /* 101d44: sub x14, x14, #4 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) - UINT64_C(4)));
  /* 101d48: cmp x14, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 14), ARC_X_R(c, 10));
  /* 101d4c: cinc x15, x10, ne */
  ARC_X_W(c, 15, (ARC_COND(c, 1) ? (ARC_X_R(c, 10)) + 1 : (ARC_X_R(c, 10))));
  /* 101d50: cmp x14, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 14), ARC_X_R(c, 10));
  /* 101d54: sub x15, x14, x15 */
  ARC_X_W(c, 15, (ARC_X_R(c, 14) - ARC_X_R(c, 15)));
  /* 101d58: lsr x15, x15, #3 */
  ARC_X_W(c, 15, ((uint64_t)(ARC_X_R(c, 15)) >> ((UINT64_C(3)) & 63)));
  /* 101d5c: cinc x14, x15, ne */
  ARC_X_W(c, 14, (ARC_COND(c, 1) ? (ARC_X_R(c, 15)) + 1 : (ARC_X_R(c, 15))));
  /* 101d60: cmp x10, x12 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 12));
  /* 101d64: b.hs #0x101ed0 */
  if (ARC_COND(c, 2)) goto L_101ed0;
  /* 101d68: lsl x14, x14, #2 */
  ARC_X_W(c, 14, ((uint64_t)(ARC_X_R(c, 14)) << ((UINT64_C(2)) & 63)));
  /* 101d6c: sub x15, x12, x14 */
  ARC_X_W(c, 15, (ARC_X_R(c, 12) - ARC_X_R(c, 14)));
  /* 101d70: add x11, x11, x14 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) + ARC_X_R(c, 14)));
  /* 101d74: sub x14, x15, #4 */
  ARC_X_W(c, 14, (ARC_X_R(c, 15) - UINT64_C(4)));
  /* 101d78: cmp x14, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 14), ARC_X_R(c, 11));
  /* 101d7c: b.hs #0x101ed0 */
  if (ARC_COND(c, 2)) goto L_101ed0;
L_101d80:;
  /* 101d80: mov x11, x8 */
  ARC_X_W(c, 11, ARC_X_R(c, 8));
L_101d84:;
  /* 101d84: add x10, x10, #4 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(4)));
L_101d88:;
  /* 101d88: ldr w12, [x11] */
  ARC_W_W(c, 12, arc_ld32(ARC_X_R(c, 11)));
  /* 101d8c: ldur w13, [x10, #-4] */
  ARC_W_W(c, 13, arc_ld32((ARC_X_R(c, 10) + INT64_C(-4))));
  /* 101d90: stur w12, [x10, #-4] */
  arc_st32((ARC_X_R(c, 10) + INT64_C(-4)), ARC_W_R(c, 12));
  /* 101d94: str w13, [x11], #0xfffffffffffffffc */
  { const uint64_t _a = ARC_X_R(c, 11);
    ARC_X_W(c, 11, ARC_X_R(c, 11) + INT64_C(-4));
    arc_st32(_a, ARC_W_R(c, 13));
  }
  /* 101d98: cmp x10, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 11));
  /* 101d9c: add x10, x10, #4 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(4)));
  /* 101da0: b.lo #0x101d88 */
  if (ARC_COND(c, 3)) goto L_101d88;
L_101da4:;
  /* 101da4: ldurb w10, [x29, #-0x28] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 29) + INT64_C(-40))));
  /* 101da8: and w13, w10, #1 */
  ARC_W_W(c, 13, (ARC_W_R(c, 10) & UINT64_C(1)));
L_101dac:;
  /* 101dac: ldr x11, [x26, #0x30] */
  ARC_X_W(c, 11, arc_ld64((ARC_X_R(c, 26) + INT64_C(48))));
  /* 101db0: cmp w13, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 13), UINT64_C(0));
  /* 101db4: sub x12, x29, #0x28 */
  ARC_X_W(c, 12, (ARC_X_R(c, 29) - UINT64_C(40)));
  /* 101db8: csinc x11, x11, x12, ne */
  ARC_X_W(c, 11, (ARC_COND(c, 1) ? (ARC_X_R(c, 11)) : ((ARC_X_R(c, 12)) + 1)));
  /* 101dbc: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* 101dc0: b.hs #0x101e18 */
  if (ARC_COND(c, 2)) goto L_101e18;
  /* 101dc4: lsr w9, w10, #1 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 10)) >> ((UINT64_C(1)) & 31)));
  /* 101dc8: ldr x10, [x26, #0x28] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 26) + INT64_C(40))));
  /* 101dcc: cmp w13, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 13), UINT64_C(0));
  /* 101dd0: csel x9, x9, x10, eq */
  ARC_X_W(c, 9, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 10)));
  /* 101dd4: add x10, sp, #0x38 */
  ARC_X_W(c, 10, ((c)->sp + UINT64_C(56)));
  /* 101dd8: add x9, x11, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 11) + ARC_X_R(c, 9)));
  /* 101ddc: b #0x101df8 */
  goto L_101df8;
L_101de0:;
  /* 101de0: sub x12, x9, x11 */
  ARC_X_W(c, 12, (ARC_X_R(c, 9) - ARC_X_R(c, 11)));
  /* 101de4: add x10, x10, #4 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(4)));
  /* 101de8: cmp x12, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 12), UINT64_C(1));
  /* 101dec: cinc x11, x11, gt */
  ARC_X_W(c, 11, (ARC_COND(c, 12) ? (ARC_X_R(c, 11)) + 1 : (ARC_X_R(c, 11))));
  /* 101df0: cmp x10, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 8));
  /* 101df4: b.hs #0x101e18 */
  if (ARC_COND(c, 2)) goto L_101e18;
L_101df8:;
  /* 101df8: ldrb w12, [x11] */
  ARC_W_W(c, 12, arc_ld8(ARC_X_R(c, 11)));
  /* 101dfc: cbz w12, #0x101de0 */
  if ((ARC_W_R(c, 12)) == 0) goto L_101de0;
  /* 101e00: cmp w12, #0xff */
  (void)arc_sub32(c, ARC_W_R(c, 12), UINT64_C(255));
  /* 101e04: b.eq #0x101de0 */
  if (ARC_COND(c, 0)) goto L_101de0;
  /* 101e08: ldr w13, [x10] */
  ARC_W_W(c, 13, arc_ld32(ARC_X_R(c, 10)));
  /* 101e0c: cmp w13, w12 */
  (void)arc_sub32(c, ARC_W_R(c, 13), ARC_W_R(c, 12));
  /* 101e10: b.eq #0x101de0 */
  if (ARC_COND(c, 0)) goto L_101de0;
  /* 101e14: b #0x101e38 */
  goto L_101e38;
L_101e18:;
  /* 101e18: ldrb w9, [x11] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 11)));
  /* 101e1c: cbz w9, #0x101e40 */
  if ((ARC_W_R(c, 9)) == 0) goto L_101e40;
  /* 101e20: cmp w9, #0xff */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(255));
  /* 101e24: b.eq #0x101e40 */
  if (ARC_COND(c, 0)) goto L_101e40;
  /* 101e28: ldr w8, [x8] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 8)));
  /* 101e2c: sub w8, w8, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) - UINT64_C(1)));
  /* 101e30: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* 101e34: b.lo #0x101e40 */
  if (ARC_COND(c, 3)) goto L_101e40;
L_101e38:;
  /* 101e38: mov w8, #4 */
  ARC_W_W(c, 8, UINT64_C(4));
  /* 101e3c: str w8, [x22] */
  arc_st32(ARC_X_R(c, 22), ARC_W_R(c, 8));
L_101e40:;
  /* 101e40: cbz x20, #0x101e68 */
  if ((ARC_X_R(c, 20)) == 0) goto L_101e68;
  /* 101e44: ldp x8, x9, [x20, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 101e48: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 101e4c: b.eq #0x101e84 */
  if (ARC_COND(c, 0)) goto L_101e84;
  /* 101e50: cbz x21, #0x101f70 */
  if ((ARC_X_R(c, 21)) == 0) goto L_101f70;
  /* 101e54: ldp x8, x9, [x21, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 101e58: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 101e5c: b.ne #0x101f64 */
  if (ARC_COND(c, 1)) goto L_101f64;
  /* 101e60: mov w19, wzr */
  ARC_W_W(c, 19, ARC_W_R(c, 31));
  /* 101e64: b #0x101f44 */
  goto L_101f44;
L_101e68:;
  /* 101e68: cbz x21, #0x101ec8 */
  if ((ARC_X_R(c, 21)) == 0) goto L_101ec8;
  /* 101e6c: ldp x8, x9, [x21, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 101e70: mov x20, xzr */
  ARC_X_W(c, 20, ARC_X_R(c, 31));
  /* 101e74: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 101e78: b.ne #0x101f70 */
  if (ARC_COND(c, 1)) goto L_101f70;
  /* 101e7c: mov w19, #1 */
  ARC_W_W(c, 19, UINT64_C(1));
  /* 101e80: b #0x101f44 */
  goto L_101f44;
L_101e84:;
  /* 101e84: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 101e88: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 101e8c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 101e90: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1056404));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 101e94: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 101e98: cset w19, eq */
  ARC_W_W(c, 19, (ARC_COND(c, 0) ? 1 : 0));
  /* 101e9c: cbz x21, #0x101ec0 */
  if ((ARC_X_R(c, 21)) == 0) goto L_101ec0;
  /* 101ea0: ldp x9, x10, [x21, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(24));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* 101ea4: csel x8, xzr, x20, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 20)));
  /* 101ea8: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* 101eac: b.eq #0x101f40 */
  if (ARC_COND(c, 0)) goto L_101f40;
  /* 101eb0: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 101eb4: b.ne #0x101f64 */
  if (ARC_COND(c, 1)) goto L_101f64;
  /* 101eb8: mov x20, xzr */
  ARC_X_W(c, 20, ARC_X_R(c, 31));
  /* 101ebc: b #0x101f70 */
  goto L_101f70;
L_101ec0:;
  /* 101ec0: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 101ec4: b.ne #0x101f70 */
  if (ARC_COND(c, 1)) goto L_101f70;
L_101ec8:;
  /* 101ec8: mov x20, xzr */
  ARC_X_W(c, 20, ARC_X_R(c, 31));
  /* 101ecc: b #0x101f64 */
  goto L_101f64;
L_101ed0:;
  /* 101ed0: add x13, x13, #1 */
  ARC_X_W(c, 13, (ARC_X_R(c, 13) + UINT64_C(1)));
  /* 101ed4: add x15, sp, #0x38 */
  ARC_X_W(c, 15, ((c)->sp + UINT64_C(56)));
  /* 101ed8: sub x12, x12, #0x10 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) - UINT64_C(16)));
  /* 101edc: and x14, x13, #0x7ffffffffffffff8 */
  ARC_X_W(c, 14, (ARC_X_R(c, 13) & UINT64_C(9223372036854775800)));
  /* 101ee0: lsl x10, x14, #2 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 14)) << ((UINT64_C(2)) & 63)));
  /* 101ee4: mov x16, x14 */
  ARC_X_W(c, 16, ARC_X_R(c, 14));
  /* 101ee8: sub x11, x8, x10 */
  ARC_X_W(c, 11, (ARC_X_R(c, 8) - ARC_X_R(c, 10)));
  /* 101eec: add x10, x15, x10 */
  ARC_X_W(c, 10, (ARC_X_R(c, 15) + ARC_X_R(c, 10)));
  /* 101ef0: add x15, x15, #0x10 */
  ARC_X_W(c, 15, (ARC_X_R(c, 15) + UINT64_C(16)));
L_101ef4:;
  /* 101ef4: ldp q1, q0, [x12, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 12) + INT64_C(-16));
    arc_q_w(c, 1, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 0, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* 101ef8: sub x16, x16, #8 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) - UINT64_C(8)));
  /* 101efc: ldp q2, q3, [x15, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 15) + INT64_C(-16));
    arc_q_w(c, 2, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 3, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* 101f00: rev64 v0.4s, v0.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[0].u32[1];
    _t.u32[1] = (c)->q[0].u32[0];
    _t.u32[2] = (c)->q[0].u32[3];
    _t.u32[3] = (c)->q[0].u32[2];
    (c)->q[0] = _t; }
  /* 101f04: rev64 v1.4s, v1.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[1].u32[1];
    _t.u32[1] = (c)->q[1].u32[0];
    _t.u32[2] = (c)->q[1].u32[3];
    _t.u32[3] = (c)->q[1].u32[2];
    (c)->q[1] = _t; }
  /* 101f08: rev64 v2.4s, v2.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[2].u32[1];
    _t.u32[1] = (c)->q[2].u32[0];
    _t.u32[2] = (c)->q[2].u32[3];
    _t.u32[3] = (c)->q[2].u32[2];
    (c)->q[2] = _t; }
  /* 101f0c: rev64 v3.4s, v3.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[3].u32[1];
    _t.u32[1] = (c)->q[3].u32[0];
    _t.u32[2] = (c)->q[3].u32[3];
    _t.u32[3] = (c)->q[3].u32[2];
    (c)->q[3] = _t; }
  /* 101f10: ext v0.16b, v0.16b, v0.16b, #8 */
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
  /* 101f14: ext v1.16b, v1.16b, v1.16b, #8 */
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
  /* 101f18: ext v2.16b, v2.16b, v2.16b, #8 */
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
  /* 101f1c: ext v3.16b, v3.16b, v3.16b, #8 */
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
  /* 101f20: stp q0, q1, [x15, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 15) + INT64_C(-16));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[1].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[1].u64[1]);
  }
  /* 101f24: add x15, x15, #0x20 */
  ARC_X_W(c, 15, (ARC_X_R(c, 15) + UINT64_C(32)));
  /* 101f28: stp q3, q2, [x12, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 12) + INT64_C(-16));
    arc_st64(_pa, (c)->q[3].u64[0]);
    arc_st64(_pa + 8, (c)->q[3].u64[1]);
    arc_st64((_pa + 16), (c)->q[2].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[2].u64[1]);
  }
  /* 101f2c: sub x12, x12, #0x20 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) - UINT64_C(32)));
  /* 101f30: cbnz x16, #0x101ef4 */
  if ((ARC_X_R(c, 16)) != 0) goto L_101ef4;
  /* 101f34: cmp x13, x14 */
  (void)arc_sub64(c, ARC_X_R(c, 13), ARC_X_R(c, 14));
  /* 101f38: b.eq #0x101da4 */
  if (ARC_COND(c, 0)) goto L_101da4;
  /* 101f3c: b #0x101d84 */
  goto L_101d84;
L_101f40:;
  /* 101f40: mov x20, x8 */
  ARC_X_W(c, 20, ARC_X_R(c, 8));
L_101f44:;
  /* 101f44: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 101f48: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 101f4c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 101f50: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1056596));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 101f54: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 101f58: cset w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? 1 : 0));
  /* 101f5c: eor w8, w19, w8 */
  ARC_W_W(c, 8, (ARC_W_R(c, 19) ^ ARC_W_R(c, 8)));
  /* 101f60: tbnz w8, #0, #0x101f70 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_101f70;
L_101f64:;
  /* 101f64: ldr w8, [x22] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 22)));
  /* 101f68: orr w8, w8, #2 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | UINT64_C(2)));
  /* 101f6c: str w8, [x22] */
  arc_st32(ARC_X_R(c, 22), ARC_W_R(c, 8));
L_101f70:;
  /* 101f70: ldurb w8, [x29, #-0x40] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-64))));
  /* 101f74: tbz w8, #0, #0x101f88 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_101f88;
  /* 101f78: ldr x8, [x26, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 26) + INT64_C(8))));
  /* 101f7c: ldr x0, [x26, #0x18] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 26) + INT64_C(24))));
  /* 101f80: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 101f84: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1056648));
  fn1_142608(c);
L_101f88:;
  /* 101f88: ldurb w8, [x29, #-0x28] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-40))));
  /* 101f8c: tbz w8, #0, #0x101fa0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_101fa0;
  /* 101f90: ldr x8, [x26, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 26) + INT64_C(32))));
  /* 101f94: ldr x0, [x26, #0x30] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 26) + INT64_C(48))));
  /* 101f98: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 101f9c: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1056672));
  fn1_142608(c);
L_101fa0:;
  /* 101fa0: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 101fa4: ldp x20, x19, [sp, #0x170] */
  { const uint64_t _pa = ((c)->sp + INT64_C(368));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 101fa8: ldp x22, x21, [sp, #0x160] */
  { const uint64_t _pa = ((c)->sp + INT64_C(352));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 101fac: ldp x24, x23, [sp, #0x150] */
  { const uint64_t _pa = ((c)->sp + INT64_C(336));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 101fb0: ldp x26, x25, [sp, #0x140] */
  { const uint64_t _pa = ((c)->sp + INT64_C(320));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* 101fb4: ldp x28, x27, [sp, #0x130] */
  { const uint64_t _pa = ((c)->sp + INT64_C(304));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* 101fb8: ldp x29, x30, [sp, #0x120] */
  { const uint64_t _pa = ((c)->sp + INT64_C(288));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 101fbc: add sp, sp, #0x180 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(384)));
  /* 101fc0: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 101fc4: ret  */
  return;
L_101fc8:;
  /* 101fc8: mov x20, x21 */
  ARC_X_W(c, 20, ARC_X_R(c, 21));
  /* 101fcc: b #0x101c64 */
  goto L_101c64;
  /* 101fd0: b #0x101fdc */
  goto L_101fdc;
  /* 101fd4: b #0x101fdc */
  goto L_101fdc;
  /* 101fd8: b #0x101fdc */
  goto L_101fdc;
L_101fdc:;
  /* 101fdc: ldurb w8, [x29, #-0x40] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-64))));
  /* 101fe0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 101fe4: tbnz w8, #0, #0x101ff8 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_101ff8;
  /* 101fe8: ldurb w8, [x29, #-0x28] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-40))));
  /* 101fec: tbnz w8, #0, #0x102010 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_102010;
L_101ff0:;
  /* 101ff0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 101ff4: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1056760));
  fn1_9cc20(c);
L_101ff8:;
  /* 101ff8: ldr x8, [x26, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 26) + INT64_C(8))));
  /* 101ffc: ldr x0, [x26, #0x18] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 26) + INT64_C(24))));
  /* 102000: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 102004: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1056776));
  fn1_142608(c);
  /* 102008: ldurb w8, [x29, #-0x28] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-40))));
  /* 10200c: tbz w8, #0, #0x101ff0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_101ff0;
L_102010:;
  /* 102010: ldr x8, [x26, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 26) + INT64_C(32))));
  /* 102014: ldr x0, [x26, #0x30] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 26) + INT64_C(48))));
  /* 102018: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 10201c: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1056800));
  fn1_142608(c);
  /* 102020: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 102024: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1056808));
  fn1_9cc20(c);
}

void fn1_110680(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039043712));
  /* 110680: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 110684: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 110688: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 11068c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 110690: mov x19, x4 */
  ARC_X_W(c, 19, ARC_X_R(c, 4));
  /* 110694: mov x0, x2 */
  ARC_X_W(c, 0, ARC_X_R(c, 2));
  /* 110698: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 11069c: mov x1, x3 */
  ARC_X_W(c, 1, ARC_X_R(c, 3));
  /* 1106a0: mov x2, x4 */
  ARC_X_W(c, 2, ARC_X_R(c, 4));
  /* 1106a4: mov x3, x5 */
  ARC_X_W(c, 3, ARC_X_R(c, 5));
  /* 1106a8: mov w4, #3 */
  ARC_W_W(c, 4, UINT64_C(3));
  /* 1106ac: bl #0x110db0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1115824));
  fn1_110db0(c);
  /* 1106b0: ldr w8, [x19] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 19)));
  /* 1106b4: cmp w0, #0x16d */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(365));
  /* 1106b8: b.gt #0x1106c8 */
  if (ARC_COND(c, 12)) goto L_1106c8;
  /* 1106bc: tbnz w8, #2, #0x1106c8 */
  if (((ARC_W_R(c, 8)) >> 2 & 1) != 0) goto L_1106c8;
  /* 1106c0: str w0, [x20] */
  arc_st32(ARC_X_R(c, 20), ARC_W_R(c, 0));
  /* 1106c4: b #0x1106d0 */
  goto L_1106d0;
L_1106c8:;
  /* 1106c8: orr w8, w8, #4 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | UINT64_C(4)));
  /* 1106cc: str w8, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 8));
L_1106d0:;
  /* 1106d0: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1106d4: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1106d8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 1106dc: ret  */
  return;
}

void fn1_113d1c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039057692));
  /* 113d1c: bti c */
  /* bti: no architectural effect here */
  /* 113d20: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 113d24: ret  */
  return;
}

void fn1_11a3b0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039083952));
  /* 11a3b0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 11a3b4: sub sp, sp, #0xc0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(192)));
  /* 11a3b8: stp x29, x30, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 11a3bc: stp x28, x27, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* 11a3c0: stp x26, x25, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* 11a3c4: stp x24, x23, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 11a3c8: stp x22, x21, [sp, #0xa0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(160));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 11a3cc: stp x20, x19, [sp, #0xb0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(176));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 11a3d0: add x29, sp, #0x60 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(96)));
  /* 11a3d4: ldr w8, [x29, #0x90] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 29) + INT64_C(144))));
  /* 11a3d8: ldp x10, x9, [x29, #0x80] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(128));
    ARC_X_W(c, 10, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 11a3dc: ldr x19, [x29, #0x78] */
  ARC_X_W(c, 19, arc_ld64((ARC_X_R(c, 29) + INT64_C(120))));
  /* 11a3e0: tst w7, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 7) & UINT64_C(1)));
  /* 11a3e4: mov x23, x6 */
  ARC_X_W(c, 23, ARC_X_R(c, 6));
  /* 11a3e8: stur w8, [x29, #-0x14] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-20)), ARC_W_R(c, 8));
  /* 11a3ec: ldr w8, [x29, #0x68] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 29) + INT64_C(104))));
  /* 11a3f0: mov x24, x5 */
  ARC_X_W(c, 24, ARC_X_R(c, 5));
  /* 11a3f4: ldr w21, [x29, #0x70] */
  ARC_W_W(c, 21, arc_ld32((ARC_X_R(c, 29) + INT64_C(112))));
  /* 11a3f8: ldr x12, [x29, #0x60] */
  ARC_X_W(c, 12, arc_ld64((ARC_X_R(c, 29) + INT64_C(96))));
  /* 11a3fc: mov x25, x4 */
  ARC_X_W(c, 25, ARC_X_R(c, 4));
  /* 11a400: str w8, [sp, #0x14] */
  arc_st32(((c)->sp + INT64_C(20)), ARC_W_R(c, 8));
  /* 11a404: mov w8, #4 */
  ARC_W_W(c, 8, UINT64_C(4));
  /* 11a408: mov x22, x2 */
  ARC_X_W(c, 22, ARC_X_R(c, 2));
  /* 11a40c: csel x8, x8, xzr, ne */
  ARC_X_W(c, 8, (ARC_COND(c, 1) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 31)));
  /* 11a410: mov x28, x1 */
  ARC_X_W(c, 28, ARC_X_R(c, 1));
  /* 11a414: mov x20, xzr */
  ARC_X_W(c, 20, ARC_X_R(c, 31));
  /* 11a418: str x8, [sp, #0x28] */
  arc_st64(((c)->sp + INT64_C(40)), ARC_X_R(c, 8));
  /* 11a41c: add x8, x19, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + UINT64_C(1)));
  /* 11a420: mov x26, x0 */
  ARC_X_W(c, 26, ARC_X_R(c, 0));
  /* 11a424: stur x8, [x29, #-8] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-8)), ARC_X_R(c, 8));
  /* 11a428: add x8, x10, #4 */
  ARC_X_W(c, 8, (ARC_X_R(c, 10) + UINT64_C(4)));
  /* 11a42c: mov x27, x0 */
  ARC_X_W(c, 27, ARC_X_R(c, 0));
  /* 11a430: stp x0, x8, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 0));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* 11a434: add x8, x9, #4 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) + UINT64_C(4)));
  /* 11a438: stur w3, [x29, #-0x24] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-36)), ARC_W_R(c, 3));
  /* 11a43c: str x0, [x2] */
  arc_st64(ARC_X_R(c, 2), ARC_X_R(c, 0));
  /* 11a440: stur x10, [x29, #-0x20] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-32)), ARC_X_R(c, 10));
  /* 11a444: str x9, [sp, #0x30] */
  arc_st64(((c)->sp + INT64_C(48)), ARC_X_R(c, 9));
  /* 11a448: str x8, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 8));
  /* 11a44c: stur x12, [x29, #-0x10] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-16)), ARC_X_R(c, 12));
  /* 11a450: str x1, [sp, #0x18] */
  arc_st64(((c)->sp + INT64_C(24)), ARC_X_R(c, 1));
  /* 11a454: b #0x11a46c */
  goto L_11a46c;
L_11a458:;
  /* 11a458: str x26, [x28] */
  arc_st64(ARC_X_R(c, 28), ARC_X_R(c, 26));
L_11a45c:;
  /* 11a45c: mov x27, x26 */
  ARC_X_W(c, 27, ARC_X_R(c, 26));
L_11a460:;
  /* 11a460: add x20, x20, #1 */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) + UINT64_C(1)));
  /* 11a464: cmp x20, #4 */
  (void)arc_sub64(c, ARC_X_R(c, 20), UINT64_C(4));
  /* 11a468: b.eq #0x11a7b0 */
  if (ARC_COND(c, 0)) goto L_11a7b0;
L_11a46c:;
  /* 11a46c: ldrb w8, [x12, x20] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 12) + ARC_X_R(c, 20))));
  /* 11a470: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* 11a474: b.le #0x11a524 */
  if (ARC_COND(c, 13)) goto L_11a524;
  /* 11a478: cmp w8, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(2));
  /* 11a47c: b.eq #0x11a558 */
  if (ARC_COND(c, 0)) goto L_11a558;
  /* 11a480: cmp w8, #3 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(3));
  /* 11a484: b.eq #0x11a5b0 */
  if (ARC_COND(c, 0)) goto L_11a5b0;
  /* 11a488: cmp w8, #4 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(4));
  /* 11a48c: b.ne #0x11a460 */
  if (ARC_COND(c, 1)) goto L_11a460;
  /* 11a490: ldr x8, [sp, #0x28] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(40))));
  /* 11a494: add x25, x25, x8 */
  ARC_X_W(c, 25, (ARC_X_R(c, 25) + ARC_X_R(c, 8)));
  /* 11a498: cmp x25, x24 */
  (void)arc_sub64(c, ARC_X_R(c, 25), ARC_X_R(c, 24));
  /* 11a49c: mov x26, x25 */
  ARC_X_W(c, 26, ARC_X_R(c, 25));
  /* 11a4a0: b.hs #0x11a4d0 */
  if (ARC_COND(c, 2)) goto L_11a4d0;
  /* 11a4a4: mov x26, x25 */
  ARC_X_W(c, 26, ARC_X_R(c, 25));
L_11a4a8:;
  /* 11a4a8: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 11a4ac: ldr w2, [x26] */
  ARC_W_W(c, 2, arc_ld32(ARC_X_R(c, 26)));
  /* 11a4b0: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 11a4b4: mov w1, #0x40 */
  ARC_W_W(c, 1, UINT64_C(64));
  /* 11a4b8: ldr x8, [x8, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(24))));
  /* 11a4bc: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1156288));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 11a4c0: tbz w0, #0, #0x11a4d0 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_11a4d0;
  /* 11a4c4: add x26, x26, #4 */
  ARC_X_W(c, 26, (ARC_X_R(c, 26) + UINT64_C(4)));
  /* 11a4c8: cmp x26, x24 */
  (void)arc_sub64(c, ARC_X_R(c, 26), ARC_X_R(c, 24));
  /* 11a4cc: b.lo #0x11a4a8 */
  if (ARC_COND(c, 3)) goto L_11a4a8;
L_11a4d0:;
  /* 11a4d0: ldur w8, [x29, #-0x14] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 29) + INT64_C(-20))));
  /* 11a4d4: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* 11a4d8: b.lt #0x11a684 */
  if (ARC_COND(c, 11)) goto L_11a684;
  /* 11a4dc: cmp x26, x25 */
  (void)arc_sub64(c, ARC_X_R(c, 26), ARC_X_R(c, 25));
  /* 11a4e0: b.ls #0x11a5ec */
  if (ARC_COND(c, 9)) goto L_11a5ec;
  /* 11a4e4: ldr x8, [x22] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 22)));
  /* 11a4e8: ldur w28, [x29, #-0x14] */
  ARC_W_W(c, 28, arc_ld32((ARC_X_R(c, 29) + INT64_C(-20))));
  /* 11a4ec: sub x9, x26, #4 */
  ARC_X_W(c, 9, (ARC_X_R(c, 26) - UINT64_C(4)));
L_11a4f0:;
  /* 11a4f0: cmp x9, x25 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 25));
  /* 11a4f4: ldr w11, [x9], #0xfffffffffffffffc */
  { const uint64_t _a = ARC_X_R(c, 9);
    ARC_X_W(c, 9, ARC_X_R(c, 9) + INT64_C(-4));
    ARC_W_W(c, 11, arc_ld32(_a));
  }
  /* 11a4f8: mov w10, w28 */
  ARC_W_W(c, 10, ARC_W_R(c, 28));
  /* 11a4fc: sub w28, w28, #1 */
  ARC_W_W(c, 28, (ARC_W_R(c, 28) - UINT64_C(1)));
  /* 11a500: str w11, [x8], #4 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(4));
    arc_st32(_a, ARC_W_R(c, 11));
  }
  /* 11a504: b.ls #0x11a510 */
  if (ARC_COND(c, 9)) goto L_11a510;
  /* 11a508: cmp w10, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(1));
  /* 11a50c: b.ne #0x11a4f0 */
  if (ARC_COND(c, 1)) goto L_11a4f0;
L_11a510:;
  /* 11a510: cmp w10, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(1));
  /* 11a514: add x26, x9, #4 */
  ARC_X_W(c, 26, (ARC_X_R(c, 9) + UINT64_C(4)));
  /* 11a518: str x8, [x22] */
  arc_st64(ARC_X_R(c, 22), ARC_X_R(c, 8));
  /* 11a51c: b.ne #0x11a5f0 */
  if (ARC_COND(c, 1)) goto L_11a5f0;
  /* 11a520: b #0x11a674 */
  goto L_11a674;
L_11a524:;
  /* 11a524: cbz w8, #0x11a458 */
  if ((ARC_W_R(c, 8)) == 0) goto L_11a458;
  /* 11a528: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* 11a52c: b.ne #0x11a460 */
  if (ARC_COND(c, 1)) goto L_11a460;
  /* 11a530: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 11a534: str x26, [x28] */
  arc_st64(ARC_X_R(c, 28), ARC_X_R(c, 26));
  /* 11a538: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 11a53c: mov w1, #0x20 */
  ARC_W_W(c, 1, UINT64_C(32));
  /* 11a540: ldr x8, [x8, #0x58] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(88))));
  /* 11a544: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1156424));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 11a548: ldr x26, [x22] */
  ARC_X_W(c, 26, arc_ld64(ARC_X_R(c, 22)));
  /* 11a54c: ldur x12, [x29, #-0x10] */
  ARC_X_W(c, 12, arc_ld64((ARC_X_R(c, 29) + INT64_C(-16))));
  /* 11a550: str w0, [x26], #4 */
  { const uint64_t _a = ARC_X_R(c, 26);
    ARC_X_W(c, 26, ARC_X_R(c, 26) + INT64_C(4));
    arc_st32(_a, ARC_W_R(c, 0));
  }
  /* 11a554: b #0x11a5e0 */
  goto L_11a5e0;
L_11a558:;
  /* 11a558: ldur x9, [x29, #-0x20] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 29) + INT64_C(-32))));
  /* 11a55c: ldrb w8, [x9] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 9)));
  /* 11a560: ldr x9, [x9, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(8))));
  /* 11a564: lsr x10, x8, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* 11a568: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 11a56c: csel x9, x10, x9, eq */
  ARC_X_W(c, 9, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* 11a570: ldur w10, [x29, #-0x24] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 29) + INT64_C(-36))));
  /* 11a574: tbz w10, #9, #0x11a460 */
  if (((ARC_W_R(c, 10)) >> 9 & 1) == 0) goto L_11a460;
  /* 11a578: cbz x9, #0x11a460 */
  if ((ARC_X_R(c, 9)) == 0) goto L_11a460;
  /* 11a57c: ldur x10, [x29, #-0x20] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 29) + INT64_C(-32))));
  /* 11a580: lsl x27, x9, #2 */
  ARC_X_W(c, 27, ((uint64_t)(ARC_X_R(c, 9)) << ((UINT64_C(2)) & 63)));
  /* 11a584: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 11a588: ldr x8, [sp, #8] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(8))));
  /* 11a58c: mov x0, x26 */
  ARC_X_W(c, 0, ARC_X_R(c, 26));
  /* 11a590: ldr x10, [x10, #0x10] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 10) + INT64_C(16))));
  /* 11a594: mov x2, x27 */
  ARC_X_W(c, 2, ARC_X_R(c, 27));
  /* 11a598: csel x1, x8, x10, eq */
  ARC_X_W(c, 1, (ARC_COND(c, 0) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 10)));
  /* 11a59c: bl #0x1449f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1156512));
  fn1_1449f0(c);
  /* 11a5a0: ldur x12, [x29, #-0x10] */
  ARC_X_W(c, 12, arc_ld64((ARC_X_R(c, 29) + INT64_C(-16))));
  /* 11a5a4: add x26, x26, x27 */
  ARC_X_W(c, 26, (ARC_X_R(c, 26) + ARC_X_R(c, 27)));
  /* 11a5a8: str x26, [x22] */
  arc_st64(ARC_X_R(c, 22), ARC_X_R(c, 26));
  /* 11a5ac: b #0x11a45c */
  goto L_11a45c;
L_11a5b0:;
  /* 11a5b0: ldr x11, [sp, #0x30] */
  ARC_X_W(c, 11, arc_ld64(((c)->sp + INT64_C(48))));
  /* 11a5b4: ldrb w8, [x11] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 11)));
  /* 11a5b8: ldr x9, [x11, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 11) + INT64_C(8))));
  /* 11a5bc: lsr x10, x8, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* 11a5c0: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 11a5c4: csel x8, x10, x9, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* 11a5c8: cbz x8, #0x11a460 */
  if ((ARC_X_R(c, 8)) == 0) goto L_11a460;
  /* 11a5cc: ldr x8, [x11, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 11) + INT64_C(16))));
  /* 11a5d0: ldr x9, [sp, #0x20] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(32))));
  /* 11a5d4: csel x8, x9, x8, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* 11a5d8: ldr w8, [x8] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 8)));
  /* 11a5dc: str w8, [x26], #4 */
  { const uint64_t _a = ARC_X_R(c, 26);
    ARC_X_W(c, 26, ARC_X_R(c, 26) + INT64_C(4));
    arc_st32(_a, ARC_W_R(c, 8));
  }
L_11a5e0:;
  /* 11a5e0: mov x27, x26 */
  ARC_X_W(c, 27, ARC_X_R(c, 26));
  /* 11a5e4: str x26, [x22] */
  arc_st64(ARC_X_R(c, 22), ARC_X_R(c, 26));
  /* 11a5e8: b #0x11a460 */
  goto L_11a460;
L_11a5ec:;
  /* 11a5ec: ldur w28, [x29, #-0x14] */
  ARC_W_W(c, 28, arc_ld32((ARC_X_R(c, 29) + INT64_C(-20))));
L_11a5f0:;
  /* 11a5f0: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 11a5f4: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 11a5f8: mov w1, #0x30 */
  ARC_W_W(c, 1, UINT64_C(48));
  /* 11a5fc: ldr x8, [x8, #0x58] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(88))));
  /* 11a600: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1156612));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 11a604: ldr x8, [x22] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 22)));
  /* 11a608: cmp w28, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 28), UINT64_C(1));
  /* 11a60c: b.lt #0x11a674 */
  if (ARC_COND(c, 11)) goto L_11a674;
  /* 11a610: cmp w28, #8 */
  (void)arc_sub32(c, ARC_W_R(c, 28), UINT64_C(8));
  /* 11a614: b.hs #0x11a620 */
  if (ARC_COND(c, 2)) goto L_11a620;
  /* 11a618: mov x9, x8 */
  ARC_X_W(c, 9, ARC_X_R(c, 8));
  /* 11a61c: b #0x11a65c */
  goto L_11a65c;
L_11a620:;
  /* 11a620: mov w10, w28 */
  ARC_W_W(c, 10, ARC_W_R(c, 28));
  /* 11a624: dup v0.4s, w0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (ARC_W_R(c, 0));
    _t.u32[1] = (ARC_W_R(c, 0));
    _t.u32[2] = (ARC_W_R(c, 0));
    _t.u32[3] = (ARC_W_R(c, 0));
    (c)->q[0] = _t; }
  /* 11a628: and x11, x10, #0x7ffffff8 */
  ARC_X_W(c, 11, (ARC_X_R(c, 10) & UINT64_C(2147483640)));
  /* 11a62c: add x9, x8, x11, lsl #2 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 11)) << 2)));
  /* 11a630: sub w28, w28, w11 */
  ARC_W_W(c, 28, (ARC_W_R(c, 28) - ARC_W_R(c, 11)));
  /* 11a634: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* 11a638: mov x12, x11 */
  ARC_X_W(c, 12, ARC_X_R(c, 11));
L_11a63c:;
  /* 11a63c: subs x12, x12, #8 */
  ARC_X_W(c, 12, arc_sub64(c, ARC_X_R(c, 12), UINT64_C(8)));
  /* 11a640: stp q0, q0, [x8, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 8) + INT64_C(-16));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* 11a644: add x8, x8, #0x20 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(32)));
  /* 11a648: b.ne #0x11a63c */
  if (ARC_COND(c, 1)) goto L_11a63c;
  /* 11a64c: cmp x11, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 10));
  /* 11a650: b.ne #0x11a65c */
  if (ARC_COND(c, 1)) goto L_11a65c;
  /* 11a654: mov x8, x9 */
  ARC_X_W(c, 8, ARC_X_R(c, 9));
  /* 11a658: b #0x11a674 */
  goto L_11a674;
L_11a65c:;
  /* 11a65c: add w10, w28, #1 */
  ARC_W_W(c, 10, (ARC_W_R(c, 28) + UINT64_C(1)));
  /* 11a660: mov x8, x9 */
  ARC_X_W(c, 8, ARC_X_R(c, 9));
L_11a664:;
  /* 11a664: sub w10, w10, #1 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) - UINT64_C(1)));
  /* 11a668: str w0, [x8], #4 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(4));
    arc_st32(_a, ARC_W_R(c, 0));
  }
  /* 11a66c: cmp w10, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(1));
  /* 11a670: b.hi #0x11a664 */
  if (ARC_COND(c, 8)) goto L_11a664;
L_11a674:;
  /* 11a674: ldr w9, [sp, #0x14] */
  ARC_W_W(c, 9, arc_ld32(((c)->sp + INT64_C(20))));
  /* 11a678: ldr x28, [sp, #0x18] */
  ARC_X_W(c, 28, arc_ld64(((c)->sp + INT64_C(24))));
  /* 11a67c: str w9, [x8], #4 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(4));
    arc_st32(_a, ARC_W_R(c, 9));
  }
  /* 11a680: str x8, [x22] */
  arc_st64(ARC_X_R(c, 22), ARC_X_R(c, 8));
L_11a684:;
  /* 11a684: cmp x26, x25 */
  (void)arc_sub64(c, ARC_X_R(c, 26), ARC_X_R(c, 25));
  /* 11a688: b.eq #0x11a6bc */
  if (ARC_COND(c, 0)) goto L_11a6bc;
  /* 11a68c: ldrb w8, [x19] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 19)));
  /* 11a690: ldr x9, [x19, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* 11a694: lsr x10, x8, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* 11a698: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 11a69c: csel x9, x10, x9, eq */
  ARC_X_W(c, 9, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* 11a6a0: cbz x9, #0x11a6e0 */
  if ((ARC_X_R(c, 9)) == 0) goto L_11a6e0;
  /* 11a6a4: ldr x9, [x19, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* 11a6a8: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 11a6ac: ldur x8, [x29, #-8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(-8))));
  /* 11a6b0: csel x8, x8, x9, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* 11a6b4: ldrb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 11a6b8: b #0x11a6e4 */
  goto L_11a6e4;
L_11a6bc:;
  /* 11a6bc: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 11a6c0: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 11a6c4: mov w1, #0x30 */
  ARC_W_W(c, 1, UINT64_C(48));
  /* 11a6c8: ldr x8, [x8, #0x58] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(88))));
  /* 11a6cc: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1156816));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 11a6d0: ldr x26, [x22] */
  ARC_X_W(c, 26, arc_ld64(ARC_X_R(c, 22)));
  /* 11a6d4: str w0, [x26], #4 */
  { const uint64_t _a = ARC_X_R(c, 26);
    ARC_X_W(c, 26, ARC_X_R(c, 26) + INT64_C(4));
    arc_st32(_a, ARC_W_R(c, 0));
  }
  /* 11a6d8: str x26, [x22] */
  arc_st64(ARC_X_R(c, 22), ARC_X_R(c, 26));
  /* 11a6dc: b #0x11a774 */
  goto L_11a774;
L_11a6e0:;
  /* 11a6e0: mov w8, #-1 */
  ARC_W_W(c, 8, UINT64_C(18446744073709551615));
L_11a6e4:;
  /* 11a6e4: mov w9, wzr */
  ARC_W_W(c, 9, ARC_W_R(c, 31));
  /* 11a6e8: mov w11, wzr */
  ARC_W_W(c, 11, ARC_W_R(c, 31));
  /* 11a6ec: b #0x11a714 */
  goto L_11a714;
L_11a6f0:;
  /* 11a6f0: ldrb w8, [x8, x9] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 8) + ARC_X_R(c, 9))));
L_11a6f4:;
  /* 11a6f4: mov w11, wzr */
  ARC_W_W(c, 11, ARC_W_R(c, 31));
L_11a6f8:;
  /* 11a6f8: ldr w12, [x26, #-4]! */
  { const uint64_t _a = (ARC_X_R(c, 26) + INT64_C(-4));
    ARC_X_W(c, 26, ARC_X_R(c, 26) + INT64_C(-4));
    ARC_W_W(c, 12, arc_ld32(_a));
  }
  /* 11a6fc: mov x13, x10 */
  ARC_X_W(c, 13, ARC_X_R(c, 10));
  /* 11a700: cmp x26, x25 */
  (void)arc_sub64(c, ARC_X_R(c, 26), ARC_X_R(c, 25));
  /* 11a704: add w11, w11, #1 */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) + UINT64_C(1)));
  /* 11a708: str w12, [x13], #4 */
  { const uint64_t _a = ARC_X_R(c, 13);
    ARC_X_W(c, 13, ARC_X_R(c, 13) + INT64_C(4));
    arc_st32(_a, ARC_W_R(c, 12));
  }
  /* 11a70c: str x13, [x22] */
  arc_st64(ARC_X_R(c, 22), ARC_X_R(c, 13));
  /* 11a710: b.eq #0x11a770 */
  if (ARC_COND(c, 0)) goto L_11a770;
L_11a714:;
  /* 11a714: ldr x10, [x22] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 22)));
  /* 11a718: cmp w11, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 11), ARC_W_R(c, 8));
  /* 11a71c: b.ne #0x11a6f8 */
  if (ARC_COND(c, 1)) goto L_11a6f8;
  /* 11a720: str w21, [x10], #4 */
  { const uint64_t _a = ARC_X_R(c, 10);
    ARC_X_W(c, 10, ARC_X_R(c, 10) + INT64_C(4));
    arc_st32(_a, ARC_W_R(c, 21));
  }
  /* 11a724: add w9, w9, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) + UINT64_C(1)));
  /* 11a728: str x10, [x22] */
  arc_st64(ARC_X_R(c, 22), ARC_X_R(c, 10));
  /* 11a72c: ldrb w11, [x19] */
  ARC_W_W(c, 11, arc_ld8(ARC_X_R(c, 19)));
  /* 11a730: ldr x12, [x19, #8] */
  ARC_X_W(c, 12, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* 11a734: lsr x13, x11, #1 */
  ARC_X_W(c, 13, ((uint64_t)(ARC_X_R(c, 11)) >> ((UINT64_C(1)) & 63)));
  /* 11a738: tst w11, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 11) & UINT64_C(1)));
  /* 11a73c: csel x12, x13, x12, eq */
  ARC_X_W(c, 12, (ARC_COND(c, 0) ? (ARC_X_R(c, 13)) : ARC_X_R(c, 12)));
  /* 11a740: cmp x12, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 12), ARC_X_R(c, 9));
  /* 11a744: b.ls #0x11a6f4 */
  if (ARC_COND(c, 9)) goto L_11a6f4;
  /* 11a748: ldr x8, [x19, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* 11a74c: tst w11, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 11) & UINT64_C(1)));
  /* 11a750: ldur x11, [x29, #-8] */
  ARC_X_W(c, 11, arc_ld64((ARC_X_R(c, 29) + INT64_C(-8))));
  /* 11a754: csel x8, x11, x8, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 11)) : ARC_X_R(c, 8)));
  /* 11a758: ldrb w11, [x8, x9] */
  ARC_W_W(c, 11, arc_ld8((ARC_X_R(c, 8) + ARC_X_R(c, 9))));
  /* 11a75c: cmp w11, #0xff */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(255));
  /* 11a760: b.ne #0x11a6f0 */
  if (ARC_COND(c, 1)) goto L_11a6f0;
  /* 11a764: mov w11, wzr */
  ARC_W_W(c, 11, ARC_W_R(c, 31));
  /* 11a768: mov w8, #-1 */
  ARC_W_W(c, 8, UINT64_C(18446744073709551615));
  /* 11a76c: b #0x11a6f8 */
  goto L_11a6f8;
L_11a770:;
  /* 11a770: add x26, x10, #4 */
  ARC_X_W(c, 26, (ARC_X_R(c, 10) + UINT64_C(4)));
L_11a774:;
  /* 11a774: ldur x12, [x29, #-0x10] */
  ARC_X_W(c, 12, arc_ld64((ARC_X_R(c, 29) + INT64_C(-16))));
  /* 11a778: cmp x27, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 27), ARC_X_R(c, 26));
  /* 11a77c: b.eq #0x11a45c */
  if (ARC_COND(c, 0)) goto L_11a45c;
  /* 11a780: sub x8, x26, #4 */
  ARC_X_W(c, 8, (ARC_X_R(c, 26) - UINT64_C(4)));
  /* 11a784: cmp x27, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 27), ARC_X_R(c, 8));
  /* 11a788: b.hs #0x11a45c */
  if (ARC_COND(c, 2)) goto L_11a45c;
  /* 11a78c: add x9, x27, #4 */
  ARC_X_W(c, 9, (ARC_X_R(c, 27) + UINT64_C(4)));
L_11a790:;
  /* 11a790: ldr w10, [x8] */
  ARC_W_W(c, 10, arc_ld32(ARC_X_R(c, 8)));
  /* 11a794: ldur w11, [x9, #-4] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 9) + INT64_C(-4))));
  /* 11a798: stur w10, [x9, #-4] */
  arc_st32((ARC_X_R(c, 9) + INT64_C(-4)), ARC_W_R(c, 10));
  /* 11a79c: str w11, [x8], #0xfffffffffffffffc */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(-4));
    arc_st32(_a, ARC_W_R(c, 11));
  }
  /* 11a7a0: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* 11a7a4: add x9, x9, #4 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(4)));
  /* 11a7a8: b.lo #0x11a790 */
  if (ARC_COND(c, 3)) goto L_11a790;
  /* 11a7ac: b #0x11a45c */
  goto L_11a45c;
L_11a7b0:;
  /* 11a7b0: ldr x11, [sp, #0x30] */
  ARC_X_W(c, 11, arc_ld64(((c)->sp + INT64_C(48))));
  /* 11a7b4: ldrb w8, [x11] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 11)));
  /* 11a7b8: ldr x9, [x11, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 11) + INT64_C(8))));
  /* 11a7bc: lsr x10, x8, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* 11a7c0: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 11a7c4: csel x9, x10, x9, eq */
  ARC_X_W(c, 9, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* 11a7c8: cmp x9, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(1));
  /* 11a7cc: b.ls #0x11a80c */
  if (ARC_COND(c, 9)) goto L_11a80c;
  /* 11a7d0: ldr x10, [x11, #0x10] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 11) + INT64_C(16))));
  /* 11a7d4: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 11a7d8: lsl x8, x9, #2 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 9)) << ((UINT64_C(2)) & 63)));
  /* 11a7dc: ldr x9, [sp, #0x20] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(32))));
  /* 11a7e0: csel x9, x9, x10, eq */
  ARC_X_W(c, 9, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 10)));
  /* 11a7e4: cmp x8, #4 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(4));
  /* 11a7e8: add x1, x9, #4 */
  ARC_X_W(c, 1, (ARC_X_R(c, 9) + UINT64_C(4)));
  /* 11a7ec: add x9, x9, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + ARC_X_R(c, 8)));
  /* 11a7f0: sub x23, x9, x1 */
  ARC_X_W(c, 23, (ARC_X_R(c, 9) - ARC_X_R(c, 1)));
  /* 11a7f4: b.eq #0x11a804 */
  if (ARC_COND(c, 0)) goto L_11a804;
  /* 11a7f8: mov x0, x26 */
  ARC_X_W(c, 0, ARC_X_R(c, 26));
  /* 11a7fc: mov x2, x23 */
  ARC_X_W(c, 2, ARC_X_R(c, 23));
  /* 11a800: bl #0x1449f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1157124));
  fn1_1449f0(c);
L_11a804:;
  /* 11a804: add x26, x26, x23 */
  ARC_X_W(c, 26, (ARC_X_R(c, 26) + ARC_X_R(c, 23)));
  /* 11a808: str x26, [x22] */
  arc_st64(ARC_X_R(c, 22), ARC_X_R(c, 26));
L_11a80c:;
  /* 11a80c: ldur w9, [x29, #-0x24] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 29) + INT64_C(-36))));
  /* 11a810: mov w8, #0xb0 */
  ARC_W_W(c, 8, UINT64_C(176));
  /* 11a814: and w8, w9, w8 */
  ARC_W_W(c, 8, (ARC_W_R(c, 9) & ARC_W_R(c, 8)));
  /* 11a818: cmp w8, #0x10 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(16));
  /* 11a81c: b.eq #0x11a830 */
  if (ARC_COND(c, 0)) goto L_11a830;
  /* 11a820: cmp w8, #0x20 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(32));
  /* 11a824: b.eq #0x11a82c */
  if (ARC_COND(c, 0)) goto L_11a82c;
  /* 11a828: ldr x26, [sp] */
  ARC_X_W(c, 26, arc_ld64((c)->sp));
L_11a82c:;
  /* 11a82c: str x26, [x28] */
  arc_st64(ARC_X_R(c, 28), ARC_X_R(c, 26));
L_11a830:;
  /* 11a830: ldp x20, x19, [sp, #0xb0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(176));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 11a834: ldp x22, x21, [sp, #0xa0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(160));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 11a838: ldp x24, x23, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 11a83c: ldp x26, x25, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* 11a840: ldp x28, x27, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* 11a844: ldp x29, x30, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 11a848: add sp, sp, #0xc0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(192)));
  /* 11a84c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 11a850: ret  */
  return;
}

void fn1_124d5c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039127388));
  /* 124d5c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 124d60: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 124d64: stp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 124d68: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 124d6c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 124d70: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 124d74: mov w0, #0x138 */
  ARC_W_W(c, 0, UINT64_C(312));
  /* 124d78: mov w21, w3 */
  ARC_W_W(c, 21, ARC_W_R(c, 3));
  /* 124d7c: mov x19, x2 */
  ARC_X_W(c, 19, ARC_X_R(c, 2));
  /* 124d80: mov x22, x1 */
  ARC_X_W(c, 22, ARC_X_R(c, 1));
  /* 124d84: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1199496));
  fn1_1428f0(c);
  /* 124d88: ldr x1, [x22] */
  ARC_X_W(c, 1, arc_ld64(ARC_X_R(c, 22)));
  /* 124d8c: ldr x2, [x19] */
  ARC_X_W(c, 2, arc_ld64(ARC_X_R(c, 19)));
  /* 124d90: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 124d94: mov w3, w21 */
  ARC_W_W(c, 3, ARC_W_R(c, 21));
  /* 124d98: bl #0x121820 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1199516));
  fn1_121820(c);
  /* 124d9c: add x1, x19, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 19) + UINT64_C(8)));
  /* 124da0: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 124da4: str x19, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 19));
  /* 124da8: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1199532));
  fn1_db2e0(c);
  /* 124dac: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 124db0: ldp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 124db4: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 124db8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 124dbc: ret  */
  return;
  /* 124dc0: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 124dc4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 124dc8: mov w1, #0x138 */
  ARC_W_W(c, 1, UINT64_C(312));
  /* 124dcc: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1199568));
  fn1_142608(c);
  /* 124dd0: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 124dd4: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1199576));
  fn1_9cc20(c);
}

void fn1_127b18(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039139096));
  /* 127b18: bti c */
  /* bti: no architectural effect here */
  /* 127b1c: ldr x8, [x0, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 127b20: mov w0, w1 */
  ARC_W_W(c, 0, ARC_W_R(c, 1));
  /* 127b24: mov x1, x8 */
  ARC_X_W(c, 1, ARC_X_R(c, 8));
  /* 127b28: b #0x144390 */
  fn1_144390(c); return;
}

void fn1_129cac(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039147692));
  /* 129cac: bti c */
  /* bti: no architectural effect here */
  /* 129cb0: mov w0, #3 */
  ARC_W_W(c, 0, UINT64_C(3));
  /* 129cb4: str x2, [x4] */
  arc_st64(ARC_X_R(c, 4), ARC_X_R(c, 2));
  /* 129cb8: ret  */
  return;
}

void fn1_12b5dc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039154140));
  /* 12b5dc: bti c */
  /* bti: no architectural effect here */
  /* 12b5e0: sub x8, x1, x0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 1) - ARC_X_R(c, 0)));
  /* 12b5e4: str x0, [x2] */
  arc_st64(ARC_X_R(c, 2), ARC_X_R(c, 0));
  /* 12b5e8: cmp x8, #3 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(3));
  /* 12b5ec: str x3, [x5] */
  arc_st64(ARC_X_R(c, 5), ARC_X_R(c, 3));
  /* 12b5f0: b.lt #0x12b624 */
  if (ARC_COND(c, 11)) goto L_12b624;
  /* 12b5f4: tbz w7, #2, #0x12b624 */
  if (((ARC_W_R(c, 7)) >> 2 & 1) == 0) goto L_12b624;
  /* 12b5f8: ldrb w8, [x0] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 0)));
  /* 12b5fc: cmp w8, #0xef */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(239));
  /* 12b600: b.ne #0x12b624 */
  if (ARC_COND(c, 1)) goto L_12b624;
  /* 12b604: ldrb w8, [x0, #1] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 0) + INT64_C(1))));
  /* 12b608: cmp w8, #0xbb */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(187));
  /* 12b60c: b.ne #0x12b624 */
  if (ARC_COND(c, 1)) goto L_12b624;
  /* 12b610: ldrb w8, [x0, #2] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 0) + INT64_C(2))));
  /* 12b614: cmp w8, #0xbf */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(191));
  /* 12b618: b.ne #0x12b624 */
  if (ARC_COND(c, 1)) goto L_12b624;
  /* 12b61c: add x0, x0, #3 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3)));
  /* 12b620: str x0, [x2] */
  arc_st64(ARC_X_R(c, 2), ARC_X_R(c, 0));
L_12b624:;
  /* 12b624: cmp x0, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 1));
  /* 12b628: b.hs #0x12b828 */
  if (ARC_COND(c, 2)) goto L_12b828;
  /* 12b62c: ldr x8, [x5] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 5)));
  /* 12b630: mov w9, #0xd800 */
  ARC_W_W(c, 9, UINT64_C(55296));
  /* 12b634: mov w10, #0xdc00 */
  ARC_W_W(c, 10, UINT64_C(56320));
  /* 12b638: b #0x12b65c */
  goto L_12b65c;
L_12b63c:;
  /* 12b63c: str w11, [x8] */
  arc_st32(ARC_X_R(c, 8), ARC_W_R(c, 11));
  /* 12b640: mov w11, #1 */
  ARC_W_W(c, 11, UINT64_C(1));
L_12b644:;
  /* 12b644: add x0, x0, x11 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + ARC_X_R(c, 11)));
  /* 12b648: add x8, x8, #4 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(4)));
  /* 12b64c: cmp x0, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 1));
  /* 12b650: str x0, [x2] */
  arc_st64(ARC_X_R(c, 2), ARC_X_R(c, 0));
  /* 12b654: str x8, [x5] */
  arc_st64(ARC_X_R(c, 5), ARC_X_R(c, 8));
  /* 12b658: b.hs #0x12b828 */
  if (ARC_COND(c, 2)) goto L_12b828;
L_12b65c:;
  /* 12b65c: cmp x8, x4 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 4));
  /* 12b660: b.hs #0x12b838 */
  if (ARC_COND(c, 2)) goto L_12b838;
  /* 12b664: ldrb w11, [x0] */
  ARC_W_W(c, 11, arc_ld8(ARC_X_R(c, 0)));
  /* 12b668: cmp x6, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 6), ARC_X_R(c, 11));
  /* 12b66c: b.lo #0x12b830 */
  if (ARC_COND(c, 3)) goto L_12b830;
  /* 12b670: tbz w11, #7, #0x12b63c */
  if (((ARC_W_R(c, 11)) >> 7 & 1) == 0) goto L_12b63c;
  /* 12b674: cmp w11, #0xc2 */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(194));
  /* 12b678: b.lo #0x12b830 */
  if (ARC_COND(c, 3)) goto L_12b830;
  /* 12b67c: cmp w11, #0xdf */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(223));
  /* 12b680: b.hi #0x12b6bc */
  if (ARC_COND(c, 8)) goto L_12b6bc;
  /* 12b684: sub x12, x1, x0 */
  ARC_X_W(c, 12, (ARC_X_R(c, 1) - ARC_X_R(c, 0)));
  /* 12b688: cmp x12, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 12), UINT64_C(2));
  /* 12b68c: b.lt #0x12b838 */
  if (ARC_COND(c, 11)) goto L_12b838;
  /* 12b690: ldrb w12, [x0, #1] */
  ARC_W_W(c, 12, arc_ld8((ARC_X_R(c, 0) + INT64_C(1))));
  /* 12b694: and w13, w12, #0xc0 */
  ARC_W_W(c, 13, (ARC_W_R(c, 12) & UINT64_C(192)));
  /* 12b698: cmp w13, #0x80 */
  (void)arc_sub32(c, ARC_W_R(c, 13), UINT64_C(128));
  /* 12b69c: b.ne #0x12b830 */
  if (ARC_COND(c, 1)) goto L_12b830;
  /* 12b6a0: and w12, w12, #0x3f */
  ARC_W_W(c, 12, (ARC_W_R(c, 12) & UINT64_C(63)));
  /* 12b6a4: bfi w12, w11, #6, #5 */
  ARC_W_W(c, 12, (((uint32_t)(ARC_W_R(c, 12)) & UINT64_C(4294965311)) | ((((uint32_t)(ARC_W_R(c, 11))) & UINT64_C(31)) << 6)));
  /* 12b6a8: cmp x6, x12 */
  (void)arc_sub64(c, ARC_X_R(c, 6), ARC_X_R(c, 12));
  /* 12b6ac: b.lo #0x12b830 */
  if (ARC_COND(c, 3)) goto L_12b830;
  /* 12b6b0: str w12, [x8] */
  arc_st32(ARC_X_R(c, 8), ARC_W_R(c, 12));
  /* 12b6b4: mov w11, #2 */
  ARC_W_W(c, 11, UINT64_C(2));
  /* 12b6b8: b #0x12b644 */
  goto L_12b644;
L_12b6bc:;
  /* 12b6bc: cmp w11, #0xef */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(239));
  /* 12b6c0: b.hi #0x12b6f4 */
  if (ARC_COND(c, 8)) goto L_12b6f4;
  /* 12b6c4: sub x13, x1, x0 */
  ARC_X_W(c, 13, (ARC_X_R(c, 1) - ARC_X_R(c, 0)));
  /* 12b6c8: cmp x13, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 13), UINT64_C(2));
  /* 12b6cc: b.lt #0x12b838 */
  if (ARC_COND(c, 11)) goto L_12b838;
  /* 12b6d0: ldrb w12, [x0, #1] */
  ARC_W_W(c, 12, arc_ld8((ARC_X_R(c, 0) + INT64_C(1))));
  /* 12b6d4: cmp w11, #0xed */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(237));
  /* 12b6d8: b.eq #0x12b72c */
  if (ARC_COND(c, 0)) goto L_12b72c;
  /* 12b6dc: cmp w11, #0xe0 */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(224));
  /* 12b6e0: b.ne #0x12b73c */
  if (ARC_COND(c, 1)) goto L_12b73c;
  /* 12b6e4: and w14, w12, #0xe0 */
  ARC_W_W(c, 14, (ARC_W_R(c, 12) & UINT64_C(224)));
  /* 12b6e8: cmp w14, #0xa0 */
  (void)arc_sub32(c, ARC_W_R(c, 14), UINT64_C(160));
  /* 12b6ec: b.eq #0x12b748 */
  if (ARC_COND(c, 0)) goto L_12b748;
  /* 12b6f0: b #0x12b830 */
  goto L_12b830;
L_12b6f4:;
  /* 12b6f4: cmp w11, #0xf4 */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(244));
  /* 12b6f8: b.hi #0x12b830 */
  if (ARC_COND(c, 8)) goto L_12b830;
  /* 12b6fc: sub x14, x1, x0 */
  ARC_X_W(c, 14, (ARC_X_R(c, 1) - ARC_X_R(c, 0)));
  /* 12b700: cmp x14, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 14), UINT64_C(2));
  /* 12b704: b.lt #0x12b838 */
  if (ARC_COND(c, 11)) goto L_12b838;
  /* 12b708: ldrb w12, [x0, #1] */
  ARC_W_W(c, 12, arc_ld8((ARC_X_R(c, 0) + INT64_C(1))));
  /* 12b70c: cmp w11, #0xf4 */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(244));
  /* 12b710: b.eq #0x12b780 */
  if (ARC_COND(c, 0)) goto L_12b780;
  /* 12b714: cmp w11, #0xf0 */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(240));
  /* 12b718: b.ne #0x12b790 */
  if (ARC_COND(c, 1)) goto L_12b790;
  /* 12b71c: sub w13, w12, #0x90 */
  ARC_W_W(c, 13, (ARC_W_R(c, 12) - UINT64_C(144)));
  /* 12b720: cmp w13, #0x30 */
  (void)arc_sub32(c, ARC_W_R(c, 13), UINT64_C(48));
  /* 12b724: b.lo #0x12b79c */
  if (ARC_COND(c, 3)) goto L_12b79c;
  /* 12b728: b #0x12b830 */
  goto L_12b830;
L_12b72c:;
  /* 12b72c: sxtb w14, w12 */
  ARC_W_W(c, 14, ((int32_t)(int8_t)(ARC_W_R(c, 12))));
  /* 12b730: cmn w14, #0x60 */
  (void)arc_add32(c, ARC_W_R(c, 14), UINT64_C(96), 0);
  /* 12b734: b.lt #0x12b748 */
  if (ARC_COND(c, 11)) goto L_12b748;
  /* 12b738: b #0x12b830 */
  goto L_12b830;
L_12b73c:;
  /* 12b73c: sxtb w14, w12 */
  ARC_W_W(c, 14, ((int32_t)(int8_t)(ARC_W_R(c, 12))));
  /* 12b740: cmn w14, #0x41 */
  (void)arc_add32(c, ARC_W_R(c, 14), UINT64_C(65), 0);
  /* 12b744: b.gt #0x12b830 */
  if (ARC_COND(c, 12)) goto L_12b830;
L_12b748:;
  /* 12b748: cmp x13, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 13), UINT64_C(2));
  /* 12b74c: b.eq #0x12b838 */
  if (ARC_COND(c, 0)) goto L_12b838;
  /* 12b750: ldrb w13, [x0, #2] */
  ARC_W_W(c, 13, arc_ld8((ARC_X_R(c, 0) + INT64_C(2))));
  /* 12b754: and w14, w13, #0xc0 */
  ARC_W_W(c, 14, (ARC_W_R(c, 13) & UINT64_C(192)));
  /* 12b758: cmp w14, #0x80 */
  (void)arc_sub32(c, ARC_W_R(c, 14), UINT64_C(128));
  /* 12b75c: b.ne #0x12b830 */
  if (ARC_COND(c, 1)) goto L_12b830;
  /* 12b760: ubfiz w11, w11, #0xc, #4 */
  ARC_W_W(c, 11, ((uint32_t)((((uint32_t)(ARC_W_R(c, 11))) & UINT64_C(15))) << 12));
  /* 12b764: bfi w11, w12, #6, #6 */
  ARC_W_W(c, 11, (((uint32_t)(ARC_W_R(c, 11)) & UINT64_C(4294963263)) | ((((uint32_t)(ARC_W_R(c, 12))) & UINT64_C(63)) << 6)));
  /* 12b768: bfxil w11, w13, #0, #6 */
  ARC_W_W(c, 11, (((uint32_t)(ARC_W_R(c, 11)) & UINT64_C(4294967232)) | ((((uint32_t)(ARC_W_R(c, 13))) >> 0) & UINT64_C(63))));
  /* 12b76c: cmp x6, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 6), ARC_X_R(c, 11));
  /* 12b770: b.lo #0x12b830 */
  if (ARC_COND(c, 3)) goto L_12b830;
  /* 12b774: str w11, [x8] */
  arc_st32(ARC_X_R(c, 8), ARC_W_R(c, 11));
  /* 12b778: mov w11, #3 */
  ARC_W_W(c, 11, UINT64_C(3));
  /* 12b77c: b #0x12b644 */
  goto L_12b644;
L_12b780:;
  /* 12b780: sxtb w13, w12 */
  ARC_W_W(c, 13, ((int32_t)(int8_t)(ARC_W_R(c, 12))));
  /* 12b784: cmn w13, #0x70 */
  (void)arc_add32(c, ARC_W_R(c, 13), UINT64_C(112), 0);
  /* 12b788: b.lt #0x12b79c */
  if (ARC_COND(c, 11)) goto L_12b79c;
  /* 12b78c: b #0x12b830 */
  goto L_12b830;
L_12b790:;
  /* 12b790: sxtb w13, w12 */
  ARC_W_W(c, 13, ((int32_t)(int8_t)(ARC_W_R(c, 12))));
  /* 12b794: cmn w13, #0x41 */
  (void)arc_add32(c, ARC_W_R(c, 13), UINT64_C(65), 0);
  /* 12b798: b.gt #0x12b830 */
  if (ARC_COND(c, 12)) goto L_12b830;
L_12b79c:;
  /* 12b79c: cmp x14, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 14), UINT64_C(2));
  /* 12b7a0: b.eq #0x12b838 */
  if (ARC_COND(c, 0)) goto L_12b838;
  /* 12b7a4: ldrb w13, [x0, #2] */
  ARC_W_W(c, 13, arc_ld8((ARC_X_R(c, 0) + INT64_C(2))));
  /* 12b7a8: and w15, w13, #0xc0 */
  ARC_W_W(c, 15, (ARC_W_R(c, 13) & UINT64_C(192)));
  /* 12b7ac: cmp w15, #0x80 */
  (void)arc_sub32(c, ARC_W_R(c, 15), UINT64_C(128));
  /* 12b7b0: b.ne #0x12b830 */
  if (ARC_COND(c, 1)) goto L_12b830;
  /* 12b7b4: cmp x14, #3 */
  (void)arc_sub64(c, ARC_X_R(c, 14), UINT64_C(3));
  /* 12b7b8: b.eq #0x12b838 */
  if (ARC_COND(c, 0)) goto L_12b838;
  /* 12b7bc: ldrb w14, [x0, #3] */
  ARC_W_W(c, 14, arc_ld8((ARC_X_R(c, 0) + INT64_C(3))));
  /* 12b7c0: and w15, w14, #0xc0 */
  ARC_W_W(c, 15, (ARC_W_R(c, 14) & UINT64_C(192)));
  /* 12b7c4: cmp w15, #0x80 */
  (void)arc_sub32(c, ARC_W_R(c, 15), UINT64_C(128));
  /* 12b7c8: b.ne #0x12b830 */
  if (ARC_COND(c, 1)) goto L_12b830;
  /* 12b7cc: sub x15, x4, x8 */
  ARC_X_W(c, 15, (ARC_X_R(c, 4) - ARC_X_R(c, 8)));
  /* 12b7d0: cmp x15, #5 */
  (void)arc_sub64(c, ARC_X_R(c, 15), UINT64_C(5));
  /* 12b7d4: b.lt #0x12b838 */
  if (ARC_COND(c, 11)) goto L_12b838;
  /* 12b7d8: ubfiz x15, x11, #0x12, #3 */
  ARC_X_W(c, 15, ((uint64_t)((((uint64_t)(ARC_X_R(c, 11))) & UINT64_C(7))) << 18));
  /* 12b7dc: bfi x15, x12, #0xc, #6 */
  ARC_X_W(c, 15, (((uint64_t)(ARC_X_R(c, 15)) & UINT64_C(18446744073709293567)) | ((((uint64_t)(ARC_X_R(c, 12))) & UINT64_C(63)) << 12)));
  /* 12b7e0: bfi x15, x13, #6, #6 */
  ARC_X_W(c, 15, (((uint64_t)(ARC_X_R(c, 15)) & UINT64_C(18446744073709547583)) | ((((uint64_t)(ARC_X_R(c, 13))) & UINT64_C(63)) << 6)));
  /* 12b7e4: bfxil x15, x14, #0, #6 */
  ARC_X_W(c, 15, (((uint64_t)(ARC_X_R(c, 15)) & UINT64_C(18446744073709551552)) | ((((uint64_t)(ARC_X_R(c, 14))) >> 0) & UINT64_C(63))));
  /* 12b7e8: cmp x15, x6 */
  (void)arc_sub64(c, ARC_X_R(c, 15), ARC_X_R(c, 6));
  /* 12b7ec: b.hi #0x12b830 */
  if (ARC_COND(c, 8)) goto L_12b830;
  /* 12b7f0: ubfiz w11, w11, #2, #3 */
  ARC_W_W(c, 11, ((uint32_t)((((uint32_t)(ARC_W_R(c, 11))) & UINT64_C(7))) << 2));
  /* 12b7f4: ubfiz w15, w12, #2, #4 */
  ARC_W_W(c, 15, ((uint32_t)((((uint32_t)(ARC_W_R(c, 12))) & UINT64_C(15))) << 2));
  /* 12b7f8: bfxil w11, w12, #4, #2 */
  ARC_W_W(c, 11, (((uint32_t)(ARC_W_R(c, 11)) & UINT64_C(4294967292)) | ((((uint32_t)(ARC_W_R(c, 12))) >> 4) & UINT64_C(3))));
  /* 12b7fc: and x12, x14, #0x3f */
  ARC_X_W(c, 12, (ARC_X_R(c, 14) & UINT64_C(63)));
  /* 12b800: bfi w12, w13, #6, #4 */
  ARC_W_W(c, 12, (((uint32_t)(ARC_W_R(c, 12)) & UINT64_C(4294966335)) | ((((uint32_t)(ARC_W_R(c, 13))) & UINT64_C(15)) << 6)));
  /* 12b804: orr w11, w15, w11, lsl #6 */
  ARC_W_W(c, 11, (ARC_W_R(c, 15) | ((uint32_t)(ARC_W_R(c, 11)) << 6)));
  /* 12b808: orr w12, w12, w10 */
  ARC_W_W(c, 12, (ARC_W_R(c, 12) | ARC_W_R(c, 10)));
  /* 12b80c: bfxil w11, w13, #4, #2 */
  ARC_W_W(c, 11, (((uint32_t)(ARC_W_R(c, 11)) & UINT64_C(4294967292)) | ((((uint32_t)(ARC_W_R(c, 13))) >> 4) & UINT64_C(3))));
  /* 12b810: sub w11, w11, #0x40 */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) - UINT64_C(64)));
  /* 12b814: orr w11, w11, w9 */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) | ARC_W_R(c, 9)));
  /* 12b818: str w11, [x8] */
  arc_st32(ARC_X_R(c, 8), ARC_W_R(c, 11));
  /* 12b81c: mov w11, #4 */
  ARC_W_W(c, 11, UINT64_C(4));
  /* 12b820: str w12, [x8, #4]! */
  { const uint64_t _a = (ARC_X_R(c, 8) + INT64_C(4));
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(4));
    arc_st32(_a, ARC_W_R(c, 12));
  }
  /* 12b824: b #0x12b644 */
  goto L_12b644;
L_12b828:;
  /* 12b828: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 12b82c: ret  */
  return;
L_12b830:;
  /* 12b830: mov w0, #2 */
  ARC_W_W(c, 0, UINT64_C(2));
  /* 12b834: ret  */
  return;
L_12b838:;
  /* 12b838: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 12b83c: ret  */
  return;
}

void fn1_12de44(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039164484));
  /* 12de44: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 12de48: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 12de4c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 12de50: nop  */
  /* nop: no architectural effect here */
  /* 12de54: adr x8, #0x15e6e8 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1435368)));
  /* 12de58: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 12de5c: tbz w8, #0, #0x12def0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_12def0;
L_12de60:;
  /* 12de60: adrp x8, #0x15e000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12de64: ldrb w8, [x8, #0x6b8] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 8) + INT64_C(1720))));
  /* 12de68: tbnz w8, #0, #0x12de80 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_12de80;
  /* 12de6c: nop  */
  /* nop: no architectural effect here */
  /* 12de70: adr x9, #0x15e6b8 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1435320)));
  /* 12de74: mov w8, #4 */
  ARC_W_W(c, 8, UINT64_C(4));
  /* 12de78: strb w8, [x9], #4 */
  { const uint64_t _a = ARC_X_R(c, 9);
    ARC_X_W(c, 9, ARC_X_R(c, 9) + INT64_C(4));
    arc_st8(_a, ARC_W_R(c, 8));
  }
  /* 12de7c: b #0x12de94 */
  goto L_12de94;
L_12de80:;
  /* 12de80: adrp x8, #0x15e000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12de84: add x8, x8, #0x6c0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1728)));
  /* 12de88: mov w10, #2 */
  ARC_W_W(c, 10, UINT64_C(2));
  /* 12de8c: ldr x9, [x8, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(8))));
  /* 12de90: str x10, [x8] */
  arc_st64(ARC_X_R(c, 8), ARC_X_R(c, 10));
L_12de94:;
  /* 12de94: mov x8, #0x41 */
  ARC_X_W(c, 8, UINT64_C(65));
  /* 12de98: str wzr, [x9, #8] */
  arc_st32((ARC_X_R(c, 9) + INT64_C(8)), ARC_W_R(c, 31));
  /* 12de9c: movk x8, #0x4d, lsl #32 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(18446462603027808255)) | UINT64_C(330712481792)));
  /* 12dea0: str x8, [x9] */
  arc_st64(ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* 12dea4: adrp x9, #0x15e000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12dea8: ldrb w9, [x9, #0x6d0] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 9) + INT64_C(1744))));
  /* 12deac: tbnz w9, #0, #0x12dec4 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) != 0) goto L_12dec4;
  /* 12deb0: adrp x9, #0x15e000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12deb4: add x9, x9, #0x6d0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(1744)));
  /* 12deb8: mov w10, #4 */
  ARC_W_W(c, 10, UINT64_C(4));
  /* 12debc: strb w10, [x9], #4 */
  { const uint64_t _a = ARC_X_R(c, 9);
    ARC_X_W(c, 9, ARC_X_R(c, 9) + INT64_C(4));
    arc_st8(_a, ARC_W_R(c, 10));
  }
  /* 12dec0: b #0x12ded8 */
  goto L_12ded8;
L_12dec4:;
  /* 12dec4: adrp x10, #0x15e000 */
  ARC_X_W(c, 10, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12dec8: add x10, x10, #0x6d8 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(1752)));
  /* 12decc: mov w11, #2 */
  ARC_W_W(c, 11, UINT64_C(2));
  /* 12ded0: ldr x9, [x10, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 10) + INT64_C(8))));
  /* 12ded4: str x11, [x10] */
  arc_st64(ARC_X_R(c, 10), ARC_X_R(c, 11));
L_12ded8:;
  /* 12ded8: add x8, x8, #0xf */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(15)));
  /* 12dedc: str x8, [x9] */
  arc_st64(ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* 12dee0: str wzr, [x9, #8] */
  arc_st32((ARC_X_R(c, 9) + INT64_C(8)), ARC_W_R(c, 31));
  /* 12dee4: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 12dee8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 12deec: ret  */
  return;
L_12def0:;
  /* 12def0: nop  */
  /* nop: no architectural effect here */
  /* 12def4: adr x0, #0x15e6e8 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1435368)));
  /* 12def8: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1236732));
  fn1_1424b8(c);
  /* 12defc: cbz w0, #0x12de60 */
  if ((ARC_W_R(c, 0)) == 0) goto L_12de60;
  /* 12df00: adrp x0, #0x135000 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1265664)));
  /* 12df04: add x0, x0, #0x61c */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1564)));
  /* 12df08: nop  */
  /* nop: no architectural effect here */
  /* 12df0c: adr x2, #0x148af8 */
  ARC_X_W(c, 2, (arc_image_bases[1] + UINT64_C(1346296)));
  /* 12df10: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 12df14: bl #0x1423f8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1236760));
  fn1_1423f8(c);
  /* 12df18: nop  */
  /* nop: no architectural effect here */
  /* 12df1c: adr x0, #0x15e6e8 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1435368)));
  /* 12df20: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1236772));
  fn1_1424d0(c);
  /* 12df24: b #0x12de60 */
  goto L_12de60;
}

void fn1_134a6c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039192172));
  /* 134a6c: bti c */
  /* bti: no architectural effect here */
  /* 134a70: add x0, x0, #0x410 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1040)));
  /* 134a74: ret  */
  return;
}

void fn1_135688(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039195272));
  /* 135688: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 13568c: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 135690: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 135694: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 135698: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 13569c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1356a0: ldr x8, [x8, #0xc78] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3192))));
  /* 1356a4: ldr x0, [x0, #0x20] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(32))));
  /* 1356a8: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* 1356ac: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* 1356b0: bl #0x144210 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1267380));
  fn1_144210(c);
  /* 1356b4: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 1356b8: ldr x8, [x8, #0xc70] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3184))));
  /* 1356bc: ldr x0, [x19, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* 1356c0: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* 1356c4: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* 1356c8: cbz x0, #0x1356dc */
  if ((ARC_X_R(c, 0)) == 0) goto L_1356dc;
  /* 1356cc: ldrb w8, [x19, #0x18] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(24))));
  /* 1356d0: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* 1356d4: b.ne #0x1356dc */
  if (ARC_COND(c, 1)) goto L_1356dc;
  /* 1356d8: bl #0x1425a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1267420));
  fn1_1425a8(c);
L_1356dc:;
  /* 1356dc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1356e0: mov w1, #0x28 */
  ARC_W_W(c, 1, UINT64_C(40));
  /* 1356e4: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1356e8: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1356ec: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 1356f0: b #0x142608 */
  fn1_142608(c); return;
  /* 1356f4: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1267448));
  fn1_a1454(c);
}

void fn1_13853c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039207228));
  /* 13853c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 138540: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 138544: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 138548: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 13854c: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 138550: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 138554: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 138558: ldr x8, [x8, #0xe58] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3672))));
  /* 13855c: add x9, x8, #0x18 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(24)));
  /* 138560: add x10, x8, #0x68 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(104)));
  /* 138564: add x8, x8, #0x40 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(64)));
  /* 138568: str x9, [x19, #-0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 19) + INT64_C(-16));
    ARC_X_W(c, 19, ARC_X_R(c, 19) + INT64_C(-16));
    arc_st64(_a, ARC_X_R(c, 9));
  }
  /* 13856c: str x10, [x20, #0x68]! */
  { const uint64_t _a = (ARC_X_R(c, 20) + INT64_C(104));
    ARC_X_W(c, 20, ARC_X_R(c, 20) + INT64_C(104));
    arc_st64(_a, ARC_X_R(c, 10));
  }
  /* 138570: str x8, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* 138574: bl #0x144558 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1279352));
  fn1_144558(c);
  /* 138578: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 13857c: bl #0x1433b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1279360));
  fn1_1433b8(c);
  /* 138580: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 138584: mov w1, #0x110 */
  ARC_W_W(c, 1, UINT64_C(272));
  /* 138588: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 13858c: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 138590: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 138594: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_13d8bc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039228604));
  /* 13d8bc: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 13d8c0: sub sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(96)));
  /* 13d8c4: stp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 13d8c8: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 13d8cc: add x29, sp, #0x40 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(64)));
  /* 13d8d0: ldr x8, [x0, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* 13d8d4: cbz x8, #0x13d8f4 */
  if ((ARC_X_R(c, 8)) == 0) goto L_13d8f4;
  /* 13d8d8: ldr q0, [x1] */
  arc_q_w(c, 0, arc_ld64(ARC_X_R(c, 1)), arc_ld64(ARC_X_R(c, 1) + 8));
  /* 13d8dc: str q0, [x8] */
  arc_st64(ARC_X_R(c, 8), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 8) + 8, (c)->q[0].u64[1]);
  /* 13d8e0: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 13d8e4: ldp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 13d8e8: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* 13d8ec: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 13d8f0: ret  */
  return;
L_13d8f4:;
  /* 13d8f4: str x1, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 1));
  /* 13d8f8: adrp x1, #0x51000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(331776)));
  /* 13d8fc: add x1, x1, #0x597 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1431)));
  /* 13d900: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 13d904: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 13d908: bl #0x11dda8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1300748));
  fn1_11dda8(c);
  /* 13d90c: ldr x1, [x20] */
  ARC_X_W(c, 1, arc_ld64(ARC_X_R(c, 20)));
  /* 13d910: mov x19, x20 */
  ARC_X_W(c, 19, ARC_X_R(c, 20));
  /* 13d914: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 13d918: bl #0x142b78 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1300764));
  fn1_142b78(c);
  /* 13d91c: ldr x8, [x0, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 13d920: ldr q0, [x0] */
  arc_q_w(c, 0, arc_ld64(ARC_X_R(c, 0)), arc_ld64(ARC_X_R(c, 0) + 8));
  /* 13d924: str x8, [sp, #0x30] */
  arc_st64(((c)->sp + INT64_C(48)), ARC_X_R(c, 8));
  /* 13d928: str q0, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), (c)->q[0].u64[0]);
  arc_st64(((c)->sp + INT64_C(32)) + 8, (c)->q[0].u64[1]);
  /* 13d92c: stp xzr, xzr, [x0, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 13d930: str xzr, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 31));
  /* 13d934: ldrb w8, [sp, #8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(8))));
  /* 13d938: tbz w8, #0, #0x13d94c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13d94c;
  /* 13d93c: ldr x8, [sp, #8] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(8))));
  /* 13d940: ldr x0, [sp, #0x18] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(24))));
  /* 13d944: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 13d948: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1300812));
  fn1_142608(c);
L_13d94c:;
  /* 13d94c: ldp x1, x2, [x19, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(16));
    ARC_X_W(c, 1, arc_ld64(_pa));
    ARC_X_W(c, 2, arc_ld64(_pa + 8));
  }
  /* 13d950: cmp x1, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 1), UINT64_C(0));
  /* 13d954: cset w8, ne */
  ARC_W_W(c, 8, (ARC_COND(c, 1) ? 1 : 0));
  /* 13d958: cmp x2, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 2), UINT64_C(0));
  /* 13d95c: cinc w8, w8, ne */
  ARC_W_W(c, 8, (ARC_COND(c, 1) ? (ARC_W_R(c, 8)) + 1 : (ARC_W_R(c, 8))));
  /* 13d960: cbz w8, #0x13d978 */
  if ((ARC_W_R(c, 8)) == 0) goto L_13d978;
  /* 13d964: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* 13d968: b.ne #0x13d984 */
  if (ARC_COND(c, 1)) goto L_13d984;
  /* 13d96c: ldr x2, [sp] */
  ARC_X_W(c, 2, arc_ld64((c)->sp));
  /* 13d970: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 13d974: bl #0x138e98 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1300856));
  fn1_138e98(c);
L_13d978:;
  /* 13d978: ldr x1, [sp] */
  ARC_X_W(c, 1, arc_ld64((c)->sp));
  /* 13d97c: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 13d980: bl #0x138db4 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1300868));
  fn1_138db4(c);
L_13d984:;
  /* 13d984: ldr x3, [sp] */
  ARC_X_W(c, 3, arc_ld64((c)->sp));
  /* 13d988: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 13d98c: bl #0x138f84 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1300880));
  fn1_138f84(c);
  /* 13d990: ldrb w8, [sp, #0x20] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(32))));
  /* 13d994: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 13d998: tbz w8, #0, #0x13d9c4 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13d9c4;
  /* 13d99c: ldr x0, [sp, #0x30] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(48))));
  /* 13d9a0: ldr x8, [sp, #0x20] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(32))));
  /* 13d9a4: b #0x13d9bc */
  goto L_13d9bc;
  /* 13d9a8: ldrb w8, [sp, #8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(8))));
  /* 13d9ac: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 13d9b0: tbz w8, #0, #0x13d9c4 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13d9c4;
  /* 13d9b4: ldr x0, [sp, #0x18] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(24))));
  /* 13d9b8: ldr x8, [sp, #8] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(8))));
L_13d9bc:;
  /* 13d9bc: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 13d9c0: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1300932));
  fn1_142608(c);
L_13d9c4:;
  /* 13d9c4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 13d9c8: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1300940));
  fn1_9cc20(c);
}

void fn1_1425f0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039248368));
  /* 1425f0: adrp x16, #0x151000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 1425f4: ldr x17, [x16, #0xf30] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(3888))));
  /* 1425f8: add x16, x16, #0xf30 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(3888)));
  /* 1425fc: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 142600: nop  */
  /* nop: no architectural effect here */
  /* 142604: nop  */
  /* nop: no architectural effect here */
}

void fn1_142bf0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039249904));
  /* 142bf0: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 142bf4: ldr x17, [x16, #0x130] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(304))));
  /* 142bf8: add x16, x16, #0x130 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(304)));
  /* 142bfc: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 142c00: nop  */
  /* nop: no architectural effect here */
  /* 142c04: nop  */
  /* nop: no architectural effect here */
}

void fn1_1431f0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039251440));
  /* 1431f0: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 1431f4: ldr x17, [x16, #0x330] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(816))));
  /* 1431f8: add x16, x16, #0x330 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(816)));
  /* 1431fc: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 143200: nop  */
  /* nop: no architectural effect here */
  /* 143204: nop  */
  /* nop: no architectural effect here */
}

void fn1_1437f0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039252976));
  /* 1437f0: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 1437f4: ldr x17, [x16, #0x530] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(1328))));
  /* 1437f8: add x16, x16, #0x530 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(1328)));
  /* 1437fc: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 143800: nop  */
  /* nop: no architectural effect here */
  /* 143804: nop  */
  /* nop: no architectural effect here */
}

void fn1_143df0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039254512));
  /* 143df0: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 143df4: ldr x17, [x16, #0x730] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(1840))));
  /* 143df8: add x16, x16, #0x730 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(1840)));
  /* 143dfc: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 143e00: nop  */
  /* nop: no architectural effect here */
  /* 143e04: nop  */
  /* nop: no architectural effect here */
}

void fn1_1443f0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039256048));
  /* 1443f0: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 1443f4: ldr x17, [x16, #0x930] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(2352))));
  /* 1443f8: add x16, x16, #0x930 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(2352)));
  /* 1443fc: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 144400: nop  */
  /* nop: no architectural effect here */
  /* 144404: nop  */
  /* nop: no architectural effect here */
}

void fn1_1449f0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039257584));
  /* 1449f0: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 1449f4: ldr x17, [x16, #0xb30] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(2864))));
  /* 1449f8: add x16, x16, #0xb30 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(2864)));
  /* 1449fc: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 144a00: nop  */
  /* nop: no architectural effect here */
  /* 144a04: nop  */
  /* nop: no architectural effect here */
}

