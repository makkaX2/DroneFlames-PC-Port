extends SceneTree

const StrikeHubScript = preload("res://game/strike_hub.gd")


func _initialize() -> void:
	_run()


func _run() -> void:
	var previous: bool = GameConfig.nuclear_weapons_enabled
	assert(WorldSettings.new().nuclear_weapons_enabled, "New games default to nuclear weapons enabled")
	assert(Save.PREFS.has("nuclear_weapons_enabled"), "The setup preference must persist")
	var settings := WorldSettings.new()
	GameConfig.nuclear_weapons_enabled = false
	var unchanged := WorldSettings.new()
	GameConfig.apply_map(unchanged, false)
	assert(unchanged.nuclear_weapons_enabled, "Non-consuming map previews must not change match rules")
	GameConfig.apply_map(settings, true)
	assert(not settings.nuclear_weapons_enabled)

	var world := GameWorld.new()
	world.settings = settings
	assert(not Nuclear.weapons_enabled(world))

	var packed: Dictionary = Save.dump(settings)
	var restored := WorldSettings.new()
	Save.fill(restored, packed)
	assert(not restored.nuclear_weapons_enabled)
	world.settings = restored
	assert(not Nuclear.weapons_enabled(world))
	assert(not StrikeHubScript.active_w_ids(world).has("nuke"), "Disabled nuclear weapons must leave the strike list")

	GameConfig.nuclear_weapons_enabled = true
	GameConfig.apply_map(settings, true)
	assert(settings.nuclear_weapons_enabled)
	assert(Nuclear.weapons_enabled(world) == false, "Existing world settings must not change with lobby preferences")
	world.settings = settings
	assert(Nuclear.weapons_enabled(world), "The enabled rule must preserve nuclear availability")

	var mod_script: Script = load("res://mods/nuclear_strike/mod.gd")
	var nuclear_mod: Object = mod_script.new()
	world.settings = restored
	nuclear_mod.world_ref = world
	assert(nuclear_mod.place_why(Vector2i.ZERO) == "Ядерное оружие отключено в правилах партии")
	assert(not nuclear_mod.launch_strike_from_silo(null, Vector2.ZERO))

	nuclear_mod.world_ref = null
	GameConfig.nuclear_weapons_enabled = previous
	world.free()
	print("Nuclear match rule checks passed.")
	quit()
