#include <iostream>
#include <stdlib.h>

#include "03-virfunlistpointerCircle.h"

using namespace std;
using namespace virfunlistpointer;
/*******************************************/
/*
虚函数表
    要求：
    1. 定义Shape类，成员函数：calcArea()，构造函数，析构函数
    2. 定义Circle类，成员函数：构造函数，析构函数；数据成员：m_iR
    
    概念说明：
    1. 对象的大小
    2. 对象的地址
    3. 对象成员的地址
    4. 虚函数表指针
*/
/********************************************/

int main()
{
    Shape shape;
    // std::cout << sizeof(shape) << std::endl;

    int *p = (int *)&shape;
    // std::cout << p << std::endl;
    std::cout << (unsigned int)(*p) << std::endl;

    Circle circle(100);
    // std::cout << sizeof(circle) << std::endl;

    int *q = (int *)&circle;
    // std::cout << q << std::endl;
    std::cout << (unsigned int)(*q) << std::endl;
    q++;
    std::cout << (unsigned int)(*q) << std::endl;
    return 0;
}