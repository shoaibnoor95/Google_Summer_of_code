var passport = require("passport");
var LocalStrategy = require("passport-local").Strategy;
var fb=require("./models/fbdb");
var configAuth=require('./auth'),
 FacebookStrategy = require('passport-facebook').Strategy;
 var User = require("./models/user");
 

passport.use( new FacebookStrategy({
    clientID: configAuth.facebookAuth.clientId,
    clientSecret: configAuth.facebookAuth.clientSecret,
    callbackURL: configAuth.facebookAuth.callbackURL
  },
  function(accessToken, refreshToken, profile, done) {
    process.nextTick(function(){
      User.findOne({'facebook.id':profile.id,function(err,user){
        if(err){
         return done(err); 
        }
        if(user){
          return done(null,user);
        }
        else{
          var fbd= new fb();
          fbd.id=profile.id;
          fbd.token=profile.token;
          fbd.name=profile.givenName +''+profile.name.familyName;
          fbd.email=profile.emails[0].value;
          fbd.save(function(err){
            if(err){
            throw done(err);
          }
          return done(null,user);  
        }
          );
      }
      }})
    })
  }
));
module.exports = function() {

  passport.serializeUser(function(user, done) {
    done(null, user._id);
  });

  passport.deserializeUser(function(id, done) {
    User.findById(id, function(err, user) {
      done(err, user);
    });
  });

  passport.use("login", new LocalStrategy(function(username, password, done) {
    User.findOne({ username: username }, function(err, user) {
      if (err) { return done(err); }
      if (!user) {
        return done(null, false, { message: "No user has that username!" });
      }
      user.checkPassword(password, function(err, isMatch) {
        if (err) { return done(err); }
        if (isMatch) {
          return done(null, user);
        } else {
          return done(null, false, { message: "Invalid password." });
        }
      });
    });
  }));
};