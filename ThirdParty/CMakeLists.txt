set(GLFW_BUILD_TESTS OFF)
set(GLFW_BUILD_EXAMPLES OFF)
set(GLFW_BUILD_DOCS OFF)
add_subdirectory(glfw)

set(SDL_AUDIO OFF)
set(SDL_VIDEO OFF)
add_subdirectory(SDL)

set(SPDLOG_USE_STD_FORMAT ON)
set(SPDLOG_ENABLE_PCH ON)
set(SPDLOG_MSVC_UTF8 ON)
add_subdirectory(spdlog)

add_library(glad STATIC glad/src/glad.c)
target_include_directories(glad PUBLIC glad/include)
