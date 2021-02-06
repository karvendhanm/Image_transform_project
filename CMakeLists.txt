cmake_minimum_required(VERSION 3.17)
project(Image_transform_project)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(uiuc)

add_executable(Image_transform_project
        uiuc/HSLAPixel.cpp
        uiuc/HSLAPixel.h
        uiuc/PNG.cpp
        uiuc/PNG.h
        uiuc/RGB_HSL.h
        ImageTransform.cpp
        ImageTransform.h
        main.cpp uiuc/lodepng/lodepng.cpp uiuc/lodepng/lodepng.h)
