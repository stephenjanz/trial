/**
 * C++ trial
 */

#include <iostream>
#include <string>

#include "student.hpp"

using namespace std;

int main()
{
    Student student1;

    student1.setAge(25);
    student1.setName("Stephen Janz");

    cout << "Name : " << student1.getName() << endl;
    cout << "Age : " << student1.getAge() << endl;

    return 0;
}
