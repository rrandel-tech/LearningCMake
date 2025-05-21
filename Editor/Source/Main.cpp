#include <iostream>
#include <spdlog/spdlog.h>
#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include "App.hpp"

Application::Application(int width, int height, const char* title)
		: m_Width(width), m_Height(height), m_Title(title), m_Window(nullptr) {}

Application::~Application() {
		if (m_Window)
				glfwDestroyWindow(m_Window);
		glfwTerminate();
		spdlog::info("Exited cleanly.");
}

bool Application::Init() {
		spdlog::info("Hello, World!");

		if (!glfwInit()) {
				spdlog::error("Failed to initialize GLFW.");
				return false;
		}

		glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
		glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 5);
		glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

		m_Window = glfwCreateWindow(m_Width, m_Height, m_Title, nullptr, nullptr);
		if (!m_Window) {
				spdlog::error("Failed to create GLFW window.");
				glfwTerminate();
				return false;
		}

		glfwMakeContextCurrent(m_Window);

		if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)) {
				spdlog::error("Failed to initialize GLAD.");
				return false;
		}

		return true;
}

void Application::Run() {
		while (!glfwWindowShouldClose(m_Window)) {
				glfwPollEvents();

				glClearColor(0.2f, 0.2f, 0.2f, 1.0f);
				glClear(GL_COLOR_BUFFER_BIT);

				glfwSwapBuffers(m_Window);
		}
}

int main() {
		Application app(1280, 720, "Zenith Editor");

		if (!app.Init())
				return -1;

		app.Run();
		return 0;
}