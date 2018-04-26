var mongoose= require('mongoose');
var fbSchema=mongoose.Schema({
    id: String,
    token: String,
    email: String,
    name: String
});
var fb= mongoose.model("fb",fbSchema);
module.exports=fb;