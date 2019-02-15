#pragma once
#include <string>
#include <Windows.h>
#include "../EmptyRendererAPI/Renderer.hpp"

//Forward Declarations
#pragma region ForwardDeclarations
namespace D3D12 {
	namespace Renderer {
		class Mesh;
		class Window;
	}
}
#pragma endregion

//Renderer
namespace D3D12 {
	namespace Renderer {
		class Renderer : public EGEAR::Renderer::Renderer
		{
		public:
			Renderer();
			virtual ~Renderer();

			/*=========Rendering Specific=========*/
			/**
				Submit

				Call this to submit a mesh to be rendered on the next frame.
				@see Frame()

				@param mesh, the mesh to be submited to the renderer.
			*/
			virtual void Submit(EGEAR::Renderer::Mesh* mesh);
			/**
				Frame

				Render all work that have been submitted since this function was last called.
				To Present the rendered frame to the window call Present();

				@see Submit()
			*/
			virtual void Frame();
			/**
				Present

				Render all work that have been submitted since this function was last called.

				@see Submit()
			*/
			virtual void Present();


			/*=========Window Specific=========*/
			/**
				CreateWindow
				
				@param width of the window.
				@param height of the window.
				@param title of the window.
				@param fullscreen status.

				@return true if the window was created successfully.
			*/
			virtual bool MakeWindow(unsigned width, unsigned height, std::string title, bool fullScreen);
			/**
				GetWindow

				@return the window.
			*/
			virtual EGEAR::Renderer::Window* GetWindow();
		protected:
			HWND wndHandle;

		};
	}
}

