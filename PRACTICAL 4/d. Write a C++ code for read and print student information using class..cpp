#include <iostream>
#include <string>
using namespace std;

class Student {
    private:
        string name;
        int age;
        int rollNumber;

    public:
        void readStudentInfo() {
            cout << "Enter student's name: ";
            cin >> name;
            cout << "Enter student's age: ";
            cin >> age;
            cout << "Enter student's roll number: ";
            cin >> rollNumber;
        }

        void printStudentInfo() {
            cout << "Student's Name: " << name << endl;
            cout << "Student's Age: " << age << endl;
            cout << "Student's Roll Number: " << rollNumber << endl;
        }
};

int main() {
    Student s1;  // CREATING OBJECT OF CLASS

    s1.readStudentInfo();
    s1.printStudentInfo();
    return 0;
}
