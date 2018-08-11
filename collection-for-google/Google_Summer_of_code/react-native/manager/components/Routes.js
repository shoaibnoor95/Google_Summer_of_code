import React from 'react';
import {Scene,Router} from 'react-native-router-flux';
import {View,Text} from 'react-native';
import Auth from './auth';
import SignIn from './SignIn';
import Contact from './Contact';
import Student from './Student';
import Company from './Company';
import SearchList from './SearchList';
import NewAdmin from './NewAdmin';
import Apply from './Apply';
import MyApply from './MyApply';
import AllApply from './AllApply';
import Admin from './Admin';
import {TabNavigator,StackNavigator,DrawerNavigator,TabBarBottom} from 'react-navigation';
import Home from './Home';
const authRoutes=TabNavigator({
    SignUp:{
        screen:Auth
    },
    SignIn:{
        screen:SignIn
    },

},
{
    tabBarPosition:'bottom'
});
const companyTabs=TabNavigator({
    Create_jobs:{
        screen:Company
    },
    Candidates_List:{
        screen:Apply
    }
},
{
    tabBarPosition:'bottom'
});

const StudentTabs=TabNavigator({
        Job_List:{
            screen:Student
        },
        Applied_Jobs:{
            screen:MyApply
        }
    },
    {
        tabBarPosition:'bottom'
    });

 const AdminTabs=TabNavigator({
     Companies_Post:{
     screen:Admin
     },
     Student_Applied:{
         screen:AllApply
     }
 },{
     tabBarPosition:'bottom'
 }) 
 const newAdmin=DrawerNavigator({
     Admin_access:{
         screen:AdminTabs
     },
     Create_New_Admin:{
         screen:NewAdmin
     }
 })
 export default Routes=StackNavigator({
     auth:{
         screen:authRoutes
     },
     SearchList:{
         screen:SearchList
     },
     Company:{
         screen:companyTabs
     },
     Student:{
         screen:StudentTabs
     },
     Home:{
         screen:Home
     }
 },
{
    initialRouteName:'auth',
    navigationOptions:{
      header: null
    }

}) 
// const Router=()=>{
//     return(
//         <Scene key="root">
//         <Scene key="login" initial/>
//         <Scene key="login" initial/>
//         <Scene key="login" initial/>
//         <Scene key="login" initial/>
//         <Scene key="login" initial/>
//         <Scene key="login" initial/>
//         </Scene>
//     )
// }
export default Router;