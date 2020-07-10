cmake_minimum_required(VERSION 3.10)

set(PROJECTNAME design_pattern)

project(${PROJECTNAME})

add_compile_options(-std=c++17)

set(CMAKE_BUILD_TYPE "debug")
set(CMAKE_CXX_FLAGS_DEBUG "$ENV{CXXFLAGS} -O0 -Wall -g -ggdb")
set(CMAKE_CXX_FLAGS_RELEASE "$ENV{CXXFLAGS} -O3 -Wall")

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

add_subdirectory(cretional_pattern)
# add_subdirectory(structural_pattern)
add_subdirectory(behavioral_pattern)
