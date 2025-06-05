#include <iostream>
using namespace std;

class PrimeChecker {
    private:
        int number;

    public:
        void setNumber(int num) {
            number = num;
        }

    bool isPrime() {
        if (number <= 1) {
            return false;
        }
    	for (int i = 2; i * i <= number; i++) {
        	if (number % i == 0) {
            	return false;
            	}
        	}
        return true;
    }
};

int main() {
    PrimeChecker checker;
    int num;
    cout << "Enter a number: ";
    cin >> num;

    checker.setNumber(num);

    if (checker.isPrime()) {
        cout << num << " is a prime number." << endl;
    } else {
        cout << num << " is not a prime number." << endl;
    }

    return 0;
}
