'use strict'
var config=require('../config');
var redis=require('redis').createClient;
var adapter=require('socket.io-redis');
var Room=require('../models/schema/room');
var ioEvents=function(io){
    io.of('/rooms').on('createRoom',function(title){
        socket.on('createRoom',function(title){
        Room.findOne({'title':new RegExp('^'+title+'$','i')},function(err,room){
            if(err){
                throw err;
            }
            if(room){
                socket.emit('updateRoomList',{error:'room already exists'});

            }
            else{
                Room.create({
                    title:title
                },function(err,newRoom){
                    if(err){
                        throw err
                    }
                    socket.emit('updateRoomList',newRoom);
                    socket.broadcast.emit('updateRoomList',newRoom);
                });
            }

        });
    });
});
io.of('/chatroom').on('connection',function(socket){
    socket.on('join',function(roomId){
        if(err) throw err;
        if(!room){
            socket.emit('updateUsersList',{error:'user does not exists'});
        }
        else{
            if(socket.request.session.passport==null){
                return;
            }
            Room.addUser(room,socket,function(err,newRoom){
                socket.join(newRoom);
                Room.getUsers(newRoom,socket,function(err,users,cuntUserInRoom){
                    if(err) throw err;
                    socket.emit('updateUserList',users,true);
                    if(cuntUserInRoom===1){
                        socket.broadcast.to(newRoom.id).emit('updateUsersList',users[users.length-1]);
                    }
                })
            })
        }
    })
})
socket.on('disconnect',function(){
    if(socket.request.session.passport==null){
        return;
    }
    Room.removeUser(socket,function(err,room,userId,cuntUserInRoom){
        if(err) throw err;
        socket.leave(room.id).emit('removeUser',userId);
    })
});
socket.on('newMessage',function(roomId,message){
    socket.broadcast.to(roomId).emit('addMessage',message);
});
}