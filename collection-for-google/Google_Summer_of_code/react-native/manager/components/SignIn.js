import React from 'react';
import {connect} from 'react-redux';
import {Header,Icon,Form,Button,CardItem,Left,Text,Title,Body, Item, Input } from'native-base';
import {StackNavigator,TabNavigator,TabBarBottom,NavigationActions} from 'react-navigation';
import {View,StyleSheet,Alert,AsyncStorage} from 'react-native';
import {Login }from '../Store/Action/action';
import firebase from 'firebase';

class SignIn extends React.Component{
    constructor(props){
     super(props);
    }
    state={
        email:"",
        password:'',
    }
 static navigationOptions={
     header:<Header primary style={{alignItems:'center'}}>
     <Left>
         <Button tranparent>
         <Icon name="menu"/>
         </Button>  
    </Left>
    <Body>
        <Title> Login</Title>
        </Body>
        </Header>

 }
 inputHandler(property,event){
    this.setState({
         [property]:event
    })

 }   
submit(){
    let state=this.state;
    let email=state.email.toLocaleLowerCase();
    let password=state.password.toLocaleLowerCase();
    let user={email,password};
    if (user.email === "") {
        Alert.alert("email is null")
    } else if (user.password === "") {
        Alert.alert("password is null")
    } else {
        let prop = this.props.navigation
        this.props.logIn(user, prop)
        this.setState({
            email: "",
            password: "",
        })
    }
}

onsubmit(){
    firebase.auth().signOut().then(function(){
        AsyncStorage.removeItem("user");
    })
    .catch((error)=>{
        console.log(error.message)
    })
}
render(){
    const {company,student}=this.props;
    const {email,password}=this.state;
    return(
        <View style={styles.container}>
        <Header primary style={{alignItems:'center'}}>
            <Left>
                <Button>
                    <Icon name="menu"/>
                    </Button>
                    </Left>
                    <Body>
                        <Title>Sign In</Title>
                        </Body>
                        </Header>
                        <View style={styles.main}>
                            <Form>
                                <Item style={style.input} rounded>
                                <Icon active name="home"/>
                                <Input keyboardType={'email-address'} onChangeText={this.inputHandler.bind(this,"email")}/>
                             </Item> 
                                <Item style={styles.input} 
                             </Form> 
                        </View>
                </View>
    )

}
}
const styles=StyleSheet.create({

    container:{

    },
    main:{

    }
})