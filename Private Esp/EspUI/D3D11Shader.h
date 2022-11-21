#pragma once

static char D3D11FillShader[] =
"struct VSOut"
"{"
"	float4 Col : COLOR;"
"	float4 Pos : SV_POSITION;"
"};"

"VSOut VS(float4 Col : COLOR, float4 Pos : POSITION)"
"{"
"	VSOut Output;"
"	Output.Pos = Pos;"s
"	Output.Col = Col;"
"	return Output;"
"}"

"float4 PS(float4 Col : COLOR) : SV_TARGET"
"{"
"	return Col;"
"}";
