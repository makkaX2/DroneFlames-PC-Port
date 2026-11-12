class_name GitHubUpdater
extends Node
## Модуль автоматических обновлений игры через GitHub Releases
## Автор интеграции: @good_boy_irl

signal update_available(new_version: String, changelog: String, download_url: String, asset_name: String)
signal no_update_found()
signal check_failed(reason: String)
signal download_progress(received_bytes: int, total_bytes: int, percent: float)
signal download_completed(local_file_path: String)
signal download_failed(reason: String)

@export var enabled: bool = true ## Активировать проверку при старте
@export var repo_owner: String = "makkaX2"
@export var repo_name: String = "DroneFlames-PC-Port"
@export var current_version: String = "0.33.5.38"

var latest_tag: String = ""
var latest_changelog: String = ""
var latest_url: String = ""
var latest_asset_name: String = ""
var is_update_ready: bool = false

func has_update() -> bool:
	return is_update_ready

var _http_check: HTTPRequest
var _http_download: HTTPRequest
var _is_downloading: bool = false
var _download_path: String = ""

static func clean_version_string(v: String) -> String:
	var s: String = v.strip_edges()
	if s.begins_with("v") or s.begins_with("V"):
		s = s.substr(1).strip_edges()
	var sp: int = s.find(" ")
	if sp != -1:
		s = s.substr(0, sp)
	var paren: int = s.find("(")
	if paren != -1:
		s = s.substr(0, paren)
	var dash: int = s.find("-")
	if dash != -1:
		s = s.substr(0, dash)
	return s.strip_edges()

static func get_installed_version() -> String:
	if FileAccess.file_exists("res://version_info.json"):
		var f := FileAccess.open("res://version_info.json", FileAccess.READ)
		if f != null:
			var txt := f.get_as_text()
			var json = JSON.parse_string(txt)
			if json is Dictionary and json.has("version"):
				var v: String = String(json["version"]).strip_edges()
				if v != "":
					return v
	if ResourceLoader.exists("res://ui/menus.gd"):
		var m_cls = load("res://ui/menus.gd")
		if m_cls != null and "VERSION" in m_cls:
			var v_str: String = String(m_cls.VERSION).get_slice(" ", 0).trim_prefix("v")
			if v_str != "":
				return v_str
	return "0.33.5.38"

func _ready() -> void:
	current_version = get_installed_version()
	_http_check = HTTPRequest.new()
	_http_check.name = "GitHubUpdateCheckRequest"
	add_child(_http_check)
	_http_check.request_completed.connect(_on_check_request_completed)

	_http_download = HTTPRequest.new()
	_http_download.name = "GitHubUpdateDownloadRequest"
	add_child(_http_download)
	_http_download.request_completed.connect(_on_download_request_completed)

	if enabled:
		check_for_updates()

func _process(_delta: float) -> void:
	if _is_downloading and _http_download != null:
		var body_size: int = _http_download.get_body_size()
		var downloaded: int = _http_download.get_downloaded_bytes()
		if body_size > 0:
			var pct: float = clampf(float(downloaded) / float(body_size) * 100.0, 0.0, 100.0)
			download_progress.emit(downloaded, body_size, pct)

## Запуск проверки обновлений через GitHub REST API
func check_for_updates() -> void:
	current_version = get_installed_version()
	is_update_ready = false
	if _http_check.get_http_client_status() != HTTPClient.STATUS_DISCONNECTED:
		_http_check.cancel_request()

	var endpoint: String = "releases?per_page=30" if current_version.ends_with("-test") else "releases/latest"
	var url: String = "https://api.github.com/repos/%s/%s/%s" % [repo_owner, repo_name, endpoint]
	print("[Updater] Checking for updates at: ", url, " (current: v", current_version, ")")
	var headers: PackedStringArray = PackedStringArray([
		"User-Agent: DroneFlames-PC-Port-good_boy_irl",
		"Accept: application/vnd.github.v3+json"
	])
	
	var err: Error = _http_check.request(url, headers)
	if err != OK:
		print("[Updater] Request failed: ", err)
		check_failed.emit("Не удалось отправить запрос к GitHub API: %d" % err)

func _on_check_request_completed(result: int, response_code: int, _headers: PackedStringArray, body: PackedByteArray) -> void:
	print("[Updater] GitHub response: code=", response_code, " result=", result)
	if result != HTTPRequest.RESULT_SUCCESS:
		check_failed.emit("Сетевая ошибка при проверке обновлений: %d" % result)
		return

	if response_code != 200:
		print("[Updater] GitHub API non-200 status: ", response_code)
		check_failed.emit("GitHub API вернул статус %d" % response_code)
		return

	var json_str: String = body.get_string_from_utf8()
	var test_json: JSON = JSON.new()
	var parse_err: Error = test_json.parse(json_str)
	if parse_err != OK:
		check_failed.emit("Ошибка парсинга ответа GitHub: %s" % test_json.get_error_message())
		return

	var release: Dictionary = select_release(test_json.data, current_version)
	if release.is_empty():
		no_update_found.emit()
		return

	latest_tag = String(release["tag_name"]).trim_prefix("v")
	latest_changelog = String(release.get("body", ""))
	var asset: Dictionary = select_asset(release.get("assets", []), OS.get_name())
	if OS.get_name() == "Linux" and asset.is_empty():
		no_update_found.emit()
		return
	latest_url = String(asset.get("browser_download_url", ""))
	latest_asset_name = String(asset.get("name", ""))
	is_update_ready = true
	update_available.emit(latest_tag, latest_changelog, latest_url, latest_asset_name)


