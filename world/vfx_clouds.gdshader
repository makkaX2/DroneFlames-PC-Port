shader_type canvas_item;
render_mode unshaded;
// v0.19 clouds (render/vfx_clouds.cpp): ONE quad over the view. Soft stepped cloud SHADOWS at every zoom + WorldBox-like
// pixel clouds at far zoom only. R386 WEATHER386: the clouds are the weather — the field is Seasons' deterministic cloud
// field (world/weather_field.gdshaderinc: wind-carried noise, cyclones), the same on every peer; dense dark storm clouds
// (D > WF_DENSE .. WF_RAIN) are where it rains / snows, light white clouds elsewhere. One field sample per CELL (4 world px):
// the clouds stay on the map's pixel grid.

#include "res://world/weather_field.gdshaderinc"

uniform float cloud_a = 0.0;    // 0 = no cloud bodies (zoomed in / setting off)
uniform float shadow_a = 0.1;
uniform vec2 shadow_off = vec2(-48.0, -72.0);  // world px: the shadow falls down-right of its cloud
uniform vec4 clear_pts[8];      // xy world point, z 1 / radius (v0.20), w opacity at its centre
uniform int clear_n = 0;
uniform vec4 fire_pts[8];       // R390 FIRE: burning districts: xy world, z 1 / radius, w strength
uniform int fire_n = 0;
uniform float fire_k = 0.0;     // night factor
// v0.20: clouds thin over the player's land and the land of countries at war with him (land_tex: low-res opacity mask,
// linear = soft edges) and fade to ~0.2 in targeting modes (dim). R386: storm clouds keep most of their opacity.
uniform sampler2D land_tex : filter_linear;
uniform vec2 land_px = vec2(0.0);  // world px covered by land_tex; 0 = off
uniform float dim = 1.0;
uniform vec3 c_lit : source_color = vec3(1.0, 1.0, 1.0);
uniform vec3 c_mid : source_color = vec3(0.886, 0.914, 0.949);
uniform vec3 c_shade : source_color = vec3(0.776, 0.820, 0.886); // R387: lighter (fair-weather clouds read white, not grey)
uniform vec3 c_storm_lit : source_color = vec3(0.639, 0.671, 0.733);
uniform vec3 c_storm : source_color = vec3(0.490, 0.522, 0.592);
uniform vec3 c_storm_dark : source_color = vec3(0.361, 0.392, 0.459);
uniform vec3 c_shadow : source_color = vec3(0.02, 0.06, 0.12);

varying vec2 wp;

void vertex() {
	wp = VERTEX;
}

float bayer4(vec2 p) {
	ivec2 i = ivec2(mod(p, 4.0));
	int k = i.x + i.y * 4;
	float m[16] = float[16](0.0, 8.0, 2.0, 10.0, 12.0, 4.0, 14.0, 6.0, 3.0, 11.0, 1.0, 9.0, 15.0, 7.0, 13.0, 5.0);
	return (m[k] + 0.5) / 16.0;
}

float clear_f(vec2 p) {
	float f = 1.0;
	for (int i = 0; i < 8; i++) {
		if (i >= clear_n) {
			break;
		}
		vec4 c = clear_pts[i];
		float q = distance(p, c.xy) * c.z;
		f = min(f, mix(c.w, 1.0, smoothstep(0.45, 1.0, q)));
	}
	return f;
}

float land_f(vec2 p) {
	return land_px.x < 1.0 ? 1.0 : texture(land_tex, p / land_px).r;
}

void fragment() {
	vec2 cell = floor(wp / 4.0);
	// R395 MAPUX: far out (4-px cells of 1-2 screen px) the Bayer steps read as a dot lattice - the threshold goes flat
	float bq = mix(bayer4(cell), 0.5, smoothstep(1.4, 2.6, fwidth(wp.x)));
	vec2 pc = cell + 0.5;
#ifdef SHADOW_ONLY
	float sd = wf_density(pc + shadow_off / 4.0);
#else
	// R389: one systems loop per pixel (wf_sys): the shadow, the body and its light slope share the warp of this cell
	vec3 sy = wf_sys(pc);
	float sd = wf_core(pc + shadow_off / 4.0, sy);
#endif
	float sl = clamp((sd - 0.46) / 0.20, 0.0, 1.0);
	float sa = floor(sl * 3.0 + bq) / 3.0 * shadow_a * (1.0 + 1.4 * smoothstep(WF_DENSE, WF_RAIN + 0.10, sd));
	float ca = 0.0;
	vec3 col = c_mid;
#ifndef SHADOW_ONLY
	// (v0.20: vfx_clouds.cpp swaps in a SHADOW_ONLY build of this shader when zoomed in)
	if (cloud_a > 0.003) {
		vec4 bg = wf_big(pc);
		float d = wf_core_b(pc, sy, bg);
		if (d > WF_CL) {
			float st = smoothstep(WF_DENSE, WF_RAIN + 0.06, d);
			float k = cloud_a * dim * mix(clear_f(wp) * land_f(wp), 1.0, 0.6 * st);
			if (d > WF_CL + 0.02) {
				ca = floor(k * (d > WF_DENSE ? (d > WF_RAIN + 0.02 ? 0.97 : 0.88) : 0.84) * 8.0 + 0.5) / 8.0;
			} else {
				// 1-cell rim: half the pixels (ordered dither) = soft pixel edge
				ca = bayer4(cell) < 0.5 ? floor(k * 0.7 * 8.0 + 0.5) / 8.0 : 0.0;
			}
			// light from the upper left: a slope facing it is lit, the far side shaded
			float e = d - wf_core_b(pc - vec2(3.0), sy, bg); // (R389: the large-scale taps of this cell: 3 taps, not 5)
			int tone = e > 0.03 ? 2 : (e < -0.03 ? 0 : 1);
			col = tone == 2 ? c_lit : (tone == 1 ? c_mid : c_shade);
			// clean bands (no dither inside a body): white cloud / grey dense cloud / dark storm cloud
			if (d > WF_RAIN + 0.02) { // R387: dark = where it rains / snows (rare storm systems)
				col = tone == 2 ? c_storm : c_storm_dark;
			} else if (d > WF_DENSE) {
				col = tone == 2 ? c_storm_lit : c_storm;
			}
			// R390 FIRE: the fire glow on the night clouds over a burning district (3 steps + ordered dither, soft)
			if (fire_n > 0 && fire_k > 0.02) {
				float f = 0.0;
				for (int i = 0; i < 8; i++) {
					if (i >= fire_n) {
						break;
					}
					vec4 fp = fire_pts[i];
					f = max(f, (1.0 - length((wp - fp.xy) * fp.z)) * fp.w);
				}
				f = floor(clamp(f, 0.0, 1.0) * 3.0 + bq * 0.99) / 3.0;
				col = mix(col, tone == 2 ? vec3(1.0, 0.62, 0.32) : vec3(0.92, 0.38, 0.16), f * fire_k * 0.75);
			}
		}
	}
#endif
	float a = ca + sa * (1.0 - ca);
	vec3 rgb = (col * ca + c_shadow * sa * (1.0 - ca)) / max(a, 0.0001);
	COLOR = vec4(rgb, a);
}
