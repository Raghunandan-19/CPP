#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxConsecutiveGoodNums(vector<int>& nums, vector<int>& goodNumbers) {
        unordered_set<int> goodSet(goodNumbers.begin(), goodNumbers.end());

        int cnt = 0;
        int maxCnt = 0;

        for (int num : nums) {
            if (goodSet.count(num)) {
                cnt++;
                maxCnt = max(maxCnt, cnt);
            } else {
                cnt = 0;
            }
        }

        

        return maxCnt;
    }
};

int main() {
    int n, m;
    cin >> n;
    vector<int> nums(n);

    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    cin >> m;
    vector<int> goodNumbers(m);

    for (int i = 0; i < m; ++i) {
        cin >> goodNumbers[i];
    }

    Solution sol;
    int result = sol.maxConsecutiveGoodNums(nums, goodNumbers);
    cout << result << "\n";

    return 0;
}