import React,{Component} from 'react';
import Axios from 'axios';
import History from './History';
//import { Divider } from 'material-ui';
class Dashboard extends Component{
    constructor(props){
        super(props);
        this.state={
            username:"",
            email:"",
            phone:"",
        }
    }
    componentDidMount(){
        return Axios({
            method:"get",
            withCredentials:true,
            url:'/dashboard'  
        })
        .then((data)=>{
            console.log(data,"shoaib")
           
        }).catch((err)=>{
            console.log(err)
        }
    )
        

        }
     //const {username,email,phone}=this.state;
    
    handleClick(e){
        
        Axios({
            url:'/logout',
            method:'post',
            withCredentials:true,
            auth:true
        }).then((data)=>{
            console.log(data.data)
        }
        )
        console.log('shoaibn')
        History.push('/logout');
    }
    render(){
        return(
            <div>
                Hello World
           {/* { Welcome {username}<br/>
            Your email is {email}<br/>
            Your Phone number is {phone}
          }  */}
          <button onClick={this.handleClick.bind(this)}>Logout</button>
            </div>          
        )
    }

}
export default Dashboard;