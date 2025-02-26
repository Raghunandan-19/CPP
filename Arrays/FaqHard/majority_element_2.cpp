#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> majorityElementTwo(vector<int> &nums) {
        int n = nums.size();
        int cnt1 = 0, cnt2 = 0;
        int el1, el2;

        // First pass to find potential majority elements
        for (int i = 0; i < n; i++) {
            if (cnt1 == 0 && nums[i] != el2) {
                cnt1 = 1;
                el1 = nums[i];
            }
            else if (cnt2 == 0 && nums[i] != el1) {
                cnt2 = 1;
                el2 = nums[i];
            }
            else if (el1 == nums[i]) {
                cnt1++;
            }
            else if (el2 == nums[i]) {
                cnt2++;
            }
            else {
                cnt1--;
                cnt2--;
            }
        }

        vector<int> ans;
        cnt1 = 0, cnt2 = 0;

        // Second pass to confirm the majority elements
        for (int i = 0; i < n; i++) {
            if (nums[i] == el1) {
                cnt1++;
            }

            if (nums[i] == el2) {
                cnt2++;
            }
        }

        // Check if the elements appear more than n/3 times
        if (cnt1 > (n / 3)) {
            ans.push_back(el1);
        }

        if (cnt2 > (n / 3)) {
            ans.push_back(el2);
        }

        // Sort the result before returning
        sort(ans.begin(), ans.end());
        
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