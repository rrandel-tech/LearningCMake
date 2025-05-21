cmake_minimum_required(VERSION 3.16)
project(Zenith LANGUAGES CXX)

cmake_policy(SET CMP0077 NEW)

add_subdirectory(ThirdParty)
add_subdirectory(Engine)
add_subdirectory(Editor)