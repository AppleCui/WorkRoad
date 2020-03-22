#include <iostream>
#include <stdlib.h>

using namespace std;
/*******************************************/
/*
题目描述：
1. 提示用户u输入用户名
2. 接收用户的输入
3. 向用户问好，hello xxx
4. 告诉用户名字的长度
5. 告诉用户名字的首字母是什么
6. 如果用户直接输入回车，那么告诉用户输入为空
7. 如果用户输入的是imooc，那么告诉用户的角色是一个管理员
*/
/********************************************/
int main()
{
    std::cout << "Please enter your name: " << std::endl;
    std::string User_name;
    getline(std::cin, User_name);
    if (User_name.empty())
    {
        std::cout << "Your input is NULL..." << std::endl;
        return 0;
    }

    if (User_name == "imooc")
    {
        std::cout << "Your Role is an Admin! " << std::endl;
    }
    std::cout << "hello " + User_name << std::endl;
    std::cout << "The length of your name is: " << User_name.size() << std::endl;
    std::cout << "The first letter of your name is: " << User_name[0] << std::endl;
    return 0;
}