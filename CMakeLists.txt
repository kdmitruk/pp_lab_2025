cmake_minimum_required(VERSION 3.16)

project(pp_lab_2025 CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

file(GLOB LAB_DIRS RELATIVE ${CMAKE_SOURCE_DIR} lab_*)

foreach(LAB ${LAB_DIRS})
    if(IS_DIRECTORY ${CMAKE_SOURCE_DIR}/${LAB})
        add_subdirectory(${LAB})
    endif()
endforeach()
