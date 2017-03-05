/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package connectivity;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.SQLException;

/**
 *
 * @author Shoaib
 */

public class Connectivity {

    /**
     * @param args the command line arguments
     */
 

   

    static Connection conn;
    public static void main(String[] args){
       // public void connectToDB(){
            try {
          conn = DriverManager.getConnection("jdbc:ucanaccess://D:\\file.accdb;jackcessOpener=connectivity.CryptCodecOpener", "user","12345");
                System.out.println("Successfull");
//} catch (SQLException ex) {
            } catch (SQLException ex) {
                ex.printStackTrace();
         //   }
    }
    }
}