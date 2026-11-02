class_name AirborneAssaultMod
extends RefCounted

## Мод «Воздушный Десант (ВДВ) — Спецназ и Тактическая Авиация» для DroneFlames PC Port
## Полная интеграция в оригинальный интерфейс и движок игры.
## Добавляет слот постройки «ШТАБ ВДВ» во вкладку «АРМИЯ» в нижней панели.
## Требует электроэнергию (ТЭС/АЭС/СЭС), производит и готовит к вылету
## вертолёты Ми-8 «Терминатор» (тактическая высадка на тросах с зависания)
## и тяжёлые десантные самолёты Ил-76 (выброска БМД-4 и спецназа на парашютах).
## Поддерживает управление вертолётом в воздухе (смена маршрута ПКМ),
## а высаженные бойцы и техника полностью управляемы игроком и обладают автономным тактическим ИИ.

var mm_ref: Node = null
var main_ref: Node = null
var world_ref: Node = null

var world_layer: Node2D = null

# Размещение нового штаба ВДВ
var is_placing_hq: bool = false
var selected_hq: Facility = null

# Режим целеуказания для вылета: "" (нет), "mi8" (вертолёт), "il76" (самолёт)
var targeting_op: String = ""
var targeting_fac: Facility = null

# Активные вертолёты и самолёты в воздухе
var active_helis: Array = []
var active_planes: Array = []
var active_parachutes: Array = []

# Выбранный в воздухе вертолёт для оперативного управления игроком
var selected_heli: Object = null

# Список зарегистрированных бойцов ВДВ на земле
var active_vdv_troops: Array = []

# Стоимости и параметры
const HQ_COST_MONEY: int = 1400
const HQ_COST_METAL: int = 15
const HQ_SIZE: Vector2i = Vector2i(6, 4)
const HQ_MAX_HP: float = 450.0

const MI8_COST_MONEY: int = 950
const MI8_COST_METAL: int = 6
const MI8_PREP_TIME: float = 14.0
const MI8_MAX_LIMIT: int = 2

const IL76_COST_MONEY: int = 2200
const IL76_COST_METAL: int = 14
const IL76_PREP_TIME: float = 24.0
const IL76_MAX_LIMIT: int = 1

func init_mod(mm: Node) -> void:
	mm_ref = mm
	_create_and_register_icons(mm)
	if mm.has_method("register_hook"):
		mm.call("register_hook", "on_world_started", Callable(self, "_on_world_started"))
		mm.call("register_hook", "on_match_tick", Callable(self, "_on_match_tick"))
	print("[AirborneAssault] Native VDV mod initialized.")

func cleanup_mod(mm: Node) -> void:
	_cleanup_nodes()
	if mm != null:
		if mm.has_method("unregister_texture"):
			mm.call("unregister_texture", "icon_vdv_hq")
			mm.call("unregister_texture", "icon_mi8")
			mm.call("unregister_texture", "icon_il76")
			mm.call("unregister_texture", "icon_vdv_desant")
		if mm.has_method("unregister_hook"):
			mm.call("unregister_hook", "on_world_started", Callable(self, "_on_world_started"))
			mm.call("unregister_hook", "on_match_tick", Callable(self, "_on_match_tick"))
	print("[AirborneAssault] Mod cleaned up.")

func _cleanup_nodes() -> void:
	is_placing_hq = false
	selected_hq = null
	targeting_op = ""
	targeting_fac = null
	selected_heli = null
	active_helis.clear()
	active_planes.clear()
	active_parachutes.clear()
	active_vdv_troops.clear()
	if world_layer != null and is_instance_valid(world_layer):
		world_layer.queue_free()
		world_layer = null

func _on_world_started(main: Node, world: Node) -> void:
	main_ref = main
	world_ref = world
	_cleanup_nodes()

	# 1. Встраивание слота постройки в нативную вкладку «АРМИЯ» (Tab 4)
	if main.hud != null:
		if main.hud.pages.size() > 4:
			var army_grid = main.hud.pages[4] as GridContainer
			if army_grid != null and not main.hud.keys.has("airborne_hq"):
				var cell = main.hud._cell("airborne_hq", "icon_vdv_hq", true)
				if main.hud.key_labels.has("airborne_hq"):
					var lbl = main.hud.key_labels["airborne_hq"] as Label
					if lbl != null:
						lbl.text = "ШТАБ ВДВ"
				army_grid.add_child(cell)
				army_grid.move_child(cell, 2) # Рядом с казармами и бронезаводом

		# Подключение к сигналу действий HUD
		if not main.hud.action.is_connected(_on_hud_action):
			main.hud.action.connect(_on_hud_action)

	# 2. Слой мира для отображения сетки постройки, вертолётов, тросов и парашютов
	world_layer = AirborneAssaultWorldLayer.new()
	world_layer.setup(self, main, world)
	world.add_child(world_layer)

	print("[AirborneAssault] Injected airborne_hq into Army tab. World layer attached.")

