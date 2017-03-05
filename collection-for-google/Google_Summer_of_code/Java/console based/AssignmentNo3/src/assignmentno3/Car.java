/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package assignmentno3;

/**
 *
 * @author Shoaib
 */
import java.util.Scanner;
public class Car extends Vehacle{
    Scanner Input=new Scanner(System.in);
    String carName;
    
      
       
     
    public void give(){
        
        System.out.println("Please Enter Vehacle model number ");
        ModelNum=Input.nextLine();
        System.out.println("Please Enter Vehacle Sitting Capacity ");
        sittingCap=Input.nextInt();
        System.out.println("Please Enter Car Name ");
        carName=Input.nextLine();
    }
    public void show(){
        System.out.println("Vehacle type is car");
        System.out.println("Vehacle model number "+ModelNum);
        System.out.println("Vehacle Sitting Capacity "+sittingCap);
        System.out.println("Car Name is "+carName);
    }
    
}
