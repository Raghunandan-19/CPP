#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int> &nums) {
        int n = nums.size();

        int zeroIndex = -1;

        for (int i = 0; i < n; i++) {
            if (nums[i] == 0) {
                zeroIndex = i;
                break;
            }
        }

        if (zeroIndex == -1) return;

        for (int i = zeroIndex + 1; i < n; i++) {
            if (nums[i] != 0) {
                swap(nums[i], nums[zeroIndex]);
                zeroIndex++;
            }
        }
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
    sol.moveZeroes(nums);
    for (auto num : nums) {
        cout << num << " ";
    }
    cout << "\n";

    return 0;
}