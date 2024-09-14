//Question 1
#include <iostream>
using namespace std;

bool searchIn2DArray(int** array, int rows, int cols, int key) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (array[i][j] == key) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    int rows, cols, key;

    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    int** array = new int*[rows];
    for (int i = 0; i < rows; ++i) {
        array[i] = new int[cols];
    }

    cout << "Enter elements of the 2D array:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> array[i][j];
        }
    }

    cout << "Enter the key to search: ";
    cin >> key;

    if (searchIn2DArray(array, rows, cols, key)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    for (int i = 0; i < rows; ++i) {
        delete[] array[i];
    }
    delete[] array;

    return 0;
}

//Question 2
#include <iostream>
using namespace std;

int calculateSum(int** array, int rows, int cols) {
    int sum = 0;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            sum += array[i][j];
        }
    }
    return sum;
}

int main() {
    int rows, cols;

    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    int** array = new int*[rows];
    for (int i = 0; i < rows; ++i) {
        array[i] = new int[cols];
    }

    cout << "Enter elements of the 2D array:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> array[i][j];
        }
    }

    int sum = calculateSum(array, rows, cols);
    cout << "Sum of all elements: " << sum << endl;

    for (int i = 0; i < rows; ++i) {
        delete[] array[i];
    }
    delete[] array;

    return 0;
}

