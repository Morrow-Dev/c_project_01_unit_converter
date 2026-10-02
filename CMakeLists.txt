cmake_minimum_required(VERSION 4.3)
project(c_project_01_unit_converter C)

set(CMAKE_C_STANDARD 11)

add_executable(c_project_01_unit_converter main.c
        Include/functions.h
        Include/macro.h
        Menus/lengthmenu.c
        Conversions/length.c
        Conversions/length.h
        Menus/startmenu.c
        Menus/startmenu.h
        Conversions/temperature.c
        Conversions/temperature.h
        Menus/temperaturemenu.c
        Conversions/velocity.c
        Conversions/velocity.h
        Menus/velocitymenu.c
        Conversions/force.c
        Conversions/force.h
        Menus/forcemenu.c)
