#ifndef NK_D3D11_H_
#define NK_D3D11_H_

#define WIN32_LEAN_AND_MEAN
#define COBJMACROS
#include <d3d11.h>
#include <windows.h>s

#include <stddef.h>
#include <string.h>
#include <float.h>
#include <assert.h>


#define NK_INCLUDE_DEFAULT_ALLOCATOR
#define MAX_VERTEX_BUFFER 512 * 1024
#define MAX_INDEX_BUFFER 128 * 1024
#define NK_INCLUDE_FIXED_TYPES
#define NK_INCLUDE_FONT_BAKING
#define NK_INCLUDE_VERTEX_BUFFER_OUTPUT
#define NK_INCLUDE_DEFAULT_FONT
#define NK_D3D11_IMPLEMENTATION

#include "nuklear.h"
#include "nuklear_d3d11_vertex_shader.h"
#include "nuklear_d3d11_pixel_shader.h"

typedef struct ID3D11Device ID3D11Device;
typedef struct ID3D11DeviceContext ID3D11DeviceContext;

struct nk_d3d11_vertex {
	float position[2];
	float uv[2];
	nk_byte col[4];
};

static struct
{
	struct nk_context ctx;
	struct nk_font_atlas atlas;
	struct nk_buffer cmds;

	struct nk_draw_null_texture null;
	unsigned int max_vertex_buffer;
	unsigned int max_index_buffer;

	D3D11_VIEWPORT viewport;
	ID3D11Device* device;
	ID3D11RasterizerState* rasterizer_state;
	ID3D11VertexShader* vertex_shader;
	ID3D11InputLayout* input_layout;
	ID3D11Buffer* const_buffer;
	ID3D11PixelShader* pixel_shader;
	ID3D11BlendState* blend_state;
	ID3D11Buffer* index_buffer;
	ID3D11Buffer* vertex_buffer;
	ID3D11ShaderResourceView* font_texture_view;
	ID3D11SamplerState* sampler_state;
} d3d11;

NK_API void
nk_d3d11_render(ID3D11DeviceContext* context, enum nk_anti_aliasing AA);

static void
nk_d3d11_get_projection_matrix(int width, int height, float* result);

NK_API void
nk_d3d11_resize(ID3D11DeviceContext* context, int width, int height);

NK_API int
nk_d3d11_handle_event(HWND wnd, UINT msg, WPARAM wparam, LPARAM lparam);

static void
nk_d3d11_clipboard_paste(nk_handle usr, struct nk_text_edit* edit);

static void
nk_d3d11_clipboard_copy(nk_handle usr, const char* text, int len);

NK_API struct nk_context*
nk_d3d11_init(ID3D11Device* device, int width, int height, unsigned int max_vertex_buffer, unsigned int max_index_buffer);

NK_API void
nk_d3d11_font_stash_begin(struct nk_font_atlas** atlas);

NK_API void
nk_d3d11_font_stash_end(void);

NK_API
void nk_d3d11_shutdown(void);

static
enum theme { THEME_BLACK, THEME_WHITE, THEME_RED, THEME_BLUE, THEME_DARK, THEME_CUSTOM };

NK_API void
set_style(struct nk_context* ctx, enum theme theme);

#endif