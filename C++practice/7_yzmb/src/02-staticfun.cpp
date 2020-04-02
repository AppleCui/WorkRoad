#include <iostream>
#include <stdlib.h>

#include "02-staticTank.h"

using namespace std;
using namespace staticfun;

/*******************************************/
/*
静态数据成员和静态成员函数
    要求：定义Tank类，数据成员：坦克编号m_cCode, 坦克数量：s_iCount
    成员函数：构造函数，析构函数，fire, getCount

*/
/********************************************/

int main()
{
    Tank *p = new Tank('a');
    std::cout << Tank::getCount() << std::endl;
    Tank *q = new Tank('b');
    std::cout << q->getCount() << std::endl;
    delete p;
    delete q;
    p = NULL;
    q = NULL;
    std::cout << Tank::getCount() << std::endl;

    return 0;
}