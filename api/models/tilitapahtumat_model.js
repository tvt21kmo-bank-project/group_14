const db = require('../database');

const tilitapahtumat={
  get: function(callback) {
    return db.query('select * from tilitapahtumat', callback);
  },
  getById: function(tili_idTili, callback) {
    return db.query('select Paivays, Tapahtuma, Rahamaara from tilitapahtumat where tili_idTili=?', [tili_idTili], callback);
  }
}
  module.exports = tilitapahtumat;