#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> majorityElementTwo(vector<int> &nums) {
        int n = nums.size();
        map<int, int> mpp;

        for (int num : nums) {
            mpp[num]++;
        }

        vector<int> ans;
        for (auto &it : mpp) {
            if (it.second > (n / 3)) {
                ans.push_back(it.first);
            }
        }

        return ans;
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
    for (auto &num : sol.majorityElementTwo(nums)) {
        cout << num << " ";
    }
    cout << "\n";

    return 0;
}