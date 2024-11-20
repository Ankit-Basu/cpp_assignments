//Question 1
#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

vector<int> sortByFrequency(vector<int>& vec) {
    unordered_map<int, int> freq;
    for (int num : vec) freq[num]++;
    sort(vec.begin(), vec.end(), [&](int a, int b) {
        if (freq[a] == freq[b]) return a < b;
        return freq[a] < freq[b];
    });
    return vec;
}

int main() {
    vector<int> vec1 = {4, 5, 6, 5, 4, 3};
    vector<int> vec2 = {9, 9, 8, 7, 7, 7};
    vec1 = sortByFrequency(vec1);
    vec2 = sortByFrequency(vec2);
    for (int num : vec1) cout << num << " ";
    cout << endl;
    for (int num : vec2) cout << num << " ";
    return 0;
}
