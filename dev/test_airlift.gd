extends SceneTree


class SaveFixture extends Node:
	var world: GameWorld
	var cam: MapCamera
	var _speed_i: int = 0


func _initialize() -> void:
	_run.call_deferred()


func _run() -> void:
	var holder := SaveFixture.new()
	root.add_child(holder)
	var world := GameWorld.new()
	holder.world = world
	holder.add_child(world)
	world.set_process(false)
	var settings := WorldSettings.new()
	settings.size = 256
	world.new_world(settings)
	var player: Country = world.create_country(true, true)
	world.player = player
	player.money = 90000
	player.metal = 500
	player.wood = 500
	player.titanium = 500
	player.food = 500
	player.fuel = 150
	world.data.owners.fill(player.id)
	world.data.biome.fill(Biome.GRASS)
	world.data.flags.fill(0)
	world.econ.build_nav()

	var base: Facility = world.mil.build(Facility.Kind.AIRBASE, Vector2i(105, 90), player)
	var field: Facility = world.mil.build(Facility.Kind.AIRFIELD, Vector2i(175, 90), player)
	var home: Facility = world.mil.build(Facility.Kind.BARRACKS, Vector2i(105, 130), player)
	assert(base != null and field != null and home != null)
	var air: Air = world.mil.air
	assert(not air.buy(field, Aircraft.Type.TRANSPORT, player).is_empty())
	assert(air.buy(base, Aircraft.Type.TRANSPORT, player).is_empty())
	assert(air.buy(base, Aircraft.Type.TRANSPORT_HELI, player).is_empty())
	assert(air.buy(base, Aircraft.Type.TRANSPORT, player).is_empty())
	assert(not air.buy(base, Aircraft.Type.TRANSPORT_HELI, player).is_empty())
	assert(air.free_spot(base, Aircraft.Type.FIGHTER) >= 0)
	assert(1 + Air.AIRBASE_COMBAT.size() + Air.AIRBASE_TRANSPORT.size() == 13)

	home.prod_type = 3
	var members: Array[Unit] = []
	for type: int in [Unit.Type.IFV, Unit.Type.INFANTRY, Unit.Type.ATGM, Unit.Type.ASSAULT, Unit.Type.INFANTRY, Unit.Type.INFANTRY, Unit.Type.INFANTRY, Unit.Type.TANK]:
		members.append(world.army._spawn(home, type))
	var drop := Vector2(742, 602)
	world.data.set_biome(80, 80, Biome.OCEAN)
	assert(air.airlift_plan(home, Vector2(322, 322)).has("why"))
	var plan: Dictionary = air.airlift_plan(home, drop)
	assert(not plan.has("why"), str(plan))
	assert((plan["aircraft"] as Aircraft).type == Aircraft.Type.TRANSPORT)
	assert((plan["units"] as Array).size() == 6)
	assert((plan["units"] as Array).has(members[0]))
	assert(air.start_airlift(home, drop).is_empty())
	assert(not air.start_airlift(home, drop).is_empty())
	assert(not air.order_fly(air.aircraft[0], drop).is_empty())
	assert(not world.ops.start(home, Operations.Kind.DEFEND, drop).is_empty())
	var aircraft: Aircraft = plan["aircraft"]
	for i: int in 1200:
		_step(world)
		if int(air.airlifts.get(home, {}).get("stage", -1)) == Air.AirliftStage.FLYING:
			break
	assert(air.airlift_aboard(home).size() == 6, str(air.airlifts))
	assert(world.army.count_units(player.id) == 8)
	assert(world.army.army_brief(home)["n"] == 8)
	assert(not world.army.units.has(members[0]))
	assert(not world.mil.demolish_why(player, home).is_empty())

	var home_id: int = home.id
	var plane_id: int = aircraft.id
	var saved: Dictionary = Save._snapshot(holder)[1]
	world.new_world(settings)
	Save._load_core(world, saved)
	Save._load_systems(world, saved["sys"])
	Save._finish(world, saved["core"])
	air = world.mil.air
	player = world.player
	home = world.mil.facilities[home_id]
	var job: Dictionary = air.airlifts[home]
	aircraft = job["aircraft"]
	assert(aircraft.id == plane_id and (job["units"] as Array).size() == 6)
	assert(world.army.count_units(player.id) == 8)
	var saw_descent: bool = false
	for i: int in 2400:
		_step(world)
		saw_descent = saw_descent or int(air.airlifts.get(home, {}).get("stage", -1)) == Air.AirliftStage.DESCENT
		if not air.airlift_busy(home) and aircraft.state == Aircraft.State.PARKED:
			break
	assert(saw_descent and not air.airlift_busy(home) and aircraft.state == Aircraft.State.PARKED)
	assert(world.army.count_units(player.id) == 8)
	var landed: Array[Unit] = []
	for u: Unit in world.army.units_of(home):
		if u.pos.distance_to(drop) < 26.0:
			landed.append(u)
	assert(landed.size() == 6)
	assert(home.airlift_ready_at > world.game_time)

	var heli: Aircraft = air.aircraft[1]
	base = heli.base
	base.craters.append(base.origin_px())
	home.airlift_ready_at = 0.0
	var staging: Vector2 = base.origin_px() + Vector2(68, 94)
	for u: Unit in world.army.units_of(home):
		u.pos = staging
		u.path.clear()
		u.pi = 0
	world.econ.nav = null
	assert(air.start_airlift(home, drop).is_empty())
	assert(air.airlifts[home]["aircraft"] == heli)
	assert((air.airlifts[home]["units"] as Array).size() == 3)
	_step(world)
	assert(air.airlift_aboard(home).size() == 3)
	air.cancel_airlift(home)
	for i: int in 400:
		_step(world)
		if not air.airlift_busy(home):
			break
	assert(not air.airlift_busy(home) and world.army.count_units(player.id) == 8)
	assert(heli.state == Aircraft.State.PARKED)
	assert(air.start_airlift(home, drop).is_empty())
	for i: int in 2000:
		_step(world)
		if not air.airlift_busy(home):
			break
	assert(not air.airlift_busy(home) and home.airlift_ready_at > world.game_time)
	landed.clear()
	for u: Unit in world.army.units_of(home):
		if u.pos.distance_to(drop) < 26.0:
			assert(u.foot())
			landed.append(u)
	assert(landed.size() == 3)
	for i: int in 1500:
		_step(world)
		if heli.state == Aircraft.State.PARKED and heli.fuel > 2700.0:
			break
	home.airlift_ready_at = 0.0
	for u: Unit in world.army.units_of(home):
		u.pos = staging
	assert(air.start_airlift(home, drop).is_empty())
	_step(world)
	assert(air.airlift_aboard(home).size() == 3)
	air._shot_down(heli, "тест")
	_step(world)
	assert(not air.airlift_busy(home) and world.army.count_units(player.id) == 5)
	holder.free()
	print("[AIRLIFT-TEST] PASS")
	quit()


func _step(world: GameWorld) -> void:
	const DT: float = 0.1
	world.game_time += DT
	world.mil.air.update(DT)
	world.army.update(DT)
