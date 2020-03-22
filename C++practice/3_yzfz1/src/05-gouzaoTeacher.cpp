#include "05-gouzaoTeacher.h"

using namespace std;

Teacher::Teacher()
{
    m_strName = "Jason";
    m_iAge = 24;
    std::cout << "Teacher()" << std::endl;
}
Teacher::Teacher(string _name, int _age)
{
    m_strName = _name;
    m_iAge = _age;
    std::cout << "Teacher(string _name, int _age)" << std::endl;
}
void Teacher::setName(string _name)
{
    m_strName = _name;
}
string Teacher::getName()
{
    return m_strName;
}
void Teacher::setAge(int _age)
{
    m_iAge = _age;
}
int Teacher::getAge()
{
    return m_iAge;
}