# ==============================================================================
# Генерация аутентичных пиксельных иконок для интерфейса игры
# ==============================================================================
func _create_and_register_icons(mm: Node) -> void:
	if mm == null or not mm.has_method("register_texture"):
		return

	# 1. Иконка Штаба ВДВ (вертолётная площадка с буквой H и шевроном)
	var img_hq = Image.create(32, 32, false, Image.FORMAT_RGBA8)
	img_hq.fill(Color(0, 0, 0, 0))
	for y in range(4, 28):
		for x in range(4, 28):
			var d = Vector2(x - 15.5, y - 15.5).length()
			if d <= 12.0:
				if d >= 10.5:
					img_hq.set_pixel(x, y, Color(0.9, 0.75, 0.2, 1.0)) # Жёлтый обод площадки
				else:
					img_hq.set_pixel(x, y, Color(0.14, 0.16, 0.18, 0.95)) # Асфальт
	# Буква H в центре
	for y in range(9, 23):
		for x in range(11, 14):
			img_hq.set_pixel(x, y, Color(0.95, 0.85, 0.3, 1.0))
		for x in range(18, 21):
			img_hq.set_pixel(x, y, Color(0.95, 0.85, 0.3, 1.0))
	for y in range(14, 18):
		for x in range(14, 18):
			img_hq.set_pixel(x, y, Color(0.95, 0.85, 0.3, 1.0))
	# Крылья ВДВ по бокам
	for i in range(5):
		img_hq.set_pixel(6 + i, 6 + i, Color(0.2, 0.8, 1.0, 0.9))
		img_hq.set_pixel(25 - i, 6 + i, Color(0.2, 0.8, 1.0, 0.9))
	mm.call("register_texture", "icon_vdv_hq", ImageTexture.create_from_image(img_hq))

	# 2. Иконка вертолёта Ми-8
	var img_mi8 = Image.create(32, 32, false, Image.FORMAT_RGBA8)
	img_mi8.fill(Color(0, 0, 0, 0))
	# Несущий винт
	for x in range(3, 29):
		img_mi8.set_pixel(x, 7, Color(0.75, 0.82, 0.9, 0.85))
	for y in range(8, 11):
		img_mi8.set_pixel(15, y, Color(0.4, 0.45, 0.5, 1.0))
		img_mi8.set_pixel(16, y, Color(0.4, 0.45, 0.5, 1.0))
	# Фюзеляж Ми-8
	for y in range(11, 19):
		for x in range(8, 22):
			img_mi8.set_pixel(x, y, Color(0.24, 0.34, 0.28, 1.0))
	# Остекление кабины
	for y in range(12, 17):
		for x in range(6, 10):
			img_mi8.set_pixel(x, y, Color(0.25, 0.75, 0.95, 1.0))
	# Хвостовая балка и хвостовой винт
	for y in range(13, 16):
		for x in range(22, 28):
			img_mi8.set_pixel(x, y, Color(0.24, 0.34, 0.28, 1.0))
	for y in range(9, 19):
		img_mi8.set_pixel(28, y, Color(0.9, 0.6, 0.1, 0.95))
	# Шасси
	img_mi8.set_pixel(10, 20, Color(0.15, 0.15, 0.15, 1.0))
	img_mi8.set_pixel(11, 20, Color(0.15, 0.15, 0.15, 1.0))
	img_mi8.set_pixel(18, 20, Color(0.15, 0.15, 0.15, 1.0))
	img_mi8.set_pixel(19, 20, Color(0.15, 0.15, 0.15, 1.0))
	mm.call("register_texture", "icon_mi8", ImageTexture.create_from_image(img_mi8))

	# 3. Иконка транспортного самолёта Ил-76
	var img_il76 = Image.create(32, 32, false, Image.FORMAT_RGBA8)
	img_il76.fill(Color(0, 0, 0, 0))
	# Фюзеляж
	for y in range(4, 28):
		for x in range(14, 18):
			img_il76.set_pixel(x, y, Color(0.7, 0.75, 0.8, 1.0))
	# Нос
	img_il76.set_pixel(15, 3, Color(0.2, 0.7, 0.95, 1.0))
	img_il76.set_pixel(16, 3, Color(0.2, 0.7, 0.95, 1.0))
	# Стреловидные крылья
	for x in range(3, 29):
		var y_w = 14 + int(abs(x - 15.5) * 0.35)
		for dy in range(3):
			img_il76.set_pixel(x, y_w + dy, Color(0.55, 0.62, 0.68, 1.0))
	# 4 реактивных двигателя
	for eng_x in [7, 11, 20, 24]:
		for y in range(16, 20):
			img_il76.set_pixel(eng_x, y, Color(0.2, 0.22, 0.25, 1.0))
	# Т-образное хвостовое оперение
	for x in range(10, 22):
		for y in range(26, 28):
			img_il76.set_pixel(x, y, Color(0.65, 0.7, 0.76, 1.0))
	mm.call("register_texture", "icon_il76", ImageTexture.create_from_image(img_il76))

	# 4. Иконка воздушного десанта
	var img_desant = Image.create(32, 32, false, Image.FORMAT_RGBA8)
	img_desant.fill(Color(0, 0, 0, 0))
	# Купол парашюта
	for y in range(4, 13):
		for x in range(6, 26):
			var dy = float(y - 4) / 9.0
			var dx = abs(float(x - 15.5) / 10.0)
			if dx * dx + dy * dy <= 1.0:
				if x % 4 < 2:
					img_desant.set_pixel(x, y, Color(0.95, 0.95, 0.95, 1.0))
				else:
					img_desant.set_pixel(x, y, Color(0.25, 0.65, 0.9, 1.0))
	# Стропы
	for i in range(7):
		var t = float(i) / 6.0
		img_desant.set_pixel(int(lerpf(7.0, 15.5, t)), int(lerpf(13.0, 21.0, t)), Color(0.8, 0.8, 0.8, 0.7))
		img_desant.set_pixel(int(lerpf(24.0, 15.5, t)), int(lerpf(13.0, 21.0, t)), Color(0.8, 0.8, 0.8, 0.7))
	# Десантник
	for y in range(21, 27):
		for x in range(14, 18):
			img_desant.set_pixel(x, y, Color(0.2, 0.35, 0.22, 1.0))
	img_desant.set_pixel(15, 21, Color(0.2, 0.7, 0.9, 1.0)) # Голубой берет
	img_desant.set_pixel(16, 21, Color(0.2, 0.7, 0.9, 1.0))
	mm.call("register_texture", "icon_vdv_desant", ImageTexture.create_from_image(img_desant))

# ==============================================================================
# Обработка действий нативного интерфейса игры
# ==============================================================================
func _on_hud_action(nm: String) -> void:
	match nm:
		"airborne_hq":
			if main_ref != null and main_ref.hud != null:
				main_ref.hud.show_tip(
					"Штаб ВДВ и вертолётная база",
					"Тактическая авиабаза сил быстрого реагирования. Готовит вертолёты Ми-8 для точечной высадки спецназа и самолёты Ил-76 для сброса техники БМД. 1400 $ · металл 15. Требует электричество.",
					""
				)
			toggle_hq_placement()

		"vdv_prep_mi8":
			if selected_hq != null:
				_order_preparation(selected_hq, "mi8")

		"vdv_launch_mi8":
			if selected_hq != null:
				_start_targeting(selected_hq, "mi8")

		"vdv_prep_il76":
			if selected_hq != null:
				_order_preparation(selected_hq, "il76")

		"vdv_launch_il76":
			if selected_hq != null:
				_start_targeting(selected_hq, "il76")

		"vdv_repair":
			if selected_hq != null:
				_repair_hq(selected_hq)

		"vdv_demolish":
			if selected_hq != null:
				_demolish_hq(selected_hq)

func _on_match_tick(main: Node, world: Node, delta: float) -> void:
	main_ref = main
	world_ref = world

	_tick_hqs(delta)
	_tick_helis(delta)
	_tick_planes(delta)
	_tick_parachutes(delta)
	_tick_vdv_ai(delta)

	# Обновление нативной карточки здания внизу экрана, если выбран наш штаб ВДВ
	if main != null and "selected_fac" in main and main.selected_fac != null and is_instance_valid(main.selected_fac):
		var f: Facility = main.selected_fac as Facility
		if f != null and f.has_meta("is_vdv_hq") and f.get_meta("is_vdv_hq"):
			selected_hq = f
			_update_native_card(f)
		else:
			if selected_hq != null and selected_hq == f:
				selected_hq = null
	else:
		selected_hq = null

	if world_layer != null and is_instance_valid(world_layer):
		world_layer.queue_redraw()

# ==============================================================================
# Режим строительства Штаба ВДВ
# ==============================================================================
func toggle_hq_placement() -> void:
	if is_placing_hq:
		cancel_hq_placement()
	else:
		start_hq_placement()

func start_hq_placement() -> void:
	if world_ref == null or not is_instance_valid(world_ref):
		return
	var p = world_ref.player
	if p == null:
		return

	if p.money < HQ_COST_MONEY or p.metal < HQ_COST_METAL:
		if main_ref != null and main_ref.hud != null:
			main_ref.hud.show_toast("Не хватает ресурсов: 1400 $ и 15 металла!")
		if ClassDB.class_exists("UiKit"):
			UiKit.snd("ui_error")
		return

	is_placing_hq = true
	targeting_op = ""
	if main_ref != null and main_ref.hud != null:
		main_ref.hud.set_key_pressed("airborne_hq", true)
		main_ref.hud.show_toast("ШТАБ ВДВ: Выберите место на своей территории для вертолётной площадки")

	if ClassDB.class_exists("UiKit"):
		UiKit.snd("ui_select")

func cancel_hq_placement() -> void:
	is_placing_hq = false
	if main_ref != null and main_ref.hud != null:
		main_ref.hud.set_key_pressed("airborne_hq", false)

func can_place_hq_at(cell: Vector2i) -> bool:
	if world_ref == null or not is_instance_valid(world_ref):
		return false
	var d = world_ref.data
	if d == null:
		return false

	if cell.x < 3 or cell.y < 3 or cell.x + HQ_SIZE.x >= d.w - 3 or cell.y + HQ_SIZE.y >= d.h - 3:
		return false

	var player = world_ref.player
	if player == null:
		return false

	for dy in range(HQ_SIZE.y):
		for dx in range(HQ_SIZE.x):
			var cx = cell.x + dx
			var cy = cell.y + dy

			# Проверка принадлежности территории игроку
			if d.get_owner_id(cx, cy) != player.id:
				return false

			# Проверка на сушу (не вода)
			var b = d.get_biome(cx, cy)
			if Biome.is_water(b):
				return false

			# Проверка на занятость другими строениями
			if d.has_flag(cx, cy, WorldData.F_OCCUPIED):
				return false

	return true

