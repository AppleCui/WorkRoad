#pragma once
#include <iostream>
#include <stdlib.h>

using namespace std;
namespace staticfun
{
class Tank
{
public:
    Tank(char code);
    ~Tank();
    void fire();
    static int getCount();

private:
    static int s_iCount;
    char m_cCode;
};

int Tank::s_iCount = 10;

Tank::Tank(char code)
{
    m_cCode = code;
    s_iCount++;
    std::cout << "Tank()" << std::endl;
}
Tank::~Tank()
{
    s_iCount--;
    std::cout << "~Tank()" << std::endl;
}
void Tank::fire()
{
    std::cout << "Tank()--fire()" << std::endl;
}
int Tank::getCount()
{
    return s_iCount;
}

} // namespace staticfun
