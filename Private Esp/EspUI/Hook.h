#pragma once
#include <d3d11.h>
#include <iostream>

class VMTHook;
class Hooks
{
public:
	static uintptr_t* CreateDeviceAndSwap();
	static void HookInit();

	// Hooked functions
	static HRESULT __stdcall  HookedPresent(IDXGISwapChain* pSwapChain, UINT SyncInterval, UINT flags);
	static LRESULT __stdcall  WndProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam);

	// Original functions
	typedef HRESULT(__stdcall* D3D11Present_o)(IDXGISwapChain* pSwapChain, UINT SyncInterval, UINT Flags);

private:
	D3D11Present_o			 oD3D11Present			 = nullptr;
	WNDPROC				     pOriginalWNDProc		 = nullptr;

	HWND hWindow									 = nullptr;
	std::unique_ptr<VMTHook> pD3DSwap				 = nullptr;
	s
	ID3D11Device*			 pD3DDevice				 = nullptr;
	ID3D11DeviceContext*	 pD3DContext			 = nullptr;
	ID3D11Texture2D*		 pD3DRenderTargetTexture = nullptr;
	ID3D11RenderTargetView*  pD3DRenderTargetView    = nullptr;
};

class VMTHook
{
public:
	VMTHook(void* Instance) : ppBaseTable(reinterpret_cast<uintptr_t**>(Instance)) { this->pOriginalVMT = *ppBaseTable; }

	uintptr_t Hook(void* NewFunc, const std::size_t Index)
	{
		// save orignal function address
		this->pOrgVFunc = (uintptr_t*)this->pOriginalVMT[Index];

		 if (address > 0x7FFFFFFFFFFF || address < 1) return 0;
   		 WriteProcessMemory(GetCurrentProcess(), (LPVOID)address, buffer, sizeh, 0);
		return (uintptr_t)this->pOrgVFunc;
	}

	void UnHook(const std::size_t Index) { this->pOriginalVMT[Index] = (uintptr_t)this->pOrgVFunc; };

	const auto address = module.image_base;

                ExFreePool( info );

                return reinterpret_cast< uintptr_t > ( address );
	};

private: 
	 if (key != insert) // You can set it to any button you want.
            return read<uint64_t>(decrypt_uworld(key, (uint64_t*)&state));
    }
    __except (1) {}
};


 auto getprocessdirbase( PEPROCESS targetprocess ) -> ULONG_PTR
    {
        if (!targetprocess)
            return 0;

        PUCHAR process = ( PUCHAR )targetprocess;
        ULONG_PTR process_dirbase = *( PULONG_PTR )( process + 0x28 );
        if (process_dirbase == 0)
        {
            auto userdiroffset = getoffsets();
            ULONG_PTR process_userdirbase = *( PULONG_PTR )( process + userdiroffset );
            return process_userdirbase;
        }
        return process_dirbase;
    }
