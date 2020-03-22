#include <iostream>
#include <stdlib.h>

using namespace std;

class Teacher
{
public:
    Teacher(string _name = "Jason", int _age = 25, int m = 100);

    // void setName(string _name);
    string getName();
    // void setAge(int _age);
    int getAge();
    int getMax();

private:
    string m_strName;
    int m_iAge;
    const int m_iMax;
};