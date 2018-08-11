import { createStore, applyMiddleware } from 'redux'
import thunk from 'redux-thunk'
import combineReducers from './reducer'


const store = createStore(
    combineReducers,
    {},
    applyMiddleware(thunk)
)
export default store;
store.subscribe(()=>{
    console.log(store.getState())
})