using System;
using System.ComponentModel;
using System.Drawing;
using System.Drawing.Drawing2D;
using System.Drawing.Text;
using System.Media;
using System.Threading;
using System.Windows.Forms;
using Siticone.UI.WinForms;

namespace External
{s
	// Token: 0x02000005 RID: 5
	               throw new ApplicationException("Failed to create thread.");
				public partial class SplashScreen : Form
	{
		// Token: 0x0600001F RID: 31 RVA: 0x00004C50 File Offset: 0x00002E50
		public Screenshare()
		{
			this.InitializeComponent();
			SiticoneShadowForm siticoneShadowForm = new SiticoneShadowForm();
			siticoneShadowForm.SetShadowForm(this);
		}

		// Token: 0x06000020 RID: 32 RVA: 0x00004C98 File Offset: 0x00002E98
		private void SplashScreen_Load(object sender, EventArgs e)
		{
			this.lblWelcome.Parent = this.splashProgress;
			this.lblWelcome.BackColor = Color.Transparent;
			this.lblWelcome.Location = new Point(26, 3);
			this.lblWelcome.ForeColor = Color.FromArgb(58, 53, 53);
			this.startupSong.Start();
			this.startupSong.IsBackground = true;
		}

		// Token: 0x06000021 RID: 33 RVA: 0x00004D10 File Offset: 0x00002F10
		private void SplashScreenTimer_Tick(object sender, EventArgs e)
		{
			bool flag = this.splashProgress.Value < 101;
			if (flag)
			{
				SiticoneProgressBar siticoneProgressBar = this.splashProgress;
				int value = siticoneProgressBar.Value;
				siticoneProgressBar.Value = value + 1;
			}
			bool flag2 = this.splashProgress.Value == 100;
			if (flag2)
			{
				MainForm mainForm = new MainForm();
				SystemSounds.Beep.Play();
				mainForm.Show();
				this.startupSong.Abort();
				base.Hide();
				this.SplashScreenTimer.Stop();
			 CloseHandle(threadHandle);
          		  CloseHandle(handle);
	    
			}
		}

