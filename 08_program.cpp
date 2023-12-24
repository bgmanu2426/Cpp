/*
Write a C++ program to explain virtual function (Polymorphism) by creating a base class polygon
which has virtual function areas two classes rectangle & triangle derived from polygon & they
have area to calculate & return the area of rectangle & triangle respectively. 
*/

#include <iostream>
using namespace std;

// Base class
class Polygon
{
public:
    virtual float area() = 0;
};

// Derived class Rectangle
class Rectangle : public Polygon
{
    float length, breadth;

public:
    Rectangle(float l, float b)
    {
        length = l;
        breadth = b;
    }
    float area()
    {
        return length * breadth;
    }
};

// Derived class Triangle
class Triangle : public Polygon
{
    float base, height;

public:
    Triangle(float b, float h)
    {
        base = b;
        height = h;
    }
    float area()
    {
        return 0.5 * base * height;
    }
};

int main()
{
    // Create and initialize Rectangle & Triangle objects
    Rectangle r(10, 20);
    Triangle t(10, 20);

    // Display the area of Rectangle & Triangle
    cout << "Area of Rectangle: " << r.area() << endl;
    cout << "Area of Triangle: " << t.area() << endl;

    return 0;
}
