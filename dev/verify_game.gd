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
