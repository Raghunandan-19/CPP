#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    int sum(int i, vector<int> &nums) {
        if (i >= nums.size()) {
            return 0;
        }

        return nums[i] + sum(i + 1, nums);
    }
public:
    int arraySum(vector<int> &nums) {
        return sum(0, nums);
    }
};

int main() {
    int n;
    cin >> n;
    vector<int> nums;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        nums.push_back(x);
    }

    Solution sol;
    cout << sol.arraySum(nums) << "\n";

    return 0;
}