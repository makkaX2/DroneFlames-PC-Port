#include "lifted.h"

void fn1_a0d04(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038586628));
  /* a0d04: bti c */
  /* bti: no architectural effect here */
  /* a0d08: tbnz x0, #0x3e, #0xa0d14 */
  if (((ARC_X_R(c, 0)) >> 62 & 1) != 0) goto L_a0d14;
  /* a0d0c: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* a0d10: b #0xa0d18 */
  goto L_a0d18;
L_a0d14:;
  /* a0d14: ldr x8, [x1, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 1) + INT64_C(16))));
L_a0d18:;
  /* a0d18: stp x28, x27, [sp, #-0x50]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-80));
    (c)->sp = (c)->sp + INT64_C(-80);
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* a0d1c: stp x26, x25, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* a0d20: stp x24, x23, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* a0d24: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* a0d28: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* a0d2c: dup v1.2d, x8 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 8));
    _t.u64[1] = (ARC_X_R(c, 8));
    (c)->q[1] = _t; }
  /* a0d30: adrp x9, #0x52000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(335872)));
  /* a0d34: adrp x10, #0x52000 */
  ARC_X_W(c, 10, (arc_image_bases[1] + UINT64_C(335872)));
  /* a0d38: adrp x11, #0x52000 */
  ARC_X_W(c, 11, (arc_image_bases[1] + UINT64_C(335872)));
  /* a0d3c: adrp x12, #0x52000 */
  ARC_X_W(c, 12, (arc_image_bases[1] + UINT64_C(335872)));
  /* a0d40: ldr q0, [x9, #0xd00] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 9) + INT64_C(3328))), arc_ld64((ARC_X_R(c, 9) + INT64_C(3328)) + 8));
  /* a0d44: ldr q2, [x10, #0xa30] */
  arc_q_w(c, 2, arc_ld64((ARC_X_R(c, 10) + INT64_C(2608))), arc_ld64((ARC_X_R(c, 10) + INT64_C(2608)) + 8));
  /* a0d48: ldr q3, [x11, #0xae0] */
  arc_q_w(c, 3, arc_ld64((ARC_X_R(c, 11) + INT64_C(2784))), arc_ld64((ARC_X_R(c, 11) + INT64_C(2784)) + 8));
  /* a0d4c: ldr q4, [x12, #0x910] */
  arc_q_w(c, 4, arc_ld64((ARC_X_R(c, 12) + INT64_C(2320))), arc_ld64((ARC_X_R(c, 12) + INT64_C(2320)) + 8));
  /* a0d50: ushl v5.2d, v1.2d, v0.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[1].u64[0], (int8_t)(c)->q[0].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[1].u64[1], (int8_t)(c)->q[0].u64[1]);
    (c)->q[5] = _t; }
  /* a0d54: adrp x9, #0x52000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(335872)));
  /* a0d58: adrp x10, #0x52000 */
  ARC_X_W(c, 10, (arc_image_bases[1] + UINT64_C(335872)));
  /* a0d5c: ushl v2.2d, v1.2d, v2.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[1].u64[0], (int8_t)(c)->q[2].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[1].u64[1], (int8_t)(c)->q[2].u64[1]);
    (c)->q[2] = _t; }
  /* a0d60: ushl v0.2d, v1.2d, v3.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[1].u64[0], (int8_t)(c)->q[3].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[1].u64[1], (int8_t)(c)->q[3].u64[1]);
    (c)->q[0] = _t; }
  /* a0d64: ushl v1.2d, v1.2d, v4.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[1].u64[0], (int8_t)(c)->q[4].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[1].u64[1], (int8_t)(c)->q[4].u64[1]);
    (c)->q[1] = _t; }
  /* a0d68: adrp x11, #0x52000 */
  ARC_X_W(c, 11, (arc_image_bases[1] + UINT64_C(335872)));
  /* a0d6c: adrp x12, #0x52000 */
  ARC_X_W(c, 12, (arc_image_bases[1] + UINT64_C(335872)));
  /* a0d70: ldr q3, [x10, #0x920] */
  arc_q_w(c, 3, arc_ld64((ARC_X_R(c, 10) + INT64_C(2336))), arc_ld64((ARC_X_R(c, 10) + INT64_C(2336)) + 8));
  /* a0d74: ldr q4, [x11, #0x930] */
  arc_q_w(c, 4, arc_ld64((ARC_X_R(c, 11) + INT64_C(2352))), arc_ld64((ARC_X_R(c, 11) + INT64_C(2352)) + 8));
  /* a0d78: ldr q6, [x9, #0x950] */
  arc_q_w(c, 6, arc_ld64((ARC_X_R(c, 9) + INT64_C(2384))), arc_ld64((ARC_X_R(c, 9) + INT64_C(2384)) + 8));
  /* a0d7c: ldr q7, [x12, #0xd50] */
  arc_q_w(c, 7, arc_ld64((ARC_X_R(c, 12) + INT64_C(3408))), arc_ld64((ARC_X_R(c, 12) + INT64_C(3408)) + 8));
  /* a0d80: and v2.16b, v2.16b, v3.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[2].u8[0] & (c)->q[3].u8[0];
    _t.u8[1] = (c)->q[2].u8[1] & (c)->q[3].u8[1];
    _t.u8[2] = (c)->q[2].u8[2] & (c)->q[3].u8[2];
    _t.u8[3] = (c)->q[2].u8[3] & (c)->q[3].u8[3];
    _t.u8[4] = (c)->q[2].u8[4] & (c)->q[3].u8[4];
    _t.u8[5] = (c)->q[2].u8[5] & (c)->q[3].u8[5];
    _t.u8[6] = (c)->q[2].u8[6] & (c)->q[3].u8[6];
    _t.u8[7] = (c)->q[2].u8[7] & (c)->q[3].u8[7];
    _t.u8[8] = (c)->q[2].u8[8] & (c)->q[3].u8[8];
    _t.u8[9] = (c)->q[2].u8[9] & (c)->q[3].u8[9];
    _t.u8[10] = (c)->q[2].u8[10] & (c)->q[3].u8[10];
    _t.u8[11] = (c)->q[2].u8[11] & (c)->q[3].u8[11];
    _t.u8[12] = (c)->q[2].u8[12] & (c)->q[3].u8[12];
    _t.u8[13] = (c)->q[2].u8[13] & (c)->q[3].u8[13];
    _t.u8[14] = (c)->q[2].u8[14] & (c)->q[3].u8[14];
    _t.u8[15] = (c)->q[2].u8[15] & (c)->q[3].u8[15];
    (c)->q[2] = _t; }
  /* a0d84: lsr x2, x0, #6 */
  ARC_X_W(c, 2, ((uint64_t)(ARC_X_R(c, 0)) >> ((UINT64_C(6)) & 63)));
  /* a0d88: lsr x14, x0, #7 */
  ARC_X_W(c, 14, ((uint64_t)(ARC_X_R(c, 0)) >> ((UINT64_C(7)) & 63)));
  /* a0d8c: and v3.16b, v5.16b, v4.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[5].u8[0] & (c)->q[4].u8[0];
    _t.u8[1] = (c)->q[5].u8[1] & (c)->q[4].u8[1];
    _t.u8[2] = (c)->q[5].u8[2] & (c)->q[4].u8[2];
    _t.u8[3] = (c)->q[5].u8[3] & (c)->q[4].u8[3];
    _t.u8[4] = (c)->q[5].u8[4] & (c)->q[4].u8[4];
    _t.u8[5] = (c)->q[5].u8[5] & (c)->q[4].u8[5];
    _t.u8[6] = (c)->q[5].u8[6] & (c)->q[4].u8[6];
    _t.u8[7] = (c)->q[5].u8[7] & (c)->q[4].u8[7];
    _t.u8[8] = (c)->q[5].u8[8] & (c)->q[4].u8[8];
    _t.u8[9] = (c)->q[5].u8[9] & (c)->q[4].u8[9];
    _t.u8[10] = (c)->q[5].u8[10] & (c)->q[4].u8[10];
    _t.u8[11] = (c)->q[5].u8[11] & (c)->q[4].u8[11];
    _t.u8[12] = (c)->q[5].u8[12] & (c)->q[4].u8[12];
    _t.u8[13] = (c)->q[5].u8[13] & (c)->q[4].u8[13];
    _t.u8[14] = (c)->q[5].u8[14] & (c)->q[4].u8[14];
    _t.u8[15] = (c)->q[5].u8[15] & (c)->q[4].u8[15];
    (c)->q[3] = _t; }
  /* a0d90: and v4.16b, v1.16b, v6.16b */
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
    (c)->q[4] = _t; }
  /* a0d94: and v5.16b, v0.16b, v7.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[0].u8[0] & (c)->q[7].u8[0];
    _t.u8[1] = (c)->q[0].u8[1] & (c)->q[7].u8[1];
    _t.u8[2] = (c)->q[0].u8[2] & (c)->q[7].u8[2];
    _t.u8[3] = (c)->q[0].u8[3] & (c)->q[7].u8[3];
    _t.u8[4] = (c)->q[0].u8[4] & (c)->q[7].u8[4];
    _t.u8[5] = (c)->q[0].u8[5] & (c)->q[7].u8[5];
    _t.u8[6] = (c)->q[0].u8[6] & (c)->q[7].u8[6];
    _t.u8[7] = (c)->q[0].u8[7] & (c)->q[7].u8[7];
    _t.u8[8] = (c)->q[0].u8[8] & (c)->q[7].u8[8];
    _t.u8[9] = (c)->q[0].u8[9] & (c)->q[7].u8[9];
    _t.u8[10] = (c)->q[0].u8[10] & (c)->q[7].u8[10];
    _t.u8[11] = (c)->q[0].u8[11] & (c)->q[7].u8[11];
    _t.u8[12] = (c)->q[0].u8[12] & (c)->q[7].u8[12];
    _t.u8[13] = (c)->q[0].u8[13] & (c)->q[7].u8[13];
    _t.u8[14] = (c)->q[0].u8[14] & (c)->q[7].u8[14];
    _t.u8[15] = (c)->q[0].u8[15] & (c)->q[7].u8[15];
    (c)->q[5] = _t; }
  /* a0d98: lsr x5, x0, #0xe */
  ARC_X_W(c, 5, ((uint64_t)(ARC_X_R(c, 0)) >> ((UINT64_C(14)) & 63)));
  /* a0d9c: lsr x6, x0, #0x14 */
  ARC_X_W(c, 6, ((uint64_t)(ARC_X_R(c, 0)) >> ((UINT64_C(20)) & 63)));
  /* a0da0: lsr x7, x0, #9 */
  ARC_X_W(c, 7, ((uint64_t)(ARC_X_R(c, 0)) >> ((UINT64_C(9)) & 63)));
  /* a0da4: lsl x19, x0, #7 */
  ARC_X_W(c, 19, ((uint64_t)(ARC_X_R(c, 0)) << ((UINT64_C(7)) & 63)));
  /* a0da8: lsl x22, x0, #0x15 */
  ARC_X_W(c, 22, ((uint64_t)(ARC_X_R(c, 0)) << ((UINT64_C(21)) & 63)));
  /* a0dac: lsr x24, x0, #1 */
  ARC_X_W(c, 24, ((uint64_t)(ARC_X_R(c, 0)) >> ((UINT64_C(1)) & 63)));
  /* a0db0: orr v2.16b, v3.16b, v2.16b */
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
  /* a0db4: orr v3.16b, v5.16b, v4.16b */
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
    (c)->q[3] = _t; }
  /* a0db8: lsr x17, x0, #0x10 */
  ARC_X_W(c, 17, ((uint64_t)(ARC_X_R(c, 0)) >> ((UINT64_C(16)) & 63)));
  /* a0dbc: and x20, x5, #0x20 */
  ARC_X_W(c, 20, (ARC_X_R(c, 5) & UINT64_C(32)));
  /* a0dc0: and x5, x6, #8 */
  ARC_X_W(c, 5, (ARC_X_R(c, 6) & UINT64_C(8)));
  /* a0dc4: and x23, x14, #0x20000 */
  ARC_X_W(c, 23, (ARC_X_R(c, 14) & UINT64_C(131072)));
  /* a0dc8: and x25, x2, #0x40 */
  ARC_X_W(c, 25, (ARC_X_R(c, 2) & UINT64_C(64)));
  /* a0dcc: fmov x27, d1 */
  ARC_X_W(c, 27, ARC_DU_R(c, 1));
  /* a0dd0: and x6, x22, #0x2000000000000 */
  ARC_X_W(c, 6, (ARC_X_R(c, 22) & UINT64_C(562949953421312)));
  /* a0dd4: orr v2.16b, v3.16b, v2.16b */
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
  /* a0dd8: and x22, x24, #0x80 */
  ARC_X_W(c, 22, (ARC_X_R(c, 24) & UINT64_C(128)));
  /* a0ddc: and x24, x19, #0x300000 */
  ARC_X_W(c, 24, (ARC_X_R(c, 19) & UINT64_C(3145728)));
  /* a0de0: bfi x5, x7, #0x10, #1 */
  ARC_X_W(c, 5, (((uint64_t)(ARC_X_R(c, 5)) & UINT64_C(18446744073709486079)) | ((((uint64_t)(ARC_X_R(c, 7))) & UINT64_C(1)) << 16)));
  /* a0de4: orr x7, x23, x25 */
  ARC_X_W(c, 7, (ARC_X_R(c, 23) | ARC_X_R(c, 25)));
  /* a0de8: and x19, x19, #0x400000 */
  ARC_X_W(c, 19, (ARC_X_R(c, 19) & UINT64_C(4194304)));
  /* a0dec: lsr x23, x0, #3 */
  ARC_X_W(c, 23, ((uint64_t)(ARC_X_R(c, 0)) >> ((UINT64_C(3)) & 63)));
  /* a0df0: lsr x15, x0, #0x1d */
  ARC_X_W(c, 15, ((uint64_t)(ARC_X_R(c, 0)) >> ((UINT64_C(29)) & 63)));
  /* a0df4: lsr x16, x0, #0x1a */
  ARC_X_W(c, 16, ((uint64_t)(ARC_X_R(c, 0)) >> ((UINT64_C(26)) & 63)));
  /* a0df8: ext v3.16b, v2.16b, v2.16b, #8 */
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
  /* a0dfc: lsr x4, x8, #5 */
  ARC_X_W(c, 4, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(5)) & 63)));
  /* a0e00: lsl x14, x8, #0x23 */
  ARC_X_W(c, 14, ((uint64_t)(ARC_X_R(c, 8)) << ((UINT64_C(35)) & 63)));
  /* a0e04: fmov x28, d0 */
  ARC_X_W(c, 28, ARC_DU_R(c, 0));
  /* a0e08: bfi x19, x17, #0x12, #1 */
  ARC_X_W(c, 19, (((uint64_t)(ARC_X_R(c, 19)) & UINT64_C(18446744073709289471)) | ((((uint64_t)(ARC_X_R(c, 17))) & UINT64_C(1)) << 18)));
  /* a0e0c: lsr x10, x0, #0x16 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 0)) >> ((UINT64_C(22)) & 63)));
  /* a0e10: lsr x11, x0, #4 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 0)) >> ((UINT64_C(4)) & 63)));
  /* a0e14: lsr x3, x8, #0x12 */
  ARC_X_W(c, 3, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(18)) & 63)));
  /* a0e18: and x21, x17, #0x10 */
  ARC_X_W(c, 21, (ARC_X_R(c, 17) & UINT64_C(16)));
  /* a0e1c: and x27, x27, #0x80000 */
  ARC_X_W(c, 27, (ARC_X_R(c, 27) & UINT64_C(524288)));
  /* a0e20: and x17, x23, #0x800000 */
  ARC_X_W(c, 17, (ARC_X_R(c, 23) & UINT64_C(8388608)));
  /* a0e24: lsr x9, x8, #0xe */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(14)) & 63)));
  /* a0e28: orr v2.8b, v2.8b, v3.8b */
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
  /* a0e2c: lsr x12, x8, #0x2e */
  ARC_X_W(c, 12, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(46)) & 63)));
  /* a0e30: lsr x1, x8, #0xd */
  ARC_X_W(c, 1, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(13)) & 63)));
  /* a0e34: and x16, x16, #2 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) & UINT64_C(2)));
  /* a0e38: and x4, x4, #4 */
  ARC_X_W(c, 4, (ARC_X_R(c, 4) & UINT64_C(4)));
  /* a0e3c: and x26, x14, #0x3c000000000 */
  ARC_X_W(c, 26, (ARC_X_R(c, 14) & UINT64_C(4123168604160)));
  /* a0e40: bfi x24, x2, #0xc, #1 */
  ARC_X_W(c, 24, (((uint64_t)(ARC_X_R(c, 24)) & UINT64_C(18446744073709547519)) | ((((uint64_t)(ARC_X_R(c, 2))) & UINT64_C(1)) << 12)));
  /* a0e44: bfi x6, x15, #0x2e, #1 */
  ARC_X_W(c, 6, (((uint64_t)(ARC_X_R(c, 6)) & UINT64_C(18446673704965373951)) | ((((uint64_t)(ARC_X_R(c, 15))) & UINT64_C(1)) << 46)));
  /* a0e48: bfxil x27, x8, #0x10, #1 */
  ARC_X_W(c, 27, (((uint64_t)(ARC_X_R(c, 27)) & UINT64_C(18446744073709551614)) | ((((uint64_t)(ARC_X_R(c, 8))) >> 16) & UINT64_C(1))));
  /* a0e4c: orr x8, x19, x17 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) | ARC_X_R(c, 17)));
  /* a0e50: bfi x16, x11, #0xf, #1 */
  ARC_X_W(c, 16, (((uint64_t)(ARC_X_R(c, 16)) & UINT64_C(18446744073709518847)) | ((((uint64_t)(ARC_X_R(c, 11))) & UINT64_C(1)) << 15)));
  /* a0e54: orr x20, x20, x21 */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) | ARC_X_R(c, 21)));
  /* a0e58: and x21, x28, #0x800000000000000 */
  ARC_X_W(c, 21, (ARC_X_R(c, 28) & UINT64_C(576460752303423488)));
  /* a0e5c: orr x15, x22, x4 */
  ARC_X_W(c, 15, (ARC_X_R(c, 22) | ARC_X_R(c, 4)));
  /* a0e60: bfi x26, x3, #0x2c, #1 */
  ARC_X_W(c, 26, (((uint64_t)(ARC_X_R(c, 26)) & UINT64_C(18446726481523507199)) | ((((uint64_t)(ARC_X_R(c, 3))) & UINT64_C(1)) << 44)));
  /* a0e64: bfi x8, x10, #0x1e, #1 */
  ARC_X_W(c, 8, (((uint64_t)(ARC_X_R(c, 8)) & UINT64_C(18446744072635809791)) | ((((uint64_t)(ARC_X_R(c, 10))) & UINT64_C(1)) << 30)));
  /* a0e68: lsl x13, x0, #3 */
  ARC_X_W(c, 13, ((uint64_t)(ARC_X_R(c, 0)) << ((UINT64_C(3)) & 63)));
  /* a0e6c: fmov x28, d2 */
  ARC_X_W(c, 28, ARC_DU_R(c, 2));
  /* a0e70: bfi x21, x1, #0x1a, #1 */
  ARC_X_W(c, 21, (((uint64_t)(ARC_X_R(c, 21)) & UINT64_C(18446744073642442751)) | ((((uint64_t)(ARC_X_R(c, 1))) & UINT64_C(1)) << 26)));
  /* a0e74: orr x17, x20, x5 */
  ARC_X_W(c, 17, (ARC_X_R(c, 20) | ARC_X_R(c, 5)));
  /* a0e78: orr x1, x7, x24 */
  ARC_X_W(c, 1, (ARC_X_R(c, 7) | ARC_X_R(c, 24)));
  /* a0e7c: orr x10, x6, x15 */
  ARC_X_W(c, 10, (ARC_X_R(c, 6) | ARC_X_R(c, 15)));
  /* a0e80: and x11, x11, #0x2000 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) & UINT64_C(8192)));
  /* a0e84: orr x15, x26, x27 */
  ARC_X_W(c, 15, (ARC_X_R(c, 26) | ARC_X_R(c, 27)));
  /* a0e88: orr x16, x16, x17 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) | ARC_X_R(c, 17)));
  /* a0e8c: orr x10, x1, x10 */
  ARC_X_W(c, 10, (ARC_X_R(c, 1) | ARC_X_R(c, 10)));
  /* a0e90: orr x8, x8, x11 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) | ARC_X_R(c, 11)));
  /* a0e94: and x13, x13, #0x400 */
  ARC_X_W(c, 13, (ARC_X_R(c, 13) & UINT64_C(1024)));
  /* a0e98: orr x11, x15, x21 */
  ARC_X_W(c, 11, (ARC_X_R(c, 15) | ARC_X_R(c, 21)));
  /* a0e9c: orr x10, x16, x10 */
  ARC_X_W(c, 10, (ARC_X_R(c, 16) | ARC_X_R(c, 10)));
  /* a0ea0: bfi x8, x12, #0x3a, #1 */
  ARC_X_W(c, 8, (((uint64_t)(ARC_X_R(c, 8)) & UINT64_C(18158513697557839871)) | ((((uint64_t)(ARC_X_R(c, 12))) & UINT64_C(1)) << 58)));
  /* a0ea4: orr x12, x28, x13 */
  ARC_X_W(c, 12, (ARC_X_R(c, 28) | ARC_X_R(c, 13)));
  /* a0ea8: orr x10, x10, x11 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) | ARC_X_R(c, 11)));
  /* a0eac: orr x10, x12, x10 */
  ARC_X_W(c, 10, (ARC_X_R(c, 12) | ARC_X_R(c, 10)));
  /* a0eb0: tst x0, #1 */
  arc_flags_logical64(c, (uint64_t)(ARC_X_R(c, 0) & UINT64_C(1)));
  /* a0eb4: and x11, x14, #0x1000000000 */
  ARC_X_W(c, 11, (ARC_X_R(c, 14) & UINT64_C(68719476736)));
  /* a0eb8: bfi x8, x9, #0x1b, #1 */
  ARC_X_W(c, 8, (((uint64_t)(ARC_X_R(c, 8)) & UINT64_C(18446744073575333887)) | ((((uint64_t)(ARC_X_R(c, 9))) & UINT64_C(1)) << 27)));
  /* a0ebc: orr x9, x10, #0x300 */
  ARC_X_W(c, 9, (ARC_X_R(c, 10) | UINT64_C(768)));
  /* a0ec0: csel x9, x10, x9, eq */
  ARC_X_W(c, 9, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* a0ec4: orr x8, x8, x11 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) | ARC_X_R(c, 11)));
  /* a0ec8: orr x8, x8, x9 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) | ARC_X_R(c, 9)));
  /* a0ecc: adrp x9, #0x157000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1404928)));
  /* a0ed0: orr x8, x8, #0x8000000000000000 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) | UINT64_C(9223372036854775808)));
  /* a0ed4: str x8, [x9, #0x648] */
  arc_st64((ARC_X_R(c, 9) + INT64_C(1608)), ARC_X_R(c, 8));
  /* a0ed8: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* a0edc: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* a0ee0: ldp x24, x23, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* a0ee4: ldp x26, x25, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* a0ee8: ldp x28, x27, [sp], #0x50 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(80);
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* a0eec: ret  */
  return;
}

void fn1_a2368(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038592360));
  /* a2368: bti c */
  /* bti: no architectural effect here */
  /* a236c: nop  */
  /* nop: no architectural effect here */
  /* a2370: adr x0, #0x4fc0a */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(326666)));
  /* a2374: ret  */
  return;
}

void fn1_a81f4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038616564));
  /* a81f4: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* a81f8: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* a81fc: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* a8200: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* a8204: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* a8208: ldr x21, [x0, #0x1330] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 0) + INT64_C(4912))));
  /* a820c: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* a8210: ldr x8, [x21, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 21) + INT64_C(8))));
  /* a8214: sub x9, x8, #0xfc0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4032)));
  /* a8218: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* a821c: b.hi #0xa8240 */
  if (ARC_COND(c, 8)) goto L_a8240;
  /* a8220: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* a8224: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* a8228: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(688684));
  fn1_1428a8(c);
  /* a822c: cbz x0, #0xa82a0 */
  if ((ARC_X_R(c, 0)) == 0) goto L_a82a0;
  /* a8230: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* a8234: stp x21, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 21));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* a8238: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* a823c: str x0, [x20, #0x1330] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(4912)), ARC_X_R(c, 0));
L_a8240:;
  /* a8240: add x9, x8, #0x30 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(48)));
  /* a8244: add x0, x21, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) + ARC_X_R(c, 8)));
  /* a8248: adrp x8, #0x149000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1347584)));
  /* a824c: add x8, x8, #0xb10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2832)));
  /* a8250: str x9, [x21, #8] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(8)), ARC_X_R(c, 9));
  /* a8254: mov w10, #0x540 */
  ARC_W_W(c, 10, UINT64_C(1344));
  /* a8258: str x8, [x0, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* a825c: ldurh w9, [x0, #9] */
  ARC_W_W(c, 9, arc_ld16((ARC_X_R(c, 0) + INT64_C(9))));
  /* a8260: mov w8, #0x15 */
  ARC_W_W(c, 8, UINT64_C(21));
  /* a8264: mov w11, #0x28 */
  ARC_W_W(c, 11, UINT64_C(40));
  /* a8268: strb w8, [x0, #8] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 8));
  /* a826c: adrp x8, #0x50000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(327680)));
  /* a8270: add x8, x8, #0xd25 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3365)));
  /* a8274: and w9, w9, #0xf000 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) & UINT64_C(61440)));
  /* a8278: str x8, [x0, #0x10] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(16)), ARC_X_R(c, 8));
  /* a827c: orr w8, w9, w10 */
  ARC_W_W(c, 8, (ARC_W_R(c, 9) | ARC_W_R(c, 10)));
  /* a8280: ldr x9, [x19] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 19)));
  /* a8284: sturh w8, [x0, #9] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(9)), ARC_W_R(c, 8));
  /* a8288: stp x11, x9, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    arc_st64(_pa, ARC_X_R(c, 11));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* a828c: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* a8290: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* a8294: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* a8298: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* a829c: ret  */
  return;
L_a82a0:;
  /* a82a0: bl #0x142488 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(688804));
  fn1_142488(c);
}

void fn1_adf00(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038640384));
  /* adf00: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* adf04: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* adf08: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* adf0c: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* adf10: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* adf14: ldr x21, [x0, #0x1330] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 0) + INT64_C(4912))));
  /* adf18: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* adf1c: ldr x8, [x21, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 21) + INT64_C(8))));
  /* adf20: sub x9, x8, #0xfd0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4048)));
  /* adf24: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* adf28: b.hi #0xadf4c */
  if (ARC_COND(c, 8)) goto L_adf4c;
  /* adf2c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* adf30: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* adf34: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(712504));
  fn1_1428a8(c);
  /* adf38: cbz x0, #0xadf9c */
  if ((ARC_X_R(c, 0)) == 0) goto L_adf9c;
  /* adf3c: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* adf40: stp x21, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 21));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* adf44: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* adf48: str x0, [x20, #0x1330] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(4912)), ARC_X_R(c, 0));
L_adf4c:;
  /* adf4c: add x9, x8, #0x20 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(32)));
  /* adf50: add x0, x21, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) + ARC_X_R(c, 8)));
  /* adf54: adrp x8, #0x14b000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1355776)));
  /* adf58: add x8, x8, #0x518 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1304)));
  /* adf5c: str x9, [x21, #8] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(8)), ARC_X_R(c, 9));
  /* adf60: mov w9, #0x48 */
  ARC_W_W(c, 9, UINT64_C(72));
  /* adf64: str x8, [x0, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* adf68: ldurh w8, [x0, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 0) + INT64_C(9))));
  /* adf6c: mov w10, #0x540 */
  ARC_W_W(c, 10, UINT64_C(1344));
  /* adf70: strb w9, [x0, #8] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 9));
  /* adf74: ldr x9, [x19] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 19)));
  /* adf78: and w8, w8, #0xf000 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(61440)));
  /* adf7c: orr w8, w8, w10 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | ARC_W_R(c, 10)));
  /* adf80: sturh w8, [x0, #9] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(9)), ARC_W_R(c, 8));
  /* adf84: str x9, [x0, #0x10] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(16)), ARC_X_R(c, 9));
  /* adf88: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* adf8c: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* adf90: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* adf94: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* adf98: ret  */
  return;
L_adf9c:;
  /* adf9c: bl #0x142488 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(712608));
  fn1_142488(c);
}

void fn1_b3640(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038662720));
  /* b3640: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* b3644: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b3648: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* b364c: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* b3650: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* b3654: ldr x21, [x0, #0x10] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* b3658: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* b365c: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* b3660: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* b3664: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* b3668: ldr x8, [x8, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* b366c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(734832));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* b3670: ldurh w8, [x21, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 21) + INT64_C(9))));
  /* b3674: and w8, w8, #0xc0 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(192)));
  /* b3678: cmp w8, #0x40 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(64));
  /* b367c: b.eq #0xb3694 */
  if (ARC_COND(c, 0)) goto L_b3694;
  /* b3680: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* b3684: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* b3688: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* b368c: ldr x8, [x8, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* b3690: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(734868));
  arc_dispatch(c, ARC_X_R(c, 8));
L_b3694:;
  /* b3694: ldr x0, [x19, #0x18] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(24))));
  /* b3698: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* b369c: ldr x16, [x8, #0x28] */
  ARC_X_W(c, 16, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* b36a0: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* b36a4: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* b36a8: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* b36ac: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b36b0: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* b36b4: br x16 */
  arc_dispatch(c, ARC_X_R(c, 16)); return;
}

void fn1_b7304(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038678276));
  /* b7304: bti c */
  /* bti: no architectural effect here */
  /* b7308: mov w1, #0x10 */
  ARC_W_W(c, 1, UINT64_C(16));
  /* b730c: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_b9ce4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038688996));
  /* b9ce4: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* b9ce8: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b9cec: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* b9cf0: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* b9cf4: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* b9cf8: ldr x21, [x0, #0x1330] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 0) + INT64_C(4912))));
  /* b9cfc: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* b9d00: ldr x8, [x21, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 21) + INT64_C(8))));
  /* b9d04: sub x9, x8, #0xfd0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4048)));
  /* b9d08: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* b9d0c: b.hi #0xb9d30 */
  if (ARC_COND(c, 8)) goto L_b9d30;
  /* b9d10: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* b9d14: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* b9d18: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(761116));
  fn1_1428a8(c);
  /* b9d1c: cbz x0, #0xb9d80 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b9d80;
  /* b9d20: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* b9d24: stp x21, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 21));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* b9d28: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* b9d2c: str x0, [x20, #0x1330] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(4912)), ARC_X_R(c, 0));
L_b9d30:;
  /* b9d30: add x9, x8, #0x20 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(32)));
  /* b9d34: add x0, x21, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) + ARC_X_R(c, 8)));
  /* b9d38: adrp x8, #0x14c000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1359872)));
  /* b9d3c: add x8, x8, #0x3a0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(928)));
  /* b9d40: str x9, [x21, #8] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(8)), ARC_X_R(c, 9));
  /* b9d44: mov w9, #0x1f */
  ARC_W_W(c, 9, UINT64_C(31));
  /* b9d48: str x8, [x0, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* b9d4c: ldurh w8, [x0, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 0) + INT64_C(9))));
  /* b9d50: mov w10, #0x540 */
  ARC_W_W(c, 10, UINT64_C(1344));
  /* b9d54: strb w9, [x0, #8] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 9));
  /* b9d58: ldr x9, [x19] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 19)));
  /* b9d5c: and w8, w8, #0xf000 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(61440)));
  /* b9d60: orr w8, w8, w10 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | ARC_W_R(c, 10)));
  /* b9d64: sturh w8, [x0, #9] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(9)), ARC_W_R(c, 8));
  /* b9d68: str x9, [x0, #0x10] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(16)), ARC_X_R(c, 9));
  /* b9d6c: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* b9d70: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* b9d74: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b9d78: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* b9d7c: ret  */
  return;
L_b9d80:;
  /* b9d80: bl #0x142488 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(761220));
  fn1_142488(c);
}

void fn1_bd30c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038702860));
  /* bd30c: bti c */
  /* bti: no architectural effect here */
  /* bd310: ldr x0, [x0, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* bd314: ldurh w8, [x0, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 0) + INT64_C(9))));
  /* bd318: sxtb w9, w8 */
  ARC_W_W(c, 9, ((int32_t)(int8_t)(ARC_W_R(c, 8))));
  /* bd31c: cmn w9, #0x40 */
  (void)arc_add32(c, ARC_W_R(c, 9), UINT64_C(64), 0);
  /* bd320: b.ge #0xbd330 */
  if (ARC_COND(c, 10)) goto L_bd330;
  /* bd324: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* bd328: ldr x16, [x8] */
  ARC_X_W(c, 16, arc_ld64(ARC_X_R(c, 8)));
  /* bd32c: br x16 */
  arc_dispatch(c, ARC_X_R(c, 16)); return;
L_bd330:;
  /* bd330: tst w8, #0xc0 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(192)));
  /* bd334: cset w0, eq */
  ARC_W_W(c, 0, (ARC_COND(c, 0) ? 1 : 0));
  /* bd338: ret  */
  return;
}

