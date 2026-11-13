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

	var site := Vector2i(128, 128)
	var capital := City.new()
	capital.id = 0
	capital.name = "Test Capital"
	capital.kind = City.Kind.CAPITAL
	capital.center = Vector2i(90, 128)
	capital.country_id = player.id
	capital.residents = 1400
	world.cities.append(capital)
	player.city_ids.append(capital.id)
	assert(not Airport.site_reason(world, player, site).is_empty())
	var town := City.new()
	town.id = 1
	town.kind = City.Kind.TOWN
	town.center = Vector2i(218, 128)
	town.country_id = player.id
	world.cities.append(town)
	player.city_ids.append(town.id)

	var airport: Facility = world.mil.build(Facility.Kind.CIV_AIRPORT, site, player)
	assert(airport != null and world.mil.alive(airport))
	assert(airport.obj_ids.size() >= 4 and airport.civil_city_id == capital.id)
	assert(not Airport.site_reason(world, player, Vector2i(91, 90)).is_empty())
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
	assert(airport.civil_passengers == 70)
	world.econ._produce()
	assert(player.money == cash + Airport.LANDING_FEE, "A landing must only pay once")

	var restored := Facility.new()
	Save.fill(restored, Save.dump(airport))
	assert(restored.kind == Facility.Kind.CIV_AIRPORT and restored.civil_next_arrival == 70.0)
	assert(restored.civil_city_id == capital.id and restored.civil_passengers == 70)
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
	airport.civil_flights = 3
	player.precious = world.econ.res_cap(player, "precious") - 1
	var stock: int = player.precious
	cash = player.money
	world.game_time = 120.0
	world.econ._produce()
	assert(airport.civil_cargo > 0 and airport.civil_export > 0)
	assert(player.precious == stock - airport.civil_cargo)
	assert(player.money == cash + Airport.LANDING_FEE + airport.civil_export)

	var transit := Country.new()
	transit.id = 2
	world.countries.append(transit)
	var adversary := Country.new()
	adversary.id = 3
	world.countries.append(adversary)
	transit.at_war[adversary.id] = true
	for y: int in range(64, 160):
		for x: int in range(62, 107):
			world.data.set_owner_id(x, y, transit.id)
	world.game_time = 130.0
	world.econ._produce()
	var blocked: PackedByteArray = Airport._airspace(world, player)
	assert(Airport._route_open(world.data, blocked, airport.civil_inbound))
	assert(Airport._route_open(world.data, blocked, airport.civil_outbound))
	assert(airport.civil_inbound[-1].y != Airport.runway_point(airport).y)
	assert(airport.civil_next_arrival == 150.0)

	world.data.owners.fill(transit.id)
	for y: int in range(114, 145):
		for x: int in range(111, 145):
			world.data.set_owner_id(x, y, player.id)
	cash = player.money
	world.game_time = 150.0
	world.econ._produce()
	assert(airport.civil_route_blocked and airport.civil_next_arrival < 0.0 and player.money == cash)
	world.data.owners.fill(player.id)
	transit.at_war.clear()
	world.game_time = 160.0
	world.econ._produce()
	assert(not airport.civil_route_blocked and airport.civil_next_arrival == 180.0)
	var rw: Vector2i = Vector2i(Airport.runway_point(airport) / GameWorld.CELL)
	world.mil.on_strike(rw, 4.0)
	assert(not airport.runway_ok() and airport.repair_t == 60.0)
	world.econ._produce()
	assert(airport.civil_next_arrival < 0.0)
	world.mil._repair(60.0)
	assert(airport.runway_ok())
	world.econ._produce()
	assert(airport.civil_next_arrival == 180.0)
	var farm: Facility = world.mil.build(Facility.Kind.FARM, Vector2i(175, 155), player)
	assert(farm != null and Military.uses_power(farm.kind))
	farm.powered = false
	var food: int = player.food
	cash = player.money
	world.econ._produce()
	assert(player.food == food and player.money == cash)
	farm.powered = true
	world.econ._produce()
	assert(player.food == food + Economy.FARM_FOOD and player.money == cash + Economy.FARM_MONEY)
	if DisplayServer.get_name() != "headless":
		var camera := MapCamera.new()
		world.camera = camera
		world.add_child(camera)
		camera.world_px = Vector2(world.data.w, world.data.h) * GameWorld.CELL
		camera.position = airport.center_px()
		camera.make_current()
		world.game_time = 169.0
		await RenderingServer.frame_post_draw
		await RenderingServer.frame_post_draw
	world.free()
	print("[AIRPORT-TEST] PASS: placement, passenger income, cargo export, save, war, power, detour, runway closure and farm power")
	quit()
