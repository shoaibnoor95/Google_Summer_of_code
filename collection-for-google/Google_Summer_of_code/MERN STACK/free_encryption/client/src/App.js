import React, { Component } from 'react';
import axios from 'axios';
import Auth from './Auth'
class App extends Component {
  constructor(props){
    super(props);
    this.state={
      text:{
        username:'',
        password:''
      }
    }
  }
 handleChange(property,event){
   let text=this.state.text;
   text[property]=event.target.value;
   this.setState({
     text
   })
  }
  handleSubmit(event){
    event.preventDefault();
    var obj={
      username:this.state.text.username,
      password:this.state.text.password,
    }
    console.log(obj)
  axios.post('/login',obj)
  .then((response)=>{
   console.log(response);
  })
}   
  render() {
    return (
      <div>
        <form onSubmit={this.handleSubmit.bind(this)}>
        Login: <input type="text" onChange={this.handleChange.bind(this,"username")}/>
        Password: <input type="password" onChange={this.handleChange.bind(this,"password")}/>
        <input type="submit" value="login"/> 
        </form>
      </div>
    );
  }
}
export default App;