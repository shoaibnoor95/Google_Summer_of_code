var express = require("express");
var passport = require("passport");
var User = require("./models/user");
var Token = require("./models/Token");
var mongoose = require('mongoose');
var router = express.Router();
var crypto = require('crypto');
var path = require("path");
const nodemailer = require('nodemailer');
var fb = require("./models/fbdb");
var fs = require("fs");
var ejs = require('ejs');
//var template=fs.readFileSync(path.join(__dirname+'/views/asp.ejs'),'utf-8');
//var compileTemplate=ejs.compile(template);
function ensureAuthenticated(req, res, next) {
  if (req.isAuthenticated()) {
    next();
  } else {
    req.flash("info", "You must be logged in to see this page.");
    res.redirect("/login");
  }
}

router.use(function (req, res, next) {
  res.locals.currentUser = req.user;
  res.locals.errors = req.flash("error");
  res.locals.infos = req.flash("info");
  next();
});

router.get("/", function (req, res, next) {
  User.find()
    .sort({ createdAt: "descending" })
    .exec(function (err, users) {
      if (err) { return next(err); }
      res.render("index", { users: users });
    });
});

router.get("/login", function (req, res) {
  res.render("login");
});
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


// Redirect the user to Facebook for authentication.  When complete,
// Facebook will redirect the user back to the application at
//     /auth/facebook/callback
// app.get('/auth/facebook',
//   passport.authenticate('facebook', { scope: ['read_stream', 'publish_actions'] })
// );


// Facebook will redirect the user to this URL after approval.  Finish the
// authentication process by attempting to obtain an access token.  If
// access was granted, the user will be logged in.  Otherwise,
// authentication has failed.
router.get('/auth/facebook', passport.authenticate('facebook', { scope: ['read_stream', 'publish_actions'] }));
router.get('/auth/facebook/callback',
  passport.authenticate('facebook', {
    successRedirect: '/',
    failureRedirect: '/login'
  }));
router.post("/login", passport.authenticate("login", {
  successRedirect: "/",
  failureRedirect: "/login",
  failureFlash: true
}));


router.get("/logout", function (req, res) {
  req.logout();
  res.redirect("/");
});

router.get("/signup", function (req, res) {
  res.render("signup");

});
router.post("/signup", function (req, res, next) {
  var photo = req.body.imageFile;
  var username = req.body.username;
  var email = req.body.email;
  var phoneNumber = req.body.phoneNumber;
  var password = req.body.password;
  var displayNames = req.body.display;


  console.log(username + " " + email + " " + phoneNumber + " " + password + " " + displayNames);
  User.findOne({ $or: [{ username: username }, { email: email }] }, function (err, user) {

    if (err) {
      req.flash("Error", "Something went wrong");
    }
    if (user) {
      req.flash("error", "User already exists with this username or email address");
      return res.redirect("/signup");
    }
    var newUser = new User({
      username: username,
      email: email,
      displayName: displayNames,
      phone_Number: phoneNumber,
      password: password,
      "photo.data": photo,
      "photo.content": "jpg/png"
    });
    newUser.save(next);
    var token = new Token({
      _userId: newUser._id,
      token: crypto.randomBytes(16).toString('hex')
    });

    token.save(function (err) {
      if (err) {
        req.flash(err.message);
        return;
      }

    });
    mailSender(email)
   
  });


}, passport.authenticate("login", {
  successRedirect: "/",
  failureRedirect: "/signup",
  failureFlash: true
})
);
router.get('/confirmation', (req, res, next) => {
  res.render('confirmation')
})
router.post('/confirmation', (req, res, next) => {
  if(req.body.named=='resendCode'){
   var email=req.body.emails;
   mailSender(mail);

  }
  if(req.body.named=='confirm'){
    var confirm=req.body.confrim;
    Token.findOne({ token: confirm }, function (err, token) {
      if (!token) return res.status(400).send({ type: 'not-verified', msg: 'We were unable to find a valid token. Your token my have expired.' });
  
      // If we found a token, find a matching user
      User.findOne({ _id: token._userId }, function (err, user) {
        if (!user) return res.status(400).send({ msg: 'We were unable to find a user for this token.' });
        if (user.isVerified) return res.status(400).send({ type: 'already-verified', msg: 'This user has already been verified.' });
  
        // Verify and save the user
        user.isVerified = true;
        user.save(function (err) {
          if (err) { return res.status(500).send({ msg: err.message }); }
          res.status(200).send("The account has been verified. Please log in.");
        });
      });
    }); 
 
   }
  
  
  
})


router.get("/users/:username", function (req, res, next) {
  User.findOne({ username: req.params.username }, function (err, user) {
    if (err) { return next(err); }
    if (!user) { return next(404); }
    res.render("profile", { "user": user });
  });
});

router.get("/edit", ensureAuthenticated, function (req, res) {
  res.render("edit");
});
router.get('/email_confirmation/:code', function (req, res, next) {
  var userr = req.params.code;
  Token.findOne({ token: userr }, function (err, token) {
    if (!token) return res.status(400).send({ type: 'not-verified', msg: 'We were unable to find a valid token. Your token my have expired.' });

    // If we found a token, find a matching user
    User.findOne({ _id: token._userId }, function (err, user) {
      if (!user) return res.status(400).send({ msg: 'We were unable to find a user for this token.' });
      if (user.isVerified) return res.status(400).send({ type: 'already-verified', msg: 'This user has already been verified.' });

      // Verify and save the user
      user.isVerified = true;
      user.save(function (err) {
        if (err) { return res.status(500).send({ msg: err.message }); }
        res.status(200).send("The account has been verified. Please log in.");
      });
    });
  });
});
router.post("/edit", ensureAuthenticated, function (req, res, next) {
  req.user.displayName = req.body.displayname;
  req.user.bio = req.body.bio;
  req.user.save(function (err) {
    if (err) {
      next(err);
      return;
    }
    req.flash("info", "Profile updated!");
    res.redirect("/edit");
  });
});

module.exports = router;