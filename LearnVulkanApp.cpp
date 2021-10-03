#include "LearnVulkanApp.h"

namespace lv
{

    void LearnVulkanApp::run ()
    {
        while(!lvWindow.ShouldClose()) {
            glfwPollEvents();
        }
    }

}