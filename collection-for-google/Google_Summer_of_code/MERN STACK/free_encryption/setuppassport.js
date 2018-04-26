const passport =require('passport');
const LocalStrategy=require('passport-local').Strategy;
const jwt=require('jsonwebtoken');
const passportJWT=require('passport-jwt');
const User =require('./user');
const config=require('./config');
const ExtractJWT=passportJWT.ExtractJwt;
const Strategy=passportJWT.Strategy;
// const params={
//     secretOrKey:config.jwtSecret,
//     jwtFromRequest:ExtractJWT.fromAuthHeaderWithScheme()
// }; 
module.exports=function(){

    passport.use('local-login',new LocalStrategy({
    usernameField:'username',
    passwordField:'password',
    session:false,
    passReqToCallback:true
    },
    function(req,username,password,done){
        User.findOne({$or:[{username:username},{email:username}]},function(err,user){
            if(err){
                return done(err);
            }
            if(!user){
                const error=new Error('No user has that username');
                error.name='User not found'
                return done(error)
            }
            user.comparePassword(user.password,(err,isMatch)=>{
                if(err){
                    return done(err);
                }
               if(!isMatch){
                   const error =new Error('Username or password is incorrect');
                   error.name='username and password missmatch'
                   return done(error);
               }
               const payload={
                   sub:user._id
               };
               const token=jwt.sign(payload,config.jwtSecret);
               const data={
                   name:user.username
               };
               return done(null,token,data)
            })
        }) 
    }))
}