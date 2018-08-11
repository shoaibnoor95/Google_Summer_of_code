import React from 'react';
import {Text,View,Picker} from 'react-native';
import Cardsection from './Cardsection';
import Card from './Card';
import Input from './Input';
import Button from './Button';
import { employeeUpdate} from '../store/action/action';
import { connect } from 'react-redux';
class Createemployeee extends React.Component{
    onChange(property,value){
        this.props.employeeChange({props:property,value:value})
    }    
    render(){
        return(
            <Card>
                <Cardsection>
                    <Input label="Name"
                    placeHolder="Enter your Name"
                    onchange={this.onChange.bind(this,"name")}
                    value={this.props.name}
                    />
                    </Cardsection>
                <Cardsection>
                    <Input label="Phone"
                    onchange={this.onChange.bind(this,"phone")}
                    value={this.props.phone}
                    placeHolder="Enter Phone Number"/>
                    </Cardsection>
                    {/* <Cardsection>
                        <Text>Shoaib</Text>
                        </Cardsection> 
                         <Text style={styles.pickerStyle}>Shift</Text>
                    <Picker 
                    style={{flex:1}}
                    selectedValue={this.props.shift}
                    onValueChange={this.onChange.bind(this,"shift")}
                    >
                        <Picker.Item label="Monday" value="Monday"/>
                        <Picker.Item label="Tuesday" value="Tuesday"/>
                        <Picker.Item label="Wednessday" value="Wednessday"/>
                        <Picker.Item label="Thursday" value="Thursday"/>
                        <Picker.Item label="Friday" value="Friday"/>
                        <Picker.Item label="Saturday" value="Saturday"/>
                        <Picker.Item label="Sunday" value="Sunday"/>
        </Picker>
                    */}
                    <Cardsection>
                        <Button label="Create User">
                            Create
                            </Button>
                    </Cardsection>

            </Card>
        );
    }
}
const styles={
    pickerStyle:{
    fontSize:18,
    paddingLeft:13
    }
}
function mapStateToProps(state){
    console.log(state.EmployeeFormReducer.shift+ " Aspirine")
    const {name,phone,shift}=state.EmployeeFormReducer;
    return {name,phone,shift};
}
function mapDispatchToProps(dispatch){
    return ({
        employeeChange:(value,value2)=>{
        dispatch(employeeUpdate(value,value2))
        }
    })
}

export default connect(mapStateToProps,mapDispatchToProps)(Createemployeee);