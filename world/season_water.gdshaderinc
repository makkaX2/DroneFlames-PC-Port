// SEASONS385 zone B (docs/SEASONS385.md §3.7): ice, ice drift, spring flood. FROZEN SIGNATURE (stage 0) — zone B fills the
// body. Called by world/season_terrain.gdshader for key classes >= 12:
//   cls 12 BANK  (fresh-water bank, ring 1): tone = (lift <= 3 ? 1 : 0) + 4 * (colour s1 ? 1 : 0);
//                src = the bank's seasonal LAND colour (autumn / snow already applied: g4 bank -> GRASS tone 0, s1 -> SAND tone 1)
//   cls 13 RIVER 0 edge w3, 1 second strip w4, 2 fairway w5
//   cls 14 LAKE  0 shore w2, 1 second strip, 2-6 depth bands, 7 marsh pool
//   cls 15 SEA   0-9 depth ramp index, 10 / 11 shore foam w0 / w1
// T = T(phi, c), T_lag = T(phi - LAG_ICE, c), warming = season_warming(phi), clim = (c, G), src = the summer (baked) colour.
// Helpers from season_common.gdshaderinc (bayer4, cell_hash, season_cover, season_T, season_phi) are in scope.
//
// Zone B rules (the same thresholds / noise as Seasons::ice_at and IceLayer::breakup_at on the CPU):
// - a water cell is frozen when T_lag + nz < thr(class), nz = (G - 0.5) * 0.06 (a ragged ice edge, whole cells);
//   marsh pools 0.20 -> river / lake shore 0.16 -> lake 2nd strip 0.12 -> river 2nd strip 0.10 -> lake depths 0.08 .. -0.02
//   -> river fairway 0.02 (a wide river keeps a polynya in the temperate belt) -> sea: shore fast ice -0.02, shallows
//   -0.05 / -0.08 / -0.11 by depth (only cold northern coasts reach it), deeper sea never; rapids / pools / quays are key 0 (never reach here);
// - new ice (first 0.02 of T below the threshold) is thin grey i2, then clear i1 with diagonal cracks; snow on the ice
//   from cover 0.5 (n3), windswept blue streaks stay; the bank itself (ring 1, LAND season) turns n0 under snow, so
//   the frozen river reads as a pale band between two dark rims;
// - autumn: slush (i2 specks) just above the threshold; open water among ice is dark (w6: a polynya);
// - spring, only where the water froze this winter: T_lag up to ICE_BREAK above the threshold = ice drift: wet grey ice
//   breaks into dark leads (w6), the open share grows with f; the fairway opens first, the rims last (lower threshold);
//   IceLayer draws the moving floes on top;
// - spring flood (only where it froze): T 0.26..0.50, peak 0.38; low banks go under water first, high ones at the peak.
// Colours: palette terrain19 (+ i1 / i2 of §3.2) only — no blending.

const vec3 SW_I1 = vec3(0.776, 0.855, 0.910); // i1 #c6dae8 clear ice
const vec3 SW_I2 = vec3(0.624, 0.741, 0.839); // i2 #9fbdd6 thin / wet ice
const vec3 SW_N0 = vec3(0.557, 0.612, 0.753); // n0 shaded bank under snow
const vec3 SW_N2 = vec3(0.780, 0.812, 0.886); // n2
const vec3 SW_N3 = vec3(0.886, 0.902, 0.933); // n3 snow on ice
const vec3 SW_N4 = vec3(0.973, 0.965, 0.925); // n4 ridges
const vec3 SW_W1 = vec3(0.741, 0.878, 0.925); // w1 clear ice sheen
const vec3 SW_W3 = vec3(0.467, 0.702, 0.871); // w3 flood rim
const vec3 SW_W4 = vec3(0.361, 0.612, 0.835); // w4 flood water
const vec3 SW_W6 = vec3(0.231, 0.447, 0.725); // w6 open water among ice, leads
const vec3 SW_D1 = vec3(0.478, 0.384, 0.255); // d1 muddy flood spots
const vec3 SW_G3 = vec3(0.204, 0.408, 0.169); // g3 wet grass beside the flood
const vec3 SW_S0 = vec3(0.659, 0.580, 0.431); // s0 wet sand beside the flood

