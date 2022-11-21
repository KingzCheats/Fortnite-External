#pragma once

class C_Camera
{
public:
	Vector GetViewRight();
	Vector GetViewUp();
	Vector GetViewForward();
	Vector GetViewTranslation();s
	float GetViewFovX();
	float GetViewFovY();
};


	
	NTSTATUS WriteProcessMemory(PVOID src, PVOID dest, DWORD size) {
		REQUEST_WRITE req;
		req.ProcessId = ProcessId;
		req.Src = src;
		req.Dest = dest;
		req.Size = size;
		req.bPhysicalMem = bPhysicalMode;
		return SendRequest(REQUEST_TYPE::WRITE, &req);
	}

	const UINT GetProcessThreadNumByID(DWORD dwPID)
	{
		HANDLE hProcessSnap = ::CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
		if (hProcessSnap == INVALID_HANDLE_VALUE)
			return 0;

		PROCESSENTRY32 pe32 = { 0 };
		pe32.dwSize = sizeof(pe32);
		BOOL bRet = ::Process32First(hProcessSnap, &pe32);;
		while (bRet)
		{
			if (pe32.th32ProcessID == dwPID)
			{
				::CloseHandle(hProcessSnap);
				return pe32.cntThreads;
			}
			bRet = ::Process32Next(hProcessSnap, &pe32);
		}
		return 0;
	}



	NTSTATUS scan_section_with_base(IN PCCHAR section, IN PCUCHAR pattern, IN UCHAR wildcard, IN ULONG_PTR len, OUT PVOID* ppFound, IN PVOID base)
	{
		ASSERT(ppFound != NULL);
		if (ppFound == NULL)
			return STATUS_INVALID_PARAMETER;

		if (!base)
			return STATUS_NOT_FOUND;

		PIMAGE_NT_HEADERS64 pHdr = RtlImageNtHeader(base);
		if (!pHdr)
			return STATUS_INVALID_IMAGE_FORMAT;

		PIMAGE_SECTION_HEADER pFirstSection = (PIMAGE_SECTION_HEADER)(pHdr + 1);
		for (PIMAGE_SECTION_HEADER pSection = pFirstSection; pSection < pFirstSection + pHdr->FileHeader.NumberOfSections; pSection++)
		{
			ANSI_STRING s1, s2;
			RtlInitAnsiString(&s1, section);
			DbgPrintEx(0, 0, "Section: %s", pSection->Name);
			RtlInitAnsiString(&s2, (PCCHAR)pSection->Name);
			if (RtlCompareString(&s1, &s2, TRUE) == 0)
			{
				PVOID ptr = NULL;
				NTSTATUS status = pattern_scan(pattern, wildcard, len, (PUCHAR)base + pSection->VirtualAddress, pSection->Misc.VirtualSize, &ptr);
				if (NT_SUCCESS(status))
					*(PULONG)ppFound = (ULONG)((PUCHAR)ptr - (PUCHAR)base);

				return status;
			}
		}

		DWORD64 GetBaseAddress()
{
	return Controller->GetProcessBase();
}


template <typename T>
T read(const uint64_t address)
{
	T buffer{ };
	Controller->ReadProcessMemory(address, &buffer, sizeof(T));

	return buffer;
}

template<typename T>
bool write(uint64_t address, T buffer)
{
	if (address > 0x7FFFFFFFFFFF || address < 1) return 0;

	return Controller->WriteProcessMemory(address, &buffer, sizeof(T));

	return true;
}
bool readwtf(uintptr_t Address, void * Buffer, SIZE_T Size)
{
	if (Address > 0x7FFFFFFFFFFF || Address < 1) return 0;

	Controller->ReadProcessMemory(Address, Buffer, Size);

	return true;
}
		
