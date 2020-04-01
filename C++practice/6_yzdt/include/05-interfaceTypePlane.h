#pragma once
#include <iostream>
#include <stdlib.h>

#include "05-interfaceTypeFlyable.h"

using namespace std;
namespace interfacetype
{
class Plane
{
public:
    Plane(string code);
    // virtual void takeoff();
    // virtual void land();
    void printCode();

private:
    string m_strCode;
};

Plane::Plane(string code)
{
    m_strCode = code;
    std::cout << "Plane()" << std::endl;
}
// void Plane::takeoff()
// {
//     std::cout << "Plane()--takeoff()" << std::endl;
// }
// void Plane::land()
// {
//     std::cout << "Plane()--land()" << std::endl;
// }
void Plane::printCode()
{
    std::cout << "Plane()--printCode()" << std::endl;
    std::cout << m_strCode << std::endl;
}

} // namespace interfacetype
