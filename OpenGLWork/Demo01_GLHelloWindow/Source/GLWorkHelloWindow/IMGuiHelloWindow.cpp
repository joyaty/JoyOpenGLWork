//
//  IMGuiHelloWindow.cpp
//  BaseGLApp
//
//  Created by 杨得烜 on 2022/9/12.
//

#include "IMGuiHelloWindow.hpp"

IMGuiHelloWindow* IMGuiHelloWindow::s_Instance = nullptr;

IMGuiHelloWindow* IMGuiHelloWindow::GetInstance()
{
    if(s_Instance == nullptr)
    {
        s_Instance = new IMGuiHelloWindow();
    }
    return s_Instance;
}

void IMGuiHelloWindow::OnDrawWindow()
{
    ImGui::Begin("Hello, world!");                          // Create a window called "Hello, world!" and append into it.

    ImGui::Text("This is some useful text.");               // Display some text (you can use a format strings too)

    ImGui::SliderFloat("float", &m_FloatValue, 0.0f, 1.0f);            // Edit 1 float using a slider from 0.0f to 1.0f
    ImGui::ColorEdit3("clear color", (float*)&m_Color); // Edit 3 floats representing a color

    if (ImGui::Button("Button"))                            // Buttons return true when clicked (most widgets return true when edited/activated)
        ++m_Counter;
    ImGui::SameLine();
    ImGui::Text("counter = %d", m_Counter);

    ImGui::Text("Application average %.3f ms/frame (%.1f FPS)", 1000.0f / ImGui::GetIO().Framerate, ImGui::GetIO().Framerate);
    ImGui::End();

}
