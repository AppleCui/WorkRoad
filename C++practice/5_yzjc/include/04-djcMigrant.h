#pragma once
#include <iostream>
#include <stdlib.h>

#include "04-djcFarmer.h"
#include "04-djcWorker.h"

using namespace std;
namespace multiplejc
{
class Migrant : public Farmer, public Worker
{
public:
    Migrant(string name, string code);
    ~Migrant();

protected:
};

Migrant::Migrant(string name, string code) : Farmer(name), Worker(code)
{
    std::cout << "Migrant()" << std::endl;
}
Migrant::~Migrant()
{
    std::cout << "~Migrant()" << std::endl;
}

} // namespace multiplejc
