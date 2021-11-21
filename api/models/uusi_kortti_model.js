const db = require('../database');
const bcrypt = require('bcryptjs');

const saltRounds=10;
const uusi_kortti={
//   get: function(callback) {
//     return db.query('select * from user_table', callback);
//   },
//   getById: function(id, callback) {
//     return db.query('select * from user_table where id_user=?', [id], callback);
//   },
  add: function(kortti, callback) {
    bcrypt.hash(kortti.PIN, saltRounds, function(err, hash) {
      return db.query('insert into kortti (Korttinumero, PIN, idAsiakas) values(?,?,?)',
      [kortti.Korttinumero, hash, kortti.idAsiakas], callback);
    });
  }
//   delete: function(id, callback) {
//     return db.query('delete from user_table where id_user=?', [id], callback);
//   },
//   update: function(id, user, callback) {
//     bcrypt.hash(user.password, saltRounds, function(err, hash) {
//       return db.query('update user_table set username=?, password=? where id_user=?',
//       [user.username, hash, id], callback);
//     });
//   }

 }
          
module.exports = uusi_kortti;