import React from 'react';
import {Scene,Router,Stack, Actions} from "react-native-router-flux";
import Loginform from "./Loginform";
import Createemployee from './createEmployee';
import EmployeeList from './EmployeeList';
const RouterComponent =()=>{
    return(
        <Router>
    <Stack key="root" hideNavBar >
    <Scene key="Auth" >
               <Scene key="login" component={Loginform} titleStyle={{textAlign:'center',alignContent:'center',justifyContent:'center' ,flex:1}} title="Please Login" initial/>
        
        </Scene>
        <Scene key="main">
        <Scene
            key="employeeList" component={EmployeeList} 
            sceneSyle={{paddingTop:0,marginTop:0}}
            onRight={()=>{
                Actions.createEmployee();
              }} 
            initial
            titleStyle={{textAlign:'center',alignContent:'center',justifyContent:'center' ,flex:1}}
            rightTitle="Add"
            title="Employees"
        />
        <Scene
            key="createEmployee" component={Createemployee} 
            onRight={()=>{
                console.log('Adding ')
              }} 
              titleStyle={{textAlign:'center',alignContent:'center',justifyContent:'center' ,flex:1}} 
            rightTitle="Add"
            title="Employees"
        />
</Scene>
     </Stack>
        </Router>
    )
}
export default RouterComponent;