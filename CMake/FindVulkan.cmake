# FindVulkan

include(FindPackageHandleStandardArgs)

find_path(Vulkan_INCLUDE_DIR NAMES vulkan/vulkan.h PATHS "/usr/include/" "/usr/local/include/" "C:/VulkanSDK/*/Include/")

set(Vulkan_INCLUDE_DIRS ${Vulkan_INCLUDE_DIR})

find_package_handle_standard_args(Vulkan REQUIRED_VARS Vulkan_INCLUDE_DIRS VERSION_VAR Vulkan_VERSION)