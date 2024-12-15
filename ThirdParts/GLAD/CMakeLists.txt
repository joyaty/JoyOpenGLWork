cmake_minimum_required(VERSION 3.10)

project(GLAD)

include_directories(${CMAKE_SOURCE_DIR}/ThirdParts/GLAD/include)

set(ALL_FILES 
src/glad.c)

add_library(${PROJECT_NAME} STATIC ${ALL_FILES})

set_target_properties(${PROJECT_NAME} PROPERTIES FOLDER ThirdParts)