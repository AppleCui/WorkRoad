#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

class Teacher
{
public:
    Teacher();                       //无参构造函数
    Teacher(string _name, int _age); //有参构造函数
    void setName(string _name);
    string getName();
    void setAge(int _age);
    int getAge();

private:
    string m_strName;
    int m_iAge;
};