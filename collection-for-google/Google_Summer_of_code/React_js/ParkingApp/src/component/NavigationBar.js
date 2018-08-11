import React, { Component }  from 'react'
import './nav/nav.css'  
import logo from '../img/logo.png'
import parknow_logo from '../img/parknow_logo.png'
import history from '../History'
import swal from 'sweetalert'

class NavigationBar extends Component {
    signup(){
        
        setTimeout(() => {
            swal({
                title: "Are you sure?",
                text: "Once deleted, you will not be able to recover this imaginary file!",
                icon: "warning",
                buttons: true,
                dangerMode: true,
            })
                .then((willDelete) => {
                    if (willDelete) {
                        localStorage.clear()
                        history.push('/');
                        swal("Poof! Your imaginary file has been deleted!", {
                            icon: "success",
                        });
                    } else {
                        swal("Your imaginary file is safe!");
                    }
                })
            //alert
        }, 900)

    }
    select(){
        swal('Select parking areas')
    }
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
                                <button onClick={this.select.bind(this)} className=" m-3 btn-nav px-4 p-1" >FOR PARKING PRIVIDES </button>
                                <button onClick={this.props.click} className="m-3 btn-nav-log px-4 p-1"> {this.props.backText} </button>
                                <button onClick={ this.signup.bind(this) } className="m-3 btn-nav-log px-4 p-1"> LOGOUT </button>
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
