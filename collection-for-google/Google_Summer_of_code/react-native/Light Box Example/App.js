/**
 * Sample React Native App
 * https://github.com/facebook/react-native
 * @flow
 */

import imran1 from "./images/imran1.jpg";
import imran2 from "./images/imran2.jpg";
import React, { Component } from 'react';
import {
  Platform,
  StyleSheet,
  Text,
  View
} from 'react-native';
import LightboxView from './LightboxView';

export default class App extends Component{
  render() {
    return (
      <View>
        <LightboxView />
      {/* <LightboxView /> */}
      </View>
    );
  }
}
