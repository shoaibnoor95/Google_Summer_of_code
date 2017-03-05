/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package javaapplication41;

/**
 *
 * @author Shoaib
 */
import java.io.*;
public class JavaApplication41 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) throws IOException{
        // TODO code application logic here
       double d;
       double data[]= {19.4,10.1,123.54,33.0,87.9,74.5};
       try(RandomAccessFile raf= new RandomAccessFile("D:/shoaib.dat","rw"))
       {
           for(int i = 0 ; i<data.length; i++)
           {
               raf.writeDouble(data[i]);
           }
           raf.seek(0);
           d=raf.readDouble();
           System.out.println("First value "+d);
           raf.seek(8);
           d=raf.readDouble();
           System.out.println("Second value "+d);
           raf.seek(8*3);
           d=raf.readDouble();
           System.out.println("Fourth value "+d);
           System.out.println("Here is the every other value");
           for(int i = 0 ; i<data.length ; i+=2){
               raf.seek(8*i);
               d=raf.readDouble();
               System.out.print(d+" ");
           }
          System.out.println();
       }
       catch(IOException exc){
           exc.printStackTrace();
       }
    }
    
}
