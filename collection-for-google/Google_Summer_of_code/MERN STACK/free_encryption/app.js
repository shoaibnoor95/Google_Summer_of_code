//import { MongoClient } from "./C:/Users/Shoaib/AppData/Local/Microsoft/TypeScript/2.6/node_modules/@types/mongodb";

var bodyParser = require("body-parser");
var express = require("express");
var passport = require("passport");
var path = require("path");
var setUpPassport = require("./setuppassport");
var routes = require("./routes");
var mongoose =require('mongoose');
var app = express();

setUpPassport();
mongoose.Promise=global.Promise;
var promise=mongoose.connect("mongodb://localhost:27017/test");
app.set("port", process.env.PORT || 4000); 
app.set("views", path.join(__dirname, "views"));
app.set("view engine", "ejs");
app.use(function(req,res,next){
    var origin=req.headers.origin;
    console.log(origin)
    var allowedOrigin=['https://localhost:3000/','https://localhost:3000?','http://localhost:4000/'];
    if(allowedOrigin.indexOf(origin)>-1){
        
        res.setHeader('Access-Control-Allow-Origin',origin);
    }

    res.header('Access-Control-Allow-Methods', 'GET,PUT,POST,DELETE,OPTIONS');
    res.header('Access-Control-Allow-Headers', 'Content-Type, Authorization, Content-Length, X-Requested-With , token , email , sender , recepient');
    res.header('Access-Control-Allow-Credentials', true);
    next();
})

app.use(passport.initialize());
  
app.use(routes);

app.listen(app.get("port"), function() {
  console.log("Server started on port " + app.get("port"));
});
