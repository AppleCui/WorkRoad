#include <iostream>
#include <stdlib.h>

using namespace std;
namespace duixiangcy
{
class Coordinate
{
public:
    Coordinate();
    ~Coordinate();
    void setX(int x);
    void setY(int y);
    int getX();
    int getY();

private:
    int m_iX;
    int m_iY;
};

class Line
{
public:
    Line();
    ~Line();
    void setA(int x, int y);
    void setB(int x, int y);
    void printInfo();

private:
    Coordinate m_coorA;
    Coordinate m_coorB;
};

} // namespace duixiangcy
