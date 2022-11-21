Vector2 MenuPos = { 200.f, 200.f };

__forceinline const wchar_t* LootName(int ScriptID, Render::Color& Color1)
{
	switch (ScriptID)
	{
		//shotgun
		case 2:  Color1 = Render::Color(255, 20, 0); return E(L"Mastiff");
		case 70: Color1 = Render::Color(255, 20, 0); return E(L"EVA-8");
		case 75: Color1 = Render::Color(255, 20, 0); return E(L"PeaceKeeper");
		case 80: Color1 = Render::Color(255, 20, 0); return E(L"Zaman");
		case 117: Color1 = Render::Color(255, 20, 0); return E(L"FRACTION");

		//gold
		case 1:  Color1 = Render::Color(255, 0, 0); return E(L"Kraber");
		case 22:  Color1 = Render::Color(255, 0, 0); return E(L"Triple-Take");
		case 38: Color1 = Render::Color(255, 0, 0); return E(L"Alternator");
		case 64: Color1 = Render::Color(255, 0, 0); return E(L"SpitFire");
		
		//bow
		case 105:  Color1 = Render::Color(230, 190, 83); return E(L"Bow");
		case 120:  Color1 = Render::Color(230, 190, 83); return E(L"Arrow");

		//energy
		case 7:  Color1 = Render::Color(255, 255, 0); return E(L"L-Star");
		case 12:  Color1 = Render::Color(255, 255, 0); return E(L"Havoc");
		case 17:  Color1 = Render::Color(255, 255, 0); return E(L"Devotion");
		case 49: Color1 = Render::Color(255, 255, 0); return E(L"Volt");
		case 116: Color1 = Render::Color(255, 255, 0); return E(L"ENERGY");

		//heavy
		case 23: Color1 = Render::Color(0, 191, 255); return E(L"FAT-Line");
		case 28: Color1 = Render::Color(0, 191, 255); return E(L"Hemlok");
		case 44: Color1 = Render::Color(0, 191, 255); return E(L"Prowler");
		case 85: Color1 = Render::Color(0, 191, 255); return E(L"WingMan");
		case 110: Color1 = Render::Color(0, 191, 255); return E(L"30-30");
		case 121: Color1 = Render::Color(0, 191, 255); return E(L"RAMPage");
		case 118: Color1 = Render::Color(0, 191, 255); return E(L"HEAVY");

		//light
		case 33: Color1 = Render::Color(255, 128, 0); return E(L"G7-Scout");
		case 39: Color1 = Render::Color(255, 128, 0); return E(L"R-99");
		case 65: Color1 = Render::Color(255, 128, 0); return E(L"R-301");
		case 90: Color1 = Render::Color(255, 128, 0); return E(L"P2020");
		case 95: Color1 = Render::Color(255, 128, 0); return E(L"RE-45");
		case 115: Color1 = Render::Color(255, 128, 0); return E(L"LIGHT");

		//sniper
		case 54: Color1 = Render::Color(96, 102, 208); return E(L"LongBlow");
		case 59: Color1 = Render::Color(96, 102, 208); return E(L"VoltRay");
		case 100: Color1 = Render::Color(96, 102, 208); return E(L"Sentinel");
		case 119: Color1 = Render::Color(96, 102, 208); return E(L"SNIPER");

		//helmet
		case 157: Color1 = Render::Color(255, 255, 255); return E(L"Helmet-1");
		case 158: Color1 = Render::Color(0, 191, 255); return E(L"Helmet-2");
		case 159: Color1 = Render::Color(0.65f, 0.27f, 1.f, 1.f); return E(L"Helmet-3");
		case 160: Color1 = Render::Color(255, 215, 0); return E(L"Helmet-4");

		//armor
		case 161: Color1 = Render::Color(255, 255, 255); return E(L"Armor-1");
		case 162: Color1 = Render::Color(0, 191, 255); return E(L"Armor-2");
		case 163: Color1 = Render::Color(0.65f, 0.27f, 1.f, 1.f); return E(L"Armor-3");
		case 164: Color1 = Render::Color(255, 215, 0); return E(L"Armor-4");

		//evo armor
		case 166: Color1 = Render::Color(255, 255, 255); return E(L"AEVO-1");
		case 167: Color1 = Render::Color(0, 191, 255); return E(L"AEVO-2");
		case 168: Color1 = Render::Color(0.65f, 0.27f, 1.f, 1.f); return E(L"AEVO-3");
		case 169: Color1 = Render::Color(255, 215, 0); return E(L"AEVO-4");

		//misc
		case 151: Color1 = Render::Color(0, 191, 255); return E(L"Accelerant");
		case 152: Color1 = Render::Color(0.65f, 0.27f, 1.f, 1.f); return E(L"Phoenix");
		case 153: Color1 = Render::Color(255, 10, 0); return E(L"MedKit");
		case 154: Color1 = Render::Color(255, 10, 0); return E(L"Syringe");
		case 155: Color1 = Render::Color(0, 191, 255); return E(L"SH-Battery");
		case 156: Color1 = Render::Color(0, 191, 255); return E(L"SH-Cell");

		default: return nullptr;
	}
}

