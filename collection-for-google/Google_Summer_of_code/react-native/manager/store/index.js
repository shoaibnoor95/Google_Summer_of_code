import {createStore, applyMiddleware} from 'redux';
import combineReucers from './reducers';
import thunk from 'redux-thunk';
const store=createStore(
    combineReucers,
    {},
    applyMiddleware(thunk)
)
export default store;