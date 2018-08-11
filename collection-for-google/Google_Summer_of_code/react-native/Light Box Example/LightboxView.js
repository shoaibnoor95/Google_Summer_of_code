import React from 'react';
import {View,Stylesheet,Image} from 'react-native';
import Lightbox from 'react-native-lightbox';
//import imran1 from "./images/imran1.jpg";
import imran2 from "./images/imran2.jpg";

export default class Light extends React.Component{
    
    render(){
        //const pic=this.props.source;
        //console.log(pic)
       
        return (
            <View>
            <Lightbox>
                <Image
                source={imran2}
                style={{width:'100%',height:300}}
                />
                </Lightbox>
            </View>
        )
    }
}