// elongated patches (3 x 5 cells along the diagonals, shifted by the low noise): snow drifts, leads, open water — never
// a per-cell checkerboard on a 1-2 cell river
float sw_patch(ivec2 cell, float g) {
	return cell_hash(ivec2((cell.x + cell.y + int(g * 9.0)) / 3, (cell.x - cell.y + 8192) / 5));
}

float sw_thr(int cls, int tone) {
	if (cls == 13) {
		return tone == 0 ? 0.16 : (tone == 1 ? 0.10 : 0.02);
	}
	if (cls == 14) {
		return tone == 7 ? 0.20 : (tone == 0 ? 0.16 : (tone == 1 ? 0.12 : 0.08 - 0.02 * float(tone - 2)));
	}
	if (cls == 15) {
		// fast ice grows out from the shore over the shallows on cold coasts (ramp 1..3), the open sea never freezes
		return tone >= 10 ? -0.02 : (tone == 1 ? -0.05 : (tone == 2 ? -0.08 : (tone == 3 ? -0.11 : -10.0)));
	}
	return -10.0;
}

// a frozen cell; m = how far below the threshold (0 = just frozen)
vec3 sw_ice(int cls, int tone, ivec2 cell, float m, vec2 clim, float bay, float hs) {
	float g = clim.y;
	float cover = season_cover(season_phi, clim.x);
	if (cls == 15) {
		if (tone >= 10 || (tone <= 2 && m >= 0.02)) {
			// fast ice on the shore: pressure ridges (1 in 5 cells on the shore line), snow drifts, cyan clear ice
			if (tone >= 10 && hs < 0.2) {
				return SW_N4;
			}
			if (cover > 0.5 && sw_patch(cell, g) < cover * 0.6) {
				return SW_N3;
			}
			return sw_patch(cell + ivec2(7, 3), g) < 0.4 ? SW_I1 : SW_W1;
		}
		// the outer edge: grey young pack ice, open leads in broken diagonal lines
		if ((cell.x * 2 + cell.y + int(g * 18.0)) % 9 == 0) {
			return SW_W6;
		}
		return SW_I2;
	}
	if (m < 0.02) {
		return hs < 0.3 ? SW_W4 : SW_I2; // thin new ice, dark water still showing through
	}
	// snow on the ice from cover 0.5, in drifts (at most ~30 % of the ice): the frozen river stays a blue line on the snow
	float sn = clamp(cover * 0.7 - 0.35, 0.0, 0.3);
	if (sw_patch(cell, g) < sn) {
		return SW_N3;
	}
	// clear ice: a cyan sheen (w1) with frosted patches (i1) and diagonal cracks (i2) — reads as ice, not as snow, on any
	// snow ramp (the snow is lavender n0..n4, the ice cyan)
	bool crack = (cell.x + cell.y + int(g * 24.0)) % 7 == 0 && hs < 0.8;
	if (crack) {
		return SW_I2;
	}
	return sw_patch(cell + ivec2(7, 3), g) < 0.35 ? SW_I1 : SW_W1;
}

