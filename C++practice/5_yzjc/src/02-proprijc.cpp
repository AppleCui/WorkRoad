#include <iostream>
#include <stdlib.h>

#include "02-propriinf.h"
// #include "02-propriper.h"
// #include "02-proprisol.h"

using namespace std;
using namespace proprijc;

/*******************************************/
/*
保护继承和私有继承
    要求：
    1. Person类，数据成员：m_strName，成员函数：构造函数，play()
    2. Soldier类，数据成员：m_iAge，成员函数：构造函数，work()
    3. Infantry类，成员函数：attack()
*/
/********************************************/

int main()
{
    Infantry sol;
    sol.attack();
    return 0;
}