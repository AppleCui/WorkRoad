#include <iostream>
#include <stdlib.h>

#include <vector>
#include <list>
#include <map>

using namespace std;

/*******************************************/
/*
通过使用标准模板库，学习使用方法

*/
/********************************************/

int main()
{
    list<int> list1;
    list1.push_back(4);
    list1.push_back(7);
    list1.push_back(10);
    //必须使用迭代器对list进行访问了
    list<int>::iterator itor = list1.begin();
    for (; itor != list1.end(); itor++)
    {
        std::cout << *itor << std::endl;
    }

    map<int, string> m;
    pair<int, string> p1(10, "Hello, ");
    pair<int, string> p2(20, "Cuitianxiao! ");
    pair<int, string> p3(30, "What's up?");

    m.insert(p1);
    m.insert(p2);
    m.insert(p3);

    std::cout << m[10] << m[20] << m[30] << std::endl;

    map<int, string>::iterator itor2 = m.begin();
    for (; itor2 != m.end(); itor2++)
    {
        std::cout << itor2->first << itor2->second << std::endl;
    }

    return 0;
}