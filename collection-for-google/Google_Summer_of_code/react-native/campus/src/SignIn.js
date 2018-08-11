import React, { Component } from 'react'
import { View, StyleSheet, Alert, AsyncStorage } from 'react-native';
import { Actions } from 'react-native-router-flux'
import { StackNavigator, TabBarBottom, TabNavigator, NavigationActions } from 'react-navigation'
import { Header, Left, Content, Item, Input, Icon, Button, Text, Body, Title, Form, CardItem } from 'native-base';
import { connect } from 'react-redux'
import { logIn } from './store/action/action'
import firebase from './firebase'

class SignIn extends Component {
    constructor(props) {
        super(props)
        this.inputHandler = this.inputHandler.bind(this)
        this.state = {
            email: "",
            password: "password",
        }
    }
    static navigationOptions = {
        header: <Header primary style={{ alignItems: 'center' }} >
            <Left>
                <Button transparent>
                    <Icon name='menu' />
                </Button>
            </Left>
            <Body>
                <Title>LogIn</Title>
            </Body>
        </Header>
    }
    inputHandler(property, event) {
        this.setState({
            [property]: event
        })
    }
    submit() {
        let state = this.state
        let email = state.email.toLowerCase();
        let password = state.password.toLowerCase();
        let user = { email, password, }
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
    noSubmit() {
        // this.props.student && this.props.navigation.navigate('Home')
        // this.props.company && this.props.navigation.navigate('Home')
        firebase.auth().signOut().then(function () {
            AsyncStorage.removeItem('user');
            // Sign-out successful.
        }).catch(function (error) {
            console.log(error)
        });
    }
    componentDidMount() {
    }
    render() {
        const { company, student } = this.props
        const { email, password } = this.state
        return (
            <View style={styles.container} >
                <Header primary style={{ alignItems: 'center' }} >
                    <Left>
                        <Button transparent>
                            <Icon name='menu' />
                        </Button>
                    </Left>
                    <Body>
                        <Title>SignIn</Title>
                    </Body>
                </Header>
                <View style={styles.main} >
                    <Form>
                        <Item style={styles.input} rounded >
                            <Icon active name='home' />
                            <Input keyboardType={'email-address'} onChangeText={this.inputHandler.bind(null, 'email')} value={email} placeholder='email' />
                        </Item>
                        <Item style={styles.input} rounded >
                            <Icon active name='home' />
                            <Input onChangeText={this.inputHandler.bind(null, 'password')} secureTextEntry={true} value={password} placeholder='Password' />
                        </Item>
                        <Button onPress={this.submit.bind(this)} primary block rounded >
                            <Text>LogIn</Text>
                        </Button>
                        <Text>
                            {'\n'}
                        </Text>
                        <Button onPress={this.noSubmit.bind(this)} primary block rounded >
                            <Text>Clear</Text>
                        </Button>
                    </ Form>
                </View>
            </View>
        )
    }
}
function mapStateToProp(state) {
    return ({
        student: state.root.student,
        company: state.root.company
    })
}
function mapDispatchToProp(dispatch) {
    return ({
        logIn: (valu, prop) => dispatch(logIn(valu, prop))
    })
}

export default connect(mapStateToProp, mapDispatchToProp)(SignIn);



const styles = StyleSheet.create({
    header: {

    },
    container: {
        flex: 1,
    },
    main: {
        flex: 1,
        justifyContent: 'flex-start',
        alignItems: 'stretch',
        backgroundColor: 'white'
    },
    buttonActive: {
        width: '50%',
        textAlign: 'center',
        padding: 12,
        backgroundColor: 'red',
        color: '#ddd'
    },
    input: {
        marginBottom: 6,
        marginTop: 6,

    }
})