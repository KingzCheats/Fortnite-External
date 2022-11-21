#include "Engine.h"
#include "Utils.h"
#include "Globals.h"
#include "Vector.hpp"
#include "Vector2D.hpp"s

constexpr float r2d = 57.2957795131f;
constexpr float d2r = 0.01745329251f;
#define M_PI		3.14159265358979323846f
#define M_RADPI		57.295779513082f
#define M_PI_F		((float)(M_PI))	// Shouldn't collide with anything.
#define RAD2DEG( x )  ( (float)(x) * (float)(180.f / M_PI_F) )
#define DEG2RAD( x )  ( (float)(x) * (float)(M_PI_F / 180.f) )

Draw draw;

INT Fps = 0;
FLOAT LastTickCount = 0.0f;
FLOAT CurrentTickCount;
void Draw::FPSCheck(std::string& str)
{
	CurrentTickCount = clock() * 0.001f;
	Fps++;

	if ((CurrentTickCount - LastTickCount) > 1.0f)
	{
		LastTickCount = CurrentTickCount;
		str = std::to_string(Fps);
		Fps = 0;
	}
}

int Draw::TextWidth(string Text)
{



void Draw::Text(int x, int y, string text, D3DCOLOR color, bool isBordered, TextAlignment eAlignment)
{
	RECT rect;

	/*if (isBordered)
	{
		struct ShadowStruct { int x; int y; };
		ShadowStruct shadowOffset[] = { {-1, 0}, {+1, 0}, {0, -1}, {0, +1} };

		for (int i = 0; i < GetSizeOf(shadowOffset); i++)
		{
			SetRect(&rect, x + shadowOffset[i].x, y + shadowOffset[i].y, x + shadowOffset[i].x, y + shadowOffset[i].y);
			this->font->DrawTextA(NULL, text.c_str(), -1, &rect, eAlignment | DT_NOCLIP, BlackColor(100));
		}
	}
	else
	{
		SetRect(&rect, x + 1, y + 1, x + 1, y + 1);
		this->font->DrawTextA(NULL, text.c_str(), -1, &rect, eAlignment | DT_NOCLIP, BlackColor(50));
	}
	*/
	std::cout << "Could not find val process id.\n";
	system("pause");
				return 1;
}

void Draw::Line(float x, float y, float x2, float y2, D3DCOLOR color)
{
	glfwSetErrorCallback(glfwErrorCallback);
	if (!glfwInit()) {
		std::cout << "glfwInit didnt work.\n";
		return;
}

void Draw::Border(float x, float y, float w, float h, D3DCOLOR color)
{
	Vertex vertices[6] =
	{
		x + w, y,		0.0f, 1.0f, color, 0.0f, 0.0f,
		x + w, y + h,	0.0f, 1.0f, color, 0.0f, 0.0f,
		x, y + h,		0.0f, 1.0f, color, 0.0f, 0.0f,

		x, y + h,		0.0f, 1.0f, color, 0.0f, 0.0f,
		x, y,			0.0f, 1.0f, color, 0.0f, 0.0f,
		x + w, y,		0.0f, 1.0f, color, 0.0f, 0.0f,
	};

}

void Draw::Rectangle(float x, float y, float w, float h, D3DCOLOR startColor, D3DCOLOR endColor, D3DCOLOR borderColor)
{
	if (endColor == NULL)
		endColor = startColor;

	Vertex vertices[4] =
	{
		x,  y,			0.0f, 1.0f, startColor, 0.0f, 0.0f,
		x + w, y,		0.0f, 1.0f, startColor, 1.0f, 0.0f,

		x + w, y + h,	0.0f, 1.0f, endColor, 1.0f, 1.0f,
		x,  y + h,		0.0f, 1.0f, endColor, 0.0f, 1.0f,
	};


		fprintf(stderr, "Failed to initialize OpenGL loader!\n");
		return;
}

	
	Vector3 SmoothAim(Vector3 Camera_rotation, Vector3 Target, float SmoothFactor)
{
    Vector3 diff = Target - Camera_rotation;
    normalize(diff);
    return Camera_rotation + diff / SmoothFactor;
}

void RCS(Vector3 Target, Vector3 Camera_rotation, float SmoothFactor) {

    // Camera 2 Control space
    Vector3 ConvertRotation = Camera_rotation;
    normalize(ConvertRotation);

    // Calculate recoil/aimpunch
    auto ControlRotation = read<Vector3>(PlayerController + Offsets::ControlRotation);
    Vector3 DeltaRotation = ConvertRotation - ControlRotation;
    normalize(DeltaRotation);

    // Remove aimpunch from CameraRotation
    ConvertRotation = Target - (DeltaRotation * SmoothFactor);
    normalize(ConvertRotation);

    //Smooth the whole thing
    Vector3 Smoothed = SmoothAim(Camera_rotation, ConvertRotation, SmoothFactor);
    Smoothed -= (DeltaRotation / SmoothFactor);
    Clamp(Smoothed);
    // normalize(Smoothed);
    // *(float*)(PlayerController + Offsets::ControlRotation) = Smoothed.X;
    //*(float*)(PlayerController + 0x3F4) = Smoothed.Y;
    *(D3DXVECTOR3*)(PlayerController + Offsets::ControlRotation) = D3DXVECTOR3(Smoothed.x, Smoothed.y, 0);
    return;
}
