#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findKRotation(vector<int> &nums)  {
        int n = nums.size();
        int idx = -1;
        int minimum_element = INT_MAX;

        for (int i = 0; i < n; i++) {
            if (nums[i] < minimum_element) {
                minimum_element = nums[i];
                idx = i;
            }
        }

        return idx;
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
    cout << sol.findKRotation(nums) << "\n";

    return 0;
}