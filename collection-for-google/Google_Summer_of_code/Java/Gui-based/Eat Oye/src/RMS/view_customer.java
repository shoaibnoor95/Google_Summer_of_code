package RMS;


import static RMS.n_login.ID;
import javax.swing.JOptionPane;
import javax.swing.table.DefaultTableModel;


public class view_customer extends javax.swing.JFrame {

    String name; 
    public view_customer() {
        initComponents();
        
         ID=ID+1;
           idt.setText(""+ID);
      
    }

    @SuppressWarnings("unchecked")
    // <editor-fold defaultstate="collapsed" desc="Generated Code">//GEN-BEGIN:initComponents
    private void initComponents() {

        jLabel1 = new javax.swing.JLabel();
        sign_OUT = new javax.swing.JButton();
        jLabel4 = new javax.swing.JLabel();
        idt = new javax.swing.JTextField();
        jLabel5 = new javax.swing.JLabel();
        namet = new javax.swing.JTextField();
        jLabel6 = new javax.swing.JLabel();
        cellt = new javax.swing.JTextField();
        jLabel7 = new javax.swing.JLabel();
        tablet = new javax.swing.JTextField();
        add_cistomer = new javax.swing.JButton();
        jLabel2 = new javax.swing.JLabel();

        setDefaultCloseOperation(javax.swing.WindowConstants.EXIT_ON_CLOSE);
        getContentPane().setLayout(null);

        jLabel1.setFont(new java.awt.Font("Tahoma", 3, 36)); // NOI18N
        jLabel1.setText("Customers");
        getContentPane().add(jLabel1);
        jLabel1.setBounds(40, 20, 300, 58);

        sign_OUT.setFont(new java.awt.Font("Tahoma", 1, 10)); // NOI18N
        sign_OUT.setText("Sign Out");
        sign_OUT.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                sign_OUTActionPerformed(evt);
            }
        });
        getContentPane().add(sign_OUT);
        sign_OUT.setBounds(80, 330, 120, 40);

        jLabel4.setFont(new java.awt.Font("Tahoma", 3, 18)); // NOI18N
        jLabel4.setText("ID :");
        getContentPane().add(jLabel4);
        jLabel4.setBounds(20, 110, 40, 22);

        idt.setEditable(false);
        idt.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                idtActionPerformed(evt);
            }
        });
        idt.addKeyListener(new java.awt.event.KeyAdapter() {
            public void keyTyped(java.awt.event.KeyEvent evt) {
                idtKeyTyped(evt);
            }
        });
        getContentPane().add(idt);
        idt.setBounds(120, 110, 140, 20);

        jLabel5.setFont(new java.awt.Font("Tahoma", 3, 18)); // NOI18N
        jLabel5.setText("NAME :");
        getContentPane().add(jLabel5);
        jLabel5.setBounds(20, 150, 70, 22);

        namet.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                nametActionPerformed(evt);
            }
        });
        namet.addKeyListener(new java.awt.event.KeyAdapter() {
            public void keyTyped(java.awt.event.KeyEvent evt) {
                nametKeyTyped(evt);
            }
        });
        getContentPane().add(namet);
        namet.setBounds(120, 150, 140, 20);

        jLabel6.setFont(new java.awt.Font("Tahoma", 3, 18)); // NOI18N
        jLabel6.setText("CELL NO :");
        getContentPane().add(jLabel6);
        jLabel6.setBounds(20, 190, 90, 22);

        cellt.addKeyListener(new java.awt.event.KeyAdapter() {
            public void keyTyped(java.awt.event.KeyEvent evt) {
                celltKeyTyped(evt);
            }
        });
        getContentPane().add(cellt);
        cellt.setBounds(120, 190, 140, 20);

        jLabel7.setFont(new java.awt.Font("Tahoma", 3, 18)); // NOI18N
        jLabel7.setText("Adress");
        getContentPane().add(jLabel7);
        jLabel7.setBounds(20, 230, 110, 22);

        tablet.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                tabletActionPerformed(evt);
            }
        });
        tablet.addKeyListener(new java.awt.event.KeyAdapter() {
            public void keyTyped(java.awt.event.KeyEvent evt) {
                tabletKeyTyped(evt);
            }
        });
        getContentPane().add(tablet);
        tablet.setBounds(120, 230, 150, 20);

        add_cistomer.setFont(new java.awt.Font("Tahoma", 1, 14)); // NOI18N
        add_cistomer.setText("ADD CUSTOMER");
        add_cistomer.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                add_cistomerActionPerformed(evt);
            }
        });
        getContentPane().add(add_cistomer);
        add_cistomer.setBounds(70, 270, 150, 50);

        jLabel2.setIcon(new javax.swing.ImageIcon(getClass().getResource("/RMS/choice.png"))); // NOI18N
        getContentPane().add(jLabel2);
        jLabel2.setBounds(-10, 10, 360, 390);

        pack();
    }// </editor-fold>//GEN-END:initComponents

    private void sign_OUTActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_sign_OUTActionPerformed
        n_login log = new n_login();
        log.setVisible(true);
        this.dispose();
    }//GEN-LAST:event_sign_OUTActionPerformed

    private void idtActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_idtActionPerformed
        
    }//GEN-LAST:event_idtActionPerformed

    public void changes(String name){
        this.name=name;
    }
    private void add_cistomerActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_add_cistomerActionPerformed
        
       
        try{
                   
            ID=ID+1;
            idt.setText(""+ID);
            if(name=="kfc"){
            emp_billing2 emp = new emp_billing2();
            emp.name.setText(namet.getText());
            emp.setVisible(true);
            this.dispose();
        }
            else if(name=="subway"){
            emp_billing emp = new emp_billing();
            emp.name.setText(namet.getText());
            emp.setVisible(true);
            this.dispose();
        }
            else if(name=="mac"){
            emp_billing3 emp = new emp_billing3();
            emp.name.setText(namet.getText());
            emp.setVisible(true);
            this.dispose();
        }
            else if(name=="kabab"){
            emp_billing4 emp = new emp_billing4();
            emp.name.setText(namet.getText());
            emp.setVisible(true);
            this.dispose();
        }
            else if(name=="nandos"){
            emp_billing5 emp = new emp_billing5();
            emp.name.setText(namet.getText());
            emp.setVisible(true);
            this.dispose();
        }
           
         else if(name=="ginsoy"){
            emp_billing6 emp = new emp_billing6();
            emp.name.setText(namet.getText());
            emp.setVisible(true);
            this.dispose();
        }
            else if(name=="red"){
            emp_billing7 emp = new emp_billing7();
            emp.name.setText(namet.getText());
            emp.setVisible(true);
            this.dispose();
        }
            else if(name=="lal"){
            emp_billing8 emp = new emp_billing8();
            emp.name.setText(namet.getText());
            emp.setVisible(true);
            this.dispose();
        }
            else if(name=="omp"){
            emp_billing12 emp = new emp_billing12();
            emp.name.setText(namet.getText());
            emp.setVisible(true);
            this.dispose();
        }
            
            else if(name=="pizza"){
            emp_billing10 emp = new emp_billing10();
            emp.name.setText(namet.getText());
            emp.setVisible(true);
            this.dispose();
        }
            else if(name=="broad"){
            emp_billing11 emp = new emp_billing11();
            emp.name.setText(namet.getText());
            emp.setVisible(true);
            this.dispose();
        }
            else if(name=="burger"){
            emp_billing9 emp = new emp_billing9();
            emp.name.setText(namet.getText());
            emp.setVisible(true);
            this.dispose();
        }
            else if(name=="california"){
            emp_billing13 emp = new emp_billing13();
            emp.name.setText(namet.getText());
            emp.setVisible(true);
            this.dispose();
        }
        }
       
        catch(Exception e)
        {   
            JOptionPane.showMessageDialog(idt,"text field empty");
    
            
        }
        
    }//GEN-LAST:event_add_cistomerActionPerformed

    private void idtKeyTyped(java.awt.event.KeyEvent evt) {//GEN-FIRST:event_idtKeyTyped
          char id = evt.getKeyChar();
        if(id<'0' || id>'9')
        {
            getToolkit().beep();
            evt.consume();
        }
        else if (idt.getText().length()>=2)
        {
            evt.consume();
        }
    }//GEN-LAST:event_idtKeyTyped

    private void nametKeyTyped(java.awt.event.KeyEvent evt) {//GEN-FIRST:event_nametKeyTyped
       char name =evt.getKeyChar();
        if(!(name<'0' || name>'9'))
        {
            getToolkit().beep();
            evt.consume();
        }
        else if(namet.getText().length()>=10)
        {
            evt.consume();
        }
    }//GEN-LAST:event_nametKeyTyped

    private void celltKeyTyped(java.awt.event.KeyEvent evt) {//GEN-FIRST:event_celltKeyTyped
      char cel = evt.getKeyChar();
        if(cel<'0' || cel>'9')
        {
            getToolkit().beep();
            evt.consume();
        }
        else if(cellt.getText().length()>=11)
        {
            evt.consume();
        }
    }//GEN-LAST:event_celltKeyTyped

    private void tabletKeyTyped(java.awt.event.KeyEvent evt) {//GEN-FIRST:event_tabletKeyTyped
         char cel = evt.getKeyChar();
       /* if(cel==' ')
        {
            getToolkit().beep();
            evt.consume();
        }*/
        /*else if(tablet.getText().length()<=4)
        {
            evt.consume();
        }*/
    }//GEN-LAST:event_tabletKeyTyped

    private void tabletActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_tabletActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_tabletActionPerformed

    private void nametActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_nametActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_nametActionPerformed

    
    public static void main(String args[]) {
       
        java.awt.EventQueue.invokeLater(new Runnable() {
            public void run() {
                new view_customer().setVisible(true);
            }
        });
    }

    // Variables declaration - do not modify//GEN-BEGIN:variables
    private javax.swing.JButton add_cistomer;
    private javax.swing.JTextField cellt;
    private javax.swing.JTextField idt;
    private javax.swing.JLabel jLabel1;
    private javax.swing.JLabel jLabel2;
    private javax.swing.JLabel jLabel4;
    private javax.swing.JLabel jLabel5;
    private javax.swing.JLabel jLabel6;
    private javax.swing.JLabel jLabel7;
    public javax.swing.JTextField namet;
    private javax.swing.JButton sign_OUT;
    private javax.swing.JTextField tablet;
    // End of variables declaration//GEN-END:variables

   
}
