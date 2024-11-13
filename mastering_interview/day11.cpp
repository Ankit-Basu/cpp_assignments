#include <iostream>
#include <cctype>
#include <string>
using namespace std;

bool isPalindrome(const string& phrase) {
    string filtered;
    for (char c : phrase) {
        if (isalnum(c)) filtered += tolower(c);
    }
    int left = 0, right = filtered.size() - 1;
    while (left < right) {
        if (filtered[left] != filtered[right]) return false;
        left++;
        right--;
    }
    return true;
}

int main() {
    cout << isPalindrome("A man, a plan, a canal: Panama") << endl;
    cout << isPalindrome("race a car") << endl;
    return 0;
}
