#ifndef STUDENT_HPP
#define STUDENT_HPP

class Student
{
    public:
        void setName(string);
        void setAge(int);
        string getName(void);
        int getAge(void);

    protected:
        string m_name;
        int m_age;
};

#endif /** STUDENT_HPP */
