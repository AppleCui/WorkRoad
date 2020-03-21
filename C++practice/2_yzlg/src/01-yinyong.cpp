#include <iostream>
#include <stdlib.h>

// typedef struct
// {
//     int m_iX;
//     int m_iY;
// } Coord;
// using namespace std;
/*上面的结构体是第一段用到的*/

void fun(int &m_iA, int &m_iB) //定义两个形参，交换传进来的两个值
{
    int m_iC = 0;
    m_iC = m_iA;
    m_iA = m_iB;
    m_iB = m_iC;
}

int main()
{
    // Coord c;
    // Coord &c1 = c;

    // c1.m_iX = 10;
    // c1.m_iY = 20;

    // cout << "m_iX of c = " << c.m_iX << endl;
    // cout << "m_iY of c = " << c.m_iY << endl;
    /*第一二段分界线*/
    // int m_iA = 10;
    // int &m_iB = m_iA;

    // m_iB = 20;
    // std::cout << m_iA << std::endl;

    // m_iA = 30;
    // std::cout << m_iB << std::endl;
    /*第二三段分界线*/
    // int m_iA = 3;
    // int *m_iP = &m_iA;
    // int *&m_iQ = m_iP;
    // *m_iQ = 5;
    // std::cout << m_iA << std::endl;
    /*第三四段分界线*/
    //第四段：函数参数使用引用的情况
    int m_iX = 10;
    int m_iY = 20;
    std::cout << "m_iX = " << m_iX << std::endl;
    std::cout << "m_iY = " << m_iY << std::endl;
    fun(m_iX, m_iY);
    std::cout << "after change :" << std::endl;
    std::cout << "m_iX = " << m_iX << std::endl;
    std::cout << "m_iY = " << m_iY << std::endl;
    return 0;
}