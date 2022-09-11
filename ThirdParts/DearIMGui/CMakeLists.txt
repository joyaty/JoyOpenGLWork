# 最小CMake版本需求
cmake_minimum_required(VERSION 3.4)
# 项目名称
project(DearIMGui)
# 包含CMake自定义宏定义文件
include("${CMAKE_SOURCE_DIR}/CMake/CMakeMacro.cmake")
# 添加GLFW索引头文件
include_directories(${CMAKE_SOURCE_DIR}/ThirdParts/GLFW/include)

# 项目源文件
set(ALL_FILES 
Source/imgui.cpp
Source/imgui.h
Source/imgui_internal.h
Source/imgui_tables.cpp
Source/imgui_widgets.cpp
Source/imgui_draw.cpp
Source/imgui_demo.cpp
Source/imconfig.h
Source/imgui_impl_glfw.cpp
Source/imgui_impl_glfw.h
Source/imgui_impl_opengl3.cpp
Source/imgui_impl_opengl3.h
# Source/imgui_impl_opengl3_loader.h
Source/imstb_rectpack.h
Source/imstb_textedit.h
Source/imstb_truetype.h
)
# 调用CMake宏，按文件目录分类项目源文件
source_group_by_dir("${ALL_FILES}")
# 项目添加为静态库
add_library(${PROJECT_NAME} STATIC ${ALL_FILES})
# 项目添加在ThirdParts文件夹下
set_target_properties(${PROJECT_NAME} PROPERTIES FOLDER ThirdParts)
