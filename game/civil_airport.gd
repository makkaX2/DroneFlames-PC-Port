extends RefCounted

const ARRIVAL_INTERVAL: float = 40.0
const FIRST_ARRIVAL: float = 20.0
const APPROACH: float = 15.0
const TAXI: float = 3.0
const AT_GATE: float = 6.0
const DEPARTURE: float = 12.0
const LANDING_FEE: int = 240
const MAX_CITY_DISTANCE: float = 280.0
const AIRPORT_SEPARATION: float = 480.0
const ROUTE_CELL: int = 16
const VISIBLE_ROUTE: float = 650.0
const RETRY_DELAY: float = 30.0


static func nearest_city(gw: GameWorld, country: Country, center: Vector2i) -> City:
	var best: City = null
	var distance: float = INF
	for id: int in country.city_ids:
		var city: City = gw.cities[id]
		if city.kind == City.Kind.VILLAGE or city.country_id != country.id:
			continue
		var d: float = Vector2(city.center - center).length_squared()
		if d < distance:
			distance = d
			best = city
	return best


static func site_reason(gw: GameWorld, country: Country, center: Vector2i) -> String:
	var cities: int = 0
	for id: int in country.city_ids:
		var city: City = gw.cities[id]
		if city.kind != City.Kind.VILLAGE and city.country_id == country.id:
			cities += 1
	if cities < 2:
		return Loc.t("Аэропорт можно построить со второго города")
	var city: City = nearest_city(gw, country, center)
	if city == null or Vector2(city.center - center).length() * GameWorld.CELL > MAX_CITY_DISTANCE:
		return Loc.t("Постройте аэропорт ближе к своему городу")
	if not city.powered:
		return Loc.t("Городу рядом с аэропортом нужно электричество")
	var count: int = 0
	for other: Facility in gw.mil.facilities:
		if other.kind != Facility.Kind.CIV_AIRPORT or not gw.mil.alive(other):
			continue
		if other.country_id == country.id:
			count += 1
			if other.civil_city_id == city.id:
				return Loc.t("У города «%s» уже есть аэропорт") % city.name
		if other.center_px().distance_to(Vector2(center * GameWorld.CELL)) < AIRPORT_SEPARATION:
			return Loc.t("Расстояние между аэропортами должно быть не меньше %d м") % int(AIRPORT_SEPARATION)
	var limit: int = (cities + 1) / 3
	if count >= limit:
		return Loc.t("Аэропортов %d/%d. Для следующего нужно городов: %d") % [count, limit, (limit + 1) * 3 - 1]
	return ""


static func city_for(f: Facility, gw: GameWorld, country: Country) -> City:
	if country == null or f.civil_city_id < 0 or f.civil_city_id >= gw.cities.size():
		return null
	var city: City = gw.cities[f.civil_city_id]
	return city if city.country_id == country.id else null


static func can_accept(f: Facility, country: Country, mil: Military) -> bool:
	if country == null or country.eliminated or not country.at_war.is_empty():
		return false
	var city: City = city_for(f, mil.gw, country)
	return city != null and city.powered and not f.halted and mil.alive(f) and mil.has_power(f) and f.runway_ok()


static func runway_point(f: Facility) -> Vector2:
	return f.origin_px() + Vector2(54.0, 8.0)


static func _airspace(gw: GameWorld, country: Country) -> PackedByteArray:
	var blocked := PackedByteArray()
	blocked.resize(256)
	for other: Country in gw.countries:
		if other.id == country.id or other.id <= 0 or other.id >= blocked.size():
			continue
		if not other.at_war.is_empty() or gw.diplo.embargoed(other.id, country.id):
			blocked[other.id] = 1
	return blocked


static func _segment_open(data: WorldData, blocked: PackedByteArray, from: Vector2, to: Vector2) -> bool:
	var steps: int = maxi(1, ceili(from.distance_to(to) / (GameWorld.CELL * 0.5)))
	for i: int in range(steps + 1):
		var point: Vector2i = Vector2i((from.lerp(to, float(i) / float(steps)) / GameWorld.CELL).floor())
		if data.inside(point.x, point.y) and blocked[data.get_owner_id(point.x, point.y)] != 0:
			return false
	return true


