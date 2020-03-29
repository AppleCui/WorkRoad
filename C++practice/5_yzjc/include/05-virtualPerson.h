#pragma once
//此处也可以采用宏定义的方法来消除重复定义对于父类同时被多个子类集成带来的影响
// #ifndef VIRTUAL_PERSON_H
// #define VIRTUAL_PERSON_H

#include <iostream>
#include <stdlib.h>

using namespace std;
namespace virtualjc
{
class Person
{
public:
    Person(string color = "blue");
    virtual ~Person();
    void printColor();

protected:
    string m_strColor;
};

Person::Person(string color)
{
    m_strColor = color;
    std::cout << "Person()" << std::endl;
}
Person::~Person()
{
    std::cout << "~Person()" << std::endl;
}
void Person::printColor()
{
    std::cout << m_strColor << std::endl;
    std::cout << "Person--printColor()" << std::endl;
}

}; // namespace virtualjc

// #endif