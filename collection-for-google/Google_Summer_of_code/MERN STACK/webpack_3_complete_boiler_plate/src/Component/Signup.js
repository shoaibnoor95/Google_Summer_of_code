import React,{Component} from 'react';
import Axios from 'axios';
class Signup extends Component{
    constructor(props){
        super(props);
        this.state={
            text:{
                username:"",
                password:"",
                phoneNumber:"",
                displayName:"",
                email:"",
                error:"",
            }
        }
    }
    handleChange(property,e){
        let text3=this.state.text;
        text3[property]=e.target.value;
        this.setState({
            text:text3
        })
    }
    handleSubmit(e){
        e.preventDefault();
        console.log(this.state.text);
        Axios({
            method:'post',
            withCredentials:true,
            url:'/signup',
            data:this.state.text
        }).then((data)=>{
            console.log(data)
            if(data.data.user){
                History.push('/dashboard');
            }
            else{
                this.state.text.error=data.data.message
            }
            
        }).catch((err)=>{
            this.state.text.error=err.message;
        })

    }
    render(){
        return(
            <div>
            <input type="text" name="username" onChange={this.handleChange.bind(this,"username")} value={this.state.text.username}/><br/>
            <input type="password" name="password" onChange={this.handleChange.bind(this,"password")} value={this.state.text.password}/><br/>
            <input type="text" name="phoneNubmer" onChange={this.handleChange.bind(this,"phoneNumber")} value={this.state.text.phoneNumber}/><br/>
            <input type="text" name="displayName" onChange={this.handleChange.bind(this,"displayName")} value={this.state.text.displayName}/><br/>
            <input type="text" name="email" onChange={this.handleChange.bind(this,"email")} value={this.state.text.email}/><br/>
            <button type="button" onClick={this.handleSubmit.bind(this)}>Login</button><br/>
            <div>{this.state.text.error}</div>
            </div>

        )
    }
}
export default Signup;