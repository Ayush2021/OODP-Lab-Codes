#include <iostream>
using namespace std;

class Calculator 
{
public:
    int add(int a, int b); //declaring
};

int Calculator::add(int a, int b) {   //defining
    return a + b;
}

int main() 
{
    Calculator calc;   //creating object of class 
    cout << "Addition: " << calc.add(10, 5) << endl;
    return 0;
}
