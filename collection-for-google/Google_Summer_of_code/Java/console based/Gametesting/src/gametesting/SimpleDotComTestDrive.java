/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package gametesting;

/**
 *
 * @author Shoaib
 */
public class SimpleDotComTestDrive {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        SimpleDotCom dot = new SimpleDotCom();
        int [] locations = {2,3,4};
        dot.setlocationscells(locations);
        String userguess ="2";
        String result = dot.checkyouself(userguess);
        
        
    }
    
}
