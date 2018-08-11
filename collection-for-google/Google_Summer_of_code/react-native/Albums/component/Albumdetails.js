import React,{Component} from 'react';
import {View,Text,Image,Linking} from 'react-native';
import Cardsection from './CardSection';
import Card from './Card';
import CardSection from './CardSection';
import Button from './Button';


const Albumdetails=({album})=>{
    const {title,artist,thumbnail_image,image,url}=album;
    const {thumbnailStyle,headerContentStyle,thumbnalContinerStyle,headerTextStyle,imageStyle}=styles;
return(
    <Card> 
        <Cardsection>
            
            <View style={thumbnalContinerStyle}>
        <Image source={{uri:thumbnail_image}} style={thumbnailStyle}/>
                </View>
     <View style={headerContentStyle}>                     
    <Text style={headerTextStyle} >{title}</Text>
    <Text>{artist}</Text>
    </View>
</Cardsection>
<CardSection>
<Image source={{uri:image}} style={imageStyle}/>
    </CardSection>
    <CardSection>
        <Button onPress={Linking.openURL(url)}/>
        </CardSection>
    </Card>
)
}
const styles={
    thumbnalContinerStyle:{
        justifyContent:'center',
        alignItems:'center',
        marginLeft:10,
        marginRight:10
    },
    thumbnailStyle:{
        height:50,
        width:50
    },
headerContentStyle:{
    flexDirection:'column',
    justifyContent:'space-around'
},
headerTextStyle:{
    fontSize:18 
},
imageStyle:{
    height:300,
    flex:1,
    width:null
}
}
export default Albumdetails;