/**
 *
 */

#include "shape.hpp"

Shape::Shape()
: width(0), height(0)
{
    cout << "Width : " << width << endl;
    cout << "Height : " << height << endl;
}

inline void Shape::setWidth(int w)
{
    width = w;
}

inline void Shape::setHeight(int h)
{
    height = h;
}

inline int Shape::getWidth(void)
{
    return width;
}

inline int Shape::getHeight(void)
{
    return height;
}
