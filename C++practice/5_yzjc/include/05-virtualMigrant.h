// #pragma once
#include <iostream>
#include <stdlib.h>

#include "05-virtualWorker.h"
#include "05-virtualFarmer.h"

using namespace std;
namespace virtualjc
{
class Migrant : public Farmer, public Worker
{
public:
    Migrant(string name, string code, string color);
    ~Migrant();

protected:
};

Migrant::Migrant(string name, string code, string color) : Farmer(name, color), Worker(code, color)
{
    std::cout << "Migrant()" << std::endl;
}
Migrant::~Migrant()
{
    std::cout << "~Migrant()" << std::endl;
}

} // namespace virtualjc
