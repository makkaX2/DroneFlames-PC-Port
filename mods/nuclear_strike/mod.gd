extends RefCounted

## Мод «Ядерный арсенал (МБР и Шахты)» для DroneFlames PC Port
## Полная аутентичная интеграция в интерфейс, меню и движок игры.
## Добавляет шахтный комплекс МБР во вкладку «АРМИЯ» нижней панели.
## Позволяет обогащать уран и собирать термоядерные боеголовки.
## Производит пуск межконтинентальной баллистической ракеты с глобальным радиусом поражения,
## кинематографичной ослепляющей вспышкой, ядерным грибом и выжиганием радиоактивной пустоши.

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
var target_point: Vector2 = Vector2.INF

const SILO_COST_MONEY: int = 3500
const SILO_COST_URANIUM: int = 10
const WARHEAD_COST_MONEY: int = 1500
const WARHEAD_COST_URANIUM: int = 8
const WARHEAD_TIME: float = 24.0

const SILO_SIZE: Vector2i = Vector2i(4, 4)
const SILO_MAX_HP: float = 650.0
const SILO_REFUND: int = 1750
const SILO_REPAIR_COST: int = 400

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
	target_point = Vector2.INF
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
						lbl.text = "ШАХТА\nМБР"
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
					"Стратегический ракетный комплекс шахтного базирования. Требует 3500 $ и 10 урана (с урановых шахт). Снаряжается термоядерными МБР.",
					""
				)
			toggle_placement()
		"nuke_craft":
			if selected_fac != null:
				_order_warhead(selected_fac)
		"nuke_target":
			if selected_fac != null:
				_start_targeting(selected_fac)
		"nuke_target_reset":
			target_point = Vector2.INF
			if main_ref != null and main_ref.hud != null:
				main_ref.hud.show_toast("Точка ядерного удара сброшена. Укажите новый квадрат на карте.")
			if ClassDB.class_exists("UiKit"):
				UiKit.snd("ui_select")
		"nuke_launch_confirm":
			if target_point != Vector2.INF and targeting_silo != null:
				launch_strike(target_point)
			elif main_ref != null and main_ref.hud != null:
				main_ref.hud.show_toast("Сначала укажите точку удара на карте!")
				if ClassDB.class_exists("UiKit"):
					UiKit.snd("ui_error")
		"nuke_cancel_target":
			_cancel_targeting()
		"nuke_repair":
			if selected_fac != null:
				_repair_silo(selected_fac)
		"nuke_demolish":
			if selected_fac != null:
				_demolish_silo(selected_fac)
		"nuke_close":
			selected_fac = null
			if main_ref != null and "selected_fac" in main_ref:
				main_ref.selected_fac = null
			if main_ref != null and main_ref.hud != null:
				main_ref.hud.hide_ops()

func _is_silo(f: Facility) -> bool:
	if f == null:
		return false
	if f.has_meta("is_nuclear_silo") and f.get_meta("is_nuclear_silo"):
		return true
	if f.army_build == "nuclear_silo" or f.lower_sprite == "nuclear_silo":
		f.set_meta("is_nuclear_silo", true)
		f.set_meta("hp", f.hp if f.hp > 0.0 else SILO_MAX_HP)
		f.set_meta("max_hp", SILO_MAX_HP)
		f.set_meta("has_warhead", f.missiles > 0)
		f.set_meta("producing", f.producing)
		f.set_meta("prod_t", f.prod_t)
		return true
	return false

func _on_match_tick(main: Node, world: Node, delta: float) -> void:
	main_ref = main
	world_ref = world
	_tick_silos(delta)
	_tick_missiles(delta)
	_tick_explosions(delta)

	# 1. Если активен режим наведения термоядерного удара — отображаем специальную карточку прицеливания
	if is_targeting and targeting_silo != null and is_instance_valid(targeting_silo):
		_update_targeting_card()
	# 2. Иначе обновляем карточку выбранной шахты
	elif main != null and "selected_fac" in main and main.selected_fac != null and is_instance_valid(main.selected_fac):
		var f: Facility = main.selected_fac as Facility
		if _is_silo(f):
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
			main_ref.hud.show_toast("Не хватает ресурсов: требуется 3500 $ и 10 Урана (добывается на урановых шахтах)!")
		if ClassDB.class_exists("UiKit"):
			UiKit.snd("ui_error")
		return

	is_placing = true
	is_targeting = false
	if main_ref != null and main_ref.hud != null:
		main_ref.hud.set_key_pressed("nuclear_silo", true)
		main_ref.hud.show_toast("ШАХТА МБР: Выберите безопасное место на своей территории (ЛКМ/Тап — построить, ПКМ — отмена)")

	if ClassDB.class_exists("UiKit"):
		UiKit.snd("ui_select")

