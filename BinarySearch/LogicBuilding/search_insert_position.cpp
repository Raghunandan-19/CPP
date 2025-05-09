#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int> &nums, int x) {
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            if (nums[i] >= x) {
                return i;
            }
        }

        return n;
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
    cout << sol.searchInsert(nums, x) << "\n";

    return 0;
}