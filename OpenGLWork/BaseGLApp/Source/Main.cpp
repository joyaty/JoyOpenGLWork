

#include <iostream>
// 注意，需要将GLAD头文件放在GLFW之前，GLAD头文件包含了OpenGL相关头文件的引用，需要在任何依赖OpenGL的库之前引入
#include <glad/glad.h>
#include <GLFW/glfw3.h>

void framebuffer_size_callback(GLFWwindow*, int, int);

int main()
{
	std::cout << "Hello World!" << std::endl;

	glfwInit();
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
#ifdef _GLFW_COCOA
    glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
#endif

	GLFWwindow* pWindow = glfwCreateWindow(1280, 720, "JoyOpenGLWork", NULL, NULL);
	if (pWindow == NULL)
	{
		glfwTerminate();
		std::cout << "Failed to create GLFW Window" << std::endl;
		return -1;
	}
	glfwMakeContextCurrent(pWindow);
	if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
	{
		glfwTerminate();
		std::cout << "Failed to initialize glad" << std::endl;
		return -1;
	}
	glViewport(0, 0, 1280, 720);
	glfwSetFramebufferSizeCallback(pWindow, framebuffer_size_callback);

	while (!glfwWindowShouldClose(pWindow))
	{
		glClearColor(0.2f, 0.3f, 0.3f, 1.0f);
		glClear(GL_COLOR_BUFFER_BIT);
		glfwSwapBuffers(pWindow);
		glfwPollEvents();
	}

	glfwTerminate();
	return 0;
}

void framebuffer_size_callback(GLFWwindow* pWindow, int width, int height)
{
	glViewport(0, 0, width, height);
}
