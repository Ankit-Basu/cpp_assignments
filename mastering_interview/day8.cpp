#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n, target;
        cin >> n >> target;
        int arr[n];
        for (int i = 0; i < n; i++) cin >> arr[i];
        unordered_set<int> seen;
        bool found = false;
        for (int i = 0; i < n; i++) {
            if (seen.count(target - arr[i])) {
                found = true;
                break;
            }
            seen.insert(arr[i]);
        }
        cout << (found ? "Yes" : "No") << endl;
    }
    return 0;
}
```