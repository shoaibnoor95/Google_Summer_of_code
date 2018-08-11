import React from 'react';
import {View} from 'react-native';
const Card=(props)=>{
    return(
        <View style={styles.containerStyle}>
            {props.children}
        </View>
    )
}
const styles={
    containerStyle:{
        borderWidth:1,
        borderRadius:1,
        borderColor:'#ddd',
        elevation:1,
        marginLeft:5,
        marginRight:5,
        shadowRadius:2,
        shadowOffset:{width:0,height:2},
        marginTop:10
    }
}
export default Card;