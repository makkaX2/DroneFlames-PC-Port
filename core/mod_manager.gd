extends Node
## Система управления модификациями DroneFlames PC Port
## Автор архитектуры: @good_boy_irl
##
## Возможности:
## - Автоматическое сканирование папок user://mods/, portable mods/ и res://mods/
## - Поддержка упакованных модов .dfmod (ZIP-архивы) и распакованных папок
## - Горячая загрузка и выгрузка модов БЕЗ перезапуска игры
## - Онлайн-каталог модификаций из официального репозитория GitHub (makkaX2/DroneFlames-Mods)
## - Скачивание и установка модов в один клик с индикацией прогресса
## - Автоматическое кеширование и загрузка иконок каталога
## - Расширяемость: регистрация типов карт, текстур, вкладок интерфейса и хуков

signal catalog_loaded(mods: Array)
signal catalog_failed(reason: String)
signal mod_installed(mod_id: String)
signal mod_uninstalled(mod_id: String)
signal mod_toggled(mod_id: String, enabled: bool)
signal mod_download_progress(mod_id: String, received_bytes: int, total_bytes: int, percent: float)
signal mod_download_completed(mod_id: String)
signal mod_download_failed(mod_id: String, reason: String)
signal mods_updated()

const CONFIG_PATH: String = "user://mods_config.json"
const USER_MODS_DIR: String = "user://mods"
const BUILTIN_MODS_DIR: String = "res://mods"
const REPO_CATALOG_URL: String = "https://raw.githubusercontent.com/makkaX2/DroneFlames-Mods/main/catalog.json"

var installed_mods: Dictionary = {} # mod_id -> Dictionary
var catalog_mods: Array = []        # Array of Dictionary
var enabled_mod_ids: Array = []     # Array of String
var disabled_mod_ids: Array = []    # Array of String (explicitly disabled mods)
var uninstalled_mod_ids: Array = [] # Array of String (built-in mods that the user deleted)
var cached_icons: Dictionary = {}    # mod_id -> Texture2D

# Реестры расширений
var registered_map_types: Dictionary = {}  # id -> Dictionary
var custom_textures: Dictionary = {}       # sprite_name -> Texture2D
var custom_menu_tabs: Array = []           # Array of Dictionary
var hooks: Dictionary = {}                 # hook_name -> Array[Callable]

var _http_catalog: HTTPRequest
var _http_download: HTTPRequest
var _http_icon: HTTPRequest
var _is_downloading: bool = false
var _download_mod_id: String = ""
var _download_temp_path: String = ""
var _icon_download_queue: Array[Dictionary] = []
var _is_downloading_icon: bool = false
var _current_icon_mod_id: String = ""

func _ready() -> void:
	process_mode = Node.PROCESS_MODE_ALWAYS
	_setup_network()
	_ensure_directories()
	_load_config()
	scan_installed_mods()

func _setup_network() -> void:
	_http_catalog = HTTPRequest.new()
	_http_catalog.name = "ModCatalogRequest"
	add_child(_http_catalog)
	_http_catalog.request_completed.connect(_on_catalog_request_completed)

	_http_download = HTTPRequest.new()
	_http_download.name = "ModDownloadRequest"
	add_child(_http_download)
	_http_download.request_completed.connect(_on_download_request_completed)

	_http_icon = HTTPRequest.new()
	_http_icon.name = "ModIconRequest"
	add_child(_http_icon)
	_http_icon.request_completed.connect(_on_icon_request_completed)

func _process(_delta: float) -> void:
	if _is_downloading and _http_download != null and _download_mod_id != "":
		var body_size: int = _http_download.get_body_size()
		var downloaded: int = _http_download.get_downloaded_bytes()
		if body_size > 0:
			var pct: float = clampf(float(downloaded) / float(body_size) * 100.0, 0.0, 100.0)
			mod_download_progress.emit(_download_mod_id, downloaded, body_size, pct)

func _ensure_directories() -> void:
	var da: DirAccess = DirAccess.open("user://")
	if da:
		if not da.dir_exists("mods"):
			da.make_dir("mods")
		if not da.dir_exists("mods/downloads"):
			da.make_dir("mods/downloads")
		if not da.dir_exists("mods/cache"):
			da.make_dir("mods/cache")
		if not da.dir_exists("mods/cache/icons"):
			da.make_dir("mods/cache/icons")

	_create_mods_readme()

