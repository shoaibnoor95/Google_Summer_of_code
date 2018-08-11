import React, { Component } from 'react';
import NavigationBar from './NavigationBar'
import FotterBar from './fott/FotterBar'
import history from'../History'
import { connect } from 'react-redux';
import { reservedLod , reservedKhi , reservedIsl } from '../store/action/action'
import swal from 'sweetalert';
import './main.css'

class Generat extends Component {
    islambadVal(eve){        
        eve.preventDefault()
        let editor ={
            startTime : Date.now() ,
            endTime : Date.now() + Date.now() + Date.now() + 99999999 ,
            isEdit : true,
        }
        console.log('reserved')
        setTimeout( () => {
            this.props.reservedIsl(editor)
        },1200 )           
        swal( "Create islamabad parking space" )
    }
    
    karachiVal(eve){
        eve.preventDefault()
        let editor ={
            startTime : Date.now() ,
            endTime : Date.now() + Date.now() + Date.now() + 99999999 ,
            isEdit : true,
        }
        console.log('reserved')
        setTimeout( () => {
            this.props.reservedkhi(editor)
        },1200 )           
        swal( "Create Karachi parking space" )
    }
    londonVal(eve){
        eve.preventDefault()
        let editor ={
            startTime : Date.now() ,
            endTime : Date.now() + Date.now() + Date.now() + 99999999 ,
            isEdit : true,
        }
        console.log('reserved')
        setTimeout( () => {
            this.props.reservedLod(editor)
        },1200 )           
        swal( "Create London parking space" )
    }

    render(){
        return(
            <div className="container-fluid bg-light">
            <button onClick={ ()=>{
                history.push('/')
            } } className="btn btn-info btn-lg font-weight-bold display-4 p-2 w-100" style={{ fontSize : '200%' }}  > Back </button>
                <h1 className="text-center mt-2 text-info display-4">Islamabad Parking</h1>
                <div className="row">
                    <div className="col-md-12 mb-5">
                        <div className="text-center container">
                            <div className="row">
                                <div className="p-3 col-md-3">
                                    {/* <input className="w-100" /> */}
                                    <button onClick={this.islambadVal.bind(this)} className="w-100 btn btn-info btn-lg px-5"> Push </button>
                                </div>
                            </div>
                        </div>
                    </div>
                    {/* <div className="col-md-1">
                    </div> */}
                </div>
                <h1 className="text-center mt-2 text-info display-4">Karachi Parking</h1>
                <div className="row">
                    <div className="col-md-12 mb-5">
                        <div className="text-center container">
                            <div className="row">
                                <div className="p-3 col-md-3">
                                    <input className="w-100" />
                                    <button onClick={this.karachiVal.bind(this)} className="w-100 btn btn-info btn-lg px-5"> Push </button>                                </div>
                            </div>
                        </div>
                    </div>
                    {/* <div className="col-md-1">
                    </div> */}
                </div>
                <h1 className="text-center mt-2 text-info display-4">London Parking</h1>
                <div className="row">
                    <div className="col-md-12 mb-5">
                        <div className="text-center container">
                            <div className="row">
                                <div className="p-3 col-md-3">
                                    <input className="w-100" />
                                    <button onClick={this.londonVal.bind(this)} className="w-100 btn btn-info btn-lg px-5"> Push </button>                                </div>
                            </div>
                        </div>
                    </div>
                    {/* <div className="col-md-1">
                    </div> */}
                </div>
            </div>
        )
    }
}

function mapStateToProp(state) {
    return ({
        islambadVal: state.root.islambadVal,
    })
}
function mapDispatchToProp(dispatch) {
    return ({
        reservedIsl: (editor) => {
                dispatch(reservedIsl(editor));
        },
        reservedkhi: (editor) => {
                dispatch(reservedKhi(editor));
        },
        reservedLod: (editor) => {
                dispatch(reservedLod(editor));
        },
    })
}

export default connect(mapStateToProp, mapDispatchToProp)(Generat);