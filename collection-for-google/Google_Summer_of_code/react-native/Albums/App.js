import React from 'react';
import { StyleSheet, Text, View } from 'react-native';
import Header from './component/header';
import Albumlist from './component/AlbumList';
export default class App extends React.Component {
  render() {
    return (
      <View style={{flex:1}}>
      <Header headerText="Album"/>
      <Albumlist/>
      </View>
    );
  }
}