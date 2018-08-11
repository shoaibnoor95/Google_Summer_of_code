import React from 'react';
import {TextInput,View,Text} from 'react-native';
const Input=({label,value,onchange,secureTextEntry,placeHolder})=>{
    return(
        <View style={styled.viewStyle}>
        <Text style={styled.labelStyle}>{label}</Text>   
        <TextInput
        style={styled.textStyle}
        autoCorrect={false}
        secureTextEntry={secureTextEntry}
        placeholder={placeHolder}
        value={value}
        onChangeText={onchange}/>
        </View>
    );
}
const styled={
    viewStyle:{
        height:40,
        flex:1,
        flexDirection:'row'
    },
    textStyle:{
        flex:2,
        color:'#000',
        fontSize:18,
        paddingLeft:5,
        paddingRight:5,
        marginBottom:13,
        lineHeight:23,
        flex:2
    },
    labelStyle:{
    paddingLeft:10,
        alignItems:'center',
        fontSize:18
    }
}
export default Input;