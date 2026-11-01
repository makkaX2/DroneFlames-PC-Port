class_name GitHubUpdater
extends Node
## Модуль автоматических обновлений игры через GitHub Releases
## Автор интеграции: @good_boy_irl
##
## СТАТУС: Готовая реализация в кодовой базе.
## По умолчанию отключен (enabled = false) для активации в будущем.

signal update_available(new_version: String, changelog: String, download_url: String, asset_name: String)
signal no_update_found()
signal check_failed(reason: String)
signal download_progress(received_bytes: int, total_bytes: int, percent: float)
signal download_completed(local_file_path: String)
signal download_failed(reason: String)

@export var enabled: bool = true ## Активировать проверку при старте
@export var repo_owner: String = "makkaX2"
@export var repo_name: String = "DroneFlames-PC-Port"
@export var current_version: String = "0.32.0"

var _http_check: HTTPRequest
var _http_download: HTTPRequest
var _is_downloading: bool = false
var _download_path: String = ""

func _ready() -> void:
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
	if _http_check.get_http_client_status() != HTTPClient.STATUS_DISCONNECTED:
		_http_check.cancel_request()

	var url: String = "https://api.github.com/repos/%s/%s/releases/latest" % [repo_owner, repo_name]
	var headers: PackedStringArray = PackedStringArray([
		"User-Agent: DroneFlames-PC-Port-good_boy_irl",
		"Accept: application/vnd.github.v3+json"
	])
	
	var err: Error = _http_check.request(url, headers)
	if err != OK:
		check_failed.emit("Не удалось отправить запрос к GitHub API: %d" % err)

func _on_check_request_completed(result: int, response_code: int, _headers: PackedStringArray, body: PackedByteArray) -> void:
	if result != HTTPRequest.RESULT_SUCCESS:
		check_failed.emit("Сетевая ошибка при проверке обновлений: %d" % result)
		return

	if response_code != 200:
		check_failed.emit("GitHub API вернул статус %d" % response_code)
		return

	var json_str: String = body.get_string_from_utf8()
	var test_json: JSON = JSON.new()
	var parse_err: Error = test_json.parse(json_str)
	if parse_err != OK:
		check_failed.emit("Ошибка парсинга ответа GitHub: %s" % test_json.get_error_message())
		return

	var data: Dictionary = test_json.data if test_json.data is Dictionary else {}
	var tag: String = String(data.get("tag_name", "")).trim_prefix("v").strip_edges()
	var changelog: String = String(data.get("body", ""))
	var assets: Array = data.get("assets", [])

	if tag == "":
		check_failed.emit("Некорректный релиз на GitHub (отсутствует tag_name)")
		return

	if compare_versions(tag, current_version) > 0:
		# Найдена более свежая версия
		var target_url: String = ""
		var target_name: String = ""

		for asset_dict in assets:
			if not (asset_dict is Dictionary):
				continue
			var aname: String = String(asset_dict.get("name", ""))
			var adl: String = String(asset_dict.get("browser_download_url", ""))
			if aname.ends_with(".exe") or aname.ends_with(".zip"):
				target_url = adl
				target_name = aname
				if aname.to_lower().contains("setup"):
					break # Нашли именно установщик

		update_available.emit(tag, changelog, target_url, target_name)
	else:
		no_update_found.emit()

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

## Запустить скачанный инсталлятор и выйти из игры
func apply_and_restart(installer_path: String, silent: bool = false) -> void:
	var abs_path: String = ProjectSettings.globalize_path(installer_path)
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
	var p1: PackedStringArray = v1.trim_prefix("v").split(".")
	var p2: PackedStringArray = v2.trim_prefix("v").split(".")
	var max_len: int = maxi(p1.size(), p2.size())

	for i in max_len:
		var n1: int = int(p1[i]) if i < p1.size() else 0
		var n2: int = int(p2[i]) if i < p2.size() else 0
		if n1 > n2:
			return 1
		elif n1 < n2:
			return -1
	return 0
