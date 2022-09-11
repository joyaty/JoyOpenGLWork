cmake_minimum_required(VERSION 3.4)

project(Demo01_GLHelloWindow)

# 包含cmake文件
include("${CMAKE_SOURCE_DIR}/CMake/CMakeMacro.cmake")

# 头文件包含路径
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/Source)
include_directories(${CMAKE_SOURCE_DIR}/OpenGLWork/BaseGLApp/Source)
include_directories(${CMAKE_SOURCE_DIR}/ThirdParts/GLFW/include)
include_directories(${CMAKE_SOURCE_DIR}/ThirdParts/GLAD/include)
include_directories(${CMAKE_SOURCE_DIR}/ThirdParts/DearIMGui/Source)

# 所有源码
set(ALL_FILES 
Source/GLWorkHelloWindow/GLHelloWindow.cpp
Source/GLWorkHelloWindow/GLHelloWindow.hpp
Source/GLWorkHelloWindow/IMGuiHelloWindow.cpp
Source/GLWorkHelloWindow/IMGuiHelloWindow.hpp
Source/Main.cpp)

source_group_by_dir("${ALL_FILES}")

# 依赖库
set(COMMON_LIBS 
BaseGLApp)

# 编辑为可执行文件
add_executable(${PROJECT_NAME} ${ALL_FILES})

# 添加链接库
target_link_libraries(${PROJECT_NAME} ${COMMON_LIBS})

# 项目设置到JoyGLWork文件下
set_target_properties(${PROJECT_NAME} PROPERTIES FOLDER JoyGLWork)