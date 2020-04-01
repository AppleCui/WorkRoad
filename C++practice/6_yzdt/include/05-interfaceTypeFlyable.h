#pragma once
#include <iostream>
#include <stdlib.h>

using namespace std;
namespace interfacetype
{
class Flyable
{
public:
    virtual void takeoff() = 0;
    virtual void land() = 0;
};

} // namespace interfacetype
