#pragma once
#include <iostream>
#include <stdlib.h>

#include "05-interfaceTypePlane.h"

using namespace std;
namespace interfacetype
{
class FighterPlane : public Plane, public Flyable
{
public:
    FighterPlane(string code);
    virtual void takeoff();
    virtual void land();

private:
};

FighterPlane::FighterPlane(string code) : Plane(code)
{
    std::cout << "FighterPlane()" << std::endl;
}
void FighterPlane::takeoff()
{
    std::cout << "FighterPlane()--takeoff()" << std::endl;
}
void FighterPlane::land()
{
    std::cout << "FighterPlane()--land()" << std::endl;
}

} // namespace interfacetype