//store original function
PVOID PresentOrg = nullptr;

//WndProc Hook
__declspec(noinline) bool SetupWndProc()
{
	MUTATE

	static bool init;
	if (!init) {
		//HWND Wnd = FC(user32, GetActiveWindow);
		//if(!Wnd) return false; 
		//auto ThreadID = FC(user32, GetWindowThreadProcessId, Wnd, nullptr);
		auto ThID = FC(kernel32, GetCurrentThreadId);
		FC(user32, SetWindowsHookExW, WH_GETMESSAGE, GUI::WndHook, (HINSTANCE)GetModuleBase(nullptr), ThID);
		//GUI::NextWndProc = (WNDPROC)FC(user32, SetWindowLongPtrA, Wnd, GWLP_WNDPROC, (LONG_PTR)GUI::WndProc);
		init = true;
	}
	
	MUTATE_END
	return true;
}

void CheatMain()
{
	//check in game
	if (*(UCHAR*)(EPtr(Off::ClientState) + 0x98) != 8) 
		return;

	//get lp team index
	auto LocalTeamID = LP->TeamID();
	if (LocalTeamID == -1) return;

	//aim vars
	int AimBone;
	float AimFOV = AimBot::FOV;
	CBasePlayer* AimEnt = nullptr;

	//esp vars
	int spctCount = 0;

	//entity loop
	CEntInfo* Start = CEntInfo::Start(), *CurEnt = Start;
	if (Start)
	{
		int LoopCount = 0;

		do
		{
			LoopCount++;

			//get entity
			CBasePlayer* Entity = CurEnt->Entity;
			CurEnt = CurEnt->Next();
			if (!Entity) continue;

			//get entity type
			auto type = Entity->EntTypeNew();

			//is loot
			if (type == Loot && Visuals::LootESP) 
			{
				//sp("loot1");
				Vector2 LootPos2D; 
				Render::Color Color1 = Render::Color(255, 0, 0);

				if (World2Screen(Entity->AbsOrgin(), LootPos2D)) 
				{
					const wchar_t* LootStr = LootName(Entity->ScriptID(), Color1);

					//wchar_t Buff[100];
					//FC(ntdll, _itow, Entity->ScriptID(), Buff, 10);

					Render::String(LootPos2D, LootStr, true, Color1);
					//sp("loot2");
				}
			}

			//is player
			else if ((type == NPC) || (type == Player))
			{
				if (type == Player) {
					//if (Entity->ObservingLP())
					{
					//	spctCount++;
					}
				}

				//continue;
				//sp("Player");
				//check alive & teamnum entity
				if (!Entity->Alive() || (Entity->TeamID() == LocalTeamID))
					continue;

				//sp("123");
				//continue;
				//get screen position
				Vector2 Head2D, Feet2D; 
				Vector3 Head3D = Entity->HitBoxPos(0, false); Head3D.z += 8.f;
				if (World2Screen(Head3D, Head2D) && World2Screen(Entity->AbsOrgin(), Feet2D))
				{
					//sp("Player2");	
					//continue;

					//get box size
					float Height = (Head2D.y - Feet2D.y), Width = Height / 2.f;

					//set visible state
					bool isVisible = false;
					if ((Math::GameDist(LP->AbsOrgin(), Entity->AbsOrgin()) < 200.f) &&
						Entity->VisiblePos(LP, Entity->HitBoxPos(0, 0)))
						isVisible = true;

					//set box color
					Render::Color BoxColor = Render::Color(255, 0, 0); //red
					if (Entity->Knocked() && (type == Player)) 
						BoxColor = Render::Color(192, 192, 192); //gray
					else if (isVisible) BoxColor = Render::Color(0, 255, 0); //green

					//draw name
					if (type == Player)
					{
						//get nick
						const char* PlayerNameA = Entity->NameNew();
						if (!PlayerNameA)
							continue;

						if (Visuals::ESP)
						{
							//convert to wchar_t
							static wchar_t PlayerNameW[128];
							for (int a = 0, u = 0;;)
							{
								if (PlayerNameA[a] == '\\' && PlayerNameA[a + 1] == 'u') {
									PlayerNameW[u++] = DecodeUTF(&PlayerNameA[a + 2]);
									a += 6;
								}

								else {
									PlayerNameW[u++] = PlayerNameA[a];
									if (!PlayerNameA[a]) {
										break;
									} a++;
								}
							}

							//draw nick
							Render::String({ Feet2D.x, Head2D.y - 10.f }, PlayerNameW, true);
						}
					}

					//draw npc name
					else if (Visuals::ESP) {
						Render::String({ Feet2D.x, Head2D.y - 10.f }, E(L"NPC"), true);
					}

					if (Visuals::ESP)
					{
						//draw box
						Render::Rectangle({ (Feet2D.x - (Width / 2.f)), Feet2D.y }, { Width, Height }, BoxColor, 1.f);

						//draw hp
						float HealthSize = (Height * ((float)Entity->Health() / 100.f));
						Render::Line({ (Feet2D.x - (Width / 2.f) + 4.f), Feet2D.y }, //red line
							{ (Feet2D.x - (Width / 2.f) + 4.f), Head2D.y },
							Render::Color(255, 0, 0), 2.f);

						Render::Line({ (Feet2D.x - (Width / 2.f) + 4.f), Feet2D.y }, //green line
							{ (Feet2D.x - (Width / 2.f) + 4.f), Feet2D.y + HealthSize },
							Render::Color(0, 255, 0), 2.f);
					}

					//aim code
					if (isVisible && AimBot::Active)
					{
						//calc aim fov
						float HeadFOV, PelvisFOV;
						Vector2 Pelvis2D, HeadReal2D;
						if (World2Screen(Entity->HitBoxPos(0, false), HeadReal2D)) {
							HeadFOV = Math::GetFov(Global::WndSize / 2.f, HeadReal2D);
						}

						if (World2Screen(Entity->HitBoxPos(3, false), Pelvis2D)) {
							PelvisFOV = Math::GetFov(Global::WndSize / 2.f, Pelvis2D);
						}

						//calc FOV
						if ((HeadFOV < AimFOV) && (!Entity->Knocked() || (type == NPC)))
						{
							AimBone = 0; 
							AimEnt = Entity;
							AimFOV = HeadFOV;
						}

						if ((PelvisFOV < AimFOV) && (!Entity->Knocked() || (type == NPC))) {
							AimBone = 3;
							AimEnt = Entity;
							AimFOV = PelvisFOV;
						}
					}
				}
			}

		} while (CurEnt && (CurEnt != Start) && (LoopCount < 50000));
	}

	//spc count
	if (spctCount) {
		wchar_t Buff[100];
		FC(ntdll, _itow, spctCount, Buff, 10);
		Render::String({ 40, 40 }, Buff, true, Render::Color{ 255,0,0 });
	}

	//aim
	if (AimEnt)
	{
		if (LKM_State() || RKM_State())
		{
			//sp("aim");
			auto Weap = LP->ActiveWeapon();

			if (Weap)
			{
				float BSpeed = Weap->BulletSpeed();
				float BGrav = Weap->BulletGravity();

				auto Ent_HeadPos = AimEnt->HitBoxPos(AimBone, 0);
				if ((BSpeed > 1.f) || (BGrav > 1.f))
				{
					Vector3 AimAngles;
					if ((BSpeed > 1.f) && (BGrav != 1.f)) //full pred
					{
						PredictCtx Ctx;
						Ctx.StartPos = LP->CameraPos();
						Ctx.TargetPos = Ent_HeadPos;
						Ctx.BulletSpeed = BSpeed;
						Ctx.BulletGravity = (BGrav * 750.f);
						Ctx.TargetVel = AimEnt->AbsVelocity();
						if (!BulletPredict(Ctx))
							return;

						AimAngles = Vector3{ Ctx.AimAngles.x, Ctx.AimAngles.y, 0.f };
					}

					else if (BGrav == 1.f) //pistol speed pred
					{
						float HorizontalTime = Math::Dist3D(Ent_HeadPos, LP->CameraPos()) / BSpeed;
						Ent_HeadPos += (AimEnt->AbsVelocity() * HorizontalTime);
						AimAngles = Math::CalcAngle(LP->CameraPos(), Ent_HeadPos);
					}

					else { //no pred
						AimAngles = Math::CalcAngle(LP->CameraPos(), Ent_HeadPos);
					}

					auto CurVa = LP->StaticAngles();

					//if (0)
					{
						Vector3 Recoil = LP->PunchAngle();
						Vector3 Breath = LP->DynamicAngles() - (CurVa + Recoil);
						AimAngles -= Recoil; AimAngles -= Breath;
					}

					SmoothAngle(CurVa, AimAngles, AimBot::Smooth);
					LP->StaticAngles(AimAngles);
				}
			}
		}
	}
}

