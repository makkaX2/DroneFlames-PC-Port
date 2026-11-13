class_name GroundLayer
extends Node2D


var gw: GameWorld
var decals: Array = []
var _road_view: Rect2i
var _road_marks: PackedVector2Array = PackedVector2Array()


func _process(_dt: float) -> void:
	if gw == null or gw.data == null or gw.camera == null:
		return
	var zoom_px: float = gw.camera.zoom.x
	if zoom_px < 1.6:
		if not _road_marks.is_empty():
			_road_marks.clear()
			_road_view = Rect2i()
			queue_redraw()
		return
	var half: Vector2 = gw.camera.view_size() * 0.5 / zoom_px / GameWorld.CELL
	var center: Vector2 = gw.camera.position / GameWorld.CELL
	var view: Rect2i = Rect2i(Vector2i((center - half).floor()), Vector2i((half * 2.0).ceil()) + Vector2i.ONE)
	if not _road_view.encloses(view):
		_rebuild_road_marks(view.grow(8))


func _road_cells_changed(cells: Array) -> void:
	for cell: Vector2i in cells:
		if _road_view.has_point(cell):
			_road_view = Rect2i()
			return


func _rebuild_road_marks(view: Rect2i) -> void:
	_road_view = view
	_road_marks.clear()
	var area: Rect2i = view.intersection(Rect2i(1, 1, gw.data.w - 2, gw.data.h - 2))
	for y: int in range(area.position.y, area.end.y):
		for x: int in range(area.position.x, area.end.x):
			var cell := Vector2i(x, y)
			if not gw.data.has_flag(x, y, WorldData.F_ROAD) or gw.data.has_flag(x, y, WorldData.F_BRIDGE):
				continue
			var horizontal: bool = gw.road_ok(cell + Vector2i.LEFT) and gw.road_ok(cell + Vector2i.RIGHT)
			var vertical: bool = gw.road_ok(cell + Vector2i.UP) and gw.road_ok(cell + Vector2i.DOWN)
			if horizontal == vertical or ((x if horizontal else y) & 1) != 0:
				continue
			var point: Vector2 = Vector2(cell * GameWorld.CELL) + Vector2(2, 2)
			var along: Vector2 = Vector2.RIGHT if horizontal else Vector2.DOWN
			_road_marks.append(point - along * 1.45)
			_road_marks.append(point + along * 1.45)
	queue_redraw()


func _draw() -> void :
	if gw == null:
		return
	if not _road_marks.is_empty():
		draw_multiline(_road_marks, Color(0.79, 0.74, 0.60, 0.56), 0.7)
	for d: Array in decals:
		var n: String = d[0]
		var fa: SpriteAtlas = gw.fx_atlas_of(n)
		var info: Dictionary = fa.info(n)
		var pos: Vector2 = Vector2(d[1]) - Vector2(float(info["ax"]), float(info["ay"]))
		draw_texture_rect_region(fa.texture, Rect2(pos, Vector2(float(info["w"]), float(info["h"]))), fa.rect(n))
	var wa: SpriteAtlas = gw.atlas
	for b: Bridge in gw.bridges:
		if b.kind != Bridge.Kind.RIVER:
			continue
		for i in b.cells.size():
			var c: Vector2i = b.cells[i]
			var horiz: bool = b.dirs[i] == 0
			var v: int = b.view(i)
			var n: String = "bridge_h" if horiz else "bridge_v"
			if v == 1:
				n = "bridge_h_broken" if horiz else "bridge_v_broken"
			elif v == 2:
				n = "scaffold_h" if horiz else "scaffold_v"
			draw_texture_rect_region(wa.texture, Rect2(Vector2(c.x * 4, c.y * 4), Vector2(4, 4)), wa.rect(n))
