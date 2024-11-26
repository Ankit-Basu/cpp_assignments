//Question 1 
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

int main() {
    int n, id;
    cin >> n;
    vector<int> items(n);
    for (int i = 0; i < n; i++) cin >> items[i];
    cin >> id;

    set<int> unique_items(items.begin(), items.end());
    vector<int> sorted_items(unique_items.begin(), unique_items.end());
    sort(sorted_items.begin(), sorted_items.end());

    for (int item : unique_items) cout << item << " ";
    cout << endl;

    for (int item : sorted_items) cout << item << " ";
    cout << endl;

    cout << (unique_items.count(id) ? "Available" : "Not Available") << endl;
    cout << unique_items.size() << endl;

    return 0;
}
