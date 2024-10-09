//Question 1 
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> a(n);
        
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        
        int max_diff = max(a[0], x - a[n - 1]);
        for (int i = 1; i < n; ++i) {
            max_diff = max(max_diff, a[i] - a[i - 1]);
        }
        
        cout << max_diff << endl;
    }
    
    return 0;
}
