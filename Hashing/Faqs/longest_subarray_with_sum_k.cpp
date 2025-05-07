#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestSubarray(vector<int> &nums, int k) {
        int n = nums.size();
        map<long long, int> pre_sum_map; // Map to store prefix sums and their earliest indices
        long long sum = 0; // Variable to store the running sum
        int max_len = 0; // Variable to store the maximum length of subarray with sum k

        for (int i = 0; i < n; i++) {
            sum += nums[i]; // Update the running sum

            // If the running sum equals k, update max_len to include the entire subarray from the start
            if (sum == k) {
            max_len = max(max_len, i + 1);
            }

            // Calculate the remaining sum needed to reach k
            long long rem = sum - k;

            // Check if the remaining sum exists in the map
            if (pre_sum_map.find(rem) != pre_sum_map.end()) {
            // Calculate the length of the subarray and update max_len
            int len = i - pre_sum_map[rem];
            max_len = max(max_len, len);
            }

            // Store the current sum in the map if it is not already present
            if (pre_sum_map.find(sum) == pre_sum_map.end()) {
            pre_sum_map[sum] = i;
            }
        }

        return max_len; // Return the maximum length of subarray with sum k
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