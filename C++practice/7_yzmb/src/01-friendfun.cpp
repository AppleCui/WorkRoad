#include <iostream>
#include <stdlib.h>

#include "01-friendMatch.h"
#include "01-friendTime.h"

using namespace std;
using namespace friendfun;

/*******************************************/
/*
友元函数
    1. 友元全局函数
    2. 友元成员函数
*/
/********************************************/

int main()
{
    Time t(6, 34, 25);
    Match m;
    m.printTime(t);
    return 0;
}
