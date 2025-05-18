#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int smallestDivisor(vector<int> &nums, int limit) {
        int n = nums.size();
        int maximum_element = *max_element(nums.begin(), nums.end());

        for (int divisor = 1; divisor <= maximum_element; divisor++) {
            int sum = 0;

            for (int i = 0; i < n; i++) {
                sum += ceil((double) (nums[i]) / (double) (divisor));
            }

            if (sum <= limit) {
                return divisor;
            }
        }

        return -1;
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

    int limit;
    cin >> limit;

    Solution sol;
    cout << sol.smallestDivisor(nums, limit) << "\n";

    return 0;
}