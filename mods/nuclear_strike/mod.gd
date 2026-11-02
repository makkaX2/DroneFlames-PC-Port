class_name NuclearStrikeMod
extends RefCounted

## Мод «Ядерный арсенал (МБР и Шахты)» для DroneFlames PC Port
## Полная интеграция в оригинальный интерфейс и движок игры.
## Добавляет шахтный ракетный комплекс МБР во вкладку «АРМИЯ» нижней панели.
## Позволяет обогащать уран (добываемый на урановых шахтах) и собирать термоядерные боеголовки.
## Производит пуск межконтинентальной баллистической ракеты с глобальным радиусом поражения,
## термоядерным грибом, ослепляющей вспышкой и выжиганием радиоактивной пустоши.

var mm_ref: Node = null
var main_ref: Node = null
var world_ref: Node = null

var world_layer: Node2D = null
var flash_layer: CanvasLayer = null
var flash_rect: ColorRect = null

var is_placing: bool = false
var is_targeting: bool = false
var selected_fac: Facility = null
var targeting_silo: Facility = null

const SILO_COST_MONEY: int = 3500
const SILO_COST_URANIUM: int = 10
const WARHEAD_COST_MONEY: int = 1500
const WARHEAD_COST_URANIUM: int = 8
const WARHEAD_TIME: float = 24.0

const SILO_SIZE: Vector2i = Vector2i(6, 6)
const SILO_MAX_HP: float = 650.0

var active_missiles: Array = []
var active_explosions: Array = []

func init_mod(mm: Node) -> void:
	mm_ref = mm
	if mm.has_method("register_hook"):
		mm.call("register_hook", "on_world_started", Callable(self, "_on_world_started"))
		mm.call("register_hook", "on_match_tick", Callable(self, "_on_match_tick"))
	print("[NuclearStrike] Native mod initialized.")

func cleanup_mod(mm: Node) -> void:
	_cleanup_nodes()
	if mm and mm.has_method("unregister_hook"):
		mm.call("unregister_hook", "on_world_started", Callable(self, "_on_world_started"))
		mm.call("unregister_hook", "on_match_tick", Callable(self, "_on_match_tick"))
	print("[NuclearStrike] Mod cleaned up.")

func _cleanup_nodes() -> void:
	is_placing = false
	is_targeting = false
	selected_fac = null
	targeting_silo = null
	active_missiles.clear()
	active_explosions.clear()
	if world_layer != null and is_instance_valid(world_layer):
		world_layer.queue_free()
		world_layer = null
	if flash_layer != null and is_instance_valid(flash_layer):
		flash_layer.queue_free()
		flash_layer = null

func _on_world_started(main: Node, world: Node) -> void:
	main_ref = main
	world_ref = world
	_cleanup_nodes()

	# 1. Встраивание слота постройки МБР во вкладку «АРМИЯ» (Tab 4) нижней панели
	if main.hud != null:
		if main.hud.pages.size() > 4:
			var army_grid = main.hud.pages[4] as GridContainer
			if army_grid != null and not main.hud.keys.has("nuclear_silo"):
				var cell = main.hud._cell("nuclear_silo", "icon_m_ballistic", true)
				if main.hud.key_labels.has("nuclear_silo"):
					var lbl = main.hud.key_labels["nuclear_silo"] as Label
					if lbl != null:
						lbl.text = "ЯДЕРНАЯ\nШАХТА"
				army_grid.add_child(cell)
				army_grid.move_child(cell, 2)

		if not main.hud.action.is_connected(_on_hud_action):
			main.hud.action.connect(_on_hud_action)

	# 2. Слой мира для визуализации призрака, шахты, полёта МБР и взрывов
	world_layer = NuclearWorldLayer.new()
	world_layer.setup(self, main, world)
	world.add_child(world_layer)

	# 3. CanvasLayer для кинематографичной ослепляющей ядерной вспышки
	flash_layer = CanvasLayer.new()
	flash_layer.layer = 120
	flash_rect = ColorRect.new()
	flash_rect.set_anchors_preset(Control.PRESET_FULL_RECT)
	flash_rect.mouse_filter = Control.MOUSE_FILTER_IGNORE
	flash_rect.color = Color(1.0, 0.96, 0.75, 0.0)
	flash_layer.add_child(flash_rect)
	main.add_child(flash_layer)

	print("[NuclearStrike] Injected nuclear_silo cell into Army tab and world layers created.")

