Learn Vulkan
============

**Note: This is a work in progress**

The goal of this project is to help learn Vulkan from the ground up. Hopefully, through git log and tags, others could possibly follow along. Despite the same name as [LearnVulkan](https://learnvulkan.com/) this is not that.

Some of the following things I plan on including:

* [CMake](https://cmake.org/)
* [GLFW](https://www.glfw.org/)
* [GLM](https://glm.g-truc.net/)
* [Vulkan](https://www.vulkan.org/) (obviously)
* [MoltenVK](https://moltengl.com/moltenvk/)
* [tinyobjloader](https://github.com/tinyobjloader/tinyobjloader)

## Step 0 - CMake

First start by setting up CMake, we'll start with something really basic, mostly following [this](https://cmake.org/cmake/help/latest/guide/tutorial/A%20Basic%20Starting%20Point.html) guide.

1. Create a `CMakeLists.txt` in the root of the directory.
2. Create a `LearnVulkan.cpp` with a main() function.
3. Create a `LearnVulkanConfig.in.h`, which CMake will auto update with our version number defined in `CMakeLists.txt`
4. Now we should be able to compile the project using CMake:
    ```
    cmake -B build
    cmake --build build
    ```
5. Then run it
    ```
    build/LearnVulkan
    ```
