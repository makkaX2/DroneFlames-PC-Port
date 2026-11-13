extends Node2D

const Airport = preload("res://game/civil_airport.gd")
const MobileArt = preload("res://core/mobile_art.gd")

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
	var nearby: Rect2 = view.grow(Airport.VISIBLE_ROUTE + 50.0)
	for airport: Facility in _airports:
		if not gw.mil.alive(airport) or not nearby.has_point(airport.center_px()):
			continue
		if gw.vision != null and not gw.vision.fac_shown(airport):
			continue
		if airport.repair_t > 0.0 and airport.size == MobileArt.AIRPORT_SIZE and view.grow(160.0).has_point(airport.center_px()):
			var atlas: SpriteAtlas = MobileArt.atlas("atlas_air388")
			MobileArt.draw(self, atlas, "civ_airport_dmg_ov", 0, airport.origin_px() + Vector2(0, 128))
		if Airport.can_accept(airport, gw.country_by_id(airport.country_id), gw.mil):
			_draw_flight(airport, view, Airport.gate_point(airport, airport.civil_flights))


static func _taxi_route(airport: Facility, gate: Vector2, departure: bool) -> PackedVector2Array:
	var runway: Vector2 = Airport.runway_point(airport, departure)
	var origin: Vector2 = airport.origin_px()
	var lane: float = origin.y + Airport.airport_offset(airport, Vector2(0, 52)).y
	var pushback: float = origin.y + Airport.airport_offset(airport, Vector2(0, 62)).y
	var link: float = origin.x + Airport.airport_offset(airport, Vector2(124 if gate.x >= runway.x else 68, 0)).x
	var entry: float = origin.x + Airport.airport_offset(airport, Vector2(12, 0)).x
	if departure:
		return PackedVector2Array([gate, Vector2(gate.x, pushback), Vector2(gate.x, lane),
			Vector2(entry, lane), Vector2(entry, runway.y), runway])
	return PackedVector2Array([runway, Vector2(link, runway.y), Vector2(link, lane),
		Vector2(gate.x, lane), Vector2(gate.x, pushback), gate])


func _draw_flight(airport: Facility, view: Rect2, gate: Vector2) -> void:
	var now: float = gw.game_time
	var landed: float = now - airport.civil_last_arrival
	var incoming: float = airport.civil_next_arrival - now
	var position_px: Vector2
	var angle: float = 0.0
	var height: float = 0.0
	var flight: int = airport.civil_flights
	var cargo: bool = airport.civil_last_cargo
	if airport.civil_last_arrival >= 0.0 and landed >= 0.0 and landed < TAXI_END:
		var taxi_end: float = Airport.TAXI * 2.0 + Airport.AT_GATE
		if landed < Airport.TAXI:
			var taxi: Vector3 = _sample_route(_taxi_route(airport, gate, false), landed / Airport.TAXI, false)
			position_px = Vector2(taxi.x, taxi.y)
			angle = taxi.z
		elif landed < Airport.TAXI + Airport.AT_GATE:
			position_px = gate
			angle = PI * 0.5
		elif landed < taxi_end:
			var taxi: Vector3 = _sample_route(_taxi_route(airport, gate, true), (landed - Airport.TAXI - Airport.AT_GATE) / Airport.TAXI, false)
			position_px = Vector2(taxi.x, taxi.y)
			angle = taxi.z
		else:
			height = (landed - taxi_end) / Airport.DEPARTURE
			var sample: Vector3 = _sample_route(airport.civil_outbound, height, false)
			position_px = Vector2(sample.x, sample.y)
			angle = sample.z
	elif airport.civil_next_arrival >= 0.0 and incoming >= -0.1 and incoming <= Airport.APPROACH:
		flight += 1
		cargo = flight % 4 == 0
		height = clampf(incoming / Airport.APPROACH, 0.0, 1.0)
		var sample: Vector3 = _sample_route(airport.civil_inbound, height, true)
		position_px = Vector2(sample.x, sample.y)
		angle = sample.z
	else:
		return
	if not position_px.is_finite() or not view.grow(34.0).has_point(position_px):
		return
	var atlas: SpriteAtlas = MobileArt.atlas("atlas_air388p")
	var name: String = "cv_frt" if cargo else ("cv_reg" if flight % 2 == 1 else "cv_nb")
	var dir: int = posmod(roundi(rad_to_deg(angle) / 22.5), 16)
	var frame: int = dir + 16 * (int(FxLayer.vt * 10.0) % 2) if name == "cv_reg" else dir
	MobileArt.draw(self, atlas, name + "_shadow", dir, position_px.round() + Vector2(4, 5) * height, Color(1, 1, 1, 0.8))
	MobileArt.draw(self, atlas, name, frame, (position_px - Vector2(0, 7) * height).round())


static func _sample_route(path: PackedVector2Array, fraction: float, inbound: bool) -> Vector3:
	if path.size() < 2:
		return Vector3.INF
	var total: float = 0.0
	for i: int in range(1, path.size()):
		total += path[i - 1].distance_to(path[i])
	var left: float = minf(total, Airport.VISIBLE_ROUTE) * fraction
	for i: int in range(1, path.size()):
		var segment: Vector2 = path[i] - path[i - 1]
		var length: float = segment.length()
		if left <= length or i == path.size() - 1:
			var point: Vector2 = path[i - 1] + segment.normalized() * minf(left, length)
			return Vector3(point.x, point.y, (-segment if inbound else segment).angle())
		left -= length
	return Vector3.INF


const TAXI_END: float = Airport.TAXI * 2.0 + Airport.AT_GATE + Airport.DEPARTURE
