/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package guessgame;

/**
 *
 * @author Shoaib
 */
public class guessgame {
    player p1;
    player p2;
    player p3;
    public void startGame(){
        p1 = new player();
        p2 = new player();
        p3 = new player();
        
        int guessp1 = 0;
        int guessp2 = 0;
        int guessp3 = 0;
        boolean p1IsRight = false;
        boolean p2IsRight = false;
        boolean p3IsRight = false;
        
        int targetNumber = (int) (Math.random() * 10);
        System.out.println("I am thinking of a number between 0 to 9");
        while (true){
            System.out.println("The number to guess is "+targetNumber);
            p1.guess();
            p2.guess();
            p3.guess();
            guessp1 = p1.number;
            System.out.println("Player one guessed "+guessp1);
            guessp2 = p2.number;
            System.out.println("Player one guessed "+guessp2);
            guessp3 = p3.number;
            System.out.println("Player one guessed "+guessp3);
            if (guessp1==targetNumber){
                p1IsRight = true;
           }
            if (guessp2==targetNumber){
                p2IsRight = true;
           }
            if (guessp3==targetNumber){
                p3IsRight = true;
           }
            if (p1IsRight || p2IsRight || p3IsRight)
            {
                System.out.println("We have a winner !");
                System.out.println("Player one got it right?" +p1IsRight);
                System.out.println("Player two got it right?" +p2IsRight);
                System.out.println("Player three got it right?" +p3IsRight);
                System.out.println("Game is over");
                break;
                
            } else{
                System.out.println("Players will have to try again");
            }
        }
    }
}