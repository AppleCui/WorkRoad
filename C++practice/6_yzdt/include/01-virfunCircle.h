#pragma once
#include <iostream>
#include <stdlib.h>

#include "01-virfunShape.h"

using namespace std;
namespace virfun
{
class Circle : virtual public Shape
{
public:
    Circle(double r);
    virtual ~Circle();
    virtual double calcArea();

protected:
    double m_dR;
};

Circle::Circle(double r)
{
    m_dR = r;
    std::cout << "Circle()" << std::endl;
}
Circle::~Circle()
{
    std::cout << "~Circle()" << std::endl;
}
double Circle::calcArea()
{
    std::cout << "Circle--calcArea" << std::endl;
    return 3.14 * m_dR * m_dR;
}

} // namespace virfun
