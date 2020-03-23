#include "02-duixiangcy.h"
#include <iostream>

using namespace std;
namespace duixiangcy
{
Line::Line()
{
    std::cout << "Line() " << std::endl;
}
Line::~Line()
{
    std::cout << "~Line()" << std::endl;
}
void Line::setA(int x, int y)
{
    m_coorA.setX(x);
    m_coorA.setY(y);
}
void Line::setB(int x, int y)
{
    m_coorB.setX(x);
    m_coorB.setY(y);
}
void Line::printInfo()
{
    std::cout << "A point: (" << m_coorA.getX() << "," << m_coorA.getY() << ")" << std::endl;
    std::cout << "B point: (" << m_coorB.getX() << "," << m_coorB.getY() << ")" << std::endl;
}

Coordinate::Coordinate()
{
    std::cout << "Coordinate()" << std::endl;
}
Coordinate::~Coordinate()
{
    std::cout << "~Coordinate " << std::endl;
}
void Coordinate::setX(int x)
{
    m_iX = x;
}
void Coordinate::setY(int y)
{
    m_iY = y;
}
int Coordinate::getX()
{
    return m_iX;
}
int Coordinate::getY()
{
    return m_iY;
}
} // namespace duixiangcy
