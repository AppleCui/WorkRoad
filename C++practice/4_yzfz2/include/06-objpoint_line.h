#include <iostream>
#include <stdlib.h>

using namespace std;

namespace objmempoint
{
class Line
{
public:
    Line(int x1, int y1, int x2, int y2);
    ~Line();
    void printInfo();

private:
    Coordinate *m_pCoorA;
    Coordinate *m_pCoorB;
};

Line::Line(int x1, int y1, int x2, int y2)
{
    m_pCoorA = new Coordinate(x1, y1);
    m_pCoorB = new Coordinate(x2, y2);
    std::cout << "Line()" << std::endl;
}
Line::~Line()
{
    delete m_pCoorA;
    m_pCoorA = NULL;
    delete m_pCoorB;
    m_pCoorB = NULL;
    std::cout << "~Line()" << std::endl;
}
void Line::printInfo()
{
    std::cout << "printInfo()" << std::endl;
    std::cout << "(" << m_pCoorA->getX() << "," << m_pCoorA->getY() << ")" << std::endl;
    std::cout << "(" << m_pCoorB->getX() << "," << m_pCoorB->getY() << ")" << std::endl;
}
} // namespace objmempoint