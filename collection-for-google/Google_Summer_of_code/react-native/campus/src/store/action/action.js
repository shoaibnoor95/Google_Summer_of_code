import actionTypes from '../constant/constant';
import firebase from '../../firebase'
import { Alert, AsyncStorage } from 'react-native'
import { NavigationActions } from 'react-navigation'
import Home from '../../component/Home';
import fire from '../../firebase';



export function MyPostApply() {
    firebase.database().ref('users/').on('child_added', (snap) => {
        let obj1 = snap.val()
        let name = obj1.UserName
        firebase.database().ref('jobpost/' + name).on('child_added', function (snapp) {
            let obj = snapp.val();
            console.log(obj, ' dekh k')
            // dispatch({
            //     type: actionTypes.ALLJOBPOST,
            //     payload: obj
            // })
        })
    })
}

export function searchUsers(text) {
    return dispatch => {
        firebase.database().ref('users/').on('child_added', (snap) => {
            let obj = snap.val()
            let uid = obj.uid
            let name = obj.UserName
            if (text === name) {
                firebase.database().ref('users/' + uid).once('value').then((snapp) => {
                    let obj1 = snapp.val()
                    dispatch({
                        type: actionTypes.SEARCH_USERS,
                        payload: obj1,
                        bolian: true
                    })
                })
            }
        })

    }
}
export function allUsers() {
    return dispatch => {
        firebase.database().ref('users/').on('child_added', (snap) => {
            let obj = snap.val()
            obj.key = snap.key
            dispatch({
                type: actionTypes.ALLUSERS,
                payload: { key: snap.key, obj }
            })
        })

    }
}

export function allJobList() {
    return dispatch => {
        firebase.database().ref('users/').on('child_added', (snap) => {
            let obj1 = snap.val()
            let name = obj1.UserName
            firebase.database().ref('jobpost/' + name).on('child_added', function (snapp) {
                let obj = snapp.val();
                obj.isEdit = true
                dispatch({
                    type: actionTypes.ALLJOBPOST,
                    payload: obj
                })
            })
        })

    }
}
export function jobList() {
    return dispatch => {
        let currentUser = firebase.auth().currentUser
        firebase.database().ref('users/' + currentUser.uid).once('value').then((snap) => {
            let obj1 = snap.val()
            firebase.database().ref('jobpost/' + obj1.UserName).on('child_added', function (snap) {
                let obj = snap.val();
                // console.log(obj, "jajaja ")
                dispatch({
                    type: actionTypes.JOBPOST,
                    payload: obj
                })
            })
        })

    }
}
export function apply() {
    return dispatch => {
        firebase.database().ref('users/').on('child_added', (snap) => {
            let obj1 = snap.val()
            let name = obj1.UserName
            firebase.database().ref('jobpost/' + name).on('child_added', function (snapp) {
                let obj = snapp.val();
                firebase.database().ref('/applypost/' + name + "/" + obj.title + "/").once('value').then((snappp) => {
                    let obj2 = snappp.val()
                })
                // dispatch({
                //     type: actionTypes.ALLJOBPOST,
                //     payload: obj  
                // })
            })
        })
    }
}// AllJobsApply for company

export function AllJobsApply() {
    return dispatch => {
        firebase.database().ref('users/').on('child_added', (snap) => {
            let obj1 = snap.val()
            let name = obj1.UserName
            firebase.database().ref('jobpost/' + name).on('child_added', function (snapp) {
                let obj = snapp.val();
                let obApply = obj.apply
                // Object.keys(obApply).map((key) => {
                //     let newP = obApply[key];u
                //     console.log(newP, ' wawoa')
                //     return newP;
                // })
                // dispatch({
                //     type: actionTypes.ALLJOBPOST,
                //     payload: obj
                // })
            })
        })
    }// AllJobsApply for admin
}
export function myapplying() {
    return dispatch => {
        // firebase.database().ref('users/').on('child_added', (snap) => {
        //     let obj1 = snap.val()
        //     let name = obj1.UserName
        //     let currentUser = firebase.auth().currentUser
        //     firebase.database().ref('applypost/' + name).on('child_added', function (snapp) {
        //         let obj = snapp.val();
        //         // console.log(obj, " array")
        //         Object.keys(obj).map((key) => {
        //             let newP = obj[key];
        //             return newP;
        //         })

        //         // dispatch({
        //         //     type: actionTypes.ALLJOBPOST,
        //         //     payload: obj
        //         // })
        //     })
        // })
    }
}




