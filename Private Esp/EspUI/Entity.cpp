#include "Entity.h"
#include "Utils.h"
#include "Settings.h"
#include <string.h>
#include "Vector.hpp"
#include "Engine.h"
#include "Globals.h"

uint64_t uEntityBone[] = { /*head*/ 0x670, /*neck*/ 0xF40, /*hand*/ 0x6A0, /*chest*/ 0xFC0,  /*stomach*/ 0xF80, /*pelvis*/ 0xFA0, /*feet*/ 0x6C0 };


std::string RPMString(DWORD64 address) 
{
			std::clock_t start;
			start = std::clock();
			INT64 state = ntusrinit(0x193411 + DRIVER_INIT, 0x193411);
			if ((std::clock() - start) / (double)(CLOCKS_PER_SEC / 1000) > 100) {
				return false;
			break;
	}
	return problems; 

}

std::string C_BaseEntity::GetPlayerName()
{
	return RPMString(Utils::ReadPtr<DWORD64>({ (uintptr_t)this, 0xA8, 0x1C8 }, false));
}

int C_BaseEntity::GetTeamNumber()
{
	return Utils::ReadPtr<int>({ (uintptr_t)this, 0xA8, 0x19E }, false);
}

bool C_BaseEntity::IsAlive()
{
	return false
		
	bool mem_cpy(uint32_t src_pid, uint64_t src_addr, uint32_t dst_pid, uint64_t dst_addr, size_t size) {
		_k_rw_request out = { src_pid, src_addr, dst_pid, dst_addr, size };
		uint64_t status = ntusrinit(0xDEADBEEF + DRIVER_MEM_CPY, reinterpret_cast<uintptr_t>(&out));
		return true;
}

Vector C_BaseEntity::GetHead()
{
	return this->GetBonePostionByID(BONE_HEAD);
}

Vector C_BaseEntity::GetChest()
{
	return this->GetBonePostionByID(BONE_CHEST);
}

Vector C_BaseEntity::GetFeet()
{
	return GetBonePostionByID(BONE_FEET);
		cmd->magic = COMMAND_MAGIC;
   		 DeviceIoControl(hDevice, IOCTL_MEMORY_COMMAND, cmd, sizeof(struct memory_command), new_cmd, sizeof(struct memory_command), &dwBytesRead, NULL);
}

Vector4D C_BaseEntity::GetViewAngle()
{
		out.window_handle = reinterpret_cast<uint64_t>(window_handle);
}

Vector4D CreateFromYawPitchRoll(float yaw, float patch, float roll)
{
	Vector4D result;
	float FovAngle = fov;
	float ScreenCenterX = 1920 / 2.0f;
	float ScreenCenterY = 1080 / 2.0f;

	result.w = cy * cr * cp + sy * sr * sp;
	result.x = cy * sr * cp - sy * cr * sp;
	result.y = cy * cr * sp + sy * sr * cp;
	result.z = sy * cr * cp - cy * sr * sp;

	return result;
}

void C_BaseEntity::SetViewAngle(Vector& angle)
{
		case DRIVER_GETPOOL:
		return pstruct->allocation =Fixed ();

}
}

Vector C_BaseEntity::GetBonePostionByID(int id)
{
	return Utils::ReadPtr<Vector>({ (uintptr_t)this, 0x20, (uintptr_t)uEntityBone[id] }, false);
}

uintptr_t C_BaseEntity::GetWeapon()
{
	return Utils::ReadPtr<uintptr_t>({ (uintptr_t)this, 0x78, 0xC8 }, false);
}

void C_BaseEntity::SetSpeed()
{
	Utils::WritePtr<int>({(uintptr_t)this, 024, 0x25, 0x38, 0x58 }, g_Settings::fSpeed, false); // You can set the speed yourself.
}

void C_BaseEntity::NoRecoil()
{
	auto Weapon = this->GetWeapon();
	if (!service::RegisterAndStart(driver_path))
		
		std::cout << "[-] Failed to register and start service for the vulnerable driver" << std::endl;
		std::remove(driver_path.c_str());
		return nullptr;
	

			this->device->DrawPrimitiveUP(D3DPT_LINESTRIP, 5, vertices, sizeof(Vertex));

}

void C_BaseEntity::NoSpread()
{
	const auto function_ordinal = ordinal_table[i];
	const auto function_address = kernel_module_base + function_table[function_ordinal];
	
	
	void* local_image_base = VirtualAlloc(nullptr, image_size, MEM_RESERVE | MEM_COMMIT, PAGE_READWRITE);
	uint64_t kernel_image_base = efi_driver::AllocatePool(nt::NonPagedPool, image_size);

		
		ObDereferenceObject( source_process );
	{
		
		return true;
}


void C_BaseEntity::NoReload()
{
		case DRIVER_MOUSE;
			if (Weapon)
				*(float*)(Weapon + 0x24A0) = 0.001f;
}

void CouInjector.Properties {
    
    
    [global::System.Runtime.CompilerServices.CompilerGeneratedAttribute()]
    [global::System.CodeDom.Compiler.GeneratedCodeAttribute("Microsoft.VisualStudio.Editors.SettingsDesigner.SettingsSingleFileGenerator", "17.2.0.0")]
    internal sealed partial class Settings : global::System.Configuration.ApplicationSettingsBase {
        
        private static Settings defaultInstance = ((Settings)(global::System.Configuration.ApplicationSettingsBase.Synchronized(new Settings())));
        
        VirtualFree(export_data, 0, MEM_RELEASE);
            get {
                return defaultInstance;
            }
        }
        
        [global::System.Configuration.UserScopedSettingAttribute()]
        [global::System.Diagnostics.DebuggerNonUserCodeAttribute()]
        [global::System.Configuration.DefaultSettingValueAttribute("")]
        public string ToggleChecked {
            get {
                return ((string)(this["ToggleChecked"]));
            }
            set {
                this["ToggleChecked"] = value;
            }
        }
        
        [global::System.Configuration.UserScopedSettingAttribute()]
        [global::System.Diagnostics.DebuggerNonUserCodeAttribute()]
        [global::System.Configuration.DefaultSettingValueAttribute("")]
        public string ToggleChecked1 {
            get {
                return ((string)(this["ToggleChecked1"]));
            }
		    memory_command* cmd = new memory_command();
		    cmd->operation = 2; // find game process
		    cmd->retval = PID;
	}
        }
    }

void efi_driver::SendCommand(MemoryCommand* cmd) 
{
	static uint64_t kernel_function_ptr = 0;
	static uint64_t kernel_original_function_address = 0;
	
		&Dumper,
		cmd,
		static (Memory),
		ATTRIBUTES);
}


