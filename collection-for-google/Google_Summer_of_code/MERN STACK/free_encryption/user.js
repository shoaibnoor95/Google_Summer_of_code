const mongoose=require('mongoose');
const bcrypt=require('bcrypt');
const userSchema=mongoose.Schema({
    username:   {type:String, required:true,    index:{unique:true,dropDups:true}},
    password:   {type:String, required:true},

})
var salt_factor=9;
var noop =function(){}
userSchema.pre('save',function(done){
    var user=this;
    if(!user.isModified("password")){
        return done();
    }
    bcrypt.genSalt(salt_factor,function(err,salt){
        if(err){
            return done(err);
        }
        bcrypt.hash(user.password,salt,noop,function(err,hashedPassword){
            if(err){
                return done(err);
            }
            user.password=hashedPassword;
            done();
        })
    })

})

userSchema.methods.checkPassword=function(guess,done){
    bcrypt.compare(guess,this.password,function(err,isMatch){
        done(err,isMatch);
    })
}
var User=mongoose.model("User",userSchema);
module.exports=User;
