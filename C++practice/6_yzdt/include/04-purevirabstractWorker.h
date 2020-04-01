#pragma once
#include <iostream>
#include <stdlib.h>

#include "04-purevirabstractPerson.h"

using namespace std;
namespace purevirabstract
{
class Worker : public Person
{
public:
    Worker(string name, int age);
    virtual void work();

private:
    int m_iAge;
};

Worker::Worker(string name, int age) : Person(name)
{
    m_iAge = age;
    std::cout << "Worker()" << std::endl;
}
void Worker::work()
{
    std::cout << "work()" << std::endl;
}

} // namespace purevirabstract
