#include <iostream>
#include <stdlib.h>

using namespace std;

namespace objmempoint
{
class Coordinate
{
public:
    Coordinate(int x, int y);
    ~Coordinate();
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
    std::cout << "Coordinate()" << m_iX << "," << m_iY << std::endl;
}
Coordinate::~Coordinate()
{
    std::cout << "~Coordinat()" << m_iX << "," << m_iY << std::endl;
}
int Coordinate::getX()
{
    return m_iX;
}
int Coordinate::getY()
{
    return m_iY;
}
} // namespace objmempoint