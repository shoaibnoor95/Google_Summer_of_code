var routes = express.Router();
var express=require("express");
routes.get("/",function(req,res){
res.render('App.js');
});
module.exports=routes;