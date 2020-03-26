#include <iostream>
#include <stdlib.h>

#include "02-propriper.h"

using namespace std;
namespace proprijc
{
class Soldier : protected Person
{
public:
    Soldier();
    ~Soldier();
    void work();

protected:
    int m_iAge;
};

Soldier::Soldier()
{
    std::cout << "Soldier()" << std::endl;
}
Soldier::~Soldier()
{
    std::cout << "~Soldier()" << std::endl;
}
void Soldier::work()
{
    m_strName = "Person-Soldier";
    m_iAge = 20;
    std::cout << m_strName << std::endl;
    std::cout << m_iAge << std::endl;
    std::cout << "Soldier--work()" << std::endl;
}

} // namespace proprijc
