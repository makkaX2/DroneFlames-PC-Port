// Phase uses the same spring/summer/autumn/winter order as WorldSettings.
uniform bool seasons_enabled = false;
uniform float season_phase = 0.0;
uniform vec2 climate_seed = vec2(0.0);

uniform float weather_time = 0.0;

float weather_cover(vec2 uv) {
	float front = sin((uv.x * 2.8 + uv.y * 1.9 + climate_seed.y - weather_time / 120.0) * TAU);
	float bands = sin((uv.x * 3.1 - uv.y * 4.8 + climate_seed.x + weather_time / 180.0) * TAU);
	float envelope = sin((uv.x * 1.3 + uv.y * 2.1 + climate_seed.y + weather_time / 300.0) * TAU);
	return smoothstep(0.10, 0.72, front * 0.45 + bands * 0.30 + envelope * 0.25);
}

float climate_cold(vec2 uv) {
	float latitude = abs(uv.y - 0.5) * 2.0;
	float regional = sin((uv.x * 2.7 + uv.y + climate_seed.x) * TAU);
	return latitude * 0.74 + regional * 0.15;
}

float climate_snow(vec2 uv) {
	float winter = cos((season_phase - 3.25) * PI * 0.5);
	return smoothstep(0.50, 1.22, winter * 0.86 + climate_cold(uv));
}

vec3 seasonal_ice(vec3 base, vec2 uv, vec2 cell) {
	float ice = smoothstep(0.30, 0.76, climate_snow(uv));
	float texture_tone = sin((cell.x + cell.y * 0.46) * 0.37) * 0.018;
	float shade = dot(base, vec3(0.299, 0.587, 0.114)) * 0.12;
	vec3 frozen = vec3(0.53, 0.72, 0.82) + shade + texture_tone;
	return mix(base, frozen, ice * 0.92);
}

vec3 seasonal_land(vec3 base, vec2 uv, float coverage) {
	float autumn = smoothstep(0.25, 1.0, cos((season_phase - 2.35) * PI * 0.5));
	float shade = dot(base, vec3(0.299, 0.587, 0.114));
	vec3 leaves = base * vec3(1.22, 0.87, 0.57) + vec3(0.08, 0.025, 0.0);
	vec3 snow = vec3(0.60, 0.70, 0.78) + shade * 0.30;
	return mix(mix(base, leaves, autumn * coverage * 0.8), snow, climate_snow(uv) * coverage);
}
