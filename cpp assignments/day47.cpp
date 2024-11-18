//Question 1
#include <iostream>
#include <vector>
using namespace std;

int findIndex(const vector<int>& vec, int target) {
    for (size_t i = 0; i < vec.size(); ++i) {
        if (vec[i] == target) return i;
    }
    return -1;
}

int main() {
    vector<int> vec1 = {1, 3, 5, 7, 9};
    cout << findIndex(vec1, 7) << endl;

    vector<int> vec2 = {2, 4, 6, 8};
    cout << findIndex(vec2, 10) << endl;

    return 0;
}


//Question 2
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void rotateVector(vector<int>& vec, int k) {
    k %= vec.size();
    rotate(vec.rbegin(), vec.rbegin() + k, vec.rend());
}

int main() {
    vector<int> vec1 = {1, 2, 3, 4, 5};
    rotateVector(vec1, 2);
    for (int i : vec1) cout << i << " ";
    cout << endl;

    vector<int> vec2 = {10, 20, 30, 40};
    rotateVector(vec2, 1);
    for (int i : vec2) cout << i << " ";
    cout << endl;

    return 0;
}
