add_library(Zenith

	# Core
	Source/Zenith/Core/Application.cpp
	Source/Zenith/Core/Application.hpp
	Source/Zenith/Core/Assert.hpp
	Source/Zenith/Core/Base.cpp
	Source/Zenith/Core/Base.hpp
	Source/Zenith/Core/Log.cpp
	Source/Zenith/Core/Log.hpp
	Source/Zenith/Core/Version.hpp
	
	Source/Zenith/EntryPoint.hpp

	Source/Zenith.hpp
	Source/znpch.cpp
)

target_compile_features(Zenith PUBLIC cxx_std_20)

target_include_directories(Zenith PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/Source)

target_precompile_headers(Zenith PRIVATE Source/znpch.hpp)

target_link_libraries(Zenith PUBLIC glfw spdlog glad)
