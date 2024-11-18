#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int findIndex(const vector<int>& vec, int target) {
    auto it = find(vec.begin(), vec.end(), target);
    return it != vec.end() ? distance(vec.begin(), it) : -1;
}

vector<int> rotateVector(vector<int> vec, int k) {
    k %= vec.size();
    rotate(vec.rbegin(), vec.rbegin() + k, vec.rend());
    return vec;
}

int main() {
    vector<int> vec1 = {1, 3, 5, 7, 9};
    cout << findIndex(vec1, 7) << endl;
    cout << findIndex(vec1, 10) << endl;

    vector<int> vec2 = {1, 2, 3, 4, 5};
    vec2 = rotateVector(vec2, 2);
    for (int i : vec2) cout << i << " ";
    cout << endl;

    vector<int> vec3 = {10, 20, 30, 40};
    vec3 = rotateVector(vec3, 1);
    for (int i : vec3) cout << i << " ";
    cout << endl;

    return 0;
}
