/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package javaapplication43;
import java.io.*;
/**
 *
 * @author Shoaib
 */
public class JavaApplication43 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
       PrintWriter pw = new PrintWriter(System.out,true);
       int i =10;
       double d=123.25;
       pw.println("Using a Print Writer");
       pw.println(i);
       pw.println(d);
       pw.println(i+ " + "+d+" is "+(i+d));
    }
    
}
