import React from 'react';
import {View,StyleSheet,Alert} from 'react-native';
import {StackNavigator,TabNavigator,TabBarBottom} from 'react-navigation';
import {Header,Left,Content,Item,Input,Icon,Button,Text,Body,CardItem,Picker,Item as FormItem, Title} from 'native-base';
import {connect} from 'react-redux';
import {signUp} from './store/action/action';
class Home extends React.Component{
    constructor(props){
        super(props);
    }
    state={
        userName:'',
        email:'',
        password:'',
        phone:'',
        selected:'student',

    }
    static navigationOptions={
        header: <Header primary style={{alignItems:'center'}}>
            <Left>
                <Button tranparent>
                <Icon name="menu"/>
                </Button>
                </Left>
                <Body>
                    <Title>Signup </Title>
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
        let userName=state.userName.toLowerCase();
        let email=state.email.toLowerCase();
        let password=state.password.toLowerCase();
        let phone=state.phone.toLowerCase();
        let selected=state.selected.toLocaleLowerCase();
        let user={userName,email,password,phone,selected};
        if(user.userName==""){
            Alert.alert("Username is null")
        }
        else if(user.password==="")
        {        
            Alert.alert("Password is null")
        }
        else if(user.email==="")
        Alert.alert("Email is null")
        else if(user.selected==="")
        Alert.alert("No attribute is selected")
        else if(user.phone==="")
        Alert.alert("Phone is null")
        else{
            let prop=this.props.navigation;
            this.props.signUp(user,prop);
            this.setState({
                userName:"",
                email:"",
                password:"",
                phone:""
            })
        }    
    }
    render(){
        const {userName,email,password,phone,selected}=this.state;
        return(
            <View style={}>
            <Header primary style={{alignItems:'center'}}>
            <Left>
                <Button transparent>
                <Icon name='menu'/>
                </Button>
                </Left>
                <Body>
                    <Title>Signup</Title>
                    </Body>
                    </Header>
                   <View style={}>
                   <Form>
                       <Item style={} rounded>
                       <Icon active name="home"/>
                       <Input scrollEnabled={true}  value={userName} onChangeText={this.inputHandler.bind(this,"userName")} placeholder='Username' />
                       </Item>
                       <Item style={} rounded>
                       <Icon active name="home"/>
                       <Input secureTextEntry={true} value={password} onChangeText={this.inputHandler.bind(this,"password")} placeholder='Password' />
                       </Item>
                       <Item style={} rounded>
                       <Icon active name="home"/>
                       <Input keyboardType={'email-address'} value={email} onChangeText={this.inputHandler.bind(this,"email")} placeholder='Email' />
                       </Item>
                       <Item style={} rounded>
                       <Icon active name="home"/>
                       <Input keyboardType={'numeric'} value={phone} onChangeText={this.inputHandler.bind(this,"phone")} placeholder='Email' />
                       </Item>
                        <Picker 
                        iosHeader="Select One"
                        selectedValue={selected}
                        mode="dropdown"
                        onValueChange={(selected)=>{this.setState({selected})}}>
                        <Item label="Are you a student" value="student"/>
                        <Item label="Are you a teacher" value="company"/>
                        </Picker>
                        <Button onPress={this.submit.bind(this)} primary block rounded>
                        <Text>Sign Up</Text>
                        </Button>
                    </Form>
                    </View>
                    </View>


        )
    }

}
export default connect (mapStateToProps,mapDispatchToProps) (Home);
const Setting =()=>{
    return(
        <View>
            <Text>
                Setting
                </Text>
            </View>
    )
}
const styles=StyleSheet.create({
    header:{
        
    },
    container:{
        flex:1
    },
    main:{
        flex:1,
        justifyContnent:'flex-start',
        alignItems:'stretch',
        backgroundColor:'white'
    },
    buttonActive:{
        width:'50%',
        textAlign:'center',
        padding:12,
        backgroundColor:'red',
        color:'#ddd'
    },
    input:{
        marginTop:6,
        marginBottom:6
    }
})