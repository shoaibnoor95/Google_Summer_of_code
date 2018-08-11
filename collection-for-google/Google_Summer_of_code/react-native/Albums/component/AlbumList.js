import React, { Component } from 'react';
import { View, Text,ScrollView } from 'react-native';
import Albumdetails from './Albumdetails';
import axios from 'axios';

class Albumlist extends Component {
    state = {
        Albums: []
    }

    componentWillMount() {
        axios.get("https://rallycoding.herokuapp.com/api/music_albums")
            .then(resp => {
                this.setState({
                    Albums: resp.data
                })
            })
    }
    Datarender = () => {
      let w =   this.state.Albums.map((val, i) => {
            return <Albumdetails key={i} album={val}/>
        })
        return w;
    }

    render() {
        console.log(this.state.Albums)
        let data = this.Datarender()
               return (
            <ScrollView>
                {data}
            </ScrollView>
        );
    }
}
export default Albumlist;