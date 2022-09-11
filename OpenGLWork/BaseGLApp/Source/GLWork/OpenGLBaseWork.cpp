//
//  OpenGLDriver.cpp
//  BaseGLApp
//
//  Created by 杨得烜 on 2022/9/10.
//

#include "OpenGLBaseWork.hpp"
#include <glad/glad.h>
#include "DearIMGuiHelper/DearIMGuiBaseHelper.hpp"

OpenGLBaseWork::OpenGLBaseWork(int width, int height, std::string name)
    : m_Width(width)
    , m_Height(height)
    , m_Title(name)
{
}

void OpenGLBaseWork::OnInit()
{
    
}

void OpenGLBaseWork::OnUpdate()
{
    
}

void OpenGLBaseWork::OnRender()
{
    ImVec4 clearColor = DearIMGuiBaseHelper::GetInstance()->GetColor();
    glClearColor(clearColor.x, clearColor.y, clearColor.z, clearColor.w);
    glClear(GL_COLOR_BUFFER_BIT);
}

void OpenGLBaseWork::OnDestroy()
{
    
}
