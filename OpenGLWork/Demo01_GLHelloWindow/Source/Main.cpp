/*
 * @Description:
 * @Author: Joy Yang
 * @Date: 2022-09-10 02:43:55
 */

#include "Application/GLFWApplication.hpp"
#include "GLWorkHelloWindow/GLHelloWindow.hpp"
#include "GLWorkHelloWindow/IMGuiHelloWindow.hpp"

int main() {
  GLHelloWindow helloWindow(1280, 720, "GL HelloWindow");
  return GLFWApplication::Run(&helloWindow, IMGuiHelloWindow::GetInstance());
}
