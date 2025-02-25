#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int> &nums) {
        int n = nums.size();

        for (int i = 0; i < n - 1; i++) {
            int cnt = 1;
            
            for (int j = i + 1; j < n; j++) {
                if (nums[j] == nums[i]) {
                    cnt++;
                }

                if (cnt > (n / 2)) {
                    return nums[i];
                }
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