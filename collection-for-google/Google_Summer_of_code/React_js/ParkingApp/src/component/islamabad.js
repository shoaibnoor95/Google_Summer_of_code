import React, { Component } from 'react';
import NavigationBar from './NavigationBar'
import { connect } from 'react-redux';
// import { replace } from '../store/action/action'
import FotterBar from './fott/FotterBar'
import history from'../History'
import MainIslamabad from './MainIslamabad'


class Islamabad extends Component {
    componentWillMount(){
        // this.props.replace()
    }
    back(){
        history.push('/park')
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

                <MainIslamabad />
                < FotterBar />
            </div>
        )
    }
}
function mapStateToProp(state) {
    return ({
        // islambadVal: state.root.islambadVal,
    })
}
function mapDispatchToProp(dispatch) {
    return ({
        // replace: () => {
            // dispatch(replace());
        // },
    })
}

export default connect(mapStateToProp, mapDispatchToProp)(Islamabad);