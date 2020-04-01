#pragma once
#include <iostream>
#include <stdlib.h>

#include "02-virdesShape.h"

using namespace std;
namespace virdes
{
class Rect : virtual public Shape
{
public:
    Rect(double width, double height);
    virtual ~Rect();
    virtual double calcArea();

protected:
    double m_dWidth;
    double m_dHeight;

private:
};

Rect::Rect(double width, double height)
{
    m_dHeight = height;
    m_dWidth = width;
    std::cout << "Rect()" << std::endl;
}
Rect::~Rect()
{
    std::cout << "~Rect()" << std::endl;
}
double Rect::calcArea()
{
    std::cout << "Rect--calcArea" << std::endl;
    return m_dHeight * m_dWidth;
}

} // namespace virdes
