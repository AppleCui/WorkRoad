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
    vector<int> vec;
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(6);
    //访问数组一样的方式去遍历这个向量
    // std::cout << vec.size() << std::endl;
    //遍历方法一
    // for (int i = 0; i < vec.size(); i++)
    // {
    //     std::cout << vec[i] << std::endl;
    // }

    //遍历方法二
    // vector<int>::iterator iter = vec.begin();
    // for (; iter != vec.end(); iter++)
    // {
    //     std::cout << *iter << std::endl;
    // }

    std::cout << vec.front() << std::endl;
    std::cout << vec.back() << std::endl;
    vec.data();
    vec.clear();
    std::cout << vec.size() << std::endl;
    return 0;
}