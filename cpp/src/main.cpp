/**
 * C++ trial
 */

#include <iostream>
#include <string>

using namespace std;

class Student
{
    public:

        void setName(string name) {
            m_name = name;
        }

        void setAge(int age) {
            m_age = age;
        }

        string getName() {
            return m_name;
        }

        int getAge() {
            return m_age;
        }

    protected:
        string m_name;
        int m_age;
}

int main()
{
    Student student1;

    student1.setAge(25);
    student1.setName("Stephen Janz");

    cout << "Name : " << student1.getName() << endl;
    cout << "Age : " << student1.getAge() << endl;

    return 0;
}
