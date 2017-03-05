package RMS;

public class n_login extends javax.swing.JFrame {

  static int ID=0;
  static int BILL=0;
    public n_login() {
        initComponents();
        
    }

  
    @SuppressWarnings("unchecked")
    // <editor-fold defaultstate="collapsed" desc="Generated Code">//GEN-BEGIN:initComponents
    private void initComponents() {

        jLabel2 = new javax.swing.JLabel();
        jLabel3 = new javax.swing.JLabel();
        usert1 = new javax.swing.JTextField();
        passt1 = new javax.swing.JPasswordField();
        logbutton = new javax.swing.JButton();
        jLabel1 = new javax.swing.JLabel();
        logbutton3 = new javax.swing.JButton();
        jLabel4 = new javax.swing.JLabel();

        setDefaultCloseOperation(javax.swing.WindowConstants.EXIT_ON_CLOSE);
        getContentPane().setLayout(null);

        jLabel2.setFont(new java.awt.Font("Times New Roman", 3, 36)); // NOI18N
        jLabel2.setForeground(new java.awt.Color(240, 240, 240));
        jLabel2.setText("User Name ");
        getContentPane().add(jLabel2);
        jLabel2.setBounds(30, 150, 190, 30);

        jLabel3.setBackground(new java.awt.Color(102, 51, 0));
        jLabel3.setFont(new java.awt.Font("Times New Roman", 3, 36)); // NOI18N
        jLabel3.setForeground(new java.awt.Color(255, 255, 255));
        jLabel3.setText("Password  ");
        getContentPane().add(jLabel3);
        jLabel3.setBounds(30, 180, 170, 50);

        usert1.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                usert1ActionPerformed(evt);
            }
        });
        getContentPane().add(usert1);
        usert1.setBounds(280, 150, 230, 30);

        passt1.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                passt1ActionPerformed(evt);
            }
        });
        getContentPane().add(passt1);
        passt1.setBounds(280, 190, 230, 30);

        logbutton.setBackground(new java.awt.Color(153, 153, 153));
        logbutton.setFont(new java.awt.Font("Tahoma", 1, 24)); // NOI18N
        logbutton.setText("Log In");
        logbutton.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                logbuttonActionPerformed(evt);
            }
        });
        getContentPane().add(logbutton);
        logbutton.setBounds(110, 260, 140, 40);

        jLabel1.setFont(new java.awt.Font("Times New Roman", 2, 48)); // NOI18N
        jLabel1.setForeground(new java.awt.Color(238, 205, 105));
        jLabel1.setText("A Smarter Way To Order");
        getContentPane().add(jLabel1);
        jLabel1.setBounds(0, 30, 510, 40);

        logbutton3.setBackground(new java.awt.Color(153, 153, 153));
        logbutton3.setFont(new java.awt.Font("Tahoma", 1, 24)); // NOI18N
        logbutton3.setText("Exit");
        logbutton3.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                logbutton3ActionPerformed(evt);
            }
        });
        getContentPane().add(logbutton3);
        logbutton3.setBounds(270, 260, 140, 40);

        jLabel4.setIcon(new javax.swing.ImageIcon(getClass().getResource("/RMS/eatoye.jpg"))); // NOI18N
        getContentPane().add(jLabel4);
        jLabel4.setBounds(-10, -10, 550, 400);

        setBounds(0, 0, 555, 432);
    }// </editor-fold>//GEN-END:initComponents

    private void usert1ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_usert1ActionPerformed
      
    }//GEN-LAST:event_usert1ActionPerformed

    private void passt1ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_passt1ActionPerformed
      
    }//GEN-LAST:event_passt1ActionPerformed

    private void logbuttonActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_logbuttonActionPerformed
       abstraction logic = new business_logic(); 
        String a,b;
        a=usert1.getText();
        b=passt1.getText();
        logic.getlogin(a, b);
        usert1.setText("");
        passt1.setText("");
        this.dispose();
    }//GEN-LAST:event_logbuttonActionPerformed

    private void logbutton3ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_logbutton3ActionPerformed
       
             this.setVisible(false);
    }//GEN-LAST:event_logbutton3ActionPerformed

   
    public static void main(String args[]) {
       
        java.awt.EventQueue.invokeLater(new Runnable() {
            public void run() {
                new n_login().setVisible(true);
            }
        });
    }

    // Variables declaration - do not modify//GEN-BEGIN:variables
    private javax.swing.JLabel jLabel1;
    private javax.swing.JLabel jLabel2;
    private javax.swing.JLabel jLabel3;
    private javax.swing.JLabel jLabel4;
    private javax.swing.JButton logbutton;
    private javax.swing.JButton logbutton3;
    private javax.swing.JPasswordField passt1;
    private javax.swing.JTextField usert1;
    // End of variables declaration//GEN-END:variables
}
