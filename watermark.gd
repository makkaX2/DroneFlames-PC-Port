extends Node
## Watermark and PC Port Branding by @good_boy_irl

var canvas: CanvasLayer
var root_ctrl: Control
var top_panel: PanelContainer
var bottom_panel: PanelContainer

const BRAND_TEXT_TOP: String = "🎮 PC PORT · @good_boy_irl"
const BRAND_TEXT_BOTTOM: String = "🚁 ПОРТ НА ПК: @good_boy_irl"
const WINDOW_TITLE: String = "DroneFlames — PC Port by @good_boy_irl"

func _ready() -> void:
	process_mode = Node.PROCESS_MODE_ALWAYS
	_update_title()
	_create_overlay()
	get_tree().node_added.connect(_on_node_added)
	get_tree().root.size_changed.connect(_on_resized)
	_on_resized()

func _process(_delta: float) -> void:
	var win := get_window()
	if win and win.title != WINDOW_TITLE:
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

func _create_overlay() -> void:
	canvas = CanvasLayer.new()
	canvas.name = "WatermarkCanvas"
	canvas.layer = 1000 # Absolute topmost layer across all scenes
	add_child(canvas)

	# Fullscreen root control to handle responsive anchoring
	root_ctrl = Control.new()
	root_ctrl.name = "RootOverlay"
	root_ctrl.mouse_filter = Control.MOUSE_FILTER_IGNORE
	root_ctrl.set_anchors_preset(Control.PRESET_FULL_RECT)
	root_ctrl.grow_horizontal = Control.GROW_DIRECTION_BOTH
	root_ctrl.grow_vertical = Control.GROW_DIRECTION_BOTH
	canvas.add_child(root_ctrl)

	# Stylebox for dark rounded badge
	var style := StyleBoxFlat.new()
	style.bg_color = Color(0.06, 0.08, 0.14, 0.88)
	style.border_width_left = 1
	style.border_width_top = 1
	style.border_width_right = 1
	style.border_width_bottom = 1
	style.border_color = Color(1.0, 0.82, 0.25, 0.8) # Golden accent border
	style.corner_radius_top_left = 6
	style.corner_radius_top_right = 6
	style.corner_radius_bottom_left = 6
	style.corner_radius_bottom_right = 6
	style.content_margin_left = 10
	style.content_margin_right = 10
	style.content_margin_top = 4
	style.content_margin_bottom = 4

	# --- 1. Top-Right Pill Badge ---
	top_panel = PanelContainer.new()
	top_panel.mouse_filter = Control.MOUSE_FILTER_IGNORE
	top_panel.add_theme_stylebox_override("panel", style)
	
	var top_label := Label.new()
	top_label.mouse_filter = Control.MOUSE_FILTER_IGNORE
	top_label.text = BRAND_TEXT_TOP
	top_label.add_theme_font_size_override("font_size", 14)
	top_label.add_theme_color_override("font_color", Color(1.0, 0.88, 0.35, 1.0))
	top_label.add_theme_color_override("font_shadow_color", Color(0, 0, 0, 0.95))
	top_label.add_theme_constant_override("shadow_offset_x", 1)
	top_label.add_theme_constant_override("shadow_offset_y", 1)
	top_panel.add_child(top_label)

	root_ctrl.add_child(top_panel)

	# --- 2. Bottom-Left Badge ---
	var style_bot := style.duplicate() as StyleBoxFlat
	style_bot.border_color = Color(0.35, 0.75, 1.0, 0.8) # Cyan/blue accent border
	
	bottom_panel = PanelContainer.new()
	bottom_panel.mouse_filter = Control.MOUSE_FILTER_IGNORE
	bottom_panel.add_theme_stylebox_override("panel", style_bot)

	var bot_label := Label.new()
	bot_label.mouse_filter = Control.MOUSE_FILTER_IGNORE
	bot_label.text = BRAND_TEXT_BOTTOM
	bot_label.add_theme_font_size_override("font_size", 13)
	bot_label.add_theme_color_override("font_color", Color(0.85, 0.95, 1.0, 1.0))
	bot_label.add_theme_color_override("font_shadow_color", Color(0, 0, 0, 0.95))
	bot_label.add_theme_constant_override("shadow_offset_x", 1)
	bot_label.add_theme_constant_override("shadow_offset_y", 1)
	bottom_panel.add_child(bot_label)

	root_ctrl.add_child(bottom_panel)

func _on_resized() -> void:
	if not top_panel or not bottom_panel:
		return
	var vp_rect := get_viewport().get_visible_rect()
	var vp_size := vp_rect.size
	
	# Top-right: 12px margin from top and right
	var top_size := top_panel.get_combined_minimum_size()
	top_panel.position = Vector2(vp_size.x - top_size.x - 12, 10)
	
	# Bottom-left: 12px margin from left and bottom
	var bot_size := bottom_panel.get_combined_minimum_size()
	bottom_panel.position = Vector2(12, vp_size.y - bot_size.y - 10)

func _on_node_added(node: Node) -> void:
	if node is Label:
		if node.text.begins_with("v0.") and not node.text.contains("@good_boy_irl"):
			node.text = node.text + " · PC Port by @good_boy_irl"