func cancel_placement() -> void:
	is_placing = false
	if main_ref != null and main_ref.hud != null:
		main_ref.hud.set_key_pressed("nuclear_silo", false)

func place_why(cell: Vector2i) -> String:
	if world_ref == null or not is_instance_valid(world_ref):
		return "Мир недоступен"
	var d = world_ref.data
	if d == null:
		return "Данные карты недоступны"

	if cell.x < 2 or cell.y < 2 or cell.x + SILO_SIZE.x >= d.w - 2 or cell.y + SILO_SIZE.y >= d.h - 2:
		return "Не помещается у края карты"

	var player = world_ref.player
	if player == null:
		return "Игрок не найден"

	for dy in range(SILO_SIZE.y):
		for dx in range(SILO_SIZE.x):
			var cx = cell.x + dx
			var cy = cell.y + dy
			if not d.inside(cx, cy):
				return "За пределами карты"
			
			var owner_id = d.get_owner_id(cx, cy) if d.has_method("get_owner_id") else d.get_owner(cx, cy)
			if owner_id != player.id:
				return "Стройте только на своей территории"

			var b = d.get_biome(cx, cy)
			if Biome.is_water(b):
				return "Нельзя строить на воде"

			var fl = d.flags[cy * d.w + cx]
			# Городские постройки и мосты блокируют
			if (fl & (WorldData.F_CITY | WorldData.F_BRIDGE)) != 0:
				return "Место занято: городские постройки"

			# Если клетка занята, но там просто дерево — дерево будет спилено
			if (fl & WorldData.F_OCCUPIED) != 0:
				if world_ref.tree_at.has(cy * d.w + cx):
					continue
				# Проверяем, есть ли уже база или ПВО на этой клетке
				if world_ref.mil != null and world_ref.mil.has_method("facility_at"):
					var fac_at = world_ref.mil.facility_at(Vector2i(cx, cy))
					if fac_at != null and is_instance_valid(fac_at):
						return "Место занято: постройка или ПВО"
				return "Место занято другими объектами"

	return ""

func can_place_at(cell: Vector2i) -> bool:
	return place_why(cell) == ""

func place_silo_at(cell: Vector2i) -> void:
	var why = place_why(cell)
	if why != "":
		if main_ref != null and main_ref.hud != null:
			main_ref.hud.show_toast("Нельзя построить здесь: " + why)
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
	f.army_build = "nuclear_silo"
	f.lower_sprite = "nuclear_silo"
	f.hp = SILO_MAX_HP
	f.missiles = 1
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
		world_ref.fx.spawn("dust_s", Vector2(cell * GameWorld.CELL + Vector2i(8, 8)), 8)

	if main_ref != null and main_ref.hud != null:
		main_ref.hud.show_toast("Шахтный комплекс МБР построен! Стратегическая ракета с термоядерной БЧ на боевом дежурстве.")
		main_ref.selected_fac = f

func _order_warhead(f: Facility) -> void:
	var p = world_ref.player
	if p == null:
		return
	if p.money < WARHEAD_COST_MONEY or p.uranium < WARHEAD_COST_URANIUM:
		if main_ref != null and main_ref.hud != null:
			main_ref.hud.show_toast("Не хватает: требуется 1500 $ и 8 урана (из урановых шахт или торговли)!")
		if ClassDB.class_exists("UiKit"):
			UiKit.snd("ui_error")
		return

	p.money -= WARHEAD_COST_MONEY
	p.uranium -= WARHEAD_COST_URANIUM

	f.set_meta("producing", true)
	f.set_meta("prod_t", 0.0)
	f.producing = true
	f.prod_t = 0.0

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
		if ClassDB.class_exists("UiKit"):
			UiKit.snd("ui_error")
		return
	is_targeting = true
	is_placing = false
	targeting_silo = f
	target_point = Vector2.INF

	if ClassDB.class_exists("Sfx"):
		Sfx.play("alarm_general_quarters")
	if main_ref != null and main_ref.hud != null:
		main_ref.hud.show_toast("БОЕВАЯ ТРЕВОГА! Выберите точку нанесения термоядерного удара на карте.")

