import React from 'react'
import { View, Text, Button, StyleSheet } from 'react-native'
// import { Actions } from 'react-native-router-flux';


// export const BaseNav = (props) => {
//     return (
//         <View>
//             <View style={{ flexDirection: "row", justifyContent: "center" }} >
//                 <Text onPress={() => props.navigation.navigate('home')} style={props.style1 || styles.button1} > Student SignUp</Text>
//                 <Text onPress={() => props.navigation.navigate('contact')} style={props.style2 || styles.button1} >Company SignUp</Text>
//                 <Text style={props.style3 || styles.button1} >SignIn</Text>
//             </View>
//         </View>
//     )
// }
export const AuthNav = (props) => {
    return (
        <View>
            <View style={{ flexDirection: "row", justifyContent: "center" }} >
                <Text onPress={() => props.property.navigate('auth')} style={props.style1 || styles.button1} > SignUp</Text>
                <Text onPress={() => props.property.navigate('home')} style={props.style2 || styles.button1} >LogIn</Text>
            </View>
            {/* <Text>Go to Contact</Text> */}
        </View>
    )
}

const styles = StyleSheet.create({
    container: {
        flex: 1,
    },
    button1: {
        width: '50%',
        textAlign: 'center',
        padding: 12,
        backgroundColor: 'grey',
        color: '#fff'
    },

})