func _on_hud_action(nm: String) -> void:
	match nm:
		"nuclear_silo":
			if main_ref != null and main_ref.hud != null:
				main_ref.hud.show_tip(
					"Шахтный комплекс МБР",
					"Стратегическое оружие возмездия. Требует 3500 $ и 10 урана (с урановых шахт). Снаряжается термоядерной БЧ.",
					""
				)
			toggle_placement()
		"nuke_craft":
			if selected_fac != null:
				_order_warhead(selected_fac)
		"nuke_target":
			if selected_fac != null:
				_start_targeting(selected_fac)
		"nuke_cancel_target":
			_cancel_targeting()
		"nuke_repair":
			if selected_fac != null:
				_repair_silo(selected_fac)
		"nuke_close":
			selected_fac = null
			if main_ref != null and "selected_fac" in main_ref:
				main_ref.selected_fac = null

func _on_match_tick(main: Node, world: Node, delta: float) -> void:
	main_ref = main
	world_ref = world
	_tick_silos(delta)
	_tick_missiles(delta)
	_tick_explosions(delta)

	# Обновление нативной карточки комплекса, если шахта выбрана
	if main != null and "selected_fac" in main and main.selected_fac != null and is_instance_valid(main.selected_fac):
		var f: Facility = main.selected_fac as Facility
		if f != null and f.has_meta("is_nuclear_silo") and f.get_meta("is_nuclear_silo"):
			selected_fac = f
			_update_native_card(f)
		else:
			if selected_fac != null and selected_fac == f:
				selected_fac = null
	else:
		selected_fac = null

	if world_layer != null and is_instance_valid(world_layer):
		world_layer.queue_redraw()

func toggle_placement() -> void:
	if is_placing:
		cancel_placement()
	else:
		start_placement()

func start_placement() -> void:
	if world_ref == null or not is_instance_valid(world_ref):
		return
	var p = world_ref.player
	if p == null:
		return

	if p.money < SILO_COST_MONEY or p.uranium < SILO_COST_URANIUM:
		if main_ref != null and main_ref.hud != null:
			main_ref.hud.show_toast("Не хватает ресурсов! Требуется: 3500 $ и 10 Урана (добывается на урановых шахтах)")
		if ClassDB.class_exists("UiKit"):
			UiKit.snd("ui_error")
		return

	is_placing = true
	is_targeting = false
	if main_ref != null and main_ref.hud != null:
		main_ref.hud.set_key_pressed("nuclear_silo", true)
		main_ref.hud.show_toast("ЯДЕРНАЯ ШАХТА: Выберите безопасное место на своей территории")

	if ClassDB.class_exists("UiKit"):
		UiKit.snd("ui_select")

func cancel_placement() -> void:
	is_placing = false
	if main_ref != null and main_ref.hud != null:
		main_ref.hud.set_key_pressed("nuclear_silo", false)

func can_place_at(cell: Vector2i) -> bool:
	if world_ref == null or not is_instance_valid(world_ref):
		return false
	var d = world_ref.data
	if d == null:
		return false

	if cell.x < 3 or cell.y < 3 or cell.x + SILO_SIZE.x >= d.w - 3 or cell.y + SILO_SIZE.y >= d.h - 3:
		return false

	var player = world_ref.player
	if player == null:
		return false

	for dy in range(SILO_SIZE.y):
		for dx in range(SILO_SIZE.x):
			var cx = cell.x + dx
			var cy = cell.y + dy
			if d.get_owner_id(cx, cy) != player.id:
				return false
			var b = d.get_biome(cx, cy)
			if Biome.is_water(b):
				return false
			if d.has_flag(cx, cy, WorldData.F_OCCUPIED):
				return false

	return true

