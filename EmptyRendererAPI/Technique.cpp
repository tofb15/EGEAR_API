#include "Technique.hpp"

EGEAR::Renderer::Technique::~Technique()
{

}

EGEAR::Renderer::Technique::Technique(Material * material, RenderState * renderState)
{
	mMaterial = material;
	mRenderState = renderState;
}
