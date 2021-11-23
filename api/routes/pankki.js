const express = require('express');
const router = express.Router();
const pankki = require('../models/pankki_model');

router.post('/debit_siirto', function(request, response){
    pankki.debit(request.body, function(err, dbResult){
        if(err){
            response.json(err);
        }
        else{
            response.json(dbResult.affectedRows);
        }
    })
}
);

router.post('/credit_siirto', function(request, response){
    pankki.credit(request.body, function(err, dbResult){
        if(err){
            response.json(err);
        }
        else{
            response.json(dbResult.affectedRows);
        }
    })
}
);

module.exports = router;