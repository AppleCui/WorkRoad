#include <iostream>
#include <stdlib.h>

using namespace std;

namespace objectpointer
{
class Coordinate
{
public:
    Coordinate();
    ~Coordinate();
    int m_iX;
    int m_iY;

private:
};

Coordinate::Coordinate()
{
    std::cout << "Coordinate()" << std::endl;
}
Coordinate::~Coordinate()
{
    std::cout << "~Coordinate()" << std::endl;
}
} // namespace objectpointer