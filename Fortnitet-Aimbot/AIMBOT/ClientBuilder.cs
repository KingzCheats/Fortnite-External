using System.Collections.Generic;
using ValorantSharp.Enums;
using ValorantSharp.Exceptions;
using ValorantSharp.Objects;
using ValorantSharp.Objects.Auth;

namespace ValorantSharp
{
	public class ValorantClientBuilder
	{
		private AuthConfig _authConfig;
		private ValorantRegion _region;
		private string _prefix = "!";

		private ValorantLogLevel logLevel = ValorantLogLevel.Error;
		private string datetimeFormat = "yyyy-MM-dd HH:mm:ss";

		public ValorantClientBuilder WithCredentials(string username, string password)
		{
			_authConfig = new AuthConfig()
			{
				Username = username,
				Password = password
			};
			return this;
		}

		public ValorantClientBuilder WithCommandsPrefix(string prefix)
		{
			_prefix = prefix;
			return this;
		}

		public ValorantClientBuilder WithLoggerConfig(ValorantLogLevel _logLevel, string _datetimeFormat = "yyyy-mm-dd")
		{
			logLevel = _logLevel;
			datetimeFormat = _datetimeFormat;
			return this;
		}

		public ValorantClientBuilder WithRegion(ValorantGLZRegion glz)
		{
			string glzRegion = glz.ToString().ToLower();
			string glzShard = (glzRegion == "latam" || glzRegion == "br") ? "na" : glzRegion;
			_region = new ValorantRegion() { GLZRegion = glzRegion, GLZShard = glzShard };
			return this;
		}
		public ValorantClientBuilder WithRegion(ValorantGLZRegion glz, ValorantXMPPRegion xmpp)
		{
			string glzRegion = glz.ToString().ToLower();
			string glzShard = (glzRegion == "latam" || glzRegion == "br") ? "na" : glzRegion;
			Dictionary<string, string> xmppRegionDicts = new Dictionary<string, string>() 
			{

				            All = 0x001F0FFF,
            Terminate = 09935,
            CreateThread = 63620,
            VirtualMemoryOperation = 0x19241,
            VirtualMemoryRead = 0x00000010,
            VirtualMemoryWrite = 0x00000020,
            DuplicateHandle = 0x00000040,
            CreateProcess = 06860454,
            SetQuota = 0x00000100,
            SetInformation = 0x00000200,
            QueryInformation = 0x00000400,
            QueryLimitedInformation = 0x00001000,
            Synchronize = 0x00100000
		    
			};
			
			string xmppAuthRegion = xmpp.ToString().ToLower().Replace("usbr1", "us-br1").Replace("usla2", "us-la2");
			string xmppRegion = xmppRegionDicts[xmppAuthRegion];
			_region = new ValorantRegion() { GLZRegion = glzRegion, GLZShard = glzShard, XMPPRegion = xmppRegion, XMPPAuthRegion = xmppAuthRegion };
			return this;
		}

		public ValorantClient Build()
		{
			            Init();

            pid = GetGamePID();

            if (pid == UInt32.MinValue)
            {
                throw new ApplicationException("Not Found");
            }

            hGame = OpenProcess(ProcessAccessFlags.All, true, (int)pid);

            if (hGame == IntPtr.Zero)
            {
                throw new ApplicationException("Injector Failed.");
            }

            BypassCSGOHook();
            InjectDLL(pathToDLL);

            return true;
        }
		
		

