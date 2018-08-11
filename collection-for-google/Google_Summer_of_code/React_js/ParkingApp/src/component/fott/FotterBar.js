import React, { Component }  from 'react'
import './fott.css'
// import logo from '../../img/logo.png'
// import parknow_logo from '../../img/parknow_logo.png'

class FotterBar extends Component {
    render(){
        return(
            <div className="bg-dark text-light fixed-sticky">
                <div className="container-fluid py-4">
                    <div className="row">
                        <div className="col-md-11">
                        <ul className="fotter-col">
                            <li className=""> Get to Know Us </li>
                            <li className=""> Offerings </li>
                            <li className=""> News </li>
                            <li className=""> Careers </li>
                            <li className=""> Media Kit </li>
                            <li className=""> Corporate Fleets </li>
                            <li className=""> About Reservation </li>
                            <li className=""> Smartphone Promotion </li>
                            <li className=""> Contact </li>
                            <li className=""> Help </li>
                        </ul>
                        </div>
                        <div className="col-md-1">
                        
                        </div>
                    </div>
                    <br />
                    <div className="row">
                        <div className="col-md-6">
                            <div className="text-left">
                                <div className="font-120" >Privacy Policy | Terms of Use | Legal Notice </div>
                                <div className="" style={ {color : '#8cc636'} }> Copyright © 2018 Parkmobile, LLC. All rights reserved.</div>
                            </div>
                            <div className="text-left">
                            </div>
                        </div>
                        <div className="col-md-6 text-right">
                            <span className="px-3 text-info-f"><i className="fa fa-facebook" aria-hidden="true"></i> Facebook</span>
                            <span className="px-3 text-info-f"><i className="fa fa-linkedin" aria-hidden="true"></i> Twiiter</span>
                            <span className="px-3 text-info-f"><i className="fa fa-twitter" aria-hidden="true"></i> Linkedin</span>
                        </div>
                    </div>
                    <br />
                </div>
            </div>
        )
    }
}

export default FotterBar;
