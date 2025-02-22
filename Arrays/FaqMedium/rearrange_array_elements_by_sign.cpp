#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> rearrangeArray(vector<int> &nums) {
        int n = nums.size();
        vector<int> ans(n);
        int positive = 0, negative = 1;

        // Iterate through the array and place positive and negative numbers
        for (int i = 0; i < n; i++) {
            if (nums[i] > 0) {
                // Place positive number at the next available even index
                ans[positive] = nums[i];
                positive += 2;
            }
            else {
                // Place negative number at the next available odd index
                ans[negative] = nums[i];
                negative += 2;
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
    for (auto num : sol.rearrangeArray(nums)) {
        cout << num << " ";
    }
    cout << "\n";

    return 0;
}