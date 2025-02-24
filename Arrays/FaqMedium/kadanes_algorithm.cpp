#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int> &nums) {
        int n = nums.size();

        // Initialize maxSum to the smallest possible value and sum to 0
        long long maxSum = LLONG_MIN;
        long long sum = 0;

        // Iterate through the array
        for (int i = 0; i < n; i++) {
            // Add the current element to the sum
            sum += nums[i];

            // Update maxSum if the current sum is greater than maxSum
            if (sum > maxSum) {
                maxSum = sum;
            }

            // If the current sum is negative, reset it to 0
            if (sum < 0) {
                sum = 0;
            }
        }

        // Return the maximum sum found
        return maxSum;
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
    cout << sol.maxSubArray(nums) << "\n";

    return 0;
}