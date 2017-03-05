/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package javaapplication17;

/**
 *
 * @author Shoaib
 */
import java.util.*;
public class DotCom {
    private ArrayList<String> locationCells;
    private String name;
    public void setLocationCells(ArrayList<String> locs)
    {
        locationCells = locs;
        }
    public void setName(String n){
        name = n;
    }
    public String checkYourSelf(String userInput){
        String result="miss";
        int index = locationCells.indexOf(userInput);
        if (index>=0){
            locationCells.remove(index);
        
        if (locationCells.isEmpty()){
            result = "kill";
            System.out.println("Ooh You sunk " +name + ": (" );
        }else{
            result = "hit";
        }
    }
    return result;
    
}
}