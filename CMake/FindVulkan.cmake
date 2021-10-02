# FindVulkan

include(FindPackageHandleStandardArgs)
find_path(Vulkan_INCLUDE_DIR NAMES vulkan/vulkan.h PATHS "C:/VulkanSDK/1.2.189.2/Include")
set(Vulkan_INCLUDE_DIRS ${Vulkan_INCLUDE_DIR})
find_package_handle_standard_args(Vulkan REQUIRED_VARS Vulkan_INCLUDE_DIRS VERSION_VAR Vulkan_VERSION)