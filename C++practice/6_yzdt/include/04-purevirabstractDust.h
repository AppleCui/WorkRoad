#pragma once
#include <iostream>
#include <stdlib.h>

#include "04-purevirabstractWorker.h"

using namespace std;
namespace purevirabstract
{
class Dustman : public Worker
{
public:
    Dustman(string name, int age);
    virtual void work();
};

Dustman::Dustman(string name, int age) : Worker(name, age)
{
    std::cout << "Dustman()" << std::endl;
}
void Dustman::work()
{
    std::cout << "扫地()" << std::endl;
}
} // namespace purevirabstract
