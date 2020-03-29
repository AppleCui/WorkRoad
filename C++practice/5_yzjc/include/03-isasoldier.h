#pragma once
#include <iostream>
#include <stdlib.h>

#include "03-isaperson.h"

using namespace std;
namespace isa
{
class Soldier : public Person
{
public:
    Soldier(string name = "Jacky", int age = 20);
    ~Soldier();
    void work();

protected:
    int m_iAge;
};

Soldier::Soldier(string name, int age)
{
    m_strName = name;
    m_iAge = age;
    std::cout << "Soldier()" << std::endl;
}
Soldier::~Soldier()
{
    std::cout << "~Soldier()" << std::endl;
}
void Soldier::work()
{
    std::cout << m_strName << std::endl;
    std::cout << m_iAge << std::endl;
    std::cout << "Soldier--work()" << std::endl;
}

} // namespace isa
