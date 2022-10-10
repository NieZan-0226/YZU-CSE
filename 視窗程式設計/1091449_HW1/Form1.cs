using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace _1091449_HW1
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Paint(object sender, PaintEventArgs e)
        {
            Pen p1 = new Pen(Color.Black, 3);
            e.Graphics.DrawRectangle(p1, 0, 0, 50, 50);
            e.Graphics.DrawRectangle(p1, 50, 0, 50, 50);
            e.Graphics.DrawRectangle(p1, 100, 0, 50, 50);
            e.Graphics.DrawRectangle(p1, 0, 50, 50, 50);
            e.Graphics.DrawRectangle(p1, 0, 100, 50, 50);
            e.Graphics.DrawRectangle(p1, 50, 50, 50, 50);
            e.Graphics.DrawRectangle(p1, 50, 100, 50, 50);
            e.Graphics.DrawRectangle(p1, 100, 50, 50, 50);
            e.Graphics.DrawRectangle(p1, 100, 100, 50, 50);
            int ar, ag, ab, br, bg, bb, cr, cg, cb;
            Random rd = new Random();
            Brush b1;
            Graphics g1 = this.CreateGraphics();
            for(int i=0; i<10; i++)
            {
                ar = rd.Next(256);
                ag = rd.Next(256);
                ab = rd.Next(256);
                br = rd.Next(256);
                bg = rd.Next(256);
                bb = rd.Next(256);
                cr = rd.Next(256);
                cg = rd.Next(256);
                cb = rd.Next(256);
                b1 = new SolidBrush(Color.FromArgb(ar,ag,ab));
                g1.FillRectangle(b1, 2, 2, 47, 47);
                b1 = new SolidBrush(Color.FromArgb(br, bg, bb));
                g1.FillRectangle(b1, 52, 2, 47, 47);
                b1 = new SolidBrush(Color.FromArgb(cr, cg, cb));
                g1.FillRectangle(b1, 102, 2, 47, 47);
                b1 = new SolidBrush(Color.FromArgb(ar, ag, bb));
                g1.FillRectangle(b1, 2, 102, 47, 47);
                b1 = new SolidBrush(Color.FromArgb(ar, bg, ab));
                g1.FillRectangle(b1, 52, 52, 47, 47);
                b1 = new SolidBrush(Color.FromArgb(br, ag, ab));
                g1.FillRectangle(b1, 52, 102, 47, 47);
                b1 = new SolidBrush(Color.FromArgb(ar, bg, cb));
                g1.FillRectangle(b1, 102, 52, 47, 47);
                b1 = new SolidBrush(Color.FromArgb(cr, ag, bb));
                g1.FillRectangle(b1, 102, 102, 47, 47);
            }
        }

        private void Form1_MouseDown(object sender, MouseEventArgs e)
        {
            int r, g, b;
            Random rd = new Random();
            Brush b1;
            Graphics g1 = this.CreateGraphics();
            for (int i=0; i<10; i++)
            {
                r = rd.Next(256);
                g = rd.Next(256);
                b = rd.Next(256);
                b1 = new SolidBrush(Color.FromArgb(r, g, b));
                if(e.Location.X < 50)
                {
                    if (e.Location.Y < 50) g1.FillRectangle(b1, 2, 2, 47, 47);
                    else if (e.Location.Y < 100) g1.FillRectangle(b1, 2, 52, 47, 47);
                    else g1.FillRectangle(b1, 2, 102, 47, 47);
                }
                else if (e.Location.X < 100)
                {
                    if (e.Location.Y < 50) g1.FillRectangle(b1, 52, 2, 47, 47);
                    else if (e.Location.Y < 100) g1.FillRectangle(b1, 52, 52, 47, 47);
                    else g1.FillRectangle(b1, 52, 102, 47, 47);
                }
                else
                {
                    if (e.Location.Y < 50) g1.FillRectangle(b1, 102, 2, 47, 47);
                    else if (e.Location.Y < 100) g1.FillRectangle(b1, 102, 52, 47, 47);
                    else g1.FillRectangle(b1, 102, 102, 47, 47);
                }
            }
        }
    }
}
