/**
 * Student class
 */

#include <string>

#include "student.hpp"

using namespace std;

void Student::setName(string name)
{
    m_name = name;
}

void Student::setAge(int age)
{
    m_age = age;
}

string Student::getName(void)
{
    return m_name;
}

int Student::getAge(void)
{
    return m_age;
}
