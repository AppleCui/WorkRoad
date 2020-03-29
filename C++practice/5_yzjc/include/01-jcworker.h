#pragma once
#include <iostream>
#include <stdlib.h>

#include "01-jcperson.h"

using namespace std;
namespace jicheng
{
class Worker : public Person
{
public:
    Worker();
    ~Worker();
    void work();
    int getSalary();

protected:
    int m_iSalary;

private:
};

Worker::Worker()
{
    std::cout << "Worker()" << std::endl;
}
Worker::~Worker()
{
    std::cout << "~Worker()" << std::endl;
}
void Worker::work()
{
    m_iSalary = 3000;
    m_strName = "jojojojojoj";
    std::cout << "work()" << std::endl;
}
int Worker::getSalary()
{
    return m_iSalary;
}

} // namespace jicheng
