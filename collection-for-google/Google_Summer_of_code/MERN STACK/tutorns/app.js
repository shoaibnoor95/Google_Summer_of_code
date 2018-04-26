var bodyParser = require("body-parser");
var cookieParser = require("cookie-parser");
var express = require("express");
var flash = require("connect-flash");
var mongoose = require("mongoose");
var passport = require("passport");
var path = require("path");
var session = require("express-session");
var setUpPassport = require("./setuppassport");
var routes = require("./routes");
var app = express();
var fileupload=require("express-fileupload");
//var multer=require('multer')

//const nodemailer = require('nodemailer')
mongoose.Promise = global.Promise; 
var promise = mongoose.connect("mongodb://localhost:27017/test", {
  useMongoClient: true,
  /* other options */
});

app.use(fileupload());
setUpPassport();



app.set("port", process.env.PORT || 9000);
 
app.set("views", path.join(__dirname, "views"));
app.set("view engine", "ejs");

app.use(express.static(path.join(__dirname, "public")));

app.use(bodyParser.urlencoded({ extended: false }));
app.use(cookieParser());
app.use(bodyParser.json());
app.use(session({
  secret: "LUp$Dg?,I#i&owP3=9su+OB%`JgL4muLF5YJ~{;t",
  resave: true,
  saveUninitialized: true
}));

app.use(flash());

app.use(passport.initialize());
app.use(passport.session());
  
app.use(routes);
// app.use(multer  ({dest:'./uploads/',
// rename :function (fieldname,filename){
//   return filename;
// }

// }));

app.listen(app.get("port"), function() {
  console.log("Server started on port " + app.get("port"));
});
