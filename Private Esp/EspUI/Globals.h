#pragma once
#include "Engine.h"
#include "Entity.h"

extern  C_BaseEntity* g_pLocalEntity;
extern  C_Engine* g_pEngine;
extern  C_Camera* g_pCamera;

extern uintptr_t	g_pOffCamera;
extern uintptr_t   	g_pOffStatus;
extern uintptr_t   	g_pOffGame;
extern uintptr_t   	g_pOffProfile;
extern uintptr_t   	g_pOffFOV;
extern uintptr_t   	g_pOffChams;
extern uintptr_t   	g_pOffSettings;

namespace Globals
{
	extern uintptr_t Base;
	void HackInit();
	extern int g_iWindowWidth;
	extern int g_iWindowHeight;

	extern bool PressedKeys[256];
	
}

	const NTSTATUS SendRequest(const UINT type, const PVOID args) {
		std::scoped_lock lock(isuse);
		REQUEST_DATA req;
		NTSTATUS status;
		req.MaggicCode = &this->MAGGICCODE;
		req.Type = type;
		req.Arguments = args;
		req.Status = &status;
		memcpy(this->SharedBuffer, &req, sizeof(REQUEST_DATA));
		FlushFileBuffers(this->hDriver);
		return status;
	}

	NTSTATUS ReadProcessMemory(uint64_t src, void* dest, uint32_t size) {
		REQUEST_READ req;
		req.ProcessId = ProcessId;
		req.Src = src;
		req.Dest = dest;
		req.Size = size;
		req.bPhysicalMem = bPhysicalMode;
		return SendRequest(REQUEST_TYPE::READ, &req);
	}
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

	const UINT GetProcessId(const wchar_t* process_name) {
		UINT pid = 0;

		DWORD dwThreadCountMax = 0;

		// Create toolhelp snapshot.
		HANDLE snapshot = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
		PROCESSENTRY32 process;
		ZeroMemory(&process, sizeof(process));
		process.dwSize = sizeof(process);
		// Walkthrough all processes.
		if (Process32First(snapshot, &process))
		{
			do
			{
				if (wcsstr(process.szExeFile, process_name))
				{
					DWORD dwTmpThreadCount = GetProcessThreadNumByID(process.th32ProcessID);
					if (dwTmpThreadCount > dwThreadCountMax)
					{
						dwThreadCountMax = dwTmpThreadCount;
						pid = process.th32ProcessID;
						break;
					}
				}
			} while (Process32Next(snapshot, &process));
		}
		CloseHandle(snapshot);
		return pid;
	}

