#pragma once
#include <cstdint>

class C_Team
{
public:
	char pad_0000[414]; //0x0000
	int16_t m_sTeam; //0x019E
	char pad_01A0[672]; //0x01A0
}; //Size: 0x0440

class C_EntityRep
{
public:
	char pad_0000[168]; //0x0000
	C_Team* C_Team; //0x00A8
	char pad_00B0[24]; //0x00B0
}; //Size: 0x00C8

class C_Entitys
{
public:
	char pad_0000[40]; //0x0000
	C_EntityRep* C_EntityRep; //0x0028
	char pad_0030[968]; //0x0030
}; //Size: 0x03F8
extern C_Entity* g_pEntity;

class C_EntityList
{
public:
	char pad_0000[64]; //0x0000
}; //Size: 0x0040

class C_GameMan
{
public:
	char pad_0000[456]; //0x0000
	C_EntityList* C_EntityList; //0x01C8
	int8_t m_iMaxEntitys; //0x01D0
	char pad_01D1[1978]; //0x01D1
	float m_fTime; //0x098B
	char pad_098F[692]; //0x098F
}; //Size: 0x0C43
extern C_GameMan* g_pGameMan;

delete <<