func place_hq_at(cell: Vector2i) -> void:
	if not can_place_hq_at(cell):
		if main_ref != null and main_ref.hud != null:
			main_ref.hud.show_toast("Нельзя построить здесь: нужна свободная суша на вашей земле")
		if ClassDB.class_exists("UiKit"):
			UiKit.snd("ui_error")
		return

	var p = world_ref.player
	if p.money < HQ_COST_MONEY or p.metal < HQ_COST_METAL:
		if main_ref != null and main_ref.hud != null:
			main_ref.hud.show_toast("Не хватает: 1400 $ и 15 металла!")
		if ClassDB.class_exists("UiKit"):
			UiKit.snd("ui_error")
		return

	# Оплата постройки
	p.money -= HQ_COST_MONEY
	p.metal -= HQ_COST_METAL

	# Создание нативного Facility объекта
	# Используем CIV_FACTORY, чтобы объект автоматически участвовал в государственной энергосети игры
	var f = Facility.new()
	f.id = world_ref.mil.facilities.size()
	f.kind = Facility.Kind.CIV_FACTORY
	f.country_id = p.id
	f.cell = cell
	f.size = HQ_SIZE
	f.set_meta("is_vdv_hq", true)
	f.set_meta("hp", HQ_MAX_HP)
	f.set_meta("max_hp", HQ_MAX_HP)
	f.set_meta("mi8_ready", 1) # База изначально укомплектована 1 вертолётом Ми-8
	f.set_meta("il76_ready", 0)
	f.set_meta("prep_op", "")
	f.set_meta("prep_t", 0.0)
	f.set_meta("prep_dur", 0.0)
	f.set_meta("active_heli", null)
	f.set_meta("antenna_t", 0.0)

	# Размещение нативного здания штаба в мире
	f.main_obj = world_ref.add_object("barracks", cell, GameWorld.KIND_BUILDING)
	f.obj_ids.append(f.main_obj)
	world_ref.mil.facilities.append(f)

	# Установка бетонного покрытия плаца/вертолётной площадки и флага занятости
	var d = world_ref.data
	for dy in range(f.size.y):
		for dx in range(f.size.x):
			var cx = cell.x + dx
			var cy = cell.y + dy
			world_ref.remove_tree_at(Vector2i(cx, cy))
			d.add_flag(cx, cy, WorldData.F_OCCUPIED)
			d.set_biome(cx, cy, Biome.PLAZA)

	cancel_hq_placement()

	# Звук и спецэффекты постройки
	if ClassDB.class_exists("UiKit"):
		UiKit.snd("ui_build")
	if world_ref.fx != null:
		world_ref.fx.spawn("dust_s", Vector2(cell * GameWorld.CELL + Vector2i(18, 12)), 8)

	if main_ref != null and main_ref.hud != null:
		main_ref.hud.show_toast("Штаб ВДВ и вертолётная площадка готовы к службе!")
		main_ref.selected_fac = f

# ==============================================================================
# Жизненный цикл штабов ВДВ (Энергия, подготовка бортов, радары)
# ==============================================================================
func _tick_hqs(delta: float) -> void:
	if world_ref == null or not is_instance_valid(world_ref):
		return
	if not ("mil" in world_ref and world_ref.mil != null):
		return

	for f in world_ref.mil.facilities:
		if not (f is Facility and f.has_meta("is_vdv_hq") and f.get_meta("is_vdv_hq")):
			continue

		# Проверка подключения к электросети страны
		var is_powered = f.powered or (world_ref.mil.has_method("has_power") and world_ref.mil.has_power(f))

		var prep_op = String(f.get_meta("prep_op", ""))
		if prep_op != "":
			if not is_powered:
				# Без электричества подготовка и заправка авиации приостанавливается
				continue

			var pt = float(f.get_meta("prep_t", 0.0)) + delta
			var dur = float(f.get_meta("prep_dur", 1.0))
			f.set_meta("prep_t", pt)

			if pt >= dur:
				# Завершение подготовки борта
				f.set_meta("prep_op", "")
				f.set_meta("prep_t", 0.0)
				if prep_op == "mi8":
					var cur_mi8 = int(f.get_meta("mi8_ready", 0)) + 1
					f.set_meta("mi8_ready", mini(cur_mi8, MI8_MAX_LIMIT))
					if main_ref != null and main_ref.hud != null:
						main_ref.hud.show_toast("Вертолёт Ми-8 «Терминатор» заправлен и готов к вылету!")
				elif prep_op == "il76":
					var cur_il76 = int(f.get_meta("il76_ready", 0)) + 1
					f.set_meta("il76_ready", mini(cur_il76, IL76_MAX_LIMIT))
					if main_ref != null and main_ref.hud != null:
						main_ref.hud.show_toast("Самолёт Ил-76 загружен бронетехникой и готов к десанту!")

				if ClassDB.class_exists("UiKit"):
					UiKit.snd("ui_build")

# ==============================================================================
# Заказ подготовки авиации и нативная карточка здания
# ==============================================================================
func _order_preparation(f: Facility, op_type: String) -> void:
	var p = world_ref.player
	var cost_m = 0
	var cost_met = 0
	var prep_dur = 0.0

	var is_powered = f.powered or (world_ref.mil.has_method("has_power") and world_ref.mil.has_power(f))
	if not is_powered:
		if main_ref != null and main_ref.hud != null:
			main_ref.hud.show_toast("База обесточена! Для подготовки бортов требуется электроэнергия.")
		if ClassDB.class_exists("UiKit"):
			UiKit.snd("ui_error")
		return

	if op_type == "mi8":
		cost_m = MI8_COST_MONEY
		cost_met = MI8_COST_METAL
		prep_dur = MI8_PREP_TIME
		if int(f.get_meta("mi8_ready", 0)) >= MI8_MAX_LIMIT:
			if main_ref != null and main_ref.hud != null:
				main_ref.hud.show_toast("Достигнут лимит вертолётов Ми-8 на площадке (макс. %d)!" % MI8_MAX_LIMIT)
			return
	elif op_type == "il76":
		cost_m = IL76_COST_MONEY
		cost_met = IL76_COST_METAL
		prep_dur = IL76_PREP_TIME
		if int(f.get_meta("il76_ready", 0)) >= IL76_MAX_LIMIT:
			if main_ref != null and main_ref.hud != null:
				main_ref.hud.show_toast("Достигнут лимит самолётов Ил-76 (макс. %d)!" % IL76_MAX_LIMIT)
			return

	if p.money < cost_m or p.metal < cost_met:
		if main_ref != null and main_ref.hud != null:
			main_ref.hud.show_toast("Не хватает ресурсов: требуется %d $ и %d металла!" % [cost_m, cost_met])
		if ClassDB.class_exists("UiKit"):
			UiKit.snd("ui_error")
		return

	p.money -= cost_m
	p.metal -= cost_met

	f.set_meta("prep_op", op_type)
	f.set_meta("prep_t", 0.0)
	f.set_meta("prep_dur", prep_dur)

	if ClassDB.class_exists("UiKit"):
		UiKit.snd("ui_build")

	if main_ref != null and main_ref.hud != null:
		var name_str = "Ми-8 «Терминатор»" if op_type == "mi8" else "Ил-76 «Десантник»"
		main_ref.hud.show_toast("Начата подготовка и вооружение: %s" % name_str)

