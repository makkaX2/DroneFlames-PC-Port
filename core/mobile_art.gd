extends RefCounted

const AIRBASE_SIZE := Vector2i(40, 28)
const AIRPORT_SIZE := Vector2i(48, 32)
const SPRITES := "res://assets/sprites/"

static var _atlases: Dictionary = {}


static func atlas(name: String) -> SpriteAtlas:
	if not _atlases.has(name):
		var path: String = SPRITES + name
		_atlases[name] = SpriteAtlas.load_atlas(path + ".png", path + ".json")
	return _atlases[name]


static func select_sprites(source: SpriteAtlas, names: Array) -> SpriteAtlas:
	var selected := SpriteAtlas.new()
	selected.texture = source.texture
	for name: String in names:
		selected.sprites[name] = source.info(name)
	return selected


static func draw(ci: CanvasItem, source: SpriteAtlas, name: String, frame: int,
		at: Vector2, color: Color = Color.WHITE, factor: float = 1.0) -> void:
	var info: Dictionary = source.info(name)
	var region: Rect2 = source.rect(name, frame)
	var anchor := Vector2(info["ax"], info["ay"])
	ci.draw_texture_rect_region(source.texture, Rect2(at - anchor * factor, region.size * factor), region, color)


static func draw_carrier(ci: CanvasItem, name: String, dir: int, at: Vector2,
		color: Color = Color.WHITE, factor: float = 1.0) -> void:
	draw(ci, atlas("atlas_r380"), name + ("_a" if dir < 8 else "_b"), dir % 8, at, color, factor)
