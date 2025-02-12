#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int sumHighestAndLowestFrequency(vector<int>& nums) {
        unordered_map<int, int> mpp;

        for (int num : nums) {
            mpp[num]++;
        }

        int highestFrequency = INT_MIN;
        int lowestFrequency = INT_MAX;

        for (auto it : mpp) {
            int frequency = it.second;

            highestFrequency = max(frequency, highestFrequency);
            lowestFrequency = min(frequency, lowestFrequency);
        }

        return (highestFrequency + lowestFrequency);
    }
};

int main() {
    int n;
    cin >> n;
    vector<int> nums;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        nums.push_back(x);
    }

    Solution sol;
    cout << sol.sumHighestAndLowestFrequency(nums) << "\n";
    
    return 0;
}