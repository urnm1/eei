cmake_minimum_required(VERSION 3.14.2)

project(eei CXX)

include(${CMAKE_CURRENT_LIST_DIR}/conanbuildinfo.cmake)
conan_basic_setup(TARGETS)

add_subdirectory(src bin)
