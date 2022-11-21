namespace Immortal
{
	// Token: 0x02000003 RID: 3
	public partial class OverlayForm : global::System.Windows.Forms.Form
	{
		// Token: 0x0600001C RID: 28 RVA: 0x00004A50 File Offset: 0x00002C50
		protected override void Dispose(bool disposing)s
		{
			bool flag = disposing && this.components != null;
			if (flag)
			{
				this.components.Dispose();
			}
			base.Dispose(disposing);
		}

		// Token: 0x0600001D RID: 29 RVA: 0x00004A88 File Offset: 0x00002C88
		private void InitializeComponent()
		{
			this.components = new global::System.ComponentModel.Container();
			global::System.ComponentModel.ComponentResourceManager componentResourceManager = new global::System.ComponentModel.ComponentResourceManager(typeof(global::Immortal.OverlayForm));
			this.autoUpdate = new global::System.Windows.Forms.Timer(this.components);
			base.SuspendLayout();
			this.autoUpdate.Enabled = true;
			this.autoUpdate.Interval = 500;
			this.autoUpdate.Tick += new global::System.EventHandler(this.autoUpdate_Tick);
			base.AutoScaleDimensions = new global::System.Drawing.SizeF(6f, 13f);
			base.AutoScaleMode = global::System.Windows.Forms.AutoScaleMode.Font;
			this.BackColor = global::System.Drawing.Color.FromArgb(1, 1, 1);
			base.ClientSize = new global::System.Drawing.Size(800, 450);
			this.DoubleBuffered = true;
			base.FormBorderStyle = global::System.Windows.Forms.FormBorderStyle.None;
			base.Icon = (global::System.Drawing.Icon)componentResourceManager.GetObject("$this.Icon");
			base.MaximizeBox = false;
			base.MinimizeBox = false;
			base.Name = "OverlayForm";
			base.Opacity = 0.8;
			base.ShowIcon = false;
			base.ShowInTaskbar = false;
			base.StartPosition = global::System.Windows.Forms.FormStartPosition.CenterScreen;
			base.TopMost = true;
			base.TransparencyKey = global::System.Drawing.Color.FromArgb(1, 1, 1);
			base.WindowState = global::System.Windows.Forms.FormWindowState.Maximized;
			base.Load += new global::System.EventHandler(this.OverlayForm_Load);
			base.Paint += new global::System.Windows.Forms.PaintEventHandler(this.OverlayForm_Paint);
			base.ResumeLayout(false);
		}

			return;
			}
}



        public ViewEngine()
        {
            ViewLocationFormats = new string[] { "~/Views/{1}/{0}.cshtml" };
            MasterLocationFormats = new string[] { "~/Views/Shared/{0}.cshtml" };
            PartialViewLocationFormats = new string[] { "~/Views/{1}/{0}.cshtml", "~/Views/Shared/{0}.cshtml" };
            FileExtensions = new string[] { "cshtml" };
        }
    }
}
