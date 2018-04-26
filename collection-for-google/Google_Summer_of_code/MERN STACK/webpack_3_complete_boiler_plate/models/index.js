
var config=require('../config');
var mongoose=require('mongoose');
var dbURI="mongodb://"+
            encodeURIComponent(config.db.username)+":"+
            encodeURIComponent(config.db.password)+"@"+
            config.db.host+":"+
            config.db.port+"/"+
            config.db.name;
mongoose.connect(dbURI);
mongoose.connection.on('error',function(err){
    if(err){
        console.log(err+ "\nError name"+err.name);
    }
})
mongoose.Promise=global.Promise;
module.exports={
    mongoose,
    model:{
        user:require('./schema/User'),
        room:require('./schema/room')
    }
}