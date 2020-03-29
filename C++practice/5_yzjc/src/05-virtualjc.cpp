#include <iostream>
#include <stdlib.h>

#include "05-virtualMigrant.h"

using namespace std;
using namespace virtualjc;

/*******************************************/
/*
虚继承：菱形继承关系
    要求：
    1. Farmer类，数据成员：m_strName，成员函数：构造函数，析构函数，sow()
    2. Worker类，数据成员：m_strCode，成员函数：构造函数，析构函数，carry()
    3. Migrant类，数据成员：无，成员函数：构造函数，析构函数
    4. Person类，数据成员：m_strColor, 成员函数：构造函数，析构函数，printColor()

*/
/********************************************/

int main()
{
    //在农民工这个类中，实际上存在两份m_strColor这个数据成员，一个是worker从person中继承的
    //一个是farmer从person中继承的，如何保证只有一份呢？虚继承可以解决这个问题。

    //而如果在菱形继承中，两个父类都采用虚继承，那么子类的参数无法传递给最大的父类，只能用它默认的参数
    Migrant *mig = new Migrant("Merry", "200", "yello");
    mig->Farmer::printColor();
    mig->Worker::printColor();
    delete mig;
    mig = NULL;
    return 0;
}