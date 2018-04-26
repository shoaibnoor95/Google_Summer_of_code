const express=require('express');
const router=express.Router();
const passport=require('passport');
const User=require('../models/User')
router.get('/',(req,res,next)=>{
    res.render('index');
});

function ensureAuth(req,res,next){
  if(req.isAuthenticated()){
    next();
  }
  else{
    res.status(401).send('Un authenticated')
  }
}
router.post("/login",function(req,res,next){
  console.log(req.body)
  
  passport.authenticate('local-login',function (err, user, message){
    console.log('here');
    if (err) {
      console.log('here1');
    return res.send(err.message)
    }
    if (user) {
      req.logIn(user, loginErr => {
        if(loginErr) {
          console.log(loginErr)
          return res.json({ success: false, message: loginErr })
        }
        console.log(user)
        return res.json({ success: true, message: "authentication succeeded" })   
      return res.send(user); 
    })
  }
    if(message){
      console.log("message found")
      return res.send({message:message})
    }
  })(req, res, next);
})
router.post('/*',ensureAuth,(req,res,next)=>{
  res.render('index');
})
router.get('/*',ensureAuth,(req,res,next)=>{
  res.render('index');
})
    router.post("/signup", function (req, res, next) {

      var username = req.body.username;
      var phoneNumber = req.body.phoneNumber;
      var email = req.body.email;
      User.findOne({ $or: [{ username: username }, { email: email }, { phone_Number: phoneNumber }] }, function (err, user) {
    
        if (err) { return next(err); }
        if (user) {
          req.flash("error", "User already exists");
          return res.redirect("/signup");
        }
        var password = req.body.password;
        var displayNames = req.body.display;
        console.log(username,phoneNumber,email,password,displayNames)
        var newUser = new User({
          username: username,
          email: email,
          displayName: displayNames,
          phone_Number: phoneNumber,
          password: password,
        });
        newUser.save(function(err){
          if(err){console.log(err)}
      
        });
  });
});
router.get('/dashboard',ensureAuth,(req,res,next)=>{
    res.send(req.user+"shoab")
});
router.get('/shoaib',(req,res,next)=>{
  res.send({data:'shoaib'})
})
router.get('/logout',ensureAuth,function (req,res,next){
console.log('shoaib')
res.clearCookie('sessionId')
req.logout();
req.session = null;
req.cookies="";
return res.send('logout')
});  
router.post('/logout',ensureAuth,function (req,res,next){
  console.log('shoaib')
  res.clearCookie('sessionId')
  req.sessionID="";
  req.session.destroy(function(err){
    if(err){
      console.log(err)
    }
  })
  req.logout();
  req.session = null;
  req.cookies="";
  return res.send('logout')
  })  
module.exports=router; 