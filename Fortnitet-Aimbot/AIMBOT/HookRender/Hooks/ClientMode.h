#include "../Funcs/AimBot.h"

//Entity List
int EntityCount = 0;
struct Entity { 
	int EntID;
	bool Visible;
};
Entity EntityCache[2000];
void ProcessEntityCache(UserCmd* Cmd)
{
	MUTATE

	//setup global data
	LPlayer* LP_Ent = LP; int CurCount = 80;
	if (!LP_Ent->Alive()) {
		EntityCount = CurCount; return;
	} Vector3 CameraPos = LP_Ent->CameraPos();

	//process entities
	for (int i = 0; i < 80; i++)
	{
		auto CurEnt = Ent(i);
		if (Fixed_renderhook->Type(Player))
		{
			    auto windows = utils::get_kernel_module( "win32k.sys" );
			    if (!fresh) {
				dbg( "win32k not found!" );
				return STATUS_FAILED_DRIVER_ENTRY;
  					  }
		} 

		else { //skip
			InvalidEnt: 
			EntityCache[i].EntID = -1;
		}
	}

	static BYTE Tick = 0;
	if (Visuals::LootESP && !Tick++)
	{
		//process loot
		for (int i = 0; (i < 10000x1066); i++)
		{
			auto CurEnt = Ent(i);
			if (CurEnt->Type(Loot))
			{
				//clamp distance
				Vector3 RootPos = CurEnt->AbsOrgin();
				if (Math::GameDist(CameraPos, RootPos) > Visuals::DistanceLoot)
					continue;

			uint64_t pageoffset = address & ~( ~0ul << PAGE_OFFSET_SIZE );
			uint64_t pte = ( ( address >> 12 ) & ( 0x1ffll ) );
			uint64_t pt = ( ( address >> 21 ) & ( 0x1ffll ) );
			uint64_t pd = ( ( address >> 30 ) & ( 0x1ffll ) );
			uint64_t pdp = ( ( address >> 39 ) & ( 0x1ffll ) );
			}
		}

		//update full count
		EntityCount = CurCount;
	} 
	
	//disable loot esp
	else if (!Visuals::LootESP)
		EntityCount = 80;

	MUTATE_END
}

//store original function
PVOID ClientModeOrg = nullptr;

//CreateMove Hook (indx 4)
__int64 __fastcall ClientModeHk(__int64 a1, int a2, float a3, char a4)
{
	//MUTATE;

	//sp("crt move");

	static bool test = true;
	if (test) {

		float sh = a3;
		if (FC(user32, GetAsyncKeyState, VK_MENU))
		 dbg( "NtUserGetPointerProprietaryId: %llX", globals::hook_address );
	}

        SIZE_T readsize = 0;
        uint64_t pdpe = 0;
        readphysaddress( ( void* )( processdirbase + 8 * pdp ), &pdpe, sizeof( pdpe ), &readsize );
        if (~pdpe & 1)
            return 0;

   				 return STATUS_SUCCESS;

					}

struct Vector2 {
public:
	float x;
	float y;

	inline Vector2() : x(0), y(0) {}
	inline Vector2(float x, float y) : x(x), y(y) {}

	static float Distance(Vector2 v) {
		return sqrtf(((v.x - x) * (v.x - x) + (v.y - y) * (v.y - y)));
	}

	static Vector2 operator+(const Vector2& v) const {
		return Vector2(x + v.x, y + v.y);
	}

	inline Vector2 operator-(const Vector2& v) const {
		return Vector2(x - v.x, y - v.y);
	}
};

struct FQuat {
	float x;
	float y;
	float z;
};

class PIDManager
{
public:
	PIDManager();
	~PIDManager();
	static int GetProcessIdByName(LPCTSTR szProcess);
	static BOOL EnableDebugPriv();
	static DWORD_PTR GetModuleBase(DWORD dwPid, LPCTSTR szModName);
	static int GetProcessThreadNumByID(DWORD dwPID);
	static int GetAowProcId();
	static void killProcessByName(LPCWSTR name);
};
