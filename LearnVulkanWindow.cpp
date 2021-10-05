#include "LearnVulkanWindow.h"

namespace lv {

    LearnVulkanWindow::LearnVulkanWindow (int aWidth, int aHeight, std::string aName) 
        : width(aWidth), height(aHeight), name(aName)
    {
        initWindow();
    }

    LearnVulkanWindow::~LearnVulkanWindow ()
    {
        glfwDestroyWindow(window);
        glfwTerminate();
    }

    void LearnVulkanWindow::initWindow ()
    {
        glfwInit();

        glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
        
        window = glfwCreateWindow(width, height, name.c_str(), nullptr, nullptr);
    }

}