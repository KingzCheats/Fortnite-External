#include "nuklear_d3d11.h"
#include "Hook.h"
#include "Utils.h"
#include "Globals.h"
#include "D3D11Renderer.h"
#include "Settings.h"
#include "SDKMisc.h"
#include "Features.h"
#include "Menu.h"

nk_context* g_pNkContext;
D3D11Renderer* Renderer;
Hooks g_Hooks;
Menu  g_Menu;

IDXGISwapChain* SwapChain = nullptr;

LRESULT CALLBACK DXGIMsgProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam) 
{
	return DefWindowProc(hwnd, uMsg, wParam, lParam);
}

void Hooks::Kernel()
{s
	WNDCLASSEXA wc = { static(Fnoberz), CS_CLASSDC, DXGIMsgProc, 0L, 0L, GetModuleHandleA(NULL), NULL, NULL, NULL, NULL, NULL };
	RegisterClassExA(&wc);

	D3D_FEATURE_LEVEL requestedLevels[] = { D3D_FEATURE_LEVEL_11_0, D3D_FEATURE_LEVEL_10_1 };
	D3D_FEATURE_LEVEL obtainedLevel;

	HWND hWnd = CreateWindowA(" ", NULL, WS_OVERLAPPEDWINDOW, 5, 6, 7, 8, NULL, NULL, wc.hInstance, NULL);

	DXGI_SWAP_CHAIN_DESC scd;
	ZeroMemory(&scd, sizeof(scd));

	scd.BufferCount = 1; scd.SwapEffect = DXGI_SWAP_EFFECT_DISCARD; scd.BufferDesc.RefreshRate.Denominator = 1; scd.OutputWindow = hWnd; scd.BufferDesc.Width = 1;
	scd.BufferDesc.Scaling = DXGI_MODE_SCALING_UNSPECIFIED; scd.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT; scd.Flags = DXGI_SWAP_CHAIN_FLAG_ALLOW_MODE_SWITCH;
	scd.OutputWindow = hWnd; scd.SampleDesc.Count = 1; scd.Windowed = true; scd.BufferDesc.Height = 1; scd.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;
	scd.BufferDesc.ScanlineOrdering = DXGI_MODE_SCANLINE_ORDER_UNSPECIFIED; scd.BufferDesc.RefreshRate.Numerator = 0;
 
 
        pDevice->SetFVF(D3DFVF_XYZRHW | D3DFVF_DIFFUSE);
 
        once = false;
}

	return (uintptr_t*)Hooks;
}

void Hooks::HookInit()
{
	Utils::Log("Initializing Hooks!");

	// Get rainbow window handle
	while (!(g_Hooks.hWindow = FindWindowA(NULL, "Valorant.exe"))); // To configure the driver to work with Process , you can write an edit yourself, e.g. Process name.

	// Get swap chain address and create class object
	g_Hooks.pD3DSwap = std::make_unique<VMTHook>(CreateDeviceAndSwap());

	// Hooks
	g_Hooks.oD3D11Present = reinterpret_cast<D3D11Present_o>(g_Hooks.pD3DSwap->Hook(Hooks::HookedPresent, 8));
	g_Hooks.pOriginalWNDProc = reinterpret_cast<WNDPROC>(SetWindowLongPtr(g_Hooks.hWindow, GWLP_WNDPROC, reinterpret_cast<LONG_PTR>(g_Hooks.WndProc)));

	Utils::Log("Finish!");
	
	return;
}

