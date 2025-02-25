#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int> &nums) {
        int n = nums.size();
        unordered_map<int, int> mpp;

        for (auto &num : nums) {
            mpp[num]++;
        }

        for (auto &el : mpp) {
            if (el.second > (n / 2)) {
                return el.first;
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

    Solution sol;
    cout << sol.majorityElement(nums) << "\n";

    return 0;
}