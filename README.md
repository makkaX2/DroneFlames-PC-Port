# 🎮 DroneFlames — PC Port by @good_boy_irl

[![Build & Release](https://github.com/good_boy_irl/DroneFlames-PC-Port/actions/workflows/build.yml/badge.svg)](https://github.com/good_boy_irl/DroneFlames-PC-Port/actions/workflows/build.yml)
[![Version](https://img.shields.io/badge/version-0.32.0-blue.svg)](https://github.com/good_boy_irl/DroneFlames-PC-Port/releases)
[![Platform](https://img.shields.io/badge/platform-Windows%20x64%20%7C%20Direct3D%2012-0078d7.svg)](https://github.com/good_boy_irl/DroneFlames-PC-Port/releases)
[![Engine](https://img.shields.io/badge/engine-Godot%204.3%2B-478cbf.svg)](https://godotengine.org)
[![Author](https://img.shields.io/badge/port%20by-%40good__boy__irl-brightgreen.svg)](https://github.com/good_boy_irl)

> **Полноценный нативный порт игры DroneFlames на ПК (Windows x64) с открытым декомпилированным исходным кодом, оптимизированным управлением и автоматической сборкой релизов.**

---

### 🏷️ Хэштеги / Topics
`#droneflames` `#pc-port` `#godot` `#godotengine` `#reverse-engineering` `#game-port` `#good_boy_irl` `#windows` `#rts` `#multiplayer` `#gaming`

---

## 🚀 Особенности порта (PC Features)

1. 🕹️ **Нативное ПК-управление и плавная камера:**
   - **WASD / Стрелочки**: плавное перемещение карты в бою.
   - **Shift + WASD**: ускоренное перемещение (турбо-режим x2.2).
   - **Плавный скролл и зум колесиком мыши**: экспоненциальная интерполяция (Smooth Zoom) без рывков.
   - **F11 / Alt + Enter**: мгновенное переключение в полноэкранный режим и обратно.

2. ⌨️ **Быстрые бинды и горячие клавиши:**
   - `Пробел` (`Space`) — Пауза / Возобновление боя
   - `Tab` — Переключение скорости игры (1x, 2x, 4x)
   - `1` – `7` — Быстрое переключение вкладок HUD
   - `B` — Вкладка строительства (Build)
   - `E` — Окно экономики
   - `C` / `D` — Окно дипломатии
   - `R` — Быстрое центрирование камеры на столице игрока
   - `M` — Быстрое отключение / включение звука (Mute)
   - `H` — Подсказка по клавишам на экране

3. 🌐 **Сетевая игра для Windows (WebRTC Native):**
   - Интегрированы нативные библиотеки `libwebrtc_native.windows.template_release.x86_64.dll`.
   - Полноценная поддержка мультиплеера по LAN / Direct IP.

4. 🔓 **Разблокировка косметики и Dev Mode:**
   - Открыты все **99 предметов кастомизации** (титулы разработчика, RGB-рамки, аватары 2026).
   - Включён **Developer Mode (`dev_mode`)** и оверлей **PERF PROBE** для мониторинга производительности и FPS.

5. ⚡ **Графический движок Direct3D 12 (D3D12):**
   - Нативная поддержка современных видеокарт Windows без просадок FPS.

6. 🏷️ **Ватермарка и авторство:**
   - Фирменная отметка `@good_boy_irl` в заголовке окна, оверлее интерфейса и возле версии игры.

---

## 📦 Быстрый запуск

* **Играть без установки:** запустите `Play_DroneFlames.bat`.
* **Запуск с отладочной консолью:** запустите `Play_DroneFlames_Debug.bat`.
* **Установка инсталлером:** скачайте готовый `DroneFlames_PC_Setup_v0.32.0_good_boy_irl.exe` из [Releases](https://github.com/good_boy_irl/DroneFlames-PC-Port/releases).

---

## 🤖 Автоматическая сборка (GitHub Actions CI/CD)

В репозитории настроен автоматический CI/CD пайплайн (`.github/workflows/build.yml`):
* При любом изменении кода и пуше в `master` / `main` автоматически:
  1. Собирается переносимый архив **Portable ZIP** (`DroneFlames_PC_v0.32.0_good_boy_irl.zip`).
  2. Через **Inno Setup 6** компилируется полноценный установщик **Setup EXE** (`DroneFlames_PC_Setup_v0.32.0_good_boy_irl.exe`).
  3. Собирается **Android APK** с актуальным кодом.
  4. Создаётся или обновляется релиз во вкладке **Releases**, куда загружаются готовые файлы.

---

## 🛠️ Локальная сборка билдов

Если вы хотите собрать инсталлер и zip локально на своём компьютере:

```bat
# Способ 1: в один клик
build_installer.bat

# Способ 2: через Python
python build.py
```

Готовые файлы появятся в папке `dist/`:
- `dist/DroneFlames_PC_Setup_v0.32.0_good_boy_irl.exe`
- `dist/DroneFlames_PC_v0.32.0_good_boy_irl.zip`

---

## 📂 Структура репозитория

```text
DroneFlames-PC-Port/
├── .github/workflows/      # Автоматический CI/CD сборки и релизов
├── addons/                 # Модули Godot (WebRTC Native DLLs, Device plugins)
├── assets/                 # Аудио, спрайты, шрифты, шейдеры
├── core/                   # Базовая логика игры
├── dev/                    # Скрипты разработки
├── game/                   # Игровые сцены и main.gd (с биндами и WASD)
├── net/                    # Мультиплеер, автоапдейтер, аккаунты
├── translations/           # Локализация
├── ui/                     # Интерфейс, HUD, меню, косметика
├── world/                  # Генерация мира и map_camera.gd (плавный зум/камера)
├── screenshots/            # Скриншоты геймплея
├── tools/                  # Утилиты и скрипты поддержки
├── app_icon.ico            # Иконка приложения
├── build.py                # Скрипт сборки ZIP и Inno Setup инсталлера
├── build_installer.bat     # Батник для быстрой сборки инсталлера
├── DroneFlames.exe         # Нативный исполняемый файл Windows
├── DroneFlames_Debug.exe   # Отладочный исполняемый файл
├── export_presets.cfg      # Пресеты экспорта Godot 4.3 (Windows & Android)
├── installer.iss           # Скрипт Inno Setup 6
├── Play_DroneFlames.bat    # Лаунчер игры
├── project.godot           # Главный конфигурационный файл Godot 4.x
├── watermark.gd            # Полноэкранный режим и ватермарка
└── README.md               # Документация проекта
```

---

## 📸 Скриншоты

| Главное меню с версией и ватермаркой | Профиль разработчика и косметика |
|:---:|:---:|
| ![Меню](screenshots/1_main_menu_pc.png) | ![Профиль](screenshots/3_dev_profile.png) |

| Геймплей и телеметрия | Меню настроек Dev Mode |
|:---:|:---:|
| ![Геймплей](screenshots/4_gameplay_pc_dev_telemetry.png) | ![Настройки](screenshots/2_dev_settings.png) |

---

## 👤 Авторство и благодарности

* **Автор ПК-порта и модификаций:** `@good_boy_irl`
* **Оригинальная игра:** DroneFlames (`com.kolesnyk.droneflames`)
* **Движок:** Godot Engine (v4.3+ / v4.7)
