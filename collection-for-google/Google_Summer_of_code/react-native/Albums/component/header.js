import React from 'react';
import {View,Text} from 'react-native';

const header=(props)=>{
const {viewStyle,textStyle}=styles;
          return (
        <View style={viewStyle}>
         <Text style={textStyle}> {props.headerText}
        </Text>
        </View>  
        );
        }
      
        const styles ={
                viewStyle: {
                  backgroundColor: '#F8F8F8',
                  alignItems: 'center',
                  justifyContent: 'center',
                  shadowColor:'#C4C3A9',
                  shadowOffset:{width:0,height:2},
                  shadowOpacity:0.2,
                  elevation:2,
                  position:'relative',
                  height:60,
                  paddingTop:15,
                },
                textStyle:{
                  fontSize:20
              }
              };
              
export default header;