import React from 'react';
import { Router, Route, Redirect } from 'react-router-dom';
import history from './History';
import Login from './Login';
import MuiThemeProvider from 'material-ui/styles/MuiThemeProvider';
import Signup from './Signup';
import { connect } from 'react-redux';
import Dashboard from './Dashboard';
import Logout from './logout';

const Routes = () => {

    return (
        <Router history={history} >
            <MuiThemeProvider>
                <div>
                    <Route exact path="/" component={Login} />
                    <Route exact path="/dashboard" component={Dashboard} />
                  <Route exact path="/signup" component={Signup}/>
                    <Route exact path="/logout" component={Logout}/>
                </div>
            </MuiThemeProvider>
        </Router>
    )
}
export default Routes;