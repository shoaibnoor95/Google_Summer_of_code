import React, { Component } from 'react'
import { View, StyleSheet, Alert, TextInput, ToastAndroid, ScrollView } from 'react-native';
import { Actions } from 'react-native-router-flux'
import { BaseNav } from './Nav/baseNav';
import { Container, Header, Item, Input, Icon, Button, Text, Segment, Card, dataSource, CardItem, Body, List, ListItem, Content, ListView, Picker } from 'native-base';
import { StackNavigator, TabBarBottom, TabNavigator } from 'react-navigation'
import { searchUsers } from '../store/action/action'
import { connect } from 'react-redux'

class SearchList extends Component {
    constructor(props) {
        super(props)
        this.state = {
            text: '',
            array: []
        }
    }
    static navigateOptions = {
        header: true
    }
    componentDidMount() {
    }
    submit() {
        let text = this.state.text
        this.props.searchUsers(text)
    }
    render() {
        const { searchUser } = this.props
        return (
            <View style={styles.container} >
                <Button onPress={() => this.props.navigation.goBack()} success block ><Text> {'<-'} Go Back </Text></Button>
                <Header searchBar rounded>
                    <Item>
                        <Icon onPress={this.submit.bind(this)} name="ios-search" />
                        <Input onChangeText={(text) => this.setState({ text })} value={this.state.text} placeholder="Search" />
                        <Icon onPress={this.submit.bind(this)} name="ios-people" />
                    </Item>
                    <Button onPress={this.submit.bind(this)} transparent>
                        <Text>Search</Text>
                    </Button>
                </Header>
                <ScrollView style={{ borderBottomColor: "#777", borderBottomWidth: 4, borderRadius: 50, borderStyle: "solid" }}>
                    {/* <Button dark block rounded > <Text> Log Out </Text> </Button> */}
                    <List >
                        <ListItem style={{ alignItems: 'center' }} itemDivider>
                            <Text style={{ fontSize: 23, color: 'red', fontWeight: 'bold' }} >{searchUser.selected}{"  "} {searchUser.UserName}</Text>
                        </ListItem>
                        <ListItem style={{ flexDirection: 'row' }} >
                            <Text style={{ fontSize: 14, flex: 1 }} >{searchUser.email}</Text>
                            <Text style={{ fontSize: 14, flex: 1 }} >{searchUser.phone}</Text>
                        </ListItem>
                    </List>
                </ScrollView>
            </View>
        )
    }
}
let mapStateToProp = (state) => {
    return ({
        searchUser: state.root.searchUser,
    })
}
let mapDispatchToProp = (dispatch) => {
    return ({
        searchUsers: (text) => dispatch(searchUsers(text))
    })
}
export default connect(mapStateToProp, mapDispatchToProp)(SearchList);
const styles = StyleSheet.create({
    header: {
    },
    container: {
        flex: 1,
    },
    main: {
        // flex: 1,
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