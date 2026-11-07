import os
import sys
import json
import glob
import subprocess
import urllib.request

tg_token = os.environ.get("TG_BOT_TOKEN")
chat_id = os.environ.get("TG_CHAT_ID")
tag = os.environ.get("TAG", "")
commit_sha = os.environ.get("COMMIT_SHA", "")
run_id = os.environ.get("RUN_ID", "")

if not tg_token or not chat_id:
    print("TG_BOT_TOKEN or TG_CHAT_ID not set, skipping Telegram notification.")
    sys.exit(0)

try:
    commit_msg = subprocess.check_output(["git", "log", "-1", "--pretty=%s"]).decode("utf-8").strip()
    commit_author = subprocess.check_output(["git", "log", "-1", "--pretty=%an"]).decode("utf-8").strip()
except Exception:
    commit_msg = "Тестовая сборка"
    commit_author = "makkaX2"

short_sha = commit_sha[:7] if commit_sha else "unknown"
repo = "makkaX2/DroneFlames-PC-Port"
base_url = f"https://github.com/{repo}"
rel_url = f"{base_url}/releases/tag/{tag}"
com_url = f"{base_url}/commit/{commit_sha}"

def h(s):
    return (s or "").replace("&", "&amp;").replace("<", "&lt;").replace(">", "&gt;")

def dl_url(fname):
    return f"{base_url}/releases/download/{tag}/{os.path.basename(fname)}"

apk_files = glob.glob("dist/*.apk")
win_files = [f for f in glob.glob("dist/*.zip") if "PC" in f or "macOS" not in f]
mac_files = glob.glob("dist/*.dmg")
ver = tag.lstrip("v")

text = f"""🎮 <b>DroneFlames — Тестовая сборка</b>
<b>Версия:</b> <code>{h(tag)}</code> (ветка <code>test</code>)

📌 <b>Коммит:</b> <a href="{com_url}">{short_sha}</a>
📝 <b>Сообщение:</b> <code>{h(commit_msg)}</code>
👤 <b>Автор:</b> {h(commit_author)}

📥 <b>Скачать сборку (нажмите на кнопку нужной платформы):</b>
• <b>Android</b> — APK для смартфона/планшета
• <b>Windows</b> — ZIP-архив с игрой для ПК
• <b>macOS</b> — DMG-образ для Mac

<code>[build:test | branch: test | run: {run_id}]</code>"""

buttons = []
if apk_files:
    buttons.append([{"text": "📱 Скачать Android (.apk)", "url": dl_url(apk_files[0])}])
elif tag:
    buttons.append([{"text": "📱 Скачать Android (.apk)", "url": f"{base_url}/releases/download/{tag}/DroneFlames_v{ver}_good_boy_irl.apk"}])

if win_files:
    buttons.append([{"text": "💻 Скачать Windows (.zip)", "url": dl_url(win_files[0])}])
elif tag:
    buttons.append([{"text": "💻 Скачать Windows (.zip)", "url": f"{base_url}/releases/download/{tag}/DroneFlames_PC_v{ver}_good_boy_irl.zip"}])

if mac_files:
    buttons.append([{"text": "🍏 Скачать macOS (.dmg)", "url": dl_url(mac_files[0])}])
elif tag:
    buttons.append([{"text": "🍏 Скачать macOS (.dmg)", "url": f"{base_url}/releases/download/{tag}/DroneFlames_macOS_v{ver}_good_boy_irl.dmg"}])

bottom_row = [
    {"text": "📦 Все файлы на GitHub", "url": rel_url},
    {"text": "🔍 Открыть коммит", "url": com_url}
]
buttons.append(bottom_row)
buttons.append([{"text": "🔄 Проверить обновления", "callback_data": "check_now"}])

payload = {
    "chat_id": int(chat_id),
    "text": text,
    "parse_mode": "HTML",
    "disable_web_page_preview": True,
    "reply_markup": {"inline_keyboard": buttons}
}

req = urllib.request.Request(
    f"https://api.telegram.org/bot{tg_token}/sendMessage",
    data=json.dumps(payload).encode("utf-8"),
    headers={"Content-Type": "application/json"}
)
try:
    with urllib.request.urlopen(req) as resp:
        print("Telegram notification sent successfully:", resp.status)
except Exception as e:
    print("Failed to send Telegram notification:", e)
