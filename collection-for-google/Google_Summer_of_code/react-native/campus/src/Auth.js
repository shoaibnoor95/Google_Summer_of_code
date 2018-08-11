import React, { Component } from 'react'
import { View, StyleSheet, Alert } from 'react-native';
import { Actions } from 'react-native-router-flux'
import { StackNavigator, TabBarBottom, TabNavigator } from 'react-navigation'
import { Header, Left, Content, Item, Input, Icon, Button, Text, Body, Title, Form, CardItem, Picker, Item as FormItem } from 'native-base';

import { connect } from 'react-redux'
import { signUp } from './store/action/action'

class Home extends Component {
    constructor(props) {
        super(props)
        this.inputHandler = this.inputHandler.bind(this)
        this.state = {
            username: "",
            email: "",
            password: "",
            phone: "",
            selected: "student"
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
                <Title>SignUp</Title>
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
        let UserName = state.username.toLowerCase()
        let email = state.email.toLowerCase()
        let password = state.password.toLowerCase()
        let phone = state.phone.toLowerCase()
        let selected = state.selected.toLowerCase()
        let user = { UserName, email, password, phone, selected }
        if (user.UserName === "") {
            Alert.alert("Username is null")
        } else if (user.email === "") {
            Alert.alert("email is null")
        } else if (user.password === "") {
            Alert.alert("password is null")
        } else if (user.phone === "") {
            Alert.alert("phone is null")
        } else {
            let prop = this.props.navigation
            this.props.signUp(user, prop)
            this.setState({
                username: "",
                email: "",
                password: "",
                phone: "",
            })
        }
    }
    render() {
        const { username, email, password, phone } = this.state
        return (
            <View style={styles.container} >
                <Header primary style={{ alignItems: 'center' }} >
                    <Left>
                        <Button transparent>
                            <Icon name='menu' />
                        </Button>
                    </Left>
                    <Body>
                        <Title>SignUp</Title>
                    </Body>
                </Header>
                <View style={styles.main} >
                    <Form>
                        <Item style={styles.input} rounded >
                            <Icon active name='home' />
                            <Input scrollEnabled={true} onChangeText={this.inputHandler.bind(null, 'username')} value={username} placeholder='UserName' />
                        </Item>
                        <Item style={styles.input} rounded >
                            <Icon active name='home' />
                            <Input keyboardType={'email-address'} onChangeText={this.inputHandler.bind(null, 'email')} value={email} placeholder='email' />
                        </Item>
                        <Item style={styles.input} rounded >
                            <Icon active name='home' />
                            <Input onChangeText={this.inputHandler.bind(null, 'password')} secureTextEntry={true} value={password} placeholder='Password' />
                        </Item>
                        <Item style={styles.input} rounded >
                            <Icon active name='home' />
                            <Input onChangeText={this.inputHandler.bind(null, 'phone')} keyboardType='numeric' value={phone} placeholder='Phone' />
                        </Item>
                        <Picker
                            iosHeader="Select one"
                            mode="dropdown"
                            note={false}
                            selectedValue={this.state.selected}
                            onValueChange={(selected) => this.setState({ selected })}
                        >
                            <Item label="Are you student" value="student" />
                            <Item label="Are you company" value="company" />
                        </Picker>
                        <Button onPress={this.submit.bind(this)} primary block rounded >
                            <Text>SignUp</Text>
                        </Button>
                    </ Form>
                </View>
            </View>
        )
    }
}
function mapStateToProp(state) {
    return ({

    })
}
function mapDispatchToProp(dispatch) {
    return ({
        signUp: (valu, prop) => dispatch(signUp(valu, prop)),

    })
}

export default connect(mapStateToProp, mapDispatchToProp)(Home);

const Setting = () => {
    return (
        <View>
            <Text>
                Setting
            </Text>
        </View>
    )
}



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