static func _route_open(data: WorldData, blocked: PackedByteArray, route: PackedVector2Array) -> bool:
	if route.size() < 2:
		return false
	for i: int in range(1, route.size()):
		if not _segment_open(data, blocked, route[i - 1], route[i]):
			return false
	return true


static func _edge_routes(data: WorldData, blocked: PackedByteArray, runway: Vector2, direction: int) -> PackedVector2Array:
	var world_size: Vector2 = Vector2(data.w, data.h) * GameWorld.CELL
	var margin := Vector2(2, 2)
	var exit_x: float = margin.x if direction < 0 else world_size.x - margin.x
	var entry: Vector2 = Vector2(clampf(runway.x + 55.0 * direction, 2.0, world_size.x - 2.0), runway.y)
	var edges: Array[Vector2] = [Vector2(exit_x, runway.y), Vector2(runway.x, margin.y), Vector2(runway.x, world_size.y - margin.y)]
	var other_x: float = world_size.x - exit_x
	for y: float in [margin.y, world_size.y * 0.25, world_size.y * 0.5, world_size.y * 0.75, world_size.y - margin.y]:
		edges.append(Vector2(exit_x, y))
		edges.append(Vector2(other_x, y))
	for x: float in [world_size.x * 0.25, world_size.x * 0.5, world_size.x * 0.75]:
		edges.append(Vector2(x, margin.y))
		edges.append(Vector2(x, world_size.y - margin.y))
	if not _segment_open(data, blocked, runway, entry):
		return PackedVector2Array()
	var best := PackedVector2Array()
	var distance: float = INF
	for edge: Vector2 in edges:
		var length: float = entry.distance_to(edge)
		if length < distance and _segment_open(data, blocked, entry, edge):
			best = PackedVector2Array([runway, entry, edge])
			distance = length
	if not best.is_empty():
		return best

	var grid := AStarGrid2D.new()
	var step: int = ROUTE_CELL * GameWorld.CELL
	var width: int = ceili(world_size.x / step)
	var height: int = ceili(world_size.y / step)
	grid.region = Rect2i(0, 0, width, height)
	grid.cell_size = Vector2(step, step)
	grid.offset = Vector2(step * 0.5, step * 0.5)
	grid.diagonal_mode = AStarGrid2D.DIAGONAL_MODE_NEVER
	grid.update()
	var start: Vector2i = Vector2i((entry / step).floor())
	if not grid.region.has_point(start):
		return PackedVector2Array()
	for y: int in height:
		for x: int in width:
			var id := Vector2i(x, y)
			var point: Vector2 = grid.get_point_position(id)
			var from: Vector2i = Vector2i((point / GameWorld.CELL).floor()) - Vector2i.ONE * ROUTE_CELL / 2
			var area: Rect2i = Rect2i(from, Vector2i.ONE * ROUTE_CELL).intersection(Rect2i(0, 0, data.w, data.h))
			grid.set_point_solid(id, not _airspace_open(data, blocked, area))
	if grid.is_point_solid(start) or not _segment_open(data, blocked, entry, grid.get_point_position(start)):
		return PackedVector2Array()
	var shortest: int = width * height + 1
	for edge: Vector2 in edges:
		var end: Vector2i = Vector2i((edge / step).floor())
		if grid.is_point_solid(end):
			continue
		var path: PackedVector2Array = grid.get_point_path(start, end)
		if path.is_empty() or path.size() >= shortest or not _segment_open(data, blocked, path[-1], edge):
			continue
		shortest = path.size()
		best = PackedVector2Array([runway, entry])
		best.append_array(path)
		best.append(edge)
	return best


static func _airspace_open(data: WorldData, blocked: PackedByteArray, area: Rect2i) -> bool:
	for y: int in range(area.position.y, area.end.y):
		var row: int = y * data.w
		for x: int in range(area.position.x, area.end.x):
			if blocked[data.owners[row + x]] != 0:
				return false
	return true


static func _clear_routes(f: Facility) -> void:
	f.civil_next_arrival = -1.0
	f.civil_last_arrival = -1.0
	f.civil_inbound.clear()
	f.civil_outbound.clear()
	f.civil_route_retry_at = 0.0


