#include <iostream>
using namespace std;

template <typename T> // declares T as a generic data type.
T findLargest(T a, T b) // a function that can work with any data type.
{
    return (a > b) ? a : b;
}
int main() 
{
    int num1 = 10, num2 = 20;
    double d1 = 15.5, d2 = 12.3;
    char c1 = 'A', c2 = 'Z';
    cout<<"Largest among "<<num1<<" and "<<num2<<" is: "<<findLargest(num1, num2)<<endl;
    cout<<"Largest among "<<d1<<" and "<<d2<<" is: "<<findLargest(d1, d2)<<endl;
    cout<<"Largest among "<<c1<<" and "<<c2<<" is: "<<findLargest(c1, c2)<<" "<<endl;
    return 0;
}
