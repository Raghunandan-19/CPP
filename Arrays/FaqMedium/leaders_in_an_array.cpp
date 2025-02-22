#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> leaders(vector<int> &nums) {
        int n = nums.size();        
        vector<int> ans;
        int leader = INT_MIN;
        
        // Traverse the array from left to right
        for (int i = 0; i < n; i++) {
            // If the current element is greater than the current leader
            if (nums[i] > leader) {
                // Add the current element to the answer list
                ans.push_back(nums[i]);
                // Update the leader to the current element
                leader = nums[i];
            }
        }

        return ans;
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

    Solution sol;
    for (auto num : sol.leaders(nums)) {
        cout << num << " ";
    }
    cout << "\n";

    return 0;
}