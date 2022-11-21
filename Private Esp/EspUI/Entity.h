#pragma once
#include <Windows.h>
#include <string.h>
#include "Vector.hpp"

class C_BaseEntity
{
public:
	std::string GetPlayerName();
	int GetTeamNumber();
	bool IsAlive();
	int GetHealth();
	Vector4D GetViewAngle();
	void SetViewAngle(Vector& angle);
	Vector GetHead();
	Vector GetChest();
	Vector GetFeet();s
	Vector GetBonePostionByID(int id);
	uintptr_t GetWeapon();
	void SetSpeed();
	void NoRecoil();
	void NoSpread();
	void NoReload();
	void SetFOV();
	void SetGlow();
};

delete <<