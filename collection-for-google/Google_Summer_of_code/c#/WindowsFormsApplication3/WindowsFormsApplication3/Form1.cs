using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WindowsFormsApplication3
{
    public partial class Form1 : Form
    {
        public Form1()
        {

            InitializeComponent();
            dataGridView1.ColumnCount = 3;
            dataGridView1.Columns[0].Name = "First_Name";
            dataGridView1.Columns[1].Name = "Last_Name";
            dataGridView1.Columns[2].Name = "Status";
            dataGridView1.AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode.Fill;

        }
        public void FillList()
        {
            string[] row = { textBox1.Text, textBox2.Text, textBox3.Text };
            dataGridView1.Rows.Add(row);
        }
        private void button1_Click(object sender, EventArgs e)
        {
            FillList();

        }

        private void button2_Click(object sender, EventArgs e)
        {
            foreach (DataGridViewRow item in this.dataGridView1.SelectedRows)
            {
                dataGridView1.Rows.RemoveAt(item.Index);
            }
        }
    }
}
