import React,{Component} from 'react';
import Axios from 'axios';
import History from './History';
class Login extends Component{
    constructor(props){
        super(props);
        this.state={
            text:{

                username:"",
                password:"",
                error:"",
            }
        }
    }
    handleChange(property,e){
        let text2=this.state.text;
        text2[property]=e.target.value;
        this.setState({
            text:text2
        })
    }
    handleSubmit(e){
        e.preventDefault();
        console.log(this.state.text);
       Axios({url:'/login',
            data:this.state.text,
            method:'post',
            withCredentials:true       
        }).then((data)=>{
            console.log(data)
          if(data.data.success)
            History.push('/dashboard')
       })
    }
    render(){
        return(
            <div>
            <input type="text" name="username" onChange={this.handleChange.bind(this,"username")} value={this.state.text.username}/><br/>
            <input type="password" name="password" onChange={this.handleChange.bind(this,"password")} value={this.state.text.password}/><br/>
            <button type="button" onClick={this.handleSubmit.bind(this)}>Login</button><br/>
            <div>{this.state.text.error}</div>
            </div>

        )
    }
}
export default Login;