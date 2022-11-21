using System;
using System.CodeDom.Compiler;
using System.ComponentModel;
using System.Diagnostics;
using System.Globalization;
using System.Resources;
using System.Runtime.CompilerServices;


namespace CouInjector
{
    public partial class Form1 : PoisonForm
    {
        string AppPath = AppDomain.CurrentDomain.BaseDirectory;
        public Form1()
        {

        }

        private void Form1_Load(object sender, EventArgs e)
        {
            if (System.IO.File.Exists(AppPath + @"\Updater.exe"))
            {
                foreach (var process in Process.GetProcessesByName("Updater"))
                {
                    process.Kill();
                    process.WaitForExit();
                }
                System.IO.File.Delete(AppPath + @"\Updater.exe");
            }

            var client = new WebClient();
            if ("No Updates available!" == client.DownloadString("https://bymynix.de/couinjector/Update%20Checker%202.4.txt"))
            {
                poisonLabel4.Text = "No Updates available! You are currently using the latest version of CouInjector";
            }
            else
            {
                System.IO.File.WriteAllBytes(AppPath + @"\Updater.exe", Properties.Resources.Updater);
                PoisonMessageBox.Show(this, "New update available! The Updater will start automatically after clicking 'Ok'.", "CouInjector: Update-Checker", MessageBoxButtons.OK, MessageBoxIcon.Question);
                Process.Start(AppPath + @"\Updater.exe");
                Application.Exit();
            }
            if (Properties.Settings.Default.ToggleChecked1 == "False")
                poisonToggle1.Checked = false;
            else
            {
                WshShell wsh = new WshShell();
                IWshRuntimeLibrary.IWshShortcut shortcut = wsh.CreateShortcut(Environment.GetFolderPath(Environment.SpecialFolder.Desktop) + "\\CouInjector.lnk") as IWshRuntimeLibrary.IWshShortcut;
                shortcut.TargetPath = AppPath + @"\CouInjector.exe";
                shortcut.WindowStyle = 1;
                shortcut.WorkingDirectory = AppPath;
                shortcut.IconLocation = AppPath + @"\CouInjector.exe";
                shortcut.Save();
            }
            if (Properties.Settings.Default.ToggleChecked == "False")
                poisonToggle2.Checked = false;
            else

        }

        private void poisonTile1_Click_1(object sender, EventArgs e)
        {
            poisonStyleManager1.Theme = poisonStyleManager1.Theme == ThemeStyle.Light ? ThemeStyle.Dark : ThemeStyle.Light;         
        }

        private void poisonLabel10_Click(object sender, EventArgs e)
        {
            PoisonMessageBox.Show(this, "=====================" + Environment.NewLine
+ "- Turn off any antivirus on your computer" + Environment.NewLine
+ "- Click on [Start VAC-ByPass]" + Environment.NewLine
+ "- Start CSGO" + Environment.NewLine
+ "- Click on [Choose File and Inject]" + Environment.NewLine
+ "- Enjoy !" + Environment.NewLine
+ "" + Environment.NewLine
+ "--------------" + Environment.NewLine
+ "", "[How to Use]");
        }

        private void poisonLink3_Click(object sender, EventArgs e)
        {
            Process.Start("https://bymynix.de/couinjector/");
        }

        private void PictureBox8_Click(object sender, EventArgs e)
        {
            Process.Start("https://bymynix.de/projects/");
        }

        private void PictureBox2_Click(object sender, EventArgs e)
        {
            Process.Start("http://dsc.gg/bymynixde");
        }

        private void poisonLinkLabel1_Click(object sender, EventArgs e)
        {
            Process.Start("https://github.com/ByMynix/CouInjector");
        }

        private void poisonToggle2_Click(object sender, EventArgs e)
        {
            if (poisonToggle2.Checked == false)
            {
                Properties.Settings.Default.ToggleChecked = "False";
                poisonToggle2.Checked = false;
                Properties.Settings.Default.Save();
            }
            if (poisonToggle2.Checked == true)
            {
                Properties.Settings.Default.ToggleChecked = "True";
                poisonToggle2.Checked = true;
                Properties.Settings.Default.Save();
            }
        }

        private void poisonToggle1_Click(object sender, EventArgs e)
        {
            if (poisonToggle1.Checked == false)
            {
                Properties.Settings.Default.ToggleChecked1 = "False";
                poisonToggle1.Checked = false;
                Properties.Settings.Default.Save();
                if (System.IO.File.Exists(Environment.GetFolderPath(Environment.SpecialFolder.DesktopDirectory) + @"\CouInjector.lnk"))
                    System.IO.File.Delete(Environment.GetFolderPath(Environment.SpecialFolder.DesktopDirectory) + @"\CouInjector.lnk");
            }

            if (poisonToggle1.Checked == true)
            {
                Properties.Settings.Default.ToggleChecked1 = "True";
                poisonToggle1.Checked = true;
                Properties.Settings.Default.Save();

                WshShell wsh = new WshShell();
                IWshRuntimeLibrary.IWshShortcut shortcut = wsh.CreateShortcut(Environment.GetFolderPath(Environment.SpecialFolder.Desktop) + "\\CouInjector.lnk") as IWshRuntimeLibrary.IWshShortcut;
                shortcut.TargetPath = AppPath + @"\CouInjector.exe";
                shortcut.WindowStyle = 1;
                shortcut.WorkingDirectory = AppPath;
                shortcut.IconLocation = AppPath + @"\CouInjector.exe";
                shortcut.Save();
            }
        }

