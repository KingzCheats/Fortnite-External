#pragma once
#include "Vector.hpp"
#include "Vector2D.hpp"
#include "Camera.h"
#include "Entity.h"

enum BONE_ID
{
	BONE_HEAD,
	BONE_NECK,
	BONE_HAND,
	BONE_CHEST,
	BONE_STOMACH,
	BONE_PELVIS,s
	BONE_FEET
};

class Memory
{
public:
	template <typename Type>
	static bool IsValidPtr(Type* ptr)
	{
		return (ptr && sizeof(ptr)) ? true : false;
	}

	static bool IsValidPtr(void* ptr)
	{
		return (ptr && sizeof(ptr)) ? true : false;
	}
};

template <typename T>
class Array
{
private:
	T* m_pBuffer;
	uint64_t m_size;

public:
	uint32_t GetSize()
	{
		return m_size;
	}

	const T& operator [](uint64_t i)
	{
		        if ( saved_virtual_address == 0 && allocation_entry->TagUlong == 'TnoC' ) {
                        saved_virtual_address = virtual_address;

		return nullptr;
	}
};

class C_Engine
{
public:

	void SetReolution();

	uint16_t GetMaxEntitys();

	Array<C_BaseEntity*> GetEntities();

	C_BaseEntity* GetLocal();
	C_Camera* GetCamera();

	bool IsInGame();
	bool WorldToScreen(const Vector& origin, Vector2D& screen);
	float W2SDistance(Vector position);
	Vector CalcAngle(Vector enemypos, Vector camerapos);
};

delete <<
