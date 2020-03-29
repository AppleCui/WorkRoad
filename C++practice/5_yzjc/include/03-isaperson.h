#pragma once
#include <iostream>
#include <stdlib.h>

using namespace std;
namespace isa
{
class Person
{
public:
    Person(string name = "Jason");
    ~Person();
    void play();

protected:
    string m_strName;
};

Person::Person(string name)
{
    m_strName = name;
    std::cout << "Person()" << std::endl;
}
Person::~Person()
{
    std::cout << "~Person()" << std::endl;
}
void Person::play()
{
    std::cout << "Person--play()" << std::endl;
    std::cout << m_strName << std::endl;
}

} // namespace isa
