cmake_minimum_required(VERSION 3.23)
project(Calculator)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)


find_package(Qt5 COMPONENTS
        Core
        Gui
        Widgets
        REQUIRED)

add_executable(Calculator
        main.cpp
        main_window.cpp
        main_window.h
        main_window.ui
        BigNum.cpp
        BigNum.h
        Program.cpp
        Program.h
        )
target_link_libraries(Calculator
        Qt5::Core
        Qt5::Gui
        Qt5::Widgets
        )

