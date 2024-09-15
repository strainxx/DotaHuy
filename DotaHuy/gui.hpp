#pragma once
#include "d3d11.h"
#include "dxgi.h"
#pragma comment(lib, "d3d11.lib")
#include <iostream>
#include "FW1FontWrapper.h"
//#if _WIN64
#pragma comment(lib, "FW1FontWrapper.lib")
//#else
//#pragma comment(lib, "FW1FontWrapper.lib")
//#endif // _WIN64

#include "Utils.hpp"

#include "source2sdk/client/CDOTAPlayerPawn.hpp"

HINSTANCE dll_handle;

typedef long(__stdcall* present)(IDXGISwapChain*, UINT, UINT);
present p_present;
present p_present_target;
bool get_present_pointer()
{
	DXGI_SWAP_CHAIN_DESC sd;
	ZeroMemory(&sd, sizeof(sd));
	sd.BufferCount = 2;
	sd.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;
	sd.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;
	sd.OutputWindow = GetForegroundWindow();
	sd.SampleDesc.Count = 1;
	sd.Windowed = TRUE;
	sd.SwapEffect = DXGI_SWAP_EFFECT_DISCARD;

	IDXGISwapChain* swap_chain;
	ID3D11Device* device;

	const D3D_FEATURE_LEVEL feature_levels[] = { D3D_FEATURE_LEVEL_11_0, D3D_FEATURE_LEVEL_10_0, };
	if (D3D11CreateDeviceAndSwapChain(
		NULL,
		D3D_DRIVER_TYPE_HARDWARE,
		NULL,
		0,
		feature_levels,
		2,
		D3D11_SDK_VERSION,
		&sd,
		&swap_chain,
		&device,
		nullptr,
		nullptr) == S_OK)
	{
		void** p_vtable = *reinterpret_cast<void***>(swap_chain);
		swap_chain->Release();
		device->Release();
		//context->Release();
		p_present_target = (present)p_vtable[8];
		return true;
	}
	return false;
}

bool init = false;
HWND window = NULL;
ID3D11Device* p_device = NULL;
ID3D11DeviceContext* p_context = NULL;
ID3D11RenderTargetView* mainRenderTargetView = NULL;
IFW1Factory* pFW1Factory = nullptr;
IFW1FontWrapper* pFontWrapper = nullptr;

static long __stdcall detour_present(IDXGISwapChain* p_swap_chain, UINT sync_interval, UINT flags) {
    if (!init) {
        if (SUCCEEDED(p_swap_chain->GetDevice(__uuidof(ID3D11Device), (void**)&p_device))) {
            p_device->GetImmediateContext(&p_context);
            DXGI_SWAP_CHAIN_DESC sd;
            p_swap_chain->GetDesc(&sd);
            window = sd.OutputWindow;
            ID3D11Texture2D* pBackBuffer;
            p_swap_chain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);
            p_device->CreateRenderTargetView(pBackBuffer, NULL, &mainRenderTargetView);
            pBackBuffer->Release();

            if (FAILED(FW1CreateFactory(FW1_VERSION, &pFW1Factory))) {
                std::cout << "Failed to create FW1 factory" << std::endl;
                return p_present(p_swap_chain, sync_interval, flags);
            }

            if (FAILED(pFW1Factory->CreateFontWrapper(p_device, L"Arial", &pFontWrapper))) {
                std::cout << "Failed to create font wrapper" << std::endl;
                return p_present(p_swap_chain, sync_interval, flags);
            }

            pFW1Factory->Release();

            init = true;
        }
        else
            return p_present(p_swap_chain, sync_interval, flags);
    }

    if (pFontWrapper) {
        p_context->OMSetRenderTargets(1, &mainRenderTargetView, NULL);
        float pWorld[3] = { 0.0f, 0.0f, 0.0f };
        DWORD x, y;
        WorldToScreen(pWorld, &x, &y, 0);

        pFontWrapper->DrawString(
            p_context,
            L"Hello World",
            24.0f,
            x,
            y,
            0xffffffff,
            FW1_RESTORESTATE
        );
    }

    return p_present(p_swap_chain, sync_interval, flags);
}