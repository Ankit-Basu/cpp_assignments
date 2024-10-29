#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxProfit(vector<int>& prices) {
    int minPrice = INT_MAX;
    int maxProfit = 0;
    for (int price : prices) {
        minPrice = min(minPrice, price);
        maxProfit = max(maxProfit, price - minPrice);
    }
    return maxProfit;
}

int main() {
    int n;
    cout << "Enter the number of days: ";
    cin >> n;
    vector<int> prices(n);
    cout << "Enter the prices: ";
    for (int i = 0; i < n; i++) {
        cin >> prices[i];
    }
    cout << "Maximum profit: " << maxProfit(prices) << endl;
    return 0;
}
