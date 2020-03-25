#include <iostream>
#include <stdlib.h>
namespace leiduixiang
{
class Coordinate
{
public:
    int m_iX;
    int m_iY;

    void printX()
    {
        std::cout << m_iX << std::endl;
    }
    void printY()
    {
        std::cout << m_iY << std::endl;
    }
};

int main()
{
    //从栈中实例化对象
    Coordinate coor;
    coor.m_iX = 10;
    coor.m_iY = 20;
    coor.printX();
    coor.printY();

    //从堆中实例化对象
    Coordinate *p = new Coordinate;
    if (p == NULL)
    {
        std::cout << "new pointer error!" << std::endl;
        return 0;
    }
    p->m_iX = 60;
    p->m_iY = 30;
    p->printX();
    p->printY();
    delete p;
    p = NULL;

    return 0;
}
} // namespace leiduixiang