func _start_targeting(f: Facility, op_type: String) -> void:
	var is_powered = f.powered or (world_ref.mil.has_method("has_power") and world_ref.mil.has_power(f))
	if not is_powered:
		if main_ref != null and main_ref.hud != null:
			main_ref.hud.show_toast("База обесточена! Вылет невозможен без электроснабжения систем связи.")
		if ClassDB.class_exists("UiKit"):
			UiKit.snd("ui_error")
		return

	if op_type == "mi8":
		if int(f.get_meta("mi8_ready", 0)) <= 0:
			return
		if f.get_meta("active_heli") != null:
			if main_ref != null and main_ref.hud != null:
				main_ref.hud.show_toast("Вертолёт уже в воздухе! Дождитесь завершения высадки или возвращения.")
			return
	elif op_type == "il76":
		if int(f.get_meta("il76_ready", 0)) <= 0:
			return

	if targeting_op == op_type and targeting_fac == f:
		cancel_targeting()
		return

	targeting_op = op_type
	targeting_fac = f
	is_placing_hq = false

	if ClassDB.class_exists("UiKit"):
		UiKit.snd("ui_select")

	if main_ref != null and main_ref.hud != null:
		var tip = "МИ-8: Выберите точку высадки спецназа на карте (ЛКМ - пуск, ПКМ - отмена)" if op_type == "mi8" else "ИЛ-76: Выберите район парашютного сброса БМД на карте (ЛКМ - пуск, ПКМ - отмена)"
		main_ref.hud.show_toast(tip)

func cancel_targeting() -> void:
	targeting_op = ""
	targeting_fac = null

func _repair_hq(f: Facility) -> void:
	var p = world_ref.player
	var rep_cost = 150
	if p.money < rep_cost:
		if main_ref != null and main_ref.hud != null:
			main_ref.hud.show_toast("Не хватает средств на ремонт штаба: требуется %d $!" % rep_cost)
		if ClassDB.class_exists("UiKit"):
			UiKit.snd("ui_error")
		return

	p.money -= rep_cost
	f.set_meta("hp", HQ_MAX_HP)

	if ClassDB.class_exists("UiKit"):
		UiKit.snd("ui_build")

	if main_ref != null and main_ref.hud != null:
		main_ref.hud.show_toast("Штаб ВДВ и площадка полностью отремонтированы!")

func _demolish_hq(f: Facility) -> void:
	var p = world_ref.player
	p.money += 700

	# Освобождение клеток
	var d = world_ref.data
	for dy in range(f.size.y):
		for dx in range(f.size.x):
			var cx = f.cell.x + dx
			var cy = f.cell.y + dy
			d.clear_flag(cx, cy, WorldData.F_OCCUPIED)

	if f.main_obj >= 0:
		world_ref.remove_object(f.main_obj)

	world_ref.mil.facilities.erase(f)

	if main_ref != null:
		main_ref.call("_deselect")
		if main_ref.hud != null:
			main_ref.hud.show_toast("Штаб ВДВ демонтирован (+700 $)")

	if ClassDB.class_exists("UiKit"):
		UiKit.snd("ui_click")

# ==============================================================================
# Отрисовка нативной карточки Штаба ВДВ
# ==============================================================================
func _update_native_card(f: Facility) -> void:
	if main_ref == null or main_ref.hud == null:
		return

	var p = world_ref.player
	var prep_op = String(f.get_meta("prep_op", ""))
	var prep_t = float(f.get_meta("prep_t", 0.0))
	var prep_dur = float(f.get_meta("prep_dur", 1.0))
	var mi8_ready = int(f.get_meta("mi8_ready", 0))
	var il76_ready = int(f.get_meta("il76_ready", 0))
	var hp = float(f.get_meta("hp", HQ_MAX_HP))
	var max_hp = float(f.get_meta("max_hp", HQ_MAX_HP))

	var is_powered = f.powered or (world_ref.mil.has_method("has_power") and world_ref.mil.has_power(f))
	var active_heli = f.get_meta("active_heli")

	# Открытие нативной карточки в нижней панели через Hud._card
	main_ref.hud._card(
		"vdv_hq_%d" % f.id,
		"icon_vdv_hq",
		"ШТАБ ВОЗДУШНОГО ДЕСАНТА (ВДВ)",
		"ВЕРТОЛЁТНАЯ ПЛОЩАДКА И ТАКТИЧЕСКИЙ ДЕСАНТ",
		false,
		false,
		true
	)

	var acts: Array = []

	# Кнопка 1: Вертолёт Ми-8 «Терминатор»
	if mi8_ready > 0:
		var can_fly = is_powered and active_heli == null
		acts.append(main_ref.hud._act(
			"ВЫЛЕТ\nМИ-8 (%d)" % mi8_ready,
			"icon_mi8",
			"vdv_launch_mi8",
			can_fly,
			1 if targeting_op == "mi8" else 0
		))
	elif prep_op == "mi8":
		acts.append(main_ref.hud._act(
			"СБОРКА\n%s" % main_ref.hud._mmss(maxf(0.0, prep_dur - prep_t)),
			"icon_mi8",
			"",
			false,
			1
		))
	else:
		var can_prep = is_powered and p.money >= MI8_COST_MONEY and p.metal >= MI8_COST_METAL and prep_op == ""
		acts.append(main_ref.hud._act(
			"МИ-8\n%d $" % MI8_COST_MONEY,
			"icon_mi8",
			"vdv_prep_mi8",
			can_prep,
			0
		))

	# Кнопка 2: Самолёт Ил-76 «Десантник»
	if il76_ready > 0:
		acts.append(main_ref.hud._act(
			"СБРОС\nИЛ-76 (%d)" % il76_ready,
			"icon_il76",
			"vdv_launch_il76",
			is_powered,
			1 if targeting_op == "il76" else 0
		))
	elif prep_op == "il76":
		acts.append(main_ref.hud._act(
			"СБОРКА\n%s" % main_ref.hud._mmss(maxf(0.0, prep_dur - prep_t)),
			"icon_il76",
			"",
			false,
			1
		))
	else:
		var can_prep = is_powered and p.money >= IL76_COST_MONEY and p.metal >= IL76_COST_METAL and prep_op == ""
		acts.append(main_ref.hud._act(
			"ИЛ-76\n%d $" % IL76_COST_MONEY,
			"icon_il76",
			"vdv_prep_il76",
			can_prep,
			0
		))

	# Кнопка 3: Ремонт базы
	var can_rep = hp < max_hp - 1.0 and p.money >= 150
	acts.append(main_ref.hud._act(
		"РЕМОНТ\n150 $",
		"icon_restore",
		"vdv_repair",
		can_rep
	))

	# Кнопка 4: Снос базы
	var dact = main_ref.hud._act("СНОС\n+700 $", "icon_close", "vdv_demolish", true)
	dact["red"] = true
	acts.append(dact)

	# Статусная строка карточки
	var status_str = ""
	var is_alert = false

	if not is_powered:
		status_str = "ОБЪЕКТ ОБЕСТОЧЕН (НЕТ ЭЛЕКТРОЭНЕРГИИ) · ПРОЧНОСТЬ %d/%d" % [int(hp), int(max_hp)]
		is_alert = true
	elif prep_op != "":
		var op_title = "МИ-8 «ТЕРМИНАТОР»" if prep_op == "mi8" else "ИЛ-76 «ДЕСАНТНИК»"
		status_str = "ПОДГОТОВКА: %s · ГОТОВНОСТЬ ЧЕРЕЗ %s" % [op_title, main_ref.hud._mmss(maxf(0.0, prep_dur - prep_t))]
	elif active_heli != null and is_instance_valid(active_heli):
		status_str = "МИ-8 В ВОЗДУХЕ · СТАТУС: %s" % active_heli.get_status_text()
	else:
		status_str = "ГОТОВ К ВЫЛЕТУ · МИ-8: %d/%d · ИЛ-76: %d/%d · ПРОЧНОСТЬ %d/%d" % [
			mi8_ready, MI8_MAX_LIMIT, il76_ready, IL76_MAX_LIMIT, int(hp), int(max_hp)
		]

	main_ref.hud._set_info(status_str, is_alert or hp <= 0.0)
	main_ref.hud.ops_detail.text = "Штаб ВДВ и тактическая вертолётная площадка. Готовит ударно-десантные вертолёты Ми-8 для высадки спецназа на тросах прямо на передний край или в тыл врага и тяжёлые самолёты Ил-76 для сброса боевых машин БМД-4. В полёте вертолётом можно управлять, перенаправляя его правой кнопкой мыши. Для работы объект требует электроэнергию."
	main_ref.hud.ops_detail.visible = true
	main_ref.hud._fill_acts("vdv_hq_%d" % f.id, acts)