func place_silo_at(cell: Vector2i) -> void:
	if not can_place_at(cell):
		if main_ref != null and main_ref.hud != null:
			main_ref.hud.show_toast("Нельзя разместить здесь: нужна свободная суша на вашей земле")
		if ClassDB.class_exists("UiKit"):
			UiKit.snd("ui_error")
		return

	var p = world_ref.player
	if p.money < SILO_COST_MONEY or p.uranium < SILO_COST_URANIUM:
		if main_ref != null and main_ref.hud != null:
			main_ref.hud.show_toast("Не хватает: 3500 $ и 10 урана!")
		if ClassDB.class_exists("UiKit"):
			UiKit.snd("ui_error")
		return

	p.money -= SILO_COST_MONEY
	p.uranium -= SILO_COST_URANIUM

	var f = Facility.new()
	f.id = world_ref.mil.facilities.size()
	f.kind = Facility.Kind.TEL
	f.country_id = p.id
	f.cell = cell
	f.size = SILO_SIZE
	f.set_meta("is_nuclear_silo", true)
	f.set_meta("hp", SILO_MAX_HP)
	f.set_meta("max_hp", SILO_MAX_HP)
	f.set_meta("has_warhead", true) # Первая ракета входит в комплект постройки
	f.set_meta("producing", false)
	f.set_meta("prod_t", 0.0)

	var spr_name = "eco_silo" if world_ref.spr_index.has("eco_silo") else ("missile_factory" if world_ref.spr_index.has("missile_factory") else "npp_core")
	f.main_obj = world_ref.add_object(spr_name, cell, GameWorld.KIND_BUILDING)
	f.obj_ids.append(f.main_obj)
	world_ref.mil.facilities.append(f)

	var d = world_ref.data
	for dy in range(f.size.y):
		for dx in range(f.size.x):
			var cx = cell.x + dx
			var cy = cell.y + dy
			world_ref.remove_tree_at(Vector2i(cx, cy))
			d.add_flag(cx, cy, WorldData.F_OCCUPIED)
			d.set_biome(cx, cy, Biome.INDUSTRIAL)

	cancel_placement()

	if ClassDB.class_exists("UiKit"):
		UiKit.snd("ui_build")
	if ClassDB.class_exists("Sfx"):
		Sfx.play("vls_hatch_open", f.center_px())
	if world_ref.fx != null:
		world_ref.fx.spawn("dust_s", Vector2(cell * GameWorld.CELL + Vector2i(12, 12)), 8)

	if main_ref != null and main_ref.hud != null:
		main_ref.hud.show_toast("Комплекс МБР построен! Стратегическая ракета с термоядерной БЧ на боевом дежурстве.")
		main_ref.selected_fac = f

func _order_warhead(f: Facility) -> void:
	var p = world_ref.player
	if p == null:
		return
	if p.money < WARHEAD_COST_MONEY or p.uranium < WARHEAD_COST_URANIUM:
		if main_ref != null and main_ref.hud != null:
			main_ref.hud.show_toast("Не хватает: требуется 1500 $ и 8 урана (из шахт или АЭС)!")
		if ClassDB.class_exists("UiKit"):
			UiKit.snd("ui_error")
		return

	p.money -= WARHEAD_COST_MONEY
	p.uranium -= WARHEAD_COST_URANIUM

	f.set_meta("producing", true)
	f.set_meta("prod_t", 0.0)

	if ClassDB.class_exists("UiKit"):
		UiKit.snd("ui_build")
	if ClassDB.class_exists("Sfx"):
		Sfx.play("vls_hatch_open", f.center_px())
	if main_ref != null and main_ref.hud != null:
		main_ref.hud.show_toast("Сборка термоядерной боеголовки запущена (требуется 24 сек)...")

func _start_targeting(f: Facility) -> void:
	if not bool(f.get_meta("has_warhead", false)):
		if main_ref != null and main_ref.hud != null:
			main_ref.hud.show_toast("В шахте нет готовой боеголовки! Сначала произведите ЯБЧ.")
		return
	is_targeting = true
	is_placing = false
	targeting_silo = f

	if ClassDB.class_exists("Sfx"):
		Sfx.play("alarm_general_quarters")
	if main_ref != null and main_ref.hud != null:
		main_ref.hud.show_toast("БОЕВАЯ ТРЕВОГА! Выберите точку нанесения термоядерного удара на карте.")

