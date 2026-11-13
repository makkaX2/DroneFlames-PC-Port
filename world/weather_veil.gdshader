shader_type canvas_item;
render_mode unshaded;

#include "res://world/season_climate.gdshaderinc"

uniform vec2 map_size = vec2(1.0);
uniform float density = 1.0;
varying vec2 map_position;

void vertex() {
	map_position = VERTEX;
}

float cell_noise(vec2 id) {
	vec3 p = fract(vec3(id.xyx) * 0.1031);
	p += dot(p, p.yzx + 33.33);
	return fract((p.x + p.y) * p.z);
}

void fragment() {
	vec2 uv = map_position / map_size;
	float moisture = smoothstep(0.48, 0.90, weather_cover(uv));
	float cold = climate_snow(uv);
	float snow = smoothstep(0.19, 0.38, cold);
	vec2 screen = FRAGCOORD.xy;

	vec2 rain_cell = (vec2(screen.x - screen.y * 0.19, screen.y) - vec2(0.0, weather_time * 740.0)) / vec2(14.0, 37.0);
	vec2 rain_uv = fract(rain_cell);
	float rain = step(1.0 - moisture * 0.36 * density, cell_noise(floor(rain_cell)));
	rain *= (1.0 - smoothstep(0.01, 0.09, abs(rain_uv.x - 0.5))) * step(0.68, rain_uv.y);

	float drift = sin(weather_time * 0.8) * 19.0;
	vec2 snow_cell = (screen - vec2(weather_time * 16.0 + drift, weather_time * 52.0)) / 17.0;
	vec2 snow_id = floor(snow_cell);
	float seed = cell_noise(snow_id);
	vec2 center = 0.22 + vec2(seed, cell_noise(snow_id + 57.0)) * 0.56;
	float flake = step(1.0 - moisture * 0.52 * density, seed);
	flake *= 1.0 - smoothstep(0.03, 0.12, length(fract(snow_cell) - center));

	vec3 color = mix(vec3(0.49, 0.66, 0.81), vec3(0.89, 0.95, 1.0), snow);
	float veil = moisture * mix(0.075, 0.16, snow);
	COLOR = vec4(color, veil + mix(rain * 0.38, flake * 0.78, snow));
}