func _create_mods_readme() -> void:
	var readme_path: String = USER_MODS_DIR.path_join("ИНСТРУКЦИЯ_ПО_МОДАМ.txt")
	if not FileAccess.file_exists(readme_path):
		var fa: FileAccess = FileAccess.open(readme_path, FileAccess.WRITE)
		if fa:
			var txt: String = "=== DroneFlames PC Port - Папка Модификаций ===\n"
			txt += "Автор ПК-порта и системы модов: @good_boy_irl\n"
			txt += "Сообщество мододелов: https://t.me/droneflamesmod\n\n"
			txt += "КАК РАБОТАЮТ МОДЫ:\n"
			txt += "1. Каждая папка здесь представляет собой отдельную модификацию.\n"
			txt += "   В папке должны быть как минимум два файла:\n"
			txt += "   - mod.json: манифест мода (id, name, version, author, description, type, entry)\n"
			txt += "   - mod.gd: GDScript-скрипт с методом init_mod(mm)\n\n"
			txt += "2. Вы можете редактировать любые существующие моды прямо в этой папке:\n"
			txt += "   - Изменять параметры юнитов, зданий, стоимость и баланс\n"
			txt += "   - Добавлять свои типы карт, сценарии и механики\n\n"
			txt += "3. Для установки нового мода:\n"
			txt += "   - Поместите файл .dfmod (или распакованную папку) прямо в эту папку.\n"
			txt += "   - В главном меню игры откройте «МОДЫ» и нажмите «ОБНОВИТЬ» (или перезапустите игру).\n\n"
			txt += "4. Управление модами:\n"
			txt += "   - Включать, отключать и удалять моды можно прямо из главного меню в разделе «МОДЫ».\n"
			txt += "===============================================\n"
			fa.store_string(txt)
			fa.close()

## Копирует встроенные моды из дистрибутива игры в user://mods при первом запуске или обновлении
func _seed_builtin_mods_to_user_dir() -> void:
	var da_res: DirAccess = DirAccess.open(BUILTIN_MODS_DIR)
	if not da_res:
		return
	
	da_res.list_dir_begin()
	var item: String = da_res.get_next()
	while item != "":
		if da_res.current_is_dir() and not item.begins_with("."):
			var src_mod: String = BUILTIN_MODS_DIR.path_join(item)
			var dst_mod: String = USER_MODS_DIR.path_join(item)
			var manifest_src: String = src_mod.path_join("mod.json")
			var manifest_dst: String = dst_mod.path_join("mod.json")
			# Если в user://mods еще нет этой папки мода, копируем целиком
			if not DirAccess.dir_exists_absolute(ProjectSettings.globalize_path(dst_mod)):
				_copy_dir_recursive(src_mod, dst_mod)
			elif FileAccess.file_exists(manifest_src) and FileAccess.file_exists(manifest_dst):
				var v_src: String = _read_manifest_version(manifest_src)
				var v_dst: String = _read_manifest_version(manifest_dst)
				if _is_version_greater(v_src, v_dst):
					_copy_dir_recursive(src_mod, dst_mod)
		elif not da_res.current_is_dir() and item.ends_with(".dfmod"):
			var src_file: String = BUILTIN_MODS_DIR.path_join(item)
			var mod_name: String = item.trim_suffix(".dfmod")
			var dst_folder: String = USER_MODS_DIR.path_join(mod_name)
			if not DirAccess.dir_exists_absolute(ProjectSettings.globalize_path(dst_folder)):
				_extract_zip(src_file, dst_folder)
		item = da_res.get_next()
	da_res.list_dir_end()

func _read_manifest_version(path: String) -> String:
	var fa: FileAccess = FileAccess.open(path, FileAccess.READ)
	if not fa:
		return "0.0.0"
	var text: String = fa.get_as_text()
	fa.close()
	var p: JSON = JSON.new()
	if p.parse(text) == OK and p.data is Dictionary:
		return String(p.data.get("version", "1.0.0"))
	return "0.0.0"

func _is_version_greater(v1: String, v2: String) -> bool:
	var p1: PackedStringArray = v1.trim_prefix("v").split(".")
	var p2: PackedStringArray = v2.trim_prefix("v").split(".")
	var max_len: int = maxi(p1.size(), p2.size())
	for i in max_len:
		var n1: int = int(p1[i]) if i < p1.size() else 0
		var n2: int = int(p2[i]) if i < p2.size() else 0
		if n1 > n2:
			return true
		elif n1 < n2:
			return false
	return false

func _copy_dir_recursive(src: String, dst: String) -> void:
	var da: DirAccess = DirAccess.open(src)
	if not da:
		return
	var global_dst: String = ProjectSettings.globalize_path(dst)
	if not DirAccess.dir_exists_absolute(global_dst):
		DirAccess.make_dir_recursive_absolute(global_dst)
	
	da.list_dir_begin()
	var fn: String = da.get_next()
	while fn != "":
		if fn != "." and fn != "..":
			var src_item: String = src.path_join(fn)
			var dst_item: String = dst.path_join(fn)
			if da.current_is_dir():
				_copy_dir_recursive(src_item, dst_item)
			else:
				var fa_in: FileAccess = FileAccess.open(src_item, FileAccess.READ)
				if fa_in:
					var buf: PackedByteArray = fa_in.get_buffer(fa_in.get_length())
					fa_in.close()
					var fa_out: FileAccess = FileAccess.open(dst_item, FileAccess.WRITE)
					if fa_out:
						fa_out.store_buffer(buf)
						fa_out.close()
		fn = da.get_next()
	da.list_dir_end()

