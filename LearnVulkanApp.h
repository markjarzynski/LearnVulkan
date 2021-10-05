#pragma once

#include "LearnVulkanWindow.h"
#include "LearnVulkanPipeline.h"

#include <string>

namespace lv
{

    class LearnVulkanApp {
    public:

        LearnVulkanApp() { }

        static constexpr int WIDTH = 800;
        static constexpr int HEIGHT = 600;

        void run();
        
    private:

        LearnVulkanWindow lvWindow {WIDTH, HEIGHT, "Learn Vulkan"};
        LearnVulkanPipeline lvPipeline {"shaders/simple.vert.spv", "shaders/simple.frag.spv"};
        
    };

}
