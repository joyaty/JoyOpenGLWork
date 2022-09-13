//
//  DearIMGuiBaseHelper.hpp
//  JoyOpenGLWork
//
//  Created by 杨得烜 on 2022/9/10.
//

#ifndef DearIMGuiBaseHelper_hpp
#define DearIMGuiBaseHelper_hpp

struct GLFWwindow;

class DearIMGuiBaseHelper
{
public:
    /// 初始化DearIMGui
    bool InitializeDearIMGui(GLFWwindow* pWindow, const char* glsl_version);
    /// 销毁DearIMGui
    void TerminateDearIMGui();
    /// 绘制DearIMGui窗口
    void DrawDearIMGuiWindow();
    /// 提交DearIMGui窗口的绘制指令
    void PopulateDearIMGuiCommand();
    
protected:
    /// 绘制DearIMGui窗口样式，各个子项目自己组织绘制样式
    virtual void OnDrawWindow() = 0;
};

#endif /* DearIMGuiBaseHelper_hpp */
