cmake_minimum_required(VERSION 3.10)

# set the project name and version
project(LearnVulkan VERSION 1.0)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

configure_file(LearnVulkanConfig.h.in LearnVulkanConfig.h)

set(CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/CMake" ${CMAKE_MODULE_PATH})
message(STATUS "CMAKE_MODULE_PATH: ${CMAKE_MODULE_PATH}")

# glm
add_subdirectory(Common/3rdParty/glm)
find_package(GLM REQUIRED)
include_directories(${PROJECT_NAME} PUBLIC ${GLM_INCLUDE_DIRS})

add_executable(${PROJECT_NAME} LearnVulkan.cpp)

target_include_directories(${PROJECT_NAME} PUBLIC "${PROJECT_BINARY_DIR}" )
