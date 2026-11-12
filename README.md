# DroneFlames PC Port

Неофициальный порт DroneFlames для Windows, macOS и Android на Godot 4.7.2. В репозитории также есть скрипты запуска и установки для Linux.

- [Стабильные сборки](https://github.com/makkaX2/DroneFlames-PC-Port/releases/latest)
- [Все релизы и тестовые сборки](https://github.com/makkaX2/DroneFlames-PC-Port/releases)
- [Сообщество порта](https://t.me/droneflamesmod)

## Запуск

- **Windows.** Запустите установщик Setup или распакуйте Portable ZIP и запустите `Start_DroneFlames.bat`.
- **macOS.** Откройте DMG или распакуйте macOS Universal ZIP. Сборка рассчитана на Intel и Apple Silicon.
- **Android.** Установите APK для нужного канала. Новые тестовые APK используют отдельный пакет. Старые стабильные APK могли иметь разные подписи. Если Android отклоняет обновление, экспортируйте сохранения перед удалением установленной версии.
- **Linux x86_64.** Запустите `bash install.sh`. Скрипту нужны Bash, curl, Python 3.9+ и flock (util-linux). Игра появится в меню приложений. Для тестового канала используйте `bash install.sh --channel test`.

Повторный запуск установщика обновляет выбранный канал. Он проверяет SHA-256 и запускаемость Linux-бинарника перед переключением на новый пакет. Сохранения, моды и старый каталог с исходниками остаются на месте. Для обновления из игры запустите её через ярлык или через `~/.local/bin/droneflames` (`droneflames-test` для тестового канала), затем выберите «Обновить в терминале». Если терминал не найден, игра откроет страницу релиза.

Мультиплеер поддерживает LAN и онлайн-комнаты через relay. Все участники должны использовать одинаковую версию игры. В текущем тестовом клиенте моды временно отключаются во время сетевой сессии.

## Сборка и файлы релиза

`version_info.json` содержит версию пакета. На Windows установите Godot 4.7.2 или укажите путь к его исполняемому файлу в `DF_GODOT_WINDOWS`. Команда `python build.py` создаёт Portable ZIP в `dist/` и запускает Inno Setup, если он установлен. Экспорты Android и macOS настраиваются в `export_presets.cfg`.

| Платформа | Файлы |
| --- | --- |
| Windows | `DroneFlames_PC_Setup_v<версия>_droneflamesmod.exe`, `DroneFlames_PC_v<версия>_droneflamesmod.zip` |
| macOS | `DroneFlames_macOS_v<версия>_droneflamesmod.dmg`, `DroneFlames_macOS_v<версия>_droneflamesmod.zip` |
| Linux x86_64 | `DroneFlames_Linux_x86_64_v<версия>_droneflamesmod.tar.gz` |
| Android | `DroneFlames_v<версия>_droneflamesmod.apk` |

Ранее опубликованные релизы сохраняют прежние имена файлов. Используйте список файлов конкретного релиза, поскольку комплект тестовых сборок может отличаться.

GitHub Actions собирает Windows, macOS, Android и Linux. `test` публикует пререлизы, а стабильный апдейтер читает GitHub `releases/latest`. Уведомление Telegram выполняется после публикации в CI.

## Код и проверки

- `game/`, `world/` — симуляция и генерация карты.
- `net/` — LAN, relay, учётные записи и обновления.
- `core/mod_manager.gd`, `mods/` — загрузка и встроенные пакеты модов.
- `ui/` — меню, HUD и экран настроек.
- [Подготовка релиза](docs/RELEASE_VERSION_GUIDE.md)
- [Headless-замеры](dev/README_BENCH.md)

Оригинальная игра — DroneFlames. ПК-порт поддерживает сообщество @droneflamesmod.
