#include <iostream>
#include <stdlib.h>

#include "06-gouzaoinit.h"

using namespace std;

/*******************************************/
/*
定义一个Teacher类
×   自定义有参默认构造函数
×   使用初始化列表初始化数据
×数据：
×   名字
×   年龄
×成员函数：
×   数据成员的封装函数
×拓展：
×   定义可以带最多学生的个数，此为常量
*/
/********************************************/

Teacher::Teacher(string _name, int _age, int m) : m_strName(_name), m_iAge(_age), m_iMax(m)
{
    std::cout << "Teacher(string _name, int _age) : m_strName(_name), m_iAge(_age)" << std::endl;
}

// void Teacher::setName(string _name)
// {
//     m_strName = _name;
// }
string Teacher::getName()
{
    return m_strName;
}
// void Teacher::setAge(int _age)
// {
//     m_iAge = _age;
// }
int Teacher::getAge()
{
    return m_iAge;
}

int Teacher::getMax()
{
    return m_iMax;
}

int main()
{
    Teacher t1("mary", 12, 150);
    std::cout << t1.getName() << std::endl;
    std::cout << t1.getAge() << std::endl;
    std::cout << t1.getMax() << std::endl;
    return 0;
}