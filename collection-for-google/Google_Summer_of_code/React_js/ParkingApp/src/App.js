import React, { Component } from 'react';
import Routers from './Route';
import {Provider} from 'react-redux';
import store from './store';

class App extends Component {
  render() {
    return (
      <div>
       <Provider store = {store} >
         <Routers />
       </Provider>
      </div>
    );
  }
}

export default App;
