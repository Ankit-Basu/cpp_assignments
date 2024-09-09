//Question 1
#include <iostream>
using namespace std;

bool findTarget(const int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return true;
        }
    }
    return false;
}

int main() {
    int size, target;
    cout << "Enter the number of elements in the array: ";
    cin >> size;

    int* arr = new int[size];

    cout << "Enter " << size << " integers for the array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "Enter the target value: ";
    cin >> target;

    if (findTarget(arr, size, target)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    delete[] arr; 

    return 0;
}

//Question 2
#include <iostream>
using namespace std;

int findIndex(const int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i + 1;
        }
    }
    return -1;
}

int main() {
    int size, target;
    cout << "Enter the number of elements in the array: ";
    cin >> size;

    int* arr = new int[size];

    cout << "Enter " << size << " integers for the array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "Enter the target value: ";
    cin >> target;

    int index = findIndex(arr, size, target);
    cout << index << endl;

    delete[] arr;

    return 0;
}
