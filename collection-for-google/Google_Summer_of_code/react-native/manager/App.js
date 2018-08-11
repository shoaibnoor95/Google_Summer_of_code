import React from 'react';
import  RouterComponent from './components/RouterComponent';
import { StyleSheet, Text, View } from 'react-native';
import Header from './components/Header'; 
import {Provider} from 'react-redux';
import store from './store'
import firebase from 'firebase';
export default class App extends React.Component {
  componentWillMount(){
    var config = {
      apiKey: "AIzaSyAIWWzh2sPG1jZkitZvISXPnJZKBggKbvQ",
      authDomain: "learningfirebase-e9a4c.firebaseapp.com",
      databaseURL: "https://learningfirebase-e9a4c.firebaseio.com",
      projectId: "learningfirebase-e9a4c",
      storageBucket: "learningfirebase-e9a4c.appspot.com",
      messagingSenderId: "970343232076"
    };
    firebase.initializeApp(config);
  }   
  render() {
    return (
      <Provider store={store}>
     
      <RouterComponent />
      
      </Provider>
    );
  }
}

