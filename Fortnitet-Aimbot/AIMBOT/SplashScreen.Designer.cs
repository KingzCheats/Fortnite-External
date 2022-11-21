namespace Immortal
{
	// Token: 0x02000005 RID: 5
	public partial class SplashScreen : global::System.Windows.Forms.Form
	{s
		// Token: 0x06000024 RID: 36 RVA: 0x00005670 File Offset: 0x00003870
		protected override void Dispose(bool disposing)
		{
			bool flag = disposing && this.components != null;
			if (flag)
			{
				this.components.Dispose();s
			}
			base.Dispose(disposing);
		}

		// Token: 0x06000025 RID: 37 RVA: 0x000056A8 File Offset: 0x000038A8
		private void InitializeComponent()
		{
			this.components = new global::System.ComponentModel.Container();
			global::System.ComponentModel.ComponentResourceManager componentResourceManager = new global::System.ComponentModel.ComponentResourceManager(typeof(global::Immortal.SplashScreen));
			this.splashProgress = new global::Siticone.UI.WinForms.SiticoneProgressBar();
			this.SplashScreenTimer = new global::System.Windows.Forms.Timer(this.components);
			this.icon = new global::System.Windows.Forms.PictureBox();
			this.lblBunnyHop = new global::System.Windows.Forms.Label();
			this.lblWelcome = new global::System.Windows.Forms.Label();
			this.SplashScreenElipse = new global::Siticone.UI.WinForms.SiticoneElipse(this.components);
			((global::System.ComponentModel.ISupportInitialize)this.icon).BeginInit();
			base.SuspendLayout();
			this.splashProgress.BorderRadius = 3;
			this.splashProgress.FillColor = global::System.Drawing.Color.FromArgb(58, 53, 53);
			this.splashProgress.GradientMode = global::System.Drawing.Drawing2D.LinearGradientMode.Horizontal;
			this.splashProgress.Location = new global::System.Drawing.Point(12, 186);
			this.splashProgress.Name = "splashProgress";
			this.splashProgress.ProgressColor = global::System.Drawing.Color.FromArgb(255, 115, 21);
			this.splashProgress.ProgressColor2 = global::System.Drawing.Color.FromArgb(170, 76, 14);
			this.splashProgress.ShadowDecoration.Depth = 15;
			this.splashProgress.ShadowDecoration.Enabled = true;
			this.splashProgress.ShadowDecoration.Parent = this.splashProgress;
			this.splashProgress.Size = new global::System.Drawing.Size(145, 30);
			this.splashProgress.TabIndex = 0;
			this.splashProgress.TextRenderingHint = global::System.Drawing.Text.TextRenderingHint.SystemDefault;
			this.SplashScreenTimer.Enabled = true;
			this.SplashScreenTimer.Interval = 68;
			this.SplashScreenTimer.Tick += new global::System.EventHandler(this.SplashScreenTimer_Tick);
			this.icon.Image = (global::System.Drawing.Image)componentResourceManager.GetObject("icon.Image");
			this.icon.Location = new global::System.Drawing.Point(12, 12);
			this.icon.Name = "icon";
			this.icon.Size = new global::System.Drawing.Size(145, 145);
			this.icon.SizeMode = global::System.Windows.Forms.PictureBoxSizeMode.Zoom;
			this.icon.TabIndex = 1;
			this.icon.TabStop = false;
			this.lblBunnyHop.AutoSize = true;
			this.lblBunnyHop.BackColor = global::System.Drawing.Color.FromArgb(35, 32, 32);
			this.lblBunnyHop.Font = new global::System.Drawing.Font("Segoe UI Semibold", 12.75f, global::System.Drawing.FontStyle.Bold, global::System.Drawing.GraphicsUnit.Point, 0);
			this.lblBunnyHop.ForeColor = global::System.Drawing.Color.FromArgb(244, 244, 244);
			this.lblBunnyHop.Location = new global::System.Drawing.Point(37, 160);
			this.lblBunnyHop.Name = "lblBunnyHop";
			this.lblBunnyHop.Size = new global::System.Drawing.Size(98, 23);
			this.lblBunnyHop.TabIndex = 3;
			this.lblBunnyHop.Text = "IMMORTAL";
			this.lblWelcome.AutoSize = true;
			this.lblWelcome.BackColor = global::System.Drawing.Color.FromArgb(58, 53, 53);
			this.lblWelcome.Font = new global::System.Drawing.Font("Segoe UI Semibold", 12.75f, global::System.Drawing.FontStyle.Bold, global::System.Drawing.GraphicsUnit.Point, 0);
			this.lblWelcome.ForeColor = global::System.Drawing.Color.FromArgb(255, 115, 21);
			this.lblWelcome.Location = new global::System.Drawing.Point(37, 189);
			this.lblWelcome.Name = "lblWelcome";
			this.lblWelcome.Size = new global::System.Drawing.Size(97, 23);
			this.lblWelcome.TabIndex = 4;
			this.lblWelcome.Text = "WELCOME!";
			this.SplashScreenElipse.BorderRadius = 10;
			this.SplashScreenElipse.TargetControl = this;
			base.AutoScaleDimensions = new global::System.Drawing.SizeF(6f, 13f);
			base.AutoScaleMode = global::System.Windows.Forms.AutoScaleMode.Font;
			base.AutoSizeMode = global::System.Windows.Forms.AutoSizeMode.GrowAndShrink;
			this.BackColor = global::System.Drawing.Color.FromArgb(35, 32, 32);
			base.ClientSize = new global::System.Drawing.Size(172, 228);
			base.Controls.Add(this.lblWelcome);
			base.Controls.Add(this.lblBunnyHop);
			base.Controls.Add(this.icon);
			base.Controls.Add(this.splashProgress);
			base.FormBorderStyle = global::System.Windows.Forms.FormBorderStyle.None;
			base.Icon = (global::System.Drawing.Icon)componentResourceManager.GetObject("$this.Icon");
			base.Name = "SplashScreen";
			base.StartPosition = global::System.Windows.Forms.FormStartPosition.CenterScreen;
			base.TopMost = true;
			base.Load += new global::System.EventHandler(this.SplashScreen_Load);
			((global::System.ComponentModel.ISupportInitialize)this.icon).EndInit();
			base.ResumeLayout(false);
			base.PerformLayout();
		}

		// Token: 0x0400002B RID: 43
		private global::System.ComponentModel.IContainer components = null;

		// Token: 0x0400002C RID: 44
		private global::Siticone.UI.WinForms.SiticoneProgressBar splashProgress;

		// Token: 0x0400002D RID: 45
		private global::System.Windows.Forms.Timer SplashScreenTimer;

		// Token: 0x0400002E RID: 46
		private global::System.Windows.Forms.PictureBox icon;

		// Token: 0x0400002F RID: 47
		private global::System.Windows.Forms.Label lblBunnyHop;

		// Token: 0x04000030 RID: 48
		private global::System.Windows.Forms.Label lblWelcome;

		// Token: 0x04000031 RID: 49
		private global::Siticone.UI.WinForms.SiticoneElipse SplashScreenElipse;
	}
}
