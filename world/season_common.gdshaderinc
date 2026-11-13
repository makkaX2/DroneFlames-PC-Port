// SEASONS385 core (docs/SEASONS385.md §2): the season formulas of render/seasons.cpp, 1:1 (only + - * /, fract, abs,
// clamp -> the GPU agrees with the CPU to one cell at a front). Included by world/season_terrain.gdshader and
// world/season_objects.gdshader. Uniforms are set by C++ (TerrainView) from the Seasons singleton.
// gl_compatibility (ios_sim): texelFetch / texture only, constant arrays as float[16](...).

uniform sampler2D season_clim : filter_linear, repeat_disable; // RG8, 1 texel = 4x4 cells: R cold c, G low noise
uniform vec2 season_clim_size = vec2(1.0); // blocks (bw, bh)
uniform float season_phi = 0.25; // phase of the year, 0 = 1 March

const float SEASON_PHI_COLD = 0.85;
const float SEASON_LAG_ICE = 0.03;
const float SEASON_LAG_SNOW = 0.015;
const float SEASON_SNOW_T = 0.22;
const float SEASON_SNOW_SPAN = 0.14;

float season_W(float phi) {
	float u = fract(phi - SEASON_PHI_COLD);
	float tri = 1.0 - abs(2.0 * u - 1.0);
	return tri * tri * (3.0 - 2.0 * tri);
}

bool season_warming(float phi) {
	return fract(phi - SEASON_PHI_COLD) < 0.5;
}

float season_T(float phi, float c) {
	return season_W(phi) + 0.35 - 0.6 * c;
}

// (B[(y&3)*4 + (x&3)] + 0.5) / 16 — Seasons::bayer
float bayer4(ivec2 cell) {
	float m[16] = float[16](0.0, 8.0, 2.0, 10.0, 12.0, 4.0, 14.0, 6.0, 3.0, 11.0, 1.0, 9.0, 15.0, 7.0, 13.0, 5.0);
	return (m[(cell.y & 3) * 4 + (cell.x & 3)] + 0.5) / 16.0;
}

// 0..1 — Seasons::cell_hash (uint32 wrap arithmetic)
float cell_hash(ivec2 cell) {
	uint h = uint(cell.x) * 0x8da6b343u ^ uint(cell.y) * 0xd8163841u;
	h ^= h >> 13u;
	h *= 0x5bd1e995u;
	h ^= h >> 15u;
	return float(h & 0xffffu) / 65535.0;
}

// SEASONS385 A: value noise on a lattice of `1 / scale` cells (smooth, per octave its own hash offset) and a 3-octave
// sum: 11 / 4.5 / 1.9 cells. The snow edge and the season patches follow its isolines (ragged, natural), never a
// regular dither. = Seasons::vnoise / fbm.
float season_vnoise(vec2 p, int oct) {
	vec2 i = floor(p);
	vec2 f = p - i;
	f = f * f * (3.0 - 2.0 * f);
	ivec2 b = ivec2(i) + ivec2(oct * 131, oct * 71);
	float a = cell_hash(b);
	float bb = cell_hash(b + ivec2(1, 0));
	float c = cell_hash(b + ivec2(0, 1));
	float d = cell_hash(b + ivec2(1, 1));
	return mix(mix(a, bb, f.x), mix(c, d, f.x), f.y);
}

// R386 critic: the same fbm baked once per cell by TerrainView::build (R8, byte / 255 = TerrainView::fbm_at): one fetch
// instead of 3 value noises; the formula stays as the fallback (season_fbm_on = 0).
uniform sampler2D season_fbm_tex : filter_nearest, repeat_disable;
uniform int season_fbm_on = 0;

float season_fbm(ivec2 cell) {
	if (season_fbm_on == 1) {
		ivec2 sz = textureSize(season_fbm_tex, 0);
		return texelFetch(season_fbm_tex, clamp(cell, ivec2(0), sz - 1), 0).r;
	}
	vec2 p = vec2(cell) + 0.5;
	return 0.50 * season_vnoise(p / 11.0, 1) + 0.32 * season_vnoise(p / 4.5, 2) + 0.18 * season_vnoise(p / 1.9, 3);
}

// 0..1 order of a cell in the snow front (low = whitens first in autumn): low noise G + fbm + tone bias (tb 0..1),
// stretched to 0..1; a 2 % cell hash only roughens the edge by a cell. = Seasons::snow_at
float season_snow_q(ivec2 cell, float g, float tb) {
	float q = 0.40 * g + 0.45 * season_fbm(cell) + 0.15 * tb + (cell_hash(cell) - 0.5) * 0.04;
	return clamp((q - 0.15) / 0.70, 0.0, 1.0);
}

// 0..1 order of a cell for the season row pick (§3.3): patches of 4-12 cells, ragged edges
float season_row_q(ivec2 cell, float g) {
	float q = 0.50 * g + 0.50 * season_fbm(cell + ivec2(53, 29)) + (cell_hash(cell) - 0.5) * 0.04;
	return clamp((q - 0.20) / 0.60, 0.0, 1.0);
}

// climate of a cell: x = cold c, y = low noise G (bilinear over block centres = Seasons::cold_at / noise_at)
vec2 season_clim_at(ivec2 cell) {
	vec2 uv = ((vec2(cell) + 0.5) / 4.0) / season_clim_size;
	return texture(season_clim, uv).rg;
}

// R386 WEATHER386: the snow cover is the ACCUMULATED snow of the snowfalls under the storm clouds (Seasons snow grid,
// R8, 1 texel = season_snow_bs cells, linear = the bilinear of Seasons::cover_at), no longer a formula of T.
uniform sampler2D season_snow : filter_linear, repeat_disable;
uniform vec2 season_snow_size = vec2(1.0); // grid (sw, sh)
uniform float season_snow_bs = 8.0; // cells per texel

float season_snow_at(ivec2 cell) {
	vec2 uv = ((vec2(cell) + 0.5) / season_snow_bs) / season_snow_size;
	return texture(season_snow, uv).r;
}

// The R385 call `season_cover(phi, c)` (objects, water, terrain) now reads the accumulation at the `cell` in scope at the
// call site (every caller has an `ivec2 cell` there). Kept as a macro so those files need no change.
#define season_cover(P, C) season_snow_at(cell)

// R386: cooling / warming rules cross-fade per cell in a FLIP_W window after each turning point (= Seasons::flip_g)
float season_flip_g(float phi) {
	float u = fract(phi - SEASON_PHI_COLD);
	if (u < 0.5) {
		return clamp(u / 0.05, 0.0, 1.0);
	}
	return 1.0 - clamp((u - 0.5) / 0.05, 0.0, 1.0);
}

// = Seasons::warm_cell
bool season_warm_at(ivec2 cell, float phi) {
	float g = season_flip_g(phi);
	return g >= 1.0 || cell_hash(cell + ivec2(17, 91)) < g;
}