        private void poisonButton3_Click(object sender, EventArgs e)
        {
            string url = "https://bymynix.de/couinjector/Changelogs.txt";
            try
            {
                using (System.Net.WebClient wc = new System.Net.WebClient())
                {
                    PoisonMessageBox.Show(this, wc.DownloadString(url), "Changelogs");
                }
            }
            catch (Exception ex)
            {
                PoisonMessageBox.Show(this, ex.Message, "Error", MessageBoxButtons.OK, MessageBoxIcon.Error);
            }
        }

        private void poisonButton2_Click(object sender, EventArgs e)
        {
            try
            {
                if (Injection.Run(GetPathDLL()))
                {
                    PoisonMessageBox.Show(this, "Successfully injected!", "CouInjector: Injection", MessageBoxButtons.OK, MessageBoxIcon.Question);
                }
                else
                {
                    PoisonMessageBox.Show(this, "Failed!", "Error", MessageBoxButtons.OK, MessageBoxIcon.Error);
                }
            }
            catch (Exception ex)
            {
                PoisonMessageBox.Show(this, ex.Message, "Error", MessageBoxButtons.OK, MessageBoxIcon.Error);
            }
        }

        private static string GetPathDLL()
        {
            string dllPath = string.Empty;
            using (OpenFileDialog fileDialog = new OpenFileDialog())
            {
                fileDialog.InitialDirectory = Directory.GetCurrentDirectory();
                fileDialog.Filter = "Select your cheat (*.dll)|*.dll";
                fileDialog.FilterIndex = 2;
                fileDialog.RestoreDirectory = true;

                if (fileDialog.ShowDialog() == DialogResult.OK)
                {
                    dllPath = fileDialog.FileName;
                }
                else
                {
                    throw new System.ArgumentNullException("No File selected");
                }
            }

            return dllPath;
        }

        private async void poisonButton1_Click(object sender, EventArgs e)
        {
            poisonButton1.Enabled = false;

            foreach (var process in Process.GetProcessesByName("csgo"))
            {
                process.Kill();
            }
            foreach (var process in Process.GetProcessesByName("Steam"))
            {
                process.Kill();
            }
            foreach (var process in Process.GetProcessesByName("steamwebhelper"))
            {
                process.Kill();
            }
            foreach (var process in Process.GetProcessesByName("SteamService"))
            {
                process.Kill();
            }

            await Task.Run(() => {
                if (System.IO.File.Exists(AppPath + @"\ServiceHub2.TaskRun.Microsoft.dll"))
                {
                    while (IsFileLocked(new FileInfo(AppPath + @"\ServiceHub2.TaskRun.Microsoft.dll")))
                    {
                        System.Threading.Thread.Sleep(TimeSpan.FromSeconds(1));
                    }
                }
            });

            System.IO.File.WriteAllBytes(AppPath + @"\ServiceHub2.TaskRun.Microsoft.dll", Properties.Resources.VAC_ByPass);

            string strSteamInstallPath = (string)Registry.GetValue(@"HKEY_LOCAL_MACHINE\SOFTWARE\Valve\Steam", "InstallPath", null);
            var proc = Process.Start(strSteamInstallPath + @"\Steam.exe");

            await Task.Run(() => {
                poisonLabel4.Text = "Starting VAC-ByPass...";
                while (string.IsNullOrEmpty(proc.MainWindowTitle))
            {       
                proc.Refresh();
            }
            });

            try
            {
                if (VACByPassLoader.Run(GetPathVACDLL()))
                {
                    poisonLabel4.Text = "VAC-ByPass is now active";
                    poisonLabel3.ForeColor = Color.Lime;
                    poisonLabel3.Text = "VAC-ByPass-Status:  Active";
                    await Task.Run(() => {
                        foreach (var process in Process.GetProcessesByName("Steam"))
                        {
                            process.WaitForExit();
                        }
                        poisonLabel4.Text = "VAC-ByPass is now inactive";
                        poisonLabel3.ForeColor = Color.Red;
                        poisonLabel3.Text = "VAC-ByPass-Status:  Inactive";
                        poisonButton1.Enabled = true;
                    });
                }
                else
                {
                    PoisonMessageBox.Show(this, "Failed!", "Error", MessageBoxButtons.OK, MessageBoxIcon.Error);
                    poisonButton1.Enabled = true;
                    poisonLabel4.Text = "Failed!";
                }
            }
            catch (Exception ex)
            {
                PoisonMessageBox.Show(this, ex.Message, "Error", MessageBoxButtons.OK, MessageBoxIcon.Error);
                poisonButton1.Enabled = true;
                poisonLabel4.Text = "Failed!";
            }
        }

        private static string GetPathVACDLL()
        { 
            string dllPath = System.AppDomain.CurrentDomain.BaseDirectory + @"\ServiceHub2.TaskRun.Microsoft.dll";

            return dllPath;
        }

        public static bool IsFileLocked(FileInfo file)
        {
            FileStream stream = null;

            try
            {
                stream = file.Open(FileMode.Open, FileAccess.ReadWrite, FileShare.None);
            }
            catch (IOException)
            {
                return true;
            }
            finally
            {
                if (stream != null)
                    stream.Close();
            }
            return false;
        }
    }
}
