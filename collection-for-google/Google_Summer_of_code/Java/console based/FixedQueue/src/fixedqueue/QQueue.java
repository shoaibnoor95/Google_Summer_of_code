/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package fixedqueue;

/**
 *
 * @author Shoaib
 */
public class QQueue {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
    FixedQueue q = new FixedQueue(10);
    char ch;
    int i;
    try{
        for(i = 0; i<11; i++)
        {
            System.out.println("Attempting to store:" +(char)('A'+i));
        q.put((char)('A'+i));
        System.out.println();
        }
    }
     catch (QueueFullException exc){
             System.out.println();
                     }   
    try{
        for(int i=0 ; i<11 ; i++){
            
        }
    }
    }
    
}
