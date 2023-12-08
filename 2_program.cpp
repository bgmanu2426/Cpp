/*
Write a C++ program to calculate the vloume of diffrent geometric shapes  like cube, cylinder and sphere using function overloading concept.
*/

#include <iostream>
#include <cmath>
using namespace std;

int volume(int side)
{
    return side * side * side;
} // Volume of cube

double volume(double radius_sphere)
{
    return (4 / 3) * M_PI * radius_sphere * radius_sphere * radius_sphere;
} // Volume of sphere

double volume(double radius_cylinder, double height)
{
    return M_PI * radius_cylinder * radius_cylinder * height;
} // Volume of cylinder

int main()
{
    int side;
    double radius_sphere, radius_cylinder, height;

    cout << "Enter the side of cube: " << endl;
    cin >> side;
    cout << "Volume of cube is: " << volume(side) << endl;

    cout << "Enter the radius of sphere: " << endl;
    cin >> radius_sphere;
    cout << "Volume of sphere is: " << volume(radius_sphere) << endl;

    cout << "Enter the radius and height of cylinder: " << endl;
    cin >> radius_cylinder >> height;
    cout << "Volume of cylinder is: " << volume(radius_cylinder, height) << endl;

    return 0;
}