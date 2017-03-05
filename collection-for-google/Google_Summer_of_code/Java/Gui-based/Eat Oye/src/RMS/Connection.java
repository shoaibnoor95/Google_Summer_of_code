/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package RMS;

/**
 *
 * @author Shoaib
 */
import java.sql.DriverManager;
import java.sql.SQLException;
public class Connection {
    static Connection conn;
    public static void main(String[] args){
        try{
            DriverManager.getConnection("jdbc:ucanaccess://file;password=12345");
        }
        catch(SQLException exc){
           exc.printStackTrace();   
        }
    }
    
}