## Возвращает локальный путь к директории модов (для открытия в проводнике)
func get_mods_disk_path() -> String:
	return ProjectSettings.globalize_path(USER_MODS_DIR)

## Открывает папку модов в Проводнике Windows
func open_mods_folder_in_os() -> void:
	var path: String = get_mods_disk_path()
	OS.shell_open(path)

## Восстанавливает все базовые моды ПК-порта и включает их
func restore_builtin_mods() -> void:
	uninstalled_mod_ids.clear()
	disabled_mod_ids.clear()
	_save_config()
	_seed_builtin_mods_to_user_dir()
	scan_installed_mods()

# ==============================================================================
# КОНФИГУРАЦИЯ И СОСТОЯНИЕ МОДОВ
# ==============================================================================

func _load_config() -> void:
	enabled_mod_ids.clear()
	disabled_mod_ids.clear()
	uninstalled_mod_ids.clear()
	if not FileAccess.file_exists(CONFIG_PATH):
		return
	var fa: FileAccess = FileAccess.open(CONFIG_PATH, FileAccess.READ)
	if fa:
		var json_str: String = fa.get_as_text()
		fa.close()
		var test_json: JSON = JSON.new()
		if test_json.parse(json_str) == OK and test_json.data is Dictionary:
			var data: Dictionary = test_json.data
			if data.has("enabled_mods") and data["enabled_mods"] is Array:
				for m in data["enabled_mods"]:
					var sid: String = String(m).strip_edges()
					if sid != "" and not enabled_mod_ids.has(sid):
						enabled_mod_ids.append(sid)
			if data.has("disabled_mods") and data["disabled_mods"] is Array:
				for m in data["disabled_mods"]:
					var sid: String = String(m).strip_edges()
					if sid != "" and not disabled_mod_ids.has(sid):
						disabled_mod_ids.append(sid)
			var u_arr: Variant = data.get("uninstalled_mods", [])
			if u_arr is Array:
				for u in u_arr:
					var uid: String = String(u).strip_edges()
					if uid != "" and not uninstalled_mod_ids.has(uid):
						uninstalled_mod_ids.append(uid)

func _save_config() -> void:
	var fa: FileAccess = FileAccess.open(CONFIG_PATH, FileAccess.WRITE)
	if fa:
		var data: Dictionary = {
			"enabled_mods": enabled_mod_ids,
			"disabled_mods": disabled_mod_ids,
			"uninstalled_mods": uninstalled_mod_ids
		}
		fa.store_string(JSON.stringify(data, "\t"))
		fa.close()

# ==============================================================================
# СКАНИРОВАНИЕ И ЗАГРУЗКА
# ==============================================================================

func scan_installed_mods() -> void:
	# Выгружаем текущие загруженные моды
	for mod_id in installed_mods.keys():
		if is_mod_loaded(mod_id):
			_unload_mod(mod_id)
	
	installed_mods.clear()
	_load_config()
	
	# 1. Сканируем ТОЛЬКО явно установленные пользователем моды в user://mods/
	_unpack_pending_dfmods(USER_MODS_DIR)
	_scan_dir(USER_MODS_DIR, false)

	# 2. Сканируем папку рядом с .exe (портативные моды), если отличается от user:// и res://
	var exe_mods: String = OS.get_executable_path().get_base_dir().path_join("mods")
	var user_mods_global: String = ProjectSettings.globalize_path(USER_MODS_DIR)
	var builtin_mods_global: String = ProjectSettings.globalize_path(BUILTIN_MODS_DIR)
	if DirAccess.dir_exists_absolute(exe_mods) and exe_mods != user_mods_global and exe_mods != builtin_mods_global:
		_scan_dir_absolute(exe_mods, false)

	# 3. Активируем ТОЛЬКО те моды, которые пользователь включил! (Ванильный режим по умолчанию)
	for mod_id in installed_mods.keys():
		if enabled_mod_ids.has(mod_id):
			_load_mod(mod_id)

	_save_config()
	mods_updated.emit()
	print("[ModManager] Scanned installed mods: %d found, %d enabled" % [installed_mods.size(), enabled_mod_ids.size()])

