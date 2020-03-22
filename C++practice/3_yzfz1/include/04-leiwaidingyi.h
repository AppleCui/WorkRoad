#include <iostream>
#include <stdlib.h>

using namespace std;
//2. 分文件类外定义：
class Teacher
{
public:
    void setGender(string _gender);
    string getGender();
    void setName(string _name);
    string getName();
    void setAge(int _age);
    int getAge();
    void teach(int _score);
    int getScore();

private:
    string m_strName;
    int m_iAge;
    string m_strGender;
    int m_iScore = 0;
};