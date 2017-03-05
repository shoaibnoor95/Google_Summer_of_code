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
public class Truck extends Vehacle {
    String type;
    
    public void give2(){
        
        System.out.println("Please Enter Vehacle model number ");
        ModelNum=Input.nextLine();
        System.out.println("Please Enter Vehacle Sitting Capacity ");
        sittingCap=Input.nextInt();
        System.out.println("Please Enter Truck Type ");
        type=Input.nextLine();
    }
        public void show2(){
        System.out.println("Vehacle type is Truck");
        System.out.println("Vehacle model number "+ModelNum);
        System.out.println("Vehacle Sitting Capacity "+sittingCap);
        System.out.println("Truck type is "+type);
    }
}
