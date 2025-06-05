#include <iostream>
using namespace std;

class Complex {
    private:
        float real;
        float imag;
    public:
        Complex(float r = 0.0, float i = 0.0) {
            real = r;
            imag = i;
        }
        void display() {
            cout << real << " + " << imag << "i" << endl;
        }
        friend Complex add(Complex c1, Complex c2);
};

Complex add(Complex c1, Complex c2) {
    Complex temp;
    temp.real = c1.real + c2.real;
    temp.imag = c1.imag + c2.imag;
    return temp;
}

int main() {
    Complex c1(3.5, 2.8);
    Complex c2(1.2, 3.1);
    Complex c3;
    cout << "First complex number: ";
    c1.display();
    cout << "Second complex number: ";
    c2.display();
    c3 = add(c1, c2);
    cout << "Sum of two complex numbers: ";
    c3.display();
    return 0;
}
