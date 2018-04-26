var bcrypt = require("bcrypt-nodejs");
var mongoose = require("mongoose");
var SALT_FACTOR = 10;
var userSchema = mongoose.Schema({
  username: { type: String, required: true, index: {unique: true, dropDups: true} },
  password: { type: String, required: true },
  displayName: {type: String, required: true},
  email:{type: String, required: true},
  phone_Number:{type: String, required: true},
  createdAt: { type: Date, default: Date.now },
  isVarified: {type: Boolean, defualt: false},
  passwordResetToken: String,
  country: String,
  city: String,
  moto: String,
  qualification: String,
  specialization: String,
  tag1: String,
  tag2: String,
  photo:{data: Buffer, contentType: String}

// facebook:{
//   id: String,
//   token: String,
//   email: String,
//   name:String
// }
});


var noop = function() {};
 
userSchema.pre("save", function(done) {
 var user = this; 
 if (!user.isModified("password")) {
    return done();
}
bcrypt.genSalt(SALT_FACTOR, function(err, salt) {
    if (err) { return done(err); }
    bcrypt.hash(user.password, salt, noop, function(err, hashedPassword) {
      if (err) { return done(err); }
     user.password = hashedPassword;
      done();
    });
  });
});

userSchema.methods.checkPassword = function(guess, done) {
  bcrypt.compare(guess, this.password, function(err, isMatch) {
    done(err, isMatch);
  });
};

userSchema.methods.name = function() {
  return this.displayName;
};
// userSchema.methods.birth = function() {
//   return this.local.createdAt;
//};

var User = mongoose.model("User", userSchema);

module.exports = User;