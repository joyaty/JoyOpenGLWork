

#include "Application/GLFWApplication.hpp"
#include "GLWork/OpenGLBaseWork.hpp"
#include "DearIMGuiHelper/DearIMGuiBaseHelper.hpp"

int main()
{
    OpenGLBaseWork openGLWork(1280, 720, "GL HelloWindow");
    GLFWApplication::Run(&openGLWork, DearIMGuiBaseHelper::GetInstance());
}
