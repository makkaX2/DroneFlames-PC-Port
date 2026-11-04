#!/usr/bin/env python3
"""Read-only status monitor for the DroneFlames relay."""

from __future__ import annotations

import argparse
import asyncio
import collections
import datetime
import ipaddress
import json
import os
import re
import subprocess
import sys
import tempfile
import time
from pathlib import Path
from typing import Any


ROOT = Path(__file__).resolve().parent.parent
SSH_HELPER = Path.home() / ".codex" / "servers" / "remnawave-ssh.py"
CA_FILE = ROOT / "net" / "tls" / "df_relay_root.crt"
SIGNAL_URL = "wss://45.145.12.165:19080/mp/signal"
SERVICE = "df-relay-test.service"

REMOTE_READ = f"""set -e
printf '__STATE__\\n'
systemctl is-active {SERVICE} || true
printf '__TCP__\\n'
ss -Hnt state established sport = :19080
printf '__EVENTS__\\n'
journalctl -u {SERVICE} -o cat --no-pager | grep '\\[Signal\\]' | tail -n 1000 || true
"""


def read_remote() -> tuple[str, list[str], list[str]]:
    if not SSH_HELPER.is_file():
        raise RuntimeError(f"Не найден SSH helper: {SSH_HELPER}")
    temp_path: Path | None = None
    try:
        with tempfile.NamedTemporaryFile(
            mode="w", encoding="utf-8", suffix=".sh", delete=False
        ) as temp:
            temp.write(REMOTE_READ)
            temp_path = Path(temp.name)
        result = subprocess.run(
            [sys.executable, str(SSH_HELPER), "--script", str(temp_path)],
            capture_output=True,
            text=True,
            encoding="utf-8",
            errors="replace",
            timeout=30,
            check=False,
        )
        if result.returncode != 0:
            detail = (result.stderr or result.stdout).strip()
            raise RuntimeError(detail or f"SSH завершился с кодом {result.returncode}")
        chunks = result.stdout.split("__TCP__\n", 1)
        if len(chunks) != 2:
            raise RuntimeError("Не удалось разобрать ответ relay по SSH")
        before_tcp, after_tcp = chunks
        tcp_and_events = after_tcp.split("__EVENTS__\n", 1)
        if len(tcp_and_events) != 2:
            raise RuntimeError("В ответе relay отсутствует блок журнала")
        state_block = before_tcp.split("__STATE__\n", 1)[-1]
        state = next((line.strip() for line in state_block.splitlines() if line.strip()), "unknown")
        tcp_lines = [line.strip() for line in tcp_and_events[0].splitlines() if line.strip()]
        event_lines = [line.strip() for line in tcp_and_events[1].splitlines() if line.strip()]
        return state, tcp_lines, event_lines
    finally:
        if temp_path is not None:
            try:
                temp_path.unlink(missing_ok=True)
            except OSError:
                pass


def peer_endpoint(ss_line: str) -> str | None:
    fields = ss_line.split()
    if not fields:
        return None
    endpoint = fields[-1]
    if endpoint.startswith("[") and "]:" in endpoint:
        address, port = endpoint[1:].rsplit("]:", 1)
    elif ":" in endpoint:
        address, port = endpoint.rsplit(":", 1)
    else:
        return endpoint
    try:
        ip = ipaddress.ip_address(address)
        if isinstance(ip, ipaddress.IPv6Address) and ip.ipv4_mapped:
            address = str(ip.ipv4_mapped)
        else:
            address = str(ip)
    except ValueError:
        pass
    return f"{address}:{port}"


def active_room_codes(event_lines: list[str]) -> list[str]:
    active: set[str] = set()
    for line in event_lines:
        if "[Signal] listening on 19080" in line:
            # Room state is in memory and is lost whenever the relay process restarts.
            active.clear()
            continue
        opened = re.search(r"room ([A-Z0-9]{6}) opened", line)
        closed = re.search(r"room ([A-Z0-9]{6}) closed", line)
        if opened:
            active.add(opened.group(1))
        if closed:
            active.discard(closed.group(1))
    return sorted(active)


