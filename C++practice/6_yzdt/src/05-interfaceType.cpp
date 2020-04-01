#include <iostream>
#include <stdlib.h>

#include "05-interfaceTypeFightPlane.h"
// #include "05-interfaceTypePlane.h"

using namespace std;
using namespace interfacetype;
/*******************************************/
/*
纯虚函数抽象类
    要求：
    1. 定义Flyable类，成员函数：takeoff()，land(), 都定义为纯虚函数
    2. 定义Plane类，成员函数：构造函数，takeoff(), land(), printCode()；数据成员：m_strCode
    3. 定义FighterPlane类，成员函数：构造函数，takeoff(), land()
    4. 全局函数flyMatch(Flyable *f1, Flyable *f2)

*/
/********************************************/

void flyMatch(Plane *f1, Plane *f2)
{
    f1->printCode();
    // f1->land();
    f2->printCode();
    // f2->land();
}

int main()
{
    FighterPlane p1("001");
    FighterPlane p2("002");
    // p1.printCode();
    // p2.printCode();

    flyMatch(&p1, &p2);
    return 0;
}