# ==============================================================================
# Запуск операций (Вертолёт Ми-8 и Самолёт Ил-76)
# ==============================================================================
func launch_operation_at(target_pos: Vector2) -> void:
	if targeting_fac == null or not is_instance_valid(targeting_fac):
		cancel_targeting()
		return

	var f = targeting_fac
	if targeting_op == "mi8":
		var cur_mi8 = int(f.get_meta("mi8_ready", 0))
		if cur_mi8 <= 0:
			cancel_targeting()
			return
		f.set_meta("mi8_ready", cur_mi8 - 1)

		# Спавн вертолёта Ми-8
		var h_pos = Vector2(f.cell * GameWorld.CELL) + Vector2(float(f.size.x * GameWorld.CELL) * 0.5, float(f.size.y * GameWorld.CELL) * 0.5)
		var heli = VdvHelicopter.new()
		heli.setup(self, f, h_pos, target_pos)
		active_helis.append(heli)
		f.set_meta("active_heli", heli)

		if ClassDB.class_exists("UiKit"):
			UiKit.snd("ui_select")
		if main_ref != null and main_ref.hud != null:
			main_ref.hud.show_toast("Ми-8 поднялся с вертолётной площадки и взял курс на цель!")

	elif targeting_op == "il76":
		var cur_il76 = int(f.get_meta("il76_ready", 0))
		if cur_il76 <= 0:
			cancel_targeting()
			return
		f.set_meta("il76_ready", cur_il76 - 1)

		# Спавн самолёта Ил-76 (заход с границы карты)
		var plane = VdvCargoPlane.new()
		plane.setup(self, f, target_pos)
		active_planes.append(plane)

		if ClassDB.class_exists("UiKit"):
			UiKit.snd("ui_select")
		if main_ref != null and main_ref.hud != null:
			main_ref.hud.show_toast("Тяжёлый десантный Ил-76 заходит в зону сброса техники!")

	cancel_targeting()

# ==============================================================================
# Жизненный цикл авиации и парашютистов
# ==============================================================================
func _tick_helis(delta: float) -> void:
	var remove_list: Array = []
	for h in active_helis:
		if h == null or not is_instance_valid(h):
			remove_list.append(h)
			continue
		h.tick(delta)
		if h.is_finished:
			remove_list.append(h)
			if h.hq_ref != null and is_instance_valid(h.hq_ref):
				h.hq_ref.set_meta("active_heli", null)
			if selected_heli == h:
				selected_heli = null

	for h in remove_list:
		active_helis.erase(h)

func _tick_planes(delta: float) -> void:
	var remove_list: Array = []
	for p in active_planes:
		if p == null or not is_instance_valid(p):
			remove_list.append(p)
			continue
		p.tick(delta)
		if p.is_finished:
			remove_list.append(p)

	for p in remove_list:
		active_planes.erase(p)

func _tick_parachutes(delta: float) -> void:
	var remove_list: Array = []
	for para in active_parachutes:
		if para == null or not is_instance_valid(para):
			remove_list.append(para)
			continue
		para.tick(delta)
		if para.is_finished:
			remove_list.append(para)

	for para in remove_list:
		active_parachutes.erase(para)

# ==============================================================================
# Автономный боевой интеллект бойцов ВДВ (Спецназ)
# ==============================================================================
func _tick_vdv_ai(delta: float) -> void:
	if world_ref == null or not is_instance_valid(world_ref):
		return
	if not ("army" in world_ref and world_ref.army != null):
		return

	var alive_troops: Array = []
	var player = world_ref.player
	var player_id = player.id if player != null else 0

	for u in active_vdv_troops:
		if u == null or not is_instance_valid(u):
			continue
		if not ("alive" in u and u.alive()):
			continue
		alive_troops.append(u)

		# Тактическое самолечение спецназа вне боя
		var medic_t = float(u.get_meta("medic_t", 0.0)) + delta
		if medic_t >= 2.0:
			medic_t = 0.0
			if u.hp < u.max_hp:
				u.hp = minf(u.max_hp, u.hp + 4.0)
		u.set_meta("medic_t", medic_t)

		# Автономное действие только если боец свободен от прямых приказов игрока
		if u.state == Unit.State.IDLE or u.path.is_empty():
			var ai_think_t = float(u.get_meta("ai_think_t", 0.0)) + delta
			if ai_think_t >= 1.5:
				ai_think_t = 0.0
				_execute_trooper_tactical_behavior(u, player_id)
			u.set_meta("ai_think_t", ai_think_t)

	active_vdv_troops = alive_troops

func _execute_trooper_tactical_behavior(u: Unit, player_id: int) -> void:
	# 1. Поиск ближайших вражеских юнитов в радиусе 240 px
	var best_enemy_u: Unit = null
	var min_dist_u = 240.0
	for enemy in world_ref.army.units:
		if enemy == null or not enemy.alive():
			continue
		if enemy.country_id != player_id and (world_ref.mil == null or world_ref.mil.hostile(enemy.country_id, player_id)):
			var d = u.pos.distance_to(enemy.pos)
			if d < min_dist_u:
				min_dist_u = d
				best_enemy_u = enemy

	if best_enemy_u != null:
		# Сближение на дистанцию стрельбы
		var target_dist = 36.0 if u.type == Unit.Type.ASSAULT else 60.0
		var dir = (best_enemy_u.pos - u.pos).normalized()
		var move_to = u.pos + dir * maxf(12.0, min_dist_u - target_dist)
		u.path = PackedVector2Array([move_to])
		u.pi = 0
		u.state = Unit.State.MOVE
		return

	# 2. Поиск ближайшего вражеского города в радиусе 320 px для штурма и захвата
	var best_city: City = null
	var min_dist_c = 320.0
	if "cities" in world_ref and world_ref.cities != null:
		for c in world_ref.cities:
			if c == null or c.country_id == player_id:
				continue
			if world_ref.mil != null and not world_ref.mil.hostile(c.country_id, player_id):
				continue
			var c_pos = Vector2(c.center * GameWorld.CELL)
			var d = u.pos.distance_to(c_pos)
			if d < min_dist_c:
				min_dist_c = d
				best_city = c

	if best_city != null:
		var c_pos = Vector2(best_city.center * GameWorld.CELL)
		u.path = PackedVector2Array([c_pos])
		u.pi = 0
		u.state = Unit.State.MOVE
		return

	# 3. Закрепление на плацдарме: захват ячейки под ногами в пользу игрока
	var cell = Vector2i((u.pos / float(GameWorld.CELL)).floor())
	if world_ref.data != null and world_ref.data.inside(cell.x, cell.y):
		if world_ref.data.get_owner_id(cell.x, cell.y) != player_id:
			world_ref.data.set_owner_id(cell.x, cell.y, player_id)

