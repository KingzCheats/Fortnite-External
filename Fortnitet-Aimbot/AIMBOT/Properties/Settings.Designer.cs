using System;
using System.CodeDom.Compiler;
using System.Configuration;
using System.Runtime.CompilerServices;

namespace Immortal.Properties
{
	// Token: 0x02000007 RID: 7
	[CompilerGenerated]s
	[GeneratedCode("Microsoft.VisualStudio.Editors.SettingsDesigner.SettingsSingleFileGenerator", "11.0.0.0")]
	internal sealed partial class Settings : ApplicationSettingsBase
	{
		// Token: 0x17000003 RID: 3
		// (get) Token: 0x0600002A RID: 42 RVA: 0x00005BE8 File Offset: 0x00003DE8
		public static Settings Default
		{
			get
			{
				return Settings.defaultInstance;
			}
		}

		// Token: 0x04000034 RID: 52
		private static Settings defaultInstance = (Settings)SettingsBase.Synchronized(new Settings());
	}
}
