//
//  IMGuiHelloWindow.hpp
//  BaseGLApp
//
//  Created by 杨得烜 on 2022/9/12.
//

#ifndef IMGuiHelloWindow_hpp
#define IMGuiHelloWindow_hpp

#include "DearIMGuiHelper/DearIMGuiBaseHelper.hpp"
#include "imgui.h"

class IMGuiHelloWindow : public DearIMGuiBaseHelper
{
public:
    static IMGuiHelloWindow* GetInstance();
        
public:
    float GetFloatValue() const {return m_FloatValue;}
    ImVec4 GetColor() const {return m_Color;}
    
protected:
    virtual void OnDrawWindow() override;

private:
    int m_Counter;
    float m_FloatValue;
    ImVec4 m_Color;
    
private:
    static IMGuiHelloWindow* s_Instance;
};

#endif /* IMGuiHelloWindow_hpp */
