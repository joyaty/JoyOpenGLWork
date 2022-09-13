//
//  GLHelloWindow.cpp
//  BaseGLApp
//
//  Created by 杨得烜 on 2022/9/12.
//

#include "GLHelloWindow.hpp"
#include <glad/glad.h>
#include "GLWorkHelloWindow/IMGuiHelloWindow.hpp"


GLHelloWindow::GLHelloWindow(int width, int height, std::string name)
    : OpenGLBaseWork(width, height, name)
{
    
}

void GLHelloWindow::OnInit()
{
    
}

void GLHelloWindow::OnUpdate()
{
    
}

void GLHelloWindow::OnRender()
{
    ImVec4 clearColor = IMGuiHelloWindow::GetInstance()->GetColor();
    glClearColor(clearColor.x, clearColor.y, clearColor.z, clearColor.w);
    glClear(GL_COLOR_BUFFER_BIT);
}

void GLHelloWindow::OnDestroy()
{
    
}
