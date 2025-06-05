#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() = 0; // Pure virtual function
};

class Circle : public Shape {
public:
    void draw() override { // Override the pure virtual function
        cout << "Drawing a Circle.\n";
    }
};

class Rectangle : public Shape {
public:
    void draw() override { // Override the pure virtual function
        cout << "Drawing a Rectangle.\n";
    }
};

int main() {
    Shape* shape; // Pointer to base class
    Circle circle;
    Rectangle rectangle;
    shape = &circle;
    shape->draw(); // Output: Drawing a Circle.
    shape = &rectangle;
    shape->draw(); // Output: Drawing a Rectangle.
    return 0;
}
