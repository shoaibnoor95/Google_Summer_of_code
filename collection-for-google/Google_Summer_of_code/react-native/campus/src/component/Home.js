import React, { Component } from 'react'
import { View, StyleSheet, Alert } from 'react-native';
import { Actions } from 'react-native-router-flux'
import { BaseNav } from './Nav/baseNav'
import { StackNavigator, TabBarBottom, TabNavigator } from 'react-navigation'
import { Header, Left, Content, Item, Input, Icon, Button, Text, Body, Title, Form, CardItem } from 'native-base';
import { connect } from 'react-redux'
import { signUp } from '../store/action/action'

class Home extends Component {
    constructor(props) {
        super(props)
        this.inputHandler = this.inputHandler.bind(this)
        this.state = {
            username: "",
            email: "",
            password: "",
            phone: "",
        }
    }
    inputHandler(property, event) {
        this.setState({
            [property]: event
        })
    }
    submit() {
        let state = this.state
        let user = {
        }
    }
    render() {
        return (
            <View style={styles.container} >
                <View style={styles.main} >
                    <Text>
                        djhdgh
                    </Text>
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
        signUp: (valu) => dispatch(signUp(valu)),

    })
}

export default connect(mapStateToProp, mapDispatchToProp)(Home);

const Setting = () => {
    return (
        <View>
            <Header primary style={{ alignItems: 'center' }} >
                <Left>
                    <Button transparent>
                        <Icon name='menu' />
                    </Button>
                </Left>
                <Body>
                    <Title>Company SignUp</Title>
                </Body>
            </Header>
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
        width: '33.3333%',
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
