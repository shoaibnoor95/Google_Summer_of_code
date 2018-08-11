import constants from '../constant/constant';
const INITIAL_STATE={
    name:'',
    phone:'',
    shift:''
}
export default (state=INITIAL_STATE,action)=>{
    switch(action.type){
        case constants.CREATEEMPLOYEE:
        console.log(action.payload.property+ "panzer"+action.payload.value)
        
        return({
            ...state,
            [action.payload.property]:action.payload.value
        })
        
        default:
        return state;
    }
}
