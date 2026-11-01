extends Node
## Watermark and PC Port Branding by @good_boy_irl
## Keeps subtle, clean branding: window title, menu version string, and F11 fullscreen.

const WINDOW_TITLE: String = "DroneFlames — PC Port by @good_boy_irl"

func _ready() -> void:
	process_mode = Node.PROCESS_MODE_ALWAYS
	_update_title()
	get_tree().node_added.connect(_on_node_added)
	_setup_updater()

func _setup_updater() -> void:
	if has_node("/root/Updater"):
		var up = get_node("/root/Updater")
		up.update_available.connect(_on_update_available)

func _on_update_available(new_version: String, _changelog: String, _dl_url: String, _asset_name: String) -> void:
	print("[PC Port] New version available on GitHub: v" + new_version)
	var win := get_window()
	if win:
		win.title = WINDOW_TITLE + " (Обновление v" + new_version + " доступно!)"

func _process(_delta: float) -> void:
	var win := get_window()
	if win and not win.title.begins_with("DroneFlames"):
		_update_title()

func _unhandled_input(event: InputEvent) -> void:
	if event is InputEventKey and event.pressed and not event.echo:
		if event.keycode == KEY_F11 or (event.keycode == KEY_ENTER and event.alt_pressed):
			var cur: int = DisplayServer.window_get_mode()
			if cur == DisplayServer.WINDOW_MODE_FULLSCREEN or cur == DisplayServer.WINDOW_MODE_EXCLUSIVE_FULLSCREEN:
				DisplayServer.window_set_mode(DisplayServer.WINDOW_MODE_WINDOWED)
			else:
				DisplayServer.window_set_mode(DisplayServer.WINDOW_MODE_FULLSCREEN)
			get_viewport().set_input_as_handled()

func _update_title() -> void:
	var win := get_window()
	if win:
		win.title = WINDOW_TITLE
	DisplayServer.window_set_title(WINDOW_TITLE)

func _on_node_added(node: Node) -> void:
	if node is Label:
		if node.text.begins_with("v0.") and not node.text.contains("@good_boy_irl"):
			node.text = node.text + " · PC Port by @good_boy_irl"

