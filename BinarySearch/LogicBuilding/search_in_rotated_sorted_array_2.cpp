#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool searchInARotatedSortedArrayII(vector<int> &nums, int k)  {
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            if (nums[i] == k) {
                return true;
            }
        }

        return false;
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
    if (sol.searchInARotatedSortedArrayII(nums, k)) {
        cout << "True" << "\n";
    }
    else {
        cout << "False" << "\n";
    }

    return 0;
}