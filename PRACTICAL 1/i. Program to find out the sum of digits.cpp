#include <iostream>
using namespace std;
int main() {
    int num, sum = 0;
    cout << "Enter a number: ";
    cin >> num;

    while (num > 0) 
	{
        sum += num % 10;
        num /= 10;
    }

    cout << "The sum of digits is: " << sum << endl;
    return 0;
}
