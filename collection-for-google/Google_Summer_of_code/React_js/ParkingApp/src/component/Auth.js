import React, { Component } from 'react';
import { connect } from 'react-redux';
import { signupAction } from '../store/action/action';
import swal from 'sweetalert';
class Auth extends Component {
    constructor(props) {
        super(props);
        this.state = {
            text: {
                email: '',
                rollNum: '',
                userName: '',
                password: '',
                file: '',
            }
        }
        this.signup = this.signup.bind(this);
        this._onChangeHandler = this._onChangeHandler.bind(this);
    }
    signup() {
        let state = this.state.text
        let user = {
            email: state.email,
            rollNum: state.rollNum,
            username: state.userName,
            password: state.password,
            file: state.file,
        }
        if(user.email === ""){
            swal('Oppps email is null')
        }
        else if (user.password === ""){
            swal('Oppps password is null')
        }
        else if (user.rollNum === ""){
            swal('Oppps RollNum is null')
        }
        else if (user.file === ""){
            swal('Oppps File is null')
        }
        else if (user.username === ""){
            swal('Oppps RollNum is null')
        }else{
            this.props.signupwithEmailPassword(user);
            this.setState({
                text: {
                    email: '',
                    rollNum: '',
                    userName: '',
                    password: '',
                    file: '',
                }
            })
        }
        
        
        
    }
    _onChangeHandler(property, event) {
        let text = this.state.text;
        text[property] = event.target.value
        this.setState({
            text
        })
    }
    submit(e){
        e.preventDefault()
    }
    render() {
        return (
            <section className="mt-0 pt-5">
                <div className="container box" style={{ margin: '0px  auto' }}>
                    <div className="row">
                        <div className="col-lg-2 col-xl-3"></div>
                        <div style={ { borderRadius : " 20% 0%  10% 0 " } } className="animated bounceInLeft col-lg-8 col-xl-6 bg-light z-depth-1-half p-5" >
                            <form onSubmit={this.submit.bind(this)} className="">
                                <h3 className="z-depth">Sign Up <i className="fa fa-sign-in" aria-hidden="true"></i></h3> <p className="text-muted">log in Quiz attempt</p>
                                <div className="form-group">
                                    <div className="md-form">
                                        <br />
                                        <input type='text' name='username' value={this.state.text.userName} onChange={this._onChangeHandler.bind(null, 'userName')} className="form-control" />
                                        <label htmlFor="email">User Name</label>
                                    </div>
                                </div>
                                <div className="form-group">
                                    <div className="md-form">
                                        <br />
                                        <input type='email' name='email' value={this.state.text.email} onChange={this._onChangeHandler.bind(null, 'email')} className="form-control" />
                                        <label htmlFor="email">Email</label>
                                    </div>
                                </div>
                                <div className="form-group">
                                    <div className="md-form">
                                        <br />
                                        <input type='number' name='username' value={this.state.text.rollNum} onChange={this._onChangeHandler.bind(null, 'rollNum')} className="form-control" />
                                        <label htmlFor="rollNum">Phone</label>
                                    </div>
                                </div>
                                <div className="form-group">
                                    <div className="md-form">
                                        <br />
                                        <input type='password' name='password' value={this.state.text.password} onChange={this._onChangeHandler.bind(null, 'password')} className="form-control " />
                                        <label htmlFor="password">Password</label>
                                    </div>
                                </div>
                                <div className="form-group">
                                    <div className="md-form">
                                        <input type='file' name='file' value={this.state.text.file} onChange={this._onChangeHandler.bind(null, 'file')} className="" />
                                    </div>
                                </div>
                                <div className="row">
                                    <div className="form-group col-xs-12 col-sm-6 col-md-6 text-left">
                                        <label className="custom-control custom-checkbox mb-2 mr-sm-2 mb-sm-0">
                                            <input type="checkbox" className="custom-control-input" />
                                            <span className="custom-control-indicator"></span>
                                            <small className="custom-control-description text-muted">Check me out</small>
                                        </label>
                                    </div>
                                    <div className="col-sm-6 col-xs-12 col-md-6 text-right justify-content-end">
                                        <button onClick={this.signup} type="submit" id="signIn" className="btn btn-info px-3 font-weight-bold"> Sign Up </button>
                                    </div>
                                </div>
                                <label htmlFor="">
                                    {/* <a className="text-info" >Already have an Account...</a> */}
                                </label>
                            </form>
                        </div>
                        <div className="col-lg-2 col-xl-3 box11"></div>
                    </div>
                </div>
            </section>

        )
    }
}

function mapStateToProp(state) {
    return ({
        // userName: state.root.userName
    })
}
function mapDispatchToProp(dispatch) {
    return ({
        signupwithEmailPassword: (userDetails) => {
            dispatch(signupAction(userDetails));
        }
    })
}

export default connect(mapStateToProp, mapDispatchToProp)(Auth);