#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestSubarray(vector<int> &nums, int k) {
        int n = nums.size();
        int longest = INT_MIN;

        for (int start_index = 0; start_index < n; start_index++) {
            for (int end_index = start_index; end_index < n; end_index++) {
                int current_sum = 0;

                for (int i = start_index; i <= end_index; i++) {
                    current_sum += nums[i];
                }

                if (current_sum == k) {
                    longest = max(longest, end_index - start_index + 1);
                }
            }
        }

        return longest;
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

    int k;
    cin >> k;

    Solution sol;
    cout << sol.longestSubarray(nums, k) << "\n";
    
    return 0;
}