#pragma once
#include <iostream>
#include <stdlib.h>

using namespace std;
namespace multiplejc
{
class Farmer
{
public:
    Farmer(string name = "Jack");
    virtual ~Farmer();
    void sow();

protected:
    string m_strName;
};

Farmer::Farmer(string name)
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

} // namespace multiplejc
