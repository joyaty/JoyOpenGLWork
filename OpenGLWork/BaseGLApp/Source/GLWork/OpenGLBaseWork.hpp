//
//  OpenGLDriver.hpp
//  BaseGLApp
//
//  Created by 杨得烜 on 2022/9/10.
//

#ifndef OpenGLDriver_hpp
#define OpenGLDriver_hpp

#include<string>

class OpenGLBaseWork
{
public:
    OpenGLBaseWork(int width, int height, std::string name);
    
public:
    virtual void OnInit();
    virtual void OnUpdate();
    virtual void OnRender();
    virtual void OnDestroy();
    
public:
    int GetWidth() const {return m_Width;}
    int GetHeight() const {return m_Height;}
    const std::string& GetTitle() const {return m_Title;}
    
protected:
    int m_Width;
    int m_Height;
    std::string m_Title;
};
#endif /* OpenGLDriver_hpp */
