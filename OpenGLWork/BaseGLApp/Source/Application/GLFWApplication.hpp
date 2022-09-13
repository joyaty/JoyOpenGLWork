//
//  GLFWApplication.hpp
//  BaseGLApp
//
//  Created by 杨得烜 on 2022/9/10.
//

#ifndef GLFWApplication_hpp
#define GLFWApplication_hpp

class OpenGLBaseWork;
class DearIMGuiBaseHelper;
struct GLFWwindow;

class GLFWApplication
{
public:
    static int Run(OpenGLBaseWork* pBaseWork, DearIMGuiBaseHelper* pIMGuiHelper);
    
private:
    // 窗口尺寸变化回调
    static void OnFrameBufferSizeCallback(GLFWwindow* pWindow, int width, int height);
    static void OnGLFWErrorCallback(int errorCode, const char* description);
};

#endif /* GLFWApplication_hpp */
