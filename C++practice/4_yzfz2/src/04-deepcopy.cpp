#include <iostream>
#include <stdlib.h>

#include "04-deepcopy.h"

using namespace std;

using namespace deepcopy;

/*******************************************/
/*
浅拷贝：
    1. 定义一个Array类，数据成员为m_iCount，成员函数包括
    数据封装函数，构造函数，拷贝构造函数和析构函数，通过此
    示例体会浅拷贝原理
    2. 增加数据成员m_pArr，并增加m_pArr的地址查看函数，
    同时改造构造函数，拷贝构造函数和析构函数，体会深拷贝的
    原理和必要性。 
*/
/********************************************/

int main()
{
    Array arr1(5);
    Array arr2(arr1);
    // arr1.printAddr();
    // arr2.printAddr();
    arr1.printArr();
    arr2.printArr();

    return 0;
}