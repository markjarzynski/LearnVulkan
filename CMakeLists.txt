cmake_minimum_required(VERSION 3.10)

# set the project name and version
project(LearnVulkan VERSION 0.0)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

configure_file(LearnVulkanConfig.h.in LearnVulkanConfig.h)

add_executable(${PROJECT_NAME} LearnVulkan.cpp)

target_include_directories(${PROJECT_NAME} PUBLIC "${PROJECT_BINARY_DIR}" )
