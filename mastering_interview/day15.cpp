//Question 15
#include <iostream>
#include <unordered_set>
#include <string>
using namespace std;

int lengthOfLongestSubstring(const string& s) {
    unordered_set<char> seen;
    int maxLength = 0, start = 0;

    for (int end = 0; end < s.size(); ++end) {
        while (seen.find(s[end]) != seen.end()) {
            seen.erase(s[start]);
            ++start;
        }
        seen.insert(s[end]);
        maxLength = max(maxLength, end - start + 1);
    }
    return maxLength;
}

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;
    cout << "Length of the longest substring without repeating characters: " 
         << lengthOfLongestSubstring(s) << endl;
    return 0;
}
