// R386 WEATHER386: the cloud field of render/seasons.cpp (Seasons::cloud_eval), 1:1 in float. D(cell) = 0.62 A + 0.38 B +
// 0.55 (M - 0.5) + cyclone convergence + season bias; A, B carried by the wind (B faster and sheared: shapes morph), M = large
// wet / dry areas; cyclones swirl the sample point (spiral arms). Uniforms set by Seasons::wf_uniforms (clouds, veil).
// Units: cells (1 cell = 4 world px). gl_compatibility: texture() only; fract() wraps by hand (Compatibility clamped
// repeat_enable at the tile edge in v0.19).

uniform sampler2D wf_noise : filter_linear, repeat_enable; // RG8 256x256 tileable noise (Seasons::wf_tex)
uniform vec4 wf_off = vec4(0.0); // uv offsets: layer A (xy), layer B (zw)
uniform vec2 wf_off2 = vec2(0.0); // layer M
uniform vec4 wf_cyc[6]; // weather system: centre (cells), radius, swirl at the centre (rad)
// R389 CLOUDS389: convergence density at the centre (< 0 anticyclone), trailing front direction (cos, sin), front density
uniform vec4 wf_cy2[6];
uniform int wf_sys_n = 0; // R389: active systems (packed first by Seasons::wf_uniforms)
uniform vec2 wf_flow = vec2(0.0); // R389 flow map: fract(t / FLOW_T), floor(t / FLOW_T) mod 4096
uniform vec2 wf_offv = vec2(0.0); // R389 uv offset of the local wind tap
uniform float wf_bias = 0.0;

const float WF_LA = 1.25;
const float WF_LB = 0.8;
const float WF_LM = 5.3;
const float WF_LV = 9.0; // R389: local wind tap
const float WF_FLOW_T = 300.0;
const float WF_FLOW_V = 0.30;
const float WF_CL = 0.50; // clouds
const float WF_DENSE = 0.69; // dense grey clouds (R387: 0.62 -> 0.69, mostly white clouds)
const float WF_RAIN = 0.73; // storm clouds: precipitation starts (R387: 0.68 -> 0.73 = Seasons::RAIN_D0)
const float WF_RSPAN = 0.08;

// R389: = Seasons::cloud_eval (flow map for layer A, 6 weather systems with front bands), split in two so a pixel that
// needs several samples close together (cloud body, light slope, shadow) runs the systems loop once:
// wf_sys(p0) = (warp offset of the sample point, convergence + front density), wf_core(p0, sy) = the rest.
vec3 wf_sys(vec2 p0) {
	vec2 p = p0;
	float cd = 0.0;
	for (int i = 0; i < 6; i++) {
		if (i >= wf_sys_n) {
			break;
		}
		vec4 c = wf_cyc[i];
		vec4 c2 = wf_cy2[i];
		vec2 d = p - c.xy;
		float r2 = dot(d, d);
		float reach = c2.w > 0.0 ? 2.85 * c.z : c.z; // nothing of the system beyond (most pixels stop here)
		if (r2 >= reach * reach) {
			continue;
		}
		if (r2 < c.z * c.z) {
			float k = 1.0 - sqrt(r2) / c.z;
			float th = c.w * k * k * (3.0 - 2.0 * k);
			float cs = cos(th);
			float sn = sin(th);
			d = vec2(d.x * cs - d.y * sn, d.x * sn + d.y * cs);
			p = c.xy + d;
			if (c2.w > 0.0) {
				cd += c2.x * (k + 0.8 * smoothstep(0.55, 0.85, k));
				if (k >= 0.95) {
					cd -= 0.35 * clamp((c2.x - 0.12) / 0.08, 0.0, 1.0);
				}
			} else {
				cd += c2.x * sqrt(k);
			}
		}
		if (c2.w > 0.0) {
			float al = dot(d, c2.yz);
			if (al > 0.0 && al < 2.8 * c.z) {
				float q = (d.y * c2.y - d.x * c2.z) / (c.z * 0.07 + al * 0.04);
				if (q * q < 1.0) {
					float bb = 1.0 - q * q;
					cd += c2.w * bb * bb * clamp(al / (0.35 * c.z), 0.0, 1.0) * clamp((2.8 * c.z - al) / (0.9 * c.z), 0.0, 1.0);
				}
			}
		}
	}
	return vec3(p - p0, cd);
}

// the two large-scale taps of a sample point: moisture + flow phase offset (xy), local wind (zw)
vec4 wf_big(vec2 p0) {
	vec2 mt = texture(wf_noise, fract(p0 / (256.0 * WF_LM) + wf_off2)).rg;
	vec2 v = WF_FLOW_V * (2.0 * texture(wf_noise, fract(p0 / (256.0 * WF_LV) + wf_offv)).rg - 1.0);
	return vec4(mt, v);
}

// the rest of the field at p0 with the large-scale taps bg (wf_big; a neighbour's may be reused for a light slope)
float wf_core_b(vec2 p0, vec3 sy, vec4 bg) {
	vec2 mt = bg.xy;
	vec2 v = bg.zw;
	vec2 p = p0 + sy.xy;
	float po = 0.9 * mt.y;
	float aa = 0.0;
	float w2 = 0.0;
	for (int j = 0; j < 2; j++) {
		float u = wf_flow.x + 0.5 * float(j) + po;
		float fu = floor(u);
		float tau = u - fu;
		float ci = wf_flow.y + fu;
		float w = 1.0 - abs(2.0 * tau - 1.0);
		vec2 q = p - v * ((tau - 0.5) * WF_FLOW_T);
		float aj = texture(wf_noise, fract(q / (256.0 * WF_LA) + wf_off.xy + fract(ci * vec2(0.6180339887, 0.7548776662)))).r;
		aa += w * (aj - 0.5);
		w2 += w * w;
	}
	float a = aa * inversesqrt(w2) + 0.5;
	float b = texture(wf_noise, fract(p / (256.0 * WF_LB) + wf_off.zw)).g;
	return 0.62 * a + 0.38 * b + 0.62 * (mt.x - 0.5) + sy.z + wf_bias;
}

float wf_core(vec2 p0, vec3 sy) {
	return wf_core_b(p0, sy, wf_big(p0));
}

float wf_density(vec2 p0) {
	return wf_core(p0, wf_sys(p0));
}

float wf_precip(float d) {
	return clamp((d - WF_RAIN) / WF_RSPAN, 0.0, 1.0);
}
