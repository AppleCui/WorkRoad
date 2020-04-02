#pragma once
#include <iostream>
#include <stdlib.h>

#include "01-friendMatch.h"

using namespace std;
namespace friendfun
{
class Time
{

public:
    Time(int hour, int min, int sec);
    friend void Match::printTime(Time &t);
    int m_iHour;
    int m_iMinute;
    int m_iSecond;

private:
};

Time::Time(int hour, int min, int sec)
{
    m_iHour = hour;
    m_iMinute = min;
    m_iSecond = sec;
    std::cout << "Time()" << std::endl;
}

} // namespace friendfun
