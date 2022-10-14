#include "AABB.h"

AABB::AABB(int width, int height, int location)
{
    width = width;
    height = height;
    location = location;
}

void AABB::setWidth(int newWidth)
{
    width = newWidth;
}

void AABB::setHeight(int newHeight)
{
    height = newHeight;
}

void AABB::setLocation(int newLocation)
{
    location = newLocation;
}

void AABB::transpose(int units)
{
    location += units;
}
