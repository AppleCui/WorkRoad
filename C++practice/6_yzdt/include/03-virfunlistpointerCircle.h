#pragma once
#include <iostream>
#include <stdlib.h>

#include "03-virfunlistpointerShape.h"

using namespace std;
namespace virfunlistpointer
{
class Circle : public Shape
{
public:
    Circle(int r);
    ~Circle();
    // double calcArea();

protected:
    int m_iR;
};

Circle::Circle(int r)
{
    m_iR = r;
    // std::cout << "Circle()" << std::endl;
}
Circle::~Circle()
{
    // std::cout << "~Circle()" << std::endl;
}
// double Circle::calcArea()
// {
//     std::cout << "Circle--calcArea" << std::endl;
// }

} // namespace virfunlistpointer
