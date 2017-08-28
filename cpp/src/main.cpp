/**
 * C++ trial
 */

#include <iostream>
#include <string>

#include "student.hpp"
#include "shape.hpp"

using namespace std;

int main()
{
    Rectangle rect;

    rect.setWidth(10);
    rect.setHeight(5);

    cout << "Width : " << rect.getWidth() << endl;
    cout << "Height : " << rect.getHeight() << endl;
    cout << "Area : " << rect.getArea() << endl;

    return 0;
}
