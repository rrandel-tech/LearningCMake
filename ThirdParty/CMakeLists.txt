set(GLFW_BUILD_TESTS OFF)
set(GLFW_BUILD_EXAMPLES OFF)
set(GLFW_BUILD_DOCS OFF)

add_subdirectory(glfw)
add_subdirectory(spdlog)

add_library(glad STATIC glad/src/glad.c)
target_include_directories(glad PUBLIC glad/include)
