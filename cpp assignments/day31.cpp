//Question 1
#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> A(n), G(n);
    stack<int> s;

    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    for (int i = 0; i < n; i++) {
        while (!s.empty() && A[s.top()] >= A[i]) {
            s.pop();
        }

        if (s.empty()) {
            G[i] = -1;
        } else {
            G[i] = A[s.top()];
        }

        s.push(i);
    }

    for (int i = 0; i < n; i++) {
        cout << G[i] << " ";
    }

    return 0;
}
