#include "LearnVulkanConfig.h"

#include <glm/vec3.hpp>

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

#include <iostream>

int main (int argc, char** argv)
{
    std::cout << argv[0] << " Version " << LearnVulkan_VERSION_MAJOR << "."
              << LearnVulkan_VERSION_MINOR << std::endl;

    glm::vec3 v = glm::vec3(1.f, 2.f, 3.f);

    std::cout << v.x << "," << v.y << "," << v.z << std::endl;

    glfwInit();

    glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
    GLFWwindow* window = glfwCreateWindow(800, 600, "Learn Vulkan", nullptr, nullptr);

    while(!glfwWindowShouldClose(window)) {
        glfwPollEvents();
    }

    glfwDestroyWindow(window);

    glfwTerminate();

    return 0;
}
