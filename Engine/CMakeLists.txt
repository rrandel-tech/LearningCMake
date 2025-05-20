add_library(Zenith STATIC ${ENGINE_SRC})

add_subdirectory(Source)

target_include_directories(Zenith PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
)

find_package(OpenGL REQUIRED)

target_link_libraries(Zenith
    PUBLIC
        glfw
				spdlog
				glad
				OpenGL::GL
)
