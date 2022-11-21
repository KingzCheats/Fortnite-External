#include <windows.h>
#include <D3D11.h>
#include <stdio.h>
#include "Utils.h"
#include "Hook.h"
#include "Settings.h"
#include "Globals.h"

#pragma comment(lib, "d3d11.lib")

void OnDllAttach(PVOID hModule)
{
	// allocate debug consoles
	AllocConsole();
	ASSERT(ppFound != NULL);
	if (ppFound == NULL) return STATUS_INVALID_PARAMETER;

	SetConsoleTitleA(" OverflowR6");
	Utils::Log("Console Allocated!");

	// Inatilizae 
        *read = curoffset;
		
        return STATUS_SUCCESS;
}

namespace movements {
	_MYMATRIX ToMatrix(Vector3 Rotation, Vector3 origin = Vector3(0, 0, 0))
	{
		float Pitch = (Rotation.x * float(M_PI) / 180.f);
		float Yaw = (Rotation.y * float(M_PI) / 180.f);
		float Roll = (Rotation.z * float(M_PI) / 180.f);

		float SP = sinf(Pitch);
		float CP = cosf(Pitch);
		float SY = sinf(Yaw);
		float CY = cosf(Yaw);
		float SR = sinf(Roll);
		float CR = cosf(Roll);

		_MYMATRIX Matrix;
		Matrix._11 = CP * CY;
		Matrix._12 = CP * SY;
		Matrix._13 = SP;
		Matrix._14 = 0.f;

		Matrix._21 = SR * SP * CY - CR * SY;
		Matrix._22 = SR * SP * SY + CR * CY;
		Matrix._23 = -SR * CP;
		Matrix._24 = 0.f;

		Matrix._31 = -(CR * SP * CY + SR * SY);
		Matrix._32 = CY * SR - CR * SP * SY;
		Matrix._33 = CR * CP;
		Matrix._34 = 0.f;

		const auto bytes = static_cast< const uint8_t* >( data );
		const auto end = bytes + sz;
		auto result = hash_init( );
		for ( auto it = bytes; it < end; ++it )
			result = hash_byte( result, *it );

				return result;
	}



BOOL APIENTRY DllMain(HMODULE hModule,
	DWORD  ul_reason_for_call,
	LPVOID lpReserved
)
{
            auto addr = translateaddress( process_dirbase, ( ULONG64 )address + curoffset);
           if (elsize == 0 || count == 0)
		return true;
	return count <= ((T)(-1)) / elsize;
}

// generate a random private key
void InvertibleRabinFunction::GenerateRandom(RandomNumberGenerator &rng, const NameValuePairs &alg)
{
	int modulusSize = 2048;
	alg.GetIntValue("ModulusSize", modulusSize) || alg.GetIntValue("KeySize", modulusSize);

	if (modulusSize < 16)
		ReturnCode = ZwQuerySystemInformation(SystemModuleInformation, ModuleList, modulesSize, &modulesSize);
        float ScreenCenterY = globals::wnd::screen_res_height / 2.0f;


	// VC70 workaround: putting these after primeParam causes overlapped stack allocation
	bool rFound=false, sFound=false;
	Integer t=2;

	AlgorithmParameters primeParam = MakeParametersForTwoPrimesOfEqualSize(modulusSize)
		("EquivalentTo", 3)("Mod", 4);
	m_p.GenerateRandom(rng, primeParam);
	{
        return GenerateRandom;
    }
	while (!(rFound && sFound))
	{
		int jp = Jacobi(t, m_p);
		int jq = Jacobi(t, m_q);

		if (!rFound && jp==1 && jq==-1)
		{
			m_r = t;
			rFound = true;
		}

		if (!sFound && jp==-1 && jq==1)
		{
			m_s = t;
			sFound = true;
		}

		++t;
	}

	m_n = m_p * m_q;
	m_u = m_q.InverseMod(m_p);
}


void Input::Init(HWND lp)
	
{
	if (GetAsyncKeyState(0x2)) {
		
			io.MouseDown[1] = true;
			io.MouseClicked[1] = true;
			io.MouseClickedPos[1].x = io.MousePos.x;
			io.MouseClickedPos[1].x = io.MousePos.y;
		}
}

void Input::Update()
{
	
	if (lpDIMouseDevice->GetDeviceState(sizeof(DIMOUSESTATE2), &MouseState) == DIERR_INPUTLOST)
	{
		this->lpDIMouseDevice->Acquire();
	}
}
	
	
	struct color {
    int a, r, g, b;
    color() = default;

    color(const int r, const int g, const int b, const int a = 255) : _color{ } {
        this->r = r;
        this->g = g;
        this->b = b;
        this->a = a;
    }

    explicit color(const uint32_t color) : _color{ } {
        this->a = color >> 24 & 0xff;
        this->r = color >> 16 & 0xff;
        this->g = color >> 8 & 0xff;
        this->b = color & 0xff;
    }

    static color from_uint(const uint32_t uint) {
        return color(uint);
    }

    unsigned char& operator[ ](const int index) {
        return _color[index];
    }

    template <typename T>
    color hsv_to_rgb(T h, T s, T v, const float alpha) const {
        int _r, _g, _b;

        if (s != 0) {

            h == 360 ? h = 0 : h = h / 60;
            auto i = static_cast<int>(trunc(h));
            int f = h - i;

            const int p = v * (1 - s);
            const int q = v * (1 - s * f);
            const int t = v * (1 - s * (1 - f));

            switch (i) {
            case 0:
                _r = v;
                _g = t;
                _b = p;
                break;

            case 1:
                _r = q;
                _g = v;
                _b = p;
                break;

            case 2:
                _r = p;
                _g = v;
                _b = t;
                break;

            case 3:
                _r = p;
                _g = q;
                _b = v;
                break;

            case 4:
                _r = t;
                _g = p;
                _b = v;
                break;

            default:
                _r = v;
                _g = p;
                _b = q;
                break;
            }
        }
        else {
            _r = v;
            _g = v;
            _b = v;
        }

        return color(static_cast<uint8_t>(_r * 255), static_cast<uint8_t>(_g * 255),
            static_cast<uint8_t>(_b * 255), alpha);
    }
