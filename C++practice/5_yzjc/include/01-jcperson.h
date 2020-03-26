#include <iostream>
#include <stdlib.h>

using namespace std;
namespace jicheng
{
class Person
{
public:
    Person();
    ~Person();
    void eat();
    string getName();
    int getAge();

protected:
    string m_strName;
    int m_iAge;

private:
};

Person::Person()
{
    std::cout << "Person()" << std::endl;
}
Person::~Person()
{
    std::cout << "~Person()" << std::endl;
}
void Person::eat()
{
    m_strName = "Jim";
    m_iAge = 30;
    std::cout << "eat()" << std::endl;
}
string Person::getName()
{
    return m_strName;
}
int Person::getAge()
{
    return m_iAge;
}
} // namespace jicheng
