#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

float divide(int a, int b) {
    if (b != 0){	
        return (float)a / b;}
    else {
        cout << "Error! Division by zero.";
        return 0;
    }
}

int Modulus(int a, int b) {
    return a % b;
}

int main() {
    int num1, num2;
    char operation;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "Enter an operator (+, -, *, /, %): ";
    cin >> operation;

    switch (operation) {
        case '+':
            cout << "Result: " << add(num1, num2);
            break;
        case '-':
            cout << "Result: " << subtract(num1, num2);
            break;
        case '*':
            cout << "Result: " << multiply(num1, num2);
            break;
        case '/':
            cout << "Result: " << divide(num1, num2);
            break;
        case '%':
            cout << "Result: " << Modulus(num1, num2);
            break;
        default:
            cout << "Error! Invalid operator.";
            break;
    }
    return 0;
}
