#include <iostream>
using namespace std;

class AxisAlignedBoundedBox
{
public:
    int width, height;

    void printArea()
    {
        int area;
        area = width * height;
        cout << "Area is: " << area;
    }
};

class DragonKnightHurtbox
{
public:
    AxisAlignedBoundedBox hbox;

    void new()
}

class Rectangle
{
public:
    int width, height;

    void printArea()
    {
        int area;
        area = width * height;
        cout << "Area is: " << area;
    }
};

int main()
{
    Rectangle rect;
    rect.width = 2;
    rect.height = 4;
    rect.printArea();
    return 0;
}