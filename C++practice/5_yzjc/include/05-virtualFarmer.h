// #pragma once
#include <iostream>
#include <stdlib.h>

#include "05-virtualPerson.h"

using namespace std;
namespace virtualjc
{
//此时的Farmer类叫做虚基类
class Farmer : virtual public Person
{
public:
    Farmer(string name = "Jack", string color = "blue");
    virtual ~Farmer();
    void sow();

protected:
    string m_strName;
};

Farmer::Farmer(string name, string color) : Person("Farmer" + color)
{
    m_strName = name;
    std::cout << "Farmer()" << std::endl;
}
Farmer::~Farmer()
{
    std::cout << "~Farmer()" << std::endl;
}
void Farmer::sow()
{
    std::cout << m_strName << std::endl;
    std::cout << "sow()" << std::endl;
}

} // namespace virtualjc
