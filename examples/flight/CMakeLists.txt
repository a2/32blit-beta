cmake_minimum_required(VERSION 3.9)
project (flight)
include (../../32blit.cmake)
blit_executable (flight flight.cpp)
blit_assets_yaml (flight assets.yml)
blit_metadata (flight metadata.yml)