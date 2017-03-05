package RMS;
import javax.swing.JOptionPane;
import javax.swing.table.DefaultTableModel;


public class view_employees extends javax.swing.JFrame {

   
    public view_employees() {
        initComponents();
    }

   
    @SuppressWarnings("unchecked")
    // <editor-fold defaultstate="collapsed" desc="Generated Code">//GEN-BEGIN:initComponents
    private void initComponents() {

        jLabel1 = new javax.swing.JLabel();
        jScrollPane1 = new javax.swing.JScrollPane();
        emp_tab = new javax.swing.JTable();
        delete_info = new javax.swing.JButton();
        sign_out = new javax.swing.JButton();
        jLabel4 = new javax.swing.JLabel();
        jLabel5 = new javax.swing.JLabel();
        jLabel6 = new javax.swing.JLabel();
        jLabel7 = new javax.swing.JLabel();
        jLabel8 = new javax.swing.JLabel();
        idt = new javax.swing.JTextField();
        cellt = new javax.swing.JTextField();
        positiont = new javax.swing.JTextField();
        salaryt = new javax.swing.JTextField();
        namet = new javax.swing.JTextField();
        add_employee = new javax.swing.JButton();
        jButton2 = new javax.swing.JButton();
        jLabel2 = new javax.swing.JLabel();

        setDefaultCloseOperation(javax.swing.WindowConstants.EXIT_ON_CLOSE);
        getContentPane().setLayout(null);

        jLabel1.setFont(new java.awt.Font("Tahoma", 1, 48)); // NOI18N
        jLabel1.setText("           Employees");
        getContentPane().add(jLabel1);
        jLabel1.setBounds(10, 0, 430, 50);

        emp_tab.setModel(new javax.swing.table.DefaultTableModel(
            new Object [][] {

            },
            new String [] {
                "ID", "NAME", "SALARY", "POSITION", "CELL NO"
            }
        ) {
            boolean[] canEdit = new boolean [] {
                false, false, false, false, false
            };

            public boolean isCellEditable(int rowIndex, int columnIndex) {
                return canEdit [columnIndex];
            }
        });
        emp_tab.setAlignmentX(1.0F);
        emp_tab.setAlignmentY(1.0F);
        emp_tab.setRowHeight(40);
        emp_tab.setSelectionBackground(new java.awt.Color(204, 102, 0));
        jScrollPane1.setViewportView(emp_tab);

        getContentPane().add(jScrollPane1);
        jScrollPane1.setBounds(10, 50, 390, 470);

        delete_info.setFont(new java.awt.Font("Tahoma", 1, 11)); // NOI18N
        delete_info.setText("Delete info");
        delete_info.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                delete_infoActionPerformed(evt);
            }
        });
        getContentPane().add(delete_info);
        delete_info.setBounds(530, 350, 110, 40);

        sign_out.setText("Sign Out");
        sign_out.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                sign_outActionPerformed(evt);
            }
        });
        getContentPane().add(sign_out);
        sign_out.setBounds(560, 10, 73, 48);

        jLabel4.setFont(new java.awt.Font("Tahoma", 1, 12)); // NOI18N
        jLabel4.setForeground(new java.awt.Color(102, 0, 0));
        jLabel4.setText("SALARY");
        getContentPane().add(jLabel4);
        jLabel4.setBounds(460, 170, 49, 20);

        jLabel5.setFont(new java.awt.Font("Tahoma", 1, 12)); // NOI18N
        jLabel5.setForeground(new java.awt.Color(102, 0, 0));
        jLabel5.setText("CELL NO");
        getContentPane().add(jLabel5);
        jLabel5.setBounds(460, 230, 50, 20);

        jLabel6.setFont(new java.awt.Font("Tahoma", 1, 12)); // NOI18N
        jLabel6.setForeground(new java.awt.Color(102, 0, 0));
        jLabel6.setText("NAME");
        getContentPane().add(jLabel6);
        jLabel6.setBounds(470, 140, 50, 20);

        jLabel7.setFont(new java.awt.Font("Tahoma", 1, 12)); // NOI18N
        jLabel7.setForeground(new java.awt.Color(102, 0, 0));
        jLabel7.setText("POSITION ");
        getContentPane().add(jLabel7);
        jLabel7.setBounds(450, 200, 63, 20);

        jLabel8.setFont(new java.awt.Font("Tahoma", 1, 12)); // NOI18N
        jLabel8.setForeground(new java.awt.Color(102, 0, 0));
        jLabel8.setText("ID ");
        getContentPane().add(jLabel8);
        jLabel8.setBounds(480, 110, 18, 20);

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
        idt.setBounds(530, 110, 100, 20);

        cellt.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                celltActionPerformed(evt);
            }
        });
        cellt.addKeyListener(new java.awt.event.KeyAdapter() {
            public void keyTyped(java.awt.event.KeyEvent evt) {
                celltKeyTyped(evt);
            }
        });
        getContentPane().add(cellt);
        cellt.setBounds(530, 230, 100, 20);

        positiont.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                positiontActionPerformed(evt);
            }
        });
        positiont.addKeyListener(new java.awt.event.KeyAdapter() {
            public void keyTyped(java.awt.event.KeyEvent evt) {
                positiontKeyTyped(evt);
            }
        });
        getContentPane().add(positiont);
        positiont.setBounds(530, 200, 100, 20);

        salaryt.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                salarytActionPerformed(evt);
            }
        });
        salaryt.addKeyListener(new java.awt.event.KeyAdapter() {
            public void keyTyped(java.awt.event.KeyEvent evt) {
                salarytKeyTyped(evt);
            }
        });
        getContentPane().add(salaryt);
        salaryt.setBounds(530, 170, 100, 20);

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
        namet.setBounds(530, 140, 100, 20);

        add_employee.setFont(new java.awt.Font("Tahoma", 1, 14)); // NOI18N
        add_employee.setText("ADD EMPLOYEE");
        add_employee.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                add_employeeActionPerformed(evt);
            }
        });
        getContentPane().add(add_employee);
        add_employee.setBounds(450, 410, 150, 25);

        jButton2.setFont(new java.awt.Font("Tahoma", 1, 12)); // NOI18N
        jButton2.setText("Reset");
        jButton2.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jButton2ActionPerformed(evt);
            }
        });
        getContentPane().add(jButton2);
        jButton2.setBounds(410, 350, 110, 40);

        jLabel2.setIcon(new javax.swing.ImageIcon(getClass().getResource("/RMS/Food_Court_Dalma.jpg"))); // NOI18N
        getContentPane().add(jLabel2);
        jLabel2.setBounds(0, 0, 650, 520);

        pack();
    }// </editor-fold>//GEN-END:initComponents

    private void sign_outActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_sign_outActionPerformed
         n_login log = new n_login();
         log.setVisible(true);
         setVisible(false);
    }//GEN-LAST:event_sign_outActionPerformed

    private void idtActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_idtActionPerformed
       
    }//GEN-LAST:event_idtActionPerformed

    private void celltActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_celltActionPerformed
        
    }//GEN-LAST:event_celltActionPerformed

    private void positiontActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_positiontActionPerformed
       
    }//GEN-LAST:event_positiontActionPerformed

    private void salarytActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_salarytActionPerformed
       
    }//GEN-LAST:event_salarytActionPerformed

    private void nametActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_nametActionPerformed
       
    }//GEN-LAST:event_nametActionPerformed

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

    private void salarytKeyTyped(java.awt.event.KeyEvent evt) {//GEN-FIRST:event_salarytKeyTyped
          char id = evt.getKeyChar();
        if(id<'0' || id>'9')
        {
            getToolkit().beep();
            evt.consume();
        }
        else if (salaryt.getText().length()>=5)
        {
            evt.consume();
        }
    }//GEN-LAST:event_salarytKeyTyped

    private void positiontKeyTyped(java.awt.event.KeyEvent evt) {//GEN-FIRST:event_positiontKeyTyped
        char name =evt.getKeyChar();
        if(!(name<'0' || name>'9'))
        {
            getToolkit().beep();
            evt.consume();
        }
        else if(positiont.getText().length()>=10)
        {
            evt.consume();
        }
    }//GEN-LAST:event_positiontKeyTyped

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

    private void add_employeeActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_add_employeeActionPerformed
        if(!(idt.getText().equals("") || namet.getText().equals("") || cellt.getText().equals("") || salaryt.getText().equals("") || positiont.getText().equals("")))
        {
            
            
            viewtable();
        }
        else 
        {   
            JOptionPane.showMessageDialog(idt,"text field empty");
          
        }
        
    }//GEN-LAST:event_add_employeeActionPerformed

    private void jButton2ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jButton2ActionPerformed
       idt.setText("");
       namet.setText("");
       salaryt.setText("");
       positiont.setText("");
       cellt.setText("");
    }//GEN-LAST:event_jButton2ActionPerformed

    private void delete_infoActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_delete_infoActionPerformed
        DefaultTableModel model = (DefaultTableModel) emp_tab.getModel();
        if(emp_tab.getSelectedRow()== -1)
        {
             JOptionPane.showMessageDialog(null, "select row to delete !!");
        }
        else 
        {
            model.removeRow(emp_tab.getSelectedRow());            
        }
    }//GEN-LAST:event_delete_infoActionPerformed

   
    public static void main(String args[]) {
       
        java.awt.EventQueue.invokeLater(new Runnable() {
            public void run() {
                new view_employees().setVisible(true);
            }
        });
    }

    // Variables declaration - do not modify//GEN-BEGIN:variables
    private javax.swing.JButton add_employee;
    private javax.swing.JTextField cellt;
    private javax.swing.JButton delete_info;
    private javax.swing.JTable emp_tab;
    private javax.swing.JTextField idt;
    private javax.swing.JButton jButton2;
    private javax.swing.JLabel jLabel1;
    private javax.swing.JLabel jLabel2;
    private javax.swing.JLabel jLabel4;
    private javax.swing.JLabel jLabel5;
    private javax.swing.JLabel jLabel6;
    private javax.swing.JLabel jLabel7;
    private javax.swing.JLabel jLabel8;
    private javax.swing.JScrollPane jScrollPane1;
    private javax.swing.JTextField namet;
    private javax.swing.JTextField positiont;
    private javax.swing.JTextField salaryt;
    private javax.swing.JButton sign_out;
    // End of variables declaration//GEN-END:variables
private void viewtable()
    {
        DefaultTableModel emp_model ;
        emp_model = (DefaultTableModel) emp_tab.getModel();
        emp_model.addRow( new Object []{idt.getText(),namet.getText(),salaryt.getText(),positiont.getText(),cellt.getText()} );
        
        idt.setText("");
        namet.setText("");
        cellt.setText("");
        salaryt.setText("");
        positiont.setText("");
        
    }

}
