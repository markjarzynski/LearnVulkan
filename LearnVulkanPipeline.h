#pragma once

#include <string>
#include <vector>

namespace lv
{
    class LearnVulkanPipeline {
    public:
        LearnVulkanPipeline(const std::string& vert_path, const std::string& frag_path);

    private:
        static std::vector<char> read_file(const std::string& file_path);

        void createGraphicsPipeline(const std::string& vert_path, const std::string& frag_path);
    };

}

