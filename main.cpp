/**
 * @file main.cpp
 * A simple C++ program that manipulates an image.
 *
 * @author University of Illinois CS 225 Course Staff
 * @author Updated by University of Illinois CS 400 Course Staff
**/

#include "ImageTransform.h"
#include "uiuc/PNG.h"
#include <iostream>


int main() {

    uiuc::PNG png, png2, result;

    png.readFromFile("C:/Users/John/CLionProjects/Image_transform_project/alma.png");
    result = grayscale(png);
    result.writeToFile("C:/Users/John/CLionProjects/Image_transform_project/out-grayscale.png");

    result = createSpotlight(png, 450, 150);
    result.writeToFile("C:/Users/John/CLionProjects/Image_transform_project/out-spotlight.png");

    result = illinify(png);
    result.writeToFile("C:/Users/John/CLionProjects/Image_transform_project/out-illinify.png");

    png2.readFromFile("C:/Users/John/CLionProjects/Image_transform_project/overlay.png");
    result = watermark(png, png2);
    result.writeToFile("C:/Users/John/CLionProjects/Image_transform_project/out-watermark.png");

    return 0;
}