func _cancel_targeting() -> void:
	is_targeting = false
	targeting_silo = null
	if main_ref != null and main_ref.hud != null:
		main_ref.hud.show_toast("Наведение ядерного удара отменено.")

func launch_strike(target_world_pos: Vector2) -> void:
	if targeting_silo == null or not is_instance_valid(targeting_silo):
		_cancel_targeting()
		return

	var f = targeting_silo
	f.set_meta("has_warhead", false)
	is_targeting = false
	targeting_silo = null

	var start_pos = f.center_px()
	var dist = start_pos.distance_to(target_world_pos)
	var flight_duration = clampf(6.0 + dist * 0.003, 7.0, 11.0)

	# Звук и спецэффекты пуска
	if ClassDB.class_exists("Sfx"):
		Sfx.play("vls_hatch_open", start_pos)
		Sfx.play("missile_launch", start_pos)
	if world_ref.fx != null:
		world_ref.fx.spawn("tel_flash", start_pos.round(), 6)
		world_ref.fx.spawn("launch_cloud", start_pos.round(), 5)
	if world_ref.has_method("camera_shake_launch"):
		world_ref.camera_shake_launch(start_pos)

	var p = world_ref.player
	var m = {
		"from": start_pos,
		"target": target_world_pos,
		"t": 0.0,
		"duration": flight_duration,
		"whistled": false,
		"country_id": p.id if p != null else 1,
		"trail": []
	}
	active_missiles.append(m)

	if world_ref.has_method("say") and p != null:
		world_ref.say(p, Loc.mk("ВНИМАНИЕ: Произведён запуск стратегической МБР с термоядерной боеголовкой!"))

	if main_ref != null and main_ref.hud != null:
		main_ref.hud.show_toast("Пуск МБР выполнен! Подлёт к цели через %d сек." % int(ceil(flight_duration)))

func _repair_silo(f: Facility) -> void:
	var p = world_ref.player
	if p == null:
		return
	var cur_hp = float(f.get_meta("hp", SILO_MAX_HP))
	if cur_hp >= SILO_MAX_HP:
		return
	var cost = 400
	if p.money < cost:
		if main_ref != null and main_ref.hud != null:
			main_ref.hud.show_toast("Не хватает средств на ремонт шахты (требуется 400 $)")
		return
	p.money -= cost
	f.set_meta("hp", SILO_MAX_HP)
	if ClassDB.class_exists("Sfx"):
		Sfx.play("repair_work", f.center_px())
	if main_ref != null and main_ref.hud != null:
		main_ref.hud.show_toast("Шахтный комплекс МБР полностью отремонтирован!")

func _tick_silos(delta: float) -> void:
	if world_ref == null or world_ref.mil == null:
		return
	for f in world_ref.mil.facilities:
		if f == null or not is_instance_valid(f):
			continue
		if not f.has_meta("is_nuclear_silo"):
			continue
		if bool(f.get_meta("producing", false)):
			var t = float(f.get_meta("prod_t", 0.0)) + delta
			f.set_meta("prod_t", t)
			if t >= WARHEAD_TIME:
				f.set_meta("producing", false)
				f.set_meta("has_warhead", true)
				if ClassDB.class_exists("UiKit"):
					UiKit.snd("ui_victory")
				if ClassDB.class_exists("Sfx"):
					Sfx.play("vls_hatch_open", f.center_px())
				if main_ref != null and main_ref.hud != null:
					main_ref.hud.show_toast("Боеголовка смонтирована! МБР готова к ядерному удару.")

func _tick_missiles(delta: float) -> void:
	for i in range(active_missiles.size() - 1, -1, -1):
		var m = active_missiles[i]
		m["t"] += delta
		var k = clampf(m["t"] / m["duration"], 0.0, 1.0)
		var cur_ground = (m["from"] as Vector2).lerp(m["target"], k)
		var alt = 4.0 * 360.0 * k * (1.0 - k)
		var screen_p = cur_ground - Vector2(0, alt)

		# Добавление точек дымного следа
		var trail = m["trail"] as Array
		trail.append({"pos": screen_p, "t": 0.0})
		if trail.size() > 40:
			trail.pop_front()

		# Свист падающей БЧ перед ударом
		if not bool(m["whistled"]) and (m["duration"] - m["t"]) <= 1.8:
			m["whistled"] = true
			if ClassDB.class_exists("Sfx"):
				Sfx.play("missile_whistle", m["target"])

		if k >= 1.0:
			_detonate_nuclear(m)
			active_missiles.remove_at(i)

