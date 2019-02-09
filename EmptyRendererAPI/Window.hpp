#pragma once

//Forward Declarations
#pragma region ForwardDeclarations
namespace std {
	class string;
}
#pragma endregion

class Window
{
public:
	Window();
	~Window();
	bool Init(unsigned w, unsigned h, std::string title);
	bool Show();

	virtual unsigned GetWidth();
	virtual unsigned GetHeight();
	virtual void SetWidth(unsigned w) = 0;
	virtual void SetHeight(unsigned h) = 0;
	virtual void SetDimensions(unsigned w, unsigned h) = 0;

protected:
	unsigned mWidth, mHeight;
};

