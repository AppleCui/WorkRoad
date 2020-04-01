#pragma once
#include <iostream>
#include <stdlib.h>

using namespace std;
namespace virdes
{
class Coordinate
{
public:
    Coordinate(int x, int y);
    virtual ~Coordinate();

protected:
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

} // namespace virdes