# ==============================================================================
# Класс вертолёта Ми-8 (Тактический десант, спуск на тросах, управляемость в полёте)
# ==============================================================================
class VdvHelicopter extends RefCounted:
	var mod_ref: AirborneAssaultMod = null
	var hq_ref: Facility = null

	var pos: Vector2 = Vector2.ZERO
	var target_pos: Vector2 = Vector2.ZERO
	var base_pos: Vector2 = Vector2.ZERO

	var heading: float = 0.0
	var speed: float = 44.0
	var alt: float = 0.0 # 0 = на земле, 16 = крейсерский полёт, 2.5 = спуск десанта
	var rotor_angle: float = 0.0

	enum State { TAKEOFF, FLY_TO_LZ, HOVER_DESCEND, FAST_ROPING, CLIMB, RTB, LANDING, DONE }
	var state: int = State.TAKEOFF

	var roping_timer: float = 0.0
	var dropped_count: int = 0
	var is_finished: bool = false
	var dust_timer: float = 0.0

	func setup(m: AirborneAssaultMod, hq: Facility, b_pos: Vector2, t_pos: Vector2) -> void:
		mod_ref = m
		hq_ref = hq
		base_pos = b_pos
		pos = b_pos
		target_pos = t_pos
		heading = (t_pos - b_pos).angle()
		alt = 0.0
		state = State.TAKEOFF

	func get_status_text() -> String:
		match state:
			State.TAKEOFF: return "ВЗЛЁТ С ПЛОЩАДКИ"
			State.FLY_TO_LZ: return "ВЫХОД В ЗОНУ ВЫСАДКИ"
			State.HOVER_DESCEND: return "СНИЖЕНИЕ И ЗАВИСАНИЕ"
			State.FAST_ROPING: return "ВЫСАДКА ДЕСАНТА НА ТРОСАХ"
			State.CLIMB: return "НАБОР ВЫСОТЫ"
			State.RTB: return "ВОЗВРАЩЕНИЕ НА БАЗУ"
			State.LANDING: return "ПОСАДКА НА ПЛОЩАДКУ"
			_: return "ЗАВЕРШЕНО"

	func tick(delta: float) -> void:
		rotor_angle += delta * 35.0
		if rotor_angle > TAU:
			rotor_angle -= TAU

		match state:
			State.TAKEOFF:
				alt = minf(16.0, alt + delta * 12.0)
				_spawn_rotor_dust(delta, 1.5)
				if alt >= 16.0:
					state = State.FLY_TO_LZ

			State.FLY_TO_LZ:
				var to_lz = target_pos - pos
				var dist = to_lz.length()
				heading = lerp_angle(heading, to_lz.angle(), delta * 3.5)
				pos += Vector2.RIGHT.rotated(heading) * (speed * delta)

				if dist <= 16.0:
					state = State.HOVER_DESCEND

			State.HOVER_DESCEND:
				# Плавное снижение высоты вертолёта к самой земле для спуска бойцов
				alt = maxf(2.5, alt - delta * 9.0)
				_spawn_rotor_dust(delta, 0.4)
				if alt <= 2.8:
					state = State.FAST_ROPING
					roping_timer = 0.0
					dropped_count = 0

			State.FAST_ROPING:
				_spawn_rotor_dust(delta, 0.3)
				roping_timer += delta

				# Каждую секунду на тросе спускается 1 спецназовец
				if roping_timer >= 0.75 and dropped_count < 4:
					roping_timer = 0.0
					dropped_count += 1
					_deploy_trooper(dropped_count)

				if dropped_count >= 4 and roping_timer >= 1.0:
					state = State.CLIMB

			State.CLIMB:
				alt = minf(16.0, alt + delta * 10.0)
				if alt >= 16.0:
					state = State.RTB

			State.RTB:
				var to_base = base_pos - pos
				var dist = to_base.length()
				heading = lerp_angle(heading, to_base.angle(), delta * 3.5)
				pos += Vector2.RIGHT.rotated(heading) * (speed * delta)

				if dist <= 12.0:
					pos = base_pos
					state = State.LANDING

			State.LANDING:
				alt = maxf(0.0, alt - delta * 8.0)
				_spawn_rotor_dust(delta, 1.5)
				if alt <= 0.0:
					alt = 0.0
					state = State.DONE
					is_finished = true

	func _spawn_rotor_dust(delta: float, rate: float) -> void:
		if mod_ref.world_ref != null and mod_ref.world_ref.fx != null:
			dust_timer += delta
			if dust_timer >= rate:
				dust_timer = 0.0
				mod_ref.world_ref.fx.spawn("dust_s", pos.round(), 4)

	func _deploy_trooper(index: int) -> void:
		if mod_ref.world_ref == null or not ("army" in mod_ref.world_ref and mod_ref.world_ref.army != null):
			return

		var p = mod_ref.world_ref.player
		var u = Unit.new()
		u.id = mod_ref.world_ref.army._next_id
		mod_ref.world_ref.army._next_id += 1

		# Состав десанта: 2 элитных штурмовика, 1 ПТРК, 1 пехотинец-разведчик
		if index in [1, 2]:
			u.type = Unit.Type.ASSAULT
			u.hp = 70.0
		elif index == 3:
			u.type = Unit.Type.ATGM
			u.hp = 45.0
		else:
			u.type = Unit.Type.INFANTRY
			u.hp = 50.0

		u.max_hp = u.hp
		u.country_id = p.id
		u.home = hq_ref

		# Высадка со смещением от зависшего вертолёта
		var offset = Vector2.RIGHT.rotated(randf() * TAU) * float(randi_range(6, 16))
		u.pos = pos + offset
		u.heading = randf() * TAU
		u.update_frame()
		u.state = Unit.State.IDLE
		u.set_meta("is_vdv_trooper", true)

		mod_ref.world_ref.army.units.append(u)
		mod_ref.active_vdv_troops.append(u)

		if mod_ref.world_ref.fx != null:
			mod_ref.world_ref.fx.spawn("dust_s", u.pos.round(), 6)
		if ClassDB.class_exists("UiKit"):
			UiKit.snd("ui_click")

# ==============================================================================
# Класс транспортного самолёта Ил-76 (Сброс БМД и роты десанта на парашютах)
# ==============================================================================
class VdvCargoPlane extends RefCounted:
	var mod_ref: AirborneAssaultMod = null
	var hq_ref: Facility = null

	var pos: Vector2 = Vector2.ZERO
	var lz_pos: Vector2 = Vector2.ZERO
	var dir: Vector2 = Vector2.RIGHT
	var speed: float = 62.0
	var alt: float = 26.0

	var has_dropped: bool = false
	var is_finished: bool = false
	var life_time: float = 0.0

	func setup(m: AirborneAssaultMod, hq: Facility, target_pos: Vector2) -> void:
		mod_ref = m
		hq_ref = hq
		lz_pos = target_pos

		# Заход самолёта через всю карту по вектору цели
		dir = Vector2(1.0, 0.2).normalized()
		pos = target_pos - dir * 450.0
		has_dropped = false

	func tick(delta: float) -> void:
		life_time += delta
		pos += dir * (speed * delta)

		var dist_to_lz = pos.distance_to(lz_pos)
		if not has_dropped and (dist_to_lz <= 24.0 or (pos - lz_pos).dot(dir) > 0.0):
			has_dropped = true
			_drop_cargo()

		if life_time > 18.0:
			is_finished = true

	func _drop_cargo() -> void:
		if mod_ref == null:
			return

		# 1. Сброс боевой машины десанта БМД-4 на многокупольной парашютной системе
		var para_bmd = VdvParachuteCargo.new()
		para_bmd.setup(mod_ref, hq_ref, pos, Unit.Type.IFV, true)
		mod_ref.active_parachutes.append(para_bmd)

		# 2. Сброс двух отделений десанта на парашютах
		var para_assault = VdvParachuteCargo.new()
		para_assault.setup(mod_ref, hq_ref, pos - dir * 18.0, Unit.Type.ASSAULT, false)
		mod_ref.active_parachutes.append(para_assault)

		var para_atgm = VdvParachuteCargo.new()
		para_atgm.setup(mod_ref, hq_ref, pos - dir * 36.0, Unit.Type.ATGM, false)
		mod_ref.active_parachutes.append(para_atgm)

		if ClassDB.class_exists("UiKit"):
			UiKit.snd("ui_build")