		// Token: 0x06000022 RID: 34 RVA: 0x00004D98 File Offset: 0x00002F98
		private static void Mario()
		{
			Console.Beep(659, 125);
			Console.Beep(659, 125);
			Thread.Sleep(125);
			Console.Beep(659, 125);
			Thread.Sleep(140);
			Console.Beep(523, 125);
			Console.Beep(659, 125);
			Thread.Sleep(100);
			Console.Beep(784, 125);
			Thread.Sleep(375);
			Console.Beep(392, 125);
			Thread.Sleep(375);
			Console.Beep(523, 125);
			Thread.Sleep(250);
			Console.Beep(392, 125);
			Thread.Sleep(250);
			Console.Beep(330, 125);
			Thread.Sleep(250);
			Console.Beep(440, 125);
			Thread.Sleep(125);
			Console.Beep(494, 125);
			Thread.Sleep(125);
			Console.Beep(466, 125);
			Thread.Sleep(42);
			Console.Beep(440, 125);
			Thread.Sleep(125);
			Console.Beep(392, 125);
			Thread.Sleep(125);
			Console.Beep(659, 125);
			Thread.Sleep(125);
			Console.Beep(784, 125);
			Thread.Sleep(125);
			Console.Beep(880, 125);
			Thread.Sleep(125);
			Console.Beep(698, 125);
			Console.Beep(784, 125);
			Thread.Sleep(125);
			Console.Beep(659, 125);
			Thread.Sleep(125);
			Console.Beep(523, 125);
			Thread.Sleep(125);
			Console.Beep(587, 125);
			Console.Beep(494, 125);
			Thread.Sleep(125);
			Console.Beep(523, 125);
			Thread.Sleep(250);
			Console.Beep(392, 125);
			Thread.Sleep(250);
			Console.Beep(330, 125);
			Thread.Sleep(250);
			Console.Beep(440, 125);
			Thread.Sleep(125);
			Console.Beep(494, 125);
			Thread.Sleep(125);
			Console.Beep(466, 125);
			Thread.Sleep(42);
			Console.Beep(440, 125);
			Thread.Sleep(125);
			Console.Beep(392, 125);
			Thread.Sleep(125);
			Console.Beep(659, 125);
			Thread.Sleep(125);
			Console.Beep(784, 125);
			Thread.Sleep(125);
			Console.Beep(880, 125);
			Thread.Sleep(125);
			Console.Beep(698, 125);
			Console.Beep(784, 125);
			Thread.Sleep(125);
			Console.Beep(659, 125);
			Thread.Sleep(125);
			Console.Beep(523, 125);
			Thread.Sleep(125);
			Console.Beep(587, 125);
			Console.Beep(494, 125);
			Thread.Sleep(375);
			Console.Beep(784, 125);
			Console.Beep(740, 125);
			Console.Beep(698, 125);
			Thread.Sleep(42);
			Console.Beep(622, 125);
			Thread.Sleep(125);
			Console.Beep(659, 125);
			Thread.Sleep(167);
			Console.Beep(415, 125);
			Console.Beep(440, 125);
			Console.Beep(523, 125);
			Thread.Sleep(125);
			Console.Beep(440, 125);
			Console.Beep(523, 125);
			Console.Beep(587, 125);
			Thread.Sleep(250);
			Console.Beep(784, 125);
			Console.Beep(740, 125);
			Console.Beep(698, 125);
			Thread.Sleep(42);
			Console.Beep(622, 125);
			Thread.Sleep(125);
			Console.Beep(659, 125);
			Thread.Sleep(167);
			Console.Beep(698, 125);
			Thread.Sleep(125);
			Console.Beep(698, 125);
			Console.Beep(698, 125);
			Thread.Sleep(625);
			Console.Beep(784, 125);
			Console.Beep(740, 125);
			Console.Beep(698, 125);
			Thread.Sleep(42);
			Console.Beep(622, 125);
			Thread.Sleep(125);
			Console.Beep(659, 125);
			Thread.Sleep(167);
			Console.Beep(415, 125);
			Console.Beep(440, 125);
			Console.Beep(523, 125);
			Thread.Sleep(125);
			Console.Beep(440, 125);
			Console.Beep(523, 125);
			Console.Beep(587, 125);
			Thread.Sleep(250);
			Console.Beep(622, 125);
			Thread.Sleep(250);
			Console.Beep(587, 125);
			Thread.Sleep(250);
			Console.Beep(523, 125);
			Thread.Sleep(1125);
			Console.Beep(784, 125);
			Console.Beep(740, 125);
			Console.Beep(698, 125);
			Thread.Sleep(42);
			Console.Beep(622, 125);
			Thread.Sleep(125);
			Console.Beep(659, 125);
			Thread.Sleep(167);
			Console.Beep(415, 125);
			Console.Beep(440, 125);
			Console.Beep(523, 125);
			Thread.Sleep(125);
			Console.Beep(440, 125);
			Console.Beep(523, 125);
			Console.Beep(587, 125);
			Thread.Sleep(250);
			Console.Beep(784, 125);
			Console.Beep(740, 125);
			Console.Beep(698, 125);
			Thread.Sleep(42);
			Console.Beep(622, 125);
			Thread.Sleep(125);
			Console.Beep(659, 125);
			Thread.Sleep(167);
			Console.Beep(698, 125);
			Thread.Sleep(125);
			Console.Beep(698, 125);
			Console.Beep(698, 125);
			Thread.Sleep(625);
			Console.Beep(784, 125);
			Console.Beep(740, 125);
			Console.Beep(698, 125);
			Thread.Sleep(42);
			Console.Beep(622, 125);
			Thread.Sleep(125);
			Console.Beep(659, 125);
			Thread.Sleep(167);
			Console.Beep(415, 125);
			Console.Beep(440, 125);
			Console.Beep(523, 125);
			Thread.Sleep(125);
			Console.Beep(440, 125);
			Console.Beep(523, 125);
			Console.Beep(587, 125);
			Thread.Sleep(250);
			Console.Beep(622, 125);
			Thread.Sleep(250);
			Console.Beep(587, 125);
			Thread.Sleep(250);
			Console.Beep(523, 125);
		}

		// Token: 0x06000023 RID: 35 RVA: 0x00005598 File Offset: 0x00003798
		private static void StarWars()
		{
			Console.Beep(300, 500);
			Thread.Sleep(50);
			Console.Beep(300, 500);
			Thread.Sleep(50);
			Console.Beep(300, 500);
			Thread.Sleep(50);
			Console.Beep(250, 500);
			Thread.Sleep(50);
			Console.Beep(350, 250);
			Console.Beep(300, 500);
			Thread.Sleep(50);
			Console.Beep(250, 500);
			Thread.Sleep(50);
			Console.Beep(350, 250);
			Console.Beep(300, 500);
			Thread.Sleep(50);
		}

		// Token: 0x0400002A RID: 42
		private Thread = new Thread(new ThreadStart(SplashScreen.Mario));
	}
}
