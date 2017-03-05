package RMS;

import static RMS.n_login.BILL;
import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.File;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.PrintWriter;
import java.io.Writer;
import java.util.Arrays;


public class pay_slip extends javax.swing.JFrame {

   
    public pay_slip() {
        initComponents();
        
    }

   
    @SuppressWarnings("unchecked")
    // <editor-fold defaultstate="collapsed" desc="Generated Code">//GEN-BEGIN:initComponents
    private void initComponents() {

        jLabel7 = new javax.swing.JLabel();
        bid = new javax.swing.JTextField();
        jLabel1 = new javax.swing.JLabel();
        jLabel2 = new javax.swing.JLabel();
        name = new javax.swing.JTextField();
        jLabel3 = new javax.swing.JLabel();
        jLabel4 = new javax.swing.JLabel();
        jLabel6 = new javax.swing.JLabel();
        jPanel2 = new javax.swing.JPanel();
        jLabel5 = new javax.swing.JLabel();
        taxinclude = new javax.swing.JTextField();
        empp = new javax.swing.JButton();
        total_amount = new javax.swing.JTextField();
        tax = new javax.swing.JTextField();
        noitems = new javax.swing.JTextField();
        jLabel8 = new javax.swing.JLabel();
        jLabel9 = new javax.swing.JLabel();
        jButton1 = new javax.swing.JButton();
        jButton2 = new javax.swing.JButton();

        setDefaultCloseOperation(javax.swing.WindowConstants.EXIT_ON_CLOSE);
        getContentPane().setLayout(null);

        jLabel7.setFont(new java.awt.Font("Tahoma", 1, 36)); // NOI18N
        jLabel7.setText("BILL :-");
        getContentPane().add(jLabel7);
        jLabel7.setBounds(46, 91, 178, 70);

        bid.setEditable(false);
        bid.setFont(new java.awt.Font("Tahoma", 1, 14)); // NOI18N
        bid.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                bidActionPerformed(evt);
            }
        });
        getContentPane().add(bid);
        bid.setBounds(223, 172, 260, 30);

        jLabel1.setFont(new java.awt.Font("Tahoma", 3, 18)); // NOI18N
        jLabel1.setText("Bill id                :");
        getContentPane().add(jLabel1);
        jLabel1.setBounds(82, 172, 135, 22);

        jLabel2.setFont(new java.awt.Font("Tahoma", 3, 18)); // NOI18N
        jLabel2.setText("Name               :");
        getContentPane().add(jLabel2);
        jLabel2.setBounds(81, 219, 110, 22);

        name.setEditable(false);
        name.setFont(new java.awt.Font("Tahoma", 1, 14)); // NOI18N
        getContentPane().add(name);
        name.setBounds(223, 213, 260, 30);

        jLabel3.setFont(new java.awt.Font("Tahoma", 3, 18)); // NOI18N
        jLabel3.setText("Total Amount :");
        getContentPane().add(jLabel3);
        jLabel3.setBounds(80, 260, 140, 23);

        jLabel4.setFont(new java.awt.Font("Tahoma", 3, 18)); // NOI18N
        jLabel4.setText("Tax(14%)       :");
        getContentPane().add(jLabel4);
        jLabel4.setBounds(82, 306, 135, 22);

        jLabel6.setFont(new java.awt.Font("Tahoma", 3, 18)); // NOI18N
        jLabel6.setText("No. of Items  :");
        getContentPane().add(jLabel6);
        jLabel6.setBounds(87, 355, 129, 22);

        jPanel2.setBorder(javax.swing.BorderFactory.createLineBorder(new java.awt.Color(0, 0, 0)));

        jLabel5.setFont(new java.awt.Font("Tahoma", 1, 14)); // NOI18N
        jLabel5.setText("Total Amount Including Tax  ");

        taxinclude.setEditable(false);
        taxinclude.setFont(new java.awt.Font("Tahoma", 1, 24)); // NOI18N
        taxinclude.setForeground(new java.awt.Color(102, 0, 0));
        taxinclude.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                taxincludeActionPerformed(evt);
            }
        });

        javax.swing.GroupLayout jPanel2Layout = new javax.swing.GroupLayout(jPanel2);
        jPanel2.setLayout(jPanel2Layout);
        jPanel2Layout.setHorizontalGroup(
            jPanel2Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(jPanel2Layout.createSequentialGroup()
                .addGap(81, 81, 81)
                .addComponent(jLabel5)
                .addContainerGap(javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE))
            .addGroup(javax.swing.GroupLayout.Alignment.TRAILING, jPanel2Layout.createSequentialGroup()
                .addContainerGap(43, Short.MAX_VALUE)
                .addComponent(taxinclude, javax.swing.GroupLayout.PREFERRED_SIZE, 267, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addGap(38, 38, 38))
        );
        jPanel2Layout.setVerticalGroup(
            jPanel2Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(jPanel2Layout.createSequentialGroup()
                .addContainerGap(javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                .addComponent(jLabel5, javax.swing.GroupLayout.PREFERRED_SIZE, 30, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addComponent(taxinclude, javax.swing.GroupLayout.PREFERRED_SIZE, 60, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addGap(23, 23, 23))
        );

        getContentPane().add(jPanel2);
        jPanel2.setBounds(100, 390, 350, 122);

        empp.setBackground(new java.awt.Color(204, 204, 204));
        empp.setFont(new java.awt.Font("Tahoma", 1, 12)); // NOI18N
        empp.setText("Finish");
        empp.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                emppActionPerformed(evt);
            }
        });
        getContentPane().add(empp);
        empp.setBounds(240, 537, 90, 23);

        total_amount.setEditable(false);
        getContentPane().add(total_amount);
        total_amount.setBounds(223, 254, 260, 28);

        tax.setEditable(false);
        getContentPane().add(tax);
        tax.setBounds(223, 300, 260, 33);

        noitems.setEditable(false);
        getContentPane().add(noitems);
        noitems.setBounds(223, 351, 259, 28);

        jLabel8.setFont(new java.awt.Font("Tw Cen MT Condensed", 2, 48)); // NOI18N
        jLabel8.setText("Eat Oye");
        getContentPane().add(jLabel8);
        jLabel8.setBounds(110, 30, 380, 40);

        jLabel9.setIcon(new javax.swing.ImageIcon(getClass().getResource("/RMS/choice.png"))); // NOI18N
        getContentPane().add(jLabel9);
        jLabel9.setBounds(0, 0, 540, 550);

        jButton1.setText("save data");
        jButton1.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jButton1ActionPerformed(evt);
            }
        });
        getContentPane().add(jButton1);
        jButton1.setBounds(80, 540, 90, 23);

        jButton2.setText("view saved data");
        jButton2.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jButton2ActionPerformed(evt);
            }
        });
        getContentPane().add(jButton2);
        jButton2.setBounds(380, 540, 120, 23);

        pack();
    }// </editor-fold>//GEN-END:initComponents

    private void bidActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_bidActionPerformed
      
    }//GEN-LAST:event_bidActionPerformed

    private void taxincludeActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_taxincludeActionPerformed
       
    }//GEN-LAST:event_taxincludeActionPerformed

    private void emppActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_emppActionPerformed
        
        n_login log = new n_login();
        log.setVisible(true);
        this.dispose();
    }//GEN-LAST:event_emppActionPerformed

    private void jButton1ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jButton1ActionPerformed
        filling ff=new filling();
        readfile();
        abc();
        filewrite();
        
    }//GEN-LAST:event_jButton1ActionPerformed

    private void jButton2ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jButton2ActionPerformed
        NewJFrame nf=new NewJFrame();
        nf.setVisible(true);
        this.dispose();
    }//GEN-LAST:event_jButton2ActionPerformed

  
    public static void main(String args[]) {
        
        java.awt.EventQueue.invokeLater(new Runnable() {
            public void run() {
                new pay_slip().setVisible(true);
            }
        });
    }

    // Variables declaration - do not modify//GEN-BEGIN:variables
    public javax.swing.JTextField bid;
    private javax.swing.JButton empp;
    private javax.swing.JButton jButton1;
    private javax.swing.JButton jButton2;
    private javax.swing.JLabel jLabel1;
    private javax.swing.JLabel jLabel2;
    private javax.swing.JLabel jLabel3;
    private javax.swing.JLabel jLabel4;
    private javax.swing.JLabel jLabel5;
    private javax.swing.JLabel jLabel6;
    private javax.swing.JLabel jLabel7;
    private javax.swing.JLabel jLabel8;
    private javax.swing.JLabel jLabel9;
    private javax.swing.JPanel jPanel2;
    public javax.swing.JTextField name;
    public javax.swing.JTextField noitems;
    public javax.swing.JTextField tax;
    public javax.swing.JTextField taxinclude;
    public javax.swing.JTextField total_amount;
    // End of variables declaration//GEN-END:variables

    
