#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cout << "Enter the number of terms: ";
    cin >> n;

    cout << "First " << n << " odd natural numbers are: ";
    for (int i = 0; i < n; i++) {
        int oddNum = 2 * i + 1;
        cout << oddNum << " ";
        sum += oddNum;
    }
    
    cout << "\nSum of these odd numbers: " << sum << endl;
    return 0;
}