func _cancel_targeting() -> void:
	is_targeting = false
	targeting_silo = null
	target_point = Vector2.INF
	if main_ref != null and main_ref.hud != null:
		main_ref.hud.show_toast("Наведение ядерного удара отменено.")
		if selected_fac != null:
			_update_native_card(selected_fac)
		else:
			main_ref.hud.hide_ops()
	if ClassDB.class_exists("UiKit"):
		UiKit.snd("ui_select")

func set_target_point(wpos: Vector2) -> void:
	target_point = wpos
	if ClassDB.class_exists("UiKit"):
		UiKit.snd("ui_select")
	if main_ref != null and "overlay" in main_ref and main_ref.overlay != null:
		main_ref.overlay.ripple(target_point, "alert_red")
	var cell: Vector2i = Vector2i(floori(wpos.x / float(GameWorld.CELL)), floori(wpos.y / float(GameWorld.CELL)))
	if main_ref != null and main_ref.hud != null:
		main_ref.hud.show_toast("Цель зафиксирована: квадрат (%d, %d). Нажмите «ПУСК МБР» в меню!" % [cell.x, cell.y])

func launch_strike(target_world_pos: Vector2) -> void:
	if targeting_silo == null or not is_instance_valid(targeting_silo):
		_cancel_targeting()
		return

	var f = targeting_silo
	f.set_meta("has_warhead", false)
	f.missiles = 0
	is_targeting = false
	targeting_silo = null
	target_point = Vector2.INF

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
		main_ref.hud.hide_ops()

func _repair_silo(f: Facility) -> void:
	var p = world_ref.player
	if p == null:
		return
	var cur_hp = float(f.get_meta("hp", SILO_MAX_HP))
	if cur_hp >= SILO_MAX_HP:
		return
	if p.money < SILO_REPAIR_COST:
		if main_ref != null and main_ref.hud != null:
			main_ref.hud.show_toast("Не хватает средств на ремонт шахты (требуется %d $)" % SILO_REPAIR_COST)
		if ClassDB.class_exists("UiKit"):
			UiKit.snd("ui_error")
		return
	p.money -= SILO_REPAIR_COST
	f.set_meta("hp", SILO_MAX_HP)
	if ClassDB.class_exists("Sfx"):
		Sfx.play("repair_work", f.center_px())
	if main_ref != null and main_ref.hud != null:
		main_ref.hud.show_toast("Шахтный комплекс МБР полностью отремонтирован!")

func _demolish_silo(f: Facility) -> void:
	var p = world_ref.player
	if p != null:
		p.money += SILO_REFUND

	var d = world_ref.data
	if d != null:
		for dy in range(f.size.y):
			for dx in range(f.size.x):
				var cx = f.cell.x + dx
				var cy = f.cell.y + dy
				d.clear_flag(cx, cy, WorldData.F_OCCUPIED)

	if f.main_obj >= 0 and world_ref.has_method("remove_object"):
		world_ref.remove_object(f.main_obj)
	world_ref.mil.facilities.erase(f)

	selected_fac = null
	if main_ref != null and "selected_fac" in main_ref:
		main_ref.selected_fac = null
	if main_ref != null and main_ref.hud != null:
		main_ref.hud.show_toast("Шахтный комплекс МБР демонтирован (+%d $ возврат)." % SILO_REFUND)
		main_ref.hud.hide_ops()
	if ClassDB.class_exists("UiKit"):
		UiKit.snd("ui_select")

