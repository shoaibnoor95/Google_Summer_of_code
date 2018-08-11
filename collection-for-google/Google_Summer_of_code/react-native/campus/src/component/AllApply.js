import React, { Component } from 'react'
import { View, StyleSheet, Alert } from 'react-native';
import { Actions } from 'react-native-router-flux'
import { BaseNav } from './Nav/baseNav';
import { Container, Header, Item, Input, Icon, Button, Text, Segment } from 'native-base';
import { StackNavigator, TabBarBottom, TabNavigator } from 'react-navigation'
import { connect } from 'react-redux'
import { AllJobsApply } from '../store/action/action'


class AllApply extends Component {
    componentDidMount() {
        this.props.AllJobsApply()
    }
    render() {
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
                    <Text>AllApply</Text>
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
        AllJobsApply: () => dispatch(AllJobsApply()),

    })
}

export default connect(mapStateToProp, mapDispatchToProp)(AllApply);


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
