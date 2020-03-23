#include <iostream>
#include <stdlib.h>

using namespace std;

namespace deepcopy
{
class Array
{
public:
    Array(int count);
    Array(const Array &arr);
    ~Array();
    void setCount(int count);
    int getCount();
    void printAddr();
    void printArr();

private:
    int m_iCount;
    int *m_pArr;
};

Array::Array(int count)
{
    m_iCount = count;
    m_pArr = new int[m_iCount];
    for (int i = 0; i < m_iCount; i++)
    {
        m_pArr[i] = i;
    }
    std::cout << "Array()" << std::endl;
}
Array::Array(const Array &arr)
{
    m_iCount = arr.m_iCount;
    m_pArr = new int[m_iCount];
    for (int i = 0; i < m_iCount; i++)
    {
        m_pArr[i] = arr.m_pArr[i];
    }

    std::cout << "Array(const Array &arr)" << std::endl;
}
Array::~Array()
{
    delete[] m_pArr;
    m_pArr = NULL;
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
void Array::printAddr()
{
    std::cout << "m_pArr的值是：　" << m_pArr << std::endl;
}
void Array::printArr()
{
    for (int i = 0; i < m_iCount; i++)
    {
        std::cout << m_pArr[i] << std::endl;
    }
}
} // namespace deepcopy
