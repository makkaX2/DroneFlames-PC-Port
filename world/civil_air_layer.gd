extends Node2D

const Airport = preload("res://game/civil_airport.gd")
const AIRLINER: PackedVector2Array = [
	Vector2(12, 0), Vector2(8, 2), Vector2(1, 2), Vector2(-4, 9),
	Vector2(-7, 9), Vector2(-5, 2), Vector2(-9, 2), Vector2(-12, 5),
	Vector2(-14, 5), Vector2(-12, 0), Vector2(-14, -5), Vector2(-12, -5),
	Vector2(-9, -2), Vector2(-5, -2), Vector2(-7, -9), Vector2(-4, -9),
	Vector2(1, -2), Vector2(8, -2)
]
const STRIPE: PackedVector2Array = [Vector2(-10, 1), Vector2(8, 1), Vector2(6, 2), Vector2(-9, 2)]

var gw: GameWorld
var _world: WorldData
var _count: int = -1
var _airports: Array[Facility] = []


func _process(_delta: float) -> void:
	if gw.data == null or gw.camera == null or gw.mil == null or not is_visible_in_tree():
		return
	if _world != gw.data or _count != gw.mil.facilities.size():
		_world = gw.data
		_count = gw.mil.facilities.size()
		_airports.clear()
		for airport: Facility in gw.mil.facilities:
			if airport.kind == Facility.Kind.CIV_AIRPORT:
				_airports.append(airport)
		queue_redraw()
	elif not _airports.is_empty():
		queue_redraw()


func _draw() -> void:
	if gw.camera == null or _airports.is_empty():
		return
	var half: Vector2 = gw.camera.view_size() * 0.5 / gw.camera.zoom.x
	var view := Rect2(gw.camera.position - half, half * 2.0)
	for airport: Facility in _airports:
		if not gw.mil.alive(airport) or not view.grow(700.0).has_point(airport.center_px()):
			continue
		if gw.vision != null and not gw.vision.fac_shown(airport):
			continue
		var origin: Vector2 = airport.origin_px()
		var gate: Vector2 = origin + Vector2(61.0, 42.0)
		var active: bool = Airport.can_accept(airport, gw.country_by_id(airport.country_id), gw.mil)
		if view.grow(28.0).has_point(gate):
			_draw_gate(gate, active)
			_draw_gate(gate + Vector2(26.0, 0.0), active)
		if active:
			_draw_flight(airport, view, gate + Vector2(26.0 * float(airport.id % 2), 0.0))


func _draw_gate(gate: Vector2, active: bool) -> void:
	var paint := Color("#d1b673") if active else Color("#777778")
	draw_rect(Rect2(gate - Vector2(10, 7), Vector2(20, 14)), paint, false, 1.0)
	draw_line(gate - Vector2(0, 7), gate + Vector2(0, 4), paint, 1.0)


func _draw_flight(airport: Facility, view: Rect2, gate: Vector2) -> void:
	var now: float = gw.game_time
	var runway: Vector2 = airport.origin_px() + Vector2(54.0, 8.0)
	var landed: float = now - airport.civil_last_arrival
	var incoming: float = airport.civil_next_arrival - now
	var position_px: Vector2
	var angle: float = 0.0
	var height: float = 0.0
	if airport.civil_last_arrival >= 0.0 and landed >= 0.0 and landed < TAXI_END:
		var taxi_end: float = Airport.TAXI * 2.0 + Airport.AT_GATE
		if landed < Airport.TAXI:
			position_px = runway.lerp(gate, landed / Airport.TAXI)
			angle = (gate - runway).angle()
		elif landed < Airport.TAXI + Airport.AT_GATE:
			position_px = gate
			angle = PI * 0.5
		elif landed < taxi_end:
			position_px = gate.lerp(runway, (landed - Airport.TAXI - Airport.AT_GATE) / Airport.TAXI)
			angle = (runway - gate).angle()
		else:
			height = (landed - taxi_end) / Airport.DEPARTURE
			position_px = runway + Vector2(610.0 * height, -100.0 * height * height)
			angle = -0.15 * height
	elif airport.civil_next_arrival >= 0.0 and incoming >= -0.1 and incoming <= Airport.APPROACH:
		height = clampf(incoming / Airport.APPROACH, 0.0, 1.0)
		position_px = runway - Vector2(610.0 * height, 100.0 * height * height)
		angle = 0.15 * height
	else:
		return
	if not view.grow(34.0).has_point(position_px):
		return
	var body: Vector2 = Vector2.ONE * lerpf(0.72, 1.18, height)
	draw_set_transform(position_px + Vector2(4.0, 5.0) * height, angle, body)
	draw_colored_polygon(AIRLINER, Color(0.08, 0.10, 0.14, 0.34))
	draw_set_transform(position_px - Vector2(0.0, 7.0) * height, angle, body)
	draw_colored_polygon(AIRLINER, Color("#e3e9ef"))
	draw_colored_polygon(STRIPE, Color("#4c82a2"))
	draw_set_transform(Vector2.ZERO)


const TAXI_END: float = Airport.TAXI * 2.0 + Airport.AT_GATE + Airport.DEPARTURE
