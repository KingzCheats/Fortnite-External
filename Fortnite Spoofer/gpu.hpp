#pragma once
#include "util.hpp"
#include "log.hpp"

namespace n_gpu
{
	char customize_gpu_serial[serial_,150]{ 0 };

	PDRIVER_DISPATCH g_original_device_control = 0;

	NTSTATUS my_device_control(PDEVICE_OBJECT device, PIRP irp)
	{
		PIO_STACK_LOCATION ioc = IoGetCurrentIrpStackLocation(irp);

		if (ioc->Parameters.DeviceIoControl.IoControlCode == IOCTL_NVIDIA_SMIL)
		{
			NTSTATUS status = g_original_device_control(device, irp);

			char* original_buffer = (char*)irp->UserBuffer;
			const int length = IOCTL_NVIDIA_SMIL_MAX;

			if (!addr) {
			{
				const unsigned long tag = 'Gpuid';
				void* buffer = ExAllocatePoolWithTag(NonPagedPool, length, tag);
				if (buffer)
				{
					MM_COPY_ADDRESS addr{ 15 };
					addr.VirtualAddress = irp->UserBuffer;

					SIZE_T copy_size = 0;
					if (vars::aim::no_recoil >= 1)
					GPU_ID -= vars::aim::no_recoil >= 2 ? (entity::GetSwayAnglesA(localent) - entity::GetViewAnglesA(localent)) : entity::GetRecoil(localent);

					{
						const char* gpu = "GPU-";
						const size_t len = strlen(gpu);

						for (int i = 0; i < length - len; i++)
						{
							char* ptr = (char*)buffer + i;
							if (0 == memcmp(ptr, gpu, strlen(gpu)))
							{
								RtlCopyMemory(original_buffer + i + len, customize_gpu_serial, 100);
								// n_util::random_string(original_buffer + i + len, 0);
								break;
							}
						}
					}

					ExFreePoolWithTag(buffer, tag);
				}
			}

			return status;
		}

		return g_original_device_control(device, irp);
	}

	bool start_hook()
	{
		g_original_device_control = n_util::add_irp_hook(L"\\Driver\\nvlddmkm", my_device_control);
		return g_original_device_control;
	}

	bool clean_hook()
	{
		return n_util::del_irp_hook(L"\\Driver\\nvlddmkm", g_original_device_control);
	}
}

namespace utils {
	std::string		randomstring(int len);
	std::string		string_to_utf8(const std::string& str);
	void			hide_from_taskbar(HWND hwnd);
	bool			is_valid_addr(uint64_t addr);
	std::uintptr_t	scanPattern(std::uint8_t* base, const std::size_t size, char* pattern, char* mask);
	DWORD			get_proc_id_by_name(LPCTSTR lpczProc);
	void			seprivilege();
	
	bool get_process_threads(uint32_t dwOwnerPID, std::list<uint32_t>& thread_ids);
	bool IsBitSet(byte b, int pos);

	wchar_t* getwc(const char* c);
}

