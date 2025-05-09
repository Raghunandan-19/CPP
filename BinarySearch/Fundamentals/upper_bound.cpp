#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int upperBound(vector<int> &nums, int x) {
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > x) {
                return i;
            }
        }

        return nums.size();
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

    int x;
    cin >> x;

    Solution sol;
    cout << sol.upperBound(nums, x) << "\n";

    return 0;
}