#include <iostream>
#include <stdlib.h>

#include "03-isasoldier.h"

using namespace std;
using namespace isa;

/*******************************************/
/*
公有继承：isa
    要求：
    1. Person类，数据成员：m_strName，成员函数：构造函数，析构函数，play()
    2. Soldier类，数据成员：m_iAge，成员函数：构造函数，析构函数，work()
    3. 定义函数test1(Person p), test2(Person &p), test3(Person *p)
*/
/********************************************/

void test1(Person p)
{
    p.play();
}

void test2(Person &p)
{
    p.play();
}

void test3(Person *p)
{
    p->play();
}

int main()
{
    Person p;
    Soldier sol;
    // test1(p);
    // test1(sol);
    // test2(p); //test2是一个引用，所以它传入参数的时候，会将参数起一个别名，并未实例化对象，也就不用执行析构函数销毁临时对象
    // test2(sol);
    test3(&p); //test3函数的参数是一个指针，是一个基类的指针，当使用基类或派生类的对象地址传入后，会使用*p分别调用基类和派生类的play()函数
    test3(&sol);
    return 0;
}