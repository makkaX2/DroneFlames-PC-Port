extends RefCounted

const ARRIVAL_INTERVAL: float = 40.0
const FIRST_ARRIVAL: float = 20.0
const APPROACH: float = 15.0
const TAXI: float = 3.0
const AT_GATE: float = 6.0
const DEPARTURE: float = 12.0
const LANDING_FEE: int = 240


static func can_accept(f: Facility, country: Country, mil: Military) -> bool:
	return country != null and not country.eliminated and country.at_war.is_empty() \
		and not f.halted and mil.alive(f) and mil.has_power(f) and f.runway_ok()


static func update_service(f: Facility, country: Country, economy: Economy) -> void:
	var mil: Military = economy.gw.mil
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
	country.add_money(LANDING_FEE)
	economy.stat_add(country, "income", "civil_aviation", LANDING_FEE)


static func status(f: Facility, country: Country, mil: Military, now: float) -> String:
	if country == null or country.eliminated:
		return Loc.t("РЕЙСЫ ПРИОСТАНОВЛЕНЫ")
	if not country.at_war.is_empty():
		return Loc.t("НЕБО ЗАКРЫТО НА ВРЕМЯ ВОЙНЫ")
	if not mil.has_power(f):
		return Loc.t("НЕТ ПИТАНИЯ")
	if f.halted or not f.runway_ok():
		return Loc.t("РЕЙСЫ ПРИОСТАНОВЛЕНЫ")
	if f.civil_next_arrival < 0.0:
		return Loc.t("ОЖИДАНИЕ РАСПИСАНИЯ")
	return Loc.t("СЛЕДУЮЩИЙ РЕЙС ЧЕРЕЗ %d С · +%d ЗА ПОСАДКУ") % [
		maxi(0, ceili(f.civil_next_arrival - now)), LANDING_FEE
	]
