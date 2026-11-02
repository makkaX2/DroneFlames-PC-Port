class_name CreateNukeSave
extends RefCounted

func run(main: Node) -> void:
	print("[CREATE_SAVE] Starting automated nuclear save preparation...")
	var tree: SceneTree = main.get_tree()

	# 1. Wait for Main Menu to be shown
	for wait_i in range(50):
		if main.menus and main.menus.visible and main.menus.screen != null:
			break
		await tree.create_timer(0.2).timeout

	print("[CREATE_SAVE] Main menu visible. Starting standard match...")
	GameConfig.map_type = 0 # Standard map
	main._new_game()

	# Wait for loading screen to complete
	for wait_l in range(120):
		if not main.loading.visible:
			break
		await tree.create_timer(0.1).timeout

	print("[CREATE_SAVE] Map loaded! Waiting for world stabilization...")
	await tree.create_timer(2.0).timeout

	if main.world:
		main.world._landmasses()
		var target_c: Vector2i = main.world._find_capital_spot(-1)
		print("[CREATE_SAVE] Found capital spot: ", target_c)
		if target_c.x >= 0:
			var cap = main.world.place_player_capital(target_c)
			print("[CREATE_SAVE] Capital placed: ", cap != null)
		main._set_mode(0) # Mode.NONE
		if main.hud:
			main.hud.refresh()

		var p = main.world.player
		if p != null:
			p.money = 250000
			p.uranium = 500
			p.metal = 5000

			var mm = main.get_node_or_null("/root/ModManager")
			var ns = null
			if mm:
				if not mm.installed_mods.has("nuclear_strike"):
					mm.install_builtin_mod("nuclear_strike")
				if mm.installed_mods.has("nuclear_strike"):
					var entry = mm.installed_mods["nuclear_strike"]
					if not entry.get("_loaded", false):
						mm._load_mod("nuclear_strike")
					ns = entry.get("_instance")

			print("[CREATE_SAVE] Nuclear Strike instance: ", ns)
			assert(ns != null, "Nuclear Strike mod must be active!")

			var base_cell = Vector2i(-1, -1)
			for cy in range(60, main.world.data.h - 60, 15):
				for cx in range(60, main.world.data.w - 60, 15):
					var ok = true
					for dy in range(20):
						for dx in range(20):
							var b = main.world.data.get_biome(cx + dx, cy + dy)
							if Biome.is_water(b):
								ok = false
								break
						if not ok:
							break
					if ok:
						base_cell = Vector2i(cx, cy)
						break
				if base_cell.x != -1:
					break

			print("[CREATE_SAVE] Base land cell found: ", base_cell)
			assert(base_cell.x != -1, "Must find land for missile base!")

			# Claim 20x20 land for player
			for dy in range(20):
				for dx in range(20):
					main.world.data.set_owner_id(base_cell.x + dx, base_cell.y + dy, p.id)

			var placed_silos: Array = []
			var spots = [base_cell + Vector2i(2, 2), base_cell + Vector2i(8, 2), base_cell + Vector2i(2, 8)]
			for spot in spots:
				if placed_silos.size() >= 2:
					break
				var why = ns.place_why(spot)
				print("[CREATE_SAVE] Checking spot ", spot, ": why='", why, "'")
				if why == "":
					ns.place_silo_at(spot)
					var fac = main.world.mil.facilities[main.world.mil.facilities.size() - 1]
					fac.set_meta("has_warhead", true)
					fac.missiles = 1
					placed_silos.append(fac)
					print("[CREATE_SAVE] Silo placed successfully at ", spot)

			print("[CREATE_SAVE] Total placed silos: ", placed_silos.size())
			assert(placed_silos.size() > 0, "At least one silo must be placed!")

			if main.cam and placed_silos.size() > 0:
				main.cam.set_zoom_at(1.6, main.cam.view_size() * 0.5)
				main.cam.center_on(placed_silos[0].center_px())

			# Select first silo
			main.selected_fac = placed_silos[0]
			if ns:
				ns._update_native_card(placed_silos[0])

			await tree.create_timer(1.0).timeout
			await RenderingServer.frame_post_draw

			# Save to Slot 1
			Save.use_slot(1)
			var ok: bool = Save.save_game(main)
			print("[CREATE_SAVE] Saved to Slot 1: ", ok)

			await tree.create_timer(0.5).timeout
			await RenderingServer.frame_post_draw
			_snap(main, "res://verify_nuke_save_slot_1.png")
			print("[CREATE_SAVE] Saved verification screenshot: verify_nuke_save_slot_1.png")

	print("[CREATE_SAVE] SUCCESS! Nuclear strike save ready on Slot 1.")
	tree.quit(0)

func _snap(main: Node, path: String) -> void:
	var vp: Viewport = main.get_viewport()
	if vp:
		var tex: Texture2D = vp.get_texture()
		if tex:
			var img: Image = tex.get_image()
			if img and not img.is_empty():
				img.save_png(path)
