var express = require("express");
var passport = require("passport");
var User = require("../models/user");
var router = express.Router();
var bodyParser=require('body-parser');
router.use(function(req, res, next) {
  res.locals.currentUser = req.user;
  res.locals.errors = req.flash("error");
  res.locals.infos = req.flash("info");
  next();
});
router.use(bodyParser.json())
function ensureAuthenticated(req, res, next) {
  if (req.isAuthenticated()) {
    next();
  } else {
    req.flash("info", "You must be logged in to see this page.");
    res.redirect("/login");
  }
}
//router.use(bodyParser);
function mailSender(mail){

  var transporter = nodemailer.createTransport({
    service: 'gmail',
    auth: {
      user: 'mail.shoaib95@gmail.com', // Your email id
      pass: 'n0kia5130' // Your password
    }

  });
  ejs.renderFile(__dirname + '/views/template.ejs', (err, data) => {
    if (err) console.log(err.message)
    else {
      var texts = 'Hello,\n\n' + 'Please verify your account by clicking the link: \nhttp:\/\/' + req.headers.host + '\/email_confirmation\/' + token.token + '.\n';

      var mailOptions = {

        to: 'shoaibnoor95@hotmail.com', // list of receivers
        from: "'no-reply@tola.com'", // sender address
        subject: 'Your respective user email', // Subject line
        //  html: data, // plaintext body 
        text: texts
      };
      transporter.sendMail(mailOptions, function (err, info) {
        if (err) {
          console.log(err.message + " " + err.name);
          res.json({ Err: err.message });
        } else {
          console.log('Message sent: ' + info.response);
          res.redirect('confirmation')
          //res.json({ Success: info.response });
        };
      });
    }
  })
}




router.post("/login", passport.authenticate("login", {
  successRedirect: "/",
  failureRedirect: "/login",
  failureFlash: true
}));


router.post("/signup", function(req, res, next) {
console.log(req.body)
  var username = req.body.username;
  var password = req.body.password;
  var email=req.body.email;
  var displayName=req.body.display;
  var phone=req.body.phoneNumber;
  var imageFile=req.body.imageFile
  User.findOne({$or: [{ username: username },{email:email}]}, function(err, user) {

    if (err) { return next(err); }
    if (user) {
      req.flash("error", "User already exists");
      return res.redirect("/signup");
    }

    var newUser = new User({
      username: username,
      password: password
    });
    newUser.save(next);

  });
}, passport.authenticate("login", {
  successRedirect: "/",
  failureRedirect: "/signup",
  failureFlash: true
}));


router.post("/edit", ensureAuthenticated, function(req, res, next) {
  req.user.displayName = req.body.displayname;
  req.user.bio = req.body.bio;
  req.user.save(function(err) {
    if (err) {
      next(err);
      return;
    }
    req.flash("info", "Profile updated!");
    res.redirect("/edit");
  });
});

module.exports = router;