void fn1_c5fc4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038738884));
L_c5fc4:;
  /* c5fc4: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* c5fc8: stp d15, d14, [sp, #-0xa0]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-160));
    (c)->sp = (c)->sp + INT64_C(-160);
    arc_st64(_pa, (c)->q[15].u64[0]);
    arc_st64((_pa + 8), (c)->q[14].u64[0]);
  }
  /* c5fcc: stp d13, d12, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, (c)->q[13].u64[0]);
    arc_st64((_pa + 8), (c)->q[12].u64[0]);
  }
  /* c5fd0: stp d11, d10, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, (c)->q[11].u64[0]);
    arc_st64((_pa + 8), (c)->q[10].u64[0]);
  }
  /* c5fd4: stp d9, d8, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, (c)->q[9].u64[0]);
    arc_st64((_pa + 8), (c)->q[8].u64[0]);
  }
  /* c5fd8: stp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* c5fdc: stp x28, x27, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* c5fe0: stp x26, x25, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* c5fe4: stp x24, x23, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* c5fe8: stp x22, x21, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* c5fec: stp x20, x19, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* c5ff0: add x29, sp, #0x40 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(64)));
  /* c5ff4: sub sp, sp, #0x1f0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(496)));
  /* c5ff8: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* c5ffc: adrp x9, #0x52000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(335872)));
  /* c6000: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* c6004: ldr q0, [x8, #0xa50] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(2640))), arc_ld64((ARC_X_R(c, 8) + INT64_C(2640)) + 8));
  /* c6008: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* c600c: ldr q11, [x9, #0xba0] */
  arc_q_w(c, 11, arc_ld64((ARC_X_R(c, 9) + INT64_C(2976))), arc_ld64((ARC_X_R(c, 9) + INT64_C(2976)) + 8));
  /* c6010: ldr q12, [x8, #0xcf0] */
  arc_q_w(c, 12, arc_ld64((ARC_X_R(c, 8) + INT64_C(3312))), arc_ld64((ARC_X_R(c, 8) + INT64_C(3312)) + 8));
  /* c6014: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* c6018: adrp x9, #0x52000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(335872)));
  /* c601c: ldr q13, [x8, #0xb00] */
  arc_q_w(c, 13, arc_ld64((ARC_X_R(c, 8) + INT64_C(2816))), arc_ld64((ARC_X_R(c, 8) + INT64_C(2816)) + 8));
  /* c6020: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* c6024: stur q0, [x29, #-0x60] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-96)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 29) + INT64_C(-96)) + 8, (c)->q[0].u64[1]);
  /* c6028: ldr q15, [x8, #0x9d0] */
  arc_q_w(c, 15, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))), arc_ld64((ARC_X_R(c, 8) + INT64_C(2512)) + 8));
  /* c602c: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* c6030: ldr q14, [x9, #0xaa0] */
  arc_q_w(c, 14, arc_ld64((ARC_X_R(c, 9) + INT64_C(2720))), arc_ld64((ARC_X_R(c, 9) + INT64_C(2720)) + 8));
  /* c6034: ldr q0, [x8, #0xb90] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(2960))), arc_ld64((ARC_X_R(c, 8) + INT64_C(2960)) + 8));
  /* c6038: adrp x9, #0x52000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(335872)));
  /* c603c: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* c6040: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* c6044: adrp x6, #0x52000 */
  ARC_X_W(c, 6, (arc_image_bases[1] + UINT64_C(335872)));
  /* c6048: adrp x27, #0x52000 */
  ARC_X_W(c, 27, (arc_image_bases[1] + UINT64_C(335872)));
  /* c604c: stur q0, [x29, #-0x70] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-112)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 29) + INT64_C(-112)) + 8, (c)->q[0].u64[1]);
  /* c6050: ldr q0, [x9, #0x990] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 9) + INT64_C(2448))), arc_ld64((ARC_X_R(c, 9) + INT64_C(2448)) + 8));
  /* c6054: adrp x9, #0x52000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(335872)));
  /* c6058: adrp x21, #0x52000 */
  ARC_X_W(c, 21, (arc_image_bases[1] + UINT64_C(335872)));
  /* c605c: mov x4, #-0x80 */
  ARC_X_W(c, 4, UINT64_C(18446744073709551488));
  /* c6060: mov w5, #1 */
  ARC_W_W(c, 5, UINT64_C(1));
  /* c6064: stur q0, [x29, #-0x80] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-128)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 29) + INT64_C(-128)) + 8, (c)->q[0].u64[1]);
  /* c6068: ldr q0, [x8, #0xb50] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(2896))), arc_ld64((ARC_X_R(c, 8) + INT64_C(2896)) + 8));
  /* c606c: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* c6070: mov w22, #4 */
  ARC_W_W(c, 22, UINT64_C(4));
  /* c6074: mov w28, #8 */
  ARC_W_W(c, 28, UINT64_C(8));
  /* c6078: mov w30, #0x10 */
  ARC_W_W(c, 30, UINT64_C(16));
  /* c607c: stur q0, [x29, #-0x90] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-144)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 29) + INT64_C(-144)) + 8, (c)->q[0].u64[1]);
  /* c6080: ldr q0, [x8, #0xd10] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(3344))), arc_ld64((ARC_X_R(c, 8) + INT64_C(3344)) + 8));
  /* c6084: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* c6088: mov x26, #-1 */
  ARC_X_W(c, 26, UINT64_C(18446744073709551615));
  /* c608c: str w3, [sp, #0x5c] */
  arc_st32(((c)->sp + INT64_C(92)), ARC_W_R(c, 3));
  /* c6090: stur q0, [x29, #-0xa0] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-160)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 29) + INT64_C(-160)) + 8, (c)->q[0].u64[1]);
  /* c6094: ldr q0, [x9, #0xd60] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 9) + INT64_C(3424))), arc_ld64((ARC_X_R(c, 9) + INT64_C(3424)) + 8));
  /* c6098: adrp x9, #0x52000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(335872)));
  /* c609c: stp q14, q13, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, (c)->q[14].u64[0]);
    arc_st64(_pa + 8, (c)->q[14].u64[1]);
    arc_st64((_pa + 16), (c)->q[13].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[13].u64[1]);
  }
  /* c60a0: stur q0, [x29, #-0xb0] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-176)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 29) + INT64_C(-176)) + 8, (c)->q[0].u64[1]);
  /* c60a4: ldr q0, [x8, #0x9e0] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(2528))), arc_ld64((ARC_X_R(c, 8) + INT64_C(2528)) + 8));
  /* c60a8: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* c60ac: stp q12, q11, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, (c)->q[12].u64[0]);
    arc_st64(_pa + 8, (c)->q[12].u64[1]);
    arc_st64((_pa + 16), (c)->q[11].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[11].u64[1]);
  }
  /* c60b0: stur q0, [x29, #-0xc0] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-192)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 29) + INT64_C(-192)) + 8, (c)->q[0].u64[1]);
  /* c60b4: ldr q0, [x8, #0x9f0] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(2544))), arc_ld64((ARC_X_R(c, 8) + INT64_C(2544)) + 8));
  /* c60b8: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* c60bc: str q15, [sp] */
  arc_st64((c)->sp, (c)->q[15].u64[0]);
  arc_st64((c)->sp + 8, (c)->q[15].u64[1]);
  /* c60c0: stur q0, [x29, #-0xd0] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-208)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 29) + INT64_C(-208)) + 8, (c)->q[0].u64[1]);
  /* c60c4: ldr q0, [x9, #0x970] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 9) + INT64_C(2416))), arc_ld64((ARC_X_R(c, 9) + INT64_C(2416)) + 8));
  /* c60c8: adrp x9, #0x52000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(335872)));
  /* c60cc: stur q0, [x29, #-0xe0] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-224)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 29) + INT64_C(-224)) + 8, (c)->q[0].u64[1]);
  /* c60d0: ldr q0, [x8, #0xb40] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(2880))), arc_ld64((ARC_X_R(c, 8) + INT64_C(2880)) + 8));
  /* c60d4: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* c60d8: stur q0, [x29, #-0xf0] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-240)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 29) + INT64_C(-240)) + 8, (c)->q[0].u64[1]);
  /* c60dc: ldr q0, [x8, #0xbc0] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(3008))), arc_ld64((ARC_X_R(c, 8) + INT64_C(3008)) + 8));
  /* c60e0: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* c60e4: stur q0, [x29, #-0x100] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-256)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 29) + INT64_C(-256)) + 8, (c)->q[0].u64[1]);
  /* c60e8: ldr q0, [x9, #0xd30] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 9) + INT64_C(3376))), arc_ld64((ARC_X_R(c, 9) + INT64_C(3376)) + 8));
  /* c60ec: adrp x9, #0x52000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(335872)));
  /* c60f0: str q0, [sp, #0x120] */
  arc_st64(((c)->sp + INT64_C(288)), (c)->q[0].u64[0]);
  arc_st64(((c)->sp + INT64_C(288)) + 8, (c)->q[0].u64[1]);
  /* c60f4: ldr q0, [x8, #0xc30] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(3120))), arc_ld64((ARC_X_R(c, 8) + INT64_C(3120)) + 8));
  /* c60f8: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* c60fc: str q0, [sp, #0x110] */
  arc_st64(((c)->sp + INT64_C(272)), (c)->q[0].u64[0]);
  arc_st64(((c)->sp + INT64_C(272)) + 8, (c)->q[0].u64[1]);
  /* c6100: ldr q0, [x8, #0x980] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(2432))), arc_ld64((ARC_X_R(c, 8) + INT64_C(2432)) + 8));
  /* c6104: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* c6108: str q0, [sp, #0x100] */
  arc_st64(((c)->sp + INT64_C(256)), (c)->q[0].u64[0]);
  arc_st64(((c)->sp + INT64_C(256)) + 8, (c)->q[0].u64[1]);
  /* c610c: ldr q0, [x9, #0xb10] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 9) + INT64_C(2832))), arc_ld64((ARC_X_R(c, 9) + INT64_C(2832)) + 8));
  /* c6110: adrp x9, #0x52000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(335872)));
  /* c6114: str q0, [sp, #0xf0] */
  arc_st64(((c)->sp + INT64_C(240)), (c)->q[0].u64[0]);
  arc_st64(((c)->sp + INT64_C(240)) + 8, (c)->q[0].u64[1]);
  /* c6118: ldr q0, [x8, #0xd70] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(3440))), arc_ld64((ARC_X_R(c, 8) + INT64_C(3440)) + 8));
  /* c611c: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* c6120: str q0, [sp, #0xe0] */
  arc_st64(((c)->sp + INT64_C(224)), (c)->q[0].u64[0]);
  arc_st64(((c)->sp + INT64_C(224)) + 8, (c)->q[0].u64[1]);
  /* c6124: ldr q0, [x8, #0x9a0] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(2464))), arc_ld64((ARC_X_R(c, 8) + INT64_C(2464)) + 8));
  /* c6128: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* c612c: str q0, [sp, #0xd0] */
  arc_st64(((c)->sp + INT64_C(208)), (c)->q[0].u64[0]);
  arc_st64(((c)->sp + INT64_C(208)) + 8, (c)->q[0].u64[1]);
  /* c6130: ldr q0, [x9, #0xa60] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 9) + INT64_C(2656))), arc_ld64((ARC_X_R(c, 9) + INT64_C(2656)) + 8));
  /* c6134: adrp x9, #0x52000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(335872)));
  /* c6138: str q0, [sp, #0xc0] */
  arc_st64(((c)->sp + INT64_C(192)), (c)->q[0].u64[0]);
  arc_st64(((c)->sp + INT64_C(192)) + 8, (c)->q[0].u64[1]);
  /* c613c: ldr q0, [x8, #0xbf0] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(3056))), arc_ld64((ARC_X_R(c, 8) + INT64_C(3056)) + 8));
  /* c6140: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* c6144: str q0, [sp, #0xb0] */
  arc_st64(((c)->sp + INT64_C(176)), (c)->q[0].u64[0]);
  arc_st64(((c)->sp + INT64_C(176)) + 8, (c)->q[0].u64[1]);
  /* c6148: ldr q0, [x8, #0xcb0] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(3248))), arc_ld64((ARC_X_R(c, 8) + INT64_C(3248)) + 8));
  /* c614c: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* c6150: str q0, [sp, #0xa0] */
  arc_st64(((c)->sp + INT64_C(160)), (c)->q[0].u64[0]);
  arc_st64(((c)->sp + INT64_C(160)) + 8, (c)->q[0].u64[1]);
  /* c6154: ldr q0, [x9, #0xbb0] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 9) + INT64_C(2992))), arc_ld64((ARC_X_R(c, 9) + INT64_C(2992)) + 8));
  /* c6158: adrp x9, #0x52000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(335872)));
  /* c615c: str q0, [sp, #0x90] */
  arc_st64(((c)->sp + INT64_C(144)), (c)->q[0].u64[0]);
  arc_st64(((c)->sp + INT64_C(144)) + 8, (c)->q[0].u64[1]);
  /* c6160: ldr q0, [x8, #0xb60] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(2912))), arc_ld64((ARC_X_R(c, 8) + INT64_C(2912)) + 8));
  /* c6164: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* c6168: str q0, [sp, #0x80] */
  arc_st64(((c)->sp + INT64_C(128)), (c)->q[0].u64[0]);
  arc_st64(((c)->sp + INT64_C(128)) + 8, (c)->q[0].u64[1]);
  /* c616c: ldr q0, [x8, #0x9b0] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(2480))), arc_ld64((ARC_X_R(c, 8) + INT64_C(2480)) + 8));
  /* c6170: str q0, [sp, #0x70] */
  arc_st64(((c)->sp + INT64_C(112)), (c)->q[0].u64[0]);
  arc_st64(((c)->sp + INT64_C(112)) + 8, (c)->q[0].u64[1]);
  /* c6174: ldr q0, [x9, #0xc40] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 9) + INT64_C(3136))), arc_ld64((ARC_X_R(c, 9) + INT64_C(3136)) + 8));
  /* c6178: str q0, [sp, #0x60] */
  arc_st64(((c)->sp + INT64_C(96)), (c)->q[0].u64[0]);
  arc_st64(((c)->sp + INT64_C(96)) + 8, (c)->q[0].u64[1]);
L_c617c:;
  /* c617c: mov x23, x19 */
  ARC_X_W(c, 23, ARC_X_R(c, 19));
L_c6180:;
  /* c6180: sub x8, x20, x23 */
  ARC_X_W(c, 8, (ARC_X_R(c, 20) - ARC_X_R(c, 23)));
  /* c6184: mov x19, x23 */
  ARC_X_W(c, 19, ARC_X_R(c, 23));
  /* c6188: asr x8, x8, #1 */
  ARC_X_W(c, 8, ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63))));
  /* c618c: subs x9, x8, #2 */
  ARC_X_W(c, 9, arc_sub64(c, ARC_X_R(c, 8), UINT64_C(2)));
  /* c6190: b.gt #0xc61a4 */
  if (ARC_COND(c, 12)) goto L_c61a4;
  /* c6194: b.lo #0xc7328 */
  if (ARC_COND(c, 3)) goto L_c7328;
  /* c6198: cmp x8, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(2));
  /* c619c: b.ne #0xc61bc */
  if (ARC_COND(c, 1)) goto L_c61bc;
  /* c61a0: b #0xc7240 */
  goto L_c7240;
L_c61a4:;
  /* c61a4: cmp x8, #3 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(3));
  /* c61a8: b.eq #0xc725c */
  if (ARC_COND(c, 0)) goto L_c725c;
  /* c61ac: cmp x8, #4 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(4));
  /* c61b0: b.eq #0xc72ac */
  if (ARC_COND(c, 0)) goto L_c72ac;
  /* c61b4: cmp x8, #5 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(5));
  /* c61b8: b.eq #0xc716c */
  if (ARC_COND(c, 0)) goto L_c716c;
L_c61bc:;
  /* c61bc: cmp x8, #0x17 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(23));
  /* c61c0: b.le #0xc735c */
  if (ARC_COND(c, 13)) goto L_c735c;
  /* c61c4: cbz x2, #0xc73dc */
  if ((ARC_X_R(c, 2)) == 0) goto L_c73dc;
  /* c61c8: and x10, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* c61cc: ldurh w9, [x20, #-2] */
  ARC_W_W(c, 9, arc_ld16((ARC_X_R(c, 20) + INT64_C(-2))));
  /* c61d0: cmp x8, #0x81 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(129));
  /* c61d4: add x8, x19, x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 10)));
  /* c61d8: b.lo #0xc6320 */
  if (ARC_COND(c, 3)) goto L_c6320;
  /* c61dc: ldrh w10, [x8] */
  ARC_W_W(c, 10, arc_ld16(ARC_X_R(c, 8)));
  /* c61e0: cmp w10, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 10), ARC_W_R(c, 9));
  /* c61e4: csel w11, w10, w9, hi */
  ARC_W_W(c, 11, (ARC_COND(c, 8) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 9)));
  /* c61e8: csel w9, w10, w9, lo */
  ARC_W_W(c, 9, (ARC_COND(c, 3) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 9)));
  /* c61ec: sturh w11, [x20, #-2] */
  arc_st16((ARC_X_R(c, 20) + INT64_C(-2)), ARC_W_R(c, 11));
  /* c61f0: strh w9, [x8] */
  arc_st16(ARC_X_R(c, 8), ARC_W_R(c, 9));
  /* c61f4: ldurh w9, [x20, #-2] */
  ARC_W_W(c, 9, arc_ld16((ARC_X_R(c, 20) + INT64_C(-2))));
  /* c61f8: ldrh w10, [x19] */
  ARC_W_W(c, 10, arc_ld16(ARC_X_R(c, 19)));
  /* c61fc: cmp w9, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 9), ARC_W_R(c, 10));
  /* c6200: csel w11, w9, w10, hi */
  ARC_W_W(c, 11, (ARC_COND(c, 8) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 10)));
  /* c6204: csel w9, w9, w10, lo */
  ARC_W_W(c, 9, (ARC_COND(c, 3) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 10)));
  /* c6208: sturh w11, [x20, #-2] */
  arc_st16((ARC_X_R(c, 20) + INT64_C(-2)), ARC_W_R(c, 11));
  /* c620c: ldrh w11, [x8] */
  ARC_W_W(c, 11, arc_ld16(ARC_X_R(c, 8)));
  /* c6210: ldrh w10, [x19] */
  ARC_W_W(c, 10, arc_ld16(ARC_X_R(c, 19)));
  /* c6214: cmp w9, w11 */
  (void)arc_sub32(c, ARC_W_R(c, 9), ARC_W_R(c, 11));
  /* c6218: csel w10, w10, w11, lo */
  ARC_W_W(c, 10, (ARC_COND(c, 3) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 11)));
  /* c621c: strh w10, [x19] */
  arc_st16(ARC_X_R(c, 19), ARC_W_R(c, 10));
  /* c6220: ldrh w10, [x8] */
  ARC_W_W(c, 10, arc_ld16(ARC_X_R(c, 8)));
  /* c6224: csel w9, w10, w9, lo */
  ARC_W_W(c, 9, (ARC_COND(c, 3) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 9)));
  /* c6228: strh w9, [x8] */
  arc_st16(ARC_X_R(c, 8), ARC_W_R(c, 9));
  /* c622c: ldurh w9, [x8, #-2] */
  ARC_W_W(c, 9, arc_ld16((ARC_X_R(c, 8) + INT64_C(-2))));
  /* c6230: ldurh w10, [x20, #-4] */
  ARC_W_W(c, 10, arc_ld16((ARC_X_R(c, 20) + INT64_C(-4))));
  /* c6234: cmp w9, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 9), ARC_W_R(c, 10));
  /* c6238: csel w11, w9, w10, hi */
  ARC_W_W(c, 11, (ARC_COND(c, 8) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 10)));
  /* c623c: csel w9, w9, w10, lo */
  ARC_W_W(c, 9, (ARC_COND(c, 3) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 10)));
  /* c6240: sturh w11, [x20, #-4] */
  arc_st16((ARC_X_R(c, 20) + INT64_C(-4)), ARC_W_R(c, 11));
  /* c6244: sturh w9, [x8, #-2] */
  arc_st16((ARC_X_R(c, 8) + INT64_C(-2)), ARC_W_R(c, 9));
  /* c6248: ldurh w9, [x20, #-4] */
  ARC_W_W(c, 9, arc_ld16((ARC_X_R(c, 20) + INT64_C(-4))));
  /* c624c: ldrh w10, [x19, #2] */
  ARC_W_W(c, 10, arc_ld16((ARC_X_R(c, 19) + INT64_C(2))));
  /* c6250: cmp w9, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 9), ARC_W_R(c, 10));
  /* c6254: csel w11, w9, w10, hi */
  ARC_W_W(c, 11, (ARC_COND(c, 8) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 10)));
  /* c6258: csel w9, w9, w10, lo */
  ARC_W_W(c, 9, (ARC_COND(c, 3) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 10)));
  /* c625c: sturh w11, [x20, #-4] */
  arc_st16((ARC_X_R(c, 20) + INT64_C(-4)), ARC_W_R(c, 11));
  /* c6260: ldurh w11, [x8, #-2] */
  ARC_W_W(c, 11, arc_ld16((ARC_X_R(c, 8) + INT64_C(-2))));
  /* c6264: ldrh w10, [x19, #2] */
  ARC_W_W(c, 10, arc_ld16((ARC_X_R(c, 19) + INT64_C(2))));
  /* c6268: cmp w9, w11 */
  (void)arc_sub32(c, ARC_W_R(c, 9), ARC_W_R(c, 11));
  /* c626c: csel w10, w10, w11, lo */
  ARC_W_W(c, 10, (ARC_COND(c, 3) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 11)));
  /* c6270: strh w10, [x19, #2] */
  arc_st16((ARC_X_R(c, 19) + INT64_C(2)), ARC_W_R(c, 10));
  /* c6274: ldurh w10, [x8, #-2] */
  ARC_W_W(c, 10, arc_ld16((ARC_X_R(c, 8) + INT64_C(-2))));
  /* c6278: csel w9, w10, w9, lo */
  ARC_W_W(c, 9, (ARC_COND(c, 3) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 9)));
  /* c627c: sturh w9, [x8, #-2] */
  arc_st16((ARC_X_R(c, 8) + INT64_C(-2)), ARC_W_R(c, 9));
  /* c6280: ldrh w9, [x8, #2] */
  ARC_W_W(c, 9, arc_ld16((ARC_X_R(c, 8) + INT64_C(2))));
  /* c6284: ldurh w10, [x20, #-6] */
  ARC_W_W(c, 10, arc_ld16((ARC_X_R(c, 20) + INT64_C(-6))));
  /* c6288: cmp w9, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 9), ARC_W_R(c, 10));
  /* c628c: csel w11, w9, w10, hi */
  ARC_W_W(c, 11, (ARC_COND(c, 8) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 10)));
  /* c6290: csel w9, w9, w10, lo */
  ARC_W_W(c, 9, (ARC_COND(c, 3) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 10)));
  /* c6294: sturh w11, [x20, #-6] */
  arc_st16((ARC_X_R(c, 20) + INT64_C(-6)), ARC_W_R(c, 11));
  /* c6298: strh w9, [x8, #2] */
  arc_st16((ARC_X_R(c, 8) + INT64_C(2)), ARC_W_R(c, 9));
  /* c629c: ldurh w9, [x20, #-6] */
  ARC_W_W(c, 9, arc_ld16((ARC_X_R(c, 20) + INT64_C(-6))));
  /* c62a0: ldrh w10, [x19, #4] */
  ARC_W_W(c, 10, arc_ld16((ARC_X_R(c, 19) + INT64_C(4))));
  /* c62a4: cmp w9, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 9), ARC_W_R(c, 10));
  /* c62a8: csel w11, w9, w10, hi */
  ARC_W_W(c, 11, (ARC_COND(c, 8) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 10)));
  /* c62ac: csel w9, w9, w10, lo */
  ARC_W_W(c, 9, (ARC_COND(c, 3) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 10)));
  /* c62b0: sturh w11, [x20, #-6] */
  arc_st16((ARC_X_R(c, 20) + INT64_C(-6)), ARC_W_R(c, 11));
  /* c62b4: ldrh w11, [x8, #2] */
  ARC_W_W(c, 11, arc_ld16((ARC_X_R(c, 8) + INT64_C(2))));
  /* c62b8: ldrh w10, [x19, #4] */
  ARC_W_W(c, 10, arc_ld16((ARC_X_R(c, 19) + INT64_C(4))));
  /* c62bc: cmp w9, w11 */
  (void)arc_sub32(c, ARC_W_R(c, 9), ARC_W_R(c, 11));
  /* c62c0: csel w10, w10, w11, lo */
  ARC_W_W(c, 10, (ARC_COND(c, 3) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 11)));
  /* c62c4: strh w10, [x19, #4] */
  arc_st16((ARC_X_R(c, 19) + INT64_C(4)), ARC_W_R(c, 10));
  /* c62c8: ldrh w10, [x8, #2] */
  ARC_W_W(c, 10, arc_ld16((ARC_X_R(c, 8) + INT64_C(2))));
  /* c62cc: ldrh w11, [x8] */
  ARC_W_W(c, 11, arc_ld16(ARC_X_R(c, 8)));
  /* c62d0: csel w9, w10, w9, lo */
  ARC_W_W(c, 9, (ARC_COND(c, 3) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 9)));
  /* c62d4: ldurh w10, [x8, #-2] */
  ARC_W_W(c, 10, arc_ld16((ARC_X_R(c, 8) + INT64_C(-2))));
  /* c62d8: and w9, w9, #0xffff */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) & UINT64_C(65535)));
  /* c62dc: cmp w11, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 11), ARC_W_R(c, 9));
  /* c62e0: csel w12, w11, w9, hi */
  ARC_W_W(c, 12, (ARC_COND(c, 8) ? (ARC_W_R(c, 11)) : ARC_W_R(c, 9)));
  /* c62e4: csel w9, w11, w9, lo */
  ARC_W_W(c, 9, (ARC_COND(c, 3) ? (ARC_W_R(c, 11)) : ARC_W_R(c, 9)));
  /* c62e8: cmp w12, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 12), ARC_W_R(c, 10));
  /* c62ec: csel w11, w12, w10, lo */
  ARC_W_W(c, 11, (ARC_COND(c, 3) ? (ARC_W_R(c, 12)) : ARC_W_R(c, 10)));
  /* c62f0: csel w12, w12, w10, hi */
  ARC_W_W(c, 12, (ARC_COND(c, 8) ? (ARC_W_R(c, 12)) : ARC_W_R(c, 10)));
  /* c62f4: cmp w10, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 10), ARC_W_R(c, 9));
  /* c62f8: csel w10, w10, w9, lo */
  ARC_W_W(c, 10, (ARC_COND(c, 3) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 9)));
  /* c62fc: csel w9, w9, w11, lo */
  ARC_W_W(c, 9, (ARC_COND(c, 3) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 11)));
  /* c6300: strh w12, [x8, #2] */
  arc_st16((ARC_X_R(c, 8) + INT64_C(2)), ARC_W_R(c, 12));
  /* c6304: sturh w10, [x8, #-2] */
  arc_st16((ARC_X_R(c, 8) + INT64_C(-2)), ARC_W_R(c, 10));
  /* c6308: strh w9, [x8] */
  arc_st16(ARC_X_R(c, 8), ARC_W_R(c, 9));
  /* c630c: ldrh w10, [x19] */
  ARC_W_W(c, 10, arc_ld16(ARC_X_R(c, 19)));
  /* c6310: strh w9, [x19] */
  arc_st16(ARC_X_R(c, 19), ARC_W_R(c, 9));
  /* c6314: strh w10, [x8] */
  arc_st16(ARC_X_R(c, 8), ARC_W_R(c, 10));
  /* c6318: ldrh w8, [x19] */
  ARC_W_W(c, 8, arc_ld16(ARC_X_R(c, 19)));
  /* c631c: b #0xc6370 */
  goto L_c6370;
L_c6320:;
  /* c6320: ldrh w10, [x19] */
  ARC_W_W(c, 10, arc_ld16(ARC_X_R(c, 19)));
  /* c6324: cmp w10, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 10), ARC_W_R(c, 9));
  /* c6328: csel w11, w10, w9, hi */
  ARC_W_W(c, 11, (ARC_COND(c, 8) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 9)));
  /* c632c: csel w9, w10, w9, lo */
  ARC_W_W(c, 9, (ARC_COND(c, 3) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 9)));
  /* c6330: sturh w11, [x20, #-2] */
  arc_st16((ARC_X_R(c, 20) + INT64_C(-2)), ARC_W_R(c, 11));
  /* c6334: strh w9, [x19] */
  arc_st16(ARC_X_R(c, 19), ARC_W_R(c, 9));
  /* c6338: ldurh w9, [x20, #-2] */
  ARC_W_W(c, 9, arc_ld16((ARC_X_R(c, 20) + INT64_C(-2))));
  /* c633c: ldrh w10, [x8] */
  ARC_W_W(c, 10, arc_ld16(ARC_X_R(c, 8)));
  /* c6340: cmp w9, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 9), ARC_W_R(c, 10));
  /* c6344: csel w11, w9, w10, hi */
  ARC_W_W(c, 11, (ARC_COND(c, 8) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 10)));
  /* c6348: csel w9, w9, w10, lo */
  ARC_W_W(c, 9, (ARC_COND(c, 3) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 10)));
  /* c634c: sturh w11, [x20, #-2] */
  arc_st16((ARC_X_R(c, 20) + INT64_C(-2)), ARC_W_R(c, 11));
  /* c6350: ldrh w11, [x19] */
  ARC_W_W(c, 11, arc_ld16(ARC_X_R(c, 19)));
  /* c6354: ldrh w10, [x8] */
  ARC_W_W(c, 10, arc_ld16(ARC_X_R(c, 8)));
  /* c6358: cmp w9, w11 */
  (void)arc_sub32(c, ARC_W_R(c, 9), ARC_W_R(c, 11));
  /* c635c: csel w10, w10, w11, lo */
  ARC_W_W(c, 10, (ARC_COND(c, 3) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 11)));
  /* c6360: strh w10, [x8] */
  arc_st16(ARC_X_R(c, 8), ARC_W_R(c, 10));
  /* c6364: ldrh w8, [x19] */
  ARC_W_W(c, 8, arc_ld16(ARC_X_R(c, 19)));
  /* c6368: csel w8, w8, w9, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* c636c: strh w8, [x19] */
  arc_st16(ARC_X_R(c, 19), ARC_W_R(c, 8));
L_c6370:;
  /* c6370: ldr w9, [sp, #0x5c] */
  ARC_W_W(c, 9, arc_ld32(((c)->sp + INT64_C(92))));
  /* c6374: sub x2, x2, #1 */
  ARC_X_W(c, 2, (ARC_X_R(c, 2) - UINT64_C(1)));
  /* c6378: tbnz w9, #0, #0xc6388 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) != 0) goto L_c6388;
  /* c637c: ldurh w9, [x19, #-2] */
  ARC_W_W(c, 9, arc_ld16((ARC_X_R(c, 19) + INT64_C(-2))));
  /* c6380: cmp w9, w8, uxth */
  (void)arc_sub32(c, ARC_W_R(c, 9), ((uint64_t)(uint16_t)(ARC_W_R(c, 8))));
  /* c6384: b.hs #0xc6ec0 */
  if (ARC_COND(c, 2)) goto L_c6ec0;
L_c6388:;
  /* c6388: ldurh w9, [x20, #-2] */
  ARC_W_W(c, 9, arc_ld16((ARC_X_R(c, 20) + INT64_C(-2))));
  /* c638c: cmp w9, w8, uxth */
  (void)arc_sub32(c, ARC_W_R(c, 9), ((uint64_t)(uint16_t)(ARC_W_R(c, 8))));
  /* c6390: b.ls #0xc63a8 */
  if (ARC_COND(c, 9)) goto L_c63a8;
  /* c6394: mov x9, x19 */
  ARC_X_W(c, 9, ARC_X_R(c, 19));
L_c6398:;
  /* c6398: ldrh w10, [x9, #2]! */
  { const uint64_t _a = (ARC_X_R(c, 9) + INT64_C(2));
    ARC_X_W(c, 9, ARC_X_R(c, 9) + INT64_C(2));
    ARC_W_W(c, 10, arc_ld16(_a));
  }
  /* c639c: cmp w10, w8, uxth */
  (void)arc_sub32(c, ARC_W_R(c, 10), ((uint64_t)(uint16_t)(ARC_W_R(c, 8))));
  /* c63a0: b.ls #0xc6398 */
  if (ARC_COND(c, 9)) goto L_c6398;
  /* c63a4: b #0xc63c8 */
  goto L_c63c8;
L_c63a8:;
  /* c63a8: add x10, x19, #2 */
  ARC_X_W(c, 10, (ARC_X_R(c, 19) + UINT64_C(2)));
L_c63ac:;
  /* c63ac: mov x9, x10 */
  ARC_X_W(c, 9, ARC_X_R(c, 10));
  /* c63b0: cmp x10, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 20));
  /* c63b4: b.hs #0xc63c8 */
  if (ARC_COND(c, 2)) goto L_c63c8;
  /* c63b8: mov x10, x9 */
  ARC_X_W(c, 10, ARC_X_R(c, 9));
  /* c63bc: ldrh w11, [x10], #2 */
  { const uint64_t _a = ARC_X_R(c, 10);
    ARC_X_W(c, 10, ARC_X_R(c, 10) + INT64_C(2));
    ARC_W_W(c, 11, arc_ld16(_a));
  }
  /* c63c0: cmp w11, w8, uxth */
  (void)arc_sub32(c, ARC_W_R(c, 11), ((uint64_t)(uint16_t)(ARC_W_R(c, 8))));
  /* c63c4: b.ls #0xc63ac */
  if (ARC_COND(c, 9)) goto L_c63ac;
L_c63c8:;
  /* c63c8: cmp x9, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 20));
  /* c63cc: mov x10, x20 */
  ARC_X_W(c, 10, ARC_X_R(c, 20));
  /* c63d0: b.hs #0xc63e4 */
  if (ARC_COND(c, 2)) goto L_c63e4;
  /* c63d4: mov x10, x20 */
  ARC_X_W(c, 10, ARC_X_R(c, 20));
L_c63d8:;
  /* c63d8: ldrh w11, [x10, #-2]! */
  { const uint64_t _a = (ARC_X_R(c, 10) + INT64_C(-2));
    ARC_X_W(c, 10, ARC_X_R(c, 10) + INT64_C(-2));
    ARC_W_W(c, 11, arc_ld16(_a));
  }
  /* c63dc: cmp w11, w8, uxth */
  (void)arc_sub32(c, ARC_W_R(c, 11), ((uint64_t)(uint16_t)(ARC_W_R(c, 8))));
  /* c63e0: b.hi #0xc63d8 */
  if (ARC_COND(c, 8)) goto L_c63d8;
L_c63e4:;
  /* c63e4: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* c63e8: mov x11, x9 */
  ARC_X_W(c, 11, ARC_X_R(c, 9));
  /* c63ec: b.hs #0xc6404 */
  if (ARC_COND(c, 2)) goto L_c6404;
  /* c63f0: ldrh w12, [x10] */
  ARC_W_W(c, 12, arc_ld16(ARC_X_R(c, 10)));
  /* c63f4: ldrh w13, [x9] */
  ARC_W_W(c, 13, arc_ld16(ARC_X_R(c, 9)));
  /* c63f8: mov x11, x9 */
  ARC_X_W(c, 11, ARC_X_R(c, 9));
  /* c63fc: strh w12, [x11], #2 */
  { const uint64_t _a = ARC_X_R(c, 11);
    ARC_X_W(c, 11, ARC_X_R(c, 11) + INT64_C(2));
    arc_st16(_a, ARC_W_R(c, 12));
  }
  /* c6400: strh w13, [x10] */
  arc_st16(ARC_X_R(c, 10), ARC_W_R(c, 13));
L_c6404:;
  /* c6404: sub x12, x10, #2 */
  ARC_X_W(c, 12, (ARC_X_R(c, 10) - UINT64_C(2)));
  /* c6408: sub x13, x12, x11 */
  ARC_X_W(c, 13, (ARC_X_R(c, 12) - ARC_X_R(c, 11)));
  /* c640c: cmp x13, #0xfd */
  (void)arc_sub64(c, ARC_X_R(c, 13), UINT64_C(253));
  /* c6410: b.lt #0xc69ac */
  if (ARC_COND(c, 11)) goto L_c69ac;
  /* c6414: dup v0.8h, w8 */
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
  /* c6418: mov x14, xzr */
  ARC_X_W(c, 14, ARC_X_R(c, 31));
  /* c641c: mov x13, xzr */
  ARC_X_W(c, 13, ARC_X_R(c, 31));
  /* c6420: b #0xc644c */
  goto L_c644c;
L_c6424:;
  /* c6424: cmp x13, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 13), UINT64_C(0));
  /* c6428: cset w15, eq */
  ARC_W_W(c, 15, (ARC_COND(c, 0) ? 1 : 0));
  /* c642c: cmp x14, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 14), UINT64_C(0));
  /* c6430: add x11, x11, x15, lsl #7 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) + ((uint64_t)(ARC_X_R(c, 15)) << 7)));
  /* c6434: csel x15, x4, xzr, eq */
  ARC_X_W(c, 15, (ARC_COND(c, 0) ? (ARC_X_R(c, 4)) : ARC_X_R(c, 31)));
  /* c6438: cset w16, eq */
  ARC_W_W(c, 16, (ARC_COND(c, 0) ? 1 : 0));
  /* c643c: add x12, x12, x15 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) + ARC_X_R(c, 15)));
  /* c6440: sub x15, x12, x11 */
  ARC_X_W(c, 15, (ARC_X_R(c, 12) - ARC_X_R(c, 11)));
  /* c6444: cmp x15, #0xfc */
  (void)arc_sub64(c, ARC_X_R(c, 15), UINT64_C(252));
  /* c6448: b.le #0xc69bc */
  if (ARC_COND(c, 13)) goto L_c69bc;
L_c644c:;
  /* c644c: cbz x13, #0xc645c */
  if ((ARC_X_R(c, 13)) == 0) goto L_c645c;
  /* c6450: cbz x14, #0xc66b8 */
  if ((ARC_X_R(c, 14)) == 0) goto L_c66b8;
L_c6454:;
  /* c6454: cbnz x13, #0xc6968 */
  if ((ARC_X_R(c, 13)) != 0) goto L_c6968;
  /* c6458: b #0xc6424 */
  goto L_c6424;
