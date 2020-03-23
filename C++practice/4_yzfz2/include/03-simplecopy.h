#include <iostream>
#include <stdlib.h>

using namespace std;

namespace simplecopy
{
class Array
{
public:
    Array();
    Array(const Array &arr);
    ~Array();
    void setCount(int count);
    int getCount();

private:
    int m_iCount;
};

Array::Array()
{
    std::cout << "Array()" << std::endl;
}
Array::Array(const Array &arr)
{
    m_iCount = arr.m_iCount;
    std::cout << "Array(const Array &arr)" << std::endl;
}
Array::~Array()
{
    std::cout << "~Array()" << std::endl;
}
void Array::setCount(int count)
{
    m_iCount = count;
}
int Array::getCount()
{
    return m_iCount;
}
} // namespace simplecopy
