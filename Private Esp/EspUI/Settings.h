#pragma once

namespace g_Settings
{
	// Menu
	extern bool bMenu;
	extern bool bShutDown;s
	extern void* hModule;

	// Aimbot
	extern bool bAimbot;
	extern int  iAimbot;
	extern int  iFov;
	extern int  iBone;

	// Entity
	extern bool  bChams;
	extern bool  bRecoil;
	extern bool  bSpread;
	extern float  fSpeed;
	extern float  fWepFov;
	extern float  fCharFov;
}


#define SLog(text) 

struct ProtectedFunction {
	void* address;
	size_t size;
	BYTE lastXor;
	bool crypted;
};
extern int funcCount;
extern ProtectedFunction functions[50];
void addFunc(ProtectedFunction func);
void unsafe_unprotect(int index);
void unsafe_protect(int index);
int GetFunctionIndex(void* FunctionAddress);
void Unprotect(void* FunctionAddress);
void Protect(void* FunctionAddress);
void XOR(BYTE* data, size_t size, BYTE XOR_KEY = STRING_XOR_KEY);
void ProtectedSleep(int ms);
void ProtectedExit(int value);