## Распаковывает любые .dfmod файлы, лежащие в корне user://mods/
func _unpack_pending_dfmods(base_path: String) -> void:
	var da: DirAccess = DirAccess.open(base_path)
	if not da:
		return
	da.list_dir_begin()
	var fn: String = da.get_next()
	var dfmods: Array[String] = []
	while fn != "":
		if not da.current_is_dir() and fn.ends_with(".dfmod"):
			dfmods.append(fn)
		fn = da.get_next()
	da.list_dir_end()

	for dfmod_name in dfmods:
		var full_file_path: String = base_path.path_join(dfmod_name)
		var target_folder: String = base_path.path_join(dfmod_name.trim_suffix(".dfmod"))
		print("[ModManager] Extracting .dfmod package: ", full_file_path, " -> ", target_folder)
		_extract_zip(full_file_path, target_folder)
		# Удаляем распакованный .dfmod чтобы не перераспаковывать повторно
		DirAccess.remove_absolute(ProjectSettings.globalize_path(full_file_path))

func _scan_dir(dir_path: String, is_builtin: bool) -> void:
	var da: DirAccess = DirAccess.open(dir_path)
	if not da:
		return
	da.list_dir_begin()
	var sub: String = da.get_next()
	while sub != "":
		if da.current_is_dir() and not sub.begins_with(".") and sub != "downloads" and sub != "cache":
			var mod_path: String = dir_path.path_join(sub)
			_try_register_mod_folder(mod_path, is_builtin)
		sub = da.get_next()
	da.list_dir_end()

func _scan_dir_absolute(dir_path: String, is_builtin: bool) -> void:
	var da: DirAccess = DirAccess.open(dir_path)
	if not da:
		return
	da.list_dir_begin()
	var sub: String = da.get_next()
	while sub != "":
		if da.current_is_dir() and not sub.begins_with(".") and sub != "downloads" and sub != "cache":
			var mod_path: String = dir_path.path_join(sub)
			_try_register_mod_folder(mod_path, is_builtin)
		sub = da.get_next()
	da.list_dir_end()

func _try_register_mod_folder(folder_path: String, is_builtin: bool) -> void:
	var manifest_path: String = folder_path.path_join("mod.json")
	if not FileAccess.file_exists(manifest_path):
		return
	
	var fa: FileAccess = FileAccess.open(manifest_path, FileAccess.READ)
	if not fa:
		return
	var text: String = fa.get_as_text()
	fa.close()
	
	var parser: JSON = JSON.new()
	if parser.parse(text) != OK or not (parser.data is Dictionary):
		print("[ModManager] Error parsing mod.json in: ", folder_path)
		return
	
	var data: Dictionary = parser.data
	var mod_id: String = String(data.get("id", "")).strip_edges()
	if mod_id == "":
		mod_id = folder_path.get_file()
		data["id"] = mod_id

	# Если пользователь удалил этот встроенный мод, не регистрируем его снова
	if is_builtin and uninstalled_mod_ids.has(mod_id):
		return

	# Если мод с таким ID уже загружен из user://, не перезаписываем его
	if installed_mods.has(mod_id):
		var prev_path: String = String(installed_mods[mod_id].get("_folder_path", ""))
		if prev_path.begins_with("user://"):
			return

	var icon_rel: String = String(data.get("icon", "icon.png"))
	var icon_full: String = folder_path.path_join(icon_rel)
	var icon_tex: Texture2D = null
	if FileAccess.file_exists(icon_full):
		var img: Image = Image.load_from_file(ProjectSettings.globalize_path(icon_full))
		if img and not img.is_empty():
			icon_tex = ImageTexture.create_from_image(img)
			cached_icons[mod_id] = icon_tex

	data["_folder_path"] = folder_path
	data["_is_builtin"] = is_builtin
	data["_icon_tex"] = icon_tex
	data["_loaded"] = false
	data["_instance"] = null

	installed_mods[mod_id] = data

# ==============================================================================
# УПРАВЛЕНИЕ АКТИВАЦИЕЙ (БЕЗ ПЕРЕЗАПУСКА)
# ==============================================================================

func is_mod_installed(mod_id: String) -> bool:
	return installed_mods.has(mod_id)

func is_mod_enabled(mod_id: String) -> bool:
	return installed_mods.has(mod_id) and enabled_mod_ids.has(mod_id)

func is_mod_loaded(mod_id: String) -> bool:
	if not installed_mods.has(mod_id):
		return false
	return bool(installed_mods[mod_id].get("_loaded", false))

func toggle_mod(mod_id: String, enable: bool) -> void:
	if not installed_mods.has(mod_id):
		return
	
	if enable:
		disabled_mod_ids.erase(mod_id)
		if not enabled_mod_ids.has(mod_id):
			enabled_mod_ids.append(mod_id)
		_load_mod(mod_id)
	else:
		if not disabled_mod_ids.has(mod_id):
			disabled_mod_ids.append(mod_id)
		enabled_mod_ids.erase(mod_id)
		_unload_mod(mod_id)

	_save_config()
	mod_toggled.emit(mod_id, enable)
	mods_updated.emit()

