#!/usr/bin/env bash
set -euo pipefail
dir="$(cd -- "$(dirname -- "${BASH_SOURCE[0]}")" && pwd -P)"
args=()
if [[ -n "${DRONEFLAMES_DRIVER:-}" ]]; then
    args+=(--display-driver "$DRONEFLAMES_DRIVER")
fi
if [[ -f "$dir/DroneFlames.pck" ]]; then
    export DF_LINUX_INSTALLER="$dir/install.sh"
    exec "$dir/DroneFlames.x86_64" --main-pack "$dir/DroneFlames.pck" "${args[@]}" "$@"
fi
if [[ -x "$dir/DroneFlames.x86_64" && -f "$dir/project.godot" ]]; then
    exec "$dir/DroneFlames.x86_64" --path "$dir" "${args[@]}" "$@"
fi
echo 'Сначала запустите bash install.sh.' >&2
exit 1
