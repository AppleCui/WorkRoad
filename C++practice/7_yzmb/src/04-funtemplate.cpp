#include <iostream>
#include <stdlib.h>

// #include "05-virtualMigrant.h"

using namespace std;
// using namespace funtemplate;

/*******************************************/
/*
函数模板
    要求定义函数模板display

*/
/********************************************/

template <typename T>
void display(T a)
{
    std::cout << a << std::endl;
}

template <typename T, class S>
void display(T t, S s)
{
    std::cout << t << "," << s << std::endl;
}

template <typename T, int KSize>
void display(T a)
{
    for (int i = 0; i < KSize; i++)
    {
        std::cout << a << std::endl;
    }
}

int main()
{
    display<double>(10.12);
    display<int, double>(5, 8.3);
    display<int, 5>(7);
    return 0;
}