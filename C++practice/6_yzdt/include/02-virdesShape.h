#pragma once
#include <iostream>
#include <stdlib.h>

using namespace std;
namespace virdes
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
    return 0;
}

} // namespace virdes
