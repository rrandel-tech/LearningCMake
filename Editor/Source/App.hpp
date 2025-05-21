#pragma once

#include <GLFW/glfw3.h>

class Application {
public:
	Application(int width, int height, const char* title);
	~Application();

	bool Init();
	void Run();

private:
	int m_Width;
	int m_Height;
	const char* m_Title;
	GLFWwindow* m_Window;
};