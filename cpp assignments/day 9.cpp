//Question 1 

#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    int* ptr = &num;

    cout << "Value of the variable: " << num << endl;
    cout << "Value of the variable using the pointer: " << *ptr << endl;

    return 0;
}


//Question 2
#include <iostream>
using namespace std;

int main() {
    int arr[5];
    int* ptr = arr;

    cout << "Enter 5 integers: ";
    for (int i = 0; i < 5; i++) {
        cin >> *(ptr + i);
    }

    cout << "Array elements are: ";
    for (int i = 0; i < 5; i++) {
        cout << *(ptr + i) << " ";
    }
    cout << endl;

    return 0;
}

//Question 3
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    int* ptr = &num;
    int** ptrToPtr = &ptr;

    cout << "Value of the integer using the variable: " << num << endl;
    cout << "Value of the integer using the pointer: " << *ptr << endl;
    cout << "Value of the integer using the pointer to the pointer: " << **ptrToPtr << endl;

    return 0;
}
