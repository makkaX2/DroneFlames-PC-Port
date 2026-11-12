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


static func update_service(f: Facility, country: Country, economy: Economy) -> void:
	var mil: Military = economy.gw.mil
	if f.civil_city_id < 0 and country != null:
		var nearest: City = nearest_city(economy.gw, country, f.cell + f.size / 2)
		if nearest != null:
			f.civil_city_id = nearest.id
	if not can_accept(f, country, mil):
		f.civil_next_arrival = -1.0
		f.civil_last_arrival = -1.0
		return
	var now: float = economy.gw.game_time
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
	if f.civil_next_arrival < 0.0:
		return Loc.t("ОЖИДАНИЕ РАСПИСАНИЯ")
	return Loc.t("СЛЕДУЮЩИЙ РЕЙС ЧЕРЕЗ %d С · +%d ЗА ПОСАДКУ") % [
		maxi(0, ceili(f.civil_next_arrival - now)), LANDING_FEE
	]