export function signUp(user, prop) {
    return dispatch => {
        console.log('user', user);
        firebase.auth().createUserWithEmailAndPassword(user.email, user.password)
            .then((createdUser) => {
                console.log('signed up successfully', createdUser.uid);
                delete user.password;
                user.uid = createdUser.uid;
                user.isCheck = true

                firebase.database().ref('users/' + createdUser.uid + '/').set(user)
                    .then(() => {
                        firebase.database().ref('users/' + createdUser.uid).once('value', function (snapshout) {
                            let data = snapshout.val()
                            console.log(snapshout.val())

                            // AsyncStorage.setItem("user", snapshout.val()).then(value => {
                            //     console.log("AsyncStorage ", value)
                            // }).catch(error => {
                            //     console.log("AsyncStorage Error ", error)
                            // })
                            alert(data.selected)
                            if (data.selected === "student") {
                                prop.navigate('Student')
                            } else if (data.selected === "company") {
                                prop.navigate('Company')
                            } else if (data.selected === "admin") {
                                prop.navigate('Admin')
                            }
                            // firebase.database().ref('users/').once('value')
                            //     .then((userData) => {
                            //         let allUsers = userData.val();
                            //         let currentUserUid = firebase.auth().currentUser.uid;
                            //         console.log(currentUserUid)
                            //         let allUsersArr = [];
                            //         for (var key in allUsers) {
                            //             allUsersArr.push(allUsers[key]);
                            //         }
                            //         // NavigationActions.navigate({ routeName: 'home' })
                        })
                    })

            })
            .catch((error) => {
                if (error.message === "The email address is badly formatted.") {
                    Alert.alert(error.message)
                } else if (error.message === "Password should be at least 6 characters") {
                    Alert.alert(error.message)
                } else if (error.message === "The email address is already in use by another account.") {
                    Alert.alert(error.message)
                }
                else {
                    console.log(error)
                }
            })

    }
}  //signUp action



export function logIn(user, prop) {
    return dispatch => {
        firebase.auth().signInWithEmailAndPassword(user.email, user.password)
            .then((signedinUser) => {
                firebase.database().ref('users/' + signedinUser.uid).once('value', function (snapshout) {
                    let data = snapshout.val()
                    console.log(snapshout.val())
                    //  AsyncStorage.setItem('users', JSON.stringify(user));
                    alert(data.selected)
                    if (data.selected === "student") {
                        prop.navigate('Student')
                    } else if (data.selected === "company") {
                        prop.navigate('Company')
                    } else if (data.selected === "admin") {
                        prop.navigate('Admin')
                    }
                })
            })
            .catch((error) => {
                if (error.message === "The email address is badly formatted.") {
                    Alert.alert(error.message)
                } else if (error.message === "The password is invalid or the user does not have a password.") {
                    Alert.alert(error.message)
                } else if (error.message === "There is no user record corresponding to this identifier. The user may have been deleted.") {
                    Alert.alert(error.message)
                }
                else {
                    console.log(error)
                    alert('ss')
                }
            })
    }
}  // logIn action

export function CurrentUser() {
    return dispatch => {
        let createdUser = firebase.auth().currentUser;
        firebase.database().ref('users/' + createdUser.uid).once('value', function (snapshout) {
            let user = snapshout.val()
            dispatch({
                type: actionTypes.USER,
                payload: user
            })
        })
    }
}
export function JobPost(jobpost) {
    return dispatch => {
        Alert.alert("Submit your Post", jobpost.post)
        firebase.database().ref('/jobpost/' + jobpost.name + "/" + jobpost.title + "/").set(jobpost);
    }
}
export function jobApply(user, company, index) {
    return dispatch => {
        firebase.database().ref('/jobpost/' + company.name + "/" + company.title + "/apply/" + user.uid).set(user.uid)
        dispatch({
            type: actionTypes.JOB_APPLY,
            payload: index
        })
    }
}
export function JobCancel(user, company, index) {
    return dispatch => {
        firebase.database().ref('/jobpost/' + company.name + "/" + company.title + "/apply/" + user.uid).remove()
        dispatch({
            type: actionTypes.JOB_CANCEL,
            payload: index
        })
    }
}

export function Jobdelete(company, index) {
    return dispatch => {
        // Alert.alert("DELETE JOB")
        console.log(company.name, " / ", company.title)
        firebase.database().ref('/jobpost/' + company.name + "/" + company.title).remove()
        dispatch({
            type: actionTypes.DELETE_POST,
            payload: index
        })
    }
}