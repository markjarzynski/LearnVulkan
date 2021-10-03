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

## Step 1 - GLM

Next we'll set up CMake to include external libraries starting with GLM.

1. Download or git clone GLM into `Common/3rdParty`.
2. Next create a `CMake` directory and inside there create a `FindGLM.cmake`. Then in `CMakeLists.txt` set `CMAKE_MODULE_PATH` to point to it the new directory.
3. Update `CMakeLists.txt` to include `add_dubdirectory`, `find_package`, and `include_directories` for glm.
4. CMake should now be finding and including the GLM we added.
5. Check that it works, by updating `LearnVulkan.cpp` to include a glm header file and using a glm class or function.

## Step 2 - GLFW

Next we'll include another 3rdParty library, GLFW. GLFW is a cross platform library for creating windows, contexts, etc. We'll follow [these](https://cmake.org/cmake/help/latest/guide/tutorial/Adding%20a%20Library.html) [two](https://www.glfw.org/docs/3.3/build_guide.html#build_link_cmake_source) guides for including a library. We'll also need Vulkan at this point, so we can just straight to creating a Vulkan window.

1. Download or clone the glfw repo into `Common/3rdParty/glfw`. If cloning, checkout the `latest` branch.
2. Download & install the Vulkan SDK from [here](https://www.lunarg.com/vulkan-sdk/).
3. Update `CMakeLists.txt` to include glfw. We're also going to make sure it doesn't compile the docs, tests, and examples.
    ```
    set(GLFW_BUILD_DOCS OFF CACHE BOOL "" FORCE)
    set(GLFW_BUILD_TESTS OFF CACHE BOOL "" FORCE)
    set(GLFW_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)
    add_subdirectory(Common/3rdParty/glfw)
    ```
4. Update `CMakeLists.txt` to find Vulkan. If CMake has trouble finding Vulkan try manually setting VULKAN_SDK to the correct path.
    ```
    find_package(Vulkan REQUIRED)
    ```
5. Now at the end of `CMakeLists.txt` we'll have to update the target_include_directories line to include the `Vulkan_INCLUDE_DIRS` and add a target_link_libraries to link `glfw` and the `Vulkan_LIBRARIES`
    ```
    target_include_directories(${PROJECT_NAME} PUBLIC "${PROJECT_BINARY_DIR}" "${Vulkan_INCLUDE_DIRS}")
    target_link_libraries(${PROJECT_NAME} glfw)
    ```
5. To make sure it all works, edit `LearnVulkan.cpp` to create a glfw window. Since we're using Vulkan, GLFW has a define that needs to be set. Also don't forget to include the glfw3 header.
    ```
    #define GLFW_INCLUDE_VULKAN
    #include <GLFW/glfw3.h>
    ```
