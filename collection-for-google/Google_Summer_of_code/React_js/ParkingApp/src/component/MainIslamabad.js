import React, { Component } from 'react';
import NavigationBar from './NavigationBar'
import FotterBar from './fott/FotterBar'
import history from'../History'
import { connect } from 'react-redux';
import { reserved, reEdit , getResult } from '../store/action/action'
import swal from 'sweetalert';
import './main.css'

class MainIslamabad extends Component {
    constructor(props){
        super(props)
        this.state = {text :{
            message : '',
        },
        index : undefined ,
        val : ''
    }
    }
    componentWillMount(){
    }
    back(){
        history.push('/park')
    }
    reservedOne(index , uid , eve){
        eve.preventDefault()
        // let timer = Date.now()+86400000

            let editor = {
                startTime : Date.now(),
                endTime : Date.now()+57981,
                isEdit : false,
                uid : uid
            }
            console.log('reserved')
            // setTimeout( () => {
                this.props.reserved(index , uid , editor)
            // },1200 )           
        swal( " Thank you " ,'Reserved For One Day')
    }
    reservedTwo(index , uid , eve){
        eve.preventDefault()
        // let timer = Date.now()+172800000
            let editor ={
                startTime : Date.now(),
                // endTime :  Date.now() + 99999999999999999999999999,
                endTime : Date.now()+1218174989276,
                isEdit : false,
                uid : uid
            }
            console.log('reserved')
            
            setTimeout( () => {
                this.props.reserved(index , uid , editor)
            },1200 )           
            swal( " Thank you " ,'Reserved For Two Day')
        }
    reservedWeek(index , uid , eve){
        eve.preventDefault()
        // let timer = Date.now()+604800000
            let editor ={
                startTime : Date.now(),
                endTime : Date.now()+1918174989276,
                // endTime : 444 ,  
                isEdit : false,
                uid : uid
            }
            console.log('reserved')
            
            setTimeout( () => {
                this.props.reserved(index , uid , editor)
            },1200 )           
            swal( " Thank you " ,'Reserved For 1 Week Day')
        }
    componentDidMount(){
        // let newe = new Date().getDay()
        let nowa = Date.now()
        console.log(Date.now(1) , 'new date')

        console.log(nowa , 'now date')
        this.props.getResult()
    }
    click(index , val){
        this.setState({
            index : index , 
            val : val
        })
    }
    changehandler(property , event){
        let text = this.state.text
        text[property] = event.target.value
        this.setState({
            text
        })
    }
    tartar(index , uid){
        let editor ={
            startTime : Date.now() ,
            endTime : Date.now() + Date.now() + Date.now() + 99999999 ,
            isEdit : true,
            uid : uid
        }
        this.props.reEdit(index , uid , editor)
        window.location.reload()
    }
    render(){
        return(
            <div className="container-fluid bg-light">
                <h1 className="text-center mt-2 text-info display-4">Islamabad Parking</h1>
                <div className="row">
                    {/* <div className="col-md-">
                    </div> */}

                    <div className="col-md-12 mb-5">
                        <div className="text-center container">
                            <div className="row">
                                { this.props.islambadVal.map( ( val , index )=>{
                                    return(
                                        <div className="p-3 col-md-3 col-md-3" key={ index } >
                                        {(val.isEdit)?
                                            <div onClick={ this.click.bind(this , index , val.uid) } data-toggle="modal" data-target="#exampleModal" data-whatever="@mdo"  className="parkingimg">{val.startTime}
                                            <div>
                                            90$
                                        </div>                                            
                                            </div>
                                                :
                                            <div className="parkingimg-false text-danger font-weight-bold">
                                                {/* { (val.startTime > Date.now() ||  val.endTime - Date.now() <= 0  )? */}
                                                { (val.endTime - Date.now() <= 0  )?
                                                    <div>
                                                            {val.endTime}
                                                        {this.tartar(index , val.uid ) }
                                                    </div>
                                                :    
                                                    'Boked'
                                                }
                                            </div>
                                            }
                                        </div>
                                    )
                                } ) }
                                <div className="modal fade" id="exampleModal" tabIndex="-1" role="dialog" aria-labelledby="exampleModalLabel" aria-hidden="true">
                                    <div className="modal-dialog" role="document">
                                        <div className="modal-content">
                                        <div className="modal-header">
                                            <h5 className="modal-title" id="exampleModalLabel">New Parking</h5>
                                            <button type="button" className="close" data-dismiss="modal" aria-label="Close">
                                            <span aria-hidden="true">&times;</span>
                                            </button>
                                        </div>
                                        <div className="container">
                                        <div className="row">
                                        <div className="col-md-4">
                                        <button type="button"  onClick={this.reservedOne.bind(this , this.state.index , this.state.val )} className="d-inline btn btn-primary px-3"  data-dismiss="modal" >5 Minuts</button>
                                        </div>
                                        <div className="col-md-4">
                                        <button type="button"  onClick={this.reservedTwo.bind(this , this.state.index , this.state.val )} className="d-inline btn btn-primary px-3"  data-dismiss="modal" >Two Hour</button>
                                        </div>
                                        <div className="col-md-4">
                                        <button type="button"  onClick={this.reservedWeek.bind(this , this.state.index , this.state.val )} className="d-inline btn btn-primary px-3"  data-dismiss="modal" >1 Day</button>
                                        </div>
                                        </div>
                                        </div>
                                        <div className="modal-body">
                                            <form>
                                            <div className="form-group">
                                                <label htmlFor="message-text" className="col-form-label">Message:</label>
                                                <textarea value={this.state.text.message} onChange={this.changehandler.bind(this , "message" )} className="form-control" id="message-text"></textarea>
                                            </div>
                                            </form>
                                        </div>
                                        <div className="modal-footer">
                                            <button type="button" className="btn btn-secondary" data-dismiss="modal">Close</button>
                                            {/* <button type="button"  onClick={this.reserved.bind(this , this.state.index , this.state.val )} className="btn btn-primary"  data-dismiss="modal" >Send message</button> */}
                                        </div>
                                        </div>
                                    </div>
                                    </div>
                                <div className="p-3 col-md-3">
                                    <div className="parkingimg-3">
                                        Reserved for Nawaz Sharif
                                    </div>
                                </div>
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
        reserved: (index , uid , editor) => {
            dispatch(reserved(index , uid , editor));
        },
        reEdit: (index , uid , editor) => {
            dispatch(reEdit(index , uid , editor));
        },
        getResult: () => {
            dispatch(getResult());
        }
    })
}

export default connect(mapStateToProp, mapDispatchToProp)(MainIslamabad);