static func select_release(payload: Variant, installed: String) -> Dictionary:
	var test_channel: bool = installed.ends_with("-test")
	var releases: Array = payload if payload is Array else [payload]
	var newest: Dictionary = {}
	var newest_tag: String = installed
	var tag_pattern := RegEx.create_from_string("^v?[0-9]+(\\.[0-9]+){2,3}(-test)?$")
	for release: Variant in releases:
		if not release is Dictionary or bool(release.get("draft", false)):
			continue
		var tag: String = String(release.get("tag_name", ""))
		if tag_pattern.search(tag) == null or tag.ends_with("-test") != test_channel or bool(release.get("prerelease", false)) != test_channel:
			continue
		if compare_versions(tag, newest_tag) > 0:
			newest = release
			newest_tag = tag
	return newest


static func select_asset(assets: Array, platform: String) -> Dictionary:
	var fallback: Dictionary = {}
	for asset: Variant in assets:
		if not asset is Dictionary or not String(asset.get("browser_download_url", "")).begins_with("https://"):
			continue
		var name: String = String(asset.get("name", "")).to_lower()
		match platform:
			"Linux":
				if name.begins_with("droneflames_linux_x86_64_v") and name.ends_with("_droneflamesmod.tar.gz"):
					return asset
			"Android":
				if name.ends_with(".apk"):
					return asset
			"macOS":
				if name.ends_with(".dmg"):
					return asset
				if name.contains("macos") and name.ends_with(".zip"):
					fallback = asset
			"Windows":
				if name.contains("setup") and name.ends_with(".exe"):
					return asset
				if name.begins_with("droneflames_pc_") and name.ends_with(".zip"):
					fallback = asset
	return fallback


func start_linux_update() -> bool:
	var installer: String = OS.get_environment("DF_LINUX_INSTALLER")
	if OS.get_name() != "Linux" or not installer.is_absolute_path() or not FileAccess.file_exists(installer):
		return false
	var channel: String = "test" if current_version.ends_with("-test") else "stable"
	var terminals: Dictionary = {
		"xdg-terminal-exec": ["--"], "gnome-terminal": ["--"], "konsole": ["-e"],
		"xfce4-terminal": ["-x"], "kitty": [], "alacritty": ["-e"], "foot": [], "xterm": ["-e"],
	}
	for terminal: String in terminals:
		for directory: String in OS.get_environment("PATH").split(":", false):
			var executable: String = directory.path_join(terminal)
			if not executable.is_absolute_path() or not FileAccess.file_exists(executable):
				continue
			var args := PackedStringArray(terminals[terminal])
			args.append_array(["bash", installer, "--channel", channel, "--terminal"])
			if OS.create_process(executable, args) > 0:
				get_tree().quit()
				return true
	return false


## Скачать файл обновления в папку пользовательских данных
func download_update(download_url: String, file_name: String = "") -> void:
	if download_url == "":
		download_failed.emit("Ссылка на скачивание пуста")
		return

	if file_name == "":
		file_name = download_url.get_file()
		if file_name == "":
			file_name = "DroneFlames_Update.exe"

	var updates_dir: String = OS.get_user_data_dir() + "/updates"
	DirAccess.make_dir_recursive_absolute(updates_dir)
	_download_path = updates_dir + "/" + file_name

	_http_download.download_file = _download_path
	var headers: PackedStringArray = PackedStringArray([
		"User-Agent: DroneFlames-PC-Port-good_boy_irl"
	])
	
	_is_downloading = true
	var err: Error = _http_download.request(download_url, headers)
	if err != OK:
		_is_downloading = false
		download_failed.emit("Ошибка при начале скачивания: %d" % err)

func _on_download_request_completed(result: int, response_code: int, _headers: PackedStringArray, _body: PackedByteArray) -> void:
	_is_downloading = false
	if result != HTTPRequest.RESULT_SUCCESS or response_code < 200 or response_code >= 300:
		download_failed.emit("Ошибка скачивания файла: код %d" % response_code)
		return

	download_completed.emit(_download_path)

## Запустить скачанный инсталлятор/образ и выйти из игры
func apply_and_restart(installer_path: String, silent: bool = false) -> void:
	var abs_path: String = ProjectSettings.globalize_path(installer_path)
	if OS.get_name() == "macOS" or OS.has_feature("mobile") or OS.get_name() == "Android":
		OS.shell_open(abs_path)
		get_tree().quit()
		return

	var args: PackedStringArray = PackedStringArray()
	if silent:
		args.append("/SILENT")
	
	var pid: int = OS.create_process(abs_path, args)
	if pid > 0:
		get_tree().quit()
	else:
		push_error("Не удалось запустить инсталлятор: " + abs_path)

## Сравнение двух semver строк (например: "0.33.0" и "0.32.0")
## Возвращает: 1 если v1 > v2, -1 если v1 < v2, 0 если равны
static func compare_versions(v1: String, v2: String) -> int:
	var s1: String = clean_version_string(v1)
	var s2: String = clean_version_string(v2)
	var p1: PackedStringArray = s1.split(".")
	var p2: PackedStringArray = s2.split(".")
	var max_len: int = maxi(p1.size(), p2.size())

	for i in max_len:
		var n1: int = int(p1[i]) if i < p1.size() else 0
		var n2: int = int(p2[i]) if i < p2.size() else 0
		if n1 > n2:
			return 1
		elif n1 < n2:
			return -1
	return 0
