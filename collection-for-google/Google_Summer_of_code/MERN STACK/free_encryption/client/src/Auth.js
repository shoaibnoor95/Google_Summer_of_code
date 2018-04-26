import crypto from './crypto';
class Auth{
    static authenticateUser(token){
        crypto.encrypt(token)
        localStorage.setItem('token',token)
    }
    static isUserAuthenticated(){
        return localStorage.getItem('token')!==null;
    } 
   static deauthenticateUser(){
       localStorage.removeItem('token');
   }
   static getToken(){
       
       var token= localStorage.getItem('token');
       token=crypto.decrypt(token);
       return token;
   }  
}
export default Auth;