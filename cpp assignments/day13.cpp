//Question 1
#include <iostream>
using namespace std;

int main() {
    int* ptr = new int;

    cout << "Enter an integer value: ";
    cin >> *ptr;

    cout << "Value of dynamic variable: " << *ptr << endl;
    cout << "Address of dynamic variable: " << ptr << endl;

    delete ptr;

    ptr = nullptr;

    return 0;
}

