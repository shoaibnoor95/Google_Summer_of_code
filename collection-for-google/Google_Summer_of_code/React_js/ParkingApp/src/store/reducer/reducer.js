import ActionTypes from '../constant/constant';

const INITIAL_STATE = {
    islambadVal : [],
    karachiVal : [],
    londonVal : [],
}

export default (state = INITIAL_STATE, action) => {
    switch (action.type) {
        case ActionTypes.ISLAMABADVAL:
        // let aray = []
        // aray.push(action.payload)
            return ({
                ...state,
                islambadVal: state.islambadVal.concat(action.payload)
            })
        case ActionTypes.ISLAMABAD:
        const newObj = state.islambadVal[action.payload] =  {endTime :state.islambadVal[action.payload].endTime ,  startTime :state.islambadVal[action.payload].startTime , isEdit : false , uid :state.islambadVal[action.payload].uid }
        const objectOverride = Object.assign( {} , state ,newObj);
            return ({
                ...state,
                islambadVal : objectOverride.islambadVal.concat()
            })
            /*  */
        case ActionTypes.KARACHIVAL:
            return ({
                ...state,
                karachiVal: state.karachiVal.concat(action.payload)
            })
        case ActionTypes.KARACHI:
        const newObjOne = state.karachiVal[action.payload] =  {endTime :state.karachiVal[action.payload].endTime ,  startTime :state.karachiVal[action.payload].startTime , isEdit : false , uid :state.karachiVal[action.payload].uid }
        const objectOverrideOne = Object.assign( {} , state ,newObjOne);
            return ({
                ...state,
                karachiVal : objectOverrideOne.karachiVal.concat()
            })
        /*  */
        case ActionTypes.LONDONVAL:
            return ({
                ...state,
                londonVal: state.londonVal.concat(action.payload)
            })
        case ActionTypes.LONDON:
        const newObjTwo = state.londonVal[action.payload] =  {endTime :state.londonVal[action.payload].endTime ,  startTime :state.londonVal[action.payload].startTime , isEdit : false , uid :state.londonVal[action.payload].uid }
        const objectOverrideOneTwo = Object.assign( {} , state ,newObjTwo);
            return ({
                ...state,
                londonVal : objectOverrideOneTwo.londonVal.concat()
            })
        default:
            return state;
    }
}