//Question 10
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> findNeutralTriplets(vector<int>& positions) {
    vector<vector<int>> result;
    sort(positions.begin(), positions.end());

    for (int i = 0; i < positions.size() - 2; ++i) {
        if (i > 0 && positions[i] == positions[i - 1]) continue;

        int left = i + 1;
        int right = positions.size() - 1;

        while (left < right) {
            int sum = positions[i] + positions[left] + positions[right];
            if (sum == 0) {
                result.push_back({positions[i], positions[left], positions[right]});
                while (left < right && positions[left] == positions[left + 1]) ++left;
                while (left < right && positions[right] == positions[right - 1]) --right;
                ++left;
                --right;
            } else if (sum < 0) {
                ++left;
            } else {
                --right;
            }
        }
    }

    return result;
}

int main() {
    vector<int> positions = {-1, 0, 1, 2, -1, -4};
    auto triplets = findNeutralTriplets(positions);

    for (const auto& triplet : triplets) {
        for (int position : triplet) {
            cout << position << " ";
        }
        cout << endl;
    }

    return 0;
}
