package RMS;


import javax.swing.JOptionPane;


public class business_logic extends abstraction {
    private String user,pass;
    private  int p,q;
    double t;
    
   view_customer cus = new view_customer();
    frnt_pge frnt = new frnt_pge();
     n_login logg = new n_login();
     Choice choi= new Choice(); 

   
     String id,name,cell;
    public void getlogin(String u, String p)
    {
        user=u;
        pass=p;
        if((user.equals("emp") && pass.equals("emp")))
        {
            choi.setVisible(true);
           
            //cus.setVisible(true);
            logg.setVisible(false);
            logg.dispose();
            
            
        }
        else if ( (user.equals("admin") && pass.equals("admin")))
        {
          {
           
            frnt.setVisible(true);
            logg.setVisible(false);
            logg.dispose();
        }

        }
        
        else
            
            
        {
            JOptionPane.showMessageDialog(null, "password or username is incorrect");
            
            
        }
    }
    
   public void b_amount(int pp, int qq)
   {
       this.p=pp;
       this.q=qq;
       
   }
   int getamount()
   {
       return p*q;
   }

   
   
   public double tax(int s)
   {  
       t=(s*14)/100;
       return t;
   }
   public double total(int s)
   { 
       double tt;
       tt=s+this.t;
       return tt;
   }
   
}
