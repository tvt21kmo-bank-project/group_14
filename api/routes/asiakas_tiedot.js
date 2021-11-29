const express = require('express');
const router = express.Router();
const asiakas_tiedot = require('../models/asiakas_tiedot_model');

router.get('/',
 function(request, response) {
    asiakas_tiedot.get(function(err, dbResult) {
      if (err) {
        response.json(err);
      } else {
        response.json(dbResult);
      }
    });
 });

module.exports = router;