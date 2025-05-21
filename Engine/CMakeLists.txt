add_library(Zenith 
	Source/Core/Test.cpp
)

target_compile_features(Zenith PUBLIC cxx_std_20)

target_include_directories(Zenith PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

target_link_libraries(Zenith PUBLIC glfw spdlog glad)
