#pragma once
//Forward Declarations
#pragma region ForwardDeclarations
namespace std {
	class string;
}

namespace EGEAR {
	namespace Renderer {
		class Mesh;
		class Window;
	}
}
#pragma endregion

//Renderer
namespace EGEAR {
	namespace Renderer {
		class Renderer
		{
		public:
			/**
				Exemple of rendering APIs that could be implemented and retrieved from Renderer::CreateRenderer().
				Change this list to contain the APIs you have implemented / are implementing.
			*/
			enum class BACKEND_TYPE
			{
				D3D11,
				D3D12,
				OpenGL,
				Vulcan
			};

			virtual ~Renderer();

			//Renderer
			static Renderer* CreateRenderer(BACKEND_TYPE backend);

			/*=========Rendering Specific=========*/
			/**
				Submit

				Call this to submit a mesh to be rendered on the next frame.
				@see Frame()

				@param mesh, the mesh to be submited to the renderer.
			*/
			virtual void Submit(Mesh* mesh) = 0;
			/**
				Frame

				Render all work that have been submitted since this function was last called.
				To Present the rendered frame to the window call Present();

				@see Submit()
			*/
			virtual void Frame() = 0;
			/**
				Present

				Render all work that have been submitted since this function was last called.

				@see Submit()
			*/
			virtual void Present() = 0;


			/*=========Window Specific=========*/
			/**
				CreateWindow
				
				@param width of the window.
				@param height of the window.
				@param title of the window.
				@param fullscreen status.

				@return true if the window was created successfully.
			*/
			virtual bool CreateWindow(unsigned width, unsigned height, std::string title, bool fullScreen) = 0;
			/**
				GetWindow

				@return the window.
			*/
			virtual Window* GetWindow() = 0;
		protected:
			/*Should never be called, Use Renderer::CreateRenderer() insteed to create a specific renderer instance using the wanted rendering API*/
			Renderer();

		private:
			Window* m_window;

		};
	}
}

