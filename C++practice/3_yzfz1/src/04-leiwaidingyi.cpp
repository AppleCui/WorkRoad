#include <iostream>
#include <stdlib.h>

#include "04-leiwaidingyi.h"

using namespace std;

/*******************************************/
/*
定义一个Teacher类，要求分别采用同文件类外定义和分文件类外定义
的方式完成，具体要求如下：
×数据成员：
×   名字
×   年龄
×   性别
×成员函数：
×   数据成员的封装函数
×   授课teach
*/
/********************************************/

//1. 同文件类外定义：
// class Teacher
// {
// public:
//     void setGender(string _gender);
//     string getGender();
//     void setName(string _name);
//     string getName();
//     void setAge(int _age);
//     int getAge();
//     void teach(int _score);
//     int getScore();

// private:
//     string m_strName;
//     int m_iAge;
//     string m_strGender;
//     int m_iScore = 0;
// };

//下面这部分用作１或２都可以，只不过用作２时，其实应该在.cpp
//中实现main函数和实现的文件应分开写，这里是合在一起了。
void Teacher::setGender(string _gender)
{
    m_strGender = _gender;
}
string Teacher::getGender()
{
    return m_strGender;
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
void Teacher::teach(int _score)
{
    m_iScore += _score;
}
int Teacher::getScore()
{
    return m_iScore;
}

int main()
{
    Teacher tea;
    tea.setGender("Male");
    tea.setName("Jason");
    tea.setAge(24);
    tea.teach(66);
    std::cout << "性别： " << tea.getGender() << std::endl;
    std::cout << "姓名： " << tea.getName() << std::endl;
    std::cout << "年龄： " << tea.getAge() << std::endl;
    std::cout << "学分： " << tea.getScore() << std::endl;
    return 0;
}