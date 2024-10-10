//Question 1
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) cin >> a[i];
        if (n % 2 == 0) cout << max(a[0], a[1]) << endl;
        else {
            int result = a[0];
            for (int i = 1; i < n; i += 2) result = max(result, a[i]);
            cout << result << endl;
        }
    }
    return 0;
}
