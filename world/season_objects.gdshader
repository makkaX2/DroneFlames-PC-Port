shader_type canvas_item;
render_mode unshaded;
// SEASONS385 zone A (docs/SEASONS385.md §3.6, §4.6): snow caps on the object layer (crowns, roofs, parapets, conifers).
// The top 1-2 opaque pixels of every sprite column (not 1-px twigs; whole surface of wide flat roofs) whiten by the snow cover of the world cell under them: first snow =
// rare white spots, deep winter = full caps, spring = melting spots. Light from the upper left: n4 on the lit left edge,
// n2 on the right edge, n3 / n4 between. Set on ObjectsLayer (chunks use the parent material) only while snow is in the
// view: the rest of the year the layer draws plain (zero cost).

#include "res://world/season_common.gdshaderinc"

const vec3 SNOW2 = vec3(0.780, 0.812, 0.886); // n2 #c7cfe2
const vec3 SNOW3 = vec3(0.886, 0.902, 0.933); // n3 #e2e6ee
const vec3 SNOW4 = vec3(0.973, 0.965, 0.925); // n4 #f8f6ec

varying vec2 wpos;

void vertex() {
	wpos = (MODEL_MATRIX * vec4(VERTEX, 0.0, 1.0)).xy;
}

void fragment() {
	vec4 t0 = texture(TEXTURE, UV);
	vec4 c = COLOR; // R386: COLOR already = texture x modulate (t0 * COLOR squared the texture: objects darkened while snow was on)
	if (c.a > 0.99) {
		vec2 px = TEXTURE_PIXEL_SIZE;
		// walk up to the column top (<= 8 px): d = depth below it. A flat roof = every pixel between this one and the
		// outline row has this pixel's colour -> the whole roof surface takes snow if wide; otherwise only the top 2 px (caps
		// on crowns, parapets, ridges).
		float d = 0.0;
		bool bad = false;
		bool pdiff = false;
		for (int k = 1; k <= 8; k++) {
			vec4 a = texture(TEXTURE, UV - vec2(0.0, float(k) * px.y));
			if (a.a < 0.5) {
				d = float(k);
				break;
			}
			bad = bad || pdiff; // the row right under the top (the outline) does not count
			pdiff = distance(a.rgb, t0.rgb) > 0.10;
		}
		bool r_edge = texture(TEXTURE, UV + vec2(px.x, 0.0)).a < 0.5;
		bool l_edge = texture(TEXTURE, UV - vec2(px.x, 0.0)).a < 0.5;
		if (l_edge && r_edge) {
			d = 0.0; // a 1-px twig / mast: no snow (a winter forest must not turn into white ripple)
		}
		// the whole roof surface only on a WIDE uniform roof (panel blocks, sheds: >= 9 px of the same colour); small
		// houses and crowns keep a 1-2 px cap, so part of the roof and the wall still show
		vec4 wl = texture(TEXTURE, UV - vec2(4.0 * px.x, 0.0));
		vec4 wr = texture(TEXTURE, UV + vec2(4.0 * px.x, 0.0));
		bool wide = wl.a > 0.5 && wr.a > 0.5 && distance(wl.rgb, t0.rgb) < 0.10 && distance(wr.rgb, t0.rgb) < 0.10;
		if (d > 2.0 && (bad || !wide)) {
			d = 0.0;
		}
		if (d > 0.0) {
			ivec2 cell = ivec2(floor(wpos / 4.0));
			vec2 cl = season_clim_at(cell);
			float cover = season_cover(season_phi, cl.x);
			float q = 0.85 * season_snow_q(cell, cl.y, 0.5) + 0.15 * min(d - 1.0, 1.0); // the caps follow the ground snow
			if (q < cover) {
				vec3 s = r_edge ? SNOW2 : ((l_edge || d < 1.5) ? SNOW4 : SNOW3); // lit left edge / top row, flat n3 inside
				c.rgb = s;
			}
		}
	}
	COLOR = c;
}
