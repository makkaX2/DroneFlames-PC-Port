shader_type canvas_item;
render_mode unshaded;
// R332 ZOOM332 strategic map: the whole world as one quad (world/strat_layer.gd). Colour map (terrain box-filtered
// to ~512 texels, strat_layer) + country tint + borders measured in SCREEN px on the owners texture (L8, 1 texel per
// cell): dark outline | country colour band | light inner line; war borders as a pulsing red / ink hazard band;
// alliance / political / my-land views; closed-sky lattice; the overlord's dashed stripe. Outside the world: a dark
// sea with a thin frame. Uniform names follow territory.gdshader (same values, pushed by strat_layer.gd).

// R334 STRAT334: palette-index terrain (world/strat_terrain.gd): class * 4 + tone, hand-built mips, read with texelFetch
// at the level where one texel covers >= 1 screen pixel (crisp at every zoom; was a 512 box-filtered colour map)
uniform sampler2D terrain_idx : filter_nearest_mipmap, repeat_disable;  // mipmap filter: levels > 0 exist for texelFetch on every renderer
uniform vec4 pal[64] : source_color;
uniform float idx_cells = 1.0;  // cells per level-0 texel
uniform int idx_levels = 0;  // last mip level
uniform float lod_bias = 0.15;
uniform sampler2D owner_tex : filter_nearest, repeat_disable;
uniform vec2 world_size = vec2(1024.0);  // cells
uniform vec4 colors[9] : source_color;
uniform vec4 ally_cols[9] : source_color;
uniform vec4 over_cols[9] : source_color;
uniform vec4 sky_cols[9] : source_color;  // coverer colour per host (alpha 0 = open sky)
uniform int war_bits[9];
uniform int map_mode = 0;
uniform int player_id = 0;
uniform float px_world = 8.0;  // world px per screen px
uniform float fade = 1.0;
uniform vec4 outline_col : source_color = vec4(0.043, 0.078, 0.188, 1.0);
uniform vec4 war_col : source_color = vec4(0.91, 0.25, 0.165, 1.0);
uniform vec4 sea_out : source_color = vec4(0.055, 0.094, 0.188, 1.0);

// R387: the season (owner: «на стратегической карте не видно время года, там простое лето»). The same formulas and
// textures as the terrain (season_common: climate, fbm, accumulated snow, phase — pushed by StratLayer::_season_sync from
// TerrainView.season_mat) + spal: 64 x 8, x = palette index, y = LUT row (1 LATE .. 6 SPRING, 7 SNOW), alpha 0 = keep.
// Decided per terrain texel (its centre cell): crisp and stable when the camera moves, like the index map itself.
#include "res://world/season_common.gdshaderinc"
uniform int season_on = 0;
uniform sampler2D spal : filter_nearest, repeat_disable;

varying vec2 wpos;

void vertex() {
	wpos = VERTEX;
}

// = season_terrain.gdshader season_land(): the LUT row pair by T (+ patches), then the accumulated snow
vec3 strat_season_land(int idx, ivec2 cell, vec3 src) {
	int cls = idx >> 2;
	int tone = idx & 3;
	vec2 clim = season_clim_at(cell);
	float phi = season_phi;
	float T = season_T(phi, clim.x);
	bool warm = season_warm_at(cell, phi);
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
	int row = (season_row_q(cell, clim.y) >= f) ? ra : rb;
	vec3 col = src;
	if (row != 0) {
		vec4 l = texelFetch(spal, ivec2(idx, row), 0);
		if (l.a > 0.5) {
			col = l.rgb;
		}
	}
	float sk = cls == 8 ? 0.7 : (cls == 13 ? 0.6 : (cls == 15 ? 0.6 : 1.0)); // pine canopy, towns, scars: patchy
	float cover = season_snow_at(cell) * sk;
	if (cover > 0.0) {
		vec4 s = texelFetch(spal, ivec2(idx, 7), 0);
		if (s.a > 0.5) {
			float tb = tone == 3 ? 0.0 : (float(tone) + 1.0) / 3.0; // shade order: lip, 0, 1, 2
			tb = tb + (1.0 - 2.0 * tb) * season_flip_g(phi);
			float q = season_snow_q(cell, clim.y, tb);
			col = mix(col, s.rgb, clamp((cover - q) / 0.06 + 0.5, 0.0, 1.0));
		}
	}
	return col;
}

