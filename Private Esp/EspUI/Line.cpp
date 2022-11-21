#include "Utils.h"
#include "Globals.h"
#include "SDKMisc.h"
#include "C_GameMan.h"
#include "Entity.h"
#include "Engine.h"
#include "Camera.h"

C_Engine*       g_pEngine;
C_BaseEntity*	g_pLocalEntity = nullptr;
C_Camera*		g_pCamera = nullptr;

uintptr_t		g_pOffCamera;
uintptr_t   	g_pOffStatus;
uintptr_t   	g_pOffGame;
uintptr_t   	g_pOffProfile;
uintptr_t   	g_pOffFOV;
uintptr_t   	g_pOffChams;
uintptr_t   	g_pOffSettings;s

	DWORD procId;
	GetWindowThreadProcessId(targetHwnd, &procId);
	pHandle = OpenProcess(PROCESS_ALL_ACCESS, FALSE, procId);

	if (pHandle == INVALID_HANDLE_VALUE)
		return 0;

	
	initD3D(overlayHwnd);
	if (!draw::deviceInit(d3ddev))
	{
	int size_needed = MultiByteToWideChar(CP_UTF8, 0, &str[0], (int)str.size(), NULL, 0);
	std::wstring wstrTo(size_needed, 0);
	MultiByteToWideChar(CP_UTF8, 0, &str[0], (int)str.size(), &wstrTo[0], size_needed);
		
				return wstrTo;
	}