async def read_rooms(codes: list[str]) -> tuple[list[dict[str, Any]], dict[str, bool]]:
    try:
        import websockets
    except ImportError as exc:
        raise RuntimeError("Не найден Python-пакет websockets; список лобби недоступен") from exc
    if not CA_FILE.is_file():
        raise RuntimeError(f"Не найден сертификат relay: {CA_FILE}")

    import ssl

    tls = ssl.create_default_context(cafile=str(CA_FILE))
    rooms: list[dict[str, Any]] = []
    sealed: dict[str, bool] = {}
    async with websockets.connect(
        SIGNAL_URL, ssl=tls, open_timeout=8, close_timeout=2, ping_interval=None
    ) as ws:
        await ws.send(json.dumps({"t": "list"}))
        response = json.loads(await asyncio.wait_for(ws.recv(), timeout=8))
        if response.get("t") != "rooms":
            raise RuntimeError("Relay вернул неожиданный ответ на запрос списка комнат")
        rooms = [row for row in response.get("rooms", []) if isinstance(row, dict)]
        for code in codes:
            await ws.send(json.dumps({"t": "peek", "code": code}))
            peek = json.loads(await asyncio.wait_for(ws.recv(), timeout=5))
            if peek.get("t") == "peek" and peek.get("code") == code:
                sealed[code] = bool(peek.get("open", False))
    return rooms, sealed


def render(state: str, tcp_lines: list[str], event_lines: list[str]) -> None:
    endpoints = [value for line in tcp_lines if (value := peer_endpoint(line))]
    by_ip: collections.Counter[str] = collections.Counter()
    for endpoint in endpoints:
        host = endpoint.rsplit(":", 1)[0]
        by_ip[host] += 1

    codes = active_room_codes(event_lines)
    try:
        rooms, sealed = asyncio.run(read_rooms(codes))
        room_error = ""
    except Exception as exc:  # keep the SSH connection count useful if WSS listing fails
        rooms, sealed = [], {}
        room_error = str(exc)

    public_codes = {str(row.get("code", "")) for row in rooms}
    started = [code for code, is_sealed in sealed.items() if is_sealed]
    hidden_unsealed = [code for code, is_sealed in sealed.items() if not is_sealed and code not in public_codes]

    os.system("cls" if os.name == "nt" else "clear")
    print("DroneFlames relay · только чтение")
    print(f"Снимок: {datetime.datetime.now().astimezone().strftime('%d.%m.%Y %H:%M:%S %Z')}")
    print(f"Сервис: {state}")
    print(f"Активных TCP-подключений к relay: {len(endpoints)}")
    if by_ip:
        print("Источники (IP: число подключений):")
        for ip, count in sorted(by_ip.items(), key=lambda item: (-item[1], item[0])):
            print(f"  {ip}: {count}")
    else:
        print("Источников сейчас нет.")

    print(f"\nОткрытых публичных лобби: {len(rooms)}")
    if rooms:
        for room in rooms:
            name = str(room.get("name", "Комната"))
            count = int(room.get("n", 0))
            maximum = int(room.get("max", 0))
            print(f"  {name}: {count}/{maximum} подключений")
    print(f"Комнат, которым relay отправил сигнал старта: {len(started)}")
    if hidden_unsealed:
        print(f"Активных комнат вне публичного списка, без сигнала о старте: {len(hidden_unsealed)}")
    if room_error:
        print(f"Список комнат недоступен: {room_error}")
    print("\nIP показывает только адрес выхода в интернет (возможны NAT/VPN/мобильная сеть), не личность или точное местоположение.")
    print("TCP-счётчик включает меню/лобби и матчи. Сигнал старта не подтверждает загрузку игры; relay не показывает число игроков в начатых матчах.")


def main() -> int:
    parser = argparse.ArgumentParser(description="Read-only DroneFlames relay monitor")
    parser.add_argument("--once", action="store_true", help="сделать один снимок и выйти")
    parser.add_argument("--interval", type=float, default=10.0, help="интервал опроса в секундах (по умолчанию 10)")
    args = parser.parse_args()
    interval = max(5.0, args.interval)
    while True:
        try:
            state, tcp_lines, event_lines = read_remote()
            render(state, tcp_lines, event_lines)
        except KeyboardInterrupt:
            print("\nОстановлено.")
            return 0
        except Exception as exc:
            print(f"Не удалось проверить relay: {exc}", file=sys.stderr)
            if args.once:
                return 1
        if args.once:
            return 0
        try:
            time.sleep(interval)
        except KeyboardInterrupt:
            print("\nОстановлено.")
            return 0


if __name__ == "__main__":
    raise SystemExit(main())
