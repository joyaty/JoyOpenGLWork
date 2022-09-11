# 最小CMake版本要求
cmake_minimum_required(VERSION 3.4)

# 项目名
project(BaseGLApp)
# 包含cmake文件
include("${CMAKE_SOURCE_DIR}/CMake/CMakeMacro.cmake")

# 添加头文件包含目录
message(STATUS "BaseGLApp->CMakeList.txt : CMAKE_CURRENT_SOURCE_DIR = ${CMAKE_CURRENT_SOURCE_DIR}")
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/Source)
include_directories(${CMAKE_SOURCE_DIR}/ThirdParts/GLFW/include)
include_directories(${CMAKE_SOURCE_DIR}/ThirdParts/GLAD/include)
include_directories(${CMAKE_SOURCE_DIR}/ThirdParts/DearIMGui/Source)

# 所有代码文件
set(ALL_FILES
Source/Application/GLFWApplication.cpp
Source/Application/GLFWApplication.hpp
Source/GLWork/OpenGLBaseWork.cpp
Source/GLWork/OpenGLBaseWork.hpp
Source/DearIMGuiHelper/DearIMGuiBaseHelper.cpp
Source/DearIMGuiHelper/DearIMGuiBaseHelper.hpp
# Source/Main.cpp
)

# 添加链接库列表
set(COMMON_LIBS 
glfw
GLAD
DearIMGui
)

# 调用外部cmake定义的宏，将源文件按文件加分组
source_group_by_dir("${ALL_FILES}")

# 生成可执行文件 
add_library(${PROJECT_NAME} STATIC ${ALL_FILES})

# 添加链接库
target_link_libraries(${PROJECT_NAME} ${COMMON_LIBS})

# 添加项目在JoyGLWork文件夹下，便于归类管理
set_target_properties(${PROJECT_NAME} PROPERTIES FOLDER JoyGLWork)
if(GLFW_BUILD_WIN32)
   set_target_properties(${PROJECT_NAME} PROPERTIES LINK_FLAGS "/SUBSYSTEM:WINDOWS /ENTRY:mainCRTStartup") 
endif()