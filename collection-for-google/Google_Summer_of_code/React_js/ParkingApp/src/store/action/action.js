import ActionTypes from '../constant/constant';
import history from '../../History';
import firebase from '../../Firebase'
import swal from 'sweetalert'



export function signupAction(user){
    return dispatch => {
        console.log('user', user);
        // history.push('/signin');
        firebase.auth().createUserWithEmailAndPassword(user.email, user.password)
            .then((createdUser) => {
                console.log('signed up successfully', createdUser.uid);
                delete user.password ;
                user.uid = createdUser.uid ;
                user.isCheck =  true
                console.log(user.file.name , "**********************")
                // firebase.storage().ref().child('users /' ).put(user.file)


                firebase.database().ref('users/' + createdUser.uid + '/').set(user)
                    .then(() => {
                        firebase.database().ref('users/' + createdUser.uid).once('value', function (snapshout) {
                            localStorage.setItem('user', JSON.stringify(snapshout.val()))
                        })
                        firebase.database().ref('users/').once('value')
                             .then((userData) => {
                                let allUsers = userData.val();
                                let currentUserUid = firebase.auth().currentUser.uid;
                                console.log(currentUserUid)
                                let allUsersArr = []
                                for (var key in allUsers) {
                                    allUsersArr.push(allUsers[key]);
                                }
                                dispatch({ type: ActionTypes.ALLUSERS, payload: allUsersArr })
                                dispatch({ type: ActionTypes.CURRENTUSER, payload: currentUserUid })
                                // setTimeout( ()=>{
                                    history.push('/park');
                                // } ,1000)
                            })
                        // .catch((error)=> {
                        //     console.log(error)
                        // } )
                    })
                // .catch((error)=> {
                //     console.log(error)
                // } )


            })
            .catch((error) => {
                if(error.message === "The email address is badly formatted."){
                    swal( error.message )
                }else if(error.message === "Password should be at least 6 characters"){
                    swal( error.message )
                }else if(error.message === "The email address is already in use by another account."){
                    swal( error.message )
                }
                else{
                    console.log(error)
                }
            })
    }
}

export function signinAction(user) {
    return dispatch => {
        console.log('user in signin', user);
        firebase.auth().signInWithEmailAndPassword(user.email, user.password)
            .then((signedinUser) => {
                firebase.database().ref('users/' + signedinUser.uid).once('value', function (snapshout) {
                    console.log(snapshout.val())
                    localStorage.setItem('user', JSON.stringify(snapshout.val()))
                })
                firebase.database().ref('users/').once('value')
                    .then((userData) => {
                    let allUsers = userData.val();
                    let currentUserUid = firebase.auth().currentUser.uid;
                    console.log(currentUserUid)
                    let allUsersArr = []
                    for (var key in allUsers) {
                        allUsersArr.push(allUsers[key]);
                    }
                    dispatch({ type: ActionTypes.ALLUSERS, payload: allUsersArr })
                    dispatch({ type: ActionTypes.CURRENTUSER, payload: currentUserUid })
                    // setTimeout( ()=>{
                        history.push('/park');
                    // } ,1000)
                }) 
                })
                .catch((error) => {
                    if(error.message === "The email address is badly formatted."){
                        swal( error.message )
                    }else if(error.message === "The password is invalid or the user does not have a password."){
                        swal( error.message )
                    }else if(error.message === "There is no user record corresponding to this identifier. The user may have been deleted."){
                        swal( error.message )
                    }
                    else{
                        console.log(error)
                    }
                })
    }
}

export function reservedIsl(editor) {
    return dispatch => {

        let  key =  firebase.database().ref('islamabad/').push().key
        editor.uid = key
        firebase.database().ref('islamabad/' + key + '/' ).set(editor)
    }
}
export function reservedKhi(editor) {
    return dispatch => {
        let  key =  firebase.database().ref('karachi/').push().key
        firebase.database().ref('karachi/' + key + '/' ).set(editor)
    }
}
export function reservedLod(editor) {
    return dispatch => {
        let  key =  firebase.database().ref('london/').push().key
        firebase.database().ref('london/'  + key + '/'  ).set(editor)
    }
}


export function reserved(index , uid , editor) {
    return dispatch => {
        firebase.database().ref('islamabad/' + uid +'/').set(editor)
            .then(()=>{
                console.log('message sent')
                dispatch({ type: ActionTypes.ISLAMABAD, payload: index , edit : editor })
            })
    }
}

export function reEdit(index , uid , editor) {
    return dispatch => {
        firebase.database().ref('islamabad/' + uid +'/').set(editor)
            .then(()=>{
                // console.log('message sent')
                // dispatch({ type: ActionTypes.REEDITISL, payload: index , edit : editor })
            })
    }
}

export function getResult() {
    return dispatch => {
        firebase.database().ref('islamabad/').on('child_added' , (snap) => {
            let obj = snap.val()
            obj.uid = snap.key
            console.log(obj)
            dispatch({ type: ActionTypes.ISLAMABADVAL, payload: obj})
            // swal('great')
        } )

    }
}
/*karachi page  */

export function reservedOne(index , uid , editor) {
    return dispatch => {
        firebase.database().ref('karachi/' + uid +'/').set(editor)
            .then(()=>{
                console.log('message sent')
                dispatch({ type: ActionTypes.KARACHI, payload: index , edit : editor })
            })
    }
}

export function reEditOne(index , uid , editor) {
    return dispatch => {
        firebase.database().ref('karachi/' + uid +'/').set(editor)
            .then(()=>{
                // console.log('message sent')
                // dispatch({ type: ActionTypes.REEDITISL, payload: index , edit : editor })
            })
    }
}

export function getResultOne() {
    return dispatch => {
        firebase.database().ref('karachi/').on('child_added' , (snap) => {
            let obj = snap.val()
            obj.uid = snap.key
            console.log(obj)
            dispatch({ type: ActionTypes.KARACHIVAL, payload: obj})
            // swal('great')
        } )

    }
}
/*London Mall  */

export function reservedTwo(index , uid , editor) {
    return dispatch => {
        firebase.database().ref('london/' + uid +'/').set(editor)
            .then(()=>{
                console.log('message sent')
                dispatch({ type: ActionTypes.LONDON, payload: index , edit : editor })
            })
    }
}

export function reEditTwo(index , uid , editor) {
    return dispatch => {
        firebase.database().ref('london/' + uid +'/').set(editor)
            .then(()=>{
                // console.log('message sent')
                // dispatch({ type: ActionTypes.REEDITISL, payload: index , edit : editor })
            })
    }
}

export function getResultTwo() {
    return dispatch => {
        firebase.database().ref('london/').on('child_added' , (snap) => {
            let obj = snap.val()
            obj.uid = snap.key
            console.log(obj)
            dispatch({ type: ActionTypes.LONDONVAL, payload: obj})
            // swal('great')
        } )

    }
}

export function img(val) {
    return dispatch => {
         console.log(val)
         console.log(val , "**********************")
        firebase.storage().ref().child("/").put(val)
        //  firebase.storage().ref('/').child('img/').put(val)
        // firebase.database().ref('london/').on('child_added' , (snap) => {
        //     let obj = snap.val()
        //     obj.uid = snap.key
        // } )

    }
}
/*London Mall  */