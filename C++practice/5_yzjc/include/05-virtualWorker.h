// #pragma once
#include <iostream>
#include <stdlib.h>

#include "05-virtualPerson.h"

using namespace std;
namespace virtualjc
{
//此时的Worker类叫做虚基类
class Worker : virtual public Person
{
public:
    Worker(string code = "001", string color = "blue");
    virtual ~Worker();
    void carry();

protected:
    string m_strCode;
};
//此处使用初始化列表来传递值的好处是：如果Person构造函数中有一些其他的逻辑，我们不用在
//worker的构造函数中重复写其他逻辑，而可以直接将值传递给person的构造函数，由person的
//构造函数来完成相应的逻辑
Worker::Worker(string code, string color) : Person("Worker" + color)
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

} // namespace virtualjc
