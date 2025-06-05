#include <iostream>
using namespace std;
class Demo {
public:
    Demo() {
        cout << "Constructor is called: Object Created!" << endl; // Constructor
    }
    ~Demo() {
        cout << "Destructor is called: Object Destroyed!" << endl; // Destructor
    }
};
int main() {
    cout << "Creating Object...\n";
    Demo obj;
    cout << "Exiting Program...\n";
    return 0;
}
