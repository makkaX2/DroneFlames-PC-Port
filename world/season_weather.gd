extends Node2D

const TERRAIN_SHADER = preload("res://world/season_terrain.gdshader")
const WEATHER_SHADER = preload("res://world/weather_veil.gdshader")
const MASK_REFRESH: float = 0.75

var gw: GameWorld
var phase: float = 0.0
var climate_seed: Vector2 = Vector2.ZERO

var _terrain_material: ShaderMaterial
var _weather_material: ShaderMaterial
var _previous_terrain_material: Material
var _biome_texture: ImageTexture
var _mask_dirty: bool = false
var _mask_elapsed: float = 0.0
var _bounds: Rect2


func _ready() -> void:
	visible = false
	set_process(false)
	gw.terrain.cells_changed.connect(_on_cells_changed)


func reset() -> void:
	if _terrain_material != null and gw.terrain.material == _terrain_material:
		gw.terrain.material = _previous_terrain_material
	_terrain_material = null
	_previous_terrain_material = null
	_biome_texture = null
	_mask_dirty = false
	_mask_elapsed = 0.0
	material = null
	_weather_material = null
	visible = false
	var active: bool = gw.settings.seasons_enabled()
	set_process(active)
	if not active:
		return

	var data: WorldData = gw.data
	var seed: int = data.world_seed
	climate_seed = Vector2(float(posmod(seed, 997)) / 997.0, float(posmod(seed, 719)) / 719.0)
	_bounds = Rect2(Vector2.ZERO, Vector2(data.w, data.h) * GameWorld.CELL)
	_previous_terrain_material = gw.terrain.material
	_terrain_material = ShaderMaterial.new()
	_terrain_material.shader = TERRAIN_SHADER
	_refresh_mask()
	_terrain_material.set_shader_parameter("climate_seed", climate_seed)
	gw.terrain.material = _terrain_material

	_weather_material = ShaderMaterial.new()
	_weather_material.shader = WEATHER_SHADER
	_weather_material.set_shader_parameter("map_size", _bounds.size)
	_weather_material.set_shader_parameter("climate_seed", climate_seed)
	material = _weather_material
	queue_redraw()
	_update_climate()


func _process(delta: float) -> void:
	_mask_elapsed += delta
	if _mask_dirty and _mask_elapsed >= MASK_REFRESH:
		_refresh_mask()
	_update_climate()


func _update_climate() -> void:
	phase = gw.settings.season_phase(gw.game_time)
	_terrain_material.set_shader_parameter("season_phase", phase)
	visible = GameConfig.precipitation and GameConfig.fx_level > 0 and not GameConfig.power_save
	if visible:
		_weather_material.set_shader_parameter("season_phase", phase)
		# The two front periods share a common multiple, so neither front jumps on wrap.
		_weather_material.set_shader_parameter("weather_time", fposmod(gw.game_time, 3600.0))
		_weather_material.set_shader_parameter("density", 0.65 if GameConfig.fx_level == 1 else 1.0)


func _draw() -> void:
	if _weather_material != null:
		draw_rect(_bounds, Color.WHITE)


func _on_cells_changed(_cells: Array) -> void:
	_mask_dirty = _terrain_material != null


func _refresh_mask() -> void:
	var data: WorldData = gw.data
	var image: Image = Image.create_from_data(data.w, data.h, false, Image.FORMAT_L8, data.biome)
	if _biome_texture == null:
		_biome_texture = ImageTexture.create_from_image(image)
		_terrain_material.set_shader_parameter("biome_map", _biome_texture)
	else:
		_biome_texture.update(image)
	_mask_elapsed = 0.0
	_mask_dirty = false