# ==============================================================================
# Класс спускающегося парашютного груза / техники
# ==============================================================================
class VdvParachuteCargo extends RefCounted:
	var mod_ref: AirborneAssaultMod = null
	var hq_ref: Facility = null

	var pos: Vector2 = Vector2.ZERO
	var alt: float = 24.0
	var unit_type: int = Unit.Type.ASSAULT
	var is_vehicle: bool = false
	var is_finished: bool = false
	var swing_phase: float = 0.0

	func setup(m: AirborneAssaultMod, hq: Facility, drop_p: Vector2, u_type: int, vehicle: bool) -> void:
		mod_ref = m
		hq_ref = hq
		pos = drop_p
		unit_type = u_type
		is_vehicle = vehicle
		alt = 24.0
		swing_phase = randf() * TAU

	func tick(delta: float) -> void:
		swing_phase += delta * 3.0
		alt -= delta * 7.5
		pos.x += sin(swing_phase) * delta * 4.0

		if alt <= 0.0:
			alt = 0.0
			is_finished = true
			_land()

	func _land() -> void:
		if mod_ref.world_ref == null or not ("army" in mod_ref.world_ref and mod_ref.world_ref.army != null):
			return

		var p = mod_ref.world_ref.player
		var u = Unit.new()
		u.id = mod_ref.world_ref.army._next_id
		mod_ref.world_ref.army._next_id += 1
		u.type = unit_type
		u.country_id = p.id
		u.home = hq_ref

		if is_vehicle:
			u.hp = 95.0 # БМД-4
		else:
			u.hp = 70.0 if unit_type == Unit.Type.ASSAULT else 45.0
		u.max_hp = u.hp

		u.pos = pos
		u.heading = randf() * TAU
		u.update_frame()
		u.state = Unit.State.IDLE
		u.set_meta("is_vdv_trooper", true)

		mod_ref.world_ref.army.units.append(u)
		mod_ref.active_vdv_troops.append(u)

		# Спецэффект мягкой посадки (пороховые тормозные двигатели платформы)
		if mod_ref.world_ref.fx != null:
			mod_ref.world_ref.fx.spawn("dust_s", pos.round(), 8)
		if ClassDB.class_exists("UiKit"):
			UiKit.snd("ui_click")

