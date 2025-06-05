#include <iostream>
using namespace std;
class Add {
    private:
        int num1, num2;
    public:
        void setNumbers(int a, int b) {
            num1 = a;
            num2 = b;
        }
        int getSum() {
            return num1 + num2;
        }
};
int main() {
    Add addition;  // CREATING OBJECT OF CLASS
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;
    addition.setNumbers(a, b);
    cout << "The sum of the two integers is: " << addition.getSum() << endl;
    return 0;
}
