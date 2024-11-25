//Question 1
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main() {
    int N, P;
    cin >> N;
    vector<int> prices(N);
    for (int i = 0; i < N; ++i) cin >> prices[i];
    cin >> P;

    if (find(prices.begin(), prices.end(), P) != prices.end())
        cout << "Found" << endl;
    else
        cout << "Not Found" << endl;

    sort(prices.begin(), prices.end());
    for (int price : prices) cout << price << " ";
    cout << endl;

    cout << accumulate(prices.begin(), prices.end(), 0) << endl;
    cout << *max_element(prices.begin(), prices.end()) << endl;
    cout << *min_element(prices.begin(), prices.end()) << endl;

    return 0;
}
