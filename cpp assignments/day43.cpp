//Question 1

#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>

using namespace std;

class NonIntegerDataException : public exception {
public:
    const char* what() const noexcept override {
        return "Non-integer data found in the file.";
    }
};

int main() {
    string filePath;
    cout << "Enter file path: ";
    cin >> filePath;

    try {
        ifstream file(filePath);
        if (!file.is_open()) {
            throw ios_base::failure("Error: Unable to open the file.");
        }

        int sum = 0, number;
        string word;
        try {
            while (file >> word) {
                istringstream iss(word);
                if (iss >> number) {
                    sum += number;
                } else {
                    throw NonIntegerDataException();
                }
            }
            cout << "Sum of integers: " << sum << endl;
        } catch (const NonIntegerDataException& e) {
            cerr << "Error: " << e.what() << endl;
        }

    } catch (const ios_base::failure& e) {
        cerr << e.what() << endl;
    }

    return 0;
}
