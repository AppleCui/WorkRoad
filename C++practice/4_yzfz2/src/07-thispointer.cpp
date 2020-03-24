#include <iostream>
#include <stdlib.h>

#include "07-thispointer.h"

using namespace std;
using namespace thispointer;

/*******************************************/
/*
this指针
    定义一个Array类
    数据成员：m_iLen表示长度
    成员函数：
    构造函数
    析构函数
    len的封装函数
    信息输出函数printInfo
*/
/********************************************/

int main()
{
    Array arr1(10);
    arr1.printInfo().setLen(20);
    std::cout << "len = " << arr1.getLen() << std::endl;
    std::cout << arr1.getLen() << std::endl;
    return 0;
}