#include <iostream>
using namespace std;
// declaring user define function
int cube(int number) {
    return number * number * number;
}
// main function
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
	
    int result = cube(num);  // calling function
    cout << "The cube of " << num << " is " << result << ".";
    
	return 0;
}
