cmake_minimum_required(VERSION 3.9)
project (hardware-test)
include (../../32blit.cmake)
blit_executable (hardware-test hardware-test.cpp)
blit_metadata (hardware-test metadata.yml)
