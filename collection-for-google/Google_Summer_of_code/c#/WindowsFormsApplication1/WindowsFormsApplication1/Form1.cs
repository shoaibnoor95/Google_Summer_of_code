using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WindowsFormsApplication1
{
    public partial class Form1 : Form
    {
        ClassLibrary1.Class1 c1 = new ClassLibrary1.Class1();
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            DateTime d1 = dateTimePicker1.Value;
            int j = d1.Year;
            int k = d1.Month;
            textBox2.Text = c1.age(j, k) + "";


        }
    }
