#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxElevationGain(vector<int>& nums) {
    int maxGain = nums[0];
    int currentGain = nums[0];
    
    for (int i = 1; i < nums.size(); i++) {
        currentGain = max(nums[i], currentGain + nums[i]);
        maxGain = max(maxGain, currentGain);
    }
    
    return maxGain;
}

int main() {
    int n;
    cout << "Enter the number of elevation changes: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elevation changes: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << "Maximum elevation gain: " << maxElevationGain(nums) << endl;
    return 0;
}