func _tick_silos(delta: float) -> void:
	if world_ref == null or world_ref.mil == null:
		return
	for f in world_ref.mil.facilities:
		if f == null or not is_instance_valid(f):
			continue
		if not _is_silo(f):
			continue
		if bool(f.get_meta("producing", false)):
			var t = float(f.get_meta("prod_t", 0.0)) + delta
			f.set_meta("prod_t", t)
			f.prod_t = t
			if t >= WARHEAD_TIME:
				f.set_meta("producing", false)
				f.producing = false
				f.set_meta("has_warhead", true)
				f.missiles = 1
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

	var title = "Шахтный комплекс МБР «Сармат»"
	var sub = "РВСН · Стратегический арсенал · Шахта #%d" % f.id
	h._card("nuclear_silo_%d" % f.id, "icon_m_ballistic", title, sub, false, false, true)

	var info = ""
	if has_w:
		info = Loc.t("СТАТУС: БОЕГОЛОВКА СМОНТИРОВАНА · МБР НА ДЕЖУРСТВЕ · ДАЛЬНОСТЬ: ГЛОБАЛЬНАЯ\nЗАПАС УРАНА В СТРАНЕ: %d ШТ. · ПРОЧНОСТЬ ШАХТЫ: %d/%d") % [p.uranium, int(hp), int(max_hp)]
	elif prod:
		var left_s = maxf(0.0, WARHEAD_TIME - float(f.get_meta("prod_t", 0.0)))
		info = Loc.t("СТАТУС: ОБОГАЩЕНИЕ УРАНА И МОНТАЖ ЯБЧ... %s\nЗАПАС УРАНА В СТРАНЕ: %d ШТ. · ПРОЧНОСТЬ ШАХТЫ: %d/%d") % [h._mmss(left_s), p.uranium, int(hp), int(max_hp)]
	else:
		info = Loc.t("СТАТУС: ШАХТА ПУСТА · ТРЕБУЕТСЯ СБОРКА ТЕРМОЯДЕРНОЙ БЧ (1500$ · 8 УРАНА)\nЗАПАС УРАНА В СТРАНЕ: %d ШТ. · ПРОЧНОСТЬ ШАХТЫ: %d/%d") % [p.uranium, int(hp), int(max_hp)]

	h._set_info(info, not has_w and not prod)
	h.ops_detail.text = "Стратегический ракетный комплекс шахтного базирования. Заглублённая железобетонная шахта с броневой крышкой способна выдержать бомбардировку. Оснащается межконтинентальной баллистической ракетой с разделяющейся головной частью термоядерного оснащения. Для сборки боеголовки требуется обогащённый уран с урановых шахт."
	h.ops_detail.visible = true

	var acts: Array = []
	if has_w:
		acts.append(h._act("ЯДЕРНЫЙ\nУДАР", "icon_target", "nuke_target", true))
	elif prod:
		var left_s = maxf(0.0, WARHEAD_TIME - float(f.get_meta("prod_t", 0.0)))
		acts.append(h._act("ИДЁТ\nСБОРКА", "icon_r_uranium", "none", false, 0, "%s" % h._mmss(left_s)))
	else:
		var can_craft = p.money >= WARHEAD_COST_MONEY and p.uranium >= WARHEAD_COST_URANIUM
		acts.append(h._act("СБОРКА ЯБЧ\n1500$ · 8 У", "icon_r_uranium", "nuke_craft", can_craft))

	if hp < max_hp:
		acts.append(h._act("РЕМОНТ\n400$", "icon_restore", "nuke_repair", p.money >= SILO_REPAIR_COST))

	acts.append(h._act("СНОС\n+1750$", "icon_close", "nuke_demolish", true))
	acts.append(h._act("ЗАКРЫТЬ", "icon_arrow_down", "nuke_close", true))
	h._fill_acts("nuclear_silo_acts_%d" % f.id, acts)

func _update_targeting_card() -> void:
	if main_ref == null or main_ref.hud == null or targeting_silo == null:
		return
	var h = main_ref.hud
	var title = "БОЕВАЯ ТРЕВОГА: НАВЕДЕНИЕ МБР"
	var sub = "Укажите квадрат удара на карте (ЛКМ/Тап — выбор, ПКМ — отмена)"
	h._card("nuke_targeting", "icon_m_ballistic", title, sub, false, false, false)

	if target_point == Vector2.INF:
		h._set_info("ТАПНИТЕ ПО КАРТЕ, ЧТОБЫ ВЫБРАТЬ ЦЕЛЬ ДЛЯ ТЕРМОЯДЕРНОГО УДАРА", false)
	else:
		var cell: Vector2i = Vector2i(floori(target_point.x / float(GameWorld.CELL)), floori(target_point.y / float(GameWorld.CELL)))
		var dist_km = targeting_silo.center_px().distance_to(target_point) * 0.004
		var flight_s = int(ceil(clampf(6.0 + targeting_silo.center_px().distance_to(target_point) * 0.003, 7.0, 11.0)))
		h._set_info("ЦЕЛЬ: КВАДРАТ (%d, %d) · ДИСТАНЦИЯ: %.1f КМ · ВРЕМЯ ПОЛЁТА: %d СЕК\nРАДИУС ПОРАЖЕНИЯ: 18 КЛЕТОК · ЭПИЦЕНТР БУДЕТ ВЫЖЖЕН" % [cell.x, cell.y, dist_km, flight_s], false)

	h.ops_detail.text = "Наведение стратегической МБР «Сармат». После подтверждения пуска ракета выйдет из шахты на твердотопливном ускорителе, выйдет на баллистическую траекторию и поразит цель. Защитные сооружения и ПВО противника в эпицентре будут уничтожены."
	h.ops_detail.visible = true

	var acts: Array = []
	var has_tgt = target_point != Vector2.INF
	acts.append(h._act("ПУСК МБР", "icon_target", "nuke_launch_confirm", has_tgt))
	if has_tgt:
		acts.append(h._act("СБРОС\nЦЕЛИ", "icon_refresh", "nuke_target_reset", true))
	acts.append(h._act("ОТМЕНА", "icon_close", "nuke_cancel_target", true))
	h._fill_acts("nuclear_targeting_acts", acts)

