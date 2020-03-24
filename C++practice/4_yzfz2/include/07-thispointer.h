#include <iostream>
#include <stdlib.h>

using namespace std;

namespace thispointer
{
class Array
{
public:
    Array(int len);
    ~Array();
    Array &printInfo();
    void setLen(int len);
    int getLen();

private:
    int len;
};

Array::Array(int len)
{
    this->len = len;
    std::cout << "Array()" << std::endl;
}
Array::~Array()
{
    std::cout << "~Array()" << std::endl;
}

void Array::setLen(int len)
{
    this->len = len;
}
int Array::getLen()
{
    return len;
}
Array &Array::printInfo()
{
    //this本是一个指针，但是加了*之后，就变成了一个对象，而
    //我们的返回值就是一个对象Array
    std::cout << "len = " << len << std::endl;
    return *this;
}

} // namespace thispointer