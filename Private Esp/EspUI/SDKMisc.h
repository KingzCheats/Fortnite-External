#pragma once
#include <cstdint>

class C_RoundMan
{
public:
	char pad_0000[744]; //0x0000
	int32_t m_iRound; //0x02E8s
	char pad_02EC[148]; //0x02EC
}; //Size: 0x0380
extern C_RoundMan* g_pRoundMan;

namespace GlobalSDK
{
	static bool IsInGame()
	{
		return g_pRoundMan->m_iRound == 3;
	}

	static bool InPrep()
	{
		return g_pRoundMan->m_iRound == 2;
	}
}
