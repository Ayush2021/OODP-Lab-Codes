#include <iostream>
#include <fstream> 
#include <string>
using namespace std;

void addData(const string &filename) // constant reference parameter of type string
{
    ofstream outFile(filename, ios::trunc);    // open file in overwrite mode
    if (!outFile)
	{
        cerr << "Error opening file!" << endl;
        return;
    }
    string data;
    cout << "Enter data to add: ";
    cin.ignore(); // ignore previous newline character
    getline(cin, data); // reads multi-word input
    outFile << data << endl; // write data to file
    outFile.close(); // close file
    cout << "Data added successfully!" << endl;
}

void modifyData(const string &filename)  // constant reference parameter of type string
{
    cout << "Modifying data is similar to overwriting. Re-enter new data." << endl;
    addData(filename); // calls addData() function to overwrite the file.
}

void appendData(const string &filename) // constant reference parameter of type string
{
    ofstream outFile(filename, ios::app); // open file in append mode
    if (!outFile) 
    {
        cerr << "Error opening file!" << endl;
        return;
    }
    string data;
    cout << "Enter data to append: ";
    cin.ignore();
    getline(cin, data);    // reads multi-word input
    outFile << data << endl;
    outFile.close();
    cout << "Data appended successfully!" << endl;
}

void displayData(const string &filename)  // constant reference parameter of type string
{
    ifstream inFile(filename); // opens the file in read mode (ifstream).
    if (!inFile) 
    {
        cerr << "Error opening file!" << endl; // cerr is designed to output error messages and diagnostic information, unlike cout which is for general output.
        return;
    }
    string line;
    cout << "\nContents of the file:\n";
    while (getline(inFile, line)) // read line by line
    {
        cout << line << endl;
    }
    inFile.close();
}

int main() 
{
    string filename = "data.txt";
    int choice;
    do 
    {
        cout << "\nMenu: " << endl;
        cout << "1. Add Data" << endl;
        cout << "2. Modify Data" << endl;
        cout << "3. Append Data" << endl;
        cout << "4. Display Data" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) 
        {
            case 1: addData(filename); 
            break;
            case 2: modifyData(filename); 
            break;
            case 3: appendData(filename); 
            break;
            case 4: displayData(filename); 
            break;
            case 5: cout << "Exiting program..." << endl; 
            break;
            default: cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 5);
    return 0;
}






/* implemented multiple functions to get things done.
1. addData() - Overwrites the file with new data.

2. modifyData() - Calls addData() to modify (overwrite) the file.

3. appendData() - Appends new data without erasing existing content.

4. displayData() - Reads and displays the file content.

The program uses file handling functions like ofstream (for writing), 
ifstream (for reading), and ios::app (for appending).*/
