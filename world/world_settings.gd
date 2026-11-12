class_name WorldSettings
extends Resource


const SIZE_PRESETS: Array = [[512, "МАЛЫЙ"], [1024, "СРЕДНИЙ"], [2048, "БОЛЬШОЙ"], [4096, "ОГРОМНЫЙ"]]

@export var world_seed: int = 20261016
@export var size: int = 1024
@export_range(15, 85) var land_percent: int = 42
@export_range(1, 8) var continents: int = 3
@export_range(0, 100) var islands: int = 35
@export_range(0, 60) var rivers: int = 22
@export_range(0, 100) var mountains: int = 40
@export_range(0, 100) var forests: int = 50


@export var gen_version: int = 2



@export var map_type: int = 0


@export var lakes: int = -1


const SEASON_NAMES: Array[String] = ["ВЕСНА", "ЛЕТО", "ОСЕНЬ", "ЗИМА"]
const SEASON_LENGTHS: Array[int] = [2, 4, 8]

# Older saves lack this field and retain their original appearance.
@export var season_start: int = -1
@export var season_minutes: int = 4

var layout_size: int = 0


func seasons_enabled() -> bool:
	return season_start >= 0 and season_start < SEASON_NAMES.size()


func season_phase(game_time: float) -> float:
	var seconds: float = float(clampi(season_minutes, 2, 8)) * 60.0
	return fposmod(float(season_start) + maxf(game_time, 0.0) / seconds, 4.0)
