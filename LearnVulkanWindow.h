#pragma once

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

#include <string>

namespace lv {

    class LearnVulkanWindow
    {
    public:
        LearnVulkanWindow(int aWidth, int aHeight, std::string aName);
        ~LearnVulkanWindow();

        LearnVulkanWindow(const LearnVulkanWindow &) = delete;
        LearnVulkanWindow &operator=(const LearnVulkanWindow &) = delete;

        bool ShouldClose() { return glfwWindowShouldClose(window); }

    private:
        void initWindow();

        int width;
        int height;

        std::string name;
        GLFWwindow* window;
    };

}