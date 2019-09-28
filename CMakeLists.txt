cmake_minimum_required(VERSION 3.14.2)

project(eei CXX)
include(CTest)
include(CPack)

include(${CMAKE_CURRENT_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup(TARGETS)

add_subdirectory(src bin)
