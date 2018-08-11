import constants from '../constant/constant';
const INITIAL_STATE={
    userId:'',
    password:'',
    error:'',
    sucessfull:'',
    loading:false
}
export default (states=INITIAL_STATE,action)=>{
    switch(action.type){
        case constants.IDCHANGE:
        return({
            ...states,
            userId:action.payload
        })
        case constants.PASSWORDCHANGE:
        return({
            ...states,
            password:action.payload
        })
        case constants.LOGINCALL:
        return({
            ...states,
            loading:true,
            error:''
        })
        
        case constants.LOGINSUCESSFULL:
        return({
            ...states,
            sucessfull:action.payload,
            error:'',
            loading:false
        })
        case constants.LOGINFAILS:
        return({
            ...states,
            password:'',
            error:action.payload,
            loading:false
        })        
        default:
        return states;
    }
}