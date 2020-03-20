#include <iostream>
#include <stdlib.h>

using namespace std;

//要求：提示用户输入一个整数，将该整数分别以8进制，10进制，16进制，打印在屏幕上
//要求：提示用户输入一个布尔值(0或1)，以布尔方式将值打印在屏幕上
int main()
{
    int m_iX = 0;
    cout << "Please enter a int type number: ";
    cin >> m_iX;
    //一个int类型的10进制数字，进制转换怎么转？
    cout << "8进制数：" << oct << m_iX << endl;
    cout << "10进制数：" << dec << m_iX << endl;
    cout << "16进制数：" << hex << m_iX << endl;

    bool m_bY = false;
    cout << "Please enter a bool type number: ";
    cin >> m_bY;
    cout << boolalpha << m_bY << endl;

    //system("pause");
    return 0;
}