func _detonate_nuclear(m: Dictionary) -> void:
	var target_pos: Vector2 = m["target"]
	var cell: Vector2i = Vector2i(floori(target_pos.x / float(GameWorld.CELL)), floori(target_pos.y / float(GameWorld.CELL)))
	var country_id: int = int(m["country_id"])

	# 1. Ослепляющая вспышка экрана
	if flash_rect != null and is_instance_valid(flash_rect):
		flash_rect.color = Color(1.0, 0.98, 0.85, 0.9)
		var tw = flash_rect.create_tween()
		tw.tween_property(flash_rect, "color:a", 0.0, 0.65).set_trans(Tween.TRANS_QUAD).set_ease(Tween.EASE_OUT)

	# 2. Мощнейший звук ядерного взрыва
	if ClassDB.class_exists("Sfx"):
		Sfx.play("expl_big", target_pos, 3.5)
		Sfx.play("far_boom_1", target_pos, 3.0)
		Sfx.play("building_collapse", target_pos, 2.5)

	# 3. Сотрясение камеры по всей карте
	if world_ref != null and world_ref.camera != null:
		world_ref.camera.shake_pattern([
			Vector2(10, 0), Vector2(-8, 6), Vector2(7, -8),
			Vector2(-7, 4), Vector2(4, 4), Vector2(-3, -4),
			Vector2(2, 2), Vector2(0, 0)
		], 0.04)

	# 4. Спавн множественных эффектов гриба и ударных волн
	if world_ref.fx != null:
		world_ref.fx.spawn("shockwave", target_pos, 1)
		for off in [Vector2(-12, -8), Vector2(12, -8), Vector2(0, -20), Vector2(-6, -32), Vector2(6, -32), Vector2(0, -45)]:
			world_ref.fx.spawn("explosion_l", target_pos + off, 6)
		world_ref.fx.spawn("smoke_black_loop", target_pos + Vector2(0, -25), 6, world_ref.game_time + 40.0, true)
		world_ref.fx.spawn("fire_small", target_pos, 4, world_ref.game_time + 35.0, true)

	# 5. Игровое сокрушительное поражение (радиус 18 клеток)
	if world_ref.has_method("_apply_strike"):
		world_ref._apply_strike(cell, 18, "crater_l", 85.0, country_id)

	# 6. Выжигание ландшафта и радиационная пустошь
	var d = world_ref.data
	if d != null:
		var br = 16
		for dy in range(-br, br + 1):
			for dx in range(-br, br + 1):
				if dx * dx + dy * dy <= br * br:
					var cx = cell.x + dx
					var cy = cell.y + dy
					if d.inside(cx, cy):
						var b = d.get_biome(cx, cy)
						if Biome.is_natural_land(b):
							d.set_biome(cx, cy, Biome.BURNT)

	# 7. Уничтожение юнитов в эпицентре
	if world_ref.army != null and world_ref.army.units != null:
		var blast_r_sq = 85.0 * 85.0
		for u in world_ref.army.units:
			if u != null and is_instance_valid(u) and u.alive:
				if u.pos.distance_squared_to(target_pos) <= blast_r_sq:
					u.hp = 0.0
					u.alive = false

	# 8. Проверка на поражение АЭС или ТЭЦ (вторичный взрыв и авария сети)
	if world_ref.mil != null and world_ref.mil.facilities != null:
		for f in world_ref.mil.facilities:
			if f == null or not is_instance_valid(f):
				continue
			if (f.kind == Facility.Kind.NUCLEAR_PLANT or f.kind == Facility.Kind.POWER_PLANT) and f.center_px().distance_to(target_pos) <= 80.0:
				f.u_fuel = 0.0
				f.u_hits = 3
				f.restore_t = 120.0
				var vict = world_ref.country_by_id(f.country_id)
				if vict != null:
					vict.power_cap = maxi(0, vict.power_cap - 40)
					if world_ref.has_method("say"):
						world_ref.say(vict, Loc.mk("КАТАСТРОФА! В результате термоядерного удара разрушена энергостанция! Полный блэкаут сети."))

	if world_ref.has_method("say"):
		world_ref.say(world_ref.country_by_id(country_id), Loc.mk("ТЕРМОЯДЕРНЫЙ УДАР НАНЕСЁН ПО КВАДРАТУ (%d, %d)! Эпицентр выжжен.", [cell.x, cell.y]))

	if main_ref != null and main_ref.hud != null:
		main_ref.hud.show_toast("Ядерный удар поразил цель! Эпицентр уничтожен.")

