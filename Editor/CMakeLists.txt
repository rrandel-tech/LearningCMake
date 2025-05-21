add_executable(Zenith-Editor
	Source/Zenith-Editor.cpp
)

target_compile_features(Zenith-Editor PRIVATE cxx_std_20)

target_include_directories(Zenith-Editor PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

target_link_libraries(Zenith-Editor PRIVATE Zenith)