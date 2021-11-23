const express = require('express');
const router = express.Router();
const tilitapahtumat = require('../models/tilitapahtumat_model');

router.get('/:tili_idTili?',
 function(request, response) {
  if (request.params.tili_idTili) {
    tilitapahtumat.getById(request.params.tili_idTili, function(err, dbResult) {
      if (err) {
        response.json(err);
      } else {
        //response.json(dbResult);
        //response.json(dbResult[0].username);
        response.send(dbResult[0].username);
      }
    });
  } else {
    tilitapahtumat.get(function(err, dbResult) {
      if (err) {
        response.json(err);
      } else {
        response.json(dbResult);
      }
    });
  }
});

module.exports = router;