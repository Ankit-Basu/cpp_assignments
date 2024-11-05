#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int partition(vector<int>& times, int low, int high) {
    int pivot = times[high], i = low;
    for (int j = low; j < high; ++j) {
        if (times[j] < pivot) swap(times[i++], times[j]);
    }
    swap(times[i], times[high]);
    return i;
}

int quickSelect(vector<int>& times, int k) {
    int low = 0, high = times.size() - 1;
    while (low <= high) {
        int pivotIndex = partition(times, low, high);
        if (pivotIndex == k) return times[pivotIndex];
        else if (pivotIndex < k) low = pivotIndex + 1;
        else high = pivotIndex - 1;
    }
    return -1;
}

int kthFastestTime(vector<int>& times, int k) {
    return quickSelect(times, k - 1);
}

int main() {
    int n, k;
    cout << "Enter the number of participants: ";
    cin >> n;

    vector<int> times(n);
    cout << "Enter the completion times (in minutes): ";
    for (int i = 0; i < n; ++i) {
        cin >> times[i];
    }

    cout << "Enter the value of k (to find the k-th fastest time): ";
    cin >> k;

    if (k > 0 && k <= n) {
        int result = kthFastestTime(times, k);
        cout << "The " << k << "-th fastest time is: " << result << " minutes" << endl;
    } else {
        cout << "Invalid value of k" << endl;
    }

    return 0;
}
