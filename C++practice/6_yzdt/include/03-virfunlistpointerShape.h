#pragma once
#include <iostream>
#include <stdlib.h>

using namespace std;
namespace virfunlistpointer
{
class Shape
{
public:
    Shape();
    // ~Shape();
    double calcArea();
    virtual ~Shape();
    // virtual double calcArea();

protected:
private:
};

Shape::Shape()
{
    // std::cout << "Shape()" << std::endl;
}
Shape::~Shape()
{
    // std::cout << "~Shape()" << std::endl;
}
double Shape::calcArea()
{
    std::cout << "Shape--calcArea" << std::endl;
    return 0;
}

} // namespace virfunlistpointer
