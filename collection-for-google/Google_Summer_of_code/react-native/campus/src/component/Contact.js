import React, { Component } from 'react'
import { View, Text, Button, StyleSheet } from 'react-native';
import { Actions } from 'react-native-router-flux'
import { BaseNav } from './Nav/baseNav'

class Contact extends Component {
    static navigationOptions = {
        header: <Text>Header</Text>
    }
    render() {
        return (
            <View style={styles.container} >
                <View style={styles.main}><Text>Contact</Text></View>
                <BaseNav style2= {styles.buttonActive} /> 
            </View>
        )
    }
}
const styles = StyleSheet.create({
    container: {
        flex: 1
    },
    main: {
        flex: 1,
        justifyContent: 'space-between',
        alignItems: 'stretch',
        backgroundColor: 'white'

    },
    buttonActive: {
        width: '33.3333%',
        textAlign : 'center',
        padding: 12,
        backgroundColor: 'red',
        color : '#ddd'
    }
})

export default Contact;