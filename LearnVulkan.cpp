#include "LearnVulkanConfig.h"

#include <iostream>

int main( int argc, char** argv)
{
    std::cout << argv[0] << " Version " << LearnVulkan_VERSION_MAJOR << "."
              << LearnVulkan_VERSION_MINOR << std::endl;
    return 0;
}