# -------------------------------------------------------------
# Внутренний класс визуального слоя мира для NuclearStrike
# -------------------------------------------------------------
class NuclearWorldLayer extends Node2D:
	var mod = null
	var main: Node = null
	var world: Node = null

	func setup(p_mod, p_main: Node, p_world: Node) -> void:
		mod = p_mod
		main = p_main
		world = p_world
		z_index = 80

	func _unhandled_input(event: InputEvent) -> void:
		if mod == null or world == null or main == null:
			return

		# Обработка мыши (InputEventMouseButton) и сенсорного ввода (InputEventScreenTouch)
		var is_press: bool = false
		var is_cancel: bool = false
		var ev_pos: Vector2 = Vector2.ZERO

		if event is InputEventMouseButton:
			if event.pressed:
				if event.button_index == MOUSE_BUTTON_LEFT:
					is_press = true
					ev_pos = event.position
				elif event.button_index == MOUSE_BUTTON_RIGHT:
					is_cancel = true
		elif event is InputEventScreenTouch:
			if event.pressed:
				is_press = true
				ev_pos = event.position

		# Клавиша ESC для отмены
		if event is InputEventKey and event.pressed and not event.echo:
			if event.keycode == KEY_ESCAPE:
				if mod.is_placing:
					mod.cancel_placement()
					get_viewport().set_input_as_handled()
					return
				elif mod.is_targeting:
					mod._cancel_targeting()
					get_viewport().set_input_as_handled()
					return

		if is_press:
			var wp: Vector2 = main.cam.screen_to_world(ev_pos) if main.cam != null else ev_pos
			var cell = Vector2i((wp / float(GameWorld.CELL)).floor())

			if mod.is_placing:
				mod.place_silo_at(cell)
				get_viewport().set_input_as_handled()
				return
			elif mod.is_targeting:
				mod.set_target_point(wp)
				get_viewport().set_input_as_handled()
				return

		elif is_cancel:
			if mod.is_placing:
				mod.cancel_placement()
				get_viewport().set_input_as_handled()
				return
			elif mod.is_targeting:
				mod._cancel_targeting()
				get_viewport().set_input_as_handled()
				return

	func _draw() -> void:
		if mod == null or world == null or main == null:
			return

		var mouse_sp: Vector2 = get_viewport().get_mouse_position()
		var mouse_w: Vector2 = main.cam.screen_to_world(mouse_sp) if main.cam != null else mouse_sp

		# 1. Отрисовка призрака при постройке шахты по сетке
		if mod.is_placing:
			var cell = Vector2i((mouse_w / float(GameWorld.CELL)).floor())
			var valid = mod.can_place_at(cell)

			var pos = Vector2(cell * GameWorld.CELL)
			var sz = Vector2(mod.SILO_SIZE * GameWorld.CELL)

			var fill_col = Color(0.2, 1.0, 0.3, 0.25) if valid else Color(1.0, 0.25, 0.25, 0.25)
			var outline_col = Color(0.2, 1.0, 0.3, 0.95) if valid else Color(1.0, 0.25, 0.25, 0.95)

			# Фундамент шахты
			draw_rect(Rect2(pos, sz), fill_col)
			draw_rect(Rect2(pos, sz), outline_col, false, 2.0)

			# Сетка ячеек фундамента
			for x in range(mod.SILO_SIZE.x + 1):
				var lx = pos.x + float(x * GameWorld.CELL)
				draw_line(Vector2(lx, pos.y), Vector2(lx, pos.y + sz.y), Color(outline_col.r, outline_col.g, outline_col.b, 0.3), 1.0)
			for y in range(mod.SILO_SIZE.y + 1):
				var ly = pos.y + float(y * GameWorld.CELL)
				draw_line(Vector2(pos.x, ly), Vector2(pos.x + sz.x, ly), Color(outline_col.r, outline_col.g, outline_col.b, 0.3), 1.0)

			# Круглая бронекрышка шахты в центре
			var center_p = pos + sz * 0.5
			draw_circle(center_p, 5.5, Color(0.15, 0.18, 0.22, 0.85))
			draw_arc(center_p, 5.5, 0.0, TAU, 24, outline_col, 1.5)
			draw_circle(center_p, 2.0, Color(outline_col.r, outline_col.g, outline_col.b, 0.9))

			# Периметр безопасности
			draw_arc(center_p, 20.0, 0.0, TAU, 32, Color(outline_col.r, outline_col.g, outline_col.b, 0.4), 1.0)

		# 2. Отрисовка тактического прицела при ядерном наведении
		if mod.is_targeting:
			var t_time = float(Time.get_ticks_msec()) * 0.005
			var pulse = 0.8 + 0.2 * sin(t_time * 5.0)

			# Если цель уже зафиксирована — отображаем её, иначе следуем за курсором
			var aim_pos = mod.target_point if mod.target_point != Vector2.INF else mouse_w

			# Линия траектории от шахты к цели
			if mod.targeting_silo != null and is_instance_valid(mod.targeting_silo):
				var silo_pos = mod.targeting_silo.center_px()
				draw_line(silo_pos, aim_pos, Color(1.0, 0.8, 0.2, 0.4 * pulse), 1.5)
				draw_circle(silo_pos, 4.0, Color(1.0, 0.85, 0.2, 0.8))

			# Окружность радиуса поражения (18 клеток = 72-85 пикселей)
			draw_circle(aim_pos, 85.0, Color(1.0, 0.15, 0.1, 0.2 * pulse))
			draw_arc(aim_pos, 85.0, 0.0, TAU, 48, Color(1.0, 0.85, 0.2, 0.9 * pulse), 2.0)
			draw_arc(aim_pos, 42.0, 0.0, TAU, 32, Color(1.0, 0.3, 0.1, 0.5 * pulse), 1.0)

			# Тактическое перекрестье
			draw_line(aim_pos - Vector2(28, 0), aim_pos + Vector2(28, 0), Color(1.0, 0.2, 0.1, 0.95), 2.0)
			draw_line(aim_pos - Vector2(0, 28), aim_pos + Vector2(0, 28), Color(1.0, 0.2, 0.1, 0.95), 2.0)
			draw_circle(aim_pos, 4.5, Color(1.0, 0.9, 0.15, 1.0))

		# 3. Отрисовка построенных шахт на карте (укреплённая плита и статусная индикация)
		if world.mil != null and world.mil.facilities != null:
			for f in world.mil.facilities:
				if f == null or not is_instance_valid(f):
					continue
				if not f.has_meta("is_nuclear_silo"):
					continue
				var f_pos = Vector2(f.cell * GameWorld.CELL)
				var f_sz = Vector2(f.size * GameWorld.CELL)
				var center_px = f.center_px()

				# Световой статус-индикатор боеготовности
				var has_w = bool(f.get_meta("has_warhead", false))
				var prod = bool(f.get_meta("producing", false))
				var led_col = Color(0.2, 1.0, 0.3, 0.95) if has_w else (Color(1.0, 0.8, 0.2, 0.95) if prod else Color(1.0, 0.25, 0.25, 0.8))
				draw_circle(f_pos + Vector2(3, 3), 2.0, led_col)

		# 4. Отрисовка летящих МБР и их дымных конденсационных следов
		for m in mod.active_missiles:
			var trail = m["trail"] as Array
			for tp in trail:
				draw_circle(tp["pos"], 3.5, Color(0.95, 0.95, 0.95, 0.65))
			if not trail.is_empty():
				var head_pos = (trail.back())["pos"] as Vector2
				# Корпус ракеты и факел двигателя
				draw_circle(head_pos, 5.0, Color(1.0, 0.2, 0.2, 0.95))
				draw_circle(head_pos, 3.0, Color(1.0, 0.9, 0.2, 1.0))
