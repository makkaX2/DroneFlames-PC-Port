shader_type canvas_item;
render_mode unshaded;
// SEASONS385 zone A (docs/SEASONS385.md §3.3, §4.3): the season colour of the terrain sprite (TerrainView, 1 texel = 1 cell).
// The baked summer image is never re-baked: a per-cell key (R8: class * 16 + tone, 0 = unchanged) picks a LUT row pair by
// the cell temperature T (climate texture + phase) and dithers between them (Bayer by CELL + low noise G: the 4x4-px cell
// never splits). Snow cover on top (row 7), shadows whiten first in autumn, sunny tones melt first in spring.
// Water classes (>= 12) go to season_water() (zone B). The material is only set while the seasons are on (TerrainView).

#include "res://world/season_common.gdshaderinc"
#include "res://world/season_water.gdshaderinc"

uniform sampler2D key_tex : filter_nearest, repeat_disable; // R8 w x h
uniform sampler2D lut : filter_nearest, repeat_disable; // 256 x 8 RGBA, alpha 0 = keep the baked colour
uniform float wet = 0.0; // rain: land 6 % darker at 1 (zone C sets it)

vec4 lut_at(int key, int row) {
	return texelFetch(lut, ivec2(key, row), 0);
}

float snow_k(int cls, int tone) {
	if (cls == 3) {
		return 0.7; // PINE: snow in patches under the canopy
	}
	if (cls == 11) {
		if (tone < 6) {
			return 0.5; // roads, streets: dark slush
		}
		if (tone >= 9) {
			return 0.6; // craters, burnt
		}
	}
	return 1.0;
}

float tones_of(int cls) {
	if (cls == 4 || cls == 7 || cls == 9) {
		return 6.0;
	}
	if (cls == 10) {
		return 9.0;
	}
	if (cls == 11) {
		return 15.0;
	}
	return 5.0;
}

vec3 season_land(int key, ivec2 cell, float T, bool warm, vec2 clim, float phi, vec3 src) {
	int cls = key >> 4;
	int tone = key & 15;
	// 1. row pair by T (§3.3) + dither
	int ra = 0;
	int rb = 0;
	float f = 0.0;
	if (!warm) {
		if (T >= 0.80) { ra = 0; rb = 0; }
		else if (T >= 0.68) { ra = 0; rb = 1; f = (0.80 - T) / 0.12; }
		else if (T >= 0.58) { ra = 1; rb = 2; f = (0.68 - T) / 0.10; }
		else if (T >= 0.46) { ra = 2; rb = 3; f = (0.58 - T) / 0.12; }
		else if (T >= 0.34) { ra = 3; rb = 4; f = (0.46 - T) / 0.12; }
		else { ra = 4; rb = 4; }
	} else {
		if (T <= 0.22) { ra = 4; rb = 4; }
		else if (T <= 0.32) { ra = 4; rb = 5; f = (T - 0.22) / 0.10; }
		else if (T <= 0.48) { ra = 5; rb = 6; f = (T - 0.32) / 0.16; }
		else if (T <= 0.62) { ra = 6; rb = 0; f = (T - 0.48) / 0.14; }
		else { ra = 0; rb = 0; }
	}
	// patches by multi-octave noise (no regular dither): a whole cell takes one row; edges ragged by the fine octave
	int row = (season_row_q(cell, clim.y) >= f) ? ra : rb;
	vec3 col = src;
	if (row != 0) {
		vec4 l = lut_at(key, row);
		if (l.a > 0.5) {
			col = l.rgb;
		}
	}
	// 2. snow cover (row 7)
	float cover = season_snow_at(cell) * snow_k(cls, tone); // R386: accumulated snow
	if (cover > 0.0) {
		float n = tones_of(cls);
		float tb = float(tone) / (n - 1.0);
		tb = tb + (1.0 - 2.0 * tb) * season_flip_g(phi); // cross-faded at the turning points (= Seasons::snow_at)
		float q = season_snow_q(cell, clim.y, tb); // = Seasons::snow_at
		if (q < cover) {
			vec4 s = lut_at(key, 7);
			if (s.a > 0.5) {
				col = s.rgb;
			}
		}
	}
	return col;
}

void fragment() {
	vec4 src = texture(TEXTURE, UV);
	ivec2 cell = ivec2(floor(UV * vec2(textureSize(TEXTURE, 0))));
	int key = int(texelFetch(key_tex, cell, 0).r * 255.0 + 0.5);
	vec3 col = src.rgb;
	if (key != 0) {
		int cls = key >> 4;
		vec2 clim = season_clim_at(cell);
		float phi = season_phi;
		float T = season_T(phi, clim.x);
		bool warm = season_warm_at(cell, phi); // R386: per-cell cross-fade at the turning points (no whole-map jump)
		if (cls < 12) {
			col = season_land(key, cell, T, warm, clim, phi, src.rgb);
			if (warm && T > 0.26 && T < 0.50 && cls != 7 && cls != 8 && cls != 10 && cls != 11) {
				// spring flood: the 2nd ring of a low bank (a neighbour is a BANK cell) floods near the peak
				int nk = 0;
				ivec2 off[4] = ivec2[4](ivec2(1, 0), ivec2(-1, 0), ivec2(0, 1), ivec2(0, -1));
				for (int i = 0; i < 4; i++) {
					int k2 = int(texelFetch(key_tex, clamp(cell + off[i], ivec2(0), textureSize(key_tex, 0) - 1), 0).r * 255.0 + 0.5);
					if ((k2 >> 4) == 12) {
						nk = k2;
						break;
					}
				}
				if (nk != 0) {
					col = season_flood2(nk & 15, cell, T, warm, clim, col);
				}
			}
			col *= 1.0 - wet * 0.06;
		} else {
			vec3 base = src.rgb;
			if (cls == 12) {
				// fresh-water bank: the land season first (g4 -> GRASS tone 0, s1 -> SAND tone 1), then zone B's flood
				int lk = ((key & 4) != 0) ? (5 * 16 + 1) : (1 * 16 + 0);
				base = season_land(lk, cell, T, warm, clim, phi, src.rgb);
			}
			col = season_water(cls, key & 15, cell, T, season_T(phi - SEASON_LAG_ICE, clim.x), warm, clim, base);
		}
	}
	COLOR = vec4(col, src.a);
}
