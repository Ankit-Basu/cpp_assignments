//Question 1
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; ++i) cin >> arr[i];

    int minElem = arr[0], maxElem = arr[0];
    for (int i = 1; i < n; ++i) {
        if (arr[i] < minElem) minElem = arr[i];
        else if (arr[i] > maxElem) maxElem = arr[i];
    }

    cout << "Minimum element is: " << minElem << endl;
    cout << "Maximum element is: " << maxElem << endl;
    return 0;
}
