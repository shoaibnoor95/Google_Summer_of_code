/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package shopping.mall;

/**
 *
 * @author Shoaib
 */
public class ShoppingMall {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Utility_item u1=new Utility_item("Iron",25,1500);
        Food_item s2 = new Food_item("KNS fried Chicken",50,"12-12-2017");
        u1.show();
        s2.show();
        double d;
        d=Math.sqrt(Math.pow(2, 2));
        System.out.println("Square "+d);
    }
    
}
