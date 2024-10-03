//Question1 
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    
    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int max_sum = arr[0], current_sum = arr[0];
    for (int i = 1; i < n; i++) {
        current_sum = max(arr[i], current_sum + arr[i]);
        max_sum = max(max_sum, current_sum);
    }

    cout << "Maximum sum of subarray: " << max_sum << endl;
    return 0;
}

//Question2
#include <iostream>
#include <vector>
#include <unordered_map>
#include <stack>
using namespace std;

int main() {
    int n1, n2;
    cout << "Enter the size of nums1: ";
    cin >> n1;
    cout << "Enter the size of nums2: ";
    cin >> n2;

    vector<int> nums1(n1), nums2(n2);
    cout << "Enter the elements of nums1: ";
    for (int i = 0; i < n1; i++) {
        cin >> nums1[i];
    }

    cout << "Enter the elements of nums2: ";
    for (int i = 0; i < n2; i++) {
        cin >> nums2[i];
    }

    unordered_map<int, int> nextGreater;
    stack<int> s;

    for (int i = 0; i < n2; i++) {
        while (!s.empty() && nums2[i] > s.top()) {
            nextGreater[s.top()] = nums2[i];
            s.pop();
        }
        s.push(nums2[i]);
    }

    while (!s.empty()) {
        nextGreater[s.top()] = -1;
        s.pop();
    }

    vector<int> ans(n1);
    for (int i = 0; i < n1; i++) {
        ans[i] = nextGreater[nums1[i]];
    }

    cout << "Next greater elements: [";
    for (int i = 0; i < n1; i++) {
        cout << ans[i];
        if (i < n1 - 1) cout << ", ";
    }
    cout << "]" << endl;

    return 0;
}
