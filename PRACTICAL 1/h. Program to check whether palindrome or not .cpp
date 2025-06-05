#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    // Convert the string to lowercase
    for (int i = 0; i < str.length(); i++) {
        str[i] = tolower(str[i]);
    }

    string revStr = str;
    reverse(revStr.begin(), revStr.end());
    if (str == revStr) {
        cout << str << " is a palindrome." << endl;
    } else {
        cout << str << " is not a palindrome." << endl;
    }
    return 0;
}
