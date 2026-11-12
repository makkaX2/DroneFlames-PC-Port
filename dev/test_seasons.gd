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

	legacy.size = 256
	world.new_world(legacy)
	assert(world.terrain.material == null)
	assert(not world.weather.is_processing() and not world.weather.visible)
	world.free()
	print("[SEASONS-TEST] PASS: setup, calendar, serialization, world reset and graphics toggle")
	quit()
