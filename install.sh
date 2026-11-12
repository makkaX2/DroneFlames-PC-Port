#!/usr/bin/env bash
set -euo pipefail

repo=makkaX2/DroneFlames-PC-Port
channel=stable
terminal=false
while (($#)); do
    case "$1" in
        --channel)
            channel="${2:?Укажите канал stable или test}"
            shift 2 ;;
        --terminal)
            terminal=true
            shift ;;
        *)
            echo "Использование: bash install.sh [--channel stable|test]" >&2
            exit 2 ;;
    esac
done
if "$terminal"; then
    trap 'code=$?; if ((code)); then echo "Обновление остановлено. Нажмите Enter, чтобы закрыть терминал."; read -r _ || true; fi' EXIT
fi
case "$channel" in
    stable) package=droneflames; endpoint=releases/latest ;;
    test) package=droneflames-test; endpoint='releases?per_page=50' ;;
    *) echo "Неизвестный канал: $channel" >&2; exit 2 ;;
esac
[[ $(uname -s) == Linux && $(uname -m) == x86_64 ]] || {
    echo 'Поддерживается Linux x86_64.' >&2
    exit 1
}
for tool in curl python3 flock; do
    command -v "$tool" >/dev/null || { echo "Установите $tool и повторите запуск." >&2; exit 1; }
done

data_dir="${XDG_DATA_HOME:-$HOME/.local/share}"
install_dir="$data_dir/$package"
versions="$install_dir/.releases"
bin_dir="$HOME/.local/bin"
mkdir -p "$versions" "$bin_dir" "$data_dir/applications"
exec 9>"$install_dir/.update.lock"
flock -n 9 || { echo 'Другое обновление уже выполняется.' >&2; exit 1; }
stage=$(mktemp -d "$versions/.incoming.XXXXXXXX")
cleanup() {
    rm -f -- "$stage/metadata.json" "$stage/release.tar.gz"
    if [[ -d "$stage/payload" ]]; then
        rm -f -- "$stage/payload/"{DroneFlames.x86_64,DroneFlames.pck,Start_DroneFlames.sh,install.sh,icon.png,version_info.json}
        rmdir -- "$stage/payload"
    fi
    rm -f -- "$stage/next" "$stage/launcher" "$stage/desktop"
    rmdir -- "$stage"
}
trap 'code=$?; cleanup; if "$terminal" && ((code)); then echo "Обновление остановлено. Нажмите Enter, чтобы закрыть терминал."; read -r _ || true; fi' EXIT

api="https://api.github.com/repos/$repo"
curl --fail --silent --show-error --location --retry 3 "$api/$endpoint" -o "$stage/metadata.json"
release=$(python3 - "$stage/metadata.json" "$repo" "$channel" <<'PYTHON'
import json, re, sys
from pathlib import Path

metadata, repo, channel = sys.argv[1:]
payload = json.loads(Path(metadata).read_text(encoding="utf-8"))
releases = payload if isinstance(payload, list) else [payload]
found = []
for release in releases:
    tag = release.get("tag_name", "")
    if release.get("draft") or not re.fullmatch(r"v\d+(\.\d+){3}(-test)?", tag):
        continue
    if bool(release.get("prerelease")) != (channel == "test") or tag.endswith("-test") != (channel == "test"):
        continue
    name = f"DroneFlames_Linux_x86_64_{tag}_droneflamesmod.tar.gz"
    url = f"https://github.com/{repo}/releases/download/{tag}/{name}"
    for asset in release.get("assets", []):
        digest = asset.get("digest") or ""
        if (asset.get("name") == name and asset.get("state") == "uploaded"
                and asset.get("browser_download_url") == url
                and re.fullmatch(r"sha256:[0-9a-f]{64}", digest)):
            key = tuple(map(int, tag[1:].removesuffix("-test").split(".")))
            found.append((key, tag, url, digest[7:]))
if not found:
    sys.exit("Для этого канала пока нет опубликованной Linux-сборки.")
_, tag, url, digest = max(found)
print(tag, url, digest)
PYTHON
)
read -r tag archive_url digest <<< "$release"
target="$versions/$tag-$digest"
installed=""
if [[ -f "$install_dir/.current/version_info.json" ]]; then
    installed=$(python3 -c 'import json,sys; print(json.load(open(sys.argv[1]))["version"])' "$install_dir/.current/version_info.json")
