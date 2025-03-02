#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int NumberOfJumps(vector<int>& nums, int k) {
        int n = nums.size();
        int total = 0;

        for (int i = 0; i < n; i++) {
            int count = 0;
            for (int j = i + 1; j < n; j++) {
                if (nums[i] + k < nums[j]) {
                    count++;
                }
            }
            total += count;
        }

        return total;
    }
};
    
int main() {
    int n, k;

    cin >> n;
    vector<int> nums(n);

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cin >> k;

    Solution sol;
    int result = sol.NumberOfJumps(nums, k);
    cout << result << endl;
    return 0;
}