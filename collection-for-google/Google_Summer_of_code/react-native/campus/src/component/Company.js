import React, { Component } from 'react'
import { View, StyleSheet, Alert, TextInput, ToastAndroid, ScrollView } from 'react-native';
import { Actions } from 'react-native-router-flux'
import { BaseNav } from './Nav/baseNav';
import { Container, Header, Item, Input, Icon, Button, Text, Segment, Card, dataSource, CardItem, Body, List, ListItem, Content, ListView, Picker } from 'native-base';
import { StackNavigator, TabBarBottom, TabNavigator } from 'react-navigation'
import { connect } from 'react-redux'
import { JobPost, CurrentUser, jobList, allUsers } from '../store/action/action'

class Company extends Component {
    constructor(props) {
        super(props)
        this.state = {
            text: '',
            title: '',
            isEdit: false,
            selected: 'Applying List ....'
        }
    }
    componentWillMount() {
        this.props.jobList()
    }
    componentDidMount() {
        this.props.allUsers()
        this.props.CurrentUser()
    }
    submit() {
        let state = this.state
        let user = this.props.user
        if (state.title === "") {
            ToastAndroid.show('White Space is not valid', ToastAndroid.SHORT);
        }
        else if (state.text === "") {
            ToastAndroid.show('Post Is null', ToastAndroid.SHORT);
        } else {
            let name = user.UserName.toLowerCase()
            let phone = user.phone.toLowerCase()
            let message = state.text.toLowerCase()
            let title = state.title.toLowerCase()
            let uid = user.uid.toLowerCase()
            let obj = { name, phone, message, title, uid, }
            this.props.NewJobPost(obj)
            this.setState({
                text: '',
                isEdit: false
            })
        }
    }

    render() {
        const { isEdit, title, text } = this.state
        const { allUser } = this.props
        let TOTALJOBS = this.props.jobpost.map((val, ind) => {
            return (
                <View style={{ borderBottomColor: "#777", borderBottomWidth: 4, borderRadius: 50, borderStyle: "solid" }}>
                    {/* <Button dark block rounded > <Text> Log Out </Text> </Button> */}
                    <List >
                        <ListItem style={{ alignItems: 'center' }} itemDivider>
                            <Text style={{ fontSize: 23, color: 'red', fontWeight: 'bold' }} >Company :  {val.name}</Text>
                        </ListItem>
                        <ListItem style={{ flexDirection: 'row' }} >
                            <Text style={{ fontSize: 14, flex: 1 }} >Title : {val.title}</Text>
                            <Text style={{ fontSize: 14, flex: 1 }} >Phone : {val.phone}</Text>
                        </ListItem>
                        <ListItem itemDivider>
                            <Text style={{ fontSize: 20, color: "blue" }} >{val.message}</Text>
                        </ListItem>
                        {(val.apply !== undefined) ?
                            <ListItem style={{ flexDirection: 'row' }} itemDivider>
                                <Text style={{ flex: 1 }} > Applying List...</Text>
                                <Picker
                                    style={{ flex: 1 }}
                                    iosHeader="Select one"
                                    mode="dropdown"
                                    note={true}
                                    selectedValue={this.state.selected}
                                    onValueChange={(selected) => this.setState({ selected })}
                                >
                                    {Object.keys(val.apply).map((key) => {
                                        let newP = val.apply[key];
                                        return <Item label={allUser[newP].UserName} value={allUser[newP].UserName} />
                                    })}
                                </Picker>
                            </ListItem>
                            :
                            null
                        }
                    </List>
                    {/* {(val.apply === undefined) ?
                        <Button success  rounded > <Text> EDIT </Text> </Button>
                        :
                        null
                    } */}
                </View>
            )
        })
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
                {isEdit ?
                    <View style={styles.main} >
                        <Icon onPress={() => this.setState({ isEdit: false })} name='cog' />
                        <TextInput
                            placeholder="Job title"
                            onChangeText={(title) => this.setState({ title })}
                            value={title} />
                        <TextInput
                            placeholder="Enter You Text"
                            multiline={true}
                            numberOfLines={4}
                            onChangeText={(text) => this.setState({ text })}
                            value={text} />
                        <Button onPress={this.submit.bind(this)} full ><Icon name='cog' /><Text>Submit</Text></Button>
                    </View>
                    :
                    <TextInput placeholder="Create Post" onFocus={() => this.setState({ isEdit: true })} />
                }
                <ScrollView>
                    {TOTALJOBS}
                </ScrollView>
            </View>
        )
    }
}
let mapStateToProp = (state) => {
    return ({
        user: state.root.user,
        jobpost: state.root.jobpost,
        allUser: state.root.allUser,
    })
}
let mapDispatchToProp = (dispatch) => {
    return ({
        jobList: () => dispatch(jobList()),
        NewJobPost: (obj) => dispatch(JobPost(obj)),
        CurrentUser: () => dispatch(CurrentUser()),
        allUsers: () => dispatch(allUsers()),
    })
}
export default connect(mapStateToProp, mapDispatchToProp)(Company);
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