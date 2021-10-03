# FindGLM

include(FindPackageHandleStandardArgs)

find_path(GLM_INCLUDE_DIR NAMES glm/glm.hpp PATHS "/usr/include/" "/usr/local/include/" "${CMAKE_SOURCE_DIR}/Common/3rdParty/glm")

set(GLM_INCLUDE_DIRS ${GLM_INCLUDE_DIR})

find_package_handle_standard_args(GLM REQUIRED_VARS GLM_INCLUDE_DIRS VERSION_VAR GLM_VERSION)