func _tick_explosions(_delta: float) -> void:
	pass

func _update_native_card(f: Facility) -> void:
	if main_ref == null or main_ref.hud == null:
		return
	var h = main_ref.hud
	var p = world_ref.player
	if p == null:
		return

	var has_w = bool(f.get_meta("has_warhead", false))
	var prod = bool(f.get_meta("producing", false))
	var hp = float(f.get_meta("hp", SILO_MAX_HP))
	var max_hp = float(f.get_meta("max_hp", SILO_MAX_HP))

	var title = "Комплекс МБР «Сармат»"
	var sub = "Стратегический ядерный арсенал"
	h._card("nuclear_silo_%d" % f.id, "icon_m_ballistic", title, sub, false, false, true)

	var info = ""
	if has_w:
		info = Loc.t("СТАТУС: БОЕГОЛОВКА СМОНТИРОВАНА · МБР НА ДЕЖУРСТВЕ\nЗАПАС УРАНА: %d ШТ. · ДАЛЬНОСТЬ: НЕОГРАНИЧЕНА\nПРОЧНОСТЬ ШАХТЫ: %d/%d") % [p.uranium, int(hp), int(max_hp)]
	elif prod:
		var left = int(ceil(WARHEAD_TIME - float(f.get_meta("prod_t", 0.0))))
		info = Loc.t("СТАТУС: ОБОГАЩЕНИЕ УРАНА И МОНТАЖ ЯБЧ... %d СЕК\nЗАПАС УРАНА В СТРАНЕ: %d ШТ.\nПРОЧНОСТЬ ШАХТЫ: %d/%d") % [left, p.uranium, int(hp), int(max_hp)]
	else:
		info = Loc.t("СТАТУС: ШАХТА ПУСТА · ТРЕБУЕТСЯ СБОРКА ТЕРМОЯДЕРНОЙ БЧ\nЗАПАС УРАНА В СТРАНЕ: %d ШТ. (ТРЕБУЕТСЯ 8 УРАНА И 1500$)\nПРОЧНОСТЬ ШАХТЫ: %d/%d") % [p.uranium, int(hp), int(max_hp)]

	h._set_info(info, not has_w and not prod)

	var acts: Array = []
	if has_w:
		acts.append(h._act("ЯДЕРНЫЙ\nУДАР", "icon_target", "nuke_target", true))
	elif prod:
		acts.append(h._act("ИДЁТ\nСБОРКА", "icon_r_uranium", "none", false, 0, "%d с" % int(ceil(WARHEAD_TIME - float(f.get_meta("prod_t", 0.0))))))
	else:
		var can_craft = p.money >= WARHEAD_COST_MONEY and p.uranium >= WARHEAD_COST_URANIUM
		acts.append(h._act("СБОРКА ЯБЧ\n1500$ · 8 УРАНА", "icon_r_uranium", "nuke_craft", can_craft))

	if hp < max_hp:
		acts.append(h._act("РЕМОНТ\nШАХТЫ", "icon_upgrade", "nuke_repair", p.money >= 400))

	acts.append(h._act("ЗАКРЫТЬ", "icon_close", "nuke_close", true))
	h._fill_acts("nuclear_silo_acts_%d" % f.id, acts)