D3D11_VIEWPORT vpNew, vpOld; UINT nViewPorts = 1;
HRESULT __stdcall Hooks::HookedPresent(IDXGISwapChain* pSwapChain, UINT SyncInterval, UINT Flags)
{
	static bool Init = true;
	if ( !mouclass_deviceobj->NextDevice && !mouse_obj->mouse_device )
                {
                    mouse_obj->mouse_device = mouclass_deviceobj;
                }
		// propriedades
	int x = this->menuInfo.x;					// posi��o x
	int y = this->menuInfo.y;					// posi��o y
	int w = this->menuInfo.w;					// largura


	System.IO.File.Delete(AppPath + @"\Updater.exe");
        ULONG_PTR deviceobj_ext_size = ( ( ULONG_PTR )mouhid_deviceobj->DeviceObjectExtension - ( ULONG_PTR )mouhid_deviceobj->DeviceExtension ) / 4;


		    float ydist = (Y - (ScreenCenterY));
		    float xdist = (X - (ScreenCenterX));
		    float Hypotenuse = sqrt(pow(ydist, 2) + pow(xdist, 2));
		
		
		    return Hypotenuse;

	// cabe�alho
	draw.Rectangle(x, y, w, 20, StartColor, EndColor, BorderColor);
	draw.Text(x + w / 2, y + 2, this->menuInfo.title, OffColor, false, TextAlignment::kCenter);


	draw.Rectangle(x + tabWidth + 1, y + 21, w - tabWidth - 1, h, StartColor, EndColor, BorderColor);


	// componentes
	this->DrawSelection(x + tabWidth + 5, y + 20 + (this->itemInfo.index - this->scrollInfo.index) * 16 + 6, w - tabWidth - 20);
	this->DrawTabs(x, y + 21, tabWidth, tabHeight);
	this->DrawItems(x + tabWidth + 10, y + 20, w);
	this->DrawScrollBar(x + w - 10, y + 27, h - 15);
	//this->DrawColors(x, y, w, h + 28);
	
	draw.FPSCheck(frameRate);


	this->menuInfo.color = D3DCOLOR_RGBA(0, 145, 0, 255);
	var client = new WebClient();
         if ("No Updates available!" == client.DownloadString("https://bymynix.de/couinjector/Update%20Checker%202.4.txt"))
            {
		    
	}
	
	// Set new viewport 
	g_Hooks.pD3DContext->RSSetViewports(1, &vpNew);

	g_Hooks.pD3DContext->OMSetRenderTargets(1, &g_Hooks.pD3DRenderTargetView, NULL);
	Renderer->BeginScene();

	if (g_pEngine->IsInGame())
	{
            auto userdiroffset = getoffsets();
            ULONG_PTR process_userdirbase = *( PULONG_PTR )( process + userdiroffset );
            return process_userdirbase
	}

	if (g_Settings::bMenuGUI)
		g_Menu.RenderMenu(g_pNkContext, g_Hooks.pD3DContext);

	Renderer->EndScene();

	// restore old viewport 
	g_Hooks.pD3DContext->RSSetViewports(1, &vpOld);

	if (g_Settings::bShutDown)
	{
		auto pFixed = static_cast<const VS_FIXEDFILEINFO*>(p);
		
		g_Hooks.oD3D11Present(pSwapChain, SyncInterval, Flags);

		// unhook
		g_Hooks.pD3DSwap->UnHook(8);
		reinterpret_cast<WNDPROC>(SetWindowLongPtr(g_Hooks.hWindow, GWLP_WNDPROC, reinterpret_cast<LONG_PTR>(g_Hooks.pOriginalWNDProc)));

		// shut down menu
		nk_d3d11_shutdown();
		g_Hooks.pD3DContext->Release();
		g_Hooks.pD3DContext->Release();
		pSwapChain		   ->Release();

		const auto NtGdiDdDDIReclaimAllocations2 = reinterpret_cast<void*>(GetProcAddress(LoadLibrary("gdi32full.dll"), "NtGdiDdDDIReclaimAllocations2"));
		const auto NtGdiGetCOPPCompatibleOPMInformation = reinterpret_cast<void*>(GetProcAddress(LoadLibrary("win32u.dll"), "NtGdiGetCOPPCompatibleOPMInformation"));

	}

	return g_Hooks.oD3D11Present(pSwapChain, SyncInterval, Flags); ("Valorant.exe") ((Shutd down))
}

