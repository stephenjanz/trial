#ifndef STUDENT_HPP
#define STUDENT_HPP

#include <string>

class Student
{
    public:
        void setName(string);
        void setAge(int);
        std::string getName(void);
        int getAge(void);

    protected:
        std::string m_name;
        int m_age;
};

#endif /** STUDENT_HPP */
