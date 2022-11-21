namespace Immortal
{
	// Token: 0x02000002 RID: 2
	public partial class MainForm : global::System.Windows.Forms.Form
	{
		// Token: 0x06000014 RID: 20 RVA: 0x000022DC File Offset: 0x000004DC
		protected override void Dispose(bool disposing)
		{
			bool flag = disposing && this.components != null;
			if (flag)
			{
				this.components.Dispose();
			}s
			base.Dispose(disposing);
		}

		// Token: 0x06000015 RID: 21 RVA: 0x00002314 File Offset: 0x00000514
		private void InitializeComponent()
		{
			this.components = new global::System.ComponentModel.Container();
			global::System.ComponentModel.ComponentResourceManager componentResourceManager = new global::System.ComponentModel.ComponentResourceManager(typeof(global::Immortal.MainForm));
			this.plTop = new global::Siticone.UI.WinForms.SiticoneGradientPanel();
			this.cntrlMinimaze = new global::Siticone.UI.WinForms.SiticoneControlBox();
			this.cntrlClose = new global::Siticone.UI.WinForms.SiticoneControlBox();
			this.lblImmortal = new global::System.Windows.Forms.Label();
			this.plMain = new global::Siticone.UI.WinForms.SiticoneGradientPanel();
			this.btnAutoPistolSetKey = new global::Siticone.UI.WinForms.SiticoneButton();
			this.lblAutoPistol = new global::System.Windows.Forms.Label();
			this.cbAutoPistol = new global::Siticone.UI.WinForms.SiticoneWinToggleSwith();
			this.lblDrawRadius = new global::System.Windows.Forms.Label();
			this.cbDrawRadius = new global::Siticone.UI.WinForms.SiticoneWinToggleSwith();
			this.nudTriggerbotRadius = new global::Siticone.UI.WinForms.SiticoneNumericUpDown();
			this.lblTriggerbotRadius = new global::System.Windows.Forms.Label();
			this.lblOutlineColor = new global::System.Windows.Forms.Label();
			this.cbColor = new global::Siticone.UI.WinForms.SiticoneComboBox();
			this.lblTriggerBot = new global::System.Windows.Forms.Label();
			this.cbTriggerBot = new global::Siticone.UI.WinForms.SiticoneWinToggleSwith();
			this.lblBhopDelay = new global::System.Windows.Forms.Label();
			this.nudBunnyHopDelay = new global::Siticone.UI.WinForms.SiticoneNumericUpDown();
			this.lblBunnyHop = new global::System.Windows.Forms.Label();
			this.cbBunnyHop = new global::Siticone.UI.WinForms.SiticoneWinToggleSwith();
			this.plMainShadow = new global::System.Windows.Forms.PictureBox();
			this.plTopDrag = new global::Siticone.UI.WinForms.SiticoneDragControl(this.components);
			this.cmAutoPistolKey = new global::System.Windows.Forms.ContextMenuStrip(this.components);
			this.zToolStripMenuItem = new global::System.Windows.Forms.ToolStripMenuItem();
			this.xButton1ToolStripMenuItem = new global::System.Windows.Forms.ToolStripMenuItem();
			this.xButton2ToolStripMenuItem = new global::System.Windows.Forms.ToolStripMenuItem();
			this.middleWheelToolStripMenuItem = new global::System.Windows.Forms.ToolStripMenuItem();
			this.nudTriggerbotShootDelay = new global::Siticone.UI.WinForms.SiticoneNumericUpDown();
			this.lblShootDelay = new global::System.Windows.Forms.Label();
			this.lblImmortalDrag = new global::Siticone.UI.WinForms.SiticoneDragControl(this.components);
			this.plSeperator1 = new global::Siticone.UI.WinForms.SiticonePictureBox();
			this.MainFormElipse = new global::Siticone.UI.WinForms.SiticoneElipse(this.components);
			this.nudAutoPistolDelay = new global::Siticone.UI.WinForms.SiticoneNumericUpDown();
			this.lblAutoPistolShootDleay = new global::System.Windows.Forms.Label();
			this.lblAutoStop = new global::System.Windows.Forms.Label();
			this.cbAutoStop = new global::Siticone.UI.WinForms.SiticoneWinToggleSwith();
			this.plTop.SuspendLayout();
			this.plMain.SuspendLayout();
			this.nudTriggerbotRadius.BeginInit();
			this.nudBunnyHopDelay.BeginInit();
			((global::System.ComponentModel.ISupportInitialize)this.plMainShadow).BeginInit();
			this.cmAutoPistolKey.SuspendLayout();
			this.nudTriggerbotShootDelay.BeginInit();
			this.plSeperator1.BeginInit();
			this.nudAutoPistolDelay.BeginInit();
			base.SuspendLayout();
			this.plTop.Controls.Add(this.cntrlMinimaze);
			this.plTop.Controls.Add(this.cntrlClose);
			this.plTop.Controls.Add(this.lblImmortal);
			this.plTop.Dock = global::System.Windows.Forms.DockStyle.Top;
			this.plTop.FillColor = global::System.Drawing.Color.FromArgb(58, 53, 53);
			this.plTop.FillColor2 = global::System.Drawing.Color.FromArgb(58, 53, 53);
			this.plTop.Location = new global::System.Drawing.Point(0, 0);
			this.plTop.Name = "plTop";
			this.plTop.ShadowDecoration.Parent = this.plTop;
			this.plTop.Size = new global::System.Drawing.Size(362, 37);
			this.plTop.TabIndex = 0;
			this.cntrlMinimaze.ControlBoxType = 0;
			this.cntrlMinimaze.Dock = global::System.Windows.Forms.DockStyle.Right;
			this.cntrlMinimaze.FillColor = global::System.Drawing.Color.FromArgb(58, 53, 53);
			this.cntrlMinimaze.HoveredState.Parent = this.cntrlMinimaze;
			this.cntrlMinimaze.IconColor = global::System.Drawing.Color.White;
			this.cntrlMinimaze.Location = new global::System.Drawing.Point(272, 0);
			this.cntrlMinimaze.Name = "cntrlMinimaze";
			this.cntrlMinimaze.ShadowDecoration.Parent = this.cntrlMinimaze;
			this.cntrlMinimaze.Size = new global::System.Drawing.Size(45, 37);
			this.cntrlMinimaze.TabIndex = 5;
			this.cntrlClose.Dock = global::System.Windows.Forms.DockStyle.Right;
			this.cntrlClose.FillColor = global::System.Drawing.Color.FromArgb(58, 53, 53);
			this.cntrlClose.HoveredState.Parent = this.cntrlClose;
			this.cntrlClose.IconColor = global::System.Drawing.Color.White;
			this.cntrlClose.Location = new global::System.Drawing.Point(317, 0);
			this.cntrlClose.Name = "cntrlClose";
			this.cntrlClose.ShadowDecoration.Parent = this.cntrlClose;
			this.cntrlClose.Size = new global::System.Drawing.Size(45, 37);
			this.cntrlClose.TabIndex = 4;
			this.lblImmortal.AutoSize = true;
			this.lblImmortal.BackColor = global::System.Drawing.Color.FromArgb(58, 53, 53);
			this.lblImmortal.Font = new global::System.Drawing.Font("Segoe UI Semibold", 12.75f, global::System.Drawing.FontStyle.Bold);
			this.lblImmortal.ForeColor = global::System.Drawing.Color.FromArgb(244, 244, 244);
			this.lblImmortal.Location = new global::System.Drawing.Point(7, 7);
			this.lblImmortal.Name = "lblImmortal";
			this.lblImmortal.Size = new global::System.Drawing.Size(80, 23);
			this.lblImmortal.TabIndex = 3;
			this.lblImmortal.Text = "Immortal";
			this.plMain.BackColor = global::System.Drawing.Color.FromArgb(35, 32, 32);
			this.plMain.Controls.Add(this.lblAutoStop);
			this.plMain.Controls.Add(this.cbAutoStop);
			this.plMain.Controls.Add(this.nudAutoPistolDelay);
			this.plMain.Controls.Add(this.lblAutoPistolShootDleay);
			this.plMain.Controls.Add(this.plSeperator1);
			this.plMain.Controls.Add(this.nudTriggerbotShootDelay);
			this.plMain.Controls.Add(this.lblShootDelay);
			this.plMain.Controls.Add(this.btnAutoPistolSetKey);
			this.plMain.Controls.Add(this.lblAutoPistol);
			this.plMain.Controls.Add(this.cbAutoPistol);
			this.plMain.Controls.Add(this.lblDrawRadius);
			this.plMain.Controls.Add(this.cbDrawRadius);
			this.plMain.Controls.Add(this.nudTriggerbotRadius);
			this.plMain.Controls.Add(this.lblTriggerbotRadius);
			this.plMain.Controls.Add(this.lblOutlineColor);
			this.plMain.Controls.Add(this.cbColor);
			this.plMain.Controls.Add(this.lblTriggerBot);
			this.plMain.Controls.Add(this.cbTriggerBot);
			this.plMain.Controls.Add(this.lblBhopDelay);
			this.plMain.Controls.Add(this.nudBunnyHopDelay);
			this.plMain.Controls.Add(this.lblBunnyHop);
			this.plMain.Controls.Add(this.cbBunnyHop);
			this.plMain.Controls.Add(this.plMainShadow);
			this.plMain.Dock = global::System.Windows.Forms.DockStyle.Fill;
			this.plMain.FillColor = global::System.Drawing.Color.FromArgb(35, 32, 32);
			this.plMain.FillColor2 = global::System.Drawing.Color.FromArgb(35, 32, 32);
			this.plMain.Location = new global::System.Drawing.Point(0, 37);
			this.plMain.Name = "plMain";
			this.plMain.ShadowDecoration.Parent = this.plMain;
			this.plMain.Size = new global::System.Drawing.Size(362, 230);
			this.plMain.TabIndex = 1;
			this.btnAutoPistolSetKey.BorderRadius = 5;
			this.btnAutoPistolSetKey.CheckedState.Parent = this.btnAutoPistolSetKey;
			this.btnAutoPistolSetKey.CustomImages.Parent = this.btnAutoPistolSetKey;
			this.btnAutoPistolSetKey.FillColor = global::System.Drawing.Color.FromArgb(255, 115, 21);
			this.btnAutoPistolSetKey.Font = new global::System.Drawing.Font("Segoe UI", 9f);
			this.btnAutoPistolSetKey.ForeColor = global::System.Drawing.Color.White;
			this.btnAutoPistolSetKey.HoveredState.Parent = this.btnAutoPistolSetKey;
			this.btnAutoPistolSetKey.Location = new global::System.Drawing.Point(11, 177);
			this.btnAutoPistolSetKey.Name = "btnAutoPistolSetKey";
			this.btnAutoPistolSetKey.ShadowDecoration.Depth = 10;
			this.btnAutoPistolSetKey.ShadowDecoration.Enabled = true;
			this.btnAutoPistolSetKey.ShadowDecoration.Parent = this.btnAutoPistolSetKey;
			this.btnAutoPistolSetKey.Size = new global::System.Drawing.Size(142, 40);
			this.btnAutoPistolSetKey.TabIndex = 19;
			this.btnAutoPistolSetKey.Text = "Set Key - MButton";
			this.btnAutoPistolSetKey.Click += new global::System.EventHandler(this.btnAutoPistolSetKey_Click);
			this.lblAutoPistol.AutoSize = true;
			this.lblAutoPistol.BackColor = global::System.Drawing.Color.FromArgb(35, 32, 32);
			this.lblAutoPistol.Font = new global::System.Drawing.Font("Segoe UI", 9.75f, global::System.Drawing.FontStyle.Regular, global::System.Drawing.GraphicsUnit.Point, 162);
			this.lblAutoPistol.ForeColor = global::System.Drawing.Color.FromArgb(244, 244, 244);
			this.lblAutoPistol.Location = new global::System.Drawing.Point(57, 116);
			this.lblAutoPistol.Name = "lblAutoPistol";
			this.lblAutoPistol.Size = new global::System.Drawing.Size(70, 17);
			this.lblAutoPistol.TabIndex = 18;
			this.lblAutoPistol.Text = "Auto Pistol";
			this.cbAutoPistol.BackColor = global::System.Drawing.Color.FromArgb(35, 32, 32);
			this.cbAutoPistol.CheckedFillColor = global::System.Drawing.Color.FromArgb(255, 115, 21);
			this.cbAutoPistol.Location = new global::System.Drawing.Point(8, 114);
			this.cbAutoPistol.Name = "cbAutoPistol";
			this.cbAutoPistol.Size = new global::System.Drawing.Size(45, 22);
			this.cbAutoPistol.TabIndex = 17;
			this.cbAutoPistol.UncheckedBorderColor = global::System.Drawing.Color.FromArgb(255, 115, 21);
			this.cbAutoPistol.UncheckInnerColor = global::System.Drawing.Color.FromArgb(255, 115, 21);
			this.cbAutoPistol.CheckedChanged += new global::System.EventHandler(this.cbAutoPistol_CheckedChanged);
			this.lblDrawRadius.AutoSize = true;
			this.lblDrawRadius.BackColor = global::System.Drawing.Color.FromArgb(35, 32, 32);
			this.lblDrawRadius.Font = new global::System.Drawing.Font("Segoe UI", 9.75f, global::System.Drawing.FontStyle.Regular, global::System.Drawing.GraphicsUnit.Point, 162);
			this.lblDrawRadius.ForeColor = global::System.Drawing.Color.FromArgb(244, 244, 244);
			this.lblDrawRadius.Location = new global::System.Drawing.Point(248, 119);
			this.lblDrawRadius.Name = "lblDrawRadius";
			this.lblDrawRadius.Size = new global::System.Drawing.Size(81, 17);
			this.lblDrawRadius.TabIndex = 16;
			this.lblDrawRadius.Text = "Draw Radius";
			this.cbDrawRadius.BackColor = global::System.Drawing.Color.FromArgb(35, 32, 32);
			this.cbDrawRadius.CheckedFillColor = global::System.Drawing.Color.FromArgb(255, 115, 21);
			this.cbDrawRadius.Location = new global::System.Drawing.Point(200, 117);
			this.cbDrawRadius.Name = "cbDrawRadius";
			this.cbDrawRadius.Size = new global::System.Drawing.Size(45, 22);
			this.cbDrawRadius.TabIndex = 15;
			this.cbDrawRadius.UncheckedBorderColor = global::System.Drawing.Color.FromArgb(255, 115, 21);
			this.cbDrawRadius.UncheckInnerColor = global::System.Drawing.Color.FromArgb(255, 115, 21);
			this.cbDrawRadius.CheckedChanged += new global::System.EventHandler(this.cbDrawRadius_CheckedChanged);
			this.nudTriggerbotRadius.BackColor = global::System.Drawing.Color.Transparent;
			this.nudTriggerbotRadius.BorderColor = global::System.Drawing.Color.FromArgb(58, 53, 53);
			this.nudTriggerbotRadius.Cursor = global::System.Windows.Forms.Cursors.IBeam;
			this.nudTriggerbotRadius.DisabledState.BorderColor = global::System.Drawing.Color.FromArgb(208, 208, 208);
			this.nudTriggerbotRadius.DisabledState.FillColor = global::System.Drawing.Color.FromArgb(226, 226, 226);
			this.nudTriggerbotRadius.DisabledState.ForeColor = global::System.Drawing.Color.FromArgb(138, 138, 138);
			this.nudTriggerbotRadius.DisabledState.Parent = this.nudTriggerbotRadius;
			this.nudTriggerbotRadius.DisabledState.UpDownButtonFillColor = global::System.Drawing.Color.FromArgb(177, 177, 177);
			this.nudTriggerbotRadius.DisabledState.UpDownButtonForeColor = global::System.Drawing.Color.FromArgb(203, 203, 203);
			this.nudTriggerbotRadius.FillColor = global::System.Drawing.Color.FromArgb(35, 32, 32);
			this.nudTriggerbotRadius.FocusedState.BorderColor = global::System.Drawing.Color.FromArgb(94, 148, 255);
			this.nudTriggerbotRadius.FocusedState.Parent = this.nudTriggerbotRadius;
			this.nudTriggerbotRadius.Font = new global::System.Drawing.Font("Segoe UI", 8f);
			this.nudTriggerbotRadius.ForeColor = global::System.Drawing.Color.FromArgb(126, 137, 149);
			this.nudTriggerbotRadius.Location = new global::System.Drawing.Point(293, 47);
			global::Siticone.UI.WinForms.Suite.NumericUpDown numericUpDown = this.nudTriggerbotRadius;
			int[] array = new int[4];
			array[0] = 500;
			numericUpDown.Maximum = new decimal(array);
			global::Siticone.UI.WinForms.Suite.NumericUpDown numericUpDown2 = this.nudTriggerbotRadius;
			int[] array2 = new int[4];
			array2[0] = 1;
			numericUpDown2.Minimum = new decimal(array2);
			this.nudTriggerbotRadius.Name = "nudTriggerbotRadius";
			this.nudTriggerbotRadius.ShadowDecoration.Depth = 10;
			this.nudTriggerbotRadius.ShadowDecoration.Enabled = true;
			this.nudTriggerbotRadius.ShadowDecoration.Parent = this.nudTriggerbotRadius;
			this.nudTriggerbotRadius.Size = new global::System.Drawing.Size(54, 22);
			this.nudTriggerbotRadius.TabIndex = 14;
			this.nudTriggerbotRadius.UpDownButtonFillColor = global::System.Drawing.Color.FromArgb(255, 115, 21);
			global::Siticone.UI.WinForms.Suite.NumericUpDown numericUpDown3 = this.nudTriggerbotRadius;
			int[] array3 = new int[4];
			array3[0] = 20;
			numericUpDown3.Value = new decimal(array3);
			this.nudTriggerbotRadius.ValueChanged += new global::System.EventHandler(this.nudTriggerbotRadius_ValueChanged);
			this.lblTriggerbotRadius.AutoSize = true;
			this.lblTriggerbotRadius.BackColor = global::System.Drawing.Color.FromArgb(35, 32, 32);
			this.lblTriggerbotRadius.Font = new global::System.Drawing.Font("Segoe UI", 9.75f, global::System.Drawing.FontStyle.Regular, global::System.Drawing.GraphicsUnit.Point, 162);
			this.lblTriggerbotRadius.ForeColor = global::System.Drawing.Color.FromArgb(244, 244, 244);
			this.lblTriggerbotRadius.Location = new global::System.Drawing.Point(197, 52);
			this.lblTriggerbotRadius.Name = "lblTriggerbotRadius";
			this.lblTriggerbotRadius.Size = new global::System.Drawing.Size(54, 17);
			this.lblTriggerbotRadius.TabIndex = 13;
			this.lblTriggerbotRadius.Text = "Radius :";
			this.lblOutlineColor.AutoSize = true;
			this.lblOutlineColor.BackColor = global::System.Drawing.Color.FromArgb(35, 32, 32);
			this.lblOutlineColor.Font = new global::System.Drawing.Font("Segoe UI", 9.75f, global::System.Drawing.FontStyle.Regular, global::System.Drawing.GraphicsUnit.Point, 162);
			this.lblOutlineColor.ForeColor = global::System.Drawing.Color.FromArgb(244, 244, 244);
			this.lblOutlineColor.Location = new global::System.Drawing.Point(196, 183);
			this.lblOutlineColor.Name = "lblOutlineColor";
			this.lblOutlineColor.Size = new global::System.Drawing.Size(49, 34);
			this.lblOutlineColor.TabIndex = 11;
			this.lblOutlineColor.Text = "Outline\r\nColor :\r\n";
			this.cbColor.BackColor = global::System.Drawing.Color.Transparent;
			this.cbColor.BorderColor = global::System.Drawing.Color.FromArgb(255, 115, 21);
			this.cbColor.DrawMode = global::System.Windows.Forms.DrawMode.OwnerDrawFixed;
			this.cbColor.DropDownStyle = global::System.Windows.Forms.ComboBoxStyle.DropDownList;
			this.cbColor.FillColor = global::System.Drawing.Color.FromArgb(35, 32, 32);
			this.cbColor.FocusedColor = global::System.Drawing.Color.FromArgb(255, 115, 21);
			this.cbColor.Font = new global::System.Drawing.Font("Segoe UI", 10f);
			this.cbColor.ForeColor = global::System.Drawing.Color.FromArgb(255, 115, 21);
			this.cbColor.FormattingEnabled = true;
			this.cbColor.HoveredState.Parent = this.cbColor;
			this.cbColor.ItemHeight = 30;
			this.cbColor.Items.AddRange(new object[]
			{
				"Red",
				"Purple",
				"Yellow"
			});
			this.cbColor.ItemsAppearance.Parent = this.cbColor;
			this.cbColor.Location = new global::System.Drawing.Point(248, 182);
			this.cbColor.Name = "cbColor";
			this.cbColor.ShadowDecoration.Depth = 10;
			this.cbColor.ShadowDecoration.Enabled = true;
			this.cbColor.ShadowDecoration.Parent = this.cbColor;
			this.cbColor.Size = new global::System.Drawing.Size(98, 36);
			this.cbColor.TabIndex = 10;
			this.cbColor.SelectedIndexChanged += new global::System.EventHandler(this.cbColor_SelectedIndexChanged);
			this.lblTriggerBot.AutoSize = true;
			this.lblTriggerBot.BackColor = global::System.Drawing.Color.FromArgb(35, 32, 32);
			this.lblTriggerBot.Font = new global::System.Drawing.Font("Segoe UI", 9.75f, global::System.Drawing.FontStyle.Regular, global::System.Drawing.GraphicsUnit.Point, 162);
			this.lblTriggerBot.ForeColor = global::System.Drawing.Color.FromArgb(244, 244, 244);
			this.lblTriggerBot.Location = new global::System.Drawing.Point(249, 21);
			this.lblTriggerBot.Name = "lblTriggerBot";
			this.lblTriggerBot.Size = new global::System.Drawing.Size(73, 17);
			this.lblTriggerBot.TabIndex = 9;
			this.lblTriggerBot.Text = "Trigger Bot";
			this.cbTriggerBot.BackColor = global::System.Drawing.Color.FromArgb(35, 32, 32);
			this.cbTriggerBot.CheckedFillColor = global::System.Drawing.Color.FromArgb(255, 115, 21);
			this.cbTriggerBot.Location = new global::System.Drawing.Point(200, 19);
			this.cbTriggerBot.Name = "cbTriggerBot";
			this.cbTriggerBot.Size = new global::System.Drawing.Size(45, 22);
			this.cbTriggerBot.TabIndex = 8;
			this.cbTriggerBot.UncheckedBorderColor = global::System.Drawing.Color.FromArgb(255, 115, 21);
			this.cbTriggerBot.UncheckInnerColor = global::System.Drawing.Color.FromArgb(255, 115, 21);
			this.cbTriggerBot.CheckedChanged += new global::System.EventHandler(this.cbTriggerBot_CheckedChanged);
			this.lblBhopDelay.AutoSize = true;
			this.lblBhopDelay.BackColor = global::System.Drawing.Color.FromArgb(35, 32, 32);
			this.lblBhopDelay.Font = new global::System.Drawing.Font("Segoe UI", 9.75f, global::System.Drawing.FontStyle.Regular, global::System.Drawing.GraphicsUnit.Point, 162);
			this.lblBhopDelay.ForeColor = global::System.Drawing.Color.FromArgb(244, 244, 244);
			this.lblBhopDelay.Location = new global::System.Drawing.Point(9, 52);
			this.lblBhopDelay.Name = "lblBhopDelay";
			this.lblBhopDelay.Size = new global::System.Drawing.Size(47, 17);
			this.lblBhopDelay.TabIndex = 5;
			this.lblBhopDelay.Text = "Delay :";
			this.nudBunnyHopDelay.BackColor = global::System.Drawing.Color.Transparent;
			this.nudBunnyHopDelay.BorderColor = global::System.Drawing.Color.FromArgb(58, 53, 53);
			this.nudBunnyHopDelay.Cursor = global::System.Windows.Forms.Cursors.IBeam;
			this.nudBunnyHopDelay.DisabledState.BorderColor = global::System.Drawing.Color.FromArgb(208, 208, 208);
			this.nudBunnyHopDelay.DisabledState.FillColor = global::System.Drawing.Color.FromArgb(226, 226, 226);
			this.nudBunnyHopDelay.DisabledState.ForeColor = global::System.Drawing.Color.FromArgb(138, 138, 138);
			this.nudBunnyHopDelay.DisabledState.Parent = this.nudBunnyHopDelay;
			this.nudBunnyHopDelay.DisabledState.UpDownButtonFillColor = global::System.Drawing.Color.FromArgb(177, 177, 177);
			this.nudBunnyHopDelay.DisabledState.UpDownButtonForeColor = global::System.Drawing.Color.FromArgb(203, 203, 203);
			this.nudBunnyHopDelay.FillColor = global::System.Drawing.Color.FromArgb(35, 32, 32);
			this.nudBunnyHopDelay.FocusedState.BorderColor = global::System.Drawing.Color.FromArgb(94, 148, 255);
			this.nudBunnyHopDelay.FocusedState.Parent = this.nudBunnyHopDelay;
			this.nudBunnyHopDelay.Font = new global::System.Drawing.Font("Segoe UI", 8f);
			this.nudBunnyHopDelay.ForeColor = global::System.Drawing.Color.FromArgb(126, 137, 149);
			this.nudBunnyHopDelay.Location = new global::System.Drawing.Point(99, 47);
			global::Siticone.UI.WinForms.Suite.NumericUpDown numericUpDown4 = this.nudBunnyHopDelay;
			int[] array4 = new int[4];
			array4[0] = 1;
			numericUpDown4.Minimum = new decimal(array4);
			this.nudBunnyHopDelay.Name = "nudBunnyHopDelay";
			this.nudBunnyHopDelay.ShadowDecoration.Depth = 10;
			this.nudBunnyHopDelay.ShadowDecoration.Enabled = true;
			this.nudBunnyHopDelay.ShadowDecoration.Parent = this.nudBunnyHopDelay;
			this.nudBunnyHopDelay.Size = new global::System.Drawing.Size(54, 22);
			this.nudBunnyHopDelay.TabIndex = 4;
			this.nudBunnyHopDelay.UpDownButtonFillColor = global::System.Drawing.Color.FromArgb(255, 115, 21);
			global::Siticone.UI.WinForms.Suite.NumericUpDown numericUpDown5 = this.nudBunnyHopDelay;
			int[] array5 = new int[4];
			array5[0] = 20;
			numericUpDown5.Value = new decimal(array5);
			this.nudBunnyHopDelay.ValueChanged += new global::System.EventHandler(this.nudBunnyHopDelay_ValueChanged);
			this.lblBunnyHop.AutoSize = true;
			this.lblBunnyHop.BackColor = global::System.Drawing.Color.FromArgb(35, 32, 32);
			this.lblBunnyHop.Font = new global::System.Drawing.Font("Segoe UI", 9.75f, global::System.Drawing.FontStyle.Regular, global::System.Drawing.GraphicsUnit.Point, 162);
			this.lblBunnyHop.ForeColor = global::System.Drawing.Color.FromArgb(244, 244, 244);
			this.lblBunnyHop.Location = new global::System.Drawing.Point(57, 23);
			this.lblBunnyHop.Name = "lblBunnyHop";
			this.lblBunnyHop.Size = new global::System.Drawing.Size(71, 17);
			this.lblBunnyHop.TabIndex = 2;
			this.lblBunnyHop.Text = "Bunny Hop";
			this.cbBunnyHop.BackColor = global::System.Drawing.Color.FromArgb(35, 32, 32);
			this.cbBunnyHop.CheckedFillColor = global::System.Drawing.Color.FromArgb(255, 115, 21);
			this.cbBunnyHop.Location = new global::System.Drawing.Point(8, 21);
			this.cbBunnyHop.Name = "cbBunnyHop";
			this.cbBunnyHop.Size = new global::System.Drawing.Size(45, 22);
			this.cbBunnyHop.TabIndex = 0;
			this.cbBunnyHop.Text = "siticoneWinToggleSwith1";
			this.cbBunnyHop.UncheckedBorderColor = global::System.Drawing.Color.FromArgb(255, 115, 21);
			this.cbBunnyHop.UncheckInnerColor = global::System.Drawing.Color.FromArgb(255, 115, 21);
			this.cbBunnyHop.CheckedChanged += new global::System.EventHandler(this.cbBunnyHop_CheckedChanged);
			this.plMainShadow.Dock = global::System.Windows.Forms.DockStyle.Top;
			this.plMainShadow.Image = (global::System.Drawing.Image)componentResourceManager.GetObject("plMainShadow.Image");
			this.plMainShadow.Location = new global::System.Drawing.Point(0, 0);
			this.plMainShadow.Name = "plMainShadow";
			this.plMainShadow.Size = new global::System.Drawing.Size(362, 10);
			this.plMainShadow.SizeMode = global::System.Windows.Forms.PictureBoxSizeMode.StretchImage;
			this.plMainShadow.TabIndex = 6;
			this.plMainShadow.TabStop = false;
			this.plTopDrag.TargetControl = this.plTop;
			this.cmAutoPistolKey.Items.AddRange(new global::System.Windows.Forms.ToolStripItem[]
			{
				this.zToolStripMenuItem,
				this.xButton1ToolStripMenuItem,
				this.xButton2ToolStripMenuItem,
				this.middleWheelToolStripMenuItem
			});
			this.cmAutoPistolKey.Name = "cmAutoPistolKey";
			this.cmAutoPistolKey.Size = new global::System.Drawing.Size(148, 92);
			this.zToolStripMenuItem.Name = "zToolStripMenuItem";
			this.zToolStripMenuItem.Size = new global::System.Drawing.Size(147, 22);
			this.zToolStripMenuItem.Text = "Z";
			this.zToolStripMenuItem.Click += new global::System.EventHandler(this.zToolStripMenuItem_Click);
			this.xButton1ToolStripMenuItem.Name = "xButton1ToolStripMenuItem";
			this.xButton1ToolStripMenuItem.Size = new global::System.Drawing.Size(147, 22);
			this.xButton1ToolStripMenuItem.Text = "XButton1";
			this.xButton1ToolStripMenuItem.Click += new global::System.EventHandler(this.xButton1ToolStripMenuItem_Click);
			this.xButton2ToolStripMenuItem.Name = "xButton2ToolStripMenuItem";
			this.xButton2ToolStripMenuItem.Size = new global::System.Drawing.Size(147, 22);
			this.xButton2ToolStripMenuItem.Text = "XButton2";
			this.xButton2ToolStripMenuItem.Click += new global::System.EventHandler(this.xButton2ToolStripMenuItem_Click);
			this.middleWheelToolStripMenuItem.Name = "middleWheelToolStripMenuItem";
			this.middleWheelToolStripMenuItem.Size = new global::System.Drawing.Size(147, 22);
			this.middleWheelToolStripMenuItem.Text = "Middle Wheel";
			this.middleWheelToolStripMenuItem.Click += new global::System.EventHandler(this.middleWheelToolStripMenuItem_Click);
			this.nudTriggerbotShootDelay.BackColor = global::System.Drawing.Color.Transparent;
			this.nudTriggerbotShootDelay.BorderColor = global::System.Drawing.Color.FromArgb(58, 53, 53);
			this.nudTriggerbotShootDelay.Cursor = global::System.Windows.Forms.Cursors.IBeam;
			this.nudTriggerbotShootDelay.DisabledState.BorderColor = global::System.Drawing.Color.FromArgb(208, 208, 208);
			this.nudTriggerbotShootDelay.DisabledState.FillColor = global::System.Drawing.Color.FromArgb(226, 226, 226);
			this.nudTriggerbotShootDelay.DisabledState.ForeColor = global::System.Drawing.Color.FromArgb(138, 138, 138);
			this.nudTriggerbotShootDelay.DisabledState.Parent = this.nudTriggerbotShootDelay;
			this.nudTriggerbotShootDelay.DisabledState.UpDownButtonFillColor = global::System.Drawing.Color.FromArgb(177, 177, 177);
			this.nudTriggerbotShootDelay.DisabledState.UpDownButtonForeColor = global::System.Drawing.Color.FromArgb(203, 203, 203);
			this.nudTriggerbotShootDelay.FillColor = global::System.Drawing.Color.FromArgb(35, 32, 32);
			this.nudTriggerbotShootDelay.FocusedState.BorderColor = global::System.Drawing.Color.FromArgb(94, 148, 255);
			this.nudTriggerbotShootDelay.FocusedState.Parent = this.nudTriggerbotShootDelay;
			this.nudTriggerbotShootDelay.Font = new global::System.Drawing.Font("Segoe UI", 8f);
			this.nudTriggerbotShootDelay.ForeColor = global::System.Drawing.Color.FromArgb(126, 137, 149);
			this.nudTriggerbotShootDelay.Location = new global::System.Drawing.Point(293, 80);
			global::Siticone.UI.WinForms.Suite.NumericUpDown numericUpDown6 = this.nudTriggerbotShootDelay;
			int[] array6 = new int[4];
			array6[0] = 1000;
			numericUpDown6.Maximum = new decimal(array6);
			global::Siticone.UI.WinForms.Suite.NumericUpDown numericUpDown7 = this.nudTriggerbotShootDelay;
			int[] array7 = new int[4];
			array7[0] = 1;
			numericUpDown7.Minimum = new decimal(array7);
			this.nudTriggerbotShootDelay.Name = "nudTriggerbotShootDelay";
			this.nudTriggerbotShootDelay.ShadowDecoration.Depth = 10;
			this.nudTriggerbotShootDelay.ShadowDecoration.Enabled = true;
			this.nudTriggerbotShootDelay.ShadowDecoration.Parent = this.nudTriggerbotShootDelay;
			this.nudTriggerbotShootDelay.Size = new global::System.Drawing.Size(54, 22);
			this.nudTriggerbotShootDelay.TabIndex = 21;
			this.nudTriggerbotShootDelay.UpDownButtonFillColor = global::System.Drawing.Color.FromArgb(255, 115, 21);
			global::Siticone.UI.WinForms.Suite.NumericUpDown numericUpDown8 = this.nudTriggerbotShootDelay;
			int[] array8 = new int[4];
			array8[0] = 1;
			numericUpDown8.Value = new decimal(array8);
			this.nudTriggerbotShootDelay.ValueChanged += new global::System.EventHandler(this.nudTriggerbotShootDelay_ValueChanged);
			this.lblShootDelay.AutoSize = true;
			this.lblShootDelay.BackColor = global::System.Drawing.Color.FromArgb(35, 32, 32);
			this.lblShootDelay.Font = new global::System.Drawing.Font("Segoe UI", 9.75f, global::System.Drawing.FontStyle.Regular, global::System.Drawing.GraphicsUnit.Point, 162);
			this.lblShootDelay.ForeColor = global::System.Drawing.Color.FromArgb(244, 244, 244);
			this.lblShootDelay.Location = new global::System.Drawing.Point(197, 82);
			this.lblShootDelay.Name = "lblShootDelay";
			this.lblShootDelay.Size = new global::System.Drawing.Size(85, 17);
			this.lblShootDelay.TabIndex = 20;
			this.lblShootDelay.Text = "Shoot Delay :";
			this.lblImmortalDrag.TargetControl = this.lblImmortal;
			this.plSeperator1.BackColor = global::System.Drawing.Color.Transparent;
			this.plSeperator1.BorderRadius = 2;
			this.plSeperator1.FillColor = global::System.Drawing.Color.FromArgb(255, 115, 21);
			this.plSeperator1.Location = new global::System.Drawing.Point(174, 18);
			this.plSeperator1.Name = "plSeperator1";
			this.plSeperator1.ShadowDecoration.Depth = 10;
			this.plSeperator1.ShadowDecoration.Enabled = true;
			this.plSeperator1.ShadowDecoration.Parent = this.plSeperator1;
			this.plSeperator1.Size = new global::System.Drawing.Size(10, 199);
			this.plSeperator1.TabIndex = 22;
			this.plSeperator1.TabStop = false;
			this.MainFormElipse.BorderRadius = 3;
			this.MainFormElipse.TargetControl = this;
			this.nudAutoPistolDelay.BackColor = global::System.Drawing.Color.Transparent;
			this.nudAutoPistolDelay.BorderColor = global::System.Drawing.Color.FromArgb(58, 53, 53);
			this.nudAutoPistolDelay.Cursor = global::System.Windows.Forms.Cursors.IBeam;
			this.nudAutoPistolDelay.DisabledState.BorderColor = global::System.Drawing.Color.FromArgb(208, 208, 208);
			this.nudAutoPistolDelay.DisabledState.FillColor = global::System.Drawing.Color.FromArgb(226, 226, 226);
			this.nudAutoPistolDelay.DisabledState.ForeColor = global::System.Drawing.Color.FromArgb(138, 138, 138);
			this.nudAutoPistolDelay.DisabledState.Parent = this.nudAutoPistolDelay;
			this.nudAutoPistolDelay.DisabledState.UpDownButtonFillColor = global::System.Drawing.Color.FromArgb(177, 177, 177);
			this.nudAutoPistolDelay.DisabledState.UpDownButtonForeColor = global::System.Drawing.Color.FromArgb(203, 203, 203);
			this.nudAutoPistolDelay.FillColor = global::System.Drawing.Color.FromArgb(35, 32, 32);
			this.nudAutoPistolDelay.FocusedState.BorderColor = global::System.Drawing.Color.FromArgb(94, 148, 255);
			this.nudAutoPistolDelay.FocusedState.Parent = this.nudAutoPistolDelay;
			this.nudAutoPistolDelay.Font = new global::System.Drawing.Font("Segoe UI", 8f);
			this.nudAutoPistolDelay.ForeColor = global::System.Drawing.Color.FromArgb(126, 137, 149);
			this.nudAutoPistolDelay.Location = new global::System.Drawing.Point(100, 145);
			global::Siticone.UI.WinForms.Suite.NumericUpDown numericUpDown9 = this.nudAutoPistolDelay;
			int[] array9 = new int[4];
			array9[0] = 1000;
			numericUpDown9.Maximum = new decimal(array9);
			global::Siticone.UI.WinForms.Suite.NumericUpDown numericUpDown10 = this.nudAutoPistolDelay;
			int[] array10 = new int[4];
			array10[0] = 1;
			numericUpDown10.Minimum = new decimal(array10);
			this.nudAutoPistolDelay.Name = "nudAutoPistolDelay";
			this.nudAutoPistolDelay.ShadowDecoration.Depth = 10;
			this.nudAutoPistolDelay.ShadowDecoration.Enabled = true;
			this.nudAutoPistolDelay.ShadowDecoration.Parent = this.nudAutoPistolDelay;
			this.nudAutoPistolDelay.Size = new global::System.Drawing.Size(54, 22);
			this.nudAutoPistolDelay.TabIndex = 24;
			this.nudAutoPistolDelay.UpDownButtonFillColor = global::System.Drawing.Color.FromArgb(255, 115, 21);
			global::Siticone.UI.WinForms.Suite.NumericUpDown numericUpDown11 = this.nudAutoPistolDelay;
			int[] array11 = new int[4];
			array11[0] = 1;
			numericUpDown11.Value = new decimal(array11);
			this.nudAutoPistolDelay.ValueChanged += new global::System.EventHandler(this.nudAutoPistolDelay_ValueChanged);
			this.lblAutoPistolShootDleay.AutoSize = true;
			this.lblAutoPistolShootDleay.BackColor = global::System.Drawing.Color.FromArgb(35, 32, 32);
			this.lblAutoPistolShootDleay.Font = new global::System.Drawing.Font("Segoe UI", 9.75f, global::System.Drawing.FontStyle.Regular, global::System.Drawing.GraphicsUnit.Point, 162);
			this.lblAutoPistolShootDleay.ForeColor = global::System.Drawing.Color.FromArgb(244, 244, 244);
			this.lblAutoPistolShootDleay.Location = new global::System.Drawing.Point(9, 145);
			this.lblAutoPistolShootDleay.Name = "lblAutoPistolShootDleay";
			this.lblAutoPistolShootDleay.Size = new global::System.Drawing.Size(85, 17);
			this.lblAutoPistolShootDleay.TabIndex = 23;
			this.lblAutoPistolShootDleay.Text = "Shoot Delay :";
			this.lblAutoStop.AutoSize = true;
			this.lblAutoStop.BackColor = global::System.Drawing.Color.FromArgb(35, 32, 32);
			this.lblAutoStop.Font = new global::System.Drawing.Font("Segoe UI", 9.75f, global::System.Drawing.FontStyle.Regular, global::System.Drawing.GraphicsUnit.Point, 162);
			this.lblAutoStop.ForeColor = global::System.Drawing.Color.FromArgb(244, 244, 244);
			this.lblAutoStop.Location = new global::System.Drawing.Point(57, 84);
			this.lblAutoStop.Name = "lblAutoStop";
			this.lblAutoStop.Size = new global::System.Drawing.Size(66, 17);
			this.lblAutoStop.TabIndex = 26;
			this.lblAutoStop.Text = "Auto Stop";
			this.cbAutoStop.BackColor = global::System.Drawing.Color.FromArgb(35, 32, 32);
			this.cbAutoStop.CheckedFillColor = global::System.Drawing.Color.FromArgb(255, 115, 21);
			this.cbAutoStop.Location = new global::System.Drawing.Point(8, 82);
			this.cbAutoStop.Name = "cbAutoStop";
			this.cbAutoStop.Size = new global::System.Drawing.Size(45, 22);
			this.cbAutoStop.TabIndex = 25;
			this.cbAutoStop.UncheckedBorderColor = global::System.Drawing.Color.FromArgb(255, 115, 21);
			this.cbAutoStop.UncheckInnerColor = global::System.Drawing.Color.FromArgb(255, 115, 21);
			this.cbAutoStop.CheckedChanged += new global::System.EventHandler(this.cbAutoStop_CheckedChanged);
			base.AutoScaleDimensions = new global::System.Drawing.SizeF(6f, 13f);
			base.AutoScaleMode = global::System.Windows.Forms.AutoScaleMode.Font;
			base.AutoSizeMode = global::System.Windows.Forms.AutoSizeMode.GrowAndShrink;
			base.ClientSize = new global::System.Drawing.Size(362, 267);
			base.Controls.Add(this.plMain);
			base.Controls.Add(this.plTop);
			base.FormBorderStyle = global::System.Windows.Forms.FormBorderStyle.None;
			base.Icon = (global::System.Drawing.Icon)componentResourceManager.GetObject("$this.Icon");
			base.MaximizeBox = false;
			base.Name = "MainForm";
			base.StartPosition = global::System.Windows.Forms.FormStartPosition.CenterScreen;
			this.Text = "Immortal";
			base.FormClosed += new global::System.Windows.Forms.FormClosedEventHandler(this.MainForm_FormClosed);
			base.Load += new global::System.EventHandler(this.MainForm_Load);
			this.plTop.ResumeLayout(false);
			this.plTop.PerformLayout();
			this.plMain.ResumeLayout(false);
			this.plMain.PerformLayout();
			this.nudTriggerbotRadius.EndInit();
			this.nudBunnyHopDelay.EndInit();
			((global::System.ComponentModel.ISupportInitialize)this.plMainShadow).EndInit();
			this.cmAutoPistolKey.ResumeLayout(false);
			this.nudTriggerbotShootDelay.EndInit();
			this.plSeperator1.EndInit();
			this.nudAutoPistolDelay.EndInit();
			base.ResumeLayout(false);
		}

		// Token: 0x04000002 RID: 2
		private global::System.ComponentModel.IContainer components = null;

		// Token: 0x04000003 RID: 3
		private global::Siticone.UI.WinForms.SiticoneGradientPanel plTop;

		// Token: 0x04000004 RID: 4
		private global::Siticone.UI.WinForms.SiticoneGradientPanel plMain;

		// Token: 0x04000005 RID: 5
		private global::Siticone.UI.WinForms.SiticoneWinToggleSwith cbBunnyHop;

		// Token: 0x04000006 RID: 6
		private global::System.Windows.Forms.Label lblBunnyHop;

		// Token: 0x04000007 RID: 7
		private global::System.Windows.Forms.Label lblImmortal;

		// Token: 0x04000008 RID: 8
		private global::System.Windows.Forms.Label lblBhopDelay;

		// Token: 0x04000009 RID: 9
		private global::Siticone.UI.WinForms.SiticoneNumericUpDown nudBunnyHopDelay;

		// Token: 0x0400000A RID: 10
		private global::Siticone.UI.WinForms.SiticoneDragControl plTopDrag;

		// Token: 0x0400000B RID: 11
		private global::Siticone.UI.WinForms.SiticoneControlBox cntrlMinimaze;

		// Token: 0x0400000C RID: 12
		private global::Siticone.UI.WinForms.SiticoneControlBox cntrlClose;

		// Token: 0x0400000D RID: 13
		private global::System.Windows.Forms.PictureBox plMainShadow;

		// Token: 0x0400000E RID: 14
		private global::System.Windows.Forms.Label lblTriggerBot;

		// Token: 0x0400000F RID: 15
		private global::Siticone.UI.WinForms.SiticoneWinToggleSwith cbTriggerBot;

		// Token: 0x04000010 RID: 16
		private global::System.Windows.Forms.Label lblOutlineColor;

		// Token: 0x04000011 RID: 17
		private global::Siticone.UI.WinForms.SiticoneComboBox cbColor;

		// Token: 0x04000012 RID: 18
		private global::System.Windows.Forms.Label lblTriggerbotRadius;

		// Token: 0x04000013 RID: 19
		private global::Siticone.UI.WinForms.SiticoneNumericUpDown nudTriggerbotRadius;

		// Token: 0x04000014 RID: 20
		private global::System.Windows.Forms.Label lblDrawRadius;

		// Token: 0x04000015 RID: 21
		private global::Siticone.UI.WinForms.SiticoneWinToggleSwith cbDrawRadius;

		// Token: 0x04000016 RID: 22
		private global::Siticone.UI.WinForms.SiticoneButton btnAutoPistolSetKey;

		// Token: 0x04000017 RID: 23
		private global::System.Windows.Forms.Label lblAutoPistol;

		// Token: 0x04000018 RID: 24
		private global::Siticone.UI.WinForms.SiticoneWinToggleSwith cbAutoPistol;

		// Token: 0x04000019 RID: 25
		private global::System.Windows.Forms.ContextMenuStrip cmAutoPistolKey;

		// Token: 0x0400001A RID: 26
		private global::System.Windows.Forms.ToolStripMenuItem zToolStripMenuItem;

		// Token: 0x0400001B RID: 27
		private global::System.Windows.Forms.ToolStripMenuItem xButton1ToolStripMenuItem;

		// Token: 0x0400001C RID: 28
		private global::System.Windows.Forms.ToolStripMenuItem xButton2ToolStripMenuItem;

		// Token: 0x0400001D RID: 29
		private global::System.Windows.Forms.ToolStripMenuItem middleWheelToolStripMenuItem;

		// Token: 0x0400001E RID: 30
		private global::Siticone.UI.WinForms.SiticoneNumericUpDown nudTriggerbotShootDelay;

		// Token: 0x0400001F RID: 31
		private global::System.Windows.Forms.Label lblShootDelay;

		// Token: 0x04000020 RID: 32
		private global::Siticone.UI.WinForms.SiticoneDragControl lblImmortalDrag;

		// Token: 0x04000021 RID: 33
		private global::Siticone.UI.WinForms.SiticonePictureBox plSeperator1;

		// Token: 0x04000022 RID: 34
		private global::Siticone.UI.WinForms.SiticoneElipse MainFormElipse;

		// Token: 0x04000023 RID: 35
		private global::Siticone.UI.WinForms.SiticoneNumericUpDown nudAutoPistolDelay;

		// Token: 0x04000024 RID: 36
		private global::System.Windows.Forms.Label lblAutoPistolShootDleay;

		// Token: 0x04000025 RID: 37
		private global::System.Windows.Forms.Label lblAutoStop;

		// Token: 0x04000026 RID: 38
		private global::Siticone.UI.WinForms.SiticoneWinToggleSwith cbAutoStop;
	}
}
