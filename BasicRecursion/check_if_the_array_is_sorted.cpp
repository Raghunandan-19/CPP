#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    bool sorted(int i, vector<int> &nums) {
        if (i >= nums.size()) {
            return true;
        }

        if (nums[i - 1] > nums[i]) {
            return false;
        }

        return sorted(i + 1, nums);
    }
public:
    bool isSorted(vector<int> &nums) {
        return sorted(1, nums);
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
    if (sol.isSorted(nums)) {
        cout << "True" << "\n";
    }
    else {
        cout << "False" << "\n";
    }

    return 0;
}