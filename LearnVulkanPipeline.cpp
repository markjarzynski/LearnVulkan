#include "LearnVulkanPipeline.h"

#include <fstream>
#include <stdexcept>
#include <iostream>

namespace lv
{
    LearnVulkanPipeline::LearnVulkanPipeline(const std::string& vert_path, const std::string& frag_path)
    {
        createGraphicsPipeline(vert_path, frag_path);
    }

    std::vector<char> LearnVulkanPipeline::read_file(const std::string& file_path)
    {
        std::ifstream file {file_path, std::ios::ate | std::ios::binary};

        if (!file.is_open()) {
            throw std::runtime_error("ERROR: Failed to open file: " + file_path);
        }

        size_t file_size = static_cast<size_t>(file.tellg());
        std::vector<char> buffer(file_size);

        file.seekg(0);
        file.read(buffer.data(), file_size);

        file.close();
        return buffer;
    }

    void LearnVulkanPipeline::createGraphicsPipeline(const std::string& vert_path, const std::string& frag_path)
    {
        auto vert_code = read_file(vert_path);
        auto frag_code = read_file(frag_path);

        std::cout << "Vertex Shader size: " << vert_code.size() << std::endl;
        std::cout << "Fragment Shader size: " << frag_code.size() << std::endl;
    }
}