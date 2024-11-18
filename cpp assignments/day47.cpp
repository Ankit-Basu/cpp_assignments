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
