#ifndef IMAGE_TRANSFORM_PROJECT_IMAGETRANSFORM_H
#define IMAGE_TRANSFORM_PROJECT_IMAGETRANSFORM_H

#endif //IMAGE_TRANSFORM_PROJECT_IMAGETRANSFORM_H

#pragma once

#include "uiuc/PNG.h"
using namespace uiuc;

PNG grayscale(PNG image);
PNG createSpotlight(PNG image, int centerX, int centerY);
PNG illinify(PNG image);
PNG watermark(PNG firstImage, PNG secondImage);
double getDistance(double hue, double illicolor);
int getEuclideanDistance(int x1, int x2, int y1, int y2);