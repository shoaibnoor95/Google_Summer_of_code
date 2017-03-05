//package Resturant Management System ;


/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author Shoaib
 */

import java.util.logging.Level;

 import java.sql.DriverManager;
import java.sql.SQLException;
import java.sql.Statement;
import java.util.logging.Logger;
import javax.swing.JOptionPane;

public class Connect {
  

 static java.sql.Connection conn;    
   
     
      
          
     /*  try {
          conn = DriverManager.getConnection("jdbc:ucanaccess://file.accdb;Showschema=true;jackcessOpener=CryptCodecOpener", "user","12345");
               JOptionPane.showMessageDialog(null, "Database Connected");
} 
       catch (SQLException ex) {
         
                ex.printStackTrace();
         
    }*/
    public void connectTodb() throws SQLException{
     try{
            Class.forName("org.h2.Driver");
              conn = DriverManager.getConnection("jdbc:h2:file:./db");
             JOptionPane.showMessageDialog(null, "Database Connected");
             //Statement st= conn.createStatement();
             //conn.createStatement();
             Statement st=conn.createStatement();
          //   st.execute("drop table EMPLOYEE");
            /*  st.execute("CREATE TABLE IF NOT EXISTS EMPLOYEE (\n" +
"         ID    INT UNSIGNED  NOT NULL DEFAULT 0,\n" +
"         FIRST_NAME  VARCHAR(30)       NOT NULL DEFAULT '',\n" +
"         LAST_NAME   VARCHAR(30)       NOT NULL DEFAULT '',\n" +
"         ADDRESS     VARCHAR(70)   NOT NULL DEFAULT '',\n" +
"         DATE_OF_JOINING VARCHAR(16) NOT NULL DEFAULT '',\n" +
"         TELEPHONE VARCHAR(11) NOT NULL DEFAULT '',\n"+
"         MOBILE VARCHAR(11) NOT NULL DEFAULT '',\n"+
"         CNIC VARCHAR(13) NOT NULL DEFAULT '',\n"+
"         SALARY Decimal(6,1) NOT NULL DEFAULT 000000.0,\n"+                    
"         P_ADDRESS     VARCHAR(70)   NOT NULL DEFAULT '',\n"+                    
"         EMAIL     VARCHAR(60)   NOT NULL DEFAULT '',\n" +
"         GENDER     VARCHAR(6)   NOT NULL DEFAULT '',\n" +
"         DESIGNATION     VARCHAR(16)   NOT NULL DEFAULT '',\n" +
"         ADVANCE_SALARY Decimal(6,1) NOT NULL DEFAULT 000000.0,\n"+
"         PREV_SALARY Decimal(6,1) NOT NULL DEFAULT 000000.0,\n"+                    
"         QUALIFICATION VARCHAR(15) NOT NULL DEFAULT '',\n"+
"         PRIMARY KEY (ID)\n" +
"       );");*/ 
              
         System.out.println("Done");
      }catch(ClassNotFoundException ex){
          Logger.getLogger(Connect.class.getName()).log(Level.SEVERE, null, ex);
      }
    }
}