func _load_mod(mod_id: String) -> bool:
	if not installed_mods.has(mod_id):
		return false
	var mod: Dictionary = installed_mods[mod_id]
	if mod.get("_loaded", false):
		return true

	var folder: String = String(mod.get("_folder_path", ""))
	var entry_file: String = String(mod.get("entry", "mod.gd"))
	var entry_path: String = folder.path_join(entry_file)
	if FileAccess.file_exists(entry_path):
		var scr: GDScript = load(entry_path) as GDScript
		if scr:
			var instance = scr.new()
			mod["_instance"] = instance
			if instance and instance.has_method("init_mod"):
				instance.call("init_mod", self)
		else:
			print("[ModManager] Failed to load GDScript at: ", entry_path)
			return false

	mod["_loaded"] = true
	print("[ModManager] Mod successfully activated: ", mod_id)
	return true

func _unload_mod(mod_id: String) -> void:
	if not installed_mods.has(mod_id):
		return
	var mod: Dictionary = installed_mods[mod_id]
	if not mod.get("_loaded", false):
		return

	var instance = mod.get("_instance")
	if instance != null and is_instance_valid(instance):
		if instance.has_method("cleanup_mod"):
			instance.call("cleanup_mod", self)
		mod["_instance"] = null

	mod["_loaded"] = false
	print("[ModManager] Mod deactivated: ", mod_id)

# ==============================================================================
# API РАСШИРЕНИЙ ДЛЯ МОДОВ
# ==============================================================================

## Регистрация нового типа карты
func register_map_type(data: Dictionary) -> void:
	var id: String = String(data.get("id", ""))
	if id == "":
		return
	registered_map_types[id] = data
	GameConfig.custom_maps_cache = registered_map_types.values()
	print("[ModManager] Registered custom map type: ", id, " ('", data.get("name", ""), "')")
	mods_updated.emit()

func unregister_map_type(id: String) -> void:
	if registered_map_types.has(id):
		registered_map_types.erase(id)
		GameConfig.custom_maps_cache = registered_map_types.values()
		print("[ModManager] Unregistered map type: ", id)
		mods_updated.emit()

func get_custom_map_types() -> Array:
	return registered_map_types.values()

## Регистрация или замена текстуры/спрайта
func register_texture(sprite_name: String, texture: Texture2D) -> void:
	custom_textures[sprite_name] = texture
	print("[ModManager] Registered custom texture: ", sprite_name)

func unregister_texture(sprite_name: String) -> void:
	if custom_textures.has(sprite_name):
		custom_textures.erase(sprite_name)

func get_custom_texture(sprite_name: String) -> Texture2D:
	return custom_textures.get(sprite_name, null)

## Регистрация хуков для расширения игровой логики
func register_hook(hook_name: String, callable: Callable) -> void:
	if not hooks.has(hook_name):
		hooks[hook_name] = []
	if not hooks[hook_name].has(callable):
		hooks[hook_name].append(callable)

func unregister_hook(hook_name: String, callable: Callable) -> void:
	if hooks.has(hook_name):
		hooks[hook_name].erase(callable)

func call_hook(hook_name: String, args: Array = []) -> Array:
	var results: Array = []
	if hooks.has(hook_name):
		for cb: Callable in hooks[hook_name]:
			if cb.is_valid():
				results.append(cb.callv(args))
	return results

# ==============================================================================
# ОНЛАЙН И ВСТРОЕННЫЙ КАТАЛОГ, СКАЧИВАНИЕ И ИКОНКИ
# ==============================================================================

var _builtin_catalog_cache: Array = []

func get_full_catalog() -> Array:
	var result: Array = []
	var seen_ids: Dictionary = {}

	# 1. Встроенные моды из дистрибутива (res://mods)
	if _builtin_catalog_cache.is_empty():
		_scan_builtin_catalog()

	for b in _builtin_catalog_cache:
		var mid: String = String(b.get("id", ""))
		result.append(b.duplicate(true))
		seen_ids[mid] = true

	# 2. Моды из онлайн каталога (makkaX2/DroneFlames-Mods)
	for c in catalog_mods:
		var cid: String = String(c.get("id", ""))
		if not seen_ids.has(cid):
			result.append(c.duplicate(true))
			seen_ids[cid] = true
		else:
			# Если в онлайне версия новее встроенной, обновляем данные в каталоге
			for i in range(result.size()):
				if result[i].get("id") == cid:
					if _is_version_greater(String(c.get("version", "")), String(result[i].get("version", ""))):
						result[i] = c.duplicate(true)
					break

	return result

