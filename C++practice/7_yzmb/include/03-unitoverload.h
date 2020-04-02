#pragma once
#include <iostream>
#include <stdlib.h>

using namespace std;
namespace unitoverload
{
class Coordinate
{
public:
    Coordinate(int x, int y);
    ~Coordinate();
    Coordinate &operator-();
    Coordinate &operator++();
    Coordinate operator++(int);
    int getX();
    int getY();

private:
    int m_iX;
    int m_iY;
};

Coordinate::Coordinate(int x, int y)
{
    m_iX = x;
    m_iY = y;
    std::cout << "Coordinate()" << std::endl;
}
Coordinate::~Coordinate()
{
    std::cout << "~Coordinate()" << std::endl;
}

int Coordinate::getX()
{
    return m_iX;
}
int Coordinate::getY()
{
    return m_iY;
}
Coordinate &Coordinate::operator-()
{
    m_iX = -m_iX;
    m_iY = -m_iY;
    return *this;
}
Coordinate &Coordinate::operator++()
{
    ++m_iX;
    ++m_iY;
    return *this;
}
Coordinate Coordinate::operator++(int)
{
    Coordinate old(*this);
    m_iX++;
    m_iY++;
    return old;
}

} // namespace unitoverload
