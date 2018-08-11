import React from 'react';
import {ActivityIndicator,View} from 'react-native';
const Spinner=(props)=>{
    return(

        <View style={styles.spinerStyle}>
        <ActivityIndicator size={props.size || "large"}/>
       </View> 
    )
}
const styles={
    spinerStyle:{
        alignItems:'center',
        justifyContent:'center',
        flex:1
    }
}
export default Spinner;
