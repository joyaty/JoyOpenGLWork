//
//  DearIMGuiBaseHelper.hpp
//  JoyOpenGLWork
//
//  Created by 杨得烜 on 2022/9/10.
//

#ifndef DearIMGuiBaseHelper_hpp
#define DearIMGuiBaseHelper_hpp

#include "imgui.h"

class GLFWwindow;

class DearIMGuiBaseHelper
{
public:
    static DearIMGuiBaseHelper* GetInstance();
    
public:
    /// 初始化DearIMGui
    bool InitializeDearIMGui(GLFWwindow* pWindow, const char* glsl_version);
    /// 销毁DearIMGui
    void TerminateDearIMGui();
    /// 绘制DearIMGui窗口
    void DrawDearIMGuiWindow();
    /// 提交DearIMGui窗口的绘制指令
    void PopulateDearIMGuiCommand();
    
public:
    float GetFloatValue() const {return m_FloatValue;}
    ImVec4 GetColor() const {return m_Color;}
    
protected:
    /// 绘制DearIMGui窗口样式，各个子项目自己组织绘制样式
    virtual void OnDrawWindow();
    
private:
    int m_Counter;
    float m_FloatValue;
    ImVec4 m_Color;
    
private:
    static DearIMGuiBaseHelper* s_Instance;
};

#endif /* DearIMGuiBaseHelper_hpp */