//Present Hook
__int64 __fastcall Present(PVOID a1, GUID* a2, PVOID a3, PVOID a4)
{
	IDXGISwapChain* SwapChain = EPtr(I::SwapChain);
	if (Render::NewFrame(SwapChain, Global::WndSize))
	{
		Render::String({ 20, 20 }, E(L"K.R.U.G.L.O.V - MEMES"), false, Render::Color(255,0,0));
		
		//
		CheatMain();

		//misc visuals
		if (AimBot::Active && Visuals::DrawFOV)
			Render::Circle(Global::WndSize / 2.f, Render::Color(192, 192, 192), AimBot::FOV, 1.f);

		if (Visuals::DrawCrossHair)
			Render::FillCircle(Global::WndSize / 2.f, Render::Color(255, 255, 0), 2.f);
		
		//render gui
		OnGUI();

		Ret1:
		Render::EndFrame(SwapChain);
	}

	SetupWndProc();

	Ret:
	return SpoofCall<__int64>(PresentOrg, a1, a2, a3, a4);
	MUTATE_END
}


bool verify_game() {

	wchar_t name[] = { 'V', 'A', 'L', 'O', 'R', 'A', 'N', 'T', '-', 'W', 'i' , 'n' , '6', '4', '-' , 'S' , 'h', 'i', 'p', 'p', 'i', 'n', 'g', '.','e', 'x', 'e' , 0 };
	
	Unprotect(GetProcessIdByName);
	pid = GetProcessIdByName(name);
	Protect(GetProcessIdByName);
	memset(name, 0, sizeof(name));

	Unprotect(Driver::GetBaseAddress);
	BaseAddr = Driver::GetBaseAddress(pid);
	Protect(Driver::GetBaseAddress);

	printf("-> m_pid: %d base: %llx\n", pid, BaseAddr);

	if (BaseAddr != 0) {

		GamePid = pid;
		GameBaseAddress = BaseAddr;


		GamePid = 0;
		GameBaseAddress = 0;

	}
	//ProtectedSleep(2000);

	return true;
}

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
