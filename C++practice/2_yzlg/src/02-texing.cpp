#include <iostream>
#include <stdlib.h>

//using namespace std;
//想要重载，需要函数同名不同变量数或变量类型，还需要在同一作用域(namespace命名空间)下
inline void fun(int m_iI = 30, int m_iJ = 20, int m_iK = 10);
inline void fun(double m_iI, double m_iJ);

int main()
{
    fun();
    fun(1.1, 2.2);
    fun(100);
    fun(100, 200);
    fun(100, 200, 300);
    return 0;
}

void fun(int m_iI, int m_iJ, int m_iK)
{
    std::cout << m_iI << ", " << m_iJ << ", " << m_iK << std::endl;
}

void fun(double m_iI, double m_iJ)
{
    std::cout << m_iI << ", " << m_iJ << std::endl;
}