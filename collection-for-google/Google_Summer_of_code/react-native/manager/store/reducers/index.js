import {combineReducers} from 'redux';
import loginReducer from './loginReducer';
import EmployeeFormReducer from './EmployeeFormReducer';
export default combineReducers({
    loginReducer,
    EmployeeFormReducer
})