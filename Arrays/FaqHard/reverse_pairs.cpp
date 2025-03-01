#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int reversePairs(vector<int> &nums) {
        int n = nums.size();
        int cnt = 0;

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (nums[i] > 2 * nums[j]) {
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

    Solution sol;
    cout << sol.reversePairs(nums) << "\n";

    return 0;
}