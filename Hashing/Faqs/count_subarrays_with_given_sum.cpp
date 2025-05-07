#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int subarraySum(vector<int> &nums, int k) {
        int n = nums.size();
        int cnt = 0;

        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                int sum = 0;

                for (int l = i; l <= j; l++) {
                    sum += nums[l];
                }

                if (sum == k) {
                    cnt++;
                }
            }
        }

        return cnt;
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
    cout << sol.subarraySum(nums, k) << "\n";

    return 0;
}