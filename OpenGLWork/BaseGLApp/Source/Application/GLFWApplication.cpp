//
//  GLFWApplication.cpp
//  BaseGLApp
//
//  Created by 杨得烜 on 2022/9/10.
//

#include "GLFWApplication.hpp"
#include <iostream>
#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include "GLWork/OpenGLBaseWork.hpp"
#include "DearIMGuiHelper/DearIMGuiBaseHelper.hpp"

int GLFWApplication::Run(OpenGLBaseWork *pBaseWork, DearIMGuiBaseHelper *pIMGuiHelper)
{
    // 设置GLFW错误回调处理函数
    glfwSetErrorCallback(GLFWApplication::OnGLFWErrorCallback);
    // 初始化GLFW
    glfwInit();
    const char* glsl_version = "#version 330";
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
    glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GLFW_TRUE);      // require on Mac
    // 创建GLFW窗口
    GLFWwindow* pWindow = glfwCreateWindow(pBaseWork->GetWidth(), pBaseWork->GetHeight(), pBaseWork->GetTitle().c_str(), NULL, NULL);
    if(pWindow == nullptr)
    {
        glfwTerminate();
        std::cout<<"Failed to create GLFW Window"<<std::endl;
        return -1;
    }
    // 设置窗口为当前上下文
    glfwMakeContextCurrent(pWindow);
    // 开启vsync(垂直同步)
    glfwSwapInterval(1);
    // 初始化glad
    if(!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
    {
        glfwTerminate();
        std::cout<<"Failed to initialize glad"<<std::endl;
        return -1;
    }
    pIMGuiHelper->InitializeDearIMGui(pWindow, glsl_version);
    // 设置视口
    glViewport(0, 0, pBaseWork->GetWidth(), pBaseWork->GetHeight());
    // 设置窗口尺寸变更回调
    glfwSetFramebufferSizeCallback(pWindow, GLFWApplication::OnFrameBufferSizeCallback);
    // 初始化OpenGL工作内容
    pBaseWork->OnInit();
    // 窗口循环
    while(!glfwWindowShouldClose(pWindow))
    {
        pBaseWork->OnUpdate();
        pBaseWork->OnRender();
        pIMGuiHelper->DrawDearIMGuiWindow();
        pIMGuiHelper->PopulateDearIMGuiCommand();
        // 交换缓冲区
        glfwSwapBuffers(pWindow);
        // 抛出事件
        glfwPollEvents();
    }
    // 销毁OpenGL工作
    pBaseWork->OnDestroy();
    // 销毁DearIMGui
    pIMGuiHelper->TerminateDearIMGui();
    // 销毁GLFW
    glfwTerminate();
    return 0;
    
    
}

void GLFWApplication::OnGLFWErrorCallback(int errorCode, const char *description)
{
    
}

void GLFWApplication::OnFrameBufferSizeCallback(GLFWwindow *pWindow, int width, int height)
{
    glViewport(0, 0, width, height);
}