func _scan_builtin_catalog() -> void:
	_builtin_catalog_cache.clear()
	var da: DirAccess = DirAccess.open(BUILTIN_MODS_DIR)
	if not da:
		return
	da.list_dir_begin()
	var item: String = da.get_next()
	while item != "":
		if da.current_is_dir() and not item.begins_with("."):
			var m_path: String = BUILTIN_MODS_DIR.path_join(item).path_join("mod.json")
			if FileAccess.file_exists(m_path):
				var fa: FileAccess = FileAccess.open(m_path, FileAccess.READ)
				if fa:
					var parsed: JSON = JSON.new()
					if parsed.parse(fa.get_as_text()) == OK and parsed.data is Dictionary:
						var d: Dictionary = parsed.data
						if not d.has("id") or String(d.get("id", "")) == "":
							d["id"] = item
						d["_is_builtin"] = true
						var icon_file: String = BUILTIN_MODS_DIR.path_join(item).path_join(String(d.get("icon", "icon.png")))
						if FileAccess.file_exists(icon_file):
							var img: Image = Image.load_from_file(ProjectSettings.globalize_path(icon_file))
							if img and not img.is_empty():
								var tex: Texture2D = ImageTexture.create_from_image(img)
								cached_icons[d["id"]] = tex
								d["_icon_tex"] = tex
						_builtin_catalog_cache.append(d)
					fa.close()
		item = da.get_next()
	da.list_dir_end()

func install_catalog_mod(cat_mod: Dictionary) -> void:
	var mod_id: String = String(cat_mod.get("id", "")).strip_edges()
	if mod_id == "":
		return

	# Если мод доступен локально во встроенных ресурсах (res://mods):
	var src_folder: String = BUILTIN_MODS_DIR.path_join(mod_id)
	var src_dfmod: String = BUILTIN_MODS_DIR.path_join(mod_id + ".dfmod")
	var has_builtin: bool = FileAccess.file_exists(src_dfmod) or DirAccess.dir_exists_absolute(ProjectSettings.globalize_path(src_folder))

	if has_builtin:
		install_builtin_mod(mod_id)
		return

	# Иначе скачиваем из сети
	download_and_install_mod(cat_mod)

func install_builtin_mod(mod_id: String) -> bool:
	var src_folder: String = BUILTIN_MODS_DIR.path_join(mod_id)
	var src_dfmod: String = BUILTIN_MODS_DIR.path_join(mod_id + ".dfmod")
	var dst_folder: String = USER_MODS_DIR.path_join(mod_id)
	var global_dst: String = ProjectSettings.globalize_path(dst_folder)

	if DirAccess.dir_exists_absolute(global_dst):
		_delete_directory_completely(global_dst)

	var ok: bool = false
	if FileAccess.file_exists(src_dfmod):
		ok = _extract_zip(src_dfmod, dst_folder)
	elif DirAccess.dir_exists_absolute(ProjectSettings.globalize_path(src_folder)):
		_copy_dir_recursive(src_folder, dst_folder)
		ok = true

	if ok:
		_try_register_mod_folder(dst_folder, false)
		if not enabled_mod_ids.has(mod_id):
			enabled_mod_ids.append(mod_id)
		disabled_mod_ids.erase(mod_id)
		uninstalled_mod_ids.erase(mod_id)
		_load_mod(mod_id)
		_save_config()
		mod_installed.emit(mod_id)
		mods_updated.emit()
		print("[ModManager] Installed and enabled mod from catalog: ", mod_id)
		return true
	return false

func fetch_catalog() -> void:
	if _http_catalog.get_http_client_status() != HTTPClient.STATUS_DISCONNECTED:
		_http_catalog.cancel_request()

	var headers: PackedStringArray = PackedStringArray([
		"User-Agent: DroneFlames-PC-Port-good_boy_irl",
		"Accept: application/json"
	])
	var err: Error = _http_catalog.request(REPO_CATALOG_URL, headers)
	if err != OK:
		catalog_failed.emit("Не удалось отправить запрос каталога: %d" % err)

func _on_catalog_request_completed(result: int, response_code: int, _headers: PackedStringArray, body: PackedByteArray) -> void:
	if result != HTTPRequest.RESULT_SUCCESS or response_code != 200:
		catalog_failed.emit("Ошибка загрузки каталога (код %d)" % response_code)
		return

	var json_str: String = body.get_string_from_utf8()
	var test_json: JSON = JSON.new()
	if test_json.parse(json_str) != OK or not (test_json.data is Dictionary):
		catalog_failed.emit("Ошибка парсинга каталога модов")
		return

	var data: Dictionary = test_json.data
	catalog_mods = data.get("mods", [])
	
	# Автоматически предзагружаем иконки каталога
	for m in catalog_mods:
		var mid: String = String(m.get("id", ""))
		var i_url: String = String(m.get("icon_url", ""))
		if mid != "" and i_url != "":
			_ensure_icon_cached(mid, i_url)

	catalog_loaded.emit(catalog_mods)
	print("[ModManager] Catalog loaded: %d mods available online" % catalog_mods.size())

