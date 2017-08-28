/**
 *
 */

#include <iostream>

#include "shape.hpp"

using namespace std;

Shape::Shape()
: width(0), height(0)
{
    cout << "Width : " << width << endl;
    cout << "Height : " << height << endl;
}

void Shape::setWidth(int w)
{
    width = w;
}

void Shape::setHeight(int h)
{
    height = h;
}

int Shape::getWidth(void)
{
    return width;
}

int Shape::getHeight(void)
{
    return height;
}
