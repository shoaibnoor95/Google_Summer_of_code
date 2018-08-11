import constants from '../constant/constant';
import firebase from 'firebase';
import {Actions} from 'react-native-router-flux';
export function idChange(value){
    return dispatch=>{
        dispatch({
            type:constants.IDCHANGE,
            payload:value
        })
    }
}

export function passChange(value){
    return dispatch=>{
        dispatch({
            type:constants.PASSWORDCHANGE,
            payload:value
        })
    }
}
export function loginCall(email,password){
    console.log(email +" "+password)
    return(dispatch)=>{
         dispatch({type:constants.LOGINCALL})   
        firebase.auth().signInWithEmailAndPassword(email,password)
        .then(user=>{
            dispatch({type:constants.LOGINSUCESSFULL,payload:user})
            Actions.main();
        })
        .catch(error=>{
            console.log(error)
            dispatch({type:constants.LOGINFAILS,payload:error.message})
        })
    }
}
export function employeeUpdate(props){
   var property= props.props,value=props.value;
   return(dispatch)=>{
        dispatch({
            type:constants.CREATEEMPLOYEE,
            payload:{property,value}
        })

    }
}
