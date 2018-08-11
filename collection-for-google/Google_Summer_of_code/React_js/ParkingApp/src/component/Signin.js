import React, { Component } from 'react';
import { connect } from 'react-redux';
import { signinAction } from '../store/action/action';
import swal from 'sweetalert'
class Signin extends Component {
    constructor(props) {
        super(props);

        this.state = {
            text: {
                email: '',
                password: ''
            }
        }


        this.signin = this.signin.bind(this);
        this._onChangeHandler = this._onChangeHandler.bind(this);
    }

    signin() {
        let state = this.state.text
        let user = {
            email: state.email,
            password: state.password
        }
        if(user.email === ""){
            swal('Oppps email is null')
        }
        else if (user.password === ""){
            swal('Oppps password is null')
        }else{
            this.props.signinWithEmailPassword(user);
            this.setState({
                text: {
                    email: '',
                    password: ''
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
                        <div style={ { borderRadius : " 15% 0%  30% 0 " } } className="animated bounceInLeft col-lg-8 col-xl-6 bg-light z-depth-1-half p-5" >
                            <form onSubmit={this.submit.bind(this) } className="">
                                {/* <a href="https://www.google.com.pk/?gws_rd=cr&dcr=0&ei=W8XfWbWYFcbUvASam7LICQ"><img src="images/google-logo.png" className="img-responsive" width="80px;" alt=""></a> */}
                                <h3 className="z-depth">Sign In <i className="fa fa-sign-in" aria-hidden="true"></i></h3> <p className="text-muted">log in Quiz attempt</p>

                                <div className="form-group">
                                    <div className="md-form">
                                        <br />
                                        <input type='email' name='email' value={this.state.text.email} onChange={this._onChangeHandler.bind(null, 'email')} className="form-control" />
                                        <label htmlFor="email">Email or phone</label>
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
                                    <label className="mr-md-2" htmlFor="inlineFormCustomSelectPref">More Option..</label>
                                    <select className="custom-select mb-2 mr-md-2 mb-md-0" id="inlineFormCustomSelectPref">
                                        <option value="1" >sign in with</option>
                                        <option value="2">Google</option>
                                        <option value="3">Facebook</option>
                                        <option value="4">Linkedin</option>
                                    </select>
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
                                        <button onClick={this.signin} type="submit" id="signIn" className="btn btn-info px-3 font-weight-bold"> Sign In </button>
                                    </div>
                                </div>
                                <label htmlFor="">
                                    {/* <a href="/">Create a new Account...</a> */}
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
        // changeUserName: ()=>{dispatch(changeUserName())}
        signinWithEmailPassword: (user) => {
            dispatch(signinAction(user))
        }
    })
}

export default connect(mapStateToProp, mapDispatchToProp)(Signin);