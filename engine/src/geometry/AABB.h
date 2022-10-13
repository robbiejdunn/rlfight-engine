// Axis aligned bounded box header
#pragma once

class AABB
{
public:
    AABB(int width, int height, int location);

    inline void setWidth(int newWidth);
    inline int getWidth() const { return width; }
    void setHeight(int newHeight);
    inline int getHeight() const { return height; }
    void setLocation(int newLocation);
    inline int getLocation() const { return location; }

    void transpose(int units);

private:
    int width;
    int height;
    // location is the x coord of the bottom left corner of the box.
    // y will always == 0 since no aerial movement currently
    int location;
};
