/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package javaapplication21;

/**
 *
 * @author Shoaib
 */
public class JavaApplication21 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
    String command="cancle";
    switch(command)
    {
        case "connect":
             System.out.println("cancelling");
             break;
        case "cancle":
             System.out.println("cancelling");
             break;   
        case "disconnect":
            System.out.println("dissconnecting");
            break;
        default:
        {
            System.out.println("You have choose an invalid instruction");
        }
    }
    }
    
}
