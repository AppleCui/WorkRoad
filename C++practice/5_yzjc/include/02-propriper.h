#include <iostream>
#include <stdlib.h>

using namespace std;
namespace proprijc
{
class Person
{
public:
    Person();
    ~Person();
    void play();

protected:
    string m_strName;
};

Person::Person()
{
    m_strName = "Person1";
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
} // namespace proprijc