static func update_service(f: Facility, country: Country, economy: Economy) -> void:
	var mil: Military = economy.gw.mil
	if f.civil_city_id < 0 and country != null:
		var nearest: City = nearest_city(economy.gw, country, f.cell + f.size / 2)
		if nearest != null:
			f.civil_city_id = nearest.id
	if not can_accept(f, country, mil):
		_clear_routes(f)
		f.civil_route_blocked = false
		return
	var gw: GameWorld = economy.gw
	var now: float = gw.game_time
	var blocked: PackedByteArray = _airspace(gw, country)
	if f.civil_route_blocked and now < f.civil_route_retry_at and f.civil_closed_owners == blocked:
		return
	f.civil_closed_owners = blocked
	var inbound_open: bool = _route_open(gw.data, blocked, f.civil_inbound)
	var outbound_open: bool = _route_open(gw.data, blocked, f.civil_outbound)
	if not inbound_open or not outbound_open:
		var reschedule: bool = not inbound_open and not f.civil_inbound.is_empty()
		var runway: Vector2 = runway_point(f)
		if not inbound_open:
			f.civil_inbound = _edge_routes(gw.data, blocked, runway, -1)
		if not outbound_open:
			f.civil_outbound = _edge_routes(gw.data, blocked, runway, 1)
		f.civil_route_blocked = f.civil_inbound.is_empty() or f.civil_outbound.is_empty()
		if f.civil_route_blocked:
			f.civil_next_arrival = -1.0
			f.civil_last_arrival = -1.0
			f.civil_route_retry_at = now + RETRY_DELAY
			return
		if f.civil_last_arrival >= 0.0 and not outbound_open:
			f.civil_last_arrival = -1.0
		if f.civil_next_arrival >= 0.0 and reschedule:
			f.civil_next_arrival = -1.0
	if f.civil_next_arrival < 0.0:
		f.civil_next_arrival = now + FIRST_ARRIVAL
		return
	if now + 0.1 < f.civil_next_arrival:
		return

	f.civil_last_arrival = now
	f.civil_next_arrival = now + ARRIVAL_INTERVAL
	f.civil_flights += 1
	var cargo: int = _export_cargo(f, country, economy) if f.civil_flights % 4 == 0 else 0
	if cargo == 0:
		var city: City = city_for(f, economy.gw, country)
		f.civil_passengers += clampi(city.residents / 20, 8, 96)
	var income: int = LANDING_FEE + cargo
	country.add_money(income)
	economy.stat_add(country, "income", "civil_aviation", income)


static func _export_cargo(f: Facility, country: Country, economy: Economy) -> int:
	for resource: String in ["precious", "titanium"]:
		var stock: int = int(country.get(resource))
		if stock < int(float(economy.res_cap(country, resource)) * 0.65):
			continue
		var amount: int = mini(8, stock / 4)
		if amount <= 0:
			continue
		var price: int = economy.market_price(resource, country.id)
		country.set(resource, stock - amount)
		economy.upk.note_trade(country.id, resource, amount, price)
		economy.stat_res(country, resource, "civil_aviation", -amount)
		f.civil_cargo += amount
		f.civil_export += amount * price
		return amount * price
	return 0


static func status(f: Facility, country: Country, mil: Military, now: float) -> String:
	if country == null or country.eliminated:
		return Loc.t("РЕЙСЫ ПРИОСТАНОВЛЕНЫ")
	if not country.at_war.is_empty():
		return Loc.t("НЕБО ЗАКРЫТО НА ВРЕМЯ ВОЙНЫ")
	var city: City = city_for(f, mil.gw, country)
	if city == null:
		return Loc.t("НЕТ СВЯЗИ С ГОРОДОМ")
	if not city.powered or not mil.has_power(f):
		return Loc.t("НЕТ ПИТАНИЯ")
	if f.halted or not f.runway_ok():
		return Loc.t("РЕЙСЫ ПРИОСТАНОВЛЕНЫ")
	if f.civil_route_blocked:
		return Loc.t("НЕТ ОТКРЫТОГО МАРШРУТА")
	if f.civil_next_arrival < 0.0:
		return Loc.t("ОЖИДАНИЕ РАСПИСАНИЯ")
	return Loc.t("СЛЕДУЮЩИЙ РЕЙС ЧЕРЕЗ %d С · +%d ЗА ПОСАДКУ") % [
		maxi(0, ceili(f.civil_next_arrival - now)), LANDING_FEE
	]