L_c645c:;
  /* c645c: ldp q1, q2, [x11] */
  { const uint64_t _pa = ARC_X_R(c, 11);
    arc_q_w(c, 1, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 2, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c6460: ldr q10, [sp, #0x120] */
  arc_q_w(c, 10, arc_ld64(((c)->sp + INT64_C(288))), arc_ld64(((c)->sp + INT64_C(288)) + 8));
  /* c6464: ldp q3, q4, [x11, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 11) + INT64_C(32));
    arc_q_w(c, 3, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 4, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c6468: ldr q8, [x6, #0xc80] */
  arc_q_w(c, 8, arc_ld64((ARC_X_R(c, 6) + INT64_C(3200))), arc_ld64((ARC_X_R(c, 6) + INT64_C(3200)) + 8));
  /* c646c: ldr q9, [x27, #0xa00] */
  arc_q_w(c, 9, arc_ld64((ARC_X_R(c, 27) + INT64_C(2560))), arc_ld64((ARC_X_R(c, 27) + INT64_C(2560)) + 8));
  /* c6470: ldp q27, q28, [x11, #0x60] */
  { const uint64_t _pa = (ARC_X_R(c, 11) + INT64_C(96));
    arc_q_w(c, 27, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 28, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c6474: cmhi v1.8h, v0.8h, v1.8h */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = ((c)->q[0].u16[0] > (c)->q[1].u16[0]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[1] = ((c)->q[0].u16[1] > (c)->q[1].u16[1]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[2] = ((c)->q[0].u16[2] > (c)->q[1].u16[2]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[3] = ((c)->q[0].u16[3] > (c)->q[1].u16[3]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[4] = ((c)->q[0].u16[4] > (c)->q[1].u16[4]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[5] = ((c)->q[0].u16[5] > (c)->q[1].u16[5]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[6] = ((c)->q[0].u16[6] > (c)->q[1].u16[6]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[7] = ((c)->q[0].u16[7] > (c)->q[1].u16[7]) ? (uint16_t)~(uint16_t)0 : 0;
    (c)->q[1] = _t; }
  /* c6478: cmhi v2.8h, v0.8h, v2.8h */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = ((c)->q[0].u16[0] > (c)->q[2].u16[0]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[1] = ((c)->q[0].u16[1] > (c)->q[2].u16[1]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[2] = ((c)->q[0].u16[2] > (c)->q[2].u16[2]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[3] = ((c)->q[0].u16[3] > (c)->q[2].u16[3]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[4] = ((c)->q[0].u16[4] > (c)->q[2].u16[4]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[5] = ((c)->q[0].u16[5] > (c)->q[2].u16[5]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[6] = ((c)->q[0].u16[6] > (c)->q[2].u16[6]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[7] = ((c)->q[0].u16[7] > (c)->q[2].u16[7]) ? (uint16_t)~(uint16_t)0 : 0;
    (c)->q[2] = _t; }
  /* c647c: cmhi v3.8h, v0.8h, v3.8h */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = ((c)->q[0].u16[0] > (c)->q[3].u16[0]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[1] = ((c)->q[0].u16[1] > (c)->q[3].u16[1]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[2] = ((c)->q[0].u16[2] > (c)->q[3].u16[2]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[3] = ((c)->q[0].u16[3] > (c)->q[3].u16[3]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[4] = ((c)->q[0].u16[4] > (c)->q[3].u16[4]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[5] = ((c)->q[0].u16[5] > (c)->q[3].u16[5]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[6] = ((c)->q[0].u16[6] > (c)->q[3].u16[6]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[7] = ((c)->q[0].u16[7] > (c)->q[3].u16[7]) ? (uint16_t)~(uint16_t)0 : 0;
    (c)->q[3] = _t; }
  /* c6480: cmhi v17.8h, v0.8h, v4.8h */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = ((c)->q[0].u16[0] > (c)->q[4].u16[0]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[1] = ((c)->q[0].u16[1] > (c)->q[4].u16[1]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[2] = ((c)->q[0].u16[2] > (c)->q[4].u16[2]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[3] = ((c)->q[0].u16[3] > (c)->q[4].u16[3]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[4] = ((c)->q[0].u16[4] > (c)->q[4].u16[4]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[5] = ((c)->q[0].u16[5] > (c)->q[4].u16[5]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[6] = ((c)->q[0].u16[6] > (c)->q[4].u16[6]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[7] = ((c)->q[0].u16[7] > (c)->q[4].u16[7]) ? (uint16_t)~(uint16_t)0 : 0;
    (c)->q[17] = _t; }
  /* c6484: sshll v5.4s, v1.4h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[1].i16[0]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[1].i16[1]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[1].i16[2]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[1].i16[3]) << 0);
    (c)->q[5] = _t; }
  /* c6488: sshll2 v1.4s, v1.8h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[1].i16[4]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[1].i16[5]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[1].i16[6]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[1].i16[7]) << 0);
    (c)->q[1] = _t; }
  /* c648c: sshll2 v6.4s, v2.8h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[2].i16[4]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[2].i16[5]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[2].i16[6]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[2].i16[7]) << 0);
    (c)->q[6] = _t; }
  /* c6490: sshll2 v18.4s, v3.8h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[3].i16[4]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[3].i16[5]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[3].i16[6]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[3].i16[7]) << 0);
    (c)->q[18] = _t; }
  /* c6494: sshll2 v20.4s, v17.8h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[17].i16[4]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[17].i16[5]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[17].i16[6]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[17].i16[7]) << 0);
    (c)->q[20] = _t; }
  /* c6498: sshll v17.4s, v17.4h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[17].i16[0]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[17].i16[1]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[17].i16[2]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[17].i16[3]) << 0);
    (c)->q[17] = _t; }
  /* c649c: sshll v2.4s, v2.4h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[2].i16[0]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[2].i16[1]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[2].i16[2]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[2].i16[3]) << 0);
    (c)->q[2] = _t; }
  /* c64a0: sshll v19.4s, v3.4h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[3].i16[0]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[3].i16[1]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[3].i16[2]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[3].i16[3]) << 0);
    (c)->q[19] = _t; }
  /* c64a4: ushll v4.2d, v1.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[1].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[1].u32[1]) << 0);
    (c)->q[4] = _t; }
  /* c64a8: ushll2 v1.2d, v1.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[1].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[1].u32[3]) << 0);
    (c)->q[1] = _t; }
  /* c64ac: ushll v16.2d, v6.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[6].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[6].u32[1]) << 0);
    (c)->q[16] = _t; }
  /* c64b0: ushll v3.2d, v5.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[5].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[5].u32[1]) << 0);
    (c)->q[3] = _t; }
  /* c64b4: ushll2 v7.2d, v5.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[5].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[5].u32[3]) << 0);
    (c)->q[7] = _t; }
  /* c64b8: ldur q5, [x29, #-0x60] */
  arc_q_w(c, 5, arc_ld64((ARC_X_R(c, 29) + INT64_C(-96))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-96)) + 8));
  /* c64bc: ushll2 v21.2d, v6.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[6].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[6].u32[3]) << 0);
    (c)->q[21] = _t; }
  /* c64c0: ushll v23.2d, v18.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[18].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[18].u32[1]) << 0);
    (c)->q[23] = _t; }
  /* c64c4: ushll2 v24.2d, v17.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[17].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[17].u32[3]) << 0);
    (c)->q[24] = _t; }
  /* c64c8: bic v6.16b, v5.16b, v4.16b */
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
  /* c64cc: bic v4.16b, v12.16b, v1.16b */
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
  /* c64d0: bic v1.16b, v14.16b, v16.16b */
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
  /* c64d4: ldur q16, [x29, #-0x70] */
  arc_q_w(c, 16, arc_ld64((ARC_X_R(c, 29) + INT64_C(-112))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-112)) + 8));
  /* c64d8: ushll v25.2d, v17.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[17].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[17].u32[1]) << 0);
    (c)->q[25] = _t; }
  /* c64dc: ldur q17, [x29, #-0x90] */
  arc_q_w(c, 17, arc_ld64((ARC_X_R(c, 29) + INT64_C(-144))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-144)) + 8));
  /* c64e0: ushll v22.2d, v2.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[2].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[2].u32[1]) << 0);
    (c)->q[22] = _t; }
  /* c64e4: ushll2 v2.2d, v2.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[2].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[2].u32[3]) << 0);
    (c)->q[2] = _t; }
  /* c64e8: bic v5.16b, v11.16b, v3.16b */
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
  /* c64ec: bic v16.16b, v16.16b, v21.16b */
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
  /* c64f0: ushll2 v21.2d, v18.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[18].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[18].u32[3]) << 0);
    (c)->q[21] = _t; }
  /* c64f4: ldur q18, [x29, #-0x80] */
  arc_q_w(c, 18, arc_ld64((ARC_X_R(c, 29) + INT64_C(-128))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-128)) + 8));
  /* c64f8: bic v17.16b, v17.16b, v23.16b */
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
  /* c64fc: ldp q23, q26, [x29, #-0xb0] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-176));
    arc_q_w(c, 23, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 26, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c6500: bic v3.16b, v13.16b, v7.16b */
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
  /* c6504: bic v7.16b, v15.16b, v22.16b */
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
  /* c6508: ushll v22.2d, v19.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[19].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[19].u32[1]) << 0);
    (c)->q[22] = _t; }
  /* c650c: bic v18.16b, v18.16b, v2.16b */
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
  /* c6510: ushll2 v2.2d, v19.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[19].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[19].u32[3]) << 0);
    (c)->q[2] = _t; }
  /* c6514: ushll v19.2d, v20.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[20].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[20].u32[1]) << 0);
    (c)->q[19] = _t; }
  /* c6518: bic v21.16b, v23.16b, v21.16b */
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
  /* c651c: ldur q23, [x29, #-0xc0] */
  arc_q_w(c, 23, arc_ld64((ARC_X_R(c, 29) + INT64_C(-192))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-192)) + 8));
  /* c6520: orr v17.16b, v17.16b, v6.16b */
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
  /* c6524: bic v22.16b, v26.16b, v22.16b */
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
  /* c6528: ushll2 v20.2d, v20.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[20].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[20].u32[3]) << 0);
    (c)->q[20] = _t; }
  /* c652c: bic v23.16b, v23.16b, v2.16b */
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
  /* c6530: ldp q26, q2, [x29, #-0xe0] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-224));
    arc_q_w(c, 26, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 2, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c6534: orr v4.16b, v21.16b, v4.16b */
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
  /* c6538: orr v5.16b, v22.16b, v5.16b */
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
  /* c653c: cmhi v22.8h, v0.8h, v28.8h */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = ((c)->q[0].u16[0] > (c)->q[28].u16[0]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[1] = ((c)->q[0].u16[1] > (c)->q[28].u16[1]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[2] = ((c)->q[0].u16[2] > (c)->q[28].u16[2]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[3] = ((c)->q[0].u16[3] > (c)->q[28].u16[3]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[4] = ((c)->q[0].u16[4] > (c)->q[28].u16[4]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[5] = ((c)->q[0].u16[5] > (c)->q[28].u16[5]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[6] = ((c)->q[0].u16[6] > (c)->q[28].u16[6]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[7] = ((c)->q[0].u16[7] > (c)->q[28].u16[7]) ? (uint16_t)~(uint16_t)0 : 0;
    (c)->q[22] = _t; }
  /* c6540: bic v25.16b, v26.16b, v25.16b */
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
  /* c6544: ldp q26, q29, [x29, #-0x100] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-256));
    arc_q_w(c, 26, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 29, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c6548: bic v2.16b, v2.16b, v19.16b */
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
  /* c654c: orr v3.16b, v23.16b, v3.16b */
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
  /* c6550: sshll v23.4s, v22.4h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[22].i16[0]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[22].i16[1]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[22].i16[2]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[22].i16[3]) << 0);
    (c)->q[23] = _t; }
  /* c6554: sshll2 v22.4s, v22.8h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[22].i16[4]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[22].i16[5]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[22].i16[6]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[22].i16[7]) << 0);
    (c)->q[22] = _t; }
  /* c6558: bic v24.16b, v26.16b, v24.16b */
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
  /* c655c: ldp q19, q26, [x11, #0x40] */
  { const uint64_t _pa = (ARC_X_R(c, 11) + INT64_C(64));
    arc_q_w(c, 19, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 26, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c6560: bic v20.16b, v29.16b, v20.16b */
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
  /* c6564: orr v7.16b, v25.16b, v7.16b */
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
  /* c6568: cmhi v25.8h, v0.8h, v27.8h */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = ((c)->q[0].u16[0] > (c)->q[27].u16[0]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[1] = ((c)->q[0].u16[1] > (c)->q[27].u16[1]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[2] = ((c)->q[0].u16[2] > (c)->q[27].u16[2]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[3] = ((c)->q[0].u16[3] > (c)->q[27].u16[3]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[4] = ((c)->q[0].u16[4] > (c)->q[27].u16[4]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[5] = ((c)->q[0].u16[5] > (c)->q[27].u16[5]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[6] = ((c)->q[0].u16[6] > (c)->q[27].u16[6]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[7] = ((c)->q[0].u16[7] > (c)->q[27].u16[7]) ? (uint16_t)~(uint16_t)0 : 0;
    (c)->q[25] = _t; }
  /* c656c: sshll v29.2d, v23.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[23].i32[0]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[23].i32[1]) << 0);
    (c)->q[29] = _t; }
  /* c6570: sshll2 v23.2d, v23.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[23].i32[2]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[23].i32[3]) << 0);
    (c)->q[23] = _t; }
  /* c6574: sshll2 v31.2d, v22.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[22].i32[2]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[22].i32[3]) << 0);
    (c)->q[31] = _t; }
  /* c6578: cmhi v19.8h, v0.8h, v19.8h */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = ((c)->q[0].u16[0] > (c)->q[19].u16[0]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[1] = ((c)->q[0].u16[1] > (c)->q[19].u16[1]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[2] = ((c)->q[0].u16[2] > (c)->q[19].u16[2]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[3] = ((c)->q[0].u16[3] > (c)->q[19].u16[3]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[4] = ((c)->q[0].u16[4] > (c)->q[19].u16[4]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[5] = ((c)->q[0].u16[5] > (c)->q[19].u16[5]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[6] = ((c)->q[0].u16[6] > (c)->q[19].u16[6]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[7] = ((c)->q[0].u16[7] > (c)->q[19].u16[7]) ? (uint16_t)~(uint16_t)0 : 0;
    (c)->q[19] = _t; }
  /* c657c: orr v6.16b, v24.16b, v18.16b */
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
  /* c6580: cmhi v21.8h, v0.8h, v26.8h */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = ((c)->q[0].u16[0] > (c)->q[26].u16[0]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[1] = ((c)->q[0].u16[1] > (c)->q[26].u16[1]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[2] = ((c)->q[0].u16[2] > (c)->q[26].u16[2]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[3] = ((c)->q[0].u16[3] > (c)->q[26].u16[3]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[4] = ((c)->q[0].u16[4] > (c)->q[26].u16[4]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[5] = ((c)->q[0].u16[5] > (c)->q[26].u16[5]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[6] = ((c)->q[0].u16[6] > (c)->q[26].u16[6]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[7] = ((c)->q[0].u16[7] > (c)->q[26].u16[7]) ? (uint16_t)~(uint16_t)0 : 0;
    (c)->q[21] = _t; }
  /* c6584: orr v16.16b, v20.16b, v16.16b */
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
  /* c6588: sshll v30.4s, v25.4h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[25].i16[0]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[25].i16[1]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[25].i16[2]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[25].i16[3]) << 0);
    (c)->q[30] = _t; }
  /* c658c: sshll2 v25.4s, v25.8h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[25].i16[4]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[25].i16[5]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[25].i16[6]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[25].i16[7]) << 0);
    (c)->q[25] = _t; }
  /* c6590: bic v29.16b, v8.16b, v29.16b */
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
  /* c6594: ldr q8, [x21, #0xb20] */
  arc_q_w(c, 8, arc_ld64((ARC_X_R(c, 21) + INT64_C(2848))), arc_ld64((ARC_X_R(c, 21) + INT64_C(2848)) + 8));
  /* c6598: bic v31.16b, v9.16b, v31.16b */
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
  /* c659c: sshll2 v18.4s, v19.8h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[19].i16[4]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[19].i16[5]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[19].i16[6]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[19].i16[7]) << 0);
    (c)->q[18] = _t; }
  /* c65a0: sshll v19.4s, v19.4h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[19].i16[0]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[19].i16[1]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[19].i16[2]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[19].i16[3]) << 0);
    (c)->q[19] = _t; }
  /* c65a4: sshll2 v20.4s, v21.8h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[21].i16[4]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[21].i16[5]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[21].i16[6]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[21].i16[7]) << 0);
    (c)->q[20] = _t; }
  /* c65a8: bic v23.16b, v8.16b, v23.16b */
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
  /* c65ac: sshll2 v8.2d, v25.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[25].i32[2]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[25].i32[3]) << 0);
    (c)->q[8] = _t; }
  /* c65b0: sshll2 v9.2d, v30.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[30].i32[2]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[30].i32[3]) << 0);
    (c)->q[9] = _t; }
  /* c65b4: sshll v25.2d, v25.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[25].i32[0]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[25].i32[1]) << 0);
    (c)->q[25] = _t; }
  /* c65b8: sshll v30.2d, v30.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[30].i32[0]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[30].i32[1]) << 0);
    (c)->q[30] = _t; }
  /* c65bc: sshll v21.4s, v21.4h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[21].i16[0]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[21].i16[1]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[21].i16[2]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[21].i16[3]) << 0);
    (c)->q[21] = _t; }
  /* c65c0: sshll v26.2d, v19.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[19].i32[0]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[19].i32[1]) << 0);
    (c)->q[26] = _t; }
  /* c65c4: sshll2 v19.2d, v19.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[19].i32[2]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[19].i32[3]) << 0);
    (c)->q[19] = _t; }
  /* c65c8: sshll v24.2d, v18.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[18].i32[0]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[18].i32[1]) << 0);
    (c)->q[24] = _t; }
  /* c65cc: sshll2 v18.2d, v18.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[18].i32[2]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[18].i32[3]) << 0);
    (c)->q[18] = _t; }
  /* c65d0: sshll v27.2d, v20.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[20].i32[0]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[20].i32[1]) << 0);
    (c)->q[27] = _t; }
  /* c65d4: sshll v22.2d, v22.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[22].i32[0]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[22].i32[1]) << 0);
    (c)->q[22] = _t; }
  /* c65d8: sshll v28.2d, v21.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[21].i32[0]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[21].i32[1]) << 0);
    (c)->q[28] = _t; }
  /* c65dc: sshll2 v21.2d, v21.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[21].i32[2]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[21].i32[3]) << 0);
    (c)->q[21] = _t; }
  /* c65e0: sshll2 v20.2d, v20.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[20].i32[2]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[20].i32[3]) << 0);
    (c)->q[20] = _t; }
  /* c65e4: bic v19.16b, v10.16b, v19.16b */
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
  /* c65e8: ldr q10, [sp, #0x110] */
  arc_q_w(c, 10, arc_ld64(((c)->sp + INT64_C(272))), arc_ld64(((c)->sp + INT64_C(272)) + 8));
  /* c65ec: orr v1.16b, v2.16b, v1.16b */
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
  /* c65f0: bic v18.16b, v10.16b, v18.16b */
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
  /* c65f4: ldr q10, [sp, #0x100] */
  arc_q_w(c, 10, arc_ld64(((c)->sp + INT64_C(256))), arc_ld64(((c)->sp + INT64_C(256)) + 8));
  /* c65f8: bic v26.16b, v10.16b, v26.16b */
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
  /* c65fc: ldr q10, [sp, #0xf0] */
  arc_q_w(c, 10, arc_ld64(((c)->sp + INT64_C(240))), arc_ld64(((c)->sp + INT64_C(240)) + 8));
  /* c6600: bic v24.16b, v10.16b, v24.16b */
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
  /* c6604: ldr q10, [sp, #0xb0] */
  arc_q_w(c, 10, arc_ld64(((c)->sp + INT64_C(176))), arc_ld64(((c)->sp + INT64_C(176)) + 8));
  /* c6608: bic v27.16b, v10.16b, v27.16b */
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
  /* c660c: ldr q10, [sp, #0x80] */
  arc_q_w(c, 10, arc_ld64(((c)->sp + INT64_C(128))), arc_ld64(((c)->sp + INT64_C(128)) + 8));
  /* c6610: bic v8.16b, v10.16b, v8.16b */
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
  /* c6614: ldr q10, [sp, #0x70] */
  arc_q_w(c, 10, arc_ld64(((c)->sp + INT64_C(112))), arc_ld64(((c)->sp + INT64_C(112)) + 8));
  /* c6618: bic v9.16b, v10.16b, v9.16b */
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
  /* c661c: ldr q10, [sp, #0xa0] */
  arc_q_w(c, 10, arc_ld64(((c)->sp + INT64_C(160))), arc_ld64(((c)->sp + INT64_C(160)) + 8));
  /* c6620: orr v18.16b, v8.16b, v18.16b */
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
  /* c6624: bic v25.16b, v10.16b, v25.16b */
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
  /* c6628: ldr q10, [sp, #0x90] */
  arc_q_w(c, 10, arc_ld64(((c)->sp + INT64_C(144))), arc_ld64(((c)->sp + INT64_C(144)) + 8));
  /* c662c: orr v2.16b, v9.16b, v19.16b */
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
  /* c6630: bic v30.16b, v10.16b, v30.16b */
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
  /* c6634: ldr q10, [sp, #0x60] */
  arc_q_w(c, 10, arc_ld64(((c)->sp + INT64_C(96))), arc_ld64(((c)->sp + INT64_C(96)) + 8));
  /* c6638: orr v24.16b, v25.16b, v24.16b */
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
  /* c663c: bic v22.16b, v10.16b, v22.16b */
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
  /* c6640: ldr q10, [sp, #0xe0] */
  arc_q_w(c, 10, arc_ld64(((c)->sp + INT64_C(224))), arc_ld64(((c)->sp + INT64_C(224)) + 8));
  /* c6644: orr v2.16b, v2.16b, v3.16b */
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
  /* c6648: orr v19.16b, v30.16b, v26.16b */
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
  /* c664c: orr v3.16b, v18.16b, v4.16b */
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
  /* c6650: bic v21.16b, v10.16b, v21.16b */
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
  /* c6654: ldr q10, [sp, #0xd0] */
  arc_q_w(c, 10, arc_ld64(((c)->sp + INT64_C(208))), arc_ld64(((c)->sp + INT64_C(208)) + 8));
  /* c6658: orr v22.16b, v22.16b, v27.16b */
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
  /* c665c: bic v20.16b, v10.16b, v20.16b */
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
  /* c6660: ldr q10, [sp, #0xc0] */
  arc_q_w(c, 10, arc_ld64(((c)->sp + INT64_C(192))), arc_ld64(((c)->sp + INT64_C(192)) + 8));
  /* c6664: orr v4.16b, v19.16b, v5.16b */
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
  /* c6668: orr v21.16b, v23.16b, v21.16b */
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
  /* c666c: orr v5.16b, v24.16b, v17.16b */
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
  /* c6670: bic v28.16b, v10.16b, v28.16b */
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
  /* c6674: orr v1.16b, v22.16b, v1.16b */
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
  /* c6678: orr v20.16b, v31.16b, v20.16b */
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
  /* c667c: orr v6.16b, v21.16b, v6.16b */
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
  /* c6680: orr v23.16b, v29.16b, v28.16b */
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
  /* c6684: orr v1.16b, v1.16b, v5.16b */
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
  /* c6688: orr v16.16b, v20.16b, v16.16b */
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
  /* c668c: orr v2.16b, v6.16b, v2.16b */
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
  /* c6690: orr v7.16b, v23.16b, v7.16b */
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
  /* c6694: orr v3.16b, v16.16b, v3.16b */
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
  /* c6698: orr v4.16b, v7.16b, v4.16b */
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
  /* c669c: orr v2.16b, v2.16b, v3.16b */
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
  /* c66a0: orr v1.16b, v4.16b, v1.16b */
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
  /* c66a4: orr v1.16b, v1.16b, v2.16b */
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
  /* c66a8: ext v2.16b, v1.16b, v1.16b, #8 */
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
  /* c66ac: orr v1.8b, v1.8b, v2.8b */
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
  /* c66b0: fmov x13, d1 */
  ARC_X_W(c, 13, ARC_DU_R(c, 1));
  /* c66b4: cbnz x14, #0xc6454 */
  if ((ARC_X_R(c, 14)) != 0) goto L_c6454;
L_c66b8:;
  /* c66b8: ldur q2, [x12, #-0x1e] */
  arc_q_w(c, 2, arc_ld64((ARC_X_R(c, 12) + INT64_C(-30))), arc_ld64((ARC_X_R(c, 12) + INT64_C(-30)) + 8));
  /* c66bc: ldur q3, [x12, #-0x2e] */
  arc_q_w(c, 3, arc_ld64((ARC_X_R(c, 12) + INT64_C(-46))), arc_ld64((ARC_X_R(c, 12) + INT64_C(-46)) + 8));
  /* c66c0: ldur q1, [x12, #-0xe] */
  arc_q_w(c, 1, arc_ld64((ARC_X_R(c, 12) + INT64_C(-14))), arc_ld64((ARC_X_R(c, 12) + INT64_C(-14)) + 8));
  /* c66c4: ldur q4, [x12, #-0x3e] */
  arc_q_w(c, 4, arc_ld64((ARC_X_R(c, 12) + INT64_C(-62))), arc_ld64((ARC_X_R(c, 12) + INT64_C(-62)) + 8));
  /* c66c8: ldur q5, [x12, #-0x4e] */
  arc_q_w(c, 5, arc_ld64((ARC_X_R(c, 12) + INT64_C(-78))), arc_ld64((ARC_X_R(c, 12) + INT64_C(-78)) + 8));
  /* c66cc: ldur q26, [x29, #-0x60] */
  arc_q_w(c, 26, arc_ld64((ARC_X_R(c, 29) + INT64_C(-96))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-96)) + 8));
  /* c66d0: rev64 v2.8h, v2.8h */
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
  /* c66d4: rev64 v3.8h, v3.8h */
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
  /* c66d8: rev64 v1.8h, v1.8h */
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
  /* c66dc: rev64 v4.8h, v4.8h */
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
  /* c66e0: ldp q29, q30, [x29, #-0xb0] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-176));
    arc_q_w(c, 29, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 30, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c66e4: ldur q16, [x12, #-0x7e] */
  arc_q_w(c, 16, arc_ld64((ARC_X_R(c, 12) + INT64_C(-126))), arc_ld64((ARC_X_R(c, 12) + INT64_C(-126)) + 8));
  /* c66e8: ldr q10, [sp, #0x120] */
  arc_q_w(c, 10, arc_ld64(((c)->sp + INT64_C(288))), arc_ld64(((c)->sp + INT64_C(288)) + 8));
  /* c66ec: ldr q8, [x6, #0xc80] */
  arc_q_w(c, 8, arc_ld64((ARC_X_R(c, 6) + INT64_C(3200))), arc_ld64((ARC_X_R(c, 6) + INT64_C(3200)) + 8));
  /* c66f0: ldr q9, [x27, #0xa00] */
  arc_q_w(c, 9, arc_ld64((ARC_X_R(c, 27) + INT64_C(2560))), arc_ld64((ARC_X_R(c, 27) + INT64_C(2560)) + 8));
  /* c66f4: ext v2.16b, v2.16b, v2.16b, #8 */
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
  /* c66f8: ext v3.16b, v3.16b, v3.16b, #8 */
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
  /* c66fc: ext v1.16b, v1.16b, v1.16b, #8 */
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
  /* c6700: ext v4.16b, v4.16b, v4.16b, #8 */
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
  /* c6704: cmhi v6.8h, v0.8h, v2.8h */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = ((c)->q[0].u16[0] > (c)->q[2].u16[0]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[1] = ((c)->q[0].u16[1] > (c)->q[2].u16[1]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[2] = ((c)->q[0].u16[2] > (c)->q[2].u16[2]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[3] = ((c)->q[0].u16[3] > (c)->q[2].u16[3]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[4] = ((c)->q[0].u16[4] > (c)->q[2].u16[4]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[5] = ((c)->q[0].u16[5] > (c)->q[2].u16[5]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[6] = ((c)->q[0].u16[6] > (c)->q[2].u16[6]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[7] = ((c)->q[0].u16[7] > (c)->q[2].u16[7]) ? (uint16_t)~(uint16_t)0 : 0;
    (c)->q[6] = _t; }
  /* c6708: cmhi v3.8h, v0.8h, v3.8h */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = ((c)->q[0].u16[0] > (c)->q[3].u16[0]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[1] = ((c)->q[0].u16[1] > (c)->q[3].u16[1]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[2] = ((c)->q[0].u16[2] > (c)->q[3].u16[2]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[3] = ((c)->q[0].u16[3] > (c)->q[3].u16[3]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[4] = ((c)->q[0].u16[4] > (c)->q[3].u16[4]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[5] = ((c)->q[0].u16[5] > (c)->q[3].u16[5]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[6] = ((c)->q[0].u16[6] > (c)->q[3].u16[6]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[7] = ((c)->q[0].u16[7] > (c)->q[3].u16[7]) ? (uint16_t)~(uint16_t)0 : 0;
    (c)->q[3] = _t; }
  /* c670c: cmhi v1.8h, v0.8h, v1.8h */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = ((c)->q[0].u16[0] > (c)->q[1].u16[0]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[1] = ((c)->q[0].u16[1] > (c)->q[1].u16[1]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[2] = ((c)->q[0].u16[2] > (c)->q[1].u16[2]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[3] = ((c)->q[0].u16[3] > (c)->q[1].u16[3]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[4] = ((c)->q[0].u16[4] > (c)->q[1].u16[4]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[5] = ((c)->q[0].u16[5] > (c)->q[1].u16[5]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[6] = ((c)->q[0].u16[6] > (c)->q[1].u16[6]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[7] = ((c)->q[0].u16[7] > (c)->q[1].u16[7]) ? (uint16_t)~(uint16_t)0 : 0;
    (c)->q[1] = _t; }
  /* c6710: cmhi v4.8h, v0.8h, v4.8h */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = ((c)->q[0].u16[0] > (c)->q[4].u16[0]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[1] = ((c)->q[0].u16[1] > (c)->q[4].u16[1]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[2] = ((c)->q[0].u16[2] > (c)->q[4].u16[2]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[3] = ((c)->q[0].u16[3] > (c)->q[4].u16[3]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[4] = ((c)->q[0].u16[4] > (c)->q[4].u16[4]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[5] = ((c)->q[0].u16[5] > (c)->q[4].u16[5]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[6] = ((c)->q[0].u16[6] > (c)->q[4].u16[6]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[7] = ((c)->q[0].u16[7] > (c)->q[4].u16[7]) ? (uint16_t)~(uint16_t)0 : 0;
    (c)->q[4] = _t; }
  /* c6714: rev64 v2.8h, v5.8h */
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
  /* c6718: ldur q5, [x12, #-0x5e] */
  arc_q_w(c, 5, arc_ld64((ARC_X_R(c, 12) + INT64_C(-94))), arc_ld64((ARC_X_R(c, 12) + INT64_C(-94)) + 8));
  /* c671c: sshll v17.4s, v6.4h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[6].i16[0]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[6].i16[1]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[6].i16[2]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[6].i16[3]) << 0);
    (c)->q[17] = _t; }
  /* c6720: sshll v18.4s, v3.4h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[3].i16[0]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[3].i16[1]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[3].i16[2]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[3].i16[3]) << 0);
    (c)->q[18] = _t; }
  /* c6724: sshll2 v3.4s, v3.8h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[3].i16[4]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[3].i16[5]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[3].i16[6]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[3].i16[7]) << 0);
    (c)->q[3] = _t; }
  /* c6728: sshll v7.4s, v1.4h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[1].i16[0]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[1].i16[1]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[1].i16[2]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[1].i16[3]) << 0);
    (c)->q[7] = _t; }
  /* c672c: sshll2 v1.4s, v1.8h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[1].i16[4]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[1].i16[5]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[1].i16[6]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[1].i16[7]) << 0);
    (c)->q[1] = _t; }
  /* c6730: sshll2 v6.4s, v6.8h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[6].i16[4]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[6].i16[5]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[6].i16[6]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[6].i16[7]) << 0);
    (c)->q[6] = _t; }
  /* c6734: sshll v19.4s, v4.4h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[4].i16[0]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[4].i16[1]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[4].i16[2]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[4].i16[3]) << 0);
    (c)->q[19] = _t; }
  /* c6738: sshll2 v4.4s, v4.8h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[4].i16[4]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[4].i16[5]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[4].i16[6]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[4].i16[7]) << 0);
    (c)->q[4] = _t; }
  /* c673c: rev64 v5.8h, v5.8h */
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
  /* c6740: ushll2 v22.2d, v17.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[17].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[17].u32[3]) << 0);
    (c)->q[22] = _t; }
  /* c6744: ushll v17.2d, v17.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[17].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[17].u32[1]) << 0);
    (c)->q[17] = _t; }
  /* c6748: ushll2 v25.2d, v3.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[3].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[3].u32[3]) << 0);
    (c)->q[25] = _t; }
  /* c674c: ushll2 v24.2d, v18.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[18].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[18].u32[3]) << 0);
    (c)->q[24] = _t; }
  /* c6750: ushll2 v21.2d, v1.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[1].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[1].u32[3]) << 0);
    (c)->q[21] = _t; }
  /* c6754: ushll v1.2d, v1.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[1].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[1].u32[1]) << 0);
    (c)->q[1] = _t; }
  /* c6758: ushll2 v23.2d, v6.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[6].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[6].u32[3]) << 0);
    (c)->q[23] = _t; }
  /* c675c: ushll v6.2d, v6.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[6].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[6].u32[1]) << 0);
    (c)->q[6] = _t; }
  /* c6760: ushll v18.2d, v18.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[18].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[18].u32[1]) << 0);
    (c)->q[18] = _t; }
  /* c6764: and v27.16b, v17.16b, v15.16b */
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
  /* c6768: ldur q17, [x12, #-0x6e] */
  arc_q_w(c, 17, arc_ld64((ARC_X_R(c, 12) + INT64_C(-110))), arc_ld64((ARC_X_R(c, 12) + INT64_C(-110)) + 8));
  /* c676c: and v25.16b, v25.16b, v29.16b */
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
  /* c6770: ldur q29, [x29, #-0xc0] */
  arc_q_w(c, 29, arc_ld64((ARC_X_R(c, 29) + INT64_C(-192))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-192)) + 8));
  /* c6774: ushll v3.2d, v3.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[3].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[3].u32[1]) << 0);
    (c)->q[3] = _t; }
  /* c6778: ushll2 v28.2d, v4.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[4].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[4].u32[3]) << 0);
    (c)->q[28] = _t; }
  /* c677c: ushll v4.2d, v4.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[4].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[4].u32[1]) << 0);
    (c)->q[4] = _t; }
  /* c6780: and v26.16b, v1.16b, v26.16b */
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
  /* c6784: and v1.16b, v6.16b, v14.16b */
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
  /* c6788: and v24.16b, v24.16b, v29.16b */
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
  /* c678c: rev64 v29.8h, v17.8h */
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
  /* c6790: ldur q17, [x29, #-0x90] */
  arc_q_w(c, 17, arc_ld64((ARC_X_R(c, 29) + INT64_C(-144))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-144)) + 8));
  /* c6794: ldur q6, [x29, #-0x70] */
  arc_q_w(c, 6, arc_ld64((ARC_X_R(c, 29) + INT64_C(-112))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-112)) + 8));
  /* c6798: and v18.16b, v18.16b, v30.16b */
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
  /* c679c: ext v2.16b, v2.16b, v2.16b, #8 */
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
  /* c67a0: and v30.16b, v3.16b, v17.16b */
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
  /* c67a4: ldur q3, [x29, #-0xd0] */
  arc_q_w(c, 3, arc_ld64((ARC_X_R(c, 29) + INT64_C(-208))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-208)) + 8));
  /* c67a8: ushll2 v20.2d, v7.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[7].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[7].u32[3]) << 0);
    (c)->q[20] = _t; }
  /* c67ac: and v23.16b, v23.16b, v6.16b */
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
  /* c67b0: ldur q6, [x29, #-0x80] */
  arc_q_w(c, 6, arc_ld64((ARC_X_R(c, 29) + INT64_C(-128))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-128)) + 8));
  /* c67b4: ushll v7.2d, v7.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[7].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[7].u32[1]) << 0);
    (c)->q[7] = _t; }
  /* c67b8: and v17.16b, v4.16b, v3.16b */
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
  /* c67bc: ldp q3, q4, [x29, #-0xf0] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-240));
    arc_q_w(c, 3, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 4, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c67c0: and v22.16b, v22.16b, v6.16b */
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
  /* c67c4: rev64 v6.8h, v16.8h */
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
  /* c67c8: ushll2 v16.2d, v19.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[19].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[19].u32[3]) << 0);
    (c)->q[16] = _t; }
  /* c67cc: ushll v19.2d, v19.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[19].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[19].u32[1]) << 0);
    (c)->q[19] = _t; }
  /* c67d0: ext v5.16b, v5.16b, v5.16b, #8 */
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
  /* c67d4: and v7.16b, v7.16b, v11.16b */
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
  /* c67d8: and v28.16b, v28.16b, v3.16b */
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
  /* c67dc: ldur q3, [x29, #-0x100] */
  arc_q_w(c, 3, arc_ld64((ARC_X_R(c, 29) + INT64_C(-256))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-256)) + 8));
  /* c67e0: cmhi v31.8h, v0.8h, v2.8h */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = ((c)->q[0].u16[0] > (c)->q[2].u16[0]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[1] = ((c)->q[0].u16[1] > (c)->q[2].u16[1]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[2] = ((c)->q[0].u16[2] > (c)->q[2].u16[2]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[3] = ((c)->q[0].u16[3] > (c)->q[2].u16[3]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[4] = ((c)->q[0].u16[4] > (c)->q[2].u16[4]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[5] = ((c)->q[0].u16[5] > (c)->q[2].u16[5]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[6] = ((c)->q[0].u16[6] > (c)->q[2].u16[6]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[7] = ((c)->q[0].u16[7] > (c)->q[2].u16[7]) ? (uint16_t)~(uint16_t)0 : 0;
    (c)->q[31] = _t; }
  /* c67e4: and v21.16b, v21.16b, v12.16b */
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
  /* c67e8: and v20.16b, v20.16b, v13.16b */
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
  /* c67ec: orr v1.16b, v17.16b, v1.16b */
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
  /* c67f0: and v19.16b, v19.16b, v4.16b */
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
  /* c67f4: and v16.16b, v16.16b, v3.16b */
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
  /* c67f8: ext v6.16b, v6.16b, v6.16b, #8 */
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
  /* c67fc: orr v4.16b, v18.16b, v7.16b */
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
  /* c6800: cmhi v18.8h, v0.8h, v5.8h */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = ((c)->q[0].u16[0] > (c)->q[5].u16[0]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[1] = ((c)->q[0].u16[1] > (c)->q[5].u16[1]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[2] = ((c)->q[0].u16[2] > (c)->q[5].u16[2]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[3] = ((c)->q[0].u16[3] > (c)->q[5].u16[3]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[4] = ((c)->q[0].u16[4] > (c)->q[5].u16[4]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[5] = ((c)->q[0].u16[5] > (c)->q[5].u16[5]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[6] = ((c)->q[0].u16[6] > (c)->q[5].u16[6]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[7] = ((c)->q[0].u16[7] > (c)->q[5].u16[7]) ? (uint16_t)~(uint16_t)0 : 0;
    (c)->q[18] = _t; }
  /* c6804: orr v7.16b, v28.16b, v23.16b */
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
  /* c6808: orr v3.16b, v25.16b, v21.16b */
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
  /* c680c: orr v2.16b, v24.16b, v20.16b */
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
  /* c6810: ext v20.16b, v29.16b, v29.16b, #8 */
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
  /* c6814: orr v5.16b, v16.16b, v22.16b */
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
  /* c6818: orr v16.16b, v19.16b, v27.16b */
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
  /* c681c: sshll v19.4s, v31.4h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[31].i16[0]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[31].i16[1]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[31].i16[2]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[31].i16[3]) << 0);
    (c)->q[19] = _t; }
  /* c6820: cmhi v21.8h, v0.8h, v6.8h */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = ((c)->q[0].u16[0] > (c)->q[6].u16[0]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[1] = ((c)->q[0].u16[1] > (c)->q[6].u16[1]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[2] = ((c)->q[0].u16[2] > (c)->q[6].u16[2]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[3] = ((c)->q[0].u16[3] > (c)->q[6].u16[3]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[4] = ((c)->q[0].u16[4] > (c)->q[6].u16[4]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[5] = ((c)->q[0].u16[5] > (c)->q[6].u16[5]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[6] = ((c)->q[0].u16[6] > (c)->q[6].u16[6]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[7] = ((c)->q[0].u16[7] > (c)->q[6].u16[7]) ? (uint16_t)~(uint16_t)0 : 0;
    (c)->q[21] = _t; }
  /* c6824: sshll2 v22.4s, v31.8h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[31].i16[4]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[31].i16[5]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[31].i16[6]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[31].i16[7]) << 0);
    (c)->q[22] = _t; }
  /* c6828: orr v6.16b, v30.16b, v26.16b */
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
  /* c682c: sshll2 v23.4s, v18.8h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[18].i16[4]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[18].i16[5]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[18].i16[6]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[18].i16[7]) << 0);
    (c)->q[23] = _t; }
  /* c6830: sshll v18.4s, v18.4h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[18].i16[0]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[18].i16[1]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[18].i16[2]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[18].i16[3]) << 0);
    (c)->q[18] = _t; }
  /* c6834: sshll v26.2d, v19.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[19].i32[0]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[19].i32[1]) << 0);
    (c)->q[26] = _t; }
  /* c6838: sshll2 v19.2d, v19.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[19].i32[2]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[19].i32[3]) << 0);
    (c)->q[19] = _t; }
  /* c683c: cmhi v20.8h, v0.8h, v20.8h */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = ((c)->q[0].u16[0] > (c)->q[20].u16[0]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[1] = ((c)->q[0].u16[1] > (c)->q[20].u16[1]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[2] = ((c)->q[0].u16[2] > (c)->q[20].u16[2]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[3] = ((c)->q[0].u16[3] > (c)->q[20].u16[3]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[4] = ((c)->q[0].u16[4] > (c)->q[20].u16[4]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[5] = ((c)->q[0].u16[5] > (c)->q[20].u16[5]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[6] = ((c)->q[0].u16[6] > (c)->q[20].u16[6]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[7] = ((c)->q[0].u16[7] > (c)->q[20].u16[7]) ? (uint16_t)~(uint16_t)0 : 0;
    (c)->q[20] = _t; }
  /* c6840: sshll v24.4s, v21.4h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[21].i16[0]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[21].i16[1]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[21].i16[2]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[21].i16[3]) << 0);
    (c)->q[24] = _t; }
  /* c6844: sshll v25.2d, v22.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[22].i32[0]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[22].i32[1]) << 0);
    (c)->q[25] = _t; }
  /* c6848: sshll2 v22.2d, v22.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[22].i32[2]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[22].i32[3]) << 0);
    (c)->q[22] = _t; }
  /* c684c: sshll2 v21.4s, v21.8h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[21].i16[4]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[21].i16[5]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[21].i16[6]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[21].i16[7]) << 0);
    (c)->q[21] = _t; }
  /* c6850: sshll v27.2d, v23.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[23].i32[0]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[23].i32[1]) << 0);
    (c)->q[27] = _t; }
  /* c6854: sshll v28.2d, v18.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[18].i32[0]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[18].i32[1]) << 0);
    (c)->q[28] = _t; }
  /* c6858: and v19.16b, v19.16b, v10.16b */
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
  /* c685c: ldr q10, [sp, #0x110] */
  arc_q_w(c, 10, arc_ld64(((c)->sp + INT64_C(272))), arc_ld64(((c)->sp + INT64_C(272)) + 8));
  /* c6860: sshll v30.4s, v20.4h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[20].i16[0]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[20].i16[1]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[20].i16[2]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[20].i16[3]) << 0);
    (c)->q[30] = _t; }
  /* c6864: sshll v29.2d, v24.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[24].i32[0]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[24].i32[1]) << 0);
    (c)->q[29] = _t; }
  /* c6868: sshll2 v20.4s, v20.8h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[20].i16[4]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[20].i16[5]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[20].i16[6]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[20].i16[7]) << 0);
    (c)->q[20] = _t; }
  /* c686c: sshll2 v24.2d, v24.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[24].i32[2]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[24].i32[3]) << 0);
    (c)->q[24] = _t; }
  /* c6870: and v22.16b, v22.16b, v10.16b */
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
  /* c6874: ldr q10, [sp, #0x100] */
  arc_q_w(c, 10, arc_ld64(((c)->sp + INT64_C(256))), arc_ld64(((c)->sp + INT64_C(256)) + 8));
  /* c6878: sshll2 v31.2d, v21.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[21].i32[2]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[21].i32[3]) << 0);
    (c)->q[31] = _t; }
  /* c687c: sshll v21.2d, v21.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[21].i32[0]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[21].i32[1]) << 0);
    (c)->q[21] = _t; }
  /* c6880: sshll2 v18.2d, v18.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[18].i32[2]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[18].i32[3]) << 0);
    (c)->q[18] = _t; }
  /* c6884: sshll2 v23.2d, v23.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[23].i32[2]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[23].i32[3]) << 0);
    (c)->q[23] = _t; }
  /* c6888: and v26.16b, v26.16b, v10.16b */
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
  /* c688c: ldr q10, [sp, #0xf0] */
  arc_q_w(c, 10, arc_ld64(((c)->sp + INT64_C(240))), arc_ld64(((c)->sp + INT64_C(240)) + 8));
  /* c6890: and v29.16b, v29.16b, v8.16b */
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
  /* c6894: ldr q8, [x21, #0xb20] */
  arc_q_w(c, 8, arc_ld64((ARC_X_R(c, 21) + INT64_C(2848))), arc_ld64((ARC_X_R(c, 21) + INT64_C(2848)) + 8));
  /* c6898: and v31.16b, v31.16b, v9.16b */
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
  /* c689c: sshll2 v9.2d, v30.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[30].i32[2]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[30].i32[3]) << 0);
    (c)->q[9] = _t; }
  /* c68a0: and v25.16b, v25.16b, v10.16b */
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
  /* c68a4: ldr q10, [sp, #0xb0] */
  arc_q_w(c, 10, arc_ld64(((c)->sp + INT64_C(176))), arc_ld64(((c)->sp + INT64_C(176)) + 8));
  /* c68a8: sshll v30.2d, v30.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[30].i32[0]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[30].i32[1]) << 0);
    (c)->q[30] = _t; }
  /* c68ac: and v24.16b, v24.16b, v8.16b */
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
  /* c68b0: sshll2 v8.2d, v20.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[20].i32[2]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[20].i32[3]) << 0);
    (c)->q[8] = _t; }
  /* c68b4: sshll v20.2d, v20.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[20].i32[0]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[20].i32[1]) << 0);
    (c)->q[20] = _t; }
  /* c68b8: and v27.16b, v27.16b, v10.16b */
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
  /* c68bc: ldr q10, [sp, #0x80] */
  arc_q_w(c, 10, arc_ld64(((c)->sp + INT64_C(128))), arc_ld64(((c)->sp + INT64_C(128)) + 8));
  /* c68c0: and v8.16b, v8.16b, v10.16b */
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
  /* c68c4: ldr q10, [sp, #0x70] */
  arc_q_w(c, 10, arc_ld64(((c)->sp + INT64_C(112))), arc_ld64(((c)->sp + INT64_C(112)) + 8));
  /* c68c8: and v9.16b, v9.16b, v10.16b */
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
  /* c68cc: ldr q10, [sp, #0xa0] */
  arc_q_w(c, 10, arc_ld64(((c)->sp + INT64_C(160))), arc_ld64(((c)->sp + INT64_C(160)) + 8));
  /* c68d0: and v20.16b, v20.16b, v10.16b */
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
  /* c68d4: ldr q10, [sp, #0x90] */
  arc_q_w(c, 10, arc_ld64(((c)->sp + INT64_C(144))), arc_ld64(((c)->sp + INT64_C(144)) + 8));
  /* c68d8: orr v17.16b, v9.16b, v19.16b */
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
  /* c68dc: orr v19.16b, v8.16b, v22.16b */
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
  /* c68e0: and v30.16b, v30.16b, v10.16b */
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
  /* c68e4: ldr q10, [sp, #0x60] */
  arc_q_w(c, 10, arc_ld64(((c)->sp + INT64_C(96))), arc_ld64(((c)->sp + INT64_C(96)) + 8));
  /* c68e8: orr v20.16b, v20.16b, v25.16b */
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
  /* c68ec: and v21.16b, v21.16b, v10.16b */
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
  /* c68f0: ldr q10, [sp, #0xe0] */
  arc_q_w(c, 10, arc_ld64(((c)->sp + INT64_C(224))), arc_ld64(((c)->sp + INT64_C(224)) + 8));
  /* c68f4: orr v2.16b, v17.16b, v2.16b */
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
  /* c68f8: orr v22.16b, v30.16b, v26.16b */
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
  /* c68fc: orr v3.16b, v19.16b, v3.16b */
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
  /* c6900: and v18.16b, v18.16b, v10.16b */
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
  /* c6904: ldr q10, [sp, #0xd0] */
  arc_q_w(c, 10, arc_ld64(((c)->sp + INT64_C(208))), arc_ld64(((c)->sp + INT64_C(208)) + 8));
  /* c6908: orr v6.16b, v20.16b, v6.16b */
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
  /* c690c: orr v21.16b, v21.16b, v27.16b */
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
  /* c6910: and v23.16b, v23.16b, v10.16b */
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
  /* c6914: ldr q10, [sp, #0xc0] */
  arc_q_w(c, 10, arc_ld64(((c)->sp + INT64_C(192))), arc_ld64(((c)->sp + INT64_C(192)) + 8));
  /* c6918: orr v4.16b, v22.16b, v4.16b */
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
  /* c691c: orr v18.16b, v24.16b, v18.16b */
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
  /* c6920: and v28.16b, v28.16b, v10.16b */
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
  /* c6924: orr v1.16b, v21.16b, v1.16b */
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
  /* c6928: orr v23.16b, v31.16b, v23.16b */
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
  /* c692c: orr v5.16b, v18.16b, v5.16b */
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
  /* c6930: orr v24.16b, v29.16b, v28.16b */
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
  /* c6934: orr v1.16b, v1.16b, v6.16b */
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
  /* c6938: orr v7.16b, v23.16b, v7.16b */
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
  /* c693c: orr v2.16b, v5.16b, v2.16b */
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
  /* c6940: orr v16.16b, v24.16b, v16.16b */
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
  /* c6944: orr v3.16b, v7.16b, v3.16b */
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
  /* c6948: orr v4.16b, v16.16b, v4.16b */
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
  /* c694c: orr v2.16b, v2.16b, v3.16b */
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
  /* c6950: orr v1.16b, v4.16b, v1.16b */
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
  /* c6954: orr v1.16b, v1.16b, v2.16b */
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
  /* c6958: ext v2.16b, v1.16b, v1.16b, #8 */
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
  /* c695c: orr v1.8b, v1.8b, v2.8b */
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
  /* c6960: fmov x14, d1 */
  ARC_X_W(c, 14, ARC_DU_R(c, 1));
  /* c6964: cbz x13, #0xc6424 */
  if ((ARC_X_R(c, 13)) == 0) goto L_c6424;
L_c6968:;
  /* c6968: cbz x14, #0xc6424 */
  if ((ARC_X_R(c, 14)) == 0) goto L_c6424;
L_c696c:;
  /* c696c: rbit x15, x14 */
  ARC_X_W(c, 15, arc_rbit64(ARC_X_R(c, 14)));
  /* c6970: rbit x16, x13 */
  ARC_X_W(c, 16, arc_rbit64(ARC_X_R(c, 13)));
  /* c6974: sub x17, x14, #1 */
  ARC_X_W(c, 17, (ARC_X_R(c, 14) - UINT64_C(1)));
  /* c6978: sub x3, x13, #1 */
  ARC_X_W(c, 3, (ARC_X_R(c, 13) - UINT64_C(1)));
  /* c697c: and x14, x17, x14 */
  ARC_X_W(c, 14, (ARC_X_R(c, 17) & ARC_X_R(c, 14)));
  /* c6980: clz x15, x15 */
  ARC_X_W(c, 15, arc_clz64(ARC_X_R(c, 15)));
  /* c6984: clz x16, x16 */
  ARC_X_W(c, 16, arc_clz64(ARC_X_R(c, 16)));
  /* c6988: and x13, x3, x13 */
  ARC_X_W(c, 13, (ARC_X_R(c, 3) & ARC_X_R(c, 13)));
  /* c698c: sub x15, x12, x15, lsl #1 */
  ARC_X_W(c, 15, (ARC_X_R(c, 12) - ((uint64_t)(ARC_X_R(c, 15)) << 1)));
  /* c6990: ldrh w0, [x11, x16, lsl #1] */
  ARC_W_W(c, 0, arc_ld16((ARC_X_R(c, 11) + ((uint64_t)(ARC_X_R(c, 16)) << 1))));
  /* c6994: ldrh w1, [x15] */
  ARC_W_W(c, 1, arc_ld16(ARC_X_R(c, 15)));
  /* c6998: strh w1, [x11, x16, lsl #1] */
  arc_st16((ARC_X_R(c, 11) + ((uint64_t)(ARC_X_R(c, 16)) << 1)), ARC_W_R(c, 1));
  /* c699c: strh w0, [x15] */
  arc_st16(ARC_X_R(c, 15), ARC_W_R(c, 0));
  /* c69a0: cbz x14, #0xc6424 */
  if ((ARC_X_R(c, 14)) == 0) goto L_c6424;
  /* c69a4: cbnz x13, #0xc696c */
  if ((ARC_X_R(c, 13)) != 0) goto L_c696c;
  /* c69a8: b #0xc6424 */
  goto L_c6424;
L_c69ac:;
  /* c69ac: asr x15, x13, #1 */
  ARC_X_W(c, 15, ((uint64_t)((int64_t)(ARC_X_R(c, 13)) >> ((UINT64_C(1)) & 63))));
  /* c69b0: mov x14, xzr */
  ARC_X_W(c, 14, ARC_X_R(c, 31));
  /* c69b4: mov w16, #1 */
  ARC_W_W(c, 16, UINT64_C(1));
  /* c69b8: b #0xc69e0 */
  goto L_c69e0;
L_c69bc:;
  /* c69bc: asr x15, x15, #1 */
  ARC_X_W(c, 15, ((uint64_t)((int64_t)(ARC_X_R(c, 15)) >> ((UINT64_C(1)) & 63))));
  /* c69c0: orr x17, x14, x13 */
  ARC_X_W(c, 17, (ARC_X_R(c, 14) | ARC_X_R(c, 13)));
  /* c69c4: cbz x17, #0xc69e0 */
  if ((ARC_X_R(c, 17)) == 0) goto L_c69e0;
  /* c69c8: sub x15, x15, #0x3f */
  ARC_X_W(c, 15, (ARC_X_R(c, 15) - UINT64_C(63)));
  /* c69cc: mov w0, #0x40 */
  ARC_W_W(c, 0, UINT64_C(64));
  /* c69d0: mov w17, #0x40 */
  ARC_W_W(c, 17, UINT64_C(64));
  /* c69d4: cbz x13, #0xc69f0 */
  if ((ARC_X_R(c, 13)) == 0) goto L_c69f0;
  /* c69d8: cbnz w16, #0xc6c5c */
  if ((ARC_W_R(c, 16)) != 0) goto L_c6c5c;
  /* c69dc: b #0xc6f04 */
  goto L_c6f04;
L_c69e0:;
  /* c69e0: add x13, x15, #1 */
  ARC_X_W(c, 13, (ARC_X_R(c, 15) + UINT64_C(1)));
  /* c69e4: add x15, x13, x13, lsr #63 */
  ARC_X_W(c, 15, (ARC_X_R(c, 13) + ((uint64_t)(ARC_X_R(c, 13)) >> 63)));
  /* c69e8: asr x15, x15, #1 */
  ARC_X_W(c, 15, ((uint64_t)((int64_t)(ARC_X_R(c, 15)) >> ((UINT64_C(1)) & 63))));
  /* c69ec: sub x0, x13, x15 */
  ARC_X_W(c, 0, (ARC_X_R(c, 13) - ARC_X_R(c, 15)));
L_c69f0:;
  /* c69f0: cmp x15, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 15), UINT64_C(1));
  /* c69f4: b.lt #0xc6a10 */
  if (ARC_COND(c, 11)) goto L_c6a10;
  /* c69f8: cmp x15, #4 */
  (void)arc_sub64(c, ARC_X_R(c, 15), UINT64_C(4));
  /* c69fc: b.hs #0xc6a18 */
  if (ARC_COND(c, 2)) goto L_c6a18;
  /* c6a00: mov x17, xzr */
  ARC_X_W(c, 17, ARC_X_R(c, 31));
  /* c6a04: mov x13, xzr */
  ARC_X_W(c, 13, ARC_X_R(c, 31));
  /* c6a08: mov x1, x11 */
  ARC_X_W(c, 1, ARC_X_R(c, 11));
  /* c6a0c: b #0xc6c30 */
  goto L_c6c30;
L_c6a10:;
  /* c6a10: mov x13, xzr */
  ARC_X_W(c, 13, ARC_X_R(c, 31));
  /* c6a14: b #0xc6c50 */
  goto L_c6c50;
L_c6a18:;
  /* c6a18: cmp x15, #0x10 */
  (void)arc_sub64(c, ARC_X_R(c, 15), UINT64_C(16));
  /* c6a1c: b.hs #0xc6a2c */
  if (ARC_COND(c, 2)) goto L_c6a2c;
  /* c6a20: mov x17, xzr */
  ARC_X_W(c, 17, ARC_X_R(c, 31));
  /* c6a24: mov x13, xzr */
  ARC_X_W(c, 13, ARC_X_R(c, 31));
  /* c6a28: b #0xc6b88 */
  goto L_c6b88;
L_c6a2c:;
  /* c6a2c: adrp x13, #0x52000 */
  ARC_X_W(c, 13, (arc_image_bases[1] + UINT64_C(335872)));
  /* c6a30: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* c6a34: movi v2.2d, #0000000000000000 */
  arc_v_clear(c, 2);
  /* c6a38: ldr q16, [x13, #0xcc0] */
  arc_q_w(c, 16, arc_ld64((ARC_X_R(c, 13) + INT64_C(3264))), arc_ld64((ARC_X_R(c, 13) + INT64_C(3264)) + 8));
  /* c6a3c: adrp x13, #0x52000 */
  ARC_X_W(c, 13, (arc_image_bases[1] + UINT64_C(335872)));
  /* c6a40: movi v1.2d, #0000000000000000 */
  arc_v_clear(c, 1);
  /* c6a44: movi v3.2d, #0000000000000000 */
  arc_v_clear(c, 3);
  /* c6a48: movi v4.2d, #0000000000000000 */
  arc_v_clear(c, 4);
  /* c6a4c: movi v6.2d, #0000000000000000 */
  arc_v_clear(c, 6);
  /* c6a50: movi v5.2d, #0000000000000000 */
  arc_v_clear(c, 5);
  /* c6a54: movi v7.2d, #0000000000000000 */
  arc_v_clear(c, 7);
  /* c6a58: ldr q18, [x13, #0xc70] */
  arc_q_w(c, 18, arc_ld64((ARC_X_R(c, 13) + INT64_C(3184))), arc_ld64((ARC_X_R(c, 13) + INT64_C(3184)) + 8));
  /* c6a5c: adrp x13, #0x52000 */
  ARC_X_W(c, 13, (arc_image_bases[1] + UINT64_C(335872)));
  /* c6a60: dup v17.8h, w8 */
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
  /* c6a64: and x17, x15, #0x7ffffffffffffff0 */
  ARC_X_W(c, 17, (ARC_X_R(c, 15) & UINT64_C(9223372036854775792)));
  /* c6a68: ldr q19, [x13, #0xc10] */
  arc_q_w(c, 19, arc_ld64((ARC_X_R(c, 13) + INT64_C(3088))), arc_ld64((ARC_X_R(c, 13) + INT64_C(3088)) + 8));
  /* c6a6c: adrp x13, #0x52000 */
  ARC_X_W(c, 13, (arc_image_bases[1] + UINT64_C(335872)));
  /* c6a70: mov x1, x17 */
  ARC_X_W(c, 1, ARC_X_R(c, 17));
  /* c6a74: ldr q20, [x13, #0xa80] */
  arc_q_w(c, 20, arc_ld64((ARC_X_R(c, 13) + INT64_C(2688))), arc_ld64((ARC_X_R(c, 13) + INT64_C(2688)) + 8));
  /* c6a78: add x13, x11, #0x10 */
  ARC_X_W(c, 13, (ARC_X_R(c, 11) + UINT64_C(16)));
L_c6a7c:;
  /* c6a7c: ldp q21, q22, [x13, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 13) + INT64_C(-16));
    arc_q_w(c, 21, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 22, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c6a80: dup v23.2d, x28 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 28));
    _t.u64[1] = (ARC_X_R(c, 28));
    (c)->q[23] = _t; }
  /* c6a84: dup v25.2d, x5 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 5));
    _t.u64[1] = (ARC_X_R(c, 5));
    (c)->q[25] = _t; }
  /* c6a88: subs x1, x1, #0x10 */
  ARC_X_W(c, 1, arc_sub64(c, ARC_X_R(c, 1), UINT64_C(16)));
  /* c6a8c: add x13, x13, #0x20 */
  ARC_X_W(c, 13, (ARC_X_R(c, 13) + UINT64_C(32)));
  /* c6a90: cmhs v21.8h, v21.8h, v17.8h */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = ((c)->q[21].u16[0] >= (c)->q[17].u16[0]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[1] = ((c)->q[21].u16[1] >= (c)->q[17].u16[1]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[2] = ((c)->q[21].u16[2] >= (c)->q[17].u16[2]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[3] = ((c)->q[21].u16[3] >= (c)->q[17].u16[3]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[4] = ((c)->q[21].u16[4] >= (c)->q[17].u16[4]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[5] = ((c)->q[21].u16[5] >= (c)->q[17].u16[5]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[6] = ((c)->q[21].u16[6] >= (c)->q[17].u16[6]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[7] = ((c)->q[21].u16[7] >= (c)->q[17].u16[7]) ? (uint16_t)~(uint16_t)0 : 0;
    (c)->q[21] = _t; }
  /* c6a94: cmhs v22.8h, v22.8h, v17.8h */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = ((c)->q[22].u16[0] >= (c)->q[17].u16[0]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[1] = ((c)->q[22].u16[1] >= (c)->q[17].u16[1]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[2] = ((c)->q[22].u16[2] >= (c)->q[17].u16[2]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[3] = ((c)->q[22].u16[3] >= (c)->q[17].u16[3]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[4] = ((c)->q[22].u16[4] >= (c)->q[17].u16[4]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[5] = ((c)->q[22].u16[5] >= (c)->q[17].u16[5]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[6] = ((c)->q[22].u16[6] >= (c)->q[17].u16[6]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[7] = ((c)->q[22].u16[7] >= (c)->q[17].u16[7]) ? (uint16_t)~(uint16_t)0 : 0;
    (c)->q[22] = _t; }
  /* c6a98: add v27.2d, v16.2d, v23.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[16].u64[0] + (c)->q[23].u64[0];
    _t.u64[1] = (c)->q[16].u64[1] + (c)->q[23].u64[1];
    (c)->q[27] = _t; }
  /* c6a9c: add v28.2d, v18.2d, v23.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[18].u64[0] + (c)->q[23].u64[0];
    _t.u64[1] = (c)->q[18].u64[1] + (c)->q[23].u64[1];
    (c)->q[28] = _t; }
  /* c6aa0: add v8.2d, v19.2d, v23.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[19].u64[0] + (c)->q[23].u64[0];
    _t.u64[1] = (c)->q[19].u64[1] + (c)->q[23].u64[1];
    (c)->q[8] = _t; }
  /* c6aa4: add v23.2d, v20.2d, v23.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[20].u64[0] + (c)->q[23].u64[0];
    _t.u64[1] = (c)->q[20].u64[1] + (c)->q[23].u64[1];
    (c)->q[23] = _t; }
  /* c6aa8: ushll2 v24.4s, v21.8h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((uint32_t)((c)->q[21].u16[4]) << 0);
    _t.u32[1] = (uint32_t)((uint32_t)((c)->q[21].u16[5]) << 0);
    _t.u32[2] = (uint32_t)((uint32_t)((c)->q[21].u16[6]) << 0);
    _t.u32[3] = (uint32_t)((uint32_t)((c)->q[21].u16[7]) << 0);
    (c)->q[24] = _t; }
  /* c6aac: ushll v21.4s, v21.4h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((uint32_t)((c)->q[21].u16[0]) << 0);
    _t.u32[1] = (uint32_t)((uint32_t)((c)->q[21].u16[1]) << 0);
    _t.u32[2] = (uint32_t)((uint32_t)((c)->q[21].u16[2]) << 0);
    _t.u32[3] = (uint32_t)((uint32_t)((c)->q[21].u16[3]) << 0);
    (c)->q[21] = _t; }
  /* c6ab0: ushll2 v26.4s, v22.8h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((uint32_t)((c)->q[22].u16[4]) << 0);
    _t.u32[1] = (uint32_t)((uint32_t)((c)->q[22].u16[5]) << 0);
    _t.u32[2] = (uint32_t)((uint32_t)((c)->q[22].u16[6]) << 0);
    _t.u32[3] = (uint32_t)((uint32_t)((c)->q[22].u16[7]) << 0);
    (c)->q[26] = _t; }
  /* c6ab4: ushll v22.4s, v22.4h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((uint32_t)((c)->q[22].u16[0]) << 0);
    _t.u32[1] = (uint32_t)((uint32_t)((c)->q[22].u16[1]) << 0);
    _t.u32[2] = (uint32_t)((uint32_t)((c)->q[22].u16[2]) << 0);
    _t.u32[3] = (uint32_t)((uint32_t)((c)->q[22].u16[3]) << 0);
    (c)->q[22] = _t; }
  /* c6ab8: ushll2 v29.2d, v24.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[24].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[24].u32[3]) << 0);
    (c)->q[29] = _t; }
  /* c6abc: ushll v24.2d, v24.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[24].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[24].u32[1]) << 0);
    (c)->q[24] = _t; }
  /* c6ac0: ushll2 v30.2d, v21.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[21].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[21].u32[3]) << 0);
    (c)->q[30] = _t; }
  /* c6ac4: ushll v21.2d, v21.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[21].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[21].u32[1]) << 0);
    (c)->q[21] = _t; }
  /* c6ac8: ushll2 v31.2d, v26.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[26].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[26].u32[3]) << 0);
    (c)->q[31] = _t; }
  /* c6acc: ushll v26.2d, v26.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[26].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[26].u32[1]) << 0);
    (c)->q[26] = _t; }
  /* c6ad0: ushll2 v9.2d, v22.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[22].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[22].u32[3]) << 0);
    (c)->q[9] = _t; }
  /* c6ad4: ushll v22.2d, v22.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[22].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[22].u32[1]) << 0);
    (c)->q[22] = _t; }
  /* c6ad8: and v29.16b, v29.16b, v25.16b */
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
  /* c6adc: and v24.16b, v24.16b, v25.16b */
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
  /* c6ae0: and v30.16b, v30.16b, v25.16b */
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
  /* c6ae4: and v21.16b, v21.16b, v25.16b */
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
  /* c6ae8: and v31.16b, v31.16b, v25.16b */
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
  /* c6aec: and v26.16b, v26.16b, v25.16b */
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
  /* c6af0: and v9.16b, v9.16b, v25.16b */
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
  /* c6af4: and v22.16b, v22.16b, v25.16b */
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
  /* c6af8: ushl v25.2d, v30.2d, v19.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[30].u64[0], (int8_t)(c)->q[19].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[30].u64[1], (int8_t)(c)->q[19].u64[1]);
    (c)->q[25] = _t; }
  /* c6afc: ushl v24.2d, v24.2d, v18.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[24].u64[0], (int8_t)(c)->q[18].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[24].u64[1], (int8_t)(c)->q[18].u64[1]);
    (c)->q[24] = _t; }
  /* c6b00: ushl v29.2d, v29.2d, v16.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[29].u64[0], (int8_t)(c)->q[16].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[29].u64[1], (int8_t)(c)->q[16].u64[1]);
    (c)->q[29] = _t; }
  /* c6b04: ushl v21.2d, v21.2d, v20.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[21].u64[0], (int8_t)(c)->q[20].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[21].u64[1], (int8_t)(c)->q[20].u64[1]);
    (c)->q[21] = _t; }
  /* c6b08: ushl v26.2d, v26.2d, v28.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[26].u64[0], (int8_t)(c)->q[28].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[26].u64[1], (int8_t)(c)->q[28].u64[1]);
    (c)->q[26] = _t; }
  /* c6b0c: ushl v27.2d, v31.2d, v27.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[31].u64[0], (int8_t)(c)->q[27].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[31].u64[1], (int8_t)(c)->q[27].u64[1]);
    (c)->q[27] = _t; }
  /* c6b10: ushl v22.2d, v22.2d, v23.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[22].u64[0], (int8_t)(c)->q[23].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[22].u64[1], (int8_t)(c)->q[23].u64[1]);
    (c)->q[22] = _t; }
  /* c6b14: ushl v23.2d, v9.2d, v8.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[9].u64[0], (int8_t)(c)->q[8].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[9].u64[1], (int8_t)(c)->q[8].u64[1]);
    (c)->q[23] = _t; }
  /* c6b18: dup v28.2d, x30 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 30));
    _t.u64[1] = (ARC_X_R(c, 30));
    (c)->q[28] = _t; }
  /* c6b1c: orr v3.16b, v29.16b, v3.16b */
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
  /* c6b20: orr v1.16b, v24.16b, v1.16b */
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
  /* c6b24: orr v2.16b, v25.16b, v2.16b */
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
  /* c6b28: orr v0.16b, v21.16b, v0.16b */
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
  /* c6b2c: orr v7.16b, v27.16b, v7.16b */
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
  /* c6b30: orr v5.16b, v26.16b, v5.16b */
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
  /* c6b34: orr v6.16b, v23.16b, v6.16b */
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
  /* c6b38: orr v4.16b, v22.16b, v4.16b */
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
  /* c6b3c: add v18.2d, v18.2d, v28.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[18].u64[0] + (c)->q[28].u64[0];
    _t.u64[1] = (c)->q[18].u64[1] + (c)->q[28].u64[1];
    (c)->q[18] = _t; }
  /* c6b40: add v19.2d, v19.2d, v28.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[19].u64[0] + (c)->q[28].u64[0];
    _t.u64[1] = (c)->q[19].u64[1] + (c)->q[28].u64[1];
    (c)->q[19] = _t; }
  /* c6b44: add v20.2d, v20.2d, v28.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[20].u64[0] + (c)->q[28].u64[0];
    _t.u64[1] = (c)->q[20].u64[1] + (c)->q[28].u64[1];
    (c)->q[20] = _t; }
  /* c6b48: add v16.2d, v16.2d, v28.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[16].u64[0] + (c)->q[28].u64[0];
    _t.u64[1] = (c)->q[16].u64[1] + (c)->q[28].u64[1];
    (c)->q[16] = _t; }
  /* c6b4c: b.ne #0xc6a7c */
  if (ARC_COND(c, 1)) goto L_c6a7c;
  /* c6b50: orr v2.16b, v6.16b, v2.16b */
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
  /* c6b54: orr v3.16b, v7.16b, v3.16b */
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
  /* c6b58: cmp x15, x17 */
  (void)arc_sub64(c, ARC_X_R(c, 15), ARC_X_R(c, 17));
  /* c6b5c: orr v0.16b, v4.16b, v0.16b */
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
  /* c6b60: orr v1.16b, v5.16b, v1.16b */
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
  /* c6b64: orr v0.16b, v0.16b, v1.16b */
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
  /* c6b68: orr v1.16b, v2.16b, v3.16b */
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
  /* c6b6c: orr v0.16b, v0.16b, v1.16b */
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
  /* c6b70: ext v1.16b, v0.16b, v0.16b, #8 */
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
  /* c6b74: orr v0.8b, v0.8b, v1.8b */
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
  /* c6b78: fmov x13, d0 */
  ARC_X_W(c, 13, ARC_DU_R(c, 0));
  /* c6b7c: b.eq #0xc6c50 */
  if (ARC_COND(c, 0)) goto L_c6c50;
  /* c6b80: tst x15, #0xc */
  arc_flags_logical64(c, (uint64_t)(ARC_X_R(c, 15) & UINT64_C(12)));
  /* c6b84: b.eq #0xc6c2c */
  if (ARC_COND(c, 0)) goto L_c6c2c;
L_c6b88:;
  /* c6b88: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* c6b8c: mov x3, x17 */
  ARC_X_W(c, 3, ARC_X_R(c, 17));
  /* c6b90: dup v4.2d, x17 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 17));
    _t.u64[1] = (ARC_X_R(c, 17));
    (c)->q[4] = _t; }
  /* c6b94: adrp x17, #0x52000 */
  ARC_X_W(c, 17, (arc_image_bases[1] + UINT64_C(335872)));
  /* c6b98: movi v1.2d, #0000000000000000 */
  arc_v_clear(c, 1);
  /* c6b9c: dup v2.4h, w8 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = (ARC_W_R(c, 8));
    _t.u16[1] = (ARC_W_R(c, 8));
    _t.u16[2] = (ARC_W_R(c, 8));
    _t.u16[3] = (ARC_W_R(c, 8));
    (c)->q[2] = _t; }
  /* c6ba0: ldr q3, [x17, #0xc10] */
  arc_q_w(c, 3, arc_ld64((ARC_X_R(c, 17) + INT64_C(3088))), arc_ld64((ARC_X_R(c, 17) + INT64_C(3088)) + 8));
  /* c6ba4: adrp x17, #0x52000 */
  ARC_X_W(c, 17, (arc_image_bases[1] + UINT64_C(335872)));
  /* c6ba8: ldr q5, [x17, #0xa80] */
  arc_q_w(c, 5, arc_ld64((ARC_X_R(c, 17) + INT64_C(2688))), arc_ld64((ARC_X_R(c, 17) + INT64_C(2688)) + 8));
  /* c6bac: and x17, x15, #0x7ffffffffffffffc */
  ARC_X_W(c, 17, (ARC_X_R(c, 15) & UINT64_C(9223372036854775804)));
  /* c6bb0: mov v0.d[0], x13 */
  (c)->q[0].u64[0] = (ARC_X_R(c, 13));
  /* c6bb4: orr v3.16b, v4.16b, v3.16b */
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
  /* c6bb8: add x1, x11, x17, lsl #1 */
  ARC_X_W(c, 1, (ARC_X_R(c, 11) + ((uint64_t)(ARC_X_R(c, 17)) << 1)));
  /* c6bbc: orr v4.16b, v4.16b, v5.16b */
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
  /* c6bc0: lsl x13, x3, #1 */
  ARC_X_W(c, 13, ((uint64_t)(ARC_X_R(c, 3)) << ((UINT64_C(1)) & 63)));
  /* c6bc4: sub x3, x3, x17 */
  ARC_X_W(c, 3, (ARC_X_R(c, 3) - ARC_X_R(c, 17)));
L_c6bc8:;
  /* c6bc8: ldr d5, [x11, x13] */
  arc_du_w(c, 5, arc_ld64((ARC_X_R(c, 11) + ARC_X_R(c, 13))));
  /* c6bcc: dup v6.2d, x5 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 5));
    _t.u64[1] = (ARC_X_R(c, 5));
    (c)->q[6] = _t; }
  /* c6bd0: adds x3, x3, #4 */
  ARC_X_W(c, 3, arc_add64(c, ARC_X_R(c, 3), UINT64_C(4), 0));
  /* c6bd4: add x13, x13, #8 */
  ARC_X_W(c, 13, (ARC_X_R(c, 13) + UINT64_C(8)));
  /* c6bd8: cmhs v5.4h, v5.4h, v2.4h */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = ((c)->q[5].u16[0] >= (c)->q[2].u16[0]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[1] = ((c)->q[5].u16[1] >= (c)->q[2].u16[1]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[2] = ((c)->q[5].u16[2] >= (c)->q[2].u16[2]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[3] = ((c)->q[5].u16[3] >= (c)->q[2].u16[3]) ? (uint16_t)~(uint16_t)0 : 0;
    (c)->q[5] = _t; }
  /* c6bdc: ushll v5.4s, v5.4h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((uint32_t)((c)->q[5].u16[0]) << 0);
    _t.u32[1] = (uint32_t)((uint32_t)((c)->q[5].u16[1]) << 0);
    _t.u32[2] = (uint32_t)((uint32_t)((c)->q[5].u16[2]) << 0);
    _t.u32[3] = (uint32_t)((uint32_t)((c)->q[5].u16[3]) << 0);
    (c)->q[5] = _t; }
  /* c6be0: ushll2 v7.2d, v5.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[5].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[5].u32[3]) << 0);
    (c)->q[7] = _t; }
  /* c6be4: ushll v5.2d, v5.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[5].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[5].u32[1]) << 0);
    (c)->q[5] = _t; }
  /* c6be8: and v7.16b, v7.16b, v6.16b */
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
  /* c6bec: and v5.16b, v5.16b, v6.16b */
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
  /* c6bf0: ushl v6.2d, v7.2d, v3.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[7].u64[0], (int8_t)(c)->q[3].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[7].u64[1], (int8_t)(c)->q[3].u64[1]);
    (c)->q[6] = _t; }
  /* c6bf4: dup v7.2d, x22 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 22));
    _t.u64[1] = (ARC_X_R(c, 22));
    (c)->q[7] = _t; }
  /* c6bf8: ushl v5.2d, v5.2d, v4.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[5].u64[0], (int8_t)(c)->q[4].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[5].u64[1], (int8_t)(c)->q[4].u64[1]);
    (c)->q[5] = _t; }
  /* c6bfc: orr v1.16b, v6.16b, v1.16b */
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
  /* c6c00: orr v0.16b, v5.16b, v0.16b */
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
  /* c6c04: add v3.2d, v3.2d, v7.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[3].u64[0] + (c)->q[7].u64[0];
    _t.u64[1] = (c)->q[3].u64[1] + (c)->q[7].u64[1];
    (c)->q[3] = _t; }
  /* c6c08: add v4.2d, v4.2d, v7.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[4].u64[0] + (c)->q[7].u64[0];
    _t.u64[1] = (c)->q[4].u64[1] + (c)->q[7].u64[1];
    (c)->q[4] = _t; }
  /* c6c0c: b.ne #0xc6bc8 */
  if (ARC_COND(c, 1)) goto L_c6bc8;
  /* c6c10: orr v0.16b, v0.16b, v1.16b */
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
  /* c6c14: cmp x15, x17 */
  (void)arc_sub64(c, ARC_X_R(c, 15), ARC_X_R(c, 17));
  /* c6c18: ext v1.16b, v0.16b, v0.16b, #8 */
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
  /* c6c1c: orr v0.8b, v0.8b, v1.8b */
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
  /* c6c20: fmov x13, d0 */
  ARC_X_W(c, 13, ARC_DU_R(c, 0));
  /* c6c24: b.ne #0xc6c30 */
  if (ARC_COND(c, 1)) goto L_c6c30;
  /* c6c28: b #0xc6c50 */
  goto L_c6c50;
L_c6c2c:;
  /* c6c2c: add x1, x11, x17, lsl #1 */
  ARC_X_W(c, 1, (ARC_X_R(c, 11) + ((uint64_t)(ARC_X_R(c, 17)) << 1)));
L_c6c30:;
  /* c6c30: ldrh w3, [x1], #2 */
  { const uint64_t _a = ARC_X_R(c, 1);
    ARC_X_W(c, 1, ARC_X_R(c, 1) + INT64_C(2));
    ARC_W_W(c, 3, arc_ld16(_a));
  }
  /* c6c34: cmp w3, w8, uxth */
  (void)arc_sub32(c, ARC_W_R(c, 3), ((uint64_t)(uint16_t)(ARC_W_R(c, 8))));
  /* c6c38: cset w3, hs */
  ARC_W_W(c, 3, (ARC_COND(c, 2) ? 1 : 0));
  /* c6c3c: lsl x3, x3, x17 */
  ARC_X_W(c, 3, ((uint64_t)(ARC_X_R(c, 3)) << ((ARC_X_R(c, 17)) & 63)));
  /* c6c40: add x17, x17, #1 */
  ARC_X_W(c, 17, (ARC_X_R(c, 17) + UINT64_C(1)));
  /* c6c44: cmp x15, x17 */
  (void)arc_sub64(c, ARC_X_R(c, 15), ARC_X_R(c, 17));
  /* c6c48: orr x13, x3, x13 */
  ARC_X_W(c, 13, (ARC_X_R(c, 3) | ARC_X_R(c, 13)));
  /* c6c4c: b.ne #0xc6c30 */
  if (ARC_COND(c, 1)) goto L_c6c30;
L_c6c50:;
  /* c6c50: mov x17, x15 */
  ARC_X_W(c, 17, ARC_X_R(c, 15));
  /* c6c54: mov x15, x0 */
  ARC_X_W(c, 15, ARC_X_R(c, 0));
  /* c6c58: cbz w16, #0xc6f04 */
  if ((ARC_W_R(c, 16)) == 0) goto L_c6f04;
L_c6c5c:;
  /* c6c5c: cmp x15, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 15), UINT64_C(1));
  /* c6c60: b.lt #0xc6c7c */
  if (ARC_COND(c, 11)) goto L_c6c7c;
  /* c6c64: cmp x15, #4 */
  (void)arc_sub64(c, ARC_X_R(c, 15), UINT64_C(4));
  /* c6c68: b.hs #0xc6c90 */
  if (ARC_COND(c, 2)) goto L_c6c90;
  /* c6c6c: mov x16, xzr */
  ARC_X_W(c, 16, ARC_X_R(c, 31));
  /* c6c70: mov x14, xzr */
  ARC_X_W(c, 14, ARC_X_R(c, 31));
  /* c6c74: mov x0, x12 */
  ARC_X_W(c, 0, ARC_X_R(c, 12));
  /* c6c78: b #0xc6ee4 */
  goto L_c6ee4;
L_c6c7c:;
  /* c6c7c: cmp x13, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 13), UINT64_C(0));
  /* c6c80: csel x14, x17, xzr, eq */
  ARC_X_W(c, 14, (ARC_COND(c, 0) ? (ARC_X_R(c, 17)) : ARC_X_R(c, 31)));
  /* c6c84: cbz x13, #0xc6eb8 */
  if ((ARC_X_R(c, 13)) == 0) goto L_c6eb8;
  /* c6c88: sub x12, x12, x15, lsl #1 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) - ((uint64_t)(ARC_X_R(c, 15)) << 1)));
  /* c6c8c: b #0xc6f74 */
  goto L_c6f74;
L_c6c90:;
  /* c6c90: cmp x15, #0x10 */
  (void)arc_sub64(c, ARC_X_R(c, 15), UINT64_C(16));
  /* c6c94: b.hs #0xc6ca4 */
  if (ARC_COND(c, 2)) goto L_c6ca4;
  /* c6c98: mov x16, xzr */
  ARC_X_W(c, 16, ARC_X_R(c, 31));
  /* c6c9c: mov x14, xzr */
  ARC_X_W(c, 14, ARC_X_R(c, 31));
  /* c6ca0: b #0xc6e10 */
  goto L_c6e10;
L_c6ca4:;
  /* c6ca4: adrp x14, #0x52000 */
  ARC_X_W(c, 14, (arc_image_bases[1] + UINT64_C(335872)));
  /* c6ca8: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* c6cac: movi v2.2d, #0000000000000000 */
  arc_v_clear(c, 2);
  /* c6cb0: ldr q16, [x14, #0xcc0] */
  arc_q_w(c, 16, arc_ld64((ARC_X_R(c, 14) + INT64_C(3264))), arc_ld64((ARC_X_R(c, 14) + INT64_C(3264)) + 8));
  /* c6cb4: adrp x14, #0x52000 */
  ARC_X_W(c, 14, (arc_image_bases[1] + UINT64_C(335872)));
  /* c6cb8: movi v1.2d, #0000000000000000 */
  arc_v_clear(c, 1);
  /* c6cbc: movi v3.2d, #0000000000000000 */
  arc_v_clear(c, 3);
  /* c6cc0: movi v4.2d, #0000000000000000 */
  arc_v_clear(c, 4);
  /* c6cc4: movi v6.2d, #0000000000000000 */
  arc_v_clear(c, 6);
  /* c6cc8: movi v5.2d, #0000000000000000 */
  arc_v_clear(c, 5);
  /* c6ccc: movi v7.2d, #0000000000000000 */
  arc_v_clear(c, 7);
  /* c6cd0: ldr q18, [x14, #0xc70] */
  arc_q_w(c, 18, arc_ld64((ARC_X_R(c, 14) + INT64_C(3184))), arc_ld64((ARC_X_R(c, 14) + INT64_C(3184)) + 8));
  /* c6cd4: adrp x14, #0x52000 */
  ARC_X_W(c, 14, (arc_image_bases[1] + UINT64_C(335872)));
  /* c6cd8: dup v17.8h, w8 */
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
  /* c6cdc: and x16, x15, #0x7ffffffffffffff0 */
  ARC_X_W(c, 16, (ARC_X_R(c, 15) & UINT64_C(9223372036854775792)));
  /* c6ce0: ldr q19, [x14, #0xc10] */
  arc_q_w(c, 19, arc_ld64((ARC_X_R(c, 14) + INT64_C(3088))), arc_ld64((ARC_X_R(c, 14) + INT64_C(3088)) + 8));
  /* c6ce4: adrp x14, #0x52000 */
  ARC_X_W(c, 14, (arc_image_bases[1] + UINT64_C(335872)));
  /* c6ce8: mov x0, x16 */
  ARC_X_W(c, 0, ARC_X_R(c, 16));
  /* c6cec: ldr q20, [x14, #0xa80] */
  arc_q_w(c, 20, arc_ld64((ARC_X_R(c, 14) + INT64_C(2688))), arc_ld64((ARC_X_R(c, 14) + INT64_C(2688)) + 8));
  /* c6cf0: sub x14, x12, #0xe */
  ARC_X_W(c, 14, (ARC_X_R(c, 12) - UINT64_C(14)));
L_c6cf4:;
  /* c6cf4: ldp q22, q21, [x14, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 14) + INT64_C(-16));
    arc_q_w(c, 22, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 21, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c6cf8: dup v23.2d, x28 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 28));
    _t.u64[1] = (ARC_X_R(c, 28));
    (c)->q[23] = _t; }
  /* c6cfc: dup v25.2d, x5 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 5));
    _t.u64[1] = (ARC_X_R(c, 5));
    (c)->q[25] = _t; }
  /* c6d00: sub x0, x0, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) - UINT64_C(16)));
  /* c6d04: sub x14, x14, #0x20 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) - UINT64_C(32)));
  /* c6d08: rev64 v21.8h, v21.8h */
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
  /* c6d0c: rev64 v22.8h, v22.8h */
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
  /* c6d10: add v27.2d, v16.2d, v23.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[16].u64[0] + (c)->q[23].u64[0];
    _t.u64[1] = (c)->q[16].u64[1] + (c)->q[23].u64[1];
    (c)->q[27] = _t; }
  /* c6d14: add v28.2d, v18.2d, v23.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[18].u64[0] + (c)->q[23].u64[0];
    _t.u64[1] = (c)->q[18].u64[1] + (c)->q[23].u64[1];
    (c)->q[28] = _t; }
  /* c6d18: add v29.2d, v19.2d, v23.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[19].u64[0] + (c)->q[23].u64[0];
    _t.u64[1] = (c)->q[19].u64[1] + (c)->q[23].u64[1];
    (c)->q[29] = _t; }
  /* c6d1c: add v23.2d, v20.2d, v23.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[20].u64[0] + (c)->q[23].u64[0];
    _t.u64[1] = (c)->q[20].u64[1] + (c)->q[23].u64[1];
    (c)->q[23] = _t; }
  /* c6d20: ext v21.16b, v21.16b, v21.16b, #8 */
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
  /* c6d24: ext v22.16b, v22.16b, v22.16b, #8 */
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
  /* c6d28: cmhi v21.8h, v17.8h, v21.8h */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = ((c)->q[17].u16[0] > (c)->q[21].u16[0]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[1] = ((c)->q[17].u16[1] > (c)->q[21].u16[1]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[2] = ((c)->q[17].u16[2] > (c)->q[21].u16[2]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[3] = ((c)->q[17].u16[3] > (c)->q[21].u16[3]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[4] = ((c)->q[17].u16[4] > (c)->q[21].u16[4]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[5] = ((c)->q[17].u16[5] > (c)->q[21].u16[5]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[6] = ((c)->q[17].u16[6] > (c)->q[21].u16[6]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[7] = ((c)->q[17].u16[7] > (c)->q[21].u16[7]) ? (uint16_t)~(uint16_t)0 : 0;
    (c)->q[21] = _t; }
  /* c6d2c: cmhi v22.8h, v17.8h, v22.8h */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = ((c)->q[17].u16[0] > (c)->q[22].u16[0]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[1] = ((c)->q[17].u16[1] > (c)->q[22].u16[1]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[2] = ((c)->q[17].u16[2] > (c)->q[22].u16[2]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[3] = ((c)->q[17].u16[3] > (c)->q[22].u16[3]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[4] = ((c)->q[17].u16[4] > (c)->q[22].u16[4]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[5] = ((c)->q[17].u16[5] > (c)->q[22].u16[5]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[6] = ((c)->q[17].u16[6] > (c)->q[22].u16[6]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[7] = ((c)->q[17].u16[7] > (c)->q[22].u16[7]) ? (uint16_t)~(uint16_t)0 : 0;
    (c)->q[22] = _t; }
  /* c6d30: ushll2 v24.4s, v21.8h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((uint32_t)((c)->q[21].u16[4]) << 0);
    _t.u32[1] = (uint32_t)((uint32_t)((c)->q[21].u16[5]) << 0);
    _t.u32[2] = (uint32_t)((uint32_t)((c)->q[21].u16[6]) << 0);
    _t.u32[3] = (uint32_t)((uint32_t)((c)->q[21].u16[7]) << 0);
    (c)->q[24] = _t; }
  /* c6d34: ushll v21.4s, v21.4h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((uint32_t)((c)->q[21].u16[0]) << 0);
    _t.u32[1] = (uint32_t)((uint32_t)((c)->q[21].u16[1]) << 0);
    _t.u32[2] = (uint32_t)((uint32_t)((c)->q[21].u16[2]) << 0);
    _t.u32[3] = (uint32_t)((uint32_t)((c)->q[21].u16[3]) << 0);
    (c)->q[21] = _t; }
  /* c6d38: ushll2 v26.4s, v22.8h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((uint32_t)((c)->q[22].u16[4]) << 0);
    _t.u32[1] = (uint32_t)((uint32_t)((c)->q[22].u16[5]) << 0);
    _t.u32[2] = (uint32_t)((uint32_t)((c)->q[22].u16[6]) << 0);
    _t.u32[3] = (uint32_t)((uint32_t)((c)->q[22].u16[7]) << 0);
    (c)->q[26] = _t; }
  /* c6d3c: ushll v22.4s, v22.4h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((uint32_t)((c)->q[22].u16[0]) << 0);
    _t.u32[1] = (uint32_t)((uint32_t)((c)->q[22].u16[1]) << 0);
    _t.u32[2] = (uint32_t)((uint32_t)((c)->q[22].u16[2]) << 0);
    _t.u32[3] = (uint32_t)((uint32_t)((c)->q[22].u16[3]) << 0);
    (c)->q[22] = _t; }
  /* c6d40: ushll2 v30.2d, v24.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[24].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[24].u32[3]) << 0);
    (c)->q[30] = _t; }
  /* c6d44: ushll v24.2d, v24.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[24].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[24].u32[1]) << 0);
    (c)->q[24] = _t; }
  /* c6d48: ushll2 v31.2d, v21.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[21].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[21].u32[3]) << 0);
    (c)->q[31] = _t; }
  /* c6d4c: ushll v21.2d, v21.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[21].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[21].u32[1]) << 0);
    (c)->q[21] = _t; }
  /* c6d50: ushll2 v8.2d, v26.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[26].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[26].u32[3]) << 0);
    (c)->q[8] = _t; }
  /* c6d54: ushll v26.2d, v26.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[26].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[26].u32[1]) << 0);
    (c)->q[26] = _t; }
  /* c6d58: ushll2 v9.2d, v22.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[22].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[22].u32[3]) << 0);
    (c)->q[9] = _t; }
  /* c6d5c: ushll v22.2d, v22.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[22].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[22].u32[1]) << 0);
    (c)->q[22] = _t; }
  /* c6d60: and v30.16b, v30.16b, v25.16b */
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
  /* c6d64: and v24.16b, v24.16b, v25.16b */
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
  /* c6d68: and v31.16b, v31.16b, v25.16b */
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
  /* c6d6c: and v21.16b, v21.16b, v25.16b */
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
  /* c6d70: and v8.16b, v8.16b, v25.16b */
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
  /* c6d74: and v26.16b, v26.16b, v25.16b */
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
  /* c6d78: and v9.16b, v9.16b, v25.16b */
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
  /* c6d7c: and v22.16b, v22.16b, v25.16b */
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
  /* c6d80: dup v25.2d, x30 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 30));
    _t.u64[1] = (ARC_X_R(c, 30));
    (c)->q[25] = _t; }
  /* c6d84: ushl v24.2d, v24.2d, v18.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[24].u64[0], (int8_t)(c)->q[18].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[24].u64[1], (int8_t)(c)->q[18].u64[1]);
    (c)->q[24] = _t; }
  /* c6d88: ushl v30.2d, v30.2d, v16.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[30].u64[0], (int8_t)(c)->q[16].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[30].u64[1], (int8_t)(c)->q[16].u64[1]);
    (c)->q[30] = _t; }
  /* c6d8c: ushl v31.2d, v31.2d, v19.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[31].u64[0], (int8_t)(c)->q[19].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[31].u64[1], (int8_t)(c)->q[19].u64[1]);
    (c)->q[31] = _t; }
  /* c6d90: ushl v21.2d, v21.2d, v20.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[21].u64[0], (int8_t)(c)->q[20].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[21].u64[1], (int8_t)(c)->q[20].u64[1]);
    (c)->q[21] = _t; }
  /* c6d94: ushl v27.2d, v8.2d, v27.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[8].u64[0], (int8_t)(c)->q[27].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[8].u64[1], (int8_t)(c)->q[27].u64[1]);
    (c)->q[27] = _t; }
  /* c6d98: ushl v26.2d, v26.2d, v28.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[26].u64[0], (int8_t)(c)->q[28].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[26].u64[1], (int8_t)(c)->q[28].u64[1]);
    (c)->q[26] = _t; }
  /* c6d9c: ushl v22.2d, v22.2d, v23.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[22].u64[0], (int8_t)(c)->q[23].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[22].u64[1], (int8_t)(c)->q[23].u64[1]);
    (c)->q[22] = _t; }
  /* c6da0: ushl v23.2d, v9.2d, v29.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[9].u64[0], (int8_t)(c)->q[29].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[9].u64[1], (int8_t)(c)->q[29].u64[1]);
    (c)->q[23] = _t; }
  /* c6da4: add v18.2d, v18.2d, v25.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[18].u64[0] + (c)->q[25].u64[0];
    _t.u64[1] = (c)->q[18].u64[1] + (c)->q[25].u64[1];
    (c)->q[18] = _t; }
  /* c6da8: orr v3.16b, v30.16b, v3.16b */
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
  /* c6dac: orr v1.16b, v24.16b, v1.16b */
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
  /* c6db0: orr v2.16b, v31.16b, v2.16b */
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
  /* c6db4: orr v0.16b, v21.16b, v0.16b */
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
  /* c6db8: orr v7.16b, v27.16b, v7.16b */
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
  /* c6dbc: orr v5.16b, v26.16b, v5.16b */
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
  /* c6dc0: orr v6.16b, v23.16b, v6.16b */
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
  /* c6dc4: orr v4.16b, v22.16b, v4.16b */
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
  /* c6dc8: add v19.2d, v19.2d, v25.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[19].u64[0] + (c)->q[25].u64[0];
    _t.u64[1] = (c)->q[19].u64[1] + (c)->q[25].u64[1];
    (c)->q[19] = _t; }
  /* c6dcc: add v20.2d, v20.2d, v25.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[20].u64[0] + (c)->q[25].u64[0];
    _t.u64[1] = (c)->q[20].u64[1] + (c)->q[25].u64[1];
    (c)->q[20] = _t; }
  /* c6dd0: add v16.2d, v16.2d, v25.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[16].u64[0] + (c)->q[25].u64[0];
    _t.u64[1] = (c)->q[16].u64[1] + (c)->q[25].u64[1];
    (c)->q[16] = _t; }
  /* c6dd4: cbnz x0, #0xc6cf4 */
  if ((ARC_X_R(c, 0)) != 0) goto L_c6cf4;
  /* c6dd8: orr v2.16b, v6.16b, v2.16b */
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
  /* c6ddc: orr v3.16b, v7.16b, v3.16b */
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
  /* c6de0: cmp x15, x16 */
  (void)arc_sub64(c, ARC_X_R(c, 15), ARC_X_R(c, 16));
  /* c6de4: orr v0.16b, v4.16b, v0.16b */
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
  /* c6de8: orr v1.16b, v5.16b, v1.16b */
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
  /* c6dec: orr v0.16b, v0.16b, v1.16b */
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
  /* c6df0: orr v1.16b, v2.16b, v3.16b */
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
  /* c6df4: orr v0.16b, v0.16b, v1.16b */
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
  /* c6df8: ext v1.16b, v0.16b, v0.16b, #8 */
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
  /* c6dfc: orr v0.8b, v0.8b, v1.8b */
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
  /* c6e00: fmov x14, d0 */
  ARC_X_W(c, 14, ARC_DU_R(c, 0));
  /* c6e04: b.eq #0xc6f04 */
  if (ARC_COND(c, 0)) goto L_c6f04;
  /* c6e08: tst x15, #0xc */
  arc_flags_logical64(c, (uint64_t)(ARC_X_R(c, 15) & UINT64_C(12)));
  /* c6e0c: b.eq #0xc6ee0 */
  if (ARC_COND(c, 0)) goto L_c6ee0;
L_c6e10:;
  /* c6e10: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* c6e14: mov x1, x16 */
  ARC_X_W(c, 1, ARC_X_R(c, 16));
  /* c6e18: dup v4.2d, x16 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 16));
    _t.u64[1] = (ARC_X_R(c, 16));
    (c)->q[4] = _t; }
  /* c6e1c: adrp x16, #0x52000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(335872)));
  /* c6e20: dup v3.4h, w8 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = (ARC_W_R(c, 8));
    _t.u16[1] = (ARC_W_R(c, 8));
    _t.u16[2] = (ARC_W_R(c, 8));
    _t.u16[3] = (ARC_W_R(c, 8));
    (c)->q[3] = _t; }
  /* c6e24: sub x3, x12, x1, lsl #1 */
  ARC_X_W(c, 3, (ARC_X_R(c, 12) - ((uint64_t)(ARC_X_R(c, 1)) << 1)));
  /* c6e28: ldr q1, [x16, #0xc10] */
  arc_q_w(c, 1, arc_ld64((ARC_X_R(c, 16) + INT64_C(3088))), arc_ld64((ARC_X_R(c, 16) + INT64_C(3088)) + 8));
  /* c6e2c: adrp x16, #0x52000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(335872)));
  /* c6e30: ldr q5, [x16, #0xa80] */
  arc_q_w(c, 5, arc_ld64((ARC_X_R(c, 16) + INT64_C(2688))), arc_ld64((ARC_X_R(c, 16) + INT64_C(2688)) + 8));
  /* c6e34: and x16, x15, #0x7ffffffffffffffc */
  ARC_X_W(c, 16, (ARC_X_R(c, 15) & UINT64_C(9223372036854775804)));
  /* c6e38: orr v2.16b, v4.16b, v1.16b */
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
  /* c6e3c: movi v1.2d, #0000000000000000 */
  arc_v_clear(c, 1);
  /* c6e40: mov v0.d[0], x14 */
  (c)->q[0].u64[0] = (ARC_X_R(c, 14));
  /* c6e44: orr v4.16b, v4.16b, v5.16b */
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
  /* c6e48: sub x0, x12, x16, lsl #1 */
  ARC_X_W(c, 0, (ARC_X_R(c, 12) - ((uint64_t)(ARC_X_R(c, 16)) << 1)));
  /* c6e4c: sub x14, x1, x16 */
  ARC_X_W(c, 14, (ARC_X_R(c, 1) - ARC_X_R(c, 16)));
  /* c6e50: sub x1, x3, #6 */
  ARC_X_W(c, 1, (ARC_X_R(c, 3) - UINT64_C(6)));
L_c6e54:;
  /* c6e54: ldr d5, [x1], #0xfffffffffffffff8 */
  arc_du_w(c, 5, arc_ld64(ARC_X_R(c, 1)));
  ARC_X_W(c, 1, ARC_X_R(c, 1) + INT64_C(-8));
  /* c6e58: dup v6.2d, x5 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 5));
    _t.u64[1] = (ARC_X_R(c, 5));
    (c)->q[6] = _t; }
  /* c6e5c: adds x14, x14, #4 */
  ARC_X_W(c, 14, arc_add64(c, ARC_X_R(c, 14), UINT64_C(4), 0));
  /* c6e60: rev64 v5.4h, v5.4h */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = (c)->q[5].u16[3];
    _t.u16[1] = (c)->q[5].u16[2];
    _t.u16[2] = (c)->q[5].u16[1];
    _t.u16[3] = (c)->q[5].u16[0];
    (c)->q[5] = _t; }
  /* c6e64: cmhi v5.4h, v3.4h, v5.4h */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = ((c)->q[3].u16[0] > (c)->q[5].u16[0]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[1] = ((c)->q[3].u16[1] > (c)->q[5].u16[1]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[2] = ((c)->q[3].u16[2] > (c)->q[5].u16[2]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[3] = ((c)->q[3].u16[3] > (c)->q[5].u16[3]) ? (uint16_t)~(uint16_t)0 : 0;
    (c)->q[5] = _t; }
  /* c6e68: ushll v5.4s, v5.4h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((uint32_t)((c)->q[5].u16[0]) << 0);
    _t.u32[1] = (uint32_t)((uint32_t)((c)->q[5].u16[1]) << 0);
    _t.u32[2] = (uint32_t)((uint32_t)((c)->q[5].u16[2]) << 0);
    _t.u32[3] = (uint32_t)((uint32_t)((c)->q[5].u16[3]) << 0);
    (c)->q[5] = _t; }
  /* c6e6c: ushll2 v7.2d, v5.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[5].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[5].u32[3]) << 0);
    (c)->q[7] = _t; }
  /* c6e70: ushll v5.2d, v5.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[5].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[5].u32[1]) << 0);
    (c)->q[5] = _t; }
  /* c6e74: and v7.16b, v7.16b, v6.16b */
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
  /* c6e78: and v5.16b, v5.16b, v6.16b */
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
  /* c6e7c: ushl v6.2d, v7.2d, v2.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[7].u64[0], (int8_t)(c)->q[2].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[7].u64[1], (int8_t)(c)->q[2].u64[1]);
    (c)->q[6] = _t; }
  /* c6e80: dup v7.2d, x22 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 22));
    _t.u64[1] = (ARC_X_R(c, 22));
    (c)->q[7] = _t; }
  /* c6e84: ushl v5.2d, v5.2d, v4.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[5].u64[0], (int8_t)(c)->q[4].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[5].u64[1], (int8_t)(c)->q[4].u64[1]);
    (c)->q[5] = _t; }
  /* c6e88: orr v1.16b, v6.16b, v1.16b */
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
  /* c6e8c: orr v0.16b, v5.16b, v0.16b */
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
  /* c6e90: add v2.2d, v2.2d, v7.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[2].u64[0] + (c)->q[7].u64[0];
    _t.u64[1] = (c)->q[2].u64[1] + (c)->q[7].u64[1];
    (c)->q[2] = _t; }
  /* c6e94: add v4.2d, v4.2d, v7.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[4].u64[0] + (c)->q[7].u64[0];
    _t.u64[1] = (c)->q[4].u64[1] + (c)->q[7].u64[1];
    (c)->q[4] = _t; }
  /* c6e98: b.ne #0xc6e54 */
  if (ARC_COND(c, 1)) goto L_c6e54;
  /* c6e9c: orr v0.16b, v0.16b, v1.16b */
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
  /* c6ea0: cmp x15, x16 */
  (void)arc_sub64(c, ARC_X_R(c, 15), ARC_X_R(c, 16));
  /* c6ea4: ext v1.16b, v0.16b, v0.16b, #8 */
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
  /* c6ea8: orr v0.8b, v0.8b, v1.8b */
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
  /* c6eac: fmov x14, d0 */
  ARC_X_W(c, 14, ARC_DU_R(c, 0));
  /* c6eb0: b.ne #0xc6ee4 */
  if (ARC_COND(c, 1)) goto L_c6ee4;
  /* c6eb4: b #0xc6f04 */
  goto L_c6f04;
L_c6eb8:;
  /* c6eb8: add x23, x11, x14, lsl #1 */
  ARC_X_W(c, 23, (ARC_X_R(c, 11) + ((uint64_t)(ARC_X_R(c, 14)) << 1)));
  /* c6ebc: b #0xc6fd8 */
  goto L_c6fd8;
L_c6ec0:;
  /* c6ec0: ldurh w9, [x20, #-2] */
  ARC_W_W(c, 9, arc_ld16((ARC_X_R(c, 20) + INT64_C(-2))));
  /* c6ec4: cmp w9, w8, uxth */
  (void)arc_sub32(c, ARC_W_R(c, 9), ((uint64_t)(uint16_t)(ARC_W_R(c, 8))));
  /* c6ec8: b.ls #0xc70a0 */
  if (ARC_COND(c, 9)) goto L_c70a0;
  /* c6ecc: mov x23, x19 */
  ARC_X_W(c, 23, ARC_X_R(c, 19));
L_c6ed0:;
  /* c6ed0: ldrh w9, [x23, #2]! */
  { const uint64_t _a = (ARC_X_R(c, 23) + INT64_C(2));
    ARC_X_W(c, 23, ARC_X_R(c, 23) + INT64_C(2));
    ARC_W_W(c, 9, arc_ld16(_a));
  }
  /* c6ed4: cmp w9, w8, uxth */
  (void)arc_sub32(c, ARC_W_R(c, 9), ((uint64_t)(uint16_t)(ARC_W_R(c, 8))));
  /* c6ed8: b.ls #0xc6ed0 */
  if (ARC_COND(c, 9)) goto L_c6ed0;
  /* c6edc: b #0xc70c0 */
  goto L_c70c0;
L_c6ee0:;
  /* c6ee0: sub x0, x12, x16, lsl #1 */
  ARC_X_W(c, 0, (ARC_X_R(c, 12) - ((uint64_t)(ARC_X_R(c, 16)) << 1)));
L_c6ee4:;
  /* c6ee4: ldrh w1, [x0], #0xfffffffffffffffe */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(-2));
    ARC_W_W(c, 1, arc_ld16(_a));
  }
  /* c6ee8: cmp w1, w8, uxth */
  (void)arc_sub32(c, ARC_W_R(c, 1), ((uint64_t)(uint16_t)(ARC_W_R(c, 8))));
  /* c6eec: cset w1, lo */
  ARC_W_W(c, 1, (ARC_COND(c, 3) ? 1 : 0));
  /* c6ef0: lsl x1, x1, x16 */
  ARC_X_W(c, 1, ((uint64_t)(ARC_X_R(c, 1)) << ((ARC_X_R(c, 16)) & 63)));
  /* c6ef4: add x16, x16, #1 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(1)));
  /* c6ef8: cmp x15, x16 */
  (void)arc_sub64(c, ARC_X_R(c, 15), ARC_X_R(c, 16));
  /* c6efc: orr x14, x1, x14 */
  ARC_X_W(c, 14, (ARC_X_R(c, 1) | ARC_X_R(c, 14)));
  /* c6f00: b.ne #0xc6ee4 */
  if (ARC_COND(c, 1)) goto L_c6ee4;
L_c6f04:;
  /* c6f04: cbz x13, #0xc6f48 */
  if ((ARC_X_R(c, 13)) == 0) goto L_c6f48;
  /* c6f08: cbz x14, #0xc6f48 */
  if ((ARC_X_R(c, 14)) == 0) goto L_c6f48;
L_c6f0c:;
  /* c6f0c: rbit x16, x14 */
  ARC_X_W(c, 16, arc_rbit64(ARC_X_R(c, 14)));
  /* c6f10: rbit x0, x13 */
  ARC_X_W(c, 0, arc_rbit64(ARC_X_R(c, 13)));
  /* c6f14: sub x1, x14, #1 */
  ARC_X_W(c, 1, (ARC_X_R(c, 14) - UINT64_C(1)));
  /* c6f18: sub x4, x13, #1 */
  ARC_X_W(c, 4, (ARC_X_R(c, 13) - UINT64_C(1)));
  /* c6f1c: and x14, x1, x14 */
  ARC_X_W(c, 14, (ARC_X_R(c, 1) & ARC_X_R(c, 14)));
  /* c6f20: clz x16, x16 */
  ARC_X_W(c, 16, arc_clz64(ARC_X_R(c, 16)));
  /* c6f24: clz x0, x0 */
  ARC_X_W(c, 0, arc_clz64(ARC_X_R(c, 0)));
  /* c6f28: and x13, x4, x13 */
  ARC_X_W(c, 13, (ARC_X_R(c, 4) & ARC_X_R(c, 13)));
  /* c6f2c: sub x16, x12, x16, lsl #1 */
  ARC_X_W(c, 16, (ARC_X_R(c, 12) - ((uint64_t)(ARC_X_R(c, 16)) << 1)));
  /* c6f30: ldrh w5, [x11, x0, lsl #1] */
  ARC_W_W(c, 5, arc_ld16((ARC_X_R(c, 11) + ((uint64_t)(ARC_X_R(c, 0)) << 1))));
  /* c6f34: ldrh w3, [x16] */
  ARC_W_W(c, 3, arc_ld16(ARC_X_R(c, 16)));
  /* c6f38: strh w3, [x11, x0, lsl #1] */
  arc_st16((ARC_X_R(c, 11) + ((uint64_t)(ARC_X_R(c, 0)) << 1)), ARC_W_R(c, 3));
  /* c6f3c: strh w5, [x16] */
  arc_st16(ARC_X_R(c, 16), ARC_W_R(c, 5));
  /* c6f40: cbz x14, #0xc6f48 */
  if ((ARC_X_R(c, 14)) == 0) goto L_c6f48;
  /* c6f44: cbnz x13, #0xc6f0c */
  if ((ARC_X_R(c, 13)) != 0) goto L_c6f0c;
L_c6f48:;
  /* c6f48: cmp x14, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 14), UINT64_C(0));
  /* c6f4c: csel x15, x15, xzr, eq */
  ARC_X_W(c, 15, (ARC_COND(c, 0) ? (ARC_X_R(c, 15)) : ARC_X_R(c, 31)));
  /* c6f50: sub x12, x12, x15, lsl #1 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) - ((uint64_t)(ARC_X_R(c, 15)) << 1)));
  /* c6f54: cbnz x13, #0xc6f74 */
  if ((ARC_X_R(c, 13)) != 0) goto L_c6f74;
  /* c6f58: add x23, x11, x17, lsl #1 */
  ARC_X_W(c, 23, (ARC_X_R(c, 11) + ((uint64_t)(ARC_X_R(c, 17)) << 1)));
  /* c6f5c: cbnz x14, #0xc6fac */
  if ((ARC_X_R(c, 14)) != 0) goto L_c6fac;
  /* c6f60: b #0xc6fd8 */
  goto L_c6fd8;
L_c6f64:;
  /* c6f64: lsl x14, x26, x14 */
  ARC_X_W(c, 14, ((uint64_t)(ARC_X_R(c, 26)) << ((ARC_X_R(c, 14)) & 63)));
  /* c6f68: sub x12, x12, #2 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) - UINT64_C(2)));
  /* c6f6c: bic x13, x13, x14 */
  ARC_X_W(c, 13, (ARC_X_R(c, 13) & (~ARC_X_R(c, 14))));
  /* c6f70: cbz x13, #0xc6fd4 */
  if ((ARC_X_R(c, 13)) == 0) goto L_c6fd4;
L_c6f74:;
  /* c6f74: clz x14, x13 */
  ARC_X_W(c, 14, arc_clz64(ARC_X_R(c, 13)));
  /* c6f78: eor x14, x14, #0x3f */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) ^ UINT64_C(63)));
  /* c6f7c: add x15, x11, x14, lsl #1 */
  ARC_X_W(c, 15, (ARC_X_R(c, 11) + ((uint64_t)(ARC_X_R(c, 14)) << 1)));
  /* c6f80: cmp x12, x15 */
  (void)arc_sub64(c, ARC_X_R(c, 12), ARC_X_R(c, 15));
  /* c6f84: b.eq #0xc6f64 */
  if (ARC_COND(c, 0)) goto L_c6f64;
  /* c6f88: ldrh w16, [x12] */
  ARC_W_W(c, 16, arc_ld16(ARC_X_R(c, 12)));
  /* c6f8c: ldrh w17, [x15] */
  ARC_W_W(c, 17, arc_ld16(ARC_X_R(c, 15)));
  /* c6f90: strh w16, [x15] */
  arc_st16(ARC_X_R(c, 15), ARC_W_R(c, 16));
  /* c6f94: strh w17, [x12] */
  arc_st16(ARC_X_R(c, 12), ARC_W_R(c, 17));
  /* c6f98: b #0xc6f64 */
  goto L_c6f64;
L_c6f9c:;
  /* c6f9c: lsl x11, x26, x11 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 26)) << ((ARC_X_R(c, 11)) & 63)));
  /* c6fa0: add x23, x23, #2 */
  ARC_X_W(c, 23, (ARC_X_R(c, 23) + UINT64_C(2)));
  /* c6fa4: bic x14, x14, x11 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) & (~ARC_X_R(c, 11))));
  /* c6fa8: cbz x14, #0xc6fd8 */
  if ((ARC_X_R(c, 14)) == 0) goto L_c6fd8;
L_c6fac:;
  /* c6fac: clz x11, x14 */
  ARC_X_W(c, 11, arc_clz64(ARC_X_R(c, 14)));
  /* c6fb0: eor x11, x11, #0x3f */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) ^ UINT64_C(63)));
  /* c6fb4: sub x13, x12, x11, lsl #1 */
  ARC_X_W(c, 13, (ARC_X_R(c, 12) - ((uint64_t)(ARC_X_R(c, 11)) << 1)));
  /* c6fb8: cmp x23, x13 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 13));
  /* c6fbc: b.eq #0xc6f9c */
  if (ARC_COND(c, 0)) goto L_c6f9c;
  /* c6fc0: ldrh w15, [x23] */
  ARC_W_W(c, 15, arc_ld16(ARC_X_R(c, 23)));
  /* c6fc4: ldrh w16, [x13] */
  ARC_W_W(c, 16, arc_ld16(ARC_X_R(c, 13)));
  /* c6fc8: strh w15, [x13] */
  arc_st16(ARC_X_R(c, 13), ARC_W_R(c, 15));
  /* c6fcc: strh w16, [x23] */
  arc_st16(ARC_X_R(c, 23), ARC_W_R(c, 16));
  /* c6fd0: b #0xc6f9c */
  goto L_c6f9c;
L_c6fd4:;
  /* c6fd4: add x23, x12, #2 */
  ARC_X_W(c, 23, (ARC_X_R(c, 12) + UINT64_C(2)));
L_c6fd8:;
  /* c6fd8: sub x24, x23, #2 */
  ARC_X_W(c, 24, (ARC_X_R(c, 23) - UINT64_C(2)));
  /* c6fdc: cmp x19, x24 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 24));
  /* c6fe0: b.eq #0xc6fec */
  if (ARC_COND(c, 0)) goto L_c6fec;
  /* c6fe4: ldrh w11, [x24] */
  ARC_W_W(c, 11, arc_ld16(ARC_X_R(c, 24)));
  /* c6fe8: strh w11, [x19] */
  arc_st16(ARC_X_R(c, 19), ARC_W_R(c, 11));
L_c6fec:;
  /* c6fec: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* c6ff0: strh w8, [x24] */
  arc_st16(ARC_X_R(c, 24), ARC_W_R(c, 8));
  /* c6ff4: b.lo #0xc7054 */
  if (ARC_COND(c, 3)) goto L_c7054;
  /* c6ff8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* c6ffc: mov x1, x24 */
  ARC_X_W(c, 1, ARC_X_R(c, 24));
  /* c7000: mov x22, x27 */
  ARC_X_W(c, 22, ARC_X_R(c, 27));
  /* c7004: mov x28, x6 */
  ARC_X_W(c, 28, ARC_X_R(c, 6));
  /* c7008: mov x27, x2 */
  ARC_X_W(c, 27, ARC_X_R(c, 2));
  /* c700c: bl #0xd0b98 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(815120));
  fn1_d0b98(c);
  /* c7010: mov w25, w0 */
  ARC_W_W(c, 25, ARC_W_R(c, 0));
  /* c7014: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* c7018: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* c701c: bl #0xd0b98 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(815136));
  fn1_d0b98(c);
  /* c7020: tbnz w0, #0, #0xc7134 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) != 0) goto L_c7134;
  /* c7024: ldp q12, q11, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_q_w(c, 12, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 11, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c7028: mov x2, x27 */
  ARC_X_W(c, 2, ARC_X_R(c, 27));
  /* c702c: ldp q14, q13, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_q_w(c, 14, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 13, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c7030: mov x6, x28 */
  ARC_X_W(c, 6, ARC_X_R(c, 28));
  /* c7034: ldr q15, [sp] */
  arc_q_w(c, 15, arc_ld64((c)->sp), arc_ld64((c)->sp + 8));
  /* c7038: mov x27, x22 */
  ARC_X_W(c, 27, ARC_X_R(c, 22));
  /* c703c: mov x4, #-0x80 */
  ARC_X_W(c, 4, UINT64_C(18446744073709551488));
  /* c7040: mov w5, #1 */
  ARC_W_W(c, 5, UINT64_C(1));
  /* c7044: mov w22, #4 */
  ARC_W_W(c, 22, UINT64_C(4));
  /* c7048: mov w28, #8 */
  ARC_W_W(c, 28, UINT64_C(8));
  /* c704c: mov w30, #0x10 */
  ARC_W_W(c, 30, UINT64_C(16));
  /* c7050: tbnz w25, #0, #0xc6180 */
  if (((ARC_W_R(c, 25)) >> 0 & 1) != 0) goto L_c6180;
L_c7054:;
  /* c7054: ldr w8, [sp, #0x5c] */
  ARC_W_W(c, 8, arc_ld32(((c)->sp + INT64_C(92))));
  /* c7058: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* c705c: mov x1, x24 */
  ARC_X_W(c, 1, ARC_X_R(c, 24));
  /* c7060: mov x19, x2 */
  ARC_X_W(c, 19, ARC_X_R(c, 2));
  /* c7064: mov x24, x6 */
  ARC_X_W(c, 24, ARC_X_R(c, 6));
  /* c7068: and w3, w8, #1 */
  ARC_W_W(c, 3, (ARC_W_R(c, 8) & UINT64_C(1)));
  /* c706c: bl #0xc5fc4 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(815216));
  fn1_c5fc4(c);
  /* c7070: ldp q15, q14, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_q_w(c, 15, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 14, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c7074: mov w30, #0x10 */
  ARC_W_W(c, 30, UINT64_C(16));
  /* c7078: ldp q13, q12, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_q_w(c, 13, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 12, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c707c: mov w28, #8 */
  ARC_W_W(c, 28, UINT64_C(8));
  /* c7080: ldr q11, [sp, #0x40] */
  arc_q_w(c, 11, arc_ld64(((c)->sp + INT64_C(64))), arc_ld64(((c)->sp + INT64_C(64)) + 8));
  /* c7084: mov w22, #4 */
  ARC_W_W(c, 22, UINT64_C(4));
  /* c7088: mov w5, #1 */
  ARC_W_W(c, 5, UINT64_C(1));
  /* c708c: mov x4, #-0x80 */
  ARC_X_W(c, 4, UINT64_C(18446744073709551488));
  /* c7090: mov x6, x24 */
  ARC_X_W(c, 6, ARC_X_R(c, 24));
  /* c7094: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* c7098: str wzr, [sp, #0x5c] */
  arc_st32(((c)->sp + INT64_C(92)), ARC_W_R(c, 31));
  /* c709c: b #0xc6180 */
  goto L_c6180;
L_c70a0:;
  /* c70a0: add x9, x19, #2 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + UINT64_C(2)));
L_c70a4:;
  /* c70a4: mov x23, x9 */
  ARC_X_W(c, 23, ARC_X_R(c, 9));
  /* c70a8: cmp x9, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 20));
  /* c70ac: b.hs #0xc70c0 */
  if (ARC_COND(c, 2)) goto L_c70c0;
  /* c70b0: mov x9, x23 */
  ARC_X_W(c, 9, ARC_X_R(c, 23));
  /* c70b4: ldrh w10, [x9], #2 */
  { const uint64_t _a = ARC_X_R(c, 9);
    ARC_X_W(c, 9, ARC_X_R(c, 9) + INT64_C(2));
    ARC_W_W(c, 10, arc_ld16(_a));
  }
  /* c70b8: cmp w10, w8, uxth */
  (void)arc_sub32(c, ARC_W_R(c, 10), ((uint64_t)(uint16_t)(ARC_W_R(c, 8))));
  /* c70bc: b.ls #0xc70a4 */
  if (ARC_COND(c, 9)) goto L_c70a4;
L_c70c0:;
  /* c70c0: cmp x23, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 20));
  /* c70c4: mov x9, x20 */
  ARC_X_W(c, 9, ARC_X_R(c, 20));
  /* c70c8: b.hs #0xc70dc */
  if (ARC_COND(c, 2)) goto L_c70dc;
  /* c70cc: mov x9, x20 */
  ARC_X_W(c, 9, ARC_X_R(c, 20));
L_c70d0:;
  /* c70d0: ldrh w10, [x9, #-2]! */
  { const uint64_t _a = (ARC_X_R(c, 9) + INT64_C(-2));
    ARC_X_W(c, 9, ARC_X_R(c, 9) + INT64_C(-2));
    ARC_W_W(c, 10, arc_ld16(_a));
  }
  /* c70d4: cmp w10, w8, uxth */
  (void)arc_sub32(c, ARC_W_R(c, 10), ((uint64_t)(uint16_t)(ARC_W_R(c, 8))));
  /* c70d8: b.hi #0xc70d0 */
  if (ARC_COND(c, 8)) goto L_c70d0;
L_c70dc:;
  /* c70dc: cmp x23, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 9));
  /* c70e0: b.hs #0xc7114 */
  if (ARC_COND(c, 2)) goto L_c7114;
  /* c70e4: ldrh w10, [x23] */
  ARC_W_W(c, 10, arc_ld16(ARC_X_R(c, 23)));
  /* c70e8: ldrh w11, [x9] */
  ARC_W_W(c, 11, arc_ld16(ARC_X_R(c, 9)));
L_c70ec:;
  /* c70ec: strh w11, [x23] */
  arc_st16(ARC_X_R(c, 23), ARC_W_R(c, 11));
  /* c70f0: strh w10, [x9] */
  arc_st16(ARC_X_R(c, 9), ARC_W_R(c, 10));
L_c70f4:;
  /* c70f4: ldrh w10, [x23, #2]! */
  { const uint64_t _a = (ARC_X_R(c, 23) + INT64_C(2));
    ARC_X_W(c, 23, ARC_X_R(c, 23) + INT64_C(2));
    ARC_W_W(c, 10, arc_ld16(_a));
  }
  /* c70f8: cmp w10, w8, uxth */
  (void)arc_sub32(c, ARC_W_R(c, 10), ((uint64_t)(uint16_t)(ARC_W_R(c, 8))));
  /* c70fc: b.ls #0xc70f4 */
  if (ARC_COND(c, 9)) goto L_c70f4;
L_c7100:;
  /* c7100: ldrh w11, [x9, #-2]! */
  { const uint64_t _a = (ARC_X_R(c, 9) + INT64_C(-2));
    ARC_X_W(c, 9, ARC_X_R(c, 9) + INT64_C(-2));
    ARC_W_W(c, 11, arc_ld16(_a));
  }
  /* c7104: cmp w11, w8, uxth */
  (void)arc_sub32(c, ARC_W_R(c, 11), ((uint64_t)(uint16_t)(ARC_W_R(c, 8))));
  /* c7108: b.hi #0xc7100 */
  if (ARC_COND(c, 8)) goto L_c7100;
  /* c710c: cmp x23, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 9));
  /* c7110: b.lo #0xc70ec */
  if (ARC_COND(c, 3)) goto L_c70ec;
L_c7114:;
  /* c7114: sub x9, x23, #2 */
  ARC_X_W(c, 9, (ARC_X_R(c, 23) - UINT64_C(2)));
  /* c7118: cmp x19, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 9));
  /* c711c: b.eq #0xc7128 */
  if (ARC_COND(c, 0)) goto L_c7128;
  /* c7120: ldrh w10, [x9] */
  ARC_W_W(c, 10, arc_ld16(ARC_X_R(c, 9)));
  /* c7124: strh w10, [x19] */
  arc_st16(ARC_X_R(c, 19), ARC_W_R(c, 10));
L_c7128:;
  /* c7128: str wzr, [sp, #0x5c] */
  arc_st32(((c)->sp + INT64_C(92)), ARC_W_R(c, 31));
  /* c712c: strh w8, [x9] */
  arc_st16(ARC_X_R(c, 9), ARC_W_R(c, 8));
  /* c7130: b #0xc6180 */
  goto L_c6180;
L_c7134:;
  /* c7134: ldp q12, q11, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_q_w(c, 12, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 11, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c7138: mov x20, x24 */
  ARC_X_W(c, 20, ARC_X_R(c, 24));
  /* c713c: ldp q14, q13, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_q_w(c, 14, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 13, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c7140: mov x2, x27 */
  ARC_X_W(c, 2, ARC_X_R(c, 27));
  /* c7144: ldr q15, [sp] */
  arc_q_w(c, 15, arc_ld64((c)->sp), arc_ld64((c)->sp + 8));
  /* c7148: mov x6, x28 */
  ARC_X_W(c, 6, ARC_X_R(c, 28));
  /* c714c: mov x27, x22 */
  ARC_X_W(c, 27, ARC_X_R(c, 22));
  /* c7150: mov x4, #-0x80 */
  ARC_X_W(c, 4, UINT64_C(18446744073709551488));
  /* c7154: mov w5, #1 */
  ARC_W_W(c, 5, UINT64_C(1));
  /* c7158: mov w22, #4 */
  ARC_W_W(c, 22, UINT64_C(4));
  /* c715c: mov w28, #8 */
  ARC_W_W(c, 28, UINT64_C(8));
  /* c7160: mov w30, #0x10 */
  ARC_W_W(c, 30, UINT64_C(16));
  /* c7164: tbz w25, #0, #0xc617c */
  if (((ARC_W_R(c, 25)) >> 0 & 1) == 0) goto L_c617c;
  /* c7168: b #0xc7328 */
  goto L_c7328;
L_c716c:;
  /* c716c: ldrh w8, [x19] */
  ARC_W_W(c, 8, arc_ld16(ARC_X_R(c, 19)));
  /* c7170: ldrh w9, [x19, #2] */
  ARC_W_W(c, 9, arc_ld16((ARC_X_R(c, 19) + INT64_C(2))));
  /* c7174: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* c7178: csel w10, w8, w9, hi */
  ARC_W_W(c, 10, (ARC_COND(c, 8) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* c717c: csel w8, w8, w9, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* c7180: strh w10, [x19, #2] */
  arc_st16((ARC_X_R(c, 19) + INT64_C(2)), ARC_W_R(c, 10));
  /* c7184: strh w8, [x19] */
  arc_st16(ARC_X_R(c, 19), ARC_W_R(c, 8));
  /* c7188: ldrh w8, [x19, #6] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 19) + INT64_C(6))));
  /* c718c: ldurh w9, [x20, #-2] */
  ARC_W_W(c, 9, arc_ld16((ARC_X_R(c, 20) + INT64_C(-2))));
  /* c7190: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* c7194: csel w10, w8, w9, hi */
  ARC_W_W(c, 10, (ARC_COND(c, 8) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* c7198: csel w8, w8, w9, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* c719c: sturh w10, [x20, #-2] */
  arc_st16((ARC_X_R(c, 20) + INT64_C(-2)), ARC_W_R(c, 10));
  /* c71a0: strh w8, [x19, #6] */
  arc_st16((ARC_X_R(c, 19) + INT64_C(6)), ARC_W_R(c, 8));
  /* c71a4: ldrh w9, [x19, #4] */
  ARC_W_W(c, 9, arc_ld16((ARC_X_R(c, 19) + INT64_C(4))));
  /* c71a8: ldurh w8, [x20, #-2] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 20) + INT64_C(-2))));
  /* c71ac: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* c71b0: csel w10, w8, w9, hi */
  ARC_W_W(c, 10, (ARC_COND(c, 8) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* c71b4: csel w8, w8, w9, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* c71b8: sturh w10, [x20, #-2] */
  arc_st16((ARC_X_R(c, 20) + INT64_C(-2)), ARC_W_R(c, 10));
  /* c71bc: ldrh w10, [x19, #6] */
  ARC_W_W(c, 10, arc_ld16((ARC_X_R(c, 19) + INT64_C(6))));
  /* c71c0: ldrh w9, [x19, #4] */
  ARC_W_W(c, 9, arc_ld16((ARC_X_R(c, 19) + INT64_C(4))));
  /* c71c4: cmp w8, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 10));
  /* c71c8: csel w9, w9, w10, lo */
  ARC_W_W(c, 9, (ARC_COND(c, 3) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 10)));
  /* c71cc: csel w8, w8, w10, hi */
  ARC_W_W(c, 8, (ARC_COND(c, 8) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 10)));
  /* c71d0: strh w9, [x19, #4] */
  arc_st16((ARC_X_R(c, 19) + INT64_C(4)), ARC_W_R(c, 9));
  /* c71d4: strh w8, [x19, #6] */
  arc_st16((ARC_X_R(c, 19) + INT64_C(6)), ARC_W_R(c, 8));
  /* c71d8: ldrh w8, [x19, #2] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 19) + INT64_C(2))));
  /* c71dc: ldurh w9, [x20, #-2] */
  ARC_W_W(c, 9, arc_ld16((ARC_X_R(c, 20) + INT64_C(-2))));
  /* c71e0: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* c71e4: csel w10, w8, w9, hi */
  ARC_W_W(c, 10, (ARC_COND(c, 8) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* c71e8: csel w8, w8, w9, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* c71ec: sturh w10, [x20, #-2] */
  arc_st16((ARC_X_R(c, 20) + INT64_C(-2)), ARC_W_R(c, 10));
  /* c71f0: ldrh w10, [x19, #6] */
  ARC_W_W(c, 10, arc_ld16((ARC_X_R(c, 19) + INT64_C(6))));
  /* c71f4: ldrh w11, [x19] */
  ARC_W_W(c, 11, arc_ld16(ARC_X_R(c, 19)));
  /* c71f8: ldrh w9, [x19, #4] */
  ARC_W_W(c, 9, arc_ld16((ARC_X_R(c, 19) + INT64_C(4))));
  /* c71fc: cmp w10, w11 */
  (void)arc_sub32(c, ARC_W_R(c, 10), ARC_W_R(c, 11));
  /* c7200: csel w12, w10, w11, lo */
  ARC_W_W(c, 12, (ARC_COND(c, 3) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 11)));
  /* c7204: csel w10, w10, w11, hi */
  ARC_W_W(c, 10, (ARC_COND(c, 8) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 11)));
  /* c7208: cmp w12, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 12), ARC_W_R(c, 9));
  /* c720c: csel w11, w11, w9, lo */
  ARC_W_W(c, 11, (ARC_COND(c, 3) ? (ARC_W_R(c, 11)) : ARC_W_R(c, 9)));
  /* c7210: csel w9, w12, w9, hi */
  ARC_W_W(c, 9, (ARC_COND(c, 8) ? (ARC_W_R(c, 12)) : ARC_W_R(c, 9)));
  /* c7214: cmp w10, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 10), ARC_W_R(c, 8));
  /* c7218: csel w12, w10, w8, lo */
  ARC_W_W(c, 12, (ARC_COND(c, 3) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 8)));
  /* c721c: csel w10, w10, w8, hi */
  ARC_W_W(c, 10, (ARC_COND(c, 8) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 8)));
  /* c7220: strh w11, [x19] */
  arc_st16(ARC_X_R(c, 19), ARC_W_R(c, 11));
  /* c7224: cmp w12, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 12), ARC_W_R(c, 9));
  /* c7228: strh w10, [x19, #6] */
  arc_st16((ARC_X_R(c, 19) + INT64_C(6)), ARC_W_R(c, 10));
  /* c722c: csel w8, w8, w9, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* c7230: csel w9, w12, w9, hi */
  ARC_W_W(c, 9, (ARC_COND(c, 8) ? (ARC_W_R(c, 12)) : ARC_W_R(c, 9)));
  /* c7234: strh w8, [x19, #2] */
  arc_st16((ARC_X_R(c, 19) + INT64_C(2)), ARC_W_R(c, 8));
  /* c7238: strh w9, [x19, #4] */
  arc_st16((ARC_X_R(c, 19) + INT64_C(4)), ARC_W_R(c, 9));
  /* c723c: b #0xc7328 */
  goto L_c7328;
L_c7240:;
  /* c7240: ldurh w8, [x20, #-2] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 20) + INT64_C(-2))));
  /* c7244: ldrh w9, [x19] */
  ARC_W_W(c, 9, arc_ld16(ARC_X_R(c, 19)));
  /* c7248: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* c724c: b.hs #0xc7328 */
  if (ARC_COND(c, 2)) goto L_c7328;
  /* c7250: strh w8, [x19] */
  arc_st16(ARC_X_R(c, 19), ARC_W_R(c, 8));
  /* c7254: sturh w9, [x20, #-2] */
  arc_st16((ARC_X_R(c, 20) + INT64_C(-2)), ARC_W_R(c, 9));
  /* c7258: b #0xc7328 */
  goto L_c7328;
L_c725c:;
  /* c725c: ldrh w8, [x19, #2] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 19) + INT64_C(2))));
  /* c7260: ldurh w9, [x20, #-2] */
  ARC_W_W(c, 9, arc_ld16((ARC_X_R(c, 20) + INT64_C(-2))));
  /* c7264: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* c7268: csel w10, w8, w9, hi */
  ARC_W_W(c, 10, (ARC_COND(c, 8) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* c726c: csel w8, w8, w9, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* c7270: sturh w10, [x20, #-2] */
  arc_st16((ARC_X_R(c, 20) + INT64_C(-2)), ARC_W_R(c, 10));
  /* c7274: strh w8, [x19, #2] */
  arc_st16((ARC_X_R(c, 19) + INT64_C(2)), ARC_W_R(c, 8));
  /* c7278: ldrh w9, [x19] */
  ARC_W_W(c, 9, arc_ld16(ARC_X_R(c, 19)));
  /* c727c: ldurh w8, [x20, #-2] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 20) + INT64_C(-2))));
  /* c7280: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* c7284: csel w10, w8, w9, hi */
  ARC_W_W(c, 10, (ARC_COND(c, 8) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* c7288: csel w8, w8, w9, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* c728c: sturh w10, [x20, #-2] */
  arc_st16((ARC_X_R(c, 20) + INT64_C(-2)), ARC_W_R(c, 10));
  /* c7290: ldrh w10, [x19, #2] */
  ARC_W_W(c, 10, arc_ld16((ARC_X_R(c, 19) + INT64_C(2))));
  /* c7294: ldrh w9, [x19] */
  ARC_W_W(c, 9, arc_ld16(ARC_X_R(c, 19)));
  /* c7298: cmp w8, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 10));
  /* c729c: csel w9, w9, w10, lo */
  ARC_W_W(c, 9, (ARC_COND(c, 3) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 10)));
  /* c72a0: csel w8, w8, w10, hi */
  ARC_W_W(c, 8, (ARC_COND(c, 8) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 10)));
  /* c72a4: strh w9, [x19] */
  arc_st16(ARC_X_R(c, 19), ARC_W_R(c, 9));
  /* c72a8: b #0xc7324 */
  goto L_c7324;
L_c72ac:;
  /* c72ac: ldrh w8, [x19] */
  ARC_W_W(c, 8, arc_ld16(ARC_X_R(c, 19)));
  /* c72b0: ldrh w9, [x19, #4] */
  ARC_W_W(c, 9, arc_ld16((ARC_X_R(c, 19) + INT64_C(4))));
  /* c72b4: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* c72b8: csel w10, w8, w9, hi */
  ARC_W_W(c, 10, (ARC_COND(c, 8) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* c72bc: csel w8, w8, w9, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* c72c0: strh w10, [x19, #4] */
  arc_st16((ARC_X_R(c, 19) + INT64_C(4)), ARC_W_R(c, 10));
  /* c72c4: strh w8, [x19] */
  arc_st16(ARC_X_R(c, 19), ARC_W_R(c, 8));
  /* c72c8: ldrh w8, [x19, #2] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 19) + INT64_C(2))));
  /* c72cc: ldurh w9, [x20, #-2] */
  ARC_W_W(c, 9, arc_ld16((ARC_X_R(c, 20) + INT64_C(-2))));
  /* c72d0: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* c72d4: csel w10, w8, w9, hi */
  ARC_W_W(c, 10, (ARC_COND(c, 8) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* c72d8: csel w8, w8, w9, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* c72dc: sturh w10, [x20, #-2] */
  arc_st16((ARC_X_R(c, 20) + INT64_C(-2)), ARC_W_R(c, 10));
  /* c72e0: ldrh w10, [x19] */
  ARC_W_W(c, 10, arc_ld16(ARC_X_R(c, 19)));
  /* c72e4: cmp w10, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 10), ARC_W_R(c, 8));
  /* c72e8: csel w9, w10, w8, hi */
  ARC_W_W(c, 9, (ARC_COND(c, 8) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 8)));
  /* c72ec: csel w8, w10, w8, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 8)));
  /* c72f0: strh w9, [x19, #2] */
  arc_st16((ARC_X_R(c, 19) + INT64_C(2)), ARC_W_R(c, 9));
  /* c72f4: strh w8, [x19] */
  arc_st16(ARC_X_R(c, 19), ARC_W_R(c, 8));
  /* c72f8: ldrh w8, [x19, #4] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 19) + INT64_C(4))));
  /* c72fc: ldurh w9, [x20, #-2] */
  ARC_W_W(c, 9, arc_ld16((ARC_X_R(c, 20) + INT64_C(-2))));
  /* c7300: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* c7304: csel w10, w8, w9, hi */
  ARC_W_W(c, 10, (ARC_COND(c, 8) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* c7308: csel w8, w8, w9, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* c730c: sturh w10, [x20, #-2] */
  arc_st16((ARC_X_R(c, 20) + INT64_C(-2)), ARC_W_R(c, 10));
  /* c7310: ldrh w10, [x19, #2] */
  ARC_W_W(c, 10, arc_ld16((ARC_X_R(c, 19) + INT64_C(2))));
  /* c7314: cmp w10, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 10), ARC_W_R(c, 8));
  /* c7318: csel w9, w10, w8, hi */
  ARC_W_W(c, 9, (ARC_COND(c, 8) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 8)));
  /* c731c: csel w8, w10, w8, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 8)));
  /* c7320: strh w9, [x19, #4] */
  arc_st16((ARC_X_R(c, 19) + INT64_C(4)), ARC_W_R(c, 9));
L_c7324:;
  /* c7324: strh w8, [x19, #2] */
  arc_st16((ARC_X_R(c, 19) + INT64_C(2)), ARC_W_R(c, 8));
L_c7328:;
  /* c7328: add sp, sp, #0x1f0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(496)));
  /* c732c: ldp x20, x19, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* c7330: ldp x22, x21, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* c7334: ldp x24, x23, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* c7338: ldp x26, x25, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* c733c: ldp x28, x27, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* c7340: ldp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* c7344: ldp d9, d8, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_du_w(c, 9, arc_ld64(_pa));
    arc_du_w(c, 8, arc_ld64((_pa + 8)));
  }
  /* c7348: ldp d11, d10, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_du_w(c, 11, arc_ld64(_pa));
    arc_du_w(c, 10, arc_ld64((_pa + 8)));
  }
  /* c734c: ldp d13, d12, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_du_w(c, 13, arc_ld64(_pa));
    arc_du_w(c, 12, arc_ld64((_pa + 8)));
  }
  /* c7350: ldp d15, d14, [sp], #0xa0 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(160);
    arc_du_w(c, 15, arc_ld64(_pa));
    arc_du_w(c, 14, arc_ld64((_pa + 8)));
  }
  /* c7354: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* c7358: ret  */
  return;
L_c735c:;
  /* c735c: cmp x19, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 20));
  /* c7360: add x9, x19, #2 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + UINT64_C(2)));
  /* c7364: ldr w10, [sp, #0x5c] */
  ARC_W_W(c, 10, arc_ld32(((c)->sp + INT64_C(92))));
  /* c7368: ccmp x9, x20, #4, ne */
  if (ARC_COND(c, 1)) { (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 20)); }
  else { (c)->nf = 0; (c)->zf = 1;
          (c)->cf = 0; (c)->vf = 0; }
  /* c736c: cset w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? 1 : 0));
  /* c7370: tbz w10, #0, #0xc75b0 */
  if (((ARC_W_R(c, 10)) >> 0 & 1) == 0) goto L_c75b0;
  /* c7374: tbnz w8, #0, #0xc7328 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_c7328;
  /* c7378: mov w8, #2 */
  ARC_W_W(c, 8, UINT64_C(2));
  /* c737c: mov x10, x19 */
  ARC_X_W(c, 10, ARC_X_R(c, 19));
  /* c7380: b #0xc739c */
  goto L_c739c;
L_c7384:;
  /* c7384: mov x9, x19 */
  ARC_X_W(c, 9, ARC_X_R(c, 19));
L_c7388:;
  /* c7388: strh w11, [x9] */
  arc_st16(ARC_X_R(c, 9), ARC_W_R(c, 11));
L_c738c:;
  /* c738c: add x9, x10, #2 */
  ARC_X_W(c, 9, (ARC_X_R(c, 10) + UINT64_C(2)));
  /* c7390: add x8, x8, #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2)));
  /* c7394: cmp x9, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 20));
  /* c7398: b.eq #0xc7328 */
  if (ARC_COND(c, 0)) goto L_c7328;
L_c739c:;
  /* c739c: ldrh w11, [x10, #2] */
  ARC_W_W(c, 11, arc_ld16((ARC_X_R(c, 10) + INT64_C(2))));
  /* c73a0: ldrh w12, [x10] */
  ARC_W_W(c, 12, arc_ld16(ARC_X_R(c, 10)));
  /* c73a4: mov x10, x9 */
  ARC_X_W(c, 10, ARC_X_R(c, 9));
  /* c73a8: cmp w11, w12 */
  (void)arc_sub32(c, ARC_W_R(c, 11), ARC_W_R(c, 12));
  /* c73ac: b.hs #0xc738c */
  if (ARC_COND(c, 2)) goto L_c738c;
  /* c73b0: mov x13, x8 */
  ARC_X_W(c, 13, ARC_X_R(c, 8));
L_c73b4:;
  /* c73b4: subs x9, x13, #2 */
  ARC_X_W(c, 9, arc_sub64(c, ARC_X_R(c, 13), UINT64_C(2)));
  /* c73b8: strh w12, [x19, x13] */
  arc_st16((ARC_X_R(c, 19) + ARC_X_R(c, 13)), ARC_W_R(c, 12));
  /* c73bc: b.eq #0xc7384 */
  if (ARC_COND(c, 0)) goto L_c7384;
  /* c73c0: add x12, x19, x13 */
  ARC_X_W(c, 12, (ARC_X_R(c, 19) + ARC_X_R(c, 13)));
  /* c73c4: mov x13, x9 */
  ARC_X_W(c, 13, ARC_X_R(c, 9));
  /* c73c8: ldurh w12, [x12, #-4] */
  ARC_W_W(c, 12, arc_ld16((ARC_X_R(c, 12) + INT64_C(-4))));
  /* c73cc: cmp w11, w12 */
  (void)arc_sub32(c, ARC_W_R(c, 11), ARC_W_R(c, 12));
  /* c73d0: b.lo #0xc73b4 */
  if (ARC_COND(c, 3)) goto L_c73b4;
  /* c73d4: add x9, x19, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + ARC_X_R(c, 9)));
  /* c73d8: b #0xc7388 */
  goto L_c7388;
L_c73dc:;
  /* c73dc: cmp x19, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 20));
  /* c73e0: b.eq #0xc7328 */
  if (ARC_COND(c, 0)) goto L_c7328;
  /* c73e4: lsr x9, x9, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(1)) & 63)));
  /* c73e8: mov x10, x9 */
  ARC_X_W(c, 10, ARC_X_R(c, 9));
  /* c73ec: b #0xc7400 */
  goto L_c7400;
L_c73f0:;
  /* c73f0: strh w13, [x14] */
  arc_st16(ARC_X_R(c, 14), ARC_W_R(c, 13));
L_c73f4:;
  /* c73f4: cmp x10, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 10), UINT64_C(0));
  /* c73f8: sub x10, x10, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) - UINT64_C(1)));
  /* c73fc: b.le #0xc74d0 */
  if (ARC_COND(c, 13)) goto L_c74d0;
L_c7400:;
  /* c7400: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* c7404: b.lo #0xc73f4 */
  if (ARC_COND(c, 3)) goto L_c73f4;
  /* c7408: mov w12, #1 */
  ARC_W_W(c, 12, UINT64_C(1));
  /* c740c: lsl x11, x10, #1 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* c7410: bfi x12, x10, #1, #0x3e */
  ARC_X_W(c, 12, (((uint64_t)(ARC_X_R(c, 12)) & UINT64_C(9223372036854775809)) | ((((uint64_t)(ARC_X_R(c, 10))) & UINT64_C(4611686018427387903)) << 1)));
  /* c7414: add x13, x11, #2 */
  ARC_X_W(c, 13, (ARC_X_R(c, 11) + UINT64_C(2)));
  /* c7418: add x11, x19, x12, lsl #1 */
  ARC_X_W(c, 11, (ARC_X_R(c, 19) + ((uint64_t)(ARC_X_R(c, 12)) << 1)));
  /* c741c: cmp x13, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 13), ARC_X_R(c, 8));
  /* c7420: b.ge #0xc7444 */
  if (ARC_COND(c, 10)) goto L_c7444;
  /* c7424: mov x14, x11 */
  ARC_X_W(c, 14, ARC_X_R(c, 11));
  /* c7428: ldrh w15, [x11] */
  ARC_W_W(c, 15, arc_ld16(ARC_X_R(c, 11)));
  /* c742c: ldrh w16, [x14, #2]! */
  { const uint64_t _a = (ARC_X_R(c, 14) + INT64_C(2));
    ARC_X_W(c, 14, ARC_X_R(c, 14) + INT64_C(2));
    ARC_W_W(c, 16, arc_ld16(_a));
  }
  /* c7430: cmp w15, w16 */
  (void)arc_sub32(c, ARC_W_R(c, 15), ARC_W_R(c, 16));
  /* c7434: csel w15, w15, w16, hi */
  ARC_W_W(c, 15, (ARC_COND(c, 8) ? (ARC_W_R(c, 15)) : ARC_W_R(c, 16)));
  /* c7438: csel x11, x14, x11, lo */
  ARC_X_W(c, 11, (ARC_COND(c, 3) ? (ARC_X_R(c, 14)) : ARC_X_R(c, 11)));
  /* c743c: csel x12, x13, x12, lo */
  ARC_X_W(c, 12, (ARC_COND(c, 3) ? (ARC_X_R(c, 13)) : ARC_X_R(c, 12)));
  /* c7440: b #0xc7448 */
  goto L_c7448;
L_c7444:;
  /* c7444: ldrh w15, [x11] */
  ARC_W_W(c, 15, arc_ld16(ARC_X_R(c, 11)));
L_c7448:;
  /* c7448: add x14, x19, x10, lsl #1 */
  ARC_X_W(c, 14, (ARC_X_R(c, 19) + ((uint64_t)(ARC_X_R(c, 10)) << 1)));
  /* c744c: ldrh w13, [x14] */
  ARC_W_W(c, 13, arc_ld16(ARC_X_R(c, 14)));
  /* c7450: cmp w15, w13 */
  (void)arc_sub32(c, ARC_W_R(c, 15), ARC_W_R(c, 13));
  /* c7454: b.hs #0xc7480 */
  if (ARC_COND(c, 2)) goto L_c7480;
  /* c7458: b #0xc73f4 */
  goto L_c73f4;
L_c745c:;
  /* c745c: mov x17, x11 */
  ARC_X_W(c, 17, ARC_X_R(c, 11));
  /* c7460: ldrh w15, [x11] */
  ARC_W_W(c, 15, arc_ld16(ARC_X_R(c, 11)));
  /* c7464: ldrh w0, [x17, #2]! */
  { const uint64_t _a = (ARC_X_R(c, 17) + INT64_C(2));
    ARC_X_W(c, 17, ARC_X_R(c, 17) + INT64_C(2));
    ARC_W_W(c, 0, arc_ld16(_a));
  }
  /* c7468: cmp w15, w0 */
  (void)arc_sub32(c, ARC_W_R(c, 15), ARC_W_R(c, 0));
  /* c746c: csel w15, w15, w0, hi */
  ARC_W_W(c, 15, (ARC_COND(c, 8) ? (ARC_W_R(c, 15)) : ARC_W_R(c, 0)));
  /* c7470: csel x11, x17, x11, lo */
  ARC_X_W(c, 11, (ARC_COND(c, 3) ? (ARC_X_R(c, 17)) : ARC_X_R(c, 11)));
  /* c7474: csel x12, x12, x16, lo */
  ARC_X_W(c, 12, (ARC_COND(c, 3) ? (ARC_X_R(c, 12)) : ARC_X_R(c, 16)));
  /* c7478: cmp w15, w13 */
  (void)arc_sub32(c, ARC_W_R(c, 15), ARC_W_R(c, 13));
  /* c747c: b.lo #0xc73f0 */
  if (ARC_COND(c, 3)) goto L_c73f0;
L_c7480:;
  /* c7480: cmp x9, x12 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 12));
  /* c7484: strh w15, [x14] */
  arc_st16(ARC_X_R(c, 14), ARC_W_R(c, 15));
  /* c7488: mov x14, x11 */
  ARC_X_W(c, 14, ARC_X_R(c, 11));
  /* c748c: b.lt #0xc73f0 */
  if (ARC_COND(c, 11)) goto L_c73f0;
  /* c7490: mov w16, #1 */
  ARC_W_W(c, 16, UINT64_C(1));
  /* c7494: lsl x11, x12, #1 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 12)) << ((UINT64_C(1)) & 63)));
  /* c7498: bfi x16, x12, #1, #0x3e */
  ARC_X_W(c, 16, (((uint64_t)(ARC_X_R(c, 16)) & UINT64_C(9223372036854775809)) | ((((uint64_t)(ARC_X_R(c, 12))) & UINT64_C(4611686018427387903)) << 1)));
  /* c749c: add x12, x11, #2 */
  ARC_X_W(c, 12, (ARC_X_R(c, 11) + UINT64_C(2)));
  /* c74a0: add x11, x19, x16, lsl #1 */
  ARC_X_W(c, 11, (ARC_X_R(c, 19) + ((uint64_t)(ARC_X_R(c, 16)) << 1)));
  /* c74a4: cmp x12, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 12), ARC_X_R(c, 8));
  /* c74a8: b.lt #0xc745c */
  if (ARC_COND(c, 11)) goto L_c745c;
  /* c74ac: ldrh w15, [x11] */
  ARC_W_W(c, 15, arc_ld16(ARC_X_R(c, 11)));
  /* c74b0: mov x12, x16 */
  ARC_X_W(c, 12, ARC_X_R(c, 16));
  /* c74b4: cmp w15, w13 */
  (void)arc_sub32(c, ARC_W_R(c, 15), ARC_W_R(c, 13));
  /* c74b8: b.hs #0xc7480 */
  if (ARC_COND(c, 2)) goto L_c7480;
  /* c74bc: b #0xc73f0 */
  goto L_c73f0;
L_c74c0:;
  /* c74c0: strh w10, [x9] */
  arc_st16(ARC_X_R(c, 9), ARC_W_R(c, 10));
L_c74c4:;
  /* c74c4: cmp x8, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(2));
  /* c74c8: sub x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) - UINT64_C(1)));
  /* c74cc: b.le #0xc7328 */
  if (ARC_COND(c, 13)) goto L_c7328;
L_c74d0:;
  /* c74d0: sub x9, x8, #2 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(2)));
  /* c74d4: ldrh w10, [x19] */
  ARC_W_W(c, 10, arc_ld16(ARC_X_R(c, 19)));
  /* c74d8: mov x13, xzr */
  ARC_X_W(c, 13, ARC_X_R(c, 31));
  /* c74dc: lsr x11, x9, #1 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(1)) & 63)));
  /* c74e0: mov x12, x19 */
  ARC_X_W(c, 12, ARC_X_R(c, 19));
  /* c74e4: b #0xc7510 */
  goto L_c7510;
L_c74e8:;
  /* c74e8: ldrh w13, [x17, #4]! */
  { const uint64_t _a = (ARC_X_R(c, 17) + INT64_C(4));
    ARC_X_W(c, 17, ARC_X_R(c, 17) + INT64_C(4));
    ARC_W_W(c, 13, arc_ld16(_a));
  }
  /* c74ec: ldurh w15, [x17, #-2] */
  ARC_W_W(c, 15, arc_ld16((ARC_X_R(c, 17) + INT64_C(-2))));
  /* c74f0: cmp w15, w13 */
  (void)arc_sub32(c, ARC_W_R(c, 15), ARC_W_R(c, 13));
  /* c74f4: csel w15, w15, w13, hi */
  ARC_W_W(c, 15, (ARC_COND(c, 8) ? (ARC_W_R(c, 15)) : ARC_W_R(c, 13)));
  /* c74f8: csel x9, x17, x9, lo */
  ARC_X_W(c, 9, (ARC_COND(c, 3) ? (ARC_X_R(c, 17)) : ARC_X_R(c, 9)));
  /* c74fc: csel x13, x16, x14, lo */
  ARC_X_W(c, 13, (ARC_COND(c, 3) ? (ARC_X_R(c, 16)) : ARC_X_R(c, 14)));
L_c7500:;
  /* c7500: cmp x13, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 13), ARC_X_R(c, 11));
  /* c7504: strh w15, [x12] */
  arc_st16(ARC_X_R(c, 12), ARC_W_R(c, 15));
  /* c7508: mov x12, x9 */
  ARC_X_W(c, 12, ARC_X_R(c, 9));
  /* c750c: b.gt #0xc753c */
  if (ARC_COND(c, 12)) goto L_c753c;
L_c7510:;
  /* c7510: lsl x9, x13, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 13)) << ((UINT64_C(1)) & 63)));
  /* c7514: mov w14, #1 */
  ARC_W_W(c, 14, UINT64_C(1));
  /* c7518: bfi x14, x13, #1, #0x3f */
  ARC_X_W(c, 14, (((uint64_t)(ARC_X_R(c, 14)) & UINT64_C(1)) | ((((uint64_t)(ARC_X_R(c, 13))) & UINT64_C(9223372036854775807)) << 1)));
  /* c751c: add x16, x9, #2 */
  ARC_X_W(c, 16, (ARC_X_R(c, 9) + UINT64_C(2)));
  /* c7520: add x17, x12, x9 */
  ARC_X_W(c, 17, (ARC_X_R(c, 12) + ARC_X_R(c, 9)));
  /* c7524: cmp x16, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 16), ARC_X_R(c, 8));
  /* c7528: add x9, x17, #2 */
  ARC_X_W(c, 9, (ARC_X_R(c, 17) + UINT64_C(2)));
  /* c752c: b.lt #0xc74e8 */
  if (ARC_COND(c, 11)) goto L_c74e8;
  /* c7530: ldrh w15, [x9] */
  ARC_W_W(c, 15, arc_ld16(ARC_X_R(c, 9)));
  /* c7534: mov x13, x14 */
  ARC_X_W(c, 13, ARC_X_R(c, 14));
  /* c7538: b #0xc7500 */
  goto L_c7500;
L_c753c:;
  /* c753c: sub x20, x20, #2 */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) - UINT64_C(2)));
  /* c7540: cmp x9, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 20));
  /* c7544: b.eq #0xc74c0 */
  if (ARC_COND(c, 0)) goto L_c74c0;
  /* c7548: sub x11, x9, x19 */
  ARC_X_W(c, 11, (ARC_X_R(c, 9) - ARC_X_R(c, 19)));
  /* c754c: ldrh w12, [x20] */
  ARC_W_W(c, 12, arc_ld16(ARC_X_R(c, 20)));
  /* c7550: add x11, x11, #2 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) + UINT64_C(2)));
  /* c7554: asr x11, x11, #1 */
  ARC_X_W(c, 11, ((uint64_t)((int64_t)(ARC_X_R(c, 11)) >> ((UINT64_C(1)) & 63))));
  /* c7558: strh w12, [x9] */
  arc_st16(ARC_X_R(c, 9), ARC_W_R(c, 12));
  /* c755c: strh w10, [x20] */
  arc_st16(ARC_X_R(c, 20), ARC_W_R(c, 10));
  /* c7560: subs x11, x11, #2 */
  ARC_X_W(c, 11, arc_sub64(c, ARC_X_R(c, 11), UINT64_C(2)));
  /* c7564: b.lt #0xc74c4 */
  if (ARC_COND(c, 11)) goto L_c74c4;
  /* c7568: lsr x10, x11, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 11)) >> ((UINT64_C(1)) & 63)));
  /* c756c: ldrh w11, [x9] */
  ARC_W_W(c, 11, arc_ld16(ARC_X_R(c, 9)));
  /* c7570: add x12, x19, x10, lsl #1 */
  ARC_X_W(c, 12, (ARC_X_R(c, 19) + ((uint64_t)(ARC_X_R(c, 10)) << 1)));
  /* c7574: ldrh w13, [x12] */
  ARC_W_W(c, 13, arc_ld16(ARC_X_R(c, 12)));
  /* c7578: cmp w13, w11 */
  (void)arc_sub32(c, ARC_W_R(c, 13), ARC_W_R(c, 11));
  /* c757c: b.hs #0xc74c4 */
  if (ARC_COND(c, 2)) goto L_c74c4;
L_c7580:;
  /* c7580: mov x14, x9 */
  ARC_X_W(c, 14, ARC_X_R(c, 9));
  /* c7584: mov x9, x12 */
  ARC_X_W(c, 9, ARC_X_R(c, 12));
  /* c7588: strh w13, [x14] */
  arc_st16(ARC_X_R(c, 14), ARC_W_R(c, 13));
  /* c758c: cbz x10, #0xc75a8 */
  if ((ARC_X_R(c, 10)) == 0) goto L_c75a8;
  /* c7590: sub x10, x10, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) - UINT64_C(1)));
  /* c7594: lsr x10, x10, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 10)) >> ((UINT64_C(1)) & 63)));
  /* c7598: add x12, x19, x10, lsl #1 */
  ARC_X_W(c, 12, (ARC_X_R(c, 19) + ((uint64_t)(ARC_X_R(c, 10)) << 1)));
  /* c759c: ldrh w13, [x12] */
  ARC_W_W(c, 13, arc_ld16(ARC_X_R(c, 12)));
  /* c75a0: cmp w13, w11 */
  (void)arc_sub32(c, ARC_W_R(c, 13), ARC_W_R(c, 11));
  /* c75a4: b.lo #0xc7580 */
  if (ARC_COND(c, 3)) goto L_c7580;
L_c75a8:;
  /* c75a8: strh w11, [x9] */
  arc_st16(ARC_X_R(c, 9), ARC_W_R(c, 11));
  /* c75ac: b #0xc74c4 */
  goto L_c74c4;
L_c75b0:;
  /* c75b0: tbz w8, #0, #0xc75c4 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_c75c4;
  /* c75b4: b #0xc7328 */
  goto L_c7328;
L_c75b8:;
  /* c75b8: add x9, x19, #2 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + UINT64_C(2)));
  /* c75bc: cmp x9, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 20));
  /* c75c0: b.eq #0xc7328 */
  if (ARC_COND(c, 0)) goto L_c7328;
L_c75c4:;
  /* c75c4: ldrh w8, [x19, #2] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 19) + INT64_C(2))));
  /* c75c8: ldrh w10, [x19] */
  ARC_W_W(c, 10, arc_ld16(ARC_X_R(c, 19)));
  /* c75cc: mov x19, x9 */
  ARC_X_W(c, 19, ARC_X_R(c, 9));
  /* c75d0: cmp w8, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 10));
  /* c75d4: b.hs #0xc75b8 */
  if (ARC_COND(c, 2)) goto L_c75b8;
  /* c75d8: mov x9, x19 */
  ARC_X_W(c, 9, ARC_X_R(c, 19));
L_c75dc:;
  /* c75dc: strh w10, [x9] */
  arc_st16(ARC_X_R(c, 9), ARC_W_R(c, 10));
  /* c75e0: ldurh w10, [x9, #-4] */
  ARC_W_W(c, 10, arc_ld16((ARC_X_R(c, 9) + INT64_C(-4))));
  /* c75e4: sub x9, x9, #2 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - UINT64_C(2)));
  /* c75e8: cmp w8, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 10));
  /* c75ec: b.lo #0xc75dc */
  if (ARC_COND(c, 3)) goto L_c75dc;
  /* c75f0: strh w8, [x9] */
  arc_st16(ARC_X_R(c, 9), ARC_W_R(c, 8));
  /* c75f4: b #0xc75b8 */
  goto L_c75b8;
}

void fn1_d72c0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038809280));
  /* d72c0: bti c */
  /* bti: no architectural effect here */
  /* d72c4: mov x9, #0x34db */
  ARC_X_W(c, 9, UINT64_C(13531));
  /* d72c8: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* d72cc: movk x9, #0xd7b6, lsl #16 */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(18446744069414649855)) | UINT64_C(3619028992)));
  /* d72d0: movk x9, #0xde82, lsl #32 */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(18446462603027808255)) | UINT64_C(244649927114752)));
  /* d72d4: movk x9, #0x431b, lsl #48 */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(281474976710655)) | UINT64_C(4835458624912359424)));
  /* d72d8: smulh x8, x8, x9 */
  ARC_X_W(c, 8, arc_smulh(ARC_X_R(c, 8), ARC_X_R(c, 9)));
  /* d72dc: asr x9, x8, #0x12 */
  ARC_X_W(c, 9, ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(18)) & 63))));
  /* d72e0: add x0, x9, x8, lsr #63 */
  ARC_X_W(c, 0, (ARC_X_R(c, 9) + ((uint64_t)(ARC_X_R(c, 8)) >> 63)));
  /* d72e4: ret  */
  return;
}

void fn1_daa4c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038823500));
  /* daa4c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* daa50: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* daa54: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* daa58: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* daa5c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* daa60: bl #0x142bc0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(895588));
  fn1_142bc0(c);
  /* daa64: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* daa68: mov w1, #8 */
  ARC_W_W(c, 1, UINT64_C(8));
  /* daa6c: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* daa70: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* daa74: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* daa78: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_dc374(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038829940));
  /* dc374: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* dc378: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* dc37c: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* dc380: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* dc384: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* dc388: ldr x8, [x8, #0x908] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2312))));
  /* dc38c: ldr x19, [x0, #8] */
  ARC_X_W(c, 19, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* dc390: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* dc394: sub x1, x19, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 19) - UINT64_C(8)));
  /* dc398: str x8, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* dc39c: mov w0, #-1 */
  ARC_W_W(c, 0, UINT64_C(18446744073709551615));
  /* dc3a0: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(902052));
  fn1_a2030(c);
  /* dc3a4: cmp w0, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(1));
  /* dc3a8: b.mi #0xdc3bc */
  if (ARC_COND(c, 4)) goto L_dc3bc;
  /* dc3ac: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* dc3b0: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* dc3b4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* dc3b8: ret  */
  return;
L_dc3bc:;
  /* dc3bc: sub x0, x19, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) - UINT64_C(24)));
  /* dc3c0: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* dc3c4: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* dc3c8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* dc3cc: b #0x1426f8 */
  fn1_1426f8(c); return;
}

void fn1_e1674(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038851188));
  /* e1674: bti c */
  /* bti: no architectural effect here */
  /* e1678: b #0xe167c */
  fn1_e167c(c); return;
}

void fn1_e3f24(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038861604));
  /* e3f24: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e3f28: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e3f2c: stp x24, x23, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* e3f30: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* e3f34: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* e3f38: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* e3f3c: ldrb w11, [x0] */
  ARC_W_W(c, 11, arc_ld8(ARC_X_R(c, 0)));
  /* e3f40: ldp x9, x12, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 12, arc_ld64(_pa + 8));
  }
  /* e3f44: ldr x8, [x0, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* e3f48: add x22, x0, #4 */
  ARC_X_W(c, 22, (ARC_X_R(c, 0) + UINT64_C(4)));
  /* e3f4c: mov w10, #4 */
  ARC_W_W(c, 10, UINT64_C(4));
  /* e3f50: tst w11, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 11) & UINT64_C(1)));
  /* e3f54: lsr x11, x11, #1 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 11)) >> ((UINT64_C(1)) & 63)));
  /* e3f58: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* e3f5c: and x13, x9, #0xfffffffffffffffe */
  ARC_X_W(c, 13, (ARC_X_R(c, 9) & UINT64_C(18446744073709551614)));
  /* e3f60: csel x14, x22, x8, eq */
  ARC_X_W(c, 14, (ARC_COND(c, 0) ? (ARC_X_R(c, 22)) : ARC_X_R(c, 8)));
  /* e3f64: mov w21, w2 */
  ARC_W_W(c, 21, ARC_W_R(c, 2));
  /* e3f68: sub x13, x13, #1 */
  ARC_X_W(c, 13, (ARC_X_R(c, 13) - UINT64_C(1)));
  /* e3f6c: sub x23, x1, x14 */
  ARC_X_W(c, 23, (ARC_X_R(c, 1) - ARC_X_R(c, 14)));
  /* e3f70: csel x20, x11, x12, eq */
  ARC_X_W(c, 20, (ARC_COND(c, 0) ? (ARC_X_R(c, 11)) : ARC_X_R(c, 12)));
  /* e3f74: csel x10, x10, x13, eq */
  ARC_X_W(c, 10, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 13)));
  /* e3f78: asr x4, x23, #2 */
  ARC_X_W(c, 4, ((uint64_t)((int64_t)(ARC_X_R(c, 23)) >> ((UINT64_C(2)) & 63))));
  /* e3f7c: cmp x10, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 20));
  /* e3f80: b.ne #0xe3fb0 */
  if (ARC_COND(c, 1)) goto L_e3fb0;
  /* e3f84: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* e3f88: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* e3f8c: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* e3f90: mov x3, x20 */
  ARC_X_W(c, 3, ARC_X_R(c, 20));
  /* e3f94: mov x5, xzr */
  ARC_X_W(c, 5, ARC_X_R(c, 31));
  /* e3f98: mov w6, #1 */
  ARC_W_W(c, 6, UINT64_C(1));
  /* e3f9c: bl #0x142da0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(933792));
  fn1_142da0(c);
  /* e3fa0: add x8, x20, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 20) + UINT64_C(1)));
  /* e3fa4: ldr x24, [x19, #0x10] */
  ARC_X_W(c, 24, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* e3fa8: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
  /* e3fac: b #0xe3fd0 */
  goto L_e3fd0;
L_e3fb0:;
  /* e3fb0: tst x9, #1 */
  arc_flags_logical64(c, (uint64_t)(ARC_X_R(c, 9) & UINT64_C(1)));
  /* e3fb4: csel x24, x22, x8, eq */
  ARC_X_W(c, 24, (ARC_COND(c, 0) ? (ARC_X_R(c, 22)) : ARC_X_R(c, 8)));
  /* e3fb8: subs x8, x20, x4 */
  ARC_X_W(c, 8, arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 4)));
  /* e3fbc: b.eq #0xe3fd0 */
  if (ARC_COND(c, 0)) goto L_e3fd0;
  /* e3fc0: lsl x2, x8, #2 */
  ARC_X_W(c, 2, ((uint64_t)(ARC_X_R(c, 8)) << ((UINT64_C(2)) & 63)));
  /* e3fc4: add x1, x24, x23 */
  ARC_X_W(c, 1, (ARC_X_R(c, 24) + ARC_X_R(c, 23)));
  /* e3fc8: add x0, x1, #4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 1) + UINT64_C(4)));
  /* e3fcc: bl #0x1449f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(933840));
  fn1_1449f0(c);
L_e3fd0:;
  /* e3fd0: add x9, x20, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 20) + UINT64_C(1)));
  /* e3fd4: str w21, [x24, x23] */
  arc_st32((ARC_X_R(c, 24) + ARC_X_R(c, 23)), ARC_W_R(c, 21));
  /* e3fd8: str wzr, [x24, x9, lsl #2] */
  arc_st32((ARC_X_R(c, 24) + ((uint64_t)(ARC_X_R(c, 9)) << 2)), ARC_W_R(c, 31));
  /* e3fdc: ldrb w8, [x19] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 19)));
  /* e3fe0: tbnz w8, #0, #0xe3ff0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_e3ff0;
  /* e3fe4: lsl w9, w9, #1 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 9)) << ((UINT64_C(1)) & 31)));
  /* e3fe8: strb w9, [x19] */
  arc_st8(ARC_X_R(c, 19), ARC_W_R(c, 9));
  /* e3fec: b #0xe3ff4 */
  goto L_e3ff4;
L_e3ff0:;
  /* e3ff0: str x9, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 9));
L_e3ff4:;
  /* e3ff4: ldr x9, [x19, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* e3ff8: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* e3ffc: csel x8, x22, x9, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 22)) : ARC_X_R(c, 9)));
  /* e4000: add x0, x23, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 23) + ARC_X_R(c, 8)));
  /* e4004: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* e4008: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* e400c: ldp x24, x23, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* e4010: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e4014: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* e4018: ret  */
  return;
}

void fn1_e8854(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038880340));
  /* e8854: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e8858: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e885c: str x23, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 23));
  /* e8860: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* e8864: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* e8868: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* e886c: mov x19, x2 */
  ARC_X_W(c, 19, ARC_X_R(c, 2));
  /* e8870: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* e8874: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* e8878: str xzr, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 31));
  /* e887c: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* e8880: mov w1, #0x10 */
  ARC_W_W(c, 1, UINT64_C(16));
  /* e8884: mov w2, #0xa0 */
  ARC_W_W(c, 2, UINT64_C(160));
  /* e8888: bl #0x142818 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(952460));
  fn1_142818(c);
  /* e888c: ldr x22, [x29, #0x18] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 29) + INT64_C(24))));
  /* e8890: cbnz x22, #0xe88a8 */
  if ((ARC_X_R(c, 22)) != 0) goto L_e88a8;
  /* e8894: mov w0, #0xa0 */
  ARC_W_W(c, 0, UINT64_C(160));
  /* e8898: bl #0xa24dc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(952476));
  fn1_a24dc(c);
  /* e889c: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* e88a0: cbnz x0, #0xe88a8 */
  if ((ARC_X_R(c, 0)) != 0) goto L_e88a8;
  /* e88a4: bl #0x142488 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(952488));
  fn1_142488(c);
L_e88a8:;
  /* e88a8: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* e88ac: mov x23, x22 */
  ARC_X_W(c, 23, ARC_X_R(c, 22));
  /* e88b0: str q0, [x22, #0x90] */
  arc_st64((ARC_X_R(c, 22) + INT64_C(144)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 22) + INT64_C(144)) + 8, (c)->q[0].u64[1]);
  /* e88b4: stp q0, q0, [x22] */
  { const uint64_t _pa = ARC_X_R(c, 22);
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* e88b8: stp q0, q0, [x22, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 22) + INT64_C(32));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* e88bc: stp q0, q0, [x22, #0x40] */
  { const uint64_t _pa = (ARC_X_R(c, 22) + INT64_C(64));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* e88c0: stp q0, q0, [x22, #0x60] */
  { const uint64_t _pa = (ARC_X_R(c, 22) + INT64_C(96));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* e88c4: str q0, [x23, #0x80]! */
  arc_st64((ARC_X_R(c, 23) + INT64_C(128)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 23) + INT64_C(128)) + 8, (c)->q[0].u64[1]);
  ARC_X_W(c, 23, ARC_X_R(c, 23) + INT64_C(128));
  /* e88c8: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* e88cc: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* e88d0: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* e88d4: mov x3, x19 */
  ARC_X_W(c, 3, ARC_X_R(c, 19));
  /* e88d8: bl #0x143040 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(952540));
  fn1_143040(c);
  /* e88dc: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* e88e0: adrp x2, #0x151000 */
  ARC_X_W(c, 2, (arc_image_bases[1] + UINT64_C(1380352)));
  /* e88e4: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* e88e8: ldr x1, [x1, #0xa18] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(2584))));
  /* e88ec: ldr x2, [x2, #0xa58] */
  ARC_X_W(c, 2, arc_ld64((ARC_X_R(c, 2) + INT64_C(2648))));
  /* e88f0: bl #0x142440 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(952564));
  fn1_142440(c);
  /* e88f4: nop  */
  /* nop: no architectural effect here */
  /* e88f8: adr x8, #0x1576e0 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1406688)));
  /* e88fc: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* e8900: cmp x22, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 8));
  /* e8904: b.lo #0xe8928 */
  if (ARC_COND(c, 3)) goto L_e8928;
  /* e8908: adrp x8, #0x157000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1404928)));
  /* e890c: add x8, x8, #0x8e0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2272)));
  /* e8910: cmp x22, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 8));
  /* e8914: b.hs #0xe8928 */
  if (ARC_COND(c, 2)) goto L_e8928;
  /* e8918: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* e891c: bl #0xa2664 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(952608));
  fn1_a2664(c);
  /* e8920: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* e8924: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(952616));
  fn1_9cc20(c);
L_e8928:;
  /* e8928: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* e892c: bl #0x142800 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(952624));
  fn1_142800(c);
  /* e8930: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* e8934: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(952632));
  fn1_9cc20(c);
  /* e8938: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(952636));
  fn1_a1454(c);
  /* e893c: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(952640));
  fn1_a1454(c);
}

void fn1_eac88(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038889608));
  /* eac88: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* eac8c: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* eac90: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* eac94: bl #0x143238 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(961688));
  fn1_143238(c);
  /* eac98: cmp w0, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(0));
  /* eac9c: cset w0, eq */
  ARC_W_W(c, 0, (ARC_COND(c, 0) ? 1 : 0));
  /* eaca0: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* eaca4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* eaca8: ret  */
  return;
  /* eacac: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(961712));
  fn1_a1454(c);
}

void fn1_ec5e0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038896096));
  /* ec5e0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* ec5e4: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* ec5e8: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* ec5ec: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* ec5f0: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* ec5f4: ldr x8, [x8, #0xa90] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2704))));
  /* ec5f8: ldr x20, [x0, #0x30] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 0) + INT64_C(48))));
  /* ec5fc: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* ec600: str x8, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* ec604: cbz x20, #0xec69c */
  if ((ARC_X_R(c, 20)) == 0) goto L_ec69c;
  /* ec608: ldr x8, [x0, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(72))));
  /* ec60c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* ec610: cbz x8, #0xec640 */
  if ((ARC_X_R(c, 8)) == 0) goto L_ec640;
  /* ec614: sub x20, x8, #1 */
  ARC_X_W(c, 20, (ARC_X_R(c, 8) - UINT64_C(1)));
L_ec618:;
  /* ec618: ldp x8, x9, [x19, #0x38] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(56));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* ec61c: ldr x8, [x8, x20, lsl #3] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 20)) << 3))));
  /* ec620: ldr w2, [x9, x20, lsl #2] */
  ARC_W_W(c, 2, arc_ld32((ARC_X_R(c, 9) + ((uint64_t)(ARC_X_R(c, 20)) << 2))));
  /* ec624: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* ec628: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* ec62c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(968240));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* ec630: sub x20, x20, #1 */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) - UINT64_C(1)));
  /* ec634: cmn x20, #1 */
  (void)arc_add64(c, ARC_X_R(c, 20), UINT64_C(1), 0);
  /* ec638: b.ne #0xec618 */
  if (ARC_COND(c, 1)) goto L_ec618;
  /* ec63c: ldr x20, [x19, #0x30] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 19) + INT64_C(48))));
L_ec640:;
  /* ec640: nop  */
  /* nop: no architectural effect here */
  /* ec644: adr x8, #0x15dc40 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1432640)));
  /* ec648: cmp x20, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 8));
  /* ec64c: b.eq #0xec670 */
  if (ARC_COND(c, 0)) goto L_ec670;
  /* ec650: add x1, x20, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* ec654: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* ec658: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(968284));
  fn1_bd950(c);
  /* ec65c: cbnz x0, #0xec670 */
  if ((ARC_X_R(c, 0)) != 0) goto L_ec670;
  /* ec660: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* ec664: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* ec668: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* ec66c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(968304));
  arc_dispatch(c, ARC_X_R(c, 8));
L_ec670:;
  /* ec670: ldr x0, [x19, #0x38] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(56))));
  /* ec674: bl #0x142800 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(968312));
  fn1_142800(c);
  /* ec678: ldr x0, [x19, #0x40] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(64))));
  /* ec67c: bl #0x142800 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(968320));
  fn1_142800(c);
  /* ec680: ldr x0, [x19, #0x58] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(88))));
  /* ec684: bl #0x142800 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(968328));
  fn1_142800(c);
  /* ec688: ldr x0, [x19, #0x70] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(112))));
  /* ec68c: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* ec690: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ec694: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* ec698: b #0x142800 */
  fn1_142800(c); return;
L_ec69c:;
  /* ec69c: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* ec6a0: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ec6a4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* ec6a8: ret  */
  return;
  /* ec6ac: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(968368));
  fn1_a1454(c);
}

void fn1_edf58(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038902616));
  /* edf58: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* edf5c: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* edf60: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* edf64: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* edf68: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* edf6c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* edf70: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* edf74: add x0, x0, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* edf78: blr x1 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(974716));
  arc_dispatch(c, ARC_X_R(c, 1));
  /* edf7c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* edf80: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* edf84: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* edf88: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* edf8c: ret  */
  return;
}

void fn1_f3538(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038924600));
  /* f3538: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* f353c: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* f3540: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* f3544: str x21, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 21));
  /* f3548: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* f354c: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* f3550: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f3554: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* f3558: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* f355c: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* f3560: mov x20, x2 */
  ARC_X_W(c, 20, ARC_X_R(c, 2));
  /* f3564: bl #0x143610 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(996712));
  fn1_143610(c);
  /* f3568: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f356c: mov w10, #5 */
  ARC_W_W(c, 10, UINT64_C(5));
  /* f3570: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f3574: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f3578: ldrb w9, [x8, #0x20] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 8) + INT64_C(32))));
  /* f357c: tst w9, w10 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & ARC_W_R(c, 10)));
  /* f3580: b.ne #0xf35d8 */
  if (ARC_COND(c, 1)) goto L_f35d8;
  /* f3584: ldr x0, [x8, #0x28] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* f3588: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* f358c: ldr x8, [x8, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* f3590: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* f3594: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* f3598: mov w3, #0x10 */
  ARC_W_W(c, 3, UINT64_C(16));
  /* f359c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(996768));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* f35a0: cmn x1, #1 */
  (void)arc_add64(c, ARC_X_R(c, 1), UINT64_C(1), 0);
  /* f35a4: b.ne #0xf35d8 */
  if (ARC_COND(c, 1)) goto L_f35d8;
  /* f35a8: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f35ac: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f35b0: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f35b4: ldr x9, [x8, #0x28] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* f35b8: cmp x9, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(0));
  /* f35bc: ldp w9, w11, [x8, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 8) + INT64_C(32));
    ARC_W_W(c, 9, arc_ld32(_pa));
    ARC_W_W(c, 11, arc_ld32(_pa + 4));
  }
  /* f35c0: cset w10, eq */
  ARC_W_W(c, 10, (ARC_COND(c, 0) ? 1 : 0));
  /* f35c4: orr w9, w9, w10 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | ARC_W_R(c, 10)));
  /* f35c8: orr w9, w9, #4 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | UINT64_C(4)));
  /* f35cc: tst w9, w11 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & ARC_W_R(c, 11)));
  /* f35d0: str w9, [x8, #0x20] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(32)), ARC_W_R(c, 9));
  /* f35d4: b.ne #0xf35fc */
  if (ARC_COND(c, 1)) goto L_f35fc;
L_f35d8:;
  /* f35d8: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* f35dc: bl #0x143628 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(996832));
  fn1_143628(c);
  /* f35e0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f35e4: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* f35e8: ldr x21, [sp, #0x20] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(32))));
  /* f35ec: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* f35f0: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* f35f4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* f35f8: ret  */
  return;
L_f35fc:;
  /* f35fc: nop  */
  /* nop: no architectural effect here */
  /* f3600: adr x0, #0x50210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(328208)));
  /* f3604: bl #0xec720 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(996872));
  fn1_ec720(c);
  /* f3608: b #0xf360c */
  goto L_f360c;
L_f360c:;
  /* f360c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f3610: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* f3614: bl #0x143628 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(996888));
  fn1_143628(c);
  /* f3618: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f361c: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(996896));
  fn1_9cc20(c);
}

void fn1_f4990(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038929808));
  /* f4990: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* f4994: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* f4998: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* f499c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* f49a0: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* f49a4: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f49a8: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f49ac: add x0, x0, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* f49b0: blr x1 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1001908));
  arc_dispatch(c, ARC_X_R(c, 1));
  /* f49b4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f49b8: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* f49bc: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* f49c0: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* f49c4: ret  */
  return;
}

void fn1_f9fb4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038951860));
  /* f9fb4: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* f9fb8: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* f9fbc: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* f9fc0: str x21, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 21));
  /* f9fc4: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* f9fc8: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* f9fcc: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f9fd0: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* f9fd4: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* f9fd8: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* f9fdc: mov x20, x2 */
  ARC_X_W(c, 20, ARC_X_R(c, 2));
  /* f9fe0: bl #0x143688 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1023972));
  fn1_143688(c);
  /* f9fe4: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f9fe8: mov w10, #5 */
  ARC_W_W(c, 10, UINT64_C(5));
  /* f9fec: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f9ff0: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f9ff4: ldrb w9, [x8, #0x20] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 8) + INT64_C(32))));
  /* f9ff8: tst w9, w10 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & ARC_W_R(c, 10)));
  /* f9ffc: b.ne #0xfa054 */
  if (ARC_COND(c, 1)) goto L_fa054;
  /* fa000: ldr x0, [x8, #0x28] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* fa004: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* fa008: ldr x8, [x8, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* fa00c: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* fa010: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* fa014: mov w3, #0x10 */
  ARC_W_W(c, 3, UINT64_C(16));
  /* fa018: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1024028));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* fa01c: cmn x1, #1 */
  (void)arc_add64(c, ARC_X_R(c, 1), UINT64_C(1), 0);
  /* fa020: b.ne #0xfa054 */
  if (ARC_COND(c, 1)) goto L_fa054;
  /* fa024: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* fa028: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* fa02c: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* fa030: ldr x9, [x8, #0x28] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* fa034: cmp x9, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(0));
  /* fa038: ldp w9, w11, [x8, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 8) + INT64_C(32));
    ARC_W_W(c, 9, arc_ld32(_pa));
    ARC_W_W(c, 11, arc_ld32(_pa + 4));
  }
  /* fa03c: cset w10, eq */
  ARC_W_W(c, 10, (ARC_COND(c, 0) ? 1 : 0));
  /* fa040: orr w9, w9, w10 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | ARC_W_R(c, 10)));
  /* fa044: orr w9, w9, #4 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | UINT64_C(4)));
  /* fa048: tst w9, w11 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & ARC_W_R(c, 11)));
  /* fa04c: str w9, [x8, #0x20] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(32)), ARC_W_R(c, 9));
  /* fa050: b.ne #0xfa078 */
  if (ARC_COND(c, 1)) goto L_fa078;
L_fa054:;
  /* fa054: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* fa058: bl #0x1436a0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1024092));
  fn1_1436a0(c);
  /* fa05c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* fa060: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* fa064: ldr x21, [sp, #0x20] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(32))));
  /* fa068: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* fa06c: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* fa070: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* fa074: ret  */
  return;
L_fa078:;
  /* fa078: nop  */
  /* nop: no architectural effect here */
  /* fa07c: adr x0, #0x50210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(328208)));
  /* fa080: bl #0xec720 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1024132));
  fn1_ec720(c);
  /* fa084: b #0xfa088 */
  goto L_fa088;
L_fa088:;
  /* fa088: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* fa08c: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* fa090: bl #0x1436a0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1024148));
  fn1_1436a0(c);
  /* fa094: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* fa098: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1024156));
  fn1_9cc20(c);
}

void fn1_fe100(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038968576));
  /* fe100: bti c */
  /* bti: no architectural effect here */
  /* fe104: ret  */
  return;
}

void fn1_1091c4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039013828));
  /* 1091c4: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 1091c8: stp x29, x30, [sp, #-0x60]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-96));
    (c)->sp = (c)->sp + INT64_C(-96);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1091cc: stp x28, x27, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* 1091d0: stp x26, x25, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* 1091d4: stp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 1091d8: stp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1091dc: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1091e0: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1091e4: ldp x21, x20, [x29, #0x68] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(104));
    ARC_X_W(c, 21, arc_ld64(_pa));
    ARC_X_W(c, 20, arc_ld64(_pa + 8));
  }
  /* 1091e8: and w8, w0, #0xff */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) & UINT64_C(255)));
  /* 1091ec: ldr x22, [x29, #0x60] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 29) + INT64_C(96))));
  /* 1091f0: cmp w8, w5, uxtb */
  (void)arc_sub32(c, ARC_W_R(c, 8), ((uint64_t)(uint8_t)(ARC_W_R(c, 5))));
  /* 1091f4: b.ne #0x109258 */
  if (ARC_COND(c, 1)) goto L_109258;
  /* 1091f8: ldrb w8, [x1] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 1)));
  /* 1091fc: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* 109200: b.ne #0x1092ec */
  if (ARC_COND(c, 1)) goto L_1092ec;
  /* 109204: ldr x8, [x4] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 4)));
  /* 109208: mov w10, #0x2e */
  ARC_W_W(c, 10, UINT64_C(46));
  /* 10920c: strb wzr, [x1] */
  arc_st8(ARC_X_R(c, 1), ARC_W_R(c, 31));
  /* 109210: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* 109214: str x9, [x4] */
  arc_st64(ARC_X_R(c, 4), ARC_X_R(c, 9));
  /* 109218: strb w10, [x8] */
  arc_st8(ARC_X_R(c, 8), ARC_W_R(c, 10));
  /* 10921c: ldrb w8, [x7] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 7)));
  /* 109220: ldr x9, [x7, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 7) + INT64_C(8))));
  /* 109224: lsr x10, x8, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* 109228: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 10922c: csel x8, x10, x9, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* 109230: cbz x8, #0x1092f4 */
  if ((ARC_X_R(c, 8)) == 0) goto L_1092f4;
  /* 109234: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 109238: sub x9, x8, x22 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - ARC_X_R(c, 22)));
  /* 10923c: cmp x9, #0x9f */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(159));
  /* 109240: b.gt #0x1092f4 */
  if (ARC_COND(c, 12)) goto L_1092f4;
  /* 109244: ldr w9, [x20] */
  ARC_W_W(c, 9, arc_ld32(ARC_X_R(c, 20)));
  /* 109248: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 10924c: str w9, [x8], #4 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(4));
    arc_st32(_a, ARC_W_R(c, 9));
  }
  /* 109250: str x8, [x21] */
  arc_st64(ARC_X_R(c, 21), ARC_X_R(c, 8));
  /* 109254: b #0x10942c */
  goto L_10942c;
L_109258:;
  /* 109258: cmp w8, w6, uxtb */
  (void)arc_sub32(c, ARC_W_R(c, 8), ((uint64_t)(uint8_t)(ARC_W_R(c, 6))));
  /* 10925c: b.ne #0x1092ac */
  if (ARC_COND(c, 1)) goto L_1092ac;
  /* 109260: ldrb w8, [x7] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 7)));
  /* 109264: ldr x9, [x7, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 7) + INT64_C(8))));
  /* 109268: lsr x10, x8, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* 10926c: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 109270: csel x8, x10, x9, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* 109274: cbz x8, #0x1092ac */
  if ((ARC_X_R(c, 8)) == 0) goto L_1092ac;
  /* 109278: ldrb w8, [x1] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 1)));
  /* 10927c: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* 109280: b.ne #0x1092ec */
  if (ARC_COND(c, 1)) goto L_1092ec;
  /* 109284: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 109288: sub x9, x8, x22 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - ARC_X_R(c, 22)));
  /* 10928c: cmp x9, #0x9f */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(159));
  /* 109290: b.gt #0x1092f4 */
  if (ARC_COND(c, 12)) goto L_1092f4;
  /* 109294: ldr w9, [x20] */
  ARC_W_W(c, 9, arc_ld32(ARC_X_R(c, 20)));
  /* 109298: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 10929c: str w9, [x8], #4 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(4));
    arc_st32(_a, ARC_W_R(c, 9));
  }
  /* 1092a0: str x8, [x21] */
  arc_st64(ARC_X_R(c, 21), ARC_X_R(c, 8));
  /* 1092a4: str wzr, [x20] */
  arc_st32(ARC_X_R(c, 20), ARC_W_R(c, 31));
  /* 1092a8: b #0x10942c */
  goto L_10942c;
L_1092ac:;
  /* 1092ac: ldr x19, [x29, #0x78] */
  ARC_X_W(c, 19, arc_ld64((ARC_X_R(c, 29) + INT64_C(120))));
  /* 1092b0: mov x24, x1 */
  ARC_X_W(c, 24, ARC_X_R(c, 1));
  /* 1092b4: mov x26, x2 */
  ARC_X_W(c, 26, ARC_X_R(c, 2));
  /* 1092b8: and w1, w0, #0xff */
  ARC_W_W(c, 1, (ARC_W_R(c, 0) & UINT64_C(255)));
  /* 1092bc: mov w2, #0x1c */
  ARC_W_W(c, 2, UINT64_C(28));
  /* 1092c0: mov x27, x3 */
  ARC_X_W(c, 27, ARC_X_R(c, 3));
  /* 1092c4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1092c8: mov x23, x7 */
  ARC_X_W(c, 23, ARC_X_R(c, 7));
  /* 1092cc: mov x25, x4 */
  ARC_X_W(c, 25, ARC_X_R(c, 4));
  /* 1092d0: add x28, x19, #0x1c */
  ARC_X_W(c, 28, (ARC_X_R(c, 19) + UINT64_C(28)));
  /* 1092d4: bl #0x1428d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1086168));
  fn1_1428d8(c);
  /* 1092d8: cmp x0, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 0), UINT64_C(0));
  /* 1092dc: csel x8, x28, x0, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 28)) : ARC_X_R(c, 0)));
  /* 1092e0: sub x10, x8, x19 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) - ARC_X_R(c, 19)));
  /* 1092e4: cmp x10, #0x1b */
  (void)arc_sub64(c, ARC_X_R(c, 10), UINT64_C(27));
  /* 1092e8: b.le #0x1092fc */
  if (ARC_COND(c, 13)) goto L_1092fc;
L_1092ec:;
  /* 1092ec: mov w0, #-1 */
  ARC_W_W(c, 0, UINT64_C(18446744073709551615));
  /* 1092f0: b #0x10942c */
  goto L_10942c;
L_1092f4:;
  /* 1092f4: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 1092f8: b #0x10942c */
  goto L_10942c;
L_1092fc:;
  /* 1092fc: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 109300: and x9, x10, #0xfffffffffffffffe */
  ARC_X_W(c, 9, (ARC_X_R(c, 10) & UINT64_C(18446744073709551614)));
  /* 109304: ldr x8, [x8, #0xbe0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3040))));
  /* 109308: cmp x9, #0x16 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(22));
  /* 10930c: ldrb w8, [x8, x10] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 8) + ARC_X_R(c, 10))));
  /* 109310: b.eq #0x109370 */
  if (ARC_COND(c, 0)) goto L_109370;
  /* 109314: cmp x9, #0x18 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(24));
  /* 109318: mov x9, x25 */
  ARC_X_W(c, 9, ARC_X_R(c, 25));
  /* 10931c: b.ne #0x109390 */
  if (ARC_COND(c, 1)) goto L_109390;
  /* 109320: ldr x10, [x9] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 9)));
  /* 109324: cmp x10, x27 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 27));
  /* 109328: b.eq #0x10935c */
  if (ARC_COND(c, 0)) goto L_10935c;
  /* 10932c: ldurb w11, [x10, #-1] */
  ARC_W_W(c, 11, arc_ld8((ARC_X_R(c, 10) + INT64_C(-1))));
  /* 109330: ldrb w12, [x26] */
  ARC_W_W(c, 12, arc_ld8(ARC_X_R(c, 26)));
  /* 109334: sub w13, w11, #0x7b */
  ARC_W_W(c, 13, (ARC_W_R(c, 11) - UINT64_C(123)));
  /* 109338: eor w14, w11, #0x20 */
  ARC_W_W(c, 14, (ARC_W_R(c, 11) ^ UINT64_C(32)));
  /* 10933c: cmn w13, #0x1a */
  (void)arc_add32(c, ARC_W_R(c, 13), UINT64_C(26), 0);
  /* 109340: sub w13, w12, #0x7b */
  ARC_W_W(c, 13, (ARC_W_R(c, 12) - UINT64_C(123)));
  /* 109344: csel w11, w11, w14, lo */
  ARC_W_W(c, 11, (ARC_COND(c, 3) ? (ARC_W_R(c, 11)) : ARC_W_R(c, 14)));
  /* 109348: eor w14, w12, #0x20 */
  ARC_W_W(c, 14, (ARC_W_R(c, 12) ^ UINT64_C(32)));
  /* 10934c: cmn w13, #0x1a */
  (void)arc_add32(c, ARC_W_R(c, 13), UINT64_C(26), 0);
  /* 109350: csel w12, w12, w14, lo */
  ARC_W_W(c, 12, (ARC_COND(c, 3) ? (ARC_W_R(c, 12)) : ARC_W_R(c, 14)));
  /* 109354: cmp w11, w12 */
  (void)arc_sub32(c, ARC_W_R(c, 11), ARC_W_R(c, 12));
  /* 109358: b.ne #0x1092ec */
  if (ARC_COND(c, 1)) goto L_1092ec;
L_10935c:;
  /* 10935c: add x11, x10, #1 */
  ARC_X_W(c, 11, (ARC_X_R(c, 10) + UINT64_C(1)));
  /* 109360: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 109364: str x11, [x9] */
  arc_st64(ARC_X_R(c, 9), ARC_X_R(c, 11));
  /* 109368: strb w8, [x10] */
  arc_st8(ARC_X_R(c, 10), ARC_W_R(c, 8));
  /* 10936c: b #0x10942c */
  goto L_10942c;
L_109370:;
  /* 109370: mov w9, #0x50 */
  ARC_W_W(c, 9, UINT64_C(80));
  /* 109374: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 109378: strb w9, [x26] */
  arc_st8(ARC_X_R(c, 26), ARC_W_R(c, 9));
  /* 10937c: ldr x9, [x25] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 25)));
  /* 109380: add x10, x9, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 9) + UINT64_C(1)));
  /* 109384: str x10, [x25] */
  arc_st64(ARC_X_R(c, 25), ARC_X_R(c, 10));
  /* 109388: strb w8, [x9] */
  arc_st8(ARC_X_R(c, 9), ARC_W_R(c, 8));
  /* 10938c: b #0x10942c */
  goto L_10942c;
L_109390:;
  /* 109390: sub w11, w8, #0x7b */
  ARC_W_W(c, 11, (ARC_W_R(c, 8) - UINT64_C(123)));
  /* 109394: eor w12, w8, #0x20 */
  ARC_W_W(c, 12, (ARC_W_R(c, 8) ^ UINT64_C(32)));
  /* 109398: cmn w11, #0x1a */
  (void)arc_add32(c, ARC_W_R(c, 11), UINT64_C(26), 0);
  /* 10939c: ldrb w11, [x26] */
  ARC_W_W(c, 11, arc_ld8(ARC_X_R(c, 26)));
  /* 1093a0: csel w12, w8, w12, lo */
  ARC_W_W(c, 12, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 12)));
  /* 1093a4: cmp w12, w11 */
  (void)arc_sub32(c, ARC_W_R(c, 12), ARC_W_R(c, 11));
  /* 1093a8: b.ne #0x109404 */
  if (ARC_COND(c, 1)) goto L_109404;
  /* 1093ac: sub w12, w12, #0x5b */
  ARC_W_W(c, 12, (ARC_W_R(c, 12) - UINT64_C(91)));
  /* 1093b0: orr w13, w11, #0x20 */
  ARC_W_W(c, 13, (ARC_W_R(c, 11) | UINT64_C(32)));
  /* 1093b4: cmn w12, #0x1a */
  (void)arc_add32(c, ARC_W_R(c, 12), UINT64_C(26), 0);
  /* 1093b8: csel w11, w11, w13, lo */
  ARC_W_W(c, 11, (ARC_COND(c, 3) ? (ARC_W_R(c, 11)) : ARC_W_R(c, 13)));
  /* 1093bc: strb w11, [x26] */
  arc_st8(ARC_X_R(c, 26), ARC_W_R(c, 11));
  /* 1093c0: ldrb w11, [x24] */
  ARC_W_W(c, 11, arc_ld8(ARC_X_R(c, 24)));
  /* 1093c4: cmp w11, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(1));
  /* 1093c8: b.ne #0x109404 */
  if (ARC_COND(c, 1)) goto L_109404;
  /* 1093cc: strb wzr, [x24] */
  arc_st8(ARC_X_R(c, 24), ARC_W_R(c, 31));
  /* 1093d0: ldrb w11, [x23] */
  ARC_W_W(c, 11, arc_ld8(ARC_X_R(c, 23)));
  /* 1093d4: ldr x12, [x23, #8] */
  ARC_X_W(c, 12, arc_ld64((ARC_X_R(c, 23) + INT64_C(8))));
  /* 1093d8: lsr x13, x11, #1 */
  ARC_X_W(c, 13, ((uint64_t)(ARC_X_R(c, 11)) >> ((UINT64_C(1)) & 63)));
  /* 1093dc: tst w11, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 11) & UINT64_C(1)));
  /* 1093e0: csel x11, x13, x12, eq */
  ARC_X_W(c, 11, (ARC_COND(c, 0) ? (ARC_X_R(c, 13)) : ARC_X_R(c, 12)));
  /* 1093e4: cbz x11, #0x109404 */
  if ((ARC_X_R(c, 11)) == 0) goto L_109404;
  /* 1093e8: ldr x11, [x21] */
  ARC_X_W(c, 11, arc_ld64(ARC_X_R(c, 21)));
  /* 1093ec: sub x12, x11, x22 */
  ARC_X_W(c, 12, (ARC_X_R(c, 11) - ARC_X_R(c, 22)));
  /* 1093f0: cmp x12, #0x9f */
  (void)arc_sub64(c, ARC_X_R(c, 12), UINT64_C(159));
  /* 1093f4: b.gt #0x109404 */
  if (ARC_COND(c, 12)) goto L_109404;
  /* 1093f8: ldr w12, [x20] */
  ARC_W_W(c, 12, arc_ld32(ARC_X_R(c, 20)));
  /* 1093fc: str w12, [x11], #4 */
  { const uint64_t _a = ARC_X_R(c, 11);
    ARC_X_W(c, 11, ARC_X_R(c, 11) + INT64_C(4));
    arc_st32(_a, ARC_W_R(c, 12));
  }
  /* 109400: str x11, [x21] */
  arc_st64(ARC_X_R(c, 21), ARC_X_R(c, 11));
L_109404:;
  /* 109404: ldr x11, [x9] */
  ARC_X_W(c, 11, arc_ld64(ARC_X_R(c, 9)));
  /* 109408: cmp x10, #0x15 */
  (void)arc_sub64(c, ARC_X_R(c, 10), UINT64_C(21));
  /* 10940c: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 109410: add x12, x11, #1 */
  ARC_X_W(c, 12, (ARC_X_R(c, 11) + UINT64_C(1)));
  /* 109414: str x12, [x9] */
  arc_st64(ARC_X_R(c, 9), ARC_X_R(c, 12));
  /* 109418: strb w8, [x11] */
  arc_st8(ARC_X_R(c, 11), ARC_W_R(c, 8));
  /* 10941c: b.gt #0x10942c */
  if (ARC_COND(c, 12)) goto L_10942c;
  /* 109420: ldr w8, [x20] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 20)));
  /* 109424: add w8, w8, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) + UINT64_C(1)));
  /* 109428: str w8, [x20] */
  arc_st32(ARC_X_R(c, 20), ARC_W_R(c, 8));
L_10942c:;
  /* 10942c: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 109430: ldp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 109434: ldp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 109438: ldp x26, x25, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* 10943c: ldp x28, x27, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* 109440: ldp x29, x30, [sp], #0x60 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(96);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 109444: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 109448: ret  */
  return;
}

void fn1_1126f4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039052020));
  /* 1126f4: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 1126f8: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1126fc: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 112700: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 112704: mov x19, x4 */
  ARC_X_W(c, 19, ARC_X_R(c, 4));
  /* 112708: mov x0, x2 */
  ARC_X_W(c, 0, ARC_X_R(c, 2));
  /* 11270c: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 112710: mov x1, x3 */
  ARC_X_W(c, 1, ARC_X_R(c, 3));
  /* 112714: mov x2, x4 */
  ARC_X_W(c, 2, ARC_X_R(c, 4));
  /* 112718: mov x3, x5 */
  ARC_X_W(c, 3, ARC_X_R(c, 5));
  /* 11271c: mov w4, #2 */
  ARC_W_W(c, 4, UINT64_C(2));
  /* 112720: bl #0x112ec0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1124132));
  fn1_112ec0(c);
  /* 112724: ldr w8, [x19] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 19)));
  /* 112728: cmp w0, #0x17 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(23));
  /* 11272c: b.gt #0x11273c */
  if (ARC_COND(c, 12)) goto L_11273c;
  /* 112730: tbnz w8, #2, #0x11273c */
  if (((ARC_W_R(c, 8)) >> 2 & 1) != 0) goto L_11273c;
  /* 112734: str w0, [x20] */
  arc_st32(ARC_X_R(c, 20), ARC_W_R(c, 0));
  /* 112738: b #0x112744 */
  goto L_112744;
L_11273c:;
  /* 11273c: orr w8, w8, #4 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | UINT64_C(4)));
  /* 112740: str w8, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 8));
L_112744:;
  /* 112744: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 112748: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 11274c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 112750: ret  */
  return;
}

void fn1_113ee0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039058144));
  /* 113ee0: bti c */
  /* bti: no architectural effect here */
  /* 113ee4: ldrb w0, [x0, #0x11] */
  ARC_W_W(c, 0, arc_ld8((ARC_X_R(c, 0) + INT64_C(17))));
  /* 113ee8: ret  */
  return;
}

void fn1_11de44(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039098948));
  /* 11de44: bti c */
  /* bti: no architectural effect here */
  /* 11de48: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 11de4c: cbz x8, #0x11de74 */
  if ((ARC_X_R(c, 8)) == 0) goto L_11de74;
  /* 11de50: add x9, x0, #0x18 */
  ARC_X_W(c, 9, (ARC_X_R(c, 0) + UINT64_C(24)));
  /* 11de54: str x8, [x0, #8] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(8)), ARC_X_R(c, 8));
  /* 11de58: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 11de5c: b.eq #0x11de70 */
  if (ARC_COND(c, 0)) goto L_11de70;
  /* 11de60: ldr x9, [x0, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 11de64: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 11de68: sub x1, x9, x8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 9) - ARC_X_R(c, 8)));
  /* 11de6c: b #0x142608 */
  fn1_142608(c); return;
L_11de70:;
  /* 11de70: strb wzr, [x0, #0x108] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(264)), ARC_W_R(c, 31));
L_11de74:;
  /* 11de74: ret  */
  return;
}

void fn1_1261d4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039132628));
  /* 1261d4: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 1261d8: sub sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(112)));
  /* 1261dc: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1261e0: stp x26, x25, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* 1261e4: stp x24, x23, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 1261e8: stp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1261ec: stp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1261f0: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 1261f4: sub x21, x2, x1 */
  ARC_X_W(c, 21, (ARC_X_R(c, 2) - ARC_X_R(c, 1)));
  /* 1261f8: mov x24, #-9 */
  ARC_X_W(c, 24, UINT64_C(18446744073709551607));
  /* 1261fc: asr x25, x21, #2 */
  ARC_X_W(c, 25, ((uint64_t)((int64_t)(ARC_X_R(c, 21)) >> ((UINT64_C(2)) & 63))));
  /* 126200: movk x24, #0x3fff, lsl #48 */
  ARC_X_W(c, 24, ((ARC_X_R(c, 24) & UINT64_C(281474976710655)) | UINT64_C(4611404543450677248)));
  /* 126204: cmp x25, x24 */
  (void)arc_sub64(c, ARC_X_R(c, 25), ARC_X_R(c, 24));
  /* 126208: b.hi #0x126388 */
  if (ARC_COND(c, 8)) goto L_126388;
  /* 12620c: mov x22, x2 */
  ARC_X_W(c, 22, ARC_X_R(c, 2));
  /* 126210: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 126214: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* 126218: cmp x25, #4 */
  (void)arc_sub64(c, ARC_X_R(c, 25), UINT64_C(4));
  /* 12621c: b.hi #0x126240 */
  if (ARC_COND(c, 8)) goto L_126240;
  /* 126220: lsr w8, w21, #1 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 21)) >> ((UINT64_C(1)) & 31)));
  /* 126224: add x9, sp, #8 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(8)));
  /* 126228: orr x23, x9, #4 */
  ARC_X_W(c, 23, (ARC_X_R(c, 9) | UINT64_C(4)));
  /* 12622c: and w8, w8, #0xfe */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(254)));
  /* 126230: strb w8, [sp, #8] */
  arc_st8(((c)->sp + INT64_C(8)), ARC_W_R(c, 8));
  /* 126234: cmp x22, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 1));
  /* 126238: b.ne #0x126278 */
  if (ARC_COND(c, 1)) goto L_126278;
  /* 12623c: b #0x126284 */
  goto L_126284;
L_126240:;
  /* 126240: orr x8, x25, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 25) | UINT64_C(1)));
  /* 126244: mov w9, #8 */
  ARC_W_W(c, 9, UINT64_C(8));
  /* 126248: mov x23, x1 */
  ARC_X_W(c, 23, ARC_X_R(c, 1));
  /* 12624c: cmp x8, #5 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(5));
  /* 126250: csinc x26, x9, x8, eq */
  ARC_X_W(c, 26, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 8)) + 1)));
  /* 126254: lsl x0, x26, #2 */
  ARC_X_W(c, 0, ((uint64_t)(ARC_X_R(c, 26)) << ((UINT64_C(2)) & 63)));
  /* 126258: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1204828));
  fn1_1428f0(c);
  /* 12625c: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* 126260: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* 126264: orr x8, x26, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 26) | UINT64_C(1)));
  /* 126268: stp x25, x0, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 25));
    arc_st64(_pa + 8, ARC_X_R(c, 0));
  }
  /* 12626c: str x8, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 8));
  /* 126270: cmp x22, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 1));
  /* 126274: b.eq #0x126284 */
  if (ARC_COND(c, 0)) goto L_126284;
L_126278:;
  /* 126278: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 12627c: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* 126280: bl #0x1449d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1204868));
  fn1_1449d8(c);
L_126284:;
  /* 126284: str wzr, [x23, x21] */
  arc_st32((ARC_X_R(c, 23) + ARC_X_R(c, 21)), ARC_W_R(c, 31));
  /* 126288: add x10, sp, #8 */
  ARC_X_W(c, 10, ((c)->sp + UINT64_C(8)));
  /* 12628c: ldr x3, [x20, #0x10] */
  ARC_X_W(c, 3, arc_ld64((ARC_X_R(c, 20) + INT64_C(16))));
  /* 126290: ldrb w8, [sp, #8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(8))));
  /* 126294: ldr x9, [sp, #0x18] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(24))));
  /* 126298: orr x23, x10, #4 */
  ARC_X_W(c, 23, (ARC_X_R(c, 10) | UINT64_C(4)));
  /* 12629c: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 1262a0: csel x1, x23, x9, eq */
  ARC_X_W(c, 1, (ARC_COND(c, 0) ? (ARC_X_R(c, 23)) : ARC_X_R(c, 9)));
  /* 1262a4: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
  /* 1262a8: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 1262ac: bl #0x144270 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1204912));
  fn1_144270(c);
  /* 1262b0: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 1262b4: cmp x0, x24 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 24));
  /* 1262b8: b.hi #0x12638c */
  if (ARC_COND(c, 8)) goto L_12638c;
  /* 1262bc: cmp x21, #5 */
  (void)arc_sub64(c, ARC_X_R(c, 21), UINT64_C(5));
  /* 1262c0: b.hs #0x1262d8 */
  if (ARC_COND(c, 2)) goto L_1262d8;
  /* 1262c4: lsl w8, w21, #1 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 21)) << ((UINT64_C(1)) & 31)));
  /* 1262c8: mov x22, x19 */
  ARC_X_W(c, 22, ARC_X_R(c, 19));
  /* 1262cc: strb w8, [x22], #4 */
  { const uint64_t _a = ARC_X_R(c, 22);
    ARC_X_W(c, 22, ARC_X_R(c, 22) + INT64_C(4));
    arc_st8(_a, ARC_W_R(c, 8));
  }
  /* 1262d0: cbnz x21, #0x126300 */
  if ((ARC_X_R(c, 21)) != 0) goto L_126300;
  /* 1262d4: b #0x126310 */
  goto L_126310;
L_1262d8:;
  /* 1262d8: orr x8, x21, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 21) | UINT64_C(1)));
  /* 1262dc: mov w9, #8 */
  ARC_W_W(c, 9, UINT64_C(8));
  /* 1262e0: cmp x8, #5 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(5));
  /* 1262e4: csinc x24, x9, x8, eq */
  ARC_X_W(c, 24, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 8)) + 1)));
  /* 1262e8: lsl x0, x24, #2 */
  ARC_X_W(c, 0, ((uint64_t)(ARC_X_R(c, 24)) << ((UINT64_C(2)) & 63)));
  /* 1262ec: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1204976));
  fn1_1428f0(c);
  /* 1262f0: orr x8, x24, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 24) | UINT64_C(1)));
  /* 1262f4: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 1262f8: stp x21, x0, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 21));
    arc_st64(_pa + 8, ARC_X_R(c, 0));
  }
  /* 1262fc: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
L_126300:;
  /* 126300: lsl x2, x21, #2 */
  ARC_X_W(c, 2, ((uint64_t)(ARC_X_R(c, 21)) << ((UINT64_C(2)) & 63)));
  /* 126304: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 126308: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* 12630c: bl #0x144a20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1205008));
  fn1_144a20(c);
L_126310:;
  /* 126310: ldrb w8, [sp, #8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(8))));
  /* 126314: str wzr, [x22, x21, lsl #2] */
  arc_st32((ARC_X_R(c, 22) + ((uint64_t)(ARC_X_R(c, 21)) << 2)), ARC_W_R(c, 31));
  /* 126318: add x10, x19, #4 */
  ARC_X_W(c, 10, (ARC_X_R(c, 19) + UINT64_C(4)));
  /* 12631c: ldrb w9, [x19] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 19)));
  /* 126320: ldr x11, [sp, #0x18] */
  ARC_X_W(c, 11, arc_ld64(((c)->sp + INT64_C(24))));
  /* 126324: ldr x3, [x20, #0x10] */
  ARC_X_W(c, 3, arc_ld64((ARC_X_R(c, 20) + INT64_C(16))));
  /* 126328: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 12632c: ldp x12, x8, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 12, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* 126330: lsr x13, x9, #1 */
  ARC_X_W(c, 13, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(1)) & 63)));
  /* 126334: csel x1, x23, x11, eq */
  ARC_X_W(c, 1, (ARC_COND(c, 0) ? (ARC_X_R(c, 23)) : ARC_X_R(c, 11)));
  /* 126338: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* 12633c: csel x0, x10, x8, eq */
  ARC_X_W(c, 0, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 8)));
  /* 126340: csel x8, x13, x12, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 13)) : ARC_X_R(c, 12)));
  /* 126344: add x2, x8, #1 */
  ARC_X_W(c, 2, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* 126348: bl #0x144270 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1205068));
  fn1_144270(c);
  /* 12634c: ldrb w8, [sp, #8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(8))));
  /* 126350: tbz w8, #0, #0x126368 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_126368;
  /* 126354: ldr x8, [sp, #8] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(8))));
  /* 126358: ldr x0, [sp, #0x18] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(24))));
  /* 12635c: lsl x8, x8, #2 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) << ((UINT64_C(2)) & 63)));
  /* 126360: and x1, x8, #0xfffffffffffffff8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551608)));
  /* 126364: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1205096));
  fn1_142608(c);
L_126368:;
  /* 126368: ldp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 12636c: ldp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 126370: ldp x24, x23, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 126374: ldp x26, x25, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* 126378: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 12637c: add sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(112)));
  /* 126380: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 126384: ret  */
  return;
L_126388:;
  /* 126388: bl #0xe2274 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1205132));
  fn1_e2274(c);
L_12638c:;
  /* 12638c: bl #0xe2274 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1205136));
  fn1_e2274(c);
  /* 126390: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 126394: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 126398: bl #0x142d58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1205148));
  fn1_142d58(c);
  /* 12639c: b #0x1263a4 */
  goto L_1263a4;
  /* 1263a0: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
L_1263a4:;
  /* 1263a4: ldrb w8, [sp, #8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(8))));
  /* 1263a8: tbz w8, #0, #0x1263c0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1263c0;
  /* 1263ac: ldr x8, [sp, #8] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(8))));
  /* 1263b0: ldr x0, [sp, #0x18] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(24))));
  /* 1263b4: lsl x8, x8, #2 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) << ((UINT64_C(2)) & 63)));
  /* 1263b8: and x1, x8, #0xfffffffffffffff8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551608)));
  /* 1263bc: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1205184));
  fn1_142608(c);
L_1263c0:;
  /* 1263c0: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1263c4: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1205192));
  fn1_9cc20(c);
}

void fn1_12874c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039142220));
  /* 12874c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 128750: stp x29, x30, [sp, #-0x60]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-96));
    (c)->sp = (c)->sp + INT64_C(-96);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 128754: str x27, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 27));
  /* 128758: stp x26, x25, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* 12875c: stp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 128760: stp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 128764: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 128768: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 12876c: cmp x2, x3 */
  (void)arc_sub64(c, ARC_X_R(c, 2), ARC_X_R(c, 3));
  /* 128770: mov w19, wzr */
  ARC_W_W(c, 19, ARC_W_R(c, 31));
  /* 128774: b.eq #0x128808 */
  if (ARC_COND(c, 0)) goto L_128808;
  /* 128778: mov x20, x4 */
  ARC_X_W(c, 20, ARC_X_R(c, 4));
  /* 12877c: cbz x4, #0x128808 */
  if ((ARC_X_R(c, 4)) == 0) goto L_128808;
  /* 128780: mov x21, x3 */
  ARC_X_W(c, 21, ARC_X_R(c, 3));
  /* 128784: mov x22, x2 */
  ARC_X_W(c, 22, ARC_X_R(c, 2));
  /* 128788: mov x23, x1 */
  ARC_X_W(c, 23, ARC_X_R(c, 1));
  /* 12878c: mov x24, x0 */
  ARC_X_W(c, 24, ARC_X_R(c, 0));
  /* 128790: mov w19, wzr */
  ARC_W_W(c, 19, ARC_W_R(c, 31));
  /* 128794: mov w27, #1 */
  ARC_W_W(c, 27, UINT64_C(1));
L_128798:;
  /* 128798: ldr x0, [x24, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 24) + INT64_C(16))));
  /* 12879c: sub x25, x21, x22 */
  ARC_X_W(c, 25, (ARC_X_R(c, 21) - ARC_X_R(c, 22)));
  /* 1287a0: bl #0x1443c0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1214372));
  fn1_1443c0(c);
  /* 1287a4: mov x26, x0 */
  ARC_X_W(c, 26, ARC_X_R(c, 0));
  /* 1287a8: str x0, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 0));
  /* 1287ac: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 1287b0: mov x1, x25 */
  ARC_X_W(c, 1, ARC_X_R(c, 25));
  /* 1287b4: mov x2, x23 */
  ARC_X_W(c, 2, ARC_X_R(c, 23));
  /* 1287b8: bl #0x144480 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1214396));
  fn1_144480(c);
  /* 1287bc: mov x25, x0 */
  ARC_X_W(c, 25, ARC_X_R(c, 0));
  /* 1287c0: cbz x26, #0x1287cc */
  if ((ARC_X_R(c, 26)) == 0) goto L_1287cc;
  /* 1287c4: mov x0, x26 */
  ARC_X_W(c, 0, ARC_X_R(c, 26));
  /* 1287c8: bl #0x1443c0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1214412));
  fn1_1443c0(c);
L_1287cc:;
  /* 1287cc: cbz x25, #0x1287e4 */
  if ((ARC_X_R(c, 25)) == 0) goto L_1287e4;
  /* 1287d0: add x8, x25, #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 25) + UINT64_C(2)));
  /* 1287d4: cmp x8, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(2));
  /* 1287d8: b.lo #0x128808 */
  if (ARC_COND(c, 3)) goto L_128808;
  /* 1287dc: mov w8, w25 */
  ARC_W_W(c, 8, ARC_W_R(c, 25));
  /* 1287e0: b #0x1287ec */
  goto L_1287ec;
L_1287e4:;
  /* 1287e4: mov w25, #1 */
  ARC_W_W(c, 25, UINT64_C(1));
  /* 1287e8: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
L_1287ec:;
  /* 1287ec: cmp x27, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 27), ARC_X_R(c, 20));
  /* 1287f0: add w19, w8, w19 */
  ARC_W_W(c, 19, (ARC_W_R(c, 8) + ARC_W_R(c, 19)));
  /* 1287f4: b.hs #0x128808 */
  if (ARC_COND(c, 2)) goto L_128808;
  /* 1287f8: add x22, x22, x25 */
  ARC_X_W(c, 22, (ARC_X_R(c, 22) + ARC_X_R(c, 25)));
  /* 1287fc: add x27, x27, #1 */
  ARC_X_W(c, 27, (ARC_X_R(c, 27) + UINT64_C(1)));
  /* 128800: cmp x22, x21 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 21));
  /* 128804: b.ne #0x128798 */
  if (ARC_COND(c, 1)) goto L_128798;
L_128808:;
  /* 128808: mov w0, w19 */
  ARC_W_W(c, 0, ARC_W_R(c, 19));
  /* 12880c: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 128810: ldr x27, [sp, #0x10] */
  ARC_X_W(c, 27, arc_ld64(((c)->sp + INT64_C(16))));
  /* 128814: ldp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 128818: ldp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 12881c: ldp x26, x25, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* 128820: ldp x29, x30, [sp], #0x60 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(96);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 128824: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 128828: ret  */
  return;
  /* 12882c: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1214512));
  fn1_a1454(c);
  /* 128830: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 128834: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 128838: bl #0x135428 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1214524));
  fn1_135428(c);
  /* 12883c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 128840: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1214532));
  fn1_9cc20(c);
}

void fn1_12a48c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039149708));
  /* 12a48c: bti c */
  /* bti: no architectural effect here */
  /* 12a490: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 12a494: ret  */
  return;
}

void fn1_12bb6c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039155564));
  /* 12bb6c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 12bb70: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 12bb74: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 12bb78: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 12bb7c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 12bb80: bl #0x1440d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1227652));
  fn1_1440d8(c);
  /* 12bb84: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 12bb88: mov w1, #0x10 */
  ARC_W_W(c, 1, UINT64_C(16));
  /* 12bb8c: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 12bb90: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 12bb94: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 12bb98: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_131ac0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039179968));
  /* 131ac0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 131ac4: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 131ac8: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 131acc: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 131ad0: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 131ad4: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 131ad8: ldr x8, [x8, #0xc80] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3200))));
  /* 131adc: ldr x0, [x0, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 131ae0: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* 131ae4: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* 131ae8: bl #0x144210 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1252076));
  fn1_144210(c);
  /* 131aec: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 131af0: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 131af4: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 131af8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 131afc: b #0x143ec8 */
  fn1_143ec8(c); return;
  /* 131b00: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1252100));
  fn1_a1454(c);
}

void fn1_134b9c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039192476));
  /* 134b9c: bti c */
  /* bti: no architectural effect here */
  /* 134ba0: add x0, x0, #0x3d0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(976)));
  /* 134ba4: ret  */
  return;
}

void fn1_136d24(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039201060));
  /* 136d24: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 136d28: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 136d2c: str x23, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 23));
  /* 136d30: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 136d34: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 136d38: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 136d3c: sub w8, w1, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 1) - UINT64_C(1)));
  /* 136d40: mov w19, w1 */
  ARC_W_W(c, 19, ARC_W_R(c, 1));
  /* 136d44: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 136d48: cmp w8, #0x10 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(16));
  /* 136d4c: b.hi #0x136d64 */
  if (ARC_COND(c, 8)) goto L_136d64;
  /* 136d50: nop  */
  /* nop: no architectural effect here */
  /* 136d54: adr x9, #0x7725c */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(488028)));
  /* 136d58: ldrsw x8, [x9, w8, uxtw #2] */
  ARC_X_W(c, 8, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 9) + ((uint64_t)(((uint64_t)(uint32_t)(ARC_W_R(c, 8)))) << 2)))));
  /* 136d5c: add x21, x9, x8 */
  ARC_X_W(c, 21, (ARC_X_R(c, 9) + ARC_X_R(c, 8)));
  /* 136d60: b #0x136d6c */
  goto L_136d6c;
L_136d64:;
  /* 136d64: adrp x21, #0x51000 */
  ARC_X_W(c, 21, (arc_image_bases[1] + UINT64_C(331776)));
  /* 136d68: add x21, x21, #0x1ca */
  ARC_X_W(c, 21, (ARC_X_R(c, 21) + UINT64_C(458)));
L_136d6c:;
  /* 136d6c: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 136d70: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 136d74: ldr x8, [x8, #0x910] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2320))));
  /* 136d78: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* 136d7c: str x8, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 8));
  /* 136d80: bl #0x142860 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1273220));
  fn1_142860(c);
  /* 136d84: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 136d88: add x0, x0, #0x19 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(25)));
  /* 136d8c: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1273232));
  fn1_1428f0(c);
  /* 136d90: add x23, x0, #0x18 */
  ARC_X_W(c, 23, (ARC_X_R(c, 0) + UINT64_C(24)));
  /* 136d94: stp x22, x22, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 22));
  }
  /* 136d98: add x2, x22, #1 */
  ARC_X_W(c, 2, (ARC_X_R(c, 22) + UINT64_C(1)));
  /* 136d9c: str wzr, [x0, #0x10] */
  arc_st32((ARC_X_R(c, 0) + INT64_C(16)), ARC_W_R(c, 31));
  /* 136da0: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 136da4: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 136da8: bl #0x1449d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1273260));
  fn1_1449d8(c);
  /* 136dac: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 136db0: ldr x8, [x8, #0xe38] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3640))));
  /* 136db4: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* 136db8: stp x8, x23, [x20] */
  { const uint64_t _pa = ARC_X_R(c, 20);
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 136dbc: str w19, [x20, #0x10] */
  arc_st32((ARC_X_R(c, 20) + INT64_C(16)), ARC_W_R(c, 19));
  /* 136dc0: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 136dc4: ldr x23, [sp, #0x10] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(16))));
  /* 136dc8: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 136dcc: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 136dd0: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 136dd4: ret  */
  return;
}

void fn1_139be0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039213024));
  /* 139be0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 139be4: sub sp, sp, #0x80 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(128)));
  /* 139be8: stp x29, x30, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 139bec: str x21, [sp, #0x60] */
  arc_st64(((c)->sp + INT64_C(96)), ARC_X_R(c, 21));
  /* 139bf0: stp x20, x19, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 139bf4: add x29, sp, #0x50 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(80)));
  /* 139bf8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 139bfc: nop  */
  /* nop: no architectural effect here */
  /* 139c00: adr x8, #0x5240d */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(336909)));
  /* 139c04: nop  */
  /* nop: no architectural effect here */
  /* 139c08: adr x20, #0x156d40 */
  ARC_X_W(c, 20, (arc_image_bases[1] + UINT64_C(1404224)));
  /* 139c0c: stp xzr, xzr, [x29, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-16));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 139c10: stp x8, x1, [x29, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-32));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 1));
  }
  /* 139c14: cbz x1, #0x139c34 */
  if ((ARC_X_R(c, 1)) == 0) goto L_139c34;
  /* 139c18: str wzr, [x1] */
  arc_st32(ARC_X_R(c, 1), ARC_W_R(c, 31));
  /* 139c1c: nop  */
  /* nop: no architectural effect here */
  /* 139c20: adr x8, #0x159210 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 139c24: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 139c28: tbz w8, #0, #0x139d34 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_139d34;
L_139c2c:;
  /* 139c2c: str x20, [x1, #8] */
  arc_st64((ARC_X_R(c, 1) + INT64_C(8)), ARC_X_R(c, 20));
  /* 139c30: b #0x139c44 */
  goto L_139c44;
L_139c34:;
  /* 139c34: nop  */
  /* nop: no architectural effect here */
  /* 139c38: adr x8, #0x159210 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 139c3c: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 139c40: tbz w8, #0, #0x139d60 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_139d60;
L_139c44:;
  /* 139c44: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* 139c48: add x1, sp, #0x20 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(32)));
  /* 139c4c: str wzr, [sp, #0x20] */
  arc_st32(((c)->sp + INT64_C(32)), ARC_W_R(c, 31));
  /* 139c50: str x20, [sp, #0x28] */
  arc_st64(((c)->sp + INT64_C(40)), ARC_X_R(c, 20));
  /* 139c54: bl #0x139da4 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1285208));
  fn1_139da4(c);
  /* 139c58: tbnz w0, #0, #0x139d18 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) != 0) goto L_139d18;
  /* 139c5c: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 139c60: ldr x9, [x8, #0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(24))));
  /* 139c64: ldur q0, [x8, #8] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(8))), arc_ld64((ARC_X_R(c, 8) + INT64_C(8)) + 8));
  /* 139c68: str x9, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 9));
  /* 139c6c: str q0, [sp] */
  arc_st64((c)->sp, (c)->q[0].u64[0]);
  arc_st64((c)->sp + 8, (c)->q[0].u64[1]);
  /* 139c70: stp xzr, xzr, [x8, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 8) + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 139c74: str xzr, [x8, #0x18] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(24)), ARC_X_R(c, 31));
  /* 139c78: ldr x20, [x19, #8] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* 139c7c: stp xzr, xzr, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 139c80: cbz x20, #0x139cd0 */
  if ((ARC_X_R(c, 20)) == 0) goto L_139cd0;
  /* 139c84: add x1, x20, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* 139c88: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 139c8c: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1285264));
  fn1_bd950(c);
  /* 139c90: cbnz x0, #0x139cd0 */
  if ((ARC_X_R(c, 0)) != 0) goto L_139cd0;
  /* 139c94: mov x21, x20 */
  ARC_X_W(c, 21, ARC_X_R(c, 20));
  /* 139c98: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 139c9c: ldr x8, [x21], #0x10 */
  { const uint64_t _a = ARC_X_R(c, 21);
    ARC_X_W(c, 21, ARC_X_R(c, 21) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_a));
  }
  /* 139ca0: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 139ca4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1285288));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 139ca8: ldar x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 139cac: cbz x8, #0x139cc0 */
  if ((ARC_X_R(c, 8)) == 0) goto L_139cc0;
  /* 139cb0: add x1, x20, #0x10 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(16)));
  /* 139cb4: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 139cb8: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1285308));
  fn1_bd950(c);
  /* 139cbc: cbnz x0, #0x139cd0 */
  if ((ARC_X_R(c, 0)) != 0) goto L_139cd0;
L_139cc0:;
  /* 139cc0: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 139cc4: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 139cc8: ldr x8, [x8, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* 139ccc: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1285328));
  arc_dispatch(c, ARC_X_R(c, 8));
L_139cd0:;
  /* 139cd0: ldr w8, [sp, #0x20] */
  ARC_W_W(c, 8, arc_ld32(((c)->sp + INT64_C(32))));
  /* 139cd4: cbz w8, #0x139d00 */
  if ((ARC_W_R(c, 8)) == 0) goto L_139d00;
  /* 139cd8: ldrb w8, [sp] */
  ARC_W_W(c, 8, arc_ld8((c)->sp));
  /* 139cdc: ldr x9, [sp, #0x10] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(16))));
  /* 139ce0: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 139ce4: mov x8, sp */
  ARC_X_W(c, 8, (c)->sp);
  /* 139ce8: csinc x3, x9, x8, ne */
  ARC_X_W(c, 3, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 8)) + 1)));
  /* 139cec: nop  */
  /* nop: no architectural effect here */
  /* 139cf0: adr x2, #0x52107 */
  ARC_X_W(c, 2, (arc_image_bases[1] + UINT64_C(336135)));
  /* 139cf4: sub x0, x29, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* 139cf8: add x1, sp, #0x20 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(32)));
  /* 139cfc: bl #0x138aa8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1285376));
  fn1_138aa8(c);
L_139d00:;
  /* 139d00: ldrb w8, [sp] */
  ARC_W_W(c, 8, arc_ld8((c)->sp));
  /* 139d04: tbz w8, #0, #0x139d18 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_139d18;
  /* 139d08: ldr x8, [sp] */
  ARC_X_W(c, 8, arc_ld64((c)->sp));
  /* 139d0c: ldr x0, [sp, #0x10] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(16))));
  /* 139d10: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 139d14: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1285400));
  fn1_142608(c);
L_139d18:;
  /* 139d18: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 139d1c: ldp x20, x19, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 139d20: ldr x21, [sp, #0x60] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(96))));
  /* 139d24: ldp x29, x30, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 139d28: add sp, sp, #0x80 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(128)));
  /* 139d2c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 139d30: ret  */
  return;
L_139d34:;
  /* 139d34: nop  */
  /* nop: no architectural effect here */
  /* 139d38: adr x0, #0x159210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 139d3c: str x1, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 1));
  /* 139d40: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1285444));
  fn1_1424b8(c);
  /* 139d44: ldr x1, [x29, #0x18] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 29) + INT64_C(24))));
  /* 139d48: cbz w0, #0x139c2c */
  if ((ARC_W_R(c, 0)) == 0) goto L_139c2c;
  /* 139d4c: nop  */
  /* nop: no architectural effect here */
  /* 139d50: adr x0, #0x159210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 139d54: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1285464));
  fn1_1424d0(c);
  /* 139d58: ldr x1, [x29, #0x18] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 29) + INT64_C(24))));
  /* 139d5c: b #0x139c2c */
  goto L_139c2c;
L_139d60:;
  /* 139d60: nop  */
  /* nop: no architectural effect here */
  /* 139d64: adr x0, #0x159210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 139d68: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1285484));
  fn1_1424b8(c);
  /* 139d6c: cbz w0, #0x139c44 */
  if ((ARC_W_R(c, 0)) == 0) goto L_139c44;
  /* 139d70: nop  */
  /* nop: no architectural effect here */
  /* 139d74: adr x0, #0x159210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 139d78: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1285500));
  fn1_1424d0(c);
  /* 139d7c: b #0x139c44 */
  goto L_139c44;
  /* 139d80: ldrb w8, [sp] */
  ARC_W_W(c, 8, arc_ld8((c)->sp));
  /* 139d84: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 139d88: tbz w8, #0, #0x139d9c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_139d9c;
  /* 139d8c: ldr x8, [sp] */
  ARC_X_W(c, 8, arc_ld64((c)->sp));
  /* 139d90: ldr x0, [sp, #0x10] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(16))));
  /* 139d94: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 139d98: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1285532));
  fn1_142608(c);
L_139d9c:;
  /* 139d9c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 139da0: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1285540));
  fn1_9cc20(c);
}

void fn1_140654(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039240276));
  /* 140654: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 140658: sub sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(96)));
  /* 14065c: stp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 140660: str x19, [sp, #0x50] */
  arc_st64(((c)->sp + INT64_C(80)), ARC_X_R(c, 19));
  /* 140664: add x29, sp, #0x40 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(64)));
  /* 140668: adrp x8, #0x51000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(331776)));
  /* 14066c: add x8, x8, #0x733 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1843)));
  /* 140670: stp x0, xzr, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 0));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 140674: stp x8, x1, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 1));
  }
  /* 140678: cbz x1, #0x14069c */
  if ((ARC_X_R(c, 1)) == 0) goto L_14069c;
  /* 14067c: str wzr, [x1] */
  arc_st32(ARC_X_R(c, 1), ARC_W_R(c, 31));
  /* 140680: nop  */
  /* nop: no architectural effect here */
  /* 140684: adr x8, #0x159210 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 140688: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 14068c: tbz w8, #0, #0x140740 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_140740;
L_140690:;
  /* 140690: nop  */
  /* nop: no architectural effect here */
  /* 140694: adr x8, #0x156d40 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1404224)));
  /* 140698: str x8, [x1, #8] */
  arc_st64((ARC_X_R(c, 1) + INT64_C(8)), ARC_X_R(c, 8));
L_14069c:;
  /* 14069c: ldrb w8, [x0] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 0)));
  /* 1406a0: ldr x9, [x0, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 1406a4: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 1406a8: csinc x0, x9, x0, ne */
  ARC_X_W(c, 0, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 0)) + 1)));
  /* 1406ac: bl #0x144840 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1312432));
  fn1_144840(c);
  /* 1406b0: mov w19, w0 */
  ARC_W_W(c, 19, ARC_W_R(c, 0));
  /* 1406b4: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 1406b8: b.ne #0x140724 */
  if (ARC_COND(c, 1)) goto L_140724;
  /* 1406bc: bl #0x142a58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1312448));
  fn1_142a58(c);
  /* 1406c0: nop  */
  /* nop: no architectural effect here */
  /* 1406c4: adr x8, #0x159208 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 1406c8: ldr w1, [x0] */
  ARC_W_W(c, 1, arc_ld32(ARC_X_R(c, 0)));
  /* 1406cc: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 1406d0: tbz w8, #0, #0x140780 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_140780;
L_1406d4:;
  /* 1406d4: nop  */
  /* nop: no architectural effect here */
  /* 1406d8: adr x0, #0x156d38 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1404216)));
  /* 1406dc: mov w9, #2 */
  ARC_W_W(c, 9, UINT64_C(2));
  /* 1406e0: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 1406e4: mov x2, sp */
  ARC_X_W(c, 2, (c)->sp);
  /* 1406e8: stp x1, x0, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 1));
    arc_st64(_pa + 8, ARC_X_R(c, 0));
  }
  /* 1406ec: stp x9, x0, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 0));
  }
  /* 1406f0: ldr x8, [x8, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* 1406f4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1312504));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1406f8: tbnz w0, #0, #0x140724 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) != 0) goto L_140724;
  /* 1406fc: ldr x0, [sp, #8] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(8))));
  /* 140700: ldr w2, [sp] */
  ARC_W_W(c, 2, arc_ld32((c)->sp));
  /* 140704: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* 140708: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 14070c: ldr x8, [x8, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* 140710: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1312532));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 140714: tbnz w0, #0, #0x140724 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) != 0) goto L_140724;
  /* 140718: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 14071c: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* 140720: bl #0x13d8bc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1312548));
  fn1_13d8bc(c);
L_140724:;
  /* 140724: cmn w19, #1 */
  (void)arc_add32(c, ARC_W_R(c, 19), UINT64_C(1), 0);
  /* 140728: cset w0, ne */
  ARC_W_W(c, 0, (ARC_COND(c, 1) ? 1 : 0));
  /* 14072c: ldp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 140730: ldr x19, [sp, #0x50] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(80))));
  /* 140734: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* 140738: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 14073c: ret  */
  return;
L_140740:;
  /* 140740: nop  */
  /* nop: no architectural effect here */
  /* 140744: adr x8, #0x159210 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 140748: str x0, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 0));
  /* 14074c: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 140750: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 140754: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1312600));
  fn1_1424b8(c);
  /* 140758: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 14075c: ldr x0, [x29, #0x18] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(24))));
  /* 140760: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 140764: cbz w8, #0x140690 */
  if ((ARC_W_R(c, 8)) == 0) goto L_140690;
  /* 140768: nop  */
  /* nop: no architectural effect here */
  /* 14076c: adr x0, #0x159210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 140770: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1312628));
  fn1_1424d0(c);
  /* 140774: ldr x0, [x29, #0x18] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(24))));
  /* 140778: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 14077c: b #0x140690 */
  goto L_140690;
L_140780:;
  /* 140780: nop  */
  /* nop: no architectural effect here */
  /* 140784: adr x0, #0x159208 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 140788: str x1, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 1));
  /* 14078c: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1312656));
  fn1_1424b8(c);
  /* 140790: ldr x1, [x29, #0x18] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 29) + INT64_C(24))));
  /* 140794: cbz w0, #0x1406d4 */
  if ((ARC_W_R(c, 0)) == 0) goto L_1406d4;
  /* 140798: nop  */
  /* nop: no architectural effect here */
  /* 14079c: adr x0, #0x159208 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 1407a0: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1312676));
  fn1_1424d0(c);
  /* 1407a4: ldr x1, [x29, #0x18] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 29) + INT64_C(24))));
  /* 1407a8: b #0x1406d4 */
  goto L_1406d4;
}

void fn1_142800(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039248896));
  /* 142800: adrp x16, #0x151000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 142804: ldr x17, [x16, #0xfe0] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(4064))));
  /* 142808: add x16, x16, #0xfe0 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(4064)));
  /* 14280c: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 142810: nop  */
  /* nop: no architectural effect here */
  /* 142814: nop  */
  /* nop: no architectural effect here */
}

void fn1_142e00(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039250432));
  /* 142e00: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 142e04: ldr x17, [x16, #0x1e0] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(480))));
  /* 142e08: add x16, x16, #0x1e0 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(480)));
  /* 142e0c: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 142e10: nop  */
  /* nop: no architectural effect here */
  /* 142e14: nop  */
  /* nop: no architectural effect here */
}

void fn1_143400(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039251968));
  /* 143400: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 143404: ldr x17, [x16, #0x3e0] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(992))));
  /* 143408: add x16, x16, #0x3e0 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(992)));
  /* 14340c: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 143410: nop  */
  /* nop: no architectural effect here */
  /* 143414: nop  */
  /* nop: no architectural effect here */
}

void fn1_143a00(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039253504));
  /* 143a00: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 143a04: ldr x17, [x16, #0x5e0] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(1504))));
  /* 143a08: add x16, x16, #0x5e0 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(1504)));
  /* 143a0c: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 143a10: nop  */
  /* nop: no architectural effect here */
  /* 143a14: nop  */
  /* nop: no architectural effect here */
}

void fn1_144000(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039255040));
  /* 144000: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 144004: ldr x17, [x16, #0x7e0] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(2016))));
  /* 144008: add x16, x16, #0x7e0 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(2016)));
  /* 14400c: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 144010: nop  */
  /* nop: no architectural effect here */
  /* 144014: nop  */
  /* nop: no architectural effect here */
}

void fn1_144600(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039256576));
  /* 144600: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 144604: ldr x17, [x16, #0x9e0] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(2528))));
  /* 144608: add x16, x16, #0x9e0 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(2528)));
  /* 14460c: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 144610: nop  */
  /* nop: no architectural effect here */
  /* 144614: nop  */
  /* nop: no architectural effect here */
}