// = season_water.gdshaderinc, simplified to the strat classes: rivers, lakes and the coastal shallows freeze by T_lag
// (+ ragged noise), snow on thick ice, spring ice drift (dark leads) where it froze; the open sea never freezes.
vec3 strat_season_water(int idx, ivec2 cell, vec3 src) {
	int cls = idx >> 2;
	int tone = idx & 3;
	float thr = -10.0;
	if (cls == 4) {
		thr = 0.12; // river (1-2 cells: edge 0.16 / 2nd strip 0.10)
	} else if (cls == 3) {
		thr = tone == 3 ? 0.16 : 0.08; // lake shore / depths
	} else if (cls == 2) {
		thr = tone == 3 ? -0.02 : -0.06; // shore fast ice / shallows (cold coasts only)
	}
	if (thr < -1.0) {
		return src;
	}
	vec2 clim = season_clim_at(cell);
	float nz = (clim.y - 0.5) * 0.06;
	float tl = season_T(season_phi - SEASON_LAG_ICE, clim.x) + nz;
	float hs = cell_hash(cell);
	vec3 i1 = mix(vec3(0.776, 0.855, 0.910), src, 0.12); // clear ice, one step calmer
	vec3 i2 = mix(vec3(0.624, 0.741, 0.839), src, 0.12); // thin / wet ice
	vec3 w6 = mix(vec3(0.231, 0.447, 0.725), src, 0.3); // open leads
	if (tl < thr) {
		float m = thr - tl;
		vec3 c = m < 0.02 ? i2 : i1;
		if (cls == 4) {
			return mix(c, src, 0.45); // a frozen river stays a blue line on the snow
		}
		if (season_snow_at(cell) > 0.5 && m > 0.04 && hs > 0.35) {
			c = mix(c, vec3(0.886, 0.902, 0.933), 0.7); // snow on thick ice (drifts)
		}
		return c;
	}
	bool froze = season_T(SEASON_PHI_COLD, clim.x) + nz < thr;
	if (season_warming(season_phi) && froze) {
		float f = (tl - thr) / 0.06;
		if (f < 1.0) {
			return hs < f ? w6 : i2;
		}
	}
	return src;
}

int owner_at(vec2 cf) {
	ivec2 c = clamp(ivec2(floor(cf)), ivec2(0), ivec2(world_size) - ivec2(1));
	return int(texelFetch(owner_tex, c, 0).r * 255.0 + 0.5);
}

bool at_war(int a, int b) {
	return a > 0 && b > 0 && a < 9 && b < 9 && ((war_bits[a] >> b) & 1) != 0;
}

vec3 grade_land(vec3 c, float k) {
	float l = dot(c, vec3(0.299, 0.587, 0.114));
	return mix(c, vec3(l), k);
}