func _ensure_icon_cached(mod_id: String, icon_url: String) -> void:
	if cached_icons.has(mod_id):
		return
	var cache_file: String = "user://mods/cache/icons/%s.png" % mod_id
	var global_cache: String = ProjectSettings.globalize_path(cache_file)
	if FileAccess.file_exists(global_cache):
		var img: Image = Image.load_from_file(global_cache)
		if img and not img.is_empty():
			cached_icons[mod_id] = ImageTexture.create_from_image(img)
			return

	if installed_mods.has(mod_id) and installed_mods[mod_id].get("_icon_tex") != null:
		cached_icons[mod_id] = installed_mods[mod_id]["_icon_tex"]
		return

	for item in _icon_download_queue:
		if item.get("id") == mod_id:
			return
	_icon_download_queue.append({"id": mod_id, "url": icon_url})
	_process_next_icon_download()

func _process_next_icon_download() -> void:
	if _is_downloading_icon or _icon_download_queue.is_empty():
		return
	var item: Dictionary = _icon_download_queue.pop_front()
	var mod_id: String = item["id"]
	var url: String = item["url"]
	_is_downloading_icon = true
	_current_icon_mod_id = mod_id
	
	var temp_icon_path: String = "user://mods/cache/icons/%s.png" % mod_id
	_http_icon.download_file = temp_icon_path
	var err: Error = _http_icon.request(url)
	if err != OK:
		_is_downloading_icon = false
		_current_icon_mod_id = ""
		_process_next_icon_download()

func _on_icon_request_completed(result: int, response_code: int, _headers: PackedStringArray, _body: PackedByteArray) -> void:
	var mod_id: String = _current_icon_mod_id
	_is_downloading_icon = false
	_current_icon_mod_id = ""

	if result == HTTPRequest.RESULT_SUCCESS and response_code == 200:
		var cache_file: String = "user://mods/cache/icons/%s.png" % mod_id
		var global_p: String = ProjectSettings.globalize_path(cache_file)
		if FileAccess.file_exists(global_p):
			var img: Image = Image.load_from_file(global_p)
			if img and not img.is_empty():
				cached_icons[mod_id] = ImageTexture.create_from_image(img)
				mods_updated.emit()

	_process_next_icon_download()

func get_mod_icon(mod_id: String, mod_data: Dictionary = {}) -> Texture2D:
	if installed_mods.has(mod_id) and installed_mods[mod_id].get("_icon_tex") != null:
		return installed_mods[mod_id]["_icon_tex"]
	if cached_icons.has(mod_id):
		return cached_icons[mod_id]
	var cache_file: String = "user://mods/cache/icons/%s.png" % mod_id
	var global_p: String = ProjectSettings.globalize_path(cache_file)
	if FileAccess.file_exists(global_p):
		var img: Image = Image.load_from_file(global_p)
		if img and not img.is_empty():
			var tex: Texture2D = ImageTexture.create_from_image(img)
			cached_icons[mod_id] = tex
			return tex
	var i_url: String = String(mod_data.get("icon_url", ""))
	if i_url != "":
		_ensure_icon_cached(mod_id, i_url)
	return null

func download_and_install_mod(cat_mod: Dictionary) -> void:
	var mod_id: String = String(cat_mod.get("id", ""))
	var dl_url: String = String(cat_mod.get("url", cat_mod.get("download_url", "")))
	if mod_id == "" or dl_url == "":
		print("[ModManager] Error: No download URL for mod: ", mod_id, " data: ", cat_mod)
		mod_download_failed.emit(mod_id, "Не указан URL для скачивания")
		return

	if _is_downloading:
		mod_download_failed.emit(mod_id, "Уже выполняется другое скачивание")
		return

	_is_downloading = true
	_download_mod_id = mod_id
	_download_temp_path = "user://mods/downloads/%s.dfmod" % mod_id

	var headers: PackedStringArray = PackedStringArray([
		"User-Agent: DroneFlames-PC-Port-good_boy_irl"
	])
	
	_http_download.download_file = _download_temp_path
	var err: Error = _http_download.request(dl_url, headers)
	if err != OK:
		_is_downloading = false
		_download_mod_id = ""
		mod_download_failed.emit(mod_id, "Ошибка отправки запроса: %d" % err)

