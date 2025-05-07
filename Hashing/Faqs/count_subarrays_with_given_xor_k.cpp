#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int subarraysWithXorK(vector<int> &nums, int k) {
        int n = nums.size();
        int count = 0;

        for (int start_index = 0; start_index < n; start_index++) {
            for (int end_index = start_index; end_index < n; end_index++) {
                int xorr = 0;

                for (int i = start_index; i <= end_index; i++) {
                    xorr ^= nums[i];
                }

                if (xorr == k) {
                    count++;            
                }
            }
        }

        return count;
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
    cout << sol.subarraysWithXorK(nums, k) << "\n";

    return 0;
}