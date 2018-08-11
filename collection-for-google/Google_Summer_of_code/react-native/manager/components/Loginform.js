import React from 'react';
import Card from './Card';
import Cardsection from './Cardsection';
import Input from './Input';
import Button from './Button';
import {passChange,idChange,loginCall} from '../store/action/action'
import {connect} from 'react-redux';
import {View,Text} from 'react-native';
import Spinner from './Spinner';
class Loginform extends React.Component{
    onButtonPress(){
        this.props.submitLogin(this.props.emailChange,this.props.passChange)
}
onEmailChange(text){
    this.props.email(text);
}
onPassChange(text){
    this.props.pass(text)
}
renderButton(){
    if(this.props.loading){
        return <Spinner size="large"/>
    }
        return <Button label="Login" onPress={this.onButtonPress.bind(this)}/>
}
    render(){
        return(
            <Card>
                <Cardsection>
                    <Input label="Email" placeHolder="Email" value={this.props.emailChange} secureTextEntry={false} onchange={this.onEmailChange.bind(this)}/>
                    </Cardsection>
                <Cardsection>
                    <Input label="Password" placeHolder="Password" value={this.props.passChange} secureTextEntry={true} onchange={this.onPassChange.bind(this)} />
                </Cardsection>
                <Cardsection>
                   {this.renderButton()}
                    </Cardsection>
                    <Text style={styles.errorStyle}>{this.props.errorFound}</Text>
                </Card>
        )
    }
}
const styles={
    errorStyle:{
        fontSize:20,
        alignSelf:'center',
        color:'red'
    }
}
function mapStateToProps(state){
    return({
        emailChange:state.loginReducer.userId,
        passChange:state.loginReducer.password,
        errorFound:state.loginReducer.error,
        loading:state.loginReducer.loading
    })
}
function mapDispatchToProps(dispatch){
    return({
        email:(value)=>{
            dispatch(idChange(value))
        },
        pass:(value)=>{
            dispatch(passChange(value))
        },
        submitLogin:(value,value2)=>{
            dispatch(loginCall(value,value2))
        }
    })
}
export default connect(mapStateToProps,mapDispatchToProps)(Loginform);