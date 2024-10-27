//Question 1
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int minDifference(int arr[], int n, int m) {
    if (m == 0 || n == 0) return 0;
    sort(arr, arr + n);
    if (n < m) return -1;
    int minDiff = INT_MAX;
    for (int i = 0; i + m - 1 < n; i++) {
        int diff = arr[i + m - 1] - arr[i];
        minDiff = min(minDiff, diff);
    }
    return minDiff;
}

int main() {
    int arr[] = {7, 3, 2, 4, 9, 12, 56};
    int n = sizeof(arr) / sizeof(arr[0]);
    int m = 3;
    cout << minDifference(arr, n, m) << endl;
    return 0;
}
