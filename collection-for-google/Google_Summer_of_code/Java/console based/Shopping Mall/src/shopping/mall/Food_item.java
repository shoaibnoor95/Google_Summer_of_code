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
public class Food_item extends Shopping {
    String dateOfExpire;
    public Food_item(String name, int product_id,String dateOfExpire) {
        super(name, product_id);
    this.dateOfExpire=dateOfExpire;
    }
    public void show(){
        System.out.println("Name is "+name);
        System.out.println("Product_id is "+product_id);
        System.out.println("Expiry Date is "+dateOfExpire);
    }
    
}
