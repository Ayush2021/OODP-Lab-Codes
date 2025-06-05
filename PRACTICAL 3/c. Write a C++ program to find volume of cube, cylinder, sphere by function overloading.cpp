#include <iostream>
using namespace std;

double volume(double side) 
{
    return side * side * side;
}

double volume(double radius, double height) 
{
    return 3.14 * radius * radius * height;
}

double volume(double radius, bool isSphere) 
{
    return (4.0 / 3.0) * 3.14 * radius * radius * radius;
}

int main() 
{
    double side, radius, height;

    cout << "Enter the side length of the cube: ";
    cin >> side;
    cout << "Volume of Cube: " << volume(side) << endl;

    cout << "Enter the radius and height of the cylinder: ";
    cin >> radius >> height;
    cout << "Volume of Cylinder: " << volume(radius, height) << endl;

    cout << "Enter the radius of the sphere: ";
    cin >> radius;
    cout << "Volume of Sphere: " << volume(radius, true) << endl;

    return 0;
}
