#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int search(vector<int> &nums, int k) {
        for (int i = 0; i < nums.size();i++) {
            if (nums[i] == k) {
                return i;
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

    int k;
    cin >> k;

    Solution sol;
    cout << sol.search(nums, k) << "\n";

    return 0;
}