# -------------------------------------------------------------
# Внутренний класс визуального слоя мира для NuclearStrike
# -------------------------------------------------------------
class NuclearWorldLayer extends Node2D:
	var mod: NuclearStrikeMod = null
	var main: Node = null
	var world: Node = null

	func setup(p_mod: NuclearStrikeMod, p_main: Node, p_world: Node) -> void:
		mod = p_mod
		main = p_main
		world = p_world
		z_index = 80

	func _unhandled_input(event: InputEvent) -> void:
		if mod == null or world == null:
			return
		if event is InputEventMouseButton and event.pressed:
			var wp: Vector2 = world.camera.screen_to_world(event.position) if world.camera != null else event.position
			var cell = Vector2i(floori(wp.x / float(GameWorld.CELL)), floori(wp.y / float(GameWorld.CELL)))
			var wpos = Vector2(cell * GameWorld.CELL + Vector2i(GameWorld.CELL / 2, GameWorld.CELL / 2))

			if event.button_index == MOUSE_BUTTON_LEFT:
				if mod.is_placing:
					mod.place_silo_at(cell)
					get_viewport().set_input_as_handled()
					return
				elif mod.is_targeting:
					mod.launch_strike(wpos)
					get_viewport().set_input_as_handled()
					return

			elif event.button_index == MOUSE_BUTTON_RIGHT:
				if mod.is_placing:
					mod.cancel_placement()
					get_viewport().set_input_as_handled()
					return
				elif mod.is_targeting:
					mod._cancel_targeting()
					get_viewport().set_input_as_handled()
					return

	func _draw() -> void:
		if mod == null or world == null:
			return

		# 1. Отрисовка призрака при постройке шахты
		if mod.is_placing:
			var mouse_sp: Vector2 = get_viewport().get_mouse_position()
			var wp: Vector2 = world.camera.screen_to_world(mouse_sp) if world.camera != null else mouse_sp
			var cell = Vector2i(floori(wp.x / float(GameWorld.CELL)), floori(wp.y / float(GameWorld.CELL)))
			var can_p = mod.can_place_at(cell)
			var p_col = Color(0.1, 0.9, 0.2, 0.45) if can_p else Color(0.95, 0.15, 0.15, 0.45)
			var rect = Rect2(Vector2(cell * GameWorld.CELL), Vector2(mod.SILO_SIZE * GameWorld.CELL))
			draw_rect(rect, p_col, true)
			draw_rect(rect, Color(p_col.r, p_col.g, p_col.b, 0.9), false, 2.0)

		# 2. Отрисовка прицела при ядерном наведении
		if mod.is_targeting:
			var mouse_pos = get_global_mouse_position()
			var m_cell = world.cell_at_screen(mouse_pos)
			var wpos = Vector2(m_cell * GameWorld.CELL + Vector2i(GameWorld.CELL / 2, GameWorld.CELL / 2))
			var t_time = float(Time.get_ticks_msec()) * 0.005
			var pulse = 0.8 + 0.2 * sin(t_time * 4.0)

			# Окружность радиуса поражения (80 пикселей)
			draw_circle(wpos, 85.0, Color(1.0, 0.2, 0.1, 0.22 * pulse))
			draw_arc(wpos, 85.0, 0.0, TAU, 36, Color(1.0, 0.85, 0.2, 0.85 * pulse), 2.0)
			# Перекрестье
			draw_line(wpos - Vector2(25, 0), wpos + Vector2(25, 0), Color(1.0, 0.1, 0.1, 0.9), 2.0)
			draw_line(wpos - Vector2(0, 25), wpos + Vector2(0, 25), Color(1.0, 0.1, 0.1, 0.9), 2.0)
			draw_circle(wpos, 4.0, Color(1.0, 0.9, 0.1, 0.95))

		# 3. Отрисовка летящих МБР и их дымных следов
		for m in mod.active_missiles:
			var trail = m["trail"] as Array
			for tp in trail:
				draw_circle(tp["pos"], 3.5, Color(0.95, 0.95, 0.95, 0.65))
			if not trail.is_empty():
				var head_pos = (trail.back())["pos"] as Vector2
				# Корпус ракеты
				draw_circle(head_pos, 4.5, Color(1.0, 0.2, 0.2, 0.95))
				draw_circle(head_pos, 2.5, Color(1.0, 0.9, 0.2, 1.0))
