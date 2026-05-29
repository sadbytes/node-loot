const os = require('os');
const path = require('path');

function ipcPath(id) {
  if (process.platform === 'win32') {
    return `\\\\?\\pipe\\loot-ipc-${id}`;
  }

  return path.join(os.tmpdir(), `loot-ipc-${id}.sock`);
}

module.exports = ipcPath;
