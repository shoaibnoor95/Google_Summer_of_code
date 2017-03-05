/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package javaapplication2;

/**
 *
 * @author Shoaib
 */
public class JavaApplication2 {
    
    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        int x=1;
    System.out.println("Ouside the loop");
    while(x<4)
    {
    System.out.println("Inside the loop\n");
    System.out.println("x is"+x);
    x=x+1;
    }
    x=1;
    System.out.println("after the loop");
    if(x==1){
        System.out.println("x= "+x);
    }
    else
    {
        System.out.println("Shoaib");
    }
    } 
}
