//Question1
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ofstream outFile("details.txt");
    string firstName, lastName;
    int age;

    cout << "Enter first name: ";
    cin >> firstName;
    cout << "Enter last name: ";
    cin >> lastName;
    cout << "Enter age: ";
    cin >> age;

    if (outFile.is_open()) {
        outFile << "First Name: " << firstName << endl;
        outFile << "Last Name: " << lastName << endl;
        outFile << "Age: " << age << endl;
        outFile.close();
    }

    ifstream inFile("details.txt");
    string line;

    if (inFile.is_open()) {
        while (getline(inFile, line)) {
            cout << line << endl;
        }
        inFile.close();
    }

    return 0;
}


//Question2
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ifstream inFile("input.txt");
    string line;

    if (inFile.is_open()) {
        while (getline(inFile, line)) {
            cout << line << endl;
        }
        inFile.close();
    } else {
        cout << "Unable to open file." << endl;
    }

    return 0;
}
