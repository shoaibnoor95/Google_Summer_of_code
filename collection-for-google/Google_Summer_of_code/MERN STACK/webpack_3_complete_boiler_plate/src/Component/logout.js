import React,{Component} from 'react';
import axios from 'axios';
class Logout extends Component{
   constructor(props){
       super(props);
       this.state={
           
       }
       
   }
   componentDidMount(){
       return axios({
           url:'/logout',
           withCredentials:true,
           method:'get'
       }).then((data)=>{

           console.log(data.data)
       })
   }
    render(){
        return(
            <div>
                you have logout
                </div>
        )
    }
}
export default Logout;