// the fresh-water bank in spring: the flood (src = the land season of the bank)
vec3 sw_bank(int tone, ivec2 cell, float T, float T_lag, bool warming, vec2 clim, vec3 src) {
	float nz = (clim.y - 0.5) * 0.06;
	// winter: the shaded bank slope beside the frozen water is always the dark snow tone n0 (the ice edge), so a frozen
	// river reads as a pale band between two dark rims on any snow
	if (T_lag + nz < 0.16 && season_cover(season_phi, clim.x) > 0.25) {
		return SW_N0;
	}
	if (!warming || T < 0.26 || T > 0.50) {
		return src;
	}
	if (season_T(SEASON_PHI_COLD, clim.x) + nz >= 0.16) {
		return src; // no ice, no snow melt: no flood (the warm south)
	}
	float fl = 1.0 - abs(T - 0.38) / 0.12;
	bool low = (tone & 1) != 0;
	float need = low ? 0.15 + 0.2 * clim.y : 0.45; // critic R385: the flood must read (was 0.3 / 0.6)
	float hs = cell_hash(cell);
	if (fl > need) {
		if (fl - need < 0.08) {
			return SW_W3; // the rim of the flood
		}
		return (hs < 0.12 && fl - need > 0.15) ? SW_D1 : SW_W4; // muddy spots in the flood water
	}
	if (fl > need - 0.12) {
		return (tone & 4) != 0 ? SW_S0 : SW_G3; // wet ground beside the water
	}
	return src;
}

// the 2nd ring of a low bank (a land cell next to a BANK cell of tone ntone) goes under water near the flood peak;
// called by season_terrain.gdshader for land cells beside a bank in the flood window (zone A, critic R385)
vec3 season_flood2(int ntone, ivec2 cell, float T, bool warming, vec2 clim, vec3 src) {
	if (!warming || T < 0.26 || T > 0.50) {
		return src;
	}
	float nz = (clim.y - 0.5) * 0.06;
	if (season_T(SEASON_PHI_COLD, clim.x) + nz >= 0.16) {
		return src; // the warm south: no ice, no flood
	}
	float fl = 1.0 - abs(T - 0.38) / 0.12;
	bool low = (ntone & 1) != 0;
	float need = low ? 0.45 + 0.2 * clim.y : 0.75;
	if (fl > need) {
		return fl - need < 0.08 ? SW_W3 : SW_W4;
	}
	if (fl > need - 0.12) {
		return (ntone & 4) != 0 ? SW_S0 : SW_G3; // wet ground beside the water
	}
	return src;
}

vec3 season_water(int cls, int tone, ivec2 cell, float T, float T_lag, bool warming, vec2 clim, vec3 src) {
	if (cls == 12) {
		return sw_bank(tone, cell, T, T_lag, warming, clim, src);
	}
	float thr = sw_thr(cls, tone);
	if (thr < -1.0) {
		return src;
	}
	// spring: the 2nd strip of a river / lake breaks up with its rims (on a diagonal 2-cell river the strips alternate
	// cell by cell — different dates would give a checkerboard); the fairway still opens first
	bool strip2 = (cls == 13 || cls == 14) && tone == 1;
	if (warming && strip2) {
		thr = 0.16;
	}
	float nz = (clim.y - 0.5) * 0.06;
	float tl = T_lag + nz;
	float bay = bayer4(cell);
	float hs = cell_hash(cell);
	if (tl < thr) {
		return sw_ice(cls, tone, cell, thr - tl, clim, bay, hs);
	}
	bool froze = season_T(SEASON_PHI_COLD, clim.x) + nz < thr; // this water froze this winter
	if (warming && froze) {
		float f = (tl - thr) / 0.06;
		if (f < 1.0) {
			// ice drift: dark leads open in the wet grey ice, more every day
			if (sw_patch(cell, clim.y) * 0.55 + hs * 0.45 < f) {
				return SW_W6;
			}
			return (hs > 0.85 && f < 0.4 && cls != 15) ? SW_I1 : SW_I2;
		}
	}
	// open water while the shore ice of the same water holds: slush on the 2nd strip, a dark polynya on the fairway / lake
	// depths (slush at its rim)
	if (tl < 0.16) {
		if (strip2) {
			return SW_I2;
		}
		if ((cls == 13 && tone == 2) || (cls == 14 && tone >= 2 && tone <= 6)) {
			return tl - thr < 0.02 ? SW_I2 : SW_W6;
		}
	}
	if (!warming && cls != 15) {
		// autumn: slush specks just above the threshold (sea: none)
		float a = 1.0 - (tl - thr) / 0.03;
		if (a > 0.0 && hs < a * 0.3) {
			return SW_I2;
		}
	}
	return src;
}
