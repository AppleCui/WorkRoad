#include "05-gouzaoTeacher.h"

using namespace std;

/*******************************************/
/*
定义一个Teacher类
×   自定义无参构造函数
×   自定义有参构造函数
×数据成员：
×   名字
×   年龄
×成员函数：
×   数据成员的封装函数
*/
/********************************************/

int main()
{
    Teacher t1;
    Teacher t2("Joan", 22);
    Teacher t3("Steven", 35);

    std::cout << t1.getName() << " " << t1.getAge() << std::endl;
    std::cout << t2.getName() << " " << t2.getAge() << std::endl;
    std::cout << t3.getName() << " " << t3.getAge() << std::endl;
    return 0;
}