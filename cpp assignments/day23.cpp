//Question 1
#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
using namespace std;

// Function for O(n^2) complexity
void findPairBruteForce(const vector<int>& arr, int target) {
    int n = arr.size();
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (arr[i] + arr[j] == target) {
                cout << "YES" << endl;
                return;
            }
        }
    }
    cout << "NO" << endl;
}

// Function for O(n log n) complexity
void findPairUsingSorting(vector<int>& arr, int target) {
    sort(arr.begin(), arr.end());
    int left = 0;
    int right = arr.size() - 1;

    while (left < right) {
        int sum = arr[left] + arr[right];
        if (sum == target) {
            cout << "YES" << endl;
            return;
        }
        if (sum < target) {
            left++;
        } else {
            right--;
        }
    }
    cout << "NO" << endl;
}

int main() {
    int n, target;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    cout << "Enter the target sum: ";
    cin >> target;

    cout << "Using O(n^2) approach: ";
    findPairBruteForce(arr, target);

    cout << "Using O(n log n) approach: ";
    findPairUsingSorting(arr, target);

    return 0;
}
