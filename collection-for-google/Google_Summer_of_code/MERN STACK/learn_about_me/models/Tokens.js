var express = require("express");
var mongoose = require("mongoose");
var bcrypt = require("bcrypt-nodejs");
var salt_factor = 10;
var tUserSchema=mongoose.Schema({
  username: { type: String, required: true, index: {unique: true, dropDups: true} },
  password: { type: String, required: true },
  displayName: {type: String},
  email:{type: String, required: true},
  phone_Number:{type: String, required: true},
  createdAt: { type: Date, default: Date.now },
  GENERATED_VERIFYING_URL: {type: String},
});
var noop = function(){};
tUserSchema.pre("save", function(done){
    var tUser= this;
    if(!tUser.isModified("password")){
        return done();
    }
bcrypt.genSalt(salt_factor, function(err, salt){
    if(err){
        done(err)
    }

  bcrypt.hash(tUser.password,salt,noop, function(err, hashedPassword){
    if(err){return done(err);}
    tUser.password=hashedPassword;
      });  
});
});
// userSchema.methods.checkPassword =function (guess, done){
//     bcrypt.compare(guess,this.password,function(err,isMatch){
//         done(err, isMatch);
//     });
// }
// userSchema.methods.name=function(){
//     return this.displayName ||this.username;
// }
var Token = mongoose.model("tempUser", tUserSchema);
module.exports=Token;