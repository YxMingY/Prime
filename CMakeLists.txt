cmake_minimum_required(VERSION 3.14)
project(Prime)

set(CMAKE_CXX_STANDARD 14)

add_executable(Prime main.cpp lib/libstring.h lib/libarray.h)