cmake_minimum_required(VERSION 3.9)
project (tilt)
include (../../32blit.cmake)
blit_executable (tilt tilt.cpp)
blit_metadata (tilt metadata.yml)
