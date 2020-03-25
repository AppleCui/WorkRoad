#include <iostream>
#include <stdlib.h>

using namespace std;
namespace conmemfun
{
class Coordinate
{
public:
    Coordinate(int x, int y);
    ~Coordinate();
    //以下的两个函数，一个是常成员函数，一个是
    //正常的成员函数，他们互为重载
    //如果以后用coor.changeX()，那么它调用的是哪个成员函数？
    //调用的是普通的，不是const修饰的常成员函数
    //那么什么情况下可以调用常成员函数？
    //实例化对象时必须用const来修饰这个对象，这样实例化出来的对象
    //叫做常对象
    //const Coordinate coor(3,5);
    //coor.changeX();
    void changeX();
    void changeX() const;

private:
    int m_iX;
    int m_iY;
};
Coordinate::Coordinate(int x, int y)
{
    std::cout << "Coordinate()" << std::endl;
}
Coordinate::~Coordinate()
{
    std::cout << "~Coordinate " << std::endl;
}
void Coordinate::changeX()
{
}
void Coordinate::changeX() const
{
}
} // namespace conmemfun
