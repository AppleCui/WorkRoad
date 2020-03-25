#include <iostream>
#include <stdlib.h>
#include "08-conmemfun-coor.h"

using namespace std;

namespace conmemfun
{
class Line
{
public:
    Line(int x1, int y1, int x2, int y2);
    ~Line();
    void setA(int x, int y);
    void setB(int x, int y);
    void printInfo();

private:
    const Coordinate m_coorA;
    Coordinate m_coorB;
};

Line::Line(int x1, int y1, int x2, int y2)
{
    std::cout << "Line() " << std::endl;
}
Line::~Line()
{
    std::cout << "~Line()" << std::endl;
}
void Line::setA(int x, int y)
{
}
void Line::setB(int x, int y)
{
}
void Line::printInfo()
{
}
} // namespace conmemfun
