#include <iostream>
#include <stdlib.h>

#include "04-purevirabstractDust.h"

using namespace std;
using namespace purevirabstract;
/*******************************************/
/*
纯虚函数抽象类
    要求：
    1. 定义Person类，成员函数：构造函数，虚析构函数，纯虚函数work()，数据成员：名字m_strName
    2. 定义Worker类，成员函数：构造函数，work()；数据成员：m_iAge
    3. 定义Dustman类，成员函数：构造函数，work()

*/
/********************************************/

int main()
{
    Dustman dust("zhangsan", 20);
    return 0;
}