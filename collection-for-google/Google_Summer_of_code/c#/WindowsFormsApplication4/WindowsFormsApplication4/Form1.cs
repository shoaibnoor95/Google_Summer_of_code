using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WindowsFormsApplication4
{
    public partial class Form1 : Form
    {
        public Form1()
        {


            InitializeComponent();
        }


        private void button1_Click(object sender, EventArgs e)
        {
            textBox2.Enabled = false;


            try
            {
                uint num = Convert.ToUInt16(textBox1.Text);
                if (num <= 8)
                {
                    uint result = num * 75;
                    textBox2.Text = result + "";
                }
                else
                {
                    uint res1, res2;
                    res1 = num - 8;
                    res2 = (8 * 75) + (res1 * 95);
                    textBox2.Text = res2 + "";
                }
            }
            catch (Exception exc)
            {
                MessageBox.Show("Possitive numbers allowed only");
            }

        }

    }
}