/*    
    String[] array1 = new String[50];    //reflection of values to access the values from other methods
    String[] array2 = new String[50];    //  ""              ""              ""
    String[] array3 = new String[50];    //  ""              ""              ""
    String[] array4 = new String[50];    //  ""              ""              ""
    String[] array5 = new String[50];    //  ""              ""              ""
    String[] array6 = new String[50];
   
    String[] grouparray=new String[50];
    void abc(){
        
        for(int i1=0;i1<50;i1++)
        {
            try{
                
                if(!bid.getText().isEmpty()&&array1[i1].equals(bid.getText()))
                {
                    
                    grouparray[i1]=bid.getText();
                    grouparray[i1]+="   "+name.getText();
                    grouparray[i1]+="   "+total_amount.getText();
                    grouparray[i1]+="   "+tax.getText();
                    grouparray[i1]+="   "+noitems.getText();
                    grouparray[i1]+="   "+taxinclude.getText();
                    //System.out.println(grouparray[i1]);
                    //i2++;
                    }
                }catch(NullPointerException e){}
            }
        }
    void filewrite()
    {
        File filename=new File("backup.txt");
        
        try {
            
            FileWriter backupfile=new FileWriter(filename,true);
            
            for(int i=0;i<5;i++)
                
                if(grouparray[i]!=(null))
            {
                backupfile.write("\r\n"+grouparray[i]);
                
            }backupfile.close();
        } catch (Exception ex) {
            
            System.out.println(ex+"File can,t be Created! ");
        }
    }
    void readfile() {
        String filename="backup.txt";
        try {
            String[] recivedarray=new String[5];
            BufferedReader br=new BufferedReader(new FileReader(filename));
            if((br.readLine())!=null)
            {
                
                for(int i=0;i<5;i++){
                String a1=br.readLine();
                recivedarray[i]=a1;
                System.out.println(a1);
                for(i=0;i<5;i++){
                
                if((recivedarray[i])!=null){
            String[] data = recivedarray[i].split("   ");
            
            String a=data[0];
            String b=data[1];
            String c=data[2];
            String d=data[3];
            String e=data[4];
            String f=data[5];
            
            
            if(data[0]!=null){
            array1[i]=a;
            array2[i]=b;
            array3[i]=c;
            array4[i]=d;
            array5[i]=e;
            array6[i]=f;
            
            br.close();
            }}}
                }
            }
        } catch (Exception ex) {
            System.out.println(ex+"Occurs");
        }
    }*/
    int j=0,i=0;
    int i1=0;
    String[] array1 = new String[500];    //reflection of values to access the values from other methods
    String[] array2 = new String[500];    //  ""              ""              ""
    String[] array3 = new String[500];    //  ""              ""              ""
    String[] array4 = new String[500];    //  ""              ""              ""
    String[] array5 = new String[500];    //  ""              ""              ""
    String[] array6 = new String[500];    //  ""              ""              ""
    
    //String p="";
    String[] grouparray=new String[500];
    void abc(){
        //for(int i1=0;i1<50;i1++)
        {
            
            try{
                if(!Arrays.asList(array1).contains(bid.getText()))
                {
                //    p=bid.getText();
                    //array1[i1]=bid.getText();
                    grouparray[i1]=bid.getText();
                    grouparray[i1]+="   "+name.getText();
                    grouparray[i1]+="   "+total_amount.getText();
                    grouparray[i1]+="   "+tax.getText();
                    grouparray[i1]+="   "+noitems.getText();
                    grouparray[i1]+="   "+taxinclude.getText();
                    
                    System.out.println(grouparray[i1]);
                    }
                
                }catch(NullPointerException e){}
            }
        }

    void filewrite()
    {
        File filename=new File("backup.txt");
        try {
            if(!Arrays.asList(array1).contains(bid.getText()))
                
            //for(i=0;i<5;i++)
                {
                FileWriter backupfile=new FileWriter(filename,true);
                //Writer tofile=new BufferedWriter(backupfile);
                //for(i=0;i<50;i++)
                //if(grouparray[i]!=(null)&&bid.getText().equals(array1[i]))
            {
                //try {
                    backupfile.write("\r\n"+grouparray[i1]);
                    System.out.println(grouparray[i1]);
                /*} catch (IOException ex) {
                    System.out.println("I/O Exception");
                }*/
            }backupfile.close();}
        } catch (Exception ex) {
            
            System.out.println(ex+"File can,t be Created! ");
        }
    }
    String[] recivedarray=new String[500];
    void readfile() {
        String filename="backup.txt";
        try {
            
            BufferedReader br=new BufferedReader(new FileReader(filename));
            if((br.readLine())!=null)
            {
                for(i=0;i<500;i++){ 
                String a=br.readLine();
                if((a)!=null){
                recivedarray[i]=a;
                System.out.println(a);
                }
                }                
            }
            for(i=0;i<500;i++){
                
                if((recivedarray[i])!=null){
            String[] data = recivedarray[i].split("   ");
            
            String a=data[0];
            String b=data[1];
            String c=data[2];
            String d=data[3];
            String e=data[4];
            String f=data[5];
            
            
            
            if(data[0]!=null){
            array1[i]=a;
            array2[i]=b;
            array3[i]=c;
            array4[i]=d;
            array5[i]=e;
            array6[i]=f;
            
            br.close();
            }}}
        } catch (Exception ex) {
            System.out.println(ex+"Occurs");
        }
    }
}

