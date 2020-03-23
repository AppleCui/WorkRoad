#include <iostream>
#include <stdlib.h>

#include "01-duixiangsz.h"

using namespace std;
using namespace duixiangsz;

/*******************************************/
/*
对象数组
要求：
    定义Coordinate类
    数据成员：m_iX和m_iY
    分别从栈和堆实例化长度为３的对象数组
    给数组中的元素分别赋值
    遍历两个数组
*/
/********************************************/

int main()
{
    Coordinate coord[3];
    Coordinate *coor = new Coordinate[3];

    coord[0].m_iX = 3;
    coord[0].m_iY = 5;
    coord[1].m_iX = 7;
    coord[1].m_iY = 9;
    coord[2].m_iX = 11;
    coord[2].m_iY = 13;

    coor->m_iX = 2;
    coor[0].m_iY = 4;
    coor++;
    coor->m_iX = 6;
    coor[0].m_iY = 8;
    coor[1].m_iX = 10;
    coor[1].m_iY = 12;

    for (int i = 0; i < 3; i++)
    {
        std::cout << "Coord: " << coord[i].m_iX << " " << coord[i].m_iY << std::endl;
    }
    coor--;
    delete[] coor;
    coor = NULL;

    return 0;
}