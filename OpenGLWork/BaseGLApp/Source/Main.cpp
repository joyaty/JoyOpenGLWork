

#include <iostream>

#include <GLFW/glfw3.h>

void framebuffer_size_callback(GLFWwindow*, int, int);

int main()
{
	std::cout << "Hello World!" << std::endl;

	glfwInit();
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

	GLFWwindow* pWindow = glfwCreateWindow(1280, 720, "JoyOpenGLWork", NULL, NULL);
	if (pWindow == NULL)
	{
		glfwTerminate();
		std::cout << "Failed to create GLFW Window" << std::endl;
		return -1;
	}
	glfwMakeContextCurrent(pWindow);
	glfwSetFramebufferSizeCallback(pWindow, framebuffer_size_callback);

	while (!glfwWindowShouldClose(pWindow))
	{
		glfwSwapBuffers(pWindow);
		glfwPollEvents();
	}

	glfwTerminate();
	return 0;
}

void framebuffer_size_callback(GLFWwindow* pWindow, int width, int height)
{

}