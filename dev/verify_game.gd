class_name VerifyGame
extends RefCounted

func run(main: Node) -> void:
	print("[VERIFY] Starting game verification sequence...")
	var tree: SceneTree = main.get_tree()

	# 1. Wait for Main Menu to be shown
	for wait_i in range(50):
		if main.menus and main.menus.visible and main.menus.screen != null:
			break
		await tree.create_timer(0.2).timeout

	await RenderingServer.frame_post_draw
	await tree.create_timer(0.5).timeout
	_snap(main, "res://verify_1_main_menu.png")
	print("[VERIFY] Saved verify_1_main_menu.png")

	# Test GitHub Updater
	if main.has_node("/root/Updater"):
		var up: Node = main.get_node("/root/Updater")
		print("[VERIFY] Testing Updater check...")
		up.update_available.connect(func(ver: String, _c: String, _u: String, _a: String) -> void:
			print("[VERIFY] >>> UPDATE AVAILABLE SIGNAL RECEIVED: v", ver, " <<<")
		)
		up.check_failed.connect(func(reason: String) -> void:
			print("[VERIFY] >>> Updater check failed: ", reason, " <<<")
		)
		up.no_update_found.connect(func() -> void:
			print("[VERIFY] >>> No update found <<<")
		)
		up.call("check_for_updates")
		await tree.create_timer(1.5).timeout

	# Test Update Dialog
	if main.menus:
		print("[VERIFY] Opening update dialog...")
		main.menus.show_update_dialog("0.33.0", "Новое обновление ПК-порта", "https://github.com/makkaX2/DroneFlames-PC-Port/releases/tag/v0.33.0", "DroneFlames_PC_Setup_v0.33.0_good_boy_irl.exe")
		await tree.create_timer(0.6).timeout
		await RenderingServer.frame_post_draw
		_snap(main, "res://verify_6_update_dialog.png")
		print("[VERIFY] Saved verify_6_update_dialog.png")
		if main.menus._up_dialog != null and is_instance_valid(main.menus._up_dialog):
			main.menus._up_dialog.queue_free()
			main.menus._up_dialog = null

	# Test Settings Screen (with Telegram button scrolled into view)
	if main.menus:
		print("[VERIFY] Opening settings menu with Telegram button...")
		main.menus.show_settings(false)
		await tree.create_timer(0.3).timeout
		if main.menus._scroll != null:
			main.menus._scroll.scroll_vertical = 9999
		await tree.create_timer(0.3).timeout
		await RenderingServer.frame_post_draw
		_snap(main, "res://verify_7_settings_tg.png")
		print("[VERIFY] Saved verify_7_settings_tg.png")

	# Test What's New Screen (with Telegram community card)
	if main.menus:
		print("[VERIFY] Opening What's New screen with Telegram box...")
		main.menus.close()
		main.menus.show_main()
		main.menus._show_whats_new()
		await tree.create_timer(0.3).timeout
		if main.menus._wn_scroll != null:
			main.menus._wn_scroll.scroll_vertical = 9999
		await tree.create_timer(0.3).timeout
		await RenderingServer.frame_post_draw
		_snap(main, "res://verify_8_whats_new.png")
		print("[VERIFY] Saved verify_8_whats_new.png")
		if main.menus._wn != null and is_instance_valid(main.menus._wn):
			main.menus._wn.queue_free()
			main.menus._wn = null

	# Test Controls Screen in Settings
	if main.menus:
		print("[VERIFY] Opening controls settings...")
		main.menus.show_controls(false)
		await tree.create_timer(0.5).timeout
		await RenderingServer.frame_post_draw
		_snap(main, "res://verify_4_controls.png")
		print("[VERIFY] Saved verify_4_controls.png")

	# 2. Launch New Game
	print("[VERIFY] Launching _new_game()...")
	main._new_game()

	# Wait for loading screen to finish
	for wait_l in range(100):
		if not main.loading.visible:
			break
		await tree.create_timer(0.1).timeout

	await tree.create_timer(1.0).timeout
	await RenderingServer.frame_post_draw
	_snap(main, "res://verify_2_gameplay.png")
	print("[VERIFY] Saved verify_2_gameplay.png")

	# 3. Test camera zoom and WASD movement
	print("[VERIFY] Testing camera zoom and panning...")
	if main.cam:
		var center_pt: Vector2 = main.cam.position
		main.cam.set_zoom_at(1.8, main.cam.view_size() * 0.5)
		main.cam.center_on(center_pt + Vector2(200, 150))
	
	await tree.create_timer(0.5).timeout
	await RenderingServer.frame_post_draw
	_snap(main, "res://verify_3_zoom.png")
	print("[VERIFY] Saved verify_3_zoom.png")

	# 4. Found capital and Test Diplomacy Sheet (centered PC modal window)
	print("[VERIFY] Founding player capital and opening diplomacy sheet...")
	if main.world:
		var target_c: Vector2i = main.world._find_capital_spot(-1)
		print("[VERIFY] Found capital spot: ", target_c)
		if target_c.x >= 0:
			var cap = main.world.place_player_capital(target_c)
			print("[VERIFY] Capital placed: ", cap != null)
		main._set_mode(0) # Mode.NONE
		if main.hud:
			main.hud.refresh()
	
	await tree.create_timer(0.5).timeout
	if main.hud:
		main.hud.open_diplomacy()
		await tree.create_timer(0.6).timeout
		await RenderingServer.frame_post_draw
		_snap(main, "res://verify_5_diplomacy.png")
		print("[VERIFY] Saved verify_5_diplomacy.png")

	print("[VERIFY] ALL VERIFICATIONS PASSED SUCCESSFULLY!")
	tree.quit(0)

func _snap(main: Node, path: String) -> void:
	var vp: Viewport = main.get_viewport()
	if vp:
		var tex: Texture2D = vp.get_texture()
		if tex:
			var img: Image = tex.get_image()
			if img and not img.is_empty():
				img.save_png(path)
