# DroneFlames PC Port

Неофициальный порт DroneFlames для Windows, macOS и Android на Godot 4.7.2. В репозитории также есть скрипты запуска и установки для Linux.

- [Стабильные сборки](https://github.com/makkaX2/DroneFlames-PC-Port/releases/latest)
- [Все релизы и тестовые сборки](https://github.com/makkaX2/DroneFlames-PC-Port/releases)
- [Сообщество порта](https://t.me/droneflamesmod)

## Запуск

- **Windows.** Запустите установщик Setup или распакуйте Portable ZIP и запустите `Start_DroneFlames.bat`.
- **macOS.** Откройте DMG или распакуйте macOS Universal ZIP. Сборка рассчитана на Intel и Apple Silicon.
- **Android.** Установите APK для нужного канала. Новые тестовые APK используют отдельный пакет. Старые стабильные APK могли иметь разные подписи. Если Android отклоняет обновление, экспортируйте сохранения перед удалением установленной версии.
- **Linux.** Из каталога исходников запустите `bash install.sh`. Для запуска используется `Start_DroneFlames.sh`. CI пока не публикует отдельный пакет Linux.

Мультиплеер поддерживает LAN и онлайн-комнаты через relay. Все участники должны использовать одинаковую версию игры. В текущем тестовом клиенте моды временно отключаются во время сетевой сессии.

## Сборка и файлы релиза

`version_info.json` содержит версию пакета. На Windows `python build.py` создаёт Portable ZIP в `dist/` и запускает Inno Setup, если он установлен. Экспорты Android и macOS настраиваются в `export_presets.cfg`.

| Платформа | Файлы |
| --- | --- |
| Windows | `DroneFlames_PC_Setup_v<версия>_good_boy_irl.exe`, `DroneFlames_PC_v<версия>_droneflamesmod.zip` |
| macOS | `DroneFlames_macOS_v<версия>_good_boy_irl.dmg`, `DroneFlames_macOS_v<версия>_good_boy_irl.zip` |
| Android | `DroneFlames_v<версия>_good_boy_irl.apk` |

Старые суффиксы в именах файлов сохранены для совместимости. Используйте список файлов конкретного релиза, поскольку комплект тестовых сборок может отличаться.

GitHub Actions собирает Windows, macOS и Android. `test` публикует пререлизы, а стабильный апдейтер читает GitHub `releases/latest`. Уведомление Telegram выполняется после публикации в CI.

## Код и проверки

- `game/`, `world/` — симуляция и генерация карты.
- `net/` — LAN, relay, учётные записи и обновления.
- `core/mod_manager.gd`, `mods/` — загрузка и встроенные пакеты модов.
- `ui/` — меню, HUD и экран настроек.
- [Подготовка релиза](docs/RELEASE_VERSION_GUIDE.md)
- [Headless-замеры](dev/README_BENCH.md)

Оригинальная игра — DroneFlames. ПК-порт поддерживает сообщество @droneflamesmod.
