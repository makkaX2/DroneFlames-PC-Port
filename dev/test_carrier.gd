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
	var foe: Country = world.create_country(false, true)
	world.player = player
	player.money = 90000
	player.metal = 500
	player.wood = 500
	player.titanium = 500
	player.fuel = 150
	world.data.owners.fill(player.id)
	world.data.flags.fill(0)
	for y: int in world.data.h:
		for x: int in world.data.w:
			world.data.set_biome(x, y, Biome.GRASS if x < 120 else Biome.DEEP)
	var field: Facility = world.mil.build(Facility.Kind.AIRFIELD, Vector2i(85, 112), player)
	assert(field != null)
	var yard: Facility = null
	for x: int in range(113, 126):
		yard = world.mil.build(Facility.Kind.NAVAL_BASE, Vector2i(x, 123), player)
		if yard != null:
			break
	assert(yard != null, "Fixture coast must support a shipyard")
	yard.restore_t = 0.0
	world.navy.on_base_built(yard)
	var air: Air = world.mil.air
	var cost: int = player.money
	var order: String = world.navy.order(yard, Ship.Hull.CARRIER, [])
	assert(order.is_empty(), order)
	assert(player.money == cost - 25000)
	world.navy._produce(220.0)
	var ship: Ship = world.navy.ships[0]
	assert(ship.hull == Ship.Hull.CARRIER)
	ship.pos = Vector2(730, 650)
	assert(air.set_deck_auto(player.id, ship.id, false).is_empty())
	assert(not air.buy_deck_fighter(foe.id, ship.id).is_empty())
	assert(air.buy_deck_fighter(player.id, ship.id).is_empty())
	assert(air.buy_deck_fighter(player.id, ship.id).is_empty())
	var flight: Aircraft = air.aircraft[0]
	var parked: Aircraft = air.aircraft[1]
	var initial_pos: Vector2 = parked.pos
	ship.pos += Vector2(25, 30)
	ship.heading = PI * 0.5
	_step(world)
	assert(parked.pos != initial_pos and parked.pos == air.home_pos(parked))
	assert(air.order_fly(flight, ship.pos + Vector2(150, 0)).is_empty())
	for i: int in 100:
		_step(world)
		if flight.state == Aircraft.State.FLY and flight.pos.distance_to(ship.pos) > 55.0:
			break
	assert(flight.state == Aircraft.State.FLY)
	air.order_land(flight)
	for i: int in 500:
		ship.pos += Vector2(0.1, 0)
		_step(world)
		if flight.state == Aircraft.State.PARKED:
			break
	assert(flight.state == Aircraft.State.PARKED and flight.pos == air.home_pos(flight))

	assert(air.buy(field, Aircraft.Type.HELI, player).is_empty())
	var heli: Aircraft = air.aircraft[2]
	assert(air.order_fly(heli, ship.pos).is_empty())
	for i: int in 35:
		_step(world)
	assert(air.transfer_to_carrier(heli, ship.pos).is_empty())
	for i: int in 500:
		_step(world)
		if heli.state == Aircraft.State.PARKED:
			break
	assert(heli.carrier_id == ship.id and heli.state == Aircraft.State.PARKED)
	for slot: int in range(3, Air.DECK_CAPACITY):
		assert(air.buy_deck_fighter(player.id, ship.id).is_empty())
	assert(not air.buy_deck_fighter(player.id, ship.id).is_empty())

	var ship_id: int = ship.id
	var saved: Dictionary = Save._snapshot(holder)[1]
	world.new_world(settings)
	Save._load_core(world, saved)
	Save._load_systems(world, saved["sys"])
	Save._finish(world, saved["core"])
	air = world.mil.air
	ship = world.navy.ship(ship_id)
	player = world.player
	assert(ship.hull == Ship.Hull.CARRIER and not ship.deck_auto and air.deck_aircraft(ship).size() == Air.DECK_CAPACITY)
	flight = air.aircraft[0]
	parked = air.aircraft[1]
	assert(air.order_fly(flight, ship.pos + Vector2(170, 0)).is_empty())
	for i: int in 50:
		_step(world)
	assert(flight.airborne())
	world.navy.damage(ship, 5000.0, foe.id, "strike")
	assert(not ship.alive())
	assert(parked.state == Aircraft.State.DEAD)
	assert(flight.state == Aircraft.State.RTB and flight.carrier_id == 0 and flight.base != null)
	for i: int in 600:
		_step(world)
		if flight.state == Aircraft.State.PARKED:
			break
	assert(flight.state == Aircraft.State.PARKED and flight.base.kind == Facility.Kind.AIRFIELD)
	var next_ship: Ship = world.navy.spawn_ship(world.mil.facilities[yard.id], Ship.Hull.CARRIER, [])
	next_ship.pos = Vector2(740, 650)
	assert(air.buy_deck_fighter(player.id, next_ship.id).is_empty())
	var defender: Aircraft = air.deck_aircraft(next_ship)[0]
	defender.missiles = 2
	defender.service_t = 0.0
	world.diplo.declare_war(player.id, foe.id, "test")
	var target := Aircraft.new()
	target.country_id = foe.id
	target.state = Aircraft.State.ORBIT
	target.h = 10.0
	target.pos = next_ship.pos + Vector2(130, 0)
	assert(air.set_deck_auto(player.id, next_ship.id, false).is_empty())
	air.aircraft.append(target)
	air._step_deck_aircraft(defender, 0.1)
	assert(defender.state == Aircraft.State.PARKED)
	assert(air.set_deck_auto(player.id, next_ship.id, true).is_empty())
	air._step_deck_aircraft(defender, 0.1)
	assert(defender.state == Aircraft.State.LIFT and defender.deck_auto_sortie)
	air.aircraft.erase(target)
	holder.free()
	print("[CARRIER-TEST] PASS")
	quit()


func _step(world: GameWorld) -> void:
	const DT: float = 0.1
	world.game_time += DT
	world.mil.air.update(DT)