func _on_download_request_completed(result: int, response_code: int, _headers: PackedStringArray, _body: PackedByteArray) -> void:
	var mod_id: String = _download_mod_id
	var temp_path: String = _download_temp_path
	_is_downloading = false
	_download_mod_id = ""
	_download_temp_path = ""

	if result != HTTPRequest.RESULT_SUCCESS or response_code != 200:
		mod_download_failed.emit(mod_id, "Ошибка загрузки файла (код %d)" % response_code)
		return

	var target_folder: String = USER_MODS_DIR.path_join(mod_id)
	var global_target: String = ProjectSettings.globalize_path(target_folder)
	
	# Если старая версия мода есть, удаляем ее перед распаковкой обновления
	if DirAccess.dir_exists_absolute(global_target):
		_delete_directory_completely(global_target)

	var extract_ok: bool = _extract_zip(temp_path, target_folder)
	
	# Удаляем временный архив
	DirAccess.remove_absolute(ProjectSettings.globalize_path(temp_path))

	if not extract_ok:
		mod_download_failed.emit(mod_id, "Ошибка распаковки .dfmod архива")
		return

	uninstalled_mod_ids.erase(mod_id)
	_save_config()

	# Пересканируем и включаем установленный мод
	scan_installed_mods()
	if installed_mods.has(mod_id):
		toggle_mod(mod_id, true)

	mod_download_completed.emit(mod_id)
	mod_installed.emit(mod_id)
	print("[ModManager] Successfully installed/updated and enabled mod: ", mod_id)

func uninstall_mod(mod_id: String) -> void:
	if not installed_mods.has(mod_id):
		return
	
	var mod: Dictionary = installed_mods[mod_id]
	toggle_mod(mod_id, false)
	enabled_mod_ids.erase(mod_id)
	disabled_mod_ids.erase(mod_id)
	if not uninstalled_mod_ids.has(mod_id):
		uninstalled_mod_ids.append(mod_id)
	_save_config()

	var folder: String = String(mod.get("_folder_path", ""))
	if folder != "":
		var global_folder: String = ProjectSettings.globalize_path(folder)
		_delete_directory_completely(global_folder)

	# Удаляем возможные остаточные .dfmod
	var dfmod_user: String = ProjectSettings.globalize_path(USER_MODS_DIR.path_join(mod_id + ".dfmod"))
	if FileAccess.file_exists(dfmod_user):
		DirAccess.remove_absolute(dfmod_user)

	var dfmod_dl: String = ProjectSettings.globalize_path("user://mods/downloads/%s.dfmod" % mod_id)
	if FileAccess.file_exists(dfmod_dl):
		DirAccess.remove_absolute(dfmod_dl)

	installed_mods.erase(mod_id)
	mod_uninstalled.emit(mod_id)
	mods_updated.emit()
	print("[ModManager] Fully uninstalled and deleted mod: ", mod_id)

# ==============================================================================
# УТИЛИТЫ РАСПАКОВКИ И УДАЛЕНИЯ ФАЙЛОВ
# ==============================================================================

func _extract_zip(zip_path: String, target_dir: String) -> bool:
	var global_zip: String = ProjectSettings.globalize_path(zip_path)
	var global_target: String = ProjectSettings.globalize_path(target_dir)

	var reader: ZIPReader = ZIPReader.new()
	var err: Error = reader.open(global_zip)
	if err != OK:
		print("[ModManager] ZIPReader open failed: ", err, " for ", global_zip)
		return false

	if not DirAccess.dir_exists_absolute(global_target):
		DirAccess.make_dir_recursive_absolute(global_target)

	var files: PackedStringArray = reader.get_files()
	for f in files:
		if f.ends_with("/"):
			DirAccess.make_dir_recursive_absolute(global_target.path_join(f))
			continue
		
		var dir_name: String = f.get_base_dir()
		if dir_name != "":
			DirAccess.make_dir_recursive_absolute(global_target.path_join(dir_name))
		
		var data: PackedByteArray = reader.read_file(f)
		var out_file: String = global_target.path_join(f)
		var fa: FileAccess = FileAccess.open(out_file, FileAccess.WRITE)
		if fa:
			fa.store_buffer(data)
			fa.close()

	reader.close()
	return true

func _delete_directory_completely(global_path: String) -> void:
	if not DirAccess.dir_exists_absolute(global_path):
		return
	
	var err: Error = OS.move_to_trash(global_path)
	if err == OK:
		return

	_delete_recursive_absolute(global_path)

func _delete_recursive_absolute(path: String) -> void:
	var da: DirAccess = DirAccess.open(path)
	if not da:
		return
	da.list_dir_begin()
	var fn: String = da.get_next()
	while fn != "":
		if fn != "." and fn != "..":
			var sub_path: String = path.path_join(fn)
			if da.current_is_dir():
				_delete_recursive_absolute(sub_path)
			else:
				DirAccess.remove_absolute(sub_path)
		fn = da.get_next()
	da.list_dir_end()
	DirAccess.remove_absolute(path)
