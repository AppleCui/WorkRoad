#pragma once
#include <iostream>
#include <stdlib.h>

using namespace std;
namespace purevirabstract
{
class Person
{
public:
    Person(string name);
    virtual void work() = 0;
    virtual ~Person() {}

private:
    string m_strName;
};

Person::Person(string name)
{
    m_strName = name;
    std::cout << "Person()" << std::endl;
}

} // namespace purevirabstract
