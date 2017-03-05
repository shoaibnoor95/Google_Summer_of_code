package RMS;


public class frnt_pge extends javax.swing.JFrame {

 
    public frnt_pge() {
        initComponents();
    
    }

    @SuppressWarnings("unchecked")
    // <editor-fold defaultstate="collapsed" desc="Generated Code">//GEN-BEGIN:initComponents
    private void initComponents() {

        bill = new javax.swing.JButton();
        v_emp = new javax.swing.JButton();
        v_cus = new javax.swing.JButton();
        jLabel1 = new javax.swing.JLabel();
        sign_OUT = new javax.swing.JButton();
        jLabel2 = new javax.swing.JLabel();

        setDefaultCloseOperation(javax.swing.WindowConstants.EXIT_ON_CLOSE);
        getContentPane().setLayout(null);

        bill.setBackground(new java.awt.Color(102, 0, 0));
        bill.setFont(new java.awt.Font("Tahoma", 1, 24)); // NOI18N
        bill.setForeground(new java.awt.Color(102, 102, 102));
        bill.setText("View Billing");
        bill.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                billActionPerformed(evt);
            }
        });
        getContentPane().add(bill);
        bill.setBounds(20, 130, 240, 90);

        v_emp.setBackground(new java.awt.Color(102, 0, 0));
        v_emp.setFont(new java.awt.Font("Tahoma", 1, 24)); // NOI18N
        v_emp.setForeground(new java.awt.Color(102, 102, 102));
        v_emp.setText("Employee");
        v_emp.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                v_empActionPerformed(evt);
            }
        });
        getContentPane().add(v_emp);
        v_emp.setBounds(160, 220, 200, 90);

        v_cus.setBackground(new java.awt.Color(102, 0, 0));
        v_cus.setFont(new java.awt.Font("Tahoma", 1, 24)); // NOI18N
        v_cus.setForeground(new java.awt.Color(102, 102, 102));
        v_cus.setText("View Customer");
        v_cus.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                v_cusActionPerformed(evt);
            }
        });
        getContentPane().add(v_cus);
        v_cus.setBounds(260, 130, 240, 90);

        jLabel1.setFont(new java.awt.Font("Tahoma", 1, 36)); // NOI18N
        jLabel1.setForeground(new java.awt.Color(0, 0, 102));
        jLabel1.setText("        Welcome");
        getContentPane().add(jLabel1);
        jLabel1.setBounds(90, 30, 360, 40);

        sign_OUT.setFont(new java.awt.Font("Tahoma", 1, 10)); // NOI18N
        sign_OUT.setText("Sign Out");
        sign_OUT.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                sign_OUTActionPerformed(evt);
            }
        });
        getContentPane().add(sign_OUT);
        sign_OUT.setBounds(410, 340, 100, 50);

        jLabel2.setIcon(new javax.swing.ImageIcon(getClass().getResource("/RMS/Food_Court_Dalma.jpg"))); // NOI18N
        getContentPane().add(jLabel2);
        jLabel2.setBounds(0, 0, 540, 400);

        setBounds(0, 0, 556, 442);
    }// </editor-fold>//GEN-END:initComponents

    private void v_cusActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_v_cusActionPerformed
        
    }//GEN-LAST:event_v_cusActionPerformed

    private void billActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_billActionPerformed
       
    }//GEN-LAST:event_billActionPerformed

    private void v_empActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_v_empActionPerformed
        view_employees emp = new view_employees();
        emp.setVisible(true);
        this.dispose();
    }//GEN-LAST:event_v_empActionPerformed

    private void sign_OUTActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_sign_OUTActionPerformed
        n_login log = new n_login();
        log.setVisible(true);
        this.dispose();
    }//GEN-LAST:event_sign_OUTActionPerformed

  
    public static void main(String args[]) {
        
      
        java.awt.EventQueue.invokeLater(new Runnable() {
            public void run() {
                new frnt_pge().setVisible(true);
            }
        });
    }

    // Variables declaration - do not modify//GEN-BEGIN:variables
    private javax.swing.JButton bill;
    private javax.swing.JLabel jLabel1;
    private javax.swing.JLabel jLabel2;
    private javax.swing.JButton sign_OUT;
    private javax.swing.JButton v_cus;
    private javax.swing.JButton v_emp;
    // End of variables declaration//GEN-END:variables
}
