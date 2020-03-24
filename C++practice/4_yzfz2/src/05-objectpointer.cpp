#include <iostream>
#include <stdlib.h>

#include "05-objectpointer.h"

using namespace std;
using namespace objectpointer;

/*******************************************/
/*
要求：
    定义Coordinate类
    数据成员：m_iX和m_iY
    声明对象指针，并通过指针操控对象

    计算两个点横纵坐标的和
*/
/********************************************/

int main()
{
    //对象指针指向堆中的一块地址
    // Coordinate *coor1 = NULL;
    // coor1 = new Coordinate;
    // coor1->m_iX = 10;
    // coor1->m_iY = 20;
    // Coordinate *coor2 = new Coordinate();
    // (*coor2).m_iX = 30;
    // (*coor2).m_iY = 40;

    // std::cout << "横坐标之和：　" << c　oor1->m_iX + (*coor2).m_iX << std::endl;
    // std::cout << "纵坐标之和：　" << coor1->m_iY + (*coor2).m_iY << std::endl;
    // delete coor1;
    // coor1 = NULL;
    // delete coor2;
    // coor2 = NULL;

    //对象指针指向栈中的一块地址
    Coordinate coor1;
    Coordinate *coor2 = &coor1;

    coor2->m_iX = 10;
    coor2->m_iY = 20;
    //和上面两句是一样的
    // (*coor2).m_iX = 30;
    // (*coor2).m_iY = 40;

    std::cout << coor1.m_iX << coor1.m_iY << std::endl;
    return 0;
}