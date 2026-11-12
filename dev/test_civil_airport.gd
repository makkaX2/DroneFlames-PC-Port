extends SceneTree

const Airport = preload("res://game/civil_airport.gd")


func _initialize() -> void:
	_run.call_deferred()


func _run() -> void:
	var world := GameWorld.new()
	root.add_child(world)
	world.set_process(false)
	var settings := WorldSettings.new()
	settings.size = 256
	world.new_world(settings)
	var player := Country.new()
	player.id = 1
	player.is_player = true
	player.money = 10000
	player.metal = 100
	player.wood = 100
	world.countries.append(player)
	world.player = player
	world.data.owners.fill(player.id)
	world.data.biome.fill(Biome.GRASS)

	var airport: Facility = world.mil.build(Facility.Kind.CIV_AIRPORT, Vector2i(128, 128), player)
	assert(airport != null and world.mil.alive(airport))
	assert(airport.obj_ids.size() >= 4)
	assert(player.money == 7000 and player.metal == 70 and player.wood == 80)
	var cash: int = player.money
	world.game_time = 10.0
	world.econ._produce()
	assert(airport.civil_next_arrival == 30.0 and player.money == cash)
	world.game_time = 29.0
	world.econ._produce()
	assert(player.money == cash)
	world.game_time = 30.0
	world.econ._produce()
	assert(player.money == cash + Airport.LANDING_FEE and airport.civil_next_arrival == 70.0)
	world.econ._produce()
	assert(player.money == cash + Airport.LANDING_FEE, "A landing must only pay once")

	var restored := Facility.new()
	Save.fill(restored, Save.dump(airport))
	assert(restored.kind == Facility.Kind.CIV_AIRPORT and restored.civil_next_arrival == 70.0)
	player.at_war[2] = true
	world.game_time = 80.0
	world.econ._produce()
	assert(airport.civil_next_arrival < 0.0 and player.money == cash + Airport.LANDING_FEE)
	player.at_war.clear()
	airport.powered = false
	world.game_time = 90.0
	world.econ._produce()
	assert(airport.civil_next_arrival < 0.0)
	airport.powered = true
	world.game_time = 100.0
	world.econ._produce()
	assert(airport.civil_next_arrival == 120.0)
	if DisplayServer.get_name() != "headless":
		var camera := MapCamera.new()
		world.camera = camera
		world.add_child(camera)
		camera.world_px = Vector2(world.data.w, world.data.h) * GameWorld.CELL
		camera.position = airport.center_px()
		camera.make_current()
		world.game_time = 119.0
		await RenderingServer.frame_post_draw
		await RenderingServer.frame_post_draw
	world.free()
	print("[AIRPORT-TEST] PASS: construction cost, landing, income, save, war and power")
	quit()
