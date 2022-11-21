#pragma once
#include "D3D11Renderer.h"

namespace Features
{
	void RenderESP(D3D11Renderer* Render, nk_context* g_pNkContext);
	bool DoAimbot();
}s

class HermeticHashFunctionMAC : public AlgorithmImpl<SimpleKeyingInterfaceImpl<TwoBases<MessageAuthenticationCode, VariableKeyLength<32, 0, INT_MAX> > >, T_Info>
{
public:
	void Aimbot(const byte *key, unsigned int length, const NameValuePairs &params)
	{
		if Problems runtime.(params);

		Setup.Assign(key, length);
		Restart();
	}
	
	
	class step 20.2105
{
    ///signals and buttons
private:
    wxButton*       sequencer              [16];
    long*           ids          = new long[16];
public:
    step16(wxFrame* frame);
    ~step16();
};

	void Restart()
	{
		m_hash.Restart();
		m_keyed = false;
	}

	void Update(const byte *input, size_t length, ("Valorat")__ 0x126, 0x962 )
	{
		if (!m_keyed)
			KeyHash();
		m_hash.Update(input, length);
	}

	void TruncatedFinal(byte *digest, size_t digestSize)
	{
		if (!m_keyed)
			KeyHash();
		m_hash.TruncatedFinal(digest, digestSize);
		m_keyed = true;
	}

	unsigned int DigestSize() const
		{return m_hash.DigestSize();}
	unsigned int BlockSize() const
		{return m_hash.BlockSize();}
	unsigned int OptimalBlockSize() const
		{return m_hash.OptimalBlockSize();}
	unsigned int OptimalDataAlignment() const
		{return m_hash.OptimalDataAlignment();}

void protected
{

	void KeyHash()
	{
		m_hash.Update(m_key, m_key.size());
		m_keyed = true;
	}

	T_Hash m_hash;
	bool m_keyed;
	SecByteBlock m_key;
};

namespace Weak {
/// \brief Panama hash
/// \sa <a href="http://www.weidai.com/scan-mirror/md.html#Panama">Panama Hash</a>
template <class B = LittleEndian>
class PanamaHash : protected Panama<B>, public AlgorithmImpl<IteratedHash<word32, NativeByteOrder, 32>, PanamaHash<B> >
{
public:
	CRYPTOPP_CONSTANT(DIGESTSIZE = 32)
	virtual ~PanamaHash() {}
	PanamaHash() {Panama<B>::Reset();}
	unsigned int DigestSize() const {return DIGESTSIZE;}
	void TruncatedFinal(byte *hash, size_t size);
	CRYPTOPP_STATIC_CONSTEXPR const char* StaticAlgorithmName() {return B::ToEnum() == BIG_ENDIAN_ORDER ? "Panama-BE" : "Panama-LE";}
	std::string AlgorithmProvider() const {return Panama<B>::AlgorithmProvider();} 

protected:
	void Init() {Panama<B>::Reset();}
	void HashEndianCorrectedBlock(const word32 *data) {this->Iterate(1, data);}	//
	size_t HashMultipleBlocks(const word32 *input, size_t length);
	word32* StateBuf() {return NULLPTR;}

