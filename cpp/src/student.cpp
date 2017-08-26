/**
 * Student class
 */

#include "student.hpp"


inline void Student::setName(string name)
{
    m_name = name;
}

inline void Student::setAge(int age)
{
    m_age = age;
}

inline string Student::getName(void)
{
    return m_name;
}

inline int Student::getAge(void)
{
    return m_age;
}
