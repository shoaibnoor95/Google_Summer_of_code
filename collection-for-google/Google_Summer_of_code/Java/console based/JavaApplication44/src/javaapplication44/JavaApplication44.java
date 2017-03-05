/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package javaapplication44;

/**
 *
 * @author Shoaib
 */
import java.io.*;
public class JavaApplication44 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) throws IOException {
        // TODO code application logic here
        String str;
        BufferedReader br= new BufferedReader(new InputStreamReader(System.in)); 
    System.out.println("Enter text 'stop' to quite");
    try(FileWriter fw=new FileWriter("D:/text.txt")){
        do{
            System.out.println(": ");
            str=br.readLine();
            if(str.compareTo("stop")==0)break;
                str=str + "\r\n";
                fw.write(str);
        }while(str.compareTo("stop")!=0);
    }catch(IOException exc){
        System.out.print("IO Exception"+exc);
    }
    }
    
}
