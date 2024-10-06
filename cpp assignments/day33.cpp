//Question 1 
#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    string s;
    cin >> s;

    unordered_map<char, int> freq;
    for (char c : s) {
        freq[c]++;
    }

    vector<pair<int, char>> chars;
    for (auto& entry : freq) {
        chars.push_back({entry.second, entry.first});
    }

    sort(chars.rbegin(), chars.rend());

    string result;
    for (auto& p : chars) {
        result += string(p.first, p.second);
    }

    cout << result << endl;

    return 0;
}
