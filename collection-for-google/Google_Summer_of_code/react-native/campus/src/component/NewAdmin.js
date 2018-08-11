import React, { Component } from 'react'
import { View, StyleSheet, Alert } from 'react-native';
import { StackNavigator, TabBarBottom, TabNavigator } from 'react-navigation'
import { Header, Left, Content, Item, Input, Icon, Button, Text, Body, Title, Form, CardItem, Picker, Item as FormItem } from 'native-base';
// const Item = Picker.Item;

import { connect } from 'react-redux'
import { signUp } from '../store/action/action'

class NewAdmin extends Component {
    constructor(props) {
        super(props)
        this.inputHandler = this.inputHandler.bind(this)
        this.state = {
            username: "",
            email: "",
            password: "",
            phone: "",
            selected: "admin"
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
        let user = {
            UserName: state.username,
            email: state.email,
            password: state.password,
            phone: state.phone,
            selected: state.selected
        }
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
               <Header searchBar rounded>
                    <Item onPress={() => this.props.navigation.navigate('SearchList')} >
                        <Icon name="ios-search" />
                        <Input onTouchEnd={() => this.props.navigation.navigate('SearchList')} placeholder="Search" />
                        <Icon name="ios-people" />
                    </Item>
                    <Button transparent>
                        <Text>Search</Text>
                    </Button>
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

export default connect(mapStateToProp, mapDispatchToProp)(NewAdmin);


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
