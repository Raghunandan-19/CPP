#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int singleNonDuplicate(vector<int> &nums) {
        int n = nums.size();
        int xorr = 0;

        for (int i = 0; i < n; i++) {
            xorr ^= nums[i];
        }

        return xorr;
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
    cout << sol.singleNonDuplicate(nums) << "\n";

    return 0;
}