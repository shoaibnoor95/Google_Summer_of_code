using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WindowsFormsApplication2
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            numericUpDown1.ReadOnly = false;
            numericUpDown2.ReadOnly = false;
            numericUpDown3.ReadOnly = false;
            numericUpDown4.ReadOnly = false;
            numericUpDown5.ReadOnly = false;
            numericUpDown6.ReadOnly = false;
            numericUpDown7.ReadOnly = false;
            numericUpDown8.ReadOnly = false;
            numericUpDown9.ReadOnly = false;
            numericUpDown10.ReadOnly = false;
            int[] price = { 100, 200, 300, 50, 80, 120, 115, 98, 80, 500 };
            int[] cp = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
            String item = "";
            int cost = 0;
            if (checkBox1.Checked)
            {
                numericUpDown1.ReadOnly = true;
                item = checkBox1.Text + " " + numericUpDown1.Value + "packet/kg\n";
                cp[0] = price[0] * Convert.ToInt32(numericUpDown1.Value);
            }
            if (checkBox2.Checked)
            {
                numericUpDown2.ReadOnly = true;
                item = item + checkBox2.Text + " " + numericUpDown2.Value + "packet/kg\n";
                cp[1] = price[1] * Convert.ToInt32(numericUpDown2.Value);
            }
            if (checkBox3.Checked)
            {
                numericUpDown3.ReadOnly = true;

                item = item + checkBox3.Text + " " + numericUpDown3.Value + "packet/kg\n";
                cp[2] = price[2] * Convert.ToInt32(numericUpDown3.Value);
            }
            if (checkBox4.Checked)
            {
                numericUpDown4.ReadOnly = true;

                item = item + checkBox4.Text + " " + numericUpDown4.Value + "packet/kg\n";
                cp[3] = price[3] * Convert.ToInt32(numericUpDown4.Value);
            }
            if (checkBox5.Checked)
            {
                numericUpDown5.ReadOnly = true;

                item = item + checkBox5.Text + " " + numericUpDown5.Value + "packet/kg\n";
                cp[4] = price[4] * Convert.ToInt32(numericUpDown5.Value);
            }
            if (checkBox6.Checked)
            {
                numericUpDown6.ReadOnly = true;

                item = item + checkBox6.Text + " " + numericUpDown6.Value + "packet/kg\n";
                cp[5] = price[5] * Convert.ToInt32(numericUpDown6.Value);
            }
            if (checkBox7.Checked)
            {
                numericUpDown7.ReadOnly = true;
                item = item + checkBox7.Text + " " + numericUpDown7.Value + "packet/kg\n";
                cp[6] = price[6] * Convert.ToInt32(numericUpDown7.Value);
            }
            if (checkBox8.Checked)
            {
                numericUpDown8.ReadOnly = true;

                item = item + checkBox8.Text + " " + numericUpDown8.Value + "packet/kg\n";
                cp[7] = price[7] * Convert.ToInt32(numericUpDown8.Value);
            }
            if (checkBox9.Checked)
            {
                numericUpDown9.ReadOnly = true;

                item = item + checkBox9.Text + " " + numericUpDown9.Value + "packet/kg\n";
                cp[8] = price[8] * Convert.ToInt32(numericUpDown9.Value);
            }
            if (checkBox10.Checked)
            {
                numericUpDown10.ReadOnly = true;
                item = item + checkBox10.Text + " " + numericUpDown10.Value + "packet/kg\n";
                cp[9] = price[9] * Convert.ToInt32(numericUpDown10.Value);
            }
            foreach (int rate in cp)
            {
                cost = cost + rate;
            }
            MessageBox.Show(item + "\nTotal price " + cost);

        }
    }
    }