void fragment() {
	vec2 wsz = world_size * 4.0;
	float u = px_world;  // world px per screen px
	vec2 cf = wpos / 4.0;
	vec2 dw = abs(dFdx(wpos)) + abs(dFdy(wpos));  // world px per physical pixel (before any branch)
	// ---- outside the world: dark sea + a 1 px light frame 1 px off the edge
	if (wpos.x < 0.0 || wpos.y < 0.0 || wpos.x >= wsz.x || wpos.y >= wsz.y) {
		vec2 d2 = max(max(-wpos, wpos - wsz), vec2(0.0));
		float d = max(d2.x, d2.y) / u;
		vec3 c = sea_out.rgb;
		if (d >= 1.0 && d < 2.0) {
			c = mix(c, vec3(0.82, 0.86, 0.9), 0.55);
		} else if (d < 1.0) {
			c = outline_col.rgb;
		}
		COLOR = vec4(c, fade);
	} else {
		float rho = max(dw.x, dw.y) / (4.0 * idx_cells);  // level-0 texels per physical pixel
		int li = clamp(int(ceil(log2(max(rho, 0.0001)) - lod_bias)), 0, idx_levels);
		ivec2 ts = textureSize(terrain_idx, li);
		ivec2 tc = clamp(ivec2(floor(cf / (idx_cells * exp2(float(li))))), ivec2(0), ts - ivec2(1));
		int idx = clamp(int(texelFetch(terrain_idx, tc, li).r * 255.0 + 0.5), 0, 63);
		vec3 base = pal[idx].rgb;
		bool water = idx < 20;  // classes 0..4: deep, sea, shallow, lake, river
		if (season_on == 1) {
			// R387: the season of this texel, decided at its centre cell
			float tcell = idx_cells * exp2(float(li));
			ivec2 scell = clamp(ivec2((vec2(tc) + 0.5) * tcell), ivec2(0), ivec2(world_size) - ivec2(1));
			base = water ? strat_season_water(idx, scell, base) : strat_season_land(idx, scell, base);
		}
		vec3 grey = vec3(dot(base, vec3(0.299, 0.587, 0.114)));
		int o = owner_at(cf);
		bool mine = o > 0 && o == player_id;
		// map views, as map_mode.gdshader does on the normal map
		if (map_mode == 1) {
			base = water ? mix(base, grey, 0.45) * 0.85 : mix(base, grey, 0.85) * 0.8 + 0.12;
		} else if (map_mode == 2) {
			if (!mine) {
				base = water ? mix(base, grey, 0.75) * 0.5 : grey * 0.42 + vec3(0.05, 0.055, 0.07);
			}
		} else if (map_mode == 3) {
			base = mix(base, grey, 0.8) * (mine ? 0.72 : 0.5);
		} else if (map_mode == 4) {
			base = mix(base, grey, 0.85) * 0.45;
		} else if (map_mode == 5) {
			base = mix(base, grey, 0.65) * 0.72;
		} else if (map_mode == 6) {
			base = water ? mix(base, grey, 0.45) * 0.8 : mix(base, grey, 0.85) * 0.6 + 0.12;
		} else if (map_mode == 7) {
			base = water ? mix(base, grey, 0.6) * 0.6 : mix(base, grey, 0.8) * 0.62 + 0.04;
		}
		// borders in screen px: 1 px outline, colour band to 2.5 px, light line to 4.5 px
		float dmin = 99.0;
		bool war = false;
		float ru[3] = float[](1.0, 2.5, 4.5);
		for (int i = 0; i < 3; i++) {
			float r = ru[i] * u / 4.0;
			int n0 = owner_at(cf + vec2(r, 0.0));
			int n1 = owner_at(cf - vec2(r, 0.0));
			int n2 = owner_at(cf + vec2(0.0, r));
			int n3 = owner_at(cf - vec2(0.0, r));
			if (n0 != o || n1 != o || n2 != o || n3 != o) {
				dmin = min(dmin, ru[i]);
				if (o > 0 && (at_war(o, n0) || at_war(o, n1) || at_war(o, n2) || at_war(o, n3))) {
					war = true;
				}
			}
		}
		vec3 col = base;
		if (o > 0) {
			vec3 cc = colors[min(o, 8)].rgb;
			float fa = mine ? 0.42 : 0.34;
			if (map_mode == 1) {
				fa = 0.6;
			} else if (map_mode == 3 || map_mode == 4 || map_mode == 7) {
				fa = 0.14;  // R334: the view's overlay carries the colour
			} else if (map_mode == 5) {
				fa = 0.2;
			} else if (map_mode == 6) {
				vec4 ac = ally_cols[min(o, 8)];
				cc = ac.a > 0.5 ? ac.rgb : vec3(0.55, 0.55, 0.53);
				fa = ac.a > 0.5 ? 0.5 : 0.25;
			} else if (map_mode == 2 && !mine) {
				cc = vec3(0.55, 0.55, 0.53);
				fa = 0.3;
			}
			col = mix(base, cc, fa);
			vec4 sk = sky_cols[min(o, 8)];
			vec2 sp = wpos / u;
			bool sky_v = map_mode <= 2 || map_mode == 5;  // R334: not over the ores / logistics / alliances / AD views
			if (sk.a > 0.5 && sky_v) {
				// closed sky: a dotted lattice in the coverer's colour
				vec2 g = mod(floor(sp), 6.0);
				if (g.x == 0.0 && g.y == 0.0) {
					col = mix(col, sk.rgb, 0.85);
				}
			}
			if (dmin < 1.5) {
				col = outline_col.rgb;
			} else if (war) {
				// front line: a 3.5 px red / ink hazard band, pulsing (any country colour)
				float pulse = 0.5 + 0.5 * sin(TIME * 4.0);
				bool st = mod(floor((sp.x + sp.y) / 3.0), 2.0) < 1.0;
				col = mix(war_col.rgb, st ? war_col.rgb * 1.15 : outline_col.rgb, 0.45 + 0.4 * pulse);
			} else if (dmin < 3.0) {
				col = cc;
			} else if (dmin < 5.0) {
				if (sk.a > 0.5 && sky_v) {
					col = sk.rgb;
				} else if (over_cols[min(o, 8)].a > 0.5) {
					bool dash = mod(floor((sp.x + sp.y) / 4.0), 2.0) < 1.0;
					col = dash ? over_cols[min(o, 8)].rgb : mix(cc, vec3(1.0), 0.55);
				} else {
					col = mix(cc, vec3(1.0), 0.55);
				}
			}
		} else if (dmin < 1.5) {
			col = mix(base, outline_col.rgb, 0.85);  // outer outline on unowned land / sea
		}
		COLOR = vec4(col, fade);
	}
}
