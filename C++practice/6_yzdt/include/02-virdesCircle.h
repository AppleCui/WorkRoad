#pragma once
#include <iostream>
#include <stdlib.h>

#include "02-virdesCoordinate.h"
#include "02-virdesShape.h"

using namespace std;
namespace virdes
{
class Circle : virtual public Shape
{
public:
    Circle(double r);
    virtual ~Circle();
    virtual double calcArea();

protected:
    double m_dR;
    Coordinate *m_pCenter;
};

Circle::Circle(double r)
{
    m_dR = r;
    m_pCenter = new Coordinate(3, 5);
    std::cout << "Circle()" << std::endl;
}
Circle::~Circle()
{
    delete m_pCenter;
    m_pCenter = NULL;
    std::cout << "~Circle()" << std::endl;
}
double Circle::calcArea()
{
    std::cout << "Circle--calcArea" << std::endl;
    return 3.14 * m_dR * m_dR;
}

} // namespace virdes
