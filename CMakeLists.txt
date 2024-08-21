cmake_minimum_required(VERSION 3.12)

#Name project
SET(ProjectName pico-project-template)

#Import libraries
include(pico_sdk_import.cmake)

# Define project
project(${ProjectName} C CXX ASM)
set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

# Initialize the Raspberry Pi Pico SDK
pico_sdk_init()

# Add subdirectories
add_subdirectory(src)
add_subdirectory(lib)