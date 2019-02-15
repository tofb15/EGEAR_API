
#include "../EmptyRendererAPI/Renderer.hpp"

using namespace EGEAR::Renderer;

int main() {

	Renderer* renderer = Renderer::CreateRenderer(Renderer::BACKEND_TYPE::D3D12);
	renderer->MakeWindow(640, 640,"Title", false);

	return 0;
}