# ==============================================================================
# Слой игрового мира (Отрисовка призрака постройки, вертолёта, тросов и парашютов)
# ==============================================================================
class AirborneAssaultWorldLayer extends Node2D:
	var mod_ref: AirborneAssaultMod = null
	var main_ref: Node = null
	var world_ref: Node = null

	func setup(m: AirborneAssaultMod, main: Node, world: Node) -> void:
		mod_ref = m
		main_ref = main
		world_ref = world
		z_index = 68

	func _unhandled_input(event: InputEvent) -> void:
		if mod_ref == null or main_ref == null:
			return

		# 1. Режим размещения постройки Штаба ВДВ
		if mod_ref.is_placing_hq:
			if event is InputEventMouseButton and event.pressed:
				if event.button_index == MOUSE_BUTTON_LEFT:
					var mpos = main_ref.cam.screen_to_world(event.position)
					var cell = Vector2i((mpos / float(GameWorld.CELL)).floor())
					mod_ref.place_hq_at(cell)
					get_viewport().set_input_as_handled()
				elif event.button_index == MOUSE_BUTTON_RIGHT:
					mod_ref.cancel_hq_placement()
					get_viewport().set_input_as_handled()
			return

		# 2. Режим целеуказания для вылета десанта (Ми-8 или Ил-76)
		if mod_ref.targeting_op != "":
			if event is InputEventMouseButton and event.pressed:
				if event.button_index == MOUSE_BUTTON_LEFT:
					var mpos = main_ref.cam.screen_to_world(event.position)
					mod_ref.launch_operation_at(mpos)
					get_viewport().set_input_as_handled()
				elif event.button_index == MOUSE_BUTTON_RIGHT:
					mod_ref.cancel_targeting()
					get_viewport().set_input_as_handled()
			return

		# 3. Управление вертолётом в полёте (выбор вертолёта ЛКМ и смена курса ПКМ)
		if event is InputEventMouseButton and event.pressed:
			var mpos = main_ref.cam.screen_to_world(event.position)
			if event.button_index == MOUSE_BUTTON_LEFT:
				# Проверяем клик по одному из летающих вертолётов
				for h in mod_ref.active_helis:
					if h.pos.distance_to(mpos) <= 24.0:
						mod_ref.selected_heli = h
						if ClassDB.class_exists("UiKit"):
							UiKit.snd("ui_select")
						if main_ref.hud != null:
							main_ref.hud.show_toast("Ми-8 взят под прямое управление (ПКМ по карте - изменить точку высадки)")
						get_viewport().set_input_as_handled()
						return
			elif event.button_index == MOUSE_BUTTON_RIGHT:
				if mod_ref.selected_heli != null and is_instance_valid(mod_ref.selected_heli):
					mod_ref.selected_heli.target_pos = mpos
					if mod_ref.selected_heli.state in [VdvHelicopter.State.FLY_TO_LZ, VdvHelicopter.State.HOVER_DESCEND]:
						mod_ref.selected_heli.state = VdvHelicopter.State.FLY_TO_LZ
					if ClassDB.class_exists("UiKit"):
						UiKit.snd("ui_select")
					if main_ref.hud != null:
						main_ref.hud.show_toast("Ми-8 изменил курс на новую точку высадки!")
					get_viewport().set_input_as_handled()
					return

	func _draw() -> void:
		if mod_ref == null or main_ref == null:
			return

		# 1. Отрисовка вертолётных площадок на построенных штабах ВДВ
		if world_ref != null and "mil" in world_ref and world_ref.mil != null:
			for f in world_ref.mil.facilities:
				if f is Facility and f.has_meta("is_vdv_hq") and f.get_meta("is_vdv_hq"):
					_draw_helipad(f)

		# 2. Отрисовка призрака сетки при строительстве
		if mod_ref.is_placing_hq:
			_draw_placement_ghost()

		# 3. Отрисовка прицела десантирования в режиме целеуказания
		if mod_ref.targeting_op != "":
			_draw_targeting_overlay()

		# 4. Отрисовка вертолётов в воздухе
		for h in mod_ref.active_helis:
			_draw_helicopter(h)

		# 5. Отрисовка самолётов Ил-76 в воздухе
		for p in mod_ref.active_planes:
			_draw_cargo_plane(p)

		# 6. Отрисовка спускающихся парашютов
		for para in mod_ref.active_parachutes:
			_draw_parachute(para)

	func _draw_helipad(f: Facility) -> void:
		var center = Vector2(f.cell * GameWorld.CELL) + Vector2(float(f.size.x * GameWorld.CELL) * 0.5, float(f.size.y * GameWorld.CELL) * 0.5)
		# Жёлтый круг площадки
		draw_circle(center, 14.0, Color(0.18, 0.2, 0.22, 0.8))
		draw_arc(center, 14.0, 0, TAU, 24, Color(0.9, 0.75, 0.2, 0.9), 1.5)
		# Буква H
		var col_h = Color(0.95, 0.85, 0.3, 0.95)
		draw_line(center + Vector2(-5, -7), center + Vector2(-5, 7), col_h, 2.0)
		draw_line(center + Vector2(5, -7), center + Vector2(5, 7), col_h, 2.0)
		draw_line(center + Vector2(-5, 0), center + Vector2(5, 0), col_h, 2.0)

	func _draw_placement_ghost() -> void:
		var mouse_w = main_ref.cam.screen_to_world(get_viewport().get_mouse_position())
		var cell = Vector2i((mouse_w / float(GameWorld.CELL)).floor())
		var valid = mod_ref.can_place_hq_at(cell)

		var pos = Vector2(cell * GameWorld.CELL)
		var sz = Vector2(HQ_SIZE * GameWorld.CELL)

		var outline_col = Color(0.2, 1.0, 0.3, 0.9) if valid else Color(1.0, 0.25, 0.25, 0.9)
		var fill_col = Color(0.2, 1.0, 0.3, 0.2) if valid else Color(1.0, 0.25, 0.25, 0.2)

		draw_rect(Rect2(pos, sz), fill_col)
		draw_rect(Rect2(pos, sz), outline_col, false, 2.0)

		# Сетка фундамента
		for x in range(HQ_SIZE.x + 1):
			var lx = pos.x + float(x * GameWorld.CELL)
			draw_line(Vector2(lx, pos.y), Vector2(lx, pos.y + sz.y), Color(outline_col.r, outline_col.g, outline_col.b, 0.3), 1.0)
		for y in range(HQ_SIZE.y + 1):
			var ly = pos.y + float(y * GameWorld.CELL)
			draw_line(Vector2(pos.x, ly), Vector2(pos.x + sz.x, ly), Color(outline_col.r, outline_col.g, outline_col.b, 0.3), 1.0)

	func _draw_targeting_overlay() -> void:
		var mouse_w = main_ref.cam.screen_to_world(get_viewport().get_mouse_position())
		var radius = 28.0 if mod_ref.targeting_op == "mi8" else 48.0
		var ring_col = Color(0.2, 0.85, 1.0, 0.85) if mod_ref.targeting_op == "mi8" else Color(1.0, 0.75, 0.2, 0.85)

		# Пунктирный вектор от базы к курсору
		if mod_ref.targeting_fac != null:
			var base_p = Vector2(mod_ref.targeting_fac.cell * GameWorld.CELL) + Vector2(18, 12)
			draw_line(base_p, mouse_w, Color(ring_col.r, ring_col.g, ring_col.b, 0.4), 1.5)

		# Зона высадки
		draw_circle(mouse_w, radius, Color(ring_col.r, ring_col.g, ring_col.b, 0.15))
		draw_arc(mouse_w, radius, 0, TAU, 32, ring_col, 2.0)
		draw_line(mouse_w - Vector2(radius + 8, 0), mouse_w + Vector2(radius + 8, 0), ring_col, 1.5)
		draw_line(mouse_w - Vector2(0, radius + 8), mouse_w + Vector2(0, radius + 8), ring_col, 1.5)

	func _draw_helicopter(h: VdvHelicopter) -> void:
		# Тень на земле (смещается с набором высоты)
		var shadow_pos = h.pos + Vector2(h.alt * 0.4, h.alt * 0.7)
		var shadow_scale = maxf(0.5, 1.0 - h.alt * 0.03)
		draw_circle(shadow_pos, 8.0 * shadow_scale, Color(0, 0, 0, 0.35))

		# Положение вертолёта в воздухе
		var heli_screen_pos = h.pos - Vector2(0, h.alt)

		# Тросы спуска спецназа во время зависания
		if h.state == VdvHelicopter.State.FAST_ROPING:
			var rope_col = Color(0.2, 0.22, 0.2, 0.9)
			# Левый и правый тросы от дверей к земле
			draw_line(heli_screen_pos + Vector2(-4, 0), h.pos + Vector2(-6, 0), rope_col, 1.5)
			draw_line(heli_screen_pos + Vector2(4, 0), h.pos + Vector2(6, 0), rope_col, 1.5)

		# Корпус вертолёта Ми-8
		var fwd = Vector2.RIGHT.rotated(h.heading)
		var side = Vector2.UP.rotated(h.heading)
		var body_col = Color(0.26, 0.36, 0.3, 1.0)
		var dark_col = Color(0.18, 0.24, 0.2, 1.0)

		# Фюзеляж и кабина
		draw_line(heli_screen_pos - fwd * 12.0, heli_screen_pos + fwd * 8.0, body_col, 5.0)
		draw_circle(heli_screen_pos + fwd * 8.0, 3.0, Color(0.2, 0.75, 0.95, 1.0)) # Остекление
		draw_line(heli_screen_pos - fwd * 12.0, heli_screen_pos - fwd * 22.0, dark_col, 2.5) # Балка
		draw_line(heli_screen_pos - fwd * 22.0 - side * 4.0, heli_screen_pos - fwd * 22.0 + side * 4.0, Color(0.9, 0.6, 0.1, 0.9), 1.5)

		# Вращающийся несущий винт
		var blade_vec = Vector2.RIGHT.rotated(h.rotor_angle) * 18.0
		draw_line(heli_screen_pos - blade_vec, heli_screen_pos + blade_vec, Color(0.85, 0.9, 0.95, 0.75), 1.5)
		draw_line(heli_screen_pos - blade_vec.orthogonal(), heli_screen_pos + blade_vec.orthogonal(), Color(0.85, 0.9, 0.95, 0.75), 1.5)

		# Маркер выбора, если игрок кликнул на вертолёт
		if mod_ref.selected_heli == h:
			draw_arc(heli_screen_pos, 16.0, 0, TAU, 24, Color(0.2, 1.0, 0.4, 0.9), 2.0)
			draw_line(h.pos, h.target_pos, Color(0.2, 1.0, 0.4, 0.5), 1.0)

	func _draw_cargo_plane(p: VdvCargoPlane) -> void:
		var shadow_pos = p.pos + Vector2(p.alt * 0.4, p.alt * 0.7)
		draw_circle(shadow_pos, 16.0, Color(0, 0, 0, 0.25))

		var plane_pos = p.pos - Vector2(0, p.alt)
		var fwd = p.dir
		var side = Vector2(-fwd.y, fwd.x)
		var wing_span = 26.0

		# Крылья и фюзеляж Ил-76
		draw_line(plane_pos - side * wing_span, plane_pos + side * wing_span, Color(0.65, 0.7, 0.75, 1.0), 3.5)
		draw_line(plane_pos - fwd * 22.0, plane_pos + fwd * 20.0, Color(0.72, 0.78, 0.84, 1.0), 6.0)
		draw_circle(plane_pos + fwd * 20.0, 3.0, Color(0.2, 0.7, 0.95, 1.0))

		# Т-образный хвост
		draw_line(plane_pos - fwd * 20.0 - side * 10.0, plane_pos - fwd * 20.0 + side * 10.0, Color(0.65, 0.7, 0.75, 1.0), 2.5)

	func _draw_parachute(para: VdvParachuteCargo) -> void:
		var ground_pos = para.pos
		var cargo_pos = para.pos - Vector2(0, para.alt)
		var chute_pos = cargo_pos - Vector2(0, 14.0)

		# Тень
		draw_circle(ground_pos, 4.0, Color(0, 0, 0, 0.3))

		# Стропы
		var str_col = Color(0.8, 0.8, 0.8, 0.6)
		draw_line(chute_pos + Vector2(-10, 0), cargo_pos, str_col, 1.0)
		draw_line(chute_pos + Vector2(10, 0), cargo_pos, str_col, 1.0)

		# Белый купол парашюта
		var r_chute = 12.0 if para.is_vehicle else 8.0
		draw_arc(chute_pos, r_chute, PI, TAU, 16, Color(0.95, 0.95, 0.95, 0.95), 2.5)

		# Сам груз (БМД или боец)
		if para.is_vehicle:
			draw_rect(Rect2(cargo_pos - Vector2(7, 4), Vector2(14, 8)), Color(0.25, 0.38, 0.28, 1.0))
		else:
			draw_circle(cargo_pos, 3.0, Color(0.2, 0.35, 0.22, 1.0))
