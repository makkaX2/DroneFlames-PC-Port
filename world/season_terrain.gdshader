shader_type canvas_item;
render_mode unshaded;

#include "res://world/season_climate.gdshaderinc"

uniform sampler2D biome_map : filter_nearest, repeat_disable;
varying vec4 sprite_color;

void vertex() {
	sprite_color = COLOR;
}

void fragment() {
	vec4 base = texture(TEXTURE, UV);
	float biome = floor(texture(biome_map, UV).r * 255.0 + 0.5);
	// The mask maps lake water to the river value. Open sea uses values 0..3.
	if (biome == 4.0) {
		base.rgb = seasonal_ice(base.rgb, UV, floor(UV / TEXTURE_PIXEL_SIZE));
	} else if (biome >= 5.0 && biome != 12.0) {
		float coverage = 1.0;
		if (biome == 5.0 || biome == 11.0) {
			coverage = 0.32;
		} else if (biome >= 13.0 && biome != 17.0 && biome != 18.0) {
			coverage = 0.45;
		}
		base.rgb = seasonal_land(base.rgb, UV, coverage);
	}
	COLOR = base * sprite_color;
}
