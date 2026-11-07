import { fetch, api } from 'sdk';
import { db } from 'sdk/db';
import { eq } from 'sdk/db';
import { botState } from '../schema.js';

export const GITHUB_REPO = 'makkaX2/DroneFlames-PC-Port';
export const TARGET_CHAT_ID = -1003924572520;

export async function getState(key) {
  try {
    const row = await db.select().from(botState).where(eq(botState.key, key)).get();
    return row ? row.val : null;
  } catch (err) {
    console.error('getState error:', err);
    return null;
  }
}

export async function setState(key, val) {
  try {
    await db.insert(botState).values({
      key,
      val,
      updatedAt: new Date(),
    }).onConflictDoUpdate({
      target: botState.key,
      set: {
        val,
        updatedAt: new Date(),
      },
    }).run();
  } catch (err) {
    console.error('setState error:', err);
  }
}

export async function getLatestCommit(branch = 'test') {
  const url = `https://api.github.com/repos/${GITHUB_REPO}/commits?sha=${branch}&per_page=1`;
  const res = await fetch(url, {
    headers: {
      'User-Agent': 'DroneFlames-TGCloud-Bot',
      'Accept': 'application/vnd.github.v3+json',
    },
  });
  if (!res.ok) {
    console.error(`Failed to fetch commits: ${res.status} ${res.statusText}`);
    return null;
  }
  const data = await res.json();
  if (!Array.isArray(data) || data.length === 0) return null;
  const c = data[0];
  return {
    sha: c.sha,
    shortSha: c.sha.slice(0, 7),
    message: c.commit.message.split('\n')[0],
    fullMessage: c.commit.message,
    authorName: c.commit.author.name,
    date: c.commit.author.date,
    htmlUrl: c.html_url,
  };
}

export async function getLatestTestRelease() {
  const url = `https://api.github.com/repos/${GITHUB_REPO}/releases?per_page=10`;
  const res = await fetch(url, {
    headers: {
      'User-Agent': 'DroneFlames-TGCloud-Bot',
      'Accept': 'application/vnd.github.v3+json',
    },
  });
  if (!res.ok) {
    console.error(`Failed to fetch releases: ${res.status} ${res.statusText}`);
    return null;
  }
  const releases = await res.json();
  if (!Array.isArray(releases) || releases.length === 0) return null;

  let target = releases.find(r => r.tag_name.includes('test') || r.prerelease);
  if (!target) target = releases[0];

  const assets = target.assets || [];
  const apkAsset = assets.find(a => a.name.endsWith('.apk'));
  const winSetupAsset = assets.find(a => a.name.endsWith('.exe') && a.name.toLowerCase().includes('setup'));
  const winZipAsset = assets.find(a => a.name.endsWith('.zip') && (a.name.includes('_PC_') || !a.name.includes('macOS')));
  const macDmgAsset = assets.find(a => a.name.endsWith('.dmg'));
  const macZipAsset = assets.find(a => a.name.endsWith('.zip') && a.name.includes('macOS'));

  return {
    id: target.id,
    tagName: target.tag_name,
    name: target.name,
    body: target.body || '',
    htmlUrl: target.html_url,
    publishedAt: target.published_at,
    assets: {
      apk: apkAsset ? { name: apkAsset.name, url: apkAsset.browser_download_url, sizeMb: (apkAsset.size / (1024 * 1024)).toFixed(1) } : null,
      winSetup: winSetupAsset ? { name: winSetupAsset.name, url: winSetupAsset.browser_download_url, sizeMb: (winSetupAsset.size / (1024 * 1024)).toFixed(1) } : null,
      winZip: winZipAsset ? { name: winZipAsset.name, url: winZipAsset.browser_download_url, sizeMb: (winZipAsset.size / (1024 * 1024)).toFixed(1) } : null,
      macDmg: macDmgAsset ? { name: macDmgAsset.name, url: macDmgAsset.browser_download_url, sizeMb: (macDmgAsset.size / (1024 * 1024)).toFixed(1) } : null,
      macZip: macZipAsset ? { name: macZipAsset.name, url: macZipAsset.browser_download_url, sizeMb: (macZipAsset.size / (1024 * 1024)).toFixed(1) } : null,
    },
  };
}

