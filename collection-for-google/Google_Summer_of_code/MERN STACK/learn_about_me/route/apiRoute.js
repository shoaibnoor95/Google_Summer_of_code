var express=require('express');
var Token=require('../models/Token');
var User=require('../models/user');
var router=express.Router();
function ensureAuthenticated(req, res, next) {
    if (req.isAuthenticated()) {
      next();
    } else {
      req.flash("info", "You must be logged in to see this page.");
      res.redirect("/login");
    }
  }
  router.use(function(req, res, next) {
    res.locals.currentUser = req.user;
    res.locals.errors = req.flash("error");
    res.locals.infos = req.flash("info");
    next();
  });
  router.get("/", function(req, res, next) {
    User.find()
    .sort({ createdAt: "descending" })
    .exec(function(err, users) {
      if (err) { return next(err); }
      res.render("index", { users: users });
    });
  });

  router.get("/login", function(req, res) {
    res.render("login");
  });
  router.get("/signup", function(req, res) {
    res.render("signup");
  });
  router.get("/logout", function(req, res) {
    req.logout();
    res.redirect("/");
  });
  
  router.get("/users/:username", function(req, res, next) {
    User.findOne({ username: req.params.username }, function(err, user) {
      if (err) { return next(err); }
      if (!user) { return next(404); }
      res.render("profile", { user: user });
    });
  });
  
  router.get("/edit", ensureAuthenticated, function(req, res) {
    res.render("edit");
  });
  module.exports=router;          