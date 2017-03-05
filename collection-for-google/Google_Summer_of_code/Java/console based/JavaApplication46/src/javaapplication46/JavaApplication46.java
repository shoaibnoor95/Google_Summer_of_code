/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package javaapplication46;

/**
 *
 * @author Shoaib
 */
import java.io.*;
public class JavaApplication46 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) throws IOException {
        // TODO code application logic here
    String str;
    PrintWriter pw = new PrintWriter(System.out,true);
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    pw.println("Enter line of text \nEnter stop to exit");
    try(FileWriter fw=new FileWriter("D:/Shoaib/test2.txt")){
        do{
            System.out.println(": ");
            str=br.readLine();
            
            if(str.compareTo("stop")==0) break;
            str=str +"\r\n";
            fw.write(str);
        }while(str.compareTo("stop")!=0);
    }catch(IOException exc){
        System.out.println("I/O Exception"+exc);
    }
    }
    
}
