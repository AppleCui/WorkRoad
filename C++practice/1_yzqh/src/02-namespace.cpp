#include <iostream>
#include <stdlib.h>

//using namespace std;

namespace A
{
int m_iX = 1;

void fun()
{
    std::cout << "namespace A" << std::endl;
}
} // namespace A

namespace B
{
int m_iX = 2;

void fun()
{
    std::cout << "namespace B" << std::endl;
}

void fun2()
{
    std::cout << "namespace B-2" << std::endl;
}
} // namespace B

using namespace B;
int main()
{
    std::cout << "this is namespace A: " << A::m_iX << std::endl; //expected result is "1"
    std::cout << "this is namespace B: " << m_iX << std::endl;    //expected result is "2"

    A::fun(); //expected result is "namespace A"
    fun();    //expected result is "namespace B"
    fun2();   ////expected result is "namespace B-2
    return 0;
}