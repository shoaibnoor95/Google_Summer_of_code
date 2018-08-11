import React, { Component } from 'react';
import NavigationBar from './NavigationBar'
import FotterBar from './fott/FotterBar'
import LondonMain from './MainLondon'
import history from '../History'

class London extends Component {
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
                <LondonMain />
                < FotterBar />
            </div>
        )
    }
}

export default London