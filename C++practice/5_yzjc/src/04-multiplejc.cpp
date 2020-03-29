#include <iostream>
#include <stdlib.h>

#include "04-djcMigrant.h"

using namespace std;
using namespace multiplejc;

/*******************************************/
/*
多继承
    要求：
    1. Farmer类，数据成员：m_strName，成员函数：构造函数，析构函数，sow()
    2. Worker类，数据成员：m_strCode，成员函数：构造函数，析构函数，carry()
    3. Migrant类，数据成员：无，成员函数：构造函数，析构函数

*/
/********************************************/

int main()
{
    //实例化子类对象时，先实例化父类对象，实例化顺序是按照构造函数的初始化列表的顺序来的
    Migrant *p = new Migrant("Mary", "100");
    p->carry();
    p->sow();
    delete p;
    p = NULL;
    return 0;
}