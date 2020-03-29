#pragma once
#include <iostream>
#include <stdlib.h>

#include "02-proprisol.h"

using namespace std;
namespace proprijc
{
class Infantry : public Soldier
{
public:
    Infantry();
    ~Infantry();
    void attack();
};

Infantry::Infantry()
{
    std::cout << "Infantry()" << std::endl;
}
Infantry::~Infantry()
{
    std::cout << "~Infantry()" << std::endl;
}
void Infantry::attack()
{
    m_strName = "Juicy";
    std::cout << m_strName << std::endl;
    std::cout << "Infantry--attack()" << std::endl;
}

} // namespace proprijc
