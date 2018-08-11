import React, { Component }  from 'react'
import './nav.css'  
import logo from '../../img/logo.png'
import parknow_logo from '../../img/parknow_logo.png'

class NavigationBar extends Component {
    render(){
        return(
            <div className="bg-info fixed-top">
                <div className="container-fluid bg-fluid">
                    <div className="row">
                        <div className="col-md-4 my-4 text-left">
                            <span className="vertical-middle">
                                <img src={logo} />
                            </span>
                        </div>
                        <div className="col-md-8 ">
                            <div className="nav-1-nav-2 text-right">
                                <img className="" src={parknow_logo} />
                                <button className=" m-3 btn-nav px-4 p-1" >FOR PARKING PRIVIDES </button>
                                <button onClick={ () => {this.props.isFalse()} }  className="m-3 btn-nav-log px-4 p-1">SIGN IN </button>
                                <button onClick={ () => {this.props.isTrue()} } className="m-3 btn-nav-log px-4 p-1">SIGN UP </button>
                            </div>
                            <div className="text-right">
                                <ul className="d-inline-block text-light pointer">
                                    <li className="d-inline-block px-3">
                                        <span className=""> HOW IT WORK </span>
                                    </li>
                                    <li className="d-inline-block px-3">
                                        <span className=""> NEWS </span>
                                    </li>
                                    <li className="d-inline-block px-3">
                                        <span className=""> LOCATION </span>
                                    </li>
                                    <li className="d-inline-block px-3">
                                        <span className=""> MOBILE APP </span>
                                    </li>
                                    <li className="d-inline-block px-3">
                                        <span className=""> RESERVED PARKING </span>
                                    </li>
                                    <li className="d-inline-block px-3">
                                        <span className=""> FAQ </span>
                                    </li>
                                    <li className="d-inline-block px-3">
                                        <span className=""> HELP </span>
                                    </li>
                                </ul>
                            </div>
                        </div>
                        {/* <div className="col-md-1"></div> */}
                    </div>
                </div>
            </div>
        )
    }
}

export default NavigationBar;
