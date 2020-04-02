#include <iostream>
#include <stdlib.h>

#include "03-unitoverload.h"

using namespace std;
using namespace unitoverload;

/*******************************************/
/*
运算符重载－－一元运算符重载
要求：定义Coordinate坐标类
    成员函数：构造函数，getX(), getY()
    数据成员：m_iX, m_iY;
    1. 负号运算符重载(成员函数)
    2. ++运算符重载(前置++，后置++)
*/
/********************************************/

int main()
{
    Coordinate coor1(1, 3);
    std::cout << "(" << coor1.getX() << "," << coor1.getY() << ")" << std::endl;
    std::cout << (coor1++).getX() << ",";
    std::cout << (coor1++).getY() << std::endl;

    // -(-coor1);
    std::cout << "(" << coor1.getX() << "," << coor1.getY() << ")" << std::endl;

    return 0;
}