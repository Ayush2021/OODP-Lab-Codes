#include <iostream>
using namespace std;
class Animal {
public:
    virtual void sound() { // Virtual function for polymorphism
        cout << "This is a generic animal sound.\n";
    }
};

class Dog : public Animal {
public:
    void sound() override { // Overriding the base class function
        cout << "The dog says: Woof Woof!\n";
    }
};

class Cat : public Animal {
public:
    void sound() override { // Overriding the base class function
        cout << "The cat says: Meow Meow!\n";
    }
};

int main() {
    Animal* animalPtr; // Base class pointer
    Dog dog;
    Cat cat;
    animalPtr = &dog;
    animalPtr->sound(); // Runtime polymorphism
    animalPtr = &cat;
    animalPtr->sound(); // Runtime polymorphism
    return 0;
}
