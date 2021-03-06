#pragma once

//Forward Declarations
#pragma region ForwardDeclarations
namespace EGEAR {
	namespace Renderer {
		class Material;
		class RenderState;
	}
}
#pragma endregion


namespace EGEAR {
	namespace Renderer {
		class Technique
		{
		public:
			virtual ~Technique();
			/**
				Enable

				Call to enable this Technique by setting the right shaders etc needed for the material and renderstate.
			*/
			virtual void Enable() = 0;

		protected :
			//Create using Renderer::CreateTechnique()
			Technique(Material* material, RenderState* renderState);

			Material* mMaterial;
			RenderState* mRenderState;
		};
	}
}

