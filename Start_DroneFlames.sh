#!/usr/bin/env bash
# ==============================================================================
# DroneFlames PC Port - Linux Quick Launcher
# Author: @droneflamesmod / @good_boy_irl
# ==============================================================================
set -e

DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
cd "$DIR"

echo "=========================================================="
echo " Starting DroneFlames PC Port (Linux) "
echo "=========================================================="

# Check if Linux engine binary exists
if [ ! -f "$DIR/DroneFlames.x86_64" ]; then
    echo "[!] DroneFlames.x86_64 binary not found in $DIR"
    echo "[*] Launching installer to download runtime and setup dependencies..."
    if [ -f "$DIR/install.sh" ]; then
        bash "$DIR/install.sh" --in-place
    else
        echo "[-] Error: install.sh not found in $DIR"
        exit 1
    fi
fi

if [ ! -f "$DIR/DroneFlames.x86_64" ]; then
    echo "[-] Error: Failed to find or download DroneFlames.x86_64"
    exit 1
fi

chmod +x "$DIR/DroneFlames.x86_64"

# Handle display server environment
EXTRA_ARGS=()
if [ -n "$DRONEFLAMES_DRIVER" ]; then
    EXTRA_ARGS+=(--display-driver "$DRONEFLAMES_DRIVER")
elif [ -n "$HYPRLAND_INSTANCE_SIGNATURE" ] || [ "$XDG_SESSION_TYPE" = "wayland" ]; then
    # Wayland / Hyprland detected
    echo "[i] Running in Wayland/Hyprland session"
fi

exec "$DIR/DroneFlames.x86_64" --path "$DIR" "${EXTRA_ARGS[@]}" "$@"
