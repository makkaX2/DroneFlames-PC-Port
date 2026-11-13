shader_type canvas_item;
render_mode unshaded;
// SEASONS385 zone C / R386 WEATHER386 (render/weather_layer.cpp): the weather veil, ONE quad over the view, but only UNDER
// the storm clouds of the cloud field (world/weather_field.gdshaderinc): rain / sleet = wet, darker light; snow = a light
// grey haze, a blizzard = a thick one; morning fog banks along the thin cloud fringe. Soft edges: the intensity ramps over
// ~0.1 of D (several cells) and is stepped in 4 levels by Bayer 4x4 on the 4-px world grid (no smooth gradients).

#include "res://world/season_common.gdshaderinc"
#include "res://world/weather_field.gdshaderinc"

uniform float rain_k = 0.0;   // 0..1: the veil strength (fades out at far zoom; 0 = no veil)
uniform float fog_k = 0.0;    // 0..1: morning fog of spring / autumn (the hour and the season, from C++)
uniform float haze_k = 1.0;   // 0 = «ОБЛАКА» off: no fog / snow haze (the rain darkening stays)
uniform int force_w = -1;     // harness: weather everywhere (Seasons::W_*), intensity force_i
uniform float force_i = 1.0;
uniform vec3 c_fog : source_color = vec3(0.780, 0.812, 0.886);   // n2
uniform vec3 c_bliz : source_color = vec3(0.780, 0.812, 0.886);  // n2: a grey haze reads over white snow
uniform vec3 c_wet : source_color = vec3(0.16, 0.19, 0.27);      // r0-ish blue grey

varying vec2 wp;

void vertex() {
	wp = VERTEX;
}

void fragment() {
	ivec2 ic = ivec2(floor(wp / 4.0));
	float b = bayer4(ic);
	// R395 MAPUX (UX review: a dotted grid over the ground in winter / at night): far out the 4-px world grid is 1-2 screen
	// px and the Bayer steps read as an ordered dot lattice over the whole storm. There the threshold goes flat (the 4
	// levels stay as soft bands, no dots); up close (cells >= 3 screen px) exactly as before.
	b = mix(b, 0.5, smoothstep(1.4, 2.6, fwidth(wp.x)));
	float d = wf_density(vec2(ic) + 0.5);
	float p = smoothstep(WF_RAIN - 0.03, WF_RAIN + 0.06, d); // R387: 0.05 / 0.08 -> 0.03 / 0.06 (narrower storm band)
	float T = season_T(season_phi, season_clim_at(ic).x);
	bool snow = T < SEASON_SNOW_T;
	bool bliz = T < 0.05 && d > WF_RAIN + 0.05;
	if (force_w >= 0) {
		p = (force_w == 4 || force_w == 0) ? 0.0 : force_i;
		snow = force_w == 2 || force_w == 3;
		bliz = force_w == 3;
	}
	float a = 0.0;
	vec3 col = c_wet;
	if (p > 0.0) {
		if (snow) {
			float lv = (bliz ? 0.34 : 0.12) * haze_k;
			a = floor(p * 4.0 + b) / 4.0 * lv * rain_k;
			col = c_bliz;
		} else {
			a = floor(p * 4.0 + b) / 4.0 * 0.15 * rain_k;
		}
	}
	if (fog_k > 0.0 && haze_k > 0.0) {
		float fi = clamp((d - WF_CL) / 0.06, 0.0, 1.0) * clamp((WF_RAIN - d) / 0.06, 0.0, 1.0);
		if (force_w == 4) {
			fi = force_i;
		}
		float af = floor(fi * 4.0 + b) / 4.0 * 0.35 * fog_k;
		if (af > a) {
			a = af;
			col = c_fog;
		}
	}
	COLOR = vec4(col, a);
}
