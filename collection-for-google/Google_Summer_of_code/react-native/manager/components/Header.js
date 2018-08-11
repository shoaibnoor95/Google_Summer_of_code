import React from 'react';
import {View,Text} from 'react-native';
import {Provider} from 'react-redux'
const Header=(props)=>{
    return(
        <View style={styles.headStyle}>
           <Text style={styles.textStyle}>
            {props.headerText}
            </Text>
    </View>
    )
}
const styles={
    headStyle:{
    height:60,
    paddingTop:20,
    backgroundColor:'#F8F8F8',
    shadowOpacity:0.1,
    shadowOffset:{width:0,height:2},
    alignItems:'center',
    justifyContent:'center',
    position:'relative'
},
textStyle:{
    fontSize:20
}
}
export default Header;