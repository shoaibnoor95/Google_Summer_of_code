
package RMS;
import static RMS.n_login.BILL;
import java.awt.HeadlessException;
import javax.swing.JOptionPane;
import javax.swing.table.DefaultTableModel;


/**
 *
 * @author Shoaib
 */
public class emp_billing9 extends javax.swing.JFrame {

    int sum;
    public emp_billing9() {
        initComponents();
        BILL=BILL+1;
       billid.setText(""+BILL);
      
    }

   
    @SuppressWarnings("unchecked")
    // <editor-fold defaultstate="collapsed" desc="Generated Code">//GEN-BEGIN:initComponents
    private void initComponents() {

        jLabel1 = new javax.swing.JLabel();
        billid = new javax.swing.JTextField();
        jLabel2 = new javax.swing.JLabel();
        name = new javax.swing.JTextField();
        jPanel5 = new javax.swing.JPanel();
        jPanel2 = new javax.swing.JPanel();
        jLabel3 = new javax.swing.JLabel();
        strt = new javax.swing.JComboBox<>();
        jLabel6 = new javax.swing.JLabel();
        jLabel7 = new javax.swing.JLabel();
        quantity = new javax.swing.JTextField();
        jPanel3 = new javax.swing.JPanel();
        jLabel4 = new javax.swing.JLabel();
        main = new javax.swing.JComboBox<>();
        jPanel4 = new javax.swing.JPanel();
        jLabel5 = new javax.swing.JLabel();
        dest = new javax.swing.JComboBox<>();
        jScrollPane1 = new javax.swing.JScrollPane();
        foodtab = new javax.swing.JTable();
        add = new javax.swing.JButton();
        delete = new javax.swing.JButton();
        payslip = new javax.swing.JButton();
        jLabel8 = new javax.swing.JLabel();
        jLabel9 = new javax.swing.JLabel();

        setDefaultCloseOperation(javax.swing.WindowConstants.EXIT_ON_CLOSE);
        getContentPane().setLayout(null);

        jLabel1.setFont(new java.awt.Font("Tahoma", 1, 12)); // NOI18N
        jLabel1.setText("BILL ID                :");
        getContentPane().add(jLabel1);
        jLabel1.setBounds(62, 99, 114, 28);

        billid.setEditable(false);
        billid.setBorder(javax.swing.BorderFactory.createLineBorder(new java.awt.Color(102, 0, 0)));
        billid.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                billidActionPerformed(evt);
            }
        });
        billid.addKeyListener(new java.awt.event.KeyAdapter() {
            public void keyTyped(java.awt.event.KeyEvent evt) {
                billidKeyTyped(evt);
            }
        });
        getContentPane().add(billid);
        billid.setBounds(217, 103, 133, 23);

        jLabel2.setFont(new java.awt.Font("Tahoma", 1, 12)); // NOI18N
        jLabel2.setText("CUSTOMER NAME :");
        getContentPane().add(jLabel2);
        jLabel2.setBounds(62, 138, 114, 25);

        name.setEditable(false);
        name.setBorder(javax.swing.BorderFactory.createLineBorder(new java.awt.Color(102, 0, 0)));
        name.addKeyListener(new java.awt.event.KeyAdapter() {
            public void keyTyped(java.awt.event.KeyEvent evt) {
                nameKeyTyped(evt);
            }
        });
        getContentPane().add(name);
        name.setBounds(217, 138, 133, 25);

        jPanel5.setBorder(javax.swing.BorderFactory.createLineBorder(new java.awt.Color(102, 0, 0), 2));

        jPanel2.setBorder(javax.swing.BorderFactory.createLineBorder(new java.awt.Color(102, 0, 0), 2));

        jLabel3.setFont(new java.awt.Font("Tahoma", 1, 14)); // NOI18N
        jLabel3.setForeground(new java.awt.Color(51, 0, 51));
        jLabel3.setText("Appetizer");

        strt.setFont(new java.awt.Font("Tahoma", 1, 14)); // NOI18N
        strt.setModel(new javax.swing.DefaultComboBoxModel<>(new String[] { "Select  Appetizer", "Chilli Popers", "Nuggets", "Wings", "Ornion rings", "Fried Chicken" }));
        strt.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                strtActionPerformed(evt);
            }
        });

        javax.swing.GroupLayout jPanel2Layout = new javax.swing.GroupLayout(jPanel2);
        jPanel2.setLayout(jPanel2Layout);
        jPanel2Layout.setHorizontalGroup(
            jPanel2Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(jPanel2Layout.createSequentialGroup()
                .addContainerGap()
                .addGroup(jPanel2Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addComponent(strt, 0, 185, Short.MAX_VALUE)
                    .addGroup(jPanel2Layout.createSequentialGroup()
                        .addComponent(jLabel3, javax.swing.GroupLayout.PREFERRED_SIZE, 74, javax.swing.GroupLayout.PREFERRED_SIZE)
                        .addGap(0, 0, Short.MAX_VALUE)))
                .addContainerGap())
        );
        jPanel2Layout.setVerticalGroup(
            jPanel2Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(jPanel2Layout.createSequentialGroup()
                .addComponent(jLabel3, javax.swing.GroupLayout.PREFERRED_SIZE, 23, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addComponent(strt)
                .addContainerGap())
        );

        jLabel6.setBackground(new java.awt.Color(204, 204, 204));
        jLabel6.setFont(new java.awt.Font("Tahoma", 1, 26)); // NOI18N
        jLabel6.setForeground(new java.awt.Color(0, 0, 51));
        jLabel6.setText("FOOD ITEMS");

        jLabel7.setFont(new java.awt.Font("Tahoma", 1, 14)); // NOI18N
        jLabel7.setText("Quantity :");

        quantity.addKeyListener(new java.awt.event.KeyAdapter() {
            public void keyTyped(java.awt.event.KeyEvent evt) {
                quantityKeyTyped(evt);
            }
        });

        jPanel3.setBorder(javax.swing.BorderFactory.createLineBorder(new java.awt.Color(102, 0, 0), 2));

        jLabel4.setFont(new java.awt.Font("Tahoma", 1, 14)); // NOI18N
        jLabel4.setForeground(new java.awt.Color(51, 0, 51));
        jLabel4.setText("Gourmet ");

        main.setFont(new java.awt.Font("Tahoma", 1, 14)); // NOI18N
        main.setModel(new javax.swing.DefaultComboBoxModel<>(new String[] { "Select Main", "Fiery Hot Masala", "Mayonatic", "Bar Bee Que Hickory", "Masala Fries", "Curly Fries", "Roasted Chicken", "Dinner Roll" }));
        main.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                mainActionPerformed(evt);
            }
        });

        javax.swing.GroupLayout jPanel3Layout = new javax.swing.GroupLayout(jPanel3);
        jPanel3.setLayout(jPanel3Layout);
        jPanel3Layout.setHorizontalGroup(
            jPanel3Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(jPanel3Layout.createSequentialGroup()
                .addContainerGap()
                .addGroup(jPanel3Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addComponent(main, 0, 177, Short.MAX_VALUE)
                    .addGroup(jPanel3Layout.createSequentialGroup()
                        .addComponent(jLabel4, javax.swing.GroupLayout.PREFERRED_SIZE, 121, javax.swing.GroupLayout.PREFERRED_SIZE)
                        .addGap(0, 0, Short.MAX_VALUE)))
                .addContainerGap())
        );
        jPanel3Layout.setVerticalGroup(
            jPanel3Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(jPanel3Layout.createSequentialGroup()
                .addComponent(jLabel4, javax.swing.GroupLayout.PREFERRED_SIZE, 23, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addComponent(main)
                .addContainerGap())
        );

        jPanel4.setBorder(javax.swing.BorderFactory.createLineBorder(new java.awt.Color(102, 0, 0), 2));

        jLabel5.setFont(new java.awt.Font("Tahoma", 1, 14)); // NOI18N
        jLabel5.setForeground(new java.awt.Color(51, 0, 51));
        jLabel5.setText("Shakes/Drinks");

        dest.setFont(new java.awt.Font("Tahoma", 1, 14)); // NOI18N
        dest.setModel(new javax.swing.DefaultComboBoxModel<>(new String[] { "Drink/Desert", "Strawberry", "Choco Oreo", "Cream Oreo", "Softdrink" }));
        dest.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                destActionPerformed(evt);
            }
        });

        javax.swing.GroupLayout jPanel4Layout = new javax.swing.GroupLayout(jPanel4);
        jPanel4.setLayout(jPanel4Layout);
        jPanel4Layout.setHorizontalGroup(
            jPanel4Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(jPanel4Layout.createSequentialGroup()
                .addContainerGap()
                .addGroup(jPanel4Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addComponent(dest, 0, 173, Short.MAX_VALUE)
                    .addGroup(jPanel4Layout.createSequentialGroup()
                        .addComponent(jLabel5, javax.swing.GroupLayout.PREFERRED_SIZE, 126, javax.swing.GroupLayout.PREFERRED_SIZE)
                        .addGap(0, 0, Short.MAX_VALUE)))
                .addContainerGap())
        );
        jPanel4Layout.setVerticalGroup(
            jPanel4Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(jPanel4Layout.createSequentialGroup()
                .addComponent(jLabel5, javax.swing.GroupLayout.PREFERRED_SIZE, 23, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addComponent(dest)
                .addContainerGap())
        );

        javax.swing.GroupLayout jPanel5Layout = new javax.swing.GroupLayout(jPanel5);
        jPanel5.setLayout(jPanel5Layout);
        jPanel5Layout.setHorizontalGroup(
            jPanel5Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(jPanel5Layout.createSequentialGroup()
                .addContainerGap()
                .addGroup(jPanel5Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addGroup(javax.swing.GroupLayout.Alignment.TRAILING, jPanel5Layout.createSequentialGroup()
                        .addGap(0, 0, Short.MAX_VALUE)
                        .addComponent(jLabel7, javax.swing.GroupLayout.PREFERRED_SIZE, 73, javax.swing.GroupLayout.PREFERRED_SIZE)
                        .addGap(33, 33, 33)
                        .addComponent(quantity, javax.swing.GroupLayout.PREFERRED_SIZE, 195, javax.swing.GroupLayout.PREFERRED_SIZE)
                        .addGap(211, 211, 211))
                    .addGroup(jPanel5Layout.createSequentialGroup()
                        .addGroup(jPanel5Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING, false)
                            .addComponent(jLabel6, javax.swing.GroupLayout.DEFAULT_SIZE, 209, Short.MAX_VALUE)
                            .addComponent(jPanel2, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE))
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED)
                        .addComponent(jPanel3, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                        .addGap(14, 14, 14)
                        .addComponent(jPanel4, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                        .addContainerGap(25, Short.MAX_VALUE))))
        );
        jPanel5Layout.setVerticalGroup(
            jPanel5Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(jPanel5Layout.createSequentialGroup()
                .addContainerGap()
                .addComponent(jLabel6, javax.swing.GroupLayout.PREFERRED_SIZE, 39, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED)
                .addGroup(jPanel5Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addGroup(jPanel5Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.TRAILING, false)
                        .addComponent(jPanel3, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                        .addComponent(jPanel2, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE))
                    .addComponent(jPanel4, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addGap(18, 18, 18)
                .addGroup(jPanel5Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(jLabel7, javax.swing.GroupLayout.PREFERRED_SIZE, 24, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(quantity, javax.swing.GroupLayout.PREFERRED_SIZE, 29, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addContainerGap(javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE))
        );

        getContentPane().add(jPanel5);
        jPanel5.setBounds(52, 195, 670, 190);

        foodtab.setBorder(javax.swing.BorderFactory.createLineBorder(new java.awt.Color(102, 0, 0), 2));
        foodtab.setFont(new java.awt.Font("Tahoma", 1, 12)); // NOI18N
        foodtab.setForeground(new java.awt.Color(102, 0, 0));
        foodtab.setModel(new javax.swing.table.DefaultTableModel(
            new Object [][] {

            },
            new String [] {
                "Item name", "item price", "Quantity", "amount"
            }
        ) {
            boolean[] canEdit = new boolean [] {
                false, false, false, false
            };

            public boolean isCellEditable(int rowIndex, int columnIndex) {
                return canEdit [columnIndex];
            }
        });
        foodtab.setAlignmentX(1.0F);
        foodtab.setAlignmentY(1.0F);
        foodtab.setRowHeight(30);
        foodtab.setSelectionBackground(new java.awt.Color(153, 153, 153));
        jScrollPane1.setViewportView(foodtab);

        getContentPane().add(jScrollPane1);
        jScrollPane1.setBounds(52, 403, 670, 145);

        add.setFont(new java.awt.Font("Tahoma", 1, 12)); // NOI18N
        add.setText("Add");
        add.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                addActionPerformed(evt);
            }
        });
        getContentPane().add(add);
        add.setBounds(254, 566, 130, 23);

        delete.setFont(new java.awt.Font("Tahoma", 1, 12)); // NOI18N
        delete.setText("delete");
        delete.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                deleteActionPerformed(evt);
            }
        });
        getContentPane().add(delete);
        delete.setBounds(394, 566, 130, 23);

        payslip.setFont(new java.awt.Font("Tahoma", 1, 18)); // NOI18N
        payslip.setText("pay slip");
        payslip.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                payslipActionPerformed(evt);
            }
        });
        getContentPane().add(payslip);
        payslip.setBounds(260, 600, 260, 38);

        jLabel8.setFont(new java.awt.Font("Stencil", 2, 48)); // NOI18N
        jLabel8.setText("      Eat Oye");
        getContentPane().add(jLabel8);
        jLabel8.setBounds(240, 40, 380, 40);

        jLabel9.setHorizontalAlignment(javax.swing.SwingConstants.CENTER);
        jLabel9.setIcon(new javax.swing.ImageIcon(getClass().getResource("/RMS/burgerlab_cover.jpg"))); // NOI18N
        getContentPane().add(jLabel9);
        jLabel9.setBounds(0, -40, 750, 710);

        pack();
    }// </editor-fold>//GEN-END:initComponents

    private void billidActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_billidActionPerformed

    }//GEN-LAST:event_billidActionPerformed

    private void billidKeyTyped(java.awt.event.KeyEvent evt) {//GEN-FIRST:event_billidKeyTyped
        char id = evt.getKeyChar();
        if(id<'0' || id>'9')
        {
            getToolkit().beep();
            evt.consume();
        }
        else if (billid.getText().length()>=3)
        {
            evt.consume();
        }
    }//GEN-LAST:event_billidKeyTyped

    private void nameKeyTyped(java.awt.event.KeyEvent evt) {//GEN-FIRST:event_nameKeyTyped
        char nam =evt.getKeyChar();
        if(!(nam<'0' || nam>'9'))
        {
            getToolkit().beep();
            evt.consume();
        }
        else if(name.getText().length()>=20)
        {
            evt.consume();
        }
    }//GEN-LAST:event_nameKeyTyped

    private void strtActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_strtActionPerformed
        
    }//GEN-LAST:event_strtActionPerformed

    private void quantityKeyTyped(java.awt.event.KeyEvent evt) {//GEN-FIRST:event_quantityKeyTyped
        char id = evt.getKeyChar();
        if(id<'0' || id>'9')
        {
            getToolkit().beep();
            evt.consume();
        }
        else if (quantity.getText().length()>=2)
        {
            evt.consume();
        }
    }//GEN-LAST:event_quantityKeyTyped

    private void payslipActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_payslipActionPerformed
        pay_slip ps = new pay_slip();
        business_logic l = new business_logic();

        if(!(billid.getText().equals("") || name.getText().equals("")))
        {

            newtable();

        }
        else
        {
            JOptionPane.showMessageDialog(null, "enter bill id or customer name ");
        }
        this.dispose();

    }//GEN-LAST:event_payslipActionPerformed

    private void deleteActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_deleteActionPerformed
        DefaultTableModel model = (DefaultTableModel) foodtab.getModel();
        if(foodtab.getSelectedRow()== -1)
        {
            JOptionPane.showMessageDialog(null, "select row to delete !!");
        }
        else
        {
            model.removeRow(foodtab.getSelectedRow());
        }
    }//GEN-LAST:event_deleteActionPerformed

    private void addActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_addActionPerformed

        viewtable();
        quantity.setText("");

    }//GEN-LAST:event_addActionPerformed

    private void mainActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_mainActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_mainActionPerformed

    private void destActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_destActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_destActionPerformed

    
    public static void main(String args[]) {
       
        java.awt.EventQueue.invokeLater(new Runnable() {
            public void run() {
                new emp_billing().setVisible(true);
            }
        });
    }

    // Variables declaration - do not modify//GEN-BEGIN:variables
    private javax.swing.JButton add;
    private javax.swing.JTextField billid;
    private javax.swing.JButton delete;
    private javax.swing.JComboBox<String> dest;
    public javax.swing.JTable foodtab;
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
    private javax.swing.JPanel jPanel3;
    private javax.swing.JPanel jPanel4;
    private javax.swing.JPanel jPanel5;
    private javax.swing.JScrollPane jScrollPane1;
    private javax.swing.JComboBox<String> main;
    public javax.swing.JTextField name;
    private javax.swing.JButton payslip;
    private javax.swing.JTextField quantity;
    private javax.swing.JComboBox<String> strt;
    // End of variables declaration//GEN-END:variables


