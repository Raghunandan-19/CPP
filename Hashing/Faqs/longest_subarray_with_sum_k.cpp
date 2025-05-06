#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestSubarray(vector<int> &nums, int k) {
        int n = nums.size();
        map<long long, int> pre_sum_map;
        long long sum = 0;
        int max_len = 0;

        for (int i = 0; i < n; i++) {
            sum += nums[i];

            if (sum == k) {
                max_len = max(max_len, i + 1);
            }

            long long rem = sum - k;

            if (pre_sum_map.find(rem) != pre_sum_map.end()) {
                int len = i - pre_sum_map[rem];
                max_len = max(max_len, len);
            }

            if (pre_sum_map.find(sum) == pre_sum_map.end()) {
                pre_sum_map[sum] = i;
            }
        }

        return max_len;
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