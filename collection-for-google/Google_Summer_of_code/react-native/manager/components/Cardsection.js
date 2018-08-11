import React from 'react';
import {Text,View} from 'react-native';
const Carsection=(props)=>{
    console.log(props)
        return(
            <View style={Styles.containerStyle}>
                {props.children}
                </View>
        )
    }

const Styles={
    containerStyle:{
        borderBottomWidth:1,
        padding:5,
        backgroundColor:'#fff',
        justifyContent:'flex-start',
        flexDirection:'row',
        borderColor:'#ddd',
        position:'relative'
    }
}
export default Carsection;