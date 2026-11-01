#!/usr/bin/env python3
"""
DroneFlames PC Port - Automated Build & Packaging Script
Prepares clean distribution, packages Portable ZIP, and compiles Inno Setup installer.
Author: @good_boy_irl
"""

import os
import sys
import shutil
import zipfile
import subprocess
from pathlib import Path

VERSION = "0.33.0"
if sys.platform == "win32":
    try:
        sys.stdout.reconfigure(encoding="utf-8", errors="replace")
        sys.stderr.reconfigure(encoding="utf-8", errors="replace")
    except Exception:
        pass
APP_NAME = "DroneFlames"
PUBLISHER = "good_boy_irl"

ROOT_DIR = Path(__file__).resolve().parent
BUILD_DIR = ROOT_DIR / "build"
STAGE_NAME = f"{APP_NAME}_PC_v{VERSION}_{PUBLISHER}"
STAGE_DIR = BUILD_DIR / STAGE_NAME
DIST_DIR = ROOT_DIR / "dist"

FOLDERS = [
    "addons",
    "assets",
    "core",
    "dev",
    "game",
    "net",
    "translations",
    "ui",
    "world",
]

ROOT_FILES = [
    "app_icon.ico",
    "assets.sparsepck",
    "DroneFlames.exe",
    "DroneFlames_Debug.exe",
    "icon.svg",
    "icon_ios.png",
    "project.godot",
    "splash.png",
    "watermark.gd",
    "Start_DroneFlames.bat",
    "PORT_CREDITS_good_boy_irl.txt",
    "PORT_BY_GOOD_BOY_IRL.txt",
]

def find_iscc() -> str | None:
    env_path = os.environ.get("ISCC_PATH")
    if env_path and os.path.isfile(env_path):
        return env_path
    
    which_iscc = shutil.which("ISCC.exe") or shutil.which("iscc")
    if which_iscc:
        return which_iscc
    
    candidates = [
        Path(os.environ.get("LOCALAPPDATA", "")) / "Programs" / "Inno Setup 6" / "ISCC.exe",
        Path("C:/Program Files (x86)/Inno Setup 6/ISCC.exe"),
        Path("C:/Program Files/Inno Setup 6/ISCC.exe"),
        Path(os.environ.get("USERPROFILE", "")) / "AppData/Local/Programs/Inno Setup 6/ISCC.exe",
    ]
    for c in candidates:
        if c.is_file():
            return str(c)
    return None

def main():
    print(f"=== Building {APP_NAME} PC Port v{VERSION} by @{PUBLISHER} ===")
    
    # 1. Clean and prepare directories
    if STAGE_DIR.exists():
        print(f"Cleaning existing stage dir: {STAGE_DIR}")
        shutil.rmtree(STAGE_DIR)
    
    STAGE_DIR.mkdir(parents=True, exist_ok=True)
    DIST_DIR.mkdir(parents=True, exist_ok=True)

    # 2. Copy Game Folders
    print("Copying game folders to stage directory...")
    for folder in FOLDERS:
        src = ROOT_DIR / folder
        dst = STAGE_DIR / folder
        if src.exists():
            shutil.copytree(
                src,
                dst,
                ignore=shutil.ignore_patterns(
                    "*.gdc", "*.remap", "*.tmp", "*.log", "__pycache__"
                )
            )

    # 2b. Copy .godot essential runtime cache and imported assets (fixes grey screen on startup)
    godot_src = ROOT_DIR / ".godot"
    godot_dst = STAGE_DIR / ".godot"
    if godot_src.exists():
        print("Copying .godot runtime caches and imported assets...")
        shutil.copytree(
            godot_src,
            godot_dst,
            ignore=shutil.ignore_patterns(
                "editor", "app_userdata", "*.tmp", "*.log"
            )
        )
    else:
        print("  [Warning] .godot directory not found in root! Game may fail with blank/grey screen.")

    # 3. Copy Root Files
    print("Copying root game files...")
    for f in ROOT_FILES:
        src = ROOT_DIR / f
        if src.exists():
            shutil.copy2(src, STAGE_DIR / f)
        else:
            print(f"  [Warning] Missing file: {f}")

    # Ensure Start_DroneFlames.bat is in stage
    stage_launcher = STAGE_DIR / "Start_DroneFlames.bat"
    if not stage_launcher.exists():
        stage_launcher.write_text(
            "@echo off\ntitle DroneFlames PC Port by @good_boy_irl\ncd /d \"%~dp0\"\nstart \"\" \"%~dp0DroneFlames.exe\" --path \"%~dp0.\"\n",
            encoding="utf-8"
        )

    # 4. Create Portable ZIP
    zip_path = DIST_DIR / f"{STAGE_NAME}.zip"
    print(f"Creating Portable ZIP archive: {zip_path.name}...")
    with zipfile.ZipFile(zip_path, "w", zipfile.ZIP_DEFLATED) as zf:
        for file_path in STAGE_DIR.rglob("*"):
            if file_path.is_file():
                arcname = file_path.relative_to(BUILD_DIR)
                zf.write(file_path, arcname)

    zip_size_mb = zip_path.stat().st_size / (1024 * 1024)
    print(f"  [OK] Portable ZIP created: {zip_path.name} ({zip_size_mb:.2f} MB)")

    # 5. Compile Inno Setup Installer
    iscc = find_iscc()
    if iscc:
        print(f"Found Inno Setup compiler: {iscc}")
        iss_path = ROOT_DIR / "installer.iss"
        if iss_path.exists():
            print("Compiling Inno Setup installer...")
            cmd = [
                iscc,
                f"/DMyAppVersion={VERSION}",
                f"/DSourceDir={STAGE_DIR}",
                f"/DOutDir={DIST_DIR}",
                str(iss_path)
            ]
            res = subprocess.run(cmd)
            if res.returncode == 0:
                setup_exe = DIST_DIR / f"{APP_NAME}_PC_Setup_v{VERSION}_{PUBLISHER}.exe"
                if setup_exe.exists():
                    setup_size_mb = setup_exe.stat().st_size / (1024 * 1024)
                    print(f"  [OK] Windows Installer created: {setup_exe.name} ({setup_size_mb:.2f} MB)")
            else:
                print(f"  [Error] Inno Setup compilation failed with code {res.returncode}")
        else:
            print("  [Error] installer.iss not found!")
    else:
        print("  [Notice] Inno Setup (ISCC.exe) not found. Skipped installer .exe compilation.")
        print("           Portable ZIP was built successfully in dist/.")

    print("\n=== Build Complete! Files in dist/: ===")
    for item in DIST_DIR.iterdir():
        if item.is_file():
            print(f"  - {item.name} ({item.stat().st_size / (1024 * 1024):.2f} MB)")

if __name__ == "__main__":
    main()
