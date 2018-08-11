import React from 'react'
import store from './store'
import { AuthNav } from './component/Nav/baseNav'
import { Container } from 'native-base'
import { Provider } from 'react-redux'
import { View, Text } from 'react-native'
import Screens from './Screen'



class App extends React.Component {
    render() {
        return (
            <Container>
                <Provider store={store} >
                    <Screens />
                </Provider >
            </Container>

        )
    }
}

export default App;