fi
python3 - "$installed" "${tag#v}" <<'PYTHON'
import sys

def version(text):
    return tuple(map(int, text.removesuffix("-test").split(".")))

installed, offered = sys.argv[1:]
if installed and version(installed) > version(offered):
    sys.exit("Установленная версия новее опубликованной сборки.")
PYTHON

if [[ ! -d "$target" ]]; then
    echo "Скачивается DroneFlames $tag для Linux…"
    curl --fail --show-error --location --retry 3 --progress-bar "$archive_url" -o "$stage/release.tar.gz"
    mkdir "$stage/payload"
    python3 - "$stage/release.tar.gz" "$stage/payload" "$digest" "${tag#v}" <<'PYTHON'
import hashlib, json, shutil, sys, tarfile
from pathlib import Path

archive, folder, expected, version = sys.argv[1:]
with open(archive, "rb") as file:
    actual = hashlib.sha256()
    for chunk in iter(lambda: file.read(1024 * 1024), b""):
        actual.update(chunk)
if actual.hexdigest() != expected:
    sys.exit("Контрольная сумма архива не совпала.")
names = {"DroneFlames.x86_64", "DroneFlames.pck", "Start_DroneFlames.sh", "install.sh", "icon.png", "version_info.json"}
folder = Path(folder)
with tarfile.open(archive, "r:gz") as package:
    entries = package.getmembers()
    if len(entries) != len(names) or {item.name for item in entries} != names or any(not item.isfile() for item in entries):
        sys.exit("Некорректное содержимое архива.")
    for item in entries:
        with package.extractfile(item) as source, (folder / item.name).open("xb") as destination:
            shutil.copyfileobj(source, destination)
if json.loads((folder / "version_info.json").read_text(encoding="utf-8"))["version"] != version:
    sys.exit("Номер версии в архиве не совпал.")
PYTHON
    chmod +x "$stage/payload/DroneFlames.x86_64" "$stage/payload/Start_DroneFlames.sh"
    "$stage/payload/DroneFlames.x86_64" --headless --version
    mv -T -- "$stage/payload" "$target"
fi
[[ -x "$target/DroneFlames.x86_64" && -s "$target/DroneFlames.pck" ]]
printf '#!/usr/bin/env bash\nexec %q "$@"\n' "$install_dir/.current/Start_DroneFlames.sh" > "$stage/launcher"
chmod +x "$stage/launcher"
mv -f -- "$stage/launcher" "$bin_dir/$package"
python3 - "$bin_dir/$package" "$install_dir/.current/icon.png" "$channel" > "$stage/desktop" <<'PYTHON'
import sys
launcher, icon, channel = sys.argv[1:]
def desktop_string(text):
    return text.replace("\\", "\\\\").replace("\n", "\\n").replace("\r", "\\r")
def desktop_exec(text):
    escaped = "".join("\\" + c if c in '\\"$`' else c for c in text.replace("%", "%%"))
    return desktop_string('"' + escaped + '"')
print("[Desktop Entry]\nType=Application")
print("Name=DroneFlames" + (" Test" if channel == "test" else ""))
print("Exec=" + desktop_exec(launcher))
print("Icon=" + desktop_string(icon))
print("Terminal=false\nCategories=Game;StrategyGame;")
PYTHON
mv -f -- "$stage/desktop" "$data_dir/applications/$package.desktop"
ln -s -- "$target" "$stage/next"
mv -Tf -- "$stage/next" "$install_dir/.current"
echo "Готово: DroneFlames $tag. Запуск из меню приложений или $bin_dir/$package"
if "$terminal"; then
    flock -u 9
    "$bin_dir/$package" >/dev/null 2>&1 &
    disown
fi