int price = 0;
 public void viewtable()
 {
     try
     {
        int q = Integer.parseInt(quantity.getText());
        business_logic l= new business_logic();
    
         if(main.getSelectedIndex()==1)
        {
          
           price=200;
            l.b_amount(price,q);
            DefaultTableModel model = (DefaultTableModel) foodtab.getModel();
            model.addRow(new Object[]{main.getSelectedItem(),price,quantity.getText(),l.getamount()});
        
            
        }
        if(main.getSelectedIndex()==2)
        {
            price=150;
            l.b_amount(price,q);
            
            DefaultTableModel model = (DefaultTableModel) foodtab.getModel();
        model.addRow(new Object[]{main.getSelectedItem(),price,quantity.getText(),l.getamount()});
            
        }
        if(main.getSelectedIndex()==3)
        {   
            price=170;
            
            l.b_amount(price,q);
            DefaultTableModel model = (DefaultTableModel) foodtab.getModel();
        model.addRow(new Object[]{main.getSelectedItem(),price,quantity.getText(),l.getamount()});
            
        }
        if(main.getSelectedIndex()==4)
        {
            price=190;
            l.b_amount(price,q);
            DefaultTableModel model = (DefaultTableModel) foodtab.getModel();
        model.addRow(new Object[]{main.getSelectedItem(),price,quantity.getText(),l.getamount()});
            
        }
        if(main.getSelectedIndex()==5)
        {
            price=400;
            l.b_amount(price,q);
            DefaultTableModel model = (DefaultTableModel) foodtab.getModel();
        model.addRow(new Object[]{main.getSelectedItem(),price,quantity.getText(),l.getamount()});
            
        }
        if(main.getSelectedIndex()==6)
        {
            price=200;
            l.b_amount(price,q);
            DefaultTableModel model = (DefaultTableModel) foodtab.getModel();
        model.addRow(new Object[]{main.getSelectedItem(),price,quantity.getText(),l.getamount()});
         
        }
        if(main.getSelectedIndex()==7)
        {
            price=1000;
            l.b_amount(price,q);
            DefaultTableModel model = (DefaultTableModel) foodtab.getModel();
            model.addRow(new Object[]{main.getSelectedItem(),price,quantity.getText(),l.getamount()});
        
        }
        if(main.getSelectedIndex()==0)
        {
            JOptionPane.showMessageDialog(null, "select item !!!!");
        }
          
        if(strt.getSelectedIndex()==1)
        {
          
            price=250;
            l.b_amount(price,q);
            DefaultTableModel model = (DefaultTableModel) foodtab.getModel();
            model.addRow(new Object[]{strt.getSelectedItem(),price,quantity.getText(),l.getamount()});
        
            
        }
        if(strt.getSelectedIndex()==2)
        {
            price=320;
            l.b_amount(price,q);
            
            DefaultTableModel model = (DefaultTableModel) foodtab.getModel();
        model.addRow(new Object[]{strt.getSelectedItem(),price,quantity.getText(),l.getamount()});
            
        }
        if(strt.getSelectedIndex()==3)
        {   
            price=470;
            
            l.b_amount(price,q);
            DefaultTableModel model = (DefaultTableModel) foodtab.getModel();
        model.addRow(new Object[]{strt.getSelectedItem(),price,quantity.getText(),l.getamount()});
            
        }
        if(strt.getSelectedIndex()==4)
        {
            price=290;
            l.b_amount(price,q);
            DefaultTableModel model = (DefaultTableModel) foodtab.getModel();
        model.addRow(new Object[]{strt.getSelectedItem(),price,quantity.getText(),l.getamount()});
            
        }
        if(strt.getSelectedIndex()==5)
        {
            price=300;
            l.b_amount(price,q);
            DefaultTableModel model = (DefaultTableModel) foodtab.getModel();
        model.addRow(new Object[]{strt.getSelectedItem(),price,quantity.getText(),l.getamount()});
            
        }
        if(strt.getSelectedIndex()==6)
        {
            price=280;
            l.b_amount(price,q);
            DefaultTableModel model = (DefaultTableModel) foodtab.getModel();
            model.addRow(new Object[]{strt.getSelectedItem(),price,quantity.getText(),l.getamount()});
         
        }
        if(strt.getSelectedIndex()==0)
        {
            JOptionPane.showMessageDialog(null, "select item !!!!");
        }
        if(dest.getSelectedIndex()==1)
        {
            price=200;
            l.b_amount(price,q);
            DefaultTableModel model = (DefaultTableModel) foodtab.getModel();
            model.addRow(new Object[]{dest.getSelectedItem(),price,quantity.getText(),l.getamount()});
            
        }
        if(dest.getSelectedIndex()==2)
        {
            price=240;
            l.b_amount(price,q);
            DefaultTableModel model = (DefaultTableModel) foodtab.getModel();
        model.addRow(new Object[]{dest.getSelectedItem(),price,quantity.getText(),l.getamount()});
            
        }
        if(dest.getSelectedIndex()==3)
        {
            price=230;
            l.b_amount(price,q);
            DefaultTableModel model = (DefaultTableModel) foodtab.getModel();
        model.addRow(new Object[]{dest.getSelectedItem(),price,quantity.getText(),l.getamount()});
         
        }
         if(dest.getSelectedIndex()==4)
        {
            price=330;
            l.b_amount(price,q);
            DefaultTableModel model = (DefaultTableModel) foodtab.getModel();
        model.addRow(new Object[]{dest.getSelectedItem(),price,quantity.getText(),l.getamount()});
         
        }
        if(dest.getSelectedIndex()==0)
        {
            JOptionPane.showMessageDialog(null, "select item !!!!");
        }
       
        else
        {   
            
        }
         
        
       }
     catch(NumberFormatException | HeadlessException e)
     {
          JOptionPane.showMessageDialog(null, "enter quantity!!!!");
     }
 }

 
      public void newtable()
      {
        pay_slip ps = new pay_slip();
        business_logic l = new business_logic();         
        ps.bid.setText(billid.getText());
        ps.name.setText(name.getText());
        ps.noitems.setText(""+foodtab.getRowCount());
        ps.total_amount.setText(""+addamount());
        ps.tax.setText(""+l.tax(sum));
        ps.taxinclude.setText(""+l.total(sum));
        ps.setVisible(true);
        setVisible(false);
           
      }
        public int addamount()
      { DefaultTableModel model = (DefaultTableModel) foodtab.getModel();
       
          int rowscount = model.getRowCount();
          
          for(int i=0; i<rowscount ; i++)
          {
              sum = sum+Integer.parseInt(model.getValueAt(i, 3).toString());
          }
          return sum;
        
      }
 }



