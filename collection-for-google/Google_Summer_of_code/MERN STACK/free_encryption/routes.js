const express =require('express');
const router=express.Router();
const passport=require('passport');

router.get('/',(req,res,next)=>{
    res.send('index');
})
router.post('/login',function(req,res,next){
    return passport.authenticate('local-login',function(error,token,userData){
        if(token){

            return res.json({
                success:true,
                message:'You have succesfully login',
                token,
                user:userData
            });
        }
      //      if(error){
                //console.log(err.message)
  return res.status(400).json({
              success:false,
                 message:err.message,
                })
    //}
                               
    
    })(req,res,next);
});
module.exports=router;