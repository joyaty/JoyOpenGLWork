cmake_minimum_required(VERSION 3.4)

project(JoyOpenGLWork)

# 测试输出项目名称
message(STATUS "Top->CMakeList.txt : CMAKE_PROJECT_NAME = ${CMAKE_PROJECT_NAME}")
message(STATUS "Top->CMakeList.txt : PROJECT_NAME = ${PROJECT_NAME}")

# 测试输入内置目录
message(STATUS "Top->CMakeList.txt : CMAKE_SOURCE_DIR = ${CMAKE_SOURCE_DIR}")
message(STATUS "Top->CMakeList.txt : PROJECT_SOURCE_DIR = ${PROJECT_SOURCE_DIR}")
message(STATUS "Top->CMakeList.txt : JoyOpenGLWork_SOURCE_DIR = ${JoyOpenGLWork_SOURCE_DIR}")
message(STATUS "Top->CMakeList.txt : CMAKE_BINARY_DIR = ${CMAKE_BINARY_DIR}")
message(STATUS "Top->CMakeList.txt : PROJECT_BINARY_DIR = ${PROJECT_BINARY_DIR}")
message(STATUS "Top->CMakeList.txt : JoyOpenGLWork_SOURCE_DIR = ${JoyOpenGLWork_BINARY_DIR}")
message(STATUS "Top->CMakeList.txt : CMAKE_CURRENT_SOURCE_DIR = ${CMAKE_CURRENT_SOURCE_DIR}")
message(STATUS "Top->CMakeList.txt : CMAKE_CURRENT_BINARY_DIR = ${CMAKE_CURRENT_BINARY_DIR}")
message(STATUS "Top->CMakeList.txt : CMAKE_CURRENT_LIST_DIR = ${CMAKE_CURRENT_LIST_DIR}")

# Turn on the ability to create folders to organize projects (.vcproj)
# It creates "CMakePredefinedTargets" folder by default and adds CMake
# defined projects like INSTALL.vcproj and ZERO_CHECK.vcproj
set_property(GLOBAL PROPERTY USE_FOLDERS ON)

# 设置C++版本标准
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
## 添加UNICODE/_UNICODE宏 使用unicode字符集
add_definitions(-DUNICODE -D_UNICODE)

add_subdirectory(${PROJECT_SOURCE_DIR}/ThirdParts/GLFW)
add_subdirectory(${PROJECT_SOURCE_DIR}/ThirdParts/GLAD)
add_subdirectory(${PROJECT_SOURCE_DIR}/ThirdParts/DearIMGui)
add_subdirectory(${PROJECT_SOURCE_DIR}/OpenGLWork/BaseGLApp)
add_subdirectory(${PROJECT_SOURCE_DIR}/OpenGLWork/Demo01_GLHelloWindow)