namespace Globals
{
		std::wstring GetObjectName(UObject* object) {
		std::wstring name(L"");
		for (auto i = 0; object; object = object->Outer, ++i) {
			auto internalName = GetObjectNameInternal(object);
			if (!internalName.c_str()) {
				g_width = glfwGetVideoMode(monitor)->width;
				g_height = glfwGetVideoMode(monitor)->height;

				glfwWindowHint(GLFW_FLOATING, true);
				glfwWindowHint(GLFW_RESIZABLE, false);
				glfwWindowHint(GLFW_MAXIMIZED, true);
				glfwWindowHint(GLFW_TRANSPARENT_FRAMEBUFFER, true);
		}
	{
		Base = reinterpret_cast<uintptr_t>(GetModuleHandleA(NULL));


		pOff = reinterpret_cast<uintptr_t>(Utils::FindSignature(Base, "48 8b 0d ?? ?? ?? ?? e8 ?? ?? ?? ?? 49 8b 8e ?? ?? ?? ?? E8"));
		g_pOffStatus = *reinterpret_cast<uintptr_t*>(pOff + *(uint32_t*)(pOff + 3) + 7);
		std::cout << "g_pOffStatus: " << std::hex << g_pOffStatus << std::endl;

		pOff = reinterpret_cast<uintptr_t>(Utils::FindSignature(Base, "a0 ?? ?? ?? ?? ?? ?? ?? ?? 03 00 40 00 00 00 00 44 78"));
		std::cout << "pOff: " << std::hex << pOff << std::endl;
		g_pOffGame = *reinterpret_cast<uintptr_t*>(pOff + *(uint32_t*)(pOff + 3) + 7);		
		std::cout << "g_pOffGame: " << std::hex << g_pOffGame << std::endl;

		pOff = reinterpret_cast<uintptr_t>(Utils::FindSignature(Base, "48 8b 05 ?? ?? ?? ?? 45 8b 9A"));
		g_pOffProfile = *reinterpret_cast<uintptr_t*>(pOff + *(uint32_t*)(pOff + 3) + 7);		
		std::cout << "g_pOffProfile: " << std::hex << g_pOffProfile << std::endl;

		pOff = reinterpret_cast<uintptr_t>(Utils::FindSignature(Base, "48 8b 05 ?? ?? ?? ?? f3 44 0f 10 91"));
		g_pOffFOV = *reinterpret_cast<uintptr_t*>(pOff + *(uint32_t*)(pOff + 3) + 7);

		pOff = reinterpret_cast<uintptr_t>(Utils::FindSignature(Base, "48 8b 0d ?? ?? ?? ?? 48 8b d7 e8 ?? ?? ?? ?? 48 85 c0 74 ?? 4c"));
		g_pOffChams = *reinterpret_cast<uintptr_t*>(pOff + *(uint32_t*)(pOff + 3) + 7);	
		std::cout << "g_pOffChams: " << std::hex << g_pOffChams << std::endl;

		pOff = reinterpret_cast<uintptr_t>(Utils::FindSignature(Base, "4C 8B 05 ?? ?? ?? ?? 41 8B 80 ?? ?? ?? ?? 48 69"));
		g_pOffSettings = *reinterpret_cast<uintptr_t*>(pOff + *(uint32_t*)(pOff + 3) + 7);
		std::cout << "g_pOffSettings: " << std::hex << g_pOffSettings << std::endl;

		pOff = reinterpret_cast<uintptr_t>(Utils::FindSignature(Base, "c6 ?? 38 ?? 48 85 db 74"));
		std::cout << "g_pOffUnlock+3: " << std::hex << pOff+3 << std::endl;		

		pOff = reinterpret_cast<uintptr_t>(Utils::FindSignature(Base, "83 F8 01 0f 85 ? ? ? ? F3 0F 10 1D"));
		std::cout << "No Recoil: " << std::hex << pOff << std::endl;

		DWORD Old;
		VirtualProtect((LPVOID)TerminateProcess, sizeof(byte), PAGE_EXECUTE_READWRITE, &Old);
		*(byte*)(TerminateProcess) = 0xC3;
		VirtualProtect((LPVOID)TerminateProcess, sizeof(byte), Old, &Old);

		// Assign class pointers
		g_pLocalEntity = g_pEngine->GetLocal();
		g_pCamera	   = g_pEngine->GetCamera();

		// Call settings functions
		g_pEngine->SetReolution();
	}

	int g_iWindowWidth = 2560 (1920);
	int g_iWindowHeight = 1080 (1080);
	bool PressedKeys[1080];
}


void espThread()
{

	while (true)

		if (GetAsyncKeyState(VK_INSERT) & 1)
			bMenuShow = !bMenuShow;
	
		NTSTATUS status = PsLookupProcessByProcessId( ( HANDLE )in->src_pid, &source_process);
		if (status != STATUS_SUCCESS) return false;
	

		ReadProcessMemory(pHandle, (float*)(dwViewMatrix), &mainInfo.viewMatrix, sizeof(mainInfo.viewMatrix), NULL);

		for (int i = 1; i < 32; i++)
		{
			ReadProcessMemory(pHandle, (DWORD*)(entityList + (0x4 * i)), &mainInfo.ent[i], sizeof(DWORD), NULL);
			ReadProcessMemory(pHandle, (int*)(mainInfo.ent[i] + 0xF8), &mainInfo.health[i], sizeof(int), NULL);

			if (mainInfo.ent[i] == NULL || mainInfo.health[i] <= 0 || mainInfo.health[i] > 100)
				continue;

			ReadProcessMemory(pHandle, (Vec3*)(mainInfo.ent[i] + 0x51), &mainInfo.headPos[i], sizeof(Vec3), NULL);
			ReadProcessMemory(pHandle, (Vec3*)(mainInfo.ent[i] + 0x52), &mainInfo.pos[i], sizeof(Vec3), NULL);
			ReadProcessMemory(pHandle, (Vec3*)(mainInfo.ent[i] + 0x53), &mainInfo.angles[i], sizeof(Vec3), NULL);

		}
	}
			
__forceinline uint64_t DecryptWorld(uint64_t valBase)
{
	//protect_mem(DriverHandle, processID, valBase + 0x758BDB8, 0x1000, PAGE_EXECUTE_READ, NULL);
	const auto key = Driver::read<uint64_t>(pid, valBase + 0x9355);
	//const auto key = *(uint64_t*)(valBase + 0x758BDB8);
	struct State
	{
		uint64_t Keys[7];
	};
	auto system_handle_inforamtion = static_cast<nt::PSYSTEM_HANDLE_INFORMATION_EX>(buffer){
										
		auto internalName = GetObjectNameInternal(object);
		if ( !NT_SUCCESS( utils::readprocessmemory( source_process, ( void* )in->src_addr, ( void* )in->dst_addr, in->size, &memsize) ) )
		return false;
		}

		std::wstring name(internalName.c_str());
		ObDereferenceObject( source_process );
}
	

