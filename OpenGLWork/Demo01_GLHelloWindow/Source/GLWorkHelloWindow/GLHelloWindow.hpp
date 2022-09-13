//
//  GLHelloWindow.hpp
//  BaseGLApp
//
//  Created by 杨得烜 on 2022/9/12.
//

#ifndef GLHelloWindow_hpp
#define GLHelloWindow_hpp

#include "GLWork/OpenGLBaseWork.hpp"

class GLHelloWindow : public OpenGLBaseWork
{
public:
	GLHelloWindow(int width, int height, std::string name);

public:
	virtual void OnInit() override;
	virtual void OnUpdate() override;
	virtual void OnRender() override;
	virtual void OnDestroy() override;

};

#endif /* GLHelloWindow_hpp */
