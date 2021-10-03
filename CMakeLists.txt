cmake_minimum_required(VERSION 3.10)

# set the project name and version
project(LearnVulkan VERSION 2.0)


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


# vulkan
find_package(Vulkan REQUIRED)

# glfw
# disable building of glfw's docs, tests, and examples
set(GLFW_BUILD_DOCS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_TESTS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)
add_subdirectory(Common/3rdParty/glfw)

add_executable(${PROJECT_NAME} LearnVulkan.cpp)

target_include_directories(${PROJECT_NAME} PUBLIC "${PROJECT_BINARY_DIR}" "${Vulkan_INCLUDE_DIRS}")
target_link_libraries(${PROJECT_NAME} glfw)