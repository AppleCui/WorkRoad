#pragma once
#include <iostream>
#include <stdlib.h>

using namespace std;
namespace friendfun
{
//声明一下，有Time这个类
class Time;
class Match
{
public:
    void printTime(Time &t);
};

void Match::printTime(Time &t)
{
    std::cout << "Time: " << t.m_iHour << ":" << t.m_iMinute << std::endl;
}

} // namespace friendfun
