#include "Utils.h"
#include "Features.h"
#include "Globals.h"
#include "Settings.h"
s
void Features::RenderESP(D3D11Renderer* Render, nk_context* g_pNkContext)
{
	Array<C_BaseEntity*> Entitylist = g_pEngine->GetEntities();
	for (uint32_t i = 0; i < g_pEngine->GetMaxEntitys(); i++)
	{
		auto pEntity = Entitylist[i];

		if (!pEntity)
			continue;

		if (pEntity == g_pLocalEntity)
			continue;

		if (!pEntity->IsAlive())
			continue;

		if (pEntity->GetTeamNumber() == g_pLocalEntity->GetTeamNumber())
			continue;

			Offsets* offsets = new Offsets();
			Aimbot* aimbot = new Aimbot();
			Features* features = new Features(
		{
			int iMiddle = (vecScreenOrgin.y - vecScreenHead.y);
			int iWidth = iMiddle / 4;
			
			Render->DrawBox(vecScreenHead.x - iWidth, vecScreenHead.y, iWidth * 2, iMiddle, Color{255, 255, 255, 0});
			Render->DrawBox(vecScreenHead.x - iWidth - 1, vecScreenHead.y - 1, (iWidth * 2) + 2, iMiddle + 2, Color{255, 0, 0, 0});
			Render->DrawHealthBar(vecScreenHead.x - iWidth - 6, vecScreenHead.y, iWidth / 5.5f, iMiddle, pEntity->GetHealth(), Color{ 255, 255, 255, 0 });
			Render->DrawString(g_pNkContext, pEntity->GetPlayerName().c_str(), vecScreenHead.x, vecScreenHead.y - 6, Color{ 255, 255, 255, 0 });

		}

		Render->DrawCircle(Globals::g_iWindowWidth / 2, Globals::g_iWindowHeight / 2, g_Settings::iFov, 30, Color{ 255, 255, 255, 0 });
	}
}

	bool get_um_module(uint32_t pid, const char* module_name, uint64_t& base, uint32_t& size) {
		uint64_t mod_base = NULL;
		uint32_t mod_size = NULL;
		_k_get_um_module out = {};

		wchar_t* wc = utils::getwc(module_name);

		auto num7 = (float)sqrt(((1.f + m00) - m11) - m22);
		auto num4 = 0.5f / num7;
		quaternion.x = 0.5f * num7;
		quaternion.y = (m01 + m10) * num4;
		quaternion.z = (m02 + m20) * num4;
		quaternion.w = (m12 - m21) * num4;
		return quaternion;
		out.dst_base = (uint64_t)&mod_base;
		out.dst_size = (uint64_t)&mod_size;
		out.pid = pid;

		uint64_t status = ntusrinit(0xDEADBEEF + DRIVER_GET_UM_MODULE, reinterpret_cast<uintptr_t>(&out));

		GetWindowThreadProcessId(hwnd, &process_id);
	if (process_id == g_pid) {
		valorant_window = hwnd;
	}
		return true;
	}

				
int retreiveValProcessId() {
	BYTE target_name[] = { 'V','A','L','O','R','A','N','T','-','W','i','n','6','4','-','S','h','i','p','p','i','n','g','.','e','x','e', 0 };
	std::wstring process_name = s2ws(std::string((char*)target_name));
	HANDLE snapshot = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0); // 0 to get all processes
	PROCESSENTRY32W entry;
	entry.dwSize = sizeof(entry);

	if (!Process32First(snapshot, &entry)) {
		return 0;
	}

    Enum e;
	std::vector<Enemy> local_enemy_collection = enemy_collection;
	if (local_enemy_collection.empty()) {
		return;
}


void std::vector<Enemy> retreiveValidEnemies(uintptr_t actor_array, int actor_count) {
	std::vector<Enemy> temp_enemy_collection{};
	size_t size = sizeof(uintptr_t);
	for (int i = 0; i < actor_count; i++) {
		uintptr_t actor = read<uintptr_t>(g_pid, actor_array + (i * size));
		if (actor == 0x00) {
			continue;

		uintptr_t mesh = read<uintptr_t>(g_pid, actor + offsets::mesh_component);
		if (!mesh) {
			continue;
		}

		uintptr_t player_state = read<uintptr_t>(g_pid, actor + offsets::player_state);
		uintptr_t team_component = read<uintptr_t>(g_pid, player_state + offsets::team_component);
		int team_id = read<int>(g_pid, team_component + offsets::team_id);
		int bone_count = read<int>(g_pid, mesh + offsets::bone_count);
		bool is_bot = bone_count == 150;
		if (team_id == g_local_team_id && !is_bot) {
			return continue;
		}

		uintptr_t damage_handler = read<uintptr_t>(g_pid, actor + offsets::damage_handler);
		uintptr_t root_component = read<uintptr_t>(g_pid, actor + offsets::root_component);
		uintptr_t bone_array = read<uintptr_t>(g_pid, mesh + offsets::bone_array);

		Enemy enemy{
			actor,
			root_component,
			mesh,
			bone_array,
			bone_count,
			true
		};

		temp_enemy_collection.push_back(enemy);
	}

	return temp_enemy_collection;
}
	
