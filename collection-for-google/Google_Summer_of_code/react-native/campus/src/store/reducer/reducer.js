import ActionTypes from '../constant/constant';

INITIAL_STATE = {
    alljobpost: [],
    jobpost: [],
    student: false,
    company: false,
    user: {},
    allUser: {},
    searchUser: {},
    myApply: []
}


export default (state = INITIAL_STATE, action) => {
    switch (action.type) {

        case ActionTypes.ALLUSERS:
            let allUser = Object.assign({}, state.allUser)
            allUser[action.payload.key] = action.payload.obj
            return ({
                ...state,
                allUser: allUser
            })
        case ActionTypes.JOBPOST:
            console.log(action.payload, " kakakakaak ")
            state.jobpost.push(action.payload)
            return ({
                ...state,
                jobpost: state.jobpost.concat()
            })

        case ActionTypes.ALLJOBPOST:
            state.alljobpost.push(action.payload)
            return ({
                ...state,
                alljobpost: state.alljobpost.concat()
            })

        case ActionTypes.DELETE_POST:
            // state.jobpost.splice(action.payload, 1)
            state.alljobpost.splice(action.payload, 1)
            return ({
                ...state,
                alljobpost: state.alljobpost.concat(),
                // jobpost: state.jobpost.concat()
            })

        case ActionTypes.STUDENT:
            console.log(action.payload, 'true')
            return ({
                ...state,
                student: action.payload
            })

        case ActionTypes.COMPANY:
            console.log(action.payload, "true")
            return ({
                ...state,
                company: action.payload
            })

        case ActionTypes.USER:
            console.log(action.payload, "ahahaahahha")
            return ({
                ...state,
                user: action.payload
            })
        case ActionTypes.SEARCH_USERS:
            return ({
                ...state,
                searchUser: action.payload
            })
        case ActionTypes.JOB_APPLY:
            const objOne = state.alljobpost[action.payload] = { name: state.alljobpost[action.payload].name, title: state.alljobpost[action.payload].title, phone: state.alljobpost[action.payload].phone, message: state.alljobpost[action.payload].message, apply: state.alljobpost[action.payload].apply, isEdit: false, uid: state.alljobpost[action.payload].uid }
            state.alljobpost.splice(action.payload, 1, objOne)
            return ({
                ...state,
                alljobpost: state.alljobpost.concat()
            })
        case ActionTypes.JOB_CANCEL:
            const objTwo = state.alljobpost[action.payload] = { name: state.alljobpost[action.payload].name, title: state.alljobpost[action.payload].title, phone: state.alljobpost[action.payload].phone, message: state.alljobpost[action.payload].message, apply: state.alljobpost[action.payload].apply, isEdit: true, uid: state.alljobpost[action.payload].uid }
            state.alljobpost.splice(action.payload, 1, objTwo)
            return ({
                ...state,
                alljobpost: state.alljobpost.concat()
            })
        // return ({
        //     ...state,
        //     alljobpost: action.payload
        // })

        default:
            return state;
    }
}