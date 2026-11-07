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
    commit_desc = subprocess.check_output(["git", "log", "-1", "--pretty=format:%B"]).decode("utf-8").strip()
    commit_author = subprocess.check_output(["git", "log", "-1", "--pretty=%an"]).decode("utf-8").strip()
except Exception:
    commit_desc = "test build"
    commit_author = "unknown"

short_sha = commit_sha[:7] if commit_sha else "unknown"
repo = "makkaX2/DroneFlames-PC-Port"
base_url = f"https://github.com/{repo}"
rel_url = f"{base_url}/releases/tag/{tag}"
com_url = f"{base_url}/commit/{commit_sha}"

def dl_url(fname):
    return f"{base_url}/releases/download/{tag}/{os.path.basename(fname)}"

apk_files = glob.glob("dist/*.apk")
win_files = [f for f in glob.glob("dist/*.zip") if "PC" in f or "macOS" not in f]
mac_files = glob.glob("dist/*.dmg")
ver = tag.lstrip("v")

apk_name = os.path.basename(apk_files[0]) if apk_files else f"DroneFlames_v{ver}_good_boy_irl.apk"
win_name = os.path.basename(win_files[0]) if win_files else f"DroneFlames_PC_v{ver}_good_boy_irl.zip"
mac_name = os.path.basename(mac_files[0]) if mac_files else f"DroneFlames_macOS_v{ver}_good_boy_irl.dmg"

text = f"""[build:test] {tag}
branch: test
commit: {short_sha}
author: {commit_author}
url: {com_url}

commit description:
{commit_desc}

artifacts:
- android: {apk_name}
- windows: {win_name}
- macos: {mac_name}"""

apk_dl = dl_url(apk_files[0]) if apk_files else f"{base_url}/releases/download/{tag}/{apk_name}"
win_dl = dl_url(win_files[0]) if win_files else f"{base_url}/releases/download/{tag}/{win_name}"
mac_dl = dl_url(mac_files[0]) if mac_files else f"{base_url}/releases/download/{tag}/{mac_name}"

buttons = [
    [
        {"text": "[android apk]", "url": apk_dl},
        {"text": "[windows zip]", "url": win_dl},
        {"text": "[macos dmg]", "url": mac_dl}
    ],
    [
        {"text": "[release notes]", "callback_data": "notes"},
        {"text": "[check updates]", "callback_data": "check_now"}
    ],
    [
        {"text": "[release url]", "url": rel_url},
        {"text": "[commit url]", "url": com_url}
    ]
]

payload = {
    "chat_id": int(chat_id),
    "text": text,
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
