add_executable(Zenith-Editor ${EDITOR_SRC})

add_subdirectory(Source)

target_include_directories(Zenith-Editor PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
)

target_link_libraries(Zenith-Editor
    PRIVATE
        Zenith
)