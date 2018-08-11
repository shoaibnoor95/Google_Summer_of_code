import firebase from 'firebase';

  var config = {
    apiKey: "AIzaSyA3W0VJsRAdPTcBW6EtqfKAzzJO-WDlnjk",
    authDomain: "adminpannel-2625e.firebaseapp.com",
    databaseURL: "https://adminpannel-2625e.firebaseio.com",
    projectId: "adminpannel-2625e",
    storageBucket: "adminpannel-2625e.appspot.com",
    messagingSenderId: "388760984590"
  };

  let fire =  firebase.initializeApp(config);
export default fire