import React, { Component } from 'react';
import NavigationBar from './NavigationBar'
import FotterBar from './fott/FotterBar'
import MainKarachi from './MainKarachi'
import history from '../History'


class Karachi extends Component {
    back(){
        history.push('park')
    }
    render(){
        return(
            <div className="">
                < NavigationBar click={this.back.bind(this)} backText="Back" />
                <br />
                <br />
                <br />
                <br />
                {/*  */}
                <MainKarachi />
                < FotterBar />
            </div>
        )
    }
}

export default Karachi