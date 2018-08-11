import React, { Component } from 'react';
import { View, Text } from 'react-native';
import { Router, Scene } from 'react-native-router-flux';
import Auth from "./Auth";
import SignIn from "./SignIn";
import Contact from "./component/Contact";
import Student from "./component/Student";
import Company from "./component/Company";
import SearchList from "./component/SearchList";
import NewAdmin from "./component/NewAdmin";
import Apply from "./component/Apply";
import MyApply from "./component/MyApply";
import AllApply from "./component/AllApply";
import Admin from "./component/Admin";
import { DrawerNavigator, TabNavigator, StackNavigator, TabBarBottom } from 'react-navigation';
import Home from './component/Home'



const authRoutes = TabNavigator({
    SignUp: {
        screen: Auth
    },
    SignIn: {
        screen: SignIn
    },
},
    {
        tabBarPosition: 'bottom',
    },
)
const CompanyTabs = TabNavigator({
    Create_Jobs: {
        screen: Company
    },
    Candidates_List: {
        screen: Apply
    }
},
    {
        tabBarPosition: 'bottom'
    }
)

const StudentTabs = TabNavigator({
    Jobs_List: {
        screen: Student
    },
    applied_Jobs: {
        screen: MyApply
    }
},
    {
        tabBarPosition: 'bottom'
    }
)

const AdminTabs = TabNavigator({
    Companies_Post: {
        screen: Admin
    },
    Student_Applied: {
        screen: AllApply
    }
},
    {
        tabBarPosition: "bottom"
    }
)
const newAdmin = DrawerNavigator({
    Admin_aceess: {
        screen: AdminTabs
    },
    Create_New_Admin: {
        screen: NewAdmin
    },
})


export default Screens = StackNavigator({
    auth: {
        screen: authRoutes,
    },
    SearchList: {
        screen: SearchList,
    },
    Company: {
        screen: CompanyTabs
    },
    Student: {
        screen: StudentTabs
    },
    Admin: {
        screen: newAdmin
    },
    Home: {
        screen: Home
    },
},
    {
        initialRouteName: "auth",
        navigationOptions: {
            header: null
        }
    }


)

// export default class Screens extends Component {
//     render() {
//         return (

//         )
//     }
// }
// <Router>
//     <Scene key="root">
//         <Scene key="auth" component={Auth} title="auth" initial />
//         <Scene key="SignIn" component={SignIn} title="SignIn" />
//         <Scene key="Contact" component={Contact} title="Contact" />
//     </Scene>
// </Router>