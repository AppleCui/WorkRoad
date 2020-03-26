#include <iostream>
#include <stdlib.h>

#include "01-jcworker.h"

using namespace std;
using namespace jicheng;

/*******************************************/
/*
继承
    要求：
    1. 定义person类，要求含有m_strName和m_iAge两个数据成员及构造函数和析构函数，eat函数
    2. 定义worker类，要求公有继承Person类，含有数据成员m_iSalary，构造函数，析构函数，work函数
*/
/********************************************/

int main()
{
    //公有继承示例
    // Worker *p = new Worker;
    // p->m_strName = "Jason";
    // p->m_iAge = 20;
    // p->eat();
    // p->m_iSalary = 1000;
    // p->work();
    // std::cout << "Name: " << p->getName() << std::endl;
    // std::cout << "Age: " << p->getAge() << std::endl;
    // std::cout << "Salary: " << p->getSalary() << std::endl;
    // delete p;
    // p = NULL;

    //从栈中实例化对象
    // Worker worker;
    // worker.m_strName = "Jason";
    // worker.m_iAge = 20;
    // worker.eat();
    // worker.m_iSalary = 1000;
    // worker.work();
    // std::cout << "Name: " << worker.getName() << std::endl;
    // std::cout << "Age: " << worker.getAge() << std::endl;
    // std::cout << "Salary: " << worker.getSalary() << std::endl;

    Worker worker;
    worker.work();
    std::cout << worker.getSalary() << std::endl;
    std::cout << worker.getName() << std::endl;
    return 0;
}