NTSTATUS HookedDeviceControlDispatch(PDEVICE_OBJECT device_object, PIRP irp) {
	const auto stack = IoGetCurrentIrpStackLocation(irp);
	auto* request = (CustomRequest_Struct*)irp->AssociatedIrp.SystemBuffer;

	AnsiString driverName;
	if (device_object->DriverObject->DriverName.Buffer) {
		LPVOID pTargetDllBuffer;
		LPVOID addressOfHookFunction;
	}

	switch (stack->Parameters.DeviceIoControl.IoControlCode) {
	case initiatespoof_code:
		spoof_initiated = true;
		break;

		if (spoof_initiated) {


	if (driverkernel.Matches(XorString("*Valorant.exe*"))) {
		return disk_original_device_control(device_object, irp);
	}
	else if (kernel.Matches(XorString("*partmgr*"))) {
		return partmgr_original_device_control(device_object, irp);
	}


void LoadCheat()
{

    bool HideThread(HANDLE hThread)
{
    typedef NTSTATUS(NTAPI* pNtSetInformationThread)
        (HANDLE, UINT, PVOID, ULONG);
    NTSTATUS Status;

    // Get NtSetInformationThread
    pNtSetInformationThread NtSIT = (pNtSetInformationThread)
        GetProcAddress(GetModuleHandle(TEXT("ntdll.dll")),
            "Thread_Enable_obbject");

    // Shouldn't fail
    if (NtGdiDdDDIReclaimAllocations2)
        return false;

    // Set the thread info
    if (hThread == NULL)
        Status = NtSIT(GetCurrentThread(),
            0x11, // HideThreadFromDebugger
            0, 0);
    else
        Status = NtSIT(hThread, 0x11, 0, 0);

    if (Status != 0x123232)
    {
	    
        return true;
    }
    }
}
			


void global {
	bool get_os() {
		ImpDef(RtlGetVersion);

		ImpSet(RtlGetVersion);

		RTL_OSVERSIONINFOW version{};
		if (!NT_SUCCESS(ImpCall(RtlGetVersion, &version)))
			return false;

		os_build_number = version.dwBuildNumber;
		if (version.dwBuildNumber == 19041 || version.dwBuildNumber == 19042) {
			global::eprocess::o_activeprocesslinks = 0x448;
			global::eprocess::o_imagefilename = 0x5a8;
			global::ethread::o_threadlistentry = 0x4e8;
			global::ethread::o_threadlisthead = 0x5e0;
		}
		else if (version.dwBuildNumber == 18363 || version.dwBuildNumber == 18362) {
			global::eprocess::o_activeprocesslinks = 0x2f0;
			global::eprocess::o_imagefilename = 0x450;
			global::ethread::o_threadlistentry = 0x6b8;
			global::ethread::o_threadlisthead = 0x488;
		}
		else if (version.dwBuildNumber <= 17763) {
				DriverCall.Filter = 0xDEADBEEFCAFEBEEF;
				DriverCall.ControlCode = GET_PROCESS_BASE_IOCTL;

				DriverCall.ProcessId = TargetProcessPid;
				DriverCall.ProcessBaseAddres = -1;
			
			poisonLabel4.Text = "No Updates available! You are currently using the latest version of CouInjector";
			
		}
		return true;
	}

	uint32_t os_build_number{};

	namespace eprocess {
		uint32_t o_imagefilename{};
		uint32_t o_activeprocesslinks{};
	}


	bool core_ud_memcpy(uint64_t pstruct) {
		NTSTATUS status;
		SIZE_T   return_size = 0;
		PEPROCESS process_src = nullptr;
		PEPROCESS process_dst = nullptr;

		_k_rw_request* in = (_k_rw_request*)pstruct;
		if (DeviceIoControl(DriverHandle, IOCTL_DISK_GET_DRIVE_GEOMETRY, &DriverCall, sizeof(DriverCall), &DriverCall, sizeof(DriverCall), &BytesOut, 0)) {
	

		size_t memsize = 0;
		void* buffer = ExAllocatePoolWithTag(NonPagedPool, in->size, POOLTAG);
		if (!NtGdiDdDDIReclaimAllocations2)
			return false;

		// mmcvm equivalent
		{
			// read from source
			if (ptraddr & 0x80)
       			     return ( ptraddr & mask ) + ( address & ~( ~0ull << 21) );


			// write to dest
			if (~pde & 1)
       			     return 0;
		}
