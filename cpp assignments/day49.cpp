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


//Qurstion 2
#include <iostream>
#include <vector>
#include <set>
using namespace std;

pair<set<int>, set<int>> findUnionAndIntersection(vector<int>& arr1, vector<int>& arr2) {
    set<int> unionSet, intersectionSet;
    for (int num : arr1) unionSet.insert(num);
    for (int num : arr2) {
        if (unionSet.count(num)) intersectionSet.insert(num);
        unionSet.insert(num);
    }
    return {unionSet, intersectionSet};
}

int main() {
    vector<int> arr1 = {1, 2, 3}, arr2 = {2, 3, 4};
    auto [unionSet, intersectionSet] = findUnionAndIntersection(arr1, arr2);
    cout << "Union = {";
    for (auto it = unionSet.begin(); it != unionSet.end(); ++it) {
        if (it != unionSet.begin()) cout << ", ";
        cout << *it;
    }
    cout << "}" << endl;
    cout << "Intersection = {";
    for (auto it = intersectionSet.begin(); it != intersectionSet.end(); ++it) {
        if (it != intersectionSet.begin()) cout << ", ";
        cout << *it;
    }
    cout << "}" << endl;
    return 0;
}