export function buildMessagePayload(commit, release) {
  const tag = release ? release.tagName : 'test';
  let text = `[build:test] ${tag}\n`;
  text += `branch: test\n`;
  if (commit) {
    text += `commit: ${commit.shortSha} (${commit.htmlUrl})\n`;
    text += `author: ${escapeHtml(commit.authorName)}\n`;
    text += `msg: ${escapeHtml(commit.message)}\n`;
  }
  text += `\nartifacts:\n`;

  const inlineKeyboard = [];

  if (release && release.assets) {
    const a = release.assets;
    if (a.apk) {
      text += `- android: ${escapeHtml(a.apk.name)} (${a.apk.sizeMb} MB)\n  ${a.apk.url}\n`;
      inlineKeyboard.push([{ text: `android apk (${a.apk.sizeMb} MB)`, url: a.apk.url }]);
    }
    if (a.winSetup) {
      text += `- win-setup: ${escapeHtml(a.winSetup.name)} (${a.winSetup.sizeMb} MB)\n  ${a.winSetup.url}\n`;
      inlineKeyboard.push([{ text: `win setup (.exe)`, url: a.winSetup.url }]);
    }
    if (a.winZip) {
      text += `- win-zip: ${escapeHtml(a.winZip.name)} (${a.winZip.sizeMb} MB)\n  ${a.winZip.url}\n`;
      inlineKeyboard.push([{ text: `win portable (.zip)`, url: a.winZip.url }]);
    }
    if (a.macDmg) {
      text += `- macos-dmg: ${escapeHtml(a.macDmg.name)} (${a.macDmg.sizeMb} MB)\n  ${a.macDmg.url}\n`;
      inlineKeyboard.push([{ text: `macos (.dmg)`, url: a.macDmg.url }]);
    }
    if (a.macZip) {
      text += `- macos-zip: ${escapeHtml(a.macZip.name)} (${a.macZip.sizeMb} MB)\n  ${a.macZip.url}\n`;
    }
  } else {
    text += `[compiling in github actions]\n`;
  }

  text += `\nrelease: ${release ? release.htmlUrl : `https://github.com/${GITHUB_REPO}/tree/test`}`;

  inlineKeyboard.push([
    { text: 'github release', url: release ? release.htmlUrl : `https://github.com/${GITHUB_REPO}/tree/test` },
    { text: 'commits', url: `https://github.com/${GITHUB_REPO}/commits/test` },
  ]);

  return { text, reply_markup: { inline_keyboard: inlineKeyboard } };
}

function escapeHtml(str) {
  if (!str) return '';
  return String(str)
    .replace(/&/g, '&amp;')
    .replace(/</g, '&lt;')
    .replace(/>/g, '&gt;');
}

export async function checkAndSend(chatId = TARGET_CHAT_ID, force = false) {
  const commit = await getLatestCommit('test');
  const release = await getLatestTestRelease();

  if (!commit && !release) {
    if (force) {
      await api.sendMessage({
        chat_id: chatId,
        text: '[error] failed to fetch branch test info from github api',
      });
    }
    return false;
  }

  const lastNotifiedSha = await getState('last_notified_sha');
  const currentSha = commit ? commit.sha : null;

  if (!force && currentSha && lastNotifiedSha === currentSha) {
    return false;
  }

  const payload = buildMessagePayload(commit, release);
  await api.sendMessage({
    chat_id: chatId,
    text: payload.text,
    reply_markup: payload.reply_markup,
    disable_web_page_preview: true,
  });

  if (currentSha) {
    await setState('last_notified_sha', currentSha);
  }
  return true;
}