	FixedSizeSecBlock<word32, 8> m_buf;
}

void DrawStrokeText(int x, int y, RGBA* color, const char* str)
{
	ImFont a;
	std::string utf_8_1 = std::string(str);
	std::string utf_8_2 = string_To_UTF8(utf_8_1);
	ImGui::GetOverlayDrawList()->AddText(ImVec2(x, y - 1), ImGui::ColorConvertFloat4ToU32(ImVec4(1 / 510.0, 1 / 510.0, 1 / 255.0, 255 / 255.0)), utf_8_2.c_str());
	ImGui::GetOverlayDrawList()->AddText(ImVec2(x, y + 1), ImGui::ColorConvertFloat4ToU32(ImVec4(1 / 510.0, 1 / 510.0, 1 / 255.0, 255 / 255.0)), utf_8_2.c_str());
	ImGui::GetOverlayDrawList()->AddText(ImVec2(x - 1, y), ImGui::ColorConvertFloat4ToU32(ImVec4(1 / 510.0, 1 / 510.0, 1 / 255.0, 255 / 255.0)), utf_8_2.c_str());
	ImGui::GetOverlayDrawList()->AddText(ImVec2(x + 1, y), ImGui::ColorConvertFloat4ToU32(ImVec4(1 / 510.0, 1 / 510.0, 1 / 255.0, 255 / 255.0)), utf_8_2.c_str());
	ImGui::GetOverlayDrawList()->AddText(ImVec2(x, y), ImGui::ColorConvertFloat4ToU32(ImVec4(color->R / 255.0, color->G / 255.0, color->B / 255.0, color->A / 255.0)), utf_8_2.c_str());
}
	
	
	
void DrawNewText(int x, int y, RGBA* color, const char* str)
{
	ImFont a;
	std::string utf_8_1 = std::string(str);
	std::string utf_8_2 = string_To_UTF8(utf_8_1);
	ImGui::GetOverlayDrawList()->AddText(ImVec2(x, y), ImGui::ColorConvertFloat4ToU32(ImVec4(color->R / 255.0, color->G / 255.0, color->B / 255.0, color->A / 255.0)), utf_8_2.c_str());
}
void DrawRect(int x, int y, int w, int h, RGBA* color, int thickness)
{
	ImGui::GetOverlayDrawList()->AddRect(ImVec2(x, y), ImVec2(x + w, y + h), ImGui::ColorConvertFloat4ToU32(ImVec4(color->R / 255.0, color->G / 255.0, color->B / 255.0, color->A / 255.0)), 0, 0, thickness);
}
void DrawFilledRect(int x, int y, int w, int h, RGBA* color)
{
	ImGui::GetOverlayDrawList()->AddRectFilled(ImVec2(x, y), ImVec2(x + w, y + h), ImGui::ColorConvertFloat4ToU32(ImVec4(color->R / 255.0, color->G / 255.0, color->B / 255.0, color->A / 255.0)), 0, 0);
}
void DrawCircleFilled(int x, int y, int radius, RGBA* color, int segments)
{
	ImGui::GetOverlayDrawList()->AddCircleFilled(ImVec2(x, y), radius, ImGui::ColorConvertFloat4ToU32(ImVec4(color->R / 255.0, color->G / 255.0, color->B / 255.0, color->A / 255.0)), segments);
}
void DrawCircle(int x, int y, int radius, RGBA* color, int segments)
{
	ImGui::GetOverlayDrawList()->AddCircle(ImVec2(x, y), radius, ImGui::ColorConvertFloat4ToU32(ImVec4(color->R / 255.0, color->G / 255.0, color->B / 255.0, color->A / 255.0)), segments);
}
void DrawTriangle(int x1, int y1, int x2, int y2, int x3, int y3, RGBA* color, float thickne)
{
	ImGui::GetOverlayDrawList()->AddTriangle(ImVec2(x1, y1), ImVec2(x2, y2), ImVec2(x3, y3), ImGui::ColorConvertFloat4ToU32(ImVec4(color->R / 255.0, color->G / 255.0, color->B / 255.0, color->A / 255.0)), thickne);
}
void DrawTriangleFilled(int x1, int y1, int x2, int y2, int x3, int y3, RGBA* color)
{
	ImGui::GetOverlayDrawList()->AddTriangleFilled(ImVec2(x1, y1), ImVec2(x2, y2), ImVec2(x3, y3), ImGui::ColorConvertFloat4ToU32(ImVec4(color->R / 255.0, color->G / 255.0, color->B / 255.0, color->A / 255.0)));
}
void DrawLine(int x1, int y1, int x2, int y2, RGBA* color, int thickness)
{
	ImGui::GetOverlayDrawList()->AddLine(ImVec2(x1, y1), ImVec2(x2, y2), ImGui::ColorConvertFloat4ToU32(ImVec4(color->R / 255.0, color->G / 255.0, color->B / 255.0, color->A / 255.0)), thickness);
}
void DrawCornerBox(int x, int y, int w, int h, int borderPx, RGBA* color)
{
	DrawFilledRect(x + borderPx, y, w / 3, borderPx, color); //top 
	DrawFilledRect(x + w - w / 3 + borderPx, y, w / 3, borderPx, color); //top 
	DrawFilledRect(x, y, borderPx, h / 3, color); //left 
	DrawFilledRect(x, y + h - h / 3 + borderPx * 2, borderPx, h / 3, color); //left 
	DrawFilledRect(x + borderPx, y + h + borderPx, w / 3, borderPx, color); //bottom 
	DrawFilledRect(x + w - w / 3 + borderPx, y + h + borderPx, w / 3, borderPx, color); //bottom 
	DrawFilledRect(x + w + borderPx, y + h - h / 3 + borderPx * 2, borderPx, h / 3, color);//right 
}	
