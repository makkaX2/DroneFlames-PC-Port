import { api } from 'sdk';
import { checkAndSend } from '../lib/github.js';

export default async function (query, ctx) {
  const data = query.data;
  const chatId = query.message?.chat?.id;

  if (data === 'check_now' || data === 'get_builds') {
    await api.answerCallbackQuery({
      callback_query_id: query.id,
      text: 'checking branch test...',
    });
    if (chatId) {
      await checkAndSend(chatId, true);
    }
    return;
  }

  await api.answerCallbackQuery({
    callback_query_id: query.id,
    text: 'ok',
  });
}
