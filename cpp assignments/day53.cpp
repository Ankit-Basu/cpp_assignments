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


//Question 2
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main() {
    int n, y, even_count = 0, odd_count = 0;
    cin >> n;
    vector<int> numbers(n);
    for (int i = 0; i < n; i++) cin >> numbers[i];
    cin >> y;

    for (int num : numbers) {
        if (num % 2 == 0) even_count++;
        else odd_count++;
    }

    long long product = accumulate(numbers.begin(), numbers.end(), 1LL, [](long long a, int b) { return a * b; });

    cout << even_count << endl;
    cout << odd_count << endl;
    cout << product << endl;
    cout << (find(numbers.begin(), numbers.end(), y) != numbers.end() ? "Found" : "Not Found") << endl;

    sort(numbers.rbegin(), numbers.rend());
    for (int num : numbers) cout << num << " ";
    cout << endl;

    return 0;
}
