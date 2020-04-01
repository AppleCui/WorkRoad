#pragma once
#include <iostream>
#include <stdlib.h>

using namespace std;
namespace virfun
{
class Shape
{
public:
    Shape();
    virtual ~Shape();
    virtual double calcArea();

protected:
private:
};

Shape::Shape()
{
    std::cout << "Shape()" << std::endl;
}
Shape::~Shape()
{
    std::cout << "~Shape()" << std::endl;
}
double Shape::calcArea()
{
    std::cout << "Shape--calcArea" << std::endl;
    return 0; //为什么必须要有一个返回值？
}

} // namespace virfun
