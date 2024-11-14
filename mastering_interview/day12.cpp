//Question 12
#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

bool isAnagram(string s, string t) {
    if (s.size() != t.size()) return false;
    unordered_map<char, int> count;
    for (char c : s) count[c]++;
    for (char c : t) {
        if (--count[c] < 0) return false;
    }
    return true;
}

int main() {
    string s1 = "anagram", t1 = "nagaram";
    string s2 = "rat", t2 = "car";

    cout << (isAnagram(s1, t1) ? "true" : "false") << endl;
    cout << (isAnagram(s2, t2) ? "true" : "false") << endl;

    return 0;
}
