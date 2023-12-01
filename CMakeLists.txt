cmake_minimum_required(VERSION 3.26)
project(olymp)

set(CMAKE_CXX_STANDARD 11)

set(optimizations "-Ofast -funroll-loops -mavx2")

set(debug_options "-D_GLIBCXX_DEBUG=1 -D_GLIBCXX_DEBUG_PEDANTIC=1 -D_FORTIFY_SOURCE=2")

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${optimizations} ${debug_options}")
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -O0")

add_executable(olymp main.cpp)
