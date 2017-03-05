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
public class SimpleDotCom
{
    int [] locationcells;
    int numofhit = 0;
   SimpleDotCom dot = new SimpleDotCom();
   public void setlocationcells(int [] locs){
       locationcells = locs;
   }
   public String checkyourself(String stringguess){
       int guess = Integer.parseInt(stringguess);
       String result = "miss";
   for(int cell: locationcells){
       if (guess == cell){
           result = "hit";
           numofhit++;
           break;
       }
   }
   if(numofhit == locationcells.length)
   {
       result ="kill";
   }
   System.out.println(result);
   return result;
}
}