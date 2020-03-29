#pragma once
#include <iostream>
#include <stdlib.h>

using namespace std;
namespace multiplejc
{
class Worker
{
public:
    Worker(string code = "001");
    virtual ~Worker();
    void carry();

protected:
    string m_strCode;
};

Worker::Worker(string code)
{
    m_strCode = code;
    std::cout << "Worker()" << std::endl;
}
Worker::~Worker()
{
    std::cout << "~Worker()" << std::endl;
}
void Worker::carry()
{
    std::cout << m_strCode << std::endl;
    std::cout << "Worker--carry()" << std::endl;
}

} // namespace multiplejc
