const path=require('path');
const webpack=require('webpack');
const htmlWebPackPlugin=require('html-webpack-plugin');
module.exports={
    devtool: 'source-map',
    entry:{
       vendor:['react','react-dom',
       'redux','react-redux',
       'react-router-dom','redux-thunk','redux-logger','react-router-redux',
  'axios','jquery'],
        app:'./src/index.js'
    },
     output:{
        filename:"[name].bundle.js",
        path:path.join(__dirname,"public")
    },
    module:{
        rules:[
            {
            test:/\.js$/,
             exclude:/(node_modules)/,
             use:{
                 loader:'babel-loader',
                 options:{
                     presets:["react","es2015","stage-2"]
                 }
             }   
            
            },
            {
                test:/\.css$/,
                 use:[
                    {loader:'style-loader'},
                    {loader:'css-loader'} 
                ]
            }
            ,{

                test:/\.scss$/,
                
                use:[
                    {loader:'style-loader'},
                    {loader:'css-loader'},
                    {loader:'sass-loader'}
                ]
            },{
                test:/\.json$/,
                loader:'json-loader'
            }
            ,{

                test:/\.less$/,
                include:/node_modules/,
                use:[
                    {loader:'style-loader'},
                    {loader:'css-loader'},
                    {loader:'less-loader'}
                ]
            },
            {
                test: /\.(jpe?g|png|gif|svg)$/i,
                use:[
                  'url-loader?limit=10000',
                  'img-loader',
                  'file-loader?name=/icons/[name].[ext]'
                ]
              },
              {
                  test:/\.jsx$/,
                  loader:'jsx-loader'
              }
        ]
    },
    plugins:[
        new webpack.optimize.CommonsChunkPlugin({
            name:'vendor',
            filename:'vendor.bundle.js'
        }),
       // new htmlWebPackPlugin()
    ]
}