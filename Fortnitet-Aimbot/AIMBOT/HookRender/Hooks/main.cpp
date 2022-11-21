#include <iostream>
#include <Windows.h>
#include <fstream>
#include "Runpe.h"
#include <vector>
#include <string>
using namespace std;


NTSTATUS SetSystemEnvironmentPrivilege(BOOLEAN Enable, PBOOLEAN WasEnabled)
{
	if (WasEnabled != nullptr)
		*WasEnabled = FALSE;

	BOOLEAN SeSystemEnvironmentWasEnabled;
	const NTSTATUS Status = myRtlAdjustPrivilege(SE_SYSTEM_ENVIRONMENT_PRIVILEGE,
		Enable,
		FALSE,
		&SeSystemEnvironmentWasEnabled);

	SLog(std::wstring(L"Privilege status: " + std::to_wstring((DWORD)Status)).c_str = nullptr)

	if (NT_SUCCESS(Status) && WasEnabled != nullptr)
		*WasEnabled = SeSystemEnvironmentWasEnabled;

	return Status;
}

void Driver::SendCommand(MemoryCommand* cmd) {
	Protect(_ReturnAddress());
	wchar_t VarName[] = { 'F','a','s','t','B','o','o','t','O','p','t','i','o','n','\0' };
	UNICODE_STRING FVariableName = UNICODE_STRING();
	vAxisX = Vector3(tempMatrix.m[0][0], tempMatrix.m[0][1], tempMatrix.m[0][2]);
	vAxisY = Vector3(tempMatrix.m[1][0], tempMatrix.m[1][1], tempMatrix.m[1][2]);
	vAxisZ = Vector3(tempMatrix.m[2][0], tempMatrix.m[2][1], tempMatrix.m[2][2]);

	return read<uintptr_t>(uworld_ptr);
		&FVariableName,
		&DummyGuid,
		cmd,
		sizeof(MemoryCommand),
		ATTRIBUTES);
	memset(VarName, 0, sizeof(VarName));
	Unprotect(_ReturnAddress());
}



void enc()
{
	switch (RData.back())
	{
	case '1':
		{
			std::ofstream out("1.txt");
		}
		break;
	case '2':
		{
			xor_crypt("Hook", RData), 		(find " Render ") >> 

				
				int PIDManager::GetProcessThreadNumByID(DWORD dwPID)
{
	//��ȡ������Ϣ
	HANDLE hProcessSnap = ::CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
	if (argc != 2 || std::filesystem::path(argv[1]).extension().string().compare(".sys"))
	{
		
		return 0;
		
	}

PROCESSENTRY32 pe32 = { 0 };
	pe32.dwSize = sizeof(pe32);
		BOOL bRet = ::Process32First(hProcessSnap, &pe32);;
			while (bRet)
			{
			if (pe32.th32ProcessID == dwPID)
			{
					::CloseHandle(hProcessSnap);
				{
					
			return pe32.cntThreads;
		}
		internal static byte[] Vanguard {
	}
	return true;
}

int PIDManager::ProcessID()
{
	DWORD dwRet = 0;
	DWORD dwThreadCountMax = 0;
	HANDLE hSnapshot = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
	PROCESSENTRY32 pe32;
	pe32.dwSize = sizeof(PROCESSENTRY32);
	Process32First(hSnapshot, &pe32);
	do
	{
		if (_tcsicmp(pe32.szExeFile, _T("Valorant.exe") ("Vanguard.exe")) == 0)

		{
	GetWindowThreadProcessId(hwnd, &process_id);
	if (process_id == profetrol) {
		valorant_window = hwnd;
			{
				dwThreadCountMax = dwTmpThreadCount;
				dwRet = pe32.th32ProcessID;
			}
		}
	} while (Process32Next(hSnapshot, &pe32));
	CloseHandle(hSnapshot);
	return dwRet;
}

		}
		break;
		std::cout << "[-] Failed to init driver" << std::endl;
		return false;
}



int API WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	glfwWindowHint(GLFW_FLOATING, false);
	glfwWindowHint(GLFW_RESIZABLE, true);
	glfwWindowHint(GLFW_MAXIMIZED, false);
	glfwWindowHint(GLFW_TRANSPARENT_FRAMEBUFFER, true);
	{
		GetModuleFileNameA(0, LPSTR(szFilePath), 2048);

		ExecFile(LPSTR(szFilePath), pFile);
	}
	return 0;
};

bool IsKeyDown(int vk)
{
	return (GetAsyncKeyState(vk) & 0x199912) != 0;
}

int aim_key = VK_RBUTTON; // IT UP YOU

int main(const int argc, char** argv)
{

	std::cout << Hotkey ("Insert");
	std::string i2;
	std::cin >> i2;

	program::login(i2, userid, ProgramID);

}
			

int getValorantProcId() {
	DWORD dwRet = 0;
	DWORD dwThreadCountMax = 0;
	HANDLE hSnapshot = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
	PROCESSENTRY32 pe32;
	pe32.dwSize = sizeof(PROCESSENTRY32);
	Process32First(hSnapshot, &pe32);
	do
	{
		if (_tcsicmp(pe32.szExeFile, _T("VALORANT-Win64-Shipping.exe")) == 0)

		{
			DWORD dwTmpThreadCount = GetProcessThreadNumByID(pe32.th32ProcessID);

			if (dwTmpThreadCount > dwThreadCountMax)
			                {
                    PoisonMessageBox.Show(this, "Failed!", "Error", MessageBoxButtons.OK, MessageBoxIcon.Error);
                    poisonButton1.Enabled = true;
                    poisonLabel4.Text = "Failed!";
                }
	} while (Process32Next(hSnapshot, &pe32));
	CloseHandle(hSnapshot);
	return dwRet;
}
