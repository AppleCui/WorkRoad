#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int *p = new int[10];
    if (NULL == p)
    {
        std::cout << "Didn't get." << std::endl;
    }
    p[0] = 10;
    p[1] = 20;
    std::cout << "p0 = " << p[0] << ", "
              << "p1 = " << p[1] << std::endl;
    std::cout << *p << std::endl;

    delete[] p;
    p = NULL;
    return 0;
}