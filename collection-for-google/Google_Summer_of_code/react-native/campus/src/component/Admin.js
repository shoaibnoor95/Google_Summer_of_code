import React, { Component } from 'react'
import { View, StyleSheet, Alert, TextInput, ScrollView } from 'react-native';
import { Actions } from 'react-native-router-flux'
import { BaseNav } from './Nav/baseNav';
import { Container, Header, Item, Input, Icon, Button, Text, Segment, Card, dataSource, CardItem, Body, List, ListItem, Content, ListView, Picker } from 'native-base';
import { StackNavigator, TabBarBottom, TabNavigator } from 'react-navigation'
import { connect } from 'react-redux'
import { CurrentUser, allJobList, Jobdelete, allUsers } from '../store/action/action'


class Admin extends Component {
    constructor(props) {
        super(props)
        this.state = {
            selected: ""
        }
    }
    componentDidMount() {
        this.props.allUsers()
        this.props.CurrentUser()
        this.props.allJobList()
    }
    Jobdelete(comp, index) {
        let user = this.props.user
        this.props.Jobdelete(comp, index)
    }
    render() {
        const { allUser } = this.props
        let TOTALJOBS = this.props.alljobpost.map((val, ind) => {
            return (
                <View style={{ borderBottomColor: "#777", borderBottomWidth: 4, borderRadius: 50, borderStyle: "solid" }}>
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
                        <ListItem style={{ fontSize: 12 }} itemDivider>
                            <Button full rounded danger onPress={this.Jobdelete.bind(this, val, ind)} ><Text>DELETE</Text></Button>
                        </ListItem>
                    </List>
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
                <ScrollView>
                    {TOTALJOBS}
                </ScrollView>
            </View>
        )
    }
}
function mapStateToProp(state) {
    return ({
        user: state.root.user,
        alljobpost: state.root.alljobpost,
        myApply: state.root.myApply,
        allUser: state.root.allUser,
    })
}
function mapDispatchToProp(dispatch) {
    return ({
        allUsers: () => dispatch(allUsers()),
        allJobList: () => dispatch(allJobList()),
        CurrentUser: () => dispatch(CurrentUser()),
        Jobdelete: (company, index) => dispatch(Jobdelete(company, index)),
    })
}
export default connect(mapStateToProp, mapDispatchToProp)(Admin);
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