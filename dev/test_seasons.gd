extends SceneTree


func _initialize() -> void:
	_run.call_deferred()


func _run() -> void:
	var legacy := WorldSettings.new()
	Save.fill(legacy, {"world_seed": 42})
	assert(not legacy.seasons_enabled(), "Legacy map should retain its previous appearance")

	GameConfig.tutorial = false
	GameConfig.season_start = 3
	GameConfig.season_length_i = 0
	var map := WorldSettings.new()
	map.world_seed = 42
	GameConfig.apply_map(map, true)
	map.size = 256
	assert(map.season_start == 3 and map.season_minutes == 2)
	assert(is_equal_approx(map.season_phase(60.0), 3.5))
	assert(is_zero_approx(map.season_phase(120.0)))
	assert(is_equal_approx(map.season_phase(4.0 * 120.0 + 60.0), 3.5))

	var restored := WorldSettings.new()
	Save.fill(restored, Save.dump(map))
	assert(restored.season_start == 3 and restored.season_minutes == 2)

	var sample := WorldData.new(4, 4, 42)
	sample.biome.fill(Biome.SHALLOW)
	sample.set_biome(1, 2, Biome.ROAD)
	sample.lakes.append([Rect2i(1, 1, 2, 2), PackedByteArray([1, 0, 1, 2])])
	var surface: PackedByteArray = preload("res://world/season_weather.gd").surface_mask(sample)
	assert(surface[5] == Biome.RIVER and surface[10] == Biome.RIVER)
	assert(surface[6] == Biome.SHALLOW and surface[9] == Biome.ROAD)
	assert(sample.get_biome(1, 1) == Biome.SHALLOW, "Ice rendering must preserve the simulation biome")

	var world := GameWorld.new()
	root.add_child(world)
	world.set_process(false)
	world.new_world(restored)
	assert(world.terrain.material is ShaderMaterial)
	assert(world.weather.is_processing())

	GameConfig.power_save = false
	GameConfig.fx_level = 1
	GameConfig.precipitation = true
	world.game_time = 120.0
	await process_frame
	await process_frame
	assert(is_zero_approx(world.weather.phase))
	assert(world.weather.visible)

	GameConfig.precipitation = false
	await process_frame
	await process_frame
	assert(not world.weather.visible)
	assert(world.terrain.material is ShaderMaterial)

	var camera := MapCamera.new()
	world.camera = camera
	world.add_child(camera)
	camera.world_px = Vector2(256, 256) * GameWorld.CELL
	camera.position = camera.world_px * 0.5
	world.game_time = 402.0
	await process_frame
	await process_frame
	world.objects._process(0.2)
	assert(world.objects.autumn_level == 8 and not world.objects.autumn_sprites.is_empty())
	world.game_time = 240.0
	await process_frame
	await process_frame
	world.objects._process(0.2)
	assert(world.objects.autumn_level == 0)

	world.data.biome.fill(Biome.GRASS)
	world.data.flags.fill(0)
	for y: int in world.data.h:
		for x: int in range(96, 104):
			world.data.set_biome(x, y, Biome.RIVER)
	world.data.set_biome(106, 20, Biome.OCEAN)
	world.game_time = 30.0
	world.econ.build_nav()
	var from := Vector2(360, 82)
	var across := Vector2(458, 82)
	assert(world.army.ground_at(Vector2(400, 82)) == 1)
	assert(world.army.ground_at(Vector2(426, 82)) == 0)
	world.econ.nav_path(from, across)
	assert(world.econ.nav_last_ok, "A frozen river should connect its banks")
	var on_ice := Unit.new()
	on_ice.pos = Vector2(400, 82)
	world.army.units.append(on_ice)
	world.game_time = 240.0
	world.econ.refresh_seasonal_navigation()
	assert(world.army.ground_at(Vector2(400, 82)) == 0)
	assert(on_ice.pos != Vector2(400, 82) and on_ice.alive())
	world.econ.nav_path(from, across)
	assert(not world.econ.nav_last_ok, "Thawing should close the river crossing")
	var road: Array[Vector2i] = []
	for x: int in range(110, 154):
		var cell := Vector2i(x, 48)
		world.data.add_flag(cell.x, cell.y, WorldData.F_ROAD)
		road.append(cell)
	world.road_paths.assign([road])
	world.ground._rebuild_road_marks(Rect2i(109, 45, 46, 8))
	assert(world.ground._road_marks.size() >= 30)
	world.life._populate_road_traffic(Rect2(420, 170, 240, 75), true)
	var car: Dictionary = {}
	for agent: Dictionary in world.life.agents:
		if int(agent["type"]) == LifeLayer.ROAD_CAR:
			car = agent
			break
	assert(not car.is_empty())
	var previous: Vector2 = car["pos"]
	assert(world.life._drive_road_car(car, 0.15))
	assert(car["pos"] != previous)
	var blocked: Vector2i = road[int(car["i"]) + int(car["step"])]
	world.data.clear_flag(blocked.x, blocked.y, WorldData.F_ROAD)
	assert(not world.life._drive_road_car(car, 0.15))
	legacy.size = 256
	world.new_world(legacy)
	assert(world.terrain.material == null)
	assert(not world.weather.is_processing() and not world.weather.visible)
	world.free()
	print("[SEASONS-TEST] PASS: setup, calendar, serialization, world reset, graphics toggle, ice crossings, road marks and traffic")
	quit()
