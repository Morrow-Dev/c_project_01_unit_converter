cmake_minimum_required(VERSION 4.3)
project(c_project_01_unit_converter C)

set(CMAKE_C_STANDARD 11)

add_executable(c_project_01_unit_converter main.c
        Include/functions.h
        Include/macro.h
        menu.c
        conversionfunctions.c)
