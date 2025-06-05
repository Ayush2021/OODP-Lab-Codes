#include <iostream>
using namespace std;

class OddNumbers {
private:
    int n;
    int sum;
public:
    void inputNumber() {
        cout << "Enter the number of terms: ";
        cin >> n;
        sum = 0;
    }
    void displayOddNumbers() {
        cout << "First " << n << " odd natural numbers are: ";
        for (int i = 0; i < n; i++) {
            int oddNum = 2 * i + 1;
            cout << oddNum << " ";
            sum += oddNum;
        }
        cout << endl;
    }
    void displaySum() {
        cout << "Sum of these odd numbers: " << sum << endl;
    }
};

int main() {
    OddNumbers obj;
    obj.inputNumber();
    obj.displayOddNumbers();
    obj.displaySum();
    return 0;
}
