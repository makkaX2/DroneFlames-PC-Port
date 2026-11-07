@echo off
title DroneFlames Test Builder
cd /d "%~dp0"
echo ===================================================
echo   DroneFlames PC Port - Test Version Builder
echo ===================================================
python build_test.py %*
pause
