const crypto=require('crypto'),
algorithm='aes-256-ctr',
password='88$#()@*(@uorns';
module.exports={
    encrypt:function(text){
    var cipher=crypto.createCipher(algorithm,password);
    var crypted=cipher.update(text,'utf-8','hex');
    crypted+=cipher.final('hex');
    return crypted;
    },
    decrypt:function(text){
        var decipher=crypto.createDecipher(algorithm,password)
        var dec=decipher.update(text,'hex','utf8');
        dec+=decipher.final('utf8');
        return dec;
    }
}
