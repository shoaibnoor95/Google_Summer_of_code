import React, { Component } from 'react'
import NavigationBar from './NavigationBar'
import FotterBar from './fott/FotterBar'
import { connect } from 'react-redux';
import { img } from '../store/action/action'
// import main from '../img/main.jpg'
import './main.css'
import swal from 'sweetalert';
import history from'../History'

class Park extends Component {
    constructor(props) {
        super(props)
        this.state = {
            isTrueOrFalse: false,
            file : ''
        }
    }
    park1(){
        swal('Lundon mall Park')
        history.push('/london')
    }
    park2(){
        swal('Islamabad Mount Park')
        history.push('islamabad')
    }
    park3(){
        swal('Karachi City Park')
        history.push('karachi')
    }

    back(){
        history.push('/park')
    }
    change(eve){
        this.setState({
            file : eve.target.value
        })
    }
    push(){
        let img = this.state.file
        this.props.imgg(img)
    }
    render() {
        return (
            <div className="" >
                < NavigationBar click={this.back.bind(this)} backText="Next" />
                <br />
                <br />
                <br />
                <br />
                {/*  */}
                <div className="blur">
                    <div className="">
                        <div className="position_absolute park-main">
                            <div className="row">
                                {/* <div className="col-md-1">
                                </div> */}
                                <div className="col-md-12 text-center mt-5 pt-5">
                                    <div onClick={this.park1.bind(this)} className="border-radius-1 d-sm-block d-lg-inline " >Lundon mall </div>
                                    <div onClick={this.park2.bind(this)} className="border-radius-2 d-sm-block d-lg-inline " > Islamabad Mount </div>
                                    <div  onClick={this.park3.bind(this)} className="border-radius-3 d-sm-block d-lg-inline  " > Karachi City </div>
                                </div>
                                {/* <div className="col-md-1">
                                </div> */}
                            </div>
                            <div className="bg-marquee">
                                <marquee behavior="slider">
                                    <p className="">
                                    The governing body of any institution of higher education academy, school or other institution of learning may appoint such persons as the governing body may designate to act as Police Officers for the institution.
                                    
                                    Under the direction of the Senior Vice President for Administration, the Director of Public Safety is empowered to decide traffic and parking matters not covered by the written policy. The Director of Public Safety shall consult with the University Parking Committee in the development of policy and procedures governing traffic and parking matters.

                                    The University assumes no liability or responsibility for loss or damage to any vehicle or its contents parked in University parking areas or facilities.
                                    </p>
                                </marquee>
                            </div>
                        </div>
                    </div>
                    <div className="main"> 
                        <div className="bg-blur"  >
                            {/* <img className="img" src={main} />  */}
                        </div>
                            <input type="file"  value={this.state.file} onChange={this.change.bind(this)} />
                            {this.state.file}
                            <button onClick={this.push.bind(this)}> pUSH </button>
                    </div>
                    < FotterBar />
                </div>
            </div>

        )
    }
}

// export default Park;

function mapStateToProp(state) {
    return ({
        islambadVal: state.root.islambadVal,
    })
}
function mapDispatchToProp(dispatch) {
    return ({
        // reserved: (index , uid , editor) => {
        //     dispatch(reserved(index , uid , editor));
        // },
        // reEdit: (index , uid , editor) => {
        //     dispatch(reEdit(index , uid , editor));
        // },
        imgg: (val) => {
            dispatch(img(val));
        }
    })
}

export default connect(mapStateToProp, mapDispatchToProp)(Park);