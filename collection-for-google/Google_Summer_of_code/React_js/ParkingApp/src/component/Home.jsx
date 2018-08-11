import React, { Component } from 'react'
import NavigationBar from './nav/NavigationBar'
import FotterBar from './fott/FotterBar'
import Auth from './Auth'
import Signin from './Signin'
import main from '../img/main.jpg'
import './main.css'

class Home extends Component {
    constructor(props){
        super(props)
        this.state = {
            isTrueOrFalse : false,
        }
    }
    isEditTrue(){
        console.log("Siguup")
        this.setState ({
            isTrueOrFalse : false,
        })
    }
    isEditFalse(){
        console.log("Signin")
        this.setState({
            isTrueOrFalse : true,
        })
    }
    render(){
        return(            
            <div className="" >
                < NavigationBar isTrue={this.isEditTrue.bind(this)} isFalse={this.isEditFalse.bind(this)} />
                <br />
                <br />
                <br />
                <br />
                {/*  */}
                <div className="position_absolute">
                    { (this.state.isTrueOrFalse)?
                    < Signin />
                        :
                    < Auth />
                    }
                    
                </div>
                <div className="main"> <img className="img" src={main} /> </div>

                < FotterBar />
            </div>

        )
    }
}

export default Home;