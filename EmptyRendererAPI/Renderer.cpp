#include "Renderer.hpp"
#include "../D3D12Renderer/Renderer.hpp"

EGEAR::Renderer::Renderer * EGEAR::Renderer::Renderer::CreateRenderer(BACKEND_TYPE backend)
{

	switch (backend)
	{
	case EGEAR::Renderer::Renderer::BACKEND_TYPE::D3D11:
		break;
	case EGEAR::Renderer::Renderer::BACKEND_TYPE::D3D12:
		return new D3D12::Renderer::Renderer();
		break;
	case EGEAR::Renderer::Renderer::BACKEND_TYPE::OpenGL:
		break;
	case EGEAR::Renderer::Renderer::BACKEND_TYPE::Vulcan:
		break;
	default:
		break;
	}

	return nullptr;
}


