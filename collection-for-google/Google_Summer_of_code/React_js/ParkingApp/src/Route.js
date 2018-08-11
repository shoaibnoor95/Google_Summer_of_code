import React, { Component } from 'react'
import { Route, Router } from 'react-router-dom';
import Home from './component/Home'
import Park from './component/Park'
import Karachi from './component/karachi'
import Islamabad from './component/islamabad'
import London from './component/london'
import Generat from './component/generat'
import history from './History'

class Routes extends Component {
    render(){
        return(            
            <Router history = { history } >
                <div className="" >
                    <Route exact path="/" component={Home} />  
                    <Route exact path="/park" component={Park} />  
                    <Route exact path="/karachi" component={Karachi} />  
                    <Route exact path="/islamabad" component={Islamabad} />  
                    <Route exact path="/london" component={London} />  
                    <Route exact path="/generat" component={Generat} />  
                </div>
            </Router>

        )
    }
}

export default Routes;