#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int> &nums, int target) {
        unordered_map<int, int> mpp; // Map to store the index of the elements
    
        int n = nums.size(); // Size of the input vector
    
        for (int i = 0; i < n; i++) {
            int num = nums[i];
            int moreNeeded = target - num; // The number needed to reach the target

            // Check if the needed number is already in the map
            if (mpp.find(moreNeeded) != mpp.end()) {
                return {mpp[moreNeeded], i}; // Return the indices of the two numbers
            }
    
            mpp[num] = i; // Store the index of the current number
        }
    
        return {-1, -1}; // Return -1, -1 if no solution is found
    }
};

int main() {
    int n;
    cin >> n;
    vector<int> nums;

    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        nums.push_back(num);
    }

    int target;
    cin >> target;

    Solution sol;
    for (auto num : sol.twoSum(nums, target)) {
        cout << num << " ";
    }
    cout << "\n";

    return 0;
}