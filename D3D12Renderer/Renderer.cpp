#include "Renderer.hpp"
#include "Window.hpp"

LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{
	switch (message)
	{
	case WM_DESTROY:
		PostQuitMessage(0);
		exit(0);
		break;
	}

	return DefWindowProc(hWnd, message, wParam, lParam);
}

D3D12::Renderer::Renderer::Renderer()
{
}

D3D12::Renderer::Renderer::~Renderer()
{
}

void D3D12::Renderer::Renderer::Submit(EGEAR::Renderer::Mesh * mesh)
{
}

void D3D12::Renderer::Renderer::Frame()
{
}

void D3D12::Renderer::Renderer::Present()
{
}

bool D3D12::Renderer::Renderer::MakeWindow(unsigned width, unsigned height, std::string title, bool fullScreen)
{
	WNDCLASSEX wcex = { 0 };
	wcex.cbSize = sizeof(WNDCLASSEX);
	wcex.lpfnWndProc = WndProc;
	wcex.hInstance = nullptr;
	wcex.lpszClassName = "D3D12 Works!";
	if (!RegisterClassEx(&wcex))
	{
		return false;
	}

	RECT rc = { 0, 0, width, height };
	AdjustWindowRect(&rc, WS_OVERLAPPEDWINDOW, false);

	wndHandle = CreateWindowEx(
		WS_EX_OVERLAPPEDWINDOW,
		"D3D12 Works!",
		"D3D12 Works!",
		WS_OVERLAPPEDWINDOW,
		CW_USEDEFAULT,
		CW_USEDEFAULT,
		rc.right - rc.left,
		rc.bottom - rc.top,
		nullptr,
		nullptr,
		nullptr,
		nullptr);

	ShowWindow(wndHandle, 1);

	return true;
}

EGEAR::Renderer::Window * D3D12::Renderer::Renderer::GetWindow()
{
	return nullptr;
}
